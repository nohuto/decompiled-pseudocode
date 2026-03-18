/*
 * XREFs of ?SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801C48B8
 * Callers:
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x18026267C (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 *     ?UpdateBrushTransform@CCompositionGlyphRun@@AEAAXXZ @ 0x18026A9F0 (-UpdateBrushTransform@CCompositionGlyphRun@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::SetTransform(CComponentTransform2D *this, const struct D2D_MATRIX_3X2_F *a2)
{
  return ((__int64 (__fastcall *)(CComponentTransform2D *, void *, const struct D2D_MATRIX_3X2_F *))off_1803DC0E0)(
           this,
           &CComponentTransform2D::sc_TransformMatrix,
           a2);
}
