/*
 * XREFs of ?Append@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1805AA2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_back_with_unused_capacity@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAAEAUMenuItem@UI@WindowsUdk@winrt@@AEBU2345@@Z @ 0x180488264 (--$_Emplace_back_with_unused_capacity@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@W.c)
 *     ??$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUUri@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x1805A06C0 (--$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::Append(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 **v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 40));
  v3 = v2 & ((unsigned __int128)-(__int128)(unsigned __int64)(v2 + 40) >> 64);
  v4 = (__int64 **)(v3 + 48);
  if ( *(_QWORD *)(v3 + 56) == *(_QWORD *)(v3 + 64) )
    std::vector<winrt::Windows::Foundation::Uri>::_Emplace_reallocate<winrt::Windows::Foundation::Uri const &>(
      v4,
      *(__int64 **)(v3 + 56),
      &v6);
  else
    std::vector<winrt::WindowsUdk::UI::MenuItem>::_Emplace_back_with_unused_capacity<winrt::WindowsUdk::UI::MenuItem const &>(
      (__int64)v4,
      &v6);
  return 0LL;
}
