/*
 * XREFs of sub_1800BA624 @ 0x1800BA624
 * Callers:
 *     sub_1800BE560 @ 0x1800BE560 (sub_1800BE560.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_1800837B0 @ 0x1800837B0 (sub_1800837B0.c)
 */

void **__fastcall sub_1800BA624(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800837B0((__int64)a1);
  result = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
