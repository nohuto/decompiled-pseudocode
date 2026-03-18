/*
 * XREFs of UserRemoteConnectedSessionUsingWddm @ 0x1400293F0
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140027938 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x1400FB568 (-CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA-AV1@XZ.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserRemoteConnectedSessionUsingWddm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v8 = 0;
  if ( *(_WORD *)(W32GetUserSessionState(a1, a2, a3, a4) + 68744)
    && *(_WORD *)(W32GetUserSessionState(v5, v4, v6, v7) + 68744) != 0xFFFF )
  {
    return *(_DWORD *)(W32GetUserSessionState(0xFFFFLL, v10, v11, v12) + 68696) != 0;
  }
  return v8;
}
