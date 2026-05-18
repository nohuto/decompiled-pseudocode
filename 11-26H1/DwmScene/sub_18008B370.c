/*
 * XREFs of sub_18008B370 @ 0x18008B370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_1800344BC @ 0x1800344BC (sub_1800344BC.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     sub_180089EEC @ 0x180089EEC (sub_180089EEC.c)
 *     sub_18008A008 @ 0x18008A008 (sub_18008A008.c)
 *     sub_18008A1EC @ 0x18008A1EC (sub_18008A1EC.c)
 *     sub_18008A398 @ 0x18008A398 (sub_18008A398.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18008B370(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h]
  _QWORD v16[24]; // [rsp+70h] [rbp-90h] BYREF

  sub_18007AB60(a1);
  sub_180012A94(a1 + 56, &v10);
  v2 = (__int64 *)sub_18001367C(v10, &v12);
  sub_1800344BC(v3, &v14, v2);
  if ( v13 )
    sub_180010EC8(v13);
  if ( v11 )
    sub_180010EC8(v11);
  v4 = sub_18004232C(a1 + 8, &v10);
  v12 = a1 + 1900;
  v5 = v4[1];
  v13 = v5;
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v11 )
    sub_180010EC8(v11);
  sub_18008A1EC(v16, &v12, *(float *)(a1 + 1852));
  v9 = *(_DWORD *)(a1 + 1860);
  v16[5] = *sub_18008A008(&v10, (float *)&v9);
  v6 = sub_180089EEC(v14, &v10, v16);
  sub_180011F5C((_QWORD *)(a1 + 1784), v6);
  if ( v11 )
    sub_180010EC8(v11);
  *(_BYTE *)(a1 + 1898) = 1;
  result = sub_18008A398(v16, v7);
  if ( v5 )
    result = sub_180010EC8(v5);
  if ( v15 )
    return sub_180010EC8(v15);
  return result;
}
