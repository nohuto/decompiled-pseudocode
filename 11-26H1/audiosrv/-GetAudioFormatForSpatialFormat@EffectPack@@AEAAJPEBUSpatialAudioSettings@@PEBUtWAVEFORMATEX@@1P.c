/*
 * XREFs of ?GetAudioFormatForSpatialFormat@EffectPack@@AEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180139160
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18013D040 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18014152C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPack::GetAudioFormatForSpatialFormat(
        EffectPack *this,
        const struct SpatialAudioSettings *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        struct WAVEFORMATEXTENSIBLE *a5,
        bool *a6)
{
  __int64 v10; // rdx
  int AudioFormatForSpatialFormat; // ebx
  struct WAVEFORMATEXTENSIBLE *v13; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v15; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v10 = 7329LL;
LABEL_3:
    AudioFormatForSpatialFormat = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)AudioFormatForSpatialFormat);
    return (unsigned int)AudioFormatForSpatialFormat;
  }
  if ( !a3 )
  {
    v10 = 7330LL;
    goto LABEL_3;
  }
  v13 = a5;
  if ( !a5 )
  {
    v10 = 7331LL;
    goto LABEL_3;
  }
  v15 = 0;
  AudioFormatForSpatialFormat = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
                                  g_policyConfigInternal,
                                  &v15);
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v10 = 7336LL;
    goto LABEL_4;
  }
  AudioFormatForSpatialFormat = CSpatialProperties::GetAudioFormatForSpatialFormat(
                                  (CSpatialProperties *)(*((_QWORD *)this + 198) + 448LL),
                                  this,
                                  a2,
                                  a4,
                                  a3,
                                  (struct SpatialAudioRelatedGlobalSettings *)&v15,
                                  v13,
                                  a6);
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v10 = 7341LL;
    goto LABEL_4;
  }
  return 0LL;
}
