/*
 * XREFs of ??0?$unordered_map@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@U?$hash@PEAX@std@@U?$equal_to@PEAX@4@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x18000700C
 * Callers:
 *     ??0CProcess@@QEAA@XZ @ 0x180006CBC (--0CProcess@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@1@AEBV?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x180015968 (--0-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

__int64 __fastcall std::unordered_map<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>::unordered_map<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>(
    a1,
    &v3);
  return a1;
}
