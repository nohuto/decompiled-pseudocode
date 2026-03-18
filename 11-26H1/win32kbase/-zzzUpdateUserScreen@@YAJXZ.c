/*
 * XREFs of ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 * Callees:
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ?MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z @ 0x140036094 (-MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z.c)
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 *     EnforceColorDependentSettings @ 0x140080470 (EnforceColorDependentSettings.c)
 *     ApiSetEditionUpdateCurrentMonitorTopology @ 0x1400804F4 (ApiSetEditionUpdateCurrentMonitorTopology.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x14008055C (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     InitLoadResources @ 0x140080CE4 (InitLoadResources.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x140085250 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyMonitor @ 0x1401181C0 (DestroyMonitor.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14011D380 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     HdevFromMonitor @ 0x14017C240 (HdevFromMonitor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionHandleNonUniformHMonitorDpi @ 0x1402276CC (ApiSetEditionHandleNonUniformHMonitorDpi.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

__int64 __fastcall zzzUpdateUserScreen(int a1, int a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // r15
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  struct tagMONITOR **v12; // rsi
  int v13; // r8d
  unsigned int v14; // r12d
  int v15; // ecx
  char v16; // di
  bool v17; // r14
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edi
  unsigned int v25; // r14d
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int i; // edi
  int v31; // edx
  __int64 v32; // rcx
  int v33; // r8d
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rcx
  unsigned __int16 v38; // si
  unsigned __int16 v39; // di
  int v40; // edx
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rcx
  int v44; // r8d
  __int64 v45; // rbx
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  __int64 v49; // rcx
  int v50; // r8d
  __int64 j; // rdx
  BOOL v52; // ebx
  __int64 v53; // rcx
  int v54; // edx
  int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // r13
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  __int64 v61; // r8
  unsigned int v62; // ecx
  int v63; // edx
  _DWORD **v64; // rcx
  int v65; // edx
  int v66; // r8d
  int v67; // edi
  int v68; // esi
  int v69; // r14d
  int v70; // edx
  __int64 v71; // rcx
  int v72; // r8d
  int v73; // r15d
  _QWORD *k; // rbx
  _BOOL8 v75; // rbx
  int v76; // edx
  int v77; // ecx
  int v78; // r8d
  __int64 v79; // rcx
  int v80; // edx
  int v81; // r8d
  __int64 v82; // rax
  int v83; // edx
  struct _KEVENT *v84; // rcx
  int v85; // r8d
  int **v86; // rcx
  int v87; // ebx
  int v88; // edx
  int v89; // r8d
  __int64 v90; // rcx
  int v91; // edx
  int v92; // r8d
  __int64 v93; // rax
  int v94; // edx
  int v95; // ecx
  int v96; // r8d
  __int64 v97; // rax
  __int64 v98; // rcx
  int v99; // edx
  __int64 v100; // rcx
  int v101; // r8d
  int (*v102)(void); // rax
  __int64 v103; // rax
  int v104; // edx
  int v105; // ecx
  int v106; // r8d
  __int64 v107; // rdx
  __int64 v108; // rcx
  int v109; // r8d
  int v110; // edx
  __int64 v111; // rcx
  int v112; // r8d
  __int64 v113; // rbx
  int v114; // edx
  __int64 v115; // rcx
  __int64 n; // r8
  __int64 v117; // rax
  char DeviceCaps; // bl
  int v119; // edx
  int v120; // ecx
  int v121; // r8d
  __int64 v122; // rcx
  int v123; // edx
  int v124; // r8d
  __int64 v125; // rax
  char v126; // bl
  int v127; // edx
  int v128; // ecx
  int v129; // r8d
  __int64 v130; // rcx
  int v131; // edx
  int v132; // r8d
  __int64 v133; // rbx
  int v134; // edx
  int v135; // ecx
  int v136; // r8d
  __int64 v137; // rcx
  int v138; // edx
  int v139; // r8d
  __int64 v140; // rcx
  int v141; // edx
  int v142; // r8d
  __int64 v143; // rcx
  int v144; // edx
  int v145; // r8d
  __int64 v146; // rcx
  int v147; // edx
  int v148; // r8d
  __int64 v149; // rcx
  __int64 v151; // rcx
  int v152; // eax
  int v153; // eax
  int v154; // eax
  int v155; // eax
  unsigned int v156; // eax
  int v157; // ebx
  int v158; // edx
  __int64 v159; // rcx
  int v160; // r8d
  __int64 m; // rdi
  struct HOBJ__ *RectRgnIndirect; // rsi
  __int64 v163; // rcx
  HRGN v164; // rbx
  int v165; // edx
  int v166; // r8d
  __int64 v167; // rax
  struct _HEAD *v168; // rdi
  struct tagMONITOR **v169; // r14
  unsigned int v170; // eax
  __int64 ii; // r9
  struct tagMONITOR *v172; // rbx
  int v173; // edx
  __int64 v174; // rcx
  __int64 v175; // rax
  void (*v176)(void); // rax
  __int128 Buf1; // [rsp+48h] [rbp-38h] BYREF
  __int128 Buf2; // [rsp+58h] [rbp-28h] BYREF
  __int128 v179; // [rsp+68h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 56968);
  v4 = *(_QWORD *)(v3 + 16);
  v7 = *(_QWORD *)(W32GetUserSessionState(v3, v5, v6) + 56968);
  v8 = *(_QWORD *)(v7 + 104);
  v12 = (struct tagMONITOR **)(*(_QWORD *)(W32GetUserSessionState(v7, v9, v10) + 56968) + 104LL);
  v14 = 0;
  v15 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v16 = 0;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v13);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v16;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      10,
      (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v15, v11, v13) + 71192) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 458LL);
  if ( !*(_QWORD *)(W32GetUserSessionState(v22, v21, v23) + 71200) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 459LL);
  v24 = 0;
  v25 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    v25 = W32SetCurrentThreadDpiAwarenessContext(18LL);
    v24 = 1;
  }
  InitLoadResources(1LL);
  if ( v24 )
    W32SetCurrentThreadDpiAwarenessContext(v25);
  while ( v8 )
  {
    v168 = (struct _HEAD *)v8;
    v169 = (struct tagMONITOR **)(v8 + 56);
    v8 = *(_QWORD *)(v8 + 56);
    v170 = HdevFromMonitor(v168);
    if ( v170 == -1 )
    {
      DestroyMonitor(v168);
    }
    else
    {
      SetMonitorData(v168, v170);
      v12 = v169;
    }
  }
  for ( i = 0; i < *(_DWORD *)(v4 + 20); ++i )
  {
    if ( !MonitorFromHdev(*(void **)(56LL * i + v4 + 40), (__int64)v26, v28, v29) )
    {
      v172 = SetMonitorData(0LL, i);
      if ( v172 )
      {
        v174 = *(_QWORD *)(W32GetUserSessionState(v27, (_DWORD)v26, v28) + 56968);
        if ( *(_QWORD *)(v174 + 104) )
        {
          v27 = *((_QWORD *)v172 + 6);
          v26 = *(v12 - 2);
          v26[2] = v27;
          *v12 = v172;
        }
        else
        {
          v26 = *(_QWORD **)(W32GetUserSessionState(v174, v173, v28) + 56968);
          v27 = *v26;
          *(_QWORD *)(*v26 + 16LL) = *((_QWORD *)v172 + 6);
          v26[13] = v172;
        }
        v12 = (struct tagMONITOR **)((char *)v172 + 56);
      }
      else
      {
        v14 = -1073741801;
      }
    }
  }
  v32 = *(_QWORD *)(W32GetUserSessionState(v27, (_DWORD)v26, v28) + 56968);
  if ( !*(_QWORD *)(v32 + 104) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 532LL);
  v34 = *(_QWORD *)(W32GetUserSessionState(v32, v31, v33) + 56968);
  if ( !*(_QWORD *)(v34 + 96) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 533LL);
  v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v35, v34, v36) + 56968) + 104LL) + 40LL);
  v38 = *(_WORD *)(v37 + 60);
  v39 = v38;
  v43 = *(_QWORD *)(W32GetUserSessionState(v37, v40, v41) + 56968);
  v45 = *(_QWORD *)(v43 + 104);
  while ( v45 )
  {
    if ( v38 && v38 != *(_WORD *)(*(_QWORD *)(v45 + 40) + 60LL) )
    {
      v38 = 0;
      ApiSetEditionHandleNonUniformHMonitorDpi();
    }
    v175 = *(_QWORD *)(v45 + 40);
    v45 = *(_QWORD *)(v45 + 56);
    LODWORD(v43) = *(unsigned __int16 *)(v175 + 60);
    if ( v39 < (unsigned __int16)v43 )
      LOWORD(v43) = v39;
    v39 = v43;
  }
  *(_DWORD *)(W32GetUserSessionState(v43, v42, v44) + 71248) = v38;
  v49 = *(_QWORD *)(W32GetUserSessionState(v47, v46, v48) + 56968);
  for ( j = *(_QWORD *)(v49 + 104); j; j = *(_QWORD *)(j + 56) )
    *(_WORD *)(*(_QWORD *)(j + 40) + 62LL) = v39;
  v52 = (*(_DWORD *)(v4 + 16) & 1) == 0;
  v53 = *(_QWORD *)(W32GetUserSessionState(v49, 0, v50) + 19904);
  *(_DWORD *)(v53 + 2220) = v52;
  v56 = W32GetUserSessionState(v53, v54, v55);
  v57 = GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(v56 + 56968) + 56LL), 38) & 0x100;
  Buf1 = 0LL;
  v61 = *(_QWORD *)(W32GetUserSessionState(v59, v58, v60) + 56968);
  v62 = *(_DWORD *)(v61 + 132) & 0xFFFFFFFD;
  v63 = v62 | ((_DWORD)v57 != 0 ? 2 : 0);
  *(_DWORD *)(v61 + 132) = v63;
  v64 = *(_DWORD ***)(W32GetUserSessionState(v62, v63, v61) + 56968);
  **v64 = 0;
  v67 = HIDWORD(Buf1);
  v68 = DWORD2(Buf1);
  v69 = DWORD1(Buf1);
  v71 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v64, v65, v66) + 56968);
  v73 = Buf1;
  for ( k = *(_QWORD **)(v71 + 104); k; k = (_QWORD *)k[7] )
  {
    v151 = k[5];
    if ( (*(_DWORD *)(v151 + 24) & 1) != 0 )
    {
      if ( v73 >= *(_DWORD *)(v151 + 28) )
        v73 = *(_DWORD *)(v151 + 28);
      v152 = *(_DWORD *)(v151 + 32);
      LODWORD(Buf1) = v73;
      if ( v69 >= v152 )
        v69 = v152;
      v153 = *(_DWORD *)(v151 + 36);
      DWORD1(Buf1) = v69;
      if ( v68 <= v153 )
        v68 = v153;
      v154 = *(_DWORD *)(v151 + 40);
      DWORD2(Buf1) = v68;
      if ( v67 <= v154 )
        v67 = v154;
      HIDWORD(Buf1) = v67;
      v151 = *(_QWORD *)(W32GetUserSessionState(v151, v70, v72) + 56968);
      ++**(_DWORD **)v151;
    }
    v71 = *(_QWORD *)(W32GetUserSessionState(v151, v70, v72) + 19904);
    if ( *(_DWORD *)(v71 + 2220) )
    {
      v71 = k[5];
      v155 = *(_DWORD *)(v71 + 24);
      if ( (_DWORD)v57 )
        v156 = v155 | 2;
      else
        v156 = v155 & 0xFFFFFFFD;
      *(_DWORD *)(v71 + 24) = v156;
    }
    else if ( (*(_DWORD *)(k[10] + 2156LL) & 0x100) != 0 )
    {
      *(_DWORD *)(k[5] + 24LL) |= 2u;
      v71 = *(_QWORD *)(W32GetUserSessionState(v71, v70, v72) + 56968);
      *(_DWORD *)(v71 + 132) |= 2u;
    }
  }
  Buf2 = *(_OWORD *)(**(_QWORD **)(W32GetUserSessionState(v71, v70, v72) + 56968) + 24LL);
  v75 = memcmp(&Buf1, &Buf2, 0x10uLL) == 0;
  v79 = *(_QWORD *)(W32GetUserSessionState(v77, v76, v78) + 56968);
  *(_DWORD *)(*(_QWORD *)v79 + 24LL) = v73;
  *(_DWORD *)(*(_QWORD *)v79 + 28LL) = v69;
  *(_DWORD *)(*(_QWORD *)v79 + 32LL) = v68;
  *(_DWORD *)(*(_QWORD *)v79 + 36LL) = v67;
  v82 = W32GetUserSessionState(v79, v80, v81);
  if ( *(_DWORD *)(v82 + 68756) )
  {
    v84 = *(struct _KEVENT **)(v82 + 68808);
    if ( v84 )
    {
      if ( !v75 )
        KeSetEvent(v84, 1, 0);
    }
  }
  v86 = *(int ***)(W32GetUserSessionState((_DWORD)v84, v83, v85) + 56968);
  v87 = **v86;
  v90 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v86, v88, v89) + 19904);
  *(_DWORD *)(v90 + 2216) = v87;
  v93 = W32GetUserSessionState(v90, v91, v92);
  CInputConfig::zzzOnDisplayStateChange(*(CInputConfig **)(v93 + 18680));
  v97 = W32GetUserSessionState(v95, v94, v96);
  memset((void *)(v97 + 14720), 0, 0x600uLL);
  v100 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v98) + 48);
  v102 = *(int (**)(void))(v100 + 3232);
  if ( v102 )
  {
    if ( v102() >= 0 )
    {
      v100 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v100) + 48);
      v176 = *(void (**)(void))(v100 + 3240);
      if ( v176 )
        v176();
    }
  }
  v179 = 0LL;
  v103 = W32GetUserSessionState(v100, v99, v101);
  SetOrCreateRectRgnIndirectPublic((HRGN *)(*(_QWORD *)(v103 + 56968) + 120LL), (unsigned int *)&v179);
  v108 = *(_QWORD *)(W32GetUserSessionState(v105, v104, v106) + 56968);
  if ( *(_QWORD *)(v108 + 120) )
  {
    v157 = 0;
    v159 = *(_QWORD *)(W32GetUserSessionState(v108, v107, v109) + 56968);
    for ( m = *(_QWORD *)(v159 + 104); m; m = *(_QWORD *)(m + 56) )
    {
      v159 = *(_QWORD *)(m + 40);
      if ( (*(_DWORD *)(v159 + 24) & 1) != 0 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect((int *)(v159 + 28));
        if ( RectRgnIndirect )
        {
          v163 = *(_QWORD *)(W32GetUserSessionState(v159, v158, v160) + 56968);
          v164 = *(HRGN *)(v163 + 120);
          v167 = W32GetUserSessionState(v163, v165, v166);
          v157 = GreCombineRgn(*(HRGN *)(*(_QWORD *)(v167 + 56968) + 120LL), v164, (HRGN)RectRgnIndirect, 2);
          GreDeleteObject((HRGN)RectRgnIndirect);
        }
      }
    }
    v107 = *(_QWORD *)(W32GetUserSessionState(v159, v158, v160) + 56968);
    LODWORD(v108) = *(_DWORD *)(v107 + 132) & 0xFFFFFFFE | (v157 == 2);
    *(_DWORD *)(v107 + 132) = v108;
  }
  v111 = *(_QWORD *)(W32GetUserSessionState(v108, v107, v109) + 56968);
  if ( (*(_DWORD *)(v111 + 132) & 1) != 0 )
  {
    v113 = 0LL;
  }
  else
  {
    v111 = *(_QWORD *)(W32GetUserSessionState(v111, v110, v112) + 56968);
    v113 = *(_QWORD *)(v111 + 120);
  }
  for ( n = *(_QWORD *)(W32GetUserSessionState(v111, v110, v112) + 63512); n; n = *(_QWORD *)(n + 8) )
  {
    for ( ii = *(_QWORD *)(n + 16); ii; ii = *(_QWORD *)(ii + 32) )
    {
      v115 = *(_QWORD *)(*(_QWORD *)(ii + 8) + 24LL);
      *(_QWORD *)(*(_QWORD *)(v115 + 40) + 168LL) = v113;
    }
  }
  v117 = W32GetUserSessionState(v115, v114, 0);
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(v117 + 56968) + 56LL), 14);
  v122 = *(_QWORD *)(W32GetUserSessionState(v120, v119, v121) + 19904);
  *(_BYTE *)(v122 + 7002) = DeviceCaps;
  v125 = W32GetUserSessionState(v122, v123, v124);
  v126 = GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(v125 + 56968) + 56LL), 12);
  v130 = *(_QWORD *)(W32GetUserSessionState(v128, v127, v129) + 19904);
  *(_BYTE *)(v130 + 7003) = v126;
  v133 = *(_QWORD *)(W32GetUserSessionState(v130, v131, v132) + 19904);
  v137 = *(_QWORD *)(W32GetUserSessionState(v135, v134, v136) + 19904);
  LOWORD(v133) = *(unsigned __int8 *)(v137 + 7003) * *(unsigned __int8 *)(v133 + 7002);
  v140 = *(_QWORD *)(W32GetUserSessionState(v137, v138, v139) + 19904);
  *(_WORD *)(v140 + 6996) = v133;
  v143 = *(_QWORD *)(W32GetUserSessionState(v140, v141, v142) + 19904);
  LOWORD(v133) = *(_WORD *)(v143 + 6996);
  v146 = *(_QWORD *)(W32GetUserSessionState(v143, v144, v145) + 56968);
  *(_WORD *)(v146 + 128) = v133;
  v149 = *(_QWORD *)(W32GetUserSessionState(v146, v147, v148) + 19904);
  if ( (_DWORD)v57 )
    *(_DWORD *)(v149 + 7004) |= 1u;
  else
    *(_DWORD *)(v149 + 7004) &= ~1u;
  EnforceColorDependentSettings();
  if ( !(unsigned int)ApiSetEditionUpdateCurrentMonitorTopology() )
    return (unsigned int)-1073741801;
  return v14;
}
