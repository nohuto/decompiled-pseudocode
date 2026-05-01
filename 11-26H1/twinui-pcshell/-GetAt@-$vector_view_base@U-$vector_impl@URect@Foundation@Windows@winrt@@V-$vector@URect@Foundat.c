/*
 * XREFs of ?GetAt@?$vector_view_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AURect@Foundation@Windows@2@I@Z @ 0x180479588
 * Callers:
 *     ?GetAt@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAURect@Foundation@Windows@3@@Z @ 0x1804794F0 (-GetAt@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Windo.c)
 *     ?GetAt@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAURect@Foundation@Windows@3@@Z @ 0x180479540 (-GetAt@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Fou_ea_180479540.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338100 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

_OWORD *__fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect,winrt::impl::collection_version>::GetAt(
        __int64 a1,
        _OWORD *a2,
        unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  _OWORD *result; // rax
  const struct winrt::impl::slim_source_location *v7; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v4 = *(_QWORD *)v3;
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 56LL;
  if ( a3 >= (unsigned int)((*(_QWORD *)v5 - v4) >> 4) )
  {
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v9);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v7);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  result = a2;
  *a2 = *(_OWORD *)(v4 + 16LL * a3);
  return result;
}
