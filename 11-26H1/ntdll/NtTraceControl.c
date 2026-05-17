/*
 * XREFs of NtTraceControl @ 0x180162A10
 * Callers:
 *     EtwpDemuxUmTraceHandle @ 0x180011110 (EtwpDemuxUmTraceHandle.c)
 *     EtwpNotificationThread @ 0x1800509C0 (EtwpNotificationThread.c)
 *     EtwEventActivityIdControl @ 0x1800564E0 (EtwEventActivityIdControl.c)
 *     EtwpSetProviderTraits @ 0x1800577F0 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180057DE0 (EtwpRegisterProvider.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800700DC (EtwpRegisterTpNotificationOnce.c)
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 *     EtwEventWriteEndScenario @ 0x1800BA970 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800BAAB0 (EtwEventWriteStartScenario.c)
 *     EtwSendNotification @ 0x1800E0E80 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800E1108 (EtwpReceiveReplyDataBlock.c)
 *     EtwpGetMaxLogger @ 0x1800E4EF8 (EtwpGetMaxLogger.c)
 *     EtwReplyNotification @ 0x18010B380 (EtwReplyNotification.c)
 *     EtwpTrackProviderBinary @ 0x180117EAC (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x180158CB0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180158D0C (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

__int64 NtTraceControl()
{
  __int64 result; // rax

  result = 471LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
