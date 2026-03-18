/*
 * XREFs of Isoch_EP_IsMappingStoppedOrPaused @ 0x14004C270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Isoch_EP_IsMappingStoppedOrPaused(__int64 a1)
{
  int v1; // edx
  char result; // al

  v1 = *(_DWORD *)(a1 + 108);
  if ( v1 == 2 )
    return 1;
  result = 0;
  if ( !v1 )
    return 1;
  return result;
}
