/*
 * XREFs of sub_180025424 @ 0x180025424
 * Callers:
 *     sub_180029A08 @ 0x180029A08 (sub_180029A08.c)
 *     sub_18003A440 @ 0x18003A440 (sub_18003A440.c)
 *     sub_180046700 @ 0x180046700 (sub_180046700.c)
 *     sub_1800493F4 @ 0x1800493F4 (sub_1800493F4.c)
 *     sub_1800837E8 @ 0x1800837E8 (sub_1800837E8.c)
 * Callees:
 *     sub_1800183D8 @ 0x1800183D8 (sub_1800183D8.c)
 */

_QWORD *__fastcall sub_180025424(_QWORD *a1, __int64 a2)
{
  sub_1800183D8((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  return a1;
}
