/*
 * XREFs of ?DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@PEAUIVirtualDesktopSwitcherInvoker@@@Z @ 0x1801CD2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 */

__int64 __fastcall VirtualDesktopGestureHandler::DelayInitialize(
        VirtualDesktopGestureHandler *this,
        struct ISwitchThumbnailDeviceManager *a2,
        struct IApplicationViewCollection *a3,
        struct IImmersiveSettingsCache *a4,
        struct IImmersiveMonitorManager *a5,
        struct IVirtualDesktopSwitcherInvoker *a6)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 3, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 4, (__int64)a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a5);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 7,
    (__int64)a6);
  return 0LL;
}
