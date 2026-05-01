/*
 * XREFs of ?swap@?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAAXAEAU123@@Z @ 0x1801053F0
 * Callers:
 *     ??4?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180104E18 (--4-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@-$a.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 */

__int64 __fastcall _swap___factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAAXAEAU123__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  *a1 = 0LL;
  v6[0] = v2;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1, a2);
  if ( a2 == v6 )
  {
    if ( v2 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
  }
  else
  {
    if ( *a2 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2);
    *a2 = v2;
  }
  result = a1[1];
  a1[1] = a2[1];
  a2[1] = result;
  return result;
}
