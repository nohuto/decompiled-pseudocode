/*
 * XREFs of sub_1800CACD0 @ 0x1800CACD0
 * Callers:
 *     sub_1800CAF90 @ 0x1800CAF90 (sub_1800CAF90.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

__int64 __fastcall sub_1800CACD0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::DepthBufferD3D11::`vftable';
  sub_18000F938(a1 + 14);
  sub_18000F938(a1 + 15);
  *(_OWORD *)v11 = 0LL;
  sub_180011F5C(a1 + 12, v11);
  if ( v11[1] )
    sub_180010EC8(v11[1]);
  v2 = a1[31];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[29];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[27];
  if ( v4 )
    sub_180010EC8(v4);
  v5 = a1[25];
  if ( v5 )
    sub_180010EC8(v5);
  v6 = a1[23];
  if ( v6 )
    sub_180010EC8(v6);
  v7 = a1[21];
  if ( v7 )
    sub_180010EC8(v7);
  v8 = a1[19];
  if ( v8 )
    sub_180010EC8(v8);
  v9 = a1[17];
  if ( v9 )
    sub_180010EC8(v9);
  sub_18000F938(a1 + 15);
  sub_18000F938(a1 + 14);
  return sub_18006ACC0(a1);
}
