/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D88E4
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D88B4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEA.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, 0x78uLL);
}
