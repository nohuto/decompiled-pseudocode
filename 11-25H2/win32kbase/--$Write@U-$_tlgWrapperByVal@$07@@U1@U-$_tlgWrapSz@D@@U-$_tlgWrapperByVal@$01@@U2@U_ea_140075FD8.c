/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664666666666666@Z @ 0x140075FD8
 * Callers:
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400770F8 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        void **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void **a14,
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
        __int64 a28,
        __int64 a29,
        __int64 a30,
        void **a31,
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
        __int64 a43)
{
  __int64 v45; // rcx
  _BYTE *v46; // rdx
  __int64 v47; // rax
  int v48; // eax
  _BYTE *v49; // rdx
  __int64 v50; // rax
  int v51; // eax
  _BYTE *v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  _BYTE *v55; // rdx
  int v56; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+68h] [rbp-98h]
  int v62; // [rsp+6Ch] [rbp-94h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h]
  _BYTE *v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+98h] [rbp-68h]
  int v69; // [rsp+9Ch] [rbp-64h]
  __int64 v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  _BYTE *v72; // [rsp+B0h] [rbp-50h]
  int v73; // [rsp+B8h] [rbp-48h]
  int v74; // [rsp+BCh] [rbp-44h]
  __int64 v75; // [rsp+C0h] [rbp-40h]
  __int64 v76; // [rsp+C8h] [rbp-38h]
  __int64 v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h]
  __int64 v79; // [rsp+E0h] [rbp-20h]
  __int64 v80; // [rsp+E8h] [rbp-18h]
  __int64 v81; // [rsp+F0h] [rbp-10h]
  __int64 v82; // [rsp+F8h] [rbp-8h]
  _BYTE *v83; // [rsp+100h] [rbp+0h]
  int v84; // [rsp+108h] [rbp+8h]
  int v85; // [rsp+10Ch] [rbp+Ch]
  __int64 v86; // [rsp+110h] [rbp+10h]
  __int64 v87; // [rsp+118h] [rbp+18h]
  __int64 v88; // [rsp+120h] [rbp+20h]
  __int64 v89; // [rsp+128h] [rbp+28h]
  __int64 v90; // [rsp+130h] [rbp+30h]
  __int64 v91; // [rsp+138h] [rbp+38h]
  __int64 v92; // [rsp+140h] [rbp+40h]
  __int64 v93; // [rsp+148h] [rbp+48h]
  __int64 v94; // [rsp+150h] [rbp+50h]
  __int64 v95; // [rsp+158h] [rbp+58h]
  __int64 v96; // [rsp+160h] [rbp+60h]
  __int64 v97; // [rsp+168h] [rbp+68h]
  __int64 v98; // [rsp+170h] [rbp+70h]
  __int64 v99; // [rsp+178h] [rbp+78h]
  __int64 v100; // [rsp+180h] [rbp+80h]
  __int64 v101; // [rsp+188h] [rbp+88h]
  __int64 v102; // [rsp+190h] [rbp+90h]
  __int64 v103; // [rsp+198h] [rbp+98h]
  __int64 v104; // [rsp+1A0h] [rbp+A0h]
  __int64 v105; // [rsp+1A8h] [rbp+A8h]
  __int64 v106; // [rsp+1B0h] [rbp+B0h]
  __int64 v107; // [rsp+1B8h] [rbp+B8h]
  __int64 v108; // [rsp+1C0h] [rbp+C0h]
  __int64 v109; // [rsp+1C8h] [rbp+C8h]
  __int64 v110; // [rsp+1D0h] [rbp+D0h]
  __int64 v111; // [rsp+1D8h] [rbp+D8h]
  __int64 v112; // [rsp+1E0h] [rbp+E0h]
  __int64 v113; // [rsp+1E8h] [rbp+E8h]
  __int64 v114; // [rsp+1F0h] [rbp+F0h]
  __int64 v115; // [rsp+1F8h] [rbp+F8h]
  __int64 v116; // [rsp+200h] [rbp+100h]
  __int64 v117; // [rsp+208h] [rbp+108h]
  _BYTE *v118; // [rsp+210h] [rbp+110h]
  int v119; // [rsp+218h] [rbp+118h]
  int v120; // [rsp+21Ch] [rbp+11Ch]
  __int64 v121; // [rsp+220h] [rbp+120h]
  __int64 v122; // [rsp+228h] [rbp+128h]
  __int64 v123; // [rsp+230h] [rbp+130h]
  __int64 v124; // [rsp+238h] [rbp+138h]
  __int64 v125; // [rsp+240h] [rbp+140h]
  __int64 v126; // [rsp+248h] [rbp+148h]
  __int64 v127; // [rsp+250h] [rbp+150h]
  __int64 v128; // [rsp+258h] [rbp+158h]
  __int64 v129; // [rsp+260h] [rbp+160h]
  __int64 v130; // [rsp+268h] [rbp+168h]
  __int64 v131; // [rsp+270h] [rbp+170h]
  __int64 v132; // [rsp+278h] [rbp+178h]
  __int64 v133; // [rsp+280h] [rbp+180h]
  __int64 v134; // [rsp+288h] [rbp+188h]
  __int64 v135; // [rsp+290h] [rbp+190h]
  __int64 v136; // [rsp+298h] [rbp+198h]
  __int64 v137; // [rsp+2A0h] [rbp+1A0h]
  __int64 v138; // [rsp+2A8h] [rbp+1A8h]
  __int64 v139; // [rsp+2B0h] [rbp+1B0h]
  __int64 v140; // [rsp+2B8h] [rbp+1B8h]
  __int64 v141; // [rsp+2C0h] [rbp+1C0h]
  __int64 v142; // [rsp+2C8h] [rbp+1C8h]
  __int64 v143; // [rsp+2D0h] [rbp+1D0h]
  __int64 v144; // [rsp+2D8h] [rbp+1D8h]

  v143 = a43;
  v141 = a42;
  v45 = -1LL;
  v139 = a41;
  v137 = a40;
  v135 = a39;
  v133 = a38;
  v131 = a37;
  v129 = a36;
  v127 = a35;
  v125 = a34;
  v123 = a33;
  v121 = a32;
  v144 = 4LL;
  v142 = 4LL;
  v140 = 4LL;
  v46 = *a31;
  v138 = 4LL;
  v136 = 4LL;
  v134 = 4LL;
  v132 = 4LL;
  v130 = 4LL;
  v128 = 4LL;
  v126 = 4LL;
  v124 = 4LL;
  v122 = 4LL;
  if ( v46 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = v47 + 1;
  }
  else
  {
    v46 = &unk_14025EF20;
    v48 = 1;
  }
  v119 = v48;
  v116 = a30;
  v114 = a29;
  v112 = a28;
  v110 = a27;
  v108 = a26;
  v106 = a25;
  v104 = a24;
  v102 = a23;
  v100 = a22;
  v98 = a21;
  v96 = a20;
  v94 = a19;
  v92 = a18;
  v90 = a17;
  v88 = a16;
  v86 = a15;
  v118 = v46;
  v120 = 0;
  v117 = 4LL;
  v49 = *a14;
  v115 = 4LL;
  v113 = 8LL;
  v111 = 4LL;
  v109 = 8LL;
  v107 = 8LL;
  v105 = 4LL;
  v103 = 4LL;
  v101 = 4LL;
  v99 = 4LL;
  v97 = 4LL;
  v95 = 4LL;
  v93 = 4LL;
  v91 = 4LL;
  v89 = 4LL;
  v87 = 4LL;
  if ( v49 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v51 = v50 + 1;
  }
  else
  {
    v49 = &unk_14025EF20;
    v51 = 1;
  }
  v84 = v51;
  v81 = a13;
  v79 = a12;
  v77 = a11;
  v75 = a10;
  v83 = v49;
  v85 = 0;
  v82 = 4LL;
  v52 = *a9;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
  if ( v52 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( v52[v53] );
    v54 = v53 + 1;
  }
  else
  {
    v52 = &unk_14025EF20;
    v54 = 1;
  }
  v73 = v54;
  v70 = a8;
  v72 = v52;
  v74 = 0;
  v71 = 2LL;
  v55 = *a7;
  if ( *a7 )
  {
    do
      ++v45;
    while ( v55[v45] );
    v56 = v45 + 1;
  }
  else
  {
    v55 = &unk_14025EF20;
    v56 = 1;
  }
  v65 = a6;
  v63 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v68 = v56;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v67 = v55;
  v69 = 0;
  v66 = 8LL;
  v64 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v61 = *(unsigned __int16 *)(a2 + 11);
  v60 = a2 + 11;
  UserData.Reserved = 2;
  v62 = 1;
  return EtwWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 0x29u, &UserData);
}
