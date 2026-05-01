/*
 * XREFs of ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180629EF8
 * Callers:
 *     ?RegisterRemoteDesktopProcess@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x180629EC0 (-RegisterRemoteDesktopProcess@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Inte.c)
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXIAEBUUri@Foundation@56@@Z @ 0x18062A3C0 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x18062B078 (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x1800ABDCC (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802975F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x18061E57C (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ??$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z @ 0x18061E928 (--$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z.c)
 *     ??$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@AEAI_N@winrt@@YA?A_PAEAUhstring@0@AEAI$$QEA_N@Z @ 0x180620E08 (--$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@.c)
 *     ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U76@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEAIAEAUhstring@winrt@@$$QEAU23@0AEA_N33333@Z @ 0x1806217B4 (--$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U.c)
 *     ??1?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1806243FC (--1-$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U-$default_delete@UL.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@@Z @ 0x180626768 (-GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBIAEBUhstring@param@3@@Z @ 0x1806282C4 (-Insert@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@IUhstring@winrt@@@Collections@Foun.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062AACC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x18062B298 (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x18062B2F8 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@QEAA_NXZ @ 0x18062D7D4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@.c)
 *     ?GetProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@I@Z @ 0x18063DC98 (-GetProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18063E414 (-SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180641244 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 *     ?IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4LocalCapabilities@3456@@Z @ 0x1806417E8 (-IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4Loc.c)
 *     ?CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180641B0C (-CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     ?IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x180641B34 (-IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4L.c)
 *     ?RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180641BB0 (-RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@X.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        unsigned int a2,
        const struct winrt::Windows::Foundation::Uri *a3,
        char a4)
{
  __int64 v8; // rcx
  int v9; // eax
  char v10; // bl
  struct winrt::hstring *v11; // rbx
  volatile signed __int32 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rsi
  winrt::hstring *CorrelationId; // rax
  _QWORD *v17; // rax
  winrt::hstring *v18; // rax
  int v19; // eax
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v20; // rbx
  volatile signed __int32 **v21; // rax
  volatile signed __int32 *v22; // rdx
  const struct winrt::hstring *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  char v26; // [rsp+60h] [rbp-29h] BYREF
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v27; // [rsp+68h] [rbp-21h] BYREF
  struct winrt::hstring *v28; // [rsp+70h] [rbp-19h] BYREF
  const unsigned __int16 *v29; // [rsp+78h] [rbp-11h] BYREF
  RTL_SRWLOCK *v30; // [rsp+80h] [rbp-9h] BYREF
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v31; // [rsp+88h] [rbp-1h] BYREF
  std::_Ref_count_base *v32[2]; // [rsp+90h] [rbp+7h]
  __int64 v33[7]; // [rsp+A8h] [rbp+1Fh] BYREF
  volatile signed __int32 *v34; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v35; // [rsp+F8h] [rbp+6Fh] BYREF

  v35 = a2;
  winrt::hstring::hstring((winrt::hstring *)&v27, (const struct winrt::hstring *)&c_hostSystemId);
  winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri(&v28, a3);
  v26 = 0;
  wil::AcquireSRWLockExclusive(&v30, (RTL_SRWLOCK *)this + 16);
  LOBYTE(v34) = 0;
  v8 = *((_QWORD *)this + 32);
  LODWORD(v31) = 0;
  *(_OWORD *)v32 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, volatile signed __int32 **))(*(_QWORD *)v8 + 64LL))(v8, a2, &v34);
  winrt::check_hresult((int *)&v29, v9, (__int64)&v31);
  v10 = 0;
  if ( (_BYTE)v34 )
  {
LABEL_22:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v30);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession(this, 1);
    if ( v10 && !*((_DWORD *)this + 12) )
    {
      winrt::make<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::hstring &,unsigned int &,bool>(
        &v34,
        (const struct winrt::hstring *)&v27,
        &v35,
        (const bool *)&v26);
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
        (RTL_SRWLOCK *)this + 34,
        (__int64)this,
        (__int64)&v34);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
    }
    goto LABEL_25;
  }
  v11 = v28;
  if ( v28 )
  {
    winrt::hstring::hstring((winrt::hstring *)&v34, v28);
    v12 = v34;
    v34 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach(&v27, (__int64)v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
    *((_DWORD *)this + 12) = *((_DWORD *)v11 + 4);
    winrt::hstring::hstring((winrt::hstring *)&v34, (struct winrt::hstring *)((char *)v11 + 8));
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      this,
      (const struct winrt::hstring *)&v27,
      (const struct winrt::hstring *)&v34);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
    *((_BYTE *)this + 264) = *((_BYTE *)v11 + 24);
    LOBYTE(v13) = 3;
    LOBYTE(v14) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
      v14,
      v13);
    LODWORD(v34) = 1;
    *((_BYTE *)this + 265) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v11,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    LODWORD(v34) = 2;
    *((_BYTE *)this + 266) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v11,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    LODWORD(v34) = 4;
    *((_BYTE *)this + 267) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v11,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    LODWORD(v34) = 3;
    *((_BYTE *)this + 268) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v11,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::GetImpl'::`2'::impl) )
    {
      LODWORD(v34) = 5;
      *((_BYTE *)this + 269) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                                 v11,
                                 (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    }
    if ( a4 )
      goto LABEL_21;
    goto LABEL_6;
  }
  if ( !a4 )
  {
LABEL_6:
    v15 = *((_QWORD *)this + 4);
    CorrelationId = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
                      (RTL_SRWLOCK *)this,
                      (winrt::hstring *)&v34,
                      (__int64 *)&v27);
    v17 = std::make_shared<winrt::Windows::Internal::Shell::implementation::HostProcessData,unsigned int &,winrt::hstring &,winrt::hstring,unsigned int &,bool &,bool &,bool &,bool &,bool &,bool &>(
            v33,
            &v35,
            (const struct winrt::hstring *)&v27,
            CorrelationId,
            (unsigned int *)this + 12,
            (bool *)this + 264,
            (bool *)this + 265,
            (bool *)this + 266,
            (bool *)this + 267,
            (bool *)this + 268,
            (bool *)this + 269);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveProcessData(v15, v17);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
      1u,
      3u);
    v29 = winrt::hstring::c_str((winrt::hstring *)&v27);
    v18 = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
            (RTL_SRWLOCK *)this,
            (winrt::hstring *)&v31,
            (__int64 *)&v27);
    v33[0] = (__int64)winrt::hstring::c_str(v18);
    if ( v11 )
      v19 = *((_DWORD *)v11 + 5);
    else
      v19 = 0;
    LODWORD(v34) = v19;
    CloudPCTelemetryCore::RemoteDesktopProcessRegistered<unsigned int &,unsigned int,unsigned short const *,unsigned short const *>(
      (int *)this + 12,
      (int *)&v34,
      v33,
      (__int64 *)&v29);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v31);
LABEL_21:
    v31 = v27;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,unsigned int,winrt::hstring>::Insert(
      (__int64 **)this + 32,
      &v35,
      (__int64 *)&v31);
    v26 = 1;
    v10 = 1;
    goto LABEL_22;
  }
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetProcessData(
    *((_QWORD *)this + 4),
    &v31,
    a2);
  v20 = v31;
  if ( v31 )
  {
    v21 = (volatile signed __int32 **)winrt::Windows::Internal::Shell::implementation::HostProcessData::RemoteDesktopId(
                                        v31,
                                        &v34);
    if ( &v27 != (winrt::Windows::Internal::Shell::implementation::HostProcessData **)v21 )
    {
      v22 = *v21;
      *v21 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(&v27, (__int64)v22);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
    *((_DWORD *)this + 12) = *((_DWORD *)v20 + 6);
    v23 = (const struct winrt::hstring *)winrt::Windows::Internal::Shell::implementation::HostProcessData::CorrelationId(
                                           v20,
                                           &v34);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      this,
      (const struct winrt::hstring *)&v27,
      v23);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
    *((_BYTE *)this + 264) = *((_BYTE *)v20 + 28);
    LOBYTE(v24) = 3;
    LOBYTE(v25) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
      v25,
      v24);
    LODWORD(v34) = 1;
    *((_BYTE *)this + 265) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v20,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    LODWORD(v34) = 2;
    *((_BYTE *)this + 266) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v20,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    LODWORD(v34) = 4;
    *((_BYTE *)this + 267) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v20,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    LODWORD(v34) = 3;
    *((_BYTE *)this + 268) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v20,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::GetImpl'::`2'::impl) )
    {
      LODWORD(v34) = 5;
      *((_BYTE *)this + 269) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                                 v20,
                                 (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v34);
    }
    if ( v32[0] )
      std::_Ref_count_base::_Decref(v32[0]);
    goto LABEL_21;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( v32[0] )
    std::_Ref_count_base::_Decref(v32[0]);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v30);
LABEL_25:
  std::unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>((volatile signed __int32 ***)&v28);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v27);
}
