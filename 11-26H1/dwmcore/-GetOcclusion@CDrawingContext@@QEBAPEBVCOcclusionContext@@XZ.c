/*
 * XREFs of ?GetOcclusion@CDrawingContext@@QEBAPEBVCOcclusionContext@@XZ @ 0x1801E2A34
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 * Callees:
 *     <none>
 */

const struct COcclusionContext *__fastcall CDrawingContext::GetOcclusion(CDrawingContext *this)
{
  if ( *((_BYTE *)this + 7937) )
    return (const struct COcclusionContext *)*((_QWORD *)this + 995);
  else
    return 0LL;
}
