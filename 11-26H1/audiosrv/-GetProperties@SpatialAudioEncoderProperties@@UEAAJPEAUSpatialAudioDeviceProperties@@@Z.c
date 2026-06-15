/*
 * XREFs of ?GetProperties@SpatialAudioEncoderProperties@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x18012F440
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetProperties(
        SpatialAudioEncoderProperties *this,
        struct SpatialAudioDeviceProperties *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  const CHAR *v12; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 656);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 656));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 696);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 712);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 728);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 744);
    *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)this + 760);
    *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)this + 776);
    *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)this + 792);
    *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)this + 808);
    *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)this + 824);
    *((_WORD *)a2 + 72) = *((_WORD *)this + 420);
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v10 = -2147024809;
      v12 = "SpatialAudioEncoderProperties::GetProperties";
      v11 = 599;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_1801A9942,
        v7,
        v8,
        &v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
  return v5;
}
