/*
 * XREFs of sub_180050958 @ 0x180050958
 * Callers:
 *     sub_180051AB0 @ 0x180051AB0 (sub_180051AB0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180052DB0 @ 0x180052DB0 (sub_180052DB0.c)
 */

void **__fastcall sub_180050958(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0xA0uLL);
  sub_180052DB0(a1);
  result = &Spectre::Engine::TextureGeneric::`vftable';
  *a1 = &Spectre::Engine::TextureGeneric::`vftable';
  return result;
}
