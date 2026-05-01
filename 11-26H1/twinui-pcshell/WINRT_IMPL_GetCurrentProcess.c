/*
 * XREFs of WINRT_IMPL_GetCurrentProcess @ 0x1802CA46F
 * Callers:
 *     ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180331984 (-fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HANDLE __stdcall WINRT_IMPL_GetCurrentProcess()
{
  return GetCurrentProcess();
}
