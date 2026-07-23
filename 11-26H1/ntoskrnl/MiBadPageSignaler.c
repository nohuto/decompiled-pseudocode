/*
 * XREFs of MiBadPageSignaler @ 0x1406F58E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS MiBadPageSignaler()
{
  KIRQL v0; // al

  v0 = ExAcquireSpinLockExclusive(&dword_140E39B60);
  HIBYTE(stru_140E2ED08.AffinityPrimaryGroup) = 0;
  if ( v0 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E39B60);
  else
    ExReleaseSpinLockExclusive(&dword_140E39B60, v0);
  return ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_QUARANTINED, 0LL, 0, 0LL, 0LL, 0, 0);
}
