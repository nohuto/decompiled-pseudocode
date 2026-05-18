/*
 * XREFs of sub_18008B500 @ 0x18008B500
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_1800344BC @ 0x1800344BC (sub_1800344BC.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     sub_180089C44 @ 0x180089C44 (sub_180089C44.c)
 *     sub_180089EEC @ 0x180089EEC (sub_180089EEC.c)
 *     sub_18008A008 @ 0x18008A008 (sub_18008A008.c)
 *     sub_18008A1EC @ 0x18008A1EC (sub_18008A1EC.c)
 *     sub_18008A398 @ 0x18008A398 (sub_18008A398.c)
 *     sub_18008A5FC @ 0x18008A5FC (sub_18008A5FC.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18008B500(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h]
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h]
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  _QWORD v17[15]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v18[72]; // [rsp+F8h] [rbp-8h] BYREF

  sub_18007AB60(a1);
  sub_180012A94(a1 + 56, &v9);
  v2 = (__int64 *)sub_18001367C(v9, &v11);
  sub_1800344BC(v3, &v15, v2);
  if ( v12 )
    sub_180010EC8(v12);
  if ( v10 )
    sub_180010EC8(v10);
  sub_18008A5FC(a1, &v13);
  sub_18008A1EC(v17, &v13, *(float *)(a1 + 1840));
  v8 = *(_DWORD *)(a1 + 1848);
  v17[5] = *sub_18008A008(&v9, (float *)&v8);
  v4 = sub_18000D954(&v9, a1);
  sub_180089C44((__int64)v18, v4);
  v5 = sub_180089EEC(v15, &v11, v17);
  sub_180011F5C((_QWORD *)(a1 + 1768), v5);
  if ( v12 )
    sub_180010EC8(v12);
  *(_WORD *)(a1 + 1896) = 1;
  result = sub_18008A398(v17, v6);
  if ( v14 )
    result = sub_180010EC8(v14);
  if ( v16 )
    return sub_180010EC8(v16);
  return result;
}
