/*
 * XREFs of sub_1800C9CC4 @ 0x1800C9CC4
 * Callers:
 *     sub_1800C9D00 @ 0x1800C9D00 (sub_1800C9D00.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800C9CC4(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  sub_18000F938(a1 + 23);
  return sub_180052060(a1);
}
