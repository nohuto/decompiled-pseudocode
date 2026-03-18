/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180267A80
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180267C44 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@IUInput@CFilterEffect@@V-$_Uhash_compare@IU-$hash@I@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)a1[2];
  a1[2] = *v2;
  std::_Deallocate<16>(v2, 0x38uLL);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
