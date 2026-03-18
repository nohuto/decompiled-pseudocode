/*
 * XREFs of ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510
 * Callers:
 *     NtGdiTransparentBlt @ 0x14016B240 (NtGdiTransparentBlt.c)
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x14007813C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400ABEE8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 *     ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x1401589A0 (-vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x14016D620 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14016D630 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x1401B7E00 (-vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1401C7728 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1401C7780 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1402524D8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140337F40 (-vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x140338160 (-vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403381E0 (-vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x140338270 (-vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepTransparentBlt(
        struct XDCOBJ *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        struct XDCOBJ *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  int left; // esi
  int top; // r14d
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  LONG right; // edx
  LONG bottom; // r8d
  int v21; // eax
  __int64 v22; // r12
  EPOINTFIX *v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rsi
  BOOL v26; // r9d
  int v27; // edx
  int v28; // r8d
  int v29; // eax
  __int32 v30; // eax
  __int32 v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r15
  struct SURFACE *v36; // rsi
  __int64 v37; // r14
  Gre::Base *v38; // r15
  unsigned int v39; // edi
  struct BLTINFO *v40; // rbx
  struct SURFACE *v42; // r13
  int v43; // ebx
  int v44; // r10d
  int v45; // r9d
  __int64 v46; // r11
  int v47; // edx
  LONG v48; // r8d
  __int64 v49; // rdi
  __int64 v50; // rdi
  bool v51; // cc
  int v52; // eax
  int v53; // ebx
  __int64 v54; // rbx
  __int64 v55; // rsi
  struct REGION *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  stretch *v60; // r12
  int v61; // r13d
  Gre::Base *v62; // rdi
  int inited; // eax
  struct SURFACE *v64; // rsi
  XDCOBJ *v65; // r14
  XDCOBJ *v66; // rbx
  BOOL (__stdcall *v67)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  char *v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // r8
  ULONG v71; // ecx
  stretch *v72; // rcx
  struct SURFACE *v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // r11
  struct BLTINFO *v76; // rdi
  FIX x; // r8d
  FIX v78; // edi
  FIX v79; // r11d
  int v80; // r9d
  FIX y; // r10d
  int v82; // r11d
  int v83; // edi
  __int64 v84; // rcx
  int v85; // r8d
  int v86; // edx
  ULONG v87; // ecx
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  struct BLTINFO *v91; // rdi
  __int64 v92; // rbx
  LONG v93; // ecx
  int v94; // r8d
  int v95; // eax
  __int64 *v96; // rax
  bool v97; // zf
  BOOL (__stdcall *v98)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // edx
  __int64 v103; // rdi
  unsigned int v104; // edx
  int *v105; // rdi
  unsigned int v106; // edx
  __int64 k; // rcx
  _BYTE *v108; // r8
  _BYTE *j; // r9
  _BYTE *v110; // rdx
  unsigned __int64 v111; // rcx
  _BYTE *v112; // rdx
  unsigned int v113; // edx
  _WORD *v114; // rdi
  __int64 i; // rcx
  size_t v116; // r8
  int v117; // edx
  void *v118; // rcx
  SURFOBJ *v119; // rcx
  int v120; // eax
  int v122; // [rsp+68h] [rbp-A0h]
  int NearestIndexFromColorref; // [rsp+68h] [rbp-A0h]
  Gre::Base *v124; // [rsp+78h] [rbp-90h] BYREF
  __int64 v125; // [rsp+80h] [rbp-88h] BYREF
  XDCOBJ *v126; // [rsp+88h] [rbp-80h]
  struct SURFACE *v127; // [rsp+90h] [rbp-78h]
  XDCOBJ *v128; // [rsp+98h] [rbp-70h]
  stretch *v129; // [rsp+A0h] [rbp-68h] BYREF
  char v130; // [rsp+A8h] [rbp-60h]
  int v131; // [rsp+ACh] [rbp-5Ch]
  __int64 v132; // [rsp+B0h] [rbp-58h] BYREF
  char v133; // [rsp+B8h] [rbp-50h]
  int v134; // [rsp+BCh] [rbp-4Ch]
  __int64 v135; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v136[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v137; // [rsp+D8h] [rbp-30h]
  __int64 v138; // [rsp+E0h] [rbp-28h]
  __int64 v139; // [rsp+E8h] [rbp-20h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v140; // [rsp+F0h] [rbp-18h]
  _DWORD v141[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v142; // [rsp+108h] [rbp+0h]
  int v143; // [rsp+110h] [rbp+8h]
  int v144; // [rsp+114h] [rbp+Ch]
  _BYTE v145[72]; // [rsp+118h] [rbp+10h] BYREF
  int v146; // [rsp+160h] [rbp+58h]
  __m128i v147; // [rsp+278h] [rbp+170h] BYREF
  RECTL prcl; // [rsp+288h] [rbp+180h] BYREF
  RECTL v149; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v150[4]; // [rsp+2A8h] [rbp+1A0h] BYREF
  RECTL v151; // [rsp+2ACh] [rbp+1A4h] BYREF
  __int64 v152; // [rsp+2E0h] [rbp+1D8h]
  __int64 v153; // [rsp+2F8h] [rbp+1F0h]
  int v154; // [rsp+300h] [rbp+1F8h]
  int v155; // [rsp+328h] [rbp+220h]
  __int64 v156; // [rsp+338h] [rbp+230h]
  struct _POINTFIX v157; // [rsp+348h] [rbp+240h] BYREF
  FIX v158; // [rsp+350h] [rbp+248h]
  int v159; // [rsp+354h] [rbp+24Ch]
  int v160; // [rsp+358h] [rbp+250h]
  FIX v161; // [rsp+35Ch] [rbp+254h]
  FIX v162; // [rsp+360h] [rbp+258h]
  int v163; // [rsp+364h] [rbp+25Ch]
  __m128i v164; // [rsp+368h] [rbp+260h] BYREF
  int v165; // [rsp+378h] [rbp+270h]
  int v166; // [rsp+37Ch] [rbp+274h]
  POINTFIX pptfx; // [rsp+388h] [rbp+280h] BYREF
  Gre::Base *v168; // [rsp+390h] [rbp+288h]
  Gre::Base *v169; // [rsp+398h] [rbp+290h]

  left = a7;
  top = a8;
  v126 = a6;
  LODWORD(v125) = a5;
  v128 = a1;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v16 = Gre::Base::Globals(a1);
  v17 = *(_QWORD *)a1;
  v140 = v16;
  if ( (*(_DWORD *)(v17 + 36) & 0x10000) != 0
    || (bSpDwmValidateSurface(v126, a7, a8, a9, a10),
        bSpDwmValidateSurface(a1, a2, a3, a4, v125),
        DC::QuickInitXform(*(_QWORD *)a1, &v135, 516LL),
        DC::QuickInitXform(*(_QWORD *)v126, &v139, 516LL),
        v18 = *(_QWORD *)v126,
        v127 = *(struct SURFACE **)v126,
        (*(_BYTE *)(v139 + 32) & 1) == 0)
    || (*(_DWORD *)(*(_QWORD *)(v18 + 976) + 108LL) & 1) == 0 && (*(float *)v139 < 0.0 || *(float *)(v139 + 12) < 0.0) )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  right = a9 + a7;
  prcl.left = a7;
  bottom = a8 + a10;
  prcl.right = a9 + a7;
  prcl.bottom = a8 + a10;
  prcl.top = a8;
  if ( (*(_BYTE *)(v139 + 32) & 0x43) == 0x43
    || (v21 = bCvtPts1(v139, (__int64)&prcl, 2LL),
        bottom = prcl.bottom,
        right = prcl.right,
        top = prcl.top,
        left = prcl.left,
        v21) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v127 + 122) + 108LL) & 1) != 0 )
    {
      ++left;
      ++right;
      prcl.left = left;
      prcl.right = right;
    }
  }
  if ( left > right )
  {
    prcl.left = right;
    prcl.right = left;
  }
  if ( top > bottom )
  {
    prcl.top = bottom;
    prcl.bottom = top;
  }
  v22 = 4LL;
  v23 = (EPOINTFIX *)&v157;
  v24 = 4LL;
  do
  {
    EPOINTFIX::EPOINTFIX(v23);
    v23 = (EPOINTFIX *)((char *)v23 + 8);
    --v24;
  }
  while ( v24 );
  v25 = *(_QWORD *)a1;
  v26 = (*(_BYTE *)(v135 + 32) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(v25 + 976) + 108LL) & 1) == 0 && (*(float *)v135 < 0.0 || *(float *)(v135 + 12) < 0.0);
  v27 = a2 + a4;
  v28 = a3 + v125;
  LODWORD(v124) = v26;
  if ( v26 )
  {
    v164.m128i_i32[2] = a2 + a4;
    v166 = a3 + v125;
    v164.m128i_i64[0] = __PAIR64__(a3, a2);
    v164.m128i_i32[3] = a3;
    v165 = a2;
    EXFORMOBJ::bXform((EXFORMOBJ *)&v135, (const struct _POINTL *)&v164, &v157, 3uLL);
    x = v157.x;
    v78 = v158;
    if ( (*(_BYTE *)(v135 + 32) & 1) != 0 )
    {
      if ( v157.x > v158 )
      {
        x = v157.x + 16;
        v78 = v158 + 16;
        v160 += 16;
        v157.x += 16;
        v158 += 16;
      }
      y = v157.y;
      v79 = v161;
      v80 = v159;
      if ( v157.y > v161 )
      {
        y = v157.y + 16;
        v80 = v159 + 16;
        v79 = v161 + 16;
        v157.y += 16;
        v161 += 16;
        v159 += 16;
      }
    }
    else
    {
      v79 = v161;
      v80 = v159;
      y = v157.y;
    }
    v162 = v78 + v160 - x;
    v163 = v79 + v80 - y;
    v82 = (v78 <= v162) ^ (v78 > x);
    v83 = (v80 <= v163) ^ (v80 > y);
    if ( *(&v157.x + 2 * v82) > *(&v157.x + 2 * (v82 ^ 3LL)) )
      v82 ^= 3u;
    if ( *(&v157.y + 2 * v83) > *(&v157.y + 2 * (v83 ^ 3LL)) )
      v83 ^= 3u;
    v84 = v83 ^ 3LL;
    a3 = (*(&v157.y + 2 * v83) + 15) >> 4;
    a2 = (*(&v157.x + 2 * v82) + 15) >> 4;
    v85 = *(&v157.y + 2 * v84) + 15;
    v86 = *(&v157.x + 2 * (v82 ^ 3LL)) + 15;
    v147.m128i_i32[0] = a2;
    v27 = v86 >> 4;
    v28 = v85 >> 4;
    v147.m128i_i64[1] = __PAIR64__(v28, v27);
    goto LABEL_34;
  }
  v147.m128i_i64[0] = __PAIR64__(a3, a2);
  v147.m128i_i32[2] = a2 + a4;
  v147.m128i_i32[3] = a3 + v125;
  if ( (*(_BYTE *)(v135 + 32) & 0x43) == 0x43
    || (v29 = bCvtPts1(v135, (__int64)&v147, 2LL),
        v28 = v147.m128i_i32[3],
        v27 = v147.m128i_i32[2],
        a3 = v147.m128i_i32[1],
        a2 = v147.m128i_i32[0],
        v29) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v25 + 976) + 108LL) & 1) != 0 )
    {
      ++a2;
      ++v27;
      v147.m128i_i32[0] = a2;
      v147.m128i_i32[2] = v27;
    }
  }
  if ( a2 > v27 )
  {
    v30 = a2;
    v147.m128i_i32[0] = v27;
    a2 = v27;
    v147.m128i_i32[2] = v30;
    v27 = v30;
  }
  if ( a3 > v28 )
  {
    v31 = a3;
    a3 = v28;
    v28 = v31;
    v147.m128i_i32[3] = v31;
LABEL_34:
    v147.m128i_i32[1] = a3;
  }
  if ( a3 == v28 || a2 == v27 )
  {
    v39 = 1;
LABEL_44:
    v40 = (struct BLTINFO *)&v164;
    do
    {
      v40 = (struct BLTINFO *)((char *)v40 - 8);
      vSrcCopyDummy(v40);
      --v22;
    }
    while ( v22 );
    return v39;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, (struct ERECTL *)&v147);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v145);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v145, (struct _ERESOURCE ***)a1, v126) )
  {
    XDCOBJ::bFullScreen(v126);
    v120 = XDCOBJ::bFullScreen(a1);
    v39 = v32 | v120;
    goto LABEL_43;
  }
  v35 = *(_QWORD *)a1;
  v36 = *(struct SURFACE **)(v35 + 496);
  v127 = v36;
  if ( !v36
    || (v37 = *((_QWORD *)v36 + 16), v38 = *(Gre::Base **)(v35 + 88), !*(_QWORD *)(*(_QWORD *)v126 + 496LL))
    || (v42 = XDCOBJ::pSurfaceEff(v126)) == 0LL )
  {
    v39 = 1;
LABEL_43:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v145, v32, v33, v34);
    goto LABEL_44;
  }
  if ( (v146 & 0x400000) == 0 || !(unsigned int)DestSurfaceAccessCheck(v36) )
  {
    v71 = 6;
LABEL_77:
    EngSetLastError(v71);
    v39 = 0;
    goto LABEL_43;
  }
  v43 = 0;
  v44 = prcl.bottom;
  v45 = prcl.right;
  v46 = *(_QWORD *)v128;
  v47 = prcl.top;
  v48 = prcl.left;
  v164 = v147;
  v49 = *(_DWORD *)(v46 + 40) & 1LL;
  LODWORD(v125) = *(_DWORD *)(v46 + 8 * v49 + 1016);
  v122 = _mm_cvtsi128_si32(v147);
  if ( (unsigned __int64)((int)v125 + (__int64)v122 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_51;
  v36 = v127;
  if ( (unsigned __int64)((int)v125 + (__int64)v147.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_51;
  v72 = (stretch *)*(int *)(v46 + 8 * v49 + 1020);
  v129 = v72;
  if ( (unsigned __int64)v72 + v147.m128i_i32[1] + 0x80000000LL > 0xFFFFFFFF )
    goto LABEL_51;
  v36 = v127;
  if ( (unsigned __int64)v129 + v147.m128i_i32[3] + 0x80000000LL > 0xFFFFFFFF )
    goto LABEL_51;
  v147.m128i_i32[0] = v125 + v122;
  v147.m128i_i32[2] += *(_DWORD *)(v46 + 8 * v49 + 1016);
  v147.m128i_i32[1] += *(_DWORD *)(v46 + 8 * v49 + 1020);
  v147.m128i_i32[3] += *(_DWORD *)(v46 + 8 * v49 + 1020);
  v73 = *(struct SURFACE **)v126;
  v74 = *(_DWORD *)(*(_QWORD *)v126 + 40LL) & 1LL;
  LODWORD(v125) = *(_DWORD *)(*(_QWORD *)v126 + 8 * v74 + 1016);
  v36 = v127;
  if ( (unsigned __int64)(prcl.left + (__int64)(int)v125 + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned __int64)((int)v125 + (__int64)prcl.right + 0x80000000LL) > 0xFFFFFFFF
    || (v75 = *((int *)v73 + 2 * v74 + 255), v36 = v127, (unsigned __int64)(v75 + prcl.top + 0x80000000LL) > 0xFFFFFFFF)
    || (unsigned __int64)(v75 + prcl.bottom + 0x80000000LL) > 0xFFFFFFFF )
  {
LABEL_51:
    v43 = 1;
  }
  else
  {
    v48 = v125 + prcl.left;
    prcl.left += v125;
    v45 = *((_DWORD *)v73 + 2 * v74 + 254) + prcl.right;
    prcl.right = v45;
    v47 = *((_DWORD *)v73 + 2 * v74 + 255) + prcl.top;
    prcl.top = v47;
    v44 = *((_DWORD *)v73 + 2 * v74 + 255) + prcl.bottom;
    prcl.bottom = v44;
  }
  v50 = *((_QWORD *)v42 + 6);
  if ( *((_WORD *)v42 + 50) == 1 && v50 && (*(_DWORD *)(v50 + 40) & 0x20000) != 0 )
  {
    v93 = *(_DWORD *)(v50 + 2576);
    if ( v48 < v93 )
      goto LABEL_58;
    v94 = *(_DWORD *)(v50 + 2580);
    if ( v47 < v94 || v45 > *((_DWORD *)v42 + 14) + v93 )
      goto LABEL_58;
    v51 = v44 <= v94 + *((_DWORD *)v42 + 15);
  }
  else
  {
    if ( v48 < 0 || v47 < 0 || v45 > *((_DWORD *)v42 + 14) )
      goto LABEL_58;
    v51 = v44 <= *((_DWORD *)v42 + 15);
  }
  if ( v51 )
  {
    v52 = 0;
    goto LABEL_59;
  }
LABEL_58:
  v52 = 1;
LABEL_59:
  v53 = v52 | v43;
  if ( v42 == v36 )
  {
    v149 = prcl;
    ERECTL::operator*=(&v149, &v147);
    if ( !ERECTL::bEmpty((ERECTL *)&v149) )
      v53 = 1;
  }
  if ( v53 )
  {
    v71 = 87;
    goto LABEL_77;
  }
  v54 = *((_QWORD *)v42 + 16);
  v55 = *(_QWORD *)(*(_QWORD *)v126 + 88LL);
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v54, v55, a11, 1LL);
  v56 = XDCOBJ::prgnEffRao((DC **)v128);
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0;
  v156 = 0LL;
  v155 = 1;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v150, v56, (const struct ERECTL *)&v147, 0);
  if ( !ERECTL::bEmpty((ERECTL *)&v151) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v128 + 36LL) & 0xE0) != 0 )
    {
      v149 = v151;
      XDCOBJ::vAccumulateTight(v128, v128, (__m128i *)&v149);
    }
    v129 = 0LL;
    v60 = v42;
    v130 = 0;
    v131 = 0;
    if ( (GetAppCompatFlags2(1024LL) & 0x8000000) == 0
      || (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v128 + 976LL) + 108LL), (v95 & 1) == 0)
      || (v95 & 9) == 9 )
    {
LABEL_65:
      v132 = 0LL;
      v133 = 0;
      v134 = 0;
      if ( !(_DWORD)v124 )
      {
        v61 = NearestIndexFromColorref;
        goto LABEL_67;
      }
      v141[1] = v147.m128i_i32[2] - v147.m128i_i32[0];
      v141[2] = v147.m128i_i32[3] - v147.m128i_i32[1];
      v141[0] = *((_DWORD *)v60 + 24);
      v143 = *((_DWORD *)v60 + 28) & 0x40000;
      v141[3] = 0;
      v144 = 0;
      v142 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v132, (struct _DEVBITMAPINFO *)v141, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
      {
        EngSetLastError(8u);
        SURFMEM::~SURFMEM((SURFMEM *)&v132);
        SURFMEM::~SURFMEM((SURFMEM *)&v129);
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v145, v88, v89, v90);
        v91 = (struct BLTINFO *)&v164;
        v92 = 4LL;
        do
        {
          v91 = (struct BLTINFO *)((char *)v91 - 8);
          vSrcCopyDummy(v91);
          --v92;
        }
        while ( v92 );
        return 0LL;
      }
      v103 = v132;
      v104 = *(_DWORD *)(v132 + 64);
      if ( *((_DWORD *)v60 + 24) == 1 )
      {
        v61 = NearestIndexFromColorref;
        v116 = *(unsigned int *)(v132 + 64);
        v118 = *(void **)(v132 + 72);
        if ( NearestIndexFromColorref )
          v117 = 255;
        else
          v117 = 0;
      }
      else
      {
        if ( *((_DWORD *)v60 + 24) == 2 )
        {
          v61 = NearestIndexFromColorref;
          v116 = *(unsigned int *)(v132 + 64);
          v117 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
        }
        else
        {
          if ( *((_DWORD *)v60 + 24) != 3 )
          {
            switch ( *((_DWORD *)v60 + 24) )
            {
              case 4:
                v113 = v104 >> 1;
                v114 = *(_WORD **)(v132 + 72);
                if ( v113 )
                {
                  v61 = NearestIndexFromColorref;
                  for ( i = v113; i; --i )
                    *v114++ = NearestIndexFromColorref;
LABEL_165:
                  `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                  LODWORD(v124) = v157.x - 16 * v164.m128i_i32[0];
                  HIDWORD(v124) = v157.y - 16 * v164.m128i_i32[1];
                  pptfx = (POINTFIX)v124;
                  LODWORD(v124) = v158 - 16 * v164.m128i_i32[0];
                  HIDWORD(v124) = v159 - 16 * v164.m128i_i32[1];
                  v168 = v124;
                  LODWORD(v124) = v160 - 16 * v164.m128i_i32[0];
                  HIDWORD(v124) = v161 - 16 * v164.m128i_i32[1];
                  v169 = v124;
                  if ( v132 )
                    v119 = (SURFOBJ *)(v132 + 24);
                  else
                    v119 = 0LL;
                  EngPlgBlt(
                    v119,
                    (SURFOBJ *)((char *)v60 + 24),
                    0LL,
                    0LL,
                    (XLATEOBJ *)((char *)v140 + 4664),
                    0LL,
                    0LL,
                    &pptfx,
                    &prcl,
                    0LL,
                    3u);
                  v60 = (stretch *)v132;
                  prcl.right = v147.m128i_i32[2] - v147.m128i_i32[0];
                  prcl.bottom = v147.m128i_i32[3] - v147.m128i_i32[1];
                  *(_QWORD *)&prcl.left = 0LL;
                  `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_67:
                  v62 = 0LL;
                  v124 = 0LL;
                  if ( *(_QWORD *)(*(_QWORD *)v126 + 496LL) == *(_QWORD *)(*(_QWORD *)v128 + 496LL)
                    || (inited = EXLATEOBJ::bInitXlateObj(
                                   (Gre::Base *)&v124,
                                   0LL,
                                   0,
                                   v54,
                                   v37,
                                   v55,
                                   v38,
                                   *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v128 + 976LL) + 184LL),
                                   *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v128 + 976LL) + 176LL),
                                   -1,
                                   0),
                        v62 = v124,
                        inited) )
                  {
                    v64 = v127;
                    v65 = v126;
                    v66 = v128;
                    ++*((_DWORD *)v127 + 23);
                    if ( *(_QWORD *)(*(_QWORD *)v66 + 48LL) == *(_QWORD *)(*(_QWORD *)v65 + 48LL)
                      || (unsigned int)XDCOBJ::bRedirHooked(v66)
                      && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v66 + 48LL) + 3512LL) == *(_QWORD *)(*(_QWORD *)v65 + 48LL) )
                    {
                      if ( (*((_DWORD *)v64 + 28) & 0x8000) != 0 )
                        v67 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v64 + 6) + 3272LL);
                      else
                        v67 = EngTransparentBlt;
                      v68 = (char *)v60 + 24;
                      if ( !v60 )
                        v68 = 0LL;
                      v39 = ((__int64 (__fastcall *)(char *, char *, _BYTE *, Gre::Base *, __m128i *, RECTL *, int, _DWORD))v67)(
                              (char *)v64 + 24,
                              v68,
                              v150,
                              v62,
                              &v147,
                              &prcl,
                              v61,
                              0);
                      goto LABEL_75;
                    }
                    v87 = 87;
                  }
                  else
                  {
                    v87 = 6;
                  }
                  EngSetLastError(v87);
                  v39 = 0;
LABEL_75:
                  EXLATEOBJ::vAltUnlock(&v124, v69, v70);
                  SURFMEM::~SURFMEM((SURFMEM *)&v132);
                  SURFMEM::~SURFMEM((SURFMEM *)&v129);
                  v22 = 4LL;
                  goto LABEL_43;
                }
                break;
              case 5:
                v108 = *(_BYTE **)(v132 + 80);
                v61 = NearestIndexFromColorref;
                for ( j = &v108[*(_DWORD *)(v132 + 60) * *(_DWORD *)(v132 + 88)]; v108 != j; v108 += *(int *)(v103 + 88) )
                {
                  v110 = v108;
                  v111 = (unsigned __int64)&v108[3 * *(_DWORD *)(v103 + 56) - 2];
                  if ( (unsigned __int64)v108 < v111 )
                  {
                    do
                    {
                      *v110 = NearestIndexFromColorref;
                      v112 = v110 + 1;
                      *v112++ = BYTE1(NearestIndexFromColorref);
                      *v112 = BYTE2(NearestIndexFromColorref);
                      v110 = v112 + 1;
                    }
                    while ( (unsigned __int64)v110 < v111 );
                    v103 = v132;
                  }
                }
                goto LABEL_165;
              case 6:
                v105 = *(int **)(v132 + 72);
                v106 = v104 >> 2;
                if ( v106 )
                {
                  v61 = NearestIndexFromColorref;
                  for ( k = v106; k; --k )
                    *v105++ = NearestIndexFromColorref;
                  goto LABEL_165;
                }
                break;
            }
            v61 = NearestIndexFromColorref;
            goto LABEL_165;
          }
          v61 = NearestIndexFromColorref;
          v116 = *(unsigned int *)(v132 + 64);
          v117 = NearestIndexFromColorref;
        }
        v118 = *(void **)(v132 + 72);
      }
      memset_0(v118, v117, v116);
      goto LABEL_165;
    }
    v136[1] = *((_DWORD *)v42 + 14);
    v136[2] = *((_DWORD *)v42 + 15);
    v136[0] = *((_DWORD *)v42 + 24);
    v96 = (__int64 *)*((_QWORD *)v42 + 16);
    v136[3] = 0;
    v138 = 0LL;
    if ( v96 )
      v137 = *v96;
    else
      v137 = 0LL;
    SURFMEM::bCreateDIB((SURFMEM *)&v129, (struct _DEVBITMAPINFO *)v136, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
    if ( v129 )
    {
      v97 = (*((_DWORD *)v42 + 28) & 0x400) == 0;
      *(_QWORD *)&v149.right = *((_QWORD *)v42 + 7);
      *(_QWORD *)&v149.left = 0LL;
      v125 = 0LL;
      v98 = v97
          ? EngCopyBits
          : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v50 + 2832);
      if ( ((unsigned int (__fastcall *)(char *, char *, _QWORD, _QWORD, RECTL *, __int64 *))v98)(
             (char *)v129 + 24,
             (char *)v42 + 24,
             0LL,
             0LL,
             &v149,
             &v125) )
      {
        v102 = *((_DWORD *)v129 + 24);
        if ( (unsigned int)(v102 - 1) <= 5 )
        {
          ((void (*)(void))(&stretch::apfnMirror)[v102])();
          v60 = v129;
          goto LABEL_65;
        }
      }
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v129);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v145, v99, v100, v101);
    `vector destructor iterator'(&v157, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
    return 0LL;
  }
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v145, v57, v58, v59);
  v76 = (struct BLTINFO *)&v164;
  do
  {
    v76 = (struct BLTINFO *)((char *)v76 - 8);
    vSrcCopyDummy(v76);
    --v22;
  }
  while ( v22 );
  return 1LL;
}
