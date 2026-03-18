/*
 * XREFs of ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1401B4070 (DxgkEngBltViaGDI.c)
 *     NtGdiTransparentBlt @ 0x1401B4C50 (NtGdiTransparentBlt.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x140013B1C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140076238 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x140077B78 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140087A98 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400A02D8 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DEA60 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E810C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngPlgBlt @ 0x1400E89F0 (EngPlgBlt.c)
 *     ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x140143F00 (-vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140152CAC (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x14017C180 (-vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?bRotationOrMirroring@DC@@QEBA_NAEBVEXFORMOBJ@@@Z @ 0x140187804 (-bRotationOrMirroring@DC@@QEBA_NAEBVEXFORMOBJ@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14019EB54 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1401D18A8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x14021AD34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1402FDD6C (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314430 (-vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314650 (-vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403146D0 (-vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314760 (-vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GrepTransparentBlt(
        struct Gre::Base::SESSION_GLOBALS **a1,
        LONG a2,
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
  unsigned int v12; // r12d
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  DC **v17; // r9
  DC *v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // r13d
  FIX x; // r9d
  FIX v22; // r8d
  FIX y; // r11d
  FIX v24; // ebx
  int v25; // r10d
  int v26; // r9d
  int v27; // r8d
  DC *v28; // rcx
  struct Gre::Base::SESSION_GLOBALS *v29; // r15
  struct SURFACE *v30; // rsi
  __int64 v31; // r14
  __int64 v32; // r15
  struct SURFACE *v33; // rbx
  struct Gre::Base::SESSION_GLOBALS *v34; // rcx
  int v35; // esi
  struct SURFACE *v36; // rcx
  __int64 v37; // rdi
  LONG v38; // ecx
  LONG v39; // edx
  int v40; // eax
  int v41; // esi
  BOOL v42; // eax
  __int64 v43; // rbx
  __int64 v44; // rsi
  struct REGION *v45; // rax
  XDCOBJ *v46; // rdx
  int v47; // eax
  __int64 *v48; // rax
  bool v49; // zf
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v51; // edx
  stretch *v52; // rdi
  __int64 v53; // r9
  unsigned int v54; // edx
  unsigned int v55; // edx
  int v56; // eax
  int *v57; // rdi
  __int64 j; // rcx
  _BYTE *v59; // r8
  _BYTE *v60; // r10
  char v61; // r11
  _BYTE *v62; // rdx
  unsigned __int64 v63; // rcx
  char v64; // al
  char v65; // r9
  _BYTE *v66; // rdx
  unsigned int v67; // edx
  __int16 v68; // ax
  _WORD *v69; // rdi
  __int64 i; // rcx
  size_t v71; // r8
  int v72; // edx
  SURFOBJ *v73; // rcx
  int inited; // eax
  POINTFIX v75; // rsi
  ULONG v76; // ecx
  struct SURFACE *v78; // r14
  XDCOBJ *v79; // r15
  XDCOBJ *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // r8
  BOOL (__stdcall *v83)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  char *v84; // rdx
  ULONG v85; // ecx
  int v86; // r12d
  int v87[2]; // [rsp+60h] [rbp-A0h] BYREF
  int NearestIndexFromColorref; // [rsp+68h] [rbp-98h]
  char v89; // [rsp+6Ch] [rbp-94h]
  XDCOBJ *v90; // [rsp+70h] [rbp-90h]
  int v91[2]; // [rsp+80h] [rbp-80h] BYREF
  XDCOBJ *v92; // [rsp+88h] [rbp-78h]
  stretch *v93; // [rsp+90h] [rbp-70h] BYREF
  char v94; // [rsp+98h] [rbp-68h]
  int v95; // [rsp+9Ch] [rbp-64h]
  __int64 v96; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v97; // [rsp+A8h] [rbp-58h] BYREF
  char v98; // [rsp+B0h] [rbp-50h]
  int v99; // [rsp+B4h] [rbp-4Ch]
  char v100[8]; // [rsp+B8h] [rbp-48h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v101; // [rsp+C0h] [rbp-40h]
  struct SURFACE *v102; // [rsp+C8h] [rbp-38h]
  _DWORD v103[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v104; // [rsp+E0h] [rbp-20h]
  __int64 v105; // [rsp+E8h] [rbp-18h]
  _DWORD v106[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v107; // [rsp+100h] [rbp+0h]
  int v108; // [rsp+108h] [rbp+8h]
  int v109; // [rsp+10Ch] [rbp+Ch]
  _BYTE v110[112]; // [rsp+110h] [rbp+10h] BYREF
  int v111; // [rsp+180h] [rbp+80h]
  __int128 v112; // [rsp+270h] [rbp+170h] BYREF
  RECTL prcl; // [rsp+280h] [rbp+180h] BYREF
  RECTL v114; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v115[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v116; // [rsp+2A4h] [rbp+1A4h] BYREF
  struct _POINTFIX v117; // [rsp+340h] [rbp+240h] BYREF
  FIX v118; // [rsp+348h] [rbp+248h]
  int v119; // [rsp+34Ch] [rbp+24Ch]
  int v120; // [rsp+350h] [rbp+250h]
  FIX v121; // [rsp+354h] [rbp+254h]
  FIX v122; // [rsp+358h] [rbp+258h]
  int v123; // [rsp+35Ch] [rbp+25Ch]
  __int128 v124; // [rsp+360h] [rbp+260h] BYREF
  LONG v125; // [rsp+370h] [rbp+270h]
  int v126; // [rsp+374h] [rbp+274h]
  POINTFIX pptfx; // [rsp+380h] [rbp+280h] BYREF
  POINTFIX v128; // [rsp+388h] [rbp+288h]
  POINTFIX v129; // [rsp+390h] [rbp+290h]

  v12 = 0;
  v92 = (XDCOBJ *)a1;
  v90 = a6;
  NearestIndexFromColorref = a7;
  v91[0] = a8;
  v87[0] = a4;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      v16 = a1[2];
    else
      v16 = Gre::Base::Globals(v15);
    v101 = v16;
    if ( (*((_DWORD *)*a1 + 9) & 0x10000) != 0
      || (bSpDwmValidateSurface(v90, NearestIndexFromColorref, v91[0], a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)a1, a2, a3, v87[0], a5),
          DC::QuickInitXform(*a1, &v96, 516LL),
          DC::QuickInitXform(*(_QWORD *)v90, v100, 516LL),
          DC::bRotationOrMirroring(*(DC **)v90, (const struct EXFORMOBJ *)v100)) )
    {
      EngSetLastError(0x57u);
      return v12;
    }
    prcl.left = NearestIndexFromColorref;
    prcl.right = a9 + NearestIndexFromColorref;
    prcl.top = v91[0];
    v18 = *v17;
    prcl.bottom = v91[0] + a10;
    DC::bXform(v18, (const struct EXFORMOBJ *)v100, (struct ERECTL *)&prcl, (__int64)v17);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'((char *)&v117, 8LL, 4LL, (void (__fastcall *)(char *))EPOINTFIX::EPOINTFIX);
    v89 = DC::bRotationOrMirroring(*a1, (const struct EXFORMOBJ *)&v96);
    v20 = 1;
    if ( v89 )
    {
      DWORD2(v124) = a2 + v87[0];
      v126 = a5 + a3;
      *(_QWORD *)&v124 = __PAIR64__(a3, a2);
      HIDWORD(v124) = a3;
      v125 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v96, (const struct _POINTL *)&v124, &v117, 3uLL);
      x = v117.x;
      v22 = v118;
      if ( (*(_BYTE *)(v96 + 32) & 1) != 0 )
      {
        if ( v117.x > v118 )
        {
          x = v117.x + 16;
          v22 = v118 + 16;
          v120 += 16;
          v117.x += 16;
          v118 += 16;
        }
        y = v117.y;
        v24 = v121;
        v25 = v119;
        if ( v117.y > v121 )
        {
          y = v117.y + 16;
          v25 = v119 + 16;
          v24 = v121 + 16;
          v117.y += 16;
          v121 += 16;
          v119 += 16;
        }
      }
      else
      {
        v24 = v121;
        v25 = v119;
        y = v117.y;
      }
      v122 = v22 + v120 - x;
      v123 = v24 + v25 - y;
      v26 = (v22 > x) ^ (v22 <= v122);
      v27 = (v25 > y) ^ (v25 <= v123);
      if ( *(&v117.x + 2 * v26) > *(&v117.x + 2 * (v26 ^ 3LL)) )
        v26 ^= 3u;
      if ( *(&v117.y + 2 * v27) > *(&v117.y + 2 * (v27 ^ 3LL)) )
        v27 ^= 3u;
      LODWORD(v112) = (*(&v117.x + 2 * v26) + 15) >> 4;
      DWORD1(v112) = (*(&v117.y + 2 * v27) + 15) >> 4;
      DWORD2(v112) = (*(&v117.x + 2 * (v26 ^ 3LL)) + 15) >> 4;
      HIDWORD(v112) = (*(&v117.y + 2 * (v27 ^ 3LL)) + 15) >> 4;
    }
    else
    {
      DWORD2(v112) = a2 + v87[0];
      v28 = *a1;
      HIDWORD(v112) = a5 + a3;
      *(_QWORD *)&v112 = __PAIR64__(a3, a2);
      DC::bXform(v28, (const struct EXFORMOBJ *)&v96, (struct ERECTL *)&v112, v19);
      ERECTL::vOrder((ERECTL *)&v112);
    }
    if ( ERECTL::bEmpty((ERECTL *)&v112) )
    {
      v12 = 1;
      goto LABEL_132;
    }
    if ( (*((_DWORD *)*a1 + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)a1, (struct ERECTL *)&v112);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v110);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v110, (struct _ERESOURCE ***)a1, v90) )
    {
      v86 = XDCOBJ::bFullScreen(v90);
      v12 = XDCOBJ::bFullScreen((XDCOBJ *)a1) | v86;
      goto LABEL_130;
    }
    v29 = *a1;
    v30 = (struct SURFACE *)*((_QWORD *)*a1 + 62);
    v102 = v30;
    if ( !v30
      || (v31 = *((_QWORD *)v30 + 16), v32 = *((_QWORD *)v29 + 11), !*(_QWORD *)(*(_QWORD *)v90 + 496LL))
      || (v33 = XDCOBJ::pSurfaceEff(v90)) == 0LL )
    {
      v12 = 1;
      goto LABEL_130;
    }
    if ( (v111 & 0x400000) != 0 && (unsigned int)DestSurfaceAccessCheck(v30) )
    {
      v34 = *a1;
      v35 = 0;
      v124 = v112;
      if ( !(unsigned int)ERECTL::bOffsetAdd(
                            (ERECTL *)&v112,
                            (const struct _POINTL *)v34 + (*((_DWORD *)v34 + 10) & 1LL) + 127,
                            1)
        || !(unsigned int)ERECTL::bOffsetAdd(
                            (ERECTL *)&prcl,
                            (const struct _POINTL *)(*(_QWORD *)v90
                                                   + 1016LL
                                                   + 8 * (*(_DWORD *)(*(_QWORD *)v90 + 40LL) & 1LL)),
                            1) )
      {
        v35 = 1;
      }
      v36 = v33;
      v37 = *((_QWORD *)v33 + 6);
      *(_QWORD *)v87 = v33;
      if ( *((_WORD *)v33 + 50) == 1 && (*(_QWORD *)v87 = v33, v37) && (*(_DWORD *)(v37 + 40) & 0x20000) != 0 )
      {
        v38 = *(_DWORD *)(v37 + 2576);
        if ( prcl.left < v38
          || (v39 = *(_DWORD *)(v37 + 2580), prcl.top < v39)
          || prcl.right > *((_DWORD *)v33 + 14) + v38
          || (v40 = 0, prcl.bottom > v39 + *((_DWORD *)v33 + 15)) )
        {
          v40 = 1;
        }
        v36 = v33;
        *(_QWORD *)v87 = v33;
      }
      else if ( prcl.left < 0
             || prcl.top < 0
             || prcl.right > *((_DWORD *)v33 + 14)
             || (v40 = 0, prcl.bottom > *((_DWORD *)v33 + 15)) )
      {
        v40 = 1;
      }
      v41 = v40 | v35;
      if ( v36 == v102 )
      {
        v114 = prcl;
        ERECTL::operator*=(&v114.left, (int *)&v112);
        v42 = ERECTL::bEmpty((ERECTL *)&v114);
        v36 = *(struct SURFACE **)v87;
        if ( !v42 )
          v41 = 1;
      }
      if ( !v41 )
      {
        v43 = *((_QWORD *)v36 + 16);
        v44 = *(_QWORD *)(*(_QWORD *)v90 + 88LL);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v43, v44, a11, 1LL);
        v45 = XDCOBJ::prgnEffRao((DC **)v92);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v115, v45, (struct ERECTL *)&v112);
        if ( ERECTL::bEmpty((ERECTL *)&v116) )
        {
LABEL_111:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v110);
          `vector destructor iterator'(&v117, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
          return v20;
        }
        v46 = v92;
        if ( (*(_DWORD *)(*(_QWORD *)v92 + 36LL) & 0xE0) != 0 )
        {
          v114 = v116;
          XDCOBJ::vAccumulateTight(v92, v92, (__m128i *)&v114);
        }
        v93 = 0LL;
        v94 = 0;
        v95 = 0;
        if ( (GetAppCompatFlags2(1024LL, (__int64)v46) & 0x8000000) != 0
          && (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v92 + 976LL) + 108LL), (v47 & 1) != 0)
          && (v47 & 9) != 9 )
        {
          v103[3] = 0;
          v105 = 0LL;
          v103[1] = *(_DWORD *)(*(_QWORD *)v87 + 56LL);
          v103[2] = *(_DWORD *)(*(_QWORD *)v87 + 60LL);
          v103[0] = *(_DWORD *)(*(_QWORD *)v87 + 96LL);
          v48 = *(__int64 **)(*(_QWORD *)v87 + 128LL);
          if ( v48 )
            v104 = *v48;
          else
            v104 = 0LL;
          SURFMEM::bCreateDIB((SURFMEM *)&v93, (struct _DEVBITMAPINFO *)v103, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v93
            || ((*(_QWORD *)&v114.left = 0LL,
                 *(_QWORD *)v91 = 0LL,
                 v49 = (*(_DWORD *)(*(_QWORD *)v87 + 112LL) & 0x400) == 0,
                 *(_QWORD *)&v114.right = *(_QWORD *)(*(_QWORD *)v87 + 56LL),
                 v49)
              ? (v50 = EngCopyBits)
              : (v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v37 + 2832)),
                !((unsigned int (__fastcall *)(char *, __int64, _QWORD, _QWORD, RECTL *, int *))v50)(
                   (char *)v93 + 24,
                   *(_QWORD *)v87 + 24LL,
                   0LL,
                   0LL,
                   &v114,
                   v91)
             || (v51 = *((_DWORD *)v93 + 24), (unsigned int)(v51 - 1) > 5)) )
          {
LABEL_110:
            SURFMEM::~SURFMEM((SURFMEM *)&v93);
            v20 = 0;
            goto LABEL_111;
          }
          ((void (*)(void))(&stretch::apfnMirror)[v51])();
          v52 = v93;
          *(_QWORD *)v87 = v93;
        }
        else
        {
          v52 = *(stretch **)v87;
        }
        v97 = 0LL;
        v98 = 0;
        v99 = 0;
        if ( !v89 )
          goto LABEL_106;
        v106[1] = DWORD2(v112) - v112;
        v106[2] = HIDWORD(v112) - DWORD1(v112);
        v106[0] = *((_DWORD *)v52 + 24);
        v108 = *((_DWORD *)v52 + 28) & 0x40000;
        v106[3] = 0;
        v109 = 0;
        v107 = 0LL;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v97, (struct _DEVBITMAPINFO *)v106, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v53 = v97;
          v54 = *(_DWORD *)(v97 + 64);
          if ( *((_DWORD *)v52 + 24) == 1 )
          {
            v71 = *(unsigned int *)(v97 + 64);
            if ( NearestIndexFromColorref )
              v72 = 255;
            else
              v72 = 0;
          }
          else if ( *((_DWORD *)v52 + 24) == 2 )
          {
            v71 = *(unsigned int *)(v97 + 64);
            v72 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
          }
          else
          {
            if ( *((_DWORD *)v52 + 24) != 3 )
            {
              if ( *((_DWORD *)v52 + 24) == 4 )
              {
                v67 = v54 >> 1;
                if ( !v67 )
                  goto LABEL_102;
                v68 = NearestIndexFromColorref;
                v69 = *(_WORD **)(v97 + 72);
                for ( i = v67; i; --i )
                  *v69++ = v68;
              }
              else
              {
                if ( *((_DWORD *)v52 + 24) == 5 )
                {
                  v59 = *(_BYTE **)(v97 + 80);
                  v60 = &v59[*(_DWORD *)(v97 + 60) * *(_DWORD *)(v97 + 88)];
                  if ( v59 != v60 )
                  {
                    v61 = BYTE2(NearestIndexFromColorref);
                    do
                    {
                      v62 = v59;
                      v63 = (unsigned __int64)&v59[3 * *(_DWORD *)(v53 + 56) - 2];
                      if ( (unsigned __int64)v59 < v63 )
                      {
                        v64 = NearestIndexFromColorref;
                        v65 = BYTE1(NearestIndexFromColorref);
                        do
                        {
                          *v62 = v64;
                          v66 = v62 + 1;
                          *v66++ = v65;
                          *v66 = v61;
                          v62 = v66 + 1;
                        }
                        while ( (unsigned __int64)v62 < v63 );
                        v53 = v97;
                      }
                      v59 += *(int *)(v53 + 88);
                    }
                    while ( v59 != v60 );
                  }
                  goto LABEL_102;
                }
                if ( *((_DWORD *)v52 + 24) != 6 || (v55 = v54 >> 2) == 0 )
                {
LABEL_102:
                  `vector constructor iterator'(
                    (char *)&pptfx,
                    8LL,
                    3LL,
                    (void (__fastcall *)(char *))EPOINTFIX::EPOINTFIX);
                  v87[0] = v117.x - 16 * v124;
                  v87[1] = v117.y - 16 * DWORD1(v124);
                  pptfx = *(POINTFIX *)v87;
                  v87[0] = v118 - 16 * v124;
                  v87[1] = v119 - 16 * DWORD1(v124);
                  v128 = *(POINTFIX *)v87;
                  v87[0] = v120 - 16 * v124;
                  v87[1] = v121 - 16 * DWORD1(v124);
                  v129 = *(POINTFIX *)v87;
                  if ( v97 )
                    v73 = (SURFOBJ *)(v97 + 24);
                  else
                    v73 = 0LL;
                  EngPlgBlt(
                    v73,
                    (SURFOBJ *)((char *)v52 + 24),
                    0LL,
                    0LL,
                    (XLATEOBJ *)((char *)v101 + 4552),
                    0LL,
                    0LL,
                    &pptfx,
                    &prcl,
                    0LL,
                    3u);
                  v52 = (stretch *)v97;
                  prcl.right = DWORD2(v112) - v112;
                  prcl.bottom = HIDWORD(v112) - DWORD1(v112);
                  *(_QWORD *)&prcl.left = 0LL;
                  `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_106:
                  *(_QWORD *)v87 = 0LL;
                  if ( *(_QWORD *)(*(_QWORD *)v90 + 496LL) == *(_QWORD *)(*(_QWORD *)v92 + 496LL) )
                  {
                    v75 = 0LL;
                  }
                  else
                  {
                    inited = EXLATEOBJ::bInitXlateObj(
                               (Gre::Base *)v87,
                               0LL,
                               0,
                               v43,
                               v31,
                               v44,
                               v32,
                               *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v92 + 976LL) + 184LL),
                               *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v92 + 976LL) + 176LL),
                               -1,
                               0);
                    v75 = *(POINTFIX *)v87;
                    if ( !inited )
                    {
                      v76 = 6;
                      goto LABEL_117;
                    }
                  }
                  v78 = v102;
                  v79 = v90;
                  v80 = v92;
                  ++*((_DWORD *)v102 + 23);
                  if ( *(_QWORD *)(*(_QWORD *)v80 + 48LL) == *(_QWORD *)(*(_QWORD *)v79 + 48LL)
                    || (unsigned int)XDCOBJ::bRedirHooked(v80)
                    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v80 + 48LL) + 3512LL) == *(_QWORD *)(*(_QWORD *)v79 + 48LL) )
                  {
                    if ( (*((_DWORD *)v78 + 28) & 0x8000) != 0 )
                      v83 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v78 + 6) + 3272LL);
                    else
                      v83 = EngTransparentBlt;
                    v84 = (char *)v52 + 24;
                    if ( !v52 )
                      v84 = 0LL;
                    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))v83)(
                            (char *)v78 + 24,
                            v84,
                            v115,
                            v75,
                            &v112,
                            &prcl,
                            NearestIndexFromColorref,
                            0);
                    goto LABEL_124;
                  }
                  v76 = 87;
LABEL_117:
                  EngSetLastError(v76);
LABEL_124:
                  EXLATEOBJ::vAltUnlock((Gre::Base **)v87, v81, v82);
                  SURFMEM::~SURFMEM((SURFMEM *)&v97);
                  SURFMEM::~SURFMEM((SURFMEM *)&v93);
LABEL_130:
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v110);
LABEL_132:
                  `vector destructor iterator'(&v117, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
                  return v12;
                }
                v56 = NearestIndexFromColorref;
                v57 = *(int **)(v97 + 72);
                for ( j = v55; j; --j )
                  *v57++ = v56;
              }
              v52 = *(stretch **)v87;
              goto LABEL_102;
            }
            v71 = *(unsigned int *)(v97 + 64);
            v72 = NearestIndexFromColorref;
          }
          memset_0(*(void **)(v97 + 72), v72, v71);
          goto LABEL_102;
        }
        EngSetLastError(8u);
        SURFMEM::~SURFMEM((SURFMEM *)&v97);
        goto LABEL_110;
      }
      v85 = 87;
    }
    else
    {
      v85 = 6;
    }
    EngSetLastError(v85);
    goto LABEL_130;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
