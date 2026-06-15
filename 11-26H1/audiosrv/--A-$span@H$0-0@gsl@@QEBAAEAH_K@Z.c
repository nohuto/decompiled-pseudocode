/*
 * XREFs of ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x1800089B0
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x1800900A4 (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180090508 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800906DC (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x180090CAC (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800AEE64 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 *     _lambda_828de6d9baa511e7d1fe4862c107884c_::operator() @ 0x180136500 (_lambda_828de6d9baa511e7d1fe4862c107884c_--operator().c)
 *     ?DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x180138570 (-DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?EnsureRawSupportForBtleMic@EffectPack@@AEAAJXZ @ 0x180138E1C (-EnsureRawSupportForBtleMic@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall gsl::span<int,-1>::operator[](unsigned __int64 *a1, unsigned __int64 a2)
{
  if ( a2 >= *a1 )
  {
    _o_terminate();
    __debugbreak();
    JUMPOUT(0x1800089D4LL);
  }
  return a1[1] + 4 * a2;
}
