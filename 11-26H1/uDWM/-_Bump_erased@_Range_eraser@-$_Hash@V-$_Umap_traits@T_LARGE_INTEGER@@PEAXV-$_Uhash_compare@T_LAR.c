/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800E4BCC
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800E4DAC (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)a1[2];
  a1[2] = *v2;
  std::_Deallocate<16>(v2, 0x20uLL);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
