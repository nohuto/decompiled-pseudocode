/*
 * XREFs of ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18061A290
 * Callers:
 *     ?EnableCloudPC@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHPEAX000@Z @ 0x18061A240 (-EnableCloudPC@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemote.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1802A392C (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802AB088 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180489008 (--1-$com_ptr_t@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1804890DC (--1-$test_watcher@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??$EnableCloudPCCompleted@PEBG_N@CloudPCTelemetry@@SAX$$QEAPEBG$$QEA_N@Z @ 0x18061659C (--$EnableCloudPCCompleted@PEBG_N@CloudPCTelemetry@@SAX$$QEAPEBG$$QEA_N@Z.c)
 *     ??$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEBU76@@winrt@@YA?A_PAEBUhstring@0@00@Z @ 0x180616D3C (--$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEBU.c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18061A0B8 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18061C400 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18061DB34 (-start@-$tip_test@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x18063B49C (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::EnableCloudPC(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4,
        const struct winrt::hstring *a5)
{
  __int64 *v9; // rax
  __int64 *v10; // rax
  winrt::hstring *v11; // rax
  const WCHAR *v12; // rax
  int v13; // eax
  const struct winrt::hstring *v14; // rbx
  const BYTE *lpData; // rax
  DWORD v16; // edx
  LSTATUS v17; // esi
  const WCHAR **v18; // rcx
  const struct winrt::Windows::Internal::Shell::RegistrationData *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  HKEY hKey; // [rsp+58h] [rbp-51h] BYREF
  volatile signed __int32 *v26; // [rsp+60h] [rbp-49h] BYREF
  const unsigned __int16 *v27; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-39h] BYREF
  int v29; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v30; // [rsp+88h] [rbp-21h] BYREF
  volatile signed __int32 *v31; // [rsp+90h] [rbp-19h] BYREF
  int v32; // [rsp+98h] [rbp-11h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-9h]
  const int *v34; // [rsp+B0h] [rbp+7h] BYREF
  _BYTE v35[40]; // [rsp+B8h] [rbp+Fh] BYREF
  volatile signed __int32 *v36; // [rsp+E0h] [rbp+37h]

  v26 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>>::start(&v26, v28);
  v34 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v35,
    (struct wil::details::IFailureCallback *)&v34,
    0LL,
    1);
  v36 = v26;
  if ( v26 )
    _InterlockedIncrement(v26 + 66);
  wil::com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>((void **)&v26);
  hKey = 0LL;
  v32 = 0;
  v33 = 0LL;
  v9 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v27, (__int64 *)a2, (__int64 *)a3);
  v10 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v31, v9, (__int64)L"\\");
  v11 = (winrt::hstring *)winrt::operator+((volatile signed __int32 *)&v30, v10, (__int64 *)a4);
  v12 = winrt::hstring::c_str(v11);
  v13 = RegCreateKeyExW(HKEY_CURRENT_USER, v12, 0, 0LL, 0, 0x20006u, 0LL, &hKey, 0LL);
  if ( v13 > 0 )
    v13 = (unsigned __int16)v13 | 0x80070000;
  winrt::check_hresult(&v29, v13, (__int64)&v32);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v27);
  v14 = a5;
  lpData = (const BYTE *)winrt::hstring::c_str(a5);
  v17 = RegSetValueExW(hKey, L"displayName", 0, 1u, lpData, v16);
  if ( v17 )
  {
    winrt::Windows::Internal::Shell::implementation::CloudPCComponent::DisableCloudPC(this, a2, a3, a4);
    v32 = 0;
    v33 = 0LL;
    winrt::check_hresult((int *)&a5, v17, (__int64)&v32);
    RegCloseKey(hKey);
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v36 + 2));
    LOBYTE(a5) = 0;
    v27 = winrt::hstring::c_str(a4);
    v18 = &v27;
  }
  else
  {
    RegCloseKey(hKey);
    LOBYTE(a5) = 1;
    v19 = (const struct winrt::Windows::Internal::Shell::RegistrationData *)winrt::make<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring const &,winrt::hstring const &,winrt::hstring const &>(
                                                                              v28,
                                                                              a4,
                                                                              a3,
                                                                              v14);
    winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(
      v19,
      (const bool *)&a5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v28);
    LOBYTE(v20) = 3;
    LOBYTE(v21) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::GetImpl'::`2'::impl,
      v21,
      v20);
    LOBYTE(v22) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::GetImpl'::`2'::impl,
      v22,
      0LL);
    LOBYTE(v23) = 1;
    LOBYTE(v24) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::GetImpl'::`2'::impl,
      v24,
      v23);
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v36 + 2));
    LOBYTE(a5) = 1;
    v28[0] = winrt::hstring::c_str(a4);
    v18 = (const WCHAR **)v28;
  }
  CloudPCTelemetry::EnableCloudPCCompleted<unsigned short const *,bool>(v18, (char *)&a5);
  tip2::test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>::~test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>((__int64)&v34);
}
