/*
 * XREFs of sub_1800D4630 @ 0x1800D4630
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800183D8 @ 0x1800183D8 (sub_1800183D8.c)
 */

_QWORD *__fastcall sub_1800D4630(_QWORD *a1, __int64 a2)
{
  sub_1800183D8((__int64)a1, a2);
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
