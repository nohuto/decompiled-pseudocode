/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x1405FFFD0
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1405FFFA0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x140BF8FAC (PfSnBeginBootPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea);
  v5 = *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[32];
  if ( a2 )
    *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[32] |= a1;
  else
    *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[32] &= ~a1;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea, v4);
  return v5;
}
