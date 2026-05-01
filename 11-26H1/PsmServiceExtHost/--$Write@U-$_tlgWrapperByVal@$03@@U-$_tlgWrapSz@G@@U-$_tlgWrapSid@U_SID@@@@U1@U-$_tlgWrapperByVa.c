/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x18003DCC4
 * Callers:
 *     ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18003D7A0 (-HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHO.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t **a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v10; // eax
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *v17; // [rsp+60h] [rbp-59h]
  int v18; // [rsp+68h] [rbp-51h]
  int v19; // [rsp+6Ch] [rbp-4Dh]
  __int64 v20; // [rsp+70h] [rbp-49h]
  __int64 v21; // [rsp+78h] [rbp-41h]
  const wchar_t *v22; // [rsp+80h] [rbp-39h]
  int v23; // [rsp+88h] [rbp-31h]
  int v24; // [rsp+8Ch] [rbp-2Dh]
  __int64 v25; // [rsp+90h] [rbp-29h]
  int v26; // [rsp+98h] [rbp-21h]
  int v27; // [rsp+9Ch] [rbp-1Dh]
  __int64 v28; // [rsp+A0h] [rbp-19h]
  __int64 v29; // [rsp+A8h] [rbp-11h]
  __int64 v30; // [rsp+B0h] [rbp-9h]
  __int64 v31; // [rsp+B8h] [rbp-1h]
  __int64 v32; // [rsp+C0h] [rbp+7h]
  __int64 v33; // [rsp+C8h] [rbp+Fh]

  v32 = a10;
  v30 = a9;
  v28 = a8;
  v33 = 1LL;
  v31 = 1LL;
  v29 = 4LL;
  v10 = *(unsigned __int8 *)(*a7 + 1);
  v25 = *a7;
  v27 = 0;
  v26 = 4 * v10 + 8;
  v11 = *a6;
  if ( *a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &word_1800BBB1C;
    v13 = 2;
  }
  v23 = v13;
  v20 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800E12B8;
  v22 = v11;
  v24 = 0;
  v21 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_1800E12B8;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  UserData.Reserved = 2;
  v19 = 1;
  return EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
}
