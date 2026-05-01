/*
 * XREFs of ??4?$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802B0024
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180249D64 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A7EDC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?get@?$weak_ref@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18022DD64 (-get@-$weak_ref@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@AEAAXUIPackageCatalog@ApplicationModel@Windows@3@@Z @ 0x18029B4A8 (-revoke_impl@-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIP.c)
 */

__int64 *__fastcall __4__event_revoker_UITaskbarLayout_Shell_UI_WindowsUdk_winrt___MP8type___abi_UITaskbarLayout_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v7; // rax
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h]
  __int64 v12; // [rsp+40h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v10 = 0LL;
  v11 = v4;
  v12 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v10, a1);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v12);
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
  v5 = v10 == 0;
  v6 = v11;
  v11 = a1[1];
  a1[1] = v6;
  if ( !v5 )
  {
    v7 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::get(
                                                                                               &v10,
                                                                                               &v12);
    _revoke_impl___event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__AEAAXUIPackageCatalog_ApplicationModel_Windows_3__Z(
      (__int64)&v10,
      v7,
      v8);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  }
  return a1;
}
