/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@34AEBU?$_tlgWrapSz@G@@@Z @ 0x180185564
 * Callers:
 *     _lambda_778e7cadc9522a09bdc10f3336b42b6d_::operator() @ 0x1802D4F78 (_lambda_778e7cadc9522a09bdc10f3336b42b6d_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t **a6,
        __int64 a7,
        const wchar_t **a8,
        const WCHAR **a9)
{
  __int64 v9; // rcx
  const WCHAR *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const wchar_t *v17; // rdx
  int v18; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int8 *v22; // [rsp+60h] [rbp-41h]
  int v23; // [rsp+68h] [rbp-39h]
  int v24; // [rsp+6Ch] [rbp-35h]
  __int64 v25; // [rsp+70h] [rbp-31h]
  __int64 v26; // [rsp+78h] [rbp-29h]
  const wchar_t *v27; // [rsp+80h] [rbp-21h]
  int v28; // [rsp+88h] [rbp-19h]
  int v29; // [rsp+8Ch] [rbp-15h]
  __int64 v30; // [rsp+90h] [rbp-11h]
  __int64 v31; // [rsp+98h] [rbp-9h]
  const wchar_t *v32; // [rsp+A0h] [rbp-1h]
  int v33; // [rsp+A8h] [rbp+7h]
  int v34; // [rsp+ACh] [rbp+Bh]
  const WCHAR *v35; // [rsp+B0h] [rbp+Fh]
  int v36; // [rsp+B8h] [rbp+17h]
  int v37; // [rsp+BCh] [rbp+1Bh]

  v9 = -1LL;
  v11 = *a9;
  if ( *a9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &pvData;
    v13 = 2;
  }
  v36 = v13;
  v35 = v11;
  v37 = 0;
  v14 = *a8;
  if ( *a8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_BYTE *)v14 + v15) );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &word_180785B70;
    v16 = 1;
  }
  v33 = v16;
  v30 = a7;
  v32 = v14;
  v34 = 0;
  v31 = 4LL;
  v17 = *a6;
  if ( *a6 )
  {
    do
      ++v9;
    while ( *((_BYTE *)v17 + v9) );
    v18 = v9 + 1;
  }
  else
  {
    v17 = &word_180785B70;
    v18 = 1;
  }
  v25 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1808D4E60;
  v28 = v18;
  v27 = v17;
  v29 = 0;
  v26 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_1808D4E60;
  v23 = *(unsigned __int16 *)(a2 + 11);
  v22 = a2 + 11;
  v24 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
}
