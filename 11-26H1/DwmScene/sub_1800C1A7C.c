/*
 * XREFs of sub_1800C1A7C @ 0x1800C1A7C
 * Callers:
 *     sub_1800C1B20 @ 0x1800C1B20 (sub_1800C1B20.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

__int64 __fastcall sub_1800C1A7C(_QWORD *a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  *(_OWORD *)v3 = 0LL;
  sub_180011F5C(a1 + 12, v3);
  if ( v3[1] )
    sub_180010EC8(v3[1]);
  sub_18000F938(a1 + 16);
  return sub_180027B84(a1);
}
