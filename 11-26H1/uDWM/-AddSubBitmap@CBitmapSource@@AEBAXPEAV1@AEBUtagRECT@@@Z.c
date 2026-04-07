/*
 * XREFs of ?AddSubBitmap@CBitmapSource@@AEBAXPEAV1@AEBUtagRECT@@@Z @ 0x18009A828
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180004D7C (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Try_emplace@AEB_KAEAPEAVCBitmapSource@@@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEB_KAEAPEAVCBitmapSource@@@Z @ 0x18009A4EC (--$_Try_emplace@AEB_KAEAPEAVCBitmapSource@@@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@VCBitmapSourc.c)
 */

void __fastcall CBitmapSource::AddSubBitmap(CBitmapSource *this, struct CBitmapSource *a2, const struct tagRECT *a3)
{
  const char *v3; // r9
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  CBaseObject *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v6 = *(_QWORD *)&a3->left;
  std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Try_emplace<unsigned __int64 const &,CBitmapSource * &>(
    (float *)this + 16,
    (__int64)v4,
    &v6,
    &v7);
  if ( !v4[8] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x134,
      (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      v3);
}
