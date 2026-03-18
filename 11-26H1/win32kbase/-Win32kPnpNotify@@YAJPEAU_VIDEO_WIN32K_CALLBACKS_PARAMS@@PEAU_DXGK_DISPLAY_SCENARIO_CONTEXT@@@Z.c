/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1400293F0 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x140181390 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvLogDiagDisplayChange @ 0x140186D50 (DrvLogDiagDisplayChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x140188780 (DrvIsNotUsingGraphicsDevice.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1401891CC (IsxxxSetCsrssThreadDesktopSupported.c)
 *     xxxSetCsrssThreadDesktop @ 0x14018DC48 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x14019CA14 (xxxRestoreCsrssThreadDesktop.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x14019D9D8 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     DxgkEngNotifyDisplayChange @ 0x1401C5CE0 (DxgkEngNotifyDisplayChange.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___ @ 0x1401CE3D4 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D55B8 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 *     DrvCleanupGraphicsDevices @ 0x1401F654C (DrvCleanupGraphicsDevices.c)
 */

__int64 __fastcall Win32kPnpNotify(struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1, struct _GUID *a2, int a3)
{
  __int64 v5; // rcx
  __int64 UserSessionState; // r15
  int v7; // edi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rcx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  PVOID PhysDisp; // rbx
  __int64 i; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rcx
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // rcx
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  __int64 v63; // rcx
  int v64; // ebx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // edx
  int v74; // ecx
  int v75; // r8d
  __int64 v76; // [rsp+60h] [rbp-38h] BYREF
  __int64 v77; // [rsp+68h] [rbp-30h]
  char v78; // [rsp+B0h] [rbp+18h] BYREF

  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  v7 = 0;
  if ( !*(_DWORD *)(UserSessionState + 2748) )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported(v5) < 0 || *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 19176) )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    v17 = *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 56968);
    v20 = *(_QWORD *)(v17 + 16);
    if ( a1->Param )
    {
      if ( (unsigned int)UserIsWddmConnectedSession(v17, v16, v18, v19) )
      {
        v77 = 0LL;
        v76 = 0LL;
        *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v46) + 88) + 1268LL) = 0;
        DrvUpdateGraphicsDeviceList(1LL, v47, v48, v49);
        if ( (unsigned int)DispBrokerGetCurrentMode(v51, v50, v52) )
        {
          if ( *(_DWORD *)(W32GetUserGdiSessionState(v53) + 28)
            && !(unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
          {
            W32GetUserSessionState(v61, v60, v62);
            v7 = DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___(
                   v63,
                   (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
          }
        }
        else if ( (int)IsxxxSetCsrssThreadDesktopSupported(v53) < 0
               || (v57 = W32GetUserSessionState(v55, v54, v56),
                   v7 = xxxSetCsrssThreadDesktop(*(_QWORD *)(v57 + 19176), (__int64)&v76),
                   v7 >= 0) )
        {
          v58 = W32GetUserSessionState(v55, v54, v56);
          v7 = xxxUserSetDisplayConfig(
                 0,
                 0LL,
                 0x88Fu,
                 6u,
                 *(_QWORD *)(v58 + 19176),
                 0,
                 0LL,
                 0LL,
                 0LL,
                 (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                 0LL);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v59) >= 0 )
            xxxRestoreCsrssThreadDesktop((__int64)&v76);
        }
      }
      v64 = PnpNotifyForRemoteSession(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
      if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(v66, v65, v67, v68) )
        v7 = v64;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v17) + 88) + 1184LL); i; i = *(_QWORD *)(i + 128) )
      {
        if ( *(PVOID *)(i + 144) == PhysDisp )
          *(_DWORD *)(i + 164) |= 1u;
      }
      if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(v20, v23) )
      {
        if ( (unsigned int)UserIsWddmConnectedSession(v25, v24, v26, v27) )
        {
          v77 = 0LL;
          v76 = 0LL;
          if ( (int)IsxxxSetCsrssThreadDesktopSupported(v28) < 0
            || (v32 = W32GetUserSessionState(v30, v29, v31),
                v7 = xxxSetCsrssThreadDesktop(*(_QWORD *)(v32 + 19176), (__int64)&v76),
                v7 >= 0) )
          {
            v78 = 0;
            v33 = W32GetUserSessionState(v30, v29, v31);
            v7 = xxxUserSetDisplayConfig(
                   0,
                   0LL,
                   0x88Fu,
                   0x406u,
                   *(_QWORD *)(v33 + 19176),
                   0,
                   0LL,
                   0LL,
                   &v78,
                   (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                   0LL);
            if ( v7 < 0 )
            {
              v37 = W32GetUserSessionState(v35, v34, v36);
              v7 = xxxUserSetDisplayConfig(
                     0,
                     0LL,
                     0x88Fu,
                     1u,
                     *(_QWORD *)(v37 + 19176),
                     0,
                     0LL,
                     0LL,
                     0LL,
                     (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                     0LL);
            }
            else if ( a1->SurpriseRemoval && v78 )
            {
              LOBYTE(v35) = 1;
              DxgkEngNotifyDisplayChange(v35);
            }
            if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v35) >= 0 )
              xxxRestoreCsrssThreadDesktop((__int64)&v76);
          }
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
      if ( v7 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(v39, v38, v40, v41) )
        DrvUpdateGraphicsDeviceList(1LL, v42, v44, v45);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0LL);
    }
    if ( UserIsConsoleConnection(v43, v42, v44, v45) && !*(_DWORD *)(UserSessionState + 2748)
      || (unsigned int)UserRemoteConnectedSessionUsingWddm(v70, v69, v71, v72)
      && *(_DWORD *)(W32GetUserSessionState(v74, v73, v75) + 68852) )
    {
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, a2);
    }
    return (unsigned int)v7;
  }
  else
  {
    *(_BYTE *)(W32GetUserGdiSessionState(v11) + 20) = 0;
    return 3221225473LL;
  }
}
