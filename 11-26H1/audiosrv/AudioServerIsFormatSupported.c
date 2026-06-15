/*
 * XREFs of AudioServerIsFormatSupported @ 0x18002C660
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x18002BD70 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000FE80 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18001D748 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18002C468 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002D7E0 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8B8 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18002F210 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x18004EF20 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18004F020 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18005DE3C (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x18006E640 (-AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077420 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180078130 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18007C7DC (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180084BB8 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800B0110 (--1-$out_param_t@V-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTa.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AreResourcesAvailableForStream@@YAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1801115B0 (-AreResourcesAvailableForStream@@YAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MI.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1801118D4 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18013AF88 (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerIsFormatSupported(
        __int64 a1,
        const unsigned __int16 *a2,
        int a3,
        __int64 a4,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  struct _TP_TIMER *v9; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rdx
  int v15; // eax
  int MixFormat; // ebx
  __int64 v17; // r9
  int v18; // ecx
  int v19; // r8d
  int EndpointCharacteristicsDescriptor; // eax
  struct CEndpointCharacteristics *v21; // rbx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // ebx
  __int64 (__fastcall *v25)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **); // rbx
  int v26; // eax
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // r8d
  int v30; // edi
  struct _GUID *v31; // r8
  int v32; // eax
  int v33; // ecx
  int v34; // r8d
  int v35; // eax
  int v36; // eax
  void **v37; // rcx
  struct IMMDevice *v38; // rbx
  BOOL v39; // r12d
  int v40; // r15d
  int v41; // edi
  __int64 (__fastcall *v42)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **); // rdi
  int v43; // eax
  int v44; // ecx
  int v45; // r8d
  int AcceptableSPDIFTypeForDevice; // eax
  struct IMMDevice v47; // rax
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  int v51; // ecx
  int v52; // r8d
  unsigned int pftDueTime; // [rsp+20h] [rbp-E0h]
  struct _GUID *pftDueTimea; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX *v56; // [rsp+80h] [rbp-80h] BYREF
  struct IMMDevice *v57; // [rsp+88h] [rbp-78h] BYREF
  struct IAudioProcess *v58; // [rsp+90h] [rbp-70h] BYREF
  struct CEndpointCharacteristics *v59[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  int v61[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct IAudioProcess *v62; // [rsp+B8h] [rbp-48h] BYREF
  void *v63[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v64; // [rsp+D0h] [rbp-30h] BYREF
  char v65; // [rsp+E0h] [rbp-20h]
  struct _GUID v66; // [rsp+F0h] [rbp-10h] BYREF
  char v67; // [rsp+100h] [rbp+0h]
  struct _GUID v68; // [rsp+110h] [rbp+10h] BYREF
  char v69; // [rsp+120h] [rbp+20h]
  void *v70[2]; // [rsp+130h] [rbp+30h] BYREF
  struct _GUID v71; // [rsp+140h] [rbp+40h] BYREF
  struct _GUID *v72; // [rsp+150h] [rbp+50h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v73; // [rsp+158h] [rbp+58h] BYREF
  char v74; // [rsp+160h] [rbp+60h]
  struct _TP_TIMER *pv[7]; // [rsp+168h] [rbp+68h] BYREF
  IID v76; // [rsp+1A0h] [rbp+A0h]
  IID v77; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _GUID v78; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  LODWORD(v58) = a3;
  *(_QWORD *)&v78.Data1 = a2;
  *(_QWORD *)&v68.Data1 = a1;
  *(_QWORD *)&v64.Data1 = a6;
  v76 = *(IID *)a4;
  v77 = v76;
  EtwEventActivityIdControl(4LL, &v77);
  v9 = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v11 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v11 + 1),
    v10,
    (struct _TP_TIMER *)L"AudioServerIsFormatSupported",
    v9);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      v12,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Start,
      (_DWORD)a2,
      *(_DWORD *)(a4 + 48),
      *(_DWORD *)(a4 + 56),
      *(_DWORD *)(a4 + 68),
      *(_DWORD *)(a4 + 52));
  v13 = 0;
  if ( !a3 && !a6 )
  {
    v14 = 3766LL;
LABEL_13:
    MixFormat = -2147024809;
    v17 = 2147942487LL;
    goto LABEL_14;
  }
  v15 = ValidateVadServerSettings((IID *)a4);
  MixFormat = v15;
  if ( v15 < 0 )
  {
    v17 = (unsigned int)v15;
    v14 = 3768LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v17);
    goto LABEL_15;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( Src->wFormatTag == 0xFFFE && Src->cbSize < 0x16u )
  {
    v14 = 3775LL;
    goto LABEL_13;
  }
  *(_OWORD *)v59 = 0LL;
  v60 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v59);
  MixFormat = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor >= 0 )
  {
    v57 = 0LL;
    v21 = v59[0];
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v57);
    wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v21 + 5, &v57);
    if ( Src->nChannels > 2u && (Src->wFormatTag == 1 || Src->wFormatTag == 3) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xECB,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890008LL);
LABEL_44:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v57);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v59);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v33,
          (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
          v34,
          1,
          (__int64)&v78);
      MixFormat = -2004287480;
      goto LABEL_103;
    }
    v56 = 0LL;
    *(_QWORD *)&v66.Data1 = &v56;
    *(_QWORD *)v66.Data4 = 0LL;
    v67 = 1;
    MixFormat = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v66.Data4);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v66);
    if ( MixFormat < 0 )
    {
      v22 = (unsigned int)MixFormat;
      v23 = 3791LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v22);
      goto LABEL_26;
    }
    v24 = *(_DWORD *)(a4 + 52);
    if ( v24 == 1 )
    {
      v58 = 0LL;
      v25 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL);
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v58);
      v26 = v25(g_PolicyManager, *(_QWORD *)&v68.Data1, &v58);
      MixFormat = v26;
      if ( v26 < 0 )
      {
        v27 = 3796LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v26);
LABEL_32:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v58);
        goto LABEL_26;
      }
      if ( !AllowUseofOffloadResources(v59[0], v58, *(_DWORD *)(a4 + 48)) )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v58);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v56,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v57);
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v59);
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            v28,
            (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
            v29,
            1,
            (__int64)&v78);
        MixFormat = 1;
        goto LABEL_103;
      }
      v30 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v58 + 120LL))(v58);
      v64 = 0LL;
      v68 = 0LL;
      v66 = 0LL;
      v26 = DeriveAudioProcessingModeConfiguration(
              *(unsigned int *)(a4 + 48),
              *(unsigned int *)(a4 + 56),
              *(unsigned int *)(a4 + 128),
              v59,
              0,
              a3,
              1,
              0LL,
              0,
              0,
              Src,
              &v66,
              &v68,
              &v64,
              0LL,
              0LL);
      MixFormat = v26;
      if ( v26 < 0 )
      {
        v27 = 3824LL;
        goto LABEL_31;
      }
      *(_QWORD *)&v71.Data1 = 0LL;
      *(_QWORD *)&v64.Data1 = &v71;
      *(_QWORD *)v64.Data4 = 0LL;
      v65 = 1;
      MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                    (struct EndpointCharacteristicsDescriptor *)v59,
                    v56,
                    v31,
                    &v68,
                    pftDueTimea,
                    *(_DWORD *)(a4 + 48),
                    (struct tWAVEFORMATEX **)v64.Data4);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v64);
      if ( MixFormat < 0 )
      {
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v71,
          0LL);
        goto LABEL_32;
      }
      v68 = v66;
      v32 = AreResourcesAvailableForStream(
              (struct EndpointCharacteristicsDescriptor *)v59,
              &v68,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a4 + 52),
              *(_DWORD *)(a4 + 48),
              v30);
      v13 = 0;
      if ( !v32 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEFF,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x88890008LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v71,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v58);
LABEL_43:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v56,
          0LL);
        goto LABEL_44;
      }
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v71,
        0LL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v58);
      goto LABEL_98;
    }
    if ( a3 )
    {
      v38 = v57;
      v61[0] = IsExclusiveModeDisabled(v57);
      v39 = v61[0] == 0;
      v40 = IsOffloadDisabled(v38);
      if ( !v40 || (v41 = v39, !v61[0]) )
      {
        v41 = v39;
        if ( g_PolicyManager )
        {
          v62 = 0LL;
          v42 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL);
          wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v62);
          v43 = v42(g_PolicyManager, *(_QWORD *)&v68.Data1, &v62);
          v13 = v43;
          if ( v43 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF48,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v43);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v62);
LABEL_100:
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              (void **)&v56,
              0LL);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v57);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v59);
            if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
              McGenEventWrite_EtwEventWriteTransfer(
                v51,
                (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
                v52,
                1,
                (__int64)&v78);
            MixFormat = v13;
            goto LABEL_103;
          }
          v41 = v39;
          if ( !v61[0] )
            v41 = (*(__int64 (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)v62 + 144LL))(
                    v62,
                    *(unsigned int *)(a4 + 48),
                    1LL);
          if ( !v40 && (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v62 + 88LL))(v62) )
            LOBYTE(v40) = !AllowUseofOffloadResources(v59[0], v62, *(_DWORD *)(a4 + 48));
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v62);
        }
      }
      if ( !v41 )
      {
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v56,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v57);
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v59);
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            v44,
            (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
            v45,
            1,
            (__int64)&v78);
        MixFormat = -2004287474;
        goto LABEL_103;
      }
      v13 = 0;
      if ( !(unsigned int)IsSPDIFFormat(v56) || !CEndpointCharacteristics::IsSPDIFEndpoint(v59[0]) )
      {
        v47.lpVtbl = v38->lpVtbl;
        *(_QWORD *)v61 = 0LL;
        v48 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v47.lpVtbl->Activate)(
                v38,
                &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
                23LL);
        MixFormat = v48;
        if ( v48 >= 0 )
        {
          v63[0] = 0LL;
          v72 = (struct _GUID *)v63;
          v73 = 0LL;
          v74 = 1;
          MixFormat = CreateKSFormatFromWFXFormat(v56, &v73);
          wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v72);
          if ( MixFormat >= 0 )
          {
            v49 = **(_QWORD **)v61;
            *(_QWORD *)&v66.Data1 = 0LL;
            pftDueTime = v40;
            if ( (*(int (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(v49 + 88))(
                   *(_QWORD *)v61,
                   v63[0],
                   *(unsigned int *)v63[0],
                   0LL) < 0 )
            {
              v70[0] = 0LL;
              if ( (int)CEndpointCharacteristics::TryGetCustomResourceManagerService(
                          v59[0],
                          &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
                          v70) < 0
                || !v70[0]
                || (pftDueTime = v64.Data1,
                    (*(int (__fastcall **)(void *, struct CEndpointCharacteristics **, _QWORD, struct tWAVEFORMATEX *))(*(_QWORD *)v70[0] + 112LL))(
                      v70[0],
                      v59,
                      (unsigned int)v58,
                      Src) < 0) )
              {
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v70);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
                wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                  v63,
                  0LL);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v61);
                goto LABEL_43;
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v70);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              v63,
              0LL);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v61);
            goto LABEL_98;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF66,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)MixFormat);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            v63,
            0LL);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF63,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v48);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v61);
LABEL_26:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v56,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v57);
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v59);
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) == 0 )
          goto LABEL_103;
        goto LABEL_16;
      }
      AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v38, v56, 0LL, v40);
      MixFormat = AcceptableSPDIFTypeForDevice;
      if ( AcceptableSPDIFTypeForDevice < 0 )
      {
        v22 = (unsigned int)AcceptableSPDIFTypeForDevice;
        v23 = 3933LL;
        goto LABEL_25;
      }
    }
    else
    {
      v71 = 0LL;
      v66 = 0LL;
      v64 = 0LL;
      v35 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v59[0] + 56LL))(v59[0]);
      v36 = DeriveAudioProcessingModeConfiguration(
              *(unsigned int *)(a4 + 48),
              *(unsigned int *)(a4 + 56),
              *(unsigned int *)(a4 + 128),
              v59,
              v35 == 1,
              0,
              v24,
              0LL,
              0,
              0,
              0LL,
              &v64,
              &v66,
              &v71,
              0LL,
              0LL);
      MixFormat = v36;
      if ( v36 < 0 )
      {
        v22 = (unsigned int)v36;
        v23 = 3866LL;
        goto LABEL_25;
      }
      if ( !*(_DWORD *)(a4 + 68) )
      {
        if ( *(_DWORD *)(a4 + 132) )
        {
          if ( (v56->wFormatTag != 0xFFFE
             || (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v56[1].nSamplesPerSec
                                                                                          + 2)
              || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v56[1].wBitsPerSample)
             && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v56[1].nSamplesPerSec
                                                                                          + 2)
              || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v56[1].wBitsPerSample))
            && ((v56->wFormatTag - 1) & 0xFFFD) != 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF25,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)0x88890008LL);
            goto LABEL_43;
          }
          goto LABEL_98;
        }
        *(_QWORD *)&v64.Data1 = 0LL;
        *(_QWORD *)&v68.Data1 = &v64;
        *(_QWORD *)v68.Data4 = 0LL;
        v69 = 1;
        v78 = v71;
        MixFormat = EffectPack::GetMixFormat(
                      v59[1],
                      *(enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)(a4 + 52),
                      &v78,
                      (struct tWAVEFORMATEX **)v68.Data4);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v68);
        if ( MixFormat >= 0 )
        {
          v78 = v66;
          MixFormat = IsStreamFormatSupportedForMixFormat(
                        (struct EndpointCharacteristicsDescriptor *)v59,
                        &v78,
                        *(_DWORD *)(a4 + 52),
                        *(const struct tWAVEFORMATEX **)&v64.Data1,
                        v56,
                        a6);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF2B,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)MixFormat);
        }
        v37 = (void **)&v64;
        goto LABEL_63;
      }
      *(_QWORD *)&v68.Data1 = 0LL;
      v72 = &v68;
      v73 = 0LL;
      v74 = 1;
      MixFormat = DeriveConnectorFormatFromStreamFormat(
                    (struct EndpointCharacteristicsDescriptor *)v59,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a4 + 52),
                    v56,
                    &v71,
                    &v66,
                    &v64,
                    1,
                    (struct tWAVEFORMATEX **)&v73);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v72);
      if ( MixFormat < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF3B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        v37 = (void **)&v68;
LABEL_63:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          v37,
          0LL);
        goto LABEL_26;
      }
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v68,
        0LL);
    }
LABEL_98:
    v64 = *(struct _GUID *)*((_QWORD *)v59[1] + 196);
    v50 = PublishApoTelemetry(*(CEndpointStoreCache **)&v78.Data1, &v64);
    if ( v50 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF7E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v50,
        pftDueTime);
    goto LABEL_100;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEC4,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v59);
LABEL_15:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
LABEL_16:
    McGenEventWrite_EtwEventWriteTransfer(
      v18,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
      v19,
      1,
      (__int64)&v78);
LABEL_103:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v77);
  return (unsigned int)MixFormat;
}
