/*
 * XREFs of sub_180050908 @ 0x180050908
 * Callers:
 *     sub_180051A10 @ 0x180051A10 (sub_180051A10.c)
 * Callees:
 *     sub_1800841B8 @ 0x1800841B8 (sub_1800841B8.c)
 */

void **__fastcall sub_180050908(_QWORD *a1)
{
  void **result; // rax

  sub_1800841B8();
  result = &Spectre::Engine::RenderStateGeneric::`vftable';
  *a1 = &Spectre::Engine::RenderStateGeneric::`vftable';
  return result;
}
