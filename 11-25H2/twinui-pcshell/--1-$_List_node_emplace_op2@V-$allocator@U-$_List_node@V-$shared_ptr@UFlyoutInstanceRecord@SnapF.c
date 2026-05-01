/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18058E3C8
 * Callers:
 *     ??$_Emplace@AEBV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$list@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@@Z @ 0x18058DAF0 (--$_Emplace@AEBV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@-$list@V-$shared_ptr@U.c)
 * Callees:
 *     ??_G?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAAPEAXI@Z @ 0x1801CAAB0 (--_G-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>::`scalar deleting destructor'(v2 + 16);
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(a1);
}
