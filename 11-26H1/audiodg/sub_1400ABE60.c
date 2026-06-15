/*
 * XREFs of sub_1400ABE60 @ 0x1400ABE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400029D8 @ 0x1400029D8 (sub_1400029D8.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_1400AC594 @ 0x1400AC594 (sub_1400AC594.c)
 */

char __fastcall sub_1400ABE60(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v3; // rsi
  int v4; // edi
  double v5; // xmm0_8
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  double v12; // xmm0_8
  int v13; // ecx
  int v14; // eax
  int v16; // [rsp+80h] [rbp+7h] BYREF
  int v17; // [rsp+84h] [rbp+Bh] BYREF
  double v18; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+90h] [rbp+17h] BYREF
  double v20; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v22[5]; // [rsp+A8h] [rbp+2Fh] BYREF
  int v23; // [rsp+E0h] [rbp+67h] BYREF
  int v24; // [rsp+E8h] [rbp+6Fh] BYREF
  int v25; // [rsp+F0h] [rbp+77h] BYREF
  int v26; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *(__int64 **)(a1 + 80);
  v3 = *v1;
  if ( *(_DWORD *)*v1 > 4u )
  {
    LOBYTE(v1) = sub_14002813C(*v1, 0x400000000000LL);
    v4 = 0;
    if ( (_BYTE)v1 )
    {
      v5 = sub_1400AC594(a1, 1LL);
      v6 = *(_DWORD *)(a1 + 48);
      v7 = *(_DWORD *)(a1 + 68);
      v18 = v5;
      v23 = v7;
      if ( v6 )
        v8 = *(_DWORD *)(a1 + 64);
      else
        v8 = 0;
      v24 = v8;
      v9 = *(_QWORD *)(a1 + 56);
      v25 = v6;
      v19 = v9;
      v12 = sub_1400AC594(a1, 0LL);
      v13 = *(_DWORD *)(a1 + 16);
      v14 = *(_DWORD *)(a1 + 36);
      v20 = v12;
      v26 = v14;
      if ( v13 )
        v4 = *(_DWORD *)(a1 + 32);
      v21 = *(_QWORD *)(a1 + 24);
      v22[0] = *(_QWORD *)(a1 + 88);
      v17 = v13;
      v16 = v4;
      LOBYTE(v1) = sub_1400029D8(
                     v3,
                     (__int64)&unk_1400D40A7,
                     v10,
                     v11,
                     v22,
                     (__int64)&v17,
                     (__int64)&v21,
                     (__int64)&v16,
                     (__int64)&v26,
                     (__int64)&v20,
                     (__int64)&v25,
                     (__int64)&v19,
                     (__int64)&v24,
                     (__int64)&v23,
                     (__int64)&v18);
    }
  }
  return (char)v1;
}
