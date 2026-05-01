/*
 * XREFs of ?get_Key@?$produce@U?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_K@Z @ 0x18062EA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>::get_Key(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  *a2 = *(_QWORD *)v2;
  return 0LL;
}
