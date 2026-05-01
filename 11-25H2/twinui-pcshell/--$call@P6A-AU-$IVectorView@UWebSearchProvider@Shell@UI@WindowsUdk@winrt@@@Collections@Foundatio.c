/*
 * XREFs of ??$call@P6A?AU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIWebSearchProviderStatics2@Shell@UI@WindowsUdk@5@@Z@?$factory_cache_entry@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@UIWebSearchProviderStatics2@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@2@AEBUIWebSearchProviderStatics2@Shell@UI@WindowsUdk@2@@Z@Z @ 0x18039FD18
 * Callers:
 *     ?FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1803A7D98 (-FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2>::call<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider> (*)(winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2 const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-29h] BYREF
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp-21h] BYREF
  __int64 v8; // [rsp+38h] [rbp-19h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h] BYREF
  __int64 v10[3]; // [rsp+50h] [rbp-1h] BYREF
  int v11; // [rsp+68h] [rbp+17h] BYREF
  __int128 v12; // [rsp+70h] [rbp+1Fh]
  __int64 v13[5]; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+B8h] [rbp+67h] BYREF
  int v15; // [rsp+D0h] [rbp+7Fh] BYREF

  v14 = a1;
  v10[0] = (__int64)L"WindowsUdk.UI.Shell.WebSearchProvider";
  v10[1] = 37LL;
  winrt::param::hstring::hstring((__int64)v13, v10);
  v7 = 0LL;
  v11 = 0;
  v12 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v14,
    v13,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2>,
    (__int64)&v7);
  winrt::check_hresult(&v15, v14, (__int64)&v11);
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
  if ( v7 && (v8 = 0LL, (**v7)(v7, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8), (v9 = v8) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
    v10[2] = (__int64)&qword_18089B238;
    _InterlockedIncrement64(&qword_18089B238);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2>,
            (signed __int64)v6,
            0LL) )
    {
      v6 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089B240);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2>);
    _InterlockedDecrement64(&qword_18089B238);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v6);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return a2;
}
