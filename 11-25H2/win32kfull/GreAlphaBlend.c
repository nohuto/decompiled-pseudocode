/*
 * XREFs of GreAlphaBlend @ 0x140073C58
 * Callers:
 *     BltIcon @ 0x140056A38 (BltIcon.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     NtGdiAlphaBlend @ 0x1401934A0 (NtGdiAlphaBlend.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402EA1A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x14006D238 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x140070570 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140073040 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140076238 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x140078044 (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x140084F0C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140087A98 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1400CF040 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DEA60 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     EngPlgBlt @ 0x1400E89F0 (EngPlgBlt.c)
 *     ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x140143F00 (-vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?LongLongToLong@@YAJ_JPEAJ@Z @ 0x14016CC64 (-LongLongToLong@@YAJ_JPEAJ@Z.c)
 *     ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x14017C180 (-vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x14018961C (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x1401F6420 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14020E030 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x14021AD34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314430 (-vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314650 (-vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403146D0 (-vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314760 (-vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAlphaBlend(
        HDC a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v13; // r15d
  float v14; // xmm4_4
  __int64 v15; // r14
  LONG left; // edi
  int top; // r9d
  LONG right; // edx
  int bottom; // r8d
  int v21; // eax
  LONG v22; // edi
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r14
  int v26; // edi
  int v27; // r9d
  int v28; // eax
  int v29; // eax
  Gre::Base *v30; // rcx
  struct SURFACE *v31; // r13
  __int64 v32; // r12
  __int64 v33; // rdi
  struct Gre::Base::SESSION_GLOBALS *v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rax
  int v37; // r11d
  __int64 v38; // rcx
  __int64 v39; // r13
  ULONG v40; // ecx
  __int32 v42; // eax
  __int32 v43; // eax
  FIX x; // r9d
  FIX v45; // edi
  FIX v46; // r11d
  int v47; // r8d
  FIX y; // r10d
  int v49; // r9d
  int v50; // edi
  __int64 v51; // rcx
  int v52; // edi
  __int64 v53; // rax
  int v54; // r9d
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r11
  int v58; // r10d
  LONG v59; // r9d
  LONG v60; // edx
  LONG v61; // r8d
  struct Gre::Base::SESSION_GLOBALS *v62; // r13
  XLATEOBJ *v63; // rax
  int v64; // r14d
  int v65; // eax
  __int64 v66; // rsi
  __int64 v67; // r14
  _DWORD *v68; // rax
  __int64 v69; // r15
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // edx
  __int64 v73; // rax
  unsigned int v74; // eax
  unsigned int i; // r8d
  __int64 v76; // rax
  int v77; // ecx
  __int64 v78; // r9
  Gre::Base *v79; // rcx
  XLATEOBJ *v80; // rax
  __int64 v81; // rcx
  int v82; // r8d
  int v83; // edx
  struct Gre::Base::SESSION_GLOBALS *v84; // r13
  unsigned int v85; // eax
  unsigned int j; // r8d
  __int64 v87; // rax
  int v88; // ecx
  __int64 v89; // r9
  XLATEOBJ *v90; // r13
  XLATEOBJ *v91; // rsi
  int v92; // eax
  Gre::Base *v93; // rcx
  __int64 v94; // rax
  int v95; // edx
  __int64 v96; // rax
  struct Gre::Base::SESSION_GLOBALS *v97; // r11
  unsigned int v98; // eax
  __int64 v99; // rax
  int v100; // ecx
  __int64 v101; // r8
  struct Gre::Base::SESSION_GLOBALS *v102; // r14
  int v103; // eax
  XLATEOBJ *v104; // rcx
  XLATEOBJ *v105; // rax
  __int64 v106; // rcx
  int v107; // r8d
  int v108; // edx
  unsigned int v109; // esi
  struct Gre::Base::SESSION_GLOBALS *v110; // r11
  unsigned int v111; // eax
  unsigned int v112; // r9d
  __int64 v113; // rax
  int v114; // ecx
  __int64 v115; // rdx
  struct Gre::Base::SESSION_GLOBALS *v116; // rsi
  XLATEOBJ *v117; // rdi
  int v118; // ecx
  struct REGION *v119; // rdx
  struct ECLIPOBJ *v120; // rdx
  __int64 v121; // r12
  stretch *v122; // r15
  __int64 v123; // rdi
  BOOL (__stdcall *v124)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  char *v125; // rdx
  __int64 v126; // rdx
  Gre::Base *v127; // rcx
  __int64 v128; // r8
  int v129; // eax
  int v130; // eax
  int v131; // eax
  __int64 v132; // rdi
  int v133; // eax
  int v134; // eax
  __int64 v135; // rax
  struct Gre::Base::SESSION_GLOBALS *v136; // rax
  __int64 v137; // rax
  struct Gre::Base::SESSION_GLOBALS *v138; // rax
  struct Gre::Base::SESSION_GLOBALS *v139; // rax
  struct Gre::Base::SESSION_GLOBALS *v140; // rax
  __int64 v141; // rax
  int v142; // r8d
  __int64 v143; // rax
  int v144; // r9d
  char v145; // si
  __int64 *v146; // rax
  bool v147; // zf
  BOOL (__stdcall *v148)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v149; // edx
  ULONG v150; // ecx
  __int64 v151; // rax
  int v152; // ecx
  __int64 v153; // rax
  int v154; // ecx
  _DWORD *v155; // rdx
  int v156; // r11d
  int v157; // r10d
  struct Gre::Base::SESSION_GLOBALS *v158; // rcx
  __int64 v159; // rax
  int v160; // ecx
  __int64 v161; // rax
  int v162; // ecx
  _DWORD *v163; // rdx
  int v164; // r11d
  int v165; // r10d
  __int64 v166; // rax
  int v167; // ecx
  __int64 v168; // rax
  int v169; // ecx
  struct Gre::Base::SESSION_GLOBALS *v170; // rdx
  int v171; // r10d
  int v172; // r9d
  __int64 v173; // rax
  int v174; // ecx
  __int64 v175; // rax
  int v176; // ecx
  struct Gre::Base::SESSION_GLOBALS *v177; // rdx
  int v178; // r10d
  int v179; // r8d
  struct Gre::Base::SESSION_GLOBALS *v180; // rax
  struct Gre::Base::SESSION_GLOBALS *v181; // rax
  struct Gre::Base::SESSION_GLOBALS *v182; // rax
  struct Gre::Base::SESSION_GLOBALS *v183; // rax
  unsigned int v184; // eax
  unsigned int v185; // eax
  unsigned int v186; // eax
  unsigned int v187; // eax
  __int64 v188; // rax
  __int64 v189; // rax
  _QWORD *v190; // r15
  int v191; // r9d
  __int64 *v192; // rax
  __int64 v193; // r11
  __int64 v194; // r9
  int v195; // r9d
  int v196; // r10d
  int v197; // r11d
  int v198; // r10d
  int v199; // r9d
  LONG v200; // r11d
  int *v201; // rcx
  XLATEOBJ *v202; // rdx
  int v203; // r12d
  _DWORD *v204; // r8
  unsigned __int64 v205; // rdx
  POINTFIX *v206; // r12
  __int64 v207; // r15
  SURFOBJ *v208; // rdx
  SURFOBJ *v209; // rcx
  __int64 v210; // rsi
  int inited; // eax
  struct BLTINFO *v212; // r15
  XLATEOBJ *v213; // r8
  int v214; // eax
  LONG v215; // ecx
  XLATEOBJ *v216; // r9
  int v217; // ecx
  LONG cEntries; // r10d
  SURFOBJ *v219; // rcx
  ULONG v220; // ecx
  int v221; // r15d
  POINTL *pptlBrushOrg; // [rsp+30h] [rbp-D0h]
  POINTFIX *pptfx; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  POINTL *pptl; // [rsp+48h] [rbp-B8h]
  int v227[2]; // [rsp+70h] [rbp-90h]
  XLATEOBJ *v228; // [rsp+70h] [rbp-90h]
  int v229[2]; // [rsp+70h] [rbp-90h]
  int v230[2]; // [rsp+70h] [rbp-90h]
  LONG v231; // [rsp+70h] [rbp-90h]
  unsigned int v232; // [rsp+78h] [rbp-88h]
  int v233; // [rsp+78h] [rbp-88h]
  int v234; // [rsp+78h] [rbp-88h]
  int v235; // [rsp+78h] [rbp-88h]
  int v236; // [rsp+78h] [rbp-88h]
  int DIB; // [rsp+78h] [rbp-88h]
  int v238; // [rsp+80h] [rbp-80h]
  unsigned int v239; // [rsp+80h] [rbp-80h]
  int v240; // [rsp+80h] [rbp-80h]
  unsigned int v241; // [rsp+80h] [rbp-80h]
  int k; // [rsp+80h] [rbp-80h]
  int v243; // [rsp+80h] [rbp-80h]
  int m; // [rsp+80h] [rbp-80h]
  unsigned int v245; // [rsp+80h] [rbp-80h]
  int v246[2]; // [rsp+80h] [rbp-80h]
  stretch *v247; // [rsp+80h] [rbp-80h]
  int v248[2]; // [rsp+80h] [rbp-80h]
  int v249; // [rsp+8Ch] [rbp-74h]
  int v250; // [rsp+8Ch] [rbp-74h]
  int v251; // [rsp+8Ch] [rbp-74h]
  int v252; // [rsp+8Ch] [rbp-74h]
  int pulXlate; // [rsp+8Ch] [rbp-74h]
  int v254; // [rsp+8Ch] [rbp-74h]
  struct Gre::Base::SESSION_GLOBALS *v255; // [rsp+90h] [rbp-70h] BYREF
  int v256; // [rsp+98h] [rbp-68h]
  int v257[2]; // [rsp+A0h] [rbp-60h]
  int v258[2]; // [rsp+A8h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v259; // [rsp+B0h] [rbp-50h] BYREF
  int v260[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v261; // [rsp+C0h] [rbp-40h] BYREF
  POINTFIX v262; // [rsp+C4h] [rbp-3Ch]
  _DWORD *XlateObject; // [rsp+D0h] [rbp-30h] BYREF
  XLATEOBJ *pxlo; // [rsp+D8h] [rbp-28h]
  __int64 v265; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v266; // [rsp+E8h] [rbp-18h]
  _QWORD *v267; // [rsp+F0h] [rbp-10h]
  POINTL pptlSrc; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v269; // [rsp+100h] [rbp+0h]
  stretch *v270; // [rsp+108h] [rbp+8h] BYREF
  char v271; // [rsp+110h] [rbp+10h]
  int v272; // [rsp+114h] [rbp+14h]
  struct SURFACE *v273; // [rsp+118h] [rbp+18h]
  __int64 v274; // [rsp+120h] [rbp+20h] BYREF
  char v275; // [rsp+128h] [rbp+28h]
  int v276; // [rsp+12Ch] [rbp+2Ch]
  __int64 v277; // [rsp+130h] [rbp+30h] BYREF
  char v278; // [rsp+138h] [rbp+38h]
  int v279; // [rsp+13Ch] [rbp+3Ch]
  __int64 v280; // [rsp+140h] [rbp+40h] BYREF
  XLATEOBJ *v281; // [rsp+148h] [rbp+48h]
  __int64 v282; // [rsp+150h] [rbp+50h] BYREF
  __m128i v283; // [rsp+160h] [rbp+60h] BYREF
  HSEMAPHORE v284; // [rsp+170h] [rbp+70h] BYREF
  __int64 v285; // [rsp+178h] [rbp+78h] BYREF
  HSEMAPHORE v286; // [rsp+180h] [rbp+80h] BYREF
  __int64 v287; // [rsp+188h] [rbp+88h] BYREF
  HSEMAPHORE v288; // [rsp+190h] [rbp+90h] BYREF
  __int64 v289; // [rsp+198h] [rbp+98h] BYREF
  __int64 v290; // [rsp+1A0h] [rbp+A0h]
  HSEMAPHORE v291; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v292; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v293; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD v294[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v295; // [rsp+1D0h] [rbp+D0h]
  __int64 v296; // [rsp+1D8h] [rbp+D8h]
  _DWORD v297[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v298; // [rsp+1F0h] [rbp+F0h]
  __int64 v299; // [rsp+1F8h] [rbp+F8h]
  _DWORD v300[4]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v301; // [rsp+210h] [rbp+110h]
  __int64 v302; // [rsp+218h] [rbp+118h]
  _DWORD v303[2]; // [rsp+220h] [rbp+120h] BYREF
  XLATEOBJ *v304; // [rsp+228h] [rbp+128h]
  struct Gre::Base::SESSION_GLOBALS *v305; // [rsp+230h] [rbp+130h]
  struct Gre::Base::SESSION_GLOBALS *v306; // [rsp+238h] [rbp+138h]
  _QWORD v307[3]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v308; // [rsp+258h] [rbp+158h]
  RECTL v309; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v310[14]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v311[128]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v312[112]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v313; // [rsp+420h] [rbp+320h]
  RECTL prclDest; // [rsp+510h] [rbp+410h] BYREF
  __m128i v315; // [rsp+520h] [rbp+420h] BYREF
  __int64 v316; // [rsp+530h] [rbp+430h] BYREF
  int v317; // [rsp+538h] [rbp+438h]
  ULONG v318; // [rsp+53Ch] [rbp+43Ch]
  _BYTE v319[4]; // [rsp+540h] [rbp+440h] BYREF
  int v320; // [rsp+544h] [rbp+444h]
  int v321; // [rsp+548h] [rbp+448h]
  int v322; // [rsp+54Ch] [rbp+44Ch]
  int v323; // [rsp+550h] [rbp+450h]
  struct _POINTFIX v324; // [rsp+5E0h] [rbp+4E0h] BYREF
  FIX v325; // [rsp+5E8h] [rbp+4E8h]
  int v326; // [rsp+5ECh] [rbp+4ECh]
  int v327; // [rsp+5F0h] [rbp+4F0h]
  FIX v328; // [rsp+5F4h] [rbp+4F4h]
  FIX v329; // [rsp+5F8h] [rbp+4F8h]
  int v330; // [rsp+5FCh] [rbp+4FCh]
  struct _POINTL v331; // [rsp+600h] [rbp+500h] BYREF
  int v332; // [rsp+608h] [rbp+508h]
  unsigned int v333; // [rsp+60Ch] [rbp+50Ch]
  int v334; // [rsp+610h] [rbp+510h]
  int v335; // [rsp+614h] [rbp+514h]
  POINTFIX v336; // [rsp+618h] [rbp+518h] BYREF
  POINTFIX v337; // [rsp+620h] [rbp+520h]
  POINTFIX v338; // [rsp+628h] [rbp+528h]
  __int64 v339; // [rsp+630h] [rbp+530h] BYREF

  v256 = a7;
  v13 = 1;
  v260[0] = a3;
  v257[0] = a8;
  v261 = a4;
  v258[0] = a10;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_475;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_475:
    EngSetLastError(0x57u);
    return 0LL;
  }
  LODWORD(v259) = BYTE1(a11);
  v262.x = BYTE1(a11) & 0x80;
  BYTE1(a11) &= ~0x80u;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v310, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v311, a6, (struct XDCOBJ *)v310);
  if ( !v310[0] || (*(_DWORD *)(v310[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_59;
  }
  v269 = v310[2];
  if ( !OPTAPIDCOBJ::bValid((OPTAPIDCOBJ *)v311) )
  {
    v13 = 0;
    EngSetLastError(0x57u);
    goto LABEL_57;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v307, (struct OPTAPIDCOBJ *)v311);
  bSpDwmValidateSurface((struct XDCOBJ *)v307, v256, v257[0], a9, a10);
  bSpDwmValidateSurface((struct XDCOBJ *)v310, a2, a3, v261, a5);
  DC::QuickInitXform(v310[0], &v280, 516LL);
  DC::QuickInitXform(v307[0], &v293, 516LL);
  v14 = 0.0;
  v15 = v307[0];
  if ( (*(_BYTE *)(v293 + 32) & 1) == 0
    || (*(_BYTE *)(*(_QWORD *)(v307[0] + 976LL) + 108LL) & 1) == 0
    && (*(float *)v293 < 0.0 || *(float *)(v293 + 12) < 0.0) )
  {
    v13 = 0;
    EngSetLastError(0x57u);
    goto LABEL_56;
  }
  left = v256;
  top = v257[0];
  prclDest.left = v256;
  right = a9 + v256;
  prclDest.top = v257[0];
  bottom = v258[0] + v257[0];
  prclDest.right = a9 + v256;
  prclDest.bottom = v258[0] + v257[0];
  if ( (*(_BYTE *)(v293 + 32) & 0x43) == 0x43
    || (v21 = bCvtPts1(v293, &prclDest, 2LL, (unsigned int)v257[0]),
        bottom = prclDest.bottom,
        right = prclDest.right,
        top = prclDest.top,
        left = prclDest.left,
        v21) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v15 + 976) + 108LL) & 1) != 0 )
    {
      ++left;
      ++right;
      prclDest.left = left;
      prclDest.right = right;
    }
  }
  if ( left > right )
  {
    prclDest.left = right;
    prclDest.right = left;
  }
  if ( top > bottom )
  {
    prclDest.top = bottom;
    prclDest.bottom = top;
  }
  v22 = (*(_BYTE *)(v280 + 32) & 1) == 0
     || (*(_BYTE *)(*(_QWORD *)(v310[0] + 976LL) + 108LL) & 1) == 0
     && (v14 > *(float *)v280 || v14 > *(float *)(v280 + 12));
  v23 = a2 + v261;
  v24 = a3 + a5;
  pptlSrc.x = v22;
  if ( v22 )
  {
    v332 = a2 + v261;
    v335 = a3 + a5;
    v331.x = a2;
    v331.y = a3;
    v333 = a3;
    v334 = a2;
    EXFORMOBJ::bXform((EXFORMOBJ *)&v280, &v331, &v324, 3uLL);
    x = v324.x;
    v45 = v325;
    if ( (*(_BYTE *)(v280 + 32) & 1) != 0 )
    {
      if ( v324.x > v325 )
      {
        x = v324.x + 16;
        v45 = v325 + 16;
        v327 += 16;
        v324.x += 16;
        v325 += 16;
      }
      y = v324.y;
      v46 = v328;
      v47 = v326;
      if ( v324.y > v328 )
      {
        y = v324.y + 16;
        v47 = v326 + 16;
        v46 = v328 + 16;
        v324.y += 16;
        v328 += 16;
        v326 += 16;
      }
    }
    else
    {
      v46 = v328;
      v47 = v326;
      y = v324.y;
    }
    v329 = v45 + v327 - x;
    v330 = v46 + v47 - y;
    v49 = (v45 > x) ^ (v45 <= v329);
    v50 = (v47 > y) ^ (v47 <= v330);
    if ( *(&v324.x + 2 * v49) > *(&v324.x + 2 * (v49 ^ 3LL)) )
      v49 ^= 3u;
    if ( *(&v324.y + 2 * v50) > *(&v324.y + 2 * (v50 ^ 3LL)) )
      v50 ^= 3u;
    v51 = v50;
    v52 = *(&v324.x + 2 * v49);
    v53 = v49 ^ 3LL;
    v54 = *(&v324.y + 2 * v51);
    v26 = (v52 + 15) >> 4;
    v315.m128i_i32[0] = v26;
    v27 = (v54 + 15) >> 4;
    v23 = (*(&v324.x + 2 * v53) + 15) >> 4;
    v24 = (*(&v324.y + 2 * (v51 ^ 3)) + 15) >> 4;
    v315.m128i_i32[1] = v27;
    v315.m128i_i64[1] = __PAIR64__(v24, v23);
  }
  else
  {
    v25 = v310[0];
    v26 = a2;
    v315.m128i_i64[0] = __PAIR64__(a3, a2);
    v27 = a3;
    v315.m128i_i32[2] = a2 + v261;
    v315.m128i_i32[3] = a3 + a5;
    if ( (*(_BYTE *)(v280 + 32) & 0x43) == 0x43
      || (v28 = bCvtPts1(v280, &v315, 2LL, a3),
          v24 = v315.m128i_i32[3],
          v23 = v315.m128i_i32[2],
          v27 = v315.m128i_i32[1],
          v26 = v315.m128i_i32[0],
          v28) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v25 + 976) + 108LL) & 1) != 0 )
      {
        ++v26;
        ++v23;
        v315.m128i_i32[0] = v26;
        v315.m128i_i32[2] = v23;
      }
    }
    if ( v26 > v23 )
    {
      v43 = v26;
      v315.m128i_i32[0] = v23;
      v26 = v23;
      v315.m128i_i32[2] = v43;
      v23 = v43;
    }
    if ( v27 > v24 )
    {
      v42 = v27;
      v315.m128i_i32[1] = v24;
      v27 = v24;
      v315.m128i_i32[3] = v42;
      v24 = v42;
    }
  }
  if ( v26 == v23 || (v29 = 0, v27 == v24) )
    v29 = 1;
  if ( v29 )
    goto LABEL_56;
  if ( (*(_DWORD *)(v310[0] + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)v310, (struct ERECTL *)&v315);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v312);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v312, (struct XDCOBJ *)v310, (struct XDCOBJ *)v307) )
  {
    v221 = XDCOBJ::bFullScreen((XDCOBJ *)v307);
    v13 = XDCOBJ::bFullScreen((XDCOBJ *)v310) | v221;
    goto LABEL_55;
  }
  v31 = *(struct SURFACE **)(v310[0] + 496LL);
  v273 = v31;
  if ( !v31
    || (v32 = *((_QWORD *)v31 + 16),
        v33 = *(_QWORD *)(v310[0] + 88LL),
        v290 = v32,
        v266 = v33,
        !*(_QWORD *)(v307[0] + 496LL)) )
  {
LABEL_55:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v312);
LABEL_56:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v307);
LABEL_57:
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v311);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v310);
    return v13;
  }
  v34 = Gre::Base::Globals(v30);
  v35 = *(_QWORD *)(v307[0] + 496LL);
  if ( v35 )
  {
    v36 = v308;
    if ( !v308 )
      goto LABEL_49;
  }
  else
  {
    v36 = *((_QWORD *)v34 + 533);
  }
  v35 = v36;
  if ( !v36 )
    goto LABEL_55;
LABEL_49:
  if ( (v313 & 0x400000) == 0 || !(unsigned int)DestSurfaceAccessCheck(v31) )
  {
    v40 = 6;
    goto LABEL_54;
  }
  if ( (a11 & 0x1000000) != 0 && !(unsigned int)bIsSourceBGRA((struct SURFACE *)v35) )
  {
    EngSetLastError(0x57u);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v312);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v307);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v311);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v310);
    return 0LL;
  }
  v37 = _mm_cvtsi128_si32(v315);
  v283 = v315;
  v38 = *(_DWORD *)(v310[0] + 40LL) & 1LL;
  v39 = *(int *)(v310[0] + 8 * v38 + 1016);
  if ( (unsigned __int64)(v39 + v37 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_53;
  if ( (unsigned __int64)(v315.m128i_i32[2] + v39 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_53;
  v55 = *(int *)(v310[0] + 8 * v38 + 1020);
  if ( (unsigned __int64)(v55 + v315.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned __int64)(v55 + v315.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF
    || (v315.m128i_i32[0] = v39 + v37,
        v315.m128i_i32[2] += *(_DWORD *)(v310[0] + 8 * v38 + 1016),
        v315.m128i_i32[1] += *(_DWORD *)(v310[0] + 8 * v38 + 1020),
        v315.m128i_i32[3] += *(_DWORD *)(v310[0] + 8 * v38 + 1020),
        v56 = *(_DWORD *)(v307[0] + 40LL) & 1LL,
        v249 = *(_DWORD *)(v307[0] + 8 * v56 + 1016),
        (unsigned __int64)(prclDest.left + (__int64)v249 + 0x80000000LL) > 0xFFFFFFFF)
    || (unsigned __int64)(v249 + (__int64)prclDest.right + 0x80000000LL) > 0xFFFFFFFF
    || (v57 = *(int *)(v307[0] + 8 * v56 + 1020), (unsigned __int64)(v57 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
    || (unsigned __int64)(v57 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
  {
LABEL_53:
    v40 = 534;
LABEL_54:
    EngSetLastError(v40);
    v13 = 0;
    goto LABEL_55;
  }
  v58 = v249 + prclDest.left;
  prclDest.left += v249;
  v59 = *(_DWORD *)(v307[0] + 8 * v56 + 1016) + prclDest.right;
  prclDest.right = v59;
  v60 = *(_DWORD *)(v307[0] + 8 * v56 + 1020) + prclDest.top;
  prclDest.top = v60;
  v61 = *(_DWORD *)(v307[0] + 8 * v56 + 1020) + prclDest.bottom;
  v62 = (struct Gre::Base::SESSION_GLOBALS *)v35;
  prclDest.bottom = v61;
  v63 = *(XLATEOBJ **)(v35 + 48);
  v281 = v63;
  v255 = (struct Gre::Base::SESSION_GLOBALS *)v35;
  if ( *(_WORD *)(v35 + 100) == 1
    && (v255 = (struct Gre::Base::SESSION_GLOBALS *)v35, v63)
    && ((__int64)v63[1].pulXlate & 0x20000) != 0 )
  {
    v217 = *(_DWORD *)&v63[107].iSrcType;
    if ( v58 < v217
      || (cEntries = v63[107].cEntries, v60 < cEntries)
      || v59 > *(_DWORD *)(v35 + 56) + v217
      || (v254 = 0, v61 > cEntries + *(_DWORD *)(v35 + 60)) )
    {
      v254 = 1;
    }
    v255 = (struct Gre::Base::SESSION_GLOBALS *)v35;
    v64 = v254;
  }
  else if ( v58 < 0 || v60 < 0 || v59 > *(_DWORD *)(v35 + 56) || (v64 = 0, v61 > *((_DWORD *)v62 + 15)) )
  {
    v64 = 1;
  }
  if ( v62 == v273 && (v309 = prclDest, ERECTL::operator*=(&v309), !(unsigned int)ERECTL::bEmpty((ERECTL *)&v309))
    || v64 )
  {
    v40 = 87;
    goto LABEL_54;
  }
  v65 = 1;
  if ( (a11 & 0x1000000) == 0 && BYTE2(a11) == 0xFF && ((unsigned __int8)v259 & 1) == 0 )
  {
    v142 = v260[0];
    v143 = *(_QWORD *)(v310[0] + 976LL);
    v144 = v261;
    v145 = *(_BYTE *)(v143 + 215);
    *(_BYTE *)(v143 + 215) = 3;
    v13 = GrepStretchBlt(
            (struct XDCOBJ *)v310,
            a2,
            v142,
            v144,
            a5,
            (struct OPTAPIDCOBJ *)v311,
            v256,
            v257[0],
            a9,
            v258[0],
            0xCC0020u,
            0xFFFFFFFF,
            0);
    v65 = 0;
    *(_BYTE *)(*(_QWORD *)(v310[0] + 976LL) + 215LL) = v145;
  }
  if ( (v65 & v13) == 0 )
    goto LABEL_55;
  v66 = *((_QWORD *)v62 + 16);
  v265 = 0LL;
  v67 = *(_QWORD *)(v307[0] + 88LL);
  v68 = *(_DWORD **)(v307[0] + 976LL);
  v69 = *(_QWORD *)(v269 + 3776);
  v256 = v68[45];
  v70 = (unsigned int)v68[44];
  v250 = v68[46];
  v258[0] = v68[44];
  if ( !v66 )
  {
    if ( v32 )
    {
      if ( (*(_DWORD *)(v32 + 24) & 0x800) == 0 )
        goto LABEL_379;
      v70 = *(_QWORD *)(v33 + 80);
      v62 = v255;
      *(_QWORD *)v227 = v255;
      if ( v70 )
      {
        *(_QWORD *)v227 = v255;
        if ( v70 != *(_QWORD *)(v33 + 72) )
          goto LABEL_379;
      }
    }
    else
    {
      *(_QWORD *)v227 = v62;
    }
LABEL_243:
    v139 = Gre::Base::Globals((Gre::Base *)v70);
LABEL_244:
    XlateObject = (_DWORD *)((char *)v139 + 4552);
    goto LABEL_116;
  }
  if ( v32 )
    goto LABEL_96;
  if ( (*(_DWORD *)(v66 + 24) & 0x800) != 0 )
  {
    v141 = *(_QWORD *)(v33 + 80);
    if ( !v141 || (v62 = v255, v141 == *(_QWORD *)(v33 + 72)) )
    {
      v139 = Gre::Base::Globals((Gre::Base *)v70);
      v62 = v255;
      *(_QWORD *)v227 = v255;
      goto LABEL_244;
    }
  }
LABEL_379:
  v255 = v62;
  if ( !v66 )
    goto LABEL_112;
LABEL_96:
  *(_QWORD *)v227 = v62;
  if ( !v32 )
  {
    v62 = v255;
    goto LABEL_102;
  }
  v71 = *(_QWORD *)(v66 + 120);
  if ( v71 == v66 )
    v72 = *(_DWORD *)(v66 + 32);
  else
    v72 = *(_DWORD *)(v71 + 32);
  v73 = *(_QWORD *)(v32 + 120);
  if ( v73 == v32 )
    v70 = *(unsigned int *)(v32 + 32);
  else
    v70 = *(unsigned int *)(v73 + 32);
  if ( v72 == (_DWORD)v70 )
    goto LABEL_243;
LABEL_102:
  *(_QWORD *)v227 = v62;
  if ( !v32 )
  {
LABEL_112:
    *(_QWORD *)v227 = v62;
    goto LABEL_113;
  }
  v232 = *(_DWORD *)(v66 + 56);
  v292 = v67;
  v255 = Gre::Base::Globals((Gre::Base *)v70);
  v291 = (HSEMAPHORE)(*(_QWORD *)v255 + 312LL);
  GreAcquireSemaphoreInternal(v291);
  GrepAcquireLockValidate<13>();
  v74 = 0;
  v238 = 0;
  for ( i = 1; ; v238 += i )
  {
    if ( v74 >= 8 )
    {
      XlateObject = 0LL;
      v239 = 0;
      goto LABEL_110;
    }
    v76 = *(_QWORD *)(v66 + 120);
    if ( v76 == v66 )
      v77 = *(_DWORD *)(v66 + 32);
    else
      v77 = *(_DWORD *)(v76 + 32);
    v78 = 32LL * v232;
    if ( *(_DWORD *)((char *)v255 + v78 + 4304) != v77 )
      goto LABEL_108;
    v151 = *(_QWORD *)(v32 + 120);
    v152 = v151 == v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)(v151 + 32);
    if ( *(_DWORD *)((char *)v255 + v78 + 4308) != v152 )
      goto LABEL_108;
    v153 = *(_QWORD *)(v33 + 120);
    v154 = v153 == v33 ? *(_DWORD *)(v33 + 32) : *(_DWORD *)(v153 + 32);
    if ( *(_DWORD *)((char *)v255 + v78 + 4316) != v154 )
      goto LABEL_108;
    v155 = *(_DWORD **)((char *)v255 + v78 + 4296);
    XlateObject = v155;
    v156 = v155[19];
    if ( (v156 & 0x6000) != 0 )
      goto LABEL_108;
    v157 = v155[1];
    if ( (v157 & 4) == 0 && (v155[19] & 0x100) == 0 )
      break;
    if ( (v157 & 4) != 0 && v256 == v155[6] )
    {
      v184 = XEPALOBJ::ulTime((XEPALOBJ *)&v292);
      v158 = v255;
      if ( *(_DWORD *)((char *)v255 + v78 + 4312) == v184 )
        goto LABEL_353;
    }
    else
    {
      v158 = v255;
    }
    if ( (v156 & 0x100) != 0 && v250 == v155[7] && v258[0] == v155[8] )
      goto LABEL_353;
LABEL_108:
    v74 = i + v238;
    v232 = ((_BYTE)v232 + 1) & 7;
  }
  v158 = v255;
LABEL_353:
  _InterlockedAdd((volatile signed __int32 *)((char *)v158 + v78 + 4288), i);
  *(_DWORD *)(v66 + 56) = v232;
  v239 = i;
LABEL_110:
  SEMOBJ<13>::vUnlock(&v291);
  if ( v239 )
    goto LABEL_116;
LABEL_113:
  LODWORD(pptl) = 0;
  LODWORD(prcl) = v256;
  LODWORD(pptfx) = v258[0];
  LODWORD(pptlBrushOrg) = v250;
  XlateObject = CreateXlateObject(0LL, 0, v66, v32, v67, v33, pptlBrushOrg, pptfx, prcl, pptl);
  if ( XlateObject )
  {
    if ( !v66 )
      goto LABEL_115;
    *(_QWORD *)v227 = v62;
    if ( v32 )
    {
      v33 = v266;
      if ( (XlateObject[19] & 0x200) == 0 )
      {
        EXLATEOBJ::vAddToCache((Gre::Base *)&XlateObject, v66, v32, v67, v266);
        *(_QWORD *)v227 = v62;
      }
    }
    else
    {
      *(_QWORD *)v227 = v62;
LABEL_115:
      v33 = v266;
    }
LABEL_116:
    v233 = 1;
  }
  else
  {
    v33 = v266;
    v233 = 0;
  }
  v267 = XlateObject;
  v79 = *(Gre::Base **)(v307[0] + 976LL);
  v258[0] = *((_DWORD *)v79 + 44);
  v251 = *((_DWORD *)v79 + 46);
  if ( !v66 )
  {
    if ( v69 )
    {
      v79 = v62;
      if ( (*(_DWORD *)(v69 + 24) & 0x800) == 0 )
        goto LABEL_384;
      v188 = *(_QWORD *)(v67 + 80);
      if ( v188 )
      {
        if ( v188 != *(_QWORD *)(v67 + 72) )
          goto LABEL_384;
      }
      v91 = (XLATEOBJ *)v62;
    }
    else
    {
      v91 = (XLATEOBJ *)v62;
    }
    v136 = Gre::Base::Globals(v79);
    goto LABEL_235;
  }
  if ( !v69 )
  {
    v79 = v62;
    if ( (*(_DWORD *)(v66 + 24) & 0x800) != 0 )
    {
      v135 = *(_QWORD *)(v67 + 80);
      if ( !v135 || v135 == *(_QWORD *)(v67 + 72) )
      {
LABEL_234:
        v136 = Gre::Base::Globals(v79);
        v91 = *(XLATEOBJ **)v227;
LABEL_235:
        v90 = (XLATEOBJ *)((char *)v136 + 4552);
        *(_QWORD *)v260 = (char *)v136 + 4552;
        goto LABEL_141;
      }
    }
LABEL_384:
    v62 = v79;
    if ( v66 )
      goto LABEL_119;
    v80 = (XLATEOBJ *)v79;
    v228 = (XLATEOBJ *)v79;
    goto LABEL_135;
  }
LABEL_119:
  v80 = (XLATEOBJ *)v62;
  *(_QWORD *)v227 = v62;
  if ( v69 )
  {
    v81 = *(_QWORD *)(v66 + 120);
    v82 = v81 == v66 ? *(_DWORD *)(v66 + 32) : *(_DWORD *)(v81 + 32);
    v79 = *(Gre::Base **)(v69 + 120);
    v83 = v79 == (Gre::Base *)v69 ? *(_DWORD *)(v69 + 32) : *((_DWORD *)v79 + 8);
    if ( v82 == v83 )
      goto LABEL_234;
  }
  v228 = (XLATEOBJ *)v62;
  if ( v69 )
  {
    v257[0] = *(_DWORD *)(v66 + 56);
    v289 = v67;
    v84 = Gre::Base::Globals(v79);
    v284 = (HSEMAPHORE)(*(_QWORD *)v84 + 312LL);
    GreAcquireSemaphoreInternal(v284);
    GrepAcquireLockValidate<13>();
    v85 = 0;
    v240 = 0;
    for ( j = 1; ; v240 += j )
    {
      if ( v85 >= 8 )
      {
        v90 = 0LL;
        *(_QWORD *)v260 = 0LL;
        v241 = 0;
        goto LABEL_133;
      }
      v87 = *(_QWORD *)(v66 + 120);
      v88 = v87 == v66 ? *(_DWORD *)(v66 + 32) : *(_DWORD *)(v87 + 32);
      v89 = 32LL * (unsigned int)v257[0];
      if ( *(_DWORD *)((char *)v84 + v89 + 4304) == v88 )
      {
        v159 = *(_QWORD *)(v69 + 120);
        v160 = v159 == v69 ? *(_DWORD *)(v69 + 32) : *(_DWORD *)(v159 + 32);
        if ( *(_DWORD *)((char *)v84 + v89 + 4308) == v160 )
        {
          v161 = *(_QWORD *)(v67 + 120);
          v162 = v161 == v67 ? *(_DWORD *)(v67 + 32) : *(_DWORD *)(v161 + 32);
          if ( *(_DWORD *)((char *)v84 + v89 + 4316) == v162 )
          {
            v163 = *(_DWORD **)((char *)v84 + v89 + 4296);
            *(_QWORD *)v260 = v163;
            v164 = v163[19];
            if ( (v164 & 0x6000) == 0 )
            {
              v165 = v163[1];
              if ( (v165 & 4) == 0 && (v163[19] & 0x100) == 0 )
                break;
              if ( (v165 & 4) != 0 && v256 == v163[6] )
              {
                v185 = XEPALOBJ::ulTime((XEPALOBJ *)&v289);
                if ( *(_DWORD *)((char *)v84 + v89 + 4312) == v185 )
                  break;
              }
              if ( (v164 & 0x100) != 0 && v251 == v163[7] && v258[0] == v163[8] )
                break;
            }
          }
        }
      }
      v85 = j + v240;
      v257[0] = (LOBYTE(v257[0]) + 1) & 7;
    }
    _InterlockedAdd((volatile signed __int32 *)((char *)v84 + v89 + 4288), j);
    v90 = *(XLATEOBJ **)v260;
    *(_DWORD *)(v66 + 56) = v257[0];
    v241 = j;
LABEL_133:
    SEMOBJ<13>::vUnlock(&v284);
    if ( !v241 )
    {
      v80 = v228;
      goto LABEL_135;
    }
LABEL_140:
    v91 = v228;
    goto LABEL_141;
  }
  v228 = (XLATEOBJ *)v62;
LABEL_135:
  LODWORD(pptl) = 0;
  pxlo = v80;
  LODWORD(prcl) = v256;
  LODWORD(pptfx) = v258[0];
  LODWORD(pptlBrushOrg) = v251;
  *(_QWORD *)v260 = CreateXlateObject(0LL, 0, v66, v69, v67, v67, pptlBrushOrg, pptfx, prcl, pptl);
  v90 = *(XLATEOBJ **)v260;
  if ( *(_QWORD *)v260 )
  {
    if ( !v66 )
      goto LABEL_140;
    v228 = pxlo;
    if ( v69 && (*(_DWORD *)(*(_QWORD *)v260 + 76LL) & 0x200) == 0 )
    {
      EXLATEOBJ::vAddToCache((Gre::Base *)v260, v66, v69, v67, v67);
      goto LABEL_140;
    }
    v91 = pxlo;
LABEL_141:
    v92 = 1;
  }
  else
  {
    v91 = v228;
    v92 = 0;
  }
  v234 = v92 & v233;
  pxlo = v90;
  v93 = *(Gre::Base **)(v307[0] + 976LL);
  v258[0] = *((_DWORD *)v93 + 44);
  v252 = *((_DWORD *)v93 + 46);
  if ( !v32 )
  {
    if ( v69 )
    {
      if ( (*(_DWORD *)(v69 + 24) & 0x800) == 0 )
        goto LABEL_389;
      v93 = *(Gre::Base **)(v33 + 80);
      *(_QWORD *)v229 = v91;
      if ( v93 )
      {
        *(_QWORD *)v229 = v91;
        if ( v93 != *(Gre::Base **)(v33 + 72) )
          goto LABEL_389;
      }
    }
    else
    {
      *(_QWORD *)v229 = v91;
    }
LABEL_250:
    v140 = Gre::Base::Globals(v93);
LABEL_251:
    v102 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v140 + 4552);
    v259 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v140 + 4552);
    goto LABEL_166;
  }
  if ( !v69 )
  {
    if ( (*(_DWORD *)(v32 + 24) & 0x800) != 0 )
    {
      v93 = *(Gre::Base **)(v33 + 80);
      if ( !v93 || v93 == *(Gre::Base **)(v33 + 72) )
      {
        v140 = Gre::Base::Globals(v93);
        *(_QWORD *)v229 = v91;
        goto LABEL_251;
      }
    }
LABEL_389:
    if ( v32 )
      goto LABEL_144;
    goto LABEL_160;
  }
LABEL_144:
  *(_QWORD *)v229 = v91;
  if ( v69 )
  {
    v94 = *(_QWORD *)(v32 + 120);
    v95 = v94 == v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)(v94 + 32);
    v96 = *(_QWORD *)(v69 + 120);
    v93 = v96 == v69 ? (Gre::Base *)*(unsigned int *)(v69 + 32) : (Gre::Base *)*(unsigned int *)(v96 + 32);
    if ( v95 == (_DWORD)v93 )
      goto LABEL_250;
  }
  *(_QWORD *)v229 = v91;
  if ( !v69 )
  {
LABEL_160:
    *(_QWORD *)v229 = v91;
    goto LABEL_161;
  }
  v257[0] = *(_DWORD *)(v32 + 56);
  v285 = v33;
  v259 = Gre::Base::Globals(v93);
  v286 = (HSEMAPHORE)(*(_QWORD *)v259 + 312LL);
  GreAcquireSemaphoreInternal(v286);
  GrepAcquireLockValidate<13>();
  v97 = v259;
  v98 = 0;
  for ( k = 0; ; ++k )
  {
    if ( v98 >= 8 )
    {
      v102 = 0LL;
      v259 = 0LL;
      v243 = 0;
      goto LABEL_158;
    }
    v99 = *(_QWORD *)(v32 + 120);
    v100 = v99 == v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)(v99 + 32);
    v101 = 32LL * (unsigned int)v257[0];
    if ( *(_DWORD *)((char *)v97 + v101 + 4304) == v100 )
    {
      v166 = *(_QWORD *)(v69 + 120);
      v167 = v166 == v69 ? *(_DWORD *)(v69 + 32) : *(_DWORD *)(v166 + 32);
      if ( *(_DWORD *)((char *)v97 + v101 + 4308) == v167 )
      {
        v168 = *(_QWORD *)(v33 + 120);
        v169 = v168 == v33 ? *(_DWORD *)(v33 + 32) : *(_DWORD *)(v168 + 32);
        if ( *(_DWORD *)((char *)v97 + v101 + 4316) == v169 )
        {
          v170 = *(struct Gre::Base::SESSION_GLOBALS **)((char *)v97 + v101 + 4296);
          v259 = v170;
          v171 = *((_DWORD *)v170 + 19);
          if ( (v171 & 0x6000) == 0 )
          {
            v172 = *((_DWORD *)v170 + 1);
            if ( (v172 & 4) == 0 && (*((_DWORD *)v170 + 19) & 0x100) == 0 )
              break;
            if ( (v172 & 4) != 0 && v256 == *((_DWORD *)v170 + 6) )
            {
              v186 = XEPALOBJ::ulTime((XEPALOBJ *)&v285);
              if ( *(_DWORD *)((char *)v97 + v101 + 4312) == v186 )
                break;
            }
            if ( (v171 & 0x100) != 0 && v252 == *((_DWORD *)v170 + 7) && v258[0] == *((_DWORD *)v170 + 8) )
              break;
          }
        }
      }
    }
    v98 = k + 1;
    v257[0] = (LOBYTE(v257[0]) + 1) & 7;
  }
  _InterlockedAdd((volatile signed __int32 *)((char *)v97 + v101 + 4288), 1u);
  v90 = *(XLATEOBJ **)v260;
  v243 = 1;
  v102 = v259;
  *(_DWORD *)(v32 + 56) = v257[0];
LABEL_158:
  SEMOBJ<13>::vUnlock(&v286);
  if ( v243 )
  {
LABEL_166:
    v103 = 1;
  }
  else
  {
LABEL_161:
    LODWORD(pptl) = 0;
    LODWORD(prcl) = v256;
    LODWORD(pptfx) = v258[0];
    LODWORD(pptlBrushOrg) = v252;
    v259 = (struct Gre::Base::SESSION_GLOBALS *)CreateXlateObject(
                                                  0LL,
                                                  0,
                                                  v32,
                                                  v69,
                                                  v33,
                                                  v33,
                                                  pptlBrushOrg,
                                                  pptfx,
                                                  prcl,
                                                  pptl);
    v102 = v259;
    if ( v259 )
    {
      if ( v32 )
      {
        *(_QWORD *)v229 = v91;
        if ( v69 )
        {
          if ( (*((_DWORD *)v259 + 19) & 0x200) == 0 )
          {
            EXLATEOBJ::vAddToCache((Gre::Base *)&v259, v32, v69, v33, v33);
            *(_QWORD *)v229 = v91;
          }
        }
        else
        {
          *(_QWORD *)v229 = v91;
        }
      }
      goto LABEL_166;
    }
    v103 = 0;
  }
  v235 = v103 & v234;
  v104 = *(XLATEOBJ **)(v307[0] + 976LL);
  v258[0] = *(_DWORD *)&v104[7].iSrcType;
  pulXlate = (int)v104[7].pulXlate;
  if ( !v69 )
  {
    if ( v32 )
    {
      v104 = v91;
      if ( (*(_DWORD *)(v32 + 24) & 0x800) == 0 )
        goto LABEL_394;
      v189 = *(_QWORD *)(v33 + 80);
      if ( v189 )
      {
        if ( v189 != *(_QWORD *)(v33 + 72) )
          goto LABEL_394;
      }
      v117 = v91;
    }
    else
    {
      v117 = v91;
    }
    v138 = Gre::Base::Globals((Gre::Base *)v104);
    goto LABEL_240;
  }
  if ( !v32 )
  {
    v104 = v91;
    if ( (*(_DWORD *)(v69 + 24) & 0x800) != 0 )
    {
      v137 = *(_QWORD *)(v33 + 80);
      if ( !v137 || v137 == *(_QWORD *)(v33 + 72) )
      {
LABEL_239:
        v138 = Gre::Base::Globals((Gre::Base *)v104);
        v117 = *(XLATEOBJ **)v229;
LABEL_240:
        v116 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v138 + 4552);
        *(_QWORD *)v257 = (char *)v138 + 4552;
        v255 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v138 + 4552);
        goto LABEL_191;
      }
    }
LABEL_394:
    v91 = v104;
    if ( v69 )
      goto LABEL_169;
    v105 = v104;
    *(_QWORD *)v230 = v104;
    goto LABEL_185;
  }
LABEL_169:
  v105 = v91;
  *(_QWORD *)v229 = v91;
  if ( v32 )
  {
    v106 = *(_QWORD *)(v69 + 120);
    v107 = v106 == v69 ? *(_DWORD *)(v69 + 32) : *(_DWORD *)(v106 + 32);
    v104 = *(XLATEOBJ **)(v32 + 120);
    v108 = v104 == (XLATEOBJ *)v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)&v104[1].iSrcType;
    if ( v107 == v108 )
      goto LABEL_239;
  }
  *(_QWORD *)v230 = v91;
  if ( v32 )
  {
    v109 = *(_DWORD *)(v69 + 56);
    v287 = v33;
    v255 = Gre::Base::Globals((Gre::Base *)v104);
    v288 = (HSEMAPHORE)(*(_QWORD *)v255 + 312LL);
    GreAcquireSemaphoreInternal(v288);
    GrepAcquireLockValidate<13>();
    v110 = v255;
    v111 = 0;
    v112 = 1;
    for ( m = 0; ; m += v112 )
    {
      if ( v111 >= 8 )
      {
        v116 = 0LL;
        *(_QWORD *)v257 = 0LL;
        v255 = 0LL;
        v245 = 0;
        goto LABEL_183;
      }
      v113 = *(_QWORD *)(v69 + 120);
      v114 = v113 == v69 ? *(_DWORD *)(v69 + 32) : *(_DWORD *)(v113 + 32);
      v115 = 32LL * v109;
      if ( *(_DWORD *)((char *)v110 + v115 + 4304) == v114 )
      {
        v173 = *(_QWORD *)(v32 + 120);
        v174 = v173 == v32 ? *(_DWORD *)(v32 + 32) : *(_DWORD *)(v173 + 32);
        if ( *(_DWORD *)((char *)v110 + v115 + 4308) == v174 )
        {
          v175 = *(_QWORD *)(v33 + 120);
          v176 = v175 == v33 ? *(_DWORD *)(v33 + 32) : *(_DWORD *)(v175 + 32);
          if ( *(_DWORD *)((char *)v110 + v115 + 4316) == v176 )
          {
            v177 = *(struct Gre::Base::SESSION_GLOBALS **)((char *)v110 + v115 + 4296);
            v255 = v177;
            v178 = *((_DWORD *)v177 + 19);
            if ( (v178 & 0x6000) == 0 )
            {
              v179 = *((_DWORD *)v177 + 1);
              if ( (v179 & 4) == 0 && (*((_DWORD *)v177 + 19) & 0x100) == 0 )
                break;
              if ( (v179 & 4) != 0 && v256 == *((_DWORD *)v177 + 6) )
              {
                v187 = XEPALOBJ::ulTime((XEPALOBJ *)&v287);
                if ( *((_DWORD *)v110 + 8 * v109 + 1078) == v187 )
                  break;
              }
              if ( (v178 & 0x100) != 0 && pulXlate == *((_DWORD *)v177 + 7) && v258[0] == *((_DWORD *)v177 + 8) )
                break;
            }
          }
        }
      }
      v109 = ((_BYTE)v109 + 1) & 7;
      v111 = v112 + m;
    }
    _InterlockedAdd((volatile signed __int32 *)v110 + 8 * v109 + 1072, v112);
    v90 = *(XLATEOBJ **)v260;
    v102 = v259;
    *(_DWORD *)(v69 + 56) = v109;
    v116 = v255;
    *(_QWORD *)v257 = v255;
    v245 = v112;
LABEL_183:
    SEMOBJ<13>::vUnlock(&v288);
    if ( !v245 )
    {
      v105 = *(XLATEOBJ **)v230;
      goto LABEL_185;
    }
LABEL_190:
    v117 = *(XLATEOBJ **)v230;
    goto LABEL_191;
  }
  *(_QWORD *)v230 = v91;
LABEL_185:
  LODWORD(pptl) = 0;
  *(_QWORD *)v246 = v105;
  LODWORD(prcl) = v256;
  LODWORD(pptfx) = v258[0];
  LODWORD(pptlBrushOrg) = pulXlate;
  *(_QWORD *)v257 = CreateXlateObject(0LL, 0, v69, v32, v33, v33, pptlBrushOrg, pptfx, prcl, pptl);
  v116 = *(struct Gre::Base::SESSION_GLOBALS **)v257;
  v255 = *(struct Gre::Base::SESSION_GLOBALS **)v257;
  if ( *(_QWORD *)v257 )
  {
    if ( !v69 )
      goto LABEL_190;
    *(_QWORD *)v230 = *(_QWORD *)v246;
    if ( v32 && (*(_DWORD *)(*(_QWORD *)v257 + 76LL) & 0x200) == 0 )
    {
      EXLATEOBJ::vAddToCache((Gre::Base *)&v255, v69, v32, v33, v33);
      goto LABEL_190;
    }
    v117 = *(XLATEOBJ **)v246;
LABEL_191:
    v13 = 1;
    v118 = 1;
  }
  else
  {
    v117 = *(XLATEOBJ **)v230;
    v118 = 0;
    v13 = 1;
  }
  v236 = v118 & v235;
  XDCOBJ::prgnEffRao((XDCOBJ *)v310);
  XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v319);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v319, v119, (const struct ERECTL *)&v315, 0);
  if ( v320 == v322 || v321 == v323 )
  {
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v255);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v259);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v260);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v265);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&XlateObject);
    goto LABEL_55;
  }
  v270 = 0LL;
  v271 = 0;
  v272 = 0;
  v121 = *((_QWORD *)v273 + 6);
  *(_QWORD *)v258 = v121;
  v247 = (stretch *)v117;
  if ( !v262.x
    || (v247 = (stretch *)v117,
        v120 = (struct ECLIPOBJ *)*(unsigned int *)(*(_QWORD *)(v310[0] + 976LL) + 108LL),
        ((unsigned __int8)v120 & 1) == 0)
    || (v120 = (struct ECLIPOBJ *)((unsigned __int8)v120 & 9), v247 = (stretch *)v117, (_BYTE)v120 == 9) )
  {
    v122 = (stretch *)v117;
    goto LABEL_196;
  }
  v297[1] = *(_DWORD *)&v117[2].iSrcType;
  v297[2] = v117[2].cEntries;
  v297[0] = v117[4].iUniq;
  v146 = *(__int64 **)&v117[5].iSrcType;
  v297[3] = 0;
  v299 = 0LL;
  v298 = *v146;
  SURFMEM::bCreateDIB((SURFMEM *)&v270, (struct _DEVBITMAPINFO *)v297, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v270 )
  {
    v147 = ((__int64)v117[4].pulXlate & 0x400) == 0;
    v317 = *(_DWORD *)&v117[2].iSrcType;
    v318 = v117[2].cEntries;
    v316 = 0LL;
    v282 = 0LL;
    v148 = v147
         ? EngCopyBits
         : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))&v281[118].iUniq;
    if ( ((unsigned int (__fastcall *)(char *, XLATEOBJ *, _QWORD, _QWORD, __int64 *, __int64 *))v148)(
           (char *)v270 + 24,
           &v117[1],
           0LL,
           0LL,
           &v316,
           &v282) )
    {
      v149 = *((_DWORD *)v270 + 24);
      if ( (unsigned int)(v149 - 1) <= 5 )
      {
        ((void (*)(void))(&stretch::apfnMirror)[v149])();
        v122 = v270;
        v247 = v270;
LABEL_196:
        v277 = 0LL;
        v278 = 0;
        v279 = 0;
        v274 = 0LL;
        v275 = 0;
        v276 = 0;
        if ( !pptlSrc.x )
        {
LABEL_197:
          if ( !v236 )
          {
            v150 = 6;
            goto LABEL_288;
          }
          ++*((_DWORD *)v273 + 23);
          v123 = v310[0];
          if ( *(_QWORD *)(v310[0] + 48LL) == *(_QWORD *)(v307[0] + 48LL)
            || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v310)
            && (v123 = v310[0],
                v120 = *(struct ECLIPOBJ **)(v310[0] + 48LL),
                *((_QWORD *)v120 + 439) == *(_QWORD *)(v307[0] + 48LL)) )
          {
            if ( (*(_DWORD *)(v123 + 36) & 0xE0) != 0 )
            {
              v283 = v315;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v310, v120, (struct ERECTL *)&v283);
            }
            v303[1] = 0;
            v303[0] = a11;
            v304 = pxlo;
            v305 = v102;
            v306 = v116;
            if ( v315.m128i_i32[2] - v315.m128i_i32[0] == prclDest.right - prclDest.left
              && v315.m128i_i32[3] - v315.m128i_i32[1] == prclDest.bottom - prclDest.top )
            {
              BYTE1(v303[0]) = BYTE1(a11) & 0xFE;
            }
            if ( (*((_DWORD *)v273 + 28) & 0x10000) != 0 )
              v124 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v121 + 3248);
            else
              v124 = EngAlphaBlend;
            v125 = (char *)v122 + 24;
            if ( !v122 )
              v125 = 0LL;
            v13 = ((__int64 (__fastcall *)(char *, char *, _BYTE *, _QWORD *, __m128i *, RECTL *, _DWORD *))v124)(
                    (char *)v273 + 24,
                    v125,
                    v319,
                    v267,
                    &v315,
                    &prclDest,
                    v303);
          }
          else
          {
            v150 = 87;
LABEL_288:
            EngSetLastError(v150);
            v13 = 0;
          }
          SURFMEM::~SURFMEM((SURFMEM *)&v274);
          SURFMEM::~SURFMEM((SURFMEM *)&v277);
          SURFMEM::~SURFMEM((SURFMEM *)&v270);
          if ( v116 )
          {
            v129 = *((_DWORD *)v116 + 9);
            if ( v129 >= 0 )
            {
              v180 = Gre::Base::Globals(v127);
              v127 = (Gre::Base *)(32 * (*((int *)v116 + 9) + 134LL));
              _InterlockedAdd((volatile signed __int32 *)((char *)v180 + (_QWORD)v127), 0xFFFFFFFF);
              v90 = *(XLATEOBJ **)v260;
              v102 = v259;
            }
            else if ( v129 == -1 )
            {
              FreeThreadBufferWithTag(v116, v126, v128);
            }
          }
          if ( v102 )
          {
            v130 = *((_DWORD *)v102 + 9);
            if ( v130 >= 0 )
            {
              v181 = Gre::Base::Globals(v127);
              v127 = (Gre::Base *)(32 * (*((int *)v102 + 9) + 134LL));
              _InterlockedAdd((volatile signed __int32 *)((char *)v181 + (_QWORD)v127), 0xFFFFFFFF);
              v90 = *(XLATEOBJ **)v260;
            }
            else if ( v130 == -1 )
            {
              FreeThreadBufferWithTag(v102, v126, v128);
            }
          }
          if ( v90 )
          {
            v131 = v90[1].cEntries;
            if ( v131 >= 0 )
            {
              v182 = Gre::Base::Globals(v127);
              v127 = (Gre::Base *)(32 * ((int)v90[1].cEntries + 134LL));
              _InterlockedAdd((volatile signed __int32 *)((char *)v182 + (_QWORD)v127), 0xFFFFFFFF);
            }
            else if ( v131 == -1 )
            {
              FreeThreadBufferWithTag(v90, v126, v128);
            }
          }
          v132 = v265;
          if ( v265 )
          {
            v133 = *(_DWORD *)(v265 + 36);
            if ( v133 >= 0 )
            {
              v183 = Gre::Base::Globals(v127);
              v127 = (Gre::Base *)(32 * (*(int *)(v132 + 36) + 134LL));
              _InterlockedAdd((volatile signed __int32 *)((char *)v183 + (_QWORD)v127), 0xFFFFFFFF);
            }
            else if ( v133 == -1 )
            {
              FreeThreadBufferWithTag(v265, v126, v128);
            }
          }
          if ( XlateObject )
          {
            v134 = XlateObject[9];
            if ( v134 >= 0 )
            {
              _InterlockedAdd(
                (volatile signed __int32 *)Gre::Base::Globals(v127) + 8 * XlateObject[9] + 1072,
                0xFFFFFFFF);
            }
            else if ( v134 == -1 )
            {
              FreeThreadBufferWithTag(XlateObject, v126, v128);
            }
          }
          goto LABEL_55;
        }
        v294[1] = v315.m128i_i32[2] - v315.m128i_i32[0];
        v294[2] = v315.m128i_i32[3] - v315.m128i_i32[1];
        v294[3] = 0;
        v296 = 0LL;
        v190 = *(_QWORD **)(v269 + 3776);
        v294[0] = 6;
        v295 = *v190;
        v267 = v190;
        v191 = SURFMEM::bCreateDIB((SURFMEM *)&v277, (struct _DEVBITMAPINFO *)v294, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) & v236;
        if ( !v191 )
          goto LABEL_426;
        if ( (a11 & 0x1000000) != 0 )
          goto LABEL_420;
        v300[1] = prclDest.right - prclDest.left;
        v300[2] = prclDest.bottom - prclDest.top;
        v300[3] = 0;
        v192 = *(__int64 **)(v269 + 3776);
        v302 = 0LL;
        v300[0] = 6;
        v301 = *v192;
        DIB = SURFMEM::bCreateDIB((SURFMEM *)&v274, (struct _DEVBITMAPINFO *)v300, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        v191 = DIB;
        if ( !DIB )
          goto LABEL_420;
        v231 = prclDest.left;
        pptlSrc.x = prclDest.left;
        v262.x = prclDest.top;
        pptlSrc.y = prclDest.top;
        if ( (int)LongLongToLong(0LL, &v261) < 0
          || (int)LongLongToLong(prclDest.right - v193, &v261) < 0
          || (int)LongLongToLong(0LL, &v261) < 0
          || (int)LongLongToLong(prclDest.bottom - v194, &v261) < 0 )
        {
          v220 = 87;
        }
        else
        {
          v198 = v196 - v197;
          v199 = v195 - v262.x;
          *(_QWORD *)&prclDest.left = 0LL;
          prclDest.right = v198;
          v200 = 0;
          prclDest.bottom = v199;
          if ( v198 > 0 && v199 > 0 && v231 <= *((_DWORD *)v247 + 14) && v262.x <= *((_DWORD *)v247 + 15) )
          {
            v219 = (SURFOBJ *)(v274 + 24);
            if ( !v274 )
              v219 = 0LL;
            EngCopyBits(v219, (SURFOBJ *)((char *)v247 + 24), 0LL, v90, &prclDest, &pptlSrc);
            v199 = prclDest.bottom;
            v198 = prclDest.right;
            v200 = prclDest.top;
          }
          v201 = (int *)v274;
          v247 = (stretch *)v274;
          v202 = *(XLATEOBJ **)(v274 + 80);
          v281 = (XLATEOBJ *)((char *)v202 + *(_DWORD *)(v274 + 60) * *(_DWORD *)(v274 + 88));
          if ( v202 != v281 )
          {
            v203 = 0;
            do
            {
              if ( v203 < v199 && v203 >= v200 )
              {
                v213 = v202;
                pxlo = (XLATEOBJ *)((char *)v202 + 4 * v201[14]);
                v214 = 0;
                if ( v202 != pxlo )
                {
                  v215 = prclDest.left;
                  v216 = pxlo;
                  do
                  {
                    if ( v214 < v198 && v214 >= v215 )
                    {
                      v213->iUniq |= 0xFF000000;
                      v198 = prclDest.right;
                      v215 = prclDest.left;
                    }
                    ++v214;
                    v213 = (XLATEOBJ *)((char *)v213 + 4);
                  }
                  while ( v213 != v216 );
                  v199 = prclDest.bottom;
                  v200 = prclDest.top;
                  v201 = (int *)v274;
                }
              }
              ++v203;
              v202 = (XLATEOBJ *)((char *)v202 + v201[22]);
            }
            while ( v202 != v281 );
            v247 = (stretch *)v201;
          }
          v191 = DIB;
          HIBYTE(a11) |= 1u;
          pxlo = (XLATEOBJ *)(v269 + 4552);
LABEL_420:
          v204 = *(_DWORD **)(v277 + 72);
          v205 = (unsigned __int64)*(unsigned int *)(v277 + 64) >> 2;
          if ( v205 )
          {
            if ( ((unsigned __int8)v204 & 4) != 0 )
            {
              *v204 = 0;
              if ( --v205 )
              {
                ++v204;
                goto LABEL_424;
              }
            }
            else
            {
LABEL_424:
              memset(v204, 0, 8 * (v205 >> 1));
              if ( (v205 & 1) != 0 )
                v204[v205 - 1] = 0;
            }
          }
LABEL_426:
          if ( v191 )
          {
            v206 = &v336;
            v207 = 3LL;
            do
            {
              EPOINTFIX::EPOINTFIX((EPOINTFIX *)v206++);
              --v207;
            }
            while ( v207 );
            v262.x = v324.x - 16 * v283.m128i_i32[0];
            v262.y = v324.y - 16 * v283.m128i_i32[1];
            v336 = v262;
            v262.x = v325 - 16 * v283.m128i_i32[0];
            v262.y = v326 - 16 * v283.m128i_i32[1];
            v337 = v262;
            v262.x = v327 - 16 * v283.m128i_i32[0];
            v262.y = v328 - 16 * v283.m128i_i32[1];
            v338 = v262;
            v208 = (SURFOBJ *)((char *)v247 + 24);
            if ( !v247 )
              v208 = 0LL;
            v209 = (SURFOBJ *)(v277 + 24);
            if ( !v277 )
              v209 = 0LL;
            v210 = 3LL;
            EngPlgBlt(v209, v208, 0LL, 0LL, pxlo, 0LL, 0LL, &v336, &prclDest, 0LL, 3u);
            inited = EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v265,
                       0LL,
                       0,
                       (__int64)v267,
                       v290,
                       0LL,
                       v266,
                       *(_DWORD *)(*(_QWORD *)(v307[0] + 976LL) + 184LL),
                       *(_DWORD *)(*(_QWORD *)(v307[0] + 976LL) + 176LL),
                       v256,
                       0);
            v121 = *(_QWORD *)v258;
            v236 = inited;
            v267 = (_QWORD *)v265;
            *(_QWORD *)v248 = v277;
            pxlo = (XLATEOBJ *)(v269 + 4552);
            v212 = (struct BLTINFO *)&v339;
            prclDest.right = v315.m128i_i32[2] - v315.m128i_i32[0];
            prclDest.bottom = v315.m128i_i32[3] - v315.m128i_i32[1];
            *(_QWORD *)&prclDest.left = 0LL;
            do
            {
              v212 = (struct BLTINFO *)((char *)v212 - 8);
              vSrcCopyDummy(v212);
              --v210;
            }
            while ( v210 );
            v116 = *(struct Gre::Base::SESSION_GLOBALS **)v257;
            v122 = *(stretch **)v248;
            goto LABEL_197;
          }
          v220 = 8;
        }
        EngSetLastError(v220);
        SURFMEM::~SURFMEM((SURFMEM *)&v274);
        SURFMEM::~SURFMEM((SURFMEM *)&v277);
      }
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v270);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v255);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v259);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v260);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v265);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&XlateObject);
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v312);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v307);
LABEL_59:
  MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v310);
  return 0LL;
}
