/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x180061C0C
 * Callers:
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180030D78 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        __int64 a9,
        __int64 a10)
{
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *v16; // [rsp+60h] [rbp-59h]
  int v17; // [rsp+68h] [rbp-51h]
  int v18; // [rsp+6Ch] [rbp-4Dh]
  __int64 v19; // [rsp+70h] [rbp-49h]
  __int64 v20; // [rsp+78h] [rbp-41h]
  __int64 v21; // [rsp+80h] [rbp-39h]
  __int64 v22; // [rsp+88h] [rbp-31h]
  __int64 v23; // [rsp+90h] [rbp-29h]
  __int64 v24; // [rsp+98h] [rbp-21h]
  const wchar_t *v25; // [rsp+A0h] [rbp-19h]
  int v26; // [rsp+A8h] [rbp-11h]
  int v27; // [rsp+ACh] [rbp-Dh]
  __int64 v28; // [rsp+B0h] [rbp-9h]
  __int64 v29; // [rsp+B8h] [rbp-1h]
  __int64 v30; // [rsp+C0h] [rbp+7h]
  __int64 v31; // [rsp+C8h] [rbp+Fh]

  v30 = a10;
  v28 = a9;
  v31 = 4LL;
  v29 = 4LL;
  v10 = *a8;
  if ( *a8 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &word_1800BBB1C;
    v12 = 2;
  }
  v26 = v12;
  v23 = a7;
  v21 = a6;
  v19 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800E12B8;
  v25 = v10;
  v24 = 8LL;
  v22 = 1LL;
  v27 = 0;
  v20 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_1800E12B8;
  v17 = *(unsigned __int16 *)(a2 + 11);
  v16 = a2 + 11;
  v18 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
}
