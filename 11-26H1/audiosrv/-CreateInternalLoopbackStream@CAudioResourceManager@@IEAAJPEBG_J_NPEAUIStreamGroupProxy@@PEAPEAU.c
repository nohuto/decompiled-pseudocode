/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG_N@Z @ 0x1800C5A58 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x180001794 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180002C6C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTempl.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x18002B63C (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002F580 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004D2AC (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18004F020 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800537B0 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x180055F20 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_180055F20.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180061E24 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180062BE8 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x1800666C0 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x1800696A8 (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18006DF08 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_18006DF08.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800747EC (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077420 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180077610 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180077610.c)
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180078BF0 (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800793CC (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18008AEDC (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _lambda_9d267c7ebe07ecbec4fbf9be6438edfc_::_lambda_9d267c7ebe07ecbec4fbf9be6438edfc_ @ 0x1800C3E9C (_lambda_9d267c7ebe07ecbec4fbf9be6438edfc_--_lambda_9d267c7ebe07ecbec4fbf9be6438edfc_.c)
 *     _lambda_9d267c7ebe07ecbec4fbf9be6438edfc_::operator() @ 0x1800C4A94 (_lambda_9d267c7ebe07ecbec4fbf9be6438edfc_--operator().c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J66PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800C91E0 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        char a4,
        struct IStreamGroupProxy *a5,
        struct IBridgeStreamInstanceProxy **a6)
{
  int EndpointCharacteristicsDescriptor; // eax
  int v10; // ebx
  __int64 v11; // rdx
  char v12; // r15
  unsigned int v13; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v14; // r14d
  struct _GUID v15; // xmm6
  struct _GUID v16; // xmm7
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbx
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  struct AudioSrvTelemetryProvider *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  struct AudioSrvTelemetryProvider *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *v31; // rbx
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  struct AudioSrvTelemetryProvider *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  struct AudioSrvTelemetryProvider *v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  struct tWAVEFORMATEX *v43; // rbx
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int wFormatTag; // eax
  struct AudioSrvTelemetryProvider *v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  struct AudioSrvTelemetryProvider *v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  struct tWAVEFORMATEX *v55; // rbx
  _DWORD *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // eax
  struct AudioSrvTelemetryProvider *v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  struct AudioSrvTelemetryProvider *v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  int SharedModeEnginePeriodicity; // eax
  double v68; // xmm1_8
  int v69; // eax
  __int64 v70; // rax
  int v71; // eax
  RTL_SRWLOCK *v72; // rcx
  __int64 v73; // r8
  int EndpointStore; // eax
  int CustomResourceManagerService; // eax
  struct _RTL_CRITICAL_SECTION **v76; // rax
  struct CEndpointStore *v77; // rdi
  __int64 (__fastcall *v78)(struct IDeviceGraphManager *, CEndpointCharacteristics **, _QWORD, StreamGroupParams *, _DWORD, __int128 *, __int64, __int64 *); // rbx
  int v79; // eax
  unsigned __int64 v80; // r9
  __int64 v81; // rdx
  _QWORD *v82; // rax
  __int64 v83; // rcx
  _DWORD *v84; // r8
  __int64 v85; // r9
  __int64 v86; // rbx
  __int64 (__fastcall *v87)(__int64, __int64 **); // rsi
  int v88; // eax
  __int64 *v89; // rcx
  __int64 v90; // rdx
  unsigned __int64 v91; // r9
  int SaDeviceForSharedStream; // eax
  __int64 v93; // rcx
  __int64 v94; // r8
  int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rax
  int v99; // ebx
  _DWORD *v100; // rbx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  __int64 v105; // [rsp+28h] [rbp-150h]
  struct _RTL_CRITICAL_SECTION *v106; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v107; // [rsp+100h] [rbp-78h] BYREF
  struct IStreamGroupProxy *v108; // [rsp+108h] [rbp-70h] BYREF
  const wchar_t *v109; // [rsp+110h] [rbp-68h] BYREF
  __int64 *v110; // [rsp+118h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *v111; // [rsp+120h] [rbp-58h] BYREF
  __int64 v112; // [rsp+128h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v113; // [rsp+130h] [rbp-48h] BYREF
  _DWORD *v114; // [rsp+138h] [rbp-40h] BYREF
  __int64 v115; // [rsp+140h] [rbp-38h] BYREF
  struct _GUID *v116; // [rsp+148h] [rbp-30h] BYREF
  StreamGroupParams *v117; // [rsp+150h] [rbp-28h] BYREF
  void *v118; // [rsp+158h] [rbp-20h] BYREF
  __int64 v119; // [rsp+160h] [rbp-18h] BYREF
  struct CEndpointStore *v120[2]; // [rsp+168h] [rbp-10h] BYREF
  GUID v121; // [rsp+178h] [rbp+0h] BYREF
  struct _GUID v122; // [rsp+188h] [rbp+10h] BYREF
  struct _GUID Buf1; // [rsp+198h] [rbp+20h] BYREF
  __int128 v124; // [rsp+1A8h] [rbp+30h] BYREF
  __int64 v125; // [rsp+1B8h] [rbp+40h]
  CEndpointCharacteristics *v126[2]; // [rsp+1C0h] [rbp+48h] BYREF
  __int64 v127; // [rsp+1D0h] [rbp+58h]
  __int64 v128; // [rsp+1D8h] [rbp+60h] BYREF
  struct tWAVEFORMATEX **v129; // [rsp+1E0h] [rbp+68h] BYREF
  struct tWAVEFORMATEX *v130; // [rsp+1E8h] [rbp+70h] BYREF
  char v131; // [rsp+1F0h] [rbp+78h]
  struct IStreamGroupProxy *v132; // [rsp+1F8h] [rbp+80h] BYREF
  struct IBridgeStreamInstanceProxy **v133; // [rsp+200h] [rbp+88h]
  __int64 *v134; // [rsp+208h] [rbp+90h] BYREF
  struct tWAVEFORMATEX *v135; // [rsp+210h] [rbp+98h] BYREF
  char v136; // [rsp+218h] [rbp+A0h]
  _DWORD **v137; // [rsp+220h] [rbp+A8h] BYREF
  struct tWAVEFORMATEX *v138; // [rsp+228h] [rbp+B0h] BYREF
  char v139; // [rsp+230h] [rbp+B8h]
  _DWORD v140[6]; // [rsp+238h] [rbp+C0h] BYREF
  __int64 v141; // [rsp+250h] [rbp+D8h]
  struct _GUID v142; // [rsp+258h] [rbp+E0h]
  __int64 v143; // [rsp+268h] [rbp+F0h]
  const unsigned __int16 *v144; // [rsp+270h] [rbp+F8h]
  __int128 v145; // [rsp+278h] [rbp+100h]
  struct tWAVEFORMATEX **v146; // [rsp+288h] [rbp+110h] BYREF
  struct tWAVEFORMATEX *v147; // [rsp+290h] [rbp+118h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v148; // [rsp+298h] [rbp+120h]
  struct _GUID v149; // [rsp+29Ch] [rbp+124h]
  int v150; // [rsp+2ACh] [rbp+134h]
  struct _GUID v151; // [rsp+2C8h] [rbp+150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+1C8h]

  v128 = a3;
  v132 = a5;
  v133 = a6;
  *(_OWORD *)v126 = 0LL;
  v127 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v126);
  v10 = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v11 = 3194LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
    goto LABEL_115;
  }
  v12 = *((_BYTE *)v126[0] + 264);
  if ( !a4 || (v13 = 3, !v12) )
    v13 = 2;
  v14 = eHostProcessConnector;
  if ( (unsigned int)EffectPack::HardwareLoopbackEnabled(v126[1]) )
  {
    if ( !a4 || (v14 = eConnectorCount, !v12) )
      v14 = eLoopbackConnector;
  }
  v151 = GUID_00000000_0000_0000_0000_000000000000;
  v122 = GUID_00000000_0000_0000_0000_000000000000;
  Buf1 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)v120 = GUID_00000000_0000_0000_0000_000000000000;
  v121 = GUID_00000000_0000_0000_0000_000000000000;
  EndpointCharacteristicsDescriptor = DeriveAudioProcessingModeConfiguration(
                                        0,
                                        0,
                                        0,
                                        v126,
                                        v13,
                                        0,
                                        v14,
                                        0LL,
                                        0,
                                        0,
                                        0LL,
                                        &v151,
                                        &v122,
                                        &Buf1,
                                        (struct _GUID *)v120,
                                        &v121);
  v10 = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v11 = 3235LL;
    goto LABEL_12;
  }
  v112 = 0LL;
  v114 = 0LL;
  v113 = 0LL;
  v111 = 0LL;
  v129 = &v111;
  v130 = 0LL;
  v131 = 1;
  v146 = &v113;
  v147 = 0LL;
  LOBYTE(v148) = 1;
  v137 = &v114;
  v138 = 0LL;
  v139 = 1;
  v134 = &v112;
  v135 = 0LL;
  v136 = 1;
  v15 = v151;
  v16 = v122;
  v10 = DeriveDeviceGraphFormatsForStream(
          v126,
          0,
          v14,
          AUDCLNT_SHAREMODE_SHARED,
          0,
          (IAudioMediaType *)&Buf1,
          &v122,
          &v151,
          0LL,
          &v135,
          &v138,
          &v147,
          &v130);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v134);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v137);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v146);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v129);
  if ( v10 < 0 )
  {
    v17 = (unsigned int)v10;
    v18 = 3251LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v17);
