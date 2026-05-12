/*
 * XREFs of McTemplateK0qjzshqusssjqxuxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1400B352C
 * Callers:
 *     StorpTelemetryNvmeSendNamespacePerfData @ 0x1400BF5B8 (StorpTelemetryNvmeSendNamespacePerfData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqusssjqxuxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
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
        __int64 a14,
        char a15,
        __int64 a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        const wchar_t *a23,
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
        char a45,
        char a46,
        char a47,
        char a48,
        char a49,
        char a50,
        char a51,
        char a52,
        char a53,
        char a54,
        char a55,
        char a56,
        char a57,
        char a58,
        char a59,
        char a60,
        char a61,
        char a62,
        char a63)
{
  char a64; // [rsp+680h] [rbp+578h] BYREF
  __int64 v64; // rcx
  int v65; // r9d
  const wchar_t *v66; // rax
  __int64 v67; // rdx
  int v68; // edx
  int v69; // edx
  const char *v70; // rax
  __int64 v71; // r8
  int v72; // r8d
  const char *v73; // rax
  __int64 v74; // r8
  int v75; // r8d
  const char *v76; // rax
  __int64 v77; // r8
  int v78; // r8d
  const char *v79; // rax
  bool v80; // zf
  __int64 v81; // rdx
  const wchar_t *v82; // rax
  bool v83; // zf
  __int64 v85; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+48h] [rbp-C0h] BYREF
  int *v87; // [rsp+58h] [rbp-B0h]
  __int64 v88; // [rsp+60h] [rbp-A8h]
  __int64 v89; // [rsp+68h] [rbp-A0h]
  __int64 v90; // [rsp+70h] [rbp-98h]
  const wchar_t *v91; // [rsp+78h] [rbp-90h]
  int v92; // [rsp+80h] [rbp-88h]
  int v93; // [rsp+84h] [rbp-84h]
  const char *v94; // [rsp+88h] [rbp-80h]
  int v95; // [rsp+90h] [rbp-78h]
  int v96; // [rsp+94h] [rbp-74h]
  char *v97; // [rsp+98h] [rbp-70h]
  __int64 v98; // [rsp+A0h] [rbp-68h]
  char *v99; // [rsp+A8h] [rbp-60h]
  __int64 v100; // [rsp+B0h] [rbp-58h]
  char *v101; // [rsp+B8h] [rbp-50h]
  __int64 v102; // [rsp+C0h] [rbp-48h]
  const char *v103; // [rsp+C8h] [rbp-40h]
  int v104; // [rsp+D0h] [rbp-38h]
  int v105; // [rsp+D4h] [rbp-34h]
  const char *v106; // [rsp+D8h] [rbp-30h]
  int v107; // [rsp+E0h] [rbp-28h]
  int v108; // [rsp+E4h] [rbp-24h]
  const char *v109; // [rsp+E8h] [rbp-20h]
  int v110; // [rsp+F0h] [rbp-18h]
  int v111; // [rsp+F4h] [rbp-14h]
  __int64 v112; // [rsp+F8h] [rbp-10h]
  __int64 v113; // [rsp+100h] [rbp-8h]
  char *v114; // [rsp+108h] [rbp+0h]
  __int64 v115; // [rsp+110h] [rbp+8h]
  __int64 *v116; // [rsp+118h] [rbp+10h]
  __int64 v117; // [rsp+120h] [rbp+18h]
  char *v118; // [rsp+128h] [rbp+20h]
  __int64 v119; // [rsp+130h] [rbp+28h]
  char *v120; // [rsp+138h] [rbp+30h]
  __int64 v121; // [rsp+140h] [rbp+38h]
  char *v122; // [rsp+148h] [rbp+40h]
  __int64 v123; // [rsp+150h] [rbp+48h]
  char *v124; // [rsp+158h] [rbp+50h]
  __int64 v125; // [rsp+160h] [rbp+58h]
  char *v126; // [rsp+168h] [rbp+60h]
  __int64 v127; // [rsp+170h] [rbp+68h]
  char *v128; // [rsp+178h] [rbp+70h]
  __int64 v129; // [rsp+180h] [rbp+78h]
  const wchar_t *v130; // [rsp+188h] [rbp+80h]
  int v131; // [rsp+190h] [rbp+88h]
  int v132; // [rsp+194h] [rbp+8Ch]
  char *v133; // [rsp+198h] [rbp+90h]
  __int64 v134; // [rsp+1A0h] [rbp+98h]
  char *v135; // [rsp+1A8h] [rbp+A0h]
  __int64 v136; // [rsp+1B0h] [rbp+A8h]
  char *v137; // [rsp+1B8h] [rbp+B0h]
  __int64 v138; // [rsp+1C0h] [rbp+B8h]
  char *v139; // [rsp+1C8h] [rbp+C0h]
  __int64 v140; // [rsp+1D0h] [rbp+C8h]
  char *v141; // [rsp+1D8h] [rbp+D0h]
  __int64 v142; // [rsp+1E0h] [rbp+D8h]
  char *v143; // [rsp+1E8h] [rbp+E0h]
  __int64 v144; // [rsp+1F0h] [rbp+E8h]
  char *v145; // [rsp+1F8h] [rbp+F0h]
  __int64 v146; // [rsp+200h] [rbp+F8h]
  char *v147; // [rsp+208h] [rbp+100h]
  __int64 v148; // [rsp+210h] [rbp+108h]
  char *v149; // [rsp+218h] [rbp+110h]
  __int64 v150; // [rsp+220h] [rbp+118h]
  char *v151; // [rsp+228h] [rbp+120h]
  __int64 v152; // [rsp+230h] [rbp+128h]
  char *v153; // [rsp+238h] [rbp+130h]
  __int64 v154; // [rsp+240h] [rbp+138h]
  char *v155; // [rsp+248h] [rbp+140h]
  __int64 v156; // [rsp+250h] [rbp+148h]
  char *v157; // [rsp+258h] [rbp+150h]
  __int64 v158; // [rsp+260h] [rbp+158h]
  char *v159; // [rsp+268h] [rbp+160h]
  __int64 v160; // [rsp+270h] [rbp+168h]
  char *v161; // [rsp+278h] [rbp+170h]
  __int64 v162; // [rsp+280h] [rbp+178h]
  char *v163; // [rsp+288h] [rbp+180h]
  __int64 v164; // [rsp+290h] [rbp+188h]
  char *v165; // [rsp+298h] [rbp+190h]
  __int64 v166; // [rsp+2A0h] [rbp+198h]
  char *v167; // [rsp+2A8h] [rbp+1A0h]
  __int64 v168; // [rsp+2B0h] [rbp+1A8h]
  char *v169; // [rsp+2B8h] [rbp+1B0h]
  __int64 v170; // [rsp+2C0h] [rbp+1B8h]
  char *v171; // [rsp+2C8h] [rbp+1C0h]
  __int64 v172; // [rsp+2D0h] [rbp+1C8h]
  char *v173; // [rsp+2D8h] [rbp+1D0h]
  __int64 v174; // [rsp+2E0h] [rbp+1D8h]
  char *v175; // [rsp+2E8h] [rbp+1E0h]
  __int64 v176; // [rsp+2F0h] [rbp+1E8h]
  char *v177; // [rsp+2F8h] [rbp+1F0h]
  __int64 v178; // [rsp+300h] [rbp+1F8h]
  char *v179; // [rsp+308h] [rbp+200h]
  __int64 v180; // [rsp+310h] [rbp+208h]
  char *v181; // [rsp+318h] [rbp+210h]
  __int64 v182; // [rsp+320h] [rbp+218h]
  char *v183; // [rsp+328h] [rbp+220h]
  __int64 v184; // [rsp+330h] [rbp+228h]
  char *v185; // [rsp+338h] [rbp+230h]
  __int64 v186; // [rsp+340h] [rbp+238h]
  char *v187; // [rsp+348h] [rbp+240h]
  __int64 v188; // [rsp+350h] [rbp+248h]
  char *v189; // [rsp+358h] [rbp+250h]
  __int64 v190; // [rsp+360h] [rbp+258h]
  char *v191; // [rsp+368h] [rbp+260h]
  __int64 v192; // [rsp+370h] [rbp+268h]
  char *v193; // [rsp+378h] [rbp+270h]
  __int64 v194; // [rsp+380h] [rbp+278h]
  char *v195; // [rsp+388h] [rbp+280h]
  __int64 v196; // [rsp+390h] [rbp+288h]
  char *v197; // [rsp+398h] [rbp+290h]
  __int64 v198; // [rsp+3A0h] [rbp+298h]
  char *v199; // [rsp+3A8h] [rbp+2A0h]
  __int64 v200; // [rsp+3B0h] [rbp+2A8h]
  char *v201; // [rsp+3B8h] [rbp+2B0h]
  __int64 v202; // [rsp+3C0h] [rbp+2B8h]
  char *v203; // [rsp+3C8h] [rbp+2C0h]
  __int64 v204; // [rsp+3D0h] [rbp+2C8h]
  char *v205; // [rsp+3D8h] [rbp+2D0h]
  __int64 v206; // [rsp+3E0h] [rbp+2D8h]
  char *v207; // [rsp+3E8h] [rbp+2E0h]
  __int64 v208; // [rsp+3F0h] [rbp+2E8h]
  char *v209; // [rsp+3F8h] [rbp+2F0h]
  __int64 v210; // [rsp+400h] [rbp+2F8h]
  char *v211; // [rsp+408h] [rbp+300h]
  __int64 v212; // [rsp+410h] [rbp+308h]
  char *v213; // [rsp+418h] [rbp+310h]
  __int64 v214; // [rsp+420h] [rbp+318h]
  unsigned __int64 *v215; // [rsp+428h] [rbp+320h]
  __int64 v216; // [rsp+430h] [rbp+328h]
  unsigned __int64 *v217; // [rsp+438h] [rbp+330h]
  __int64 v218; // [rsp+440h] [rbp+338h]
  unsigned __int64 *v219; // [rsp+448h] [rbp+340h]
  __int64 v220; // [rsp+450h] [rbp+348h]
  unsigned __int64 *v221; // [rsp+458h] [rbp+350h]
  __int64 v222; // [rsp+460h] [rbp+358h]
  int v223; // [rsp+4A0h] [rbp+398h] BYREF

  v223 = a4;
  v85 = *(_QWORD *)&g_SystemUptime_s;
  v64 = -1LL;
  v88 = 4LL;
  v87 = &v223;
  v65 = 10;
  v89 = a5;
  v66 = a6;
  v90 = 16LL;
  if ( a6 )
  {
    v67 = -1LL;
    do
      ++v67;
    while ( a6[v67] );
    v68 = 2 * v67 + 2;
  }
  else
  {
    v68 = 10;
  }
  v92 = v68;
  v93 = 0;
  if ( !a6 )
    v66 = L"NULL";
  v69 = 5;
  v91 = v66;
  v70 = a7;
  if ( a7 )
  {
    v71 = -1LL;
    do
      ++v71;
    while ( a7[v71] );
    v72 = v71 + 1;
  }
  else
  {
    v72 = 5;
  }
  v95 = v72;
  v96 = 0;
  if ( !a7 )
    v70 = "NULL";
  v98 = 2LL;
  v94 = v70;
  v97 = &a8;
  v99 = &a9;
  v101 = &a10;
  v73 = a11;
  v100 = 4LL;
  v102 = 1LL;
  if ( a11 )
  {
    v74 = -1LL;
    do
      ++v74;
    while ( a11[v74] );
    v75 = v74 + 1;
  }
  else
  {
    v75 = 5;
  }
  v104 = v75;
  v105 = 0;
  if ( !a11 )
    v73 = "NULL";
  v103 = v73;
  v76 = a12;
  if ( a12 )
  {
    v77 = -1LL;
    do
      ++v77;
    while ( a12[v77] );
    v78 = v77 + 1;
  }
  else
  {
    v78 = 5;
  }
  v107 = v78;
  v108 = 0;
  if ( !a12 )
    v76 = "NULL";
  v106 = v76;
  v79 = a13;
  v80 = a13 == 0LL;
  if ( a13 )
  {
    v81 = -1LL;
    do
      ++v81;
    while ( a13[v81] );
    v69 = v81 + 1;
    v80 = a13 == 0LL;
  }
  if ( v80 )
    v79 = "NULL";
  v110 = v69;
  v109 = v79;
  v112 = a14;
  v114 = &a15;
  v116 = &v85;
  v118 = &a17;
  v120 = &a18;
  v122 = &a19;
  v124 = &a20;
  v126 = &a21;
  v128 = &a22;
  v82 = a23;
  v111 = 0;
  v113 = 16LL;
  v115 = 4LL;
  v117 = 8LL;
  v119 = 1LL;
  v121 = 8LL;
  v123 = 8LL;
  v125 = 4LL;
  v127 = 4LL;
  v129 = 4LL;
  v83 = a23 == 0LL;
  if ( a23 )
  {
    do
      ++v64;
    while ( a23[v64] );
    v65 = 2 * v64 + 2;
    v83 = a23 == 0LL;
  }
  if ( v83 )
    v82 = L"NULL";
  v131 = v65;
  v130 = v82;
  v133 = &a24;
  v135 = &a25;
  v137 = &a26;
  v139 = &a27;
  v141 = &a28;
  v143 = &a29;
  v145 = &a30;
  v147 = &a31;
  v149 = &a32;
  v151 = &a33;
  v153 = &a34;
  v155 = &a35;
  v157 = &a36;
  v159 = &a37;
  v161 = &a38;
  v163 = &a39;
  v165 = &a40;
  v167 = &a41;
  v169 = &a42;
  v171 = &a43;
  v173 = &a44;
  v175 = &a45;
  v177 = &a46;
  v179 = &a47;
  v181 = &a48;
  v183 = &a49;
  v132 = 0;
  v134 = 8LL;
  v136 = 8LL;
  v138 = 8LL;
  v140 = 8LL;
  v142 = 8LL;
  v144 = 8LL;
  v146 = 8LL;
  v148 = 8LL;
  v150 = 8LL;
  v152 = 8LL;
  v154 = 8LL;
  v156 = 8LL;
  v158 = 8LL;
  v160 = 8LL;
  v162 = 8LL;
  v164 = 8LL;
  v166 = 8LL;
  v168 = 8LL;
  v170 = 8LL;
  v172 = 8LL;
  v174 = 8LL;
  v176 = 8LL;
  v178 = 8LL;
  v180 = 8LL;
  v182 = 8LL;
  v184 = 8LL;
  v185 = &a50;
  v186 = 8LL;
  v187 = &a51;
  v188 = 8LL;
  v189 = &a52;
  v190 = 8LL;
  v191 = &a53;
  v193 = &a54;
  v195 = &a55;
  v197 = &a56;
  v199 = &a57;
  v201 = &a58;
  v203 = &a59;
  v205 = &a60;
  v207 = &a61;
  v209 = &a62;
  v211 = &a63;
  v213 = &a64;
  v215 = &STACK[0x688];
  v217 = &STACK[0x690];
  v219 = &STACK[0x698];
  v221 = &STACK[0x6A0];
  v192 = 8LL;
  v194 = 8LL;
  v196 = 8LL;
  v198 = 8LL;
  v200 = 8LL;
  v202 = 8LL;
  v204 = 8LL;
  v206 = 8LL;
  v208 = 8LL;
  v210 = 8LL;
  v212 = 8LL;
  v214 = 8LL;
  v216 = 8LL;
  v218 = 8LL;
  v220 = 8LL;
  v222 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v64, &EventNVMeNamespaceIoPerformance, 0LL, 0x42u, &v86);
}
