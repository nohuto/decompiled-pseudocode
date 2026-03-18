/*
 * XREFs of OutputAAToVGA16 @ 0x1402F89B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAAToVGA16(
        int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  unsigned __int16 *v10; // r9
  unsigned __int8 *v12; // r10
  __int64 v13; // xmm0_8
  unsigned int v14; // r15d
  int v15; // eax
  unsigned __int8 *v16; // r10
  __int32 v17; // r13d
  unsigned __int64 v18; // r8
  int v19; // ecx
  int v20; // ecx
  int v21; // r8d
  unsigned __int64 v22; // r8
  char v23; // al
  __m128i v25; // [rsp+0h] [rbp-38h]

  v10 = a6;
  v12 = a2;
  v13 = *(_QWORD *)(a5 - 8);
  v25 = *(__m128i *)(a5 - 24);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 12));
  if ( (_BYTE)a9 )
  {
    v12 = a2 + 4;
    if ( a2[7] )
      *a4 = VGA16Xlate[((v14 & (*(_DWORD *)(a5 + 4LL * *v12) - *a6) | (unsigned int)v13 & (*(_DWORD *)(a5 + 4LL * v12[1] + 1024)
                                                                                         - a6[1]) | (unsigned __int64)(HIDWORD(v13) & (*(_DWORD *)(a5 + 4LL * v12[2] + 2048) - (unsigned int)a6[2]))) ^ 0x70000) >> 16] | *a4 & 0xF0;
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  v15 = *a1;
  v16 = v12 + 4;
  v17 = v25.m128i_i32[1];
  if ( (*a1 & 0x80u) != 0 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v16 >= a3 )
        goto LABEL_12;
      v15 = v16[3] & 2;
      if ( v15 | v16[7] & 1 )
        break;
LABEL_24:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v15) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v16 += 8;
    }
    if ( (v15 | v16[7] & 1) == 1 )
    {
      v22 = (v14 & (*(_DWORD *)(a5 + 4LL * v16[4]) - *v10) | (unsigned int)v13 & (*(_DWORD *)(a5 + 4LL * v16[5] + 1024)
                                                                                - v10[1]) | (unsigned __int64)(HIDWORD(v13) & (*(_DWORD *)(a5 + 4LL * v16[6] + 2048) - (unsigned int)v10[2]))) ^ 0x70000;
      v23 = *a4 & 0xF0;
    }
    else
    {
      v20 = v10[2];
      v21 = *(_DWORD *)(a5 + 4LL * v16[2] + 2048);
      if ( (v15 | v16[7] & 1) != 2 )
      {
        LOBYTE(v15) = VGA16Xlate[((v25.m128i_i32[0] & (*(_DWORD *)(a5 + 4LL * *v16) - (unsigned int)*v10) | v14 & (*(_DWORD *)(a5 + 4LL * v16[4]) - v10[3]) | (unsigned int)v13 & (*(_DWORD *)(a5 + 4LL * v16[5] + 1024) - v10[4]) | v25.m128i_i32[1] & (*(_DWORD *)(a5 + 4LL * v16[1] + 1024) - (unsigned int)v10[1]) | HIDWORD(v13) & (*(_DWORD *)(a5 + 4LL * v16[6] + 2048) - (unsigned int)v10[5]) | (unsigned __int64)(v25.m128i_i32[2] & (unsigned int)(v21 - v20))) ^ 0x770000) >> 16];
LABEL_23:
        *a4 = v15;
        goto LABEL_24;
      }
      v22 = (v25.m128i_i32[0] & (*(_DWORD *)(a5 + 4LL * *v16) - (unsigned int)*v10) | v25.m128i_i32[1] & (*(_DWORD *)(a5 + 4LL * v16[1] + 1024) - (unsigned int)v10[1]) | (unsigned __int64)(v25.m128i_i32[2] & (unsigned int)(v21 - v20))) ^ 0x700000;
      v23 = *a4 & 0xF;
    }
    LOBYTE(v15) = VGA16Xlate[v22 >> 16] | v23;
    goto LABEL_23;
  }
  if ( (unsigned __int64)v16 < a3 )
  {
    do
    {
      v18 = ((unsigned __int64)v14 >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v16[4]) - (unsigned int)v10[3]) >> 16) | ((unsigned __int64)HIDWORD(v13) >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v16[6] + 2048) - (unsigned int)v10[5]) >> 16) | ((unsigned __int64)(unsigned int)v13 >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v16[5] + 1024) - (unsigned int)v10[4]) >> 16) | ((unsigned __int64)v25.m128i_u32[1] >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v16[1] + 1024) - (unsigned int)v10[1]) >> 16) | ((unsigned __int64)v25.m128i_u32[2] >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v16[2] + 2048) - (unsigned int)v10[2]) >> 16);
      v19 = *v10;
      v10 += 6;
      LOBYTE(v15) = VGA16Xlate[(((unsigned __int64)v25.m128i_u32[0] >> 16) & ((unsigned __int64)(unsigned int)(*(_DWORD *)(a5 + 4LL * *v16) - v19) >> 16) | v18) ^ 0x77];
      *a4++ = v15;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v15) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v16 += 8;
    }
    while ( (unsigned __int64)v16 < a3 );
    v17 = v25.m128i_i32[1];
  }
LABEL_12:
  if ( HIBYTE(a9) && v16[3] )
  {
    LOBYTE(v15) = VGA16Xlate[((v25.m128i_i32[0] & (*(_DWORD *)(a5 + 4LL * *v16) - (unsigned int)*v10) | v17 & (*(_DWORD *)(a5 + 4LL * v16[1] + 1024) - (unsigned int)v10[1]) | (unsigned __int64)(v25.m128i_i32[2] & (*(_DWORD *)(a5 + 4LL * v16[2] + 2048) - (unsigned int)v10[2]))) ^ 0x700000) >> 16] | *a4 & 0xF;
    *a4 = v15;
  }
  return v15;
}
