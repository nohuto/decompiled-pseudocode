/*
 * XREFs of MiLockAllMemoryLists @ 0x1407085D4
 * Callers:
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1404A2784 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions((__int64)MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EBF0);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EBE0);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EC90);
}
