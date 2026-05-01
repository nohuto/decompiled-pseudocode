/*
 * XREFs of ??0?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAA@XZ @ 0x1803383E4
 * Callers:
 *     ??$single_threaded_map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@winrt@@YA?AU?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@0@XZ @ 0x1803381F0 (--$single_threaded_map@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@std@@V-$allocator@U-$pair@$$.c)
 *     ?Clear@?$produce@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1803387D0 (-Clear@-$produce@U-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring@winrt@@U12@U-$less@Uhstring@win.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@@Z @ 0x180337AF0 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@.c)
 */

_QWORD *__fastcall std::map<winrt::hstring,winrt::hstring>::map<winrt::hstring,winrt::hstring>(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>();
  return a1;
}
