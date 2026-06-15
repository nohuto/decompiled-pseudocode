/*
 * XREFs of ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4
 * Callers:
 *     ?ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001FDF0 (-ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?StartStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180020240 (-StartStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StopStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180020590 (-StopStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StopStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180020794 (-StopStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?StartStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180020C84 (-StartStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180021450 (-DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ??1CAPOWrapperClient@@UEAA@XZ @ 0x1800217BC (--1CAPOWrapperClient@@UEAA@XZ.c)
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800219E0 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180021D80 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180023D60 (-InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180043770 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x1800441BC (--1CProcessSubmixProxy@@MEAA@XZ.c)
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
 *     _CStreamInstanceProxyImpl::StopStream_::_1_::dtor$0 @ 0x1801638C0 (_CStreamInstanceProxyImpl--StopStream_--_1_--dtor$0.c)
 *     _CStreamInstanceProxyImpl::DestroyStream_::_1_::dtor$0 @ 0x1801638E4 (_CStreamInstanceProxyImpl--DestroyStream_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::InitializeAPOs_::_1_::dtor$0 @ 0x180165B48 (_CBaseStreamGroupProxy--InitializeAPOs_--_1_--dtor$0.c)
 *     _CAPOWrapperClient::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180167613 (_CAPOWrapperClient--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     __lambda_7c0a3712486623e6fb291edc7c031103_::operator()_::_1_::dtor$1 @ 0x180169DFC (__lambda_7c0a3712486623e6fb291edc7c031103_--operator()_--_1_--dtor$1.c)
 *     __lambda_e5de096e72d24c347efd3ae2652dd6e2_::operator()_::_1_::dtor$2 @ 0x180169E20 (__lambda_e5de096e72d24c347efd3ae2652dd6e2_--operator()_--_1_--dtor$2.c)
 *     _CreateSaDevice_::_1_::dtor$23 @ 0x180169E8C (_CreateSaDevice_--_1_--dtor$23.c)
 *     _CProcessSubmixProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18016A040 (_CProcessSubmixProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CSharedStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18016A07B (_CSharedStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 * Callees:
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x180064B78 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z @ 0x18007A8C8 (-UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

void __fastcall CPerfTracker::~CPerfTracker(CPerfTracker *this)
{
  double v2; // xmm6_8
  DWORD CurrentThreadId; // eax
  __int128 v4; // [rsp+78h] [rbp-90h] BYREF
  char v5[272]; // [rsp+88h] [rbp-80h] BYREF

  StringCchPrintfExA(*((STRSAFE_LPSTR *)this + 27), *((_QWORD *)this + 28), 0LL, 0LL, 0, "-Stop");
  QueryPerformanceCounter((LARGE_INTEGER *)this + 1);
  v2 = 0.0;
  if ( *((_QWORD *)this + 2) )
    v2 = (double)(*((_DWORD *)this + 2) - *(_DWORD *)this) / (double)(int)*((_QWORD *)this + 2);
  v4 = 0LL;
  EtwEventActivityIdControl(1LL, &v4);
  memset_0(v5, 0, 0x104uLL);
  StringCchPrintfA(
    v5,
    0x104uLL,
    "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    (_DWORD)v4,
    WORD2(v4),
    WORD3(v4),
    BYTE8(v4),
    BYTE9(v4),
    BYTE10(v4),
    BYTE11(v4),
    BYTE12(v4),
    BYTE13(v4),
    BYTE14(v4),
    HIBYTE(v4));
  CurrentThreadId = GetCurrentThreadId();
  UpdateAudioActivityPerfTracker(
    (CPerfTracker *)((char *)this + 88),
    CurrentThreadId,
    v5,
    (const char *const)this + 24,
    (const char *const)this + 88,
    v2);
}
