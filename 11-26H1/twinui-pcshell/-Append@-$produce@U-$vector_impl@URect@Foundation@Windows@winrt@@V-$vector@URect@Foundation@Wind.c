/*
 * XREFs of ?Append@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180478BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1802199B4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>>::Append(
        __int64 a1,
        __int128 *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rcx
  __int128 *v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 40));
  v3 = (_QWORD *)((-(__int64)(v2 != -40) & v2) + 48);
  v4 = (__int128 *)v3[1];
  if ( v4 == (__int128 *)v3[2] )
  {
    try
    {
      std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(v3, v3[1], a2);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v6);
    }
  }
  else
  {
    *v4 = *a2;
    v3[1] += 16LL;
  }
  return 0LL;
}
