/*
 * XREFs of UserIsConsoleConnection @ 0x140028F70
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140027938 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x140028DC0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     DrvSetGraphicsDevices @ 0x14018F7D0 (DrvSetGraphicsDevices.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x140190660 (DrvSessionHasAnyGraphicsDevice.c)
 *     DrvEscapeRemoteDrivers @ 0x1401973A0 (DrvEscapeRemoteDrivers.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401D2960 (xxxDisplayDiagBlackScreenDetected.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsConsoleConnection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_WORD *)(W32GetUserSessionState(a1, a2, a3, a4) + 68744) == 0;
}
