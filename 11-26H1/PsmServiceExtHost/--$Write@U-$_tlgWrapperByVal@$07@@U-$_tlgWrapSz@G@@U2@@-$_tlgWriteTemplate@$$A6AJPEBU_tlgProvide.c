/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x18005ED7C
 * Callers:
 *     ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z @ 0x18006E5E4 (-HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t **a6,
        const wchar_t **a7)
{
  __int64 v7; // rcx
  const wchar_t *v9; // r8
  __int64 v10; // rax
  int v11; // eax
  const wchar_t *v12; // rdx
  int v13; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int8 *v17; // [rsp+60h] [rbp-11h]
  int v18; // [rsp+68h] [rbp-9h]
  int v19; // [rsp+6Ch] [rbp-5h]
  __int64 v20; // [rsp+70h] [rbp-1h]
  __int64 v21; // [rsp+78h] [rbp+7h]
  const wchar_t *v22; // [rsp+80h] [rbp+Fh]
  int v23; // [rsp+88h] [rbp+17h]
  int v24; // [rsp+8Ch] [rbp+1Bh]
  const wchar_t *v25; // [rsp+90h] [rbp+1Fh]
  int v26; // [rsp+98h] [rbp+27h]
  int v27; // [rsp+9Ch] [rbp+2Bh]

  v7 = -1LL;
  v9 = *a7;
  if ( *a7 )
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
  v26 = v11;
  v25 = v9;
  v27 = 0;
  v12 = *a6;
  if ( *a6 )
  {
    do
      ++v7;
    while ( v12[v7] );
    v13 = 2 * v7 + 2;
  }
  else
  {
    v12 = &word_1800BBB1C;
    v13 = 2;
  }
  v20 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800E12B8;
  v23 = v13;
  v22 = v12;
  v24 = 0;
  v21 = 8LL;
  UserData.Size = *(unsigned __int16 *)off_1800E12B8;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  UserData.Reserved = 2;
  v19 = 1;
  return EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
}
