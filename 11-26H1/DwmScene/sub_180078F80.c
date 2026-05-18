/*
 * XREFs of sub_180078F80 @ 0x180078F80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800187D4 @ 0x1800187D4 (sub_1800187D4.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_18005D8B8 @ 0x18005D8B8 (sub_18005D8B8.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_180078B44 @ 0x180078B44 (sub_180078B44.c)
 *     sub_18007BDCC @ 0x18007BDCC (sub_18007BDCC.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 *     sub_180080D3C @ 0x180080D3C (sub_180080D3C.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 *     sub_1800812CC @ 0x1800812CC (sub_1800812CC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180078F80(__int64 a1, __int64 a2, _QWORD *a3)
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
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // r9
  __int64 result; // rax
  __int128 *v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h]
  __int128 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  _QWORD v28[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v29[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  _BYTE v33[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v34[64]; // [rsp+100h] [rbp+0h] BYREF

  v23 = &v25;
  v6 = sub_18004232C(a1 + 8, &v25);
  v7 = sub_1800181BC(v28, (__int64)&unk_1801CD478);
  v8 = sub_18004DE74(a2, &v26, (__int64)v7, v6);
  sub_180011F5C((_QWORD *)(a1 + 56), v8);
  if ( v27 )
    sub_180010EC8(v27);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = sub_180011CC4(v28, "Font");
  sub_180078B44(v9, (__int64)v10);
  sub_1800187D4((__int64 *)(*(_QWORD *)(a1 + 56) + 528LL), (__int64)a3);
  v25 = 0LL;
  v11 = (_DWORD *)*a3;
  v12 = (_DWORD *)a3[1];
  while ( v11 != v12 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = *v11;
    v13 = sub_18005D458(*(_QWORD *)(a1 + 56), &v26, 0LL, 0LL, 1);
    sub_180011F5C(&v25, v13);
    if ( v27 )
      sub_180010EC8(v27);
    v14 = sub_180011CC4(v28, byte_1800F9DE0);
    v15 = sub_180011CC4(v29, "Font");
    v16 = v14;
    v17 = v25;
    sub_180080F34(v25, v15, 0LL, v16);
    sub_180080D3C(v17, 8, 2, 0, 1);
    LODWORD(v29[0]) = 0;
    v29[1] = 0x10000040031LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    sub_1800812CC(v17, v29);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = 0;
    ++v11;
  }
  sub_18004DE2C(a2, &v23, 2u);
  v18 = sub_1800181BC(v29, (__int64)&unk_1801CD4B8);
  sub_180043A88((__int64)v33, (__int64)v18);
  v19 = sub_1800181BC(v28, (__int64)&unk_1801CD498);
  sub_180043A88((__int64)v34, (__int64)v19);
  sub_18007BDCC(v23, v33, 2LL, 0LL);
  sub_18007C50C(v23);
  v20 = sub_180012C40(&v26, &v23);
  sub_18005E244(v21, v20);
  sub_18000BFA4((__int64)v33, 64LL, 2LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v24 )
    sub_180010EC8(v24);
  result = sub_18005D8B8(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v25 + 1) )
    return sub_180010EC8(*((__int64 *)&v25 + 1));
  return result;
}
