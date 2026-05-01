/*
 * XREFs of ?RemoveAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXI@Z @ 0x18061C384
 * Callers:
 *     ?RemoveAt@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x18061C350 (-RemoveAt@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstri.c)
 * Callees:
 *     ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802BFF74 (--1-$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??$assign@AEAUhstring@winrt@@@?$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@Z @ 0x180337984 (--$assign@AEAUhstring@winrt@@@-$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338100 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?erase@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@2@@Z @ 0x18061CA98 (-erase@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@QEAA-AV-$_Vector_iterat.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::RemoveAt(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  const struct winrt::impl::slim_source_location *v4; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v7[32]; // [rsp+48h] [rbp-20h] BYREF
  char v8; // [rsp+70h] [rbp+8h] BYREF

  v5[8] = 0;
  v2 = (__int64)(a1 + 2);
  if ( !a1 )
    v2 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v2 + 8) - *(_QWORD *)v2) >> 3) )
  {
    v4 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v7);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v4);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v3 = (__int64 *)(*(_QWORD *)v2 + 8LL * a2);
  winrt::impl::removed_value<winrt::hstring,void>::assign<winrt::hstring &>((__int64)v5, v3);
  std::vector<winrt::hstring>::erase(v2, &v8, v3);
  std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>((__int64)v5);
}
