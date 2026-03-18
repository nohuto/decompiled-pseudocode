/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D88B4
 * Callers:
 *     ??$emplace_back@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAAEAUReceiverEntry@CProjectedShadowScene@@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x18027E1A0 (--$emplace_back@AEAPEAVCProjectedShadowReceiver@@@-$list@UReceiverEntry@CProjectedShadowScene@@V.c)
 * Callees:
 *     ??1ReceiverEntry@CProjectedShadowScene@@QEAA@XZ @ 0x1801A3FD8 (--1ReceiverEntry@CProjectedShadowScene@@QEAA@XZ.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    CProjectedShadowScene::ReceiverEntry::~ReceiverEntry((CProjectedShadowScene::ReceiverEntry *)(v2 + 16));
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(a1);
}
