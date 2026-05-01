/*
 * XREFs of ?RevokeShellViewButtonBoundsChangedEvent@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18024B388
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800AD728 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18024AA08 (-ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803B1B38 (-UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?revoke@?$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAAXXZ @ 0x1803B43E8 (-revoke@-$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITaskbarLayou.c)
 */

void __fastcall UndockedSearchAppExperienceManager::RevokeShellViewButtonBoundsChangedEvent(
        UndockedSearchAppExperienceManager *this)
{
  if ( *((_QWORD *)this + 113) )
    _revoke___event_revoker_UITaskbarLayout_Shell_UI_WindowsUdk_winrt___MP8type___abi_UITaskbarLayout_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAAXXZ();
}
