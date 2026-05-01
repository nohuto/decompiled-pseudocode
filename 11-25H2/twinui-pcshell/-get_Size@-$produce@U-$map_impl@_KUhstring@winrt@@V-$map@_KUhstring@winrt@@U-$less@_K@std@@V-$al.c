/*
 * XREFs of ?get_Size@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x18033A9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  *a2 = *(_DWORD *)((v2 & -(__int64)(v2 != -40)) + 0x38);
  return 0LL;
}
