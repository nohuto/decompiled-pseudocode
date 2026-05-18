/*
 * XREFs of sub_180085950 @ 0x180085950
 * Callers:
 *     sub_180085A18 @ 0x180085A18 (sub_180085A18.c)
 * Callees:
 *     sub_180016E10 @ 0x180016E10 (sub_180016E10.c)
 *     sub_180047D2C @ 0x180047D2C (sub_180047D2C.c)
 *     sub_180047D40 @ 0x180047D40 (sub_180047D40.c)
 *     sub_180048114 @ 0x180048114 (sub_180048114.c)
 *     sub_18004824C @ 0x18004824C (sub_18004824C.c)
 *     sub_1800484B0 @ 0x1800484B0 (sub_1800484B0.c)
 *     sub_180048544 @ 0x180048544 (sub_180048544.c)
 *     sub_180048794 @ 0x180048794 (sub_180048794.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180085950(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 *v9; // rax
  __int64 v10; // r9

  sub_180016E10(a2, a1);
  sub_180047D2C(*a1, (__int64)(a5[1] - *a5) >> 1);
  sub_180047D40(*a1, *v9);
  sub_1800484B0(*a1, 3);
  sub_180048794(*a1, -1431655765 * ((a4[1] - *a4) >> 2));
  sub_18004824C(*a1, *a4);
  sub_180048114(*a1, *a6, 0, v10);
  sub_180048544(*a1, *a7);
  return a1;
}
