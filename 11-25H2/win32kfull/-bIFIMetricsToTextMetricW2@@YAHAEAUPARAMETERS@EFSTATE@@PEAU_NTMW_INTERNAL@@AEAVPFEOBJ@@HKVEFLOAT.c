/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAUPARAMETERS@EFSTATE@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x140103988
 * Callers:
 *     cjCopyFontDataW @ 0x140102FD8 (cjCopyFontDataW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIFIMetricsToTextMetricW2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8)
{
  __int64 v12; // rdi
  int v13; // r9d
  __int64 v14; // rdx
  __m128i v15; // xmm0
  int v16; // r9d
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rax
  float v20; // xmm1_4
  float v21; // xmm1_4
  __m128i v22; // xmm0
  int v23; // r9d
  unsigned int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm0
  int v28; // r9d
  unsigned int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rax
  __int16 v32; // cx
  __m128i v33; // xmm0
  int v34; // r9d
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __m128i v39; // xmm0
  int v40; // r8d
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm0
  int v45; // r8d
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  int v50; // ecx
  unsigned int v51; // edx
  char v52; // al
  __int16 v53; // ax
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rax
  float v59; // xmm1_4
  __int64 v60; // rcx
  __m128i v61; // xmm0
  int v62; // r8d
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rax
  __m128i v66; // xmm0
  int v67; // r8d
  unsigned int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rax
  __m128i v71; // xmm0
  int v72; // r8d
  unsigned int v73; // edx
  __int64 v74; // rax
  __int64 v75; // rax
  __m128i v76; // xmm0
  int v77; // r8d
  unsigned int v78; // edx
  __int64 v79; // rax
  __int64 v80; // rax
  __m128i v81; // xmm0
  int v82; // r8d
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rax
  __m128i v86; // xmm0
  int v87; // r8d
  unsigned int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rax
  __int16 v91; // cx
  _DWORD v92[2]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v93[2]; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v94[2]; // [rsp+30h] [rbp-10h] BYREF
  float v95; // [rsp+88h] [rbp+48h] BYREF
  char v96; // [rsp+90h] [rbp+50h] BYREF

  v12 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v13 = *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62);
  if ( v13 == 0 || *(_WORD *)(v12 + 56) == 0 )
    return 0LL;
  if ( (*(_DWORD *)(v12 + 48) & 0x3000010) != 0 )
  {
    LODWORD(v14) = 0;
    v15 = (__m128i)COERCE_UNSIGNED_INT((float)v13);
    *(float *)v15.m128i_i32 = *(float *)v15.m128i_i32 * a6;
    v16 = _mm_cvtsi128_si32(v15);
    v17 = (unsigned __int8)(v16 >> 23);
    if ( v17 <= 0x9E )
    {
      v18 = v16 & 0x7FFFFFLL | 0x800000;
      v19 = v17 < 0x76 ? v18 >> (118 - (unsigned __int8)v17) : v18 << ((unsigned __int8)v17 - 118);
      v14 = (v19 + 0x80000000LL) >> 32;
      if ( v16 < 0 )
        LODWORD(v14) = -(int)v14;
    }
    *(_DWORD *)(a2 + 8) = v14;
    v20 = (float)(int)v14;
    LODWORD(v14) = 0;
    v21 = v20 / (float)(*(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62));
    v22 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v12 + 60));
    *(float *)v22.m128i_i32 = *(float *)v22.m128i_i32 * v21;
    v23 = _mm_cvtsi128_si32(v22);
    v24 = (unsigned __int8)(v23 >> 23);
    if ( v24 <= 0x9E )
    {
      v25 = v23 & 0x7FFFFFLL | 0x800000;
      v26 = v24 < 0x76 ? v25 >> (118 - (unsigned __int8)v24) : v25 << ((unsigned __int8)v24 - 118);
      v14 = (v26 + 0x80000000LL) >> 32;
      if ( v23 < 0 )
        LODWORD(v14) = -(int)v14;
    }
    *(_DWORD *)(a2 + 12) = v14;
    LODWORD(v14) = 0;
    v27 = (__m128i)COERCE_UNSIGNED_INT((float)(__int16)(*(_WORD *)(v12 + 62)
                                                      + *(_WORD *)(v12 + 60)
                                                      - *(_WORD *)(v12 + 56)));
    *(float *)v27.m128i_i32 = *(float *)v27.m128i_i32 * v21;
    v28 = _mm_cvtsi128_si32(v27);
    v29 = (unsigned __int8)(v28 >> 23);
    if ( v29 <= 0x9E )
    {
      v30 = v28 & 0x7FFFFFLL | 0x800000;
      v31 = v29 < 0x76 ? v30 >> (118 - (unsigned __int8)v29) : v30 << ((unsigned __int8)v29 - 118);
      v14 = (v31 + 0x80000000LL) >> 32;
      if ( v28 < 0 )
        LODWORD(v14) = -(int)v14;
    }
    *(_DWORD *)(a2 + 20) = v14;
    LODWORD(v14) = 0;
    v32 = *(_WORD *)(v12 + 64)
        + *(_WORD *)(v12 + 68)
        - *(_WORD *)(v12 + 66)
        - *(_WORD *)(v12 + 60)
        - *(_WORD *)(v12 + 62);
    if ( v32 <= 0 )
      v32 = 0;
    v33 = (__m128i)COERCE_UNSIGNED_INT((float)v32);
    *(float *)v33.m128i_i32 = *(float *)v33.m128i_i32 * v21;
    v34 = _mm_cvtsi128_si32(v33);
    v35 = (unsigned __int8)(v34 >> 23);
    if ( v35 <= 0x9E )
    {
      v36 = v34 & 0x7FFFFFLL | 0x800000;
      v37 = v35 < 0x76 ? v36 >> (118 - (unsigned __int8)v35) : v36 << ((unsigned __int8)v35 - 118);
      v14 = (v37 + 0x80000000LL) >> 32;
      if ( v34 < 0 )
        LODWORD(v14) = -(int)v14;
    }
    *(_DWORD *)(a2 + 24) = v14;
    LODWORD(v38) = 0;
    v39 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v12 + 76));
    *(float *)v39.m128i_i32 = *(float *)v39.m128i_i32 * v21;
    v40 = _mm_cvtsi128_si32(v39);
    v41 = (unsigned __int8)(v40 >> 23);
    if ( v41 <= 0x9E )
    {
      v42 = v40 & 0x7FFFFFLL | 0x800000;
      v43 = v41 < 0x76 ? v42 >> (118 - (unsigned __int8)v41) : v42 << ((unsigned __int8)v41 - 118);
      v38 = (v43 + 0x80000000LL) >> 32;
      if ( v40 < 0 )
        LODWORD(v38) = -(int)v38;
    }
    *(_DWORD *)(a2 + 28) = v38;
    LODWORD(v38) = 0;
    v44 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v12 + 78));
    *(float *)v44.m128i_i32 = *(float *)v44.m128i_i32 * v21;
    v45 = _mm_cvtsi128_si32(v44);
    v46 = (unsigned __int8)(v45 >> 23);
    if ( v46 <= 0x9E )
    {
      v47 = v45 & 0x7FFFFFLL | 0x800000;
      v48 = v46 < 0x76 ? v47 >> (118 - (unsigned __int8)v46) : v47 << ((unsigned __int8)v46 - 118);
      v38 = (v48 + 0x80000000LL) >> 32;
      if ( v45 < 0 )
        LODWORD(v38) = -(int)v38;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) = v13;
    *(_DWORD *)(a2 + 12) = *(__int16 *)(v12 + 60);
    *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v12 + 62) + *(_WORD *)(v12 + 60) - *(_WORD *)(v12 + 56));
    v91 = *(_WORD *)(v12 + 64)
        + *(_WORD *)(v12 + 68)
        - *(_WORD *)(v12 + 66)
        - *(_WORD *)(v12 + 60)
        - *(_WORD *)(v12 + 62);
    if ( v91 <= 0 )
      v91 = 0;
    *(_DWORD *)(a2 + 24) = v91;
    *(_DWORD *)(a2 + 28) = *(__int16 *)(v12 + 76);
    LODWORD(v38) = *(__int16 *)(v12 + 78);
  }
  *(_DWORD *)(a2 + 32) = v38;
  v94[0] = a1;
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
  {
    v92[1] = 0;
    v92[0] = 1065353216;
    if ( EXFORMOBJ::bXform((EXFORMOBJ *)v94, (const struct VECTORFL *)v92, (struct VECTORFL *)v92, 1uLL) )
    {
      EFLOAT::eqLength(&a5, &v96, v92);
      v93[0] = 0;
      v93[1] = 1065353216;
      if ( (*(_DWORD *)(v94[0] + 32LL) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)v94, (const struct VECTORFL *)v93, (struct VECTORFL *)v93, 1uLL) )
      {
        EFLOAT::eqLength(&v95, &v96, v93);
        v59 = v95;
        LODWORD(v60) = 0;
        v61 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 8));
        *(float *)v61.m128i_i32 = *(float *)v61.m128i_i32 * v95;
        v62 = _mm_cvtsi128_si32(v61);
        v63 = (unsigned __int8)(v62 >> 23);
        if ( v63 <= 0x9E )
        {
          v64 = v62 & 0x7FFFFFLL | 0x800000;
          v65 = v63 < 0x76 ? v64 >> (118 - (unsigned __int8)v63) : v64 << ((unsigned __int8)v63 - 118);
          v60 = (v65 + 0x80000000LL) >> 32;
          if ( v62 < 0 )
            LODWORD(v60) = -(int)v60;
        }
        v66 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 12));
        *(_DWORD *)(a2 + 8) = v60;
        LODWORD(v60) = 0;
        *(float *)v66.m128i_i32 = *(float *)v66.m128i_i32 * v59;
        v67 = _mm_cvtsi128_si32(v66);
        v68 = (unsigned __int8)(v67 >> 23);
        if ( v68 <= 0x9E )
        {
          v69 = v67 & 0x7FFFFFLL | 0x800000;
          v70 = v68 < 0x76 ? v69 >> (118 - (unsigned __int8)v68) : v69 << ((unsigned __int8)v68 - 118);
          v60 = (v70 + 0x80000000LL) >> 32;
          if ( v67 < 0 )
            LODWORD(v60) = -(int)v60;
        }
        v71 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 28));
        *(_DWORD *)(a2 + 12) = v60;
        LODWORD(v60) = 0;
        *(float *)v71.m128i_i32 = *(float *)v71.m128i_i32 * a5;
        v72 = _mm_cvtsi128_si32(v71);
        v73 = (unsigned __int8)(v72 >> 23);
        if ( v73 <= 0x9E )
        {
          v74 = v72 & 0x7FFFFFLL | 0x800000;
          v75 = v73 < 0x76 ? v74 >> (118 - (unsigned __int8)v73) : v74 << ((unsigned __int8)v73 - 118);
          v60 = (v75 + 0x80000000LL) >> 32;
          if ( v72 < 0 )
            LODWORD(v60) = -(int)v60;
        }
        v76 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 32));
        *(_DWORD *)(a2 + 28) = v60;
        LODWORD(v60) = 0;
        *(float *)v76.m128i_i32 = *(float *)v76.m128i_i32 * a5;
        v77 = _mm_cvtsi128_si32(v76);
        v78 = (unsigned __int8)(v77 >> 23);
        if ( v78 <= 0x9E )
        {
          v79 = v77 & 0x7FFFFFLL | 0x800000;
          v80 = v78 < 0x76 ? v79 >> (118 - (unsigned __int8)v78) : v79 << ((unsigned __int8)v78 - 118);
          v60 = (v80 + 0x80000000LL) >> 32;
          if ( v77 < 0 )
            LODWORD(v60) = -(int)v60;
        }
        v81 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 20));
        *(_DWORD *)(a2 + 32) = v60;
        LODWORD(v60) = 0;
        *(float *)v81.m128i_i32 = *(float *)v81.m128i_i32 * v59;
        v82 = _mm_cvtsi128_si32(v81);
        v83 = (unsigned __int8)(v82 >> 23);
        if ( v83 <= 0x9E )
        {
          v84 = v82 & 0x7FFFFFLL | 0x800000;
          v85 = v83 < 0x76 ? v84 >> (118 - (unsigned __int8)v83) : v84 << ((unsigned __int8)v83 - 118);
          v60 = (v85 + 0x80000000LL) >> 32;
          if ( v82 < 0 )
            LODWORD(v60) = -(int)v60;
        }
        v86 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 24));
        *(_DWORD *)(a2 + 20) = v60;
        LODWORD(v60) = 0;
        *(float *)v86.m128i_i32 = *(float *)v86.m128i_i32 * v59;
        v87 = _mm_cvtsi128_si32(v86);
        v88 = (unsigned __int8)(v87 >> 23);
        if ( v88 <= 0x9E )
        {
          v89 = v87 & 0x7FFFFFLL | 0x800000;
          v90 = v88 < 0x76 ? v89 >> (118 - (unsigned __int8)v88) : v89 << ((unsigned __int8)v88 - 118);
          v60 = (v90 + 0x80000000LL) >> 32;
          if ( v87 < 0 )
            LODWORD(v60) = -(int)v60;
        }
        *(_DWORD *)(a2 + 24) = v60;
        goto LABEL_39;
      }
    }
    return 0LL;
  }
