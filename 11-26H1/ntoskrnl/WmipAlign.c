/*
 * XREFs of WmipAlign @ 0x14049DCA4
 * Callers:
 *     WmipIncludeStaticNames @ 0x140A0C8EC (WmipIncludeStaticNames.c)
 *     WmipDereferenceEvent @ 0x140B5FA28 (WmipDereferenceEvent.c)
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
