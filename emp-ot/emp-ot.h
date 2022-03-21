/** @defgroup OT Oblivious Transfer
*/

#include "emp-ot-tg/emp-ot/ot.h"
#include "emp-ot-tg/emp-ot/ideal.h"

// Defines or does not define INCLUDE_LATTICE_OT
// depending on whether or not lattice_ot is available
#include "emp-ot-tg/emp-ot/latticeInclude.h"

// The include is kept here instead of being placed
// in latticeInclude.h so it remains in the documentation
#ifdef INCLUDE_LATTICE_OT
#include "emp-ot-tg/emp-ot/lattice.h"
#endif

#include "emp-ot-tg/emp-ot/co.h"
#include "emp-ot-tg/emp-ot/np.h"

#include "emp-ot-tg/emp-ot/shextension.h"
#include "emp-ot-tg/emp-ot/ot_extension.h"
#include "emp-ot-tg/emp-ot/mextension.h"

#include "emp-ot-tg/emp-ot/deltaot.h"

//typedef MOTExtension_ALSZ MOTExtension;
