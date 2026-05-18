/*
 * XREFs of sub_1800C9300 @ 0x1800C9300
 * Callers:
 *     sub_1800BB530 @ 0x1800BB530 (sub_1800BB530.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800C9300(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  sub_18000F938(a1 + 18);
  return sub_18008497C(a1);
}
