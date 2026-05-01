/*
 * XREFs of ??4?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802B00CC
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x180102620 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A7EDC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?revoke_impl@?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@AEAAXUITileCollection@StartScreen@UI@WindowsUdk@3@@Z @ 0x18010180C (-revoke_impl@-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UI.c)
 *     ?get@?$weak_ref@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1802AFE80 (-get@-$weak_ref@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

__int64 *__fastcall __4__event_revoker_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BFI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+28h] [rbp-8h]
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v9 = 0LL;
  v10 = v4;
  v11 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v9, a1);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v11);
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  v5 = v9 == 0;
  v6 = v10;
  v10 = a1[1];
  a1[1] = v6;
  if ( !v5 )
  {
    v7 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::get(
                                                                                               &v9,
                                                                                               &v11);
    _revoke_impl___event_revoker_UITileCollection_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITileCollection_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__AEAAXUITileCollection_StartScreen_UI_WindowsUdk_3__Z(
      (__int64)&v9,
      v7);
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  }
  return a1;
}
