/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4434AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800279EC
 * Callers:
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180005674 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        _BYTE **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE **a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // rcx
  _BYTE *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // rdx
  int v18; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int8 *v22; // [rsp+60h] [rbp-71h]
  int v23; // [rsp+68h] [rbp-69h]
  int v24; // [rsp+6Ch] [rbp-65h]
  _BYTE *v25; // [rsp+70h] [rbp-61h]
  int v26; // [rsp+78h] [rbp-59h]
  int v27; // [rsp+7Ch] [rbp-55h]
  __int64 v28; // [rsp+80h] [rbp-51h]
  __int64 v29; // [rsp+88h] [rbp-49h]
  __int64 v30; // [rsp+90h] [rbp-41h]
  __int64 v31; // [rsp+98h] [rbp-39h]
  __int64 v32; // [rsp+A0h] [rbp-31h]
  __int64 v33; // [rsp+A8h] [rbp-29h]
  _BYTE *v34; // [rsp+B0h] [rbp-21h]
  int v35; // [rsp+B8h] [rbp-19h]
  int v36; // [rsp+BCh] [rbp-15h]
  __int64 v37; // [rsp+C0h] [rbp-11h]
  __int64 v38; // [rsp+C8h] [rbp-9h]
  __int64 v39; // [rsp+D0h] [rbp-1h]
  __int64 v40; // [rsp+D8h] [rbp+7h]

  v39 = a11;
  v37 = a10;
  v13 = -1LL;
  v40 = 8LL;
  v38 = 4LL;
  v14 = *a9;
  if ( *a9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)&v14[2 * v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = byte_180056CEC;
    v16 = 2;
  }
  v35 = v16;
  v32 = a8;
  v30 = a7;
  v28 = a6;
  v34 = v14;
  v36 = 0;
  v33 = 4LL;
  v17 = *a5;
  v31 = 4LL;
  v29 = 4LL;
  if ( v17 )
  {
    do
      ++v13;
    while ( *(_WORD *)&v17[2 * v13] );
    v18 = 2 * v13 + 2;
  }
  else
  {
    v17 = byte_180056CEC;
    v18 = 2;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v26 = v18;
  v25 = v17;
  v27 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v23 = *(unsigned __int16 *)(a2 + 11);
  v22 = a2 + 11;
  UserData.Reserved = 2;
  v24 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
}
