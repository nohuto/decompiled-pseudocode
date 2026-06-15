/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410
 * Callers:
 *     <none>
 * Callees:
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x18000C258 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000D0A0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18000D780 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x18002B63C (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002F580 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003D84C (Create_SpatialAudioDevicePropertyReader.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18004F020 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800537B0 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x180055F20 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_180055F20.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180061E24 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180062BE8 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z @ 0x180063648 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x1800696A8 (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18006DF08 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_18006DF08.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180074454 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800747EC (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077420 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180077610 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180077610.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180078030 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180078BF0 (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800793CC (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18008AEDC (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?GetDefaultAecReferenceEndpointId@@YAJU_GUID@@PEAPEAG@Z @ 0x1800AB05C (-GetDefaultAecReferenceEndpointId@@YAJU_GUID@@PEAPEAG@Z.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??1AudioPumpDspResourceTokenPair@@QEAA@XZ @ 0x1800C16F0 (--1AudioPumpDspResourceTokenPair@@QEAA@XZ.c)
 *     ?AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUIUnknown@@@Z @ 0x1800C19CC (-AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEAUEndpointCharacterist.c)
 *     ?TryGetAudioPumpDspResourceTokenFromTokenList@@YA?AUAudioPumpDspResourceTokenPair@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800C239C (-TryGetAudioPumpDspResourceTokenFromTokenList@@YA-AUAudioPumpDspResourceTokenPair@@AEBV-$vector@.c)
 *     ??4?$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800C2BBC (--4-$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCEndpointCharacteristics@@@Z @ 0x1800C34B8 (--$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharact.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEAUStreamGroupParams@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@KPEAUIProcessSubmixProxy@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800C55FC (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800C8E64 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAudioProcess@@PEAVCAudioSessionManager@@PEBU_GUID@@8PEAPEAUISaDeviceProxy@@@Z @ 0x1800C9000 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J66PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800C91E0 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800D22EC (-DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@PEAUIUnknown@@@Z @ 0x180111E58 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=39 #try_helpers=1
__int64 __fastcall CAudioResourceManager::CreateStream(
        __int64 a1,
        SaDeviceParams *a2,
        struct IAudioStreamInfo *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        struct EndpointCharacteristicsDescriptor *a12,
        unsigned int a13,
        enum _AUDCLNT_SHAREMODE a14,
        __int64 a15,
        struct tWAVEFORMATEX *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        int a22,
        __int64 a23,
        int a24,
        void *a25,
        int a26,
        __int64 a27,
        int a28,
        struct IProcessSubmixProxy *a29,
        __int64 a30)
{
  int v31; // edi
  int v32; // eax
  char v33; // r12
  CAudioPumpDspResourceTracker *v34; // rcx
  int v35; // eax
  int v36; // ebx
  __int64 v37; // rdx
  __int64 AudioPumpDspResourceTokenFromTokenList; // rax
  struct IUnknown *v39; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 ConnectorTypeForStream; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v41; // rdi
  unsigned int v42; // esi
  struct _GUID v43; // xmm7
  struct _GUID v44; // xmm8
  struct _GUID v45; // xmm6
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  _DWORD *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r15
  _DWORD *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _DWORD *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _DWORD *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned int v65; // eax
  struct AudioSrvTelemetryProvider *v66; // rax
  __int64 v67; // r8
  __int64 v68; // r9
  struct AudioSrvTelemetryProvider *v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  _DWORD *v72; // r15
  _DWORD *v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned int v77; // eax
  struct AudioSrvTelemetryProvider *v78; // rax
  __int64 v79; // r8
  __int64 v80; // r9
  struct AudioSrvTelemetryProvider *v81; // rax
  __int64 v82; // r8
  __int64 v83; // r9
  struct tWAVEFORMATEX *v84; // r15
  _DWORD *v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  unsigned int wFormatTag; // eax
  struct AudioSrvTelemetryProvider *v90; // rax
  __int64 v91; // r8
  __int64 v92; // r9
  struct AudioSrvTelemetryProvider *v93; // rax
  __int64 v94; // r8
  __int64 v95; // r9
  struct tWAVEFORMATEX *v96; // r15
  _DWORD *v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  unsigned int v101; // eax
  struct AudioSrvTelemetryProvider *v102; // rax
  __int64 v103; // r8
  __int64 v104; // r9
  struct AudioSrvTelemetryProvider *v105; // rax
  __int64 v106; // r8
  __int64 v107; // r9
  unsigned int v108; // r15d
  struct tWAVEFORMATEX *v109; // rdi
  int v110; // eax
  __int64 v111; // rbx
  __int64 v112; // rax
  unsigned __int64 v113; // r9
  __int64 v114; // rdx
  _QWORD *v115; // rax
  __int64 v116; // rcx
  int v117; // r8d
  __int64 v118; // rcx
  int v119; // edx
  __int64 v120; // rbx
  struct _GUID v121; // xmm6
  int DefaultAecReferenceEndpointId; // eax
  __int64 v123; // rcx
  __int64 v124; // rax
  int EndpointStore; // eax
  CEndpointCharacteristics *v126; // rcx
  int CustomResourceManagerService; // eax
  struct _RTL_CRITICAL_SECTION **v128; // rax
  int v129; // edi
  int v130; // eax
  __int64 v131; // rdx
  __int64 (__fastcall *v132)(struct IAudioStreamInfo *, __int64 *); // rbx
  int v133; // eax
  __int64 v134; // rbx
  __int64 (__fastcall *v135)(__int64, __int64 **); // rdi
  int v136; // eax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  unsigned __int64 v140; // r9
  __int64 v141; // rdx
  struct EndpointCharacteristicsDescriptor *v142; // rax
  CEndpointCharacteristics *v143; // rcx
  bool v144; // di
  bool v145; // bl
  unsigned __int16 *v146; // rax
  __int64 v147; // r9
  int v148; // eax
  const struct tWAVEFORMATEX *v149; // rax
  int v150; // eax
  char v151; // al
  bool v152; // zf
  char v153; // al
  struct IProcessSubmixProxy **v154; // rdi
  const wchar_t *v155; // rax
  struct IProcessSubmixProxy *v156; // rbx
  const struct tWAVEFORMATEX *v157; // rax
  __int64 v158; // r15
  _DWORD *v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v163; // edi
  bool DoesExclusiveModeOverrideShared; // di
  __int64 v165; // r9
  __int64 v166; // rdx
  __int64 v167; // r9
  __int64 v168; // rdx
  int SaDeviceForExclusiveStream; // eax
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 (__fastcall *v172)(struct IDeviceGraphManager *, __int64, __int64 *, bool); // rbx
  char v173; // al
  int v174; // eax
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // rdx
  int SaDeviceForOffloadedStream; // eax
  char v179; // si
  char v180; // di
  __int64 v181; // rbx
  int SaDeviceForSharedStream; // eax
  __int64 v183; // rax
  int v184; // ebx
  struct AudioSrvTelemetryProvider *v185; // rax
  _DWORD *v186; // rbx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rsi
  __int64 v190; // rbx
  __int64 (__fastcall *v191)(__int64, __int64 *); // rdi
  int v192; // eax
  __int64 v193; // rax
  int v194; // eax
  __int64 v195; // rdx
  unsigned int v196; // eax
  int v197; // eax
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // rcx
  __int64 v201; // rdx
  __int64 v203; // [rsp+20h] [rbp-5A8h]
  unsigned int v204; // [rsp+20h] [rbp-5A8h]
  int v205; // [rsp+40h] [rbp-588h]
  int v206; // [rsp+50h] [rbp-578h]
  int v207; // [rsp+58h] [rbp-570h]
  char v208; // [rsp+F0h] [rbp-4D8h] BYREF
  _WORD v209[3]; // [rsp+F2h] [rbp-4D6h] BYREF
  __int64 *v210; // [rsp+F8h] [rbp-4D0h] BYREF
  struct CEndpointStore *v211; // [rsp+100h] [rbp-4C8h] BYREF
  const wchar_t *v212; // [rsp+108h] [rbp-4C0h] BYREF
  struct EndpointCharacteristicsDescriptor *v213; // [rsp+110h] [rbp-4B8h] BYREF
  bool v214; // [rsp+118h] [rbp-4B0h]
  struct tWAVEFORMATEX *v215; // [rsp+120h] [rbp-4A8h] BYREF
  _DWORD *v216; // [rsp+128h] [rbp-4A0h] BYREF
  struct tWAVEFORMATEX *v217; // [rsp+130h] [rbp-498h] BYREF
  __int64 v218; // [rsp+138h] [rbp-490h] BYREF
  __int64 v219; // [rsp+140h] [rbp-488h] BYREF
  __int64 v220; // [rsp+148h] [rbp-480h] BYREF
  void *v221; // [rsp+150h] [rbp-478h] BYREF
  _QWORD *v222; // [rsp+158h] [rbp-470h] BYREF
  __int64 v223[2]; // [rsp+160h] [rbp-468h] BYREF
  struct _GUID v224; // [rsp+170h] [rbp-458h] BYREF
  struct tWAVEFORMATEX *v225[2]; // [rsp+180h] [rbp-448h] BYREF
  struct _GUID Buf1; // [rsp+190h] [rbp-438h] BYREF
  unsigned int v227; // [rsp+1A0h] [rbp-428h]
  int v228[2]; // [rsp+1A8h] [rbp-420h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v229; // [rsp+1B0h] [rbp-418h]
  unsigned int v230; // [rsp+1B4h] [rbp-414h] BYREF
  __int64 v231; // [rsp+1B8h] [rbp-410h] BYREF
  __int64 v232; // [rsp+1C0h] [rbp-408h] BYREF
  struct IProcessSubmixProxy *v233; // [rsp+1C8h] [rbp-400h] BYREF
  SaDeviceParams **v234; // [rsp+1D0h] [rbp-3F8h] BYREF
  struct tWAVEFORMATEX *v235; // [rsp+1D8h] [rbp-3F0h] BYREF
  char v236; // [rsp+1E0h] [rbp-3E8h]
  SaDeviceParams *v237; // [rsp+1E8h] [rbp-3E0h] BYREF
  struct IUnknown *v238; // [rsp+1F0h] [rbp-3D8h] BYREF
  int v239[2]; // [rsp+1F8h] [rbp-3D0h]
  __int64 v240; // [rsp+200h] [rbp-3C8h] BYREF
  __int64 v241; // [rsp+208h] [rbp-3C0h] BYREF
  __int64 v242; // [rsp+210h] [rbp-3B8h] BYREF
  unsigned int v243[2]; // [rsp+218h] [rbp-3B0h] BYREF
  __int128 v244; // [rsp+220h] [rbp-3A8h] BYREF
  __int64 v245; // [rsp+230h] [rbp-398h]
  struct tWAVEFORMATEX **v246; // [rsp+238h] [rbp-390h] BYREF
  struct tWAVEFORMATEX *v247; // [rsp+240h] [rbp-388h] BYREF
  char v248; // [rsp+248h] [rbp-380h]
  __int64 v249; // [rsp+250h] [rbp-378h] BYREF
  __int64 v250; // [rsp+258h] [rbp-370h] BYREF
  __int64 v251; // [rsp+260h] [rbp-368h]
  struct _GUID v252; // [rsp+270h] [rbp-358h] BYREF
  __int64 *v253; // [rsp+280h] [rbp-348h] BYREF
  struct tWAVEFORMATEX *v254; // [rsp+288h] [rbp-340h] BYREF
  char v255; // [rsp+290h] [rbp-338h]
  _BYTE v256[304]; // [rsp+2A0h] [rbp-328h] BYREF
  _BYTE v257[304]; // [rsp+3D0h] [rbp-1F8h] BYREF
  struct _GUID v258; // [rsp+500h] [rbp-C8h] BYREF
  struct _GUID v259; // [rsp+510h] [rbp-B8h] BYREF
  __int64 v260; // [rsp+520h] [rbp-A8h]
  _DWORD **v261; // [rsp+530h] [rbp-98h] BYREF
  struct tWAVEFORMATEX *v262; // [rsp+538h] [rbp-90h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v263; // [rsp+540h] [rbp-88h]
  struct _GUID v264; // [rsp+544h] [rbp-84h]
  int v265; // [rsp+554h] [rbp-74h]
  wil::details::in1diag3 *retaddr; // [rsp+5C8h] [rbp+0h]

  v230 = a4;
  v237 = a2;
  v242 = a1;
  v225[0] = a16;
  v213 = a12;
  v251 = a15;
  v241 = a19;
  v240 = a20;
  *(_QWORD *)v243 = a21;
  v220 = a23;
  v221 = a25;
  v233 = a29;
  *(_QWORD *)v239 = a30;
  v31 = (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 208LL))(a3);
  v32 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v213 + 56LL))(*(_QWORD *)v213);
  v227 = a13;
  v33 = 1;
  if ( v32 )
  {
    v228[0] = 1;
  }
  else if ( (a13 & 0x20000) != 0 )
  {
    v228[0] = (v31 != 0) + 2;
  }
  else
  {
    v228[0] = 0;
  }
  v244 = 0LL;
  v245 = 0LL;
  v238 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v238);
  v35 = CAudioPumpDspResourceTracker::AcquireAudioPumpDspTokenForEndpoint(v34, v213, &v238);
  v36 = v35;
  if ( v35 < 0 )
  {
    v37 = 1513LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v35);
    goto LABEL_272;
  }
  if ( *((_QWORD *)&v244 + 1) == v245 )
  {
    std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Emplace_reallocate<CEndpointCharacteristics * &>(
      &v244,
      *((_QWORD *)&v244 + 1),
      &v238);
  }
  else
  {
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      *((_QWORD *)&v244 + 1),
      v238);
    *((_QWORD *)&v244 + 1) += 8LL;
  }
  v232 = 0LL;
  AudioPumpDspResourceTokenFromTokenList = TryGetAudioPumpDspResourceTokenFromTokenList(&v259, &v244);
  v39 = *(struct IUnknown **)(AudioPumpDspResourceTokenFromTokenList + 8);
  *(_QWORD *)(AudioPumpDspResourceTokenFromTokenList + 8) = 0LL;
  *(_QWORD *)&v224.Data1 = v39;
  AudioPumpDspResourceTokenPair::~AudioPumpDspResourceTokenPair((AudioPumpDspResourceTokenPair *)&v259);
  ConnectorTypeForStream = GetConnectorTypeForStream(v213, a13, a14, v31, a16, v233, v39);
  v41 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)((char *)a3 + 624);
  if ( !a3 )
    v41 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)632;
  *v41 = ConnectorTypeForStream;
  if ( v39 && ConnectorTypeForStream == eHostProcessConnector && (a13 & 1) != 0 )
  {
    v227 = a13 & 0x77FFFFFC | 0x88000002;
    v232 = a18;
    a18 = 0LL;
    v231 = 2 * a17;
  }
  else
  {
    v231 = a17;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v224);
  v229 = *v41;
  v224 = GUID_00000000_0000_0000_0000_000000000000;
  Buf1 = GUID_00000000_0000_0000_0000_000000000000;
  v258 = GUID_00000000_0000_0000_0000_000000000000;
  v252 = GUID_00000000_0000_0000_0000_000000000000;
  v259 = GUID_00000000_0000_0000_0000_000000000000;
  v42 = v230;
  v35 = DeriveAudioProcessingModeConfiguration(
          v230,
          a5,
          a6,
          (CEndpointCharacteristics **)v213,
          v228[0],
          a14,
          v229,
          (__int64)v233,
          0,
          1,
          (__int64)a16,
          &v224,
          &Buf1,
          &v258,
          &v252,
          &v259);
  v36 = v35;
  if ( v35 < 0 )
  {
    v37 = 1549LL;
    goto LABEL_20;
  }
  v218 = 0LL;
  v217 = 0LL;
  v216 = 0LL;
  v215 = 0LL;
  v234 = (SaDeviceParams **)&v215;
  v235 = 0LL;
  v236 = 1;
  v246 = &v217;
  v247 = 0LL;
  v248 = 1;
  v261 = &v216;
  v262 = 0LL;
  LOBYTE(v263) = 1;
  v253 = &v218;
  v254 = 0LL;
  v255 = 1;
  v214 = a8 != 0;
  v43 = v224;
  v44 = Buf1;
  v45 = v258;
  v36 = DeriveDeviceGraphFormatsForStream(
          (CEndpointCharacteristics **)v213,
          a8 != 0,
          v229,
          a14,
          v42,
          (IAudioMediaType *)&v258,
          &Buf1,
          &v224,
          a16,
          &v254,
          &v262,
          &v247,
          &v235);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v253);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v261);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v246);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v234);
  if ( v36 < 0 )
  {
    if ( v36 == -2005139333 )
    {
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v215,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v216,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v217,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v218,
        0LL);
      v36 = -2005139333;
      goto LABEL_272;
    }
    v46 = (unsigned int)v36;
    v47 = 1554LL;
    goto LABEL_25;
  }
  if ( a16 )
  {
    if ( a16->wFormatTag == 0xFFFE )
    {
      v61 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v61 > 4u && tlgKeywordOn((__int64)v61, 512LL) )
      {
        LODWORD(v210) = *(_DWORD *)&a16[1].nChannels;
        *(_QWORD *)&v224.Data1 = (char *)a16 + 24;
        LODWORD(v223[0]) = a16->nAvgBytesPerSec;
        LODWORD(v212) = a16->nSamplesPerSec;
        v209[0] = a16->nChannels;
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v62,
          byte_1801A3E83,
          v63,
          v64,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)&v212,
          (__int64)v223,
          (__int64 *)&v224,
          (__int64)&v210);
      }
    }
    else
    {
      v258 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v258.Data1 = a16->wFormatTag;
      v57 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v57 > 4u && tlgKeywordOn((__int64)v57, 512LL) )
      {
        *(_QWORD *)&v224.Data1 = &v258;
        LODWORD(v223[0]) = a16->nAvgBytesPerSec;
        LODWORD(v210) = a16->nSamplesPerSec;
        v209[0] = a16->nChannels;
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v58,
          byte_1801A3F15,
          v59,
          v60,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)&v210,
          (__int64)v223,
          (__int64 *)&v224);
      }
    }
  }
  else
  {
    v48 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v48 > 4u && tlgKeywordOn((__int64)v48, 512LL) )
    {
      LODWORD(v223[0]) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v49,
        byte_1801A3F9A,
        v50,
        v51,
        (__int64)v223);
    }
  }
  v52 = v218;
  if ( v218 )
  {
    v65 = *(unsigned __int16 *)v218;
    if ( (_WORD)v65 == 0xFFFE )
    {
      v69 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v69 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v69 + 1), 512LL) )
      {
        LODWORD(v212) = *(_DWORD *)(v52 + 20);
        *(_QWORD *)&v224.Data1 = v52 + 24;
        LODWORD(v210) = *(_DWORD *)(v218 + 8);
        LODWORD(v223[0]) = *(_DWORD *)(v218 + 4);
        v209[0] = *(_WORD *)(v218 + 2);
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v70,
          byte_1801A3D1A,
          v70,
          v71,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)v223,
          (__int64)&v210,
          (__int64 *)&v224,
          (__int64)&v212);
      }
    }
    else
    {
      v258 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v258.Data1 = v65;
      v66 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v66 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v66 + 1), 512LL) )
      {
        *(_QWORD *)&v224.Data1 = &v258;
        LODWORD(v212) = *(_DWORD *)(v218 + 8);
        LODWORD(v210) = *(_DWORD *)(v218 + 4);
        v209[0] = *(_WORD *)(v218 + 2);
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v67,
          byte_1801A3DAE,
          v67,
          v68,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)&v210,
          (__int64)&v212,
          (__int64 *)&v224);
      }
    }
  }
  else
  {
    v53 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v53 > 4u && tlgKeywordOn((__int64)v53, 512LL) )
    {
      LODWORD(v212) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v54,
        byte_1801A3E35,
        v55,
        v56,
        (__int64)&v212);
    }
  }
  v72 = v216;
  if ( v216 )
  {
    v77 = *(unsigned __int16 *)v216;
    if ( (_WORD)v77 == 0xFFFE )
    {
      v81 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v81 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v81 + 1), 512LL) )
      {
        LODWORD(v212) = v72[5];
        *(_QWORD *)&v224.Data1 = v72 + 6;
        LODWORD(v210) = v216[2];
        LODWORD(v223[0]) = v216[1];
        v209[0] = *((_WORD *)v216 + 1);
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v82,
          byte_1801A3BA8,
          v82,
          v83,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)v223,
          (__int64)&v210,
          (__int64 *)&v224,
          (__int64)&v212);
      }
    }
    else
    {
      v258 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v258.Data1 = v77;
      v78 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v78 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v78 + 1), 512LL) )
      {
        *(_QWORD *)&v224.Data1 = &v258;
        LODWORD(v212) = v216[2];
        LODWORD(v210) = v216[1];
        v209[0] = *((_WORD *)v216 + 1);
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v79,
          byte_1801A3C3F,
          v79,
          v80,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)&v210,
          (__int64)&v212,
          (__int64 *)&v224);
      }
    }
  }
  else
  {
    v73 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v73 > 4u && tlgKeywordOn((__int64)v73, 512LL) )
    {
      LODWORD(v212) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v74,
        byte_1801A3CC9,
        v75,
        v76,
        (__int64)&v212);
    }
  }
  v84 = v217;
  if ( v217 )
  {
    wFormatTag = v217->wFormatTag;
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      v93 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v93 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v93 + 1), 512LL) )
      {
        LODWORD(v212) = *(_DWORD *)&v84[1].nChannels;
        *(_QWORD *)&v224.Data1 = (char *)v84 + 24;
        LODWORD(v210) = v217->nAvgBytesPerSec;
        LODWORD(v223[0]) = v217->nSamplesPerSec;
        v209[0] = v217->nChannels;
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v94,
          byte_1801A3A39,
          v94,
          v95,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)v223,
          (__int64)&v210,
          (__int64 *)&v224,
          (__int64)&v212);
      }
    }
    else
    {
      v258 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v258.Data1 = wFormatTag;
      v90 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v90 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v90 + 1), 512LL) )
      {
        *(_QWORD *)&v224.Data1 = &v258;
        LODWORD(v212) = v217->nAvgBytesPerSec;
        LODWORD(v210) = v217->nSamplesPerSec;
        v209[0] = v217->nChannels;
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v91,
          byte_1801A3ACF,
          v91,
          v92,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)&v210,
          (__int64)&v212,
          (__int64 *)&v224);
      }
    }
  }
  else
  {
    v85 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v85 > 4u && tlgKeywordOn((__int64)v85, 512LL) )
    {
      LODWORD(v212) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v86,
        byte_1801A3B58,
        v87,
        v88,
        (__int64)&v212);
    }
  }
  v96 = v215;
  if ( v215 )
  {
    v101 = v215->wFormatTag;
    if ( (_WORD)v101 == 0xFFFE )
    {
      v105 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v105 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v105 + 1), 512LL) )
      {
        LODWORD(v212) = *(_DWORD *)&v96[1].nChannels;
        *(_QWORD *)&v224.Data1 = (char *)v96 + 24;
        LODWORD(v210) = v215->nAvgBytesPerSec;
        LODWORD(v223[0]) = v215->nSamplesPerSec;
        v209[0] = v215->nChannels;
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v106,
          byte_1801A38CD,
          v106,
          v107,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)v223,
          (__int64)&v210,
          (__int64 *)&v224,
          (__int64)&v212);
      }
    }
    else
    {
      v258 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v258.Data1 = v101;
      v102 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v102 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v102 + 1), 512LL) )
      {
        *(_QWORD *)&v224.Data1 = &v258;
        LODWORD(v212) = v215->nAvgBytesPerSec;
        LODWORD(v210) = v215->nSamplesPerSec;
        v209[0] = v215->nChannels;
        *(_QWORD *)&Buf1.Data1 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v103,
          byte_1801A3962,
          v103,
          v104,
          (const wchar_t **)&Buf1,
          (__int64)v209,
          (__int64)&v210,
          (__int64)&v212,
          (__int64 *)&v224);
      }
    }
  }
  else
  {
    v97 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v97 > 4u && tlgKeywordOn((__int64)v97, 512LL) )
    {
      LODWORD(v212) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v98,
        byte_1801A39EA,
        v99,
        v100,
        (__int64)&v212);
    }
  }
  v250 = 0LL;
  v249 = 0LL;
  v224 = v44;
  Buf1 = v45;
  v258 = v43;
  v108 = v227;
  v109 = v225[0];
  v110 = DerivePeriodicityForStream(
           v213,
           v225[0],
           a3,
           v227,
           a14,
           v229,
           v215,
           &v258,
           &Buf1,
           &v224,
           a7 != 0,
           v214,
           v231,
           a18,
           v233,
           &a18,
           &v249,
           &v250);
  v36 = v110;
  if ( v110 < 0 )
  {
    v46 = (unsigned int)v110;
    v47 = 1568LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v46);
