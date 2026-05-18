/*
 * XREFs of sub_1800923D0 @ 0x1800923D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_1800900E4 @ 0x1800900E4 (sub_1800900E4.c)
 *     sub_1800903A4 @ 0x1800903A4 (sub_1800903A4.c)
 *     sub_180090524 @ 0x180090524 (sub_180090524.c)
 *     sub_1800937F0 @ 0x1800937F0 (sub_1800937F0.c)
 */

// Hidden C++ exception states: #wind=13
char __fastcall sub_1800923D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  char *v6; // rbx
  _BYTE v8[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+24h] [rbp-DCh] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[40]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v13[40]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v14[40]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v15[40]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v16[40]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v17[40]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v18[40]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v19[40]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v20[40]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v21[40]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v22; // [rsp+1F8h] [rbp+F8h] BYREF

  v3 = *(unsigned int *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 16LL);
  if ( dword_1801CDAD8 > (int)v3 )
  {
    sub_18000D534(&dword_1801CDAD8);
    if ( dword_1801CDAD8 == -1 )
    {
      v8[0] = 0;
      sub_1800900E4((__int64)v11, (__int64)&unk_1801CBE58, v8);
      v8[0] = 0;
      sub_1800900E4((__int64)v12, (__int64)&unk_1801CBD98, v8);
      v8[0] = 0;
      sub_1800900E4((__int64)v13, (__int64)&unk_1801CBF98, v8);
      v8[0] = 2;
      sub_1800900E4((__int64)v14, (__int64)&unk_1801CBE98, v8);
      v8[0] = 2;
      sub_1800900E4((__int64)v15, (__int64)&unk_1801CBDB8, v8);
      v8[0] = 3;
      sub_1800900E4((__int64)v16, (__int64)&unk_1801CBE78, v8);
      v8[0] = 3;
      sub_1800900E4((__int64)v17, (__int64)&unk_1801CBDF8, v8);
      v8[0] = 1;
      sub_1800900E4((__int64)v18, (__int64)&unk_1801CBEB8, v8);
      v8[0] = 1;
      sub_1800900E4((__int64)v19, (__int64)&unk_1801CBE38, v8);
      v8[0] = 5;
      sub_1800900E4((__int64)v20, (__int64)&unk_1801CBEF8, v8);
      v8[0] = 5;
      sub_1800900E4((__int64)v21, (__int64)&unk_1801CBE18, v8);
      v9 = 0;
      sub_180090524(v4, &v9);
      v6 = v11;
      do
      {
        sub_1800903A4(v5, (__int64)v10, (__int64)v6);
        v6 += 40;
      }
      while ( v6 != &v22 );
      sub_18000BFA4((__int64)v11, 40LL, 11LL, (void (__fastcall *)(__int64))sub_180011E30);
      atexit(sub_1800EC7E0);
      sub_18000D4CC(&dword_1801CDAD8);
    }
  }
  return *(_BYTE *)sub_1800937F0(v3, a2);
}
