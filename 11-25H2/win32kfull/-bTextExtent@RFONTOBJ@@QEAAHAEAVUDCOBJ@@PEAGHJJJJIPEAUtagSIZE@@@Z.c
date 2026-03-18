/*
 * XREFs of ?bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1400BF550
 * Callers:
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BF184 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AD5FC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1400BEFAC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1400BFDD0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1400BFEEC (-bIs1Over16@EFLOAT@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bTextExtent(
        RFONTOBJ *this,
        struct UDCOBJ *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        char a9,
        struct tagSIZE *a10)
{
  struct tagSIZE *v10; // r13
  int v11; // esi
  int v13; // ebx
  struct UDCOBJ *v14; // rax
  __int64 v15; // rbp
  int v17; // edi
  int v18; // r12d
  char *v19; // rcx
  int v20; // r15d
  int v21; // r13d
  GLYPHDEF **p_pgdf; // rcx
  __int64 v23; // r8
  int ppo_high; // edx
  int v25; // edi
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  float *v31; // r9
  int v32; // r10d
  __int64 v33; // r11
  int v35; // ecx
  LONG cx; // edx
  __m128i v37; // xmm0
  int v38; // r9d
  unsigned int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  int v43; // r9d
  unsigned int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  double v48; // xmm0_8
  __int64 v49; // rdx
  int v50; // ebx
  int v51; // ecx
  int v52; // r8d
  __int16 v53; // r8
  unsigned __int16 *v54; // r9
  __int64 v55; // rdx
  __int16 v56; // ax
  int v57; // [rsp+40h] [rbp-838h] BYREF
  int v58; // [rsp+44h] [rbp-834h] BYREF
  char *v59; // [rsp+48h] [rbp-830h]
  struct UDCOBJ *v60; // [rsp+50h] [rbp-828h]
  struct tagSIZE *v61; // [rsp+58h] [rbp-820h]
  unsigned __int16 *v62; // [rsp+60h] [rbp-818h]
  struct _GLYPHPOS v63; // [rsp+70h] [rbp-808h] BYREF

  v10 = a10;
  v11 = 0;
  v58 = 0;
  v62 = a3;
  v13 = 0;
  v14 = a2;
  v15 = a4;
  v60 = a2;
  v61 = a10;
  if ( a6 )
  {
    v47 = *(_QWORD *)this;
    v57 = 0;
    *(_QWORD *)&v48 = COERCE_UNSIGNED_INT((float)a6);
    *(float *)&v48 = *(float *)&v48 * *(float *)(v47 + 400);
    bFToL(v48, &v57, 0);
    v14 = v60;
    v11 = v57;
  }
  v17 = 0;
  v18 = v15;
  v57 = 0;
  v19 = (char *)a3;
  while ( 1 )
  {
    v59 = v19;
    if ( !v18 )
      break;
    v20 = v18;
    if ( v18 > 82 )
      v20 = 82;
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)(unsigned int)v20, &v63, v19, v14, 0, 0LL) )
      return 0LL;
    if ( v20 > 0 )
    {
      v21 = v57;
      p_pgdf = &v63.pgdf;
      v23 = (unsigned int)v20;
      do
      {
        ppo_high = HIDWORD((*p_pgdf)[1].ppo);
        v17 += ppo_high;
        if ( v11 < 0 && ppo_high + v11 <= 0 )
          ++v21;
        p_pgdf += 3;
        --v23;
      }
      while ( v23 );
      v57 = v21;
      v10 = v61;
    }
    v18 -= v20;
    v19 = &v59[2 * v20];
    v14 = v60;
  }
  if ( a6 )
  {
    v49 = *(_QWORD *)this;
    if ( (a9 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(v49 + 104) + 40LL) & 1) != 0 && (*(_DWORD *)(v49 + 724) & 4) == 0 )
    {
      v50 = v15;
      if ( a6 <= 0 )
        v50 = v15 - 1;
    }
    else
    {
      v50 = v15 - v57;
    }
    v13 = v11 * v50;
  }
  if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)this + 400LL), a7, a8, &v58) )
  {
    v51 = v58;
    v52 = *(_DWORD *)(*(_QWORD *)this + 464LL);
    if ( v11 + v52 + v58 < 0 )
      v51 = -(v52 + v11);
    if ( (a9 & 2) != 0 )
      v53 = *(_WORD *)(*(_QWORD *)this + 460LL);
    else
      v53 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 118LL);
    if ( (int)v15 > 0 )
    {
      v54 = v62;
      v55 = v15;
      do
      {
        v56 = *v54++;
        if ( v56 == v53 )
          v13 += v51;
        --v55;
      }
      while ( v55 );
    }
  }
  v25 = v13 + v17;
  if ( (a9 & 1) != 0 )
    v25 += 16 * RFONTOBJ::lOverhang(this);
  if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 688LL)) )
  {
    LODWORD(v27) = (v25 + 8) >> 4;
  }
  else
  {
    LODWORD(v27) = 0;
    v37 = (__m128i)COERCE_UNSIGNED_INT((float)v25);
    *(float *)v37.m128i_i32 = *(float *)v37.m128i_i32 * *(float *)(v26 + 688);
    v38 = _mm_cvtsi128_si32(v37);
    v39 = (unsigned __int8)(v38 >> 23);
    if ( v39 <= 0x9E )
    {
      v40 = v38 & 0x7FFFFFLL | 0x800000;
      v41 = v39 < 0x76 ? v40 >> (118 - (unsigned __int8)v39) : v40 << ((unsigned __int8)v39 - 118);
      v27 = (v41 + 0x80000000LL) >> 32;
      if ( v38 < 0 )
        LODWORD(v27) = -(int)v27;
    }
  }
  v10->cx = v27;
  if ( !(unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 692LL)) )
  {
    v29 = 0LL;
    v42 = (__m128i)COERCE_UNSIGNED_INT((float)(16 * v30));
    *(float *)v42.m128i_i32 = *(float *)v42.m128i_i32 * *v31;
    v43 = _mm_cvtsi128_si32(v42);
    v44 = (unsigned __int8)(v43 >> 23);
    if ( v44 <= 0x9E )
    {
      v45 = v33 | v32 & (unsigned int)v43;
      if ( v44 < (unsigned int)v28 )
      {
        v28 = (unsigned int)v28 - v44;
        v46 = v45 >> v28;
      }
      else
      {
        v46 = v45 << ((unsigned __int8)v44 - 118);
      }
      v29 = (v46 + 0x80000000LL) >> 32;
      if ( v43 < 0 )
        v29 = (unsigned int)-(int)v29;
    }
    v30 = (unsigned int)v29;
  }
  v10->cy = v30;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v29, v28, v30) + 96) + 20364LL) )
  {
    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == 1 )
    {
      v35 = *(_DWORD *)(*(_QWORD *)this + 724LL);
      if ( (v35 & 0x14) == 0 && (v35 & 0x200000) != 0 && (a5 == 900 || a5 == 2700) )
      {
        cx = v10->cx;
        v10->cx = v10->cy;
        v10->cy = cx;
      }
    }
  }
  return 1LL;
}
