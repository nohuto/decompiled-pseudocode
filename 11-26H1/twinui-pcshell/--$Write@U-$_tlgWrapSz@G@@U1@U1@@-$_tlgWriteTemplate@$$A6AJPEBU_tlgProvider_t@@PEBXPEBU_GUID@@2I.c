/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x18018D93C
 * Callers:
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180674490 (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7)
{
  __int64 v8; // rcx
  const WCHAR *v10; // r8
  __int64 v11; // rax
  int v12; // eax
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  const WCHAR *v16; // rdx
  int v17; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int8 *v21; // [rsp+60h] [rbp-11h]
  int v22; // [rsp+68h] [rbp-9h]
  int v23; // [rsp+6Ch] [rbp-5h]
  const WCHAR *v24; // [rsp+70h] [rbp-1h]
  int v25; // [rsp+78h] [rbp+7h]
  int v26; // [rsp+7Ch] [rbp+Bh]
  const WCHAR *v27; // [rsp+80h] [rbp+Fh]
  int v28; // [rsp+88h] [rbp+17h]
  int v29; // [rsp+8Ch] [rbp+1Bh]
  const WCHAR *v30; // [rsp+90h] [rbp+1Fh]
  int v31; // [rsp+98h] [rbp+27h]
  int v32; // [rsp+9Ch] [rbp+2Bh]

  v8 = -1LL;
  v10 = *a7;
  if ( *a7 )
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
  v31 = v12;
  v30 = v10;
  v32 = 0;
  v13 = *a6;
  if ( *a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &pvData;
    v15 = 2;
  }
  v28 = v15;
  v27 = v13;
  v29 = 0;
  v16 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v16[v8] );
    v17 = 2 * v8 + 2;
  }
  else
  {
    v16 = &pvData;
    v17 = 2;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v25 = v17;
  v24 = v16;
  v26 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v22 = *(unsigned __int16 *)(a2 + 11);
  v21 = a2 + 11;
  UserData.Reserved = 2;
  v23 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
}
