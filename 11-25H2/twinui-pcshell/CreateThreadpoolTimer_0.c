/*
 * XREFs of CreateThreadpoolTimer_0 @ 0x1802D34EC
 * Callers:
 *     ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x18033A52C (-create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PTP_TIMER __stdcall CreateThreadpoolTimer_0(PTP_TIMER_CALLBACK pfnti, PVOID pv, PTP_CALLBACK_ENVIRON pcbe)
{
  return CreateThreadpoolTimer(pfnti, pv, pcbe);
}
