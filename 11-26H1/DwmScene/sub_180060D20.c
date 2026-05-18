/*
 * XREFs of sub_180060D20 @ 0x180060D20
 * Callers:
 *     sub_180061650 @ 0x180061650 (sub_180061650.c)
 * Callees:
 *     sub_180060C28 @ 0x180060C28 (sub_180060C28.c)
 */

__int64 __fastcall sub_180060D20(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ViewerEngine::`vftable';
  sub_180060C28(a1 + 186);
  return sub_1800319D0((__int64)a1);
}
