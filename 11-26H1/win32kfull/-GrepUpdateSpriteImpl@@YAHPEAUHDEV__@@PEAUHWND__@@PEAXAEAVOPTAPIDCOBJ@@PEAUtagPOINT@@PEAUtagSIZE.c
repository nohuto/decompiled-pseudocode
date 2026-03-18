/*
 * XREFs of ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700
 * Callers:
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073568 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 * Callees:
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x140018158 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140038CFC (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14006AC08 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x1400726A4 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140072750 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140074A40 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x140075588 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34K.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1400757E8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x14009D800 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1400A16AC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1400A16FC (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x140166834 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x140289F18 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepUpdateSpriteImpl(
        HDEV a1,
        HWND a2,
        void *a3,
        struct OPTAPIDCOBJ *a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        struct OPTAPIDCOBJ *a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15,
        unsigned int a16)
{
  struct _BLENDFUNCTION *v16; // rbx
  unsigned int v17; // r15d
  struct _BLENDFUNCTION *v18; // r13
  struct tagRECT *v19; // rsi
  Gre::Base *v20; // rcx
  unsigned int v21; // r14d
  Gre::Base *v22; // rcx
  unsigned int v23; // r12d
  unsigned int v24; // edi
  unsigned int v25; // eax
  Gre::Base *v26; // rcx
  __int64 v27; // rbx
  __int64 v29; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v31; // rcx
  Gre::Base *v32; // rcx
  __int64 v33; // rbx
  HSEMAPHORE v34; // rcx
  Gre::Base *v35; // rcx
  Gre::Base *v36; // rcx
  void *v37; // rdi
  struct Gre::Base::SESSION_GLOBALS *v38; // rsi
  struct W32_PUSH_LOCK *v39; // rbx
  _QWORD *v40; // rax
  struct Gre::Base::SESSION_GLOBALS *v41; // rax
  __int64 v42; // r8
  __int64 v43; // rax
  Gre::Base *v44; // rcx
  __int64 v45; // rbx
  __int64 *v46; // r15
  struct SFMLOGICALSURFACE *FirstLSurf; // r14
  struct tagPOINT *v48; // rdx
  Gre::Base *v49; // rcx
  struct tagPOINT *y; // r9
  __int64 v51; // rdi
  struct Gre::Base::SESSION_GLOBALS *v52; // rax
  __int64 v53; // r8
  struct W32_PUSH_LOCK *v54; // rdi
  unsigned int v55; // r10d
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // r15d
  LONG v59; // eax
  LONG x; // edx
  __int64 v61; // r8
  LONG v62; // edx
  LONG v63; // ecx
  int v64; // eax
  __int64 v65; // rcx
  struct tagMINIWINDOWINFO *v66; // rax
  __int64 v67; // rax
  __int64 v68; // r12
  unsigned int v69; // edi
  void *v70; // r13
  void *v71; // r15
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  struct Gre::Base::SESSION_GLOBALS *v75; // rax
  int v76; // eax
  struct _BLENDFUNCTION v77; // eax
  _DWORD *v78; // rcx
  int v79; // r12d
  int v80; // edx
  int v81; // ecx
  int v82; // r15d
  int v83; // r15d
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rdx
  _BYTE *v88; // rcx
  __int64 v89; // r8
  int v90; // eax
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int64 v99; // rax
  __int64 SessionState; // rax
  bool v101; // dl
  struct tagSIZE *v102; // r12
  OPTAPIDCOBJ *v103; // r13
  bool v104; // al
  __int64 v105; // rax
  DC *v106; // rcx
  __int64 v107; // rax
  __int64 v108; // r13
  int v109; // eax
  void *v110; // rdx
  int updated; // eax
  __int64 v112; // r8
  __int64 v113; // rax
  _OWORD *v114; // rdx
  unsigned int v115; // eax
  struct tagRECT v116; // xmm0
  SURFACE *v117; // rax
  char v118; // [rsp+60h] [rbp-A0h]
  int v119; // [rsp+64h] [rbp-9Ch]
  int v120; // [rsp+68h] [rbp-98h] BYREF
  int *v121; // [rsp+70h] [rbp-90h]
  struct SFMLOGICALSURFACE *v122; // [rsp+78h] [rbp-88h] BYREF
  int v123; // [rsp+80h] [rbp-80h]
  unsigned int v124; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v125; // [rsp+88h] [rbp-78h]
  struct tagRECT *v126; // [rsp+90h] [rbp-70h]
  HDEV v127; // [rsp+98h] [rbp-68h]
  int v128; // [rsp+A0h] [rbp-60h]
  int v129; // [rsp+A4h] [rbp-5Ch]
  void *v130; // [rsp+A8h] [rbp-58h]
  struct tagSIZE *v131; // [rsp+B0h] [rbp-50h]
  struct tagPOINT *v132; // [rsp+B8h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v133; // [rsp+C0h] [rbp-40h]
  struct _RECTL Buffer; // [rsp+C8h] [rbp-38h] BYREF
  struct tagMINIWINDOWINFO *v135; // [rsp+D8h] [rbp-28h]
  PVOID Object; // [rsp+E0h] [rbp-20h]
  struct tagPOINT *v137; // [rsp+E8h] [rbp-18h]
  OPTAPIDCOBJ *v138; // [rsp+F0h] [rbp-10h]
  HWND v139; // [rsp+F8h] [rbp-8h]
  HDEV v140; // [rsp+100h] [rbp+0h] BYREF
  int v141; // [rsp+108h] [rbp+8h]
  HSEMAPHORE v142; // [rsp+110h] [rbp+10h] BYREF
  bool v143; // [rsp+118h] [rbp+18h]
  _OWORD v144[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v145; // [rsp+140h] [rbp+40h]
  int v146; // [rsp+148h] [rbp+48h]
  unsigned int v147; // [rsp+14Ch] [rbp+4Ch]
  void *v148; // [rsp+150h] [rbp+50h]
  __int64 v149; // [rsp+158h] [rbp+58h]
  __int64 v150; // [rsp+160h] [rbp+60h]
  _BYTE v151[8]; // [rsp+168h] [rbp+68h] BYREF
  struct OPTAPIDCOBJ *v152; // [rsp+170h] [rbp+70h]
  DC *v153; // [rsp+180h] [rbp+80h] BYREF
  int v154; // [rsp+188h] [rbp+88h]
  __int64 v155; // [rsp+190h] [rbp+90h]
  __int64 v156; // [rsp+198h] [rbp+98h]
  __int128 v157; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v158; // [rsp+1C0h] [rbp+C0h] BYREF
  char v159; // [rsp+1E0h] [rbp+E0h]
  _OWORD v160[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v161; // [rsp+210h] [rbp+110h]
  __int64 v162; // [rsp+218h] [rbp+118h]
  __int64 v163; // [rsp+220h] [rbp+120h]
  int v164; // [rsp+280h] [rbp+180h] BYREF
  __int16 v165; // [rsp+284h] [rbp+184h]
  __int128 v166; // [rsp+2A8h] [rbp+1A8h]
  _BYTE v167[160]; // [rsp+2B8h] [rbp+1B8h] BYREF
  _BYTE v168[20]; // [rsp+358h] [rbp+258h]
  struct tagRECT v169; // [rsp+370h] [rbp+270h] BYREF
  unsigned int v170; // [rsp+430h] [rbp+330h]

  v16 = a10;
  v17 = 0;
  v18 = a10;
  v19 = a12;
  v131 = a6;
  v137 = a8;
  v132 = a5;
  v138 = a7;
  v135 = a13;
  v130 = a3;
  v139 = a2;
  v127 = a1;
  v125 = a11 & 0x200000;
  v152 = a4;
  v121 = (int *)a10;
  v126 = a12;
  v129 = 1;
  memset_0(v160, 0, 0x88uLL);
  v120 = 0;
  v124 = 0;
  v123 = 0;
  v118 = 0;
  v21 = a11 & 0xFFDFFFFF;
  v133 = Gre::Base::Globals(v20);
  v23 = a11 & 0xFFDFFFFF;
  if ( !a14 || !*((_QWORD *)Gre::Base::Globals(v22) + 28) )
  {
    v24 = a9;
LABEL_4:
    v25 = v21 | 0x200000;
    if ( !v125 )
      v25 = v21;
    return (unsigned int)GdiUpdateSprite(v127, v139, v130, v152, v132, v131, v138, v137, v24, v16, v25, v19);
  }
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v151, v125 == 0);
  v140 = v127;
  v141 = 0;
  if ( !v125 )
  {
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v29);
    v31 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    v32 = (Gre::Base *)((v31 + 8) & -(__int64)(v31 != 0));
    if ( !v32 || !*((_DWORD *)v32 + 85) && !*((_DWORD *)v32 + 86) )
    {
      v33 = *(_QWORD *)Gre::Base::Globals(v32);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Sprite", v33 + 1040, 0LL);
      GreAcquireSemaphoreInternal((HSEMAPHORE)(v33 + 1040));
      GrepAcquireLockValidate<6>();
      v141 = 1;
      v16 = a10;
    }
  }
  v34 = (HSEMAPHORE)(*(_QWORD *)v133 + 520LL);
  v142 = v34;
  v143 = v125 != 0;
  if ( v125 )
    GreAcquireSemaphoreSharedInternal(v34);
  else
    GreAcquireSemaphoreInternal(v34);
  GrepAcquireLockValidate<7>();
  if ( *((_QWORD *)Gre::Base::Globals(v35) + 28) )
  {
    v37 = v130;
    if ( v139 )
    {
      *(_QWORD *)&Buffer.right = 0LL;
      v37 = 0LL;
      *(_QWORD *)&Buffer.left = v139;
      v38 = Gre::Base::Globals(v36);
      v39 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v38 + 28) + 72LL);
      if ( *((_QWORD *)v38 + 28) != -72LL )
        GreAcquirePushLockExclusive(v39);
      v40 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v38 + 28), &Buffer);
      if ( v40 )
        v37 = (void *)v40[1];
      if ( v39 )
        GreReleasePushLockExclusive(v39);
      v19 = v126;
    }
    if ( v37 )
    {
      v41 = Gre::Base::Globals(v36);
      LOBYTE(v42) = 15;
      v43 = HmgShareLock(v41, v37, v42, 0LL);
      v45 = v43;
      if ( v43 )
      {
        if ( (*(_DWORD *)(v43 + 136) & 0x10) != 0 )
        {
LABEL_91:
          v75 = Gre::Base::Globals(v44);
          DEC_SHARE_REF_CNT(v75, v45);
          v16 = (struct _BLENDFUNCTION *)v121;
          v19 = v126;
          goto LABEL_7;
        }
        v129 = 0;
        v119 = 1;
        if ( v43 != -88 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v43 + 88));
        v46 = *(__int64 **)(v45 + 144);
        v130 = *(void **)v45;
        v122 = (struct SFMLOGICALSURFACE *)v46;
        FirstLSurf = (struct SFMLOGICALSURFACE *)v46;
        memset(v144, 0, sizeof(v144));
        PushThreadGuardedObject(
          v144,
          v144,
          UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
        v145 = 0LL;
        v146 = 1;
        if ( v46 )
        {
          v51 = *v46;
          if ( *v46 )
          {
            v52 = Gre::Base::Globals(v49);
            LOBYTE(v53) = 18;
            v145 = HmgLock(v52, v51, v53, 0LL);
          }
        }
        v54 = (struct W32_PUSH_LOCK *)(v46 + 32);
        if ( v46 != (__int64 *)-256LL )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v46 + 32));
        if ( v126 )
        {
          v116 = *v126;
          v126 = &v169;
          v169 = v116;
        }
        if ( v23 == 0x2000000 )
        {
          v121 = &v120;
          v120 = 33488896;
          v101 = v131 || v132;
          vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v45, v101);
          v55 = 570425346;
        }
        else
        {
          v121 = (int *)a10;
          v55 = a11 & 0xFFDFFFFF;
          if ( (a11 & 0x20000000) == 0 )
          {
            if ( (a11 & 0x40000000) == 0 )
            {
              v121 = (int *)a10;
              v170 = a11 & 0xFFDFFFFF;
              if ( v23 )
              {
LABEL_46:
                v57 = v55 & 2;
                if ( (v55 & 2) != 0 && (!v18 || (v18->AlphaFormat & 1) != 0 && (*((_DWORD *)v46 + 63) & 1) != 0) )
                {
                  v58 = 0;
                  v119 = 0;
                  goto LABEL_65;
                }
                *(_DWORD *)(v45 + 72) = v55;
                if ( (v55 & 2) != 0 )
                {
                  if ( *(_BYTE *)(v45 + 79) != v18->AlphaFormat )
                  {
                    v76 = bSpDwmCreateLogicalSurface(
                            v127,
                            (struct DWMSPRITE *)v45,
                            (struct SFMLOGICALSURFACE *)v46,
                            0LL,
                            &v122);
                    v55 = v170;
                    FirstLSurf = v122;
                    v119 = v76;
                  }
                  *(struct _BLENDFUNCTION *)(v45 + 76) = *v18;
                  v77 = *v18;
                  *((_DWORD *)FirstLSurf + 61) |= 0x40u;
                  *((struct _BLENDFUNCTION *)FirstLSurf + 60) = v77;
                }
                if ( (v55 & 1) != 0 )
                {
                  *(_DWORD *)(v45 + 80) = a9;
                  v107 = v46[23];
                  if ( v107 )
                  {
                    if ( (*(_DWORD *)(v107 + 92) & 1) != 0 )
                    {
                      if ( !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v140) )
                      {
                        v108 = v46[23];
                        if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v140) )
                        {
                          v109 = *(_DWORD *)(v108 + 92);
                          if ( (v109 & 0x20) == 0 )
                          {
                            v110 = *(void **)(v108 + 8);
                            *(_DWORD *)(v108 + 92) = v109 | 0x20;
                            GrepQueueApc(pConvertDfbSurfaceToDibNKAPC, v110, 0LL);
                            v118 = 1;
                          }
                        }
                        else
                        {
                          v117 = (SURFACE *)pProcessDfbSurfaces(v108 - 24, 1LL);
                          if ( v117 )
                          {
                            FirstLSurf = SURFACE::GetFirstLSurf(v117);
                            v122 = FirstLSurf;
                          }
                        }
                      }
                      v55 = v170;
                    }
                  }
                }
                v58 = v119;
                if ( !v119 )
                  goto LABEL_65;
                v48 = v132;
                if ( v132 )
                {
                  y = (struct tagPOINT *)(unsigned int)v132->y;
                  v59 = v132->y;
                  x = v132->x;
                  v57 = *(unsigned int *)(v45 + 56);
                  *(_DWORD *)(v45 + 56) = v132->x;
                  *(_DWORD *)(v45 + 64) += x - v57;
                  *(_DWORD *)(v45 + 68) += v59 - *(_DWORD *)(v45 + 60);
                  v48 = v132;
                  *(_DWORD *)(v45 + 60) = (_DWORD)y;
                }
                if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
                {
                  if ( v126 && *((_QWORD *)FirstLSurf + 23) )
                    vSpUpdateDirtyRgn((struct DWMSPRITE *)v45, FirstLSurf, *((HDC *)v138 + 12), v126, &v124, a15);
                }
                else
                {
                  if ( (v55 & 0x2000000) != 0 )
                  {
                    if ( v48 && v131 )
                    {
                      updated = bSpDwmUpdateDragRectShape(
                                  v127,
                                  (struct DWMSPRITE *)v45,
                                  FirstLSurf,
                                  y,
                                  v131,
                                  &v124,
                                  &v122);
                      FirstLSurf = v122;
                      v58 = updated;
                    }
                  }
                  else if ( v137 )
                  {
                    v102 = v131;
                    if ( v131 )
                    {
                      v103 = v138;
                      v58 = 0;
                      v119 = 0;
                      v104 = OPTAPIDCOBJ::bValid(v138);
                      v57 = 0LL;
                      if ( !v104 )
                        goto LABEL_65;
                      v105 = *((_QWORD *)v103 + 2);
                      v156 = 0LL;
                      v153 = 0LL;
                      v154 = 0;
                      v155 = v105;
                      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v157);
                      UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(&v158);
                      v106 = *(DC **)v103;
                      v159 = 0;
                      v153 = v106;
                      if ( *((_QWORD *)v106 + 62) && !(unsigned int)DC::bInFullScreen(v106) )
                      {
                        v62 = v137->y;
                        Buffer.left = v137->x;
                        Buffer.right = v102->cx + Buffer.left;
                        v63 = v62 + v102->cy;
                        Buffer.top = v62;
                        Buffer.bottom = v63;
                        v64 = bSpDwmUpdateSpriteShape(
                                v127,
                                (struct DWMSPRITE *)v45,
                                FirstLSurf,
                                (struct _SURFOBJ *)(v61 + 24),
                                &Buffer,
                                *(struct PALETTE **)(v61 + 128),
                                &v124,
                                (struct _RECTL *)((unsigned __int64)&v169 & -(__int64)(v126 != 0LL)),
                                &v122);
                        FirstLSurf = v122;
                        v58 = v64;
                      }
                      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v153);
                    }
                  }
                  v119 = v58;
                  if ( !v58 )
                  {
LABEL_65:
                    if ( *(_QWORD *)(v45 + 40) )
                    {
                      v66 = v135;
                    }
                    else
                    {
                      if ( v45 != -56 )
                      {
                        v160[0] = *(_OWORD *)(v45 + 56);
                        v160[1] = v160[0];
                      }
                      v161 = 0LL;
                      v162 = 0LL;
                      v65 = *(_QWORD *)(W32GetUserSessionState(v57, v48) + 18704);
                      v66 = (struct tagMINIWINDOWINFO *)v160;
                      v135 = (struct tagMINIWINDOWINFO *)v160;
                      v163 = v65;
                    }
                    if ( v58 && !v118 && (v66 || (*((_DWORD *)FirstLSurf + 63) & 8) != 0) )
                    {
                      if ( (*((_DWORD *)FirstLSurf + 63) & 8) != 0 )
                        SFMLOGICALSURFACE::StartSfmStateTracking(
                          FirstLSurf,
                          v127,
                          *((struct SfmState **)v133 + 543),
                          (int)y);
                      v78 = (_DWORD *)*((_QWORD *)FirstLSurf + 23);
                      if ( v78 )
                      {
                        v79 = v78[8];
                        v128 = v78[9];
                        if ( (v78[23] & 1) != 0 )
                        {
                          v123 = 2;
                        }
                        else if ( (v78[22] & 0x800) != 0 )
                        {
                          v123 = 1;
                        }
                      }
                      else
                      {
                        v79 = 0;
                        v123 = 0;
                        v128 = 0;
                      }
                      v80 = *(_DWORD *)(v45 + 136);
                      *(_QWORD *)&Buffer.left = *(_QWORD *)(v45 + 104);
                      LODWORD(v122) = *(_DWORD *)(v45 + 116);
                      *(_QWORD *)(v45 + 104) = 0LL;
                      v81 = *((_DWORD *)FirstLSurf + 63) & 0xC;
                      v82 = v80 & 0x40 | *((_DWORD *)FirstLSurf + 63) & 1 | (4 * (v80 & 0xE));
                      v150 = *(_QWORD *)FirstLSurf;
                      v83 = v80 & 1 | v81 | (2 * v82);
                      v133 = *(struct Gre::Base::SESSION_GLOBALS **)v45;
                      Object = (PVOID)UserReferenceDwmApiPort();
                      IncrementDWMWindowUniqueness(v85, v84, v86);
                      if ( Object )
                      {
                        memset_0(&v164, 0, 0xECuLL);
                        v164 = 15466692;
                        v165 = 0x8000;
                        *(_QWORD *)((char *)&v166 + 4) = v133;
                        *(_QWORD *)&v167[152] = v150;
                        LODWORD(v166) = 1073741830;
                        HIDWORD(v166) = v83;
                        if ( v45 != -72 )
                        {
                          v90 = *(_DWORD *)(v45 + 80);
                          *(_QWORD *)&v167[140] = *(_QWORD *)(v45 + 72);
                          *(_DWORD *)&v167[148] = v90;
                        }
                        if ( v135 )
                        {
                          v91 = *(_OWORD *)v135;
                          v88 = &v167[4];
                          *(_DWORD *)v167 = 1;
                          v92 = *((_OWORD *)v135 + 1);
                          *(_OWORD *)&v167[4] = v91;
                          v93 = *((_OWORD *)v135 + 2);
                          *(_OWORD *)&v167[20] = v92;
                          v94 = *((_OWORD *)v135 + 3);
                          *(_OWORD *)&v167[36] = v93;
                          v95 = *((_OWORD *)v135 + 4);
                          *(_OWORD *)&v167[52] = v94;
                          v96 = *((_OWORD *)v135 + 5);
                          *(_OWORD *)&v167[68] = v95;
                          v97 = *((_OWORD *)v135 + 6);
                          *(_OWORD *)&v167[84] = v96;
                          v98 = *((_OWORD *)v135 + 7);
                          v99 = *((_QWORD *)v135 + 16);
                          *(_OWORD *)&v167[100] = v97;
                          *(_OWORD *)&v167[116] = v98;
                          *(_QWORD *)&v167[132] = v99;
                        }
                        *(_DWORD *)v168 = v123;
                        *(_DWORD *)&v168[8] = v128;
                        *(_QWORD *)&v168[12] = *(_QWORD *)&Buffer.left;
                        *(_DWORD *)&v168[4] = v79;
                        SessionState = W32GetSessionState(v88, v87, v89);
                        if ( (int)v122 < 1
                          || (v112 = *(_QWORD *)(SessionState + 96),
                              v113 = *(unsigned int *)(v112 + 716),
                              (unsigned int)v113 >= 0x14) )
                        {
                          EtwUpdateEvent(v133);
                          LpcRequestPort(Object, &v164);
                        }
                        else
                        {
                          v114 = (_OWORD *)(v112 + 196 * v113 + 720);
                          *v114 = v166;
                          v114[1] = *(_OWORD *)v167;
                          v114[2] = *(_OWORD *)&v167[16];
                          v114[3] = *(_OWORD *)&v167[32];
                          v114[4] = *(_OWORD *)&v167[48];
                          v114[5] = *(_OWORD *)&v167[64];
                          v114[6] = *(_OWORD *)&v167[80];
                          v114 += 8;
                          *(v114 - 1) = *(_OWORD *)&v167[96];
                          *v114 = *(_OWORD *)&v167[112];
                          v114[1] = *(_OWORD *)&v167[128];
                          v114[2] = *(_OWORD *)&v167[144];
                          v114[3] = *(_OWORD *)v168;
                          *((_DWORD *)v114 + 16) = *(_DWORD *)&v168[16];
                          v115 = *(_DWORD *)(v112 + 716) + 1;
                          *(_DWORD *)(v112 + 716) = v115;
                          if ( v115 > *(_DWORD *)(v112 + 4640) )
                            *(_DWORD *)(v112 + 4640) = v115;
                        }
                        ObfDereferenceObject(Object);
                      }
                    }
                    if ( v54 )
                      GreReleasePushLockExclusive(v54);
                    SFMLOGICALSURFACEREF_vDestructor(v144);
                    PopThreadGuardedObject(v144);
                    v67 = *((_QWORD *)FirstLSurf + 23);
                    if ( v67 )
                      v68 = *(_QWORD *)(v67 + 8);
                    else
                      v68 = 0LL;
                    v69 = v124;
                    v70 = *(void **)v45;
                    if ( v67 && (*(_DWORD *)(v67 + 92) & 1) != 0 )
                      v69 = v124 & 0xFFFFFFFE;
                    if ( (v69 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)FirstLSurf + 63)) )
                    {
                      GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)FirstLSurf, 1LL, v68);
                      v69 &= ~1u;
                    }
                    if ( v69 )
                    {
                      v71 = (void *)UserReferenceDwmApiPort();
                      IncrementDWMWindowUniqueness(v73, v72, v74);
                      if ( v71 )
                      {
                        memset_0(v144, 0, 0x40uLL);
                        LODWORD(v144[0]) = 4194328;
                        WORD2(v144[0]) = 0x8000;
                        v146 = 1073741828;
                        v148 = v70;
                        v147 = v69;
                        v149 = v68;
                        EtwUpdateEvent(v70);
                        LpcRequestPort(v71, v144);
                        ObfDereferenceObject(v71);
                      }
                    }
                    if ( FirstLSurf != (struct SFMLOGICALSURFACE *)-256LL )
                      GreAcquirePushLockExclusive((struct SFMLOGICALSURFACE *)((char *)FirstLSurf + 256));
                    *((_DWORD *)FirstLSurf + 63) &= ~8u;
                    if ( FirstLSurf != (struct SFMLOGICALSURFACE *)-256LL )
                      GreReleasePushLockExclusive((struct SFMLOGICALSURFACE *)((char *)FirstLSurf + 256));
                    if ( v45 != -88 )
                      GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v45 + 88));
                    v17 = v119;
                    v21 = v170;
                    goto LABEL_91;
                  }
                }
                if ( a16
                  && ((*((_QWORD *)FirstLSurf + 23) - 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)FirstLSurf
                                                                                             + 23) >> 64)) != 0
                  && *(_DWORD *)(((*((_QWORD *)FirstLSurf + 23) - 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)FirstLSurf + 23) >> 64))
                               + 0x290) != a16 )
                {
                  *(_DWORD *)(((*((_QWORD *)FirstLSurf + 23) - 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)FirstLSurf + 23) >> 64))
                            + 0x290) = a16;
                }
                v57 = *((unsigned int *)FirstLSurf + 63);
                if ( (*((_DWORD *)FirstLSurf + 63) & 0x41) == 1 )
                {
                  v57 = (unsigned int)v57 | 0x40;
                  *((_DWORD *)FirstLSurf + 63) = v57;
                }
                v48 = (struct tagPOINT *)*((_QWORD *)FirstLSurf + 23);
                if ( v48 && (v48[11].y & 1) == 0 && !*(_QWORD *)&v48[28] )
                {
                  v57 = (unsigned int)v57 | 8;
                  *((_DWORD *)FirstLSurf + 63) = v57;
                }
                goto LABEL_65;
              }
            }
            v56 = *(_DWORD *)(v45 + 80);
            v18 = (struct _BLENDFUNCTION *)(v45 + 76);
            v55 = *(_DWORD *)(v45 + 72);
            v121 = (int *)(v45 + 76);
            a9 = v56;
LABEL_45:
            v170 = v55;
            goto LABEL_46;
          }
        }
        v18 = (struct _BLENDFUNCTION *)v121;
        v55 &= ~0x20000000u;
        goto LABEL_45;
      }
    }
    v16 = a10;
  }
LABEL_7:
  v24 = a9;
  v121 = (int *)v16;
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)&v142);
  if ( v141 )
  {
    v27 = *(_QWORD *)Gre::Base::Globals(v26);
    EtwTraceGreLockReleaseSemaphore(L"Sprite", v27 + 1040);
    GrepReleaseLockValidate<6>();
    GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)(v27 + 1040));
    v16 = (struct _BLENDFUNCTION *)v121;
  }
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v151);
  if ( v129 )
    goto LABEL_4;
  return v17;
}
