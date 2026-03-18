/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AFF08
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x14004D980 (UserRemoteConnectedSessionUsingXddm.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x14014C220 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     xxxSetCsrssThreadDesktop @ 0x140155544 (xxxSetCsrssThreadDesktop.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x14015AF4C (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x14015C5D0 (xxxRestoreCsrssThreadDesktop.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x14015CF3C (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1401CCDBC (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1401CFD88 (DrvUpdateRemoteGraphicsDeviceList.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // [rsp+60h] [rbp-18h] BYREF

  v22 = 0LL;
  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( !(unsigned int)UserRemoteConnectedSessionUsingXddm(v4, v3) )
  {
LABEL_6:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm(v15, v14) )
    {
      UserSessionState = W32GetUserSessionState(v17, v16);
      xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 2u, *(_QWORD *)(UserSessionState + 19144), 0, 0LL, 0LL, 0LL, a2, 0LL);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v20, v19) >= 0 )
        xxxRestoreCsrssThreadDesktop((__int64)&v22, v21);
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported(v6, v5) < 0
    || (v9 = W32GetUserSessionState(v8, v7),
        result = xxxSetCsrssThreadDesktop(*(_QWORD *)(v9 + 19144), (__int64)&v22),
        (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1LL, v7);
    v13 = W32GetUserSessionState(v12, v11);
    xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 1u, *(_QWORD *)(v13 + 19144), 0, 0LL, 0LL, 0LL, a2, 0LL);
    goto LABEL_6;
  }
  return result;
}
