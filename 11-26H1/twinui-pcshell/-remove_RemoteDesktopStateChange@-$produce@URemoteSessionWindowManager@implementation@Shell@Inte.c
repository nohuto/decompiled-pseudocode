/*
 * XREFs of ?remove_RemoteDesktopStateChange@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18065DB20
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoteDesktopStateChange@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x18065C318 (-RemoteDesktopStateChange@RemoteSessionWindowManager@implementation@Shell@Internal@_ea_18065C318.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::remove_RemoteDesktopStateChange(
        __int64 a1,
        void *a2)
{
  PVOID v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteDesktopStateChange(
    (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((a1 - 16) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
