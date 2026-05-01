/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged @ 0x1804AC040
 * Callers:
 *     <none>
 * Callees:
 *     ??_9type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BEI@AA @ 0x1802C1460 (--_9type@-$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BEI@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator,void>::type::`vcall'{72,{flat}}(v1);
  return 0LL;
}