LABEL_26:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v215,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v216,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v217,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v218,
      0LL);
    goto LABEL_272;
  }
  LOBYTE(v209[0]) = a18 < v249;
  v214 = 0;
  *(_QWORD *)&v258.Data1 = 0LL;
  v219 = 0LL;
  v222 = 0LL;
  v234 = (SaDeviceParams **)&v222;
  v235 = 0LL;
  v236 = 1;
  v111 = v250;
  v112 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 80LL))(a3);
  v224 = v44;
  Buf1 = v43;
  v36 = InitializeStreamAndModeDescriptors(
          v213,
          v229,
          &Buf1,
          (__int64)&v224,
          (__int64)&v259,
          a22,
          (__int64)v109,
          v218,
          v231,
          a18,
          v232,
          v220,
          v241,
          v240,
          *(__int64 *)v243,
          (__int64)v221,
          v112,
          a9 != 0,
          a10 != 0,
          v111,
          a11,
          a26,
          a27,
          a28,
          (__int64)&v235,
          (__int64)&v219);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v234);
  if ( v36 < 0 )
  {
    v113 = (unsigned int)v36;
    v114 = 1581LL;
LABEL_86:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v114,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v113);
LABEL_87:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v222,
      0LL);
    std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)&v219);
    std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((StreamGroupParams **)&v258);
    goto LABEL_26;
  }
  v115 = (_QWORD *)v219;
  if ( v219 && (v116 = *(_QWORD *)(v219 + 8)) != 0 )
    v117 = *(_DWORD *)(v116 + 52);
  else
    v117 = 0;
  if ( v219 && (v118 = *(_QWORD *)(v219 + 8)) != 0 )
    v119 = *(_DWORD *)(v118 + 56);
  else
    v119 = 0;
  if ( v117 && v119 )
  {
    v120 = (__int64)a3 + 592;
    if ( !a3 )
      v120 = 600LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)v120,
      0LL);
    v121 = v252;
    v259 = v252;
    DefaultAecReferenceEndpointId = GetDefaultAecReferenceEndpointId(&v259, (unsigned __int16 **)v120);
    v36 = DefaultAecReferenceEndpointId;
    if ( DefaultAecReferenceEndpointId < 0 )
    {
      v113 = (unsigned int)DefaultAecReferenceEndpointId;
      v114 = 1588LL;
      goto LABEL_86;
    }
    v115 = (_QWORD *)v219;
  }
  else
  {
    v121 = v252;
  }
  v123 = 1LL;
  if ( v115 && *v115 )
    v123 = 3LL;
  v124 = (__int64)a3 + 360;
  if ( !a3 )
    v124 = 368LL;
  *(_DWORD *)v124 = v123;
  v211 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(
                    (RTL_SRWLOCK *)v123,
                    *(const unsigned __int16 **)(*(_QWORD *)v213 + 48LL),
                    &v211);
  v36 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x647,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_111:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v211);
    goto LABEL_87;
  }
  (*(void (__fastcall **)(_QWORD, struct _GUID *, struct CEndpointStore *))(**(_QWORD **)(v242 + 48) + 80LL))(
    *(_QWORD *)(v242 + 48),
    &Buf1,
    v211);
  v221 = 0LL;
  v126 = *(CEndpointCharacteristics **)v213;
  v221 = 0LL;
  CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                   v126,
                                   &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
                                   &v221);
  v36 = CustomResourceManagerService;
  if ( CustomResourceManagerService < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x651,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)CustomResourceManagerService);
