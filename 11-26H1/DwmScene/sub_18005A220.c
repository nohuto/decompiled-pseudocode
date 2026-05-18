/*
 * XREFs of sub_18005A220 @ 0x18005A220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18002901C @ 0x18002901C (sub_18002901C.c)
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 *     sub_18005ACB8 @ 0x18005ACB8 (sub_18005ACB8.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

__int64 __fastcall sub_18005A220(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  __int64 i; // rax
  int v8; // xmm1_4
  __int64 *v9; // rbx
  int v10; // eax
  _DWORD *v11; // rax
  __int64 v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+38h] [rbp-31h]
  _BYTE v14[16]; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v15[24]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+47h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x100000) != 0 && result != a1 )
  {
    sub_18002901C((__int64)v15, 12LL, 8LL, sub_18000E480);
    for ( i = 0LL; i < 24; i += 3LL )
    {
      v12 = *(_QWORD *)((char *)&unk_180106330 + i * 4);
      v8 = HIDWORD(v12);
      v15[i] = v12;
      v15[i + 2] = *(_DWORD *)((char *)&unk_180106330 + i * 4 + 8);
      v15[i + 1] = v8;
    }
    v9 = (__int64 *)v15;
    do
    {
      v10 = *((_DWORD *)v9 + 2);
      v12 = *v9;
      v13 = v10;
      v11 = (_DWORD *)sub_18005ACB8(a1, v14, &v12);
      *(_DWORD *)v9 = *v11;
      *((_DWORD *)v9 + 1) = v11[1];
      *((_DWORD *)v9 + 2) = v11[2];
      v9 = (__int64 *)((char *)v9 + 12);
    }
    while ( v9 != &v16 );
    sub_18007AB60(a1);
    sub_180034428();
  }
  return result;
}
