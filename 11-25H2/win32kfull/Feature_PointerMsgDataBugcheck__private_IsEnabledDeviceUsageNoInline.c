/*
 * XREFs of Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x14027C45C
 * Callers:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140139028 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x14027C330 (EditionPrepareHidForInputThreadMigration.c)
 * Callees:
 *     Feature_PointerMsgDataBugcheck__private_IsEnabledFallback @ 0x14027C494 (Feature_PointerMsgDataBugcheck__private_IsEnabledFallback.c)
 */

__int64 Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PointerMsgDataBugcheck__private_featureState & 0x10) != 0 )
    return Feature_PointerMsgDataBugcheck__private_featureState & 1;
  else
    return Feature_PointerMsgDataBugcheck__private_IsEnabledFallback(
             (unsigned int)Feature_PointerMsgDataBugcheck__private_featureState,
             3LL);
}
