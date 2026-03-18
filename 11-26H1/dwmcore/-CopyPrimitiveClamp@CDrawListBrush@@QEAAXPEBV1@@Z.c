/*
 * XREFs of ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x1801AD408
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawListBrush::CopyPrimitiveClamp(CDrawListBrush *this, const struct CDrawListBrush *a2)
{
  char v2; // al

  v2 = *((_BYTE *)a2 + 52);
  *((_BYTE *)this + 52) = v2;
  if ( v2 )
  {
    *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
    *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  }
}
