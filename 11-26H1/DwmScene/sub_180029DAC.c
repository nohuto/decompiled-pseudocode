/*
 * XREFs of sub_180029DAC @ 0x180029DAC
 * Callers:
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 * Callees:
 *     sub_180029734 @ 0x180029734 (sub_180029734.c)
 */

__int64 __fastcall sub_180029DAC(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 1;
  sub_180029734(a1);
  return a2;
}
