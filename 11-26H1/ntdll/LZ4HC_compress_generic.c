/*
 * XREFs of LZ4HC_compress_generic @ 0x1800ED00C
 * Callers:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x180155B1C (LZ4_compress_HC_extStateHC_fastReset.c)
 * Callees:
 *     LZ4HC_countPattern @ 0x1800E6338 (LZ4HC_countPattern.c)
 *     LZ4HC_reverseCountPattern @ 0x1800E6394 (LZ4HC_reverseCountPattern.c)
 *     LZ4HC_compress_generic_dictCtx @ 0x1800EFA3C (LZ4HC_compress_generic_dictCtx.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LZ4HC_compress_generic(__int64 a1, unsigned int *a2, _BYTE *a3, int *a4, int a5, __int64 a6, int a7)
{
  unsigned int v7; // r11d
  _DWORD *v8; // r13
  __int64 v10; // r15
  unsigned int *v11; // rbx
  unsigned int *v12; // r10
  __int64 v13; // rdx
  _BYTE *v14; // r14
  char *v15; // r12
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rsi
  size_t v18; // r12
  _BYTE *v19; // r8
  int v21; // esi
  size_t v22; // rdi
  int v23; // r14d
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  unsigned int v26; // ebx
  __int64 v27; // r13
  unsigned int v28; // r12d
  unsigned int v29; // r11d
  int v30; // r9d
  unsigned int v31; // r10d
  int v32; // edi
  unsigned int v33; // r8d
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  _DWORD *v37; // r8
  unsigned int v38; // r11d
  int v39; // r15d
  unsigned __int64 v40; // rdi
  _DWORD *v41; // rdx
  _QWORD *v42; // rcx
  int v43; // edi
  unsigned __int64 v44; // rax
  _QWORD *v45; // r9
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // r8
  _QWORD *v48; // rdx
  unsigned int v52; // ecx
  _DWORD *v53; // rbx
  __int64 v54; // rax
  _QWORD *v55; // rcx
  int v56; // ebx
  _QWORD *v57; // rdx
  unsigned __int64 v58; // rax
  _DWORD *v59; // r9
  unsigned __int64 v60; // r8
  unsigned int v64; // ecx
  unsigned int v65; // r14d
  signed int v66; // ecx
  bool v67; // cc
  bool v68; // cf
  char *v69; // r10
  unsigned __int64 v70; // r11
  char *v71; // rcx
  unsigned __int64 v72; // rbx
  int v73; // r9d
  char *v74; // rax
  int v75; // esi
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // r12
  unsigned int v78; // r11d
  unsigned __int64 v79; // rax
  int v80; // eax
  unsigned __int64 v81; // rbx
  char *v82; // r13
  unsigned __int64 v83; // rcx
  int v84; // ecx
  char *v85; // rcx
  _BYTE *v86; // r15
  unsigned int *v87; // rsi
  _BYTE *v88; // r8
  char *v89; // r10
  unsigned __int64 v90; // r12
  _BYTE *v91; // r14
  unsigned __int64 v92; // r13
  _QWORD *v93; // rcx
  _WORD *v94; // r14
  unsigned __int64 v95; // rcx
  char v96; // al
  char *v97; // r13
  char *v98; // r9
  unsigned __int64 v99; // rsi
  _BYTE *v100; // r14
  unsigned __int64 v101; // r12
  _QWORD *v102; // rcx
  _WORD *v103; // r14
  _BYTE *v104; // r14
  unsigned __int64 v105; // rcx
  char v106; // al
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rdx
  _BYTE *v109; // r14
  char *v110; // r13
  char *v111; // r9
  unsigned __int64 v112; // rsi
  _BYTE *v113; // r14
  unsigned __int64 v114; // r12
  _QWORD *v115; // rcx
  _WORD *v116; // r14
  unsigned __int64 v117; // rcx
  char v118; // al
  int v119; // ecx
  _BYTE *v120; // r8
  char *v121; // r10
  unsigned __int64 v122; // r12
  _BYTE *v123; // r14
  unsigned __int64 v124; // r13
  _QWORD *v125; // rcx
  _WORD *v126; // r14
  unsigned __int64 v127; // rcx
  char v128; // al
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // rdx
  _BYTE *v131; // r14
  _BYTE *v132; // r12
  char *v133; // r13
  unsigned __int64 v134; // rdi
  _BYTE *v135; // r14
  unsigned __int64 v136; // rsi
  _QWORD *v137; // rcx
  _WORD *v138; // r14
  unsigned __int64 v139; // rcx
  char v140; // al
  unsigned __int64 v141; // rcx
  unsigned __int64 v142; // rdx
  _BYTE *v143; // r14
  unsigned int v145; // ecx
  signed int v146; // edi
  unsigned int v147; // esi
  unsigned int v148; // r9d
  int v149; // r15d
  unsigned __int64 v150; // rbx
  unsigned __int64 v151; // r11
  unsigned __int64 v152; // rdi
  __int64 v153; // r11
  unsigned __int64 v154; // rdx
  unsigned int v155; // eax
  _QWORD *v156; // r8
  unsigned int v157; // r11d
  unsigned int v158; // eax
  unsigned int v159; // r11d
  unsigned __int64 v160; // rcx
  unsigned __int64 v161; // rdx
  unsigned int v162; // ecx
  int v163; // r8d
  __int64 v164; // rcx
  int v165; // eax
  int v166; // r11d
  _QWORD *v168; // r8
  _QWORD *v169; // rdx
  _QWORD *v170; // rcx
  unsigned __int64 v171; // rax
  _QWORD *v172; // r10
  unsigned __int64 v173; // r9
  int v177; // r8d
  int v178; // ecx
  unsigned __int64 v179; // rcx
  unsigned __int64 v180; // rdx
  _BYTE *v181; // r14
  __int64 v182; // rdx
  _QWORD *v183; // rsi
  char *v184; // rdi
  unsigned int v185; // ebx
  __int64 v186; // r13
  int v187; // r12d
  __int64 v188; // r9
  unsigned int v189; // r8d
  int v190; // r10d
  __int64 v191; // rdx
  int v192; // r9d
  unsigned int v193; // r8d
  unsigned int v194; // r15d
  __int64 v195; // r9
  unsigned __int64 v196; // rdx
  unsigned __int64 v197; // rcx
  unsigned int v198; // r13d
  __int64 v199; // rdx
  unsigned int v200; // r11d
  unsigned int v201; // r14d
  int v202; // ecx
  _DWORD *v203; // r10
  int v204; // ebx
  __int64 v205; // rax
  int v206; // edx
  __int64 v207; // rcx
  _DWORD *v208; // r8
  signed __int64 v209; // r9
  unsigned int v210; // eax
  _QWORD *v211; // rcx
  _QWORD *v212; // rdx
  int v213; // edi
  unsigned __int64 v214; // rax
  _QWORD *v215; // r9
  unsigned __int64 v216; // r8
  unsigned int v219; // ecx
  int v220; // ecx
  unsigned int v221; // r15d
  unsigned int v222; // r9d
  _DWORD *v223; // r15
  __int64 v224; // r9
  __int64 v225; // rdx
  unsigned int v226; // r12d
  _QWORD *v227; // rbx
  unsigned int v228; // r13d
  int v229; // r10d
  int v230; // r8d
  unsigned int v231; // r9d
  _DWORD *v232; // r8
  unsigned __int64 v233; // rdx
  unsigned __int64 v234; // rcx
  __int64 v235; // r9
  __int64 v236; // rdx
  unsigned int v237; // r13d
  unsigned int v238; // edi
  unsigned int v239; // r14d
  unsigned __int64 v241; // rdi
  unsigned __int64 v242; // r8
  _BYTE *v243; // r14
  unsigned __int64 v244; // rsi
  _QWORD *v245; // rcx
  __int64 v246; // rbx
  _WORD *v247; // r14
  unsigned __int64 v248; // rcx
  char v249; // al
  unsigned __int64 v250; // rcx
  unsigned __int64 v251; // rdx
  _BYTE *v252; // r14
  int v253; // r10d
  int v254; // r12d
  _DWORD *v255; // r11
  _DWORD *v256; // r8
  int v257; // edx
  __int64 v258; // rcx
  __int64 v259; // rax
  signed __int64 v260; // r9
  unsigned int v261; // eax
  _QWORD *v262; // rcx
  _QWORD *v263; // rdx
  int v264; // r9d
  unsigned __int64 v265; // r11
  unsigned int v268; // ecx
  int v269; // ecx
  unsigned int v272; // ecx
  signed int v273; // r11d
  int v274; // edx
  _DWORD *v275; // r9
  int v276; // r8d
  signed __int64 v277; // rbx
  __int64 v278; // rcx
  signed __int64 v279; // rsi
  unsigned int v280; // eax
  int v281; // r11d
  unsigned int v282; // r15d
  unsigned int v283; // r9d
  int v284; // r12d
  unsigned __int64 v285; // rbx
  unsigned __int64 v286; // r11
  unsigned __int64 v287; // rsi
  __int64 v288; // r11
  unsigned __int64 v289; // rdx
  unsigned __int64 v290; // r13
  unsigned int v291; // eax
  _QWORD *v292; // r8
  unsigned int v293; // r11d
  unsigned __int64 v294; // rdx
  unsigned __int64 v295; // rcx
  unsigned int v296; // ecx
  __int64 v297; // r15
  _DWORD *v298; // r12
  _QWORD *v299; // rdx
  char *v300; // rdi
  char *v301; // rcx
  int v302; // ebx
  unsigned __int64 v303; // rax
  unsigned __int64 v304; // r9
  unsigned __int64 v305; // r8
  unsigned int v308; // ecx
  signed int v309; // esi
  char *v310; // rbx
  _QWORD *v311; // rdx
  _QWORD *v312; // rcx
  unsigned __int64 v313; // rax
  _QWORD *v314; // r9
  unsigned __int64 v315; // r8
  unsigned int v318; // ecx
  int v319; // edx
  _DWORD *v320; // r9
  __int64 v321; // rcx
  __int64 v322; // r15
  int v323; // r8d
  unsigned __int64 v324; // r10
  unsigned int v325; // eax
  int v326; // esi
  unsigned __int64 v327; // rdi
  int v328; // r12d
  unsigned __int64 v329; // rbx
  unsigned __int64 v330; // rsi
  int v331; // r11d
  unsigned __int64 v332; // rdx
  unsigned __int64 v333; // r13
  unsigned int v334; // eax
  _QWORD *v335; // r8
  unsigned int v336; // edi
  unsigned __int64 v337; // rcx
  unsigned __int64 v338; // rdx
  unsigned int v339; // ecx
  int v340; // r8d
  __int64 v341; // rcx
  _QWORD *v342; // rcx
  int v343; // r8d
  __int64 v344; // rcx
  int v345; // eax
  int v346; // r11d
  __int64 v347; // rbx
  _DWORD *v348; // rsi
  _QWORD *v349; // rcx
  _QWORD *v350; // rdx
  _QWORD *v351; // r8
  int v352; // r10d
  unsigned int v355; // ecx
  _QWORD *v356; // r9
  _QWORD *v357; // rdx
  _QWORD *v358; // rcx
  unsigned __int64 v359; // rcx
  unsigned __int64 v360; // rdx
  _BYTE *v361; // r14
  __int64 v374; // r8
  _BYTE *v375; // rdx
  __int64 v376; // r9
  _BYTE *v377; // rdx
  __int64 v378; // r9
  _BYTE *v379; // r8
  __int64 v380; // r10
  _BYTE *v381; // r8
  unsigned int v382; // r8d
  __int64 v383; // rcx
  unsigned int v384; // r8d
  __int64 v385; // rcx
  unsigned int v386; // r8d
  __int64 v387; // rcx
  unsigned __int128 v388; // rax
  unsigned __int128 v389; // rax
  unsigned __int128 v390; // rax
  unsigned __int128 v391; // rax
  unsigned __int128 v392; // rax
  unsigned __int128 v393; // rax
  unsigned __int128 v394; // rax
  int v395; // [rsp+40h] [rbp-C0h]
  int v396; // [rsp+40h] [rbp-C0h]
  int v397; // [rsp+40h] [rbp-C0h]
  unsigned int v398; // [rsp+44h] [rbp-BCh]
  int v399; // [rsp+44h] [rbp-BCh]
  int v400; // [rsp+44h] [rbp-BCh]
  int v401; // [rsp+48h] [rbp-B8h]
  unsigned int v402; // [rsp+48h] [rbp-B8h]
  unsigned int v403; // [rsp+48h] [rbp-B8h]
  _DWORD *v404; // [rsp+50h] [rbp-B0h]
  unsigned int v405; // [rsp+58h] [rbp-A8h]
  unsigned int v406; // [rsp+58h] [rbp-A8h]
  int v407; // [rsp+58h] [rbp-A8h]
  unsigned int v408; // [rsp+58h] [rbp-A8h]
  unsigned int v409; // [rsp+5Ch] [rbp-A4h]
  unsigned int v410; // [rsp+5Ch] [rbp-A4h]
  unsigned int v411; // [rsp+5Ch] [rbp-A4h]
  unsigned __int64 v412; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v413; // [rsp+60h] [rbp-A0h]
  _QWORD *v414; // [rsp+68h] [rbp-98h]
  _QWORD *v415; // [rsp+68h] [rbp-98h]
  _QWORD *v416; // [rsp+68h] [rbp-98h]
  unsigned __int64 v417; // [rsp+70h] [rbp-90h]
  unsigned __int64 v418; // [rsp+70h] [rbp-90h]
  unsigned __int64 v419; // [rsp+78h] [rbp-88h]
  unsigned __int64 v420; // [rsp+80h] [rbp-80h]
  unsigned int *v421; // [rsp+88h] [rbp-78h]
  int v422; // [rsp+90h] [rbp-70h]
  unsigned int v423; // [rsp+90h] [rbp-70h]
  unsigned int v424; // [rsp+90h] [rbp-70h]
  unsigned __int64 v425; // [rsp+98h] [rbp-68h]
  int v426; // [rsp+A0h] [rbp-60h]
  int v427; // [rsp+A0h] [rbp-60h]
  unsigned int v428; // [rsp+A4h] [rbp-5Ch]
  unsigned int v429; // [rsp+A4h] [rbp-5Ch]
  unsigned int v430; // [rsp+A8h] [rbp-58h]
  unsigned int v431; // [rsp+A8h] [rbp-58h]
  __int64 v432; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v433; // [rsp+B0h] [rbp-50h]
  _BYTE *v434; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v435; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v436; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v437; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v438; // [rsp+D0h] [rbp-30h]
  __int64 v439; // [rsp+D0h] [rbp-30h]
  int v440; // [rsp+DCh] [rbp-24h]
  unsigned __int64 v441; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v442; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v443; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v444; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v445; // [rsp+F0h] [rbp-10h]
  char *v446; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v447; // [rsp+F8h] [rbp-8h]
  __int64 v448; // [rsp+100h] [rbp+0h]
  __int64 v449; // [rsp+108h] [rbp+8h]
  unsigned __int64 v450; // [rsp+108h] [rbp+8h]
  char *v451; // [rsp+110h] [rbp+10h]
  unsigned __int64 v452; // [rsp+130h] [rbp+30h]
  int v454; // [rsp+1A8h] [rbp+A8h]
  int v455; // [rsp+1B0h] [rbp+B0h]
  unsigned int v457; // [rsp+1C8h] [rbp+C8h]
  int v458; // [rsp+1C8h] [rbp+C8h]
  int v459; // [rsp+1C8h] [rbp+C8h]

  v455 = (int)a3;
  v454 = (int)a2;
  v7 = 0;
  v8 = a4;
  v10 = a1;
  if ( *(_QWORD *)(a1 + 262184) )
    return LZ4HC_compress_generic_dictCtx(a1);
  if ( (a7 != 2 || a5 >= 1) && (unsigned int)*a4 <= 0x7E000000 )
  {
    v11 = a2;
    *(_QWORD *)(a1 + 0x40000) += *a4;
    v12 = a2;
    v13 = *a4;
    v14 = a3;
    v15 = (char *)a2 + v13;
    v16 = (unsigned __int64)a2 + v13 - 12;
    v17 = (unsigned __int64)&a3[a5 - 5];
    if ( a7 != 2 )
      v17 = (unsigned __int64)&a3[a5];
    v425 = v17;
    v404 = a2;
    v421 = a2;
    v451 = (char *)a2 + v13;
    v448 = (__int64)a2 + v13 - 12;
    v419 = (unsigned __int64)(v15 - 5);
    v434 = a3;
    v420 = 0LL;
    v441 = 0LL;
    *v8 = 0;
    if ( (int)v13 < 13 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( (unsigned __int64)v12 > v16 )
        goto LABEL_344;
      v24 = *(unsigned int *)(v10 + 262172);
      v25 = *(_QWORD **)(v10 + 262152);
      v26 = v24;
      v27 = *(unsigned int *)(v10 + 262168);
      v28 = *v12;
      v29 = v27 + (_DWORD)v12 - (_DWORD)v25;
      v414 = v25;
      v457 = v29;
      v405 = *(_DWORD *)(v10 + 262172);
      if ( (int)v24 + 0x10000 <= v29 )
        v26 = v29 - 0xFFFF;
      v417 = *(_QWORD *)(v10 + 262160);
      v422 = 256;
      v437 = v417 + (unsigned int)v27 - v24;
      v30 = 0;
      v395 = 0;
      v443 = 0LL;
      v31 = 0;
      v409 = 0;
      v32 = 3;
      v401 = 3;
      v398 = v26;
      v33 = *(_DWORD *)(a1 + 262176);
      if ( v33 < v29 )
      {
        v34 = v33;
        do
        {
          v35 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v25 + v34 - v27)) >> 17;
          v36 = v33 - *(_DWORD *)(a1 + 4 * v35);
          if ( v36 > 0xFFFF )
            LOWORD(v36) = -1;
          ++v34;
          *(_WORD *)(a1 + 2LL * (unsigned __int16)v33 + 0x20000) = v36;
          *(_DWORD *)(a1 + 4 * v35) = v33++;
        }
        while ( v33 < v29 );
        v30 = 0;
        v32 = 3;
        LODWORD(v24) = v405;
      }
      v10 = a1;
      v37 = v404;
      *(_DWORD *)(a1 + 262176) = v29;
      v38 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v404) >> 17));
      if ( v38 >= v26 )
      {
        while ( 1 )
        {
          v39 = v30;
          if ( v422 <= 0 )
          {
LABEL_60:
            v14 = v434;
            v31 = v409;
            v10 = a1;
            break;
          }
          --v422;
          if ( v38 >= (unsigned int)v27 )
          {
            v53 = v404;
            v54 = v38 - (unsigned int)v27;
            if ( *(_WORD *)((char *)v404 + v32 - 1) != *(_WORD *)((char *)v25 + v32 + v54 - 1)
              || *(_DWORD *)((char *)v25 + (unsigned int)v54) != v28 )
            {
              v40 = v417;
              goto LABEL_57;
            }
            v55 = v404 + 1;
            v56 = (_DWORD)v404 + 4;
            v57 = (_QWORD *)((char *)v25 + (unsigned int)v54 + 4);
            v58 = (unsigned __int64)(v404 + 1);
            v59 = v404 + 1;
            v60 = (unsigned __int64)(v404 + 1);
            if ( (unsigned __int64)(v404 + 1) >= v419 - 7 )
              goto LABEL_52;
            if ( *v55 != *v57 )
            {
              __asm { tzcnt   rcx, rax }
              v64 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v58 = (unsigned __int64)(v404 + 3);
              ++v57;
              v55 = v404 + 3;
              v59 = v404 + 3;
              v60 = (unsigned __int64)(v404 + 3);
LABEL_52:
              while ( v58 < v419 - 7 )
              {
                if ( *v55 != *v57 )
                {
                  __asm { tzcnt   rax, rax }
                  v64 = ((unsigned int)_RAX >> 3) - v56 + (_DWORD)v55;
                  goto LABEL_55;
                }
                v55 = v59 + 2;
                ++v57;
                v58 = (unsigned __int64)v55;
                v59 += 2;
                v60 = (unsigned __int64)v55;
              }
              if ( v60 < v419 - 3 && *(_DWORD *)v57 == *(_DWORD *)v55 )
              {
                v55 = (_QWORD *)((char *)v55 + 4);
                v57 = (_QWORD *)((char *)v57 + 4);
              }
              if ( (unsigned __int64)v55 < v419 - 1 && *(_WORD *)v57 == *(_WORD *)v55 )
              {
                v55 = (_QWORD *)((char *)v55 + 2);
                v57 = (_QWORD *)((char *)v57 + 2);
              }
              if ( (unsigned __int64)v55 < v419 && *(_BYTE *)v57 == *(_BYTE *)v55 )
                LODWORD(v55) = (_DWORD)v55 + 1;
              v64 = (_DWORD)v55 - v56;
            }
LABEL_55:
            v65 = v457;
            v66 = v64 + 4;
            v30 = v395;
            v67 = v66 <= v32;
            v40 = v417;
            v53 = v404;
            if ( !v67 )
            {
              v401 = v66;
              v409 = v457 - v38;
LABEL_57:
              v65 = v457;
            }
          }
          else
          {
            v40 = v417;
            v41 = (_DWORD *)(v417 + v38 - (unsigned int)v24);
            if ( v38 > (int)v27 - 4 || *v41 != v28 )
            {
              v53 = v404;
              goto LABEL_57;
            }
            v42 = v37 + 1;
            v43 = (_DWORD)v37 + 4;
            v44 = (unsigned __int64)(v37 + 1);
            v45 = (_QWORD *)((char *)v37 + (unsigned int)v27 - v38);
            v46 = (unsigned __int64)(v37 + 1);
            v47 = (unsigned __int64)(v37 + 1);
            if ( (unsigned __int64)v45 > v419 )
              v45 = (_QWORD *)v419;
            v48 = v41 + 1;
            if ( v42 >= (_QWORD *)((char *)v45 - 7) )
            {
LABEL_44:
              while ( v44 < (unsigned __int64)v45 - 7 )
              {
                if ( *v48 != *v42 )
                {
                  __asm { tzcnt   rax, rax }
                  v52 = ((unsigned int)_RAX >> 3) - v43 + (_DWORD)v42;
                  goto LABEL_212;
                }
                v42 = (_QWORD *)(v46 + 8);
                ++v48;
                v44 = (unsigned __int64)v42;
                v46 += 8LL;
                v47 = (unsigned __int64)v42;
              }
              if ( v47 < (unsigned __int64)v45 - 3 && *(_DWORD *)v48 == *(_DWORD *)v42 )
              {
                v42 = (_QWORD *)((char *)v42 + 4);
                v48 = (_QWORD *)((char *)v48 + 4);
              }
              if ( v42 < (_QWORD *)((char *)v45 - 1) && *(_WORD *)v48 == *(_WORD *)v42 )
              {
                v42 = (_QWORD *)((char *)v42 + 2);
                v48 = (_QWORD *)((char *)v48 + 2);
              }
              if ( v42 < v45 && *(_BYTE *)v48 == *(_BYTE *)v42 )
                LODWORD(v42) = (_DWORD)v42 + 1;
              v52 = (_DWORD)v42 - v43;
            }
            else
            {
              if ( *v48 == *v42 )
              {
                v44 = (unsigned __int64)(v42 + 1);
                ++v48;
                v42 = (_QWORD *)v44;
                v46 = v44;
                v47 = v44;
                goto LABEL_44;
              }
              __asm { tzcnt   rcx, rax }
              v52 = (unsigned int)_RCX >> 3;
            }
LABEL_212:
            v53 = v404;
            v146 = v52 + 4;
            v168 = (_QWORD *)((char *)v404 + (int)(v52 + 4));
            if ( v168 == v45 && (unsigned __int64)v45 < v419 )
            {
              v169 = v25;
              v170 = (_QWORD *)((char *)v404 + v146);
              v171 = (unsigned __int64)v170;
              v172 = v170;
              v173 = (unsigned __int64)v170;
              if ( (unsigned __int64)v168 >= v419 - 7 )
              {
                while ( v171 < v419 - 7 )
                {
                  if ( *v169 != *v170 )
                  {
                    __asm { tzcnt   rax, rax }
                    v145 = ((unsigned int)_RAX >> 3) - (_DWORD)v168 + (_DWORD)v170;
                    goto LABEL_158;
                  }
                  v170 = v172 + 1;
                  ++v169;
LABEL_217:
                  v171 = (unsigned __int64)v170;
                  v172 = v170;
                  v173 = (unsigned __int64)v170;
                }
                if ( v173 < v419 - 3 && *(_DWORD *)v169 == *(_DWORD *)v170 )
                {
                  v170 = (_QWORD *)((char *)v170 + 4);
                  v169 = (_QWORD *)((char *)v169 + 4);
                }
                if ( (unsigned __int64)v170 < v419 - 1 && *(_WORD *)v169 == *(_WORD *)v170 )
                {
                  v170 = (_QWORD *)((char *)v170 + 2);
                  v169 = (_QWORD *)((char *)v169 + 2);
                }
                if ( (unsigned __int64)v170 < v419 && *(_BYTE *)v169 == *(_BYTE *)v170 )
                  LODWORD(v170) = (_DWORD)v170 + 1;
                v145 = (_DWORD)v170 - (_DWORD)v168;
              }
              else
              {
                if ( *v25 == *v168 )
                {
                  v170 = v168 + 1;
                  v169 = v25 + 1;
                  goto LABEL_217;
                }
                __asm { tzcnt   rcx, rax }
                v145 = (unsigned int)_RCX >> 3;
              }
LABEL_158:
              v53 = v404;
              v146 += v145;
            }
            v65 = v457;
            v30 = v395;
            if ( v146 > v401 )
            {
              v401 = v146;
              v409 = v457 - v38;
            }
            v40 = v417;
          }
          if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v38 + 0x20000) != 1 )
            goto LABEL_166;
          v147 = v38 - 1;
          if ( v30 )
          {
            v395 = v39;
            if ( v39 != 2 )
              goto LABEL_166;
          }
          else
          {
            if ( (_BYTE)v28 != HIBYTE(v28) || (unsigned __int16)v28 != HIWORD(v28) )
            {
              v395 = 1;
LABEL_166:
              v148 = v398;
LABEL_167:
              v38 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v38 + 0x20000);
              goto LABEL_59;
            }
            v395 = 2;
            v443 = (unsigned int)LZ4HC_countPattern(v53 + 1, v419, v28) + 4LL;
          }
          v148 = v398;
          if ( v147 < v398 || (unsigned int)v27 - v147 - 1 < 3 )
            goto LABEL_167;
          if ( v147 < (unsigned int)v27 )
          {
            v149 = 1;
            v150 = v40 + v147 - v405;
          }
          else
          {
            v149 = 0;
            v150 = (unsigned __int64)v414 + v147 - (unsigned int)v27;
          }
          if ( *(_DWORD *)v150 != v28 )
            goto LABEL_167;
          v151 = v419;
          if ( v149 )
            v151 = v437;
          v152 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v150 + 4), v151, v28) + 4LL;
          if ( v149 )
          {
            if ( v152 + v150 == v153 )
            {
              v382 = v28;
              v383 = 8 * (v152 & 3);
              if ( v383 )
                v382 = __ROL4__(v28, v383);
              v152 += (unsigned int)LZ4HC_countPattern(v414, v419, v382);
            }
            v154 = v417;
          }
          else
          {
            v154 = (unsigned __int64)v414;
          }
          v155 = LZ4HC_reverseCountPattern(v150, v154, v28);
          v156 = v414;
          v157 = v155;
          if ( !v149 && (_QWORD *)(v150 - v155) == v414 && v405 < (unsigned int)v27 )
          {
            v163 = v28;
            v164 = 8LL * (-v155 & 3);
            if ( v164 )
              v163 = __ROL4__(v28, v164);
            v165 = LZ4HC_reverseCountPattern(v437, v417, v163);
            v157 = v165 + v166;
            v156 = v414;
          }
          v148 = v398;
          v158 = v147 - v157;
          v159 = v398;
          if ( v158 > v398 )
            v159 = v158;
          v160 = v152 + v147 - v159;
          if ( v160 < v443 || v152 > v443 )
          {
            if ( (unsigned int)v27 - v159 - 1 < 3 )
            {
              v38 = v27;
            }
            else
            {
              v32 = v401;
              v161 = v443;
              if ( v160 < v443 )
                v161 = v160;
              if ( v401 < v161 )
              {
                if ( (unsigned __int64)v404 + v27 - v159 - (_QWORD)v156 > 0xFFFF )
                  goto LABEL_60;
                v401 = v161;
                v32 = v161;
                v409 = v65 - v159;
              }
              v162 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v159 + 0x20000);
              if ( v162 > v159 )
                goto LABEL_60;
              v38 = v159 - v162;
            }
          }
          else
          {
            v38 = v27;
            if ( (unsigned int)v27 - ((_DWORD)v152 - (_DWORD)v443 + v147) - 1 >= 3 )
              v38 = v152 - v443 + v147;
          }
LABEL_59:
          v25 = v414;
          v68 = v38 < v148;
          v30 = v395;
          v32 = v401;
          LODWORD(v24) = v405;
          v37 = v404;
          if ( v68 )
            goto LABEL_60;
        }
      }
      v452 = __PAIR64__(v32, v31);
      v69 = (char *)v404;
      v70 = v452;
      v438 = v452;
      v418 = v452;
      if ( v32 >= 4 )
        break;
      v11 = v421;
      v12 = (_DWORD *)((char *)v404 + 1);
      v17 = v425;
LABEL_256:
      v16 = v448;
      v404 = v12;
    }
    v71 = (char *)v404;
    v440 = HIDWORD(v452);
LABEL_63:
    v72 = v448;
    v446 = v71;
    while ( 1 )
    {
      v73 = HIDWORD(v418);
      v458 = HIDWORD(v418);
      v74 = &v69[SHIDWORD(v418)];
      if ( (unsigned __int64)v74 > v72 )
      {
        v412 = 0LL;
        v75 = 0;
        v76 = 0LL;
        goto LABEL_66;
      }
      v182 = *(unsigned int *)(v10 + 262168);
      v183 = *(_QWORD **)(v10 + 262152);
      v184 = v74 - 2;
      v420 = (unsigned __int64)(v74 - 2);
      v413 = (unsigned __int64)(v74 - 2);
      v185 = (_DWORD)v74 - 2 + *(_DWORD *)(v10 + 262168) - (_DWORD)v183;
      v428 = v182;
      v186 = (unsigned int)v182;
      v399 = HIDWORD(v418);
      v187 = HIDWORD(v418);
      v415 = v183;
      v188 = *(unsigned int *)(v10 + 262172);
      v430 = v188;
      v189 = *(_DWORD *)(v10 + 262172);
      v423 = v185;
      v436 = *(_QWORD *)(v10 + 262160);
      if ( (int)v188 + 0x10000 <= v185 )
        v189 = v185 - 0xFFFF;
      v190 = (_DWORD)v74 - 2 - (_DWORD)v404;
      v426 = 256;
      v444 = *(_QWORD *)(v10 + 262160) + v182 - v188;
      v191 = a1;
      v402 = v189;
      v406 = *(_DWORD *)v184;
      v192 = 0;
      v396 = 0;
      v193 = *(_DWORD *)(a1 + 262176);
      v194 = 0;
      v450 = 0LL;
      v410 = 0;
      if ( v193 < v185 )
      {
        v195 = v193;
        do
        {
          v196 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v183 + v195 - v186)) >> 17;
          v197 = v193 - *(_DWORD *)(a1 + 4 * v196);
          if ( v197 > 0xFFFF )
            LOWORD(v197) = -1;
          ++v195;
          *(_WORD *)(a1 + 2LL * (unsigned __int16)v193 + 0x20000) = v197;
          *(_DWORD *)(a1 + 4 * v196) = v193++;
        }
        while ( v193 < v185 );
        v70 = v438;
        v192 = 0;
        v184 = v74 - 2;
        v187 = HIDWORD(v418);
        v191 = a1;
      }
      *(_DWORD *)(v191 + 262176) = v185;
      v198 = *(_DWORD *)(v191 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v184) >> 17));
      v199 = v190;
      v432 = v190;
      if ( v198 >= v402 )
        break;
LABEL_467:
      v71 = v446;
      v73 = HIDWORD(v418);
      v69 = (char *)v404;
      v72 = v448;
      v76 = __PAIR64__(v187, v194);
      v412 = __PAIR64__(v187, v194);
      v75 = v187;
LABEL_66:
      v435 = v76;
      if ( v75 <= v73 )
      {
        v11 = v421;
        v86 = v14;
        v132 = v14;
        v133 = v14;
        v134 = v69 - (char *)v421;
        v135 = v14 + 1;
        if ( a7 )
        {
          v17 = v425;
          if ( (unsigned __int64)&v135[v134 / 0xFF + 8 + v134] > v425 )
            goto LABEL_499;
        }
        if ( v134 < 0xF )
        {
          *v132 = 16 * v134;
        }
        else
        {
          v136 = v134 - 15;
          *v132 = -16;
          if ( v134 - 15 >= 0xFF )
          {
            v392 = v136 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v392) = -1;
            memset_thunk_772440563353939046(v135, SDWORD2(v392), v136 / 0xFF);
            v73 = HIDWORD(v418);
            v135 += v136 / 0xFF;
            v69 = (char *)v404;
            v11 = v421;
            LOBYTE(v136) = v136 / 0xFF + v136;
          }
          *v135++ = v136;
        }
        v137 = v135;
        do
        {
          *v137 = *(_QWORD *)((char *)v137 + (char *)v11 - v135);
          ++v137;
        }
        while ( v137 < (_QWORD *)&v135[v134] );
        v138 = &v135[v134];
        v17 = v425;
        v139 = v73 - 4LL;
        *v138 = v418;
        v14 = v138 + 1;
        v434 = v14;
        if ( a7 )
        {
          if ( (unsigned __int64)&v14[v139 / 0xFF + 6] > v425 )
          {
LABEL_499:
            v85 = (char *)v404;
            goto LABEL_325;
          }
        }
        v140 = *v133;
        if ( v139 < 0xF )
        {
          *v132 = v139 + v140;
        }
        else
        {
          v141 = v73 - 19LL;
          *v132 = v140 + 15;
          if ( v141 >= 0x1FE )
          {
            v142 = v141 / 0x1FE;
            v141 %= 0x1FEuLL;
            do
            {
              *v14 = -1;
              v143 = v14 + 1;
              *v143 = -1;
              v14 = v143 + 1;
              --v142;
            }
            while ( v142 );
          }
          if ( v141 >= 0xFF )
          {
            LOBYTE(v141) = v141 + 1;
            *v14++ = -1;
          }
          *v14++ = v141;
          v434 = v14;
        }
        v12 = (unsigned int *)&v69[v73];
LABEL_255:
        v10 = a1;
        v11 = v12;
        v421 = v12;
        goto LABEL_256;
      }
      v77 = v420;
      if ( v71 < v69 && v420 < (unsigned __int64)&v69[v440] )
      {
        LOWORD(v418) = v70;
        v69 = v71;
        v73 = HIDWORD(v70);
        v458 = HIDWORD(v70);
        v404 = v71;
      }
      if ( (__int64)(v420 - (_QWORD)v69) >= 3 )
      {
        while ( 1 )
        {
          if ( (__int64)(v77 - (_QWORD)v69) < 18 )
          {
            v177 = v73;
            if ( v73 > 18 )
              v177 = 18;
            if ( (unsigned __int64)&v69[v177] > v77 + v75 - 4LL )
              v177 = v75 + v77 - (_DWORD)v69 - 4;
            v78 = 0;
            v178 = v177 + (_DWORD)v69 - v77;
            if ( v178 > 0 )
            {
              v77 += v178;
              v75 -= v178;
              v420 = v77;
              HIDWORD(v412) = v75;
              v76 = v412;
              v435 = v412;
            }
          }
          else
          {
            v78 = 0;
          }
          v449 = v75;
          v79 = v77 + v75;
          if ( v79 > v72 )
          {
            v80 = 0;
            v81 = 0LL;
            goto LABEL_73;
          }
          v441 = v79 - 3;
          v223 = (_DWORD *)(v79 - 3);
          v442 = v79 - 3;
          v400 = v75;
          v224 = *(unsigned int *)(a1 + 262172);
          v225 = *(unsigned int *)(a1 + 262168);
          v226 = v224;
          v227 = *(_QWORD **)(a1 + 262152);
          v228 = v225 + v79 - 3 - (_DWORD)v227;
          v429 = *(_DWORD *)(a1 + 262168);
          v411 = *(_DWORD *)(a1 + 262172);
          v433 = *(_QWORD *)(a1 + 262160);
          v416 = v227;
          v424 = v228;
          if ( (int)v224 + 0x10000 <= v228 )
            v226 = v228 - 0xFFFF;
          v397 = 0;
          v229 = v79 - 3 - v420;
          v403 = v226;
          v427 = 256;
          v230 = 0;
          v431 = *v223;
          v447 = *(_QWORD *)(a1 + 262160) + v225 - v224;
          v445 = 0LL;
          v408 = 0;
          v231 = *(_DWORD *)(a1 + 262176);
          if ( v231 < v228 )
          {
            v232 = (_DWORD *)((char *)v227 + v231 - (unsigned __int64)(unsigned int)v225);
            do
            {
              v233 = (unsigned __int64)(unsigned int)(-1640531535 * *v232) >> 17;
              v234 = v231 - *(_DWORD *)(a1 + 4 * v233);
              if ( v234 > 0xFFFF )
                LOWORD(v234) = -1;
              v232 = (_DWORD *)((char *)v232 + 1);
              *(_WORD *)(a1 + 2LL * (unsigned __int16)v231 + 0x20000) = v234;
              *(_DWORD *)(a1 + 4 * v233) = v231++;
            }
            while ( v231 < v228 );
            v223 = (_DWORD *)(v79 - 3);
            v230 = 0;
          }
          v235 = a1;
          v236 = v229;
          v439 = v229;
          *(_DWORD *)(a1 + 262176) = v228;
          v237 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v223) >> 17));
          if ( v237 >= v226 )
            break;
LABEL_401:
          v69 = (char *)v404;
          v77 = v420;
          v81 = __PAIR64__(v400, v78);
          v80 = v400;
LABEL_73:
          if ( v80 <= v75 )
          {
            if ( v77 < (unsigned __int64)&v69[v458] )
              v458 = v77 - (_DWORD)v69;
            v11 = v421;
            v86 = v14;
            v97 = v14;
            v98 = v14;
            v99 = v69 - (char *)v421;
            v100 = v14 + 1;
            if ( a7 && (unsigned __int64)&v100[v99 + 8 + v99 / 0xFF] > v425 )
            {
              v73 = v458;
              v85 = (char *)v404;
              v17 = v425;
LABEL_325:
              if ( a7 != 2 )
              {
                v23 = 0;
                goto LABEL_19;
              }
              v241 = v85 - (char *)v11;
              v14 = v86;
              v242 = (v85 - (char *)v11 + 240) / 0xFFuLL + v85 - (char *)v11 + 1;
              if ( (unsigned __int64)&v86[v242] <= v17 - 3 )
              {
                if ( v73 > 255 * (v17 - 3 - v242 - (unsigned __int64)v86) + 18 )
                  v73 = 255 * (v17 - 3 - v242 - (_DWORD)v86) + 18;
                v459 = v73;
                if ( (__int64)(v17 + v73 - v242 - (_QWORD)v86 + 2) >= 12 )
                {
                  v243 = v86 + 1;
                  if ( v241 < 0xF )
                  {
                    *v86 = 16 * v241;
                  }
                  else
                  {
                    v244 = v241 - 15;
                    *v86 = -16;
                    if ( v241 - 15 >= 0xFF )
                    {
                      v393 = v244 * (unsigned __int128)0x8080808080808081uLL;
                      BYTE8(v393) = -1;
                      memset_thunk_772440563353939046(v86 + 1, SDWORD2(v393), v244 / 0xFF);
                      v73 = v459;
                      v243 += v244 / 0xFF;
                      v11 = v421;
                      LOBYTE(v244) = v244 / 0xFF + v244;
                    }
                    *v243++ = v244;
                    v17 = v425;
                  }
                  v245 = v243;
                  v246 = (char *)v11 - v243;
                  do
                  {
                    *v245 = *(_QWORD *)((char *)v245 + v246);
                    ++v245;
                  }
                  while ( v245 < (_QWORD *)&v243[v241] );
                  v247 = &v243[v241];
                  v248 = v73 - 4LL;
                  *v247 = v418;
                  v14 = v247 + 1;
                  v249 = *v86;
                  if ( v248 < 0xF )
                  {
                    *v86 = v248 + v249;
                  }
                  else
                  {
                    v250 = v73 - 19LL;
                    *v86 = v249 + 15;
                    if ( v250 >= 0x1FE )
                    {
                      v251 = v250 / 0x1FE;
                      v250 %= 0x1FEuLL;
                      do
                      {
                        *v14 = -1;
                        v252 = v14 + 1;
                        *v252 = -1;
                        v14 = v252 + 1;
                        --v251;
                      }
                      while ( v251 );
                    }
                    if ( v250 >= 0xFF )
                    {
                      LOBYTE(v250) = v250 + 1;
                      *v14++ = -1;
                    }
                    *v14++ = v250;
                  }
                  v11 = (_DWORD *)((char *)v404 + v73);
                  v421 = v11;
                }
              }
LABEL_344:
              v8 = a4;
              v15 = v451;
LABEL_7:
              v18 = v15 - (char *)v11;
              v19 = v14;
              if ( a7 == 2 )
              {
                v17 += 5LL;
              }
              else if ( !a7 )
              {
                goto LABEL_14;
              }
              if ( (unsigned __int64)&v14[(v18 + 240) / 0xFF + 1 + v18] <= v17 )
              {
LABEL_14:
                v21 = v18 + (_DWORD)v11;
                if ( v18 < 0xF )
                {
                  *v14 = 16 * v18;
                }
                else
                {
                  *v14 = -16;
                  v22 = v18 - 15;
                  ++v14;
                  if ( v18 - 15 >= 0xFF )
                  {
                    v394 = v22 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v394) = -1;
                    memset_thunk_772440563353939046(v14, SDWORD2(v394), v22 / 0xFF);
                    v14 += v22 / 0xFF;
                    v11 = v421;
                    LOBYTE(v22) = v22 / 0xFF + v22;
                  }
                  v19 = v14;
                  *v14 = v22;
                }
                memmove(v19 + 1, v11, v18);
                *v8 = v21 - v454;
                v23 = v18 + (_DWORD)v14 + 1 - v455;
                goto LABEL_19;
              }
              if ( a7 != 1 )
              {
                v18 = v17 - (_QWORD)v14 - 1 - ((v17 - (unsigned __int64)v14 - 1 + 241) >> 8);
                goto LABEL_14;
              }
              v23 = 0;
LABEL_19:
              if ( v23 <= 0 )
                *(_BYTE *)(a1 + 262183) = 1;
              return (unsigned int)v23;
            }
            if ( v99 < 0xF )
            {
              *v97 = 16 * v99;
            }
            else
            {
              v101 = v99 - 15;
              *v97 = -16;
              if ( v99 - 15 >= 0xFF )
              {
                v390 = v101 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v390) = -1;
                memset_thunk_772440563353939046(v100, SDWORD2(v390), v101 / 0xFF);
                v69 = (char *)v404;
                v100 += v101 / 0xFF;
                v11 = v421;
                v98 = v97;
                LOBYTE(v101) = v101 / 0xFF + v101;
              }
              *v100++ = v101;
              v77 = v420;
            }
            v102 = v100;
            do
            {
              *v102 = *(_QWORD *)((char *)v102 + (char *)v11 - v100);
              ++v102;
            }
            while ( v102 < (_QWORD *)&v100[v99] );
            v103 = &v100[v99];
            *v103 = v418;
            v104 = v103 + 1;
            v105 = v458 - 4LL;
            if ( a7 )
            {
              v17 = v425;
              if ( (unsigned __int64)&v104[v105 / 0xFF + 6] > v425 )
              {
                v73 = v458;
                v85 = (char *)v404;
                goto LABEL_325;
              }
            }
            v106 = *v98;
            if ( v105 < 0xF )
            {
              *v97 = v105 + v106;
            }
            else
            {
              v107 = v458 - 19LL;
              *v97 = v106 + 15;
              if ( v107 >= 0x1FE )
              {
                v108 = v107 / 0x1FE;
                v107 %= 0x1FEuLL;
                do
                {
                  *v104 = -1;
                  v109 = v104 + 1;
                  *v109 = -1;
                  v104 = v109 + 1;
                  --v108;
                }
                while ( v108 );
              }
              if ( v107 >= 0xFF )
              {
                LOBYTE(v107) = v107 + 1;
                *v104++ = -1;
              }
              *v104++ = v107;
            }
            v11 = (unsigned int *)&v69[v458];
            v421 = v11;
            v86 = v104;
            v110 = v104;
            v111 = v104;
            v112 = v77 - (_QWORD)v11;
            v113 = v104 + 1;
            v85 = (char *)v77;
            v404 = (_DWORD *)v77;
            if ( a7 && (unsigned __int64)&v113[v112 + 8 + v112 / 0xFF] > v425 )
            {
              v17 = v425;
LABEL_324:
              LOWORD(v418) = v76;
              v73 = HIDWORD(v76);
              goto LABEL_325;
            }
            if ( v112 < 0xF )
            {
              *v110 = 16 * v112;
            }
            else
            {
              v114 = v112 - 15;
              *v110 = -16;
              if ( v112 - 15 >= 0xFF )
              {
                v391 = v114 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v391) = -1;
                memset_thunk_772440563353939046(v113, SDWORD2(v391), v114 / 0xFF);
                v113 += v114 / 0xFF;
                v111 = v110;
                LOBYTE(v114) = v114 / 0xFF + v114;
              }
              *v113++ = v114;
              v77 = v420;
            }
            v115 = v113;
            do
            {
              *v115 = *(_QWORD *)((char *)v115 + (char *)v11 - v113);
              ++v115;
            }
            while ( v115 < (_QWORD *)&v113[v112] );
            v116 = &v113[v112];
            v17 = v425;
            *v116 = v412;
            v14 = v116 + 1;
            v117 = SHIDWORD(v412) - 4LL;
            v434 = v14;
            if ( a7 && (unsigned __int64)&v14[v117 / 0xFF + 6] > v425 )
            {
              v85 = (char *)v404;
              goto LABEL_324;
            }
            v118 = *v111;
            if ( v117 >= 0xF )
            {
              v179 = SHIDWORD(v412) - 19LL;
              *v110 = v118 + 15;
              if ( v179 >= 0x1FE )
              {
                v180 = v179 / 0x1FE;
                v179 %= 0x1FEuLL;
                do
                {
                  *v14 = -1;
                  v181 = v14 + 1;
                  *v181 = -1;
                  v14 = v181 + 1;
                  --v180;
                }
                while ( v180 );
              }
              if ( v179 >= 0xFF )
              {
                LOBYTE(v179) = v179 + 1;
                *v14++ = -1;
              }
              *v14++ = v179;
              v434 = v14;
            }
            else
            {
              *v110 = v117 + v118;
            }
            v12 = (unsigned int *)(v77 + SHIDWORD(v412));
            goto LABEL_255;
          }
          v73 = v458;
          v82 = (char *)v441;
          v83 = (unsigned __int64)&v69[v458];
          if ( v441 >= v83 + 3 )
          {
            if ( v77 < v83 )
            {
              if ( (__int64)(v77 - (_QWORD)v69) >= 18 )
              {
                v73 = v77 - (_DWORD)v69;
                v458 = v77 - (_DWORD)v69;
              }
              else
              {
                if ( v458 > 18 )
                  v73 = 18;
                v458 = v73;
                if ( (unsigned __int64)&v69[v73] > v77 + v75 - 4LL )
                {
                  v73 = v75 + v77 - (_DWORD)v69 - 4;
                  v458 = v73;
                }
                v119 = v73 + (_DWORD)v69 - v77;
                if ( v119 > 0 )
                {
                  v420 = v119 + v77;
                  HIDWORD(v412) = v75 - v119;
                  v76 = v412;
                }
              }
            }
            v85 = (char *)v404;
            v86 = v14;
            v87 = v421;
            v120 = v14;
            v121 = v14;
            v122 = (char *)v404 - (char *)v421;
            v123 = v14 + 1;
            if ( a7 && (unsigned __int64)&v123[v122 / 0xFF + 8 + v122] > v425 )
              goto LABEL_346;
            if ( v122 < 0xF )
            {
              *v120 = 16 * v122;
            }
            else
            {
              v124 = v122 - 15;
              *v120 = -16;
              if ( v122 - 15 >= 0xFF )
              {
                v388 = v124 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v388) = -1;
                memset_thunk_772440563353939046(v123, SDWORD2(v388), v124 / 0xFF);
                v123 += v124 / 0xFF;
                v120 = v86;
                v87 = v421;
                LOBYTE(v124) = v124 / 0xFF + v124;
                v121 = v86;
              }
              *v123++ = v124;
              v82 = (char *)v441;
            }
            v125 = v123;
            do
            {
              *v125 = *(_QWORD *)((char *)v125 + (char *)v87 - v123);
              ++v125;
            }
            while ( v125 < (_QWORD *)&v123[v122] );
            v126 = &v123[v122];
            v73 = v458;
            *v126 = v418;
            v14 = v126 + 1;
            v127 = v458 - 4LL;
            v434 = v14;
            if ( a7 )
            {
              v17 = v425;
              if ( (unsigned __int64)&v14[v127 / 0xFF + 6] > v425 )
                goto LABEL_348;
            }
            v128 = *v121;
            if ( v127 < 0xF )
            {
              *v120 = v127 + v128;
            }
            else
            {
              v129 = v458 - 19LL;
              *v120 = v128 + 15;
              if ( v129 >= 0x1FE )
              {
                v130 = v129 / 0x1FE;
                v129 %= 0x1FEuLL;
                do
                {
                  *v14 = -1;
                  v131 = v14 + 1;
                  *v131 = -1;
                  v14 = v131 + 1;
                  --v130;
                }
                while ( v130 );
              }
              if ( v129 >= 0xFF )
              {
                LOBYTE(v129) = v129 + 1;
                *v14++ = -1;
              }
              *v14++ = v129;
              v434 = v14;
            }
            v69 = (char *)v420;
            v77 = (unsigned __int64)v82;
            v418 = v76;
            v76 = v81;
            v73 = HIDWORD(v418);
            v412 = v81;
            v75 = HIDWORD(v81);
            v435 = v81;
            v72 = v448;
            v421 = (_DWORD *)((char *)v404 + v458);
            v404 = (_DWORD *)v420;
            v420 = (unsigned __int64)v82;
            v458 = HIDWORD(v418);
          }
          else
          {
            if ( v441 >= v83 )
            {
              if ( v77 < v83 )
              {
                v84 = v458 + (_DWORD)v69 - v77;
                v420 = v84 + v77;
                if ( v75 - v84 >= 4 )
                {
                  HIDWORD(v412) = v75 - v84;
                  v76 = v412;
                }
                else
                {
                  v420 = v441;
                  v76 = v81;
                }
              }
              v85 = (char *)v404;
              v86 = v14;
              v87 = v421;
              v88 = v14;
              v89 = v14;
              v90 = (char *)v404 - (char *)v421;
              v91 = v14 + 1;
              if ( a7 && (unsigned __int64)&v91[v90 / 0xFF + 8 + v90] > v425 )
              {
LABEL_346:
                v11 = v87;
                v17 = v425;
                goto LABEL_325;
              }
              if ( v90 < 0xF )
              {
                *v88 = 16 * v90;
              }
              else
              {
                v92 = v90 - 15;
                *v88 = -16;
                if ( v90 - 15 >= 0xFF )
                {
                  v389 = v92 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v389) = -1;
                  memset_thunk_772440563353939046(v91, SDWORD2(v389), v92 / 0xFF);
                  v91 += v92 / 0xFF;
                  v88 = v86;
                  v87 = v421;
                  LOBYTE(v92) = v92 / 0xFF + v92;
                  v89 = v86;
                }
                *v91++ = v92;
                v82 = (char *)v441;
              }
              v93 = v91;
              do
              {
                *v93 = *(_QWORD *)((char *)v93 + (char *)v87 - v91);
                ++v93;
              }
              while ( v93 < (_QWORD *)&v91[v90] );
              v94 = &v91[v90];
              v73 = v458;
              *v94 = v418;
              v14 = v94 + 1;
              v95 = v458 - 4LL;
              v434 = v14;
              if ( a7 )
              {
                v17 = v425;
                if ( (unsigned __int64)&v14[v95 / 0xFF + 6] > v425 )
                {
LABEL_348:
                  v85 = (char *)v404;
                  v11 = v421;
                  goto LABEL_325;
                }
              }
              v96 = *v89;
              if ( v95 >= 0xF )
              {
                v359 = v458 - 19LL;
                *v88 = v96 + 15;
                if ( v359 >= 0x1FE )
                {
                  v360 = v359 / 0x1FE;
                  v359 %= 0x1FEuLL;
                  do
                  {
                    *v14 = -1;
                    v361 = v14 + 1;
                    *v361 = -1;
                    v14 = v361 + 1;
                    --v360;
                  }
                  while ( v360 );
                }
                if ( v359 >= 0xFF )
                {
                  LOBYTE(v359) = v359 + 1;
                  *v14++ = -1;
                }
                *v14++ = v359;
                v434 = v14;
              }
              else
              {
                *v88 = v95 + v96;
              }
              v71 = (char *)v420;
              v69 = v82;
              v10 = a1;
              v70 = v76;
              v421 = (_DWORD *)((char *)v404 + v458);
              v404 = v82;
              v418 = v81;
              v438 = v76;
              v440 = HIDWORD(v76);
              goto LABEL_63;
            }
            v412 = v81;
            v76 = v81;
            v75 = HIDWORD(v81);
            v77 = v441;
            v435 = v81;
            v72 = v448;
            v420 = v441;
          }
        }
        v238 = v429;
        v239 = v431;
        while ( 2 )
        {
          v253 = 0;
          v254 = v230;
          if ( v427 <= 0 )
          {
LABEL_400:
            v76 = v435;
            v14 = v434;
            v75 = HIDWORD(v412);
            v78 = v408;
            goto LABEL_401;
          }
          --v427;
          if ( v237 >= v238 )
          {
            v255 = (_DWORD *)((char *)v227 + v237 - v238);
            if ( *(_WORD *)(v400 + v420 - 1) == *(_WORD *)((char *)v255 + v400 - v236 - 1) && *v255 == v239 )
            {
              if ( v236 )
              {
                v256 = v223 - 1;
                v257 = v420 - (_DWORD)v223;
                v258 = 0LL;
                v259 = -(__int64)(v237 - v238);
                if ( (__int64)(v420 - (_QWORD)v223) <= v259 )
                  v257 = v259;
                v260 = (char *)v255 - (char *)v223;
                while ( v253 - v257 > 3 )
                {
                  if ( *v256 != *(_DWORD *)((char *)v256 + v260) )
                  {
                    _BitScanReverse(&v261, *v256 ^ *(_DWORD *)((char *)v256 + v260));
                    v253 -= (31 - v261) >> 3;
                    goto LABEL_361;
                  }
                  v253 -= 4;
                  v258 -= 4LL;
                  --v256;
                }
                v376 = v257;
                if ( v258 > v257 )
                {
                  v377 = (_BYTE *)(v258 + v420 + v449 - 4);
                  do
                  {
                    if ( *v377 != *((_BYTE *)v227 + v237 - v238 + v258 - 1) )
                      break;
                    --v253;
                    --v258;
                    --v377;
                  }
                  while ( v258 > v376 );
                  v239 = v431;
                }
              }
LABEL_361:
              v262 = v223 + 1;
              v263 = v255 + 1;
              v264 = (_DWORD)v223 + 4;
              v265 = v419;
              if ( (unsigned __int64)(v223 + 1) < v419 - 7 )
              {
                if ( *v263 != *v262 )
                {
                  __asm { tzcnt   rcx, rax }
                  v268 = (unsigned int)_RCX >> 3;
                  goto LABEL_364;
                }
                while ( 1 )
                {
                  ++v262;
                  ++v263;
                  if ( (unsigned __int64)v262 >= v419 - 7 )
                    break;
                  if ( *v263 != *v262 )
                  {
                    __asm { tzcnt   rax, rax }
                    v268 = ((unsigned int)_RAX >> 3) - v264 + (_DWORD)v262;
                    goto LABEL_364;
                  }
                }
              }
              if ( (unsigned __int64)v262 < v419 - 3 && *(_DWORD *)v263 == *(_DWORD *)v262 )
              {
                v262 = (_QWORD *)((char *)v262 + 4);
                v263 = (_QWORD *)((char *)v263 + 4);
              }
              if ( (unsigned __int64)v262 < v419 - 1 && *(_WORD *)v263 == *(_WORD *)v262 )
              {
                v262 = (_QWORD *)((char *)v262 + 2);
                v263 = (_QWORD *)((char *)v263 + 2);
              }
              if ( (unsigned __int64)v262 < v419 && *(_BYTE *)v263 == *(_BYTE *)v262 )
                LODWORD(v262) = (_DWORD)v262 + 1;
              v268 = (_DWORD)v262 - v264;
LABEL_364:
              v230 = v397;
              v235 = a1;
              v269 = v268 - v253 + 4;
              if ( v269 > v400 )
              {
                v400 = v269;
                v408 = v424 - v237;
                v441 = (unsigned __int64)v223 + v253;
                goto LABEL_378;
              }
LABEL_379:
              if ( *(_WORD *)(v235 + 2LL * (unsigned __int16)v237 + 0x20000) != 1 )
                goto LABEL_403;
              v282 = v237 - 1;
              if ( v230 )
              {
                v397 = v254;
                if ( v254 != 2 )
                  goto LABEL_403;
LABEL_384:
                v283 = v403;
                if ( v282 < v403 || v238 - v237 < 3 )
                  goto LABEL_404;
                if ( v282 < v238 )
                {
                  v284 = 1;
                  v285 = v433 + v282 - v411;
                }
                else
                {
                  v284 = 0;
                  v285 = (unsigned __int64)v416 + v282 - v238;
                }
                if ( *(_DWORD *)v285 != v239 )
                  goto LABEL_404;
                v286 = v419;
                if ( v284 )
                  v286 = v447;
                v287 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v285 + 4), v286, v239) + 4LL;
                if ( v284 )
                {
                  if ( v287 + v285 == v288 )
                  {
                    v386 = v239;
                    v387 = 8 * (v287 & 3);
                    if ( v387 )
                      v386 = __ROL4__(v239, v387);
                    v287 += (unsigned int)LZ4HC_countPattern(v416, v419, v386);
                  }
                  v290 = v433;
                  v289 = v433;
                }
                else
                {
                  v289 = (unsigned __int64)v416;
                  v290 = v433;
                }
                v291 = LZ4HC_reverseCountPattern(v285, v289, v239);
                v292 = v416;
                v293 = v291;
                if ( !v284 && (_QWORD *)(v285 - v291) == v416 && v411 < v238 )
                {
                  v343 = v239;
                  v344 = 8LL * (-v291 & 3);
                  if ( v344 )
                    v343 = __ROL4__(v239, v344);
                  v345 = LZ4HC_reverseCountPattern(v447, v290, v343);
                  v293 = v345 + v346;
                  v292 = v416;
                }
                v283 = v403;
                v294 = v445;
                v237 = v403;
                if ( v282 - v293 > v403 )
                  v237 = v282 - v293;
                v295 = v287 + v282 - v237;
                if ( v295 < v445 || v287 > v445 )
                {
                  if ( v238 - v237 - 1 >= 3 )
                  {
                    if ( !v439 )
                    {
                      if ( v295 < v445 )
                        v294 = v287 + v282 - v237;
                      if ( v400 < v294 )
                      {
                        if ( v442 + v238 - (unsigned __int64)v237 - (_QWORD)v292 > 0xFFFF )
                          goto LABEL_400;
                        v400 = v294;
                        v408 = v424 - v237;
                        v441 = v442;
                      }
                      v296 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v237 + 0x20000);
                      if ( v296 > v237 )
                        goto LABEL_400;
                      v237 -= v296;
                    }
                  }
                  else
                  {
                    v237 = v238;
                  }
                }
                else
                {
                  v237 = v238;
                  if ( v238 - (v282 - (_DWORD)v445 + (_DWORD)v287) - 1 >= 3 )
                    v237 = v282 - v445 + v287;
                }
              }
              else
              {
                if ( (_BYTE)v239 == HIBYTE(v239) && (unsigned __int16)v239 == HIWORD(v239) )
                {
                  v397 = 2;
                  v445 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v442 + 4), v265, v239) + 4LL;
                  goto LABEL_384;
                }
                v397 = 1;
LABEL_403:
                v283 = v403;
LABEL_404:
                v237 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v237 + 0x20000);
              }
              v223 = (_DWORD *)v442;
              v227 = v416;
              v236 = v439;
              v230 = v397;
              if ( v237 < v283 )
                goto LABEL_400;
              v235 = a1;
              continue;
            }
            v235 = a1;
LABEL_378:
            v265 = v419;
            goto LABEL_379;
          }
          break;
        }
        v347 = v237 - v411;
        v348 = (_DWORD *)(v347 + v433);
        if ( v237 > v238 - 4 || *v348 != v239 )
          goto LABEL_378;
        v349 = v223 + 1;
        v350 = v348 + 1;
        v351 = (_QWORD *)((char *)v223 + v238 - v237);
        v352 = (_DWORD)v223 + 4;
        if ( (unsigned __int64)v351 > v419 )
          v351 = (_QWORD *)v419;
        if ( v349 < (_QWORD *)((char *)v351 - 7) )
        {
          if ( *v350 != *v349 )
          {
            __asm { tzcnt   rcx, rax }
            v355 = (unsigned int)_RCX >> 3;
LABEL_494:
            v273 = v355 + 4;
            v356 = (_QWORD *)((char *)v223 + (int)(v355 + 4));
            if ( v356 == v351 && (unsigned __int64)v351 < v419 )
            {
              v357 = v416;
              v358 = (_QWORD *)((char *)v223 + v273);
              if ( (unsigned __int64)v356 >= v419 - 7 )
                goto LABEL_514;
              if ( *v356 != *v416 )
              {
                __asm { tzcnt   rcx, rax }
                v272 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v358 = v356 + 1;
                v357 = v416 + 1;
LABEL_514:
                while ( (unsigned __int64)v358 < v419 - 7 )
                {
                  if ( *v357 != *v358 )
                  {
                    __asm { tzcnt   rax, rax }
                    v272 = ((unsigned int)_RAX >> 3) - (_DWORD)v356 + (_DWORD)v358;
                    goto LABEL_368;
                  }
                  ++v358;
                  ++v357;
                }
                if ( (unsigned __int64)v358 < v419 - 3 && *(_DWORD *)v357 == *(_DWORD *)v358 )
                {
                  v358 = (_QWORD *)((char *)v358 + 4);
                  v357 = (_QWORD *)((char *)v357 + 4);
                }
                if ( (unsigned __int64)v358 < v419 - 1 && *(_WORD *)v357 == *(_WORD *)v358 )
                {
                  v358 = (_QWORD *)((char *)v358 + 2);
                  v357 = (_QWORD *)((char *)v357 + 2);
                }
                if ( (unsigned __int64)v358 < v419 && *(_BYTE *)v357 == *(_BYTE *)v358 )
                  LODWORD(v358) = (_DWORD)v358 + 1;
                v272 = (_DWORD)v358 - (_DWORD)v356;
              }
LABEL_368:
              v273 += v272;
            }
            v274 = 0;
            if ( v439 )
            {
              v275 = v223 - 1;
              v276 = v420 - (_DWORD)v223;
              v277 = -v347;
              v278 = 0LL;
              if ( (__int64)(v420 - (_QWORD)v223) <= v277 )
                v276 = v277;
              v279 = (char *)v348 - (char *)v223;
              while ( v274 - v276 > 3 )
              {
                if ( *v275 != *(_DWORD *)((char *)v275 + v279) )
                {
                  _BitScanReverse(&v280, *v275 ^ *(_DWORD *)((char *)v275 + v279));
                  v274 -= (31 - v280) >> 3;
                  goto LABEL_376;
                }
                v274 -= 4;
                v278 -= 4LL;
                --v275;
              }
              v380 = v276;
              if ( v278 > v276 )
              {
                v381 = (_BYTE *)(v278 + v420 + v449 - 4);
                do
                {
                  if ( *v381 != *(_BYTE *)(v433 + v237 - v411 + v278 - 1) )
                    break;
                  --v274;
                  --v278;
                  --v381;
                }
                while ( v278 > v380 );
                v238 = v429;
              }
            }
LABEL_376:
            v230 = v397;
            v281 = v273 - v274;
            v235 = a1;
            if ( v281 > v400 )
            {
              v400 = v281;
              v441 = (unsigned __int64)v223 + v274;
              v408 = v424 - v237;
            }
            goto LABEL_378;
          }
          while ( 1 )
          {
            ++v349;
            ++v350;
            if ( v349 >= (_QWORD *)((char *)v351 - 7) )
              break;
            if ( *v350 != *v349 )
            {
              __asm { tzcnt   rax, rax }
              v355 = ((unsigned int)_RAX >> 3) - v352 + (_DWORD)v349;
              goto LABEL_494;
            }
          }
        }
        if ( v349 < (_QWORD *)((char *)v351 - 3) && *(_DWORD *)v350 == *(_DWORD *)v349 )
        {
          v349 = (_QWORD *)((char *)v349 + 4);
          v350 = (_QWORD *)((char *)v350 + 4);
        }
        if ( v349 < (_QWORD *)((char *)v351 - 1) && *(_WORD *)v350 == *(_WORD *)v349 )
        {
          v349 = (_QWORD *)((char *)v349 + 2);
          v350 = (_QWORD *)((char *)v350 + 2);
        }
        if ( v349 < v351 && *(_BYTE *)v350 == *(_BYTE *)v349 )
          LODWORD(v349) = (_DWORD)v349 + 1;
        v355 = (_DWORD)v349 - v352;
        goto LABEL_494;
      }
      v10 = a1;
      v69 = (char *)v420;
      v404 = (_DWORD *)v420;
      v418 = v76;
    }
    v200 = v406;
    v201 = v428;
    while ( 1 )
    {
      v202 = v192;
      v407 = v192;
      if ( v426 <= 0 )
      {
LABEL_466:
        v70 = v438;
        v14 = v434;
        v194 = v410;
        goto LABEL_467;
      }
      --v426;
      if ( v198 < v201 )
      {
        v297 = v198 - v430;
        v298 = (_DWORD *)(v297 + v436);
        if ( v198 <= v201 - 4 && *v298 == v200 )
        {
          v299 = v298 + 1;
          v300 = &v184[v201 - v198];
          if ( (unsigned __int64)v300 > v419 )
            v300 = (char *)v419;
          v301 = (char *)(v413 + 4);
          v302 = v413 + 4;
          v303 = v413 + 4;
          v304 = v413 + 4;
          v305 = v413 + 4;
          if ( v413 + 4 >= (unsigned __int64)(v300 - 7) )
          {
LABEL_523:
            while ( v303 < (unsigned __int64)(v300 - 7) )
            {
              if ( *v299 != *(_QWORD *)v301 )
              {
                __asm { tzcnt   rax, rax }
                v308 = ((unsigned int)_RAX >> 3) - v302 + (_DWORD)v301;
                goto LABEL_421;
              }
              v301 = (char *)(v304 + 8);
              ++v299;
              v303 = (unsigned __int64)v301;
              v304 += 8LL;
              v305 = (unsigned __int64)v301;
            }
            if ( v305 < (unsigned __int64)(v300 - 3) && *(_DWORD *)v299 == *(_DWORD *)v301 )
            {
              v301 += 4;
              v299 = (_QWORD *)((char *)v299 + 4);
            }
            if ( v301 < v300 - 1 && *(_WORD *)v299 == *(_WORD *)v301 )
            {
              v301 += 2;
              v299 = (_QWORD *)((char *)v299 + 2);
            }
            if ( v301 < v300 && *(_BYTE *)v299 == *v301 )
              LODWORD(v301) = (_DWORD)v301 + 1;
            v308 = (_DWORD)v301 - v302;
          }
          else
          {
            if ( *v299 == *(_QWORD *)v301 )
            {
              v303 = v413 + 12;
              v299 = v298 + 3;
              v301 = (char *)(v413 + 12);
              v304 = v413 + 12;
              v305 = v413 + 12;
              goto LABEL_523;
            }
            __asm { tzcnt   rcx, rax }
            v308 = (unsigned int)_RCX >> 3;
          }
LABEL_421:
          v309 = v308 + 4;
          v310 = (char *)(v413 + (int)(v308 + 4));
          if ( v310 == v300 && (unsigned __int64)v300 < v419 )
          {
            v311 = v415;
            v312 = (_QWORD *)(v413 + v309);
            v313 = (unsigned __int64)v312;
            v314 = v312;
            v315 = (unsigned __int64)v312;
            if ( (unsigned __int64)v310 >= v419 - 7 )
            {
              while ( v313 < v419 - 7 )
              {
                if ( *v311 != *v312 )
                {
                  __asm { tzcnt   rax, rax }
                  v318 = ((unsigned int)_RAX >> 3) - (_DWORD)v310 + (_DWORD)v312;
                  goto LABEL_426;
                }
                v312 = v314 + 1;
                ++v311;
LABEL_527:
                v313 = (unsigned __int64)v312;
                v314 = v312;
                v315 = (unsigned __int64)v312;
              }
              if ( v315 < v419 - 3 && *(_DWORD *)v311 == *(_DWORD *)v312 )
              {
                v312 = (_QWORD *)((char *)v312 + 4);
                v311 = (_QWORD *)((char *)v311 + 4);
              }
              if ( (unsigned __int64)v312 < v419 - 1 && *(_WORD *)v311 == *(_WORD *)v312 )
              {
                v312 = (_QWORD *)((char *)v312 + 2);
                v311 = (_QWORD *)((char *)v311 + 2);
              }
              if ( (unsigned __int64)v312 < v419 && *(_BYTE *)v311 == *(_BYTE *)v312 )
                LODWORD(v312) = (_DWORD)v312 + 1;
              v318 = (_DWORD)v312 - (_DWORD)v310;
            }
            else
            {
              if ( *v415 == *(_QWORD *)v310 )
              {
                v312 = v310 + 8;
                v311 = v415 + 1;
                goto LABEL_527;
              }
              __asm { tzcnt   rcx, rax }
              v318 = (unsigned int)_RCX >> 3;
            }
LABEL_426:
            v309 += v318;
          }
          v184 = (char *)v413;
          v319 = 0;
          if ( v432 )
          {
            v320 = v298 - 1;
            v321 = 0LL;
            v322 = -v297;
            v323 = (_DWORD)v404 - v413;
            if ( (__int64)((__int64)v404 - v413) <= v322 )
              v323 = v322;
            v324 = v413 - (_QWORD)v298;
            while ( v319 - v323 > 3 )
            {
              if ( *v320 != *(_DWORD *)((char *)v320 + v324) )
              {
                _BitScanReverse(&v325, *v320 ^ *(_DWORD *)((char *)v320 + v324));
                v319 -= (31 - v325) >> 3;
                goto LABEL_434;
              }
              v319 -= 4;
              v321 -= 4LL;
              --v320;
            }
            v378 = v323;
            if ( v321 > v323 )
            {
              v379 = (char *)v404 + v321 + SHIDWORD(v418) - 3;
              do
              {
                if ( *v379 != *((_BYTE *)v298 + v321 - 1) )
                  break;
                --v319;
                --v321;
                --v379;
              }
              while ( v321 > v378 );
              v201 = v428;
            }
          }
LABEL_434:
          v192 = v396;
          v326 = v309 - v319;
          if ( v326 > v399 )
          {
            v399 = v326;
            v420 = v413 + v319;
            v410 = v423 - v198;
          }
          v183 = v415;
          goto LABEL_286;
        }
      }
      else
      {
        v203 = (_DWORD *)((char *)v183 + v198 - v201);
        if ( *(_WORD *)((char *)v404 + v187 - 1) == *(_WORD *)((char *)v203 + v187 - v199 - 1) && *v203 == v200 )
        {
          v204 = 0;
          if ( v199 )
          {
            v205 = -(__int64)(v198 - v201);
            v206 = (_DWORD)v404 - (_DWORD)v184;
            v207 = 0LL;
            v208 = v203 - 1;
            if ( (char *)v404 - v184 <= v205 )
              v206 = v205;
            v209 = v184 - (char *)v203;
            while ( v204 - v206 > 3 )
            {
              if ( *v208 != *(_DWORD *)((char *)v208 + v209) )
              {
                _BitScanReverse(&v210, *v208 ^ *(_DWORD *)((char *)v208 + v209));
                v204 -= (31 - v210) >> 3;
                goto LABEL_281;
              }
              v204 -= 4;
              v207 -= 4LL;
              --v208;
            }
            v374 = v206;
            if ( v207 > v206 )
            {
              v375 = (char *)v404 + v207 + SHIDWORD(v418) - 3;
              do
              {
                if ( *v375 != *((_BYTE *)v203 + v207 - 1) )
                  break;
                --v204;
                --v207;
                --v375;
              }
              while ( v207 > v374 );
              v201 = v428;
            }
          }
LABEL_281:
          v211 = v184 + 4;
          v212 = v203 + 1;
          v213 = (_DWORD)v184 + 4;
          v214 = (unsigned __int64)v211;
          v215 = v211;
          v216 = (unsigned __int64)v211;
          if ( (unsigned __int64)v211 >= v419 - 7 )
            goto LABEL_510;
          if ( *v212 != *v211 )
          {
            __asm { tzcnt   rcx, rax }
            v219 = (unsigned int)_RCX >> 3;
          }
          else
          {
            v214 = (unsigned __int64)(v211 + 1);
            v212 = v203 + 3;
            v211 = (_QWORD *)v214;
            v215 = (_QWORD *)v214;
            v216 = v214;
LABEL_510:
            while ( v214 < v419 - 7 )
            {
              if ( *v212 != *v211 )
              {
                __asm { tzcnt   rax, rax }
                v219 = ((unsigned int)_RAX >> 3) - v213 + (_DWORD)v211;
                goto LABEL_284;
              }
              v211 = v215 + 1;
              ++v212;
              v214 = (unsigned __int64)v211;
              ++v215;
              v216 = (unsigned __int64)v211;
            }
            if ( v216 < v419 - 3 && *(_DWORD *)v212 == *(_DWORD *)v211 )
            {
              v211 = (_QWORD *)((char *)v211 + 4);
              v212 = (_QWORD *)((char *)v212 + 4);
            }
            if ( (unsigned __int64)v211 < v419 - 1 && *(_WORD *)v212 == *(_WORD *)v211 )
            {
              v211 = (_QWORD *)((char *)v211 + 2);
              v212 = (_QWORD *)((char *)v212 + 2);
            }
            if ( (unsigned __int64)v211 < v419 && *(_BYTE *)v212 == *(_BYTE *)v211 )
              LODWORD(v211) = (_DWORD)v211 + 1;
            v219 = (_DWORD)v211 - v213;
          }
LABEL_284:
          v184 = (char *)v413;
          v192 = v396;
          v220 = v219 - v204 + 4;
          if ( v220 > v187 )
          {
            v399 = v220;
            v420 = v413 + v204;
            v410 = v423 - v198;
          }
LABEL_286:
          v202 = v407;
          goto LABEL_287;
        }
        v202 = v192;
      }
LABEL_287:
      if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v198 + 0x20000) != 1 )
        goto LABEL_291;
      v221 = v198 - 1;
      if ( v192 )
      {
        v396 = v202;
        if ( v202 != 2 )
          goto LABEL_291;
        v327 = v419;
      }
      else
      {
        if ( (_BYTE)v200 != HIBYTE(v200) || (unsigned __int16)v200 != HIWORD(v200) )
        {
          v396 = 1;
LABEL_291:
          v222 = v402;
LABEL_292:
          v198 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v198 + 0x20000);
LABEL_464:
          v199 = v432;
          goto LABEL_465;
        }
        v342 = v184 + 4;
        v396 = 2;
        v327 = v419;
        v450 = (unsigned int)LZ4HC_countPattern(v342, v419, v200) + 4LL;
      }
      v222 = v402;
      if ( v221 < v402 || v201 - v198 < 3 )
        goto LABEL_292;
      if ( v221 < v201 )
      {
        v328 = 1;
        v329 = v436 + v221 - v430;
      }
      else
      {
        v328 = 0;
        v329 = (unsigned __int64)v183 + v221 - v201;
      }
      if ( *(_DWORD *)v329 != v200 )
        goto LABEL_292;
      if ( v328 )
        v327 = v444;
      v330 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v329 + 4), v327, v200) + 4LL;
      if ( v328 )
      {
        if ( v330 + v329 == v327 )
        {
          v384 = v331;
          v385 = 8 * (v330 & 3);
          if ( v385 )
            v384 = __ROL4__(v331, v385);
          v330 += (unsigned int)LZ4HC_countPattern(v415, v419, v384);
        }
        v333 = v436;
        v332 = v436;
      }
      else
      {
        v332 = (unsigned __int64)v415;
        v333 = v436;
      }
      v334 = LZ4HC_reverseCountPattern(v329, v332, v331);
      v335 = v415;
      v336 = v334;
      if ( !v328 && (_QWORD *)(v329 - v334) == v415 && v430 < v201 )
      {
        v340 = v200;
        v341 = 8LL * (-v334 & 3);
        if ( v341 )
          v340 = __ROL4__(v200, v341);
        v336 = LZ4HC_reverseCountPattern(v444, v333, v340) + v334;
        v335 = v415;
      }
      v222 = v402;
      v198 = v402;
      if ( v221 - v336 > v402 )
        v198 = v221 - v336;
      v337 = v330 + v221 - v198;
      if ( v337 >= v450 && v330 <= v450 )
      {
        v198 = v201;
        if ( v201 - (v221 - (_DWORD)v450 + (_DWORD)v330) - 1 >= 3 )
          v198 = v221 - v450 + v330;
        goto LABEL_464;
      }
      v199 = v432;
      if ( v201 - v198 - 1 < 3 )
      {
        v198 = v201;
        goto LABEL_465;
      }
      if ( !v432 )
      {
        v187 = v399;
        v338 = v450;
        if ( v337 < v450 )
          v338 = v330 + v221 - v198;
        if ( v399 < v338 )
        {
          if ( v413 + v201 - (unsigned __int64)v198 - (_QWORD)v335 > 0xFFFF )
            goto LABEL_466;
          v187 = v338;
          v399 = v338;
          v410 = v423 - v198;
          v420 = v413;
        }
        v339 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v198 + 0x20000);
        if ( v339 > v198 )
          goto LABEL_466;
        v198 -= v339;
        goto LABEL_464;
      }
LABEL_465:
      v184 = (char *)v413;
      v68 = v198 < v222;
      v192 = v396;
      v183 = v415;
      v187 = v399;
      if ( v68 )
        goto LABEL_466;
    }
  }
  return v7;
}
