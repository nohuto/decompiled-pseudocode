/*
 * XREFs of sub_18006B46C @ 0x18006B46C
 * Callers:
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_18006B170 @ 0x18006B170 (sub_18006B170.c)
 * Callees:
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006B46C(__int64 *a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // r8

  sub_180016FD4(a2, a1);
  sub_180029310(*a1, 1, 0);
  sub_180029310(*a1, v10 + 2, v10);
  sub_180029310(*a1, v11 + 4, v11);
  sub_180053894(*a1, a3, a4, 0, a5, a6, a7, v12, v12, v12);
  return a1;
}
