/*
 * XREFs of LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610
 * Callers:
 *     ?InstallInboxedPackageAsync@LockScreenWidgetPackageHelperBase@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x1805D3E0C (-InstallInboxedPackageAsync@LockScreenWidgetPackageHelperBase@@QEAA-AU-$IAsyncOperation@_N@Found.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801BCD78 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C53CC (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801DE7A4 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028038C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802B5A0C (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1802B6E8C (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180328F74 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1803309B4 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1803309B4.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180339EFC (-await_resume@-$await_adapter@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsU.c)
 *     ?ExtendedErrorCode@?$consume_Windows_Management_Deployment_IDeploymentResult@UIDeploymentResult@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803B115C (-ExtendedErrorCode@-$consume_Windows_Management_Deployment_IDeploymentResult@UIDeploymentResult@.c)
 *     ??$?0U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$async_iterable@UUri@Foundation@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1805C3554 (--$-0U-$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@-$asy.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@@experimental@std@@@Z @ 0x1805C4C78 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1805C4C78.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@@?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@@experimental@std@@@Z @ 0x1805C4CB0 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1805C4CB0.c)
 *     ??$create_and_initialize@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@@impl@winrt@@YAPEAU?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@$$QEAV?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x1805C5604 (--$create_and_initialize@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBDEC (--1-$com_ptr_t@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC1F0 (--1-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@2@XZ @ 0x1805CC648 (-data@-$tip_test@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     ?AddPackageAsync@?$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@AEBU?$async_iterable@UUri@Foundation@Windows@winrt@@@param@3@AEBW4DeploymentOptions@Deployment@Management@63@AEBUPackageVolume@Deployment@Management@63@@Z @ 0x1805CE14C (-AddPackageAsync@-$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@Deploy.c)
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x1805D25D0 (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA-AUPackageVersion@Application.c)
 *     ?GetVolumeToInstallPackageAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@XZ @ 0x1805D32AC (-GetVolumeToInstallPackageAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOperation@UPac.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x1805D49B0 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4CC4 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ @ 0x1805DAAA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805DAEF0 (-await_resume@-$await_adapter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805DB020 (-close@-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805DB458 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=22 #try_helpers=2
void __fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__ResumeCoro_1(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  char *v4; // rdi
  __int64 v5; // r8
  void *v6; // r8
  __int64 v7; // rcx
  const struct winrt::impl::slim_source_location *v8; // rax
  LockScreenWidgetPackageHelperBase *v9; // rcx
  bool IsPowerSupplyAdequateForInstall; // al
  __int64 v11; // rdx
  __int64 *VolumeToInstallPackageAsync; // rax
  const struct winrt::impl::slim_source_location *v13; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v14; // rdi
  bool v15; // r12
  bool v16; // al
  __int64 *v17; // r15
  __int64 v18; // rcx
  _QWORD *v19; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v20; // rbx
  _QWORD *v21; // rax
  const struct winrt::impl::slim_source_location *v22; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v23; // rcx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v24; // rcx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v25; // r13
  int v26; // ebx
  signed int v27; // eax
  __int64 v28; // rbx
  LockScreenWidgetPackageHelperBase *v29; // r15
  __int64 *v30; // rax
  void (__fastcall ***v31)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  _BYTE pExceptionObject[24]; // [rsp+68h] [rbp-100h] BYREF
  _BYTE v35[24]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v36[208]; // [rsp+98h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  if ( (unsigned __int16)(*(_WORD *)(a1 + 8) + 1) > 0xAu )
  {
LABEL_38:
    __debugbreak();
  }
  else
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 1:
      case 3:
        goto LABEL_36;
      case 0:
        goto LABEL_38;
      case 2:
        *(_QWORD *)(a1 + 16) = 0LL;
        v2 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::ensure_data(a1 + 16);
        tip2::details::shared_data<1,0,0>::start(*v2 + 8LL, (_OWORD *)(a1 + 368));
        tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
          a1 + 16,
          (__int64 *)(a1 + 24));
        v3 = *(_QWORD *)(a1 + 472);
        v4 = *(char **)(a1 + 24);
        std::wstring::assign(v4 + 336, *(void **)(v3 + 32), *(_QWORD *)(v3 + 40));
        std::wstring::assign(v4 + 304, *(void **)(v3 + 16), *(_QWORD *)(v3 + 24));
        std::wstring::operator=(v4 + 368, (char *)(v3 + 48), v5);
        tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::close(a1 + 24);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3) )
        {
          tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
            a1 + 16,
            (__int64 *)(a1 + 352));
          IsPowerSupplyAdequateForInstall = LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(v9);
          v11 = *(_QWORD *)(a1 + 352);
          *(_BYTE *)(v11 + 400) = IsPowerSupplyAdequateForInstall;
          *(_DWORD *)(v11 + 284) = 10;
          tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::close(a1 + 352);
          tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 352));
          tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 16));
          v32 = a1 - 112;
          *(_BYTE *)(a1 - 112 + 104) = 0;
          tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 24));
          wil::com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
          goto LABEL_35;
        }
        *(_QWORD *)(a1 + 256) = a1 - 112;
        *(_BYTE *)(a1 + 32) = 0;
        v7 = *(unsigned int *)(a1 - 112 + 96);
        if ( (_DWORD)v7 == 2 )
        {
          v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 384);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v8);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v7, (void (*)(void *, void *))a1, v6);
        return;
      case 4:
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
                      a1 + 16,
                      (__int64 *)(a1 + 40))
                 + 400) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 40));
        VolumeToInstallPackageAsync = LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync(
                                        *(_QWORD *)(a1 + 472),
                                        (__int64 *)(a1 + 48));
        if ( *(_DWORD *)(a1 - 16) == 2 )
        {
          v13 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 408);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v35, v13);
          throw (winrt::hresult_canceled *)v35;
        }
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 64) = VolumeToInstallPackageAsync;
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_BYTE *)(a1 + 80) = 1;
        *(_WORD *)(a1 + 8) = 6;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *>::promise_type>(
                                (__int64 *)(a1 + 56),
                                a1) )
          return;
        goto LABEL_14;
      case 5:
        tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        goto LABEL_36;
      case 6:
LABEL_14:
        v14 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88);
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_resume(
          a1 + 56,
          (winrt *)(a1 + 88));
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 56));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
        v15 = 0;
        *(_QWORD *)(a1 + 96) = 0LL;
        v16 = winrt::Windows::Foundation::operator!=(
                (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 88),
                (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 96));
        v17 = (__int64 *)(a1 + 16);
        v18 = a1 + 16;
        if ( v16 )
        {
          *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
                         v18,
                         (__int64 *)(a1 + 104))
                    + 284) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 104));
          *(_QWORD *)(a1 + 112) = 0LL;
          *(_QWORD *)(a1 + 120) = 0LL;
          *(_QWORD *)(a1 + 128) = 0LL;
          v19 = winrt::impl::create_and_initialize<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::Foundation::Uri>>((__int64 *)(a1 + 112));
          *(_QWORD *)(a1 + 136) = (unsigned __int64)(v19 + 2) & -(__int64)(v19 != 0LL);
          v20 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 112);
          if ( v20 )
          {
            std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
              v20,
              *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 120));
            std::_Deallocate<16>(
              v20,
              (struct std::nothrow_t *)((*(_QWORD *)(a1 + 128) - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL));
          }
          winrt::param::hstring::hstring(a1 + 152, (_QWORD *)(*(_QWORD *)(a1 + 472) + 48LL));
          winrt::Windows::Foundation::Uri::Uri(
            (winrt::Windows::Foundation::Uri *)(a1 + 144),
            (const struct winrt::param::hstring *)(a1 + 152));
          *(_DWORD *)(a1 + 184) = 0;
          winrt::Windows::Management::Deployment::PackageManager::PackageManager((struct IUnknown *)(a1 + 192));
          winrt::param::async_iterable<winrt::Windows::Foundation::Uri>::async_iterable<winrt::Windows::Foundation::Uri>(
            a1 + 200,
            (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 136));
          v21 = winrt::impl::consume_Windows_Management_Deployment_IPackageManager3<winrt::Windows::Management::Deployment::PackageManager>::AddPackageAsync(
                  (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))(a1 + 192),
                  (_QWORD *)(a1 + 216),
                  (_QWORD *)(a1 + 144),
                  (_QWORD *)(a1 + 200),
                  (unsigned int *)(a1 + 184),
                  (_QWORD *)(a1 + 88));
          if ( *(_DWORD *)(a1 - 16) == 2 )
          {
            v22 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 432);
            winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v36, v22);
            throw (winrt::hresult_canceled *)v36;
          }
          *(_QWORD *)(a1 + 224) = 0LL;
          *(_QWORD *)(a1 + 232) = v21;
          *(_QWORD *)(a1 + 240) = 0LL;
          *(_BYTE *)(a1 + 248) = 1;
          *(_WORD *)(a1 + 8) = 8;
          if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *,winrt::Windows::Management::Deployment::PackageVolume>::promise_type>(
                                  (__int64 *)(a1 + 224),
                                  a1) )
            return;
LABEL_25:
          winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>,1>::await_resume(
            a1 + 224,
            a1 + 272);
          winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 224));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 216));
          v24 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 200);
          if ( !*(_BYTE *)(a1 + 208) )
            *(_QWORD *)v24 = 0LL;
          v25 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 272);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v24);
          v15 = *winrt::impl::consume_Windows_Management_Deployment_IDeploymentResult<winrt::Windows::Management::Deployment::IDeploymentResult>::ExtendedErrorCode(
                   (__int64 *)(a1 + 272),
                   (_DWORD *)(a1 + 280)) >= 0;
          v26 = *winrt::impl::consume_Windows_Management_Deployment_IDeploymentResult<winrt::Windows::Management::Deployment::IDeploymentResult>::ExtendedErrorCode(
                   (__int64 *)(a1 + 272),
                   (_DWORD *)(a1 + 296));
          v17 = (__int64 *)(a1 + 16);
          *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
                         a1 + 16,
                         (__int64 *)(a1 + 288))
                    + 276) = v26;
          tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 288));
          if ( v15 )
          {
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55116415>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55116415>::GetImpl'::`2'::impl) )
            {
              v27 = SHRegSetBOOL(
                      HKEY_CURRENT_USER,
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\Dsh\\Widgets\\WidgetOnLock",
                      *(const unsigned __int16 **)(*(_QWORD *)(a1 + 472) + 32LL),
                      1);
              if ( v27 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x133,
                  (int)"shellcommon\\internal\\shell\\inc\\LockScreenWidgetPackageHelper.h",
                  (const char *)(unsigned int)v27);
            }
            tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
              a1 + 16,
              (__int64 *)(a1 + 304));
            v28 = *(_QWORD *)(a1 + 304);
            *(_DWORD *)(v28 + 284) = 6;
            v29 = *(LockScreenWidgetPackageHelperBase **)(a1 + 472);
            *(_BYTE *)(v28 + 272) = LockScreenWidgetPackageHelperBase::IsPackageInstalled(v29);
            v30 = (__int64 *)winrt::hstring::hstring(
                               (struct winrt::impl::shared_hstring_header **)(a1 + 456),
                               (__int64)v29 + 32);
            LockScreenWidgetPackageHelperBase::GetInstalledPackageVersion(v31, (_QWORD *)(a1 + 312), v30);
            winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 456));
            *(_QWORD *)(v28 + 288) = *(_QWORD *)(a1 + 312);
            tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::close(a1 + 304);
            tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 304));
            v25 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 272);
            v17 = (__int64 *)(a1 + 16);
          }
          else
          {
            *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
                           a1 + 16,
                           (__int64 *)(a1 + 320))
                      + 284) = 9;
            tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 320));
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v25);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 192));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 136));
          v14 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88);
        }
        else
        {
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
                        v18,
                        (__int64 *)(a1 + 328))
                   + 273) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 328));
        }
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v17);
        *(_BYTE *)(a1 - 8) = v15;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v14);
        tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>((void **)v17);
        v32 = *(_QWORD *)(a1 + 256);
LABEL_35:
        *(_QWORD *)(a1 + 360) = v32;
        *(_WORD *)(a1 + 8) = 0;
        if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
                (__int64 *)(a1 + 360),
                v33) )
        {
LABEL_36:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x250);
        }
        break;
      case 7:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 56));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
        tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        goto LABEL_36;
      case 8:
        goto LABEL_25;
      case 9:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 224));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 216));
        v23 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 200);
        if ( !*(_BYTE *)(a1 + 208) )
          *(_QWORD *)v23 = 0LL;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v23);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 192));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 136));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
        tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        goto LABEL_36;
    }
  }
}
