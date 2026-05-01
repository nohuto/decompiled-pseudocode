/*
 * XREFs of ??$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@?$factory_cache_entry@UDeferral@Foundation@Windows@winrt@@UIDeferralFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@Z @ 0x1801EE8B8
 * Callers:
 *     ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x18028AF1C (-GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA-AUDeferr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIDeferralFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIDeferralFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1803CF9BC (--$get_activation_factory@UIDeferralFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIDeferralFact.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>::call<_lambda_05b02c468eda432e9e6db40beed076d3_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 *v5; // rbx
  _DWORD *v7; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-10h]
  __int64 *v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 *v11; // [rsp+88h] [rbp+38h] BYREF

  v10 = a1;
  v8[0] = 1;
  v8[1] = 27;
  v9 = L"Windows.Foundation.Deferral";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Foundation::IDeferralFactory>(&v10, &v7);
  v5 = v10;
  v11 = 0LL;
  if ( v10
    && ((*(void (__fastcall **)(__int64 *, __int64 *, __int64 **))*v10)(
          v10,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v11),
        v11) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
    v11 = &qword_1808D9F48;
    _InterlockedIncrement64(&qword_1808D9F48);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>,
            (signed __int64)v5,
            0LL) )
    {
      v5 = 0LL;
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808D9F50);
    }
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1808D9F48);
  }
  else
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &v10,
      a2,
      *a3);
  }
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  return a2;
}
