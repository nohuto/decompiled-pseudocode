/*
 * XREFs of sub_1800CC330 @ 0x1800CC330
 * Callers:
 *     sub_1800CC360 @ 0x1800CC360 (sub_1800CC360.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800CC330(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  sub_18000F938(a1 + 15);
  return sub_180093840(a1);
}
