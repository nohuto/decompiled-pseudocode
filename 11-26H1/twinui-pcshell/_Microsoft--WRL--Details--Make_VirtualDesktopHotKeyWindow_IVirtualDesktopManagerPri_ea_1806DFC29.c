/*
 * XREFs of _Microsoft::WRL::Details::Make_VirtualDesktopHotKeyWindow_IVirtualDesktopManagerPrivate___ISwitchThumbnailDeviceManager___IApplicationViewCollection___IImmersiveSettingsCache___Geometry::CRect_&_HMONITOR_____&__::_1_::dtor$0 @ 0x1806DFC29
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C1538 (--1-$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_VirtualDesktopHotKeyWindow_IVirtualDesktopManagerPrivate___ISwitchThumbnailDeviceManager___IApplicationViewCollection___IImmersiveSettingsCache___Geometry::CRect___HMONITOR________::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::~ComPtr<VirtualDesktopGestureWindow>(*(__int64 **)(a2 + 112));
  }
  return result;
}
