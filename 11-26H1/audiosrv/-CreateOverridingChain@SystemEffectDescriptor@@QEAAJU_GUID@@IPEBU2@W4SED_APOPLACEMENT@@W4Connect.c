/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000A888
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x1800900A4 (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180090508 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800906DC (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_27cd9712d7984e7fa7dba7b637d2d0ce_::operator() @ 0x180135BEC (_lambda_27cd9712d7984e7fa7dba7b637d2d0ce_--operator().c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000B1A8 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  void (__fastcall *v14)(__int64 *, __int64); // rax
  __int64 (__fastcall ***v16)(_QWORD, _BYTE *); // rcx
  int OverridingChain; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // [rsp+28h] [rbp-41h]
  int v21; // [rsp+28h] [rbp-41h]
  void *Block[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v23[56]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+47h]

  Block[0] = 0LL;
  Block[1] = 0LL;
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(Block, a2) )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v20);
    if ( Block[0] )
      free(Block[0]);
    v11 = a7;
    v12 = *(__int64 **)(a7 + 56);
    if ( !v12 )
      return v10;
    v13 = *v12;
    v14 = *(void (__fastcall **)(__int64 *, __int64))(*v12 + 32);
LABEL_6:
    LOBYTE(v13) = v12 != (__int64 *)v11;
    v14(v12, v13);
    *(_QWORD *)(v11 + 56) = 0LL;
    return v10;
  }
  v24 = 0LL;
  v11 = a7;
  v16 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a7 + 56);
  if ( v16 )
    v24 = (**v16)(v16, v23);
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(a1, (unsigned int)Block, a3, a4, a5, a6, (__int64)v23);
  v10 = OverridingChain;
  if ( OverridingChain < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)OverridingChain,
      v21);
    if ( Block[0] )
      free(Block[0]);
    v12 = *(__int64 **)(a7 + 56);
    if ( !v12 )
      return v10;
    v14 = *(void (__fastcall **)(__int64 *, __int64))(*v12 + 32);
    goto LABEL_6;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
  v19 = *(_QWORD *)(a7 + 56);
  if ( v19 )
  {
    LOBYTE(v18) = v19 != a7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v18);
    *(_QWORD *)(a7 + 56) = 0LL;
  }
  return 0LL;
}
