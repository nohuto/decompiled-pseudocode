/*
 * XREFs of SymCryptSha1AppendBlocks @ 0x1800E9570
 * Callers:
 *     SymCryptSha1Result @ 0x180024140 (SymCryptSha1Result.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha1AppendBlocks(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // r11d
  int v5; // edi
  int v6; // r12d
  int v7; // r10d
  int v8; // r9d
  unsigned int *v9; // rbp
  int v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // r11d
  unsigned __int32 v15; // ebx
  int v16; // edx
  unsigned __int32 v17; // r14d
  int v18; // r8d
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // r10d
  int v23; // r8d
  unsigned __int32 v24; // r15d
  int v25; // r9d
  int v26; // ecx
  int v27; // eax
  int v28; // r9d
  unsigned __int32 v29; // r12d
  unsigned __int32 v30; // r10d
  unsigned __int32 v31; // r13d
  unsigned __int32 v32; // r11d
  int v33; // edx
  int v34; // r10d
  int v35; // ecx
  int v36; // r11d
  int v37; // r8d
  int v38; // ecx
  int v39; // edx
  int v40; // r9d
  int v41; // ecx
  int v42; // r8d
  int v43; // r10d
  int v44; // ecx
  int v45; // r9d
  int v46; // r11d
  int v47; // ecx
  int v48; // r10d
  int v49; // edx
  int v50; // r8d
  int v51; // r11d
  int v52; // ecx
  int v53; // edx
  int v54; // r9d
  int v55; // ecx
  int v56; // r8d
  int v57; // r10d
  int v58; // ecx
  int v59; // r9d
  int v60; // esi
  int v61; // ecx
  int v62; // r10d
  int v63; // eax
  int v64; // edi
  int v65; // esi
  int v66; // ebp
  int v67; // edi
  int v68; // r11d
  int v69; // ebp
  int v70; // r11d
  int v71; // ebx
  int v72; // edi
  int v73; // ebx
  int v74; // ecx
  int v75; // r11d
  int v76; // edx
  unsigned __int32 v77; // esi
  int v78; // r8d
  int v79; // eax
  int v80; // r8d
  unsigned __int32 v81; // ebp
  int v82; // r8d
  int v83; // ebx
  unsigned __int32 v84; // r13d
  int v85; // r9d
  int v86; // edx
  int v87; // ecx
  int v88; // r14d
  int v89; // r8d
  int v90; // r10d
  int v91; // r11d
  int v92; // r9d
  int v93; // ecx
  int v94; // r10d
  int v95; // edx
  int v96; // ecx
  int v97; // r11d
  int v98; // r8d
  int v99; // r9d
  int v100; // edx
  int v101; // r15d
  int v102; // ecx
  int v103; // r8d
  int v104; // r10d
  int v105; // ecx
  int v106; // r9d
  unsigned __int32 v107; // ebx
  int v108; // r11d
  int v109; // r12d
  int v110; // ebp
  int v111; // ecx
  int v112; // r10d
  int v113; // edx
  int v114; // ecx
  int v115; // r11d
  int v116; // r8d
  int v117; // ecx
  int v118; // edx
  int v119; // edi
  int v120; // r9d
  int v121; // ecx
  int v122; // r8d
  int v123; // r10d
  int v124; // r12d
  int v125; // ecx
  int v126; // r9d
  int v127; // r11d
  int v128; // esi
  int v129; // edi
  int v130; // ecx
  int v131; // r10d
  int v132; // edx
  int v133; // ecx
  int v134; // r11d
  int v135; // r8d
  int v136; // ecx
  int v137; // edx
  int v138; // r9d
  int v139; // ecx
  int v140; // r8d
  int v141; // esi
  int v142; // r10d
  int v143; // ecx
  int v144; // r9d
  int v145; // r11d
  int v146; // ecx
  int v147; // r10d
  int v148; // ebx
  int v149; // r8d
  int v150; // r15d
  int v151; // r11d
  int v152; // ecx
  int v153; // eax
  int v154; // ebx
  int v155; // r9d
  int v156; // eax
  int v157; // edi
  int v158; // ecx
  int v159; // r8d
  int v160; // r10d
  int v161; // ecx
  int v162; // r9d
  int v163; // r11d
  int v164; // ebx
  int v165; // r10d
  int v166; // r13d
  int v167; // ecx
  int v168; // r11d
  int v169; // r8d
  int v170; // ecx
  int v171; // ebx
  int v172; // r9d
  int v173; // ecx
  int v174; // r8d
  int v175; // r10d
  int v176; // ecx
  int v177; // r9d
  int v178; // r11d
  int v179; // ecx
  int v180; // r10d
  int v181; // eax
  int v182; // r12d
  int v183; // ebx
  int v184; // ecx
  int v185; // r11d
  int v186; // ecx
  int v187; // eax
  int v188; // r8d
  int v189; // ecx
  int v190; // ebx
  int v191; // r9d
  int v192; // ecx
  int v193; // r8d
  int v194; // r10d
  int v195; // ecx
  int v196; // r9d
  int v197; // eax
  int v198; // r11d
  int v199; // ecx
  int v200; // r10d
  int v201; // esi
  int v202; // ecx
  int v203; // eax
  int v204; // edi
  int v205; // ecx
  int v206; // r11d
  int v207; // ebx
  int v208; // r8d
  int v209; // ebx
  int v210; // ecx
  int v211; // edi
  int v212; // r9d
  int v213; // ecx
  int v214; // ebx
  int v215; // r10d
  int v216; // ecx
  int v217; // r9d
  int v218; // r11d
  int v219; // eax
  int v220; // ecx
  int v221; // r10d
  int v222; // ecx
  int v223; // eax
  int v224; // r8d
  int v225; // r15d
  int v226; // r11d
  int v227; // edx
  int v228; // eax
  int v229; // r8d
  int v230; // r9d
  int v231; // eax
  int v232; // edx
  int v233; // r10d
  int v234; // ebp
  int v235; // eax
  int v236; // r9d
  int v237; // r12d
  int v238; // esi
  int v239; // edi
  int v240; // r11d
  int v241; // eax
  int v242; // r10d
  int v243; // r8d
  int v244; // eax
  int v245; // r11d
  int v246; // edx
  int v247; // eax
  int v248; // r8d
  int v249; // r9d
  int v250; // eax
  int v251; // edx
  int v252; // r13d
  int v253; // r10d
  int v254; // r12d
  int v255; // eax
  int v256; // r9d
  int v257; // r11d
  int v258; // r15d
  int v259; // r14d
  int v260; // eax
  int v261; // r10d
  int v262; // edi
  int v263; // eax
  int v264; // r11d
  int v265; // esi
  int v266; // eax
  int v267; // edi
  int v268; // edx
  int v269; // r9d
  int v270; // eax
  int v271; // esi
  int v272; // ebx
  int v273; // ebp
  int v274; // eax
  int v275; // r9d
  int v276; // r8d
  int v277; // eax
  int v278; // ebx
  int v279; // r11d
  int v280; // ebp
  int v281; // eax
  int v282; // r8d
  int v283; // r10d
  int v284; // eax
  int v285; // r11d
  int v286; // r9d
  int v287; // r12d
  int v288; // r10d
  int v289; // ecx
  int v290; // r11d
  int v291; // r8d
  int v292; // ecx
  int v293; // ecx
  int v294; // ecx
  bool v295; // zf
  unsigned __int32 v297; // [rsp+0h] [rbp-F8h]
  int v298; // [rsp+0h] [rbp-F8h]
  int v299; // [rsp+0h] [rbp-F8h]
  int v300; // [rsp+0h] [rbp-F8h]
  int v301; // [rsp+0h] [rbp-F8h]
  int v302; // [rsp+4h] [rbp-F4h]
  int v303; // [rsp+4h] [rbp-F4h]
  int v304; // [rsp+4h] [rbp-F4h]
  int v305; // [rsp+4h] [rbp-F4h]
  unsigned __int32 v306; // [rsp+8h] [rbp-F0h]
  int v307; // [rsp+8h] [rbp-F0h]
  int v308; // [rsp+8h] [rbp-F0h]
  int v309; // [rsp+8h] [rbp-F0h]
  int v310; // [rsp+8h] [rbp-F0h]
  unsigned __int32 v311; // [rsp+Ch] [rbp-ECh]
  int v312; // [rsp+Ch] [rbp-ECh]
  int v313; // [rsp+Ch] [rbp-ECh]
  int v314; // [rsp+Ch] [rbp-ECh]
  int v315; // [rsp+Ch] [rbp-ECh]
  unsigned __int32 v316; // [rsp+10h] [rbp-E8h]
  int v317; // [rsp+10h] [rbp-E8h]
  int v318; // [rsp+10h] [rbp-E8h]
  int v319; // [rsp+10h] [rbp-E8h]
  int v320; // [rsp+10h] [rbp-E8h]
  unsigned __int32 v321; // [rsp+14h] [rbp-E4h]
  int v322; // [rsp+14h] [rbp-E4h]
  int v323; // [rsp+14h] [rbp-E4h]
  int v324; // [rsp+14h] [rbp-E4h]
  int v325; // [rsp+18h] [rbp-E0h]
  int v326; // [rsp+18h] [rbp-E0h]
  int v327; // [rsp+18h] [rbp-E0h]
  int v328; // [rsp+18h] [rbp-E0h]
  int v329; // [rsp+1Ch] [rbp-DCh]
  int v330; // [rsp+1Ch] [rbp-DCh]
  int v331; // [rsp+1Ch] [rbp-DCh]
  int v332; // [rsp+1Ch] [rbp-DCh]
  int v333; // [rsp+20h] [rbp-D8h]
  int v334; // [rsp+20h] [rbp-D8h]
  int v335; // [rsp+20h] [rbp-D8h]
  unsigned __int32 v336; // [rsp+24h] [rbp-D4h]
  int v337; // [rsp+24h] [rbp-D4h]
  int v338; // [rsp+24h] [rbp-D4h]
  int v339; // [rsp+24h] [rbp-D4h]
  unsigned __int32 v340; // [rsp+28h] [rbp-D0h]
  int v341; // [rsp+28h] [rbp-D0h]
  int v342; // [rsp+28h] [rbp-D0h]
  int v343; // [rsp+28h] [rbp-D0h]
  int v344; // [rsp+2Ch] [rbp-CCh]
  int v345; // [rsp+2Ch] [rbp-CCh]
  int v346; // [rsp+2Ch] [rbp-CCh]
  unsigned __int32 v347; // [rsp+30h] [rbp-C8h]
  int v348; // [rsp+30h] [rbp-C8h]
  int v349; // [rsp+30h] [rbp-C8h]
  unsigned __int32 v350; // [rsp+34h] [rbp-C4h]
  int v351; // [rsp+34h] [rbp-C4h]
  int v352; // [rsp+34h] [rbp-C4h]
  int v353; // [rsp+38h] [rbp-C0h]
  int v354; // [rsp+38h] [rbp-C0h]
  unsigned __int32 v355; // [rsp+3Ch] [rbp-BCh]
  int v356; // [rsp+3Ch] [rbp-BCh]
  int v357; // [rsp+3Ch] [rbp-BCh]
  unsigned __int32 v358; // [rsp+40h] [rbp-B8h]
  int v359; // [rsp+40h] [rbp-B8h]
  int v360; // [rsp+40h] [rbp-B8h]
  int v361; // [rsp+44h] [rbp-B4h]
  int v362; // [rsp+48h] [rbp-B0h]
  int v363; // [rsp+4Ch] [rbp-ACh]
  int v364; // [rsp+50h] [rbp-A8h]
  int v365; // [rsp+54h] [rbp-A4h]
  __int64 v366; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v367; // [rsp+60h] [rbp-98h]
  unsigned __int64 v369; // [rsp+70h] [rbp-88h]

  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[4];
  v8 = a1[3];
  if ( a3 >= 0x40 )
  {
    v361 = *a1;
    v9 = (unsigned int *)(a2 + 8);
    v367 = a3 >> 6;
    v362 = a1[1];
    v363 = a1[2];
    v369 = -64LL * (a3 >> 6) + a3;
    v364 = a1[3];
    v365 = a1[4];
    v366 = a2 + 8;
    do
    {
      v10 = __ROL4__(v4, 5);
      v11 = v5 & (v6 ^ v8);
      v12 = __ROR4__(v5, 2);
      v13 = v4 & (v6 ^ v12);
      v14 = __ROR4__(v4, 2);
      v15 = _byteswap_ulong(*(v9 - 2));
      v16 = v7 + v15 + v10 + 1518500249 + (v8 ^ v11);
      v17 = _byteswap_ulong(*(v9 - 1));
      v18 = v17 + __ROL4__(v16, 5) + (v6 ^ v13) + v8 + 1518500249;
      v19 = __ROL4__(v18, 5);
      v20 = v12 ^ v16 & (v12 ^ v14);
      v21 = __ROR4__(v16, 2);
      v22 = v18 & (v21 ^ v14);
      v23 = __ROR4__(v18, 2);
      v24 = _byteswap_ulong(*v9);
      v25 = v24 + v19 + v20 + v6 + 1518500249;
      v26 = v25 & (v21 ^ v23);
      v27 = v12 + 1518500249 + __ROL4__(v25, 5);
      v28 = __ROR4__(v25, 2);
      v355 = _byteswap_ulong(v9[3]);
      v29 = _byteswap_ulong(v9[1]);
      v30 = v29 + v27 + (v14 ^ v22);
      v31 = _byteswap_ulong(v9[2]);
      v32 = v31 + (v21 ^ v26) + 1518500249 + __ROL4__(v30, 5) + v14;
      v33 = v355 + 1518500249 + __ROL4__(v32, 5) + (v23 ^ v30 & (v23 ^ v28)) + v21;
      v34 = __ROR4__(v30, 2);
      v336 = _byteswap_ulong(v9[4]);
      v35 = v28 ^ v32 & (v28 ^ v34);
      v36 = __ROR4__(v32, 2);
      v37 = v336 + __ROL4__(v33, 5) + 1518500249 + v35 + v23;
      v38 = v34 ^ v33 & (v34 ^ v36);
      v39 = __ROR4__(v33, 2);
      v347 = _byteswap_ulong(v9[5]);
      v297 = _byteswap_ulong(v9[7]);
      v40 = v347 + 1518500249 + __ROL4__(v37, 5) + v38 + v28;
      v41 = v36 ^ v37 & (v36 ^ v39);
      v42 = __ROR4__(v37, 2);
      v350 = _byteswap_ulong(v9[6]);
      v43 = v350 + __ROL4__(v40, 5) + 1518500249 + v41 + v34;
      v44 = v39 ^ v40 & (v39 ^ v42);
      v45 = __ROR4__(v40, 2);
      v46 = v297 + __ROL4__(v43, 5) + 1518500249 + v44 + v36;
      v47 = v42 ^ v43 & (v42 ^ v45);
      v48 = __ROR4__(v43, 2);
      v321 = _byteswap_ulong(v9[8]);
      v49 = v321 + __ROL4__(v46, 5) + 1518500249 + v47 + v39;
      v358 = _byteswap_ulong(v9[9]);
      v50 = v358 + __ROL4__(v49, 5) + 1518500249 + (v45 ^ v46 & (v45 ^ v48)) + v42;
      v51 = __ROR4__(v46, 2);
      v306 = _byteswap_ulong(v9[10]);
      v52 = v49 & (v48 ^ v51);
      v53 = __ROR4__(v49, 2);
      v54 = v306 + __ROL4__(v50, 5) + 1518500249 + (v48 ^ v52) + v45;
      v55 = v51 ^ v50 & (v51 ^ v53);
      v56 = __ROR4__(v50, 2);
      v311 = _byteswap_ulong(v9[11]);
      v57 = v311 + __ROL4__(v54, 5) + 1518500249 + v55 + v48;
      v58 = v53 ^ v54 & (v53 ^ v56);
      v59 = __ROR4__(v54, 2);
      v316 = _byteswap_ulong(v9[12]);
      v60 = v51 + 1518500249 + v58 + __ROL4__(v57, 5) + v316;
      v61 = v56 ^ v57 & (v56 ^ v59);
      v62 = __ROR4__(v57, 2);
      v63 = __ROL4__(v60, 5);
      v64 = v59 ^ v60 & (v59 ^ v62);
      v65 = __ROR4__(v60, 2);
      v340 = _byteswap_ulong(v9[13]);
      v329 = __ROL4__(v15 ^ v24 ^ v350 ^ v311, 1);
      v66 = v340 + v63 + v61 + v53 + 1518500249;
      v67 = v56 + v329 + __ROL4__(v66, 5) + 1518500249 + v64;
      v344 = __ROL4__(v17 ^ v29 ^ v297 ^ v316, 1);
      v325 = __ROL4__(v24 ^ v31 ^ v321 ^ v340, 1);
      v68 = v344 + __ROL4__(v67, 5) + 1518500249 + (v62 ^ v66 & (v62 ^ v65));
      v69 = __ROR4__(v66, 2);
      v70 = v59 + v68;
      v71 = v67 & (v65 ^ v69);
      v72 = __ROR4__(v67, 2);
      v73 = v62 + v325 + __ROL4__(v70, 5) + 1518500249 + (v65 ^ v71);
      v74 = v69 ^ v70 & (v69 ^ v72);
      v302 = __ROL4__(v29 ^ v355 ^ v358 ^ v329, 1);
      v75 = __ROR4__(v70, 2);
      v76 = v65 + 1518500249 + v74 + __ROL4__(v73, 5) + v302;
      v77 = v347;
      v78 = __ROL4__(v31 ^ v336 ^ v306 ^ v344, 1);
      v79 = v78 + __ROL4__(v76, 5);
      v333 = v78;
      v80 = v69 + 1859775393;
      v81 = v311;
      v82 = v79 + (v73 ^ v72 ^ v75) + v80;
      v83 = __ROR4__(v73, 2);
      v348 = __ROL4__(v355 ^ v347 ^ v311 ^ v325, 1);
      v84 = v316;
      v85 = v72 + __ROL4__(v82, 5) + (v83 ^ v76 ^ v75) + v348 + 1859775393;
      v86 = __ROR4__(v76, 2);
      v87 = v82 ^ v83 ^ v86;
      v88 = __ROL4__(v336 ^ v350 ^ v316 ^ v302, 1);
      v89 = __ROR4__(v82, 2);
      v90 = v75 + __ROL4__(v85, 5) + v87 + v88 + 1859775393;
      v337 = __ROL4__(v77 ^ v297 ^ v340 ^ v333, 1);
      v91 = v83 + (v85 ^ v86 ^ v89) + 1859775393 + __ROL4__(v90, 5) + v337;
      v317 = __ROL4__(v348 ^ v350 ^ v321 ^ v329, 1);
      v92 = __ROR4__(v85, 2);
      v93 = v317 + 1859775393 + __ROL4__(v91, 5) + (v90 ^ v89 ^ v92);
      v94 = __ROR4__(v90, 2);
      v95 = v93 + v86;
      v312 = __ROL4__(v88 ^ v297 ^ v358 ^ v344, 1);
      v96 = v91 ^ v92 ^ v94;
      v97 = __ROR4__(v91, 2);
      v98 = v312 + __ROL4__(v95, 5) + 1859775393 + v96 + v89;
      v298 = __ROL4__(v337 ^ v321 ^ v306 ^ v325, 1);
      v99 = v298 + 1859775393 + __ROL4__(v98, 5) + (v95 ^ v94 ^ v97) + v92;
      v100 = __ROR4__(v95, 2);
      v101 = v317;
      v102 = v98 ^ v97 ^ v100;
      v359 = __ROL4__(v317 ^ v358 ^ v81 ^ v302, 1);
      v103 = __ROR4__(v98, 2);
      v104 = v359 + 1859775393 + __ROL4__(v99, 5) + v102 + v94;
      v322 = __ROL4__(v312 ^ v306 ^ v84 ^ v333, 1);
      v105 = v99 ^ v100 ^ v103;
      v106 = __ROR4__(v99, 2);
      v107 = v340;
      v108 = v322 + 1859775393 + __ROL4__(v104, 5) + v105 + v97;
      v109 = v348 ^ v298 ^ v81 ^ v340;
      v110 = v329;
      v111 = v104 ^ v103 ^ v106;
      v307 = __ROL4__(v109, 1);
      v112 = __ROR4__(v104, 2);
      v113 = v307 + 1859775393 + __ROL4__(v108, 5) + v111 + v100;
      v341 = __ROL4__(v88 ^ v359 ^ v84 ^ v329, 1);
      v114 = v108 ^ v106 ^ v112;
      v115 = __ROR4__(v108, 2);
      v116 = v341 + __ROL4__(v113, 5) + 1859775393 + v114 + v103;
      v330 = __ROL4__(v337 ^ v322 ^ v107 ^ v344, 1);
      v117 = v113 ^ v112 ^ v115;
      v118 = __ROR4__(v113, 2);
      v119 = v325;
      v120 = v330 + 1859775393 + __ROL4__(v116, 5) + v117 + v106;
      v121 = v116 ^ v115 ^ v118;
      v318 = __ROL4__(v317 ^ v307 ^ v110 ^ v325, 1);
      v122 = __ROR4__(v116, 2);
      v123 = v318 + __ROL4__(v120, 5) + 1859775393 + v121 + v112;
      v124 = v312;
      v125 = v120 ^ v118 ^ v122;
      v326 = __ROL4__(v312 ^ v341 ^ v344 ^ v302, 1);
      v126 = __ROR4__(v120, 2);
      v127 = v326 + 1859775393 + __ROL4__(v123, 5) + v125 + v115;
      v128 = v330 ^ v119 ^ v333;
      v129 = v298;
      v130 = v123 ^ v122 ^ v126;
      v131 = __ROR4__(v123, 2);
      v313 = __ROL4__(v298 ^ v128, 1);
      v132 = v313 + __ROL4__(v127, 5) + 1859775393 + v130 + v118;
      v133 = v127 ^ v126 ^ v131;
      v303 = __ROL4__(v348 ^ v359 ^ v318 ^ v302, 1);
      v134 = __ROR4__(v127, 2);
      v135 = v303 + 1859775393 + __ROL4__(v132, 5) + v133 + v122;
      v334 = __ROL4__(v88 ^ v322 ^ v326 ^ v333, 1);
      v136 = v132 ^ v131 ^ v134;
      v137 = __ROR4__(v132, 2);
      v138 = v334 + 1859775393 + __ROL4__(v135, 5) + v136 + v126;
      v139 = v135 ^ v134 ^ v137;
      v299 = __ROL4__(v348 ^ v337 ^ v307 ^ v313, 1);
      v140 = __ROR4__(v135, 2);
      v141 = v341;
      v142 = v299 + 1859775393 + __ROL4__(v138, 5) + v139 + v131;
      v143 = v138 ^ v137 ^ v140;
      v345 = __ROL4__(v88 ^ v101 ^ v341 ^ v303, 1);
      v144 = __ROR4__(v138, 2);
      v145 = v345 + 1859775393 + __ROL4__(v142, 5) + v143 + v134;
      v351 = __ROL4__(v337 ^ v124 ^ v330 ^ v334, 1);
      v146 = v351 + __ROL4__(v145, 5) + (v142 ^ v140 ^ v144);
      v147 = __ROR4__(v142, 2);
      v148 = v146 + v137 + 1859775393;
      v349 = __ROL4__(v101 ^ v129 ^ v318 ^ v299, 1);
      v149 = v349 + (v145 & v147 | v144 & (v145 | v147)) - 1894007588 + __ROL4__(v148, 5) + v140;
      v150 = v326;
      v151 = __ROR4__(v145, 2);
      v152 = v147 & (v148 | v151);
      v338 = __ROL4__(v124 ^ v359 ^ v326 ^ v345, 1);
      v153 = v148 & v151;
      v154 = __ROR4__(v148, 2);
      v155 = v338 + (v153 | v152) - 1894007588 + __ROL4__(v149, 5) + v144;
      v156 = v129 ^ v322 ^ v313 ^ v351;
      v157 = v307;
      v342 = __ROL4__(v156, 1);
      v158 = v149 & v154 | v151 & (v149 | v154);
      v159 = __ROR4__(v149, 2);
      v160 = v342 + v158 - 1894007588 + __ROL4__(v155, 5) + v147;
      v308 = __ROL4__(v359 ^ v307 ^ v303 ^ v349, 1);
      v161 = v155 & v159 | v154 & (v155 | v159);
      v162 = __ROR4__(v155, 2);
      v163 = v308 + v161 - 1894007588 + __ROL4__(v160, 5) + v151;
      v323 = __ROL4__(v322 ^ v141 ^ v334 ^ v338, 1);
      v164 = v323 - 1894007588 + (v160 & v162 | v159 & (v160 | v162)) + __ROL4__(v163, 5) + v154;
      v165 = __ROR4__(v160, 2);
      v166 = v299;
      v300 = __ROL4__(v157 ^ v330 ^ v299 ^ v342, 1);
      v167 = v300 - 1894007588 + (v163 & v165 | v162 & (v163 | v165));
      v168 = __ROR4__(v163, 2);
      v169 = v167 + __ROL4__(v164, 5) + v159;
      v170 = v164 & v168 | v165 & (v164 | v168);
      v327 = __ROL4__(v141 ^ v318 ^ v345 ^ v308, 1);
      v171 = __ROR4__(v164, 2);
      v172 = v327 - 1894007588 + v170 + __ROL4__(v169, 5) + v162;
      v331 = __ROL4__(v330 ^ v150 ^ v351 ^ v323, 1);
      v356 = __ROL4__(v318 ^ v313 ^ v349 ^ v300, 1);
      v173 = v169 & v171 | v168 & (v169 | v171);
      v174 = __ROR4__(v169, 2);
      v175 = v331 - 1894007588 + v173 + __ROL4__(v172, 5) + v165;
      v176 = v172 & v174 | v171 & (v172 | v174);
      v177 = __ROR4__(v172, 2);
      v178 = v356 + v176 - 1894007588 + __ROL4__(v175, 5) + v168;
      v319 = __ROL4__(v150 ^ v303 ^ v338 ^ v327, 1);
      v179 = v175 & v177 | v174 & (v175 | v177);
      v180 = __ROR4__(v175, 2);
      v181 = v178 & v180;
      v182 = v345;
      v183 = v319 + v179 - 1894007588 + __ROL4__(v178, 5) + v171;
      v184 = v177 & (v178 | v180);
      v185 = __ROR4__(v178, 2);
      v314 = __ROL4__(v313 ^ v334 ^ v342 ^ v331, 1);
      v353 = __ROL4__(v303 ^ v166 ^ v308 ^ v356, 1);
      v186 = v314 + (v181 | v184) - 1894007588;
      v346 = __ROL4__(v334 ^ v345 ^ v323 ^ v319, 1);
      v187 = v183 & v185;
      v188 = v186 + __ROL4__(v183, 5) + v174;
      v335 = __ROL4__(v166 ^ v351 ^ v300 ^ v314, 1);
      v189 = v183 | v185;
      v190 = __ROR4__(v183, 2);
      v191 = v353 + (v187 | v180 & v189) - 1894007588 + __ROL4__(v188, 5) + v177;
      v192 = v188 & v190 | v185 & (v188 | v190);
      v193 = __ROR4__(v188, 2);
      v194 = v346 + v192 - 1894007588 + __ROL4__(v191, 5) + v180;
      v352 = __ROL4__(v351 ^ v338 ^ v331 ^ v346, 1);
      v195 = v191 & v193 | v190 & (v191 | v193);
      v196 = __ROR4__(v191, 2);
      v197 = v194 & v196;
      v198 = v335 + v195 - 1894007588 + __ROL4__(v194, 5) + v185;
      v199 = v193 & (v194 | v196);
      v200 = __ROR4__(v194, 2);
      v201 = __ROL4__(v182 ^ v349 ^ v327 ^ v353, 1);
      v202 = v201 + (v197 | v199) - 1894007588;
      v360 = v201;
      v203 = v198 & v200;
      v204 = v202 + v190 + __ROL4__(v198, 5);
      v205 = v196 & (v198 | v200);
      v206 = __ROR4__(v198, 2);
      v207 = v193 + __ROL4__(v204, 5);
      v208 = v342;
      v209 = v352 + (v203 | v205) - 1894007588 + v207;
      v343 = __ROL4__(v349 ^ v342 ^ v356 ^ v335, 1);
      v210 = (v204 & v206 | v200 & (v204 | v206)) - 1894007588;
      v211 = __ROR4__(v204, 2);
      v212 = v343 + v210 + __ROL4__(v209, 5) + v196;
      v339 = __ROL4__(v338 ^ v308 ^ v319 ^ v201, 1);
      v213 = v209 & v211 | v206 & (v209 | v211);
      v214 = __ROR4__(v209, 2);
      v215 = v339 + v213 - 1894007588 + __ROL4__(v212, 5) + v200;
      v304 = __ROL4__(v208 ^ v323 ^ v314 ^ v352, 1);
      v216 = v212 & v214 | v211 & (v212 | v214);
      v217 = __ROR4__(v212, 2);
      v218 = v304 + v216 - 1894007588 + __ROL4__(v215, 5) + v206;
      v219 = v215 & v217;
      v220 = v214 & (v215 | v217);
      v221 = __ROR4__(v215, 2);
      v222 = v219 | v220;
      v223 = v214 - 899497514 + (v221 ^ v218 ^ v217);
      v309 = __ROL4__(v308 ^ v300 ^ v353 ^ v343, 1);
      v224 = v309 + v222 - 1894007588 + v211 + __ROL4__(v218, 5);
      v225 = __ROL4__(v323 ^ v327 ^ v346 ^ v339, 1);
      v226 = __ROR4__(v218, 2);
      v227 = v223 + v225 + __ROL4__(v224, 5);
      v324 = v225;
      v301 = __ROL4__(v300 ^ v331 ^ v335 ^ v304, 1);
      v228 = v224 ^ v221 ^ v226;
      v229 = __ROR4__(v224, 2);
      v230 = v217 + v228 - 899497514 + v301 + __ROL4__(v227, 5);
      v231 = (v227 ^ v226 ^ v229) - 899497514;
      v232 = __ROR4__(v227, 2);
      v328 = __ROL4__(v327 ^ v356 ^ v201 ^ v309, 1);
      v233 = v328 + v231 + __ROL4__(v230, 5) + v221;
      v234 = __ROL4__(v301 ^ v356 ^ v314 ^ v343, 1);
      v235 = (v230 ^ v229 ^ v232) - 899497514;
      v236 = __ROR4__(v230, 2);
      v237 = v353;
      v238 = __ROL4__(v225 ^ v331 ^ v319 ^ v352, 1);
      v239 = v319 ^ v353 ^ v339;
      v240 = v238 + v235 + __ROL4__(v233, 5) + v226;
      v357 = v238;
      v332 = v234;
      v241 = (v233 ^ v232 ^ v236) - 899497514;
      v242 = __ROR4__(v233, 2);
      v354 = __ROL4__(v238 ^ v314 ^ v346 ^ v304, 1);
      v243 = v234 + v241 + __ROL4__(v240, 5) + v229;
      v320 = __ROL4__(v328 ^ v239, 1);
      v244 = (v240 ^ v236 ^ v242) - 899497514;
      v245 = __ROR4__(v240, 2);
      v246 = v320 + v244 + __ROL4__(v243, 5) + v232;
      v247 = (v243 ^ v242 ^ v245) - 899497514;
      v248 = __ROR4__(v243, 2);
      v249 = v354 + v247 + __ROL4__(v246, 5) + v236;
      v250 = (v246 ^ v245 ^ v248) - 899497514;
      v251 = __ROR4__(v246, 2);
      v315 = __ROL4__(v234 ^ v237 ^ v335 ^ v309, 1);
      v252 = __ROL4__(v301 ^ v354 ^ v335 ^ v352, 1);
      v253 = v315 + v250 + __ROL4__(v249, 5) + v242;
      v254 = __ROL4__(v225 ^ v320 ^ v346 ^ v360, 1);
      v255 = (v249 ^ v248 ^ v251) - 899497514;
      v256 = __ROR4__(v249, 2);
      v257 = v254 + v255 + __ROL4__(v253, 5) + v245;
      v258 = __ROL4__(v328 ^ v315 ^ v360 ^ v343, 1);
      v259 = __ROL4__(v238 ^ v254 ^ v352 ^ v339, 1);
      v260 = (v253 ^ v251 ^ v256) - 899497514;
      v261 = __ROR4__(v253, 2);
      v262 = v252 + v260 + v248 + __ROL4__(v257, 5);
      v263 = (v257 ^ v256 ^ v261) - 899497514;
      v264 = __ROR4__(v257, 2);
      v265 = v258 + v263 + v251 + __ROL4__(v262, 5);
      v266 = (v262 ^ v261 ^ v264) - 899497514;
      v267 = __ROR4__(v262, 2);
      v268 = __ROL4__(v234 ^ v252 ^ v343 ^ v304, 1);
      v269 = v259 + v266 + __ROL4__(v265, 5) + v256;
      v270 = (v265 ^ v264 ^ v267) - 899497514;
      v271 = __ROR4__(v265, 2);
      v272 = v268 + v270 + v261 + __ROL4__(v269, 5);
      v273 = __ROL4__(v320 ^ v258 ^ v339 ^ v309, 1);
      v274 = (v269 ^ v267 ^ v271) - 899497514;
      v275 = __ROR4__(v269, 2);
      v276 = v273 + v274 + v264 + __ROL4__(v272, 5);
      v305 = __ROL4__(v324 ^ v354 ^ v259 ^ v304, 1);
      v277 = v305 + (v272 ^ v271 ^ v275) - 899497514;
      v278 = __ROR4__(v272, 2);
      v310 = __ROL4__(v301 ^ v315 ^ v268 ^ v309, 1);
      v280 = __ROL4__(v324 ^ v328 ^ v254 ^ v273, 1);
      v279 = v277 + v267 + __ROL4__(v276, 5);
      v281 = v276 ^ v275 ^ v278;
      v282 = __ROR4__(v276, 2);
      v283 = v310 + v281 - 899497514 + v271 + __ROL4__(v279, 5);
      v284 = (v279 ^ v278 ^ v282) - 899497514;
      v285 = __ROR4__(v279, 2);
      v286 = v280 + v284 + __ROL4__(v283, 5) + v275;
      v287 = (v283 ^ v282 ^ v285) - 899497514 + v278 + __ROL4__(v301 ^ v357 ^ v252 ^ v305, 1) + __ROL4__(v286, 5);
      v288 = __ROR4__(v283, 2);
      v289 = (v286 ^ v285 ^ v288) - 899497514;
      v290 = __ROL4__(v357 ^ v320 ^ v259 ^ v280, 1) - 899497514 + v285;
      v291 = v289 + __ROL4__(v287, 5) + __ROL4__(v328 ^ v332 ^ v258 ^ v310, 1) + v282;
      v9 = (unsigned int *)(v366 + 64);
      v366 += 64LL;
      v292 = __ROR4__(v286, 2);
      v362 += v291;
      v5 = v362;
      v8 = v364 + v292;
      v293 = v288 ^ v292;
      v7 = v365 + v288;
      v294 = v361 + (v287 ^ v293);
      v6 = v363 + __ROR4__(v287, 2);
      v4 = v294 + __ROL4__(v291, 5) + v290;
      v295 = v367-- == 1;
      *a1 = v4;
      a1[1] = v362;
      a1[2] = v6;
      a1[3] = v8;
      a1[4] = v7;
      v361 = v4;
      v363 = v6;
      v364 = v8;
      v365 = v7;
    }
    while ( !v295 );
    a3 = v369;
  }
  *a4 = a3;
  return 0LL;
}
