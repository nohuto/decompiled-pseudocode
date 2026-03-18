/*
 * XREFs of Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x14020DF04
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29FC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1401FB9F0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FF790 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 * Callees:
 *     Feature_PointerMsgDataBugcheck__private_IsEnabledFallback @ 0x14020DF3C (Feature_PointerMsgDataBugcheck__private_IsEnabledFallback.c)
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
