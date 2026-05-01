/*
 * XREFs of ?revoke_impl@?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@AEAAXUITile@StartScreen@UI@WindowsUdk@3@@Z @ 0x1800A83AC
 * Callers:
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800A8DC4 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAA@XZ @ 0x1801CA96C (--1-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITile@StartScreen@UI@.c)
 * Callees:
 *     ??_9type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BOA@AA @ 0x1805EE028 (--_9type@-$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BOA@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__AEAAXUITile_StartScreen_UI_WindowsUdk_3__Z(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  if ( *(_QWORD *)a2 )
     winrt::impl::abi<winrt::WindowsUdk::UI::StartScreen::ITile,void>::type::`vcall'{224,{flat}}(
      *(_QWORD *)a2,
      *(_QWORD *)(a1 + 8));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