LABEL_114:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v221);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Buf1);
    goto LABEL_111;
  }
  v225[0] = 0LL;
  if ( v221 )
  {
    v128 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v221 + 104LL))(
                                              v221,
                                              &v231);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::operator=(
      (struct _RTL_CRITICAL_SECTION **)v225,
      v128);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v231);
  }
  (*(void (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)v211 + 13) + 128LL))(*((_QWORD *)v211 + 13), &v224);
  LODWORD(v223[0]) = v108 & 1;
  v259 = v121;
  v129 = v228[0];
  v130 = DeriveStreamGroupParametersForStream(
           (__int64 *)v213,
           v229,
           v228[0],
           v222[4],
           v203,
           &v259,
           a14 == AUDCLNT_SHAREMODE_EXCLUSIVE,
           v108 & 1,
           (struct tWAVEFORMATEX *)v216,
           v219,
           a3,
           (StreamGroupParams **)&v258);
  v36 = v130;
  if ( v130 < 0 )
  {
    v131 = 1632LL;
LABEL_119:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v131,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v130);
LABEL_120:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v224);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v225);
    goto LABEL_114;
  }
  v130 = BuildDeviceGraphForStream(
           (_DWORD)v213,
           (_DWORD)a3,
           (_DWORD)v237,
           *((_QWORD *)v211 + 13),
           v230,
           v108,
           a14,
           (__int64)v222,
           v219,
           v258.Data1,
           v129,
           v251,
           a24,
           (__int64)v233,
           (__int64)&v244,
           *(__int64 *)v239);
  v36 = v130;
  if ( v130 < 0 )
  {
    v131 = 1636LL;
    goto LABEL_119;
  }
  v220 = 0LL;
  v132 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a3 + 120LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v220);
  v133 = v132(a3, &v220);
  v36 = v133;
  if ( v133 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x668,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v133);
