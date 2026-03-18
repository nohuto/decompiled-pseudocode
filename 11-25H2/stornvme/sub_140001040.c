/*
 * XREFs of sub_140001040 @ 0x140001040
 * Callers:
 *     sub_140001810 @ 0x140001810 (sub_140001810.c)
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_1400012C0 @ 0x1400012C0 (sub_1400012C0.c)
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_140006540 @ 0x140006540 (sub_140006540.c)
 */

__int64 __fastcall sub_140001040(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  _DWORD *v6; // rdx
  unsigned __int8 v7; // cl
  __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // ett
  unsigned int v13; // eax
  _BYTE *v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  _BYTE *v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // r11d
  unsigned __int64 v22; // rdx
  unsigned int v23; // ebx
  unsigned int v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ebx
  unsigned int v28; // edi
  unsigned int v29; // eax
  _BYTE *v30; // rcx
  __int64 v31; // rcx
  int v32; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(unsigned int *)(a2 + 52);
    v5 = *(_QWORD *)(a2 + 64);
    v6 = (_DWORD *)(a2 + 60);
    v7 = *(_BYTE *)(v4 + a2 + 10);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = (_DWORD *)(a2 + 16);
    v7 = *(_BYTE *)(a2 + 7);
  }
  if ( *v6 >= 0x40u )
  {
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_WORD *)v5 = -20480;
    v9 = a1 + 8LL * v7;
    v10 = *(_QWORD *)(v9 + 1672);
    v11 = *(_DWORD *)(v10 + 52);
    v12 = *(_DWORD *)(v10 + 104);
    *(_BYTE *)(v5 + 7) = v12 / v11;
    *(_BYTE *)(v5 + 6) = (unsigned __int16)(v12 / v11) >> 8;
    v13 = (unsigned int)sub_140006540(a1, v12 % v11) / v11;
    v14[11] = v13;
    v14[10] = BYTE1(v13);
    v14[9] = BYTE2(v13);
    v14[8] = HIBYTE(v13);
    v15 = *(_DWORD *)(*(_QWORD *)(v9 + 1672) + 100LL) / v11;
    v16 = *(_DWORD *)(*(_QWORD *)(v9 + 1672) + 100LL) % v11;
    v14[15] = v15;
    v14[14] = BYTE1(v15);
    v14[13] = BYTE2(v15);
    v14[12] = HIBYTE(v15);
    if ( (unsigned __int8)sub_1400012C0(v17, v16) )
    {
      v21 = *(unsigned __int8 *)(v19 + 4067);
      if ( !(_BYTE)v21 )
        v21 = 256;
      v22 = *(_QWORD *)(v19 + 4072);
      if ( v22 )
      {
        if ( v22 > 0xFFFFFFFF )
          LODWORD(v22) = -1;
        v23 = v22;
        v24 = v22;
        v25 = v22;
      }
      else
      {
        v25 = (0x40000000 / v11) << 6;
        v22 = (unsigned __int8)((unsigned __int8)(0x40000000 / v11) << 6);
        v23 = v25;
        v24 = v25;
      }
      v26 = *(_DWORD *)(v19 + 48);
      v27 = v23 >> 8;
      v28 = HIWORD(v24);
      v29 = HIBYTE(v25);
      if ( v26 )
      {
        v27 = v26 >> 8;
        LOBYTE(v22) = *(_DWORD *)(v19 + 48);
        v28 = HIWORD(v26);
        LOBYTE(v29) = HIBYTE(*(_DWORD *)(v19 + 48));
      }
      v18[3] = 60;
      v18[21] = v28;
      v18[26] = BYTE1(v21);
      v18[25] = BYTE2(v21);
      v18[24] = HIBYTE(v21);
      v18[23] = v22;
      v18[22] = v27;
      v18[20] = v29;
      v18[27] = v21;
      v30 = *(_BYTE **)(v9 + 1672);
      v18[31] = v30[160];
      v18[30] = v30[161];
      v18[29] = v30[162];
      v18[28] = v30[163];
      v31 = *(_QWORD *)(v9 + 1672);
      v32 = *(_DWORD *)(v31 + 164);
      if ( v32 )
      {
        v18[35] = v32;
        v18[34] = *(_BYTE *)(v31 + 165);
        v18[33] = *(_BYTE *)(v31 + 166);
        v18[32] = *(_BYTE *)(v31 + 167) | 0x80;
      }
    }
    else
    {
      v18[3] = 60;
    }
    result = 0LL;
    *(_BYTE *)(v20 + 3) = 1;
  }
  else
  {
    LOBYTE(a1) = 36;
    LOBYTE(v5) = 5;
    LOBYTE(v6) = 6;
    sub_140002330(a2, v6, v5, a1);
    return 3238002694LL;
  }
  return result;
}
