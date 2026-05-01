/*
 * XREFs of ??_G?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAAPEAXI@Z @ 0x1801C2E80
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1801C2DCC (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     ?erase@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@0@Z @ 0x1801C2E04 (-erase@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$shared.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805B210C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805B251C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$shared_ptr@UFlyoutInstanceRecord@SnapF.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>::`scalar deleting destructor'(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  return a1;
}