LABEL_125:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v220);
    goto LABEL_120;
  }
  v210 = 0LL;
  v134 = v220;
  v135 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v220 + 224LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v210);
  v136 = v135(v134, &v210);
  v36 = v136;
  if ( v136 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v136);
LABEL_128:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v210);
    goto LABEL_125;
  }
  v208 = 0;
  v246 = (struct tWAVEFORMATEX **)&v208;
  v247 = (struct tWAVEFORMATEX *)&v213;
  v248 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 144LL))(a3)
    || LOBYTE(v209[0]) && g_DisableSpatialOnLowLatency )
  {
    LOBYTE(v137) = 1;
    AudioPolicyManagerExtension_OnPreMatchFormatStateChange(*(_QWORD *)(*(_QWORD *)v213 + 48LL), v137);
    v208 = 1;
    v138 = (__int64)v210;
    if ( !v210 )
      goto LABEL_158;
    v232 = 0LL;
    v139 = *v210;
    v234 = (SaDeviceParams **)&v232;
    v235 = 0LL;
    v236 = 1;
    v36 = (*(__int64 (__fastcall **)(__int64 *, struct tWAVEFORMATEX **))(v139 + 120))(v210, &v235);
    wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v234);
    if ( v36 < 0 )
    {
      v140 = (unsigned int)v36;
      v141 = 1672LL;
LABEL_135:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v141,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v140);
LABEL_136:
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v232);
      if ( !v208 )
        goto LABEL_128;
      v142 = v213;
      goto LABEL_138;
    }
    v144 = 0;
    v145 = 0;
    if ( g_PerformStrictConnectorMatchOnMatchFormat
      && (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 144LL))(a3) )
    {
      v144 = (unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(v232 + 16), v215) == 0;
    }
    if ( LOBYTE(v209[0]) && g_DisableSpatialOnLowLatency && !v144 )
    {
      v230 = 0;
      v231 = 0LL;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v231);
      v146 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64 *))(*v210 + 24))(v210);
      v148 = Create_SpatialAudioDevicePropertyReader(v146, 0LL, &v231, v147);
      v36 = v148;
      if ( v148 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x69A,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v148);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v231);
        goto LABEL_136;
      }
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v231 + 112LL))(v231, &v230);
      v145 = v230 != 0;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v231);
    }
    v149 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v220 + 144LL))(v220);
    if ( !(unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(v232 + 24), v149) || v144 || v145 )
    {
      v150 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphManager
                                                                                         + 40LL))(
               g_DeviceGraphManager,
               v220,
               v210);
      v36 = v150;
      if ( v150 < 0 )
      {
        v140 = (unsigned int)v150;
        v141 = 1706LL;
        goto LABEL_135;
      }
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v210);
    }
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v232);
  }
  v138 = (__int64)v210;
  if ( !v210 )
  {
LABEL_158:
    if ( v233 )
      goto LABEL_229;
    if ( !g_DisableSpatialOnLowLatency
      || (v151 = IsCompressedSpatialFormat(v215), v138 = (__int64)v210, v152 = v151 == 0, v153 = 1, v152) )
    {
      v153 = 0;
    }
    if ( (v108 & 0x20000) != 0 && g_UseSoftwareLoopbackOnMatchFormat || v153 )
    {
      v259 = 0LL;
      v260 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)v211 + 13) + 96LL))(
             *((_QWORD *)v211 + 13),
             &v259) >= 0 )
      {
        v154 = *(struct IProcessSubmixProxy ***)&v259.Data1;
        v155 = *(const wchar_t **)v259.Data4;
        v212 = *(const wchar_t **)v259.Data4;
        while ( v154 != (struct IProcessSubmixProxy **)v155 )
        {
          v233 = *v154;
          v156 = v233;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v233);
          if ( (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v156 + 168LL))(v156) )
          {
            v157 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v156 + 48LL))(v156);
            if ( !(unsigned int)ValidateUncompressedWaveFormatEx(v157) )
            {
              v158 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v220 + 128LL))(v220);
              if ( (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v156 + 32LL))(v156) <= v158 )
              {
                wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=(&v210, &v233);
                v159 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
                if ( *v159 > 4u && tlgKeywordOn((__int64)v159, 512LL) )
                {
                  v212 = *(const wchar_t **)(*(_QWORD *)v213 + 48LL);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    v160,
                    byte_1801A3890,
                    v161,
                    v162,
                    &v212);
                }
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v233);
                break;
              }
            }
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v233);
          ++v154;
          v155 = v212;
        }
        v108 = v227;
      }
      if ( *(_QWORD *)&v259.Data1 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 **)&v259.Data1,
          *(__int64 **)v259.Data4);
        std::_Deallocate<16>(
          *(void **)&v259.Data1,
          (struct std::nothrow_t *)((v260 - *(_QWORD *)&v259.Data1) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      v138 = (__int64)v210;
    }
    if ( v138 )
      goto LABEL_207;
    *(_QWORD *)v228 = 0LL;
    v234 = (SaDeviceParams **)v228;
    v235 = 0LL;
    v236 = 1;
    v259 = v44;
    v252 = v43;
    v163 = v229;
    v36 = DeriveSaDeviceParametersForStream(
            (CEndpointCharacteristics ***)v213,
            a14,
            v229,
            &v252,
            &v259,
            v215,
            v217,
            v222[4],
            (struct SaDeviceParams **)&v235);
    wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v234);
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v36);
LABEL_182:
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)v228);
LABEL_183:
      if ( !v208 )
        goto LABEL_128;
      v142 = v213;
