/*
 * XREFs of sub_1800BA158 @ 0x1800BA158
 * Callers:
 *     sub_1800BE2E0 @ 0x1800BE2E0 (sub_1800BE2E0.c)
 * Callees:
 *     sub_1800837B0 @ 0x1800837B0 (sub_1800837B0.c)
 */

void **__fastcall sub_1800BA158(_QWORD *a1)
{
  void **result; // rax

  sub_1800837B0((__int64)a1);
  result = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
