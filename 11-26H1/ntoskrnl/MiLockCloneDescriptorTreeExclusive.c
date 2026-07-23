/*
 * XREFs of MiLockCloneDescriptorTreeExclusive @ 0x14050B54C
 * Callers:
 *     MiCloneTreeUpdate @ 0x1404EE49C (MiCloneTreeUpdate.c)
 *     MiInsertClone @ 0x1404F0180 (MiInsertClone.c)
 *     MiSetCloneParentForkInProgress @ 0x140511B1C (MiSetCloneParentForkInProgress.c)
 *     MiDeleteCloneTree @ 0x140528E14 (MiDeleteCloneTree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall MiLockCloneDescriptorTreeExclusive(__int64 a1)
{
  return ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 1040) + 1280LL));
}
