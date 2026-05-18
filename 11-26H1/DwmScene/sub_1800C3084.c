/*
 * XREFs of sub_1800C3084 @ 0x1800C3084
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_1800C3038 @ 0x1800C3038 (sub_1800C3038.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800C2AD8 @ 0x1800C2AD8 (sub_1800C2AD8.c)
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C3084(__int64 *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  sub_1800C2AD8(a1 + 21, a2);
  sub_1800C2AD8(a1 + 20, a3);
  sub_18000F938(a1 + 22);
  sub_1800C50F4(a1, a4);
  sub_18000F938(a2);
  return sub_18000F938(a3);
}
