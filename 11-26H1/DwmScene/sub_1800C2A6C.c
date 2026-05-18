/*
 * XREFs of sub_1800C2A6C @ 0x1800C2A6C
 * Callers:
 *     sub_1800C2EF0 @ 0x1800C2EF0 (sub_1800C2EF0.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800C2A6C(__int64 *a1)
{
  __int64 *v2; // rbx

  v2 = a1 + 21;
  *a1 = (__int64)&Spectre::Engine::D3D11::TextureD3D11::`vftable';
  sub_18000F938(a1 + 21);
  sub_18000F938(a1 + 23);
  sub_18000F938(a1 + 22);
  sub_18000F938(v2);
  sub_18000F938(a1 + 20);
  return sub_180053214(a1);
}
