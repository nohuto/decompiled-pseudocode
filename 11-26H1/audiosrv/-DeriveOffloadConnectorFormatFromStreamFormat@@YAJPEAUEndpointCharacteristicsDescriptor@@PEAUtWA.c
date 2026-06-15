/*
 * XREFs of ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18002F210
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000FE80 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035B7C (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003D7C0 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??4?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800805E0 (--4-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180080E1C (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID.c)
 *     ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180091294 (-IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DeriveOffloadConnectorFormatFromStreamFormat(
        CEndpointCharacteristics **a1,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct _GUID *pv,
        unsigned int a6,
        struct tWAVEFORMATEX **a7)
{
  struct tWAVEFORMATEX **v9; // r13
  char v10; // r12
  int OffloadDeviceFormat; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // r8d
  struct _GUID *v13; // rcx
  WORD Data1_high; // cx
  bool v15; // si
  int IsFormatSupportedByHwAudioEngine; // edi
  struct tWAVEFORMATEX *v17; // r9
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  void **v20; // rcx
  DWORD nSamplesPerSec; // edx
  struct _GUID *v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  int v26; // eax
  struct tWAVEFORMATEX *v27; // rax
  struct _GUID v29; // [rsp+30h] [rbp-20h] BYREF
  char v30; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct tWAVEFORMATEX *v32; // [rsp+90h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v33; // [rsp+A0h] [rbp+50h] BYREF
  struct _GUID *v34; // [rsp+A8h] [rbp+58h]

  v34 = a4;
  v33 = a3;
  v9 = a7;
  *a7 = 0LL;
  v10 = 1;
  pv = 0LL;
  *(_QWORD *)&v29.Data1 = &pv;
  *(_QWORD *)v29.Data4 = 0LL;
  v30 = 1;
  OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(*a1, (struct tWAVEFORMATEX **)v29.Data4);
  if ( v30 )
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      *(void ***)&v29.Data1,
      *(void **)v29.Data4);
  if ( OffloadDeviceFormat >= 0 )
  {
    Data1_high = HIWORD(pv->Data1);
    v15 = Data1_high != Src->nChannels;
    if ( Data1_high < Src->nChannels
      && Data1_high >= 2u
      && dword_18018CD90[a6]
      && !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)*a1 + 56LL))(*a1)
      && CEndpointCharacteristics::GetVirtualSurroundEffectMode(*a1) == 1 )
    {
      v10 = 0;
      v15 = 1;
    }
    IsFormatSupportedByHwAudioEngine = -2147023728;
    v17 = 0LL;
    v33 = 0LL;
    if ( !v10 )
      goto LABEL_17;
    IsFormatSupportedByHwAudioEngine = CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(*a1, Src);
    if ( !IsFormatSupportedByHwAudioEngine )
    {
      *(_QWORD *)&v29.Data1 = &v33;
      *(_QWORD *)v29.Data4 = 0LL;
      v30 = 1;
      OffloadDeviceFormat = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v29.Data4);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v29);
      if ( OffloadDeviceFormat < 0 )
      {
        v18 = (unsigned int)OffloadDeviceFormat;
        v19 = 384LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v18);
        goto LABEL_39;
      }
    }
    v17 = v33;
    if ( !v33 )
    {
LABEL_17:
      if ( v15 )
      {
        a7 = 0LL;
        *(_QWORD *)&v29.Data1 = &a7;
        *(_QWORD *)v29.Data4 = 0LL;
        v30 = 1;
        OffloadDeviceFormat = CloneWaveFormat((const struct tWAVEFORMATEX *)pv, (struct tWAVEFORMATEX **)v29.Data4);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v29);
        if ( OffloadDeviceFormat < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x187,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)OffloadDeviceFormat);
          v20 = (void **)&a7;
LABEL_20:
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            v20,
            0LL);
LABEL_39:
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v33,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&pv,
            0LL);
          return (unsigned int)OffloadDeviceFormat;
        }
        nSamplesPerSec = Src->nSamplesPerSec;
        *((_DWORD *)a7 + 1) = nSamplesPerSec;
        *((_DWORD *)a7 + 2) = nSamplesPerSec * *((unsigned __int16 *)a7 + 6);
        IsFormatSupportedByHwAudioEngine = CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(
                                             *a1,
                                             (const struct tWAVEFORMATEX *)a7);
        if ( !IsFormatSupportedByHwAudioEngine )
          wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
            &v33,
            &a7);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&a7,
          0LL);
        v17 = v33;
      }
    }
    if ( IsFormatSupportedByHwAudioEngine < 0 )
    {
      OffloadDeviceFormat = -2005139333;
      if ( IsFormatSupportedByHwAudioEngine != -2005139333 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x194,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)IsFormatSupportedByHwAudioEngine);
        OffloadDeviceFormat = IsFormatSupportedByHwAudioEngine;
      }
      goto LABEL_39;
    }
    v22 = v34;
    v29 = *v34;
    v23 = IsOffloadConnectorFormatSupportedForMixFormat(
            (struct EndpointCharacteristicsDescriptor *)a1,
            &v29,
            v12,
            v17,
            v17);
    OffloadDeviceFormat = v23;
    if ( v23 < 0 )
    {
      v18 = (unsigned int)v23;
      v19 = 408LL;
      goto LABEL_29;
    }
    v32 = 0LL;
    *(_QWORD *)&v29.Data1 = &v32;
    *(_QWORD *)v29.Data4 = 0LL;
    v30 = 1;
    OffloadDeviceFormat = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v29.Data4);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v29);
    if ( OffloadDeviceFormat >= 0 )
    {
      v29 = *v22;
      v26 = IsStreamFormatSupportedForMixFormat((struct EndpointCharacteristicsDescriptor *)a1, &v29, 1, v33, v32, 0LL);
      OffloadDeviceFormat = v26;
      if ( v26 < 0 )
      {
        v25 = (unsigned int)v26;
        v24 = 415LL;
        goto LABEL_33;
      }
      if ( !v26 )
      {
        v27 = v33;
        v33 = 0LL;
        *v9 = v27;
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v32,
          0LL);
        OffloadDeviceFormat = 0;
        goto LABEL_39;
      }
      OffloadDeviceFormat = -2005073917;
      v24 = 416LL;
    }
    else
    {
      v24 = 411LL;
    }
    v25 = (unsigned int)OffloadDeviceFormat;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v25);
    v20 = (void **)&v32;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15D,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)OffloadDeviceFormat);
  v13 = pv;
  pv = 0LL;
  if ( v13 )
    CoTaskMemFree(v13);
  return (unsigned int)OffloadDeviceFormat;
}
