/*
 * XREFs of ?DeactivateRemoteDesktop@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUguid@3@@Z @ 0x1806347D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x1806347FC (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::DeactivateRemoteDesktop(
        __int64 a1,
        const struct winrt::guid *a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DeactivateRemoteDesktop(
    (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((a1 - 16) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
