/*
 * XREFs of ??_9type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BOA@AA @ 0x1805EE028
 * Callers:
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A6E10 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ?revoke_impl@?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@AEAAXUITile@StartScreen@UI@WindowsUdk@3@@Z @ 0x1800A83AC (-revoke_impl@-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITile@Start.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall  winrt::impl::abi<winrt::WindowsUdk::UI::StartScreen::ITile,void>::type::`vcall'{224,{flat}}(
        __int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
}
