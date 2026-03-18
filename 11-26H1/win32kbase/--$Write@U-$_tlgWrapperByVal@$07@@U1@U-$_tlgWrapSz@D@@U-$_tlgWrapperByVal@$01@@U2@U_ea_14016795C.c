/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664666666@Z @ 0x14016795C
 * Callers:
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400F577C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a37)
{
  __int64 v39; // rcx
  int v40; // r8d
  _BYTE *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  _BYTE *v44; // rdx
  __int64 v45; // rax
  int v46; // eax
  _BYTE *v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  _BYTE *v50; // rdx
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h]
  _BYTE *v57; // [rsp+70h] [rbp-90h]
  int v58; // [rsp+78h] [rbp-88h]
  int v59; // [rsp+7Ch] [rbp-84h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  _BYTE *v62; // [rsp+90h] [rbp-70h]
  int v63; // [rsp+98h] [rbp-68h]
  int v64; // [rsp+9Ch] [rbp-64h]
  __int64 v65; // [rsp+A0h] [rbp-60h]
  __int64 v66; // [rsp+A8h] [rbp-58h]
  __int64 v67; // [rsp+B0h] [rbp-50h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  __int64 v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  _BYTE *v73; // [rsp+E0h] [rbp-20h]
  int v74; // [rsp+E8h] [rbp-18h]
  int v75; // [rsp+ECh] [rbp-14h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  __int64 v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  __int64 v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  __int64 v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  __int64 v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  __int64 v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+148h] [rbp+48h]
  __int64 v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  __int64 v90; // [rsp+160h] [rbp+60h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  __int64 v92; // [rsp+170h] [rbp+70h]
  __int64 v93; // [rsp+178h] [rbp+78h]
  __int64 v94; // [rsp+180h] [rbp+80h]
  __int64 v95; // [rsp+188h] [rbp+88h]
  __int64 v96; // [rsp+190h] [rbp+90h]
  __int64 v97; // [rsp+198h] [rbp+98h]
  __int64 v98; // [rsp+1A0h] [rbp+A0h]
  __int64 v99; // [rsp+1A8h] [rbp+A8h]
  __int64 v100; // [rsp+1B0h] [rbp+B0h]
  __int64 v101; // [rsp+1B8h] [rbp+B8h]
  __int64 v102; // [rsp+1C0h] [rbp+C0h]
  __int64 v103; // [rsp+1C8h] [rbp+C8h]
  __int64 v104; // [rsp+1D0h] [rbp+D0h]
  __int64 v105; // [rsp+1D8h] [rbp+D8h]
  __int64 v106; // [rsp+1E0h] [rbp+E0h]
  __int64 v107; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v108; // [rsp+1F0h] [rbp+F0h]
  int v109; // [rsp+1F8h] [rbp+F8h]
  int v110; // [rsp+1FCh] [rbp+FCh]
  __int64 v111; // [rsp+200h] [rbp+100h]
  __int64 v112; // [rsp+208h] [rbp+108h]
  __int64 v113; // [rsp+210h] [rbp+110h]
  __int64 v114; // [rsp+218h] [rbp+118h]
  __int64 v115; // [rsp+220h] [rbp+120h]
  __int64 v116; // [rsp+228h] [rbp+128h]
  __int64 v117; // [rsp+230h] [rbp+130h]
  __int64 v118; // [rsp+238h] [rbp+138h]
  __int64 v119; // [rsp+240h] [rbp+140h]
  __int64 v120; // [rsp+248h] [rbp+148h]
  __int64 v121; // [rsp+250h] [rbp+150h]
  __int64 v122; // [rsp+258h] [rbp+158h]

  v121 = a37;
  v119 = a36;
  v39 = -1LL;
  v40 = 1;
  v117 = a35;
  v115 = a34;
  v113 = a33;
  v111 = a32;
  v122 = 4LL;
  v120 = 4LL;
  v118 = 4LL;
  v41 = *a31;
  v116 = 4LL;
  v114 = 4LL;
  v112 = 4LL;
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
  v109 = v43;
  v106 = a30;
  v104 = a29;
  v102 = a28;
  v100 = a27;
  v98 = a26;
  v96 = a25;
  v94 = a24;
  v92 = a23;
  v90 = a22;
  v88 = a21;
  v86 = a20;
  v84 = a19;
  v82 = a18;
  v80 = a17;
  v78 = a16;
  v76 = a15;
  v108 = v41;
  v110 = 0;
  v107 = 4LL;
  v44 = *a14;
  v105 = 4LL;
  v103 = 8LL;
  v101 = 4LL;
  v99 = 8LL;
  v97 = 8LL;
  v95 = 4LL;
  v93 = 4LL;
  v91 = 4LL;
  v89 = 4LL;
  v87 = 4LL;
  v85 = 4LL;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 4LL;
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
  v74 = v46;
  v71 = a13;
  v69 = a12;
  v67 = a11;
  v65 = a10;
  v73 = v44;
  v75 = 0;
  v72 = 4LL;
  v47 = *a9;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 4LL;
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
  v63 = v49;
  v60 = a8;
  v62 = v47;
  v64 = 0;
  v61 = 2LL;
  v50 = *a7;
  if ( *a7 )
  {
    do
      ++v39;
    while ( v50[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v50 = &unk_140269890;
  }
  v55 = a6;
  v53 = a5;
  v57 = v50;
  v58 = v40;
  v59 = 0;
  v56 = 8LL;
  v54 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x23u, &v52);
}
