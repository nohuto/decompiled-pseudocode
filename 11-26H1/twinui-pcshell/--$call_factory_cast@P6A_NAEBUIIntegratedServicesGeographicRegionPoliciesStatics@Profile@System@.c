/*
 * XREFs of ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@@impl@winrt@@YA?A_P$$QEAV_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@@Z @ 0x1803A8D8C
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18023D3F0 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803B8640 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@2@@Z@Z @ 0x1803A8C48 (--$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::call_factory_cast<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics const &),winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_>(
        __int64 (__fastcall *a1)(__int64 *))
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]
  char (__fastcall *v5)(const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *); // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+18h]

  v5 = (char (__fastcall *)(const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *))a1;
  v7 = &qword_1808DC158;
  _InterlockedIncrement64(&qword_1808DC158);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics> )
  {
    LOBYTE(v5) = 0;
    v3 = 0;
    v4 = 0LL;
    v1 = (*(__int64 (__fastcall **)(__int64, char (__fastcall **)(const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *)))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics> + 72LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>,
           &v5);
    winrt::check_hresult(&v6, v1, (__int64)&v3);
    _InterlockedDecrement64(&qword_1808DC158);
    return (char)v5;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC158);
    v5 = _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::call<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics const &)>(
             0LL,
             (__int64 (__fastcall **)(__int64 *))&v5);
  }
}
