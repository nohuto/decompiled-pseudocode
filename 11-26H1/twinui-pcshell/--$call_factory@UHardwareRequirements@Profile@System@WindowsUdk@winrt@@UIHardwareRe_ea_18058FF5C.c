/*
 * XREFs of ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics@2345@V_lambda_7268e45c73438b7c97da070512f3e575_@@@impl@winrt@@YA?A_P$$QEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@Z @ 0x18058FF5C
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180592050 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics,_lambda_7268e45c73438b7c97da070512f3e575_>(
        unsigned int **a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v7; // [rsp+68h] [rbp+20h]

  v7 = &qword_1808DC178;
  _InterlockedIncrement64(&qword_1808DC178);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics> )
  {
    v5 = 0;
    v3 = 0;
    v4 = 0LL;
    v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>
                                                            + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>,
           **a1,
           &v5);
    winrt::check_hresult(&v6, v1, (__int64)&v3);
    _InterlockedDecrement64(&qword_1808DC178);
    return v5;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC178);
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>::call<_lambda_7268e45c73438b7c97da070512f3e575_ &>(
             0LL,
             a1);
  }
}
