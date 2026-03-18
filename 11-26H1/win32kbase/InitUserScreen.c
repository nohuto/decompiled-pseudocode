/*
 * XREFs of InitUserScreen @ 0x1401D1E4C
 * Callers:
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreCreateCompatibleDC @ 0x14003AF40 (GreCreateCompatibleDC.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14006C700 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CreateEmptyRgnPublic @ 0x140081A30 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x140081BD0 (CreateCacheDC.c)
 *     GreSetDCOwnerEx @ 0x140081F10 (GreSetDCOwnerEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxODI_ColorInit @ 0x1400E0F30 (xxxODI_ColorInit.c)
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x1400E11C0 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14011DB50 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     GreSelectFont @ 0x14013C72C (GreSelectFont.c)
 *     GreGetSystemFont @ 0x14018DC00 (GreGetSystemFont.c)
 *     Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline @ 0x1401D1D9C (Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 InitUserScreen()
{
  int v0; // ecx
  int v1; // r8d
  struct _UNICODE_STRING *ProfileUserName; // r12
  int v3; // edx
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  __int64 DisplayDC; // rbx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rcx
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r8d
  unsigned int v28; // r14d
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rax
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rax
  HDC CompatibleDC; // rbx
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rcx
  int v44; // edx
  int v45; // r8d
  __int64 v46; // rcx
  int v47; // r8d
  __int64 v48; // rbx
  __int64 v49; // rax
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // rax
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  __int64 v57; // rax
  HDC v58; // rbx
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  __int64 v65; // rdi
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  __int64 v69; // rax
  HDC v70; // rbx
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  int v77; // ecx
  int v78; // r8d
  __int64 v79; // rax
  int v80; // edx
  int v81; // ecx
  int v82; // r8d
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int16 v86; // bx
  int v87; // edx
  int v88; // r8d
  __int64 v89; // rcx
  int v90; // edx
  int v91; // r8d
  __int64 i; // rcx
  __int64 v93; // rcx
  __int16 v94; // bx
  int v95; // edx
  int v96; // r8d
  __int64 v97; // rcx
  int v98; // edx
  int v99; // r8d
  __int64 v100; // rcx
  int v101; // edx
  int v102; // r8d
  __int64 v103; // rcx
  __int16 v104; // bx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v106; // rcx
  int v107; // r8d
  int (*v108)(void); // rax
  unsigned int (*v109)(void); // rax
  int v110; // r8d
  int v111; // edx
  int v112; // ecx
  int v113; // r8d
  struct HOBJ__ *EmptyRgnPublic; // rbx
  int v115; // edx
  int v116; // ecx
  int v117; // r8d
  int v118; // edx
  int v119; // ecx
  int v120; // r8d
  __int64 v121; // rdi
  struct HOBJ__ *v122; // rbx
  int v123; // edx
  int v124; // ecx
  int v125; // r8d
  int v126; // edx
  int v127; // ecx
  int v128; // r8d
  int v129; // esi
  struct HOBJ__ *v130; // rbx
  int v131; // edx
  int v132; // ecx
  int v133; // r8d
  int v134; // edx
  int v135; // ecx
  int v136; // r8d
  __int64 v137; // rdi
  struct HOBJ__ *v138; // rbx
  int v139; // edx
  int v140; // ecx
  int v141; // r8d
  int v142; // edx
  int v143; // ecx
  int v144; // r8d
  int v145; // r14d
  struct HOBJ__ *v146; // rbx
  int v147; // edx
  int v148; // ecx
  int v149; // r8d
  int v150; // edx
  int v151; // ecx
  int v152; // r8d
  __int64 v153; // rdi
  struct HOBJ__ *v154; // rbx
  int v155; // edx
  int v156; // ecx
  int v157; // r8d
  int v158; // edx
  int v159; // ecx
  int v160; // r8d
  int v161; // esi
  struct HOBJ__ *v162; // rbx
  int v163; // edx
  int v164; // ecx
  int v165; // r8d
  int v166; // edx
  int v167; // ecx
  int v168; // r8d
  __int64 v169; // rdi
  struct HOBJ__ *v170; // rbx
  int v171; // edx
  int v172; // ecx
  int v173; // r8d
  int v174; // edx
  int v175; // ecx
  int v176; // r8d
  int v177; // r14d
  struct HOBJ__ *v178; // rbx
  int v179; // edx
  int v180; // ecx
  int v181; // r8d
  int v182; // edx
  int v183; // ecx
  int v184; // r8d
  __int64 v185; // rdi
  struct HOBJ__ *v186; // rbx
  int v187; // edx
  int v188; // ecx
  int v189; // r8d
  int v190; // edx
  int v191; // ecx
  int v192; // r8d
  int v193; // esi
  struct HOBJ__ *v194; // rbx
  int v195; // edx
  int v196; // ecx
  int v197; // r8d
  int v198; // edx
  int v199; // ecx
  int v200; // r8d
  __int64 v201; // rdi
  struct HOBJ__ *v202; // rbx
  int v203; // edx
  int v204; // ecx
  int v205; // r8d
  int v206; // edx
  int v207; // ecx
  int v208; // r8d
  int v209; // r14d
  struct HOBJ__ *v210; // rbx
  int v211; // edx
  int v212; // ecx
  int v213; // r8d
  int v214; // edx
  int v215; // ecx
  int v216; // r8d
  __int64 v217; // rdi
  struct HOBJ__ *v218; // rbx
  int v219; // edx
  int v220; // ecx
  int v221; // r8d
  int v222; // edx
  int v223; // ecx
  int v224; // r8d
  int v225; // r15d
  struct HOBJ__ *v226; // rbx
  int v227; // edx
  int v228; // ecx
  int v229; // r8d
  int v230; // edx
  int v231; // ecx
  int v232; // r8d
  __int64 v233; // rdi
  struct HOBJ__ *v234; // rbx
  int v235; // edx
  int v236; // ecx
  int v237; // r8d
  int v238; // edx
  int v239; // ecx
  int v240; // r8d
  int v241; // esi
  struct HOBJ__ *v242; // rbx
  int v243; // edx
  int v244; // ecx
  int v245; // r8d
  int v246; // edx
  int v247; // ecx
  int v248; // r8d
  __int64 v249; // rax
  __int64 SessionState; // rax
  __int64 v251; // rdx
  int v252; // r8d
  __int64 v253; // rbx
  __int64 v254; // rcx
  __int64 v255; // rax
  __int64 v256; // rdx
  int v257; // r8d
  int v258; // ecx
  int v259; // r8d
  HDC v260; // rbx
  __int64 v261; // rcx
  __int64 v262; // rdx
  int v263; // r8d
  int v264; // edx
  int v265; // ecx
  int v266; // r8d
  __int64 v267; // rcx
  int v268; // edx
  int v269; // r8d
  __int64 v270; // rcx
  int v271; // edx
  int v272; // r8d
  int v273; // edx
  int v274; // r8d
  __int64 v275; // rcx
  int (*v276)(void); // rax
  __int64 v277; // rcx
  void (*v278)(void); // rax
  _BYTE v280[8]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v281; // [rsp+50h] [rbp-31h]
  __int64 v282; // [rsp+58h] [rbp-29h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-21h] BYREF
  __int64 v284; // [rsp+70h] [rbp-11h]
  unsigned int *v285[8]; // [rsp+78h] [rbp-9h] BYREF
  HSEMAPHORE v286; // [rsp+E8h] [rbp+67h] BYREF

  v284 = -1LL;
  v282 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  ProfileUserName = CreateProfileUserName(BugCheckParameter2);
  v3 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v0, (_DWORD)WPP_GLOBAL_Control, v1);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      11,
      (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
  }
  v9 = *(_QWORD *)(W32GetUserSessionState(v0, v3, v1) + 19904);
  v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 19904);
  *(_DWORD *)(v9 + 5100) = 1;
  *(_DWORD *)(v13 + 5204) = 1;
  *(_QWORD *)(v9 + 5120) = GreGetSystemFont(1LL);
  *(_QWORD *)(v13 + 5224) = GreGetSystemFont(0LL);
  v17 = W32GetUserSessionState(v15, v14, v16);
  DisplayDC = GreCreateDisplayDC(*(HDEV *)(*(_QWORD *)(v17 + 56968) + 40LL), 0, 0);
  v22 = *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 56968);
  *(_QWORD *)(v22 + 56) = DisplayDC;
  v26 = *(_QWORD *)(W32GetUserSessionState(v22, v23, v24) + 56968);
  if ( !*(_QWORD *)(v26 + 56) )
    goto LABEL_9;
  v29 = *(_QWORD *)(v9 + 5120);
  v30 = W32GetUserSessionState(v26, v25, v27);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v30 + 56968) + 56LL), v29);
  v34 = W32GetUserSessionState(v32, v31, v33);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(*(_QWORD *)(v34 + 56968) + 56LL), 0, 0, 0);
  v38 = W32GetUserSessionState(v36, v35, v37);
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(v38 + 56968) + 56LL));
  v43 = *(_QWORD *)(W32GetUserSessionState(v41, v40, v42) + 56968);
  *(_QWORD *)(v43 + 64) = CompatibleDC;
  v46 = *(_QWORD *)(W32GetUserSessionState(v43, v44, v45) + 56968);
  if ( !*(_QWORD *)(v46 + 64) )
    goto LABEL_9;
  v48 = *(_QWORD *)(v9 + 5120);
  v49 = W32GetUserSessionState(v46, v25, v47);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v49 + 56968) + 64LL), v48);
  v53 = W32GetUserSessionState(v51, v50, v52);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(*(_QWORD *)(v53 + 56968) + 64LL), 0, 0, 0);
  v57 = W32GetUserSessionState(v55, v54, v56);
  v58 = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(v57 + 56968) + 56LL));
  *(_QWORD *)(W32GetUserSessionState(v60, v59, v61) + 43248) = v58;
  v65 = *(_QWORD *)(W32GetUserSessionState(v63, v62, v64) + 43248);
  v69 = W32GetUserSessionState(v67, v66, v68);
  v70 = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(v69 + 56968) + 56LL));
  *(_QWORD *)(W32GetUserSessionState(v72, v71, v73) + 43256) = v70;
  v28 = (v65 != 0) & (*(_QWORD *)(W32GetUserSessionState(v75, v74, v76) + 43256) != 0LL);
  if ( !v28 )
    goto LABEL_39;
  v79 = W32GetUserSessionState(v77, v25, v78);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(v79 + 43248), 0, 0, 0);
  v83 = W32GetUserSessionState(v81, v80, v82);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(v83 + 43256), 0, 0, 0);
  if ( (unsigned int)Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline() )
  {
    v85 = *(_QWORD *)(W32GetSessionState(v84) + 88);
    v86 = *(_WORD *)(v85 + 1168);
    v89 = *(_QWORD *)(W32GetUserSessionState(v85, v87, v88) + 19904);
    ++*(_WORD *)(v89 + 7014);
    *(_WORD *)(v89 + 6998) = v86;
    for ( i = *(_QWORD *)(W32GetUserSessionState(v89, v90, v91) + 36400); i; i = *(_QWORD *)(i + 368) )
      *(_WORD *)(i + 272) = v86;
  }
  else
  {
    v93 = *(_QWORD *)(W32GetSessionState(v84) + 88);
    v94 = *(_WORD *)(v93 + 1168);
    v97 = *(_QWORD *)(W32GetUserSessionState(v93, v95, v96) + 19904);
    *(_WORD *)(v97 + 6998) = v94;
    v100 = *(_QWORD *)(W32GetUserSessionState(v97, v98, v99) + 19904);
    ++*(_WORD *)(v100 + 7014);
    v103 = *(_QWORD *)(W32GetUserSessionState(v100, v101, v102) + 19904);
    v104 = *(_WORD *)(v103 + 6998);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v103);
    if ( CurrentProcessWin32Process )
    {
      i = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    *(_WORD *)(CurrentProcessWin32Process + 272) = v104;
  }
  if ( (v106 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(i) + 48), (v108 = *(int (**)(void))(v106 + 2360)) != 0LL)
    && v108() >= 0
    && ((v109 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v106) + 48) + 2368LL)) == 0LL
     || !v109())
    || !(unsigned int)PreAllocateForPrimaryMonitorChange(v106, v25, v107) )
  {
LABEL_9:
    v28 = 0;
    goto LABEL_39;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v280, v25, v110);
  if ( (int)zzzUpdateUserScreen(v112, v111, v113) >= 0 )
  {
    if ( v280[0] )
      --*(_DWORD *)(v281 + 28);
    EmptyRgnPublic = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v116, v115, v117) + 63344) = EmptyRgnPublic;
    v121 = *(_QWORD *)(W32GetUserSessionState(v119, v118, v120) + 63344);
    v122 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v124, v123, v125) + 63352) = v122;
    v129 = (v121 != 0 ? v28 : 0) & (*(_QWORD *)(W32GetUserSessionState(v127, v126, v128) + 63352) != 0LL);
    v130 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v132, v131, v133) + 63360) = v130;
    v137 = *(_QWORD *)(W32GetUserSessionState(v135, v134, v136) + 63360);
    v138 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v140, v139, v141) + 43104) = v138;
    v145 = (v137 != 0 ? v129 : 0) & (*(_QWORD *)(W32GetUserSessionState(v143, v142, v144) + 43104) != 0LL);
    v146 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v148, v147, v149) + 43112) = v146;
    v153 = *(_QWORD *)(W32GetUserSessionState(v151, v150, v152) + 43112);
    v154 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v156, v155, v157) + 43120) = v154;
    v161 = (v153 != 0 ? v145 : 0) & (*(_QWORD *)(W32GetUserSessionState(v159, v158, v160) + 43120) != 0LL);
    v162 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v164, v163, v165) + 43128) = v162;
    v169 = *(_QWORD *)(W32GetUserSessionState(v167, v166, v168) + 43128);
    v170 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v172, v171, v173) + 43136) = v170;
    v177 = (v169 != 0 ? v161 : 0) & (*(_QWORD *)(W32GetUserSessionState(v175, v174, v176) + 43136) != 0LL);
    v178 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v180, v179, v181) + 43144) = v178;
    v185 = *(_QWORD *)(W32GetUserSessionState(v183, v182, v184) + 43144);
    v186 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v188, v187, v189) + 43152) = v186;
    v193 = (v185 != 0 ? v177 : 0) & (*(_QWORD *)(W32GetUserSessionState(v191, v190, v192) + 43152) != 0LL);
    v194 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v196, v195, v197) + 63296) = v194;
    v201 = *(_QWORD *)(W32GetUserSessionState(v199, v198, v200) + 63296);
    v202 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v204, v203, v205) + 63304) = v202;
    v209 = (v201 != 0 ? v193 : 0) & (*(_QWORD *)(W32GetUserSessionState(v207, v206, v208) + 63304) != 0LL);
    v210 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v212, v211, v213) + 63312) = v210;
    v217 = *(_QWORD *)(W32GetUserSessionState(v215, v214, v216) + 63312);
    v218 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v220, v219, v221) + 63320) = v218;
    v225 = (v217 != 0 ? v209 : 0) & (*(_QWORD *)(W32GetUserSessionState(v223, v222, v224) + 63320) != 0LL);
    v226 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v228, v227, v229) + 63328) = v226;
    v233 = *(_QWORD *)(W32GetUserSessionState(v231, v230, v232) + 63328);
    v234 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v236, v235, v237) + 63336) = v234;
    v241 = (v233 != 0 ? v225 : 0) & (*(_QWORD *)(W32GetUserSessionState(v239, v238, v240) + 63336) != 0LL);
    v242 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v244, v243, v245) + 43088) = v242;
    v249 = W32GetUserSessionState(v247, v246, v248);
    v28 = *(_QWORD *)(v249 + 43088) != 0LL ? v241 : 0;
    SessionState = W32GetSessionState(-*(_QWORD *)(v249 + 43088));
    GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v251, v252);
    v253 = 5LL;
    do
    {
      v254 = (unsigned int)-(CreateCacheDC(0LL, 0x802u, 0LL) != 0);
      v28 &= v254;
      --v253;
    }
    while ( v253 );
    v255 = W32GetSessionState(v254);
    GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v255 + 88), v256, v257);
    if ( v28 )
    {
      v260 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v258, v25, v259) + 56968) + 56LL);
      SEMOBJ<20>::SEMOBJ<20>(&v286);
      DCOBJA::DCOBJA((DCOBJA *)v285, v260);
      if ( v285[0] )
      {
        *(_DWORD *)(*((_QWORD *)v285[0] + 62) + 112LL) |= 0x10000000u;
        v261 = *((_QWORD *)v285[0] + 6);
        *(_DWORD *)(v261 + 172) |= 0x10000000u;
        *(_DWORD *)(v261 + 180) |= 0x10000000u;
      }
      DCOBJA::~DCOBJA(v285);
      SEMOBJ<20>::vUnlock(&v286, v262, v263);
      v267 = *(_QWORD *)(W32GetUserSessionState(v265, v264, v266) + 19904);
      *(_DWORD *)(v267 + 1984) = 0;
      v270 = *(_QWORD *)(W32GetUserSessionState(v267, v268, v269) + 19904);
      *(_DWORD *)(v270 + 2164) = InitSafeBootMode;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v270, v271, v272) + 19904) + 2188LL) = 0;
      xxxODI_ColorInit(ProfileUserName, v273, v274);
      v276 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v275) + 48) + 3248LL);
      if ( v276 )
      {
        if ( v276() >= 0 )
        {
          v278 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v277) + 48) + 3256LL);
          if ( v278 )
            v278();
        }
      }
    }
  }
  else
  {
    v28 = 0;
    if ( v280[0] )
      --*(_DWORD *)(v281 + 28);
  }
LABEL_39:
  if ( v284 != -1 )
    PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter2, v25);
  return v28;
}
