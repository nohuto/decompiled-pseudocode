/*
 * XREFs of ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0
 * Callers:
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     NtGdiBitBlt @ 0x14016F4A0 (NtGdiBitBlt.c)
 *     DxgkEngBltViaGDI @ 0x1401B4070 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     GreClientRgnUpdated @ 0x14001B35C (GreClientRgnUpdated.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140073040 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x140078044 (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x140078724 (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140082160 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A700 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14008A810 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1400CF040 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7D10 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     GreClientRgnUpdatedStable @ 0x14016CAA4 (GreClientRgnUpdatedStable.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1401DD684 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x14021AD34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x140223DD4 (SimBitBlt.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepBitBltImpl(
        DC **a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        struct OPTAPIDCOBJ *a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        char a11)
{
  struct XDCOBJ *v11; // r11
  int v12; // r10d
  LONG left; // ebx
  int v14; // r13d
  __int64 v15; // rcx
  char v16; // r15
  int v17; // r14d
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // r8
  struct _DC_ATTR *UserAttr; // rax
  __int64 v23; // rax
  __int64 v24; // r10
  int v25; // r8d
  int v26; // edx
  __int64 y; // r9
  LONG x; // r8d
  int v29; // eax
  LONG top; // r8d
  LONG right; // edx
  XDCOBJ *v32; // rsi
  DC *v33; // r13
  int v34; // eax
  LONG bottom; // ecx
  DC *v37; // rax
  int v38; // ecx
  DC *v39; // r9
  DC *v40; // r8
  SURFACE *v41; // r9
  __int64 v42; // rsi
  __int64 v43; // r13
  unsigned __int8 v44; // cl
  DC **v45; // rdi
  Gre::Base *v46; // rcx
  struct Gre::Base::SESSION_GLOBALS *v48; // rax
  __int64 v49; // rdx
  DC *v50; // r9
  struct Gre::Base::SESSION_GLOBALS *v51; // r8
  struct Gre::Base::SESSION_GLOBALS *v52; // rax
  struct Gre::Base::SESSION_GLOBALS *v53; // rbx
  int v54; // eax
  int v55; // eax
  int v56; // r10d
  _DWORD *v57; // rcx
  LONG v58; // r11d
  __int64 v59; // rdx
  __int64 v60; // rbx
  int v61; // eax
  int v62; // edx
  int v63; // r9d
  __int64 v64; // rax
  LONG v65; // ecx
  LONG v66; // edx
  LONG v67; // ecx
  DC *v68; // rax
  __m128i v69; // xmm3
  DC *v70; // rcx
  int v71; // r12d
  __int64 v72; // rax
  LONG v73; // r11d
  int v74; // edx
  int v75; // r9d
  LONG v76; // r8d
  struct Gre::Base::SESSION_GLOBALS *v77; // r12
  XLATEOBJ *XlateObject; // rdi
  DC *v79; // rcx
  unsigned int v80; // edi
  __int64 v81; // r14
  __int64 v82; // rax
  int v83; // edx
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // rax
  unsigned int v87; // r12d
  struct Gre::Base::SESSION_GLOBALS *v88; // r8
  unsigned int v89; // edx
  int v90; // r11d
  __int64 v91; // rax
  int v92; // ecx
  __int64 v93; // rdi
  __int64 v94; // rdx
  Gre::Base *v95; // rcx
  __int64 v96; // r8
  struct Gre::Base::SESSION_GLOBALS *v97; // r12
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  int v101; // ecx
  __int64 v102; // rcx
  int v103; // ecx
  __int64 v104; // rcx
  int v105; // ecx
  __int64 v106; // rax
  int v107; // ecx
  struct Gre::Base::SESSION_GLOBALS *v108; // rax
  __int64 v109; // rax
  struct Gre::Base::SESSION_GLOBALS *v110; // rax
  XLATEOBJ *v111; // rbx
  __int64 v112; // rcx
  int v113; // edx
  int v114; // r10d
  bool v115; // sf
  LONG v116; // r11d
  int v117; // eax
  LONG v118; // edx
  float v119; // xmm4_4
  __int64 v120; // rax
  int v121; // ecx
  DC *v122; // r13
  int v123; // eax
  int v124; // ecx
  int v125; // r9d
  int v126; // eax
  __m128i v127; // xmm0
  bool v128; // cc
  int v129; // ecx
  int v130; // edx
  __m128i v131; // xmm3
  LONG v132; // r10d
  int v133; // eax
  LONG v134; // ecx
  LONG v135; // edx
  LONG v136; // r9d
  LONG v137; // eax
  RECTL v138; // xmm3
  int v139; // eax
  RECTL v140; // xmm4
  __int64 v141; // rax
  __int64 v142; // rbx
  int v143; // eax
  int v144; // r14d
  SURFACE *v145; // r13
  unsigned int v146; // eax
  int cEntries; // eax
  int v148; // eax
  int v149; // eax
  _DWORD *v150; // r12
  struct REGION *v151; // rax
  LONG v152; // eax
  __int64 v153; // rax
  int v154; // ecx
  __int64 v155; // rax
  int v156; // ecx
  FLONG flXlate; // r9d
  FLONG v158; // r10d
  int (*v159)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v160; // r8
  __int64 v161; // rdx
  __int64 v162; // rcx
  int v163; // r9d
  unsigned int v164; // eax
  __int64 v165; // rdx
  char *v166; // rbx
  __int64 v167; // rdx
  int v168; // ecx
  int v169; // eax
  __int64 v170; // rax
  _OWORD *v171; // rax
  int v172; // r10d
  int v173; // ecx
  __int64 v174; // rdx
  __int64 v175; // rcx
  struct _GRETHREAD *v176; // rax
  struct _GRETHREAD *v177; // rax
  struct _GRETHREAD *v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  unsigned int v181; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v183; // rax
  struct _GRETHREAD *v184; // rax
  _DWORD *v185; // rax
  bool v186; // zf
  _DWORD *v187; // rax
  int v188; // xmm0_4
  float v189; // xmm1_4
  POINTL *v190; // [rsp+30h] [rbp-D0h]
  struct Gre::Base::SESSION_GLOBALS *v191; // [rsp+70h] [rbp-90h]
  char v192; // [rsp+78h] [rbp-88h]
  int v193; // [rsp+7Ch] [rbp-84h]
  int v194; // [rsp+7Ch] [rbp-84h]
  int v195; // [rsp+80h] [rbp-80h]
  int v196; // [rsp+80h] [rbp-80h]
  int v197; // [rsp+80h] [rbp-80h]
  int v199; // [rsp+90h] [rbp-70h]
  int v200; // [rsp+90h] [rbp-70h]
  int v201[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v202[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v203; // [rsp+B0h] [rbp-50h]
  int v204[2]; // [rsp+B8h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v205; // [rsp+C0h] [rbp-40h]
  struct Gre::Base::SESSION_GLOBALS *v206; // [rsp+C8h] [rbp-38h] BYREF
  SURFACE *v207; // [rsp+D0h] [rbp-30h]
  struct Gre::Base::SESSION_GLOBALS *v208; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v209[4]; // [rsp+E0h] [rbp-20h] BYREF
  RECTL v210; // [rsp+F0h] [rbp-10h]
  __int64 v211; // [rsp+100h] [rbp+0h] BYREF
  int v212; // [rsp+108h] [rbp+8h] BYREF
  int v213; // [rsp+10Ch] [rbp+Ch]
  int v214; // [rsp+110h] [rbp+10h]
  int v215; // [rsp+114h] [rbp+14h]
  unsigned int v216; // [rsp+118h] [rbp+18h]
  LONG v217; // [rsp+120h] [rbp+20h] BYREF
  LONG v218; // [rsp+124h] [rbp+24h]
  LONG v219; // [rsp+128h] [rbp+28h]
  LONG v220; // [rsp+12Ch] [rbp+2Ch]
  _DWORD *v221; // [rsp+130h] [rbp+30h]
  __int64 v222; // [rsp+138h] [rbp+38h] BYREF
  __int64 v223; // [rsp+140h] [rbp+40h] BYREF
  __int64 v224; // [rsp+148h] [rbp+48h]
  _DWORD *v225; // [rsp+150h] [rbp+50h]
  RECTL v226; // [rsp+160h] [rbp+60h] BYREF
  HSEMAPHORE v227; // [rsp+170h] [rbp+70h] BYREF
  const struct MATRIX *v228; // [rsp+178h] [rbp+78h] BYREF
  __int64 v229; // [rsp+180h] [rbp+80h] BYREF
  __m128i v230; // [rsp+190h] [rbp+90h] BYREF
  __m128i v231; // [rsp+1A0h] [rbp+A0h]
  __int64 v232; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v233; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v234; // [rsp+1C0h] [rbp+C0h]
  DC *v235[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v236; // [rsp+1E8h] [rbp+E8h]
  _OWORD v237[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v238; // [rsp+270h] [rbp+170h]
  __int64 v239; // [rsp+278h] [rbp+178h]
  char v240; // [rsp+280h] [rbp+180h]
  int v241; // [rsp+284h] [rbp+184h]
  int v242; // [rsp+2A8h] [rbp+1A8h]
  __int128 v243; // [rsp+2B0h] [rbp+1B0h]
  int v244; // [rsp+2C0h] [rbp+1C0h]
  __int64 v245[10]; // [rsp+2C8h] [rbp+1C8h] BYREF
  _QWORD v246[11]; // [rsp+318h] [rbp+218h] BYREF
  __int128 v247; // [rsp+370h] [rbp+270h]
  __int64 v248; // [rsp+380h] [rbp+280h]
  __int64 v249; // [rsp+388h] [rbp+288h]
  __int64 v250; // [rsp+390h] [rbp+290h]
  __int64 v251; // [rsp+398h] [rbp+298h]
  __int64 v252; // [rsp+3A0h] [rbp+2A0h]
  RECTL v253; // [rsp+3B0h] [rbp+2B0h] BYREF
  POINTL v254[2]; // [rsp+3C0h] [rbp+2C0h] BYREF
  __m128i v255; // [rsp+3D0h] [rbp+2D0h] BYREF

  v11 = (struct XDCOBJ *)a1;
  v12 = a5;
  left = a2;
  v14 = a7;
  v15 = a8;
  v204[0] = a8;
  v202[0] = a4;
  v195 = a3;
  v199 = a2;
  v201[0] = a5;
  if ( (a11 & 4) != 0
    && (v16 = 1,
        CurrentThread = GreGetCurrentThread(a8, a2),
        v15 = (unsigned int)v204[0],
        a3 = v195,
        a4 = v202[0],
        v12 = v201[0],
        v11 = (struct XDCOBJ *)a1,
        CurrentThread) )
  {
    *((_DWORD *)CurrentThread + 86) |= 8u;
  }
  else
  {
    v16 = 0;
  }
  v17 = 0;
  v18 = 0;
  if ( (a9 & 0x40000000) == 0 )
  {
    v19 = *(_QWORD *)v11;
    v209[0] = a9 & 0xDFFFFFFF;
    v20 = a9 & 0x5FFFFFFF;
    v216 = 0;
    if ( (*(_DWORD *)(v19 + 36) & 0x10000) != 0 )
      goto LABEL_71;
    a2 = BYTE1(v20);
    v15 = gajRop3[(unsigned __int8)a9];
    if ( (((unsigned __int8)v15 | gajRop3[BYTE1(v20)]) & 2) != 0 && v20 != 16711778 && v20 != 66 )
      bSpDwmValidateSurface(v11, left, a3, a4, v12);
    if ( *(_QWORD *)a6 )
      goto LABEL_18;
    if ( *((_BYTE *)a6 + 113) == 1 )
    {
LABEL_71:
      if ( v16 )
      {
        v178 = GreGetCurrentThread(v15, a2);
        *((_DWORD *)v178 + 86) &= ~8u;
      }
      return v18;
    }
    XDCOBJ::vLockIgnoreAttributes(a6, *((HDC *)a6 + 13));
    if ( *(_QWORD *)a6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a6 + 44LL) & 2) == 0 )
      {
        if ( (*((_DWORD *)a6 + 8) & 2) == 0 )
        {
          UserAttr = XDCOBJ::GetUserAttr(a6);
          if ( UserAttr )
          {
            if ( !DC::SaveAttributes(*(DC **)a6, UserAttr) )
            {
              OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)a6);
              *(_QWORD *)a6 = 0LL;
              goto LABEL_14;
            }
          }
        }
        *(_DWORD *)(*(_QWORD *)a6 + 44LL) |= 2u;
        *((_DWORD *)a6 + 2) = 1;
      }
      v15 = *(_QWORD *)a6;
      if ( (*(_DWORD *)(*(_QWORD *)a6 + 520LL) & 4) != 0 )
        DC::vMarkTransformDirty((DC *)v15);
    }
LABEL_14:
    v23 = *(_QWORD *)a6;
    *((_BYTE *)a6 + 113) = 1;
    if ( v23 )
    {
      if ( *(_WORD *)(v23 + 12) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, a2, v21);
      if ( *(_WORD *)(*(_QWORD *)a6 + 12LL) != 1 )
      {
        if ( *(_QWORD *)a6 )
          XDCOBJ::vUnlockFast(a6);
        *(_QWORD *)a6 = 0LL;
        goto LABEL_71;
      }
LABEL_18:
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v235, (struct Gre::Base::SESSION_GLOBALS **)a6);
      bSpDwmValidateSurface((struct XDCOBJ *)v235, a7, v204[0], v202[0], v201[0]);
      v24 = *((_QWORD *)*a1 + 122);
      v25 = *(_DWORD *)(v24 + 108);
      if ( ((*(_BYTE *)(*((_QWORD *)v235[0] + 122) + 108LL) ^ *(_BYTE *)(v24 + 108)) & 7) != 0
        && ((((v25 & 1) != 0) & _bittest((const signed __int32 *)v209, 0x1Fu)) != 0 || (v25 & 9) == 9) )
      {
        left = *(_QWORD *)(v24 + 308) - v202[0] - v199;
        v216 = DC::dwSetLayout(*a1, -1, 0);
        v209[0] = 0x80000000;
      }
      else
      {
        v209[0] = 0;
      }
      DC::QuickInitXform(*a1, &v222, 516LL);
      DC::QuickInitXform(v235[0], &v228, 516LL);
      if ( (*(_BYTE *)(v222 + 32) & 1) == 0 || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v222, v228) )
      {
        v32 = (XDCOBJ *)a1;
        v18 = GrepStretchBlt(
                (struct XDCOBJ *)a1,
                left,
                v195,
                v202[0],
                v201[0],
                a6,
                a7,
                v204[0],
                v202[0],
                v201[0],
                v20,
                a10,
                0);
        goto LABEL_68;
      }
      v26 = v204[0];
      y = (unsigned int)(v204[0] + v201[0]);
      v206 = v235[0];
      x = v202[0] + a7;
      v254[0].x = a7;
      v254[1].x = v202[0] + a7;
      v254[0].y = v204[0];
      v254[1].y = v204[0] + v201[0];
      if ( (*((_BYTE *)v228 + 32) & 0x43) == 0x43
        || (v29 = bCvtPts1(v228, v254, 2LL, y),
            y = (unsigned int)v254[1].y,
            x = v254[1].x,
            v26 = v254[0].y,
            v14 = v254[0].x,
            v29) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v206 + 122) + 108LL) & 1) != 0 )
        {
          ++v14;
          ++x;
          v254[0].x = v14;
          v254[1].x = x;
        }
      }
      if ( v14 > x )
      {
        v254[0].x = x;
        v254[1].x = v14;
      }
      if ( v26 > (int)y )
      {
        v254[0].y = y;
        v254[1].y = v26;
      }
      top = v195;
      right = v202[0] + left;
      v32 = (XDCOBJ *)a1;
      v253.bottom = v195 + v201[0];
      v253.left = left;
      v253.top = v195;
      v33 = *a1;
      v253.right = v202[0] + left;
      if ( (*(_BYTE *)(v222 + 32) & 0x43) == 0x43
        || (v34 = bCvtPts1(v222, &v253, 2LL, y), right = v253.right, top = v253.top, left = v253.left, v34) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v33 + 122) + 108LL) & 1) != 0 )
        {
          ++left;
          ++right;
          v253.left = left;
          v253.right = right;
        }
      }
      if ( left > right )
      {
        v152 = left;
        v253.left = right;
        left = right;
        v253.right = v152;
        right = v152;
      }
      bottom = v253.bottom;
      if ( top > v253.bottom )
      {
        v253.top = v253.bottom;
        v253.bottom = top;
        top = bottom;
      }
      if ( top == v253.bottom || left == right )
      {
        v18 = 1;
        goto LABEL_68;
      }
      v37 = *a1;
      v38 = *((_DWORD *)*a1 + 9);
      if ( (v38 & 0xE0) != 0 )
      {
        if ( (v38 & 0x20) != 0 )
        {
          if ( left < *((_DWORD *)v37 + 266) )
          {
            *((_DWORD *)v37 + 266) = left;
            right = v253.right;
            top = v253.top;
            left = v253.left;
          }
          if ( top < *((_DWORD *)v37 + 267) )
          {
            *((_DWORD *)v37 + 267) = top;
            right = v253.right;
            top = v253.top;
            left = v253.left;
          }
          if ( right > *((_DWORD *)v37 + 268) )
          {
            *((_DWORD *)v37 + 268) = right;
            right = v253.right;
            top = v253.top;
            left = v253.left;
          }
          if ( v253.bottom > *((_DWORD *)v37 + 269) )
          {
            *((_DWORD *)v37 + 269) = v253.bottom;
            right = v253.right;
            top = v253.top;
            left = v253.left;
          }
        }
        v39 = *a1;
        if ( (*((_DWORD *)*a1 + 9) & 0x80u) != 0 )
        {
          if ( left < *((_DWORD *)v39 + 274) )
          {
            *((_DWORD *)v39 + 274) = left;
            right = v253.right;
            top = v253.top;
          }
          if ( top < *((_DWORD *)v39 + 275) )
          {
            *((_DWORD *)v39 + 275) = top;
            right = v253.right;
          }
          if ( right > *((_DWORD *)v39 + 276) )
            *((_DWORD *)v39 + 276) = right;
          if ( v253.bottom > *((_DWORD *)v39 + 277) )
            *((_DWORD *)v39 + 277) = v253.bottom;
        }
      }
      v239 = 0LL;
      v240 = 0;
      v241 = 0;
      v242 = 0;
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v245);
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v246);
      v252 = 0LL;
      memset(v237, 0, sizeof(v237));
      v243 = 0LL;
      v247 = 0LL;
      v238 = 0LL;
      v244 = 0;
      v246[10] = 0LL;
      v248 = 0LL;
      v251 = 0LL;
      v249 = 0LL;
      v250 = 0LL;
      v245[0] = 0LL;
      v246[0] = 0LL;
      if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v237, (struct XDCOBJ *)a1, (struct XDCOBJ *)v235) )
      {
        if ( !*((_QWORD *)v235[0] + 62) || DC::bInFullScreen(v235[0]) )
          v17 = 1;
        v18 = v17 | XDCOBJ::bFullScreen((XDCOBJ *)a1);
        goto LABEL_67;
      }
      v40 = *a1;
      v41 = (SURFACE *)*((_QWORD *)*a1 + 62);
      v207 = v41;
      if ( !v41 )
      {
        v18 = 1;
        goto LABEL_67;
      }
      v42 = *((_QWORD *)v41 + 16);
      v43 = *((_QWORD *)v40 + 11);
      v44 = (a9 & 0x5FFFFFFF) >> 16;
      v200 = (v44 << 8) | v44;
      if ( ((v44 ^ (unsigned __int8)(16 * v44)) & 0xF0) != 0 )
      {
        v165 = *((_QWORD *)v40 + 122);
        v166 = (char *)v40 + 1200;
        v224 = (__int64)v40 + 1200;
        if ( (*(_DWORD *)(v165 + 152) & 0x1000) != 0 )
        {
          GreDCSelectBrush(v40, *(_QWORD *)(v165 + 160));
          v41 = v207;
        }
        v45 = a1;
        v40 = *a1;
        v167 = *((_QWORD *)*a1 + 122);
        v168 = *(_DWORD *)(v167 + 152);
        if ( (v168 & 1) != 0 || (*((_DWORD *)v40 + 79) & 1) != 0 )
        {
          *(_DWORD *)(v167 + 152) = v168 & 0xFFFFFFFE;
          *((_DWORD *)*a1 + 79) &= ~1u;
          EBRUSHOBJ::vInitBrush(v166, *a1, *((_QWORD *)*a1 + 17), v43, v42, v41, 1);
          v40 = *a1;
        }
      }
      else
      {
        v45 = a1;
        v224 = 0LL;
      }
      v46 = (Gre::Base *)(*((_DWORD *)v40 + 10) & 1);
      v253.left += *((_DWORD *)v40 + 2 * (_QWORD)v46 + 254);
      v253.right += *((_DWORD *)v40 + 2 * (_QWORD)v46 + 254);
      v253.top += *((_DWORD *)v40 + 2 * (_QWORD)v46 + 255);
      v253.bottom += *((_DWORD *)v40 + 2 * (_QWORD)v46 + 255);
      if ( !*((_QWORD *)v235[0] + 62) )
        goto LABEL_66;
      v48 = Gre::Base::Globals(v46);
      v50 = v235[0];
      v51 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)v235[0] + 62);
      v191 = v51;
      if ( v51 )
      {
        v52 = v236;
        if ( !v236 )
        {
          v53 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)v235[0] + 62);
          goto LABEL_77;
        }
      }
      else
      {
        v52 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)v48 + 533);
      }
      v191 = v52;
      v51 = v52;
      v53 = v52;
      if ( !v52 )
        goto LABEL_66;
LABEL_77:
      if ( (a11 & 2) != 0 )
        goto LABEL_86;
      if ( (v244 & 0x400000) == 0 )
        goto LABEL_265;
      v51 = v53;
      v191 = v53;
      if ( (*((_DWORD *)v207 + 29) & 8) != 0 || *((_QWORD *)v207 + 28) )
      {
        if ( _bittest16((const signed __int16 *)v207 + 51, 9u) )
          goto LABEL_265;
      }
      v54 = *((_DWORD *)v207 + 28);
      if ( (v54 & 0x800) != 0 )
      {
        v55 = UserSurfaceAccessCheck(*((_QWORD *)v207 + 81));
      }
      else
      {
        if ( (v54 & 0x10000000) == 0 )
          goto LABEL_86;
        v55 = UserScreenAccessCheck(v207, v49);
      }
      v191 = v53;
      v51 = v53;
      if ( !v55 )
      {
LABEL_265:
        EngSetLastError(6u);
        v32 = (XDCOBJ *)a1;
        goto LABEL_67;
      }
      v50 = v235[0];
LABEL_86:
      v56 = v253.left;
      v57 = (_DWORD *)((char *)v50 + 1024);
      v58 = v253.top;
      v59 = *((_DWORD *)v50 + 10) & 1;
      v60 = *((_QWORD *)v51 + 16);
      if ( (*((_DWORD *)v50 + 10) & 1) == 0 )
        v57 = (_DWORD *)((char *)v50 + 1016);
      v202[0] = v253.left - *v57 - v254[0].x;
      v61 = v253.top - *((_DWORD *)v50 + 2 * v59 + 255);
      v62 = 0;
      v63 = 0;
      v201[0] = v61 - v254[0].y;
      v64 = *((_QWORD *)v51 + 6);
      if ( v64 )
      {
        v191 = v51;
        if ( v51 != *(struct Gre::Base::SESSION_GLOBALS **)(v64 + 2544) )
        {
LABEL_90:
          v191 = v51;
          goto LABEL_91;
        }
        if ( (*(_DWORD *)(v64 + 40) & 0x20000) != 0 )
        {
          v62 = *(_DWORD *)(v64 + 2576);
          v63 = *(_DWORD *)(v64 + 2580);
          goto LABEL_90;
        }
      }
LABEL_91:
      if ( v202[0] + v62 > v253.left )
        v56 = v202[0] + v62;
      v253.left = v56;
      if ( v201[0] + v63 > v253.top )
        v58 = v201[0] + v63;
      v253.top = v58;
      v65 = v62 + *((_DWORD *)v51 + 14) + v202[0];
      v66 = v253.right;
      if ( v65 < v253.right )
        v66 = v65;
      v67 = v253.bottom;
      v253.right = v66;
      if ( v63 + v201[0] + *((_DWORD *)v51 + 15) < v253.bottom )
        v67 = v63 + v201[0] + *((_DWORD *)v51 + 15);
      v253.bottom = v67;
      if ( v56 < v66 && v58 < v67 )
      {
        v68 = *v45;
        v221 = 0LL;
        if ( v56 >= *((_DWORD *)v68 + 250)
          && v66 <= *((_DWORD *)v68 + 252)
          && v58 >= *((_DWORD *)v68 + 251)
          && v67 <= *((_DWORD *)v68 + 253) )
        {
          v69 = (__m128i)v253;
LABEL_106:
          v70 = *v45;
          v208 = v51;
          v71 = *((_DWORD *)v70 + 9);
          if ( (v71 & 0xE0) == 0 )
            goto LABEL_126;
          v255 = v69;
          v72 = *((_DWORD *)v70 + 10) & 1;
          v73 = v56 - *((_DWORD *)v70 + 2 * v72 + 254);
          v255.m128i_i32[0] = v73;
          v74 = v69.m128i_i32[2] - *((_DWORD *)v70 + 2 * v72 + 254);
          v255.m128i_i32[2] = v74;
          v75 = v69.m128i_i32[1] - *((_DWORD *)v70 + 2 * v72 + 255);
          v255.m128i_i32[1] = v75;
          v255.m128i_i32[3] = v69.m128i_i32[3] - *((_DWORD *)v70 + 2 * v72 + 255);
          if ( (v71 & 0x40) == 0 )
          {
LABEL_126:
            XlateObject = 0LL;
            v254[0].y = v253.top - v201[0];
            v254[0].x = v56 - v202[0];
            v79 = *a1;
            if ( v51 == *((struct Gre::Base::SESSION_GLOBALS **)*a1 + 62) )
            {
              v111 = 0LL;
              v18 = 1;
              v205 = 0LL;
              v32 = (XDCOBJ *)a1;
              goto LABEL_184;
            }
            v80 = a10;
            v196 = a10;
            v81 = *((_QWORD *)v235[0] + 11);
            if ( a10 == -1 )
            {
              v80 = *(_DWORD *)(*((_QWORD *)v235[0] + 122) + 180LL);
              v196 = v80;
            }
            v82 = *((_QWORD *)v79 + 122);
            v83 = *(_DWORD *)(v82 + 176);
            v193 = *(_DWORD *)(v82 + 184);
            LODWORD(v203) = *((_DWORD *)v79 + 30);
            v204[0] = v83;
            if ( v60 )
            {
              v206 = v51;
              v191 = v51;
              if ( v42 )
              {
LABEL_131:
                v84 = *(_QWORD *)(v60 + 120);
                if ( v84 == v60 )
                  v85 = *(_DWORD *)(v60 + 32);
                else
                  v85 = *(_DWORD *)(v84 + 32);
                v86 = *(_QWORD *)(v42 + 120);
                if ( v86 == v42 )
                  v79 = (DC *)*(unsigned int *)(v42 + 32);
                else
                  v79 = (DC *)*(unsigned int *)(v86 + 32);
                if ( v85 != (_DWORD)v79 )
                {
                  v83 = v204[0];
                  goto LABEL_137;
                }
LABEL_172:
                v108 = Gre::Base::Globals(v79);
                v51 = v191;
                XlateObject = (XLATEOBJ *)((char *)v108 + 4552);
                goto LABEL_179;
              }
              if ( (*(_DWORD *)(v60 + 24) & 0x800) != 0 )
              {
                v109 = *(_QWORD *)(v43 + 80);
                if ( !v109 || v109 == *(_QWORD *)(v43 + 72) )
                {
                  v110 = Gre::Base::Globals(v79);
                  v51 = v206;
                  v191 = v206;
                  XlateObject = (XLATEOBJ *)((char *)v110 + 4552);
                  goto LABEL_179;
                }
              }
            }
            else
            {
              v79 = v51;
              if ( !v42 )
              {
                v191 = v51;
                goto LABEL_172;
              }
              if ( (*(_DWORD *)(v42 + 24) & 0x800) != 0 )
              {
                v183 = *(_QWORD *)(v43 + 80);
                v191 = v51;
                if ( !v183 )
                  goto LABEL_172;
                v191 = v51;
                if ( v183 == *(_QWORD *)(v43 + 72) )
                  goto LABEL_172;
              }
            }
            v191 = v51;
            if ( !v60 )
              goto LABEL_147;
            if ( !v42 )
            {
LABEL_137:
              v191 = v51;
              if ( v42 )
              {
                v87 = *(_DWORD *)(v60 + 56);
                v233 = v81;
                v206 = Gre::Base::Globals(v79);
                v227 = (HSEMAPHORE)(*(_QWORD *)v206 + 312LL);
                GreAcquireSemaphoreInternal(v227);
                GrepAcquireLockValidate<13>();
                v88 = v206;
                v89 = 0;
                v90 = v196;
                while ( 1 )
                {
                  if ( v89 >= 8 )
                  {
                    SEMOBJ<13>::vUnlock(&v227);
                    v51 = v191;
                    v83 = v204[0];
                    v80 = v196;
                    goto LABEL_148;
                  }
                  v91 = *(_QWORD *)(v60 + 120);
                  v92 = v91 == v60 ? *(_DWORD *)(v60 + 32) : *(_DWORD *)(v91 + 32);
                  v93 = 32LL * v87;
                  if ( *(_DWORD *)((char *)v88 + v93 + 4304) == v92 )
                  {
                    v153 = *(_QWORD *)(v42 + 120);
                    v154 = v153 == v42 ? *(_DWORD *)(v42 + 32) : *(_DWORD *)(v153 + 32);
                    if ( *(_DWORD *)((char *)v88 + v93 + 4308) == v154 )
                    {
                      v155 = *(_QWORD *)(v43 + 120);
                      v156 = v155 == v43 ? *(_DWORD *)(v43 + 32) : *(_DWORD *)(v155 + 32);
                      if ( *(_DWORD *)((char *)v88 + v93 + 4316) == v156 )
                      {
                        XlateObject = *(XLATEOBJ **)((char *)v88 + v93 + 4296);
                        flXlate = XlateObject[3].flXlate;
                        if ( (flXlate & 0x6000) == 0 )
                        {
                          v158 = XlateObject->flXlate;
                          if ( (v158 & 4) == 0 && (XlateObject[3].flXlate & 0x100) == 0 )
                            break;
                          if ( (v158 & 4) != 0 && v90 == XlateObject[1].iUniq )
                          {
                            v164 = XEPALOBJ::ulTime((XEPALOBJ *)&v233);
                            if ( *((_DWORD *)v88 + 8 * v87 + 1078) == v164 )
                              break;
                          }
                          if ( (flXlate & 0x100) != 0
                            && v193 == XlateObject[1].flXlate
                            && v204[0] == *(_DWORD *)&XlateObject[1].iSrcType )
                          {
                            break;
                          }
                        }
                      }
                    }
                  }
                  v87 = ((_BYTE)v87 + 1) & 7;
                  ++v89;
                }
                _InterlockedIncrement((volatile signed __int32 *)v88 + 8 * v87 + 1072);
                *(_DWORD *)(v60 + 56) = v87;
                SEMOBJ<13>::vUnlock(&v227);
                v51 = v191;
                goto LABEL_179;
              }
LABEL_147:
              v191 = v51;
LABEL_148:
              v18 = 0;
              LODWORD(v190) = v193;
              v206 = v51;
              XlateObject = (XLATEOBJ *)CreateXlateObject(0LL, v203, v60, v42, v81, v43, v190, v83, v80, 0);
              if ( !XlateObject )
              {
                v51 = v191;
LABEL_180:
                v32 = (XDCOBJ *)a1;
                v111 = XlateObject;
                v205 = (struct Gre::Base::SESSION_GLOBALS *)XlateObject;
                v112 = *((unsigned int *)*a1 + 9);
                if ( (v112 & 1) == 0 )
                {
                  v254[1].x = v253.right - v202[0];
                  v254[1].y = v253.bottom - v201[0];
                }
                if ( !v18 )
                  goto LABEL_222;
                v69 = (__m128i)v253;
LABEL_184:
                v225 = (_DWORD *)((char *)v51 + 56);
                v231 = v69;
                *(_QWORD *)v204 = (char *)v51 + 48;
                v113 = 0;
                v234 = *(_OWORD *)&v254[0].x;
                v114 = 0;
                v230 = v69;
                v226 = *(RECTL *)&v254[0].x;
                v115 = *((int *)v207 + 28) < 0;
                v212 = 0;
                v213 = 0;
                if ( v115 )
                {
                  v185 = (_DWORD *)*((_QWORD *)v207 + 6);
                  if ( v185 )
                  {
                    v186 = (v185[10] & 0x20000) == 0;
                    v205 = (struct Gre::Base::SESSION_GLOBALS *)v111;
                    v191 = v51;
                    if ( !v186 )
                    {
                      v114 = v185[644];
                      v113 = v185[645];
                      v212 = v114;
                      v213 = v113;
                      v205 = (struct Gre::Base::SESSION_GLOBALS *)v111;
                      v191 = v51;
                    }
                  }
                }
                v217 = 0;
                v214 = v114 + *((_DWORD *)v207 + 14);
                v116 = 0;
                v117 = v113 + *((_DWORD *)v207 + 15);
                v118 = 0;
                v115 = *((int *)v51 + 28) < 0;
                v218 = 0;
                v215 = v117;
                if ( v115 )
                {
                  v187 = **(_DWORD ***)v204;
                  if ( **(_QWORD **)v204 )
                  {
                    v186 = (v187[10] & 0x20000) == 0;
                    v205 = (struct Gre::Base::SESSION_GLOBALS *)v111;
                    v191 = v51;
                    if ( !v186 )
                    {
                      v116 = v187[644];
                      v118 = v187[645];
                      v217 = v116;
                      v218 = v118;
                      v205 = (struct Gre::Base::SESSION_GLOBALS *)v111;
                      v191 = v51;
                    }
                  }
                }
                v119 = FLOAT_1_0;
                v219 = v116 + *v225;
                v220 = v118 + *((_DWORD *)v51 + 15);
                v120 = *(_QWORD *)v32;
                v121 = *(_DWORD *)(*(_QWORD *)v32 + 520LL);
                if ( (v121 & 1) != 0 && (v121 & 2) == 0 )
                {
                  *(float *)&v188 = 1.0 / *(float *)(v120 + 528);
                  *(float *)v202 = 1.0 / COERCE_FLOAT(*(_QWORD *)(v120 + 524));
                  v202[1] = v188;
                  ERECTL::vScale((ERECTL *)&v212, (const struct POINTFL *)v202);
                  ERECTL::vScale((ERECTL *)&v230, (const struct POINTFL *)v202);
                  v51 = v191;
                  v69 = v230;
                  v116 = v217;
                  v114 = v212;
                  v205 = (struct Gre::Base::SESSION_GLOBALS *)v111;
                }
                v122 = v235[0];
                v123 = *((_DWORD *)v235[0] + 130);
                if ( (v123 & 1) != 0 && (v123 & 2) == 0 )
                {
                  v189 = v119 / COERCE_FLOAT(*(_QWORD *)((char *)v235[0] + 524));
                  *(float *)&v201[1] = v119 / *((float *)v235[0] + 132);
                  *(float *)v201 = v189;
                  ERECTL::vScale((ERECTL *)&v217, (const struct POINTFL *)v201);
                  ERECTL::vScale((ERECTL *)&v226, (const struct POINTFL *)v201);
                  v51 = v191;
                  v122 = v235[0];
                  v116 = v217;
                  v114 = v212;
                  v205 = (struct Gre::Base::SESSION_GLOBALS *)v111;
                }
                v124 = _mm_cvtsi128_si32(v69);
                v210 = (RECTL)v69;
                v125 = v226.left - v124;
                v126 = _mm_cvtsi128_si32(_mm_srli_si128(v69, 4));
                v194 = v226.left - v124;
                v127 = _mm_srli_si128(v69, 8);
                v128 = v114 <= v124;
                v197 = v226.top - v126;
                v129 = v69.m128i_i32[3];
                v130 = _mm_cvtsi128_si32(v69);
                v131 = _mm_srli_si128(v69, 12);
                if ( !v128 )
                  v130 = v114;
                v132 = v210.top;
                if ( v213 > v126 )
                  v132 = v213;
                v133 = v210.right;
                if ( v214 < _mm_cvtsi128_si32(v127) )
                  v133 = v214;
                LODWORD(v203) = v133;
                if ( v215 < _mm_cvtsi128_si32(v131) )
                  v129 = v215;
                if ( v133 < v130 )
                {
                  v130 = v133;
                }
                else if ( v129 < v132 )
                {
                  v132 = v129;
                }
                v134 = v197 + v129;
                v135 = v125 + v130;
                v136 = v133 + v125;
                v137 = v132 + v197;
                if ( v116 > v135 )
                  v135 = v116;
                v210.left = v135;
                if ( v218 > v137 )
                  v137 = v218;
                v210.top = v137;
                if ( v219 < v136 )
                  v136 = v219;
                v210.right = v136;
                if ( v220 < v134 )
                  v134 = v220;
                v210.bottom = v134;
                if ( v136 < v135 )
                {
                  v135 = v136;
                  v210.left = v136;
                }
                else
                {
                  if ( v134 < v137 )
                    v137 = v134;
                  v210.top = v137;
                }
                v138 = v210;
                v139 = v137 - v197;
                v112 = (unsigned int)(v134 - v197);
                v210.left = v135 - v194;
                v210.right = v136 - v194;
                v210.top = v139;
                v210.bottom = v112;
                v140 = v210;
                v230 = (__m128i)v210;
                v226 = v138;
                if ( v135 - v194 >= v136 - v194 || v139 >= (int)v112 )
                {
                  v192 = 0;
                  v205 = (struct Gre::Base::SESSION_GLOBALS *)v111;
                  v191 = v51;
                }
                else
                {
                  v112 = *(_QWORD *)v32;
                  v148 = *(_DWORD *)(*(_QWORD *)v32 + 520LL);
                  if ( (v148 & 1) == 0 || (v148 & 2) != 0 )
                  {
                    v205 = (struct Gre::Base::SESSION_GLOBALS *)v111;
                    v191 = v51;
                  }
                  else
                  {
                    v232 = *(_QWORD *)(v112 + 524);
                    ERECTL::vScale((ERECTL *)&v230, (const struct POINTFL *)&v232);
                    v51 = v191;
                    v140 = (RECTL)v230;
                    v122 = v235[0];
                  }
                  v149 = *((_DWORD *)v122 + 130);
                  if ( (v149 & 1) != 0 && (v149 & 2) == 0 )
                  {
                    v229 = *(_QWORD *)((char *)v122 + 524);
                    ERECTL::vScale((ERECTL *)&v226, (const struct POINTFL *)&v229);
                    v51 = v191;
                    v138 = v226;
                    v205 = (struct Gre::Base::SESSION_GLOBALS *)v111;
                  }
                  *(RECTL *)&v254[0].x = v138;
                  v253 = v140;
                  v192 = 1;
                  ++*((_DWORD *)v207 + 23);
                  v122 = v235[0];
                }
                v94 = *(_QWORD *)v32;
                v141 = *((_QWORD *)v122 + 6);
                v203 = v94;
                if ( *(_QWORD *)(v94 + 48) != v141 )
                {
                  v169 = XDCOBJ::bRedirHooked(v32);
                  v122 = v235[0];
                  if ( v169
                    && (v94 = *(_QWORD *)v32,
                        v170 = *((_QWORD *)v235[0] + 6),
                        v203 = v94,
                        v112 = *(_QWORD *)(v94 + 48),
                        *(_QWORD *)(v112 + 3512) == v170) )
                  {
                    v51 = v191;
                  }
                  else
                  {
                    v51 = v191;
                    if ( *((_WORD *)v191 + 50)
                      || *((_QWORD *)v191 + 3)
                      || (v94 = *(_QWORD *)v32,
                          v203 = v94,
                          v112 = *(unsigned int *)(*(_QWORD *)(v94 + 48) + 40LL),
                          (v112 & 0x80u) != 0LL) )
                    {
                      if ( v192 )
                      {
                        v171 = v237;
                        if ( (*(_DWORD *)(*((_QWORD *)v207 + 6) + 40LL) & 0x80u) == 0 )
                          v171 = 0LL;
                        v18 = SimBitBlt(
                                (SURFOBJ *)((char *)v207 + 24),
                                (SURFOBJ *)((char *)v191 + 24),
                                v111,
                                &v253,
                                v254,
                                0LL,
                                v224,
                                (POINTL *)(*(_QWORD *)v32 + 1192LL),
                                v200,
                                (__int64)v171);
                      }
                      goto LABEL_222;
                    }
                  }
                }
                if ( v200 == 52428 )
                {
                  v142 = *((_QWORD *)v207 + 6);
                  v143 = a11 & 1;
                  v144 = v143;
                  if ( (a11 & 1) != 0 )
                  {
                    v172 = v231.m128i_i32[1] - v231.m128i_i32[3];
                    if ( v231.m128i_i32[1] - v231.m128i_i32[3] < 0 )
                      v172 = v231.m128i_i32[3] - v231.m128i_i32[1];
                    v173 = v231.m128i_i32[3] - v231.m128i_i32[2];
                    if ( v231.m128i_i32[3] - v231.m128i_i32[2] < 0 )
                      v173 = v231.m128i_i32[2] - v231.m128i_i32[3];
                    EtwWindowRendering(
                      *(_QWORD *)(v203 + 464),
                      *(_QWORD *)(v203 + 472),
                      **(_QWORD **)(v203 + 496),
                      v231.m128i_u32[0],
                      v231.m128i_i32[1],
                      v231.m128i_i32[2],
                      v231.m128i_i32[3],
                      *((_QWORD *)v122 + 58),
                      *((_QWORD *)v122 + 59),
                      **((_QWORD **)v122 + 62),
                      v234,
                      DWORD1(v234),
                      v234 + v173,
                      DWORD1(v234) + v172);
                    v145 = v207;
                    *((_WORD *)v207 + 51) |= 0x40u;
                    v176 = GreGetCurrentThread(v175, v174);
                    v144 = a11 & 1;
                    if ( v176 )
                    {
                      *((_DWORD *)v176 + 86) &= ~1u;
                      v144 = a11 & 1;
                    }
                    GreClientRgnUpdated(0LL);
                    GreClientRgnUpdatedStable();
                    v143 = a11 & 1;
                    v32 = (XDCOBJ *)a1;
                  }
                  else
                  {
                    v145 = v207;
                  }
                  if ( v192 )
                  {
                    if ( (*((_DWORD *)v145 + 28) & 0x400) != 0 )
                      v146 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, struct Gre::Base::SESSION_GLOBALS *, RECTL *, POINTL *))(v142 + 2832))(
                               (__int64)v145 + 24,
                               (__int64)v191 + 24,
                               v221,
                               v205,
                               &v253,
                               v254);
                    else
                      v146 = ((__int64 (__fastcall *)(char *, char *, _DWORD *, struct Gre::Base::SESSION_GLOBALS *, RECTL *, POINTL *))EngCopyBits)(
                               (char *)v145 + 24,
                               (char *)v191 + 24,
                               v221,
                               v205,
                               &v253,
                               v254);
                    v18 = v146;
                    v143 = v144;
                  }
                  if ( v143 )
                  {
                    *((_WORD *)v145 + 51) &= ~0x40u;
                    v177 = GreGetCurrentThread(v112, v94);
                    if ( v177 )
                      *((_DWORD *)v177 + 86) |= 1u;
                  }
                }
                else if ( v192 )
                {
                  v159 = SURFACE::pfnBitBlt(v207);
                  v18 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _DWORD *, XLATEOBJ *, RECTL *, POINTL *, _QWORD, __int64, __int64, int))v159)(
                          v162 + 24,
                          v160 + 24,
                          0LL,
                          v221,
                          v111,
                          &v253,
                          v254,
                          0LL,
                          v224,
                          v161 + 1192,
                          v163);
                }
LABEL_222:
                if ( XlateObject )
                {
                  cEntries = XlateObject[1].cEntries;
                  if ( cEntries >= 0 )
                  {
                    _InterlockedDecrement(
                      (volatile signed __int32 *)Gre::Base::Globals((Gre::Base *)v112)
                    + 8 * (int)XlateObject[1].cEntries
                    + 1072);
                  }
                  else if ( cEntries == -1 )
                  {
                    FreeThreadBufferWithTag(XlateObject, v94, v51);
                  }
                }
                goto LABEL_67;
              }
              if ( v60 )
              {
                v191 = v206;
                v51 = v206;
                if ( !v42 )
                {
                  v191 = v206;
                  goto LABEL_179;
                }
                if ( (XlateObject[3].flXlate & 0x200) != 0 )
                {
LABEL_179:
                  v18 = 1;
                  goto LABEL_180;
                }
                v205 = Gre::Base::Globals(v95);
                SEMOBJ<13>::SEMOBJ<13>(&v206, v205);
                v96 = 0LL;
                v97 = v205;
                while ( (unsigned int)v96 < 8 )
                {
                  v98 = *((unsigned int *)v97 + 1136);
                  v99 = *((_QWORD *)v97 + 4 * v98 + 537);
                  if ( !v99 )
                    goto LABEL_157;
                  if ( !*((_DWORD *)v97 + 8 * v98 + 1072) )
                  {
                    FreeThreadBufferWithTag(v99, v99, v96);
LABEL_157:
                    PopThreadGuardedObject(&XlateObject[-2].pulXlate);
                    *((_DWORD *)v97 + 8 * *((unsigned int *)v97 + 1136) + 1072) = 1;
                    *((_QWORD *)v97 + 4 * *((unsigned int *)v97 + 1136) + 537) = XlateObject;
                    v100 = *(_QWORD *)(v60 + 120);
                    if ( v100 == v60 )
                      v101 = *(_DWORD *)(v60 + 32);
                    else
                      v101 = *(_DWORD *)(v100 + 32);
                    *((_DWORD *)v97 + 8 * *((unsigned int *)v97 + 1136) + 1076) = v101;
                    v102 = *(_QWORD *)(v42 + 120);
                    if ( v102 == v42 )
                      v103 = *(_DWORD *)(v42 + 32);
                    else
                      v103 = *(_DWORD *)(v102 + 32);
                    *((_DWORD *)v97 + 8 * *((unsigned int *)v97 + 1136) + 1077) = v103;
                    v104 = *(_QWORD *)(v81 + 120);
                    if ( v104 == v81 )
                      v105 = *(_DWORD *)(v81 + 32);
                    else
                      v105 = *(_DWORD *)(v104 + 32);
                    *((_DWORD *)v97 + 8 * *((unsigned int *)v97 + 1136) + 1078) = v105;
                    v106 = *(_QWORD *)(v43 + 120);
                    if ( v106 == v43 )
                      v107 = *(_DWORD *)(v43 + 32);
                    else
                      v107 = *(_DWORD *)(v106 + 32);
                    *((_DWORD *)v97 + 8 * *((unsigned int *)v97 + 1136) + 1079) = v107;
                    XlateObject[1].cEntries = *((_DWORD *)v97 + 1136);
                    *(_DWORD *)(v60 + 56) = *((_DWORD *)v97 + 1136);
                    *((_DWORD *)v97 + 1136) = ((unsigned __int8)*((_DWORD *)v97 + 1136) + 1) & 7;
                    break;
                  }
                  *((_DWORD *)v97 + 1136) = ((_BYTE)v98 + 1) & 7;
                  v96 = (unsigned int)(v96 + 1);
                }
                SEMOBJ<13>::vUnlock((HSEMAPHORE *)&v206);
              }
              v51 = v191;
              goto LABEL_179;
            }
            goto LABEL_131;
          }
          v76 = *((_DWORD *)v70 + 270);
          if ( v76 == *((_DWORD *)v70 + 272) || *((_DWORD *)v70 + 271) == *((_DWORD *)v70 + 273) )
          {
            v51 = v208;
            *(__m128i *)((char *)v70 + 1080) = v255;
          }
          else
          {
            if ( v73 < v76 )
            {
              *((_DWORD *)v70 + 270) = v73;
              v56 = v253.left;
              v69 = (__m128i)v253;
              v74 = v255.m128i_i32[2];
              v75 = v255.m128i_i32[1];
            }
            if ( v75 < *((_DWORD *)v70 + 271) )
            {
              *((_DWORD *)v70 + 271) = v75;
              v56 = v253.left;
              v69 = (__m128i)v253;
              v74 = v255.m128i_i32[2];
            }
            if ( v74 > *((_DWORD *)v70 + 272) )
            {
              *((_DWORD *)v70 + 272) = v74;
              v56 = v253.left;
              v69 = (__m128i)v253;
            }
            v51 = v208;
            v191 = v208;
            if ( v255.m128i_i32[3] <= *((_DWORD *)v70 + 273) )
            {
LABEL_119:
              v223 = *((_QWORD *)*v45 + 148);
              if ( !v223 )
                goto LABEL_126;
              v191 = v51;
              v77 = v51;
              Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v208);
              RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v208, 0x70u);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v208);
              Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v211);
              RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v211, 0x70u);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v211);
              if ( v208 && v211 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v211, (const struct _RECTL *const)&v255);
                if ( !RGNOBJ::bMerge((RGNOBJ *)&v208, (struct RGNOBJ *)&v223, (struct RGNOBJ *)&v211, 0xEu) )
                {
LABEL_125:
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v211);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v211);
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v208);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v208);
                  v56 = v253.left;
                  v69 = (__m128i)v253;
                  v51 = v191;
                  goto LABEL_126;
                }
                RGNOBJ::vSwap((RGNOBJ *)&v223, (struct RGNOBJ *)&v208);
                *((_QWORD *)*v45 + 148) = v223;
              }
              v191 = v77;
              goto LABEL_125;
            }
            *((_DWORD *)v70 + 273) = v255.m128i_i32[3];
          }
          v69 = (__m128i)v253;
          v56 = v253.left;
          v191 = v51;
          goto LABEL_119;
        }
        v150 = (_DWORD *)((char *)v68 + 1768);
        v221 = (_DWORD *)((char *)v68 + 1768);
        v151 = XDCOBJ::prgnEffRao(v45);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v150, v151, (const struct ERECTL *)&v253, 2);
        v69 = *(__m128i *)(v150 + 1);
        v56 = _mm_cvtsi128_si32(v69);
        v253 = (RECTL)v69;
        if ( v56 != _mm_cvtsi128_si32(_mm_srli_si128(v69, 8)) && v69.m128i_i32[1] != _mm_srli_si128(v69, 8).m128i_i32[1] )
        {
          v51 = v191;
          v253.top = _mm_cvtsi128_si32(_mm_srli_si128(v69, 4));
          goto LABEL_106;
        }
      }
LABEL_66:
      v32 = (XDCOBJ *)a1;
      v18 = 1;
LABEL_67:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v237);
LABEL_68:
      if ( v209[0] )
        DC::dwSetLayout(*(DC **)v32, -1, v216);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v235);
      goto LABEL_71;
    }
    goto LABEL_71;
  }
  v181 = GrepStretchBlt(
           v11,
           left,
           a3,
           a4,
           v12,
           a6,
           a7,
           v15,
           a4,
           v12,
           a9 & 0xDFFFFFFF,
           a10,
           (a9 & 0x20000000) != 0 ? 2 : 0);
  if ( v16 )
  {
    v184 = GreGetCurrentThread(v180, v179);
    *((_DWORD *)v184 + 86) &= ~8u;
  }
  return v181;
}
