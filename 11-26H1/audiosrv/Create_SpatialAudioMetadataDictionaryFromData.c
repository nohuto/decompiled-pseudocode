/*
 * XREFs of Create_SpatialAudioMetadataDictionaryFromData @ 0x180131B50
 * Callers:
 *     ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x18012CDE0 (-CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$CopyTo@UISpatialAudioMetadataDictionary@@@?$ComPtr@VSpatialAudioMetadataDictionary@@@WRL@Microsoft@@QEBAJPEAPEAUISpatialAudioMetadataDictionary@@@Z @ 0x180130E70 (--$CopyTo@UISpatialAudioMetadataDictionary@@@-$ComPtr@VSpatialAudioMetadataDictionary@@@WRL@Micr.c)
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x180130E9C (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@W.c)
 */

__int64 __fastcall Create_SpatialAudioMetadataDictionaryFromData(
        const struct _GUID *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v7; // ebx
  unsigned __int8 *v8; // rdx
  int v9; // eax
  int v11; // [rsp+40h] [rbp-20h] BYREF
  SpatialAudioMetadataDictionary *v12; // [rsp+48h] [rbp-18h] BYREF
  const CHAR *v13; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v14; // [rsp+88h] [rbp+28h] BYREF
  unsigned __int8 *v15; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v5 = (__int64)a5;
  v12 = 0LL;
  if ( a5 )
  {
    *a5 = 0LL;
    a5 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
           &v12,
           a1,
           &v14,
           (const unsigned __int16 **)&a5,
           &v15,
           &v16);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = Microsoft::WRL::ComPtr<SpatialAudioMetadataDictionary>::CopyTo<ISpatialAudioMetadataDictionary>(&v12, v5);
      goto LABEL_9;
    }
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      LODWORD(a5) = v9;
      v8 = (unsigned __int8 *)&unk_1801AA659;
      v11 = 112;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      LODWORD(a5) = -2147024809;
      v8 = (unsigned __int8 *)&unk_1801AA6C5;
      v11 = 107;
LABEL_4:
      v13 = "Create_SpatialAudioMetadataDictionaryFromData";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)a1,
        v8,
        (__int64)a3,
        a4,
        &v13,
        (__int64)&v11,
        (__int64)&a5);
    }
  }
LABEL_9:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
  return v7;
}
