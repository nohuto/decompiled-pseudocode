/*
 * XREFs of ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 * Callees:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x140014B10 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x140042AC0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreGetDeviceCaps @ 0x140043070 (GreGetDeviceCaps.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     ?MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z @ 0x1400A245C (-MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1400CDC30 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyMonitor @ 0x1400F63A0 (DestroyMonitor.c)
 *     InitLoadResources @ 0x14011FE88 (InitLoadResources.c)
 *     HdevFromMonitor @ 0x140146250 (HdevFromMonitor.c)
 *     EnforceColorDependentSettings @ 0x14014B5C0 (EnforceColorDependentSettings.c)
 *     GetPhysicalScreenRect @ 0x1401533EC (GetPhysicalScreenRect.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorNext@UtagMONITOR@@@tagMONITOR@@QEAAPEAU1@PEAU1@@Z @ 0x1401554EC (--4-$SharedMixedObjectPointerFieldpMonitorNext@UtagMONITOR@@@tagMONITOR@@QEAAPEAU1@PEAU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1401A2618 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F8B7C (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall zzzUpdateUserScreen(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // r12d
  void *v11; // rcx
  char v12; // di
  bool v13; // r14
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagMONITOR *v23; // rdi
  __int64 v24; // r14
  unsigned int v25; // eax
  unsigned int i; // ebx
  struct tagMONITOR *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int16 v36; // si
  unsigned __int16 v37; // di
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  int (*v42)(void); // rax
  __int64 v43; // rcx
  void (*v44)(void); // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 j; // rdx
  BOOL v50; // ebx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rdx
  _DWORD **v60; // rcx
  __int64 v61; // rdx
  signed int v62; // edi
  signed int v63; // esi
  signed int v64; // r14d
  signed int v65; // r15d
  __int64 v66; // rdx
  _QWORD *v67; // rbx
  __int64 v68; // rcx
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int128 *PhysicalScreenRect; // rax
  __int64 v77; // rdx
  __int128 v78; // xmm0
  __int64 v79; // rax
  __int64 v80; // rcx
  BOOL v81; // ebx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  struct _KEVENT *v86; // rcx
  int **v87; // rcx
  int v88; // ebx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rcx
  int (*v100)(void); // rax
  void (*v101)(void); // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  int v107; // ebx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 k; // rdi
  struct HOBJ__ *RectRgnIndirect; // rsi
  __int64 v112; // rcx
  HRGN v113; // rbx
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rbx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 m; // r8
  __int64 n; // r9
  __int64 v123; // rax
  char DeviceCaps; // bl
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rax
  char v130; // bl
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rbx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rcx
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rcx
  int (*v148)(void); // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 (*v151)(void); // rax
  __int128 v153; // [rsp+48h] [rbp-38h]
  __int128 v154; // [rsp+58h] [rbp-28h] BYREF
  __int128 v155; // [rsp+68h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
  v3 = *(_QWORD *)(v2 + 16);
  v5 = *(_QWORD *)(W32GetUserSessionState(v2, v4) + 56968);
  v6 = *(_QWORD *)(v5 + 112);
  v9 = *(_QWORD *)(W32GetUserSessionState(v5, v7) + 56968) + 112LL;
  v10 = 0;
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      10,
      (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v11, v8) + 71208) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 458LL);
  if ( !*(_QWORD *)(W32GetUserSessionState(v18, v17) + 71216) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 459LL);
  v19 = 0;
  v20 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    v20 = W32SetCurrentThreadDpiAwarenessContext(18);
    v19 = 1;
  }
  InitLoadResources(1LL);
  if ( v19 )
    W32SetCurrentThreadDpiAwarenessContext(v20);
  while ( v6 )
  {
    v23 = (struct tagMONITOR *)v6;
    v24 = v6 + 56;
    v6 = *(_QWORD *)(v6 + 56);
    v25 = HdevFromMonitor(v23);
    if ( v25 == -1 )
    {
      DestroyMonitor(v23);
    }
    else
    {
      SetMonitorData(v23, v25);
      v9 = v24;
    }
  }
  for ( i = 0; i < *(_DWORD *)(v3 + 20); ++i )
  {
    if ( !MonitorFromHdev(*(void **)(56LL * i + v3 + 40), v21) )
    {
      v27 = SetMonitorData(0LL, i);
      if ( v27 )
      {
        v28 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 56968);
        if ( *(_QWORD *)(v28 + 112) )
        {
          tagMONITOR::SharedMixedObjectPointerFieldpMonitorNext<tagMONITOR>::operator=(v9, v27);
        }
        else
        {
          v30 = W32GetUserSessionState(v29, v28);
          tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
            *(_QWORD *)(v30 + 56968) + 112LL,
            v27);
        }
        v9 = (__int64)v27 + 56;
      }
      else
      {
        v10 = -1073741801;
      }
    }
  }
  v32 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 56968);
  if ( !*(_QWORD *)(v32 + 112) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 532LL);
  v33 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 56968);
  if ( !*(_QWORD *)(v33 + 104) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 533LL);
  v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v34, v33) + 56968) + 112LL) + 40LL);
  v36 = *(_WORD *)(v35 + 60);
  v37 = v36;
  v40 = *(_QWORD *)(W32GetUserSessionState(v35, v38) + 56968);
  v41 = *(_QWORD *)(v40 + 112);
  while ( v41 )
  {
    if ( v36 )
    {
      if ( v36 != *(_WORD *)(*(_QWORD *)(v41 + 40) + 60LL) )
      {
        v36 = 0;
        v42 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v40, v39) + 48) + 7432LL);
        if ( v42 )
        {
          if ( v42() >= 0 )
          {
            v44 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v43, v39) + 48) + 7440LL);
            if ( v44 )
              v44();
          }
        }
      }
    }
    v45 = *(_QWORD *)(v41 + 40);
    v41 = *(_QWORD *)(v41 + 56);
    v40 = *(unsigned __int16 *)(v45 + 60);
    if ( v37 >= (unsigned __int16)v40 )
      v37 = *(_WORD *)(v45 + 60);
  }
  *(_DWORD *)(W32GetUserSessionState(v40, v39) + 71264) = v36;
  v48 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 56968);
  for ( j = *(_QWORD *)(v48 + 112); j; j = *(_QWORD *)(j + 56) )
    *(_WORD *)(*(_QWORD *)(j + 40) + 62LL) = v37;
  v50 = (*(_DWORD *)(v3 + 16) & 1) == 0;
  v51 = *(_QWORD *)(W32GetUserSessionState(v48, 0LL) + 19872);
  *(_DWORD *)(v51 + 2220) = v50;
  v53 = W32GetUserSessionState(v51, v52);
  v54 = GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(v53 + 56968) + 64LL), 38) & 0x100;
  v153 = 0LL;
  v57 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 56968);
  v58 = *(_DWORD *)(v57 + 140) & 0xFFFFFFFD;
  v59 = (unsigned int)v58 | ((_DWORD)v54 != 0 ? 2 : 0);
  *(_DWORD *)(v57 + 140) = v59;
  v60 = *(_DWORD ***)(W32GetUserSessionState(v58, v59) + 56968);
  **v60 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v67 = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v60, v61) + 56968) + 112LL);
  if ( v67 )
  {
    do
    {
      v68 = v67[5];
      if ( (*(_DWORD *)(v68 + 24) & 1) != 0 )
      {
        v69 = *(_DWORD *)(v68 + 28);
        if ( v65 < v69 )
          v69 = v65;
        v65 = v69;
        v70 = *(_DWORD *)(v68 + 32);
        if ( v64 < v70 )
          v70 = v64;
        v64 = v70;
        v71 = *(_DWORD *)(v68 + 36);
        if ( v63 > v71 )
          v71 = v63;
        v63 = v71;
        v72 = *(_DWORD *)(v68 + 40);
        if ( v62 > v72 )
          v72 = v62;
        v62 = v72;
        v68 = *(_QWORD *)(W32GetUserSessionState(v68, v66) + 56968);
        ++**(_DWORD **)v68;
      }
      v73 = *(_QWORD *)(W32GetUserSessionState(v68, v66) + 19872);
      if ( *(_DWORD *)(v73 + 2220) )
      {
        v74 = v67[5];
        if ( (_DWORD)v54 )
          *(_DWORD *)(v74 + 24) |= 2u;
        else
          *(_DWORD *)(v74 + 24) &= ~2u;
      }
      else if ( (*(_DWORD *)(v67[10] + 2156LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v67[5] + 24LL) |= 2u;
        v75 = W32GetUserSessionState(v73, v66);
        *(_DWORD *)(*(_QWORD *)(v75 + 56968) + 140LL) |= 2u;
      }
      v67 = (_QWORD *)v67[7];
    }
    while ( v67 );
    *((_QWORD *)&v153 + 1) = __PAIR64__(v62, v63);
    *(_QWORD *)&v153 = __PAIR64__(v64, v65);
  }
  PhysicalScreenRect = (__int128 *)GetPhysicalScreenRect(&v154);
  v78 = *PhysicalScreenRect;
  v79 = *(_QWORD *)PhysicalScreenRect;
  v154 = v78;
  v80 = v153 - v79;
  if ( (_QWORD)v153 == v79 )
    v80 = *((_QWORD *)&v153 + 1) - *((_QWORD *)&v154 + 1);
  v81 = v80 == 0;
  v82 = *(_QWORD *)(W32GetUserSessionState(v80, v77) + 56968);
  *(_DWORD *)(*(_QWORD *)v82 + 24LL) = v65;
  *(_DWORD *)(*(_QWORD *)v82 + 28LL) = v64;
  *(_DWORD *)(*(_QWORD *)v82 + 32LL) = v63;
  *(_DWORD *)(*(_QWORD *)v82 + 36LL) = v62;
  v84 = W32GetUserSessionState(v82, v83);
  if ( *(_DWORD *)(v84 + 68764) )
  {
    v86 = *(struct _KEVENT **)(v84 + 68816);
    if ( v86 )
    {
      if ( !v81 )
        KeSetEvent(v86, 1, 0);
    }
  }
  v87 = *(int ***)(W32GetUserSessionState(v86, v85) + 56968);
  v88 = **v87;
  v90 = *(_QWORD *)(W32GetUserSessionState(v87, v89) + 19872);
  *(_DWORD *)(v90 + 2216) = v88;
  v92 = W32GetUserSessionState(v90, v91);
  CInputConfig::zzzOnDisplayStateChange(*(CInputConfig **)(v92 + 18632));
  v95 = W32GetUserSessionState(v94, v93);
  memset((void *)(v95 + 14728), 0, 0x600uLL);
  v99 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v97, v96) + 48);
  v100 = *(int (**)(void))(v99 + 3664);
  if ( v100 )
  {
    if ( v100() >= 0 )
    {
      v99 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v99, v98) + 48);
      v101 = *(void (**)(void))(v99 + 3672);
      if ( v101 )
        v101();
    }
  }
  v155 = 0LL;
  v102 = W32GetUserSessionState(v99, v98);
  SetOrCreateRectRgnIndirectPublic((HRGN *)(*(_QWORD *)(v102 + 56968) + 128LL), (struct REGION_CORE *)&v155);
  v106 = *(_QWORD *)(W32GetUserSessionState(v104, v103) + 56968);
  if ( *(_QWORD *)(v106 + 128) )
  {
    v107 = 0;
    v109 = *(_QWORD *)(W32GetUserSessionState(v106, v105) + 56968);
    for ( k = *(_QWORD *)(v109 + 112); k; k = *(_QWORD *)(k + 56) )
    {
      v109 = *(_QWORD *)(k + 40);
      if ( (*(_DWORD *)(v109 + 24) & 1) != 0 )
      {
        RectRgnIndirect = (struct HOBJ__ *)GreCreateRectRgnIndirect((struct REGION_CORE *)(v109 + 28));
        if ( RectRgnIndirect )
        {
          v112 = *(_QWORD *)(W32GetUserSessionState(v109, v108) + 56968);
          v113 = *(HRGN *)(v112 + 128);
          v115 = W32GetUserSessionState(v112, v114);
          v107 = GreCombineRgn(*(HRGN *)(*(_QWORD *)(v115 + 56968) + 128LL), v113, (HRGN)RectRgnIndirect, 2);
          GreDeleteObject(RectRgnIndirect);
        }
      }
    }
    v105 = *(_QWORD *)(W32GetUserSessionState(v109, v108) + 56968);
    v106 = *(_DWORD *)(v105 + 140) & 0xFFFFFFFE | (v107 == 2);
    *(_DWORD *)(v105 + 140) = v106;
  }
  v117 = *(_QWORD *)(W32GetUserSessionState(v106, v105) + 56968);
  if ( (*(_DWORD *)(v117 + 140) & 1) != 0 )
  {
    v118 = 0LL;
  }
  else
  {
    v117 = *(_QWORD *)(W32GetUserSessionState(v117, v116) + 56968);
    v118 = *(_QWORD *)(v117 + 128);
  }
  for ( m = *(_QWORD *)(W32GetUserSessionState(v117, v116) + 63520); m; m = *(_QWORD *)(m + 8) )
  {
    for ( n = *(_QWORD *)(m + 16); n; n = *(_QWORD *)(n + 32) )
    {
      v120 = *(_QWORD *)(*(_QWORD *)(n + 8) + 24LL);
      *(_QWORD *)(*(_QWORD *)(v120 + 40) + 168LL) = v118;
    }
  }
  v123 = W32GetUserSessionState(v120, v119);
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(v123 + 56968) + 64LL), 14);
  v127 = *(_QWORD *)(W32GetUserSessionState(v126, v125) + 19872);
  *(_BYTE *)(v127 + 7002) = DeviceCaps;
  v129 = W32GetUserSessionState(v127, v128);
  v130 = GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(v129 + 56968) + 64LL), 12);
  v133 = *(_QWORD *)(W32GetUserSessionState(v132, v131) + 19872);
  *(_BYTE *)(v133 + 7003) = v130;
  v135 = *(_QWORD *)(W32GetUserSessionState(v133, v134) + 19872);
  v138 = *(_QWORD *)(W32GetUserSessionState(v137, v136) + 19872);
  LOWORD(v135) = *(unsigned __int8 *)(v135 + 7002) * *(unsigned __int8 *)(v138 + 7003);
  v139 = *(_QWORD *)(W32GetUserSessionState(v138, *(unsigned __int8 *)(v138 + 7003)) + 19872);
  *(_WORD *)(v139 + 6996) = v135;
  v141 = *(_QWORD *)(W32GetUserSessionState(v139, v140) + 19872);
  LOWORD(v135) = *(_WORD *)(v141 + 6996);
  v143 = *(_QWORD *)(W32GetUserSessionState(v141, v142) + 56968);
  *(_WORD *)(v143 + 136) = v135;
  v145 = *(_QWORD *)(W32GetUserSessionState(v143, v144) + 19872);
  if ( (_DWORD)v54 )
    *(_DWORD *)(v145 + 7004) |= 1u;
  else
    *(_DWORD *)(v145 + 7004) &= ~1u;
  EnforceColorDependentSettings();
  v148 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v147, v146) + 48) + 7544LL);
  if ( v148 && v148() >= 0 )
  {
    v151 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v150, v149) + 48) + 7552LL);
    if ( v151 )
      LODWORD(v151) = v151();
    if ( !(_DWORD)v151 )
      return (unsigned int)-1073741801;
  }
  return v10;
}
