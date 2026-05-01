/*
 * XREFs of ??$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDescriptorManagerStatics@2345@V_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@impl@winrt@@YA?A_P$$QEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@Z @ 0x1805C5394
 * Callers:
 *     ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805CFA34 (-EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::call_factory<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics,_lambda_854d82a1e74abb924a7f571a93c2e7c9_>(
        unsigned int **a1)
{
  int v1; // eax
  int v2; // [rsp+30h] [rbp-28h] BYREF
  __int128 v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v5; // [rsp+70h] [rbp+18h]

  v5 = &qword_1808DD6F8;
  _InterlockedIncrement64(&qword_1808DD6F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics> )
  {
    v2 = 0;
    v3 = 0LL;
    v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>
                                                                    + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
           **a1,
           *(_QWORD *)a1[1],
           *a1[2]);
    winrt::check_hresult(&v4, v1, (__int64)&v2);
    _InterlockedDecrement64(&qword_1808DD6F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD6F8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>::call<_lambda_854d82a1e74abb924a7f571a93c2e7c9_ &>(
      (__int64)a1,
      a1);
  }
}
