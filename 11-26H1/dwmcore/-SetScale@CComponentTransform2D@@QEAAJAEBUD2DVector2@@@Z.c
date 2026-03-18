/*
 * XREFs of ?SetScale@CComponentTransform2D@@QEAAJAEBUD2DVector2@@@Z @ 0x1801BA500
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801988A4 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV-$TMilR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::SetScale(CComponentTransform2D *this, const struct D2DVector2 *a2)
{
  return ((__int64 (__fastcall *)(CComponentTransform2D *, void *, const struct D2DVector2 *))off_1803DC090)(
           this,
           &CComponentTransform2D::sc_Scale,
           a2);
}
