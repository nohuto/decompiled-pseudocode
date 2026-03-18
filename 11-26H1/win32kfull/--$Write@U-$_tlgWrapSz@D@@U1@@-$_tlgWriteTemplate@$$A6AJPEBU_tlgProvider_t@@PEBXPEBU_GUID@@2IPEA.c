/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3@Z @ 0x1400A13D8
 * Callers:
 *     ?CursorTypeUsage@GreCursor@InputTraceLogging@@SAXW4_TRACING_CURSOR_USAGE_TYPE@@@Z @ 0x1400A0AB8 (-CursorTypeUsage@GreCursor@InputTraceLogging@@SAXW4_TRACING_CURSOR_USAGE_TYPE@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6)
{
  __int64 v8; // rcx
  int v9; // r8d
  _BYTE *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  _BYTE *v13; // rdx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  _BYTE *v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = 1;
  v10 = *a6;
  if ( *a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v10 = &unk_14035E7E1;
    v12 = 1;
  }
  v20 = v12;
  v19 = v10;
  v21 = 0;
  v13 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v13[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v13 = &unk_14035E7E1;
  }
  v16 = v13;
  v17 = v9;
  v18 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v15);
}
