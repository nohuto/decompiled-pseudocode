/*
 * XREFs of ?Clear@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x180478C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>>::Clear(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 40));
  v2 = *(_QWORD *)((v1 & ((unsigned __int128)-(__int128)(unsigned __int64)(v1 + 40) >> 64)) + 0x30);
  if ( v2 != *(_QWORD *)((v1 & ((unsigned __int128)-(__int128)(unsigned __int64)(v1 + 40) >> 64)) + 0x38) )
    *(_QWORD *)((v1 & ((unsigned __int128)-(__int128)(unsigned __int64)(v1 + 40) >> 64)) + 0x38) = v2;
  return 0LL;
}
