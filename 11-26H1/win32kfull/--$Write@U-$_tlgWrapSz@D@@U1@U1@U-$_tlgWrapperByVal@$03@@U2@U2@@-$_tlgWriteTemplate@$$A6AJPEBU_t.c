/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x14025A67C
 * Callers:
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x1400F7B38 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rcx
  int v13; // r8d
  _BYTE *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  _BYTE *v20; // rdx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-49h]
  int v24; // [rsp+58h] [rbp-41h]
  int v25; // [rsp+5Ch] [rbp-3Dh]
  _BYTE *v26; // [rsp+60h] [rbp-39h]
  int v27; // [rsp+68h] [rbp-31h]
  int v28; // [rsp+6Ch] [rbp-2Dh]
  _BYTE *v29; // [rsp+70h] [rbp-29h]
  int v30; // [rsp+78h] [rbp-21h]
  int v31; // [rsp+7Ch] [rbp-1Dh]
  __int64 v32; // [rsp+80h] [rbp-19h]
  __int64 v33; // [rsp+88h] [rbp-11h]
  __int64 v34; // [rsp+90h] [rbp-9h]
  __int64 v35; // [rsp+98h] [rbp-1h]
  __int64 v36; // [rsp+A0h] [rbp+7h]
  __int64 v37; // [rsp+A8h] [rbp+Fh]

  v36 = a10;
  v34 = a9;
  v12 = -1LL;
  v13 = 1;
  v32 = a8;
  v37 = 4LL;
  v35 = 4LL;
  v33 = 4LL;
  v14 = *a7;
  if ( *a7 )
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
  v30 = v16;
  v29 = v14;
  v31 = 0;
  v17 = *a6;
  if ( *a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v17 = &unk_14035E7E1;
    v19 = 1;
  }
  v27 = v19;
  v26 = v17;
  v28 = 0;
  v20 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v20[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v20 = &unk_14035E7E1;
  }
  v23 = v20;
  v24 = v13;
  v25 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 8u, &v22);
}
