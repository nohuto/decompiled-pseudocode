/*
 * XREFs of sub_1800BA1C4 @ 0x1800BA1C4
 * Callers:
 *     sub_1800BE880 @ 0x1800BE880 (sub_1800BE880.c)
 * Callees:
 *     sub_1800837B0 @ 0x1800837B0 (sub_1800837B0.c)
 */

void **__fastcall sub_1800BA1C4(_QWORD *a1)
{
  void **result; // rax

  sub_1800837B0((__int64)a1);
  result = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
