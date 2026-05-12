/*
 * XREFs of sub_1400AB558 @ 0x1400AB558
 * Callers:
 *     sub_1400B6558 @ 0x1400B6558 (sub_1400B6558.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400AB558(
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
  const wchar_t *v55; // rdx
  const char *v56; // r12
  const char *v57; // r15
  __int64 v58; // rcx
  const char *v59; // r14
  const char *v60; // rsi
  const char *v61; // rdi
  const char *v62; // rbx
  const char *v63; // r11
  const char *v64; // r10
  const char *v65; // r9
  const char *v66; // r8
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rax
  int v88; // eax
  const char *v89; // r13
  __int64 v90; // rax
  int v91; // eax
  const char *v92; // rdx
  __int64 v93; // rax
  int v94; // eax
  const char *v95; // rdx
  __int64 v96; // rax
  int v97; // eax
  const char *v98; // rdx
  __int64 v99; // rax
  int v100; // eax
  const char *v101; // rdx
  __int64 v102; // rax
  int v103; // eax
  const char *v104; // rdx
  __int64 v105; // rax
  int v106; // eax
  const char *v107; // rdx
  __int64 v108; // rax
  int v109; // eax
  const char *v110; // rdx
  __int64 v111; // rax
  int v112; // eax
  const char *v113; // rdx
  __int64 v114; // rax
  int v115; // eax
  const char *v116; // rdx
  __int64 v117; // rax
  int v118; // eax
  const char *v119; // rdx
  __int64 v120; // rax
  int v121; // eax
  const char *v122; // rdx
  __int64 v123; // rax
  int v124; // eax
  const char *v125; // rdx
  __int64 v126; // rax
  int v127; // eax
  const char *v128; // rdx
  __int64 v129; // rax
  int v130; // eax
  const char *v131; // rdx
  __int64 v132; // rax
  int v133; // eax
  const char *v134; // rdx
  __int64 v135; // rax
  int v136; // eax
  const char *v137; // rdx
  __int64 v138; // rax
  int v139; // eax
  const char *v140; // rdx
  __int64 v141; // rax
  int v142; // eax
  const char *v143; // rdx
  __int64 v144; // rax
  int v145; // eax
  const char *v146; // rdx
  __int64 v147; // rax
  int v148; // eax
  const char *v149; // rdx
  __int64 v150; // rax
  int v151; // eax
  const char *v152; // rdx
  __int64 v153; // rax
  int v154; // eax
  const char *v155; // rdx
  __int64 v156; // rax
  int v157; // eax
  const char *v158; // rdx
  __int64 v159; // rax
  int v160; // eax
  const char *v161; // rdx
  __int64 v162; // rax
  int v163; // eax
  const char *v164; // rdx
  __int64 v165; // rax
  int v166; // eax
  const char *v167; // rdx
  __int64 v168; // rax
  int v169; // eax
  const char *v170; // rdx
  __int64 v171; // rax
  int v172; // eax
  const char *v173; // rdx
  __int64 v174; // rax
  int v175; // eax
  const char *v176; // rdx
  __int64 v177; // rax
  int v178; // eax
  const char *v179; // rax
  __int64 v180; // rcx
  struct _EVENT_DATA_DESCRIPTOR v182; // [rsp+38h] [rbp-D0h] BYREF
  int *v183; // [rsp+48h] [rbp-C0h]
  __int64 v184; // [rsp+50h] [rbp-B8h]
  __int64 v185; // [rsp+58h] [rbp-B0h]
  __int64 v186; // [rsp+60h] [rbp-A8h]
  const wchar_t *v187; // [rsp+68h] [rbp-A0h]
  int v188; // [rsp+70h] [rbp-98h]
  int v189; // [rsp+74h] [rbp-94h]
  const char *v190; // [rsp+78h] [rbp-90h]
  int v191; // [rsp+80h] [rbp-88h]
  int v192; // [rsp+84h] [rbp-84h]
  char *v193; // [rsp+88h] [rbp-80h]
  __int64 v194; // [rsp+90h] [rbp-78h]
  char *v195; // [rsp+98h] [rbp-70h]
  __int64 v196; // [rsp+A0h] [rbp-68h]
  char *v197; // [rsp+A8h] [rbp-60h]
  __int64 v198; // [rsp+B0h] [rbp-58h]
  const char *v199; // [rsp+B8h] [rbp-50h]
  int v200; // [rsp+C0h] [rbp-48h]
  int v201; // [rsp+C4h] [rbp-44h]
  const char *v202; // [rsp+C8h] [rbp-40h]
  int v203; // [rsp+D0h] [rbp-38h]
  int v204; // [rsp+D4h] [rbp-34h]
  const char *v205; // [rsp+D8h] [rbp-30h]
  int v206; // [rsp+E0h] [rbp-28h]
  int v207; // [rsp+E4h] [rbp-24h]
  const char *v208; // [rsp+E8h] [rbp-20h]
  int v209; // [rsp+F0h] [rbp-18h]
  int v210; // [rsp+F4h] [rbp-14h]
  __int64 v211; // [rsp+F8h] [rbp-10h]
  __int64 v212; // [rsp+100h] [rbp-8h]
  char *v213; // [rsp+108h] [rbp+0h]
  __int64 v214; // [rsp+110h] [rbp+8h]
  const wchar_t *v215; // [rsp+118h] [rbp+10h]
  __int64 v216; // [rsp+120h] [rbp+18h]
  const wchar_t *v217; // [rsp+128h] [rbp+20h]
  __int64 v218; // [rsp+130h] [rbp+28h]
  char *v219; // [rsp+138h] [rbp+30h]
  __int64 v220; // [rsp+140h] [rbp+38h]
  const char *v221; // [rsp+148h] [rbp+40h]
  int v222; // [rsp+150h] [rbp+48h]
  int v223; // [rsp+154h] [rbp+4Ch]
  const char *v224; // [rsp+158h] [rbp+50h]
  int v225; // [rsp+160h] [rbp+58h]
  int v226; // [rsp+164h] [rbp+5Ch]
  const char *v227; // [rsp+168h] [rbp+60h]
  int v228; // [rsp+170h] [rbp+68h]
  int v229; // [rsp+174h] [rbp+6Ch]
  const char *v230; // [rsp+178h] [rbp+70h]
  int v231; // [rsp+180h] [rbp+78h]
  int v232; // [rsp+184h] [rbp+7Ch]
  const char *v233; // [rsp+188h] [rbp+80h]
  int v234; // [rsp+190h] [rbp+88h]
  int v235; // [rsp+194h] [rbp+8Ch]
  const char *v236; // [rsp+198h] [rbp+90h]
  int v237; // [rsp+1A0h] [rbp+98h]
  int v238; // [rsp+1A4h] [rbp+9Ch]
  const char *v239; // [rsp+1A8h] [rbp+A0h]
  int v240; // [rsp+1B0h] [rbp+A8h]
  int v241; // [rsp+1B4h] [rbp+ACh]
  const char *v242; // [rsp+1B8h] [rbp+B0h]
  int v243; // [rsp+1C0h] [rbp+B8h]
  int v244; // [rsp+1C4h] [rbp+BCh]
  const char *v245; // [rsp+1C8h] [rbp+C0h]
  int v246; // [rsp+1D0h] [rbp+C8h]
  int v247; // [rsp+1D4h] [rbp+CCh]
  const char *v248; // [rsp+1D8h] [rbp+D0h]
  int v249; // [rsp+1E0h] [rbp+D8h]
  int v250; // [rsp+1E4h] [rbp+DCh]
  const char *v251; // [rsp+1E8h] [rbp+E0h]
  int v252; // [rsp+1F0h] [rbp+E8h]
  int v253; // [rsp+1F4h] [rbp+ECh]
  const char *v254; // [rsp+1F8h] [rbp+F0h]
  int v255; // [rsp+200h] [rbp+F8h]
  int v256; // [rsp+204h] [rbp+FCh]
  const char *v257; // [rsp+208h] [rbp+100h]
  int v258; // [rsp+210h] [rbp+108h]
  int v259; // [rsp+214h] [rbp+10Ch]
  const char *v260; // [rsp+218h] [rbp+110h]
  int v261; // [rsp+220h] [rbp+118h]
  int v262; // [rsp+224h] [rbp+11Ch]
  const char *v263; // [rsp+228h] [rbp+120h]
  int v264; // [rsp+230h] [rbp+128h]
  int v265; // [rsp+234h] [rbp+12Ch]
  const char *v266; // [rsp+238h] [rbp+130h]
  int v267; // [rsp+240h] [rbp+138h]
  int v268; // [rsp+244h] [rbp+13Ch]
  const char *v269; // [rsp+248h] [rbp+140h]
  int v270; // [rsp+250h] [rbp+148h]
  int v271; // [rsp+254h] [rbp+14Ch]
  const char *v272; // [rsp+258h] [rbp+150h]
  int v273; // [rsp+260h] [rbp+158h]
  int v274; // [rsp+264h] [rbp+15Ch]
  const char *v275; // [rsp+268h] [rbp+160h]
  int v276; // [rsp+270h] [rbp+168h]
  int v277; // [rsp+274h] [rbp+16Ch]
  const char *v278; // [rsp+278h] [rbp+170h]
  int v279; // [rsp+280h] [rbp+178h]
  int v280; // [rsp+284h] [rbp+17Ch]
  const char *v281; // [rsp+288h] [rbp+180h]
  int v282; // [rsp+290h] [rbp+188h]
  int v283; // [rsp+294h] [rbp+18Ch]
  const char *v284; // [rsp+298h] [rbp+190h]
  int v285; // [rsp+2A0h] [rbp+198h]
  int v286; // [rsp+2A4h] [rbp+19Ch]
  const char *v287; // [rsp+2A8h] [rbp+1A0h]
  int v288; // [rsp+2B0h] [rbp+1A8h]
  int v289; // [rsp+2B4h] [rbp+1ACh]
  const char *v290; // [rsp+2B8h] [rbp+1B0h]
  int v291; // [rsp+2C0h] [rbp+1B8h]
  int v292; // [rsp+2C4h] [rbp+1BCh]
  const char *v293; // [rsp+2C8h] [rbp+1C0h]
  int v294; // [rsp+2D0h] [rbp+1C8h]
  int v295; // [rsp+2D4h] [rbp+1CCh]
  const char *v296; // [rsp+2D8h] [rbp+1D0h]
  int v297; // [rsp+2E0h] [rbp+1D8h]
  int v298; // [rsp+2E4h] [rbp+1DCh]
  const char *v299; // [rsp+2E8h] [rbp+1E0h]
  int v300; // [rsp+2F0h] [rbp+1E8h]
  int v301; // [rsp+2F4h] [rbp+1ECh]
  const char *v302; // [rsp+2F8h] [rbp+1F0h]
  int v303; // [rsp+300h] [rbp+1F8h]
  int v304; // [rsp+304h] [rbp+1FCh]
  const char *v305; // [rsp+308h] [rbp+200h]
  int v306; // [rsp+310h] [rbp+208h]
  int v307; // [rsp+314h] [rbp+20Ch]
  const char *v308; // [rsp+318h] [rbp+210h]
  int v309; // [rsp+320h] [rbp+218h]
  int v310; // [rsp+324h] [rbp+21Ch]
  const char *v311; // [rsp+328h] [rbp+220h]
  int v312; // [rsp+330h] [rbp+228h]
  int v313; // [rsp+334h] [rbp+22Ch]
  const char *v314; // [rsp+338h] [rbp+230h]
  int v315; // [rsp+340h] [rbp+238h]
  int v316; // [rsp+344h] [rbp+23Ch]
  const char *v317; // [rsp+348h] [rbp+240h]
  int v318; // [rsp+350h] [rbp+248h]
  int v319; // [rsp+354h] [rbp+24Ch]
  const char *v320; // [rsp+358h] [rbp+250h]
  int v321; // [rsp+360h] [rbp+258h]
  int v322; // [rsp+364h] [rbp+25Ch]
  const char *v323; // [rsp+368h] [rbp+260h]
  int v324; // [rsp+370h] [rbp+268h]
  int v325; // [rsp+374h] [rbp+26Ch]
  const char *v326; // [rsp+378h] [rbp+270h]
  int v327; // [rsp+380h] [rbp+278h]
  int v328; // [rsp+384h] [rbp+27Ch]
  int v329; // [rsp+3E0h] [rbp+2D8h] BYREF

  v329 = a4;
  v55 = a6;
  v56 = a24;
  v57 = a23;
  v58 = -1LL;
  v59 = a22;
  v60 = a21;
  v61 = a20;
  v62 = a14;
  v63 = a13;
  v64 = a12;
  v65 = a11;
  v66 = a7;
  v183 = &v329;
  v185 = a5;
  v184 = 4LL;
  v186 = 16LL;
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
  v188 = v68;
  if ( !a6 )
    v55 = L"NULL";
  v189 = 0;
  v187 = v55;
  if ( a7 )
  {
    v69 = -1LL;
    do
      ++v69;
    while ( a7[v69] );
    v70 = v69 + 1;
  }
  else
  {
    v70 = 5;
  }
  v191 = v70;
  v194 = 2LL;
  v193 = &a8;
  if ( !a7 )
    v66 = "NULL";
  v196 = 4LL;
  v190 = v66;
  v195 = &a9;
  v192 = 0;
  v197 = &a10;
  v198 = 1LL;
  if ( a11 )
  {
    v71 = -1LL;
    do
      ++v71;
    while ( a11[v71] );
    v72 = v71 + 1;
  }
  else
  {
    v72 = 5;
  }
  v200 = v72;
  v201 = 0;
  if ( !a11 )
    v65 = "NULL";
  v199 = v65;
  if ( a12 )
  {
    v73 = -1LL;
    do
      ++v73;
    while ( a12[v73] );
    v74 = v73 + 1;
  }
  else
  {
    v74 = 5;
  }
  v203 = v74;
  v204 = 0;
  if ( !a12 )
    v64 = "NULL";
  v202 = v64;
  if ( a13 )
  {
    v75 = -1LL;
    do
      ++v75;
    while ( a13[v75] );
    v76 = v75 + 1;
  }
  else
  {
    v76 = 5;
  }
  v206 = v76;
  v207 = 0;
  if ( !a13 )
    v63 = "NULL";
  v205 = v63;
  if ( a14 )
  {
    v77 = -1LL;
    do
      ++v77;
    while ( a14[v77] );
    v78 = v77 + 1;
  }
  else
  {
    v78 = 5;
  }
  v209 = v78;
  v211 = a15;
  if ( !a14 )
    v62 = "NULL";
  v208 = v62;
  v213 = &a16;
  v215 = L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+";
  v217 = L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms";
  v219 = &a19;
  v210 = 0;
  v212 = 16LL;
  v214 = 4LL;
  v216 = 86LL;
  v218 = 196LL;
  v220 = 8LL;
  if ( a20 )
  {
    v79 = -1LL;
    do
      ++v79;
    while ( a20[v79] );
    v80 = v79 + 1;
  }
  else
  {
    v80 = 5;
  }
  v222 = v80;
  v223 = 0;
  if ( !a20 )
    v61 = "NULL";
  v221 = v61;
  if ( a21 )
  {
    v81 = -1LL;
    do
      ++v81;
    while ( a21[v81] );
    v82 = v81 + 1;
  }
  else
  {
    v82 = 5;
  }
  v225 = v82;
  v226 = 0;
  if ( !a21 )
    v60 = "NULL";
  v224 = v60;
  if ( a22 )
  {
    v83 = -1LL;
    do
      ++v83;
    while ( a22[v83] );
    v84 = v83 + 1;
  }
  else
  {
    v84 = 5;
  }
  v228 = v84;
  v229 = 0;
  if ( !a22 )
    v59 = "NULL";
  v227 = v59;
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
  v231 = v86;
  v232 = 0;
  if ( !a23 )
    v57 = "NULL";
  v230 = v57;
  if ( a24 )
  {
    v87 = -1LL;
    do
      ++v87;
    while ( a24[v87] );
    v88 = v87 + 1;
  }
  else
  {
    v88 = 5;
  }
  v89 = a25;
  v234 = v88;
  if ( !a24 )
    v56 = "NULL";
  v235 = 0;
  v233 = v56;
  if ( a25 )
  {
    v90 = -1LL;
    do
      ++v90;
    while ( a25[v90] );
    v91 = v90 + 1;
  }
  else
  {
    v91 = 5;
  }
  v92 = a26;
  v237 = v91;
  if ( !a25 )
    v89 = "NULL";
  v238 = 0;
  v236 = v89;
  if ( a26 )
  {
    v93 = -1LL;
    do
      ++v93;
    while ( a26[v93] );
    v94 = v93 + 1;
  }
  else
  {
    v94 = 5;
  }
  v240 = v94;
  v241 = 0;
  if ( !a26 )
    v92 = "NULL";
  v239 = v92;
  v95 = a27;
  if ( a27 )
  {
    v96 = -1LL;
    do
      ++v96;
    while ( a27[v96] );
    v97 = v96 + 1;
  }
  else
  {
    v97 = 5;
  }
  v243 = v97;
  v244 = 0;
  if ( !a27 )
    v95 = "NULL";
  v242 = v95;
  v98 = a28;
  if ( a28 )
  {
    v99 = -1LL;
    do
      ++v99;
    while ( a28[v99] );
    v100 = v99 + 1;
  }
  else
  {
    v100 = 5;
  }
  v246 = v100;
  v247 = 0;
  if ( !a28 )
    v98 = "NULL";
  v245 = v98;
  v101 = a29;
  if ( a29 )
  {
    v102 = -1LL;
    do
      ++v102;
    while ( a29[v102] );
    v103 = v102 + 1;
  }
  else
  {
    v103 = 5;
  }
  v249 = v103;
  v250 = 0;
  if ( !a29 )
    v101 = "NULL";
  v248 = v101;
  v104 = a30;
  if ( a30 )
  {
    v105 = -1LL;
    do
      ++v105;
    while ( a30[v105] );
    v106 = v105 + 1;
  }
  else
  {
    v106 = 5;
  }
  v252 = v106;
  v253 = 0;
  if ( !a30 )
    v104 = "NULL";
  v251 = v104;
  v107 = a31;
  if ( a31 )
  {
    v108 = -1LL;
    do
      ++v108;
    while ( a31[v108] );
    v109 = v108 + 1;
  }
  else
  {
    v109 = 5;
  }
  v255 = v109;
  v256 = 0;
  if ( !a31 )
    v107 = "NULL";
  v254 = v107;
  v110 = a32;
  if ( a32 )
  {
    v111 = -1LL;
    do
      ++v111;
    while ( a32[v111] );
    v112 = v111 + 1;
  }
  else
  {
    v112 = 5;
  }
  v258 = v112;
  v259 = 0;
  if ( !a32 )
    v110 = "NULL";
  v257 = v110;
  v113 = a33;
  if ( a33 )
  {
    v114 = -1LL;
    do
      ++v114;
    while ( a33[v114] );
    v115 = v114 + 1;
  }
  else
  {
    v115 = 5;
  }
  v261 = v115;
  v262 = 0;
  if ( !a33 )
    v113 = "NULL";
  v260 = v113;
  v116 = a34;
  if ( a34 )
  {
    v117 = -1LL;
    do
      ++v117;
    while ( a34[v117] );
    v118 = v117 + 1;
  }
  else
  {
    v118 = 5;
  }
  v264 = v118;
  v265 = 0;
  if ( !a34 )
    v116 = "NULL";
  v263 = v116;
  v119 = a35;
  if ( a35 )
  {
    v120 = -1LL;
    do
      ++v120;
    while ( a35[v120] );
    v121 = v120 + 1;
  }
  else
  {
    v121 = 5;
  }
  v267 = v121;
  v268 = 0;
  if ( !a35 )
    v119 = "NULL";
  v266 = v119;
  v122 = a36;
  if ( a36 )
  {
    v123 = -1LL;
    do
      ++v123;
    while ( a36[v123] );
    v124 = v123 + 1;
  }
  else
  {
    v124 = 5;
  }
  v270 = v124;
  v271 = 0;
  if ( !a36 )
    v122 = "NULL";
  v269 = v122;
  v125 = a37;
  if ( a37 )
  {
    v126 = -1LL;
    do
      ++v126;
    while ( a37[v126] );
    v127 = v126 + 1;
  }
  else
  {
    v127 = 5;
  }
  v273 = v127;
  v274 = 0;
  if ( !a37 )
    v125 = "NULL";
  v272 = v125;
  v128 = a38;
  if ( a38 )
  {
    v129 = -1LL;
    do
      ++v129;
    while ( a38[v129] );
    v130 = v129 + 1;
  }
  else
  {
    v130 = 5;
  }
  v276 = v130;
  v277 = 0;
  if ( !a38 )
    v128 = "NULL";
  v275 = v128;
  v131 = a39;
  if ( a39 )
  {
    v132 = -1LL;
    do
      ++v132;
    while ( a39[v132] );
    v133 = v132 + 1;
  }
  else
  {
    v133 = 5;
  }
  v279 = v133;
  v280 = 0;
  if ( !a39 )
    v131 = "NULL";
  v278 = v131;
  v134 = a40;
  if ( a40 )
  {
    v135 = -1LL;
    do
      ++v135;
    while ( a40[v135] );
    v136 = v135 + 1;
  }
  else
  {
    v136 = 5;
  }
  v282 = v136;
  v283 = 0;
  if ( !a40 )
    v134 = "NULL";
  v281 = v134;
  v137 = a41;
  if ( a41 )
  {
    v138 = -1LL;
    do
      ++v138;
    while ( a41[v138] );
    v139 = v138 + 1;
  }
  else
  {
    v139 = 5;
  }
  v285 = v139;
  v286 = 0;
  if ( !a41 )
    v137 = "NULL";
  v284 = v137;
  v140 = a42;
  if ( a42 )
  {
    v141 = -1LL;
    do
      ++v141;
    while ( a42[v141] );
    v142 = v141 + 1;
  }
  else
  {
    v142 = 5;
  }
  v288 = v142;
  v289 = 0;
  if ( !a42 )
    v140 = "NULL";
  v287 = v140;
  v143 = a43;
  if ( a43 )
  {
    v144 = -1LL;
    do
      ++v144;
    while ( a43[v144] );
    v145 = v144 + 1;
  }
  else
  {
    v145 = 5;
  }
  v291 = v145;
  v292 = 0;
  if ( !a43 )
    v143 = "NULL";
  v290 = v143;
  v146 = a44;
  if ( a44 )
  {
    v147 = -1LL;
    do
      ++v147;
    while ( a44[v147] );
    v148 = v147 + 1;
  }
  else
  {
    v148 = 5;
  }
  v294 = v148;
  v295 = 0;
  if ( !a44 )
    v146 = "NULL";
  v293 = v146;
  v149 = a45;
  if ( a45 )
  {
    v150 = -1LL;
    do
      ++v150;
    while ( a45[v150] );
    v151 = v150 + 1;
  }
  else
  {
    v151 = 5;
  }
  v297 = v151;
  v298 = 0;
  if ( !a45 )
    v149 = "NULL";
  v296 = v149;
  v152 = a46;
  if ( a46 )
  {
    v153 = -1LL;
    do
      ++v153;
    while ( a46[v153] );
    v154 = v153 + 1;
  }
  else
  {
    v154 = 5;
  }
  v300 = v154;
  v301 = 0;
  if ( !a46 )
    v152 = "NULL";
  v299 = v152;
  v155 = a47;
  if ( a47 )
  {
    v156 = -1LL;
    do
      ++v156;
    while ( a47[v156] );
    v157 = v156 + 1;
  }
  else
  {
    v157 = 5;
  }
  v303 = v157;
  v304 = 0;
  if ( !a47 )
    v155 = "NULL";
  v302 = v155;
  v158 = a48;
  if ( a48 )
  {
    v159 = -1LL;
    do
      ++v159;
    while ( a48[v159] );
    v160 = v159 + 1;
  }
  else
  {
    v160 = 5;
  }
  v306 = v160;
  v307 = 0;
  if ( !a48 )
    v158 = "NULL";
  v305 = v158;
  v161 = a49;
  if ( a49 )
  {
    v162 = -1LL;
    do
      ++v162;
    while ( a49[v162] );
    v163 = v162 + 1;
  }
  else
  {
    v163 = 5;
  }
  v309 = v163;
  v310 = 0;
  if ( !a49 )
    v161 = "NULL";
  v308 = v161;
  v164 = a50;
  if ( a50 )
  {
    v165 = -1LL;
    do
      ++v165;
    while ( a50[v165] );
    v166 = v165 + 1;
  }
  else
  {
    v166 = 5;
  }
  v312 = v166;
  v313 = 0;
  if ( !a50 )
    v164 = "NULL";
  v311 = v164;
  v167 = a51;
  if ( a51 )
  {
    v168 = -1LL;
    do
      ++v168;
    while ( a51[v168] );
    v169 = v168 + 1;
  }
  else
  {
    v169 = 5;
  }
  v315 = v169;
  v316 = 0;
  if ( !a51 )
    v167 = "NULL";
  v314 = v167;
  v170 = a52;
  if ( a52 )
  {
    v171 = -1LL;
    do
      ++v171;
    while ( a52[v171] );
    v172 = v171 + 1;
  }
  else
  {
    v172 = 5;
  }
  v318 = v172;
  v319 = 0;
  if ( !a52 )
    v170 = "NULL";
  v317 = v170;
  v173 = a53;
  if ( a53 )
  {
    v174 = -1LL;
    do
      ++v174;
    while ( a53[v174] );
    v175 = v174 + 1;
  }
  else
  {
    v175 = 5;
  }
  v321 = v175;
  v322 = 0;
  if ( !a53 )
    v173 = "NULL";
  v320 = v173;
  v176 = a54;
  if ( a54 )
  {
    v177 = -1LL;
    do
      ++v177;
    while ( a54[v177] );
    v178 = v177 + 1;
  }
  else
  {
    v178 = 5;
  }
  v324 = v178;
  v179 = a55;
  if ( !a54 )
    v176 = "NULL";
  v325 = 0;
  v323 = v176;
  if ( a55 )
  {
    do
      ++v58;
    while ( a55[v58] );
    v180 = (unsigned int)(v58 + 1);
  }
  else
  {
    v180 = 5LL;
  }
  v327 = v180;
  v328 = 0;
  if ( !a55 )
    v179 = "NULL";
  v326 = v179;
  return sub_1400031E4(v180, &stru_14014A330, 0LL, 0x35u, &v182);
}
