/*
 * XREFs of _call_matherr @ 0x14053C8D0
 * Callers:
 *     _handle_error @ 0x14053CA20 (_handle_error.c)
 *     _handle_errorf @ 0x14053CBA0 (_handle_errorf.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     _ctrlfp @ 0x14053D3F0 (_ctrlfp.c)
 */

double __fastcall call_matherr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)HalSystemVectorDispatchEntry() )
    xHalTimerWatchdogStop();
  return a6;
}
