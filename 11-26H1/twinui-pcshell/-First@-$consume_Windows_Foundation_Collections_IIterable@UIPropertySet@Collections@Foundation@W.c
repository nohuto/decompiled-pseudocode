/*
 * XREFs of ?First@?$consume_Windows_Foundation_Collections_IIterable@UIPropertySet@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@2345@@impl@winrt@@QEBA@XZ @ 0x180346E38
 * Callers:
 *     ??$get_begin_iterator@UIPropertySet@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@1@AEBUIPropertySet@3451@@Z @ 0x18033FE04 (--$get_begin_iterator@UIPropertySet@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA-AU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IPropertySet,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Foundation::IInspectable>>::First(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF

  v12 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v11 = 0LL;
    v4 = (**v3)(
           v3,
           &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Foundation::IInspectable>>>,
           &v11);
    v5 = v11;
    v8 = v11;
  }
  else
  {
    v4 = 0;
    v8 = 0LL;
    v5 = 0LL;
  }
  v9 = 0;
  v10 = 0LL;
  winrt::check_hresult((int *)&v11, v4, (__int64)&v9);
  v9 = 0;
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v12);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  *a2 = v12;
  return a2;
}
