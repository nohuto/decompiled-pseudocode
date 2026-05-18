/*
 * XREFs of sub_1800BA5F4 @ 0x1800BA5F4
 * Callers:
 *     sub_1800BE920 @ 0x1800BE920 (sub_1800BE920.c)
 * Callees:
 *     sub_18008486C @ 0x18008486C (sub_18008486C.c)
 */

void **__fastcall sub_1800BA5F4(_QWORD *a1)
{
  void **result; // rax

  sub_18008486C((__int64)a1);
  result = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  a1[18] = 0LL;
  return result;
}
