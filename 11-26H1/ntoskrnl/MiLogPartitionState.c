/*
 * XREFs of MiLogPartitionState @ 0x1402A5678
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPartitionState(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v4; // r9
  __int64 v5; // rbx
  __int64 *v6; // r10
  unsigned int **v7; // r11
  unsigned int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r14
  __int16 *v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // r11
  int v17; // [rsp+28h] [rbp-E0h]
  int v18; // [rsp+30h] [rbp-D8h]
  unsigned __int16 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h] BYREF
  __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-78h] BYREF
  __int64 v30; // [rsp+98h] [rbp-70h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v32[31]; // [rsp+A8h] [rbp-60h] BYREF
  int v33; // [rsp+1A0h] [rbp+98h]
  int v34; // [rsp+1A4h] [rbp+9Ch]
  char v35; // [rsp+1A8h] [rbp+A0h] BYREF
  char v36; // [rsp+1B0h] [rbp+A8h] BYREF

  result = *(unsigned int *)(a2 + 22296);
  v19 = result;
  if ( (_WORD)result )
  {
    v4 = &v36;
    v5 = (unsigned __int16)result;
    v6 = (__int64 *)(a2 + 4624);
    v7 = (unsigned int **)(a2 + 22304);
    do
    {
      v8 = *v7++;
      *((_QWORD *)v4 - 1) = *v8;
      *(_QWORD *)v4 = v8[3];
      v4 += 32;
      *((_QWORD *)v4 - 3) = v8[5];
      result = *v6;
      v6 += 11;
      *((_QWORD *)v4 - 2) = result;
      --v5;
    }
    while ( v5 );
  }
  v9 = *(_QWORD *)(a2 + 3408);
  v10 = *(_QWORD *)(a2 + 3280);
  v11 = *(_QWORD *)(a2 + 4368);
  v12 = *(_QWORD *)(a2 + 4496);
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
  {
    result = tlgKeywordOn(stru_140E366D8.FirstArgument, 2048LL);
    if ( (_BYTE)result )
    {
      v20 = *v13;
      v32[5] = 2LL;
      v32[4] = (__int64)&v20;
      v21 = *((_QWORD *)v13 + 2786);
      v32[6] = (__int64)&v21;
      v22 = *((_QWORD *)v13 + 2808);
      v32[8] = (__int64)&v22;
      v32[10] = (__int64)&v23;
      v32[12] = (__int64)&v24;
      v32[14] = (__int64)&v25;
      v32[16] = (__int64)&v26;
      v32[18] = (__int64)&v27;
      v32[20] = (__int64)&v28;
      v29 = *((_QWORD *)v13 + 2816);
      v32[22] = (__int64)&v29;
      v30 = *((_QWORD *)v13 + 2888);
      v32[24] = (__int64)&v30;
      v31 = *((_QWORD *)v13 + 2935);
      v32[26] = (__int64)&v31;
      v32[28] = (__int64)&v19;
      v32[30] = (__int64)&v35;
      v33 = 32 * v19;
      v23 = v14;
      v32[7] = 8LL;
      v32[9] = 8LL;
      v32[11] = 8LL;
      v24 = v16;
      v32[13] = 8LL;
      v25 = v11;
      v32[15] = 8LL;
      v26 = v12;
      v32[17] = 8LL;
      v27 = v9;
      v32[19] = 8LL;
      v28 = v10;
      v32[21] = 8LL;
      v32[23] = 8LL;
      v32[25] = 8LL;
      v32[27] = 8LL;
      v32[29] = 2LL;
      v34 = 0;
      return tlgWriteEx_EtwWriteEx(v15, (int)&word_140058B22, (int)v13, 1, v17, v18, 0x10u, (__int64)v32);
    }
  }
  return result;
}
