/*
 * XREFs of ??$?0V?$tuple@AEBK@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@AEAA@AEAV?$tuple@AEBK@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18014BF3C
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18014C99C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 * Callees:
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800886C4 (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

// Hidden C++ exception states: #wind=6
_DWORD *__fastcall ____0V__tuple_AEBK_std__V__tuple___V_1__0A___Z_S___pair___CBKUMessageInfo_DragNDropProcessor___std__AEAA_AEAV__tuple_AEBK_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        _DWORD *a1,
        _DWORD **a2)
{
  _DWORD *v3; // rbx

  *a1 = **a2;
  v3 = a1 + 2;
  memset_0(a1 + 2, 0, 0x78uLL);
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>((__int64)(v3 + 14));
  return a1;
}
