/*
 * XREFs of sub_1400DBC50 @ 0x1400DBC50
 * Callers:
 *     sub_1400DD3F0 @ 0x1400DD3F0 (sub_1400DD3F0.c)
 *     sub_1400E0B68 @ 0x1400E0B68 (sub_1400E0B68.c)
 *     sub_1400E1168 @ 0x1400E1168 (sub_1400E1168.c)
 *     sub_1400E1630 @ 0x1400E1630 (sub_1400E1630.c)
 *     sub_1400E18FC @ 0x1400E18FC (sub_1400E18FC.c)
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 *     sub_1400E3180 @ 0x1400E3180 (sub_1400E3180.c)
 *     sub_1400E4E9C @ 0x1400E4E9C (sub_1400E4E9C.c)
 *     sub_1400E5218 @ 0x1400E5218 (sub_1400E5218.c)
 *     sub_1400E56F0 @ 0x1400E56F0 (sub_1400E56F0.c)
 *     sub_1400E8030 @ 0x1400E8030 (sub_1400E8030.c)
 *     sub_1400EBA60 @ 0x1400EBA60 (sub_1400EBA60.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400DBC50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const char *a14,
        const char *a15,
        char a16,
        const char *a17,
        char a18,
        const char *a19,
        char a20,
        const char *a21,
        char a22,
        const char *a23,
        char a24,
        const char *a25,
        int a26,
        const char *a27,
        int a28,
        const char *a29,
        int a30,
        char a31,
        char a32,
        char a33,
        char a34)
{
  const wchar_t *v34; // rdx
  const char *v35; // r12
  const char *v36; // r15
  __int64 v37; // rcx
  const char *v38; // r14
  const char *v39; // rsi
  const char *v40; // rdi
  const char *v41; // rbx
  const char *v42; // r11
  const char *v43; // r10
  const char *v44; // r9
  const char *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rax
  int v67; // eax
  const char *v68; // r13
  __int64 v69; // rax
  int v70; // eax
  const char *v71; // rdx
  __int64 v72; // rax
  int v73; // eax
  const char *v74; // rax
  __int64 v75; // rcx
  __int64 v77; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v78; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+58h] [rbp-B0h] BYREF
  int *v81; // [rsp+68h] [rbp-A0h]
  __int64 v82; // [rsp+70h] [rbp-98h]
  __int64 v83; // [rsp+78h] [rbp-90h]
  __int64 v84; // [rsp+80h] [rbp-88h]
  const wchar_t *v85; // [rsp+88h] [rbp-80h]
  int v86; // [rsp+90h] [rbp-78h]
  int v87; // [rsp+94h] [rbp-74h]
  const char *v88; // [rsp+98h] [rbp-70h]
  int v89; // [rsp+A0h] [rbp-68h]
  int v90; // [rsp+A4h] [rbp-64h]
  char *v91; // [rsp+A8h] [rbp-60h]
  __int64 v92; // [rsp+B0h] [rbp-58h]
  char *v93; // [rsp+B8h] [rbp-50h]
  __int64 v94; // [rsp+C0h] [rbp-48h]
  char *v95; // [rsp+C8h] [rbp-40h]
  __int64 v96; // [rsp+D0h] [rbp-38h]
  const char *v97; // [rsp+D8h] [rbp-30h]
  int v98; // [rsp+E0h] [rbp-28h]
  int v99; // [rsp+E4h] [rbp-24h]
  const char *v100; // [rsp+E8h] [rbp-20h]
  int v101; // [rsp+F0h] [rbp-18h]
  int v102; // [rsp+F4h] [rbp-14h]
  const char *v103; // [rsp+F8h] [rbp-10h]
  int v104; // [rsp+100h] [rbp-8h]
  int v105; // [rsp+104h] [rbp-4h]
  const char *v106; // [rsp+108h] [rbp+0h]
  int v107; // [rsp+110h] [rbp+8h]
  int v108; // [rsp+114h] [rbp+Ch]
  const char *v109; // [rsp+118h] [rbp+10h]
  int v110; // [rsp+120h] [rbp+18h]
  int v111; // [rsp+124h] [rbp+1Ch]
  char *v112; // [rsp+128h] [rbp+20h]
  __int64 v113; // [rsp+130h] [rbp+28h]
  const char *v114; // [rsp+138h] [rbp+30h]
  int v115; // [rsp+140h] [rbp+38h]
  int v116; // [rsp+144h] [rbp+3Ch]
  char *v117; // [rsp+148h] [rbp+40h]
  __int64 v118; // [rsp+150h] [rbp+48h]
  const char *v119; // [rsp+158h] [rbp+50h]
  int v120; // [rsp+160h] [rbp+58h]
  int v121; // [rsp+164h] [rbp+5Ch]
  char *v122; // [rsp+168h] [rbp+60h]
  __int64 v123; // [rsp+170h] [rbp+68h]
  const char *v124; // [rsp+178h] [rbp+70h]
  int v125; // [rsp+180h] [rbp+78h]
  int v126; // [rsp+184h] [rbp+7Ch]
  char *v127; // [rsp+188h] [rbp+80h]
  __int64 v128; // [rsp+190h] [rbp+88h]
  const char *v129; // [rsp+198h] [rbp+90h]
  int v130; // [rsp+1A0h] [rbp+98h]
  int v131; // [rsp+1A4h] [rbp+9Ch]
  char *v132; // [rsp+1A8h] [rbp+A0h]
  __int64 v133; // [rsp+1B0h] [rbp+A8h]
  const char *v134; // [rsp+1B8h] [rbp+B0h]
  int v135; // [rsp+1C0h] [rbp+B8h]
  int v136; // [rsp+1C4h] [rbp+BCh]
  __int64 *v137; // [rsp+1C8h] [rbp+C0h]
  __int64 v138; // [rsp+1D0h] [rbp+C8h]
  const char *v139; // [rsp+1D8h] [rbp+D0h]
  int v140; // [rsp+1E0h] [rbp+D8h]
  int v141; // [rsp+1E4h] [rbp+DCh]
  __int64 *v142; // [rsp+1E8h] [rbp+E0h]
  __int64 v143; // [rsp+1F0h] [rbp+E8h]
  const char *v144; // [rsp+1F8h] [rbp+F0h]
  int v145; // [rsp+200h] [rbp+F8h]
  int v146; // [rsp+204h] [rbp+FCh]
  __int64 *v147; // [rsp+208h] [rbp+100h]
  __int64 v148; // [rsp+210h] [rbp+108h]
  char *v149; // [rsp+218h] [rbp+110h]
  __int64 v150; // [rsp+220h] [rbp+118h]
  char *v151; // [rsp+228h] [rbp+120h]
  __int64 v152; // [rsp+230h] [rbp+128h]
  char *v153; // [rsp+238h] [rbp+130h]
  __int64 v154; // [rsp+240h] [rbp+138h]
  char *v155; // [rsp+248h] [rbp+140h]
  __int64 v156; // [rsp+250h] [rbp+148h]
  int v157; // [rsp+2B0h] [rbp+1A8h] BYREF

  v157 = a4;
  v34 = a6;
  v35 = a23;
  v36 = a21;
  v37 = -1LL;
  v38 = a19;
  v39 = a17;
  v40 = a15;
  v41 = a14;
  v42 = a13;
  v43 = a12;
  v44 = a11;
  v45 = a7;
  v81 = &v157;
  v83 = a5;
  v79 = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  v82 = 4LL;
  v84 = 16LL;
  if ( a6 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a6[v46] );
    v47 = 2 * v46 + 2;
  }
  else
  {
    v47 = 10;
  }
  v86 = v47;
  if ( !a6 )
    v34 = L"NULL";
  v87 = 0;
  v85 = v34;
  if ( a7 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( a7[v48] );
    v49 = v48 + 1;
  }
  else
  {
    v49 = 5;
  }
  v89 = v49;
  v92 = 2LL;
  v91 = &a8;
  if ( !a7 )
    v45 = "NULL";
  v94 = 2LL;
  v88 = v45;
  v93 = &a9;
  v90 = 0;
  v95 = &a10;
  v96 = 1LL;
  if ( a11 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( a11[v50] );
    v51 = v50 + 1;
  }
  else
  {
    v51 = 5;
  }
  v98 = v51;
  v99 = 0;
  if ( !a11 )
    v44 = "NULL";
  v97 = v44;
  if ( a12 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( a12[v52] );
    v53 = v52 + 1;
  }
  else
  {
    v53 = 5;
  }
  v101 = v53;
  v102 = 0;
  if ( !a12 )
    v43 = "NULL";
  v100 = v43;
  if ( a13 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( a13[v54] );
    v55 = v54 + 1;
  }
  else
  {
    v55 = 5;
  }
  v104 = v55;
  v105 = 0;
  if ( !a13 )
    v42 = "NULL";
  v103 = v42;
  if ( a14 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( a14[v56] );
    v57 = v56 + 1;
  }
  else
  {
    v57 = 5;
  }
  v107 = v57;
  v108 = 0;
  if ( !a14 )
    v41 = "NULL";
  v106 = v41;
  if ( a15 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( a15[v58] );
    v59 = v58 + 1;
  }
  else
  {
    v59 = 5;
  }
  v110 = v59;
  v111 = 0;
  if ( !a15 )
    v40 = "NULL";
  v112 = &a16;
  v109 = v40;
  v113 = 8LL;
  if ( a17 )
  {
    v60 = -1LL;
    do
      ++v60;
    while ( a17[v60] );
    v61 = v60 + 1;
  }
  else
  {
    v61 = 5;
  }
  v115 = v61;
  v116 = 0;
  if ( !a17 )
    v39 = "NULL";
  v117 = &a18;
  v114 = v39;
  v118 = 8LL;
  if ( a19 )
  {
    v62 = -1LL;
    do
      ++v62;
    while ( a19[v62] );
    v63 = v62 + 1;
  }
  else
  {
    v63 = 5;
  }
  v120 = v63;
  v121 = 0;
  if ( !a19 )
    v38 = "NULL";
  v122 = &a20;
  v119 = v38;
  v123 = 8LL;
  if ( a21 )
  {
    v64 = -1LL;
    do
      ++v64;
    while ( a21[v64] );
    v65 = v64 + 1;
  }
  else
  {
    v65 = 5;
  }
  v125 = v65;
  v126 = 0;
  if ( !a21 )
    v36 = "NULL";
  v127 = &a22;
  v124 = v36;
  v128 = 8LL;
  if ( a23 )
  {
    v66 = -1LL;
    do
      ++v66;
    while ( a23[v66] );
    v67 = v66 + 1;
  }
  else
  {
    v67 = 5;
  }
  v68 = a25;
  v130 = v67;
  if ( !a23 )
    v35 = "NULL";
  v131 = 0;
  v129 = v35;
  v132 = &a24;
  v133 = 8LL;
  if ( a25 )
  {
    v69 = -1LL;
    do
      ++v69;
    while ( a25[v69] );
    v70 = v69 + 1;
  }
  else
  {
    v70 = 5;
  }
  v135 = v70;
  v136 = 0;
  if ( !a25 )
    v68 = "NULL";
  v137 = &v77;
  v71 = a27;
  v134 = v68;
  v138 = 8LL;
  if ( a27 )
  {
    v72 = -1LL;
    do
      ++v72;
    while ( a27[v72] );
    v73 = v72 + 1;
  }
  else
  {
    v73 = 5;
  }
  v140 = v73;
  v141 = 0;
  v142 = &v78;
  v74 = a29;
  if ( !a27 )
    v71 = "NULL";
  v143 = 8LL;
  v139 = v71;
  if ( a29 )
  {
    do
      ++v37;
    while ( a29[v37] );
    v75 = (unsigned int)(v37 + 1);
  }
  else
  {
    v75 = 5LL;
  }
  v145 = v75;
  v146 = 0;
  if ( !a29 )
    v74 = "NULL";
  v148 = 8LL;
  v144 = v74;
  v150 = 4LL;
  v147 = &v79;
  v149 = &a31;
  v151 = &a32;
  v153 = &a33;
  v155 = &a34;
  v152 = 1LL;
  v154 = 1LL;
  v156 = 1LL;
  return sub_1400031E4(v75, &stru_14014AEF8, 0LL, 0x20u, &v80);
}
