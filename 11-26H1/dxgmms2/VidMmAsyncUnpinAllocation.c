/*
 * XREFs of VidMmAsyncUnpinAllocation @ 0x140043360
 * Callers:
 *     <none>
 * Callees:
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1400F8114 (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VidMmAsyncUnpinAllocation(VIDMM_GLOBAL *a1, struct DXGALLOCATION *a2)
{
  return VIDMM_GLOBAL::AsyncUnpinAllocation(a1, a2);
}
