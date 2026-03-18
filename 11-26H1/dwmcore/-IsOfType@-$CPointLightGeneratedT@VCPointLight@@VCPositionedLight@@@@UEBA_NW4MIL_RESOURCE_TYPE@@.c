/*
 * XREFs of ?IsOfType@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248FC4 (-IsOfType@-$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@.c)
 */

char __fastcall CPointLightGeneratedT<CPointLight,CPositionedLight>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 91 )
    return 1;
  v2 = CPositionedLightGeneratedT<CPositionedLight,CLight>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
