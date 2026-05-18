/*
 * XREFs of sub_180030BD8 @ 0x180030BD8
 * Callers:
 *     sub_18002FB58 @ 0x18002FB58 (sub_18002FB58.c)
 *     sub_180039A04 @ 0x180039A04 (sub_180039A04.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180030BD8(_QWORD *a1, __int64 a2)
{
  sub_1800181BC(a1, a2);
  sub_1800181BC(a1 + 4, a2 + 32);
  return a1;
}
