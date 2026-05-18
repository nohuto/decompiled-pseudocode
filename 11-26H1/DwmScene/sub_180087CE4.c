/*
 * XREFs of sub_180087CE4 @ 0x180087CE4
 * Callers:
 *     sub_1800885D8 @ 0x1800885D8 (sub_1800885D8.c)
 * Callees:
 *     sub_180012F64 @ 0x180012F64 (sub_180012F64.c)
 *     sub_1800764E0 @ 0x1800764E0 (sub_1800764E0.c)
 *     sub_180087C7C @ 0x180087C7C (sub_180087C7C.c)
 */

__int64 *__fastcall sub_180087CE4(__int64 *a1)
{
  __int64 v2; // rax
  unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = 512LL;
  v2 = sub_180012F64((__int64)a1, &v4);
  *a1 = v2;
  a1[1] = v2;
  a1[2] = v2 + 0x2000;
  a1[1] = sub_180087C7C(v2, 512LL, (__int64)a1);
  v4 = 0LL;
  sub_1800764E0(&v4);
  return a1;
}
