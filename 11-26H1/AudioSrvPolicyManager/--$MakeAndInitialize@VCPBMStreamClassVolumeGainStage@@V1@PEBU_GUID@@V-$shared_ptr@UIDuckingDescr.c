/*
 * XREFs of ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18000BBC0
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000D010 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 *     _lambda_cc9b2092a4952ec42797be7e5e21ed8c_::operator() @ 0x18003F418 (_lambda_cc9b2092a4952ec42797be7e5e21ed8c_--operator().c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18000BD30 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@W.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BD70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
        _QWORD *a1,
        _OWORD **a2,
        __int64 *a3)
{
  void *v6; // rax
  void *v7; // rbx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rdi
  _OWORD *v10; // rbp
  std::_Ref_count_base *v11; // rcx
  signed __int32 i; // eax

  *a1 = 0LL;
  v6 = operator new[](0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
    return 2147942414LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>(v6);
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = &CPBMStreamClassVolumeGainStage::`vftable';
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  v8 = *a3;
  v9 = (volatile signed __int32 *)a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v10 = *a2;
  if ( v9 )
    _InterlockedIncrement(v9 + 2);
  *((_QWORD *)v7 + 7) = v8;
  v11 = (std::_Ref_count_base *)*((_QWORD *)v7 + 8);
  *((_QWORD *)v7 + 8) = v9;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  *((_OWORD *)v7 + 1) = *v10;
  *((_BYTE *)v7 + 32) = 0;
  *((_QWORD *)v7 + 5) = 0LL;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  for ( i = *((_DWORD *)v7 + 13); i != 0x7FFFFFFF; i = *((_DWORD *)v7 + 13) )
  {
    if ( i == _InterlockedCompareExchange((volatile signed __int32 *)v7 + 13, i + 1, i) )
      break;
  }
  *a1 = v7;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v7);
  return 0LL;
}
