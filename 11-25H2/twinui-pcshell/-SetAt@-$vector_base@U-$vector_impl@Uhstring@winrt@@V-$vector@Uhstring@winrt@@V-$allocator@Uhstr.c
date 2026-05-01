/*
 * XREFs of ?SetAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXIAEBUhstring@2@@Z @ 0x1805F860C
 * Callers:
 *     ?SetAt@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805F85D0 (-SetAt@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring@.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800AC148 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802CFC54 (--1-$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??$assign@AEAUhstring@winrt@@@?$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@Z @ 0x180337E74 (--$assign@AEAUhstring@winrt@@@-$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338588 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::SetAt(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rbx
  unsigned int v7; // r8d
  const struct winrt::impl::slim_source_location *v8; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+48h] [rbp-20h] BYREF

  v9[8] = 0;
  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v4 + 8) - *(_QWORD *)v4) >> 3) )
  {
    v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v11);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v8);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v5 = (__int64)(a1 + 2);
  if ( !a1 )
    v5 = 48LL;
  v6 = (__int64 *)(*(_QWORD *)v5 + 8LL * a2);
  winrt::impl::removed_value<winrt::hstring,void>::assign<winrt::hstring &>((__int64)v9, v6);
  winrt::hstring::operator=((struct winrt::impl::hstring_header **)v6, a3, v7);
  std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>((__int64)v9);
}
