/*
 * XREFs of sub_180078BE0 @ 0x180078BE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800187D4 @ 0x1800187D4 (sub_1800187D4.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180043DE0 @ 0x180043DE0 (sub_180043DE0.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_18005D8B8 @ 0x18005D8B8 (sub_18005D8B8.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_180078B44 @ 0x180078B44 (sub_180078B44.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 *     sub_180080D3C @ 0x180080D3C (sub_180080D3C.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 *     sub_1800812CC @ 0x1800812CC (sub_1800812CC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180078BE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _DWORD *v11; // rsi
  _DWORD *v12; // r14
  __int64 *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  __int64 v17; // rbx
  __int128 *v18; // rbx
  _QWORD *v19; // rax
  __int128 *v20; // rbx
  _QWORD *v21; // rax
  __int128 *v22; // rbx
  _QWORD *v23; // rax
  __int128 *v24; // rbx
  _QWORD *v25; // rax
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 result; // rax
  __int128 *v29; // [rsp+38h] [rbp-81h] BYREF
  __int64 v30; // [rsp+40h] [rbp-79h]
  __int128 v31; // [rsp+48h] [rbp-71h] BYREF
  __int64 v32; // [rsp+58h] [rbp-61h] BYREF
  __int64 v33; // [rsp+60h] [rbp-59h]
  _QWORD v34[2]; // [rsp+68h] [rbp-51h] BYREF
  __int128 v35; // [rsp+78h] [rbp-41h]
  __int64 v36; // [rsp+88h] [rbp-31h]
  __int64 v37; // [rsp+90h] [rbp-29h]
  _QWORD v38[8]; // [rsp+A0h] [rbp-19h] BYREF

  v29 = &v31;
  v6 = sub_18004232C(a1 + 8, &v31);
  v7 = sub_1800181BC(v38, (__int64)&unk_1801CD378);
  v8 = sub_18004DE74(a2, &v32, (__int64)v7, v6);
  sub_180011F5C((_QWORD *)(a1 + 56), v8);
  if ( v33 )
    sub_180010EC8(v33);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = sub_180011CC4(v38, "Symbol");
  sub_180078B44(v9, (__int64)v10);
  sub_1800187D4((__int64 *)(*(_QWORD *)(a1 + 56) + 528LL), (__int64)a3);
  v31 = 0LL;
  v11 = (_DWORD *)*a3;
  v12 = (_DWORD *)a3[1];
  while ( v11 != v12 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = *v11;
    v13 = sub_18005D458(*(_QWORD *)(a1 + 56), &v32, 0LL, 0LL, 1);
    sub_180011F5C(&v31, v13);
    if ( v33 )
      sub_180010EC8(v33);
    v14 = sub_180011CC4(v38, byte_1800F9DE0);
    v15 = sub_180011CC4(v34, "Symbol");
    v16 = v14;
    v17 = v31;
    sub_180080F34(v31, v15, 0LL, v16);
    sub_180080D3C(v17, 8, 2, 0, 1);
    LODWORD(v34[0]) = 0;
    v34[1] = 0x100000C0015LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    sub_1800812CC(v17, v34);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = 0;
    ++v11;
  }
  sub_18004DE2C(a2, &v29, 4u);
  v18 = v29;
  v19 = sub_1800181BC(v34, (__int64)&unk_1801CD398);
  sub_180043A88((__int64)v38, (__int64)v19);
  sub_18007BE98(v18, v38, 0LL);
  sub_180043DE0((__int64)v38);
  v20 = v29;
  v21 = sub_1800181BC(v34, (__int64)&unk_1801CD3B8);
  sub_180043A88((__int64)v38, (__int64)v21);
  sub_18007BE98(v20, v38, 0LL);
  sub_180043DE0((__int64)v38);
  v22 = v29;
  v23 = sub_1800181BC(v34, (__int64)&unk_1801CD3D8);
  sub_180043A88((__int64)v38, (__int64)v23);
  sub_18007BE98(v22, v38, 0LL);
  sub_180043DE0((__int64)v38);
  v24 = v29;
  v25 = sub_1800181BC(v34, (__int64)&unk_1801CD3F8);
  sub_180043A88((__int64)v38, (__int64)v25);
  sub_18007BE98(v24, v38, 0LL);
  sub_180043DE0((__int64)v38);
  sub_18007C50C(v29);
  v26 = sub_180012C40(&v32, &v29);
  sub_18005E244(v27, v26);
  if ( v30 )
    sub_180010EC8(v30);
  result = sub_18005D8B8(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v31 + 1) )
    return sub_180010EC8(*((__int64 *)&v31 + 1));
  return result;
}
