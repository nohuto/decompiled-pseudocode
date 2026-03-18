/*
 * XREFs of ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18013F140
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18013F170 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CSpriteVisual::IsOfType(__int64 a1, int a2)
{
  char result; // al

  if ( a2 == 139 )
    return 1;
  if ( a2 == 156 )
    return 1;
  result = CPropertyChangeResource::IsOfType();
  if ( result )
    return 1;
  return result;
}
