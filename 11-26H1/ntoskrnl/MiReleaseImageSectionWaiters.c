/*
 * XREFs of MiReleaseImageSectionWaiters @ 0x1404D0684
 * Callers:
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiReleaseImageSectionWaiters(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  volatile LONG *v3; // rdi
  KIRQL v5; // al
  __int64 v6; // rbp

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (volatile LONG *)(a2 + 72);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  *(_DWORD *)(a2 + 56) &= ~2u;
  v6 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, v5);
  KeAbPostRelease(v2 + 16);
  return v6;
}