LABEL_16:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v111,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v113,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v114,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v112,
      0LL);
    goto LABEL_115;
  }
  v19 = v112;
  if ( v112 )
  {
    v24 = *(unsigned __int16 *)v112;
    if ( (_WORD)v24 == 0xFFFE )
    {
      v28 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v28 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v28 + 1), 512LL) )
      {
        LODWORD(v107) = *(_DWORD *)(v19 + 20);
        v116 = (struct _GUID *)(v19 + 24);
        LODWORD(v110) = *(_DWORD *)(v112 + 8);
        LODWORD(v106) = *(_DWORD *)(v112 + 4);
        LOWORD(v108) = *(_WORD *)(v112 + 2);
        v109 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v29,
          byte_1801A34F5,
          v29,
          v30,
          &v109,
          (__int64)&v108,
          (__int64)&v106,
          (__int64)&v110,
          (__int64 *)&v116,
          (__int64)&v107);
      }
    }
    else
    {
      v151 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v151.Data1 = v24;
      v25 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v25 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v25 + 1), 512LL) )
      {
        v116 = &v151;
        LODWORD(v110) = *(_DWORD *)(v112 + 8);
        LODWORD(v107) = *(_DWORD *)(v112 + 4);
        LOWORD(v108) = *(_WORD *)(v112 + 2);
        v109 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v26,
          byte_1801A3599,
          v26,
          v27,
          &v109,
          (__int64)&v108,
          (__int64)&v107,
          (__int64)&v110,
          (__int64 *)&v116);
      }
    }
  }
  else
  {
    v20 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v20 > 4u && tlgKeywordOn((__int64)v20, 512LL) )
    {
      LODWORD(v108) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v21,
        byte_1801A3630,
        v22,
        v23,
        (__int64)&v108);
    }
  }
  v31 = v114;
  if ( v114 )
  {
    v36 = *(unsigned __int16 *)v114;
    if ( (_WORD)v36 == 0xFFFE )
    {
      v40 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v40 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v40 + 1), 512LL) )
      {
        LODWORD(v106) = v31[5];
        v116 = (struct _GUID *)(v31 + 6);
        LODWORD(v107) = v114[2];
        LODWORD(v110) = v114[1];
        LOWORD(v108) = *((_WORD *)v114 + 1);
        v109 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v41,
          byte_1801A3353,
          v41,
          v42,
          &v109,
          (__int64)&v108,
          (__int64)&v110,
          (__int64)&v107,
          (__int64 *)&v116,
          (__int64)&v106);
      }
    }
    else
    {
      v151 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v151.Data1 = v36;
      v37 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v37 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v37 + 1), 512LL) )
      {
        v116 = &v151;
        LODWORD(v106) = v114[2];
        LODWORD(v107) = v114[1];
        LOWORD(v108) = *((_WORD *)v114 + 1);
        v109 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v38,
          byte_1801A33FA,
          v38,
          v39,
          &v109,
          (__int64)&v108,
          (__int64)&v107,
          (__int64)&v106,
          (__int64 *)&v116);
      }
    }
  }
  else
  {
    v32 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v32 > 4u && tlgKeywordOn((__int64)v32, 512LL) )
    {
      LODWORD(v106) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v33,
        byte_1801A3494,
        v34,
        v35,
        (__int64)&v106);
    }
  }
  v43 = v113;
  if ( v113 )
  {
    wFormatTag = v113->wFormatTag;
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      v52 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v52 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v52 + 1), 512LL) )
      {
        LODWORD(v106) = *(_DWORD *)&v43[1].nChannels;
        v116 = (struct _GUID *)((char *)&v43[1].nSamplesPerSec + 2);
        LODWORD(v107) = v113->nAvgBytesPerSec;
        LODWORD(v110) = v113->nSamplesPerSec;
        LOWORD(v108) = v113->nChannels;
        v109 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v53,
          byte_1801A31B4,
          v53,
          v54,
          &v109,
          (__int64)&v108,
          (__int64)&v110,
          (__int64)&v107,
          (__int64 *)&v116,
          (__int64)&v106);
      }
    }
    else
    {
      v151 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v151.Data1 = wFormatTag;
      v49 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v49 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v49 + 1), 512LL) )
      {
        v116 = &v151;
        LODWORD(v106) = v113->nAvgBytesPerSec;
        LODWORD(v107) = v113->nSamplesPerSec;
        LOWORD(v108) = v113->nChannels;
        v109 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v50,
          byte_1801A325A,
          v50,
          v51,
          &v109,
          (__int64)&v108,
          (__int64)&v107,
          (__int64)&v106,
          (__int64 *)&v116);
      }
    }
  }
  else
  {
    v44 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v44 > 4u && tlgKeywordOn((__int64)v44, 512LL) )
    {
      LODWORD(v106) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v45,
        byte_1801A32F3,
        v46,
        v47,
        (__int64)&v106);
    }
  }
  v55 = v111;
  if ( v111 )
  {
    v60 = v111->wFormatTag;
    if ( (_WORD)v60 == 0xFFFE )
    {
      v64 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v64 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v64 + 1), 512LL) )
      {
        LODWORD(v106) = *(_DWORD *)&v55[1].nChannels;
        v116 = (struct _GUID *)((char *)&v55[1].nSamplesPerSec + 2);
        LODWORD(v107) = v111->nAvgBytesPerSec;
        LODWORD(v110) = v111->nSamplesPerSec;
        LOWORD(v108) = v111->nChannels;
        v109 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v65,
          byte_1801A3018,
          v65,
          v66,
          &v109,
          (__int64)&v108,
          (__int64)&v110,
          (__int64)&v107,
          (__int64 *)&v116,
          (__int64)&v106);
      }
    }
    else
    {
      v151 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v151.Data1 = v60;
      v61 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v61 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v61 + 1), 512LL) )
      {
        v116 = &v151;
        LODWORD(v106) = v111->nAvgBytesPerSec;
        LODWORD(v107) = v111->nSamplesPerSec;
        LOWORD(v108) = v111->nChannels;
        v109 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v62,
          byte_1801A30BD,
          v62,
          v63,
          &v109,
          (__int64)&v108,
          (__int64)&v107,
          (__int64)&v106,
          (__int64 *)&v116);
      }
    }
  }
  else
  {
    v56 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v56 > 4u && tlgKeywordOn((__int64)v56, 512LL) )
    {
      LODWORD(v106) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v57,
        byte_1801A3155,
        v58,
        v59,
        (__int64)&v106);
    }
  }
  LODWORD(v108) = 0;
  v151 = v15;
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  (_QWORD *)v126[1],
                                  (unsigned int)v14,
                                  &v111->wFormatTag,
                                  &v151,
                                  0,
                                  &v108,
                                  0LL,
                                  0LL,
                                  0LL);
  v10 = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v17 = (unsigned int)SharedModeEnginePeriodicity;
    v18 = 3261LL;
    goto LABEL_15;
  }
  v68 = (double)(int)v108 * 10000000.0 / (double)(int)v111->nSamplesPerSec + 0.5;
  v115 = 0LL;
  v151 = v121;
  v122 = v16;
  Buf1 = v15;
  v69 = InitializeStreamAndModeDescriptors(
          (AudioModeEffectsWatcherFactory *)v126,
          v14,
          &Buf1,
          (__int64)&v122,
          (__int64)&v151,
          0,
          0LL,
          v112,
          0LL,
          (unsigned int)(int)v68,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0,
          0,
          0LL,
          0LL,
          0,
          0LL,
          -1,
          0LL,
          (__int64)&v115);
  v10 = v69;
  if ( v69 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v69);
