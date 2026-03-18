/*
 * XREFs of ?IsOfType@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B11E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18013F170 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::IsOfType(
        __int64 a1,
        int a2)
{
  char v2; // cl
  bool v4; // al

  if ( a2 == 4 )
    return 1;
  v4 = CPropertyChangeResource::IsOfType(a1, a2);
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
