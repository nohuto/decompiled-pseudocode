/*
 * XREFs of sub_180060C28 @ 0x180060C28
 * Callers:
 *     sub_180060D14 @ 0x180060D14 (sub_180060D14.c)
 *     sub_180060D20 @ 0x180060D20 (sub_180060D20.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18005FEB8 @ 0x18005FEB8 (sub_18005FEB8.c)
 */

__int64 __fastcall sub_180060C28(__int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    sub_18000E26C(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  sub_18005FEB8((__int64)v2, a1[1]);
  return sub_18000E26C((void *)a1[1], 0x30uLL);
}