LABEL_65:
    std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)&v115);
    goto LABEL_16;
  }
  v140[5] = 0;
  v145 = 0LL;
  v143 = (unsigned int)(int)v68;
  v140[0] = v13;
  v142 = v16;
  v140[2] = v14;
  v144 = a2;
  v140[1] = 1;
  v140[4] = GetCurrentProcessId();
  v141 = v128;
  v70 = v115;
  if ( v115 )
  {
    *(_DWORD *)(*(_QWORD *)(v115 + 8) + 8LL) = *(unsigned __int16 *)(v112 + 16) + 18;
    *(_QWORD *)(*(_QWORD *)(v115 + 8) + 16LL) = v112;
    v70 = v115;
  }
  v124 = 0LL;
  v125 = 0LL;
  v140[3] = v14 == eConnectorCount;
  v117 = 0LL;
  v151 = *(struct _GUID *)v120;
  v71 = DeriveStreamGroupParametersForStream(
          (__int64 *)v126,
          v14,
          v13,
          v143,
          v105,
          &v151,
          0,
          0,
          (struct tWAVEFORMATEX *)v114,
          v70,
          0LL,
          &v117);
  v10 = v71;
  if ( v71 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCDF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v71);
LABEL_70:
    std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v117);
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v124);
    goto LABEL_65;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (__int64)v72,
      (__int64)&AudioResourceManager_StreamSettings_Derived,
      v73,
      1,
      (__int64)&v151);
  v120[0] = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v72, a2, v120);
  v10 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_75:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)v120);
    goto LABEL_70;
  }
  v119 = 0LL;
  v118 = 0LL;
  CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                   v126[0],
                                   &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
                                   &v118);
  v10 = CustomResourceManagerService;
  if ( CustomResourceManagerService < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCEA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)CustomResourceManagerService);
