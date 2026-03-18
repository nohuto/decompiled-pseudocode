/*
 * XREFs of ?IsOfType@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248E80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248FC4 (-IsOfType@-$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@.c)
 */

char __fastcall CDistantLightGeneratedT<CDistantLight,CPositionedLight>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 44 )
    return 1;
  v2 = CPositionedLightGeneratedT<CPositionedLight,CLight>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
