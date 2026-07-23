/*
 * XREFs of HalpMiscInitializeTestHooks @ 0x140CB5AC4
 * Callers:
 *     HalpMiscInitSystem @ 0x140BF13F0 (HalpMiscInitSystem.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 */

void __fastcall HalpMiscInitializeTestHooks(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 4408LL);
  if ( v1 )
  {
    if ( (v1 & 1) != 0 )
      xHalTimerWatchdogStop();
  }
}
