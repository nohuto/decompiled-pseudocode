/*
 * XREFs of MiUpdatePagingFileMinimum @ 0x1406FDD48
 * Callers:
 *     MiExtendPagingFiles @ 0x140B316B4 (MiExtendPagingFiles.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiUpdatePagingFileMinimum(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  KIRQL v5; // al

  v2 = (volatile LONG *)(a1 + 200);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  *(_DWORD *)(a1 + 8) += a2;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v5);
}
