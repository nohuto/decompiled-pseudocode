/*
 * XREFs of ?add@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@2@@Z @ 0x1805EA6C8
 * Callers:
 *     ?add_ContentLoaded@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1805EA820 (-add_ContentLoaded@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual.c)
 * Callees:
 *     ?add_agile@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@2@@Z @ 0x180468BFC (-add_agile@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windo.c)
 *     ??$make_agile_delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@1@AEBU2341@@Z @ 0x1805E45A4 (--$make_agile_delegate@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@_ea_1805E45A4.c)
 */

PVOID *__fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs>>::add(
        RTL_SRWLOCK *a1,
        PVOID *a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs>>(
         &v7,
         a3);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>>::add_agile(
    a1,
    a2,
    (unsigned int *)v5);
  return a2;
}
