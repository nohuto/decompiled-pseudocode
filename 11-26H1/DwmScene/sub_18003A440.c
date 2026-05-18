/*
 * XREFs of sub_18003A440 @ 0x18003A440
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025424 @ 0x180025424 (sub_180025424.c)
 */

_QWORD *__fastcall sub_18003A440(_QWORD *a1, __int64 a2)
{
  sub_180025424(a1, a2);
  *a1 = &Spectre::Engine::EngineInvalidArgException::`vftable';
  return a1;
}
