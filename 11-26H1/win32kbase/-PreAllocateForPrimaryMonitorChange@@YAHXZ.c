/*
 * XREFs of ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14011DB50
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x14011DBC0 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x14011DC04 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

__int64 __fastcall PreAllocateForPrimaryMonitorChange(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 UserSessionState; // rdi
  struct _REFCOUNTED_DPI_INFORMATION *MonitorDpiInfo; // rax

  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( !*(_QWORD *)(UserSessionState + 71192) )
    *(_QWORD *)(UserSessionState + 71192) = CreateMonitor();
  MonitorDpiInfo = *(struct _REFCOUNTED_DPI_INFORMATION **)(UserSessionState + 71200);
  if ( !MonitorDpiInfo )
  {
    MonitorDpiInfo = CreateMonitorDpiInfo();
    *(_QWORD *)(UserSessionState + 71200) = MonitorDpiInfo;
  }
  if ( *(_QWORD *)(UserSessionState + 71192) && MonitorDpiInfo )
    return 1;
  return v3;
}
