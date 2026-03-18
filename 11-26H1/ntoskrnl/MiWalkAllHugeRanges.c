/*
 * XREFs of MiWalkAllHugeRanges @ 0x140532B50
 * Callers:
 *     MiGetNodeHugeScrubRanges @ 0x140867BA0 (MiGetNodeHugeScrubRanges.c)
 *     MmQueryMemoryRanges @ 0x140868080 (MmQueryMemoryRanges.c)
 *     MiMirrorNodeFreeZeroPages @ 0x140BE94D4 (MiMirrorNodeFreeZeroPages.c)
 *     MiActOnMirrorBitmap @ 0x140C0CAE8 (MiActOnMirrorBitmap.c)
 * Callees:
 *     MiWalkAllBitmapRanges @ 0x14044B8F0 (MiWalkAllBitmapRanges.c)
 */

__int64 __fastcall MiWalkAllHugeRanges(__int64 a1, __int64 a2)
{
  return MiWalkAllBitmapRanges((unsigned __int64 *)&stru_140E2EB88.SchedulingGroup, a1, a2);
}
