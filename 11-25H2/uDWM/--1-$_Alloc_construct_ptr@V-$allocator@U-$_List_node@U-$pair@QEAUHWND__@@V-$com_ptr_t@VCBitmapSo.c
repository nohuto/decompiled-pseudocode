/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008C318
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180099798 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellTransitionType@Transit.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D9CE4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Tra.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D9D14 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmap.c)
 *     _std::list_std::weak_ptr_CWindowBorder::CCachedBorderBrush__std::allocator_std::weak_ptr_CWindowBorder::CCachedBorderBrush_____::emplace_std::shared_ptr_CWindowBorder::CCachedBorderBrush__&__::_1_::dtor$1 @ 0x1800EB6B6 (_std--list_std--weak_ptr_CWindowBorder--CCachedBorderBrush__std--allocator_std--weak_ptr_CWindow.c)
 *     _CWindowBorder::CCachedBorderBrush::GetBorderBrush_::_1_::dtor$3 @ 0x1800EBB30 (_CWindowBorder--CCachedBorderBrush--GetBorderBrush_--_1_--dtor$3.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransition____0___::_Try_emplace_HWND_____const_&__::_1_::dtor$1 @ 0x1800ED5DF (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransition_std--__ea_1800ED5DF.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x20);
}
