/*
 * XREFs of MiZeroBootCalibratorStarted @ 0x14070EDD8
 * Callers:
 *     MiStartZeroEngineThreads @ 0x140B276E4 (MiStartZeroEngineThreads.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
