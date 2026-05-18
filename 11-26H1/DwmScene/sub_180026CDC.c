/*
 * XREFs of sub_180026CDC @ 0x180026CDC
 * Callers:
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_1800263D4 @ 0x1800263D4 (sub_1800263D4.c)
 *     sub_1800B97F8 @ 0x1800B97F8 (sub_1800B97F8.c)
 *     sub_1800B99A4 @ 0x1800B99A4 (sub_1800B99A4.c)
 *     sub_1800B9B50 @ 0x1800B9B50 (sub_1800B9B50.c)
 *     sub_1800B9CFC @ 0x1800B9CFC (sub_1800B9CFC.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 * Callees:
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 */

__int64 __fastcall sub_180026CDC(__int64 a1, __int64 a2)
{
  sub_180029C50(*(_QWORD *)(a1 + 3984) + 1104LL, a2);
  return a2;
}
