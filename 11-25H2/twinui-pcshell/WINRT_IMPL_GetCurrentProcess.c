/*
 * XREFs of WINRT_IMPL_GetCurrentProcess @ 0x1802D354C
 * Callers:
 *     ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x1803324F4 (-fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HANDLE __stdcall WINRT_IMPL_GetCurrentProcess()
{
  return GetCurrentProcess();
}
