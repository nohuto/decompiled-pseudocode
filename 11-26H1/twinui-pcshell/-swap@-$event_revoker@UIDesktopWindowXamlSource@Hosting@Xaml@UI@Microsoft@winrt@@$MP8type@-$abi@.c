/*
 * XREFs of ?swap@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAAXAEAU123@@Z @ 0x180026AE0
 * Callers:
 *     ??4?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18002608C (--4-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@-$abi@UID.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall _swap___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAAXAEAU123__Z(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = *a1;
  *a1 = 0LL;
  ((void (*)(void))winrt::com_ptr<winrt::impl::IWeakReference>::operator=)();
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a2, v6);
  if ( v6[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
  v4 = a1[1];
  result = *(_QWORD *)(a2 + 8);
  a1[1] = result;
  *(_QWORD *)(a2 + 8) = v4;
  return result;
}
