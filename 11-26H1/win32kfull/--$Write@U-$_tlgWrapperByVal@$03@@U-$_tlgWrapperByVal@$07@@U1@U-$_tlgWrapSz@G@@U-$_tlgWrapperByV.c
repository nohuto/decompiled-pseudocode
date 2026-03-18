/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1401B2074
 * Callers:
 *     _SetClipboardData @ 0x1401B1CEC (_SetClipboardData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        __int64 a9,
        __int64 a10)
{
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-69h] BYREF
  __int64 v15; // [rsp+50h] [rbp-49h]
  __int64 v16; // [rsp+58h] [rbp-41h]
  __int64 v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  __int64 v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  const wchar_t *v21; // [rsp+80h] [rbp-19h]
  int v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+8Ch] [rbp-Dh]
  __int64 v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  __int64 v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]

  v26 = a10;
  v24 = a9;
  v27 = 8LL;
  v25 = 1LL;
  v10 = *a8;
  if ( *a8 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &pszFormat;
    v12 = 2;
  }
  v22 = v12;
  v19 = a7;
  v17 = a6;
  v15 = a5;
  v21 = v10;
  v18 = 8LL;
  v23 = 0;
  v20 = 4LL;
  v16 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1403AAA30, a2, 0LL, 0LL, 8u, &v14);
}
