/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D55B8
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x140027740 (UserRemoteConnectedSessionUsingXddm.c)
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1401891CC (IsxxxSetCsrssThreadDesktopSupported.c)
 *     xxxSetCsrssThreadDesktop @ 0x14018DC48 (xxxSetCsrssThreadDesktop.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x14019B368 (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x14019CA14 (xxxRestoreCsrssThreadDesktop.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x14019D9D8 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1401F6734 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1401F96EC (DrvUpdateRemoteGraphicsDeviceList.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 result; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 UserSessionState; // rax
  __int64 v18; // rcx
  __int128 v19; // [rsp+60h] [rbp-18h] BYREF

  v19 = 0LL;
  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1, (__int64)a2) )
    return 0LL;
  if ( !(unsigned int)UserRemoteConnectedSessionUsingXddm() )
  {
LABEL_6:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
    {
      UserSessionState = W32GetUserSessionState(v15, v14, v16);
      xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 2u, *(_QWORD *)(UserSessionState + 19176), 0, 0LL, 0LL, 0LL, a2, 0LL);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v18) >= 0 )
        xxxRestoreCsrssThreadDesktop((__int64)&v19);
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported(v3) < 0
    || (v8 = W32GetUserSessionState(v5, v4, v6),
        result = xxxSetCsrssThreadDesktop(*(_QWORD *)(v8 + 19176), (__int64)&v19),
        (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1LL, v4, v6, v7);
    v13 = W32GetUserSessionState(v11, v10, v12);
    xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 1u, *(_QWORD *)(v13 + 19176), 0, 0LL, 0LL, 0LL, a2, 0LL);
    goto LABEL_6;
  }
  return result;
}
