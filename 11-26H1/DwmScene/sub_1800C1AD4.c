/*
 * XREFs of sub_1800C1AD4 @ 0x1800C1AD4
 * Callers:
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 *     sub_1800C6D50 @ 0x1800C6D50 (sub_1800C6D50.c)
 *     sub_1800CD520 @ 0x1800CD520 (sub_1800CD520.c)
 *     sub_1800CD640 @ 0x1800CD640 (sub_1800CD640.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 *__fastcall sub_1800C1AD4(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7[0] = v5;
  sub_18000F938(v7);
  return a1;
}
