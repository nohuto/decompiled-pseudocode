/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801B3830
 * Callers:
 *     ??$WindowEventDispatcher_CreatedWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0AEAI@Z @ 0x18006CE84 (--$WindowEventDispatcher_CreatedWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x1802F9044 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 *     ??$WindowEventDispatcher_CreatedLegacyWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0AEAI@Z @ 0x18042BEA4 (--$WindowEventDispatcher_CreatedLegacyWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@.c)
 *     ??$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@Z @ 0x18061E4DC (--$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0D.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        __int64 a7)
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
  const WCHAR *v21; // [rsp+70h] [rbp-1h]
  int v22; // [rsp+78h] [rbp+7h]
  int v23; // [rsp+7Ch] [rbp+Bh]
  const WCHAR *v24; // [rsp+80h] [rbp+Fh]
  int v25; // [rsp+88h] [rbp+17h]
  int v26; // [rsp+8Ch] [rbp+1Bh]
  __int64 v27; // [rsp+90h] [rbp+1Fh]
  __int64 v28; // [rsp+98h] [rbp+27h]

  v27 = a7;
  v8 = -1LL;
  v28 = 4LL;
  v10 = *a6;
  if ( *a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &pvData;
    v12 = 2;
  }
  v25 = v12;
  v24 = v10;
  v26 = 0;
  v13 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v13[v8] );
    v14 = 2 * v8 + 2;
  }
  else
  {
    v13 = &pvData;
    v14 = 2;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v22 = v14;
  v21 = v13;
  v23 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  UserData.Reserved = 2;
  v20 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
}
