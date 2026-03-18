/*
 * XREFs of UserIsWddmConnectedSession @ 0x14006BDB0
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x14004DA74 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     UpdateGraphicsDeviceList @ 0x14006A7C8 (UpdateGraphicsDeviceList.c)
 *     DrvSetMonitorPowerState @ 0x14006A8A0 (DrvSetMonitorPowerState.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14006A8F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     EngQueryW32kCddInterface @ 0x14006BBD0 (EngQueryW32kCddInterface.c)
 *     GreSuspendDirectDraw @ 0x140072B40 (GreSuspendDirectDraw.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x14013E318 (DrvChangeDisplaySettingsPreValidate.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016ED70 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x14016F770 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserQueryDisplayConfig @ 0x140172D30 (NtUserQueryDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401AED90 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CE890 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x14006BED0 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 __fastcall UserIsWddmConnectedSession(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*(_WORD *)(W32GetUserSessionState(a1, a2) + 68752) || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 1;
  return v2;
}
