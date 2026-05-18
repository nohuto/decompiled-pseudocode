/*
 * XREFs of sub_18004BCA0 @ 0x18004BCA0
 * Callers:
 *     sub_18004CAD8 @ 0x18004CAD8 (sub_18004CAD8.c)
 * Callees:
 *     sub_180083810 @ 0x180083810 (sub_180083810.c)
 */

void **__fastcall sub_18004BCA0(_QWORD *a1)
{
  void **result; // rax

  sub_180083810(a1, 5LL);
  result = &Spectre::Engine::PixelShader::`vftable';
  *a1 = &Spectre::Engine::PixelShader::`vftable';
  return result;
}
