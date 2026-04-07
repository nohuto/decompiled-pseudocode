/*
 * XREFs of ?FindSubBitmap@CBitmapSource@@AEBAPEAV1@AEBUtagRECT@@@Z @ 0x18009AC40
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180004D7C (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18009B164 (-find@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

struct CBitmapSource *__fastcall CBitmapSource::FindSubBitmap(CBitmapSource *this, const struct tagRECT *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)&a2->left;
  std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::find(
    (char *)this + 64,
    &v5,
    &v4);
  if ( v5 == *((_QWORD *)this + 9) )
    return 0LL;
  else
    return *(struct CBitmapSource **)(v5 + 24);
}
