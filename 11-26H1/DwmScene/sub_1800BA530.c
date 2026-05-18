/*
 * XREFs of sub_1800BA530 @ 0x1800BA530
 * Callers:
 *     sub_1800BEA60 @ 0x1800BEA60 (sub_1800BEA60.c)
 * Callees:
 *     sub_180051F84 @ 0x180051F84 (sub_180051F84.c)
 */

void **__fastcall sub_1800BA530(_QWORD *a1)
{
  void **result; // rax

  sub_180051F84(a1);
  result = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  a1[23] = 0LL;
  return result;
}
