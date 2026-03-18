/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x14022788C
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x14010764C (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

void __fastcall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct XDCOBJ *a2, struct RFONTOBJ *a3, LONG a4, LONG a5, int *a6)
{
  int v6; // ebx
  __int64 v10; // rax
  float v11; // xmm10_4
  float v12; // xmm12_4
  float v13; // xmm11_4
  __m128i v14; // xmm13
  __m128i v15; // xmm8
  __m128i v16; // xmm6
  __m128i v17; // xmm7
  float v18; // xmm9_4
  int v19; // ecx
  int v20; // r13d
  int v21; // r15d
  struct _GLYPHPOS *v22; // r8
  int v23; // r14d
  unsigned __int16 *v24; // r9
  struct RFONTOBJ *v25; // rdx
  unsigned int v26; // r12d
  POINTL *v27; // r11
  int v28; // eax
  unsigned int v29; // ecx
  signed int v30; // r13d
  int v31; // r12d
  __int64 v32; // rdx
  __m128i v33; // xmm2
  __m128i v34; // xmm0
  int v35; // r9d
  unsigned int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // ecx
  int v40; // edx
  __m128i v41; // xmm0
  __int64 v42; // r8
  int v43; // edx
  signed int v44; // r12d
  int v45; // r9d
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  int *v49; // r10
  int v50; // r13d
  __m128i v51; // xmm0
  signed int v52; // edx
  int v53; // r8d
  int v54; // r9d
  int v55; // ecx
  int v56; // ecx
  signed int v57; // ecx
  __int64 v58; // r8
  signed int v59; // edx
  unsigned int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rax
  __m128i v63; // xmm0
  __int64 v64; // rcx
  int v65; // r9d
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rax
  POINTL *v69; // r11
  __m128i v70; // xmm0
  int v71; // ecx
  int v72; // r9d
  unsigned int v73; // edx
  __int64 v74; // rax
  __int64 v75; // rax
  __m128i v76; // xmm0
  __int64 v77; // rcx
  int v78; // r9d
  unsigned int v79; // edx
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // eax
  int v83; // ecx
  int v84; // eax
  __m128i v85; // xmm1
  __int64 v86; // rdx
  __m128i v87; // xmm0
  int v88; // r9d
  unsigned int v89; // r8d
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  int v93; // r9d
  unsigned int v94; // r8d
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // r9d
  unsigned int v98; // r8d
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // r8d
  unsigned int v102; // ecx
  __int64 v103; // rax
  __int64 v104; // rax
  __int128 v105; // xmm0
  double v106; // xmm0_8
  double v107; // xmm0_8
  int v109; // [rsp+48h] [rbp-C0h] BYREF
  int v110; // [rsp+4Ch] [rbp-BCh]
  signed int v111; // [rsp+50h] [rbp-B8h]
  __int128 v112; // [rsp+58h] [rbp-B0h]
  int v113; // [rsp+68h] [rbp-A0h] BYREF
  int v114; // [rsp+6Ch] [rbp-9Ch]
  signed int v115; // [rsp+70h] [rbp-98h]
  int v116; // [rsp+74h] [rbp-94h]
  int v117; // [rsp+78h] [rbp-90h]
  BOOL v118; // [rsp+7Ch] [rbp-8Ch]
  BOOL v119; // [rsp+80h] [rbp-88h]
  unsigned int v120; // [rsp+84h] [rbp-84h]
  float v121; // [rsp+88h] [rbp-80h] BYREF
  float v122; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v123; // [rsp+90h] [rbp-78h]
  signed int v124; // [rsp+94h] [rbp-74h]
  POINTL *p_ptl; // [rsp+98h] [rbp-70h]
  int v126; // [rsp+A0h] [rbp-68h] BYREF
  int *v127; // [rsp+A8h] [rbp-60h]
  int v128; // [rsp+188h] [rbp+80h]

  v6 = 0;
  v10 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 648LL) )
  {
    v11 = *(float *)(v10 + 440);
    v12 = *(float *)(v10 + 448);
    v13 = *(float *)(v10 + 452);
    v14 = (__m128i)*(unsigned int *)(v10 + 432);
    v15 = (__m128i)*(unsigned int *)(v10 + 436);
    v16 = (__m128i)*(unsigned int *)(v10 + 412);
    v17 = (__m128i)*(unsigned int *)(v10 + 416);
    v18 = *(float *)(v10 + 420);
    v121 = v12;
    v122 = v13;
    v118 = v11 == 16.0;
    v119 = v18 == 16.0;
    v19 = *(_DWORD *)(v10 + 308);
    v20 = 0x7FFFFFFF;
    v21 = 0;
    v22 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v23 = 0;
    v24 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v123 = *(_DWORD *)(v10 + 312);
    v22->ptl.x = a4;
    p_ptl = &v22->ptl;
    v22->ptl.y = a5;
    v25 = (struct RFONTOBJ *)*(unsigned int *)this;
    v26 = 0x80000000;
    v111 = 0x80000000;
    *((_QWORD *)&v112 + 1) = 0x7FFFFFFF80000000LL;
    v115 = 0x80000000;
    v128 = 0x7FFFFFFF;
    v114 = v19;
    v113 = 0;
    v116 = 0x7FFFFFFF;
    *(_QWORD *)&v112 = 0x800000007FFFFFFFuLL;
    v110 = 0;
    v117 = 0;
    v109 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v25, v22, v24, &v109, a2, this) )
    {
      if ( v109 )
      {
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
      }
      v120 = 0;
      if ( *(_DWORD *)this )
      {
        v27 = p_ptl;
        v28 = 0x7FFFFFFF;
        v29 = 0x80000000;
        do
        {
          v124 = v29;
          v127 = (int *)v27[-1];
          v109 = v20;
          v30 = v26;
          v31 = v28;
          vGenWidths(&v113, &v126, (struct EFLOAT *)&v122, (struct EFLOAT *)&v121, v127[3], v127[6], v127[7], v114);
          LODWORD(v32) = 0;
          v33 = (__m128i)COERCE_UNSIGNED_INT((float)(v23 + v113));
          v34 = v33;
          *(float *)v34.m128i_i32 = *(float *)v33.m128i_i32 * v13;
          v35 = _mm_cvtsi128_si32(v34);
          v36 = (unsigned __int8)(v35 >> 23);
          if ( v36 <= 0x9E )
          {
            v37 = v35 & 0x7FFFFFLL | 0x800000;
            v38 = v36 < 0x76 ? v37 >> (118 - (unsigned __int8)v36) : v37 << ((unsigned __int8)v36 - 118);
            v32 = (v38 + 0x80000000LL) >> 32;
            if ( v35 < 0 )
              LODWORD(v32) = -(int)v32;
          }
          v39 = v32 + v21;
          v40 = v128;
          v41 = (__m128i)COERCE_UNSIGNED_INT((float)(v23 + v113));
          LODWORD(v42) = 0;
          if ( v39 + v123 < v128 )
            v40 = v39 + v123;
          HIDWORD(v112) = v40;
          v43 = v39 + v123;
          if ( v39 + v123 >= v31 )
            v43 = v31;
          v44 = v115;
          *(float *)v41.m128i_i32 = *(float *)v33.m128i_i32 * v12;
          v45 = _mm_cvtsi128_si32(v41);
          v128 = v43;
          if ( v39 + v114 > v115 )
            v44 = v39 + v114;
          DWORD1(v112) = v44;
          v26 = v39 + v114;
          if ( v39 + v114 <= v30 )
            v26 = v30;
          v46 = (unsigned __int8)(v45 >> 23);
          v115 = v26;
          if ( v46 <= 0x9E )
          {
            v47 = v45 & 0x7FFFFFLL | 0x800000;
            v48 = v46 < 0x76 ? v47 >> (118 - (unsigned __int8)v46) : v47 << ((unsigned __int8)v46 - 118);
            v42 = (v48 + 0x80000000LL) >> 32;
            if ( v45 < 0 )
              LODWORD(v42) = -(int)v42;
          }
          v49 = v127;
          v50 = v116;
          v51 = v14;
          *(float *)v51.m128i_i32 = *(float *)v14.m128i_i32 * *(float *)v33.m128i_i32;
          v52 = v111;
          v53 = v42 - v127[3] / 2;
          v54 = _mm_cvtsi128_si32(v51);
          v55 = v53 + v127[4] - 4;
          if ( v55 < v116 )
            v50 = v53 + v127[4] - 4;
          LODWORD(v112) = v50;
          v20 = v55;
          if ( v55 >= v109 )
            v20 = v109;
          v56 = v127[5] + 4;
          v116 = v20;
          v57 = v53 + v56;
          LODWORD(v58) = 0;
          if ( v57 > v111 )
            v52 = v57;
          DWORD2(v112) = v52;
          v59 = v57;
          if ( v57 <= v124 )
            v59 = v124;
          v111 = v59;
          v60 = (unsigned __int8)(v54 >> 23);
          if ( v60 <= 0x9E )
          {
            v61 = v54 & 0x7FFFFFLL | 0x800000;
            v62 = v60 < 0x76 ? v61 >> (118 - (unsigned __int8)v60) : v61 << ((unsigned __int8)v60 - 118);
            v58 = (v62 + 0x80000000LL) >> 32;
            if ( v54 < 0 )
              LODWORD(v58) = -(int)v58;
          }
          v63 = v16;
          LODWORD(v64) = 0;
          *(float *)v63.m128i_i32 = *(float *)v16.m128i_i32 * (float)v21;
          v65 = _mm_cvtsi128_si32(v63);
          v66 = (unsigned __int8)(v65 >> 23);
          if ( v66 <= 0x9E )
          {
            v67 = v65 & 0x7FFFFFLL | 0x800000;
            v68 = v66 < 0x76 ? v67 >> (118 - (unsigned __int8)v66) : v67 << ((unsigned __int8)v66 - 118);
            v64 = (v68 + 0x80000000LL) >> 32;
            if ( v65 < 0 )
              LODWORD(v64) = -(int)v64;
          }
          v69 = p_ptl;
          v70 = v15;
          *(float *)v70.m128i_i32 = *(float *)v15.m128i_i32 * *(float *)v33.m128i_i32;
          v71 = v58 + v64 - v127[13] / 2;
          LODWORD(v58) = 0;
          p_ptl->x = a4 + v71;
          v72 = _mm_cvtsi128_si32(v70);
          v73 = (unsigned __int8)(v72 >> 23);
          if ( v73 <= 0x9E )
          {
            v74 = v72 & 0x7FFFFFLL | 0x800000;
            v75 = v73 < 0x76 ? v74 >> (118 - (unsigned __int8)v73) : v74 << ((unsigned __int8)v73 - 118);
            v58 = (v75 + 0x80000000LL) >> 32;
            if ( v72 < 0 )
              LODWORD(v58) = -(int)v58;
          }
          v76 = v17;
          LODWORD(v77) = 0;
          *(float *)v76.m128i_i32 = *(float *)v17.m128i_i32 * (float)v21;
          v78 = _mm_cvtsi128_si32(v76);
          v79 = (unsigned __int8)(v78 >> 23);
          if ( v79 <= 0x9E )
          {
            v80 = v78 & 0x7FFFFFLL | 0x800000;
            v81 = v79 < 0x76 ? v80 >> (118 - (unsigned __int8)v79) : v80 << ((unsigned __int8)v79 - 118);
            v77 = (v81 + 0x80000000LL) >> 32;
            if ( v78 < 0 )
              LODWORD(v77) = -(int)v77;
          }
          v82 = v117;
          v69->y = a5 + v58 + v77 - v49[15] / 2;
          v83 = a6[1] + v110;
          v84 = *a6 + v82;
          v117 = v84;
          v110 = v83;
          if ( v118 )
          {
            v23 = 16 * v84;
          }
          else
          {
            *(_QWORD *)&v106 = COERCE_UNSIGNED_INT((float)v84);
            v109 = 0;
            *(float *)&v106 = *(float *)&v106 * v11;
            bFToL(v106, &v109, 0);
            v83 = v110;
            v23 = v109;
          }
          if ( v119 )
          {
            v21 = 16 * v83;
          }
          else
          {
            *(_QWORD *)&v107 = COERCE_UNSIGNED_INT((float)v83);
            v109 = 0;
            *(float *)&v107 = *(float *)&v107 * v18;
            bFToL(v107, &v109, 0);
            v21 = v109;
          }
          v27 = v69 + 3;
          a6 += 2;
          v28 = v128;
          v29 = v111;
          ++v120;
          p_ptl = v27;
          *(_QWORD *)&v112 = __PAIR64__(v26, v20);
          *((_QWORD *)&v112 + 1) = __PAIR64__(v128, v111);
        }
        while ( v120 < *(_DWORD *)this );
      }
      v85 = (__m128i)COERCE_UNSIGNED_INT((float)v23);
      LODWORD(v86) = 0;
      v87 = v85;
      *(float *)v87.m128i_i32 = *(float *)v85.m128i_i32 * *(float *)v14.m128i_i32;
      v88 = _mm_cvtsi128_si32(v87);
      v89 = (unsigned __int8)(v88 >> 23);
      if ( v89 <= 0x9E )
      {
        v90 = v88 & 0x7FFFFFLL | 0x800000;
        v91 = v89 < 0x76 ? v90 >> (118 - (unsigned __int8)v89) : v90 << ((unsigned __int8)v89 - 118);
        v86 = (v91 + 0x80000000LL) >> 32;
        if ( v88 < 0 )
          LODWORD(v86) = -(int)v86;
      }
      LODWORD(v92) = 0;
      *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 * (float)v21;
      v93 = _mm_cvtsi128_si32(v16);
      v94 = (unsigned __int8)(v93 >> 23);
      if ( v94 <= 0x9E )
      {
        v95 = v93 & 0x7FFFFFLL | 0x800000;
        v96 = v94 < 0x76 ? v95 >> (118 - (unsigned __int8)v94) : v95 << ((unsigned __int8)v94 - 118);
        v92 = (v96 + 0x80000000LL) >> 32;
        if ( v93 < 0 )
          LODWORD(v92) = -(int)v92;
      }
      *(float *)v15.m128i_i32 = *(float *)v15.m128i_i32 * *(float *)v85.m128i_i32;
      *((_DWORD *)this + 20) = v92 + v86;
      LODWORD(v86) = 0;
      v97 = _mm_cvtsi128_si32(v15);
      v98 = (unsigned __int8)(v97 >> 23);
      if ( v98 <= 0x9E )
      {
        v99 = v97 & 0x7FFFFFLL | 0x800000;
        v100 = v98 < 0x76 ? v99 >> (118 - (unsigned __int8)v98) : v99 << ((unsigned __int8)v98 - 118);
        v86 = (v100 + 0x80000000LL) >> 32;
        if ( v97 < 0 )
          LODWORD(v86) = -(int)v86;
      }
      *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 * (float)v21;
      v101 = _mm_cvtsi128_si32(v17);
      v102 = (unsigned __int8)(v101 >> 23);
      if ( v102 <= 0x9E )
      {
        v103 = v101 & 0x7FFFFFLL | 0x800000;
        if ( v102 < 0x76 )
          v104 = v103 >> (118 - (unsigned __int8)v102);
        else
          v104 = v103 << ((unsigned __int8)v102 - 118);
        v6 = (unsigned __int64)(v104 + 0x80000000LL) >> 32;
        if ( v101 < 0 )
          v6 = -v6;
      }
      v105 = v112;
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 21) = v6 + v86;
      *((_OWORD *)this + 6) = v105;
    }
  }
}
