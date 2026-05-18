/*
 * XREFs of sub_1800508AC @ 0x1800508AC
 * Callers:
 *     sub_1800516F0 @ 0x1800516F0 (sub_1800516F0.c)
 * Callees:
 *     sub_18006ABF4 @ 0x18006ABF4 (sub_18006ABF4.c)
 */

void **__fastcall sub_1800508AC(_QWORD *a1)
{
  void **result; // rax

  sub_18006ABF4();
  result = &Spectre::Engine::DepthBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return result;
}
