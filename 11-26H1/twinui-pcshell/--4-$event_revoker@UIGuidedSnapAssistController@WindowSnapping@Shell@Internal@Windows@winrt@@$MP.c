/*
 * XREFs of ??4?$event_revoker@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802A5D68
 * Callers:
 *     ?subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18002B090 (-subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??1?$event_revoker@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x1802A5DE8 (--1-$event_revoker@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@$MP.c)
 */

__int64 *__fastcall __4__event_revoker_UIGuidedSnapAssistController_WindowSnapping_Shell_Internal_Windows_winrt___MP8type___abi_UIGuidedSnapAssistController_WindowSnapping_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v7 = a2[1];
  v6 = 0LL;
  v8 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v6, a1);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v8);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  v4 = a1[1];
  a1[1] = v7;
  v7 = v4;
  __1__event_revoker_UIGuidedSnapAssistController_WindowSnapping_Shell_Internal_Windows_winrt___MP8type___abi_UIGuidedSnapAssistController_WindowSnapping_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ(&v6);
  return a1;
}
