/*
 * XREFs of MiWalkAllHugeRanges @ 0x140534FF0
 * Callers:
 *     MiGetNodeHugeScrubRanges @ 0x14086DF80 (MiGetNodeHugeScrubRanges.c)
 *     MmQueryMemoryRanges @ 0x14086E460 (MmQueryMemoryRanges.c)
 *     MiMirrorNodeFreeZeroPages @ 0x140BEF4D4 (MiMirrorNodeFreeZeroPages.c)
 *     MiActOnMirrorBitmap @ 0x140C12CF8 (MiActOnMirrorBitmap.c)
 * Callees:
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 */

__int64 __fastcall MiWalkAllHugeRanges(__int64 a1, __int64 a2)
{
  return MiWalkAllBitmapRanges((unsigned __int64 *)&stru_140E2ED08.SchedulingGroup, a1, a2);
}
