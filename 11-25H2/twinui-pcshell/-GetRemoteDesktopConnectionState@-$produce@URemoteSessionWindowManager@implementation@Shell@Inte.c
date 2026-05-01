/*
 * XREFs of ?GetRemoteDesktopConnectionState@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUguid@3@PEAH@Z @ 0x180634A80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRemoteDesktopConnectionState@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBA?AW4CloudPCState@3456@AEBUguid@6@@Z @ 0x180634AB4 (-GetRemoteDesktopConnectionState@RemoteSessionWindowManager@implementation@Shell@Internal@Window.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::GetRemoteDesktopConnectionState(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  *a3 = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::GetRemoteDesktopConnectionState((a1 - 16) & -(__int64)(a1 != 0));
  return 0LL;
}
