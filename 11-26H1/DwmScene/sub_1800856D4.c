/*
 * XREFs of sub_1800856D4 @ 0x1800856D4
 * Callers:
 *     sub_1800D6984 @ 0x1800D6984 (sub_1800D6984.c)
 *     sub_1800D6DF0 @ 0x1800D6DF0 (sub_1800D6DF0.c)
 * Callees:
 *     sub_180085684 @ 0x180085684 (sub_180085684.c)
 *     sub_180085744 @ 0x180085744 (sub_180085744.c)
 *     sub_180085EA0 @ 0x180085EA0 (sub_180085EA0.c)
 */

__int64 *__fastcall sub_1800856D4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    sub_180085EA0();
    a1[1] = sub_180085684(*a1, a2, (__int64)a1);
    v6 = 0LL;
    sub_180085744(&v6);
  }
  return a1;
}
