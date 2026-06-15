/*
 * XREFs of sub_14001A4BC @ 0x14001A4BC
 * Callers:
 *     sub_14001A480 @ 0x14001A480 (sub_14001A480.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 */

__int64 __fastcall sub_14001A4BC(__int64 a1)
{
  sub_1400125D4((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return sub_1400125D4((__int64 *)(a1 + 32));
}
