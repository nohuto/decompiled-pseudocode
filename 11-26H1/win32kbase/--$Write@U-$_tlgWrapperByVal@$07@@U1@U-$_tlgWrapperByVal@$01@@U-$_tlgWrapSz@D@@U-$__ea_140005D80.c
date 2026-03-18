/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665@Z @ 0x140005D80
 * Callers:
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x14020CBC4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        void **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        void **a28)
{
  __int64 v30; // rcx
  int v31; // r8d
  _BYTE *v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  _BYTE *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  _BYTE *v38; // rdx
  _BYTE v40[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  _BYTE *v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+88h] [rbp-78h]
  int v49; // [rsp+8Ch] [rbp-74h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  _BYTE *v54; // [rsp+B0h] [rbp-50h]
  int v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+BCh] [rbp-44h]
  __int64 v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  __int64 v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  __int64 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  __int64 v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  __int64 v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  __int64 v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  __int64 v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  __int64 v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  __int64 v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  __int64 v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  __int64 v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  __int64 v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  __int64 v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]
  __int64 v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  __int64 v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  __int64 v87; // [rsp+1B0h] [rbp+B0h]
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v89; // [rsp+1C0h] [rbp+C0h]
  int v90; // [rsp+1C8h] [rbp+C8h]
  int v91; // [rsp+1CCh] [rbp+CCh]

  v30 = -1LL;
  v31 = 1;
  v32 = *a28;
  if ( *a28 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( v32[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v32 = &unk_140269890;
    v34 = 1;
  }
  v90 = v34;
  v87 = a27;
  v85 = a26;
  v83 = a25;
  v81 = a24;
  v79 = a23;
  v77 = a22;
  v75 = a21;
  v73 = a20;
  v71 = a19;
  v69 = a18;
  v67 = a17;
  v65 = a16;
  v63 = a15;
  v61 = a14;
  v59 = a13;
  v57 = a12;
  v89 = v32;
  v91 = 0;
  v88 = 4LL;
  v35 = *a11;
  v86 = 4LL;
  v84 = 8LL;
  v82 = 4LL;
  v80 = 8LL;
  v78 = 8LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 4LL;
  v64 = 4LL;
  v62 = 4LL;
  v60 = 4LL;
  v58 = 4LL;
  if ( v35 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( v35[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &unk_140269890;
    v37 = 1;
  }
  v55 = v37;
  v52 = a10;
  v50 = a9;
  v54 = v35;
  v56 = 0;
  v53 = 4LL;
  v38 = *a8;
  v51 = 4LL;
  if ( v38 )
  {
    do
      ++v30;
    while ( v38[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v38 = &unk_140269890;
  }
  v45 = a7;
  v43 = a6;
  v41 = a5;
  v47 = v38;
  v48 = v31;
  v49 = 0;
  v46 = 2LL;
  v44 = 8LL;
  v42 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 26, v40);
}
