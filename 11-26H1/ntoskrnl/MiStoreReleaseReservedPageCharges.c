/*
 * XREFs of MiStoreReleaseReservedPageCharges @ 0x14070ADDC
 * Callers:
 *     MiStoreDeletePartition @ 0x14070A2E4 (MiStoreDeletePartition.c)
 *     MmStoreRegister @ 0x14087D67C (MmStoreRegister.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiStoreReleaseReservedPageCharges(__int64 a1)
{
  KIRQL v2; // al

  MiReleaseNonPagedResources(a1, 32LL);
  v2 = ExAcquireSpinLockExclusive(&dword_140E2EB80);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFB);
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB80);
  else
    ExReleaseSpinLockExclusive(&dword_140E2EB80, v2);
}
