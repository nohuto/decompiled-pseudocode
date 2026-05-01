/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@QEAA@XZ @ 0x1802A3820
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopAcessibility_VirtualDesktopAcessibility_enum__TABLETMODESTATE_&_IVirtualDesktopNotificationServicePrivate___&_IVirtualDesktopCollection___&_IVirtualDesktopManagerPrivate___&_IVirtualDesktopLock___&__::_1_::dtor$2 @ 0x1806D0B39 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopAcessibility_VirtualDesktopAcessibilit.c)
 *     _VirtualDesktopAcessibility_CreateInstance_::_1_::dtor$0 @ 0x1806D0B6F (_VirtualDesktopAcessibility_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::~ComPtr<VirtualDesktopAcessibility>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease(a1);
}
