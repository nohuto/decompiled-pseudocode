/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1805F22F0
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1805F2D14 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805ECA84 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@-$_.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  volatile signed __int32 **v1; // rdx
  __int64 result; // rax

  v1 = (volatile signed __int32 **)a1[2];
  a1[2] = *v1;
  std::_List_node<std::pair<winrt::hstring const,bool>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(
    (__int64)a1,
    v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
