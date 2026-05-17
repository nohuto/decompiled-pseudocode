/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1801600F0
 * Callers:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18003C634 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     CsrClientCallServer @ 0x1800CAAF0 (CsrClientCallServer.c)
 *     SendMessageToWERService @ 0x1800CDDCC (SendMessageToWERService.c)
 *     RtlSendMsgToSm @ 0x180108ED0 (RtlSendMsgToSm.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcSendWaitReceivePort()
{
  __int64 result; // rax

  result = 142LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
