/*
 * XREFs of ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B5ACC
 * Callers:
 *     ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B5B98 (--$_Assign_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@UKeyEv.c)
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B5C50 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_typ.c)
 * Callees:
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180078FC8 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  _OWORD *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( a2 != a3 )
  {
    v4 = a2;
    v7 = *a1;
    v8 = 0LL;
    if ( a1[1] )
      goto LABEL_5;
    v8 = 0LL;
    v6 = std::_Allocate<16,std::_Default_allocate_traits>(0x30uLL);
    v6[1] = *((_OWORD *)v4 + 1);
    v6[2] = *((_OWORD *)v4 + 2);
    a1[3] = (__int64)v6;
    while ( 1 )
    {
      a1[2] = (__int64)v6;
      ++a1[1];
      v4 = (__int64 *)*v4;
      v8 = 0LL;
LABEL_5:
      if ( v4 == a3 )
        break;
      v8 = 0LL;
      v6 = std::_Allocate<16,std::_Default_allocate_traits>(0x30uLL);
      v6[1] = *((_OWORD *)v4 + 1);
      v6[2] = *((_OWORD *)v4 + 2);
      *(_QWORD *)a1[2] = v6;
      *((_QWORD *)v6 + 1) = a1[2];
    }
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>((__int64)&v7);
  }
}
