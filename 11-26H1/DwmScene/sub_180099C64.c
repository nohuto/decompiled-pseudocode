/*
 * XREFs of sub_180099C64 @ 0x180099C64
 * Callers:
 *     sub_180099990 @ 0x180099990 (sub_180099990.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180099D84 @ 0x180099D84 (sub_180099D84.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180099C64(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  sub_1800181BC(a2, a3);
  return sub_180099D84(a2 + 4, a4);
}
