/*
 * XREFs of LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_InitCoro$2 @ 0x1805B5098
 * Callers:
 *     ?TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@5@0UPackageVersion@ApplicationModel@45@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z @ 0x1805B5950 (-TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA-AUIAsyncAction@Foundati.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1805A6C5C (--0-$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805B5220 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi

  *(_QWORD *)(a2 + 673) = a9;
  v12 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 681) = v12;
  v13 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 689) = v13;
  *(_QWORD *)(a2 + 697) = *a6;
  std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
    a2 + 705,
    a7);
  std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
    a2 + 769,
    a8);
  *(_QWORD *)a2 = LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v14 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v14 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(v14 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v14 + 8) = 1LL;
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_QWORD *)(v14 + 40) = 0LL;
  *(_BYTE *)(v14 + 48) = 0;
  *(_QWORD *)v14 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *(_QWORD *)(v14 + 56) = 0LL;
  *(_QWORD *)(v14 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(a2 - 112 + 56));
  *(_QWORD *)(v14 + 72) = 0LL;
  *(_QWORD *)(v14 + 80) = 0LL;
  *(_QWORD *)(v14 + 88) = 0LL;
  *(_DWORD *)(v14 + 96) = 0;
  *(_BYTE *)(v14 + 100) = 0;
  *(_QWORD *)v14 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *a3 = a2 - 112 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a9 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a9);
  *(_BYTE *)(a2 + 672) = 0;
  return LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1(a2);
}
