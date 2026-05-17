/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x180160970
 * Callers:
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TppInitializeTimerSubQueue @ 0x180065D70 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 210LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