LABEL_138:
      v143 = *(CEndpointCharacteristics **)v142;
LABEL_139:
      AudioPolicyManagerExtension_OnPreMatchFormatStateChange(*((_QWORD *)v143 + 6), 0LL);
      goto LABEL_128;
    }
    v214 = 1;
    *(_WORD *)((char *)&v262 + 5) = 0;
    HIBYTE(v262) = 0;
    v265 = 0;
    BYTE4(v262) = 1;
    LODWORD(v262) = a24;
    v261 = 0LL;
    v264 = v43;
    v263 = v163;
    DoesExclusiveModeOverrideShared = CEndpointCharacteristics::DoesExclusiveModeOverrideShared(*(CEndpointCharacteristics **)v213);
    LOBYTE(v209[0]) = 0;
    v234 = (SaDeviceParams **)v209;
    v235 = (struct tWAVEFORMATEX *)&v211;
    v236 = 1;
    if ( DoesExclusiveModeOverrideShared )
    {
      if ( a14 == AUDCLNT_SHAREMODE_EXCLUSIVE )
      {
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)(*((_QWORD *)v211 + 12) + 276LL),
               GetCurrentThreadId(),
               0) )
        {
          v36 = -2005139364;
          v165 = 2289827932LL;
          v166 = 1797LL;
          goto LABEL_190;
        }
        LOBYTE(v209[0]) = 1;
        goto LABEL_199;
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v211 + 12) + 276LL), 0, 0) )
      {
        v36 = -2005139364;
        v167 = 2289827932LL;
        v168 = 1803LL;
LABEL_195:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v168,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v167);
        goto LABEL_196;
      }
    }
    else if ( a14 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    {
LABEL_199:
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v210);
      LOBYTE(v205) = DoesExclusiveModeOverrideShared;
      SaDeviceForExclusiveStream = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                     *((_QWORD *)v211 + 12),
                                     v213,
                                     v221,
                                     *(_QWORD *)v228,
                                     v108,
                                     1,
                                     &v261,
                                     &v244,
                                     v205,
                                     v237,
                                     *((_QWORD *)v211 + 12),
                                     &v210);
      v36 = SaDeviceForExclusiveStream;
      if ( SaDeviceForExclusiveStream < 0 )
      {
        if ( (unsigned int)(SaDeviceForExclusiveStream + 2005139335) <= 1 )
        {
LABEL_191:
          if ( !LOBYTE(v209[0]) )
            goto LABEL_182;
LABEL_197:
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v211 + 12) + 276LL), 0);
          goto LABEL_182;
        }
        v165 = (unsigned int)SaDeviceForExclusiveStream;
        v166 = 1812LL;
