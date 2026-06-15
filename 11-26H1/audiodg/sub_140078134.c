/*
 * XREFs of sub_140078134 @ 0x140078134
 * Callers:
 *     sub_14007885C @ 0x14007885C (sub_14007885C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_140078134(__int64 a1)
{
  *(_QWORD *)a1 = &off_1400BE140;
  *(_QWORD *)(a1 + 8) = off_1400BE120;
  *(_QWORD *)(a1 + 16) = off_1400BE070;
  *(_QWORD *)(a1 + 96) = off_1400BE028;
  sub_140003238((__int64 *)(a1 + 200));
  sub_140003238((__int64 *)(a1 + 192));
  WindowsDeleteString(*(HSTRING *)(a1 + 184));
  *(_QWORD *)(a1 + 184) = 0LL;
  sub_140003238((__int64 *)(a1 + 176));
  return sub_140077E70(a1);
}
