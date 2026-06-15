/*
 * XREFs of sub_140077FC8 @ 0x140077FC8
 * Callers:
 *     sub_1400787A0 @ 0x1400787A0 (sub_1400787A0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_140077FC8(__int64 a1)
{
  *(_QWORD *)a1 = off_1400BE238;
  *(_QWORD *)(a1 + 8) = off_1400BE218;
  *(_QWORD *)(a1 + 16) = off_1400BE1D0;
  sub_140003238((__int64 *)(a1 + 96));
  WindowsDeleteString(*(HSTRING *)(a1 + 88));
  *(_QWORD *)(a1 + 88) = 0LL;
  WindowsDeleteString(*(HSTRING *)(a1 + 80));
  *(_QWORD *)(a1 + 80) = 0LL;
  return sub_140016EDC(a1);
}
