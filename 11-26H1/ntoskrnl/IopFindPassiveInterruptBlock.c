/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x1402C5658
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x1402C36B8 (IoProcessPassiveInterrupts.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1407A3BB8 (IopDestroyPassiveInterruptBlock.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140A99270 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x1402C507C (IopReleaseGlobalPassiveInterruptListLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1402C50B8 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1402C5694 (IopFindPassiveInterruptBlockLocked.c)
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
