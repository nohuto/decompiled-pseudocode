/*
 * XREFs of ?ShouldDraw@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD91C
 * Callers:
 *     ?Generate@CThemePartPrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD620 (-Generate@CThemePartPrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsSqueegeePart@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD824 (-IsSqueegeePart@CThemePartPrimitive@@AEBA_NXZ.c)
 */

bool __fastcall CThemePartPrimitive::ShouldDraw(CThemePartPrimitive *this)
{
  return !CThemePartPrimitive::IsSqueegeePart(this);
}
