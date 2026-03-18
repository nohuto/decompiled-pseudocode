/*
 * XREFs of MiSetDeleteOnCloseTimer @ 0x1404B5BD0
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1404ACC30 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 */

void __fastcall MiSetDeleteOnCloseTimer(__int64 a1)
{
  volatile LONG *v1; // rsi
  _QWORD *v3; // rbx
  KIRQL v4; // bp

  v1 = (volatile LONG *)(a1 + 2112);
  v3 = (_QWORD *)(a1 + 2480);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
  if ( (_QWORD *)*v3 == v3 )
  {
    *(_BYTE *)(a1 + 2424) = 0;
  }
  else if ( !*(_BYTE *)(a1 + 2424) )
  {
    *(_BYTE *)(a1 + 2424) = 1;
    KiSetTimerEx(a1 + 2360, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
  }
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  else
    ExReleaseSpinLockExclusive(v1, v4);
}
