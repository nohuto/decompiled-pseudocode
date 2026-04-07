/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800863C0
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008CFDC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Tra.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009A76C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$com_ptr_t@VCBitmapSource.c)
 *     ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@PEAX@1@@Z @ 0x1800DF184 (--$emplace@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAX.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DF3E4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PE.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Udwm::Transitions::ShellTransitionType_winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_enum_winrt::Udwm::Transitions::ShellTransitionType_std::hash_enum_winrt::Udwm::Transitions::ShellTransitionType__std::equal_to_enum_winrt::Udwm::Transitions::ShellTransitionType____std::allocator_std::pair_enum_winrt::Udwm::Transitions::ShellTransitionType_const__winrt::Udwm::Transitions::ITransition____0___::_Try_emplace_enum_winrt::Udwm::Transitions::ShellTransitionType_const_&__::_1_::dtor$1 @ 0x1800E75AE (_std--_Hash_std--_Umap_traits_enum_winrt--Udwm--Transitions--ShellTransitionType_wi_ea_1800E75AE.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransition____0___::_Try_emplace_HWND_____const_&__::_1_::dtor$1 @ 0x1800E8BC0 (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransition_std--__ea_1800E8BC0.c)
 *     _std::_Hash_std::_Umap_traits__LARGE_INTEGER_void___std::_Uhash_compare__LARGE_INTEGER_std::hash__LARGE_INTEGER__std::equal_to__LARGE_INTEGER____std::allocator_std::pair__LARGE_INTEGER_const__void______0___::emplace_std::pair__LARGE_INTEGER_const__void______::_1_::dtor$1 @ 0x1800E958E (_std--_Hash_std--_Umap_traits__LARGE_INTEGER_void___std--_Uhash_compare__LARGE_INTEGER_std--hash.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, 0x20uLL);
}
