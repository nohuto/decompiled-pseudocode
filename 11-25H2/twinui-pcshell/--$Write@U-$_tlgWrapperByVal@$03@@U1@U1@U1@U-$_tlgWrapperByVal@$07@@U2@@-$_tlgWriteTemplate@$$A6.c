/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1801D8708
 * Callers:
 *     ?WorkAreaUpdate_@XamlSwitcherTelemetry@@QEAAXMMMMN@Z @ 0x180106ED4 (-WorkAreaUpdate_@XamlSwitcherTelemetry@@QEAAXMMMMN@Z.c)
 *     ?SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z @ 0x180240D28 (-SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *v13; // [rsp+60h] [rbp-59h]
  int v14; // [rsp+68h] [rbp-51h]
  int v15; // [rsp+6Ch] [rbp-4Dh]
  __int64 v16; // [rsp+70h] [rbp-49h]
  __int64 v17; // [rsp+78h] [rbp-41h]
  __int64 v18; // [rsp+80h] [rbp-39h]
  __int64 v19; // [rsp+88h] [rbp-31h]
  __int64 v20; // [rsp+90h] [rbp-29h]
  __int64 v21; // [rsp+98h] [rbp-21h]
  __int64 v22; // [rsp+A0h] [rbp-19h]
  __int64 v23; // [rsp+A8h] [rbp-11h]
  __int64 v24; // [rsp+B0h] [rbp-9h]
  __int64 v25; // [rsp+B8h] [rbp-1h]
  __int64 v26; // [rsp+C0h] [rbp+7h]
  __int64 v27; // [rsp+C8h] [rbp+Fh]

  v26 = a10;
  v24 = a9;
  v22 = a8;
  v20 = a7;
  v18 = a6;
  v16 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v27 = 8LL;
  v25 = 8LL;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v23 = 4LL;
  v21 = 4LL;
  v19 = 4LL;
  v17 = 4LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v14 = *(unsigned __int16 *)(a2 + 11);
  v13 = a2 + 11;
  UserData.Reserved = 2;
  v15 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
}
