/*
 * XREFs of ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x180090378
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800AEE64 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddSpatialAudioProcessingSupport@EffectPack@@AEAAJXZ @ 0x18007FA60 (-AddSpatialAudioProcessingSupport@EffectPack@@AEAAJXZ.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x1800900A4 (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180090508 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800906DC (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?EnsureRawSupportForBtleMic@EffectPack@@AEAAJXZ @ 0x180138E1C (-EnsureRawSupportForBtleMic@EffectPack@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic@@@details@wil@@QEAA_NXZ @ 0x18013FE98 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic@.c)
 */

__int64 __fastcall EffectPack::AddOsProcessingModeSupport(EffectPack *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  struct _GUID v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic>::GetImpl'::`2'::impl) )
  {
    v2 = EffectPack::EnsureRawSupportForBtleMic(this);
    if ( v2 < 0 )
    {
      v3 = 3393LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
  }
  v2 = EffectPack::AddSpatialAudioProcessingSupport((CEndpointCharacteristics **)this);
  if ( v2 < 0 )
  {
    v3 = 3395LL;
    goto LABEL_4;
  }
  v2 = EffectPack::AddProcessingModeSupport_for_VSS(this);
  if ( v2 < 0 )
  {
    v3 = 3396LL;
    goto LABEL_4;
  }
  v9 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v2 = EffectPack::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v9);
  if ( v2 < 0 )
  {
    v3 = 3397LL;
    goto LABEL_4;
  }
  v9 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
  v2 = EffectPack::AddInternalVoiceProcessingMode((__int64)this, v5, &v9, 0);
  if ( v2 < 0 )
  {
    v3 = 3398LL;
    goto LABEL_4;
  }
  v9 = GUID_461d14af_a88e_4be1_a809_d8bfd44b0121;
  v2 = EffectPack::AddInternalVoiceProcessingMode((__int64)this, v6, &v9, 1);
  if ( v2 < 0 )
  {
    v3 = 3399LL;
    goto LABEL_4;
  }
  v9 = GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7;
  v2 = EffectPack::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v9);
  if ( v2 < 0 )
  {
    v3 = 3400LL;
    goto LABEL_4;
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 198) + 256LL) )
    return 0LL;
  v9 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v7 = EffectPack::AugmentOEMSpeechProcessingSupport(this, eKeywordDetectorConnector, &v9);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4B,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
