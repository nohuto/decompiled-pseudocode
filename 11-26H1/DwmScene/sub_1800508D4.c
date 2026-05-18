/*
 * XREFs of sub_1800508D4 @ 0x1800508D4
 * Callers:
 *     sub_180051830 @ 0x180051830 (sub_180051830.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180082C20 @ 0x180082C20 (sub_180082C20.c)
 */

void **__fastcall sub_1800508D4(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_180082C20(a1);
  result = &Spectre::Engine::IndexBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::IndexBufferGeneric::`vftable';
  return result;
}
