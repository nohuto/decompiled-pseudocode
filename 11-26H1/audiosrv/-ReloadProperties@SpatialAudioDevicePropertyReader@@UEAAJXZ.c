/*
 * XREFs of ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18003BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStaticMaskPC@SpatialAudio@@YA?AW4AudioObjectType@@AEBU_GUID@@@Z @ 0x18003B384 (-GetStaticMaskPC@SpatialAudio@@YA-AW4AudioObjectType@@AEBU_GUID@@@Z.c)
 *     ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18003B630 (-LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18003BBB0 (-AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ?CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ @ 0x18003BE44 (-CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ.c)
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18003CD60 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x1800AB550 (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::ReloadProperties(SpatialAudioDevicePropertyReader *this)
{
  int DeviceSettings; // eax
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 *v7; // rdx
  const struct _GUID *v8; // rdx
  unsigned __int16 MaxDynamicObjectCountPC; // ax
  __int16 v10; // ax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int PositionTable; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  const CHAR *v24; // [rsp+40h] [rbp-10h] BYREF
  int v25; // [rsp+78h] [rbp+28h] BYREF
  int v26; // [rsp+80h] [rbp+30h] BYREF
  const CHAR *v27; // [rsp+88h] [rbp+38h] BYREF

  v25 = 1;
  SpatialAudioDevicePropertyReader::CleanUp(this);
  DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceProperties(this, &v25);
  if ( DeviceSettings < 0 )
  {
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      goto LABEL_11;
    LODWORD(v27) = 286;
    v7 = (unsigned __int8 *)&unk_1801A957E;
    goto LABEL_10;
  }
  DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceSettings(this);
  if ( DeviceSettings < 0 )
  {
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      goto LABEL_11;
    LODWORD(v27) = 290;
    v7 = (unsigned __int8 *)&unk_1801A94B6;
    goto LABEL_10;
  }
  DeviceSettings = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 24LL))(*((_QWORD *)this + 52));
  if ( DeviceSettings < 0 && (unsigned int)dword_1801D32E8 > 2 )
  {
    LODWORD(v27) = 293;
    v7 = (unsigned __int8 *)&unk_1801A94E8;
LABEL_10:
    v26 = DeviceSettings;
    v24 = "SpatialAudioDevicePropertyReader::ReloadProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      v7,
      v5,
      v6,
      &v24,
      (__int64)&v27,
      (__int64)&v26);
  }
LABEL_11:
  if ( v25 )
  {
    *(_OWORD *)((char *)this + 108) = MULTICHANNEL_SPATIAL_ENCODER;
    *((_DWORD *)this + 31) = SpatialAudio::GetStaticMaskPC((SpatialAudioDevicePropertyReader *)((char *)this + 108), v3);
    MaxDynamicObjectCountPC = SpatialAudio::GetMaxDynamicObjectCountPC(
                                (SpatialAudioDevicePropertyReader *)((char *)this + 108),
                                v8);
    *(_OWORD *)((char *)this + 134) = xmmword_18018A540;
    *((_WORD *)this + 66) = MaxDynamicObjectCountPC;
    *(_OWORD *)((char *)this + 150) = xmmword_18018A550;
    *((_DWORD *)this + 32) = 0;
    *(_OWORD *)((char *)this + 166) = xmmword_18018A560;
    *(_OWORD *)((char *)this + 182) = xmmword_18018A570;
    *(_OWORD *)((char *)this + 198) = xmmword_18018A580;
    *(_OWORD *)((char *)this + 214) = xmmword_18018A590;
    *(_OWORD *)((char *)this + 230) = xmmword_18018A5A0;
    *(_DWORD *)((char *)this + 246) = 0;
    v10 = *((_WORD *)this + 124);
    v11 = *(_OWORD *)((char *)this + 120);
    *(_OWORD *)((char *)this + 250) = *(_OWORD *)((char *)this + 104);
    v12 = *(_OWORD *)((char *)this + 136);
    *(_OWORD *)((char *)this + 266) = v11;
    v13 = *(_OWORD *)((char *)this + 152);
    *(_OWORD *)((char *)this + 282) = v12;
    v14 = *(_OWORD *)((char *)this + 168);
    *(_OWORD *)((char *)this + 298) = v13;
    v15 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 314) = v14;
    v16 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 330) = v15;
    v17 = *(_OWORD *)((char *)this + 232);
    *(_OWORD *)((char *)this + 346) = v16;
    *(_OWORD *)((char *)this + 362) = *(_OWORD *)((char *)this + 216);
    *(_OWORD *)((char *)this + 378) = v17;
    *((_WORD *)this + 197) = v10;
  }
  PositionTable = SpatialAudioDevicePropertyReader::AllocatePositionTable(this);
  v22 = PositionTable;
  if ( PositionTable < 0 && (unsigned int)dword_1801D32E8 > 2 )
  {
    v25 = PositionTable;
    v26 = 311;
    v27 = "SpatialAudioDevicePropertyReader::ReloadProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      byte_1801A9484,
      v20,
      v21,
      &v27,
      (__int64)&v26,
      (__int64)&v25);
  }
  return v22;
}
