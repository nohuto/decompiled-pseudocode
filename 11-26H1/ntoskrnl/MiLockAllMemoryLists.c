/*
 * XREFs of MiLockAllMemoryLists @ 0x140703904
 * Callers:
 *     MmDuplicateMemory @ 0x140C0CEE0 (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1404A90F4 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions((__int64)MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&stru_140E2EB88.ApcStateFill[32]);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EA70);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EA60);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EB10);
}
