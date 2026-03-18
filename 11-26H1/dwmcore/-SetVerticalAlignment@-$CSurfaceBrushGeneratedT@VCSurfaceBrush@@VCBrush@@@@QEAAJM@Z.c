/*
 * XREFs of ?SetVerticalAlignment@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DA1C8
 * Callers:
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1801DA024 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180284660 (-SetProperty@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID.c)
 * Callees:
 *     ?OnVerticalAlignmentChanged@CSurfaceBrush@@QEAAXXZ @ 0x180284614 (-OnVerticalAlignmentChanged@CSurfaceBrush@@QEAAXXZ.c)
 */

__int64 __fastcall CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetVerticalAlignment(float *a1, float a2)
{
  if ( a2 != a1[32] )
  {
    a1[32] = a2;
    CSurfaceBrush::OnVerticalAlignmentChanged((CSurfaceBrush *)a1);
  }
  return 0LL;
}