LABEL_190:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v166,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v165);
        goto LABEL_191;
      }
      goto LABEL_202;
    }
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v210);
    if ( LODWORD(v223[0]) )
    {
      SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                     *((_QWORD *)v211 + 12),
                                     v213,
                                     v221,
                                     *(_QWORD *)v228,
                                     v227,
                                     a14,
                                     &v261,
                                     &v244,
                                     v237,
                                     *((_QWORD *)v211 + 12),
                                     v241,
                                     v240,
                                     &v210);
      v36 = SaDeviceForOffloadedStream;
      if ( SaDeviceForOffloadedStream < 0 )
      {
        if ( SaDeviceForOffloadedStream != -2005139370 && SaDeviceForOffloadedStream != -2005139334 )
        {
          v167 = (unsigned int)SaDeviceForOffloadedStream;
          v168 = 1819LL;
          goto LABEL_195;
        }
LABEL_196:
        if ( !LOBYTE(v209[0]) )
          goto LABEL_182;
        goto LABEL_197;
      }
    }
    else
    {
      v179 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 144LL))(a3);
      v180 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 136LL))(a3);
      v181 = *((_QWORD *)v211 + 12);
      LOBYTE(v207) = v179;
      LOBYTE(v206) = v180;
      LOBYTE(v205) = (*(unsigned int (__fastcall **)(SaDeviceParams *))(*(_QWORD *)v237 + 96LL))(v237) != 0;
      SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                  v242 - 8,
                                  v213,
                                  v221,
                                  *(_QWORD *)v228,
                                  v227,
                                  a14,
                                  &v261,
                                  &v244,
                                  v205,
                                  v181,
                                  v206,
                                  v207,
                                  &v210);
      v36 = SaDeviceForSharedStream;
      if ( SaDeviceForSharedStream < 0 )
      {
        if ( (unsigned int)(SaDeviceForSharedStream + 2005139335) > 1 )
        {
          v167 = (unsigned int)SaDeviceForSharedStream;
          v168 = 1827LL;
          goto LABEL_195;
        }
        goto LABEL_196;
      }
    }
