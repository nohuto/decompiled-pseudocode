/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18007F3E8
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18007F3B8 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E0308 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@.c)
 *     _std::map_unsigned___int64_std::function_void___cdecl(bool)__std::less_unsigned___int64__std::allocator_std::pair_unsigned___int64_const__std::function_void___cdecl(bool)_______::_Try_emplace_unsigned___int64__::_1_::dtor$2 @ 0x18016378E (_std--map_unsigned___int64_std--function_void___cdecl(bool)__std--less_unsigned___int64__std--al.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned___int64_const__std::function_void___cdecl(void)____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned___int64_const__std::function_void___cdecl(void)____void________std::piecewise_construct_t_const_&_std::tuple_unsigned___int64_&&__std::tuple_____::_1_::dtor$1 @ 0x180168900 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_unsigned___int64_const__std--func.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x68);
}
