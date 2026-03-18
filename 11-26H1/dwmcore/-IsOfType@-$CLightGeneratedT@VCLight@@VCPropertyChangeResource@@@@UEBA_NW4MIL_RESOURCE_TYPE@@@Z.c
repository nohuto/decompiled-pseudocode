/*
 * XREFs of ?IsOfType@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248F70
 * Callers:
 *     ?IsOfType@?$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248CF0 (-IsOfType@-$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248FC4 (-IsOfType@-$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18013F170 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CLightGeneratedT<CLight,CPropertyChangeResource>::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 76 )
    return 1;
  v2 = CPropertyChangeResource::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
