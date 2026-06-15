/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004BA2C
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18013D040 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000DEB4 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000E988 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x18004BF24 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18004BF88 (-ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18004C01C (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x18004C180 (-GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MI.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800866D8 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180086DEC (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_c7ca9f80eb9d712dfec147e946fba3c8_::_lambda_c7ca9f80eb9d712dfec147e946fba3c8_ @ 0x1800C3E84 (_lambda_c7ca9f80eb9d712dfec147e946fba3c8_--_lambda_c7ca9f80eb9d712dfec147e946fba3c8_.c)
 *     wil::scope_exit__lambda_c7ca9f80eb9d712dfec147e946fba3c8___ @ 0x1800F9498 (wil--scope_exit__lambda_c7ca9f80eb9d712dfec147e946fba3c8___.c)
 *     wil::details::lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___::_lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___ @ 0x180135358 (wil--details--lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___--_lambda_call__lambda_c7ca.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180137F28 (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18013DEF8 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EffectPack::SetDeviceFormatSwAudioEngine(
        CEndpointCharacteristics **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        const struct tWAVEFORMATEX *a3)
{
  int v5; // eax
  unsigned int DeviceFormatAndSpatialSettings; // esi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // esi
  CEndpointCharacteristics *v13; // r15
  __int64 v14; // rdx
  struct _GUID v15; // xmm6
  int v16; // edx
  unsigned int SharedModeEnginePeriodicityForTranslatedProcessingMode; // edi
  struct EffectPack *v18; // rdx
  int v19; // eax
  int v20; // eax
  void *v21; // rcx
  int updated; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // [rsp+28h] [rbp-89h]
  struct _GUID v29; // [rsp+58h] [rbp-59h] BYREF
  char v30; // [rsp+68h] [rbp-49h]
  EffectPack *v31; // [rsp+78h] [rbp-39h]
  char v32; // [rsp+80h] [rbp-31h]
  _BYTE v33[24]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v34[32]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]
  int v36; // [rsp+118h] [rbp+67h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // [rsp+120h] [rbp+6Fh] BYREF
  LPVOID pv; // [rsp+128h] [rbp+77h] BYREF
  __int64 v39; // [rsp+130h] [rbp+7Fh] BYREF

  v37 = a2;
  v31 = (EffectPack *)this;
  v32 = 1;
  if ( a3 )
  {
    v8 = ValidateUncompressedWaveFormatEx(a3);
    DeviceFormatAndSpatialSettings = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2184,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v29 = 0LL;
    EffectPack::GetDefaultConnectorProcessingModeConfiguration((EffectPack *)this, v37, &v29, 0LL, 0LL);
    v12 = v37;
    v13 = this[198];
    if ( (int)v37 >= (unsigned __int64)this[236] )
    {
      _o_terminate(v10, v9, v11);
      __debugbreak();
      JUMPOUT(0x18004BF1CLL);
    }
    v14 = (__int64)this[237] + 24 * v37;
    v36 = 0;
    v15 = v29;
    SharedModeEnginePeriodicityForTranslatedProcessingMode = CEndpointCharacteristics::GetSharedModeEnginePeriodicityForTranslatedProcessingMode(
                                                               v13,
                                                               (unsigned int)v37,
                                                               a3,
                                                               &v29,
                                                               v14,
                                                               0,
                                                               &v36,
                                                               0LL,
                                                               0LL,
                                                               0LL);
    if ( SharedModeEnginePeriodicityForTranslatedProcessingMode == -2004287480 )
    {
      v29 = v15;
      if ( CEndpointCharacteristics::ConnectorProbablySupportsFormat(v13, v12, &v29, a3) )
        SharedModeEnginePeriodicityForTranslatedProcessingMode = -2005139389;
    }
    DeviceFormatAndSpatialSettings = 0;
    if ( !AEError::DeviceInUse((AEError *)SharedModeEnginePeriodicityForTranslatedProcessingMode, v16) )
      DeviceFormatAndSpatialSettings = SharedModeEnginePeriodicityForTranslatedProcessingMode;
    if ( (DeviceFormatAndSpatialSettings & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20CF,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)DeviceFormatAndSpatialSettings);
      if ( DeviceFormatAndSpatialSettings != -2004287480 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2198,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)DeviceFormatAndSpatialSettings);
        CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
        return DeviceFormatAndSpatialSettings;
      }
      v19 = CEndpointCharacteristics::TryAddFormat(this[198], v18, a3);
      DeviceFormatAndSpatialSettings = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2191,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19);
        CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
        return DeviceFormatAndSpatialSettings;
      }
      v29 = v15;
      v20 = EffectPack::ConfirmDeviceFormat((EffectPack *)this, a3, &v29, v37, 0);
      DeviceFormatAndSpatialSettings = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2194,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v20);
        CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
        return DeviceFormatAndSpatialSettings;
      }
    }
    pv = 0LL;
    *(_QWORD *)&v29.Data1 = &pv;
    *(_QWORD *)v29.Data4 = 0LL;
    v30 = 1;
    DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                       this,
                                       0,
                                       0LL,
                                       (struct tWAVEFORMATEX **)v29.Data4,
                                       0LL,
                                       0LL,
                                       0LL);
    if ( v30 )
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        *(void ***)&v29.Data1,
        *(void **)v29.Data4);
    if ( (DeviceFormatAndSpatialSettings & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x219D,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)DeviceFormatAndSpatialSettings);
      v21 = pv;
      pv = 0LL;
      if ( v21 )
        CoTaskMemFree(v21);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this[198], 0, v37, a3);
    DeviceFormatAndSpatialSettings = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21A0,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pv,
        0LL);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v23 = lambda_c7ca9f80eb9d712dfec147e946fba3c8_::_lambda_c7ca9f80eb9d712dfec147e946fba3c8_(v33, this, &v37, &pv);
    wil::scope_exit__lambda_c7ca9f80eb9d712dfec147e946fba3c8___(v34, v23);
    v24 = EffectPack::DeriveAndCacheMixFormatsForConnector((EffectPack *)this, eHostProcessConnector);
    DeviceFormatAndSpatialSettings = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21A9,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v24);
      wil::details::lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___::_lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___(v34);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pv,
        0LL);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v25 = EffectPack::DeriveAndCacheMixFormatsForConnector((EffectPack *)this, eKeywordDetectorConnector);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21AD,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v25,
        v28);
    v39 = 0LL;
    v26 = CEndpointCharacteristics::SetProcessingPeriod(this[198], &v39);
    DeviceFormatAndSpatialSettings = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21B6,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v26);
      wil::details::lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___::_lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___(v34);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pv,
        0LL);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v29 = 0LL;
    EffectPack::GetDefaultConnectorProcessingModeConfiguration((EffectPack *)this, v37, &v29, 0LL, 0LL);
    v27 = EffectPack::ConfirmDeviceFormat((EffectPack *)this, a3, &v29, v37, 1);
    DeviceFormatAndSpatialSettings = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21C2,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v27);
      wil::details::lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___::_lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___(v34);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pv,
        0LL);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v34[24] = 0;
    wil::details::lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___::_lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___(v34);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
  }
  else
  {
    v5 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this[198], 0, a2, 0LL);
    DeviceFormatAndSpatialSettings = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x217E,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v5);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
  }
  return 0LL;
}
