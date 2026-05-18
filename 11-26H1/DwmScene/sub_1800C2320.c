/*
 * XREFs of sub_1800C2320 @ 0x1800C2320
 * Callers:
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18005377C @ 0x18005377C (sub_18005377C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C2320(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // r15d
  __int64 *v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+28h] [rbp-81h] BYREF
  __int64 v18; // [rsp+30h] [rbp-79h]
  unsigned __int64 v19; // [rsp+38h] [rbp-71h] BYREF
  int v20; // [rsp+40h] [rbp-69h]
  int v21; // [rsp+44h] [rbp-65h]
  int v22; // [rsp+48h] [rbp-61h]
  unsigned int v23; // [rsp+4Ch] [rbp-5Dh]
  int v24; // [rsp+50h] [rbp-59h]
  _DWORD v25[8]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v26; // [rsp+78h] [rbp-31h] BYREF
  __int64 v27; // [rsp+80h] [rbp-29h]
  __int64 v28[4]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v29[4]; // [rsp+A8h] [rbp-1h] BYREF

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  sub_180012A94(a1 + 72, &v26);
  v9 = sub_180016BD8(v26, &v17);
  v10 = (__int64 *)(a1 + 96);
  sub_180011F5C((_QWORD *)(a1 + 96), v9);
  if ( v18 )
    sub_180010EC8(v18);
  sub_18002912C(a1, v29);
  if ( !v29[2] )
    sub_18001490C((__int64)v29, "RenderTargetD3D11", 0x11uLL);
  v11 = *v10;
  v12 = sub_1800181BC(&v19, (__int64)v29);
  sub_1800292C4(v11, (__int64)v12);
  v25[0] = v7;
  v25[1] = v8;
  v25[2] = 1;
  v25[3] = 1;
  v25[4] = a4;
  v25[5] = a5 & 0xFFFFFF7C | 3;
  v25[6] = 0;
  sub_18005377C(*v10, (__int64)v25);
  if ( (a5 & 0x80u) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 112) )
    {
      v13 = sub_180016BD8(v26, &v17);
      sub_180011F5C((_QWORD *)(a1 + 112), v13);
      if ( v18 )
        sub_180010EC8(v18);
    }
    v14 = *(_QWORD *)(a1 + 112);
    v15 = sub_18001C8C0(v28, (__int64)v29, (__int64)" (staging)");
    sub_1800292C4(v14, (__int64)v15);
    v19 = __PAIR64__(v8, v7);
    v20 = 1;
    v21 = 1;
    v22 = a4;
    v23 = a5 & 0xFFFFFF7C | 0x80;
    v24 = 3;
    sub_18005377C(*(_QWORD *)(a1 + 112), (__int64)&v19);
  }
  result = sub_1800129D0((__int64)v29);
  if ( v27 )
    return sub_180010EC8(v27);
  return result;
}
