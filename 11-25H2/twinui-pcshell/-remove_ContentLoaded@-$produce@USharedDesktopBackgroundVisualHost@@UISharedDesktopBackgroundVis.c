/*
 * XREFs of ?remove_ContentLoaded@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1800E0700
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E0B24 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Int.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::remove_ContentLoaded(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 16;
  if ( !a1 )
    v1 = 32LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::remove(v1);
  return 0LL;
}
