/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x180160210
 * Callers:
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x180067A40 (TppCancelWait.c)
 *     TpReleaseWait @ 0x1800703F0 (TpReleaseWait.c)
 *     TppWaitTimerExpiration @ 0x1800FBF7C (TppWaitTimerExpiration.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelWaitCompletionPacket()
{
  __int64 result; // rax

  result = 151LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
