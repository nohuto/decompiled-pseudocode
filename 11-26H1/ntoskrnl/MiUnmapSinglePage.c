/*
 * XREFs of MiUnmapSinglePage @ 0x140505014
 * Callers:
 *     MiFreeForkMaps @ 0x14096220C (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes(
           (__int64)&stru_140E36558.WaitBlockList,
           (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           1u);
}
