/*
 * XREFs of ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x180057C00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode(
        SpatialAudioDevicePropertyReader *this,
        enum VirtualSurroundEffectMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  unsigned __int8 *v16; // rdx
  const CHAR *v17[2]; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+98h] [rbp+48h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v8 = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !*((_DWORD *)this + 128) )
  {
    v14 = -2147418113;
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      return v14;
    v20 = 879;
    v16 = (unsigned __int8 *)&unk_1801A8902;
LABEL_15:
    v17[0] = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
    v19 = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      v16,
      v6,
      v7,
      v17,
      (__int64)&v20,
      (__int64)&v19);
    return v14;
  }
  if ( !a2 )
  {
    v14 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      return v14;
    v20 = 880;
    v16 = (unsigned __int8 *)&unk_1801A89A8;
    goto LABEL_15;
  }
  v9 = *((_QWORD *)this + 52);
  v18 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 32LL))(v9, &v18);
  v14 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v19 = v10;
      v20 = 884;
      v17[0] = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_1801A8976,
        v12,
        v13,
        v17,
        (__int64)&v20,
        (__int64)&v19);
    }
  }
  else
  {
    if ( !v18 )
      v8 = *((_DWORD *)this + 125);
    *(_DWORD *)a2 = v8;
  }
  return v14;
}
