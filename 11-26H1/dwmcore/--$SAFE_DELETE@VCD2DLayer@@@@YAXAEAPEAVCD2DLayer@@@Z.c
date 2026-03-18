/*
 * XREFs of ??$SAFE_DELETE@VCD2DLayer@@@@YAXAEAPEAVCD2DLayer@@@Z @ 0x1801829B0
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 * Callees:
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x1801829E0 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 */

void *__fastcall SAFE_DELETE<CD2DLayer>(CD2DLayer **a1)
{
  CD2DLayer *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CD2DLayer::`scalar deleting destructor'(v2, 1u);
    *a1 = 0LL;
  }
  return result;
}
