/*
 * XREFs of ??0?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@QEAA@$$QEAV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x1800287E0
 * Callers:
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800291B0 (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ??0?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAA@XZ @ 0x180027030 (--0-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring@.c)
 *     ??0?$producers_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$tuple@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@2345@U?$IIterable@URect@Foundation@Windows@winrt@@@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x180027048 (--0-$producers_base@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Wi.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r10
  __int64 *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *result; // rax

  winrt::impl::producers_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Rect>>>::producers_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Rect>>>(
    a1 + 16,
    a2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v2 + 8, 1LL);
  winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>();
  *v3 = &winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>::`vftable';
  v5 = v4[2];
  v4[2] = 0LL;
  v6 = v4[1];
  v4[1] = 0LL;
  v7 = *v4;
  *v4 = 0LL;
  v3[6] = v7;
  result = v3;
  v3[7] = v6;
  v3[8] = v5;
  return result;
}
