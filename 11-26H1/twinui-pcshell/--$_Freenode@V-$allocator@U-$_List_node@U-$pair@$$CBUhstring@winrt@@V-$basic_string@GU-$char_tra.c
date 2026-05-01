/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002C9A0
 * Callers:
 *     ??$_Erase@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUhstring@winrt@@@Z @ 0x1802A3A74 (--$_Erase@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_trai.c)
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x18002D1D4 (--1-$pair@$$CBUhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std.c)
 */

__int64 __fastcall std::_List_node<std::pair<winrt::hstring const,std::wstring>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::wstring>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  std::pair<winrt::hstring const,std::wstring>::~pair<winrt::hstring const,std::wstring>(a2 + 16);
  return std::_Deallocate<16>(a2, 56LL);
}
