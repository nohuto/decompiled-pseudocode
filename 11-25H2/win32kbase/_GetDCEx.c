/*
 * XREFs of _GetDCEx @ 0x1400A2500
 * Callers:
 *     UserGetDesktopDC @ 0x140098B10 (UserGetDesktopDC.c)
 *     UserGetMonitorDC @ 0x1400A2330 (UserGetMonitorDC.c)
 *     _GetDC @ 0x1400A24A0 (_GetDC.c)
 * Callees:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x14000E9F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x140012490 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1400131B0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     GreOffsetRgn @ 0x140014370 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x140014720 (GreSetRectRgn.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140016730 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140016E40 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x14001B8A0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x14001BBA0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     GreGetStockObject @ 0x140041950 (GreGetStockObject.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     GreValidateVisrgn @ 0x1400473D4 (GreValidateVisrgn.c)
 *     GreSelectVisRgnShared @ 0x140089820 (GreSelectVisRgnShared.c)
 *     CreateEmptyRgnPublic @ 0x1400899B0 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x140089BB0 (CreateCacheDC.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089EAC (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x14008A010 (GreSetDCOwnerEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetBounds @ 0x14008B330 (GreGetBounds.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14008B5C0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140095AE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 *     UpdateDCEInUseCount @ 0x1400C3150 (UpdateDCEInUseCount.c)
 *     ?RegionCore_vCopy@Win32kRS@@YAXPEAVREGION_CORE@@PEBV2@@Z @ 0x1400C8DB4 (-RegionCore_vCopy@Win32kRS@@YAXPEAVREGION_CORE@@PEBV2@@Z.c)
 *     GreHintDCWnd @ 0x1400D5354 (GreHintDCWnd.c)
 *     GreSelectRedirectionBitmap @ 0x1400E0E64 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1400E4534 (GetRedirectionBitmap.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1400FA670 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     SpbCheckDce @ 0x14010480C (SpbCheckDce.c)
 *     DeleteHrgnClip @ 0x140109BD0 (DeleteHrgnClip.c)
 *     HmgMarkUndeletable @ 0x14010C3A0 (HmgMarkUndeletable.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14012231C (FlushWEFCOMPOSITEDDCEBounds.c)
 *     DelayedDestroyCacheDC @ 0x1401371E0 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C4E20 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C5230 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetDCEx(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v4; // r12d
  struct tagWND *v5; // r14
  char v6; // bl
  __int64 UserSessionState; // rax
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  REGION_CORE *v11; // rdi
  struct tagWND *v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  int v15; // r15d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r12d
  struct tagWND *v20; // rbx
  _QWORD *v21; // r9
  int v22; // r12d
  char v23; // cl
  unsigned int v24; // r8d
  __int64 v25; // rax
  int v26; // r12d
  REGION_CORE *v27; // rdx
  __int64 i; // rcx
  int (*v29)(void); // rax
  __int64 (__fastcall *v30)(struct tagWND *); // rax
  REGION_CORE *v31; // rdi
  int (*v32)(void); // rax
  HRGN v33; // r14
  HRGN v34; // rdx
  _QWORD *v35; // rax
  unsigned __int8 v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rbx
  struct REGION_CORE *v42; // rax
  int v43; // ebx
  int (*v44)(void); // rax
  __int64 v45; // rcx
  int (*v46)(void); // rax
  int (*v47)(void); // rax
  REGION_CORE *v48; // r13
  struct tagWND *v49; // rsi
  REGION_CORE *v50; // r15
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rbx
  struct REGION_CORE *v54; // rax
  int v55; // ebx
  __int64 v56; // rcx
  __int64 *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  int v63; // ebx
  int v64; // eax
  bool v65; // zf
  struct tagWND *v66; // rbx
  int (*v67)(void); // rax
  __int64 v68; // rdx
  __int64 **v69; // rcx
  __int64 *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 **v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  HRGN v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbx
  HRGN v80; // rdi
  __int64 v81; // rcx
  __int64 *v82; // rdx
  __int64 v83; // rcx
  int (*v84)(void); // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  void (__fastcall *v87)(__int64 *); // rax
  unsigned int v88; // ebx
  HDC v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  int (*v92)(void); // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned int (__fastcall *v95)(HRGN *, struct tagWND *, REGION_CORE *, __int64); // rax
  __int64 v96; // r9
  struct tagWND *v97; // rbx
  char *v98; // rax
  char *v99; // rcx
  char *v100; // rdx
  char **v101; // r8
  char **v102; // rdx
  char *v103; // rax
  char *v104; // rcx
  char *v105; // rdx
  char **v106; // r8
  char **v107; // rdx
  char *v108; // rax
  char *v109; // rcx
  char *v110; // rdx
  char **v111; // r8
  char **v112; // rdx
  int v113; // eax
  HRGN v114; // rbx
  __int64 v115; // rax
  HRGN v116; // rbx
  struct REGION_CORE *v117; // rdi
  char *v118; // r15
  char *v119; // rsi
  char *v120; // rbx
  __int64 v121; // rdi
  int v122; // r15d
  const struct REGION_CORE *v123; // rdx
  int v124; // ebx
  REGION_CORE *v125; // rbx
  REGION_CORE *v126; // rdi
  unsigned int v127; // esi
  unsigned int v128; // eax
  const struct REGION_CORE *v129; // r8
  struct REGION_CORE *v130; // rdx
  REGION_CORE *v131; // rcx
  _QWORD *v132; // rcx
  __int64 v133; // rdx
  _QWORD *v134; // rax
  OBJECT *v135; // rcx
  __int64 v136; // rcx
  __int64 *v137; // rax
  OBJECT *v138; // rcx
  _QWORD **v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rax
  __int64 v142; // rbx
  HRGN v143; // rdi
  __int64 v144; // rcx
  struct REGION_CORE *v145; // rdx
  Win32kRS *v146; // rcx
  const struct REGION_CORE *v147; // rdx
  REGION_CORE *v148; // rcx
  REGION_CORE *v149; // rcx
  HRGN v150; // r15
  __int64 v151; // rax
  __int64 RectRgnIndirect; // rax
  __int64 v153; // rbx
  HRGN v154; // rdi
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rcx
  HRGN v158; // rbx
  __int64 v159; // rax
  HRGN v160; // rbx
  struct REGION_CORE *v161; // rdi
  __int64 v162; // r15
  char *v163; // rsi
  char *v164; // rbx
  __int64 v165; // rdi
  int v166; // r15d
  const struct REGION_CORE *v167; // rdx
  int v168; // ebx
  REGION_CORE *v169; // rbx
  REGION_CORE *v170; // rdi
  unsigned int sizeScan; // esi
  unsigned int v172; // eax
  const struct REGION_CORE *v173; // r8
  struct REGION_CORE *v174; // rdx
  HRGN v175; // rcx
  _QWORD *v176; // rcx
  __int64 v177; // rdx
  _QWORD *v178; // rax
  struct REGION_CORE *v179; // rdx
  Win32kRS *v180; // rcx
  const struct REGION_CORE *v181; // rdx
  HRGN v182; // rcx
  REGION_CORE *v183; // rcx
  const struct REGION_CORE *v184; // rdx
  __int64 v185; // rdx
  __int64 v186; // rax
  int (*v187)(void); // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rbx
  unsigned int (__fastcall *v191)(__int64, __int64); // rax
  __int64 *v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rdx
  __int64 v198; // rdx
  __int64 v199; // rcx
  int (*v200)(void); // rax
  __int64 StockObject; // rax
  __int64 v202; // rdi
  __int64 v203; // rbx
  __int64 v204; // rdx
  __int64 v205; // rcx
  void (__fastcall *v206)(__int64, __int64); // rax
  struct tagWND *v207; // rbx
  PVOID *p_DeviceContext; // rbx
  DC *v209; // rcx
  struct _DC_ATTR *UserAttr; // rax
  HDC v211; // r15
  unsigned int v212; // edi
  DC *v213; // rsi
  __int64 v214; // rcx
  PVOID *v215; // rcx
  __int64 v216; // rax
  __int64 v218; // rcx
  __int64 *v219; // rax
  DC *v220; // rcx
  struct _DC_ATTR *v221; // rax
  HDC v222; // r15
  unsigned int v223; // edi
  DC *v224; // rsi
  __int64 v225; // rcx
  __int64 v226; // rcx
  _QWORD **v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // rdx
  __int64 v231; // rcx
  int (*v232)(void); // rax
  int (*v233)(void); // rax
  __int64 v234; // rax
  __int64 v235; // rcx
  _QWORD *v236; // rax
  __int64 v237; // rax
  __int64 v238; // rcx
  __int64 *v239; // rax
  DC *v240; // rcx
  struct _DC_ATTR *v241; // rax
  __int64 v242; // rcx
  struct REGION_CORE *v243; // [rsp+20h] [rbp-E0h]
  int v244; // [rsp+50h] [rbp-B0h] BYREF
  REGION_CORE *v245; // [rsp+58h] [rbp-A8h] BYREF
  struct tagWND *v246; // [rsp+60h] [rbp-A0h]
  REGION_CORE *v247; // [rsp+68h] [rbp-98h] BYREF
  HRGN v248[2]; // [rsp+70h] [rbp-90h] BYREF
  DC *v249; // [rsp+80h] [rbp-80h] BYREF
  int v250; // [rsp+88h] [rbp-78h]
  __int64 v251; // [rsp+90h] [rbp-70h]
  unsigned int v252; // [rsp+A0h] [rbp-60h]
  __int64 v253; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD **v254; // [rsp+B0h] [rbp-50h]
  __int64 v255; // [rsp+C8h] [rbp-38h] BYREF
  __int64 *v256; // [rsp+D0h] [rbp-30h]
  char v257; // [rsp+E8h] [rbp-18h]
  int v258; // [rsp+F0h] [rbp-10h]
  Win32kRS *v259; // [rsp+F8h] [rbp-8h] BYREF
  HRGN v260[2]; // [rsp+100h] [rbp+0h] BYREF
  struct REGION_CORE *v261; // [rsp+110h] [rbp+10h] BYREF
  int v262; // [rsp+118h] [rbp+18h]
  __int64 v263; // [rsp+120h] [rbp+20h]
  __int64 v264; // [rsp+128h] [rbp+28h]
  int v265; // [rsp+130h] [rbp+30h]
  __int128 v266; // [rsp+138h] [rbp+38h] BYREF
  __int128 v267; // [rsp+148h] [rbp+48h]
  __int64 RedirectionBitmap; // [rsp+160h] [rbp+60h]
  DC *v269; // [rsp+170h] [rbp+70h] BYREF
  int v270; // [rsp+178h] [rbp+78h]
  __int64 v271; // [rsp+180h] [rbp+80h]
  __int64 v272; // [rsp+188h] [rbp+88h]
  int v273; // [rsp+190h] [rbp+90h]
  __int128 v274; // [rsp+198h] [rbp+98h] BYREF
  __int128 v275; // [rsp+1A8h] [rbp+A8h]
  OBJECT *v276; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v277; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 *v278; // [rsp+1D0h] [rbp+D0h]
  int v279; // [rsp+1F0h] [rbp+F0h]
  __int64 v280; // [rsp+200h] [rbp+100h] BYREF
  int v281; // [rsp+208h] [rbp+108h]
  __int64 v282; // [rsp+210h] [rbp+110h]
  __int64 v283; // [rsp+218h] [rbp+118h]
  int v284; // [rsp+220h] [rbp+120h]
  _OWORD v285[2]; // [rsp+228h] [rbp+128h] BYREF
  OBJECT *v286; // [rsp+250h] [rbp+150h] BYREF
  __int64 v287; // [rsp+258h] [rbp+158h] BYREF
  _QWORD **v288; // [rsp+260h] [rbp+160h]
  int v289; // [rsp+280h] [rbp+180h]
  __int128 v290; // [rsp+288h] [rbp+188h] BYREF
  __int128 v291; // [rsp+298h] [rbp+198h] BYREF

  v3 = 0LL;
  v248[0] = a2;
  v260[0] = 0LL;
  v4 = a3;
  v245 = 0LL;
  v5 = a1;
  RedirectionBitmap = 0LL;
  v6 = a3;
  v244 = 0;
  v258 = 0;
  v246 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  if ( !v5 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      v9 = *CurrentThreadWin32Thread;
    else
      v9 = 0LL;
    v5 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v9 + 496) + 8LL) + 24LL);
    v246 = v5;
  }
  v10 = 0LL;
  v247 = v5;
  v11 = v5;
  v12 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      v13 = *((_QWORD *)v12 + 5);
      v14 = *(_BYTE *)(v13 + 31);
      if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 && v12 != v5 )
        break;
      if ( (*(_WORD *)(v13 + 42) & 0x2FFF) != 0x29D )
      {
        v12 = (struct tagWND *)*((_QWORD *)v12 + 13);
        if ( v12 )
          continue;
      }
      goto LABEL_12;
    }
    v15 = 0;
  }
  else
  {
LABEL_12:
    v15 = 1;
    v3 = 1LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0LL);
  if ( (v4 & 0x10000) != 0 )
  {
    v19 = v4 & 0xFFFFFFC7;
    v65 = (v6 & 1) == 0;
    v17 = v19;
    v20 = v246;
    if ( v65 )
    {
      v21 = (_QWORD *)*((_QWORD *)v246 + 17);
      v22 = v19 | 0x20;
      v23 = *(_BYTE *)(v21[1] + 8LL);
      if ( v23 >= 0 )
        v22 = v17;
      v24 = v22;
      if ( (v22 & 2) == 0 && (v23 & 0x20) == 0 )
      {
        if ( (v23 & 0x40) != 0 )
        {
          v25 = v21[5];
          if ( v25 )
            v10 = *(_QWORD *)(v25 + 16);
        }
        else
        {
          v24 = v22 | 2;
        }
      }
      v18 = v24 | 8;
      v17 = *(unsigned __int8 *)(*((_QWORD *)v246 + 5) + 31LL);
      if ( (v17 & 2) == 0 )
        v18 = v24;
      v4 = v18 | 0x10;
      if ( (v17 & 4) == 0 )
        v4 = v18;
      if ( (v17 & 0x20) != 0 )
      {
        v4 &= ~8u;
        if ( v21[10] )
          v4 |= 2u;
      }
    }
    else
    {
      v26 = v19 | 0x10;
      if ( (*(_BYTE *)(*((_QWORD *)v246 + 5) + 31LL) & 4) == 0 )
        v26 = v17;
      v4 = v26 | 2;
    }
  }
  else
  {
    v20 = v246;
  }
  if ( (v4 & 0x80000) != 0 )
    v4 = v4 & 0xFFFFFFD5 | 2;
  i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48);
  v29 = *(int (**)(void))(i + 2560);
  if ( v29 && v29() >= 0 )
  {
    i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v27) + 48);
    v30 = *(__int64 (__fastcall **)(struct tagWND *))(i + 2568);
    if ( v30 )
      v31 = (REGION_CORE *)v30(v20);
    else
      v31 = 0LL;
    if ( v31 && (*(_DWORD *)(*((_QWORD *)v31 + 5) + 24LL) & 0x20000000) != 0 )
    {
      i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v27) + 48);
      v32 = *(int (**)(void))(i + 2576);
      if ( v32 && v32() >= 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v31);
        if ( RedirectionBitmap )
          goto LABEL_56;
      }
      else
      {
        RedirectionBitmap = 0LL;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v31 + 5) + 26LL) & 0x20) != 0 )
      {
LABEL_56:
        v4 |= 0x4000u;
        v245 = v31;
        if ( v20 == v31 && (v4 & 0x20) != 0 )
          v4 = v4 & 0xFFFFFFDD | 2;
        v33 = v248[0];
        if ( v248[0] > (HRGN)2 )
        {
          if ( (v4 & 0x40000) != 0 )
          {
            v248[0] = (HRGN)CreateEmptyRgnPublic();
            v34 = v33;
            v33 = v248[0];
            GreCombineRgn(v248[0], v34, 0LL, 5);
            v20 = v246;
            v4 &= ~0x40000u;
          }
          GreOffsetRgn(v33, -*(_DWORD *)(*((_QWORD *)v31 + 5) + 88LL), -*(_DWORD *)(*((_QWORD *)v31 + 5) + 92LL));
        }
      }
    }
    v11 = v247;
  }
  if ( (v4 & 0x20) != 0 )
  {
    v27 = (REGION_CORE *)*((_QWORD *)v20 + 13);
    if ( !v27 )
    {
      v35 = (_QWORD *)PsGetCurrentThreadWin32Thread();
      if ( v35 )
        v35 = (_QWORD *)*v35;
      i = *(_QWORD *)(v35[62] + 8LL);
      v27 = *(REGION_CORE **)(i + 24);
    }
    v4 |= 2u;
    if ( (v4 & 0x18) == 0 )
    {
      v36 = *(_BYTE *)(*((_QWORD *)v27 + 5) + 31LL);
      i = v36;
      LOBYTE(i) = *(_BYTE *)(*((_QWORD *)v20 + 5) + 31LL) ^ v36;
      if ( (i & 0x10) == 0 )
      {
        v4 &= 0xFFFFFFE7;
        v247 = v27;
        v11 = v27;
        if ( (v36 & 4) != 0 )
          v4 |= 0x10u;
      }
    }
  }
  if ( (v4 & 2) == 0 )
  {
    if ( !v20 )
      goto LABEL_78;
    v37 = (_QWORD *)PsGetCurrentThreadWin32Thread();
    if ( v37 )
      v37 = (_QWORD *)*v37;
    if ( *((_QWORD **)v20 + 2) != v37 )
LABEL_78:
      v4 |= 2u;
  }
  LODWORD(v259) = v4 & 0x8080441F;
  if ( (v4 & 2) != 0 )
  {
    v49 = v246;
    v50 = v245;
    while ( 1 )
    {
      v51 = *(_QWORD *)(W32GetUserSessionState(i, v27) + 56968);
      v39 = *(__int64 **)(v51 + 24);
      for ( i = *(_QWORD *)(W32GetUserSessionState(v51, v52) + 56968) + 24LL;
            v39 != (__int64 *)i;
            i = *(_QWORD *)(W32GetUserSessionState(i, v27) + 56968) + 24LL )
      {
        if ( (REGION_CORE *)v39[11] == v11 && (REGION_CORE *)v39[12] == v245 && !v39[9] )
        {
          v53 = v39[2];
          v263 = *(_QWORD *)(W32GetSessionState(i) + 88);
          v264 = 0LL;
          v261 = 0LL;
          v262 = 0;
          v265 = 0;
          v266 = 0LL;
          v267 = 0LL;
          PushThreadGuardedObject(
            &v266,
            (__int64)&v261,
            (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
          v54 = (struct REGION_CORE *)HmgShareLockEx(v53, 1, 0);
          v261 = v54;
          if ( !v54 )
          {
            DCOBJA::~DCOBJA((DCOBJA *)&v261);
LABEL_119:
            v27 = (REGION_CORE *)*((unsigned int *)v39 + 12);
            if ( (_DWORD)v259 == (v39[6] & 0x80C05C1F)
              && ((*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 0x20) == 0 || v39[10] == v39[11])
              && (!v3 || ((unsigned int)v27 & 0x10000000) == 0) )
            {
              v66 = v246;
              LODWORD(v27) = (unsigned int)v27 | 0x1000;
              *((_DWORD *)v39 + 12) = (_DWORD)v27;
              if ( v66 != (struct tagWND *)v39[10] )
              {
                v67 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v27) + 48) + 2656LL);
                if ( v67 && v67() >= 0 )
                  SpbCheckDce(v39);
                tagDCE::SetPwndOrg((tagDCE *)v39, v66);
                ResetOrg(0LL, (struct tagDCE *)v39, 0);
              }
              v48 = v50;
              goto LABEL_147;
            }
            goto LABEL_124;
          }
          v55 = *((_DWORD *)v54 + 10);
          DCOBJA::~DCOBJA((DCOBJA *)&v261);
          if ( (v55 & 1) == 0 )
            goto LABEL_119;
        }
LABEL_124:
        v39 = (__int64 *)*v39;
      }
      v39 = 0LL;
      v56 = *(_QWORD *)(W32GetUserSessionState(i, v27) + 56968);
      v57 = *(__int64 **)(v56 + 24);
      v60 = *(_QWORD *)(W32GetUserSessionState(v56, v58) + 56968) + 24LL;
      if ( v57 == (__int64 *)v60 )
        goto LABEL_137;
      do
      {
        if ( (v57[6] & 0x400002) != 2 )
          goto LABEL_135;
        v61 = v57[2];
        v282 = *(_QWORD *)(W32GetSessionState(v60) + 88);
        v283 = 0LL;
        v280 = 0LL;
        v281 = 0;
        v284 = 0;
        memset(v285, 0, sizeof(v285));
        PushThreadGuardedObject(
          v285,
          (__int64)&v280,
          (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
        v62 = HmgShareLockEx(v61, 1, 0);
        v280 = v62;
        if ( v62 )
        {
          v63 = *(_DWORD *)(v62 + 40);
          DCOBJA::~DCOBJA((DCOBJA *)&v280);
          if ( (v63 & 1) != 0 )
            goto LABEL_135;
        }
        else
        {
          DCOBJA::~DCOBJA((DCOBJA *)&v280);
        }
        if ( !v57[9] )
        {
          v64 = *((_DWORD *)v57 + 12);
          if ( (v64 & 0x800) != 0 )
            break;
          if ( (v64 & 0x1000) == 0 )
            v39 = v57;
        }
LABEL_135:
        v57 = (__int64 *)*v57;
        v60 = *(_QWORD *)(W32GetUserSessionState(v60, v59) + 56968) + 24LL;
      }
      while ( v57 != (__int64 *)v60 );
      v49 = v246;
LABEL_137:
      i = *(_QWORD *)(W32GetUserSessionState(v60, v59) + 56968) + 24LL;
      v65 = v57 == (__int64 *)i;
      if ( v57 != (__int64 *)i )
        goto LABEL_164;
      if ( v39 )
      {
        v65 = v57 == (__int64 *)i;
LABEL_164:
        if ( !v65 )
          v39 = v57;
        v48 = v245;
        v11 = v247;
        goto LABEL_167;
      }
      if ( !CreateCacheDC(v49, v4 & 0x4000 | 0x802, 0LL) )
        goto LABEL_371;
      v11 = v247;
    }
  }
  v38 = *(_QWORD *)(W32GetUserSessionState(i, v27) + 56968);
  v39 = *(__int64 **)(v38 + 24);
  i = *(_QWORD *)(W32GetUserSessionState(v38, v40) + 56968) + 24LL;
  if ( v39 == (__int64 *)i )
    goto LABEL_371;
  while ( 1 )
  {
    if ( (v39[6] & 0x400002) != 0 )
      goto LABEL_88;
    v41 = v39[2];
    v263 = *(_QWORD *)(W32GetSessionState(i) + 88);
    v264 = 0LL;
    v261 = 0LL;
    v262 = 0;
    v265 = 0;
    v266 = 0LL;
    v267 = 0LL;
    PushThreadGuardedObject(
      &v266,
      (__int64)&v261,
      (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
    v42 = (struct REGION_CORE *)HmgShareLockEx(v41, 1, 0);
    v261 = v42;
    if ( !v42 )
      break;
    v43 = *((_DWORD *)v42 + 10);
    DCOBJA::~DCOBJA((DCOBJA *)&v261);
    if ( (v43 & 1) == 0 )
      goto LABEL_86;
LABEL_88:
    v39 = (__int64 *)*v39;
    i = *(_QWORD *)(W32GetUserSessionState(i, v27) + 56968) + 24LL;
    if ( v39 == (__int64 *)i )
      goto LABEL_371;
  }
  DCOBJA::~DCOBJA((DCOBJA *)&v261);
LABEL_86:
  if ( (struct tagWND *)v39[10] != v246 && v39[2] != v10 )
    goto LABEL_88;
  if ( v39[5] )
  {
    if ( (v4 & 0xC0) != 0 )
    {
      i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v27) + 48);
      v44 = *(int (**)(void))(i + 2624);
      if ( v44 )
      {
        if ( v44() >= 0 )
          DeleteHrgnClip(v39);
      }
    }
  }
  if ( (v39[6] & 0x4000) != 0 )
  {
    v45 = *(_QWORD *)(v39[12] + 40);
    if ( (*(_BYTE *)(v45 + 27) & 2) != 0 )
    {
      v45 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v45, v27) + 48);
      v46 = *(int (**)(void))(v45 + 2640);
      if ( v46 )
      {
        if ( v46() >= 0 )
          FlushWEFCOMPOSITEDDCEBounds(v39);
      }
    }
    i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v45, v27) + 24);
    v47 = *(int (**)(void))(i + 2584);
    if ( v47 && v47() >= 0 )
      GreSelectRedirectionBitmap(v39[2], 0LL);
  }
  v48 = v245;
  if ( (struct tagWND *)v39[10] == v246 && (REGION_CORE *)v39[12] == v245 && (REGION_CORE *)v39[11] == v11 )
  {
    if ( v15 )
    {
      i = *((unsigned int *)v39 + 12);
      if ( (((unsigned __int16)i ^ (unsigned __int16)v4) & 0x4000) == 0 && (i & 0x10000000) == 0 )
        goto LABEL_147;
    }
  }
LABEL_167:
  while ( 2 )
  {
    v65 = (v39[6] & 0x800) == 0;
    v258 = 1;
    if ( v65 )
    {
      v84 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v27) + 48) + 2656LL);
      if ( v84 )
      {
        if ( v84() >= 0 )
        {
          v87 = *(void (__fastcall **)(__int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v86, v85) + 48) + 2664LL);
          if ( v87 )
            v87(v39);
        }
      }
    }
    v88 = (unsigned int)v259;
    v89 = (HDC)v39[2];
    *((_DWORD *)v39 + 12) = (unsigned int)v259 | 0x1000;
    GreValidateVisrgn(v89, 0);
    v260[0] = 0LL;
    v92 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v91, v90) + 48) + 2592LL);
    if ( !v92
      || v92() < 0
      || (v95 = *(unsigned int (__fastcall **)(HRGN *, struct tagWND *, REGION_CORE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v94, v93) + 48)
                                                                                               + 2600LL)) == 0LL )
    {
      v97 = v246;
      goto LABEL_178;
    }
    v96 = v88;
    v97 = v246;
    if ( !v95(v260, v246, v11, v96) )
LABEL_178:
      *((_DWORD *)v39 + 12) |= 0x10000000u;
    v39[10] = (__int64)v97;
    v98 = (char *)(v39 + 13);
    v99 = (char *)v97 + 320;
    if ( !v97 )
      v99 = 0LL;
    v100 = *(char **)v98;
    if ( *(char **)v98 != v98 )
    {
      if ( *((char **)v100 + 1) != v98 )
        goto LABEL_426;
      v101 = (char **)v39[14];
      if ( *v101 != v98 )
        goto LABEL_426;
      *v101 = v100;
      *((_QWORD *)v100 + 1) = v101;
    }
    if ( v99 )
    {
      v102 = (char **)*((_QWORD *)v99 + 1);
      if ( *v102 != v99 )
        goto LABEL_426;
      *(_QWORD *)v98 = v99;
      v39[14] = (__int64)v102;
      *v102 = v98;
      *((_QWORD *)v99 + 1) = v98;
    }
    else
    {
      v39[14] = (__int64)(v39 + 13);
      *(_QWORD *)v98 = v98;
    }
    v39[11] = (__int64)v11;
    v103 = (char *)(v39 + 15);
    v104 = (char *)v11 + 336;
    if ( !v11 )
      v104 = 0LL;
    v105 = *(char **)v103;
    if ( *(char **)v103 != v103 )
    {
      if ( *((char **)v105 + 1) != v103 )
        goto LABEL_426;
      v106 = (char **)v39[16];
      if ( *v106 != v103 )
        goto LABEL_426;
      *v106 = v105;
      *((_QWORD *)v105 + 1) = v106;
    }
    if ( v104 )
    {
      v107 = (char **)*((_QWORD *)v104 + 1);
      if ( *v107 != v104 )
        goto LABEL_426;
      *(_QWORD *)v103 = v104;
      v39[16] = (__int64)v107;
      *v107 = v103;
      *((_QWORD *)v104 + 1) = v103;
    }
    else
    {
      v39[16] = (__int64)(v39 + 15);
      *(_QWORD *)v103 = v103;
    }
    v39[12] = (__int64)v48;
    v108 = (char *)(v39 + 17);
    v109 = (char *)v48 + 352;
    if ( !v48 )
      v109 = 0LL;
    v110 = *(char **)v108;
    if ( *(char **)v108 != v108 )
    {
      if ( *((char **)v110 + 1) != v108 )
        goto LABEL_426;
      v111 = (char **)v39[18];
      if ( *v111 != v108 )
        goto LABEL_426;
      *v111 = v110;
      *((_QWORD *)v110 + 1) = v111;
    }
    if ( v109 )
    {
      v112 = (char **)*((_QWORD *)v109 + 1);
      if ( *v112 != v109 )
        goto LABEL_426;
      *(_QWORD *)v108 = v109;
      v39[18] = (__int64)v112;
      *v112 = v108;
      *((_QWORD *)v109 + 1) = v108;
    }
    else
    {
      v39[18] = (__int64)(v39 + 17);
      *(_QWORD *)v108 = v108;
    }
    v39[3] = 0LL;
    v39[4] = 0LL;
    ResetOrg(v260[0], (struct tagDCE *)v39, 1);
    v113 = v244;
    if ( !v260[0] )
      v113 = 1;
    v244 = v113;
LABEL_147:
    if ( ((*((_DWORD *)v39 + 12) ^ v4) & 0x8080441F) != 0 )
      continue;
    break;
  }
  v69 = *(__int64 ***)(W32GetUserSessionState(i, v27) + 56968);
  if ( v69[3] == v39 )
    goto LABEL_155;
  v70 = (__int64 *)*v39;
  if ( (__int64 *)*v39 == v39 )
    goto LABEL_153;
  if ( (__int64 *)v70[1] != v39 )
    goto LABEL_426;
  v69 = (__int64 **)v39[1];
  if ( *v69 != v39 )
    goto LABEL_426;
  *v69 = v70;
  v70[1] = (__int64)v69;
LABEL_153:
  v71 = *(_QWORD *)(W32GetUserSessionState(v69, v68) + 56968);
  v72 = *(_QWORD *)(v71 + 24);
  v73 = (__int64 **)(v71 + 24);
  if ( *(__int64 ***)(v72 + 8) != v73 )
    goto LABEL_426;
  *v39 = v72;
  v39[1] = (__int64)v73;
  *(_QWORD *)(v72 + 8) = v39;
  *v73 = v39;
LABEL_155:
  GreValidateVisrgn((HDC)v39[2], 0);
  if ( (v4 & 0x80u) == 0 )
  {
    if ( (v4 & 0x40) == 0 )
      goto LABEL_333;
    v150 = v248[0];
    if ( !v248[0] )
      goto LABEL_333;
    v151 = W32GetUserSessionState(v75, v74);
    LODWORD(v243) = 0;
    GreSetRectRgn(*(HRGN *)(v151 + 43064), 0, 0, 0, v243);
    v290 = 0LL;
    RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v290);
    v153 = v39[2];
    v154 = (HRGN)RectRgnIndirect;
    v39[5] = RectRgnIndirect;
    v271 = *(_QWORD *)(W32GetSessionState(v155) + 88);
    v272 = 0LL;
    v269 = 0LL;
    v270 = 0;
    v273 = 0;
    v274 = 0LL;
    v275 = 0LL;
    PushThreadGuardedObject(
      &v274,
      (__int64)&v269,
      (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
    v269 = (DC *)HmgShareLockEx(v153, 1, 0);
    if ( v269 )
      GreSelectVisRgnInternal(&v269, v154, 4);
    DCOBJA::~DCOBJA((DCOBJA *)&v269);
    v39[3] = (__int64)v150;
    if ( (v4 & 0x40000) != 0 )
      *((_DWORD *)v39 + 12) |= 0x40000u;
    *((_DWORD *)v39 + 12) |= 0x40u;
    if ( v150 == (HRGN)1 )
    {
      v39[4] = 1LL;
LABEL_332:
      *((_DWORD *)v39 + 12) &= ~0x2000u;
      v186 = W32GetUserSessionState(v157, v156);
      GreSelectVisRgnShared((HDC)v39[2], *(_QWORD *)(v186 + 43064), 4u);
      goto LABEL_333;
    }
    v158 = (HRGN)v39[5];
    v159 = W32GetUserSessionState(v157, v156);
    GreCombineRgn(*(HRGN *)(v159 + 43064), v158, v150, 4);
    v290 = 0LL;
    v160 = (HRGN)GreCreateRectRgnIndirect((struct REGION_CORE *)&v290);
    if ( v160 )
    {
      PsGetCurrentProcessId();
      HmgSetOwner((__int64)v160, 0, 4);
    }
    v39[4] = (__int64)v160;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v261, v160, 0, 1);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v280, v150, 1, 0);
    if ( v280 && v261 )
    {
      v161 = qword_1402A10B0;
      if ( qword_1402A10B0 )
      {
        v162 = v280 + 24;
        v163 = (char *)v261 + 24;
        v164 = (char *)qword_1402A10B0 + 8;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx((char *)v161 + 8, 2LL);
        v165 = *(_QWORD *)v161;
        v166 = (*(unsigned __int8 (__fastcall **)(char *, __int64))(v165 + 96))(v163, v162);
        if ( !(*(unsigned int (__fastcall **)(char *))(v165 + 216))(v163) )
          DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v163, 0LL, 0LL, 0LL, 0LL, 0);
        ExReleasePushLockSharedEx(v164, 2LL);
        KeLeaveCriticalRegion();
        v168 = v166;
        v150 = v248[0];
LABEL_314:
        if ( v168 )
          RGNOBJ::iComplexity((RGNOBJ *)&v261, v167);
        goto LABEL_329;
      }
      v169 = (REGION_CORE *)(v280 + 24);
      v170 = (struct REGION_CORE *)((char *)v261 + 24);
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v280 + 24));
      if ( ((unsigned int)REGION_CORE::get_sizeScanAlloc(v170) >= sizeScan
         || (unsigned int)REGION_CORE::get_sizeScanAlloc(v169) <= 0x70)
        && ((unsigned int)REGION_CORE::get_sizeScanAlloc(v170) <= 0x70
         || (unsigned int)REGION_CORE::get_sizeScanAlloc(v169) > 0x70) )
      {
        if ( qword_1402A10B0 )
        {
          v179 = (struct REGION_CORE *)(v280 + 24);
          if ( !v280 )
            v179 = 0LL;
          v180 = (struct REGION_CORE *)((char *)v261 + 24);
          if ( !v261 )
            v180 = 0LL;
          Win32kRS::RegionCore_vCopy(v180, v179, v261);
          RGNOBJ::iComplexity((RGNOBJ *)&v261, v181);
        }
        else
        {
          v182 = (HRGN)((char *)v261 + 24);
          if ( !v261 )
            v182 = 0LL;
          v248[0] = v182;
          v183 = (REGION_CORE *)(v280 + 24);
          if ( !v280 )
            v183 = 0LL;
          v245 = v183;
          RGNCOREOBJ::vCopy((Win32kRS **)v248, &v245);
          RGNOBJ::iComplexity((RGNOBJ *)&v261, v184);
        }
        goto LABEL_329;
      }
      if ( (unsigned int)REGION_CORE::get_sizeScan(v169) <= 0x70 )
        v172 = 112;
      else
        v172 = REGION_CORE::get_sizeScan(v169);
      v245 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v245, v172);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v245);
      if ( v245 )
      {
        if ( qword_1402A10B0 )
        {
          v174 = (struct REGION_CORE *)(v280 + 24);
          if ( !v280 )
            v174 = 0LL;
          Win32kRS::RegionCore_vCopy((REGION_CORE *)((char *)v245 + 24), v174, v173);
        }
        else
        {
          v247 = (REGION_CORE *)((char *)v245 + 24);
          v175 = (HRGN)(v280 + 24);
          if ( !v280 )
            v175 = 0LL;
          v248[0] = v175;
          RGNCOREOBJ::vCopy(&v247, (REGION_CORE **)v248);
        }
        v168 = RGNOBJAPI::bSwap((RGNOBJAPI *)&v261, (struct RGNOBJ *)&v245);
        if ( v245 )
        {
          v176 = (_QWORD *)((char *)v245 + 80);
          if ( v245 != (REGION_CORE *)-80LL )
          {
            v177 = *v176;
            if ( *(_QWORD **)(*v176 + 8LL) != v176 )
              goto LABEL_426;
            v178 = (_QWORD *)*((_QWORD *)v245 + 11);
            if ( (_QWORD *)*v178 != v176 )
              goto LABEL_426;
            *v178 = v177;
            *(_QWORD *)(v177 + 8) = v178;
            v176[1] = v176;
            *v176 = v176;
          }
        }
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v245);
        goto LABEL_314;
      }
      RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v245);
    }
    else
    {
      EngSetLastError(6u);
    }
LABEL_329:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&v280);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&v261);
    if ( (unsigned __int64)v150 > 2 && (v39[6] & 0x40000) == 0 )
    {
      PsGetCurrentProcessId();
      LOBYTE(v185) = 4;
      HmgMarkUndeletable(v150, v185);
    }
    goto LABEL_332;
  }
  v76 = v248[0];
  if ( v248[0] != (HRGN)1 )
  {
    v77 = W32GetUserSessionState(v75, v74);
    LODWORD(v243) = 0;
    GreSetRectRgn(*(HRGN *)(v77 + 43064), 0, 0, 0, v243);
    v291 = 0LL;
    v78 = GreCreateRectRgnIndirect((struct REGION_CORE *)&v291);
    v79 = v39[2];
    v80 = (HRGN)v78;
    v39[5] = v78;
    v271 = *(_QWORD *)(W32GetSessionState(v81) + 88);
    v272 = 0LL;
    v269 = 0LL;
    v270 = 0;
    v273 = 0;
    v274 = 0LL;
    v275 = 0LL;
    PushThreadGuardedObject(
      &v274,
      (__int64)&v269,
      (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
    v269 = (DC *)HmgShareLockEx(v79, 1, 0);
    if ( v269 )
      GreSelectVisRgnInternal(&v269, v80, 4);
    DCOBJA::~DCOBJA((DCOBJA *)&v269);
    v39[3] = (__int64)v76;
    if ( (v4 & 0x40000) != 0 )
      *((_DWORD *)v39 + 12) |= 0x40000u;
    *((_DWORD *)v39 + 12) |= 0x80u;
    if ( !v76 )
    {
      v39[4] = 0LL;
      goto LABEL_260;
    }
    v114 = (HRGN)v39[5];
    v115 = W32GetUserSessionState(v83, v82);
    GreCombineRgn(*(HRGN *)(v115 + 43064), v114, v76, 1);
    v290 = 0LL;
    v116 = (HRGN)GreCreateRectRgnIndirect((struct REGION_CORE *)&v290);
    if ( v116 )
    {
      PsGetCurrentProcessId();
      HmgSetOwner((__int64)v116, 0, 4);
    }
    v39[4] = (__int64)v116;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v286, v116, 0, 1);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v276, v76, 1, 0);
    if ( v276 && v286 )
    {
      v117 = qword_1402A10B0;
      if ( qword_1402A10B0 )
      {
        v118 = (char *)v276 + 24;
        v119 = (char *)v286 + 24;
        v120 = (char *)qword_1402A10B0 + 8;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx((char *)v117 + 8, 2LL);
        v121 = *(_QWORD *)v117;
        v122 = (*(unsigned __int8 (__fastcall **)(char *, char *))(v121 + 96))(v119, v118);
        if ( !(*(unsigned int (__fastcall **)(char *))(v121 + 216))(v119) )
          DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v119, 0LL, 0LL, 0LL, 0LL, 0);
        ExReleasePushLockSharedEx(v120, 2LL);
        KeLeaveCriticalRegion();
        v124 = v122;
LABEL_241:
        if ( !v124 )
        {
LABEL_242:
          v76 = v248[0];
          goto LABEL_243;
        }
LABEL_275:
        RGNOBJ::iComplexity((RGNOBJ *)&v286, v123);
        goto LABEL_242;
      }
      v125 = (OBJECT *)((char *)v276 + 24);
      v126 = (OBJECT *)((char *)v286 + 24);
      v127 = REGION_CORE::get_sizeScan((OBJECT *)((char *)v276 + 24));
      if ( ((unsigned int)REGION_CORE::get_sizeScanAlloc(v126) >= v127
         || (unsigned int)REGION_CORE::get_sizeScanAlloc(v125) <= 0x70)
        && ((unsigned int)REGION_CORE::get_sizeScanAlloc(v126) <= 0x70
         || (unsigned int)REGION_CORE::get_sizeScanAlloc(v125) > 0x70) )
      {
        if ( qword_1402A10B0 )
        {
          v145 = (OBJECT *)((char *)v276 + 24);
          if ( !v276 )
            v145 = 0LL;
          v146 = (OBJECT *)((char *)v286 + 24);
          if ( !v286 )
            v146 = 0LL;
          Win32kRS::RegionCore_vCopy(v146, v145, v286);
          RGNOBJ::iComplexity((RGNOBJ *)&v286, v147);
          goto LABEL_242;
        }
        v148 = (OBJECT *)((char *)v286 + 24);
        if ( !v286 )
          v148 = 0LL;
        v247 = v148;
        v149 = (OBJECT *)((char *)v276 + 24);
        if ( !v276 )
          v149 = 0LL;
        v245 = v149;
        RGNCOREOBJ::vCopy(&v247, &v245);
        goto LABEL_275;
      }
      if ( (unsigned int)REGION_CORE::get_sizeScan(v125) <= 0x70 )
        v128 = 112;
      else
        v128 = REGION_CORE::get_sizeScan(v125);
      v245 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v245, v128);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v245);
      if ( !v245 )
      {
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v245);
        goto LABEL_242;
      }
      if ( qword_1402A10B0 )
      {
        v130 = (OBJECT *)((char *)v276 + 24);
        if ( !v276 )
          v130 = 0LL;
        Win32kRS::RegionCore_vCopy((REGION_CORE *)((char *)v245 + 24), v130, v129);
      }
      else
      {
        v259 = (REGION_CORE *)((char *)v245 + 24);
        v131 = (OBJECT *)((char *)v276 + 24);
        if ( !v276 )
          v131 = 0LL;
        v247 = v131;
        RGNCOREOBJ::vCopy(&v259, &v247);
      }
      v124 = RGNOBJAPI::bSwap((RGNOBJAPI *)&v286, (struct RGNOBJ *)&v245);
      if ( !v245 || (v132 = (_QWORD *)((char *)v245 + 80), v245 == (REGION_CORE *)-80LL) )
      {
LABEL_240:
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v245);
        goto LABEL_241;
      }
      v133 = *v132;
      if ( *(_QWORD **)(*v132 + 8LL) == v132 )
      {
        v134 = (_QWORD *)*((_QWORD *)v245 + 11);
        if ( (_QWORD *)*v134 == v132 )
        {
          *v134 = v133;
          *(_QWORD *)(v133 + 8) = v134;
          v132[1] = v132;
          *v132 = v132;
          goto LABEL_240;
        }
      }
LABEL_426:
      __fastfail(3u);
    }
    EngSetLastError(6u);
LABEL_243:
    if ( !v279 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v276);
    v135 = v276;
    if ( v276 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v276 + 3);
      if ( *((_WORD *)v135 + 6) == 0xFFFF )
        OBJECT::ReportOverflow(v135, 3u);
    }
    v136 = v277;
    v137 = v278;
    if ( *(__int64 **)(v277 + 8) != &v277 || (__int64 *)*v278 != &v277 )
      goto LABEL_426;
    *v278 = v277;
    *(_QWORD *)(v136 + 8) = v137;
    v278 = &v277;
    v277 = (__int64)&v277;
    if ( !v289 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v286);
    v138 = v286;
    if ( v286 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v286 + 3);
      if ( *((_WORD *)v138 + 6) == 0xFFFF )
        OBJECT::ReportOverflow(v138, 3u);
    }
    v83 = v287;
    v139 = v288;
    if ( *(__int64 **)(v287 + 8) != &v287 )
      goto LABEL_426;
    v82 = &v287;
    if ( *v288 != &v287 )
      goto LABEL_426;
    *v288 = (_QWORD *)v287;
    *(_QWORD *)(v83 + 8) = v139;
    if ( (unsigned __int64)v76 > 2 && (v39[6] & 0x40000) == 0 )
    {
      PsGetCurrentProcessId();
      LOBYTE(v140) = 4;
      HmgMarkUndeletable(v76, v140);
    }
LABEL_260:
    *((_DWORD *)v39 + 12) &= ~0x2000u;
    v141 = W32GetUserSessionState(v83, v82);
    v142 = v39[2];
    v143 = *(HRGN *)(v141 + 43064);
    v263 = *(_QWORD *)(W32GetSessionState(v144) + 88);
    v264 = 0LL;
    v261 = 0LL;
    v262 = 0;
    v265 = 0;
    v266 = 0LL;
    v267 = 0LL;
    PushThreadGuardedObject(
      &v266,
      (__int64)&v261,
      (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
    v261 = (struct REGION_CORE *)HmgShareLockEx(v142, 1, 0);
    if ( v261 )
      GreSelectVisRgnInternal(&v261, v143, 4);
    DCOBJA::~DCOBJA((DCOBJA *)&v261);
  }
LABEL_333:
  if ( (v39[6] & 0x4000) != 0 )
  {
    v187 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v75, v74) + 24) + 2584LL);
    if ( v187 )
    {
      if ( v187() >= 0 )
      {
        v190 = v39[2];
        v191 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v189, v188) + 24)
                                                               + 2592LL);
        if ( !v191 || !v191(v190, RedirectionBitmap) )
        {
          GreGetBounds((HDC)v39[2], 0LL, 5);
          goto LABEL_340;
        }
      }
    }
    GreGetBounds((HDC)v39[2], 0LL, 5);
    if ( v244 )
    {
LABEL_340:
      DCOBJA::DCOBJA((DCOBJA *)&v269, v39[2]);
      if ( v269 )
        GreSelectVisRgnInternal(&v269, 0LL, 1);
      DCOBJA::~DCOBJA((DCOBJA *)&v269);
    }
  }
  if ( (v39[6] & 2) == 0 )
  {
LABEL_356:
    v207 = v246;
    if ( (*(_BYTE *)(*((_QWORD *)v246 + 5) + 26LL) & 0x40) == 0 || (v4 & 0x40000000) != 0 )
    {
LABEL_396:
      GreValidateVisrgn((HDC)v39[2], 1);
      v231 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v229, v228) + 24);
      v232 = *(int (**)(void))(v231 + 2616);
      if ( v232 && v232() >= 0 )
        GreHintDCWnd(v39[2], *(_QWORD *)v207, 0, 0, 0);
      if ( v48 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v48 + 5) + 26LL) & 8) != 0 )
        {
          v231 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v231, v230) + 24);
          v233 = *(int (**)(void))(v231 + 2616);
          if ( v233 )
          {
            if ( v233() >= 0 )
              GreHintDCWnd(
                v39[2],
                *(_QWORD *)v207,
                *(_QWORD *)v48,
                ((unsigned __int8)~*(_BYTE *)(*((_QWORD *)v48 + 5) + 27LL) >> 1) & 1,
                (*(_WORD *)(*((_QWORD *)v48 + 5) + 42LL) & 0x2FFF) == 669);
          }
        }
      }
      if ( *((int *)v39 + 12) < 0 )
      {
        v234 = PsGetCurrentProcessWin32Process(v231);
        if ( v234 && !*(_QWORD *)v234 )
          v234 = 0LL;
        *(_DWORD *)(v234 + 12) |= 0x200u;
        v39[7] = 0LL;
        v236 = (_QWORD *)PsGetCurrentProcessWin32Process(v235);
        if ( v236 )
        {
          if ( !*v236 )
            v236 = 0LL;
        }
        v39[8] = (__int64)v236;
        UpdateDCEInUseCount(1LL, v236);
      }
      v237 = W32GetUserSessionState(v231, v230);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v237 + 56968) + 48LL));
      return v39[2];
    }
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)&v249, (HDC)v39[2]);
    if ( v249 )
    {
      DC::dwSetLayout(v249, -1, 1u);
      p_DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceContext;
      if ( v257 )
      {
        v209 = v249;
        if ( v249 )
        {
          if ( v250 && (*((_DWORD *)v249 + 11) & 2) != 0 )
          {
            if ( (v252 & 2) == 0 )
            {
              UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v249);
              v209 = v249;
              if ( UserAttr )
              {
                DC::RestoreAttributes(v249, UserAttr);
                v209 = v249;
              }
            }
            *((_DWORD *)v209 + 11) &= ~2u;
            v209 = v249;
            v250 = 0;
          }
          v211 = *(HDC *)v209;
          v244 = 0;
          if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
          {
            HmgDecrementExclusiveReferenceCountExFastOpt(v251, v249, v252, &v244);
          }
          else
          {
            v212 = v252;
            v213 = v249;
            if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
              v215 = *(PVOID **)(W32GetSessionState(v214) + 88);
            else
              v215 = &WPP_MAIN_CB.Queue.Wcb.DeviceContext;
            HmgDecrementExclusiveReferenceCountExFastOpt(v215, v213, v212, &v244);
          }
          if ( v244 )
            GrepDeleteDC(v211, 0x2000000u);
        }
      }
      v218 = v255;
      v219 = v256;
      v249 = 0LL;
      if ( *(__int64 **)(v255 + 8) != &v255 || (__int64 *)*v256 != &v255 )
        goto LABEL_426;
      *v256 = v255;
      *(_QWORD *)(v218 + 8) = v219;
      v220 = v249;
      v256 = &v255;
      v255 = (__int64)&v255;
      if ( !v249 )
        goto LABEL_393;
      if ( v250 && (*((_DWORD *)v249 + 11) & 2) != 0 )
      {
        if ( (v252 & 2) == 0 )
        {
          v221 = XDCOBJ::GetUserAttr((XDCOBJ *)&v249);
          v220 = v249;
          if ( v221 )
          {
            DC::RestoreAttributes(v249, v221);
            v220 = v249;
          }
        }
        *((_DWORD *)v220 + 11) &= ~2u;
        v220 = v249;
        v250 = 0;
      }
      v222 = *(HDC *)v220;
      v244 = 0;
      if ( !(unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      {
        v223 = v252;
        v224 = v249;
        if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
          p_DeviceContext = *(PVOID **)(W32GetSessionState(v225) + 88);
LABEL_389:
        HmgDecrementExclusiveReferenceCountExFastOpt(p_DeviceContext, v224, v223, &v244);
        goto LABEL_391;
      }
    }
    else
    {
      p_DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceContext;
      v238 = v255;
      v239 = v256;
      v249 = 0LL;
      if ( *(__int64 **)(v255 + 8) != &v255 || (__int64 *)*v256 != &v255 )
        goto LABEL_426;
      *v256 = v255;
      *(_QWORD *)(v238 + 8) = v239;
      v240 = v249;
      v256 = &v255;
      v255 = (__int64)&v255;
      if ( !v249 )
        goto LABEL_393;
      if ( v250 && (*((_DWORD *)v249 + 11) & 2) != 0 )
      {
        if ( (v252 & 2) == 0 )
        {
          v241 = XDCOBJ::GetUserAttr((XDCOBJ *)&v249);
          v240 = v249;
          if ( v241 )
          {
            DC::RestoreAttributes(v249, v241);
            v240 = v249;
          }
        }
        *((_DWORD *)v240 + 11) &= ~2u;
        v240 = v249;
        v250 = 0;
      }
      v222 = *(HDC *)v240;
      v244 = 0;
      if ( !(unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      {
        v223 = v252;
        v224 = v249;
        if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
          p_DeviceContext = *(PVOID **)(W32GetSessionState(v242) + 88);
        goto LABEL_389;
      }
    }
    HmgDecrementExclusiveReferenceCountExFastOpt(v251, v249, v252, &v244);
LABEL_391:
    if ( v244 )
      GrepDeleteDC(v222, 0x2000000u);
LABEL_393:
    v226 = v253;
    v227 = v254;
    if ( *(__int64 **)(v253 + 8) != &v253 || *v254 != &v253 )
      goto LABEL_426;
    v207 = v246;
    *v254 = (_QWORD *)v253;
    *(_QWORD *)(v226 + 8) = v227;
    goto LABEL_396;
  }
  if ( GreSetDCOwnerEx((struct HOBJ__ *)v39[2], 0x80000002, 0, 0) )
  {
    v192 = (__int64 *)PsGetCurrentThreadWin32Thread();
    if ( v192 )
      v194 = *v192;
    else
      v194 = 0LL;
    v39[7] = v194;
    v39[8] = 0LL;
    v195 = W32GetUserSessionState(v194, v193);
    --*(_DWORD *)(v195 + 19660);
    v196 = v39[7];
    if ( v196 )
      v197 = *(_QWORD *)(v196 + 464);
    else
      v197 = v39[8];
    UpdateDCEInUseCount(1LL, v197);
    if ( v258 )
    {
      v200 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v199, v198) + 24) + 2600LL);
      if ( v200 )
      {
        if ( v200() >= 0 )
        {
          StockObject = GreGetStockObject(13);
          v202 = v39[2];
          v203 = StockObject;
          v206 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v205, v204) + 24)
                                                         + 2608LL);
          if ( v206 )
            v206(v202, v203);
        }
      }
    }
    goto LABEL_356;
  }
  *((_DWORD *)v39 + 12) &= ~0x1000u;
  DestroyCacheDC(v39);
LABEL_371:
  v216 = W32GetUserSessionState(i, v27);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v216 + 56968) + 48LL));
  return 0LL;
}
