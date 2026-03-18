/*
 * XREFs of ?IsOfType@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180176BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180189E80 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 */

char __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType(__int64 a1, int a2)
{
  char result; // al

  if ( a2 == 48 )
    return 1;
  result = CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType();
  if ( result )
    return 1;
  return result;
}
