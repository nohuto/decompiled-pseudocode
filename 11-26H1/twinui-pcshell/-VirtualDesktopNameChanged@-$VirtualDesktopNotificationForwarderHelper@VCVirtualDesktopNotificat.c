/*
 * XREFs of ?VirtualDesktopNameChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18054D210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopNameChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *,HSTRING__ *>(
           a1 - 8,
           (__int64) winrt::impl::abi<winrt::Windows::Internal::Shell::INetworkConnectionUtils,void>::type::`vcall'{64,{flat}},
           a2,
           a3);
}
