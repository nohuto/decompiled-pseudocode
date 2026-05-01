/*
 * XREFs of WINRT_IMPL_SetThreadpoolTimer @ 0x1802CA3F7
 * Callers:
 *     ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x180330D20 (-create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 *     ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x1803319D0 (-fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_IMPL_SetThreadpoolTimer(PTP_TIMER pti, PFILETIME pftDueTime, DWORD msPeriod, DWORD msWindowLength)
{
  SetThreadpoolTimer(pti, pftDueTime, msPeriod, msWindowLength);
}
