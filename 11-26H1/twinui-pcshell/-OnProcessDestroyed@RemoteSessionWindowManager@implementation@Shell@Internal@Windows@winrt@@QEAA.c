/*
 * XREFs of ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x18065B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1801CC6C4 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803528DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180358A84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x180640200 (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x1806406BC (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x18064C4E8 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x18064D6B4 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ??$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x180656634 (--$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$ProviderProcessDestroyedEventFired@AEBIPEBG@CloudPCTelemetry@@SAXAEBI$$QEAPEBG@Z @ 0x180656728 (--$ProviderProcessDestroyedEventFired@AEBIPEBG@CloudPCTelemetry@@SAXAEBI$$QEAPEBG@Z.c)
 *     ??$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x180656920 (--$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$_Erase@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUhstring@winrt@@@Z @ 0x180656988 (--$_Erase@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionI.c)
 *     ??$_Erase@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@AEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180656A30 (--$_Erase@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_traits.c)
 *     ?at@?$unordered_map@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@@std@@QEAAAEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@2@AEBUhstring@winrt@@@Z @ 0x18065CED4 (-at@-$unordered_map@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Shell.c)
 *     ?find@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x18065D6D4 (-find@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare@.c)
 *     ?Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x180660530 (-Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x18066FC24 (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::OnProcessDestroyed(
        RTL_SRWLOCK *this,
        const struct IInspectable *a2,
        unsigned int *a3)
{
  winrt::hstring *CorrelationId; // rax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // r8d
  RTL_SRWLOCK *v9; // rsi
  const unsigned __int16 *v10; // r8
  volatile signed __int32 *v11; // rbx
  PVOID Ptr; // rdi
  void (__fastcall *v13)(PVOID, volatile signed __int32 *, volatile signed __int32 **); // r14
  PVOID v14; // rbx
  void (__fastcall *v15)(PVOID, __int64); // rdi
  __int64 v16; // rax
  unsigned __int8 *v17; // rax
  __int64 v18; // rcx
  volatile signed __int32 *v19; // [rsp+38h] [rbp-290h] BYREF
  int v20; // [rsp+40h] [rbp-288h] BYREF
  volatile signed __int32 *v21; // [rsp+48h] [rbp-280h] BYREF
  RTL_SRWLOCK *v22; // [rsp+50h] [rbp-278h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-270h] BYREF
  int BootToCloudModeType; // [rsp+60h] [rbp-268h] BYREF
  const unsigned __int16 *v25; // [rsp+68h] [rbp-260h] BYREF
  __int64 v26; // [rsp+70h] [rbp-258h] BYREF
  __int128 v27; // [rsp+78h] [rbp-250h]
  WCHAR pvData[264]; // [rsp+90h] [rbp-238h] BYREF

  CorrelationId = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                    (winrt::hstring *)&v23,
                    &c_bootSystemId);
  v22 = (RTL_SRWLOCK *)winrt::hstring::c_str(CorrelationId);
  CloudPCTelemetry::ProviderProcessDestroyedEventFired<unsigned int const &,unsigned short const *>(
    (int *)a3,
    (__int64 *)&v22);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
  v20 = 0;
  v6 = *(_QWORD *)winrt::Windows::Internal::Shell::ProcessTracker::Current(&v22);
  LODWORD(v26) = 0;
  v27 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 64LL))(v6, &v20);
  winrt::check_hresult((int *)&v19, v7, (__int64)&v26);
  LOBYTE(a3) = v20 == 0;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  if ( (_BYTE)a3 )
  {
    wil::AcquireSRWLockExclusive(&v22, this + 7);
    winrt::hstring::hstring((winrt::hstring *)&v19, L"SystemId_boot");
    winrt::hstring::hstring((winrt::hstring *)&v21, (const struct winrt::hstring *)&v19, v8);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
    v9 = this + 9;
    std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::find(
      &this[9],
      &v19,
      &v21);
    winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v23, &v21);
    if ( BYTE1(this[31].Ptr) )
      goto LABEL_10;
    v11 = v19;
    if ( v19 == this[10].Ptr )
      goto LABEL_10;
    CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v10);
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v23) == 3 )
    {
      Ptr = this[5].Ptr;
      v13 = *(void (__fastcall **)(PVOID, volatile signed __int32 *, volatile signed __int32 **))(*(_QWORD *)Ptr + 32LL);
      winrt::hstring::hstring((winrt::hstring *)&v19, &::pvData);
      v13(Ptr, v11 + 6, &v19);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl,
        1u);
      v20 = 0;
      v25 = winrt::hstring::c_str((winrt::hstring *)&v21);
      BootToCloudModeType = CloudPCHelpers::GetBootToCloudModeType();
      LODWORD(v19) = 1;
      CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,unsigned int,unsigned short (&)[260],unsigned short const *,bool,enum CloudPCTelemetryCore::SourceOfDisconnect>(
        (int *)&v19,
        &BootToCloudModeType,
        (__int64)pvData,
        (__int64 *)&v25);
    }
    else
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl)
        && (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(*((_QWORD *)v11 + 3)) == 98 )
      {
        goto LABEL_10;
      }
      CloudPCTelemetryCore::W365Crash<unsigned short (&)[260]>(pvData);
      v14 = this[5].Ptr;
      v15 = *(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v14 + 40LL);
      v16 = std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
              v9,
              &v21);
      v15(v14, v16);
    }
    v17 = (unsigned __int8 *)std::wstring::wstring((__int64)&v26, (__int64 *)&v21);
    std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::_Erase<std::wstring>(
      v18,
      v17);
    std::wstring::_Tidy_deallocate(&v26);
    std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::_Erase<winrt::hstring>(
      v9,
      (__int64 *)&v21);
LABEL_10:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v22);
  }
}
