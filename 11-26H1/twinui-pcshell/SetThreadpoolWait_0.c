/*
 * XREFs of SetThreadpoolWait_0 @ 0x1802CA613
 * Callers:
 *     ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180330DCC (-create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 *     ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180331984 (-fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SetThreadpoolWait_0(PTP_WAIT pwa, HANDLE h, PFILETIME pftTimeout)
{
  SetThreadpoolWait(pwa, h, pftTimeout);
}
