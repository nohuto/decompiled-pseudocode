/*
 * XREFs of ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8
 * Callers:
 *     ?DisconnectFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005AAA0 (-DisconnectFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18005AD50 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x18005ADF0 (-StopStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?ConnectToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005AF00 (-ConnectToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18005B230 (-InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?DisconnectFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005B490 (-DisconnectFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x18005B730 (-StartStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18005B840 (-GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ??1CStreamInstanceProxy@@UEAA@XZ @ 0x180062D2C (--1CStreamInstanceProxy@@UEAA@XZ.c)
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18008C010 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18008C740 (-Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z.c)
 *     ?GetControllableSystemEffectsList@CAPOWrapperClient@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z @ 0x1800B9AE0 (-GetControllableSystemEffectsList@CAPOWrapperClient@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z.c)
 *     ?GetDesiredReferenceStreamProperties@CAPOWrapperClient@@UEAAJPEAW4APO_REFERENCE_STREAM_PROPERTIES@@@Z @ 0x1800B9CA0 (-GetDesiredReferenceStreamProperties@CAPOWrapperClient@@UEAAJPEAW4APO_REFERENCE_STREAM_PROPERTIE.c)
 *     ?GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1800B9DA0 (-GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ?GetInputChannelCount@CAPOWrapperClient@@UEAAJPEAI@Z @ 0x1800B9F80 (-GetInputChannelCount@CAPOWrapperClient@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CAPOWrapperClient@@UEAAJPEA_J@Z @ 0x1800BA020 (-GetLatency@CAPOWrapperClient@@UEAAJPEA_J@Z.c)
 *     ?GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800BA0C0 (-GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?GetPreferredOutputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800BA250 (-GetPreferredOutputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?GetRegistrationProperties@CAPOWrapperClient@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x1800BA3E0 (-GetRegistrationProperties@CAPOWrapperClient@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?Reset@CAPOWrapperClient@@UEAAJXZ @ 0x1800BA630 (-Reset@CAPOWrapperClient@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@@Z @ 0x1800BA6B8 (-RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_000.c)
 *     _lambda_7c0a3712486623e6fb291edc7c031103_::operator() @ 0x1800F9DBC (_lambda_7c0a3712486623e6fb291edc7c031103_--operator().c)
 *     _lambda_e5de096e72d24c347efd3ae2652dd6e2_::operator() @ 0x1800FA300 (_lambda_e5de096e72d24c347efd3ae2652dd6e2_--operator().c)
 *     ?ConnectToBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800FAA10 (-ConnectToBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z.c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FACF0 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FAF90 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@A.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FC1F0 (-CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DES.c)
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800FCC00 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DisconnectFromBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800FCE50 (-DisconnectFromBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FF3FC (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAudioModeEffectsWatcher@@@Z @ 0x1800FFA88 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 * Callees:
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180047460 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

LARGE_INTEGER *__fastcall CPerfTracker::CPerfTracker(
        LARGE_INTEGER *lpPerformanceCount,
        const struct _tlgProvider_t *a2,
        const char *a3,
        const char *a4)
{
  lpPerformanceCount->QuadPart = 0LL;
  lpPerformanceCount[1].QuadPart = 0LL;
  lpPerformanceCount[2].QuadPart = 0LL;
  memset_0(&lpPerformanceCount[3], 0, 0x40uLL);
  memset_0(&lpPerformanceCount[11], 0, 0x80uLL);
  lpPerformanceCount[29].QuadPart = (LONGLONG)a2;
  StringCchPrintfExA(
    (STRSAFE_LPSTR)&lpPerformanceCount[3],
    0x40uLL,
    (char **)&lpPerformanceCount[27],
    (unsigned __int64 *)&lpPerformanceCount[28].QuadPart,
    0,
    "%s",
    a3);
  StringCchPrintfExA(
    (STRSAFE_LPSTR)lpPerformanceCount[27].QuadPart,
    lpPerformanceCount[28].QuadPart,
    0LL,
    0LL,
    0,
    "-Start");
  if ( a4 )
    StringCchCopyA((char *)&lpPerformanceCount[11], 128LL, a4);
  QueryPerformanceCounter(lpPerformanceCount);
  QueryPerformanceFrequency(lpPerformanceCount + 2);
  return lpPerformanceCount;
}
