/*
 * XREFs of bCvtPts @ 0x14009A62C
 * Callers:
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x14009A520 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x14009C3B0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x14013E8A0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 * Callees:
 *     bFToL @ 0x1400910A4 (bFToL.c)
 */

__int64 __fastcall bCvtPts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  int *v5; // rsi
  __int64 v6; // rdi
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  int v11; // r10d
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r10d
  unsigned int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  signed __int64 v19; // rsi
  int v20; // eax
  float v21; // xmm2_4
  double v22; // xmm3_8
  double v23; // xmm0_8
  unsigned int v24; // r8d
  int v25; // eax
  int v26[10]; // [rsp+20h] [rbp-28h] BYREF
  int v27; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)a3;
  v5 = (int *)a2;
  LODWORD(a3) = 0;
  LODWORD(a2) = 0;
  v27 = 0;
  v6 = a4;
  v26[0] = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0 )
  {
LABEL_27:
    if ( a4 )
    {
      do
      {
        v21 = (float)*v5;
        *(_QWORD *)&v22 = COERCE_UNSIGNED_INT((float)v5[1]);
        HIDWORD(v23) = 0;
        *(float *)&v23 = (float)(*(float *)&v22 * *(float *)(a1 + 8)) + (float)(v21 * *(float *)a1);
        bFToL(v23, &v27, 6u);
        *(float *)&v22 = (float)(*(float *)&v22 * *(float *)(a1 + 12)) + (float)(v21 * *(float *)(a1 + 4));
        bFToL(v22, v26, v24);
        v5 += 2;
        *(_DWORD *)v4 = *(_DWORD *)(a1 + 24) + v27;
        *((_DWORD *)v4 + 1) = v26[0] + *(_DWORD *)(a1 + 28);
        v4 += 8;
        --v6;
      }
      while ( v6 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 1 )
  {
LABEL_8:
    if ( a4 )
    {
      do
      {
        v9 = (__m128i)COERCE_UNSIGNED_INT((float)*v5);
        v10 = (__m128i)COERCE_UNSIGNED_INT((float)v5[1]);
        *(float *)v9.m128i_i32 = *(float *)v9.m128i_i32 * *(float *)a1;
        *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 * *(float *)(a1 + 12);
        v11 = _mm_cvtsi128_si32(v9);
        v12 = (unsigned __int8)(v11 >> 23);
        if ( v12 <= 0x9E )
        {
          v13 = v11 & 0x7FFFFF | 0x800000LL;
          v14 = v12 < 0x76 ? v13 >> (118 - (unsigned __int8)v12) : v13 << ((unsigned __int8)v12 - 118);
          a3 = (v14 + 0x80000000LL) >> 32;
          if ( v11 < 0 )
            LODWORD(a3) = -(int)a3;
        }
        v15 = _mm_cvtsi128_si32(v10);
        v16 = (unsigned __int8)(v15 >> 23);
        if ( v16 <= 0x9E )
        {
          v17 = v15 & 0x7FFFFF | 0x800000LL;
          v18 = v16 < 0x76 ? v17 >> (118 - (unsigned __int8)v16) : v17 << ((unsigned __int8)v16 - 118);
          a2 = (v18 + 0x80000000LL) >> 32;
          if ( v15 < 0 )
            LODWORD(a2) = -(int)a2;
        }
        v5 += 2;
        *(_DWORD *)v4 = a3 + *(_DWORD *)(a1 + 24);
        *((_DWORD *)v4 + 1) = a2 + *(_DWORD *)(a1 + 28);
        v4 += 8;
        --v6;
      }
      while ( v6 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0xB) != 8 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0xB) != 9 )
      {
        if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0xB && a4 )
        {
          v19 = (char *)v5 - v4;
          do
          {
            *(_DWORD *)v4 = *(_DWORD *)(a1 + 24) + 16 * *(_DWORD *)&v4[v19];
            v20 = *(_DWORD *)&v4[v19 + 4];
            v4 += 8;
            *((_DWORD *)v4 - 1) = *(_DWORD *)(a1 + 28) + 16 * v20;
            --v6;
          }
          while ( v6 );
        }
        return 1LL;
      }
      goto LABEL_8;
    }
    goto LABEL_27;
  }
  if ( a4 )
  {
    do
    {
      v25 = *v5;
      v5 += 2;
      *(_DWORD *)v4 = *(_DWORD *)(a1 + 24) + (((v25 >> 3) + 1) >> 1);
      v4 += 8;
      *((_DWORD *)v4 - 1) = *(_DWORD *)(a1 + 28) + (((*(v5 - 1) >> 3) + 1) >> 1);
      --v6;
    }
    while ( v6 );
  }
  return 1LL;
}
