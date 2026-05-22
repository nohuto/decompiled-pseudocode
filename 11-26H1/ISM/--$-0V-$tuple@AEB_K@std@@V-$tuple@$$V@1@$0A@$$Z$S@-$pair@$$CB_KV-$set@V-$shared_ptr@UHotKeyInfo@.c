/*
 * XREFs of ??$?0V?$tuple@AEB_K@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1801CD8AC
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1801CE550 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$set@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_ptr@U.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@@Z @ 0x1801CDBF4 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_.c)
 */

_QWORD *__fastcall ____0V__tuple_AEB_K_std__V__tuple___V_1__0A___Z_S___pair___CB_KV__set_V__shared_ptr_UHotKeyInfo___std__U__less_V__shared_ptr_UHotKeyInfo___std___2_V__allocator_V__shared_ptr_UHotKeyInfo___std___2__std___std__AEAA_AEAV__tuple_AEB_K_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        _QWORD *a1,
        _QWORD **a2)
{
  *a1 = **a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>();
  return a1;
}
