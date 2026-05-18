/*
 * XREFs of sub_180050990 @ 0x180050990
 * Callers:
 *     sub_1800518D0 @ 0x1800518D0 (sub_1800518D0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180082690 @ 0x180082690 (sub_180082690.c)
 */

void **__fastcall sub_180050990(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_180082690(a1);
  result = &Spectre::Engine::VertexBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::VertexBufferGeneric::`vftable';
  return result;
}
