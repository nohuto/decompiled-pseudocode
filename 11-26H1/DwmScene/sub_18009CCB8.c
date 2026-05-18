/*
 * XREFs of sub_18009CCB8 @ 0x18009CCB8
 * Callers:
 *     sub_1800ECB70 @ 0x1800ECB70 (sub_1800ECB70.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18009CBA8 @ 0x18009CBA8 (sub_18009CBA8.c)
 */

__int64 __fastcall sub_18009CCB8(__int64 *a1)
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
  sub_18009CBA8((__int64)v2, a1[1]);
  return sub_18000E26C((void *)a1[1], 0x38uLL);
}
