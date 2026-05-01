/*
 * XREFs of ??$create_and_initialize@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@impl@winrt@@YAPEAU?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@$$QEAV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x18066501C
 * Callers:
 *     ??0RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCState@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1806653AC (--0RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCStat.c)
 * Callees:
 *     ??0?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAA@XZ @ 0x180027030 (--0-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring@.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$tuple@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@UWindowId@UI@Windows@winrt@@@2345@U?$IIterable@UWindowId@UI@Windows@winrt@@@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x180665364 (--0-$producers_base@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@wi.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::UI::WindowId>>(
        __int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v10; // [rsp+38h] [rbp+10h]

  v10 = (char *)operator new(0x48uLL);
  winrt::impl::producers_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::WindowId>>>::producers_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::WindowId>>>(
    v10 + 16,
    v2,
    v3,
    v10);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v4 + 8, 1LL);
  winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>();
  *v5 = &winrt::impl::heap_implements<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>>::`vftable';
  v6 = a1[2];
  a1[2] = 0LL;
  v7 = a1[1];
  a1[1] = 0LL;
  v8 = *a1;
  *a1 = 0LL;
  v5[6] = v8;
  v5[7] = v7;
  v5[8] = v6;
  *v5 = &winrt::impl::heap_implements<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>>::`vftable';
  return v5;
}
