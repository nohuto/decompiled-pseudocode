/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x140013B74
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400A6340 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E810C (-vOrder@ERECTL@@QEAAXXZ.c)
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
  float *v21; // r8
  float *v22; // r9
  _DWORD *v23; // r10
  __int64 v24; // r11
  float v25; // xmm2_4
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  int v28; // edi
  unsigned int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  int v34; // r13d
  int v35; // edi
  unsigned int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r12d
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  int v43; // edi
  unsigned int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // ebp
  int v49; // edi
  unsigned int v50; // r8d
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // r15d
  float v55; // xmm2_4
  __m128i v56; // xmm1
  __m128i v57; // xmm0
  int v58; // edi
  unsigned int v59; // r8d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  float v63; // xmm3_4
  int v64; // r14d
  int v65; // r9d
  unsigned int v66; // r8d
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // esi
  __m128i v71; // xmm1
  __m128i v72; // xmm0
  int v73; // r9d
  unsigned int v74; // r8d
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // edi
  int v79; // r8d
  unsigned int v80; // ecx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  FIX v85; // r9d
  FIX v86; // r8d
  FIX v87; // edx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  LONG v92; // ecx
  int v93; // eax
  int v94; // eax
  int v95; // edx
  LONG v96; // edx
  int v97; // eax
  int v98; // edx
  int v99; // edx
  int v100; // [rsp+60h] [rbp+8h]

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
    v94 = v24;
    v95 = (v23[18] + 8) >> 4;
    LOBYTE(v94) = *v22 < 0.0;
    if ( v94 )
    {
      a3->left = v95 - ((v23[25] + 15) >> 4);
      v96 = v95 - ((int)v23[27] >> 4);
    }
    else
    {
      a3->left = v95 + ((int)v23[27] >> 4);
      v96 = ((v23[25] + 15) >> 4) + v95;
    }
    a3->right = v96;
    v97 = v24;
    v98 = (v23[19] + 8) >> 4;
    LOBYTE(v97) = *(float *)v9 < 0.0;
    if ( v97 )
    {
      a3->top = v98 - ((v23[26] + 15) >> 4);
      v99 = v98 - ((int)v23[24] >> 4);
    }
    else
    {
      a3->top = v98 + ((int)v23[24] >> 4);
      v99 = ((v23[26] + 15) >> 4) + v98;
    }
    a3->bottom = v99 + 1;
    return 0LL;
  }
  v25 = *v21;
  v26 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v23[24]);
  v100 = v24;
  v27 = v26;
  *(float *)v27.m128i_i32 = *(float *)v26.m128i_i32 * *v21;
  v28 = _mm_cvtsi128_si32(v27);
  v29 = (unsigned __int8)(v28 >> 23);
  if ( v29 <= 0x9E )
  {
    v30 = v28 & 0x7FFFFFLL | 0x800000;
    if ( v29 < 0x76 )
      v31 = v30 >> (118 - (unsigned __int8)v29);
    else
      v31 = v30 << ((unsigned __int8)v29 - 118);
    v32 = (v31 + 0x80000000LL) >> 32;
    v33 = -(int)v32;
    if ( v28 >= 0 )
      v33 = v32;
    v100 = v33;
  }
  v34 = v24;
  *(float *)v26.m128i_i32 = *(float *)v26.m128i_i32 * *(float *)v9;
  v35 = _mm_cvtsi128_si32(v26);
  v36 = (unsigned __int8)(v35 >> 23);
  if ( v36 <= 0x9E )
  {
    v37 = v35 & 0x7FFFFFLL | 0x800000;
    v38 = v36 < 0x76 ? v37 >> (118 - (unsigned __int8)v36) : v37 << ((unsigned __int8)v36 - 118);
    v39 = (v38 + 0x80000000LL) >> 32;
    v34 = -(int)v39;
    if ( v35 >= 0 )
      v34 = v39;
  }
  v40 = v24;
  v41 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v23[26]);
  v42 = v41;
  *(float *)v42.m128i_i32 = *(float *)v41.m128i_i32 * v25;
  v43 = _mm_cvtsi128_si32(v42);
  v44 = (unsigned __int8)(v43 >> 23);
  if ( v44 <= 0x9E )
  {
    v45 = v43 & 0x7FFFFFLL | 0x800000;
    v46 = v44 < 0x76 ? v45 >> (118 - (unsigned __int8)v44) : v45 << ((unsigned __int8)v44 - 118);
    v47 = (v46 + 0x80000000LL) >> 32;
    v40 = -(int)v47;
    if ( v43 >= 0 )
      v40 = v47;
  }
  *(float *)v41.m128i_i32 = *(float *)v41.m128i_i32 * *(float *)v9;
  v48 = v24;
  v49 = _mm_cvtsi128_si32(v41);
  v50 = (unsigned __int8)(v49 >> 23);
  if ( v50 <= 0x9E )
  {
    v51 = v49 & 0x7FFFFFLL | 0x800000;
    v52 = v50 < 0x76 ? v51 >> (118 - (unsigned __int8)v50) : v51 << ((unsigned __int8)v50 - 118);
    v53 = (v52 + 0x80000000LL) >> 32;
    v48 = -(int)v53;
    if ( v49 >= 0 )
      v48 = v53;
  }
  v54 = v24;
  v55 = *v22;
  v56 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v23[25]);
  v57 = v56;
  *(float *)v57.m128i_i32 = *(float *)v56.m128i_i32 * *v22;
  v58 = _mm_cvtsi128_si32(v57);
  v59 = (unsigned __int8)(v58 >> 23);
  if ( v59 <= 0x9E )
  {
    v60 = v58 & 0x7FFFFFLL | 0x800000;
    v61 = v59 < 0x76 ? v60 >> (118 - (unsigned __int8)v59) : v60 << ((unsigned __int8)v59 - 118);
    v62 = (v61 + 0x80000000LL) >> 32;
    v54 = -(int)v62;
    if ( v58 >= 0 )
      v54 = v62;
  }
  v63 = v22[1];
  v64 = v24;
  *(float *)v56.m128i_i32 = *(float *)v56.m128i_i32 * v63;
  v65 = _mm_cvtsi128_si32(v56);
  v66 = (unsigned __int8)(v65 >> 23);
  if ( v66 <= 0x9E )
  {
    v67 = v65 & 0x7FFFFF | 0x800000LL;
    v68 = v66 < 0x76 ? v67 >> (118 - (unsigned __int8)v66) : v67 << ((unsigned __int8)v66 - 118);
    v69 = (v68 + 0x80000000LL) >> 32;
    v64 = -(int)v69;
    if ( v65 >= 0 )
      v64 = v69;
  }
  v70 = v24;
  v71 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v23[27]);
  v72 = v71;
  *(float *)v72.m128i_i32 = *(float *)v71.m128i_i32 * v55;
  v73 = _mm_cvtsi128_si32(v72);
  v74 = (unsigned __int8)(v73 >> 23);
  if ( v74 <= 0x9E )
  {
    v75 = v73 & 0x7FFFFF | 0x800000LL;
    v76 = v74 < 0x76 ? v75 >> (118 - (unsigned __int8)v74) : v75 << ((unsigned __int8)v74 - 118);
    v77 = (v76 + 0x80000000LL) >> 32;
    v70 = -(int)v77;
    if ( v73 >= 0 )
      v70 = v77;
  }
  *(float *)v71.m128i_i32 = *(float *)v71.m128i_i32 * v63;
  v78 = v24;
  v79 = _mm_cvtsi128_si32(v71);
  v80 = (unsigned __int8)(v79 >> 23);
  if ( v80 <= 0x9E )
  {
    v81 = v79 & 0x7FFFFF | 0x800000LL;
    v82 = v80 < 0x76 ? v81 >> (118 - (unsigned __int8)v80) : v81 << ((unsigned __int8)v80 - 118);
    v83 = (v82 + 0x80000000LL) >> 32;
    v78 = -(int)v83;
    if ( v79 >= 0 )
      v78 = v83;
  }
  v84 = v24;
  v85 = v100 + v54 + v23[18];
  a2->x = v85;
  v86 = v40 + v54 + v23[18];
  a2[1].x = v86;
  v87 = v40 + v70 + v23[18];
  a2[2].x = v87;
  a2[3].x = v100 + v70 + v23[18];
  a2->y = v23[19] + v64 + v34;
  a2[1].y = v23[19] + v64 + v48;
  a2[2].y = v23[19] + v78 + v48;
  a2[3].y = v23[19] + v78 + v34;
  v88 = v24;
  LOBYTE(v84) = v86 > v87;
  LOBYTE(v88) = v86 <= v85;
  v89 = v88 ^ v84;
  a3->left = a2[v89].x;
  LODWORD(v88) = a2[v89 + 2].x;
  v90 = v24;
  a3->right = v88;
  LODWORD(v88) = a2[1].y;
  LOBYTE(v90) = (int)v88 <= a2->y;
  LOBYTE(v24) = (int)v88 > a2[2].y;
  v91 = v24 ^ v90;
  a3->top = a2[v91].y;
  a3->bottom = a2[v91 + 2].y;
  ERECTL::vOrder((ERECTL *)a3);
  v92 = a3->left >> 4;
  a3->top = (a3->top >> 4) - 2;
  v93 = a3->right + 15;
  a3->left = v92 - 2;
  a3->right = (v93 >> 4) + 2;
  a3->bottom = ((a3->bottom + 15) >> 4) + 2;
  return 1LL;
}
