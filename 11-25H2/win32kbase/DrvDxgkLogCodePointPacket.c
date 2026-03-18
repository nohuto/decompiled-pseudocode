/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1400E2640
 * Callers:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14006A8F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x1400E1094 (DrvLogDrvChangeDisplaySettingsFailures.c)
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 *     LogDiagSDC @ 0x1400E2360 (LogDiagSDC.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x14014527C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14017C180 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     LogDiagCDS @ 0x14019C390 (LogDiagCDS.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401CBDE8 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(__int64 a1, int a2, int a3, int a4)
{
  __int64 DxgkWin32kInterface; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int128 v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  v6[0] = 6;
  v10 = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v6[1] = 64;
  v11 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  (*(void (__fastcall **)(_DWORD *))(DxgkWin32kInterface + 304))(v6);
  return v7;
}
