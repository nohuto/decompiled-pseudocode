/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@D@@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4344444444444444444AEBU?$_tlgWrapSz@D@@55444444444444344444444@Z @ 0x140195258
 * Callers:
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14008E9DC (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        void **a27,
        void **a28,
        void **a29,
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
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49,
        __int64 a50)
{
  __int64 v52; // rcx
  int v53; // r8d
  _BYTE *v54; // rdx
  __int64 v55; // rax
  int v56; // eax
  _BYTE *v57; // rdx
  __int64 v58; // rax
  int v59; // eax
  _BYTE *v60; // rdx
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+50h] [rbp-B0h]
  __int64 v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  __int64 v66; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h]
  __int64 v69; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h]
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  __int64 v73; // [rsp+A0h] [rbp-60h]
  __int64 v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  __int64 v76; // [rsp+B8h] [rbp-48h]
  __int64 v77; // [rsp+C0h] [rbp-40h]
  __int64 v78; // [rsp+C8h] [rbp-38h]
  __int64 v79; // [rsp+D0h] [rbp-30h]
  __int64 v80; // [rsp+D8h] [rbp-28h]
  __int64 v81; // [rsp+E0h] [rbp-20h]
  __int64 v82; // [rsp+E8h] [rbp-18h]
  __int64 v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  __int64 v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+108h] [rbp+8h]
  __int64 v87; // [rsp+110h] [rbp+10h]
  __int64 v88; // [rsp+118h] [rbp+18h]
  __int64 v89; // [rsp+120h] [rbp+20h]
  __int64 v90; // [rsp+128h] [rbp+28h]
  __int64 v91; // [rsp+130h] [rbp+30h]
  __int64 v92; // [rsp+138h] [rbp+38h]
  __int64 v93; // [rsp+140h] [rbp+40h]
  __int64 v94; // [rsp+148h] [rbp+48h]
  __int64 v95; // [rsp+150h] [rbp+50h]
  __int64 v96; // [rsp+158h] [rbp+58h]
  __int64 v97; // [rsp+160h] [rbp+60h]
  __int64 v98; // [rsp+168h] [rbp+68h]
  __int64 v99; // [rsp+170h] [rbp+70h]
  __int64 v100; // [rsp+178h] [rbp+78h]
  __int64 v101; // [rsp+180h] [rbp+80h]
  __int64 v102; // [rsp+188h] [rbp+88h]
  __int64 v103; // [rsp+190h] [rbp+90h]
  __int64 v104; // [rsp+198h] [rbp+98h]
  __int64 v105; // [rsp+1A0h] [rbp+A0h]
  __int64 v106; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v107; // [rsp+1B0h] [rbp+B0h]
  int v108; // [rsp+1B8h] [rbp+B8h]
  int v109; // [rsp+1BCh] [rbp+BCh]
  _BYTE *v110; // [rsp+1C0h] [rbp+C0h]
  int v111; // [rsp+1C8h] [rbp+C8h]
  int v112; // [rsp+1CCh] [rbp+CCh]
  _BYTE *v113; // [rsp+1D0h] [rbp+D0h]
  int v114; // [rsp+1D8h] [rbp+D8h]
  int v115; // [rsp+1DCh] [rbp+DCh]
  __int64 v116; // [rsp+1E0h] [rbp+E0h]
  __int64 v117; // [rsp+1E8h] [rbp+E8h]
  __int64 v118; // [rsp+1F0h] [rbp+F0h]
  __int64 v119; // [rsp+1F8h] [rbp+F8h]
  __int64 v120; // [rsp+200h] [rbp+100h]
  __int64 v121; // [rsp+208h] [rbp+108h]
  __int64 v122; // [rsp+210h] [rbp+110h]
  __int64 v123; // [rsp+218h] [rbp+118h]
  __int64 v124; // [rsp+220h] [rbp+120h]
  __int64 v125; // [rsp+228h] [rbp+128h]
  __int64 v126; // [rsp+230h] [rbp+130h]
  __int64 v127; // [rsp+238h] [rbp+138h]
  __int64 v128; // [rsp+240h] [rbp+140h]
  __int64 v129; // [rsp+248h] [rbp+148h]
  __int64 v130; // [rsp+250h] [rbp+150h]
  __int64 v131; // [rsp+258h] [rbp+158h]
  __int64 v132; // [rsp+260h] [rbp+160h]
  __int64 v133; // [rsp+268h] [rbp+168h]
  __int64 v134; // [rsp+270h] [rbp+170h]
  __int64 v135; // [rsp+278h] [rbp+178h]
  __int64 v136; // [rsp+280h] [rbp+180h]
  __int64 v137; // [rsp+288h] [rbp+188h]
  __int64 v138; // [rsp+290h] [rbp+190h]
  __int64 v139; // [rsp+298h] [rbp+198h]
  __int64 v140; // [rsp+2A0h] [rbp+1A0h]
  __int64 v141; // [rsp+2A8h] [rbp+1A8h]
  __int64 v142; // [rsp+2B0h] [rbp+1B0h]
  __int64 v143; // [rsp+2B8h] [rbp+1B8h]
  __int64 v144; // [rsp+2C0h] [rbp+1C0h]
  __int64 v145; // [rsp+2C8h] [rbp+1C8h]
  __int64 v146; // [rsp+2D0h] [rbp+1D0h]
  __int64 v147; // [rsp+2D8h] [rbp+1D8h]
  __int64 v148; // [rsp+2E0h] [rbp+1E0h]
  __int64 v149; // [rsp+2E8h] [rbp+1E8h]
  __int64 v150; // [rsp+2F0h] [rbp+1F0h]
  __int64 v151; // [rsp+2F8h] [rbp+1F8h]
  __int64 v152; // [rsp+300h] [rbp+200h]
  __int64 v153; // [rsp+308h] [rbp+208h]
  __int64 v154; // [rsp+310h] [rbp+210h]
  __int64 v155; // [rsp+318h] [rbp+218h]
  __int64 v156; // [rsp+320h] [rbp+220h]
  __int64 v157; // [rsp+328h] [rbp+228h]

  v156 = a50;
  v154 = a49;
  v52 = -1LL;
  v53 = 1;
  v152 = a48;
  v150 = a47;
  v148 = a46;
  v146 = a45;
  v144 = a44;
  v142 = a43;
  v140 = a42;
  v138 = a41;
  v136 = a40;
  v134 = a39;
  v132 = a38;
  v130 = a37;
  v128 = a36;
  v126 = a35;
  v124 = a34;
  v122 = a33;
  v120 = a32;
  v118 = a31;
  v116 = a30;
  v157 = 4LL;
  v155 = 4LL;
  v153 = 4LL;
  v54 = *a29;
  v151 = 4LL;
  v149 = 4LL;
  v147 = 4LL;
  v145 = 4LL;
  v143 = 4LL;
  v141 = 8LL;
  v139 = 4LL;
  v137 = 4LL;
  v135 = 4LL;
  v133 = 4LL;
  v131 = 4LL;
  v129 = 4LL;
  v127 = 4LL;
  v125 = 4LL;
  v123 = 4LL;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  if ( v54 )
  {
    v55 = -1LL;
    do
      ++v55;
    while ( v54[v55] );
    v56 = v55 + 1;
  }
  else
  {
    v54 = &unk_140269890;
    v56 = 1;
  }
  v114 = v56;
  v113 = v54;
  v115 = 0;
  v57 = *a28;
  if ( *a28 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( v57[v58] );
    v59 = v58 + 1;
  }
  else
  {
    v57 = &unk_140269890;
    v59 = 1;
  }
  v111 = v59;
  v110 = v57;
  v112 = 0;
  v60 = *a27;
  if ( *a27 )
  {
    do
      ++v52;
    while ( v60[v52] );
    v53 = v52 + 1;
  }
  else
  {
    v60 = &unk_140269890;
  }
  v105 = a26;
  v103 = a25;
  v101 = a24;
  v99 = a23;
  v97 = a22;
  v95 = a21;
  v93 = a20;
  v91 = a19;
  v89 = a18;
  v87 = a17;
  v85 = a16;
  v83 = a15;
  v81 = a14;
  v79 = a13;
  v77 = a12;
  v75 = a11;
  v73 = a10;
  v71 = a9;
  v69 = a8;
  v67 = a7;
  v65 = a6;
  v63 = a5;
  v107 = v60;
  v108 = v53;
  v109 = 0;
  v106 = 4LL;
  v104 = 4LL;
  v102 = 4LL;
  v100 = 4LL;
  v98 = 4LL;
  v96 = 4LL;
  v94 = 4LL;
  v92 = 4LL;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 8LL;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 8LL;
  v64 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x30u, &v62);
}
