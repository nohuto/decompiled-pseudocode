/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18005D7A4
 * Callers:
 *     ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005D5D0 (-HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // eax
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int8 *v15; // [rsp+60h] [rbp-29h]
  int v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  const wchar_t *v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  __int64 v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+8Ch] [rbp+3h]
  __int64 v24; // [rsp+90h] [rbp+7h]
  __int64 v25; // [rsp+98h] [rbp+Fh]
  __int64 v26; // [rsp+A0h] [rbp+17h]
  __int64 v27; // [rsp+A8h] [rbp+1Fh]

  v26 = a8;
  v24 = a7;
  v27 = 1LL;
  v25 = 4LL;
  v8 = *(unsigned __int8 *)(*a6 + 1);
  v21 = *a6;
  v23 = 0;
  v22 = 4 * v8 + 8;
  v9 = *a5;
  if ( *a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &word_1800BBB1C;
    v11 = 2;
  }
  v19 = v11;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800E12B8;
  v18 = v9;
  v20 = 0;
  UserData.Size = *(unsigned __int16 *)off_1800E12B8;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  UserData.Reserved = 2;
  v17 = 1;
  return EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
}
