/*
 * XREFs of ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1801B2114
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18005E6F4 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801B1F30 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x18025F65C (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x18027B234 (--0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DMATRIX *__fastcall CMILMatrix::GetD3DMatrix(struct _D3DMATRIX *this, struct _D3DMATRIX *__return_ptr retstr)
{
  *retstr = *this;
  return retstr;
}
