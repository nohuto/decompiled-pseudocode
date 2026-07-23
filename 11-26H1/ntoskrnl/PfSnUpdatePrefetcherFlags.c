/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x140602A80
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x140602A50 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x140BFEFAC (PfSnBeginBootPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E67200.StateSaveArea);
  v5 = *(_DWORD *)&stru_140E67200.WaitBlockFill11[32];
  if ( a2 )
    *(_DWORD *)&stru_140E67200.WaitBlockFill11[32] |= a1;
  else
    *(_DWORD *)&stru_140E67200.WaitBlockFill11[32] &= ~a1;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E67200.StateSaveArea, v4);
  return v5;
}
