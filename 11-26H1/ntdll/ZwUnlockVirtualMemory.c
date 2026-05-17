/*
 * XREFs of ZwUnlockVirtualMemory @ 0x180162B10
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800E1600 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x1800E1760 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x1800E19F0 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x1800FB260 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180108F90 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180109044 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

__int64 ZwUnlockVirtualMemory()
{
  __int64 result; // rax

  result = 479LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
