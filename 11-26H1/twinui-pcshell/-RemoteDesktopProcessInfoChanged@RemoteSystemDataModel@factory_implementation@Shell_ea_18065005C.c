/*
 * XREFs of ?RemoteDesktopProcessInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x18065005C
 * Callers:
 *     ?remove_RemoteDesktopProcessInfoChanged@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1806549A0 (-remove_RemoteDesktopProcessInfoChanged@-$produce@URemoteSystemDataModel@factory_implementation@.c)
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1803CE968 (-remove@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@US.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoteDesktopProcessInfoChanged(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        PVOID *a2)
{
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
    (__int64)this + 272,
    *a2);
}
