/*
 * XREFs of ??$call@AEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@?$factory_cache_entry@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDescriptorManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@Z @ 0x1805A0A84
 * Callers:
 *     ??$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDescriptorManagerStatics@2345@V_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@impl@winrt@@YA?A_P$$QEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@Z @ 0x1805A10D0 (--$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDe.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>::call<_lambda_854d82a1e74abb924a7f571a93c2e7c9_ &>(
        __int64 a1,
        unsigned int **a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  unsigned int *v4; // r9
  unsigned int *v5; // r8
  unsigned int *v6; // rdx
  int v7; // eax
  unsigned int *v8; // r9
  unsigned int *v9; // r8
  unsigned int *v10; // rdx
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-29h] BYREF
  __int64 v13; // [rsp+38h] [rbp-21h] BYREF
  void (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-19h] BYREF
  int v15; // [rsp+48h] [rbp-11h] BYREF
  __int128 v16; // [rsp+50h] [rbp-9h]
  __int64 v17[3]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v18[7]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+C0h] [rbp+67h] BYREF
  int v20; // [rsp+D0h] [rbp+77h] BYREF
  void (__fastcall ***v21)(_QWORD, __int64 *, __int64 *); // [rsp+D8h] [rbp+7Fh] BYREF

  v19 = a1;
  v17[0] = (__int64)L"WindowsUdk.Security.Authorization.SecurityDescriptorManager";
  v17[1] = 59LL;
  winrt::param::hstring::hstring((__int64)v18, v17);
  v21 = 0LL;
  v15 = 0;
  v16 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v19,
    v18,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
    (__int64)&v21);
  winrt::check_hresult(&v20, v19, (__int64)&v15);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
  v14 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
  if ( v21 && (v12 = 0LL, (**v21)(v21, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12), (v13 = v12) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    v17[2] = (__int64)&qword_18089D0A8;
    _InterlockedIncrement64(&qword_18089D0A8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
            (signed __int64)v21,
            0LL) )
    {
      v14 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089D0B0);
    }
    v4 = a2[2];
    v5 = a2[1];
    v6 = *a2;
    v15 = 0;
    v16 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>
                                                                    + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
           *v6,
           *(_QWORD *)v5,
           *v4);
    winrt::check_hresult(&v20, v7, (__int64)&v15);
    _InterlockedDecrement64(&qword_18089D0A8);
  }
  else
  {
    v8 = a2[2];
    v9 = a2[1];
    v10 = *a2;
    v15 = 0;
    v16 = 0LL;
    v11 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD), _QWORD, _QWORD, _QWORD))(*v3)[6])(
            v3,
            *v10,
            *(_QWORD *)v9,
            *v8);
    winrt::check_hresult((int *)&v19, v11, (__int64)&v15);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
}
