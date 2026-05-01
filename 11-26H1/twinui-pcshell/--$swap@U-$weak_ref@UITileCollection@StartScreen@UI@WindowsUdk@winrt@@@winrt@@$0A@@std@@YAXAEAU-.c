/*
 * XREFs of ??$swap@U?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x180294880
 * Callers:
 *     ??4?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180294780 (--4-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITileCollec.c)
 *     ??4?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180294800 (--4-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_180294800.c)
 *     ??4?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1803878D0 (--4-$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8.c)
 *     ??4?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18038792C (--4-$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUd_ea_18038792C.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 *__fastcall std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  *a1 = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, a2);
  result = winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a2, &v4);
  if ( v4 )
    return (__int64 *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
  return result;
}
