/*
 * XREFs of ?GrepGetCharABCWidthsW@@YAHAEAVDCOBJ@@IKPEAGKPEAX@Z @ 0x1401D5AD0
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x14027FA40 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1401C06D0 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetCharABCWidthsW(
        struct DCOBJ *a1,
        int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        char a5,
        float *a6)
{
  unsigned int v7; // r15d
  int v8; // esi
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rax
  __int16 v12; // cx
  unsigned __int16 v13; // di
  float v14; // xmm6_4
  struct _GLYPHPOS *v15; // r13
  __int64 v16; // r12
  __int64 v17; // rcx
  unsigned __int16 *i; // rax
  unsigned __int16 *v19; // r9
  struct _GLYPHPOS *v20; // rbx
  int *pgdf; // r11
  __int64 v22; // r8
  __m128i v23; // xmm0
  int v24; // r9d
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  int v30; // r10d
  unsigned int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __m128i v35; // xmm0
  int v36; // r10d
  unsigned int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rax
  float *v41; // r8
  GLYPHDEF *v42; // rdx
  int v43; // [rsp+48h] [rbp-C0h]
  int v44; // [rsp+48h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  float *v48; // [rsp+68h] [rbp-A0h]
  struct XDCOBJ *v49; // [rsp+70h] [rbp-98h]
  struct _GLYPHPOS v50[32]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v51[32]; // [rsp+378h] [rbp+270h] BYREF

  LODWORD(v46) = a3;
  v49 = a1;
  v7 = a3;
  v43 = a2;
  v8 = a2;
  v47 = (__int64)a6;
  v48 = a6;
  if ( !a3 )
    return 1LL;
  v45 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v45, a1, 0, (a5 & 2) != 0 ? 4 : 2) )
    GreAcquireSemaphore<5,RFONT *>(v45);
  v9 = v45;
  if ( v45 )
  {
    if ( (*(_DWORD *)(v45 + 84) & 4) == 0 )
      goto LABEL_10;
    if ( a4 )
    {
      RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v45, a4, v7);
      v13 = v8;
      goto LABEL_11;
    }
    v10 = *(_QWORD *)(v45 + 120);
    if ( (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 4LL) & 2) != 0
      && (v11 = *(_QWORD *)(v10 + 32), v12 = *(unsigned __int8 *)(v11 + 108), *(_BYTE *)(v11 + 108)) )
    {
      v13 = v43 - v12;
      LOWORD(v43) = v43 - v12;
      v8 = v43;
    }
    else
    {
LABEL_10:
      v13 = v8;
    }
LABEL_11:
    v14 = *(float *)(v9 + 688);
    if ( (a5 & 2) != 0 || (a5 & 1) == 0 || *(_QWORD *)(*(_QWORD *)(v9 + 96) + 3072LL) )
    {
      while ( 1 )
      {
        v15 = v50;
        v16 = v7;
        if ( v7 > 0x20 )
          v16 = 32LL;
        v44 = v16;
        v17 = v16;
        if ( a4 )
        {
          v19 = a4;
          a4 = (unsigned __int16 *)((char *)a4 + v17 * 2);
        }
        else
        {
          for ( i = v51; i < &v51[v17]; v13 = v8 )
          {
            *i = v13;
            ++v8;
            ++i;
          }
          v19 = v51;
        }
        if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                              (RFONTOBJ *)&v45,
                              (struct RFONTOBJ *)(unsigned int)v16,
                              v50,
                              v19,
                              v49,
                              0,
                              0LL) )
          break;
        v20 = &v50[v16];
        if ( (a5 & 1) != 0 )
        {
          if ( v50 < v20 )
          {
            v16 = v47;
            do
            {
              pgdf = (int *)v15->pgdf;
              LODWORD(v22) = 0;
              v23 = (__m128i)COERCE_UNSIGNED_INT((float)pgdf[4]);
              *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 * v14;
              v24 = _mm_cvtsi128_si32(v23);
              v25 = (unsigned __int8)(v24 >> 23);
              if ( v25 <= 0x9E )
              {
                v26 = v24 & 0x7FFFFF | 0x800000LL;
                v27 = v25 < 0x76 ? v26 >> (118 - (unsigned __int8)v25) : v26 << ((unsigned __int8)v25 - 118);
                v22 = (v27 + 0x80000000LL) >> 32;
                if ( v24 < 0 )
                  LODWORD(v22) = -(int)v22;
              }
              LODWORD(v28) = 0;
              v29 = (__m128i)COERCE_UNSIGNED_INT((float)pgdf[5]);
              *(float *)v29.m128i_i32 = *(float *)v29.m128i_i32 * v14;
              v30 = _mm_cvtsi128_si32(v29);
              v31 = (unsigned __int8)(v30 >> 23);
              if ( v31 <= 0x9E )
              {
                v32 = v30 & 0x7FFFFF | 0x800000LL;
                v33 = v31 < 0x76 ? v32 >> (118 - (unsigned __int8)v31) : v32 << ((unsigned __int8)v31 - 118);
                v28 = (v33 + 0x80000000LL) >> 32;
                if ( v30 < 0 )
                  LODWORD(v28) = -(int)v28;
              }
              LODWORD(v34) = 0;
              v35 = (__m128i)COERCE_UNSIGNED_INT((float)pgdf[3]);
              *(float *)v35.m128i_i32 = *(float *)v35.m128i_i32 * v14;
              v36 = _mm_cvtsi128_si32(v35);
              v37 = (unsigned __int8)(v36 >> 23);
              if ( v37 <= 0x9E )
              {
                v38 = v36 & 0x7FFFFF | 0x800000LL;
                if ( v37 < 0x76 )
                  v39 = v38 >> (118 - (unsigned __int8)v37);
                else
                  v39 = v38 << ((unsigned __int8)v37 - 118);
                v34 = (v39 + 0x80000000LL) >> 32;
                if ( v36 < 0 )
                  LODWORD(v34) = -(int)v34;
              }
              *(_DWORD *)v16 = v22;
              *(_DWORD *)(v16 + 8) = v34 - v28;
              ++v15;
              *(_DWORD *)(v16 + 4) = v28 - v22;
              v16 += 12LL;
            }
            while ( v15 < v20 );
            v7 = v46;
            v47 = v16;
            LODWORD(v16) = v44;
          }
        }
        else if ( v50 < v20 )
        {
          v41 = v48;
          do
          {
            v42 = v15->pgdf;
            ++v15;
            *v41 = (float)SLODWORD(v42[2].pgb) * v14;
            v41[1] = (float)(HIDWORD(v42[2].ppo) - LODWORD(v42[2].pgb)) * v14;
            v41[2] = (float)(HIDWORD(v42[1].ppo) - HIDWORD(v42[2].ppo)) * v14;
            v41 += 3;
          }
          while ( v15 < v20 );
          v48 = v41;
        }
        v7 -= v16;
        LODWORD(v46) = v7;
        if ( !v7 )
        {
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
          return 1LL;
        }
      }
    }
    goto LABEL_43;
  }
  EngSetLastError(6u);
LABEL_43:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
  return 0LL;
}
