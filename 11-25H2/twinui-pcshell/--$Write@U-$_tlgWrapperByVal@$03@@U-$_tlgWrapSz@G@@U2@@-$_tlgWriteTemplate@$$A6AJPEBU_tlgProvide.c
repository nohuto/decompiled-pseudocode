/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x180074424
 * Callers:
 *     ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x180073330 (--$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z.c)
 *     ??$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x1800F7600 (--$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$Q.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        const WCHAR **a7)
{
  __int64 v8; // rcx
  const WCHAR *v10; // r8
  __int64 v11; // rax
  int v12; // eax
  const WCHAR *v13; // rdx
  int v14; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int8 *v18; // [rsp+60h] [rbp-11h]
  int v19; // [rsp+68h] [rbp-9h]
  int v20; // [rsp+6Ch] [rbp-5h]
  __int64 v21; // [rsp+70h] [rbp-1h]
  __int64 v22; // [rsp+78h] [rbp+7h]
  const WCHAR *v23; // [rsp+80h] [rbp+Fh]
  int v24; // [rsp+88h] [rbp+17h]
  int v25; // [rsp+8Ch] [rbp+1Bh]
  const WCHAR *v26; // [rsp+90h] [rbp+1Fh]
  int v27; // [rsp+98h] [rbp+27h]
  int v28; // [rsp+9Ch] [rbp+2Bh]

  v8 = -1LL;
  v10 = *a7;
  if ( *a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &LocaleName;
    v12 = 2;
  }
  v27 = v12;
  v26 = v10;
  v28 = 0;
  v13 = *a6;
  if ( *a6 )
  {
    do
      ++v8;
    while ( v13[v8] );
    v14 = 2 * v8 + 2;
  }
  else
  {
    v13 = &LocaleName;
    v14 = 2;
  }
  v21 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v24 = v14;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v23 = v13;
  v25 = 0;
  v22 = 4LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  UserData.Reserved = 2;
  v20 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
}
