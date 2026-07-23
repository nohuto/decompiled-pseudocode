/*
 * XREFs of NtTraceControl @ 0x180162910
 * Callers:
 *     EtwpNotificationThread @ 0x18003AF40 (EtwpNotificationThread.c)
 *     EtwEventActivityIdControl @ 0x180040A60 (EtwEventActivityIdControl.c)
 *     EtwpSetProviderTraits @ 0x180041D70 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042360 (EtwpRegisterProvider.c)
 *     EtwpDemuxUmTraceHandle @ 0x18005C840 (EtwpDemuxUmTraceHandle.c)
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18009052C (EtwpRegisterTpNotificationOnce.c)
 *     EtwEventWriteEndScenario @ 0x1800B7EA0 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800B7FE0 (EtwEventWriteStartScenario.c)
 *     EtwSendNotification @ 0x1800DE720 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800DE9A8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpGetMaxLogger @ 0x1800E2DA8 (EtwpGetMaxLogger.c)
 *     EtwReplyNotification @ 0x18010ACF0 (EtwReplyNotification.c)
 *     EtwpTrackProviderBinary @ 0x180117C5C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x180158B80 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180158BDC (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 471;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
