/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1400BD4C0
 * Callers:
 *     ?GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x14001709C (-GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1400BB8C0 (cjIFIMetricsToOTMW.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z @ 0x1400BCE40 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1400BEFAC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     GetAppCompatFlags @ 0x1401BCA50 (GetAppCompatFlags.c)
 */

void __fastcall vIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *this,
        struct UDCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v7; // bl
  int v8; // ecx
  char v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // edx
  int v15; // edx
  __m128i v16; // xmm0
  int v17; // r9d
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  LONG v22; // ecx
  LONG v23; // edx
  __int64 v24; // r8
  int v25; // eax
  __int16 v26; // cx
  __m128i v27; // xmm0
  int v28; // r8d
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // sf
  LONG v34; // ecx
  __int64 v35; // rax
  int v36; // edx
  __m128i v37; // xmm1
  int v38; // r8d
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  LONG v43; // ecx
  __int64 v44; // rax
  int v45; // edx
  __m128i v46; // xmm1
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  LONG v50; // ecx
  char v51; // al
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  BYTE v55; // r8
  LONG v56; // edx
  __m128i v57; // xmm0
  int v58; // r8d
  int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // eax
  LONG v64; // edx
  __m128i v65; // xmm0
  int v66; // r8d
  int v67; // ecx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // eax
  LONG v72; // edx
  __m128i v73; // xmm0
  int v74; // r8d
  int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  LONG v79; // ecx
  int v80; // eax
  __m128i v81; // xmm0
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  LONG v85; // edx
  __m128i v86; // xmm0
  int v87; // r8d
  int v88; // ecx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  LONG v92; // edx
  __m128i v93; // xmm0
  int v94; // r8d
  int v95; // ecx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  int v99; // eax
  __m128i v100; // xmm0
  int v101; // r9d
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __m128i v105; // xmm0
  int v106; // r9d
  unsigned int v107; // r8d
  __int64 v108; // rax
  __int64 v109; // rax
  __m128i v110; // xmm0
  int v111; // r8d
  unsigned int v112; // edx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  int v116; // edi
  __m128i v117; // xmm0
  __m128i v118; // xmm0
  __int64 v119; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v120; // [rsp+34h] [rbp-2Ch]
  char v121; // [rsp+36h] [rbp-2Ah]
  LONG v122; // [rsp+44h] [rbp-1Ch]
  LONG v123; // [rsp+48h] [rbp-18h]
  LONG v124; // [rsp+4Ch] [rbp-14h]
  LONG v125; // [rsp+50h] [rbp-10h]
  LONG v126; // [rsp+54h] [rbp-Ch]
  LONG v127; // [rsp+58h] [rbp-8h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v119, a4, this, a2);
  v7 = 0;
  v8 = *(_DWORD *)(*(_QWORD *)this + 316LL);
  v9 = 8;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = (v8 + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)this + 308LL) + 8) >> 4;
    v10 = (unsigned int)RFONTOBJ::lOverhang(this);
  }
  else
  {
    v85 = 0;
    v86 = (__m128i)COERCE_UNSIGNED_INT((float)v8);
    *(float *)v86.m128i_i32 = *(float *)v86.m128i_i32 * *(float *)(*(_QWORD *)this + 692LL);
    v87 = _mm_cvtsi128_si32(v86);
    v88 = (unsigned __int8)(v87 >> 23) - 118;
    if ( v88 <= 40 )
    {
      v89 = v87 & 0x7FFFFFLL | 0x800000;
      v90 = v88 < 0 ? v89 >> (118 - (unsigned __int8)(v87 >> 23)) : v89 << v88;
      v91 = (v90 + 0x80000000LL) >> 32;
      v85 = -(int)v91;
      if ( v87 >= 0 )
        v85 = v91;
    }
    a3->tmHeight = v85;
    v92 = 0;
    v93 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(*(_QWORD *)this + 308LL));
    *(float *)v93.m128i_i32 = *(float *)v93.m128i_i32 * *(float *)(*(_QWORD *)this + 692LL);
    v94 = _mm_cvtsi128_si32(v93);
    v95 = (unsigned __int8)(v94 >> 23) - 118;
    if ( v95 <= 40 )
    {
      v96 = v94 & 0x7FFFFFLL | 0x800000;
      v97 = v95 < 0 ? v96 >> (118 - (unsigned __int8)(v94 >> 23)) : v96 << v95;
      v98 = (v97 + 0x80000000LL) >> 32;
      v92 = -(int)v98;
      if ( v94 >= 0 )
        v92 = v98;
    }
    a3->tmAscent = v92;
    v99 = RFONTOBJ::lOverhang(this);
    v10 = 0LL;
    v100 = (__m128i)COERCE_UNSIGNED_INT((float)(16 * v99));
    *(float *)v100.m128i_i32 = *(float *)v100.m128i_i32 * *(float *)(*(_QWORD *)this + 688LL);
    v101 = _mm_cvtsi128_si32(v100);
    v11 = (unsigned __int8)(v101 >> 23);
    if ( (unsigned int)v11 <= 0x9E )
    {
      v102 = v101 & 0x7FFFFFLL | 0x800000;
      v103 = (unsigned int)v11 < 0x76 ? v102 >> (118 - (unsigned __int8)v11) : v102 << ((unsigned __int8)v11 - 118);
      v104 = (v103 + 0x80000000LL) >> 32;
      v10 = (unsigned int)-(int)v104;
      if ( v101 >= 0 )
        v10 = (unsigned int)v104;
    }
  }
  a3->tmOverhang = v10;
  v12 = v119;
  if ( (*(_DWORD *)(v119 + 48) & 0x3000010) != 0 )
  {
    v13 = *(_QWORD *)this;
    v14 = *(_DWORD *)(*(_QWORD *)this + 376LL);
    if ( v14 == 0x80000000 )
    {
      v15 = 0;
      v16 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v119 + 56));
      *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 * *(float *)(v13 + 216);
      v17 = _mm_cvtsi128_si32(v16);
      v18 = (unsigned __int8)(v17 >> 23);
      if ( v18 <= 0x9E )
      {
        v19 = v17 & 0x7FFFFFLL | 0x800000;
        v20 = v18 < 0x76 ? v19 >> (118 - (unsigned __int8)v18) : v19 << ((unsigned __int8)v18 - 118);
        v21 = (v20 + 0x80000000LL) >> 32;
        v15 = -(int)v21;
        if ( v17 >= 0 )
          v15 = v21;
      }
      v22 = a3->tmHeight - v15;
    }
    else
    {
      v22 = 0;
      v110 = (__m128i)COERCE_UNSIGNED_INT((float)v14);
      *(float *)v110.m128i_i32 = *(float *)v110.m128i_i32 * *(float *)(v13 + 692);
      v111 = _mm_cvtsi128_si32(v110);
      v112 = (unsigned __int8)(v111 >> 23);
      if ( v112 <= 0x9E )
      {
        v113 = v111 & 0x7FFFFFLL | 0x800000;
        v114 = v112 < 0x76 ? v113 >> (118 - (unsigned __int8)v112) : v113 << ((unsigned __int8)v112 - 118);
        v115 = (v114 + 0x80000000LL) >> 32;
        v22 = -(int)v115;
        if ( v111 >= 0 )
          v22 = v115;
      }
    }
    a3->tmInternalLeading = v22;
    v23 = 0;
    v24 = *(_QWORD *)this;
    v25 = *(_DWORD *)(*(_QWORD *)this + 372LL);
    if ( v25 == 0x80000000 )
    {
      v26 = *(_WORD *)(v12 + 64)
          + *(_WORD *)(v12 + 68)
          - *(_WORD *)(v12 + 66)
          - *(_WORD *)(v12 + 62)
          - *(_WORD *)(v12 + 60);
      if ( v26 <= 0 )
        v26 = 0;
      v27 = (__m128i)COERCE_UNSIGNED_INT((float)v26);
      *(float *)v27.m128i_i32 = *(float *)v27.m128i_i32 * *(float *)(v24 + 216);
      v28 = _mm_cvtsi128_si32(v27);
      v29 = (unsigned __int8)(v28 >> 23) - 118;
      if ( v29 > 40 )
        goto LABEL_20;
      v30 = v28 & 0x7FFFFFLL | 0x800000;
      if ( v29 < 0 )
        v31 = v30 >> (118 - (unsigned __int8)(v28 >> 23));
      else
        v31 = v30 << v29;
      v32 = (v31 + 0x80000000LL) >> 32;
      v23 = -(int)v32;
      v33 = v28 < 0;
    }
    else
    {
      v105 = (__m128i)COERCE_UNSIGNED_INT((float)v25);
      *(float *)v105.m128i_i32 = *(float *)v105.m128i_i32 * *(float *)(v24 + 692);
      v106 = _mm_cvtsi128_si32(v105);
      v107 = (unsigned __int8)(v106 >> 23);
      if ( v107 > 0x9E )
      {
LABEL_20:
        a3->tmExternalLeading = v23;
        v34 = 0;
        v35 = *(_QWORD *)this;
        v36 = *(_DWORD *)(*(_QWORD *)this + 380LL);
        if ( v36 == 0x80000000 )
        {
          v37 = (__m128i)COERCE_UNSIGNED_INT((float)v122);
          *(float *)v37.m128i_i32 = *(float *)v37.m128i_i32 * *(float *)(v35 + 212);
          v38 = _mm_cvtsi128_si32(v37);
        }
        else
        {
          v117 = (__m128i)COERCE_UNSIGNED_INT((float)v36);
          *(float *)v117.m128i_i32 = *(float *)v117.m128i_i32 * *(float *)(v35 + 688);
          v38 = _mm_cvtsi128_si32(v117);
        }
        v39 = (unsigned __int8)(v38 >> 23);
        if ( v39 <= 0x9E )
        {
          v40 = v38 & 0x7FFFFFLL | 0x800000;
          v41 = v39 < 0x76 ? v40 >> (118 - (unsigned __int8)v39) : v40 << ((unsigned __int8)v39 - 118);
          v42 = (v41 + 0x80000000LL) >> 32;
          v34 = -(int)v42;
          if ( v38 >= 0 )
            v34 = v42;
        }
        a3->tmMaxCharWidth = v34;
        v43 = 0;
        v44 = *(_QWORD *)this;
        v45 = *(_DWORD *)(*(_QWORD *)this + 384LL);
        if ( v45 == 0x80000000 )
        {
          v46 = (__m128i)COERCE_UNSIGNED_INT((float)v123);
          *(float *)v46.m128i_i32 = *(float *)v46.m128i_i32 * *(float *)(v44 + 212);
          v11 = (unsigned int)_mm_cvtsi128_si32(v46);
        }
        else
        {
          v118 = (__m128i)COERCE_UNSIGNED_INT((float)v45);
          *(float *)v118.m128i_i32 = *(float *)v118.m128i_i32 * *(float *)(v44 + 688);
          v11 = (unsigned int)_mm_cvtsi128_si32(v118);
        }
        v10 = (unsigned __int8)((int)v11 >> 23);
        if ( (unsigned int)v10 <= 0x9E )
        {
          v47 = v11 & 0x7FFFFF | 0x800000;
          v48 = (unsigned int)v10 < 0x76 ? v47 >> (118 - (unsigned __int8)v10) : v47 << ((unsigned __int8)v10 - 118);
          v49 = (v48 + 0x80000000LL) >> 32;
          v43 = -(int)v49;
          if ( (int)v11 >= 0 )
            v43 = v49;
        }
        a3->tmAveCharWidth = v43;
        goto LABEL_35;
      }
      v108 = v106 & 0x7FFFFFLL | 0x800000;
      if ( v107 < 0x76 )
        v109 = v108 >> (118 - (unsigned __int8)v107);
      else
        v109 = v108 << ((unsigned __int8)v107 - 118);
      v32 = (v109 + 0x80000000LL) >> 32;
      v23 = -(int)v32;
      v33 = v106 < 0;
    }
    if ( !v33 )
      v23 = v32;
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v122;
    a3->tmAveCharWidth = v123;
    a3->tmInternalLeading = v124;
    a3->tmExternalLeading = v125;
  }
  else
  {
    v56 = 0;
    v57 = (__m128i)COERCE_UNSIGNED_INT((float)(16 * v122));
    *(float *)v57.m128i_i32 = *(float *)v57.m128i_i32 * *(float *)(*(_QWORD *)this + 688LL);
    v58 = _mm_cvtsi128_si32(v57);
    v59 = (unsigned __int8)(v58 >> 23) - 118;
    if ( v59 <= 40 )
    {
      v60 = v58 & 0x7FFFFFLL | 0x800000;
      v61 = v59 < 0 ? v60 >> (118 - (unsigned __int8)(v58 >> 23)) : v60 << v59;
      v62 = (v61 + 0x80000000LL) >> 32;
      v56 = -(int)v62;
      if ( v58 >= 0 )
        v56 = v62;
    }
    v63 = 16 * v123;
    a3->tmMaxCharWidth = v56;
    v64 = 0;
    v65 = (__m128i)COERCE_UNSIGNED_INT((float)v63);
    *(float *)v65.m128i_i32 = *(float *)v65.m128i_i32 * *(float *)(*(_QWORD *)this + 688LL);
    v66 = _mm_cvtsi128_si32(v65);
    v67 = (unsigned __int8)(v66 >> 23) - 118;
    if ( v67 <= 40 )
    {
      v68 = v66 & 0x7FFFFFLL | 0x800000;
      v69 = v67 < 0 ? v68 >> (118 - (unsigned __int8)(v66 >> 23)) : v68 << v67;
      v70 = (v69 + 0x80000000LL) >> 32;
      v64 = -(int)v70;
      if ( v66 >= 0 )
        v64 = v70;
    }
    v71 = 16 * v124;
    a3->tmAveCharWidth = v64;
    v72 = 0;
    v73 = (__m128i)COERCE_UNSIGNED_INT((float)v71);
    *(float *)v73.m128i_i32 = *(float *)v73.m128i_i32 * *(float *)(*(_QWORD *)this + 692LL);
    v74 = _mm_cvtsi128_si32(v73);
    v75 = (unsigned __int8)(v74 >> 23) - 118;
    if ( v75 <= 40 )
    {
      v76 = v74 & 0x7FFFFFLL | 0x800000;
      v77 = v75 < 0 ? v76 >> (118 - (unsigned __int8)(v74 >> 23)) : v76 << v75;
      v78 = (v77 + 0x80000000LL) >> 32;
      v72 = -(int)v78;
      if ( v74 >= 0 )
        v72 = v78;
    }
    v79 = 0;
    v80 = 16 * v125;
    a3->tmInternalLeading = v72;
    v81 = (__m128i)COERCE_UNSIGNED_INT((float)v80);
    *(float *)v81.m128i_i32 = *(float *)v81.m128i_i32 * *(float *)(*(_QWORD *)this + 692LL);
    v11 = (unsigned int)_mm_cvtsi128_si32(v81);
    v10 = (unsigned __int8)((int)v11 >> 23);
    if ( (unsigned int)v10 <= 0x9E )
    {
      v82 = v11 & 0x7FFFFF | 0x800000;
      v83 = (unsigned int)v10 < 0x76 ? v82 >> (118 - (unsigned __int8)v10) : v82 << ((unsigned __int8)v10 - 118);
      v84 = (v83 + 0x80000000LL) >> 32;
      v79 = -(int)v84;
      if ( (int)v11 >= 0 )
        v79 = v84;
    }
    a3->tmExternalLeading = v79;
  }
