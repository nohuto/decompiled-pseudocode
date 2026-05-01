/*
 * XREFs of _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659884
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs___lambda_d6825c428197dee9c36f361ea1d02b0a___::Invoke @ 0x18065ABD0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Inte_ea_18065ABD0.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x18018E734 (tip_details_GetKernelBaseModuleHandle.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801909B8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1801CC6C4 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180358A84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063CDA8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EDBC (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EE64 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180642084 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_Switc.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x180644014 (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x18064C3D0 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x18064C4E8 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650570 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806505F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@detai.c)
 *     ??1?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180655354 (--1-$pair@$$CBUhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Shell@Inter.c)
 *     ??$?0Uhstring@winrt@@AEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@$0A@@?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@$$QEAUhstring@winrt@@AEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@1@@Z @ 0x180655B98 (--$-0Uhstring@winrt@@AEAV-$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Wi.c)
 *     ??$CPCDisconnectingStatus@AEAY09$$CBG@CloudPCTelemetryCore@@SAXAEAY09$$CBG@Z @ 0x1806563D4 (--$CPCDisconnectingStatus@AEAY09$$CBG@CloudPCTelemetryCore@@SAXAEAY09$$CBG@Z.c)
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x180656CD4 (--$emplace@U-$pair@$$CBUhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Sh.c)
 *     ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAY00$$CBG@winrt@@YA?A_P$$QEAUhstring@0@AEAY00$$CBG@Z @ 0x180656F5C (--$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAY0.c)
 *     ??$make@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@Uguid@6@AEAW4CloudPCState@3456@@winrt@@YA?A_P$$QEAUguid@0@AEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18065705C (--$make@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@Uguid@6.c)
 *     ??$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEAURemoteDesktopProviderInfo@3456@AEAUTransitionScreen@8CloudDesktop@3456@UTransitionScreenId@893456@W4CloudPCState@3456@_N@std@@YA?AV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@0@AEAURemoteDesktopProviderInfo@Shell@Internal@Windows@winrt@@AEAUTransitionScreen@7CloudDesktop@3456@$$QEAUTransitionScreenId@783456@$$QEAW4CloudPCState@3456@$$QEA_N@Z @ 0x1806573F0 (--$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEAURemote.c)
 *     ??0TransitionScreen@0CloudDesktop@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180658850 (--0TransitionScreen@0CloudDesktop@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180658A50 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_r.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658CA0 (--1-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658D28 (--1-$test_watcher@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@1@XZ @ 0x1806590B4 (--C-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C330 (-SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Inte.c)
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C5A8 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 *     ?SubsribeToWaitOnLocalPCRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C770 (-SubsribeToWaitOnLocalPCRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@.c)
 *     ?find@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x18065D6D4 (-find@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare@.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18065D784 (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18065DE30 (-start@-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@ti.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@2@XZ @ 0x18065DE8C (-watch_errors@-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@ti.c)
 *     ?IsDisconnecting@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18066FAFC (-IsDisconnecting@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x18066FC24 (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall lambda_d6825c428197dee9c36f361ea1d02b0a_::operator()(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v4; // r8
  _QWORD *v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 *CorrelationId; // rdx
  _QWORD *v11; // rdi
  __int64 *v12; // rax
  const struct winrt::hstring *v13; // rax
  volatile signed __int32 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r8
  int CloudPCMode; // edi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  _QWORD *v22; // rax
  char *v23; // rdi
  unsigned int NetworkConnectivityLevel; // r14d
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **v25; // rsi
  int v26; // edi
  __int64 v27; // r8
  __int64 v28; // rcx
  const char *v29; // r9
  struct IUnknown v30; // [rsp+30h] [rbp-E8h] BYREF
  char v31[8]; // [rsp+38h] [rbp-E0h] BYREF
  volatile signed __int32 *v32; // [rsp+40h] [rbp-D8h] BYREF
  void *v33; // [rsp+48h] [rbp-D0h] BYREF
  char *v34; // [rsp+50h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v35; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD *v36; // [rsp+60h] [rbp-B8h] BYREF
  char v37[16]; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v38[56]; // [rsp+78h] [rbp-A0h] BYREF
  std::_Ref_count_base *v39[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v40[6]; // [rsp+C0h] [rbp-58h] BYREF
  volatile signed __int32 *v41; // [rsp+F0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1, &v36);
  v5 = v36;
  if ( v36 )
  {
    v33 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
      1u,
      v4);
    if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
    {
      v6 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
             a3,
             &v34);
      tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
        (__int64)&v33,
        (__int64 *)&v30);
      winrt::hstring::operator std::basic_string_view<unsigned short>(v6, v39);
      std::wstring::assign((char *)(*(_QWORD *)v7 + 272LL), v39[0], (unsigned __int64)v39[1]);
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((void **)&v30.lpVtbl);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v34);
      LODWORD(v6) = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)a3);
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
                     (__int64)&v33,
                     (__int64 *)&v30)
                + 336) = (_DWORD)v6;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((void **)&v30.lpVtbl);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::GetImpl'::`2'::impl,
        1u,
        v8);
      v9 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
             a3,
             &v32);
      CorrelationId = (__int64 *)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                                   (winrt::hstring *)&v34,
                                   v9);
      v11 = (_QWORD *)std::wstring::wstring((__int64)v40, CorrelationId);
      v12 = tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
              (__int64)&v33,
              (__int64 *)&v30);
      std::wstring::operator=((_QWORD *)(*v12 + 352), v11);
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((void **)&v30.lpVtbl);
      std::wstring::_Tidy_deallocate(v40);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v34);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
      LOBYTE(v11) = *((_BYTE *)v5 + 248);
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
                    (__int64)&v33,
                    (__int64 *)&v30)
               + 349) = (_BYTE)v11;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((void **)&v30.lpVtbl);
      tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::start(
        &v33,
        v39);
    }
    tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::watch_errors(
      &v33,
      v38);
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)a3) == 99 )
    {
      v13 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                                             a3,
                                             &v32);
      winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::hstring,unsigned short const (&)[1]>(
        (unsigned __int64 *)&v34,
        v13,
        v14);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
      winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen::TransitionScreen(&v30);
      v31[0] = 0;
      LODWORD(v35) = 100;
      LODWORD(v32) = 0;
      std::make_shared<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo &,winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen &,winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId,enum winrt::Windows::Internal::Shell::CloudPCState,bool>(
        v39,
        (__int64)&v34,
        (__int64)&v30,
        (__int64)&v32,
        &v35,
        v31);
      wil::AcquireSRWLockExclusive(&v35, (RTL_SRWLOCK *)v5 + 7);
      v15 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
              (__int64 **)&v34,
              &v32);
      std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>(
        v40,
        v15,
        v39);
      std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::emplace<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>(
        (float *)v5 + 18,
        (__int64)v37,
        v40);
      std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::~pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>((__int64)v40);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v35);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent(
        v5,
        v39);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
        1u,
        v16);
      CloudPCMode = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode();
      if ( !CloudPCMode )
      {
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToWaitOnLocalPCRequestedEvent(
          v5,
          v39);
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent(
          v5,
          v39);
      }
      if ( CloudPCMode == 1 )
      {
        tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v40);
        if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v41 + 2)) )
        {
          v18 = v41;
          v32 = v41;
          if ( v41 )
            _InterlockedIncrement(v41 + 92);
          tip2::details::shared_data<1,0,0>::begin_update((__int64)(v18 + 2));
          std::wstring::operator=(
            (char *)v18 + 288,
            L"RemoteSessionWindowManager::RemoteSessionWindowManager, RemoteSessionInformation not found, possible that sh"
             "ellappruntime restarted");
          tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v32);
          v19 = v41;
          v32 = v41;
          if ( v41 )
            _InterlockedIncrement(v41 + 92);
          tip2::details::shared_data<1,0,0>::begin_update((__int64)(v19 + 2));
          *((_BYTE *)v19 + 276) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v32);
          tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v41 + 2));
          ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting;
          if ( `TestControlReporting'::`2'::s_pfnTestControlReporting
            || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
                ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
                (`TestControlReporting'::`2'::s_pfnTestControlReporting = (__int64)ProcAddress) != 0) )
          {
            ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
          }
        }
        tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v40);
      }
      if ( v39[1] )
        std::_Ref_count_base::_Decref(v39[1]);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
    }
    Microsoft::WRL::Wrappers::SRWLock::LockShared(&v35, (RTL_SRWLOCK *)v5 + 7);
    v22 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
            a3,
            &v30);
    std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::find(
      v5 + 9,
      &v34,
      v22);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v30);
    v23 = v34;
    if ( v34 == (char *)v5[10] )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
                    (__int64)&v33,
                    (__int64 *)&v30)
               + 344) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((void **)&v30.lpVtbl);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v33);
    }
    else
    {
      NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)a3);
      LODWORD(v32) = NetworkConnectivityLevel;
      v25 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **)(v23 + 24);
      v26 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(*((_QWORD *)v23 + 3));
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::operator->(
                     (__int64)&v33,
                     (__int64 *)&v34)
                + 340) = v26;
      tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((void **)&v34);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl,
        1u,
        v27);
      if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
      {
        if ( NetworkConnectivityLevel != 3 )
          winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsDisconnecting(*v25, 0);
        CloudPCTelemetryCore::CPCDisconnectingStatus<unsigned short const (&)[10]>(v28);
      }
      try
      {
        if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl)
          || (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(*v25) != 98 )
        {
          (*(void (__fastcall **)(_QWORD, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, _QWORD))(*(_QWORD *)v5[5] + 16LL))(
            v5[5],
            v25,
            NetworkConnectivityLevel);
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x95,
          (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
          v29);
        v5 = v36;
      }
      *(_OWORD *)v39 = 0LL;
      winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::guid,enum winrt::Windows::Internal::Shell::CloudPCState &>(
        &v30,
        (__int64)v39,
        (unsigned int *)&v32);
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
        (RTL_SRWLOCK *)v5 + 35,
        (__int64)v5,
        (__int64)&v30);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v33);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v35);
    tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v38);
    wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>,wil::err_returncode_policy>(&v33);
  }
  if ( v5 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v36);
}
