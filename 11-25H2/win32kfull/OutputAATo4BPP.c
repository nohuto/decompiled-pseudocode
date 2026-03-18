/*
 * XREFs of OutputAATo4BPP @ 0x1402F7CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAATo4BPP(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned __int16 *v10; // rbp
  int v13; // ecx
  char v14; // esi^2
  __m128i v15; // xmm1
  unsigned int v16; // edx
  int v17; // r9d
  __int64 v18; // rax
  unsigned __int8 *v19; // r14
  __int8 v20; // r13d^2
  __int8 v21; // ebx^2
  __int8 v22; // edi^2
  char v23; // bl
  char v24; // di
  char v25; // si
  int v26; // r11d
  int v27; // edx
  int v28; // edx
  bool v29; // zf
  int v30; // edx
  char v31; // si
  char v32; // r11
  unsigned int v34; // [rsp+Ch] [rbp-5Ch]
  __m128i v35; // [rsp+10h] [rbp-58h]
  __int64 v36; // [rsp+20h] [rbp-48h]
  unsigned __int64 v37; // [rsp+80h] [rbp+18h]

  v37 = a3;
  v10 = a6;
  v13 = 0;
  v35 = *(__m128i *)(a5 - 24);
  v36 = *(_QWORD *)(a5 - 8);
  v14 = BYTE6(v36);
  v15 = _mm_srli_si128(v35, 12);
  if ( BYTE1(a9) )
    v13 = 2003830647;
  v16 = v36;
  v17 = _mm_cvtsi128_si32(v15);
  if ( (_BYTE)a9 )
  {
    a2 += 4;
    if ( a2[3] )
    {
      v16 = v36;
      *a4 = *a4 & 0xF0 | (BYTE1(a9) != 0 ? 7 : 0) ^ (BYTE2(v17) & ((*(_DWORD *)(a5 + 4LL * *a2) - (unsigned int)*a6) >> 16) | BYTE2(v36) & ((*(_DWORD *)(a5 + 4LL * a2[1] + 1024) - (unsigned int)a6[1]) >> 16) | BYTE6(v36) & ((*(_DWORD *)(a5 + 4LL * a2[2] + 2048) - (unsigned int)a6[2]) >> 16));
    }
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  LODWORD(v18) = *a1;
  v19 = a2 + 4;
  v20 = v35.m128i_i8[10];
  v21 = v35.m128i_i8[6];
  v22 = v35.m128i_i8[2];
  if ( (v18 & 0x80u) != 0LL )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v19 >= a3 )
        goto LABEL_15;
      LODWORD(v18) = v19[3] & 2;
      if ( (unsigned int)v18 | v19[7] & 1 )
        break;
LABEL_27:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v18) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v19 += 8;
    }
    v28 = (v18 | v19[7] & 1) - 1;
    if ( ((unsigned int)v18 | v19[7] & 1) == 1 )
    {
      v32 = BYTE1(v13) ^ (BYTE2(v17) & ((*(_DWORD *)(a5 + 4LL * v19[4]) - (unsigned int)*v10) >> 16) | BYTE2(v36) & ((*(_DWORD *)(a5 + 4LL * v19[5] + 1024) - (unsigned int)v10[1]) >> 16) | v14 & ((*(_DWORD *)(a5 + 4LL * v19[6] + 2048) - (unsigned int)v10[2]) >> 16));
      LOBYTE(v18) = *a4 & 0xF0;
    }
    else
    {
      v18 = v19[2];
      v29 = v28 == 1;
      v30 = v10[2];
      if ( !v29 )
      {
        v31 = v35.m128i_i8[10] & ((unsigned int)(*(_DWORD *)(a5 + 4 * v18 + 2048) - v30) >> 16) | BYTE2(v17) & ((*(_DWORD *)(a5 + 4LL * v19[4]) - (unsigned int)v10[3]) >> 16) | BYTE2(v36) & ((*(_DWORD *)(a5 + 4LL * v19[5] + 1024) - (unsigned int)v10[4]) >> 16) | BYTE6(v36) & ((*(_DWORD *)(a5 + 4LL * v19[6] + 2048) - (unsigned int)v10[5]) >> 16);
        v22 = v35.m128i_i8[2];
        v21 = v35.m128i_i8[6];
        LODWORD(v18) = HIWORD(v35.m128i_i32[0]);
        *a4 = v13 ^ (v35.m128i_i8[2] & ((*(_DWORD *)(a5 + 4LL * *v19) - (unsigned int)*v10) >> 16) | v35.m128i_i8[6] & ((*(_DWORD *)(a5 + 4LL * v19[1] + 1024) - (unsigned int)v10[1]) >> 16) | v31);
        v14 = BYTE6(v36);
LABEL_26:
        a3 = v37;
        goto LABEL_27;
      }
      v32 = BYTE2(v13) ^ (v22 & ((*(_DWORD *)(a5 + 4LL * *v19) - (unsigned int)*v10) >> 16) | v21 & ((*(_DWORD *)(a5 + 4LL * v19[1] + 1024) - (unsigned int)v10[1]) >> 16) | v35.m128i_i8[10] & ((unsigned int)(*(_DWORD *)(a5 + 4 * v18 + 2048) - v30) >> 16));
      LOBYTE(v18) = *a4 & 0xF;
    }
    *a4 = v18 | v32;
    goto LABEL_26;
  }
  if ( (unsigned __int64)v19 < a3 )
  {
    v34 = HIWORD(v16);
    do
    {
      v23 = BYTE6(v36) & ((*(_DWORD *)(a5 + 4LL * v19[6] + 2048) - (unsigned int)v10[5]) >> 16);
      v24 = v34 & ((*(_DWORD *)(a5 + 4LL * v19[5] + 1024) - (unsigned int)v10[4]) >> 16);
      v25 = v35.m128i_i8[6] & ((*(_DWORD *)(a5 + 4LL * v19[1] + 1024) - (unsigned int)v10[1]) >> 16) | v35.m128i_i8[10] & ((*(_DWORD *)(a5 + 4LL * v19[2] + 2048) - (unsigned int)v10[2]) >> 16);
      v18 = *v19;
      v26 = *(_DWORD *)(a5 + 4LL * v19[4]) - v10[3];
      v27 = *v10;
      v10 += 6;
      *a4++ = v13 ^ (BYTE2(v17) & BYTE2(v26) | v24 | v23 | v35.m128i_i8[2] & ((unsigned int)(*(_DWORD *)(a5 + 4 * v18)
                                                                                           - v27) >> 16) | v25);
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v18) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v19 += 8;
    }
    while ( (unsigned __int64)v19 < a3 );
    v20 = v35.m128i_i8[10];
  }
LABEL_15:
  if ( BYTE3(a9) && v19[3] )
  {
    LOBYTE(v18) = *a4 & 0xF;
    *a4 = v18 | BYTE2(v13) ^ (v35.m128i_i8[2] & ((*(_DWORD *)(a5 + 4LL * *v19) - (unsigned int)*v10) >> 16) | v35.m128i_i8[6] & ((*(_DWORD *)(a5 + 4LL * v19[1] + 1024) - (unsigned int)v10[1]) >> 16) | v20 & ((*(_DWORD *)(a5 + 4LL * v19[2] + 2048) - (unsigned int)v10[2]) >> 16));
  }
  return v18;
}
