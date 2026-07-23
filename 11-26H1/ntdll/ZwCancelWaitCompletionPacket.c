/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x180160110
 * Callers:
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x180087E90 (TppCancelWait.c)
 *     TpReleaseWait @ 0x180090840 (TpReleaseWait.c)
 *     TppWaitTimerExpiration @ 0x1800FB6CC (TppWaitTimerExpiration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax

  result = 151;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
