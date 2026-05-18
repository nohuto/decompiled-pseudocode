/*
 * XREFs of sub_1800C2AD8 @ 0x1800C2AD8
 * Callers:
 *     sub_1800C3084 @ 0x1800C3084 (sub_1800C3084.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 *     sub_1800C403C @ 0x1800C403C (sub_1800C403C.c)
 *     sub_1800C6000 @ 0x1800C6000 (sub_1800C6000.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800BF2BC @ 0x1800BF2BC (sub_1800BF2BC.c)
 */

__int64 *__fastcall sub_1800C2AD8(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = sub_1800BF2BC(&v6, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  sub_18000F938(&v6);
  return a1;
}
