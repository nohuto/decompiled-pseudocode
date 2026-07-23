/*
 * XREFs of LZ4HC_compress_generic_dictCtx @ 0x1406303C4
 * Callers:
 *     LZ4HC_compress_generic @ 0x14062DBFC (LZ4HC_compress_generic.c)
 * Callees:
 *     LZ4HC_countPattern @ 0x140637E48 (LZ4HC_countPattern.c)
 *     LZ4HC_reverseCountPattern @ 0x140637F38 (LZ4HC_reverseCountPattern.c)
 *     LZ4HC_rotatePattern @ 0x140637F80 (LZ4HC_rotatePattern.c)
 *     LZ4HC_setExternalDict @ 0x140637F98 (LZ4HC_setExternalDict.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall LZ4HC_compress_generic_dictCtx(
        unsigned int *a1,
        char *Src,
        _BYTE *a3,
        int *a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v7; // r10
  unsigned int *v8; // rdi
  int *v9; // r12
  unsigned __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rax
  _DWORD *v15; // r13
  char *v16; // r8
  char *v17; // r11
  __int64 v18; // rdx
  char *v19; // r12
  char *v20; // r9
  _BYTE *v21; // r14
  unsigned __int64 v22; // rbx
  int v23; // edi
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  unsigned int v26; // ebx
  __int64 v27; // r13
  unsigned int v28; // r11d
  unsigned int v29; // r12d
  int v30; // r9d
  unsigned int v31; // r10d
  unsigned int *v32; // rax
  unsigned int v33; // r8d
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  _DWORD *v37; // r8
  unsigned int v38; // r11d
  int v39; // r15d
  _DWORD *v40; // rbx
  __int64 v41; // rax
  char *v42; // rcx
  int v43; // ebx
  _QWORD *v44; // rdx
  unsigned __int64 v45; // rax
  _DWORD *v46; // r9
  unsigned __int64 v47; // r8
  unsigned int v51; // ecx
  int v53; // r14d
  signed int v54; // ecx
  bool v55; // cc
  char *v56; // rdi
  char *v57; // rdx
  char *v58; // rcx
  int v59; // edi
  unsigned __int64 v60; // rax
  char *v61; // r9
  unsigned __int64 v62; // r10
  unsigned __int64 v63; // r8
  _QWORD *v64; // rdx
  unsigned int v68; // ecx
  signed int v70; // ebx
  char *v71; // r8
  _QWORD *v72; // rdx
  char *v73; // rcx
  unsigned __int64 v74; // rax
  char *v75; // r10
  unsigned __int64 v76; // r9
  unsigned int v79; // ecx
  unsigned int v82; // esi
  unsigned int v83; // r9d
  bool v84; // cf
  unsigned __int64 v85; // r11
  int v86; // r15d
  char *v87; // rbx
  char *v88; // r11
  unsigned __int64 v89; // rdi
  char *v90; // r11
  __int64 v91; // r8
  __int64 v92; // rcx
  char *v93; // rdx
  unsigned int v94; // eax
  char *v95; // r8
  unsigned int v96; // r11d
  __int64 v97; // r8
  __int64 v98; // rcx
  int v99; // eax
  int v100; // r11d
  unsigned int v101; // eax
  unsigned int v102; // r11d
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  __int64 v105; // rcx
  unsigned int v106; // ecx
  char *v107; // r10
  _DWORD *v108; // rcx
  int v109; // esi
  int v110; // r9d
  char *v111; // rax
  char *v112; // r12
  __int64 v113; // r8
  __int64 v114; // r13
  unsigned int v115; // edx
  _QWORD *v116; // rbx
  unsigned int v117; // esi
  int v118; // r10d
  unsigned int v119; // edx
  int v120; // r9d
  unsigned int v121; // edi
  unsigned int v122; // r8d
  __int64 v123; // r9
  unsigned __int64 v124; // rdx
  unsigned __int64 v125; // rcx
  unsigned int v126; // esi
  __int64 v127; // r8
  int v128; // r14d
  _DWORD *v129; // rdi
  int v130; // r10d
  _DWORD *v131; // r8
  int v132; // edx
  __int64 v133; // rcx
  signed __int64 v134; // rbx
  unsigned int v135; // eax
  __int64 v136; // r9
  _BYTE *v137; // rdx
  char *v138; // rcx
  _QWORD *v139; // rdx
  int v140; // edi
  unsigned __int64 v141; // rax
  _DWORD *v142; // r9
  unsigned __int64 v143; // r8
  unsigned int v147; // ecx
  int v149; // ecx
  __int64 v150; // rdi
  unsigned int v151; // r15d
  unsigned int v152; // r14d
  _DWORD *v153; // r15
  _QWORD *v154; // rdx
  char *v155; // r10
  char *v156; // rcx
  int v157; // edi
  unsigned __int64 v158; // rax
  unsigned __int64 v159; // r9
  unsigned __int64 v160; // r8
  unsigned int v164; // ecx
  unsigned __int64 v166; // rbx
  signed int v167; // edi
  char *v168; // r9
  _QWORD *v169; // rdx
  char *v170; // rcx
  unsigned __int64 v171; // rax
  char *v172; // r10
  unsigned __int64 v173; // r8
  unsigned int v176; // ecx
  int v179; // edx
  _DWORD *v180; // r9
  signed int v181; // r8d
  __int64 v182; // rcx
  unsigned __int64 v183; // rbx
  unsigned int v184; // eax
  __int64 v185; // r10
  _BYTE *v186; // r8
  int v187; // edi
  unsigned int v188; // ebx
  unsigned __int64 v189; // rdi
  int v190; // r12d
  _DWORD *v191; // rbx
  char *v192; // rsi
  unsigned __int64 v193; // rdi
  __int64 v194; // r11
  __int64 v195; // r8
  __int64 v196; // rcx
  __int64 v197; // rdx
  unsigned int v198; // eax
  __int64 v199; // r8
  _DWORD *v200; // r11
  unsigned int v201; // esi
  __int64 v202; // rcx
  unsigned int v203; // eax
  unsigned __int64 v204; // rcx
  unsigned __int64 v205; // rdx
  unsigned int v206; // ecx
  unsigned __int64 v207; // r12
  int v208; // edx
  int v209; // ecx
  unsigned __int64 v210; // rax
  unsigned int *v211; // r11
  __int64 v212; // r9
  __int64 v213; // r12
  unsigned int v214; // edx
  _QWORD *v215; // r8
  unsigned int v216; // r13d
  int v217; // r10d
  unsigned int v218; // ebx
  unsigned int v219; // r9d
  unsigned int v220; // edx
  _DWORD *v221; // r8
  unsigned __int64 v222; // rdx
  unsigned __int64 v223; // rcx
  unsigned __int64 v224; // rcx
  unsigned int v225; // r11d
  unsigned int v226; // r13d
  __int64 v227; // r9
  int v228; // r10d
  int v229; // ecx
  _DWORD *v230; // rbx
  unsigned int v231; // esi
  int v232; // edx
  unsigned __int64 v233; // r8
  __int64 v234; // rcx
  char *v235; // r11
  unsigned int v236; // eax
  __int64 v237; // r9
  _BYTE *v238; // rdx
  char *v239; // rcx
  _QWORD *v240; // rdx
  int v241; // r11d
  char *v242; // rbx
  unsigned int v245; // ecx
  int v248; // ecx
  unsigned int v249; // r15d
  __int64 v250; // rbx
  _DWORD *v251; // rsi
  char *v252; // rcx
  _QWORD *v253; // rdx
  char *v254; // r9
  int v255; // r11d
  unsigned int v258; // ecx
  signed int v261; // r11d
  char *v262; // r10
  _QWORD *v263; // rdx
  char *v264; // rcx
  unsigned int v268; // ecx
  int v270; // edx
  _DWORD *v271; // r9
  int v272; // r8d
  signed __int64 v273; // rbx
  __int64 v274; // rcx
  char *v275; // rsi
  unsigned int v276; // eax
  __int64 v277; // r10
  _BYTE *v278; // r8
  int v279; // r11d
  int v280; // r12d
  _DWORD *v281; // rbx
  _QWORD *v282; // rdi
  char *v283; // r11
  unsigned __int64 v284; // rsi
  _DWORD *v285; // r11
  unsigned int v286; // edi
  __int64 v287; // r8
  __int64 v288; // rcx
  _QWORD *v289; // r13
  _QWORD *v290; // rdx
  unsigned int v291; // eax
  _QWORD *v292; // r8
  bool v293; // zf
  unsigned int v294; // r11d
  __int64 v295; // r8
  __int64 v296; // rcx
  int v297; // eax
  int v298; // r11d
  unsigned int v299; // eax
  unsigned __int64 v300; // rcx
  unsigned __int64 v301; // rdx
  unsigned int v302; // ecx
  unsigned __int64 v303; // rbx
  int v304; // eax
  _DWORD *v305; // r13
  unsigned __int64 v306; // rcx
  int v307; // ecx
  _DWORD *v308; // r11
  _BYTE *v309; // r15
  char *v310; // rsi
  _BYTE *v311; // r8
  char *v312; // r10
  unsigned __int64 v313; // r12
  _BYTE *v314; // r14
  unsigned __int64 v315; // r13
  unsigned __int128 v316; // rax
  _QWORD *v317; // rcx
  _WORD *v318; // r14
  unsigned __int64 v319; // rcx
  char v320; // al
  unsigned __int64 v321; // rcx
  unsigned __int64 v322; // rdx
  _BYTE *v323; // r14
  char *v324; // rax
  int v325; // ecx
  _DWORD *v326; // r11
  _BYTE *v327; // r8
  char *v328; // r10
  unsigned __int64 v329; // r12
  _BYTE *v330; // r14
  unsigned __int64 v331; // r13
  unsigned __int128 v332; // rax
  _QWORD *v333; // rcx
  _WORD *v334; // r14
  unsigned __int64 v335; // rcx
  char v336; // al
  unsigned __int64 v337; // rcx
  unsigned __int64 v338; // rdx
  _BYTE *v339; // r14
  char *v340; // r13
  char *v341; // r9
  _BYTE *v342; // r14
  unsigned __int64 v343; // rsi
  unsigned __int64 v344; // r12
  unsigned __int128 v345; // rax
  _QWORD *v346; // rcx
  _WORD *v347; // r14
  _BYTE *v348; // r14
  unsigned __int64 v349; // rcx
  char v350; // al
  unsigned __int64 v351; // rcx
  unsigned __int64 v352; // rdx
  _BYTE *v353; // r14
  char *v354; // r13
  char *v355; // r9
  unsigned __int64 v356; // rsi
  _BYTE *v357; // r14
  unsigned __int64 v358; // r12
  unsigned __int128 v359; // rax
  _QWORD *v360; // rcx
  _WORD *v361; // r14
  unsigned __int64 v362; // rcx
  char v363; // al
  unsigned __int64 v364; // rcx
  unsigned __int64 v365; // rdx
  _BYTE *v366; // r14
  _BYTE *v367; // r12
  char *v368; // r13
  _BYTE *v369; // r14
  unsigned __int64 v370; // rdi
  unsigned __int64 v371; // rsi
  unsigned __int128 v372; // rax
  _QWORD *v373; // rcx
  _WORD *v374; // r14
  unsigned __int64 v375; // rcx
  char v376; // al
  unsigned __int64 v377; // rcx
  unsigned __int64 v378; // rdx
  _BYTE *v379; // r14
  unsigned __int64 v380; // rdi
  unsigned __int64 v381; // r8
  _BYTE *v382; // r14
  unsigned __int64 v383; // rsi
  unsigned __int128 v384; // rax
  _QWORD *v385; // rcx
  __int64 v386; // r11
  _WORD *v387; // r14
  unsigned __int64 v388; // rcx
  char v389; // al
  unsigned __int64 v390; // rcx
  unsigned __int64 v391; // rdx
  _BYTE *v392; // r14
  int v393; // r14d
  size_t v394; // r12
  _BYTE *v395; // r8
  int v396; // esi
  size_t v397; // rdi
  unsigned __int128 v398; // rax
  unsigned int v400; // r13d
  __int64 v401; // rax
  char *v402; // rbx
  __int64 v403; // rdx
  char *v404; // r10
  _BYTE *v405; // rcx
  char *v406; // r15
  char *v407; // rdi
  _BYTE *v408; // r14
  _BYTE *v409; // rsi
  int v410; // esi
  __int64 v411; // r9
  __int64 v412; // r13
  unsigned int v413; // r8d
  _QWORD *v414; // r12
  unsigned int v415; // edx
  int v416; // edx
  int v417; // r15d
  unsigned int v418; // ebx
  unsigned int v419; // r10d
  unsigned int v420; // r9d
  _DWORD *v421; // r8
  unsigned __int64 v422; // rdx
  unsigned __int64 v423; // rcx
  _DWORD *v424; // r10
  unsigned int v425; // r11d
  __int64 v426; // r8
  char *v427; // rcx
  _QWORD *v428; // rdx
  int v429; // r10d
  unsigned int v432; // ecx
  signed int v435; // ecx
  unsigned int v436; // ebx
  _DWORD *v437; // rdx
  char *v438; // rcx
  int v439; // ebx
  char *v440; // r8
  _QWORD *v441; // rdx
  unsigned int v444; // ecx
  signed int v447; // r10d
  char *v448; // r9
  _QWORD *v449; // rdx
  char *v450; // rcx
  unsigned int v454; // ecx
  unsigned int v456; // esi
  char *v457; // rdi
  unsigned int v458; // eax
  unsigned __int64 v459; // r11
  int v460; // r15d
  _DWORD *v461; // rbx
  char *v462; // r11
  unsigned __int64 v463; // rdi
  _DWORD *v464; // r11
  unsigned int v465; // eax
  _QWORD *v466; // rdx
  unsigned int v467; // eax
  unsigned int v468; // r11d
  unsigned int v469; // eax
  int v470; // eax
  int v471; // r11d
  unsigned int v472; // eax
  unsigned int v473; // r11d
  unsigned __int64 v474; // rcx
  unsigned __int64 v475; // rdx
  unsigned int v476; // ecx
  _DWORD *v477; // rcx
  int v478; // r9d
  unsigned __int64 v479; // rax
  int v480; // r8d
  unsigned int *v481; // rbx
  __int64 v482; // r10
  unsigned int v483; // r12d
  __int64 v484; // rdx
  unsigned int v485; // r9d
  _QWORD *v486; // r15
  unsigned int v487; // esi
  __int64 v488; // rcx
  unsigned int v489; // edi
  int v490; // r10d
  unsigned int *v491; // rdx
  unsigned int v492; // r9d
  _DWORD *v493; // r8
  unsigned __int64 v494; // rdx
  unsigned __int64 v495; // rcx
  unsigned __int64 v496; // rcx
  unsigned int v497; // ebx
  __int64 v498; // r9
  unsigned int v499; // esi
  __int64 v500; // r11
  int v501; // edx
  int v502; // r10d
  int v503; // ecx
  _DWORD *v504; // rdi
  __int64 v505; // rcx
  _DWORD *v506; // r8
  __int64 v507; // rax
  int v508; // edx
  unsigned __int64 v509; // rbx
  unsigned int v510; // eax
  __int64 v511; // r9
  _BYTE *v512; // rdx
  char *v513; // r12
  char *v514; // rcx
  _QWORD *v515; // rdx
  int v516; // ebx
  unsigned int v519; // ecx
  int v522; // ecx
  unsigned int v523; // r15d
  __int64 v524; // r12
  _DWORD *v525; // r15
  char *v526; // rcx
  _QWORD *v527; // rdx
  char *v528; // r9
  int v529; // ebx
  unsigned int v532; // ecx
  signed int v535; // edi
  char *v536; // r10
  _QWORD *v537; // rdx
  char *v538; // rcx
  unsigned int v542; // ecx
  int v544; // edx
  _DWORD *v545; // r9
  int v546; // r8d
  __int64 v547; // r12
  __int64 v548; // rcx
  unsigned __int64 v549; // rbx
  unsigned int v550; // eax
  __int64 v551; // r10
  _BYTE *v552; // r8
  int v553; // edi
  unsigned __int64 v554; // rdi
  int v555; // esi
  int v556; // r12d
  _DWORD *v557; // rbx
  char *v558; // rsi
  unsigned __int64 v559; // rdi
  unsigned int v560; // eax
  _QWORD *v561; // rdx
  unsigned int v562; // eax
  _QWORD *v563; // r8
  unsigned int v564; // esi
  unsigned int v565; // eax
  unsigned __int64 v566; // rdx
  unsigned int v567; // eax
  unsigned __int64 v568; // rcx
  unsigned int v569; // ecx
  unsigned __int64 v570; // r12
  int v571; // edx
  int v572; // ecx
  unsigned __int64 v573; // rax
  unsigned int *v574; // rbx
  int v575; // r8d
  __int64 v576; // r10
  __int64 v577; // r9
  _QWORD *v578; // r15
  unsigned int v579; // edx
  __int64 v580; // rcx
  int v581; // r11d
  int v582; // r12d
  __int64 v583; // rdx
  unsigned int v584; // r9d
  unsigned int v585; // edx
  unsigned int v586; // r10d
  _DWORD *v587; // r8
  unsigned __int64 v588; // rdx
  unsigned __int64 v589; // rcx
  __int64 v590; // r9
  unsigned int v591; // r11d
  unsigned int v592; // r13d
  int v593; // r10d
  int v594; // ecx
  unsigned int v595; // esi
  _DWORD *v596; // rbx
  int v597; // r10d
  int v598; // edx
  unsigned __int64 v599; // r8
  __int64 v600; // rcx
  __int64 v601; // rax
  char *v602; // r11
  unsigned int v603; // eax
  __int64 v604; // r9
  _BYTE *v605; // rdx
  char *v606; // rcx
  _QWORD *v607; // rdx
  int v608; // r11d
  unsigned int v611; // ecx
  unsigned int v614; // ebx
  int v615; // ecx
  __int64 v616; // r15
  _DWORD *v617; // rsi
  char *v618; // rcx
  _QWORD *v619; // rdx
  char *v620; // r9
  int v621; // r11d
  unsigned int v624; // ecx
  signed int v627; // ebx
  char *v628; // r10
  _QWORD *v629; // rdx
  char *v630; // rcx
  unsigned int v634; // ecx
  int v636; // edx
  _DWORD *v637; // r9
  int v638; // r8d
  signed __int64 v639; // r15
  __int64 v640; // rcx
  unsigned __int64 v641; // r11
  unsigned int v642; // eax
  __int64 v643; // r10
  _BYTE *v644; // r8
  int v645; // ebx
  unsigned int v646; // r15d
  _DWORD *v647; // rbx
  char *v648; // r11
  unsigned __int64 v649; // rsi
  _DWORD *v650; // r11
  unsigned int v651; // eax
  _QWORD *v652; // rdx
  unsigned int v653; // eax
  _QWORD *v654; // r8
  unsigned int v655; // r11d
  unsigned int v656; // eax
  int v657; // eax
  int v658; // r11d
  unsigned int v659; // eax
  unsigned __int64 v660; // rcx
  unsigned __int64 v661; // rdx
  unsigned int v662; // ecx
  unsigned __int64 v663; // rbx
  int v664; // eax
  unsigned __int64 v665; // rcx
  int v666; // ecx
  char *v667; // rcx
  char *v668; // rsi
  _BYTE *v669; // r15
  _BYTE *v670; // r8
  char *v671; // r10
  unsigned __int64 v672; // r13
  _BYTE *v673; // r14
  unsigned __int64 v674; // r12
  unsigned __int128 v675; // rax
  _QWORD *v676; // rcx
  _WORD *v677; // r14
  unsigned __int64 v678; // rcx
  char v679; // al
  unsigned __int64 v680; // rcx
  unsigned __int64 v681; // rdx
  _BYTE *v682; // r14
  int v683; // ecx
  _BYTE *v684; // r8
  char *v685; // r10
  unsigned __int64 v686; // r13
  _BYTE *v687; // r14
  unsigned __int64 v688; // r12
  unsigned __int128 v689; // rax
  _QWORD *v690; // rcx
  _WORD *v691; // r14
  unsigned __int64 v692; // rcx
  char v693; // al
  unsigned __int64 v694; // rcx
  unsigned __int64 v695; // rdx
  _BYTE *v696; // r14
  char *v697; // r13
  char *v698; // r9
  _BYTE *v699; // r14
  unsigned __int64 v700; // rsi
  unsigned __int64 v701; // r12
  unsigned __int128 v702; // rax
  _QWORD *v703; // rcx
  _WORD *v704; // r14
  _BYTE *v705; // r14
  unsigned __int64 v706; // rcx
  char v707; // al
  unsigned __int64 v708; // rcx
  unsigned __int64 v709; // rdx
  _BYTE *v710; // r14
  char *v711; // r13
  char *v712; // r9
  unsigned __int64 v713; // rsi
  _BYTE *v714; // r14
  unsigned __int64 v715; // r12
  unsigned __int128 v716; // rax
  _QWORD *v717; // rcx
  _WORD *v718; // r14
  unsigned __int64 v719; // rcx
  char v720; // al
  unsigned __int64 v721; // rcx
  unsigned __int64 v722; // rdx
  _BYTE *v723; // r14
  _BYTE *v724; // r12
  char *v725; // r13
  _BYTE *v726; // r14
  unsigned __int64 v727; // rdi
  unsigned __int64 v728; // rsi
  unsigned __int128 v729; // rax
  _QWORD *v730; // rcx
  _WORD *v731; // r14
  unsigned __int64 v732; // rcx
  char v733; // al
  unsigned __int64 v734; // rcx
  unsigned __int64 v735; // rdx
  _BYTE *v736; // r14
  unsigned __int64 v737; // rdi
  unsigned __int64 v738; // r8
  _BYTE *v739; // r14
  unsigned __int64 v740; // rsi
  unsigned __int128 v741; // rax
  _QWORD *v742; // rcx
  __int64 v743; // rbx
  _WORD *v744; // r14
  unsigned __int64 v745; // rcx
  char v746; // al
  unsigned __int64 v747; // rcx
  unsigned __int64 v748; // rdx
  _BYTE *v749; // r14
  size_t v750; // r15
  _BYTE *v751; // r8
  int v752; // r15d
  int v753; // esi
  size_t v754; // rdi
  unsigned __int128 v755; // rax
  __int64 v756; // r11
  __int64 v757; // rax
  _BYTE *v758; // rcx
  char *v759; // r10
  __int64 v760; // rdx
  char *v761; // r9
  char *v762; // rbx
  char *v763; // r8
  _BYTE *v764; // r12
  _BYTE *v765; // r14
  __int64 v766; // r8
  int v767; // ebx
  unsigned int v768; // r15d
  __int64 v769; // r13
  _QWORD *v770; // r12
  unsigned int v771; // r10d
  unsigned int v772; // esi
  char *v773; // rdx
  int v774; // r8d
  unsigned int v775; // edi
  int v776; // edx
  unsigned int v777; // r9d
  _DWORD *v778; // r8
  unsigned __int64 v779; // rdx
  unsigned __int64 v780; // rcx
  unsigned int v781; // r11d
  unsigned int v782; // r14d
  int v783; // esi
  __int64 v784; // r8
  char *v785; // rcx
  int v786; // r10d
  _QWORD *v787; // rdx
  unsigned int v790; // ecx
  signed int v793; // ecx
  unsigned int v794; // ebx
  _DWORD *v795; // rdx
  char *v796; // r8
  char *v797; // rcx
  int v798; // ebx
  _QWORD *v799; // rdx
  unsigned int v802; // ecx
  signed int v805; // ebx
  char *v806; // r9
  _QWORD *v807; // rdx
  char *v808; // rcx
  unsigned int v812; // ecx
  unsigned int v814; // edi
  char *v815; // rsi
  int v816; // r15d
  _DWORD *v817; // rbx
  char *v818; // r11
  unsigned __int64 v819; // rsi
  _DWORD *v820; // r11
  unsigned int v821; // eax
  _QWORD *v822; // rdx
  unsigned int v823; // eax
  unsigned int v824; // r11d
  unsigned int v825; // eax
  int v826; // eax
  int v827; // r11d
  unsigned int v828; // eax
  unsigned int v829; // r11d
  unsigned __int64 v830; // rcx
  unsigned __int64 v831; // rdx
  unsigned int v832; // ecx
  _DWORD *v833; // r8
  __int64 v834; // r13
  __int64 v835; // r12
  __int64 v836; // rsi
  unsigned int v837; // ebx
  int v838; // r11d
  unsigned int v839; // r9d
  int v840; // r14d
  unsigned __int64 v841; // r8
  _QWORD *v842; // rdx
  _QWORD *v843; // rcx
  int v844; // r15d
  unsigned int v847; // ecx
  signed int v850; // ecx
  int v851; // ecx
  char *v852; // r9
  unsigned __int64 v853; // r11
  char *v854; // rcx
  char *v855; // r10
  int v856; // esi
  char *v857; // rax
  char *v858; // r12
  __int64 v859; // rdx
  __int64 v860; // r8
  unsigned int v861; // r15d
  _QWORD *v862; // rbx
  _QWORD *v863; // rdi
  unsigned int v864; // esi
  __int64 v865; // rcx
  __int64 v866; // r10
  int v867; // edx
  unsigned int v868; // r9d
  _DWORD *v869; // r8
  unsigned int *v870; // rbx
  unsigned __int64 v871; // rdx
  unsigned __int64 v872; // rcx
  unsigned int v873; // esi
  __int64 v874; // r11
  int v875; // ecx
  unsigned int v876; // r9d
  _DWORD *v877; // rdi
  int v878; // ebx
  __int64 v879; // rcx
  int v880; // edx
  _DWORD *v881; // r8
  __int64 v882; // rax
  signed __int64 v883; // r10
  unsigned int v884; // eax
  __int64 v885; // r9
  _BYTE *v886; // rdx
  char *v887; // rcx
  _QWORD *v888; // rdx
  int v889; // r10d
  unsigned int v892; // ecx
  int v895; // ecx
  __int64 v896; // r12
  _DWORD *v897; // r15
  _QWORD *v898; // rdx
  char *v899; // r9
  char *v900; // rcx
  int v901; // ebx
  unsigned int v904; // ecx
  signed int v907; // edi
  char *v908; // r10
  _QWORD *v909; // rdx
  char *v910; // rcx
  unsigned int v914; // ecx
  int v916; // edx
  _DWORD *v917; // r9
  int v918; // r8d
  __int64 v919; // r12
  __int64 v920; // rcx
  unsigned __int64 v921; // rbx
  unsigned int v922; // eax
  unsigned int v923; // ebx
  __int64 v924; // r10
  _BYTE *v925; // r8
  int v926; // edi
  unsigned int v927; // r15d
  int v928; // r12d
  _DWORD *v929; // rbx
  char *v930; // rsi
  unsigned __int64 v931; // rdi
  unsigned int v932; // eax
  _QWORD *v933; // rdx
  unsigned int v934; // eax
  unsigned int v935; // r8d
  unsigned int v936; // esi
  unsigned int v937; // eax
  unsigned int v938; // eax
  unsigned __int64 v939; // rcx
  unsigned __int64 v940; // rdx
  unsigned int v941; // ecx
  int v942; // r9d
  __int64 v943; // rdx
  __int64 v944; // r8
  __int64 v945; // r13
  unsigned int v946; // r12d
  unsigned int v947; // esi
  int v948; // eax
  _DWORD *v949; // rdi
  _QWORD *v950; // rcx
  _QWORD *v951; // rdx
  unsigned __int64 v952; // r9
  int v953; // ebx
  unsigned int v956; // ecx
  unsigned int v959; // ebx
  int v960; // edx
  _DWORD *v961; // r9
  int v962; // r8d
  __int64 v963; // rcx
  char *v964; // rdi
  unsigned int v965; // eax
  __int64 v966; // r10
  _BYTE *v967; // r8
  _BYTE *v968; // r9
  int v969; // ebx
  int v970; // ecx
  unsigned __int64 v971; // rdi
  int v972; // r8d
  unsigned __int64 v973; // r12
  int v974; // edx
  int v975; // ecx
  __int64 v976; // r15
  unsigned __int64 v977; // rax
  unsigned int v978; // edx
  __int64 v979; // rbx
  unsigned int v980; // esi
  _QWORD *v981; // r12
  char *v982; // r8
  unsigned int v983; // r13d
  __int64 v984; // rcx
  __int64 v985; // r10
  int v986; // edx
  unsigned int *v987; // rax
  unsigned int v988; // r9d
  _DWORD *v989; // r8
  unsigned __int64 v990; // rdx
  unsigned __int64 v991; // rcx
  char *v992; // r9
  unsigned int v993; // r13d
  int v994; // edi
  _DWORD *v995; // rbx
  __int64 v996; // rax
  unsigned int v997; // r10d
  int v998; // r11d
  __int64 v999; // rcx
  int v1000; // edx
  char *v1001; // r8
  __int64 v1002; // rax
  signed __int64 v1003; // r10
  unsigned int v1004; // eax
  __int64 v1005; // r9
  _BYTE *v1006; // rdx
  char *v1007; // rcx
  _QWORD *v1008; // rdx
  int v1009; // r10d
  char *v1010; // rbx
  unsigned int v1013; // ecx
  int v1016; // ecx
  __int64 v1017; // r15
  char *v1018; // rsi
  _QWORD *v1019; // rdx
  char *v1020; // r9
  char *v1021; // rcx
  int v1022; // r11d
  unsigned int v1025; // ecx
  signed int v1028; // ebx
  char *v1029; // r10
  _QWORD *v1030; // rdx
  char *v1031; // rcx
  unsigned int v1035; // ecx
  __int64 v1037; // rcx
  int v1038; // edx
  char *v1039; // r10
  int v1040; // r8d
  signed __int64 v1041; // r15
  signed __int64 v1042; // r11
  unsigned int v1043; // eax
  __int64 v1044; // r10
  _BYTE *v1045; // r8
  int v1046; // ebx
  unsigned int v1047; // r15d
  int v1048; // r12d
  char *v1049; // rbx
  char *v1050; // r11
  unsigned __int64 v1051; // rsi
  char *v1052; // r11
  unsigned int v1053; // eax
  char *v1054; // r13
  char *v1055; // rdx
  unsigned int v1056; // eax
  unsigned int v1057; // r8d
  unsigned int v1058; // r11d
  unsigned int v1059; // eax
  int v1060; // eax
  int v1061; // r11d
  unsigned __int64 v1062; // rcx
  unsigned __int64 v1063; // rdx
  unsigned int v1064; // ecx
  char *v1065; // r10
  __int64 v1066; // r8
  __int64 v1067; // r9
  unsigned int v1068; // r13d
  int v1069; // r12d
  unsigned int v1070; // r15d
  __int64 v1071; // rdi
  int v1072; // eax
  _DWORD *v1073; // rbx
  _QWORD *v1074; // rcx
  _QWORD *v1075; // rdx
  unsigned __int64 v1076; // r9
  int v1077; // r11d
  unsigned int v1080; // ecx
  unsigned int v1083; // r11d
  int v1084; // edx
  _DWORD *v1085; // r10
  int v1086; // r9d
  __int64 v1087; // r8
  signed __int64 v1088; // rbx
  unsigned int v1089; // eax
  __int64 v1090; // r10
  _BYTE *v1091; // rcx
  _BYTE *v1092; // r9
  int v1093; // r11d
  int v1094; // ecx
  unsigned __int64 v1095; // rbx
  int v1096; // eax
  unsigned __int64 v1097; // rcx
  int v1098; // ecx
  _BYTE *v1099; // r15
  unsigned __int64 v1100; // r13
  _BYTE *v1101; // r8
  char *v1102; // r10
  _BYTE *v1103; // r14
  unsigned __int64 v1104; // r12
  unsigned __int128 v1105; // rax
  _QWORD *v1106; // rcx
  _WORD *v1107; // r14
  unsigned __int64 v1108; // rcx
  char v1109; // al
  unsigned __int64 v1110; // rcx
  unsigned __int64 v1111; // rdx
  _BYTE *v1112; // r14
  int v1113; // ecx
  unsigned __int64 v1114; // r13
  _BYTE *v1115; // r8
  char *v1116; // r10
  _BYTE *v1117; // r14
  unsigned __int64 v1118; // r12
  unsigned __int128 v1119; // rax
  _QWORD *v1120; // rcx
  _WORD *v1121; // r14
  unsigned __int64 v1122; // rcx
  char v1123; // al
  unsigned __int64 v1124; // rcx
  unsigned __int64 v1125; // rdx
  _BYTE *v1126; // r14
  char *v1127; // rcx
  char *v1128; // r13
  char *v1129; // r9
  unsigned __int64 v1130; // rsi
  _BYTE *v1131; // r14
  unsigned __int64 v1132; // r12
  unsigned __int128 v1133; // rax
  _QWORD *v1134; // rcx
  _WORD *v1135; // r14
  _BYTE *v1136; // r14
  unsigned __int64 v1137; // rcx
  char v1138; // al
  unsigned __int64 v1139; // rcx
  unsigned __int64 v1140; // rdx
  _BYTE *v1141; // r14
  char *v1142; // r13
  char *v1143; // r9
  unsigned __int64 v1144; // rsi
  _BYTE *v1145; // r14
  unsigned __int64 v1146; // r12
  unsigned __int128 v1147; // rax
  _QWORD *v1148; // rcx
  _WORD *v1149; // r14
  unsigned __int64 v1150; // rcx
  char v1151; // al
  unsigned __int64 v1152; // rcx
  unsigned __int64 v1153; // rdx
  _BYTE *v1154; // r14
  _BYTE *v1155; // r12
  char *v1156; // r13
  _BYTE *v1157; // r14
  unsigned __int64 v1158; // rdi
  unsigned __int64 v1159; // rsi
  unsigned __int128 v1160; // rax
  _QWORD *v1161; // rcx
  _WORD *v1162; // r14
  unsigned __int64 v1163; // rcx
  char v1164; // al
  unsigned __int64 v1165; // rcx
  unsigned __int64 v1166; // rdx
  _BYTE *v1167; // r14
  unsigned __int64 v1168; // rdi
  unsigned __int64 v1169; // r8
  _BYTE *v1170; // r14
  unsigned __int64 v1171; // rsi
  unsigned __int128 v1172; // rax
  _QWORD *v1173; // rcx
  __int64 v1174; // r10
  _WORD *v1175; // r14
  unsigned __int64 v1176; // rcx
  char v1177; // al
  unsigned __int64 v1178; // rcx
  unsigned __int64 v1179; // rdx
  _BYTE *v1180; // r14
  size_t v1181; // rbx
  _BYTE *v1182; // r8
  int v1183; // ebx
  int v1184; // esi
  size_t v1185; // rdi
  unsigned __int128 v1186; // rax
  int v1187; // r14d
  int v1188; // [rsp+20h] [rbp-E0h]
  unsigned int v1189; // [rsp+20h] [rbp-E0h]
  int v1190; // [rsp+20h] [rbp-E0h]
  unsigned int v1191; // [rsp+20h] [rbp-E0h]
  int v1192; // [rsp+20h] [rbp-E0h]
  int v1193; // [rsp+20h] [rbp-E0h]
  unsigned int v1194; // [rsp+20h] [rbp-E0h]
  int v1195; // [rsp+20h] [rbp-E0h]
  int v1196; // [rsp+20h] [rbp-E0h]
  int v1197; // [rsp+24h] [rbp-DCh]
  int v1198; // [rsp+24h] [rbp-DCh]
  unsigned int v1199; // [rsp+24h] [rbp-DCh]
  unsigned int v1200; // [rsp+24h] [rbp-DCh]
  int v1201; // [rsp+24h] [rbp-DCh]
  unsigned int v1202; // [rsp+24h] [rbp-DCh]
  unsigned int v1203; // [rsp+24h] [rbp-DCh]
  int v1204; // [rsp+24h] [rbp-DCh]
  int v1205; // [rsp+24h] [rbp-DCh]
  int v1206; // [rsp+28h] [rbp-D8h]
  int v1207; // [rsp+28h] [rbp-D8h]
  int v1208; // [rsp+28h] [rbp-D8h]
  unsigned int v1209; // [rsp+28h] [rbp-D8h]
  int v1210; // [rsp+28h] [rbp-D8h]
  unsigned int v1211; // [rsp+28h] [rbp-D8h]
  unsigned int v1212; // [rsp+28h] [rbp-D8h]
  unsigned int v1213; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1214; // [rsp+2Ch] [rbp-D4h]
  int v1215; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1216; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1217; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1218; // [rsp+30h] [rbp-D0h]
  int v1219; // [rsp+30h] [rbp-D0h]
  unsigned int v1220; // [rsp+30h] [rbp-D0h]
  int v1221; // [rsp+30h] [rbp-D0h]
  unsigned int v1222; // [rsp+30h] [rbp-D0h]
  unsigned int v1223; // [rsp+30h] [rbp-D0h]
  int v1224; // [rsp+30h] [rbp-D0h]
  int v1225; // [rsp+30h] [rbp-D0h]
  unsigned int v1226; // [rsp+30h] [rbp-D0h]
  int v1227; // [rsp+30h] [rbp-D0h]
  unsigned int v1228; // [rsp+30h] [rbp-D0h]
  _DWORD *v1229; // [rsp+38h] [rbp-C8h]
  _DWORD *v1230; // [rsp+38h] [rbp-C8h]
  _DWORD *v1231; // [rsp+38h] [rbp-C8h]
  unsigned int v1232; // [rsp+40h] [rbp-C0h]
  unsigned int v1233; // [rsp+40h] [rbp-C0h]
  unsigned int v1234; // [rsp+40h] [rbp-C0h]
  int v1235; // [rsp+40h] [rbp-C0h]
  unsigned int v1236; // [rsp+40h] [rbp-C0h]
  unsigned int v1237; // [rsp+40h] [rbp-C0h]
  unsigned int v1238; // [rsp+40h] [rbp-C0h]
  unsigned int v1239; // [rsp+40h] [rbp-C0h]
  unsigned int v1240; // [rsp+40h] [rbp-C0h]
  unsigned int v1241; // [rsp+44h] [rbp-BCh]
  int v1242; // [rsp+44h] [rbp-BCh]
  int v1243; // [rsp+44h] [rbp-BCh]
  int v1244; // [rsp+44h] [rbp-BCh]
  unsigned int v1245; // [rsp+44h] [rbp-BCh]
  unsigned int v1246; // [rsp+44h] [rbp-BCh]
  int v1247; // [rsp+44h] [rbp-BCh]
  int v1248; // [rsp+44h] [rbp-BCh]
  unsigned int v1249; // [rsp+44h] [rbp-BCh]
  unsigned int v1250; // [rsp+48h] [rbp-B8h]
  unsigned int v1251; // [rsp+48h] [rbp-B8h]
  unsigned int v1252; // [rsp+48h] [rbp-B8h]
  unsigned int v1253; // [rsp+48h] [rbp-B8h]
  unsigned int v1254; // [rsp+48h] [rbp-B8h]
  unsigned int v1255; // [rsp+48h] [rbp-B8h]
  unsigned int v1256; // [rsp+48h] [rbp-B8h]
  unsigned int v1257; // [rsp+48h] [rbp-B8h]
  int v1258; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v1259; // [rsp+50h] [rbp-B0h]
  char *v1260; // [rsp+50h] [rbp-B0h]
  char *v1261; // [rsp+50h] [rbp-B0h]
  char *v1262; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v1263; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v1264; // [rsp+58h] [rbp-A8h]
  int v1265; // [rsp+60h] [rbp-A0h]
  unsigned int v1266; // [rsp+60h] [rbp-A0h]
  unsigned int v1267; // [rsp+60h] [rbp-A0h]
  unsigned int v1268; // [rsp+60h] [rbp-A0h]
  int v1269; // [rsp+60h] [rbp-A0h]
  int v1270; // [rsp+60h] [rbp-A0h]
  int v1271; // [rsp+60h] [rbp-A0h]
  int v1272; // [rsp+60h] [rbp-A0h]
  unsigned int v1273; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v1274; // [rsp+68h] [rbp-98h]
  unsigned __int64 v1275; // [rsp+68h] [rbp-98h]
  _BYTE *v1276; // [rsp+68h] [rbp-98h]
  _BYTE *v1277; // [rsp+68h] [rbp-98h]
  char *v1278; // [rsp+70h] [rbp-90h]
  char *v1279; // [rsp+70h] [rbp-90h]
  char *v1280; // [rsp+70h] [rbp-90h]
  unsigned __int64 v1281; // [rsp+78h] [rbp-88h]
  unsigned __int64 v1282; // [rsp+78h] [rbp-88h]
  unsigned __int64 v1283; // [rsp+78h] [rbp-88h]
  unsigned __int64 v1284; // [rsp+78h] [rbp-88h]
  char *v1285; // [rsp+80h] [rbp-80h]
  __int64 v1286; // [rsp+80h] [rbp-80h]
  _QWORD *v1287; // [rsp+80h] [rbp-80h]
  _BYTE *v1288; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1289; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1290; // [rsp+88h] [rbp-78h]
  unsigned __int64 v1291; // [rsp+88h] [rbp-78h]
  _QWORD *v1292; // [rsp+88h] [rbp-78h]
  char *v1293; // [rsp+88h] [rbp-78h]
  unsigned __int64 v1294; // [rsp+90h] [rbp-70h]
  unsigned __int64 v1295; // [rsp+90h] [rbp-70h]
  _QWORD *v1296; // [rsp+90h] [rbp-70h]
  __int64 v1297; // [rsp+90h] [rbp-70h]
  __int64 v1298; // [rsp+90h] [rbp-70h]
  char *v1299; // [rsp+98h] [rbp-68h]
  unsigned __int64 v1300; // [rsp+98h] [rbp-68h]
  char *v1301; // [rsp+98h] [rbp-68h]
  unsigned __int64 v1302; // [rsp+98h] [rbp-68h]
  unsigned __int64 v1303; // [rsp+98h] [rbp-68h]
  _BYTE *v1304; // [rsp+A0h] [rbp-60h]
  char *v1305; // [rsp+A0h] [rbp-60h]
  _BYTE *v1306; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v1307; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v1308; // [rsp+A8h] [rbp-58h]
  __int64 v1309; // [rsp+A8h] [rbp-58h]
  int v1310; // [rsp+ACh] [rbp-54h]
  __int64 v1311; // [rsp+B0h] [rbp-50h]
  _QWORD *v1312; // [rsp+B0h] [rbp-50h]
  _QWORD *v1313; // [rsp+B0h] [rbp-50h]
  _QWORD *v1314; // [rsp+B0h] [rbp-50h]
  char *v1315; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v1316; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v1317; // [rsp+B8h] [rbp-48h]
  __int64 v1318; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v1319; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v1320; // [rsp+B8h] [rbp-48h]
  char *v1321; // [rsp+B8h] [rbp-48h]
  char *v1322; // [rsp+C0h] [rbp-40h]
  char *v1323; // [rsp+C0h] [rbp-40h]
  __int64 v1324; // [rsp+C0h] [rbp-40h]
  char *v1325; // [rsp+C0h] [rbp-40h]
  char *v1326; // [rsp+C0h] [rbp-40h]
  __int64 v1327; // [rsp+C0h] [rbp-40h]
  char *v1328; // [rsp+C0h] [rbp-40h]
  __int64 v1329; // [rsp+C0h] [rbp-40h]
  int v1330; // [rsp+C4h] [rbp-3Ch]
  char *v1331; // [rsp+C8h] [rbp-38h]
  _QWORD *v1332; // [rsp+C8h] [rbp-38h]
  char *v1333; // [rsp+C8h] [rbp-38h]
  _QWORD *v1334; // [rsp+D0h] [rbp-30h]
  __int64 v1335; // [rsp+D0h] [rbp-30h]
  char *v1336; // [rsp+D0h] [rbp-30h]
  size_t v1337; // [rsp+D0h] [rbp-30h]
  char *v1338; // [rsp+D8h] [rbp-28h]
  _QWORD *v1339; // [rsp+D8h] [rbp-28h]
  __int64 v1340; // [rsp+D8h] [rbp-28h]
  __int64 v1341; // [rsp+D8h] [rbp-28h]
  char *v1342; // [rsp+E8h] [rbp-18h]
  _QWORD *v1343; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1344; // [rsp+E8h] [rbp-18h]
  __int64 v1345; // [rsp+E8h] [rbp-18h]
  char *v1346; // [rsp+F0h] [rbp-10h]
  char *v1347; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v1348; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v1349; // [rsp+F0h] [rbp-10h]
  char *v1350; // [rsp+F0h] [rbp-10h]
  __int64 v1351; // [rsp+F0h] [rbp-10h]
  int v1352; // [rsp+F4h] [rbp-Ch]
  _QWORD *v1353; // [rsp+F8h] [rbp-8h]
  char *v1354; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v1355; // [rsp+100h] [rbp+0h]
  unsigned __int64 v1356; // [rsp+100h] [rbp+0h]
  char *v1357; // [rsp+100h] [rbp+0h]
  unsigned __int64 v1358; // [rsp+100h] [rbp+0h]
  unsigned __int64 v1359; // [rsp+100h] [rbp+0h]
  unsigned __int64 v1360; // [rsp+100h] [rbp+0h]
  unsigned __int64 v1361; // [rsp+108h] [rbp+8h]
  unsigned __int64 v1362; // [rsp+108h] [rbp+8h]
  __int64 v1363; // [rsp+108h] [rbp+8h]
  __int64 v1364; // [rsp+108h] [rbp+8h]
  __int64 v1365; // [rsp+108h] [rbp+8h]
  unsigned __int64 v1366; // [rsp+110h] [rbp+10h]
  unsigned __int64 v1367; // [rsp+110h] [rbp+10h]
  __int64 v1368; // [rsp+110h] [rbp+10h]
  int v1370; // [rsp+1A8h] [rbp+A8h]
  int v1373; // [rsp+1C8h] [rbp+C8h]
  int v1374; // [rsp+1C8h] [rbp+C8h]
  int v1375; // [rsp+1C8h] [rbp+C8h]
  unsigned int v1376; // [rsp+1C8h] [rbp+C8h]
  int v1377; // [rsp+1C8h] [rbp+C8h]
  int v1378; // [rsp+1C8h] [rbp+C8h]
  int v1379; // [rsp+1C8h] [rbp+C8h]
  int v1380; // [rsp+1C8h] [rbp+C8h]
  int v1381; // [rsp+1C8h] [rbp+C8h]

  v1370 = (int)Src;
  v7 = *((_QWORD *)a1 + 0x8000);
  v8 = a1;
  v9 = a4;
  v12 = v7 + a1[65542] - a1[65543] - *((_QWORD *)a1 + 32769);
  if ( v12 >= 0x10000 )
  {
    v13 = 0;
    *((_QWORD *)v8 + 32773) = 0LL;
    if ( a7 == 2 && a5 < 1 )
      return v13;
    v14 = *a4;
    if ( (unsigned int)v14 > 0x7E000000 )
      return v13;
    v15 = a4;
    v16 = Src;
    v17 = Src;
    *((_QWORD *)v8 + 0x8000) = v7 + v14;
    v18 = *a4;
    v19 = &Src[v18];
    v20 = &Src[v18 - 12];
    v1229 = Src;
    v1262 = &Src[v18 - 5];
    v1278 = Src;
    v21 = a3;
    v1304 = a3;
    v1342 = v19;
    v22 = (unsigned __int64)&a3[a5 - 5];
    v1331 = v20;
    if ( a7 != 2 )
      v22 = (unsigned __int64)&a3[a5];
    v1259 = 0LL;
    v1281 = v22;
    v1294 = 0LL;
    *a4 = 0;
    if ( (int)v18 >= 13 )
    {
      while ( v16 <= v20 )
      {
        v23 = 3;
        v1188 = 3;
        v24 = a1[65543];
        v25 = (_QWORD *)*((_QWORD *)a1 + 32769);
        v26 = v24;
        v27 = a1[65542];
        v28 = v27 + (_DWORD)v16 - (_DWORD)v25;
        v1285 = (char *)v25;
        v1373 = v28;
        v1232 = a1[65543];
        v1299 = (char *)*((_QWORD *)a1 + 32770);
        if ( (int)v24 + 0x10000 <= v28 )
          v26 = v28 - 0xFFFF;
        v1265 = 256;
        v1346 = (char *)(*((_QWORD *)a1 + 32770) + (unsigned int)v27 - v24);
        v1218 = v26;
        v29 = *v1229;
        v30 = 0;
        v1197 = 0;
        v1366 = 0LL;
        v31 = 0;
        v1250 = 0;
        v32 = a1;
        v33 = a1[65544];
        if ( v33 < v28 )
        {
          v34 = v33;
          do
          {
            v35 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v25 + v34 - v27)) >> 17;
            v36 = v33 - a1[v35];
            if ( v36 > 0xFFFF )
              LOWORD(v36) = -1;
            ++v34;
            *((_WORD *)a1 + (unsigned __int16)v33 + 0x10000) = v36;
            a1[v35] = v33++;
          }
          while ( v33 < v28 );
          v30 = 0;
          LODWORD(v24) = v1232;
          v32 = a1;
        }
        v37 = v1229;
        v32[65544] = v28;
        v38 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *v1229) >> 17];
        if ( v38 >= v26 )
        {
          while ( 1 )
          {
            v39 = v30;
            if ( v1265 <= 0 )
            {
LABEL_99:
              v21 = v1304;
              v31 = v1250;
              goto LABEL_100;
            }
            --v1265;
            if ( v38 < (unsigned int)v27 )
            {
              v56 = v1299;
              v57 = &v1299[v38 - (unsigned int)v24];
              if ( v38 <= (int)v27 - 4 && *(_DWORD *)v57 == v29 )
              {
                v58 = (char *)(v37 + 1);
                v59 = (_DWORD)v37 + 4;
                v60 = (unsigned __int64)(v37 + 1);
                v61 = (char *)v37 + (unsigned int)v27 - v38;
                v62 = (unsigned __int64)(v37 + 1);
                v63 = (unsigned __int64)(v37 + 1);
                if ( v61 > v1262 )
                  v61 = v1262;
                v64 = v57 + 4;
                if ( v58 >= v61 - 7 )
                {
LABEL_49:
                  while ( v60 < (unsigned __int64)(v61 - 7) )
                  {
                    if ( *(_QWORD *)v58 != *v64 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v68 = ((unsigned int)_RAX >> 3) - v59 + (_DWORD)v58;
                      goto LABEL_64;
                    }
                    v58 = (char *)(v62 + 8);
                    ++v64;
                    v60 = (unsigned __int64)v58;
                    v62 += 8LL;
                    v63 = (unsigned __int64)v58;
                  }
                  if ( v63 < (unsigned __int64)(v61 - 3) && *(_DWORD *)v64 == *(_DWORD *)v58 )
                  {
                    v58 += 4;
                    v64 = (_QWORD *)((char *)v64 + 4);
                  }
                  if ( v58 < v61 - 1 && *(_WORD *)v64 == *(_WORD *)v58 )
                  {
                    v58 += 2;
                    v64 = (_QWORD *)((char *)v64 + 2);
                  }
                  if ( v58 < v61 && *(_BYTE *)v64 == *v58 )
                    LODWORD(v58) = (_DWORD)v58 + 1;
                  v68 = (_DWORD)v58 - v59;
                }
                else
                {
                  if ( *(_QWORD *)v58 == *v64 )
                  {
                    v60 = (unsigned __int64)(v58 + 8);
                    ++v64;
                    v58 = (char *)v60;
                    v62 = v60;
                    v63 = v60;
                    goto LABEL_49;
                  }
                  __asm { tzcnt   rcx, r8 }
                  v68 = (unsigned int)_RCX >> 3;
                }
LABEL_64:
                v70 = v68 + 4;
                v71 = (char *)v1229 + (int)(v68 + 4);
                if ( v71 == v61 && v61 < v1262 )
                {
                  v72 = v25;
                  v73 = (char *)v1229 + v70;
                  v74 = (unsigned __int64)v73;
                  v75 = v73;
                  v76 = (unsigned __int64)v73;
                  if ( v71 >= v1262 - 7 )
                  {
                    while ( v74 < (unsigned __int64)(v1262 - 7) )
                    {
                      if ( *(_QWORD *)v73 != *v72 )
                      {
                        __asm { tzcnt   rax, r9 }
                        v79 = ((unsigned int)_RAX >> 3) - (_DWORD)v71 + (_DWORD)v73;
                        goto LABEL_85;
                      }
                      v73 = v75 + 8;
                      ++v72;
LABEL_73:
                      v74 = (unsigned __int64)v73;
                      v75 = v73;
                      v76 = (unsigned __int64)v73;
                    }
                    if ( v76 < (unsigned __int64)(v1262 - 3) && *(_DWORD *)v72 == *(_DWORD *)v73 )
                    {
                      v73 += 4;
                      v72 = (_QWORD *)((char *)v72 + 4);
                    }
                    if ( v73 < v1262 - 1 && *(_WORD *)v72 == *(_WORD *)v73 )
                    {
                      v73 += 2;
                      v72 = (_QWORD *)((char *)v72 + 2);
                    }
                    if ( v73 < v1262 && *(_BYTE *)v72 == *v73 )
                      LODWORD(v73) = (_DWORD)v73 + 1;
                    v79 = (_DWORD)v73 - (_DWORD)v71;
                  }
                  else
                  {
                    if ( *(_QWORD *)v71 == *v25 )
                    {
                      v73 = v71 + 8;
                      v72 = v25 + 1;
                      goto LABEL_73;
                    }
                    __asm { tzcnt   rcx, rcx }
                    v79 = (unsigned int)_RCX >> 3;
                  }
LABEL_85:
                  v70 += v79;
                }
                v30 = v1197;
                v56 = v1299;
                if ( v70 > v1188 )
                {
                  v53 = v1373;
                  v1188 = v70;
                  v40 = v1229;
                  v1250 = v1373 - v38;
                  goto LABEL_91;
                }
              }
              v40 = v1229;
              goto LABEL_90;
            }
            v40 = v1229;
            v41 = v38 - (unsigned int)v27;
            if ( *(_WORD *)((char *)v1229 + v23 - 1) != *(_WORD *)((char *)v25 + v23 + v41 - 1)
              || *(_DWORD *)((char *)v25 + (unsigned int)v41) != v29 )
            {
              break;
            }
            v42 = (char *)(v1229 + 1);
            v43 = (_DWORD)v1229 + 4;
            v44 = (_QWORD *)((char *)v25 + (unsigned int)v41 + 4);
            v45 = (unsigned __int64)(v1229 + 1);
            v46 = v1229 + 1;
            v47 = (unsigned __int64)(v1229 + 1);
            if ( v1229 + 1 >= (_DWORD *)(v1262 - 7) )
              goto LABEL_25;
            if ( *v44 != *(_QWORD *)v42 )
            {
              __asm { tzcnt   rcx, r8 }
              v51 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v45 = (unsigned __int64)(v1229 + 3);
              ++v44;
              v42 = (char *)(v1229 + 3);
              v46 = v1229 + 3;
              v47 = (unsigned __int64)(v1229 + 3);
LABEL_25:
              while ( v45 < (unsigned __int64)(v1262 - 7) )
              {
                if ( *v44 != *(_QWORD *)v42 )
                {
                  __asm { tzcnt   rax, r8 }
                  v51 = ((unsigned int)_RAX >> 3) - v43 + (_DWORD)v42;
                  goto LABEL_40;
                }
                v42 = (char *)(v46 + 2);
                ++v44;
                v45 = (unsigned __int64)v42;
                v46 += 2;
                v47 = (unsigned __int64)v42;
              }
              if ( v47 < (unsigned __int64)(v1262 - 3) && *(_DWORD *)v44 == *(_DWORD *)v42 )
              {
                v42 += 4;
                v44 = (_QWORD *)((char *)v44 + 4);
              }
              if ( v42 < v1262 - 1 && *(_WORD *)v44 == *(_WORD *)v42 )
              {
                v42 += 2;
                v44 = (_QWORD *)((char *)v44 + 2);
              }
              if ( v42 < v1262 && *(_BYTE *)v44 == *v42 )
                LODWORD(v42) = (_DWORD)v42 + 1;
              v51 = (_DWORD)v42 - v43;
            }
LABEL_40:
            v53 = v1373;
            v54 = v51 + 4;
            v30 = v1197;
            v55 = v54 <= v23;
            v56 = v1299;
            v40 = v1229;
            if ( !v55 )
            {
              v1188 = v54;
              v1250 = v1373 - v38;
LABEL_90:
              v53 = v1373;
            }
LABEL_91:
            if ( *((_WORD *)a1 + (unsigned __int16)v38 + 0x10000) != 1 )
              goto LABEL_96;
            v82 = v38 - 1;
            if ( v30 )
            {
              v1197 = v39;
              if ( v39 != 2 )
                goto LABEL_96;
            }
            else
            {
              if ( (_BYTE)v29 != HIBYTE(v29) || (unsigned __int16)v29 != HIWORD(v29) )
              {
                v1197 = 1;
LABEL_96:
                v83 = v1218;
LABEL_97:
                v38 -= *((unsigned __int16 *)a1 + (unsigned __int16)v38 + 0x10000);
                goto LABEL_98;
              }
              v1197 = 2;
              v1366 = (unsigned int)LZ4HC_countPattern(v40 + 1, v1262, v29) + 4LL;
            }
            v83 = v1218;
            if ( v82 < v1218 || (unsigned int)v27 - v82 - 1 < 3 )
              goto LABEL_97;
            if ( v82 >= (unsigned int)v27 )
            {
              v86 = 0;
              v87 = &v1285[v82 - (unsigned int)v27];
            }
            else
            {
              v86 = 1;
              v87 = &v56[v82 - v1232];
            }
            if ( *(_DWORD *)v87 != v29 )
              goto LABEL_97;
            v88 = v1262;
            if ( v86 )
              v88 = v1346;
            v89 = (unsigned int)LZ4HC_countPattern(v87 + 4, v88, v29) + 4LL;
            if ( v86 )
            {
              if ( &v87[v89] == v90 )
              {
                v91 = v29;
                v92 = 8 * (v89 & 3);
                if ( v92 )
                  v91 = (unsigned int)__ROL4__(v29, v92);
                v89 += (unsigned int)LZ4HC_countPattern(v1285, v1262, v91);
              }
              v93 = v1299;
            }
            else
            {
              v93 = v1285;
            }
            v94 = LZ4HC_reverseCountPattern(v87, v93, v29);
            v95 = v1285;
            v96 = v94;
            if ( !v86 && &v87[-v94] == v1285 && v1232 < (unsigned int)v27 )
            {
              v97 = v29;
              v98 = 8LL * (-v94 & 3);
              if ( v98 )
                v97 = (unsigned int)__ROL4__(v29, v98);
              v99 = LZ4HC_reverseCountPattern(v1346, v1299, v97);
              v96 = v99 + v100;
              v95 = v1285;
            }
            v83 = v1218;
            v101 = v82 - v96;
            v102 = v1218;
            if ( v101 > v1218 )
              v102 = v101;
            v103 = v89 + v82 - v102;
            if ( v103 < v1366 || v89 > v1366 )
            {
              if ( (unsigned int)v27 - v102 - 1 >= 3 )
              {
                v23 = v1188;
                v104 = v1366;
                if ( v103 < v1366 )
                  v104 = v103;
                if ( v1188 >= v104 )
                {
                  v37 = v1229;
                }
                else
                {
                  v105 = v27 - v102 - (_QWORD)v95;
                  v37 = v1229;
                  if ( (unsigned __int64)v1229 + v105 > 0xFFFF )
                    goto LABEL_99;
                  v1188 = v104;
                  v23 = v104;
                  v1250 = v53 - v102;
                }
                v106 = *((unsigned __int16 *)a1 + (unsigned __int16)v102 + 0x10000);
                if ( v106 > v102 )
                  goto LABEL_99;
                v38 = v102 - v106;
              }
              else
              {
                v38 = v27;
              }
            }
            else
            {
              v38 = v27;
              if ( (unsigned int)v27 - ((_DWORD)v89 - (_DWORD)v1366 + v82) - 1 >= 3 )
                v38 = v89 - v1366 + v82;
            }
LABEL_98:
            v25 = v1285;
            v84 = v38 < v83;
            v30 = v1197;
            v23 = v1188;
            LODWORD(v24) = v1232;
            v37 = v1229;
            if ( v84 )
              goto LABEL_99;
          }
          v56 = v1299;
          goto LABEL_90;
        }
LABEL_100:
        v85 = __PAIR64__(v23, v31);
        v1300 = __PAIR64__(v23, v31);
        v1290 = __PAIR64__(v23, v31);
        if ( v23 >= 4 )
        {
          v107 = v1331;
          v108 = v37;
          v1361 = (unsigned __int64)v37;
          v1330 = HIDWORD(v85);
          while ( 1 )
          {
            v109 = 0;
LABEL_143:
            v110 = HIDWORD(v1290);
            v1374 = HIDWORD(v1290);
            v111 = (char *)v37 + SHIDWORD(v1290);
            if ( v111 > v107 )
            {
              v1275 = 0LL;
              v189 = 0LL;
            }
            else
            {
              v1219 = HIDWORD(v1290);
              v112 = v111 - 2;
              v1259 = (unsigned __int64)(v111 - 2);
              v1274 = (unsigned __int64)(v111 - 2);
              v113 = a1[65543];
              v114 = a1[65542];
              v115 = v113;
              v116 = (_QWORD *)*((_QWORD *)a1 + 32769);
              v1233 = a1[65543];
              v117 = (_DWORD)v111 - 2 + a1[65542] - (_DWORD)v116;
              v1334 = v116;
              v1241 = v117;
              v1286 = *((_QWORD *)a1 + 32770);
              if ( (int)v113 + 0x10000 <= v117 )
                v115 = v117 - 0xFFFF;
              v118 = (_DWORD)v111 - 2 - (_DWORD)v1229;
              v1189 = v115;
              v1206 = 256;
              v1347 = (char *)(*((_QWORD *)a1 + 32770) + (unsigned int)v114 - v113);
              v119 = *(_DWORD *)v112;
              v120 = 0;
              v1251 = *(_DWORD *)v112;
              v121 = 0;
              v122 = a1[65544];
              v1198 = 0;
              v1367 = 0LL;
              v1266 = 0;
              if ( v122 < v117 )
              {
                v123 = v122;
                do
                {
                  v124 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v116 + v123 - v114)) >> 17;
                  v125 = v122 - a1[v124];
                  if ( v125 > 0xFFFF )
                    LOWORD(v125) = -1;
                  ++v123;
                  *((_WORD *)a1 + (unsigned __int16)v122 + 0x10000) = v125;
                  a1[v124] = v122++;
                }
                while ( v122 < v117 );
                v85 = v1300;
                v120 = 0;
                v119 = v1251;
                v112 = v111 - 2;
              }
              a1[65544] = v117;
              v126 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v112) >> 17];
              v127 = v118;
              v1311 = v118;
              if ( v126 >= v1189 )
              {
                while ( 1 )
                {
                  v128 = v120;
                  if ( v1206 <= 0 )
                  {
LABEL_260:
                    v85 = v1300;
                    v21 = v1304;
                    v121 = v1266;
                    goto LABEL_261;
                  }
                  --v1206;
                  if ( v126 >= (unsigned int)v114 )
                    break;
                  v150 = v1286;
                  v153 = (_DWORD *)(v1286 + v126 - v1233);
                  if ( v126 <= (int)v114 - 4 && *v153 == v119 )
                  {
                    v154 = v153 + 1;
                    v155 = (char *)(v1274 + (unsigned int)v114 - v126);
                    if ( v155 > v1262 )
                      v155 = v1262;
                    v156 = (char *)(v1274 + 4);
                    v157 = v1274 + 4;
                    v158 = v1274 + 4;
                    v159 = v1274 + 4;
                    v160 = v1274 + 4;
                    if ( v1274 + 4 >= (unsigned __int64)(v155 - 7) )
                    {
LABEL_201:
                      while ( v158 < (unsigned __int64)(v155 - 7) )
                      {
                        if ( *v154 != *(_QWORD *)v156 )
                        {
                          __asm { tzcnt   rax, r8 }
                          v164 = ((unsigned int)_RAX >> 3) - v157 + (_DWORD)v156;
                          goto LABEL_216;
                        }
                        v156 = (char *)(v159 + 8);
                        ++v154;
                        v158 = (unsigned __int64)v156;
                        v159 += 8LL;
                        v160 = (unsigned __int64)v156;
                      }
                      if ( v160 < (unsigned __int64)(v155 - 3) && *(_DWORD *)v154 == *(_DWORD *)v156 )
                      {
                        v156 += 4;
                        v154 = (_QWORD *)((char *)v154 + 4);
                      }
                      if ( v156 < v155 - 1 && *(_WORD *)v154 == *(_WORD *)v156 )
                      {
                        v156 += 2;
                        v154 = (_QWORD *)((char *)v154 + 2);
                      }
                      if ( v156 < v155 && *(_BYTE *)v154 == *v156 )
                        LODWORD(v156) = (_DWORD)v156 + 1;
                      v164 = (_DWORD)v156 - v157;
                    }
                    else
                    {
                      if ( *v154 == *(_QWORD *)v156 )
                      {
                        v158 = v1274 + 12;
                        v154 = v153 + 3;
                        v156 = (char *)(v1274 + 12);
                        v159 = v1274 + 12;
                        v160 = v1274 + 12;
                        goto LABEL_201;
                      }
                      __asm { tzcnt   rcx, r8 }
                      v164 = (unsigned int)_RCX >> 3;
                    }
LABEL_216:
                    v166 = v1274;
                    v167 = v164 + 4;
                    v168 = (char *)(v1274 + (int)(v164 + 4));
                    if ( v168 == v155 && v155 < v1262 )
                    {
                      v169 = v1334;
                      v170 = (char *)(v1274 + v167);
                      v171 = (unsigned __int64)v170;
                      v172 = v170;
                      v173 = (unsigned __int64)v170;
                      if ( v168 >= v1262 - 7 )
                      {
                        while ( v171 < (unsigned __int64)(v1262 - 7) )
                        {
                          if ( *v169 != *(_QWORD *)v170 )
                          {
                            __asm { tzcnt   rax, r8 }
                            v176 = ((unsigned int)_RAX >> 3) - (_DWORD)v168 + (_DWORD)v170;
                            goto LABEL_237;
                          }
                          v170 = v172 + 8;
                          ++v169;
LABEL_225:
                          v171 = (unsigned __int64)v170;
                          v172 = v170;
                          v173 = (unsigned __int64)v170;
                        }
                        if ( v173 < (unsigned __int64)(v1262 - 3) && *(_DWORD *)v169 == *(_DWORD *)v170 )
                        {
                          v170 += 4;
                          v169 = (_QWORD *)((char *)v169 + 4);
                        }
                        if ( v170 < v1262 - 1 && *(_WORD *)v169 == *(_WORD *)v170 )
                        {
                          v170 += 2;
                          v169 = (_QWORD *)((char *)v169 + 2);
                        }
                        if ( v170 < v1262 && *(_BYTE *)v169 == *v170 )
                          LODWORD(v170) = (_DWORD)v170 + 1;
                        v176 = (_DWORD)v170 - (_DWORD)v168;
                      }
                      else
                      {
                        if ( *v1334 == *(_QWORD *)v168 )
                        {
                          v170 = v168 + 8;
                          v169 = v1334 + 1;
                          goto LABEL_225;
                        }
                        __asm { tzcnt   rcx, rdx }
                        v176 = (unsigned int)_RCX >> 3;
                      }
LABEL_237:
                      v166 = v1274;
                      v167 += v176;
                    }
                    v179 = 0;
                    if ( v1311 )
                    {
                      v180 = v153 - 1;
                      v181 = (_DWORD)v1229 - v166;
                      v182 = 0LL;
                      if ( (__int64)((__int64)v1229 - v166) <= -(__int64)(v126 - v1233) )
                        v181 = v1233 - v126;
                      v112 = (char *)v1274;
                      v183 = v1274 - (_QWORD)v153;
                      while ( v179 - v181 > 3 )
                      {
                        if ( *v180 != *(_DWORD *)((char *)v180 + v183) )
                        {
                          _BitScanReverse(&v184, *v180 ^ *(_DWORD *)((char *)v180 + v183));
                          v179 -= (31 - v184) >> 3;
                          goto LABEL_252;
                        }
                        v179 -= 4;
                        v182 -= 4LL;
                        --v180;
                      }
                      v185 = v181;
                      if ( v182 > v181 )
                      {
                        v186 = (char *)v1229 + v182 + SHIDWORD(v1290) - 3;
                        do
                        {
                          if ( *v186 != *(_BYTE *)(v182 + v1286 + v126 - v1233 - 1) )
                            break;
                          --v179;
                          --v182;
                          --v186;
                        }
                        while ( v182 > v185 );
                      }
                    }
                    else
                    {
                      v112 = (char *)v1274;
                    }
LABEL_252:
                    v120 = v1198;
                    v187 = v167 - v179;
                    if ( v187 > v1219 )
                    {
                      v1219 = v187;
                      v1259 = (unsigned __int64)&v112[v179];
                      v1266 = v1241 - v126;
                    }
                    goto LABEL_189;
                  }
                  v112 = (char *)v1274;
LABEL_190:
                  if ( *((_WORD *)a1 + (unsigned __int16)v126 + 0x10000) != 1 )
                    goto LABEL_256;
                  v151 = v126 - 1;
                  if ( v120 )
                  {
                    v1198 = v128;
                    if ( v128 != 2 )
                      goto LABEL_256;
                    v152 = v1251;
                  }
                  else
                  {
                    v152 = v1251;
                    if ( (_BYTE)v1251 != HIBYTE(v1251) || (unsigned __int16)v1251 != HIWORD(v1251) )
                    {
                      v1198 = 1;
LABEL_256:
                      v188 = v1189;
LABEL_257:
                      v126 -= *((unsigned __int16 *)a1 + (unsigned __int16)v126 + 0x10000);
LABEL_258:
                      v127 = v1311;
                      goto LABEL_259;
                    }
                    v1198 = 2;
                    v1367 = (unsigned int)LZ4HC_countPattern(v112 + 4, v1262, v1251) + 4LL;
                  }
                  v188 = v1189;
                  if ( v151 < v1189 || (unsigned int)v114 - v126 < 3 )
                    goto LABEL_257;
                  if ( v151 >= (unsigned int)v114 )
                  {
                    v191 = (_DWORD *)((char *)v1334 + v151 - (unsigned int)v114);
                    v190 = 0;
                  }
                  else
                  {
                    v190 = 1;
                    v191 = (_DWORD *)(v150 + v151 - v1233);
                  }
                  if ( *v191 != v152 )
                    goto LABEL_256;
                  v192 = v1262;
                  if ( v190 )
                    v192 = v1347;
                  v193 = (unsigned int)LZ4HC_countPattern(v191 + 1, v192, v152) + 4LL;
                  if ( v190 )
                  {
                    if ( (char *)v191 + v193 == v192 )
                    {
                      v195 = v152;
                      v196 = 8 * (v193 & 3);
                      if ( v196 )
                        v195 = (unsigned int)__ROL4__(v152, v196);
                      v193 += (unsigned int)LZ4HC_countPattern(v194, v1262, v195);
                    }
                    v197 = v1286;
                  }
                  else
                  {
                    v197 = v194;
                  }
                  v198 = LZ4HC_reverseCountPattern(v191, v197, v152);
                  v201 = v198;
                  if ( !v190 && (_DWORD *)((char *)v191 - v198) == v200 && v1233 < (unsigned int)v114 )
                  {
                    v202 = 8LL * (-v198 & 3);
                    if ( v202 )
                      v199 = (unsigned int)__ROL4__(v199, v202);
                    v201 = LZ4HC_reverseCountPattern(v1347, v1286, v199) + v198;
                  }
                  v188 = v1189;
                  v203 = v151 - v201;
                  v126 = v1189;
                  if ( v203 > v1189 )
                    v126 = v203;
                  v204 = v193 + v151 - v126;
                  if ( v204 >= v1367 && v193 <= v1367 )
                  {
                    v126 = v114;
                    if ( (unsigned int)v114 - (v151 - (_DWORD)v1367 + (_DWORD)v193) - 1 >= 3 )
                      v126 = v151 - v1367 + v193;
                    goto LABEL_258;
                  }
                  v127 = v1311;
                  if ( (unsigned int)v114 - v126 - 1 >= 3 )
                  {
                    if ( !v1311 )
                    {
                      v205 = v1367;
                      if ( v204 < v1367 )
                        v205 = v193 + v151 - v126;
                      if ( v1219 < v205 )
                      {
                        if ( v1274 + v114 - v126 - (_QWORD)v200 > 0xFFFF )
                          goto LABEL_260;
                        v1219 = v205;
                        v1266 = v1241 - v126;
                        v1259 = v1274;
                      }
                      v206 = *((unsigned __int16 *)a1 + (unsigned __int16)v126 + 0x10000);
                      if ( v206 > v126 )
                        goto LABEL_260;
                      v126 -= v206;
                    }
                  }
                  else
                  {
                    v126 = v114;
                  }
LABEL_259:
                  v119 = v1251;
                  v84 = v126 < v188;
                  v116 = v1334;
                  v112 = (char *)v1274;
                  v120 = v1198;
                  if ( v84 )
                    goto LABEL_260;
                }
                v129 = (_DWORD *)((char *)v116 + v126 - (unsigned int)v114);
                if ( *(_WORD *)((char *)v1229 + v1219 - 1) == *(_WORD *)((char *)v129 + v1219 - v127 - 1)
                  && *v129 == v119 )
                {
                  v130 = 0;
                  if ( v127 )
                  {
                    v131 = v129 - 1;
                    v132 = (_DWORD)v1229 - (_DWORD)v112;
                    v133 = 0LL;
                    if ( (char *)v1229 - v112 <= -(__int64)(v126 - (unsigned int)v114) )
                      v132 = v114 - v126;
                    v134 = v112 - (char *)v129;
                    while ( v130 - v132 > 3 )
                    {
                      if ( *v131 != *(_DWORD *)((char *)v131 + v134) )
                      {
                        _BitScanReverse(&v135, *v131 ^ *(_DWORD *)((char *)v131 + v134));
                        v130 -= (31 - v135) >> 3;
                        goto LABEL_169;
                      }
                      v130 -= 4;
                      v133 -= 4LL;
                      --v131;
                    }
                    v136 = v132;
                    if ( v133 > v132 )
                    {
                      v137 = (char *)v1229 + v133 + SHIDWORD(v1290) - 3;
                      do
                      {
                        if ( *v137 != *((_BYTE *)v1334 + v126 - (unsigned int)v114 + v133 - 1) )
                          break;
                        --v130;
                        --v133;
                        --v137;
                      }
                      while ( v133 > v136 );
                    }
                  }
LABEL_169:
                  v138 = v112 + 4;
                  v139 = v129 + 1;
                  v140 = (_DWORD)v112 + 4;
                  v141 = (unsigned __int64)(v112 + 4);
                  v142 = v112 + 4;
                  v143 = (unsigned __int64)(v112 + 4);
                  if ( v112 + 4 >= v1262 - 7 )
                    goto LABEL_172;
                  if ( *v139 != *(_QWORD *)v138 )
                  {
                    __asm { tzcnt   rcx, r8 }
                    v147 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v141 = (unsigned __int64)(v112 + 12);
                    ++v139;
                    v138 = v112 + 12;
                    v142 = v112 + 12;
                    v143 = (unsigned __int64)(v112 + 12);
LABEL_172:
                    while ( v141 < (unsigned __int64)(v1262 - 7) )
                    {
                      if ( *v139 != *(_QWORD *)v138 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v147 = ((unsigned int)_RAX >> 3) - v140 + (_DWORD)v138;
                        goto LABEL_187;
                      }
                      v138 = (char *)(v142 + 2);
                      ++v139;
                      v141 = (unsigned __int64)v138;
                      v142 += 2;
                      v143 = (unsigned __int64)v138;
                    }
                    if ( v143 < (unsigned __int64)(v1262 - 3) && *(_DWORD *)v139 == *(_DWORD *)v138 )
                    {
                      v138 += 4;
                      v139 = (_QWORD *)((char *)v139 + 4);
                    }
                    if ( v138 < v1262 - 1 && *(_WORD *)v139 == *(_WORD *)v138 )
                    {
                      v138 += 2;
                      v139 = (_QWORD *)((char *)v139 + 2);
                    }
                    if ( v138 < v1262 && *(_BYTE *)v139 == *v138 )
                      LODWORD(v138) = (_DWORD)v138 + 1;
                    v147 = (_DWORD)v138 - v140;
                  }
LABEL_187:
                  v120 = v1198;
                  v149 = v147 - v130 + 4;
                  if ( v149 > v1219 )
                  {
                    v1219 = v149;
                    v1259 = (unsigned __int64)&v112[v130];
                    v1266 = v1241 - v126;
                  }
                }
LABEL_189:
                v150 = v1286;
                goto LABEL_190;
              }
LABEL_261:
              v108 = (_DWORD *)v1361;
              v110 = HIDWORD(v1290);
              v37 = v1229;
              v107 = v1331;
              v189 = __PAIR64__(v1219, v121);
              v1275 = v189;
              v109 = v1219;
            }
            v1317 = v189;
            if ( v109 <= v110 )
              break;
            v207 = v1259;
            if ( v108 < v37 && v1259 < (unsigned __int64)v37 + v1330 )
            {
              LOWORD(v1290) = v85;
              v37 = v108;
              v110 = HIDWORD(v85);
              v1374 = HIDWORD(v85);
              v1229 = v108;
            }
            if ( (__int64)(v1259 - (_QWORD)v37) >= 3 )
            {
              while ( 1 )
              {
                if ( (__int64)(v207 - (_QWORD)v37) < 18 )
                {
                  v208 = v110;
                  if ( v110 > 18 )
                    v208 = 18;
                  if ( (unsigned __int64)v37 + v208 > v207 + v109 - 4LL )
                    v208 = v109 + v207 - (_DWORD)v37 - 4;
                  v209 = v208 + (_DWORD)v37 - v207;
                  if ( v209 > 0 )
                  {
                    v207 += v209;
                    v109 -= v209;
                    v1259 = v207;
                    HIDWORD(v1275) = v109;
                    v189 = v1275;
                    v1317 = v1275;
                  }
                }
                v1368 = v109;
                v210 = v207 + v109;
                if ( v210 > (unsigned __int64)v107 )
                {
                  v304 = 0;
                  v303 = 0LL;
                }
                else
                {
                  v211 = (unsigned int *)(v210 - 3);
                  v1294 = v210 - 3;
                  v1348 = v210 - 3;
                  v1190 = v109;
                  v212 = a1[65543];
                  v213 = a1[65542];
                  v214 = v212;
                  v215 = (_QWORD *)*((_QWORD *)a1 + 32769);
                  v1234 = a1[65543];
                  v216 = v210 - 3 + a1[65542] - (_DWORD)v215;
                  v1287 = v215;
                  v1199 = a1[65542];
                  v1267 = v216;
                  if ( (int)v212 + 0x10000 <= v216 )
                    v214 = v216 - 0xFFFF;
                  v1220 = v214;
                  v217 = (_DWORD)v211 - v1259;
                  v1312 = (_QWORD *)*((_QWORD *)a1 + 32770);
                  v1242 = 256;
                  v218 = 0;
                  v1207 = 0;
                  v1362 = 0LL;
                  v1301 = (char *)v1312 + v213 - v212;
                  v219 = a1[65544];
                  v220 = *v211;
                  v1213 = *v211;
                  v1252 = 0;
                  if ( v219 < v216 )
                  {
                    v221 = (_DWORD *)((char *)v215 + v219 - v213);
                    do
                    {
                      v222 = (unsigned __int64)(unsigned int)(-1640531535 * *v221) >> 17;
                      v223 = v219 - a1[v222];
                      if ( v223 > 0xFFFF )
                        LOWORD(v223) = -1;
                      v221 = (_DWORD *)((char *)v221 + 1);
                      *((_WORD *)a1 + (unsigned __int16)v219 + 0x10000) = v223;
                      a1[v222] = v219++;
                    }
                    while ( v219 < v216 );
                    LODWORD(v213) = v1199;
                    v211 = (unsigned int *)(v210 - 3);
                    v220 = v1213;
                    v215 = v1287;
                  }
                  a1[65544] = v216;
                  v224 = -1640531535 * *v211;
                  v225 = v1220;
                  v226 = a1[v224 >> 17];
                  v227 = v217;
                  v1335 = v217;
                  if ( v226 >= v1220 )
                  {
                    while ( 1 )
                    {
                      v228 = 0;
                      v229 = v1207;
                      if ( v1242 <= 0 )
                      {
LABEL_470:
                        v189 = v1317;
                        v21 = v1304;
                        v109 = HIDWORD(v1275);
                        v218 = v1252;
                        goto LABEL_471;
                      }
                      --v1242;
                      if ( v226 >= (unsigned int)v213 )
                      {
                        v230 = (_DWORD *)((char *)v215 + v226 - (unsigned int)v213);
                        v231 = v1213;
                        if ( *(_WORD *)(v1259 + v1190 - 1) != *(_WORD *)((char *)v230 + v1190 - v227 - 1)
                          || *v230 != v1213 )
                        {
                          v229 = v1207;
LABEL_423:
                          v242 = v1262;
                          goto LABEL_362;
                        }
                        if ( v227 )
                        {
                          v232 = v1259 - v1348;
                          v233 = v1348 - 4;
                          v234 = 0LL;
                          if ( (__int64)(v1259 - v1348) <= -(__int64)(v226 - (unsigned int)v213) )
                            v232 = v213 - v226;
                          v235 = (char *)v230 - v1348;
                          while ( v228 - v232 > 3 )
                          {
                            if ( *(_DWORD *)v233 != *(_DWORD *)&v235[v233] )
                            {
                              _BitScanReverse(&v236, *(_DWORD *)v233 ^ *(_DWORD *)&v235[v233]);
                              v228 -= (31 - v236) >> 3;
                              goto LABEL_342;
                            }
                            v228 -= 4;
                            v234 -= 4LL;
                            v233 -= 4LL;
                          }
                          v237 = v232;
                          if ( v234 > v232 )
                          {
                            v238 = (_BYTE *)(v234 + v1368 + v1259 - 4);
                            do
                            {
                              if ( *v238 != *((_BYTE *)v1287 + v226 - (unsigned int)v213 + v234 - 1) )
                                break;
                              --v228;
                              --v234;
                              --v238;
                            }
                            while ( v234 > v237 );
                          }
                        }
LABEL_342:
                        v239 = (char *)(v1348 + 4);
                        v240 = v230 + 1;
                        v241 = v1348 + 4;
                        v242 = v1262;
                        if ( v1348 + 4 < (unsigned __int64)(v1262 - 7) )
                        {
                          if ( *v240 != *(_QWORD *)v239 )
                          {
                            __asm { tzcnt   rcx, r8 }
                            v245 = (unsigned int)_RCX >> 3;
LABEL_359:
                            v225 = v1220;
                            v248 = v245 - v228 + 4;
                            if ( v248 > v1190 )
                            {
                              v1190 = v248;
                              v1294 = v1348 + v228;
                              v1252 = v1267 - v226;
                            }
                            v229 = v1207;
                            goto LABEL_362;
                          }
                          while ( 1 )
                          {
                            v239 += 8;
                            ++v240;
                            if ( v239 >= v1262 - 7 )
                              break;
                            if ( *v240 != *(_QWORD *)v239 )
                            {
                              __asm { tzcnt   rax, r8 }
                              v245 = ((unsigned int)_RAX >> 3) - v241 + (_DWORD)v239;
                              goto LABEL_359;
                            }
                          }
                        }
                        if ( v239 < v1262 - 3 && *(_DWORD *)v240 == *(_DWORD *)v239 )
                        {
                          v239 += 4;
                          v240 = (_QWORD *)((char *)v240 + 4);
                        }
                        if ( v239 < v1262 - 1 && *(_WORD *)v240 == *(_WORD *)v239 )
                        {
                          v239 += 2;
                          v240 = (_QWORD *)((char *)v240 + 2);
                        }
                        if ( v239 < v1262 && *(_BYTE *)v240 == *v239 )
                          LODWORD(v239) = (_DWORD)v239 + 1;
                        v245 = (_DWORD)v239 - v241;
                        goto LABEL_359;
                      }
                      v250 = v226 - v1234;
                      v251 = (_DWORD *)((char *)v1312 + v250);
                      if ( v226 > (int)v213 - 4 || *v251 != v220 )
                      {
                        v231 = v1213;
                        goto LABEL_423;
                      }
                      v252 = (char *)(v1348 + 4);
                      v253 = v251 + 1;
                      v254 = (char *)(v1348 + (unsigned int)v213 - v226);
                      v255 = v1348 + 4;
                      if ( v254 > v1262 )
                        v254 = v1262;
                      if ( v252 >= v254 - 7 )
                        goto LABEL_377;
                      if ( *v253 == *(_QWORD *)v252 )
                        break;
                      __asm { tzcnt   rcx, r8 }
                      v258 = (unsigned int)_RCX >> 3;
LABEL_387:
                      v261 = v258 + 4;
                      v262 = (char *)(v1348 + (int)(v258 + 4));
                      if ( v262 == v254 && v254 < v1262 )
                      {
                        v263 = v1287;
                        v264 = (char *)(v1348 + v261);
                        if ( v262 >= v1262 - 7 )
                          goto LABEL_392;
                        if ( *v1287 != *(_QWORD *)v262 )
                        {
                          __asm { tzcnt   rcx, rdx }
                          v268 = (unsigned int)_RCX >> 3;
                        }
                        else
                        {
                          v264 = v262 + 8;
                          v263 = v1287 + 1;
LABEL_392:
                          while ( v264 < v1262 - 7 )
                          {
                            if ( *v263 != *(_QWORD *)v264 )
                            {
                              __asm { tzcnt   rax, r8 }
                              v268 = ((unsigned int)_RAX >> 3) - (_DWORD)v262 + (_DWORD)v264;
                              goto LABEL_407;
                            }
                            v264 += 8;
                            ++v263;
                          }
                          if ( v264 < v1262 - 3 && *(_DWORD *)v263 == *(_DWORD *)v264 )
                          {
                            v264 += 4;
                            v263 = (_QWORD *)((char *)v263 + 4);
                          }
                          if ( v264 < v1262 - 1 && *(_WORD *)v263 == *(_WORD *)v264 )
                          {
                            v264 += 2;
                            v263 = (_QWORD *)((char *)v263 + 2);
                          }
                          if ( v264 < v1262 && *(_BYTE *)v263 == *v264 )
                            LODWORD(v264) = (_DWORD)v264 + 1;
                          v268 = (_DWORD)v264 - (_DWORD)v262;
                        }
LABEL_407:
                        v261 += v268;
                      }
                      v270 = 0;
                      if ( v1335 )
                      {
                        v271 = (_DWORD *)(v1348 - 4);
                        v272 = v1259 - v1348;
                        v273 = -v250;
                        v274 = 0LL;
                        if ( (__int64)(v1259 - v1348) <= v273 )
                          v272 = v273;
                        v275 = (char *)v251 - v1348;
                        while ( v270 - v272 > 3 )
                        {
                          if ( *v271 != *(_DWORD *)((char *)v271 + (_QWORD)v275) )
                          {
                            _BitScanReverse(&v276, *v271 ^ *(_DWORD *)((char *)v271 + (_QWORD)v275));
                            v270 -= (31 - v276) >> 3;
                            goto LABEL_420;
                          }
                          v270 -= 4;
                          v274 -= 4LL;
                          --v271;
                        }
                        v277 = v272;
                        if ( v274 > v272 )
                        {
                          v278 = (_BYTE *)(v274 + v1368 + v1259 - 4);
                          do
                          {
                            if ( *v278 != *((_BYTE *)v1312 + v226 - v1234 + v274 - 1) )
                              break;
                            --v270;
                            --v274;
                            --v278;
                          }
                          while ( v274 > v277 );
                        }
                      }
LABEL_420:
                      v231 = v1213;
                      v279 = v261 - v270;
                      v229 = v1207;
                      v242 = v1262;
                      if ( v279 <= v1190 )
                      {
                        v225 = v1220;
                      }
                      else
                      {
                        v1190 = v279;
                        v225 = v1220;
                        v1294 = v1348 + v270;
                        v1252 = v1267 - v226;
                      }
LABEL_362:
                      if ( *((_WORD *)a1 + (unsigned __int16)v226 + 0x10000) != 1 )
                        goto LABEL_468;
                      v249 = v226 - 1;
                      if ( v229 )
                      {
                        if ( v1207 != 2 )
                          goto LABEL_468;
                      }
                      else
                      {
                        if ( (_BYTE)v231 != HIBYTE(v231) || (unsigned __int16)v231 != HIWORD(v231) )
                        {
                          v1207 = 1;
LABEL_468:
                          v226 -= *((unsigned __int16 *)a1 + (unsigned __int16)v226 + 0x10000);
                          goto LABEL_469;
                        }
                        v1207 = 2;
                        v1362 = (unsigned int)LZ4HC_countPattern(v1348 + 4, v242, v231) + 4LL;
                      }
                      if ( v249 < v225 || (unsigned int)v213 - v226 < 3 )
                        goto LABEL_468;
                      if ( v249 >= (unsigned int)v213 )
                      {
                        v280 = 0;
                        v282 = v1287;
                        v281 = (_DWORD *)((char *)v1287 + v249 - v1199);
                      }
                      else
                      {
                        v280 = 1;
                        v281 = (_DWORD *)((char *)v1312 + v249 - v1234);
                        v282 = v1287;
                      }
                      if ( *v281 != v231 )
                      {
                        LODWORD(v213) = v1199;
                        goto LABEL_468;
                      }
                      v283 = v1262;
                      if ( v280 )
                        v283 = v1301;
                      v284 = (unsigned int)LZ4HC_countPattern(v281 + 1, v283, v231) + 4LL;
                      if ( v280 )
                      {
                        v286 = v1213;
                        if ( (_DWORD *)((char *)v281 + v284) == v285 )
                        {
                          v287 = v1213;
                          v288 = 8 * (v284 & 3);
                          if ( v288 )
                            v287 = (unsigned int)__ROL4__(v1213, v288);
                          v284 += (unsigned int)LZ4HC_countPattern(v1287, v1262, v287);
                        }
                        v289 = v1312;
                        v290 = v1312;
                      }
                      else
                      {
                        v289 = v1312;
                        v290 = v282;
                        v286 = v1213;
                      }
                      v291 = LZ4HC_reverseCountPattern(v281, v290, v286);
                      v292 = v1287;
                      v293 = v280 == 0;
                      v294 = v291;
                      LODWORD(v213) = v1199;
                      if ( v293 && (_QWORD *)((char *)v281 - v291) == v1287 && v1234 < v1199 )
                      {
                        v295 = v286;
                        v296 = 8LL * (-v291 & 3);
                        if ( v296 )
                          v295 = (unsigned int)__ROL4__(v286, v296);
                        v297 = LZ4HC_reverseCountPattern(v1301, v289, v295);
                        v294 = v297 + v298;
                        v292 = v1287;
                      }
                      v299 = v249 - v294;
                      v225 = v1220;
                      v226 = v1220;
                      if ( v299 > v1220 )
                        v226 = v299;
                      v300 = v284 + v249 - v226;
                      if ( v300 < v1362 || v284 > v1362 )
                      {
                        if ( v1199 - v226 - 1 >= 3 )
                        {
                          if ( !v1335 )
                          {
                            v301 = v1362;
                            if ( v300 < v1362 )
                              v301 = v284 + v249 - v226;
                            if ( v1190 < v301 )
                            {
                              if ( v1199 + v1348 - v226 - (unsigned __int64)v292 > 0xFFFF )
                                goto LABEL_470;
                              v1190 = v301;
                              v1252 = v1267 - v226;
                              v1294 = v1348;
                            }
                            v302 = *((unsigned __int16 *)a1 + (unsigned __int16)v226 + 0x10000);
                            if ( v302 > v226 )
                              goto LABEL_470;
                            v226 -= v302;
                          }
                        }
                        else
                        {
                          v226 = v1199;
                        }
                      }
                      else
                      {
                        v226 = v1199;
                        if ( v1199 - ((_DWORD)v284 - (_DWORD)v1362 + v249) - 1 >= 3 )
                          v226 = v284 - v1362 + v249;
                      }
LABEL_469:
                      v220 = v1213;
                      v215 = v1287;
                      v227 = v1335;
                      if ( v226 < v225 )
                        goto LABEL_470;
                    }
                    while ( 1 )
                    {
                      v252 += 8;
                      ++v253;
                      if ( v252 >= v254 - 7 )
                        break;
                      if ( *v253 != *(_QWORD *)v252 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v258 = ((unsigned int)_RAX >> 3) - v255 + (_DWORD)v252;
                        goto LABEL_387;
                      }
                    }
LABEL_377:
                    if ( v252 < v254 - 3 && *(_DWORD *)v253 == *(_DWORD *)v252 )
                    {
                      v252 += 4;
                      v253 = (_QWORD *)((char *)v253 + 4);
                    }
                    if ( v252 < v254 - 1 && *(_WORD *)v253 == *(_WORD *)v252 )
                    {
                      v252 += 2;
                      v253 = (_QWORD *)((char *)v253 + 2);
                    }
                    if ( v252 < v254 && *(_BYTE *)v253 == *v252 )
                      LODWORD(v252) = (_DWORD)v252 + 1;
                    v258 = (_DWORD)v252 - v255;
                    goto LABEL_387;
                  }
LABEL_471:
                  v37 = v1229;
                  v207 = v1259;
                  v107 = v1331;
                  v303 = __PAIR64__(v1190, v218);
                  v304 = v1190;
                }
                if ( v304 <= v109 )
                  break;
                v110 = v1374;
                v305 = (_DWORD *)v1294;
                v306 = (unsigned __int64)v37 + v1374;
                if ( v1294 >= v306 + 3 )
                {
                  if ( v207 < v306 )
                  {
                    if ( (__int64)(v207 - (_QWORD)v37) >= 18 )
                    {
                      v110 = v207 - (_DWORD)v37;
                      v1374 = v207 - (_DWORD)v37;
                    }
                    else
                    {
                      if ( v1374 > 18 )
                        v110 = 18;
                      v1374 = v110;
                      if ( (unsigned __int64)v37 + v110 > v207 + v109 - 4LL )
                      {
                        v110 = v109 + v207 - (_DWORD)v37 - 4;
                        v1374 = v110;
                      }
                      v307 = v110 + (_DWORD)v37 - v207;
                      if ( v307 > 0 )
                      {
                        v1259 = v307 + v207;
                        HIDWORD(v1275) = v109 - v307;
                        v189 = v1275;
                      }
                    }
                  }
                  v308 = v1229;
                  v309 = v21;
                  v310 = v1278;
                  v311 = v21;
                  v312 = v21;
                  v313 = (char *)v1229 - v1278;
                  v314 = v21 + 1;
                  if ( a7 && (unsigned __int64)&v314[v313 / 0xFF + 8 + v313] > v1281 )
                    goto LABEL_598;
                  if ( v313 < 0xF )
                  {
                    *v311 = 16 * v313;
                  }
                  else
                  {
                    v315 = v313 - 15;
                    *v311 = -16;
                    if ( v313 - 15 >= 0xFF )
                    {
                      v316 = v315 * (unsigned __int128)0x8080808080808081uLL;
                      BYTE8(v316) = -1;
                      memset_0(v314, SDWORD2(v316), v315 / 0xFF);
                      v308 = v1229;
                      v314 += v315 / 0xFF;
                      v310 = v1278;
                      v311 = v309;
                      LOBYTE(v315) = v315 / 0xFF + v315;
                      v312 = v309;
                    }
                    *v314++ = v315;
                    v305 = (_DWORD *)v1294;
                  }
                  v317 = v314;
                  do
                  {
                    *v317 = *(_QWORD *)((char *)v317 + v310 - v314);
                    ++v317;
                  }
                  while ( v317 < (_QWORD *)&v314[v313] );
                  v318 = &v314[v313];
                  v110 = v1374;
                  *v318 = v1290;
                  v21 = v318 + 1;
                  v319 = v1374 - 4LL;
                  v1304 = v21;
                  if ( a7 && (unsigned __int64)&v21[v319 / 0xFF + 6] > v1281 )
                    goto LABEL_596;
                  v320 = *v312;
                  if ( v319 < 0xF )
                  {
                    *v311 = v319 + v320;
                  }
                  else
                  {
                    v321 = v1374 - 19LL;
                    *v311 = v320 + 15;
                    if ( v321 >= 0x1FE )
                    {
                      v322 = v321 / 0x1FE;
                      v321 %= 0x1FEuLL;
                      do
                      {
                        *v21 = -1;
                        v323 = v21 + 1;
                        *v323 = -1;
                        v21 = v323 + 1;
                        --v322;
                      }
                      while ( v322 );
                    }
                    if ( v321 >= 0xFF )
                    {
                      LOBYTE(v321) = v321 + 1;
                      *v21++ = -1;
                    }
                    *v21++ = v321;
                    v1304 = v21;
                  }
                  v37 = (_DWORD *)v1259;
                  v324 = (char *)v308 + v1374;
                  v107 = v1331;
                  v207 = (unsigned __int64)v305;
                  v1290 = v189;
                  v189 = v303;
                  v110 = HIDWORD(v1290);
                  v1275 = v303;
                  v109 = HIDWORD(v303);
                  v1374 = HIDWORD(v1290);
                  v1278 = v324;
                  v1229 = (_DWORD *)v1259;
                  v1259 = (unsigned __int64)v305;
                  v1317 = v303;
                }
                else
                {
                  if ( v1294 >= v306 )
                  {
                    if ( v207 < v306 )
                    {
                      v325 = v1374 + (_DWORD)v37 - v207;
                      v1259 = v325 + v207;
                      if ( v109 - v325 >= 4 )
                      {
                        HIDWORD(v1275) = v109 - v325;
                        v189 = v1275;
                      }
                      else
                      {
                        v1259 = v1294;
                        v189 = v303;
                      }
                    }
                    v326 = v1229;
                    v309 = v21;
                    v310 = v1278;
                    v327 = v21;
                    v328 = v21;
                    v329 = (char *)v1229 - v1278;
                    v330 = v21 + 1;
                    if ( a7 && (unsigned __int64)&v330[v329 / 0xFF + 8 + v329] > v1281 )
                    {
LABEL_598:
                      v22 = v1281;
                      v17 = v310;
                      v37 = v1229;
                      goto LABEL_599;
                    }
                    if ( v329 < 0xF )
                    {
                      *v327 = 16 * v329;
                    }
                    else
                    {
                      v331 = v329 - 15;
                      *v327 = -16;
                      if ( v329 - 15 >= 0xFF )
                      {
                        v332 = v331 * (unsigned __int128)0x8080808080808081uLL;
                        BYTE8(v332) = -1;
                        memset_0(v330, SDWORD2(v332), v331 / 0xFF);
                        v326 = v1229;
                        v330 += v331 / 0xFF;
                        v310 = v1278;
                        v327 = v309;
                        LOBYTE(v331) = v331 / 0xFF + v331;
                        v328 = v309;
                      }
                      *v330++ = v331;
                      v305 = (_DWORD *)v1294;
                    }
                    v333 = v330;
                    do
                    {
                      *v333 = *(_QWORD *)((char *)v333 + v310 - v330);
                      ++v333;
                    }
                    while ( v333 < (_QWORD *)&v330[v329] );
                    v334 = &v330[v329];
                    v110 = v1374;
                    v109 = 0;
                    *v334 = v1290;
                    v21 = v334 + 1;
                    v335 = v1374 - 4LL;
                    v1304 = v21;
                    if ( a7 && (unsigned __int64)&v21[v335 / 0xFF + 6] > v1281 )
                    {
LABEL_596:
                      v37 = v1229;
                      v17 = v1278;
                      v22 = v1281;
                      goto LABEL_599;
                    }
                    v336 = *v328;
                    if ( v335 < 0xF )
                    {
                      *v327 = v335 + v336;
                    }
                    else
                    {
                      v337 = v1374 - 19LL;
                      *v327 = v336 + 15;
                      if ( v337 >= 0x1FE )
                      {
                        v338 = v337 / 0x1FE;
                        v337 %= 0x1FEuLL;
                        do
                        {
                          *v21 = -1;
                          v339 = v21 + 1;
                          *v339 = -1;
                          v21 = v339 + 1;
                          --v338;
                        }
                        while ( v338 );
                      }
                      if ( v337 >= 0xFF )
                      {
                        LOBYTE(v337) = v337 + 1;
                        *v21++ = -1;
                      }
                      *v21++ = v337;
                      v1304 = v21;
                    }
                    v108 = (_DWORD *)v1259;
                    v107 = v1331;
                    v37 = v305;
                    v1278 = (char *)v326 + v1374;
                    v85 = v189;
                    v1361 = v1259;
                    v1229 = v305;
                    v1290 = v303;
                    v1300 = v189;
                    v1330 = HIDWORD(v189);
                    goto LABEL_143;
                  }
                  v1275 = v303;
                  v207 = v1294;
                  v109 = HIDWORD(v303);
                  v189 = v303;
                  v1259 = v1294;
                  v1317 = v303;
                }
              }
              if ( v207 < (unsigned __int64)v37 + v1374 )
                v1374 = v207 - (_DWORD)v37;
              v17 = v1278;
              v309 = v21;
              v340 = v21;
              v341 = v21;
              v342 = v21 + 1;
              v343 = (char *)v37 - v1278;
              if ( a7 )
              {
                v22 = v1281;
                if ( (unsigned __int64)&v342[v343 + 8 + v343 / 0xFF] > v1281 )
                {
                  v110 = v1374;
                  goto LABEL_599;
                }
              }
              if ( v343 < 0xF )
              {
                *v340 = 16 * v343;
              }
              else
              {
                v344 = v343 - 15;
                *v340 = -16;
                if ( v343 - 15 >= 0xFF )
                {
                  v345 = v344 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v345) = -1;
                  memset_0(v342, SDWORD2(v345), v344 / 0xFF);
                  v17 = v1278;
                  v342 += v344 / 0xFF;
                  v341 = v340;
                  v344 %= 0xFFuLL;
                }
                *v342++ = v344;
                v207 = v1259;
              }
              v346 = v342;
              do
              {
                *v346 = *(_QWORD *)((char *)v346 + v17 - v342);
                ++v346;
              }
              while ( v346 < (_QWORD *)&v342[v343] );
              v347 = &v342[v343];
              v22 = v1281;
              *v347 = v1290;
              v348 = v347 + 1;
              v349 = v1374 - 4LL;
              if ( a7 && (unsigned __int64)&v348[v349 / 0xFF + 6] > v1281 )
              {
                v110 = v1374;
                v37 = v1229;
                goto LABEL_599;
              }
              v350 = *v341;
              if ( v349 < 0xF )
              {
                *v340 = v349 + v350;
              }
              else
              {
                v351 = v1374 - 19LL;
                *v340 = v350 + 15;
                if ( v351 >= 0x1FE )
                {
                  v352 = v351 / 0x1FE;
                  v351 %= 0x1FEuLL;
                  do
                  {
                    *v348 = -1;
                    v353 = v348 + 1;
                    *v353 = -1;
                    v348 = v353 + 1;
                    --v352;
                  }
                  while ( v352 );
                }
                if ( v351 >= 0xFF )
                {
                  LOBYTE(v351) = v351 + 1;
                  *v348++ = -1;
                }
                *v348++ = v351;
              }
              v17 = (char *)v1229 + v1374;
              v309 = v348;
              v354 = v348;
              v1278 = v17;
              v355 = v348;
              v1229 = (_DWORD *)v207;
              v356 = v207 - (_QWORD)v17;
              v357 = v348 + 1;
              v37 = (_DWORD *)v207;
              if ( a7 && (unsigned __int64)&v357[v356 + 8 + v356 / 0xFF] > v1281 )
                goto LABEL_593;
              if ( v356 < 0xF )
              {
                *v354 = 16 * v356;
              }
              else
              {
                v358 = v356 - 15;
                *v354 = -16;
                if ( v356 - 15 >= 0xFF )
                {
                  v359 = v358 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v359) = -1;
                  memset_0(v357, SDWORD2(v359), v358 / 0xFF);
                  v17 = v1278;
                  v357 += v358 / 0xFF;
                  v355 = v354;
                  v358 %= 0xFFuLL;
                }
                *v357++ = v358;
                v207 = v1259;
              }
              v360 = v357;
              do
              {
                *v360 = *(_QWORD *)((char *)v360 + v17 - v357);
                ++v360;
              }
              while ( v360 < (_QWORD *)&v357[v356] );
              v361 = &v357[v356];
              v22 = v1281;
              *v361 = v1275;
              v21 = v361 + 1;
              v362 = SHIDWORD(v1275) - 4LL;
              v1304 = v21;
              if ( !a7 || (unsigned __int64)&v21[v362 / 0xFF + 6] <= v1281 )
              {
                v363 = *v355;
                if ( v362 < 0xF )
                {
                  *v354 = v362 + v363;
                }
                else
                {
                  v364 = SHIDWORD(v1275) - 19LL;
                  *v354 = v363 + 15;
                  if ( v364 >= 0x1FE )
                  {
                    v365 = v364 / 0x1FE;
                    v364 %= 0x1FEuLL;
                    do
                    {
                      *v21 = -1;
                      v366 = v21 + 1;
                      *v366 = -1;
                      v21 = v366 + 1;
                      --v365;
                    }
                    while ( v365 );
                  }
                  if ( v364 >= 0xFF )
                  {
                    LOBYTE(v364) = v364 + 1;
                    *v21++ = -1;
                  }
                  *v21++ = v364;
                  v1304 = v21;
                }
                v16 = (char *)(v207 + SHIDWORD(v1275));
                goto LABEL_591;
              }
              v37 = v1229;
LABEL_593:
              LOWORD(v1290) = v189;
              v110 = HIDWORD(v189);
              goto LABEL_599;
            }
            v37 = (_DWORD *)v1259;
            v1229 = (_DWORD *)v1259;
            v1290 = v189;
          }
          v17 = v1278;
          v309 = v21;
          v367 = v21;
          v368 = v21;
          v369 = v21 + 1;
          v370 = (char *)v37 - v1278;
          if ( a7 )
          {
            v22 = v1281;
            if ( (unsigned __int64)&v369[v370 / 0xFF + 8 + v370] > v1281 )
              goto LABEL_599;
          }
          if ( v370 < 0xF )
          {
            *v367 = 16 * v370;
          }
          else
          {
            v371 = v370 - 15;
            *v367 = -16;
            if ( v370 - 15 >= 0xFF )
            {
              v372 = v371 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v372) = -1;
              memset_0(v369, SDWORD2(v372), v371 / 0xFF);
              v110 = HIDWORD(v1290);
              v369 += v371 / 0xFF;
              v17 = v1278;
              v371 %= 0xFFuLL;
            }
            *v369++ = v371;
          }
          v373 = v369;
          do
          {
            *v373 = *(_QWORD *)((char *)v373 + v17 - v369);
            ++v373;
          }
          while ( v373 < (_QWORD *)&v369[v370] );
          v374 = &v369[v370];
          v22 = v1281;
          v375 = v110 - 4LL;
          *v374 = v1290;
          v21 = v374 + 1;
          v1304 = v21;
          if ( !a7 || (unsigned __int64)&v21[v375 / 0xFF + 6] <= v1281 )
          {
            v376 = *v368;
            if ( v375 < 0xF )
            {
              *v367 = v375 + v376;
            }
            else
            {
              v377 = v110 - 19LL;
              *v367 = v376 + 15;
              if ( v377 >= 0x1FE )
              {
                v378 = v377 / 0x1FE;
                v377 %= 0x1FEuLL;
                do
                {
                  *v21 = -1;
                  v379 = v21 + 1;
                  *v379 = -1;
                  v21 = v379 + 1;
                  --v378;
                }
                while ( v378 );
              }
              if ( v377 >= 0xFF )
              {
                LOBYTE(v377) = v377 + 1;
                *v21++ = -1;
              }
              *v21++ = v377;
              v1304 = v21;
            }
            v16 = (char *)v1229 + v110;
LABEL_591:
            v20 = v1331;
            v17 = v16;
            v1229 = v16;
            v1278 = v16;
            continue;
          }
          v37 = v1229;
LABEL_599:
          if ( a7 != 2 )
          {
            v393 = 0;
            goto LABEL_635;
          }
          v380 = (char *)v37 - v17;
          v21 = v309;
          v381 = ((char *)v37 - v17 + 240) / 0xFFuLL + (char *)v37 - v17 + 1;
          if ( (unsigned __int64)&v309[v381] <= v22 - 3 )
          {
            if ( v110 > 255 * (v22 - 3 - v381 - (unsigned __int64)v309) + 18 )
              v110 = 255 * (v22 - 3 - v381 - (_DWORD)v309) + 18;
            v1375 = v110;
            if ( (__int64)(v22 + v110 - v381 - (_QWORD)v309 + 2) >= 12 )
            {
              v382 = v309 + 1;
              if ( v380 < 0xF )
              {
                *v309 = 16 * v380;
              }
              else
              {
                v383 = v380 - 15;
                *v309 = -16;
                if ( v380 - 15 >= 0xFF )
                {
                  v384 = v383 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v384) = -1;
                  memset_0(v309 + 1, SDWORD2(v384), v383 / 0xFF);
                  v110 = v1375;
                  v382 += v383 / 0xFF;
                  v17 = v1278;
                  v22 = v1281;
                  LOBYTE(v383) = v383 / 0xFF + v383;
                }
                *v382++ = v383;
              }
              v385 = v382;
              v386 = v17 - v382;
              do
              {
                *v385 = *(_QWORD *)((char *)v385 + v386);
                ++v385;
              }
              while ( v385 < (_QWORD *)&v382[v380] );
              v387 = &v382[v380];
              v388 = v110 - 4LL;
              *v387 = v1290;
              v21 = v387 + 1;
              v389 = *v309;
              if ( v388 < 0xF )
              {
                *v309 = v388 + v389;
              }
              else
              {
                v390 = v110 - 19LL;
                *v309 = v389 + 15;
                if ( v390 >= 0x1FE )
                {
                  v391 = v390 / 0x1FE;
                  v390 %= 0x1FEuLL;
                  do
                  {
                    *v21 = -1;
                    v392 = v21 + 1;
                    *v392 = -1;
                    v21 = v392 + 1;
                    --v391;
                  }
                  while ( v391 );
                }
                if ( v390 >= 0xFF )
                {
                  LOBYTE(v390) = v390 + 1;
                  *v21++ = -1;
                }
                *v21++ = v390;
              }
              v17 = (char *)v1229 + v110;
              v1278 = v17;
            }
          }
          break;
        }
        v17 = v1278;
        v16 = (char *)v37 + 1;
        v22 = v1281;
        v20 = v1331;
        v1229 = v16;
      }
      v15 = a4;
      v19 = v1342;
    }
    v394 = v19 - v17;
    v395 = v21;
    if ( a7 == 2 )
    {
      v22 += 5LL;
    }
    else if ( !a7 )
    {
      goto LABEL_629;
    }
    if ( (unsigned __int64)&v21[(v394 + 240) / 0xFF + 1 + v394] > v22 )
    {
      if ( a7 == 1 )
      {
        v393 = 0;
LABEL_635:
        if ( v393 <= 0 )
          *((_BYTE *)a1 + 262183) = 1;
        return (unsigned int)v393;
      }
      v394 = v22 - (_QWORD)v21 - 1 - ((v22 - (unsigned __int64)v21 - 1 + 241) >> 8);
    }
LABEL_629:
    v396 = v394 + (_DWORD)v17;
    if ( v394 < 0xF )
    {
      *v21 = 16 * v394;
    }
    else
    {
      *v21 = -16;
      v397 = v394 - 15;
      ++v21;
      if ( v394 - 15 >= 0xFF )
      {
        v398 = v397 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v398) = -1;
        memset_0(v21, SDWORD2(v398), v397 / 0xFF);
        v17 = v1278;
        v21 += v397 / 0xFF;
        v397 %= 0xFFuLL;
      }
      v395 = v21;
      *v21 = v397;
    }
    memmove(v395 + 1, v17, v394);
    *v15 = v396 - v1370;
    v393 = v394 + (_DWORD)v21 + 1 - (_DWORD)a3;
    goto LABEL_635;
  }
  v400 = 0;
  if ( v12 || *a4 <= 4096 )
  {
    v756 = 1LL;
    if ( a7 == 2 && a5 < 1 )
      return v400;
    v757 = *a4;
    if ( (unsigned int)v757 > 0x7E000000 )
      return v400;
    v758 = &a3[a5];
    *((_QWORD *)v8 + 0x8000) = v7 + v757;
    v759 = Src;
    v760 = *a4;
    v761 = Src;
    v762 = &Src[v760];
    v763 = &Src[v760 - 12];
    *v9 = 0;
    v764 = v758 - 5;
    if ( a7 != 2 )
      v764 = v758;
    v1231 = Src;
    v1280 = Src;
    v765 = a3;
    v1277 = v764;
    v1336 = v762;
    v1333 = v763;
    v1261 = v762 - 5;
    v1306 = a3;
    v1264 = 0LL;
    v1303 = 0LL;
    if ( (int)v760 < 13 )
      goto LABEL_1994;
    while ( 1 )
    {
      if ( v761 > v763 )
        goto LABEL_1993;
      v766 = v8[65543];
      v767 = 3;
      v768 = v766;
      v769 = v8[65542];
      v770 = (_QWORD *)*((_QWORD *)v8 + 32769);
      v771 = *(_DWORD *)v761;
      v772 = (_DWORD)v761 + v8[65542] - (_DWORD)v770;
      v1363 = *((_QWORD *)v8 + 32773);
      v1339 = (_QWORD *)*((_QWORD *)v8 + 32770);
      v1194 = v8[65543];
      v1210 = 3;
      v1203 = v772;
      if ( (int)v766 + 0x10000 <= v772 )
        v768 = v772 - 0xFFFF;
      v1238 = *(_DWORD *)v761;
      v1256 = v768;
      v1379 = 0;
      v773 = (char *)(v769 + *((_QWORD *)v8 + 32770) - v766);
      v1358 = 0LL;
      v774 = 0;
      v1246 = 0;
      v775 = 0;
      v1325 = v773;
      v776 = 256;
      v777 = a1[65544];
      if ( v777 < v772 )
      {
        v778 = (_DWORD *)((char *)v770 + v777 - v769);
        do
        {
          v779 = (unsigned __int64)(unsigned int)(-1640531535 * *v778) >> 17;
          v780 = v777 - a1[v779];
          if ( v780 > 0xFFFF )
            LOWORD(v780) = -1;
          v778 = (_DWORD *)((char *)v778 + v756);
          *((_WORD *)a1 + (unsigned __int16)v777 + 0x10000) = v780;
          a1[v779] = v777;
          v777 += v756;
        }
        while ( v777 < v772 );
        v774 = 0;
        v767 = 3;
        v776 = 256;
      }
      a1[65544] = v772;
      v781 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *v1231) >> 17];
      if ( v781 >= v768 )
      {
        v782 = v771;
        while ( 1 )
        {
          v783 = v774;
          if ( v776 <= 0 )
          {
LABEL_1392:
            v765 = v1306;
            v771 = v1238;
            v775 = v1246;
            v772 = v1203;
            goto LABEL_1393;
          }
          v1224 = v776 - 1;
          if ( v781 >= (unsigned int)v769 )
            break;
          v794 = v1194;
          v795 = (_DWORD *)((char *)v1339 + v781 - v1194);
          if ( v781 <= (int)v769 - 4 && *v795 == v782 )
          {
            v796 = (char *)v1231 + (unsigned int)v769 - v781;
            v797 = (char *)(v1231 + 1);
            if ( v796 > v1261 )
              v796 = v1261;
            v798 = (_DWORD)v1231 + 4;
            v799 = v795 + 1;
            if ( v797 < v796 - 7 )
            {
              if ( *v799 != *(_QWORD *)v797 )
              {
                __asm { tzcnt   rcx, r9 }
                v802 = (unsigned int)_RCX >> 3;
                goto LABEL_1322;
              }
              while ( 1 )
              {
                v797 += 8;
                ++v799;
                if ( v797 >= v796 - 7 )
                  break;
                if ( *v799 != *(_QWORD *)v797 )
                {
                  __asm { tzcnt   rax, r9 }
                  v802 = ((unsigned int)_RAX >> 3) - v798 + (_DWORD)v797;
                  goto LABEL_1322;
                }
              }
            }
            if ( v797 < v796 - 3 && *(_DWORD *)v799 == *(_DWORD *)v797 )
            {
              v797 += 4;
              v799 = (_QWORD *)((char *)v799 + 4);
            }
            if ( v797 < v796 - 1 && *(_WORD *)v799 == *(_WORD *)v797 )
            {
              v797 += 2;
              v799 = (_QWORD *)((char *)v799 + 2);
            }
            if ( v797 < v796 && *(_BYTE *)v799 == *v797 )
              LODWORD(v797) = (_DWORD)v797 + 1;
            v802 = (_DWORD)v797 - v798;
LABEL_1322:
            v805 = v802 + 4;
            v806 = (char *)v1231 + (int)(v802 + 4);
            if ( v806 == v796 && v796 < v1261 )
            {
              v807 = v770;
              v808 = (char *)v1231 + (int)(v802 + 4);
              if ( v806 >= v1261 - 7 )
                goto LABEL_1327;
              if ( *v770 != *(_QWORD *)v806 )
              {
                __asm { tzcnt   rcx, rdx }
                v812 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v808 = v806 + 8;
                v807 = v770 + 1;
LABEL_1327:
                while ( v808 < v1261 - 7 )
                {
                  if ( *v807 != *(_QWORD *)v808 )
                  {
                    __asm { tzcnt   rax, r8 }
                    v812 = ((unsigned int)_RAX >> 3) - (_DWORD)v806 + (_DWORD)v808;
                    goto LABEL_1342;
                  }
                  v808 += 8;
                  ++v807;
                }
                if ( v808 < v1261 - 3 && *(_DWORD *)v807 == *(_DWORD *)v808 )
                {
                  v808 += 4;
                  v807 = (_QWORD *)((char *)v807 + 4);
                }
                if ( v808 < v1261 - 1 && *(_WORD *)v807 == *(_WORD *)v808 )
                {
                  v808 += 2;
                  v807 = (_QWORD *)((char *)v807 + 2);
                }
                if ( v808 < v1261 && *(_BYTE *)v807 == *v808 )
                  LODWORD(v808) = (_DWORD)v808 + 1;
                v812 = (_DWORD)v808 - (_DWORD)v806;
              }
LABEL_1342:
              v805 += v812;
            }
            v774 = v1379;
            if ( v805 > v1210 )
            {
              v1210 = v805;
              v1246 = v1203 - v781;
            }
LABEL_1346:
            v794 = v1194;
          }
LABEL_1347:
          if ( *((_WORD *)a1 + (unsigned __int16)v781 + 0x10000) != 1 )
            goto LABEL_1388;
          v814 = v781 - 1;
          if ( v774 )
          {
            v1379 = v783;
            if ( v783 != 2 )
              goto LABEL_1388;
            v815 = v1261;
          }
          else
          {
            if ( (_BYTE)v782 != HIBYTE(v782) || (unsigned __int16)v782 != HIWORD(v782) )
            {
              v1379 = 1;
LABEL_1388:
              v781 -= *((unsigned __int16 *)a1 + (unsigned __int16)v781 + 0x10000);
              goto LABEL_1389;
            }
            v815 = v1261;
            v1379 = 2;
            v1358 = (unsigned int)LZ4HC_countPattern(v1231 + 1, v1261, v782) + 4LL;
          }
          if ( v814 < v768 || (unsigned int)v769 - v814 - 1 < 3 )
            goto LABEL_1388;
          if ( v814 >= (unsigned int)v769 )
          {
            v816 = 0;
            v817 = (_DWORD *)((char *)v770 + v814 - (unsigned int)v769);
          }
          else
          {
            v816 = 1;
            v817 = (_DWORD *)((char *)v1339 + v814 - v794);
          }
          if ( *v817 != v782 )
          {
            v768 = v1256;
            goto LABEL_1388;
          }
          v818 = v815;
          if ( v816 )
            v818 = v1325;
          v819 = (unsigned int)LZ4HC_countPattern(v817 + 1, v818, v782) + 4LL;
          if ( v816 )
          {
            if ( (_DWORD *)((char *)v817 + v819) == v820 )
            {
              v821 = LZ4HC_rotatePattern(v819, v782);
              v819 += (unsigned int)LZ4HC_countPattern(v770, v1261, v821);
            }
            v822 = v1339;
          }
          else
          {
            v822 = v770;
          }
          v823 = LZ4HC_reverseCountPattern(v817, v822, v782);
          v824 = v823;
          if ( !v816 && (_QWORD *)((char *)v817 - v823) == v770 && v1194 < (unsigned int)v769 )
          {
            v825 = LZ4HC_rotatePattern(-v823, v782);
            v826 = LZ4HC_reverseCountPattern(v1325, v1339, v825);
            v824 = v826 + v827;
          }
          v768 = v1256;
          v828 = v814 - v824;
          v829 = v1256;
          if ( v828 > v1256 )
            v829 = v828;
          v830 = v819 + v814 - v829;
          if ( v830 < v1358 || v819 > v1358 )
          {
            if ( (unsigned int)v769 - v829 - 1 >= 3 )
            {
              v831 = v1358;
              if ( v830 < v1358 )
                v831 = v819 + v814 - v829;
              if ( v1210 < v831 )
              {
                if ( (unsigned __int64)(v769 + (char *)v1231 - v829 - (char *)v770) > 0xFFFF )
                  goto LABEL_1391;
                v1210 = v831;
                v1246 = v1203 - v829;
              }
              v832 = *((unsigned __int16 *)a1 + (unsigned __int16)v829 + 0x10000);
              if ( v832 > v829 )
              {
LABEL_1391:
                v776 = v1224;
                goto LABEL_1392;
              }
              v781 = v829 - v832;
            }
            else
            {
              v781 = v769;
            }
          }
          else
          {
            v781 = v769;
            if ( (unsigned int)v769 - (v814 - (_DWORD)v1358 + (_DWORD)v819) - 1 >= 3 )
              v781 = v814 - v1358 + v819;
          }
LABEL_1389:
          v774 = v1379;
          v776 = v1224;
          if ( v781 < v768 )
            goto LABEL_1392;
          v767 = v1210;
        }
        v784 = v781 - (unsigned int)v769;
        if ( *(_WORD *)((char *)v1231 + v767 - 1) != *(_WORD *)((char *)v770 + v767 + v784 - 1)
          || *(_DWORD *)((char *)v770 + v784) != v782 )
        {
          v774 = v1379;
          goto LABEL_1346;
        }
        v785 = (char *)(v1231 + 1);
        v786 = (_DWORD)v1231 + 4;
        v787 = (_QWORD *)((char *)v770 + v784 + 4);
        if ( v1231 + 1 < (_DWORD *)(v1261 - 7) )
        {
          if ( *v787 != *(_QWORD *)v785 )
          {
            __asm { tzcnt   rcx, r8 }
            v790 = (unsigned int)_RCX >> 3;
LABEL_1299:
            v774 = v1379;
            v793 = v790 + 4;
            v55 = v793 <= v767;
            v794 = v1194;
            if ( !v55 )
            {
              v1210 = v793;
              v1246 = v1203 - v781;
            }
            goto LABEL_1347;
          }
          while ( 1 )
          {
            v785 += 8;
            ++v787;
            if ( v785 >= v1261 - 7 )
              break;
            if ( *v787 != *(_QWORD *)v785 )
            {
              __asm { tzcnt   rax, r8 }
              v790 = ((unsigned int)_RAX >> 3) - v786 + (_DWORD)v785;
              goto LABEL_1299;
            }
          }
        }
        if ( v785 < v1261 - 3 && *(_DWORD *)v787 == *(_DWORD *)v785 )
        {
          v785 += 4;
          v787 = (_QWORD *)((char *)v787 + 4);
        }
        if ( v785 < v1261 - 1 && *(_WORD *)v787 == *(_WORD *)v785 )
        {
          v785 += 2;
          v787 = (_QWORD *)((char *)v787 + 2);
        }
        if ( v785 < v1261 && *(_BYTE *)v787 == *v785 )
          LODWORD(v785) = (_DWORD)v785 + 1;
        v790 = (_DWORD)v785 - v786;
        goto LABEL_1299;
      }
LABEL_1393:
      if ( v776 > 0 && v772 - v768 < 0xFFFF )
      {
        v833 = v1231;
        v834 = *(_QWORD *)(v1363 + 262152);
        v835 = *(unsigned int *)(v1363 + 262168);
        v836 = v835 + *(_QWORD *)(v1363 + 0x40000) - v834;
        v837 = *(_DWORD *)(v1363 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v1231) >> 17));
        v838 = v768 + v837 - v836;
        v839 = v1203 - v838;
        if ( v1203 - v838 <= 0xFFFF )
        {
          v840 = v1210;
          while ( 1 )
          {
            v1225 = v776 - 1;
            if ( !v776 )
            {
LABEL_1422:
              v1210 = v840;
              v765 = v1306;
              goto LABEL_1423;
            }
            if ( *(_DWORD *)(v834 - v835 + v837) == v771 )
              break;
LABEL_1421:
            v776 = v1225;
            v851 = *(unsigned __int16 *)(v1363 + 2LL * (unsigned __int16)v837 + 0x20000);
            v838 -= v851;
            v837 -= v851;
            v839 = v1203 - v838;
            if ( v1203 - v838 > 0xFFFF )
              goto LABEL_1422;
          }
          v841 = (unsigned __int64)v833 + v836 - v837;
          if ( v841 > (unsigned __int64)v1261 )
            v841 = (unsigned __int64)v1261;
          v842 = (_QWORD *)(v834 - v835 + 4 + v837);
          v843 = v1231 + 1;
          v844 = (_DWORD)v1231 + 4;
          if ( (unsigned __int64)(v1231 + 1) < v841 - 7 )
          {
            if ( *v842 != *v843 )
            {
              __asm { tzcnt   rcx, r10 }
              v847 = (unsigned int)_RCX >> 3;
LABEL_1418:
              v771 = v1238;
              v850 = v847 + 4;
              v833 = v1231;
              if ( v850 <= v840 )
              {
                v775 = v1246;
              }
              else
              {
                v840 = v850;
                v1246 = v839;
                v775 = v839;
              }
              goto LABEL_1421;
            }
            while ( 1 )
            {
              ++v843;
              ++v842;
              if ( (unsigned __int64)v843 >= v841 - 7 )
                break;
              if ( *v842 != *v843 )
              {
                __asm { tzcnt   rax, r10 }
                v847 = ((unsigned int)_RAX >> 3) - v844 + (_DWORD)v843;
                goto LABEL_1418;
              }
            }
          }
          if ( (unsigned __int64)v843 < v841 - 3 && *(_DWORD *)v842 == *(_DWORD *)v843 )
          {
            v843 = (_QWORD *)((char *)v843 + 4);
            v842 = (_QWORD *)((char *)v842 + 4);
          }
          if ( (unsigned __int64)v843 < v841 - 1 && *(_WORD *)v842 == *(_WORD *)v843 )
          {
            v843 = (_QWORD *)((char *)v843 + 2);
            v842 = (_QWORD *)((char *)v842 + 2);
          }
          if ( (unsigned __int64)v843 < v841 && *(_BYTE *)v842 == *(_BYTE *)v843 )
            LODWORD(v843) = (_DWORD)v843 + 1;
          v847 = (_DWORD)v843 - v844;
          goto LABEL_1418;
        }
      }
LABEL_1423:
      v852 = (char *)v1231;
      v853 = __PAIR64__(v1210, v775);
      v1320 = __PAIR64__(v1210, v775);
      v1289 = __PAIR64__(v1210, v775);
      if ( v1210 < 4 )
      {
        v759 = v1280;
        v756 = 1LL;
        v761 = (char *)v1231 + 1;
        goto LABEL_1425;
      }
      v854 = (char *)v1231;
      v1310 = v1210;
LABEL_1427:
      v855 = v1333;
      v1350 = v854;
      while ( 1 )
      {
        v856 = HIDWORD(v1289);
        v1380 = HIDWORD(v1289);
        v857 = &v852[SHIDWORD(v1289)];
        if ( v857 > v855 )
        {
          v1284 = 0LL;
          v972 = 0;
          v971 = 0LL;
        }
        else
        {
          v858 = v857 - 2;
          v1264 = (unsigned __int64)(v857 - 2);
          v1315 = v857 - 2;
          v1283 = (unsigned __int64)(v857 - 2);
          v859 = a1[65542];
          v860 = a1[65543];
          v861 = v860;
          v862 = (_QWORD *)*((_QWORD *)a1 + 32769);
          v863 = (_QWORD *)*((_QWORD *)a1 + 32770);
          v1364 = *((_QWORD *)a1 + 32773);
          v1195 = HIDWORD(v1289);
          v1247 = v859;
          v864 = (_DWORD)v857 - 2 + v859 - (_DWORD)v862;
          v1359 = 0LL;
          v1239 = 0;
          v865 = (unsigned int)v859;
          v1353 = v862;
          v1257 = v864;
          v1216 = a1[65543];
          if ( (int)v860 + 0x10000 <= v864 )
            v861 = v864 - 0xFFFF;
          v1292 = (_QWORD *)*((_QWORD *)a1 + 32770);
          v1271 = 256;
          LODWORD(v866) = HIDWORD(v1289) - 2;
          v1211 = *(_DWORD *)v858;
          v1326 = (char *)v863 + v859 - v860;
          v867 = 0;
          v1226 = v861;
          v1204 = 0;
          v868 = a1[65544];
          if ( v868 >= v864 )
          {
            v870 = a1;
          }
          else
          {
            v869 = (_DWORD *)((char *)v862 + v868 - v865);
            v870 = a1;
            do
            {
              v871 = (unsigned __int64)(unsigned int)(-1640531535 * *v869) >> 17;
              v872 = v868 - a1[v871];
              if ( v872 > 0xFFFF )
                LOWORD(v872) = -1;
              v869 = (_DWORD *)((char *)v869 + 1);
              *((_WORD *)a1 + (unsigned __int16)v868 + 0x10000) = v872;
              a1[v871] = v868++;
            }
            while ( v868 < v864 );
            v853 = v1320;
            v867 = 0;
            LODWORD(v860) = v1216;
          }
          v870[65544] = v864;
          v866 = (int)v866;
          v1297 = (int)v866;
          v873 = v870[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v858) >> 17];
          if ( v873 >= v861 )
          {
            LODWORD(v874) = v1247;
            while ( 1 )
            {
              v875 = v867;
              v1248 = v867;
              if ( v1271 <= 0 )
              {
LABEL_1584:
                v853 = v1320;
                v765 = v1306;
                goto LABEL_1585;
              }
              v876 = v1211;
              --v1271;
              if ( v873 >= (unsigned int)v874 )
              {
                v877 = (_DWORD *)((char *)v1353 + v873 - (unsigned int)v874);
                if ( *(_WORD *)((char *)v1231 + v1195 - 1) != *(_WORD *)((char *)v877 + v1195 - v866 - 1)
                  || *v877 != v1211 )
                {
                  v863 = v1292;
LABEL_1538:
                  v923 = v1216;
                  goto LABEL_1539;
                }
                v878 = 0;
                if ( v866 )
                {
                  v879 = 0LL;
                  v880 = (_DWORD)v1231 - (_DWORD)v858;
                  v881 = v877 - 1;
                  v882 = -(__int64)(v873 - (unsigned int)v874);
                  if ( (char *)v1231 - v858 <= v882 )
                    v880 = v882;
                  v883 = v858 - (char *)v877;
                  while ( v878 - v880 > 3 )
                  {
                    if ( *v881 != *(_DWORD *)((char *)v881 + v883) )
                    {
                      _BitScanReverse(&v884, *v881 ^ *(_DWORD *)((char *)v881 + v883));
                      v878 -= (31 - v884) >> 3;
                      goto LABEL_1456;
                    }
                    v878 -= 4;
                    v879 -= 4LL;
                    --v881;
                  }
                  v885 = v880;
                  if ( v879 > v880 )
                  {
                    v886 = (char *)v1231 + v879 + SHIDWORD(v1289) - 3;
                    do
                    {
                      if ( *v886 != *((_BYTE *)v1353 + v873 - (unsigned int)v874 + v879 - 1) )
                        break;
                      --v878;
                      --v879;
                      --v886;
                    }
                    while ( v879 > v885 );
                  }
                }
LABEL_1456:
                v887 = v858 + 4;
                v888 = v877 + 1;
                v889 = (_DWORD)v858 + 4;
                if ( v858 + 4 < v1261 - 7 )
                {
                  if ( *v888 != *(_QWORD *)v887 )
                  {
                    __asm { tzcnt   rcx, r8 }
                    v892 = (unsigned int)_RCX >> 3;
LABEL_1473:
                    v867 = v1204;
                    v863 = v1292;
                    v895 = v892 - v878 + 4;
                    v876 = v1211;
                    if ( v895 > v1195 )
                    {
                      v1195 = v895;
                      v1239 = v1257 - v873;
                      v1264 = (unsigned __int64)&v858[v878];
                    }
                    v875 = v1248;
                    goto LABEL_1538;
                  }
                  while ( 1 )
                  {
                    v887 += 8;
                    ++v888;
                    if ( v887 >= v1261 - 7 )
                      break;
                    if ( *v888 != *(_QWORD *)v887 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v892 = ((unsigned int)_RAX >> 3) - v889 + (_DWORD)v887;
                      goto LABEL_1473;
                    }
                  }
                }
                if ( v887 < v1261 - 3 && *(_DWORD *)v888 == *(_DWORD *)v887 )
                {
                  v887 += 4;
                  v888 = (_QWORD *)((char *)v888 + 4);
                }
                if ( v887 < v1261 - 1 && *(_WORD *)v888 == *(_WORD *)v887 )
                {
                  v887 += 2;
                  v888 = (_QWORD *)((char *)v888 + 2);
                }
                if ( v887 < v1261 && *(_BYTE *)v888 == *v887 )
                  LODWORD(v887) = (_DWORD)v887 + 1;
                v892 = (_DWORD)v887 - v889;
                goto LABEL_1473;
              }
              v896 = v873 - (unsigned int)v860;
              v897 = (_DWORD *)((char *)v863 + v896);
              if ( v873 > (int)v874 - 4 || *v897 != v1211 )
              {
                v858 = (char *)v1283;
                goto LABEL_1538;
              }
              v898 = v897 + 1;
              v899 = (char *)(v1283 + (unsigned int)v874 - v873);
              if ( v899 > v1261 )
                v899 = v1261;
              v900 = (char *)(v1283 + 4);
              v901 = v1283 + 4;
              if ( v1283 + 4 >= (unsigned __int64)(v899 - 7) )
                goto LABEL_1487;
              if ( *v898 == *(_QWORD *)v900 )
                break;
              __asm { tzcnt   rcx, r8 }
              v904 = (unsigned int)_RCX >> 3;
LABEL_1497:
              v907 = v904 + 4;
              v908 = (char *)(v1283 + (int)(v904 + 4));
              if ( v908 == v899 && v899 < v1261 )
              {
                v909 = v1353;
                v910 = (char *)(v1283 + v907);
                if ( v908 >= v1261 - 7 )
                  goto LABEL_1502;
                if ( *v1353 != *(_QWORD *)v908 )
                {
                  __asm { tzcnt   rcx, rdx }
                  v914 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v910 = v908 + 8;
                  v909 = v1353 + 1;
LABEL_1502:
                  while ( v910 < v1261 - 7 )
                  {
                    if ( *v909 != *(_QWORD *)v910 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v914 = ((unsigned int)_RAX >> 3) - (_DWORD)v908 + (_DWORD)v910;
                      goto LABEL_1517;
                    }
                    v910 += 8;
                    ++v909;
                  }
                  if ( v910 < v1261 - 3 && *(_DWORD *)v909 == *(_DWORD *)v910 )
                  {
                    v910 += 4;
                    v909 = (_QWORD *)((char *)v909 + 4);
                  }
                  if ( v910 < v1261 - 1 && *(_WORD *)v909 == *(_WORD *)v910 )
                  {
                    v910 += 2;
                    v909 = (_QWORD *)((char *)v909 + 2);
                  }
                  if ( v910 < v1261 && *(_BYTE *)v909 == *v910 )
                    LODWORD(v910) = (_DWORD)v910 + 1;
                  v914 = (_DWORD)v910 - (_DWORD)v908;
                }
LABEL_1517:
                v907 += v914;
              }
              v916 = 0;
              if ( v1297 )
              {
                v917 = v897 - 1;
                v918 = (_DWORD)v1231 - v1283;
                v919 = -v896;
                v920 = 0LL;
                if ( (__int64)((__int64)v1231 - v1283) <= v919 )
                  v918 = v919;
                v858 = (char *)v1283;
                v921 = v1283 - (_QWORD)v897;
                while ( v916 - v918 > 3 )
                {
                  if ( *v917 != *(_DWORD *)((char *)v917 + v921) )
                  {
                    _BitScanReverse(&v922, *v917 ^ *(_DWORD *)((char *)v917 + v921));
                    v916 -= (31 - v922) >> 3;
                    goto LABEL_1532;
                  }
                  v916 -= 4;
                  v920 -= 4LL;
                  --v917;
                }
                v923 = v1216;
                v924 = v918;
                if ( v920 > v918 )
                {
                  v925 = (char *)v1231 + v920 + SHIDWORD(v1289) - 3;
                  do
                  {
                    if ( *v925 != *((_BYTE *)v1292 + v873 - v1216 + v920 - 1) )
                      break;
                    --v916;
                    --v920;
                    --v925;
                  }
                  while ( v920 > v924 );
                }
              }
              else
              {
                v858 = (char *)v1283;
LABEL_1532:
                v923 = v1216;
              }
              v875 = v1248;
              v926 = v907 - v916;
              v876 = v1211;
              if ( v926 > v1195 )
              {
                v1195 = v926;
                v1239 = v1257 - v873;
                v1264 = (unsigned __int64)&v858[v916];
              }
              v867 = v1204;
              v863 = v1292;
LABEL_1539:
              if ( *((_WORD *)a1 + (unsigned __int16)v873 + 0x10000) != 1 )
                goto LABEL_1544;
              v927 = v873 - 1;
              if ( v867 )
              {
                v1204 = v875;
                if ( v875 != 2 )
                  goto LABEL_1544;
              }
              else
              {
                if ( (_BYTE)v876 != HIBYTE(v876) || (unsigned __int16)v876 != HIWORD(v876) )
                {
                  v1204 = 1;
LABEL_1544:
                  v873 -= *((unsigned __int16 *)a1 + (unsigned __int16)v873 + 0x10000);
LABEL_1545:
                  v866 = v1297;
                  goto LABEL_1546;
                }
                v1204 = 2;
                v1359 = (unsigned int)LZ4HC_countPattern(v858 + 4, v1261, v876) + 4LL;
              }
              if ( v927 < v1226 || (unsigned int)v874 - v873 < 3 )
                goto LABEL_1544;
              if ( v927 >= (unsigned int)v874 )
              {
                v928 = 0;
                v929 = (_DWORD *)((char *)v1353 + v927 - (unsigned int)v874);
              }
              else
              {
                v928 = 1;
                v929 = (_DWORD *)((char *)v863 + v927 - v923);
              }
              if ( *v929 != v1211 )
                goto LABEL_1544;
              v930 = v1261;
              if ( v928 )
                v930 = v1326;
              v931 = (unsigned int)LZ4HC_countPattern(v929 + 1, v930, v1211) + 4LL;
              if ( v928 )
              {
                if ( (char *)v929 + v931 == v930 )
                {
                  v932 = LZ4HC_rotatePattern(v931, v1211);
                  v931 += (unsigned int)LZ4HC_countPattern(v1353, v1261, v932);
                }
                v933 = v1292;
              }
              else
              {
                v933 = v1353;
              }
              v934 = LZ4HC_reverseCountPattern(v929, v933, v1211);
              v936 = v934;
              if ( !v928 && (_QWORD *)((char *)v929 - v934) == v1353 && v1216 < (unsigned int)v874 )
              {
                v937 = LZ4HC_rotatePattern(-v934, v935);
                v936 += LZ4HC_reverseCountPattern(v1326, v1292, v937);
              }
              v938 = v927 - v936;
              v873 = v1226;
              if ( v938 > v1226 )
                v873 = v938;
              v939 = v931 + v927 - v873;
              if ( v939 >= v1359 && v931 <= v1359 )
              {
                v873 = v874;
                if ( (unsigned int)v874 - ((_DWORD)v931 - (_DWORD)v1359 + v927) - 1 >= 3 )
                  v873 = v931 - v1359 + v927;
                goto LABEL_1545;
              }
              v866 = v1297;
              if ( (unsigned int)v874 - v873 - 1 >= 3 )
              {
                if ( !v1297 )
                {
                  v940 = v1359;
                  v858 = (char *)v1283;
                  if ( v939 < v1359 )
                    v940 = v931 + v927 - v873;
                  if ( v1195 < v940 )
                  {
                    if ( v874 + v1283 - v873 - (unsigned __int64)v1353 > 0xFFFF )
                      goto LABEL_1583;
                    v1195 = v940;
                    v1239 = v1257 - v873;
                    v1264 = v1283;
                  }
                  v941 = *((unsigned __int16 *)a1 + (unsigned __int16)v873 + 0x10000);
                  if ( v941 > v873 )
                  {
LABEL_1583:
                    v861 = v1226;
                    goto LABEL_1584;
                  }
                  v873 -= v941;
                }
              }
              else
              {
                v873 = v874;
              }
LABEL_1546:
              v861 = v1226;
              v867 = v1204;
              v863 = v1292;
              LODWORD(v860) = v1216;
              v858 = (char *)v1283;
              if ( v873 < v1226 )
                goto LABEL_1584;
            }
            while ( 1 )
            {
              v900 += 8;
              ++v898;
              if ( v900 >= v899 - 7 )
                break;
              if ( *v898 != *(_QWORD *)v900 )
              {
                __asm { tzcnt   rax, r8 }
                v904 = ((unsigned int)_RAX >> 3) - v901 + (_DWORD)v900;
                goto LABEL_1497;
              }
            }
LABEL_1487:
            if ( v900 < v899 - 3 && *(_DWORD *)v898 == *(_DWORD *)v900 )
            {
              v900 += 4;
              v898 = (_QWORD *)((char *)v898 + 4);
            }
            if ( v900 < v899 - 1 && *(_WORD *)v898 == *(_WORD *)v900 )
            {
              v900 += 2;
              v898 = (_QWORD *)((char *)v898 + 2);
            }
            if ( v900 < v899 && *(_BYTE *)v898 == *v900 )
              LODWORD(v900) = (_DWORD)v900 + 1;
            v904 = (_DWORD)v900 - v901;
            goto LABEL_1497;
          }
LABEL_1585:
          v942 = v1271;
          if ( v1271 > 0 && v1257 - v861 < 0xFFFF )
          {
            v943 = *(_QWORD *)(v1364 + 262152);
            v944 = *(unsigned int *)(v1364 + 262168);
            v945 = v944 + *(_QWORD *)(v1364 + 0x40000) - v943;
            v1340 = v943;
            v1327 = v945;
            v946 = *(_DWORD *)(v1364 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v858) >> 17));
            v1227 = v946 + v861 - v945;
            v947 = v1257 - v1227;
            if ( v1257 - v1227 <= 0xFFFF )
            {
              while ( 1 )
              {
                v948 = v942--;
                v1272 = v942;
                if ( !v948 )
                {
LABEL_1626:
                  v853 = v1320;
                  v765 = v1306;
                  goto LABEL_1627;
                }
                v949 = (_DWORD *)(v946 + v943 - v944);
                if ( *v949 == v1211 )
                  break;
LABEL_1625:
                v970 = *(unsigned __int16 *)(v1364 + 2LL * (unsigned __int16)v946 + 0x20000);
                v946 -= v970;
                v947 = v1257 - (v1227 - v970);
                v1227 -= v970;
                if ( v947 > 0xFFFF )
                  goto LABEL_1626;
              }
              v950 = (_QWORD *)(v1283 + 4);
              v951 = v949 + 1;
              v952 = (unsigned __int64)&v1315[v945 - v946];
              v953 = v1283 + 4;
              if ( v952 > (unsigned __int64)v1261 )
                v952 = (unsigned __int64)v1261;
              if ( (unsigned __int64)v950 < v952 - 7 )
              {
                if ( *v951 != *v950 )
                {
                  __asm { tzcnt   rcx, r8 }
                  v956 = (unsigned int)_RCX >> 3;
LABEL_1609:
                  v959 = v956 + 4;
                  v960 = 0;
                  if ( v1297 )
                  {
                    v961 = (_DWORD *)(v1283 - 4);
                    v962 = (_DWORD)v1231 - v1283;
                    v963 = 0LL;
                    if ( (__int64)((__int64)v1231 - v1283) <= v1340 - (__int64)v949 )
                      v962 = v1340 - (_DWORD)v949;
                    v964 = (char *)v949 - v1283;
                    while ( v960 - v962 > 3 )
                    {
                      if ( *v961 != *(_DWORD *)((char *)v961 + (_QWORD)v964) )
                      {
                        _BitScanReverse(&v965, *v961 ^ *(_DWORD *)((char *)v961 + (_QWORD)v964));
                        v960 -= (31 - v965) >> 3;
                        goto LABEL_1622;
                      }
                      v960 -= 4;
                      v963 -= 4LL;
                      --v961;
                    }
                    v966 = v962;
                    if ( v963 > v962 )
                    {
                      v967 = (char *)v1231 + v963 + SHIDWORD(v1289) - 3;
                      v968 = (_BYTE *)(v946 + v1340 + v963 - *(unsigned int *)(v1364 + 262168) - 1);
                      do
                      {
                        if ( *v967 != *v968 )
                          break;
                        --v960;
                        --v963;
                        --v968;
                        --v967;
                      }
                      while ( v963 > v966 );
                      v945 = v1327;
                    }
                  }
LABEL_1622:
                  v944 = *(unsigned int *)(v1364 + 262168);
                  v969 = v959 - v960;
                  v942 = v1272;
                  if ( v969 > v1195 )
                  {
                    v1195 = v969;
                    v1264 = v1283 + v960;
                    v1239 = v947;
                  }
                  v943 = *(_QWORD *)(v1364 + 262152);
                  goto LABEL_1625;
                }
                while ( 1 )
                {
                  ++v950;
                  ++v951;
                  if ( (unsigned __int64)v950 >= v952 - 7 )
                    break;
                  if ( *v951 != *v950 )
                  {
                    __asm { tzcnt   rax, r8 }
                    v956 = ((unsigned int)_RAX >> 3) - v953 + (_DWORD)v950;
                    goto LABEL_1609;
                  }
                }
              }
              if ( (unsigned __int64)v950 < v952 - 3 && *(_DWORD *)v951 == *(_DWORD *)v950 )
              {
                v950 = (_QWORD *)((char *)v950 + 4);
                v951 = (_QWORD *)((char *)v951 + 4);
              }
              if ( (unsigned __int64)v950 < v952 - 1 && *(_WORD *)v951 == *(_WORD *)v950 )
              {
                v950 = (_QWORD *)((char *)v950 + 2);
                v951 = (_QWORD *)((char *)v951 + 2);
              }
              if ( (unsigned __int64)v950 < v952 && *(_BYTE *)v951 == *(_BYTE *)v950 )
                LODWORD(v950) = (_DWORD)v950 + 1;
              v956 = (_DWORD)v950 - v953;
              goto LABEL_1609;
            }
          }
LABEL_1627:
          v854 = v1350;
          v856 = HIDWORD(v1289);
          v852 = (char *)v1231;
          v855 = v1333;
          v971 = __PAIR64__(v1195, v1239);
          v1284 = __PAIR64__(v1195, v1239);
          v972 = v1195;
        }
        v1316 = v971;
        if ( v972 <= v856 )
          break;
        v973 = v1264;
        if ( v854 < v852 && v1264 < (unsigned __int64)&v852[v1310] )
        {
          LOWORD(v1289) = v853;
          v852 = v854;
          v856 = HIDWORD(v853);
          v1380 = HIDWORD(v853);
          v1231 = v854;
        }
        if ( (__int64)(v1264 - (_QWORD)v852) >= 3 )
        {
          v756 = 1LL;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( (__int64)(v973 - (_QWORD)v852) < 18 )
              {
                v974 = v856;
                if ( v856 > 18 )
                  v974 = 18;
                if ( (unsigned __int64)&v852[v974] > v973 + v972 - 4LL )
                  v974 = v973 + v972 - (_DWORD)v852 - 4;
                v975 = v974 + (_DWORD)v852 - v973;
                if ( v975 > 0 )
                {
                  v973 += v975;
                  v972 -= v975;
                  v1264 = v973;
                  HIDWORD(v1284) = v972;
                  v971 = v1284;
                  v1316 = v1284;
                }
              }
              v976 = v972;
              v1351 = v972;
              v977 = v973 + v972;
              if ( v977 > (unsigned __int64)v855 )
              {
                v1096 = 0;
                v1095 = 0LL;
              }
              else
              {
                v1205 = v972;
                v1303 = v977 - 3;
                v1293 = (char *)(v977 - 3);
                v978 = a1[65542];
                v979 = a1[65543];
                v980 = v979;
                v981 = (_QWORD *)*((_QWORD *)a1 + 32769);
                v982 = (char *)*((_QWORD *)a1 + 32770);
                v983 = v977 - 3 + v978 - (_DWORD)v981;
                v1365 = *((_QWORD *)a1 + 32773);
                v1228 = v978;
                v1354 = (char *)v981;
                v984 = v978;
                v1273 = v983;
                v1240 = a1[65543];
                if ( (int)v979 + 0x10000 <= v983 )
                  v980 = v983 - 0xFFFF;
                v1321 = (char *)*((_QWORD *)a1 + 32770);
                LODWORD(v985) = v977 - 3 - v1264;
                v1258 = 256;
                v1212 = *(_DWORD *)(v977 - 3);
                v1328 = &v982[v978 - v979];
                v986 = 0;
                v1196 = 0;
                v1360 = 0LL;
                v1249 = 0;
                v987 = a1;
                v1217 = v980;
                v988 = a1[65544];
                if ( v988 < v983 )
                {
                  v989 = (_DWORD *)((char *)v981 + v988 - v984);
                  do
                  {
                    v990 = (unsigned __int64)(unsigned int)(-1640531535 * *v989) >> 17;
                    v991 = v988 - a1[v990];
                    if ( v991 > 0xFFFF )
                      LOWORD(v991) = -1;
                    v989 = (_DWORD *)((char *)v989 + v756);
                    *((_WORD *)a1 + (unsigned __int16)v988 + 0x10000) = v991;
                    a1[v990] = v988;
                    v988 += v756;
                  }
                  while ( v988 < v983 );
                  v986 = 0;
                  v982 = v1321;
                  v976 = v1351;
                  v987 = a1;
                }
                v992 = v1293;
                v987[65544] = v983;
                v985 = (int)v985;
                v1298 = (int)v985;
                v993 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v1293) >> 17];
                if ( v993 >= v980 )
                {
                  v1309 = v976 + v1264;
                  while ( 1 )
                  {
                    v994 = v986;
                    if ( v1258 <= 0 )
                    {
LABEL_1795:
                      v971 = v1316;
                      v765 = v1306;
                      goto LABEL_1796;
                    }
                    v1258 -= v756;
                    if ( v993 < v1228 )
                    {
                      v997 = v1212;
                      v1017 = v993 - (unsigned int)v979;
                      v1018 = &v982[v1017];
                      if ( v993 <= v1228 - 4 && *(_DWORD *)v1018 == v1212 )
                      {
                        v1019 = v1018 + 4;
                        v1020 = &v992[v1228 - v993];
                        if ( v1020 > v1261 )
                          v1020 = v1261;
                        v1021 = v1293 + 4;
                        v1022 = (_DWORD)v1293 + 4;
                        if ( v1293 + 4 < v1020 - 7 )
                        {
                          if ( *v1019 != *(_QWORD *)v1021 )
                          {
                            __asm { tzcnt   rcx, r8 }
                            v1025 = (unsigned int)_RCX >> 3;
                            goto LABEL_1712;
                          }
                          while ( 1 )
                          {
                            v1021 += 8;
                            ++v1019;
                            if ( v1021 >= v1020 - 7 )
                              break;
                            if ( *v1019 != *(_QWORD *)v1021 )
                            {
                              __asm { tzcnt   rax, r8 }
                              v1025 = ((unsigned int)_RAX >> 3) - v1022 + (_DWORD)v1021;
                              goto LABEL_1712;
                            }
                          }
                        }
                        if ( v1021 < v1020 - 3 && *(_DWORD *)v1019 == *(_DWORD *)v1021 )
                        {
                          v1021 += 4;
                          v1019 = (_QWORD *)((char *)v1019 + 4);
                        }
                        if ( v1021 < v1020 - 1 && *(_WORD *)v1019 == *(_WORD *)v1021 )
                        {
                          v1021 += 2;
                          v1019 = (_QWORD *)((char *)v1019 + 2);
                        }
                        if ( v1021 < v1020 && *(_BYTE *)v1019 == *v1021 )
                          LODWORD(v1021) = (_DWORD)v1021 + 1;
                        v1025 = (_DWORD)v1021 - v1022;
LABEL_1712:
                        v1028 = v1025 + 4;
                        v1029 = &v1293[v1025 + 4];
                        if ( v1029 == v1020 && v1020 < v1261 )
                        {
                          v1030 = v981;
                          v1031 = &v1293[v1028];
                          if ( v1029 >= v1261 - 7 )
                            goto LABEL_1717;
                          if ( *v981 != *(_QWORD *)v1029 )
                          {
                            __asm { tzcnt   rcx, rdx }
                            v1035 = (unsigned int)_RCX >> 3;
                          }
                          else
                          {
                            v1031 = v1029 + 8;
                            v1030 = v981 + 1;
LABEL_1717:
                            while ( v1031 < v1261 - 7 )
                            {
                              if ( *v1030 != *(_QWORD *)v1031 )
                              {
                                __asm { tzcnt   rax, r8 }
                                v1035 = ((unsigned int)_RAX >> 3) - (_DWORD)v1029 + (_DWORD)v1031;
                                goto LABEL_1732;
                              }
                              v1031 += 8;
                              ++v1030;
                            }
                            if ( v1031 < v1261 - 3 && *(_DWORD *)v1030 == *(_DWORD *)v1031 )
                            {
                              v1031 += 4;
                              v1030 = (_QWORD *)((char *)v1030 + 4);
                            }
                            if ( v1031 < v1261 - 1 && *(_WORD *)v1030 == *(_WORD *)v1031 )
                            {
                              v1031 += 2;
                              v1030 = (_QWORD *)((char *)v1030 + 2);
                            }
                            if ( v1031 < v1261 && *(_BYTE *)v1030 == *v1031 )
                              LODWORD(v1031) = (_DWORD)v1031 + 1;
                            v1035 = (_DWORD)v1031 - (_DWORD)v1029;
                          }
LABEL_1732:
                          v1028 += v1035;
                        }
                        v1037 = 0LL;
                        v1038 = 0;
                        if ( v1298 )
                        {
                          v1039 = v1018 - 4;
                          v1040 = v1264 - (_DWORD)v1293;
                          v1041 = -v1017;
                          if ( (__int64)(v1264 - (_QWORD)v1293) <= v1041 )
                            v1040 = v1041;
                          v1042 = v1293 - v1018;
                          while ( v1038 - v1040 > 3 )
                          {
                            if ( *(_DWORD *)v1039 != *(_DWORD *)&v1039[v1042] )
                            {
                              _BitScanReverse(&v1043, *(_DWORD *)v1039 ^ *(_DWORD *)&v1039[v1042]);
                              v1038 -= (31 - v1043) >> 3;
                              goto LABEL_1745;
                            }
                            v1038 -= 4;
                            v1037 -= 4LL;
                            v1039 -= 4;
                          }
                          v1044 = v1040;
                          if ( v1037 > v1040 )
                          {
                            v1045 = (_BYTE *)(v1037 + v1309 - 4);
                            do
                            {
                              if ( *v1045 != v1321[v993 - v1240 - 1 + v1037] )
                                break;
                              --v1038;
                              --v1037;
                              --v1045;
                            }
                            while ( v1037 > v1044 );
                          }
                        }
LABEL_1745:
                        v992 = v1293;
                        v1046 = v1028 - v1038;
                        v756 = 1LL;
                        v980 = v1217;
                        v997 = v1212;
                        if ( v1046 > v1205 )
                        {
                          v1205 = v1046;
                          v1249 = v1273 - v993;
                          v1303 = (unsigned __int64)&v1293[v1038];
                        }
                        v986 = v1196;
                      }
                      else
                      {
                        v980 = v1217;
                      }
                      v1010 = v1261;
                      goto LABEL_1751;
                    }
                    v995 = (_DWORD *)((char *)v981 + v993 - v1228);
                    v996 = v1205 - v985;
                    v997 = v1212;
                    if ( *(_WORD *)(v1264 + v1205 - 1) != *(_WORD *)((char *)v995 + v996 - 1) || *v995 != v1212 )
                    {
                      v1010 = v1261;
                      goto LABEL_1751;
                    }
                    v998 = 0;
                    if ( v1298 )
                    {
                      v999 = 0LL;
                      v1000 = v1264 - (_DWORD)v992;
                      v1001 = v992 - 4;
                      v1002 = -(__int64)(v993 - v1228);
                      if ( (__int64)(v1264 - (_QWORD)v992) <= v1002 )
                        v1000 = v1002;
                      v1003 = (char *)v995 - v992;
                      while ( v998 - v1000 > 3 )
                      {
                        if ( *(_DWORD *)v1001 != *(_DWORD *)&v1001[v1003] )
                        {
                          _BitScanReverse(&v1004, *(_DWORD *)v1001 ^ *(_DWORD *)&v1001[v1003]);
                          v998 -= (31 - v1004) >> 3;
                          goto LABEL_1670;
                        }
                        v998 -= 4;
                        v999 -= 4LL;
                        v1001 -= 4;
                      }
                      v1005 = v1000;
                      if ( v999 > v1000 )
                      {
                        v1006 = (_BYTE *)(v976 + v999 + v1264 - 4);
                        do
                        {
                          if ( *v1006 != *((_BYTE *)v981 + v993 - v1228 + v999 - 1) )
                            break;
                          --v998;
                          --v999;
                          --v1006;
                        }
                        while ( v999 > v1005 );
                      }
LABEL_1670:
                      v992 = v1293;
                    }
                    v1007 = v992 + 4;
                    v1008 = v995 + 1;
                    v1009 = (_DWORD)v992 + 4;
                    v1010 = v1261;
                    if ( v992 + 4 >= v1261 - 7 )
                      goto LABEL_1678;
                    if ( *(_QWORD *)v1007 == *v1008 )
                      break;
                    __asm { tzcnt   rcx, r8 }
                    v1013 = (unsigned int)_RCX >> 3;
LABEL_1688:
                    v992 = v1293;
                    v986 = v1196;
                    v1016 = v1013 - v998 + 4;
                    v997 = v1212;
                    if ( v1016 > v1205 )
                    {
                      v1205 = v1016;
                      v1249 = v1273 - v993;
                      v1303 = (unsigned __int64)&v1293[v998];
                    }
                    v756 = 1LL;
LABEL_1751:
                    if ( *((_WORD *)a1 + (unsigned __int16)v993 + 0x10000) != (_WORD)v756 )
                      goto LABEL_1756;
                    v1047 = v993 - 1;
                    if ( v986 )
                    {
                      v1196 = v994;
                      if ( v994 != 2 )
                        goto LABEL_1756;
                    }
                    else
                    {
                      if ( (_BYTE)v997 != HIBYTE(v997) || (unsigned __int16)v997 != HIWORD(v997) )
                      {
                        v1196 = v756;
LABEL_1756:
                        v985 = v1298;
                        v993 -= *((unsigned __int16 *)a1 + (unsigned __int16)v993 + 0x10000);
                        goto LABEL_1782;
                      }
                      v1196 = 2;
                      v1360 = (unsigned int)LZ4HC_countPattern(v992 + 4, v1010, v997) + 4LL;
                    }
                    if ( v1047 < v980 || v1228 - v1047 - (unsigned int)v756 < 3 )
                      goto LABEL_1756;
                    if ( v1047 >= v1228 )
                    {
                      v1048 = 0;
                      v1049 = &v1354[v1047 - v1228];
                    }
                    else
                    {
                      v1048 = v756;
                      v1049 = &v1321[v1047 - v1240];
                    }
                    if ( *(_DWORD *)v1049 != v1212 )
                      goto LABEL_1756;
                    v1050 = v1261;
                    if ( v1048 )
                      v1050 = v1328;
                    v1051 = (unsigned int)LZ4HC_countPattern(v1049 + 4, v1050, v1212) + 4LL;
                    if ( v1048 )
                    {
                      if ( &v1049[v1051] == v1052 )
                      {
                        v1053 = LZ4HC_rotatePattern(v1051, v1212);
                        v1051 += (unsigned int)LZ4HC_countPattern(v1354, v1261, v1053);
                      }
                      v1054 = v1321;
                      v1055 = v1321;
                    }
                    else
                    {
                      v1054 = v1321;
                      v1055 = v1354;
                    }
                    v1056 = LZ4HC_reverseCountPattern(v1049, v1055, v1212);
                    v1058 = v1056;
                    if ( !v1048 && &v1049[-v1056] == v1354 && v1240 < v1228 )
                    {
                      v1059 = LZ4HC_rotatePattern(-v1056, v1057);
                      v1060 = LZ4HC_reverseCountPattern(v1328, v1054, v1059);
                      v1058 = v1060 + v1061;
                    }
                    v993 = v1217;
                    if ( v1047 - v1058 > v1217 )
                      v993 = v1047 - v1058;
                    v1062 = v1051 + v1047 - v993;
                    if ( v1062 >= v1360 && v1051 <= v1360 )
                    {
                      v985 = v1298;
                      v756 = 1LL;
                      v993 = v1228;
                      if ( v1228 - (v1047 - (_DWORD)v1360 + (_DWORD)v1051) - 1 >= 3 )
                        v993 = v1047 - v1360 + v1051;
                      goto LABEL_1781;
                    }
                    v985 = v1298;
                    v756 = 1LL;
                    if ( v1228 - v993 - 1 < 3 )
                    {
                      v993 = v1228;
LABEL_1781:
                      v980 = v1217;
                      goto LABEL_1782;
                    }
                    if ( v1298 )
                      goto LABEL_1781;
                    v1063 = v1360;
                    if ( v1062 < v1360 )
                      v1063 = v1051 + v1047 - v993;
                    if ( v1205 < v1063 )
                    {
                      if ( (unsigned __int64)v1228 + &v1293[-v993] - v1354 > 0xFFFF )
                      {
                        v980 = v1217;
                        goto LABEL_1795;
                      }
                      v1205 = v1063;
                      v1249 = v1273 - v993;
                      v1303 = (unsigned __int64)v1293;
                    }
                    v980 = v1217;
                    v1064 = *((unsigned __int16 *)a1 + (unsigned __int16)v993 + 0x10000);
                    if ( v1064 > v993 )
                      goto LABEL_1795;
                    v993 -= v1064;
LABEL_1782:
                    v981 = v1354;
                    v986 = v1196;
                    v982 = v1321;
                    LODWORD(v979) = v1240;
                    v976 = v1351;
                    v992 = v1293;
                    if ( v993 < v980 )
                      goto LABEL_1795;
                  }
                  while ( 1 )
                  {
                    v1007 += 8;
                    ++v1008;
                    if ( v1007 >= v1261 - 7 )
                      break;
                    if ( *(_QWORD *)v1007 != *v1008 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v1013 = ((unsigned int)_RAX >> 3) - v1009 + (_DWORD)v1007;
                      goto LABEL_1688;
                    }
                  }
LABEL_1678:
                  if ( v1007 < v1261 - 3 && *(_DWORD *)v1008 == *(_DWORD *)v1007 )
                  {
                    v1007 += 4;
                    v1008 = (_QWORD *)((char *)v1008 + 4);
                  }
                  if ( v1007 < v1261 - 1 && *(_WORD *)v1008 == *(_WORD *)v1007 )
                  {
                    v1007 += 2;
                    v1008 = (_QWORD *)((char *)v1008 + 2);
                  }
                  if ( v1007 < v1261 && *(_BYTE *)v1008 == *v1007 )
                    LODWORD(v1007) = (_DWORD)v1007 + 1;
                  v1013 = (_DWORD)v1007 - v1009;
                  goto LABEL_1688;
                }
LABEL_1796:
                if ( v1258 > 0 && v1273 - v980 < 0xFFFF )
                {
                  v1065 = v1293;
                  v1066 = *(_QWORD *)(v1365 + 262152);
                  v1067 = *(unsigned int *)(v1365 + 262168);
                  v1341 = v1066;
                  v1329 = v1067 + *(_QWORD *)(v1365 + 0x40000) - v1066;
                  v1068 = *(_DWORD *)(v1365
                                    + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v1293) >> 17));
                  v1069 = v980 + v1068 - v1329;
                  v1070 = v1273 - v1069;
                  if ( v1273 - v1069 <= 0xFFFF )
                  {
                    v1071 = v1067 + *(_QWORD *)(v1365 + 0x40000) - v1066;
                    while ( 1 )
                    {
                      v1072 = v1258;
                      v1258 -= v756;
                      if ( !v1072 )
                      {
LABEL_1838:
                        v971 = v1316;
                        v765 = v1306;
                        goto LABEL_1839;
                      }
                      v1073 = (_DWORD *)(v1066 + v1068 - v1067);
                      if ( *v1073 == v1212 )
                        break;
LABEL_1837:
                      v1094 = *(unsigned __int16 *)(v1365 + 2LL * (unsigned __int16)v1068 + 0x20000);
                      v1069 -= v1094;
                      v1068 -= v1094;
                      v1070 = v1273 - v1069;
                      if ( v1273 - v1069 > 0xFFFF )
                        goto LABEL_1838;
                    }
                    v1074 = v1065 + 4;
                    v1075 = v1073 + 1;
                    v1076 = (unsigned __int64)&v1065[v1071 - v1068];
                    v1077 = (_DWORD)v1065 + 4;
                    if ( v1076 > (unsigned __int64)v1261 )
                      v1076 = (unsigned __int64)v1261;
                    if ( (unsigned __int64)v1074 < v1076 - 7 )
                    {
                      if ( *v1075 != *v1074 )
                      {
                        __asm { tzcnt   rcx, r8 }
                        v1080 = (unsigned int)_RCX >> 3;
LABEL_1821:
                        v1083 = v1080 + 4;
                        v1084 = 0;
                        if ( v1298 )
                        {
                          v1085 = v1073 - 1;
                          v1086 = v1264 - (_DWORD)v1293;
                          v1087 = 0LL;
                          if ( (__int64)(v1264 - (_QWORD)v1293) <= v1341 - (__int64)v1073 )
                            v1086 = v1341 - (_DWORD)v1073;
                          v1088 = v1293 - (char *)v1073;
                          while ( v1084 - v1086 > 3 )
                          {
                            if ( *v1085 != *(_DWORD *)((char *)v1085 + v1088) )
                            {
                              _BitScanReverse(&v1089, *v1085 ^ *(_DWORD *)((char *)v1085 + v1088));
                              v1084 -= (31 - v1089) >> 3;
                              goto LABEL_1834;
                            }
                            v1084 -= 4;
                            v1087 -= 4LL;
                            --v1085;
                          }
                          v1090 = v1086;
                          if ( v1087 > v1086 )
                          {
                            v1091 = (_BYTE *)(v1087
                                            + v1341
                                            + v1068
                                            - (unsigned __int64)*(unsigned int *)(v1365 + 262168)
                                            - 1);
                            v1092 = (_BYTE *)(v1087 + v1264 + v1351 - 4);
                            do
                            {
                              if ( *v1092 != *v1091 )
                                break;
                              --v1084;
                              --v1087;
                              --v1092;
                              --v1091;
                            }
                            while ( v1087 > v1090 );
                            v1071 = v1329;
                          }
                        }
LABEL_1834:
                        v1065 = v1293;
                        v1093 = v1083 - v1084;
                        v1066 = *(_QWORD *)(v1365 + 262152);
                        v1067 = *(unsigned int *)(v1365 + 262168);
                        if ( v1093 > v1205 )
                        {
                          v1205 = v1093;
                          v1303 = (unsigned __int64)&v1293[v1084];
                          v1249 = v1070;
                        }
                        v756 = 1LL;
                        goto LABEL_1837;
                      }
                      while ( 1 )
                      {
                        ++v1074;
                        ++v1075;
                        if ( (unsigned __int64)v1074 >= v1076 - 7 )
                          break;
                        if ( *v1075 != *v1074 )
                        {
                          __asm { tzcnt   rax, r8 }
                          v1080 = ((unsigned int)_RAX >> 3) - v1077 + (_DWORD)v1074;
                          goto LABEL_1821;
                        }
                      }
                    }
                    if ( (unsigned __int64)v1074 < v1076 - 3 && *(_DWORD *)v1075 == *(_DWORD *)v1074 )
                    {
                      v1074 = (_QWORD *)((char *)v1074 + 4);
                      v1075 = (_QWORD *)((char *)v1075 + 4);
                    }
                    if ( (unsigned __int64)v1074 < v1076 - 1 && *(_WORD *)v1075 == *(_WORD *)v1074 )
                    {
                      v1074 = (_QWORD *)((char *)v1074 + 2);
                      v1075 = (_QWORD *)((char *)v1075 + 2);
                    }
                    if ( (unsigned __int64)v1074 < v1076 && *(_BYTE *)v1075 == *(_BYTE *)v1074 )
                      LODWORD(v1074) = (_DWORD)v1074 + 1;
                    v1080 = (_DWORD)v1074 - v1077;
                    goto LABEL_1821;
                  }
                }
LABEL_1839:
                v972 = HIDWORD(v1284);
                v852 = (char *)v1231;
                v973 = v1264;
                v855 = v1333;
                v1095 = __PAIR64__(v1205, v1249);
                v1096 = v1205;
              }
              if ( v1096 <= v972 )
              {
                if ( v973 < (unsigned __int64)&v852[v1380] )
                  v1380 = v973 - (_DWORD)v852;
                v1127 = (char *)v1231;
                v1099 = v765;
                v759 = v1280;
                v1128 = v765;
                v1129 = v765;
                v1130 = (char *)v1231 - v1280;
                v1131 = &v765[v756];
                if ( a7 && &v1131[v1130 / 0xFF + 8 + v1130] > v1277 )
                {
                  v856 = v1380;
                  goto LABEL_1971;
                }
                if ( v1130 < 0xF )
                {
                  *v1128 = 16 * v1130;
                }
                else
                {
                  v1132 = v1130 - 15;
                  *v1128 = -16;
                  if ( v1130 - 15 >= 0xFF )
                  {
                    v1133 = v1132 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v1133) = -1;
                    memset_0(v1131, SDWORD2(v1133), v1132 / 0xFF);
                    v759 = v1280;
                    v1131 += v1132 / 0xFF;
                    v1129 = v1128;
                    v756 = 1LL;
                    v1132 %= 0xFFuLL;
                  }
                  *v1131 = v1132;
                  v1131 += v756;
                  v973 = v1264;
                }
                v1134 = v1131;
                do
                {
                  *v1134 = *(_QWORD *)((char *)v1134 + v759 - v1131);
                  ++v1134;
                }
                while ( v1134 < (_QWORD *)&v1131[v1130] );
                v1135 = &v1131[v1130];
                v856 = v1380;
                *v1135 = v1289;
                v1136 = v1135 + 1;
                v1137 = v1380 - 4LL;
                if ( a7 && &v1136[v1137 / 0xFF + 6] > v1277 )
                {
                  v1127 = (char *)v1231;
                  v764 = v1277;
                }
                else
                {
                  v1138 = *v1129;
                  if ( v1137 < 0xF )
                  {
                    *v1128 = v1137 + v1138;
                  }
                  else
                  {
                    v1139 = v1380 - 19LL;
                    *v1128 = v1138 + 15;
                    if ( v1139 >= 0x1FE )
                    {
                      v1140 = v1139 / 0x1FE;
                      v1139 %= 0x1FEuLL;
                      do
                      {
                        *v1136 = -1;
                        v1141 = &v1136[v756];
                        *v1141 = -1;
                        v1136 = &v1141[v756];
                        v1140 -= v756;
                      }
                      while ( v1140 );
                    }
                    if ( v1139 >= 0xFF )
                    {
                      LOBYTE(v1139) = v1139 + 1;
                      *v1136 = -1;
                      v1136 += v756;
                    }
                    *v1136 = v1139;
                    v1136 += v756;
                  }
                  v1099 = v1136;
                  v759 = (char *)v1231 + v1380;
                  v1142 = v1136;
                  v1280 = v759;
                  v1143 = v1136;
                  v1144 = v973 - (_QWORD)v759;
                  v1145 = &v1136[v756];
                  v1127 = (char *)v973;
                  v1231 = (_DWORD *)v973;
                  if ( a7 && &v1145[v1144 + 8 + v1144 / 0xFF] > v1277 )
                    goto LABEL_1961;
                  if ( v1144 < 0xF )
                  {
                    *v1142 = 16 * v1144;
                  }
                  else
                  {
                    v1146 = v1144 - 15;
                    *v1142 = -16;
                    if ( v1144 - 15 >= 0xFF )
                    {
                      v1147 = v1146 * (unsigned __int128)0x8080808080808081uLL;
                      BYTE8(v1147) = -1;
                      memset_0(v1145, SDWORD2(v1147), v1146 / 0xFF);
                      v759 = v1280;
                      v1145 += v1146 / 0xFF;
                      v1143 = v1142;
                      v756 = 1LL;
                      v1146 %= 0xFFuLL;
                    }
                    *v1145 = v1146;
                    v1145 += v756;
                    v973 = v1264;
                  }
                  v1148 = v1145;
                  do
                  {
                    *v1148 = *(_QWORD *)((char *)v1148 + v759 - v1145);
                    ++v1148;
                  }
                  while ( v1148 < (_QWORD *)&v1145[v1144] );
                  v1149 = &v1145[v1144];
                  *v1149 = v1284;
                  v765 = v1149 + 1;
                  v1150 = SHIDWORD(v1284) - 4LL;
                  v1306 = v765;
                  if ( !a7 || &v765[v1150 / 0xFF + 6] <= v1277 )
                  {
                    v1151 = *v1143;
                    if ( v1150 < 0xF )
                    {
                      *v1142 = v1150 + v1151;
                    }
                    else
                    {
                      v1152 = SHIDWORD(v1284) - 19LL;
                      *v1142 = v1151 + 15;
                      if ( v1152 >= 0x1FE )
                      {
                        v1153 = v1152 / 0x1FE;
                        v1152 %= 0x1FEuLL;
                        do
                        {
                          *v765 = -1;
                          v1154 = &v765[v756];
                          *v1154 = -1;
                          v765 = &v1154[v756];
                          v1153 -= v756;
                        }
                        while ( v1153 );
                      }
                      if ( v1152 >= 0xFF )
                      {
                        LOBYTE(v1152) = v1152 + 1;
                        *v765 = -1;
                        v765 += v756;
                      }
                      *v765 = v1152;
                      v765 += v756;
                      v1306 = v765;
                    }
                    v761 = (char *)(v973 + SHIDWORD(v1284));
                    goto LABEL_1959;
                  }
                  v1127 = (char *)v1231;
LABEL_1961:
                  LOWORD(v1289) = v971;
                  v856 = HIDWORD(v971);
LABEL_1971:
                  v764 = v1277;
                }
                goto LABEL_1972;
              }
              v856 = v1380;
              v1097 = (unsigned __int64)&v852[v1380];
              if ( v1303 < v1097 + 3 )
                break;
              if ( v973 < v1097 )
              {
                if ( (__int64)(v973 - (_QWORD)v852) >= 18 )
                {
                  v856 = v973 - (_DWORD)v852;
                  v1380 = v973 - (_DWORD)v852;
                }
                else
                {
                  if ( v1380 > 18 )
                    v856 = 18;
                  v1380 = v856;
                  if ( (unsigned __int64)&v852[v856] > v973 + v972 - 4LL )
                  {
                    v856 = v973 + v972 - (_DWORD)v852 - 4;
                    v1380 = v856;
                  }
                  v1098 = v856 + (_DWORD)v852 - v973;
                  if ( v1098 > 0 )
                  {
                    v973 += v1098;
                    v1264 = v973;
                    HIDWORD(v1284) = v972 - v1098;
                    v971 = v1284;
                  }
                }
              }
              v1099 = v765;
              v1100 = v852 - v1280;
              v1101 = v765;
              v1102 = v765;
              v1103 = &v765[v756];
              if ( a7 && &v1103[v1100 / 0xFF + 8 + v1100] > v1277 )
              {
                v759 = v1280;
LABEL_1970:
                v1127 = (char *)v1231;
                goto LABEL_1971;
              }
              if ( v1100 < 0xF )
              {
                *v1101 = 16 * v1100;
              }
              else
              {
                v1104 = v1100 - 15;
                *v1101 = -16;
                if ( v1100 - 15 >= 0xFF )
                {
                  v1105 = v1104 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v1105) = -1;
                  memset_0(v1103, SDWORD2(v1105), v1104 / 0xFF);
                  v1103 += v1104 / 0xFF;
                  v1101 = v1099;
                  v1104 %= 0xFFuLL;
                  v1102 = v1099;
                  v756 = 1LL;
                }
                *v1103 = v1104;
                v1103 += v756;
                v973 = v1264;
              }
              v1106 = v1103;
              do
              {
                *v1106 = *(_QWORD *)((char *)v1106 + v1280 - v1103);
                ++v1106;
              }
              while ( v1106 < (_QWORD *)&v1103[v1100] );
              v1107 = &v1103[v1100];
              v856 = v1380;
              *v1107 = v1289;
              v765 = v1107 + 1;
              v1108 = v1380 - 4LL;
              v1306 = v765;
              if ( a7 && &v765[v1108 / 0xFF + 6] > v1277 )
              {
                v1127 = (char *)v1231;
                v759 = v1280;
                v764 = v1277;
                goto LABEL_1972;
              }
              v1109 = *v1102;
              if ( v1108 < 0xF )
              {
                *v1101 = v1109 + v1108;
              }
              else
              {
                v1110 = v1380 - 19LL;
                *v1101 = v1109 + 15;
                if ( v1110 >= 0x1FE )
                {
                  v1111 = v1110 / 0x1FE;
                  v1110 %= 0x1FEuLL;
                  do
                  {
                    *v765 = -1;
                    v1112 = &v765[v756];
                    *v1112 = -1;
                    v765 = &v1112[v756];
                    v1111 -= v756;
                  }
                  while ( v1111 );
                }
                if ( v1110 >= 0xFF )
                {
                  LOBYTE(v1110) = v1110 + 1;
                  *v765 = -1;
                  v765 += v756;
                }
                *v765 = v1110;
                v765 += v756;
                v1306 = v765;
              }
              v855 = v1333;
              v852 = (char *)v973;
              v1289 = v971;
              v971 = v1095;
              v856 = HIDWORD(v1289);
              v1280 = (char *)v1231 + v1380;
              v1284 = v1095;
              v972 = HIDWORD(v1095);
              v1231 = (_DWORD *)v973;
              v973 = v1303;
              v1264 = v1303;
              v1316 = v1095;
              v1380 = HIDWORD(v1289);
            }
            if ( v1303 >= v1097 )
              break;
            v1284 = v1095;
            v973 = v1303;
            v972 = HIDWORD(v1095);
            v971 = v1095;
            v1264 = v1303;
            v1316 = v1095;
          }
          if ( v973 < v1097 )
          {
            v1113 = v1380 + (_DWORD)v852 - v973;
            v1264 = v1113 + v973;
            if ( v972 - v1113 >= 4 )
            {
              HIDWORD(v1284) = v972 - v1113;
              v971 = v1284;
            }
            else
            {
              v1264 = v1303;
              v971 = v1095;
            }
          }
          v1099 = v765;
          v1114 = v852 - v1280;
          v1115 = v765;
          v1116 = v765;
          v1117 = &v765[v756];
          if ( a7 && (v764 = v1277, &v1117[v1114 / 0xFF + 8 + v1114] > v1277) )
          {
            v1127 = (char *)v1231;
            v759 = v1280;
          }
          else
          {
            if ( v1114 < 0xF )
            {
              *v1115 = 16 * v1114;
            }
            else
            {
              v1118 = v1114 - 15;
              *v1115 = -16;
              if ( v1114 - 15 >= 0xFF )
              {
                v1119 = v1118 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v1119) = -1;
                memset_0(v1117, SDWORD2(v1119), v1118 / 0xFF);
                v1117 += v1118 / 0xFF;
                v1115 = v1099;
                v856 = v1380;
                LOBYTE(v1118) = v1118 / 0xFF + v1118;
                v1116 = v1099;
                v756 = 1LL;
              }
              *v1117 = v1118;
              v1117 += v756;
            }
            v1120 = v1117;
            do
            {
              *v1120 = *(_QWORD *)((char *)v1120 + v1280 - v1117);
              ++v1120;
            }
            while ( v1120 < (_QWORD *)&v1117[v1114] );
            v1121 = &v1117[v1114];
            v1122 = v856 - 4LL;
            *v1121 = v1289;
            v765 = v1121 + 1;
            v1306 = v765;
            if ( !a7 || (v764 = v1277, &v765[v1122 / 0xFF + 6] <= v1277) )
            {
              v1123 = *v1116;
              if ( v1122 < 0xF )
              {
                *v1115 = v1123 + v1122;
              }
              else
              {
                v1124 = v856 - 19LL;
                *v1115 = v1123 + 15;
                if ( v1124 >= 0x1FE )
                {
                  v1125 = v1124 / 0x1FE;
                  v1124 %= 0x1FEuLL;
                  do
                  {
                    *v765 = -1;
                    v1126 = &v765[v756];
                    *v1126 = -1;
                    v765 = &v1126[v756];
                    v1125 -= v756;
                  }
                  while ( v1125 );
                }
                if ( v1124 >= 0xFF )
                {
                  LOBYTE(v1124) = v1124 + 1;
                  *v765 = -1;
                  v765 += v756;
                }
                *v765 = v1124;
                v765 += v756;
                v1306 = v765;
              }
              v854 = (char *)v1264;
              v853 = v971;
              v1280 = (char *)v1231 + v856;
              v852 = (char *)v1303;
              v1231 = (_DWORD *)v1303;
              v1289 = v1095;
              v1320 = v971;
              v1310 = HIDWORD(v971);
              goto LABEL_1427;
            }
            v1127 = (char *)v1231;
            v759 = v1280;
          }
LABEL_1972:
          if ( a7 == 2 )
          {
            v1168 = v1127 - v759;
            v765 = v1099;
            v1169 = (v1127 - v759 + 240) / 0xFFuLL + v1127 - v759 + 1;
            if ( &v1099[v1169] <= v764 - 3 )
            {
              if ( v856 > (unsigned __int64)(255 * (&v764[-v1169 - 3] - v1099) + 18) )
                v856 = 255 * ((_DWORD)v764 - 3 - v1169 - (_DWORD)v1099) + 18;
              v1381 = v856;
              if ( (__int64)&v764[v856 - v1169 - (_QWORD)v1099 + 2] >= 12 )
              {
                v1170 = v1099 + 1;
                if ( v1168 < 0xF )
                {
                  *v1099 = 16 * v1168;
                }
                else
                {
                  v1171 = v1168 - 15;
                  *v1099 = -16;
                  if ( v1168 - 15 >= 0xFF )
                  {
                    v1172 = v1171 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v1172) = -1;
                    memset_0(v1099 + 1, SDWORD2(v1172), v1171 / 0xFF);
                    v759 = v1280;
                    v1170 += v1171 / 0xFF;
                    v756 = 1LL;
                    v1171 %= 0xFFuLL;
                  }
                  *v1170 = v1171;
                  v1170 += v756;
                  v856 = v1381;
                }
                v1173 = v1170;
                v1174 = v759 - v1170;
                do
                {
                  *v1173 = *(_QWORD *)((char *)v1173 + v1174);
                  ++v1173;
                }
                while ( v1173 < (_QWORD *)&v1170[v1168] );
                v1175 = &v1170[v1168];
                v1176 = v856 - 4LL;
                *v1175 = v1289;
                v765 = v1175 + 1;
                v1177 = *v1099;
                if ( v1176 < 0xF )
                {
                  *v1099 = v1176 + v1177;
                }
                else
                {
                  v1178 = v856 - 19LL;
                  *v1099 = v1177 + 15;
                  if ( v1178 >= 0x1FE )
                  {
                    v1179 = v1178 / 0x1FE;
                    v1178 %= 0x1FEuLL;
                    do
                    {
                      *v765 = -1;
                      v1180 = &v765[v756];
                      *v1180 = -1;
                      v765 = &v1180[v756];
                      v1179 -= v756;
                    }
                    while ( v1179 );
                  }
                  if ( v1178 >= 0xFF )
                  {
                    LOBYTE(v1178) = v1178 + 1;
                    *v765 = -1;
                    v765 += v756;
                  }
                  *v765 = v1178;
                  v765 += v756;
                }
                v759 = (char *)v1231 + v856;
                v1280 = v759;
              }
            }
LABEL_1993:
            v762 = v1336;
LABEL_1994:
            v1181 = v762 - v759;
            v1337 = v1181;
            v1182 = v765;
            if ( a7 == 2 )
            {
              v764 += 5;
              goto LABEL_1997;
            }
            if ( a7 )
            {
LABEL_1997:
              if ( &v765[(v1181 + 240) / 0xFF + 1 + v1181] > v764 )
              {
                if ( a7 == (_DWORD)v756 )
                  goto LABEL_1999;
                v1181 = v764 - v765 - 1 - ((unsigned __int64)(v764 - v765 - 1 + 241) >> 8);
                v1337 = v1181;
              }
            }
            v1184 = v1181 + (_DWORD)v759;
            if ( v1181 < 0xF )
            {
              *v765 = 16 * v1181;
            }
            else
            {
              *v765 = -16;
              v1185 = v1181 - 15;
              v765 += v756;
              if ( v1181 - 15 >= 0xFF )
              {
                v1186 = v1185 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v1186) = -1;
                memset_0(v765, SDWORD2(v1186), v1185 / 0xFF);
                v759 = v1280;
                v765 += v1185 / 0xFF;
                v1181 = v1337;
                LODWORD(v756) = 1;
                LOBYTE(v1185) = v1185 / 0xFF + v1185;
              }
              v1182 = v765;
              *v765 = v1185;
            }
            v1187 = v756 + (_DWORD)v765;
            memmove(v1182 + 1, v759, v1181);
            LOBYTE(v756) = 1;
            v1183 = v1187 + v1181 - (_DWORD)a3;
            *a4 = v1184 - v1370;
          }
          else
          {
LABEL_1999:
            v1183 = 0;
          }
          if ( v1183 <= 0 )
            *((_BYTE *)a1 + 262183) = v756;
          return (unsigned int)v1183;
        }
        v852 = (char *)v1264;
        v1231 = (_DWORD *)v1264;
        v1289 = v971;
      }
      v759 = v1280;
      v756 = 1LL;
      v1099 = v765;
      v1155 = v765;
      v1156 = v765;
      v1157 = v765 + 1;
      v1158 = v852 - v1280;
      if ( a7 && &v1157[v1158 / 0xFF + 8 + v1158] > v1277 )
        goto LABEL_1970;
      if ( v1158 < 0xF )
      {
        *v1155 = 16 * v1158;
      }
      else
      {
        v1159 = v1158 - 15;
        *v1155 = -16;
        if ( v1158 - 15 >= 0xFF )
        {
          v1160 = v1159 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v1160) = -1;
          memset_0(v1157, SDWORD2(v1160), v1159 / 0xFF);
          v852 = (char *)v1231;
          v1157 += v1159 / 0xFF;
          v759 = v1280;
          v756 = 1LL;
          v1159 %= 0xFFuLL;
        }
        *v1157++ = v1159;
        v856 = HIDWORD(v1289);
      }
      v1161 = v1157;
      do
      {
        *v1161 = *(_QWORD *)((char *)v1161 + v759 - v1157);
        ++v1161;
      }
      while ( v1161 < (_QWORD *)&v1157[v1158] );
      v1162 = &v1157[v1158];
      v1163 = v856 - 4LL;
      *v1162 = v1289;
      v765 = v1162 + 1;
      v1306 = v765;
      if ( a7 )
      {
        if ( &v765[v1163 / 0xFF + 6] > v1277 )
          goto LABEL_1970;
      }
      v1164 = *v1156;
      if ( v1163 < 0xF )
      {
        *v1155 = v1164 + v1163;
      }
      else
      {
        v1165 = v856 - 19LL;
        *v1155 = v1164 + 15;
        if ( v1165 >= 0x1FE )
        {
          v1166 = v1165 / 0x1FE;
          v1165 %= 0x1FEuLL;
          do
          {
            *v765 = -1;
            v1167 = v765 + 1;
            *v1167 = -1;
            v765 = v1167 + 1;
            --v1166;
          }
          while ( v1166 );
        }
        if ( v1165 >= 0xFF )
        {
          LOBYTE(v1165) = v1165 + 1;
          *v765++ = -1;
        }
        *v765++ = v1165;
        v1306 = v765;
      }
      v761 = &v852[v856];
LABEL_1959:
      v759 = v761;
      v1280 = v761;
LABEL_1425:
      v764 = v1277;
      v763 = v1333;
      v8 = a1;
      v1231 = v761;
    }
  }
  memmove(v8, *((const void **)v8 + 32773), 0x40030uLL);
  LZ4HC_setExternalDict(v8, Src);
  *((_WORD *)v8 + 131090) = 9;
  if ( a7 != 2 || a5 >= 1 )
  {
    v401 = *v9;
    if ( (unsigned int)v401 <= 0x7E000000 )
    {
      *((_QWORD *)v8 + 0x8000) += v401;
      v402 = Src;
      v403 = *v9;
      v404 = Src;
      v405 = &a3[a5];
      v406 = &Src[v403];
      v407 = &Src[v403 - 12];
      v1288 = a3;
      v1230 = Src;
      v408 = a3;
      v409 = v405 - 5;
      if ( a7 != 2 )
        v409 = v405;
      v1276 = v409;
      v1279 = v402;
      v1338 = v406;
      v1305 = v407;
      v1260 = v406 - 5;
      v1263 = 0LL;
      v1302 = 0LL;
      *v9 = 0;
      if ( (int)v403 >= 13 )
      {
        while ( 1 )
        {
LABEL_647:
          if ( v404 > v407 )
            goto LABEL_1243;
          v410 = 3;
          v1221 = 3;
          v411 = a1[65543];
          v412 = a1[65542];
          v413 = v411;
          v414 = (_QWORD *)*((_QWORD *)a1 + 32769);
          v1191 = a1[65543];
          v415 = (_DWORD)v404 + a1[65542] - (_DWORD)v414;
          v1268 = v415;
          if ( (int)v411 + 0x10000 <= v415 )
            v413 = v415 - 0xFFFF;
          v1343 = (_QWORD *)*((_QWORD *)a1 + 32770);
          v1200 = *(_DWORD *)v404;
          v1322 = (char *)v1343 + v412 - v411;
          v416 = 256;
          v417 = 0;
          v1235 = 0;
          v1355 = 0LL;
          v418 = 0;
          v1253 = 0;
          v419 = v412 + (_DWORD)v404 - (_DWORD)v414;
          v1376 = v413;
          v420 = a1[65544];
          if ( v420 < v419 )
          {
            v421 = (_DWORD *)((char *)v414 + v420 - v412);
            do
            {
              v422 = (unsigned __int64)(unsigned int)(-1640531535 * *v421) >> 17;
              v423 = v420 - a1[v422];
              if ( v423 > 0xFFFF )
                LOWORD(v423) = -1;
              v421 = (_DWORD *)((char *)v421 + 1);
              *((_WORD *)a1 + (unsigned __int16)v420 + 0x10000) = v423;
              a1[v422] = v420++;
            }
            while ( v420 < v419 );
            v410 = 3;
            v407 = v1305;
            v413 = v1376;
            v416 = 256;
          }
          a1[65544] = v419;
          v424 = v1230;
          v425 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *v1230) >> 17];
          if ( v425 >= v413 )
          {
            while ( 1 )
            {
              if ( v416 <= 0 )
              {
LABEL_734:
                v408 = v1288;
                v418 = v1253;
                v407 = v1305;
                goto LABEL_735;
              }
              v1243 = v416 - 1;
              if ( v425 >= (unsigned int)v412 )
                break;
              v436 = v1191;
              v437 = (_DWORD *)((char *)v1343 + v425 - v1191);
              if ( v425 <= (int)v412 - 4 && *v437 == v1200 )
              {
                v438 = (char *)(v424 + 1);
                v439 = (_DWORD)v424 + 4;
                v440 = (char *)v424 + (unsigned int)v412 - v425;
                if ( v440 > v1260 )
                  v440 = v1260;
                v441 = v437 + 1;
                if ( v438 < v440 - 7 )
                {
                  if ( *(_QWORD *)v438 != *v441 )
                  {
                    __asm { tzcnt   rcx, r9 }
                    v444 = (unsigned int)_RCX >> 3;
                    goto LABEL_701;
                  }
                  while ( 1 )
                  {
                    v438 += 8;
                    ++v441;
                    if ( v438 >= v440 - 7 )
                      break;
                    if ( *(_QWORD *)v438 != *v441 )
                    {
                      __asm { tzcnt   rax, r9 }
                      v444 = ((unsigned int)_RAX >> 3) - v439 + (_DWORD)v438;
                      goto LABEL_701;
                    }
                  }
                }
                if ( v438 < v440 - 3 && *(_DWORD *)v441 == *(_DWORD *)v438 )
                {
                  v438 += 4;
                  v441 = (_QWORD *)((char *)v441 + 4);
                }
                if ( v438 < v440 - 1 && *(_WORD *)v441 == *(_WORD *)v438 )
                {
                  v438 += 2;
                  v441 = (_QWORD *)((char *)v441 + 2);
                }
                if ( v438 < v440 && *(_BYTE *)v441 == *v438 )
                  LODWORD(v438) = (_DWORD)v438 + 1;
                v444 = (_DWORD)v438 - v439;
LABEL_701:
                v447 = v444 + 4;
                v448 = (char *)v1230 + (int)(v444 + 4);
                if ( v448 == v440 && v440 < v1260 )
                {
                  v449 = v414;
                  v450 = (char *)v1230 + v447;
                  if ( v448 >= v1260 - 7 )
                    goto LABEL_706;
                  if ( *(_QWORD *)v448 != *v414 )
                  {
                    __asm { tzcnt   rcx, rcx }
                    v454 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v450 = v448 + 8;
                    v449 = v414 + 1;
LABEL_706:
                    while ( v450 < v1260 - 7 )
                    {
                      if ( *(_QWORD *)v450 != *v449 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v454 = ((unsigned int)_RAX >> 3) - (_DWORD)v448 + (_DWORD)v450;
                        goto LABEL_721;
                      }
                      v450 += 8;
                      ++v449;
                    }
                    if ( v450 < v1260 - 3 && *(_DWORD *)v449 == *(_DWORD *)v450 )
                    {
                      v450 += 4;
                      v449 = (_QWORD *)((char *)v449 + 4);
                    }
                    if ( v450 < v1260 - 1 && *(_WORD *)v449 == *(_WORD *)v450 )
                    {
                      v450 += 2;
                      v449 = (_QWORD *)((char *)v449 + 2);
                    }
                    if ( v450 < v1260 && *(_BYTE *)v449 == *v450 )
                      LODWORD(v450) = (_DWORD)v450 + 1;
                    v454 = (_DWORD)v450 - (_DWORD)v448;
                  }
LABEL_721:
                  v447 += v454;
                }
                v413 = v1376;
                if ( v447 > v410 )
                {
                  v1221 = v447;
                  v1253 = v1268 - v425;
                }
                v424 = v1230;
LABEL_725:
                v436 = v1191;
              }
              if ( *((_WORD *)a1 + (unsigned __int16)v425 + 0x10000) != 1 )
                goto LABEL_732;
              v456 = v425 - 1;
              if ( v417 )
              {
                v1235 = v417;
                if ( v417 != 2 )
                  goto LABEL_732;
                v457 = v1260;
              }
              else
              {
                if ( (_BYTE)v1200 != HIBYTE(v1200) || (unsigned __int16)v1200 != HIWORD(v1200) )
                {
                  v413 = v1376;
                  v1235 = 1;
LABEL_732:
                  v425 -= *((unsigned __int16 *)a1 + (unsigned __int16)v425 + 0x10000);
                  goto LABEL_733;
                }
                v457 = v1260;
                v1235 = 2;
                v458 = LZ4HC_countPattern(v424 + 1, v1260, v1200);
                v413 = v1376;
                v1355 = v458 + 4LL;
              }
              if ( v456 < v413 || (unsigned int)v412 - v456 - 1 < 3 )
                goto LABEL_732;
              if ( v456 >= (unsigned int)v412 )
              {
                v460 = 0;
                v461 = (_DWORD *)((char *)v414 + v456 - (unsigned int)v412);
              }
              else
              {
                v460 = 1;
                v461 = (_DWORD *)((char *)v1343 + v456 - v436);
              }
              if ( *v461 != v1200 )
                goto LABEL_732;
              v462 = v457;
              if ( v460 )
                v462 = v1322;
              v463 = (unsigned int)LZ4HC_countPattern(v461 + 1, v462, v1200) + 4LL;
              if ( v460 )
              {
                if ( (_DWORD *)((char *)v461 + v463) == v464 )
                {
                  v465 = LZ4HC_rotatePattern(v463, v1200);
                  v463 += (unsigned int)LZ4HC_countPattern(v414, v1260, v465);
                }
                v466 = v1343;
              }
              else
              {
                v466 = v414;
              }
              v467 = LZ4HC_reverseCountPattern(v461, v466, v1200);
              v468 = v467;
              if ( !v460 && (_QWORD *)((char *)v461 - v467) == v414 && v1191 < (unsigned int)v412 )
              {
                v469 = LZ4HC_rotatePattern(-v467, v1200);
                v470 = LZ4HC_reverseCountPattern(v1322, v1343, v469);
                v468 = v470 + v471;
              }
              v413 = v1376;
              v472 = v456 - v468;
              v473 = v1376;
              if ( v472 > v1376 )
                v473 = v472;
              v474 = v463 + v456 - v473;
              if ( v474 < v1355 || v463 > v1355 )
              {
                if ( (unsigned int)v412 - v473 - 1 >= 3 )
                {
                  v410 = v1221;
                  v424 = v1230;
                  v475 = v1355;
                  if ( v474 < v1355 )
                    v475 = v474;
                  if ( v1221 < v475 )
                  {
                    if ( (unsigned __int64)v1230 + v412 - v473 - (_QWORD)v414 > 0xFFFF )
                      goto LABEL_734;
                    v410 = v475;
                    v1221 = v475;
                    v1253 = v1268 - v473;
                  }
                  v476 = *((unsigned __int16 *)a1 + (unsigned __int16)v473 + 0x10000);
                  if ( v476 > v473 )
                    goto LABEL_734;
                  v425 = v473 - v476;
                }
                else
                {
                  v425 = v412;
                }
              }
              else
              {
                v425 = v412;
                if ( (unsigned int)v412 - ((_DWORD)v463 - (_DWORD)v1355 + v456) - 1 >= 3 )
                  v425 = v463 - v1355 + v456;
              }
LABEL_733:
              v410 = v1221;
              v417 = v1235;
              v416 = v1243;
              v424 = v1230;
              if ( v425 < v413 )
                goto LABEL_734;
            }
            v426 = v425 - (unsigned int)v412;
            if ( *(_WORD *)((char *)v424 + v410 - 1) != *(_WORD *)((char *)v414 + v410 + v426 - 1)
              || *(_DWORD *)((char *)v414 + v426) != v1200 )
            {
              v413 = v1376;
              goto LABEL_725;
            }
            v427 = (char *)(v424 + 1);
            v428 = (_QWORD *)((char *)v414 + v426 + 4);
            v429 = (_DWORD)v424 + 4;
            if ( v427 < v1260 - 7 )
            {
              if ( *v428 != *(_QWORD *)v427 )
              {
                __asm { tzcnt   rcx, r8 }
                v432 = (unsigned int)_RCX >> 3;
LABEL_678:
                v413 = v1376;
                v435 = v432 + 4;
                v424 = v1230;
                if ( v435 > v410 )
                {
                  v1221 = v435;
                  v1253 = v1268 - v425;
                }
                goto LABEL_725;
              }
              while ( 1 )
              {
                v427 += 8;
                ++v428;
                if ( v427 >= v1260 - 7 )
                  break;
                if ( *v428 != *(_QWORD *)v427 )
                {
                  __asm { tzcnt   rax, r8 }
                  v432 = ((unsigned int)_RAX >> 3) - v429 + (_DWORD)v427;
                  goto LABEL_678;
                }
              }
            }
            if ( v427 < v1260 - 3 && *(_DWORD *)v428 == *(_DWORD *)v427 )
            {
              v427 += 4;
              v428 = (_QWORD *)((char *)v428 + 4);
            }
            if ( v427 < v1260 - 1 && *(_WORD *)v428 == *(_WORD *)v427 )
            {
              v427 += 2;
              v428 = (_QWORD *)((char *)v428 + 2);
            }
            if ( v427 < v1260 && *(_BYTE *)v428 == *v427 )
              LODWORD(v427) = (_DWORD)v427 + 1;
            v432 = (_DWORD)v427 - v429;
            goto LABEL_678;
          }
LABEL_735:
          v459 = __PAIR64__(v410, v418);
          v1295 = __PAIR64__(v410, v418);
          v1291 = __PAIR64__(v410, v418);
          if ( v410 >= 4 )
            break;
          v402 = v1279;
          v409 = v1276;
          v404 = (char *)v424 + 1;
          v1230 = v404;
        }
        v477 = v424;
        v1352 = v410;
        v1356 = (unsigned __int64)v424;
        while ( 1 )
        {
          v478 = HIDWORD(v1291);
          v1377 = HIDWORD(v1291);
          v479 = (unsigned __int64)v424 + SHIDWORD(v1291);
          if ( v479 > (unsigned __int64)v407 )
          {
            v1282 = 0LL;
            v555 = 0;
            v554 = 0LL;
          }
          else
          {
            v480 = HIDWORD(v1291);
            v1208 = HIDWORD(v1291);
            v481 = (unsigned int *)(v479 - 2);
            v1263 = v479 - 2;
            v1307 = v479 - 2;
            v482 = a1[65543];
            v483 = 0;
            v484 = a1[65542];
            v485 = v482;
            v486 = (_QWORD *)*((_QWORD *)a1 + 32769);
            v1192 = v484;
            v487 = v484 + v479 - 2 - (_DWORD)v486;
            v1236 = a1[65543];
            v1201 = 0;
            v1344 = 0LL;
            v488 = (unsigned int)v484;
            v1254 = 0;
            v1332 = v486;
            if ( (int)v482 + 0x10000 <= v487 )
              v485 = v487 - 0xFFFF;
            v1269 = v484 + v479 - 2 - (_DWORD)v486;
            v1222 = v485;
            v489 = *v481;
            v1323 = (char *)(*((_QWORD *)a1 + 32770) + v484 - v482);
            v490 = (_DWORD)v481 - (_DWORD)v1230;
            v1313 = (_QWORD *)*((_QWORD *)a1 + 32770);
            v491 = a1;
            v1244 = 256;
            v1214 = *v481;
            v492 = a1[65544];
            if ( v492 < v487 )
            {
              v493 = (_DWORD *)((char *)v486 + v492 - v488);
              do
              {
                v494 = (unsigned __int64)(unsigned int)(-1640531535 * *v493) >> 17;
                v495 = v492 - a1[v494];
                if ( v495 > 0xFFFF )
                  LOWORD(v495) = -1;
                v493 = (_DWORD *)((char *)v493 + 1);
                *((_WORD *)a1 + (unsigned __int16)v492 + 0x10000) = v495;
                a1[v494] = v492++;
              }
              while ( v492 < v487 );
              v459 = v1295;
              v489 = v1214;
              v480 = HIDWORD(v1291);
              v491 = a1;
            }
            v491[65544] = v487;
            v496 = -1640531535 * *v481;
            v497 = v1222;
            v498 = v490;
            v1318 = v490;
            v499 = v491[v496 >> 17];
            if ( v499 >= v1222 )
            {
              LODWORD(v500) = v1192;
              while ( 1 )
              {
                v501 = v1201;
                v502 = 0;
                v503 = v1201;
                if ( v1244 <= 0 )
                {
LABEL_889:
                  v459 = v1295;
                  v408 = v1288;
                  v483 = v1254;
                  goto LABEL_890;
                }
                --v1244;
                if ( v499 < (unsigned int)v500 )
                {
                  v524 = v499 - v1236;
                  v525 = (_DWORD *)((char *)v1313 + v524);
                  if ( v499 > (int)v500 - 4 || *v525 != v489 )
                    goto LABEL_820;
                  v526 = (char *)(v1307 + 4);
                  v527 = v525 + 1;
                  v528 = (char *)(v1307 + (unsigned int)v500 - v499);
                  v529 = v1307 + 4;
                  if ( v528 > v1260 )
                    v528 = v1260;
                  if ( v526 < v528 - 7 )
                  {
                    if ( *v527 != *(_QWORD *)v526 )
                    {
                      __asm { tzcnt   rcx, r8 }
                      v532 = (unsigned int)_RCX >> 3;
LABEL_846:
                      v535 = v532 + 4;
                      v536 = (char *)(v1307 + (int)(v532 + 4));
                      if ( v536 == v528 && v528 < v1260 )
                      {
                        v537 = v1332;
                        v538 = (char *)(v1307 + v535);
                        if ( v536 >= v1260 - 7 )
                          goto LABEL_851;
                        if ( *v1332 != *(_QWORD *)v536 )
                        {
                          __asm { tzcnt   rcx, rdx }
                          v542 = (unsigned int)_RCX >> 3;
                        }
                        else
                        {
                          v538 = v536 + 8;
                          v537 = v1332 + 1;
LABEL_851:
                          while ( v538 < v1260 - 7 )
                          {
                            if ( *v537 != *(_QWORD *)v538 )
                            {
                              __asm { tzcnt   rax, r8 }
                              v542 = ((unsigned int)_RAX >> 3) - (_DWORD)v536 + (_DWORD)v538;
                              goto LABEL_866;
                            }
                            v538 += 8;
                            ++v537;
                          }
                          if ( v538 < v1260 - 3 && *(_DWORD *)v537 == *(_DWORD *)v538 )
                          {
                            v538 += 4;
                            v537 = (_QWORD *)((char *)v537 + 4);
                          }
                          if ( v538 < v1260 - 1 && *(_WORD *)v537 == *(_WORD *)v538 )
                          {
                            v538 += 2;
                            v537 = (_QWORD *)((char *)v537 + 2);
                          }
                          if ( v538 < v1260 && *(_BYTE *)v537 == *v538 )
                            LODWORD(v538) = (_DWORD)v538 + 1;
                          v542 = (_DWORD)v538 - (_DWORD)v536;
                        }
LABEL_866:
                        v535 += v542;
                      }
                      v544 = 0;
                      if ( v1318 )
                      {
                        v545 = v525 - 1;
                        v546 = (_DWORD)v1230 - v1307;
                        v547 = -v524;
                        v548 = 0LL;
                        if ( (__int64)((__int64)v1230 - v1307) <= v547 )
                          v546 = v547;
                        v549 = v1307 - (_QWORD)v525;
                        while ( v544 - v546 > 3 )
                        {
                          if ( *v545 != *(_DWORD *)((char *)v545 + v549) )
                          {
                            _BitScanReverse(&v550, *v545 ^ *(_DWORD *)((char *)v545 + v549));
                            v544 -= (31 - v550) >> 3;
                            goto LABEL_879;
                          }
                          v544 -= 4;
                          v548 -= 4LL;
                          --v545;
                        }
                        v551 = v546;
                        if ( v548 > v546 )
                        {
                          v552 = (char *)v1230 + v548 + SHIDWORD(v1291) - 3;
                          do
                          {
                            if ( *v552 != *((_BYTE *)v1313 + v499 - v1236 + v548 - 1) )
                              break;
                            --v544;
                            --v548;
                            --v552;
                          }
                          while ( v548 > v551 );
                        }
                      }
LABEL_879:
                      v503 = v1201;
                      v553 = v535 - v544;
                      v497 = v1222;
                      v513 = v1260;
                      if ( v553 > v1208 )
                      {
                        v1208 = v553;
                        v1254 = v1269 - v499;
                        v1263 = v1307 + v544;
                      }
                      v489 = v1214;
                      v501 = v1201;
                      goto LABEL_821;
                    }
                    while ( 1 )
                    {
                      v526 += 8;
                      ++v527;
                      if ( v526 >= v528 - 7 )
                        break;
                      if ( *v527 != *(_QWORD *)v526 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v532 = ((unsigned int)_RAX >> 3) - v529 + (_DWORD)v526;
                        goto LABEL_846;
                      }
                    }
                  }
                  if ( v526 < v528 - 3 && *(_DWORD *)v527 == *(_DWORD *)v526 )
                  {
                    v526 += 4;
                    v527 = (_QWORD *)((char *)v527 + 4);
                  }
                  if ( v526 < v528 - 1 && *(_WORD *)v527 == *(_WORD *)v526 )
                  {
                    v526 += 2;
                    v527 = (_QWORD *)((char *)v527 + 2);
                  }
                  if ( v526 < v528 && *(_BYTE *)v527 == *v526 )
                    LODWORD(v526) = (_DWORD)v526 + 1;
                  v532 = (_DWORD)v526 - v529;
                  goto LABEL_846;
                }
                v504 = (_DWORD *)((char *)v486 + v499 - (unsigned int)v500);
                if ( *(_WORD *)((char *)v1230 + v480 - 1) != *(_WORD *)((char *)v504 + v480 - v498 - 1) )
                {
                  v489 = v1214;
                  v503 = v1201;
                  goto LABEL_820;
                }
                if ( *v504 != v1214 )
                {
                  v503 = v1201;
                  v501 = v1201;
                  v489 = v1214;
                  goto LABEL_820;
                }
                if ( v498 )
                {
                  v505 = 0LL;
                  v506 = v504 - 1;
                  v507 = -(__int64)(v499 - (unsigned int)v500);
                  v508 = (_DWORD)v1230 - v1307;
                  if ( (__int64)((__int64)v1230 - v1307) <= v507 )
                    v508 = v507;
                  v509 = v1307 - (_QWORD)v504;
                  while ( v502 - v508 > 3 )
                  {
                    if ( *v506 != *(_DWORD *)((char *)v506 + v509) )
                    {
                      _BitScanReverse(&v510, *v506 ^ *(_DWORD *)((char *)v506 + v509));
                      v502 -= (31 - v510) >> 3;
                      goto LABEL_801;
                    }
                    v502 -= 4;
                    v505 -= 4LL;
                    --v506;
                  }
                  v511 = v508;
                  if ( v505 > v508 )
                  {
                    v512 = (char *)v1230 + v505 + SHIDWORD(v1291) - 3;
                    do
                    {
                      if ( *v512 != *((_BYTE *)v486 + v499 - (unsigned int)v500 + v505 - 1) )
                        break;
                      --v502;
                      --v505;
                      --v512;
                    }
                    while ( v505 > v511 );
                  }
                }
LABEL_801:
                v513 = v1260;
                v514 = (char *)(v1307 + 4);
                v515 = v504 + 1;
                v516 = v1307 + 4;
                if ( v1307 + 4 >= (unsigned __int64)(v1260 - 7) )
                  goto LABEL_808;
                if ( *v515 == *(_QWORD *)v514 )
                  break;
                __asm { tzcnt   rcx, r8 }
                v519 = (unsigned int)_RCX >> 3;
LABEL_818:
                v489 = v1214;
                v497 = v1222;
                v522 = v519 - v502 + 4;
                if ( v522 > v1208 )
                {
                  v1208 = v522;
                  v503 = v1201;
                  v1254 = v1269 - v499;
                  v501 = v1201;
                  v1263 = v1307 + v502;
LABEL_820:
                  v513 = v1260;
                  goto LABEL_821;
                }
                v503 = v1201;
                v501 = v1201;
LABEL_821:
                if ( *((_WORD *)a1 + (unsigned __int16)v499 + 0x10000) != 1 )
                  goto LABEL_886;
                v523 = v499 - 1;
                if ( v501 )
                {
                  v1201 = v503;
                  if ( v503 != 2 )
                    goto LABEL_886;
                }
                else
                {
                  if ( (_BYTE)v489 != HIBYTE(v489) || (unsigned __int16)v489 != HIWORD(v489) )
                  {
                    v1201 = 1;
LABEL_886:
                    v497 = v1222;
                    v499 -= *((unsigned __int16 *)a1 + (unsigned __int16)v499 + 0x10000);
LABEL_887:
                    v498 = v1318;
                    goto LABEL_888;
                  }
                  v1201 = 2;
                  v1344 = (unsigned int)LZ4HC_countPattern(v1307 + 4, v513, v489) + 4LL;
                }
                if ( v523 < v497 || (unsigned int)v500 - v499 < 3 )
                  goto LABEL_886;
                if ( v523 >= (unsigned int)v500 )
                {
                  v556 = 0;
                  v557 = (_DWORD *)((char *)v1332 + v523 - (unsigned int)v500);
                }
                else
                {
                  v556 = 1;
                  v557 = (_DWORD *)((char *)v1313 + v523 - v1236);
                }
                if ( *v557 != v489 )
                  goto LABEL_886;
                v558 = v1260;
                if ( v556 )
                  v558 = v1323;
                v559 = (unsigned int)LZ4HC_countPattern(v557 + 1, v558, v489) + 4LL;
                if ( v556 )
                {
                  if ( (char *)v557 + v559 == v558 )
                  {
                    v560 = LZ4HC_rotatePattern(v559, v1214);
                    v559 += (unsigned int)LZ4HC_countPattern(v1332, v1260, v560);
                  }
                  v561 = v1313;
                }
                else
                {
                  v561 = v1332;
                }
                v562 = LZ4HC_reverseCountPattern(v557, v561, v1214);
                v563 = v1332;
                v564 = v562;
                if ( !v556 && (_QWORD *)((char *)v557 - v562) == v1332 && v1236 < (unsigned int)v500 )
                {
                  v565 = LZ4HC_rotatePattern(-v562, v1214);
                  v564 += LZ4HC_reverseCountPattern(v1323, v1313, v565);
                  v563 = v1332;
                }
                v497 = v1222;
                v566 = v1344;
                v567 = v523 - v564;
                v499 = v1222;
                if ( v567 > v1222 )
                  v499 = v567;
                v568 = v559 + v523 - v499;
                if ( v568 >= v1344 && v559 <= v1344 )
                {
                  v499 = v500;
                  if ( (unsigned int)v500 - ((_DWORD)v559 - (_DWORD)v1344 + v523) - 1 >= 3 )
                    v499 = v559 - v1344 + v523;
                  goto LABEL_887;
                }
                v498 = v1318;
                if ( (unsigned int)v500 - v499 - 1 >= 3 )
                {
                  if ( !v1318 )
                  {
                    if ( v568 < v1344 )
                      v566 = v559 + v523 - v499;
                    if ( v1208 < v566 )
                    {
                      if ( v500 + v1307 - v499 - (unsigned __int64)v563 > 0xFFFF )
                        goto LABEL_889;
                      v1208 = v566;
                      v1254 = v1269 - v499;
                      v1263 = v1307;
                    }
                    v569 = *((unsigned __int16 *)a1 + (unsigned __int16)v499 + 0x10000);
                    if ( v569 > v499 )
                      goto LABEL_889;
                    v499 -= v569;
                  }
                }
                else
                {
                  v499 = v500;
                }
LABEL_888:
                v486 = v1332;
                v489 = v1214;
                if ( v499 < v497 )
                  goto LABEL_889;
                v480 = v1208;
              }
              while ( 1 )
              {
                v514 += 8;
                ++v515;
                if ( v514 >= v1260 - 7 )
                  break;
                if ( *v515 != *(_QWORD *)v514 )
                {
                  __asm { tzcnt   rax, r8 }
                  v519 = ((unsigned int)_RAX >> 3) - v516 + (_DWORD)v514;
                  goto LABEL_818;
                }
              }
LABEL_808:
              if ( v514 < v1260 - 3 && *(_DWORD *)v515 == *(_DWORD *)v514 )
              {
                v514 += 4;
                v515 = (_QWORD *)((char *)v515 + 4);
              }
              if ( v514 < v1260 - 1 && *(_WORD *)v515 == *(_WORD *)v514 )
              {
                v514 += 2;
                v515 = (_QWORD *)((char *)v515 + 2);
              }
              if ( v514 < v1260 && *(_BYTE *)v515 == *v514 )
                LODWORD(v514) = (_DWORD)v514 + 1;
              v519 = (_DWORD)v514 - v516;
              goto LABEL_818;
            }
LABEL_890:
            v477 = (_DWORD *)v1356;
            v478 = HIDWORD(v1291);
            v424 = v1230;
            v554 = __PAIR64__(v1208, v483);
            v1282 = __PAIR64__(v1208, v483);
            v555 = v1208;
          }
          v1319 = v554;
          if ( v555 <= v478 )
          {
            v402 = v1279;
            v669 = v408;
            v724 = v408;
            v725 = v408;
            v726 = v408 + 1;
            v727 = (char *)v424 - v1279;
            if ( a7 )
            {
              v409 = v1276;
              if ( &v726[v727 / 0xFF + 8 + v727] > v1276 )
                goto LABEL_1220;
            }
            if ( v727 < 0xF )
            {
              *v724 = 16 * v727;
            }
            else
            {
              v728 = v727 - 15;
              *v724 = -16;
              if ( v727 - 15 >= 0xFF )
              {
                v729 = v728 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v729) = -1;
                memset_0(v726, SDWORD2(v729), v728 / 0xFF);
                v478 = HIDWORD(v1291);
                v726 += v728 / 0xFF;
                v424 = v1230;
                v402 = v1279;
                LOBYTE(v728) = v728 / 0xFF + v728;
              }
              *v726++ = v728;
            }
            v730 = v726;
            do
            {
              *v730 = *(_QWORD *)((char *)v730 + v402 - v726);
              ++v730;
            }
            while ( v730 < (_QWORD *)&v726[v727] );
            v731 = &v726[v727];
            v409 = v1276;
            v732 = v478 - 4LL;
            *v731 = v1291;
            v408 = v731 + 1;
            v1288 = v408;
            if ( a7 )
            {
              if ( &v408[v732 / 0xFF + 6] > v1276 )
              {
LABEL_1220:
                v667 = (char *)v1230;
                goto LABEL_1222;
              }
            }
            v733 = *v725;
            if ( v732 < 0xF )
            {
              *v724 = v732 + v733;
            }
            else
            {
              v734 = v478 - 19LL;
              *v724 = v733 + 15;
              if ( v734 >= 0x1FE )
              {
                v735 = v734 / 0x1FE;
                v734 %= 0x1FEuLL;
                do
                {
                  *v408 = -1;
                  v736 = v408 + 1;
                  *v736 = -1;
                  v408 = v736 + 1;
                  --v735;
                }
                while ( v735 );
              }
              if ( v734 >= 0xFF )
              {
                LOBYTE(v734) = v734 + 1;
                *v408++ = -1;
              }
              *v408++ = v734;
              v1288 = v408;
            }
            v404 = (char *)v424 + v478;
LABEL_1212:
            v407 = v1305;
            v402 = v404;
            v1279 = v404;
            v1230 = v404;
            goto LABEL_647;
          }
          v570 = v1263;
          if ( v477 < v424 && v1263 < (unsigned __int64)v424 + v1352 )
          {
            LOWORD(v1291) = v459;
            v424 = v477;
            v478 = HIDWORD(v459);
            v1377 = HIDWORD(v459);
            v1230 = v477;
          }
          if ( (__int64)(v1263 - (_QWORD)v424) < 3 )
          {
            v424 = (_DWORD *)v1263;
            v1230 = (_DWORD *)v1263;
            v1291 = v554;
            goto LABEL_933;
          }
          while ( 1 )
          {
            while ( 1 )
            {
              if ( (__int64)(v570 - (_QWORD)v424) < 18 )
              {
                v571 = v478;
                if ( v478 > 18 )
                  v571 = 18;
                if ( (unsigned __int64)v424 + v571 > v570 + v555 - 4LL )
                  v571 = v570 + v555 - (_DWORD)v424 - 4;
                v572 = v571 - v570 + (_DWORD)v424;
                if ( v572 > 0 )
                {
                  v570 += v572;
                  v555 -= v572;
                  v1263 = v570;
                  HIDWORD(v1282) = v555;
                  v554 = v1282;
                  v1319 = v1282;
                }
              }
              v1324 = v555;
              v573 = v570 + v555;
              if ( v573 > (unsigned __int64)v1305 )
              {
                v664 = 0;
                v663 = 0LL;
              }
              else
              {
                v1193 = 0;
                v574 = (unsigned int *)(v573 - 3);
                v1302 = v573 - 3;
                v1308 = v573 - 3;
                v575 = v555;
                v1349 = 0LL;
                v1237 = 0;
                v576 = a1[65542];
                v577 = a1[65543];
                v578 = (_QWORD *)*((_QWORD *)a1 + 32769);
                v579 = v577;
                v1223 = v576;
                v1202 = a1[65543];
                v1255 = v573 - 3 + a1[65542] - (_DWORD)v578;
                v1215 = v555;
                v580 = (unsigned int)v576;
                v1296 = v578;
                if ( (int)v577 + 0x10000 <= v1255 )
                  v579 = v1255 - 0xFFFF;
                v1245 = v579;
                v581 = (_DWORD)v574 - v570;
                v582 = 1;
                v1314 = (_QWORD *)*((_QWORD *)a1 + 32770);
                v583 = (__int64)v1314 - v577;
                v584 = a1[65544];
                v1357 = (char *)(v576 + v583);
                v585 = *v574;
                v586 = (_DWORD)v574 + v576 - (_DWORD)v578;
                v1270 = 256;
                v1209 = *v574;
                if ( v584 < v586 )
                {
                  v587 = (_DWORD *)((char *)v578 + v584 - v580);
                  do
                  {
                    v588 = (unsigned __int64)(unsigned int)(-1640531535 * *v587) >> 17;
                    v589 = v584 - a1[v588];
                    if ( v589 > 0xFFFF )
                      LOWORD(v589) = -1;
                    v587 = (_DWORD *)((char *)v587 + 1);
                    *((_WORD *)a1 + (unsigned __int16)v584 + 0x10000) = v589;
                    a1[v588] = v584++;
                  }
                  while ( v584 < v586 );
                  v575 = v555;
                  v585 = v1209;
                }
                a1[65544] = v586;
                v590 = v581;
                v591 = v1245;
                v1345 = v590;
                v592 = a1[(unsigned __int64)(-1640531535 * *v574) >> 17];
                if ( v592 >= v1245 )
                {
                  v1302 = v573 - 3;
                  while ( 1 )
                  {
                    v593 = v1193;
                    v594 = v1193;
                    if ( v1270 <= 0 )
                    {
LABEL_1091:
                      v554 = v1319;
                      v408 = v1288;
                      v555 = HIDWORD(v1282);
                      goto LABEL_1092;
                    }
                    --v1270;
                    if ( v592 >= v1223 )
                      break;
                    v614 = v1202;
                    v616 = v592 - v1202;
                    v617 = (_DWORD *)((char *)v1314 + v616);
                    if ( v592 <= v1223 - 4 && *v617 == v585 )
                    {
                      v618 = (char *)(v1308 + 4);
                      v619 = v617 + 1;
                      v620 = (char *)(v1308 + v1223 - v592);
                      v621 = v1308 + 4;
                      if ( v620 > v1260 )
                        v620 = v1260;
                      if ( v618 < v620 - 7 )
                      {
                        if ( *v619 != *(_QWORD *)v618 )
                        {
                          __asm { tzcnt   rcx, r8 }
                          v624 = (unsigned int)_RCX >> 3;
                          goto LABEL_1010;
                        }
                        while ( 1 )
                        {
                          v618 += 8;
                          ++v619;
                          if ( v618 >= v620 - 7 )
                            break;
                          if ( *v619 != *(_QWORD *)v618 )
                          {
                            __asm { tzcnt   rax, r8 }
                            v624 = ((unsigned int)_RAX >> 3) - v621 + (_DWORD)v618;
                            goto LABEL_1010;
                          }
                        }
                      }
                      if ( v618 < v620 - 3 && *(_DWORD *)v619 == *(_DWORD *)v618 )
                      {
                        v618 += 4;
                        v619 = (_QWORD *)((char *)v619 + 4);
                      }
                      if ( v618 < v620 - 1 && *(_WORD *)v619 == *(_WORD *)v618 )
                      {
                        v618 += 2;
                        v619 = (_QWORD *)((char *)v619 + 2);
                      }
                      if ( v618 < v620 && *(_BYTE *)v619 == *v618 )
                        LODWORD(v618) = (_DWORD)v618 + 1;
                      v624 = (_DWORD)v618 - v621;
LABEL_1010:
                      v627 = v624 + 4;
                      v628 = (char *)(v1308 + (int)(v624 + 4));
                      if ( v628 == v620 && v620 < v1260 )
                      {
                        v629 = v1296;
                        v630 = (char *)(v1308 + v627);
                        if ( v628 >= v1260 - 7 )
                          goto LABEL_1015;
                        if ( *v1296 != *(_QWORD *)v628 )
                        {
                          __asm { tzcnt   rcx, rdx }
                          v634 = (unsigned int)_RCX >> 3;
                        }
                        else
                        {
                          v630 = v628 + 8;
                          v629 = v1296 + 1;
LABEL_1015:
                          while ( v630 < v1260 - 7 )
                          {
                            if ( *v629 != *(_QWORD *)v630 )
                            {
                              __asm { tzcnt   rax, r8 }
                              v634 = ((unsigned int)_RAX >> 3) - (_DWORD)v628 + (_DWORD)v630;
                              goto LABEL_1030;
                            }
                            v630 += 8;
                            ++v629;
                          }
                          if ( v630 < v1260 - 3 && *(_DWORD *)v629 == *(_DWORD *)v630 )
                          {
                            v630 += 4;
                            v629 = (_QWORD *)((char *)v629 + 4);
                          }
                          if ( v630 < v1260 - 1 && *(_WORD *)v629 == *(_WORD *)v630 )
                          {
                            v630 += 2;
                            v629 = (_QWORD *)((char *)v629 + 2);
                          }
                          if ( v630 < v1260 && *(_BYTE *)v629 == *v630 )
                            LODWORD(v630) = (_DWORD)v630 + 1;
                          v634 = (_DWORD)v630 - (_DWORD)v628;
                        }
LABEL_1030:
                        v627 += v634;
                      }
                      v636 = 0;
                      if ( v1345 )
                      {
                        v637 = v617 - 1;
                        v638 = v1263 - v1308;
                        v639 = -v616;
                        v640 = 0LL;
                        if ( (__int64)(v1263 - v1308) <= v639 )
                          v638 = v639;
                        v641 = v1308 - (_QWORD)v617;
                        while ( v636 - v638 > 3 )
                        {
                          if ( *v637 != *(_DWORD *)((char *)v637 + v641) )
                          {
                            _BitScanReverse(&v642, *v637 ^ *(_DWORD *)((char *)v637 + v641));
                            v636 -= (31 - v642) >> 3;
                            goto LABEL_1043;
                          }
                          v636 -= 4;
                          v640 -= 4LL;
                          --v637;
                        }
                        v643 = v638;
                        if ( v640 > v638 )
                        {
                          v644 = (_BYTE *)(v640 + v1324 + v1263 - 4);
                          do
                          {
                            if ( *v644 != *((_BYTE *)v1314 + v592 - v1202 + v640 - 1) )
                              break;
                            --v636;
                            --v640;
                            --v644;
                          }
                          while ( v640 > v643 );
                        }
                      }
LABEL_1043:
                      v594 = v1193;
                      v645 = v627 - v636;
                      v593 = v1193;
                      v595 = v1209;
                      v591 = v1245;
                      if ( v645 > v1215 )
                      {
                        v1215 = v645;
                        v1237 = v1255 - v592;
                        v1302 = v1308 + v636;
                      }
LABEL_1046:
                      v614 = v1202;
                      goto LABEL_1048;
                    }
                    v595 = v1209;
LABEL_1048:
                    if ( *((_WORD *)a1 + (unsigned __int16)v592 + 0x10000) != 1 )
                      goto LABEL_1089;
                    v646 = v592 - 1;
                    if ( v593 )
                    {
                      v1193 = v594;
                      if ( v594 != 2 )
                        goto LABEL_1089;
                    }
                    else
                    {
                      if ( (_BYTE)v595 != HIBYTE(v595) || (unsigned __int16)v595 != HIWORD(v595) )
                      {
                        v1193 = 1;
LABEL_1089:
                        v592 -= *((unsigned __int16 *)a1 + (unsigned __int16)v592 + 0x10000);
                        goto LABEL_1090;
                      }
                      v1193 = 2;
                      v1349 = (unsigned int)LZ4HC_countPattern(v1308 + 4, v1260, v595) + 4LL;
                    }
                    if ( v646 < v591 || v1223 - v592 < 3 )
                      goto LABEL_1089;
                    if ( v646 >= v1223 )
                    {
                      v582 = 0;
                      v647 = (_DWORD *)((char *)v1296 + v646 - v1223);
                    }
                    else
                    {
                      v647 = (_DWORD *)((char *)v1314 + v646 - v614);
                    }
                    if ( *v647 != v595 )
                    {
                      v582 = 1;
                      goto LABEL_1089;
                    }
                    v648 = v1260;
                    if ( v582 )
                      v648 = v1357;
                    v649 = (unsigned int)LZ4HC_countPattern(v647 + 1, v648, v595) + 4LL;
                    if ( v582 )
                    {
                      if ( (_DWORD *)((char *)v647 + v649) == v650 )
                      {
                        v651 = LZ4HC_rotatePattern(v649, v1209);
                        v649 += (unsigned int)LZ4HC_countPattern(v1296, v1260, v651);
                      }
                      v652 = v1314;
                    }
                    else
                    {
                      v652 = v1296;
                    }
                    v653 = LZ4HC_reverseCountPattern(v647, v652, v1209);
                    v654 = v1296;
                    v655 = v653;
                    if ( !v582 && (_QWORD *)((char *)v647 - v653) == v1296 && v1202 < v1223 )
                    {
                      v656 = LZ4HC_rotatePattern(-v653, v1209);
                      v657 = LZ4HC_reverseCountPattern(v1357, v1314, v656);
                      v655 = v657 + v658;
                      v654 = v1296;
                    }
                    v659 = v646 - v655;
                    v591 = v1245;
                    v592 = v1245;
                    if ( v659 > v1245 )
                      v592 = v659;
                    v660 = v649 + v646 - v592;
                    if ( v660 < v1349 || v649 > v1349 )
                    {
                      v582 = 1;
                      if ( v1223 - v592 - 1 >= 3 )
                      {
                        if ( !v1345 )
                        {
                          v661 = v1349;
                          if ( v660 < v1349 )
                            v661 = v649 + v646 - v592;
                          if ( v1215 < v661 )
                          {
                            if ( v1223 + v1308 - v592 - (unsigned __int64)v654 > 0xFFFF )
                              goto LABEL_1091;
                            v1215 = v661;
                            v1237 = v1255 - v592;
                            v1302 = v1308;
                          }
                          v662 = *((unsigned __int16 *)a1 + (unsigned __int16)v592 + 0x10000);
                          if ( v662 > v592 )
                            goto LABEL_1091;
                          v592 -= v662;
                        }
                      }
                      else
                      {
                        v592 = v1223;
                      }
                    }
                    else
                    {
                      v582 = 1;
                      v592 = v1223;
                      if ( v1223 - (v646 - (_DWORD)v1349 + (_DWORD)v649) - 1 >= 3 )
                        v592 = v646 - v1349 + v649;
                    }
LABEL_1090:
                    v578 = v1296;
                    v585 = v1209;
                    v590 = v1345;
                    if ( v592 < v591 )
                      goto LABEL_1091;
                    v575 = v1215;
                  }
                  v595 = v1209;
                  v596 = (_DWORD *)((char *)v578 + v592 - v1223);
                  if ( *(_WORD *)(v1263 + v575 - 1) != *(_WORD *)((char *)v596 + v575 - v590 - 1) || *v596 != v1209 )
                  {
                    v594 = v1193;
                    goto LABEL_1046;
                  }
                  v597 = 0;
                  if ( v590 )
                  {
                    v598 = v1263 - v1308;
                    v599 = v1308 - 4;
                    v600 = 0LL;
                    v601 = -(__int64)(v592 - v1223);
                    if ( (__int64)(v1263 - v1308) <= v601 )
                      v598 = v601;
                    v602 = (char *)v596 - v1308;
                    while ( v597 - v598 > 3 )
                    {
                      if ( *(_DWORD *)v599 != *(_DWORD *)&v602[v599] )
                      {
                        _BitScanReverse(&v603, *(_DWORD *)v599 ^ *(_DWORD *)&v602[v599]);
                        v597 -= (31 - v603) >> 3;
                        goto LABEL_969;
                      }
                      v597 -= 4;
                      v600 -= 4LL;
                      v599 -= 4LL;
                    }
                    v604 = v598;
                    if ( v600 > v598 )
                    {
                      v605 = (_BYTE *)(v600 + v1324 + v1263 - 4);
                      do
                      {
                        if ( *v605 != *((_BYTE *)v578 + v592 - v1223 + v600 - 1) )
                          break;
                        --v597;
                        --v600;
                        --v605;
                      }
                      while ( v600 > v604 );
                    }
                  }
LABEL_969:
                  v606 = (char *)(v1308 + 4);
                  v607 = v596 + 1;
                  v608 = v1308 + 4;
                  if ( v1308 + 4 < (unsigned __int64)(v1260 - 7) )
                  {
                    if ( *v607 != *(_QWORD *)v606 )
                    {
                      __asm { tzcnt   rcx, r8 }
                      v611 = (unsigned int)_RCX >> 3;
LABEL_986:
                      v591 = v1245;
                      v614 = v1202;
                      v615 = v611 - v597 + 4;
                      if ( v615 > v1215 )
                      {
                        v1215 = v615;
                        v1237 = v1255 - v592;
                        v1302 = v1308 + v597;
                      }
                      v594 = v1193;
                      v593 = v1193;
                      goto LABEL_1048;
                    }
                    while ( 1 )
                    {
                      v606 += 8;
                      ++v607;
                      if ( v606 >= v1260 - 7 )
                        break;
                      if ( *v607 != *(_QWORD *)v606 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v611 = ((unsigned int)_RAX >> 3) - v608 + (_DWORD)v606;
                        goto LABEL_986;
                      }
                    }
                  }
                  if ( v606 < v1260 - 3 && *(_DWORD *)v607 == *(_DWORD *)v606 )
                  {
                    v606 += 4;
                    v607 = (_QWORD *)((char *)v607 + 4);
                  }
                  if ( v606 < v1260 - 1 && *(_WORD *)v607 == *(_WORD *)v606 )
                  {
                    v606 += 2;
                    v607 = (_QWORD *)((char *)v607 + 2);
                  }
                  if ( v606 < v1260 && *(_BYTE *)v607 == *v606 )
                    LODWORD(v606) = (_DWORD)v606 + 1;
                  v611 = (_DWORD)v606 - v608;
                  goto LABEL_986;
                }
LABEL_1092:
                v424 = v1230;
                v570 = v1263;
                v663 = __PAIR64__(v1215, v1237);
                v664 = v1215;
              }
              if ( v664 <= v555 )
              {
                if ( v570 < (unsigned __int64)v424 + v1377 )
                  v1377 = v570 - (_DWORD)v424;
                v402 = v1279;
                v669 = v408;
                v697 = v408;
                v698 = v408;
                v699 = v408 + 1;
                v700 = (char *)v424 - v1279;
                if ( a7 && &v699[v700 / 0xFF + 8 + v700] > v1276 )
                {
                  v478 = v1377;
                  v667 = (char *)v1230;
                  v409 = v1276;
                  goto LABEL_1222;
                }
                if ( v700 < 0xF )
                {
                  *v697 = 16 * v700;
                }
                else
                {
                  v701 = v700 - 15;
                  *v697 = -16;
                  if ( v700 - 15 >= 0xFF )
                  {
                    v702 = v701 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v702) = -1;
                    memset_0(v699, SDWORD2(v702), v701 / 0xFF);
                    v424 = v1230;
                    v699 += v701 / 0xFF;
                    v402 = v1279;
                    v698 = v697;
                    LOBYTE(v701) = v701 / 0xFF + v701;
                  }
                  *v699++ = v701;
                  v570 = v1263;
                }
                v703 = v699;
                do
                {
                  *v703 = *(_QWORD *)((char *)v703 + v402 - v699);
                  ++v703;
                }
                while ( v703 < (_QWORD *)&v699[v700] );
                v704 = &v699[v700];
                *v704 = v1291;
                v705 = v704 + 1;
                v706 = v1377 - 4LL;
                if ( a7 )
                {
                  v409 = v1276;
                  if ( &v705[v706 / 0xFF + 6] > v1276 )
                  {
                    v478 = v1377;
                    v667 = (char *)v1230;
                    goto LABEL_1222;
                  }
                }
                v707 = *v698;
                if ( v706 < 0xF )
                {
                  *v697 = v707 + v706;
                }
                else
                {
                  v708 = v1377 - 19LL;
                  *v697 = v707 + 15;
                  if ( v708 >= 0x1FE )
                  {
                    v709 = v708 / 0x1FE;
                    v708 %= 0x1FEuLL;
                    do
                    {
                      *v705 = -1;
                      v710 = v705 + 1;
                      *v710 = -1;
                      v705 = v710 + 1;
                      --v709;
                    }
                    while ( v709 );
                  }
                  if ( v708 >= 0xFF )
                  {
                    LOBYTE(v708) = v708 + 1;
                    *v705++ = -1;
                  }
                  *v705++ = v708;
                }
                v402 = (char *)v424 + v1377;
                v669 = v705;
                v1279 = v402;
                v711 = v705;
                v712 = v705;
                v713 = v570 - (_QWORD)v402;
                v714 = v705 + 1;
                v667 = (char *)v570;
                v1230 = (_DWORD *)v570;
                if ( a7 && &v714[v713 / 0xFF + 8 + v713] > v1276 )
                {
                  v409 = v1276;
                  goto LABEL_1215;
                }
                if ( v713 < 0xF )
                {
                  *v711 = 16 * v713;
                }
                else
                {
                  v715 = v713 - 15;
                  *v711 = -16;
                  if ( v713 - 15 >= 0xFF )
                  {
                    v716 = v715 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v716) = -1;
                    memset_0(v714, SDWORD2(v716), v715 / 0xFF);
                    v714 += v715 / 0xFF;
                    v712 = v711;
                    LOBYTE(v715) = v715 / 0xFF + v715;
                  }
                  *v714++ = v715;
                  v570 = v1263;
                }
                v717 = v714;
                do
                {
                  *v717 = *(_QWORD *)((char *)v717 + v402 - v714);
                  ++v717;
                }
                while ( v717 < (_QWORD *)&v714[v713] );
                v718 = &v714[v713];
                v409 = v1276;
                *v718 = v1282;
                v408 = v718 + 1;
                v719 = SHIDWORD(v1282) - 4LL;
                v1288 = v408;
                if ( a7 && &v408[v719 / 0xFF + 6] > v1276 )
                {
                  v667 = (char *)v1230;
LABEL_1215:
                  LOWORD(v1291) = v554;
                  v478 = HIDWORD(v554);
                  goto LABEL_1222;
                }
                v720 = *v712;
                if ( v719 < 0xF )
                {
                  *v711 = v720 + v719;
                }
                else
                {
                  v721 = SHIDWORD(v1282) - 19LL;
                  *v711 = v720 + 15;
                  if ( v721 >= 0x1FE )
                  {
                    v722 = v721 / 0x1FE;
                    v721 %= 0x1FEuLL;
                    do
                    {
                      *v408 = -1;
                      v723 = v408 + 1;
                      *v723 = -1;
                      v408 = v723 + 1;
                      --v722;
                    }
                    while ( v722 );
                  }
                  if ( v721 >= 0xFF )
                  {
                    LOBYTE(v721) = v721 + 1;
                    *v408++ = -1;
                  }
                  *v408++ = v721;
                  v1288 = v408;
                }
                v404 = (char *)(v570 + SHIDWORD(v1282));
                goto LABEL_1212;
              }
              v478 = v1377;
              v665 = (unsigned __int64)v424 + v1377;
              if ( v1302 < v665 + 3 )
                break;
              if ( v570 < v665 )
              {
                if ( (__int64)(v570 - (_QWORD)v424) >= 18 )
                {
                  v478 = v570 - (_DWORD)v424;
                  v1377 = v570 - (_DWORD)v424;
                }
                else
                {
                  if ( v1377 > 18 )
                    v478 = 18;
                  v1377 = v478;
                  if ( (unsigned __int64)v424 + v478 > v570 + v555 - 4LL )
                  {
                    v478 = v570 + v555 - (_DWORD)v424 - 4;
                    v1377 = v478;
                  }
                  v666 = (_DWORD)v424 + v478 - v570;
                  if ( v666 > 0 )
                  {
                    v570 += v666;
                    v1263 = v570;
                    HIDWORD(v1282) = v555 - v666;
                    v554 = v1282;
                  }
                }
              }
              v667 = (char *)v1230;
              v668 = v1279;
              v669 = v408;
              v670 = v408;
              v671 = v408;
              v672 = (char *)v1230 - v1279;
              v673 = v408 + 1;
              if ( a7 && &v673[v672 / 0xFF + 8 + v672] > v1276 )
                goto LABEL_1221;
              if ( v672 < 0xF )
              {
                *v670 = 16 * v672;
              }
              else
              {
                v674 = v672 - 15;
                *v670 = -16;
                if ( v672 - 15 >= 0xFF )
                {
                  v675 = v674 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v675) = -1;
                  memset_0(v673, SDWORD2(v675), v674 / 0xFF);
                  v673 += v674 / 0xFF;
                  v670 = v669;
                  v668 = v1279;
                  LOBYTE(v674) = v674 / 0xFF + v674;
                  v671 = v669;
                }
                *v673++ = v674;
                v570 = v1263;
              }
              v676 = v673;
              do
              {
                *v676 = *(_QWORD *)((char *)v676 + v668 - v673);
                ++v676;
              }
              while ( v676 < (_QWORD *)&v673[v672] );
              v677 = &v673[v672];
              v478 = v1377;
              *v677 = v1291;
              v408 = v677 + 1;
              v678 = v1377 - 4LL;
              v1288 = v408;
              if ( a7 )
              {
                v409 = v1276;
                if ( &v408[v678 / 0xFF + 6] > v1276 )
                {
                  v667 = (char *)v1230;
                  v402 = v1279;
                  goto LABEL_1222;
                }
              }
              v679 = *v671;
              if ( v678 < 0xF )
              {
                *v670 = v678 + v679;
              }
              else
              {
                v680 = v1377 - 19LL;
                *v670 = v679 + 15;
                if ( v680 >= 0x1FE )
                {
                  v681 = v680 / 0x1FE;
                  v680 %= 0x1FEuLL;
                  do
                  {
                    *v408 = -1;
                    v682 = v408 + 1;
                    *v682 = -1;
                    v408 = v682 + 1;
                    --v681;
                  }
                  while ( v681 );
                }
                if ( v680 >= 0xFF )
                {
                  LOBYTE(v680) = v680 + 1;
                  *v408++ = -1;
                }
                *v408++ = v680;
                v1288 = v408;
              }
              LOWORD(v1291) = v554;
              v424 = (_DWORD *)v570;
              v478 = HIDWORD(v554);
              v554 = v663;
              v1279 = (char *)v1230 + v1377;
              v1282 = v663;
              v555 = HIDWORD(v663);
              v1230 = (_DWORD *)v570;
              v570 = v1302;
              v1263 = v1302;
              v1319 = v663;
              v1377 = v478;
            }
            if ( v1302 >= v665 )
              break;
            v1282 = v663;
            v570 = v1302;
            v555 = HIDWORD(v663);
            v554 = v663;
            v1263 = v1302;
            v1319 = v663;
          }
          if ( v570 < v665 )
          {
            v683 = (_DWORD)v424 + v1377 - v570;
            v1263 = v683 + v570;
            if ( v555 - v683 >= 4 )
            {
              HIDWORD(v1282) = v555 - v683;
              v554 = v1282;
            }
            else
            {
              v1263 = v1302;
              v554 = v663;
            }
          }
          v667 = (char *)v1230;
          v668 = v1279;
          v669 = v408;
          v684 = v408;
          v685 = v408;
          v686 = (char *)v1230 - v1279;
          v687 = v408 + 1;
          if ( a7 )
          {
            if ( &v687[v686 / 0xFF + 8 + v686] > v1276 )
              break;
          }
          if ( v686 < 0xF )
          {
            *v684 = 16 * v686;
          }
          else
          {
            v688 = v686 - 15;
            *v684 = -16;
            if ( v686 - 15 >= 0xFF )
            {
              v689 = v688 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v689) = -1;
              memset_0(v687, SDWORD2(v689), v688 / 0xFF);
              v687 += v688 / 0xFF;
              v684 = v669;
              v668 = v1279;
              LOBYTE(v688) = v688 / 0xFF + v688;
              v685 = v669;
            }
            *v687++ = v688;
          }
          v690 = v687;
          do
          {
            *v690 = *(_QWORD *)((char *)v690 + v668 - v687);
            ++v690;
          }
          while ( v690 < (_QWORD *)&v687[v686] );
          v691 = &v687[v686];
          v478 = v1377;
          *v691 = v1291;
          v408 = v691 + 1;
          v692 = v1377 - 4LL;
          v1288 = v408;
          if ( a7 )
          {
            v409 = v1276;
            if ( &v408[v692 / 0xFF + 6] > v1276 )
            {
              v667 = (char *)v1230;
              v402 = v1279;
              goto LABEL_1222;
            }
          }
          v693 = *v685;
          if ( v692 < 0xF )
          {
            *v684 = v692 + v693;
          }
          else
          {
            v694 = v1377 - 19LL;
            *v684 = v693 + 15;
            if ( v694 >= 0x1FE )
            {
              v695 = v694 / 0x1FE;
              v694 %= 0x1FEuLL;
              do
              {
                *v408 = -1;
                v696 = v408 + 1;
                *v696 = -1;
                v408 = v696 + 1;
                --v695;
              }
              while ( v695 );
            }
            if ( v694 >= 0xFF )
            {
              LOBYTE(v694) = v694 + 1;
              *v408++ = -1;
            }
            *v408++ = v694;
            v1288 = v408;
          }
          v477 = (_DWORD *)v1263;
          v459 = v554;
          v1279 = (char *)v1230 + v1377;
          v424 = (_DWORD *)v1302;
          v1230 = (_DWORD *)v1302;
          v1291 = v663;
          v1356 = v1263;
          v1295 = v554;
          v1352 = HIDWORD(v554);
LABEL_933:
          v407 = v1305;
        }
LABEL_1221:
        v402 = v668;
        v409 = v1276;
LABEL_1222:
        if ( a7 != 2 )
          goto LABEL_1249;
        v737 = v667 - v402;
        v408 = v669;
        v738 = (v667 - v402 + 240) / 0xFFuLL + v667 - v402 + 1;
        if ( &v669[v738] <= v409 - 3 )
        {
          if ( v478 > (unsigned __int64)(255 * (&v409[-v738 - 3] - v669) + 18) )
            v478 = 255 * ((_DWORD)v409 - 3 - v738 - (_DWORD)v669) + 18;
          v1378 = v478;
          if ( (__int64)&v409[v478 - v738 - (_QWORD)v669 + 2] >= 12 )
          {
            v739 = v669 + 1;
            if ( v737 < 0xF )
            {
              *v669 = 16 * v737;
            }
            else
            {
              v740 = v737 - 15;
              *v669 = -16;
              if ( v737 - 15 >= 0xFF )
              {
                v741 = v740 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v741) = -1;
                memset_0(v669 + 1, SDWORD2(v741), v740 / 0xFF);
                v478 = v1378;
                v739 += v740 / 0xFF;
                v402 = v1279;
                LOBYTE(v740) = v740 / 0xFF + v740;
              }
              *v739++ = v740;
              v409 = v1276;
            }
            v742 = v739;
            v743 = v402 - v739;
            do
            {
              *v742 = *(_QWORD *)((char *)v742 + v743);
              ++v742;
            }
            while ( v742 < (_QWORD *)&v739[v737] );
            v744 = &v739[v737];
            v745 = v478 - 4LL;
            *v744 = v1291;
            v408 = v744 + 1;
            v746 = *v669;
            if ( v745 < 0xF )
            {
              *v669 = v746 + v745;
            }
            else
            {
              v747 = v478 - 19LL;
              *v669 = v746 + 15;
              if ( v747 >= 0x1FE )
              {
                v748 = v747 / 0x1FE;
                v747 %= 0x1FEuLL;
                do
                {
                  *v408 = -1;
                  v749 = v408 + 1;
                  *v749 = -1;
                  v408 = v749 + 1;
                  --v748;
                }
                while ( v748 );
              }
              if ( v747 >= 0xFF )
              {
                LOBYTE(v747) = v747 + 1;
                *v408++ = -1;
              }
              *v408++ = v747;
            }
            v402 = (char *)v1230 + v478;
            v1279 = v402;
          }
        }
LABEL_1243:
        v9 = a4;
        v406 = v1338;
      }
      v750 = v406 - v402;
      v751 = v408;
      if ( a7 == 2 )
      {
        v409 += 5;
      }
      else if ( !a7 )
      {
        goto LABEL_1251;
      }
      if ( &v408[(v750 + 240) / 0xFF + 1 + v750] > v409 )
      {
        if ( a7 == 1 )
        {
LABEL_1249:
          v752 = 0;
LABEL_1257:
          if ( v752 <= 0 )
            *((_BYTE *)a1 + 262183) = 1;
          return (unsigned int)v752;
        }
        v750 = v409 - v408 - 1 - ((unsigned __int64)(v409 - v408 - 1 + 241) >> 8);
      }
LABEL_1251:
      v753 = v750 + (_DWORD)v402;
      if ( v750 < 0xF )
      {
        *v408 = 16 * v750;
      }
      else
      {
        *v408 = -16;
        v754 = v750 - 15;
        ++v408;
        if ( v750 - 15 >= 0xFF )
        {
          v755 = v754 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v755) = -1;
          memset_0(v408, SDWORD2(v755), v754 / 0xFF);
          v408 += v754 / 0xFF;
          v402 = v1279;
          LOBYTE(v754) = v754 / 0xFF + v754;
        }
        v751 = v408;
        *v408 = v754;
      }
      memmove(v751 + 1, v402, v750);
      *v9 = v753 - v1370;
      v752 = (_DWORD)v408 + 1 + v750 - (_DWORD)a3;
      goto LABEL_1257;
    }
  }
  return v400;
}
