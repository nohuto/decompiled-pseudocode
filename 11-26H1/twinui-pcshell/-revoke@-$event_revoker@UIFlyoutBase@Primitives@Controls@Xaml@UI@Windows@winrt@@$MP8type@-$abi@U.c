/*
 * XREFs of ?revoke@?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@impl@winrt@@QEAAXXZ @ 0x1802A82F0
 * Callers:
 *     ?OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1800DC3D0 (-OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?revoke_impl@?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@AEAAXUITileCollection@StartScreen@UI@WindowsUdk@3@@Z @ 0x1801A56B8 (-revoke_impl@-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UI.c)
 *     ?get@?$weak_ref@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1802A836C (-get@-$weak_ref@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

void __fastcall _revoke___event_revoker_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BFI_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rbx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rax
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = *a1;
  v1 = v6;
  v5 = 0LL;
  *a1 = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v5);
  v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::get(
                                                                                             &v6,
                                                                                             &v7);
  _revoke_impl___event_revoker_UITileCollection_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITileCollection_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__AEAAXUITileCollection_StartScreen_UI_WindowsUdk_3__Z(
    (__int64)a1,
    v3,
    v4);
  if ( v1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
}
