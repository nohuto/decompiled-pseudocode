/*
 * XREFs of IsSpatialOnlyFormat @ 0x180079450
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18014152C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18014207C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180143670 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x180144460 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800B5998 (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall IsSpatialOnlyFormat(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 i; // rcx
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int j; // ecx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+44h] [rbp-1Ch]
  int v19; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+4Ch] [rbp-14h]
  int v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+54h] [rbp-Ch]
  int v23; // [rsp+58h] [rbp-8h]
  int v24; // [rsp+5Ch] [rbp-4h]

  v4 = 0;
  v6 = 4;
  v17 = 268;
  v18 = 1051882;
  v19 = -1442840448;
  v20 = 1905997824;
  v21 = 12;
  v22 = 1051882;
  v23 = -1442840448;
  v24 = 1905997824;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(
                          a1,
                          a2,
                          a3,
                          a4,
                          0x100CEA0000070CLL,
                          0x719B3800AA000080LL,
                          0x100CEA0000030CLL,
                          0x719B3800AA000080LL)
    && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v6 = 3;
  }
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v7 = 2LL * (unsigned int)i;
    v11 = v16[2 * (unsigned int)i] - *a1;
    if ( !v11 )
      v11 = v16[2 * (unsigned int)i + 1] - a1[1];
    if ( !v11 )
      return 1;
  }
  v12 = 2;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(
                          i,
                          v7,
                          v8,
                          v9,
                          0x100CEA0000010BLL,
                          0x719B3800AA000080LL,
                          0x100CEA0000000BLL,
                          0x719B3800AA000080LL)
    && (unsigned int)IsDtsXSupportedByAudioDriver() )
  {
    v12 = 1;
  }
  for ( j = 0; j < v12; ++j )
  {
    v14 = v16[2 * j] - *a1;
    if ( !v14 )
      v14 = v16[2 * j + 1] - a1[1];
    if ( !v14 )
      return 1;
  }
  return v4;
}
