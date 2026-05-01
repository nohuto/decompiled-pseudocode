/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSid@U_SID@@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSid@U_SID@@@@4@Z @ 0x18005D274
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006D4E8 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11)
{
  int v11; // eax
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int8 *v18; // [rsp+60h] [rbp-71h]
  int v19; // [rsp+68h] [rbp-69h]
  int v20; // [rsp+6Ch] [rbp-65h]
  const wchar_t *v21; // [rsp+70h] [rbp-61h]
  int v22; // [rsp+78h] [rbp-59h]
  int v23; // [rsp+7Ch] [rbp-55h]
  __int64 v24; // [rsp+80h] [rbp-51h]
  __int64 v25; // [rsp+88h] [rbp-49h]
  __int64 v26; // [rsp+90h] [rbp-41h]
  __int64 v27; // [rsp+98h] [rbp-39h]
  __int64 v28; // [rsp+A0h] [rbp-31h]
  __int64 v29; // [rsp+A8h] [rbp-29h]
  __int64 v30; // [rsp+B0h] [rbp-21h]
  __int64 v31; // [rsp+B8h] [rbp-19h]
  __int64 v32; // [rsp+C0h] [rbp-11h]
  int v33; // [rsp+C8h] [rbp-9h]
  int v34; // [rsp+CCh] [rbp-5h]
  __int64 v35; // [rsp+D0h] [rbp-1h]
  __int64 v36; // [rsp+D8h] [rbp+7h]

  v35 = a11;
  v36 = 8LL;
  v11 = *(unsigned __int8 *)(*a10 + 1);
  v32 = *a10;
  v34 = 0;
  v31 = 4LL;
  v29 = 1LL;
  v33 = 4 * v11 + 8;
  v30 = a9;
  v28 = a8;
  v26 = a7;
  v24 = a6;
  v27 = 1LL;
  v25 = 8LL;
  v12 = *a5;
  if ( *a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &word_1800BBB1C;
    v14 = 2;
  }
  v22 = v14;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800E12B8;
  v21 = v12;
  v23 = 0;
  UserData.Size = *(unsigned __int16 *)off_1800E12B8;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  UserData.Reserved = 2;
  v20 = 1;
  return EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
}
