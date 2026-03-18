/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14006A8F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x14006BED0 (UserRemoteConnectedSessionUsingWddm.c)
 *     DxgkEngNotifyDisplayChange @ 0x1400ACA40 (DxgkEngNotifyDisplayChange.c)
 *     DrvLogDiagDisplayChange @ 0x14014A0D0 (DrvLogDiagDisplayChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x14014B420 (DrvIsNotUsingGraphicsDevice.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x14014C220 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     xxxSetCsrssThreadDesktop @ 0x140155544 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x14015C5D0 (xxxRestoreCsrssThreadDesktop.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x14015CF3C (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     DrvDisableGraphicsDevices @ 0x14015F83C (DrvDisableGraphicsDevices.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___ @ 0x1401AB5F0 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401ABE78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AFF08 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1401CCBD4 (DrvCleanupGraphicsDevices.c)
 */

__int64 __fastcall Win32kPnpNotify(struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1, struct _GUID *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // r14
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  PVOID PhysDisp; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // [rsp+60h] [rbp-38h] BYREF
  __int64 v58; // [rsp+68h] [rbp-30h]
  char v59; // [rsp+B0h] [rbp+18h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = 0;
  if ( !*(_DWORD *)(UserSessionState + 2752) )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported(v5, v4) < 0 || *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19144) )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 56968);
    v16 = *(_QWORD *)(v15 + 16);
    if ( a1->Param )
    {
      if ( (unsigned int)UserIsWddmConnectedSession(v15, v14) )
      {
        v58 = 0LL;
        v57 = 0LL;
        *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v34) + 88) + 1180LL) = 0;
        DrvUpdateGraphicsDeviceList(1LL, v35);
        if ( (unsigned int)DispBrokerGetCurrentMode(v37, v36) )
        {
          if ( *(_DWORD *)(W32GetUserGdiSessionState(v39) + 28)
            && !(unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
          {
            W32GetUserSessionState(v48, v47);
            v7 = DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___(
                   v49,
                   (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
          }
        }
        else if ( (int)IsxxxSetCsrssThreadDesktopSupported(v39, v38) < 0
               || (v42 = W32GetUserSessionState(v41, v40),
                   v7 = xxxSetCsrssThreadDesktop(*(_QWORD *)(v42 + 19144), (__int64)&v57),
                   v7 >= 0) )
        {
          v43 = W32GetUserSessionState(v41, v40);
          v7 = xxxUserSetDisplayConfig(
                 0,
                 0LL,
                 0x88Fu,
                 6u,
                 *(_QWORD *)(v43 + 19144),
                 0,
                 0LL,
                 0LL,
                 0LL,
                 (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                 0LL);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v45, v44) >= 0 )
            xxxRestoreCsrssThreadDesktop((__int64)&v57, v46);
        }
      }
      v50 = PnpNotifyForRemoteSession(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
      if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(v52, v51) )
        v7 = v50;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      DrvDisableGraphicsDevices((__int64)PhysDisp);
      if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(v16) )
      {
        if ( (unsigned int)UserIsWddmConnectedSession(v19, v18) )
        {
          v58 = 0LL;
          v57 = 0LL;
          if ( (int)IsxxxSetCsrssThreadDesktopSupported(v21, v20) < 0
            || (v24 = W32GetUserSessionState(v23, v22),
                v7 = xxxSetCsrssThreadDesktop(*(_QWORD *)(v24 + 19144), (__int64)&v57),
                v7 >= 0) )
          {
            v59 = 0;
            v25 = W32GetUserSessionState(v23, v22);
            v7 = xxxUserSetDisplayConfig(
                   0,
                   0LL,
                   0x88Fu,
                   0x406u,
                   *(_QWORD *)(v25 + 19144),
                   0,
                   0LL,
                   0LL,
                   &v59,
                   (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                   0LL);
            if ( v7 < 0 )
            {
              v28 = W32GetUserSessionState(v27, v26);
              v7 = xxxUserSetDisplayConfig(
                     0,
                     0LL,
                     0x88Fu,
                     1u,
                     *(_QWORD *)(v28 + 19144),
                     0,
                     0LL,
                     0LL,
                     0LL,
                     (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                     0LL);
            }
            else if ( a1->SurpriseRemoval && v59 )
            {
              DxgkEngNotifyDisplayChange(0LL);
            }
            if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v27, v26) >= 0 )
              xxxRestoreCsrssThreadDesktop((__int64)&v57, v29);
          }
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
      if ( v7 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(v31, v30) )
        DrvUpdateGraphicsDeviceList(1LL, v32);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0LL);
    }
    if ( UserIsConsoleConnection(v33, v32) && !*(_DWORD *)(UserSessionState + 2752)
      || (unsigned int)UserRemoteConnectedSessionUsingWddm(v54, v53)
      && *(_DWORD *)(W32GetUserSessionState(v56, v55) + 68860) )
    {
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, a2);
    }
    return (unsigned int)v7;
  }
  else
  {
    *(_BYTE *)(W32GetUserGdiSessionState(v10) + 20) = 0;
    return 3221225473LL;
  }
}
