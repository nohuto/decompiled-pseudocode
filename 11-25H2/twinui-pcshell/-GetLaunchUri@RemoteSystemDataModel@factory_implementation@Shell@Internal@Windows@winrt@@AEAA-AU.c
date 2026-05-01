/*
 * XREFs of ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180626FA4
 * Callers:
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1806288F8 (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180628A38 (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x180190394 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x180190FA4 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802975F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     ??9winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1802CF2A8 (--9winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18034E244 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x18061A68C (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x18061AB94 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@U76@@Z @ 0x180624F5C (-CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062AACC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x18062B298 (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180641C40 (--0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$basic_string@GU-$char_trai.c)
 *     ?AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x180641CD8 (-AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV-$basic_stri.c)
 *     ?Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA?AU0Foundation@56@XZ @ 0x180641DE0 (-Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0Foundation@56@XZ.c)
 */

// Hidden C++ exception states: #wind=18
_QWORD *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetLaunchUri(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *a1,
        _QWORD *a2,
        __int64 **a3,
        int a4)
{
  const unsigned __int16 *v8; // r8
  unsigned __int16 *v9; // rax
  unsigned int BootToCloudModeType; // esi
  unsigned __int16 *v11; // rax
  _QWORD *v12; // rbx
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  WCHAR *v17; // rdx
  unsigned __int16 *v18; // rax
  unsigned __int16 *v19; // rax
  unsigned __int16 *v20; // rax
  unsigned __int16 *v21; // rax
  __int64 *v22; // rax
  unsigned __int16 *v23; // rax
  unsigned __int16 *v24; // rax
  unsigned __int16 *v25; // rax
  unsigned __int16 *v26; // rax
  unsigned __int16 *v27; // rax
  unsigned __int16 *v28; // rax
  volatile signed __int32 *v30; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v31; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v32; // [rsp+30h] [rbp-D0h] BYREF
  void *v33[4]; // [rsp+40h] [rbp-C0h] BYREF
  void *v34[4]; // [rsp+60h] [rbp-A0h] BYREF
  void *v35[5]; // [rsp+80h] [rbp-80h] BYREF
  void *v36[4]; // [rsp+A8h] [rbp-58h] BYREF
  void *v37[4]; // [rsp+C8h] [rbp-38h] BYREF
  void *v38[5]; // [rsp+E8h] [rbp-18h] BYREF
  _WORD pvData[264]; // [rsp+110h] [rbp+10h] BYREF

  v32 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( a4 == 1 )
  {
    CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v8);
    std::wstring::wstring((char **)v37, pvData);
    v9 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemBootAPPURI);
    std::wstring::wstring((char **)v38, v9);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(v35, v38);
    std::wstring::_Tidy_deallocate(v38);
    BootToCloudModeType = CloudPCHelpers::GetBootToCloudModeType();
    if ( !std::wstring::_Equal((char *)v37, (char *)&LocaleName) )
    {
      v11 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_correlationIdQueryParam);
      std::wstring::wstring((char **)v33, v11);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v33, v37);
      std::wstring::_Tidy_deallocate(v33);
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl,
      1u);
    v12 = std::to_wstring(v36, BootToCloudModeType);
    v13 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_bootModeTypeQueryParam);
    std::wstring::wstring((char **)v33, v13);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v33, v12);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::_Tidy_deallocate(v36);
    std::wstring::wstring((char **)v34, L"true");
    v14 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportBluetoothSettingsQueryParam);
    std::wstring::wstring((char **)v33, v14);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v33, v34);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::_Tidy_deallocate(v34);
    LOBYTE(v15) = 3;
    LOBYTE(v16) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
      v16,
      v15);
    v17 = (WCHAR *)L"true";
    if ( BootToCloudModeType != 2 )
      v17 = (WCHAR *)L"false";
    std::wstring::wstring((char **)v36, v17);
    std::wstring::wstring((char **)v33, L"true");
    v18 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
    std::wstring::wstring((char **)v34, v18);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::wstring((char **)v33, L"true");
    v19 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
    std::wstring::wstring((char **)v34, v19);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::wstring((char **)v33, L"true");
    v20 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
    std::wstring::wstring((char **)v34, v20);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    v21 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
    std::wstring::wstring((char **)v34, v21);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v36);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v36);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::Uri(v35, a2);
    std::wstring::_Tidy_deallocate(v35);
    std::wstring::_Tidy_deallocate(v37);
  }
  else if ( a4 )
  {
    *a2 = 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      a3,
      &v31);
    v22 = (__int64 *)winrt::hstring::hstring((winrt::hstring *)&v32, (const struct winrt::hstring *)&v31);
    winrt::Windows::Internal::Shell::implementation::Utils::CreateCorrelationIdForSwitch(
      (volatile signed __int32 *)&v30,
      v22);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      a1,
      (const struct winrt::hstring *)&v31,
      (const struct winrt::hstring *)&v30);
    v23 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemSwitchAPPURI);
    std::wstring::wstring((char **)v36, v23);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(v35, v36);
    std::wstring::_Tidy_deallocate(v36);
    v24 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v31);
    std::wstring::wstring((char **)v33, v24);
    v25 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_remoteDesktopIdQueryParam);
    std::wstring::wstring((char **)v34, v25);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    if ( winrt::operator!=((__int64 *)&v30) )
    {
      v26 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v30);
      std::wstring::wstring((char **)v33, v26);
      v27 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_correlationIdQueryParam);
      std::wstring::wstring((char **)v34, v27);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
      std::wstring::_Tidy_deallocate(v34);
      std::wstring::_Tidy_deallocate(v33);
    }
    std::wstring::wstring((char **)v33, L"false");
    v28 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&c_supportBluetoothSettingsQueryParam);
    std::wstring::wstring((char **)v34, v28);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::Uri(v35, a2);
    std::wstring::_Tidy_deallocate(v35);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
  }
  return a2;
}
