/*
 * XREFs of ?MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ @ 0x180170834
 * Callers:
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18016FCD0 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x180170784 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::MonitorRectChanged(HWND *this)
{
  HWND v2; // rcx
  int X[4]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *this;
  *(_OWORD *)X = 0LL;
  if ( (*(int (__fastcall **)(HWND, int *))(*(_QWORD *)v2 + 72LL))(v2, X) >= 0 )
    SetWindowPos(this[2], 0LL, X[0], X[1], 0, 0, 0x14u);
}
