/*
 * XREFs of MiFlushCachedIoPfnRange @ 0x140526AFC
 * Callers:
 *     MiSetIoPfnNodeCellsActive @ 0x140314080 (MiSetIoPfnNodeCellsActive.c)
 *     MiFlushStaleCacheMap @ 0x1406F8C5C (MiFlushStaleCacheMap.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x1406F8E8C (MiIoPfnTreeExclusionCompatible.c)
 * Callees:
 *     MiFlushCacheMdl @ 0x1405101E0 (MiFlushCacheMdl.c)
 */

__int64 __fastcall MiFlushCachedIoPfnRange(__int64 a1, int a2, int a3)
{
  unsigned int v3; // edx

  v3 = a2 << 12;
  *(_DWORD *)(a1 + 40) = v3;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = 0;
  *(_WORD *)(a1 + 8) = 8 * ((v3 >> 12) + 6);
  *(_WORD *)(a1 + 10) = 2;
  _InterlockedAdd(&dword_140E36078, 1u);
  return MiFlushCacheMdl(a1, a3, 1);
}
