/*
 * XREFs of sub_18004BC48 @ 0x18004BC48
 * Callers:
 *     sub_18004C940 @ 0x18004C940 (sub_18004C940.c)
 * Callees:
 *     sub_180083810 @ 0x180083810 (sub_180083810.c)
 */

void **__fastcall sub_18004BC48(_QWORD *a1)
{
  void **result; // rax

  sub_180083810(a1, 4LL);
  result = &Spectre::Engine::GeometryShader::`vftable';
  *a1 = &Spectre::Engine::GeometryShader::`vftable';
  return result;
}
