/*
 * XREFs of sub_18004BDAC @ 0x18004BDAC
 * Callers:
 *     sub_18004CDD8 @ 0x18004CDD8 (sub_18004CDD8.c)
 * Callees:
 *     sub_180083810 @ 0x180083810 (sub_180083810.c)
 */

void **__fastcall sub_18004BDAC(_QWORD *a1)
{
  void **result; // rax

  sub_180083810(a1, 1LL);
  result = &Spectre::Engine::VertexShader::`vftable';
  *a1 = &Spectre::Engine::VertexShader::`vftable';
  return result;
}
