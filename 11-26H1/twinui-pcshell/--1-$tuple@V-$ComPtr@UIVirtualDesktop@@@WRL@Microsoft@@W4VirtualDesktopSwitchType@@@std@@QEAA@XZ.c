/*
 * XREFs of ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ @ 0x180287E94
 * Callers:
 *     _CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification_IVirtualDesktop___enum_VirtualDesktopSwitchType__::_1_::dtor$0 @ 0x1806F3F31 (_CVirtualDesktopNotifications--_ForwardVirtualDesktopNotification2_IVirtualDesktopN_ea_1806F3F31.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification_IVirtualDesktop___enum_VirtualDesktopSwitchType_Microsoft::WRL::ComPtr_IVirtualDesktop__enum_VirtualDesktopSwitchType__::_1_::dtor$0 @ 0x1806F3F67 (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification_IVir_ea_1806F3F67.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
