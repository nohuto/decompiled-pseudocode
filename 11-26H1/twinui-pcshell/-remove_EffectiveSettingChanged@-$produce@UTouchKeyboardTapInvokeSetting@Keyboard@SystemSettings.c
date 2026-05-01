/*
 * XREFs of ?remove_EffectiveSettingChanged@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180475C00
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180475A50 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@.c)
 */

__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::remove_EffectiveSettingChanged(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rcx

  v3 = a1 + 24;
  if ( !a1 )
    v3 = 40LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,unsigned __int64>>::remove(
    v3,
    a2);
  return 0LL;
}
