/*
 * XREFs of sub_1800BEE5C @ 0x1800BEE5C
 * Callers:
 *     sub_1800BF920 @ 0x1800BF920 (sub_1800BF920.c)
 *     sub_1800CE050 @ 0x1800CE050 (sub_1800CE050.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 *__fastcall sub_1800BEE5C(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  v6 = v4;
  sub_18000F938(&v6);
  return a1;
}
