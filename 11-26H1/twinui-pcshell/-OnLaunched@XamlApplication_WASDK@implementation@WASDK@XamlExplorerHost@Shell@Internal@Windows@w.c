/*
 * XREFs of ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x180242E14
 * Callers:
 *     ?OnLaunched@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHPEAX@Z @ 0x180453250 (-OnLaunched@-$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Interna.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006F71C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??$Start@$$V@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@SA?AV01@XZ @ 0x1800790F8 (--$Start@$$V@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@SA-AV01@XZ.c)
 *     ??$call@P6A?AUXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z@?$factory_cache_entry@UXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlControlsResources@Controls@Xaml@UI@Microsoft@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801B3988 (--$call@P6A-AUXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@AEBUIActivationFactory@Fou.c)
 *     ??$ActivateInstance@UXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXamlControlsResources@Controls@Xaml@UI@Microsoft@3@XZ @ 0x1801E40F4 (--$ActivateInstance@UXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@@IActivationFactory.c)
 *     ??1XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18020FCD0 (--1XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18027EEF4 (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@2@XZ @ 0x1802822F4 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTip.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802823B0 (--1-$test_watcher@V-$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180282458 (--1-$test_data_control@V-$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@detail.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180282490 (--1-$com_ptr_t@V-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?FocusVisualKind@?$consume_Microsoft_UI_Xaml_IApplication@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW40Xaml@UI@Microsoft@3@@Z @ 0x180452E2C (-FocusVisualKind@-$consume_Microsoft_UI_Xaml_IApplication@UXamlApplication_WASDK@implementation@.c)
 *     ?HighContrastAdjustment@?$consume_Microsoft_UI_Xaml_IApplication@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ApplicationHighContrastAdjustment@Xaml@UI@Microsoft@3@@Z @ 0x180453030 (-HighContrastAdjustment@-$consume_Microsoft_UI_Xaml_IApplication@UXamlApplication_WASDK@implemen.c)
 *     ?Resources@?$consume_Microsoft_UI_Xaml_IApplication@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804535FC (-Resources@-$consume_Microsoft_UI_Xaml_IApplication@UXamlApplication_WASDK@implementation@WASDK@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::OnLaunched(
        RTL_SRWLOCK *a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  DWORD CurrentThreadId; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  RTL_SRWLOCK *v10; // rbx
  RTL_SRWLOCK *v11; // rdx
  unsigned int v12; // eax
  struct IUnknown v13; // [rsp+20h] [rbp-E0h] BYREF
  void (__fastcall ***v14)(_QWORD, void *, RTL_SRWLOCK **); // [rsp+28h] [rbp-D8h] BYREF
  __int64 (__fastcall *v15)(const struct winrt::Windows::Foundation::IActivationFactory *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v20; // [rsp+60h] [rbp-A0h]
  RTL_SRWLOCK *v21; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v22[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h]
  _QWORD v24[42]; // [rsp+B0h] [rbp-50h] BYREF

  v20 = a2;
  memset_0(v24, 0, 0x148uLL);
  XamlExplorerHostTelemetry::XamlLaunchedOnThread::Start<>((XamlExplorerHostTelemetry::XamlLaunchedOnThread *)v24);
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  v14 = 0LL;
  tip2::tip_test<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>>::start_and_watch_errors(
    &v14,
    v22);
  wil::com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>,wil::err_returncode_policy>(&v14);
  CurrentThreadId = GetCurrentThreadId();
  v5 = v23;
  v15 = (__int64 (__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *))v23;
  if ( v23 )
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 280));
  tip2::details::shared_data<0,0,1>::begin_update(v5 + 8);
  *(_DWORD *)(v5 + 272) = CurrentThreadId;
  tip2::test_data_control<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>>::~test_data_control<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>>(&v15);
  LODWORD(v13.lpVtbl) = 1;
  winrt::impl::consume_Microsoft_UI_Xaml_IApplication<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK>::FocusVisualKind(
    a1,
    &v13);
  LODWORD(v13.lpVtbl) = 0;
  winrt::impl::consume_Microsoft_UI_Xaml_IApplication<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK>::HighContrastAdjustment(
    a1,
    &v13);
  v14 = 0LL;
  v21 = 0LL;
  wil::AcquireSRWLockExclusive(&v21, a1 + 10);
  v16 = &qword_1808DC9D8;
  _InterlockedIncrement64(&qword_1808DC9D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources>(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources,winrt::Windows::Foundation::IActivationFactory>,
      &v13);
    _InterlockedDecrement64(&qword_1808DC9D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC9D8);
    v15 = _lambda_1f68f4413181401bb9e1178e14cf0745_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      v6,
      (__int64)&v13,
      (void (__fastcall **)(__int64, __int64 *))&v15);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v14, (__int64 *)&v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v21);
  v7 = (__int64 *)winrt::impl::consume_Microsoft_UI_Xaml_IApplication<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK>::Resources(
                    a1,
                    &v16);
  v21 = 0LL;
  v8 = *v7;
  v18 = 0;
  v19 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK **))(*(_QWORD *)v8 + 64LL))(v8, &v21);
  winrt::check_hresult(&v13, v9, &v18);
  v10 = v21;
  v17 = v21;
  if ( v14 )
  {
    v21 = 0LL;
    (**v14)(v14, &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::IResourceDictionary>, &v21);
    v11 = v21;
    v15 = (__int64 (__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *))v21;
  }
  else
  {
    v15 = 0LL;
    v11 = 0LL;
  }
  v18 = 0;
  v19 = 0LL;
  v12 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, RTL_SRWLOCK *))v10->Ptr + 13))(v10, v11);
  winrt::check_hresult(&v13, v12, &v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  tip2::details::shared_data<0,0,0>::complete_without_lock(v23 + 8);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v24);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>>::~test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>>(v22);
  XamlExplorerHostTelemetry::XamlLaunchedOnThread::~XamlLaunchedOnThread((XamlExplorerHostTelemetry::XamlLaunchedOnThread *)v24);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
