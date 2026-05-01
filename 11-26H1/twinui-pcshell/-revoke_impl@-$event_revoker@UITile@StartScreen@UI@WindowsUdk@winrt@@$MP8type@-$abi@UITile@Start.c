/*
 * XREFs of ?revoke_impl@?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@AEAAXUITile@StartScreen@UI@WindowsUdk@3@@Z @ 0x1800277E8
 * Callers:
 *     ??1?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAA@XZ @ 0x180027850 (--1-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITile@StartScreen@UI@.c)
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180028850 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??_9type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@winrt@@$BOA@AA @ 0x180344D84 (--_9type@-$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@winrt@@$BOA@A.c)
 */

void __fastcall _revoke_impl___event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__AEAAXUITile_StartScreen_UI_WindowsUdk_3__Z(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  if ( *(_QWORD *)a2 )
     winrt::impl::abi<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl,void>::type::`vcall'{224,{flat}}(
      *(_QWORD *)a2,
      *(_QWORD *)(a1 + 8));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
