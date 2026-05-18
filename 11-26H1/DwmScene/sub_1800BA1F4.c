/*
 * XREFs of sub_1800BA1F4 @ 0x1800BA1F4
 * Callers:
 *     sub_1800BEBA0 @ 0x1800BEBA0 (sub_1800BEBA0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180082C20 @ 0x180082C20 (sub_180082C20.c)
 */

void **__fastcall sub_1800BA1F4(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x70uLL);
  sub_180082C20(a1);
  result = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
