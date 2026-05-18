/*
 * XREFs of sub_1800CC570 @ 0x1800CC570
 * Callers:
 *     sub_1800CC5B0 @ 0x1800CC5B0 (sub_1800CC5B0.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800CC570(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  sub_18000F938(a1 + 13);
  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  return sub_180027BC8((__int64)a1);
}
