/*
 * XREFs of IsGetDefaultSpatialRenderingModePresent @ 0x1800B5998
 * Callers:
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18003B4A8 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180065228 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18006E2F4 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     IsSpatialOnlyFormat @ 0x180079450 (IsSpatialOnlyFormat.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___ @ 0x18007B8C8 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011.c)
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180090508 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 *     ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x180091C90 (-IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800AF1F4 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J66PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800C91E0 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x180124220 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012E610 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012E804 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012E9E8 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012EBDC (-ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012ED50 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012EED8 (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___ @ 0x1801328C0 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abad.c)
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ @ 0x180140C6C (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ.c)
 *     ?InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z @ 0x18014350C (-InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180148070 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMAT.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801483C0 (-IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800B5DC6 (ApiSetQueryApiSetPresence_0.c)
 */

char __fastcall IsGetDefaultSpatialRenderingModePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801D6058 == 1 )
    return 1;
  if ( dword_1801D6058 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801D6058 = 2 - (v1 != 0);
  return result;
}
