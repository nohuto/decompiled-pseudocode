/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180099060
 * Callers:
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x180097F14 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const WCHAR **a6,
        __int64 a7,
        const WCHAR **a8)
{
  __int64 v9; // rcx
  const WCHAR *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const wchar_t *v17; // rdx
  int v18; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int8 *v22; // [rsp+60h] [rbp-29h]
  int v23; // [rsp+68h] [rbp-21h]
  int v24; // [rsp+6Ch] [rbp-1Dh]
  const wchar_t *v25; // [rsp+70h] [rbp-19h]
  int v26; // [rsp+78h] [rbp-11h]
  int v27; // [rsp+7Ch] [rbp-Dh]
  const WCHAR *v28; // [rsp+80h] [rbp-9h]
  int v29; // [rsp+88h] [rbp-1h]
  int v30; // [rsp+8Ch] [rbp+3h]
  __int64 v31; // [rsp+90h] [rbp+7h]
  __int64 v32; // [rsp+98h] [rbp+Fh]
  const WCHAR *v33; // [rsp+A0h] [rbp+17h]
  int v34; // [rsp+A8h] [rbp+1Fh]
  int v35; // [rsp+ACh] [rbp+23h]

  v9 = -1LL;
  v11 = *a8;
  if ( *a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &LocaleName;
    v13 = 2;
  }
  v34 = v13;
  v31 = a7;
  v33 = v11;
  v35 = 0;
  v32 = 4LL;
  v14 = *a6;
  if ( *a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &LocaleName;
    v16 = 2;
  }
  v29 = v16;
  v28 = v14;
  v30 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( *((_BYTE *)v17 + v9) );
    v18 = v9 + 1;
  }
  else
  {
    v17 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v18 = 1;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v26 = v18;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v25 = v17;
  v27 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v23 = *(unsigned __int16 *)(a2 + 11);
  v22 = a2 + 11;
  v24 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
}
