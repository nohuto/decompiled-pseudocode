/*
 * XREFs of CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x14085EBD8
 * Callers:
 *     CmpCleanUpHigherLayerKcbCaches @ 0x140986E48 (CmpCleanUpHigherLayerKcbCaches.c)
 * Callees:
 *     CmpCleanUpKCBCacheTable @ 0x1408AFB20 (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpCleanUpHigherLayerKcbCachesPostCallback(__int64 a1)
{
  CmpCleanUpKCBCacheTable(*(_QWORD *)(a1 + 32));
  if ( *(_QWORD *)a1 == 1LL )
    *(_WORD *)(a1 + 8) |= 0x20u;
  return 0LL;
}
