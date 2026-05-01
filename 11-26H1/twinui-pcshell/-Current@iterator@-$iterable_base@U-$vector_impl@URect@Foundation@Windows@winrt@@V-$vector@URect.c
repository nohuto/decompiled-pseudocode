/*
 * XREFs of ?Current@iterator@?$iterable_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AURect@Foundation@Windows@3@XZ @ 0x18047907C
 * Callers:
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1804808A0 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$vector_impl@URect@Foundation@Windows@winrt@@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338100 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x180339FFC (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

_OWORD *__fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect,winrt::impl::collection_version>::iterator::Current(
        _QWORD *a1,
        _OWORD *a2)
{
  __int128 *v4; // rax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  const struct winrt::impl::slim_source_location *v7; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 3),
    (const struct winrt::impl::collection_version *)(a1[4] + 40LL));
  v4 = (__int128 *)a1[5];
  if ( v4 == (__int128 *)a1[6] )
  {
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v9);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v7);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  v5 = *v4;
  result = a2;
  *a2 = v5;
  return result;
}
