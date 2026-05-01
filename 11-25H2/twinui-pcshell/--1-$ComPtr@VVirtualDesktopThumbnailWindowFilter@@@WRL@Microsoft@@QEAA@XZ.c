/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@QEAA@XZ @ 0x18049A718
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopThumbnailWindowFilter_VirtualDesktopThumbnailWindowFilter_IVirtualDesktopManagerInternal___&_ITabletModeController___&_IVirtualDesktopNotificationService___&__::_1_::dtor$2 @ 0x1806C924F (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopThumbnailWindowFilter_VirtualDesktopTh.c)
 *     _VirtualDesktopThumbnailWindowFilter_CreateInstance_::_1_::dtor$0 @ 0x1806C9273 (_VirtualDesktopThumbnailWindowFilter_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::~ComPtr<VirtualDesktopThumbnailWindowFilter>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(a1);
}
