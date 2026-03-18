/*
 * XREFs of ?IsOfType@?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248FC4
 * Callers:
 *     ?IsOfType@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248E80 (-IsOfType@-$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@UEBA_NW4MIL_RESOURCE_TY.c)
 *     ?IsOfType@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248FA0 (-IsOfType@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@.c)
 *     ?IsOfType@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802491C0 (-IsOfType@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248F70 (-IsOfType@-$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CPositionedLightGeneratedT<CPositionedLight,CLight>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 92 )
    return 1;
  v2 = CLightGeneratedT<CLight,CPropertyChangeResource>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
