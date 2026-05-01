/*
 * XREFs of ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180636984
 * Callers:
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180633B38 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x180634484 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@1@@Z @ 0x1801DA60C (--$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@-$weak_ref@UIDeskto.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18024210C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CEE8C (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x180491EBC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18062F710 (--1-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_3e3d6084102ea12775201c324e2ccf34___ @ 0x18063010C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--CloudDesktop--Tra.c)
 *     ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x180632E48 (--1-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@_ea_180632E48.c)
 *     ??4?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18064549C (--4-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x180649CB8 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent(
        volatile signed __int64 *a1,
        RTL_SRWLOCK **a2)
{
  __int64 weak_ref; // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  RTL_SRWLOCK *v10; // rbx
  const char *v11; // r9
  __int64 v12; // [rsp+20h] [rbp-A8h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64 *, __int64 *); // [rsp+28h] [rbp-A0h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v15; // [rsp+40h] [rbp-88h] BYREF
  int v16; // [rsp+48h] [rbp-80h] BYREF
  __int128 v17; // [rsp+50h] [rbp-78h]
  __int64 v18[3]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v19; // [rsp+78h] [rbp-50h] BYREF
  std::_Ref_count_base *v20; // [rsp+80h] [rbp-48h]
  __int64 v21; // [rsp+88h] [rbp-40h] BYREF
  __int64 v22; // [rsp+90h] [rbp-38h] BYREF
  _BYTE pExceptionObject[40]; // [rsp+A0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  RTL_SRWLOCK *v25; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+20h] BYREF

  LODWORD(v25) = 0;
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(*a2, &v13);
  std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(&v19, a2);
  weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
  try
  {
    if ( !weak_ref )
    {
      std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
      throw (std::bad_alloc *)pExceptionObject;
    }
    v15 = weak_ref;
    v27 = 0LL;
    LODWORD(v25) = 2;
    v16 = 0;
    v17 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, &v27);
    winrt::check_hresult((int *)&v26, v5, (__int64)&v16);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
    v6 = v27;
    v27 = 0LL;
    v21 = v6;
    std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(&v22, &v19);
    winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_3e3d6084102ea12775201c324e2ccf34___(
      &v12,
      &v21);
    v26 = 0LL;
    v16 = 0;
    v17 = 0LL;
    v7 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))(*v13)[13])(v13, v12, &v26);
    winrt::check_hresult((int *)&v25, v7, (__int64)&v16);
    v8 = v26;
    v25 = (RTL_SRWLOCK *)v14;
    v14[0] = 0LL;
    winrt::weak_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::from_com_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource const &>(
      v14,
      &v13);
    v14[1] = v8;
    v9 = v14[0];
    v14[0] = 0LL;
    v18[0] = v9;
    v18[1] = (__int64) ISwitchItemController::`vcall'{112,{flat}};
    v18[2] = v8;
    __1__event_revoker_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt___MP8type___abi_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BHA_AA_impl_winrt__QEAA_XZ(v14);
    if ( v12 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
    if ( v27 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
    v10 = *a2;
    wil::AcquireSRWLockExclusive(&v25, *a2 + 2);
    winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::operator=(
      &v10[17],
      v18);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
    winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::~event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>(v18);
    if ( v20 )
      std::_Ref_count_base::_Decwref(v20);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x34C,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      v11);
  }
}
