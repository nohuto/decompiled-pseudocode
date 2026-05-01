/*
 * XREFs of ??0?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@I@1@@Z @ 0x180135E6C
 * Callers:
 *     ??0?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@QEAA@XZ @ 0x180136B94 (--0-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@I@2@@std@@QEAA@XZ.c)
 * Callees:
 *     ??0?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800D4458 (--0-$list@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@U.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801370B0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_1801370B0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  std::list<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::list<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>((_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned int>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 24,
    16LL,
    *(_QWORD *)(a1 + 8));
  return a1;
}
