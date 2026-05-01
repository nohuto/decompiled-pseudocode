/*
 * XREFs of ?HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NAEBUhstring@7@@Z @ 0x180336464
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync$_ResumeCoro$1 @ 0x18032CB20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032CB20.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x180330A10 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180330A10.c)
 *     ?HasGamingAppCapability@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAXPEA_N@Z @ 0x180336430 (-HasGamingAppCapability@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@Gam.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8B34 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?GetFromAppUserModelId@AppInfo@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1802BF9C8 (-GetFromAppUserModelId@AppInfo@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?Package@?$consume_Windows_ApplicationModel_IAppInfo2@UAppInfo@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803177D4 (-Package@-$consume_Windows_ApplicationModel_IAppInfo2@UAppInfo@ApplicationModel@Windows@winrt@@@.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0PackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x180335A80 (--0PackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803372F4 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_any_array_ptr@PEAXU?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@U?$unique_any_array_deleter@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@2@@wil@@QEAAXXZ @ 0x180337798 (-reset@-$unique_any_array_ptr@PEAXU-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
char __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::HasGamingAppCapability(
        struct IUnknownVtbl **a1)
{
  __int64 **v1; // rax
  __int64 **v2; // rax
  const unsigned __int16 *v3; // rax
  unsigned int EffectivePackageStatusForUserSid; // eax
  int v5; // eax
  const char *v6; // r9
  const unsigned __int16 *v7; // rax
  int ApplicationCapabilities; // eax
  const char *v9; // r9
  unsigned int v10; // edi
  unsigned int i; // esi
  unsigned int v13; // [rsp+20h] [rbp-D8h]
  struct IUnknown v14; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v15; // [rsp+68h] [rbp-90h] BYREF
  char v16; // [rsp+6Ch] [rbp-8Ch]
  __int64 *v17; // [rsp+80h] [rbp-78h] BYREF
  __int128 v18; // [rsp+88h] [rbp-70h] BYREF
  __int64 v19; // [rsp+98h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+A0h] [rbp-58h]
  __int64 v21; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+B0h] [rbp-48h]
  _QWORD v23[8]; // [rsp+B8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  int v25; // [rsp+100h] [rbp+8h] BYREF
  __int64 v26; // [rsp+108h] [rbp+10h] BYREF
  volatile signed __int32 *v27; // [rsp+110h] [rbp+18h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, void *, __int64 *); // [rsp+118h] [rbp+20h] BYREF

  try
  {
    v14.lpVtbl = *a1;
    winrt::Windows::ApplicationModel::AppInfo::GetFromAppUserModelId(
      (const struct winrt::param::hstring *)&v28,
      (__int64 *)&v14);
    v1 = (__int64 **)winrt::impl::consume_Windows_ApplicationModel_IAppInfo2<winrt::Windows::ApplicationModel::AppInfo>::Package(
                       &v28,
                       &v17);
    v2 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                       v1,
                       &v26);
    winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
      v2,
      &v27);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v26);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
    {
      v25 = 0;
      v3 = winrt::hstring::c_str((winrt::hstring *)&v27);
      EffectivePackageStatusForUserSid = GetEffectivePackageStatusForUserSid(0LL, v3, &v25);
      if ( EffectivePackageStatusForUserSid )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          (void *)0x113,
          (unsigned int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
          (const char *)EffectivePackageStatusForUserSid,
          v13);
      if ( (v25 & 0x400800) != 0 )
      {
        try
        {
          winrt::Windows::Management::Deployment::Internal::PackageManagerInternal::PackageManagerInternal(&v14);
          LODWORD(v17) = 0;
          v18 = 0LL;
          v5 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, volatile signed __int32 *))v14.lpVtbl->QueryInterface
                + 33))(
                 v14.lpVtbl,
                 v27);
          winrt::check_hresult((int *)&v26, v5, (__int64)&v17);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x11D,
            (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
            v6);
        }
      }
    }
    v21 = 0LL;
    v22 = 0LL;
    v17 = &v21;
    LODWORD(v18) = 0;
    BYTE4(v18) = 1;
    wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>>::reset(&v21);
    v7 = winrt::hstring::c_str((winrt::hstring *)&v27);
    ApplicationCapabilities = QueryApplicationCapabilitiesEx(v7, 0LL, 0LL, 0LL);
    if ( ApplicationCapabilities < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x127,
        (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
        (const char *)(unsigned int)ApplicationCapabilities,
        0);
    if ( BYTE4(v18) )
      v17[1] = (unsigned int)v18;
    v23[0] = 0LL;
    v23[1] = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v14.lpVtbl = (struct IUnknownVtbl *)&v19;
    v15 = 0;
    v16 = 1;
    wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>>::reset(&v19);
    v17 = v23;
    LODWORD(v18) = 0;
    BYTE4(v18) = 1;
    wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>>::reset(v23);
    if ( !(unsigned int)DeriveCapabilitySidsFromName(
                          L"Microsoft.appCategory.gamingHome_8wekyb3d8bbwe",
                          v23,
                          &v18,
                          &v19,
                          &v15) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x12F,
        (__int64)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
        v9);
    if ( BYTE4(v18) )
      v17[1] = (unsigned int)v18;
    if ( v16 )
      v14.lpVtbl->AddRef = (ULONG (__stdcall *)(IUnknown *))v15;
    v10 = 0;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x13D,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
      v9);
    return 0;
  }
  while ( v10 < v22 )
  {
    for ( i = 0; i < v20; ++i )
    {
      if ( EqualSid(*(PSID *)(v21 + 8LL * v10), *(PSID *)(v19 + 8LL * i)) )
      {
        wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>>::reset(&v19);
        wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>>::reset(v23);
        wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>>::reset(&v21);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v27);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
        return 1;
      }
    }
    ++v10;
  }
  wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>>::reset(&v19);
  wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>>::reset(v23);
  wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>>::reset(&v21);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v27);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
  return 0;
}
