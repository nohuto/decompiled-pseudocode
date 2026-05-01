/*
 * XREFs of ??$call@AEAV_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@@?$factory_cache_entry@UProtocol@StateRepository@Internal@Windows@winrt@@UIProtocolStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@@Z @ 0x18061E83C
 * Callers:
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806344E8 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F1208 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??R_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@QEBA@AEBUIProtocolStatics@StateRepository@Internal@Windows@winrt@@@Z @ 0x180623370 (--R_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@QEBA@AEBUIProtocolStatics@StateRepository@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::StateRepository::Protocol,winrt::Windows::Internal::StateRepository::IProtocolStatics>::call<_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_ &>(
        void (__fastcall ***a1)(_QWORD, _QWORD, _QWORD),
        __int64 a2,
        __int64 a3)
{
  __int64 *v5; // rax
  char v6; // di
  __int64 *v8; // [rsp+28h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-30h]
  __int64 v10[4]; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // [rsp+80h] [rbp+20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 **); // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v8 = (__int64 *)L"Windows.Internal.StateRepository.Protocol";
  *(_QWORD *)&v9 = 41LL;
  winrt::param::hstring::hstring((__int64)v10, (__int64 *)&v8);
  v12 = 0LL;
  LODWORD(v8) = 0;
  v9 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v11,
    v10,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Internal::StateRepository::IProtocolStatics>,
    (__int64)&v12);
  winrt::check_hresult((int *)&v11, (int)v11, (__int64)&v8);
  v11 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  v8 = 0LL;
  if ( !v12 )
  {
    v5 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8);
  v5 = v8;
  if ( !v8 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  if ( v6 )
  {
    v8 = &qword_1808DBEB8;
    _InterlockedIncrement64(&qword_1808DBEB8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::StateRepository::Protocol,winrt::Windows::Internal::StateRepository::IProtocolStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DBEC0);
    }
    _lambda_1f6603b1e5c109f0f3ba4e8d321f694a_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::StateRepository::Protocol,winrt::Windows::Internal::StateRepository::IProtocolStatics>);
    _InterlockedDecrement64(&qword_1808DBEB8);
  }
  else
  {
    _lambda_1f6603b1e5c109f0f3ba4e8d321f694a_::operator()(a3, a2, &v11);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