LABEL_78:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v118);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v119);
    goto LABEL_75;
  }
  *(_QWORD *)&v121.Data1 = 0LL;
  if ( v118 )
  {
    v76 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(void *, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v118 + 104LL))(
                                             v118,
                                             &v106);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::operator=(
      (struct _RTL_CRITICAL_SECTION **)&v121,
      v76);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v106);
  }
  v77 = v120[0];
  (*(void (__fastcall **)(_QWORD, const wchar_t **))(**((_QWORD **)v120[0] + 13) + 128LL))(
    *((_QWORD *)v120[0] + 13),
    &v109);
  v107 = 0LL;
  v78 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, CEndpointCharacteristics **, _QWORD, StreamGroupParams *, _DWORD, __int128 *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 48LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v107);
  v79 = v78(g_DeviceGraphManager, v126, *((_QWORD *)v77 + 13), v117, 0, &v124, v115, &v107);
  v10 = v79;
  if ( v79 < 0 )
  {
    v80 = (unsigned int)v79;
    v81 = 3321LL;
LABEL_83:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v81,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v80);
LABEL_84:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v107);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v109);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v121);
    goto LABEL_78;
  }
  v82 = lambda_9d267c7ebe07ecbec4fbf9be6438edfc_::_lambda_9d267c7ebe07ecbec4fbf9be6438edfc_(
          &v146,
          (__int64)&v107,
          (__int64)v140,
          (__int64)&v115,
          (__int64)&v117,
          (__int64)&v119,
          (__int64)&v132,
          (__int64)&v124,
          (__int64)&v128);
  v10 = lambda_9d267c7ebe07ecbec4fbf9be6438edfc_::operator()((_QWORD **)v82);
  v84 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v84 > 4u )
  {
    v108 = v132;
    *(_QWORD *)&Buf1.Data1 = v128;
    *(_QWORD *)&v122.Data1 = v107;
    LODWORD(v106) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (int)v84,
      (int)&unk_1801A2FBA,
      (__int64)v84,
      v85,
      (__int64)&v106,
      (__int64)&v122,
      (__int64)&Buf1,
      (__int64)&v108);
  }
  if ( v10 < 0 )
  {
    v80 = (unsigned int)v10;
    v81 = 3353LL;
    goto LABEL_83;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v83,
      (__int64)&AudioResourceManager_Stream_Created,
      (__int64)v84,
      1,
      (__int64)&v151);
  v110 = 0LL;
  v86 = v107;
  v87 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v107 + 224LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v110);
  v88 = v87(v86, &v110);
  v10 = v88;
  if ( v88 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v88);
