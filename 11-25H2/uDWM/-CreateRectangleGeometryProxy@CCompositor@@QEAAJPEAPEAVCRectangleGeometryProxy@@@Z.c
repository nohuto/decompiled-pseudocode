/*
 * XREFs of ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003E0FC
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180036B70 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18003C544 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F138 (-CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryPr.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18006F1B8 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18009670C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateRectangleGeometryProxy(CCompositor *this, struct CRectangleGeometryProxy **a2)
{
  return CCompositor::CreateProxy<CRectangleGeometryProxy>(this, a2);
}
