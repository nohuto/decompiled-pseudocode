/*
 * XREFs of ?ReplaceAll@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAURect@Foundation@Windows@3@@Z @ 0x18046FB10
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Assign_counted_range@PEBURect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBURect@Foundation@Windows@winrt@@_K@Z @ 0x18046AAA4 (--$_Assign_counted_range@PEBURect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@w.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        char *a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 40));
  v4 = *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30);
  if ( v4 != *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x38) )
    *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x38) = v4;
  try
  {
    std::vector<winrt::Windows::Foundation::Rect>::_Assign_counted_range<winrt::Windows::Foundation::Rect const *>(
      (void **)((v3 & -(__int64)(v3 != -40)) + 48),
      a3,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
