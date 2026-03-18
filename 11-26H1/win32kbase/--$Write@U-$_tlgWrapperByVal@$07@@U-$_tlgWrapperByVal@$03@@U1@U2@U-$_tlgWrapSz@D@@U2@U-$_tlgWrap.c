/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@34AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@444465@Z @ 0x140001008
 * Callers:
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1401661F4 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void **a9,
        __int64 a10,
        const WCHAR **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        const WCHAR **a16,
        void **a17)
{
  __int64 v19; // rcx
  int v20; // r9d
  _BYTE *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // r8d
  const WCHAR *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const WCHAR *v28; // rdx
  __int64 v29; // rax
  _BYTE *v30; // rdx
  _BYTE v32[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  _BYTE *v41; // [rsp+90h] [rbp-70h]
  int v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+9Ch] [rbp-64h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  const WCHAR *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  const WCHAR *v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]
  _BYTE *v60; // [rsp+110h] [rbp+10h]
  int v61; // [rsp+118h] [rbp+18h]
  int v62; // [rsp+11Ch] [rbp+1Ch]

  v19 = -1LL;
  v20 = 1;
  v21 = *a17;
  if ( *a17 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v21 = &unk_140269890;
    v23 = 1;
  }
  v61 = v23;
  v24 = 2;
  v60 = v21;
  v62 = 0;
  v25 = *a16;
  if ( *a16 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &word_14026AF94;
    v27 = 2;
  }
  v58 = v27;
  v55 = a15;
  v53 = a14;
  v51 = a13;
  v49 = a12;
  v57 = v25;
  v59 = 0;
  v56 = 4LL;
  v28 = *a11;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 4LL;
  if ( v28 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v24 = 2 * v29 + 2;
  }
  else
  {
    v28 = &word_14026AF94;
  }
  v44 = a10;
  v46 = v28;
  v47 = v24;
  v48 = 0;
  v30 = *a9;
  v45 = 4LL;
  if ( v30 )
  {
    do
      ++v19;
    while ( v30[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v30 = &unk_140269890;
  }
  v39 = a8;
  v37 = a7;
  v35 = a6;
  v33 = a5;
  v41 = v30;
  v42 = v20;
  v43 = 0;
  v40 = 4LL;
  v38 = 8LL;
  v36 = 4LL;
  v34 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 15, v32);
}
