/*
 * XREFs of McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer @ 0x1400B5F74
 * Callers:
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1400C32A0 (StorpTelemetrySendUnitScsiDiagnostics.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        int a15,
        char a16,
        char a17,
        const wchar_t *a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        int a33,
        __int64 a34,
        int a35,
        __int64 a36,
        int a37,
        __int64 a38,
        int a39,
        __int64 a40,
        int a41,
        __int64 a42,
        int a43,
        __int64 a44,
        int a45,
        __int64 a46,
        int a47,
        __int64 a48)
{
  const wchar_t *v48; // rcx
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // edx
  int v53; // r8d
  const char *v54; // rcx
  __int64 v55; // rdx
  int v56; // edx
  const char *v57; // rcx
  __int64 v58; // rdx
  int v59; // edx
  const char *v60; // rcx
  bool v61; // zf
  __int64 v62; // rdx
  const wchar_t *v63; // rcx
  bool v64; // zf
  __int64 v66; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+48h] [rbp-C0h] BYREF
  int *v68; // [rsp+58h] [rbp-B0h]
  __int64 v69; // [rsp+60h] [rbp-A8h]
  char *v70; // [rsp+68h] [rbp-A0h]
  __int64 v71; // [rsp+70h] [rbp-98h]
  char *v72; // [rsp+78h] [rbp-90h]
  __int64 v73; // [rsp+80h] [rbp-88h]
  char *v74; // [rsp+88h] [rbp-80h]
  __int64 v75; // [rsp+90h] [rbp-78h]
  __int64 v76; // [rsp+98h] [rbp-70h]
  __int64 v77; // [rsp+A0h] [rbp-68h]
  __int64 v78; // [rsp+A8h] [rbp-60h]
  __int64 v79; // [rsp+B0h] [rbp-58h]
  const wchar_t *v80; // [rsp+B8h] [rbp-50h]
  int v81; // [rsp+C0h] [rbp-48h]
  int v82; // [rsp+C4h] [rbp-44h]
  const char *v83; // [rsp+C8h] [rbp-40h]
  int v84; // [rsp+D0h] [rbp-38h]
  int v85; // [rsp+D4h] [rbp-34h]
  const char *v86; // [rsp+D8h] [rbp-30h]
  int v87; // [rsp+E0h] [rbp-28h]
  int v88; // [rsp+E4h] [rbp-24h]
  const char *v89; // [rsp+E8h] [rbp-20h]
  int v90; // [rsp+F0h] [rbp-18h]
  int v91; // [rsp+F4h] [rbp-14h]
  char *v92; // [rsp+F8h] [rbp-10h]
  __int64 v93; // [rsp+100h] [rbp-8h]
  __int64 *v94; // [rsp+108h] [rbp+0h]
  __int64 v95; // [rsp+110h] [rbp+8h]
  char *v96; // [rsp+118h] [rbp+10h]
  __int64 v97; // [rsp+120h] [rbp+18h]
  char *v98; // [rsp+128h] [rbp+20h]
  __int64 v99; // [rsp+130h] [rbp+28h]
  const wchar_t *v100; // [rsp+138h] [rbp+30h]
  int v101; // [rsp+140h] [rbp+38h]
  int v102; // [rsp+144h] [rbp+3Ch]
  char *v103; // [rsp+148h] [rbp+40h]
  __int64 v104; // [rsp+150h] [rbp+48h]
  char *v105; // [rsp+158h] [rbp+50h]
  __int64 v106; // [rsp+160h] [rbp+58h]
  char *v107; // [rsp+168h] [rbp+60h]
  __int64 v108; // [rsp+170h] [rbp+68h]
  char *v109; // [rsp+178h] [rbp+70h]
  __int64 v110; // [rsp+180h] [rbp+78h]
  char *v111; // [rsp+188h] [rbp+80h]
  __int64 v112; // [rsp+190h] [rbp+88h]
  char *v113; // [rsp+198h] [rbp+90h]
  __int64 v114; // [rsp+1A0h] [rbp+98h]
  char *v115; // [rsp+1A8h] [rbp+A0h]
  __int64 v116; // [rsp+1B0h] [rbp+A8h]
  char *v117; // [rsp+1B8h] [rbp+B0h]
  __int64 v118; // [rsp+1C0h] [rbp+B8h]
  char *v119; // [rsp+1C8h] [rbp+C0h]
  __int64 v120; // [rsp+1D0h] [rbp+C8h]
  char *v121; // [rsp+1D8h] [rbp+D0h]
  __int64 v122; // [rsp+1E0h] [rbp+D8h]
  char *v123; // [rsp+1E8h] [rbp+E0h]
  __int64 v124; // [rsp+1F0h] [rbp+E8h]
  char *v125; // [rsp+1F8h] [rbp+F0h]
  __int64 v126; // [rsp+200h] [rbp+F8h]
  char *v127; // [rsp+208h] [rbp+100h]
  __int64 v128; // [rsp+210h] [rbp+108h]
  char *v129; // [rsp+218h] [rbp+110h]
  __int64 v130; // [rsp+220h] [rbp+118h]
  int *v131; // [rsp+228h] [rbp+120h]
  __int64 v132; // [rsp+230h] [rbp+128h]
  __int64 v133; // [rsp+238h] [rbp+130h]
  int v134; // [rsp+240h] [rbp+138h]
  int v135; // [rsp+244h] [rbp+13Ch]
  int *v136; // [rsp+248h] [rbp+140h]
  __int64 v137; // [rsp+250h] [rbp+148h]
  __int64 v138; // [rsp+258h] [rbp+150h]
  int v139; // [rsp+260h] [rbp+158h]
  int v140; // [rsp+264h] [rbp+15Ch]
  int *v141; // [rsp+268h] [rbp+160h]
  __int64 v142; // [rsp+270h] [rbp+168h]
  __int64 v143; // [rsp+278h] [rbp+170h]
  int v144; // [rsp+280h] [rbp+178h]
  int v145; // [rsp+284h] [rbp+17Ch]
  int *v146; // [rsp+288h] [rbp+180h]
  __int64 v147; // [rsp+290h] [rbp+188h]
  __int64 v148; // [rsp+298h] [rbp+190h]
  int v149; // [rsp+2A0h] [rbp+198h]
  int v150; // [rsp+2A4h] [rbp+19Ch]
  int *v151; // [rsp+2A8h] [rbp+1A0h]
  __int64 v152; // [rsp+2B0h] [rbp+1A8h]
  __int64 v153; // [rsp+2B8h] [rbp+1B0h]
  int v154; // [rsp+2C0h] [rbp+1B8h]
  int v155; // [rsp+2C4h] [rbp+1BCh]
  int *v156; // [rsp+2C8h] [rbp+1C0h]
  __int64 v157; // [rsp+2D0h] [rbp+1C8h]
  __int64 v158; // [rsp+2D8h] [rbp+1D0h]
  int v159; // [rsp+2E0h] [rbp+1D8h]
  int v160; // [rsp+2E4h] [rbp+1DCh]
  int *v161; // [rsp+2E8h] [rbp+1E0h]
  __int64 v162; // [rsp+2F0h] [rbp+1E8h]
  __int64 v163; // [rsp+2F8h] [rbp+1F0h]
  int v164; // [rsp+300h] [rbp+1F8h]
  int v165; // [rsp+304h] [rbp+1FCh]
  int *v166; // [rsp+308h] [rbp+200h]
  __int64 v167; // [rsp+310h] [rbp+208h]
  __int64 v168; // [rsp+318h] [rbp+210h]
  int v169; // [rsp+320h] [rbp+218h]
  int v170; // [rsp+324h] [rbp+21Ch]
  int v171; // [rsp+360h] [rbp+258h] BYREF

  v171 = a4;
  v48 = a10;
  v66 = *(_QWORD *)&g_SystemUptime_s;
  v68 = &v171;
  v70 = &a5;
  v49 = 10;
  v69 = 4LL;
  v72 = &a6;
  v74 = &a7;
  v76 = a8;
  v78 = a9;
  v50 = -1LL;
  v71 = 1LL;
  v73 = 1LL;
  v75 = 1LL;
  v77 = 16LL;
  v79 = 16LL;
  if ( a10 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( a10[v51] );
    v52 = 2 * v51 + 2;
  }
  else
  {
    v52 = 10;
  }
  v81 = v52;
  v82 = 0;
  if ( !a10 )
    v48 = L"NULL";
  v53 = 5;
  v80 = v48;
  v54 = a11;
  if ( a11 )
  {
    v55 = -1LL;
    do
      ++v55;
    while ( a11[v55] );
    v56 = v55 + 1;
  }
  else
  {
    v56 = 5;
  }
  v84 = v56;
  v85 = 0;
  if ( !a11 )
    v54 = "NULL";
  v83 = v54;
  v57 = a12;
  if ( a12 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( a12[v58] );
    v59 = v58 + 1;
  }
  else
  {
    v59 = 5;
  }
  v87 = v59;
  v88 = 0;
  if ( !a12 )
    v57 = "NULL";
  v86 = v57;
  v60 = a13;
  v61 = a13 == 0LL;
  if ( a13 )
  {
    v62 = -1LL;
    do
      ++v62;
    while ( a13[v62] );
    v53 = v62 + 1;
    v61 = a13 == 0LL;
  }
  if ( v61 )
    v60 = "NULL";
  v90 = v53;
  v89 = v60;
  v92 = &a14;
  v94 = &v66;
  v96 = &a16;
  v98 = &a17;
  v63 = a18;
  v91 = 0;
  v93 = 4LL;
  v95 = 8LL;
  v97 = 1LL;
  v99 = 1LL;
  v64 = a18 == 0LL;
  if ( a18 )
  {
    do
      ++v50;
    while ( a18[v50] );
    v49 = 2 * v50 + 2;
    v64 = a18 == 0LL;
  }
  v101 = v49;
  v103 = &a19;
  if ( v64 )
    v63 = L"NULL";
  v100 = v63;
  v105 = &a20;
  v107 = &a21;
  v109 = &a22;
  v111 = &a23;
  v113 = &a24;
  v115 = &a25;
  v117 = &a26;
  v119 = &a27;
  v121 = &a28;
  v123 = &a29;
  v125 = &a30;
  v127 = &a31;
  v129 = &a32;
  v131 = &a33;
  v133 = a34;
  v134 = a33;
  v136 = &a35;
  v138 = a36;
  v139 = a35;
  v141 = &a37;
  v143 = a38;
  v144 = a37;
  v146 = &a39;
  v148 = a40;
  v149 = a39;
  v151 = &a41;
  v102 = 0;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 4LL;
  v110 = 4LL;
  v112 = 8LL;
  v114 = 8LL;
  v116 = 8LL;
  v118 = 8LL;
  v120 = 8LL;
  v122 = 8LL;
  v124 = 2LL;
  v126 = 1LL;
  v128 = 1LL;
  v130 = 4LL;
  v132 = 4LL;
  v135 = 0;
  v137 = 4LL;
  v140 = 0;
  v142 = 4LL;
  v145 = 0;
  v147 = 4LL;
  v150 = 0;
  v152 = 4LL;
  v153 = a42;
  v154 = a41;
  v156 = &a43;
  v158 = a44;
  v159 = a43;
  v161 = &a45;
  v163 = a46;
  v164 = a45;
  v166 = &a47;
  v168 = a48;
  v169 = a47;
  v155 = 0;
  v157 = 4LL;
  v160 = 0;
  v162 = 4LL;
  v165 = 0;
  v167 = 4LL;
  v170 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v63, &EventUnitScsiDiagnostics, 0LL, 0x2Eu, &v67);
}
