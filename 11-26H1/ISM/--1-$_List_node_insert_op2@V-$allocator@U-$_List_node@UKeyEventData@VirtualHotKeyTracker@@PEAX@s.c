/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801B5FC0
 * Callers:
 *     ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B5B98 (--$_Assign_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@UKeyEv.c)
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B5C50 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_typ.c)
 *     _std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData___::_Assign_unchecked_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData____std::_Iterator_base0__std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData____std::_Iterator_base0____::_1_::dtor$0 @ 0x1801DD03F (_std--list_VirtualHotKeyTracker--KeyEventData_std--allocator_VirtualHotKeyTracker--KeyEventData_.c)
 *     _std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData___::_Construct_range_unchecked_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData____std::_Iterator_base0__std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData____std::_Iterator_base0____::_1_::dtor$0 @ 0x1801DD051 (_std--list_VirtualHotKeyTracker--KeyEventData_std--allocator_VirtualHotKeyTracker--_ea_1801DD051.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0LL;
    **(_QWORD **)(a1 + 16) = 0LL;
    v1 = *(_QWORD **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      std::_Deallocate<16>(v2, (struct std::nothrow_t *)0x30);
    }
  }
}
