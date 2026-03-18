/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555543AEBU?$_tlgWrapperByVal@$00@@3333333@Z @ 0x1801C3CB0
 * Callers:
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180095980 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const char **a5,
        __int64 a6,
        __int64 a7,
        const char **a8,
        const char **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        const char **a18,
        __int64 a19,
        const char **a20,
        const char **a21,
        const char **a22,
        const char **a23,
        const char **a24,
        const char **a25,
        const char **a26)
{
  __int64 v27; // rdx
  int v29; // ecx
  const char *v30; // r8
  __int64 v31; // rax
  int v32; // eax
  const char *v33; // r8
  __int64 v34; // rax
  int v35; // eax
  const char *v36; // r8
  __int64 v37; // rax
  int v38; // eax
  const char *v39; // r8
  __int64 v40; // rax
  int v41; // eax
  const char *v42; // r8
  __int64 v43; // rax
  int v44; // eax
  const char *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  const char *v48; // r8
  __int64 v49; // rax
  int v50; // eax
  const char *v51; // r8
  __int64 v52; // rax
  int v53; // eax
  const char *v54; // r8
  __int64 v55; // rax
  int v56; // eax
  const char *v57; // r8
  __int64 v58; // rax
  int v59; // eax
  const char *v60; // r8
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+30h] [rbp-D0h] BYREF
  const char *v63; // [rsp+50h] [rbp-B0h]
  int v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+5Ch] [rbp-A4h]
  __int64 v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  __int64 v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h]
  const char *v70; // [rsp+80h] [rbp-80h]
  int v71; // [rsp+88h] [rbp-78h]
  int v72; // [rsp+8Ch] [rbp-74h]
  const char *v73; // [rsp+90h] [rbp-70h]
  int v74; // [rsp+98h] [rbp-68h]
  int v75; // [rsp+9Ch] [rbp-64h]
  __int64 v76; // [rsp+A0h] [rbp-60h]
  __int64 v77; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h]
  __int64 v80; // [rsp+C0h] [rbp-40h]
  __int64 v81; // [rsp+C8h] [rbp-38h]
  __int64 v82; // [rsp+D0h] [rbp-30h]
  __int64 v83; // [rsp+D8h] [rbp-28h]
  __int64 v84; // [rsp+E0h] [rbp-20h]
  __int64 v85; // [rsp+E8h] [rbp-18h]
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  __int64 v88; // [rsp+100h] [rbp+0h]
  __int64 v89; // [rsp+108h] [rbp+8h]
  __int64 v90; // [rsp+110h] [rbp+10h]
  __int64 v91; // [rsp+118h] [rbp+18h]
  const char *v92; // [rsp+120h] [rbp+20h]
  int v93; // [rsp+128h] [rbp+28h]
  int v94; // [rsp+12Ch] [rbp+2Ch]
  __int64 v95; // [rsp+130h] [rbp+30h]
  __int64 v96; // [rsp+138h] [rbp+38h]
  const char *v97; // [rsp+140h] [rbp+40h]
  int v98; // [rsp+148h] [rbp+48h]
  int v99; // [rsp+14Ch] [rbp+4Ch]
  const char *v100; // [rsp+150h] [rbp+50h]
  int v101; // [rsp+158h] [rbp+58h]
  int v102; // [rsp+15Ch] [rbp+5Ch]
  const char *v103; // [rsp+160h] [rbp+60h]
  int v104; // [rsp+168h] [rbp+68h]
  int v105; // [rsp+16Ch] [rbp+6Ch]
  const char *v106; // [rsp+170h] [rbp+70h]
  int v107; // [rsp+178h] [rbp+78h]
  int v108; // [rsp+17Ch] [rbp+7Ch]
  const char *v109; // [rsp+180h] [rbp+80h]
  int v110; // [rsp+188h] [rbp+88h]
  int v111; // [rsp+18Ch] [rbp+8Ch]
  const char *v112; // [rsp+190h] [rbp+90h]
  int v113; // [rsp+198h] [rbp+98h]
  int v114; // [rsp+19Ch] [rbp+9Ch]
  const char *v115; // [rsp+1A0h] [rbp+A0h]
  int v116; // [rsp+1A8h] [rbp+A8h]
  int v117; // [rsp+1ACh] [rbp+ACh]

  v27 = -1LL;
  v29 = 1;
  v30 = *a26;
  if ( *a26 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v30 = word_1802F327A;
    v32 = 1;
  }
  v116 = v32;
  v115 = v30;
  v117 = 0;
  v33 = *a25;
  if ( *a25 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( v33[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v33 = word_1802F327A;
    v35 = 1;
  }
  v113 = v35;
  v112 = v33;
  v114 = 0;
  v36 = *a24;
  if ( *a24 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( v36[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v36 = word_1802F327A;
    v38 = 1;
  }
  v110 = v38;
  v109 = v36;
  v111 = 0;
  v39 = *a23;
  if ( *a23 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( v39[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v39 = word_1802F327A;
    v41 = 1;
  }
  v107 = v41;
  v106 = v39;
  v108 = 0;
  v42 = *a22;
  if ( *a22 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( v42[v43] );
    v44 = v43 + 1;
  }
  else
  {
    v42 = word_1802F327A;
    v44 = 1;
  }
  v104 = v44;
  v103 = v42;
  v105 = 0;
  v45 = *a21;
  if ( *a21 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( v45[v46] );
    v47 = v46 + 1;
  }
  else
  {
    v45 = word_1802F327A;
    v47 = 1;
  }
  v101 = v47;
  v100 = v45;
  v102 = 0;
  v48 = *a20;
  if ( *a20 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( v48[v49] );
    v50 = v49 + 1;
  }
  else
  {
    v48 = word_1802F327A;
    v50 = 1;
  }
  v98 = v50;
  v95 = a19;
  v97 = v48;
  v99 = 0;
  v96 = 1LL;
  v51 = *a18;
  if ( *a18 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( v51[v52] );
    v53 = v52 + 1;
  }
  else
  {
    v51 = word_1802F327A;
    v53 = 1;
  }
  v93 = v53;
  v90 = a17;
  v88 = a16;
  v86 = a15;
  v84 = a14;
  v82 = a13;
  v80 = a12;
  v78 = a11;
  v76 = a10;
  v92 = v51;
  v94 = 0;
  v91 = 8LL;
  v54 = *a9;
  v89 = 4LL;
  v87 = 4LL;
  v85 = 4LL;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 8LL;
  v77 = 4LL;
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
    v54 = word_1802F327A;
    v56 = 1;
  }
  v74 = v56;
  v73 = v54;
  v75 = 0;
  v57 = *a8;
  if ( *a8 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( v57[v58] );
    v59 = v58 + 1;
  }
  else
  {
    v57 = word_1802F327A;
    v59 = 1;
  }
  v71 = v59;
  v68 = a7;
  v66 = a6;
  v70 = v57;
  v72 = 0;
  v69 = 8LL;
  v60 = *a5;
  v67 = 8LL;
  if ( v60 )
  {
    do
      ++v27;
    while ( v60[v27] );
    v29 = v27 + 1;
  }
  else
  {
    v60 = word_1802F327A;
  }
  v63 = v60;
  v64 = v29;
  v65 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x18u, &v62);
}
