/*
 * XREFs of ?IsOfType@?$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248F70 (-IsOfType@-$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CAmbientLightGeneratedT<CAmbientLight,CLight>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 2 )
    return 1;
  v2 = CLightGeneratedT<CLight,CPropertyChangeResource>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
