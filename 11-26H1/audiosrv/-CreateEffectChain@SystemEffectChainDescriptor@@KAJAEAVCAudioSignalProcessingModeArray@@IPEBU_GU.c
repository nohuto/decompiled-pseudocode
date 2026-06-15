/*
 * XREFs of ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18000B9E4
 * Callers:
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000A1F8 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18000AA6C (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000B1A8 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18000ACCC (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18000BD28 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA?AV?$shared_ptr@VSystemEffectChainDescriptor@@@0@XZ @ 0x18000BD88 (--$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA-AV-$shared_ptr@VSystemEffectChainDescri.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain(
        __int64 a1,
        unsigned int a2,
        const struct _GUID *a3,
        unsigned int a4,
        struct _GUID *a5,
        CAudioSignalProcessingModeArray **a6)
{
  __int64 v10; // rax
  CAudioSignalProcessingModeArray *v11; // rsi
  volatile signed __int32 *v12; // rbx
  int v13; // edi
  std::_Ref_count_base *v14; // rcx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v19; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = std::make_shared<SystemEffectChainDescriptor,>(&v18);
  v11 = *(CAudioSignalProcessingModeArray **)v10;
  v12 = *(volatile signed __int32 **)(v10 + 8);
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 8) = 0LL;
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  v13 = CAudioSignalProcessingModeArray::AddMultiple(v11, *(_DWORD *)(a1 + 8), *(const struct _GUID **)a1);
  if ( v13 < 0 )
  {
    v16 = 47LL;
  }
  else
  {
    v13 = SystemEffectChainDescriptor::ReplaceEffectChain((void **)v11, a2, a3, a4, a5);
    if ( v13 >= 0 )
    {
      if ( v12 )
        _InterlockedIncrement(v12 + 2);
      *a6 = v11;
      v14 = a6[1];
      a6[1] = (CAudioSignalProcessingModeArray *)v12;
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      if ( v12 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
      return 0LL;
    }
    v16 = 48LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v13,
    v17);
  if ( v12 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
  return (unsigned int)v13;
}
