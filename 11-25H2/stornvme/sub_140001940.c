/*
 * XREFs of sub_140001940 @ 0x140001940
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 */

__int64 __fastcall sub_140001940(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  int *v7; // rbx
  __int64 v8; // r10
  unsigned __int8 v9; // dl
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // ecx
  unsigned __int64 v14; // rdx
  int v16; // r9d
  __int64 v17; // r9
  unsigned int v18; // ecx
  char v19; // al
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  char i; // dl
  unsigned __int64 v26; // [rsp+58h] [rbp+10h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = (int *)(a2 + 60);
    v8 = *(_QWORD *)(a2 + 64);
    v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 24);
    v7 = (int *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 7);
  }
  v10 = v9;
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 8LL * v9 + 1672);
  v13 = *(_DWORD *)(v12 + 52);
  v14 = *(_QWORD *)(v12 + 56) - 1LL;
  v26 = v14;
  if ( *(_BYTE *)(v12 + 66) || *(_WORD *)(v12 + 48) )
  {
    v14 = 0LL;
    v26 = 0LL;
  }
  if ( (unsigned int)*v7 >= 8 && ((_DWORD)a4 != 16 || (unsigned int)*v7 >= 0xC) && v8 )
  {
    if ( (_DWORD)a4 != 16 || *a3 != 0x9E )
    {
      *(_BYTE *)(v8 + 6) = BYTE1(v13);
      *(_BYTE *)(v8 + 5) = BYTE2(v13);
      *(_BYTE *)(v8 + 4) = HIBYTE(v13);
      *(_BYTE *)(v8 + 7) = v13;
      if ( v14 >= 0xFFFFFFFF )
      {
        *(_DWORD *)v8 = -1;
      }
      else
      {
        *(_BYTE *)(v8 + 3) = v14;
        *(_BYTE *)(v8 + 2) = BYTE1(v14);
        *(_BYTE *)v8 = BYTE3(v14);
        *(_BYTE *)(v8 + 1) = BYTE2(v14);
      }
      *v7 = 8;
      goto LABEL_12;
    }
    if ( (a3[1] & 0x1F) != 0x10 )
    {
      LOBYTE(a4) = 32;
      LOBYTE(v11) = 5;
      LOBYTE(v14) = 6;
      sub_140002330(a2, v14, v11, a4);
      LODWORD(v11) = -1056964601;
      return (unsigned int)v11;
    }
    v16 = 12;
    *(_BYTE *)(v8 + 6) = BYTE1(v26);
    *(_BYTE *)(v8 + 5) = BYTE2(v26);
    *(_BYTE *)(v8 + 4) = BYTE3(v26);
    *(_BYTE *)(v8 + 3) = BYTE4(v26);
    *(_BYTE *)(v8 + 2) = BYTE5(v26);
    *(_BYTE *)(v8 + 1) = BYTE6(v26);
    *(_BYTE *)v8 = HIBYTE(v26);
    *(_BYTE *)(v8 + 10) = BYTE1(v13);
    *(_BYTE *)(v8 + 9) = BYTE2(v13);
    *(_BYTE *)(v8 + 8) = HIBYTE(v13);
    *(_BYTE *)(v8 + 7) = v14;
    *(_BYTE *)(v8 + 11) = v13;
    if ( (unsigned int)*v7 < 0x10 )
    {
LABEL_43:
      *v7 = v16;
LABEL_12:
      *(_BYTE *)(a2 + 3) = 1;
      return (unsigned int)v11;
    }
    *(_BYTE *)(v8 + 12) &= 0xF0u;
    v17 = *(_QWORD *)(a1 + 8 * v10 + 1672);
    v18 = *(_DWORD *)(v17 + 104);
    if ( !v18 && !*(_DWORD *)(a1 + 144) )
    {
      v19 = *(_BYTE *)(v8 + 13);
      if ( *(_DWORD *)(v17 + 52) == 512 )
        *(_BYTE *)(v8 + 13) = v19 & 0xF0 | 3;
      else
        *(_BYTE *)(v8 + 13) = v19 & 0xF0;
LABEL_41:
      *(_BYTE *)(v8 + 14) &= 0xC0u;
      v16 = 16;
      *(_BYTE *)(v8 + 15) = 0;
      *(_BYTE *)(v8 + 14) = *(_BYTE *)(*(_QWORD *)(a1 + 8 * v10 + 1672) + 65LL) << 7;
      if ( (unsigned int)*v7 >= 0x20 )
        v16 = 32;
      goto LABEL_43;
    }
    v20 = *(_DWORD *)(a1 + 144);
    if ( v18 )
    {
      if ( v20 && v18 >= v20 )
        v18 = *(_DWORD *)(a1 + 144);
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 144);
      if ( !v20 )
      {
        v23 = 1;
LABEL_34:
        v24 = v23 / *(_DWORD *)(v17 + 52);
        if ( v24 )
        {
          for ( i = 0; v24 > 1; ++i )
            v24 >>= 1;
          *(_BYTE *)(v8 + 13) ^= (i ^ *(_BYTE *)(v8 + 13)) & 0xF;
        }
        else
        {
          *(_BYTE *)(v8 + 13) &= 0xF0u;
        }
        goto LABEL_41;
      }
    }
    v21 = ((((v18 - 1) >> 1) | (v18 - 1)) >> 2) | ((v18 - 1) >> 1) | (v18 - 1);
    v22 = (((v21 >> 4) | v21) >> 8) | (v21 >> 4) | v21;
    v23 = (v22 | HIWORD(v22)) + 1;
    goto LABEL_34;
  }
  LOBYTE(a4) = 36;
  LOBYTE(v11) = 5;
  LOBYTE(v14) = 6;
  sub_140002330(a2, v14, v11, a4);
  return 3238002692LL;
}
