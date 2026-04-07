/*
 * XREFs of ?IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x18000450C
 * Callers:
 *     ?IsSqueegeePart@CAtlasedImage@@QEBAHXZ @ 0x1800044F0 (-IsSqueegeePart@CAtlasedImage@@QEBAHXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180005F68 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsGlassSheetNCAreaPart(int a1)
{
  return (unsigned int)(a1 - 9) <= 8;
}
