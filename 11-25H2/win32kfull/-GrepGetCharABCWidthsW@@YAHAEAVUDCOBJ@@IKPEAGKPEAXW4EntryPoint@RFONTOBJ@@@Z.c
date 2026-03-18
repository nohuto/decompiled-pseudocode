/*
 * XREFs of ?GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AE6AC
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x140185970 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14001681C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400A8F1C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400AD350 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400ADF94 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1400AE350 (xInsertMetricsRFONTOBJ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetCharABCWidthsW(struct UDCOBJ *a1, int a2, unsigned int a3, _WORD *a4, char a5, _DWORD *a6)
{
  int v6; // ebx
  __int64 v7; // rsi
  _WORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int16 v13; // r9
  float v14; // xmm6_4
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  unsigned __int64 v17; // r14
  unsigned __int16 *v18; // rcx
  unsigned __int16 *v19; // r13
  _QWORD *v20; // rdi
  char *v21; // r15
  int v22; // esi
  _DWORD *v23; // rbx
  unsigned __int16 *v24; // rcx
  struct GPRUN *v25; // rbx
  int v26; // r14d
  __int64 v27; // r8
  struct _GLYPHDATA *LinkMetricsPlus; // r9
  __int64 v29; // rsi
  _QWORD *v30; // r12
  _QWORD *v31; // rdi
  _QWORD *v32; // rsi
  _DWORD *v33; // r15
  int *v34; // rbx
  __int64 v35; // r9
  __m128i v36; // xmm0
  int v37; // r10d
  unsigned int v38; // r8d
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  __m128i v42; // xmm0
  int v43; // r11d
  unsigned int v44; // r10d
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __m128i v48; // xmm0
  int v49; // r11d
  unsigned int v50; // r10d
  __int64 v51; // rdx
  __int64 v52; // rdx
  bool v53; // zf
  struct GPRUN *Run; // rax
  _QWORD *v56; // r9
  float *v57; // r15
  _DWORD *v58; // r8
  __int16 v59; // r9
  _WORD *v60; // r8
  unsigned __int64 v61; // rdx
  __int64 v62; // [rsp+48h] [rbp-C0h] BYREF
  int v63; // [rsp+50h] [rbp-B8h] BYREF
  int v64; // [rsp+58h] [rbp-B0h]
  int v65; // [rsp+5Ch] [rbp-ACh]
  unsigned int v66; // [rsp+60h] [rbp-A8h]
  _DWORD v67[2]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD *v68; // [rsp+70h] [rbp-98h]
  _QWORD *v69; // [rsp+78h] [rbp-90h]
  float *v70; // [rsp+80h] [rbp-88h]
  _WORD *v71; // [rsp+88h] [rbp-80h]
  struct UDCOBJ *v72; // [rsp+90h] [rbp-78h]
  unsigned __int16 *v73; // [rsp+98h] [rbp-70h]
  _QWORD v74[96]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int16 v75[32]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v6 = a2;
  v7 = a3;
  v65 = a2;
  v8 = a4;
  v71 = a4;
  v66 = a3;
  v72 = a1;
  v63 = a2;
  v68 = a6;
  v70 = (float *)a6;
  if ( a3 )
  {
    v9 = *(_QWORD *)a1;
    v67[0] = 16;
    v67[1] = *(unsigned __int16 *)(v9 + 12);
    v62 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit(
                         (RFONTOBJ *)&v62,
                         a1,
                         0,
                         (a5 & 2) != 0 ? 4 : 2,
                         (const struct RFONTOBJ::Tag *)v67) )
      GreAcquireSemaphore<5,RFONT *>(v62);
    v10 = v62;
    if ( !v62 )
    {
      EngSetLastError(6u);
LABEL_55:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
      return 0LL;
    }
    if ( (*(_DWORD *)(v62 + 84) & 4) != 0 )
    {
      v11 = *(_QWORD *)(v62 + 120);
      v12 = *(_QWORD *)(v11 + 32);
      if ( v8 )
      {
        v59 = *(unsigned __int8 *)(v12 + 108);
        v60 = v8;
        if ( (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 4LL) & 2) != 0 )
        {
          if ( *(_BYTE *)(v12 + 108) )
          {
            v61 = (unsigned __int64)&v8[v7];
            if ( (unsigned __int64)v8 < v61 )
            {
              do
                *v60++ -= v59;
              while ( (unsigned __int64)v60 < v61 );
              v13 = v6;
              v64 = (unsigned __int16)v6;
LABEL_10:
              v14 = *(float *)(v10 + 688);
              if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)(v10 + 96) + 3072LL) )
              {
                while ( 1 )
                {
                  v15 = 32LL;
                  v69 = v74;
                  v16 = (unsigned int)v7;
                  if ( (unsigned int)v7 > 0x20 )
                    v16 = 32LL;
                  v67[0] = v16;
                  v17 = v16;
                  if ( v8 )
                  {
                    v19 = v8;
                    v71 = &v8[v17];
                  }
                  else
                  {
                    v15 = (unsigned __int64)&v75[v17];
                    v18 = v75;
                    if ( v75 < &v75[v17] )
                    {
                      while ( 1 )
                      {
                        *v18 = v13;
                        ++v6;
                        if ( (unsigned __int64)++v18 >= v15 )
                          break;
                        v13 = v6;
                      }
                      v65 = v6;
                      LOWORD(v64) = v6;
                    }
                    v19 = v75;
                  }
                  v20 = v74;
                  v21 = (char *)v19;
                  v22 = v16;
                  if ( !*(_QWORD *)(v10 + 480) )
                  {
                    if ( !(unsigned int)RFONTOBJ::bAllocateCache((RFONTOBJ *)&v62, (struct RFONTOBJ *)v15) )
                      goto LABEL_55;
                    v10 = v62;
                  }
                  v23 = *(_DWORD **)(v10 + 480);
                  if ( *v23 )
                    break;
                  if ( (_DWORD)v16 )
                  {
                    do
                    {
                      *(_DWORD *)v20 = *(_DWORD *)(v10 + 456);
                      v20[1] = RFONTOBJ::pgdDefault((RFONTOBJ *)&v62, (struct RFONTOBJ *)v15);
                      v20 += 3;
                      v10 = v62;
                      --v22;
                    }
                    while ( v22 );
                  }
LABEL_30:
                  v31 = &v74[3 * (unsigned int)v16];
                  if ( (a5 & 1) != 0 )
                  {
                    if ( v74 < v31 )
                    {
                      v32 = v69;
                      v33 = v68;
                      do
                      {
                        v34 = (int *)v32[1];
                        LODWORD(v35) = 0;
                        v36 = (__m128i)COERCE_UNSIGNED_INT((float)v34[4]);
                        *(float *)v36.m128i_i32 = *(float *)v36.m128i_i32 * v14;
                        v37 = _mm_cvtsi128_si32(v36);
                        v38 = (unsigned __int8)(v37 >> 23);
                        if ( v38 <= 0x9E )
                        {
                          v39 = v37 & 0x7FFFFF | 0x800000LL;
                          v40 = v38 < 0x76 ? v39 >> (118 - (unsigned __int8)v38) : v39 << ((unsigned __int8)v38 - 118);
                          v35 = (v40 + 0x80000000LL) >> 32;
                          if ( v37 < 0 )
                            LODWORD(v35) = -(int)v35;
                        }
                        LODWORD(v41) = 0;
                        v42 = (__m128i)COERCE_UNSIGNED_INT((float)v34[5]);
                        *(float *)v42.m128i_i32 = *(float *)v42.m128i_i32 * v14;
                        v43 = _mm_cvtsi128_si32(v42);
                        v44 = (unsigned __int8)(v43 >> 23);
                        if ( v44 <= 0x9E )
                        {
                          v45 = v43 & 0x7FFFFF | 0x800000LL;
                          v46 = v44 < 0x76 ? v45 >> (118 - (unsigned __int8)v44) : v45 << ((unsigned __int8)v44 - 118);
                          v41 = (v46 + 0x80000000LL) >> 32;
                          if ( v43 < 0 )
                            LODWORD(v41) = -(int)v41;
                        }
                        LODWORD(v47) = 0;
                        v48 = (__m128i)COERCE_UNSIGNED_INT((float)v34[3]);
                        *(float *)v48.m128i_i32 = *(float *)v48.m128i_i32 * v14;
                        v49 = _mm_cvtsi128_si32(v48);
                        v50 = (unsigned __int8)(v49 >> 23);
                        if ( v50 <= 0x9E )
                        {
                          v51 = v49 & 0x7FFFFF | 0x800000LL;
                          v52 = v50 < 0x76 ? v51 >> (118 - (unsigned __int8)v50) : v51 << ((unsigned __int8)v50 - 118);
                          v47 = (v52 + 0x80000000LL) >> 32;
                          if ( v49 < 0 )
                            LODWORD(v47) = -(int)v47;
                        }
                        *v33 = v35;
                        v33[2] = v47 - v41;
                        v32 += 3;
                        v33[1] = v41 - v35;
                        v33 += 3;
                      }
                      while ( v32 < v31 );
                      v10 = v62;
                      v68 = v33;
                    }
                  }
                  else if ( v74 < v31 )
                  {
                    v56 = v69;
                    v57 = v70;
                    do
                    {
                      v58 = (_DWORD *)v56[1];
                      v56 += 3;
                      *v57 = (float)(int)v58[4] * v14;
                      v57[1] = (float)(v58[5] - v58[4]) * v14;
                      v57[2] = (float)(v58[3] - v58[5]) * v14;
                      v57 += 3;
                    }
                    while ( v56 < v31 );
                    v70 = v57;
                  }
                  v53 = v66 == (_DWORD)v16;
                  LODWORD(v7) = v66 - v16;
                  v66 -= v16;
                  if ( v53 )
                  {
                    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
                    return 1LL;
                  }
                  v13 = v64;
                  v6 = v65;
                  v8 = v71;
                }
                v24 = &v19[v17];
                v25 = (struct GPRUN *)(v23 + 4);
                v73 = &v19[v17];
                while ( 1 )
                {
                  if ( v21 >= (char *)v24 )
                    goto LABEL_30;
                  v26 = *(unsigned __int16 *)v21;
                  v27 = (unsigned int)(v26 - *(_DWORD *)v25);
                  if ( (unsigned int)v27 >= *((_DWORD *)v25 + 1) )
                  {
                    Run = RFONTOBJ::gprunFindRun((RFONTOBJ *)&v62, v26);
                    v25 = Run;
                    v27 = (unsigned int)(v26 - *(_DWORD *)Run);
                    if ( (unsigned int)v27 >= *((_DWORD *)Run + 1) )
                    {
                      v63 = 0;
                      LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(
                                          (RFONTOBJ *)&v62,
                                          v72,
                                          0LL,
                                          v21,
                                          (char *)v19,
                                          v16,
                                          &v63,
                                          0);
                      if ( !LinkMetricsPlus )
                        goto LABEL_55;
                      goto LABEL_26;
                    }
                    _mm_lfence();
                    LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v27);
                  }
                  else
                  {
                    _mm_lfence();
                    LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v25 + 1) + 8 * v27);
                  }
                  if ( !LinkMetricsPlus )
                  {
                    v29 = (unsigned int)v27;
                    v30 = (_QWORD *)(*((_QWORD *)v25 + 1) + 8 * v27);
                    if ( !*(_QWORD *)(v62 + 480)
                      && !(unsigned int)RFONTOBJ::bAllocateCache((RFONTOBJ *)&v62, (struct RFONTOBJ *)v15)
                      || !(unsigned int)xInsertMetricsRFONTOBJ((RFONTOBJ *)&v62, v30, v26) )
                    {
                      goto LABEL_55;
                    }
                    LODWORD(v16) = v67[0];
                    LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v25 + 1) + 8 * v29);
                  }
LABEL_26:
                  v21 += 2;
                  v24 = v73;
                  *(_DWORD *)v20 = LinkMetricsPlus->hg;
                  v10 = v62;
                  v20[1] = LinkMetricsPlus;
                  v20 += 3;
                }
              }
              goto LABEL_55;
            }
          }
        }
      }
      else if ( (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 4LL) & 2) != 0 && *(_BYTE *)(v12 + 108) )
      {
        LOWORD(v63) = v63 - *(unsigned __int8 *)(v12 + 108);
        v13 = v63;
        v6 = v63;
        v65 = v63;
        v64 = (unsigned __int16)v63;
        goto LABEL_10;
      }
    }
    v13 = v6;
    v64 = v6;
    goto LABEL_10;
  }
  return 1LL;
}
