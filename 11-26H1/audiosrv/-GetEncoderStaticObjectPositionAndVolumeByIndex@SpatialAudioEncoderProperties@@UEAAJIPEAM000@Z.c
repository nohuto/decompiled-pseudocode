/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolumeByIndex@SpatialAudioEncoderProperties@@UEAAJIPEAM000@Z @ 0x18012F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex(
        SpatialAudioEncoderProperties *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // r12
  unsigned int v11; // ebx
  float *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 *v15; // rdx
  int v17; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v18; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 656);
  v7 = a2;
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 656));
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( *((_BYTE *)this + 1148) )
  {
    if ( a3 && a4 && (v12 = a5) != 0LL && (unsigned int)v7 < 0x13 )
    {
      *(_DWORD *)a3 = *((_OWORD *)this + v7 + 3);
      *a4 = *((float *)this + 4 * v7 + 13);
      *v12 = *((float *)this + 4 * v7 + 14);
      if ( a6 )
        *a6 = *((float *)this + 4 * v7 + 15);
    }
    else
    {
      v11 = -2147024809;
      if ( (unsigned int)dword_1801D32E8 > 2 )
      {
        v17 = 651;
        v15 = (unsigned __int8 *)&unk_1801A9908;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v11 = -2147418113;
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v17 = 650;
      v15 = (unsigned __int8 *)&unk_1801A9894;
LABEL_14:
      v18 = "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex";
      v19 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        v15,
        v13,
        v14,
        &v18,
        (__int64)&v17,
        (__int64)&v19);
    }
  }
  return v11;
}
