/*
 * XREFs of Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403B7F0C
 * Callers:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1403B5280 (PopFxEnableWorkOrderWatchdog.c)
 *     KiDecodeTolerableDelayValue @ 0x1403B6BFC (KiDecodeTolerableDelayValue.c)
 *     KiComputeDueTime @ 0x1403B7DD0 (KiComputeDueTime.c)
 *     KiEncodeTolerableDelayValue @ 0x1403B7F44 (KiEncodeTolerableDelayValue.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1403B80D4 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback @ 0x1405351F4 (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback.c)
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
