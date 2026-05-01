/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800813C4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopManager_IVirtualDesktopCollection___&_IVirtualDesktopVisibilityPolicy___&_IVirtualDesktopNotification___&_IVirtualDesktopForegroundPolicy___&_IVirtualDesktopPersistence___&_std::nullptr_t_IVirtualDesktopLock___&__::_1_::dtor$2 @ 0x1806D0B93 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopM_ea_1806D0B93.c)
 *     _CVirtualDesktopComponent::RuntimeClassInitialize_::_1_::dtor$11 @ 0x1806D0BC9 (_CVirtualDesktopComponent--RuntimeClassInitialize_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<CVirtualDesktopManager>::~ComPtr<CVirtualDesktopManager>()
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease();
}
