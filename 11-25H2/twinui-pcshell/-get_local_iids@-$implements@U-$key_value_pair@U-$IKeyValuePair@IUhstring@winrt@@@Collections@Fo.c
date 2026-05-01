/*
 * XREFs of ?get_local_iids@?$implements@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x18062EB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>;
  return a2;
}
