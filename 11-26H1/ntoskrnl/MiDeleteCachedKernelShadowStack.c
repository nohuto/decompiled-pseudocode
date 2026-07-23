/*
 * XREFs of MiDeleteCachedKernelShadowStack @ 0x1402A8BB0
 * Callers:
 *     MiFindContiguousPagesNode @ 0x14028FA50 (MiFindContiguousPagesNode.c)
 *     MiPruneCachedStackList @ 0x1402918B8 (MiPruneCachedStackList.c)
 *     MiAdjustCachedStacks @ 0x1402A7914 (MiAdjustCachedStacks.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140704108 (MiRemoveNonIdealCachedStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiDeleteKernelStackPages @ 0x14028DF2C (MiDeleteKernelStackPages.c)
 */

unsigned __int64 __fastcall MiDeleteCachedKernelShadowStack(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiDeleteKernelStackPages(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL, 1LL, 0LL, a2);
  return MiReleasePtes((__int64)&unk_140E34C80, (unsigned __int64 *)(v2 - 8), 3u);
}
