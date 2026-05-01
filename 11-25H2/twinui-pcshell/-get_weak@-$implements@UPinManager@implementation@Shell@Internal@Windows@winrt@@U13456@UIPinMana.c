/*
 * XREFs of ?get_weak@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEAA?AU?$weak_ref@UPinManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1805C90DC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805C5200 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18024210C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CEE8C (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::get_weak(
        __int64 a1,
        _QWORD *a2)
{
  __int64 weak_ref; // rax
  int v4; // eax
  int v6; // [rsp+24h] [rbp-54h] BYREF
  __int64 v7[2]; // [rsp+28h] [rbp-50h] BYREF
  int v8; // [rsp+38h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  _BYTE pExceptionObject[40]; // [rsp+50h] [rbp-28h] BYREF

  v7[1] = (__int64)a2;
  weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)(a1 + 48));
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v7[0] = weak_ref;
  *a2 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, a2);
  winrt::check_hresult(&v6, v4, (__int64)&v8);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v7);
  return a2;
}
