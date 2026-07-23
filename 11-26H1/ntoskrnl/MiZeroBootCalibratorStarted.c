/*
 * XREFs of MiZeroBootCalibratorStarted @ 0x140713AD8
 * Callers:
 *     MiStartZeroEngineThreads @ 0x140B29FA4 (MiStartZeroEngineThreads.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiZeroBootCalibratorStarted(__int64 a1)
{
  KIRQL v2; // al
  volatile LONG *v3; // rcx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 184) + 14200LL));
  v3 = (volatile LONG *)(*(_QWORD *)(a1 + 184) + 14200LL);
  *(_BYTE *)(a1 + 33) = 0;
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, v2);
}
