/*
 * XREFs of sub_1800509C4 @ 0x1800509C4
 * Callers:
 *     sub_180051970 @ 0x180051970 (sub_180051970.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18008486C @ 0x18008486C (sub_18008486C.c)
 */

void **__fastcall sub_1800509C4(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x90uLL);
  sub_18008486C(a1);
  result = &Spectre::Engine::VertexLayoutGeneric::`vftable';
  *a1 = &Spectre::Engine::VertexLayoutGeneric::`vftable';
  return result;
}
