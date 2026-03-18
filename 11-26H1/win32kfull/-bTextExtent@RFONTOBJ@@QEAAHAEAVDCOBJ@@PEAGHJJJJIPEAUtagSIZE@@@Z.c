/*
 * XREFs of ?bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1401C4E90
 * Callers:
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1401C522C (-bIs1Over16@EFLOAT@@QEBAHXZ.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1401C57AC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1401DD484 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bTextExtent(
        RFONTOBJ *this,
        struct DCOBJ *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        char a9,
        struct tagSIZE *a10)
{
  int v10; // r15d
  unsigned __int16 *v11; // r11
  int v12; // ebx
  __int64 v13; // r13
  int v15; // esi
  int v16; // r12d
  unsigned __int16 *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // r9d
  int v20; // r9d
  GLYPHDEF **p_pgdf; // rcx
  __int64 v22; // r10
  int ppo_high; // r8d
  float v24; // xmm1_4
  int v25; // esi
  float *v26; // rcx
  __int64 v27; // rdx
  float *v28; // rcx
  __int64 v29; // r8
  int v31; // ecx
  LONG cx; // edx
  __int64 v33; // rax
  double v34; // xmm0_8
  int v35; // ebx
  double v36; // xmm0_8
  __int64 v37; // r11
  int v38; // edx
  int v39; // ecx
  __int16 v40; // r8
  unsigned __int16 *v41; // r9
  __int64 v42; // rdx
  __int16 v43; // ax
  double v44; // xmm0_8
  double v45; // xmm0_8
  unsigned int v46; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v48; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v49; // [rsp+50h] [rbp-B0h]
  struct DCOBJ *v50; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v51; // [rsp+60h] [rbp-A0h]
  struct _GLYPHPOS v52; // [rsp+70h] [rbp-90h] BYREF

  v10 = 0;
  v11 = a3;
  v51 = a3;
  v12 = 0;
  v13 = a4;
  v50 = a2;
  v46 = 0;
  if ( a6 )
  {
    v33 = *(_QWORD *)this;
    *(_QWORD *)&v34 = COERCE_UNSIGNED_INT((float)a6);
    v47 = 0;
    *(float *)&v34 = *(float *)&v34 * *(float *)(v33 + 400);
    bFToL(v34, &v47, 0);
    a2 = v50;
    v10 = v47;
  }
  v15 = 0;
  v47 = 0;
  v16 = v13;
  v17 = v11;
  while ( 1 )
  {
    v49 = v17;
    if ( !v16 )
      break;
    v18 = v16;
    if ( v16 > 82 )
      v18 = 82;
    v48 = v18;
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)v18, &v52, v17, a2, 0, 0LL) )
      return 0LL;
    v19 = v48;
    if ( (int)v48 > 0 )
    {
      v20 = v47;
      p_pgdf = &v52.pgdf;
      v22 = (int)v48;
      do
      {
        ppo_high = HIDWORD((*p_pgdf)[1].ppo);
        v15 += ppo_high;
        if ( v10 < 0 && ppo_high + v10 <= 0 )
          ++v20;
        p_pgdf += 3;
        --v22;
      }
      while ( v22 );
      v47 = v20;
      v19 = v48;
    }
    v16 -= v19;
    v17 = &v49[v48];
    a2 = v50;
  }
  if ( a6 )
  {
    if ( (a9 & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 40LL) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)this + 724LL) & 4) == 0 )
    {
      v35 = v13;
      if ( a6 <= 0 )
        v35 = v13 - 1;
    }
    else
    {
      v35 = v13 - v47;
    }
    v12 = v10 * v35;
  }
  v24 = *(float *)(*(_QWORD *)this + 400LL);
  if ( a7 )
  {
    *(_QWORD *)&v36 = COERCE_UNSIGNED_INT((float)a7);
    v48 = 0;
    *(float *)&v36 = *(float *)&v36 * v24;
    bFToL(v36, (int *)&v48, 0);
    if ( !(unsigned int)SafeDivide<long,long,long>(v48, a8, &v46) )
    {
      v38 = *(_DWORD *)(v37 + 464);
      v39 = v46;
      if ( (int)(v10 + v38 + v46) < 0 )
        v39 = -(v38 + v10);
      if ( (a9 & 2) != 0 )
        v40 = *(_WORD *)(v37 + 460);
      else
        v40 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 120) + 32LL) + 118LL);
      if ( (int)v13 > 0 )
      {
        v41 = v51;
        v42 = v13;
        do
        {
          v43 = *v41++;
          if ( v43 == v40 )
            v12 += v39;
          --v42;
        }
        while ( v42 );
      }
    }
  }
  v25 = v12 + v15;
  if ( (a9 & 1) != 0 )
    v25 += 16 * RFONTOBJ::lOverhang(this);
  if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 688LL)) )
  {
    a10->cx = (v25 + 8) >> 4;
  }
  else
  {
    *(_QWORD *)&v44 = COERCE_UNSIGNED_INT((float)v25);
    v46 = 0;
    *(float *)&v44 = *(float *)&v44 * *v26;
    bFToL(v44, (int *)&v46, 0);
    a10->cx = v46;
  }
  if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 692LL)) )
  {
    a10->cy = v27;
  }
  else
  {
    v46 = 0;
    *(_QWORD *)&v45 = COERCE_UNSIGNED_INT((float)(16 * v27));
    *(float *)&v45 = *(float *)&v45 * *v28;
    bFToL(v45, (int *)&v46, 0);
    v29 = v46;
    a10->cy = v46;
  }
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v28, v27, v29) + 96) + 20340LL) )
  {
    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == 1 )
    {
      v31 = *(_DWORD *)(*(_QWORD *)this + 724LL);
      if ( (v31 & 0x14) == 0 && (v31 & 0x200000) != 0 && (a5 == 900 || a5 == 2700) )
      {
        cx = a10->cx;
        a10->cx = a10->cy;
        a10->cy = cx;
      }
    }
  }
  return 1LL;
}