LABEL_202:
    if ( LOBYTE(v209[0]) )
    {
      v170 = *((_QWORD *)v211 + 12);
      _InterlockedExchange((volatile __int32 *)(v170 + 276), 0);
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v170,
        (__int64)&AudioResourceManager_SaDevice_Created,
        v171,
        1,
        (__int64)&v259);
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)v228);
LABEL_207:
    v172 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64 *, bool))(*(_QWORD *)g_DeviceGraphManager
                                                                                            + 32LL);
    v173 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v220 + 240LL))(v220);
    v204 = v239[0];
    v174 = v172(g_DeviceGraphManager, v220, v210, v173 == 0);
    v36 = v174;
    if ( v174 < 0 )
    {
      v177 = 1842LL;
LABEL_209:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v177,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v174);
LABEL_210:
      if ( !v208 )
        goto LABEL_128;
      v143 = *(CEndpointCharacteristics **)v213;
      goto LABEL_139;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v175,
        (__int64)&AudioResourceManager_SaDevice_Connected,
        v176,
        1,
        (__int64)&v259);
    v108 = v227;
    goto LABEL_223;
  }
  (*(void (__fastcall **)(__int64))(*((_QWORD *)a3 - 1) + 56LL))((__int64)a3 - 8);
LABEL_223:
  if ( v210 )
  {
    v237 = 0LL;
    v183 = *v210;
    v234 = &v237;
    v235 = 0LL;
    v236 = 1;
    v184 = (*(__int64 (__fastcall **)(__int64 *, struct tWAVEFORMATEX **))(v183 + 120))(v210, &v235);
    wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v234);
    if ( v184 >= 0 )
    {
      v185 = AudioSrvTelemetryProvider::Instance();
      v186 = (_DWORD *)*((_QWORD *)v185 + 1);
      if ( *v186 > 4u && tlgKeywordOn(*((_QWORD *)v185 + 1), 0x400000000000LL) )
      {
        v242 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, struct _GUID *))(*(_QWORD *)a3 + 88LL))(a3, &v259);
        v241 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 80LL))(a3);
        LODWORD(v212) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v213 + 56LL))(*(_QWORD *)v213);
        v240 = (__int64)v237 + 80;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
          (__int64)v186,
          byte_1801A383B,
          v187,
          v188,
          (__int64 *)v243,
          &v240,
          (__int64)&v212,
          (__int64)&v241,
          &v242);
      }
    }
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v237);
  }
