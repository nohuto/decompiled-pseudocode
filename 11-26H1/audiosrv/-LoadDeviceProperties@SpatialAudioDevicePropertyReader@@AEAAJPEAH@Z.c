/*
 * XREFs of ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18003CD60
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18003BEF0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     Create_SpatialAudioEncoderProperties @ 0x18003CFA4 (Create_SpatialAudioEncoderProperties.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceProperties(
        SpatialAudioDevicePropertyReader *this,
        int *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  const CHAR *v15; // rcx
  _OWORD *v16; // rax
  unsigned __int8 *v17; // rdx
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-28h] BYREF
  _OWORD *v19; // [rsp+50h] [rbp-18h]
  int v20; // [rsp+90h] [rbp+28h] BYREF
  int v21; // [rsp+98h] [rbp+30h] BYREF
  const CHAR *v22; // [rsp+A0h] [rbp+38h] BYREF
  const CHAR *v23; // [rsp+A8h] [rbp+40h] BYREF

  *a2 = 1;
  *(_OWORD *)pvar = 0LL;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
         *((_QWORD *)this + 51),
         &PKEY_SpatialAudio_Metadata_DeviceProperties,
         pvar);
  v8 = v4;
  if ( v4 >= 0 )
  {
    if ( LODWORD(pvar[1]) == 146 && LOWORD(pvar[0]) == 65 )
    {
      v16 = v19;
      *(_OWORD *)((char *)this + 104) = *v19;
      *(_OWORD *)((char *)this + 120) = v16[1];
      *(_OWORD *)((char *)this + 136) = v16[2];
      *(_OWORD *)((char *)this + 152) = v16[3];
      *(_OWORD *)((char *)this + 168) = v16[4];
      *(_OWORD *)((char *)this + 184) = v16[5];
      *(_OWORD *)((char *)this + 200) = v16[6];
      *(_OWORD *)((char *)this + 216) = v16[7];
      *(_OWORD *)((char *)this + 232) = v16[8];
      *((_WORD *)this + 124) = *((_WORD *)v16 + 72);
      if ( *((_DWORD *)this + 26) == 1509949442 )
      {
        *a2 = 0;
        v8 = 0;
      }
    }
    if ( *a2 )
      goto LABEL_4;
    v22 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v22);
    v11 = Create_SpatialAudioEncoderProperties((char *)this + 108, v10, &v22);
    v8 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_1801D32E8 > 2 )
      {
        v21 = 346;
        v17 = (unsigned __int8 *)&unk_1801A9452;
LABEL_17:
        v20 = v11;
        v23 = "SpatialAudioDevicePropertyReader::LoadDeviceProperties";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v12,
          v17,
          v13,
          v14,
          &v23,
          (__int64)&v21,
          (__int64)&v20);
      }
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(const CHAR *, char *))(*(_QWORD *)v22 + 32LL))(v22, (char *)this + 250);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v15 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(const CHAR *))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_4;
      }
      if ( (unsigned int)dword_1801D32E8 > 2 )
      {
        v21 = 349;
        v17 = (unsigned __int8 *)&unk_1801A938A;
        goto LABEL_17;
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v22);
    goto LABEL_4;
  }
  if ( (unsigned int)dword_1801D32E8 > 2 )
  {
    v20 = v4;
    v21 = 327;
    v22 = "SpatialAudioDevicePropertyReader::LoadDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      byte_1801A9420,
      v6,
      v7,
      &v22,
      (__int64)&v21,
      (__int64)&v20);
  }
LABEL_4:
  PropVariantClear(pvar);
  return v8;
}
