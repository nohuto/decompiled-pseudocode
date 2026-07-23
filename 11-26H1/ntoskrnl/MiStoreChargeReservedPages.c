/*
 * XREFs of MiStoreChargeReservedPages @ 0x14070EF38
 * Callers:
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiStoreChargeReservedPages(__int64 a1)
{
  KIRQL v3; // al

  if ( (int)MiAcquireNonPagedResources((ULONG *)a1, 0x20uLL, 0LL, 6LL) < 0 )
    return 0LL;
  v3 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 4u);
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
  else
    ExReleaseSpinLockExclusive(&dword_140E2ED00, v3);
  return 1LL;
}
