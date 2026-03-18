/*
 * XREFs of MiDeleteCachedKernelShadowStack @ 0x1402A97A0
 * Callers:
 *     MiFindContiguousPagesNode @ 0x1402904F0 (MiFindContiguousPagesNode.c)
 *     MiPruneCachedStackList @ 0x140292358 (MiPruneCachedStackList.c)
 *     MiAdjustCachedStacks @ 0x1402A8504 (MiAdjustCachedStacks.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406FF438 (MiRemoveNonIdealCachedStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiDeleteKernelStackPages @ 0x14028E9CC (MiDeleteKernelStackPages.c)
 */

unsigned __int64 __fastcall MiDeleteCachedKernelShadowStack(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiDeleteKernelStackPages(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL, 1LL, 0LL, a2);
  return MiReleasePtes((__int64)&unk_140E34B00, (unsigned __int64 *)(v2 - 8), 3u);
}
