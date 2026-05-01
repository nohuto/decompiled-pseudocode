/*
 * XREFs of ?Append@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1805F5FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_back_with_unused_capacity@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAAEAUhstring@winrt@@AEBU23@@Z @ 0x1805F40C0 (--$_Emplace_back_with_unused_capacity@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@.c)
 *     ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x1805F40EC (--$_Emplace_reallocate@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::hstring>>::Append(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  volatile signed __int32 ***v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  try
  {
    v2 = (a1 - 16) & -(__int64)(a1 != 0);
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 40));
    v3 = v2 & ((unsigned __int128)-(__int128)(unsigned __int64)(v2 + 40) >> 64);
    v4 = (volatile signed __int32 ***)(v3 + 48);
    if ( *(_QWORD *)(v3 + 56) == *(_QWORD *)(v3 + 64) )
      std::vector<winrt::hstring>::_Emplace_reallocate<winrt::hstring const &>(
        v4,
        *(volatile signed __int32 ***)(v3 + 56),
        (const struct winrt::hstring *)&v7);
    else
      std::vector<winrt::hstring>::_Emplace_back_with_unused_capacity<winrt::hstring const &>(
        (__int64)v4,
        (const struct winrt::hstring *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
