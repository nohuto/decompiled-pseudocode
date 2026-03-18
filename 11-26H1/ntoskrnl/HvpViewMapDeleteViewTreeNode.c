/*
 * XREFs of HvpViewMapDeleteViewTreeNode @ 0x1408B7DE0
 * Callers:
 *     HvpViewMapCleanup @ 0x1408B7D00 (HvpViewMapCleanup.c)
 * Callees:
 *     HvpViewMapFreeView @ 0x1408B7E00 (HvpViewMapFreeView.c)
 */

__int64 __fastcall HvpViewMapDeleteViewTreeNode(__int64 a1, __int64 a2)
{
  return HvpViewMapFreeView(a2, a1);
}
