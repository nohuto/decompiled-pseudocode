/*
 * XREFs of MiUnmapSinglePage @ 0x1404FE958
 * Callers:
 *     MiFreeForkMaps @ 0x140A07F00 (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes(
           (__int64)&stru_140E366D8.WaitBlockList,
           (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           1u);
}
