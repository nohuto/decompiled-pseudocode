/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBUhstring@winrt@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUhstring@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1805EB45C
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x180045510 (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@G.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::wstring>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::wstring>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const struct winrt::hstring **a4)
{
  char *v6; // rax
  char *v7; // rbx

  *a1 = a2;
  a1[1] = 0LL;
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v6;
  v7 = v6 + 16;
  winrt::hstring::hstring((winrt::hstring *)(v6 + 16), *a4);
  *(_OWORD *)(v7 + 8) = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 4) = 7LL;
  *((_WORD *)v7 + 4) = 0;
  return a1;
}
