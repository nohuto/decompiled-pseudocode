/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665666666666666@Z @ 0x140003050
 * Callers:
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x14020CBC4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40)
{
  __int64 v42; // rcx
  int v43; // r8d
  _BYTE *v44; // rdx
  __int64 v45; // rax
  int v46; // eax
  _BYTE *v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  _BYTE *v50; // rdx
  _BYTE v52[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h]
  _BYTE *v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+88h] [rbp-78h]
  int v61; // [rsp+8Ch] [rbp-74h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  _BYTE *v66; // [rsp+B0h] [rbp-50h]
  int v67; // [rsp+B8h] [rbp-48h]
  int v68; // [rsp+BCh] [rbp-44h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  __int64 v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  __int64 v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  __int64 v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  __int64 v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+118h] [rbp+18h]
  __int64 v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]
  __int64 v83; // [rsp+130h] [rbp+30h]
  __int64 v84; // [rsp+138h] [rbp+38h]
  __int64 v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  __int64 v87; // [rsp+150h] [rbp+50h]
  __int64 v88; // [rsp+158h] [rbp+58h]
  __int64 v89; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+168h] [rbp+68h]
  __int64 v91; // [rsp+170h] [rbp+70h]
  __int64 v92; // [rsp+178h] [rbp+78h]
  __int64 v93; // [rsp+180h] [rbp+80h]
  __int64 v94; // [rsp+188h] [rbp+88h]
  __int64 v95; // [rsp+190h] [rbp+90h]
  __int64 v96; // [rsp+198h] [rbp+98h]
  __int64 v97; // [rsp+1A0h] [rbp+A0h]
  __int64 v98; // [rsp+1A8h] [rbp+A8h]
  __int64 v99; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v101; // [rsp+1C0h] [rbp+C0h]
  int v102; // [rsp+1C8h] [rbp+C8h]
  int v103; // [rsp+1CCh] [rbp+CCh]
  __int64 v104; // [rsp+1D0h] [rbp+D0h]
  __int64 v105; // [rsp+1D8h] [rbp+D8h]
  __int64 v106; // [rsp+1E0h] [rbp+E0h]
  __int64 v107; // [rsp+1E8h] [rbp+E8h]
  __int64 v108; // [rsp+1F0h] [rbp+F0h]
  __int64 v109; // [rsp+1F8h] [rbp+F8h]
  __int64 v110; // [rsp+200h] [rbp+100h]
  __int64 v111; // [rsp+208h] [rbp+108h]
  __int64 v112; // [rsp+210h] [rbp+110h]
  __int64 v113; // [rsp+218h] [rbp+118h]
  __int64 v114; // [rsp+220h] [rbp+120h]
  __int64 v115; // [rsp+228h] [rbp+128h]
  __int64 v116; // [rsp+230h] [rbp+130h]
  __int64 v117; // [rsp+238h] [rbp+138h]
  __int64 v118; // [rsp+240h] [rbp+140h]
  __int64 v119; // [rsp+248h] [rbp+148h]
  __int64 v120; // [rsp+250h] [rbp+150h]
  __int64 v121; // [rsp+258h] [rbp+158h]
  __int64 v122; // [rsp+260h] [rbp+160h]
  __int64 v123; // [rsp+268h] [rbp+168h]
  __int64 v124; // [rsp+270h] [rbp+170h]
  __int64 v125; // [rsp+278h] [rbp+178h]
  __int64 v126; // [rsp+280h] [rbp+180h]
  __int64 v127; // [rsp+288h] [rbp+188h]

  v126 = a40;
  v124 = a39;
  v42 = -1LL;
  v43 = 1;
  v122 = a38;
  v120 = a37;
  v118 = a36;
  v116 = a35;
  v114 = a34;
  v112 = a33;
  v110 = a32;
  v108 = a31;
  v106 = a30;
  v104 = a29;
  v127 = 4LL;
  v125 = 4LL;
  v123 = 4LL;
  v44 = *a28;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  v115 = 4LL;
  v113 = 4LL;
  v111 = 4LL;
  v109 = 4LL;
  v107 = 4LL;
  v105 = 4LL;
  if ( v44 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( v44[v45] );
    v46 = v45 + 1;
  }
  else
  {
    v44 = &unk_140269890;
    v46 = 1;
  }
  v102 = v46;
  v99 = a27;
  v97 = a26;
  v95 = a25;
  v93 = a24;
  v91 = a23;
  v89 = a22;
  v87 = a21;
  v85 = a20;
  v83 = a19;
  v81 = a18;
  v79 = a17;
  v77 = a16;
  v75 = a15;
  v73 = a14;
  v71 = a13;
  v69 = a12;
  v101 = v44;
  v103 = 0;
  v100 = 4LL;
  v47 = *a11;
  v98 = 4LL;
  v96 = 8LL;
  v94 = 4LL;
  v92 = 8LL;
  v90 = 8LL;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  if ( v47 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( v47[v48] );
    v49 = v48 + 1;
  }
  else
  {
    v47 = &unk_140269890;
    v49 = 1;
  }
  v67 = v49;
  v64 = a10;
  v62 = a9;
  v66 = v47;
  v68 = 0;
  v65 = 4LL;
  v50 = *a8;
  v63 = 4LL;
  if ( v50 )
  {
    do
      ++v42;
    while ( v50[v42] );
    v43 = v42 + 1;
  }
  else
  {
    v50 = &unk_140269890;
  }
  v57 = a7;
  v55 = a6;
  v53 = a5;
  v59 = v50;
  v60 = v43;
  v61 = 0;
  v58 = 2LL;
  v56 = 8LL;
  v54 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 38, v52);
}
