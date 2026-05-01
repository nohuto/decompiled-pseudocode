/*
 * XREFs of ?RemoteDesktopStateChange@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x18065C318
 * Callers:
 *     ?remove_RemoteDesktopStateChange@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18065DB20 (-remove_RemoteDesktopStateChange@-$produce@URemoteSessionWindowManager@implementation@Shell@Inte.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteDesktopStateChange(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this,
        PVOID *a2)
{
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
    (__int64)this + 280,
    *a2);
}
