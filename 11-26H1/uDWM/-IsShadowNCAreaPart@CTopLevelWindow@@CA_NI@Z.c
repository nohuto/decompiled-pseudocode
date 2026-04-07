/*
 * XREFs of ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x180065B38
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?IsShadowPart@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD814 (-IsShadowPart@CThemePartPrimitive@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsShadowNCAreaPart(int a1)
{
  return (unsigned int)(a1 - 18) <= 3;
}
