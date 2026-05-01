/*
 * XREFs of WINRT_IMPL_SetThreadpoolWaitEx @ 0x1802D41D5
 * Callers:
 *     ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180331984 (-fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetThreadpoolWaitEx(PTP_WAIT pwa, HANDLE h, PFILETIME pftTimeout, PVOID Reserved)
{
  return SetThreadpoolWaitEx(pwa, h, pftTimeout, Reserved);
}
