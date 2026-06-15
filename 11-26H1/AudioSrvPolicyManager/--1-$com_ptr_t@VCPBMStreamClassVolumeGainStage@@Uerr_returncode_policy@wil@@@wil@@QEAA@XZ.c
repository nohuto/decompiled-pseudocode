/*
 * XREFs of ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002393C
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000D010 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800238F4 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_retur.c)
 *     _lambda_cc9b2092a4952ec42797be7e5e21ed8c_::operator() @ 0x18003F418 (_lambda_cc9b2092a4952ec42797be7e5e21ed8c_--operator().c)
 *     ??1?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180042370 (--1-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$5 @ 0x18004C2A0 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$5.c)
 *     __lambda_cc9b2092a4952ec42797be7e5e21ed8c_::operator()_::_1_::dtor$1 @ 0x18004E13A (__lambda_cc9b2092a4952ec42797be7e5e21ed8c_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // r8
  signed __int32 v2; // edx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    do
      v2 = *((_DWORD *)v1 + 13);
    while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange(v1 + 13, v2 - 1, v2) );
    result = (unsigned int)(v2 - 1);
    if ( v2 == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
