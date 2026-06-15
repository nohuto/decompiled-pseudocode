/*
 * XREFs of ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E32D0
 * Callers:
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E1AE8 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002F580 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004D2AC (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x180055F20 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_180055F20.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18006DF08 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_18006DF08.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180077610 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180077610.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CBtAudioResourceManagerBase::GetDefaultSecondaryProfileRenderSaDeviceParams(
        CBtAudioResourceManagerBase *this,
        CEndpointCharacteristics **a2,
        struct SaDeviceParams **a3)
{
  struct _GUID v6; // xmm6
  struct _GUID *v7; // rax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  struct tWAVEFORMATEX *v11; // rbx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int wFormatTag; // eax
  struct AudioSrvTelemetryProvider *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  struct AudioSrvTelemetryProvider *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  struct tWAVEFORMATEX *v23; // rbx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  struct AudioSrvTelemetryProvider *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  struct AudioSrvTelemetryProvider *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  CEndpointCharacteristics *v35; // rbx
  int SharedModeEnginePeriodicity; // eax
  struct tWAVEFORMATEX *v37; // rbx
  __int64 v38; // rdi
  struct tWAVEFORMATEX *v39; // rsi
  int v41; // [rsp+70h] [rbp-90h] BYREF
  DWORD nSamplesPerSec; // [rsp+74h] [rbp-8Ch] BYREF
  DWORD nAvgBytesPerSec; // [rsp+78h] [rbp-88h] BYREF
  struct tWAVEFORMATEX *v44; // [rsp+80h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v45; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v46; // [rsp+90h] [rbp-70h] BYREF
  void *v47; // [rsp+A0h] [rbp-60h] BYREF
  void *v48; // [rsp+A8h] [rbp-58h] BYREF
  void **v49; // [rsp+B0h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v50; // [rsp+B8h] [rbp-48h] BYREF
  char v51; // [rsp+C0h] [rbp-40h]
  void **v52; // [rsp+C8h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *v53; // [rsp+D0h] [rbp-30h] BYREF
  char v54; // [rsp+D8h] [rbp-28h]
  struct tWAVEFORMATEX **v55; // [rsp+E0h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *v56; // [rsp+E8h] [rbp-18h] BYREF
  char v57; // [rsp+F0h] [rbp-10h]
  struct tWAVEFORMATEX **v58; // [rsp+F8h] [rbp-8h] BYREF
  struct tWAVEFORMATEX *v59; // [rsp+100h] [rbp+0h] BYREF
  char v60; // [rsp+108h] [rbp+8h]
  __int64 v61[2]; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v62; // [rsp+120h] [rbp+20h] BYREF
  struct _GUID v63; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v64[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v65[16]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v44 = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  v58 = &v44;
  v59 = 0LL;
  v60 = 1;
  v55 = &v45;
  v56 = 0LL;
  v57 = 1;
  v52 = &v47;
  v53 = 0LL;
  v54 = 1;
  v49 = &v48;
  v50 = 0LL;
  v51 = 1;
  v6 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, __int64 *))(*(_QWORD *)this + 136LL))(
                          this,
                          v61);
  v7 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                         this,
                         v65);
  v63 = v6;
  v62 = *v7;
  v46 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                           this,
                           v64);
  v8 = DeriveDeviceGraphFormatsForStream(
         a2,
         0,
         0,
         AUDCLNT_SHAREMODE_SHARED,
         0,
         (IAudioMediaType *)&v46,
         &v62,
         &v63,
         0LL,
         &v50,
         &v53,
         &v56,
         &v59);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v49);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v52);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v55);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v58);
  if ( v8 >= 0 )
  {
    v11 = v45;
    if ( v45 )
    {
      wFormatTag = v45->wFormatTag;
      if ( (_WORD)wFormatTag == 0xFFFE )
      {
        v20 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v20 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v20 + 1), 16896LL) )
        {
          nSamplesPerSec = *(_DWORD *)&v11[1].nChannels;
          *(_QWORD *)&v46.Data1 = (char *)v11 + 24;
          nAvgBytesPerSec = v45->nAvgBytesPerSec;
          LODWORD(v61[0]) = v45->nSamplesPerSec;
          LOWORD(v41) = v45->nChannels;
          *(_QWORD *)&v62.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v21,
            byte_1801A5627,
            v21,
            v22,
            (const wchar_t **)&v62,
            (__int64)&v41,
            (__int64)v61,
            (__int64)&nAvgBytesPerSec,
            (__int64 *)&v46,
            (__int64)&nSamplesPerSec);
        }
      }
      else
      {
        v62 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v62.Data1 = wFormatTag;
        v17 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v17 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v17 + 1), 16896LL) )
        {
          v61[0] = (__int64)&v62;
          nAvgBytesPerSec = v45->nAvgBytesPerSec;
          nSamplesPerSec = v45->nSamplesPerSec;
          LOWORD(v41) = v45->nChannels;
          *(_QWORD *)&v46.Data1 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v18,
            byte_1801A56C8,
            v18,
            v19,
            (const wchar_t **)&v46,
            (__int64)&v41,
            (__int64)&nSamplesPerSec,
            (__int64)&nAvgBytesPerSec,
            v61);
        }
      }
    }
    else
    {
      v12 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v12 > 4u && tlgKeywordOn((__int64)v12, 16896LL) )
      {
        v41 = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          v13,
          byte_1801A575C,
          v14,
          v15,
          (__int64)&v41);
      }
    }
    v23 = v44;
    if ( v44 )
    {
      v28 = v44->wFormatTag;
      if ( (_WORD)v28 == 0xFFFE )
      {
        v32 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v32 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v32 + 1), 16896LL) )
        {
          LODWORD(v61[0]) = *(_DWORD *)&v23[1].nChannels;
          *(_QWORD *)&v62.Data1 = (char *)v23 + 24;
          nSamplesPerSec = v44->nAvgBytesPerSec;
          nAvgBytesPerSec = v44->nSamplesPerSec;
          LOWORD(v41) = v44->nChannels;
          *(_QWORD *)&v46.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v33,
            byte_1801A549A,
            v33,
            v34,
            (const wchar_t **)&v46,
            (__int64)&v41,
            (__int64)&nAvgBytesPerSec,
            (__int64)&nSamplesPerSec,
            (__int64 *)&v62,
            (__int64)v61);
        }
      }
      else
      {
        v63 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v63.Data1 = v28;
        v29 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v29 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v29 + 1), 16896LL) )
        {
          *(_QWORD *)&v62.Data1 = &v63;
          LODWORD(v61[0]) = v44->nAvgBytesPerSec;
          nSamplesPerSec = v44->nSamplesPerSec;
          LOWORD(v41) = v44->nChannels;
          *(_QWORD *)&v46.Data1 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v30,
            byte_1801A553A,
            v30,
            v31,
            (const wchar_t **)&v46,
            (__int64)&v41,
            (__int64)&nSamplesPerSec,
            (__int64)v61,
            (__int64 *)&v62);
        }
      }
    }
    else
    {
      v24 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v24 > 4u && tlgKeywordOn((__int64)v24, 16896LL) )
      {
        LODWORD(v61[0]) = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          v25,
          byte_1801A55CD,
          v26,
          v27,
          (__int64)v61);
      }
    }
    v41 = 0;
    nSamplesPerSec = 0;
    LODWORD(v61[0]) = 0;
    nAvgBytesPerSec = 0;
    v35 = a2[1];
    v63 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                             this,
                             v64);
    SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                    v35,
                                    0LL,
                                    &v44->wFormatTag,
                                    &v63,
                                    0,
                                    &v41,
                                    &nAvgBytesPerSec,
                                    &nSamplesPerSec,
                                    v61);
    v8 = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v37 = v44;
      v38 = (unsigned int)(int)((double)v41 * 10000000.0 / (double)(int)v44->nSamplesPerSec + 0.5);
      v39 = v45;
      v63 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                               this,
                               v64);
      v62 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                               this,
                               v65);
      SharedModeEnginePeriodicity = DeriveSaDeviceParametersForStream(
                                      (CEndpointCharacteristics ***)a2,
                                      AUDCLNT_SHAREMODE_SHARED,
                                      0,
                                      &v62,
                                      &v63,
                                      v37,
                                      v39,
                                      v38,
                                      a3);
      v8 = SharedModeEnginePeriodicity;
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v8 = 0;
        goto LABEL_32;
      }
      v10 = 612LL;
    }
    else
    {
      v10 = 600LL;
    }
    v9 = (unsigned int)SharedModeEnginePeriodicity;
  }
  else
  {
    v9 = (unsigned int)v8;
    v10 = 594LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)v9);
LABEL_32:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v47,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v48,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v45,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v44,
    0LL);
  return (unsigned int)v8;
}
