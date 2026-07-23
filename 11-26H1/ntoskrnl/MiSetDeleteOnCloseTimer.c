/*
 * XREFs of MiSetDeleteOnCloseTimer @ 0x1404AEF30
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1404A62C0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
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
