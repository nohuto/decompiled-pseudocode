/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140708EC8
 * Callers:
 *     MiMirrorComplete @ 0x140C070E4 (MiMirrorComplete.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1404A2784 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EBE0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EBF0);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
  return MiIterateOverPartitions((__int64)MiLockMemoryLists, 0LL);
}
