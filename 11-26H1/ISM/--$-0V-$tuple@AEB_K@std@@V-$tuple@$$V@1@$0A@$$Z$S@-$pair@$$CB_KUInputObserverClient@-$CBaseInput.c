/*
 * XREFs of ??$?0V?$tuple@AEB_K@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18013BC70
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18013BD0C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ____0V__tuple_AEB_K_std__V__tuple___V_1__0A___Z_S___pair___CB_KUInputObserverClient___CBaseInputObserverServer__0L____std__AEAA_AEAV__tuple_AEB_K_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        _QWORD *a1,
        _QWORD **a2)
{
  _QWORD *result; // rax

  result = a1;
  *a1 = **a2;
  a1[2] = 0LL;
  a1[1] = 0LL;
  return result;
}
