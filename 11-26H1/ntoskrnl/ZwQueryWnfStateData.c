/*
 * XREFs of ZwQueryWnfStateData @ 0x14072ADE0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1406227E0 (RtlRaiseCustomSystemEventTrigger.c)
 *     DifZwQueryWnfStateDataWrapper @ 0x1406B8BE0 (DifZwQueryWnfStateDataWrapper.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x140717C30 (UcpRetrieveCurrentConfigSettings.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140AC12BC (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140AC1EBC (RtlpFcNotifyFeatureUsageTarget.c)
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
