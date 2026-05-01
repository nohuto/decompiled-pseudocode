/*
 * XREFs of ?SwitchToRemoteDesktop@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUguid@3@H@Z @ 0x180636DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchToRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x1804C6A70 (-SwitchToRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::SwitchToRemoteDesktop(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SwitchToRemoteDesktop((a1 - 16) & -(__int64)(a1 != 0));
  return 0LL;
}
