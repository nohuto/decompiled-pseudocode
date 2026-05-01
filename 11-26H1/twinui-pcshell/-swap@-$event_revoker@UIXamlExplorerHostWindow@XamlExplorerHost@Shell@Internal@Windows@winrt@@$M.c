/*
 * XREFs of ?swap@?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAAXAEAU123@@Z @ 0x18029BE18
 * Callers:
 *     ??4?$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800A16EC (--4-$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UISnapL.c)
 *     ??4?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18029BDD0 (--4-$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8t.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall _swap___event_revoker_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt___MP8type___abi_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAAXAEAU123__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = *a1;
  *a1 = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, a2);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a2, &v6);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  v4 = a1[1];
  result = a2[1];
  a1[1] = result;
  a2[1] = v4;
  return result;
}
