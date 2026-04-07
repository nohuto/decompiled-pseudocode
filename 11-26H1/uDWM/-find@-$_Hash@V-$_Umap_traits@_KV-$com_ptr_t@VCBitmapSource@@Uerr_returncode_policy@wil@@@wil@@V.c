/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18009B164
 * Callers:
 *     ?FindSubBitmap@CBitmapSource@@AEBAPEAV1@AEBUtagRECT@@@Z @ 0x18009AC40 (-FindSubBitmap@CBitmapSource@@AEBAPEAV1@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180086364 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@w.c)
 *     ??$_Hash_representation@_K@std@@YA_KAEB_K@Z @ 0x18009A4DC (--$_Hash_representation@_K@std@@YA_KAEB_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = std::_Hash_representation<unsigned __int64>(a3);
  v7 = std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Find_last<unsigned __int64>(
         a1,
         v9,
         v6,
         v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
