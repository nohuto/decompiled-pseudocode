/*
 * XREFs of LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805AEE70
 * Callers:
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_InitCoro$2 @ 0x1805AEDD0 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_InitCoro$2.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800A9908 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802AB088 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1802C00C0 (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@@experimental@std@@@Z @ 0x1803297A4 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt.c)
 *     ??$await_transform@Usignal_awaiter@impl@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA$$QEAUsignal_awaiter@12@$$QEAU312@@Z @ 0x1803297DC (--$await_transform@Usignal_awaiter@impl@winrt@@@-$promise_base@Upromise_type@-$coroutine_traits@.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032BAD8 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180331830 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18033A36C (-await_resume@-$await_adapter@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsU.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@UEAA@XZ @ 0x180341BD0 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foundation@Windows@w.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@@experimental@std@@@Z @ 0x1805A0A08 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1805A0A08.c)
 *     ??D?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@impl@winrt@@QEBA?AUPackageVolume@Deployment@Management@Windows@2@XZ @ 0x1805A858C (--D-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackageVolume@Deployment@Man.c)
 *     ??E?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@impl@winrt@@QEAA@XZ @ 0x1805A8610 (--E-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackageVolume@Deployment@Man.c)
 *     ?AddPackageVolumeAsync@?$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805A9F4C (-AddPackageVolumeAsync@-$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@.c)
 *     ?FindPackageVolumes@?$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805ABBE4 (-FindPackageVolumes@-$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@Dep.c)
 *     ?GetDefaultPackageVolume@?$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805AE5A8 (-GetDefaultPackageVolume@-$consume_Windows_Management_Deployment_IPackageManager3@UPackageManage.c)
 *     ?IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Management@Windows@winrt@@@Z @ 0x1805B03C4 (-IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Manage.c)
 *     ?IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x1805B0DA0 (-IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOpera.c)
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@impl@winrt@@QEBA@XZ @ 0x1805B76A4 (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackageVolume@Deployment.c)
 */

// Hidden C++ exception states: #wind=19 #try_helpers=1
void __fastcall LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync__ResumeCoro_1(__int64 a1)
{
  __int64 IsPackageVolumeSupportedForInstallAsync; // rdx
  __int64 v3; // rax
  char v4; // r14
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v5; // r14
  __int64 *v6; // rbx
  winrt *v7; // r14
  __int64 v8; // r12
  __int64 *v9; // r15
  char v10; // bl
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *View; // rax
  _QWORD *v16; // rax
  const struct winrt::impl::slim_source_location *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // r15
  __int64 v20; // rdx
  _BYTE pExceptionObject[224]; // [rsp+38h] [rbp-E0h] BYREF

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_29;
    case 2:
      winrt::Windows::Management::Deployment::PackageManager::PackageManager((struct IUnknown *)(a1 + 16));
      *(_QWORD *)(a1 + 24) = 0LL;
      winrt::impl::consume_Windows_Management_Deployment_IPackageManager3<winrt::Windows::Management::Deployment::PackageManager>::GetDefaultPackageVolume(
        (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
        (_QWORD *)(a1 + 32));
      *(_QWORD *)(a1 + 208) = a1 - 112;
      *(_QWORD *)(a1 + 352) = a1 - 112;
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 32);
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 40));
      IsPackageVolumeSupportedForInstallAsync = LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync(
                                                  *(_QWORD *)(a1 + 369),
                                                  a1 + 48,
                                                  a1 + 40);
      v3 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::await_transform<winrt::impl::signal_awaiter>(
             a1 - 112,
             IsPackageVolumeSupportedForInstallAsync);
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = v3;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_BYTE *)(a1 + 80) = 1;
      *(_WORD *)(a1 + 8) = 4;
      if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type>(
                              (__int64 *)(a1 + 56),
                              a1) )
        return;
      goto LABEL_5;
    case 4:
