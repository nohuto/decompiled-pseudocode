/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x18000C258 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180042F44 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E2C44 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E32D0 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 *     ?ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800E4E24 (-ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristi.c)
 * Callees:
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002D7E0 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002E644 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8B8 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002EC70 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18002F210 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049E2C (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18004B5FC (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180063028 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18006D848 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180084BB8 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     CreateAudioMediaType @ 0x1800B50F4 (CreateAudioMediaType.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1801118D4 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18013AF88 (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        CEndpointCharacteristics **a1,
        char a2,
        __int32 a3,
        enum _AUDCLNT_SHAREMODE a4,
        unsigned int a5,
        IAudioMediaType *a6,
        struct _GUID *a7,
        struct _GUID *a8,
        struct tWAVEFORMATEX *a9,
        struct tWAVEFORMATEX **a10,
        struct tWAVEFORMATEX **a11,
        struct tWAVEFORMATEX **a12,
        struct tWAVEFORMATEX **a13)
{
  struct tWAVEFORMATEX *v15; // rbx
  struct tWAVEFORMATEX *v16; // rdi
  signed int DeviceDefaults; // esi
  IAudioMediaType *v18; // r13
  CEndpointCharacteristics *v19; // r14
  struct _RTL_CRITICAL_SECTION *v20; // r15
  unsigned int i; // edx
  void **v22; // rcx
  unsigned __int64 v23; // rax
  void *v24; // rsi
  __int64 v25; // r14
  struct tWAVEFORMATEX *v26; // rax
  struct tWAVEFORMATEX *v27; // rax
  struct tWAVEFORMATEX *v28; // rax
  struct tWAVEFORMATEX *v29; // rax
  struct tWAVEFORMATEX *v30; // rax
  unsigned int v31; // r14d
  int v33; // eax
  int v34; // eax
  bool v35; // sf
  int v36; // eax
  const struct tWAVEFORMATEX *v37; // rax
  const struct tWAVEFORMATEX *v38; // rax
  const struct tWAVEFORMATEX *v39; // rax
  struct tWAVEFORMATEX **v40; // [rsp+20h] [rbp-D9h]
  struct tWAVEFORMATEX *v41; // [rsp+40h] [rbp-B9h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B1h] BYREF
  void *Src; // [rsp+50h] [rbp-A9h] BYREF
  struct tWAVEFORMATEX *v44; // [rsp+58h] [rbp-A1h] BYREF
  struct IMMDevice *v45[2]; // [rsp+60h] [rbp-99h] BYREF
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+70h] [rbp-89h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+80h] [rbp-79h] BYREF
  void *Buf1[2]; // [rsp+A0h] [rbp-59h] BYREF
  struct tWAVEFORMATEX **v49; // [rsp+B0h] [rbp-49h]
  struct tWAVEFORMATEX **v50; // [rsp+B8h] [rbp-41h]
  struct tWAVEFORMATEX **v51; // [rsp+C0h] [rbp-39h]
  struct tWAVEFORMATEX **v52; // [rsp+C8h] [rbp-31h]
  struct _GUID v53; // [rsp+D0h] [rbp-29h] BYREF
  unsigned int v54; // [rsp+E0h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+3Fh]

  ppIAudioMediaType[0] = a6;
  Buf1[0] = a8;
  v51 = a10;
  v50 = a11;
  v52 = a12;
  v49 = a13;
  pv = 0LL;
  v15 = 0LL;
  v41 = 0LL;
  v16 = 0LL;
  v44 = 0LL;
  Src = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    DeviceDefaults = CloneWaveFormat(a9, &v41);
    if ( DeviceDefaults < 0 )
    {
LABEL_44:
      v15 = v41;
      goto LABEL_19;
    }
    v45[0] = 0LL;
    wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)*a1 + 5, v45);
    if ( (unsigned int)IsSPDIFFormat(a9) && CEndpointCharacteristics::IsSPDIFEndpoint(*a1) )
      DeviceDefaults = GetAcceptableSPDIFTypeForDevice(v45[0], a9, (struct tWAVEFORMATEX **)&pv, 0) != 0
                     ? 0x88890008
                     : 0;
    else
      DeviceDefaults = CloneWaveFormat(a9, (struct tWAVEFORMATEX **)&pv);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v45);
    v35 = DeviceDefaults < 0;
