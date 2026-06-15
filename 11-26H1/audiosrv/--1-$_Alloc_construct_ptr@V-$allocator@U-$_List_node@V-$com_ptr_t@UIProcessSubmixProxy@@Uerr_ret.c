/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800BB624
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800BB648 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_r.c)
 *     _std::_Hash_std::_Uset_traits_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::_Uhash_compare_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::hash_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____std::equal_to_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____0___::emplace_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::dtor$1 @ 0x180166B4E (_std--_Hash_std--_Uset_traits_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncod_ea_180166B4E.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x18);
}
