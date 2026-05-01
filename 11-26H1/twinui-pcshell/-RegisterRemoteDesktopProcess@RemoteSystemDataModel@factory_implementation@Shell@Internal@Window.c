/*
 * XREFs of ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x18064F9B8
 * Callers:
 *     ?RegisterRemoteDesktopProcess@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x18064F980 (-RegisterRemoteDesktopProcess@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Inte.c)
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXIAEBUUri@Foundation@56@@Z @ 0x18064FE60 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180650A4C (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028E950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x180644014 (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ??$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z @ 0x1806443D0 (--$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z.c)
 *     ??$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@AEAI_N@winrt@@YA?A_PAEAUhstring@0@AEAI$$QEA_N@Z @ 0x180646814 (--$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@.c)
 *     ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U76@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEAIAEAUhstring@winrt@@$$QEAU23@0AEA_N33333@Z @ 0x180647290 (--$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U.c)
 *     ??1?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18064A0E4 (--1-$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U-$default_delete@UL.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@@Z @ 0x18064C408 (-GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBIAEBUhstring@param@3@@Z @ 0x18064DD94 (-Insert@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@IUhstring@winrt@@@Collections@Foun.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806504E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x180650CA0 (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180650D00 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 *     ?GetProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@I@Z @ 0x1806637B8 (-GetProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180663F80 (-SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180666D54 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 *     ?IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4LocalCapabilities@3456@@Z @ 0x1806672F8 (-IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4Loc.c)
 *     ?CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x18066760C (-CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     ?IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x180667634 (-IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4L.c)
 *     ?RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180667684 (-RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@X.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        unsigned int a2,
        const struct winrt::Windows::Foundation::Uri *a3,
        char a4)
{
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // r8d
  char v10; // bl
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v11; // rbx
  volatile signed __int32 *v12; // rdx
  unsigned int *v13; // r14
  unsigned int v14; // r8d
  __int64 v15; // rdx
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v16; // rcx
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v17; // rcx
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v18; // rcx
  bool *v19; // r13
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v20; // rcx
  unsigned int *v21; // r15
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v22; // rdi
  volatile signed __int32 **v23; // rax
  volatile signed __int32 *v24; // rdx
  const struct winrt::hstring *v25; // rax
  __int64 v26; // rdx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v27; // rcx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v28; // rcx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v29; // rcx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v30; // rcx
  __int64 v31; // rdi
  winrt::hstring *CorrelationId; // rax
  _QWORD *v33; // rax
  winrt::hstring *v34; // rax
  int v35; // eax
  char v36; // [rsp+60h] [rbp-39h] BYREF
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v37; // [rsp+68h] [rbp-31h] BYREF
  winrt::Windows::Internal::Shell::implementation::LaunchUriData *v38; // [rsp+70h] [rbp-29h] BYREF
  const unsigned __int16 *v39; // [rsp+78h] [rbp-21h] BYREF
  RTL_SRWLOCK *v40; // [rsp+80h] [rbp-19h] BYREF
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v41; // [rsp+88h] [rbp-11h] BYREF
  std::_Ref_count_base *v42[2]; // [rsp+90h] [rbp-9h]
  __int64 v43[9]; // [rsp+A8h] [rbp+Fh] BYREF
  volatile signed __int32 *v44; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v45; // [rsp+108h] [rbp+6Fh] BYREF

  v45 = a2;
  winrt::hstring::hstring((winrt::hstring *)&v37, (const struct winrt::hstring *)&c_hostSystemId, (unsigned int)a3);
  winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri(&v38, a3);
  v36 = 0;
  wil::AcquireSRWLockExclusive(&v40, (RTL_SRWLOCK *)this + 16);
  LOBYTE(v44) = 0;
  v7 = *((_QWORD *)this + 32);
  LODWORD(v41) = 0;
  *(_OWORD *)v42 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, volatile signed __int32 **))(*(_QWORD *)v7 + 64LL))(v7, v45, &v44);
  winrt::check_hresult((int *)&v39, v8, (__int64)&v41);
  v10 = 0;
  if ( (_BYTE)v44 )
  {
    v13 = (unsigned int *)((char *)this + 48);
    goto LABEL_22;
  }
  v11 = v38;
  if ( v38 )
  {
    winrt::hstring::hstring((winrt::hstring *)&v44, v38, v9);
    v12 = v44;
    v44 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach(&v37, (__int64)v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v44);
    v13 = (unsigned int *)((char *)this + 48);
    *((_DWORD *)this + 12) = *((_DWORD *)v11 + 4);
    winrt::hstring::hstring(
      (winrt::hstring *)&v44,
      (winrt::Windows::Internal::Shell::implementation::LaunchUriData *)((char *)v11 + 8),
      v14);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      this,
      (const struct winrt::hstring *)&v37,
      (const struct winrt::hstring *)&v44);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v44);
    *((_BYTE *)this + 264) = *((_BYTE *)v11 + 24);
    LOBYTE(v15) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
      v15);
    LODWORD(v44) = 1;
    *((_BYTE *)this + 265) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v11,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    LODWORD(v44) = 2;
    *((_BYTE *)this + 266) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v16,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    LODWORD(v44) = 4;
    *((_BYTE *)this + 267) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v17,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    LODWORD(v44) = 3;
    *((_BYTE *)this + 268) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v18,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    LODWORD(v44) = 5;
    v19 = (bool *)this + 269;
    *((_BYTE *)this + 269) = winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
                               v20,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    goto LABEL_4;
  }
  if ( !a4 )
  {
    v21 = (unsigned int *)((char *)this + 48);
    v19 = (bool *)this + 269;
LABEL_16:
    v13 = v21;
    v31 = *((_QWORD *)this + 4);
    CorrelationId = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
                      (RTL_SRWLOCK *)this,
                      (winrt::hstring *)&v44,
                      (__int64 *)&v37);
    v33 = std::make_shared<winrt::Windows::Internal::Shell::implementation::HostProcessData,unsigned int &,winrt::hstring &,winrt::hstring,unsigned int &,bool &,bool &,bool &,bool &,bool &,bool &>(
            v43,
            &v45,
            (const struct winrt::hstring *)&v37,
            CorrelationId,
            v21,
            (bool *)this + 264,
            (bool *)this + 265,
            (bool *)this + 266,
            (bool *)this + 267,
            (bool *)this + 268,
            v19);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveProcessData(v31, v33);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v44);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
      1u,
      3u);
    v39 = winrt::hstring::c_str((winrt::hstring *)&v37);
    v34 = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
            (RTL_SRWLOCK *)this,
            (winrt::hstring *)&v41,
            (__int64 *)&v37);
    v43[0] = (__int64)winrt::hstring::c_str(v34);
    if ( v11 )
      v35 = *((_DWORD *)v11 + 5);
    else
      v35 = 0;
    LODWORD(v44) = v35;
    CloudPCTelemetryCore::RemoteDesktopProcessRegistered<unsigned int &,unsigned int,unsigned short const *,unsigned short const *>(
      (int *)v21,
      (int *)&v44,
      v43,
      (__int64 *)&v39);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v41);
    goto LABEL_20;
  }
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetProcessData(
    *((_QWORD *)this + 4),
    &v41,
    v45);
  v22 = v41;
  if ( v41 )
  {
    v23 = (volatile signed __int32 **)winrt::Windows::Internal::Shell::implementation::HostProcessData::RemoteDesktopId(
                                        v41,
                                        &v44);
    if ( &v37 != (winrt::Windows::Internal::Shell::implementation::HostProcessData **)v23 )
    {
      v24 = *v23;
      *v23 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(&v37, (__int64)v24);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v44);
    v13 = (unsigned int *)((char *)this + 48);
    *((_DWORD *)this + 12) = *((_DWORD *)v22 + 6);
    v25 = (const struct winrt::hstring *)winrt::Windows::Internal::Shell::implementation::HostProcessData::CorrelationId(
                                           v22,
                                           &v44);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      this,
      (const struct winrt::hstring *)&v37,
      v25);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v44);
    *((_BYTE *)this + 264) = *((_BYTE *)v22 + 28);
    LOBYTE(v26) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
      v26);
    LODWORD(v44) = 1;
    *((_BYTE *)this + 265) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v22,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    LODWORD(v44) = 2;
    *((_BYTE *)this + 266) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v27,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    LODWORD(v44) = 4;
    *((_BYTE *)this + 267) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v28,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    LODWORD(v44) = 3;
    *((_BYTE *)this + 268) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v29,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    LODWORD(v44) = 5;
    v19 = (bool *)this + 269;
    *((_BYTE *)this + 269) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                               v30,
                               (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v44);
    if ( v42[0] )
    {
      std::_Ref_count_base::_Decref(v42[0]);
      goto LABEL_20;
    }
LABEL_4:
    v21 = v13;
    if ( !a4 )
      goto LABEL_16;
LABEL_20:
    v41 = v37;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,unsigned int,winrt::hstring>::Insert(
      (__int64 **)this + 32,
      &v45,
      (__int64 *)&v41);
    v36 = 1;
    v10 = 1;
LABEL_22:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v40);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession(this, 1);
    if ( v10 && !*v13 )
    {
      winrt::make<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::hstring &,unsigned int &,bool>(
        &v44,
        (const struct winrt::hstring *)&v37,
        &v45,
        (const bool *)&v36);
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
        (RTL_SRWLOCK *)this + 34,
        (__int64)this,
        (__int64)&v44);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v44);
    }
    goto LABEL_25;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( v42[0] )
    std::_Ref_count_base::_Decref(v42[0]);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v40);
LABEL_25:
  std::unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>((volatile signed __int32 ***)&v38);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v37);
}
