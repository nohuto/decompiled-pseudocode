/*
 * XREFs of ?GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800DFBBC
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800DF2D0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1802021A4 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@@Z @ 0x1802048E8 (-CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 *     ?GetSubjectCompositionSurfaceBitmap@CCaptureRenderTarget@@IEAAPEAVCCompositionSurfaceBitmap@@XZ @ 0x18021C314 (-GetSubjectCompositionSurfaceBitmap@CCaptureRenderTarget@@IEAAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180268440 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2AEBVCMILMatrix@@AEBVCShapePtr@@@Z @ 0x1802687D8 (-RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV-$TMi.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 */

struct CCompositionSurfaceBitmap *__fastcall CWindowNode::GetCurrentFlipExSurface(CWindowNode *this)
{
  if ( (*((_BYTE *)this + 896) & 8) != 0 )
    return *(struct CCompositionSurfaceBitmap **)detail::pointer_buffer_impl<CBaseExpression *,0>::first((_QWORD *)this + 104);
  else
    return 0LL;
}
