/*
 * XREFs of sub_1400DB158 @ 0x1400DB158
 * Callers:
 *     sub_1400F443C @ 0x1400F443C (sub_1400F443C.c)
 *     sub_1400F4774 @ 0x1400F4774 (sub_1400F4774.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_1400DB158(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &unk_1401532E0;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_1401533E0;
  if ( v2 == 1 )
    return &unk_140152D50;
  return 0LL;
}
