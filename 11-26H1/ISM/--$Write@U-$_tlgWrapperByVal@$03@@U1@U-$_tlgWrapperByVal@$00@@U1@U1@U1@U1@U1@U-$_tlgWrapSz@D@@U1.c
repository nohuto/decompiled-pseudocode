/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U3@U3@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@33333AEBU?$_tlgWrapSz@D@@355333@Z @ 0x180002B04
 * Callers:
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C5384 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a12,
        const unsigned __int16 **a13,
        __int64 a14,
        const unsigned __int16 **a15,
        const unsigned __int16 **a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v21; // rcx
  const unsigned __int16 *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  const unsigned __int16 *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const unsigned __int16 *v28; // rdx
  int v29; // ecx
  _BYTE v31[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  const unsigned __int16 *v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+FCh] [rbp-4h]
  const unsigned __int16 *v56; // [rsp+100h] [rbp+0h]
  int v57; // [rsp+108h] [rbp+8h]
  int v58; // [rsp+10Ch] [rbp+Ch]
  __int64 v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int64 v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]

  v63 = a19;
  v61 = a18;
  v21 = -1LL;
  v59 = a17;
  v64 = 4LL;
  v62 = 4LL;
  v60 = 4LL;
  v22 = *a16;
  if ( *a16 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *((_BYTE *)v22 + v23) );
    v24 = v23 + 1;
  }
  else
  {
    v22 = &word_180200D48;
    v24 = 1;
  }
  v57 = v24;
  v56 = v22;
  v58 = 0;
  v25 = *a15;
  if ( *a15 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *((_BYTE *)v25 + v26) );
    v27 = v26 + 1;
  }
  else
  {
    v25 = &word_180200D48;
    v27 = 1;
  }
  v54 = v27;
  v51 = a14;
  v53 = v25;
  v55 = 0;
  v52 = 4LL;
  v28 = *a13;
  if ( *a13 )
  {
    do
      ++v21;
    while ( *((_BYTE *)v28 + v21) );
    v29 = v21 + 1;
  }
  else
  {
    v28 = &word_180200D48;
    v29 = 1;
  }
  v46 = a12;
  v44 = a11;
  v42 = a10;
  v40 = a9;
  v38 = a8;
  v36 = a7;
  v34 = a6;
  v32 = a5;
  v48 = v28;
  v49 = v29;
  v50 = 0;
  v47 = 4LL;
  v45 = 4LL;
  v43 = 4LL;
  v41 = 4LL;
  v39 = 4LL;
  v37 = 1LL;
  v35 = 4LL;
  v33 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 17, v31);
}
