/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008CFDC
 * Callers:
 *     ??$emplace@PEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800D6758 (--$emplace@PEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$_Hash@V-$_Umap_traits@PEA.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800D8830 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Udwm::Transitions::ShellTransitionType_winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_enum_winrt::Udwm::Transitions::ShellTransitionType_std::hash_enum_winrt::Udwm::Transitions::ShellTransitionType__std::equal_to_enum_winrt::Udwm::Transitions::ShellTransitionType____std::allocator_std::pair_enum_winrt::Udwm::Transitions::ShellTransitionType_const__winrt::Udwm::Transitions::ITransition____0___::_Try_emplace_enum_winrt::Udwm::Transitions::ShellTransitionType_const_&__::_1_::dtor$0 @ 0x1800E759C (_std--_Hash_std--_Umap_traits_enum_winrt--Udwm--Transitions--ShellTransitionType_winrt--Udwm--Tr.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::UserResizeVisual_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::UserResizeVisual____0___::emplace_HWND_____winrt::Udwm::Transitions::UserResizeVisual_const_&__::_1_::dtor$0 @ 0x1800E957C (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--UserResizeVisual_std--_Uhash_co.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransition____0___::_Try_emplace_HWND_____const_&__::_1_::dtor$0 @ 0x1800E96D2 (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransition_std--__ea_1800E96D2.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(v2 + 24));
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(a1);
}
