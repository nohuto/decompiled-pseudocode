/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@@std@@QEAA@XZ @ 0x180160384
 * Callers:
 *     ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x18005188C (-GetDismissableClients@LightDismissProcessor@@AEAA-AV-$vector@PEAVLightDismissClientProxy@@V-$al.c)
 *     ??$_Construct_n@$$V@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAX_K@Z @ 0x1801A1D70 (--$_Construct_n@$$V@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x180054798 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<LightDismissClientProxy *>>::~_Tidy_guard<std::vector<LightDismissClientProxy *>>(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>(v1);
  return result;
}
