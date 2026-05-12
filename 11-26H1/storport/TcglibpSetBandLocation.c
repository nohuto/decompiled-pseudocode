/*
 * XREFs of TcglibpSetBandLocation @ 0x14013328C
 * Callers:
 *     TcglibSetBandLocationEx @ 0x1401317C0 (TcglibSetBandLocationEx.c)
 * Callees:
 *     TcglibpSetTableColumns @ 0x14013435C (TcglibpSetTableColumns.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall TcglibpSetBandLocation(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-59h] BYREF
  int v11; // [rsp+24h] [rbp-55h]
  __int64 *v12; // [rsp+28h] [rbp-51h]
  int v13; // [rsp+30h] [rbp-49h]
  int v14; // [rsp+34h] [rbp-45h]
  __int64 v15; // [rsp+40h] [rbp-39h] BYREF
  int v16; // [rsp+48h] [rbp-31h]
  int v17; // [rsp+4Ch] [rbp-2Dh]
  __int64 v18; // [rsp+50h] [rbp-29h]
  int v19; // [rsp+58h] [rbp-21h]
  int v20; // [rsp+5Ch] [rbp-1Dh]
  __int64 v21; // [rsp+60h] [rbp-19h]
  int v22; // [rsp+68h] [rbp-11h]
  int v23; // [rsp+6Ch] [rbp-Dh]
  __int64 v24; // [rsp+70h] [rbp-9h]
  int v25; // [rsp+78h] [rbp-1h]
  int v26; // [rsp+7Ch] [rbp+3h]
  __int64 v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+88h] [rbp+Fh]
  int v29; // [rsp+8Ch] [rbp+13h]
  __int64 v30; // [rsp+90h] [rbp+17h]
  int v31; // [rsp+98h] [rbp+1Fh]
  int v32; // [rsp+9Ch] [rbp+23h]

  v5 = a3;
  v14 = 0;
  memset_0(&v15, 0, 0x60uLL);
  v10 = 2;
  v12 = &v15;
  if ( (_DWORD)v5 )
  {
    v11 = 4;
    v13 = 3;
  }
  else
  {
    v11 = 2;
    v13 = 1;
  }
  v15 = 2LL;
  v17 = 8;
  v18 = a4 + 24;
  v16 = 1;
  v19 = 32;
  v20 = 16;
  if ( (_DWORD)v5 )
  {
    v22 = 1;
    v28 = 1;
    v24 = a4 + 8;
    v21 = 3LL;
    v30 = a4 + 16;
    v8 = v5 + 0x80200030000LL;
    v23 = 8;
    v25 = 8;
    v26 = 10;
    v27 = 4LL;
    v29 = 8;
    v31 = 8;
    v32 = 10;
  }
  else
  {
    v8 = 0x80200000001LL;
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, int *))TcglibpSetTableColumns)(a1, a2, v8, &v10);
}
