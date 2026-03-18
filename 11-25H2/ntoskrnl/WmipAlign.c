/*
 * XREFs of WmipAlign @ 0x14046B0EC
 * Callers:
 *     WmipDereferenceEvent @ 0x1409B196C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409B318C (WmipIncludeStaticNames.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipAlign(int a1, int *a2)
{
  int v2; // ecx
  char result; // al

  v2 = a1 - 1;
  if ( *a2 + v2 < (unsigned int)*a2 )
    return 0;
  result = 1;
  *a2 = (*a2 + v2) & ~v2;
  return result;
}
