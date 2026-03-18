/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x1400039B4
 * Callers:
 *     ?ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z @ 0x1402E72D8 (-ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
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
        const wchar_t **a12)
{
  __int64 v14; // rcx
  const wchar_t *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  _BYTE *v18; // rdx
  int v19; // ecx
  _BYTE v21[32]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v22; // [rsp+50h] [rbp-79h]
  __int64 v23; // [rsp+58h] [rbp-71h]
  __int64 v24; // [rsp+60h] [rbp-69h]
  __int64 v25; // [rsp+68h] [rbp-61h]
  __int64 v26; // [rsp+70h] [rbp-59h]
  __int64 v27; // [rsp+78h] [rbp-51h]
  __int64 v28; // [rsp+80h] [rbp-49h]
  __int64 v29; // [rsp+88h] [rbp-41h]
  __int64 v30; // [rsp+90h] [rbp-39h]
  __int64 v31; // [rsp+98h] [rbp-31h]
  _BYTE *v32; // [rsp+A0h] [rbp-29h]
  int v33; // [rsp+A8h] [rbp-21h]
  int v34; // [rsp+ACh] [rbp-1Dh]
  __int64 v35; // [rsp+B0h] [rbp-19h]
  __int64 v36; // [rsp+B8h] [rbp-11h]
  const wchar_t *v37; // [rsp+C0h] [rbp-9h]
  int v38; // [rsp+C8h] [rbp-1h]
  int v39; // [rsp+CCh] [rbp+3h]

  v14 = -1LL;
  v15 = *a12;
  if ( *a12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &pszFormat;
    v17 = 2;
  }
  v38 = v17;
  v35 = a11;
  v37 = v15;
  v39 = 0;
  v36 = 4LL;
  v18 = *a10;
  if ( *a10 )
  {
    do
      ++v14;
    while ( v18[v14] );
    v19 = v14 + 1;
  }
  else
  {
    v18 = &unk_14035E7E1;
    v19 = 1;
  }
  v30 = a9;
  v28 = a8;
  v26 = a7;
  v24 = a6;
  v22 = a5;
  v32 = v18;
  v33 = v19;
  v34 = 0;
  v31 = 4LL;
  v29 = 4LL;
  v27 = 4LL;
  v25 = 4LL;
  v23 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 10, v21);
}
