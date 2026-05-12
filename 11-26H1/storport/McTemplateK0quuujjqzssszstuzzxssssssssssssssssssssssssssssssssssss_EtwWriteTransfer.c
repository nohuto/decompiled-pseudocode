/*
 * XREFs of McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer @ 0x1400B4A10
 * Callers:
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1400C2778 (StorpTelemetrySendUnitIoSizeDistributionData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer(
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
        const char *a12,
        const char *a13,
        const char *a14,
        const wchar_t *a15,
        const char *a16,
        char a17,
        int a18,
        int a19,
        int a20,
        char a21,
        const char *a22,
        const char *a23,
        const char *a24,
        const char *a25,
        const char *a26,
        const char *a27,
        const char *a28,
        const char *a29,
        const char *a30,
        const char *a31,
        const char *a32,
        const char *a33,
        const char *a34,
        const char *a35,
        const char *a36,
        const char *a37,
        const char *a38,
        const char *a39,
        const char *a40,
        const char *a41,
        const char *a42,
        const char *a43,
        const char *a44,
        const char *a45,
        const char *a46,
        const char *a47,
        const char *a48,
        const char *a49,
        const char *a50,
        const char *a51,
        const char *a52,
        const char *a53,
        const char *a54,
        const char *a55,
        const char *a56,
        const char *a57)
{
  const wchar_t *v57; // rdx
  __int64 v58; // rcx
  int v59; // r9d
  __int64 v60; // rax
  int v61; // eax
  int v62; // eax
  const char *v63; // rdx
  __int64 v64; // r8
  int v65; // r8d
  const char *v66; // rdx
  __int64 v67; // r8
  int v68; // r8d
  const char *v69; // rdx
  __int64 v70; // r8
  int v71; // r8d
  const wchar_t *v72; // rdx
  bool v73; // zf
  __int64 v74; // r8
  const char *v75; // r8
  __int64 v76; // rdx
  int v77; // edx
  const char *v78; // rdx
  __int64 v79; // r8
  int v80; // r8d
  const char *v81; // rdx
  __int64 v82; // r8
  int v83; // r8d
  const char *v84; // rdx
  __int64 v85; // r8
  int v86; // r8d
  const char *v87; // rdx
  __int64 v88; // r8
  int v89; // r8d
  const char *v90; // rdx
  __int64 v91; // r8
  int v92; // r8d
  const char *v93; // rdx
  __int64 v94; // r8
  int v95; // r8d
  const char *v96; // rdx
  __int64 v97; // r8
  int v98; // r8d
  const char *v99; // rdx
  __int64 v100; // r8
  int v101; // r8d
  const char *v102; // rdx
  __int64 v103; // r8
  int v104; // r8d
  const char *v105; // rdx
  __int64 v106; // r8
  int v107; // r8d
  const char *v108; // rdx
  __int64 v109; // r8
  int v110; // r8d
  const char *v111; // rdx
  __int64 v112; // r8
  int v113; // r8d
  const char *v114; // rdx
  __int64 v115; // r8
  int v116; // r8d
  const char *v117; // rdx
  __int64 v118; // r8
  int v119; // r8d
  const char *v120; // rdx
  __int64 v121; // r8
  int v122; // r8d
  const char *v123; // rdx
  __int64 v124; // r8
  int v125; // r8d
  const char *v126; // rdx
  __int64 v127; // r8
  int v128; // r8d
  const char *v129; // rdx
  __int64 v130; // r8
  int v131; // r8d
  const char *v132; // rdx
  __int64 v133; // r8
  int v134; // r8d
  const char *v135; // rdx
  __int64 v136; // r8
  int v137; // r8d
  const char *v138; // rdx
  __int64 v139; // r8
  int v140; // r8d
  const char *v141; // rdx
  __int64 v142; // r8
  int v143; // r8d
  const char *v144; // rdx
  __int64 v145; // r8
  int v146; // r8d
  const char *v147; // rdx
  __int64 v148; // r8
  int v149; // r8d
  const char *v150; // rdx
  __int64 v151; // r8
  int v152; // r8d
  const char *v153; // rdx
  __int64 v154; // r8
  int v155; // r8d
  const char *v156; // rdx
  __int64 v157; // r8
  int v158; // r8d
  const char *v159; // rdx
  __int64 v160; // r8
  int v161; // r8d
  const char *v162; // rdx
  __int64 v163; // r8
  int v164; // r8d
  const char *v165; // rdx
  __int64 v166; // r8
  int v167; // r8d
  const char *v168; // rdx
  __int64 v169; // r8
  int v170; // r8d
  const char *v171; // rdx
  __int64 v172; // r8
  int v173; // r8d
  const char *v174; // rdx
  __int64 v175; // r8
  int v176; // r8d
  const char *v177; // rdx
  __int64 v178; // r8
  int v179; // r8d
  const char *v180; // rdx
  __int64 v181; // r8
  int v182; // r8d
  const char *v183; // rdx
  bool v184; // zf
  char v186; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v187; // [rsp+40h] [rbp-C0h] BYREF
  int *v188; // [rsp+50h] [rbp-B0h]
  __int64 v189; // [rsp+58h] [rbp-A8h]
  char *v190; // [rsp+60h] [rbp-A0h]
  __int64 v191; // [rsp+68h] [rbp-98h]
  char *v192; // [rsp+70h] [rbp-90h]
  __int64 v193; // [rsp+78h] [rbp-88h]
  char *v194; // [rsp+80h] [rbp-80h]
  __int64 v195; // [rsp+88h] [rbp-78h]
  __int64 v196; // [rsp+90h] [rbp-70h]
  __int64 v197; // [rsp+98h] [rbp-68h]
  __int64 v198; // [rsp+A0h] [rbp-60h]
  __int64 v199; // [rsp+A8h] [rbp-58h]
  char *v200; // [rsp+B0h] [rbp-50h]
  __int64 v201; // [rsp+B8h] [rbp-48h]
  const wchar_t *v202; // [rsp+C0h] [rbp-40h]
  int v203; // [rsp+C8h] [rbp-38h]
  int v204; // [rsp+CCh] [rbp-34h]
  const char *v205; // [rsp+D0h] [rbp-30h]
  int v206; // [rsp+D8h] [rbp-28h]
  int v207; // [rsp+DCh] [rbp-24h]
  const char *v208; // [rsp+E0h] [rbp-20h]
  int v209; // [rsp+E8h] [rbp-18h]
  int v210; // [rsp+ECh] [rbp-14h]
  const char *v211; // [rsp+F0h] [rbp-10h]
  int v212; // [rsp+F8h] [rbp-8h]
  int v213; // [rsp+FCh] [rbp-4h]
  const wchar_t *v214; // [rsp+100h] [rbp+0h]
  int v215; // [rsp+108h] [rbp+8h]
  int v216; // [rsp+10Ch] [rbp+Ch]
  const char *v217; // [rsp+110h] [rbp+10h]
  int v218; // [rsp+118h] [rbp+18h]
  int v219; // [rsp+11Ch] [rbp+1Ch]
  char *v220; // [rsp+120h] [rbp+20h]
  __int64 v221; // [rsp+128h] [rbp+28h]
  char *v222; // [rsp+130h] [rbp+30h]
  __int64 v223; // [rsp+138h] [rbp+38h]
  const wchar_t *v224; // [rsp+140h] [rbp+40h]
  __int64 v225; // [rsp+148h] [rbp+48h]
  const wchar_t *v226; // [rsp+150h] [rbp+50h]
  __int64 v227; // [rsp+158h] [rbp+58h]
  char *v228; // [rsp+160h] [rbp+60h]
  __int64 v229; // [rsp+168h] [rbp+68h]
  const char *v230; // [rsp+170h] [rbp+70h]
  int v231; // [rsp+178h] [rbp+78h]
  int v232; // [rsp+17Ch] [rbp+7Ch]
  const char *v233; // [rsp+180h] [rbp+80h]
  int v234; // [rsp+188h] [rbp+88h]
  int v235; // [rsp+18Ch] [rbp+8Ch]
  const char *v236; // [rsp+190h] [rbp+90h]
  int v237; // [rsp+198h] [rbp+98h]
  int v238; // [rsp+19Ch] [rbp+9Ch]
  const char *v239; // [rsp+1A0h] [rbp+A0h]
  int v240; // [rsp+1A8h] [rbp+A8h]
  int v241; // [rsp+1ACh] [rbp+ACh]
  const char *v242; // [rsp+1B0h] [rbp+B0h]
  int v243; // [rsp+1B8h] [rbp+B8h]
  int v244; // [rsp+1BCh] [rbp+BCh]
  const char *v245; // [rsp+1C0h] [rbp+C0h]
  int v246; // [rsp+1C8h] [rbp+C8h]
  int v247; // [rsp+1CCh] [rbp+CCh]
  const char *v248; // [rsp+1D0h] [rbp+D0h]
  int v249; // [rsp+1D8h] [rbp+D8h]
  int v250; // [rsp+1DCh] [rbp+DCh]
  const char *v251; // [rsp+1E0h] [rbp+E0h]
  int v252; // [rsp+1E8h] [rbp+E8h]
  int v253; // [rsp+1ECh] [rbp+ECh]
  const char *v254; // [rsp+1F0h] [rbp+F0h]
  int v255; // [rsp+1F8h] [rbp+F8h]
  int v256; // [rsp+1FCh] [rbp+FCh]
  const char *v257; // [rsp+200h] [rbp+100h]
  int v258; // [rsp+208h] [rbp+108h]
  int v259; // [rsp+20Ch] [rbp+10Ch]
  const char *v260; // [rsp+210h] [rbp+110h]
  int v261; // [rsp+218h] [rbp+118h]
  int v262; // [rsp+21Ch] [rbp+11Ch]
  const char *v263; // [rsp+220h] [rbp+120h]
  int v264; // [rsp+228h] [rbp+128h]
  int v265; // [rsp+22Ch] [rbp+12Ch]
  const char *v266; // [rsp+230h] [rbp+130h]
  int v267; // [rsp+238h] [rbp+138h]
  int v268; // [rsp+23Ch] [rbp+13Ch]
  const char *v269; // [rsp+240h] [rbp+140h]
  int v270; // [rsp+248h] [rbp+148h]
  int v271; // [rsp+24Ch] [rbp+14Ch]
  const char *v272; // [rsp+250h] [rbp+150h]
  int v273; // [rsp+258h] [rbp+158h]
  int v274; // [rsp+25Ch] [rbp+15Ch]
  const char *v275; // [rsp+260h] [rbp+160h]
  int v276; // [rsp+268h] [rbp+168h]
  int v277; // [rsp+26Ch] [rbp+16Ch]
  const char *v278; // [rsp+270h] [rbp+170h]
  int v279; // [rsp+278h] [rbp+178h]
  int v280; // [rsp+27Ch] [rbp+17Ch]
  const char *v281; // [rsp+280h] [rbp+180h]
  int v282; // [rsp+288h] [rbp+188h]
  int v283; // [rsp+28Ch] [rbp+18Ch]
  const char *v284; // [rsp+290h] [rbp+190h]
  int v285; // [rsp+298h] [rbp+198h]
  int v286; // [rsp+29Ch] [rbp+19Ch]
  const char *v287; // [rsp+2A0h] [rbp+1A0h]
  int v288; // [rsp+2A8h] [rbp+1A8h]
  int v289; // [rsp+2ACh] [rbp+1ACh]
  const char *v290; // [rsp+2B0h] [rbp+1B0h]
  int v291; // [rsp+2B8h] [rbp+1B8h]
  int v292; // [rsp+2BCh] [rbp+1BCh]
  const char *v293; // [rsp+2C0h] [rbp+1C0h]
  int v294; // [rsp+2C8h] [rbp+1C8h]
  int v295; // [rsp+2CCh] [rbp+1CCh]
  const char *v296; // [rsp+2D0h] [rbp+1D0h]
  int v297; // [rsp+2D8h] [rbp+1D8h]
  int v298; // [rsp+2DCh] [rbp+1DCh]
  const char *v299; // [rsp+2E0h] [rbp+1E0h]
  int v300; // [rsp+2E8h] [rbp+1E8h]
  int v301; // [rsp+2ECh] [rbp+1ECh]
  const char *v302; // [rsp+2F0h] [rbp+1F0h]
  int v303; // [rsp+2F8h] [rbp+1F8h]
  int v304; // [rsp+2FCh] [rbp+1FCh]
  const char *v305; // [rsp+300h] [rbp+200h]
  int v306; // [rsp+308h] [rbp+208h]
  int v307; // [rsp+30Ch] [rbp+20Ch]
  const char *v308; // [rsp+310h] [rbp+210h]
  int v309; // [rsp+318h] [rbp+218h]
  int v310; // [rsp+31Ch] [rbp+21Ch]
  const char *v311; // [rsp+320h] [rbp+220h]
  int v312; // [rsp+328h] [rbp+228h]
  int v313; // [rsp+32Ch] [rbp+22Ch]
  const char *v314; // [rsp+330h] [rbp+230h]
  int v315; // [rsp+338h] [rbp+238h]
  int v316; // [rsp+33Ch] [rbp+23Ch]
  const char *v317; // [rsp+340h] [rbp+240h]
  int v318; // [rsp+348h] [rbp+248h]
  int v319; // [rsp+34Ch] [rbp+24Ch]
  const char *v320; // [rsp+350h] [rbp+250h]
  int v321; // [rsp+358h] [rbp+258h]
  int v322; // [rsp+35Ch] [rbp+25Ch]
  const char *v323; // [rsp+360h] [rbp+260h]
  int v324; // [rsp+368h] [rbp+268h]
  int v325; // [rsp+36Ch] [rbp+26Ch]
  const char *v326; // [rsp+370h] [rbp+270h]
  int v327; // [rsp+378h] [rbp+278h]
  int v328; // [rsp+37Ch] [rbp+27Ch]
  const char *v329; // [rsp+380h] [rbp+280h]
  int v330; // [rsp+388h] [rbp+288h]
  int v331; // [rsp+38Ch] [rbp+28Ch]
  const char *v332; // [rsp+390h] [rbp+290h]
  int v333; // [rsp+398h] [rbp+298h]
  int v334; // [rsp+39Ch] [rbp+29Ch]
  const char *v335; // [rsp+3A0h] [rbp+2A0h]
  int v336; // [rsp+3A8h] [rbp+2A8h]
  int v337; // [rsp+3ACh] [rbp+2ACh]
  int v338; // [rsp+3E8h] [rbp+2E8h] BYREF

  v338 = a4;
  v57 = a11;
  v188 = &v338;
  v186 = 2;
  v190 = &a5;
  v58 = -1LL;
  v189 = 4LL;
  v192 = &a6;
  v194 = &a7;
  v59 = 10;
  v196 = a8;
  v198 = a9;
  v200 = &a10;
  v191 = 1LL;
  v193 = 1LL;
  v195 = 1LL;
  v197 = 16LL;
  v199 = 16LL;
  v201 = 4LL;
  if ( a11 )
  {
    v60 = -1LL;
    do
      ++v60;
    while ( a11[v60] );
    v61 = 2 * v60 + 2;
  }
  else
  {
    v61 = 10;
  }
  v203 = v61;
  v204 = 0;
  if ( !a11 )
    v57 = L"NULL";
  v62 = 5;
  v202 = v57;
  v63 = a12;
  if ( a12 )
  {
    v64 = -1LL;
    do
      ++v64;
    while ( a12[v64] );
    v65 = v64 + 1;
  }
  else
  {
    v65 = 5;
  }
  v206 = v65;
  v207 = 0;
  if ( !a12 )
    v63 = "NULL";
  v205 = v63;
  v66 = a13;
  if ( a13 )
  {
    v67 = -1LL;
    do
      ++v67;
    while ( a13[v67] );
    v68 = v67 + 1;
  }
  else
  {
    v68 = 5;
  }
  v209 = v68;
  v210 = 0;
  if ( !a13 )
    v66 = "NULL";
  v208 = v66;
  v69 = a14;
  if ( a14 )
  {
    v70 = -1LL;
    do
      ++v70;
    while ( a14[v70] );
    v71 = v70 + 1;
  }
  else
  {
    v71 = 5;
  }
  v212 = v71;
  v213 = 0;
  if ( !a14 )
    v69 = "NULL";
  v211 = v69;
  v72 = a15;
  v73 = a15 == 0LL;
  if ( a15 )
  {
    v74 = -1LL;
    do
      ++v74;
    while ( a15[v74] );
    v59 = 2 * v74 + 2;
    v73 = a15 == 0LL;
  }
  v75 = a16;
  if ( v73 )
    v72 = L"NULL";
  v214 = v72;
  v215 = v59;
  v216 = 0;
  if ( a16 )
  {
    v76 = -1LL;
    do
      ++v76;
    while ( a16[v76] );
    v77 = v76 + 1;
  }
  else
  {
    v77 = 5;
  }
  v218 = v77;
  v219 = 0;
  v220 = &a17;
  if ( !a16 )
    v75 = "NULL";
  v217 = v75;
  v222 = &v186;
  v224 = L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+";
  v226 = L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms";
  v228 = &a21;
  v78 = a22;
  v221 = 4LL;
  v223 = 1LL;
  v225 = 86LL;
  v227 = 196LL;
  v229 = 8LL;
  if ( a22 )
  {
    v79 = -1LL;
    do
      ++v79;
    while ( a22[v79] );
    v80 = v79 + 1;
  }
  else
  {
    v80 = 5;
  }
  v231 = v80;
  v232 = 0;
  if ( !a22 )
    v78 = "NULL";
  v230 = v78;
  v81 = a23;
  if ( a23 )
  {
    v82 = -1LL;
    do
      ++v82;
    while ( a23[v82] );
    v83 = v82 + 1;
  }
  else
  {
    v83 = 5;
  }
  v234 = v83;
  v235 = 0;
  if ( !a23 )
    v81 = "NULL";
  v233 = v81;
  v84 = a24;
  if ( a24 )
  {
    v85 = -1LL;
    do
      ++v85;
    while ( a24[v85] );
    v86 = v85 + 1;
  }
  else
  {
    v86 = 5;
  }
  v237 = v86;
  v238 = 0;
  if ( !a24 )
    v84 = "NULL";
  v236 = v84;
  v87 = a25;
  if ( a25 )
  {
    v88 = -1LL;
    do
      ++v88;
    while ( a25[v88] );
    v89 = v88 + 1;
  }
  else
  {
    v89 = 5;
  }
  v240 = v89;
  v241 = 0;
  if ( !a25 )
    v87 = "NULL";
  v239 = v87;
  v90 = a26;
  if ( a26 )
  {
    v91 = -1LL;
    do
      ++v91;
    while ( a26[v91] );
    v92 = v91 + 1;
  }
  else
  {
    v92 = 5;
  }
  v243 = v92;
  v244 = 0;
  if ( !a26 )
    v90 = "NULL";
  v242 = v90;
  v93 = a27;
  if ( a27 )
  {
    v94 = -1LL;
    do
      ++v94;
    while ( a27[v94] );
    v95 = v94 + 1;
  }
  else
  {
    v95 = 5;
  }
  v246 = v95;
  v247 = 0;
  if ( !a27 )
    v93 = "NULL";
  v245 = v93;
  v96 = a28;
  if ( a28 )
  {
    v97 = -1LL;
    do
      ++v97;
    while ( a28[v97] );
    v98 = v97 + 1;
  }
  else
  {
    v98 = 5;
  }
  v249 = v98;
  v250 = 0;
  if ( !a28 )
    v96 = "NULL";
  v248 = v96;
  v99 = a29;
  if ( a29 )
  {
    v100 = -1LL;
    do
      ++v100;
    while ( a29[v100] );
    v101 = v100 + 1;
  }
  else
  {
    v101 = 5;
  }
  v252 = v101;
  v253 = 0;
  if ( !a29 )
    v99 = "NULL";
  v251 = v99;
  v102 = a30;
  if ( a30 )
  {
    v103 = -1LL;
    do
      ++v103;
    while ( a30[v103] );
    v104 = v103 + 1;
  }
  else
  {
    v104 = 5;
  }
  v255 = v104;
  v256 = 0;
  if ( !a30 )
    v102 = "NULL";
  v254 = v102;
  v105 = a31;
  if ( a31 )
  {
    v106 = -1LL;
    do
      ++v106;
    while ( a31[v106] );
    v107 = v106 + 1;
  }
  else
  {
    v107 = 5;
  }
  v258 = v107;
  v259 = 0;
  if ( !a31 )
    v105 = "NULL";
  v257 = v105;
  v108 = a32;
  if ( a32 )
  {
    v109 = -1LL;
    do
      ++v109;
    while ( a32[v109] );
    v110 = v109 + 1;
  }
  else
  {
    v110 = 5;
  }
  v261 = v110;
  v262 = 0;
  if ( !a32 )
    v108 = "NULL";
  v260 = v108;
  v111 = a33;
  if ( a33 )
  {
    v112 = -1LL;
    do
      ++v112;
    while ( a33[v112] );
    v113 = v112 + 1;
  }
  else
  {
    v113 = 5;
  }
  v264 = v113;
  v265 = 0;
  if ( !a33 )
    v111 = "NULL";
  v263 = v111;
  v114 = a34;
  if ( a34 )
  {
    v115 = -1LL;
    do
      ++v115;
    while ( a34[v115] );
    v116 = v115 + 1;
  }
  else
  {
    v116 = 5;
  }
  v267 = v116;
  v268 = 0;
  if ( !a34 )
    v114 = "NULL";
  v266 = v114;
  v117 = a35;
  if ( a35 )
  {
    v118 = -1LL;
    do
      ++v118;
    while ( a35[v118] );
    v119 = v118 + 1;
  }
  else
  {
    v119 = 5;
  }
  v270 = v119;
  v271 = 0;
  if ( !a35 )
    v117 = "NULL";
  v269 = v117;
  v120 = a36;
  if ( a36 )
  {
    v121 = -1LL;
    do
      ++v121;
    while ( a36[v121] );
    v122 = v121 + 1;
  }
  else
  {
    v122 = 5;
  }
  v273 = v122;
  v274 = 0;
  if ( !a36 )
    v120 = "NULL";
  v272 = v120;
  v123 = a37;
  if ( a37 )
  {
    v124 = -1LL;
    do
      ++v124;
    while ( a37[v124] );
    v125 = v124 + 1;
  }
  else
  {
    v125 = 5;
  }
  v276 = v125;
  v277 = 0;
  if ( !a37 )
    v123 = "NULL";
  v275 = v123;
  v126 = a38;
  if ( a38 )
  {
    v127 = -1LL;
    do
      ++v127;
    while ( a38[v127] );
    v128 = v127 + 1;
  }
  else
  {
    v128 = 5;
  }
  v279 = v128;
  v280 = 0;
  if ( !a38 )
    v126 = "NULL";
  v278 = v126;
  v129 = a39;
  if ( a39 )
  {
    v130 = -1LL;
    do
      ++v130;
    while ( a39[v130] );
    v131 = v130 + 1;
  }
  else
  {
    v131 = 5;
  }
  v282 = v131;
  v283 = 0;
  if ( !a39 )
    v129 = "NULL";
  v281 = v129;
  v132 = a40;
  if ( a40 )
  {
    v133 = -1LL;
    do
      ++v133;
    while ( a40[v133] );
    v134 = v133 + 1;
  }
  else
  {
    v134 = 5;
  }
  v285 = v134;
  v286 = 0;
  if ( !a40 )
    v132 = "NULL";
  v284 = v132;
  v135 = a41;
  if ( a41 )
  {
    v136 = -1LL;
    do
      ++v136;
    while ( a41[v136] );
    v137 = v136 + 1;
  }
  else
  {
    v137 = 5;
  }
  v288 = v137;
  v289 = 0;
  if ( !a41 )
    v135 = "NULL";
  v287 = v135;
  v138 = a42;
  if ( a42 )
  {
    v139 = -1LL;
    do
      ++v139;
    while ( a42[v139] );
    v140 = v139 + 1;
  }
  else
  {
    v140 = 5;
  }
  v291 = v140;
  v292 = 0;
  if ( !a42 )
    v138 = "NULL";
  v290 = v138;
  v141 = a43;
  if ( a43 )
  {
    v142 = -1LL;
    do
      ++v142;
    while ( a43[v142] );
    v143 = v142 + 1;
  }
  else
  {
    v143 = 5;
  }
  v294 = v143;
  v295 = 0;
  if ( !a43 )
    v141 = "NULL";
  v293 = v141;
  v144 = a44;
  if ( a44 )
  {
    v145 = -1LL;
    do
      ++v145;
    while ( a44[v145] );
    v146 = v145 + 1;
  }
  else
  {
    v146 = 5;
  }
  v297 = v146;
  v298 = 0;
  if ( !a44 )
    v144 = "NULL";
  v296 = v144;
  v147 = a45;
  if ( a45 )
  {
    v148 = -1LL;
    do
      ++v148;
    while ( a45[v148] );
    v149 = v148 + 1;
  }
  else
  {
    v149 = 5;
  }
  v300 = v149;
  v301 = 0;
  if ( !a45 )
    v147 = "NULL";
  v299 = v147;
  v150 = a46;
  if ( a46 )
  {
    v151 = -1LL;
    do
      ++v151;
    while ( a46[v151] );
    v152 = v151 + 1;
  }
  else
  {
    v152 = 5;
  }
  v303 = v152;
  v304 = 0;
  if ( !a46 )
    v150 = "NULL";
  v302 = v150;
  v153 = a47;
  if ( a47 )
  {
    v154 = -1LL;
    do
      ++v154;
    while ( a47[v154] );
    v155 = v154 + 1;
  }
  else
  {
    v155 = 5;
  }
  v306 = v155;
  v307 = 0;
  if ( !a47 )
    v153 = "NULL";
  v305 = v153;
  v156 = a48;
  if ( a48 )
  {
    v157 = -1LL;
    do
      ++v157;
    while ( a48[v157] );
    v158 = v157 + 1;
  }
  else
  {
    v158 = 5;
  }
  v309 = v158;
  v310 = 0;
  if ( !a48 )
    v156 = "NULL";
  v308 = v156;
  v159 = a49;
  if ( a49 )
  {
    v160 = -1LL;
    do
      ++v160;
    while ( a49[v160] );
    v161 = v160 + 1;
  }
  else
  {
    v161 = 5;
  }
  v312 = v161;
  v313 = 0;
  if ( !a49 )
    v159 = "NULL";
  v311 = v159;
  v162 = a50;
  if ( a50 )
  {
    v163 = -1LL;
    do
      ++v163;
    while ( a50[v163] );
    v164 = v163 + 1;
  }
  else
  {
    v164 = 5;
  }
  v315 = v164;
  v316 = 0;
  if ( !a50 )
    v162 = "NULL";
  v314 = v162;
  v165 = a51;
  if ( a51 )
  {
    v166 = -1LL;
    do
      ++v166;
    while ( a51[v166] );
    v167 = v166 + 1;
  }
  else
  {
    v167 = 5;
  }
  v318 = v167;
  v319 = 0;
  if ( !a51 )
    v165 = "NULL";
  v317 = v165;
  v168 = a52;
  if ( a52 )
  {
    v169 = -1LL;
    do
      ++v169;
    while ( a52[v169] );
    v170 = v169 + 1;
  }
  else
  {
    v170 = 5;
  }
  v321 = v170;
  v322 = 0;
  if ( !a52 )
    v168 = "NULL";
  v320 = v168;
  v171 = a53;
  if ( a53 )
  {
    v172 = -1LL;
    do
      ++v172;
    while ( a53[v172] );
    v173 = v172 + 1;
  }
  else
  {
    v173 = 5;
  }
  v324 = v173;
  v325 = 0;
  if ( !a53 )
    v171 = "NULL";
  v323 = v171;
  v174 = a54;
  if ( a54 )
  {
    v175 = -1LL;
    do
      ++v175;
    while ( a54[v175] );
    v176 = v175 + 1;
  }
  else
  {
    v176 = 5;
  }
  v327 = v176;
  v328 = 0;
  if ( !a54 )
    v174 = "NULL";
  v326 = v174;
  v177 = a55;
  if ( a55 )
  {
    v178 = -1LL;
    do
      ++v178;
    while ( a55[v178] );
    v179 = v178 + 1;
  }
  else
  {
    v179 = 5;
  }
  v330 = v179;
  v331 = 0;
  if ( !a55 )
    v177 = "NULL";
  v329 = v177;
  v180 = a56;
  if ( a56 )
  {
    v181 = -1LL;
    do
      ++v181;
    while ( a56[v181] );
    v182 = v181 + 1;
  }
  else
  {
    v182 = 5;
  }
  v333 = v182;
  v334 = 0;
  if ( !a56 )
    v180 = "NULL";
  v332 = v180;
  v183 = a57;
  v184 = a57 == 0LL;
  if ( a57 )
  {
    do
      ++v58;
    while ( a57[v58] );
    v62 = v58 + 1;
    v184 = a57 == 0LL;
  }
  if ( v184 )
    v183 = "NULL";
  v336 = v62;
  v335 = v183;
  v337 = 0;
  return McGenEventWrite_EtwWriteTransfer(v58, &IoSizeDistribution, 0LL, 0x37u, &v187);
}
