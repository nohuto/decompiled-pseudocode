/*
 * XREFs of ??$emplace_back@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAAEAUReceiverEntry@CProjectedShadowScene@@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x18027E1A0
 * Callers:
 *     ?ProcessSetReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E458 (-ProcessSetReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SE.c)
 * Callees:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D88B4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEA.c)
 *     ??$?0AEAPEAVCProjectedShadowReceiver@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x18020946C (--$-0AEAPEAVCProjectedShadowReceiver@@@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@URece.c)
 */

_QWORD *__fastcall std::list<CProjectedShadowScene::ReceiverEntry>::emplace_back<CProjectedShadowReceiver * &>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  v2 = *a1;
  if ( a1[1] == 0x222222222222222LL )
    std::_Xlength_error("list too long");
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    &v7,
    (__int64)a1,
    a2);
  ++a1[1];
  v4 = v8;
  v5 = *(_QWORD **)(v2 + 8);
  v8 = 0LL;
  *v4 = v2;
  v4[1] = v5;
  *(_QWORD *)(v2 + 8) = v4;
  *v5 = v4;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>((__int64)&v7);
  return v4 + 2;
}
