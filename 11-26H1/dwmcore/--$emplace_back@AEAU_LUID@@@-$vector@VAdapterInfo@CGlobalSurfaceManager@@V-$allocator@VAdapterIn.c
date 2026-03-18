/*
 * XREFs of ??$emplace_back@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18022DE04
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x180131620 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<CGlobalSurfaceManager::AdapterInfo>::emplace_back<_LUID &>(__int64 *a1, __int64 *a2)
{
  if ( a1[1] == a1[2] )
    return std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_reallocate<_LUID &>(a1, a1[1], a2);
  else
    return (char *)std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_back_with_unused_capacity<_LUID &>(
                     (__int64)a1,
                     a2);
}