LABEL_93:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v110);
    goto LABEL_84;
  }
  v89 = v110;
  if ( !v110 )
  {
    v106 = 0LL;
    v129 = (struct tWAVEFORMATEX **)&v106;
    v130 = 0LL;
    v131 = 1;
    v151 = v16;
    v122 = v15;
    v10 = DeriveSaDeviceParametersForStream(
            (CEndpointCharacteristics ***)v126,
            AUDCLNT_SHAREMODE_SHARED,
            v14,
            &v122,
            &v151,
            v111,
            v113,
            *((_QWORD *)v117 + 3),
            (struct SaDeviceParams **)&v130);
    wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v129);
    if ( v10 < 0 )
    {
      v90 = 3367LL;
LABEL_97:
      v91 = (unsigned int)v10;
LABEL_98:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v90,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v91);
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v106);
      goto LABEL_93;
    }
    if ( CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v126[0])
      && _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v77 + 12) + 276LL), 0, 0) )
    {
      v10 = -2005139364;
      v90 = 3376LL;
      goto LABEL_97;
    }
    *(_WORD *)((char *)&v147 + 5) = 0;
    HIBYTE(v147) = 0;
    v150 = 0;
    BYTE4(v147) = 1;
    LODWORD(v147) = 0;
    v146 = 0LL;
    v149 = v15;
    v148 = v14;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v110);
    SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                (__int64)this,
                                v126,
                                (__int64)v118,
                                (__int64)v106,
                                0x20002u,
                                0,
                                (__int64)&v146,
                                (__int64)&v124,
                                0,
                                *((CAudioSessionManager **)v77 + 12),
                                0,
                                0,
                                (__int64)&v110);
    v10 = SaDeviceForSharedStream;
    if ( SaDeviceForSharedStream < 0 )
    {
      v91 = (unsigned int)SaDeviceForSharedStream;
      v90 = 3390LL;
      goto LABEL_98;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v93,
        (__int64)&AudioResourceManager_SaDevice_Created,
        v94,
        1,
        (__int64)&v151);
    v95 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
            g_DeviceGraphManager,
            v107,
            v110,
            1LL,
            0LL);
    v10 = v95;
    if ( v95 < 0 )
    {
      v91 = (unsigned int)v95;
      v90 = 3402LL;
      goto LABEL_98;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v96,
        (__int64)&AudioResourceManager_SaDevice_Connected,
        v97,
        1,
        (__int64)&v151);
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v106);
    v89 = v110;
  }
  v116 = 0LL;
  v98 = *v89;
  v129 = (struct tWAVEFORMATEX **)&v116;
  v130 = 0LL;
  v131 = 1;
  v99 = (*(__int64 (__fastcall **)(__int64 *, struct tWAVEFORMATEX **))(v98 + 120))(v89, &v130);
  wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v129);
  if ( v99 >= 0 )
  {
    v100 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v100 > 4u )
    {
      *(_QWORD *)&v122.Data1 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v132 + 152LL))(v132);
      LOBYTE(v108) = v12;
      *(_QWORD *)&Buf1.Data1 = a2;
      *(_QWORD *)&v151.Data1 = v128;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
        (int)v100,
        (int)&unk_1801A2F46,
        v101,
        v102,
        (__int64)&v151,
        (const wchar_t **)&Buf1,
        (__int64)&v108,
        (const wchar_t **)&v122);
    }
  }
  std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v116);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v110);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v107);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v109);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v121);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v118);
  v103 = v119;
  v119 = 0LL;
  *v133 = (struct IBridgeStreamInstanceProxy *)v103;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v119);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)v120);
  std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v117);
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v124);
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)&v115);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v111,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v113,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v114,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v112,
    0LL);
  v10 = 0;
LABEL_115:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v126);
  return (unsigned int)v10;
}
