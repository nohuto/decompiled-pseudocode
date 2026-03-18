/*
 * XREFs of WmipAlign @ 0x1404A4614
 * Callers:
 *     WmipDereferenceEvent @ 0x140A0B9C4 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x140A0CE94 (WmipIncludeStaticNames.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipAlign(int a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  char result; // al

  v2 = *a2 + a1 - 1;
  if ( v2 < *a2 )
    return 0;
  result = 1;
  *a2 = v2 & -a1;
  return result;
}
