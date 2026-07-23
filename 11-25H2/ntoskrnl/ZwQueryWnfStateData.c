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

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
