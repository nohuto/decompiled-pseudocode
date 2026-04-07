/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18009ADD8
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18009B030 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800D7EB4 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returnco.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800872DC (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_re.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  CBaseObject **v1; // rdx
  __int64 result; // rax

  v1 = (CBaseObject **)a1[2];
  a1[2] = *v1;
  std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
    (__int64)a1,
    v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
