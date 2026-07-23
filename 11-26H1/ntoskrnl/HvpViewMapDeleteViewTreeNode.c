/*
 * XREFs of HvpViewMapDeleteViewTreeNode @ 0x1408BE3B0
 * Callers:
 *     HvpViewMapCleanup @ 0x1408BE2D0 (HvpViewMapCleanup.c)
 * Callees:
 *     HvpViewMapFreeView @ 0x1408BE3D0 (HvpViewMapFreeView.c)
 */

__int64 __fastcall HvpViewMapDeleteViewTreeNode(__int64 a1, __int64 a2)
{
  return HvpViewMapFreeView(a2, a1);
}