LABEL_39:
  v50 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 44) = a7;
  *(_DWORD *)(a2 + 48) = a8;
  *(_DWORD *)(a2 + 16) = v50;
  *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v12 + 46);
  *(_BYTE *)(a2 + 60) = -((*(_BYTE *)(v12 + 52) & 1) != 0);
  *(_BYTE *)(a2 + 61) = *(_BYTE *)(v12 + 52) & 2;
  *(_BYTE *)(a2 + 62) = *(_BYTE *)(v12 + 52) & 0x10;
  *(_WORD *)(a2 + 52) = *(_WORD *)(v12 + 112);
  *(_WORD *)(a2 + 54) = *(_WORD *)(v12 + 114);
  *(_WORD *)(a2 + 56) = *(_WORD *)(v12 + 116);
  *(_WORD *)(a2 + 58) = *(_WORD *)(v12 + 118);
  *(_BYTE *)(a2 + 64) = *(_BYTE *)(v12 + 44);
  v51 = *(_DWORD *)(v12 + 48);
  v52 = *(_BYTE *)(v12 + 45);
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 68) = 0;
  *(_BYTE *)(a2 + 63) = (a4 != 0 ? 8 : 0) | v52 & 0xF0 | (v51 >> 1) & 2 | ((v51 & 1) != 0 ? 6 : 0) | ((v51 & 8) != 0 ? 0xA : 0) | ((v51 & 0x401000) == 0);
  v53 = *(_WORD *)(v12 + 52);
  if ( (v53 & 0x21) != 0 )
  {
    v54 = 0;
    if ( (v53 & 1) != 0 )
    {
      *(_DWORD *)(a2 + 68) = 1;
      v54 = 1;
    }
    if ( (*(_BYTE *)(v12 + 52) & 0x20) == 0 )
      goto LABEL_42;
    v54 |= 0x20u;
  }
  else
  {
    v54 = 64;
  }
  *(_DWORD *)(a2 + 68) = v54;
