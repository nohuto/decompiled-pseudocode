/*
 * XREFs of ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C
 * Callers:
 *     BltIcon @ 0x140056A38 (BltIcon.c)
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     NtGdiStretchBlt @ 0x140076870 (NtGdiStretchBlt.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     DxgkEngBltViaGDI @ 0x1401B4070 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x140070570 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140073040 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140076238 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x140077B78 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x140077F90 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x140078044 (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x140078744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14007EF08 (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140087A98 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140089AE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x14009F970 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400A02D8 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1400CF040 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E810C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x140176650 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x14019DBC0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?GrepStretchReMapSurface@@YAXAEAVXDCOBJ@@PEAVSURFACE@@@Z @ 0x1401EA6F0 (-GrepStretchReMapSurface@@YAXAEAVXDCOBJ@@PEAVSURFACE@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x14021AD34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepStretchBlt(
        struct XDCOBJ *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        struct OPTAPIDCOBJ *a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        signed int a11,
        unsigned int a12,
        char a13)
{
  unsigned int v13; // r12d
  unsigned int v16; // esi
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  int v19; // eax
  char v20; // r14
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdx
  Gre::Base *v24; // rcx
  Gre::Base *v25; // rcx
  char v26; // si
  struct Gre::Base::SESSION_GLOBALS *v27; // rbx
  int v28; // ecx
  char v29; // r15
  bool v30; // di
  char v31; // al
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  int v34; // r8d
  struct SURFACE *v35; // rax
  OPTAPIDCOBJ *v36; // rdi
  __int64 v37; // rbx
  DC *v38; // r9
  Gre::Base *v39; // rcx
  struct Gre::Base::SESSION_GLOBALS *v40; // rax
  DC *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // r15
  __int64 v45; // rbx
  __int64 v46; // r14
  unsigned int v47; // eax
  void *v48; // r9
  Gre::Base *v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rax
  int v53; // r8d
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rax
  unsigned int v59; // r10d
  unsigned int v60; // eax
  struct Gre::Base::SESSION_GLOBALS *v61; // r11
  __int64 v62; // rax
  int v63; // ecx
  __int64 v64; // r8
  char *XlateObject; // rax
  unsigned int v66; // r9d
  int v67; // esi
  int v68; // r8d
  int v69; // edx
  LONG x; // r11d
  LONG y; // ebx
  int v72; // r10d
  __int64 v73; // r9
  bool v74; // zf
  __int64 v75; // rsi
  APIDCOBJ *v76; // rcx
  ULONG v78; // ecx
  __int64 v79; // rax
  __int64 v80; // rax
  char v81; // bl
  __int64 v82; // rax
  int v83; // ecx
  __int64 v84; // rax
  int v85; // ecx
  char *v86; // r8
  int v87; // r9d
  int v88; // edx
  unsigned int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // r8
  SURFACE *v92; // rsi
  SURFACE *v93; // rdi
  HSEMAPHORE v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rcx
  SURFACE *v98; // rdi
  __int64 v99; // rcx
  SURFACE *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // r8
  int v107; // edx
  DC *v108; // rcx
  char v109; // [rsp+50h] [rbp-B0h]
  unsigned int v110; // [rsp+54h] [rbp-ACh]
  unsigned int v111; // [rsp+54h] [rbp-ACh]
  unsigned int v112; // [rsp+58h] [rbp-A8h]
  int v113; // [rsp+58h] [rbp-A8h]
  __int64 v114; // [rsp+60h] [rbp-A0h]
  BOOL v115; // [rsp+68h] [rbp-98h]
  LONG v116; // [rsp+6Ch] [rbp-94h]
  int v117; // [rsp+70h] [rbp-90h]
  int v118; // [rsp+74h] [rbp-8Ch]
  unsigned int v119; // [rsp+78h] [rbp-88h]
  int v120; // [rsp+7Ch] [rbp-84h]
  int v122; // [rsp+90h] [rbp-70h]
  unsigned int v123; // [rsp+94h] [rbp-6Ch]
  unsigned int v125; // [rsp+A0h] [rbp-60h]
  int v126; // [rsp+A4h] [rbp-5Ch]
  __int64 v127; // [rsp+A8h] [rbp-58h]
  __int64 v128; // [rsp+B0h] [rbp-50h] BYREF
  HSEMAPHORE v129; // [rsp+B8h] [rbp-48h] BYREF
  int v130; // [rsp+C0h] [rbp-40h] BYREF
  int v131; // [rsp+C4h] [rbp-3Ch]
  __int64 v132; // [rsp+C8h] [rbp-38h]
  void *v133; // [rsp+D0h] [rbp-30h]
  __int64 v134; // [rsp+D8h] [rbp-28h]
  struct Gre::Base::SESSION_GLOBALS *v135; // [rsp+E8h] [rbp-18h]
  DC *v136[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v137; // [rsp+108h] [rbp+8h]
  _BYTE v138[112]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v139; // [rsp+1D0h] [rbp+D0h]
  _BYTE v140[112]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v141; // [rsp+250h] [rbp+150h]
  _BYTE v142[112]; // [rsp+260h] [rbp+160h] BYREF
  int v143; // [rsp+2D0h] [rbp+1D0h]
  _DWORD v144[4]; // [rsp+3C0h] [rbp+2C0h] BYREF
  struct MATRIX *inited; // [rsp+3D0h] [rbp+2D0h] BYREF
  struct MATRIX *v146; // [rsp+3D8h] [rbp+2D8h]
  __int64 v147; // [rsp+3E0h] [rbp+2E0h]
  __int64 v148; // [rsp+3E8h] [rbp+2E8h]
  __int64 v149; // [rsp+3F0h] [rbp+2F0h]
  __int64 v150; // [rsp+3F8h] [rbp+2F8h]
  struct SURFACE *v151; // [rsp+400h] [rbp+300h]
  __int64 v152; // [rsp+408h] [rbp+308h]
  __int64 v153; // [rsp+410h] [rbp+310h]
  char *v154; // [rsp+418h] [rbp+318h] BYREF
  __int64 v155; // [rsp+420h] [rbp+320h]
  struct _POINTFIX v156; // [rsp+430h] [rbp+330h] BYREF
  struct _POINTL v157; // [rsp+450h] [rbp+350h] BYREF
  int v158; // [rsp+458h] [rbp+358h]
  int v159; // [rsp+45Ch] [rbp+35Ch]
  LONG v160; // [rsp+460h] [rbp+360h]
  int v161; // [rsp+464h] [rbp+364h]
  unsigned int v162; // [rsp+468h] [rbp+368h] BYREF
  int v163; // [rsp+46Ch] [rbp+36Ch]
  int v164; // [rsp+470h] [rbp+370h]
  int v165; // [rsp+474h] [rbp+374h]
  __int64 v166; // [rsp+488h] [rbp+388h]
  unsigned int v167; // [rsp+490h] [rbp+390h]
  int v168; // [rsp+494h] [rbp+394h]

  v13 = 0;
  v16 = a11 & 0x40000000;
  v116 = a2;
  v153 = 0LL;
  v168 = 0;
  v17 = a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF);
  v110 = 0;
  v123 = 0;
  v115 = (a11 & 0x40000000) != 0;
  v167 = ((v17 >> 8) | v17 & 0xFF0000) >> 8;
  v19 = gajRop3[(unsigned __int64)v167 >> 8];
  v20 = v19 | gajRop3[(unsigned __int16)(v17 >> 8) >> 8];
  v120 = v19 | gajRop3[(unsigned __int16)(v17 >> 8) >> 8];
  v21 = v20 & 0xD4;
  if ( (v20 & 0xD4) == 0 )
  {
    v18 = (((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) | a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF) & 0xFF0000) >> 8;
    if ( (unsigned __int8)v18 == v18 >> 8 )
    {
      if ( *(_QWORD *)a1 )
        v13 = GrepPatBlt(a1, a2, a3, a4, a5, v17);
      goto LABEL_121;
    }
  }
  if ( ((gajRop3[(unsigned __int8)v17] | gajRop3[BYTE1(v17)]) & 2) != 0 && v17 != 16711778 && v17 != 66 && *(_QWORD *)a1 )
    bSpDwmValidateSurface(a1, a2, a3, a4, a5);
  if ( OPTAPIDCOBJ::bValid(a6) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v140, a6);
    bSpDwmValidateSurface((struct XDCOBJ *)v140, a7, a8, a9, a10);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v140);
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v136, a6);
  v22 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( !_bittest((const signed __int32 *)(v22 + 36), 0x10u) )
    {
      v23 = *(_QWORD *)(v22 + 976);
      if ( (*(_DWORD *)(v23 + 152) & 0x1000) != 0 )
        GreDCSelectBrush(v22, *(_QWORD *)(v23 + 160));
    }
  }
  if ( !*(_QWORD *)a1
    || _bittest((const signed __int32 *)(*(_QWORD *)a1 + 36LL), 0x10u)
    || !OPTAPIDCOBJ::bValid(a6) && (v20 & 0xD4) != 0 )
  {
    EngSetLastError(6u);
    if ( (v20 & 0xD4) == 0 || OPTAPIDCOBJ::bValid(a6) )
      v13 = 1;
    goto LABEL_120;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v142);
  if ( (v20 & 0xD4) != 0 )
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v142, a1, (struct XDCOBJ *)v136);
    Gre::Base::Globals(v24);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v142, a1);
  }
  if ( (v143 & 1) == 0 )
  {
    v78 = 8;
    goto LABEL_118;
  }
  if ( OPTAPIDCOBJ::bValid(a6) )
  {
    v25 = *(Gre::Base **)(*(_QWORD *)a1 + 48LL);
    if ( (*((_DWORD *)v25 + 10) & 0x8000) != 0 )
    {
      v26 = 1;
      v27 = Gre::Base::Globals(v25);
      GreAcquireSemaphoreShared<1,>(v27);
    }
    else
    {
      v26 = 0;
      v27 = Gre::Base::Globals(v25);
    }
    if ( v136[0]
      && *((_QWORD *)v136[0] + 62)
      && ((v28 = *((_DWORD *)v136[0] + 9), (v28 & 0x1000) == 0) || (v28 & 0x4000) != 0) )
    {
      v29 = 1;
      v30 = (v143 & 0x800000) != 0;
    }
    else
    {
      v29 = 0;
      v30 = 0;
    }
    v31 = *((_BYTE *)v136[0] + 36) & 1;
    v109 = v31;
    if ( v26 )
    {
      GreReleaseSemaphoreShared<1,>(v27);
      v31 = v109;
    }
    v21 = v20 & 0xD4;
    v16 = a11 & 0x40000000;
  }
  else
  {
    v31 = 0;
    v29 = 0;
    v109 = 0;
    v30 = 0;
  }
  v32 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1
    && (v33 = (_QWORD *)(v32 + 496), *(_QWORD *)(v32 + 496))
    && ((v34 = *(_DWORD *)(v32 + 36), (v34 & 0x1000) == 0) || (v34 & 0x4000) != 0) )
  {
    if ( !v29 )
    {
LABEL_64:
      if ( (*(_DWORD *)(v32 + 36) & 0xE0) != 0 )
      {
        DC::QuickInitXform(v32, &v129, 516LL);
        v144[0] = v116;
        v108 = *(DC **)a1;
        v144[2] = v116 + a4;
        v144[1] = a3;
        v144[3] = a3 + a5;
        if ( DC::bXform(v108, (const struct EXFORMOBJ *)&v129, (struct ERECTL *)v144) )
        {
          ERECTL::vOrder((ERECTL *)v144);
          XDCOBJ::vAccumulate(a1, (struct ERECTL *)v144);
        }
      }
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v142);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v136);
      v13 = 1;
      goto LABEL_121;
    }
    if ( v30 )
      goto LABEL_30;
  }
  else
  {
    v31 = v109;
    v33 = (_QWORD *)(v32 + 496);
  }
  if ( !*v33 || !v29 )
    goto LABEL_64;
  if ( !v31 )
    goto LABEL_119;
LABEL_30:
  if ( v21 && (v143 & 0x400000) == 0 || (v35 = XDCOBJ::pSurfaceEff(a1), !(unsigned int)DestSurfaceAccessCheck(v35)) )
  {
    v78 = 5;
LABEL_118:
    EngSetLastError(v78);
LABEL_119:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v142);
LABEL_120:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v136);
LABEL_121:
    BLTRECORD::~BLTRECORD((BLTRECORD *)&inited);
    return v13;
  }
  if ( (unsigned __int8)v167 != BYTE1(v167) || (v36 = a6, v16) && !OPTAPIDCOBJ::bValid(a6) )
  {
    v78 = 87;
    goto LABEL_118;
  }
  v37 = 0LL;
  if ( OPTAPIDCOBJ::bValid(a6) )
    v37 = *((_QWORD *)a6 + 13);
  if ( (a11 < 0 && (v38 = *(DC **)a1, (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 108LL) & 1) != 0)
     || (v38 = *(DC **)a1, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 108LL) & 9) == 9))
    && v37 != *(_QWORD *)v38 )
  {
    v116 = *(_QWORD *)(*((_QWORD *)v38 + 122) + 308LL) - a4 - v116;
    v123 = DC::dwSetLayout(v38, -1, 0);
    v119 = 0x80000000;
  }
  else
  {
    v119 = 0;
  }
  v133 = 0LL;
  XDCOBJ::pSurfaceEff(a1);
  if ( OPTAPIDCOBJ::bValid(a6) )
  {
    v40 = Gre::Base::Globals(v39);
    v41 = v136[0];
    v42 = *((_QWORD *)v136[0] + 62);
    if ( v42 )
    {
      if ( v137 )
        v42 = v137;
    }
    else
    {
      v42 = *((_QWORD *)v40 + 533);
    }
    v43 = *(_QWORD *)(v42 + 48);
    v114 = v42;
  }
  else
  {
    v41 = v136[0];
    v43 = 0LL;
    v114 = 0LL;
  }
  v127 = v43;
  LODWORD(v44) = 0;
  v134 = 0LL;
  if ( v16 )
  {
    if ( (*((_DWORD *)v41 + 9) & 1) != 0
      && (v90 = *((_QWORD *)v41 + 6), (*(_DWORD *)(v90 + 40) & 0x80u) == 0)
      && ((v91 = *(_QWORD *)a1, v90 == *(_QWORD *)(*(_QWORD *)a1 + 48LL))
       || (v104 = XDCOBJ::bRedirHooked(a1), v41 = v136[0], v104)
       && (v91 = *(_QWORD *)a1, *((_QWORD *)v136[0] + 6) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 3512LL)))
      && v43 )
    {
      v92 = 0LL;
      if ( (v120 & 0xD4) != 0 && (*((_DWORD *)v41 + 9) & 0x4000) != 0 && *((_QWORD *)v41 + 62) != *(_QWORD *)(v91 + 496) )
      {
        v92 = (SURFACE *)*((_QWORD *)v41 + 62);
        SURFACE::bUnMap(v92);
      }
      v93 = 0LL;
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 )
      {
        v93 = *(SURFACE **)(*(_QWORD *)a1 + 496LL);
        SURFACE::bUnMap(v93);
      }
      v94 = *(HSEMAPHORE *)(v43 + 56);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Pointer", v94, 0LL);
      GreAcquireSemaphoreInternal(v94);
      GrepAcquireLockValidate<4>();
      v44 = *(_QWORD *)(v127 + 64);
      v134 = v44;
      UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)&v130);
      if ( (a13 & 2) == 0 || !*(_DWORD *)(W32GetUserSessionState(v96, v95) + 36292) )
        GreMovePointer(*(_QWORD *)(v114 + 48), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
      SURFACE::vSetIncludeSprites();
      v97 = v132;
      if ( v132 )
      {
        *(_DWORD *)(v132 + 348) = v130;
        *(_DWORD *)(v97 + 352) = v131;
      }
      GrepStretchReMapSurface(a1, v93);
      GrepStretchReMapSurface((struct XDCOBJ *)v136, v92);
      v41 = v136[0];
      v36 = a6;
    }
    else
    {
      v115 = 0;
    }
    if ( (*((_DWORD *)v41 + 11) & 1) != 0 || (*(_DWORD *)(*(_QWORD *)a1 + 44LL) & 1) != 0 )
      goto LABEL_116;
  }
  inited = DC::InitXform(*(DC **)a1, 0x204u);
  v151 = XDCOBJ::pSurfaceEff(a1);
  v147 = *((_QWORD *)v151 + 16);
  v148 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  if ( OPTAPIDCOBJ::bValid(v36) )
  {
    v146 = DC::InitXform(v136[0], 0x204u);
    v152 = v114;
    v111 = a12;
    v45 = *(_QWORD *)(v114 + 128);
    v149 = v45;
    v46 = *((_QWORD *)v136[0] + 11);
    v150 = v46;
    if ( a12 != -1 )
      goto LABEL_50;
    v47 = *(_DWORD *)(*((_QWORD *)v136[0] + 122) + 180LL);
  }
  else
  {
    v47 = a12;
    v46 = v150;
    v45 = v149;
  }
  v111 = v47;
LABEL_50:
  if ( (a13 & 1) != 0 )
  {
    v48 = *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 248LL);
    v133 = v48;
  }
  else
  {
    v48 = 0LL;
  }
  v49 = *(Gre::Base **)a1;
  v50 = v148;
  v51 = v147;
  v52 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v53 = *(_DWORD *)(*(_QWORD *)a1 + 120LL);
  v126 = v53;
  v117 = *(_DWORD *)(v52 + 184);
  v122 = *(_DWORD *)(v52 + 176);
  if ( !v45
    && (!v147
     || (*(_DWORD *)(v147 + 24) & 0x800) != 0 && ((v54 = *(_QWORD *)(v148 + 80)) == 0 || v54 == *(_QWORD *)(v148 + 72)))
    || !v147
    && (*(_DWORD *)(v45 + 24) & 0x800) != 0
    && ((v55 = *(_QWORD *)(v148 + 80)) == 0 || v55 == *(_QWORD *)(v148 + 72))
    || v45
    && v147
    && ((v56 = *(_QWORD *)(v45 + 120), v56 != v45) ? (v57 = *(_DWORD *)(v56 + 32)) : (v57 = *(_DWORD *)(v45 + 32)),
        (v58 = *(_QWORD *)(v147 + 120), v58 != v147)
      ? (v49 = (Gre::Base *)*(unsigned int *)(v58 + 32))
      : (v49 = (Gre::Base *)*(unsigned int *)(v147 + 32)),
        v57 == (_DWORD)v49) )
  {
    v154 = (char *)Gre::Base::Globals(v49) + 4552;
    goto LABEL_91;
  }
  v118 = 1;
  if ( (v53 & 7) != 0 && v48 )
  {
    v118 = 0;
  }
  else if ( v45 && v147 )
  {
    v125 = *(_DWORD *)(v45 + 56);
    v128 = v46;
    v135 = Gre::Base::Globals(v49);
    v129 = (HSEMAPHORE)(*(_QWORD *)v135 + 312LL);
    GreAcquireSemaphoreInternal(v129);
    GrepAcquireLockValidate<13>();
    v59 = v125;
    v60 = 0;
    v61 = v135;
    while ( 1 )
    {
      v112 = v60;
      if ( v60 >= 8 )
      {
        v154 = 0LL;
        v113 = 0;
        goto LABEL_84;
      }
      v62 = *(_QWORD *)(v45 + 120);
      v63 = v62 == v45 ? *(_DWORD *)(v45 + 32) : *(_DWORD *)(v62 + 32);
      v64 = 32LL * v59;
      if ( *(_DWORD *)((char *)v61 + v64 + 4304) == v63 )
      {
        v82 = *(_QWORD *)(v51 + 120);
        v83 = v82 == v51 ? *(_DWORD *)(v51 + 32) : *(_DWORD *)(v82 + 32);
        if ( *(_DWORD *)((char *)v61 + v64 + 4308) == v83 )
        {
          v84 = *(_QWORD *)(v50 + 120);
          v85 = v84 == v50 ? *(_DWORD *)(v50 + 32) : *(_DWORD *)(v84 + 32);
          if ( *(_DWORD *)((char *)v61 + v64 + 4316) == v85 )
          {
            v86 = *(char **)((char *)v61 + v64 + 4296);
            v154 = v86;
            v87 = *((_DWORD *)v86 + 19);
            if ( (v87 & 0x6000) == 0 )
            {
              v88 = *((_DWORD *)v86 + 1);
              if ( (*((_DWORD *)v86 + 19) & 0x100) == 0 && (v88 & 4) == 0 )
                break;
              if ( (v88 & 4) != 0 && v111 == *((_DWORD *)v86 + 6) )
              {
                v89 = XEPALOBJ::ulTime((XEPALOBJ *)&v128);
                if ( *((_DWORD *)v61 + 8 * v59 + 1078) == v89 )
                  break;
              }
              if ( (v87 & 0x100) != 0 && v117 == *((_DWORD *)v86 + 7) && v122 == *((_DWORD *)v86 + 8) )
                break;
            }
          }
        }
      }
      v59 = ((_BYTE)v59 + 1) & 7;
      v60 = v112 + 1;
    }
    _InterlockedIncrement((volatile signed __int32 *)v61 + 8 * v59 + 1072);
    *(_DWORD *)(v45 + 56) = v59;
    v113 = 1;
LABEL_84:
    SEMOBJ<13>::vUnlock(&v129);
    if ( v113 )
      goto LABEL_91;
  }
  XlateObject = (char *)CreateXlateObject(v133, v126, v45, v51, v46, v50, v117, v122, v111, 0);
  v154 = XlateObject;
  if ( !XlateObject )
  {
LABEL_115:
    v110 = 0;
LABEL_116:
    v75 = v114;
    goto LABEL_107;
  }
  if ( v118 && v45 && v51 && (*((_DWORD *)XlateObject + 19) & 0x200) == 0 )
    EXLATEOBJ::vAddToCache((Gre::Base *)&v154, v45, v51, v46, v50);
LABEL_91:
  v168 |= 2u;
  if ( (v120 & 0xE8) != 0 )
  {
    v105 = *(_QWORD *)a1;
    v155 = *(_QWORD *)a1 + 1200LL;
    v106 = *(_QWORD *)(v105 + 976);
    v107 = *(_DWORD *)(v106 + 152);
    if ( (v107 & 1) != 0 || (*(_DWORD *)(v105 + 316) & 1) != 0 )
    {
      *(_DWORD *)(v106 + 152) = v107 & 0xFFFFFFFE;
      *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~1u;
      EBRUSHOBJ::vInitBrush(v155, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v148, v147, v151, 1);
    }
    v166 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
  }
  else
  {
    v155 = 0LL;
  }
  v153 = 0LL;
  if ( (*((_BYTE *)v146 + 32) & 1) == 0 )
    goto LABEL_124;
  v66 = a7;
  v67 = a8;
  v68 = a7 + a9;
  v69 = a8 + a10;
  v164 = a7 + a9;
  v165 = a8 + a10;
  v162 = a7;
  v163 = a8;
  if ( (*((_BYTE *)v146 + 32) & 0x43) != 0x43 )
  {
    if ( (unsigned int)bCvtPts1(v146, &v162, 2LL, a7) )
    {
      v66 = v162;
      v69 = v165;
      v68 = v164;
      v67 = v163;
      a7 = v162;
      goto LABEL_97;
    }
LABEL_124:
    EngSetLastError(0x57u);
    goto LABEL_115;
  }
LABEL_97:
  if ( (v120 & 0xD4) != 0 && (v67 == v69 || v66 == v68) )
  {
    v110 = 1;
    goto LABEL_116;
  }
  x = v116;
  y = a3;
  v72 = v116 + a4;
  v73 = (unsigned int)(a3 + a5);
  v74 = (*((_BYTE *)inited + 32) & 1) == 0;
  v157.x = v116;
  v157.y = a3;
  v158 = v116 + a4;
  if ( v74 )
  {
    v161 = a3 + a5;
    v159 = a3;
    v160 = v116;
    EXFORMOBJ::bXform((EXFORMOBJ *)&inited, &v157, &v156, 3uLL);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v138, a6);
    v80 = *(_QWORD *)a1;
    v75 = v114;
    v139 = v114;
    v81 = *(_BYTE *)(*(_QWORD *)(v80 + 976) + 215LL);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v140, a1);
    v141 = 0LL;
    v110 = BLTRECORD::bRotate(
             (BLTRECORD *)&inited,
             (struct BLTRECORD::PROXYDCOBJ *)v140,
             (struct BLTRECORD::PROXYDCOBJ *)v138,
             v120,
             v81);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v140);
    goto LABEL_123;
  }
  v159 = a3 + a5;
  if ( (*((_BYTE *)inited + 32) & 0x43) != 0x43 )
  {
    if ( (unsigned int)bCvtPts1(inited, &v157, 2LL, v73) )
    {
      v69 = v165;
      v68 = v164;
      v67 = v163;
      LODWORD(v73) = v159;
      v72 = v158;
      y = v157.y;
      x = v157.x;
      a7 = v162;
      goto LABEL_102;
    }
    goto LABEL_124;
  }
LABEL_102:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 215LL) == 4
    || v68 - a7 != v72 - x
    || v69 - v67 != (_DWORD)v73 - y )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v138, a6);
    v79 = *(_QWORD *)a1;
    v75 = v114;
    v139 = v114;
    v110 = BLTRECORD::bStretch(
             (BLTRECORD *)&inited,
             a1,
             (struct BLTRECORD::PROXYDCOBJ *)v138,
             v120,
             *(_BYTE *)(*(_QWORD *)(v79 + 976) + 215LL));
LABEL_123:
    v76 = (APIDCOBJ *)v138;
    goto LABEL_106;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v140, a6);
  v75 = v114;
  v141 = v114;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v138, a1);
  v139 = 0LL;
  v110 = BLTRECORD::bBitBlt(
           (BLTRECORD *)&inited,
           (struct BLTRECORD::PROXYDCOBJ *)v138,
           (struct BLTRECORD::PROXYDCOBJ *)v140,
           v120);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v138);
  v76 = (APIDCOBJ *)v140;
LABEL_106:
  APIDCOBJ::~APIDCOBJ(v76);
LABEL_107:
  if ( v119 )
    DC::dwSetLayout(*(DC **)a1, -1, v123);
  if ( v115 )
  {
    SURFACE::vClearIncludeSprites();
    v98 = 0LL;
    if ( (v120 & 0xD4) != 0
      && (*((_DWORD *)v136[0] + 11) & 1) == 0
      && (*((_DWORD *)v136[0] + 9) & 0x4000) != 0
      && v75 != *(_QWORD *)(*(_QWORD *)a1 + 496LL)
      && (*(_DWORD *)(v75 + 112) & 0x800) != 0 )
    {
      v98 = (SURFACE *)*((_QWORD *)v136[0] + 62);
      SURFACE::bUnMap(v98);
    }
    v99 = *(_QWORD *)a1;
    v100 = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 44LL) & 1) == 0 && (*(_DWORD *)(v99 + 36) & 0x4000) != 0 )
    {
      v100 = *(SURFACE **)(v99 + 496);
      SURFACE::bUnMap(v100);
    }
    UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)&v130);
    if ( (a13 & 2) == 0 || !*(_DWORD *)(W32GetUserSessionState(v102, v101) + 36292) )
      GreMovePointer(*(_QWORD *)(v75 + 48), (unsigned int)v44, HIDWORD(v134), 0LL);
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, *(_QWORD *)(v127 + 56));
    v103 = v132;
    if ( v132 )
    {
      *(_DWORD *)(v132 + 348) = v130;
      *(_DWORD *)(v103 + 352) = v131;
    }
    GrepStretchReMapSurface(a1, v100);
    GrepStretchReMapSurface((struct XDCOBJ *)v136, v98);
  }
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v142);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v136);
  BLTRECORD::~BLTRECORD((BLTRECORD *)&inited);
  return v110;
}
