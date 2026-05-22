/*
 * XREFs of ??$?0V?$tuple@$$QEAG@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@AEAA@AEAV?$tuple@$$QEAG@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18019222C
 * Callers:
 *     ??$_Try_emplace@G$$V@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x1801923D8 (--$_Try_emplace@G$$V@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ____0V__tuple___QEAG_std__V__tuple___V_1__0A___Z_S___pair___CBGV__unique_ptr___BY0A_EU__default_delete___BY0A_E_std___std___std__AEAA_AEAV__tuple___QEAG_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        __int64 a1,
        _WORD **a2)
{
  __int64 result; // rax

  result = a1;
  *(_WORD *)a1 = **a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
