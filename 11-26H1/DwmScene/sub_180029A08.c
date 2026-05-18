/*
 * XREFs of sub_180029A08 @ 0x180029A08
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025424 @ 0x180025424 (sub_180025424.c)
 */

_QWORD *__fastcall sub_180029A08(_QWORD *a1, __int64 a2)
{
  sub_180025424(a1, a2);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  return a1;
}
