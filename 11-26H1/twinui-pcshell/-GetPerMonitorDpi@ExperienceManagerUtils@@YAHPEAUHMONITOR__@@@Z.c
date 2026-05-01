/*
 * XREFs of ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1801B52E0
 * Callers:
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x18018A304 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 *     ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801B5168 (-SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180238DB4 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802396A4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802AAA08 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180365AE0 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1806832E0 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     InitDPI @ 0x1801B5410 (InitDPI.c)
 */

__int64 __fastcall ExperienceManagerUtils::GetPerMonitorDpi(ExperienceManagerUtils *this, HMONITOR a2)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( this )
  {
    v3 = 0;
    v4 = 0;
    if ( (int)GetDpiForMonitor(this, 0LL, &v3, &v4) >= 0 )
      return v3;
  }
  InitDPI(this, a2);
  return (unsigned int)dword_1808D8528;
}
