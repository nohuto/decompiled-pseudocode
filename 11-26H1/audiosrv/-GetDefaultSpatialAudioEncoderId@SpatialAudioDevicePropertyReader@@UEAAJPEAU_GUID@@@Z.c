/*
 * XREFs of ?GetDefaultSpatialAudioEncoderId@SpatialAudioDevicePropertyReader@@UEAAJPEAU_GUID@@@Z @ 0x18012D410
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetDefaultSpatialAudioEncoderId(
        SpatialAudioDevicePropertyReader *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 *v9; // rdx
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF
  int v12; // [rsp+80h] [rbp+40h] BYREF
  const CHAR *v13; // [rsp+88h] [rbp+48h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *((_DWORD *)this + 128) )
  {
    if ( a2 )
    {
      *a2 = *(struct _GUID *)((char *)this + 476);
      return v5;
    }
    v5 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v12 = 866;
      v9 = (unsigned __int8 *)&unk_1801A893C;
      goto LABEL_6;
    }
  }
  else
  {
    v5 = -2147418113;
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v12 = 865;
      v9 = (unsigned __int8 *)&unk_1801A8A56;
LABEL_6:
      v13 = "SpatialAudioDevicePropertyReader::GetDefaultSpatialAudioEncoderId";
      v11 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        v9,
        v7,
        v8,
        &v13,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
  return v5;
}
