/*
 * XREFs of MiFlushCachedIoPfnRange @ 0x14052448C
 * Callers:
 *     MiSetIoPfnNodeCellsActive @ 0x140312050 (MiSetIoPfnNodeCellsActive.c)
 *     MiFlushStaleCacheMap @ 0x1406F3FF0 (MiFlushStaleCacheMap.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x1406F4220 (MiIoPfnTreeExclusionCompatible.c)
 * Callees:
 *     MiFlushCacheMdl @ 0x140516770 (MiFlushCacheMdl.c)
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
  _InterlockedAdd(&dword_140E35EF8, 1u);
  return MiFlushCacheMdl(a1, a3, 1);
}
