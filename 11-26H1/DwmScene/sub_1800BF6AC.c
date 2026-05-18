/*
 * XREFs of sub_1800BF6AC @ 0x1800BF6AC
 * Callers:
 *     sub_1800BA43C @ 0x1800BA43C (sub_1800BA43C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800BF300 @ 0x1800BF300 (sub_1800BF300.c)
 */

_QWORD *__fastcall sub_1800BF6AC(_QWORD *a1, _OWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF

  v10[0] = *a4;
  v10[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v11[0] = *a3;
  v11[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v12[0] = *a2;
  v12[1] = a2[1];
  sub_1800BF300((__int64)a1, (__int64)v12, v11, v10);
  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11Xaml::`vftable';
  v7 = a3[1];
  if ( v7 )
    sub_180010EC8(v7);
  v8 = a4[1];
  if ( v8 )
    sub_180010EC8(v8);
  return a1;
}
