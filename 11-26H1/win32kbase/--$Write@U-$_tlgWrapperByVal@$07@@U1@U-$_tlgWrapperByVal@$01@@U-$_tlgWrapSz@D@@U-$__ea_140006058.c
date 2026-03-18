/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665666666@Z @ 0x140006058
 * Callers:
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x14020CBC4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        void **a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34)
{
  __int64 v36; // rcx
  int v37; // r8d
  _BYTE *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  _BYTE *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  _BYTE *v44; // rdx
  _BYTE v46[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  __int64 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  _BYTE *v53; // [rsp+80h] [rbp-80h]
  int v54; // [rsp+88h] [rbp-78h]
  int v55; // [rsp+8Ch] [rbp-74h]
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h]
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  _BYTE *v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B8h] [rbp-48h]
  int v62; // [rsp+BCh] [rbp-44h]
  __int64 v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  __int64 v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  __int64 v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int64 v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  __int64 v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]
  __int64 v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  __int64 v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  __int64 v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  __int64 v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  __int64 v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  __int64 v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  __int64 v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  __int64 v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  __int64 v93; // [rsp+1B0h] [rbp+B0h]
  __int64 v94; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v95; // [rsp+1C0h] [rbp+C0h]
  int v96; // [rsp+1C8h] [rbp+C8h]
  int v97; // [rsp+1CCh] [rbp+CCh]
  __int64 v98; // [rsp+1D0h] [rbp+D0h]
  __int64 v99; // [rsp+1D8h] [rbp+D8h]
  __int64 v100; // [rsp+1E0h] [rbp+E0h]
  __int64 v101; // [rsp+1E8h] [rbp+E8h]
  __int64 v102; // [rsp+1F0h] [rbp+F0h]
  __int64 v103; // [rsp+1F8h] [rbp+F8h]
  __int64 v104; // [rsp+200h] [rbp+100h]
  __int64 v105; // [rsp+208h] [rbp+108h]
  __int64 v106; // [rsp+210h] [rbp+110h]
  __int64 v107; // [rsp+218h] [rbp+118h]
  __int64 v108; // [rsp+220h] [rbp+120h]
  __int64 v109; // [rsp+228h] [rbp+128h]

  v108 = a34;
  v106 = a33;
  v36 = -1LL;
  v37 = 1;
  v104 = a32;
  v102 = a31;
  v100 = a30;
  v98 = a29;
  v109 = 4LL;
  v107 = 4LL;
  v105 = 4LL;
  v38 = *a28;
  v103 = 4LL;
  v101 = 4LL;
  v99 = 4LL;
  if ( v38 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v38 = &unk_140269890;
    v40 = 1;
  }
  v96 = v40;
  v93 = a27;
  v91 = a26;
  v89 = a25;
  v87 = a24;
  v85 = a23;
  v83 = a22;
  v81 = a21;
  v79 = a20;
  v77 = a19;
  v75 = a18;
  v73 = a17;
  v71 = a16;
  v69 = a15;
  v67 = a14;
  v65 = a13;
  v63 = a12;
  v95 = v38;
  v97 = 0;
  v94 = 4LL;
  v41 = *a11;
  v92 = 4LL;
  v90 = 8LL;
  v88 = 4LL;
  v86 = 8LL;
  v84 = 8LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 4LL;
  v64 = 4LL;
  if ( v41 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &unk_140269890;
    v43 = 1;
  }
  v61 = v43;
  v58 = a10;
  v56 = a9;
  v60 = v41;
  v62 = 0;
  v59 = 4LL;
  v44 = *a8;
  v57 = 4LL;
  if ( v44 )
  {
    do
      ++v36;
    while ( v44[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v44 = &unk_140269890;
  }
  v51 = a7;
  v49 = a6;
  v47 = a5;
  v53 = v44;
  v54 = v37;
  v55 = 0;
  v52 = 2LL;
  v50 = 8LL;
  v48 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 32, v46);
}
