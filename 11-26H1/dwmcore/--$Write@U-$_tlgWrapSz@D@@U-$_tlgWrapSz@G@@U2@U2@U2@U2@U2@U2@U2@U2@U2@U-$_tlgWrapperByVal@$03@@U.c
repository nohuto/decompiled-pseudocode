/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U4@U1@U1@U3@U4@U3@U3@U3@U3@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@444444444AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@66663356555556@Z @ 0x1801A671C
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092F10 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const char **a5,
        void **a6,
        void **a7,
        void **a8,
        void **a9,
        void **a10,
        void **a11,
        void **a12,
        void **a13,
        void **a14,
        void **a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        const char **a22,
        const char **a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31)
{
  __int64 v33; // rcx
  const char *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  const char *v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  _WORD *v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  _WORD *v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  _WORD *v46; // rdx
  __int64 v47; // rax
  int v48; // eax
  _WORD *v49; // rdx
  __int64 v50; // rax
  int v51; // eax
  _WORD *v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  _WORD *v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  _WORD *v58; // rdx
  __int64 v59; // rax
  int v60; // eax
  _WORD *v61; // rdx
  __int64 v62; // rax
  int v63; // eax
  _WORD *v64; // rdx
  __int64 v65; // rax
  int v66; // eax
  _WORD *v67; // rdx
  __int64 v68; // rax
  int v69; // eax
  const char *v70; // rdx
  int v71; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v75; // [rsp+60h] [rbp-A0h]
  int v76; // [rsp+68h] [rbp-98h]
  int v77; // [rsp+6Ch] [rbp-94h]
  const char *v78; // [rsp+70h] [rbp-90h]
  int v79; // [rsp+78h] [rbp-88h]
  int v80; // [rsp+7Ch] [rbp-84h]
  _WORD *v81; // [rsp+80h] [rbp-80h]
  int v82; // [rsp+88h] [rbp-78h]
  int v83; // [rsp+8Ch] [rbp-74h]
  _WORD *v84; // [rsp+90h] [rbp-70h]
  int v85; // [rsp+98h] [rbp-68h]
  int v86; // [rsp+9Ch] [rbp-64h]
  _WORD *v87; // [rsp+A0h] [rbp-60h]
  int v88; // [rsp+A8h] [rbp-58h]
  int v89; // [rsp+ACh] [rbp-54h]
  _WORD *v90; // [rsp+B0h] [rbp-50h]
  int v91; // [rsp+B8h] [rbp-48h]
  int v92; // [rsp+BCh] [rbp-44h]
  _WORD *v93; // [rsp+C0h] [rbp-40h]
  int v94; // [rsp+C8h] [rbp-38h]
  int v95; // [rsp+CCh] [rbp-34h]
  _WORD *v96; // [rsp+D0h] [rbp-30h]
  int v97; // [rsp+D8h] [rbp-28h]
  int v98; // [rsp+DCh] [rbp-24h]
  _WORD *v99; // [rsp+E0h] [rbp-20h]
  int v100; // [rsp+E8h] [rbp-18h]
  int v101; // [rsp+ECh] [rbp-14h]
  _WORD *v102; // [rsp+F0h] [rbp-10h]
  int v103; // [rsp+F8h] [rbp-8h]
  int v104; // [rsp+FCh] [rbp-4h]
  _WORD *v105; // [rsp+100h] [rbp+0h]
  int v106; // [rsp+108h] [rbp+8h]
  int v107; // [rsp+10Ch] [rbp+Ch]
  _WORD *v108; // [rsp+110h] [rbp+10h]
  int v109; // [rsp+118h] [rbp+18h]
  int v110; // [rsp+11Ch] [rbp+1Ch]
  __int64 v111; // [rsp+120h] [rbp+20h]
  __int64 v112; // [rsp+128h] [rbp+28h]
  __int64 v113; // [rsp+130h] [rbp+30h]
  __int64 v114; // [rsp+138h] [rbp+38h]
  __int64 v115; // [rsp+140h] [rbp+40h]
  __int64 v116; // [rsp+148h] [rbp+48h]
  __int64 v117; // [rsp+150h] [rbp+50h]
  __int64 v118; // [rsp+158h] [rbp+58h]
  __int64 v119; // [rsp+160h] [rbp+60h]
  __int64 v120; // [rsp+168h] [rbp+68h]
  __int64 v121; // [rsp+170h] [rbp+70h]
  __int64 v122; // [rsp+178h] [rbp+78h]
  const char *v123; // [rsp+180h] [rbp+80h]
  int v124; // [rsp+188h] [rbp+88h]
  int v125; // [rsp+18Ch] [rbp+8Ch]
  const char *v126; // [rsp+190h] [rbp+90h]
  int v127; // [rsp+198h] [rbp+98h]
  int v128; // [rsp+19Ch] [rbp+9Ch]
  __int64 v129; // [rsp+1A0h] [rbp+A0h]
  __int64 v130; // [rsp+1A8h] [rbp+A8h]
  __int64 v131; // [rsp+1B0h] [rbp+B0h]
  __int64 v132; // [rsp+1B8h] [rbp+B8h]
  __int64 v133; // [rsp+1C0h] [rbp+C0h]
  __int64 v134; // [rsp+1C8h] [rbp+C8h]
  __int64 v135; // [rsp+1D0h] [rbp+D0h]
  __int64 v136; // [rsp+1D8h] [rbp+D8h]
  __int64 v137; // [rsp+1E0h] [rbp+E0h]
  __int64 v138; // [rsp+1E8h] [rbp+E8h]
  __int64 v139; // [rsp+1F0h] [rbp+F0h]
  __int64 v140; // [rsp+1F8h] [rbp+F8h]
  __int64 v141; // [rsp+200h] [rbp+100h]
  __int64 v142; // [rsp+208h] [rbp+108h]
  __int64 v143; // [rsp+210h] [rbp+110h]
  __int64 v144; // [rsp+218h] [rbp+118h]

  v143 = a31;
  v141 = a30;
  v33 = -1LL;
  v139 = a29;
  v137 = a28;
  v135 = a27;
  v133 = a26;
  v131 = a25;
  v129 = a24;
  v144 = 8LL;
  v142 = 4LL;
  v140 = 4LL;
  v34 = *a23;
  v138 = 4LL;
  v136 = 4LL;
  v134 = 4LL;
  v132 = 8LL;
  v130 = 4LL;
  if ( v34 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v34 = word_1802F327A;
    v36 = 1;
  }
  v127 = v36;
  v126 = v34;
  v128 = 0;
  v37 = *a22;
  if ( *a22 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v37 = word_1802F327A;
    v39 = 1;
  }
  v124 = v39;
  v121 = a21;
  v119 = a20;
  v117 = a19;
  v115 = a18;
  v113 = a17;
  v111 = a16;
  v123 = v37;
  v125 = 0;
  v122 = 8LL;
  v40 = *a15;
  v120 = 8LL;
  v118 = 8LL;
  v116 = 8LL;
  v114 = 8LL;
  v112 = 4LL;
  if ( v40 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v40 = &unk_1802F34A8;
    v42 = 2;
  }
  v109 = v42;
  v108 = v40;
  v110 = 0;
  v43 = *a14;
  if ( *a14 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v43 = &unk_1802F34A8;
    v45 = 2;
  }
  v106 = v45;
  v105 = v43;
  v107 = 0;
  v46 = *a13;
  if ( *a13 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = 2 * v47 + 2;
  }
  else
  {
    v46 = &unk_1802F34A8;
    v48 = 2;
  }
  v103 = v48;
  v102 = v46;
  v104 = 0;
  v49 = *a12;
  if ( *a12 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v51 = 2 * v50 + 2;
  }
  else
  {
    v49 = &unk_1802F34A8;
    v51 = 2;
  }
  v100 = v51;
  v99 = v49;
  v101 = 0;
  v52 = *a11;
  if ( *a11 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( v52[v53] );
    v54 = 2 * v53 + 2;
  }
  else
  {
    v52 = &unk_1802F34A8;
    v54 = 2;
  }
  v97 = v54;
  v96 = v52;
  v98 = 0;
  v55 = *a10;
  if ( *a10 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( v55[v56] );
    v57 = 2 * v56 + 2;
  }
  else
  {
    v55 = &unk_1802F34A8;
    v57 = 2;
  }
  v94 = v57;
  v93 = v55;
  v95 = 0;
  v58 = *a9;
  if ( *a9 )
  {
    v59 = -1LL;
    do
      ++v59;
    while ( v58[v59] );
    v60 = 2 * v59 + 2;
  }
  else
  {
    v58 = &unk_1802F34A8;
    v60 = 2;
  }
  v91 = v60;
  v90 = v58;
  v92 = 0;
  v61 = *a8;
  if ( *a8 )
  {
    v62 = -1LL;
    do
      ++v62;
    while ( v61[v62] );
    v63 = 2 * v62 + 2;
  }
  else
  {
    v61 = &unk_1802F34A8;
    v63 = 2;
  }
  v88 = v63;
  v87 = v61;
  v89 = 0;
  v64 = *a7;
  if ( *a7 )
  {
    v65 = -1LL;
    do
      ++v65;
    while ( v64[v65] );
    v66 = 2 * v65 + 2;
  }
  else
  {
    v64 = &unk_1802F34A8;
    v66 = 2;
  }
  v85 = v66;
  v84 = v64;
  v86 = 0;
  v67 = *a6;
  if ( *a6 )
  {
    v68 = -1LL;
    do
      ++v68;
    while ( v67[v68] );
    v69 = 2 * v68 + 2;
  }
  else
  {
    v67 = &unk_1802F34A8;
    v69 = 2;
  }
  v82 = v69;
  v81 = v67;
  v83 = 0;
  v70 = *a5;
  if ( *a5 )
  {
    do
      ++v33;
    while ( v70[v33] );
    v71 = v33 + 1;
  }
  else
  {
    v70 = word_1802F327A;
    v71 = 1;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v79 = v71;
  v78 = v70;
  v80 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v76 = *(unsigned __int16 *)(a2 + 11);
  v75 = a2 + 11;
  UserData.Reserved = 2;
  v77 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 0x1Du, &UserData);
}
