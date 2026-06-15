/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolume@SpatialAudioEncoderProperties@@UEAAJW4AudioObjectType@@PEAM111@Z @ 0x18012F190
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume(
        SpatialAudioEncoderProperties *this,
        enum AudioObjectType a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 *v15; // rdx
  float *v16; // rdx
  __int32 v17; // r12d
  float *v18; // rax
  int v20; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v21; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 656);
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 656));
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( *((_BYTE *)this + 1148) )
  {
    if ( a3 && a4 && (v16 = a5) != 0LL )
    {
      v17 = a2 & 0xFFFFD | 2;
      v18 = a6;
      *(_DWORD *)a3 = *((_OWORD *)this + ((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v17)) >> 20) - 1021);
      *a4 = *((float *)this + 4 * ((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v17)) >> 20) - 4083);
      *v16 = *((float *)this + 4 * ((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v17)) >> 20) - 4082);
      if ( v18 )
        *v18 = *((float *)this + 4 * ((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v17)) >> 20) - 4081);
    }
    else
    {
      v11 = -2147024809;
      if ( (unsigned int)dword_1801D32E8 > 2 )
      {
        v20 = 630;
        v15 = (unsigned __int8 *)&unk_1801A98CE;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v11 = -2147418113;
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v20 = 629;
      v15 = (unsigned __int8 *)&unk_1801A997C;
LABEL_13:
      v21 = "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume";
      v22 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        v15,
        v13,
        v14,
        &v21,
        (__int64)&v20,
        (__int64)&v22);
    }
  }
  return v11;
}
