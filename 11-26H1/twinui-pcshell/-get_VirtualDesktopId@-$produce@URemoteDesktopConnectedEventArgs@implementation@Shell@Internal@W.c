/*
 * XREFs of ?get_VirtualDesktopId@?$produce@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteDesktopConnectedEventArgs@3456@@impl@winrt@@UEAAHPEAUguid@3@@Z @ 0x18066FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?VirtualDesktopId@RemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x18066FDB8 (-VirtualDesktopId@RemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs,winrt::Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs>::get_VirtualDesktopId(
        __int64 a1)
{
  _OWORD *v1; // rax
  _OWORD *v2; // r8
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs::VirtualDesktopId(
         (a1 - 16) & -(__int64)(a1 != 0),
         &v4);
  *v2 = *v1;
  return 0LL;
}
