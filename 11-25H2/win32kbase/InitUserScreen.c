/*
 * XREFs of InitUserScreen @ 0x140167940
 * Callers:
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     GreCreateCompatibleDC @ 0x140041620 (GreCreateCompatibleDC.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     CreateEmptyRgnPublic @ 0x1400899B0 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x140089BB0 (CreateCacheDC.c)
 *     GreSetDCOwnerEx @ 0x14008A010 (GreSetDCOwnerEx.c)
 *     xxxODI_ColorInit @ 0x1400A8E40 (xxxODI_ColorInit.c)
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x1400A9270 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x1400CEB20 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400D0120 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GreSelectFont @ 0x1400F8710 (GreSelectFont.c)
 *     GreGetSystemFont @ 0x14014D130 (GreGetSystemFont.c)
 *     GreMarkDCUnreadable @ 0x140157AF4 (GreMarkDCUnreadable.c)
 *     ApiSetEditionInitGlobalCursorSizes @ 0x14019591C (ApiSetEditionInitGlobalCursorSizes.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline @ 0x1401AEC48 (Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 InitUserScreen()
{
  __int64 v0; // rcx
  void *v1; // rdx
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  HDC DisplayDC; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  HDC CompatibleDC; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  HDC v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  HDC v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  _BOOL8 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int16 v67; // bx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 i; // rcx
  __int64 v72; // rcx
  __int16 v73; // bx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int16 v80; // bx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 EmptyRgnPublic; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rbx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rbx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r13
  __int64 v157; // rbx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r12
  __int64 v163; // rbx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r15
  __int64 v169; // rbx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r14
  __int64 v175; // rbx
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rsi
  __int64 v181; // rbx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rdi
  __int64 v187; // rbx
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r8
  bool v193; // cf
  int v194; // edx
  int v195; // ecx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rax
  __int64 v199; // rdi
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rax
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rcx
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // rdx
  __int64 v212; // rdx
  __int64 v213; // rdx
  __int64 v214; // rcx
  int (*v215)(void); // rax
  __int64 v216; // rdx
  __int64 v217; // rcx
  void (*v218)(void); // rax
  __int64 v220; // [rsp+40h] [rbp-69h] BYREF
  __int64 v221; // [rsp+48h] [rbp-61h]
  __int64 v222; // [rsp+50h] [rbp-59h]
  __int64 v223; // [rsp+58h] [rbp-51h]
  __int64 v224; // [rsp+60h] [rbp-49h]
  __int64 v225; // [rsp+68h] [rbp-41h]
  __int64 v226; // [rsp+70h] [rbp-39h]
  __int64 v227; // [rsp+78h] [rbp-31h]
  __int64 v228; // [rsp+80h] [rbp-29h]
  __int64 v229; // [rsp+88h] [rbp-21h]
  __int64 v230; // [rsp+90h] [rbp-19h]
  __int64 v231; // [rsp+98h] [rbp-11h]
  PCUNICODE_STRING Source; // [rsp+A0h] [rbp-9h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v234; // [rsp+B8h] [rbp+Fh]
  bool v235; // [rsp+110h] [rbp+67h]
  __int64 v236; // [rsp+118h] [rbp+6Fh]
  __int64 v237; // [rsp+120h] [rbp+77h]
  __int64 v238; // [rsp+128h] [rbp+7Fh]

  v222 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v234 = -1LL;
  Source = CreateProfileUserName(BugCheckParameter2);
  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v0, WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      11,
      (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
  }
  v7 = *(_QWORD *)(W32GetUserSessionState(v0, v1) + 19872);
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
  *(_DWORD *)(v7 + 5100) = 1;
  *(_DWORD *)(v10 + 5204) = 1;
  *(_QWORD *)(v7 + 5120) = GreGetSystemFont(1LL);
  *(_QWORD *)(v10 + 5224) = GreGetSystemFont(0LL);
  v13 = W32GetUserSessionState(v12, v11);
  DisplayDC = GreCreateDisplayDC(*(HDEV *)(*(_QWORD *)(v13 + 56968) + 48LL), 0, 0);
  v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 56968);
  *(_QWORD *)(v17 + 64) = DisplayDC;
  v20 = *(_QWORD *)(W32GetUserSessionState(v17, v18) + 56968);
  if ( !*(_QWORD *)(v20 + 64) )
    goto LABEL_9;
  v22 = *(_QWORD *)(v7 + 5120);
  v23 = W32GetUserSessionState(v20, v19);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v23 + 56968) + 64LL), v22);
  v26 = W32GetUserSessionState(v25, v24);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(*(_QWORD *)(v26 + 56968) + 64LL), 0, 0, 0);
  v29 = W32GetUserSessionState(v28, v27);
  CompatibleDC = GreCreateCompatibleDC(*(HDC *)(*(_QWORD *)(v29 + 56968) + 64LL));
  v33 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 56968);
  *(_QWORD *)(v33 + 72) = CompatibleDC;
  v36 = *(_QWORD *)(W32GetUserSessionState(v33, v34) + 56968);
  if ( !*(_QWORD *)(v36 + 72) )
    goto LABEL_9;
  v37 = *(_QWORD *)(v7 + 5120);
  v38 = W32GetUserSessionState(v36, v35);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v38 + 56968) + 72LL), v37);
  v41 = W32GetUserSessionState(v40, v39);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(*(_QWORD *)(v41 + 56968) + 72LL), 0, 0, 0);
  v44 = W32GetUserSessionState(v43, v42);
  v45 = GreCreateCompatibleDC(*(HDC *)(*(_QWORD *)(v44 + 56968) + 64LL));
  *(_QWORD *)(W32GetUserSessionState(v47, v46) + 43248) = v45;
  v50 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 43248);
  v53 = W32GetUserSessionState(v52, v51);
  v54 = GreCreateCompatibleDC(*(HDC *)(*(_QWORD *)(v53 + 56968) + 64LL));
  *(_QWORD *)(W32GetUserSessionState(v56, v55) + 43256) = v54;
  v60 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 43256) != 0LL;
  v21 = v50 != 0 && v60;
  v235 = v50 != 0 && v60;
  if ( !v21 )
    goto LABEL_34;
  v61 = W32GetUserSessionState(v60, v59);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(v61 + 43248), 0, 0, 0);
  v64 = W32GetUserSessionState(v63, v62);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(v64 + 43256), 0, 0, 0);
  if ( (unsigned int)Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline() )
  {
    v66 = *(_QWORD *)(W32GetSessionState(v65) + 88);
    v67 = *(_WORD *)(v66 + 1080);
    v69 = *(_QWORD *)(W32GetUserSessionState(v66, v68) + 19872);
    ++*(_WORD *)(v69 + 7014);
    *(_WORD *)(v69 + 6998) = v67;
    for ( i = *(_QWORD *)(W32GetUserSessionState(v69, v70) + 36368); i; i = *(_QWORD *)(i + 360) )
      *(_WORD *)(i + 272) = v67;
  }
  else
  {
    v72 = *(_QWORD *)(W32GetSessionState(v65) + 88);
    v73 = *(_WORD *)(v72 + 1080);
    v75 = *(_QWORD *)(W32GetUserSessionState(v72, v74) + 19872);
    *(_WORD *)(v75 + 6998) = v73;
    v77 = *(_QWORD *)(W32GetUserSessionState(v75, v76) + 19872);
    ++*(_WORD *)(v77 + 7014);
    v79 = *(_QWORD *)(W32GetUserSessionState(v77, v78) + 19872);
    v80 = *(_WORD *)(v79 + 6998);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v79);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    *(_WORD *)(CurrentProcessWin32Process + 272) = v80;
  }
  if ( !(unsigned int)ApiSetEditionInitGlobalCursorSizes()
    || !(unsigned int)PreAllocateForPrimaryMonitorChange(v83, v82) )
  {
LABEL_9:
    v21 = 0;
    goto LABEL_34;
  }
  LOBYTE(v220) = 0;
  v221 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v220);
  if ( (int)zzzUpdateUserScreen(v85, v84) >= 0 )
  {
    if ( (_BYTE)v220 )
      --*(_DWORD *)(v221 + 28);
    EmptyRgnPublic = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v88, v87) + 63360) = EmptyRgnPublic;
    v226 = *(_QWORD *)(W32GetUserSessionState(v90, v89) + 63360);
    v91 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v93, v92) + 63368) = v91;
    v236 = *(_QWORD *)(W32GetUserSessionState(v95, v94) + 63368);
    v96 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v98, v97) + 63376) = v96;
    v227 = *(_QWORD *)(W32GetUserSessionState(v100, v99) + 63376);
    v101 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v103, v102) + 43088) = v101;
    v237 = *(_QWORD *)(W32GetUserSessionState(v105, v104) + 43088);
    v106 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v108, v107) + 43096) = v106;
    v228 = *(_QWORD *)(W32GetUserSessionState(v110, v109) + 43096);
    v111 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v113, v112) + 43080) = v111;
    v238 = *(_QWORD *)(W32GetUserSessionState(v115, v114) + 43080);
    v116 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v118, v117) + 43104) = v116;
    v229 = *(_QWORD *)(W32GetUserSessionState(v120, v119) + 43104);
    v121 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v123, v122) + 43112) = v121;
    v223 = *(_QWORD *)(W32GetUserSessionState(v125, v124) + 43112);
    v126 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v128, v127) + 43120) = v126;
    v230 = *(_QWORD *)(W32GetUserSessionState(v130, v129) + 43120);
    v131 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v133, v132) + 43128) = v131;
    v224 = *(_QWORD *)(W32GetUserSessionState(v135, v134) + 43128);
    v136 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v138, v137) + 43136) = v136;
    v231 = *(_QWORD *)(W32GetUserSessionState(v140, v139) + 43136);
    v141 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v143, v142) + 43144) = v141;
    v225 = *(_QWORD *)(W32GetUserSessionState(v145, v144) + 43144);
    v146 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v148, v147) + 43152) = v146;
    v220 = *(_QWORD *)(W32GetUserSessionState(v150, v149) + 43152);
    v151 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v153, v152) + 63312) = v151;
    v156 = *(_QWORD *)(W32GetUserSessionState(v155, v154) + 63312);
    v157 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v159, v158) + 63320) = v157;
    v162 = *(_QWORD *)(W32GetUserSessionState(v161, v160) + 63320);
    v163 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v165, v164) + 63328) = v163;
    v168 = *(_QWORD *)(W32GetUserSessionState(v167, v166) + 63328);
    v169 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v171, v170) + 63336) = v169;
    v174 = *(_QWORD *)(W32GetUserSessionState(v173, v172) + 63336);
    v175 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v177, v176) + 63344) = v175;
    v180 = *(_QWORD *)(W32GetUserSessionState(v179, v178) + 63344);
    v181 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v183, v182) + 63352) = v181;
    v186 = *(_QWORD *)(W32GetUserSessionState(v185, v184) + 63352);
    v187 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v189, v188) + 43064) = v187;
    v192 = *(_QWORD *)(W32GetUserSessionState(v191, v190) + 43064);
    v193 = v223 != 0;
    v223 = -v223;
    v194 = (v230 != 0) & (v229 != 0) & (v228 != 0) & (v227 != 0) & (v235 && v226 != 0) & (unsigned __int8)-(v236 != 0) & (unsigned __int8)-(v237 != 0) & (unsigned __int8)-(v238 != 0) & (unsigned __int8)-v193;
    v193 = v224 != 0;
    v224 = -v224;
    v195 = (v231 != 0) & (v193 ? v194 : 0);
    v193 = v225 != 0;
    v225 = -v225;
    v196 = (v174 != 0) & (unsigned __int8)(v168 != 0 && v162 != 0 && v156 != 0 && (v220 != 0) & (v193 ? v195 : 0));
    v197 = (v186 != 0) & (v180 != 0 ? v196 : 0);
    v21 = v192 != 0 ? v197 : 0;
    v198 = W32GetUserSessionState(v197, v196);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v198 + 56968) + 48LL));
    v199 = 5LL;
    do
    {
      v201 = (unsigned int)-(CreateCacheDC(0LL, 0x802u, 0LL) != 0);
      v21 &= v201;
      --v199;
    }
    while ( v199 );
    v202 = W32GetUserSessionState(v201, v200);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v202 + 56968) + 48LL));
    if ( v21 )
    {
      v205 = W32GetUserSessionState(v204, v203);
      GreMarkDCUnreadable(*(_QWORD *)(*(_QWORD *)(v205 + 56968) + 64LL));
      v208 = *(_QWORD *)(W32GetUserSessionState(v207, v206) + 19872);
      *(_DWORD *)(v208 + 1984) = 0;
      v210 = *(_QWORD *)(W32GetUserSessionState(v208, v209) + 19872);
      *(_DWORD *)(v210 + 2164) = InitSafeBootMode;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v210, v211) + 19872) + 2188LL) = 0;
      xxxODI_ColorInit(Source, v212);
      v215 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v214, v213) + 48) + 3680LL);
      if ( v215 )
      {
        if ( v215() >= 0 )
        {
          v218 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v217, v216) + 48) + 3688LL);
          if ( v218 )
            v218();
        }
      }
    }
  }
  else
  {
    v21 = 0;
    if ( (_BYTE)v220 )
      --*(_DWORD *)(v221 + 28);
  }
LABEL_34:
  if ( v234 != -1 )
    PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter2);
  return v21;
}
