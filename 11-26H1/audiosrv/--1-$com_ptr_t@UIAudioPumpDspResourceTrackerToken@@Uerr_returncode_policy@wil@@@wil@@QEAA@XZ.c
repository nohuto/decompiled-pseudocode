/*
 * XREFs of ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644
 * Callers:
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x1800AE5F0 (--1CSpatialProperties@@QEAA@XZ.c)
 *     ??$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@?$TokenManager@VCAudioPumpDspResourceTracker@@@@AEAAJAEBUAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800C0804 (--$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@-$TokenManag.c)
 *     ??1Token@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ @ 0x1800C1740 (--1Token@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ.c)
 *     _lambda_ad178af92e927515c26622316a1d075b_::operator() @ 0x1800C17C4 (_lambda_ad178af92e927515c26622316a1d075b_--operator().c)
 *     ?AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEBG0PEAPEAUIUnknown@@@Z @ 0x1800C1BDC (-AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEBG0PEAPEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAAJAEBUAudioPumpDspTokenAcquisitionContext@2@PEAV2@@Z @ 0x1800C21D0 (-RuntimeClassInitialize@AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAAJAEBU.c)
 *     ?TryGetAudioPumpDspResourceTokenFromTokenList@@YA?AUAudioPumpDspResourceTokenPair@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800C239C (-TryGetAudioPumpDspResourceTokenFromTokenList@@YA-AUAudioPumpDspResourceTokenPair@@AEBV-$vector@.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J66PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800C91E0 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800F618C (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@Z @ 0x1800F67E0 (--$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@Z @ 0x1800F6888 (--$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@-$TokenManager@VCB.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@Z @ 0x1800F6948 (--$ForEachActiveToken_no_lock@AEAV_lambda_7e14a330c860f44adc21b4f588a4bc9b_@@@-$TokenManager@VCB.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F7408 (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 *     ??1CCustomAudioEndpointResourceManagerCache@@UEAA@XZ @ 0x1800F74C4 (--1CCustomAudioEndpointResourceManagerCache@@UEAA@XZ.c)
 *     ?ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z @ 0x1801074AC (-ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z.c)
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x180107750 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 *     ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x180108340 (-RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180108580 (-clear@-$forward_list@V-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x18011C528 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011C8F8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HasMicrophoneAccess@@YAJPEA_N@Z @ 0x18011DA44 (-HasMicrophoneAccess@@YAJPEA_N@Z.c)
 *     ?CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPEAU3@@Z @ 0x180137B4C (-CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPE.c)
 *     ?IsVssApoAvailable@EffectPack@@SA_NXZ @ 0x18013B0E0 (-IsVssApoAvailable@EffectPack@@SA_NXZ.c)
 *     wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::operator() @ 0x180150B10 (wistd--__function--__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_c.c)
 *     wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x180150BA0 (wistd--__function--__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(en_ea_180150BA0.c)
 *     _TokenManager_CAudioPumpDspResourceTracker_::AcquireToken_CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext__::_1_::dtor$4 @ 0x1801678FB (_TokenManager_CAudioPumpDspResourceTracker_--AcquireToken_CAudioPumpDspResourceTrac_ea_1801678FB.c)
 *     _EffectPack::CheckForPreferredFormat_::_1_::dtor$0 @ 0x1801679C0 (_EffectPack--CheckForPreferredFormat_--_1_--dtor$0.c)
 *     _wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::operator()_::_1_::dtor$0 @ 0x1801679D2 (_wistd--__function--__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$7 @ 0x180167A59 (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$7.c)
 *     _HasMicrophoneAccess_::_1_::dtor$2 @ 0x180167A6B (_HasMicrophoneAccess_--_1_--dtor$2.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$8 @ 0x180167A7D (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$8.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$9 @ 0x180167A8F (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$9.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$16 @ 0x18016806C (_InitializeStreamAndModeDescriptors_--_1_--dtor$16.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$21 @ 0x1801680B4 (_InitializeStreamAndModeDescriptors_--_1_--dtor$21.c)
 *     _CMulticastSessionManager::GetCompatibleMulticastProvider_::_1_::dtor$3 @ 0x180169BC1 (_CMulticastSessionManager--GetCompatibleMulticastProvider_--_1_--dtor$3.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$2 @ 0x180169C50 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$2.c)
 *     _wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator()_::_1_::dtor$0 @ 0x18016A6C7 (_wistd--__function--__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows--.c)
 *     _EffectPack::IsVssApoAvailable_::_1_::dtor$0 @ 0x18016AE44 (_EffectPack--IsVssApoAvailable_--_1_--dtor$0.c)
 *     _dynamic_atexit_destructor_for__g_MulticastSessionManager__ @ 0x18016D2A0 (_dynamic_atexit_destructor_for__g_MulticastSessionManager__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
