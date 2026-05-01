/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C1538
 * Callers:
 *     _CWRLImpWndProc_VirtualDesktopGestureWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x1806D9DDF (_CWRLImpWndProc_VirtualDesktopGestureWindow_--s_WndProcBase_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_VirtualDesktopHotKeyWindow_IVirtualDesktopManagerPrivate___ISwitchThumbnailDeviceManager___IApplicationViewCollection___IImmersiveSettingsCache___Geometry::CRect_&_HMONITOR_____&__::_1_::dtor$0 @ 0x1806DFC29 (_Microsoft--WRL--Details--Make_VirtualDesktopHotKeyWindow_IVirtualDesktopManagerPri_ea_1806DFC29.c)
 *     _VirtualDesktopSwitchAnimator::AnimateOperation2_::_1_::dtor$6 @ 0x1806F463E (_VirtualDesktopSwitchAnimator--AnimateOperation2_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::~ComPtr<VirtualDesktopGestureWindow>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 16) + 16LL))(result + 16);
  }
  return result;
}
