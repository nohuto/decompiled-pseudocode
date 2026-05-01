/*
 * XREFs of ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1803A1DD0
 * Callers:
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1803A1E34 (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z @ 0x1803A2290 (-SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z.c)
 * Callees:
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C1740 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility(const RECT *this)
{
  TaskbarHelpers *v2; // rax
  HMONITOR v3; // rdx
  HWND TrayWindowForMonitor; // rax

  if ( LOBYTE(this[20].left) )
  {
    v2 = (TaskbarHelpers *)MonitorFromRect(this + 19, 1u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v2, v3);
    PostMessageW(TrayWindowForMonitor, 0x4F6u, 0LL, 0LL);
    LOBYTE(this[20].left) = 0;
  }
  return 0LL;
}
