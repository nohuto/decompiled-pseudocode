/*
 * XREFs of ??$call@AEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@?$factory_cache_entry@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDescriptorManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@Z @ 0x1805C4CF4
 * Callers:
 *     ??$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDescriptorManagerStatics@2345@V_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@impl@winrt@@YA?A_P$$QEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@Z @ 0x1805C5394 (--$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDe.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F1208 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>::call<_lambda_854d82a1e74abb924a7f571a93c2e7c9_ &>(
        __int64 a1,
        unsigned int **a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 v4; // rax
  char v5; // bl
  int v6; // eax
  int v7; // eax
  __int64 *v8; // [rsp+30h] [rbp-40h] BYREF
  __int128 v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+48h] [rbp-28h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64 *, __int64 *); // [rsp+A0h] [rbp+30h] BYREF
  void (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // [rsp+A8h] [rbp+38h] BYREF

  v12 = a1;
  v8 = (__int64 *)L"WindowsUdk.Security.Authorization.SecurityDescriptorManager";
  *(_QWORD *)&v9 = 59LL;
  winrt::param::hstring::hstring((__int64)&v10, (__int64 *)&v8);
  v13 = 0LL;
  LODWORD(v8) = 0;
  v9 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v12,
    &v10,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
    (__int64)&v13);
  winrt::check_hresult((int *)&v12, v12, (__int64)&v8);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
  v14 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
  v12 = 0LL;
  if ( !v13 )
  {
    v4 = 0LL;
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  (**v13)(v13, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12);
  v4 = v12;
  if ( !v12 )
    goto LABEL_3;
  v5 = 1;
LABEL_4:
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
  if ( v5 )
  {
    v8 = &qword_1808DD6F8;
    _InterlockedIncrement64(&qword_1808DD6F8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
            (signed __int64)v13,
            0LL) )
    {
      v14 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DD700);
    }
    LODWORD(v10) = 0;
    v11 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>
                                                                    + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics>,
           **a2,
           *(_QWORD *)a2[1],
           *a2[2]);
    winrt::check_hresult((int *)&v12, v7, (__int64)&v10);
    _InterlockedDecrement64(&qword_1808DD6F8);
  }
  else
  {
    LODWORD(v8) = 0;
    v9 = 0LL;
    v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD), _QWORD, _QWORD, _QWORD))(*v3)[6])(
           v3,
           **a2,
           *(_QWORD *)a2[1],
           *a2[2]);
    winrt::check_hresult((int *)&v12, v6, (__int64)&v8);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
}
