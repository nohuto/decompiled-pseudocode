/*
 * XREFs of sub_1800840AC @ 0x1800840AC
 * Callers:
 *     sub_180082690 @ 0x180082690 (sub_180082690.c)
 *     sub_180082C20 @ 0x180082C20 (sub_180082C20.c)
 * Callees:
 *     sub_180028CF4 @ 0x180028CF4 (sub_180028CF4.c)
 */

_QWORD *__fastcall sub_1800840AC(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180028CF4(a1);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
