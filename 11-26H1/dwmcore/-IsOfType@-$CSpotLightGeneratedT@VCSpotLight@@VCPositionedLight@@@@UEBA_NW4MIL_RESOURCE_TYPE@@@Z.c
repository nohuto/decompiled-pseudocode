/*
 * XREFs of ?IsOfType@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802491C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248FC4 (-IsOfType@-$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@.c)
 */

char __fastcall CSpotLightGeneratedT<CSpotLight,CPositionedLight>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 137 )
    return 1;
  v2 = CPositionedLightGeneratedT<CPositionedLight,CLight>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
