/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D9D14
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800D9568 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSour.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____wil::com_ptr_t_CBitmapSource_wil::err_returncode_policy__std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_wil::com_ptr_t_CBitmapSource_wil::err_returncode_policy______0___::_Try_emplace_HWND_____const_&__::_1_::dtor$0 @ 0x1800ED5CD (_std--_Hash_std--_Umap_traits_HWND_____wil--com_ptr_t_CBitmapSource_wil--err_returncode_policy__.c)
 * Callees:
 *     ??_G?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAPEAXI@Z @ 0x1800DA01C (--_G-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>::`scalar deleting destructor'(v2 + 16);
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(a1);
}
