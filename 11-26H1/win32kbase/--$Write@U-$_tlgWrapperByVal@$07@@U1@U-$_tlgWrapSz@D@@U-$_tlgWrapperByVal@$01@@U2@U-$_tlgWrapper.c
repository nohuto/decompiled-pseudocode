/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664@Z @ 0x1400064F8
 * Callers:
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400F577C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
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
        void **a31)
{
  __int64 v33; // rcx
  int v34; // r8d
  _BYTE *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
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
  _BYTE *v51; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+7Ch] [rbp-84h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  _BYTE *v56; // [rsp+90h] [rbp-70h]
  int v57; // [rsp+98h] [rbp-68h]
  int v58; // [rsp+9Ch] [rbp-64h]
  __int64 v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  _BYTE *v67; // [rsp+E0h] [rbp-20h]
  int v68; // [rsp+E8h] [rbp-18h]
  int v69; // [rsp+ECh] [rbp-14h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  __int64 v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int64 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  __int64 v76; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]
  __int64 v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+138h] [rbp+38h]
  __int64 v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+148h] [rbp+48h]
  __int64 v82; // [rsp+150h] [rbp+50h]
  __int64 v83; // [rsp+158h] [rbp+58h]
  __int64 v84; // [rsp+160h] [rbp+60h]
  __int64 v85; // [rsp+168h] [rbp+68h]
  __int64 v86; // [rsp+170h] [rbp+70h]
  __int64 v87; // [rsp+178h] [rbp+78h]
  __int64 v88; // [rsp+180h] [rbp+80h]
  __int64 v89; // [rsp+188h] [rbp+88h]
  __int64 v90; // [rsp+190h] [rbp+90h]
  __int64 v91; // [rsp+198h] [rbp+98h]
  __int64 v92; // [rsp+1A0h] [rbp+A0h]
  __int64 v93; // [rsp+1A8h] [rbp+A8h]
  __int64 v94; // [rsp+1B0h] [rbp+B0h]
  __int64 v95; // [rsp+1B8h] [rbp+B8h]
  __int64 v96; // [rsp+1C0h] [rbp+C0h]
  __int64 v97; // [rsp+1C8h] [rbp+C8h]
  __int64 v98; // [rsp+1D0h] [rbp+D0h]
  __int64 v99; // [rsp+1D8h] [rbp+D8h]
  __int64 v100; // [rsp+1E0h] [rbp+E0h]
  __int64 v101; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v102; // [rsp+1F0h] [rbp+F0h]
  int v103; // [rsp+1F8h] [rbp+F8h]
  int v104; // [rsp+1FCh] [rbp+FCh]

  v33 = -1LL;
  v34 = 1;
  v35 = *a31;
  if ( *a31 )
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
  v103 = v37;
  v100 = a30;
  v98 = a29;
  v96 = a28;
  v94 = a27;
  v92 = a26;
  v90 = a25;
  v88 = a24;
  v86 = a23;
  v84 = a22;
  v82 = a21;
  v80 = a20;
  v78 = a19;
  v76 = a18;
  v74 = a17;
  v72 = a16;
  v70 = a15;
  v102 = v35;
  v104 = 0;
  v101 = 4LL;
  v38 = *a14;
  v99 = 4LL;
  v97 = 8LL;
  v95 = 4LL;
  v93 = 8LL;
  v91 = 8LL;
  v89 = 4LL;
  v87 = 4LL;
  v85 = 4LL;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 4LL;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 4LL;
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
  v68 = v40;
  v65 = a13;
  v63 = a12;
  v61 = a11;
  v59 = a10;
  v67 = v38;
  v69 = 0;
  v66 = 4LL;
  v41 = *a9;
  v64 = 4LL;
  v62 = 4LL;
  v60 = 4LL;
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
  v57 = v43;
  v54 = a8;
  v56 = v41;
  v58 = 0;
  v55 = 2LL;
  v44 = *a7;
  if ( *a7 )
  {
    do
      ++v33;
    while ( v44[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v44 = &unk_140269890;
  }
  v49 = a6;
  v47 = a5;
  v51 = v44;
  v52 = v34;
  v53 = 0;
  v50 = 8LL;
  v48 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 29, v46);
}
