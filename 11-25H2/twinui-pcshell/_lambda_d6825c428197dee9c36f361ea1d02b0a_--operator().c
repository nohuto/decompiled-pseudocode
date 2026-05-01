/*
 * XREFs of _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180633B38
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs___lambda_d6825c428197dee9c36f361ea1d02b0a___::Invoke @ 0x180634EF0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Inte_ea_180634EF0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1800642C8 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180065104 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x1801964A0 (tip_details_GetKernelBaseModuleHandle.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180198578 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180352AB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180616ED8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618F30 (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618FD8 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18061C6B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_Switc.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x18061E57C (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x180626730 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x180626848 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062AB60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062ABE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@detai.c)
 *     ??1?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18062F800 (--1-$pair@$$CBUhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Shell@Inter.c)
 *     ??$?0Uhstring@winrt@@AEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@$0A@@?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@$$QEAUhstring@winrt@@AEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@1@@Z @ 0x180630044 (--$-0Uhstring@winrt@@AEAV-$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Wi.c)
 *     ??$CPCDisconnectingStatus@AEAY09$$CBG@CloudPCTelemetryCore@@SAXAEAY09$$CBG@Z @ 0x1806308DC (--$CPCDisconnectingStatus@AEAY09$$CBG@CloudPCTelemetryCore@@SAXAEAY09$$CBG@Z.c)
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x1806310B4 (--$emplace@U-$pair@$$CBUhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Sh.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1806312D8 (--$find@X@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implem.c)
 *     ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAY00$$CBG@winrt@@YA?A_P$$QEAUhstring@0@AEAY00$$CBG@Z @ 0x18063137C (--$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAY0.c)
 *     ??$make@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@Uguid@6@AEAW4CloudPCState@3456@@winrt@@YA?A_P$$QEAUguid@0@AEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18063147C (--$make@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@Uguid@6.c)
 *     ??$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEAURemoteDesktopProviderInfo@3456@AEAUTransitionScreen@8CloudDesktop@3456@UTransitionScreenId@893456@W4CloudPCState@3456@_N@std@@YA?AV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@0@AEAURemoteDesktopProviderInfo@Shell@Internal@Windows@winrt@@AEAUTransitionScreen@7CloudDesktop@3456@$$QEAUTransitionScreenId@783456@$$QEAW4CloudPCState@3456@$$QEA_N@Z @ 0x1806316DC (--$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEAURemote.c)
 *     ??0TransitionScreen@0CloudDesktop@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180632C40 (--0TransitionScreen@0CloudDesktop@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180632E08 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_r.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180633058 (--1-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806330E0 (--1-$test_watcher@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@1@XZ @ 0x180633450 (--C-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1806366B0 (-SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Inte.c)
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180636984 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 *     ?SubsribeToWaitOnLocalPCRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180636BCC (-SubsribeToWaitOnLocalPCRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180637C14 (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18063815C (-start@-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@ti.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@2@XZ @ 0x1806381B8 (-watch_errors@-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@ti.c)
 *     ?IsDisconnecting@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180649B5C (-IsDisconnecting@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x180649C84 (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall lambda_d6825c428197dee9c36f361ea1d02b0a_::operator()(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rax
  __int64 *CorrelationId; // rdx
  _QWORD *v14; // rdi
  __int64 *v15; // rax
  const struct winrt::hstring *v16; // rax
  volatile signed __int32 *v17; // r8
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int CloudPCMode; // edi
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rdi
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  __int64 *v26; // rax
  volatile signed __int32 *v27; // rdi
  unsigned int NetworkConnectivityLevel; // r14d
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **v29; // rsi
  int v30; // edi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  const char *v34; // r9
  char v35[8]; // [rsp+30h] [rbp-1A8h] BYREF
  void *v36; // [rsp+38h] [rbp-1A0h] BYREF
  unsigned int v37; // [rsp+40h] [rbp-198h] BYREF
  _QWORD *v38; // [rsp+48h] [rbp-190h] BYREF
  void *v39; // [rsp+50h] [rbp-188h] BYREF
  __int64 v40; // [rsp+58h] [rbp-180h] BYREF
  __int64 *v41; // [rsp+60h] [rbp-178h] BYREF
  void *v42; // [rsp+68h] [rbp-170h] BYREF
  volatile signed __int32 *v43; // [rsp+70h] [rbp-168h] BYREF
  RTL_SRWLOCK *v44; // [rsp+78h] [rbp-160h] BYREF
  struct IUnknown v45; // [rsp+80h] [rbp-158h] BYREF
  __int64 v46; // [rsp+88h] [rbp-150h] BYREF
  std::_Ref_count_base *v47; // [rsp+90h] [rbp-148h]
  void *v48; // [rsp+98h] [rbp-140h] BYREF
  volatile signed __int32 *v49; // [rsp+A0h] [rbp-138h] BYREF
  void *v50; // [rsp+A8h] [rbp-130h] BYREF
  void *v51; // [rsp+B0h] [rbp-128h] BYREF
  volatile signed __int32 *v52; // [rsp+B8h] [rbp-120h] BYREF
  volatile signed __int32 *v53; // [rsp+C0h] [rbp-118h] BYREF
  volatile signed __int32 *v54; // [rsp+C8h] [rbp-110h] BYREF
  volatile signed __int32 *v55; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v56[3]; // [rsp+D8h] [rbp-100h] BYREF
  _BYTE v57[48]; // [rsp+F0h] [rbp-E8h] BYREF
  volatile signed __int32 *v58; // [rsp+120h] [rbp-B8h]
  _BYTE v59[16]; // [rsp+128h] [rbp-B0h] BYREF
  _BYTE v60[16]; // [rsp+138h] [rbp-A0h] BYREF
  _BYTE v61[56]; // [rsp+148h] [rbp-90h] BYREF
  void *Src[2]; // [rsp+180h] [rbp-58h] BYREF
  void *v63[4]; // [rsp+190h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  result = winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1, &v38);
  v7 = v38;
  if ( v38 )
  {
    v36 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
      1u,
      v5,
      v6);
    if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
    {
      v8 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
             a3,
             &v49);
      tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
        (__int64)&v36,
        (__int64 *)&v48);
      winrt::hstring::operator std::basic_string_view<unsigned short>(v8, Src);
      std::wstring::assign((void **)(v9 + 264), Src[0], (unsigned __int64)Src[1]);
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(&v48);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v49);
      LODWORD(v8) = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)a3);
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
                     (__int64)&v36,
                     (__int64 *)&v50)
                + 328) = (_DWORD)v8;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(&v50);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::GetImpl'::`2'::impl,
        1u,
        v10,
        v11);
      v12 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
              a3,
              &v53);
      CorrelationId = (__int64 *)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                                   (winrt::hstring *)&v52,
                                   v12);
      v14 = std::wstring::wstring(v63, CorrelationId);
      v15 = tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
              (__int64)&v36,
              (__int64 *)&v51);
      std::wstring::operator=(*v15 + 344, (__int64)v14);
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(&v51);
      std::wstring::_Tidy_deallocate(v63);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v52);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v53);
      LOBYTE(v14) = *((_BYTE *)v7 + 248);
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
                    (__int64)&v36,
                    (__int64 *)&v42)
               + 341) = (_BYTE)v14;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(&v42);
      tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::start(
        &v36,
        v59);
    }
    tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::watch_errors(
      &v36,
      v61);
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)a3) == 99 )
    {
      v16 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                                             a3,
                                             &v39);
      winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::hstring,unsigned short const (&)[1]>(
        (unsigned __int64 *)&v41,
        v16,
        v17);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v39);
      winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen::TransitionScreen(&v45);
      v35[0] = 0;
      LODWORD(v40) = 100;
      v37 = 0;
      std::make_shared<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo &,winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen &,winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId,enum winrt::Windows::Internal::Shell::CloudPCState,bool>(
        &v46,
        (__int64)&v41,
        (__int64)&v45,
        (__int64)&v37,
        &v40,
        v35);
      wil::AcquireSRWLockExclusive(&v44, (RTL_SRWLOCK *)v7 + 7);
      v18 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
              &v41,
              &v43);
      std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>(
        v56,
        v18,
        &v46);
      std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::emplace<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>(
        (float *)v7 + 18,
        (__int64)v60,
        v56);
      std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::~pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>((__int64)v56);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v44);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent(
        v7,
        &v46);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
        1u,
        v19,
        v20);
      CloudPCMode = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode();
      if ( !CloudPCMode )
      {
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToWaitOnLocalPCRequestedEvent(
          v7,
          &v46);
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent(
          v7,
          &v46);
      }
      if ( CloudPCMode == 1 )
      {
        tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v57);
        if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v58 + 2)) )
        {
          v22 = v58;
          v54 = v58;
          if ( v58 )
          {
            _InterlockedIncrement(v58 + 90);
            v7 = v38;
          }
          tip2::details::shared_data<1,0,0>::begin_update((__int64)(v22 + 2));
          std::wstring::operator=(
            (void **)v22 + 35,
            L"RemoteSessionWindowManager::RemoteSessionWindowManager, RemoteSessionInformation not found, possible that sh"
             "ellappruntime restarted");
          tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v54);
          v23 = v58;
          v55 = v58;
          if ( v58 )
          {
            _InterlockedIncrement(v58 + 90);
            v7 = v38;
          }
          tip2::details::shared_data<1,0,0>::begin_update((__int64)(v23 + 2));
          *((_BYTE *)v23 + 268) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v55);
          tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v58 + 2));
          ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting;
          if ( `TestControlReporting'::`2'::s_pfnTestControlReporting
            || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
                ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
                (`TestControlReporting'::`2'::s_pfnTestControlReporting = (__int64)ProcAddress) != 0) )
          {
            ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
          }
        }
        tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v57);
      }
      if ( v47 )
        std::_Ref_count_base::_Decref(v47);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v45);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v41);
    }
    Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v42, (RTL_SRWLOCK *)v7 + 7);
    v26 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
            a3,
            &v44);
    std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::find<void>(
      v7 + 9,
      &v43,
      v26);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v44);
    v27 = v43;
    if ( v43 == (volatile signed __int32 *)v7[10] )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
                    (__int64)&v36,
                    (__int64 *)&v39)
               + 336) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(&v39);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v36);
    }
    else
    {
      NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)a3);
      v37 = NetworkConnectivityLevel;
      v29 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **)(v27 + 6);
      v30 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(*((_QWORD *)v27 + 3));
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
                     (__int64)&v36,
                     (__int64 *)&v39)
                + 332) = v30;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(&v39);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl,
        1u,
        v31,
        v32);
      if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
      {
        if ( NetworkConnectivityLevel != 3 )
          winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsDisconnecting(*v29, 0);
        CloudPCTelemetryCore::CPCDisconnectingStatus<unsigned short const (&)[10]>(v33);
      }
      try
      {
        if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl)
          || (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(*v29) != 98 )
        {
          (*(void (__fastcall **)(_QWORD, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, _QWORD))(*(_QWORD *)v7[5] + 16LL))(
            v7[5],
            v29,
            NetworkConnectivityLevel);
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x95,
          (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
          v34);
        v7 = v38;
      }
      *(_OWORD *)Src = 0LL;
      winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::guid,enum winrt::Windows::Internal::Shell::CloudPCState &>(
        &v40,
        (__int64)Src,
        &v37);
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
        (RTL_SRWLOCK *)v7 + 35,
        (__int64)v7,
        (__int64)&v40);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v36);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v40);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v42);
    tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v61);
    result = wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>,wil::err_returncode_policy>(&v36);
  }
  if ( v7 )
    return winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v38);
  return result;
}
