/*
 * XREFs of ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics2@2345@V_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@impl@winrt@@YA?A_P$$QEAV_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@Z @ 0x18056C094
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E5DC (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2,_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_>(
        __int64 a1)
{
  unsigned int *v1; // r8
  unsigned int *v2; // rdx
  int v3; // eax
  int v5; // [rsp+38h] [rbp-20h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]
  char v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_18089BA18);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2> )
  {
    v1 = *(unsigned int **)(a1 + 8);
    v2 = *(unsigned int **)a1;
    v7 = 0;
    v5 = 0;
    v6 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>
                                                                    + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>,
           *v2,
           *v1,
           &v7);
    winrt::check_hresult(&v8, v3, (__int64)&v5);
    _InterlockedDecrement64(&qword_18089BA18);
    return v7;
  }
  else
  {
    _InterlockedDecrement64(&qword_18089BA18);
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>::call<_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_ &>(
             a1,
             (unsigned int **)a1);
  }
}
