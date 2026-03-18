/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U2@U2@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U?$_tlgWrapSz@G@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@34433AEBU?$_tlgWrapperByRef@$0BA@@@5344336534433653443365344336AEBU?$_tlgWrapSz@G@@7@Z @ 0x140196E88
 * Callers:
 *     ?Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x140058EB4 (-Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        void **a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 *a21,
        void **a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 *a28,
        void **a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 *a35,
        void **a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 *a42,
        const WCHAR **a43,
        const WCHAR **a44)
{
  __int64 v46; // rdx
  int v47; // r8d
  const WCHAR *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  const WCHAR *v51; // rcx
  __int64 v52; // rax
  int v53; // r8d
  __int64 v54; // rcx
  _BYTE *v55; // rcx
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  _BYTE *v59; // rcx
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rcx
  _BYTE *v63; // rcx
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rcx
  _BYTE *v67; // rcx
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rcx
  _BYTE *v71; // rcx
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v74; // [rsp+50h] [rbp-B0h]
  __int64 v75; // [rsp+58h] [rbp-A8h]
  __int64 v76; // [rsp+60h] [rbp-A0h]
  __int64 v77; // [rsp+68h] [rbp-98h]
  __int64 v78; // [rsp+70h] [rbp-90h]
  __int64 v79; // [rsp+78h] [rbp-88h]
  _BYTE *v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+88h] [rbp-78h]
  int v82; // [rsp+8Ch] [rbp-74h]
  __int64 v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h]
  __int64 v86; // [rsp+A8h] [rbp-58h]
  __int64 v87; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  __int64 v89; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+C8h] [rbp-38h]
  __int64 v91; // [rsp+D0h] [rbp-30h]
  __int64 v92; // [rsp+D8h] [rbp-28h]
  __int64 v93; // [rsp+E0h] [rbp-20h]
  __int64 v94; // [rsp+E8h] [rbp-18h]
  _BYTE *v95; // [rsp+F0h] [rbp-10h]
  int v96; // [rsp+F8h] [rbp-8h]
  int v97; // [rsp+FCh] [rbp-4h]
  __int64 v98; // [rsp+100h] [rbp+0h]
  __int64 v99; // [rsp+108h] [rbp+8h]
  __int64 v100; // [rsp+110h] [rbp+10h]
  __int64 v101; // [rsp+118h] [rbp+18h]
  __int64 v102; // [rsp+120h] [rbp+20h]
  __int64 v103; // [rsp+128h] [rbp+28h]
  __int64 v104; // [rsp+130h] [rbp+30h]
  __int64 v105; // [rsp+138h] [rbp+38h]
  __int64 v106; // [rsp+140h] [rbp+40h]
  __int64 v107; // [rsp+148h] [rbp+48h]
  __int64 v108; // [rsp+150h] [rbp+50h]
  __int64 v109; // [rsp+158h] [rbp+58h]
  _BYTE *v110; // [rsp+160h] [rbp+60h]
  int v111; // [rsp+168h] [rbp+68h]
  int v112; // [rsp+16Ch] [rbp+6Ch]
  __int64 v113; // [rsp+170h] [rbp+70h]
  __int64 v114; // [rsp+178h] [rbp+78h]
  __int64 v115; // [rsp+180h] [rbp+80h]
  __int64 v116; // [rsp+188h] [rbp+88h]
  __int64 v117; // [rsp+190h] [rbp+90h]
  __int64 v118; // [rsp+198h] [rbp+98h]
  __int64 v119; // [rsp+1A0h] [rbp+A0h]
  __int64 v120; // [rsp+1A8h] [rbp+A8h]
  __int64 v121; // [rsp+1B0h] [rbp+B0h]
  __int64 v122; // [rsp+1B8h] [rbp+B8h]
  __int64 v123; // [rsp+1C0h] [rbp+C0h]
  __int64 v124; // [rsp+1C8h] [rbp+C8h]
  _BYTE *v125; // [rsp+1D0h] [rbp+D0h]
  int v126; // [rsp+1D8h] [rbp+D8h]
  int v127; // [rsp+1DCh] [rbp+DCh]
  __int64 v128; // [rsp+1E0h] [rbp+E0h]
  __int64 v129; // [rsp+1E8h] [rbp+E8h]
  __int64 v130; // [rsp+1F0h] [rbp+F0h]
  __int64 v131; // [rsp+1F8h] [rbp+F8h]
  __int64 v132; // [rsp+200h] [rbp+100h]
  __int64 v133; // [rsp+208h] [rbp+108h]
  __int64 v134; // [rsp+210h] [rbp+110h]
  __int64 v135; // [rsp+218h] [rbp+118h]
  __int64 v136; // [rsp+220h] [rbp+120h]
  __int64 v137; // [rsp+228h] [rbp+128h]
  __int64 v138; // [rsp+230h] [rbp+130h]
  __int64 v139; // [rsp+238h] [rbp+138h]
  _BYTE *v140; // [rsp+240h] [rbp+140h]
  int v141; // [rsp+248h] [rbp+148h]
  int v142; // [rsp+24Ch] [rbp+14Ch]
  __int64 v143; // [rsp+250h] [rbp+150h]
  __int64 v144; // [rsp+258h] [rbp+158h]
  __int64 v145; // [rsp+260h] [rbp+160h]
  __int64 v146; // [rsp+268h] [rbp+168h]
  __int64 v147; // [rsp+270h] [rbp+170h]
  __int64 v148; // [rsp+278h] [rbp+178h]
  __int64 v149; // [rsp+280h] [rbp+180h]
  __int64 v150; // [rsp+288h] [rbp+188h]
  __int64 v151; // [rsp+290h] [rbp+190h]
  __int64 v152; // [rsp+298h] [rbp+198h]
  __int64 v153; // [rsp+2A0h] [rbp+1A0h]
  __int64 v154; // [rsp+2A8h] [rbp+1A8h]
  const WCHAR *v155; // [rsp+2B0h] [rbp+1B0h]
  int v156; // [rsp+2B8h] [rbp+1B8h]
  int v157; // [rsp+2BCh] [rbp+1BCh]
  const WCHAR *v158; // [rsp+2C0h] [rbp+1C0h]
  int v159; // [rsp+2C8h] [rbp+1C8h]
  int v160; // [rsp+2CCh] [rbp+1CCh]

  v46 = -1LL;
  v47 = 2;
  v48 = *a44;
  if ( *a44 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( v48[v49] );
    v50 = 2 * v49 + 2;
  }
  else
  {
    v48 = &word_14026AF94;
    v50 = 2;
  }
  v159 = v50;
  v158 = v48;
  v160 = 0;
  v51 = *a43;
  if ( *a43 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( v51[v52] );
    v47 = 2 * v52 + 2;
  }
  else
  {
    v51 = &word_14026AF94;
  }
  v155 = v51;
  v156 = v47;
  v53 = 1;
  v157 = 0;
  v54 = *a42;
  v151 = a41;
  v149 = a40;
  v147 = a39;
  v145 = a38;
  v143 = a37;
  v153 = v54;
  v154 = 16LL;
  v152 = 8LL;
  v55 = *a36;
  v150 = 8LL;
  v148 = 4LL;
  v146 = 4LL;
  v144 = 8LL;
  if ( v55 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( v55[v56] );
    v57 = v56 + 1;
  }
  else
  {
    v55 = &unk_140269890;
    v57 = 1;
  }
  v141 = v57;
  v140 = v55;
  v142 = 0;
  v139 = 16LL;
  v58 = *a35;
  v136 = a34;
  v134 = a33;
  v132 = a32;
  v130 = a31;
  v128 = a30;
  v138 = v58;
  v137 = 8LL;
  v135 = 8LL;
  v59 = *a29;
  v133 = 4LL;
  v131 = 4LL;
  v129 = 8LL;
  if ( v59 )
  {
    v60 = -1LL;
    do
      ++v60;
    while ( v59[v60] );
    v61 = v60 + 1;
  }
  else
  {
    v59 = &unk_140269890;
    v61 = 1;
  }
  v126 = v61;
  v125 = v59;
  v127 = 0;
  v124 = 16LL;
  v62 = *a28;
  v121 = a27;
  v119 = a26;
  v117 = a25;
  v115 = a24;
  v113 = a23;
  v123 = v62;
  v122 = 8LL;
  v120 = 8LL;
  v63 = *a22;
  v118 = 4LL;
  v116 = 4LL;
  v114 = 8LL;
  if ( v63 )
  {
    v64 = -1LL;
    do
      ++v64;
    while ( v63[v64] );
    v65 = v64 + 1;
  }
  else
  {
    v63 = &unk_140269890;
    v65 = 1;
  }
  v111 = v65;
  v110 = v63;
  v112 = 0;
  v109 = 16LL;
  v66 = *a21;
  v106 = a20;
  v104 = a19;
  v102 = a18;
  v100 = a17;
  v98 = a16;
  v108 = v66;
  v107 = 8LL;
  v105 = 8LL;
  v67 = *a15;
  v103 = 4LL;
  v101 = 4LL;
  v99 = 8LL;
  if ( v67 )
  {
    v68 = -1LL;
    do
      ++v68;
    while ( v67[v68] );
    v69 = v68 + 1;
  }
  else
  {
    v67 = &unk_140269890;
    v69 = 1;
  }
  v96 = v69;
  v95 = v67;
  v97 = 0;
  v94 = 16LL;
  v70 = *a14;
  v91 = a13;
  v89 = a12;
  v87 = a11;
  v85 = a10;
  v83 = a9;
  v93 = v70;
  v92 = 8LL;
  v90 = 8LL;
  v71 = *a8;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 8LL;
  if ( v71 )
  {
    do
      ++v46;
    while ( v71[v46] );
    v53 = v46 + 1;
  }
  else
  {
    v71 = &unk_140269890;
  }
  v78 = a7;
  v76 = a6;
  v74 = a5;
  v80 = v71;
  v81 = v53;
  v82 = 0;
  v79 = 4LL;
  v77 = 8LL;
  v75 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x2Au, &v73);
}
