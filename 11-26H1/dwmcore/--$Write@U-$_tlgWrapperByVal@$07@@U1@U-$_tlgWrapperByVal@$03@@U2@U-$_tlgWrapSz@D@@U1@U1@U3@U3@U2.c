/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U1@U1@U3@U3@U2@U1@U2@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@335543444443@Z @ 0x1801D8EA8
 * Callers:
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1800ABB8C (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char **a9,
        __int64 a10,
        __int64 a11,
        const char **a12,
        const char **a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21)
{
  __int64 v23; // rcx
  int v24; // r8d
  const char *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const char *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  const char *v31; // rdx
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  const char *v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+9Ch] [rbp-64h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  const char *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  const char *v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  __int64 v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  __int64 v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  __int64 v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  __int64 v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  __int64 v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  __int64 v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  __int64 v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  __int64 v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]

  v69 = a21;
  v67 = a20;
  v23 = -1LL;
  v24 = 1;
  v65 = a19;
  v63 = a18;
  v61 = a17;
  v59 = a16;
  v57 = a15;
  v55 = a14;
  v70 = 8LL;
  v68 = 4LL;
  v66 = 4LL;
  v25 = *a13;
  v64 = 4LL;
  v62 = 4LL;
  v60 = 4LL;
  v58 = 8LL;
  v56 = 4LL;
  if ( v25 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v25 = word_1802F327A;
    v27 = 1;
  }
  v53 = v27;
  v52 = v25;
  v54 = 0;
  v28 = *a12;
  if ( *a12 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v28 = word_1802F327A;
    v30 = 1;
  }
  v50 = v30;
  v47 = a11;
  v45 = a10;
  v49 = v28;
  v51 = 0;
  v48 = 8LL;
  v31 = *a9;
  v46 = 8LL;
  if ( v31 )
  {
    do
      ++v23;
    while ( v31[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v31 = word_1802F327A;
  }
  v40 = a8;
  v38 = a7;
  v36 = a6;
  v34 = a5;
  v42 = v31;
  v43 = v24;
  v44 = 0;
  v41 = 4LL;
  v39 = 4LL;
  v37 = 8LL;
  v35 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x13u, &v33);
}
