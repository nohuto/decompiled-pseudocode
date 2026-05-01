/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C6B38
 * Callers:
 *     _VirtualDesktopGestureHandler_CreateInstance_::_1_::dtor$0 @ 0x1806DAD29 (_VirtualDesktopGestureHandler_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopGestureHandler_VirtualDesktopGestureHandler_IVirtualDesktopManagerInternal___&__::_1_::dtor$1 @ 0x1806DAD3B (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopGestureHandler_VirtualDesktopGestureHa.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopGestureHandler>::~ComPtr<VirtualDesktopGestureHandler>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopGestureHandler>::InternalRelease(a1);
}
