/*
 * XREFs of ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180635918
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Invoke @ 0x180634F80 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--WindowId___la.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1800642C8 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x1800ABDCC (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FB8E4 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C599C (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18034E244 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180352AB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x18061A68C (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x18061AB94 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18061C51C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@w.c)
 *     ??0?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180622C38 (--0-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623CF4 (--1-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624208 (--1-$test_data_control@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624344 (--1-$test_watcher@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806247F4 (--4-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x180626730 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x180626848 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x180627BB8 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?GetSystemId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBUWindowId@UI@56@@Z @ 0x1806280C0 (-GetSystemId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@A.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18062A8FC (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062AB60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@2@XZ @ 0x18062F4B4 (-watch_errors@-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@.c)
 *     ??$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z @ 0x1806307FC (--$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2AEA_NAEAW4SourceOfDisconnect@0@@Z @ 0x18063094C (--$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x180630A48 (--$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z @ 0x180630CA8 (--$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z.c)
 *     ??$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x180630D34 (--$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$_Erase@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUhstring@winrt@@@Z @ 0x180630D9C (--$_Erase@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionI.c)
 *     ??$_Erase@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@AEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180630E44 (--$_Erase@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_traits.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1806312D8 (--$find@X@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implem.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@1@XZ @ 0x180633424 (--C-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?at@?$unordered_map@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@@std@@QEAAAEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@2@AEBUhstring@winrt@@@Z @ 0x1806373B4 (-at@-$unordered_map@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Shell.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180649BE0 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Win_ea_180649BE0.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x180649C14 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x180649C84 (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4ScreenType@TransitionScreen@CloudDesktop@3456@XZ @ 0x180649D64 (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::OnWindowDestroyed(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  winrt::hstring *CorrelationId; // rax
  LPVOID v7; // rax
  wil::details::in1diag3 *v8; // rcx
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // rdx
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **FactoryImplObj; // rax
  char v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 *v16; // rax
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **v21; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *v22; // rdx
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *v23; // rdx
  PVOID Ptr; // rsi
  void (__fastcall *v25)(PVOID, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, volatile signed __int32 **); // r14
  const unsigned __int16 *v26; // r8
  const unsigned __int16 *v27; // r8
  _QWORD *v28; // rax
  PVOID v29; // r14
  void (__fastcall *v30)(PVOID, __int64); // r15
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 **v34; // rax
  __int64 **v35; // rax
  const unsigned __int16 *v36; // [rsp+38h] [rbp-2F0h] BYREF
  __int64 *v37; // [rsp+40h] [rbp-2E8h] BYREF
  volatile signed __int32 *v38; // [rsp+48h] [rbp-2E0h] BYREF
  volatile signed __int32 *v39; // [rsp+50h] [rbp-2D8h] BYREF
  int NetworkConnectivityLevel; // [rsp+58h] [rbp-2D0h] BYREF
  void *v41; // [rsp+60h] [rbp-2C8h] BYREF
  const unsigned __int16 *v42; // [rsp+68h] [rbp-2C0h] BYREF
  volatile signed __int32 *v43; // [rsp+70h] [rbp-2B8h] BYREF
  int BootToCloudModeType; // [rsp+78h] [rbp-2B0h] BYREF
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *v45[2]; // [rsp+80h] [rbp-2A8h] BYREF
  _BYTE v46[56]; // [rsp+90h] [rbp-298h] BYREF
  const unsigned __int16 *v47; // [rsp+C8h] [rbp-260h] BYREF
  std::_Ref_count_base *v48; // [rsp+D0h] [rbp-258h]
  WCHAR pvData[264]; // [rsp+F0h] [rbp-238h] BYREF

  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1
    && GetSystemMetrics(0x2000) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
      1u,
      v4,
      v5);
    CorrelationId = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                      (winrt::hstring *)&v37,
                      &c_bootSystemId);
    v36 = winrt::hstring::c_str(CorrelationId);
    CloudPCTelemetry::B2CSystemShuttingDown<unsigned short const *>(&v36);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v37);
    return;
  }
  v41 = 0LL;
  v7 = CoTaskMemAlloc(0x158uLL);
  if ( !v7 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v8);
  v36 = (const unsigned __int16 *)tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>(
                                    (__int64)v7,
                                    0LL);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::operator=(
    &v41,
    (void **)&v36);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>((void **)&v36);
  tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::watch_errors(
    &v41,
    (__int64)v46);
  *(_OWORD *)v45 = 0LL;
  winrt::hstring::hstring((winrt::hstring *)&v43, &LocaleName);
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v36, this + 7);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetSystemId(&v39, (__int64)a2);
  if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
  {
    v9 = (volatile signed __int32 **)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                                       (winrt::hstring *)&v37,
                                       (__int64 *)&v39);
    if ( &v43 != v9 )
    {
      v10 = *v9;
      *v9 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(&v43, (__int64)v10);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v37);
  }
  FactoryImplObj = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v37);
  v12 = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoveWindow(
          *FactoryImplObj,
          a2);
  if ( v37 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v37);
  if ( !v12 )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::operator->(
                  &v41,
                  (__int64 *)&v47)
             + 300) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)&v47);
LABEL_42:
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v36);
    if ( v45[0] )
    {
      if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
      {
        if ( !winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(v45[0])
          || (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(v45[0]) != 3 )
        {
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v42, this + 7);
          v34 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                              v45[0],
                              &v47);
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
            v34,
            &v36);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v47);
          std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::_Erase<winrt::hstring>(
            &this[9].Ptr,
            (__int64 *)&v36);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v36);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v42);
        }
        (*(void (__fastcall **)(PVOID, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, volatile signed __int32 **))(*(_QWORD *)this[5].Ptr + 32LL))(
          this[5].Ptr,
          v45,
          &v43);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
        if ( v45[1] )
          std::_Ref_count_base::_Decref(v45[1]);
        goto LABEL_18;
      }
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v42, this + 7);
      v35 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                          v45[0],
                          &v47);
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        v35,
        &v36);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v47);
      std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::_Erase<winrt::hstring>(
        &this[9].Ptr,
        (__int64 *)&v36);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v36);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v42);
    }
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v41);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
    if ( v45[1] )
      std::_Ref_count_base::_Decref(v45[1]);
    goto LABEL_18;
  }
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v37, &v39);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
    1u,
    v13,
    v14);
  v15 = winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
          &v37,
          &v38);
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v15);
  CloudPCTelemetry::ProviderWindowRemoved<unsigned __int64 const &,unsigned int>(a2, &NetworkConnectivityLevel);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v38);
  v16 = winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
          &v37,
          &v38);
  v17 = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v38);
  if ( v17 )
  {
LABEL_40:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v37);
    goto LABEL_42;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::GetImpl'::`2'::impl,
    1u,
    v18,
    v19);
  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
    BYTE1(this[31].Ptr) = 1;
  std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::find<void>(
    &this[9].Ptr,
    &v38,
    (__int64 *)&v39);
  if ( v38 != this[10].Ptr )
  {
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v37) == 3 )
    {
      v20 = (_QWORD *)std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
                        &this[9],
                        &v39);
      v21 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **)std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                                                                                            &v47,
                                                                                            v20);
      v22 = *v21;
      *v21 = v45[0];
      v45[0] = v22;
      v23 = v21[1];
      v21[1] = v45[1];
      v45[1] = v23;
      if ( v48 )
        std::_Ref_count_base::_Decref(v48);
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        Ptr = this[5].Ptr;
        v25 = *(void (__fastcall **)(PVOID, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, volatile signed __int32 **))(*(_QWORD *)Ptr + 32LL);
        winrt::hstring::hstring((winrt::hstring *)&v38, &LocaleName);
        v25(Ptr, v45, &v38);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v38);
      }
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v26);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::ReportUsage(
          (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl,
          1u);
        NetworkConnectivityLevel = 0;
        v42 = winrt::hstring::c_str((winrt::hstring *)&v39);
        BootToCloudModeType = CloudPCHelpers::GetBootToCloudModeType();
        LODWORD(v38) = 1;
        CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,unsigned int,unsigned short (&)[260],unsigned short const *,bool,enum CloudPCTelemetryCore::SourceOfDisconnect>(
          (int *)&v38,
          &BootToCloudModeType,
          (__int64)pvData,
          (__int64 *)&v42);
      }
    }
    else
    {
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl) )
        {
          v28 = (_QWORD *)std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
                            &this[9],
                            &v39);
          std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v47, v28);
          if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(v47) == 98 )
          {
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::operator->(
                          &v41,
                          (__int64 *)&v42)
                     + 301) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)&v42);
            tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v41);
            if ( v48 )
              std::_Ref_count_base::_Decref(v48);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v37);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v36);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
            if ( v45[1] )
              std::_Ref_count_base::_Decref(v45[1]);
            goto LABEL_18;
          }
          if ( v48 )
            std::_Ref_count_base::_Decref(v48);
        }
        CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v27);
        CloudPCTelemetryCore::W365Crash<unsigned short (&)[260]>(pvData);
      }
      else
      {
        LODWORD(v38) = 2;
        v42 = winrt::hstring::c_str((winrt::hstring *)&v39);
        v47 = winrt::hstring::c_str((winrt::hstring *)&v43);
        BootToCloudModeType = 0;
        NetworkConnectivityLevel = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode();
        CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,int,unsigned short const *,unsigned short const *,bool &,enum CloudPCTelemetryCore::SourceOfDisconnect &>(
          &NetworkConnectivityLevel,
          &BootToCloudModeType,
          (__int64 *)&v47,
          (__int64 *)&v42);
      }
      v29 = this[5].Ptr;
      v30 = *(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v29 + 40LL);
      v31 = std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
              &this[9],
              &v39);
      v30(v29, v31);
    }
    v32 = std::wstring::wstring(&v47, (__int64 *)&v39);
    std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::_Erase<std::wstring>(
      v33,
      v32);
    std::wstring::_Tidy_deallocate((void **)&v47);
    goto LABEL_40;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v37);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v36);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
  if ( v45[1] )
    std::_Ref_count_base::_Decref(v45[1]);
LABEL_18:
  tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)v46);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>(&v41);
}
