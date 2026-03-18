/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapSz@G@@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapSz@G@@644@Z @ 0x1400049A0
 * Callers:
 *     ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x14034D860 (-RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        const wchar_t **a12,
        const wchar_t **a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v16; // rcx
  int v17; // r8d
  const wchar_t *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  const wchar_t *v21; // rdx
  _BYTE v23[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  const wchar_t *v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  const wchar_t *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]

  v46 = a15;
  v16 = -1LL;
  v44 = a14;
  v17 = 2;
  v47 = 4LL;
  v45 = 4LL;
  v18 = *a13;
  if ( *a13 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &pszFormat;
    v20 = 2;
  }
  v42 = v20;
  v41 = v18;
  v43 = 0;
  v21 = *a12;
  if ( *a12 )
  {
    do
      ++v16;
    while ( v21[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v21 = &pszFormat;
  }
  v36 = a11;
  v34 = a10;
  v32 = a9;
  v30 = a8;
  v28 = a7;
  v26 = a6;
  v24 = a5;
  v38 = v21;
  v39 = v17;
  v40 = 0;
  v37 = 4LL;
  v35 = 1LL;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 8LL;
  v27 = 8LL;
  v25 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_1403AAA30, a2, 0LL, 0LL, 13, v23);
}
