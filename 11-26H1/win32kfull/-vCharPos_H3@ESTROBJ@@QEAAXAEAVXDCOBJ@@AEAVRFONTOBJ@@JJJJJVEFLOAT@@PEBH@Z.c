/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400BF628
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z @ 0x140211FC4 (-vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400C06B0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400C1140 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x14010C710 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1401C5AE4 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x14020638C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 */

struct _GLYPHDATA *__fastcall ESTROBJ::vCharPos_H3(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int16 *a10)
{
  RFONTOBJ *v10; // rsi
  unsigned int v12; // ecx
  struct _GLYPHPOS *v15; // rbp
  int v16; // r8d
  unsigned __int16 *v17; // rdx
  int v18; // eax
  int v19; // edi
  unsigned __int16 *v20; // r14
  __int64 v21; // rax
  unsigned __int16 *v22; // r9
  __int64 v23; // r12
  struct _GLYPHPOS *v24; // r15
  __int64 v25; // r8
  _DWORD *v26; // r13
  int v27; // r14d
  unsigned __int16 *v28; // rax
  struct GPRUN *v29; // r13
  int v30; // ebp
  __int64 v31; // r8
  struct _GLYPHDATA *v32; // rbp
  __int64 v33; // rax
  int v34; // r10d
  POINTL *p_ptl; // r9
  int v36; // esi
  signed int v37; // r11d
  _DWORD *v38; // rdx
  int v39; // r8d
  int v40; // ecx
  int v41; // eax
  unsigned int v42; // ecx
  struct GPRUN *Run; // rax
  bool v44; // cc
  unsigned int v45; // eax
  __int64 v46; // rdx
  struct _GLYPHDATA *result; // rax
  int v48; // ecx
  __int64 v49; // rbp
  int v50; // edx
  int v51; // r9d
  LONG *p_y; // r8
  int v53; // r10d
  int v54; // edx
  __m128i v55; // xmm1
  int v56; // r10d
  __int64 v57; // rcx
  __m128i v58; // xmm0
  int v59; // r8d
  unsigned int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rax
  _DWORD *v63; // rdi
  unsigned int v64; // r8d
  int v65; // edx
  int v66; // eax
  unsigned __int16 *v67; // [rsp+48h] [rbp-60h]
  unsigned __int16 *v68; // [rsp+50h] [rbp-58h]
  struct _GLYPHPOS *v69; // [rsp+58h] [rbp-50h]
  int v70; // [rsp+B0h] [rbp+8h]
  int v73; // [rsp+C8h] [rbp+20h]
  int v74; // [rsp+D0h] [rbp+28h]
  unsigned int v75; // [rsp+D8h] [rbp+30h]

  v10 = a3;
  v12 = a1[1];
  v70 = 0;
  if ( a7 | a6 )
  {
    v55 = (__m128i)a9;
    v56 = v12 | *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x40 | 2;
    a1[1] = v56;
    if ( a6 )
    {
      LODWORD(v57) = 0;
      v58 = (__m128i)COERCE_UNSIGNED_INT((float)a6);
      *(float *)v58.m128i_i32 = *(float *)v58.m128i_i32 * *(float *)v55.m128i_i32;
      v59 = _mm_cvtsi128_si32(v58);
      v60 = (unsigned __int8)(v59 >> 23);
      if ( v60 <= 0x9E )
      {
        v61 = v59 & 0x7FFFFF | 0x800000LL;
        v62 = v60 < 0x76 ? v61 >> (118 - (unsigned __int8)v60) : v61 << ((unsigned __int8)v60 - 118);
        v57 = (v62 + 0x80000000LL) >> 32;
        if ( v59 < 0 )
          LODWORD(v57) = -(int)v57;
      }
      a1[29] = v57;
      if ( (int)v57 > 0 )
        a1[1] = v56 | 0x800;
    }
    v63 = a1 + 30;
    if ( (unsigned __int8)bCalcBreakExtra((unsigned int)_mm_cvtsi128_si32(v55), (unsigned int)a7, a8, a1 + 30) )
    {
      v64 = a1[29];
      v65 = *(_DWORD *)(*(_QWORD *)v10 + 464LL);
      if ( (int)(v65 + v64 + *v63) < 0 )
        *v63 = -(v65 + v64);
      v66 = *(_DWORD *)(*(_QWORD *)v10 + 460LL);
      a1[1] |= 0x1000u;
      v70 = v66;
    }
  }
  else
  {
    a1[1] = v12 | *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x71 | 2;
  }
  v15 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v16 = a4 + 8;
  v17 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v18 = a4 + 8;
  v19 = 0;
  v20 = a10;
  v69 = v15;
  v67 = v17;
  v73 = v16;
  v74 = (a5 + 8) >> 4;
  v15->ptl.x = v18 >> 4;
  v15->ptl.y = v74;
  if ( v20 )
  {
    v27 = *(_DWORD *)v20;
    goto LABEL_15;
  }
  v21 = *(_QWORD *)v10;
  v22 = v17;
  v23 = *a1;
  v24 = v15;
  a10 = v17;
  if ( !*(_QWORD *)(v21 + 480) )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bAllocateCache(v10, (struct RFONTOBJ *)v17);
    if ( !(_DWORD)result )
      return result;
    v22 = a10;
    v17 = a10;
  }
  v25 = *(_QWORD *)v10;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 104LL) + 1808LL) & 0x40000000) != 0 && *(_DWORD *)(v25 + 88) == 1 )
  {
    v27 = 0;
    result = (struct _GLYPHDATA *)RFONTOBJ::bGetGlyphMetrics(v10, v23, v15, v17, a2, 0, (struct ESTROBJ *)a1);
    if ( !(_DWORD)result )
      return result;
LABEL_15:
    if ( !v27 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v26 = *(_DWORD **)(v25 + 480);
  v27 = 1;
  a7 = 1;
  if ( *v26 )
  {
    v28 = &v17[v23];
    v29 = (struct GPRUN *)(v26 + 4);
    v68 = v28;
    while ( 1 )
    {
      if ( v22 >= v28 )
      {
        v15 = v69;
        goto LABEL_15;
      }
      v30 = *v22;
      v31 = (unsigned int)(v30 - *(_DWORD *)v29);
      if ( (unsigned int)v31 >= *((_DWORD *)v29 + 1) )
      {
        Run = RFONTOBJ::gprunFindRun(v10, v30);
        v22 = a10;
        v29 = Run;
        v31 = (unsigned int)(v30 - *(_DWORD *)Run);
        if ( (unsigned int)v31 >= *((_DWORD *)Run + 1) )
        {
          result = RFONTOBJ::wpgdGetLinkMetricsPlus(v10, a2, (struct ESTROBJ *)a1, a10, v67, v23, &a7, 1);
          v32 = result;
          if ( !result )
            return result;
          v27 = a7;
          goto LABEL_12;
        }
        _mm_lfence();
        v32 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v31);
      }
      else
      {
        _mm_lfence();
        v32 = *(struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v31);
      }
      if ( !v32 )
      {
        v49 = (unsigned int)v31;
        result = (struct _GLYPHDATA *)RFONTOBJ::bInsertMetricsPlus(
                                        v10,
                                        (struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v31),
                                        *v22);
        if ( !(_DWORD)result )
          return result;
        v32 = *(struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v49);
      }
LABEL_12:
      if ( !v32->gdf.pgb && v27 )
      {
        if ( *(_DWORD *)(*(_QWORD *)v10 + 88LL) )
        {
          v27 &= -((unsigned int)RFONTOBJ::bInsertGlyphbits(v10, v32, a10 == v67) != 0);
          a7 = v27;
        }
      }
      v22 = a10 + 1;
      v24->hg = v32->hg;
      v28 = v68;
      v24->pgdf = &v32->gdf;
      ++v24;
      a10 = v22;
    }
  }
  for ( ; (_DWORD)v23; LODWORD(v23) = v23 - 1 )
  {
    v24->hg = *(_DWORD *)(*(_QWORD *)v10 + 456LL);
    v24->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(v10);
    ++v24;
  }
LABEL_16:
  v33 = *((_QWORD *)a1 + 8);
  a1[58] |= 2u;
  *((_QWORD *)a1 + 4) = v33;
LABEL_17:
  if ( (a1[1] & 0x30) != 0x30 || (v50 = a1[29], v50 < 0) || a1[30] )
  {
    v34 = *a1;
    p_ptl = &v15->ptl;
    v36 = 0;
    v37 = 0;
    while ( 1 )
    {
      v38 = (_DWORD *)p_ptl[-1];
      v39 = v36;
      v40 = v19 + v38[4];
      v41 = v38[3];
      if ( v40 >= v37 )
        v40 = v37;
      v36 = v19 + v38[5];
      v37 = v40;
      v42 = a1[29];
      if ( v36 <= v39 )
        v36 = v39;
      v19 += v41;
      if ( v42 && (int)(v42 + v41) > 0 )
        v19 += v42;
      if ( p_ptl[-2].x == v70 )
        v19 += a1[30];
      if ( !--v34 )
        break;
      p_ptl += 3;
      p_ptl->y = v74;
      p_ptl->x = (v19 + v73) >> 4;
    }
    v75 = v36;
    v44 = v19 <= v36;
    v10 = a3;
    v45 = v19;
    if ( v44 )
      v45 = v75;
  }
  else
  {
    v19 = v50 + HIDWORD(v15->pgdf[1].ppo);
    v51 = *a1 - 1;
    if ( *a1 != 1 )
    {
      p_y = &v15->ptl.y;
      v53 = v19 + v73;
      do
      {
        p_y += 6;
        *(p_y - 1) = v53 >> 4;
        *p_y = v74;
        v54 = a1[29] + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
        v19 += v54;
        v53 += v54;
        --v51;
      }
      while ( v51 );
    }
    v37 = 0;
    v45 = v19;
  }
  a1[26] = v45;
  a1[28] = v19;
  a1[20] = v19;
  a1[21] = 0;
  a1[24] = v37;
  v46 = *(_QWORD *)v10;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
  {
    a1[25] = -*(_DWORD *)(v46 + 312);
    result = *(struct _GLYPHDATA **)v10;
    v48 = -*(_DWORD *)(*(_QWORD *)v10 + 308LL);
  }
  else
  {
    a1[25] = *(_DWORD *)(v46 + 308);
    result = *(struct _GLYPHDATA **)v10;
    v48 = *(_DWORD *)(*(_QWORD *)v10 + 312LL);
  }
  a1[27] = v48;
  a1[58] |= 4u;
  return result;
}
