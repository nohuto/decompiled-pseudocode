/*
 * XREFs of MiRefreshBackgroundZeroingAffinity @ 0x14070EA3C
 * Callers:
 *     MiAvailableCpusChangeCallback @ 0x14070E260 (MiAvailableCpusChangeCallback.c)
 *     MiZeroPageThread @ 0x14070F040 (MiZeroPageThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PsQueryProcessAvailableCpus @ 0x140532BB0 (PsQueryProcessAvailableCpus.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall MiRefreshBackgroundZeroingAffinity(__int64 a1)
{
  volatile LONG *v1; // rbp
  __int64 v3; // rsi
  KIRQL v4; // al
  __int64 v5; // r8
  KIRQL v6; // r14

  v1 = (volatile LONG *)(a1 + 17376);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 120LL);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 17376));
  v5 = (unsigned __int16)KiMaximumGroups;
  *(_WORD *)(a1 + 17394) = KiMaximumGroups;
  v6 = v4;
  *(_WORD *)(a1 + 17392) = 1;
  *(_DWORD *)(a1 + 17396) = 0;
  memset_0((void *)(a1 + 17400), 0, 8 * v5);
  PsQueryProcessAvailableCpus(v3, a1 + 17392, 0LL, a1 + 17384);
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  else
    ExReleaseSpinLockExclusive(v1, v6);
}
