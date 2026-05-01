/*
 * XREFs of ?Append@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x18061A730
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_back_with_unused_capacity@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAAEAUhstring@winrt@@AEBU23@@Z @ 0x180618814 (--$_Emplace_back_with_unused_capacity@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@.c)
 *     ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x180618840 (--$_Emplace_reallocate@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::hstring>>::Append(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  volatile signed __int32 **v5; // rdx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  try
  {
    v3 = (a1 - 16) & -(__int64)(a1 != 0);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 40));
    v4 = (-(__int64)(v3 != -40) & v3) + 48;
    v5 = *(volatile signed __int32 ***)(v4 + 8);
    if ( v5 == *(volatile signed __int32 ***)(v4 + 16) )
      std::vector<winrt::hstring>::_Emplace_reallocate<winrt::hstring const &>(
        (volatile signed __int32 ***)v4,
        v5,
        (const struct winrt::hstring *)&v8);
    else
      std::vector<winrt::hstring>::_Emplace_back_with_unused_capacity<winrt::hstring const &>(
        v4,
        (const struct winrt::hstring *)&v8,
        a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
