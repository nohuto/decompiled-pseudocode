/*
 * XREFs of ??0?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@QEAA@$$QEAV?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@@Z @ 0x180337E50
 * Callers:
 *     ??$single_threaded_map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@winrt@@YA?AU?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@0@XZ @ 0x180337CBC (--$single_threaded_map@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@std@@V-$allocator@U-$pair@$$.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@@Z @ 0x1803375F4 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::`vftable';
  *(_QWORD *)(a1 + 24) = &winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,winrt::hstring>>::`vftable';
  *(_QWORD *)(a1 + 32) = &winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = &winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>::`vftable';
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>();
  *(_QWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 48) = *a2;
  *a2 = v4;
  v5 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = a2[1];
  a2[1] = v5;
  return a1;
}
