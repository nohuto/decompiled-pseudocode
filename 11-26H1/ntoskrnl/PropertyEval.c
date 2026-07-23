/*
 * XREFs of PropertyEval @ 0x140969840
 * Callers:
 *     FilterEvalStrict @ 0x140968990 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x14096971C (FilterEvalImpliedAnd.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ArrayContains @ 0x14071E80C (ArrayContains.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     CompareFileTimeType @ 0x1408A638C (CompareFileTimeType.c)
 *     StringListContains @ 0x140A9DD20 (StringListContains.c)
 *     SubstringMatch @ 0x140AA4E68 (SubstringMatch.c)
 *     StringListElementSubstringMatch @ 0x140B6FFB0 (StringListElementSubstringMatch.c)
 */

__int64 __fastcall PropertyEval(
        unsigned int a1,
        char *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int *Buf2,
        unsigned int a7,
        int *a8)
{
  size_t v8; // r11
  int v10; // r12d
  unsigned int v11; // edi
  int v12; // ebx
  int v13; // r8d
  unsigned int v14; // r9d
  int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  unsigned int v19; // r9d
  unsigned int v20; // r9d
  unsigned int v21; // r9d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  unsigned int v26; // r9d
  unsigned int v27; // r9d
  int v28; // eax
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // r9d
  unsigned int v33; // r9d
  unsigned int v34; // r9d
  unsigned int v35; // r9d
  unsigned int v36; // r9d
  float v37; // xmm1_4
  bool v38; // cf
  unsigned int v39; // r9d
  unsigned int v40; // r9d
  unsigned int v41; // r9d
  unsigned int v42; // r9d
  unsigned int v43; // r9d
  unsigned int v44; // r9d
  unsigned int v45; // r9d
  unsigned int v46; // r9d
  unsigned int v47; // r9d
  unsigned int v48; // r9d
  unsigned int v49; // r9d
  __m128i v50; // xmm0
  float v51; // xmm0_4
  bool v52; // cf
  bool v53; // zf
  int v54; // ecx
  unsigned int v55; // r9d
  unsigned int v56; // r9d
  unsigned int v57; // r9d
  unsigned int v58; // r9d
  unsigned int v59; // r9d
  unsigned int v60; // r9d
  unsigned int v61; // r9d
  unsigned int v62; // r9d
  unsigned int v63; // r9d
  unsigned int v64; // r9d
  unsigned int v65; // r9d
  unsigned int v66; // r9d
  int v67; // eax
  int v68; // eax
  unsigned int v69; // r9d
  unsigned int v70; // r9d
  unsigned int v71; // r9d
  unsigned int v72; // r9d
  unsigned int v73; // r9d
  unsigned int v74; // r9d
  unsigned int v75; // r9d
  unsigned int v76; // r9d
  unsigned int v77; // r9d
  unsigned int v78; // r9d
  unsigned int v79; // r9d
  unsigned int v80; // r9d
  unsigned int v81; // r9d
  unsigned int v82; // r9d
  unsigned int v83; // r9d
  unsigned int v84; // r9d
  unsigned int v85; // r9d
  unsigned int v86; // r9d
  unsigned int v87; // r9d
  unsigned int v88; // r9d
  unsigned int v89; // r9d
  unsigned int v90; // r9d
  unsigned int v91; // r9d
  unsigned int v92; // r9d
  unsigned int v93; // r9d
  unsigned int v94; // r9d
  unsigned int v95; // r9d
  unsigned int v96; // r9d
  unsigned int v97; // r9d
  unsigned int v98; // r9d
  unsigned int v99; // r9d
  unsigned int v100; // r9d
  unsigned int v101; // r9d
  unsigned int v102; // r9d
  unsigned int v103; // r9d
  unsigned int v104; // r9d
  int v105; // edx
  bool v106; // zf
  BOOL v107; // eax
  unsigned int v108; // r9d
  unsigned int v109; // r9d
  unsigned int v110; // r9d
  unsigned int v111; // r9d
  int v112; // eax
  unsigned int v113; // r9d
  unsigned int v114; // r9d
  unsigned int v115; // r9d
  unsigned int v116; // r9d
  unsigned int v117; // r9d
  unsigned int v118; // r9d
  unsigned int v119; // r9d
  unsigned int v120; // r9d
  unsigned int v121; // r9d
  unsigned int v122; // r9d
  unsigned int v123; // r9d
  unsigned int v124; // r9d
  unsigned int v125; // r9d
  unsigned int v126; // r9d
  unsigned int v127; // r9d
  unsigned int v128; // r9d
  unsigned int v129; // r9d
  unsigned int v130; // r9d
  unsigned int v131; // r9d
  unsigned int v132; // r9d
  unsigned int v133; // r9d
  unsigned int v134; // r9d
  unsigned int v135; // r9d
  unsigned int v136; // r9d
  unsigned int v137; // r9d
  unsigned int v138; // r9d
  unsigned int v139; // r9d
  unsigned int v140; // r9d
  unsigned int v141; // r9d
  unsigned int v142; // r9d
  unsigned int v143; // r9d
  unsigned int v144; // r9d
  unsigned int v145; // r9d
  unsigned int v146; // r9d
  unsigned int v147; // r9d
  unsigned int v148; // r9d
  unsigned int v149; // r9d
  unsigned int v150; // r9d
  unsigned int v151; // r9d
  unsigned int v152; // r9d
  unsigned int v153; // r9d
  unsigned int v154; // r9d
  unsigned int v155; // r9d
  unsigned int v156; // r9d
  unsigned int v157; // r9d
  unsigned int v158; // r9d
  unsigned int v159; // r9d
  unsigned int v160; // r9d
  unsigned int v161; // r9d
  unsigned int v162; // r9d
  unsigned int v163; // r9d
  unsigned int v164; // r9d
  unsigned int v165; // r9d
  unsigned int v166; // r9d
  unsigned int v167; // r9d
  unsigned int v168; // r9d
  unsigned int v169; // r9d
  unsigned int v170; // r9d
  unsigned int v171; // r9d
  unsigned int v172; // r9d
  unsigned int v173; // r9d
  unsigned int v174; // r9d
  unsigned int v175; // r9d
  unsigned int v176; // r9d
  unsigned int v177; // r9d
  unsigned int v178; // r9d
  unsigned int v179; // r9d
  unsigned int v180; // r9d
  unsigned int v181; // r9d
  unsigned int v182; // r9d
  unsigned int v183; // r9d
  unsigned int v184; // r9d
  unsigned int v185; // r9d
  unsigned int v186; // r9d
  unsigned int v187; // r9d
  unsigned int v188; // r9d
  unsigned int v189; // r9d
  unsigned int v190; // r9d
  unsigned int v191; // r9d
  unsigned int v192; // r9d
  unsigned int v193; // r9d
  unsigned int v194; // r9d
  unsigned int v195; // r9d
  unsigned int v196; // r9d
  unsigned int v197; // r9d
  unsigned int v198; // r9d
  unsigned int v199; // r9d
  unsigned int v200; // r9d
  unsigned int v201; // r9d
  unsigned int v202; // r9d
  unsigned int v203; // r9d
  unsigned int v204; // r9d
  unsigned int v205; // r9d
  unsigned int v206; // r9d
  unsigned int v207; // r9d
  unsigned int v208; // r9d
  unsigned int v209; // r9d
  unsigned int v210; // r9d
  unsigned int v211; // r9d
  unsigned int v212; // r9d
  unsigned int v213; // r9d
  unsigned int v214; // r9d
  unsigned int v215; // r9d
  unsigned int v216; // r9d
  unsigned int v217; // r9d
  unsigned int v218; // r9d
  unsigned int v219; // r9d
  unsigned int v220; // r9d
  unsigned int v221; // r9d
  unsigned int v222; // r9d
  unsigned int v223; // r9d
  unsigned int v224; // r9d
  unsigned int v225; // r9d
  unsigned int v226; // r9d
  unsigned int v227; // r9d
  unsigned int v228; // r9d
  unsigned int v229; // r9d
  unsigned int v230; // r9d
  unsigned int v231; // r9d
  unsigned int v232; // r9d
  unsigned int v233; // r9d
  unsigned int v234; // r9d
  unsigned int v235; // r9d
  unsigned int v236; // r9d
  bool v237; // zf
  float v238; // xmm0_4
  __m128i v239; // xmm0
  bool v240; // zf
  unsigned int v241; // eax
  __m128i v242; // xmm0
  double v243; // xmm0_8
  bool v244; // zf
  int v245; // eax
  int v246; // eax
  int v247; // eax
  unsigned int v248; // r9d
  unsigned __int64 v249; // rcx
  float v250; // xmm1_4
  bool v251; // zf
  unsigned int v252; // ecx
  int v253; // eax
  unsigned int v254; // r9d
  unsigned int v255; // r9d
  unsigned int v256; // r9d
  unsigned int v257; // r9d
  unsigned int v258; // r9d
  unsigned int v259; // r9d
  unsigned int v260; // r9d
  unsigned int v261; // r9d
  unsigned int v262; // r9d
  unsigned int v263; // r9d
  unsigned int v264; // r9d
  unsigned int v265; // r9d
  unsigned int v266; // r9d
  unsigned int v267; // r9d
  unsigned int v268; // r9d
  unsigned int v269; // r9d
  double v270; // xmm0_8
  unsigned int v271; // r9d
  unsigned int v272; // r9d
  unsigned int v273; // r9d
  unsigned int v274; // r9d
  unsigned int v275; // r9d
  unsigned int v276; // r9d
  unsigned int v277; // r9d
  unsigned int v278; // r9d
  unsigned int v279; // r9d
  unsigned int v280; // r9d
  unsigned int v281; // r9d
  unsigned int v282; // r9d
  unsigned int v283; // r9d
  unsigned int v284; // r9d
  unsigned int v285; // r9d
  unsigned int v286; // r9d
  unsigned int v287; // r9d
  unsigned int v288; // r9d
  unsigned int v289; // r9d
  unsigned int v290; // r9d
  unsigned int v291; // r9d
  unsigned int v292; // r9d
  unsigned int v293; // r9d
  unsigned int v294; // r9d
  unsigned int v295; // r9d
  unsigned int v296; // r9d
  unsigned int v297; // r9d
  unsigned int v298; // r9d
  unsigned int v299; // r9d
  unsigned int v300; // r9d
  unsigned int v301; // r9d
  unsigned int v302; // r9d
  unsigned int v303; // r9d
  unsigned int v304; // r9d
  unsigned int v305; // r9d
  unsigned int v306; // r9d
  float v307; // xmm1_4
  unsigned int v308; // r9d
  unsigned int v309; // r9d
  unsigned int v310; // r9d
  unsigned int v311; // r9d
  double v312; // xmm1_8
  double v313; // xmm0_8
  unsigned int v314; // r9d
  unsigned int v315; // r9d
  unsigned int v316; // r9d
  unsigned int v317; // r9d
  unsigned int v318; // r9d
  unsigned int v319; // r9d
  unsigned int v320; // r9d
  unsigned int v321; // r9d
  unsigned int v322; // r9d
  unsigned int v323; // r9d
  unsigned int v324; // r9d
  unsigned int v325; // r9d
  unsigned int v326; // r9d
  unsigned int v327; // r9d
  unsigned int v328; // r9d
  unsigned int v329; // r9d
  unsigned int v330; // r9d
  unsigned int v331; // r9d
  unsigned int v332; // r9d
  unsigned int v333; // r9d
  unsigned int v334; // r9d
  unsigned int v335; // r9d
  unsigned int v336; // r9d
  unsigned int v337; // r9d
  unsigned int v338; // r9d
  unsigned int v339; // r9d
  unsigned int v340; // r9d
  unsigned int v341; // r9d
  unsigned __int64 v342; // rcx
  unsigned __int64 v343; // rcx
  float v344; // xmm0_4
  unsigned __int64 v345; // rcx
  float v346; // xmm1_4
  unsigned __int64 v347; // rcx
  unsigned __int64 v348; // rcx
  unsigned int v349; // r9d
  unsigned int v350; // r9d
  unsigned int v351; // r9d
  unsigned int v352; // r9d
  unsigned __int64 v353; // rcx
  double v354; // xmm1_8
  unsigned __int64 v355; // rcx
  double v356; // xmm0_8
  unsigned __int64 v357; // rcx
  double v358; // xmm1_8
  unsigned __int64 v359; // rcx
  double v360; // xmm0_8
  unsigned __int64 v361; // rcx
  unsigned int v362; // r9d
  unsigned int v363; // r9d
  unsigned int v364; // r9d
  unsigned int v365; // r9d
  unsigned int v366; // ecx
  __m128i v367; // xmm1
  float v368; // xmm1_4
  bool v369; // cf
  float v370; // xmm0_4
  unsigned int v371; // ecx
  __m128i v372; // xmm1
  float v373; // xmm1_4
  bool v374; // cf
  bool v375; // zf
  float v376; // xmm0_4
  unsigned int v377; // r9d
  unsigned int v378; // r9d
  unsigned int v379; // r9d
  unsigned int v380; // r9d
  float v381; // xmm0_4
  unsigned int v382; // r9d
  unsigned int v383; // r9d
  unsigned int v384; // r9d
  unsigned int v385; // r9d
  float v386; // xmm0_4
  unsigned int v387; // r9d
  unsigned int v388; // r9d
  unsigned int v389; // r9d
  unsigned int v390; // r9d
  float v391; // xmm0_4
  unsigned int v392; // r9d
  unsigned int v393; // r9d
  unsigned int v394; // r9d
  unsigned int v395; // r9d
  float v396; // xmm0_4
  unsigned int v397; // r9d
  unsigned int v398; // r9d
  unsigned int v399; // r9d
  unsigned int v400; // r9d
  float v401; // xmm0_4
  unsigned int v402; // r9d
  unsigned int v403; // r9d
  unsigned int v404; // r9d
  unsigned int v405; // r9d
  unsigned __int64 v406; // rcx
  unsigned __int64 v407; // rcx
  unsigned __int64 v408; // rcx
  unsigned __int64 v409; // rcx
  unsigned int v410; // r9d
  unsigned int v411; // r9d
  unsigned int v412; // r9d
  unsigned int v413; // r9d
  unsigned int v414; // r9d
  unsigned int v415; // r9d
  unsigned int v416; // r9d
  unsigned int v417; // r9d
  double v418; // xmm1_8
  double v419; // xmm0_8
  unsigned int v420; // r9d
  unsigned int v421; // r9d
  unsigned int v422; // r9d
  unsigned int v423; // r9d
  unsigned int v424; // r9d
  unsigned int v425; // r9d
  unsigned int v426; // r9d
  unsigned int v427; // ecx
  __m128i v428; // xmm0
  double v429; // xmm0_8
  unsigned int v430; // ecx
  __m128i v431; // xmm1
  double v432; // xmm1_8
  double v433; // xmm0_8
  unsigned int v434; // ecx
  __m128i v435; // xmm1
  double v436; // xmm1_8
  unsigned int v437; // ecx
  __m128i v438; // xmm1
  double v439; // xmm1_8
  unsigned int v440; // r9d
  unsigned int v441; // r9d
  unsigned int v442; // r9d
  unsigned int v443; // r9d
  double v444; // xmm0_8
  unsigned int v445; // r9d
  unsigned int v446; // r9d
  unsigned int v447; // r9d
  unsigned int v448; // r9d
  double v449; // xmm0_8
  unsigned int v450; // r9d
  unsigned int v451; // r9d
  unsigned int v452; // r9d
  unsigned int v453; // r9d
  double v454; // xmm0_8
  unsigned int v455; // r9d
  unsigned int v456; // r9d
  unsigned int v457; // r9d
  unsigned int v458; // r9d
  double v459; // xmm0_8
  unsigned int v460; // r9d
  unsigned int v461; // r9d
  unsigned int v462; // r9d
  unsigned int v463; // r9d
  double v464; // xmm0_8
  unsigned int v465; // r9d
  unsigned int v466; // r9d
  unsigned int v467; // r9d
  unsigned int v468; // r9d
  double v469; // xmm0_8
  unsigned int v470; // r9d
  unsigned int v471; // r9d
  unsigned int v472; // r9d
  unsigned int v473; // r9d
  unsigned __int64 v474; // rcx
  double v475; // xmm0_8
  unsigned __int64 v476; // rcx
  unsigned __int64 v477; // rcx
  double v478; // xmm0_8
  unsigned __int64 v479; // rcx
  unsigned __int64 v480; // rcx
  unsigned int v481; // r9d
  unsigned int v482; // r9d
  unsigned int v483; // r9d
  unsigned int v484; // r9d
  double v485; // xmm0_8
  unsigned int v486; // r9d
  unsigned int v487; // r9d
  unsigned int v488; // r9d
  unsigned int v489; // r9d
  unsigned int v490; // r9d
  unsigned int v491; // r9d
  unsigned int v492; // r9d
  unsigned int v493; // r9d
  unsigned int v494; // r9d
  unsigned int v495; // r9d
  unsigned int v496; // r9d
  unsigned int v497; // r9d
  unsigned int v498; // r9d
  unsigned int v499; // r9d
  unsigned int v500; // r9d
  unsigned int v501; // r9d
  unsigned int v502; // r9d
  unsigned int v503; // r9d
  unsigned int v504; // r9d
  unsigned int v505; // r9d
  unsigned int v506; // r9d
  unsigned int v507; // r9d
  unsigned int v508; // r9d
  unsigned int v509; // r9d
  unsigned int v510; // r9d
  unsigned int v511; // r9d
  unsigned int v512; // r9d
  unsigned int v513; // r9d
  unsigned int v514; // r9d
  unsigned int v515; // r9d
  unsigned int v516; // r9d
  unsigned int v517; // r9d
  unsigned int v518; // r9d
  unsigned int v519; // r9d
  unsigned int v520; // r9d
  unsigned int v521; // r9d
  unsigned int v522; // r9d
  unsigned int v523; // r9d
  unsigned int v524; // r9d
  unsigned int v525; // r9d
  unsigned int v526; // r9d
  unsigned int v527; // r9d
  unsigned int v528; // r9d
  unsigned int v529; // r9d
  unsigned int v530; // r9d
  unsigned int v531; // r9d
  unsigned int v532; // r9d
  unsigned int v533; // r9d
  unsigned int v534; // r9d
  unsigned int v535; // r9d
  unsigned int v536; // r9d
  unsigned int v537; // r9d
  unsigned int v538; // r9d
  unsigned int v539; // r9d
  unsigned int v540; // r9d
  unsigned int v541; // r9d
  unsigned int v542; // r9d
  unsigned int v543; // r9d
  unsigned int v544; // r9d
  unsigned int v545; // r9d
  unsigned int v546; // r9d
  unsigned int v547; // r9d
  unsigned __int64 v548; // rcx
  unsigned int v549; // r9d
  unsigned int v550; // r9d
  unsigned int v551; // r9d
  unsigned int v552; // r9d
  unsigned int v553; // r9d
  unsigned int v554; // r9d
  unsigned int v555; // r9d
  unsigned int v556; // r9d
  __int64 v557; // rcx
  bool v558; // zf

  v8 = a3;
  v10 = 0;
  v11 = 0;
  v12 = a4 & 0x10000;
  v13 = a4 & 0x20000;
  v14 = a4 & 0xF000FFFF;
  *a8 = 0;
  if ( v13 && a1 != 8210 && a1 != 18 && a1 != 25 )
  {
    v11 = -1073741637;
    goto LABEL_1273;
  }
  if ( v14 == 1 )
  {
    *a8 = a1 != 0;
    goto LABEL_1273;
  }
  if ( a1 && a5 )
  {
    if ( a1 == 13 )
    {
      if ( a5 == 13 && v14 == 2 )
      {
        if ( *(_DWORD *)a2 == *Buf2
          && *((_DWORD *)a2 + 1) == Buf2[1]
          && *((_DWORD *)a2 + 2) == Buf2[2]
          && *((_DWORD *)a2 + 3) == Buf2[3] )
        {
          v15 = 1;
          goto LABEL_10;
        }
LABEL_9:
        v15 = 0;
LABEL_10:
        *a8 = v15;
        goto LABEL_1273;
      }
LABEL_22:
      v11 = -1073741637;
      goto LABEL_1273;
    }
    if ( a1 > 0x1003 )
    {
      if ( a1 == 4109 )
      {
        if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
          goto LABEL_22;
        if ( v14 != 2 )
        {
          if ( v14 == 0x10000000 )
          {
            v15 = ArrayContains((__int64)a2, v8, (__int64)Buf2, a7);
            goto LABEL_10;
          }
          goto LABEL_22;
        }
        goto LABEL_341;
      }
      if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
        goto LABEL_22;
      if ( v14 == 4096 )
      {
        *a8 = StringListContains((wchar_t *)a2);
        goto LABEL_1273;
      }
      if ( v14 != 2 )
      {
        if ( v14 == 0x4000 || v14 == 0x2000 || v14 == 12288 )
        {
          v15 = StringListElementSubstringMatch((_DWORD)a2, a5, (_DWORD)Buf2, v13, v14);
          goto LABEL_10;
        }
        goto LABEL_22;
      }
      v237 = v13 == 0;
    }
    else
    {
      if ( a1 != 4099 )
      {
        switch ( a1 )
        {
          case 1u:
            if ( a5 != 1 || v14 != 2 )
              goto LABEL_22;
            if ( a2 || Buf2 )
              goto LABEL_9;
            v15 = 1;
            goto LABEL_10;
          case 2u:
            switch ( a5 )
            {
              case 2:
                if ( v14 == 6 )
                {
                  *a8 = *a2 <= *(_BYTE *)Buf2;
                  goto LABEL_1273;
                }
                v116 = v14 - 2;
                if ( !v116 )
                  goto LABEL_315;
                v117 = v116 - 1;
                if ( !v117 )
                {
                  *a8 = *a2 > *(_BYTE *)Buf2;
                  goto LABEL_1273;
                }
                v118 = v117 - 1;
                if ( !v118 )
                {
                  *a8 = *a2 < *(_BYTE *)Buf2;
                  goto LABEL_1273;
                }
                if ( v118 == 1 )
                {
                  *a8 = *a2 >= *(_BYTE *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 3:
                v59 = v14 - 2;
                if ( v59 )
                {
                  v60 = v59 - 1;
                  if ( v60 )
                  {
                    v61 = v60 - 1;
                    if ( v61 )
                    {
                      v62 = v61 - 1;
                      if ( v62 )
                      {
                        if ( v62 != 1 )
                          goto LABEL_22;
                        *a8 = *a2 <= (int)*(unsigned __int8 *)Buf2;
                      }
                      else
                      {
                        *a8 = *a2 >= (int)*(unsigned __int8 *)Buf2;
                      }
                    }
                    else
                    {
                      *a8 = *a2 < (int)*(unsigned __int8 *)Buf2;
                    }
                  }
                  else
                  {
                    *a8 = *a2 > (int)*(unsigned __int8 *)Buf2;
                  }
                }
                else
                {
                  *a8 = *a2 == *(unsigned __int8 *)Buf2;
                }
                goto LABEL_1273;
              case 4:
                v69 = v14 - 2;
                if ( !v69 )
                {
                  *a8 = *a2 == *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v70 = v69 - 1;
                if ( !v70 )
                {
                  *a8 = *a2 > *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v71 = v70 - 1;
                if ( !v71 )
                {
                  *a8 = *a2 < *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v72 = v71 - 1;
                if ( !v72 )
                {
                  *a8 = *a2 >= *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v72 == 1 )
                {
                  *a8 = *a2 <= *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 5:
                v42 = v14 - 2;
                if ( !v42 )
                {
                  v105 = *a2;
                  goto LABEL_159;
                }
                v43 = v42 - 1;
                if ( v43 )
                {
                  v44 = v43 - 1;
                  if ( v44 )
                  {
                    v45 = v44 - 1;
                    if ( v45 )
                    {
                      if ( v45 != 1 )
                        goto LABEL_22;
                      *a8 = *a2 <= (int)*(unsigned __int16 *)Buf2;
                    }
                    else
                    {
                      *a8 = *a2 >= (int)*(unsigned __int16 *)Buf2;
                    }
                  }
                  else
                  {
                    *a8 = *a2 < (int)*(unsigned __int16 *)Buf2;
                  }
                }
                else
                {
                  *a8 = *a2 > (int)*(unsigned __int16 *)Buf2;
                }
                goto LABEL_1273;
              case 6:
                v126 = v14 - 2;
                if ( !v126 )
                  goto LABEL_616;
                v127 = v126 - 1;
                if ( !v127 )
                {
                  *a8 = *a2 > (int)*Buf2;
                  goto LABEL_1273;
                }
                v128 = v127 - 1;
                if ( !v128 )
                {
                  *a8 = *a2 < (int)*Buf2;
                  goto LABEL_1273;
                }
                v129 = v128 - 1;
                if ( !v129 )
                {
                  *a8 = *a2 >= (int)*Buf2;
                  goto LABEL_1273;
                }
                if ( v129 == 1 )
                {
                  *a8 = *a2 <= (int)*Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 7:
                v130 = v14 - 2;
                if ( !v130 )
                {
LABEL_616:
                  *a8 = *a2 == *Buf2;
                  goto LABEL_1273;
                }
                v131 = v130 - 1;
                if ( !v131 )
                {
                  *a8 = *a2 > *Buf2;
                  goto LABEL_1273;
                }
                v132 = v131 - 1;
                if ( !v132 )
                {
                  *a8 = *a2 < *Buf2;
                  goto LABEL_1273;
                }
                v133 = v132 - 1;
                if ( !v133 )
                {
                  *a8 = *a2 >= *Buf2;
                  goto LABEL_1273;
                }
                if ( v133 == 1 )
                {
                  *a8 = *a2 <= *Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 8:
              case 14:
                v134 = v14 - 2;
                if ( !v134 )
                  goto LABEL_617;
                v135 = v134 - 1;
                if ( !v135 )
                {
                  *a8 = *a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v136 = v135 - 1;
                if ( !v136 )
                {
                  *a8 = *a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v137 = v136 - 1;
                if ( !v137 )
                {
                  *a8 = *a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v137 == 1 )
                {
                  *a8 = *a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 9:
                v138 = v14 - 2;
                if ( !v138 )
                {
LABEL_617:
                  *a8 = *a2 == *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v139 = v138 - 1;
                if ( !v139 )
                {
                  *a8 = (unsigned __int64)*a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v140 = v139 - 1;
                if ( !v140 )
                {
                  *a8 = (unsigned __int64)*a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v141 = v140 - 1;
                if ( !v141 )
                {
                  *a8 = (unsigned __int64)*a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v141 == 1 )
                {
                  *a8 = (unsigned __int64)*a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 10:
                v16 = v14 - 2;
                if ( v16 )
                {
                  v17 = v16 - 1;
                  if ( !v17 )
                  {
                    v50 = _mm_cvtsi32_si128(*a2);
                    goto LABEL_89;
                  }
                  v18 = v17 - 1;
                  if ( !v18 )
                  {
                    v68 = *a2;
                    goto LABEL_112;
                  }
                  v19 = v18 - 1;
                  if ( v19 )
                  {
                    if ( v19 != 1 )
                      goto LABEL_22;
                    *a8 = *(float *)Buf2 >= (float)*a2;
                  }
                  else
                  {
                    *a8 = (float)*a2 >= *(float *)Buf2;
                  }
                }
                else
                {
                  v15 = 1;
                  if ( (float)*a2 == *(float *)Buf2 )
                    goto LABEL_10;
                  *a8 = 0;
                }
                goto LABEL_1273;
              case 11:
              case 15:
                v73 = v14 - 2;
                if ( !v73 )
                {
                  v241 = *a2;
                  goto LABEL_363;
                }
                v74 = v73 - 1;
                if ( !v74 )
                {
                  *a8 = (double)*a2 > *(double *)Buf2;
                  goto LABEL_1273;
                }
                v75 = v74 - 1;
                if ( !v75 )
                {
                  *a8 = *(double *)Buf2 > (double)*a2;
                  goto LABEL_1273;
                }
                v76 = v75 - 1;
                if ( !v76 )
                {
                  *a8 = (double)*a2 >= *(double *)Buf2;
                  goto LABEL_1273;
                }
                if ( v76 == 1 )
                {
                  *a8 = *(double *)Buf2 >= (double)*a2;
                  goto LABEL_1273;
                }
                break;
              default:
                goto LABEL_22;
            }
            goto LABEL_22;
          case 3u:
            switch ( a5 )
            {
              case 2:
                v20 = v14 - 2;
                if ( v20 )
                {
                  v21 = v20 - 1;
                  if ( v21 )
                  {
                    v22 = v21 - 1;
                    if ( v22 )
                    {
                      v23 = v22 - 1;
                      if ( v23 )
                      {
                        if ( v23 != 1 )
                          goto LABEL_22;
                        *a8 = (unsigned __int8)*a2 <= *(char *)Buf2;
                      }
                      else
                      {
                        *a8 = (unsigned __int8)*a2 >= *(char *)Buf2;
                      }
                    }
                    else
                    {
                      *a8 = (unsigned __int8)*a2 < *(char *)Buf2;
                    }
                  }
                  else
                  {
                    *a8 = (unsigned __int8)*a2 > *(char *)Buf2;
                  }
                }
                else
                {
                  *a8 = (unsigned __int8)*a2 == *(char *)Buf2;
                }
                goto LABEL_1273;
              case 3:
                if ( v14 == 6 )
                {
                  *a8 = (unsigned __int8)*a2 <= *(_BYTE *)Buf2;
                  goto LABEL_1273;
                }
                v119 = v14 - 2;
                if ( !v119 )
                  goto LABEL_315;
                v120 = v119 - 1;
                if ( !v120 )
                {
                  *a8 = (unsigned __int8)*a2 > *(_BYTE *)Buf2;
                  goto LABEL_1273;
                }
                v121 = v120 - 1;
                if ( !v121 )
                {
                  *a8 = (unsigned __int8)*a2 < *(_BYTE *)Buf2;
                  goto LABEL_1273;
                }
                if ( v121 == 1 )
                {
                  *a8 = (unsigned __int8)*a2 >= *(_BYTE *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 4:
                v77 = v14 - 2;
                if ( !v77 )
                {
                  *a8 = (unsigned __int16)(unsigned __int8)*a2 == *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v78 = v77 - 1;
                if ( !v78 )
                {
                  *a8 = (unsigned __int8)*a2 > *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v79 = v78 - 1;
                if ( !v79 )
                {
                  *a8 = (unsigned __int8)*a2 < *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v80 = v79 - 1;
                if ( !v80 )
                {
                  *a8 = (unsigned __int8)*a2 >= *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v80 == 1 )
                {
                  *a8 = (unsigned __int8)*a2 <= *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 5:
                v81 = v14 - 2;
                if ( !v81 )
                {
                  *a8 = (unsigned __int16)(unsigned __int8)*a2 == *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v82 = v81 - 1;
                if ( !v82 )
                {
                  *a8 = (unsigned __int8)*a2 > (unsigned int)*(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v83 = v82 - 1;
                if ( !v83 )
                {
                  *a8 = (unsigned __int8)*a2 < (unsigned int)*(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v84 = v83 - 1;
                if ( !v84 )
                {
                  *a8 = (unsigned __int8)*a2 >= (unsigned int)*(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v84 == 1 )
                {
                  *a8 = (unsigned __int8)*a2 <= (unsigned int)*(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 6:
                v142 = v14 - 2;
                if ( !v142 )
                  goto LABEL_618;
                v143 = v142 - 1;
                if ( !v143 )
                {
                  *a8 = (unsigned __int8)*a2 > (int)*Buf2;
                  goto LABEL_1273;
                }
                v144 = v143 - 1;
                if ( !v144 )
                {
                  *a8 = (unsigned __int8)*a2 < (int)*Buf2;
                  goto LABEL_1273;
                }
                v145 = v144 - 1;
                if ( !v145 )
                {
                  *a8 = (unsigned __int8)*a2 >= (int)*Buf2;
                  goto LABEL_1273;
                }
                if ( v145 == 1 )
                {
                  *a8 = (unsigned __int8)*a2 <= (int)*Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 7:
                v146 = v14 - 2;
                if ( !v146 )
                {
LABEL_618:
                  *a8 = (unsigned __int8)*a2 == *Buf2;
                  goto LABEL_1273;
                }
                v147 = v146 - 1;
                if ( !v147 )
                {
                  *a8 = (unsigned __int8)*a2 > *Buf2;
                  goto LABEL_1273;
                }
                v148 = v147 - 1;
                if ( !v148 )
                {
                  *a8 = (unsigned __int8)*a2 < *Buf2;
                  goto LABEL_1273;
                }
                v149 = v148 - 1;
                if ( !v149 )
                {
                  *a8 = (unsigned __int8)*a2 >= *Buf2;
                  goto LABEL_1273;
                }
                if ( v149 == 1 )
                {
                  *a8 = (unsigned __int8)*a2 <= *Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 8:
              case 14:
                v150 = v14 - 2;
                if ( !v150 )
                  goto LABEL_619;
                v151 = v150 - 1;
                if ( !v151 )
                {
                  *a8 = (__int64)(unsigned __int8)*a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v152 = v151 - 1;
                if ( !v152 )
                {
                  *a8 = (__int64)(unsigned __int8)*a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v153 = v152 - 1;
                if ( !v153 )
                {
                  *a8 = (__int64)(unsigned __int8)*a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v153 == 1 )
                {
                  *a8 = (__int64)(unsigned __int8)*a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 9:
                v154 = v14 - 2;
                if ( !v154 )
                {
LABEL_619:
                  *a8 = (unsigned __int8)*a2 == *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v155 = v154 - 1;
                if ( !v155 )
                {
                  *a8 = (unsigned __int64)(unsigned __int8)*a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v156 = v155 - 1;
                if ( !v156 )
                {
                  *a8 = (unsigned __int64)(unsigned __int8)*a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v157 = v156 - 1;
                if ( !v157 )
                {
                  *a8 = (unsigned __int64)(unsigned __int8)*a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v157 == 1 )
                {
                  *a8 = (unsigned __int64)(unsigned __int8)*a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 10:
                v55 = v14 - 2;
                if ( !v55 )
                {
                  v15 = 1;
                  if ( (float)(unsigned __int8)*a2 == *(float *)Buf2 )
                    goto LABEL_10;
                  *a8 = 0;
                  goto LABEL_1273;
                }
                v56 = v55 - 1;
                if ( !v56 )
                {
                  *a8 = (float)(unsigned __int8)*a2 > *(float *)Buf2;
                  goto LABEL_1273;
                }
                v57 = v56 - 1;
                if ( !v57 )
                {
                  v68 = (unsigned __int8)*a2;
                  goto LABEL_112;
                }
                v58 = v57 - 1;
                if ( !v58 )
                {
                  *a8 = (float)(unsigned __int8)*a2 >= *(float *)Buf2;
                  goto LABEL_1273;
                }
                if ( v58 == 1 )
                {
                  v67 = (unsigned __int8)*a2;
                  goto LABEL_110;
                }
                goto LABEL_22;
              case 11:
              case 15:
                v85 = v14 - 2;
                if ( !v85 )
                {
                  v241 = (unsigned __int8)*a2;
                  goto LABEL_363;
                }
                v86 = v85 - 1;
                if ( !v86 )
                {
                  v246 = (unsigned __int8)*a2;
                  goto LABEL_371;
                }
                v87 = v86 - 1;
                if ( !v87 )
                {
                  v245 = (unsigned __int8)*a2;
                  goto LABEL_369;
                }
                v88 = v87 - 1;
                if ( !v88 )
                {
                  *a8 = (double)(unsigned __int8)*a2 >= *(double *)Buf2;
                  goto LABEL_1273;
                }
                if ( v88 == 1 )
                {
                  *a8 = *(double *)Buf2 >= (double)(unsigned __int8)*a2;
                  goto LABEL_1273;
                }
                break;
              default:
                goto LABEL_22;
            }
            goto LABEL_22;
          case 4u:
            switch ( a5 )
            {
              case 2:
                v89 = v14 - 2;
                if ( !v89 )
                {
                  *a8 = *(_WORD *)a2 == (unsigned __int16)*(char *)Buf2;
                  goto LABEL_1273;
                }
                v90 = v89 - 1;
                if ( !v90 )
                {
                  *a8 = *(_WORD *)a2 > (unsigned __int16)*(char *)Buf2;
                  goto LABEL_1273;
                }
                v91 = v90 - 1;
                if ( !v91 )
                {
                  *a8 = *(_WORD *)a2 < (unsigned __int16)*(char *)Buf2;
                  goto LABEL_1273;
                }
                v92 = v91 - 1;
                if ( !v92 )
                {
                  *a8 = *(_WORD *)a2 >= (unsigned __int16)*(char *)Buf2;
                  goto LABEL_1273;
                }
                if ( v92 == 1 )
                {
                  *a8 = *(_WORD *)a2 <= (unsigned __int16)*(char *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 3:
                v158 = v14 - 2;
                if ( !v158 )
                {
                  *a8 = *(_WORD *)a2 == (unsigned __int16)*(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                v159 = v158 - 1;
                if ( !v159 )
                {
                  *a8 = *(_WORD *)a2 > *(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                v160 = v159 - 1;
                if ( !v160 )
                {
                  *a8 = *(_WORD *)a2 < *(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                v161 = v160 - 1;
                if ( !v161 )
                {
                  *a8 = *(_WORD *)a2 >= *(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                if ( v161 == 1 )
                {
                  *a8 = *(_WORD *)a2 <= *(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 4:
                v162 = v14 - 2;
                if ( !v162 )
                  goto LABEL_621;
                v163 = v162 - 1;
                if ( !v163 )
                {
                  *a8 = *(_WORD *)a2 > *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v164 = v163 - 1;
                if ( !v164 )
                {
                  *a8 = *(_WORD *)a2 < *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                v165 = v164 - 1;
                if ( !v165 )
                {
                  *a8 = *(_WORD *)a2 >= *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v165 == 1 )
                {
                  *a8 = *(_WORD *)a2 <= *(_WORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 5:
                v93 = v14 - 2;
                if ( !v93 )
                {
                  v105 = *(__int16 *)a2;
LABEL_159:
                  v106 = v105 == *(unsigned __int16 *)Buf2;
                  goto LABEL_160;
                }
                v94 = v93 - 1;
                if ( !v94 )
                {
                  *a8 = *(__int16 *)a2 > (int)*(unsigned __int16 *)Buf2;
                  goto LABEL_1273;
                }
                v95 = v94 - 1;
                if ( !v95 )
                {
                  *a8 = *(__int16 *)a2 < (int)*(unsigned __int16 *)Buf2;
                  goto LABEL_1273;
                }
                v96 = v95 - 1;
                if ( !v96 )
                {
                  *a8 = *(__int16 *)a2 >= (int)*(unsigned __int16 *)Buf2;
                  goto LABEL_1273;
                }
                if ( v96 == 1 )
                {
                  *a8 = *(__int16 *)a2 <= (int)*(unsigned __int16 *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 6:
                if ( v14 == 6 )
                {
                  *a8 = *(__int16 *)a2 <= (int)*Buf2;
                  goto LABEL_1273;
                }
                v113 = v14 - 2;
                if ( !v113 )
                {
LABEL_622:
                  *a8 = *(__int16 *)a2 == *Buf2;
                  goto LABEL_1273;
                }
                v114 = v113 - 1;
                if ( !v114 )
                {
                  *a8 = *(__int16 *)a2 > (int)*Buf2;
                  goto LABEL_1273;
                }
                v115 = v114 - 1;
                if ( !v115 )
                {
                  *a8 = *(__int16 *)a2 < (int)*Buf2;
                  goto LABEL_1273;
                }
                if ( v115 == 1 )
                {
                  *a8 = *(__int16 *)a2 >= (int)*Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 7:
                v166 = v14 - 2;
                if ( !v166 )
                  goto LABEL_622;
                v167 = v166 - 1;
                if ( !v167 )
                {
                  *a8 = *(__int16 *)a2 > *Buf2;
                  goto LABEL_1273;
                }
                v168 = v167 - 1;
                if ( !v168 )
                {
                  *a8 = *(__int16 *)a2 < *Buf2;
                  goto LABEL_1273;
                }
                v169 = v168 - 1;
                if ( !v169 )
                {
                  *a8 = *(__int16 *)a2 >= *Buf2;
                  goto LABEL_1273;
                }
                if ( v169 == 1 )
                {
                  *a8 = *(__int16 *)a2 <= *Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 8:
              case 14:
                v170 = v14 - 2;
                if ( !v170 )
                  goto LABEL_623;
                v171 = v170 - 1;
                if ( !v171 )
                {
                  *a8 = *(__int16 *)a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v172 = v171 - 1;
                if ( !v172 )
                {
                  *a8 = *(__int16 *)a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v173 = v172 - 1;
                if ( !v173 )
                {
                  *a8 = *(__int16 *)a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v173 == 1 )
                {
                  *a8 = *(__int16 *)a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 9:
                v174 = v14 - 2;
                if ( !v174 )
                {
LABEL_623:
                  *a8 = *(__int16 *)a2 == *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v175 = v174 - 1;
                if ( !v175 )
                {
                  *a8 = (unsigned __int64)*(__int16 *)a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v176 = v175 - 1;
                if ( !v176 )
                {
                  *a8 = (unsigned __int64)*(__int16 *)a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v177 = v176 - 1;
                if ( !v177 )
                {
                  *a8 = (unsigned __int64)*(__int16 *)a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v177 == 1 )
                {
                  *a8 = (unsigned __int64)*(__int16 *)a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 10:
                v63 = v14 - 2;
                if ( !v63 )
                {
                  v239 = _mm_cvtsi32_si128(*(__int16 *)a2);
                  goto LABEL_357;
                }
                v64 = v63 - 1;
                if ( !v64 )
                {
                  v247 = *(__int16 *)a2;
                  goto LABEL_373;
                }
                v65 = v64 - 1;
                if ( !v65 )
                {
                  v68 = *(__int16 *)a2;
                  goto LABEL_112;
                }
                v66 = v65 - 1;
                if ( !v66 )
                {
                  *a8 = (float)*(__int16 *)a2 >= *(float *)Buf2;
                  goto LABEL_1273;
                }
                if ( v66 != 1 )
                  goto LABEL_22;
                v67 = *(__int16 *)a2;
                goto LABEL_110;
              case 11:
              case 15:
                v24 = v14 - 2;
                if ( !v24 )
                {
                  v241 = *(__int16 *)a2;
                  goto LABEL_363;
                }
                v25 = v24 - 1;
                if ( !v25 )
                {
                  v246 = *(__int16 *)a2;
                  goto LABEL_371;
                }
                v26 = v25 - 1;
                if ( !v26 )
                {
                  v245 = *(__int16 *)a2;
                  goto LABEL_369;
                }
                v27 = v26 - 1;
                if ( !v27 )
                {
                  v112 = *(__int16 *)a2;
                  goto LABEL_167;
                }
                if ( v27 != 1 )
                  goto LABEL_22;
                v28 = *(__int16 *)a2;
                break;
              default:
                goto LABEL_22;
            }
            goto LABEL_53;
          case 5u:
            switch ( a5 )
            {
              case 2:
                v97 = v14 - 2;
                if ( !v97 )
                {
                  *a8 = *(unsigned __int16 *)a2 == *(char *)Buf2;
                  goto LABEL_1273;
                }
                v98 = v97 - 1;
                if ( !v98 )
                {
                  *a8 = *(unsigned __int16 *)a2 > *(char *)Buf2;
                  goto LABEL_1273;
                }
                v99 = v98 - 1;
                if ( !v99 )
                {
                  *a8 = *(unsigned __int16 *)a2 < *(char *)Buf2;
                  goto LABEL_1273;
                }
                v100 = v99 - 1;
                if ( !v100 )
                {
                  *a8 = *(unsigned __int16 *)a2 >= *(char *)Buf2;
                  goto LABEL_1273;
                }
                if ( v100 == 1 )
                {
                  *a8 = *(unsigned __int16 *)a2 <= *(char *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 3:
                v178 = v14 - 2;
                if ( !v178 )
                {
                  v106 = *(_WORD *)a2 == (unsigned __int16)*(unsigned __int8 *)Buf2;
                  goto LABEL_160;
                }
                v179 = v178 - 1;
                if ( !v179 )
                {
                  *a8 = (unsigned int)*(_WORD *)a2 > *(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                v180 = v179 - 1;
                if ( !v180 )
                {
                  *a8 = (unsigned int)*(_WORD *)a2 < *(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                v181 = v180 - 1;
                if ( !v181 )
                {
                  *a8 = (unsigned int)*(_WORD *)a2 >= *(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                if ( v181 == 1 )
                {
                  *a8 = (unsigned int)*(_WORD *)a2 <= *(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 4:
                v101 = v14 - 2;
                if ( !v101 )
                {
                  *a8 = *(unsigned __int16 *)a2 == *(__int16 *)Buf2;
                  goto LABEL_1273;
                }
                v102 = v101 - 1;
                if ( !v102 )
                {
                  *a8 = *(unsigned __int16 *)a2 > *(__int16 *)Buf2;
                  goto LABEL_1273;
                }
                v103 = v102 - 1;
                if ( !v103 )
                {
                  *a8 = *(unsigned __int16 *)a2 < *(__int16 *)Buf2;
                  goto LABEL_1273;
                }
                v104 = v103 - 1;
                if ( !v104 )
                {
                  *a8 = *(unsigned __int16 *)a2 >= *(__int16 *)Buf2;
                  goto LABEL_1273;
                }
                if ( v104 == 1 )
                {
                  *a8 = *(unsigned __int16 *)a2 <= *(__int16 *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 5:
                v122 = v14 - 2;
                if ( v122 )
                {
                  v123 = v122 - 1;
                  if ( v123 )
                  {
                    v124 = v123 - 1;
                    if ( v124 )
                    {
                      v125 = v124 - 1;
                      if ( v125 )
                      {
                        if ( v125 != 1 )
                          goto LABEL_22;
                        *a8 = *(_WORD *)a2 <= *(_WORD *)Buf2;
                      }
                      else
                      {
                        *a8 = *(_WORD *)a2 >= *(_WORD *)Buf2;
                      }
                    }
                    else
                    {
                      *a8 = *(_WORD *)a2 < *(_WORD *)Buf2;
                    }
                  }
                  else
                  {
                    *a8 = *(_WORD *)a2 > *(_WORD *)Buf2;
                  }
                }
                else
                {
LABEL_621:
                  *a8 = *(_WORD *)a2 == *(_WORD *)Buf2;
                }
                goto LABEL_1273;
              case 6:
                v182 = v14 - 2;
                if ( !v182 )
                  goto LABEL_625;
                v183 = v182 - 1;
                if ( !v183 )
                {
                  *a8 = *(unsigned __int16 *)a2 > (int)*Buf2;
                  goto LABEL_1273;
                }
                v184 = v183 - 1;
                if ( !v184 )
                {
                  *a8 = *(unsigned __int16 *)a2 < (int)*Buf2;
                  goto LABEL_1273;
                }
                v185 = v184 - 1;
                if ( !v185 )
                {
                  *a8 = *(unsigned __int16 *)a2 >= (int)*Buf2;
                  goto LABEL_1273;
                }
                if ( v185 == 1 )
                {
                  *a8 = *(unsigned __int16 *)a2 <= (int)*Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 7:
                v186 = v14 - 2;
                if ( !v186 )
                {
LABEL_625:
                  *a8 = *(unsigned __int16 *)a2 == *Buf2;
                  goto LABEL_1273;
                }
                v187 = v186 - 1;
                if ( !v187 )
                {
                  *a8 = *(unsigned __int16 *)a2 > *Buf2;
                  goto LABEL_1273;
                }
                v188 = v187 - 1;
                if ( !v188 )
                {
                  *a8 = *(unsigned __int16 *)a2 < *Buf2;
                  goto LABEL_1273;
                }
                v189 = v188 - 1;
                if ( !v189 )
                {
                  *a8 = *(unsigned __int16 *)a2 >= *Buf2;
                  goto LABEL_1273;
                }
                if ( v189 == 1 )
                {
                  *a8 = *(unsigned __int16 *)a2 <= *Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 8:
              case 14:
                v190 = v14 - 2;
                if ( !v190 )
                  goto LABEL_626;
                v191 = v190 - 1;
                if ( !v191 )
                {
                  *a8 = (__int64)*(unsigned __int16 *)a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v192 = v191 - 1;
                if ( !v192 )
                {
                  *a8 = (__int64)*(unsigned __int16 *)a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v193 = v192 - 1;
                if ( !v193 )
                {
                  *a8 = (__int64)*(unsigned __int16 *)a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v193 == 1 )
                {
                  *a8 = (__int64)*(unsigned __int16 *)a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 9:
                v194 = v14 - 2;
                if ( !v194 )
                {
LABEL_626:
                  *a8 = *(unsigned __int16 *)a2 == *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v195 = v194 - 1;
                if ( !v195 )
                {
                  *a8 = (unsigned __int64)*(unsigned __int16 *)a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v196 = v195 - 1;
                if ( !v196 )
                {
                  *a8 = (unsigned __int64)*(unsigned __int16 *)a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v197 = v196 - 1;
                if ( !v197 )
                {
                  *a8 = (unsigned __int64)*(unsigned __int16 *)a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v197 == 1 )
                {
                  *a8 = (unsigned __int64)*(unsigned __int16 *)a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 10:
                v29 = v14 - 2;
                if ( !v29 )
                {
                  v15 = 1;
                  if ( (float)*(unsigned __int16 *)a2 == *(float *)Buf2 )
                    goto LABEL_10;
                  *a8 = 0;
                  goto LABEL_1273;
                }
                v30 = v29 - 1;
                if ( !v30 )
                {
                  v247 = *(unsigned __int16 *)a2;
LABEL_373:
                  *a8 = (float)v247 > *(float *)Buf2;
                  goto LABEL_1273;
                }
                v31 = v30 - 1;
                if ( !v31 )
                {
                  v68 = *(unsigned __int16 *)a2;
LABEL_112:
                  *a8 = *(float *)Buf2 > (float)v68;
                  goto LABEL_1273;
                }
                v32 = v31 - 1;
                if ( !v32 )
                {
                  *a8 = (float)*(unsigned __int16 *)a2 >= *(float *)Buf2;
                  goto LABEL_1273;
                }
                if ( v32 == 1 )
                {
                  v67 = *(unsigned __int16 *)a2;
LABEL_110:
                  *a8 = *(float *)Buf2 >= (float)v67;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 11:
              case 15:
                v108 = v14 - 2;
                if ( !v108 )
                {
                  v241 = *(unsigned __int16 *)a2;
LABEL_363:
                  v242 = _mm_cvtsi32_si128(v241);
                  goto LABEL_364;
                }
                v109 = v108 - 1;
                if ( !v109 )
                {
                  v246 = *(unsigned __int16 *)a2;
LABEL_371:
                  *a8 = (double)v246 > *(double *)Buf2;
                  goto LABEL_1273;
                }
                v110 = v109 - 1;
                if ( !v110 )
                {
                  v245 = *(unsigned __int16 *)a2;
LABEL_369:
                  *a8 = *(double *)Buf2 > (double)v245;
                  goto LABEL_1273;
                }
                v111 = v110 - 1;
                if ( !v111 )
                {
                  v112 = *(unsigned __int16 *)a2;
LABEL_167:
                  *a8 = (double)v112 >= *(double *)Buf2;
                  goto LABEL_1273;
                }
                if ( v111 != 1 )
                  goto LABEL_22;
                v28 = *(unsigned __int16 *)a2;
                break;
              default:
                goto LABEL_22;
            }
LABEL_53:
            *a8 = *(double *)Buf2 >= (double)v28;
            goto LABEL_1273;
          case 6u:
            switch ( a5 )
            {
              case 2:
                v198 = v14 - 2;
                if ( !v198 )
                  goto LABEL_627;
                v199 = v198 - 1;
                if ( !v199 )
                {
                  *a8 = *(_DWORD *)a2 > *(char *)Buf2;
                  goto LABEL_1273;
                }
                v200 = v199 - 1;
                if ( !v200 )
                {
                  *a8 = *(_DWORD *)a2 < *(char *)Buf2;
                  goto LABEL_1273;
                }
                v201 = v200 - 1;
                if ( !v201 )
                {
                  *a8 = *(_DWORD *)a2 >= *(char *)Buf2;
                  goto LABEL_1273;
                }
                if ( v201 == 1 )
                {
                  *a8 = *(_DWORD *)a2 <= *(char *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 3:
                v202 = v14 - 2;
                if ( !v202 )
                  goto LABEL_628;
                v203 = v202 - 1;
                if ( !v203 )
                {
                  *a8 = *(_DWORD *)a2 > (int)*(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                v204 = v203 - 1;
                if ( !v204 )
                {
                  *a8 = *(_DWORD *)a2 < (int)*(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                v205 = v204 - 1;
                if ( !v205 )
                {
                  *a8 = *(_DWORD *)a2 >= (int)*(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                if ( v205 == 1 )
                {
                  *a8 = *(_DWORD *)a2 <= (int)*(unsigned __int8 *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 4:
                v206 = v14 - 2;
                if ( !v206 )
                  goto LABEL_629;
                v207 = v206 - 1;
                if ( !v207 )
                {
                  *a8 = *(_DWORD *)a2 > *(__int16 *)Buf2;
                  goto LABEL_1273;
                }
                v208 = v207 - 1;
                if ( !v208 )
                {
                  *a8 = *(_DWORD *)a2 < *(__int16 *)Buf2;
                  goto LABEL_1273;
                }
                v209 = v208 - 1;
                if ( !v209 )
                {
                  *a8 = *(_DWORD *)a2 >= *(__int16 *)Buf2;
                  goto LABEL_1273;
                }
                if ( v209 == 1 )
                {
                  *a8 = *(_DWORD *)a2 <= *(__int16 *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 5:
                v210 = v14 - 2;
                if ( !v210 )
                  goto LABEL_630;
                v211 = v210 - 1;
                if ( !v211 )
                {
                  *a8 = *(_DWORD *)a2 > (int)*(unsigned __int16 *)Buf2;
                  goto LABEL_1273;
                }
                v212 = v211 - 1;
                if ( !v212 )
                {
                  *a8 = *(_DWORD *)a2 < (int)*(unsigned __int16 *)Buf2;
                  goto LABEL_1273;
                }
                v213 = v212 - 1;
                if ( !v213 )
                {
                  *a8 = *(_DWORD *)a2 >= (int)*(unsigned __int16 *)Buf2;
                  goto LABEL_1273;
                }
                if ( v213 == 1 )
                {
                  *a8 = *(_DWORD *)a2 <= (int)*(unsigned __int16 *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 6:
                v214 = v14 - 2;
                if ( !v214 )
                  goto LABEL_1265;
                v215 = v214 - 1;
                if ( !v215 )
                {
                  *a8 = *(_DWORD *)a2 > (int)*Buf2;
                  goto LABEL_1273;
                }
                v216 = v215 - 1;
                if ( !v216 )
                {
                  *a8 = *(_DWORD *)a2 < (int)*Buf2;
                  goto LABEL_1273;
                }
                v217 = v216 - 1;
                if ( !v217 )
                {
                  *a8 = *(_DWORD *)a2 >= (int)*Buf2;
                  goto LABEL_1273;
                }
                if ( v217 == 1 )
                {
                  *a8 = *(_DWORD *)a2 <= (int)*Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 7:
                goto LABEL_631;
              case 8:
              case 14:
                v218 = v14 - 2;
                if ( !v218 )
                  goto LABEL_640;
                v219 = v218 - 1;
                if ( !v219 )
                {
                  *a8 = *(int *)a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v220 = v219 - 1;
                if ( !v220 )
                {
                  *a8 = *(int *)a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v221 = v220 - 1;
                if ( !v221 )
                {
                  *a8 = *(int *)a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v221 == 1 )
                {
                  *a8 = *(int *)a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 9:
                v222 = v14 - 2;
                if ( !v222 )
                {
LABEL_640:
                  *a8 = *(_DWORD *)a2 == *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v223 = v222 - 1;
                if ( !v223 )
                {
                  *a8 = (unsigned __int64)*(int *)a2 > *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v224 = v223 - 1;
                if ( !v224 )
                {
                  *a8 = (unsigned __int64)*(int *)a2 < *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v225 = v224 - 1;
                if ( !v225 )
                {
                  *a8 = (unsigned __int64)*(int *)a2 >= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                if ( v225 == 1 )
                {
                  *a8 = (unsigned __int64)*(int *)a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                goto LABEL_22;
              case 10:
                v33 = v14 - 2;
                if ( !v33 )
                {
                  v239 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_357:
                  LODWORD(v238) = _mm_cvtepi32_ps(v239).m128_u32[0];
                  goto LABEL_358;
                }
                v34 = v33 - 1;
                if ( !v34 )
                {
                  v50 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_89:
                  LODWORD(v51) = _mm_cvtepi32_ps(v50).m128_u32[0];
                  goto LABEL_90;
                }
                v35 = v34 - 1;
                if ( !v35 )
                {
                  *a8 = *(float *)Buf2 > (float)*(int *)a2;
                  goto LABEL_1273;
                }
                v36 = v35 - 1;
                if ( !v36 )
                {
                  *a8 = (float)*(int *)a2 >= *(float *)Buf2;
                  goto LABEL_1273;
                }
                if ( v36 != 1 )
                  goto LABEL_22;
                v37 = (float)*(int *)a2;
                goto LABEL_67;
              case 11:
              case 15:
                v46 = v14 - 2;
                if ( !v46 )
                {
                  v242 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_364:
                  *(_QWORD *)&v243 = *(_OWORD *)&_mm_cvtepi32_pd(v242);
                  goto LABEL_365;
                }
                v47 = v46 - 1;
                if ( v47 )
                {
                  v48 = v47 - 1;
                  if ( v48 )
                  {
                    v49 = v48 - 1;
                    if ( v49 )
                    {
                      if ( v49 != 1 )
                        goto LABEL_22;
                      *a8 = *(double *)Buf2 >= (double)*(int *)a2;
                    }
                    else
                    {
                      *a8 = (double)*(int *)a2 >= *(double *)Buf2;
                    }
                  }
                  else
                  {
                    *a8 = *(double *)Buf2 > (double)*(int *)a2;
                  }
                }
                else
                {
                  *a8 = (double)*(int *)a2 > *(double *)Buf2;
                }
                break;
              default:
                goto LABEL_22;
            }
            goto LABEL_1273;
          case 7u:
            if ( v14 - 7 > 1 )
            {
              switch ( a5 )
              {
                case 2:
                  if ( v14 == 5 )
                  {
                    *a8 = *(_DWORD *)a2 >= (unsigned int)*(char *)Buf2;
                    goto LABEL_1273;
                  }
                  v229 = v14 - 2;
                  if ( !v229 )
                  {
LABEL_627:
                    v106 = *(_DWORD *)a2 == *(char *)Buf2;
                    goto LABEL_160;
                  }
                  v230 = v229 - 1;
                  if ( !v230 )
                  {
                    v107 = *(_DWORD *)a2 > (unsigned int)*(char *)Buf2;
                    goto LABEL_161;
                  }
                  v231 = v230 - 1;
                  if ( !v231 )
                  {
                    *a8 = *(_DWORD *)a2 < (unsigned int)*(char *)Buf2;
                    goto LABEL_1273;
                  }
                  if ( v231 == 2 )
                  {
                    *a8 = *(_DWORD *)a2 <= (unsigned int)*(char *)Buf2;
                    goto LABEL_1273;
                  }
                  goto LABEL_22;
                case 3:
                  v258 = v14 - 2;
                  if ( !v258 )
                  {
LABEL_628:
                    v106 = *(_DWORD *)a2 == *(unsigned __int8 *)Buf2;
                    goto LABEL_160;
                  }
                  v259 = v258 - 1;
                  if ( v259 )
                  {
                    v260 = v259 - 1;
                    if ( v260 )
                    {
                      v261 = v260 - 1;
                      if ( v261 )
                      {
                        if ( v261 != 1 )
                          goto LABEL_22;
                        v107 = *(_DWORD *)a2 <= (unsigned int)*(unsigned __int8 *)Buf2;
                      }
                      else
                      {
                        v107 = *(_DWORD *)a2 >= (unsigned int)*(unsigned __int8 *)Buf2;
                      }
                    }
                    else
                    {
                      v107 = *(_DWORD *)a2 < (unsigned int)*(unsigned __int8 *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_DWORD *)a2 > (unsigned int)*(unsigned __int8 *)Buf2;
                  }
                  goto LABEL_161;
                case 4:
                  v262 = v14 - 2;
                  if ( !v262 )
                  {
LABEL_629:
                    v106 = *(_DWORD *)a2 == *(__int16 *)Buf2;
                    goto LABEL_160;
                  }
                  v263 = v262 - 1;
                  if ( v263 )
                  {
                    v264 = v263 - 1;
                    if ( v264 )
                    {
                      v265 = v264 - 1;
                      if ( v265 )
                      {
                        if ( v265 != 1 )
                          goto LABEL_22;
                        v107 = *(_DWORD *)a2 <= (unsigned int)*(__int16 *)Buf2;
                      }
                      else
                      {
                        v107 = *(_DWORD *)a2 >= (unsigned int)*(__int16 *)Buf2;
                      }
                    }
                    else
                    {
                      v107 = *(_DWORD *)a2 < (unsigned int)*(__int16 *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_DWORD *)a2 > (unsigned int)*(__int16 *)Buf2;
                  }
                  goto LABEL_161;
                case 5:
                  v266 = v14 - 2;
                  if ( !v266 )
                  {
LABEL_630:
                    v106 = *(_DWORD *)a2 == *(unsigned __int16 *)Buf2;
                    goto LABEL_160;
                  }
                  v267 = v266 - 1;
                  if ( v267 )
                  {
                    v268 = v267 - 1;
                    if ( v268 )
                    {
                      v269 = v268 - 1;
                      if ( v269 )
                      {
                        if ( v269 != 1 )
                          goto LABEL_22;
                        v107 = *(_DWORD *)a2 <= (unsigned int)*(unsigned __int16 *)Buf2;
                      }
                      else
                      {
                        v107 = *(_DWORD *)a2 >= (unsigned int)*(unsigned __int16 *)Buf2;
                      }
                    }
                    else
                    {
                      v107 = *(_DWORD *)a2 < (unsigned int)*(unsigned __int16 *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_DWORD *)a2 > (unsigned int)*(unsigned __int16 *)Buf2;
                  }
                  goto LABEL_161;
                case 6:
                case 7:
LABEL_631:
                  v254 = v14 - 2;
                  if ( !v254 )
                    goto LABEL_1265;
                  v255 = v254 - 1;
                  if ( v255 )
                  {
                    v256 = v255 - 1;
                    if ( v256 )
                    {
                      v257 = v256 - 1;
                      if ( v257 )
                      {
                        if ( v257 != 1 )
                          goto LABEL_22;
                        *a8 = *(_DWORD *)a2 <= *Buf2;
                      }
                      else
                      {
                        *a8 = *(_DWORD *)a2 >= *Buf2;
                      }
                    }
                    else
                    {
                      *a8 = *(_DWORD *)a2 < *Buf2;
                    }
                  }
                  else
                  {
                    *a8 = *(_DWORD *)a2 > *Buf2;
                  }
                  goto LABEL_1273;
                case 8:
                case 14:
                  if ( v14 == 5 )
                  {
                    *a8 = (__int64)*(unsigned int *)a2 >= *(_QWORD *)Buf2;
                    goto LABEL_1273;
                  }
                  v226 = v14 - 2;
                  if ( !v226 )
                    goto LABEL_669;
                  v227 = v226 - 1;
                  if ( !v227 )
                  {
                    *a8 = (__int64)*(unsigned int *)a2 > *(_QWORD *)Buf2;
                    goto LABEL_1273;
                  }
                  v228 = v227 - 1;
                  if ( !v228 )
                  {
                    *a8 = (__int64)*(unsigned int *)a2 < *(_QWORD *)Buf2;
                    goto LABEL_1273;
                  }
                  if ( v228 != 2 )
                    goto LABEL_22;
                  *a8 = (__int64)*(unsigned int *)a2 <= *(_QWORD *)Buf2;
                  goto LABEL_1273;
                case 9:
                  if ( v14 == 5 )
                  {
                    *a8 = (unsigned __int64)*(unsigned int *)a2 >= *(_QWORD *)Buf2;
                    goto LABEL_1273;
                  }
                  v39 = v14 - 2;
                  if ( !v39 )
                  {
LABEL_669:
                    *a8 = *(_DWORD *)a2 == *(_QWORD *)Buf2;
                    goto LABEL_1273;
                  }
                  v40 = v39 - 1;
                  if ( !v40 )
                  {
                    *a8 = (unsigned __int64)*(unsigned int *)a2 > *(_QWORD *)Buf2;
                    goto LABEL_1273;
                  }
                  v41 = v40 - 1;
                  if ( !v41 )
                  {
                    *a8 = (unsigned __int64)*(unsigned int *)a2 < *(_QWORD *)Buf2;
                    goto LABEL_1273;
                  }
                  if ( v41 == 2 )
                  {
                    *a8 = (unsigned __int64)*(unsigned int *)a2 <= *(_QWORD *)Buf2;
                    goto LABEL_1273;
                  }
                  goto LABEL_22;
                case 10:
                  if ( v14 == 2 )
                  {
                    v238 = (float)*(int *)a2;
                    goto LABEL_358;
                  }
                  v232 = v14 - 3;
                  if ( !v232 )
                  {
                    v51 = (float)*(int *)a2;
                    goto LABEL_90;
                  }
                  v233 = v232 - 1;
                  if ( !v233 )
                  {
                    *a8 = *(float *)Buf2 > (float)*(int *)a2;
                    goto LABEL_1273;
                  }
                  v248 = v233 - 1;
                  if ( !v248 )
                  {
                    v54 = 0;
                    LOBYTE(v54) = (float)*(int *)a2 >= *(float *)Buf2;
                    goto LABEL_92;
                  }
                  if ( v248 != 1 )
                    goto LABEL_22;
                  v37 = (float)*(int *)a2;
                  goto LABEL_67;
                case 11:
                case 15:
                  if ( v14 == 6 )
                  {
                    *a8 = *(double *)Buf2 >= (double)*(int *)a2;
                    goto LABEL_1273;
                  }
                  v234 = v14 - 2;
                  if ( !v234 )
                  {
                    v240 = (double)*(int *)a2 == *(double *)Buf2;
                    goto LABEL_359;
                  }
                  v235 = v234 - 1;
                  if ( !v235 )
                  {
                    v270 = (double)*(int *)a2;
                    v52 = v270 < *(double *)Buf2;
                    v53 = v270 == *(double *)Buf2;
                    goto LABEL_91;
                  }
                  v236 = v235 - 1;
                  if ( !v236 )
                  {
                    *a8 = *(double *)Buf2 > (double)*(int *)a2;
                    goto LABEL_1273;
                  }
                  if ( v236 == 1 )
                  {
                    v38 = (double)*(int *)a2 < *(double *)Buf2;
                    goto LABEL_68;
                  }
                  break;
                default:
                  goto LABEL_22;
              }
              goto LABEL_22;
            }
            if ( a5 != 7 )
              goto LABEL_22;
            v252 = *Buf2;
            v253 = *(_DWORD *)a2;
            if ( v14 == 7 )
            {
              *a8 = v253 & v252;
              goto LABEL_1273;
            }
            v54 = v253 | v252;
            goto LABEL_92;
          case 8u:
            switch ( a5 )
            {
              case 2:
                v271 = v14 - 2;
                if ( !v271 )
                  goto LABEL_686;
                v272 = v271 - 1;
                if ( v272 )
                {
                  v273 = v272 - 1;
                  if ( v273 )
                  {
                    v274 = v273 - 1;
                    if ( v274 )
                    {
                      if ( v274 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= *(char *)Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= *(char *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < *(char *)Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > *(char *)Buf2;
                }
                goto LABEL_161;
              case 3:
                v275 = v14 - 2;
                if ( !v275 )
                  goto LABEL_696;
                v276 = v275 - 1;
                if ( v276 )
                {
                  v277 = v276 - 1;
                  if ( v277 )
                  {
                    v278 = v277 - 1;
                    if ( v278 )
                    {
                      if ( v278 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= (__int64)*(unsigned __int8 *)Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= (__int64)*(unsigned __int8 *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < (__int64)*(unsigned __int8 *)Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > (__int64)*(unsigned __int8 *)Buf2;
                }
                goto LABEL_161;
              case 4:
                v279 = v14 - 2;
                if ( !v279 )
                  goto LABEL_706;
                v280 = v279 - 1;
                if ( v280 )
                {
                  v281 = v280 - 1;
                  if ( v281 )
                  {
                    v282 = v281 - 1;
                    if ( v282 )
                    {
                      if ( v282 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= *(__int16 *)Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= *(__int16 *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < *(__int16 *)Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > *(__int16 *)Buf2;
                }
                goto LABEL_161;
              case 5:
                v283 = v14 - 2;
                if ( !v283 )
                  goto LABEL_716;
                v284 = v283 - 1;
                if ( v284 )
                {
                  v285 = v284 - 1;
                  if ( v285 )
                  {
                    v286 = v285 - 1;
                    if ( v286 )
                    {
                      if ( v286 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= (__int64)*(unsigned __int16 *)Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= (__int64)*(unsigned __int16 *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < (__int64)*(unsigned __int16 *)Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > (__int64)*(unsigned __int16 *)Buf2;
                }
                goto LABEL_161;
              case 6:
                v287 = v14 - 2;
                if ( !v287 )
                  goto LABEL_726;
                v288 = v287 - 1;
                if ( v288 )
                {
                  v289 = v288 - 1;
                  if ( v289 )
                  {
                    v290 = v289 - 1;
                    if ( v290 )
                    {
                      if ( v290 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= (int)*Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= (int)*Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < (int)*Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > (int)*Buf2;
                }
                goto LABEL_161;
              case 7:
                v291 = v14 - 2;
                if ( !v291 )
                  goto LABEL_736;
                v292 = v291 - 1;
                if ( v292 )
                {
                  v293 = v292 - 1;
                  if ( v293 )
                  {
                    v294 = v293 - 1;
                    if ( v294 )
                    {
                      if ( v294 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= (__int64)*Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= (__int64)*Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < (__int64)*Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > (__int64)*Buf2;
                }
                goto LABEL_161;
              case 8:
              case 14:
                goto LABEL_737;
              case 9:
                goto LABEL_747;
              case 10:
                v303 = v14 - 2;
                if ( !v303 )
                {
                  v238 = (float)(int)*(_QWORD *)a2;
                  goto LABEL_358;
                }
                v304 = v303 - 1;
                if ( !v304 )
                  goto LABEL_764;
                v305 = v304 - 1;
                if ( !v305 )
                  goto LABEL_763;
                v306 = v305 - 1;
                if ( !v306 )
                  goto LABEL_762;
                break;
              case 11:
              case 15:
                goto LABEL_766;
              default:
                goto LABEL_22;
            }
LABEL_760:
            if ( v306 != 1 )
              goto LABEL_22;
            v37 = (float)(int)*(_QWORD *)a2;
LABEL_67:
            v38 = *(float *)Buf2 < v37;
            goto LABEL_68;
          case 9u:
            switch ( a5 )
            {
              case 2:
                v314 = v14 - 2;
                if ( !v314 )
                {
LABEL_686:
                  v106 = *(_QWORD *)a2 == *(char *)Buf2;
                  goto LABEL_160;
                }
                v315 = v314 - 1;
                if ( v315 )
                {
                  v316 = v315 - 1;
                  if ( v316 )
                  {
                    v317 = v316 - 1;
                    if ( v317 )
                    {
                      if ( v317 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= (unsigned __int64)*(char *)Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= (unsigned __int64)*(char *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < (unsigned __int64)*(char *)Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > (unsigned __int64)*(char *)Buf2;
                }
                goto LABEL_161;
              case 3:
                v318 = v14 - 2;
                if ( !v318 )
                {
LABEL_696:
                  v106 = *(_QWORD *)a2 == *(unsigned __int8 *)Buf2;
                  goto LABEL_160;
                }
                v319 = v318 - 1;
                if ( v319 )
                {
                  v320 = v319 - 1;
                  if ( v320 )
                  {
                    v321 = v320 - 1;
                    if ( v321 )
                    {
                      if ( v321 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= (unsigned __int64)*(unsigned __int8 *)Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= (unsigned __int64)*(unsigned __int8 *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < (unsigned __int64)*(unsigned __int8 *)Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > (unsigned __int64)*(unsigned __int8 *)Buf2;
                }
                goto LABEL_161;
              case 4:
                v322 = v14 - 2;
                if ( !v322 )
                {
LABEL_706:
                  v106 = *(_QWORD *)a2 == *(__int16 *)Buf2;
                  goto LABEL_160;
                }
                v323 = v322 - 1;
                if ( v323 )
                {
                  v324 = v323 - 1;
                  if ( v324 )
                  {
                    v325 = v324 - 1;
                    if ( v325 )
                    {
                      if ( v325 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= (unsigned __int64)*(__int16 *)Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= (unsigned __int64)*(__int16 *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < (unsigned __int64)*(__int16 *)Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > (unsigned __int64)*(__int16 *)Buf2;
                }
                goto LABEL_161;
              case 5:
                v326 = v14 - 2;
                if ( !v326 )
                {
LABEL_716:
                  v106 = *(_QWORD *)a2 == *(unsigned __int16 *)Buf2;
                  goto LABEL_160;
                }
                v327 = v326 - 1;
                if ( v327 )
                {
                  v328 = v327 - 1;
                  if ( v328 )
                  {
                    v329 = v328 - 1;
                    if ( v329 )
                    {
                      if ( v329 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= (unsigned __int64)*(unsigned __int16 *)Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= (unsigned __int64)*(unsigned __int16 *)Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < (unsigned __int64)*(unsigned __int16 *)Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > (unsigned __int64)*(unsigned __int16 *)Buf2;
                }
                goto LABEL_161;
              case 6:
                v330 = v14 - 2;
                if ( !v330 )
                {
LABEL_726:
                  v106 = *(_QWORD *)a2 == *Buf2;
                  goto LABEL_160;
                }
                v331 = v330 - 1;
                if ( v331 )
                {
                  v332 = v331 - 1;
                  if ( v332 )
                  {
                    v333 = v332 - 1;
                    if ( v333 )
                    {
                      if ( v333 != 1 )
                        goto LABEL_22;
                      v107 = *(_QWORD *)a2 <= (unsigned __int64)(int)*Buf2;
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 >= (unsigned __int64)(int)*Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 < (unsigned __int64)(int)*Buf2;
                  }
                }
                else
                {
                  v107 = *(_QWORD *)a2 > (unsigned __int64)(int)*Buf2;
                }
                goto LABEL_161;
              case 7:
                v334 = v14 - 2;
                if ( v334 )
                {
                  v335 = v334 - 1;
                  if ( v335 )
                  {
                    v336 = v335 - 1;
                    if ( v336 )
                    {
                      v337 = v336 - 1;
                      if ( v337 )
                      {
                        if ( v337 != 1 )
                          goto LABEL_22;
                        v107 = *(_QWORD *)a2 <= (unsigned __int64)*Buf2;
                      }
                      else
                      {
                        v107 = *(_QWORD *)a2 >= (unsigned __int64)*Buf2;
                      }
                    }
                    else
                    {
                      v107 = *(_QWORD *)a2 < (unsigned __int64)*Buf2;
                    }
                  }
                  else
                  {
                    v107 = *(_QWORD *)a2 > (unsigned __int64)*Buf2;
                  }
                }
                else
                {
LABEL_736:
                  v106 = *(_QWORD *)a2 == *Buf2;
LABEL_160:
                  v107 = v106;
                }
                goto LABEL_161;
              case 8:
              case 9:
              case 14:
                goto LABEL_747;
              case 10:
                v338 = v14 - 2;
                if ( !v338 )
                {
                  v348 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v238 = (float)(int)(*(_DWORD *)a2 & 1 | (v348 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v348 >> 1));
                  else
                    v238 = (float)(int)v348;
LABEL_358:
                  v240 = v238 == *(float *)Buf2;
LABEL_359:
                  v15 = 1;
                  if ( !v240 )
                  {
                    *a8 = 0;
                    goto LABEL_1273;
                  }
                  goto LABEL_10;
                }
                v339 = v338 - 1;
                if ( !v339 )
                {
                  v347 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v51 = (float)(int)(*(_DWORD *)a2 & 1 | (v347 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v347 >> 1));
                  else
                    v51 = (float)(int)v347;
                  goto LABEL_90;
                }
                v340 = v339 - 1;
                if ( !v340 )
                {
                  v345 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v346 = (float)(int)(*(_DWORD *)a2 & 1 | (v345 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v345 >> 1));
                  else
                    v346 = (float)(int)v345;
                  v52 = *(float *)Buf2 < v346;
                  v53 = *(float *)Buf2 == v346;
                  goto LABEL_91;
                }
                v341 = v340 - 1;
                if ( !v341 )
                {
                  v343 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v344 = (float)(int)(*(_DWORD *)a2 & 1 | (v343 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v343 >> 1));
                  else
                    v344 = (float)(int)v343;
                  v38 = v344 < *(float *)Buf2;
                  goto LABEL_68;
                }
                if ( v341 != 1 )
                  goto LABEL_22;
                v342 = *(_QWORD *)a2;
                if ( *(__int64 *)a2 < 0 )
                  v37 = (float)(int)(*(_DWORD *)a2 & 1 | (v342 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v342 >> 1));
                else
                  v37 = (float)(int)v342;
                goto LABEL_67;
              case 11:
              case 15:
                v349 = v14 - 2;
                if ( !v349 )
                {
                  v361 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v243 = (double)(int)(*(_DWORD *)a2 & 1 | (v361 >> 1))
                         + (double)(int)(*(_DWORD *)a2 & 1 | (v361 >> 1));
                  else
                    v243 = (double)(int)v361;
                  goto LABEL_365;
                }
                v350 = v349 - 1;
                if ( !v350 )
                {
                  v359 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v360 = (double)(int)(*(_DWORD *)a2 & 1 | (v359 >> 1))
                         + (double)(int)(*(_DWORD *)a2 & 1 | (v359 >> 1));
                  else
                    v360 = (double)(int)v359;
                  v52 = v360 < *(double *)Buf2;
                  v53 = v360 == *(double *)Buf2;
                  goto LABEL_91;
                }
                v351 = v350 - 1;
                if ( !v351 )
                {
                  v357 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v358 = (double)(int)(*(_DWORD *)a2 & 1 | (v357 >> 1))
                         + (double)(int)(*(_DWORD *)a2 & 1 | (v357 >> 1));
                  else
                    v358 = (double)(int)v357;
                  v52 = *(double *)Buf2 < v358;
                  v53 = *(double *)Buf2 == v358;
                  goto LABEL_91;
                }
                v352 = v351 - 1;
                if ( v352 )
                {
                  if ( v352 != 1 )
                    goto LABEL_22;
                  v353 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v354 = (double)(int)(*(_DWORD *)a2 & 1 | (v353 >> 1))
                         + (double)(int)(*(_DWORD *)a2 & 1 | (v353 >> 1));
                  else
                    v354 = (double)(int)v353;
                  v38 = *(double *)Buf2 < v354;
                }
                else
                {
                  v355 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v356 = (double)(int)(*(_DWORD *)a2 & 1 | (v355 >> 1))
                         + (double)(int)(*(_DWORD *)a2 & 1 | (v355 >> 1));
                  else
                    v356 = (double)(int)v355;
                  v38 = v356 < *(double *)Buf2;
                }
                break;
              default:
                goto LABEL_22;
            }
            goto LABEL_68;
          case 0xAu:
            if ( a5 == 7 )
            {
              if ( v14 == 2 )
              {
                LODWORD(v249) = *Buf2;
LABEL_582:
                v250 = (float)(int)v249;
LABEL_583:
                v251 = *(float *)a2 == v250;
LABEL_584:
                v15 = 1;
                if ( v251 )
                  goto LABEL_10;
                goto LABEL_9;
              }
              v420 = v14 - 3;
              if ( v420 )
              {
                v421 = v420 - 1;
                if ( v421 )
                {
                  v422 = v421 - 1;
                  if ( v422 )
                  {
                    if ( v422 != 1 )
                      goto LABEL_22;
                    v107 = 0;
                    LOBYTE(v107) = (float)(int)*Buf2 >= *(float *)a2;
                  }
                  else
                  {
                    v107 = 0;
                    LOBYTE(v107) = *(float *)a2 >= (float)(int)*Buf2;
                  }
                }
                else
                {
                  v107 = 0;
                  LOBYTE(v107) = (float)(int)*Buf2 > *(float *)a2;
                }
              }
              else
              {
                v107 = 0;
                LOBYTE(v107) = *(float *)a2 > (float)(int)*Buf2;
              }
LABEL_161:
              *a8 = v107;
              goto LABEL_1273;
            }
            switch ( a5 )
            {
              case 2:
                v362 = v14 - 2;
                if ( !v362 )
                {
                  v250 = (float)*(char *)Buf2;
                  goto LABEL_583;
                }
                v363 = v362 - 1;
                if ( !v363 )
                {
                  v371 = *(char *)Buf2;
                  goto LABEL_896;
                }
                v364 = v363 - 1;
                if ( v364 )
                {
                  v365 = v364 - 1;
                  if ( !v365 )
                  {
                    v366 = *(char *)Buf2;
                    goto LABEL_885;
                  }
                  if ( v365 != 1 )
                    goto LABEL_22;
                  v15 = 0;
                  LOBYTE(v15) = (float)*(char *)Buf2 >= *(float *)a2;
                }
                else
                {
                  v15 = 0;
                  LOBYTE(v15) = (float)*(char *)Buf2 > *(float *)a2;
                }
                goto LABEL_10;
              case 3:
                v377 = v14 - 2;
                if ( !v377 )
                {
                  v250 = (float)*(unsigned __int8 *)Buf2;
                  goto LABEL_583;
                }
                v378 = v377 - 1;
                if ( !v378 )
                {
                  v371 = *(unsigned __int8 *)Buf2;
                  goto LABEL_896;
                }
                v379 = v378 - 1;
                if ( !v379 )
                {
                  v381 = (float)*(unsigned __int8 *)Buf2;
                  v374 = v381 < *(float *)a2;
                  v375 = v381 == *(float *)a2;
                  goto LABEL_903;
                }
                v380 = v379 - 1;
                if ( !v380 )
                {
                  v366 = *(unsigned __int8 *)Buf2;
                  goto LABEL_885;
                }
                if ( v380 != 1 )
                  goto LABEL_22;
                v369 = (float)*(unsigned __int8 *)Buf2 < *(float *)a2;
                goto LABEL_892;
              case 4:
                v382 = v14 - 2;
                if ( !v382 )
                {
                  v250 = (float)*(__int16 *)Buf2;
                  goto LABEL_583;
                }
                v383 = v382 - 1;
                if ( !v383 )
                {
                  v371 = *(__int16 *)Buf2;
                  goto LABEL_896;
                }
                v384 = v383 - 1;
                if ( !v384 )
                {
                  v386 = (float)*(__int16 *)Buf2;
                  v374 = v386 < *(float *)a2;
                  v375 = v386 == *(float *)a2;
                  goto LABEL_903;
                }
                v385 = v384 - 1;
                if ( !v385 )
                {
                  v366 = *(__int16 *)Buf2;
                  goto LABEL_885;
                }
                if ( v385 != 1 )
                  goto LABEL_22;
                v369 = (float)*(__int16 *)Buf2 < *(float *)a2;
                goto LABEL_892;
              case 5:
                v387 = v14 - 2;
                if ( !v387 )
                {
                  v250 = (float)*(unsigned __int16 *)Buf2;
                  goto LABEL_583;
                }
                v388 = v387 - 1;
                if ( !v388 )
                {
                  v371 = *(unsigned __int16 *)Buf2;
LABEL_896:
                  v372 = _mm_cvtsi32_si128(v371);
                  goto LABEL_898;
                }
                v389 = v388 - 1;
                if ( !v389 )
                {
                  v391 = (float)*(unsigned __int16 *)Buf2;
                  v374 = v391 < *(float *)a2;
                  v375 = v391 == *(float *)a2;
                  goto LABEL_903;
                }
                v390 = v389 - 1;
                if ( !v390 )
                {
                  v366 = *(unsigned __int16 *)Buf2;
LABEL_885:
                  v367 = _mm_cvtsi32_si128(v366);
                  goto LABEL_887;
                }
                if ( v390 != 1 )
                  goto LABEL_22;
                v369 = (float)*(unsigned __int16 *)Buf2 < *(float *)a2;
                goto LABEL_892;
              case 6:
                v392 = v14 - 2;
                if ( !v392 )
                {
                  v250 = (float)(int)*Buf2;
                  goto LABEL_583;
                }
                v393 = v392 - 1;
                if ( !v393 )
                {
                  v372 = _mm_cvtsi32_si128(*Buf2);
LABEL_898:
                  LODWORD(v373) = _mm_cvtepi32_ps(v372).m128_u32[0];
                  goto LABEL_900;
                }
                v394 = v393 - 1;
                if ( !v394 )
                {
                  v396 = (float)(int)*Buf2;
                  v374 = v396 < *(float *)a2;
                  v375 = v396 == *(float *)a2;
                  goto LABEL_903;
                }
                v395 = v394 - 1;
                if ( !v395 )
                {
                  v367 = _mm_cvtsi32_si128(*Buf2);
LABEL_887:
                  LODWORD(v368) = _mm_cvtepi32_ps(v367).m128_u32[0];
                  goto LABEL_889;
                }
                if ( v395 != 1 )
                  goto LABEL_22;
                v369 = (float)(int)*Buf2 < *(float *)a2;
                goto LABEL_892;
              case 8:
              case 14:
                v397 = v14 - 2;
                if ( !v397 )
                {
                  v250 = (float)(int)*(_QWORD *)Buf2;
                  goto LABEL_583;
                }
                v398 = v397 - 1;
                if ( !v398 )
                {
                  v373 = (float)(int)*(_QWORD *)Buf2;
                  goto LABEL_900;
                }
                v399 = v398 - 1;
                if ( !v399 )
                {
                  v401 = (float)(int)*(_QWORD *)Buf2;
                  v374 = v401 < *(float *)a2;
                  v375 = v401 == *(float *)a2;
                  goto LABEL_903;
                }
                v400 = v399 - 1;
                if ( !v400 )
                {
                  v368 = (float)(int)*(_QWORD *)Buf2;
                  goto LABEL_889;
                }
                if ( v400 != 1 )
                  goto LABEL_22;
                v369 = (float)(int)*(_QWORD *)Buf2 < *(float *)a2;
                goto LABEL_892;
              case 9:
                v402 = v14 - 2;
                if ( !v402 )
                {
                  v249 = *(_QWORD *)Buf2;
                  if ( *(__int64 *)Buf2 >= 0 )
                    goto LABEL_582;
                  v250 = (float)(int)(*Buf2 & 1 | (v249 >> 1)) + (float)(int)(*Buf2 & 1 | (v249 >> 1));
                  goto LABEL_583;
                }
                v403 = v402 - 1;
                if ( !v403 )
                {
                  v409 = *(_QWORD *)Buf2;
                  if ( *(__int64 *)Buf2 < 0 )
                    v373 = (float)(int)(*Buf2 & 1 | (v409 >> 1)) + (float)(int)(*Buf2 & 1 | (v409 >> 1));
                  else
                    v373 = (float)(int)v409;
LABEL_900:
                  v374 = *(float *)a2 < v373;
                  v375 = *(float *)a2 == v373;
                  goto LABEL_903;
                }
                v404 = v403 - 1;
                if ( !v404 )
                {
                  v408 = *(_QWORD *)Buf2;
                  if ( *(__int64 *)Buf2 < 0 )
                    v376 = (float)(int)(*Buf2 & 1 | (v408 >> 1)) + (float)(int)(*Buf2 & 1 | (v408 >> 1));
                  else
                    v376 = (float)(int)v408;
                  v374 = v376 < *(float *)a2;
                  v375 = v376 == *(float *)a2;
                  goto LABEL_903;
                }
                v405 = v404 - 1;
                if ( v405 )
                {
                  if ( v405 != 1 )
                    goto LABEL_22;
                  v406 = *(_QWORD *)Buf2;
                  if ( *(__int64 *)Buf2 < 0 )
                    v370 = (float)(int)(*Buf2 & 1 | (v406 >> 1)) + (float)(int)(*Buf2 & 1 | (v406 >> 1));
                  else
                    v370 = (float)(int)v406;
                  v369 = v370 < *(float *)a2;
                }
                else
                {
                  v407 = *(_QWORD *)Buf2;
                  if ( *(__int64 *)Buf2 < 0 )
                    v368 = (float)(int)(*Buf2 & 1 | (v407 >> 1)) + (float)(int)(*Buf2 & 1 | (v407 >> 1));
                  else
                    v368 = (float)(int)v407;
LABEL_889:
                  v369 = *(float *)a2 < v368;
                }
                goto LABEL_892;
              case 10:
                v410 = v14 - 2;
                if ( !v410 )
                {
                  v251 = *(float *)a2 == *(float *)Buf2;
                  goto LABEL_584;
                }
                v411 = v410 - 1;
                if ( !v411 )
                {
                  v51 = *(float *)a2;
                  goto LABEL_90;
                }
                v412 = v411 - 1;
                if ( !v412 )
                {
                  v52 = *(float *)Buf2 < *(float *)a2;
                  v53 = *(float *)Buf2 == *(float *)a2;
                  goto LABEL_91;
                }
                v413 = v412 - 1;
                if ( v413 )
                {
                  if ( v413 != 1 )
                    goto LABEL_22;
                  v38 = *(float *)Buf2 < *(float *)a2;
                }
                else
                {
                  v38 = *(float *)a2 < *(float *)Buf2;
                }
                goto LABEL_68;
              case 11:
              case 15:
                v414 = v14 - 2;
                if ( !v414 )
                {
                  v243 = *(float *)a2;
                  goto LABEL_365;
                }
                v415 = v414 - 1;
                if ( !v415 )
                {
                  v419 = *(float *)a2;
                  v52 = v419 < *(double *)Buf2;
                  v53 = v419 == *(double *)Buf2;
                  goto LABEL_91;
                }
                v416 = v415 - 1;
                if ( !v416 )
                {
                  v418 = *(float *)a2;
                  v52 = *(double *)Buf2 < v418;
                  v53 = *(double *)Buf2 == v418;
                  goto LABEL_91;
                }
                v417 = v416 - 1;
                if ( v417 )
                {
                  if ( v417 != 1 )
                    goto LABEL_22;
                  v38 = *(double *)Buf2 < *(float *)a2;
                }
                else
                {
                  v38 = *(float *)a2 < *(double *)Buf2;
                }
                break;
              default:
                goto LABEL_22;
            }
            goto LABEL_68;
          case 0xBu:
            switch ( a5 )
            {
              case 2:
                v423 = v14 - 2;
                if ( !v423 )
                  goto LABEL_1019;
                v424 = v423 - 1;
                if ( !v424 )
                  goto LABEL_1012;
                v425 = v424 - 1;
                if ( !v425 )
                  goto LABEL_1011;
                v426 = v425 - 1;
                if ( v426 )
                  goto LABEL_999;
                goto LABEL_1004;
              case 3:
                v440 = v14 - 2;
                if ( !v440 )
                  goto LABEL_1035;
                v441 = v440 - 1;
                if ( !v441 )
                  goto LABEL_1034;
                v442 = v441 - 1;
                if ( !v442 )
                  goto LABEL_1033;
                v443 = v442 - 1;
                if ( !v443 )
                  goto LABEL_1032;
                if ( v443 != 1 )
                  goto LABEL_22;
                v369 = (double)*(unsigned __int8 *)Buf2 < *(double *)a2;
                break;
              case 4:
                v445 = v14 - 2;
                if ( !v445 )
                  goto LABEL_1045;
                v446 = v445 - 1;
                if ( !v446 )
                  goto LABEL_1044;
                v447 = v446 - 1;
                if ( !v447 )
                  goto LABEL_1043;
                v448 = v447 - 1;
                if ( !v448 )
                  goto LABEL_1042;
                if ( v448 != 1 )
                  goto LABEL_22;
                v369 = (double)*(__int16 *)Buf2 < *(double *)a2;
                break;
              case 5:
                v450 = v14 - 2;
                if ( !v450 )
                  goto LABEL_1020;
                v451 = v450 - 1;
                if ( !v451 )
                  goto LABEL_1013;
                v452 = v451 - 1;
                if ( !v452 )
                  goto LABEL_1052;
                v453 = v452 - 1;
                if ( !v453 )
                  goto LABEL_1005;
                if ( v453 != 1 )
                  goto LABEL_22;
                v369 = (double)*(unsigned __int16 *)Buf2 < *(double *)a2;
                break;
              case 6:
                v455 = v14 - 2;
                if ( !v455 )
                  goto LABEL_1022;
                v456 = v455 - 1;
                if ( !v456 )
                  goto LABEL_1015;
                v457 = v456 - 1;
                if ( !v457 )
                  goto LABEL_1059;
                v458 = v457 - 1;
                if ( !v458 )
                  goto LABEL_1007;
                if ( v458 != 1 )
                  goto LABEL_22;
                v369 = (double)(int)*Buf2 < *(double *)a2;
                break;
              case 7:
                v460 = v14 - 2;
                if ( !v460 )
                  goto LABEL_1069;
                v461 = v460 - 1;
                if ( !v461 )
                  goto LABEL_1068;
                v462 = v461 - 1;
                if ( !v462 )
                  goto LABEL_1067;
                v463 = v462 - 1;
                if ( !v463 )
                  goto LABEL_1066;
                if ( v463 != 1 )
                  goto LABEL_22;
                v369 = (double)(int)*Buf2 < *(double *)a2;
                break;
              case 8:
              case 14:
                v465 = v14 - 2;
                if ( !v465 )
                  goto LABEL_1079;
                v466 = v465 - 1;
                if ( !v466 )
                  goto LABEL_1078;
                v467 = v466 - 1;
                if ( !v467 )
                  goto LABEL_1077;
                v468 = v467 - 1;
                if ( !v468 )
                  goto LABEL_1076;
                if ( v468 != 1 )
                  goto LABEL_22;
                v369 = (double)(int)*(_QWORD *)Buf2 < *(double *)a2;
                break;
              case 9:
                v470 = v14 - 2;
                if ( !v470 )
                  goto LABEL_1099;
                v471 = v470 - 1;
                if ( !v471 )
                  goto LABEL_1096;
                v472 = v471 - 1;
                if ( !v472 )
                  goto LABEL_1092;
                v473 = v472 - 1;
                if ( !v473 )
                  goto LABEL_1089;
                if ( v473 != 1 )
                  goto LABEL_22;
                v474 = *(_QWORD *)Buf2;
                if ( *(__int64 *)Buf2 < 0 )
                  v475 = (double)(int)(*Buf2 & 1 | (v474 >> 1)) + (double)(int)(*Buf2 & 1 | (v474 >> 1));
                else
                  v475 = (double)(int)v474;
                v369 = v475 < *(double *)a2;
                break;
              case 10:
                v481 = v14 - 2;
                if ( !v481 )
                  goto LABEL_1024;
                v482 = v481 - 1;
                if ( !v482 )
                  goto LABEL_1017;
                v483 = v482 - 1;
                if ( !v483 )
                  goto LABEL_1108;
                v484 = v483 - 1;
                if ( !v484 )
                  goto LABEL_1009;
                if ( v484 != 1 )
                  goto LABEL_22;
                v369 = *(float *)Buf2 < *(double *)a2;
                break;
              case 11:
              case 15:
                goto LABEL_1109;
              default:
                goto LABEL_22;
            }
            goto LABEL_892;
          case 0xCu:
            if ( a5 == 12 )
              break;
            goto LABEL_22;
          case 0xEu:
            switch ( a5 )
            {
              case 2:
                v490 = v14 - 2;
                if ( v490 )
                {
                  v491 = v490 - 1;
                  if ( v491 )
                  {
                    v492 = v491 - 1;
                    if ( v492 )
                    {
                      v493 = v492 - 1;
                      if ( v493 )
                      {
                        if ( v493 != 1 )
                          goto LABEL_22;
                        v15 = *(_QWORD *)a2 <= *(char *)Buf2;
                      }
                      else
                      {
                        v15 = *(_QWORD *)a2 >= *(char *)Buf2;
                      }
                    }
                    else
                    {
                      v15 = *(_QWORD *)a2 < *(char *)Buf2;
                    }
                  }
                  else
                  {
                    v15 = *(_QWORD *)a2 > *(char *)Buf2;
                  }
                }
                else
                {
                  v15 = *(_QWORD *)a2 == *(char *)Buf2;
                }
                goto LABEL_10;
              case 3:
                v494 = v14 - 2;
                if ( v494 )
                {
                  v495 = v494 - 1;
                  if ( v495 )
                  {
                    v496 = v495 - 1;
                    if ( v496 )
                    {
                      v497 = v496 - 1;
                      if ( v497 )
                      {
                        if ( v497 != 1 )
                          goto LABEL_22;
                        v15 = *(_QWORD *)a2 <= (__int64)*(unsigned __int8 *)Buf2;
                      }
                      else
                      {
                        v15 = *(_QWORD *)a2 >= (__int64)*(unsigned __int8 *)Buf2;
                      }
                    }
                    else
                    {
                      v15 = *(_QWORD *)a2 < (__int64)*(unsigned __int8 *)Buf2;
                    }
                  }
                  else
                  {
                    v15 = *(_QWORD *)a2 > (__int64)*(unsigned __int8 *)Buf2;
                  }
                }
                else
                {
                  v15 = *(_QWORD *)a2 == *(unsigned __int8 *)Buf2;
                }
                goto LABEL_10;
              case 4:
                v498 = v14 - 2;
                if ( v498 )
                {
                  v499 = v498 - 1;
                  if ( v499 )
                  {
                    v500 = v499 - 1;
                    if ( v500 )
                    {
                      v501 = v500 - 1;
                      if ( v501 )
                      {
                        if ( v501 != 1 )
                          goto LABEL_22;
                        v15 = *(_QWORD *)a2 <= *(__int16 *)Buf2;
                      }
                      else
                      {
                        v15 = *(_QWORD *)a2 >= *(__int16 *)Buf2;
                      }
                    }
                    else
                    {
                      v15 = *(_QWORD *)a2 < *(__int16 *)Buf2;
                    }
                  }
                  else
                  {
                    v15 = *(_QWORD *)a2 > *(__int16 *)Buf2;
                  }
                }
                else
                {
                  v15 = *(_QWORD *)a2 == *(__int16 *)Buf2;
                }
                goto LABEL_10;
              case 5:
                v502 = v14 - 2;
                if ( v502 )
                {
                  v503 = v502 - 1;
                  if ( v503 )
                  {
                    v504 = v503 - 1;
                    if ( v504 )
                    {
                      v505 = v504 - 1;
                      if ( v505 )
                      {
                        if ( v505 != 1 )
                          goto LABEL_22;
                        v15 = *(_QWORD *)a2 <= (__int64)*(unsigned __int16 *)Buf2;
                      }
                      else
                      {
                        v15 = *(_QWORD *)a2 >= (__int64)*(unsigned __int16 *)Buf2;
                      }
                    }
                    else
                    {
                      v15 = *(_QWORD *)a2 < (__int64)*(unsigned __int16 *)Buf2;
                    }
                  }
                  else
                  {
                    v15 = *(_QWORD *)a2 > (__int64)*(unsigned __int16 *)Buf2;
                  }
                }
                else
                {
                  v15 = *(_QWORD *)a2 == *(unsigned __int16 *)Buf2;
                }
                goto LABEL_10;
              case 6:
                v506 = v14 - 2;
                if ( v506 )
                {
                  v507 = v506 - 1;
                  if ( v507 )
                  {
                    v508 = v507 - 1;
                    if ( v508 )
                    {
                      v509 = v508 - 1;
                      if ( v509 )
                      {
                        if ( v509 != 1 )
                          goto LABEL_22;
                        v15 = *(_QWORD *)a2 <= (int)*Buf2;
                      }
                      else
                      {
                        v15 = *(_QWORD *)a2 >= (int)*Buf2;
                      }
                    }
                    else
                    {
                      v15 = *(_QWORD *)a2 < (int)*Buf2;
                    }
                  }
                  else
                  {
                    v15 = *(_QWORD *)a2 > (int)*Buf2;
                  }
                }
                else
                {
                  v15 = *(_QWORD *)a2 == *Buf2;
                }
                goto LABEL_10;
              case 7:
                v510 = v14 - 2;
                if ( v510 )
                {
                  v511 = v510 - 1;
                  if ( v511 )
                  {
                    v512 = v511 - 1;
                    if ( v512 )
                    {
                      v513 = v512 - 1;
                      if ( v513 )
                      {
                        if ( v513 != 1 )
                          goto LABEL_22;
                        v15 = *(_QWORD *)a2 <= (__int64)*Buf2;
                      }
                      else
                      {
                        v15 = *(_QWORD *)a2 >= (__int64)*Buf2;
                      }
                    }
                    else
                    {
                      v15 = *(_QWORD *)a2 < (__int64)*Buf2;
                    }
                  }
                  else
                  {
                    v15 = *(_QWORD *)a2 > (__int64)*Buf2;
                  }
                }
                else
                {
                  v15 = *(_QWORD *)a2 == *Buf2;
                }
                goto LABEL_10;
              case 8:
              case 14:
LABEL_737:
                v295 = v14 - 2;
                if ( !v295 )
                  goto LABEL_746;
                v296 = v295 - 1;
                if ( v296 )
                {
                  v297 = v296 - 1;
                  if ( v297 )
                  {
                    v298 = v297 - 1;
                    if ( v298 )
                    {
                      if ( v298 != 1 )
                        goto LABEL_22;
                      *a8 = *(_QWORD *)a2 <= *(_QWORD *)Buf2;
                    }
                    else
                    {
                      *a8 = *(_QWORD *)a2 >= *(_QWORD *)Buf2;
                    }
                  }
                  else
                  {
                    *a8 = *(_QWORD *)a2 < *(_QWORD *)Buf2;
                  }
                }
                else
                {
                  *a8 = *(_QWORD *)a2 > *(_QWORD *)Buf2;
                }
                goto LABEL_1273;
              case 9:
LABEL_747:
                v299 = v14 - 2;
                if ( !v299 )
                {
LABEL_746:
                  *a8 = *(_QWORD *)a2 == *(_QWORD *)Buf2;
                  goto LABEL_1273;
                }
                v300 = v299 - 1;
                if ( v300 )
                {
                  v301 = v300 - 1;
                  if ( v301 )
                  {
                    v302 = v301 - 1;
                    if ( v302 )
                    {
                      if ( v302 != 1 )
                        goto LABEL_22;
                      *a8 = *(_QWORD *)a2 <= *(_QWORD *)Buf2;
                    }
                    else
                    {
                      *a8 = *(_QWORD *)a2 >= *(_QWORD *)Buf2;
                    }
                  }
                  else
                  {
                    *a8 = *(_QWORD *)a2 < *(_QWORD *)Buf2;
                  }
                }
                else
                {
                  *a8 = *(_QWORD *)a2 > *(_QWORD *)Buf2;
                }
                goto LABEL_1273;
              case 10:
                v514 = v14 - 2;
                if ( !v514 )
                {
                  v251 = (float)(int)*(_QWORD *)a2 == *(float *)Buf2;
                  goto LABEL_584;
                }
                v515 = v514 - 1;
                if ( !v515 )
                {
LABEL_764:
                  v51 = (float)(int)*(_QWORD *)a2;
LABEL_90:
                  v52 = v51 < *(float *)Buf2;
                  v53 = v51 == *(float *)Buf2;
                  goto LABEL_91;
                }
                v516 = v515 - 1;
                if ( !v516 )
                {
LABEL_763:
                  v307 = (float)(int)*(_QWORD *)a2;
                  v52 = *(float *)Buf2 < v307;
                  v53 = *(float *)Buf2 == v307;
                  goto LABEL_91;
                }
                v306 = v516 - 1;
                if ( !v306 )
                {
LABEL_762:
                  v38 = (float)(int)*(_QWORD *)a2 < *(float *)Buf2;
                  goto LABEL_68;
                }
                goto LABEL_760;
              case 11:
              case 15:
LABEL_766:
                v308 = v14 - 2;
                if ( !v308 )
                {
                  v243 = (double)(int)*(_QWORD *)a2;
                  goto LABEL_365;
                }
                v309 = v308 - 1;
                if ( !v309 )
                {
                  v313 = (double)(int)*(_QWORD *)a2;
                  v52 = v313 < *(double *)Buf2;
                  v53 = v313 == *(double *)Buf2;
                  goto LABEL_91;
                }
                v310 = v309 - 1;
                if ( !v310 )
                {
                  v312 = (double)(int)*(_QWORD *)a2;
                  v52 = *(double *)Buf2 < v312;
                  v53 = *(double *)Buf2 == v312;
                  goto LABEL_91;
                }
                v311 = v310 - 1;
                if ( v311 )
                {
                  if ( v311 != 1 )
                    goto LABEL_22;
                  v38 = *(double *)Buf2 < (double)(int)*(_QWORD *)a2;
                }
                else
                {
                  v38 = (double)(int)*(_QWORD *)a2 < *(double *)Buf2;
                }
                break;
              default:
                goto LABEL_22;
            }
            goto LABEL_68;
          case 0xFu:
            switch ( a5 )
            {
              case 2:
                v517 = v14 - 2;
                if ( !v517 )
                {
LABEL_1019:
                  v437 = *(char *)Buf2;
                  goto LABEL_1021;
                }
                v518 = v517 - 1;
                if ( !v518 )
                {
LABEL_1012:
                  v434 = *(char *)Buf2;
                  goto LABEL_1014;
                }
                v519 = v518 - 1;
                if ( !v519 )
                {
LABEL_1011:
                  v433 = (double)*(char *)Buf2;
                  v374 = v433 < *(double *)a2;
                  v375 = v433 == *(double *)a2;
                  goto LABEL_903;
                }
                v426 = v519 - 1;
                if ( !v426 )
                {
LABEL_1004:
                  v430 = *(char *)Buf2;
                  goto LABEL_1006;
                }
LABEL_999:
                if ( v426 != 1 )
                  goto LABEL_22;
                v427 = *(char *)Buf2;
                goto LABEL_1001;
              case 3:
                v520 = v14 - 2;
                if ( !v520 )
                {
LABEL_1035:
                  v437 = *(unsigned __int8 *)Buf2;
                  goto LABEL_1021;
                }
                v521 = v520 - 1;
                if ( !v521 )
                {
LABEL_1034:
                  v434 = *(unsigned __int8 *)Buf2;
                  goto LABEL_1014;
                }
                v522 = v521 - 1;
                if ( !v522 )
                {
LABEL_1033:
                  v444 = (double)*(unsigned __int8 *)Buf2;
                  v374 = v444 < *(double *)a2;
                  v375 = v444 == *(double *)a2;
                  goto LABEL_903;
                }
                v523 = v522 - 1;
                if ( !v523 )
                {
LABEL_1032:
                  v430 = *(unsigned __int8 *)Buf2;
                  goto LABEL_1006;
                }
                if ( v523 != 1 )
                  goto LABEL_22;
                v427 = *(unsigned __int8 *)Buf2;
                goto LABEL_1001;
              case 4:
                v524 = v14 - 2;
                if ( !v524 )
                {
LABEL_1045:
                  v437 = *(__int16 *)Buf2;
                  goto LABEL_1021;
                }
                v525 = v524 - 1;
                if ( !v525 )
                {
LABEL_1044:
                  v434 = *(__int16 *)Buf2;
                  goto LABEL_1014;
                }
                v526 = v525 - 1;
                if ( !v526 )
                {
LABEL_1043:
                  v449 = (double)*(__int16 *)Buf2;
                  v374 = v449 < *(double *)a2;
                  v375 = v449 == *(double *)a2;
                  goto LABEL_903;
                }
                v527 = v526 - 1;
                if ( !v527 )
                {
LABEL_1042:
                  v430 = *(__int16 *)Buf2;
                  goto LABEL_1006;
                }
                if ( v527 != 1 )
                  goto LABEL_22;
                v427 = *(__int16 *)Buf2;
                goto LABEL_1001;
              case 5:
                v528 = v14 - 2;
                if ( !v528 )
                {
LABEL_1020:
                  v437 = *(unsigned __int16 *)Buf2;
LABEL_1021:
                  v438 = _mm_cvtsi32_si128(v437);
                  goto LABEL_1023;
                }
                v529 = v528 - 1;
                if ( !v529 )
                {
LABEL_1013:
                  v434 = *(unsigned __int16 *)Buf2;
LABEL_1014:
                  v435 = _mm_cvtsi32_si128(v434);
                  goto LABEL_1016;
                }
                v530 = v529 - 1;
                if ( !v530 )
                {
LABEL_1052:
                  v454 = (double)*(unsigned __int16 *)Buf2;
                  v374 = v454 < *(double *)a2;
                  v375 = v454 == *(double *)a2;
                  goto LABEL_903;
                }
                v531 = v530 - 1;
                if ( !v531 )
                {
LABEL_1005:
                  v430 = *(unsigned __int16 *)Buf2;
LABEL_1006:
                  v431 = _mm_cvtsi32_si128(v430);
                  goto LABEL_1008;
                }
                if ( v531 != 1 )
                  goto LABEL_22;
                v427 = *(unsigned __int16 *)Buf2;
LABEL_1001:
                v428 = _mm_cvtsi32_si128(v427);
                goto LABEL_1002;
              case 6:
                v532 = v14 - 2;
                if ( !v532 )
                {
LABEL_1022:
                  v438 = _mm_cvtsi32_si128(*Buf2);
LABEL_1023:
                  *(_QWORD *)&v439 = *(_OWORD *)&_mm_cvtepi32_pd(v438);
                  goto LABEL_1025;
                }
                v533 = v532 - 1;
                if ( !v533 )
                {
LABEL_1015:
                  v435 = _mm_cvtsi32_si128(*Buf2);
LABEL_1016:
                  *(_QWORD *)&v436 = *(_OWORD *)&_mm_cvtepi32_pd(v435);
                  goto LABEL_1018;
                }
                v534 = v533 - 1;
                if ( !v534 )
                {
LABEL_1059:
                  v459 = (double)(int)*Buf2;
                  v374 = v459 < *(double *)a2;
                  v375 = v459 == *(double *)a2;
                  goto LABEL_903;
                }
                v535 = v534 - 1;
                if ( !v535 )
                {
LABEL_1007:
                  v431 = _mm_cvtsi32_si128(*Buf2);
LABEL_1008:
                  *(_QWORD *)&v432 = *(_OWORD *)&_mm_cvtepi32_pd(v431);
                  goto LABEL_1010;
                }
                if ( v535 != 1 )
                  goto LABEL_22;
                v428 = _mm_cvtsi32_si128(*Buf2);
LABEL_1002:
                *(_QWORD *)&v429 = *(_OWORD *)&_mm_cvtepi32_pd(v428);
                goto LABEL_1003;
              case 7:
                v536 = v14 - 2;
                if ( !v536 )
                {
LABEL_1069:
                  v439 = (double)(int)*Buf2;
                  goto LABEL_1025;
                }
                v537 = v536 - 1;
                if ( !v537 )
                {
LABEL_1068:
                  v436 = (double)(int)*Buf2;
                  goto LABEL_1018;
                }
                v538 = v537 - 1;
                if ( !v538 )
                {
LABEL_1067:
                  v464 = (double)(int)*Buf2;
                  v374 = v464 < *(double *)a2;
                  v375 = v464 == *(double *)a2;
                  goto LABEL_903;
                }
                v539 = v538 - 1;
                if ( !v539 )
                {
LABEL_1066:
                  v432 = (double)(int)*Buf2;
                  goto LABEL_1010;
                }
                if ( v539 != 1 )
                  goto LABEL_22;
                v429 = (double)(int)*Buf2;
                goto LABEL_1003;
              case 8:
              case 14:
                v540 = v14 - 2;
                if ( !v540 )
                {
LABEL_1079:
                  v439 = (double)(int)*(_QWORD *)Buf2;
                  goto LABEL_1025;
                }
                v541 = v540 - 1;
                if ( !v541 )
                {
LABEL_1078:
                  v436 = (double)(int)*(_QWORD *)Buf2;
                  goto LABEL_1018;
                }
                v542 = v541 - 1;
                if ( !v542 )
                {
LABEL_1077:
                  v469 = (double)(int)*(_QWORD *)Buf2;
                  v374 = v469 < *(double *)a2;
                  v375 = v469 == *(double *)a2;
                  goto LABEL_903;
                }
                v543 = v542 - 1;
                if ( !v543 )
                {
LABEL_1076:
                  v432 = (double)(int)*(_QWORD *)Buf2;
                  goto LABEL_1010;
                }
                if ( v543 != 1 )
                  goto LABEL_22;
                v429 = (double)(int)*(_QWORD *)Buf2;
                goto LABEL_1003;
              case 9:
                v544 = v14 - 2;
                if ( !v544 )
                {
LABEL_1099:
                  v480 = *(_QWORD *)Buf2;
                  if ( *(__int64 *)Buf2 < 0 )
                    v439 = (double)(int)(*Buf2 & 1 | (v480 >> 1)) + (double)(int)(*Buf2 & 1 | (v480 >> 1));
                  else
                    v439 = (double)(int)v480;
                  goto LABEL_1025;
                }
                v545 = v544 - 1;
                if ( !v545 )
                {
LABEL_1096:
                  v479 = *(_QWORD *)Buf2;
                  if ( *(__int64 *)Buf2 < 0 )
                    v436 = (double)(int)(*Buf2 & 1 | (v479 >> 1)) + (double)(int)(*Buf2 & 1 | (v479 >> 1));
                  else
                    v436 = (double)(int)v479;
                  goto LABEL_1018;
                }
                v546 = v545 - 1;
                if ( !v546 )
                {
LABEL_1092:
                  v477 = *(_QWORD *)Buf2;
                  if ( *(__int64 *)Buf2 < 0 )
                    v478 = (double)(int)(*Buf2 & 1 | (v477 >> 1)) + (double)(int)(*Buf2 & 1 | (v477 >> 1));
                  else
                    v478 = (double)(int)v477;
                  v374 = v478 < *(double *)a2;
                  v375 = v478 == *(double *)a2;
                  goto LABEL_903;
                }
                v547 = v546 - 1;
                if ( !v547 )
                {
LABEL_1089:
                  v476 = *(_QWORD *)Buf2;
                  if ( *(__int64 *)Buf2 < 0 )
                    v432 = (double)(int)(*Buf2 & 1 | (v476 >> 1)) + (double)(int)(*Buf2 & 1 | (v476 >> 1));
                  else
                    v432 = (double)(int)v476;
                  goto LABEL_1010;
                }
                if ( v547 != 1 )
                  goto LABEL_22;
                v548 = *(_QWORD *)Buf2;
                if ( *(__int64 *)Buf2 < 0 )
                  v429 = (double)(int)(*Buf2 & 1 | (v548 >> 1)) + (double)(int)(*Buf2 & 1 | (v548 >> 1));
                else
                  v429 = (double)(int)v548;
                goto LABEL_1003;
              case 10:
                v549 = v14 - 2;
                if ( v549 )
                {
                  v550 = v549 - 1;
                  if ( v550 )
                  {
                    v551 = v550 - 1;
                    if ( v551 )
                    {
                      v552 = v551 - 1;
                      if ( v552 )
                      {
                        if ( v552 != 1 )
                          goto LABEL_22;
                        v429 = *(float *)Buf2;
LABEL_1003:
                        v369 = v429 < *(double *)a2;
                      }
                      else
                      {
LABEL_1009:
                        v432 = *(float *)Buf2;
LABEL_1010:
                        v369 = *(double *)a2 < v432;
                      }
LABEL_892:
                      v15 = !v369;
                      goto LABEL_10;
                    }
LABEL_1108:
                    v485 = *(float *)Buf2;
                    v374 = v485 < *(double *)a2;
                    v375 = v485 == *(double *)a2;
                  }
                  else
                  {
LABEL_1017:
                    v436 = *(float *)Buf2;
LABEL_1018:
                    v374 = *(double *)a2 < v436;
                    v375 = *(double *)a2 == v436;
                  }
LABEL_903:
                  v15 = !v374 && !v375;
                  goto LABEL_10;
                }
LABEL_1024:
                v439 = *(float *)Buf2;
LABEL_1025:
                v251 = *(double *)a2 == v439;
                goto LABEL_584;
              case 11:
              case 15:
LABEL_1109:
                v486 = v14 - 2;
                if ( !v486 )
                {
                  v243 = *(double *)a2;
LABEL_365:
                  v244 = v243 == *(double *)Buf2;
LABEL_366:
                  v15 = 1;
                  if ( v244 )
                    goto LABEL_10;
                  goto LABEL_9;
                }
                v487 = v486 - 1;
                if ( v487 )
                {
                  v488 = v487 - 1;
                  if ( v488 )
                  {
                    v489 = v488 - 1;
                    if ( v489 )
                    {
                      if ( v489 != 1 )
                        goto LABEL_22;
                      v38 = *(double *)Buf2 < *(double *)a2;
                    }
                    else
                    {
                      v38 = *(double *)a2 < *(double *)Buf2;
                    }
LABEL_68:
                    *a8 = !v38;
                    goto LABEL_1273;
                  }
                  v52 = *(double *)Buf2 < *(double *)a2;
                  v53 = *(double *)Buf2 == *(double *)a2;
                }
                else
                {
                  v52 = *(double *)a2 < *(double *)Buf2;
                  v53 = *(double *)a2 == *(double *)Buf2;
                }
LABEL_91:
                v54 = !v52 && !v53;
                goto LABEL_92;
              default:
                goto LABEL_22;
            }
          case 0x10u:
            if ( a5 != 16 )
              goto LABEL_22;
            v553 = v14 - 2;
            if ( v553 )
            {
              v554 = v553 - 1;
              if ( v554 )
              {
                v555 = v554 - 1;
                if ( v555 )
                {
                  v556 = v555 - 1;
                  if ( v556 )
                  {
                    if ( v556 != 1 )
                      goto LABEL_22;
                    if ( (unsigned int)CompareFileTimeType(a2, Buf2) != -1 )
                    {
LABEL_1249:
                      v15 = CompareFileTimeType(a2, Buf2) == 0;
                      goto LABEL_10;
                    }
                  }
                  else if ( (unsigned int)CompareFileTimeType(a2, Buf2) != 1 )
                  {
                    goto LABEL_1249;
                  }
LABEL_344:
                  v15 = 1;
                  goto LABEL_10;
                }
                v54 = CompareFileTimeType(a2, Buf2) == -1;
              }
              else
              {
                v54 = CompareFileTimeType(a2, Buf2) == 1;
              }
            }
            else
            {
              v54 = CompareFileTimeType(a2, Buf2) == 0;
            }
LABEL_92:
            *a8 = v54;
            goto LABEL_1273;
          case 0x11u:
            if ( v14 != 2 || a5 != 17 )
              goto LABEL_22;
LABEL_315:
            *a8 = *a2 == *(_BYTE *)Buf2;
            goto LABEL_1273;
          case 0x12u:
            if ( a5 != 18 )
              goto LABEL_22;
            if ( v14 == 11 )
              goto LABEL_19;
            if ( v14 != 2 )
            {
              if ( v14 - 9 > 1 )
                goto LABEL_22;
LABEL_19:
              v15 = SubstringMatch(a2, Buf2);
              goto LABEL_10;
            }
LABEL_596:
            if ( !v13 )
              goto LABEL_341;
            if ( (_DWORD)v8 && (_DWORD)v8 == a7 )
              *a8 = wcsicmp((const wchar_t *)a2, (const wchar_t *)Buf2) == 0;
            goto LABEL_1273;
          case 0x15u:
            if ( a5 != 21 || v14 != 2 )
              goto LABEL_22;
            if ( *((_DWORD *)a2 + 4) != Buf2[4] )
              goto LABEL_9;
            v557 = *(_QWORD *)a2 - *(_QWORD *)Buf2;
            if ( *(_QWORD *)a2 == *(_QWORD *)Buf2 )
              v557 = *((_QWORD *)a2 + 1) - *((_QWORD *)Buf2 + 1);
            v244 = v557 == 0;
            goto LABEL_366;
          case 0x16u:
            v558 = a5 == 22;
            goto LABEL_1263;
          case 0x17u:
            if ( a5 != 23 || v14 != 2 )
              goto LABEL_22;
            if ( (_DWORD)v8 != a7 )
              goto LABEL_9;
            if ( !(_DWORD)v8 )
              goto LABEL_344;
            if ( memcmp(a2, Buf2, v8) )
              goto LABEL_9;
            v15 = 1;
            goto LABEL_10;
          case 0x18u:
            v558 = a5 == 24;
LABEL_1263:
            if ( !v558 || v14 != 2 )
              goto LABEL_22;
LABEL_1265:
            *a8 = *(_DWORD *)a2 == *Buf2;
            goto LABEL_1273;
          case 0x19u:
            if ( (a5 == 18 || a5 == 25) && v14 == 2 )
              goto LABEL_596;
            goto LABEL_22;
          default:
            goto LABEL_22;
        }
      }
      v237 = v14 == 2;
    }
    if ( !v237 )
      goto LABEL_22;
LABEL_341:
    if ( (_DWORD)v8 != a7 || (_DWORD)v8 && memcmp(a2, Buf2, v8) )
      goto LABEL_9;
    goto LABEL_344;
  }
LABEL_1273:
  if ( v12 )
  {
    LOBYTE(v10) = *a8 == 0;
    *a8 = v10;
  }
  return v11;
}
