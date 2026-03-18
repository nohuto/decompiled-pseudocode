/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14013ADF0
 * Callers:
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x14013AD20 (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z @ 0x1401619E8 (-PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z.c)
 *     ?TraceLoggingLockMessagePosted@@YAXXZ @ 0x1401EB5A0 (-TraceLoggingLockMessagePosted@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6)
{
  _BYTE *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int8 *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  _BYTE *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  __int64 v19; // [rsp+80h] [rbp+27h]
  __int64 v20; // [rsp+88h] [rbp+2Fh]

  v19 = a6;
  v20 = 8LL;
  v7 = *a5;
  if ( *a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v7 = &unk_140269890;
    v9 = 1;
  }
  v17 = v9;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v16 = v7;
  v18 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v14 = *(unsigned __int16 *)(a2 + 11);
  v13 = a2 + 11;
  v15 = 1;
  UserData.Reserved = 2;
  return EtwWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
}
