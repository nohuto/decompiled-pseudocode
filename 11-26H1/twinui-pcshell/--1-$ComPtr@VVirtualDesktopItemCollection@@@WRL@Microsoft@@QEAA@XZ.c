/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B1C34
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopItemCollection_VirtualDesktopItemCollection_IVirtualDesktopItemFactory___&_IVirtualDesktopManagerInternal___&_IVirtualDesktopNotificationService___&__::_1_::dtor$2 @ 0x1806F132E (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopItemCollection_VirtualDesktopItemColle.c)
 *     _VirtualDesktopItemCollection_CreateInstance_::_1_::dtor$0 @ 0x1806F1340 (_VirtualDesktopItemCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::~ComPtr<VirtualDesktopItemCollection>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(a1);
}
