/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x18015FFF0
 * Callers:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180026BA4 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     CsrClientCallServer @ 0x1800C8260 (CsrClientCallServer.c)
 *     SendMessageToWERService @ 0x1800CB53C (SendMessageToWERService.c)
 *     RtlSendMsgToSm @ 0x180108870 (RtlSendMsgToSm.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 142;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
