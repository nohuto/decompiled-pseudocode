/*
 * XREFs of AudioServerGetMixFormat @ 0x180030220
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180003F48 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000FE80 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18001D748 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18002C468 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8B8 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FF80 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003D7C0 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18003FB30 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x18004EF20 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18004F020 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??4?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800805E0 (--4-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerGetMixFormat(void *a1, CEndpointStoreCache *a2, __int64 a3, _QWORD *a4)
{
  struct _TP_TIMER *v7; // rbx
  unsigned int v8; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  int v10; // ecx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v11; // rdi
  int v12; // ecx
  int MixFormat; // ebx
  int v14; // r8d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // ebx
  int v16; // eax
  struct _GUID v17; // xmm6
  unsigned __int8 v18; // di
  WORD v19; // r8
  struct tWAVEFORMATEX *v20; // rax
  int (__fastcall *v21)(struct IAudioPolicyManager *, void *, __int64 *); // rbx
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // edi
  void *v28; // rax
  int v29; // eax
  void *v30; // rcx
  void *v31; // rcx
  int pdwType; // [rsp+28h] [rbp-E0h]
  void *Src; // [rsp+88h] [rbp-80h] BYREF
  int pvData; // [rsp+90h] [rbp-78h] BYREF
  struct tWAVEFORMATEX *v36; // [rsp+98h] [rbp-70h] BYREF
  DWORD pcbData; // [rsp+A0h] [rbp-68h] BYREF
  void **p_Src; // [rsp+A8h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *v39; // [rsp+B0h] [rbp-58h] BYREF
  char v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp-40h] BYREF
  void *v43; // [rsp+D0h] [rbp-38h] BYREF
  CEndpointCharacteristics *v44[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h] BYREF
  struct _GUID v47; // [rsp+F8h] [rbp-10h] BYREF
  struct _TP_TIMER *v48[7]; // [rsp+108h] [rbp+0h] BYREF
  IID v49; // [rsp+140h] [rbp+38h]
  IID v50; // [rsp+150h] [rbp+48h] BYREF
  struct _GUID v51; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v43 = a1;
  v49 = *(IID *)a3;
  v50 = v49;
  EtwEventActivityIdControl(4LL, &v50);
  v7 = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v48,
    *((struct _TP_TIMER **)v9 + 1),
    v8,
    (struct _TP_TIMER *)L"AudioServerGetMixFormat",
    v7);
  Src = 0LL;
  pv = 0LL;
  *(_OWORD *)v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v51 = 0LL;
  v11 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)(a3 + 52);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      v10,
      (unsigned int)&AudioSrv_GetMixFormat_Task_Start,
      (_DWORD)a2,
      *(_DWORD *)(a3 + 48),
      *(_DWORD *)(a3 + 56),
      *(_DWORD *)(a3 + 68),
      *v11);
  *a4 = 0LL;
  MixFormat = ValidateVadServerSettings((IID *)a3);
  if ( MixFormat >= 0 )
  {
    MixFormat = (*(__int64 (__fastcall **)(PVOID, CEndpointStoreCache *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
                  g_pEndpointCharacteristicsCache,
                  a2,
                  0LL,
                  0LL,
                  v44);
    if ( MixFormat >= 0 )
    {
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v44[0] + 5, &v46);
      v15 = *v11;
      v16 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v44[0] + 56LL))(v44[0]);
      MixFormat = DeriveAudioProcessingModeConfiguration(
                    *(_DWORD *)(a3 + 48),
                    *(_DWORD *)(a3 + 56),
                    *(_DWORD *)(a3 + 128),
                    v44,
                    v16 == 1,
                    0,
                    v15,
                    0LL,
                    0,
                    0,
                    0LL,
                    0LL,
                    &v47,
                    &v51,
                    0LL,
                    0LL);
      if ( MixFormat >= 0 )
      {
        p_Src = &Src;
        v39 = 0LL;
        v40 = 1;
        v17 = v51;
        MixFormat = EffectPack::GetMixFormat(v44[1], *v11, &v51, &v39);
        if ( v40 )
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            p_Src,
            v39);
        if ( MixFormat >= 0 )
        {
          if ( *(_DWORD *)(a3 + 140)
            && !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v44[0] + 56LL))(v44[0])
            && !*(_DWORD *)(a3 + 52)
            && *((_WORD *)Src + 1) == 2
            && !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)Src)
            && dword_18018CD90[*(unsigned int *)(a3 + 48)] )
          {
            if ( CEndpointCharacteristics::GetVirtualSurroundEffectMode(v44[0]) )
            {
              v18 = 1;
LABEL_18:
              v36 = 0LL;
              p_Src = (void **)&v36;
              v39 = 0LL;
              v40 = 1;
              MixFormat = CloneWaveFormat((const struct tWAVEFORMATEX *)Src, &v39);
              wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_Src);
              if ( MixFormat < 0 )
              {
                wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                  (void **)&v36,
                  0LL);
                goto LABEL_41;
              }
              v36->nChannels = 8;
              v19 = 8 * (v36->wBitsPerSample >> 3);
              v36->nBlockAlign = v19;
              v36->nAvgBytesPerSec = v36->nSamplesPerSec * v19;
              v20 = v36;
              if ( v36->wFormatTag == 0xFFFE )
              {
                *(_DWORD *)&v36[1].nChannels = 1599;
                v20 = v36;
              }
              v51 = v47;
              if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                                    (struct EndpointCharacteristicsDescriptor *)v44,
                                    &v51,
                                    *(_DWORD *)(a3 + 52),
                                    (const struct tWAVEFORMATEX *)Src,
                                    v20,
                                    0LL) )
              {
                v41 = 0LL;
                v21 = *(int (__fastcall **)(struct IAudioPolicyManager *, void *, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                            + 32LL);
                wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v41);
                if ( v21(g_PolicyManager, v43, &v41) >= 0 )
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v41 + 504LL))(v41) )
                  {
                    v43 = 0LL;
                    p_Src = &v43;
                    v39 = 0LL;
                    v40 = 1;
                    mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)v44[0] + 6), &v39);
                    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&p_Src);
                    v23 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
                    if ( *v23 > 4u && (unsigned __int8)tlgKeywordOn(v23, 512LL) )
                    {
                      *(_QWORD *)&v47.Data1 = v43;
                      pcbData = *(_DWORD *)(a3 + 128);
                      pvData = v18;
                      *(_QWORD *)&v51.Data1 = 0x2000000LL;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                        v24,
                        (int)&unk_1801A75CB,
                        v25,
                        v26,
                        (__int64)&v51,
                        (__int64)&pvData,
                        (__int64)&pcbData,
                        (const wchar_t **)&v47);
                    }
                    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v43);
                  }
                  LOBYTE(v22) = 1;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 512LL))(v41, v22);
                  wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
                    &Src,
                    &v36);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
              }
              MixFormat = 0;
              wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                (void **)&v36,
                0LL);
              goto LABEL_32;
            }
            v18 = 0;
            pvData = 0;
            pcbData = 4;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"DisableGetMixFormatChange",
              0x20000018u,
              0LL,
              &pvData,
              &pcbData);
            if ( !pvData )
              goto LABEL_18;
          }
LABEL_32:
          p_Src = &pv;
          v39 = 0LL;
          v40 = 1;
          v51 = v17;
          v27 = (unsigned int)CEndpointCharacteristics::TryGetOverridingMixFormat(
                                v44[0],
                                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                                &v51,
                                &v39) >> 31;
          if ( v40 )
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              p_Src,
              v39);
          if ( !(_BYTE)v27 && pv )
            wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
              &Src,
              &pv);
          v28 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
          *a4 = v28;
          if ( v28 )
          {
            memcpy_0(v28, Src, *((unsigned __int16 *)Src + 8) + 18LL);
            v51 = *(struct _GUID *)*((_QWORD *)v44[1] + 196);
            v29 = PublishApoTelemetry(a2, &v51);
            v12 = (int)retaddr;
            if ( v29 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xE79,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v29,
                pdwType);
          }
          else
          {
            MixFormat = -2147024882;
          }
        }
      }
    }
  }
LABEL_41:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(v12, (unsigned int)&AudioSrv_GetMixFormat_Task_Stop, v14, 1, (__int64)&v51);
  if ( MixFormat < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 3709, MixFormat);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v44);
  v30 = pv;
  pv = 0LL;
  if ( v30 )
    CoTaskMemFree(v30);
  v31 = Src;
  Src = 0LL;
  if ( v31 )
    CoTaskMemFree(v31);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v48);
  EtwEventActivityIdControl(4LL, &v50);
  return (unsigned int)MixFormat;
}
