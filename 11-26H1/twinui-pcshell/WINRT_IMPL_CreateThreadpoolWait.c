/*
 * XREFs of WINRT_IMPL_CreateThreadpoolWait @ 0x1802CA61F
 * Callers:
 *     ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180330DCC (-create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PTP_WAIT __stdcall WINRT_IMPL_CreateThreadpoolWait(PTP_WAIT_CALLBACK pfnwa, PVOID pv, PTP_CALLBACK_ENVIRON pcbe)
{
  return CreateThreadpoolWait(pfnwa, pv, pcbe);
}
