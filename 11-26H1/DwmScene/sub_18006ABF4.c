/*
 * XREFs of sub_18006ABF4 @ 0x18006ABF4
 * Callers:
 *     sub_1800508AC @ 0x1800508AC (sub_1800508AC.c)
 *     sub_1800CAC28 @ 0x1800CAC28 (sub_1800CAC28.c)
 * Callees:
 *     sub_180028CF4 @ 0x180028CF4 (sub_180028CF4.c)
 */

_QWORD *__fastcall sub_18006ABF4(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180028CF4(a1);
  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
