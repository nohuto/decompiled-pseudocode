/*
 * XREFs of ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000A1F8 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4ApoType@@_NAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18000A7B0 (-GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000A888 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x18000AA2C (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18000ACCC (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18000AE0C (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000B1A8 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18000BD28 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18000CB9C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180057E00 (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x1800900A4 (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800906DC (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800AEE64 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 *     _lambda_828de6d9baa511e7d1fe4862c107884c_::operator() @ 0x180136500 (_lambda_828de6d9baa511e7d1fe4862c107884c_--operator().c)
 *     _lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_::operator() @ 0x180136F24 (_lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_--operator().c)
 *     ?EnsureRawSupportForBtleMic@EffectPack@@AEAAJXZ @ 0x180138E1C (-EnsureRawSupportForBtleMic@EffectPack@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CCompositeSystemEffect@@QEAAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4FormatChangePosition@@W4AUDIO_DIRECTION@@IPEBU_GUID@@@Z @ 0x18014FD70 (-RuntimeClassInitialize@CCompositeSystemEffect@@QEAAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_aud.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x18014FDF0 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(__int64 a1, _OWORD *a2)
{
  int *v2; // rsi
  int v4; // edi
  unsigned int v6; // edi
  __int64 v7; // rax
  _DWORD *v8; // rax
  _OWORD *v9; // r8
  bool v11; // sf

  v2 = (int *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 != *(_DWORD *)(a1 + 12) )
  {
    v8 = (_DWORD *)(a1 + 8);
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v11 = (v4 & 0x40000000) != 0;
    v6 = 2 * v4;
    if ( v11 )
      return 0LL;
  }
  else
  {
    v6 = 1;
  }
  if ( v6 > 0x7FFFFFFuLL )
    return 0LL;
  v7 = _o__recalloc(*(_QWORD *)a1, v6, 16LL);
  if ( !v7 )
    return 0LL;
  *(_QWORD *)a1 = v7;
  v8 = (_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v6;
LABEL_7:
  v9 = (_OWORD *)(*(_QWORD *)a1 + 16LL * *v2);
  if ( v9 )
    *v9 = *a2;
  ++*v8;
  return 1LL;
}
