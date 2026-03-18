/*
 * XREFs of ?DestroyDirtyBitplane@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x14009D6D8
 * Callers:
 *     VidMmDestroyDirtyBitplane @ 0x14004D4E0 (VidMmDestroyDirtyBitplane.c)
 * Callees:
 *     ?DestroyVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAXPEAV1@@Z @ 0x140050694 (-DestroyVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAXPEAV1@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyDirtyBitplane(VIDMM_GLOBAL *this, struct VIDMM_DIRTY_BITPLANE *a2)
{
  VIDMM_DIRTY_BITPLANE::DestroyVidMmDirtyBitplane(a2);
}
