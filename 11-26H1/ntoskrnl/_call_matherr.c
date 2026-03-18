/*
 * XREFs of _call_matherr @ 0x14053A450
 * Callers:
 *     _handle_error @ 0x14053A5A0 (_handle_error.c)
 *     _handle_errorf @ 0x14053A720 (_handle_errorf.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 *     _ctrlfp @ 0x14053AF70 (_ctrlfp.c)
 */

double __fastcall call_matherr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)HalSystemVectorDispatchEntry() )
    xHalTimerWatchdogStop();
  return a6;
}