LABEL_35:
  LOBYTE(v10) = -1;
  v50 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v120;
  v51 = v121 & 1;
  a3->tmDescent = v50;
  a3->tmItalic = -(v51 != 0);
  a3->tmUnderlined = *(_BYTE *)(v12 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v12 + 52) & 0x10;
  LOBYTE(v50) = *(_DWORD *)(*(_QWORD *)a2 + 1752LL) & 0x80;
  a3->tmUnderlined = -((*(_DWORD *)(*(_QWORD *)a2 + 1752LL) & 0x20) != 0);
  a3->tmStruckOut = -((_BYTE)v50 != 0);
  a3->tmFirstChar = *(_WORD *)(v12 + 112);
  a3->tmLastChar = *(_WORD *)(v12 + 114);
  a3->tmDefaultChar = *(_WORD *)(v12 + 116);
  a3->tmBreakChar = *(_WORD *)(v12 + 118);
  v52 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  a3->tmCharSet = *(_BYTE *)(v52 + 6);
  v53 = *(_QWORD *)(W32GetSessionState(v52, v10, v11) + 96);
  if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
  {
    v54 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v54 + 40) & 1) != 0
      || (*(_DWORD *)(v54 + 2168) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 1
      || *(_DWORD *)(v53 + 20364) && (int)GetAppCompatFlags(0LL) < 0 )
    {
      v9 = 0;
    }
    v55 = v9 | *(_BYTE *)(v12 + 45) & 0xF0 | (*(_DWORD *)(v12 + 48) >> 1) & 2 | ((*(_DWORD *)(v12 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v12 + 48) & 0x401000) == 0);
  }
  else
  {
    v116 = *(_DWORD *)(*(_QWORD *)this + 92LL);
    if ( (a4->flInfo & 8) != 0 && (!*(_DWORD *)(v53 + 20364) || (int)GetAppCompatFlags(0LL) >= 0) )
      v7 = 10;
    v55 = v7 | (v116 != 0 ? 8 : 0) | *(_BYTE *)(v12 + 45) & 0xF0 | (*(_DWORD *)(v12 + 48) >> 1) & 2 | ((*(_DWORD *)(v12 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v12 + 48) & 0x401000) == 0);
  }
  a3->tmPitchAndFamily = v55;
  a3->tmDigitizedAspectX = v126;
  a3->tmDigitizedAspectY = v127;
}
