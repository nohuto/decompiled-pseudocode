/*
 * XREFs of ?IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x180065E7C
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?IsSqueegeePart@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD824 (-IsSqueegeePart@CThemePartPrimitive@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsGlassSheetNCAreaPart(int a1)
{
  return (unsigned int)(a1 - 9) <= 8;
}
