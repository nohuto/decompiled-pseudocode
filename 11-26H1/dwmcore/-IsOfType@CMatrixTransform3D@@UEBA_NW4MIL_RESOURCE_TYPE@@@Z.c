/*
 * XREFs of ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180189E50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180189E80 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 */

char __fastcall CMatrixTransform3D::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 86 )
    return 1;
  if ( a2 == 148 )
    return 1;
  v4 = CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
