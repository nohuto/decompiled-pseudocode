/*
 * XREFs of sub_180028CF4 @ 0x180028CF4
 * Callers:
 *     sub_180052DB0 @ 0x180052DB0 (sub_180052DB0.c)
 *     sub_18006ABF4 @ 0x18006ABF4 (sub_18006ABF4.c)
 *     sub_1800840AC @ 0x1800840AC (sub_1800840AC.c)
 *     sub_1800842E8 @ 0x1800842E8 (sub_1800842E8.c)
 *     sub_1800BA4E8 @ 0x1800BA4E8 (sub_1800BA4E8.c)
 * Callees:
 *     sub_180028D1C @ 0x180028D1C (sub_180028D1C.c)
 */

_QWORD *__fastcall sub_180028CF4(_QWORD *a1)
{
  sub_180028D1C();
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return a1;
}
