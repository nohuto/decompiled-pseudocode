/*
 * XREFs of WINRT_IMPL_CreateThreadpoolWait @ 0x1802D36FF
 * Callers:
 *     ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180331D60 (-create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PTP_WAIT __stdcall WINRT_IMPL_CreateThreadpoolWait(PTP_WAIT_CALLBACK pfnwa, PVOID pv, PTP_CALLBACK_ENVIRON pcbe)
{
  return CreateThreadpoolWait(pfnwa, pv, pcbe);
}
