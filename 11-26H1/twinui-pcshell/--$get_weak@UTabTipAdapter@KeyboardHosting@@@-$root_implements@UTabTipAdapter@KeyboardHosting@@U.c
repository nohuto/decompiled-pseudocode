/*
 * XREFs of ??$get_weak@UTabTipAdapter@KeyboardHosting@@@?$root_implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@impl@winrt@@IEAA?AU?$weak_ref@UTabTipAdapter@KeyboardHosting@@@2@XZ @ 0x180477A74
 * Callers:
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x18024E280 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 *     ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18024E3B4 (-OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnDisplayChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18047AA5C (-OnDisplayChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180670888 (-RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18023320C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802C6358 (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::root_implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::get_weak<KeyboardHosting::TabTipAdapter>(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  __int64 weak_ref; // rax
  int v4; // eax
  int pExceptionObject; // [rsp+28h] [rbp-20h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)&pExceptionObject);
    throw (std::bad_alloc *)&pExceptionObject;
  }
  v9 = weak_ref;
  *a2 = 0LL;
  pExceptionObject = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, a2);
  winrt::check_hresult(&v8, v4, (__int64)&pExceptionObject);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  return a2;
}
