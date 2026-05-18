/*
 * XREFs of sub_1800D2974 @ 0x1800D2974
 * Callers:
 *     sub_1800D4248 @ 0x1800D4248 (sub_1800D4248.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800D1E68 @ 0x1800D1E68 (sub_1800D1E68.c)
 */

__int64 __fastcall sub_1800D2974(__int64 *a1)
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
  sub_1800D1E68((__int64)v2, a1[1]);
  return sub_18000E26C((void *)a1[1], 0xB0uLL);
}
