/*
 * XREFs of ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x18065B5B0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Invoke @ 0x18065AC60 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--WindowId___la.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B7298 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1801CC6C4 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802BC584 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803528DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180358A84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x180640200 (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x1806406BC (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180641EEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@w.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180648208 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806499D0 (--1-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649EF0 (--1-$test_data_control@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18064A02C (--1-$test_watcher@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18064A530 (--4-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x18064C3D0 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x18064C4E8 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x18064D6B4 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?GetSystemId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBUWindowId@UI@56@@Z @ 0x18064DBC0 (-GetSystemId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@A.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18065039C (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650570 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@2@XZ @ 0x180654FF4 (-watch_errors@-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@.c)
 *     ??$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z @ 0x1806562F4 (--$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$CPCProviderAppClose@IHPEBGPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x180656444 (--$CPCProviderAppClose@IHPEBGPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryC.c)
 *     ??$CPCProviderAppClose@IIAEAY0BAE@GPEBGAEA_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBGAEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x180656540 (--$CPCProviderAppClose@IIAEAY0BAE@GPEBGAEA_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCT.c)
 *     ??$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z @ 0x180656894 (--$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z.c)
 *     ??$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x180656920 (--$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$_Erase@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUhstring@winrt@@@Z @ 0x180656988 (--$_Erase@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionI.c)
 *     ??$_Erase@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@AEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180656A30 (--$_Erase@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_traits.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@1@XZ @ 0x180659088 (--C-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?at@?$unordered_map@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@@std@@QEAAAEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@2@AEBUhstring@winrt@@@Z @ 0x18065CED4 (-at@-$unordered_map@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Shell.c)
 *     ?find@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x18065D6D4 (-find@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare@.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18066FB80 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Win_ea_18066FB80.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FBB4 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x18066FC24 (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4ScreenType@TransitionScreen@CloudDesktop@3456@XZ @ 0x18066FD04 (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::OnWindowDestroyed(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  __int64 v4; // r8
  winrt::hstring *CorrelationId; // rax
  void **v6; // rax
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rdx
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **FactoryImplObj; // rax
  char v10; // r14
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 *v13; // rax
  int v14; // esi
  __int64 v15; // r8
  _QWORD *v16; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **v17; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *v18; // rdx
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *v19; // rdx
  PVOID Ptr; // rsi
  void (__fastcall *v21)(PVOID, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, volatile signed __int32 **); // r14
  const unsigned __int16 *v22; // r8
  const unsigned __int16 *v23; // r8
  _QWORD *v24; // rax
  PVOID v25; // r14
  void (__fastcall *v26)(PVOID, __int64); // r15
  __int64 v27; // rax
  unsigned __int8 *v28; // rax
  __int64 v29; // rcx
  __int64 **v30; // rax
  __int64 **v31; // rax
  void *v32; // [rsp+38h] [rbp-2F0h] BYREF
  RTL_SRWLOCK *v33; // [rsp+40h] [rbp-2E8h] BYREF
  volatile signed __int32 *v34; // [rsp+48h] [rbp-2E0h] BYREF
  volatile signed __int32 *v35; // [rsp+50h] [rbp-2D8h] BYREF
  int NetworkConnectivityLevel; // [rsp+58h] [rbp-2D0h] BYREF
  void *v37; // [rsp+60h] [rbp-2C8h] BYREF
  const unsigned __int16 *v38; // [rsp+68h] [rbp-2C0h] BYREF
  volatile signed __int32 *v39; // [rsp+70h] [rbp-2B8h] BYREF
  int BootToCloudModeType; // [rsp+78h] [rbp-2B0h] BYREF
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *v41[2]; // [rsp+80h] [rbp-2A8h] BYREF
  _BYTE v42[56]; // [rsp+90h] [rbp-298h] BYREF
  const unsigned __int16 *v43; // [rsp+C8h] [rbp-260h] BYREF
  std::_Ref_count_base *v44; // [rsp+D0h] [rbp-258h]
  WCHAR pvData[264]; // [rsp+F0h] [rbp-238h] BYREF

  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1
    && GetSystemMetrics(0x2000) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
      1u,
      v4);
    CorrelationId = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                      (winrt::hstring *)&v32,
                      &c_bootSystemId);
    v33 = (RTL_SRWLOCK *)winrt::hstring::c_str(CorrelationId);
    CloudPCTelemetry::B2CSystemShuttingDown<unsigned short const *>((const WCHAR **)&v33);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v32);
    return;
  }
  v37 = 0LL;
  v33 = 0LL;
  v6 = (void **)tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,_GUID * &>(
                  &v32,
                  &v33);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::operator=(
    &v37,
    v6);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>(&v32);
  tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::watch_errors(
    &v37,
    (__int64)v42);
  *(_OWORD *)v41 = 0LL;
  winrt::hstring::hstring((winrt::hstring *)&v39, &::pvData);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v33, this + 7);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetSystemId(&v35, (__int64)a2);
  if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
  {
    v7 = (volatile signed __int32 **)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                                       (winrt::hstring *)&v32,
                                       (__int64 *)&v35);
    if ( &v39 != v7 )
    {
      v8 = *v7;
      *v7 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(&v39, (__int64)v8);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v32);
  }
  FactoryImplObj = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v32);
  v10 = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoveWindow(
          *FactoryImplObj,
          a2);
  if ( v32 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v32);
  if ( !v10 )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::operator->(
                  &v37,
                  (__int64 *)&v43)
             + 308) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)&v43);
LABEL_41:
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v35);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v33);
    if ( v41[0] )
    {
      if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
      {
        if ( !winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(v41[0])
          || (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(v41[0]) != 3 )
        {
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v38, this + 7);
          v30 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                              v41[0],
                              &v43);
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
            v30,
            &v33);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v43);
          std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::_Erase<winrt::hstring>(
            &this[9].Ptr,
            (__int64 *)&v33);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v33);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v38);
        }
        (*(void (__fastcall **)(PVOID, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, volatile signed __int32 **))(*(_QWORD *)this[5].Ptr + 32LL))(
          this[5].Ptr,
          v41,
          &v39);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
        if ( v41[1] )
          std::_Ref_count_base::_Decref(v41[1]);
        goto LABEL_52;
      }
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v38, this + 7);
      v31 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                          v41[0],
                          &v43);
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        v31,
        &v33);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v43);
      std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::_Erase<winrt::hstring>(
        &this[9].Ptr,
        (__int64 *)&v33);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v33);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v38);
    }
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v37);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
    if ( v41[1] )
      std::_Ref_count_base::_Decref(v41[1]);
    goto LABEL_52;
  }
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v32, &v35);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
    1u,
    v11);
  v12 = winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
          (__int64 **)&v32,
          &v34);
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v12);
  CloudPCTelemetry::ProviderWindowRemoved<unsigned __int64 const &,unsigned int>(a2, &NetworkConnectivityLevel);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
  v13 = winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
          (__int64 **)&v32,
          &v34);
  v14 = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
  if ( v14 )
  {
LABEL_39:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v32);
    goto LABEL_41;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::GetImpl'::`2'::impl,
    1u,
    v15);
  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
    BYTE1(this[31].Ptr) = 1;
  std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::find(
    &this[9],
    &v34,
    &v35);
  if ( v34 != this[10].Ptr )
  {
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v32) == 3 )
    {
      v16 = (_QWORD *)std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
                        &this[9],
                        &v35);
      v17 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **)std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                                                                                            &v43,
                                                                                            v16);
      v18 = *v17;
      *v17 = v41[0];
      v41[0] = v18;
      v19 = v17[1];
      v17[1] = v41[1];
      v41[1] = v19;
      if ( v44 )
        std::_Ref_count_base::_Decref(v44);
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        Ptr = this[5].Ptr;
        v21 = *(void (__fastcall **)(PVOID, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, volatile signed __int32 **))(*(_QWORD *)Ptr + 32LL);
        winrt::hstring::hstring((winrt::hstring *)&v34, &::pvData);
        v21(Ptr, v41, &v34);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
      }
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v22);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::ReportUsage(
          (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl,
          1u);
        NetworkConnectivityLevel = 0;
        v38 = winrt::hstring::c_str((winrt::hstring *)&v35);
        BootToCloudModeType = CloudPCHelpers::GetBootToCloudModeType();
        LODWORD(v34) = 1;
        CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,unsigned int,unsigned short (&)[260],unsigned short const *,bool &,enum CloudPCTelemetryCore::SourceOfDisconnect>(
          (int *)&v34,
          &BootToCloudModeType,
          (__int64)pvData,
          (__int64 *)&v38);
      }
    }
    else
    {
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl) )
        {
          v24 = (_QWORD *)std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
                            &this[9],
                            &v35);
          std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v43, v24);
          if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(v43) == 98 )
          {
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::operator->(
                          &v37,
                          (__int64 *)&v38)
                     + 309) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)&v38);
            tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v37);
            if ( v44 )
              std::_Ref_count_base::_Decref(v44);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v32);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v35);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v33);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
            if ( v41[1] )
              std::_Ref_count_base::_Decref(v41[1]);
            goto LABEL_52;
          }
          if ( v44 )
            std::_Ref_count_base::_Decref(v44);
        }
        CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v23);
        CloudPCTelemetryCore::W365Crash<unsigned short (&)[260]>(pvData);
      }
      else
      {
        LODWORD(v34) = 2;
        v38 = winrt::hstring::c_str((winrt::hstring *)&v35);
        v43 = winrt::hstring::c_str((winrt::hstring *)&v39);
        BootToCloudModeType = 0;
        NetworkConnectivityLevel = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode();
        CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,int,unsigned short const *,unsigned short const *,bool,enum CloudPCTelemetryCore::SourceOfDisconnect>(
          &NetworkConnectivityLevel,
          &BootToCloudModeType,
          (__int64 *)&v43,
          (__int64 *)&v38);
      }
      v25 = this[5].Ptr;
      v26 = *(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v25 + 40LL);
      v27 = std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
              &this[9],
              &v35);
      v26(v25, v27);
    }
    v28 = (unsigned __int8 *)std::wstring::wstring((__int64)&v43, (__int64 *)&v35);
    std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::_Erase<std::wstring>(
      v29,
      v28);
    std::wstring::_Tidy_deallocate(&v43);
    goto LABEL_39;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v32);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v35);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v33);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
  if ( v41[1] )
    std::_Ref_count_base::_Decref(v41[1]);
LABEL_52:
  tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)v42);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>(&v37);
}
