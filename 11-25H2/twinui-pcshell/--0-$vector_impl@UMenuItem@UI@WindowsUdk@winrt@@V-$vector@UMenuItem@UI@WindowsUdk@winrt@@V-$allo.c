/*
 * XREFs of ??0?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@QEAA@$$QEAV?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x1801E5238
 * Callers:
 *     ??$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@winrt@@YA?AU?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x1801E51E4 (--$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 * Callees:
 *     ??0?$producers_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$tuple@U?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@2345@U?$IIterable@UMenuItem@UI@WindowsUdk@winrt@@@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x1801E52A0 (--0-$producers_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@Windows.c)
 */

__int64 __fastcall winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax

  winrt::impl::producers_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>>::producers_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>>(
    a1 + 16,
    a2,
    a3,
    a2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v3 + 8) = 1LL;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>>::`vftable';
  v5 = v4[2];
  v4[2] = 0LL;
  v6 = v4[1];
  v4[1] = 0LL;
  v7 = *v4;
  *v4 = 0LL;
  *(_QWORD *)(v3 + 48) = v7;
  result = v3;
  *(_QWORD *)(v3 + 56) = v6;
  *(_QWORD *)(v3 + 64) = v5;
  return result;
}
