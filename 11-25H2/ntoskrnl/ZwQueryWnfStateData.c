/*
 * XREFs of ZwQueryWnfStateData @ 0x14069DF40
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405E3BE0 (RtlRaiseCustomSystemEventTrigger.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x1406897DC (UcpRetrieveCurrentConfigSettings.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A3050C (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140A30B14 (RtlpFcNotifyFeatureUsageTarget.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
