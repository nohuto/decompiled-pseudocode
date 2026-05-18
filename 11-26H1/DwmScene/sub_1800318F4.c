/*
 * XREFs of sub_1800318F4 @ 0x1800318F4
 * Callers:
 *     sub_180037C10 @ 0x180037C10 (sub_180037C10.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002DD2C @ 0x18002DD2C (sub_18002DD2C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800318F4(__int64 *a1)
{
  __int64 v2; // rcx

  sub_18000BFA4((__int64)(a1 + 7), 24LL, 10LL, (void (__fastcall *)(__int64))sub_180018500);
  v2 = a1[4];
  if ( v2 )
  {
    sub_18002DD2C(v2, a1[5]);
    sub_18000E26C((void *)a1[4], 8 * ((a1[6] - a1[4]) >> 3));
    a1[4] = 0LL;
    a1[5] = 0LL;
    a1[6] = 0LL;
  }
  return sub_1800D5408(a1);
}
