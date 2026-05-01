/*
 * XREFs of InitDPI @ 0x1801B5410
 * Callers:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1801B52E0 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x1801B5334 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x180380950 (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?DownlevelIsProcessDPIAware@@YAHXZ @ 0x1801B54B4 (-DownlevelIsProcessDPIAware@@YAHXZ.c)
 */

int InitDPI()
{
  int result; // eax
  HDC DC; // rax
  HDC v2; // rbx

  result = DownlevelIsProcessDPIAware();
  if ( dword_1808D8528 == -1 || dword_1808DDCE8 != result )
  {
    dword_1808DDCE8 = result;
    DC = GetDC(0LL);
    v2 = DC;
    if ( DC )
    {
      dword_1808D8528 = GetDeviceCaps(DC, 88);
      dword_1808D8524 = GetDeviceCaps(v2, 90);
      return ReleaseDC(0LL, v2);
    }
    else
    {
      result = 96;
      dword_1808D8528 = 96;
      dword_1808D8524 = 96;
    }
  }
  return result;
}
