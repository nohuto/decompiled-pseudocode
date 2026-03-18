/*
 * XREFs of MiStoreChargeReservedPages @ 0x14070A284
 * Callers:
 *     MmStoreRegister @ 0x14087D67C (MmStoreRegister.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiStoreChargeReservedPages(__int64 a1)
{
  KIRQL v3; // al

  if ( (int)MiAcquireNonPagedResources((ULONG *)a1, 0x20uLL, 0LL, 6LL) < 0 )
    return 0LL;
  v3 = ExAcquireSpinLockExclusive(&dword_140E2EB80);
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 4u);
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB80);
  else
    ExReleaseSpinLockExclusive(&dword_140E2EB80, v3);
  return 1LL;
}
