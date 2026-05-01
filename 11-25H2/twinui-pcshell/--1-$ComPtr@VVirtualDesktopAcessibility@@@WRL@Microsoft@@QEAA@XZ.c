/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D18B8
 * Callers:
 *     _VirtualDesktopAcessibility_CreateInstance_::_1_::dtor$0 @ 0x1806A95B3 (_VirtualDesktopAcessibility_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopAcessibility_VirtualDesktopAcessibility_enum__TABLETMODESTATE_&_IVirtualDesktopNotificationServicePrivate___&_IVirtualDesktopCollection___&_IVirtualDesktopManagerPrivate___&_IVirtualDesktopLock___&__::_1_::dtor$2 @ 0x1806B223D (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopAcessibility_VirtualDesktopAcessibilit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::~ComPtr<VirtualDesktopAcessibility>(
        volatile signed __int32 **a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease(a1);
}
