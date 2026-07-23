/*
 * XREFs of MiStoreReleaseReservedPageCharges @ 0x14070FA90
 * Callers:
 *     MiStoreDeletePartition @ 0x14070EF98 (MiStoreDeletePartition.c)
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiStoreReleaseReservedPageCharges(__int64 a1)
{
  KIRQL v2; // al

  MiReleaseNonPagedResources(a1, 32LL);
  v2 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFB);
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
  else
    ExReleaseSpinLockExclusive(&dword_140E2ED00, v2);
}
