/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049E2C
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002D7E0 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180115590 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18000D780 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F84C (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180011074 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x18006847C (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18006D848 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18007DA3C (-GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18007EC04 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x1800B50F4 (CreateAudioMediaType.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
        struct _RTL_CRITICAL_SECTION *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  const struct tWAVEFORMATEX *v8; // rax
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // edi
  int EndpointEffect; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  struct IAudioProcessingObject *v16; // rbx
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 *v18; // rcx
  int v19; // edi
  HRESULT v20; // eax
  HRESULT v21; // edi
  const struct tWAVEFORMATEX *v22; // rax
  int v23; // edi
  HRESULT v24; // eax
  bool v25; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  HRESULT (__stdcall *IsInputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  __int64 v28; // rdx
  HRESULT (__stdcall *v29)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rdi
  struct IAudioMediaType *v30; // rdi
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rdx
  const struct tWAVEFORMATEX *v34; // rax
  __int64 v35; // rbx
  struct IAudioProcessingObject **v36; // [rsp+20h] [rbp-61h]
  IAudioMediaType *v37; // [rsp+30h] [rbp-51h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+38h] [rbp-49h] BYREF
  __int64 v39; // [rsp+40h] [rbp-41h] BYREF
  struct IAudioMediaType *v40; // [rsp+48h] [rbp-39h] BYREF
  int v41; // [rsp+50h] [rbp-31h] BYREF
  WAVEFORMATEX *v42; // [rsp+58h] [rbp-29h] BYREF
  struct IAudioProcessingObject *v43; // [rsp+60h] [rbp-21h] BYREF
  __int64 v44; // [rsp+68h] [rbp-19h] BYREF
  WAVEFORMATEX pAudioFormat; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v46[22]; // [rsp+82h] [rbp+1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))a4->lpVtbl->GetAudioFormat)(
                                       a4,
                                       a2);
  v9 = ValidateUncompressedWaveFormatEx(v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E2F,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v9);
    return v11;
  }
  v43 = 0LL;
  if ( (unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes((EffectPack *)this, (unsigned int)a3, v10) )
  {
    v43 = 0LL;
    EndpointEffect = EffectPack::GetEndpointEffect(this, 0LL, (unsigned int)a3, 0LL, &v43, 0LL);
    v14 = EndpointEffect;
    if ( EndpointEffect < 0 )
    {
      v15 = 7737LL;
      goto LABEL_8;
    }
LABEL_9:
    ppIAudioMediaType = 0LL;
    v37 = 0LL;
    v16 = v43;
    if ( v11 == 1 )
    {
      *(_OWORD *)&pAudioFormat.nChannels = 0LL;
      memset(v46, 0, sizeof(v46));
      if ( !v43 )
      {
        v14 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E44,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL);
LABEL_12:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        goto LABEL_51;
      }
      v44 = 0LL;
      IsOutputFormatSupported = v43->lpVtbl->IsOutputFormatSupported;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v44);
      if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, __int64 *))IsOutputFormatSupported)(
             v16,
             0LL,
             a4,
             &v44) )
      {
        v14 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E48,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL);
        v18 = &v44;
LABEL_15:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v18);
        goto LABEL_12;
      }
      *(_DWORD *)&pAudioFormat.wFormatTag = 196606;
      pAudioFormat.nSamplesPerSec = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                              + 4);
      v19 = (unsigned __int16)(4 * pAudioFormat.nChannels);
      pAudioFormat.nBlockAlign = 4 * pAudioFormat.nChannels;
      pAudioFormat.nAvgBytesPerSec = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                               + 4)
                                   * v19;
      *(_DWORD *)&pAudioFormat.wBitsPerSample = 1441824;
      strcpy(v46, " ");
      *(_DWORD *)&v46[2] = 3;
      *(GUID *)&v46[6] = GUID_00000003_0000_0010_8000_00aa00389b71;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&ppIAudioMediaType);
      v20 = CreateAudioMediaType(&pAudioFormat, 0x28u, &ppIAudioMediaType);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E59,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v20);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
