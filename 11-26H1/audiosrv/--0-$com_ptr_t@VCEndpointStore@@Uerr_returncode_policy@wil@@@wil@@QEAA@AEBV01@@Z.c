/*
 * XREFs of ??0?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001D6C8
 * Callers:
 *     ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18001D564 (--$_Assign_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@V-$.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800C6FB0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_::_Copy @ 0x1800CC290 (std--_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_--_Copy.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180104ABC (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18001DE40 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
        _QWORD *a1,
        volatile int *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx

  v2 = a1;
  v3 = *(_QWORD *)a2;
  *v2 = *(_QWORD *)a2;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 12), a2);
  return v2;
}
