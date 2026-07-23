/*
 * XREFs of LZ4HC_compress_generic @ 0x14062DBFC
 * Callers:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x14063808C (LZ4_compress_HC_extStateHC_fastReset.c)
 * Callees:
 *     LZ4HC_compress_generic_dictCtx @ 0x1406303C4 (LZ4HC_compress_generic_dictCtx.c)
 *     LZ4HC_countPattern @ 0x140637E48 (LZ4HC_countPattern.c)
 *     LZ4HC_reverseCountPattern @ 0x140637F38 (LZ4HC_reverseCountPattern.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall LZ4HC_compress_generic(__int64 a1, char *a2, _BYTE *a3, int *a4, int a5, __int64 a6, int a7)
{
  unsigned int v7; // r10d
  _DWORD *v8; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  char *v13; // r8
  __int64 v14; // rdx
  char *v15; // r11
  _BYTE *v16; // r14
  char *v17; // r12
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  _QWORD *v21; // rsi
  unsigned int v22; // ebx
  __int64 v23; // r13
  unsigned int v24; // r11d
  int v25; // edi
  int v26; // r9d
  unsigned int v27; // r12d
  unsigned int v28; // r8d
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  _DWORD *v32; // r8
  unsigned int v33; // r11d
  int v34; // r15d
  _DWORD *v35; // rbx
  __int64 v36; // rax
  _QWORD *v37; // rcx
  int v38; // ebx
  _QWORD *v39; // rdx
  unsigned __int64 v40; // rax
  _DWORD *v41; // r9
  unsigned __int64 v42; // r8
  unsigned int v46; // ecx
  unsigned int v48; // r14d
  signed int v49; // ecx
  bool v50; // cc
  char *v51; // rdi
  char *v52; // rdx
  _QWORD *v53; // rcx
  int v54; // edi
  unsigned __int64 v55; // rax
  _QWORD *v56; // r10
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r8
  _QWORD *v59; // rdx
  unsigned int v63; // ecx
  signed int v65; // edi
  _QWORD *v66; // r9
  _QWORD *v67; // rdx
  _QWORD *v68; // rcx
  unsigned __int64 v69; // rax
  _QWORD *v70; // r10
  unsigned __int64 v71; // r8
  unsigned int v74; // ecx
  unsigned int v77; // esi
  unsigned int v78; // r9d
  bool v79; // cf
  unsigned __int64 v80; // r11
  int v81; // r15d
  char *v82; // rbx
  unsigned __int64 v83; // r11
  unsigned __int64 v84; // rdi
  char *v85; // r11
  __int64 v86; // r8
  unsigned __int64 v87; // rax
  char *v88; // rdx
  unsigned int v89; // eax
  char *v90; // r8
  unsigned int v91; // r11d
  __int64 v92; // r8
  int v93; // eax
  int v94; // r11d
  unsigned int v95; // eax
  unsigned int v96; // r11d
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rdx
  __int64 v99; // rcx
  unsigned int v100; // ecx
  _DWORD *v101; // rcx
  unsigned __int64 v102; // rbx
  int v103; // r9d
  char *v104; // rax
  char *v105; // rsi
  int v106; // r15d
  __int64 v107; // r9
  __int64 v108; // rdx
  unsigned int v109; // r8d
  _QWORD *v110; // rdi
  unsigned int v111; // r12d
  __int64 v112; // r13
  int v113; // r10d
  _DWORD *v114; // rdx
  int v115; // r9d
  unsigned int v116; // ebx
  unsigned int v117; // r8d
  __int64 v118; // r9
  unsigned __int64 v119; // rdx
  unsigned __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rdx
  unsigned int v123; // r13d
  unsigned int v124; // r11d
  unsigned int v125; // r14d
  int v126; // ecx
  _DWORD *v127; // rbx
  int v128; // edi
  _DWORD *v129; // r8
  int v130; // edx
  __int64 v131; // rcx
  signed __int64 v132; // r10
  unsigned int v133; // eax
  __int64 v134; // r8
  _BYTE *v135; // rdx
  _QWORD *v136; // rcx
  _QWORD *v137; // rdx
  int v138; // ebx
  unsigned __int64 v139; // rax
  _DWORD *v140; // r9
  unsigned __int64 v141; // r8
  unsigned int v145; // ecx
  int v147; // ecx
  unsigned int v148; // ebx
  __int64 v149; // r15
  _DWORD *v150; // r12
  char *v151; // rcx
  _QWORD *v152; // rdx
  char *v153; // rdi
  int v154; // ebx
  unsigned __int64 v155; // rax
  _DWORD *v156; // r9
  unsigned __int64 v157; // r8
  unsigned int v161; // ecx
  char *v163; // r9
  signed int v164; // esi
  char *v165; // rbx
  _QWORD *v166; // rdx
  char *v167; // rcx
  unsigned __int64 v168; // rax
  char *v169; // r9
  unsigned __int64 v170; // r8
  unsigned int v173; // ecx
  int v176; // edx
  signed __int64 v177; // r15
  int v178; // r8d
  __int64 v179; // rcx
  _DWORD *v180; // r10
  signed __int64 v181; // rbx
  unsigned int v182; // eax
  __int64 v183; // r9
  _BYTE *v184; // r8
  int v185; // esi
  int v186; // r12d
  unsigned int v187; // r15d
  _DWORD *v188; // rcx
  _DWORD *v189; // rsi
  unsigned int v190; // eax
  unsigned int v191; // r9d
  _DWORD *v192; // rbx
  _DWORD *v193; // rdi
  unsigned __int64 v194; // rsi
  unsigned int v195; // r11d
  __int64 v196; // r8
  unsigned __int64 v197; // rax
  _QWORD *v198; // r13
  _QWORD *v199; // rdx
  unsigned int v200; // eax
  _QWORD *v201; // r8
  unsigned int v202; // edi
  __int64 v203; // r8
  unsigned __int64 v204; // rcx
  unsigned __int64 v205; // rdi
  int v206; // esi
  unsigned __int64 v207; // rdx
  unsigned int v208; // ecx
  unsigned __int64 v209; // r12
  int v210; // r8d
  int v211; // ecx
  unsigned __int64 v212; // rax
  unsigned int *v213; // r11
  unsigned int v214; // r9d
  unsigned int v215; // r8d
  unsigned int v216; // edx
  _QWORD *v217; // r15
  unsigned int v218; // r13d
  int v219; // r10d
  int v220; // r12d
  unsigned int v221; // ebx
  __int64 v222; // rax
  unsigned int v223; // r9d
  _DWORD *v224; // r8
  unsigned __int64 v225; // rdx
  unsigned __int64 v226; // rcx
  unsigned __int64 v227; // rcx
  __int64 v228; // r11
  __int64 v229; // rdx
  unsigned int v230; // r13d
  unsigned int v231; // edi
  _DWORD *v232; // rbx
  int v233; // r11d
  unsigned __int64 v234; // r8
  int v235; // edx
  __int64 v236; // rcx
  char *v237; // r10
  unsigned int v238; // eax
  __int64 v239; // r9
  _BYTE *v240; // rdx
  _QWORD *v241; // rcx
  _QWORD *v242; // rdx
  int v243; // r10d
  unsigned __int64 v244; // rbx
  unsigned int v247; // ecx
  int v250; // ecx
  __int64 v251; // rbx
  _DWORD *v252; // rsi
  _QWORD *v253; // rcx
  _QWORD *v254; // rdx
  _QWORD *v255; // r9
  int v256; // r11d
  unsigned int v259; // ecx
  signed int v262; // r11d
  _QWORD *v263; // r10
  _QWORD *v264; // rdx
  _QWORD *v265; // rcx
  unsigned int v269; // ecx
  int v271; // edx
  unsigned __int64 v272; // r10
  int v273; // r8d
  signed __int64 v274; // rbx
  __int64 v275; // rcx
  char *v276; // rsi
  unsigned int v277; // eax
  __int64 v278; // r10
  _BYTE *v279; // r8
  int v280; // r11d
  unsigned int v281; // r15d
  unsigned int v282; // r12d
  int v283; // r12d
  _DWORD *v284; // rbx
  unsigned __int64 v285; // r11
  unsigned __int64 v286; // rsi
  _DWORD *v287; // r11
  __int64 v288; // r8
  unsigned __int64 v289; // rax
  _DWORD *v290; // r13
  _DWORD *v291; // rdx
  unsigned int v292; // eax
  _DWORD *v293; // r9
  unsigned int v294; // r11d
  __int64 v295; // r8
  int v296; // eax
  int v297; // r11d
  unsigned __int64 v298; // rdx
  unsigned __int64 v299; // rcx
  unsigned __int64 v300; // rbx
  int v301; // eax
  unsigned int v302; // ecx
  _DWORD *v303; // r13
  char *v304; // rcx
  int v305; // ecx
  _DWORD *v306; // r11
  _BYTE *v307; // r15
  char *v308; // rsi
  _BYTE *v309; // r8
  char *v310; // r10
  unsigned __int64 v311; // r12
  _BYTE *v312; // r14
  unsigned __int64 v313; // r13
  unsigned __int128 v314; // rax
  _QWORD *v315; // rcx
  _WORD *v316; // r14
  unsigned __int64 v317; // rcx
  char v318; // al
  unsigned __int64 v319; // rcx
  unsigned __int64 v320; // rdx
  _BYTE *v321; // r14
  int v322; // ecx
  _DWORD *v323; // r11
  _BYTE *v324; // r8
  char *v325; // r10
  unsigned __int64 v326; // r12
  _BYTE *v327; // r14
  unsigned __int64 v328; // r13
  unsigned __int128 v329; // rax
  _QWORD *v330; // rcx
  _WORD *v331; // r14
  unsigned __int64 v332; // rcx
  char v333; // al
  unsigned __int64 v334; // rcx
  unsigned __int64 v335; // rdx
  _BYTE *v336; // r14
  char *v337; // r13
  char *v338; // r9
  unsigned __int64 v339; // rsi
  _BYTE *v340; // r14
  unsigned __int64 v341; // r12
  unsigned __int128 v342; // rax
  _QWORD *v343; // rcx
  _WORD *v344; // r14
  _BYTE *v345; // r14
  unsigned __int64 v346; // rcx
  char v347; // al
  unsigned __int64 v348; // rcx
  unsigned __int64 v349; // rdx
  _BYTE *v350; // r14
  char *v351; // r13
  char *v352; // r9
  unsigned __int64 v353; // rsi
  _BYTE *v354; // r14
  unsigned __int64 v355; // r12
  unsigned __int128 v356; // rax
  _QWORD *v357; // rcx
  _WORD *v358; // r14
  unsigned __int64 v359; // rcx
  char v360; // al
  unsigned __int64 v361; // rcx
  unsigned __int64 v362; // rdx
  _BYTE *v363; // r14
  _BYTE *v364; // r12
  char *v365; // r13
  _BYTE *v366; // r14
  unsigned __int64 v367; // rdi
  unsigned __int64 v368; // rsi
  unsigned __int128 v369; // rax
  _QWORD *v370; // rcx
  _WORD *v371; // r14
  unsigned __int64 v372; // rcx
  char v373; // al
  unsigned __int64 v374; // rcx
  unsigned __int64 v375; // rdx
  _BYTE *v376; // r14
  unsigned __int64 v377; // rdi
  unsigned __int64 v378; // r8
  _BYTE *v379; // r14
  unsigned __int64 v380; // rsi
  unsigned __int128 v381; // rax
  _QWORD *v382; // rcx
  __int64 v383; // r11
  _WORD *v384; // r14
  unsigned __int64 v385; // rcx
  char v386; // al
  unsigned __int64 v387; // rcx
  unsigned __int64 v388; // rdx
  _BYTE *v389; // r14
  int v390; // r14d
  size_t v391; // r12
  _BYTE *v392; // r8
  int v393; // esi
  _BYTE *v394; // r14
  size_t v395; // rdi
  unsigned __int128 v396; // rax
  int v397; // r14d
  int v399; // [rsp+28h] [rbp-D8h]
  int v400; // [rsp+40h] [rbp-C0h]
  int v401; // [rsp+40h] [rbp-C0h]
  unsigned int v402; // [rsp+40h] [rbp-C0h]
  unsigned int v403; // [rsp+44h] [rbp-BCh]
  unsigned int v404; // [rsp+44h] [rbp-BCh]
  unsigned int v405; // [rsp+44h] [rbp-BCh]
  _DWORD *v406; // [rsp+48h] [rbp-B8h]
  unsigned int v407; // [rsp+50h] [rbp-B0h]
  int v408; // [rsp+50h] [rbp-B0h]
  int v409; // [rsp+50h] [rbp-B0h]
  unsigned int v410; // [rsp+54h] [rbp-ACh]
  unsigned int v411; // [rsp+54h] [rbp-ACh]
  int v412; // [rsp+54h] [rbp-ACh]
  int v413; // [rsp+54h] [rbp-ACh]
  int v414; // [rsp+58h] [rbp-A8h]
  unsigned int v415; // [rsp+58h] [rbp-A8h]
  unsigned int v416; // [rsp+58h] [rbp-A8h]
  _QWORD *v417; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v418; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v419; // [rsp+68h] [rbp-98h]
  char *v420; // [rsp+70h] [rbp-90h]
  unsigned __int64 v421; // [rsp+70h] [rbp-90h]
  char *v422; // [rsp+78h] [rbp-88h]
  char *v423; // [rsp+78h] [rbp-88h]
  _DWORD *v424; // [rsp+78h] [rbp-88h]
  unsigned __int64 v425; // [rsp+80h] [rbp-80h]
  char *v426; // [rsp+88h] [rbp-78h]
  unsigned int v427; // [rsp+90h] [rbp-70h]
  unsigned int v428; // [rsp+90h] [rbp-70h]
  unsigned int v429; // [rsp+94h] [rbp-6Ch]
  unsigned int v430; // [rsp+94h] [rbp-6Ch]
  int v431; // [rsp+98h] [rbp-68h]
  int v432; // [rsp+98h] [rbp-68h]
  unsigned int v433; // [rsp+98h] [rbp-68h]
  unsigned __int64 v434; // [rsp+A0h] [rbp-60h]
  unsigned int v435; // [rsp+A8h] [rbp-58h]
  unsigned int v436; // [rsp+A8h] [rbp-58h]
  int v437; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v438; // [rsp+B0h] [rbp-50h]
  _QWORD *v439; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v440; // [rsp+B0h] [rbp-50h]
  __int64 v441; // [rsp+B8h] [rbp-48h]
  _DWORD *v442; // [rsp+B8h] [rbp-48h]
  _BYTE *v443; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v444; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v445; // [rsp+D0h] [rbp-30h]
  __int64 v446; // [rsp+D0h] [rbp-30h]
  int v447; // [rsp+DCh] [rbp-24h]
  unsigned __int64 v448; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v449; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v450; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v451; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v452; // [rsp+F8h] [rbp-8h]
  _DWORD *v453; // [rsp+100h] [rbp+0h]
  __int64 v454; // [rsp+100h] [rbp+0h]
  unsigned __int64 v455; // [rsp+108h] [rbp+8h]
  unsigned __int64 v456; // [rsp+108h] [rbp+8h]
  char *v457; // [rsp+110h] [rbp+10h]
  unsigned __int64 v458; // [rsp+138h] [rbp+38h]
  int v460; // [rsp+1A8h] [rbp+A8h]
  int v461; // [rsp+1B0h] [rbp+B0h]
  unsigned int v463; // [rsp+1C8h] [rbp+C8h]
  int v464; // [rsp+1C8h] [rbp+C8h]
  int v465; // [rsp+1C8h] [rbp+C8h]

  v461 = (int)a3;
  v460 = (int)a2;
  v7 = 0;
  v8 = a4;
  v11 = a1;
  if ( *(_QWORD *)(a1 + 262184) )
    return LZ4HC_compress_generic_dictCtx((void *)a1, a2, a5, v399, a7);
  if ( a7 == 2 && a5 < 1 )
    return v7;
  v12 = *a4;
  if ( (unsigned int)v12 > 0x7E000000 )
    return v7;
  *(_QWORD *)(a1 + 0x40000) += v12;
  v13 = a2;
  v14 = *a4;
  v15 = a2;
  v16 = a3;
  v17 = &a2[v14];
  v18 = (unsigned __int64)&a2[v14 - 12];
  v406 = a2;
  v426 = a2;
  v19 = (unsigned __int64)&a3[a5 - 5];
  if ( a7 != 2 )
    v19 = (unsigned __int64)&a3[a5];
  v434 = v19;
  v457 = v17;
  v451 = v18;
  v419 = (unsigned __int64)(v17 - 5);
  v443 = a3;
  v425 = 0LL;
  v448 = 0LL;
  *v8 = 0;
  if ( (int)v14 < 13 )
    goto LABEL_629;
  while ( 1 )
  {
    if ( (unsigned __int64)v13 > v18 )
      goto LABEL_628;
    v20 = *(unsigned int *)(v11 + 262172);
    v21 = *(_QWORD **)(v11 + 262152);
    v22 = v20;
    v23 = *(unsigned int *)(v11 + 262168);
    v24 = v23 + (_DWORD)v13 - (_DWORD)v21;
    v422 = (char *)v21;
    v463 = v24;
    v410 = *(_DWORD *)(v11 + 262172);
    v420 = *(char **)(v11 + 262160);
    if ( (int)v20 + 0x10000 <= v24 )
      v22 = v24 - 0xFFFF;
    v400 = 0;
    v431 = 256;
    v25 = 3;
    v444 = *(_QWORD *)(v11 + 262160) + (unsigned int)v23 - v20;
    v26 = 0;
    v414 = 3;
    v403 = v22;
    v27 = *v406;
    v435 = *v406;
    v438 = 0LL;
    v407 = 0;
    v28 = *(_DWORD *)(a1 + 262176);
    if ( v28 < v24 )
    {
      v29 = v28;
      do
      {
        v30 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v21 + v29 - v23)) >> 17;
        v31 = v28 - *(_DWORD *)(a1 + 4 * v30);
        if ( v31 > 0xFFFF )
          LOWORD(v31) = -1;
        ++v29;
        *(_WORD *)(a1 + 2LL * (unsigned __int16)v28 + 0x20000) = v31;
        *(_DWORD *)(a1 + 4 * v30) = v28++;
      }
      while ( v28 < v24 );
      v27 = v435;
      v26 = 0;
      v25 = 3;
      LODWORD(v20) = v410;
    }
    v11 = a1;
    v32 = v406;
    *(_DWORD *)(a1 + 262176) = v24;
    v33 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v406) >> 17));
    if ( v33 >= v22 )
    {
      while ( 1 )
      {
        v34 = v26;
        if ( v431 <= 0 )
        {
LABEL_101:
          v16 = v443;
          v7 = v407;
          v11 = a1;
          break;
        }
        --v431;
        if ( v33 < (unsigned int)v23 )
        {
          v51 = v420;
          v52 = &v420[v33 - (unsigned int)v20];
          if ( v33 > (int)v23 - 4 || *(_DWORD *)v52 != v27 )
          {
            v35 = v406;
            goto LABEL_92;
          }
          v53 = v32 + 1;
          v54 = (_DWORD)v32 + 4;
          v55 = (unsigned __int64)(v32 + 1);
          v56 = (_QWORD *)((char *)v32 + (unsigned int)v23 - v33);
          v57 = (unsigned __int64)(v32 + 1);
          v58 = (unsigned __int64)(v32 + 1);
          if ( (unsigned __int64)v56 > v419 )
            v56 = (_QWORD *)v419;
          v59 = v52 + 4;
          if ( v53 >= (_QWORD *)((char *)v56 - 7) )
          {
LABEL_49:
            while ( v55 < (unsigned __int64)v56 - 7 )
            {
              if ( *v59 != *v53 )
              {
                __asm { tzcnt   rax, r8 }
                v63 = ((unsigned int)_RAX >> 3) - v54 + (_DWORD)v53;
                goto LABEL_64;
              }
              v53 = (_QWORD *)(v57 + 8);
              ++v59;
              v55 = (unsigned __int64)v53;
              v57 += 8LL;
              v58 = (unsigned __int64)v53;
            }
            if ( v58 < (unsigned __int64)v56 - 3 && *(_DWORD *)v59 == *(_DWORD *)v53 )
            {
              v53 = (_QWORD *)((char *)v53 + 4);
              v59 = (_QWORD *)((char *)v59 + 4);
            }
            if ( v53 < (_QWORD *)((char *)v56 - 1) && *(_WORD *)v59 == *(_WORD *)v53 )
            {
              v53 = (_QWORD *)((char *)v53 + 2);
              v59 = (_QWORD *)((char *)v59 + 2);
            }
            if ( v53 < v56 && *(_BYTE *)v59 == *(_BYTE *)v53 )
              LODWORD(v53) = (_DWORD)v53 + 1;
            v63 = (_DWORD)v53 - v54;
          }
          else
          {
            if ( *v59 == *v53 )
            {
              v55 = (unsigned __int64)(v53 + 1);
              ++v59;
              v53 = (_QWORD *)v55;
              v57 = v55;
              v58 = v55;
              goto LABEL_49;
            }
            __asm { tzcnt   rcx, r8 }
            v63 = (unsigned int)_RCX >> 3;
          }
LABEL_64:
          v35 = v406;
          v65 = v63 + 4;
          v66 = (_QWORD *)((char *)v406 + (int)(v63 + 4));
          if ( v66 == v56 && (unsigned __int64)v56 < v419 )
          {
            v67 = v21;
            v68 = (_QWORD *)((char *)v406 + v65);
            v69 = (unsigned __int64)v68;
            v70 = v68;
            v71 = (unsigned __int64)v68;
            if ( (unsigned __int64)v66 >= v419 - 7 )
            {
              while ( v69 < v419 - 7 )
              {
                if ( *v67 != *v68 )
                {
                  __asm { tzcnt   rax, r8 }
                  v74 = ((unsigned int)_RAX >> 3) - (_DWORD)v66 + (_DWORD)v68;
                  goto LABEL_85;
                }
                v68 = v70 + 1;
                ++v67;
LABEL_73:
                v69 = (unsigned __int64)v68;
                v70 = v68;
                v71 = (unsigned __int64)v68;
              }
              if ( v71 < v419 - 3 && *(_DWORD *)v67 == *(_DWORD *)v68 )
              {
                v68 = (_QWORD *)((char *)v68 + 4);
                v67 = (_QWORD *)((char *)v67 + 4);
              }
              if ( (unsigned __int64)v68 < v419 - 1 && *(_WORD *)v67 == *(_WORD *)v68 )
              {
                v68 = (_QWORD *)((char *)v68 + 2);
                v67 = (_QWORD *)((char *)v67 + 2);
              }
              if ( (unsigned __int64)v68 < v419 && *(_BYTE *)v67 == *(_BYTE *)v68 )
                LODWORD(v68) = (_DWORD)v68 + 1;
              v74 = (_DWORD)v68 - (_DWORD)v66;
            }
            else
            {
              if ( *v21 == *v66 )
              {
                v68 = v66 + 1;
                v67 = v21 + 1;
                goto LABEL_73;
              }
              __asm { tzcnt   rcx, rdx }
              v74 = (unsigned int)_RCX >> 3;
            }
LABEL_85:
            v35 = v406;
            v65 += v74;
          }
          v48 = v463;
          v26 = v400;
          if ( v65 > v414 )
          {
            v414 = v65;
            v407 = v463 - v33;
          }
          v51 = v420;
        }
        else
        {
          v35 = v406;
          v36 = v33 - (unsigned int)v23;
          if ( *(_WORD *)((char *)v406 + v25 - 1) != *(_WORD *)((char *)v21 + v25 + v36 - 1)
            || *(_DWORD *)((char *)v21 + (unsigned int)v36) != v27 )
          {
            v51 = v420;
            goto LABEL_92;
          }
          v37 = v406 + 1;
          v38 = (_DWORD)v406 + 4;
          v39 = (_QWORD *)((char *)v21 + (unsigned int)v36 + 4);
          v40 = (unsigned __int64)(v406 + 1);
          v41 = v406 + 1;
          v42 = (unsigned __int64)(v406 + 1);
          if ( (unsigned __int64)(v406 + 1) >= v419 - 7 )
            goto LABEL_25;
          if ( *v37 != *v39 )
          {
            __asm { tzcnt   rcx, r8 }
            v46 = (unsigned int)_RCX >> 3;
          }
          else
          {
            v40 = (unsigned __int64)(v406 + 3);
            ++v39;
            v37 = v406 + 3;
            v41 = v406 + 3;
            v42 = (unsigned __int64)(v406 + 3);
LABEL_25:
            while ( v40 < v419 - 7 )
            {
              if ( *v37 != *v39 )
              {
                __asm { tzcnt   rax, r8 }
                v46 = ((unsigned int)_RAX >> 3) - v38 + (_DWORD)v37;
                goto LABEL_40;
              }
              v37 = v41 + 2;
              ++v39;
              v40 = (unsigned __int64)v37;
              v41 += 2;
              v42 = (unsigned __int64)v37;
            }
            if ( v42 < v419 - 3 && *(_DWORD *)v39 == *(_DWORD *)v37 )
            {
              v37 = (_QWORD *)((char *)v37 + 4);
              v39 = (_QWORD *)((char *)v39 + 4);
            }
            if ( (unsigned __int64)v37 < v419 - 1 && *(_WORD *)v39 == *(_WORD *)v37 )
            {
              v37 = (_QWORD *)((char *)v37 + 2);
              v39 = (_QWORD *)((char *)v39 + 2);
            }
            if ( (unsigned __int64)v37 < v419 && *(_BYTE *)v39 == *(_BYTE *)v37 )
              LODWORD(v37) = (_DWORD)v37 + 1;
            v46 = (_DWORD)v37 - v38;
          }
LABEL_40:
          v48 = v463;
          v49 = v46 + 4;
          v26 = v400;
          v50 = v49 <= v25;
          v51 = v420;
          v35 = v406;
          if ( !v50 )
          {
            v414 = v49;
            v407 = v463 - v33;
LABEL_92:
            v48 = v463;
          }
        }
        if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v33 + 0x20000) != 1 )
          goto LABEL_98;
        v77 = v33 - 1;
        if ( v26 )
        {
          v400 = v34;
          if ( v34 != 2 )
            goto LABEL_98;
        }
        else
        {
          if ( (_BYTE)v27 != HIBYTE(v27) || (unsigned __int16)v27 != HIWORD(v27) )
          {
            v400 = 1;
LABEL_98:
            v78 = v403;
LABEL_99:
            v33 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v33 + 0x20000);
            goto LABEL_100;
          }
          v400 = 2;
          v438 = (unsigned int)LZ4HC_countPattern(v35 + 1, v419, v27) + 4LL;
        }
        v78 = v403;
        if ( v77 < v403 || (unsigned int)v23 - v77 - 1 < 3 )
          goto LABEL_99;
        if ( v77 >= (unsigned int)v23 )
        {
          v81 = 0;
          v82 = &v422[v77 - (unsigned int)v23];
        }
        else
        {
          v81 = 1;
          v82 = &v51[v77 - v410];
        }
        if ( *(_DWORD *)v82 != v27 )
          goto LABEL_99;
        v83 = v419;
        if ( v81 )
          v83 = v444;
        v84 = (unsigned int)LZ4HC_countPattern(v82 + 4, v83, v27) + 4LL;
        if ( v81 )
        {
          if ( &v82[v84] == v85 )
          {
            v86 = v27;
            v87 = v84 & 3;
            if ( 8 * v87 )
              v86 = (unsigned int)__ROL4__(v27, 8 * v87);
            v84 += (unsigned int)LZ4HC_countPattern(v422, v419, v86);
          }
          v88 = v420;
        }
        else
        {
          v88 = v422;
        }
        v89 = LZ4HC_reverseCountPattern(v82, v88, v27);
        v90 = v422;
        v91 = v89;
        if ( !v81 && &v82[-v89] == v422 && v410 < (unsigned int)v23 )
        {
          v92 = v27;
          if ( 8LL * (-v89 & 3) )
            v92 = (unsigned int)__ROL4__(v27, 8 * (-(char)v89 & 3));
          v93 = LZ4HC_reverseCountPattern(v444, v420, v92);
          v91 = v93 + v94;
          v90 = v422;
        }
        v78 = v403;
        v95 = v77 - v91;
        v96 = v403;
        if ( v95 > v403 )
          v96 = v95;
        v97 = v84 + v77 - v96;
        if ( v97 < v438 || v84 > v438 )
        {
          if ( (unsigned int)v23 - v96 - 1 >= 3 )
          {
            v25 = v414;
            v98 = v438;
            if ( v97 < v438 )
              v98 = v97;
            if ( v414 >= v98 )
            {
              v32 = v406;
            }
            else
            {
              v99 = v23 - v96 - (_QWORD)v90;
              v32 = v406;
              if ( (unsigned __int64)v406 + v99 > 0xFFFF )
                goto LABEL_101;
              v414 = v98;
              v25 = v98;
              v407 = v48 - v96;
            }
            v100 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v96 + 0x20000);
            if ( v100 > v96 )
              goto LABEL_101;
            v33 = v96 - v100;
          }
          else
          {
            v33 = v23;
          }
        }
        else
        {
          v33 = v23;
          if ( (unsigned int)v23 - ((_DWORD)v84 - (_DWORD)v438 + v77) - 1 >= 3 )
            v33 = v84 - v438 + v77;
        }
LABEL_100:
        v21 = v422;
        v79 = v33 < v78;
        v26 = v400;
        v25 = v414;
        LODWORD(v20) = v410;
        v32 = v406;
        if ( v79 )
          goto LABEL_101;
      }
    }
    v80 = __PAIR64__(v25, v7);
    v445 = __PAIR64__(v25, v7);
    v421 = __PAIR64__(v25, v7);
    if ( v25 < 4 )
    {
      v15 = v426;
      v19 = v434;
      v13 = (char *)v32 + 1;
      v7 = 0;
      goto LABEL_104;
    }
    v101 = v32;
    v447 = v25;
    v449 = (unsigned __int64)v32;
LABEL_145:
    v102 = v451;
    while ( 1 )
    {
      v103 = HIDWORD(v421);
      v464 = HIDWORD(v421);
      v104 = (char *)v32 + SHIDWORD(v421);
      if ( (unsigned __int64)v104 > v102 )
      {
        v7 = 0;
        v418 = 0LL;
        v206 = 0;
        v205 = 0LL;
      }
      else
      {
        v105 = v104 - 2;
        v425 = (unsigned __int64)(v104 - 2);
        v423 = v104 - 2;
        v106 = HIDWORD(v421);
        v408 = HIDWORD(v421);
        v107 = *(unsigned int *)(a1 + 262172);
        v108 = *(unsigned int *)(a1 + 262168);
        v109 = v107;
        v110 = *(_QWORD **)(a1 + 262152);
        v436 = v108;
        v111 = (_DWORD)v104 - 2 + *(_DWORD *)(a1 + 262168) - (_DWORD)v110;
        v404 = *(_DWORD *)(a1 + 262172);
        v417 = v110;
        v427 = v111;
        v112 = (unsigned int)v108;
        v439 = *(_QWORD **)(a1 + 262160);
        if ( (int)v107 + 0x10000 <= v111 )
          v109 = v111 - 0xFFFF;
        v113 = (_DWORD)v105 - (_DWORD)v406;
        v114 = (_DWORD *)(*(_QWORD *)(a1 + 262160) + v108 - v107);
        v432 = 256;
        v411 = *(_DWORD *)v105;
        v115 = 0;
        v401 = 0;
        v455 = 0LL;
        v116 = 0;
        v429 = 0;
        v415 = v109;
        v453 = v114;
        v117 = *(_DWORD *)(a1 + 262176);
        if ( v117 < v111 )
        {
          v118 = v117;
          do
          {
            v119 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v110 + v118 - v112)) >> 17;
            v120 = v117 - *(_DWORD *)(a1 + 4 * v119);
            if ( v120 > 0xFFFF )
              LOWORD(v120) = -1;
            ++v118;
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v117 + 0x20000) = v120;
            *(_DWORD *)(a1 + 4 * v119) = v117++;
          }
          while ( v117 < v111 );
          v80 = v445;
          v115 = 0;
          v105 = v104 - 2;
          v106 = HIDWORD(v421);
        }
        v121 = a1;
        v122 = v113;
        v441 = v113;
        *(_DWORD *)(a1 + 262176) = v111;
        v123 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v105) >> 17));
        if ( v123 >= v415 )
        {
          v124 = v411;
          v125 = v436;
          while ( 1 )
          {
            v126 = v115;
            v412 = v115;
            if ( v432 <= 0 )
            {
LABEL_297:
              v80 = v445;
              v16 = v443;
              v116 = v429;
              goto LABEL_298;
            }
            --v432;
            if ( v123 >= v125 )
              break;
            v148 = v404;
            v149 = v123 - v404;
            v150 = (_DWORD *)((char *)v439 + v149);
            if ( v123 <= v125 - 4 && *v150 == v124 )
            {
              v151 = v105 + 4;
              v152 = v150 + 1;
              v153 = &v105[v125 - v123];
              v154 = (_DWORD)v105 + 4;
              v155 = (unsigned __int64)(v105 + 4);
              v156 = v105 + 4;
              v157 = (unsigned __int64)(v105 + 4);
              if ( (unsigned __int64)v153 > v419 )
                v153 = (char *)v419;
              if ( v151 >= v153 - 7 )
              {
LABEL_202:
                while ( v155 < (unsigned __int64)(v153 - 7) )
                {
                  if ( *v152 != *(_QWORD *)v151 )
                  {
                    __asm { tzcnt   rax, r8 }
                    v161 = ((unsigned int)_RAX >> 3) - v154 + (_DWORD)v151;
                    goto LABEL_217;
                  }
                  v151 = (char *)(v156 + 2);
                  ++v152;
                  v155 = (unsigned __int64)v151;
                  v156 += 2;
                  v157 = (unsigned __int64)v151;
                }
                if ( v157 < (unsigned __int64)(v153 - 3) && *(_DWORD *)v152 == *(_DWORD *)v151 )
                {
                  v151 += 4;
                  v152 = (_QWORD *)((char *)v152 + 4);
                }
                if ( v151 < v153 - 1 && *(_WORD *)v152 == *(_WORD *)v151 )
                {
                  v151 += 2;
                  v152 = (_QWORD *)((char *)v152 + 2);
                }
                if ( v151 < v153 && *(_BYTE *)v152 == *v151 )
                  LODWORD(v151) = (_DWORD)v151 + 1;
                v161 = (_DWORD)v151 - v154;
              }
              else
              {
                if ( *v152 == *(_QWORD *)v151 )
                {
                  v155 = (unsigned __int64)(v105 + 12);
                  v152 = v150 + 3;
                  v151 = v105 + 12;
                  v156 = v105 + 12;
                  v157 = (unsigned __int64)(v105 + 12);
                  goto LABEL_202;
                }
                __asm { tzcnt   rcx, r8 }
                v161 = (unsigned int)_RCX >> 3;
              }
LABEL_217:
              v163 = v423;
              v164 = v161 + 4;
              v165 = &v423[v161 + 4];
              if ( v165 == v153 )
              {
                v79 = (unsigned __int64)v153 < v419;
                v110 = v417;
                if ( v79 )
                {
                  v166 = v417;
                  v167 = &v423[v164];
                  v168 = (unsigned __int64)v167;
                  v169 = v167;
                  v170 = (unsigned __int64)v167;
                  if ( (unsigned __int64)v165 >= v419 - 7 )
                  {
                    while ( v168 < v419 - 7 )
                    {
                      if ( *v166 != *(_QWORD *)v167 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v173 = ((unsigned int)_RAX >> 3) - (_DWORD)v165 + (_DWORD)v167;
                        goto LABEL_238;
                      }
                      v167 = v169 + 8;
                      ++v166;
LABEL_226:
                      v168 = (unsigned __int64)v167;
                      v169 = v167;
                      v170 = (unsigned __int64)v167;
                    }
                    if ( v170 < v419 - 3 && *(_DWORD *)v166 == *(_DWORD *)v167 )
                    {
                      v167 += 4;
                      v166 = (_QWORD *)((char *)v166 + 4);
                    }
                    if ( (unsigned __int64)v167 < v419 - 1 && *(_WORD *)v166 == *(_WORD *)v167 )
                    {
                      v167 += 2;
                      v166 = (_QWORD *)((char *)v166 + 2);
                    }
                    if ( (unsigned __int64)v167 < v419 && *(_BYTE *)v166 == *v167 )
                      LODWORD(v167) = (_DWORD)v167 + 1;
                    v173 = (_DWORD)v167 - (_DWORD)v165;
                  }
                  else
                  {
                    if ( *v417 == *(_QWORD *)v165 )
                    {
                      v167 = v165 + 8;
                      v166 = v417 + 1;
                      goto LABEL_226;
                    }
                    __asm { tzcnt   rcx, rdx }
                    v173 = (unsigned int)_RCX >> 3;
                  }
LABEL_238:
                  v163 = v423;
                  v164 += v173;
                }
              }
              else
              {
                v110 = v417;
              }
              v176 = 0;
              if ( v441 )
              {
                v177 = -v149;
                v178 = (_DWORD)v406 - (_DWORD)v163;
                v179 = 0LL;
                v180 = v150 - 1;
                if ( (char *)v406 - v163 <= v177 )
                  v178 = v177;
                v181 = v163 - (char *)v150;
                while ( v176 - v178 > 3 )
                {
                  if ( *v180 != *(_DWORD *)((char *)v180 + v181) )
                  {
                    _BitScanReverse(&v182, *v180 ^ *(_DWORD *)((char *)v180 + v181));
                    v176 -= (31 - v182) >> 3;
                    goto LABEL_253;
                  }
                  v176 -= 4;
                  v179 -= 4LL;
                  --v180;
                }
                v183 = v178;
                if ( v179 > v178 )
                {
                  v184 = (char *)v406 + v179 + SHIDWORD(v421) - 3;
                  do
                  {
                    if ( *v184 != *((_BYTE *)v150 + v179 - 1) )
                      break;
                    --v176;
                    --v179;
                    --v184;
                  }
                  while ( v179 > v183 );
                  v125 = v436;
                }
              }
LABEL_253:
              v115 = v401;
              v185 = v164 - v176;
              v121 = a1;
              if ( v185 <= v408 )
              {
                v105 = v423;
              }
              else
              {
                v408 = v185;
                v105 = v423;
                v429 = v427 - v123;
                v425 = (unsigned __int64)&v423[v176];
              }
LABEL_257:
              v126 = v412;
              goto LABEL_258;
            }
LABEL_259:
            v186 = 1;
            if ( *(_WORD *)(v121 + 2LL * (unsigned __int16)v123 + 0x20000) != 1 )
              goto LABEL_264;
            v187 = v123 - 1;
            if ( v115 )
            {
              v401 = v126;
              if ( v126 != 2 )
                goto LABEL_264;
              v189 = (_DWORD *)v419;
            }
            else
            {
              if ( (_BYTE)v124 != HIBYTE(v124) || (unsigned __int16)v124 != HIWORD(v124) )
              {
                v121 = a1;
                v401 = 1;
LABEL_264:
                v191 = v415;
LABEL_265:
                v123 -= *(unsigned __int16 *)(v121 + 2LL * (unsigned __int16)v123 + 0x20000);
LABEL_309:
                v122 = v441;
                goto LABEL_296;
              }
              v188 = v105 + 4;
              v401 = 2;
              v189 = (_DWORD *)v419;
              v190 = LZ4HC_countPattern(v188, v419, v124);
              v121 = a1;
              v455 = v190 + 4LL;
              v186 = 1;
            }
            v191 = v415;
            if ( v187 < v415 || v125 - v123 < 3 )
              goto LABEL_265;
            if ( v187 >= v125 )
            {
              v186 = 0;
              v192 = (_DWORD *)((char *)v110 + v187 - v125);
            }
            else
            {
              v192 = (_DWORD *)((char *)v439 + v187 - v148);
            }
            if ( *v192 != v124 )
              goto LABEL_265;
            v193 = v189;
            if ( v186 )
              v193 = v453;
            v194 = (unsigned int)LZ4HC_countPattern(v192 + 1, v193, v124) + 4LL;
            if ( v186 )
            {
              if ( (_DWORD *)((char *)v192 + v194) == v193 )
              {
                v196 = v195;
                v197 = v194 & 3;
                if ( 8 * v197 )
                  v196 = (unsigned int)__ROL4__(v195, 8 * v197);
                v194 += (unsigned int)LZ4HC_countPattern(v417, v419, v196);
              }
              v198 = v439;
              v199 = v439;
            }
            else
            {
              v199 = v417;
              v198 = v439;
            }
            v200 = LZ4HC_reverseCountPattern(v192, v199, v195);
            v201 = v417;
            v202 = v200;
            if ( !v186 && (_QWORD *)((char *)v192 - v200) == v417 && v404 < v125 )
            {
              v203 = v124;
              if ( 8LL * (-v200 & 3) )
                v203 = (unsigned int)__ROL4__(v124, 8 * (-(char)v200 & 3));
              v202 = LZ4HC_reverseCountPattern(v453, v198, v203) + v200;
              v201 = v417;
            }
            v191 = v415;
            v123 = v415;
            if ( v187 - v202 > v415 )
              v123 = v187 - v202;
            v204 = v194 + v187 - v123;
            if ( v204 < v455 || v194 > v455 )
            {
              v122 = v441;
              if ( v125 - v123 - 1 >= 3 )
              {
                if ( !v441 )
                {
                  v106 = v408;
                  v207 = v455;
                  if ( v204 < v455 )
                    v207 = v204;
                  if ( v408 < v207 )
                  {
                    if ( (unsigned __int64)&v423[v125 - (unsigned __int64)v123 - (_QWORD)v201] > 0xFFFF )
                      goto LABEL_297;
                    v106 = v207;
                    v408 = v207;
                    v429 = v427 - v123;
                    v425 = (unsigned __int64)v423;
                  }
                  v121 = a1;
                  v208 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v123 + 0x20000);
                  if ( v208 > v123 )
                    goto LABEL_297;
                  v123 -= v208;
                  goto LABEL_309;
                }
              }
              else
              {
                v123 = v125;
              }
            }
            else
            {
              v122 = v441;
              v123 = v125;
              if ( v125 - (v187 - (_DWORD)v455 + (_DWORD)v194) - 1 >= 3 )
                v123 = v187 - v455 + v194;
            }
            v121 = a1;
LABEL_296:
            v105 = v423;
            v79 = v123 < v191;
            v115 = v401;
            v110 = v417;
            v106 = v408;
            v111 = v427;
            if ( v79 )
              goto LABEL_297;
          }
          v127 = (_DWORD *)((char *)v110 + v123 - v125);
          if ( *(_WORD *)((char *)v406 + v106 - 1) == *(_WORD *)((char *)v127 + v106 - v122 - 1) && *v127 == v124 )
          {
            v128 = 0;
            if ( v122 )
            {
              v129 = v127 - 1;
              v130 = (_DWORD)v406 - (_DWORD)v105;
              v131 = 0LL;
              if ( (char *)v406 - v105 <= (char *)v417 - (char *)v127 )
                v130 = (_DWORD)v417 - (_DWORD)v127;
              v132 = v105 - (char *)v127;
              while ( v128 - v130 > 3 )
              {
                if ( *v129 != *(_DWORD *)((char *)v129 + v132) )
                {
                  _BitScanReverse(&v133, *v129 ^ *(_DWORD *)((char *)v129 + v132));
                  v128 -= (31 - v133) >> 3;
                  goto LABEL_174;
                }
                v128 -= 4;
                v131 -= 4LL;
                --v129;
              }
              v134 = v130;
              if ( v131 > v130 )
              {
                v135 = (char *)v406 + v131 + SHIDWORD(v421) - 3;
                do
                {
                  if ( *v135 != *((_BYTE *)v127 + v131 - 1) )
                    break;
                  --v128;
                  --v131;
                  --v135;
                }
                while ( v131 > v134 );
                v111 = v427;
              }
            }
LABEL_174:
            v136 = v105 + 4;
            v137 = v127 + 1;
            v138 = (_DWORD)v105 + 4;
            v139 = (unsigned __int64)(v105 + 4);
            v140 = v105 + 4;
            v141 = (unsigned __int64)(v105 + 4);
            if ( (unsigned __int64)(v105 + 4) >= v419 - 7 )
              goto LABEL_177;
            if ( *v137 != *v136 )
            {
              __asm { tzcnt   rcx, r8 }
              v145 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v139 = (unsigned __int64)(v105 + 12);
              ++v137;
              v136 = v105 + 12;
              v140 = v105 + 12;
              v141 = (unsigned __int64)(v105 + 12);
LABEL_177:
              while ( v139 < v419 - 7 )
              {
                if ( *v137 != *v136 )
                {
                  __asm { tzcnt   rax, r8 }
                  v145 = ((unsigned int)_RAX >> 3) - v138 + (_DWORD)v136;
                  goto LABEL_192;
                }
                v136 = v140 + 2;
                ++v137;
                v139 = (unsigned __int64)v136;
                v140 += 2;
                v141 = (unsigned __int64)v136;
              }
              if ( v141 < v419 - 3 && *(_DWORD *)v137 == *(_DWORD *)v136 )
              {
                v136 = (_QWORD *)((char *)v136 + 4);
                v137 = (_QWORD *)((char *)v137 + 4);
              }
              if ( (unsigned __int64)v136 < v419 - 1 && *(_WORD *)v137 == *(_WORD *)v136 )
              {
                v136 = (_QWORD *)((char *)v136 + 2);
                v137 = (_QWORD *)((char *)v137 + 2);
              }
              if ( (unsigned __int64)v136 < v419 && *(_BYTE *)v137 == *(_BYTE *)v136 )
                LODWORD(v136) = (_DWORD)v136 + 1;
              v145 = (_DWORD)v136 - v138;
            }
LABEL_192:
            v115 = v401;
            v121 = a1;
            v147 = v145 - v128 + 4;
            if ( v147 > v106 )
            {
              v408 = v147;
              v429 = v111 - v123;
              v425 = (unsigned __int64)&v105[v128];
            }
            v110 = v417;
            goto LABEL_257;
          }
          v121 = a1;
          v126 = v115;
LABEL_258:
          v148 = v404;
          goto LABEL_259;
        }
LABEL_298:
        v101 = (_DWORD *)v449;
        v7 = 0;
        v103 = HIDWORD(v421);
        v32 = v406;
        v458 = __PAIR64__(v106, v116);
        v102 = v451;
        v205 = v458;
        v418 = v458;
        v206 = v106;
      }
      v440 = v205;
      if ( v206 <= v103 )
      {
        v15 = v426;
        v307 = v16;
        v364 = v16;
        v365 = v16;
        v366 = v16 + 1;
        v367 = (char *)v32 - v426;
        if ( a7 )
        {
          v19 = v434;
          if ( (unsigned __int64)&v366[v367 / 0xFF + 8 + v367] > v434 )
            goto LABEL_603;
        }
        if ( v367 < 0xF )
        {
          *v364 = 16 * v367;
        }
        else
        {
          v368 = v367 - 15;
          *v364 = -16;
          if ( v367 - 15 >= 0xFF )
          {
            v369 = v368 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v369) = -1;
            memset_0(v366, SDWORD2(v369), v368 / 0xFF);
            v103 = HIDWORD(v421);
            v366 += v368 / 0xFF;
            v15 = v426;
            LOBYTE(v368) = v368 / 0xFF + v368;
            v7 = 0;
          }
          *v366++ = v368;
        }
        v370 = v366;
        do
        {
          *v370 = *(_QWORD *)((char *)v370 + v15 - v366);
          ++v370;
        }
        while ( v370 < (_QWORD *)&v366[v367] );
        v371 = &v366[v367];
        v19 = v434;
        v372 = v103 - 4LL;
        *v371 = v421;
        v16 = v371 + 1;
        v443 = v16;
        if ( a7 && (unsigned __int64)&v16[v372 / 0xFF + 6] > v434 )
        {
          v32 = v406;
          goto LABEL_603;
        }
        v373 = *v365;
        if ( v372 < 0xF )
        {
          *v364 = v372 + v373;
        }
        else
        {
          v374 = v103 - 19LL;
          *v364 = v373 + 15;
          if ( v374 >= 0x1FE )
          {
            v375 = v374 / 0x1FE;
            v374 %= 0x1FEuLL;
            do
            {
              *v16 = -1;
              v376 = v16 + 1;
              *v376 = -1;
              v16 = v376 + 1;
              --v375;
            }
            while ( v375 );
          }
          if ( v374 >= 0xFF )
          {
            LOBYTE(v374) = v374 + 1;
            *v16++ = -1;
          }
          *v16++ = v374;
          v443 = v16;
        }
        v13 = (char *)v406 + v103;
        goto LABEL_598;
      }
      v209 = v425;
      if ( v101 < v32 && v425 < (unsigned __int64)v32 + v447 )
      {
        LOWORD(v421) = v80;
        v32 = v101;
        v103 = HIDWORD(v80);
        v464 = HIDWORD(v80);
        v406 = v101;
      }
      if ( (__int64)(v425 - (_QWORD)v32) >= 3 )
        break;
      v32 = (_DWORD *)v425;
      v406 = (_DWORD *)v425;
      v421 = v205;
    }
    while ( 1 )
    {
      if ( (__int64)(v209 - (_QWORD)v32) < 18 )
      {
        v210 = v103;
        if ( v103 > 18 )
          v210 = 18;
        if ( (unsigned __int64)v406 + v210 > v209 + v206 - 4LL )
          v210 = v206 + v209 - (_DWORD)v406 - 4;
        v211 = v210 + (_DWORD)v406 - v209;
        if ( v211 > 0 )
        {
          v209 += v211;
          v206 -= v211;
          v425 = v209;
          HIDWORD(v418) = v206;
          v205 = v418;
          v440 = v418;
        }
      }
      v454 = v206;
      v212 = v209 + v206;
      if ( v212 > v102 )
      {
        v301 = 0;
        v300 = 0LL;
      }
      else
      {
        v448 = v212 - 3;
        v213 = (unsigned int *)(v212 - 3);
        v456 = v212 - 3;
        v409 = v206;
        v214 = *(_DWORD *)(a1 + 262172);
        v215 = *(_DWORD *)(a1 + 262168);
        v216 = v214;
        v217 = *(_QWORD **)(a1 + 262152);
        v430 = v214;
        v424 = v217;
        v218 = v215 + v212 - 3 - (_DWORD)v217;
        v402 = v215;
        v433 = v218;
        if ( v214 + 0x10000 <= v218 )
          v216 = v218 - 0xFFFF;
        v405 = v216;
        v437 = 256;
        v219 = (_DWORD)v213 - v209;
        v416 = *v213;
        v220 = 0;
        v413 = 0;
        v452 = 0LL;
        v221 = 0;
        v428 = 0;
        v222 = a1;
        v450 = *(_QWORD *)(a1 + 262160) + v215 - (unsigned __int64)v214;
        v442 = *(_DWORD **)(a1 + 262160);
        v223 = *(_DWORD *)(a1 + 262176);
        if ( v223 < v218 )
        {
          v224 = (_DWORD *)((char *)v217 + v223 - (unsigned __int64)v215);
          do
          {
            v225 = (unsigned __int64)(unsigned int)(-1640531535 * *v224) >> 17;
            v226 = v223 - *(_DWORD *)(a1 + 4 * v225);
            if ( v226 > 0xFFFF )
              LOWORD(v226) = -1;
            v224 = (_DWORD *)((char *)v224 + 1);
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v223 + 0x20000) = v226;
            *(_DWORD *)(a1 + 4 * v225) = v223++;
          }
          while ( v223 < v218 );
          v215 = v402;
          v220 = 0;
          v213 = (unsigned int *)v456;
          v222 = a1;
        }
        *(_DWORD *)(v222 + 262176) = v218;
        v227 = -1640531535 * *v213;
        v228 = a1;
        v229 = v219;
        v446 = v219;
        v230 = *(_DWORD *)(a1 + 4 * (v227 >> 17));
        if ( v230 >= v405 )
        {
          v231 = v416;
          while ( 1 )
          {
            if ( v437 <= 0 )
            {
LABEL_467:
              v205 = v440;
              v16 = v443;
              v206 = HIDWORD(v418);
              v221 = v428;
              break;
            }
            --v437;
            if ( v230 < v215 )
            {
              v251 = v230 - v430;
              v252 = (_DWORD *)((char *)v442 + v251);
              if ( v230 <= v215 - 4 && *v252 == v231 )
              {
                v253 = (_QWORD *)(v456 + 4);
                v254 = v252 + 1;
                v255 = (_QWORD *)(v456 + v215 - v230);
                v256 = v456 + 4;
                if ( (unsigned __int64)v255 > v419 )
                  v255 = (_QWORD *)v419;
                if ( v253 < (_QWORD *)((char *)v255 - 7) )
                {
                  if ( *v254 != *v253 )
                  {
                    __asm { tzcnt   rcx, r8 }
                    v259 = (unsigned int)_RCX >> 3;
                    goto LABEL_393;
                  }
                  while ( 1 )
                  {
                    ++v253;
                    ++v254;
                    if ( v253 >= (_QWORD *)((char *)v255 - 7) )
                      break;
                    if ( *v254 != *v253 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v259 = ((unsigned int)_RAX >> 3) - v256 + (_DWORD)v253;
                      goto LABEL_393;
                    }
                  }
                }
                if ( v253 < (_QWORD *)((char *)v255 - 3) && *(_DWORD *)v254 == *(_DWORD *)v253 )
                {
                  v253 = (_QWORD *)((char *)v253 + 4);
                  v254 = (_QWORD *)((char *)v254 + 4);
                }
                if ( v253 < (_QWORD *)((char *)v255 - 1) && *(_WORD *)v254 == *(_WORD *)v253 )
                {
                  v253 = (_QWORD *)((char *)v253 + 2);
                  v254 = (_QWORD *)((char *)v254 + 2);
                }
                if ( v253 < v255 && *(_BYTE *)v254 == *(_BYTE *)v253 )
                  LODWORD(v253) = (_DWORD)v253 + 1;
                v259 = (_DWORD)v253 - v256;
LABEL_393:
                v262 = v259 + 4;
                v263 = (_QWORD *)(v456 + (int)(v259 + 4));
                if ( v263 == v255 && (unsigned __int64)v255 < v419 )
                {
                  v264 = v217;
                  v265 = (_QWORD *)(v456 + v262);
                  if ( (unsigned __int64)v263 >= v419 - 7 )
                    goto LABEL_398;
                  if ( *v263 != *v217 )
                  {
                    __asm { tzcnt   rcx, rcx }
                    v269 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v265 = v263 + 1;
                    v264 = v217 + 1;
LABEL_398:
                    while ( (unsigned __int64)v265 < v419 - 7 )
                    {
                      if ( *v264 != *v265 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v269 = ((unsigned int)_RAX >> 3) - (_DWORD)v263 + (_DWORD)v265;
                        goto LABEL_413;
                      }
                      ++v265;
                      ++v264;
                    }
                    if ( (unsigned __int64)v265 < v419 - 3 && *(_DWORD *)v264 == *(_DWORD *)v265 )
                    {
                      v265 = (_QWORD *)((char *)v265 + 4);
                      v264 = (_QWORD *)((char *)v264 + 4);
                    }
                    if ( (unsigned __int64)v265 < v419 - 1 && *(_WORD *)v264 == *(_WORD *)v265 )
                    {
                      v265 = (_QWORD *)((char *)v265 + 2);
                      v264 = (_QWORD *)((char *)v264 + 2);
                    }
                    if ( (unsigned __int64)v265 < v419 && *(_BYTE *)v264 == *(_BYTE *)v265 )
                      LODWORD(v265) = (_DWORD)v265 + 1;
                    v269 = (_DWORD)v265 - (_DWORD)v263;
                  }
LABEL_413:
                  v262 += v269;
                }
                v271 = 0;
                if ( v446 )
                {
                  v272 = v456 - 4;
                  v273 = v425 - v456;
                  v274 = -v251;
                  v275 = 0LL;
                  if ( (__int64)(v425 - v456) <= v274 )
                    v273 = v274;
                  v276 = (char *)v252 - v456;
                  while ( v271 - v273 > 3 )
                  {
                    if ( *(_DWORD *)v272 != *(_DWORD *)&v276[v272] )
                    {
                      _BitScanReverse(&v277, *(_DWORD *)v272 ^ *(_DWORD *)&v276[v272]);
                      v271 -= (31 - v277) >> 3;
                      goto LABEL_427;
                    }
                    v271 -= 4;
                    v275 -= 4LL;
                    v272 -= 4LL;
                  }
                  v278 = v273;
                  if ( v275 > v273 )
                  {
                    v279 = (_BYTE *)(v275 + v425 + v454 - 4);
                    do
                    {
                      if ( *v279 != *((_BYTE *)v442 + v230 - v430 + v275 - 1) )
                        break;
                      --v271;
                      --v275;
                      --v279;
                    }
                    while ( v275 > v278 );
                    v231 = v416;
                  }
                }
LABEL_427:
                v215 = v402;
                v280 = v262 - v271;
                v244 = v419;
                if ( v280 > v409 )
                {
                  v409 = v280;
                  v448 = v456 + v271;
                  v428 = v433 - v230;
                }
LABEL_371:
                v228 = a1;
                goto LABEL_430;
              }
            }
            else
            {
              v232 = (_DWORD *)((char *)v217 + v230 - v215);
              if ( *(_WORD *)(v409 + v425 - 1) == *(_WORD *)((char *)v232 + v409 - v229 - 1) && *v232 == v231 )
              {
                v233 = 0;
                if ( v229 )
                {
                  v234 = v456 - 4;
                  v235 = v425 - v456;
                  v236 = 0LL;
                  if ( (__int64)(v425 - v456) <= (char *)v217 - (char *)v232 )
                    v235 = (_DWORD)v217 - (_DWORD)v232;
                  v237 = (char *)v232 - v456;
                  while ( v233 - v235 > 3 )
                  {
                    if ( *(_DWORD *)v234 != *(_DWORD *)&v237[v234] )
                    {
                      _BitScanReverse(&v238, *(_DWORD *)v234 ^ *(_DWORD *)&v237[v234]);
                      v233 -= (31 - v238) >> 3;
                      goto LABEL_352;
                    }
                    v233 -= 4;
                    v236 -= 4LL;
                    v234 -= 4LL;
                  }
                  v239 = v235;
                  if ( v236 > v235 )
                  {
                    v240 = (_BYTE *)(v236 + v425 + v454 - 4);
                    do
                    {
                      if ( *v240 != *((_BYTE *)v217 + v230 - v402 + v236 - 1) )
                        break;
                      --v233;
                      --v236;
                      --v240;
                    }
                    while ( v236 > v239 );
                    v231 = v416;
                  }
                }
LABEL_352:
                v241 = (_QWORD *)(v456 + 4);
                v242 = v232 + 1;
                v243 = v456 + 4;
                v244 = v419;
                if ( v456 + 4 < v419 - 7 )
                {
                  if ( *v242 != *v241 )
                  {
                    __asm { tzcnt   rcx, r8 }
                    v247 = (unsigned int)_RCX >> 3;
LABEL_369:
                    v215 = v402;
                    v250 = v247 - v233 + 4;
                    if ( v250 > v409 )
                    {
                      v409 = v250;
                      v448 = v456 + v233;
                      v428 = v433 - v230;
                    }
                    goto LABEL_371;
                  }
                  while ( 1 )
                  {
                    ++v241;
                    ++v242;
                    if ( (unsigned __int64)v241 >= v419 - 7 )
                      break;
                    if ( *v242 != *v241 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v247 = ((unsigned int)_RAX >> 3) - v243 + (_DWORD)v241;
                      goto LABEL_369;
                    }
                  }
                }
                if ( (unsigned __int64)v241 < v419 - 3 && *(_DWORD *)v242 == *(_DWORD *)v241 )
                {
                  v241 = (_QWORD *)((char *)v241 + 4);
                  v242 = (_QWORD *)((char *)v242 + 4);
                }
                if ( (unsigned __int64)v241 < v419 - 1 && *(_WORD *)v242 == *(_WORD *)v241 )
                {
                  v241 = (_QWORD *)((char *)v241 + 2);
                  v242 = (_QWORD *)((char *)v242 + 2);
                }
                if ( (unsigned __int64)v241 < v419 && *(_BYTE *)v242 == *(_BYTE *)v241 )
                  LODWORD(v241) = (_DWORD)v241 + 1;
                v247 = (_DWORD)v241 - v243;
                goto LABEL_369;
              }
            }
            v244 = v419;
LABEL_430:
            if ( *(_WORD *)(v228 + 2LL * (unsigned __int16)v230 + 0x20000) != 1 )
              goto LABEL_435;
            v281 = v230 - 1;
            if ( v413 )
            {
              v413 = v220;
              if ( v220 != 2 )
                goto LABEL_435;
            }
            else
            {
              if ( (_BYTE)v231 != HIBYTE(v231) || (unsigned __int16)v231 != HIWORD(v231) )
              {
                v215 = v402;
                v413 = 1;
LABEL_435:
                v282 = v405;
LABEL_436:
                v230 -= *(unsigned __int16 *)(v228 + 2LL * (unsigned __int16)v230 + 0x20000);
                goto LABEL_466;
              }
              v413 = 2;
              v452 = (unsigned int)LZ4HC_countPattern(v456 + 4, v244, v231) + 4LL;
              v228 = a1;
            }
            v282 = v405;
            v215 = v402;
            if ( v281 < v405 || v402 - v230 < 3 )
              goto LABEL_436;
            if ( v281 >= v402 )
            {
              v283 = 0;
              v284 = (_DWORD *)((char *)v424 + v281 - v402);
            }
            else
            {
              v283 = 1;
              v284 = (_DWORD *)((char *)v442 + v281 - v430);
            }
            if ( *v284 != v231 )
              goto LABEL_435;
            v285 = v419;
            if ( v283 )
              v285 = v450;
            v286 = (unsigned int)LZ4HC_countPattern(v284 + 1, v285, v231) + 4LL;
            if ( v283 )
            {
              if ( (_DWORD *)((char *)v284 + v286) == v287 )
              {
                v288 = v231;
                v289 = v286 & 3;
                if ( 8 * v289 )
                  v288 = (unsigned int)__ROL4__(v231, 8 * v289);
                v286 += (unsigned int)LZ4HC_countPattern(v424, v419, v288);
              }
              v290 = v442;
              v291 = v442;
            }
            else
            {
              v291 = v424;
              v290 = v442;
            }
            v292 = LZ4HC_reverseCountPattern(v284, v291, v231);
            v293 = v424;
            v215 = v402;
            v294 = v292;
            if ( !v283 && (_DWORD *)((char *)v284 - v292) == v424 && v430 < v402 )
            {
              v295 = v231;
              if ( 8LL * (-v292 & 3) )
                v295 = (unsigned int)__ROL4__(v231, 8 * (-(char)v292 & 3));
              v296 = LZ4HC_reverseCountPattern(v450, v290, v295);
              v293 = v424;
              v294 = v296 + v297;
              v215 = v402;
            }
            v282 = v405;
            v298 = v452;
            v230 = v405;
            if ( v281 - v294 > v405 )
              v230 = v281 - v294;
            v299 = v286 + v281 - v230;
            if ( v299 >= v452 && v286 <= v452 )
            {
              v230 = v215;
              if ( v215 - (v281 - (_DWORD)v452 + (_DWORD)v286) - 1 >= 3 )
                v230 = v281 - v452 + v286;
              goto LABEL_465;
            }
            if ( v215 - v230 - 1 < 3 )
            {
              v230 = v215;
LABEL_465:
              v228 = a1;
              goto LABEL_466;
            }
            if ( v446 )
              goto LABEL_465;
            if ( v299 < v452 )
              v298 = v286 + v281 - v230;
            if ( v409 < v298 )
            {
              if ( v456 + v215 - (unsigned __int64)v230 - (_QWORD)v293 > 0xFFFF )
                goto LABEL_467;
              v409 = v298;
              v428 = v433 - v230;
              v448 = v456;
            }
            v228 = a1;
            v302 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v230 + 0x20000);
            if ( v302 > v230 )
              goto LABEL_467;
            v230 -= v302;
LABEL_466:
            v217 = v424;
            v79 = v230 < v282;
            v220 = v413;
            v229 = v446;
            if ( v79 )
              goto LABEL_467;
          }
        }
        v7 = 0;
        v209 = v425;
        v300 = __PAIR64__(v409, v221);
        v301 = v409;
      }
      v32 = v406;
      if ( v301 <= v206 )
        break;
      v103 = v464;
      v303 = (_DWORD *)v448;
      v304 = (char *)v406 + v464;
      if ( v448 >= (unsigned __int64)(v304 + 3) )
      {
        if ( v209 < (unsigned __int64)v304 )
        {
          if ( (__int64)(v209 - (_QWORD)v406) >= 18 )
          {
            v103 = v209 - (_DWORD)v406;
            v464 = v209 - (_DWORD)v406;
          }
          else
          {
            if ( v464 > 18 )
              v103 = 18;
            v464 = v103;
            if ( (unsigned __int64)v406 + v103 > v209 + v206 - 4LL )
            {
              v103 = v206 + v209 - (_DWORD)v406 - 4;
              v464 = v103;
            }
            v305 = v103 + (_DWORD)v406 - v209;
            if ( v305 > 0 )
            {
              v425 = v305 + v209;
              HIDWORD(v418) = v206 - v305;
              v205 = v418;
            }
          }
        }
        v306 = v406;
        v307 = v16;
        v308 = v426;
        v309 = v16;
        v310 = v16;
        v311 = (char *)v406 - v426;
        v312 = v16 + 1;
        if ( a7 && (unsigned __int64)&v312[v311 / 0xFF + 8 + v311] > v434 )
          goto LABEL_602;
        if ( v311 < 0xF )
        {
          *v309 = 16 * v311;
        }
        else
        {
          v313 = v311 - 15;
          *v309 = -16;
          if ( v311 - 15 >= 0xFF )
          {
            v314 = v313 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v314) = -1;
            memset_0(v312, SDWORD2(v314), v313 / 0xFF);
            v306 = v406;
            v312 += v313 / 0xFF;
            v308 = v426;
            v309 = v307;
            LOBYTE(v313) = v313 / 0xFF + v313;
            v310 = v307;
          }
          *v312++ = v313;
          v303 = (_DWORD *)v448;
        }
        v315 = v312;
        do
        {
          *v315 = *(_QWORD *)((char *)v315 + v308 - v312);
          ++v315;
        }
        while ( v315 < (_QWORD *)&v312[v311] );
        v316 = &v312[v311];
        v103 = v464;
        *v316 = v421;
        v16 = v316 + 1;
        v317 = v464 - 4LL;
        v443 = v16;
        if ( a7 && (unsigned __int64)&v16[v317 / 0xFF + 6] > v434 )
          goto LABEL_601;
        v318 = *v310;
        if ( v317 < 0xF )
        {
          *v309 = v317 + v318;
        }
        else
        {
          v319 = v464 - 19LL;
          *v309 = v318 + 15;
          if ( v319 >= 0x1FE )
          {
            v320 = v319 / 0x1FE;
            v319 %= 0x1FEuLL;
            do
            {
              *v16 = -1;
              v321 = v16 + 1;
              *v321 = -1;
              v16 = v321 + 1;
              --v320;
            }
            while ( v320 );
          }
          if ( v319 >= 0xFF )
          {
            LOBYTE(v319) = v319 + 1;
            *v16++ = -1;
          }
          *v16++ = v319;
          v443 = v16;
        }
        LOWORD(v421) = v205;
        v103 = HIDWORD(v205);
        v205 = v300;
        v418 = v300;
        v209 = (unsigned __int64)v303;
        v206 = HIDWORD(v300);
        v7 = 0;
        v426 = (char *)v306 + v464;
        v440 = v300;
        v32 = (_DWORD *)v425;
        v102 = v451;
        v406 = (_DWORD *)v425;
        v425 = (unsigned __int64)v303;
        v464 = v103;
      }
      else
      {
        if ( v448 >= (unsigned __int64)v304 )
        {
          if ( v209 < (unsigned __int64)v304 )
          {
            v322 = v464 + (_DWORD)v406 - v209;
            v425 = v322 + v209;
            if ( v206 - v322 >= 4 )
            {
              HIDWORD(v418) = v206 - v322;
              v205 = v418;
            }
            else
            {
              v425 = v448;
              v205 = v300;
            }
          }
          v323 = v406;
          v307 = v16;
          v308 = v426;
          v324 = v16;
          v325 = v16;
          v326 = (char *)v406 - v426;
          v327 = v16 + 1;
          if ( a7 && (unsigned __int64)&v327[v326 / 0xFF + 8 + v326] > v434 )
          {
LABEL_602:
            v32 = v406;
            v19 = v434;
            v15 = v308;
            goto LABEL_603;
          }
          if ( v326 < 0xF )
          {
            *v324 = 16 * v326;
          }
          else
          {
            v328 = v326 - 15;
            *v324 = -16;
            if ( v326 - 15 >= 0xFF )
            {
              v329 = v328 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v329) = -1;
              memset_0(v327, SDWORD2(v329), v328 / 0xFF);
              v323 = v406;
              v327 += v328 / 0xFF;
              v308 = v426;
              v324 = v307;
              LOBYTE(v328) = v328 / 0xFF + v328;
              v325 = v307;
            }
            *v327++ = v328;
            v303 = (_DWORD *)v448;
          }
          v330 = v327;
          do
          {
            *v330 = *(_QWORD *)((char *)v330 + v308 - v327);
            ++v330;
          }
          while ( v330 < (_QWORD *)&v327[v326] );
          v331 = &v327[v326];
          v103 = v464;
          *v331 = v421;
          v16 = v331 + 1;
          v332 = v464 - 4LL;
          v443 = v16;
          if ( a7 && (unsigned __int64)&v16[v332 / 0xFF + 6] > v434 )
          {
LABEL_601:
            v32 = v406;
            v15 = v426;
            v19 = v434;
            goto LABEL_603;
          }
          v333 = *v325;
          if ( v332 < 0xF )
          {
            *v324 = v332 + v333;
          }
          else
          {
            v334 = v464 - 19LL;
            *v324 = v333 + 15;
            if ( v334 >= 0x1FE )
            {
              v335 = v334 / 0x1FE;
              v334 %= 0x1FEuLL;
              do
              {
                *v16 = -1;
                v336 = v16 + 1;
                *v336 = -1;
                v16 = v336 + 1;
                --v335;
              }
              while ( v335 );
            }
            if ( v334 >= 0xFF )
            {
              LOBYTE(v334) = v334 + 1;
              *v16++ = -1;
            }
            *v16++ = v334;
            v443 = v16;
          }
          v406 = v303;
          v426 = (char *)v323 + v464;
          v32 = v303;
          v80 = v205;
          v101 = (_DWORD *)v425;
          v449 = v425;
          v421 = v300;
          v445 = v205;
          v447 = HIDWORD(v205);
          goto LABEL_145;
        }
        v418 = v300;
        v205 = v300;
        v206 = HIDWORD(v300);
        v209 = v448;
        v440 = v300;
        v102 = v451;
        v425 = v448;
      }
    }
    if ( v209 < (unsigned __int64)v406 + v464 )
      v464 = v209 - (_DWORD)v406;
    v15 = v426;
    v307 = v16;
    v337 = v16;
    v338 = v16;
    v339 = (char *)v406 - v426;
    v340 = v16 + 1;
    if ( a7 )
    {
      v19 = v434;
      if ( (unsigned __int64)&v340[v339 / 0xFF + 8 + v339] > v434 )
      {
        v103 = v464;
        goto LABEL_603;
      }
    }
    if ( v339 < 0xF )
    {
      *v337 = 16 * v339;
    }
    else
    {
      v341 = v339 - 15;
      *v337 = -16;
      if ( v339 - 15 >= 0xFF )
      {
        v342 = v341 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v342) = -1;
        memset_0(v340, SDWORD2(v342), v341 / 0xFF);
        v15 = v426;
        v340 += v341 / 0xFF;
        v338 = v337;
        v341 %= 0xFFuLL;
        v7 = 0;
      }
      *v340++ = v341;
      v209 = v425;
    }
    v343 = v340;
    do
    {
      *v343 = *(_QWORD *)((char *)v343 + v15 - v340);
      ++v343;
    }
    while ( v343 < (_QWORD *)&v340[v339] );
    v344 = &v340[v339];
    v19 = v434;
    *v344 = v421;
    v345 = v344 + 1;
    v346 = v464 - 4LL;
    if ( a7 && (unsigned __int64)&v345[v346 / 0xFF + 6] > v434 )
    {
      v103 = v464;
      v32 = v406;
      goto LABEL_603;
    }
    v347 = *v338;
    if ( v346 < 0xF )
    {
      *v337 = v346 + v347;
    }
    else
    {
      v348 = v464 - 19LL;
      *v337 = v347 + 15;
      if ( v348 >= 0x1FE )
      {
        v349 = v348 / 0x1FE;
        v348 %= 0x1FEuLL;
        do
        {
          *v345 = -1;
          v350 = v345 + 1;
          *v350 = -1;
          v345 = v350 + 1;
          --v349;
        }
        while ( v349 );
      }
      if ( v348 >= 0xFF )
      {
        LOBYTE(v348) = v348 + 1;
        *v345++ = -1;
      }
      *v345++ = v348;
    }
    v15 = (char *)v406 + v464;
    v307 = v345;
    v351 = v345;
    v426 = v15;
    v352 = v345;
    v406 = (_DWORD *)v209;
    v353 = v209 - (_QWORD)v15;
    v354 = v345 + 1;
    v32 = (_DWORD *)v209;
    if ( a7 && (unsigned __int64)&v354[v353 + 8 + v353 / 0xFF] > v434 )
      goto LABEL_600;
    if ( v353 < 0xF )
    {
      *v351 = 16 * v353;
    }
    else
    {
      v355 = v353 - 15;
      *v351 = -16;
      if ( v353 - 15 >= 0xFF )
      {
        v356 = v355 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v356) = -1;
        memset_0(v354, SDWORD2(v356), v355 / 0xFF);
        v15 = v426;
        v354 += v355 / 0xFF;
        v352 = v351;
        v355 %= 0xFFuLL;
        v7 = 0;
      }
      *v354++ = v355;
      v209 = v425;
    }
    v357 = v354;
    do
    {
      *v357 = *(_QWORD *)((char *)v357 + v15 - v354);
      ++v357;
    }
    while ( v357 < (_QWORD *)&v354[v353] );
    v358 = &v354[v353];
    v19 = v434;
    *v358 = v418;
    v16 = v358 + 1;
    v359 = SHIDWORD(v418) - 4LL;
    v443 = v16;
    if ( a7 )
    {
      if ( (unsigned __int64)&v16[v359 / 0xFF + 6] > v434 )
        break;
    }
    v360 = *v352;
    if ( v359 < 0xF )
    {
      *v351 = v359 + v360;
    }
    else
    {
      v361 = SHIDWORD(v418) - 19LL;
      *v351 = v360 + 15;
      if ( v361 >= 0x1FE )
      {
        v362 = v361 / 0x1FE;
        v361 %= 0x1FEuLL;
        do
        {
          *v16 = -1;
          v363 = v16 + 1;
          *v363 = -1;
          v16 = v363 + 1;
          --v362;
        }
        while ( v362 );
      }
      if ( v361 >= 0xFF )
      {
        LOBYTE(v361) = v361 + 1;
        *v16++ = -1;
      }
      *v16++ = v361;
      v443 = v16;
    }
    v13 = (char *)(v209 + SHIDWORD(v418));
LABEL_598:
    v11 = a1;
    v15 = v13;
    v426 = v13;
LABEL_104:
    v18 = v451;
    v406 = v13;
  }
  v32 = v406;
LABEL_600:
  LOWORD(v421) = v205;
  v103 = HIDWORD(v205);
LABEL_603:
  if ( a7 != 2 )
  {
    v390 = 0;
    goto LABEL_642;
  }
  v377 = (char *)v32 - v15;
  v16 = v307;
  v378 = ((char *)v32 - v15 + 240) / 0xFFuLL + (char *)v32 - v15 + 1;
  if ( (unsigned __int64)&v307[v378] <= v19 - 3 )
  {
    if ( v103 > 255 * (v19 - 3 - v378 - (unsigned __int64)v307) + 18 )
      v103 = 255 * (v19 - 3 - v378 - (_DWORD)v307) + 18;
    v465 = v103;
    if ( (__int64)(v19 + v103 - v378 - (_QWORD)v307 + 2) >= 12 )
    {
      v379 = v307 + 1;
      if ( v377 < 0xF )
      {
        *v307 = 16 * v377;
      }
      else
      {
        v380 = v377 - 15;
        *v307 = -16;
        if ( v377 - 15 >= 0xFF )
        {
          v381 = v380 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v381) = -1;
          memset_0(v307 + 1, SDWORD2(v381), v380 / 0xFF);
          v103 = v465;
          v379 += v380 / 0xFF;
          v15 = v426;
          v19 = v434;
          LOBYTE(v380) = v380 / 0xFF + v380;
        }
        *v379++ = v380;
      }
      v382 = v379;
      v383 = v15 - v379;
      do
      {
        *v382 = *(_QWORD *)((char *)v382 + v383);
        ++v382;
      }
      while ( v382 < (_QWORD *)&v379[v377] );
      v384 = &v379[v377];
      v385 = v103 - 4LL;
      *v384 = v421;
      v16 = v384 + 1;
      v386 = *v307;
      if ( v385 < 0xF )
      {
        *v307 = v385 + v386;
      }
      else
      {
        v387 = v103 - 19LL;
        *v307 = v386 + 15;
        if ( v387 >= 0x1FE )
        {
          v388 = v387 / 0x1FE;
          v387 %= 0x1FEuLL;
          do
          {
            *v16 = -1;
            v389 = v16 + 1;
            *v389 = -1;
            v16 = v389 + 1;
            --v388;
          }
          while ( v388 );
        }
        if ( v387 >= 0xFF )
        {
          LOBYTE(v387) = v387 + 1;
          *v16++ = -1;
        }
        *v16++ = v387;
      }
      v15 = (char *)v406 + v103;
      v426 = v15;
    }
  }
LABEL_628:
  v8 = a4;
  v17 = v457;
LABEL_629:
  v391 = v17 - v15;
  v392 = v16;
  if ( a7 == 2 )
  {
    v19 += 5LL;
    goto LABEL_632;
  }
  if ( a7 )
  {
LABEL_632:
    if ( (unsigned __int64)&v16[(v391 + 240) / 0xFF + 1 + v391] > v19 )
    {
      if ( a7 == 1 )
      {
        v390 = 0;
        goto LABEL_642;
      }
      v391 = v19 - (_QWORD)v16 - 1 - ((v19 - (unsigned __int64)v16 - 1 + 241) >> 8);
    }
  }
  v393 = v391 + (_DWORD)v15;
  if ( v391 < 0xF )
  {
    *v16 = 16 * v391;
    v397 = (_DWORD)v16 + 1;
  }
  else
  {
    *v16 = -16;
    v394 = v16 + 1;
    v395 = v391 - 15;
    if ( v391 - 15 >= 0xFF )
    {
      v396 = v395 * (unsigned __int128)0x8080808080808081uLL;
      BYTE8(v396) = -1;
      memset_0(v394, SDWORD2(v396), v395 / 0xFF);
      v15 = v426;
      v394 += v395 / 0xFF;
      v395 %= 0xFFuLL;
    }
    v392 = v394;
    *v394 = v395;
    v397 = (_DWORD)v394 + 1;
  }
  memmove(v392 + 1, v15, v391);
  *v8 = v393 - v460;
  v390 = v391 + v397 - v461;
LABEL_642:
  if ( v390 <= 0 )
    *(_BYTE *)(a1 + 262183) = 1;
  return (unsigned int)v390;
}
