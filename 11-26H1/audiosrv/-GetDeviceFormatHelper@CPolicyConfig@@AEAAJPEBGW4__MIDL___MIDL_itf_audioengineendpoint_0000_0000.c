/*
 * XREFs of ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002B730
 * Callers:
 *     ?GetDeviceFormatAndSpatialSettings@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18010BB40 (-GetDeviceFormatAndSpatialSettings@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatial.c)
 *     ?GetDeviceFormatForConnector@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@@Z @ 0x18010BBB0 (-GetDeviceFormatForConnector@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 * Callees:
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000DEB4 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetDeviceFormatHelper(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        __int32 a3,
        unsigned int a4,
        struct tWAVEFORMATEX **a5,
        struct SpatialAudioSettings **a6,
        unsigned int *a7,
        struct SpatialAudioEncoderDescriptor **a8)
{
  int v10; // eax
  int DeviceFormatAndSpatialSettings; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  EffectPack *v15[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                  + 40LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          v15);
  DeviceFormatAndSpatialSettings = v10;
  if ( v10 < 0 )
  {
    v13 = (unsigned int)v10;
    v14 = 1039LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v13);
    goto LABEL_4;
  }
  DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                     (CEndpointCharacteristics **)v15[1],
                                     a3,
                                     a4,
                                     a5,
                                     a6,
                                     a7,
                                     a8);
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    if ( DeviceFormatAndSpatialSettings == -2004287484 )
    {
      DeviceFormatAndSpatialSettings = -2004287484;
      goto LABEL_4;
    }
    v13 = (unsigned int)DeviceFormatAndSpatialSettings;
    v14 = 1041LL;
    goto LABEL_6;
  }
  DeviceFormatAndSpatialSettings = 0;
LABEL_4:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v15);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
