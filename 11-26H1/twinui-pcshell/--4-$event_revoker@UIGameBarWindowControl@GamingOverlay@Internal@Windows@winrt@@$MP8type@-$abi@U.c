/*
 * XREFs of ??4?$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180342FE4
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F484 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??1?$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAA@XZ @ 0x1803420E0 (--1-$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@-$abi@U.c)
 */

__int64 *__fastcall __4__event_revoker_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt___MP8type___abi_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v3 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v7 = v3;
  v9 = v4;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v8, a1);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v7);
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  v5 = v9;
  v9 = a1[1];
  a1[1] = v5;
  __1__event_revoker_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt___MP8type___abi_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__QEAA_XZ(&v8);
  return a1;
}
