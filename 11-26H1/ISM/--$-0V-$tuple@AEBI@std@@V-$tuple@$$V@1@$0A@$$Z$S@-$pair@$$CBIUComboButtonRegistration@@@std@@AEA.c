/*
 * XREFs of ??$?0V?$tuple@AEBI@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBIUComboButtonRegistration@@@std@@AEAA@AEAV?$tuple@AEBI@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1801A9844
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801A9E60 (--$_Try_emplace@AEBI$$V@-$map@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

_DWORD *__fastcall ____0V__tuple_AEBI_std__V__tuple___V_1__0A___Z_S___pair___CBIUComboButtonRegistration___std__AEAA_AEAV__tuple_AEBI_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        _DWORD *a1,
        _DWORD **a2)
{
  *a1 = **a2;
  memset_0(a1 + 2, 0, 0x48uLL);
  return a1;
}
