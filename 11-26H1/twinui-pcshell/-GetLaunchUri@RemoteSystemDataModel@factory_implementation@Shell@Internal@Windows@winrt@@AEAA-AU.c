/*
 * XREFs of ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18064CA94
 * Callers:
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E3AC (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E4EC (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1801A950C (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x1801A9554 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028E950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     ??9winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1802C6710 (--9winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803528DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil.c)
 *     ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG@Z @ 0x1804814D8 (--$-9GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char__ea_1804814D8.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x180640200 (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x1806406BC (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@U76@@Z @ 0x18064ACD4 (-CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806504E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x180650CA0 (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180667714 (--0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$basic_string@GU-$char_trai.c)
 *     ?AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1806677A0 (-AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV-$basic_stri.c)
 *     ?Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA?AU0Foundation@56@XZ @ 0x1806678A8 (-Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0Foundation@56@XZ.c)
 */

// Hidden C++ exception states: #wind=19
_QWORD *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetLaunchUri(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *a1,
        _QWORD *a2,
        __int64 **a3,
        int a4)
{
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // rax
  unsigned int BootToCloudModeType; // edi
  const unsigned __int16 *v11; // rax
  _WORD *v12; // rax
  const unsigned __int16 *v13; // rax
  const unsigned __int16 *v14; // rax
  __int64 v15; // rdx
  const WCHAR *v16; // rdx
  const unsigned __int16 *v17; // rax
  const unsigned __int16 *v18; // rax
  const unsigned __int16 *v19; // rax
  const unsigned __int16 *v20; // rax
  unsigned int v21; // r8d
  __int64 *v22; // rax
  const unsigned __int16 *v23; // rax
  const unsigned __int16 *v24; // rax
  const unsigned __int16 *v25; // rax
  const unsigned __int16 *v26; // rax
  const unsigned __int16 *v27; // rax
  const unsigned __int16 *v28; // rax
  volatile signed __int32 *v30; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v31; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v32; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v33[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v34[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v35[5]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v36[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v37[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v38[5]; // [rsp+E8h] [rbp-18h] BYREF
  _WORD v39[7]; // [rsp+112h] [rbp+12h] BYREF
  _WORD pvData[264]; // [rsp+120h] [rbp+20h] BYREF

  v32 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( a4 == 1 )
  {
    CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v8);
    std::wstring::wstring((__int64)v36, (__int64)pvData);
    v9 = winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemBootAPPURI);
    std::wstring::wstring((__int64)v37, (__int64)v9);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(v35, v37);
    std::wstring::_Tidy_deallocate(v37);
    BootToCloudModeType = CloudPCHelpers::GetBootToCloudModeType();
    if ( std::operator!=<unsigned short>((__int64)v36, (__int64)&::pvData) )
    {
      v11 = winrt::hstring::c_str((winrt::hstring *)&c_correlationIdQueryParam);
      std::wstring::wstring((__int64)v33, (__int64)v11);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v33, v36);
      std::wstring::_Tidy_deallocate(v33);
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl,
      1u);
    v12 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v39, BootToCloudModeType);
    std::wstring::wstring((__int64)v34, (__int64)v12, (__int64)v39);
    v13 = winrt::hstring::c_str((winrt::hstring *)&c_bootModeTypeQueryParam);
    std::wstring::wstring((__int64)v33, (__int64)v13);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v33, v34);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::wstring((__int64)v33, (__int64)L"true");
    v14 = winrt::hstring::c_str((winrt::hstring *)&c_supportBluetoothSettingsQueryParam);
    std::wstring::wstring((__int64)v34, (__int64)v14);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    LOBYTE(v15) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
      v15);
    v16 = L"true";
    if ( BootToCloudModeType != 2 )
      v16 = L"false";
    std::wstring::wstring((__int64)v38, (__int64)v16);
    std::wstring::wstring((__int64)v33, (__int64)L"true");
    v17 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
    std::wstring::wstring((__int64)v34, (__int64)v17);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::wstring((__int64)v33, (__int64)L"true");
    v18 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
    std::wstring::wstring((__int64)v34, (__int64)v18);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    std::wstring::wstring((__int64)v33, (__int64)L"true");
    v19 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
    std::wstring::wstring((__int64)v34, (__int64)v19);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    v20 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
    std::wstring::wstring((__int64)v34, (__int64)v20);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v38);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v38);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::Uri(v35, a2);
    std::wstring::_Tidy_deallocate(v35);
    std::wstring::_Tidy_deallocate(v36);
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
    v22 = (__int64 *)winrt::hstring::hstring((winrt::hstring *)&v32, (const struct winrt::hstring *)&v31, v21);
    winrt::Windows::Internal::Shell::implementation::Utils::CreateCorrelationIdForSwitch(
      (volatile signed __int32 *)&v30,
      v22);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
      a1,
      (const struct winrt::hstring *)&v31,
      (const struct winrt::hstring *)&v30);
    v23 = winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemSwitchAPPURI);
    std::wstring::wstring((__int64)v38, (__int64)v23);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(v35, v38);
    std::wstring::_Tidy_deallocate(v38);
    v24 = winrt::hstring::c_str((winrt::hstring *)&v31);
    std::wstring::wstring((__int64)v33, (__int64)v24);
    v25 = winrt::hstring::c_str((winrt::hstring *)&c_remoteDesktopIdQueryParam);
    std::wstring::wstring((__int64)v34, (__int64)v25);
    winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
    std::wstring::_Tidy_deallocate(v34);
    std::wstring::_Tidy_deallocate(v33);
    if ( winrt::operator!=((__int64)&v30) )
    {
      v26 = winrt::hstring::c_str((winrt::hstring *)&v30);
      std::wstring::wstring((__int64)v33, (__int64)v26);
      v27 = winrt::hstring::c_str((winrt::hstring *)&c_correlationIdQueryParam);
      std::wstring::wstring((__int64)v34, (__int64)v27);
      winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(v35, v34, v33);
      std::wstring::_Tidy_deallocate(v34);
      std::wstring::_Tidy_deallocate(v33);
    }
    std::wstring::wstring((__int64)v33, (__int64)L"false");
    v28 = winrt::hstring::c_str((winrt::hstring *)&c_supportBluetoothSettingsQueryParam);
    std::wstring::wstring((__int64)v34, (__int64)v28);
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
