/*
 * XREFs of ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180617384
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x18061184C (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compa.c)
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@_N@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x180611990 (--$emplace@U-$pair@$$CBUhstring@winrt@@_N@std@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uh.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180616ABC (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Rehash_for_1(
        __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  v1 = std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Desired_grow_bucket_count(
         a1,
         qword_1808DEF10 + 1);
  return std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Forced_rehash(
           v2,
           v1);
}
