/*
 * XREFs of MiUnlockAllMemoryLists @ 0x1407041F8
 * Callers:
 *     MiMirrorComplete @ 0x140C00ED4 (MiMirrorComplete.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1404A90F4 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB10);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EA60);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EA70);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2EB88.ApcStateFill[32]);
  return MiIterateOverPartitions((__int64)MiLockMemoryLists, 0LL);
}
