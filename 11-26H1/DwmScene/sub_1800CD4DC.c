/*
 * XREFs of sub_1800CD4DC @ 0x1800CD4DC
 * Callers:
 *     sub_1800BB4F0 @ 0x1800BB4F0 (sub_1800BB4F0.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800CD4DC(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  sub_18000F938(a1 + 13);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return sub_1800840DC(a1);
}
