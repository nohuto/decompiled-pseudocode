/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33@Z @ 0x14025B048
 * Callers:
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1400F91D8 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        void **a7)
{
  __int64 v9; // rcx
  int v10; // r8d
  _BYTE *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  _BYTE *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-68h] BYREF
  _BYTE *v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+5Ch] [rbp-3Ch]
  _BYTE *v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+68h] [rbp-30h]
  int v25; // [rsp+6Ch] [rbp-2Ch]
  _BYTE *v26; // [rsp+70h] [rbp-28h]
  int v27; // [rsp+78h] [rbp-20h]
  int v28; // [rsp+7Ch] [rbp-1Ch]

  v9 = -1LL;
  v10 = 1;
  v11 = *a7;
  if ( *a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v11 = &unk_14035E7E1;
    v13 = 1;
  }
  v27 = v13;
  v26 = v11;
  v28 = 0;
  v14 = *a6;
  if ( *a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &unk_14035E7E1;
    v16 = 1;
  }
  v24 = v16;
  v23 = v14;
  v25 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( v17[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v17 = &unk_14035E7E1;
  }
  v20 = v17;
  v21 = v10;
  v22 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 5u, &v19);
}
