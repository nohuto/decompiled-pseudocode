/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x140B45A40
 * Callers:
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 * Callees:
 *     CmpRebuildKcbCache @ 0x1408BCBD8 (CmpRebuildKcbCache.c)
 *     CmpIsKeyDeleted @ 0x1408C1E30 (CmpIsKeyDeleted.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2)
{
  if ( (!a2 || *(_QWORD *)(a1 + 32) == a2)
    && !CmpIsKeyDeleted(a1, 0LL)
    && *(_QWORD *)(a1 + 32)
    && (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(a1);
  }
  return 0LL;
}
