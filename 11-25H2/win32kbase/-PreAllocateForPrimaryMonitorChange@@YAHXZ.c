/*
 * XREFs of ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x1400CEB20
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1400CEB94 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x1400CEC24 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 */

__int64 __fastcall PreAllocateForPrimaryMonitorChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rdi
  struct _REFCOUNTED_DPI_INFORMATION *MonitorDpiInfo; // rax

  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_QWORD *)(UserSessionState + 71208) )
    *(_QWORD *)(UserSessionState + 71208) = CreateMonitor();
  MonitorDpiInfo = *(struct _REFCOUNTED_DPI_INFORMATION **)(UserSessionState + 71216);
  if ( !MonitorDpiInfo )
  {
    MonitorDpiInfo = CreateMonitorDpiInfo();
    *(_QWORD *)(UserSessionState + 71216) = MonitorDpiInfo;
  }
  if ( *(_QWORD *)(UserSessionState + 71208) && MonitorDpiInfo )
    return 1;
  return v2;
}
