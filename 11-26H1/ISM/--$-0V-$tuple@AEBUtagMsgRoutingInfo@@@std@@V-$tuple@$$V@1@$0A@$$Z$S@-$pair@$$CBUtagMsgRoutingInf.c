/*
 * XREFs of ??$?0V?$tuple@AEBUtagMsgRoutingInfo@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@AEAA@AEAV?$tuple@AEBUtagMsgRoutingInfo@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1801A1F6C
 * Callers:
 *     ??$?0AEBUtagMsgRoutingInfo@@$$Z$$V@?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBUtagMsgRoutingInfo@@@1@V?$tuple@$$V@1@@Z @ 0x180032148 (--$-0AEBUtagMsgRoutingInfo@@$$Z$$V@-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@QEAA@U.c)
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1801A2494 (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ____0V__tuple_AEBUtagMsgRoutingInfo___std__V__tuple___V_1__0A___Z_S___pair___CBUtagMsgRoutingInfo__V__ComPtr_UIRemoteViewHitTestClient___WRL_Microsoft___std__AEAA_AEAV__tuple_AEBUtagMsgRoutingInfo___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        __int64 a1,
        _OWORD **a2)
{
  _OWORD *v2; // rax
  __int64 v3; // xmm0_8
  __int64 result; // rax

  v2 = *a2;
  *(_OWORD *)a1 = **a2;
  *(_OWORD *)(a1 + 16) = v2[1];
  v3 = *((_QWORD *)v2 + 4);
  result = a1;
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