LABEL_5:
      v4 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume(a1 + 56);
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 56));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
      if ( v4 )
      {
        v5 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32);
        winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 24), (__int64 *)(a1 + 32));
        goto LABEL_28;
      }
      winrt::impl::consume_Windows_Management_Deployment_IPackageManager3<winrt::Windows::Management::Deployment::PackageManager>::FindPackageVolumes(
        (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
        (_QWORD *)(a1 + 88));
      *(_BYTE *)(a1 + 96) = 0;
      v6 = (__int64 *)(a1 + 104);
      winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>,winrt::Windows::Management::Deployment::PackageVolume>::begin(
        a1 + 88,
        a1 + 104);
      *(_QWORD *)(a1 + 112) = 0LL;
      v7 = (winrt *)(a1 + 120);
      v8 = a1 + 136;
      v9 = (__int64 *)(a1 + 144);
      break;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 56));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
      goto LABEL_29;
    case 6:
      goto LABEL_9;
    case 7:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 144));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 136));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 104));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
      goto LABEL_29;
    case 8:
      goto LABEL_25;
    case 9:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 280));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 272));
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 232));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 192));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 176));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
      goto LABEL_29;
    default:
      __debugbreak();
      return;
  }
  while ( 1 )
  {
    v11 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112);
    if ( !winrt::Windows::Foundation::operator!=(
            (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v6,
            (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 112)) )
      break;
    winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Management::Deployment::PackageVolume>,winrt::Windows::Management::Deployment::PackageVolume>::operator*(
      v6,
      v7);
    *(_QWORD *)(a1 + 128) = *(_QWORD *)v7;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 128));
    v12 = LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync(
            *(_QWORD *)(a1 + 369),
            v8,
            a1 + 128);
    v13 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::await_transform<winrt::impl::signal_awaiter>(
            *(_QWORD *)(a1 + 208),
            v12);
    *v9 = 0LL;
    *(_QWORD *)(a1 + 152) = v13;
    *(_QWORD *)(a1 + 160) = 0LL;
    *(_BYTE *)(a1 + 168) = 1;
    *(_WORD *)(a1 + 8) = 6;
    if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type>(
                            v9,
                            a1) )
      return;
LABEL_9:
    v9 = (__int64 *)(a1 + 144);
    v10 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume(a1 + 144);
    winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 144));
    v8 = a1 + 136;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 136));
    v7 = (winrt *)(a1 + 120);
    if ( v10 )
    {
      *(_BYTE *)(a1 + 96) = 1;
      winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 24), (__int64 *)(a1 + 120));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
      v11 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112);
      v6 = (__int64 *)(a1 + 104);
      break;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
    v6 = (__int64 *)(a1 + 104);
    winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Management::Deployment::PackageVolume>,winrt::Windows::Management::Deployment::PackageVolume>::operator++((__int64 *)(a1 + 104));
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v6);
  if ( !*(_BYTE *)(a1 + 96) )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>,winrt::Windows::Management::Deployment::PackageVolume>::begin(
      a1 + 88,
      a1 + 176);
    *(_QWORD *)(a1 + 184) = 0LL;
    while ( winrt::Windows::Foundation::operator!=(
              (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 176),
              (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 184)) )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Management::Deployment::PackageVolume>,winrt::Windows::Management::Deployment::PackageVolume>::operator*(
        (__int64 *)(a1 + 176),
        (winrt *)(a1 + 192));
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 192);
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 200));
      if ( (unsigned __int8)LockScreenWidgetPackageHelperBase::IsFileSystemSupported(v14, a1 + 200) )
      {
        View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                 (__int64 **)(a1 + 192),
                 (_QWORD *)(a1 + 224));
        winrt::operator+((volatile signed __int32 *)(a1 + 232), View, (__int64)L"\\DefaultApps");
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 224));
        *(_QWORD *)(a1 + 240) = *(_QWORD *)(a1 + 232);
        v16 = winrt::impl::consume_Windows_Management_Deployment_IPackageManager3<winrt::Windows::Management::Deployment::PackageManager>::AddPackageVolumeAsync(
                (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
                (_QWORD *)(a1 + 272),
                (_QWORD *)(a1 + 240));
        if ( *(_DWORD *)(a1 - 16) == 2 )
        {
          v17 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 328);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v17);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        *(_QWORD *)(a1 + 280) = 0LL;
        *(_QWORD *)(a1 + 288) = v16;
        *(_QWORD *)(a1 + 296) = 0LL;
        *(_BYTE *)(a1 + 304) = 1;
        *(_WORD *)(a1 + 8) = 8;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *>::promise_type>(
                                (__int64 *)(a1 + 280),
                                a1) )
          return;
LABEL_25:
        v18 = (__int64 *)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_resume(
                           a1 + 280,
                           (winrt *)(a1 + 312));
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 24), v18);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 312));
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 280));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 272));
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 232));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 192));
        break;
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 192));
      winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Management::Deployment::PackageVolume>,winrt::Windows::Management::Deployment::PackageVolume>::operator++((__int64 *)(a1 + 176));
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 176));
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
  v5 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32);
LABEL_28:
  v19 = *(_QWORD *)(a1 + 352);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v19 + 104), (__int64 *)(a1 + 24));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
  *(_QWORD *)(a1 + 320) = v19;
  *(_WORD *)(a1 + 8) = 0;
  if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
          (__int64 *)(a1 + 320),
          v20) )
  {
LABEL_29:
    std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::~promise_type((__int64 *)(a1 - 112));
    if ( *(_WORD *)(a1 + 10) )
      operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x1F0);
  }
}
