/*
 * XREFs of LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60
 * Callers:
 *     ?TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@5@0UPackageVersion@ApplicationModel@45@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z @ 0x1805D9308 (-TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA-AUIAsyncAction@Foundati.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A5D0 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800CA1E4 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801909B8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?create@?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1801C7BF8 (-create@-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_pol.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801FDA14 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x180208578 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027F280 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028038C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180328F74 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1803309B4 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1803309B4.c)
 *     ?Completed@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x180589AC4 (-Completed@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIApp.c)
 *     ?InstanceReady@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B3F40 (-InstanceReady@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ??$?0V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@Z @ 0x1805C36DC (--$-0V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@-$TypedEventHandler@UAppInstallItem@InstallCon.c)
 *     ??$?0V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@Z @ 0x1805C374C (--$-0V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@-$TypedEventHandler@UAppInstallItem@InstallCon.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x1805CAB38 (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$I.c)
 *     ??0_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805CAC04 (--0_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBV-$tip_test@V-$merged_data@U_tip_SettingsS.c)
 *     ??0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@PEAVLockScreenWidgetPackageHelperBase@@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805CAC7C (--0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@PEAVLockScreenWidgetPackageHelperBase@@AEBV-$.c)
 *     ??0AppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x1805CBA2C (--0AppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 *     ??1_parameters_@?BC@??TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@6@0UPackageVersion@ApplicationModel@56@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z@QEAA@XZ @ 0x1805CBD58 (--1_parameters_@-BC@--TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBE2C (--1-$com_ptr_t@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_return.c)
 *     ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1805CBE8C (--1-$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@.c)
 *     ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BII@AA@impl@winrt@@QEAA@XZ @ 0x1805CBEE8 (--1-$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@W_ea_1805CBEE8.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC238 (--1-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@1@XZ @ 0x1805CC6A0 (--C-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     ?CompletedInstallToastNotificationMode@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBW4AppInstallationToastNotificationMode@InstallControl@Preview@Store@ApplicationModel@Windows@3@@Z @ 0x1805CEB28 (-CompletedInstallToastNotificationMode@-$consume_Windows_ApplicationModel_Store_Preview_InstallC.c)
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x1805D25D0 (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA-AUPackageVersion@Application.c)
 *     ?GetIsAppAllowedToInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805D27A0 (-GetIsAppAllowedToInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_I.c)
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D40D8 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4124 (-IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D43E4 (-IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4540 (-IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4684 (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805D4770 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4CC4 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0_N1@Z @ 0x1805D73DC (-StartAppInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstal.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ @ 0x1805DAC18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805DB080 (-close@-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805DB520 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@t.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA@XZ @ 0x1805DC3A4 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UAppInstallItem@InstallCont.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=2
void __fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v3; // r15
  _QWORD *v4; // rax
  __int64 v5; // r13
  void **v6; // rdx
  void **v7; // rdx
  void *v8; // r8
  __int64 v9; // rcx
  const struct winrt::impl::slim_source_location *v10; // rax
  _QWORD *IsAppAllowedToInstallAsync; // r15
  _DWORD *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdx
  char v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *started; // rax
  int v19; // r12d
  _lambda_c63df5938b5e32cbd3483994e088b3e3_ *v20; // rax
  char v21; // r8
  _lambda_9f5c7493512f30cd4ebf6dfda1287bbc_ *v22; // rax
  char v23; // r8
  wil **v24; // rax
  wil *v25; // rcx
  void **v26; // rcx
  _QWORD *v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rdx
  char Results; // al
  _BYTE *v31; // rbx
  LockScreenWidgetPackageHelperBase *v32; // rcx
  LockScreenWidgetPackageHelperBase *v33; // rcx
  LockScreenWidgetPackageHelperBase *v34; // rcx
  LockScreenWidgetPackageHelperBase *v35; // rcx
  LockScreenWidgetPackageHelperBase *v36; // rcx
  LockScreenWidgetPackageHelperBase *v37; // rcx
  __int64 v38; // rbx
  void (__fastcall ***v39)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int16 v43; // [rsp+30h] [rbp-128h]
  _BYTE pExceptionObject[224]; // [rsp+78h] [rbp-E0h] BYREF

  v3 = a1 + 8;
  v43 = *(_WORD *)(a1 + 8);
  if ( (unsigned __int16)(v43 + 1) > 6u )
  {
LABEL_39:
    __debugbreak();
  }
  else
  {
    switch ( v43 )
    {
      case -1:
        goto LABEL_37;
      case 0:
        goto LABEL_39;
      case 1:
      case 3:
        goto LABEL_36;
      case 2:
        *(_DWORD *)(a1 + 512) = 0;
        *(_QWORD *)(a1 + 16) = 0LL;
        v4 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::ensure_data(a1 + 16);
        tip2::details::shared_data<1,0,0>::start(*v4 + 8LL, (_OWORD *)(a1 + 520));
        tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
          a1 + 16,
          (__int64 *)(a1 + 24));
        *(_QWORD *)(a1 + 608) = a1 + 32;
        v5 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(v5 + 308) = *(_QWORD *)(a1 + 672);
        winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)(a1 + 656), (_QWORD *)(a1 + 536));
        std::wstring::assign((char *)(v5 + 320), *v6, *(_QWORD *)(a1 + 544));
        *(_QWORD *)(a1 + 624) = a1 + 24;
        winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)(a1 + 664), (_QWORD *)(a1 + 552));
        std::wstring::assign((char *)(v5 + 352), *v7, *(_QWORD *)(a1 + 560));
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 24);
        *(_QWORD *)(a1 + 592) = a1 - 112;
        *(_BYTE *)(a1 + 32) = 0;
        v9 = *(unsigned int *)(a1 - 112 + 96);
        if ( (_DWORD)v9 == 2 )
        {
          v10 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 568);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v10);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        *(_WORD *)v3 = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v9, (void (*)(void *, void *))a1, v8);
        return;
      case 4:
        if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
               (LockScreenWidgetPackageHelperBase *)a1,
               (const struct winrt::hstring *)(*(_QWORD *)(a1 + 624) + 640LL),
               (const struct winrt::Windows::ApplicationModel::PackageVersion *)(*(_QWORD *)(a1 + 608) + 640LL)) )
        {
          tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
            a1 + 16,
            (__int64 *)(a1 + 488));
          v38 = *(_QWORD *)(a1 + 488);
          *(_DWORD *)(v38 + 296) = 6;
          *(_BYTE *)(v38 + 272) = 1;
          *(_QWORD *)(a1 + 624) = a1 + 24;
          *(_QWORD *)(v38 + 300) = *LockScreenWidgetPackageHelperBase::GetInstalledPackageVersion(
                                      v39,
                                      (_QWORD *)(a1 + 496),
                                      (__int64 *)(a1 + 664));
          *(_DWORD *)(v38 + 288) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 488);
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 488));
          goto LABEL_33;
        }
        winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager::AppInstallManager((struct IUnknown *)(a1 + 40));
        if ( (***(unsigned __int8 (__fastcall ****)(_QWORD))(v3 + 640))(*(_QWORD *)(v3 + 640)) )
        {
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 656);
          IsAppAllowedToInstallAsync = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::GetIsAppAllowedToInstallAsync(
                                         (__int64 **)(a1 + 40),
                                         (_QWORD *)(a1 + 80),
                                         (__int64 *)(a1 + 48));
          v12 = (_DWORD *)(a1 + 512);
          *(_DWORD *)(a1 + 512) = 1;
          v13 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))IsAppAllowedToInstallAsync);
          if ( !v13 )
            v13 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(IsAppAllowedToInstallAsync);
          winrt::impl::check_status_canceled((winrt::impl *)v13, v14);
          if ( winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(IsAppAllowedToInstallAsync) )
          {
            v15 = 1;
            goto LABEL_15;
          }
        }
        else
        {
          v12 = (_DWORD *)(a1 + 512);
        }
        v15 = 0;
LABEL_15:
        if ( (*v12 & 1) != 0 )
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
        v16 = a1 + 16;
        if ( v15 )
        {
          tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
            v16,
            (__int64 *)(a1 + 88));
          v17 = *(_QWORD *)(a1 + 88);
          *(_WORD *)(v17 + 385) = 257;
          *(_BYTE *)(v17 + 384) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 88);
          *(_QWORD *)(a1 + 96) = 0LL;
          *(_QWORD *)(a1 + 104) = 0LL;
          _create___event_t_V__shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
            a1 + 96,
            1);
          *(_QWORD *)(a1 + 112) = 0LL;
          *(_QWORD *)(a1 + 144) = *(_QWORD *)(a1 + 656);
          started = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::StartAppInstallAsync(
                      (__int64 *)(a1 + 40),
                      (_QWORD *)(a1 + 176),
                      (__int64 *)(a1 + 144),
                      (_QWORD *)(a1 + 112));
          winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::get(
            started,
            a1 + 184);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 176));
          v19 = winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason((__int64 *)(a1 + 184));
          *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
                         a1 + 16,
                         (__int64 *)(a1 + 192))
                    + 292) = v19;
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 192));
          *(_DWORD *)(a1 + 200) = 3;
          winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::CompletedInstallToastNotificationMode(
            (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 184),
            (unsigned int *)(a1 + 200));
          v20 = (_lambda_c63df5938b5e32cbd3483994e088b3e3_ *)_lambda_c63df5938b5e32cbd3483994e088b3e3_::_lambda_c63df5938b5e32cbd3483994e088b3e3_(
                                                               (_QWORD *)(a1 + 216),
                                                               *(_QWORD *)(a1 + 648),
                                                               a1 + 16,
                                                               (_QWORD *)(a1 + 96),
                                                               a1 + 680);
          winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>(
            (_QWORD *)(a1 + 208),
            v20);
          winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::Completed(
            (__int64 *)(a1 + 184),
            (_QWORD *)(a1 + 312),
            v21,
            (__int64 *)(a1 + 208));
          if ( *(_QWORD *)(a1 + 208) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 208));
          v22 = (_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_ *)_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_::_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_(
                                                               a1 + 336,
                                                               a1 + 16,
                                                               (_QWORD *)(a1 + 96),
                                                               a1 + 744);
          winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>(
            (_QWORD *)(a1 + 328),
            v22);
          winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceReady(
            (__int64 *)(a1 + 184),
            (_QWORD *)(a1 + 424),
            v23,
            (__int64 *)(a1 + 328));
          if ( *(_QWORD *)(a1 + 328) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 328));
          v24 = *(wil ***)(a1 + 96);
          if ( v24 )
            v25 = *v24;
          else
            v25 = 0LL;
          wil::handle_wait(v25, (void *)0xFFFFFFFFLL);
          __1__event_revoker_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___MP8type___abi_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BII_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 424));
          __1__event_revoker_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___MP8type___abi_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BHI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 312));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
          std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1 + 96);
          v26 = (void **)(a1 + 88);
        }
        else
        {
          tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
            v16,
            (__int64 *)(a1 + 440));
          *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 656);
          v27 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::GetIsAppAllowedToInstallAsync(
                  (__int64 **)(a1 + 40),
                  (_QWORD *)(a1 + 480),
                  (__int64 *)(a1 + 448));
          v28 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v27);
          if ( !v28 )
            v28 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(v27);
          winrt::impl::check_status_canceled((winrt::impl *)v28, v29);
          Results = winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(v27);
          v31 = *(_BYTE **)(a1 + 440);
          v31[384] = Results;
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 480));
          v31[385] = LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(v32);
          v31[386] = LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(v33);
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55740385>::GetImpl'::`2'::impl) )
          {
            v31[273] = LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(v34);
            v31[387] = LockScreenWidgetPackageHelperBase::IsInternetUpdateAllowed(v35);
            v31[388] = LockScreenWidgetPackageHelperBase::IsInCTARegion(v36);
            v31[389] = LockScreenWidgetPackageHelperBase::IsCTAUpdateAllowed(v37);
          }
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 440);
          v26 = (void **)(a1 + 440);
        }
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>(v26);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
LABEL_33:
        v40 = *(_QWORD *)(a1 + 16);
        if ( v40 )
          tip2::details::shared_data<1,0,0>::complete_without_lock(v40 + 8);
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        *(_QWORD *)(a1 + 504) = *(_QWORD *)(a1 + 592);
        *(_WORD *)(a1 + 8) = 0;
        if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
                (__int64 *)(a1 + 504),
                v41) )
        {
LABEL_36:
          v3 = a1 + 8;
LABEL_37:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
          `LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync'::`18'::_parameters_::~_parameters_(
            v3 + 640,
            v42);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x3A0);
        }
        break;
      case 5:
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        goto LABEL_36;
    }
  }
}
