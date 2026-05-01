/*
 * XREFs of ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics2@2345@V_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@impl@winrt@@YA?A_P$$QEAV_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@Z @ 0x18058FEC4
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180592050 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2,_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_>(
        unsigned int **a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  __int128 v4; // [rsp+38h] [rbp-20h]
  char v5; // [rsp+68h] [rbp+10h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v7; // [rsp+78h] [rbp+20h]

  v7 = &qword_1808DC198;
  _InterlockedIncrement64(&qword_1808DC198);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2> )
  {
    v5 = 0;
    v3 = 0;
    v4 = 0LL;
    v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>
                                                                    + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>,
           **a1,
           *a1[1],
           &v5);
    winrt::check_hresult(&v6, v1, (__int64)&v3);
    _InterlockedDecrement64(&qword_1808DC198);
    return v5;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC198);
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>::call<_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_ &>(
             (__int64)a1,
             a1);
  }
}