LABEL_229:
  v189 = *(_QWORD *)v239;
  if ( (v108 & 0x400000) != 0 || *(_QWORD *)v239 && !*(_DWORD *)(*(_QWORD *)v239 + 960LL) && LODWORD(v223[0]) )
  {
    v223[0] = 0LL;
    v190 = v220;
    v191 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v220 + 224LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v223);
    v192 = v191(v190, v223);
    v36 = v192;
    if ( v192 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x758,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v192);
LABEL_235:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v223);
      goto LABEL_183;
    }
    if ( v223[0] )
    {
      v212 = 0LL;
      v193 = *(_QWORD *)v223[0];
      v212 = 0LL;
      v194 = (*(__int64 (__fastcall **)(__int64, const wchar_t **))(v193 + 56))(v223[0], &v212);
      v36 = v194;
      if ( v194 < 0 )
      {
        v195 = 1884LL;
LABEL_239:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v195,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v194);
LABEL_240:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v212);
        goto LABEL_235;
      }
      v196 = RpcImpersonateClient(0LL);
      if ( v196 )
      {
        v36 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x761,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)v196,
                v204);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v212);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v223);
        goto LABEL_210;
      }
      BYTE1(v227) = 1;
      memset_0(v256, 0, 0x128uLL);
      memset_0(v257, 0, 0x128uLL);
      v197 = (*(__int64 (__fastcall **)(const wchar_t *, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)v212 + 32LL))(
               v212,
               (unsigned int)a22,
               v256,
               v257);
      v36 = v197;
      if ( v197 < 0 )
      {
        v198 = 1893LL;
LABEL_245:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v198,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v197);
        RpcRevertToSelf();
        goto LABEL_240;
      }
      v199 = *(_QWORD *)(v189 + 48);
      *(_QWORD *)(v189 + 48) = 0LL;
      if ( v199 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v199 + 16LL))(v199);
      v197 = SystemAudioStream::move_from_blob(
               (struct CP_EVENT_METADATA_BLOB *)v256,
               (struct ICrossProcessEvent **)(v189 + 48),
               (struct CP_EVENT_METADATA_BLOB *)(v189 + 56));
      v36 = v197;
      if ( v197 < 0 )
      {
        v198 = 1895LL;
        goto LABEL_245;
      }
      v200 = *(_QWORD *)(v189 + 352);
      *(_QWORD *)(v189 + 352) = 0LL;
      if ( v200 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v200 + 16LL))(v200);
      v197 = SystemAudioStream::move_from_blob(
               (struct CP_EVENT_METADATA_BLOB *)v257,
               (struct ICrossProcessEvent **)(v189 + 352),
               (struct CP_EVENT_METADATA_BLOB *)(v189 + 360));
      v36 = v197;
      if ( v197 < 0 )
      {
        v198 = 1896LL;
        goto LABEL_245;
      }
      RpcRevertToSelf();
      if ( v229 == eOffloadConnector )
      {
        v194 = (*(__int64 (__fastcall **)(const wchar_t *, __int64, __int64))(*(_QWORD *)v212 + 40LL))(
                 v212,
                 v189 + 1276,
                 v189 + 1280);
        v36 = v194;
        if ( v194 < 0 )
        {
          v195 = 1904LL;
          goto LABEL_239;
        }
        *(_DWORD *)(v189 + 1272) = 1;
        v194 = (*(__int64 (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)v251 + 32LL))(v251, v212);
        v36 = v194;
        if ( v194 < 0 )
        {
          v195 = 1906LL;
          goto LABEL_239;
        }
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v212);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v223);
  }
  if ( g_UseSoftwareLoopbackOnMatchFormat )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 144LL))(a3) )
    {
      v174 = CAudioSessionManager::DisconnectAllStreamsOfType(*((_QWORD *)v211 + 12));
      v36 = v174;
      if ( v174 < 0 )
      {
        v177 = 1914LL;
        goto LABEL_209;
      }
    }
  }
  if ( v214 && (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 144LL))(a3) )
  {
    LOBYTE(v201) = 1;
    AudioPolicyManagerExtension_OnPostMatchFormatStateChange(*(_QWORD *)(*(_QWORD *)v213 + 48LL), v201);
    v33 = 0;
  }
  if ( v33 && v208 )
    AudioPolicyManagerExtension_OnPreMatchFormatStateChange(*(_QWORD *)(*(_QWORD *)v213 + 48LL), 0LL);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v210);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v220);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v224);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v225);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v221);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Buf1);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v211);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v222,
    0LL);
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)&v219);
  std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((StreamGroupParams **)&v258);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v215,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v216,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v217,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v218,
    0LL);
  v36 = 0;
LABEL_272:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v238);
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v244);
  return (unsigned int)v36;
}