LABEL_34:
    if ( !v35 )
    {
      v15 = v41;
      DeviceDefaults = CloneWaveFormat(v41, (struct tWAVEFORMATEX **)&Src);
      goto LABEL_17;
    }
    goto LABEL_44;
  }
  if ( a3 == 1 )
  {
    *(struct _GUID *)ppIAudioMediaType = *a7;
    DeviceDefaults = DeriveOffloadConnectorFormatFromStreamFormat(
                       (struct EndpointCharacteristicsDescriptor *)a1,
                       a9,
                       0LL,
                       (struct _GUID *)ppIAudioMediaType,
                       (struct _GUID *)v40,
                       a5,
                       (struct tWAVEFORMATEX **)&pv);
    if ( DeviceDefaults < 0 )
      goto LABEL_19;
    DeviceDefaults = CloneWaveFormat((const struct tWAVEFORMATEX *)pv, &v44);
    v16 = v44;
    ConvertPCMWfxToIEEEFloat(v44);
    if ( DeviceDefaults < 0 )
      goto LABEL_19;
    DeviceDefaults = CloneWaveFormat(v16, &v41);
    v35 = DeviceDefaults < 0;
    goto LABEL_34;
  }
  if ( !a2 )
  {
    *(struct _GUID *)&pvar.vt = *a8;
    DeviceDefaults = GetDeviceDefaults(
                       (struct EndpointCharacteristicsDescriptor *)a1,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                       (struct _GUID *)&pvar,
                       (struct tWAVEFORMATEX **)&pv,
                       (struct tWAVEFORMATEX **)&Src,
                       0LL,
                       0LL);
    if ( DeviceDefaults < 0 )
      goto LABEL_19;
    v18 = ppIAudioMediaType[0];
    *(_OWORD *)ppIAudioMediaType = *(_OWORD *)ppIAudioMediaType[0];
    if ( EffectPack::CanProcessingModeBeParameterized(
           a1[1],
           (struct _GUID *)ppIAudioMediaType,
           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3)
      || !memcmp_0(Buf1[0], &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf, 0x10uLL) )
    {
      *(_OWORD *)ppIAudioMediaType = *(_OWORD *)&v18->lpVtbl;
      DeviceDefaults = EffectPack::GetMixFormat(
                         a1[1],
                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                         (struct _GUID *)ppIAudioMediaType,
                         &v44);
      v16 = v44;
      if ( DeviceDefaults < 0 )
        goto LABEL_19;
    }
    v19 = *a1;
    v15 = 0LL;
    v41 = 0LL;
    v20 = (struct _RTL_CRITICAL_SECTION *)((char *)v19 + 0x2000);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v19 + 0x2000));
    ppIAudioMediaType[0] = (IAudioMediaType *)((char *)v19 + 0x2000);
    v53 = 0LL;
    v54 = 0;
    *(_OWORD *)Buf1 = *(_OWORD *)&v18->lpVtbl;
    for ( i = 0; i < 0xA; ++i )
    {
      v22 = (void **)&qword_18018B030[2 * i];
      v23 = (_BYTE *)*v22 - (char *)Buf1[0];
      if ( *v22 == Buf1[0] )
        v23 = (_BYTE *)v22[1] - (char *)Buf1[1];
      if ( !v23 )
      {
        v53 = (struct _GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
        v33 = 602;
        if ( a3 != 3 )
          v33 = 2;
        v54 = i + v33;
        memset(&pvar, 0, sizeof(pvar));
        v34 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *, struct tagPROPVARIANT *))(**((_QWORD **)v19 + 9) + 40LL))(
                *((_QWORD *)v19 + 9),
                &v53,
                &pvar);
        v31 = v34;
        if ( v34 >= 0 )
        {
          if ( pvar.vt == 65 && (unsigned int)IsValidWfxBlob(&pvar) )
          {
            if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
            {
              v31 = -2004287480;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1BE2,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (const char *)0x88890008LL);
              PropVariantClear((PROPVARIANT *)&pvar);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)ppIAudioMediaType);
