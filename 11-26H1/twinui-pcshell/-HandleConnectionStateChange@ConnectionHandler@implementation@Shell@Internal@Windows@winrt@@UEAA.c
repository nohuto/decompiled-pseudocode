/*
 * XREFs of ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180671ED0
 * Callers:
 *     ?HandleConnectionStateChange@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066A4E0 (-HandleConnectionStateChange@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?HandleConnectionStateChange@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066E3B0 (-HandleConnectionStateChange@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180106D00 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@W4CloudPCState@Shell@Internal@Windows@winrt@@@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@AEBW4CloudPCState@Shell@Internal@Windows@winrt@@_K@Z @ 0x18013340C (--$_Find_last@W4CloudPCState@Shell@Internal@Windows@winrt@@@-$_Hash@V-$_Umap_traits@W4CloudPCSta.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803528DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x180640200 (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x1806406BC (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x18064C3D0 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x18064C4E8 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180658770 (--0-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658CA0 (--1-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658D28 (--1-$test_watcher@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@ti.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18066C640 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FBB4 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x18066FC24 (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     ??0hresult_illegal_state_change@winrt@@QEAA@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z @ 0x1806718FC (--0hresult_illegal_state_change@winrt@@QEAA@AEBUhstring@param@1@AEBUslim_source_location@impl@1@.c)
 *     ?FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@Shell@Internal@Windows@3@30@Z @ 0x180671D24 (-FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::ConnectionHandler::HandleConnectionStateChange(
        __int64 a1,
        __int64 **a2,
        int a3)
{
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 appended; // rax
  __int64 v8; // rdi
  void (__fastcall ***v9)(_QWORD, __int64 **, _QWORD); // rdi
  void (__fastcall *v10)(_QWORD, __int64 **, _QWORD); // rbx
  unsigned int v11; // eax
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // rax
  const unsigned __int16 *v14; // rax
  winrt::hstring *CorrelationId; // rax
  const unsigned __int16 *v16; // rbx
  __int64 *v17; // rdi
  int v18; // ebx
  const struct winrt::impl::slim_source_location *v19; // rbx
  unsigned __int8 v20[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int BootToCloudModeType; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v24; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v25; // [rsp+50h] [rbp-B0h] BYREF
  RTL_SRWLOCK *pExceptionObject[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[48]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v30[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v31[32]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 pvData[264]; // [rsp+F0h] [rbp-10h] BYREF

  *(_DWORD *)v20 = a3;
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>>((__int64)v28);
  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State((RTL_SRWLOCK *)*a2) == *(_DWORD *)v20 )
  {
    tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(
      (__int64 *)&v24,
      &v29);
    v24[345] = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((void **)&v24);
    tip2::details::shared_data<1,0,0>::complete_without_lock(v29 + 8);
  }
  else
  {
    v5 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(*a2, &v27);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)v5,
      &v24);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
    appended = std::_Fnv1a_append_bytes(v6, v20, 4uLL);
    v8 = std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>>,0>>::_Find_last<enum winrt::Windows::Internal::Shell::CloudPCState>(
           (_QWORD *)(a1 + 8),
           pExceptionObject,
           v20,
           appended)[1];
    if ( !v8 )
      v8 = *(_QWORD *)(a1 + 16);
    if ( v8 == *(_QWORD *)(a1 + 16) )
    {
      v19 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v31);
      winrt::param::hstring::hstring(
        (winrt::param::hstring *)v30,
        L"Unknown state change encountered in ConnectionHandler.");
      winrt::hresult_illegal_state_change::hresult_illegal_state_change(
        (winrt::hresult_illegal_state_change *)pExceptionObject,
        (const struct winrt::param::hstring *)v30,
        v19);
      throw (winrt::hresult_illegal_state_change *)pExceptionObject;
    }
    v9 = *(void (__fastcall ****)(_QWORD, __int64 **, _QWORD))(v8 + 24);
    v10 = **v9;
    v11 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State((RTL_SRWLOCK *)*a2);
    v10(v9, a2, v11);
    if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
    {
      CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v12);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl,
        1u);
      BootToCloudModeType = CloudPCHelpers::GetBootToCloudModeType();
      v22 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State((RTL_SRWLOCK *)*a2);
      v13 = winrt::hstring::c_str((winrt::hstring *)&v24);
      winrt::hstring::hstring((winrt::hstring *)&v25, v13);
      v23 = 1;
      CloudPCTelemetryCore::FireCPCStateChangedEvent(
        &v23,
        pvData,
        (const struct winrt::hstring *)&v25,
        (const enum winrt::Windows::Internal::Shell::CloudPCState *)&v22,
        (const enum winrt::Windows::Internal::Shell::CloudPCState *)v20,
        &BootToCloudModeType);
    }
    else
    {
      v23 = 0;
      v22 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State((RTL_SRWLOCK *)*a2);
      v14 = winrt::hstring::c_str((winrt::hstring *)&v24);
      winrt::hstring::hstring((winrt::hstring *)&v25, v14);
      CorrelationId = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                        (winrt::hstring *)pExceptionObject,
                        (__int64 *)&v24);
      v16 = winrt::hstring::c_str(CorrelationId);
      BootToCloudModeType = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode();
      CloudPCTelemetryCore::FireCPCStateChangedEvent(
        &BootToCloudModeType,
        v16,
        (const struct winrt::hstring *)&v25,
        (const enum winrt::Windows::Internal::Shell::CloudPCState *)&v22,
        (const enum winrt::Windows::Internal::Shell::CloudPCState *)v20,
        &v23);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)pExceptionObject);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
    v17 = *a2;
    v18 = *(_DWORD *)v20;
    wil::AcquireSRWLockExclusive(pExceptionObject, (RTL_SRWLOCK *)*a2 + 2);
    *((_DWORD *)v17 + 8) = v18;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(pExceptionObject);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v28);
}
