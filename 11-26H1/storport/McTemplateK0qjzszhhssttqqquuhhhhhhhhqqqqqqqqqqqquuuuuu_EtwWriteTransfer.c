/*
 * XREFs of McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer @ 0x14005E6E0
 * Callers:
 *     StorLogMFNDCapability @ 0x14006E24C (StorLogMFNDCapability.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
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
        char a33,
        char a34,
        char a35,
        char a36,
        char a37,
        char a38,
        char a39,
        char a40,
        char a41,
        char a42,
        char a43,
        char a44,
        char a45)
{
  const wchar_t *v45; // rcx
  __int64 v46; // rax
  int v47; // r9d
  __int64 v48; // rdx
  unsigned int v49; // edx
  int v50; // r8d
  const char *v51; // rcx
  __int64 v52; // rdx
  int v53; // edx
  const wchar_t *v54; // rcx
  bool v55; // zf
  __int64 v56; // rdx
  const char *v57; // rcx
  __int64 v58; // rdx
  int v59; // edx
  const char *v60; // rcx
  bool v61; // zf
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+38h] [rbp-D0h] BYREF
  int *v64; // [rsp+48h] [rbp-C0h]
  __int64 v65; // [rsp+50h] [rbp-B8h]
  __int64 v66; // [rsp+58h] [rbp-B0h]
  __int64 v67; // [rsp+60h] [rbp-A8h]
  const wchar_t *v68; // [rsp+68h] [rbp-A0h]
  __int64 v69; // [rsp+70h] [rbp-98h]
  const char *v70; // [rsp+78h] [rbp-90h]
  int v71; // [rsp+80h] [rbp-88h]
  int v72; // [rsp+84h] [rbp-84h]
  const wchar_t *v73; // [rsp+88h] [rbp-80h]
  int v74; // [rsp+90h] [rbp-78h]
  int v75; // [rsp+94h] [rbp-74h]
  char *v76; // [rsp+98h] [rbp-70h]
  __int64 v77; // [rsp+A0h] [rbp-68h]
  char *v78; // [rsp+A8h] [rbp-60h]
  __int64 v79; // [rsp+B0h] [rbp-58h]
  const char *v80; // [rsp+B8h] [rbp-50h]
  int v81; // [rsp+C0h] [rbp-48h]
  int v82; // [rsp+C4h] [rbp-44h]
  const char *v83; // [rsp+C8h] [rbp-40h]
  int v84; // [rsp+D0h] [rbp-38h]
  int v85; // [rsp+D4h] [rbp-34h]
  char *v86; // [rsp+D8h] [rbp-30h]
  __int64 v87; // [rsp+E0h] [rbp-28h]
  char *v88; // [rsp+E8h] [rbp-20h]
  __int64 v89; // [rsp+F0h] [rbp-18h]
  char *v90; // [rsp+F8h] [rbp-10h]
  __int64 v91; // [rsp+100h] [rbp-8h]
  char *v92; // [rsp+108h] [rbp+0h]
  __int64 v93; // [rsp+110h] [rbp+8h]
  char *v94; // [rsp+118h] [rbp+10h]
  __int64 v95; // [rsp+120h] [rbp+18h]
  char *v96; // [rsp+128h] [rbp+20h]
  __int64 v97; // [rsp+130h] [rbp+28h]
  char *v98; // [rsp+138h] [rbp+30h]
  __int64 v99; // [rsp+140h] [rbp+38h]
  char *v100; // [rsp+148h] [rbp+40h]
  __int64 v101; // [rsp+150h] [rbp+48h]
  char *v102; // [rsp+158h] [rbp+50h]
  __int64 v103; // [rsp+160h] [rbp+58h]
  char *v104; // [rsp+168h] [rbp+60h]
  __int64 v105; // [rsp+170h] [rbp+68h]
  char *v106; // [rsp+178h] [rbp+70h]
  __int64 v107; // [rsp+180h] [rbp+78h]
  char *v108; // [rsp+188h] [rbp+80h]
  __int64 v109; // [rsp+190h] [rbp+88h]
  char *v110; // [rsp+198h] [rbp+90h]
  __int64 v111; // [rsp+1A0h] [rbp+98h]
  char *v112; // [rsp+1A8h] [rbp+A0h]
  __int64 v113; // [rsp+1B0h] [rbp+A8h]
  char *v114; // [rsp+1B8h] [rbp+B0h]
  __int64 v115; // [rsp+1C0h] [rbp+B8h]
  char *v116; // [rsp+1C8h] [rbp+C0h]
  __int64 v117; // [rsp+1D0h] [rbp+C8h]
  char *v118; // [rsp+1D8h] [rbp+D0h]
  __int64 v119; // [rsp+1E0h] [rbp+D8h]
  char *v120; // [rsp+1E8h] [rbp+E0h]
  __int64 v121; // [rsp+1F0h] [rbp+E8h]
  char *v122; // [rsp+1F8h] [rbp+F0h]
  __int64 v123; // [rsp+200h] [rbp+F8h]
  char *v124; // [rsp+208h] [rbp+100h]
  __int64 v125; // [rsp+210h] [rbp+108h]
  char *v126; // [rsp+218h] [rbp+110h]
  __int64 v127; // [rsp+220h] [rbp+118h]
  char *v128; // [rsp+228h] [rbp+120h]
  __int64 v129; // [rsp+230h] [rbp+128h]
  char *v130; // [rsp+238h] [rbp+130h]
  __int64 v131; // [rsp+240h] [rbp+138h]
  char *v132; // [rsp+248h] [rbp+140h]
  __int64 v133; // [rsp+250h] [rbp+148h]
  char *v134; // [rsp+258h] [rbp+150h]
  __int64 v135; // [rsp+260h] [rbp+158h]
  char *v136; // [rsp+268h] [rbp+160h]
  __int64 v137; // [rsp+270h] [rbp+168h]
  char *v138; // [rsp+278h] [rbp+170h]
  __int64 v139; // [rsp+280h] [rbp+178h]
  char *v140; // [rsp+288h] [rbp+180h]
  __int64 v141; // [rsp+290h] [rbp+188h]
  char *v142; // [rsp+298h] [rbp+190h]
  __int64 v143; // [rsp+2A0h] [rbp+198h]
  char *v144; // [rsp+2A8h] [rbp+1A0h]
  __int64 v145; // [rsp+2B0h] [rbp+1A8h]
  char *v146; // [rsp+2B8h] [rbp+1B0h]
  __int64 v147; // [rsp+2C0h] [rbp+1B8h]
  char *v148; // [rsp+2C8h] [rbp+1C0h]
  __int64 v149; // [rsp+2D0h] [rbp+1C8h]
  char *v150; // [rsp+2D8h] [rbp+1D0h]
  __int64 v151; // [rsp+2E0h] [rbp+1D8h]
  int v152; // [rsp+320h] [rbp+218h] BYREF

  v152 = a4;
  v45 = a6;
  v64 = &v152;
  v66 = a5;
  v46 = -1LL;
  v65 = 4LL;
  v67 = 16LL;
  v47 = 10;
  if ( a6 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( a6[v48] );
    v49 = 2 * v48 + 2;
  }
  else
  {
    v49 = 10;
  }
  v69 = v49;
  if ( !a6 )
    v45 = L"NULL";
  v50 = 5;
  v68 = v45;
  v51 = a7;
  if ( a7 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( a7[v52] );
    v53 = v52 + 1;
  }
  else
  {
    v53 = 5;
  }
  v71 = v53;
  v72 = 0;
  if ( !a7 )
    v51 = "NULL";
  v70 = v51;
  v54 = a8;
  v55 = a8 == 0LL;
  if ( a8 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( a8[v56] );
    v47 = 2 * v56 + 2;
    v55 = a8 == 0LL;
  }
  if ( v55 )
    v54 = L"NULL";
  v74 = v47;
  v73 = v54;
  v76 = &a9;
  v78 = &a10;
  v57 = a11;
  v75 = 0;
  v77 = 2LL;
  v79 = 2LL;
  if ( a11 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( a11[v58] );
    v59 = v58 + 1;
  }
  else
  {
    v59 = 5;
  }
  v81 = v59;
  v82 = 0;
  if ( !a11 )
    v57 = "NULL";
  v80 = v57;
  v60 = a12;
  v61 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v46;
    while ( a12[v46] );
    v50 = v46 + 1;
    v61 = a12 == 0LL;
  }
  v84 = v50;
  v86 = &a13;
  if ( v61 )
    v60 = "NULL";
  v83 = v60;
  v88 = &a14;
  v90 = &a15;
  v92 = &a16;
  v94 = &a17;
  v96 = &a18;
  v98 = &a19;
  v100 = &a20;
  v102 = &a21;
  v104 = &a22;
  v106 = &a23;
  v108 = &a24;
  v110 = &a25;
  v112 = &a26;
  v114 = &a27;
  v116 = &a28;
  v118 = &a29;
  v120 = &a30;
  v122 = &a31;
  v124 = &a32;
  v126 = &a33;
  v128 = &a34;
  v130 = &a35;
  v132 = &a36;
  v134 = &a37;
  v136 = &a38;
  v85 = 0;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 4LL;
  v97 = 1LL;
  v99 = 1LL;
  v101 = 2LL;
  v103 = 2LL;
  v105 = 2LL;
  v107 = 2LL;
  v109 = 2LL;
  v111 = 2LL;
  v113 = 2LL;
  v115 = 2LL;
  v117 = 4LL;
  v119 = 4LL;
  v121 = 4LL;
  v123 = 4LL;
  v125 = 4LL;
  v127 = 4LL;
  v129 = 4LL;
  v131 = 4LL;
  v133 = 4LL;
  v135 = 4LL;
  v137 = 4LL;
  v138 = &a39;
  v139 = 4LL;
  v140 = &a40;
  v141 = 1LL;
  v142 = &a41;
  v143 = 1LL;
  v144 = &a42;
  v146 = &a43;
  v148 = &a44;
  v150 = &a45;
  v145 = 1LL;
  v147 = 1LL;
  v149 = 1LL;
  v151 = 1LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v60, &EventGetMFNDCapability, 0LL, 0x2Bu, &v63);
}
