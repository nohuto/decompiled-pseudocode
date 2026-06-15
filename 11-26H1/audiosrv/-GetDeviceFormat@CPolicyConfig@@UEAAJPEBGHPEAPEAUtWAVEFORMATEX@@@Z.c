/*
 * XREFs of ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x18002F110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000DEB4 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct tWAVEFORMATEX **a4)
{
  int DeviceFormatAndSpatialSettings; // eax
  int v7; // ebx
  __int64 v9; // rdx
  EffectPack *v10[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_OWORD *)v10 = 0LL;
  v11 = 0LL;
  DeviceFormatAndSpatialSettings = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
                                     g_pEndpointCharacteristicsCache,
                                     a2,
                                     0LL,
                                     0LL,
                                     v10);
  v7 = DeviceFormatAndSpatialSettings;
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v9 = 1039LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)DeviceFormatAndSpatialSettings);
    goto LABEL_4;
  }
  DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                     (CEndpointCharacteristics **)v10[1],
                                     0,
                                     a3,
                                     a4,
                                     0LL,
                                     0LL,
                                     0LL);
  v7 = DeviceFormatAndSpatialSettings;
  if ( DeviceFormatAndSpatialSettings >= 0 )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( DeviceFormatAndSpatialSettings != -2004287484 )
  {
    v9 = 1041LL;
    goto LABEL_7;
  }
  v7 = -2004287484;
LABEL_4:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v10);
  if ( v7 >= 0 )
    return 0LL;
  if ( v7 == -2004287484 )
    return 2290679812LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3CE,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
