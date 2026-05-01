/*
 * XREFs of ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E3CC
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E5DC (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z @ 0x1800AB1F0 (-_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeo.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?GetInt32@?$consume_Windows_Management_Policies_INamedPolicyData@UINamedPolicyData@Policies@Management@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180272F30 (-GetInt32@-$consume_Windows_Management_Policies_INamedPolicyData@UINamedPolicyData@Policies@Mana.c)
 *     ??R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@Z @ 0x1803A62D8 (--R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettin.c)
 *     ??$call@AEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@?$factory_cache_entry@UNamedPolicy@Policies@Management@Windows@winrt@@UINamedPolicyStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@Z @ 0x18056B7AC (--$call@AEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@-$factory_cache_entry@UNamedPolicy@Polic.c)
 *     ??$call@P6A?AUUser@System@Windows@winrt@@AEBUIUserStatics2@234@@Z@?$factory_cache_entry@UUser@System@Windows@winrt@@UIUserStatics2@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUser@System@Windows@2@AEBUIUserStatics2@452@@Z@Z @ 0x18056BEB8 (--$call@P6A-AUUser@System@Windows@winrt@@AEBUIUserStatics2@234@@Z@-$factory_cache_entry@UUser@Sy.c)
 *     ??R_lambda_a0180c703ad96138dbcff4843259263a_@@QEBA@AEBUINamedPolicyStatics@Policies@Management@Windows@winrt@@@Z @ 0x18056CB8C (--R_lambda_a0180c703ad96138dbcff4843259263a_@@QEBA@AEBUINamedPolicyStatics@Policies@Management@W.c)
 *     ?GetPolicyFromPath@NamedPolicy@Policies@Management@Windows@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x18056DEF0 (-GetPolicyFromPath@NamedPolicy@Policies@Management@Windows@winrt@@SA@AEBUhstring@param@5@0@Z.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall AIXPolicyHelper::IsC2DAllowedByITPolicy(AIXPolicyHelper *this)
{
  char v1; // bl
  bool v2; // r15
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  char v5; // r14
  bool v6; // si
  char v7; // di
  bool v8; // zf
  const char *v9; // r9
  char result; // al
  __int64 *v11[5]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v14[4]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v15[80]; // [rsp+A8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  __int64 v17; // [rsp+100h] [rbp+8h] BYREF
  __int64 v18; // [rsp+108h] [rbp+10h] BYREF
  __int64 v19; // [rsp+110h] [rbp+18h] BYREF
  const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *(__fastcall *v20)(const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *, __int64); // [rsp+118h] [rbp+20h] BYREF

  v1 = 0;
  v2 = 0;
  winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"DisableClickToDo");
  winrt::param::hstring::hstring((winrt::param::hstring *)v12, L"WindowsAI");
  try
  {
    v11[3] = &qword_18089AF58;
    _InterlockedIncrement64(&qword_18089AF58);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::User,winrt::Windows::System::IUserStatics2> )
    {
      _lambda_d36c29fbb2e64753b55d53c833bf7733_::operator()(
        v3,
        &v18,
        (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::User,winrt::Windows::System::IUserStatics2>);
      _InterlockedDecrement64(&qword_18089AF58);
    }
    else
    {
      _InterlockedDecrement64(&qword_18089AF58);
      v20 = _lambda_d36c29fbb2e64753b55d53c833bf7733_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::System::User,winrt::Windows::System::IUserStatics2>::call<winrt::Windows::System::User (*)(winrt::Windows::System::IUserStatics2 const &)>(
        v3,
        (__int64)&v18,
        (void (__fastcall **)(__int64, __int64 *))&v20);
    }
    v11[0] = &v18;
    v11[1] = (__int64 *)v12;
    v11[2] = (__int64 *)v13;
    v11[4] = &qword_18089CE08;
    _InterlockedIncrement64(&qword_18089CE08);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics> )
    {
      _lambda_a0180c703ad96138dbcff4843259263a_::operator()(
        v11,
        &v17,
        (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>);
      _InterlockedDecrement64(&qword_18089CE08);
    }
    else
    {
      _InterlockedDecrement64(&qword_18089CE08);
      winrt::impl::factory_cache_entry<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>::call<_lambda_a0180c703ad96138dbcff4843259263a_ &>(
        v4,
        (__int64)&v17,
        (__int64)v11);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    v5 = _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_((const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *)&v17);
    if ( v5 )
      v2 = (unsigned int)winrt::impl::consume_Windows_Management_Policies_INamedPolicyData<winrt::Windows::Management::Policies::INamedPolicyData>::GetInt32(&v17) == 1;
    v6 = 0;
    winrt::param::hstring::hstring((winrt::param::hstring *)v14, L"DisableClickToDo");
    winrt::param::hstring::hstring((winrt::param::hstring *)v15, L"WindowsAI");
    winrt::Windows::Management::Policies::NamedPolicy::GetPolicyFromPath(
      (const struct winrt::param::hstring *)&v19,
      (const struct winrt::param::hstring *)v15,
      v14);
    v7 = _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_((const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *)&v19);
    if ( v7 )
      v6 = (unsigned int)winrt::impl::consume_Windows_Management_Policies_INamedPolicyData<winrt::Windows::Management::Policies::INamedPolicyData>::GetInt32(&v19) == 1;
    if ( v5 )
    {
      v8 = !v2;
    }
    else
    {
      if ( !v7 )
        goto LABEL_17;
      v8 = !v6;
    }
    if ( !v8 )
    {
LABEL_18:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
      return v1;
    }
LABEL_17:
    v1 = 1;
    goto LABEL_18;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x48A,
      (int)"shellcommon\\internal\\shell\\inc\\aixpolicyhelper.h",
      v9);
    return 0;
  }
  return result;
}
