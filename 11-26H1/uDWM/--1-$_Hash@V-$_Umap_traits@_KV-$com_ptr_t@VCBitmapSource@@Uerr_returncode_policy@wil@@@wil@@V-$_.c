/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180085314
 * Callers:
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x18001B3C0 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     ??1?$unordered_map@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@5@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x1800D6DA8 (--1-$unordered_map@PEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@U-.c)
 *     ??1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D6DB4 (--1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180085370 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Ue.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16>(*(void **)(a1 + 8), 0x20uLL);
}
