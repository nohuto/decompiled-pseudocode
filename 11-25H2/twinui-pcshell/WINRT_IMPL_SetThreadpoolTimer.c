/*
 * XREFs of WINRT_IMPL_SetThreadpoolTimer @ 0x1802D34D4
 * Callers:
 *     ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x18033A52C (-create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 *     ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x18033A734 (-fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_IMPL_SetThreadpoolTimer(PTP_TIMER pti, PFILETIME pftDueTime, DWORD msPeriod, DWORD msWindowLength)
{
  SetThreadpoolTimer(pti, pftDueTime, msPeriod, msWindowLength);
}
