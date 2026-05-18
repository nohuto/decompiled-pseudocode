/*
 * XREFs of sub_18006FA50 @ 0x18006FA50
 * Callers:
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_1800311BC @ 0x1800311BC (sub_1800311BC.c)
 */

_DWORD *__fastcall sub_18006FA50(_DWORD *a1)
{
  *a1 = 0;
  memset(a1 + 2, 0, 0x58uLL);
  sub_1800311BC((__int64)(a1 + 2));
  return a1;
}
