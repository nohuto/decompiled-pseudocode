/*
 * XREFs of xxxRemoteReconnect @ 0x1402573C0
 * Callers:
 *     NtUserRemoteReconnect @ 0x14029D3C0 (NtUserRemoteReconnect.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetPointer @ 0x140123830 (SetPointer.c)
 *     TransitionCursorSuppressionState @ 0x140123E50 (TransitionCursorSuppressionState.c)
 *     RemoteRedrawScreen @ 0x14012515C (RemoteRedrawScreen.c)
 *     xxxRemoteStopScreenUpdates @ 0x140126958 (xxxRemoteStopScreenUpdates.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140126D78 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x140126F10 (UnregisterDeviceClassNotifications.c)
 *     RemoveInputDevices @ 0x140127000 (RemoveInputDevices.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     InitKeyboard @ 0x1401597CC (InitKeyboard.c)
 *     DrvOcclusionStateChangeNotify @ 0x140201F80 (DrvOcclusionStateChangeNotify.c)
 *     GreMultiUserSetDisplayDriverName @ 0x14020A43C (GreMultiUserSetDisplayDriverName.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x14020E64C (DrvCloseRemoteGraphicsDevices.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140220910 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1402268EC (DrvOpenLocalGraphicsDevices.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x14022CB60 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     SetMouseTrails @ 0x140241038 (SetMouseTrails.c)
 *     GreDrvDisconnect @ 0x140265948 (GreDrvDisconnect.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1402735C0 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxUserReinitializeAutoRotation @ 0x140273760 (xxxUserReinitializeAutoRotation.c)
 *     AttachInputDevices @ 0x14027BA60 (AttachInputDevices.c)
 *     RegisterCDROMNotify @ 0x14027C4B0 (RegisterCDROMNotify.c)
 *     GreDrvReconnect @ 0x14033F2B8 (GreDrvReconnect.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxRemoteReconnect(_DWORD *Src)
{
  bool v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 RemoteContext; // r13
  unsigned int *v11; // rcx
  bool v12; // di
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int64 v22; // rdx
  int v23; // edi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // esi
  _DWORD *v28; // rdi
  int v29; // ebx
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  wchar_t *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  _WORD *v44; // rcx
  __int64 v45; // rax
  size_t v46; // rbx
  unsigned __int16 *v47; // rax
  unsigned __int16 *v48; // rdi
  __int64 v49; // rdi
  struct _FILE_OBJECT *v50; // rcx
  void *v51; // rcx
  __int64 v52; // rcx
  PVOID v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  void *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int16 v61; // ax
  unsigned __int16 v62; // bx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  int v69; // ebx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rbx
  unsigned int v84; // eax
  char v85; // bl
  bool v86; // di
  __int64 v87; // rax
  int v88; // r8d
  int v89; // edx
  __int64 v90; // rdx
  __int64 v91; // rcx
  bool v92; // zf
  unsigned int CurrentWin32kSessionId; // eax
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  unsigned int v104; // ebx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int16 v123; // bx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  void (__fastcall *v128)(__int64, _QWORD); // rdi
  Gre::Base *v129; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  int HandleInformation; // [rsp+28h] [rbp-370h]
  char v137[8]; // [rsp+60h] [rbp-338h] BYREF
  unsigned __int16 *v138; // [rsp+68h] [rbp-330h]
  int v139; // [rsp+70h] [rbp-328h]
  int v140; // [rsp+74h] [rbp-324h] BYREF
  PVOID Object; // [rsp+78h] [rbp-320h] BYREF
  unsigned __int16 v142; // [rsp+80h] [rbp-318h]
  BOOL v143; // [rsp+84h] [rbp-314h]
  int v144; // [rsp+88h] [rbp-310h]
  int v145; // [rsp+8Ch] [rbp-30Ch]
  int v146; // [rsp+90h] [rbp-308h]
  int v147; // [rsp+94h] [rbp-304h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v148; // [rsp+98h] [rbp-300h]
  unsigned int v149; // [rsp+A0h] [rbp-2F8h]
  int v150; // [rsp+A4h] [rbp-2F4h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v151; // [rsp+A8h] [rbp-2F0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v152; // [rsp+B0h] [rbp-2E8h] BYREF
  _DWORD *v153; // [rsp+B8h] [rbp-2E0h]
  _BYTE v154[328]; // [rsp+C8h] [rbp-2D0h] BYREF
  _BYTE v155[32]; // [rsp+210h] [rbp-188h] BYREF
  __int64 v156; // [rsp+230h] [rbp-168h]
  __int64 v157; // [rsp+238h] [rbp-160h]
  __int64 v158; // [rsp+240h] [rbp-158h]
  __int64 v159; // [rsp+248h] [rbp-150h]
  __int64 v160; // [rsp+250h] [rbp-148h]
  __int128 v161; // [rsp+260h] [rbp-138h]
  __int128 v162; // [rsp+270h] [rbp-128h]
  __int128 v163; // [rsp+280h] [rbp-118h]
  __int128 v164; // [rsp+290h] [rbp-108h]
  unsigned __int16 v165[29]; // [rsp+2A0h] [rbp-F8h] BYREF
  __int128 v166; // [rsp+2DAh] [rbp-BEh]
  __int16 v167; // [rsp+2EAh] [rbp-AEh]
  __int128 v168; // [rsp+2ECh] [rbp-ACh]
  int v169; // [rsp+2FCh] [rbp-9Ch]
  int v170; // [rsp+300h] [rbp-98h]
  int v171; // [rsp+304h] [rbp-94h]
  unsigned __int16 v172; // [rsp+318h] [rbp-80h]
  __int64 v173; // [rsp+31Ch] [rbp-7Ch]
  int v174; // [rsp+324h] [rbp-74h]
  int v175; // [rsp+328h] [rbp-70h]
  int v176; // [rsp+32Ch] [rbp-6Ch]
  int v177; // [rsp+334h] [rbp-64h]
  GUID v178; // [rsp+350h] [rbp-48h] BYREF

  v153 = Src;
  v2 = 0;
  LOBYTE(v151) = 0;
  v178 = 0LL;
  EtwActivityIdControl(3u, &v178);
  DisplayScenarioContextEnsureAndAssociate(&v178, 0x16u, 0, &v152, (unsigned __int8 *)&v151);
  v148 = v152;
  v139 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v149 = *(_DWORD *)(W32GetUserSessionState(v4, v3) + 16296) + 1;
  v147 = 0;
  v146 = 0;
  UserSessionState = W32GetUserSessionState(v6, v5);
  v8 = UserSessionState + 68440;
  v142 = *(_WORD *)(UserSessionState + 68752);
  memset_0(v155, 0, 0x140uLL);
  v140 = 0;
  v138 = 0LL;
  *(_QWORD *)&v178.Data1 = 0LL;
  RemoteContext = GreGetRemoteContext();
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0 )
  {
    v2 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  }
  v11 = &WPP_RECORDER_INITIALIZED;
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v9);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(v13 + 69160),
      4,
      3,
      16,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v16 = *(_QWORD *)(W32GetUserGdiSessionState(v11) + 40);
  if ( PsGetCurrentProcess(v17) != v16 )
  {
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v151);
    return 3221225506LL;
  }
  HYDRA_HINT(32LL, v18);
  memset_0(v154, 0, 0x140uLL);
  RtlCopyFromUser(v154, Src, 0x140uLL);
  v20 = v155;
  v21 = v154;
  v22 = 2LL;
  do
  {
    *v20 = *v21;
    v20[1] = v21[1];
    v20[2] = v21[2];
    v20[3] = v21[3];
    v20[4] = v21[4];
    v20[5] = v21[5];
    v20[6] = v21[6];
    v20 += 8;
    *(v20 - 1) = v21[7];
    v21 += 8;
    --v22;
  }
  while ( v22 );
  *v20 = *v21;
  v20[1] = v21[1];
  v20[2] = v21[2];
  v20[3] = v21[3];
  if ( *(_DWORD *)(v8 + 412) )
  {
    v23 = -1073741823;
LABEL_16:
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v151);
    return (unsigned int)v23;
  }
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  *(_QWORD *)(v8 + 488) = v8 + 512;
  v23 = PopulateUMKMHandlePair(v158, v8 + 200);
  if ( v23 < 0 )
    goto LABEL_16;
  v24 = PopulateUMKMHandlePair(v159, v8 + 216);
  v27 = v24;
  if ( v24 < 0 )
  {
    v23 = v24;
    goto LABEL_16;
  }
  v28 = v153;
  *(_DWORD *)(v8 + 192) = v153[5];
  *(_DWORD *)(v8 + 196) = v28[6];
  *(_QWORD *)(v8 + 184) = v156;
  *(_QWORD *)(v8 + 232) = v157;
  *(_QWORD *)(v8 + 248) = v160;
  *(_QWORD *)(v8 + 400) = v173;
  *(_DWORD *)(v8 + 408) = v174;
  v29 = v170;
  *(_DWORD *)(W32GetUserSessionState(v26, v25) + 16272) = v29;
  v30 = v171;
  *(_DWORD *)(W32GetUserSessionState(v32, v31) + 14036) = v30;
  v150 = *(_DWORD *)(v8 + 176);
  *(_DWORD *)(v8 + 176) = v177;
  *(_DWORD *)(RemoteContext + 64) = v177;
  *(_QWORD *)(v8 + 256) = *((_QWORD *)v28 + 38);
  *(_DWORD *)(v8 + 264) = v28[78];
  *(_OWORD *)(v8 + 268) = *(_OWORD *)((char *)v28 + 162);
  *(_OWORD *)(v8 + 284) = *(_OWORD *)((char *)v28 + 178);
  *(_QWORD *)(v8 + 300) = *(_QWORD *)((char *)v28 + 194);
  v35 = W32GetUserSessionState(v34, v33);
  *(_OWORD *)(v35 + 64120) = v161;
  *(_OWORD *)(v35 + 64136) = v162;
  *(_OWORD *)(v35 + 64152) = v163;
  *(_OWORD *)(v35 + 64168) = v164;
  *(_OWORD *)(v35 + 63560) = v166;
  *(_WORD *)(v35 + 63576) = v167;
  *(_OWORD *)(v35 + 63580) = v168;
  *(_DWORD *)(v35 + 63596) = v169;
  v36 = wcschr((const wchar_t *)(v35 + 64120), 0x23u);
  if ( v36 )
    *v36 = 0;
  if ( !IsRemoteConnection(v38, v37) || (FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v140, 0), v140) )
  {
    v43 = W32GetUserSessionState(v40, v39);
    *(_DWORD *)(*(_QWORD *)(v43 + 19872) + 2236LL) |= 4u;
  }
  else
  {
    v41 = W32GetUserSessionState(v40, v39);
    *(_DWORD *)(*(_QWORD *)(v41 + 19872) + 2236LL) &= ~4u;
  }
  v44 = *(_WORD **)(RemoteContext + 40);
  if ( !v44 )
    goto LABEL_29;
  v45 = -1LL;
  do
    ++v45;
  while ( v44[v45] );
  *(_QWORD *)&v178.Data1 = v45 + 1;
  v46 = 2 * (v45 + 1);
  v47 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit(v46, 2020897621LL);
  v48 = v47;
  v138 = v47;
  if ( v47 )
  {
    memmove(v47, *(const void **)(RemoteContext + 40), v46);
LABEL_29:
    v49 = *(_QWORD *)(v8 + 472);
    if ( v49 || (v44 = *(_WORD **)(v8 + 184)) == 0LL )
    {
      if ( !*(_QWORD *)(v8 + 184) )
      {
        v56 = *(_QWORD *)(v8 + 480);
        v57 = W32GetUserSessionState(v44, v42);
        if ( !(unsigned int)GreMultiUserInitSession(
                              RemoteContext,
                              *(_QWORD *)(v8 + 248),
                              *(_QWORD *)(v8 + 488),
                              *(unsigned int *)(v8 + 192),
                              *(_DWORD *)(v57 + 68636),
                              v49,
                              v56,
                              8,
                              v165,
                              19,
                              v8 + 268) )
          v27 = -1073741823;
      }
    }
    else
    {
      Object = 0LL;
      v27 = ObReferenceObjectByHandle(v44, 0, 0LL, 0, &Object, 0LL);
      if ( v27 >= 0 )
      {
        v50 = (struct _FILE_OBJECT *)Object;
        *(_QWORD *)(v8 + 472) = Object;
        IoGetRelatedDeviceObject(v50);
        v51 = *(void **)(v8 + 248);
        Object = 0LL;
        v27 = ObReferenceObjectByHandle(v51, 0, 0LL, 0, &Object, 0LL);
        v53 = Object;
        *(_QWORD *)(v8 + 480) = Object;
        if ( v27 >= 0 )
        {
          v54 = *(_QWORD *)(v8 + 472);
          v55 = W32GetUserSessionState(v52, v42);
          if ( !(unsigned int)GreMultiUserInitSession(
                                RemoteContext,
                                *(_QWORD *)(v8 + 248),
                                *(_QWORD *)(v8 + 488),
                                *(unsigned int *)(v8 + 192),
                                *(_DWORD *)(v55 + 68636),
                                v54,
                                v53,
                                8,
                                v165,
                                19,
                                v8 + 268) )
            v27 = -1073741823;
        }
      }
    }
    if ( v27 < 0 )
      goto LABEL_86;
    v58 = *(void **)(v8 + 232);
    if ( v58 )
    {
      Object = 0LL;
      v27 = ObReferenceObjectByHandle(v58, 0, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(v8 + 240) = Object;
    }
    if ( v27 < 0 )
      goto LABEL_86;
    if ( *(_DWORD *)(W32GetUserSessionState(v58, v42) + 68904) )
      xxxRemoteStopScreenUpdates(v60, v59);
    v61 = *(_WORD *)(v8 + 608);
    if ( v172 == v61 || !v61 )
      goto LABEL_54;
    if ( !v138 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, v178.Data1 - 1, v138) )
    {
      v62 = *(_WORD *)(v8 + 312);
      v63 = W32GetUserSessionState(v60, v59);
      v27 = xxxRemoteSetDisconnectDisplayMode(*(struct tagDESKTOP **)(v63 + 19144), v62, v148);
      if ( v27 < 0 )
        goto LABEL_86;
      if ( v153[72] )
        DrvCloseRemoteGraphicsDevices();
      if ( !v138 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8, v165) )
      {
LABEL_54:
        SetProtocolType(v172);
        if ( !*(_WORD *)(W32GetUserSessionState(v65, v64) + 68752) )
          DrvNotifySessionStateChange(3LL);
        v146 = 1;
        if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
        {
          if ( *(_WORD *)(v8 + 312) == *(_WORD *)(v8 + 608) )
          {
            v68 = GreDrvReconnect(RemoteContext);
            v69 = v139;
          }
          else
          {
            v69 = 1;
            v139 = 1;
            v68 = GreDrvConnect(RemoteContext);
          }
          v27 = v68;
          v143 = v68 >= 0;
        }
        else
        {
          v69 = 1;
          v139 = 1;
          if ( !*(_WORD *)(W32GetUserSessionState(v67, v66) + 68752) )
          {
            v27 = DrvOpenLocalGraphicsDevices(0LL);
            if ( v27 < 0 )
              goto LABEL_86;
            v145 = 1;
          }
        }
        v147 = 1;
        v70 = DrvSetGraphicsDevices(v165);
        v72 = 0LL;
        if ( v70 )
        {
          if ( !v175 && *(_WORD *)(v8 + 312) == *(_WORD *)(v8 + 608) && !v176 )
            goto LABEL_133;
          v75 = W32GetUserSessionState(0LL, v71);
          v27 = 0;
          if ( (unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(*(_QWORD *)(v75 + 56968) + 16LL)) )
          {
            if ( !(unsigned int)DrvSessionHasAnyGraphicsDevice() )
              goto LABEL_133;
          }
          DispBrokerUpdateKernelDisplayPolicies();
          if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline(v76) )
          {
            v79 = W32GetUserSessionState(v78, v77);
            LOBYTE(HandleInformation) = 0;
            v80 = xxxUserSetDisplayConfig(
                    0LL,
                    0LL,
                    v176 != 0 ? 2447 : 2191,
                    2050LL,
                    *(_QWORD *)(v79 + 19152),
                    HandleInformation,
                    0LL,
                    0LL,
                    0LL,
                    v148,
                    0LL);
          }
          else
          {
            v83 = *(_QWORD *)(W32GetUserSessionState(v78, v77) + 19152);
            if ( v176 || (v92 = *(_WORD *)(W32GetUserSessionState(v82, v81) + 68752) == 0, v84 = 2191, v92) )
              v84 = 2447;
            LOBYTE(HandleInformation) = 0;
            v80 = xxxUserSetDisplayConfig(0LL, 0LL, v84, 2050LL, v83, HandleInformation, 0LL, 0LL, 0LL, v148, 0LL);
            v69 = v139;
          }
          v27 = v80;
          v71 = 0LL;
          if ( v80 < 0 )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
              || (v85 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v85 = 0;
            }
            v86 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v85 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v87 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, 0LL);
              LOBYTE(v88) = v86;
              LOBYTE(v89) = v85;
              WPP_RECORDER_AND_TRACE_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v89,
                v88,
                *(_QWORD *)(v87 + 69160),
                4,
                3,
                17,
                (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
            }
          }
          else
          {
LABEL_133:
            if ( IsRemoteConnection(v72, v71) )
            {
              if ( v69 )
              {
                v103 = W32GetUserSessionState(v102, v101);
                v104 = 2;
                if ( !(unsigned int)DrvEscapeRemoteDrivers(
                                      *(_QWORD *)(*(_QWORD *)(v103 + 56968) + 16LL),
                                      *(unsigned __int16 *)(v8 + 312),
                                      *(_QWORD *)(RemoteContext + 40),
                                      2LL,
                                      *(_QWORD *)(v8 + 504),
                                      8) )
                  v27 = -1073741823;
              }
              else
              {
                v104 = 2;
              }
              AttachInputDevices(0LL);
            }
            else
            {
              if ( *(_WORD *)(v8 + 608) )
                RemoveInputDevices(v102, v101);
              AttachInputDevices(1LL);
              xxxUserReinitializeAutoRotation();
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v137, 1);
              RegisterCDROMNotify();
              v144 = 1;
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v137);
              v104 = 2;
            }
            v107 = W32GetUserSessionState(v106, v105);
            RemoteRedrawScreen((void **)(v107 + 19152), v108);
            InitKeyboard(v110, v109);
            UpdateKeyLights(0LL);
            SetPointer(1LL);
            *(_DWORD *)(W32GetUserSessionState(v112, v111) + 36340) = 9;
            TransitionCursorSuppressionState(10LL, 0LL);
            if ( *(_DWORD *)(W32GetUserSessionState(v114, v113) + 36340) == 1
              || *(_DWORD *)(W32GetUserSessionState(v116, v115) + 36340) == 5 )
            {
              v104 = *(_DWORD *)(W32GetUserSessionState(v116, v115) + 36340);
            }
            TransitionCursorSuppressionState(v104, 0LL);
            SetConnectedState(1LL, *(unsigned int *)(v8 + 320));
            if ( !IsRemoteConnection(v118, v117)
              || (FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v140, 0), v140) )
            {
              v122 = *(_QWORD *)(W32GetUserSessionState(v120, v119) + 19872);
              *(_DWORD *)(v122 + 2236) |= 4u;
            }
            else
            {
              v122 = *(_QWORD *)(W32GetUserSessionState(v120, v119) + 19872);
              *(_DWORD *)(v122 + 2236) &= ~4u;
            }
            v123 = *(_WORD *)(W32GetUserSessionState(v122, v121) + 68752);
            v128 = *(void (__fastcall **)(__int64, _QWORD))(DxDdGetDxgkWin32kInterface(v125, v124, v126, v127) + 384);
            RemoteDeviceCount = DrvGetRemoteDeviceCount(v129);
            LOBYTE(v131) = v123 == 0;
            v128(v131, RemoteDeviceCount);
            LOBYTE(v134) = *(_WORD *)(W32GetUserSessionState(v133, v132) + 68752) == 0;
            LOBYTE(v135) = 1;
            CitSessionConnectChange(v135, v134);
          }
          goto LABEL_86;
        }
        if ( *(_DWORD *)(v8 + 464) )
        {
          v73 = W32GetUserSessionState(0LL, v71);
          RemoteRedrawScreen((void **)(v73 + 19152), v74);
        }
      }
    }
    v27 = -1073741823;
LABEL_86:
    v48 = v138;
    goto LABEL_87;
  }
  v27 = -1073741801;
LABEL_87:
  SetMouseTrails(v149);
  v92 = v27 == 0;
  if ( v27 < 0 )
  {
    if ( v143 )
      GreDrvDisconnect(RemoteContext);
    v92 = v27 == 0;
  }
  if ( v92 && !*(_WORD *)(W32GetUserSessionState(v91, v90) + 68752) )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    RtlSetActiveConsoleId(CurrentWin32kSessionId);
  }
  if ( !*(_WORD *)(W32GetUserSessionState(v91, v90) + 68752) )
    DrvNotifySessionStateChange(4LL);
  if ( v27 < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  LOBYTE(v94) = 1;
  DxgkEngNotifyDisplayChange(v94);
  if ( v27 < 0 )
  {
    v99 = v150;
    *(_DWORD *)(v8 + 176) = v150;
    *(_DWORD *)(RemoteContext + 64) = v99;
    if ( v144 )
      UnregisterDeviceClassNotifications();
    if ( v145 )
      DrvCloseGraphicsDevices(1LL);
    if ( v146 )
      SetProtocolType(v142);
    if ( v147 )
      DrvSetGraphicsDevices(v165);
  }
  if ( v48 )
    Win32FreePool(v48);
  if ( !v27 && IsRemoteConnection(v96, v95) )
  {
    v100 = W32GetUserSessionState(v96, v95);
    DrvEscapeRemoteDrivers(
      *(_QWORD *)(*(_QWORD *)(v100 + 56968) + 16LL),
      *(unsigned __int16 *)(v8 + 312),
      *(_QWORD *)(RemoteContext + 40),
      6LL,
      0LL,
      0);
  }
  DrvOcclusionStateChangeNotify(v96, v95, v97, v98);
  DispBrokerAsyncSessionStateChanged(v148);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v151);
  return (unsigned int)v27;
}
