/*
 * XREFs of sub_1800C8E24 @ 0x1800C8E24
 * Callers:
 *     sub_1800C8E60 @ 0x1800C8E60 (sub_1800C8E60.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800C8E24(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  sub_18000F938(a1 + 13);
  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  return sub_180027BC8((__int64)a1);
}
