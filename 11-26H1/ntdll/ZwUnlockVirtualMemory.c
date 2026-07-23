/*
 * XREFs of ZwUnlockVirtualMemory @ 0x180162A10
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800DEEA0 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x1800DF000 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x1800DF290 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x1800FA9D0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180108930 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x1801089E4 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 479;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
