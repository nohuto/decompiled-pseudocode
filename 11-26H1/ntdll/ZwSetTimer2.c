/*
 * XREFs of ZwSetTimer2 @ 0x180162750
 * Callers:
 *     TppTimerQueueExpiration @ 0x180068340 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x180068BA0 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 449LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
