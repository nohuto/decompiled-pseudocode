/*
 * XREFs of ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009368 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009970 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18000A0C0 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000A1F8 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000A888 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??1EffectPack@@QEAA@XZ @ 0x18000AAF8 (--1EffectPack@@QEAA@XZ.c)
 *     ??1SystemEffectDescriptor@@QEAA@XZ @ 0x18000AC10 (--1SystemEffectDescriptor@@QEAA@XZ.c)
 *     ??1SystemEffectChainDescriptor@@QEAA@XZ @ 0x18000AC54 (--1SystemEffectChainDescriptor@@QEAA@XZ.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18000ACCC (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18000AE0C (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000B1A8 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180057E00 (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x1800900A4 (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_27cd9712d7984e7fa7dba7b637d2d0ce_::operator() @ 0x180135BEC (_lambda_27cd9712d7984e7fa7dba7b637d2d0ce_--operator().c)
 *     _lambda_828de6d9baa511e7d1fe4862c107884c_::operator() @ 0x180136500 (_lambda_828de6d9baa511e7d1fe4862c107884c_--operator().c)
 *     _lambda_dec62a0f3d11fac13fbc690f673d9d9c_::operator() @ 0x1801373F0 (_lambda_dec62a0f3d11fac13fbc690f673d9d9c_--operator().c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18013A288 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x18013B304 (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x18014FDF0 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 *     _EffectPolicy::GetAECInsertionPolicy_::_1_::dtor$0 @ 0x180162770 (_EffectPolicy--GetAECInsertionPolicy_--_1_--dtor$0.c)
 *     _EffectPack::AddSpatialAudioProcessingSupportForConnector_::_1_::dtor$8 @ 0x180162782 (_EffectPack--AddSpatialAudioProcessingSupportForConnector_--_1_--dtor$8.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x180162822 (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$4.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$0 @ 0x180162852 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1 @ 0x180162864 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1_0 @ 0x180162888 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1_0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x1801628AC (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$3.c)
 *     _EffectPack::CanBuildProcessingModesOnRawConnector_::_1_::dtor$0 @ 0x180162AD6 (_EffectPack--CanBuildProcessingModesOnRawConnector_--_1_--dtor$0.c)
 *     __lambda_dec62a0f3d11fac13fbc690f673d9d9c_::operator()_::_1_::dtor$1 @ 0x18016B744 (__lambda_dec62a0f3d11fac13fbc690f673d9d9c_--operator()_--_1_--dtor$1.c)
 *     _EffectPack::PublishProcessingModeTelemetry_::_1_::dtor$0 @ 0x18016B8D7 (_EffectPack--PublishProcessingModeTelemetry_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    free(v2);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
}
