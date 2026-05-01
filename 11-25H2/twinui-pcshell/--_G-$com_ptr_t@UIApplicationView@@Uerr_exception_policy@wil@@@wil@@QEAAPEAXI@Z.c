/*
 * XREFs of ??_G?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x180180004
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x180173A04 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18017FF24 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18017FF5C (-_Change_array@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804DFD04 (-erase@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18069A2AC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_exception_p.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::`scalar deleting destructor'(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
