/*
 * XREFs of McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1400266A8
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x14004FD38 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        const wchar_t *a11,
        char a12,
        const char *a13,
        const char *a14,
        const char *a15,
        const wchar_t *a16,
        const char *a17,
        char a18,
        __int64 a19,
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
        const wchar_t *a35,
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
  char a64; // [rsp+740h] [rbp+638h] BYREF
  const wchar_t *v64; // rcx
  int v65; // r9d
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // edx
  int v69; // r8d
  const char *v70; // rcx
  __int64 v71; // rdx
  int v72; // edx
  const char *v73; // rcx
  __int64 v74; // rdx
  int v75; // edx
  const char *v76; // rcx
  __int64 v77; // rdx
  int v78; // edx
  const wchar_t *v79; // rcx
  __int64 v80; // rdx
  int v81; // edx
  const char *v82; // rcx
  bool v83; // zf
  __int64 v84; // rdx
  const wchar_t *v85; // rcx
  bool v86; // zf
  __int64 v88; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v89[16]; // [rsp+48h] [rbp-C0h] BYREF
  int *v90; // [rsp+58h] [rbp-B0h]
  __int64 v91; // [rsp+60h] [rbp-A8h]
  char *v92; // [rsp+68h] [rbp-A0h]
  __int64 v93; // [rsp+70h] [rbp-98h]
  char *v94; // [rsp+78h] [rbp-90h]
  __int64 v95; // [rsp+80h] [rbp-88h]
  char *v96; // [rsp+88h] [rbp-80h]
  __int64 v97; // [rsp+90h] [rbp-78h]
  __int64 v98; // [rsp+98h] [rbp-70h]
  __int64 v99; // [rsp+A0h] [rbp-68h]
  __int64 v100; // [rsp+A8h] [rbp-60h]
  __int64 v101; // [rsp+B0h] [rbp-58h]
  char *v102; // [rsp+B8h] [rbp-50h]
  __int64 v103; // [rsp+C0h] [rbp-48h]
  const wchar_t *v104; // [rsp+C8h] [rbp-40h]
  int v105; // [rsp+D0h] [rbp-38h]
  int v106; // [rsp+D4h] [rbp-34h]
  char *v107; // [rsp+D8h] [rbp-30h]
  __int64 v108; // [rsp+E0h] [rbp-28h]
  const char *v109; // [rsp+E8h] [rbp-20h]
  int v110; // [rsp+F0h] [rbp-18h]
  int v111; // [rsp+F4h] [rbp-14h]
  const char *v112; // [rsp+F8h] [rbp-10h]
  int v113; // [rsp+100h] [rbp-8h]
  int v114; // [rsp+104h] [rbp-4h]
  const char *v115; // [rsp+108h] [rbp+0h]
  int v116; // [rsp+110h] [rbp+8h]
  int v117; // [rsp+114h] [rbp+Ch]
  const wchar_t *v118; // [rsp+118h] [rbp+10h]
  int v119; // [rsp+120h] [rbp+18h]
  int v120; // [rsp+124h] [rbp+1Ch]
  const char *v121; // [rsp+128h] [rbp+20h]
  int v122; // [rsp+130h] [rbp+28h]
  int v123; // [rsp+134h] [rbp+2Ch]
  char *v124; // [rsp+138h] [rbp+30h]
  __int64 v125; // [rsp+140h] [rbp+38h]
  __int64 *v126; // [rsp+148h] [rbp+40h]
  __int64 v127; // [rsp+150h] [rbp+48h]
  char *v128; // [rsp+158h] [rbp+50h]
  __int64 v129; // [rsp+160h] [rbp+58h]
  char *v130; // [rsp+168h] [rbp+60h]
  __int64 v131; // [rsp+170h] [rbp+68h]
  char *v132; // [rsp+178h] [rbp+70h]
  __int64 v133; // [rsp+180h] [rbp+78h]
  char *v134; // [rsp+188h] [rbp+80h]
  __int64 v135; // [rsp+190h] [rbp+88h]
  char *v136; // [rsp+198h] [rbp+90h]
  __int64 v137; // [rsp+1A0h] [rbp+98h]
  char *v138; // [rsp+1A8h] [rbp+A0h]
  __int64 v139; // [rsp+1B0h] [rbp+A8h]
  char *v140; // [rsp+1B8h] [rbp+B0h]
  __int64 v141; // [rsp+1C0h] [rbp+B8h]
  char *v142; // [rsp+1C8h] [rbp+C0h]
  __int64 v143; // [rsp+1D0h] [rbp+C8h]
  char *v144; // [rsp+1D8h] [rbp+D0h]
  __int64 v145; // [rsp+1E0h] [rbp+D8h]
  char *v146; // [rsp+1E8h] [rbp+E0h]
  __int64 v147; // [rsp+1F0h] [rbp+E8h]
  char *v148; // [rsp+1F8h] [rbp+F0h]
  __int64 v149; // [rsp+200h] [rbp+F8h]
  char *v150; // [rsp+208h] [rbp+100h]
  __int64 v151; // [rsp+210h] [rbp+108h]
  char *v152; // [rsp+218h] [rbp+110h]
  __int64 v153; // [rsp+220h] [rbp+118h]
  char *v154; // [rsp+228h] [rbp+120h]
  __int64 v155; // [rsp+230h] [rbp+128h]
  char *v156; // [rsp+238h] [rbp+130h]
  __int64 v157; // [rsp+240h] [rbp+138h]
  const wchar_t *v158; // [rsp+248h] [rbp+140h]
  int v159; // [rsp+250h] [rbp+148h]
  int v160; // [rsp+254h] [rbp+14Ch]
  char *v161; // [rsp+258h] [rbp+150h]
  __int64 v162; // [rsp+260h] [rbp+158h]
  char *v163; // [rsp+268h] [rbp+160h]
  __int64 v164; // [rsp+270h] [rbp+168h]
  char *v165; // [rsp+278h] [rbp+170h]
  __int64 v166; // [rsp+280h] [rbp+178h]
  char *v167; // [rsp+288h] [rbp+180h]
  __int64 v168; // [rsp+290h] [rbp+188h]
  char *v169; // [rsp+298h] [rbp+190h]
  __int64 v170; // [rsp+2A0h] [rbp+198h]
  char *v171; // [rsp+2A8h] [rbp+1A0h]
  __int64 v172; // [rsp+2B0h] [rbp+1A8h]
  char *v173; // [rsp+2B8h] [rbp+1B0h]
  __int64 v174; // [rsp+2C0h] [rbp+1B8h]
  char *v175; // [rsp+2C8h] [rbp+1C0h]
  __int64 v176; // [rsp+2D0h] [rbp+1C8h]
  char *v177; // [rsp+2D8h] [rbp+1D0h]
  __int64 v178; // [rsp+2E0h] [rbp+1D8h]
  char *v179; // [rsp+2E8h] [rbp+1E0h]
  __int64 v180; // [rsp+2F0h] [rbp+1E8h]
  char *v181; // [rsp+2F8h] [rbp+1F0h]
  __int64 v182; // [rsp+300h] [rbp+1F8h]
  char *v183; // [rsp+308h] [rbp+200h]
  __int64 v184; // [rsp+310h] [rbp+208h]
  char *v185; // [rsp+318h] [rbp+210h]
  __int64 v186; // [rsp+320h] [rbp+218h]
  char *v187; // [rsp+328h] [rbp+220h]
  __int64 v188; // [rsp+330h] [rbp+228h]
  char *v189; // [rsp+338h] [rbp+230h]
  __int64 v190; // [rsp+340h] [rbp+238h]
  char *v191; // [rsp+348h] [rbp+240h]
  __int64 v192; // [rsp+350h] [rbp+248h]
  char *v193; // [rsp+358h] [rbp+250h]
  __int64 v194; // [rsp+360h] [rbp+258h]
  char *v195; // [rsp+368h] [rbp+260h]
  __int64 v196; // [rsp+370h] [rbp+268h]
  char *v197; // [rsp+378h] [rbp+270h]
  __int64 v198; // [rsp+380h] [rbp+278h]
  char *v199; // [rsp+388h] [rbp+280h]
  __int64 v200; // [rsp+390h] [rbp+288h]
  char *v201; // [rsp+398h] [rbp+290h]
  __int64 v202; // [rsp+3A0h] [rbp+298h]
  char *v203; // [rsp+3A8h] [rbp+2A0h]
  __int64 v204; // [rsp+3B0h] [rbp+2A8h]
  char *v205; // [rsp+3B8h] [rbp+2B0h]
  __int64 v206; // [rsp+3C0h] [rbp+2B8h]
  char *v207; // [rsp+3C8h] [rbp+2C0h]
  __int64 v208; // [rsp+3D0h] [rbp+2C8h]
  char *v209; // [rsp+3D8h] [rbp+2D0h]
  __int64 v210; // [rsp+3E0h] [rbp+2D8h]
  char *v211; // [rsp+3E8h] [rbp+2E0h]
  __int64 v212; // [rsp+3F0h] [rbp+2E8h]
  char *v213; // [rsp+3F8h] [rbp+2F0h]
  __int64 v214; // [rsp+400h] [rbp+2F8h]
  char *v215; // [rsp+408h] [rbp+300h]
  __int64 v216; // [rsp+410h] [rbp+308h]
  char *v217; // [rsp+418h] [rbp+310h]
  __int64 v218; // [rsp+420h] [rbp+318h]
  unsigned __int64 *v219; // [rsp+428h] [rbp+320h]
  __int64 v220; // [rsp+430h] [rbp+328h]
  unsigned __int64 *v221; // [rsp+438h] [rbp+330h]
  __int64 v222; // [rsp+440h] [rbp+338h]
  unsigned __int64 *v223; // [rsp+448h] [rbp+340h]
  __int64 v224; // [rsp+450h] [rbp+348h]
  unsigned __int64 *v225; // [rsp+458h] [rbp+350h]
  __int64 v226; // [rsp+460h] [rbp+358h]
  unsigned __int64 *v227; // [rsp+468h] [rbp+360h]
  __int64 v228; // [rsp+470h] [rbp+368h]
  unsigned __int64 *v229; // [rsp+478h] [rbp+370h]
  __int64 v230; // [rsp+480h] [rbp+378h]
  unsigned __int64 *v231; // [rsp+488h] [rbp+380h]
  __int64 v232; // [rsp+490h] [rbp+388h]
  unsigned __int64 *v233; // [rsp+498h] [rbp+390h]
  __int64 v234; // [rsp+4A0h] [rbp+398h]
  unsigned __int64 *v235; // [rsp+4A8h] [rbp+3A0h]
  __int64 v236; // [rsp+4B0h] [rbp+3A8h]
  unsigned __int64 *v237; // [rsp+4B8h] [rbp+3B0h]
  __int64 v238; // [rsp+4C0h] [rbp+3B8h]
  unsigned __int64 *v239; // [rsp+4C8h] [rbp+3C0h]
  __int64 v240; // [rsp+4D0h] [rbp+3C8h]
  unsigned __int64 *v241; // [rsp+4D8h] [rbp+3D0h]
  __int64 v242; // [rsp+4E0h] [rbp+3D8h]
  unsigned __int64 *v243; // [rsp+4E8h] [rbp+3E0h]
  __int64 v244; // [rsp+4F0h] [rbp+3E8h]
  unsigned __int64 *v245; // [rsp+4F8h] [rbp+3F0h]
  __int64 v246; // [rsp+500h] [rbp+3F8h]
  unsigned __int64 *v247; // [rsp+508h] [rbp+400h]
  __int64 v248; // [rsp+510h] [rbp+408h]
  unsigned __int64 *v249; // [rsp+518h] [rbp+410h]
  __int64 v250; // [rsp+520h] [rbp+418h]
  int v251; // [rsp+560h] [rbp+458h] BYREF

  v251 = a4;
  v64 = a11;
  v88 = *(_QWORD *)&g_SystemUptime_s;
  v90 = &v251;
  v92 = &a5;
  v65 = 10;
  v91 = 4LL;
  v94 = &a6;
  v96 = &a7;
  v98 = a8;
  v100 = a9;
  v102 = &a10;
  v66 = -1LL;
  v93 = 1LL;
  v95 = 1LL;
  v97 = 1LL;
  v99 = 16LL;
  v101 = 16LL;
  v103 = 4LL;
  if ( a11 )
  {
    v67 = -1LL;
    do
      ++v67;
    while ( a11[v67] );
    v68 = 2 * v67 + 2;
  }
  else
  {
    v68 = 10;
  }
  v105 = v68;
  v106 = 0;
  if ( !a11 )
    v64 = L"NULL";
  v108 = 4LL;
  v104 = v64;
  v69 = 5;
  v107 = &a12;
  v70 = a13;
  if ( a13 )
  {
    v71 = -1LL;
    do
      ++v71;
    while ( a13[v71] );
    v72 = v71 + 1;
  }
  else
  {
    v72 = 5;
  }
  v110 = v72;
  v111 = 0;
  if ( !a13 )
    v70 = "NULL";
  v109 = v70;
  v73 = a14;
  if ( a14 )
  {
    v74 = -1LL;
    do
      ++v74;
    while ( a14[v74] );
    v75 = v74 + 1;
  }
  else
  {
    v75 = 5;
  }
  v113 = v75;
  v114 = 0;
  if ( !a14 )
    v73 = "NULL";
  v112 = v73;
  v76 = a15;
  if ( a15 )
  {
    v77 = -1LL;
    do
      ++v77;
    while ( a15[v77] );
    v78 = v77 + 1;
  }
  else
  {
    v78 = 5;
  }
  v116 = v78;
  v117 = 0;
  if ( !a15 )
    v76 = "NULL";
  v115 = v76;
  v79 = a16;
  if ( a16 )
  {
    v80 = -1LL;
    do
      ++v80;
    while ( a16[v80] );
    v81 = 2 * v80 + 2;
  }
  else
  {
    v81 = 10;
  }
  v119 = v81;
  v120 = 0;
  if ( !a16 )
    v79 = L"NULL";
  v118 = v79;
  v82 = a17;
  v83 = a17 == 0LL;
  if ( a17 )
  {
    v84 = -1LL;
    do
      ++v84;
    while ( a17[v84] );
    v69 = v84 + 1;
    v83 = a17 == 0LL;
  }
  if ( v83 )
    v82 = "NULL";
  v122 = v69;
  v121 = v82;
  v124 = &a18;
  v126 = &v88;
  v128 = &a20;
  v130 = &a21;
  v132 = &a22;
  v134 = &a23;
  v136 = &a24;
  v138 = &a25;
  v140 = &a26;
  v142 = &a27;
  v144 = &a28;
  v146 = &a29;
  v148 = &a30;
  v150 = &a31;
  v152 = &a32;
  v154 = &a33;
  v156 = &a34;
  v85 = a35;
  v123 = 0;
  v125 = 4LL;
  v127 = 8LL;
  v129 = 1LL;
  v131 = 8LL;
  v133 = 8LL;
  v135 = 4LL;
  v137 = 4LL;
  v139 = 8LL;
  v141 = 8LL;
  v143 = 8LL;
  v145 = 8LL;
  v147 = 8LL;
  v149 = 8LL;
  v151 = 8LL;
  v153 = 4LL;
  v155 = 4LL;
  v157 = 4LL;
  v86 = a35 == 0LL;
  if ( a35 )
  {
    do
      ++v66;
    while ( a35[v66] );
    v65 = 2 * v66 + 2;
    v86 = a35 == 0LL;
  }
  v159 = v65;
  v161 = &a36;
  if ( v86 )
    v85 = L"NULL";
  v158 = v85;
  v163 = &a37;
  v165 = &a38;
  v167 = &a39;
  v169 = &a40;
  v171 = &a41;
  v173 = &a42;
  v175 = &a43;
  v177 = &a44;
  v179 = &a45;
  v181 = &a46;
  v183 = &a47;
  v185 = &a48;
  v187 = &a49;
  v189 = &a50;
  v191 = &a51;
  v193 = &a52;
  v195 = &a53;
  v197 = &a54;
  v199 = &a55;
  v201 = &a56;
  v203 = &a57;
  v205 = &a58;
  v207 = &a59;
  v209 = &a60;
  v211 = &a61;
  v160 = 0;
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
  v186 = 8LL;
  v188 = 8LL;
  v190 = 8LL;
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
  v213 = &a62;
  v214 = 8LL;
  v215 = &a63;
  v216 = 8LL;
  v217 = &a64;
  v218 = 8LL;
  v219 = &STACK[0x748];
  v221 = &STACK[0x750];
  v223 = &STACK[0x758];
  v225 = &STACK[0x760];
  v227 = &STACK[0x768];
  v229 = &STACK[0x770];
  v231 = &STACK[0x778];
  v233 = &STACK[0x780];
  v235 = &STACK[0x788];
  v237 = &STACK[0x790];
  v239 = &STACK[0x798];
  v241 = &STACK[0x7A0];
  v243 = &STACK[0x7A8];
  v245 = &STACK[0x7B0];
  v247 = &STACK[0x7B8];
  v249 = &STACK[0x7C0];
  v220 = 8LL;
  v222 = 8LL;
  v224 = 8LL;
  v226 = 8LL;
  v228 = 8LL;
  v230 = 8LL;
  v232 = 8LL;
  v234 = 8LL;
  v236 = 8LL;
  v238 = 8LL;
  v240 = 8LL;
  v242 = 8LL;
  v244 = 8LL;
  v246 = 8LL;
  v248 = 8LL;
  v250 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v85, &EventUnitPerformance, 0LL, 78LL, v89);
}
