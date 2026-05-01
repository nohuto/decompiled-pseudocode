/*
 * XREFs of ?get_Size@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x180206520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // r9

  v2 = (a1 - 24) & -(__int64)(a1 != 0);
  *a2 = (__int64)(*(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x38) - *(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x30)) >> 4;
  return 0LL;
}
