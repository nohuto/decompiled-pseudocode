/*
 * XREFs of xxxRemoteConnect @ 0x14016C380
 * Callers:
 *     <none>
 * Callees:
 *     CleanupRemoteHandles @ 0x14002ACB0 (CleanupRemoteHandles.c)
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14002B8D0 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x14004E440 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     FastGetProfileIntW @ 0x1400A96F0 (FastGetProfileIntW.c)
 *     DxgkEngNotifyDisplayChange @ 0x1400ACA40 (DxgkEngNotifyDisplayChange.c)
 *     GreMultiUserInitSession @ 0x1400BB200 (GreMultiUserInitSession.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F14BC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     InitLoadResources @ 0x14011FE88 (InitLoadResources.c)
 *     SetConsoleSwitchInProgress @ 0x1401460A0 (SetConsoleSwitchInProgress.c)
 *     SetProtocolType @ 0x140148C80 (SetProtocolType.c)
 *     PopulateUMKMHandlePair @ 0x14014C050 (PopulateUMKMHandlePair.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x14014CA8C (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     SetConnectedState @ 0x140150BE0 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x140150C60 (SetConnectCompletedState.c)
 *     DrvEscapeRemoteDrivers @ 0x1401586B0 (DrvEscapeRemoteDrivers.c)
 *     GreDxgkSessionConnected @ 0x140160B60 (GreDxgkSessionConnected.c)
 *     ??4?$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z @ 0x1401A0ED8 (--4-$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z.c)
 *     LW_BrushInit @ 0x1401A13F0 (LW_BrushInit.c)
 *     wcschr @ 0x1401A30D0 (wcschr.c)
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 *     GreDrvConnect @ 0x1401D18C0 (GreDrvConnect.c)
 *     xxxRemoteConsoleShadowStart @ 0x14023F4A4 (xxxRemoteConsoleShadowStart.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall xxxRemoteConnect(
        __int64 a1,
        int a2,
        unsigned __int16 *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  bool v4; // bl
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 (*v14)(void); // rax
  __int64 result; // rax
  bool v16; // si
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  NTSTATUS v25; // esi
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rbx
  wchar_t *v36; // rax
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  void *v43; // rcx
  __int64 v44; // rdx
  PVOID v45; // rcx
  struct _FILE_OBJECT *v46; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  void *v48; // rcx
  struct _DEVICE_OBJECT *v49; // r14
  NTSTATUS v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int (*v53)(void); // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  char v61; // si
  bool v62; // r14
  char CurrentWin32kSessionId; // bl
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned int v74; // eax
  int (*v75)(void); // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  void (*v78)(void); // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rbx
  unsigned __int16 v82; // di
  __int64 v83; // rax
  __int64 v84; // rcx
  PVOID Object; // [rsp+60h] [rbp-10h] BYREF
  __int64 v86; // [rsp+68h] [rbp-8h] BYREF
  ULONG Value; // [rsp+B0h] [rbp+40h] BYREF
  int v88; // [rsp+B8h] [rbp+48h]

  v88 = a2;
  v4 = 0;
  Value = 0;
  v8 = *(_QWORD *)(W32GetSessionState(a1) + 88) + 2856LL;
  v13 = W32GetUserSessionState(v10, v9) + 68440;
  if ( *(_DWORD *)a1 )
  {
    v14 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 48) + 520LL);
    if ( !v14 )
      return 3221225659LL;
    result = v14();
    if ( (int)result >= 0 )
      return xxxRemoteConsoleShadowStart(a1, a3, a4);
    return result;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 )
    v4 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v4;
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      10,
      (__int64)&WPP_b41d09c950c132318bc5241efa612b4b_Traceguids,
      (__int64)a3);
  }
  HYDRA_HINT(8LL, v11);
  v21 = *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40);
  if ( PsGetCurrentProcess(v23, v22) != v21 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v24) + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_DWORD *)(v13 + 412) )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  *(_QWORD *)(v13 + 488) = v13 + 512;
  result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 48), (_OWORD *)(v13 + 200));
  if ( (int)result >= 0 )
  {
    result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 56), (_OWORD *)(v13 + 216));
    v25 = result;
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(v13 + 192) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v13 + 196) = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(v13 + 184) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v13 + 232) = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(v13 + 248) = *(_QWORD *)(a1 + 64);
      SetProtocolType(*(unsigned __int16 *)(a1 + 264));
      *(_WORD *)(v13 + 608) = *(_WORD *)(a1 + 264);
      *(_QWORD *)(v13 + 400) = *(_QWORD *)(a1 + 268);
      *(_DWORD *)(v13 + 408) = *(_DWORD *)(a1 + 276);
      v26 = *(_DWORD *)(a1 + 240);
      *(_DWORD *)(W32GetUserSessionState(v28, v27) + 16272) = v26;
      v29 = *(_DWORD *)(a1 + 244);
      *(_DWORD *)(W32GetUserSessionState(v31, v30) + 14036) = v29;
      *(_QWORD *)(v13 + 256) = *(_QWORD *)(a1 + 304);
      *(_DWORD *)(v13 + 264) = *(_DWORD *)(a1 + 312);
      *(_DWORD *)(v13 + 308) = *(_DWORD *)(v13 + 192);
      *(_OWORD *)(v13 + 268) = *(_OWORD *)(a1 + 162);
      *(_OWORD *)(v13 + 284) = *(_OWORD *)(a1 + 178);
      *(_QWORD *)(v13 + 300) = *(_QWORD *)(a1 + 194);
      v34 = W32GetUserSessionState(v33, v32);
      *(_OWORD *)(v34 + 63560) = *(_OWORD *)(a1 + 202);
      v35 = v34 + 64120;
      *(_WORD *)(v34 + 63576) = *(_WORD *)(a1 + 218);
      *(_OWORD *)(v34 + 63580) = *(_OWORD *)(a1 + 220);
      *(_DWORD *)(v34 + 63596) = *(_DWORD *)(a1 + 236);
      memset((void *)(v34 + 64120), 0, 0x40uLL);
      *(_OWORD *)v35 = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(v35 + 16) = *(_OWORD *)(a1 + 96);
      *(_OWORD *)(v35 + 32) = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(v35 + 48) = *(_OWORD *)(a1 + 128);
      v36 = wcschr((const wchar_t *)v35, 0x23u);
      if ( v36 )
        *v36 = 0;
      v37 = *(_DWORD *)(v13 + 176);
      *(_DWORD *)(v13 + 176) = *(_DWORD *)(a1 + 292);
      *(_DWORD *)(v8 + 64) = *(_DWORD *)(a1 + 292);
      LODWORD(v86) = v37;
      if ( *(_DWORD *)(a1 + 292) )
        *(_QWORD *)(v8 + 68) = *(_QWORD *)(a1 + 296);
      SetConnectedState(1LL, *(unsigned int *)(v13 + 320));
      if ( !(unsigned int)IsRemoteConnection()
        || (FastGetProfileIntW(0LL, 39LL, (__int64)L"CursorBlinkEnable", 0, &Value, 0), Value) )
      {
        v41 = W32GetUserSessionState(v39, v38);
        *(_DWORD *)(*(_QWORD *)(v41 + 19872) + 2236LL) |= 4u;
      }
      else
      {
        v40 = W32GetUserSessionState(v39, v38);
        *(_DWORD *)(*(_QWORD *)(v40 + 19872) + 2236LL) &= ~4u;
      }
      v42 = *(_QWORD *)(v13 + 472);
      if ( v42 || (v43 = *(void **)(v13 + 184)) == 0LL )
      {
        if ( *(_QWORD *)(v13 + 184)
          || (unsigned int)GreMultiUserInitSession(
                             v8,
                             *(_QWORD *)(v13 + 248),
                             *(_QWORD *)(v13 + 488),
                             *(_DWORD *)(v13 + 192),
                             *(_DWORD *)(v13 + 196),
                             v42,
                             *(_QWORD *)(v13 + 480),
                             v88,
                             a3,
                             19,
                             (unsigned __int16 *)(v13 + 268)) )
        {
          goto LABEL_40;
        }
      }
      else
      {
        Object = 0LL;
        v25 = ObReferenceObjectByHandle(v43, 0, 0LL, 0, &Object, 0LL);
        if ( v25 < 0 )
          goto LABEL_61;
        v46 = (struct _FILE_OBJECT *)Object;
        *(_QWORD *)(v13 + 472) = Object;
        RelatedDeviceObject = IoGetRelatedDeviceObject(v46);
        v48 = *(void **)(v13 + 248);
        v49 = RelatedDeviceObject;
        Object = 0LL;
        v50 = ObReferenceObjectByHandle(v48, 0, 0LL, 0, &Object, 0LL);
        v45 = Object;
        v25 = v50;
        *(_QWORD *)(v13 + 480) = Object;
        if ( v50 < 0 )
          goto LABEL_61;
        if ( (unsigned int)GreMultiUserInitSession(
                             v8,
                             *(_QWORD *)(v13 + 248),
                             *(_QWORD *)(v13 + 488),
                             *(_DWORD *)(v13 + 192),
                             *(_DWORD *)(v13 + 196),
                             *(_QWORD *)(v13 + 472),
                             (__int64)v45,
                             v88,
                             a3,
                             19,
                             (unsigned __int16 *)(v13 + 268)) )
        {
          if ( (unsigned int)IsRemoteConnection() )
          {
            v25 = GreDeviceIoControlImpl(v49, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)&Object, 0, 1);
            if ( v25 < 0 )
              goto LABEL_61;
            v25 = GreDrvConnect(v8);
          }
          if ( v25 >= 0 )
          {
LABEL_40:
            v45 = *(PVOID *)(v13 + 232);
            if ( v45 )
            {
              Object = 0LL;
              v25 = ObReferenceObjectByHandle(v45, 0, 0LL, 0, &Object, 0LL);
              *(_QWORD *)(v13 + 240) = Object;
              if ( v25 < 0 )
                goto LABEL_61;
            }
            if ( !*(_DWORD *)(v13 + 172) || *(_DWORD *)(W32GetUserGdiSessionState(v45) + 32) )
            {
              LOBYTE(v60) = (unsigned int)IsRemoteConnection() == 0;
              GreDxgkSessionConnected(v60);
              v45 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
                || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v61 = 0;
              }
              v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
                v66 = W32GetUserSessionState(v65, v64);
                LOBYTE(v67) = v62;
                LOBYTE(v68) = v61;
                WPP_RECORDER_AND_TRACE_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v68,
                  v67,
                  *(_QWORD *)(v66 + 69144),
                  4,
                  14,
                  11,
                  (__int64)&WPP_b41d09c950c132318bc5241efa612b4b_Traceguids,
                  CurrentWin32kSessionId);
                v37 = v86;
              }
              v25 = 0;
              goto LABEL_61;
            }
            if ( InitVideo(a4) )
            {
              v53 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v52, v51) + 48) + 536LL);
              if ( (!v53 || v53() < 0 || (unsigned int)LW_BrushInit())
                && (InitLoadResources(0LL),
                    v86 = Win32AllocPoolZInitImpl(64LL, 0x40uLL, 0x744B7355u),
                    SGRDPgptmrWD<_KTIMER *>::operator=(v54, &v86),
                    *(_QWORD *)(W32GetUserSessionState(v56, v55) + 68944)) )
              {
                v57 = W32GetUserSessionState(v45, v44);
                KeInitializeTimerEx(*(PKTIMER *)(v57 + 68944), SynchronizationTimer);
                LOBYTE(v58) = (unsigned int)IsRemoteConnection() == 0;
                GreDxgkSessionConnected(v58);
                *(_DWORD *)(W32GetUserGdiSessionState(v59) + 32) = 1;
              }
              else
              {
                v25 = -1073741801;
              }
              goto LABEL_61;
            }
            SetConnectedState(0LL, 0LL);
            goto LABEL_46;
          }
LABEL_61:
          v69 = W32GetUserSessionState(v45, v44);
          KeSetEvent(*(PRKEVENT *)(v69 + 68384), 1, 0);
          if ( v25 )
          {
            if ( v25 < 0 )
            {
              *(_DWORD *)(v13 + 176) = v37;
              *(_DWORD *)(v8 + 64) = v37;
              CleanupRemoteHandles((_QWORD *)v8, v70);
            }
          }
          else
          {
            if ( !*(_WORD *)(W32GetUserSessionState(v71, v70) + 68752) )
            {
              v74 = W32GetCurrentWin32kSessionId();
              RtlSetActiveConsoleId(v74);
            }
            v75 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v73, v72) + 48) + 552LL);
            if ( v75 )
            {
              if ( v75() >= 0 )
              {
                v78 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v77, v76) + 48) + 560LL);
                if ( v78 )
                  v78();
              }
            }
            if ( (unsigned int)IsRemoteConnection() )
            {
              v81 = *(_QWORD *)(v8 + 40);
              v82 = *(_WORD *)(v13 + 312);
              v83 = W32GetUserSessionState(v80, v79);
              DrvEscapeRemoteDrivers(*(_QWORD *)(*(_QWORD *)(v83 + 56968) + 16LL), v82, v81, 6u, 0LL, 0);
            }
            SetConnectCompletedState(1LL);
          }
          SetConsoleSwitchInProgress(0LL);
          DispBrokerAsyncSessionStateChanged(a4);
          LOBYTE(v84) = 1;
          DxgkEngNotifyDisplayChange(v84);
          return (unsigned int)v25;
        }
      }
LABEL_46:
      v25 = -1073741823;
      goto LABEL_61;
    }
  }
  return result;
}
