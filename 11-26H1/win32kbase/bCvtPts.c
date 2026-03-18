/*
 * XREFs of bCvtPts @ 0x1400C25C8
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1400C0A00 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1400C0B10 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 * Callees:
 *     ?LogLongAddFailure@@YAXJJAEAH@Z @ 0x1400C2B28 (-LogLongAddFailure@@YAXJJAEAH@Z.c)
 *     ?EngTraceLoggingWrite@@YAXPEBD_K111@Z @ 0x1401F0F10 (-EngTraceLoggingWrite@@YAXPEBD_K111@Z.c)
 */

__int64 __fastcall bCvtPts(__int64 a1, int *a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rbp
  __int64 v7; // rdi
  _DWORD *v8; // r14
  unsigned int v10; // edx
  char *v12; // rbx
  __m128i v13; // xmm1
  __m128i v14; // xmm3
  int v15; // r9d
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  signed __int64 v23; // r14
  __m128i v24; // xmm2
  float v25; // xmm0_4
  __m128i v26; // xmm3
  int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  int v36; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  LODWORD(v6) = 0;
  v7 = a4;
  v8 = a3;
  v10 = 1;
  v36 = 1;
  switch ( *(_DWORD *)(a1 + 32) & 0xB )
  {
    case 0:
      goto LABEL_36;
    case 1:
      goto LABEL_8;
    case 3:
      if ( !a4 )
        return v10;
      do
      {
        LogLongAddFailure(((*a2 >> 3) + 1) >> 1, *(_DWORD *)(a1 + 24), &v36);
        *v8 = *(_DWORD *)(a1 + 24) + (((*a2 >> 3) + 1) >> 1);
        LogLongAddFailure(((a2[1] >> 3) + 1) >> 1, *(_DWORD *)(a1 + 28), &v36);
        v8 += 2;
        v35 = a2[1] >> 3;
        a2 += 2;
        *(v8 - 1) = *(_DWORD *)(a1 + 28) + ((v35 + 1) >> 1);
        --v7;
      }
      while ( v7 );
      return (unsigned int)v36;
    case 8:
LABEL_36:
      if ( !a4 )
        return v10;
      do
      {
        v24 = (__m128i)COERCE_UNSIGNED_INT((float)a2[1]);
        v26 = v24;
        v25 = (float)*a2;
        *(float *)v24.m128i_i32 = (float)(*(float *)v24.m128i_i32 * *(float *)(a1 + 8)) + (float)(v25 * *(float *)a1);
        *(float *)v26.m128i_i32 = (float)(*(float *)v26.m128i_i32 * *(float *)(a1 + 12))
                                + (float)(v25 * *(float *)(a1 + 4));
        v27 = _mm_cvtsi128_si32(v24);
        v28 = (unsigned __int8)(v27 >> 23);
        if ( v28 <= 0x9E )
        {
          v29 = v27 & 0x7FFFFF | 0x800000LL;
          v30 = v28 < 0x76 ? v29 >> (118 - (unsigned __int8)v28) : v29 << ((unsigned __int8)v28 - 118);
          v4 = (v30 + 0x80000000LL) >> 32;
          if ( v27 < 0 )
            LODWORD(v4) = -(int)v4;
        }
        v31 = _mm_cvtsi128_si32(v26);
        v32 = (unsigned __int8)(v31 >> 23);
        if ( v32 <= 0x9E )
        {
          v33 = v31 & 0x7FFFFF | 0x800000LL;
          v34 = v32 < 0x76 ? v33 >> (118 - (unsigned __int8)v32) : v33 << ((unsigned __int8)v32 - 118);
          v6 = (v34 + 0x80000000LL) >> 32;
          if ( v31 < 0 )
            LODWORD(v6) = -(int)v6;
        }
        LogLongAddFailure(v4, *(_DWORD *)(a1 + 24), &v36);
        *v8 = v4 + *(_DWORD *)(a1 + 24);
        LogLongAddFailure(v6, *(_DWORD *)(a1 + 28), &v36);
        a2 += 2;
        v8[1] = v6 + *(_DWORD *)(a1 + 28);
        v8 += 2;
        --v7;
      }
      while ( v7 );
      return (unsigned int)v36;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 9 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0xB && a4 )
    {
      v23 = (char *)a3 - (char *)a2;
      do
      {
        if ( (unsigned __int64)(16 * *a2 + (__int64)*(int *)(a1 + 24) + 0x80000000LL) > 0xFFFFFFFF )
        {
          EngTraceLoggingWrite("EMathUNCL", 1uLL, 0LL, 0LL, 0LL);
          v10 = 0;
        }
        *(int *)((char *)a2 + v23) = *(_DWORD *)(a1 + 24) + 16 * *a2;
        if ( (unsigned __int64)(16 * a2[1] + (__int64)*(int *)(a1 + 28) + 0x80000000LL) > 0xFFFFFFFF )
        {
          EngTraceLoggingWrite("EMathUNCL", 1uLL, 0LL, 0LL, 0LL);
          v10 = 0;
        }
        *(int *)((char *)a2 + v23 + 4) = *(_DWORD *)(a1 + 28) + 16 * a2[1];
        a2 += 2;
        --v7;
      }
      while ( v7 );
    }
    return v10;
  }
LABEL_8:
  if ( a4 )
  {
    v12 = (char *)((char *)a2 - (char *)a3);
    do
    {
      v13 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)((char *)v8 + (_QWORD)v12));
      v14 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)((char *)v8 + (_QWORD)v12 + 4));
      *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 * *(float *)a1;
      *(float *)v14.m128i_i32 = *(float *)v14.m128i_i32 * *(float *)(a1 + 12);
      v15 = _mm_cvtsi128_si32(v13);
      v16 = (unsigned __int8)(v15 >> 23);
      if ( v16 <= 0x9E )
      {
        v17 = v15 & 0x7FFFFF | 0x800000LL;
        v18 = v16 < 0x76 ? v17 >> (118 - (unsigned __int8)v16) : v17 << ((unsigned __int8)v16 - 118);
        v4 = (v18 + 0x80000000LL) >> 32;
        if ( v15 < 0 )
          LODWORD(v4) = -(int)v4;
      }
      v19 = _mm_cvtsi128_si32(v14);
      v20 = (unsigned __int8)(v19 >> 23);
      if ( v20 <= 0x9E )
      {
        v21 = v19 & 0x7FFFFF | 0x800000LL;
        v22 = v20 < 0x76 ? v21 >> (118 - (unsigned __int8)v20) : v21 << ((unsigned __int8)v20 - 118);
        v6 = (v22 + 0x80000000LL) >> 32;
        if ( v19 < 0 )
          LODWORD(v6) = -(int)v6;
      }
      if ( (unsigned __int64)(*(int *)(a1 + 24) + (__int64)(int)v4 + 0x80000000LL) > 0xFFFFFFFF )
      {
        EngTraceLoggingWrite("EMathUNCL", 1uLL, 0LL, 0LL, 0LL);
        v10 = 0;
      }
      *v8 = v4 + *(_DWORD *)(a1 + 24);
      if ( (unsigned __int64)(*(int *)(a1 + 28) + (__int64)(int)v6 + 0x80000000LL) > 0xFFFFFFFF )
      {
        EngTraceLoggingWrite("EMathUNCL", 1uLL, 0LL, 0LL, 0LL);
        v10 = 0;
      }
      v8[1] = v6 + *(_DWORD *)(a1 + 28);
      v8 += 2;
      --v7;
    }
    while ( v7 );
  }
  return v10;
}
