/*
 * XREFs of ?IndexOf@?$vector_view_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA_NAEBUUri@Foundation@Windows@2@AEAI@Z @ 0x1805D34C4
 * Callers:
 *     ?IndexOf@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x1805D3430 (-IndexOf@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Windo.c)
 *     ?IndexOf@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x1805D3480 (-IndexOf@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Fou_ea_1805D3480.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

bool __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri,winrt::impl::collection_version>::IndexOf(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *),
        _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rbx

  v3 = a1 + 8;
  v4 = a1 + 16;
  if ( !a1 )
    v3 = 48LL;
  if ( !a1 )
    v4 = 56LL;
  v7 = *(_QWORD **)v3;
  v8 = *(_QWORD **)v4;
  while ( v7 != v8 && !winrt::Windows::Foundation::operator==(a2, v7) )
    ++v7;
  v9 = ((__int64)v7 - *(_QWORD *)v3) >> 3;
  *a3 = v9;
  return (unsigned int)v9 < (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v3) >> 3);
}
