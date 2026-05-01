/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x180627E60
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::implements<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  v4[1] = 82LL;
  v4[0] = L"Windows.Foundation.Collections.IMap`2<String, Windows.Internal.Shell.RemoteSystem>";
  winrt::hstring::hstring(a2, (__int64)v4);
  return a2;
}
