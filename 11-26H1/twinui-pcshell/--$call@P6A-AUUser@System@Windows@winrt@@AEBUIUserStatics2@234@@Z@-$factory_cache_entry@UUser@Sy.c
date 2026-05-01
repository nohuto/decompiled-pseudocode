/*
 * XREFs of ??$call@P6A?AUUser@System@Windows@winrt@@AEBUIUserStatics2@234@@Z@?$factory_cache_entry@UUser@System@Windows@winrt@@UIUserStatics2@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUser@System@Windows@2@AEBUIUserStatics2@452@@Z@Z @ 0x18058FCD4
 * Callers:
 *     ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180591DEC (-IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F1208 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::User,winrt::Windows::System::IUserStatics2>::call<winrt::Windows::System::User (*)(winrt::Windows::System::IUserStatics2 const &)>(
        __int64 *a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 *v5; // rax
  char v6; // di
  __int64 v8[2]; // [rsp+28h] [rbp-48h] BYREF
  int v9; // [rsp+38h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h]
  __int64 v11[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v12; // [rsp+90h] [rbp+20h] BYREF
  signed __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  v12 = a1;
  v8[0] = (__int64)L"Windows.System.User";
  v8[1] = 19LL;
  winrt::param::hstring::hstring((__int64)v11, v8);
  v8[0] = 0LL;
  v9 = 0;
  v10 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v12,
    v11,
    (__int64)&winrt::impl::guid_v<winrt::Windows::System::IUserStatics2>,
    (__int64)v8);
  winrt::check_hresult((int *)&v12, (int)v12, (__int64)&v9);
  v13 = v8[0];
  v12 = 0LL;
  if ( !v8[0] )
  {
    v5 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  (**(void (__fastcall ***)(__int64, __int64 *, __int64 **))v8[0])(
    v8[0],
    &winrt::impl::guid_v<winrt::impl::IAgileObject>,
    &v12);
  v5 = v12;
  if ( !v12 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  if ( v6 )
  {
    v12 = &qword_1808DB698;
    _InterlockedIncrement64(&qword_1808DB698);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::User,winrt::Windows::System::IUserStatics2>,
            v13,
            0LL) )
    {
      v13 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB6A0);
    }
    (*a3)(a2, &winrt::impl::factory_cache_entry_v<winrt::Windows::System::User,winrt::Windows::System::IUserStatics2>);
    _InterlockedDecrement64(&qword_1808DB698);
  }
  else
  {
    (*a3)(a2, &v13);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  return a2;
}
