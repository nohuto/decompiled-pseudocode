/*
 * XREFs of ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x18000616C
 * Callers:
 *     ?IsShadowPart@CAtlasedImage@@QEBAHXZ @ 0x180005550 (-IsShadowPart@CAtlasedImage@@QEBAHXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180005F68 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsShadowNCAreaPart(int a1)
{
  return (unsigned int)(a1 - 18) <= 3;
}
