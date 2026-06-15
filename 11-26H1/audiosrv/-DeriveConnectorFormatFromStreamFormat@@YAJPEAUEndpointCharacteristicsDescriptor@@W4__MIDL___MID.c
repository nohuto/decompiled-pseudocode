/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002D7E0
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x18002BD70 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180115590 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000FE80 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002E644 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8B8 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049E2C (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18004B5FC (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     CreateAudioMediaType @ 0x1800B50F4 (CreateAudioMediaType.c)
 *     ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x18010B180 (-ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x18010B768 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescrip.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        EffectPack **a1,
        __int32 a2,
        IAudioMediaType *Src,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **pAudioFormat)
{
  struct tWAVEFORMATEX **v12; // r12
  __int64 lpVtbl_low; // rsi
  struct tWAVEFORMATEX *v14; // rax
  struct tWAVEFORMATEX *v15; // rbx
  unsigned int v16; // r14d
  struct tWAVEFORMATEX *v17; // rcx
  struct tWAVEFORMATEX *v18; // rsi
  struct _GUID *v19; // rdi
  void *v20; // rcx
  __int64 v22; // rdx
  struct _GUID *v23; // rbx
  int v24; // eax
  struct tWAVEFORMATEX **v25; // rbx
  __int64 v26; // rdx
  struct tWAVEFORMATEX **v27; // rcx
  IAudioMediaType *v28; // rcx
  const struct tWAVEFORMATEX *v29; // rax
  const struct tWAVEFORMATEX *v30; // rax
  struct tWAVEFORMATEX **v31; // rcx
  IAudioMediaType *v32; // rbx
  _DWORD *v33; // rdi
  struct tWAVEFORMATEX *v34; // rcx
  int v35; // ecx
  struct tWAVEFORMATEX *v36; // rdi
  __int64 v37; // rdx
  const struct tWAVEFORMATEX *v38; // rax
  const struct tWAVEFORMATEX *v39; // rax
  struct IAudioMediaType *v40; // [rsp+48h] [rbp-49h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+50h] [rbp-41h] BYREF
  struct _GUID v42; // [rsp+58h] [rbp-39h] BYREF
  struct _GUID v43; // [rsp+68h] [rbp-29h] BYREF
  struct tWAVEFORMATEX *v44; // [rsp+78h] [rbp-19h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-11h]
  struct _GUID v46; // [rsp+88h] [rbp-9h] BYREF
  struct tWAVEFORMATEX *v47; // [rsp+98h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+3Fh]
  IAudioMediaType *v49; // [rsp+E8h] [rbp+57h] BYREF

  v49 = Src;
  v44 = 0LL;
  v12 = pAudioFormat;
  *pAudioFormat = 0LL;
  lpVtbl_low = LOWORD(Src[2].lpVtbl);
  v14 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(lpVtbl_low + 18);
  v15 = v14;
  pv = v14;
  if ( v14 )
  {
    memcpy_0(v14, Src, lpVtbl_low + 18);
    v47 = v15;
    v43 = *a4;
    v16 = -2004287480;
    if ( EffectPack::GetMixFormat(a1[1], (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2, &v43, &v44) < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x88890008LL);
      CoTaskMemFree(v15);
      v17 = v44;
      goto LABEL_11;
    }
    v18 = v44;
    if ( a7 && g_PerformStrictConnectorMatchOnMatchFormat )
    {
      v19 = a5;
    }
    else
    {
      v19 = a5;
      v43 = *a5;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                            (struct EndpointCharacteristicsDescriptor *)a1,
                            &v43,
                            a2,
                            v44,
                            v15,
                            0LL) )
      {
        v43 = *a6;
        if ( GetDeviceDefaults(
               (struct EndpointCharacteristicsDescriptor *)a1,
               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
               &v43,
               v12,
               0LL,
               0LL,
               0LL) < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x297,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          v20 = v15;
          goto LABEL_10;
        }
        if ( *v12 )
          goto LABEL_8;
        v22 = 664LL;
LABEL_64:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)0x88890008LL);
        goto LABEL_9;
      }
      if ( !a7 )
      {
LABEL_63:
        v22 = 745LL;
        goto LABEL_64;
      }
    }
    pAudioFormat = 0LL;
    v23 = a6;
    v43 = *a6;
    v24 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
            (struct EndpointCharacteristicsDescriptor *)a1,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
            (struct tWAVEFORMATEX *)v49,
            &v43,
            (struct tWAVEFORMATEX **)&pAudioFormat);
    if ( v24 >= 0 )
    {
      ppIAudioMediaType = 0LL;
      *(_QWORD *)&v42.Data1 = 0LL;
      v40 = 0LL;
      v25 = pAudioFormat;
      if ( CreateAudioMediaType(
             (const WAVEFORMATEX *)pAudioFormat,
             *((unsigned __int16 *)pAudioFormat + 8) + 18,
             &ppIAudioMediaType) < 0 )
      {
        v26 = 681LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)0x88890008LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        v27 = v25;
LABEL_25:
        CoTaskMemFree(v27);
        goto LABEL_9;
      }
      v43 = *v19;
      if ( (int)EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
                  a1[1],
                  &v43,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                  ppIAudioMediaType,
                  (struct IAudioMediaType **)&v42) < 0 )
      {
        v26 = 684LL;
        goto LABEL_22;
      }
      v43 = *v19;
      if ( (int)EffectPack::DeriveMixFormatFromDevicePipeFormat(
                  a1[1],
                  &v43,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                  *(struct IAudioMediaType **)&v42.Data1,
                  &v40,
                  0LL) < 0 )
      {
        v26 = 687LL;
        goto LABEL_22;
      }
      v29 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->GetAudioFormat)(v40);
      v43 = *v19;
      if ( (unsigned int)IsStreamFormatSupportedForMixFormat(
                           (struct EndpointCharacteristicsDescriptor *)a1,
                           &v43,
                           a2,
                           v29,
                           (struct tWAVEFORMATEX *)v49,
                           0LL) )
      {
        v26 = 690LL;
        goto LABEL_22;
      }
      v30 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
      if ( (int)CloneWaveFormat(v30, v12) < 0 )
      {
        v26 = 693LL;
        goto LABEL_22;
      }
      if ( !*v12 )
      {
        v26 = 694LL;
        goto LABEL_22;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
      v31 = v25;
      goto LABEL_37;
    }
    if ( !g_PerformStrictConnectorMatchOnMatchFormat && v24 == -2004287480 )
    {
      ppIAudioMediaType = 0LL;
      v43 = *v23;
      if ( GetDeviceDefaults(
             (struct EndpointCharacteristicsDescriptor *)a1,
             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
             &v43,
             (struct tWAVEFORMATEX **)&ppIAudioMediaType,
             0LL,
             0LL,
             0LL) < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C1,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)0x88890008LL);
        v28 = ppIAudioMediaType;
        goto LABEL_24;
      }
      v32 = ppIAudioMediaType;
      v33 = pv;
      if ( *((_DWORD *)pv + 1) != HIDWORD(ppIAudioMediaType->lpVtbl) )
      {
        *(_QWORD *)&v43.Data1 = 0LL;
        if ( (int)CloneWaveFormat((const struct tWAVEFORMATEX *)ppIAudioMediaType, (struct tWAVEFORMATEX **)&v43) >= 0 )
        {
          v35 = v33[1];
          v36 = *(struct tWAVEFORMATEX **)&v43.Data1;
          *(_DWORD *)(*(_QWORD *)&v43.Data1 + 4LL) = v35;
          v36->nAvgBytesPerSec = v35 * v36->nBlockAlign;
          v42 = *a6;
          if ( ConnectorSupportsFormat(
                 (struct EndpointCharacteristicsDescriptor *)a1,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                 v36,
                 &v42) < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2CC,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
          }
          else
          {
            v49 = 0LL;
            v40 = 0LL;
            *(_QWORD *)&v42.Data1 = 0LL;
            if ( CreateAudioMediaType(v36, v36->cbSize + 18, &v49) >= 0 )
            {
              v46 = *a5;
              if ( (int)EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
                          a1[1],
                          &v46,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                          v49,
                          &v40) >= 0 )
              {
                v46 = *a5;
                if ( (int)EffectPack::DeriveMixFormatFromDevicePipeFormat(
                            a1[1],
                            &v46,
                            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                            v40,
                            (struct IAudioMediaType **)&v42,
                            0LL) >= 0 )
                {
                  v38 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v42.Data1 + 40LL))(*(_QWORD *)&v42.Data1);
                  v46 = *a5;
                  if ( (unsigned int)IsStreamFormatSupportedForMixFormat(
                                       (struct EndpointCharacteristicsDescriptor *)a1,
                                       &v46,
                                       a2,
                                       v38,
                                       (struct tWAVEFORMATEX *)pv,
                                       0LL) )
                  {
                    v37 = 733LL;
                  }
                  else
                  {
                    v39 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))v49->lpVtbl->GetAudioFormat)(v49);
                    if ( (int)CloneWaveFormat(v39, v12) >= 0 )
                    {
                      if ( *v12 )
                      {
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v49);
                        CoTaskMemFree(v36);
                        CoTaskMemFree(v32);
                        v31 = pAudioFormat;
LABEL_37:
                        CoTaskMemFree(v31);
LABEL_8:
                        v16 = 0;
LABEL_9:
                        v20 = pv;
LABEL_10:
                        CoTaskMemFree(v20);
                        v17 = v18;
                        goto LABEL_11;
                      }
                      v37 = 737LL;
                    }
                    else
                    {
                      v37 = 736LL;
                    }
                  }
                }
                else
                {
                  v37 = 729LL;
                }
              }
              else
              {
                v37 = 725LL;
              }
            }
            else
            {
              v37 = 721LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v37,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v49);
          }
          v34 = v36;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C6,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          v34 = *(struct tWAVEFORMATEX **)&v43.Data1;
        }
        CoTaskMemFree(v34);
        v28 = v32;
LABEL_24:
        CoTaskMemFree(v28);
        v27 = pAudioFormat;
        goto LABEL_25;
      }
      CoTaskMemFree(ppIAudioMediaType);
    }
    CoTaskMemFree(pAudioFormat);
    goto LABEL_63;
  }
  v16 = -2004287480;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27A,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x88890008LL);
  CoTaskMemFree(0LL);
  v17 = 0LL;
LABEL_11:
  CoTaskMemFree(v17);
  return v16;
}
