/*
 * XREFs of ?SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1806366B0
 * Callers:
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180633B38 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x180634484 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18024210C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CEE8C (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x180491EBC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___ @ 0x1806301F4 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--Clou_ea_1806301F4.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x180649CB8 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v3; // r8
  __int64 *v4; // rdi
  __int64 weak_ref; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // [rsp+20h] [rbp-29h] BYREF
  __int64 v12; // [rsp+28h] [rbp-21h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-19h] BYREF
  int v14; // [rsp+38h] [rbp-11h] BYREF
  __int128 v15; // [rsp+40h] [rbp-9h]
  __int64 v16; // [rsp+50h] [rbp+7h] BYREF
  std::_Ref_count_base *v17; // [rsp+58h] [rbp+Fh]
  __int64 v18; // [rsp+60h] [rbp+17h] BYREF
  __int64 v19; // [rsp+68h] [rbp+1Fh] BYREF
  _BYTE pExceptionObject[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v21; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+7Fh] BYREF

  v21 = 0;
  std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(&v16, a2);
  v4 = (__int64 *)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(*v3, v13);
  weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v11 = weak_ref;
  v23 = 0LL;
  v21 = 2;
  v14 = 0;
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, &v23);
  winrt::check_hresult((int *)&v22, v6, (__int64)&v14);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  v7 = v23;
  v23 = 0LL;
  v18 = v7;
  std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(&v19, &v16);
  winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___(
    &v22,
    &v18);
  v12 = 0LL;
  v8 = *v4;
  v14 = 0;
  v15 = 0LL;
  v9 = v22;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 136LL))(v8, v22, &v12);
  winrt::check_hresult(&v21, v10, (__int64)&v14);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v22);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
  if ( v17 )
    std::_Ref_count_base::_Decwref(v17);
}
