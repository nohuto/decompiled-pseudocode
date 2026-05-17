/*
 * XREFs of NtLockVirtualMemory @ 0x180161210
 * Callers:
 *     RtlLockMemoryZone @ 0x1800E1760 (RtlLockMemoryZone.c)
 *     RtlExtendMemoryZone @ 0x1800EC380 (RtlExtendMemoryZone.c)
 *     RtlLockCurrentThread @ 0x1800FB260 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x1800FB368 (RtlpLockStack.c)
 *     RtlpModuleEnumeratorCallback @ 0x1800FBE50 (RtlpModuleEnumeratorCallback.c)
 * Callees:
 *     <none>
 */

__int64 NtLockVirtualMemory()
{
  __int64 result; // rax

  result = 279LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
