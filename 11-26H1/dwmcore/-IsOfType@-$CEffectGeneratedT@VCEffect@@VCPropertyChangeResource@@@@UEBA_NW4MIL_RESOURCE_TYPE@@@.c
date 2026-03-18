/*
 * XREFs of ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180189E80
 * Callers:
 *     ?IsOfType@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180176BB0 (-IsOfType@-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180189E50 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248EB0 (-IsOfType@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18013F170 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

bool __fastcall CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(__int64 a1, int a2)
{
  bool result; // al

  if ( a2 == 46 )
    return 1;
  result = CPropertyChangeResource::IsOfType(a1, a2);
  if ( result )
    return 1;
  return result;
}
