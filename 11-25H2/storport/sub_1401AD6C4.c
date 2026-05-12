/*
 * XREFs of sub_1401AD6C4 @ 0x1401AD6C4
 * Callers:
 *     sub_14009E468 @ 0x14009E468 (sub_14009E468.c)
 *     sub_14009EB0C @ 0x14009EB0C (sub_14009EB0C.c)
 *     sub_14009EC74 @ 0x14009EC74 (sub_14009EC74.c)
 *     sub_14009FE10 @ 0x14009FE10 (sub_14009FE10.c)
 *     sub_14017CD1C @ 0x14017CD1C (sub_14017CD1C.c)
 *     sub_1401ACC34 @ 0x1401ACC34 (sub_1401ACC34.c)
 * Callees:
 *     <none>
 */

char **__fastcall sub_1401AD6C4(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 21LL;
  if ( a1 < 0x16 )
    v1 = a1;
  return &off_140148020[4 * v1];
}
