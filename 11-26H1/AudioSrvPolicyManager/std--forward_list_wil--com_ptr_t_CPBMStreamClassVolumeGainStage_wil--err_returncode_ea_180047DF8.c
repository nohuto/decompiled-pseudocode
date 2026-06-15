/*
 * XREFs of std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_d29f8cb166960269749b8c0ea722c7d7___ @ 0x180047DF8
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000D010 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BD70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800238F4 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_retur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_d29f8cb166960269749b8c0ea722c7d7___(
        __int64 **a1,
        __int64 a2)
{
  __int64 **v3; // rdi
  __int64 *v4; // rbx
  _QWORD *v5; // rbp
  volatile int *v6; // rdx
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 **v8; // rax
  volatile signed __int32 *v9; // r8
  __int64 *v10; // rcx
  __int64 **v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-18h]

  v3 = a1;
  v11 = a1;
  v12 = 0LL;
  v13 = &v12;
  v4 = *a1;
  if ( *a1 )
  {
    v5 = *(_QWORD **)a2;
    do
    {
      if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4[1] + 56) + 32LL))(*(_QWORD *)(v4[1] + 56)) == *v5 )
      {
        v7 = (volatile signed __int32 *)v4[1];
        v8 = *(volatile signed __int32 ***)(a2 + 8);
        v9 = *v8;
        *v8 = v7;
        if ( v7 )
          Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 13), v6);
        if ( v9 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v9);
        v10 = *v3;
        v4 = (__int64 *)**v3;
        *v10 = 0LL;
        *v3 = v4;
        *v13 = (__int64)v10;
        v13 = v10;
      }
      else
      {
        v3 = (__int64 **)v4;
        v4 = (__int64 *)*v4;
      }
    }
    while ( v4 );
  }
  std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v11);
}
