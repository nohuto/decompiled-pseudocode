/*
 * XREFs of Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline @ 0x140092D98
 * Callers:
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x14007ABE0 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14007AE20 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 * Callees:
 *     Feature_CFHCancelTimerFix__private_IsEnabledFallback @ 0x140092DD4 (Feature_CFHCancelTimerFix__private_IsEnabledFallback.c)
 */

__int64 Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CFHCancelTimerFix__private_featureState & 0x10) != 0 )
    return Feature_CFHCancelTimerFix__private_featureState & 1;
  else
    return Feature_CFHCancelTimerFix__private_IsEnabledFallback(
             (unsigned int)Feature_CFHCancelTimerFix__private_featureState,
             3LL);
}
