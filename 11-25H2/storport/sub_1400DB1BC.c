/*
 * XREFs of sub_1400DB1BC @ 0x1400DB1BC
 * Callers:
 *     sub_1400F443C @ 0x1400F443C (sub_1400F443C.c)
 *     sub_1400F4774 @ 0x1400F4774 (sub_1400F4774.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_1400DB1BC(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &unk_140152C50;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_140153160;
  if ( v2 == 1 )
    return &unk_140152F50;
  return 0LL;
}
