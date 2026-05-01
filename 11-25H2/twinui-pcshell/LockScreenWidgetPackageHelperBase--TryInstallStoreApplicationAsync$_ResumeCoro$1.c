/*
 * XREFs of LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805B5220
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_InitCoro$2 @ 0x1805B5098 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_InitCoro$2.c)
 * Callees:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18005CD48 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800611C4 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180065104 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1800A2F70 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ?create@?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800A450C (-create@-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_pol.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800A53F0 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180198578 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x18021659C (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802291B8 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foun.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180287DF0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028CC38 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ??$?0V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@Z @ 0x18059F498 (--$-0V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@-$TypedEventHandler@UAppInstallItem@InstallCon.c)
 *     ??$?0V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@Z @ 0x18059F508 (--$-0V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@-$TypedEventHandler@UAppInstallItem@InstallCon.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x1805A69FC (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$I.c)
 *     ??0_lambda_adefc463c2a6e43ea1280e21dd7410de_@@QEAA@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805A6A9C (--0_lambda_adefc463c2a6e43ea1280e21dd7410de_@@QEAA@AEBV-$tip_test@V-$merged_data@U_tip_SettingsS.c)
 *     ??0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@QEAVLockScreenWidgetPackageHelperBase@@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805A6B0C (--0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@QEAVLockScreenWidgetPackageHelperBase@@AEBV-$.c)
 *     ??0AppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x1805A7828 (--0AppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 *     ??1_parameters_@?BC@??TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@6@0UPackageVersion@ApplicationModel@56@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z@QEAA@XZ @ 0x1805A7BC0 (--1_parameters_@-BC@--TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805A7C94 (--1-$com_ptr_t@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_return.c)
 *     ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1805A7CF4 (--1-$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@.c)
 *     ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BII@AA@impl@winrt@@QEAA@XZ @ 0x1805A7D50 (--1-$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@W_ea_1805A7D50.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A80A0 (--1-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@1@XZ @ 0x1805A8524 (--C-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     ?Completed@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x1805AA7DC (-Completed@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIApp.c)
 *     ?CompletedInstallToastNotificationMode@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBW4AppInstallationToastNotificationMode@InstallControl@Preview@Store@ApplicationModel@Windows@3@@Z @ 0x1805AA928 (-CompletedInstallToastNotificationMode@-$consume_Windows_ApplicationModel_Store_Preview_InstallC.c)
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x1805AE770 (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA-AUPackageVersion@Application.c)
 *     ?GetIsAppAllowedToInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805AE940 (-GetIsAppAllowedToInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_I.c)
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B01C8 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0214 (-IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B04D4 (-IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0624 (-IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0768 (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805B0854 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0E18 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0_N1@Z @ 0x1805B356C (-StartAppInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstal.c)
 *     ?StatusChanged@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x1805B4080 (-StatusChanged@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@U.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ @ 0x1805B72C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805B7728 (-close@-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805B7B2C (-ensure_data@-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@t.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA@XZ @ 0x1805B89A4 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UAppInstallItem@InstallCont.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=2
void __fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  void **v4; // rdx
  void **v5; // rdx
  void *v6; // r8
  __int64 v7; // rcx
  const struct winrt::impl::slim_source_location *v8; // rax
  _QWORD *IsAppAllowedToInstallAsync; // r14
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  char v13; // r14
  __int64 v14; // rcx
  _WORD *v15; // r8
  _QWORD *started; // rax
  int v17; // r15d
  _lambda_c63df5938b5e32cbd3483994e088b3e3_ *v18; // rax
  char v19; // r8
  _lambda_adefc463c2a6e43ea1280e21dd7410de_ *v20; // rax
  char v21; // r8
  wil **v22; // rax
  wil *v23; // rcx
  void **v24; // rcx
  _QWORD *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rbx
  LockScreenWidgetPackageHelperBase *v29; // rcx
  LockScreenWidgetPackageHelperBase *v30; // rcx
  LockScreenWidgetPackageHelperBase *v31; // rcx
  LockScreenWidgetPackageHelperBase *v32; // rcx
  LockScreenWidgetPackageHelperBase *v33; // rcx
  LockScreenWidgetPackageHelperBase *v34; // rcx
  __int64 v35; // rbx
  void (__fastcall ***v36)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int16 v40; // [rsp+30h] [rbp-128h]
  _BYTE pExceptionObject[232]; // [rsp+70h] [rbp-E8h] BYREF

  v40 = *(_WORD *)(a1 + 8);
  if ( (unsigned __int16)(v40 + 1) > 6u )
  {
LABEL_38:
    __debugbreak();
  }
  else
  {
    switch ( v40 )
    {
      case -1:
      case 1:
      case 3:
        goto LABEL_36;
      case 0:
        goto LABEL_38;
      case 2:
        *(_DWORD *)(a1 + 544) = 0;
        *(_QWORD *)(a1 + 16) = 0LL;
        v2 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::ensure_data(a1 + 16);
        tip2::details::shared_data<1,0,0>::start(*v2 + 8LL, (_OWORD *)(a1 + 552));
        tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
          a1 + 16,
          (__int64 *)(a1 + 24));
        *(_QWORD *)(a1 + 640) = a1 + 25;
        v3 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(v3 + 300) = *(_QWORD *)(a1 + 697);
        winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)(a1 + 681), (_QWORD *)(a1 + 568));
        std::wstring::assign((void **)(v3 + 312), *v4, *(_QWORD *)(a1 + 576));
        *(_QWORD *)(a1 + 656) = a1 + 17;
        winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)(a1 + 689), (_QWORD *)(a1 + 584));
        std::wstring::assign((void **)(v3 + 344), *v5, *(_QWORD *)(a1 + 592));
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 24);
        *(_QWORD *)(a1 + 624) = a1 - 112;
        *(_BYTE *)(a1 + 32) = 0;
        v7 = *(unsigned int *)(a1 - 112 + 96);
        if ( (_DWORD)v7 == 2 )
        {
          v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 600);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v8);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v7, (void (*)(void *, void *))a1, v6);
        return;
      case 4:
        if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
               (LockScreenWidgetPackageHelperBase *)a1,
               (const struct winrt::hstring *)(*(_QWORD *)(a1 + 656) + 672LL),
               (const struct winrt::Windows::ApplicationModel::PackageVersion *)(*(_QWORD *)(a1 + 640) + 672LL)) )
        {
          tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
            a1 + 16,
            (__int64 *)(a1 + 520));
          v35 = *(_QWORD *)(a1 + 520);
          *(_DWORD *)(v35 + 288) = 6;
          *(_BYTE *)(v35 + 264) = 1;
          *(_QWORD *)(a1 + 656) = a1 + 17;
          *(_QWORD *)(v35 + 292) = *LockScreenWidgetPackageHelperBase::GetInstalledPackageVersion(
                                      v36,
                                      (_QWORD *)(a1 + 528),
                                      (__int64 *)(a1 + 689));
          *(_DWORD *)(v35 + 280) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 520);
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 520));
          goto LABEL_33;
        }
        winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager::AppInstallManager((struct IUnknown *)(a1 + 40));
        if ( (***(unsigned __int8 (__fastcall ****)(_QWORD))(a1 + 673))(*(_QWORD *)(a1 + 673)) )
        {
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 681);
          IsAppAllowedToInstallAsync = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::GetIsAppAllowedToInstallAsync(
                                         (__int64 **)(a1 + 40),
                                         (_QWORD *)(a1 + 80),
                                         (__int64 *)(a1 + 48));
          v10 = (_DWORD *)(a1 + 544);
          *(_DWORD *)(a1 + 544) = 1;
          v11 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))IsAppAllowedToInstallAsync);
          if ( !v11 )
            v11 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(IsAppAllowedToInstallAsync);
          winrt::impl::check_status_canceled((winrt::impl *)v11, v12);
          if ( winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(IsAppAllowedToInstallAsync) )
          {
            v13 = 1;
            goto LABEL_15;
          }
        }
        else
        {
          v10 = (_DWORD *)(a1 + 544);
        }
        v13 = 0;
LABEL_15:
        if ( (*v10 & 1) != 0 )
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
        v14 = a1 + 16;
        if ( v13 )
        {
          tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
            v14,
            (__int64 *)(a1 + 88));
          *(_DWORD *)(a1 + 96) = 16843009;
          v15 = *(_WORD **)(a1 + 88);
          v15[189] = *(_WORD *)(a1 + 96);
          v15[190] = *(_WORD *)(a1 + 98);
          *(_WORD *)(a1 + 100) = 257;
          v15[188] = *(_WORD *)(a1 + 100);
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 88);
          *(_QWORD *)(a1 + 104) = 0LL;
          *(_QWORD *)(a1 + 112) = 0LL;
          _create___event_t_V__shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
            a1 + 104,
            1);
          *(_QWORD *)(a1 + 120) = 0LL;
          *(_QWORD *)(a1 + 152) = *(_QWORD *)(a1 + 681);
          started = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::StartAppInstallAsync(
                      (__int64 *)(a1 + 40),
                      (_QWORD *)(a1 + 184),
                      (__int64 *)(a1 + 152),
                      (_QWORD *)(a1 + 120));
          winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::get(
            started,
            a1 + 192);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
          v17 = winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason((__int64 *)(a1 + 192));
          *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
                         a1 + 16,
                         (__int64 *)(a1 + 200))
                    + 284) = v17;
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 200));
          *(_DWORD *)(a1 + 208) = 3;
          winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::CompletedInstallToastNotificationMode(
            (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 192),
            (unsigned int *)(a1 + 208));
          v18 = (_lambda_c63df5938b5e32cbd3483994e088b3e3_ *)_lambda_c63df5938b5e32cbd3483994e088b3e3_::_lambda_c63df5938b5e32cbd3483994e088b3e3_(
                                                               (_QWORD *)(a1 + 224),
                                                               *(_QWORD *)(a1 + 673),
                                                               a1 + 16,
                                                               (_QWORD *)(a1 + 104),
                                                               a1 + 705);
          winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>(
            (_QWORD *)(a1 + 216),
            v18);
          winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::Completed(
            (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 192),
            (__int64 *)(a1 + 320),
            v19,
            (_QWORD *)(a1 + 216));
          if ( *(_QWORD *)(a1 + 216) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 216));
          v20 = (_lambda_adefc463c2a6e43ea1280e21dd7410de_ *)_lambda_adefc463c2a6e43ea1280e21dd7410de_::_lambda_adefc463c2a6e43ea1280e21dd7410de_(
                                                               a1 + 344,
                                                               a1 + 16,
                                                               (_QWORD *)(a1 + 104),
                                                               a1 + 769);
          winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>(
            (_QWORD *)(a1 + 336),
            v20);
          winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::StatusChanged(
            (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 192),
            (__int64 *)(a1 + 432),
            v21,
            (_QWORD *)(a1 + 336));
          if ( *(_QWORD *)(a1 + 336) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 336));
          v22 = *(wil ***)(a1 + 104);
          if ( v22 )
            v23 = *v22;
          else
            v23 = 0LL;
          wil::handle_wait(v23, (void *)0xFFFFFFFFLL);
          __1__event_revoker_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___MP8type___abi_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BII_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 432));
          __1__event_revoker_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___MP8type___abi_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BHI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 320));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 192));
          std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1 + 104);
          v24 = (void **)(a1 + 88);
        }
        else
        {
          tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
            v14,
            (__int64 *)(a1 + 448));
          *(_QWORD *)(a1 + 464) = *(_QWORD *)(a1 + 681);
          v25 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::GetIsAppAllowedToInstallAsync(
                  (__int64 **)(a1 + 40),
                  (_QWORD *)(a1 + 496),
                  (__int64 *)(a1 + 464));
          v26 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v25);
          if ( !v26 )
            v26 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(v25);
          winrt::impl::check_status_canceled((winrt::impl *)v26, v27);
          *(_BYTE *)(a1 + 456) = winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(v25);
          *(_BYTE *)(a1 + 457) = 1;
          v28 = *(_QWORD *)(a1 + 448);
          *(_WORD *)(v28 + 376) = *(_WORD *)(a1 + 456);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 496));
          *(_BYTE *)(a1 + 504) = LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(v29);
          *(_BYTE *)(a1 + 505) = 1;
          *(_WORD *)(v28 + 378) = *(_WORD *)(a1 + 504);
          *(_BYTE *)(a1 + 506) = LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(v30);
          *(_BYTE *)(a1 + 507) = 1;
          *(_WORD *)(v28 + 380) = *(_WORD *)(a1 + 506);
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55740385>::GetImpl'::`2'::impl) )
          {
            *(_BYTE *)(v28 + 265) = LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(v31);
            *(_BYTE *)(a1 + 508) = LockScreenWidgetPackageHelperBase::IsInternetUpdateAllowed(v32);
            *(_BYTE *)(a1 + 509) = 1;
            *(_WORD *)(v28 + 382) = *(_WORD *)(a1 + 508);
            *(_BYTE *)(a1 + 510) = LockScreenWidgetPackageHelperBase::IsInCTARegion(v33);
            *(_BYTE *)(a1 + 511) = 1;
            *(_WORD *)(v28 + 384) = *(_WORD *)(a1 + 510);
            *(_BYTE *)(a1 + 512) = LockScreenWidgetPackageHelperBase::IsCTAUpdateAllowed(v34);
            *(_BYTE *)(a1 + 513) = 1;
            *(_WORD *)(v28 + 386) = *(_WORD *)(a1 + 512);
          }
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 448);
          v24 = (void **)(a1 + 448);
        }
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>(v24);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
LABEL_33:
        v37 = *(_QWORD *)(a1 + 16);
        if ( v37 )
          tip2::details::shared_data<1,0,0>::complete_without_lock(v37 + 8);
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        *(_QWORD *)(a1 + 536) = *(_QWORD *)(a1 + 624);
        *(_WORD *)(a1 + 8) = 0;
        if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
                (__int64 *)(a1 + 536),
                v38) )
        {
LABEL_36:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>((__int64 *)(a1 - 112));
          `LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync'::`18'::_parameters_::~_parameters_(
            a1 + 673,
            v39);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x3C0);
        }
        break;
      case 5:
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        goto LABEL_36;
    }
  }
}
