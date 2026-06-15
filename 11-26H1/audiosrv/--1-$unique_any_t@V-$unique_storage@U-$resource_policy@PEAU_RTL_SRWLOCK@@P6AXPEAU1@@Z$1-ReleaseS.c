/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160D4
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x1800157B0 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x18006A5C0 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     ??$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@?$TokenManager@VCAudioPumpDspResourceTracker@@@@AEAAJAEBUAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800C0804 (--$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@-$TokenManag.c)
 *     ?AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUIUnknown@@@Z @ 0x1800C19CC (-AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEAUEndpointCharacterist.c)
 *     ?IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z @ 0x1800DD180 (-IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z.c)
 *     ?SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800DE550 (-SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E4868 (-NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800E496C (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800F618C (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 *     ??$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@QEBAX$$QEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800F6778 (--$ForEachActiveToken@V_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@TokenEnumerator@-$TokenManage.c)
 *     ?FreeTokensForContext@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@@Z @ 0x1800F7904 (-FreeTokensForContext@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceM.c)
 *     ?PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@PEA_N@Z @ 0x1800F7AC0 (-PreTokenAcquisitionCallback@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioRe.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180104ABC (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 *     ?ForEachActiveEndpoint@CEndpointCharacteristicsCache@@UEAAJ$$QEAV?$function@$$A6AJPEAVCEndpointCharacteristics@@@Z@std@@@Z @ 0x1801390B0 (-ForEachActiveEndpoint@CEndpointCharacteristicsCache@@UEAAJ$$QEAV-$function@$$A6AJPEAVCEndpointC.c)
 *     ?GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@HHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1801397DC (-GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV-$basic_string@G.c)
 *     _DynamicAudioEndpointManager::RefreshPublishedDefaults_::_1_::dtor$1 @ 0x1801660FA (_DynamicAudioEndpointManager--RefreshPublishedDefaults_--_1_--dtor$1.c)
 *     _TokenManager_CAudioPumpDspResourceTracker_::AcquireToken_CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext__::_1_::dtor$0 @ 0x1801678E9 (_TokenManager_CAudioPumpDspResourceTracker_--AcquireToken_CAudioPumpDspResourceTracker--AudioPum.c)
 *     _CAudioPumpDspResourceTracker::AcquireAudioPumpDspTokenForEndpoint_::_1_::dtor$0 @ 0x1801679E4 (_CAudioPumpDspResourceTracker--AcquireAudioPumpDspTokenForEndpoint_--_1_--dtor$0.c)
 *     _BluetoothControls::BluetoothVolume::IsApproximatelyAtScalarVolume_::_1_::dtor$0 @ 0x180168828 (_BluetoothControls--BluetoothVolume--IsApproximatelyAtScalarVolume_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::NotifyBidirectionalModeChanged_::_1_::dtor$1 @ 0x180168C7B (_CBtAudioResourceManagerBase--NotifyBidirectionalModeChanged_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::NotifyStreamChange_::_1_::dtor$1 @ 0x180168C9F (_CBtAudioResourceManagerBase--NotifyStreamChange_--_1_--dtor$1.c)
 *     _TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::AcquireToken_IBtAudioResourceManager____::_1_::dtor$0 @ 0x180169B9D (_TokenManager_CBluetoothAudioEndpointResourceManagerProvider_--AcquireToken_IBtAudioResourceMana.c)
 *     _TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::TokenEnumerator::ForEachActiveToken__lambda_7e14a330c860f44adc21b4f588a4bc9b____::_1_::dtor$0 @ 0x180169C12 (_TokenManager_CBluetoothAudioEndpointResourceManagerProvider_--TokenEnumerator--ForEachActiveTok.c)
 *     _CBluetoothAudioEndpointResourceManagerProvider::FreeTokensForContext_::_1_::dtor$1 @ 0x180169D09 (_CBluetoothAudioEndpointResourceManagerProvider--FreeTokensForContext_--_1_--dtor$1.c)
 *     _CEndpointCharacteristicsCache::GetEndpointCharacteristics_sanitizedId_::_1_::dtor$1 @ 0x180169D1B (_CEndpointCharacteristicsCache--GetEndpointCharacteristics_sanitizedId_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
