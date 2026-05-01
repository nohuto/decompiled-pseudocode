/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1801D88A0
 * Callers:
 *     ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801BC2E4 (-RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV-$basic_string@GU-$char_traits@G.c)
 *     _lambda_cbd8600547eeabb3ce2712a18af507ce_::operator() @ 0x18046B2E4 (_lambda_cbd8600547eeabb3ce2712a18af507ce_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const WCHAR **a6)
{
  __int64 v7; // rcx
  const WCHAR *v9; // r8
  __int64 v10; // rax
  int v11; // eax
  const wchar_t *v12; // rdx
  int v13; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int8 *v17; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  const wchar_t *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  const WCHAR *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]

  v7 = -1LL;
  v9 = *a6;
  if ( *a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &pvData;
    v11 = 2;
  }
  v24 = v11;
  v23 = v9;
  v25 = 0;
  v12 = *a5;
  if ( *a5 )
  {
    do
      ++v7;
    while ( *((_BYTE *)v12 + v7) );
    v13 = v7 + 1;
  }
  else
  {
    v12 = &word_180785B70;
    v13 = 1;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v21 = v13;
  v20 = v12;
  v22 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  v19 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
}