LABEL_18:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        v14 = v21;
        goto LABEL_51;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v37, a4);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
    }
    else
    {
      v42 = 0LL;
      *(_QWORD *)&pAudioFormat.wFormatTag = &v42;
      *(_QWORD *)&pAudioFormat.nAvgBytesPerSec = 0LL;
      LOBYTE(pAudioFormat.cbSize) = 1;
      v22 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
      v23 = CloneWaveFormat(v22, (struct tWAVEFORMATEX **)&pAudioFormat.nAvgBytesPerSec);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&pAudioFormat);
      if ( v23 < 0 )
      {
        v14 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E61,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v42,
          0LL);
        goto LABEL_12;
      }
      ConvertPCMWfxToIEEEFloat(v42);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v37);
      v24 = CreateAudioMediaType(v42, v42->cbSize + 18, &v37);
      v21 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E66,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v24);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v42,
          0LL);
        goto LABEL_18;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&ppIAudioMediaType, v37);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v42,
        0LL);
    }
    v40 = 0LL;
    if ( v16 )
    {
      v41 = 0;
      v39 = 0LL;
      v25 = (*(unsigned int (__fastcall **)(HANDLE))(*(_QWORD *)this[39].LockSemaphore + 56LL))(this[39].LockSemaphore) == 0;
      lpVtbl = v16->lpVtbl;
      if ( v25 )
      {
        IsInputFormatSupported = lpVtbl->IsInputFormatSupported;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v39);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))IsInputFormatSupported)(
               v16,
               v37,
               ppIAudioMediaType,
               &v39) < 0 )
        {
          v28 = 7797LL;
LABEL_29:
          v14 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v28,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
LABEL_30:
          v18 = (__int64 *)&v40;
          goto LABEL_15;
        }
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 24LL))(v39, &v41) < 0 )
        {
          v28 = 7798LL;
          goto LABEL_29;
        }
        if ( v41 )
        {
          v28 = 7799LL;
          goto LABEL_29;
        }
      }
      else
      {
        v29 = lpVtbl->IsOutputFormatSupported;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v39);
        if ( ((int (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, __int64 *))v29)(
               v16,
               v37,
               ppIAudioMediaType,
               &v39) < 0 )
        {
          v28 = 7804LL;
          goto LABEL_29;
        }
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 24LL))(v39, &v41) < 0 )
        {
          v28 = 7806LL;
          goto LABEL_29;
        }
        if ( v41 )
        {
          v28 = 7807LL;
          goto LABEL_29;
        }
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v40, v39);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
    }
    else
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v40, ppIAudioMediaType);
    }
    v30 = v40;
    v31 = ValidateAPOInputFormat(v40);
    v14 = v31;
    if ( v31 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(HANDLE))(*(_QWORD *)this[39].LockSemaphore + 56LL))(this[39].LockSemaphore)
        || (v34 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v37->lpVtbl->GetAudioFormat)(v37),
            IsCompressedSpatialFormat(v34))
        || (v35 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->GetAudioFormat)(v30),
            *(_DWORD *)(v35 + 4) == *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                              + 4)) )
      {
        v40 = 0LL;
        *a5 = v30;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        v14 = 0;
        goto LABEL_51;
      }
      v14 = -2004287480;
      v32 = 2290679816LL;
      v33 = 7824LL;
    }
    else
    {
      v32 = (unsigned int)v31;
      v33 = 7817LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v32);
    goto LABEL_30;
  }
  v43 = 0LL;
  EndpointEffect = EffectPack::GetGfx((EffectPack *)this, a3, 0LL, &v43, (struct IAudioSystemEffects2 **)v36);
  v14 = EndpointEffect;
  if ( EndpointEffect >= 0 )
    goto LABEL_9;
  v15 = 7733LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)EndpointEffect);
LABEL_51:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
  return v14;
}
