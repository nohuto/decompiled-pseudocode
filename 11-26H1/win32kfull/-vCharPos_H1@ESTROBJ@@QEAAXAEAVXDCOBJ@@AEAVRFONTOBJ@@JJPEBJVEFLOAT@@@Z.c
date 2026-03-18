/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400BFBEC
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400C06B0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400C1140 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1401C5AE4 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x14020638C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 */

struct _GLYPHDATA *__fastcall ESTROBJ::vCharPos_H1(
        unsigned int *a1,
        struct RFONTOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int *a6,
        int a7)
{
  unsigned __int16 *v7; // rsi
  struct _GLYPHPOS *v9; // r8
  struct XDCOBJ *v10; // r9
  struct ESTROBJ *v11; // rbx
  int v12; // xmm6_4
  const unsigned __int16 *v13; // r12
  __int64 v14; // rbp
  struct _GLYPHPOS *v15; // r14
  __int64 v16; // rdx
  _DWORD *v17; // r13
  int v18; // r15d
  unsigned __int16 *v19; // rax
  struct GPRUN *v20; // r13
  int v21; // eax
  __int64 v22; // r8
  struct _GLYPHDATA *v23; // rsi
  struct _GLYPHDATA *result; // rax
  __int64 v25; // rax
  int v26; // esi
  int v27; // r8d
  int v28; // r15d
  int v29; // r10d
  int v30; // ebp
  int *p_y; // r11
  __int64 v32; // r9
  int v33; // r14d
  int *v34; // r12
  __int64 v35; // rdx
  int v36; // r8d
  int v37; // eax
  int v38; // ecx
  __int64 v39; // rdx
  int v40; // ecx
  struct GPRUN *Run; // rax
  __m128i v42; // xmm0
  int v43; // r8d
  unsigned int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rsi
  int v48; // r14d
  int *v49; // r12
  int v50; // edx
  int v51; // eax
  int v52; // eax
  __m128i v53; // xmm0
  int v54; // r8d
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // [rsp+44h] [rbp-74h]
  unsigned __int16 *v59; // [rsp+48h] [rbp-70h]
  struct _GLYPHPOS *v60; // [rsp+50h] [rbp-68h]
  unsigned __int16 *v61; // [rsp+58h] [rbp-60h]
  int v66; // [rsp+D8h] [rbp+20h]

  v7 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v9 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v10 = a2;
  v11 = (struct ESTROBJ *)a1;
  v12 = a7;
  v60 = v9;
  v59 = v7;
  a1[1] |= *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x40 | 2;
  v13 = v7;
  v14 = *a1;
  v15 = v9;
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 480LL) )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bAllocateCache(a3, a2);
    if ( !(_DWORD)result )
      return result;
    v10 = a2;
    v9 = v15;
  }
  v16 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 104LL) + 1808LL) & 0x40000000) != 0 && *(_DWORD *)(v16 + 88) == 1 )
  {
    v18 = 0;
    result = (struct _GLYPHDATA *)RFONTOBJ::bGetGlyphMetrics(a3, v14, v9, v7, v10, 0, v11);
    if ( !(_DWORD)result )
      return result;
LABEL_13:
    if ( !v18 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v17 = *(_DWORD **)(v16 + 480);
  v18 = 1;
  a7 = 1;
  if ( *v17 )
  {
    v19 = &v7[v14];
    v20 = (struct GPRUN *)(v17 + 4);
    v61 = v19;
    while ( 1 )
    {
      if ( v13 >= v19 )
        goto LABEL_13;
      v21 = *v13;
      v58 = v21;
      v22 = (unsigned int)(v21 - *(_DWORD *)v20);
      if ( (unsigned int)v22 >= *((_DWORD *)v20 + 1) )
      {
        Run = RFONTOBJ::gprunFindRun(a3, v21);
        v20 = Run;
        v22 = (unsigned int)(v58 - *(_DWORD *)Run);
        if ( (unsigned int)v22 >= *((_DWORD *)Run + 1) )
        {
          result = RFONTOBJ::wpgdGetLinkMetricsPlus(a3, a2, v11, v13, v7, v14, &a7, 1);
          v23 = result;
          if ( !result )
            return result;
          v18 = a7;
          goto LABEL_9;
        }
        _mm_lfence();
        v23 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v22);
      }
      else
      {
        _mm_lfence();
        v23 = *(struct _GLYPHDATA **)(*((_QWORD *)v20 + 1) + 8 * v22);
      }
      if ( !v23 )
      {
        v47 = (unsigned int)v22;
        result = (struct _GLYPHDATA *)RFONTOBJ::bInsertMetricsPlus(
                                        a3,
                                        (struct _GLYPHDATA **)(*((_QWORD *)v20 + 1) + 8 * v22),
                                        *v13);
        if ( !(_DWORD)result )
          return result;
        v23 = *(struct _GLYPHDATA **)(*((_QWORD *)v20 + 1) + 8 * v47);
      }
LABEL_9:
      if ( !v23->gdf.pgb && v18 )
      {
        if ( *(_DWORD *)(*(_QWORD *)a3 + 88LL) )
        {
          v18 &= -((unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v23, v13 == v59) != 0);
          a7 = v18;
        }
      }
      ++v13;
      v15->hg = v23->hg;
      v19 = v61;
      v15->pgdf = &v23->gdf;
      ++v15;
      v7 = v59;
    }
  }
  for ( ; (_DWORD)v14; LODWORD(v14) = v14 - 1 )
  {
    v15->hg = *(_DWORD *)(*(_QWORD *)a3 + 456LL);
    v15->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
    ++v15;
  }
LABEL_14:
  v25 = *((_QWORD *)v11 + 8);
  *((_DWORD *)v11 + 58) |= 2u;
  *((_QWORD *)v11 + 4) = v25;
LABEL_15:
  v26 = 0;
  v27 = a4 + 8;
  v28 = (a5 + 8) >> 4;
  v29 = 0;
  v60->ptl.x = (a4 + 8) >> 4;
  v30 = 0;
  p_y = &v60->ptl.y;
  v66 = a4 + 8;
  LODWORD(v32) = 0;
  v60->ptl.y = v28;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) == 0 || (*((_DWORD *)v11 + 58) & 0x1400) != 0 )
  {
    v33 = *(_DWORD *)v11;
    v34 = a6;
    while ( 1 )
    {
      v35 = *(_QWORD *)(p_y - 3);
      v36 = v29;
      v37 = *v34++;
      v38 = v32 + *(_DWORD *)(v35 + 16);
      if ( v38 >= v26 )
        v38 = v26;
      v29 = v32 + *(_DWORD *)(v35 + 20);
      v26 = v38;
      if ( v29 <= v36 )
        v29 = v36;
      v30 += v37;
      if ( *(float *)&v12 == 16.0 )
      {
        LODWORD(v32) = 16 * v30;
      }
      else
      {
        LODWORD(v32) = 0;
        v42 = (__m128i)COERCE_UNSIGNED_INT((float)v30);
        *(float *)v42.m128i_i32 = *(float *)v42.m128i_i32 * *(float *)&v12;
        v43 = _mm_cvtsi128_si32(v42);
        v44 = (unsigned __int8)(v43 >> 23);
        if ( v44 <= 0x9E )
        {
          v45 = v43 & 0x7FFFFF | 0x800000LL;
          v46 = v44 < 0x76 ? v45 >> (118 - (unsigned __int8)v44) : v45 << ((unsigned __int8)v44 - 118);
          v32 = (v46 + 0x80000000LL) >> 32;
          if ( v43 < 0 )
            LODWORD(v32) = -(int)v32;
        }
      }
      if ( !--v33 )
        break;
      p_y += 6;
      *p_y = v28;
      *(p_y - 1) = ((int)v32 + v66) >> 4;
    }
    v11 = (struct ESTROBJ *)a1;
  }
  else
  {
    v48 = *(_DWORD *)v11;
    v49 = a6;
    while ( 1 )
    {
      v50 = v29;
      v51 = v32;
      if ( (int)v32 >= v26 )
        v51 = v26;
      v26 = v51;
      v52 = *v49;
      v29 = v32 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
      ++v49;
      if ( v29 <= v50 )
        v29 = v50;
      v30 += v52;
      if ( *(float *)&v12 == 16.0 )
      {
        LODWORD(v32) = 16 * v30;
      }
      else
      {
        LODWORD(v32) = 0;
        v53 = (__m128i)COERCE_UNSIGNED_INT((float)v30);
        *(float *)v53.m128i_i32 = *(float *)v53.m128i_i32 * *(float *)&v12;
        v54 = _mm_cvtsi128_si32(v53);
        v55 = (unsigned __int8)(v54 >> 23);
        if ( v55 <= 0x9E )
        {
          v56 = v54 & 0x7FFFFF | 0x800000LL;
          v57 = v55 < 0x76 ? v56 >> (118 - (unsigned __int8)v55) : v56 << ((unsigned __int8)v55 - 118);
          v32 = (v57 + 0x80000000LL) >> 32;
          if ( v54 < 0 )
            LODWORD(v32) = -(int)v32;
        }
        v27 = v66;
      }
      if ( !--v48 )
        break;
      p_y += 6;
      *p_y = v28;
      *(p_y - 1) = ((int)v32 + v27) >> 4;
    }
  }
  *((_DWORD *)v11 + 20) = v32;
  if ( (int)v32 <= v29 )
    LODWORD(v32) = v29;
  *((_DWORD *)v11 + 26) = v32;
  *((_DWORD *)v11 + 21) = 0;
  *((_DWORD *)v11 + 24) = v26;
  v39 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
  {
    *((_DWORD *)v11 + 25) = -*(_DWORD *)(v39 + 312);
    result = *(struct _GLYPHDATA **)a3;
    v40 = -*(_DWORD *)(*(_QWORD *)a3 + 308LL);
  }
  else
  {
    *((_DWORD *)v11 + 25) = *(_DWORD *)(v39 + 308);
    result = *(struct _GLYPHDATA **)a3;
    v40 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
  }
  *((_DWORD *)v11 + 27) = v40;
  *((_DWORD *)v11 + 58) |= 4u;
  return result;
}
