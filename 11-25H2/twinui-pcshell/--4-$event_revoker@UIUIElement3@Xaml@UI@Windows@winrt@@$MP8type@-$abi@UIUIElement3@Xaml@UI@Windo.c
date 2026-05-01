/*
 * XREFs of ??4?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18068506C
 * Callers:
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180688490 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A7EDC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??1?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180684B2C (--1-$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement3@Xaml@UI@Windo.c)
 */

__int64 *__fastcall __4__event_revoker_UIUIElement3_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement3_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v7 = 0LL;
  v8 = v4;
  v9 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v7, a1);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v9);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  v5 = v8;
  v8 = a1[1];
  a1[1] = v5;
  __1__event_revoker_UIUIElement3_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement3_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__QEAA_XZ(&v7);
  return a1;
}
