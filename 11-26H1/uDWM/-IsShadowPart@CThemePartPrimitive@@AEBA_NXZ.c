/*
 * XREFs of ?IsShadowPart@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD814
 * Callers:
 *     ?ShouldClone@CThemePartPrimitive@@AEBA_NW4CloneOptions@@@Z @ 0x1800BD8E0 (-ShouldClone@CThemePartPrimitive@@AEBA_NW4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CThemePartPrimitive::IsShadowPart(CThemePartPrimitive *this)
{
  return CTopLevelWindow::IsShadowNCAreaPart(*((_DWORD *)this + 18));
}
