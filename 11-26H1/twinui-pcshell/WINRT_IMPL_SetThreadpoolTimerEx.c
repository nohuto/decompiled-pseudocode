/*
 * XREFs of WINRT_IMPL_SetThreadpoolTimerEx @ 0x1802D41E1
 * Callers:
 *     ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x1803319D0 (-fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetThreadpoolTimerEx(
        PTP_TIMER pti,
        PFILETIME pftDueTime,
        DWORD msPeriod,
        DWORD msWindowLength)
{
  return SetThreadpoolTimerEx(pti, pftDueTime, msPeriod, msWindowLength);
}
