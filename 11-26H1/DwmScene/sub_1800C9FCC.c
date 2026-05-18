/*
 * XREFs of sub_1800C9FCC @ 0x1800C9FCC
 * Callers:
 *     sub_1800CA010 @ 0x1800CA010 (sub_1800CA010.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800C9FCC(__int64 *a1)
{
  *a1 = (__int64)&Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  sub_18000F938(a1 + 16);
  sub_18000F938(a1 + 15);
  sub_18000F938(a1 + 14);
  return sub_1800841FC(a1);
}
