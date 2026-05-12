/*
 * XREFs of sub_1400DB18C @ 0x1400DB18C
 * Callers:
 *     sub_1400F384C @ 0x1400F384C (sub_1400F384C.c)
 *     sub_1400F3E44 @ 0x1400F3E44 (sub_1400F3E44.c)
 *     sub_1400F443C @ 0x1400F443C (sub_1400F443C.c)
 *     sub_1400F4774 @ 0x1400F4774 (sub_1400F4774.c)
 *     sub_1400F4DB8 @ 0x1400F4DB8 (sub_1400F4DB8.c)
 *     sub_1401141CC @ 0x1401141CC (sub_1401141CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400DB18C(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 256LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 384LL;
  if ( v2 == 1 )
    return 512LL;
  return 0LL;
}
