/*
 * XREFs of TcglibpSetBand @ 0x140132FE4
 * Callers:
 *     TcglibSetBand @ 0x1401315C4 (TcglibSetBand.c)
 * Callees:
 *     TcglibpSetTableColumns @ 0x14013435C (TcglibpSetTableColumns.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall TcglibpSetBand(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rdi
  int v11; // r9d
  int v12; // r9d
  unsigned int v14; // ebx
  __int64 v15; // r8
  int *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+5Ch] [rbp-A4h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  _DWORD v28[41]; // [rsp+6Ch] [rbp-94h]

  v8 = a3;
  v22 = 0LL;
  WORD2(v19) = 240;
  BYTE6(v19) = -15;
  v20 = -251461392;
  v21 = 0LL;
  v11 = a4 - 1;
  if ( !v11 )
  {
    LOBYTE(v19) = 0;
    goto LABEL_8;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    LOBYTE(v19) = 1;
LABEL_8:
    BYTE2(v19) = 0;
    goto LABEL_9;
  }
  if ( v12 != 1 )
    return 3221225485LL;
  LOBYTE(v19) = 1;
  BYTE2(v19) = 1;
LABEL_9:
  if ( a5 == 1 )
  {
    BYTE1(v19) = 0;
    goto LABEL_15;
  }
  if ( a5 == 2 )
  {
    BYTE1(v19) = 1;
LABEL_15:
    BYTE3(v19) = 0;
    goto LABEL_16;
  }
  if ( a5 != 3 )
    return 3221225485LL;
  BYTE1(v19) = 1;
  BYTE3(v19) = 1;
LABEL_16:
  memset_0(&v23, 0, 0xC0uLL);
  if ( a8 )
  {
    v24 = 1;
    LODWORD(v21) = 2;
    v14 = 5;
    v23 = 2LL;
    v25 = 8;
    v26 = a8;
    v27 = 32;
    v28[0] = 16;
  }
  else
  {
    LODWORD(v21) = 5;
    v14 = 4;
  }
  *(__int64 *)((char *)&v23 + (a8 != 0 ? 0x20 : 0)) = 5LL;
  v15 = a8 != 0 ? 0x20 : 0;
  *(int *)((char *)&v24 + v15) = 1;
  *(int *)((char *)&v25 + v15) = 8;
  *(_DWORD *)((char *)&v28[-1] + v15) = 1;
  *(_DWORD *)((char *)v28 + v15) = 8;
  *(__int64 *)((char *)&v26 + v15) = (__int64)&v19;
  *(_QWORD *)((char *)&v28[1] + v15) = 6LL;
  *(_QWORD *)((char *)&v28[5] + v15) = (char *)&v19 + 1;
  *(_DWORD *)((char *)&v28[3] + v15) = 1;
  *(_DWORD *)((char *)&v28[4] + v15) = 8;
  *(_DWORD *)((char *)&v28[7] + v15) = 1;
  *(_DWORD *)((char *)&v28[8] + v15) = 8;
  *(_QWORD *)((char *)&v28[13] + v15) = (char *)&v19 + 2;
  *(_QWORD *)((char *)&v28[9] + v15) = 7LL;
  *(_DWORD *)((char *)&v28[11] + v15) = 1;
  *(_DWORD *)((char *)&v28[12] + v15) = 8;
  *(_DWORD *)((char *)&v28[15] + v15) = 1;
  *(_DWORD *)((char *)&v28[16] + v15) = 8;
  *(_QWORD *)((char *)&v28[21] + v15) = (char *)&v19 + 3;
  DWORD1(v21) = (a6 != 0) + 8;
  *(_QWORD *)((char *)&v28[17] + v15) = 8LL;
  *(_DWORD *)((char *)&v28[19] + v15) = 1;
  *(_DWORD *)((char *)&v28[20] + v15) = 8;
  *(_DWORD *)((char *)&v28[23] + v15) = 1;
  *(_DWORD *)((char *)&v28[24] + v15) = 8;
  if ( a6 )
  {
    v16 = (int *)&v19 + 1;
    v17 = 8LL * v14;
    if ( a7 )
      v16 = &v20;
    *(&v23 + 4 * v14) = 9LL;
    *(&v24 + 8 * v14) = 1;
    *(&v25 + 8 * v14) = 8;
    *(&v26 + 4 * v14) = (__int64)v16;
    v28[8 * v14++ - 1] = (a7 != 0) + 3;
    v28[v17] = 1;
  }
  LODWORD(v22) = v14;
  *((_QWORD *)&v21 + 1) = &v23;
  if ( (_DWORD)v8 )
    v18 = v8 + 0x80200030000LL;
  else
    v18 = 0x80200000001LL;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64, int))TcglibpSetTableColumns)(
           a1,
           a2,
           v18,
           &v21,
           v19,
           v20);
}
