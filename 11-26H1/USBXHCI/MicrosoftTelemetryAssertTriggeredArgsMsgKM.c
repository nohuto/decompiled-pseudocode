/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400578F0
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1400043A4 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140012B70 (Isoch_ProcessTransferEventWithED1.c)
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_LogDiagnosticsOnD0Entry @ 0x14003C9DC (Controller_LogDiagnosticsOnD0Entry.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x140041F28 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Controller_LogRestoreTimeout @ 0x1400421E8 (Controller_LogRestoreTimeout.c)
 *     Interrupter_PrepareInterrupter @ 0x14007BEE4 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140057954 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(int a1, int a2, int a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 1, a1, a2, a3, a4);
}
