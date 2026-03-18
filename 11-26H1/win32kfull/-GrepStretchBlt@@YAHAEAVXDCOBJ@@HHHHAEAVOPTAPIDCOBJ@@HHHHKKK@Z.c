/*
 * XREFs of ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94
 * Callers:
 *     NtGdiStretchBlt @ 0x140016260 (NtGdiStretchBlt.c)
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     BltIcon @ 0x140027954 (BltIcon.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     GreStretchBlt @ 0x14016B458 (GreStretchBlt.c)
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14006AC08 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     GreMovePointer @ 0x14006B170 (GreMovePointer.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14006BEDC (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1400702E0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x14007813C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14007F744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1400AB9A0 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400ABEE8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400B438C (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0N@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B4420 (--$GreAcquireSemaphoreCommon@$0N@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400BB534 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1401AC914 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ?GrepStretchReMapSurface@@YAXAEAVXDCOBJ@@PEAVSURFACE@@@Z @ 0x140219284 (-GrepStretchReMapSurface@@YAXAEAVXDCOBJ@@PEAVSURFACE@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1402524D8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepStretchBlt(
        struct SURFACE **a1,
        LONG x,
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
  unsigned int v13; // esi
  __int64 v17; // r8
  int v18; // eax
  char v19; // r15
  struct SURFACE *v20; // rcx
  DC *v21; // rax
  __int64 v22; // rdx
  Gre::Base *v23; // rcx
  unsigned int v24; // r15d
  __int64 v25; // rdx
  struct Gre::Base::SESSION_GLOBALS *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  Gre::Base *v29; // rcx
  char v30; // di
  bool v31; // bl
  char v32; // r13
  struct SURFACE *v33; // rax
  LONG v34; // r8d
  LONG v35; // edx
  int v36; // r9d
  struct SURFACE *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  ULONG v42; // ecx
  unsigned int v43; // ebx
  __int64 v44; // r13
  char v45; // bl
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  struct SURFACE *v52; // rax
  SURFACE *v53; // r12
  struct SURFACE *v54; // rcx
  SURFACE *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  struct Gre::Base::SESSION_GLOBALS *v59; // rdx
  struct SURFACE *v60; // rcx
  OPTAPIDCOBJ *v61; // r13
  __int64 v62; // rbx
  Gre::Base *v63; // rcx
  DC *v64; // r9
  Gre::Base *v65; // rcx
  struct Gre::Base::SESSION_GLOBALS *v66; // rax
  struct Gre::Base::SESSION_GLOBALS *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rbx
  struct Gre::Base::SESSION_GLOBALS *v70; // rdi
  Gre::Base *v71; // rcx
  struct Gre::Base::SESSION_GLOBALS *v72; // rax
  struct SURFACE *v73; // rdx
  struct SURFACE *v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // r8
  unsigned int v77; // eax
  HSEMAPHORE v78; // r10
  struct SURFACE *v79; // rcx
  __int64 v80; // r13
  __int64 v81; // rax
  int v82; // r9d
  Gre::Base *v83; // rcx
  int v84; // edx
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // edx
  unsigned int v88; // r8d
  unsigned int j; // eax
  __int64 v90; // rdx
  char *XlateObject; // rax
  Gre::Base *v92; // rcx
  int v93; // r13d
  LONG y; // r11d
  int v95; // r10d
  int v96; // r9d
  bool v97; // zf
  struct Gre::Base::SESSION_GLOBALS *v98; // r13
  unsigned int i; // ecx
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rdx
  int v104; // eax
  __int64 v105; // rdx
  int v106; // eax
  __int64 v107; // rdx
  int v108; // eax
  struct SURFACE *v109; // rdx
  struct SURFACE *v110; // rax
  __int64 v111; // rcx
  char v112; // bl
  __int64 v113; // rcx
  __int64 v114; // r9
  struct SURFACE *v115; // rcx
  char *v116; // r9
  int v117; // r11d
  __int64 v118; // rdx
  __int64 v119; // rcx
  SURFACE *v120; // r13
  HSEMAPHORE v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rcx
  struct SURFACE *v125; // rdx
  __int64 v126; // r8
  int v127; // ecx
  __int64 v128; // rax
  SURFACE *v129; // rcx
  __int64 v130; // rbx
  int v131; // eax
  char v132; // [rsp+20h] [rbp-E0h]
  char v133; // [rsp+50h] [rbp-B0h]
  unsigned int v134; // [rsp+54h] [rbp-ACh]
  unsigned int v135; // [rsp+54h] [rbp-ACh]
  int v136; // [rsp+58h] [rbp-A8h]
  unsigned int v137; // [rsp+5Ch] [rbp-A4h]
  int v138; // [rsp+5Ch] [rbp-A4h]
  __int64 v139; // [rsp+60h] [rbp-A0h]
  int v140; // [rsp+68h] [rbp-98h]
  int v141; // [rsp+6Ch] [rbp-94h]
  int v142; // [rsp+70h] [rbp-90h]
  unsigned int v143; // [rsp+70h] [rbp-90h]
  __int64 v144; // [rsp+78h] [rbp-88h]
  struct SURFACE *v146; // [rsp+90h] [rbp-70h]
  struct SURFACE *v147; // [rsp+90h] [rbp-70h]
  __int64 v148; // [rsp+98h] [rbp-68h] BYREF
  int v149; // [rsp+A0h] [rbp-60h]
  int v150; // [rsp+A4h] [rbp-5Ch]
  unsigned int v151; // [rsp+A8h] [rbp-58h]
  LONG v152; // [rsp+ACh] [rbp-54h]
  int v153; // [rsp+B0h] [rbp-50h]
  HSEMAPHORE v154; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v155; // [rsp+C0h] [rbp-40h]
  struct Gre::Base::SESSION_GLOBALS *v156; // [rsp+C8h] [rbp-38h]
  unsigned int v157; // [rsp+D0h] [rbp-30h]
  int v158; // [rsp+D4h] [rbp-2Ch]
  struct Gre::Base::SESSION_GLOBALS *v159; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v160; // [rsp+E0h] [rbp-20h]
  DC *v161; // [rsp+F0h] [rbp-10h] BYREF
  int v162; // [rsp+F8h] [rbp-8h]
  struct SURFACE *v163; // [rsp+100h] [rbp+0h]
  __int64 v164; // [rsp+108h] [rbp+8h]
  _OWORD v165[2]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v166[2]; // [rsp+130h] [rbp+30h] BYREF
  char v167; // [rsp+150h] [rbp+50h]
  __int64 v168; // [rsp+158h] [rbp+58h]
  DC *v169; // [rsp+160h] [rbp+60h] BYREF
  int v170; // [rsp+168h] [rbp+68h]
  __int64 v171; // [rsp+170h] [rbp+70h]
  __int64 v172; // [rsp+178h] [rbp+78h]
  _OWORD v173[2]; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v174[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v175; // [rsp+1C0h] [rbp+C0h]
  struct SURFACE *v176; // [rsp+1D0h] [rbp+D0h] BYREF
  int v177; // [rsp+1D8h] [rbp+D8h]
  __int64 v178; // [rsp+1E0h] [rbp+E0h]
  __int64 v179; // [rsp+1E8h] [rbp+E8h]
  _OWORD v180[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _OWORD v181[2]; // [rsp+210h] [rbp+110h] BYREF
  char v182; // [rsp+230h] [rbp+130h]
  __int64 v183; // [rsp+238h] [rbp+138h]
  _BYTE v184[72]; // [rsp+240h] [rbp+140h] BYREF
  int v185; // [rsp+288h] [rbp+188h]
  HSEMAPHORE v186; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v187; // [rsp+3A8h] [rbp+2A8h]
  struct MATRIX *inited; // [rsp+3B0h] [rbp+2B0h] BYREF
  struct MATRIX *v189; // [rsp+3B8h] [rbp+2B8h]
  __int64 v190; // [rsp+3C0h] [rbp+2C0h]
  Gre::Base *v191; // [rsp+3C8h] [rbp+2C8h]
  __int64 v192; // [rsp+3D0h] [rbp+2D0h]
  __int64 v193; // [rsp+3D8h] [rbp+2D8h]
  struct SURFACE *v194; // [rsp+3E0h] [rbp+2E0h]
  __int64 v195; // [rsp+3E8h] [rbp+2E8h]
  __int64 v196; // [rsp+3F0h] [rbp+2F0h]
  char *v197; // [rsp+3F8h] [rbp+2F8h]
  __int64 v198; // [rsp+400h] [rbp+300h]
  struct _POINTFIX v199; // [rsp+410h] [rbp+310h] BYREF
  struct _POINTL v200; // [rsp+430h] [rbp+330h] BYREF
  int v201; // [rsp+438h] [rbp+338h]
  LONG v202; // [rsp+43Ch] [rbp+33Ch]
  LONG v203; // [rsp+440h] [rbp+340h]
  int v204; // [rsp+444h] [rbp+344h]
  unsigned int v205; // [rsp+448h] [rbp+348h] BYREF
  int v206; // [rsp+44Ch] [rbp+34Ch]
  unsigned int v207; // [rsp+450h] [rbp+350h]
  unsigned int v208; // [rsp+454h] [rbp+354h]
  __int64 v209; // [rsp+468h] [rbp+368h]
  unsigned int v210; // [rsp+470h] [rbp+370h]
  int v211; // [rsp+474h] [rbp+374h]

  v13 = 0;
  v152 = a3;
  v153 = a5;
  v137 = a11 & 0x40000000;
  v196 = 0LL;
  v211 = 0;
  v134 = 0;
  v151 = 0;
  v17 = a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF);
  v140 = (a11 & 0x40000000) != 0;
  v210 = (((a11 & ((-v140 & 0xC0000000) + 0x7FFFFFFF)) >> 8) | a11 & ((-v140 & 0xC0000000) + 0x7FFFFFFF) & 0xFF0000) >> 8;
  v18 = (unsigned __int8)gajRop3[(unsigned __int16)((a11 & ((-v140 & 0xC0000000) + 0x7FFFFFFF)) >> 8) >> 8];
  v19 = v18 | gajRop3[(unsigned __int64)v210 >> 8];
  v136 = v18 | (unsigned __int8)gajRop3[(unsigned __int64)v210 >> 8];
  v142 = v19 & 0xD4;
  if ( (v19 & 0xD4) == 0 )
  {
    v38 = (((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) | a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF) & 0xFF0000) >> 16;
    if ( (unsigned __int8)((unsigned __int16)((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) >> 8) == (_DWORD)v38 )
    {
      if ( *a1 )
      {
        v24 = GrepPatBlt((struct XDCOBJ *)a1, x, a3, a4, a5, v17);
        goto LABEL_55;
      }
LABEL_54:
      v24 = 0;
      goto LABEL_55;
    }
  }
  if ( ((gajRop3[(unsigned __int8)v17] | gajRop3[BYTE1(v17)]) & 2) != 0
    && (_DWORD)v17 != 16711778
    && (_DWORD)v17 != 66
    && *a1 )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)a1, x, a3, a4, a5);
  }
  if ( OPTAPIDCOBJ::bValid(a6) )
  {
    v163 = (struct SURFACE *)*((_QWORD *)a6 + 2);
    v164 = 0LL;
    v161 = 0LL;
    memset(v165, 0, sizeof(v165));
    v162 = 0;
    PushThreadGuardedObject(
      v165,
      &v161,
      UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
    memset(v166, 0, sizeof(v166));
    PushThreadGuardedObject(
      v166,
      &v161,
      UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
    v161 = *(DC **)a6;
    v167 = 0;
    bSpDwmValidateSurface((struct XDCOBJ *)&v161, a7, a8, a9, a10);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v161);
  }
  v171 = *((_QWORD *)a6 + 2);
  v172 = 0LL;
  v169 = 0LL;
  memset(v173, 0, sizeof(v173));
  v170 = 0;
  PushThreadGuardedObject(
    v173,
    &v169,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  memset(v174, 0, sizeof(v174));
  PushThreadGuardedObject(
    v174,
    &v169,
    UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v20 = *a1;
  v21 = *(DC **)a6;
  v175 = 0;
  v169 = v21;
  if ( v20 )
  {
    if ( !_bittest((const signed __int32 *)v20 + 9, 0x10u) )
    {
      v22 = *((_QWORD *)v20 + 122);
      if ( (*(_DWORD *)(v22 + 152) & 0x1000) != 0 )
        GreDCSelectBrush(v20, *(_QWORD *)(v22 + 160));
    }
  }
  if ( !*a1 || _bittest((const signed __int32 *)*a1 + 9, 0x10u) || !OPTAPIDCOBJ::bValid(a6) && (v19 & 0xD4) != 0 )
  {
    EngSetLastError(6u);
    if ( (v19 & 0xD4) == 0 || OPTAPIDCOBJ::bValid(a6) )
      v13 = 1;
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v169);
    BLTRECORD::~BLTRECORD((BLTRECORD *)&inited, v39, v40);
    return v13;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v184);
  if ( (v19 & 0xD4) != 0 )
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v184, (struct XDCOBJ *)a1, (struct XDCOBJ *)&v169);
    Gre::Base::Globals(v23);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v184, (struct _ERESOURCE ***)a1);
  }
  v24 = 1;
  if ( (v185 & 1) == 0 )
  {
    v42 = 8;
    goto LABEL_52;
  }
  if ( OPTAPIDCOBJ::bValid(a6) )
  {
    v29 = (Gre::Base *)*((_QWORD *)*a1 + 6);
    if ( (*((_DWORD *)v29 + 10) & 0x8000) != 0 )
    {
      v133 = 1;
      v156 = Gre::Base::Globals(v29);
      GreAcquireSemaphoreShared<1,>(v156);
      v26 = v156;
    }
    else
    {
      v133 = 0;
      v26 = Gre::Base::Globals(v29);
    }
    if ( v169
      && *((_QWORD *)v169 + 62)
      && ((v25 = *((unsigned int *)v169 + 9), (v25 & 0x1000) == 0) || (v25 & 0x4000) != 0) )
    {
      v30 = 1;
      v31 = (v185 & 0x800000) != 0;
    }
    else
    {
      v30 = 0;
      v31 = 0;
    }
    v32 = *((_BYTE *)v169 + 36) & 1;
    if ( v133 )
      GreReleaseSemaphoreShared<1,>((__int64 *)v26);
  }
  else
  {
    v30 = 0;
    v31 = 0;
    v32 = 0;
  }
  v33 = *a1;
  if ( *a1 )
  {
    if ( !*((_QWORD *)v33 + 62) )
      goto LABEL_26;
    v26 = (struct Gre::Base::SESSION_GLOBALS *)*((unsigned int *)v33 + 9);
    if ( ((unsigned __int16)v26 & 0x1000) != 0 && ((unsigned __int16)v26 & 0x4000) == 0 )
      goto LABEL_231;
    if ( !v30 )
      goto LABEL_26;
    if ( v31 )
      goto LABEL_85;
  }
  if ( !*((_QWORD *)v33 + 62) )
    goto LABEL_26;
LABEL_231:
  if ( !v30 )
  {
LABEL_26:
    if ( (*((_DWORD *)v33 + 9) & 0xE0) != 0 )
    {
      DC::QuickInitXform(*a1, &v148, 516LL);
      v34 = v152;
      v35 = x + a4;
      v36 = v152 + v153;
      v37 = *a1;
      LODWORD(v187) = x + a4;
      HIDWORD(v187) = v152 + v153;
      v186 = (HSEMAPHORE)__PAIR64__(v152, x);
      if ( (*(_BYTE *)(v148 + 32) & 0x43) == 0x43 )
      {
LABEL_30:
        if ( (*(_DWORD *)(*((_QWORD *)v37 + 122) + 108LL) & 1) != 0 )
        {
          ++x;
          ++v35;
          LODWORD(v186) = x;
          LODWORD(v187) = v35;
        }
        if ( x > v35 )
        {
          LODWORD(v186) = v35;
          LODWORD(v187) = x;
        }
        if ( v34 > v36 )
        {
          HIDWORD(v186) = v36;
          HIDWORD(v187) = v34;
        }
        XDCOBJ::vAccumulate((XDCOBJ *)a1, (struct ERECTL *)&v186);
        goto LABEL_37;
      }
      if ( (unsigned int)bCvtPts1(v148, (__int64)&v186, 2LL) )
      {
        v36 = HIDWORD(v187);
        v35 = v187;
        v34 = HIDWORD(v186);
        x = (int)v186;
        goto LABEL_30;
      }
    }
LABEL_37:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v184, v25, v27, v28);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v169);
LABEL_55:
    BLTRECORD::~BLTRECORD((BLTRECORD *)&inited, v38, v17);
    return v24;
  }
  if ( !v32 )
    goto LABEL_53;
LABEL_85:
  if ( v142 && (v185 & 0x400000) == 0 )
    goto LABEL_51;
  v59 = Gre::Base::Globals(v26);
  v60 = (struct SURFACE *)*((_QWORD *)*a1 + 62);
  if ( v60 )
  {
    if ( a1[3] )
      v60 = a1[3];
  }
  else
  {
    v60 = (struct SURFACE *)*((_QWORD *)v59 + 547);
  }
  if ( !(unsigned int)DestSurfaceAccessCheck(v60) )
  {
LABEL_51:
    v42 = 5;
LABEL_52:
    EngSetLastError(v42);
LABEL_53:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v184, v25, v27, v28);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v169);
    goto LABEL_54;
  }
  if ( (unsigned __int8)v210 != BYTE1(v210) || (v61 = a6, v137) && !OPTAPIDCOBJ::bValid(a6) )
  {
    v42 = 87;
    goto LABEL_52;
  }
  v62 = 0LL;
  if ( OPTAPIDCOBJ::bValid(a6) )
    v62 = *((_QWORD *)a6 + 12);
  if ( (a11 < 0
     && (v64 = *a1, v63 = (Gre::Base *)*(unsigned int *)(*((_QWORD *)*a1 + 122) + 108LL),
                    ((unsigned __int8)v63 & 1) != 0)
     || (v64 = *a1, (*(_BYTE *)(*((_QWORD *)*a1 + 122) + 108LL) & 9) == 9))
    && v62 != *(_QWORD *)v64 )
  {
    v130 = *(_QWORD *)(*((_QWORD *)v64 + 122) + 308LL);
    v151 = DC::dwSetLayout(v64, -1, 0);
    x = v130 - a4 - x;
    v143 = 0x80000000;
  }
  else
  {
    v143 = 0;
  }
  v154 = 0LL;
  Gre::Base::Globals(v63);
  if ( OPTAPIDCOBJ::bValid(a6) )
  {
    v66 = Gre::Base::Globals(v65);
    v47 = (__int64)v169;
    v67 = v66;
    v68 = *((_QWORD *)v169 + 62);
    if ( v68 )
    {
      if ( v172 )
        v68 = v172;
    }
    else
    {
      v68 = *((_QWORD *)v67 + 547);
    }
    v69 = *(_QWORD *)(v68 + 48);
    v139 = v68;
  }
  else
  {
    v47 = (__int64)v169;
    v69 = 0LL;
    v139 = 0LL;
  }
  LODWORD(v70) = 0;
  v155 = v69;
  v156 = 0LL;
  if ( v137 )
  {
    if ( (*(_DWORD *)(v47 + 36) & 1) != 0
      && (v119 = *(_QWORD *)(v47 + 48), (*(_DWORD *)(v119 + 40) & 0x80u) == 0)
      && ((v48 = (__int64)*a1, v119 == *((_QWORD *)*a1 + 6))
       || (v131 = XDCOBJ::bRedirHooked((XDCOBJ *)a1), v47 = (__int64)v169, v131)
       && (v48 = (__int64)*a1, *((_QWORD *)v169 + 6) == *(_QWORD *)(*((_QWORD *)*a1 + 6) + 3512LL)))
      && v69 )
    {
      v147 = 0LL;
      if ( (v136 & 0xD4) != 0 && (*(_DWORD *)(v47 + 36) & 0x4000) != 0 )
      {
        v129 = *(SURFACE **)(v47 + 496);
        if ( v129 != *(SURFACE **)(v48 + 496) )
        {
          v147 = *(struct SURFACE **)(v47 + 496);
          SURFACE::bUnMap(v129);
          v69 = v155;
        }
      }
      v120 = 0LL;
      if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 )
      {
        v120 = (SURFACE *)*((_QWORD *)*a1 + 62);
        SURFACE::bUnMap(v120);
      }
      v121 = *(HSEMAPHORE *)(v69 + 56);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Pointer", v121, 0LL);
      GreAcquireSemaphoreInternal(v121);
      GrepAcquireLockValidate<4>();
      v70 = *(struct Gre::Base::SESSION_GLOBALS **)(v155 + 64);
      v156 = v70;
      UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)&v186);
      if ( (a13 & 2) == 0 || !*(_DWORD *)(W32GetUserSessionState(v123, v122) + 36324) )
        GreMovePointer(*(_QWORD *)(v139 + 48), -1, -1, 0);
      SURFACE::vSetIncludeSprites();
      v124 = v187;
      if ( v187 )
      {
        *(_DWORD *)(v187 + 340) = (_DWORD)v186;
        *(_DWORD *)(v124 + 344) = HIDWORD(v186);
      }
      GrepStretchReMapSurface((struct XDCOBJ *)a1, v120);
      GrepStretchReMapSurface((struct XDCOBJ *)&v169, v147);
      v47 = (__int64)v169;
      v61 = a6;
    }
    else
    {
      v140 = 0;
    }
    if ( (*(_DWORD *)(v47 + 44) & 1) != 0 || (*((_DWORD *)*a1 + 11) & 1) != 0 )
      goto LABEL_160;
  }
  inited = DC::InitXform(*a1, 0x204u);
  v72 = Gre::Base::Globals(v71);
  v73 = *a1;
  v74 = (struct SURFACE *)*((_QWORD *)*a1 + 62);
  if ( v74 )
  {
    if ( a1[3] )
      v74 = a1[3];
  }
  else
  {
    v74 = (struct SURFACE *)*((_QWORD *)v72 + 547);
  }
  v194 = v74;
  v190 = *((_QWORD *)v74 + 16);
  v191 = (Gre::Base *)*((_QWORD *)v73 + 11);
  if ( OPTAPIDCOBJ::bValid(v61) )
  {
    v189 = DC::InitXform(v169, 0x204u);
    v195 = v139;
    v135 = a12;
    v75 = *(_QWORD *)(v139 + 128);
    v192 = v75;
    v144 = *((_QWORD *)v169 + 11);
    v76 = v144;
    v193 = v144;
    if ( a12 != -1 )
      goto LABEL_111;
    v77 = *(_DWORD *)(*((_QWORD *)v169 + 122) + 180LL);
  }
  else
  {
    v76 = v193;
    v77 = a12;
    v75 = v192;
    v144 = v193;
  }
  v135 = v77;
LABEL_111:
  if ( (a13 & 1) != 0 )
  {
    v78 = *(HSEMAPHORE *)(*((_QWORD *)*a1 + 122) + 248LL);
    v154 = v78;
  }
  else
  {
    v78 = 0LL;
  }
  v79 = *a1;
  v80 = v190;
  v148 = v190;
  v81 = *((_QWORD *)v79 + 122);
  v82 = *((_DWORD *)v79 + 30);
  v83 = v191;
  v158 = v82;
  v84 = *(_DWORD *)(v81 + 176);
  v150 = *(_DWORD *)(v81 + 184);
  v149 = v84;
  v146 = v191;
  if ( !v75 )
  {
    if ( !v190 )
      goto LABEL_120;
    if ( (*(_DWORD *)(v190 + 24) & 0x800) != 0 )
    {
      v128 = *((_QWORD *)v191 + 10);
      if ( !v128 || v128 == *((_QWORD *)v191 + 9) )
        goto LABEL_120;
    }
  }
  if ( !v190 && (*(_DWORD *)(v75 + 24) & 0x800) != 0 )
  {
    v85 = *((_QWORD *)v191 + 10);
    if ( !v85 || v85 == *((_QWORD *)v191 + 9) )
      goto LABEL_120;
  }
  if ( v75 && v190 )
  {
    v86 = v75;
    if ( *(_QWORD *)(v75 + 120) != v75 )
      v86 = *(_QWORD *)(v75 + 120);
    v87 = *(_DWORD *)(v86 + 32);
    v83 = (Gre::Base *)v190;
    if ( *(_QWORD *)(v190 + 120) != v190 )
      v83 = *(Gre::Base **)(v190 + 120);
    if ( v87 == *((_DWORD *)v83 + 8) )
    {
LABEL_120:
      v197 = (char *)Gre::Base::Globals(v83) + 4664;
      goto LABEL_146;
    }
  }
  v141 = 1;
  if ( (v82 & 7) != 0 && v78 )
  {
    v141 = 0;
    goto LABEL_143;
  }
  if ( !v75 || !v190 )
  {
LABEL_143:
    XlateObject = (char *)CreateXlateObject(v154, v158, v75, v80, v76, v146, v150, v149, v135, 0);
    v197 = XlateObject;
    if ( XlateObject )
    {
      if ( v141 && v75 && v80 && (*((_DWORD *)XlateObject + 19) & 0x200) == 0 )
      {
        v98 = Gre::Base::Globals(v92);
        v154 = (HSEMAPHORE)(*(_QWORD *)v98 + 312LL);
        GreAcquireSemaphoreCommon<13,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
          (__int64)v154);
        for ( i = 0; i < 8; ++i )
        {
          v100 = *((unsigned int *)v98 + 1164);
          v101 = 32 * v100;
          v102 = *((_QWORD *)v98 + 4 * v100 + 551);
          if ( !v102 )
            goto LABEL_168;
          if ( !*(_DWORD *)((char *)v98 + v101 + 4400) )
          {
            FreeThreadBufferWithTag(*(_QWORD *)((char *)v98 + v101 + 4408), v102, v100);
LABEL_168:
            PopThreadGuardedObject(v197 - 32);
            v103 = v75;
            *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1164) + 1100) = 1;
            *((_QWORD *)v98 + 4 * *((unsigned int *)v98 + 1164) + 551) = v197;
            if ( *(_QWORD *)(v75 + 120) != v75 )
              v103 = *(_QWORD *)(v75 + 120);
            v104 = *(_DWORD *)(v103 + 32);
            v105 = v148;
            *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1164) + 1104) = v104;
            if ( *(_QWORD *)(v105 + 120) != v105 )
              v105 = *(_QWORD *)(v105 + 120);
            v106 = *(_DWORD *)(v105 + 32);
            v107 = v144;
            *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1164) + 1105) = v106;
            if ( *(_QWORD *)(v144 + 120) != v144 )
              v107 = *(_QWORD *)(v144 + 120);
            v108 = *(_DWORD *)(v107 + 32);
            v109 = v146;
            *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1164) + 1106) = v108;
            if ( *((struct SURFACE **)v146 + 15) != v146 )
              v109 = (struct SURFACE *)*((_QWORD *)v146 + 15);
            *((_DWORD *)v98 + 8 * *((unsigned int *)v98 + 1164) + 1107) = *((_DWORD *)v109 + 8);
            *((_DWORD *)v197 + 9) = *((_DWORD *)v98 + 1164);
            *(_DWORD *)(v75 + 56) = *((_DWORD *)v98 + 1164);
            *((_DWORD *)v98 + 1164) = ((unsigned __int8)*((_DWORD *)v98 + 1164) + 1) & 7;
            break;
          }
          *((_DWORD *)v98 + 1164) = ((_BYTE)v100 + 1) & 7;
        }
        SEMOBJ<13>::vUnlock(&v154);
      }
      goto LABEL_146;
    }
    goto LABEL_159;
  }
  v157 = *(_DWORD *)(v75 + 56);
  v159 = Gre::Base::Globals(v83);
  v186 = (HSEMAPHORE)(*(_QWORD *)v159 + 312LL);
  GreAcquireSemaphoreInternal(v186);
  GrepAcquireLockValidate<13>();
  v88 = v157;
  for ( j = 0; ; ++j )
  {
    if ( j >= 8 )
    {
      v197 = 0LL;
      v138 = 0;
      goto LABEL_141;
    }
    v90 = v75;
    if ( *(_QWORD *)(v75 + 120) != v75 )
      v90 = *(_QWORD *)(v75 + 120);
    if ( *((_DWORD *)v159 + 8 * v88 + 1104) != *(_DWORD *)(v90 + 32) )
      goto LABEL_139;
    v113 = v80;
    if ( *(_QWORD *)(v80 + 120) != v80 )
      v113 = *(_QWORD *)(v80 + 120);
    v114 = 32LL * v88;
    if ( *(_DWORD *)((char *)v159 + v114 + 4420) != *(_DWORD *)(v113 + 32) )
      goto LABEL_139;
    v115 = v146;
    if ( *((struct SURFACE **)v146 + 15) != v146 )
      v115 = (struct SURFACE *)*((_QWORD *)v146 + 15);
    if ( *(_DWORD *)((char *)v159 + v114 + 4428) != *((_DWORD *)v115 + 8) )
      goto LABEL_139;
    v116 = *(char **)((char *)v159 + v114 + 4408);
    v197 = v116;
    if ( (*((_DWORD *)v116 + 19) & 0x6000) != 0 )
      goto LABEL_139;
    v117 = *((_DWORD *)v116 + 19) & 0x100;
    if ( (*((_DWORD *)v116 + 1) & 4) != 0 )
      break;
    if ( !v117 )
      goto LABEL_196;
LABEL_194:
    if ( v150 == *((_DWORD *)v116 + 7) && v149 == *((_DWORD *)v116 + 8) )
      goto LABEL_196;
LABEL_139:
    v88 = ((_BYTE)v88 + 1) & 7;
  }
  if ( v135 != *((_DWORD *)v116 + 6) )
    goto LABEL_193;
  v118 = v144;
  if ( *(_QWORD *)(v144 + 120) != v144 )
    v118 = *(_QWORD *)(v144 + 120);
  if ( *((_DWORD *)v159 + 8 * v88 + 1106) != *(_DWORD *)(v118 + 32) )
  {
LABEL_193:
    if ( !v117 )
      goto LABEL_139;
    goto LABEL_194;
  }
LABEL_196:
  _InterlockedAdd((volatile signed __int32 *)v159 + 8 * v88 + 1100, 1u);
  *(_DWORD *)(v75 + 56) = v88;
  v138 = 1;
LABEL_141:
  SEMOBJ<13>::vUnlock(&v186);
  if ( !v138 )
  {
    v76 = v144;
    goto LABEL_143;
  }
LABEL_146:
  v211 |= 2u;
  if ( (v136 & 0xE8) != 0 )
  {
    v125 = *a1;
    v198 = (__int64)*a1 + 1200;
    v126 = *((_QWORD *)v125 + 122);
    v127 = *(_DWORD *)(v126 + 152);
    if ( (v127 & 1) != 0 || (*((_DWORD *)v125 + 79) & 1) != 0 )
    {
      *(_DWORD *)(v126 + 152) = v127 & 0xFFFFFFFE;
      *((_DWORD *)*a1 + 79) &= ~1u;
      EBRUSHOBJ::vInitBrush(v198, *a1, *((_QWORD *)*a1 + 17), v191, v190, v194, 1);
    }
    v209 = *((_QWORD *)*a1 + 149);
  }
  else
  {
    v198 = 0LL;
  }
  v196 = 0LL;
  if ( (*((_BYTE *)v189 + 32) & 1) == 0 )
    goto LABEL_158;
  v49 = a7;
  v93 = a8;
  v48 = a7 + a9;
  v47 = (unsigned int)(a8 + a10);
  v207 = a7 + a9;
  v208 = a8 + a10;
  v205 = a7;
  v206 = a8;
  if ( (*((_BYTE *)v189 + 32) & 0x43) == 0x43 )
  {
LABEL_152:
    if ( (v136 & 0xD4) != 0 && (v93 == (_DWORD)v47 || (_DWORD)v49 == (_DWORD)v48) )
    {
      v134 = 1;
      goto LABEL_160;
    }
    y = v152;
    v95 = x + a4;
    v96 = v152 + v153;
    v97 = (*((_BYTE *)inited + 32) & 1) == 0;
    v200.x = x;
    v200.y = v152;
    v201 = x + a4;
    if ( v97 )
    {
      v204 = v152 + v153;
      v202 = v152;
      v203 = x;
      EXFORMOBJ::bXform((EXFORMOBJ *)&inited, &v200, &v199, 3uLL);
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)&v176, a6);
      v110 = *a1;
      v44 = v139;
      v183 = v139;
      v164 = 0LL;
      v111 = *((_QWORD *)v110 + 122);
      v163 = a1[2];
      v161 = 0LL;
      v112 = *(_BYTE *)(v111 + 215);
      v162 = 0;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v165);
      UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(v166);
      v132 = v112;
      v45 = v136;
      v161 = *a1;
      v167 = 0;
      v168 = 0LL;
      v46 = BLTRECORD::bRotate(
              (BLTRECORD *)&inited,
              (struct BLTRECORD::PROXYDCOBJ *)&v161,
              (struct BLTRECORD::PROXYDCOBJ *)&v176,
              v136,
              v132);
    }
    else
    {
      v202 = v152 + v153;
      if ( (*((_BYTE *)inited + 32) & 0x43) == 0x43 )
      {
        v43 = a7;
      }
      else
      {
        if ( !(unsigned int)bCvtPts1((__int64)inited, (__int64)&v200, 2LL) )
          goto LABEL_158;
        LODWORD(v47) = v208;
        LODWORD(v48) = v207;
        v93 = v206;
        v43 = v205;
        v96 = v202;
        v95 = v201;
        y = v200.y;
        x = v200.x;
      }
      if ( *(_BYTE *)(*((_QWORD *)*a1 + 122) + 215LL) == 4
        || (_DWORD)v48 - v43 != v95 - x
        || (_DWORD)v47 - v93 != v96 - y )
      {
        v179 = 0LL;
        v176 = 0LL;
        v177 = 0;
        v178 = *((_QWORD *)a6 + 2);
        UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v180);
        UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(v181);
        v44 = v139;
        v45 = v136;
        v176 = *(struct SURFACE **)a6;
        v52 = *a1;
        v182 = 0;
        v183 = v139;
        v134 = BLTRECORD::bStretch(
                 (BLTRECORD *)&inited,
                 (struct XDCOBJ *)a1,
                 (struct BLTRECORD::PROXYDCOBJ *)&v176,
                 v136,
                 *(_BYTE *)(*((_QWORD *)v52 + 122) + 215LL));
        goto LABEL_62;
      }
      v179 = 0LL;
      v176 = 0LL;
      v177 = 0;
      v178 = *((_QWORD *)a6 + 2);
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v180);
      UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(v181);
      v44 = v139;
      v176 = *(struct SURFACE **)a6;
      v163 = a1[2];
      v182 = 0;
      v183 = v139;
      v164 = 0LL;
      v161 = 0LL;
      v162 = 0;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v165);
      UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(v166);
      v45 = v136;
      v161 = *a1;
      v167 = 0;
      v168 = 0LL;
      v46 = BLTRECORD::bBitBlt((BLTRECORD *)&inited, &v161, &v176, v136);
    }
    v134 = v46;
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v161);
LABEL_62:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v176);
    goto LABEL_63;
  }
  if ( (unsigned int)bCvtPts1((__int64)v189, (__int64)&v205, 2LL) )
  {
    v49 = v205;
    v47 = v208;
    v48 = v207;
    v93 = v206;
    a7 = v205;
    goto LABEL_152;
  }
LABEL_158:
  EngSetLastError(0x57u);
LABEL_159:
  v134 = 0;
LABEL_160:
  v45 = v136;
  v44 = v139;
LABEL_63:
  if ( v143 )
    DC::dwSetLayout(*a1, -1, v151);
  if ( v140 )
  {
    SURFACE::vClearIncludeSprites();
    v53 = 0LL;
    if ( (v45 & 0xD4) != 0
      && (*((_DWORD *)v169 + 11) & 1) == 0
      && (*((_DWORD *)v169 + 9) & 0x4000) != 0
      && v44 != *((_QWORD *)*a1 + 62)
      && (*(_DWORD *)(v44 + 112) & 0x800) != 0 )
    {
      v53 = (SURFACE *)*((_QWORD *)v169 + 62);
      SURFACE::bUnMap(v53);
    }
    v54 = *a1;
    v55 = 0LL;
    if ( (*((_DWORD *)*a1 + 11) & 1) == 0 && (*((_DWORD *)v54 + 9) & 0x4000) != 0 )
    {
      v55 = (SURFACE *)*((_QWORD *)v54 + 62);
      SURFACE::bUnMap(v55);
    }
    UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)&v159);
    if ( (a13 & 2) == 0 || !*(_DWORD *)(W32GetUserSessionState(v57, v56) + 36324) )
      GreMovePointer(*(_QWORD *)(v44 + 48), (int)v70, SHIDWORD(v156), 0);
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)(v155 + 56));
    v58 = v160;
    if ( v160 )
    {
      *(_DWORD *)(v160 + 340) = (_DWORD)v159;
      *(_DWORD *)(v58 + 344) = HIDWORD(v159);
    }
    GrepStretchReMapSurface((struct XDCOBJ *)a1, v55);
    GrepStretchReMapSurface((struct XDCOBJ *)&v169, v53);
  }
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v184, v47, v48, v49);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v169);
  BLTRECORD::~BLTRECORD((BLTRECORD *)&inited, v50, v51);
  return v134;
}
