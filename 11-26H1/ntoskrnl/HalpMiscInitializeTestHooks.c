/*
 * XREFs of HalpMiscInitializeTestHooks @ 0x140CAFA84
 * Callers:
 *     HalpMiscInitSystem @ 0x140BEB3F0 (HalpMiscInitSystem.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
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
