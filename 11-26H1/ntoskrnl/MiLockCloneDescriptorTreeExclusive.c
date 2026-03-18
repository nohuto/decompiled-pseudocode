/*
 * XREFs of MiLockCloneDescriptorTreeExclusive @ 0x140511ADC
 * Callers:
 *     MiCloneTreeUpdate @ 0x1404F4EBC (MiCloneTreeUpdate.c)
 *     MiInsertClone @ 0x1404F6B70 (MiInsertClone.c)
 *     MiSetCloneParentForkInProgress @ 0x1405180AC (MiSetCloneParentForkInProgress.c)
 *     MiDeleteCloneTree @ 0x1405267A4 (MiDeleteCloneTree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall MiLockCloneDescriptorTreeExclusive(__int64 a1)
{
  return ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 1040) + 1280LL));
}
