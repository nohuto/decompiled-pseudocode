/*
 * XREFs of ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0
 * Callers:
 *     NtGdiBitBlt @ 0x1400B5500 (NtGdiBitBlt.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GreClientRgnUpdatedStable @ 0x140013468 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1400702E0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400B438C (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0N@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B4420 (--$GreAcquireSemaphoreCommon@$0N@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1402524D8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x140264BFC (SimBitBlt.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepBitBltImpl(
        struct XDCOBJ *a1,
        unsigned int a2,
        LONG top,
        int a4,
        unsigned int a5,
        struct OPTAPIDCOBJ *a6,
        int a7,
        int a8,
        signed int a9,
        int a10,
        char a11)
{
  struct XDCOBJ *v11; // r10
  int v12; // r14d
  __int64 v14; // r8
  LONG left; // ebx
  int v16; // r12d
  struct OPTAPIDCOBJ *v17; // rcx
  char v18; // si
  __int64 v19; // rax
  unsigned int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // edx
  int v24; // r15d
  LONG x; // edx
  LONG y; // r8d
  int v27; // eax
  LONG right; // edx
  XDCOBJ *v29; // r15
  DC *v30; // r14
  int v31; // eax
  LONG v32; // eax
  LONG bottom; // r8d
  DC *v34; // rax
  Gre::Base *v35; // rcx
  struct Gre::Base::SESSION_GLOBALS *v36; // rax
  Gre::Base *v37; // rcx
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r9
  DC *v41; // r8
  __int64 v42; // rbx
  OPTAPIDCOBJ *v43; // r10
  unsigned __int8 v44; // cl
  Gre::Base *v45; // rcx
  unsigned int v46; // r12d
  DC *v47; // rax
  DC *v48; // rcx
  unsigned int CurrentProcessId; // eax
  DC *v50; // rdi
  unsigned int v51; // ebx
  char *v52; // r14
  struct _DC_ATTR *UserAttr; // rax
  struct Gre::Base::SESSION_GLOBALS *v55; // rax
  DC *v56; // rcx
  __int64 v57; // r13
  int v58; // eax
  int v59; // eax
  int v60; // r9d
  __int64 v61; // rax
  __int64 v62; // rbx
  int v63; // r10d
  int v64; // r12d
  int v65; // r11d
  __int64 v66; // rax
  int v67; // ecx
  LONG v68; // ecx
  int v69; // ecx
  int v70; // r10d
  LONG v71; // ecx
  Gre::Base *v72; // rax
  __m128i v73; // xmm2
  Gre::Base *v74; // rcx
  int v75; // r10d
  __int64 v76; // rax
  LONG v77; // edi
  int v78; // r8d
  int v79; // r9d
  LONG v80; // r15d
  int *v81; // r10
  LONG *v82; // r11
  int *v83; // rax
  LONG *v84; // r14
  XDCOBJ *v85; // rdi
  unsigned int v86; // r11d
  __int64 v87; // r14
  __int64 v88; // r15
  XLATEOBJ *v89; // rdi
  int v90; // edi
  __int64 v91; // rax
  __int64 v92; // r15
  Gre::Base *v93; // rcx
  __int64 v94; // rax
  int v95; // edx
  __int64 v96; // rax
  OPTAPIDCOBJ *v97; // rdx
  unsigned int v98; // r14d
  struct Gre::Base::SESSION_GLOBALS *v99; // r15
  unsigned int i; // r8d
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rax
  XLATEOBJ *XlateObject; // rax
  Gre::Base *v105; // rcx
  __int64 v106; // rcx
  int v107; // r9d
  __int64 v108; // r12
  bool v109; // sf
  int v110; // ecx
  __int64 v111; // rbx
  __int64 v112; // r10
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // r9
  __int64 v116; // r8
  __int64 v117; // r10
  DC *v118; // r11
  int v119; // eax
  int v120; // r15d
  int v121; // r14d
  int v122; // r10d
  int v123; // r9d
  int v124; // r8d
  int v125; // edx
  int v126; // ebx
  LONG v127; // r10d
  LONG v128; // edx
  int v129; // r12d
  LONG v130; // r8d
  XDCOBJ *v131; // r14
  DC *v132; // rax
  int v133; // ecx
  int v134; // eax
  SURFACE *v135; // r15
  char v136; // r12
  __int64 v137; // rax
  __int64 v138; // rbx
  int v139; // eax
  int v140; // r14d
  int v141; // eax
  int cEntries; // eax
  _DWORD *v143; // rdi
  struct REGION *v144; // rax
  struct Gre::Base::SESSION_GLOBALS *v145; // r14
  __int64 j; // rdx
  __int64 v147; // r8
  __int64 v148; // rcx
  __int64 v149; // rdx
  int v150; // eax
  XLATEOBJ *v151; // rdx
  int v152; // eax
  OPTAPIDCOBJ *v153; // rdx
  int (*v154)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v155; // rdx
  int v156; // r11d
  unsigned int v157; // eax
  __int64 v158; // rax
  __int64 v159; // rdi
  OPTAPIDCOBJ *v160; // rax
  int v161; // edx
  XLATEOBJ *v162; // rax
  int v163; // r9d
  __int64 v164; // rdx
  char *v165; // rdi
  int v166; // ecx
  int v167; // eax
  __int64 v168; // rax
  __int64 v169; // rax
  SURFOBJ *v170; // r10
  _OWORD *v171; // r8
  unsigned int v172; // ebx
  int v173; // r10d
  int v174; // ecx
  struct _GRETHREAD *v175; // rax
  Gre::Base *v176; // rcx
  struct _GRETHREAD *v177; // rax
  struct _GRETHREAD *v178; // rax
  struct _GRETHREAD *CurrentThread; // rax
  BOOL v180; // ebx
  _DWORD *v181; // rax
  _DWORD *v182; // rax
  struct _GRETHREAD *v183; // rax
  __m128i v184; // xmm0
  float v185; // xmm3_4
  __m128i v186; // xmm1
  __m128i v187; // xmm2
  __m128i v188; // xmm5
  float v189; // xmm4_4
  int v190; // r9d
  unsigned int v191; // r8d
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // r11
  int v195; // r9d
  unsigned int v196; // r8d
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // r12
  int v200; // r9d
  unsigned int v201; // r8d
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // r10
  int v205; // r9d
  unsigned int v206; // r8d
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rbx
  __m128i v210; // xmm0
  int v211; // r8d
  unsigned int v212; // edx
  __m128i v213; // xmm1
  __m128i v214; // xmm2
  __m128i v215; // xmm5
  __int64 v216; // rax
  __int64 v217; // rax
  int v218; // r9d
  unsigned int v219; // edx
  __int64 v220; // rax
  __int64 v221; // rax
  int v222; // r11d
  unsigned int v223; // edx
  __int64 v224; // rax
  __int64 v225; // rax
  int v226; // r11d
  unsigned int v227; // edx
  __int64 v228; // rax
  __int64 v229; // rax
  float v230; // xmm4_4
  float v231; // xmm6_4
  __m128i v232; // xmm0
  int v233; // r12d
  unsigned int v234; // ebx
  __m128i v235; // xmm1
  __m128i v236; // xmm2
  __m128i v237; // xmm3
  __int64 v238; // rax
  __int64 v239; // rax
  __int64 v240; // rax
  int v241; // r12d
  unsigned int v242; // ebx
  __int64 v243; // rax
  __int64 v244; // rax
  __int64 v245; // rax
  int v246; // r12d
  unsigned int v247; // ebx
  __int64 v248; // rax
  __int64 v249; // rax
  __int64 v250; // rax
  int v251; // r12d
  unsigned int v252; // ebx
  __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // rcx
  __m128i v256; // xmm0
  int v257; // r14d
  unsigned int v258; // ebx
  __m128i v259; // xmm1
  __m128i v260; // xmm2
  __m128i v261; // xmm3
  __int64 v262; // rax
  __int64 v263; // rax
  int v264; // r12d
  unsigned int v265; // ebx
  __int64 v266; // rax
  __int64 v267; // rax
  float v268; // xmm0_4
  float v269; // xmm1_4
  __m128i v270; // xmm2
  __m128i v271; // xmm4
  __m128i v272; // xmm0
  int v273; // r8d
  __m128i v274; // xmm3
  unsigned int v275; // edx
  __int64 v276; // rax
  __int64 v277; // rax
  __int64 v278; // rcx
  int v279; // r8d
  unsigned int v280; // edx
  __int64 v281; // rax
  __int64 v282; // rax
  __int64 v283; // rcx
  int v284; // r8d
  unsigned int v285; // edx
  __int64 v286; // rax
  __int64 v287; // rax
  __int64 v288; // rcx
  int v289; // r8d
  unsigned int v290; // edx
  __int64 v291; // rax
  __int64 v292; // rax
  __int64 v293; // rcx
  float v294; // xmm0_4
  float v295; // xmm1_4
  __m128i v296; // xmm2
  __m128i v297; // xmm4
  __m128i v298; // xmm0
  int v299; // r8d
  __m128i v300; // xmm3
  unsigned int v301; // edx
  __int64 v302; // rax
  __int64 v303; // rax
  int v304; // r8d
  unsigned int v305; // edx
  __int64 v306; // rax
  __int64 v307; // rax
  int v308; // r8d
  unsigned int v309; // edx
  __int64 v310; // rax
  __int64 v311; // rax
  __int64 v312; // rcx
  int v313; // edx
  __int64 v314; // rax
  __int64 v315; // rax
  POINTL *v316; // [rsp+30h] [rbp-D0h]
  int v317; // [rsp+40h] [rbp-C0h]
  int v318; // [rsp+70h] [rbp-90h]
  int v319; // [rsp+70h] [rbp-90h]
  int v320[2]; // [rsp+78h] [rbp-88h] BYREF
  OPTAPIDCOBJ *v321; // [rsp+80h] [rbp-80h]
  XDCOBJ *v322; // [rsp+88h] [rbp-78h]
  __int128 v323; // [rsp+90h] [rbp-70h] BYREF
  int v324[2]; // [rsp+A0h] [rbp-60h]
  __int64 v325; // [rsp+A8h] [rbp-58h] BYREF
  XLATEOBJ *v326; // [rsp+B0h] [rbp-50h] BYREF
  int v327; // [rsp+B8h] [rbp-48h]
  __int64 v328; // [rsp+C0h] [rbp-40h]
  __int64 v329; // [rsp+C8h] [rbp-38h]
  unsigned int v330; // [rsp+D0h] [rbp-30h]
  __int64 v331; // [rsp+D8h] [rbp-28h]
  unsigned int v332; // [rsp+E0h] [rbp-20h]
  __int64 v333; // [rsp+E8h] [rbp-18h]
  SURFACE *v334; // [rsp+F0h] [rbp-10h]
  _DWORD *v335; // [rsp+F8h] [rbp-8h]
  __int64 v336[2]; // [rsp+100h] [rbp+0h] BYREF
  DC *v337; // [rsp+110h] [rbp+10h] BYREF
  int v338; // [rsp+118h] [rbp+18h]
  __int64 v339; // [rsp+120h] [rbp+20h]
  __int64 v340; // [rsp+128h] [rbp+28h]
  _OWORD v341[2]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v342[2]; // [rsp+150h] [rbp+50h] BYREF
  char v343; // [rsp+170h] [rbp+70h]
  const struct MATRIX *v344; // [rsp+180h] [rbp+80h] BYREF
  __m128i v345; // [rsp+190h] [rbp+90h]
  __int128 v346; // [rsp+1A0h] [rbp+A0h]
  __int64 v347; // [rsp+1B0h] [rbp+B0h]
  _OWORD v348[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v349; // [rsp+1E0h] [rbp+E0h]
  __int64 v350; // [rsp+1E8h] [rbp+E8h]
  char v351; // [rsp+1F0h] [rbp+F0h]
  int v352; // [rsp+1F4h] [rbp+F4h]
  __int64 v353; // [rsp+1F8h] [rbp+F8h]
  __int64 v354; // [rsp+200h] [rbp+100h]
  int v355; // [rsp+208h] [rbp+108h]
  __int64 v356; // [rsp+210h] [rbp+110h] BYREF
  int v357; // [rsp+218h] [rbp+118h]
  struct Gre::Base::SESSION_GLOBALS *v358; // [rsp+220h] [rbp+120h]
  __int64 v359; // [rsp+228h] [rbp+128h]
  _OWORD v360[2]; // [rsp+230h] [rbp+130h] BYREF
  _OWORD v361[2]; // [rsp+250h] [rbp+150h] BYREF
  __int16 v362; // [rsp+270h] [rbp+170h]
  __int64 v363; // [rsp+278h] [rbp+178h] BYREF
  int v364; // [rsp+280h] [rbp+180h]
  struct Gre::Base::SESSION_GLOBALS *v365; // [rsp+288h] [rbp+188h]
  __int64 v366; // [rsp+290h] [rbp+190h]
  _OWORD v367[2]; // [rsp+298h] [rbp+198h] BYREF
  _OWORD v368[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int16 v369; // [rsp+2D8h] [rbp+1D8h]
  __int64 v370; // [rsp+2E0h] [rbp+1E0h]
  __int64 v371; // [rsp+2E8h] [rbp+1E8h]
  __int64 v372; // [rsp+2F0h] [rbp+1F0h]
  __int64 v373; // [rsp+2F8h] [rbp+1F8h]
  __int128 v374; // [rsp+300h] [rbp+200h]
  __int64 v375; // [rsp+310h] [rbp+210h]
  __int64 v376; // [rsp+318h] [rbp+218h]
  RECTL v377; // [rsp+320h] [rbp+220h] BYREF
  RECTL v378; // [rsp+330h] [rbp+230h] BYREF
  POINTL v379[2]; // [rsp+340h] [rbp+240h] BYREF

  v11 = a1;
  v12 = a7;
  v14 = a5;
  left = a2;
  v16 = a8;
  v322 = a1;
  v17 = a6;
  v321 = a6;
  v320[0] = a4;
  v330 = a2;
  v324[0] = a5;
  if ( (a11 & 4) != 0
    && (v18 = 1,
        CurrentThread = GreGetCurrentThread(),
        a4 = v320[0],
        v14 = (unsigned int)v324[0],
        v17 = v321,
        v11 = v322,
        CurrentThread) )
  {
    *((_DWORD *)CurrentThread + 84) |= 8u;
  }
  else
  {
    v18 = 0;
  }
  if ( (a9 & 0x40000000) == 0 )
  {
    v19 = *(_QWORD *)v11;
    v20 = a9 & 0x5FFFFFFF;
    v332 = 0;
    if ( (*(_DWORD *)(v19 + 36) & 0x10000) != 0 )
    {
      v46 = 0;
    }
    else
    {
      v21 = BYTE1(v20);
      if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v20 != 16711778 && v20 != 66 )
        bSpDwmValidateSurface(v11, left, top, a4, v14);
      if ( OPTAPIDCOBJ::bValid(v321, v21, v14) )
      {
        memset(v341, 0, sizeof(v341));
        v339 = *((_QWORD *)v321 + 2);
        v340 = 0LL;
        v337 = 0LL;
        v338 = 0;
        PushThreadGuardedObject(
          v341,
          &v337,
          UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
        memset(v342, 0, sizeof(v342));
        PushThreadGuardedObject(
          v342,
          &v337,
          UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
        v343 = 0;
        v337 = *(DC **)v321;
        bSpDwmValidateSurface((struct XDCOBJ *)&v337, a7, a8, v320[0], v324[0]);
        v22 = *(_QWORD *)(*(_QWORD *)v322 + 976LL);
        v23 = *(_DWORD *)(v22 + 108);
        if ( ((*(_BYTE *)(*((_QWORD *)v337 + 122) + 108LL) ^ *(_BYTE *)(v22 + 108)) & 7) != 0
          && (a9 < 0 && (v23 & 1) != 0 || (v23 & 9) == 9) )
        {
          v24 = v320[0];
          left = *(_DWORD *)(v22 + 308) - v330 - v320[0];
          v332 = DC::dwSetLayout(*(DC **)v322, -1, 0);
          v330 = 0x80000000;
        }
        else
        {
          v24 = v320[0];
          v330 = 0;
        }
        DC::QuickInitXform(*(_QWORD *)v322, v336, 516LL);
        DC::QuickInitXform(v337, &v344, 516LL);
        if ( (*(_BYTE *)(v336[0] + 32) & 1) == 0 || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v336, v344) )
        {
          v163 = v24;
          v317 = v24;
          v29 = v322;
          v46 = GrepStretchBlt(
                  (struct SURFACE **)v322,
                  left,
                  top,
                  v163,
                  v324[0],
                  v321,
                  a7,
                  a8,
                  v317,
                  v324[0],
                  v20,
                  a10,
                  0);
          goto LABEL_55;
        }
        x = a7 + v24;
        y = a8 + v324[0];
        v333 = (__int64)v337;
        v379[1].y = a8 + v324[0];
        v379[0].x = a7;
        v379[0].y = a8;
        v379[1].x = a7 + v24;
        if ( (*((_BYTE *)v344 + 32) & 0x43) == 0x43
          || (v27 = bCvtPts1((__int64)v344, (__int64)v379, 2LL),
              y = v379[1].y,
              x = v379[1].x,
              v16 = v379[0].y,
              v12 = v379[0].x,
              v27) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v333 + 976) + 108LL) & 1) != 0 )
          {
            ++v12;
            ++x;
            v379[0].x = v12;
            v379[1].x = x;
          }
        }
        if ( v12 > x )
        {
          v379[0].x = x;
          v379[1].x = v12;
        }
        if ( v16 > y )
        {
          v379[0].y = y;
          v379[1].y = v16;
        }
        right = v24 + left;
        v29 = v322;
        v377.bottom = top + v324[0];
        v377.left = left;
        v377.top = top;
        v30 = *(DC **)v322;
        v377.right = right;
        if ( (*(_BYTE *)(v336[0] + 32) & 0x43) == 0x43
          || (v31 = bCvtPts1(v336[0], (__int64)&v377, 2LL), right = v377.right, top = v377.top, left = v377.left, v31) )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v30 + 122) + 108LL) & 1) != 0 )
          {
            ++left;
            ++right;
            v377.left = left;
            v377.right = right;
          }
        }
        if ( left > right )
        {
          v32 = left;
          v377.left = right;
          left = right;
          v377.right = v32;
          right = v32;
        }
        bottom = v377.bottom;
        if ( top > v377.bottom )
        {
          v377.top = v377.bottom;
          v377.bottom = top;
          top = bottom;
        }
        if ( top == v377.bottom || left == right )
        {
          v46 = 1;
          goto LABEL_55;
        }
        v34 = *(DC **)v322;
        v35 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)v322 + 36LL);
        if ( ((unsigned __int8)v35 & 0xE0) != 0 )
        {
          if ( ((unsigned __int8)v35 & 0x20) != 0 )
          {
            if ( left < *((_DWORD *)v34 + 266) )
            {
              *((_DWORD *)v34 + 266) = left;
              right = v377.right;
              top = v377.top;
              left = v377.left;
            }
            if ( top < *((_DWORD *)v34 + 267) )
            {
              *((_DWORD *)v34 + 267) = top;
              right = v377.right;
              top = v377.top;
              left = v377.left;
            }
            if ( right > *((_DWORD *)v34 + 268) )
            {
              *((_DWORD *)v34 + 268) = right;
              right = v377.right;
              top = v377.top;
              left = v377.left;
            }
            if ( v377.bottom > *((_DWORD *)v34 + 269) )
            {
              *((_DWORD *)v34 + 269) = v377.bottom;
              right = v377.right;
              top = v377.top;
              left = v377.left;
            }
          }
          v35 = *(Gre::Base **)v29;
          if ( (*(_DWORD *)(*(_QWORD *)v29 + 36LL) & 0x80u) != 0 )
          {
            if ( left < *((_DWORD *)v35 + 274) )
            {
              *((_DWORD *)v35 + 274) = left;
              right = v377.right;
              top = v377.top;
            }
            if ( top < *((_DWORD *)v35 + 275) )
            {
              *((_DWORD *)v35 + 275) = top;
              right = v377.right;
            }
            if ( right > *((_DWORD *)v35 + 276) )
              *((_DWORD *)v35 + 276) = right;
            if ( v377.bottom > *((_DWORD *)v35 + 277) )
              *((_DWORD *)v35 + 277) = v377.bottom;
          }
        }
        v350 = 0LL;
        v351 = 0;
        v352 = 0;
        v36 = Gre::Base::Globals(v35);
        v359 = 0LL;
        v358 = v36;
        v356 = 0LL;
        v357 = 0;
        memset(v360, 0, sizeof(v360));
        PushThreadGuardedObject(
          v360,
          &v356,
          UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
        memset(v361, 0, sizeof(v361));
        PushThreadGuardedObject(
          v361,
          &v356,
          UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
        v362 = 256;
        v363 = 0LL;
        v364 = 0;
        v38 = Gre::Base::Globals(v37);
        v366 = 0LL;
        v365 = v38;
        v363 = 0LL;
        v364 = 0;
        memset(v367, 0, sizeof(v367));
        PushThreadGuardedObject(
          v367,
          &v363,
          UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
        memset(v368, 0, sizeof(v368));
        PushThreadGuardedObject(
          v368,
          &v363,
          UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
        v369 = 256;
        memset(v348, 0, sizeof(v348));
        v374 = 0LL;
        v376 = 0LL;
        v349 = 0LL;
        v355 = 0;
        v353 = 0LL;
        v354 = 0LL;
        v370 = 0LL;
        v373 = 0LL;
        v371 = 0LL;
        v372 = 0LL;
        v375 = 0LL;
        v356 = 0LL;
        v363 = 0LL;
        if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v348, v29, (struct XDCOBJ *)&v337) )
        {
          v39 = (unsigned int)XDCOBJ::bFullScreen(v29);
          v180 = !*((_QWORD *)v337 + 62) || DC::bInFullScreen(v337);
          v46 = v39 | v180;
          goto LABEL_54;
        }
        v41 = *(DC **)v29;
        v42 = *(_QWORD *)(*(_QWORD *)v29 + 496LL);
        v334 = (SURFACE *)v42;
        if ( !v42 )
          goto LABEL_53;
        v40 = *(_QWORD *)(v42 + 128);
        v43 = (OPTAPIDCOBJ *)*((_QWORD *)v41 + 11);
        v328 = v40;
        v44 = (a9 & 0x5FFFFFFFu) >> 16;
        v321 = v43;
        v327 = v44 | (v44 << 8);
        if ( ((v44 ^ (unsigned __int8)(16 * v44)) & 0xF0) != 0 )
        {
          v164 = *((_QWORD *)v41 + 122);
          v165 = (char *)v41 + 1200;
          v333 = (__int64)v41 + 1200;
          if ( (*(_DWORD *)(v164 + 152) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v41, *(_QWORD *)(v164 + 160));
            v40 = v328;
            v43 = v321;
          }
          v41 = *(DC **)v29;
          v39 = *(_QWORD *)(*(_QWORD *)v29 + 976LL);
          v166 = *(_DWORD *)(v39 + 152);
          if ( (v166 & 1) != 0 || (*((_DWORD *)v41 + 79) & 1) != 0 )
          {
            *(_DWORD *)(v39 + 152) = v166 & 0xFFFFFFFE;
            *(_DWORD *)(*(_QWORD *)v29 + 316LL) &= ~1u;
            EBRUSHOBJ::vInitBrush(v165, *(_QWORD *)v29, *(_QWORD *)(*(_QWORD *)v29 + 136LL), v43, v40, v42, 1);
            v41 = *(DC **)v29;
          }
        }
        else
        {
          v333 = 0LL;
        }
        v45 = (Gre::Base *)(*((_DWORD *)v41 + 10) & 1);
        v377.left += *((_DWORD *)v41 + 2 * (_QWORD)v45 + 254);
        v377.right += *((_DWORD *)v41 + 2 * (_QWORD)v45 + 254);
        v377.top += *((_DWORD *)v41 + 2 * (_QWORD)v45 + 255);
        v377.bottom += *((_DWORD *)v41 + 2 * (_QWORD)v45 + 255);
        if ( !*((_QWORD *)v337 + 62) )
          goto LABEL_53;
        v55 = Gre::Base::Globals(v45);
        v56 = v337;
        v57 = *((_QWORD *)v337 + 62);
        if ( v57 )
        {
          if ( v340 )
            v57 = v340;
        }
        else
        {
          v57 = *((_QWORD *)v55 + 547);
        }
        if ( !v57 )
          goto LABEL_53;
        if ( (a11 & 2) == 0 )
        {
          if ( (v355 & 0x400000) == 0
            || ((*(_DWORD *)(v42 + 116) & 8) != 0 || *(_QWORD *)(v42 + 224))
            && _bittest16((const signed __int16 *)(v42 + 102), 9u) )
          {
            goto LABEL_262;
          }
          v58 = *(_DWORD *)(v42 + 112);
          if ( (v58 & 0x800) != 0 )
          {
            v59 = UserSurfaceAccessCheck(*(_QWORD *)(v42 + 648));
          }
          else
          {
            if ( (v58 & 0x10000000) == 0 )
              goto LABEL_85;
            v59 = UserScreenAccessCheck(v337, v39);
          }
          if ( !v59 )
          {
LABEL_262:
            EngSetLastError(6u);
            v46 = 0;
            goto LABEL_54;
          }
          v56 = v337;
        }
LABEL_85:
        v60 = 0;
        v39 = (unsigned int)v377.left;
        v61 = *((_DWORD *)v56 + 10) & 1;
        v41 = (DC *)(unsigned int)v377.top;
        v62 = *(_QWORD *)(v57 + 128);
        v63 = 0;
        v64 = v377.left - *((_DWORD *)v56 + 2 * v61 + 254) - v379[0].x;
        v65 = v377.top - *((_DWORD *)v56 + 2 * v61 + 255) - v379[0].y;
        v66 = *(_QWORD *)(v57 + 48);
        LODWORD(v331) = v64;
        LODWORD(v329) = v65;
        if ( v66 && v57 == *(_QWORD *)(v66 + 2544) && (*(_DWORD *)(v66 + 40) & 0x20000) != 0 )
        {
          v60 = *(_DWORD *)(v66 + 2576);
          v63 = *(_DWORD *)(v66 + 2580);
        }
        if ( v60 + v64 > v377.left )
          v39 = (unsigned int)(v60 + v64);
        v377.left = v39;
        if ( v63 + v65 > v377.top )
          v41 = (DC *)(unsigned int)(v63 + v65);
        v377.top = (int)v41;
        v67 = v60 + *(_DWORD *)(v57 + 56);
        v40 = (unsigned int)v377.right;
        v68 = v64 + v67;
        if ( v68 < v377.right )
          v40 = (unsigned int)v68;
        v377.right = v40;
        v69 = v63 + *(_DWORD *)(v57 + 60);
        v70 = v377.bottom;
        v71 = v65 + v69;
        if ( v71 < v377.bottom )
          v70 = v71;
        v377.bottom = v70;
        if ( (int)v39 < (int)v40 && (int)v41 < v70 )
        {
          v72 = *(Gre::Base **)v29;
          v335 = 0LL;
          if ( (int)v39 >= *((_DWORD *)v72 + 250)
            && (int)v40 <= *((_DWORD *)v72 + 252)
            && (int)v41 >= *((_DWORD *)v72 + 251)
            && v70 <= *((_DWORD *)v72 + 253) )
          {
            v73 = (__m128i)v377;
LABEL_102:
            v74 = *(Gre::Base **)v29;
            v75 = *(_DWORD *)(*(_QWORD *)v29 + 36LL);
            if ( (v75 & 0xE0) == 0 )
              goto LABEL_116;
            v378 = (RECTL)v73;
            v76 = *((_DWORD *)v74 + 10) & 1;
            v77 = v39 - *((_DWORD *)v74 + 2 * v76 + 254);
            v378.left = v77;
            v78 = v73.m128i_i32[2] - *((_DWORD *)v74 + 2 * v76 + 254);
            v378.right = v78;
            v79 = v73.m128i_i32[1] - *((_DWORD *)v74 + 2 * v76 + 255);
            v378.top = v79;
            v378.bottom = v73.m128i_i32[3] - *((_DWORD *)v74 + 2 * v76 + 255);
            if ( (v75 & 0x40) == 0 )
              goto LABEL_116;
            v80 = *((_DWORD *)v74 + 270);
            v81 = (int *)((char *)v74 + 1088);
            if ( v80 == *((_DWORD *)v74 + 272)
              || (v82 = (LONG *)((char *)v74 + 1092), *((_DWORD *)v74 + 271) == *((_DWORD *)v74 + 273)) )
            {
              *(RECTL *)((char *)v74 + 1080) = v378;
            }
            else
            {
              v83 = (int *)((char *)v74 + 1088);
              v84 = (LONG *)((char *)v74 + 1092);
              if ( v77 < v80 )
              {
                *((_DWORD *)v74 + 270) = v77;
                v83 = (int *)((char *)v74 + 1088);
                LODWORD(v39) = v377.left;
                v84 = (LONG *)((char *)v74 + 1092);
                v73 = (__m128i)v377;
                v78 = v378.right;
                v79 = v378.top;
              }
              if ( v79 < *((_DWORD *)v74 + 271) )
              {
                *((_DWORD *)v74 + 271) = v79;
                v81 = v83;
                LODWORD(v39) = v377.left;
                v82 = v84;
                v73 = (__m128i)v377;
                v78 = v378.right;
              }
              if ( v78 > *v81 )
              {
                *v81 = v78;
                LODWORD(v39) = v377.left;
                v73 = (__m128i)v377;
              }
              if ( v378.bottom <= *v82 )
                goto LABEL_115;
              *v82 = v378.bottom;
            }
            v73 = (__m128i)v377;
            LODWORD(v39) = v377.left;
LABEL_115:
            v85 = v322;
            v326 = *(XLATEOBJ **)(*(_QWORD *)v322 + 1184LL);
            if ( v326 )
            {
              *(_QWORD *)v320 = 0LL;
              RGNMEMOBJ::vInitialize((RGNMEMOBJ *)v320, 0x70u);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v320);
              v325 = 0LL;
              RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v325, 0x70u);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v325);
              if ( *(_QWORD *)v320 )
              {
                if ( v325 )
                {
                  RGNOBJ::vSet((RGNOBJ *)&v325, &v378);
                  if ( RGNOBJ::bMerge((RGNOBJ *)v320, (struct RGNOBJ *)&v326, (struct RGNOBJ *)&v325, 0xEu) )
                  {
                    RGNOBJ::vSwap((RGNOBJ *)&v326, (struct RGNOBJ *)v320);
                    *(_QWORD *)(*(_QWORD *)v85 + 1184LL) = v326;
                  }
                }
              }
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v325);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v325);
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v320);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v320);
              LODWORD(v39) = v377.left;
              v73 = (__m128i)v377;
            }
LABEL_116:
            v86 = 0;
            LODWORD(v87) = v377.top - v329;
            LODWORD(v88) = v39 - v64;
            v379[0].x = v39 - v64;
            v89 = 0LL;
            v41 = *(DC **)v322;
            v379[0].y = v377.top - v329;
            if ( v57 == *((_QWORD *)v41 + 62) )
            {
              v326 = 0LL;
              v319 = 1;
              goto LABEL_154;
            }
            v90 = a10;
            v320[0] = a10;
            v326 = (XLATEOBJ *)*((_QWORD *)v337 + 11);
            if ( a10 == -1 )
            {
              v90 = *(_DWORD *)(*((_QWORD *)v337 + 122) + 180LL);
              v320[0] = v90;
            }
            v91 = *((_QWORD *)v41 + 122);
            v92 = v328;
            v93 = (Gre::Base *)*(unsigned int *)(v91 + 176);
            v318 = *(_DWORD *)(v91 + 184);
            LODWORD(v325) = *((_DWORD *)v41 + 30);
            v324[0] = (int)v93;
            if ( v62 )
            {
              if ( v328 )
              {
                v94 = v62;
                if ( *(_QWORD *)(v62 + 120) != v62 )
                  v94 = *(_QWORD *)(v62 + 120);
                v93 = *(Gre::Base **)(v328 + 120);
                v95 = *(_DWORD *)(v94 + 32);
                v96 = v328;
                if ( v93 != (Gre::Base *)v328 )
                  v96 = *(_QWORD *)(v328 + 120);
                if ( v95 != *(_DWORD *)(v96 + 32) )
                {
                  v93 = (Gre::Base *)(unsigned int)v324[0];
                  v97 = v321;
                  goto LABEL_127;
                }
              }
              else
              {
                v97 = v321;
                if ( (*(_DWORD *)(v62 + 24) & 0x800) == 0
                  || (v102 = *((_QWORD *)v321 + 10)) != 0 && v102 != *((_QWORD *)v321 + 9) )
                {
LABEL_127:
                  if ( v328 )
                  {
                    v98 = *(_DWORD *)(v62 + 56);
                    v99 = Gre::Base::Globals(v93);
                    *(_QWORD *)&v323 = *(_QWORD *)v99 + 312LL;
                    GreAcquireSemaphoreInternal((HSEMAPHORE)v323);
                    GrepAcquireLockValidate<13>();
                    for ( i = 0; ; ++i )
                    {
                      if ( i >= 8 )
                      {
                        SEMOBJ<13>::vUnlock((HSEMAPHORE *)&v323);
                        LODWORD(v93) = v324[0];
                        v97 = v321;
                        v64 = v331;
                        v92 = v328;
                        v90 = v320[0];
                        goto LABEL_147;
                      }
                      v101 = v62;
                      if ( *(_QWORD *)(v62 + 120) != v62 )
                        v101 = *(_QWORD *)(v62 + 120);
                      if ( *((_DWORD *)v99 + 8 * v98 + 1104) != *(_DWORD *)(v101 + 32) )
                        goto LABEL_133;
                      v158 = *(_QWORD *)(v328 + 120);
                      if ( v158 == v328 )
                        v158 = v328;
                      v159 = 32LL * v98;
                      if ( *(_DWORD *)((char *)v99 + v159 + 4420) != *(_DWORD *)(v158 + 32) )
                        goto LABEL_133;
                      v160 = v321;
                      if ( *((OPTAPIDCOBJ **)v321 + 15) != v321 )
                        v160 = (OPTAPIDCOBJ *)*((_QWORD *)v321 + 15);
                      if ( *(_DWORD *)((char *)v99 + v159 + 4428) != *((_DWORD *)v160 + 8) )
                        goto LABEL_133;
                      v89 = *(XLATEOBJ **)((char *)v99 + v159 + 4408);
                      if ( (v89[3].flXlate & 0x6000) != 0 )
                        goto LABEL_133;
                      v161 = v89[3].flXlate & 0x100;
                      if ( (v89->flXlate & 4) == 0 )
                        break;
                      if ( v320[0] == v89[1].iUniq )
                      {
                        v162 = v326;
                        if ( *(XLATEOBJ **)&v326[5].iUniq != v326 )
                          v162 = *(XLATEOBJ **)&v326[5].iUniq;
                        if ( *((_DWORD *)v99 + 8 * v98 + 1106) == *(_DWORD *)&v162[1].iSrcType )
                        {
LABEL_250:
                          _InterlockedIncrement((volatile signed __int32 *)v99 + 8 * v98 + 1100);
                          *(_DWORD *)(v62 + 56) = v98;
                          SEMOBJ<13>::vUnlock((HSEMAPHORE *)&v323);
                          v64 = v331;
                          goto LABEL_149;
                        }
                      }
                      if ( v161 )
                        goto LABEL_248;
LABEL_133:
                      v98 = ((_BYTE)v98 + 1) & 7;
                    }
                    if ( !v161 )
                      goto LABEL_250;
LABEL_248:
                    if ( v318 == v89[1].flXlate && v324[0] == *(_DWORD *)&v89[1].iSrcType )
                      goto LABEL_250;
                    goto LABEL_133;
                  }
                  goto LABEL_147;
                }
              }
            }
            else if ( v328 )
            {
              v97 = v321;
              if ( (*(_DWORD *)(v328 + 24) & 0x800) == 0
                || (v103 = *((_QWORD *)v321 + 10)) != 0 && v103 != *((_QWORD *)v321 + 9) )
              {
LABEL_147:
                LODWORD(v316) = v318;
                XlateObject = (XLATEOBJ *)CreateXlateObject(0LL, v325, v62, v92, v326, v97, v316, (_DWORD)v93, v90, 0);
                v89 = XlateObject;
                if ( XlateObject )
                {
                  if ( v62 && v92 && (XlateObject[3].flXlate & 0x200) == 0 )
                  {
                    v145 = Gre::Base::Globals(v105);
                    *(_QWORD *)&v323 = *(_QWORD *)v145 + 312LL;
                    GreAcquireSemaphoreCommon<13,void (*)(HSEMAPHORE__ *)>(
                      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
                      v323);
                    for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
                    {
                      v147 = *((unsigned int *)v145 + 1164);
                      v148 = *((_QWORD *)v145 + 4 * v147 + 551);
                      if ( !v148 )
                        goto LABEL_217;
                      if ( !*((_DWORD *)v145 + 8 * v147 + 1100) )
                      {
                        FreeThreadBufferWithTag(v148, j, v147);
LABEL_217:
                        PopThreadGuardedObject(&v89[-2].pulXlate);
                        v149 = v62;
                        *((_DWORD *)v145 + 8 * *((unsigned int *)v145 + 1164) + 1100) = 1;
                        *((_QWORD *)v145 + 4 * *((unsigned int *)v145 + 1164) + 551) = v89;
                        if ( *(_QWORD *)(v62 + 120) != v62 )
                          v149 = *(_QWORD *)(v62 + 120);
                        v150 = *(_DWORD *)(v149 + 32);
                        v151 = v326;
                        *((_DWORD *)v145 + 8 * *((unsigned int *)v145 + 1164) + 1104) = v150;
                        if ( *(_QWORD *)(v92 + 120) != v92 )
                          v92 = *(_QWORD *)(v92 + 120);
                        *((_DWORD *)v145 + 8 * *((unsigned int *)v145 + 1164) + 1105) = *(_DWORD *)(v92 + 32);
                        if ( *(XLATEOBJ **)&v151[5].iUniq != v151 )
                          v151 = *(XLATEOBJ **)&v151[5].iUniq;
                        v152 = *(_DWORD *)&v151[1].iSrcType;
                        v153 = v321;
                        *((_DWORD *)v145 + 8 * *((unsigned int *)v145 + 1164) + 1106) = v152;
                        if ( *((OPTAPIDCOBJ **)v153 + 15) != v153 )
                          v153 = (OPTAPIDCOBJ *)*((_QWORD *)v153 + 15);
                        *((_DWORD *)v145 + 8 * *((unsigned int *)v145 + 1164) + 1107) = *((_DWORD *)v153 + 8);
                        v89[1].cEntries = *((_DWORD *)v145 + 1164);
                        *(_DWORD *)(v62 + 56) = *((_DWORD *)v145 + 1164);
                        *((_DWORD *)v145 + 1164) = ((unsigned __int8)*((_DWORD *)v145 + 1164) + 1) & 7;
                        break;
                      }
                      *((_DWORD *)v145 + 1164) = ((_BYTE)v147 + 1) & 7;
                    }
                    SEMOBJ<13>::vUnlock((HSEMAPHORE *)&v323);
                  }
LABEL_149:
                  v106 = 1LL;
                  v86 = 0;
                }
                else
                {
                  v86 = 0;
                  v106 = 0LL;
                }
                v29 = v322;
                v319 = v106;
                v326 = v89;
                v41 = *(DC **)v322;
                if ( (*(_DWORD *)(*(_QWORD *)v322 + 36LL) & 1) == 0 )
                {
                  v379[1].x = v377.right - v64;
                  v379[1].y = v377.bottom - v329;
                }
                if ( !(_DWORD)v106 )
                  goto LABEL_199;
                LODWORD(v87) = v379[0].y;
                LODWORD(v88) = v379[0].x;
                LODWORD(v39) = v377.left;
                v73 = (__m128i)v377;
LABEL_154:
                v107 = 0;
                LODWORD(v108) = 0;
                v345 = v73;
                v109 = *((int *)v334 + 28) < 0;
                v346 = *(_OWORD *)&v379[0].x;
                v378 = (RECTL)v73;
                v328 = 0LL;
                v331 = 0LL;
                if ( v109 )
                {
                  v181 = (_DWORD *)*((_QWORD *)v334 + 6);
                  if ( v181 )
                  {
                    if ( (v181[10] & 0x20000) != 0 )
                    {
                      v107 = v181[644];
                      v108 = (unsigned int)v181[645];
                      v328 = (unsigned int)v107;
                      v331 = v108;
                    }
                  }
                }
                v110 = v107 + *((_DWORD *)v334 + 14);
                v111 = (unsigned int)(v108 + *((_DWORD *)v334 + 15));
                v321 = (OPTAPIDCOBJ *)(unsigned int)v110;
                LODWORD(v112) = 0;
                *(_QWORD *)&v323 = v111;
                v325 = 0LL;
                v329 = 0LL;
                if ( *(int *)(v57 + 112) < 0 )
                {
                  v182 = *(_DWORD **)(v57 + 48);
                  if ( v182 )
                  {
                    v110 = (int)v321;
                    if ( (v182[10] & 0x20000) != 0 )
                    {
                      v86 = v182[644];
                      v112 = (unsigned int)v182[645];
                      v325 = v86;
                      v329 = v112;
                    }
                  }
                }
                *(_QWORD *)v320 = v86 + *(_DWORD *)(v57 + 56);
                *(_QWORD *)v324 = (unsigned int)(v112 + *(_DWORD *)(v57 + 60));
                if ( v322 && (v113 = *((_DWORD *)v41 + 130), (v113 & 1) != 0) && (v113 & 2) == 0 )
                {
                  v184 = 0LL;
                  v185 = 1.0 / *((float *)v41 + 131);
                  v186 = 0LL;
                  v187 = 0LL;
                  v188 = 0LL;
                  *(float *)v184.m128i_i32 = (float)v107 * v185;
                  v189 = 1.0 / *((float *)v41 + 132);
                  v190 = _mm_cvtsi128_si32(v184);
                  v191 = (unsigned __int8)(v190 >> 23);
                  if ( v191 > 0x9E )
                    goto LABEL_360;
                  v192 = v190 & 0x7FFFFF | 0x800000LL;
                  if ( v191 < 0x76 )
                    v193 = v192 >> (118 - (unsigned __int8)v191);
                  else
                    v193 = v192 << ((unsigned __int8)v191 - 118);
                  v194 = (v193 + 0x80000000LL) >> 32;
                  if ( v190 < 0 )
                    v194 = (unsigned int)-(int)v194;
                  *(float *)v186.m128i_i32 = (float)(int)v108 * v189;
                  v195 = _mm_cvtsi128_si32(v186);
                  v328 = v194;
                  v196 = (unsigned __int8)(v195 >> 23);
                  if ( v196 > 0x9E )
                    goto LABEL_360;
                  v197 = v195 & 0x7FFFFF | 0x800000LL;
                  if ( v196 < 0x76 )
                    v198 = v197 >> (118 - (unsigned __int8)v196);
                  else
                    v198 = v197 << ((unsigned __int8)v196 - 118);
                  v199 = (v198 + 0x80000000LL) >> 32;
                  if ( v195 < 0 )
                    v199 = (unsigned int)-(int)v199;
                  *(float *)v187.m128i_i32 = (float)v110 * v185;
                  v200 = _mm_cvtsi128_si32(v187);
                  v331 = v199;
                  v201 = (unsigned __int8)(v200 >> 23);
                  if ( v201 > 0x9E )
                    goto LABEL_360;
                  v202 = v200 & 0x7FFFFF | 0x800000LL;
                  if ( v201 < 0x76 )
                    v203 = v202 >> (118 - (unsigned __int8)v201);
                  else
                    v203 = v202 << ((unsigned __int8)v201 - 118);
                  v204 = (v203 + 0x80000000LL) >> 32;
                  if ( v200 < 0 )
                    v204 = (unsigned int)-(int)v204;
                  *(float *)v188.m128i_i32 = (float)(int)v111 * v189;
                  v205 = _mm_cvtsi128_si32(v188);
                  v321 = (OPTAPIDCOBJ *)v204;
                  v206 = (unsigned __int8)(v205 >> 23);
                  if ( v206 > 0x9E )
                  {
LABEL_360:
                    LODWORD(v323) = 0;
                    LODWORD(v321) = 0;
                    LODWORD(v331) = 0;
                    LODWORD(v328) = 0;
                  }
                  else
                  {
                    v207 = v205 & 0x7FFFFF | 0x800000LL;
                    if ( v206 < 0x76 )
                      v208 = v207 >> (118 - (unsigned __int8)v206);
                    else
                      v208 = v207 << ((unsigned __int8)v206 - 118);
                    v209 = (v208 + 0x80000000LL) >> 32;
                    if ( v205 < 0 )
                      v209 = (unsigned int)-(int)v209;
                    *(_QWORD *)&v323 = v209;
                  }
                  v210 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v39);
                  v213 = (__m128i)COERCE_UNSIGNED_INT((float)v377.top);
                  *(float *)v210.m128i_i32 = *(float *)v210.m128i_i32 * v185;
                  v214 = (__m128i)COERCE_UNSIGNED_INT((float)v377.right);
                  v211 = _mm_cvtsi128_si32(v210);
                  v215 = (__m128i)COERCE_UNSIGNED_INT((float)v377.bottom);
                  v212 = (unsigned __int8)(v211 >> 23);
                  *(float *)v213.m128i_i32 = *(float *)v213.m128i_i32 * v189;
                  *(float *)v214.m128i_i32 = *(float *)v214.m128i_i32 * v185;
                  *(float *)v215.m128i_i32 = *(float *)v215.m128i_i32 * v189;
                  if ( v212 > 0x9E )
                    goto LABEL_361;
                  v216 = v211 & 0x7FFFFF | 0x800000LL;
                  if ( v212 < 0x76 )
                    v217 = v216 >> (118 - (unsigned __int8)v212);
                  else
                    v217 = v216 << ((unsigned __int8)v212 - 118);
                  v117 = (v217 + 0x80000000LL) >> 32;
                  if ( v211 < 0 )
                    LODWORD(v117) = -(int)v117;
                  v218 = _mm_cvtsi128_si32(v213);
                  v219 = (unsigned __int8)(v218 >> 23);
                  if ( v219 > 0x9E )
                    goto LABEL_361;
                  v220 = v218 & 0x7FFFFF | 0x800000LL;
                  if ( v219 < 0x76 )
                    v221 = v220 >> (118 - (unsigned __int8)v219);
                  else
                    v221 = v220 << ((unsigned __int8)v219 - 118);
                  v116 = (v221 + 0x80000000LL) >> 32;
                  if ( v218 < 0 )
                    LODWORD(v116) = -(int)v116;
                  v222 = _mm_cvtsi128_si32(v214);
                  v223 = (unsigned __int8)(v222 >> 23);
                  if ( v223 > 0x9E )
                    goto LABEL_361;
                  v224 = v222 & 0x7FFFFF | 0x800000LL;
                  if ( v223 < 0x76 )
                    v225 = v224 >> (118 - (unsigned __int8)v223);
                  else
                    v225 = v224 << ((unsigned __int8)v223 - 118);
                  v115 = (v225 + 0x80000000LL) >> 32;
                  if ( v222 < 0 )
                    LODWORD(v115) = -(int)v115;
                  v226 = _mm_cvtsi128_si32(v215);
                  v227 = (unsigned __int8)(v226 >> 23);
                  if ( v227 > 0x9E )
                  {
LABEL_361:
                    LODWORD(v114) = 0;
                    LODWORD(v115) = 0;
                    LODWORD(v116) = 0;
                    LODWORD(v117) = 0;
                  }
                  else
                  {
                    v228 = v226 & 0x7FFFFF | 0x800000LL;
                    if ( v227 < 0x76 )
                      v229 = v228 >> (118 - (unsigned __int8)v227);
                    else
                      v229 = v228 << ((unsigned __int8)v227 - 118);
                    v114 = (v229 + 0x80000000LL) >> 32;
                    if ( v226 < 0 )
                      LODWORD(v114) = -(int)v114;
                  }
                }
                else
                {
                  LODWORD(v114) = v378.bottom;
                  LODWORD(v115) = v378.right;
                  LODWORD(v116) = v378.top;
                  LODWORD(v117) = v378.left;
                }
                v118 = v337;
                v119 = *((_DWORD *)v337 + 130);
                if ( (v119 & 1) != 0 && (v119 & 2) == 0 )
                {
                  v230 = 1.0 / *((float *)v337 + 131);
                  v231 = 1.0 / *((float *)v337 + 132);
                  v232 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v325);
                  v235 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v329);
                  *(float *)v232.m128i_i32 = *(float *)v232.m128i_i32 * v230;
                  v236 = (__m128i)COERCE_UNSIGNED_INT((float)v320[0]);
                  v233 = _mm_cvtsi128_si32(v232);
                  v237 = (__m128i)COERCE_UNSIGNED_INT((float)v324[0]);
                  v234 = (unsigned __int8)(v233 >> 23);
                  *(float *)v235.m128i_i32 = *(float *)v235.m128i_i32 * v231;
                  *(float *)v236.m128i_i32 = *(float *)v236.m128i_i32 * v230;
                  *(float *)v237.m128i_i32 = *(float *)v237.m128i_i32 * v231;
                  if ( v234 > 0x9E )
                    goto LABEL_402;
                  v238 = v233 & 0x7FFFFF | 0x800000LL;
                  if ( v234 < 0x76 )
                    v239 = v238 >> (118 - (unsigned __int8)v234);
                  else
                    v239 = v238 << ((unsigned __int8)v234 - 118);
                  v240 = (v239 + 0x80000000LL) >> 32;
                  if ( v233 < 0 )
                    v240 = (unsigned int)-(int)v240;
                  v325 = v240;
                  v241 = _mm_cvtsi128_si32(v235);
                  v242 = (unsigned __int8)(v241 >> 23);
                  if ( v242 > 0x9E )
                    goto LABEL_402;
                  v243 = v241 & 0x7FFFFF | 0x800000LL;
                  if ( v242 < 0x76 )
                    v244 = v243 >> (118 - (unsigned __int8)v242);
                  else
                    v244 = v243 << ((unsigned __int8)v242 - 118);
                  v245 = (v244 + 0x80000000LL) >> 32;
                  if ( v241 < 0 )
                    v245 = (unsigned int)-(int)v245;
                  v329 = v245;
                  v246 = _mm_cvtsi128_si32(v236);
                  v247 = (unsigned __int8)(v246 >> 23);
                  if ( v247 > 0x9E )
                    goto LABEL_402;
                  v248 = v246 & 0x7FFFFF | 0x800000LL;
                  if ( v247 < 0x76 )
                    v249 = v248 >> (118 - (unsigned __int8)v247);
                  else
                    v249 = v248 << ((unsigned __int8)v247 - 118);
                  v250 = (v249 + 0x80000000LL) >> 32;
                  if ( v246 < 0 )
                    v250 = (unsigned int)-(int)v250;
                  *(_QWORD *)v320 = v250;
                  v251 = _mm_cvtsi128_si32(v237);
                  v252 = (unsigned __int8)(v251 >> 23);
                  if ( v252 > 0x9E )
                  {
LABEL_402:
                    *(_QWORD *)v324 = 0LL;
                    *(_QWORD *)v320 = 0LL;
                    v329 = 0LL;
                    v325 = 0LL;
                  }
                  else
                  {
                    v253 = v251 & 0x7FFFFF | 0x800000LL;
                    if ( v252 < 0x76 )
                      v254 = v253 >> (118 - (unsigned __int8)v252);
                    else
                      v254 = v253 << ((unsigned __int8)v252 - 118);
                    v255 = (v254 + 0x80000000LL) >> 32;
                    if ( v251 < 0 )
                      v255 = (unsigned int)-(int)v255;
                    *(_QWORD *)v324 = v255;
                  }
                  v256 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v88);
                  v259 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v87);
                  *(float *)v256.m128i_i32 = *(float *)v256.m128i_i32 * v230;
                  v260 = (__m128i)COERCE_UNSIGNED_INT((float)v379[1].x);
                  v257 = _mm_cvtsi128_si32(v256);
                  v261 = (__m128i)COERCE_UNSIGNED_INT((float)v379[1].y);
                  v258 = (unsigned __int8)(v257 >> 23);
                  *(float *)v259.m128i_i32 = *(float *)v259.m128i_i32 * v231;
                  *(float *)v260.m128i_i32 = *(float *)v260.m128i_i32 * v230;
                  *(float *)v261.m128i_i32 = *(float *)v261.m128i_i32 * v231;
                  if ( v258 > 0x9E )
                    goto LABEL_395;
                  v262 = v257 & 0x7FFFFF | 0x800000LL;
                  if ( v258 < 0x76 )
                    v263 = v262 >> (118 - (unsigned __int8)v258);
                  else
                    v263 = v262 << ((unsigned __int8)v258 - 118);
                  v88 = (v263 + 0x80000000LL) >> 32;
                  if ( v257 < 0 )
                    LODWORD(v88) = -(int)v88;
                  v264 = _mm_cvtsi128_si32(v259);
                  v265 = (unsigned __int8)(v264 >> 23);
                  if ( v265 > 0x9E )
                    goto LABEL_395;
                  v266 = v264 & 0x7FFFFF | 0x800000LL;
                  if ( v265 < 0x76 )
                    v267 = v266 >> (118 - (unsigned __int8)v265);
                  else
                    v267 = v266 << ((unsigned __int8)v265 - 118);
                  v87 = (v267 + 0x80000000LL) >> 32;
                  if ( v264 < 0 )
                    LODWORD(v87) = -(int)v87;
                  if ( (unsigned __int8)(_mm_cvtsi128_si32(v260) >> 23) > 0x9Eu
                    || (unsigned __int8)(_mm_cvtsi128_si32(v261) >> 23) > 0x9Eu )
                  {
LABEL_395:
                    LODWORD(v87) = 0;
                    LODWORD(v88) = 0;
                  }
                }
                v120 = v88 - v117;
                v121 = v87 - v116;
                if ( (int)v328 > (int)v117 )
                  LODWORD(v117) = v328;
                if ( (int)v331 > (int)v116 )
                  LODWORD(v116) = v331;
                if ( (int)v321 < (int)v115 )
                  LODWORD(v115) = (_DWORD)v321;
                if ( (int)v323 < (int)v114 )
                  LODWORD(v114) = v323;
                if ( (int)v115 < (int)v117 )
                {
                  LODWORD(v117) = v115;
                }
                else if ( (int)v114 < (int)v116 )
                {
                  LODWORD(v116) = v114;
                }
                v122 = v120 + v117;
                v123 = v120 + v115;
                v124 = v121 + v116;
                v125 = v121 + v114;
                if ( (int)v325 > v122 )
                  v122 = v325;
                if ( (int)v329 > v124 )
                  v124 = v329;
                if ( v320[0] < v123 )
                  v123 = v320[0];
                if ( v324[0] < v125 )
                  v125 = v324[0];
                if ( v123 < v122 )
                {
                  v122 = v123;
                }
                else if ( v125 < v124 )
                {
                  v124 = v125;
                }
                v126 = v122;
                v106 = (unsigned int)v123;
                v127 = v122 - v120;
                *(_QWORD *)&v323 = __PAIR64__(v124, v126);
                v40 = (unsigned int)(v123 - v120);
                *((_QWORD *)&v323 + 1) = __PAIR64__(v125, v106);
                v128 = v125 - v121;
                v378.left = v127;
                v129 = v124;
                v378.right = v40;
                v130 = v124 - v121;
                v378.bottom = v128;
                v378.top = v130;
                if ( v127 >= (int)v40 || v130 >= v128 )
                {
                  v135 = v334;
                  v136 = 0;
                  v131 = v322;
                }
                else
                {
                  v131 = v322;
                  if ( v322 )
                  {
                    v132 = *(DC **)v322;
                    v133 = *(_DWORD *)(*(_QWORD *)v322 + 520LL);
                    if ( (v133 & 1) != 0 && (v133 & 2) == 0 )
                    {
                      v268 = *((float *)v132 + 132);
                      v269 = *((float *)v132 + 131);
                      v270 = (__m128i)COERCE_UNSIGNED_INT((float)v130);
                      v271 = (__m128i)COERCE_UNSIGNED_INT((float)v128);
                      *(float *)v270.m128i_i32 = *(float *)v270.m128i_i32 * v268;
                      *(float *)v271.m128i_i32 = *(float *)v271.m128i_i32 * v268;
                      v272 = (__m128i)COERCE_UNSIGNED_INT((float)v127);
                      *(float *)v272.m128i_i32 = *(float *)v272.m128i_i32 * v269;
                      v274 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v40);
                      v273 = _mm_cvtsi128_si32(v272);
                      *(float *)v274.m128i_i32 = *(float *)v274.m128i_i32 * v269;
                      v275 = (unsigned __int8)(v273 >> 23);
                      if ( v275 > 0x9E )
                        goto LABEL_428;
                      v276 = v273 & 0x7FFFFF | 0x800000LL;
                      if ( v275 < 0x76 )
                        v277 = v276 >> (118 - (unsigned __int8)v275);
                      else
                        v277 = v276 << ((unsigned __int8)v275 - 118);
                      v40 = 0x80000000LL;
                      v278 = (v277 + 0x80000000LL) >> 32;
                      if ( v273 < 0 )
                        LODWORD(v278) = -(int)v278;
                      v279 = _mm_cvtsi128_si32(v270);
                      v378.left = v278;
                      v280 = (unsigned __int8)(v279 >> 23);
                      if ( v280 > 0x9E )
                        goto LABEL_428;
                      v281 = v279 & 0x7FFFFF | 0x800000LL;
                      if ( v280 < 0x76 )
                        v282 = v281 >> (118 - (unsigned __int8)v280);
                      else
                        v282 = v281 << ((unsigned __int8)v280 - 118);
                      v283 = (v282 + 0x80000000LL) >> 32;
                      if ( v279 < 0 )
                        LODWORD(v283) = -(int)v283;
                      v284 = _mm_cvtsi128_si32(v274);
                      v378.top = v283;
                      v285 = (unsigned __int8)(v284 >> 23);
                      if ( v285 > 0x9E )
                        goto LABEL_428;
                      v286 = v284 & 0x7FFFFF | 0x800000LL;
                      if ( v285 < 0x76 )
                        v287 = v286 >> (118 - (unsigned __int8)v285);
                      else
                        v287 = v286 << ((unsigned __int8)v285 - 118);
                      v288 = (v287 + 0x80000000LL) >> 32;
                      if ( v284 < 0 )
                        LODWORD(v288) = -(int)v288;
                      v289 = _mm_cvtsi128_si32(v271);
                      v378.right = v288;
                      v290 = (unsigned __int8)(v289 >> 23);
                      if ( v290 > 0x9E )
                      {
LABEL_428:
                        v378 = (RECTL)0LL;
                      }
                      else
                      {
                        v291 = v289 & 0x7FFFFF | 0x800000LL;
                        if ( v290 < 0x76 )
                          v292 = v291 >> (118 - (unsigned __int8)v290);
                        else
                          v292 = v291 << ((unsigned __int8)v290 - 118);
                        v293 = (v292 + 0x80000000LL) >> 32;
                        if ( v289 < 0 )
                          LODWORD(v293) = -(int)v293;
                        v378.bottom = v293;
                      }
                    }
                    v106 = DWORD2(v323);
                  }
                  v134 = *((_DWORD *)v337 + 130);
                  if ( (v134 & 1) != 0 && (v134 & 2) == 0 )
                  {
                    v294 = *((float *)v337 + 132);
                    v295 = *((float *)v337 + 131);
                    v296 = (__m128i)COERCE_UNSIGNED_INT((float)v129);
                    v297 = (__m128i)COERCE_UNSIGNED_INT((float)SHIDWORD(v323));
                    *(float *)v296.m128i_i32 = *(float *)v296.m128i_i32 * v294;
                    *(float *)v297.m128i_i32 = *(float *)v297.m128i_i32 * v294;
                    v298 = (__m128i)COERCE_UNSIGNED_INT((float)v126);
                    *(float *)v298.m128i_i32 = *(float *)v298.m128i_i32 * v295;
                    v300 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v106);
                    v299 = _mm_cvtsi128_si32(v298);
                    *(float *)v300.m128i_i32 = *(float *)v300.m128i_i32 * v295;
                    v301 = (unsigned __int8)(v299 >> 23);
                    if ( v301 > 0x9E )
                      goto LABEL_454;
                    v40 = 118LL;
                    v302 = v299 & 0x7FFFFF | 0x800000LL;
                    if ( v301 < 0x76 )
                      v303 = v302 >> (118 - (unsigned __int8)v301);
                    else
                      v303 = v302 << ((unsigned __int8)v301 - 118);
                    v106 = (v303 + 0x80000000LL) >> 32;
                    if ( v299 < 0 )
                      v106 = (unsigned int)-(int)v106;
                    v304 = _mm_cvtsi128_si32(v296);
                    LODWORD(v323) = v106;
                    v305 = (unsigned __int8)(v304 >> 23);
                    if ( v305 > 0x9E )
                      goto LABEL_454;
                    v306 = v304 & 0x7FFFFF | 0x800000LL;
                    if ( v305 < 0x76 )
                      v307 = v306 >> (118 - (unsigned __int8)v305);
                    else
                      v307 = v306 << ((unsigned __int8)v305 - 118);
                    v106 = (v307 + 0x80000000LL) >> 32;
                    if ( v304 < 0 )
                      v106 = (unsigned int)-(int)v106;
                    v308 = _mm_cvtsi128_si32(v300);
                    DWORD1(v323) = v106;
                    v309 = (unsigned __int8)(v308 >> 23);
                    if ( v309 > 0x9E )
                      goto LABEL_454;
                    v310 = v308 & 0x7FFFFF | 0x800000LL;
                    if ( v309 < 0x76 )
                      v311 = v310 >> (118 - (unsigned __int8)v309);
                    else
                      v311 = v310 << ((unsigned __int8)v309 - 118);
                    v312 = (v311 + 0x80000000LL) >> 32;
                    if ( v308 < 0 )
                      LODWORD(v312) = -(int)v312;
                    v313 = _mm_cvtsi128_si32(v297);
                    DWORD2(v323) = v312;
                    v106 = (unsigned __int8)(v313 >> 23);
                    if ( (unsigned int)v106 > 0x9E )
                    {
LABEL_454:
                      v323 = 0uLL;
                    }
                    else
                    {
                      v314 = v313 & 0x7FFFFF | 0x800000LL;
                      if ( (unsigned int)v106 < 0x76 )
                      {
                        v40 = (unsigned int)(118 - v106);
                        v315 = v314 >> (118 - (unsigned __int8)v106);
                      }
                      else
                      {
                        v315 = v314 << ((unsigned __int8)v106 - 118);
                      }
                      v106 = (v315 + 0x80000000LL) >> 32;
                      if ( v313 < 0 )
                        v106 = (unsigned int)-(int)v106;
                      HIDWORD(v323) = v106;
                    }
                  }
                  v135 = v334;
                  v136 = 1;
                  *(_OWORD *)&v379[0].x = v323;
                  v377 = v378;
                  ++*((_DWORD *)v334 + 23);
                  v118 = v337;
                }
                v39 = *(_QWORD *)v131;
                v137 = *((_QWORD *)v118 + 6);
                *(_QWORD *)&v323 = v39;
                if ( *(_QWORD *)(v39 + 48) == v137 )
                {
                  v41 = v337;
                }
                else
                {
                  v167 = XDCOBJ::bRedirHooked(v131);
                  v41 = v337;
                  if ( !v167
                    || (v39 = *(_QWORD *)v131,
                        v168 = *((_QWORD *)v337 + 6),
                        *(_QWORD *)&v323 = v39,
                        v106 = *(_QWORD *)(v39 + 48),
                        *(_QWORD *)(v106 + 3512) != v168) )
                  {
                    if ( *(_WORD *)(v57 + 100)
                      || *(_QWORD *)(v57 + 24)
                      || (v39 = *(_QWORD *)v131,
                          *(_QWORD *)&v323 = v39,
                          v106 = *(unsigned int *)(*(_QWORD *)(v39 + 48) + 40LL),
                          (v106 & 0x80u) != 0LL) )
                    {
                      if ( v136 )
                      {
                        v169 = *((_QWORD *)v135 + 6);
                        v170 = (SURFOBJ *)((char *)v135 + 24);
                        v171 = v348;
                        v29 = v322;
                        if ( (*(_DWORD *)(v169 + 40) & 0x80u) == 0 )
                          v171 = 0LL;
                        v46 = SimBitBlt(
                                v170,
                                (SURFOBJ *)(v57 + 24),
                                v326,
                                &v377,
                                v379,
                                0LL,
                                v333,
                                (POINTL *)(*(_QWORD *)v322 + 1192LL),
                                v327,
                                (__int64)v171);
                        goto LABEL_200;
                      }
LABEL_198:
                      v29 = v322;
LABEL_199:
                      v46 = v319;
                      goto LABEL_200;
                    }
                  }
                }
                if ( v327 == 52428 )
                {
                  v138 = *((_QWORD *)v135 + 6);
                  v139 = a11 & 1;
                  v327 = v139;
                  v140 = v139;
                  if ( (a11 & 1) != 0 )
                  {
                    v173 = v345.m128i_i32[1] - v345.m128i_i32[3];
                    if ( v345.m128i_i32[1] - v345.m128i_i32[3] < 0 )
                      v173 = v345.m128i_i32[3] - v345.m128i_i32[1];
                    v174 = v345.m128i_i32[3] - v345.m128i_i32[2];
                    if ( v345.m128i_i32[3] - v345.m128i_i32[2] < 0 )
                      v174 = v345.m128i_i32[2] - v345.m128i_i32[3];
                    EtwWindowRendering(
                      *(_QWORD *)(v323 + 464),
                      *(_QWORD *)(v323 + 472),
                      **(_QWORD **)(v323 + 496),
                      v345.m128i_u32[0],
                      v345.m128i_i32[1],
                      v345.m128i_i32[2],
                      v345.m128i_i32[3],
                      *((_QWORD *)v337 + 58),
                      *((_QWORD *)v337 + 59),
                      **((_QWORD **)v41 + 62),
                      v346,
                      DWORD1(v346),
                      v346 + v174,
                      DWORD1(v346) + v173);
                    v135 = v334;
                    *((_WORD *)v334 + 51) |= 0x40u;
                    v175 = GreGetCurrentThread();
                    v140 = v327;
                    if ( v175 )
                    {
                      *((_DWORD *)v175 + 84) &= ~1u;
                      v140 = a11 & 1;
                    }
                    GreClientRgnUpdated(0LL);
                    GreClientRgnUpdatedStable(v176);
                    v139 = v327;
                  }
                  if ( v136 )
                  {
                    if ( (*((_DWORD *)v135 + 28) & 0x400) != 0 )
                      v141 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, XLATEOBJ *, RECTL *, POINTL *))(v138 + 2832))(
                               (__int64)v135 + 24,
                               v57 + 24,
                               v335,
                               v326,
                               &v377,
                               v379);
                    else
                      v141 = ((__int64 (__fastcall *)(char *, __int64, _DWORD *, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                               (char *)v135 + 24,
                               v57 + 24,
                               v335,
                               v326,
                               &v377,
                               v379);
                    v319 = v141;
                    v139 = v140;
                  }
                  if ( v139 )
                  {
                    *((_WORD *)v135 + 51) &= ~0x40u;
                    v177 = GreGetCurrentThread();
                    v29 = v322;
                    v46 = v319;
                    if ( v177 )
                      *((_DWORD *)v177 + 84) |= 1u;
                    goto LABEL_200;
                  }
                }
                else if ( v136 )
                {
                  v154 = SURFACE::pfnBitBlt(v135);
                  v157 = ((__int64 (__fastcall *)(char *, __int64, _QWORD, _DWORD *, XLATEOBJ *, RECTL *, POINTL *, _QWORD, __int64, __int64, int))v154)(
                           (char *)v135 + 24,
                           v57 + 24,
                           0LL,
                           v335,
                           v326,
                           &v377,
                           v379,
                           0LL,
                           v333,
                           v155 + 1192,
                           v156);
                  v29 = v322;
                  v46 = v157;
LABEL_200:
                  if ( v89 )
                  {
                    cEntries = v89[1].cEntries;
                    if ( cEntries >= 0 )
                    {
                      _InterlockedDecrement(
                        (volatile signed __int32 *)Gre::Base::Globals((Gre::Base *)v106)
                      + 8 * (int)v89[1].cEntries
                      + 1100);
                    }
                    else if ( cEntries == -1 )
                    {
                      FreeThreadBufferWithTag(v89, v39, v41);
                    }
                  }
                  goto LABEL_54;
                }
                goto LABEL_198;
              }
            }
            v89 = (XLATEOBJ *)((char *)Gre::Base::Globals(v93) + 4664);
            goto LABEL_149;
          }
          v143 = (_DWORD *)((char *)v72 + 1768);
          v335 = (_DWORD *)((char *)v72 + 1768);
          v144 = XDCOBJ::prgnEffRao((DC **)v29);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v143, v144, (const struct ERECTL *)&v377, 2);
          v73 = *(__m128i *)(v143 + 1);
          v39 = (unsigned int)_mm_cvtsi128_si32(v73);
          v40 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v73, 8));
          v377 = (RECTL)v73;
          v377.right = v40;
          if ( (_DWORD)v39 != (_DWORD)v40 && v73.m128i_i32[1] != _mm_srli_si128(v73, 8).m128i_i32[1] )
          {
            v377.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v73, 12));
            v377.top = _mm_cvtsi128_si32(_mm_srli_si128(v73, 4));
            goto LABEL_102;
          }
        }
LABEL_53:
        v46 = 1;
LABEL_54:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v348, v39, (__int64)v41, v40);
LABEL_55:
        if ( v330 )
          DC::dwSetLayout(*(DC **)v29, -1, v332);
        v47 = v337;
        if ( !v343 )
          v47 = 0LL;
        v337 = v47;
        PopThreadGuardedObject(v342);
        v48 = v337;
        if ( v337 )
        {
          if ( v338 && (*((_DWORD *)v337 + 11) & 2) != 0 )
          {
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
            v50 = v337;
            v51 = CurrentProcessId & 0xFFFFFFFC;
            if ( *(_QWORD *)v337 )
            {
              v52 = (char *)HmgPentryFromPobj(v339, v337);
            }
            else
            {
              v52 = (char *)v337 + 2152;
              *(_OWORD *)((char *)v337 + 2152) = 0LL;
              v347 = 0LL;
              *((_QWORD *)v50 + 271) = 0LL;
              *((_DWORD *)v50 + 540) = -2147483630;
              *((_QWORD *)v50 + 271) = GreEncodeUserModePointer(0LL);
            }
            if ( v51 == (*((_DWORD *)v52 + 2) & 0xFFFFFFFE) )
            {
              UserAttr = DCOBJ::GetUserAttr((DCOBJ *)&v337);
              if ( UserAttr )
                DC::RestoreAttributes(v337, UserAttr);
            }
            *((_DWORD *)v337 + 11) &= ~2u;
            v48 = v337;
            v338 = 0;
          }
          _InterlockedDecrement16((volatile signed __int16 *)v48 + 6);
          v337 = 0LL;
        }
        PopThreadGuardedObject(v341);
        goto LABEL_70;
      }
      v46 = 0;
    }
LABEL_70:
    if ( v18 )
    {
      v178 = GreGetCurrentThread();
      *((_DWORD *)v178 + 84) &= ~8u;
    }
    return v46;
  }
  v172 = GrepStretchBlt(
           (struct SURFACE **)v11,
           left,
           top,
           a4,
           v14,
           v17,
           a7,
           a8,
           a4,
           v14,
           a9 & 0xDFFFFFFF,
           a10,
           (a9 & 0x20000000) != 0 ? 2 : 0);
  if ( v18 )
  {
    v183 = GreGetCurrentThread();
    *((_DWORD *)v183 + 84) &= ~8u;
  }
  return v172;
}
