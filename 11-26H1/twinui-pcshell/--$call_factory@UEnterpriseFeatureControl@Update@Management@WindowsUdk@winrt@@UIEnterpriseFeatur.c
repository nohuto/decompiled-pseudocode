/*
 * XREFs of ??$call_factory@UEnterpriseFeatureControl@Update@Management@WindowsUdk@winrt@@UIEnterpriseFeatureControlStatics@2345@V_lambda_d87b56c9fee8963e2cb1aea67b29a52d_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d87b56c9fee8963e2cb1aea67b29a52d_@@@Z @ 0x18058FE34
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180592050 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::call_factory<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics,_lambda_d87b56c9fee8963e2cb1aea67b29a52d_>(
        unsigned int **a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v7; // [rsp+68h] [rbp+20h]

  v7 = &qword_1808DD4C8;
  _InterlockedIncrement64(&qword_1808DD4C8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics> )
  {
    v5 = 0;
    v3 = 0;
    v4 = 0LL;
    v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics>
                                                            + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics>,
           **a1,
           &v5);
    winrt::check_hresult(&v6, v1, (__int64)&v3);
    _InterlockedDecrement64(&qword_1808DD4C8);
    return v5;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD4C8);
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics>::call<_lambda_d87b56c9fee8963e2cb1aea67b29a52d_ &>(
             0LL,
             a1);
  }
}
