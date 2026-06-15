/*
 * XREFs of sub_1400058DC @ 0x1400058DC
 * Callers:
 *     sub_14000303C @ 0x14000303C (sub_14000303C.c)
 *     sub_140003BF4 @ 0x140003BF4 (sub_140003BF4.c)
 *     sub_140005780 @ 0x140005780 (sub_140005780.c)
 *     sub_14000589C @ 0x14000589C (sub_14000589C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_1400058DC(_QWORD *a1)
{
  *a1 = off_1400BA248;
  sub_140003238(a1 + 2);
  return sub_140003238(a1 + 1);
}
