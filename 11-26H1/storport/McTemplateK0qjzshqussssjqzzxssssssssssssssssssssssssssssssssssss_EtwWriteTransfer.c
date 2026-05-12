/*
 * XREFs of McTemplateK0qjzshqussssjqzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer @ 0x1400B3C7C
 * Callers:
 *     StorpTelemetryNvmeSendNamespaceIoSizeDistributionData @ 0x1400BED48 (StorpTelemetryNvmeSendNamespaceIoSizeDistributionData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqussssjqzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer(
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
        __int64 a15,
        char a16,
        int a17,
        int a18,
        char a19,
        const char *a20,
        const char *a21,
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
        const char *a55)
{
  __int64 v55; // rdx
  const wchar_t *v56; // rax
  __int64 v57; // rcx
  int v58; // ecx
  __int64 v59; // rcx
  const char *v60; // r8
  __int64 v61; // rax
  int v62; // eax
  const char *v63; // rax
  __int64 v64; // r8
  int v65; // r8d
  const char *v66; // rax
  __int64 v67; // r8
  int v68; // r8d
  const char *v69; // rax
  __int64 v70; // r8
  int v71; // r8d
  const char *v72; // r8
  __int64 v73; // rax
  int v74; // eax
  const char *v75; // rax
  __int64 v76; // r8
  int v77; // r8d
  const char *v78; // rax
  __int64 v79; // r8
  int v80; // r8d
  const char *v81; // rax
  __int64 v82; // r8
  int v83; // r8d
  const char *v84; // rax
  __int64 v85; // r8
  int v86; // r8d
  const char *v87; // rax
  __int64 v88; // r8
  int v89; // r8d
  const char *v90; // rax
  __int64 v91; // r8
  int v92; // r8d
  const char *v93; // rax
  __int64 v94; // r8
  int v95; // r8d
  const char *v96; // rax
  __int64 v97; // r8
  int v98; // r8d
  const char *v99; // rax
  __int64 v100; // r8
  int v101; // r8d
  const char *v102; // rax
  __int64 v103; // r8
  int v104; // r8d
  const char *v105; // rax
  __int64 v106; // r8
  int v107; // r8d
  const char *v108; // rax
  __int64 v109; // r8
  int v110; // r8d
  const char *v111; // rax
  __int64 v112; // r8
  int v113; // r8d
  const char *v114; // rax
  __int64 v115; // r8
  int v116; // r8d
  const char *v117; // rax
  __int64 v118; // r8
  int v119; // r8d
  const char *v120; // rax
  __int64 v121; // r8
  int v122; // r8d
  const char *v123; // rax
  __int64 v124; // r8
  int v125; // r8d
  const char *v126; // rax
  __int64 v127; // r8
  int v128; // r8d
  const char *v129; // rax
  __int64 v130; // r8
  int v131; // r8d
  const char *v132; // rax
  __int64 v133; // r8
  int v134; // r8d
  const char *v135; // rax
  __int64 v136; // r8
  int v137; // r8d
  const char *v138; // rax
  __int64 v139; // r8
  int v140; // r8d
  const char *v141; // rax
  __int64 v142; // r8
  int v143; // r8d
  const char *v144; // rax
  __int64 v145; // r8
  int v146; // r8d
  const char *v147; // rax
  __int64 v148; // r8
  int v149; // r8d
  const char *v150; // rax
  __int64 v151; // r8
  int v152; // r8d
  const char *v153; // rax
  __int64 v154; // r8
  int v155; // r8d
  const char *v156; // rax
  __int64 v157; // r8
  int v158; // r8d
  const char *v159; // rax
  __int64 v160; // r8
  int v161; // r8d
  const char *v162; // rax
  __int64 v163; // r8
  int v164; // r8d
  const char *v165; // rax
  __int64 v166; // r8
  int v167; // r8d
  const char *v168; // rax
  __int64 v169; // r8
  int v170; // r8d
  const char *v171; // rax
  __int64 v172; // r8
  int v173; // r8d
  const char *v174; // rax
  __int64 v175; // r8
  int v176; // r8d
  const char *v177; // rax
  __int64 v178; // r8
  int v179; // r8d
  const char *v180; // rax
  bool v181; // zf
  struct _EVENT_DATA_DESCRIPTOR v183; // [rsp+30h] [rbp-D0h] BYREF
  int *v184; // [rsp+40h] [rbp-C0h]
  __int64 v185; // [rsp+48h] [rbp-B8h]
  __int64 v186; // [rsp+50h] [rbp-B0h]
  __int64 v187; // [rsp+58h] [rbp-A8h]
  const wchar_t *v188; // [rsp+60h] [rbp-A0h]
  int v189; // [rsp+68h] [rbp-98h]
  int v190; // [rsp+6Ch] [rbp-94h]
  const char *v191; // [rsp+70h] [rbp-90h]
  int v192; // [rsp+78h] [rbp-88h]
  int v193; // [rsp+7Ch] [rbp-84h]
  char *v194; // [rsp+80h] [rbp-80h]
  __int64 v195; // [rsp+88h] [rbp-78h]
  char *v196; // [rsp+90h] [rbp-70h]
  __int64 v197; // [rsp+98h] [rbp-68h]
  char *v198; // [rsp+A0h] [rbp-60h]
  __int64 v199; // [rsp+A8h] [rbp-58h]
  const char *v200; // [rsp+B0h] [rbp-50h]
  int v201; // [rsp+B8h] [rbp-48h]
  int v202; // [rsp+BCh] [rbp-44h]
  const char *v203; // [rsp+C0h] [rbp-40h]
  int v204; // [rsp+C8h] [rbp-38h]
  int v205; // [rsp+CCh] [rbp-34h]
  const char *v206; // [rsp+D0h] [rbp-30h]
  int v207; // [rsp+D8h] [rbp-28h]
  int v208; // [rsp+DCh] [rbp-24h]
  const char *v209; // [rsp+E0h] [rbp-20h]
  int v210; // [rsp+E8h] [rbp-18h]
  int v211; // [rsp+ECh] [rbp-14h]
  __int64 v212; // [rsp+F0h] [rbp-10h]
  __int64 v213; // [rsp+F8h] [rbp-8h]
  char *v214; // [rsp+100h] [rbp+0h]
  __int64 v215; // [rsp+108h] [rbp+8h]
  const wchar_t *v216; // [rsp+110h] [rbp+10h]
  __int64 v217; // [rsp+118h] [rbp+18h]
  const wchar_t *v218; // [rsp+120h] [rbp+20h]
  __int64 v219; // [rsp+128h] [rbp+28h]
  char *v220; // [rsp+130h] [rbp+30h]
  __int64 v221; // [rsp+138h] [rbp+38h]
  const char *v222; // [rsp+140h] [rbp+40h]
  int v223; // [rsp+148h] [rbp+48h]
  int v224; // [rsp+14Ch] [rbp+4Ch]
  const char *v225; // [rsp+150h] [rbp+50h]
  int v226; // [rsp+158h] [rbp+58h]
  int v227; // [rsp+15Ch] [rbp+5Ch]
  const char *v228; // [rsp+160h] [rbp+60h]
  int v229; // [rsp+168h] [rbp+68h]
  int v230; // [rsp+16Ch] [rbp+6Ch]
  const char *v231; // [rsp+170h] [rbp+70h]
  int v232; // [rsp+178h] [rbp+78h]
  int v233; // [rsp+17Ch] [rbp+7Ch]
  const char *v234; // [rsp+180h] [rbp+80h]
  int v235; // [rsp+188h] [rbp+88h]
  int v236; // [rsp+18Ch] [rbp+8Ch]
  const char *v237; // [rsp+190h] [rbp+90h]
  int v238; // [rsp+198h] [rbp+98h]
  int v239; // [rsp+19Ch] [rbp+9Ch]
  const char *v240; // [rsp+1A0h] [rbp+A0h]
  int v241; // [rsp+1A8h] [rbp+A8h]
  int v242; // [rsp+1ACh] [rbp+ACh]
  const char *v243; // [rsp+1B0h] [rbp+B0h]
  int v244; // [rsp+1B8h] [rbp+B8h]
  int v245; // [rsp+1BCh] [rbp+BCh]
  const char *v246; // [rsp+1C0h] [rbp+C0h]
  int v247; // [rsp+1C8h] [rbp+C8h]
  int v248; // [rsp+1CCh] [rbp+CCh]
  const char *v249; // [rsp+1D0h] [rbp+D0h]
  int v250; // [rsp+1D8h] [rbp+D8h]
  int v251; // [rsp+1DCh] [rbp+DCh]
  const char *v252; // [rsp+1E0h] [rbp+E0h]
  int v253; // [rsp+1E8h] [rbp+E8h]
  int v254; // [rsp+1ECh] [rbp+ECh]
  const char *v255; // [rsp+1F0h] [rbp+F0h]
  int v256; // [rsp+1F8h] [rbp+F8h]
  int v257; // [rsp+1FCh] [rbp+FCh]
  const char *v258; // [rsp+200h] [rbp+100h]
  int v259; // [rsp+208h] [rbp+108h]
  int v260; // [rsp+20Ch] [rbp+10Ch]
  const char *v261; // [rsp+210h] [rbp+110h]
  int v262; // [rsp+218h] [rbp+118h]
  int v263; // [rsp+21Ch] [rbp+11Ch]
  const char *v264; // [rsp+220h] [rbp+120h]
  int v265; // [rsp+228h] [rbp+128h]
  int v266; // [rsp+22Ch] [rbp+12Ch]
  const char *v267; // [rsp+230h] [rbp+130h]
  int v268; // [rsp+238h] [rbp+138h]
  int v269; // [rsp+23Ch] [rbp+13Ch]
  const char *v270; // [rsp+240h] [rbp+140h]
  int v271; // [rsp+248h] [rbp+148h]
  int v272; // [rsp+24Ch] [rbp+14Ch]
  const char *v273; // [rsp+250h] [rbp+150h]
  int v274; // [rsp+258h] [rbp+158h]
  int v275; // [rsp+25Ch] [rbp+15Ch]
  const char *v276; // [rsp+260h] [rbp+160h]
  int v277; // [rsp+268h] [rbp+168h]
  int v278; // [rsp+26Ch] [rbp+16Ch]
  const char *v279; // [rsp+270h] [rbp+170h]
  int v280; // [rsp+278h] [rbp+178h]
  int v281; // [rsp+27Ch] [rbp+17Ch]
  const char *v282; // [rsp+280h] [rbp+180h]
  int v283; // [rsp+288h] [rbp+188h]
  int v284; // [rsp+28Ch] [rbp+18Ch]
  const char *v285; // [rsp+290h] [rbp+190h]
  int v286; // [rsp+298h] [rbp+198h]
  int v287; // [rsp+29Ch] [rbp+19Ch]
  const char *v288; // [rsp+2A0h] [rbp+1A0h]
  int v289; // [rsp+2A8h] [rbp+1A8h]
  int v290; // [rsp+2ACh] [rbp+1ACh]
  const char *v291; // [rsp+2B0h] [rbp+1B0h]
  int v292; // [rsp+2B8h] [rbp+1B8h]
  int v293; // [rsp+2BCh] [rbp+1BCh]
  const char *v294; // [rsp+2C0h] [rbp+1C0h]
  int v295; // [rsp+2C8h] [rbp+1C8h]
  int v296; // [rsp+2CCh] [rbp+1CCh]
  const char *v297; // [rsp+2D0h] [rbp+1D0h]
  int v298; // [rsp+2D8h] [rbp+1D8h]
  int v299; // [rsp+2DCh] [rbp+1DCh]
  const char *v300; // [rsp+2E0h] [rbp+1E0h]
  int v301; // [rsp+2E8h] [rbp+1E8h]
  int v302; // [rsp+2ECh] [rbp+1ECh]
  const char *v303; // [rsp+2F0h] [rbp+1F0h]
  int v304; // [rsp+2F8h] [rbp+1F8h]
  int v305; // [rsp+2FCh] [rbp+1FCh]
  const char *v306; // [rsp+300h] [rbp+200h]
  int v307; // [rsp+308h] [rbp+208h]
  int v308; // [rsp+30Ch] [rbp+20Ch]
  const char *v309; // [rsp+310h] [rbp+210h]
  int v310; // [rsp+318h] [rbp+218h]
  int v311; // [rsp+31Ch] [rbp+21Ch]
  const char *v312; // [rsp+320h] [rbp+220h]
  int v313; // [rsp+328h] [rbp+228h]
  int v314; // [rsp+32Ch] [rbp+22Ch]
  const char *v315; // [rsp+330h] [rbp+230h]
  int v316; // [rsp+338h] [rbp+238h]
  int v317; // [rsp+33Ch] [rbp+23Ch]
  const char *v318; // [rsp+340h] [rbp+240h]
  int v319; // [rsp+348h] [rbp+248h]
  int v320; // [rsp+34Ch] [rbp+24Ch]
  const char *v321; // [rsp+350h] [rbp+250h]
  int v322; // [rsp+358h] [rbp+258h]
  int v323; // [rsp+35Ch] [rbp+25Ch]
  const char *v324; // [rsp+360h] [rbp+260h]
  int v325; // [rsp+368h] [rbp+268h]
  int v326; // [rsp+36Ch] [rbp+26Ch]
  const char *v327; // [rsp+370h] [rbp+270h]
  int v328; // [rsp+378h] [rbp+278h]
  int v329; // [rsp+37Ch] [rbp+27Ch]
  int v330; // [rsp+3B8h] [rbp+2B8h] BYREF

  v330 = a4;
  v185 = 4LL;
  v184 = &v330;
  v55 = -1LL;
  v186 = a5;
  v56 = a6;
  v187 = 16LL;
  if ( a6 )
  {
    v57 = -1LL;
    do
      ++v57;
    while ( a6[v57] );
    v58 = 2 * v57 + 2;
  }
  else
  {
    v58 = 10;
  }
  v189 = v58;
  v190 = 0;
  if ( !a6 )
    v56 = L"NULL";
  v59 = 5LL;
  v60 = a7;
  v188 = v56;
  if ( a7 )
  {
    v61 = -1LL;
    do
      ++v61;
    while ( a7[v61] );
    v62 = v61 + 1;
  }
  else
  {
    v62 = 5;
  }
  v192 = v62;
  v193 = 0;
  v194 = &a8;
  v195 = 2LL;
  v196 = &a9;
  if ( !a7 )
    v60 = "NULL";
  v191 = v60;
  v198 = &a10;
  v63 = a11;
  v197 = 4LL;
  v199 = 1LL;
  if ( a11 )
  {
    v64 = -1LL;
    do
      ++v64;
    while ( a11[v64] );
    v65 = v64 + 1;
  }
  else
  {
    v65 = 5;
  }
  v201 = v65;
  v202 = 0;
  if ( !a11 )
    v63 = "NULL";
  v200 = v63;
  v66 = a12;
  if ( a12 )
  {
    v67 = -1LL;
    do
      ++v67;
    while ( a12[v67] );
    v68 = v67 + 1;
  }
  else
  {
    v68 = 5;
  }
  v204 = v68;
  v205 = 0;
  if ( !a12 )
    v66 = "NULL";
  v203 = v66;
  v69 = a13;
  if ( a13 )
  {
    v70 = -1LL;
    do
      ++v70;
    while ( a13[v70] );
    v71 = v70 + 1;
  }
  else
  {
    v71 = 5;
  }
  v207 = v71;
  v72 = a14;
  if ( !a13 )
    v69 = "NULL";
  v208 = 0;
  v206 = v69;
  if ( a14 )
  {
    v73 = -1LL;
    do
      ++v73;
    while ( a14[v73] );
    v74 = v73 + 1;
  }
  else
  {
    v74 = 5;
  }
  v210 = v74;
  v212 = a15;
  if ( !a14 )
    v72 = "NULL";
  v209 = v72;
  v214 = &a16;
  v216 = L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+";
  v218 = L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms";
  v220 = &a19;
  v75 = a20;
  v211 = 0;
  v213 = 16LL;
  v215 = 4LL;
  v217 = 86LL;
  v219 = 196LL;
  v221 = 8LL;
  if ( a20 )
  {
    v76 = -1LL;
    do
      ++v76;
    while ( a20[v76] );
    v77 = v76 + 1;
  }
  else
  {
    v77 = 5;
  }
  v223 = v77;
  v224 = 0;
  if ( !a20 )
    v75 = "NULL";
  v222 = v75;
  v78 = a21;
  if ( a21 )
  {
    v79 = -1LL;
    do
      ++v79;
    while ( a21[v79] );
    v80 = v79 + 1;
  }
  else
  {
    v80 = 5;
  }
  v226 = v80;
  v227 = 0;
  if ( !a21 )
    v78 = "NULL";
  v225 = v78;
  v81 = a22;
  if ( a22 )
  {
    v82 = -1LL;
    do
      ++v82;
    while ( a22[v82] );
    v83 = v82 + 1;
  }
  else
  {
    v83 = 5;
  }
  v229 = v83;
  v230 = 0;
  if ( !a22 )
    v81 = "NULL";
  v228 = v81;
  v84 = a23;
  if ( a23 )
  {
    v85 = -1LL;
    do
      ++v85;
    while ( a23[v85] );
    v86 = v85 + 1;
  }
  else
  {
    v86 = 5;
  }
  v232 = v86;
  v233 = 0;
  if ( !a23 )
    v84 = "NULL";
  v231 = v84;
  v87 = a24;
  if ( a24 )
  {
    v88 = -1LL;
    do
      ++v88;
    while ( a24[v88] );
    v89 = v88 + 1;
  }
  else
  {
    v89 = 5;
  }
  v235 = v89;
  v236 = 0;
  if ( !a24 )
    v87 = "NULL";
  v234 = v87;
  v90 = a25;
  if ( a25 )
  {
    v91 = -1LL;
    do
      ++v91;
    while ( a25[v91] );
    v92 = v91 + 1;
  }
  else
  {
    v92 = 5;
  }
  v238 = v92;
  v239 = 0;
  if ( !a25 )
    v90 = "NULL";
  v237 = v90;
  v93 = a26;
  if ( a26 )
  {
    v94 = -1LL;
    do
      ++v94;
    while ( a26[v94] );
    v95 = v94 + 1;
  }
  else
  {
    v95 = 5;
  }
  v241 = v95;
  v242 = 0;
  if ( !a26 )
    v93 = "NULL";
  v240 = v93;
  v96 = a27;
  if ( a27 )
  {
    v97 = -1LL;
    do
      ++v97;
    while ( a27[v97] );
    v98 = v97 + 1;
  }
  else
  {
    v98 = 5;
  }
  v244 = v98;
  v245 = 0;
  if ( !a27 )
    v96 = "NULL";
  v243 = v96;
  v99 = a28;
  if ( a28 )
  {
    v100 = -1LL;
    do
      ++v100;
    while ( a28[v100] );
    v101 = v100 + 1;
  }
  else
  {
    v101 = 5;
  }
  v247 = v101;
  v248 = 0;
  if ( !a28 )
    v99 = "NULL";
  v246 = v99;
  v102 = a29;
  if ( a29 )
  {
    v103 = -1LL;
    do
      ++v103;
    while ( a29[v103] );
    v104 = v103 + 1;
  }
  else
  {
    v104 = 5;
  }
  v250 = v104;
  v251 = 0;
  if ( !a29 )
    v102 = "NULL";
  v249 = v102;
  v105 = a30;
  if ( a30 )
  {
    v106 = -1LL;
    do
      ++v106;
    while ( a30[v106] );
    v107 = v106 + 1;
  }
  else
  {
    v107 = 5;
  }
  v253 = v107;
  v254 = 0;
  if ( !a30 )
    v105 = "NULL";
  v252 = v105;
  v108 = a31;
  if ( a31 )
  {
    v109 = -1LL;
    do
      ++v109;
    while ( a31[v109] );
    v110 = v109 + 1;
  }
  else
  {
    v110 = 5;
  }
  v256 = v110;
  v257 = 0;
  if ( !a31 )
    v108 = "NULL";
  v255 = v108;
  v111 = a32;
  if ( a32 )
  {
    v112 = -1LL;
    do
      ++v112;
    while ( a32[v112] );
    v113 = v112 + 1;
  }
  else
  {
    v113 = 5;
  }
  v259 = v113;
  v260 = 0;
  if ( !a32 )
    v111 = "NULL";
  v258 = v111;
  v114 = a33;
  if ( a33 )
  {
    v115 = -1LL;
    do
      ++v115;
    while ( a33[v115] );
    v116 = v115 + 1;
  }
  else
  {
    v116 = 5;
  }
  v262 = v116;
  v263 = 0;
  if ( !a33 )
    v114 = "NULL";
  v261 = v114;
  v117 = a34;
  if ( a34 )
  {
    v118 = -1LL;
    do
      ++v118;
    while ( a34[v118] );
    v119 = v118 + 1;
  }
  else
  {
    v119 = 5;
  }
  v265 = v119;
  v266 = 0;
  if ( !a34 )
    v117 = "NULL";
  v264 = v117;
  v120 = a35;
  if ( a35 )
  {
    v121 = -1LL;
    do
      ++v121;
    while ( a35[v121] );
    v122 = v121 + 1;
  }
  else
  {
    v122 = 5;
  }
  v268 = v122;
  v269 = 0;
  if ( !a35 )
    v120 = "NULL";
  v267 = v120;
  v123 = a36;
  if ( a36 )
  {
    v124 = -1LL;
    do
      ++v124;
    while ( a36[v124] );
    v125 = v124 + 1;
  }
  else
  {
    v125 = 5;
  }
  v271 = v125;
  v272 = 0;
  if ( !a36 )
    v123 = "NULL";
  v270 = v123;
  v126 = a37;
  if ( a37 )
  {
    v127 = -1LL;
    do
      ++v127;
    while ( a37[v127] );
    v128 = v127 + 1;
  }
  else
  {
    v128 = 5;
  }
  v274 = v128;
  v275 = 0;
  if ( !a37 )
    v126 = "NULL";
  v273 = v126;
  v129 = a38;
  if ( a38 )
  {
    v130 = -1LL;
    do
      ++v130;
    while ( a38[v130] );
    v131 = v130 + 1;
  }
  else
  {
    v131 = 5;
  }
  v277 = v131;
  v278 = 0;
  if ( !a38 )
    v129 = "NULL";
  v276 = v129;
  v132 = a39;
  if ( a39 )
  {
    v133 = -1LL;
    do
      ++v133;
    while ( a39[v133] );
    v134 = v133 + 1;
  }
  else
  {
    v134 = 5;
  }
  v280 = v134;
  v281 = 0;
  if ( !a39 )
    v132 = "NULL";
  v279 = v132;
  v135 = a40;
  if ( a40 )
  {
    v136 = -1LL;
    do
      ++v136;
    while ( a40[v136] );
    v137 = v136 + 1;
  }
  else
  {
    v137 = 5;
  }
  v283 = v137;
  v284 = 0;
  if ( !a40 )
    v135 = "NULL";
  v282 = v135;
  v138 = a41;
  if ( a41 )
  {
    v139 = -1LL;
    do
      ++v139;
    while ( a41[v139] );
    v140 = v139 + 1;
  }
  else
  {
    v140 = 5;
  }
  v286 = v140;
  v287 = 0;
  if ( !a41 )
    v138 = "NULL";
  v285 = v138;
  v141 = a42;
  if ( a42 )
  {
    v142 = -1LL;
    do
      ++v142;
    while ( a42[v142] );
    v143 = v142 + 1;
  }
  else
  {
    v143 = 5;
  }
  v289 = v143;
  v290 = 0;
  if ( !a42 )
    v141 = "NULL";
  v288 = v141;
  v144 = a43;
  if ( a43 )
  {
    v145 = -1LL;
    do
      ++v145;
    while ( a43[v145] );
    v146 = v145 + 1;
  }
  else
  {
    v146 = 5;
  }
  v292 = v146;
  v293 = 0;
  if ( !a43 )
    v144 = "NULL";
  v291 = v144;
  v147 = a44;
  if ( a44 )
  {
    v148 = -1LL;
    do
      ++v148;
    while ( a44[v148] );
    v149 = v148 + 1;
  }
  else
  {
    v149 = 5;
  }
  v295 = v149;
  v296 = 0;
  if ( !a44 )
    v147 = "NULL";
  v294 = v147;
  v150 = a45;
  if ( a45 )
  {
    v151 = -1LL;
    do
      ++v151;
    while ( a45[v151] );
    v152 = v151 + 1;
  }
  else
  {
    v152 = 5;
  }
  v298 = v152;
  v299 = 0;
  if ( !a45 )
    v150 = "NULL";
  v297 = v150;
  v153 = a46;
  if ( a46 )
  {
    v154 = -1LL;
    do
      ++v154;
    while ( a46[v154] );
    v155 = v154 + 1;
  }
  else
  {
    v155 = 5;
  }
  v301 = v155;
  v302 = 0;
  if ( !a46 )
    v153 = "NULL";
  v300 = v153;
  v156 = a47;
  if ( a47 )
  {
    v157 = -1LL;
    do
      ++v157;
    while ( a47[v157] );
    v158 = v157 + 1;
  }
  else
  {
    v158 = 5;
  }
  v304 = v158;
  v305 = 0;
  if ( !a47 )
    v156 = "NULL";
  v303 = v156;
  v159 = a48;
  if ( a48 )
  {
    v160 = -1LL;
    do
      ++v160;
    while ( a48[v160] );
    v161 = v160 + 1;
  }
  else
  {
    v161 = 5;
  }
  v307 = v161;
  v308 = 0;
  if ( !a48 )
    v159 = "NULL";
  v306 = v159;
  v162 = a49;
  if ( a49 )
  {
    v163 = -1LL;
    do
      ++v163;
    while ( a49[v163] );
    v164 = v163 + 1;
  }
  else
  {
    v164 = 5;
  }
  v310 = v164;
  v311 = 0;
  if ( !a49 )
    v162 = "NULL";
  v309 = v162;
  v165 = a50;
  if ( a50 )
  {
    v166 = -1LL;
    do
      ++v166;
    while ( a50[v166] );
    v167 = v166 + 1;
  }
  else
  {
    v167 = 5;
  }
  v313 = v167;
  v314 = 0;
  if ( !a50 )
    v165 = "NULL";
  v312 = v165;
  v168 = a51;
  if ( a51 )
  {
    v169 = -1LL;
    do
      ++v169;
    while ( a51[v169] );
    v170 = v169 + 1;
  }
  else
  {
    v170 = 5;
  }
  v316 = v170;
  v317 = 0;
  if ( !a51 )
    v168 = "NULL";
  v315 = v168;
  v171 = a52;
  if ( a52 )
  {
    v172 = -1LL;
    do
      ++v172;
    while ( a52[v172] );
    v173 = v172 + 1;
  }
  else
  {
    v173 = 5;
  }
  v319 = v173;
  v320 = 0;
  if ( !a52 )
    v171 = "NULL";
  v318 = v171;
  v174 = a53;
  if ( a53 )
  {
    v175 = -1LL;
    do
      ++v175;
    while ( a53[v175] );
    v176 = v175 + 1;
  }
  else
  {
    v176 = 5;
  }
  v322 = v176;
  v323 = 0;
  if ( !a53 )
    v174 = "NULL";
  v321 = v174;
  v177 = a54;
  if ( a54 )
  {
    v178 = -1LL;
    do
      ++v178;
    while ( a54[v178] );
    v179 = v178 + 1;
  }
  else
  {
    v179 = 5;
  }
  v325 = v179;
  v326 = 0;
  if ( !a54 )
    v177 = "NULL";
  v324 = v177;
  v180 = a55;
  v181 = a55 == 0LL;
  if ( a55 )
  {
    do
      ++v55;
    while ( a55[v55] );
    v59 = (unsigned int)(v55 + 1);
    v181 = a55 == 0LL;
  }
  if ( v181 )
    v180 = "NULL";
  v329 = 0;
  v327 = v180;
  v328 = v59;
  return McGenEventWrite_EtwWriteTransfer(v59, &NVMeNamespaceIoSizeDistribution, 0LL, 0x35u, &v183);
}
