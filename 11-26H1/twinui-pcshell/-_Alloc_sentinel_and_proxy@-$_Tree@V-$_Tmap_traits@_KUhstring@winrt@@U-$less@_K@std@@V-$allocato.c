/*
 * XREFs of ?_Alloc_sentinel_and_proxy@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180652AA8
 * Callers:
 *     ??0?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x180648604 (--0-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhstring@winrt@@@std@@@4@@std.c)
 *     ??0?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@QEAA@$$QEAV?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@@Z @ 0x180648634 (--0-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 *     ??0?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@QEAA@$$QEAV?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@@Z @ 0x1806486D4 (--0-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V-$map@Uhstring@winrt@@URem.c)
 *     ??0?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@QEAA@$$QEAV?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@@Z @ 0x180648774 (--0-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800CDD58 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Alloc_sentinel_and_proxy(
        _QWORD *a1)
{
  unsigned __int64 size_of; // rax
  _QWORD *result; // rax

  size_of = std::_Get_size_of_n<48>(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  *a1 = result;
  return result;
}
