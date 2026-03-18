/*
 * XREFs of MiBadPageSignaler @ 0x1406F0C70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

__int64 MiBadPageSignaler()
{
  KIRQL v0; // al

  v0 = ExAcquireSpinLockExclusive(&dword_140E399E0);
  HIBYTE(stru_140E2EB88.AffinityPrimaryGroup) = 0;
  if ( v0 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E399E0);
  else
    ExReleaseSpinLockExclusive(&dword_140E399E0, v0);
  return ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_QUARANTINED, 0LL, 0LL, 0LL, 0LL, 0, 0);
}
