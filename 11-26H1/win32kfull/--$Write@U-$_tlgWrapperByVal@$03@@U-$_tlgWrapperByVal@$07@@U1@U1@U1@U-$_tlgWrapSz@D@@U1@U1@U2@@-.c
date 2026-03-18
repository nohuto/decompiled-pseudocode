/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapSz@D@@334@Z @ 0x140002F48
 * Callers:
 *     ?TraceLoggingShowWindowShellCalloutResult@@YAXPEBUtagWND@@_KHIW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z @ 0x1402D24B4 (-TraceLoggingShowWindowShellCalloutResult@@YAXPEBUtagWND@@_KHIW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _BYTE v17[32]; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v18; // [rsp+50h] [rbp-91h]
  __int64 v19; // [rsp+58h] [rbp-89h]
  __int64 v20; // [rsp+60h] [rbp-81h]
  __int64 v21; // [rsp+68h] [rbp-79h]
  __int64 v22; // [rsp+70h] [rbp-71h]
  __int64 v23; // [rsp+78h] [rbp-69h]
  __int64 v24; // [rsp+80h] [rbp-61h]
  __int64 v25; // [rsp+88h] [rbp-59h]
  __int64 v26; // [rsp+90h] [rbp-51h]
  __int64 v27; // [rsp+98h] [rbp-49h]
  _BYTE *v28; // [rsp+A0h] [rbp-41h]
  int v29; // [rsp+A8h] [rbp-39h]
  int v30; // [rsp+ACh] [rbp-35h]
  __int64 v31; // [rsp+B0h] [rbp-31h]
  __int64 v32; // [rsp+B8h] [rbp-29h]
  __int64 v33; // [rsp+C0h] [rbp-21h]
  __int64 v34; // [rsp+C8h] [rbp-19h]
  __int64 v35; // [rsp+D0h] [rbp-11h]
  __int64 v36; // [rsp+D8h] [rbp-9h]

  v35 = a13;
  v33 = a12;
  v31 = a11;
  v36 = 8LL;
  v34 = 4LL;
  v32 = 4LL;
  v13 = *a10;
  if ( *a10 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_14035E7E1;
    v15 = 1;
  }
  v29 = v15;
  v26 = a9;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v18 = a5;
  v28 = v13;
  v30 = 0;
  v27 = 4LL;
  v25 = 4LL;
  v23 = 4LL;
  v21 = 8LL;
  v19 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_1403AAA30, a2, 0LL, 0LL, 11, v17);
}
