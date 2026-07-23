/*
 * XREFs of NtLockVirtualMemory @ 0x180161110
 * Callers:
 *     RtlLockMemoryZone @ 0x1800DF000 (RtlLockMemoryZone.c)
 *     RtlExtendMemoryZone @ 0x1800EB550 (RtlExtendMemoryZone.c)
 *     RtlLockCurrentThread @ 0x1800FA9D0 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x1800FAAD8 (RtlpLockStack.c)
 *     RtlpModuleEnumeratorCallback @ 0x1800FB5A0 (RtlpModuleEnumeratorCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 279;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
