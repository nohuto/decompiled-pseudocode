/*
 * XREFs of sub_1800BA5B8 @ 0x1800BA5B8
 * Callers:
 *     sub_1800BE9C0 @ 0x1800BE9C0 (sub_1800BE9C0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180082690 @ 0x180082690 (sub_180082690.c)
 */

void **__fastcall sub_1800BA5B8(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x70uLL);
  sub_180082690(a1);
  result = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
