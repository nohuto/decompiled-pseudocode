/*
 * XREFs of sub_180090658 @ 0x180090658
 * Callers:
 *     sub_1800DE528 @ 0x1800DE528 (sub_1800DE528.c)
 *     sub_1800EC7E0 @ 0x1800EC7E0 (sub_1800EC7E0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800902C0 @ 0x1800902C0 (sub_1800902C0.c)
 */

__int64 __fastcall sub_180090658(__int64 *a1)
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
  sub_1800902C0((__int64)v2, a1[1]);
  return sub_18000E26C((void *)a1[1], 0x38uLL);
}
