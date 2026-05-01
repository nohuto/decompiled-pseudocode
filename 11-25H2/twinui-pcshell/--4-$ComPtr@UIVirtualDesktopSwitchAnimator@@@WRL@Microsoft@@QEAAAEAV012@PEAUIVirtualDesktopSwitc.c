/*
 * XREFs of ??4?$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x1800A2880
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1800A2804 (-RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopMan.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x1800A29F0 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUIVirtualDesktopSwitchAnimator@@@Z.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x1805363B0 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIAppl.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180536430 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManag_ea_180536430.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUIVirtualDesktopSwitchAnimator@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1805364C0 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUIVirtualDesktopSwitchAnimator@@AEBV-$com.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<IVirtualDesktopSwitchAnimator>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
