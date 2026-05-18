/*
 * XREFs of sub_18006BB00 @ 0x18006BB00
 * Callers:
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 * Callees:
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_180030B88 @ 0x180030B88 (sub_180030B88.c)
 *     sub_18006B73C @ 0x18006B73C (sub_18006B73C.c)
 *     sub_18006BAD8 @ 0x18006BAD8 (sub_18006BAD8.c)
 *     sub_18006C104 @ 0x18006C104 (sub_18006C104.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006BB00(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  sub_18006B73C((__int64 *)a1);
  sub_180025874(a1 + 24);
  sub_180025874(a1 + 104);
  sub_180030B88((__int64 *)(a1 + 184));
  sub_180030B88((__int64 *)(a1 + 200));
  sub_18006BAD8((_DWORD *)(a1 + 216));
  sub_18006C104(a1);
  return a1;
}
