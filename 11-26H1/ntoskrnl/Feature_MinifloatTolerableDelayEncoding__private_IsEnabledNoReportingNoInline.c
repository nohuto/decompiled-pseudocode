/*
 * XREFs of Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403AE1FC
 * Callers:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1403AB570 (PopFxEnableWorkOrderWatchdog.c)
 *     KiDecodeTolerableDelayValue @ 0x1403ACEEC (KiDecodeTolerableDelayValue.c)
 *     KiComputeDueTime @ 0x1403AE0C0 (KiComputeDueTime.c)
 *     KiEncodeTolerableDelayValue @ 0x1403AE234 (KiEncodeTolerableDelayValue.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1403AE3C4 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback @ 0x140532D54 (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback.c)
 */

__int64 Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MinifloatTolerableDelayEncoding__private_featureState & 2) != 0 )
    return Feature_MinifloatTolerableDelayEncoding__private_featureState & 1;
  else
    return Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback(
             (unsigned int)Feature_MinifloatTolerableDelayEncoding__private_featureState,
             0LL);
}