LABEL_30:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x337,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)v31);
              goto LABEL_20;
            }
            v36 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, &v41);
            v31 = v36;
            if ( v36 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1BE4,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (const char *)(unsigned int)v36);
              PropVariantClear((PROPVARIANT *)&pvar);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)ppIAudioMediaType);
              v15 = v41;
              goto LABEL_30;
            }
            v15 = v41;
          }
          PropVariantClear((PROPVARIANT *)&pvar);
          if ( v20 )
            LeaveCriticalSection(v20);
          if ( !v15 )
          {
            v24 = Src;
            v25 = *((unsigned __int16 *)Src + 8);
            v26 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v25 + 18);
            v15 = v26;
            if ( v26 )
            {
              memcpy_0(v26, v24, v25 + 18);
              DeviceDefaults = 0;
            }
            else
            {
              DeviceDefaults = -2147024882;
            }
          }
LABEL_17:
          if ( DeviceDefaults >= 0 )
          {
            v27 = (struct tWAVEFORMATEX *)pv;
            pv = 0LL;
            *v49 = v27;
            v28 = v15;
            v15 = 0LL;
            *v50 = v28;
            v29 = v16;
            v16 = 0LL;
            *v51 = v29;
            v30 = (struct tWAVEFORMATEX *)Src;
            Src = 0LL;
            *v52 = v30;
          }
          goto LABEL_19;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BDE,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v34);
        PropVariantClear((PROPVARIANT *)&pvar);
LABEL_28:
        if ( v20 )
          LeaveCriticalSection(v20);
        goto LABEL_30;
      }
    }
    v31 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BDB,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80070490LL);
    goto LABEL_28;
  }
  *(struct _GUID *)ppIAudioMediaType = *a8;
  *(struct _GUID *)Buf1 = *a7;
  *(_OWORD *)&pvar.vt = *(_OWORD *)&a6->lpVtbl;
  DeviceDefaults = DeriveConnectorFormatFromStreamFormat(
                     a1,
                     a3,
                     (IAudioMediaType *)a9,
                     (struct _GUID *)&pvar,
                     (struct _GUID *)Buf1,
                     (struct _GUID *)ppIAudioMediaType,
                     1,
                     (struct tWAVEFORMATEX **)&pv);
  if ( DeviceDefaults >= 0 )
  {
    ppIAudioMediaType[0] = 0LL;
    v45[0] = 0LL;
    Buf1[0] = 0LL;
    *(_QWORD *)&pvar.vt = 0LL;
    DeviceDefaults = CreateAudioMediaType(
                       (const WAVEFORMATEX *)pv,
                       *((unsigned __int16 *)pv + 8) + 18,
                       ppIAudioMediaType);
    if ( DeviceDefaults >= 0 )
    {
      v53 = *a7;
      DeviceDefaults = EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
                         a1[1],
                         &v53,
                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                         ppIAudioMediaType[0],
                         (struct IAudioMediaType **)v45);
      if ( DeviceDefaults >= 0 )
      {
        v53 = *a7;
        DeviceDefaults = EffectPack::DeriveMixFormatFromDevicePipeFormat(
                           a1[1],
                           &v53,
                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                           (struct IAudioMediaType *)v45[0],
                           (struct IAudioMediaType **)&pvar,
                           (struct IAudioMediaType **)Buf1);
        if ( DeviceDefaults >= 0 )
        {
          v37 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IMMDevice *))v45[0]->lpVtbl->GetId)(v45[0]);
          DeviceDefaults = CloneWaveFormat(v37, (struct tWAVEFORMATEX **)&Src);
          if ( DeviceDefaults >= 0 )
          {
            v38 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&pvar.vt + 40LL))(*(_QWORD *)&pvar.vt);
            DeviceDefaults = CloneWaveFormat(v38, &v44);
            if ( DeviceDefaults >= 0 )
            {
              if ( Buf1[0] )
                v39 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)Buf1[0] + 40LL))(Buf1[0]);
              else
                v39 = (const struct tWAVEFORMATEX *)Src;
              DeviceDefaults = CloneWaveFormat(v39, &v41);
              v15 = v41;
            }
            v16 = v44;
          }
        }
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)Buf1);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v45);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
    goto LABEL_17;
  }
LABEL_19:
  v31 = DeviceDefaults;
LABEL_20:
  CoTaskMemFree(Src);
  CoTaskMemFree(v16);
  CoTaskMemFree(v15);
  CoTaskMemFree(pv);
  return v31;
}
