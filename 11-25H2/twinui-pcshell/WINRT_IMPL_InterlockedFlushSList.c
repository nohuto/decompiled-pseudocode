/*
 * XREFs of WINRT_IMPL_InterlockedFlushSList @ 0x1802DBAB1
 * Callers:
 *     ?clear_factory_cache@winrt@@YAXXZ @ 0x1802DEB8C (-clear_factory_cache@winrt@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall WINRT_IMPL_InterlockedFlushSList(PSLIST_HEADER ListHead)
{
  return InterlockedFlushSList(ListHead);
}
