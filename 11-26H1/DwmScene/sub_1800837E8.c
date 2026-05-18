/*
 * XREFs of sub_1800837E8 @ 0x1800837E8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025424 @ 0x180025424 (sub_180025424.c)
 */

_QWORD *__fastcall sub_1800837E8(_QWORD *a1, __int64 a2)
{
  sub_180025424(a1, a2);
  *a1 = &Spectre::Engine::EngineUnexpectedException::`vftable';
  return a1;
}
