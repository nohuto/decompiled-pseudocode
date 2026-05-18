/*
 * XREFs of sub_18004BC74 @ 0x18004BC74
 * Callers:
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 * Callees:
 *     sub_180083810 @ 0x180083810 (sub_180083810.c)
 */

void **__fastcall sub_18004BC74(_QWORD *a1)
{
  void **result; // rax

  sub_180083810(a1, 2LL);
  result = &Spectre::Engine::HullShader::`vftable';
  *a1 = &Spectre::Engine::HullShader::`vftable';
  return result;
}