LABEL_42:
  if ( (*(_DWORD *)(v12 + 48) & 0x20000000) != 0 )
  {
    v54 |= 0x10000u;
    *(_DWORD *)(a2 + 68) = v54;
  }
  v55 = *(_DWORD *)(v12 + 48);
  if ( v55 < 0 )
  {
    if ( (v55 & 0x4000) != 0 )
    {
      v54 |= 0x80000u;
      *(_DWORD *)(a2 + 68) = v54;
    }
    if ( (*(_DWORD *)(v12 + 48) & 0x4000000) != 0 )
      v54 |= 0x20000u;
    else
      v54 |= 0x100000u;
    *(_DWORD *)(a2 + 68) = v54;
  }
  if ( (*(_DWORD *)(v12 + 48) & 0x40000) != 0 )
  {
    v56 = v54 | 0x200000;
    *(_DWORD *)(a2 + 68) = v56;
    if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
      *(_DWORD *)(a2 + 68) = v56 | 0x40000;
  }
  *(_DWORD *)(a2 + 72) = *(__int16 *)(v12 + 56);
  *(_DWORD *)(a2 + 76) = *(__int16 *)(v12 + 62) + *(__int16 *)(v12 + 60);
  *(_DWORD *)(a2 + 80) = *(__int16 *)(v12 + 76);
  *(_BYTE *)(a2 + 4) = *(_BYTE *)(v12 + 108);
  *(_BYTE *)(a2 + 5) = *(_BYTE *)(v12 + 109);
  *(_BYTE *)(a2 + 6) = *(_BYTE *)(v12 + 110);
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(v12 + 111);
  v57 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  if ( *(_DWORD *)(v57 + 4) > 4u && (v58 = *(int *)(v57 + 196), (_DWORD)v58) )
  {
    *(_OWORD *)(a2 + 84) = *(_OWORD *)(v58 + v12);
    *(_QWORD *)(a2 + 100) = *(_QWORD *)(v58 + v12 + 16);
  }
  else
  {
    *(_OWORD *)(a2 + 84) = 0LL;
    *(_QWORD *)(a2 + 100) = 0LL;
  }
  return 1LL;
}
