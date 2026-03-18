/*
 * XREFs of ?IsOfType@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180285C70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248EB0 (-IsOfType@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTurbulenceEffectGeneratedT<CTurbulenceEffect,CFilterEffect>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 153 )
    return 1;
  v2 = CFilterEffectGeneratedT<CFilterEffect,CEffect>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
