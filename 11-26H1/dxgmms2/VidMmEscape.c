/*
 * XREFs of VidMmEscape @ 0x14004D540
 * Callers:
 *     <none>
 * Callees:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x14009DE94 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 */

__int64 __fastcall VidMmEscape(VIDMM_GLOBAL *a1, struct VIDMM_DEVICE *a2, struct _D3DKMT_VIDMM_ESCAPE *a3, bool a4)
{
  return VIDMM_GLOBAL::Escape(a1, a2, a3, a4);
}
