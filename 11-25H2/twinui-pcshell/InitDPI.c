/*
 * XREFs of InitDPI @ 0x1801B8920
 * Callers:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1801B87F8 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x1801B8844 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x180378AA0 (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?DownlevelIsProcessDPIAware@@YAHXZ @ 0x1801B89C4 (-DownlevelIsProcessDPIAware@@YAHXZ.c)
 */

int InitDPI()
{
  int result; // eax
  HDC DC; // rax
  HDC v2; // rbx

  result = DownlevelIsProcessDPIAware();
  if ( dword_180897ED0 == -1 || dword_18089D6DC != result )
  {
    dword_18089D6DC = result;
    DC = GetDC(0LL);
    v2 = DC;
    if ( DC )
    {
      dword_180897ED0 = GetDeviceCaps(DC, 88);
      dword_180897ED4 = GetDeviceCaps(v2, 90);
      return ReleaseDC(0LL, v2);
    }
    else
    {
      result = 96;
      dword_180897ED0 = 96;
      dword_180897ED4 = 96;
    }
  }
  return result;
}
