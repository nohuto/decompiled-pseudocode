/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140057924
 * Callers:
 *     RootHub_WaitForResumeCompletion @ 0x140004EF0 (RootHub_WaitForResumeCompletion.c)
 *     Command_Initialize @ 0x140007328 (Command_Initialize.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140012B70 (Isoch_ProcessTransferEventWithED1.c)
 *     RootHub_DetectPortInComplianceMode @ 0x14002D224 (RootHub_DetectPortInComplianceMode.c)
 *     UsbDevice_UcxEvtEnable @ 0x140032FA0 (UsbDevice_UcxEvtEnable.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140057954 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredMsgKM(const char *a1, ...)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1, (__int64)a1);
}
