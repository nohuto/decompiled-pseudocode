/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14006BEDC
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x14006AB54 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400ABA6C (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x14008011C (-pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x140080170 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct SURFACE **a3, char a4)
{
  const struct ERECTL *v4; // rdi
  int v6; // eax
  int v8; // ecx
  int v11; // eax
  int v12; // ecx
  __int64 v13; // r12
  DC *v14; // rax
  int v16; // r14d
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  DC *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  DC *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int32 *v28; // r14
  __int32 v29; // edx
  int v30; // eax
  struct SURFACE *v31; // rdi
  struct SURFACE *v32; // rax
  int v33; // r9d
  char v34; // cl
  __int64 v35; // rcx
  int v36; // r11d
  int v37; // r10d
  __int64 v38; // rax
  int v39; // r8d
  __int32 v40; // r9d
  int v41; // edx
  __int32 v42; // r10d
  __int32 v43; // eax
  __int64 v44; // rcx
  int v45; // r11d
  int v46; // r8d
  __int32 v47; // eax
  int v48; // eax
  int v49; // eax
  struct REGION *v50; // rax
  __m128i v51; // xmm1
  int v52; // edx
  int v53; // r8d
  int v54; // eax
  int v55; // eax
  int v56; // r13d
  __int64 v57; // rsi
  BOOL (__stdcall *v58)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v59; // r9
  __int64 v60; // rdx
  __m128i *v61; // rax
  _BYTE *v62; // r8
  struct REGION *v63; // rax
  int v64; // ecx
  int v65; // ecx
  int v66; // edx
  int v67; // r8d
  SURFACE *v68; // rbx
  int (*v69)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v70; // edi
  __int64 v71; // rsi
  int (*v72)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r14
  struct SURFACE *v73; // rax
  __int64 v74; // r8
  int (*v75)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  int (*v78)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v79; // rbx
  int (*v80)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rdi
  struct SURFACE *v81; // rax
  __int64 v82; // r11
  struct ECLIPOBJ *v83; // rdx
  int v84; // r9d
  int v85; // r10d
  __int64 v86; // rdi
  int v87; // r11d
  struct ECLIPOBJ *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  int v92; // r9d
  int v93; // r10d
  __int64 v94; // rax
  int v95; // r8d
  int v96; // edx
  __int64 v97; // rcx
  struct REGION *v98; // rax
  __m128i v99; // xmm1
  int v100; // edx
  __int32 v101; // r8d
  __int32 v102; // ecx
  __int32 v103; // edx
  __int32 v104; // eax
  __int32 v105; // eax
  int v106; // esi
  __int64 v107; // rdi
  int (*v108)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rbx
  struct SURFACE *v109; // rax
  __int64 v110; // r11
  int v111; // r9d
  int v112; // ecx
  __int64 v113; // r10
  struct ECLIPOBJ *v114; // rdx
  int v115; // ecx
  int v116; // ecx
  int v117; // r8d
  int v118; // r9d
  __int64 v119; // r10
  int v120; // edi
  int v121; // r11d
  __int64 v122; // rax
  __m128i *v123; // [rsp+28h] [rbp-D8h]
  char *v124; // [rsp+30h] [rbp-D0h]
  char *v125; // [rsp+38h] [rbp-C8h]
  __int64 v126; // [rsp+40h] [rbp-C0h]
  char *v127; // [rsp+48h] [rbp-B8h]
  int v128; // [rsp+50h] [rbp-B0h]
  int v129; // [rsp+60h] [rbp-A0h]
  __m128i v130; // [rsp+68h] [rbp-98h] BYREF
  __m128i v131; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v132[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v133; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v134; // [rsp+C8h] [rbp-38h]
  __int64 v135; // [rsp+E0h] [rbp-20h]
  int v136; // [rsp+E8h] [rbp-18h]
  int v137; // [rsp+110h] [rbp+10h]
  __int64 v138; // [rsp+120h] [rbp+20h]
  _BYTE v139[4]; // [rsp+130h] [rbp+30h] BYREF
  __m128i v140; // [rsp+134h] [rbp+34h] BYREF
  __int64 v141; // [rsp+168h] [rbp+68h]
  __int64 v142; // [rsp+180h] [rbp+80h]
  int v143; // [rsp+188h] [rbp+88h]
  int v144; // [rsp+1B0h] [rbp+B0h]
  __int64 v145; // [rsp+1C0h] [rbp+C0h]

  v4 = (BLTRECORD *)((char *)this + 128);
  v6 = *((_DWORD *)this + 34);
  v8 = *((_DWORD *)this + 32);
  if ( v8 > v6 )
  {
    *(_DWORD *)v4 = v6;
    *((_DWORD *)v4 + 2) = v8;
  }
  v11 = *((_DWORD *)v4 + 3);
  v12 = *((_DWORD *)v4 + 1);
  if ( v12 > v11 )
  {
    *((_DWORD *)v4 + 1) = v11;
    *((_DWORD *)v4 + 3) = v12;
  }
  v13 = 0LL;
  if ( !(unsigned int)DC::bTightenRao(*a2) )
    return 0LL;
  v14 = *a2;
  if ( !*((_QWORD *)*a2 + 62) )
    return 1LL;
  v16 = a4 & 0xD4;
  if ( v16 )
  {
    if ( !*a3 || !*((_QWORD *)*a3 + 62) )
      return 1LL;
  }
  v17 = *((_DWORD *)v14 + 9);
  if ( (v17 & 0xE0) != 0 )
  {
    if ( (v17 & 0x20) != 0 )
    {
      if ( *(_DWORD *)v4 < *((_DWORD *)v14 + 266) )
        *((_DWORD *)v14 + 266) = *(_DWORD *)v4;
      v18 = *((_DWORD *)v4 + 1);
      if ( v18 < *((_DWORD *)v14 + 267) )
        *((_DWORD *)v14 + 267) = v18;
      v19 = *((_DWORD *)v4 + 2);
      if ( v19 > *((_DWORD *)v14 + 268) )
        *((_DWORD *)v14 + 268) = v19;
      v20 = *((_DWORD *)v4 + 3);
      if ( v20 > *((_DWORD *)v14 + 269) )
        *((_DWORD *)v14 + 269) = v20;
    }
    v21 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x80u) != 0 )
    {
      if ( *(_DWORD *)v4 < *((_DWORD *)v21 + 274) )
        *((_DWORD *)v21 + 274) = *(_DWORD *)v4;
      v22 = *((_DWORD *)v4 + 1);
      if ( v22 < *((_DWORD *)v21 + 275) )
        *((_DWORD *)v21 + 275) = v22;
      v23 = *((_DWORD *)v4 + 2);
      if ( v23 > *((_DWORD *)v21 + 276) )
        *((_DWORD *)v21 + 276) = v23;
      v24 = *((_DWORD *)v4 + 3);
      if ( v24 > *((_DWORD *)v21 + 277) )
        *((_DWORD *)v21 + 277) = v24;
    }
  }
  v25 = *a2;
  v26 = *((_DWORD *)*a2 + 10) & 1;
  *(_DWORD *)v4 += *((_DWORD *)*a2 + 2 * v26 + 254);
  *((_DWORD *)v4 + 2) += *((_DWORD *)v25 + 2 * v26 + 254);
  *((_DWORD *)v4 + 1) += *((_DWORD *)v25 + 2 * v26 + 255);
  *((_DWORD *)v4 + 3) += *((_DWORD *)v25 + 2 * v26 + 255);
  v27 = *(_QWORD *)(*((_QWORD *)this + 6) + 48LL);
  if ( !v16 )
  {
    v63 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
    v134 = 0LL;
    v135 = 0LL;
    v136 = 0;
    v137 = 1;
    v138 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v132, v63, v4, 0);
    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v133) )
    {
      if ( *((int *)this + 40) < 0 )
      {
        v64 = *((_DWORD *)this + 42);
        *((_DWORD *)this + 42) = *((_DWORD *)this + 44);
        *((_DWORD *)this + 44) = v64;
      }
      if ( *((int *)this + 41) < 0 )
      {
        v65 = *((_DWORD *)this + 43);
        *((_DWORD *)this + 43) = *((_DWORD *)this + 45);
        *((_DWORD *)this + 45) = v65;
      }
      if ( BLTRECORD::pSurfMskOut(this) )
      {
        v111 = *((_DWORD *)this + 42);
        if ( v111 < 0 )
          goto LABEL_92;
        v112 = *((_DWORD *)this + 43);
        if ( v112 < 0 )
          goto LABEL_92;
        if ( v66 < 0 )
          v66 = -v66;
        v113 = *((_QWORD *)this + 8);
        if ( *(_DWORD *)(v113 + 56) - v111 < v66 )
          goto LABEL_92;
        if ( v67 < 0 )
          v67 = -v67;
        if ( *(_DWORD *)(v113 + 60) - v112 < v67 )
          goto LABEL_92;
        *((_DWORD *)this + 42) = v111 + v133.m128i_i32[0] - *((_DWORD *)this + 32);
        *((_DWORD *)this + 43) = v112 + v133.m128i_i32[1] - *((_DWORD *)this + 33);
      }
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
      {
        v88 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 48);
        if ( ((gajRop3[*((unsigned __int8 *)this + 193)] | gajRop3[(_QWORD)v88]) & 0xE8) == 0
          || (v89 = *((_QWORD *)this + 10)) != 0 && (*(_DWORD *)(v89 + 120) & 0x100) == 0 )
        {
          v130 = v133;
          XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v88, (struct ERECTL *)&v130);
        }
      }
      ++*(_DWORD *)(*((_QWORD *)this + 6) + 92LL);
      v68 = (SURFACE *)*((_QWORD *)this + 6);
      v69 = SURFACE::pfnBitBlt(v68);
      v70 = *((_DWORD *)this + 48);
      v71 = *((_QWORD *)this + 10);
      v72 = v69;
      v73 = BLTRECORD::pSurfMskOut(this);
      v128 = v70;
      v127 = (char *)this + 184;
      v126 = v71;
      v125 = (char *)this + 168;
      v124 = 0LL;
      v123 = (__m128i *)((char *)this + 128);
      v74 = ((unsigned __int64)v73 + 24) & -(__int64)(v73 != 0LL);
      v75 = v72;
      v76 = ((unsigned __int64)v68 + 24) & -(__int64)(v68 != 0LL);
      v77 = 0LL;
      return ((__int64 (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, __m128i *, char *, char *, __int64, char *, int))v75)(
               v76,
               v77,
               v74,
               v132,
               0LL,
               v123,
               v124,
               v125,
               v126,
               v127,
               v128);
    }
    return 1LL;
  }
  v28 = (__int32 *)((char *)this + 160);
  v29 = *((_DWORD *)this + 40);
  if ( v29 >= *((_DWORD *)this + 38) )
    v29 = *((_DWORD *)this + 38);
  v30 = *((_DWORD *)this + 41);
  *v28 = v29;
  if ( v30 >= *((_DWORD *)this + 39) )
    v30 = *((_DWORD *)this + 39);
  *((_DWORD *)this + 41) = v30;
  if ( *((_DWORD *)this + 38) > v29 )
  {
    v115 = *((_DWORD *)this + 42);
    *((_DWORD *)this + 42) = *((_DWORD *)this + 44);
    *((_DWORD *)this + 44) = v115;
  }
  if ( *((_DWORD *)this + 39) > *((_DWORD *)this + 41) )
  {
    v116 = *((_DWORD *)this + 43);
    *((_DWORD *)this + 43) = *((_DWORD *)this + 45);
    *((_DWORD *)this + 45) = v116;
  }
  v31 = a3[13];
  if ( !v31 )
    v31 = XDCOBJ::pSurfaceEff((XDCOBJ *)a3);
  v32 = a2[13];
  if ( !v32 )
    v32 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
  if ( v31 == v32 )
  {
    v91 = *((_QWORD *)this + 7);
    v92 = 0;
    v93 = 0;
    v94 = *(_QWORD *)(v91 + 48);
    if ( v94 && v91 == *(_QWORD *)(v94 + 2544) && _bittest((const signed __int32 *)(v94 + 40), 0x11u) )
    {
      v92 = *(_DWORD *)(v94 + 2576);
      v93 = *(_DWORD *)(v94 + 2580);
    }
    v95 = *((_DWORD *)this + 32) - *((_DWORD *)*a3 + 2 * (*((_DWORD *)*a3 + 10) & 1) + 254) - *v28;
    *((_DWORD *)this + 38) = v95;
    v96 = *((_DWORD *)this + 33) - *((_DWORD *)*a3 + 2 * (*((_DWORD *)*a3 + 10) & 1) + 255) - *((_DWORD *)this + 41);
    v131.m128i_i32[0] = v95 + v92;
    *((_DWORD *)this + 39) = v96;
    v97 = *((_QWORD *)this + 6);
    v131.m128i_i32[1] = v96 + v93;
    v131.m128i_i32[2] = v92 + v95 + *(_DWORD *)(v97 + 56);
    v131.m128i_i32[3] = v93 + v96 + *(_DWORD *)(v97 + 60);
    ERECTL::operator*=(&v131, (char *)this + 128);
    v98 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
    v134 = 0LL;
    v135 = 0LL;
    v136 = 0;
    v137 = 1;
    v138 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v132, v98, (const struct ERECTL *)&v131, 0);
    v99 = v133;
    v131 = v133;
    if ( _mm_cvtsi128_si32(v133) == _mm_cvtsi128_si32(_mm_srli_si128(v133, 8))
      || v133.m128i_i32[1] == _mm_srli_si128(v133, 8).m128i_i32[1] )
    {
      return 1LL;
    }
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      v117 = *((_DWORD *)this + 42);
      if ( v117 < 0
        || (v118 = *((_DWORD *)this + 43), v118 < 0)
        || (v119 = *((_QWORD *)this + 8),
            v120 = *((_DWORD *)this + 32),
            *(_DWORD *)(v119 + 56) - v117 < *((_DWORD *)this + 34) - v120)
        || (v121 = *((_DWORD *)this + 33), *(_DWORD *)(v119 + 60) - v118 < *((_DWORD *)this + 35) - v121) )
      {
LABEL_92:
        EngSetLastError(0x57u);
        return 0LL;
      }
      *((_DWORD *)this + 42) = v117 + v100 - v120;
      *((_DWORD *)this + 43) = v118 + _mm_cvtsi128_si32(_mm_srli_si128(v99, 4)) - v121;
    }
    if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
    {
      v114 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 48);
      if ( ((gajRop3[*((unsigned __int8 *)this + 193)] | gajRop3[(_QWORD)v114]) & 0xE8) == 0
        || (v122 = *((_QWORD *)this + 10)) != 0 && (*(_DWORD *)(v122 + 120) & 0x100) == 0 )
      {
        v130 = v99;
        XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v114, (struct ERECTL *)&v130);
      }
    }
    v101 = v131.m128i_i32[0];
    v102 = v131.m128i_i32[0] - *((_DWORD *)this + 38);
    v103 = v131.m128i_i32[1];
    v104 = v131.m128i_i32[1];
    *v28 = v102;
    v105 = v104 - *((_DWORD *)this + 39);
    *((_DWORD *)this + 41) = v105;
    if ( v102 < v101 )
      v131.m128i_i32[0] = v102;
    else
      v131.m128i_i32[2] += v102 - v101;
    if ( v105 < v103 )
      v131.m128i_i32[1] = v105;
    else
      v131.m128i_i32[3] += v105 - v103;
    ++*(_DWORD *)(*((_QWORD *)this + 6) + 92LL);
    v106 = *((_DWORD *)this + 48);
    v107 = *((_QWORD *)this + 6);
    if ( v106 == 52428 )
    {
      if ( (*(_DWORD *)(v107 + 112) & 0x400) != 0 )
        v58 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v27 + 2832);
      else
        v58 = EngCopyBits;
      v60 = (*((_QWORD *)this + 7) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 7) >> 64);
      if ( v107 )
        v13 = v107 + 24;
      v61 = &v133;
      v59 = 0LL;
      v62 = v132;
      return ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v58)(
               v13,
               v60,
               v62,
               v59,
               v61,
               (char *)this + 160);
    }
    v108 = SURFACE::pfnBitBlt(*((SURFACE **)this + 6));
    v109 = BLTRECORD::pSurfMskOut(this);
    v128 = v106;
    v127 = (char *)this + 184;
    v126 = v110;
    v125 = (char *)this + 168;
    v124 = (char *)this + 160;
    v74 = ((unsigned __int64)v109 + 24) & -(__int64)(v109 != 0LL);
    v77 = (*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL);
    v76 = (v107 + 24) & -(__int64)(v107 != 0);
    v123 = &v133;
    v75 = v108;
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, __m128i *, char *, char *, __int64, char *, int))v75)(
             v76,
             v77,
             v74,
             v132,
             0LL,
             v123,
             v124,
             v125,
             v126,
             v127,
             v128);
  }
  v33 = *((_DWORD *)*a2 + 9);
  if ( (v33 & 0x200) == 0 || !v27 || (v34 = 1, !_bittest((const signed __int32 *)(v27 + 40), 0x11u)) )
    v34 = 0;
  if ( *((_QWORD *)*a2 + 6) != *((_QWORD *)*a3 + 6)
    && (v33 & 0x4000) == 0
    && !_bittest((const signed __int32 *)*a3 + 9, 0xEu)
    && !v34
    && (*((_WORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff((BLTRECORD::PROXYDCOBJ *)a2) + 50)
     || *((_QWORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff((BLTRECORD::PROXYDCOBJ *)a2) + 3))
    && (*((_WORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff((BLTRECORD::PROXYDCOBJ *)a3) + 50)
     || *((_QWORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff((BLTRECORD::PROXYDCOBJ *)a3) + 3)) )
  {
    goto LABEL_92;
  }
  v35 = *((_QWORD *)this + 7);
  v36 = 0;
  v37 = 0;
  v129 = 0;
  v38 = *(_QWORD *)(v35 + 48);
  if ( v38 && v35 == *(_QWORD *)(v38 + 2544) && _bittest((const signed __int32 *)(v38 + 40), 0x11u) )
  {
    v37 = *(_DWORD *)(v38 + 2580);
    v36 = *(_DWORD *)(v38 + 2576);
    v129 = v37;
  }
  v39 = *((_DWORD *)this + 32) - *((_DWORD *)*a3 + 2 * (*((_DWORD *)*a3 + 10) & 1) + 254) - *v28;
  *((_DWORD *)this + 38) = v39;
  v40 = v36 + v39;
  v41 = *((_DWORD *)this + 33) - *((_DWORD *)*a3 + 2 * (*((_DWORD *)*a3 + 10) & 1) + 255) - *((_DWORD *)this + 41);
  *((_DWORD *)this + 39) = v41;
  v42 = v41 + v37;
  v43 = *((_DWORD *)this + 32);
  v44 = *((_QWORD *)this + 7);
  v131.m128i_i64[0] = __PAIR64__(v42, v40);
  v45 = v39 + *(_DWORD *)(v44 + 56) + v36;
  v131.m128i_i32[2] = v45;
  v46 = v41 + v129 + *(_DWORD *)(v44 + 60);
  if ( v43 > v40 )
    v40 = v43;
  v47 = *((_DWORD *)this + 33);
  v131.m128i_i32[0] = v40;
  if ( v47 > v42 )
    v42 = v47;
  v48 = *((_DWORD *)this + 34);
  v131.m128i_i32[1] = v42;
  if ( v48 < v45 )
    v45 = v48;
  v49 = *((_DWORD *)this + 35);
  v131.m128i_i32[2] = v45;
  if ( v49 < v46 )
    v46 = v49;
  v131.m128i_i32[3] = v46;
  if ( v45 < v40 )
  {
    v131.m128i_i32[0] = v45;
  }
  else
  {
    if ( v46 < v42 )
      v42 = v46;
    v131.m128i_i32[1] = v42;
  }
  v50 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
  v141 = 0LL;
  v142 = 0LL;
  v143 = 0;
  v144 = 1;
  v145 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v139, v50, (const struct ERECTL *)&v131, 0);
  v51 = v140;
  v52 = _mm_cvtsi128_si32(v140);
  v131 = v140;
  if ( v52 == _mm_cvtsi128_si32(_mm_srli_si128(v140, 8)) || v140.m128i_i32[1] == _mm_srli_si128(v140, 8).m128i_i32[1] )
    return 1LL;
  v53 = _mm_cvtsi128_si32(_mm_srli_si128(v140, 4));
  if ( (*((_DWORD *)this + 49) & 0x10000) == 0 || !*((_QWORD *)this + 8) )
    goto LABEL_64;
  v84 = *((_DWORD *)this + 42);
  if ( v84 < 0 )
    goto LABEL_92;
  v85 = *((_DWORD *)this + 43);
  if ( v85 < 0 )
    goto LABEL_92;
  v86 = *((_QWORD *)this + 8);
  if ( *(_DWORD *)(v86 + 56) - v84 < *((_DWORD *)this + 34) - *((_DWORD *)this + 32) )
    goto LABEL_92;
  v87 = *((_DWORD *)this + 33);
  if ( *(_DWORD *)(v86 + 60) - v85 < *((_DWORD *)this + 35) - v87 )
    goto LABEL_92;
  *((_DWORD *)this + 42) = v84 + v52 - *((_DWORD *)this + 32);
  *((_DWORD *)this + 43) = v85 + v53 - v87;
LABEL_64:
  *v28 = v52 - *((_DWORD *)this + 38);
  *((_DWORD *)this + 41) = v53 - *((_DWORD *)this + 39);
  if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
  {
    v83 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 48);
    if ( ((gajRop3[*((unsigned __int8 *)this + 193)] | gajRop3[(_QWORD)v83]) & 0xE8) == 0
      || (v90 = *((_QWORD *)this + 10)) != 0 && (*(_DWORD *)(v90 + 120) & 0x100) == 0 )
    {
      v130 = v51;
      XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v83, (struct ERECTL *)&v130);
    }
  }
  if ( (*((_DWORD *)*a3 + 9) & 1) != 0 )
  {
    v54 = *((_DWORD *)this + 38);
    v131.m128i_i32[0] -= v54;
    v131.m128i_i32[2] -= v54;
    v55 = *((_DWORD *)this + 39);
    v131.m128i_i32[1] -= v55;
    v131.m128i_i32[3] -= v55;
  }
  ++*(_DWORD *)(*((_QWORD *)this + 6) + 92LL);
  v56 = *((_DWORD *)this + 48);
  v57 = *((_QWORD *)this + 6);
  if ( v56 == 52428 )
  {
    if ( (*(_DWORD *)(v57 + 112) & 0x400) != 0 )
      v58 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v27 + 2832);
    else
      v58 = EngCopyBits;
    v59 = *((_QWORD *)this + 9);
    v60 = (*((_QWORD *)this + 7) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 7) >> 64);
    if ( v57 )
      v13 = v57 + 24;
    v61 = &v140;
    v62 = v139;
    return ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v58)(
             v13,
             v60,
             v62,
             v59,
             v61,
             (char *)this + 160);
  }
  v78 = SURFACE::pfnBitBlt(*((SURFACE **)this + 6));
  v79 = *((_QWORD *)this + 9);
  v80 = v78;
  v81 = BLTRECORD::pSurfMskOut(this);
  return ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, _BYTE *, __int64, __m128i *, char *, char *, __int64, char *, int))v80)(
           (v57 + 24) & -(__int64)(v57 != 0),
           (*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL),
           ((unsigned __int64)v81 + 24) & -(__int64)(v81 != 0LL),
           v139,
           v79,
           &v140,
           (char *)this + 160,
           (char *)this + 168,
           v82,
           (char *)this + 184,
           v56);
}
