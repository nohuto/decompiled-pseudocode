/*
 * XREFs of ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x18010B180
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002D7E0 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x18010B768 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescrip.c)
 * Callees:
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004D2AC (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180078130 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180079FA8 (--1-$out_param_ptr_t@PEAPEAXV-$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@de.c)
 *     ??1?$out_param_t@V?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800B0110 (--1-$out_param_t@V-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTa.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIMMDeviceEnumerator@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18010B110 (--1-$out_param_ptr_t@PEAPEAXV-$com_ptr_t@UIMMDeviceEnumerator@@Uerr_returncode_policy@wil@@@wil@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall ConnectorSupportsFormat(
        struct EndpointCharacteristicsDescriptor *a1,
        __int64 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  int v5; // r14d
  unsigned int v6; // esi
  int SharedModeEnginePeriodicity; // eax
  _QWORD *v9; // rbx
  HRESULT Instance; // ebx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, const struct _tagpropertykey *, PROPVARIANT *); // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PROPVARIANT, __int64 **); // rdi
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // [rsp+50h] [rbp-79h] BYREF
  __int64 *v35; // [rsp+58h] [rbp-71h] BYREF
  __int64 v36; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v37; // [rsp+68h] [rbp-61h] BYREF
  __int64 *v38; // [rsp+70h] [rbp-59h] BYREF
  __int64 v39; // [rsp+78h] [rbp-51h] BYREF
  __int64 v40; // [rsp+80h] [rbp-49h] BYREF
  PROPVARIANT v41[2]; // [rsp+88h] [rbp-41h] BYREF
  __int64 v42; // [rsp+98h] [rbp-31h]
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-19h]
  int v45; // [rsp+B8h] [rbp-11h] BYREF
  int v46; // [rsp+BCh] [rbp-Dh] BYREF
  __int64 v47[2]; // [rsp+C0h] [rbp-9h] BYREF
  GUID v48; // [rsp+D0h] [rbp+7h] BYREF
  __int64 *v49; // [rsp+E0h] [rbp+17h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *ppv; // [rsp+E8h] [rbp+1Fh] BYREF
  int v51; // [rsp+F0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v5 = a2;
  v6 = 0;
  if ( (((_DWORD)a2 - 1) & 0xFFFFFFFD) == 0 )
  {
    v47[0] = 0LL;
    v9 = *(_QWORD **)a1;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v47);
    wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>(v9 + 5, v47);
    *(_QWORD *)&v48.Data1 = 0LL;
    v49 = (__int64 *)&v48;
    ppv = 0LL;
    LOBYTE(v51) = 1;
    Instance = CreateKSFormatFromWFXFormat(a3, &ppv);
    wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v49);
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_52;
    }
    v34 = 0LL;
    v11 = *(_QWORD *)v47[0];
    v34 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(v11 + 32))(v47[0], 0LL, &v34);
    Instance = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v12);
LABEL_9:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
      goto LABEL_52;
    }
    *(_OWORD *)pvar = 0LL;
    v44 = 0LL;
    v13 = *v34;
    v49 = (__int64 *)0x4C7D1B2C233164C8LL;
    ppv = (struct KSDATAFORMAT_WAVEFORMATEX *)0x67257A6871B668BCLL;
    v51 = 1;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 **, PROPVARIANT *))(v13 + 40))(v34, &v49, pvar);
    Instance = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BC,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v14);
LABEL_12:
      PropVariantClear(pvar);
      goto LABEL_9;
    }
    *(_OWORD *)v41 = 0LL;
    v42 = 0LL;
    v15 = *(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*v34 + 40);
    if ( v5 == 3 )
    {
      v16 = v15((__int64)v34, &PKEY_Endpoint_KeywordDetector_ConnectorId, v41);
      Instance = v16;
      if ( v16 < 0 )
      {
        v17 = 449LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v16);
LABEL_17:
        PropVariantClear(v41);
        goto LABEL_12;
      }
    }
    else
    {
      v16 = v15((__int64)v34, &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId, v41);
      Instance = v16;
      if ( v16 < 0 )
      {
        v17 = 453LL;
        goto LABEL_16;
      }
    }
    v36 = 0LL;
    v49 = &v36;
    ppv = 0LL;
    LOBYTE(v51) = 1;
    Instance = CoCreateInstance(
                 &CLSID_MMDeviceEnumerator,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&ppv);
    wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IMMDeviceEnumerator,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IMMDeviceEnumerator,wil::err_returncode_policy>>(&v49);
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_22:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
      goto LABEL_17;
    }
    v35 = 0LL;
    v18 = v36;
    v19 = *(__int64 (__fastcall **)(__int64, PROPVARIANT, __int64 **))(*(_QWORD *)v36 + 40LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v35);
    v20 = v19(v18, pvar[1], &v35);
    Instance = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CC,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v20);
LABEL_25:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
      goto LABEL_22;
    }
    v38 = 0LL;
    v21 = *v35;
    v49 = (__int64 *)&v38;
    ppv = 0LL;
    LOBYTE(v51) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v21 + 24))(
                 v35,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL);
    wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(&v49);
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CF,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_28:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
      goto LABEL_25;
    }
    v37 = 0LL;
    v22 = *v38;
    v37 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v22 + 56))(v38, LODWORD(v41[1]), &v37);
    Instance = v23;
    if ( v23 < 0 )
    {
      v24 = (unsigned int)v23;
      v25 = 466LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v24);
LABEL_32:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
      goto LABEL_28;
    }
    v26 = v37;
    if ( !v37 )
    {
      Instance = -2147023728;
      v24 = 2147943568LL;
      v25 = 467LL;
      goto LABEL_31;
    }
    if ( v5 == 1 )
    {
      v39 = 0LL;
      v27 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*v37)(
              v37,
              &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
              &v39);
      Instance = v27;
      if ( v27 < 0 )
      {
        v28 = 472LL;
LABEL_38:
        v29 = (unsigned int)v27;
LABEL_39:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v29);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
        goto LABEL_32;
      }
      v45 = 0;
      v27 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 24LL))(v39, &v45);
      Instance = v27;
      if ( v27 < 0 )
      {
        v28 = 476LL;
        goto LABEL_38;
      }
      if ( v45 != 3 )
      {
        Instance = -2147418113;
        v29 = 2147549183LL;
        v28 = 477LL;
        goto LABEL_39;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
      v26 = v37;
    }
    v40 = 0LL;
    v30 = *v26;
    v49 = &v40;
    ppv = 0LL;
    LOBYTE(v51) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, struct KSDATAFORMAT_WAVEFORMATEX **))(v30 + 104))(
                 v26,
                 1LL,
                 &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                 &ppv);
    wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(&v49);
    if ( Instance >= 0 )
    {
      v46 = 0;
      v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v40 + 24LL))(
              v40,
              *(_QWORD *)&v48.Data1,
              **(unsigned int **)&v48.Data1,
              &v46);
      Instance = v33;
      if ( v33 >= 0 )
      {
        if ( v46 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
          PropVariantClear(v41);
          PropVariantClear(pvar);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v48,
            0LL);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v47);
          return 0LL;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
        PropVariantClear(v41);
        PropVariantClear(pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
        Instance = -2004287480;
LABEL_52:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v48,
          0LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v47);
        return (unsigned int)Instance;
      }
      v31 = (unsigned int)v33;
      v32 = 484LL;
    }
    else
    {
      v31 = (unsigned int)Instance;
      v32 = 481LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v31);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
    goto LABEL_32;
  }
  v48 = *a4;
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  *((_QWORD **)a1 + 1),
                                  a2,
                                  &a3->wFormatTag,
                                  &v48,
                                  0,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
  if ( SharedModeEnginePeriodicity < 0 )
    return (unsigned int)SharedModeEnginePeriodicity;
  return v6;
}
