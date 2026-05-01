/*
 * XREFs of WINRT_IMPL_SetThreadpoolTimerEx @ 0x1802DBAFC
 * Callers:
 *     ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x18033A734 (-fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
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
