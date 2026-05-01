/*
 * XREFs of ?InsertAt@?$vector_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@@winrt@@QEAAXIAEBURect@Foundation@Windows@2@@Z @ 0x18047A354
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@@Z @ 0x18047A320 (-InsertAt@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Wi.c)
 * Callees:
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1802199B4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338100 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

unsigned __int64 __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect>::InsertAt(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int128 *a3)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int128 *v6; // r9
  __m128i *v7; // rbx
  __m128i v8; // xmm6
  const struct winrt::impl::slim_source_location *v9; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-30h] BYREF

  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  result = (__int64)(*(_QWORD *)(v4 + 8) - *(_QWORD *)v4) >> 4;
  if ( a2 > result )
  {
    v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v11);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v9);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v6 = *(__int128 **)(v4 + 8);
  v7 = (__m128i *)(*(_QWORD *)v4 + 16LL * a2);
  if ( v6 == *(__int128 **)(v4 + 16) )
    return (unsigned __int64)std::vector<tagRECT>::_Emplace_reallocate<tagRECT>((_QWORD *)v4, (__int64)v7, a3);
  if ( v7 == (__m128i *)v6 )
  {
    *v6 = *a3;
    *(_QWORD *)(v4 + 8) += 16LL;
  }
  else
  {
    v8 = _mm_loadu_si128((const __m128i *)a3);
    *v6 = *(v6 - 1);
    *(_QWORD *)(v4 + 8) += 16LL;
    result = (unsigned __int64)memmove_0(&v7[1], v7, (char *)v6 - (char *)v7 - 16);
    *v7 = v8;
  }
  return result;
}
