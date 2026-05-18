/*
 * XREFs of sub_1800BA0B0 @ 0x1800BA0B0
 * Callers:
 *     sub_1800BE740 @ 0x1800BE740 (sub_1800BE740.c)
 * Callees:
 *     sub_1800842E8 @ 0x1800842E8 (sub_1800842E8.c)
 */

void **__fastcall sub_1800BA0B0(_QWORD *a1)
{
  void **result; // rax

  sub_1800842E8((__int64)a1);
  result = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  a1[15] = 0LL;
  return result;
}
