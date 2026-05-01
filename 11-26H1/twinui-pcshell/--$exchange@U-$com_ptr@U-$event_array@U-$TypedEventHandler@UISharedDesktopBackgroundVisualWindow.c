/*
 * XREFs of ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1800DD790
 * Callers:
 *     ?add_agile@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@2@@Z @ 0x18035CCD4 (-add_agile@-$event@U-$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Int.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@2@@Z @ 0x1803CE718 (-add_agile@-$event@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foun.c)
 *     ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1803CE968 (-remove@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@US.c)
 *     ?remove@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18044D20C (-remove@-$event@U-$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Interna.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@2@@Z @ 0x180474B9C (-add_agile@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windo.c)
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180475A50 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@.c)
 * Callees:
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800262F8 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 */

__int64 *__fastcall std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rax

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    a2,
    a3);
  return a1;
}
