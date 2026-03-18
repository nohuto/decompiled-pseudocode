/*
 * XREFs of xxxRemoteDisconnect @ 0x1401263A8
 * Callers:
 *     NtUserRemoteDisconnect @ 0x140126370 (NtUserRemoteDisconnect.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawScreen @ 0x14012515C (RemoteRedrawScreen.c)
 *     PowerOnGdi @ 0x1401257F0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1401259E0 (PowerOffGdi.c)
 *     xxxRemoteStopScreenUpdates @ 0x140126958 (xxxRemoteStopScreenUpdates.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     GreDxgkSessionDisconnected @ 0x140126CEC (GreDxgkSessionDisconnected.c)
 *     GreDxgkPreSessionDisconnected @ 0x140126D1C (GreDxgkPreSessionDisconnected.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140126D78 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x140126F10 (UnregisterDeviceClassNotifications.c)
 *     RemoveInputDevices @ 0x140127000 (RemoveInputDevices.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140220910 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     GreDrvDisconnect @ 0x140265948 (GreDrvDisconnect.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     AutoRotationUpdateRegistry @ 0x140273560 (AutoRotationUpdateRegistry.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 xxxRemoteDisconnect()
{
  unsigned int v0; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int16 v4; // r15
  __int64 v5; // rcx
  __int64 RemoteContext; // r12
  int v7; // r13d
  char v8; // bl
  bool v9; // si
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  bool v37; // r15
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int16 v41; // bx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  int **v55; // rcx
  int v56; // ebx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 UserSessionState; // rax
  int v63; // r8d
  int v64; // edx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  _BYTE v70[2]; // [rsp+40h] [rbp-40h] BYREF
  __int16 v71; // [rsp+42h] [rbp-3Eh]
  unsigned __int8 v72[8]; // [rsp+48h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v73; // [rsp+50h] [rbp-30h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+58h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-20h] BYREF

  v0 = 0;
  v72[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x15u, 0, &v73, v72);
  v1 = v73;
  Timeout.QuadPart = 0LL;
  v4 = *(_WORD *)(W32GetUserSessionState(v3, v2) + 68752);
  v71 = v4;
  RemoteContext = GreGetRemoteContext();
  v7 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v5 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v5 & 4) == 0)
    || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v5, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v63) = v9;
    LOBYTE(v64) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v64,
      v63,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      15,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v10 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( PsGetCurrentProcess() == v10 )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v12, v11) + 68756) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v14, v13) + 18668) )
      {
        if ( *(_WORD *)(W32GetUserSessionState(v16, v15) + 68752) && !(unsigned int)UserIsWddmConnectedSession() )
        {
          GreDxgkPreSessionDisconnected(0LL);
          GreDxgkSessionDisconnected(0LL);
        }
        HYDRA_HINT(16LL);
        v19 = W32GetUserSessionState(v18, v17);
        memset_0((void *)(v19 + 64120), 0, 0x40uLL);
        if ( !*(_DWORD *)(W32GetUserSessionState(v21, v20) + 68852) )
        {
          if ( !*(_WORD *)(W32GetUserSessionState(v23, v22) + 68752) && !*(_DWORD *)(W32GetUserGdiSessionState() + 28) )
          {
            v7 = 1;
            PowerOnGdi(v1, 1LL, 4u);
          }
          SetConsoleSwitchInProgress(1LL);
          if ( !*(_QWORD *)(W32GetUserSessionState(v25, v24) + 62984) )
          {
            Timeout.QuadPart = -3000000000LL;
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v70, 1);
            v67 = W32GetUserSessionState(v66, v65);
            KeWaitForSingleObject(*(PVOID *)(v67 + 62808), WrUserRequest, 0, 0, &Timeout);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v70);
          }
          if ( *(_QWORD *)(W32GetUserSessionState(v27, v26) + 62984) )
          {
            v30 = xxxRemoteStopScreenUpdates();
            if ( v30 < 0 )
              goto LABEL_15;
            if ( *(_DWORD *)(W32GetUserSessionState(v29, v28) + 68904) )
            {
              v68 = W32GetUserSessionState(v34, v33);
              RemoteRedrawScreen((void **)(v68 + 19152), v69);
            }
            if ( !(unsigned int)UserIsWddmConnectedSession() )
            {
              GreDrvDisconnect(RemoteContext);
              goto LABEL_34;
            }
            v37 = *(_WORD *)(W32GetUserSessionState(v36, v35) + 68752) == 0;
            LOBYTE(v38) = v37;
            GreDxgkPreSessionDisconnected(v38);
            v41 = *(_WORD *)(W32GetUserSessionState(v40, v39) + 68752);
            v44 = W32GetUserSessionState(v43, v42);
            v45 = xxxRemoteSetDisconnectDisplayMode(*(struct tagDESKTOP **)(v44 + 19144), v41, v1);
            LOBYTE(v46) = v37;
            v30 = v45;
            GreDxgkSessionDisconnected(v46);
            if ( v30 >= 0 )
            {
              DrvCloseGraphicsDevices(v37);
              v4 = v71;
LABEL_34:
              *(_WORD *)(W32GetUserSessionState(v50, v49) + 69048) = v4;
              if ( !*(_WORD *)(W32GetUserSessionState(v52, v51) + 69048) )
              {
                UnregisterDeviceClassNotifications();
                RemoveInputDevices();
              }
              OPMDestroyAllProtectedOutputs();
              SetConnectedState(0LL, 0LL);
              AutoRotationUpdateRegistry();
              CitSessionConnectChange(0LL, 0LL);
              if ( !v4 )
                DrvSetGraphicsDevices(L"TSDDD");
              if ( (unsigned int)IsRemoteConnection() )
              {
                v55 = *(int ***)(W32GetUserSessionState(v54, v53) + 56968);
                v56 = **v55;
                *(_DWORD *)(W32GetUserSessionState(v55, v57) + 68748) = v56;
                W32GetUserSessionState(v59, v58);
              }
              CleanupRemoteHandles(RemoteContext);
              goto LABEL_15;
            }
            v60 = W32GetUserSessionState(v48, v47);
            RemoteRedrawScreen((void **)(v60 + 19152), v61);
          }
          else
          {
            v30 = -1073741823;
          }
LABEL_15:
          SetConsoleSwitchInProgress(0LL);
          if ( v30 < 0 && v7 == 1 )
            PowerOffGdi(v1, v31);
          DispBrokerAsyncSessionStateChanged(v1);
          if ( v72[0] )
            DisplayScenarioContextDissociate(&v73);
          return (unsigned int)v30;
        }
        v0 = -1073741267;
      }
      else
      {
        v0 = -1073741823;
      }
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v72);
    return v0;
  }
  if ( v72[0] )
    DisplayScenarioContextDissociate(&v73);
  return 3221225506LL;
}
