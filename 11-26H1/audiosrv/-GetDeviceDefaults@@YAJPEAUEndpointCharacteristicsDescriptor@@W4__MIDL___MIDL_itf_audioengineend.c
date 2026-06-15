/*
 * XREFs of ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002E644
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002D7E0 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002F580 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 * Callees:
 *     ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x18000BE08 (-GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D8C0 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x18000E7D8 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8B8 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002EC70 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?TryGetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180067A48 (-TryGetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180067F64 (-GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall GetDeviceDefaults(
        CEndpointCharacteristics ***a1,
        unsigned __int32 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **pv,
        __int64 *a6,
        __int64 *a7)
{
  struct _GUID *v8; // rdi
  struct tWAVEFORMATEX **v11; // rbx
  CEndpointCharacteristics ***v12; // r12
  __int64 *v13; // rsi
  int ConnectorFormatForProcessingMode; // edi
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int ProcessingPeriod; // eax
  unsigned int v18; // esi
  struct tWAVEFORMATEX *v20; // rax
  int v21; // eax
  unsigned int v22; // ebx
  struct tWAVEFORMATEX **v23; // rcx
  int DevicePipeFormat; // eax
  struct _GUID v25; // [rsp+20h] [rbp-30h] BYREF
  void **p_pv; // [rsp+30h] [rbp-20h]
  struct tWAVEFORMATEX *v27; // [rsp+38h] [rbp-18h] BYREF
  char v28; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v8 = a3;
  if ( a4 )
    *a4 = 0LL;
  v11 = pv;
  if ( pv )
    *pv = 0LL;
  if ( a7 || a6 )
  {
    v12 = a1 + 1;
    ProcessingPeriod = EffectPack::GetProcessingPeriod(a1[1], eHostProcessConnector, (BSTR *)a6, a7);
    v18 = ProcessingPeriod;
    if ( ProcessingPeriod < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCA0,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)ProcessingPeriod);
      return v18;
    }
  }
  else
  {
    v12 = a1 + 1;
  }
  pv = 0LL;
  v13 = (__int64 *)v12;
  if ( a4 && !*a4 )
  {
    p_pv = (void **)&pv;
    v27 = 0LL;
    v28 = 1;
    v25 = *v8;
    ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(
                                         *v12,
                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                         &v25,
                                         &v27);
    if ( v28 )
    {
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        p_pv,
        v27);
      v13 = (__int64 *)(a1 + 1);
    }
    if ( ConnectorFormatForProcessingMode < 0 )
    {
      v15 = (unsigned int)ConnectorFormatForProcessingMode;
      v16 = 3259LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v15);
LABEL_35:
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pv,
        0LL);
      return (unsigned int)ConnectorFormatForProcessingMode;
    }
    v20 = (struct tWAVEFORMATEX *)pv;
    pv = 0LL;
    *a4 = v20;
    v8 = a3;
  }
  if ( !v11 )
    goto LABEL_34;
  v25 = *v8;
  if ( !EffectPack::CanProcessingModeBeParameterized(
          (EffectPack *)*v13,
          &v25,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2) )
  {
    if ( memcmp_0(v8, &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf, 0x10uLL)
      || !(unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector(*v13, a2, 0LL) )
    {
      v25 = *v8;
      DevicePipeFormat = CEndpointCharacteristics::TryGetDevicePipeFormat(
                           (CEndpointCharacteristics *)*a1,
                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                           &v25,
                           v11);
      ConnectorFormatForProcessingMode = DevicePipeFormat;
      if ( DevicePipeFormat >= 0 )
      {
        if ( *v11 )
          goto LABEL_34;
        v25 = *a3;
        DevicePipeFormat = EffectPack::GetMixFormat(
                             (EffectPack *)a1[1],
                             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                             &v25,
                             v11);
        ConnectorFormatForProcessingMode = DevicePipeFormat;
        if ( DevicePipeFormat >= 0 )
          goto LABEL_34;
        v16 = 3304LL;
      }
      else
      {
        v16 = 3297LL;
      }
      v15 = (unsigned int)DevicePipeFormat;
      goto LABEL_30;
    }
    v13 = (__int64 *)(a1 + 1);
  }
  if ( *v11
    || (v25 = *v8,
        v21 = EffectPack::GetDevicePipeFormat(
                (EffectPack *)*v13,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                &v25,
                v11),
        v22 = v21,
        v21 >= 0) )
  {
LABEL_34:
    ConnectorFormatForProcessingMode = 0;
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCDB,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v21);
  v23 = pv;
  pv = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  return v22;
}
