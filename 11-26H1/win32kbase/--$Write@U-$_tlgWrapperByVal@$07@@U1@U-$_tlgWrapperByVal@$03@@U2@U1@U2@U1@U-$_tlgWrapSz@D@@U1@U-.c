/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U1@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4343AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapSz@G@@444465@Z @ 0x140108BDC
 * Callers:
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x140109F08 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        void **a12,
        __int64 a13,
        const WCHAR **a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        const WCHAR **a19,
        void **a20)
{
  __int64 v22; // rcx
  int v23; // r9d
  _BYTE *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  int v27; // r8d
  const WCHAR *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  const WCHAR *v31; // rdx
  __int64 v32; // rax
  _BYTE *v33; // rdx
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  _BYTE *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  __int64 v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  const WCHAR *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  __int64 v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  __int64 v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  const WCHAR *v66; // [rsp+130h] [rbp+30h]
  int v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+13Ch] [rbp+3Ch]
  _BYTE *v69; // [rsp+140h] [rbp+40h]
  int v70; // [rsp+148h] [rbp+48h]
  int v71; // [rsp+14Ch] [rbp+4Ch]

  v22 = -1LL;
  v23 = 1;
  v24 = *a20;
  if ( *a20 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v24 = &unk_140269890;
    v26 = 1;
  }
  v70 = v26;
  v27 = 2;
  v69 = v24;
  v71 = 0;
  v28 = *a19;
  if ( *a19 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &word_14026AF94;
    v30 = 2;
  }
  v67 = v30;
  v64 = a18;
  v62 = a17;
  v60 = a16;
  v58 = a15;
  v66 = v28;
  v68 = 0;
  v65 = 4LL;
  v31 = *a14;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  if ( v31 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v27 = 2 * v32 + 2;
  }
  else
  {
    v31 = &word_14026AF94;
  }
  v53 = a13;
  v55 = v31;
  v56 = v27;
  v57 = 0;
  v33 = *a12;
  v54 = 8LL;
  if ( v33 )
  {
    do
      ++v22;
    while ( v33[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v33 = &unk_140269890;
  }
  v48 = a11;
  v46 = a10;
  v44 = a9;
  v42 = a8;
  v40 = a7;
  v38 = a6;
  v36 = a5;
  v50 = v33;
  v51 = v23;
  v52 = 0;
  v49 = 8LL;
  v47 = 4LL;
  v45 = 8LL;
  v43 = 4LL;
  v41 = 4LL;
  v39 = 8LL;
  v37 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x12u, &v35);
}
