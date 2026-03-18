/*
 * XREFs of ZwQueryWnfStateData @ 0x140726210
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14061F790 (RtlRaiseCustomSystemEventTrigger.c)
 *     DifZwQueryWnfStateDataWrapper @ 0x1406B5000 (DifZwQueryWnfStateDataWrapper.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x140712F38 (UcpRetrieveCurrentConfigSettings.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140ABF21C (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140ABFE1C (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
