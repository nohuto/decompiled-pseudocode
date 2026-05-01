/*
 * XREFs of ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804BBB28
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804B9AA0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804BC260 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C1740 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 */

void __fastcall CMultitaskingViewFrame::_EnsureDesktopZOrder(HWND *this)
{
  TaskbarHelpers *v2; // rax
  HMONITOR v3; // rdx
  HWND TrayWindowForMonitor; // rax
  int v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( (unsigned int)GetWindowBand(this[6], &v5) && v5 == 1 && (GetWindowLongW(this[6], -20) & 8) != 0 )
  {
    v2 = (TaskbarHelpers *)MonitorFromWindow(this[6], 2u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v2, v3);
    SetWindowPos(this[6], TrayWindowForMonitor, 0, 0, 0, 0, 0x13u);
  }
}
