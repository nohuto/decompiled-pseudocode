/*
 * XREFs of ??1?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800B0058
 * Callers:
 *     _std::forward_list_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy_____::_Assign_unchecked_std::_Flist_unchecked_const_iterator_std::_Flist_val_std::_Flist_simple_types_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy______std::_Iterator_base0__std::_Default_sentinel__::_1_::dtor$0 @ 0x180163642 (_std--forward_list_wil--com_ptr_t_CEndpointStore_wil--err_returncode_policy__std--allocator_wil-.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x18001D0C0 (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 */

void __fastcall std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rax
  char *v2; // rbx
  char *v3; // rdx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    *v1 = 0LL;
    v2 = *(char **)(a1 + 16);
    while ( v2 )
    {
      v3 = v2;
      v2 = *(char **)v2;
      std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
        a1,
        v3);
    }
  }
}
