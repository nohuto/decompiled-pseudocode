/*
 * XREFs of ??$?0V?$tuple@AEBUhstring@winrt@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@AEAA@AEAV?$tuple@AEBUhstring@winrt@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x180661754
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x180662298 (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$u_ea_180662298.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x18057D694 (--0-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@_K@2@@std@@QEAA@XZ.c)
 */

winrt::hstring *__fastcall ____0V__tuple_AEBUhstring_winrt___std__V__tuple___V_1__0A___Z_S___pair___CBUhstring_winrt__V__unordered_set__KU__hash__K_std__U__equal_to__K_2_V__allocator__K_2__std___std__AEAA_AEAV__tuple_AEBUhstring_winrt___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        winrt::hstring *a1,
        const struct winrt::hstring **a2,
        unsigned int a3)
{
  winrt::hstring::hstring(a1, *a2, a3);
  std::unordered_set<unsigned __int64>::unordered_set<unsigned __int64>((__int64)a1 + 8);
  return a1;
}
