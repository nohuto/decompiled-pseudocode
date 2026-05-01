/*
 * XREFs of ??$create_and_initialize@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@impl@winrt@@YAPEAU?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@$$QEAV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x18063F49C
 * Callers:
 *     ??0RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCState@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18063F834 (--0RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCStat.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$tuple@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@UWindowId@UI@Windows@winrt@@@2345@U?$IIterable@UWindowId@UI@Windows@winrt@@@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x18063F7EC (--0-$producers_base@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@wi.c)
 */

__int64 __fastcall winrt::impl::create_and_initialize<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::UI::WindowId>>(
        __int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v9; // [rsp+38h] [rbp+10h]

  v9 = (char *)operator new(0x48uLL);
  winrt::impl::producers_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::WindowId>>>::producers_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::WindowId>>>(
    v9 + 16,
    v2,
    v3,
    v9);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v4 + 8) = 1LL;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)v4 = &winrt::impl::heap_implements<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>>::`vftable';
  v5 = a1[2];
  a1[2] = 0LL;
  v6 = a1[1];
  a1[1] = 0LL;
  v7 = *a1;
  *a1 = 0LL;
  *(_QWORD *)(v4 + 48) = v7;
  *(_QWORD *)(v4 + 56) = v6;
  *(_QWORD *)(v4 + 64) = v5;
  *(_QWORD *)v4 = &winrt::impl::heap_implements<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>>::`vftable';
  return v4;
}
