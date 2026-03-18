/*
 * XREFs of _call_matherr @ 0x1404FFA40
 * Callers:
 *     _handle_error @ 0x1404FFB90 (_handle_error.c)
 *     _handle_errorf @ 0x1404FFD10 (_handle_errorf.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     _ctrlfp @ 0x140500560 (_ctrlfp.c)
 */

double __fastcall call_matherr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)PdcCreateWatchdogAroundClientCall() )
    xHalTimerWatchdogStop();
  return a6;
}
