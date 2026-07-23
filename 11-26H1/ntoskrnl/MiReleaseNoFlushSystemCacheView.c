/*
 * XREFs of MiReleaseNoFlushSystemCacheView @ 0x1404B451C
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiInsertReadiedSystemCacheViews @ 0x1402A28A4 (MiInsertReadiedSystemCacheViews.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiReleaseNoFlushSystemCacheView(__int64 a1, _QWORD *a2)
{
  volatile LONG *v2; // rdi
  KIRQL v4; // si
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v5[3] = 0LL;
  *a2 = v5;
  v2 = (volatile LONG *)(a1 + 2752);
  v5[2] = 1LL;
  a2[1] = v5;
  v5[0] = a2;
  v5[1] = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2752));
  MiInsertReadiedSystemCacheViews(a1, v5);
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v4);
}
