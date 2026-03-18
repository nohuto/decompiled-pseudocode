/*
 * XREFs of ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x18015DC60
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18023493C (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     _CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::operator() @ 0x180256B00 (_CCaptureRenderTarget--AddCursorInvalidRects_--_2_--_lambda_1_--operator().c)
 *     _CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2_::operator() @ 0x180256BFC (_CCaptureRenderTarget--RenderCursors_--_18_--_lambda_2_--operator().c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x18026302C (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetBounds(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a2 + 80;
  if ( a1 != *(_QWORD *)(a2 + 72) )
    return a1 + 148;
  return result;
}
