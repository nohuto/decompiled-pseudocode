/*
 * XREFs of ?WindowAdded@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x18062D038
 * Callers:
 *     ?remove_WindowAdded@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18062EEC0 (-remove_WindowAdded@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E0B24 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Int.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::WindowAdded(
        RTL_SRWLOCK *this,
        PVOID *a2)
{
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::remove(
    this + 23,
    *a2);
}
