/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1400BEF70
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall ESTROBJ::bOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, struct _RECTL *a3)
{
  int v4; // edx
  LONG v5; // r8d
  __int64 v6; // rax
  int v7; // edx
  EFLOAT *v9; // rsi
  EFLOAT *v10; // r8
  EFLOAT *v11; // r9
  __int64 v12; // r9
  _DWORD *v13; // r10
  int v14; // r11d
  int v15; // eax
  int v16; // edx
  LONG v17; // edx
  int v18; // eax
  int v19; // r8d
  LONG v20; // r8d
  unsigned int *v21; // r8
  float *v22; // r9
  _DWORD *v23; // r10
  __int64 v24; // r11
  __m128i v25; // xmm2
  __int64 v26; // r13
  __m128i v27; // xmm3
  __m128i v28; // xmm0
  int v29; // edi
  unsigned int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // xmm1
  __int64 v34; // r12
  __m128i v35; // xmm0
  int v36; // edi
  unsigned int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r15
  float v41; // xmm0_4
  int v42; // edi
  unsigned int v43; // r8d
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r14
  int v47; // edi
  unsigned int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  float v52; // xmm3_4
  __m128i v53; // xmm2
  __m128i v54; // xmm0
  int v55; // esi
  unsigned int v56; // edi
  __int64 v57; // rax
  __int64 v58; // rax
  __m128i v59; // xmm1
  __int64 v60; // rbp
  __m128i v61; // xmm0
  int v62; // edi
  unsigned int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rsi
  __m128i v67; // xmm2
  __m128i v68; // xmm0
  int v69; // edi
  unsigned int v70; // r9d
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  int v74; // r9d
  unsigned int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rax
  FIX v78; // r9d
  __int64 v79; // rcx
  FIX v80; // r8d
  FIX v81; // edx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  LONG v86; // ecx
  int v87; // eax
  int v88; // eax
  int v89; // edx
  LONG v90; // edx
  int v91; // eax
  int v92; // edx
  int v93; // edx

  if ( (*((_DWORD *)this + 1) & 2) != 0 )
  {
    v4 = (*((_DWORD *)this + 18) + 8) >> 4;
    a3->left = v4 + (*((int *)this + 24) >> 4);
    v5 = v4 + ((*((_DWORD *)this + 26) + 15) >> 4);
    a3->right = v5;
    v6 = *((_QWORD *)this + 7);
    if ( (*(_DWORD *)(*(_QWORD *)v6 + 12LL) & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)v6 + 724LL) & 6) != 0 )
    {
      a3->right = v5 + 1;
      *((_DWORD *)this + 1) &= ~0x10u;
    }
    v7 = (*((_DWORD *)this + 19) + 8) >> 4;
    a3->top = v7 - ((*((_DWORD *)this + 25) + 15) >> 4);
    a3->bottom = v7 - (*((int *)this + 27) >> 4);
    return 0LL;
  }
  v9 = (EFLOAT *)(**((_QWORD **)this + 7) + 396LL);
  if ( (unsigned int)EFLOAT::bIsZero(v9) && (unsigned int)EFLOAT::bIsZero(v11) )
  {
    v15 = v14;
    v16 = (v13[18] + 8) >> 4;
    LOBYTE(v15) = *(float *)v10 < 0.0;
    if ( v15 )
    {
      a3->left = v16 - ((v13[26] + 15) >> 4);
      v17 = v16 - ((int)v13[24] >> 4);
    }
    else
    {
      a3->left = v16 + ((int)v13[24] >> 4);
      v17 = ((v13[26] + 15) >> 4) + v16;
    }
    a3->right = v17;
    v18 = v14;
    v19 = (v13[19] + 8) >> 4;
    LOBYTE(v18) = *(float *)(v12 + 4) < 0.0;
    if ( v18 )
    {
      a3->top = v19 - ((v13[25] + 15) >> 4);
      v20 = v19 - ((int)v13[27] >> 4);
    }
    else
    {
      a3->top = v19 + ((int)v13[27] >> 4);
      v20 = ((v13[25] + 15) >> 4) + v19;
    }
    a3->bottom = v20;
    a3->right = v17 + 1;
    return 0LL;
  }
  if ( (unsigned int)EFLOAT::bIsZero(v10) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v22 + 1)) )
  {
    v88 = v24;
    v89 = (v23[18] + 8) >> 4;
    LOBYTE(v88) = *v22 < 0.0;
    if ( v88 )
    {
      a3->left = v89 - ((v23[25] + 15) >> 4);
      v90 = v89 - ((int)v23[27] >> 4);
    }
    else
    {
      a3->left = v89 + ((int)v23[27] >> 4);
      v90 = ((v23[25] + 15) >> 4) + v89;
    }
    a3->right = v90;
    v91 = v24;
    v92 = (v23[19] + 8) >> 4;
    LOBYTE(v91) = *(float *)v9 < 0.0;
    if ( v91 )
    {
      a3->top = v92 - ((v23[26] + 15) >> 4);
      v93 = v92 - ((int)v23[24] >> 4);
    }
    else
    {
      a3->top = v92 + ((int)v23[24] >> 4);
      v93 = ((v23[26] + 15) >> 4) + v92;
    }
    a3->bottom = v93 + 1;
    return 0LL;
  }
  v25 = (__m128i)*v21;
  LODWORD(v26) = v24;
  v27 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v23[24]);
  v28 = v27;
  *(float *)v28.m128i_i32 = *(float *)v27.m128i_i32 * *(float *)v25.m128i_i32;
  v29 = _mm_cvtsi128_si32(v28);
  v30 = (unsigned __int8)(v29 >> 23);
  if ( v30 <= 0x9E )
  {
    v31 = v29 & 0x7FFFFFLL | 0x800000;
    v32 = v30 < 0x76 ? v31 >> (118 - (unsigned __int8)v30) : v31 << ((unsigned __int8)v30 - 118);
    v26 = (v32 + 0x80000000LL) >> 32;
    if ( v29 < 0 )
      LODWORD(v26) = -(int)v26;
  }
  v33 = (__m128i)*(unsigned int *)v9;
  LODWORD(v34) = v24;
  v35 = v33;
  *(float *)v35.m128i_i32 = *(float *)v33.m128i_i32 * *(float *)v27.m128i_i32;
  v36 = _mm_cvtsi128_si32(v35);
  v37 = (unsigned __int8)(v36 >> 23);
  if ( v37 <= 0x9E )
  {
    v38 = v36 & 0x7FFFFFLL | 0x800000;
    v39 = v37 < 0x76 ? v38 >> (118 - (unsigned __int8)v37) : v38 << ((unsigned __int8)v37 - 118);
    v34 = (v39 + 0x80000000LL) >> 32;
    if ( v36 < 0 )
      LODWORD(v34) = -(int)v34;
  }
  LODWORD(v40) = v24;
  v41 = (float)(int)v23[26];
  *(float *)v25.m128i_i32 = *(float *)v25.m128i_i32 * v41;
  v42 = _mm_cvtsi128_si32(v25);
  v43 = (unsigned __int8)(v42 >> 23);
  if ( v43 <= 0x9E )
  {
    v44 = v42 & 0x7FFFFFLL | 0x800000;
    v45 = v43 < 0x76 ? v44 >> (118 - (unsigned __int8)v43) : v44 << ((unsigned __int8)v43 - 118);
    v40 = (v45 + 0x80000000LL) >> 32;
    if ( v42 < 0 )
      LODWORD(v40) = -(int)v40;
  }
  *(float *)v33.m128i_i32 = *(float *)v33.m128i_i32 * v41;
  LODWORD(v46) = v24;
  v47 = _mm_cvtsi128_si32(v33);
  v48 = (unsigned __int8)(v47 >> 23);
  if ( v48 <= 0x9E )
  {
    v49 = v47 & 0x7FFFFFLL | 0x800000;
    v50 = v48 < 0x76 ? v49 >> (118 - (unsigned __int8)v48) : v49 << ((unsigned __int8)v48 - 118);
    v46 = (v50 + 0x80000000LL) >> 32;
    if ( v47 < 0 )
      LODWORD(v46) = -(int)v46;
  }
  LODWORD(v51) = v24;
  v52 = *v22;
  v53 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v23[25]);
  v54 = v53;
  *(float *)v54.m128i_i32 = *(float *)v53.m128i_i32 * *v22;
  v55 = _mm_cvtsi128_si32(v54);
  v56 = (unsigned __int8)(v55 >> 23);
  if ( v56 <= 0x9E )
  {
    v57 = v55 & 0x7FFFFFLL | 0x800000;
    v58 = v56 < 0x76 ? v57 >> (118 - (unsigned __int8)v56) : v57 << ((unsigned __int8)v56 - 118);
    v51 = (v58 + 0x80000000LL) >> 32;
    if ( v55 < 0 )
      LODWORD(v51) = -(int)v51;
  }
  v59 = (__m128i)*((unsigned int *)v22 + 1);
  LODWORD(v60) = v24;
  v61 = v59;
  *(float *)v61.m128i_i32 = *(float *)v59.m128i_i32 * *(float *)v53.m128i_i32;
  v62 = _mm_cvtsi128_si32(v61);
  v63 = (unsigned __int8)(v62 >> 23);
  if ( v63 <= 0x9E )
  {
    v64 = v62 & 0x7FFFFF | 0x800000LL;
    v65 = v63 < 0x76 ? v64 >> (118 - (unsigned __int8)v63) : v64 << ((unsigned __int8)v63 - 118);
    v60 = (v65 + 0x80000000LL) >> 32;
    if ( v62 < 0 )
      LODWORD(v60) = -(int)v60;
  }
  LODWORD(v66) = v24;
  v67 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v23[27]);
  v68 = v67;
  *(float *)v68.m128i_i32 = *(float *)v67.m128i_i32 * v52;
  v69 = _mm_cvtsi128_si32(v68);
  v70 = (unsigned __int8)(v69 >> 23);
  if ( v70 <= 0x9E )
  {
    v71 = v69 & 0x7FFFFF | 0x800000LL;
    v72 = v70 < 0x76 ? v71 >> (118 - (unsigned __int8)v70) : v71 << ((unsigned __int8)v70 - 118);
    v66 = (v72 + 0x80000000LL) >> 32;
    if ( v69 < 0 )
      LODWORD(v66) = -(int)v66;
  }
  *(float *)v59.m128i_i32 = *(float *)v59.m128i_i32 * *(float *)v67.m128i_i32;
  LODWORD(v73) = v24;
  v74 = _mm_cvtsi128_si32(v59);
  v75 = (unsigned __int8)(v74 >> 23);
  if ( v75 <= 0x9E )
  {
    v76 = v74 & 0x7FFFFF | 0x800000LL;
    v77 = v75 < 0x76 ? v76 >> (118 - (unsigned __int8)v75) : v76 << ((unsigned __int8)v75 - 118);
    v73 = (v77 + 0x80000000LL) >> 32;
    if ( v74 < 0 )
      LODWORD(v73) = -(int)v73;
  }
  v78 = v23[18] + v51 + v26;
  v79 = v24;
  a2->x = v78;
  v80 = v23[18] + v40 + v51;
  a2[1].x = v80;
  v81 = v23[18] + v66 + v40;
  a2[2].x = v81;
  a2[3].x = v23[18] + v66 + v26;
  a2->y = v23[19] + v34 + v60;
  a2[1].y = v23[19] + v46 + v60;
  a2[2].y = v23[19] + v73 + v46;
  a2[3].y = v23[19] + v73 + v34;
  v82 = v24;
  LOBYTE(v79) = v80 > v81;
  LOBYTE(v82) = v80 <= v78;
  v83 = v82 ^ v79;
  a3->left = a2[v83].x;
  LODWORD(v82) = a2[v83 + 2].x;
  v84 = v24;
  a3->right = v82;
  LODWORD(v82) = a2[1].y;
  LOBYTE(v84) = (int)v82 > a2[2].y;
  LOBYTE(v24) = (int)v82 <= a2->y;
  v85 = v24 ^ v84;
  a3->top = a2[v85].y;
  a3->bottom = a2[v85 + 2].y;
  ERECTL::vOrder((ERECTL *)a3);
  v86 = a3->left >> 4;
  a3->top = (a3->top >> 4) - 2;
  v87 = a3->right + 15;
  a3->left = v86 - 2;
  a3->right = (v87 >> 4) + 2;
  a3->bottom = ((a3->bottom + 15) >> 4) + 2;
  return 1LL;
}
