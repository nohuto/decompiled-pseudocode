/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x180160170
 * Callers:
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     TppInitializeTimerSubQueue @ 0x180065D70 (TppInitializeTimerSubQueue.c)
 *     TppTimerQueueExpiration @ 0x180068340 (TppTimerQueueExpiration.c)
 *     TppSetupNextWait @ 0x1800C9CF0 (TppSetupNextWait.c)
 * Callees:
 *     <none>
 */

__int64 ZwAssociateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 146LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
