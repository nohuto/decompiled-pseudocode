/*
 * XREFs of ?IsSqueegeePart@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD824
 * Callers:
 *     ?ShouldClone@CThemePartPrimitive@@AEBA_NW4CloneOptions@@@Z @ 0x1800BD8E0 (-ShouldClone@CThemePartPrimitive@@AEBA_NW4CloneOptions@@@Z.c)
 *     ?ShouldDraw@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD91C (-ShouldDraw@CThemePartPrimitive@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CThemePartPrimitive::IsSqueegeePart(CThemePartPrimitive *this)
{
  return CTopLevelWindow::IsGlassSheetNCAreaPart(*((_DWORD *)this + 18));
}
