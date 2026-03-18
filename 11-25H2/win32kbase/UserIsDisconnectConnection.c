/*
 * XREFs of UserIsDisconnectConnection @ 0x14006BBA0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x14006D6B0 (DrvSessionHasAnyGraphicsDevice.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvEscapeRemoteDrivers @ 0x1401586B0 (DrvEscapeRemoteDrivers.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsDisconnectConnection(__int64 a1, __int64 a2)
{
  return *(_WORD *)(W32GetUserSessionState(a1, a2) + 68752) == 0xFFFF;
}
