/*
 * XREFs of ?TryGetOcclusionMarginFromProtectedForegroundWindow@CToastCenterExperienceManager@@CAHXZ @ 0x18037F398
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802396A4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 CToastCenterExperienceManager::TryGetOcclusionMarginFromProtectedForegroundWindow(void)
{
  HWND ForegroundWindow; // rdi
  HMONITOR v1; // rbx
  _DWORD lParam[4]; // [rsp+20h] [rbp-58h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+30h] [rbp-48h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow )
    return 0LL;
  memset(&wndpl, 0, sizeof(wndpl));
  wndpl.length = 44;
  if ( !GetWindowPlacement(ForegroundWindow, &wndpl) )
    return 0LL;
  if ( wndpl.showCmd != 3 )
    return 0LL;
  *(_QWORD *)&lParam[1] = 0LL;
  v1 = MonitorFromPoint(0LL, 1u);
  if ( MonitorFromWindow(ForegroundWindow, 0) != v1 )
    return 0LL;
  lParam[0] = 0;
  EnumChildWindows(ForegroundWindow, (WNDENUMPROC)CToastCenterExperienceManager::FindToastShiftMargin, (LPARAM)lParam);
  return lParam[0];
}
