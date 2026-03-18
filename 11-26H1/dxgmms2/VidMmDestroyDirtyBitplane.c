/*
 * XREFs of VidMmDestroyDirtyBitplane @ 0x14004D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyDirtyBitplane@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x14009D6D8 (-DestroyDirtyBitplane@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DIRTY_BITPLANE@@@Z.c)
 */

void __fastcall VidMmDestroyDirtyBitplane(VIDMM_GLOBAL *a1, struct VIDMM_DIRTY_BITPLANE *a2)
{
  VIDMM_GLOBAL::DestroyDirtyBitplane(a1, a2);
}
