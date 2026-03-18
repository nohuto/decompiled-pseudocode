/*
 * XREFs of UserIsWddmConnectedSession @ 0x1400293B0
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x14000A35C (UpdateGraphicsDeviceList.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140027938 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     EngQueryW32kCddInterface @ 0x14002B170 (EngQueryW32kCddInterface.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x140177758 (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetMonitorPowerState @ 0x140181340 (DrvSetMonitorPowerState.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x140181390 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401D2960 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401F81D4 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1400293F0 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 __fastcall UserIsWddmConnectedSession(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !*(_WORD *)(W32GetUserSessionState(a1, a2, a3, a4) + 68744)
    || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
  {
    return 1;
  }
  return v4;
}
