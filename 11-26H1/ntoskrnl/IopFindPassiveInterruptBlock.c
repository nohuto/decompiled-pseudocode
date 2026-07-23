/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x1403102F4
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x14030E378 (IoProcessPassiveInterrupts.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1407A66F8 (IopDestroyPassiveInterruptBlock.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140A9D3F0 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x14030FD3C (IopReleaseGlobalPassiveInterruptListLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14030FD78 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x140310330 (IopFindPassiveInterruptBlockLocked.c)
 */

__int64 __fastcall IopFindPassiveInterruptBlock(unsigned int a1)
{
  __int64 PassiveInterruptBlockLocked; // rbx
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v4);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(a1);
  IopReleaseGlobalPassiveInterruptListLock(v4);
  return PassiveInterruptBlockLocked;
}
