/*
 * XREFs of sub_180018788 @ 0x180018788
 * Callers:
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 *     sub_1800B97F8 @ 0x1800B97F8 (sub_1800B97F8.c)
 *     sub_1800B99A4 @ 0x1800B99A4 (sub_1800B99A4.c)
 *     sub_1800B9B50 @ 0x1800B9B50 (sub_1800B9B50.c)
 *     sub_1800B9CFC @ 0x1800B9CFC (sub_1800B9CFC.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 * Callees:
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 */

__int64 *__fastcall sub_180018788(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  char v4; // r9
  char v5; // al
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v4 = *((_BYTE *)a2 + 8);
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  v7 = *a1;
  v5 = *((_BYTE *)a1 + 8);
  *((_BYTE *)a1 + 8) = v4;
  *a1 = v2;
  v8 = v5;
  sub_180011E54((__int64)&v7);
  return a1;
}
