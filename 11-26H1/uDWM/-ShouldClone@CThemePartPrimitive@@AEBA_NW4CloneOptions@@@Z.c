/*
 * XREFs of ?ShouldClone@CThemePartPrimitive@@AEBA_NW4CloneOptions@@@Z @ 0x1800BD8E0
 * Callers:
 *     ?ClonePrimitive@CThemePartPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z @ 0x1800BCC10 (-ClonePrimitive@CThemePartPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?IsShadowPart@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD814 (-IsShadowPart@CThemePartPrimitive@@AEBA_NXZ.c)
 *     ?IsSqueegeePart@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD824 (-IsSqueegeePart@CThemePartPrimitive@@AEBA_NXZ.c)
 */

char __fastcall CThemePartPrimitive::ShouldClone(CThemePartPrimitive *a1, char a2)
{
  char v2; // dl
  char v3; // r8
  CThemePartPrimitive *v4; // r9

  if ( (a2 & 2) == 0
    || CThemePartPrimitive::IsSqueegeePart(a1)
    || (v2 & 1) == 0 && CThemePartPrimitive::IsShadowPart(v4) )
  {
    return 1;
  }
  return v3;
}
