/*
 * XREFs of InitMessageTables @ 0x1403ECBE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall InitMessageTables(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // bl
  bool v4; // di
  unsigned __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned __int16 v8; // dx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // di
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned __int16 v18; // dx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int16 v25; // di
  __int64 v26; // r8
  __int64 v27; // rbx
  unsigned __int16 v28; // dx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  unsigned __int16 v36; // dx
  __int64 v37; // rbx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int16 v44; // di
  __int64 v45; // r8
  __int64 v46; // rbx
  unsigned __int16 v47; // dx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int16 v54; // di
  __int64 v55; // r8
  __int64 v56; // rbx
  unsigned __int16 v57; // dx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int16 v64; // di
  __int64 v65; // r8
  __int64 v66; // rbx
  unsigned __int16 v67; // dx
  unsigned int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned __int16 v74; // di
  __int64 v75; // r8
  __int64 v76; // rbx
  unsigned __int16 v77; // dx
  unsigned int v78; // eax
  unsigned int v79; // ecx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  unsigned __int16 v84; // si
  __int64 v85; // r8
  __int64 v86; // rbx
  unsigned __int16 v87; // dx
  unsigned int v88; // eax
  unsigned int v89; // ecx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned __int16 v94; // di
  __int64 v95; // r8
  __int64 v96; // rbx
  unsigned __int16 v97; // dx
  unsigned int v98; // eax
  unsigned int v99; // ecx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // r8
  unsigned __int16 v105; // dx
  __int64 v106; // rbx
  unsigned int v107; // eax
  unsigned int v108; // ecx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  unsigned __int16 v113; // di
  __int64 v114; // r8
  __int64 v115; // rbx
  unsigned __int16 v116; // dx
  unsigned int v117; // eax
  unsigned int v118; // ecx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rax
  unsigned __int16 v123; // di
  __int64 v124; // r8
  __int64 v125; // rbx
  unsigned __int16 v126; // dx
  unsigned int v127; // eax
  unsigned int v128; // ecx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  unsigned __int16 v133; // di
  __int64 v134; // r8
  __int64 v135; // rbx
  unsigned __int16 v136; // dx
  unsigned int v137; // eax
  unsigned int v138; // ecx
  __int64 result; // rax
  __int64 v140; // r9
  unsigned __int64 v141; // r8
  __int64 v142; // r9
  unsigned __int64 v143; // r8
  __int64 v144; // r9
  unsigned __int64 v145; // r8
  __int64 v146; // r9
  unsigned __int16 v147; // ax
  unsigned __int64 v148; // r8
  __int64 v149; // r9
  unsigned __int64 v150; // r8
  __int64 v151; // r9
  unsigned __int64 v152; // r8
  __int64 v153; // r9
  unsigned __int64 v154; // r8
  __int64 v155; // r9
  unsigned __int64 v156; // r8
  __int64 v157; // r9
  unsigned __int16 v158; // ax
  unsigned __int64 v159; // r8
  __int64 v160; // r9
  unsigned __int64 v161; // r8
  __int64 v162; // r9
  unsigned __int64 v163; // r8
  __int64 v164; // r9
  unsigned __int64 v165; // r8
  __int64 v166; // r9
  unsigned __int64 v167; // r8
  __int64 v168; // r9
  __int64 UserSessionState; // rax
  int v170; // r8d
  int v171; // edx

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || (v3 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v3 = 0;
  }
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v170) = v4;
    LOBYTE(v171) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v171,
      v170,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      12,
      (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids);
  }
  v5 = 51;
  v6 = W32GetUserSessionState(v2, a2);
  LODWORD(v7) = 0;
  v8 = 51;
  *(_DWORD *)(v6 + 20416) = 0;
  v9 = 0;
  do
  {
    v10 = v9;
    if ( v8 > v9 )
    {
      *(_DWORD *)(v6 + 20416) = v8;
      v10 = v8;
    }
    v7 = (unsigned int)(v7 + 1);
    v9 = v10;
    v8 = word_14035AD50[v7];
  }
  while ( v8 );
  v11 = SharedAlloc((v10 >> 3) + 1);
  *(_QWORD *)(v6 + 20424) = v11;
  if ( v11 )
  {
    LODWORD(v140) = 0;
    do
    {
      v12 = *(_QWORD *)(v6 + 20424);
      v140 = (unsigned int)(v140 + 1);
      v141 = (unsigned __int64)v5 >> 3;
      v13 = *(unsigned __int8 *)(v141 + v12);
      LODWORD(v13) = v13 | (1 << (v5 & 7));
      *(_BYTE *)(v141 + v12) = v13;
      v5 = word_14035AD50[v140];
    }
    while ( v5 );
  }
  v14 = W32GetUserSessionState(v13, v12);
  v15 = 6;
  LODWORD(v16) = 0;
  v17 = v14;
  v18 = 6;
  *(_DWORD *)(v14 + 20432) = 0;
  v19 = 0;
  do
  {
    v20 = v19;
    if ( v18 > v19 )
    {
      *(_DWORD *)(v17 + 20432) = v18;
      v20 = v18;
    }
    v16 = (unsigned int)(v16 + 1);
    v19 = v20;
    v18 = word_14035ADB0[v16];
  }
  while ( v18 );
  v21 = SharedAlloc((v20 >> 3) + 1);
  *(_QWORD *)(v17 + 20440) = v21;
  if ( v21 )
  {
    LODWORD(v142) = 0;
    do
    {
      v22 = *(_QWORD *)(v17 + 20440);
      v142 = (unsigned int)(v142 + 1);
      v143 = (unsigned __int64)v15 >> 3;
      v23 = *(unsigned __int8 *)(v143 + v22);
      LODWORD(v23) = v23 | (1 << (v15 & 7));
      *(_BYTE *)(v143 + v22) = v23;
      v15 = word_14035ADB0[v142];
    }
    while ( v15 );
  }
  v24 = W32GetUserSessionState(v23, v22);
  v25 = 57;
  LODWORD(v26) = 0;
  v27 = v24;
  v28 = 57;
  *(_DWORD *)(v24 + 20080) = 0;
  v29 = 0;
  do
  {
    v30 = v29;
    if ( v28 > v29 )
    {
      *(_DWORD *)(v27 + 20080) = v28;
      v30 = v28;
    }
    v26 = (unsigned int)(v26 + 1);
    v29 = v30;
    v28 = word_14035B1D0[v26];
  }
  while ( v28 );
  v31 = SharedAlloc((v30 >> 3) + 1);
  *(_QWORD *)(v27 + 20088) = v31;
  if ( v31 )
  {
    LODWORD(v144) = 0;
    do
    {
      v32 = *(_QWORD *)(v27 + 20088);
      v144 = (unsigned int)(v144 + 1);
      v145 = (unsigned __int64)v25 >> 3;
      v33 = *(unsigned __int8 *)(v145 + v32);
      LODWORD(v33) = v33 | (1 << (v25 & 7));
      *(_BYTE *)(v145 + v32) = v33;
      v25 = word_14035B1D0[v144];
    }
    while ( v25 );
  }
  v34 = W32GetUserSessionState(v33, v32);
  LODWORD(v35) = 0;
  v36 = 1;
  v37 = v34;
  *(_DWORD *)(v34 + 19920) = 0;
  v38 = 0;
  do
  {
    v39 = v38;
    if ( v36 > v38 )
    {
      *(_DWORD *)(v37 + 19920) = v36;
      v39 = v36;
    }
    v35 = (unsigned int)(v35 + 1);
    v38 = v39;
    v36 = word_14035B108[v35];
  }
  while ( v36 );
  v40 = SharedAlloc((v39 >> 3) + 1);
  *(_QWORD *)(v37 + 19928) = v40;
  if ( v40 )
  {
    LODWORD(v146) = 0;
    v147 = 1;
    do
    {
      v41 = *(_QWORD *)(v37 + 19928);
      v146 = (unsigned int)(v146 + 1);
      v148 = (unsigned __int64)v147 >> 3;
      v42 = *(unsigned __int8 *)(v148 + v41);
      LODWORD(v42) = v42 | (1 << (v147 & 7));
      *(_BYTE *)(v148 + v41) = v42;
      v147 = word_14035B108[v146];
    }
    while ( v147 );
  }
  v43 = W32GetUserSessionState(v42, v41);
  v44 = 129;
  LODWORD(v45) = 0;
  v46 = v43;
  v47 = 129;
  *(_DWORD *)(v43 + 19952) = 0;
  v48 = 0;
  do
  {
    v49 = v48;
    if ( v47 > v48 )
    {
      *(_DWORD *)(v46 + 19952) = v47;
      v49 = v47;
    }
    v45 = (unsigned int)(v45 + 1);
    v48 = v49;
    v47 = word_14035B170[v45];
  }
  while ( v47 );
  v50 = SharedAlloc((v49 >> 3) + 1);
  *(_QWORD *)(v46 + 19960) = v50;
  if ( v50 )
  {
    LODWORD(v149) = 0;
    do
    {
      v51 = *(_QWORD *)(v46 + 19960);
      v149 = (unsigned int)(v149 + 1);
      v150 = (unsigned __int64)v44 >> 3;
      v52 = *(unsigned __int8 *)(v150 + v51);
      LODWORD(v52) = v52 | (1 << (v44 & 7));
      *(_BYTE *)(v150 + v51) = v52;
      v44 = word_14035B170[v149];
    }
    while ( v44 );
  }
  v53 = W32GetUserSessionState(v52, v51);
  v54 = 15;
  LODWORD(v55) = 0;
  v56 = v53;
  v57 = 15;
  *(_DWORD *)(v53 + 19968) = 0;
  v58 = 0;
  do
  {
    v59 = v58;
    if ( v57 > v58 )
    {
      *(_DWORD *)(v56 + 19968) = v57;
      v59 = v57;
    }
    v55 = (unsigned int)(v55 + 1);
    v58 = v59;
    v57 = word_14035B1C0[v55];
  }
  while ( v57 );
  v60 = SharedAlloc((v59 >> 3) + 1);
  *(_QWORD *)(v56 + 19976) = v60;
  if ( v60 )
  {
    LODWORD(v151) = 0;
    do
    {
      v61 = *(_QWORD *)(v56 + 19976);
      v151 = (unsigned int)(v151 + 1);
      v152 = (unsigned __int64)v54 >> 3;
      v62 = *(unsigned __int8 *)(v152 + v61);
      LODWORD(v62) = v62 | (1 << (v54 & 7));
      *(_BYTE *)(v152 + v61) = v62;
      v54 = word_14035B1C0[v151];
    }
    while ( v54 );
  }
  v63 = W32GetUserSessionState(v62, v61);
  v64 = 369;
  LODWORD(v65) = 0;
  v66 = v63;
  v67 = 369;
  *(_DWORD *)(v63 + 20144) = 0;
  v68 = 0;
  do
  {
    v69 = v68;
    if ( v67 > v68 )
    {
      *(_DWORD *)(v66 + 20144) = v67;
      v69 = v67;
    }
    v65 = (unsigned int)(v65 + 1);
    v68 = v69;
    v67 = word_14035B138[v65];
  }
  while ( v67 );
  v70 = SharedAlloc((v69 >> 3) + 1);
  *(_QWORD *)(v66 + 20152) = v70;
  if ( v70 )
  {
    LODWORD(v153) = 0;
    do
    {
      v71 = *(_QWORD *)(v66 + 20152);
      v153 = (unsigned int)(v153 + 1);
      v154 = (unsigned __int64)v64 >> 3;
      v72 = *(unsigned __int8 *)(v154 + v71);
      LODWORD(v72) = v72 | (1 << (v64 & 7));
      *(_BYTE *)(v154 + v71) = v72;
      v64 = word_14035B138[v153];
    }
    while ( v64 );
  }
  v73 = W32GetUserSessionState(v72, v71);
  v74 = 132;
  LODWORD(v75) = 0;
  v76 = v73;
  v77 = 132;
  *(_DWORD *)(v73 + 20032) = 0;
  v78 = 0;
  do
  {
    v79 = v78;
    if ( v77 > v78 )
    {
      *(_DWORD *)(v76 + 20032) = v77;
      v79 = v77;
    }
    v75 = (unsigned int)(v75 + 1);
    v78 = v79;
    v77 = word_14035B000[v75];
  }
  while ( v77 );
  v80 = SharedAlloc((v79 >> 3) + 1);
  *(_QWORD *)(v76 + 20040) = v80;
  if ( v80 )
  {
    LODWORD(v155) = 0;
    do
    {
      v81 = *(_QWORD *)(v76 + 20040);
      v155 = (unsigned int)(v155 + 1);
      v156 = (unsigned __int64)v74 >> 3;
      v82 = *(unsigned __int8 *)(v156 + v81);
      LODWORD(v82) = v82 | (1 << (v74 & 7));
      *(_BYTE *)(v156 + v81) = v82;
      v74 = word_14035B000[v155];
    }
    while ( v74 );
  }
  v83 = W32GetUserSessionState(v82, v81);
  v84 = 398;
  LODWORD(v85) = 0;
  v86 = v83;
  v87 = 398;
  *(_DWORD *)(v83 + 20112) = 0;
  v88 = 0;
  do
  {
    v89 = v88;
    if ( v87 > v88 )
    {
      *(_DWORD *)(v86 + 20112) = v87;
      v89 = v87;
    }
    v85 = (unsigned int)(v85 + 1);
    v88 = v89;
    v87 = word_14035B050[v85];
  }
  while ( v87 );
  v90 = SharedAlloc((v89 >> 3) + 1);
  *(_QWORD *)(v86 + 20120) = v90;
  if ( v90 )
  {
    LODWORD(v157) = 0;
    v158 = 398;
    do
    {
      v91 = *(_QWORD *)(v86 + 20120);
      v157 = (unsigned int)(v157 + 1);
      v159 = (unsigned __int64)v158 >> 3;
      v92 = *(unsigned __int8 *)(v159 + v91);
      LODWORD(v92) = v92 | (1 << (v158 & 7));
      *(_BYTE *)(v159 + v91) = v92;
      v158 = word_14035B050[v157];
    }
    while ( v158 );
  }
  v93 = W32GetUserSessionState(v92, v91);
  v94 = 359;
  LODWORD(v95) = 0;
  v96 = v93;
  v97 = 359;
  *(_DWORD *)(v93 + 20048) = 0;
  v98 = 0;
  do
  {
    v99 = v98;
    if ( v97 > v98 )
    {
      *(_DWORD *)(v96 + 20048) = v97;
      v99 = v97;
    }
    v95 = (unsigned int)(v95 + 1);
    v98 = v99;
    v97 = word_14035AE90[v95];
  }
  while ( v97 );
  v100 = SharedAlloc((v99 >> 3) + 1);
  *(_QWORD *)(v96 + 20056) = v100;
  if ( v100 )
  {
    LODWORD(v160) = 0;
    do
    {
      v101 = *(_QWORD *)(v96 + 20056);
      v160 = (unsigned int)(v160 + 1);
      v161 = (unsigned __int64)v94 >> 3;
      v102 = *(unsigned __int8 *)(v161 + v101);
      LODWORD(v102) = v102 | (1 << (v94 & 7));
      *(_BYTE *)(v161 + v101) = v102;
      v94 = word_14035AE90[v160];
    }
    while ( v94 );
  }
  v103 = W32GetUserSessionState(v102, v101);
  LODWORD(v104) = 0;
  v105 = 398;
  v106 = v103;
  *(_DWORD *)(v103 + 20064) = 0;
  v107 = 0;
  do
  {
    v108 = v107;
    if ( v105 > v107 )
    {
      *(_DWORD *)(v106 + 20064) = v105;
      v108 = v105;
    }
    v104 = (unsigned int)(v104 + 1);
    v107 = v108;
    v105 = word_14035B050[v104];
  }
  while ( v105 );
  v109 = SharedAlloc((v108 >> 3) + 1);
  *(_QWORD *)(v106 + 20072) = v109;
  if ( v109 )
  {
    LODWORD(v162) = 0;
    do
    {
      v110 = *(_QWORD *)(v106 + 20072);
      v162 = (unsigned int)(v162 + 1);
      v163 = (unsigned __int64)v84 >> 3;
      v111 = *(unsigned __int8 *)(v163 + v110);
      LODWORD(v111) = v111 | (1 << (v84 & 7));
      *(_BYTE *)(v163 + v110) = v111;
      v84 = word_14035B050[v162];
    }
    while ( v84 );
  }
  v112 = W32GetUserSessionState(v111, v110);
  v113 = 198;
  LODWORD(v114) = 0;
  v115 = v112;
  v116 = 198;
  *(_DWORD *)(v112 + 20096) = 0;
  v117 = 0;
  do
  {
    v118 = v117;
    if ( v116 > v117 )
    {
      *(_DWORD *)(v115 + 20096) = v116;
      v118 = v116;
    }
    v114 = (unsigned int)(v114 + 1);
    v117 = v118;
    v116 = word_14035AF40[v114];
  }
  while ( v116 );
  v119 = SharedAlloc((v118 >> 3) + 1);
  *(_QWORD *)(v115 + 20104) = v119;
  if ( v119 )
  {
    LODWORD(v164) = 0;
    do
    {
      v120 = *(_QWORD *)(v115 + 20104);
      v164 = (unsigned int)(v164 + 1);
      v165 = (unsigned __int64)v113 >> 3;
      v121 = *(unsigned __int8 *)(v165 + v120);
      LODWORD(v121) = v121 | (1 << (v113 & 7));
      *(_BYTE *)(v165 + v120) = v121;
      v113 = word_14035AF40[v164];
    }
    while ( v113 );
  }
  v122 = W32GetUserSessionState(v121, v120);
  v123 = 20;
  LODWORD(v124) = 0;
  v125 = v122;
  v126 = 20;
  *(_DWORD *)(v122 + 20160) = 0;
  v127 = 0;
  do
  {
    v128 = v127;
    if ( v126 > v127 )
    {
      *(_DWORD *)(v125 + 20160) = v126;
      v128 = v126;
    }
    v124 = (unsigned int)(v124 + 1);
    v127 = v128;
    v126 = word_14035AE50[v124];
  }
  while ( v126 );
  v129 = SharedAlloc((v128 >> 3) + 1);
  *(_QWORD *)(v125 + 20168) = v129;
  if ( v129 )
  {
    LODWORD(v166) = 0;
    do
    {
      v130 = *(_QWORD *)(v125 + 20168);
      v166 = (unsigned int)(v166 + 1);
      v167 = (unsigned __int64)v123 >> 3;
      v131 = *(unsigned __int8 *)(v167 + v130);
      LODWORD(v131) = v131 | (1 << (v123 & 7));
      *(_BYTE *)(v167 + v130) = v131;
      v123 = word_14035AE50[v166];
    }
    while ( v123 );
  }
  v132 = W32GetUserSessionState(v131, v130);
  v133 = 2;
  LODWORD(v134) = 0;
  v135 = v132;
  v136 = 2;
  *(_DWORD *)(v132 + 20176) = 0;
  v137 = 0;
  do
  {
    v138 = v137;
    if ( v136 > v137 )
    {
      *(_DWORD *)(v135 + 20176) = v136;
      v138 = v136;
    }
    v134 = (unsigned int)(v134 + 1);
    v137 = v138;
    v136 = word_14035AE78[v134];
  }
  while ( v136 );
  result = SharedAlloc((v138 >> 3) + 1);
  *(_QWORD *)(v135 + 20184) = result;
  if ( result )
  {
    LODWORD(v168) = 0;
    do
    {
      v168 = (unsigned int)(v168 + 1);
      result = v133 & 7;
      *(_BYTE *)(((unsigned __int64)v133 >> 3) + *(_QWORD *)(v135 + 20184)) |= 1 << result;
      v133 = word_14035AE78[v168];
    }
    while ( v133 );
  }
  return result;
}
