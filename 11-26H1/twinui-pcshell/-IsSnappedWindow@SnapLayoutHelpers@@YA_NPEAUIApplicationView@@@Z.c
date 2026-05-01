/*
 * XREFs of ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180034DF0
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180035520 (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18006E57C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18022B940 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x18059F3E0 (-GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@P.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AF390 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x18005A490 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x18016CAE8 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall SnapLayoutHelpers::IsSnappedWindow(SnapLayoutHelpers *this, struct IApplicationView *a2)
{
  bool v3; // di
  int (__fastcall *v4)(SnapLayoutHelpers *, GUID *, __int64 *); // rsi
  __int64 v5; // rcx
  struct IApplicationView *v6; // rdx
  HWND WindowForView; // rax
  __int64 v8; // rcx
  unsigned int v10; // eax
  int v11; // [rsp+40h] [rbp+20h] BYREF
  int v12; // [rsp+48h] [rbp+28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF

  v3 = 0;
  v13 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( (*(int (__fastcall **)(SnapLayoutHelpers *, int *))(*(_QWORD *)this + 88LL))(this, &v12) >= 0 && v12 )
  {
    v4 = *(int (__fastcall **)(SnapLayoutHelpers *, GUID *, __int64 *))(*(_QWORD *)this + 104LL);
    v5 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( v4(this, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v13) >= 0
      && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 32LL))(v13, &v11) >= 0
      && (v11 == 2 || v11 == 4) )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(this, v6);
      v3 = 0;
      if ( (unsigned int)IsWindowArranged(WindowForView) )
      {
        v10 = SnapLayoutHelpers::DetermineSnapRegionForView(this);
        if ( (unsigned __int8)SnapLayoutHelpers::IsValidSnapRegion(v10) )
          v3 = 1;
      }
    }
  }
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v3;
}
