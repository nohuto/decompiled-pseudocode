/*
 * XREFs of ??$make_event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800E02C8
 * Callers:
 *     ?remove@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E0888 (-remove@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winr.c)
 *     ?remove@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801D3244 (-remove@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWind.c)
 *     ?add_agile@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x180337374 (-add_agile@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@w.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@2@@Z @ 0x180468BFC (-add_agile@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windo.c)
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180469C60 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@2@@Z @ 0x18055B9F0 (-add_agile@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UW.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@2@@Z @ 0x180597788 (-add_agile@-$event@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Int.c)
 * Callees:
 *     ??0?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@I@Z @ 0x1800E0308 (--0-$event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>(
        _QWORD *a1,
        unsigned int a2)
{
  void *v4; // rax

  v4 = operator new(8LL * a2 + 8);
  *a1 = winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>(
          v4,
          a2);
  return a1;
}
