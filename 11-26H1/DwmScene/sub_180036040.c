/*
 * XREFs of sub_180036040 @ 0x180036040
 * Callers:
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_180034028 @ 0x180034028 (sub_180034028.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_180052670 @ 0x180052670 (sub_180052670.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_18006B170 @ 0x18006B170 (sub_18006B170.c)
 *     sub_18007A86C @ 0x18007A86C (sub_18007A86C.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 *     sub_180082100 @ 0x180082100 (sub_180082100.c)
 *     sub_180083E30 @ 0x180083E30 (sub_180083E30.c)
 *     sub_180084E40 @ 0x180084E40 (sub_180084E40.c)
 *     sub_18008819C @ 0x18008819C (sub_18008819C.c)
 * Callees:
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_180030C38 @ 0x180030C38 (sub_180030C38.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180036040(__int64 a1, __int64 *a2)
{
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  sub_180029DD4(a1 + 112, (__int64)v5);
  sub_180030C38(a2, a1 + 88);
  sub_180029B0C((__int64)v5);
  return a2;
}
