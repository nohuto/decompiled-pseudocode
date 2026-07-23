/*
 * XREFs of LZ4HC_compress_generic_dictCtx @ 0x1800EFA3C
 * Callers:
 *     LZ4HC_compress_generic @ 0x1800ED00C (LZ4HC_compress_generic.c)
 * Callees:
 *     LZ4HC_countPattern @ 0x1800E6338 (LZ4HC_countPattern.c)
 *     LZ4HC_reverseCountPattern @ 0x1800E6394 (LZ4HC_reverseCountPattern.c)
 *     LZ4HC_rotatePattern @ 0x18010D360 (LZ4HC_rotatePattern.c)
 *     LZ4HC_setExternalDict @ 0x18011F6CC (LZ4HC_setExternalDict.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LZ4HC_compress_generic_dictCtx(
        __int64 a1,
        unsigned int *a2,
        _BYTE *a3,
        unsigned int *a4,
        int a5,
        __int64 a6,
        int a7)
{
  _BYTE *v8; // r12
  __int64 v10; // r10
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int *v14; // rbx
  int v15; // r13d
  unsigned int *v16; // r8
  __int64 v17; // rdx
  char *v18; // r15
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r9
  _BYTE *v21; // r14
  size_t v22; // r15
  _BYTE *v23; // r8
  unsigned int v24; // r13d
  unsigned int *v25; // rbx
  unsigned int *v26; // r9
  __int64 v27; // rdx
  char *v28; // r15
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r10
  __int64 v31; // rax
  _BYTE *v32; // r14
  size_t v33; // r15
  _BYTE *v34; // r8
  int v35; // r15d
  int v36; // edi
  __int64 v37; // rdx
  _QWORD *v38; // rsi
  unsigned int v39; // ebx
  __int64 v40; // r13
  unsigned int v41; // r11d
  int v42; // r9d
  unsigned int v43; // r10d
  unsigned int v44; // r12d
  unsigned int v45; // r8d
  __int64 v46; // r9
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r8
  unsigned int v50; // r11d
  int v51; // r15d
  unsigned int *v52; // rbx
  __int64 v53; // r8
  _QWORD *v54; // rcx
  int v55; // ebx
  _QWORD *v56; // rdx
  unsigned __int64 v57; // rax
  unsigned int *v58; // r9
  unsigned __int64 v59; // r8
  unsigned int v61; // ecx
  unsigned __int64 v62; // rdi
  _DWORD *v63; // rdx
  unsigned int v64; // r14d
  unsigned int v65; // esi
  unsigned int v66; // r9d
  int v67; // r15d
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // r11
  unsigned __int64 v70; // rdi
  __int64 v71; // r11
  unsigned __int64 v72; // rdx
  unsigned int v73; // eax
  _QWORD *v74; // r8
  unsigned int v75; // r11d
  unsigned int v76; // eax
  unsigned int v77; // r11d
  unsigned __int64 v78; // rcx
  bool v79; // cf
  unsigned __int64 v80; // r11
  unsigned __int64 v81; // rbx
  unsigned int *v82; // rcx
  unsigned int v83; // r12d
  int v84; // r10d
  __int64 v85; // r9
  unsigned __int64 v86; // rax
  int v87; // esi
  unsigned __int64 v88; // rdi
  unsigned __int64 v89; // r12
  unsigned __int64 v90; // rax
  int v91; // eax
  unsigned __int64 v92; // rbx
  unsigned int *v93; // r13
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rdx
  __int64 v96; // rcx
  unsigned int v97; // ecx
  int v98; // r8d
  __int64 v99; // rcx
  int v100; // eax
  int v101; // r11d
  _BYTE *v102; // r15
  char *v103; // r13
  char *v104; // r9
  _BYTE *v105; // r14
  unsigned __int64 v106; // rsi
  unsigned __int64 v107; // r12
  _QWORD *v108; // rcx
  _WORD *v109; // r14
  _BYTE *v110; // r14
  unsigned __int64 v111; // rcx
  char v112; // al
  unsigned __int64 v113; // rcx
  unsigned __int64 v114; // rdx
  _BYTE *v115; // r14
  char *v116; // r13
  char *v117; // r9
  unsigned __int64 v118; // rsi
  _BYTE *v119; // r14
  unsigned __int64 v120; // r12
  _QWORD *v121; // rcx
  _WORD *v122; // r14
  unsigned __int64 v123; // rcx
  char v124; // al
  int v125; // ecx
  unsigned int *v126; // rsi
  unsigned __int64 v127; // r12
  _BYTE *v128; // r8
  char *v129; // r10
  _BYTE *v130; // r14
  unsigned __int64 v131; // r13
  _QWORD *v132; // rcx
  _WORD *v133; // r14
  unsigned __int64 v134; // rcx
  char v135; // al
  _BYTE *v136; // r12
  char *v137; // r13
  _BYTE *v138; // r14
  unsigned __int64 v139; // rdi
  unsigned __int64 v140; // rsi
  _QWORD *v141; // rcx
  _WORD *v142; // r14
  unsigned __int64 v143; // rcx
  char v144; // al
  unsigned __int64 v145; // rcx
  unsigned __int64 v146; // rdx
  _BYTE *v147; // r14
  _QWORD *v148; // rcx
  int v149; // edi
  unsigned __int64 v150; // rax
  _QWORD *v151; // r9
  unsigned __int64 v152; // r10
  unsigned __int64 v153; // r8
  _QWORD *v154; // rdx
  unsigned int v158; // ecx
  signed int v159; // ebx
  _QWORD *v160; // r8
  _QWORD *v161; // rdx
  _QWORD *v162; // rcx
  unsigned __int64 v163; // rax
  _QWORD *v164; // r10
  unsigned __int64 v165; // r9
  unsigned int v168; // ecx
  signed int v173; // ecx
  bool v174; // cc
  int v175; // edx
  int v176; // ecx
  unsigned __int64 v177; // rcx
  unsigned __int64 v178; // rdx
  _BYTE *v179; // r14
  int v180; // ecx
  unsigned int *v181; // rsi
  unsigned __int64 v182; // r12
  _BYTE *v183; // r8
  char *v184; // r10
  _BYTE *v185; // r14
  unsigned __int64 v186; // r13
  _QWORD *v187; // rcx
  _WORD *v188; // r14
  unsigned __int64 v189; // rcx
  char v190; // al
  unsigned __int64 v191; // rcx
  unsigned __int64 v192; // rdx
  _BYTE *v193; // r14
  unsigned int *v194; // rax
  int v195; // r14d
  int v196; // esi
  size_t v197; // rdi
  unsigned __int64 v199; // rdi
  __int64 v200; // rbx
  unsigned int v201; // r8d
  _QWORD *v202; // r15
  unsigned int v203; // esi
  int v204; // r13d
  unsigned __int64 v205; // rdx
  int v206; // ebx
  __int64 v207; // rdx
  unsigned int v208; // r8d
  __int64 v209; // r10
  unsigned __int64 v210; // rdx
  unsigned __int64 v211; // rcx
  unsigned int v212; // esi
  __int64 v213; // rdx
  unsigned int *v214; // r8
  unsigned int v215; // r11d
  unsigned int v216; // r14d
  char *v217; // r12
  _DWORD *v218; // r15
  unsigned int v219; // r8d
  unsigned int v220; // r10d
  unsigned int v221; // edx
  _QWORD *v222; // rbx
  __int64 v223; // rcx
  unsigned int v224; // r9d
  unsigned __int64 v225; // r8
  int v226; // r11d
  unsigned int v227; // r10d
  int v228; // r8d
  unsigned int v229; // r12d
  _DWORD *v230; // r8
  unsigned __int64 v231; // rdx
  unsigned __int64 v232; // rcx
  __int64 v233; // rdx
  unsigned int v234; // r13d
  unsigned int v235; // edi
  unsigned int v236; // r14d
  __int64 v237; // r9
  int v238; // r12d
  _DWORD *v239; // r11
  _DWORD *v240; // r8
  int v241; // edx
  __int64 v242; // rcx
  __int64 v243; // rax
  signed __int64 v244; // r10
  unsigned int v245; // eax
  unsigned __int64 v246; // rbx
  _QWORD *v247; // rcx
  _QWORD *v248; // rdx
  int v249; // r10d
  unsigned int v250; // ecx
  unsigned __int64 v253; // rdi
  unsigned __int64 v254; // r8
  _BYTE *v255; // r14
  unsigned __int64 v256; // rsi
  _QWORD *v257; // rcx
  __int64 v258; // rbx
  _WORD *v259; // r14
  unsigned __int64 v260; // rcx
  char v261; // al
  unsigned __int64 v262; // rcx
  unsigned __int64 v263; // rdx
  _BYTE *v264; // r14
  int v265; // r9d
  _DWORD *v266; // rbx
  __int64 v267; // rcx
  __int64 v268; // rdx
  _DWORD *v269; // r8
  __int64 v270; // rax
  unsigned __int64 v271; // r10
  unsigned int v272; // eax
  unsigned __int64 v273; // r12
  _QWORD *v274; // rcx
  _QWORD *v275; // rdx
  int v276; // edi
  unsigned __int64 v277; // rax
  _QWORD *v278; // r10
  unsigned __int64 v279; // r8
  unsigned int v283; // ecx
  unsigned int v284; // ebx
  __int64 v285; // r12
  _DWORD *v286; // r15
  _QWORD *v287; // rcx
  _QWORD *v288; // rdx
  _QWORD *v289; // r10
  unsigned __int64 v290; // rax
  int v291; // edi
  _QWORD *v292; // r9
  unsigned __int64 v293; // r8
  unsigned int v297; // ecx
  __int64 v298; // rbx
  _DWORD *v299; // rsi
  _QWORD *v300; // rcx
  _QWORD *v301; // rdx
  _QWORD *v302; // r8
  int v303; // r10d
  unsigned int v306; // ecx
  signed int v307; // r11d
  _QWORD *v308; // r9
  _QWORD *v309; // rdx
  _QWORD *v310; // rcx
  unsigned int v313; // ecx
  int v314; // edx
  signed __int64 v315; // rbx
  int v316; // r8d
  __int64 v317; // rcx
  _DWORD *v318; // r9
  signed __int64 v319; // rsi
  unsigned int v320; // eax
  int v321; // r11d
  unsigned int v322; // r15d
  unsigned int v323; // ebx
  int v324; // r12d
  unsigned __int64 v325; // rbx
  unsigned __int64 v326; // r11
  unsigned __int64 v327; // rsi
  __int64 v328; // r11
  unsigned __int64 v329; // rdx
  unsigned __int64 v330; // r13
  unsigned int v331; // eax
  _QWORD *v332; // r8
  unsigned int v333; // r11d
  unsigned __int64 v334; // rdx
  unsigned __int64 v335; // rcx
  unsigned int v336; // ecx
  int v337; // r8d
  __int64 v338; // rcx
  int v339; // eax
  int v340; // r11d
  int v342; // ecx
  unsigned int v343; // r15d
  unsigned int v344; // r9d
  int v345; // r12d
  unsigned __int64 v346; // rbx
  unsigned __int64 v347; // rsi
  unsigned __int64 v348; // rdi
  unsigned __int64 v349; // rdx
  unsigned int v350; // eax
  unsigned int v351; // esi
  unsigned __int64 v352; // rdx
  unsigned int v353; // eax
  unsigned __int64 v354; // rcx
  int v355; // r8d
  unsigned int v356; // ecx
  int v357; // r8d
  __int64 v358; // rcx
  unsigned __int64 v359; // rcx
  unsigned __int64 v360; // rdx
  _BYTE *v361; // r14
  char *v364; // rbx
  __int64 v365; // rdx
  char *v366; // r9
  _BYTE *v367; // rcx
  char *v368; // r15
  unsigned __int64 v369; // r8
  _BYTE *v370; // r14
  _BYTE *v371; // r12
  int v372; // edi
  __int64 v373; // r13
  unsigned __int64 v374; // r8
  _QWORD *v375; // r12
  unsigned int v376; // r10d
  unsigned int v377; // r9d
  unsigned int v378; // edx
  __int64 v379; // r9
  int v380; // r15d
  unsigned int v381; // esi
  unsigned int *v382; // r9
  unsigned int v383; // r11d
  __int64 v384; // r8
  _QWORD *v385; // rcx
  _QWORD *v386; // rdx
  int v387; // r9d
  unsigned int v390; // ecx
  unsigned __int64 v392; // rbx
  signed int v393; // edi
  _QWORD *v394; // r9
  _QWORD *v395; // rdx
  _QWORD *v396; // rcx
  unsigned __int64 v397; // rax
  _QWORD *v398; // r10
  unsigned __int64 v399; // r8
  unsigned int v402; // ecx
  int v404; // edx
  __int64 v405; // r12
  int v406; // r8d
  __int64 v407; // rcx
  _DWORD *v408; // r9
  unsigned __int64 v409; // r10
  unsigned int v410; // eax
  int v411; // edi
  int v414; // ecx
  int v415; // esi
  __int64 v416; // r13
  char *v417; // r12
  unsigned int v418; // edx
  __int64 v419; // r9
  unsigned int v420; // r8d
  int v421; // edx
  unsigned int v422; // r10d
  int v423; // r15d
  unsigned int v424; // edi
  unsigned int v425; // r9d
  char *v426; // r8
  unsigned __int64 v427; // rdx
  unsigned __int64 v428; // rcx
  unsigned int *v429; // r9
  unsigned int v430; // r11d
  __int64 v431; // r8
  _QWORD *v432; // rcx
  int v433; // r9d
  char *v434; // rdx
  unsigned int v435; // ecx
  signed int v436; // ecx
  _QWORD *v437; // rdi
  unsigned int v438; // esi
  unsigned int v439; // eax
  int v440; // r15d
  char *v441; // rbx
  unsigned __int64 v442; // r11
  unsigned __int64 v443; // rdi
  char *v444; // r11
  char *v445; // r9
  unsigned __int64 i; // rcx
  char *v447; // rdx
  __int64 v448; // r8
  unsigned int v449; // eax
  unsigned int v450; // r11d
  unsigned __int64 v451; // rcx
  unsigned __int64 v452; // r11
  unsigned __int64 v453; // r12
  unsigned int *v454; // rcx
  int v455; // r9d
  unsigned __int64 v456; // rax
  int v457; // esi
  unsigned __int64 v458; // rdi
  unsigned __int64 v459; // r15
  __int64 v460; // r10
  unsigned __int64 v461; // rax
  int v462; // eax
  unsigned __int64 v463; // rbx
  unsigned __int64 v464; // rcx
  int v465; // ecx
  unsigned int *v466; // rsi
  _BYTE *v467; // r15
  _BYTE *v468; // r8
  char *v469; // r10
  _BYTE *v470; // r14
  unsigned __int64 v471; // r13
  unsigned __int64 v472; // r12
  _QWORD *v473; // rcx
  _WORD *v474; // r14
  unsigned __int64 v475; // rcx
  char v476; // al
  unsigned __int64 v477; // rdx
  unsigned int v478; // ecx
  int v479; // eax
  int v480; // r8d
  unsigned __int64 v481; // r10
  unsigned __int64 v482; // rcx
  char *v483; // rdx
  _DWORD *v484; // rdx
  _QWORD *v485; // rcx
  int v486; // r10d
  _QWORD *v487; // r8
  _QWORD *v488; // rdx
  unsigned int v489; // ecx
  signed int v490; // r10d
  _QWORD *v491; // r9
  _QWORD *v492; // rdx
  _QWORD *v493; // rcx
  unsigned int v495; // ecx
  char *v496; // r13
  char *v497; // r9
  _BYTE *v498; // r14
  unsigned __int64 v499; // rsi
  unsigned __int64 v500; // r12
  _QWORD *v501; // rcx
  _WORD *v502; // r14
  _BYTE *v503; // r14
  unsigned __int64 v504; // rcx
  char v505; // al
  int v506; // ecx
  unsigned int *v507; // rsi
  _BYTE *v508; // r8
  char *v509; // r10
  _BYTE *v510; // r14
  unsigned __int64 v511; // r13
  unsigned __int64 v512; // r12
  _QWORD *v513; // rcx
  _WORD *v514; // r14
  unsigned __int64 v515; // rcx
  char v516; // al
  unsigned int *v522; // rcx
  _BYTE *v523; // r12
  char *v524; // r13
  unsigned __int64 v525; // rdi
  _BYTE *v526; // r14
  unsigned __int64 v527; // rsi
  _QWORD *v528; // rcx
  _WORD *v529; // r14
  unsigned __int64 v530; // rcx
  char v531; // al
  unsigned __int64 v535; // rcx
  unsigned __int64 v536; // rdx
  _BYTE *v537; // r14
  unsigned __int64 v538; // r10
  char *v539; // r13
  char *v540; // r9
  unsigned __int64 v541; // rsi
  _BYTE *v542; // r14
  unsigned __int64 v543; // r12
  _QWORD *v544; // rcx
  _WORD *v545; // r14
  unsigned __int64 v546; // rcx
  char v547; // al
  unsigned __int64 v548; // rcx
  unsigned __int64 v549; // rdx
  _BYTE *v550; // r14
  int v555; // esi
  size_t v556; // rdi
  int v557; // r14d
  int v558; // r15d
  unsigned int *v559; // rdi
  int v560; // r15d
  __int64 v561; // r9
  __int64 v562; // rdx
  unsigned int v563; // r8d
  _QWORD *v564; // r12
  unsigned int v565; // r13d
  __int64 v566; // rcx
  _QWORD *v567; // r8
  unsigned int v568; // esi
  int v569; // ebx
  unsigned int v570; // edx
  unsigned int v571; // r9d
  _DWORD *v572; // r8
  unsigned __int64 v573; // rdx
  unsigned __int64 v574; // rcx
  unsigned int v575; // edi
  __int64 v576; // r9
  unsigned int v577; // ebx
  unsigned int v578; // r11d
  int v579; // ecx
  int v580; // esi
  _DWORD *v581; // rsi
  _QWORD *v582; // rcx
  _QWORD *v583; // rdx
  _QWORD *v584; // r8
  int v585; // r10d
  unsigned int v589; // ecx
  int v590; // edx
  int v591; // ecx
  __int64 v592; // r10
  char *v593; // rdx
  __int64 v594; // r10
  _BYTE *v595; // rdx
  __int64 v596; // r10
  char *v597; // r8
  __int64 v598; // r10
  _BYTE *v599; // r8
  unsigned __int64 v600; // rcx
  unsigned __int64 v601; // rdx
  _BYTE *v602; // r14
  unsigned __int64 v603; // rdi
  unsigned __int64 v604; // r8
  _BYTE *v605; // r14
  unsigned __int64 v606; // rsi
  _QWORD *v607; // rcx
  __int64 v608; // rbx
  _WORD *v609; // r14
  unsigned __int64 v610; // rcx
  char v611; // al
  unsigned __int64 v612; // rcx
  unsigned __int64 v613; // rdx
  _BYTE *v614; // r14
  unsigned int *v619; // rbx
  __int64 v620; // r9
  unsigned int v621; // r8d
  _QWORD *v622; // r12
  unsigned int v623; // r13d
  _QWORD *v624; // r8
  int v625; // r11d
  unsigned int v626; // r15d
  __int64 v627; // rdx
  unsigned int v628; // r9d
  _DWORD *v629; // r8
  unsigned __int64 v630; // rdx
  unsigned __int64 v631; // rcx
  unsigned int v632; // r13d
  __int64 v633; // rdx
  unsigned __int64 v634; // r9
  unsigned int v635; // edi
  __int64 v636; // rax
  unsigned int v637; // r10d
  int v638; // ecx
  _DWORD *v639; // r11
  int v640; // r10d
  _DWORD *v641; // r8
  int v642; // edx
  __int64 v643; // rcx
  __int64 v644; // rax
  char *v645; // r9
  unsigned int v646; // eax
  _QWORD *v647; // rcx
  _QWORD *v648; // rdx
  int v649; // r9d
  unsigned int v652; // ecx
  unsigned int v653; // r11d
  int v654; // ecx
  unsigned int v655; // r12d
  unsigned int v656; // ebx
  int v657; // r15d
  char *v658; // rbx
  unsigned __int64 v659; // r11
  unsigned __int64 v660; // rsi
  char *v661; // r11
  char *v662; // r11
  unsigned __int64 v663; // r13
  char *v664; // r9
  unsigned __int64 k; // rcx
  char *v666; // r8
  _DWORD *v667; // rbx
  bool v668; // zf
  int v669; // r9d
  __int64 v670; // rcx
  int v671; // edx
  _DWORD *v672; // r8
  __int64 v673; // rax
  unsigned __int64 v674; // r10
  unsigned int v675; // eax
  _DWORD *v676; // rcx
  _DWORD *v677; // rdx
  int v678; // r10d
  unsigned int v682; // ecx
  unsigned __int64 v683; // rcx
  unsigned __int64 v684; // rdx
  _BYTE *v685; // r14
  unsigned __int64 v686; // rcx
  unsigned __int64 v687; // rdx
  _BYTE *v688; // r14
  __int64 v689; // r9
  unsigned __int64 v690; // rcx
  unsigned __int64 v691; // rdx
  unsigned int v692; // ecx
  int v693; // eax
  int v694; // r9d
  unsigned __int64 v695; // rcx
  char *v696; // rdx
  _DWORD *v697; // rsi
  _QWORD *v698; // rcx
  _QWORD *v699; // rdx
  _QWORD *v700; // r8
  int v701; // r10d
  unsigned int v705; // ecx
  __int64 v706; // r10
  char *v707; // rdx
  int v709; // ecx
  _QWORD *v710; // r15
  _DWORD *v711; // r9
  int v712; // r8d
  __int64 v713; // rcx
  unsigned __int64 v714; // r10
  unsigned int v715; // eax
  int v716; // edx
  int v717; // ebx
  unsigned int v718; // r12d
  unsigned int v719; // r13d
  char *v720; // rbx
  unsigned __int64 v721; // rdi
  unsigned __int64 v722; // r15
  char *v723; // r10
  unsigned __int64 v724; // rdi
  char *v725; // r9
  unsigned __int64 j; // rcx
  char *v727; // r8
  __int64 v728; // r9
  unsigned __int64 v729; // rcx
  unsigned __int64 v730; // rdx
  unsigned int v731; // ecx
  int v732; // eax
  int v733; // r9d
  unsigned __int64 v734; // rcx
  char *v735; // rdx
  unsigned int v736; // eax
  signed int v738; // ebx
  _QWORD *v739; // r9
  _QWORD *v740; // rdx
  _QWORD *v741; // rcx
  unsigned int v744; // ecx
  __int64 v746; // r10
  char *v747; // r8
  __int64 v748; // r9
  _BYTE *v749; // rdx
  signed int v753; // r11d
  _QWORD *v754; // r9
  _QWORD *v755; // rdx
  _QWORD *v756; // rcx
  unsigned int v759; // ecx
  int v761; // edx
  _DWORD *v762; // r9
  int v763; // r8d
  __int64 v764; // rcx
  char *v765; // rsi
  unsigned int v766; // eax
  int v767; // r11d
  __int64 v768; // r10
  _BYTE *v769; // r8
  _DWORD *v770; // rdx
  unsigned int v771; // edi
  int v772; // r15d
  unsigned __int64 v773; // rbx
  _QWORD *v774; // rcx
  int v775; // r10d
  _QWORD *v776; // r8
  _QWORD *v777; // rdx
  unsigned int v780; // ecx
  _DWORD *v781; // r8
  unsigned __int64 v782; // rdx
  unsigned __int64 v783; // rcx
  _BYTE *v784; // r14
  unsigned __int64 v785; // rdx
  unsigned __int64 v786; // rcx
  size_t v787; // r15
  _BYTE *v788; // r8
  size_t v789; // rdi
  unsigned int v792; // r8d
  __int64 v793; // rcx
  unsigned int v794; // r8d
  __int64 v795; // rcx
  unsigned int v796; // r8d
  __int64 v797; // rcx
  unsigned int v798; // eax
  _QWORD *v799; // rcx
  _WORD *v800; // r14
  int v801; // esi
  unsigned __int64 v802; // rcx
  char v803; // al
  unsigned __int64 v804; // rcx
  unsigned __int64 v805; // rdx
  _BYTE *v806; // r14
  unsigned int *v807; // r9
  unsigned __int64 v808; // r15
  unsigned __int64 v809; // rdi
  unsigned __int64 v810; // r10
  int v811; // r8d
  int v812; // edx
  int v813; // ecx
  unsigned __int64 v814; // rax
  unsigned int *v815; // r15
  unsigned int v816; // edx
  __int64 v817; // rbx
  unsigned int v818; // esi
  _QWORD *v819; // r11
  unsigned __int64 v820; // r8
  unsigned int v821; // r9d
  unsigned int v822; // r13d
  __int64 v823; // rcx
  __int64 v824; // r10
  int v825; // edx
  _DWORD *v826; // r8
  int v827; // r11d
  unsigned __int64 v828; // rdx
  unsigned __int64 v829; // rcx
  _QWORD *v830; // rcx
  _WORD *v831; // r14
  _BYTE *v832; // r14
  unsigned __int64 v833; // rcx
  char v834; // al
  unsigned __int64 v835; // rcx
  unsigned __int64 v836; // rdx
  _BYTE *v837; // r14
  _BYTE *v838; // r15
  char *v839; // r13
  char *v840; // r9
  unsigned __int64 v841; // rsi
  _BYTE *v842; // r14
  unsigned __int64 v843; // rcx
  _QWORD *v844; // rcx
  _WORD *v845; // r14
  unsigned __int64 v846; // rcx
  char v847; // al
  unsigned __int64 v848; // rcx
  unsigned __int64 v849; // rdx
  _BYTE *v850; // r14
  unsigned __int64 v851; // rdi
  unsigned __int64 v852; // r8
  _BYTE *v853; // r14
  _QWORD *v854; // rcx
  __int64 v855; // rbx
  _WORD *v856; // r14
  unsigned __int64 v857; // rcx
  char v858; // al
  unsigned __int64 v859; // r12
  unsigned __int64 v860; // rsi
  signed int v862; // ecx
  signed int v864; // r10d
  _QWORD *v865; // r9
  _QWORD *v866; // rdx
  _QWORD *v867; // rcx
  int v870; // eax
  unsigned __int64 v871; // rbx
  unsigned __int64 v872; // rcx
  int v873; // ecx
  int v874; // ecx
  unsigned __int64 v875; // r13
  _BYTE *v876; // r8
  char *v877; // r10
  _BYTE *v878; // r14
  unsigned __int64 v879; // r12
  char *v880; // r13
  char *v881; // r9
  unsigned __int64 v882; // rsi
  _BYTE *v883; // r14
  unsigned __int64 v884; // r12
  unsigned int v885; // eax
  unsigned __int64 v886; // r11
  unsigned int *v887; // rcx
  __int64 v888; // rbx
  char *v889; // rax
  int v890; // eax
  int v891; // r8d
  unsigned __int64 v892; // r8
  _QWORD *v893; // rdx
  _QWORD *v894; // rcx
  int v895; // esi
  unsigned int v898; // ecx
  int v899; // ecx
  int v900; // r10d
  unsigned int v901; // r11d
  unsigned int v902; // r9d
  unsigned __int128 v903; // rax
  unsigned __int128 v904; // rax
  unsigned __int128 v905; // rax
  unsigned __int128 v906; // rax
  unsigned __int128 v907; // rax
  unsigned __int128 v908; // rax
  unsigned __int128 v909; // rax
  unsigned __int128 v910; // rax
  unsigned __int128 v911; // rax
  unsigned __int128 v912; // rax
  unsigned __int128 v913; // rax
  unsigned __int128 v914; // rax
  unsigned __int128 v915; // rax
  unsigned __int128 v916; // rax
  unsigned int v920; // ecx
  unsigned __int64 v922; // r11
  unsigned __int64 v923; // rsi
  __int64 v924; // r11
  unsigned int v925; // eax
  unsigned __int64 v926; // rdx
  unsigned int v927; // eax
  unsigned int v928; // r11d
  int v929; // eax
  int v930; // eax
  int v931; // r11d
  unsigned int v932; // eax
  unsigned int v933; // r11d
  unsigned __int64 v934; // rcx
  unsigned __int64 v935; // rdx
  unsigned int v936; // ecx
  unsigned int *v937; // rbx
  __int64 v938; // r12
  __int64 v939; // r15
  __int64 v940; // rdi
  int v941; // r14d
  signed int v944; // ecx
  unsigned int *v945; // r9
  __int64 v946; // r8
  _QWORD *v947; // rdx
  __int64 v948; // r13
  unsigned __int64 v949; // rdi
  unsigned int v950; // r12d
  unsigned int v951; // esi
  unsigned int v952; // eax
  int v953; // r10d
  unsigned int v954; // r9d
  _DWORD *v955; // r8
  unsigned __int64 v956; // rdx
  unsigned __int64 v957; // rcx
  char *v958; // r9
  __int64 v959; // rdx
  unsigned int v960; // r15d
  char *v961; // rsi
  _QWORD *v962; // r11
  int v963; // r14d
  unsigned int v964; // r10d
  _DWORD *v965; // rbx
  int v966; // r10d
  __int64 v967; // rcx
  int v968; // edx
  _DWORD *v969; // r8
  __int64 v970; // rax
  signed __int64 v971; // r9
  unsigned int v972; // eax
  __int64 v973; // r9
  char *v974; // rdx
  _QWORD *v975; // rcx
  _QWORD *v976; // rdx
  int v977; // r9d
  unsigned int v980; // ecx
  int v983; // ecx
  __int64 v984; // rsi
  _DWORD *v985; // rdi
  char *v986; // rcx
  _QWORD *v987; // rdx
  char *v988; // r8
  int v989; // r10d
  unsigned int v992; // ecx
  signed int v995; // ebx
  char *v996; // r9
  _QWORD *v997; // rdx
  char *v998; // rcx
  unsigned int v1002; // ecx
  __int64 v1004; // rcx
  int v1005; // edx
  _DWORD *v1006; // r9
  int v1007; // r8d
  signed __int64 v1008; // rsi
  signed __int64 v1009; // r10
  unsigned int v1010; // eax
  __int64 v1011; // r10
  _BYTE *v1012; // r8
  int v1013; // ebx
  unsigned int v1014; // esi
  unsigned int v1015; // r8d
  int v1016; // r8d
  __int64 v1017; // rdx
  __int64 v1018; // r13
  __int64 v1019; // r12
  unsigned int v1020; // r15d
  int v1021; // esi
  unsigned int v1022; // edi
  char *v1023; // r11
  int v1024; // eax
  __int64 v1025; // r10
  _QWORD *v1026; // rcx
  _QWORD *v1027; // rdx
  unsigned __int64 v1028; // r8
  int v1029; // ebx
  unsigned int v1032; // ecx
  int v1033; // r12d
  unsigned __int64 v1034; // rbx
  unsigned __int64 v1035; // r15
  unsigned __int64 v1036; // rdi
  unsigned __int64 v1037; // r11
  unsigned int v1038; // eax
  _QWORD *v1039; // r11
  unsigned __int64 v1040; // rdx
  unsigned int v1041; // eax
  unsigned int v1042; // r8d
  unsigned int v1043; // r15d
  int v1044; // eax
  unsigned int v1045; // eax
  unsigned __int64 v1046; // rcx
  unsigned __int64 v1047; // rdx
  unsigned int v1048; // ecx
  unsigned int v1051; // ebx
  int v1052; // edx
  int v1053; // r9d
  __int64 v1054; // rcx
  __int64 v1055; // r8
  _DWORD *v1056; // r10
  char *v1057; // rcx
  unsigned int v1058; // eax
  __int64 v1059; // r10
  _BYTE *v1060; // rcx
  char *v1061; // r9
  int v1062; // ebx
  int v1063; // ecx
  unsigned int v1064; // r13d
  unsigned int v1065; // edi
  _QWORD *v1066; // r14
  __int64 v1067; // rcx
  int v1068; // r12d
  unsigned int v1069; // r9d
  _DWORD *v1070; // r11
  int v1071; // r10d
  __int64 v1072; // rax
  unsigned int *v1073; // r8
  int v1074; // edx
  signed __int64 v1075; // r9
  unsigned int v1076; // eax
  __int64 v1077; // r9
  _BYTE *v1078; // rdx
  _QWORD *v1079; // rcx
  _QWORD *v1080; // rdx
  int v1081; // r9d
  unsigned int v1084; // ecx
  int v1087; // ecx
  __int64 v1088; // rax
  __int64 v1089; // rbx
  _DWORD *v1090; // rsi
  _QWORD *v1091; // rcx
  _QWORD *v1092; // rdx
  _QWORD *v1093; // r8
  int v1094; // r10d
  unsigned int v1097; // ecx
  signed int v1100; // r11d
  _QWORD *v1101; // r9
  _QWORD *v1102; // rdx
  _QWORD *v1103; // rcx
  unsigned int v1107; // ecx
  __int64 v1109; // rcx
  int v1110; // edx
  unsigned int *v1111; // r9
  int v1112; // r8d
  signed __int64 v1113; // rbx
  signed __int64 v1114; // rsi
  unsigned int v1115; // eax
  __int64 v1116; // r10
  _BYTE *v1117; // r8
  int v1118; // r11d
  unsigned int v1119; // r15d
  int v1120; // r12d
  unsigned __int64 v1121; // rbx
  unsigned __int64 v1122; // r11
  unsigned __int64 v1123; // rsi
  __int64 v1124; // r11
  unsigned int v1125; // eax
  unsigned __int64 v1126; // r13
  unsigned __int64 v1127; // rdx
  unsigned int v1128; // eax
  unsigned int v1129; // r8d
  unsigned int v1130; // r11d
  int v1131; // eax
  int v1132; // eax
  int v1133; // r11d
  unsigned __int64 v1134; // rcx
  unsigned __int64 v1135; // rdx
  unsigned int v1136; // ecx
  int v1137; // ebx
  __int64 v1138; // r9
  __int64 v1139; // r8
  unsigned int v1140; // r13d
  int v1141; // r12d
  unsigned int v1142; // r15d
  __int64 v1143; // rdi
  __int64 v1144; // r10
  __int64 v1145; // rsi
  _QWORD *v1146; // rdx
  unsigned __int64 v1147; // r8
  _QWORD *v1148; // rcx
  int v1149; // r11d
  unsigned int v1152; // ecx
  unsigned int v1155; // r11d
  int v1156; // edx
  signed __int64 v1157; // r10
  __int64 v1158; // rcx
  int v1159; // r8d
  _DWORD *v1160; // r9
  __int64 v1161; // rsi
  unsigned int v1162; // eax
  __int64 v1163; // r10
  _BYTE *v1164; // r8
  _BYTE *v1165; // r9
  int v1166; // r11d
  int v1167; // ecx
  unsigned __int128 v1168; // rax
  unsigned __int64 v1169; // r13
  _BYTE *v1170; // r8
  char *v1171; // r10
  _BYTE *v1172; // r14
  unsigned __int64 v1173; // r12
  unsigned __int128 v1174; // rax
  _QWORD *v1175; // rcx
  _WORD *v1176; // r14
  unsigned __int64 v1177; // rcx
  char v1178; // al
  unsigned __int64 v1179; // rcx
  unsigned __int64 v1180; // rdx
  _BYTE *v1181; // r14
  unsigned __int128 v1182; // rax
  unsigned __int128 v1183; // rax
  _BYTE *v1184; // r12
  char *v1185; // r13
  _BYTE *v1186; // r14
  unsigned __int64 v1187; // rdi
  unsigned __int64 v1188; // rsi
  unsigned __int128 v1189; // rax
  _QWORD *v1190; // rcx
  _WORD *v1191; // r14
  unsigned __int64 v1192; // rcx
  char v1193; // al
  unsigned __int64 v1194; // rcx
  unsigned __int64 v1195; // rdx
  _BYTE *v1196; // r14
  unsigned __int128 v1197; // rax
  unsigned __int128 v1198; // rax
  int v1199; // [rsp+28h] [rbp-E0h]
  unsigned int v1200; // [rsp+28h] [rbp-E0h]
  int v1201; // [rsp+28h] [rbp-E0h]
  unsigned int v1202; // [rsp+28h] [rbp-E0h]
  int v1203; // [rsp+28h] [rbp-E0h]
  unsigned int v1204; // [rsp+28h] [rbp-E0h]
  unsigned int v1205; // [rsp+28h] [rbp-E0h]
  int v1206; // [rsp+28h] [rbp-E0h]
  int v1207; // [rsp+28h] [rbp-E0h]
  int v1208; // [rsp+2Ch] [rbp-DCh]
  unsigned int v1209; // [rsp+2Ch] [rbp-DCh]
  signed int v1210; // [rsp+2Ch] [rbp-DCh]
  unsigned int v1211; // [rsp+2Ch] [rbp-DCh]
  int v1212; // [rsp+2Ch] [rbp-DCh]
  int v1213; // [rsp+2Ch] [rbp-DCh]
  unsigned int v1214; // [rsp+2Ch] [rbp-DCh]
  unsigned int v1215; // [rsp+2Ch] [rbp-DCh]
  int v1216; // [rsp+2Ch] [rbp-DCh]
  unsigned int v1217; // [rsp+30h] [rbp-D8h]
  unsigned int v1218; // [rsp+30h] [rbp-D8h]
  unsigned int v1219; // [rsp+30h] [rbp-D8h]
  int v1220; // [rsp+30h] [rbp-D8h]
  int v1221; // [rsp+30h] [rbp-D8h]
  unsigned int v1222; // [rsp+30h] [rbp-D8h]
  int v1223; // [rsp+30h] [rbp-D8h]
  int v1224; // [rsp+30h] [rbp-D8h]
  int v1225; // [rsp+30h] [rbp-D8h]
  int v1226; // [rsp+30h] [rbp-D8h]
  int v1227; // [rsp+34h] [rbp-D4h]
  unsigned int v1228; // [rsp+34h] [rbp-D4h]
  unsigned int v1229; // [rsp+34h] [rbp-D4h]
  unsigned int v1230; // [rsp+34h] [rbp-D4h]
  unsigned int v1231; // [rsp+34h] [rbp-D4h]
  unsigned int v1232; // [rsp+34h] [rbp-D4h]
  unsigned int v1233; // [rsp+34h] [rbp-D4h]
  unsigned int *v1234; // [rsp+38h] [rbp-D0h]
  unsigned int *v1235; // [rsp+38h] [rbp-D0h]
  unsigned int *v1236; // [rsp+38h] [rbp-D0h]
  int v1237; // [rsp+40h] [rbp-C8h]
  __int64 v1238; // [rsp+40h] [rbp-C8h]
  int v1239; // [rsp+40h] [rbp-C8h]
  int v1240; // [rsp+40h] [rbp-C8h]
  unsigned int v1241; // [rsp+40h] [rbp-C8h]
  int v1242; // [rsp+40h] [rbp-C8h]
  int v1243; // [rsp+40h] [rbp-C8h]
  int v1244; // [rsp+40h] [rbp-C8h]
  unsigned int v1245; // [rsp+40h] [rbp-C8h]
  int v1246; // [rsp+40h] [rbp-C8h]
  unsigned int v1247; // [rsp+44h] [rbp-C4h]
  unsigned int v1248; // [rsp+44h] [rbp-C4h]
  unsigned int v1249; // [rsp+44h] [rbp-C4h]
  unsigned int v1250; // [rsp+44h] [rbp-C4h]
  unsigned int v1251; // [rsp+44h] [rbp-C4h]
  unsigned int v1252; // [rsp+44h] [rbp-C4h]
  unsigned int v1253; // [rsp+44h] [rbp-C4h]
  unsigned __int64 v1254; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v1255; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v1256; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v1257; // [rsp+50h] [rbp-B8h]
  unsigned int *v1258; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v1259; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v1260; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v1261; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v1262; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v1263; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v1264; // [rsp+58h] [rbp-B0h]
  unsigned int *v1265; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v1266; // [rsp+60h] [rbp-A8h]
  char *v1267; // [rsp+60h] [rbp-A8h]
  int v1268; // [rsp+68h] [rbp-A0h]
  int v1269; // [rsp+68h] [rbp-A0h]
  unsigned int v1270; // [rsp+68h] [rbp-A0h]
  unsigned int v1271; // [rsp+68h] [rbp-A0h]
  unsigned int v1272; // [rsp+68h] [rbp-A0h]
  unsigned int v1273; // [rsp+68h] [rbp-A0h]
  unsigned int v1274; // [rsp+68h] [rbp-A0h]
  unsigned int v1275; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v1276; // [rsp+70h] [rbp-98h]
  _BYTE *v1277; // [rsp+70h] [rbp-98h]
  unsigned __int64 v1278; // [rsp+70h] [rbp-98h]
  unsigned __int64 v1279; // [rsp+78h] [rbp-90h]
  _BYTE *v1280; // [rsp+78h] [rbp-90h]
  _QWORD *v1281; // [rsp+78h] [rbp-90h]
  char *v1282; // [rsp+78h] [rbp-90h]
  unsigned __int64 v1283; // [rsp+80h] [rbp-88h]
  unsigned __int64 v1284; // [rsp+80h] [rbp-88h]
  unsigned __int64 v1285; // [rsp+80h] [rbp-88h]
  _QWORD *v1286; // [rsp+80h] [rbp-88h]
  unsigned __int64 v1287; // [rsp+80h] [rbp-88h]
  unsigned int v1288; // [rsp+88h] [rbp-80h]
  unsigned int v1289; // [rsp+88h] [rbp-80h]
  int v1290; // [rsp+88h] [rbp-80h]
  unsigned int v1291; // [rsp+88h] [rbp-80h]
  unsigned int v1292; // [rsp+88h] [rbp-80h]
  int v1293; // [rsp+88h] [rbp-80h]
  int v1294; // [rsp+88h] [rbp-80h]
  unsigned int v1295; // [rsp+88h] [rbp-80h]
  _QWORD *v1296; // [rsp+90h] [rbp-78h]
  __int64 v1297; // [rsp+90h] [rbp-78h]
  unsigned __int64 v1298; // [rsp+90h] [rbp-78h]
  unsigned __int64 v1299; // [rsp+90h] [rbp-78h]
  _QWORD *v1300; // [rsp+90h] [rbp-78h]
  char *v1301; // [rsp+90h] [rbp-78h]
  __int64 v1302; // [rsp+90h] [rbp-78h]
  unsigned __int64 v1303; // [rsp+98h] [rbp-70h]
  unsigned __int64 v1304; // [rsp+98h] [rbp-70h]
  char *v1305; // [rsp+98h] [rbp-70h]
  __int64 v1306; // [rsp+98h] [rbp-70h]
  unsigned int v1307; // [rsp+A8h] [rbp-60h]
  unsigned int v1308; // [rsp+A8h] [rbp-60h]
  unsigned int v1309; // [rsp+A8h] [rbp-60h]
  unsigned int v1310; // [rsp+A8h] [rbp-60h]
  unsigned int v1311; // [rsp+A8h] [rbp-60h]
  unsigned int v1312; // [rsp+A8h] [rbp-60h]
  unsigned int v1313; // [rsp+A8h] [rbp-60h]
  unsigned int v1314; // [rsp+A8h] [rbp-60h]
  int v1315; // [rsp+ACh] [rbp-5Ch]
  unsigned __int64 v1316; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v1317; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v1318; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v1319; // [rsp+B0h] [rbp-58h]
  __int64 v1320; // [rsp+B0h] [rbp-58h]
  _BYTE *v1321; // [rsp+B8h] [rbp-50h]
  _BYTE *v1322; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v1323; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v1324; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v1325; // [rsp+C0h] [rbp-48h]
  char *v1326; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v1327; // [rsp+C0h] [rbp-48h]
  _QWORD *v1328; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v1329; // [rsp+C0h] [rbp-48h]
  char *v1330; // [rsp+C0h] [rbp-48h]
  __int64 v1331; // [rsp+C0h] [rbp-48h]
  int v1332; // [rsp+C4h] [rbp-44h]
  unsigned __int64 v1333; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v1334; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v1335; // [rsp+C8h] [rbp-40h]
  __int64 v1336; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v1337; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v1338; // [rsp+D0h] [rbp-38h]
  _QWORD *v1339; // [rsp+D0h] [rbp-38h]
  _QWORD *v1340; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v1341; // [rsp+D0h] [rbp-38h]
  unsigned int *v1342; // [rsp+D0h] [rbp-38h]
  int v1343; // [rsp+D4h] [rbp-34h]
  unsigned __int64 v1344; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v1345; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v1346; // [rsp+D8h] [rbp-30h]
  _QWORD *v1347; // [rsp+D8h] [rbp-30h]
  char *v1348; // [rsp+E0h] [rbp-28h]
  __int64 v1349; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v1350; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v1351; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1352; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1353; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1354; // [rsp+F0h] [rbp-18h]
  __int64 v1355; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1356; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1357; // [rsp+F0h] [rbp-18h]
  char *v1358; // [rsp+F8h] [rbp-10h]
  __int64 v1359; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v1360; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v1361; // [rsp+100h] [rbp-8h]
  unsigned __int64 v1362; // [rsp+100h] [rbp-8h]
  unsigned __int64 v1363; // [rsp+100h] [rbp-8h]
  char *v1364; // [rsp+100h] [rbp-8h]
  __int64 v1365; // [rsp+108h] [rbp+0h]
  char *v1366; // [rsp+108h] [rbp+0h]
  __int64 v1367; // [rsp+108h] [rbp+0h]
  __int64 v1368; // [rsp+108h] [rbp+0h]
  __int64 v1369; // [rsp+110h] [rbp+8h]
  unsigned __int64 v1370; // [rsp+110h] [rbp+8h]
  char *v1371; // [rsp+118h] [rbp+10h]
  unsigned __int64 v1372; // [rsp+128h] [rbp+20h]
  unsigned __int64 v1373; // [rsp+128h] [rbp+20h]
  unsigned __int64 v1374; // [rsp+130h] [rbp+28h]
  unsigned __int64 v1375; // [rsp+130h] [rbp+28h]
  unsigned __int64 v1376; // [rsp+130h] [rbp+28h]
  unsigned __int64 v1377; // [rsp+138h] [rbp+30h]
  int v1378; // [rsp+140h] [rbp+38h] BYREF
  int v1379; // [rsp+148h] [rbp+40h] BYREF
  unsigned int v1380; // [rsp+150h] [rbp+48h] BYREF
  int v1381; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v1382; // [rsp+160h] [rbp+58h] BYREF
  int v1383; // [rsp+168h] [rbp+60h] BYREF
  __int64 v1384; // [rsp+170h] [rbp+68h]
  int v1385; // [rsp+178h] [rbp+70h]
  int v1387; // [rsp+1E0h] [rbp+D8h]
  unsigned int v1390; // [rsp+200h] [rbp+F8h]
  int v1391; // [rsp+200h] [rbp+F8h]
  int v1392; // [rsp+200h] [rbp+F8h]
  int v1393; // [rsp+200h] [rbp+F8h]
  unsigned int v1394; // [rsp+200h] [rbp+F8h]
  int v1395; // [rsp+200h] [rbp+F8h]
  int v1396; // [rsp+200h] [rbp+F8h]
  int v1397; // [rsp+200h] [rbp+F8h]
  int v1398; // [rsp+200h] [rbp+F8h]

  v1387 = (int)a2;
  v8 = a3;
  v10 = *(_QWORD *)(a1 + 0x40000);
  v11 = a1;
  v12 = v10 + (unsigned int)(*(_DWORD *)(a1 + 262168) - *(_DWORD *)(a1 + 262172)) - *(_QWORD *)(a1 + 262152);
  if ( v12 >= 0x10000 )
  {
    v13 = 0;
    *(_QWORD *)(a1 + 262184) = 0LL;
    if ( a7 == 2 && a5 < 1 || *a4 > 0x7E000000 )
      return v13;
    v14 = a2;
    v15 = (int)a3;
    v16 = a2;
    *(_QWORD *)(a1 + 0x40000) = v10 + (int)*a4;
    v17 = (int)*a4;
    v18 = (char *)a2 + v17;
    v19 = (unsigned __int64)a2 + v17 - 12;
    *a4 = 0;
    v20 = (unsigned __int64)&a3[a5 - 5];
    if ( a7 != 2 )
      v20 = (unsigned __int64)&a3[a5];
    v1234 = a2;
    v1276 = v20;
    v21 = a3;
    v1265 = v14;
    v1358 = v18;
    v1316 = v19;
    v1254 = (unsigned __int64)(v18 - 5);
    v1321 = a3;
    v1257 = 0LL;
    v1303 = 0LL;
    if ( (int)v17 < 13 )
      goto LABEL_7;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v16 > v19 )
          goto LABEL_355;
        v36 = 3;
        v1208 = 3;
        v37 = *(unsigned int *)(a1 + 262172);
        v38 = *(_QWORD **)(a1 + 262152);
        v39 = v37;
        v40 = *(unsigned int *)(a1 + 262168);
        v41 = v40 + (_DWORD)v16 - (_DWORD)v38;
        v1296 = v38;
        v1390 = v41;
        v1307 = *(_DWORD *)(a1 + 262172);
        v1284 = *(_QWORD *)(a1 + 262160);
        if ( (int)v37 + 0x10000 <= v41 )
          v39 = v41 - 0xFFFF;
        v1268 = 256;
        v1217 = v39;
        v1199 = 0;
        v1344 = *(_QWORD *)(a1 + 262160) + (unsigned int)v40 - v37;
        v42 = 0;
        v43 = 0;
        v1361 = 0LL;
        v1247 = 0;
        v44 = *v1234;
        v1288 = *v1234;
        v45 = *(_DWORD *)(a1 + 262176);
        if ( v45 < v41 )
        {
          v46 = v45;
          do
          {
            v47 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v38 + v46 - v40)) >> 17;
            v48 = v45 - *(_DWORD *)(a1 + 4 * v47);
            if ( v48 > 0xFFFF )
              LOWORD(v48) = -1;
            ++v46;
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v45 + 0x20000) = v48;
            *(_DWORD *)(a1 + 4 * v47) = v45++;
          }
          while ( v45 < v41 );
          v44 = v1288;
          v42 = 0;
          v36 = 3;
          LODWORD(v37) = v1307;
        }
        v49 = (unsigned __int64)v1234;
        *(_DWORD *)(a1 + 262176) = v41;
        v50 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v1234) >> 17));
        if ( v50 >= v39 )
        {
          while ( 1 )
          {
            v51 = v42;
            if ( v1268 <= 0 )
            {
LABEL_80:
              v21 = v1321;
              v43 = v1247;
              break;
            }
            --v1268;
            if ( v50 < (unsigned int)v40 )
            {
              v62 = v1284;
              v63 = (_DWORD *)(v1284 + v50 - (unsigned int)v37);
              if ( v50 > (int)v40 - 4 || *v63 != v44 )
                goto LABEL_55;
              v148 = (_QWORD *)(v49 + 4);
              v149 = v49 + 4;
              v150 = v49 + 4;
              v151 = (_QWORD *)(v49 + (unsigned int)v40 - v50);
              v152 = v49 + 4;
              v153 = v49 + 4;
              if ( (unsigned __int64)v151 > v1254 )
                v151 = (_QWORD *)v1254;
              v154 = v63 + 1;
              if ( v148 >= (_QWORD *)((char *)v151 - 7) )
              {
LABEL_180:
                while ( v150 < (unsigned __int64)v151 - 7 )
                {
                  if ( *v148 != *v154 )
                  {
                    __asm { tzcnt   rax, rax }
                    v158 = ((unsigned int)_RAX >> 3) - v149 + (_DWORD)v148;
                    goto LABEL_183;
                  }
                  v148 = (_QWORD *)(v152 + 8);
                  ++v154;
                  v150 = (unsigned __int64)v148;
                  v152 += 8LL;
                  v153 = (unsigned __int64)v148;
                }
                if ( v153 < (unsigned __int64)v151 - 3 && *(_DWORD *)v154 == *(_DWORD *)v148 )
                {
                  v148 = (_QWORD *)((char *)v148 + 4);
                  v154 = (_QWORD *)((char *)v154 + 4);
                }
                if ( v148 < (_QWORD *)((char *)v151 - 1) && *(_WORD *)v154 == *(_WORD *)v148 )
                {
                  v148 = (_QWORD *)((char *)v148 + 2);
                  v154 = (_QWORD *)((char *)v154 + 2);
                }
                if ( v148 < v151 && *(_BYTE *)v154 == *(_BYTE *)v148 )
                  LODWORD(v148) = (_DWORD)v148 + 1;
                v158 = (_DWORD)v148 - v149;
              }
              else
              {
                if ( *v148 == *v154 )
                {
                  v150 = (unsigned __int64)(v148 + 1);
                  ++v154;
                  v148 = (_QWORD *)v150;
                  v152 = v150;
                  v153 = v150;
                  goto LABEL_180;
                }
                __asm { tzcnt   rcx, rax }
                v158 = (unsigned int)_RCX >> 3;
              }
LABEL_183:
              v159 = v158 + 4;
              v160 = (_QWORD *)((char *)v1234 + (int)(v158 + 4));
              if ( v160 == v151 && (unsigned __int64)v151 < v1254 )
              {
                v161 = v38;
                v162 = (_QWORD *)((char *)v1234 + v159);
                v163 = (unsigned __int64)v162;
                v164 = v162;
                v165 = (unsigned __int64)v162;
                if ( (unsigned __int64)v160 >= v1254 - 7 )
                {
                  while ( v163 < v1254 - 7 )
                  {
                    if ( *v162 != *v161 )
                    {
                      __asm { tzcnt   rax, rax }
                      v168 = ((unsigned int)_RAX >> 3) - (_DWORD)v160 + (_DWORD)v162;
                      goto LABEL_193;
                    }
                    v162 = v164 + 1;
                    ++v161;
LABEL_189:
                    v163 = (unsigned __int64)v162;
                    v164 = v162;
                    v165 = (unsigned __int64)v162;
                  }
                  if ( v165 < v1254 - 3 && *(_DWORD *)v161 == *(_DWORD *)v162 )
                  {
                    v162 = (_QWORD *)((char *)v162 + 4);
                    v161 = (_QWORD *)((char *)v161 + 4);
                  }
                  if ( (unsigned __int64)v162 < v1254 - 1 && *(_WORD *)v161 == *(_WORD *)v162 )
                  {
                    v162 = (_QWORD *)((char *)v162 + 2);
                    v161 = (_QWORD *)((char *)v161 + 2);
                  }
                  if ( (unsigned __int64)v162 < v1254 && *(_BYTE *)v161 == *(_BYTE *)v162 )
                    LODWORD(v162) = (_DWORD)v162 + 1;
                  v168 = (_DWORD)v162 - (_DWORD)v160;
                }
                else
                {
                  if ( *v160 == *v38 )
                  {
                    v162 = v160 + 1;
                    v161 = v38 + 1;
                    goto LABEL_189;
                  }
                  __asm { tzcnt   rcx, rax }
                  v168 = (unsigned int)_RCX >> 3;
                }
LABEL_193:
                v159 += v168;
              }
              v42 = v1199;
              v62 = v1284;
              if ( v159 <= v1208 )
              {
LABEL_55:
                v52 = v1234;
LABEL_56:
                v64 = v1390;
                goto LABEL_57;
              }
              v64 = v1390;
              v1208 = v159;
              v52 = v1234;
              v1247 = v1390 - v50;
            }
            else
            {
              v52 = v1234;
              v53 = v50 - (unsigned int)v40;
              if ( *(_WORD *)((char *)v1234 + v36 - 1) != *(_WORD *)((char *)v38 + v36 + v53 - 1)
                || *(_DWORD *)((char *)v38 + v53) != v44 )
              {
                v62 = v1284;
                goto LABEL_56;
              }
              v54 = v1234 + 1;
              v55 = (_DWORD)v1234 + 4;
              v56 = (_QWORD *)((char *)v38 + v53 + 4);
              v57 = (unsigned __int64)(v1234 + 1);
              v58 = v1234 + 1;
              v59 = (unsigned __int64)(v1234 + 1);
              if ( (unsigned __int64)(v1234 + 1) >= v1254 - 7 )
                goto LABEL_43;
              if ( *v56 != *v54 )
              {
                __asm { tzcnt   rcx, rax }
                v61 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v57 = (unsigned __int64)(v1234 + 3);
                ++v56;
                v54 = v1234 + 3;
                v58 = v1234 + 3;
                v59 = (unsigned __int64)(v1234 + 3);
LABEL_43:
                while ( v57 < v1254 - 7 )
                {
                  if ( *v56 != *v54 )
                  {
                    __asm { tzcnt   rax, rax }
                    v61 = ((unsigned int)_RAX >> 3) - v55 + (_DWORD)v54;
                    goto LABEL_198;
                  }
                  v54 = v58 + 2;
                  ++v56;
                  v57 = (unsigned __int64)v54;
                  v58 += 2;
                  v59 = (unsigned __int64)v54;
                }
                if ( v59 < v1254 - 3 && *(_DWORD *)v56 == *(_DWORD *)v54 )
                {
                  v54 = (_QWORD *)((char *)v54 + 4);
                  v56 = (_QWORD *)((char *)v56 + 4);
                }
                if ( (unsigned __int64)v54 < v1254 - 1 && *(_WORD *)v56 == *(_WORD *)v54 )
                {
                  v54 = (_QWORD *)((char *)v54 + 2);
                  v56 = (_QWORD *)((char *)v56 + 2);
                }
                if ( (unsigned __int64)v54 < v1254 && *(_BYTE *)v56 == *(_BYTE *)v54 )
                  LODWORD(v54) = (_DWORD)v54 + 1;
                v61 = (_DWORD)v54 - v55;
              }
LABEL_198:
              v64 = v1390;
              v173 = v61 + 4;
              v42 = v1199;
              v174 = v173 <= v36;
              v62 = v1284;
              v52 = v1234;
              if ( !v174 )
              {
                v1208 = v173;
                v1247 = v1390 - v50;
                goto LABEL_56;
              }
            }
LABEL_57:
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v50 + 0x20000) != 1 )
              goto LABEL_61;
            v65 = v50 - 1;
            if ( v42 )
            {
              v1199 = v51;
              if ( v51 != 2 )
                goto LABEL_61;
            }
            else
            {
              if ( (_BYTE)v44 != HIBYTE(v44) || (unsigned __int16)v44 != HIWORD(v44) )
              {
                v1199 = 1;
LABEL_61:
                v66 = v1217;
LABEL_62:
                v50 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v50 + 0x20000);
                goto LABEL_79;
              }
              v1199 = 2;
              v1361 = (unsigned int)LZ4HC_countPattern(v52 + 1, v1254, v44) + 4LL;
            }
            v66 = v1217;
            if ( v65 < v1217 || (unsigned int)v40 - v65 - 1 < 3 )
              goto LABEL_62;
            if ( v65 < (unsigned int)v40 )
            {
              v67 = 1;
              v68 = v62 + v65 - v1307;
            }
            else
            {
              v67 = 0;
              v68 = (unsigned __int64)v1296 + v65 - (unsigned int)v40;
            }
            if ( *(_DWORD *)v68 != v44 )
              goto LABEL_62;
            v69 = v1254;
            if ( v67 )
              v69 = v1344;
            v70 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v68 + 4), v69, v44) + 4LL;
            if ( v67 )
            {
              if ( v70 + v68 == v71 )
              {
                v792 = v44;
                v793 = 8 * (v70 & 3);
                if ( v793 )
                  v792 = __ROL4__(v44, v793);
                v70 += (unsigned int)LZ4HC_countPattern(v1296, v1254, v792);
              }
              v72 = v1284;
            }
            else
            {
              v72 = (unsigned __int64)v1296;
            }
            v73 = LZ4HC_reverseCountPattern(v68, v72, v44);
            v74 = v1296;
            v75 = v73;
            if ( !v67 && (_QWORD *)(v68 - v73) == v1296 && v1307 < (unsigned int)v40 )
            {
              v98 = v44;
              v99 = 8LL * (-v73 & 3);
              if ( v99 )
                v98 = __ROL4__(v44, v99);
              v100 = LZ4HC_reverseCountPattern(v1344, v1284, v98);
              v75 = v100 + v101;
              v74 = v1296;
            }
            v66 = v1217;
            v76 = v65 - v75;
            v77 = v1217;
            if ( v76 > v1217 )
              v77 = v76;
            v78 = v70 + v65 - v77;
            if ( v78 < v1361 || v70 > v1361 )
            {
              if ( (unsigned int)v40 - v77 - 1 >= 3 )
              {
                v36 = v1208;
                v95 = v1361;
                if ( v78 < v1361 )
                  v95 = v78;
                if ( v1208 >= v95 )
                {
                  v49 = (unsigned __int64)v1234;
                }
                else
                {
                  v96 = v40 - v77 - (_QWORD)v74;
                  v49 = (unsigned __int64)v1234;
                  if ( (unsigned __int64)v1234 + v96 > 0xFFFF )
                    goto LABEL_80;
                  v1208 = v95;
                  v36 = v95;
                  v1247 = v64 - v77;
                }
                v97 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v77 + 0x20000);
                if ( v97 > v77 )
                  goto LABEL_80;
                v50 = v77 - v97;
              }
              else
              {
                v50 = v40;
              }
            }
            else
            {
              v50 = v40;
              if ( (unsigned int)v40 - (v65 - (_DWORD)v1361 + (_DWORD)v70) - 1 >= 3 )
                v50 = v65 - v1361 + v70;
            }
LABEL_79:
            v38 = v1296;
            v79 = v50 < v66;
            v42 = v1199;
            v36 = v1208;
            LODWORD(v37) = v1307;
            v49 = (unsigned __int64)v1234;
            if ( v79 )
              goto LABEL_80;
          }
        }
        v80 = __PAIR64__(v36, v43);
        v1345 = __PAIR64__(v36, v43);
        v1279 = __PAIR64__(v36, v43);
        if ( v36 >= 4 )
          break;
        v14 = v1265;
        v20 = v1276;
        v16 = (unsigned int *)(v49 + 1);
        v19 = v1316;
        v1234 = v16;
      }
      v81 = v1316;
      v82 = (unsigned int *)v49;
      v1351 = v49;
      v1332 = v36;
      while ( 2 )
      {
        v83 = 0;
LABEL_84:
        v84 = HIDWORD(v1279);
        v1391 = HIDWORD(v1279);
        v85 = SHIDWORD(v1279);
        v86 = SHIDWORD(v1279) + v49;
        if ( v86 > v81 )
        {
          v1261 = 0LL;
          v87 = 0;
          v88 = 0LL;
          goto LABEL_86;
        }
        v199 = v86 - 2;
        v1257 = v86 - 2;
        v1285 = v86 - 2;
        v1227 = HIDWORD(v1279);
        v200 = *(unsigned int *)(a1 + 262172);
        v201 = v200;
        v202 = *(_QWORD **)(a1 + 262152);
        v1289 = *(_DWORD *)(a1 + 262168);
        v203 = v86 - 2 + v1289 - (_DWORD)v202;
        v1200 = *(_DWORD *)(a1 + 262172);
        v1339 = v202;
        v204 = 0;
        v1248 = v203;
        if ( (int)v200 + 0x10000 <= v203 )
          v201 = v203 - 0xFFFF;
        v1333 = *(_QWORD *)(a1 + 262160);
        v205 = v1333 + v1289 - v200;
        v1218 = v201;
        v206 = v199 - (_DWORD)v1234;
        v1262 = v205;
        v207 = a1;
        v1269 = 256;
        v1209 = *(_DWORD *)v199;
        v208 = *(_DWORD *)(a1 + 262176);
        v1237 = 0;
        v1362 = 0LL;
        v1308 = 0;
        if ( v208 < v203 )
        {
          v209 = v208;
          do
          {
            v210 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v202 + v209 - v1289)) >> 17;
            v211 = v208 - *(_DWORD *)(a1 + 4 * v210);
            if ( v211 > 0xFFFF )
              LOWORD(v211) = -1;
            ++v209;
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v208 + 0x20000) = v211;
            *(_DWORD *)(a1 + 4 * v210) = v208++;
          }
          while ( v208 < v203 );
          v85 = SHIDWORD(v1279);
          v204 = 0;
          v80 = v1345;
          v84 = HIDWORD(v1279);
          v199 = v86 - 2;
          v207 = a1;
        }
        *(_DWORD *)(v207 + 262176) = v203;
        v212 = *(_DWORD *)(v207 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v199) >> 17));
        v213 = v206;
        v1297 = v206;
        if ( v212 < v1218 )
        {
          v355 = HIDWORD(v1279);
          goto LABEL_488;
        }
        v214 = v1234;
        v215 = v1289;
        v216 = v1209;
        v217 = (char *)v1234 + v85;
        v1366 = (char *)v1234 + v85;
        while ( 1 )
        {
          v265 = 0;
          if ( v1269 <= 0 )
            break;
          --v1269;
          if ( v212 < v215 )
          {
            v284 = v1200;
            v285 = v212 - v1200;
            v286 = (_DWORD *)(v285 + v1333);
            if ( v212 > v215 - 4 || *v286 != v216 )
              goto LABEL_464;
            v287 = (_QWORD *)(v199 + 4);
            v288 = v286 + 1;
            v289 = (_QWORD *)(v199 + v215 - v212);
            v290 = (unsigned __int64)v287;
            v291 = v199 + 4;
            v292 = v287;
            v293 = (unsigned __int64)v287;
            if ( (unsigned __int64)v289 > v1254 )
              v289 = (_QWORD *)v1254;
            if ( v287 >= (_QWORD *)((char *)v289 - 7) )
            {
LABEL_385:
              while ( v290 < (unsigned __int64)v289 - 7 )
              {
                if ( *v288 != *v287 )
                {
                  __asm { tzcnt   rax, rax }
                  v297 = ((unsigned int)_RAX >> 3) - v291 + (_DWORD)v287;
                  goto LABEL_566;
                }
                v287 = v292 + 1;
                ++v288;
                v290 = (unsigned __int64)v287;
                ++v292;
                v293 = (unsigned __int64)v287;
              }
              if ( v293 < (unsigned __int64)v289 - 3 && *(_DWORD *)v288 == *(_DWORD *)v287 )
              {
                v287 = (_QWORD *)((char *)v287 + 4);
                v288 = (_QWORD *)((char *)v288 + 4);
              }
              if ( v287 < (_QWORD *)((char *)v289 - 1) && *(_WORD *)v288 == *(_WORD *)v287 )
              {
                v287 = (_QWORD *)((char *)v287 + 2);
                v288 = (_QWORD *)((char *)v288 + 2);
              }
              if ( v287 < v289 && *(_BYTE *)v288 == *(_BYTE *)v287 )
                LODWORD(v287) = (_DWORD)v287 + 1;
              v297 = (_DWORD)v287 - v291;
            }
            else
            {
              if ( *v288 == *v287 )
              {
                v290 = (unsigned __int64)(v287 + 1);
                v288 = v286 + 3;
                v287 = (_QWORD *)v290;
                v292 = (_QWORD *)v290;
                v293 = v290;
                goto LABEL_385;
              }
              __asm { tzcnt   rcx, rax }
              v297 = (unsigned int)_RCX >> 3;
            }
LABEL_566:
            v392 = v1285;
            v393 = v297 + 4;
            v394 = (_QWORD *)(v1285 + (int)(v297 + 4));
            if ( v394 == v289 && (unsigned __int64)v289 < v1254 )
            {
              v395 = v1339;
              v396 = (_QWORD *)(v1285 + v393);
              v397 = (unsigned __int64)v396;
              v398 = v396;
              v399 = (unsigned __int64)v396;
              if ( (unsigned __int64)v394 >= v1254 - 7 )
              {
                while ( v397 < v1254 - 7 )
                {
                  if ( *v395 != *v396 )
                  {
                    __asm { tzcnt   rax, rax }
                    v402 = ((unsigned int)_RAX >> 3) - (_DWORD)v394 + (_DWORD)v396;
                    goto LABEL_586;
                  }
                  v396 = v398 + 1;
LABEL_571:
                  ++v395;
                  v397 = (unsigned __int64)v396;
                  v398 = v396;
                  v399 = (unsigned __int64)v396;
                }
                if ( v399 < v1254 - 3 && *(_DWORD *)v395 == *(_DWORD *)v396 )
                {
                  v396 = (_QWORD *)((char *)v396 + 4);
                  v395 = (_QWORD *)((char *)v395 + 4);
                }
                if ( (unsigned __int64)v396 < v1254 - 1 && *(_WORD *)v395 == *(_WORD *)v396 )
                {
                  v396 = (_QWORD *)((char *)v396 + 2);
                  v395 = (_QWORD *)((char *)v395 + 2);
                }
                if ( (unsigned __int64)v396 < v1254 && *(_BYTE *)v395 == *(_BYTE *)v396 )
                  LODWORD(v396) = (_DWORD)v396 + 1;
                v402 = (_DWORD)v396 - (_DWORD)v394;
              }
              else
              {
                if ( *v1339 == *v394 )
                {
                  v396 = v394 + 1;
                  goto LABEL_571;
                }
                __asm { tzcnt   rcx, rax }
                v402 = (unsigned int)_RCX >> 3;
              }
LABEL_586:
              v392 = v1285;
              v393 += v402;
            }
            v404 = 0;
            if ( v1297 )
            {
              v405 = -v285;
              v406 = (_DWORD)v1234 - v392;
              v407 = 0LL;
              v408 = v286 - 1;
              if ( (__int64)((__int64)v1234 - v392) <= v405 )
                v406 = v405;
              v409 = v392 - (_QWORD)v286;
              while ( v404 - v406 > 3 )
              {
                if ( *v408 != *(_DWORD *)((char *)v408 + v409) )
                {
                  _BitScanReverse(&v410, *v408 ^ *(_DWORD *)((char *)v408 + v409));
                  v404 -= (31 - v410) >> 3;
                  goto LABEL_594;
                }
                v404 -= 4;
                v407 -= 4LL;
                --v408;
              }
              v596 = v406;
              if ( v407 > v406 )
              {
                v597 = &v1366[v407 - 3];
                do
                {
                  if ( *v597 != *(_BYTE *)(v1333 + v212 - v1200 + v407 - 1) )
                    break;
                  --v404;
                  --v407;
                  --v597;
                }
                while ( v407 > v596 );
                v215 = v1289;
              }
            }
LABEL_594:
            v284 = v1200;
            v411 = v393 - v404;
            v273 = v1254;
            if ( v411 <= v1227 )
            {
              v199 = v1285;
            }
            else
            {
              v1227 = v411;
              v199 = v1285;
              v1308 = v1248 - v212;
              v1257 = v1285 + v404;
            }
          }
          else
          {
            v266 = (_DWORD *)((char *)v202 + v212 - v215);
            if ( *(_WORD *)((char *)v214 + v84 - 1) != *(_WORD *)((char *)v266 + v84 - v213 - 1) || *v266 != v216 )
            {
              v284 = v1200;
              goto LABEL_464;
            }
            if ( v213 )
            {
              v267 = 0LL;
              v268 = (__int64)v214 - v199;
              v269 = v266 - 1;
              v270 = -(__int64)(v212 - v215);
              if ( v268 <= v270 )
                LODWORD(v268) = v270;
              v271 = v199 - (_QWORD)v266;
              while ( v265 - (int)v268 > 3 )
              {
                if ( *v269 != *(_DWORD *)((char *)v269 + v271) )
                {
                  _BitScanReverse(&v272, *v269 ^ *(_DWORD *)((char *)v269 + v271));
                  v265 -= (31 - v272) >> 3;
                  goto LABEL_372;
                }
                v265 -= 4;
                v267 -= 4LL;
                --v269;
              }
              v592 = (int)v268;
              if ( v267 > (int)v268 )
              {
                v593 = &v217[v267 - 3];
                do
                {
                  if ( *v593 != *((_BYTE *)v202 + v212 - v215 + v267 - 1) )
                    break;
                  --v265;
                  --v267;
                  --v593;
                }
                while ( v267 > v592 );
                v216 = v1209;
              }
            }
LABEL_372:
            v273 = v1254;
            v274 = (_QWORD *)(v199 + 4);
            v275 = v266 + 1;
            v276 = v199 + 4;
            v277 = (unsigned __int64)v274;
            v278 = v274;
            v279 = (unsigned __int64)v274;
            if ( (unsigned __int64)v274 >= v1254 - 7 )
              goto LABEL_375;
            if ( *v275 != *v274 )
            {
              __asm { tzcnt   rcx, rax }
              v283 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v277 = (unsigned __int64)(v274 + 1);
              v275 = v266 + 3;
              v274 = (_QWORD *)v277;
              v278 = (_QWORD *)v277;
              v279 = v277;
LABEL_375:
              while ( v277 < v1254 - 7 )
              {
                if ( *v275 != *v274 )
                {
                  __asm { tzcnt   rax, rax }
                  v283 = ((unsigned int)_RAX >> 3) - v276 + (_DWORD)v274;
                  goto LABEL_462;
                }
                v274 = v278 + 1;
                ++v275;
                v277 = (unsigned __int64)v274;
                ++v278;
                v279 = (unsigned __int64)v274;
              }
              if ( v279 < v1254 - 3 && *(_DWORD *)v275 == *(_DWORD *)v274 )
              {
                v274 = (_QWORD *)((char *)v274 + 4);
                v275 = (_QWORD *)((char *)v275 + 4);
              }
              if ( (unsigned __int64)v274 < v1254 - 1 && *(_WORD *)v275 == *(_WORD *)v274 )
              {
                v274 = (_QWORD *)((char *)v274 + 2);
                v275 = (_QWORD *)((char *)v275 + 2);
              }
              if ( (unsigned __int64)v274 < v1254 && *(_BYTE *)v275 == *(_BYTE *)v274 )
                LODWORD(v274) = (_DWORD)v274 + 1;
              v283 = (_DWORD)v274 - v276;
            }
LABEL_462:
            v199 = v1285;
            v284 = v1200;
            v342 = v283 - v265 + 4;
            if ( v342 > v1227 )
            {
              v1308 = v1248 - v212;
              v1257 = v1285 + v265;
              v1227 = v342;
LABEL_464:
              v273 = v1254;
            }
          }
          if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v212 + 0x20000) != 1 )
            goto LABEL_490;
          v343 = v212 - 1;
          if ( v1237 )
          {
            v1237 = v204;
            if ( v204 != 2 )
              goto LABEL_490;
          }
          else
          {
            if ( (_BYTE)v216 != HIBYTE(v216) || (unsigned __int16)v216 != HIWORD(v216) )
            {
              v1237 = 1;
LABEL_490:
              v344 = v1218;
LABEL_491:
              v212 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v212 + 0x20000);
LABEL_485:
              v355 = v1227;
              goto LABEL_486;
            }
            v1237 = 2;
            v1362 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v199 + 4), v273, v216) + 4LL;
          }
          v344 = v1218;
          if ( v343 < v1218 || v215 - v212 < 3 )
            goto LABEL_491;
          if ( v343 < v215 )
          {
            v345 = 1;
            v346 = v1333 + v343 - v284;
          }
          else
          {
            v345 = 0;
            v346 = (unsigned __int64)v1339 + v343 - v215;
          }
          if ( *(_DWORD *)v346 != v216 )
            goto LABEL_491;
          v347 = v1254;
          if ( v345 )
            v347 = v1262;
          v348 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v346 + 4), v347, v216) + 4LL;
          if ( v345 )
          {
            if ( v348 + v346 == v347 )
            {
              v794 = v216;
              v795 = 8 * (v348 & 3);
              if ( v795 )
                v794 = __ROL4__(v216, v795);
              v348 += (unsigned int)LZ4HC_countPattern(v1339, v1254, v794);
            }
            v349 = v1333;
          }
          else
          {
            v349 = (unsigned __int64)v1339;
          }
          v350 = LZ4HC_reverseCountPattern(v346, v349, v216);
          v351 = v350;
          if ( !v345 && (_QWORD *)(v346 - v350) == v1339 && v1200 < v215 )
          {
            v357 = v216;
            v358 = 8LL * (-v350 & 3);
            if ( v358 )
              v357 = __ROL4__(v216, v358);
            v351 = LZ4HC_reverseCountPattern(v1262, v1333, v357) + v350;
          }
          v344 = v1218;
          v352 = v1362;
          v353 = v343 - v351;
          v212 = v1218;
          if ( v353 > v1218 )
            v212 = v353;
          v354 = v348 + v343 - v212;
          if ( v354 >= v1362 && v348 <= v1362 )
          {
            v212 = v215;
            if ( v215 - (v343 - (_DWORD)v1362 + (_DWORD)v348) - 1 >= 3 )
              v212 = v343 - v1362 + v348;
            goto LABEL_485;
          }
          if ( v215 - v212 - 1 < 3 )
          {
            v212 = v215;
            goto LABEL_485;
          }
          if ( v1297 )
            goto LABEL_485;
          v355 = v1227;
          if ( v354 < v1362 )
            v352 = v348 + v343 - v212;
          if ( v1227 < v352 )
          {
            if ( v1285 + v215 - (unsigned __int64)v212 - (_QWORD)v1339 > 0xFFFF )
              goto LABEL_487;
            v355 = v352;
            v1227 = v352;
            v1308 = v1248 - v212;
            v1257 = v1285;
          }
          v356 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v212 + 0x20000);
          if ( v356 > v212 )
            goto LABEL_487;
          v212 -= v356;
LABEL_486:
          v199 = v1285;
          v202 = v1339;
          v213 = v1297;
          v204 = v1237;
          v217 = v1366;
          if ( v212 < v344 )
            goto LABEL_487;
          v84 = v1227;
          v214 = v1234;
        }
        v355 = v1227;
LABEL_487:
        v80 = v1345;
        v21 = v1321;
        v83 = v1308;
LABEL_488:
        v82 = (unsigned int *)v1351;
        v84 = HIDWORD(v1279);
        v81 = v1316;
        HIDWORD(v1374) = v355;
        v49 = (unsigned __int64)v1234;
        LODWORD(v1374) = v83;
        v88 = v1374;
        v1261 = v1374;
        v87 = HIDWORD(v1374);
LABEL_86:
        v1338 = v88;
        if ( v87 <= v84 )
        {
          v14 = v1265;
          v102 = v21;
          v136 = v21;
          v137 = v21;
          v138 = v21 + 1;
          v139 = v49 - (_QWORD)v1265;
          if ( a7 )
          {
            v20 = v1276;
            if ( (unsigned __int64)&v138[v139 / 0xFF + 8 + v139] > v1276 )
              goto LABEL_336;
          }
          if ( v139 < 0xF )
          {
            *v136 = 16 * v139;
          }
          else
          {
            v140 = v139 - 15;
            *v136 = -16;
            if ( v139 - 15 >= 0xFF )
            {
              v907 = v140 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v907) = -1;
              memset_thunk_772440563353939046(v138, SDWORD2(v907), v140 / 0xFF);
              v84 = HIDWORD(v1279);
              v138 += v140 / 0xFF;
              v14 = v1265;
              LOBYTE(v140) = v140 / 0xFF + v140;
            }
            *v138++ = v140;
          }
          v141 = v138;
          do
          {
            *v141 = *(_QWORD *)((char *)v141 + (char *)v14 - v138);
            ++v141;
          }
          while ( v141 < (_QWORD *)&v138[v139] );
          v142 = &v138[v139];
          v20 = v1276;
          v143 = v84 - 4LL;
          *v142 = v1279;
          v21 = v142 + 1;
          v1321 = v21;
          if ( a7 && (unsigned __int64)&v21[v143 / 0xFF + 6] > v1276 )
          {
            v49 = (unsigned __int64)v1234;
            goto LABEL_336;
          }
          v144 = *v137;
          if ( v143 < 0xF )
          {
            *v136 = v143 + v144;
          }
          else
          {
            v145 = v84 - 19LL;
            *v136 = v144 + 15;
            if ( v145 >= 0x1FE )
            {
              v146 = v145 / 0x1FE;
              v145 %= 0x1FEuLL;
              do
              {
                *v21 = -1;
                v147 = v21 + 1;
                *v147 = -1;
                v21 = v147 + 1;
                --v146;
              }
              while ( v146 );
            }
            if ( v145 >= 0xFF )
            {
              LOBYTE(v145) = v145 + 1;
              *v21++ = -1;
            }
            *v21++ = v145;
            v1321 = v21;
          }
          v16 = (unsigned int *)((char *)v1234 + v84);
        }
        else
        {
          v89 = v1257;
          if ( (unsigned __int64)v82 < v49 && v1257 < v49 + v1332 )
          {
            LOWORD(v1279) = v80;
            v49 = (unsigned __int64)v82;
            v84 = HIDWORD(v80);
            v1391 = HIDWORD(v80);
            v1234 = v82;
          }
          if ( (__int64)(v1257 - v49) < 3 )
          {
            v49 = v1257;
            v1234 = (unsigned int *)v1257;
            v1279 = v88;
            continue;
          }
          while ( 2 )
          {
            if ( (__int64)(v89 - v49) < 18 )
            {
              v175 = v84;
              if ( v84 > 18 )
                v175 = 18;
              if ( v49 + v175 > v89 + v87 - 4LL )
                v175 = v87 + v89 - v49 - 4;
              v176 = v175 + v49 - v89;
              if ( v176 > 0 )
              {
                v89 += v176;
                v87 -= v176;
                v1257 = v89;
                HIDWORD(v1261) = v87;
                v88 = v1261;
                v1338 = v1261;
              }
            }
            v1365 = v87;
            v90 = v89 + v87;
            if ( v90 > v81 )
            {
              v91 = 0;
              v92 = 0LL;
              goto LABEL_92;
            }
            v1303 = v90 - 3;
            v218 = (_DWORD *)(v90 - 3);
            v1298 = v90 - 3;
            v1210 = v87;
            v219 = *(_DWORD *)(a1 + 262172);
            v220 = *(_DWORD *)(a1 + 262168);
            v221 = v219;
            v222 = *(_QWORD **)(a1 + 262152);
            v1309 = v219;
            v1228 = v220;
            v1270 = v220 + v90 - 3 - (_DWORD)v222;
            v1286 = v222;
            v223 = v220;
            v224 = *(_DWORD *)(a1 + 262176);
            if ( v219 + 0x10000 <= v1270 )
              v221 = v1270 - 0xFFFF;
            v1219 = v221;
            v225 = *(_QWORD *)(a1 + 262160) + v220 - (unsigned __int64)v219;
            v1290 = 256;
            v226 = v87 - 3;
            v1238 = (unsigned int)*v218;
            v227 = (_DWORD)v218 + v220 - (_DWORD)v222;
            v1346 = v225;
            v1334 = *(_QWORD *)(a1 + 262160);
            v228 = 0;
            v1201 = 0;
            v229 = 0;
            v1363 = 0LL;
            if ( v224 < v227 )
            {
              v230 = (_DWORD *)((char *)v222 + v224 - v223);
              do
              {
                v231 = (unsigned __int64)(unsigned int)(-1640531535 * *v230) >> 17;
                v232 = v224 - *(_DWORD *)(a1 + 4 * v231);
                if ( v232 > 0xFFFF )
                  LOWORD(v232) = -1;
                v230 = (_DWORD *)((char *)v230 + 1);
                *(_WORD *)(a1 + 2LL * (unsigned __int16)v224 + 0x20000) = v232;
                *(_DWORD *)(a1 + 4 * v231) = v224++;
              }
              while ( v224 < v227 );
              v218 = (_DWORD *)(v90 - 3);
              v228 = 0;
            }
            *(_DWORD *)(a1 + 262176) = v227;
            v233 = v226;
            v1349 = v226;
            v234 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v218) >> 17));
            if ( v234 >= v1219 )
            {
              v235 = v1228;
              v236 = v1238;
              while ( 1 )
              {
                LODWORD(v237) = 0;
                v238 = v228;
                if ( v1290 <= 0 )
                {
LABEL_421:
                  v88 = v1338;
                  v21 = v1321;
                  v87 = HIDWORD(v1261);
                  v229 = HIDWORD(v1238);
                  break;
                }
                --v1290;
                if ( v234 >= v235 )
                {
                  v239 = (_DWORD *)((char *)v222 + v234 - v235);
                  if ( *(_WORD *)(v1210 + v1257 - 1) != *(_WORD *)((char *)v239 + v1210 - v233 - 1) || *v239 != v236 )
                    goto LABEL_1548;
                  if ( v233 )
                  {
                    v240 = v218 - 1;
                    v241 = v1257 - (_DWORD)v218;
                    v242 = 0LL;
                    v243 = -(__int64)(v234 - v235);
                    if ( (__int64)(v1257 - (_QWORD)v218) <= v243 )
                      v241 = v243;
                    v244 = (char *)v239 - (char *)v218;
                    while ( (int)v237 - v241 > 3 )
                    {
                      if ( *v240 != *(_DWORD *)((char *)v240 + v244) )
                      {
                        _BitScanReverse(&v245, *v240 ^ *(_DWORD *)((char *)v240 + v244));
                        LODWORD(v237) = v237 - ((31 - v245) >> 3);
                        goto LABEL_307;
                      }
                      LODWORD(v237) = v237 - 4;
                      v242 -= 4LL;
                      --v240;
                    }
                    v594 = v241;
                    if ( v242 > v241 )
                    {
                      v595 = (_BYTE *)(v242 + v1257 + v1365 - 4);
                      do
                      {
                        if ( *v595 != *((_BYTE *)v222 + v234 - v235 + v242 - 1) )
                          break;
                        LODWORD(v237) = v237 - 1;
                        --v242;
                        --v595;
                      }
                      while ( v242 > v594 );
                      v236 = v1238;
                    }
                  }
LABEL_307:
                  v246 = v1254;
                  v247 = v218 + 1;
                  v248 = v239 + 1;
                  v249 = (_DWORD)v218 + 4;
                  if ( (unsigned __int64)(v218 + 1) < v1254 - 7 )
                  {
                    if ( *v248 == *v247 )
                    {
                      while ( 1 )
                      {
                        ++v247;
                        ++v248;
                        if ( (unsigned __int64)v247 >= v1254 - 7 )
                          goto LABEL_308;
                        if ( *v248 != *v247 )
                        {
                          __asm { tzcnt   rax, rax }
                          v250 = ((unsigned int)_RAX >> 3) - v249 + (_DWORD)v247;
                          goto LABEL_600;
                        }
                      }
                    }
                    __asm { tzcnt   rcx, rax }
                    v250 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
LABEL_308:
                    if ( (unsigned __int64)v247 < v1254 - 3 && *(_DWORD *)v248 == *(_DWORD *)v247 )
                    {
                      v247 = (_QWORD *)((char *)v247 + 4);
                      v248 = (_QWORD *)((char *)v248 + 4);
                    }
                    if ( (unsigned __int64)v247 < v1254 - 1 && *(_WORD *)v248 == *(_WORD *)v247 )
                    {
                      v247 = (_QWORD *)((char *)v247 + 2);
                      v248 = (_QWORD *)((char *)v248 + 2);
                    }
                    if ( (unsigned __int64)v247 < v1254 && *(_BYTE *)v248 == *(_BYTE *)v247 )
                      LODWORD(v247) = (_DWORD)v247 + 1;
                    v250 = (_DWORD)v247 - v249;
                  }
LABEL_600:
                  v228 = v1201;
                  v414 = v250 - v237 + 4;
                  if ( v414 > v1210 )
                  {
                    v1210 = v414;
                    v237 = (int)v237;
                    goto LABEL_412;
                  }
                  goto LABEL_413;
                }
                v298 = v234 - v1309;
                v299 = (_DWORD *)(v298 + v1334);
                if ( v234 > v235 - 4 || *v299 != v236 )
                {
LABEL_1548:
                  v246 = v1254;
                  goto LABEL_413;
                }
                v300 = v218 + 1;
                v301 = v299 + 1;
                v302 = (_QWORD *)((char *)v218 + v235 - v234);
                v303 = (_DWORD)v218 + 4;
                if ( (unsigned __int64)v302 > v1254 )
                  v302 = (_QWORD *)v1254;
                if ( v300 < (_QWORD *)((char *)v302 - 7) )
                {
                  if ( *v301 != *v300 )
                  {
                    __asm { tzcnt   rcx, rax }
                    v306 = (unsigned int)_RCX >> 3;
                    goto LABEL_397;
                  }
                  while ( 1 )
                  {
                    ++v300;
                    ++v301;
                    if ( v300 >= (_QWORD *)((char *)v302 - 7) )
                      break;
                    if ( *v301 != *v300 )
                    {
                      __asm { tzcnt   rax, rax }
                      v306 = ((unsigned int)_RAX >> 3) - v303 + (_DWORD)v300;
                      goto LABEL_397;
                    }
                  }
                }
                if ( v300 < (_QWORD *)((char *)v302 - 3) && *(_DWORD *)v301 == *(_DWORD *)v300 )
                {
                  v300 = (_QWORD *)((char *)v300 + 4);
                  v301 = (_QWORD *)((char *)v301 + 4);
                }
                if ( v300 < (_QWORD *)((char *)v302 - 1) && *(_WORD *)v301 == *(_WORD *)v300 )
                {
                  v300 = (_QWORD *)((char *)v300 + 2);
                  v301 = (_QWORD *)((char *)v301 + 2);
                }
                if ( v300 < v302 && *(_BYTE *)v301 == *(_BYTE *)v300 )
                  LODWORD(v300) = (_DWORD)v300 + 1;
                v306 = (_DWORD)v300 - v303;
LABEL_397:
                v307 = v306 + 4;
                v308 = (_QWORD *)((char *)v218 + (int)(v306 + 4));
                if ( v308 == v302 && (unsigned __int64)v302 < v1254 )
                {
                  v309 = v1286;
                  v310 = (_QWORD *)((char *)v218 + v307);
                  if ( (unsigned __int64)v308 >= v1254 - 7 )
                    goto LABEL_518;
                  if ( *v1286 != *v308 )
                  {
                    __asm { tzcnt   rcx, rax }
                    v313 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v310 = v308 + 1;
                    v309 = v1286 + 1;
LABEL_518:
                    while ( (unsigned __int64)v310 < v1254 - 7 )
                    {
                      if ( *v309 != *v310 )
                      {
                        __asm { tzcnt   rax, rax }
                        v313 = ((unsigned int)_RAX >> 3) - (_DWORD)v308 + (_DWORD)v310;
                        goto LABEL_402;
                      }
                      ++v310;
                      ++v309;
                    }
                    if ( (unsigned __int64)v310 < v1254 - 3 && *(_DWORD *)v309 == *(_DWORD *)v310 )
                    {
                      v310 = (_QWORD *)((char *)v310 + 4);
                      v309 = (_QWORD *)((char *)v309 + 4);
                    }
                    if ( (unsigned __int64)v310 < v1254 - 1 && *(_WORD *)v309 == *(_WORD *)v310 )
                    {
                      v310 = (_QWORD *)((char *)v310 + 2);
                      v309 = (_QWORD *)((char *)v309 + 2);
                    }
                    if ( (unsigned __int64)v310 < v1254 && *(_BYTE *)v309 == *(_BYTE *)v310 )
                      LODWORD(v310) = (_DWORD)v310 + 1;
                    v313 = (_DWORD)v310 - (_DWORD)v308;
                  }
LABEL_402:
                  v307 += v313;
                }
                v314 = 0;
                if ( v1349 )
                {
                  v315 = -v298;
                  v316 = v1257 - (_DWORD)v218;
                  v317 = 0LL;
                  v318 = v218 - 1;
                  if ( (__int64)(v1257 - (_QWORD)v218) <= v315 )
                    v316 = v315;
                  v319 = (char *)v299 - (char *)v218;
                  while ( v314 - v316 > 3 )
                  {
                    if ( *v318 != *(_DWORD *)((char *)v318 + v319) )
                    {
                      _BitScanReverse(&v320, *v318 ^ *(_DWORD *)((char *)v318 + v319));
                      v314 -= (31 - v320) >> 3;
                      goto LABEL_410;
                    }
                    v314 -= 4;
                    v317 -= 4LL;
                    --v318;
                  }
                  v598 = v316;
                  if ( v317 > v316 )
                  {
                    v599 = (_BYTE *)(v317 + v1257 + v1365 - 4);
                    do
                    {
                      if ( *v599 != *(_BYTE *)(v1334 + v234 - v1309 + v317 - 1) )
                        break;
                      --v314;
                      --v317;
                      --v599;
                    }
                    while ( v317 > v598 );
                    v235 = v1228;
                  }
                }
LABEL_410:
                v228 = v1201;
                v321 = v307 - v314;
                v246 = v1254;
                if ( v321 > v1210 )
                {
                  v1210 = v321;
                  v237 = v314;
LABEL_412:
                  HIDWORD(v1238) = v1270 - v234;
                  v1303 = (unsigned __int64)v218 + v237;
                }
LABEL_413:
                if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v234 + 0x20000) != 1 )
                  goto LABEL_417;
                v322 = v234 - 1;
                if ( v228 )
                {
                  v1201 = v238;
                  if ( v238 != 2 )
                    goto LABEL_417;
                }
                else
                {
                  if ( (_BYTE)v236 != HIBYTE(v236) || (unsigned __int16)v236 != HIWORD(v236) )
                  {
                    v1201 = 1;
LABEL_417:
                    v323 = v1219;
LABEL_418:
                    v234 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v234 + 0x20000);
                    goto LABEL_420;
                  }
                  v1201 = 2;
                  v1363 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1298 + 4), v246, v236) + 4LL;
                }
                v323 = v1219;
                if ( v322 < v1219 || v235 - v234 < 3 )
                  goto LABEL_418;
                if ( v322 < v235 )
                {
                  v324 = 1;
                  v325 = v1334 + v322 - v1309;
                }
                else
                {
                  v324 = 0;
                  v325 = (unsigned __int64)v1286 + v322 - v235;
                }
                if ( *(_DWORD *)v325 != v236 )
                  goto LABEL_417;
                v326 = v1254;
                if ( v324 )
                  v326 = v1346;
                v327 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v325 + 4), v326, v236) + 4LL;
                if ( v324 )
                {
                  if ( v327 + v325 == v328 )
                  {
                    v796 = v236;
                    v797 = 8 * (v327 & 3);
                    if ( v797 )
                      v796 = __ROL4__(v236, v797);
                    v327 += (unsigned int)LZ4HC_countPattern(v1286, v1254, v796);
                  }
                  v330 = v1334;
                  v329 = v1334;
                }
                else
                {
                  v329 = (unsigned __int64)v1286;
                  v330 = v1334;
                }
                v331 = LZ4HC_reverseCountPattern(v325, v329, v236);
                v332 = v1286;
                v333 = v331;
                if ( !v324 && (_QWORD *)(v325 - v331) == v1286 && v1309 < v235 )
                {
                  v337 = v236;
                  v338 = 8LL * (-v331 & 3);
                  if ( v338 )
                    v337 = __ROL4__(v236, v338);
                  v339 = LZ4HC_reverseCountPattern(v1346, v330, v337);
                  v333 = v339 + v340;
                  v332 = v1286;
                }
                v323 = v1219;
                v334 = v1363;
                v234 = v1219;
                if ( v322 - v333 > v1219 )
                  v234 = v322 - v333;
                v335 = v327 + v322 - v234;
                if ( v335 < v1363 || v327 > v1363 )
                {
                  if ( v235 - v234 - 1 < 3 )
                  {
                    v234 = v235;
                  }
                  else if ( !v1349 )
                  {
                    if ( v335 < v1363 )
                      v334 = v327 + v322 - v234;
                    if ( v1210 < v334 )
                    {
                      if ( v1298 + v235 - (unsigned __int64)v234 - (_QWORD)v332 > 0xFFFF )
                        goto LABEL_421;
                      v1210 = v334;
                      HIDWORD(v1238) = v1270 - v234;
                      v1303 = v1298;
                    }
                    v336 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v234 + 0x20000);
                    if ( v336 > v234 )
                      goto LABEL_421;
                    v234 -= v336;
                  }
                }
                else
                {
                  v234 = v235;
                  if ( v235 - ((_DWORD)v327 - (_DWORD)v1363 + v322) - 1 >= 3 )
                    v234 = v327 - v1363 + v322;
                }
LABEL_420:
                v218 = (_DWORD *)v1298;
                v79 = v234 < v323;
                v222 = v1286;
                v233 = v1349;
                v228 = v1201;
                if ( v79 )
                  goto LABEL_421;
              }
            }
            v49 = (unsigned __int64)v1234;
            v92 = __PAIR64__(v1210, v229);
            v89 = v1257;
            v91 = v1210;
LABEL_92:
            v84 = v1391;
            if ( v91 > v87 )
            {
              v93 = (unsigned int *)v1303;
              v94 = v49 + v1391;
              if ( v1303 >= v94 + 3 )
              {
                if ( v89 < v94 )
                {
                  if ( (__int64)(v89 - v49) < 18 )
                  {
                    if ( v1391 > 18 )
                      v84 = 18;
                    v1391 = v84;
                    if ( v49 + v84 > v89 + v87 - 4LL )
                    {
                      v84 = v87 + v89 - v49 - 4;
                      v1391 = v84;
                    }
                    v180 = v84 + v49 - v89;
                    if ( v180 > 0 )
                    {
                      v1257 = v180 + v89;
                      HIDWORD(v1261) = v87 - v180;
                      v88 = v1261;
                    }
                  }
                  else
                  {
                    v1391 = v89 - v49;
                  }
                }
                v181 = v1234;
                v102 = v21;
                v182 = (char *)v1234 - (char *)v1265;
                v183 = v21;
                v184 = v21;
                v185 = v21 + 1;
                if ( a7 )
                {
                  v20 = v1276;
                  if ( (unsigned __int64)&v185[v182 / 0xFF + 8 + v182] > v1276 )
                    goto LABEL_357;
                }
                if ( v182 < 0xF )
                {
                  *v183 = 16 * v182;
                }
                else
                {
                  v186 = v182 - 15;
                  *v183 = -16;
                  if ( v182 - 15 >= 0xFF )
                  {
                    v903 = v186 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v903) = -1;
                    memset_thunk_772440563353939046(v185, SDWORD2(v903), v186 / 0xFF);
                    v185 += v186 / 0xFF;
                    v183 = v102;
                    v181 = v1234;
                    LOBYTE(v186) = v186 / 0xFF + v186;
                    v184 = v102;
                  }
                  *v185++ = v186;
                  v93 = (unsigned int *)v1303;
                }
                v187 = v185;
                do
                {
                  *v187 = *(_QWORD *)((char *)v187 + (char *)v1265 - v185);
                  ++v187;
                }
                while ( v187 < (_QWORD *)&v185[v182] );
                v188 = &v185[v182];
                *v188 = v1279;
                v21 = v188 + 1;
                v189 = v1391 - 4LL;
                v1321 = v21;
                if ( a7 && (unsigned __int64)&v21[v189 / 0xFF + 6] > v1276 )
                  goto LABEL_359;
                v190 = *v184;
                if ( v189 < 0xF )
                {
                  *v183 = v189 + v190;
                }
                else
                {
                  v191 = v1391 - 19LL;
                  *v183 = v190 + 15;
                  if ( v191 >= 0x1FE )
                  {
                    v192 = v191 / 0x1FE;
                    v191 %= 0x1FEuLL;
                    do
                    {
                      *v21 = -1;
                      v193 = v21 + 1;
                      *v193 = -1;
                      v21 = v193 + 1;
                      --v192;
                    }
                    while ( v192 );
                  }
                  if ( v191 >= 0xFF )
                  {
                    LOBYTE(v191) = v191 + 1;
                    *v21++ = -1;
                  }
                  *v21++ = v191;
                  v1321 = v21;
                }
                v49 = v1257;
                v194 = (unsigned int *)((char *)v181 + v1391);
                LOWORD(v1279) = v88;
                v89 = (unsigned __int64)v93;
                v84 = HIDWORD(v88);
                v88 = v92;
                v1261 = v92;
                v87 = HIDWORD(v92);
                v1338 = v92;
                v81 = v1316;
                v1391 = v84;
                v1265 = v194;
                v1234 = (unsigned int *)v1257;
                v1257 = (unsigned __int64)v93;
                continue;
              }
              if ( v1303 < v94 )
              {
                v1261 = v92;
                v88 = v92;
                v87 = HIDWORD(v92);
                v89 = v1303;
                v1338 = v92;
                v81 = v1316;
                v1257 = v1303;
                continue;
              }
              if ( v89 < v94 )
              {
                v125 = v1391 + v49 - v89;
                v1257 = v125 + v89;
                if ( v87 - v125 >= 4 )
                {
                  HIDWORD(v1261) = v87 - v125;
                  v88 = v1261;
                }
                else
                {
                  v1257 = v1303;
                  v88 = v92;
                }
              }
              v126 = v1234;
              v102 = v21;
              v127 = (char *)v1234 - (char *)v1265;
              v128 = v21;
              v129 = v21;
              v130 = v21 + 1;
              if ( a7 && (v20 = v1276, (unsigned __int64)&v130[v127 / 0xFF + 8 + v127] > v1276) )
              {
LABEL_357:
                v84 = v1391;
                v49 = (unsigned __int64)v1234;
                v14 = v1265;
              }
              else
              {
                if ( v127 < 0xF )
                {
                  *v128 = 16 * v127;
                }
                else
                {
                  v131 = v127 - 15;
                  *v128 = -16;
                  if ( v127 - 15 >= 0xFF )
                  {
                    v904 = v131 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v904) = -1;
                    memset_thunk_772440563353939046(v130, SDWORD2(v904), v131 / 0xFF);
                    v130 += v131 / 0xFF;
                    v128 = v102;
                    v126 = v1234;
                    LOBYTE(v131) = v131 / 0xFF + v131;
                    v129 = v102;
                  }
                  *v130++ = v131;
                  v93 = (unsigned int *)v1303;
                }
                v132 = v130;
                do
                {
                  *v132 = *(_QWORD *)((char *)v132 + (char *)v1265 - v130);
                  ++v132;
                }
                while ( v132 < (_QWORD *)&v130[v127] );
                v133 = &v130[v127];
                v83 = 0;
                *v133 = v1279;
                v21 = v133 + 1;
                v134 = v1391 - 4LL;
                v1321 = v21;
                if ( !a7 || (unsigned __int64)&v21[v134 / 0xFF + 6] <= v1276 )
                {
                  v135 = *v129;
                  if ( v134 >= 0xF )
                  {
                    v359 = v1391 - 19LL;
                    *v128 = v135 + 15;
                    if ( v359 >= 0x1FE )
                    {
                      v360 = v359 / 0x1FE;
                      v359 %= 0x1FEuLL;
                      do
                      {
                        *v21 = -1;
                        v361 = v21 + 1;
                        *v361 = -1;
                        v21 = v361 + 1;
                        --v360;
                      }
                      while ( v360 );
                    }
                    if ( v359 >= 0xFF )
                    {
                      LOBYTE(v359) = v359 + 1;
                      *v21++ = -1;
                    }
                    *v21++ = v359;
                    v1321 = v21;
                  }
                  else
                  {
                    *v128 = v134 + v135;
                  }
                  v82 = (unsigned int *)v1257;
                  v1279 = v92;
                  v49 = (unsigned __int64)v93;
                  v81 = v1316;
                  v80 = v88;
                  v1265 = (unsigned int *)((char *)v126 + v1391);
                  v1351 = v1257;
                  v1234 = v93;
                  v1345 = v88;
                  v1332 = HIDWORD(v88);
                  goto LABEL_84;
                }
LABEL_359:
                v84 = v1391;
                v49 = (unsigned __int64)v1234;
                v14 = v1265;
                v20 = v1276;
              }
              goto LABEL_336;
            }
            break;
          }
          if ( v89 < v49 + v1391 )
          {
            v84 = v89 - v49;
            v1391 = v89 - v49;
          }
          v14 = v1265;
          v102 = v21;
          v103 = v21;
          v104 = v21;
          v105 = v21 + 1;
          v106 = v49 - (_QWORD)v1265;
          if ( a7 && (unsigned __int64)&v105[v106 + 8 + v106 / 0xFF] > v1276 )
          {
            v20 = v1276;
            goto LABEL_336;
          }
          if ( v106 < 0xF )
          {
            *v103 = 16 * v106;
          }
          else
          {
            v107 = v106 - 15;
            *v103 = -16;
            if ( v106 - 15 >= 0xFF )
            {
              v905 = v107 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v905) = -1;
              memset_thunk_772440563353939046(v105, SDWORD2(v905), v107 / 0xFF);
              v105 += v107 / 0xFF;
              v104 = v103;
              v14 = v1265;
              LOBYTE(v107) = v107 / 0xFF + v107;
            }
            *v105++ = v107;
            v89 = v1257;
          }
          v108 = v105;
          do
          {
            *v108 = *(_QWORD *)((char *)v108 + (char *)v14 - v105);
            ++v108;
          }
          while ( v108 < (_QWORD *)&v105[v106] );
          v109 = &v105[v106];
          v84 = v1391;
          *v109 = v1279;
          v110 = v109 + 1;
          v111 = v1391 - 4LL;
          if ( a7 && (unsigned __int64)&v110[v111 / 0xFF + 6] > v1276 )
          {
            v49 = (unsigned __int64)v1234;
            goto LABEL_335;
          }
          v112 = *v104;
          if ( v111 < 0xF )
          {
            *v103 = v111 + v112;
          }
          else
          {
            v113 = v1391 - 19LL;
            *v103 = v112 + 15;
            if ( v113 >= 0x1FE )
            {
              v114 = v113 / 0x1FE;
              v113 %= 0x1FEuLL;
              do
              {
                *v110 = -1;
                v115 = v110 + 1;
                *v115 = -1;
                v110 = v115 + 1;
                --v114;
              }
              while ( v114 );
            }
            if ( v113 >= 0xFF )
            {
              LOBYTE(v113) = v113 + 1;
              *v110++ = -1;
            }
            *v110++ = v113;
          }
          v14 = (unsigned int *)((char *)v1234 + v1391);
          v102 = v110;
          v116 = v110;
          v1265 = v14;
          v117 = v110;
          v1234 = (unsigned int *)v89;
          v118 = v89 - (_QWORD)v14;
          v119 = v110 + 1;
          v49 = v89;
          if ( a7 && (unsigned __int64)&v119[v118 + 8 + v118 / 0xFF] > v1276 )
            goto LABEL_334;
          if ( v118 < 0xF )
          {
            *v116 = 16 * v118;
          }
          else
          {
            v120 = v118 - 15;
            *v116 = -16;
            if ( v118 - 15 >= 0xFF )
            {
              v906 = v120 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v906) = -1;
              memset_thunk_772440563353939046(v119, SDWORD2(v906), v120 / 0xFF);
              v119 += v120 / 0xFF;
              v117 = v116;
              LOBYTE(v120) = v120 / 0xFF + v120;
            }
            *v119++ = v120;
            v89 = v1257;
          }
          v121 = v119;
          do
          {
            *v121 = *(_QWORD *)((char *)v121 + (char *)v14 - v119);
            ++v121;
          }
          while ( v121 < (_QWORD *)&v119[v118] );
          v122 = &v119[v118];
          *v122 = v1261;
          v21 = v122 + 1;
          v123 = SHIDWORD(v1261) - 4LL;
          v1321 = v21;
          if ( a7 && (unsigned __int64)&v21[v123 / 0xFF + 6] > v1276 )
          {
            v49 = (unsigned __int64)v1234;
LABEL_334:
            LOWORD(v1279) = v88;
            v84 = HIDWORD(v88);
LABEL_335:
            v20 = v1276;
LABEL_336:
            if ( a7 != 2 )
              goto LABEL_257;
            v253 = v49 - (_QWORD)v14;
            v21 = v102;
            v254 = (v49 - (unsigned __int64)v14 + 240) / 0xFF + v49 - (_QWORD)v14 + 1;
            if ( (unsigned __int64)&v102[v254] <= v20 - 3 )
            {
              if ( v84 > 255 * (v20 - 3 - v254 - (unsigned __int64)v102) + 18 )
                v84 = 255 * (v20 - 3 - v254 - (_DWORD)v102) + 18;
              v1392 = v84;
              if ( (__int64)(v20 + v84 - v254 - (_QWORD)v102 + 2) >= 12 )
              {
                v255 = v102 + 1;
                if ( v253 < 0xF )
                {
                  *v102 = 16 * v253;
                }
                else
                {
                  v256 = v253 - 15;
                  *v102 = -16;
                  if ( v253 - 15 >= 0xFF )
                  {
                    v908 = v256 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v908) = -1;
                    memset_thunk_772440563353939046(v102 + 1, SDWORD2(v908), v256 / 0xFF);
                    v84 = v1392;
                    v255 += v256 / 0xFF;
                    v20 = v1276;
                    v14 = v1265;
                    LOBYTE(v256) = v256 / 0xFF + v256;
                  }
                  *v255++ = v256;
                }
                v257 = v255;
                v258 = (char *)v14 - v255;
                do
                {
                  *v257 = *(_QWORD *)((char *)v257 + v258);
                  ++v257;
                }
                while ( v257 < (_QWORD *)&v255[v253] );
                v259 = &v255[v253];
                v260 = v84 - 4LL;
                *v259 = v1279;
                v21 = v259 + 1;
                v261 = *v102;
                if ( v260 < 0xF )
                {
                  *v102 = v260 + v261;
                }
                else
                {
                  v262 = v84 - 19LL;
                  *v102 = v261 + 15;
                  if ( v262 >= 0x1FE )
                  {
                    v263 = v262 / 0x1FE;
                    v262 %= 0x1FEuLL;
                    do
                    {
                      *v21 = -1;
                      v264 = v21 + 1;
                      *v264 = -1;
                      v21 = v264 + 1;
                      --v263;
                    }
                    while ( v263 );
                  }
                  if ( v262 >= 0xFF )
                  {
                    LOBYTE(v262) = v262 + 1;
                    *v21++ = -1;
                  }
                  *v21++ = v262;
                }
                v14 = (unsigned int *)((char *)v1234 + v84);
                v1265 = v14;
              }
            }
LABEL_355:
            v15 = (int)a3;
            v18 = v1358;
LABEL_7:
            v22 = v18 - (char *)v14;
            v23 = v21;
            if ( a7 == 2 )
            {
              v20 += 5LL;
            }
            else if ( !a7 )
            {
              goto LABEL_259;
            }
            if ( (unsigned __int64)&v21[(v22 + 240) / 0xFF + 1 + v22] <= v20 )
            {
LABEL_259:
              v196 = v22 + (_DWORD)v14;
              if ( v22 < 0xF )
              {
                *v21 = 16 * v22;
              }
              else
              {
                *v21 = -16;
                v197 = v22 - 15;
                ++v21;
                if ( v22 - 15 >= 0xFF )
                {
                  v909 = v197 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v909) = -1;
                  memset_thunk_772440563353939046(v21, SDWORD2(v909), v197 / 0xFF);
                  v21 += v197 / 0xFF;
                  v14 = v1265;
                  LOBYTE(v197) = v197 / 0xFF + v197;
                }
                v23 = v21;
                *v21 = v197;
              }
              memmove(v23 + 1, v14, v22);
              v195 = v22 + (_DWORD)v21 + 1 - v15;
              *a4 = v196 - v1387;
              goto LABEL_264;
            }
            if ( a7 != 1 )
            {
              v22 = v20 - (_QWORD)v21 - 1 - ((v20 - (unsigned __int64)v21 - 1 + 241) >> 8);
              goto LABEL_259;
            }
LABEL_257:
            v195 = 0;
LABEL_264:
            if ( v195 <= 0 )
              *(_BYTE *)(a1 + 262183) = 1;
            return (unsigned int)v195;
          }
          v124 = *v117;
          if ( v123 >= 0xF )
          {
            v177 = SHIDWORD(v1261) - 19LL;
            *v116 = v124 + 15;
            if ( v177 >= 0x1FE )
            {
              v178 = v177 / 0x1FE;
              v177 %= 0x1FEuLL;
              do
              {
                *v21 = -1;
                v179 = v21 + 1;
                *v179 = -1;
                v21 = v179 + 1;
                --v178;
              }
              while ( v178 );
            }
            if ( v177 >= 0xFF )
            {
              LOBYTE(v177) = v177 + 1;
              *v21++ = -1;
            }
            *v21++ = v177;
            v1321 = v21;
          }
          else
          {
            *v116 = v123 + v124;
          }
          v20 = v1276;
          v16 = (unsigned int *)(v89 + SHIDWORD(v1261));
        }
        break;
      }
      v19 = v1316;
      v14 = v16;
      v1265 = v16;
      v1234 = v16;
    }
  }
  v24 = 0;
  if ( v12 || (int)*a4 <= 4096 )
  {
    if ( a7 == 2 && a5 < 1 || *a4 > 0x7E000000 )
      return v24;
    v364 = (char *)a2;
    *(_QWORD *)(a1 + 0x40000) = v10 + (int)*a4;
    v365 = (int)*a4;
    v366 = (char *)a2;
    v367 = &a3[a5];
    v1385 = 16;
    v368 = (char *)a2 + v365;
    v369 = (unsigned __int64)a2 + v365 - 12;
    v1280 = v8;
    v1236 = a2;
    v370 = v8;
    v371 = v367 - 5;
    if ( a7 != 2 )
      v371 = v367;
    v1384 = 0x10000000000LL;
    v1277 = v371;
    v1267 = v364;
    v1364 = v368;
    v1299 = v369;
    v1259 = (unsigned __int64)(v368 - 5);
    v1256 = 0LL;
    v1287 = 0LL;
    *a4 = 0;
    if ( (int)v365 < 13 )
      goto LABEL_1332;
LABEL_530:
    if ( (unsigned __int64)v366 > v369 )
      goto LABEL_1331;
    v372 = 3;
    v373 = *(unsigned int *)(v11 + 262168);
    v374 = *(_QWORD *)(v11 + 262160);
    v375 = *(_QWORD **)(v11 + 262152);
    v376 = (_DWORD)v366 + *(_DWORD *)(v11 + 262168) - (_DWORD)v375;
    v1369 = *(_QWORD *)(v11 + 262184);
    v377 = *(_DWORD *)(v11 + 262172);
    v378 = v377;
    v1310 = v377;
    v1393 = 3;
    v1229 = v376;
    v1318 = v374;
    if ( v377 + 0x10000 <= v376 )
      v378 = v376 - 0xFFFF;
    v1211 = v378;
    v1239 = HIDWORD(v1384);
    v1324 = v373 + v374 - v377;
    v379 = *(unsigned int *)(a1 + 262176);
    v1291 = *v1236;
    v1352 = 0LL;
    v380 = 0;
    v1202 = 0;
    v381 = 0;
    if ( (unsigned int)v379 < v376 )
    {
      v781 = (_DWORD *)((char *)v375 + v379 - v373);
      do
      {
        v782 = (unsigned __int64)(unsigned int)(-1640531535 * *v781) >> 17;
        v783 = (unsigned int)(v379 - *(_DWORD *)(a1 + 4 * v782));
        if ( v783 > 0xFFFF )
          LOWORD(v783) = -1;
        v781 = (_DWORD *)((char *)v781 + 1);
        *(_WORD *)(a1 + 2LL * (unsigned __int16)v379 + 0x20000) = v783;
        *(_DWORD *)(a1 + 4 * v782) = v379;
        LODWORD(v379) = v379 + 1;
      }
      while ( (unsigned int)v379 < v376 );
      v372 = 3;
      v378 = v1211;
      v374 = v1318;
    }
    v382 = v1236;
    *(_DWORD *)(a1 + 262176) = v376;
    v383 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v1236) >> 17));
    while ( v383 >= v378 && v1239 > 0 )
    {
      --v1239;
      if ( v383 >= (unsigned int)v373 )
      {
        v384 = v383 - (unsigned int)v373;
        if ( *(_WORD *)((char *)v382 + v372 - 1) != *(_WORD *)((char *)v375 + v372 + v384 - 1)
          || *(_DWORD *)((char *)v375 + v384) != v1291 )
        {
          goto LABEL_1308;
        }
        v385 = v382 + 1;
        v386 = (_QWORD *)((char *)v375 + v384 + 4);
        v387 = (_DWORD)v382 + 4;
        if ( (unsigned __int64)v385 < v1259 - 7 )
        {
          if ( *v386 != *v385 )
          {
            __asm { tzcnt   rcx, rax }
            v390 = (unsigned int)_RCX >> 3;
LABEL_1461:
            v382 = v1236;
            v862 = v390 + 4;
            if ( v862 > v372 )
            {
              v381 = v1229 - v383;
              v1393 = v862;
              v1202 = v1229 - v383;
            }
            goto LABEL_1308;
          }
          while ( 1 )
          {
            ++v385;
            ++v386;
            if ( (unsigned __int64)v385 >= v1259 - 7 )
              break;
            if ( *v386 != *v385 )
            {
              __asm { tzcnt   rax, rax }
              v390 = ((unsigned int)_RAX >> 3) - v387 + (_DWORD)v385;
              goto LABEL_1461;
            }
          }
        }
        if ( (unsigned __int64)v385 < v1259 - 3 && *(_DWORD *)v386 == *(_DWORD *)v385 )
        {
          v385 = (_QWORD *)((char *)v385 + 4);
          v386 = (_QWORD *)((char *)v386 + 4);
        }
        if ( (unsigned __int64)v385 < v1259 - 1 && *(_WORD *)v386 == *(_WORD *)v385 )
        {
          v385 = (_QWORD *)((char *)v385 + 2);
          v386 = (_QWORD *)((char *)v386 + 2);
        }
        if ( (unsigned __int64)v385 < v1259 && *(_BYTE *)v386 == *(_BYTE *)v385 )
          LODWORD(v385) = (_DWORD)v385 + 1;
        v390 = (_DWORD)v385 - v387;
        goto LABEL_1461;
      }
      v770 = (_DWORD *)(v374 + v383 - v1310);
      if ( v383 > (int)v373 - 4 || *v770 != v1291 )
        goto LABEL_1308;
      v774 = v382 + 1;
      v775 = (_DWORD)v382 + 4;
      v776 = (_QWORD *)((char *)v382 + (unsigned int)v373 - v383);
      if ( (unsigned __int64)v776 > v1259 )
        v776 = (_QWORD *)v1259;
      v777 = v770 + 1;
      if ( v774 >= (_QWORD *)((char *)v776 - 7) )
        goto LABEL_1465;
      if ( *v777 == *v774 )
      {
        while ( 1 )
        {
          ++v774;
          ++v777;
          if ( v774 >= (_QWORD *)((char *)v776 - 7) )
            break;
          if ( *v777 != *v774 )
          {
            __asm { tzcnt   rax, rax }
            v780 = ((unsigned int)_RAX >> 3) - v775 + (_DWORD)v774;
            goto LABEL_1475;
          }
        }
LABEL_1465:
        if ( v774 < (_QWORD *)((char *)v776 - 3) && *(_DWORD *)v777 == *(_DWORD *)v774 )
        {
          v774 = (_QWORD *)((char *)v774 + 4);
          v777 = (_QWORD *)((char *)v777 + 4);
        }
        if ( v774 < (_QWORD *)((char *)v776 - 1) && *(_WORD *)v777 == *(_WORD *)v774 )
        {
          v774 = (_QWORD *)((char *)v774 + 2);
          v777 = (_QWORD *)((char *)v777 + 2);
        }
        if ( v774 < v776 && *(_BYTE *)v777 == *(_BYTE *)v774 )
          LODWORD(v774) = (_DWORD)v774 + 1;
        v780 = (_DWORD)v774 - v775;
        goto LABEL_1475;
      }
      __asm { tzcnt   rcx, rax }
      v780 = (unsigned int)_RCX >> 3;
LABEL_1475:
      v864 = v780 + 4;
      v865 = (_QWORD *)((char *)v1236 + (int)(v780 + 4));
      if ( v865 == v776 && (unsigned __int64)v776 < v1259 )
      {
        v866 = v375;
        v867 = (_QWORD *)((char *)v1236 + v864);
        if ( (unsigned __int64)v865 >= v1259 - 7 )
          goto LABEL_1480;
        if ( *v375 != *v865 )
        {
          __asm { tzcnt   rcx, rax }
          v920 = (unsigned int)_RCX >> 3;
        }
        else
        {
          v867 = v865 + 1;
          v866 = v375 + 1;
LABEL_1480:
          while ( (unsigned __int64)v867 < v1259 - 7 )
          {
            if ( *v866 != *v867 )
            {
              __asm { tzcnt   rax, rax }
              v920 = ((unsigned int)_RAX >> 3) - (_DWORD)v865 + (_DWORD)v867;
              goto LABEL_1569;
            }
            ++v867;
            ++v866;
          }
          if ( (unsigned __int64)v867 < v1259 - 3 && *(_DWORD *)v866 == *(_DWORD *)v867 )
          {
            v867 = (_QWORD *)((char *)v867 + 4);
            v866 = (_QWORD *)((char *)v866 + 4);
          }
          if ( (unsigned __int64)v867 < v1259 - 1 && *(_WORD *)v866 == *(_WORD *)v867 )
          {
            v867 = (_QWORD *)((char *)v867 + 2);
            v866 = (_QWORD *)((char *)v866 + 2);
          }
          if ( (unsigned __int64)v867 < v1259 && *(_BYTE *)v866 == *(_BYTE *)v867 )
            LODWORD(v867) = (_DWORD)v867 + 1;
          v920 = (_DWORD)v867 - (_DWORD)v865;
        }
LABEL_1569:
        v864 += v920;
      }
      v382 = v1236;
      if ( v864 > v372 )
      {
        v381 = v1229 - v383;
        v1393 = v864;
        v1202 = v1229 - v383;
      }
LABEL_1308:
      if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v383 + 0x20000) != 1 )
        goto LABEL_1305;
      v771 = v383 - 1;
      if ( v380 )
      {
        v1223 = v380;
        if ( v380 != 2 )
          goto LABEL_1305;
      }
      else
      {
        if ( (_BYTE)v1291 != HIBYTE(v1291) || (unsigned __int16)v1291 != HIWORD(v1291) )
        {
          v380 = 1;
LABEL_1305:
          v378 = v1211;
LABEL_1306:
          v383 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v383 + 0x20000);
          goto LABEL_1307;
        }
        v380 = 2;
        v1223 = 2;
        v1352 = (unsigned int)LZ4HC_countPattern(v382 + 1, v1259, v1291) + 4LL;
      }
      v378 = v1211;
      if ( v771 < v1211 || (unsigned int)v373 - v771 - 1 < 3 )
        goto LABEL_1306;
      if ( v771 >= (unsigned int)v373 )
      {
        v772 = 0;
        v773 = (unsigned __int64)v375 + v771 - (unsigned int)v373;
      }
      else
      {
        v772 = 1;
        v773 = v1318 + v771 - v1310;
      }
      if ( *(_DWORD *)v773 != v1291 )
      {
        v380 = v1223;
        goto LABEL_1306;
      }
      v922 = v1259;
      if ( v772 )
        v922 = v1324;
      v923 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v773 + 4), v922, v1291) + 4LL;
      if ( v772 )
      {
        if ( v923 + v773 == v924 )
        {
          v925 = LZ4HC_rotatePattern(v923, v1291);
          v923 += (unsigned int)LZ4HC_countPattern(v375, v1259, v925);
        }
        v926 = v1318;
      }
      else
      {
        v926 = (unsigned __int64)v375;
      }
      v927 = LZ4HC_reverseCountPattern(v773, v926, v1291);
      v928 = v927;
      if ( !v772 && (_QWORD *)(v773 - v927) == v375 && v1310 < (unsigned int)v373 )
      {
        v929 = LZ4HC_rotatePattern(-v927, v1291);
        v930 = LZ4HC_reverseCountPattern(v1324, v1318, v929);
        v928 = v930 + v931;
      }
      v378 = v1211;
      v932 = v771 - v928;
      v933 = v1211;
      if ( v932 > v1211 )
        v933 = v932;
      v934 = v923 + v771 - v933;
      if ( v934 >= v1352 && v923 <= v1352 )
      {
        v383 = v373;
        if ( (unsigned int)v373 - (v771 - (_DWORD)v1352 + (_DWORD)v923) - 1 >= 3 )
          v383 = v771 - v1352 + v923;
        goto LABEL_1597;
      }
      if ( (unsigned int)v373 - v933 - 1 < 3 )
      {
        v383 = v373;
LABEL_1597:
        v381 = v1202;
        v380 = v1223;
LABEL_1307:
        v372 = v1393;
        v376 = v1229;
        v374 = v1318;
        v382 = v1236;
      }
      else
      {
        v372 = v1393;
        v382 = v1236;
        v935 = v1352;
        v376 = v1229;
        if ( v934 < v1352 )
          v935 = v934;
        if ( v1393 >= v935 )
        {
          v381 = v1202;
        }
        else
        {
          if ( (unsigned __int64)(v373 + (char *)v1236 - v933 - (char *)v375) > 0xFFFF )
          {
            v378 = v1211;
            v381 = v1202;
            break;
          }
          v1393 = v935;
          v381 = v1229 - v933;
          v372 = v935;
          v1202 = v1229 - v933;
        }
        v378 = v1211;
        v936 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v933 + 0x20000);
        if ( v936 > v933 )
          break;
        v380 = v1223;
        v383 = v933 - v936;
        v374 = v1318;
      }
    }
    v891 = v1239;
    v370 = v1280;
    if ( v1239 > 0 && v376 - v378 < 0xFFFF )
    {
      v937 = v1236;
      v938 = *(_QWORD *)(v1369 + 262152);
      v939 = *(unsigned int *)(v1369 + 262168);
      v940 = v939 + *(_QWORD *)(v1369 + 0x40000) - v938;
      v901 = *(_DWORD *)(v1369 + 4 * ((unsigned __int64)(-1640531535 * *v1236) >> 17));
      v900 = v378 + v901 - v940;
      v902 = v1229 - v900;
      if ( v1229 - v900 <= 0xFFFF )
      {
        v941 = v1393;
        while ( 1 )
        {
          v890 = v891--;
          v1244 = v891;
          if ( !v890 )
          {
LABEL_1540:
            v1393 = v941;
            v370 = v1280;
            goto LABEL_1517;
          }
          if ( *(_DWORD *)(v938 - v939 + v901) == v1291 )
            break;
LABEL_1539:
          v899 = *(unsigned __int16 *)(v1369 + 2LL * (unsigned __int16)v901 + 0x20000);
          v900 -= v899;
          v901 -= v899;
          v902 = v1229 - v900;
          if ( v1229 - v900 > 0xFFFF )
            goto LABEL_1540;
        }
        v892 = (unsigned __int64)v937 + v940 - v901;
        if ( v892 > v1259 )
          v892 = v1259;
        v893 = (_QWORD *)(v938 - v939 + 4 + v901);
        v894 = v937 + 1;
        v895 = (_DWORD)v937 + 4;
        if ( (unsigned __int64)(v937 + 1) < v892 - 7 )
        {
          if ( *v894 != *v893 )
          {
            __asm { tzcnt   rcx, rax }
            v898 = (unsigned int)_RCX >> 3;
LABEL_1626:
            v891 = v1244;
            v944 = v898 + 4;
            v937 = v1236;
            if ( v944 <= v941 )
            {
              v381 = v1202;
            }
            else
            {
              v941 = v944;
              v1202 = v902;
              v381 = v902;
            }
            goto LABEL_1539;
          }
          while ( 1 )
          {
            ++v894;
            ++v893;
            if ( (unsigned __int64)v894 >= v892 - 7 )
              break;
            if ( *v894 != *v893 )
            {
              __asm { tzcnt   rax, rax }
              v898 = ((unsigned int)_RAX >> 3) - v895 + (_DWORD)v894;
              goto LABEL_1626;
            }
          }
        }
        if ( (unsigned __int64)v894 < v892 - 3 && *(_DWORD *)v893 == *(_DWORD *)v894 )
        {
          v894 = (_QWORD *)((char *)v894 + 4);
          v893 = (_QWORD *)((char *)v893 + 4);
        }
        if ( (unsigned __int64)v894 < v892 - 1 && *(_WORD *)v893 == *(_WORD *)v894 )
        {
          v894 = (_QWORD *)((char *)v894 + 2);
          v893 = (_QWORD *)((char *)v893 + 2);
        }
        if ( (unsigned __int64)v894 < v892 && *(_BYTE *)v893 == *(_BYTE *)v894 )
          LODWORD(v894) = (_DWORD)v894 + 1;
        v898 = (_DWORD)v894 - v895;
        goto LABEL_1626;
      }
    }
LABEL_1517:
    v807 = v1236;
    v886 = __PAIR64__(v1393, v381);
    v1360 = __PAIR64__(v1393, v381);
    v1323 = __PAIR64__(v1393, v381);
    if ( v1393 < 4 )
    {
      v364 = v1267;
      v371 = v1277;
      v366 = (char *)v1236 + 1;
      goto LABEL_1529;
    }
    v887 = v1236;
    v1315 = v1393;
LABEL_1519:
    v808 = v1299;
    v1342 = v887;
    while ( 1 )
    {
      v801 = HIDWORD(v1323);
      v888 = SHIDWORD(v1323);
      v1397 = HIDWORD(v1323);
      v889 = (char *)v807 + SHIDWORD(v1323);
      if ( (unsigned __int64)v889 > v808 )
      {
        v1263 = 0LL;
        v811 = 0;
        v809 = 0LL;
        goto LABEL_1522;
      }
      v945 = (unsigned int *)(v889 - 2);
      v1256 = (unsigned __int64)(v889 - 2);
      v1371 = v889 - 2;
      v1305 = v889 - 2;
      v946 = *(unsigned int *)(a1 + 262172);
      v947 = *(_QWORD **)(a1 + 262152);
      v948 = *(unsigned int *)(a1 + 262168);
      v949 = *(_QWORD *)(a1 + 262160);
      v950 = v948 + (_DWORD)v889 - 2 - (_DWORD)v947;
      v1368 = *(_QWORD *)(a1 + 262184);
      v1207 = HIDWORD(v1323);
      v951 = v946;
      v1347 = v947;
      v1245 = v950;
      v1275 = *(_DWORD *)(a1 + 262172);
      if ( (int)v946 + 0x10000 <= v950 )
        v951 = v950 - 0xFFFF;
      v1264 = *(_QWORD *)(a1 + 262160);
      v1225 = HIDWORD(v1384);
      v952 = *v945;
      v1329 = v949 + (unsigned int)v948 - v946;
      v953 = (_DWORD)v945 - (_DWORD)v1236;
      v954 = *(_DWORD *)(a1 + 262176);
      v1233 = v952;
      v1215 = v951;
      v1357 = 0LL;
      v1253 = 0;
      if ( v954 < v950 )
      {
        v955 = (_DWORD *)((char *)v947 + v954 - v948);
        do
        {
          v956 = (unsigned __int64)(unsigned int)(-1640531535 * *v955) >> 17;
          v957 = v954 - *(_DWORD *)(a1 + 4 * v956);
          if ( v957 > 0xFFFF )
            LOWORD(v957) = -1;
          v955 = (_DWORD *)((char *)v955 + 1);
          *(_WORD *)(a1 + 2LL * (unsigned __int16)v954 + 0x20000) = v957;
          *(_DWORD *)(a1 + 4 * v956) = v954++;
        }
        while ( v954 < v950 );
        v886 = v1360;
        LODWORD(v946) = v1275;
      }
      v958 = v1305;
      *(_DWORD *)(a1 + 262176) = v950;
      v959 = v953;
      v1320 = v953;
      v960 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v1305) >> 17));
      if ( v960 >= v951 )
      {
        v961 = (char *)v1236 + SHIDWORD(v1323);
        v962 = v1347;
        v963 = 0;
        while ( 1 )
        {
          if ( v1225 <= 0 )
          {
LABEL_1743:
            v886 = v1360;
            v370 = v1280;
            v888 = SHIDWORD(v1323);
            v951 = v1215;
            v950 = v1245;
            goto LABEL_1744;
          }
          v964 = v1233;
          --v1225;
          if ( v960 >= (unsigned int)v948 )
          {
            v965 = (_DWORD *)((char *)v962 + v960 - (unsigned int)v948);
            if ( *(_WORD *)((char *)v1236 + v1207 - 1) != *(_WORD *)((char *)v965 + v1207 - v959 - 1) || *v965 != v1233 )
              goto LABEL_1734;
            v966 = 0;
            if ( v959 )
            {
              v967 = 0LL;
              v968 = (_DWORD)v1236 - (_DWORD)v958;
              v969 = v965 - 1;
              v970 = -(__int64)(v960 - (unsigned int)v948);
              if ( (char *)v1236 - v958 <= v970 )
                v968 = v970;
              v971 = v958 - (char *)v965;
              while ( v966 - v968 > 3 )
              {
                if ( *v969 != *(_DWORD *)((char *)v969 + v971) )
                {
                  _BitScanReverse(&v972, *v969 ^ *(_DWORD *)((char *)v969 + v971));
                  v966 -= (31 - v972) >> 3;
                  goto LABEL_1656;
                }
                v966 -= 4;
                v967 -= 4LL;
                --v969;
              }
              v973 = v968;
              if ( v967 > v968 )
              {
                v974 = &v961[v967 - 3];
                do
                {
                  if ( *v974 != *((_BYTE *)v962 + v960 - (unsigned int)v948 + v967 - 1) )
                    break;
                  --v966;
                  --v967;
                  --v974;
                }
                while ( v967 > v973 );
                v962 = v1347;
              }
LABEL_1656:
              v958 = v1305;
            }
            v975 = v958 + 4;
            v976 = v965 + 1;
            v977 = (_DWORD)v958 + 4;
            if ( (unsigned __int64)v975 < v1259 - 7 )
            {
              if ( *v976 != *v975 )
              {
                __asm { tzcnt   rcx, rax }
                v980 = (unsigned int)_RCX >> 3;
LABEL_1673:
                v958 = v1305;
                v983 = v980 - v966 + 4;
                if ( v983 > v1207 )
                {
                  v1207 = v983;
                  v1253 = v1245 - v960;
                  v1256 = (unsigned __int64)&v1305[v966];
                }
                v964 = v1233;
                goto LABEL_1734;
              }
              while ( 1 )
              {
                ++v975;
                ++v976;
                if ( (unsigned __int64)v975 >= v1259 - 7 )
                  break;
                if ( *v976 != *v975 )
                {
                  __asm { tzcnt   rax, rax }
                  v980 = ((unsigned int)_RAX >> 3) - v977 + (_DWORD)v975;
                  goto LABEL_1673;
                }
              }
            }
            if ( (unsigned __int64)v975 < v1259 - 3 && *(_DWORD *)v976 == *(_DWORD *)v975 )
            {
              v975 = (_QWORD *)((char *)v975 + 4);
              v976 = (_QWORD *)((char *)v976 + 4);
            }
            if ( (unsigned __int64)v975 < v1259 - 1 && *(_WORD *)v976 == *(_WORD *)v975 )
            {
              v975 = (_QWORD *)((char *)v975 + 2);
              v976 = (_QWORD *)((char *)v976 + 2);
            }
            if ( (unsigned __int64)v975 < v1259 && *(_BYTE *)v976 == *(_BYTE *)v975 )
              LODWORD(v975) = (_DWORD)v975 + 1;
            v980 = (_DWORD)v975 - v977;
            goto LABEL_1673;
          }
          v984 = v960 - (unsigned int)v946;
          v985 = (_DWORD *)(v984 + v949);
          if ( v960 > (int)v948 - 4 || *v985 != v1233 )
          {
            v949 = v1264;
            goto LABEL_1734;
          }
          v986 = v958 + 4;
          v987 = v985 + 1;
          v988 = &v958[(unsigned int)v948 - v960];
          v989 = (_DWORD)v958 + 4;
          if ( (unsigned __int64)v988 > v1259 )
            v988 = (char *)v1259;
          if ( v986 >= v988 - 7 )
            goto LABEL_1686;
          if ( *v987 == *(_QWORD *)v986 )
            break;
          __asm { tzcnt   rcx, rax }
          v992 = (unsigned int)_RCX >> 3;
LABEL_1696:
          v995 = v992 + 4;
          v996 = &v1305[v992 + 4];
          if ( v996 == v988 && (unsigned __int64)v988 < v1259 )
          {
            v997 = v962;
            v998 = &v1305[v995];
            if ( (unsigned __int64)v996 >= v1259 - 7 )
              goto LABEL_1701;
            if ( *v962 != *(_QWORD *)v996 )
            {
              __asm { tzcnt   rcx, rax }
              v1002 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v998 = v996 + 8;
              v997 = v962 + 1;
LABEL_1701:
              while ( (unsigned __int64)v998 < v1259 - 7 )
              {
                if ( *v997 != *(_QWORD *)v998 )
                {
                  __asm { tzcnt   rax, rax }
                  v1002 = ((unsigned int)_RAX >> 3) - (_DWORD)v996 + (_DWORD)v998;
                  goto LABEL_1716;
                }
                v998 += 8;
                ++v997;
              }
              if ( (unsigned __int64)v998 < v1259 - 3 && *(_DWORD *)v997 == *(_DWORD *)v998 )
              {
                v998 += 4;
                v997 = (_QWORD *)((char *)v997 + 4);
              }
              if ( (unsigned __int64)v998 < v1259 - 1 && *(_WORD *)v997 == *(_WORD *)v998 )
              {
                v998 += 2;
                v997 = (_QWORD *)((char *)v997 + 2);
              }
              if ( (unsigned __int64)v998 < v1259 && *(_BYTE *)v997 == *v998 )
                LODWORD(v998) = (_DWORD)v998 + 1;
              v1002 = (_DWORD)v998 - (_DWORD)v996;
            }
LABEL_1716:
            v995 += v1002;
          }
          v1004 = 0LL;
          v1005 = 0;
          if ( v1320 )
          {
            v1006 = v985 - 1;
            v1007 = (_DWORD)v1236 - (_DWORD)v1305;
            v1008 = -v984;
            if ( (char *)v1236 - v1305 <= v1008 )
              v1007 = v1008;
            v1009 = v1305 - (char *)v985;
            while ( v1005 - v1007 > 3 )
            {
              if ( *v1006 != *(_DWORD *)((char *)v1006 + v1009) )
              {
                _BitScanReverse(&v1010, *v1006 ^ *(_DWORD *)((char *)v1006 + v1009));
                v1005 -= (31 - v1010) >> 3;
                goto LABEL_1730;
              }
              v1005 -= 4;
              v1004 -= 4LL;
              --v1006;
            }
            v1011 = v1007;
            if ( v1004 > v1007 )
            {
              v1012 = (char *)v1236 + SHIDWORD(v1323) + v1004 - 3;
              do
              {
                if ( *v1012 != *(_BYTE *)(v1264 + v960 - v1275 + v1004 - 1) )
                  break;
                --v1005;
                --v1004;
                --v1012;
              }
              while ( v1004 > v1011 );
              v962 = v1347;
            }
          }
LABEL_1730:
          v958 = v1305;
          v1013 = v995 - v1005;
          v949 = v1264;
          v964 = v1233;
          if ( v1013 > v1207 )
          {
            v1207 = v1013;
            v1253 = v1245 - v960;
            v1256 = (unsigned __int64)&v1305[v1005];
          }
LABEL_1734:
          if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v960 + 0x20000) != 1 )
            goto LABEL_1739;
          v1014 = v960 - 1;
          if ( v963 )
          {
            if ( v963 != 2 )
              goto LABEL_1739;
          }
          else
          {
            if ( (_BYTE)v964 != HIBYTE(v964) || (unsigned __int16)v964 != HIWORD(v964) )
            {
              v963 = 1;
LABEL_1739:
              v1015 = v1215;
LABEL_1740:
              v960 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v960 + 0x20000);
              goto LABEL_1741;
            }
            v963 = 2;
            v1357 = (unsigned int)LZ4HC_countPattern(v958 + 4, v1259, v964) + 4LL;
          }
          v1015 = v1215;
          if ( v1014 < v1215 || (unsigned int)v948 - v960 < 3 )
            goto LABEL_1740;
          if ( v1014 >= (unsigned int)v948 )
          {
            v1033 = 0;
            v1034 = (unsigned __int64)v962 + v1014 - (unsigned int)v948;
          }
          else
          {
            v1033 = 1;
            v1034 = v949 + v1014 - v1275;
          }
          if ( *(_DWORD *)v1034 != v1233 )
            goto LABEL_1740;
          v1035 = v1259;
          if ( v1033 )
            v1035 = v1329;
          v1036 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1034 + 4), v1035, v1233) + 4LL;
          if ( v1033 )
          {
            if ( v1036 + v1034 == v1035 )
            {
              v1038 = LZ4HC_rotatePattern(v1036, v1233);
              v1036 += (unsigned int)LZ4HC_countPattern(v1039, v1259, v1038);
            }
            v1040 = v1264;
          }
          else
          {
            v1040 = v1037;
          }
          v1041 = LZ4HC_reverseCountPattern(v1034, v1040, v1233);
          v1043 = v1041;
          if ( !v1033 && (_QWORD *)(v1034 - v1041) == v962 && v1275 < (unsigned int)v948 )
          {
            v1044 = LZ4HC_rotatePattern(-v1041, v1042);
            v1043 += LZ4HC_reverseCountPattern(v1329, v1264, v1044);
          }
          v1015 = v1215;
          v1045 = v1014 - v1043;
          v960 = v1215;
          if ( v1045 > v1215 )
            v960 = v1045;
          v1046 = v1036 + v1014 - v960;
          if ( v1046 < v1357 || v1036 > v1357 )
          {
            v959 = v1320;
            if ( (unsigned int)v948 - v960 - 1 < 3 )
            {
              v960 = v948;
              goto LABEL_1742;
            }
            if ( v1320 )
              goto LABEL_1742;
            v958 = v1305;
            v1047 = v1357;
            if ( v1046 < v1357 )
              v1047 = v1036 + v1014 - v960;
            if ( v1207 < v1047 )
            {
              if ( (unsigned __int64)&v1305[v948 - v960 - (_QWORD)v962] > 0xFFFF )
                goto LABEL_1743;
              v1207 = v1047;
              v1253 = v1245 - v960;
              v1256 = (unsigned __int64)v1305;
            }
            v1048 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v960 + 0x20000);
            if ( v1048 > v960 )
              goto LABEL_1743;
            v960 -= v1048;
          }
          else
          {
            v960 = v948;
            if ( (unsigned int)v948 - (v1014 - (_DWORD)v1357 + (_DWORD)v1036) - 1 >= 3 )
              v960 = v1014 - v1357 + v1036;
          }
LABEL_1741:
          v959 = v1320;
LABEL_1742:
          v949 = v1264;
          v79 = v960 < v1015;
          LODWORD(v946) = v1275;
          v961 = (char *)v1236 + SHIDWORD(v1323);
          v958 = v1305;
          if ( v79 )
            goto LABEL_1743;
        }
        while ( 1 )
        {
          v986 += 8;
          ++v987;
          if ( v986 >= v988 - 7 )
            break;
          if ( *v987 != *(_QWORD *)v986 )
          {
            __asm { tzcnt   rax, rax }
            v992 = ((unsigned int)_RAX >> 3) - v989 + (_DWORD)v986;
            goto LABEL_1696;
          }
        }
LABEL_1686:
        if ( v986 < v988 - 3 && *(_DWORD *)v987 == *(_DWORD *)v986 )
        {
          v986 += 4;
          v987 = (_QWORD *)((char *)v987 + 4);
        }
        if ( v986 < v988 - 1 && *(_WORD *)v987 == *(_WORD *)v986 )
        {
          v986 += 2;
          v987 = (_QWORD *)((char *)v987 + 2);
        }
        if ( v986 < v988 && *(_BYTE *)v987 == *v986 )
          LODWORD(v986) = (_DWORD)v986 + 1;
        v992 = (_DWORD)v986 - v989;
        goto LABEL_1696;
      }
LABEL_1744:
      v1016 = v1225;
      if ( v1225 > 0 && v950 - v951 < 0xFFFF )
      {
        v1017 = *(unsigned int *)(v1368 + 262168);
        v1018 = *(_QWORD *)(v1368 + 262152);
        v1019 = v1017 + *(_QWORD *)(v1368 + 0x40000) - v1018;
        v1020 = *(_DWORD *)(v1368 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v958) >> 17));
        v1021 = v1020 + v951 - v1019;
        v1022 = v1245 - v1021;
        v1216 = v1021;
        if ( v1245 - v1021 <= 0xFFFF )
          break;
      }
LABEL_1821:
      v887 = v1342;
      v801 = HIDWORD(v1323);
      v807 = v1236;
      v808 = v1299;
      v809 = __PAIR64__(v1207, v1253);
      v1263 = __PAIR64__(v1207, v1253);
      v811 = v1207;
LABEL_1522:
      v1337 = v809;
      if ( v811 <= v801 )
      {
        v364 = v1267;
        v838 = v370;
        v1184 = v370;
        v1185 = v370;
        v1186 = v370 + 1;
        v1187 = (char *)v807 - v1267;
        if ( a7 && &v1186[v1187 / 0xFF + 8 + v1187] > v1277 )
        {
          v371 = v1277;
          goto LABEL_2057;
        }
        if ( v1187 < 0xF )
        {
          *v1184 = 16 * v1187;
        }
        else
        {
          v1188 = v1187 - 15;
          *v1184 = -16;
          if ( v1187 - 15 >= 0xFF )
          {
            v1189 = v1188 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v1189) = -1;
            memset_thunk_772440563353939046(v1186, SDWORD2(v1189), v1188 / 0xFF);
            v807 = v1236;
            v1186 += v1188 / 0xFF;
            v364 = v1267;
            LOBYTE(v1188) = v1188 / 0xFF + v1188;
          }
          *v1186++ = v1188;
          v801 = HIDWORD(v1323);
        }
        v1190 = v1186;
        do
        {
          *v1190 = *(_QWORD *)((char *)v1190 + v364 - v1186);
          ++v1190;
        }
        while ( v1190 < (_QWORD *)&v1186[v1187] );
        v1191 = &v1186[v1187];
        v1192 = v801 - 4LL;
        *v1191 = v1323;
        v370 = v1191 + 1;
        v1280 = v370;
        if ( a7 && &v370[v1192 / 0xFF + 6] > v1277 )
        {
          v371 = v1277;
LABEL_2057:
          v843 = (unsigned __int64)v1236;
          goto LABEL_1428;
        }
        v1193 = *v1185;
        if ( v1192 < 0xF )
        {
          *v1184 = v1192 + v1193;
        }
        else
        {
          v1194 = v801 - 19LL;
          *v1184 = v1193 + 15;
          if ( v1194 >= 0x1FE )
          {
            v1195 = v1194 / 0x1FE;
            v1194 %= 0x1FEuLL;
            do
            {
              *v370 = -1;
              v1196 = v370 + 1;
              *v1196 = -1;
              v370 = v1196 + 1;
              --v1195;
            }
            while ( v1195 );
          }
          if ( v1194 >= 0xFF )
          {
            LOBYTE(v1194) = v1194 + 1;
            *v370++ = -1;
          }
          *v370++ = v1194;
          v1280 = v370;
        }
        v371 = v1277;
        v366 = (char *)v807 + v801;
LABEL_2052:
        v364 = v366;
        v1267 = v366;
LABEL_1529:
        v369 = v1299;
        v11 = a1;
        v1236 = (unsigned int *)v366;
        goto LABEL_530;
      }
      v810 = v1256;
      if ( v887 < v807 && v1256 < (unsigned __int64)v807 + v1315 )
      {
        LOWORD(v1323) = v886;
        v807 = v887;
        v801 = HIDWORD(v886);
        v1397 = HIDWORD(v886);
        v1236 = v887;
      }
      if ( (__int64)(v1256 - (_QWORD)v807) >= 3 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (__int64)(v810 - (_QWORD)v807) < 18 )
            {
              v812 = v801;
              if ( v801 > 18 )
                v812 = 18;
              if ( (unsigned __int64)v807 + v812 > v810 + v811 - 4LL )
                v812 = v810 + v811 - (_DWORD)v807 - 4;
              v813 = v812 - v810 + (_DWORD)v807;
              if ( v813 > 0 )
              {
                v810 += v813;
                v811 -= v813;
                v1256 = v810;
                HIDWORD(v1263) = v811;
                v809 = v1263;
                v1337 = v1263;
              }
            }
            v1359 = v811;
            v814 = v810 + v811;
            if ( v814 > v808 )
            {
              v870 = 0;
              v871 = 0LL;
            }
            else
            {
              v815 = (unsigned int *)(v814 - 3);
              v1287 = v814 - 3;
              v1319 = v814 - 3;
              v1224 = v811;
              v816 = *(_DWORD *)(a1 + 262168);
              v817 = *(unsigned int *)(a1 + 262172);
              v818 = v817;
              v819 = *(_QWORD **)(a1 + 262152);
              v820 = *(_QWORD *)(a1 + 262160);
              v821 = *(_DWORD *)(a1 + 262176);
              v822 = v814 - 3 + v816 - (_DWORD)v819;
              v1367 = *(_QWORD *)(a1 + 262184);
              v1295 = v816;
              v823 = v816;
              v1328 = v819;
              v1274 = v822;
              v1252 = *(_DWORD *)(a1 + 262172);
              if ( (int)v817 + 0x10000 <= v822 )
                v818 = v822 - 0xFFFF;
              v1341 = *(_QWORD *)(a1 + 262160);
              LODWORD(v824) = v814 - 3 - v1256;
              v1243 = HIDWORD(v1384);
              v1232 = *v815;
              v1356 = v816 + v820 - v817;
              v825 = 0;
              v1214 = v818;
              v1206 = 0;
              v1370 = 0LL;
              v1314 = 0;
              if ( v821 >= v822 )
              {
                v827 = 1;
              }
              else
              {
                v826 = (_DWORD *)((char *)v819 + v821 - v823);
                v827 = 1;
                do
                {
                  v828 = (unsigned __int64)(unsigned int)(-1640531535 * *v826) >> 17;
                  v829 = v821 - *(_DWORD *)(a1 + 4 * v828);
                  if ( v829 > 0xFFFF )
                    LOWORD(v829) = -1;
                  v826 = (_DWORD *)((char *)v826 + 1);
                  *(_WORD *)(a1 + 2LL * (unsigned __int16)v821 + 0x20000) = v829;
                  *(_DWORD *)(a1 + 4 * v828) = v821++;
                }
                while ( v821 < v822 );
                v825 = 0;
                v820 = v1341;
              }
              v824 = (int)v824;
              v1306 = (int)v824;
              *(_DWORD *)(a1 + 262176) = v822;
              v1064 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v815) >> 17));
              if ( v1064 >= v818 )
              {
                v1065 = v1295;
                v1066 = v1328;
                v1287 = v814 - 3;
                while ( 1 )
                {
                  v1067 = 0LL;
                  v1068 = v825;
                  if ( v1243 <= 0 )
                  {
LABEL_1964:
                    v809 = v1337;
                    v370 = v1280;
                    goto LABEL_1965;
                  }
                  v1069 = v1232;
                  v1243 -= v827;
                  if ( v1064 >= v1065 )
                    break;
                  v1088 = v1064 - (unsigned int)v817;
                  v1089 = v1088;
                  v1090 = (_DWORD *)(v1088 + v820);
                  if ( v1064 <= v1065 - 4 && *v1090 == v1232 )
                  {
                    v1091 = v815 + 1;
                    v1092 = v1090 + 1;
                    v1093 = (_QWORD *)((char *)v815 + v1065 - v1064);
                    v1094 = (_DWORD)v815 + 4;
                    if ( (unsigned __int64)v1093 > v1259 )
                      v1093 = (_QWORD *)v1259;
                    if ( v1091 < (_QWORD *)((char *)v1093 - 7) )
                    {
                      if ( *v1092 != *v1091 )
                      {
                        __asm { tzcnt   rcx, rax }
                        v1097 = (unsigned int)_RCX >> 3;
LABEL_1881:
                        v1100 = v1097 + 4;
                        v1101 = (_QWORD *)((char *)v815 + (int)(v1097 + 4));
                        if ( v1101 == v1093 && (unsigned __int64)v1093 < v1259 )
                        {
                          v1102 = v1066;
                          v1103 = (_QWORD *)((char *)v815 + v1100);
                          if ( (unsigned __int64)v1101 >= v1259 - 7 )
                            goto LABEL_1886;
                          if ( *v1066 != *v1101 )
                          {
                            __asm { tzcnt   rcx, rax }
                            v1107 = (unsigned int)_RCX >> 3;
                          }
                          else
                          {
                            v1103 = v1101 + 1;
                            v1102 = v1066 + 1;
LABEL_1886:
                            while ( (unsigned __int64)v1103 < v1259 - 7 )
                            {
                              if ( *v1102 != *v1103 )
                              {
                                __asm { tzcnt   rax, rax }
                                v1107 = ((unsigned int)_RAX >> 3) - (_DWORD)v1101 + (_DWORD)v1103;
                                goto LABEL_1901;
                              }
                              ++v1103;
                              ++v1102;
                            }
                            if ( (unsigned __int64)v1103 < v1259 - 3 && *(_DWORD *)v1102 == *(_DWORD *)v1103 )
                            {
                              v1103 = (_QWORD *)((char *)v1103 + 4);
                              v1102 = (_QWORD *)((char *)v1102 + 4);
                            }
                            if ( (unsigned __int64)v1103 < v1259 - 1 && *(_WORD *)v1102 == *(_WORD *)v1103 )
                            {
                              v1103 = (_QWORD *)((char *)v1103 + 2);
                              v1102 = (_QWORD *)((char *)v1102 + 2);
                            }
                            if ( (unsigned __int64)v1103 < v1259 && *(_BYTE *)v1102 == *(_BYTE *)v1103 )
                              LODWORD(v1103) = (_DWORD)v1103 + 1;
                            v1107 = (_DWORD)v1103 - (_DWORD)v1101;
                          }
LABEL_1901:
                          v1100 += v1107;
                        }
                        v1109 = 0LL;
                        v1110 = 0;
                        if ( v1306 )
                        {
                          v1111 = v815 - 1;
                          v1112 = v1256 - (_DWORD)v815;
                          v1113 = -v1089;
                          if ( (__int64)(v1256 - (_QWORD)v815) <= v1113 )
                            v1112 = v1113;
                          v1114 = (char *)v1090 - (char *)v815;
                          while ( v1110 - v1112 > 3 )
                          {
                            if ( *v1111 != *(unsigned int *)((char *)v1111 + v1114) )
                            {
                              _BitScanReverse(&v1115, *v1111 ^ *(unsigned int *)((char *)v1111 + v1114));
                              v1110 -= (31 - v1115) >> 3;
                              goto LABEL_1915;
                            }
                            v1110 -= 4;
                            v1109 -= 4LL;
                            --v1111;
                          }
                          v1116 = v1112;
                          if ( v1109 > v1112 )
                          {
                            v1117 = (_BYTE *)(v1109 + v1256 + v1359 - 4);
                            do
                            {
                              if ( *v1117 != *(_BYTE *)(v1341 + v1064 - v1252 + v1109 - 1) )
                                break;
                              --v1110;
                              --v1109;
                              --v1117;
                            }
                            while ( v1109 > v1116 );
                            v1065 = v1295;
                          }
                        }
LABEL_1915:
                        v818 = v1214;
                        v1118 = v1100 - v1110;
                        v1069 = v1232;
                        if ( v1118 > v1224 )
                        {
                          v1224 = v1118;
                          v1314 = v1274 - v1064;
                          v1287 = (unsigned __int64)v815 + v1110;
                        }
                        v825 = v1206;
LABEL_1918:
                        v827 = 1;
                        goto LABEL_1919;
                      }
                      while ( 1 )
                      {
                        ++v1091;
                        ++v1092;
                        if ( v1091 >= (_QWORD *)((char *)v1093 - 7) )
                          break;
                        if ( *v1092 != *v1091 )
                        {
                          __asm { tzcnt   rax, rax }
                          v1097 = ((unsigned int)_RAX >> 3) - v1094 + (_DWORD)v1091;
                          goto LABEL_1881;
                        }
                      }
                    }
                    if ( v1091 < (_QWORD *)((char *)v1093 - 3) && *(_DWORD *)v1092 == *(_DWORD *)v1091 )
                    {
                      v1091 = (_QWORD *)((char *)v1091 + 4);
                      v1092 = (_QWORD *)((char *)v1092 + 4);
                    }
                    if ( v1091 < (_QWORD *)((char *)v1093 - 1) && *(_WORD *)v1092 == *(_WORD *)v1091 )
                    {
                      v1091 = (_QWORD *)((char *)v1091 + 2);
                      v1092 = (_QWORD *)((char *)v1092 + 2);
                    }
                    if ( v1091 < v1093 && *(_BYTE *)v1092 == *(_BYTE *)v1091 )
                      LODWORD(v1091) = v827 + (_DWORD)v1091;
                    v1097 = (_DWORD)v1091 - v1094;
                    goto LABEL_1881;
                  }
                  v818 = v1214;
LABEL_1919:
                  if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v1064 + 0x20000) != (_WORD)v827 )
                    goto LABEL_1925;
                  v1119 = v1064 - 1;
                  if ( v825 )
                  {
                    v1206 = v1068;
                    if ( v1068 != 2 )
                      goto LABEL_1925;
                  }
                  else
                  {
                    if ( (_BYTE)v1069 != HIBYTE(v1069) || (unsigned __int16)v1069 != HIWORD(v1069) )
                    {
                      v1206 = v827;
LABEL_1925:
                      v824 = v1306;
                      v1064 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v1064 + 0x20000);
                      goto LABEL_1951;
                    }
                    v1206 = 2;
                    v1370 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1319 + 4), v1259, v1069) + 4LL;
                  }
                  if ( v1119 < v818 || v1065 - v1119 - v827 < 3 )
                    goto LABEL_1925;
                  if ( v1119 >= v1065 )
                  {
                    v1120 = 0;
                    v1121 = (unsigned __int64)v1066 + v1119 - v1065;
                  }
                  else
                  {
                    v1120 = v827;
                    v1121 = v1341 + v1119 - v1252;
                  }
                  if ( *(_DWORD *)v1121 != v1232 )
                    goto LABEL_1925;
                  v1122 = v1259;
                  if ( v1120 )
                    v1122 = v1356;
                  v1123 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1121 + 4), v1122, v1232) + 4LL;
                  if ( v1120 )
                  {
                    if ( v1123 + v1121 == v1124 )
                    {
                      v1125 = LZ4HC_rotatePattern(v1123, v1232);
                      v1123 += (unsigned int)LZ4HC_countPattern(v1066, v1259, v1125);
                    }
                    v1126 = v1341;
                    v1127 = v1341;
                  }
                  else
                  {
                    v1126 = v1341;
                    v1127 = (unsigned __int64)v1066;
                  }
                  v1128 = LZ4HC_reverseCountPattern(v1121, v1127, v1232);
                  v1130 = v1128;
                  if ( !v1120 && (_QWORD *)(v1121 - v1128) == v1066 && v1252 < v1065 )
                  {
                    v1131 = LZ4HC_rotatePattern(-v1128, v1129);
                    v1132 = LZ4HC_reverseCountPattern(v1356, v1126, v1131);
                    v1130 = v1132 + v1133;
                  }
                  v1064 = v1214;
                  if ( v1119 - v1130 > v1214 )
                    v1064 = v1119 - v1130;
                  v1134 = v1123 + v1119 - v1064;
                  if ( v1134 >= v1370 && v1123 <= v1370 )
                  {
                    v824 = v1306;
                    v827 = 1;
                    v1064 = v1065;
                    if ( v1065 - (v1119 - (_DWORD)v1370 + (_DWORD)v1123) - 1 >= 3 )
                      v1064 = v1119 - v1370 + v1123;
                    goto LABEL_1950;
                  }
                  v824 = v1306;
                  v827 = 1;
                  if ( v1065 - v1064 - 1 < 3 )
                  {
                    v1064 = v1065;
LABEL_1950:
                    v818 = v1214;
                    goto LABEL_1951;
                  }
                  if ( v1306 )
                    goto LABEL_1950;
                  v815 = (unsigned int *)v1319;
                  v1135 = v1370;
                  if ( v1134 < v1370 )
                    v1135 = v1134;
                  if ( v1224 < v1135 )
                  {
                    if ( v1065 + v1319 - v1064 - (unsigned __int64)v1066 > 0xFFFF )
                    {
                      v818 = v1214;
                      goto LABEL_1964;
                    }
                    v1224 = v1135;
                    v1314 = v1274 - v1064;
                    v1287 = v1319;
                  }
                  v818 = v1214;
                  v1136 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v1064 + 0x20000);
                  if ( v1136 > v1064 )
                    goto LABEL_1964;
                  v1064 -= v1136;
LABEL_1951:
                  v825 = v1206;
                  v815 = (unsigned int *)v1319;
                  v820 = v1341;
                  LODWORD(v817) = v1252;
                  if ( v1064 < v818 )
                    goto LABEL_1964;
                }
                v1070 = (_DWORD *)((char *)v1066 + v1064 - v1065);
                if ( *(_WORD *)(v1256 + v1224 - 1) != *(_WORD *)((char *)v1070 + v1224 - v824 - 1) || *v1070 != v1232 )
                  goto LABEL_1918;
                v668 = v824 == 0;
                v1071 = 0;
                if ( !v668 )
                {
                  v1072 = -(__int64)(v1064 - v1065);
                  v1073 = v815 - 1;
                  v1074 = v1256 - (_DWORD)v815;
                  if ( (__int64)(v1256 - (_QWORD)v815) <= v1072 )
                    v1074 = v1072;
                  v1075 = (char *)v1070 - (char *)v815;
                  while ( v1071 - v1074 > 3 )
                  {
                    if ( *v1073 != *(unsigned int *)((char *)v1073 + v1075) )
                    {
                      _BitScanReverse(&v1076, *v1073 ^ *(unsigned int *)((char *)v1073 + v1075));
                      v1071 -= (31 - v1076) >> 3;
                      goto LABEL_1842;
                    }
                    v1071 -= 4;
                    v1067 -= 4LL;
                    --v1073;
                  }
                  v1077 = v1074;
                  if ( v1067 > v1074 )
                  {
                    v1078 = (_BYTE *)(v1067 + v1256 + v1359 - 4);
                    do
                    {
                      if ( *v1078 != *((_BYTE *)v1066 + v1064 - v1065 + v1067 - 1) )
                        break;
                      --v1071;
                      --v1067;
                      --v1078;
                    }
                    while ( v1067 > v1077 );
                    v1066 = v1328;
                  }
                }
LABEL_1842:
                v1079 = v815 + 1;
                v1080 = v1070 + 1;
                v1081 = (_DWORD)v815 + 4;
                if ( (unsigned __int64)(v815 + 1) < v1259 - 7 )
                {
                  if ( *v1080 != *v1079 )
                  {
                    __asm { tzcnt   rcx, rax }
                    v1084 = (unsigned int)_RCX >> 3;
LABEL_1858:
                    v825 = v1206;
                    v1069 = v1232;
                    v1087 = v1084 - v1071 + 4;
                    v827 = 1;
                    if ( v1087 > v1224 )
                    {
                      v1224 = v1087;
                      v1314 = v1274 - v1064;
                      v1287 = (unsigned __int64)v815 + v1071;
                    }
                    goto LABEL_1919;
                  }
                  while ( 1 )
                  {
                    ++v1079;
                    ++v1080;
                    if ( (unsigned __int64)v1079 >= v1259 - 7 )
                      break;
                    if ( *v1080 != *v1079 )
                    {
                      __asm { tzcnt   rax, rax }
                      v1084 = ((unsigned int)_RAX >> 3) - v1081 + (_DWORD)v1079;
                      goto LABEL_1858;
                    }
                  }
                }
                if ( (unsigned __int64)v1079 < v1259 - 3 && *(_DWORD *)v1080 == *(_DWORD *)v1079 )
                {
                  v1079 = (_QWORD *)((char *)v1079 + 4);
                  v1080 = (_QWORD *)((char *)v1080 + 4);
                }
                if ( (unsigned __int64)v1079 < v1259 - 1 && *(_WORD *)v1080 == *(_WORD *)v1079 )
                {
                  v1079 = (_QWORD *)((char *)v1079 + 2);
                  v1080 = (_QWORD *)((char *)v1080 + 2);
                }
                if ( (unsigned __int64)v1079 < v1259 && *(_BYTE *)v1080 == *(_BYTE *)v1079 )
                  LODWORD(v1079) = (_DWORD)v1079 + 1;
                v1084 = (_DWORD)v1079 - v1081;
                goto LABEL_1858;
              }
LABEL_1965:
              v1137 = v1243;
              if ( v1243 > 0 && v1274 - v818 < 0xFFFF )
              {
                v1138 = *(_QWORD *)(v1367 + 262152);
                v1139 = *(unsigned int *)(v1367 + 262168);
                v1331 = v1139 + *(_QWORD *)(v1367 + 0x40000) - v1138;
                v1140 = *(_DWORD *)(v1367 + 4 * ((unsigned __int64)(-1640531535 * *v815) >> 17));
                v1141 = v818 + v1140 - v1331;
                v1142 = v1274 - v1141;
                if ( v1274 - v1141 <= 0xFFFF )
                {
                  v1143 = v1139 + *(_QWORD *)(v1367 + 0x40000) - v1138;
                  while ( 1 )
                  {
                    v1246 = v1137 - v827;
                    if ( !v1137 )
                    {
LABEL_2006:
                      v809 = v1337;
                      v370 = v1280;
                      goto LABEL_2007;
                    }
                    v1144 = v1140 - v1139;
                    v1145 = v1144 + v1138;
                    if ( *(_DWORD *)(v1144 + v1138) == v1232 )
                      break;
LABEL_2005:
                    v1137 = v1246;
                    v1167 = *(unsigned __int16 *)(v1367 + 2LL * (unsigned __int16)v1140 + 0x20000);
                    v1141 -= v1167;
                    v1140 -= v1167;
                    v1142 = v1274 - v1141;
                    if ( v1274 - v1141 > 0xFFFF )
                      goto LABEL_2006;
                  }
                  v1146 = (_QWORD *)(v1145 + 4);
                  v1147 = v1319 + v1143 - v1140;
                  if ( v1147 > v1259 )
                    v1147 = v1259;
                  v1148 = (_QWORD *)(v1319 + 4);
                  v1149 = v1319 + 4;
                  if ( v1319 + 4 < v1147 - 7 )
                  {
                    if ( *v1146 != *v1148 )
                    {
                      __asm { tzcnt   rcx, rax }
                      v1152 = (unsigned int)_RCX >> 3;
LABEL_1989:
                      v1155 = v1152 + 4;
                      v1156 = 0;
                      if ( v1306 )
                      {
                        v1157 = -v1144;
                        v1158 = 0LL;
                        v1159 = v1256 - v1319;
                        if ( (__int64)(v1256 - v1319) <= v1157 )
                          v1159 = v1157;
                        v1160 = (_DWORD *)(v1319 - 4);
                        v1161 = v1145 - v1319;
                        while ( v1156 - v1159 > 3 )
                        {
                          if ( *v1160 != *(_DWORD *)((char *)v1160 + v1161) )
                          {
                            _BitScanReverse(&v1162, *v1160 ^ *(_DWORD *)((char *)v1160 + v1161));
                            v1156 -= (31 - v1162) >> 3;
                            goto LABEL_2002;
                          }
                          v1156 -= 4;
                          v1158 -= 4LL;
                          --v1160;
                        }
                        v1163 = v1159;
                        if ( v1158 > v1159 )
                        {
                          v1164 = (_BYTE *)(v1158 + v1256 + v1359 - 4);
                          v1165 = (_BYTE *)(v1158
                                          + v1140
                                          - (unsigned __int64)*(unsigned int *)(v1367 + 262168)
                                          + *(_QWORD *)(v1367 + 262152)
                                          - 1LL);
                          do
                          {
                            if ( *v1164 != *v1165 )
                              break;
                            --v1156;
                            --v1158;
                            --v1165;
                            --v1164;
                          }
                          while ( v1158 > v1163 );
                          v1143 = v1331;
                        }
                      }
LABEL_2002:
                      v1139 = *(unsigned int *)(v1367 + 262168);
                      v1166 = v1155 - v1156;
                      v1138 = *(_QWORD *)(v1367 + 262152);
                      if ( v1166 > v1224 )
                      {
                        v1287 = v1319 + v1156;
                        v1224 = v1166;
                        v1314 = v1142;
                      }
                      v827 = 1;
                      goto LABEL_2005;
                    }
                    while ( 1 )
                    {
                      ++v1148;
                      ++v1146;
                      if ( (unsigned __int64)v1148 >= v1147 - 7 )
                        break;
                      if ( *v1146 != *v1148 )
                      {
                        __asm { tzcnt   rax, rax }
                        v1152 = ((unsigned int)_RAX >> 3) - v1149 + (_DWORD)v1148;
                        goto LABEL_1989;
                      }
                    }
                  }
                  if ( (unsigned __int64)v1148 < v1147 - 3 && *(_DWORD *)v1146 == *(_DWORD *)v1148 )
                  {
                    v1148 = (_QWORD *)((char *)v1148 + 4);
                    v1146 = (_QWORD *)((char *)v1146 + 4);
                  }
                  if ( (unsigned __int64)v1148 < v1147 - 1 && *(_WORD *)v1146 == *(_WORD *)v1148 )
                  {
                    v1148 = (_QWORD *)((char *)v1148 + 2);
                    v1146 = (_QWORD *)((char *)v1146 + 2);
                  }
                  if ( (unsigned __int64)v1148 < v1147 && *(_BYTE *)v1146 == *(_BYTE *)v1148 )
                    LODWORD(v1148) = (_DWORD)v1148 + 1;
                  v1152 = (_DWORD)v1148 - v1149;
                  goto LABEL_1989;
                }
              }
LABEL_2007:
              v811 = HIDWORD(v1263);
              v807 = v1236;
              v810 = v1256;
              v808 = v1299;
              v871 = __PAIR64__(v1224, v1314);
              v870 = v1224;
            }
            if ( v870 <= v811 )
            {
              if ( v810 < (unsigned __int64)v807 + v1397 )
                v1397 = v810 - (_DWORD)v807;
              v843 = (unsigned __int64)v1236;
              v364 = v1267;
              v838 = v370;
              v880 = v370;
              v881 = v370;
              v882 = (char *)v1236 - v1267;
              v883 = v370 + 1;
              if ( a7 && (v371 = v1277, &v883[v882 / 0xFF + 8 + v882] > v1277) )
              {
                v801 = v1397;
              }
              else
              {
                if ( v882 < 0xF )
                {
                  *v880 = 16 * v882;
                }
                else
                {
                  v884 = v882 - 15;
                  *v880 = -16;
                  if ( v882 - 15 >= 0xFF )
                  {
                    v1182 = v884 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v1182) = -1;
                    memset_thunk_772440563353939046(v883, SDWORD2(v1182), v884 / 0xFF);
                    v810 = v1256;
                    v883 += v884 / 0xFF;
                    v364 = v1267;
                    v881 = v880;
                    LOBYTE(v884) = v884 / 0xFF + v884;
                  }
                  *v883++ = v884;
                }
                v830 = v883;
                do
                {
                  *v830 = *(_QWORD *)((char *)v830 + v364 - v883);
                  ++v830;
                }
                while ( v830 < (_QWORD *)&v883[v882] );
                v831 = &v883[v882];
                v801 = v1397;
                v371 = v1277;
                *v831 = v1323;
                v832 = v831 + 1;
                v833 = v1397 - 4LL;
                if ( a7 && &v832[v833 / 0xFF + 6] > v1277 )
                  goto LABEL_2057;
                v834 = *v881;
                if ( v833 < 0xF )
                {
                  *v880 = v833 + v834;
                }
                else
                {
                  v835 = v1397 - 19LL;
                  *v880 = v834 + 15;
                  if ( v835 >= 0x1FE )
                  {
                    v836 = v835 / 0x1FE;
                    v835 %= 0x1FEuLL;
                    do
                    {
                      *v832 = -1;
                      v837 = v832 + 1;
                      *v837 = -1;
                      v832 = v837 + 1;
                      --v836;
                    }
                    while ( v836 );
                  }
                  if ( v835 >= 0xFF )
                  {
                    LOBYTE(v835) = v835 + 1;
                    *v832++ = -1;
                  }
                  *v832++ = v835;
                }
                v838 = v832;
                v364 = (char *)v1236 + v1397;
                v839 = v832;
                v1267 = v364;
                v840 = v832;
                v841 = v810 - (_QWORD)v364;
                v842 = v832 + 1;
                v843 = v810;
                v1236 = (unsigned int *)v810;
                if ( a7 && &v842[v841 / 0xFF + 8 + v841] > v1277 )
                  goto LABEL_1427;
                if ( v841 >= 0xF )
                {
                  v859 = v841 - 15;
                  *v839 = -16;
                  if ( v841 - 15 >= 0xFF )
                  {
                    v1183 = v859 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v1183) = -1;
                    memset_thunk_772440563353939046(v842, SDWORD2(v1183), v859 / 0xFF);
                    v810 = v1256;
                    v842 += v859 / 0xFF;
                    v840 = v839;
                    LOBYTE(v859) = v859 / 0xFF + v859;
                  }
                  *v842++ = v859;
                }
                else
                {
                  *v839 = 16 * v841;
                }
                v844 = v842;
                do
                {
                  *v844 = *(_QWORD *)((char *)v844 + v364 - v842);
                  ++v844;
                }
                while ( v844 < (_QWORD *)&v842[v841] );
                v845 = &v842[v841];
                v371 = v1277;
                *v845 = v1263;
                v370 = v845 + 1;
                v846 = SHIDWORD(v1263) - 4LL;
                v1280 = v370;
                if ( !a7 || &v370[v846 / 0xFF + 6] <= v1277 )
                {
                  v847 = *v840;
                  if ( v846 < 0xF )
                  {
                    *v839 = v846 + v847;
                  }
                  else
                  {
                    v848 = SHIDWORD(v1263) - 19LL;
                    *v839 = v847 + 15;
                    if ( v848 >= 0x1FE )
                    {
                      v849 = v848 / 0x1FE;
                      v848 %= 0x1FEuLL;
                      do
                      {
                        *v370 = -1;
                        v850 = v370 + 1;
                        *v850 = -1;
                        v370 = v850 + 1;
                        --v849;
                      }
                      while ( v849 );
                    }
                    if ( v848 >= 0xFF )
                    {
                      LOBYTE(v848) = v848 + 1;
                      *v370++ = -1;
                    }
                    *v370++ = v848;
                    v1280 = v370;
                  }
                  v366 = (char *)(v810 + SHIDWORD(v1263));
                  goto LABEL_2052;
                }
                v843 = (unsigned __int64)v1236;
LABEL_1427:
                LOWORD(v1323) = v809;
                v801 = HIDWORD(v809);
              }
LABEL_1428:
              if ( a7 != 2 )
                goto LABEL_25;
              v851 = v843 - (_QWORD)v364;
              v370 = v838;
              v852 = (v843 - (unsigned __int64)v364 + 240) / 0xFF + v843 - (_QWORD)v364 + 1;
              if ( &v838[v852] <= v371 - 3 )
              {
                if ( v801 > (unsigned __int64)(255 * (&v371[-v852 - 3] - v838) + 18) )
                  v801 = 255 * ((_DWORD)v371 - 3 - v852 - (_DWORD)v838) + 18;
                v1398 = v801;
                if ( (__int64)&v371[v801 - v852 - (_QWORD)v838 + 2] >= 12 )
                {
                  v853 = v838 + 1;
                  if ( v851 >= 0xF )
                  {
                    v860 = v851 - 15;
                    *v838 = -16;
                    if ( v851 - 15 >= 0xFF )
                    {
                      v1197 = v860 * (unsigned __int128)0x8080808080808081uLL;
                      BYTE8(v1197) = -1;
                      memset_thunk_772440563353939046(v838 + 1, SDWORD2(v1197), v860 / 0xFF);
                      v853 += v860 / 0xFF;
                      v364 = v1267;
                      LOBYTE(v860) = v860 / 0xFF + v860;
                    }
                    *v853++ = v860;
                    v801 = v1398;
                  }
                  else
                  {
                    *v838 = 16 * v851;
                  }
                  v854 = v853;
                  v855 = v364 - v853;
                  do
                  {
                    *v854 = *(_QWORD *)((char *)v854 + v855);
                    ++v854;
                  }
                  while ( v854 < (_QWORD *)&v853[v851] );
                  v856 = &v853[v851];
                  v857 = v801 - 4LL;
                  *v856 = v1323;
                  v370 = v856 + 1;
                  v858 = *v838;
                  if ( v857 < 0xF )
                  {
                    *v838 = v857 + v858;
                  }
                  else
                  {
                    v786 = v801 - 19LL;
                    *v838 = v858 + 15;
                    if ( v786 >= 0x1FE )
                    {
                      v785 = v786 / 0x1FE;
                      v786 %= 0x1FEuLL;
                      do
                      {
                        *v370 = -1;
                        v784 = v370 + 1;
                        *v784 = -1;
                        v370 = v784 + 1;
                        --v785;
                      }
                      while ( v785 );
                    }
                    if ( v786 >= 0xFF )
                    {
                      LOBYTE(v786) = v786 + 1;
                      *v370++ = -1;
                    }
                    *v370++ = v786;
                  }
                  v364 = (char *)v1236 + v801;
                  v1267 = v364;
                }
              }
LABEL_1331:
              v368 = v1364;
LABEL_1332:
              v787 = v368 - v364;
              v788 = v370;
              if ( a7 == 2 )
              {
                v371 += 5;
LABEL_1334:
                if ( &v370[(v787 + 240) / 0xFF + 1 + v787] > v371 )
                {
                  if ( a7 == 1 )
                    goto LABEL_25;
                  v787 = v371 - v370 - 1 - ((unsigned __int64)(v371 - v370 - 1 + 241) >> 8);
                }
              }
              else if ( a7 )
              {
                goto LABEL_1334;
              }
              v555 = v787 + (_DWORD)v364;
              if ( v787 < 0xF )
              {
                *v370 = 16 * v787;
              }
              else
              {
                *v370 = -16;
                v789 = v787 - 15;
                ++v370;
                if ( v787 - 15 >= 0xFF )
                {
                  v1198 = v789 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v1198) = -1;
                  memset_thunk_772440563353939046(v370, SDWORD2(v1198), v789 / 0xFF);
                  v370 += v789 / 0xFF;
                  v364 = v1267;
                  LOBYTE(v789) = v789 / 0xFF + v789;
                }
                v788 = v370;
                *v370 = v789;
              }
              v557 = (_DWORD)v370 + 1;
              memmove(v788 + 1, v364, v787);
              v558 = v787 - (_DWORD)a3;
              goto LABEL_861;
            }
            v801 = v1397;
            v872 = (unsigned __int64)v807 + v1397;
            if ( v1287 < v872 + 3 )
              break;
            if ( v810 < v872 )
            {
              if ( (__int64)(v810 - (_QWORD)v807) >= 18 )
              {
                v801 = v810 - (_DWORD)v807;
                v1397 = v810 - (_DWORD)v807;
              }
              else
              {
                if ( v1397 > 18 )
                  v801 = 18;
                v1397 = v801;
                if ( (unsigned __int64)v807 + v801 > v810 + v811 - 4LL )
                {
                  v801 = v810 + v811 - (_DWORD)v807 - 4;
                  v1397 = v801;
                }
                v874 = (_DWORD)v807 + v801 - v810;
                if ( v874 > 0 )
                {
                  v1256 = v874 + v810;
                  HIDWORD(v1263) = v811 - v874;
                  v809 = v1263;
                }
              }
            }
            v875 = (char *)v807 - v1267;
            v838 = v370;
            v876 = v370;
            v877 = v370;
            v878 = v370 + 1;
            if ( a7 )
            {
              v371 = v1277;
              if ( &v878[v875 / 0xFF + 8 + v875] > v1277 )
                goto LABEL_2056;
            }
            if ( v875 < 0xF )
            {
              *v876 = 16 * v875;
            }
            else
            {
              v879 = v875 - 15;
              *v876 = -16;
              if ( v875 - 15 >= 0xFF )
              {
                v1168 = v879 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v1168) = -1;
                memset_thunk_772440563353939046(v878, SDWORD2(v1168), v879 / 0xFF);
                v878 += v879 / 0xFF;
                v876 = v838;
                v879 %= 0xFFuLL;
                v877 = v838;
              }
              *v878++ = v879;
            }
            v799 = v878;
            do
            {
              *v799 = *(_QWORD *)((char *)v799 + v1267 - v878);
              ++v799;
            }
            while ( v799 < (_QWORD *)&v878[v875] );
            v800 = &v878[v875];
            v801 = v1397;
            *v800 = v1323;
            v370 = v800 + 1;
            v802 = v1397 - 4LL;
            v1280 = v370;
            if ( a7 )
            {
              v371 = v1277;
              if ( &v370[v802 / 0xFF + 6] > v1277 )
                goto LABEL_2055;
            }
            v803 = *v877;
            if ( v802 < 0xF )
            {
              *v876 = v803 + v802;
            }
            else
            {
              v804 = v1397 - 19LL;
              *v876 = v803 + 15;
              if ( v804 >= 0x1FE )
              {
                v805 = v804 / 0x1FE;
                v804 %= 0x1FEuLL;
                do
                {
                  *v370 = -1;
                  v806 = v370 + 1;
                  *v806 = -1;
                  v370 = v806 + 1;
                  --v805;
                }
                while ( v805 );
              }
              if ( v804 >= 0xFF )
              {
                LOBYTE(v804) = v804 + 1;
                *v370++ = -1;
              }
              *v370++ = v804;
              v1280 = v370;
            }
            v807 = (unsigned int *)v1256;
            v808 = v1299;
            v1323 = v809;
            v809 = v871;
            v801 = HIDWORD(v1323);
            v1267 = (char *)v1236 + v1397;
            v1263 = v871;
            v810 = v1287;
            v811 = HIDWORD(v871);
            v1256 = v1287;
            v1236 = v807;
            v1337 = v871;
            v1397 = HIDWORD(v1323);
          }
          if ( v1287 >= v872 )
            break;
          v1263 = v871;
          v810 = v1287;
          v811 = HIDWORD(v871);
          v809 = v871;
          v1256 = v1287;
          v1337 = v871;
        }
        if ( v810 < v872 )
        {
          v873 = (_DWORD)v807 + v1397 - v810;
          v1256 = v873 + v810;
          if ( v811 - v873 >= 4 )
          {
            HIDWORD(v1263) = v811 - v873;
            v809 = v1263;
          }
          else
          {
            v1256 = v1287;
            v809 = v871;
          }
        }
        v1169 = (char *)v807 - v1267;
        v838 = v370;
        v1170 = v370;
        v1171 = v370;
        v1172 = v370 + 1;
        if ( a7 )
        {
          v371 = v1277;
          if ( &v1172[v1169 / 0xFF + 8 + v1169] > v1277 )
          {
LABEL_2056:
            v364 = v1267;
            goto LABEL_2057;
          }
        }
        if ( v1169 < 0xF )
        {
          *v1170 = 16 * v1169;
        }
        else
        {
          v1173 = v1169 - 15;
          *v1170 = -16;
          if ( v1169 - 15 >= 0xFF )
          {
            v1174 = v1173 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v1174) = -1;
            memset_thunk_772440563353939046(v1172, SDWORD2(v1174), v1173 / 0xFF);
            v1172 += v1173 / 0xFF;
            v1170 = v838;
            v801 = v1397;
            LOBYTE(v1173) = v1173 / 0xFF + v1173;
            v1171 = v838;
          }
          *v1172++ = v1173;
        }
        v1175 = v1172;
        do
        {
          *v1175 = *(_QWORD *)((char *)v1175 + v1267 - v1172);
          ++v1175;
        }
        while ( v1175 < (_QWORD *)&v1172[v1169] );
        v1176 = &v1172[v1169];
        v1177 = v801 - 4LL;
        *v1176 = v1323;
        v370 = v1176 + 1;
        v1280 = v370;
        if ( a7 )
        {
          v371 = v1277;
          if ( &v370[v1177 / 0xFF + 6] > v1277 )
          {
LABEL_2055:
            v843 = (unsigned __int64)v1236;
            v364 = v1267;
            goto LABEL_1428;
          }
        }
        v1178 = *v1171;
        if ( v1177 < 0xF )
        {
          *v1170 = v1177 + v1178;
        }
        else
        {
          v1179 = v801 - 19LL;
          *v1170 = v1178 + 15;
          if ( v1179 >= 0x1FE )
          {
            v1180 = v1179 / 0x1FE;
            v1179 %= 0x1FEuLL;
            do
            {
              *v370 = -1;
              v1181 = v370 + 1;
              *v1181 = -1;
              v370 = v1181 + 1;
              --v1180;
            }
            while ( v1180 );
          }
          if ( v1179 >= 0xFF )
          {
            LOBYTE(v1179) = v1179 + 1;
            *v370++ = -1;
          }
          *v370++ = v1179;
          v1280 = v370;
        }
        v887 = (unsigned int *)v1256;
        v886 = v809;
        v1267 = (char *)v1236 + v801;
        v807 = (unsigned int *)v1287;
        v1236 = (unsigned int *)v1287;
        v1323 = v871;
        v1360 = v809;
        v1315 = HIDWORD(v809);
        goto LABEL_1519;
      }
      v807 = (unsigned int *)v1256;
      v1236 = (unsigned int *)v1256;
      v1323 = v809;
    }
    v1330 = (char *)v1236 + v888;
    v1023 = (char *)v1236 + v888;
    while ( 1 )
    {
      v1024 = v1016--;
      v1226 = v1016;
      if ( !v1024 )
      {
LABEL_1820:
        v886 = v1360;
        v370 = v1280;
        goto LABEL_1821;
      }
      v1025 = v1020 + v1018 - v1017;
      if ( *(_DWORD *)v1025 == v1233 )
        break;
LABEL_1819:
      v1063 = *(unsigned __int16 *)(v1368 + 2LL * (unsigned __int16)v1020 + 0x20000);
      v1020 -= v1063;
      v1022 = v1245 - (v1216 - v1063);
      v1216 -= v1063;
      if ( v1022 > 0xFFFF )
        goto LABEL_1820;
    }
    v1026 = v958 + 4;
    v1027 = (_QWORD *)(v1025 + 4);
    v1028 = (unsigned __int64)&v1371[v1019 - v1020];
    v1029 = (_DWORD)v958 + 4;
    if ( v1028 > v1259 )
      v1028 = v1259;
    if ( (unsigned __int64)v1026 < v1028 - 7 )
    {
      if ( *v1027 != *v1026 )
      {
        __asm { tzcnt   rcx, rax }
        v1032 = (unsigned int)_RCX >> 3;
LABEL_1803:
        v1051 = v1032 + 4;
        v1052 = 0;
        if ( v1320 )
        {
          v1053 = (_DWORD)v1236 - (_DWORD)v1305;
          v1054 = -v1025;
          v1055 = 0LL;
          if ( (char *)v1236 - v1305 <= v1018 - v1025 )
            v1053 = v1018 - v1025;
          v1056 = (_DWORD *)(v1025 - 4);
          v1057 = &v1305[v1054];
          while ( v1052 - v1053 > 3 )
          {
            if ( *v1056 != *(_DWORD *)((char *)v1056 + (_QWORD)v1057) )
            {
              _BitScanReverse(&v1058, *v1056 ^ *(_DWORD *)((char *)v1056 + (_QWORD)v1057));
              v1052 -= (31 - v1058) >> 3;
              goto LABEL_1816;
            }
            v1052 -= 4;
            v1055 -= 4LL;
            --v1056;
          }
          v1059 = v1053;
          if ( v1055 > v1053 )
          {
            v1060 = (_BYTE *)(v1055 + v1020 + v1018 - *(unsigned int *)(v1368 + 262168) - 1);
            v1061 = &v1023[v1055 - 3];
            do
            {
              if ( *v1061 != *v1060 )
                break;
              --v1052;
              --v1055;
              --v1061;
              --v1060;
            }
            while ( v1055 > v1059 );
            v1023 = v1330;
          }
        }
LABEL_1816:
        v958 = v1305;
        v1062 = v1051 - v1052;
        v1016 = v1226;
        if ( v1062 > v1207 )
        {
          v1207 = v1062;
          v1256 = (unsigned __int64)&v1305[v1052];
          v1253 = v1022;
        }
        v1017 = *(unsigned int *)(v1368 + 262168);
        goto LABEL_1819;
      }
      while ( 1 )
      {
        ++v1026;
        ++v1027;
        if ( (unsigned __int64)v1026 >= v1028 - 7 )
          break;
        if ( *v1027 != *v1026 )
        {
          __asm { tzcnt   rax, rax }
          v1032 = ((unsigned int)_RAX >> 3) - v1029 + (_DWORD)v1026;
          goto LABEL_1803;
        }
      }
    }
    if ( (unsigned __int64)v1026 < v1028 - 3 && *(_DWORD *)v1027 == *(_DWORD *)v1026 )
    {
      v1026 = (_QWORD *)((char *)v1026 + 4);
      v1027 = (_QWORD *)((char *)v1027 + 4);
    }
    if ( (unsigned __int64)v1026 < v1028 - 1 && *(_WORD *)v1027 == *(_WORD *)v1026 )
    {
      v1026 = (_QWORD *)((char *)v1026 + 2);
      v1027 = (_QWORD *)((char *)v1027 + 2);
    }
    if ( (unsigned __int64)v1026 < v1028 && *(_BYTE *)v1027 == *(_BYTE *)v1026 )
      LODWORD(v1026) = (_DWORD)v1026 + 1;
    v1032 = (_DWORD)v1026 - v1029;
    goto LABEL_1803;
  }
  memmove((void *)a1, *(const void **)(a1 + 262184), 0x40030uLL);
  LZ4HC_setExternalDict(v11, a2);
  *(_WORD *)(v11 + 262180) = 9;
  if ( (a7 != 2 || a5 >= 1) && *a4 <= 0x7E000000 )
  {
    v25 = a2;
    *(_QWORD *)(v11 + 0x40000) += (int)*a4;
    v26 = a2;
    v27 = (int)*a4;
    v28 = (char *)a2 + v27;
    v29 = (unsigned __int64)a2 + v27 - 12;
    v30 = (unsigned __int64)&v8[a5 - 5];
    v31 = (__int64)a2 + v27 - 5;
    if ( a7 != 2 )
      v30 = (unsigned __int64)&v8[a5];
    v1235 = a2;
    v1255 = v30;
    v32 = v8;
    v1258 = v25;
    v1348 = v28;
    v1317 = v29;
    v1260 = v31;
    v1322 = v8;
    v1266 = 0LL;
    v1283 = 0LL;
    *a4 = 0;
    if ( (int)v27 < 13 )
    {
LABEL_21:
      v33 = v28 - (char *)v25;
      v34 = v32;
      if ( a7 == 2 )
      {
        v30 += 5LL;
      }
      else if ( !a7 )
      {
LABEL_856:
        v555 = v33 + (_DWORD)v25;
        if ( v33 < 0xF )
        {
          *v32 = 16 * v33;
        }
        else
        {
          *v32 = -16;
          v556 = v33 - 15;
          ++v32;
          if ( v33 - 15 >= 0xFF )
          {
            v916 = v556 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v916) = -1;
            memset_thunk_772440563353939046(v32, SDWORD2(v916), v556 / 0xFF);
            v32 += v556 / 0xFF;
            v25 = v1258;
            LOBYTE(v556) = v556 / 0xFF + v556;
          }
          v34 = v32;
          *v32 = v556;
        }
        v557 = (_DWORD)v32 + 1;
        memmove(v34 + 1, v25, v33);
        v558 = v33 - (_DWORD)v8;
LABEL_861:
        v35 = v557 + v558;
        *a4 = v555 - v1387;
        goto LABEL_862;
      }
      if ( (unsigned __int64)&v32[(v33 + 240) / 0xFF + 1 + v33] > v30 )
      {
        if ( a7 == 1 )
        {
LABEL_25:
          v35 = 0;
LABEL_862:
          if ( v35 <= 0 )
            *(_BYTE *)(a1 + 262183) = 1;
          return (unsigned int)v35;
        }
        v33 = v30 - (_QWORD)v32 - 1 - ((v30 - (unsigned __int64)v32 - 1 + 241) >> 8);
      }
      goto LABEL_856;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v26 > v29 )
          goto LABEL_957;
        v415 = 3;
        v1240 = 3;
        v416 = *(unsigned int *)(a1 + 262168);
        v417 = *(char **)(a1 + 262152);
        v418 = (_DWORD)v26 + *(_DWORD *)(a1 + 262168) - (_DWORD)v417;
        v419 = *(unsigned int *)(a1 + 262172);
        v1271 = v418;
        v420 = v419;
        v1249 = *(_DWORD *)(a1 + 262172);
        v1300 = *(_QWORD **)(a1 + 262160);
        if ( (int)v419 + 0x10000 <= v418 )
          v420 = v418 - 0xFFFF;
        v1325 = v416 + *(_QWORD *)(a1 + 262160) - v419;
        v421 = 256;
        v422 = v416 + (_DWORD)v1235 - (_DWORD)v417;
        v1394 = v420;
        v1292 = *v1235;
        v423 = 0;
        v1220 = 0;
        v1353 = 0LL;
        v424 = 0;
        v1311 = 0;
        v425 = *(_DWORD *)(a1 + 262176);
        if ( v425 < v422 )
        {
          v426 = &v417[v425 - v416];
          do
          {
            v427 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v426) >> 17;
            v428 = v425 - *(_DWORD *)(a1 + 4 * v427);
            if ( v428 > 0xFFFF )
              LOWORD(v428) = -1;
            ++v426;
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v425 + 0x20000) = v428;
            *(_DWORD *)(a1 + 4 * v427) = v425++;
          }
          while ( v425 < v422 );
          v415 = 3;
          v423 = 0;
          v420 = v1394;
          v421 = 256;
        }
        v429 = v1235;
        *(_DWORD *)(a1 + 262176) = v422;
        v430 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v1235) >> 17));
        if ( v430 >= v420 )
        {
          while ( 1 )
          {
            if ( v421 <= 0 )
            {
LABEL_660:
              v32 = v1322;
              v424 = v1311;
              v25 = v1258;
              goto LABEL_661;
            }
            v1203 = v421 - 1;
            if ( v430 >= (unsigned int)v416 )
            {
              v431 = v430 - (unsigned int)v416;
              if ( *(_WORD *)((char *)v429 + v415 - 1) == *(_WORD *)&v417[v415 - 1 + v431]
                && *(_DWORD *)&v417[v431] == v1292 )
              {
                v432 = v429 + 1;
                v433 = (_DWORD)v429 + 4;
                v434 = &v417[v431 + 4];
                if ( (unsigned __int64)v432 >= v1260 - 7 )
                  goto LABEL_617;
                if ( *(_QWORD *)v434 != *v432 )
                {
                  __asm { tzcnt   rcx, rax }
                  v435 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  while ( 1 )
                  {
                    ++v432;
                    v434 += 8;
                    if ( (unsigned __int64)v432 >= v1260 - 7 )
                      break;
                    if ( *(_QWORD *)v434 != *v432 )
                    {
                      __asm { tzcnt   rax, rax }
                      v435 = ((unsigned int)_RAX >> 3) - v433 + (_DWORD)v432;
                      goto LABEL_627;
                    }
                  }
LABEL_617:
                  if ( (unsigned __int64)v432 < v1260 - 3 && *(_DWORD *)v434 == *(_DWORD *)v432 )
                  {
                    v432 = (_QWORD *)((char *)v432 + 4);
                    v434 += 4;
                  }
                  if ( (unsigned __int64)v432 < v1260 - 1 && *(_WORD *)v434 == *(_WORD *)v432 )
                  {
                    v432 = (_QWORD *)((char *)v432 + 2);
                    v434 += 2;
                  }
                  if ( (unsigned __int64)v432 < v1260 && *v434 == *(_BYTE *)v432 )
                    LODWORD(v432) = (_DWORD)v432 + 1;
                  v435 = (_DWORD)v432 - v433;
                }
LABEL_627:
                v420 = v1394;
                v436 = v435 + 4;
                v429 = v1235;
                if ( v436 > v415 )
                {
                  v1240 = v436;
                  v1311 = v1271 - v430;
                }
              }
              else
              {
                v420 = v1394;
              }
              v437 = v1300;
              goto LABEL_630;
            }
            v437 = v1300;
            v484 = (_DWORD *)((char *)v1300 + v430 - v1249);
            if ( v430 <= (int)v416 - 4 && *v484 == v1292 )
              break;
LABEL_630:
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v430 + 0x20000) != 1 )
              goto LABEL_637;
            v438 = v430 - 1;
            if ( v423 )
            {
              v1220 = v423;
              if ( v423 != 2 )
                goto LABEL_637;
            }
            else
            {
              if ( (_BYTE)v1292 != HIBYTE(v1292) || (unsigned __int16)v1292 != HIWORD(v1292) )
              {
                v420 = v1394;
                v1220 = 1;
LABEL_637:
                v430 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v430 + 0x20000);
                goto LABEL_659;
              }
              v1220 = 2;
              v439 = LZ4HC_countPattern(v429 + 1, v1260, v1292);
              v420 = v1394;
              v1353 = v439 + 4LL;
            }
            if ( v438 < v420 || (unsigned int)v416 - v438 - 1 < 3 )
              goto LABEL_637;
            if ( v438 < (unsigned int)v416 )
            {
              v440 = 1;
              v441 = (char *)v437 + v438 - v1249;
            }
            else
            {
              v440 = 0;
              v441 = &v417[v438 - (unsigned int)v416];
            }
            if ( *(_DWORD *)v441 != v1292 )
              goto LABEL_637;
            v442 = v1260;
            if ( v440 )
              v442 = v1325;
            v443 = (unsigned int)LZ4HC_countPattern(v441 + 4, v442, v1292) + 4LL;
            if ( v440 )
            {
              if ( &v441[v443] == v444 )
              {
                v798 = LZ4HC_rotatePattern(v443, v1292);
                v443 += (unsigned int)LZ4HC_countPattern(v417, v1260, v798);
              }
              v445 = (char *)v1300;
            }
            else
            {
              v445 = v417;
            }
            HIBYTE(v1378) = HIBYTE(v1292);
            for ( i = (unsigned __int64)v441; i >= (unsigned __int64)(v445 + 4) && *(_DWORD *)(i - 4) == v1292; i -= 4LL )
              ;
            v447 = (char *)&v1378 - i + 3;
            while ( i > (unsigned __int64)v445 && *(_BYTE *)(i - 1) == v447[i] )
              --i;
            v448 = (unsigned int)((_DWORD)v441 - i);
            if ( !v440 && &v441[-v448] == v417 && v1249 < (unsigned int)v416 )
            {
              v479 = LZ4HC_rotatePattern((unsigned int)(i - (_DWORD)v441), v1292);
              v482 = v1325;
              v1379 = v479;
              while ( v482 >= v481 + 4 && *(_DWORD *)(v482 - 4) == v479 )
                v482 -= 4LL;
              v483 = (char *)&v1379 - v482 + 3;
              while ( v482 > v481 && *(_BYTE *)(v482 - 1) == v483[v482] )
                --v482;
              LODWORD(v448) = v1325 - v482 + v480;
            }
            v449 = v438 - v448;
            v420 = v1394;
            v450 = v1394;
            if ( v449 > v1394 )
              v450 = v449;
            v451 = v443 + v438 - v450;
            if ( v451 < v1353 || v443 > v1353 )
            {
              if ( (unsigned int)v416 - v450 - 1 >= 3 )
              {
                v415 = v1240;
                v429 = v1235;
                v477 = v1353;
                if ( v451 < v1353 )
                  v477 = v451;
                if ( v1240 < v477 )
                {
                  if ( (unsigned __int64)(v416 + (char *)v1235 - v450 - v417) > 0xFFFF )
                    goto LABEL_660;
                  v415 = v477;
                  v1240 = v477;
                  v1311 = v1271 - v450;
                }
                v478 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v450 + 0x20000);
                if ( v478 > v450 )
                  goto LABEL_660;
                v430 = v450 - v478;
              }
              else
              {
                v430 = v416;
              }
            }
            else
            {
              v430 = v416;
              if ( (unsigned int)v416 - ((_DWORD)v443 - (_DWORD)v1353 + v438) - 1 >= 3 )
                v430 = v443 - v1353 + v438;
            }
LABEL_659:
            v415 = v1240;
            v423 = v1220;
            v421 = v1203;
            v429 = v1235;
            if ( v430 < v420 )
              goto LABEL_660;
          }
          v485 = v429 + 1;
          v486 = (_DWORD)v429 + 4;
          v487 = (_QWORD *)((char *)v429 + (unsigned int)v416 - v430);
          if ( (unsigned __int64)v487 > v1260 )
            v487 = (_QWORD *)v1260;
          v488 = v484 + 1;
          if ( v485 < (_QWORD *)((char *)v487 - 7) )
          {
            if ( *v485 != *v488 )
            {
              __asm { tzcnt   rcx, rax }
              v489 = (unsigned int)_RCX >> 3;
LABEL_726:
              v490 = v489 + 4;
              v491 = (_QWORD *)((char *)v1235 + (int)(v489 + 4));
              if ( v491 == v487 && (unsigned __int64)v487 < v1260 )
              {
                v492 = v417;
                v493 = (_QWORD *)((char *)v1235 + v490);
                if ( (unsigned __int64)v491 >= v1260 - 7 )
                  goto LABEL_731;
                if ( *v491 != *(_QWORD *)v417 )
                {
                  __asm { tzcnt   rcx, rax }
                  v495 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v493 = v491 + 1;
                  v492 = v417 + 8;
LABEL_731:
                  while ( (unsigned __int64)v493 < v1260 - 7 )
                  {
                    if ( *v493 != *v492 )
                    {
                      __asm { tzcnt   rax, rax }
                      v495 = ((unsigned int)_RAX >> 3) - (_DWORD)v491 + (_DWORD)v493;
                      goto LABEL_742;
                    }
                    ++v493;
                    ++v492;
                  }
                  if ( (unsigned __int64)v493 < v1260 - 3 && *(_DWORD *)v492 == *(_DWORD *)v493 )
                  {
                    v493 = (_QWORD *)((char *)v493 + 4);
                    v492 = (_QWORD *)((char *)v492 + 4);
                  }
                  if ( (unsigned __int64)v493 < v1260 - 1 && *(_WORD *)v492 == *(_WORD *)v493 )
                  {
                    v493 = (_QWORD *)((char *)v493 + 2);
                    v492 = (_QWORD *)((char *)v492 + 2);
                  }
                  if ( (unsigned __int64)v493 < v1260 && *(_BYTE *)v492 == *(_BYTE *)v493 )
                    LODWORD(v493) = (_DWORD)v493 + 1;
                  v495 = (_DWORD)v493 - (_DWORD)v491;
                }
LABEL_742:
                v490 += v495;
              }
              v420 = v1394;
              v429 = v1235;
              if ( v490 > v415 )
              {
                v1240 = v490;
                v1311 = v1271 - v430;
              }
              goto LABEL_630;
            }
            while ( 1 )
            {
              ++v485;
              ++v488;
              if ( v485 >= (_QWORD *)((char *)v487 - 7) )
                break;
              if ( *v485 != *v488 )
              {
                __asm { tzcnt   rax, rax }
                v489 = ((unsigned int)_RAX >> 3) - v486 + (_DWORD)v485;
                goto LABEL_726;
              }
            }
          }
          if ( v485 < (_QWORD *)((char *)v487 - 3) && *(_DWORD *)v488 == *(_DWORD *)v485 )
          {
            v485 = (_QWORD *)((char *)v485 + 4);
            v488 = (_QWORD *)((char *)v488 + 4);
          }
          if ( v485 < (_QWORD *)((char *)v487 - 1) && *(_WORD *)v488 == *(_WORD *)v485 )
          {
            v485 = (_QWORD *)((char *)v485 + 2);
            v488 = (_QWORD *)((char *)v488 + 2);
          }
          if ( v485 < v487 && *(_BYTE *)v488 == *(_BYTE *)v485 )
            LODWORD(v485) = (_DWORD)v485 + 1;
          v489 = (_DWORD)v485 - v486;
          goto LABEL_726;
        }
LABEL_661:
        v29 = v1317;
        v452 = __PAIR64__(v415, v424);
        v1377 = __PAIR64__(v415, v424);
        v1304 = __PAIR64__(v415, v424);
        if ( v415 >= 4 )
          break;
        v30 = v1255;
        v26 = (unsigned int *)((char *)v429 + 1);
        v1235 = v26;
      }
      v453 = (unsigned __int64)v1235;
      v454 = v1235;
      v1343 = v415;
      v1372 = (unsigned __int64)v1235;
      while ( 1 )
      {
        v455 = HIDWORD(v1304);
        v1395 = HIDWORD(v1304);
        v456 = SHIDWORD(v1304) + v453;
        if ( v456 > v29 )
        {
          v1278 = 0LL;
          v457 = 0;
          v458 = 0LL;
          goto LABEL_665;
        }
        v559 = (unsigned int *)(v456 - 2);
        v1221 = HIDWORD(v1304);
        v1266 = v456 - 2;
        v560 = HIDWORD(v1304);
        v1350 = v456 - 2;
        v561 = *(unsigned int *)(a1 + 262172);
        v562 = *(unsigned int *)(a1 + 262168);
        v563 = v561;
        v564 = *(_QWORD **)(a1 + 262152);
        v1230 = v562;
        v565 = v562 + v456 - 2 - (_DWORD)v564;
        v1312 = *(_DWORD *)(a1 + 262172);
        v1301 = (char *)v564;
        v1241 = v565;
        v566 = (unsigned int)v562;
        if ( (int)v561 + 0x10000 <= v565 )
          v563 = v565 - 0xFFFF;
        v1204 = v563;
        v567 = *(_QWORD **)(a1 + 262160);
        v1293 = 256;
        v1354 = (unsigned __int64)v567 + v562 - v561;
        v568 = 0;
        v569 = (_DWORD)v559 - (_DWORD)v1235;
        v1212 = 0;
        v570 = *v559;
        v1375 = 0LL;
        v1272 = 0;
        v571 = *(_DWORD *)(a1 + 262176);
        v1281 = v567;
        v1250 = *v559;
        if ( v571 < v565 )
        {
          v572 = (_DWORD *)((char *)v564 + v571 - v566);
          do
          {
            v573 = (unsigned __int64)(unsigned int)(-1640531535 * *v572) >> 17;
            v574 = v571 - *(_DWORD *)(a1 + 4 * v573);
            if ( v574 > 0xFFFF )
              LOWORD(v574) = -1;
            v572 = (_DWORD *)((char *)v572 + 1);
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v571 + 0x20000) = v574;
            *(_DWORD *)(a1 + 4 * v573) = v571++;
          }
          while ( v571 < v565 );
          v452 = v1377;
          v560 = HIDWORD(v1304);
          v570 = v1250;
          v567 = v1281;
        }
        *(_DWORD *)(a1 + 262176) = v565;
        v575 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v559) >> 17));
        v576 = v569;
        v577 = v1204;
        v1336 = v576;
        if ( v575 >= v1204 )
        {
          v578 = v1230;
          v1326 = (char *)v1235 + SHIDWORD(v1304);
          while ( 1 )
          {
            v579 = v1212;
            if ( v1293 <= 0 )
            {
LABEL_1020:
              v452 = v1377;
              v32 = v1322;
              v568 = v1272;
              goto LABEL_1021;
            }
            v580 = 1;
            --v1293;
            if ( v575 >= v578 )
              break;
            v581 = (_DWORD *)((char *)v567 + v575 - v1312);
            if ( v575 <= v578 - 4 && *v581 == v570 )
            {
              v582 = (_QWORD *)(v1350 + 4);
              v583 = v581 + 1;
              v584 = (_QWORD *)(v1350 + v578 - v575);
              v585 = v1350 + 4;
              if ( (unsigned __int64)v584 > v1260 )
                v584 = (_QWORD *)v1260;
              if ( v582 >= (_QWORD *)((char *)v584 - 7) )
                goto LABEL_1196;
              if ( *v583 != *v582 )
              {
                __asm { tzcnt   rcx, rax }
                v589 = (unsigned int)_RCX >> 3;
              }
              else
              {
                while ( 1 )
                {
                  ++v582;
                  ++v583;
                  if ( v582 >= (_QWORD *)((char *)v584 - 7) )
                    break;
                  if ( *v583 != *v582 )
                  {
                    __asm { tzcnt   rax, rax }
                    v589 = ((unsigned int)_RAX >> 3) - v585 + (_DWORD)v582;
                    goto LABEL_1207;
                  }
                }
LABEL_1196:
                if ( v582 < (_QWORD *)((char *)v584 - 3) && *(_DWORD *)v583 == *(_DWORD *)v582 )
                {
                  v582 = (_QWORD *)((char *)v582 + 4);
                  v583 = (_QWORD *)((char *)v583 + 4);
                }
                if ( v582 < (_QWORD *)((char *)v584 - 1) && *(_WORD *)v583 == *(_WORD *)v582 )
                {
                  v582 = (_QWORD *)((char *)v582 + 2);
                  v583 = (_QWORD *)((char *)v583 + 2);
                }
                if ( v582 < v584 && *(_BYTE *)v583 == *(_BYTE *)v582 )
                  LODWORD(v582) = (_DWORD)v582 + 1;
                v589 = (_DWORD)v582 - v585;
              }
LABEL_1207:
              v738 = v589 + 4;
              v739 = (_QWORD *)(v1350 + (int)(v589 + 4));
              if ( v739 == v584 && (unsigned __int64)v584 < v1260 )
              {
                v740 = v564;
                v741 = (_QWORD *)(v1350 + v738);
                if ( (unsigned __int64)v739 >= v1260 - 7 )
                  goto LABEL_1212;
                if ( *v564 != *v739 )
                {
                  __asm { tzcnt   rcx, rax }
                  v744 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v741 = v739 + 1;
                  v740 = v564 + 1;
LABEL_1212:
                  while ( (unsigned __int64)v741 < v1260 - 7 )
                  {
                    if ( *v740 != *v741 )
                    {
                      __asm { tzcnt   rax, rax }
                      v744 = ((unsigned int)_RAX >> 3) - (_DWORD)v739 + (_DWORD)v741;
                      goto LABEL_1226;
                    }
                    ++v741;
                    ++v740;
                  }
                  if ( (unsigned __int64)v741 < v1260 - 3 && *(_DWORD *)v740 == *(_DWORD *)v741 )
                  {
                    v741 = (_QWORD *)((char *)v741 + 4);
                    v740 = (_QWORD *)((char *)v740 + 4);
                  }
                  if ( (unsigned __int64)v741 < v1260 - 1 && *(_WORD *)v740 == *(_WORD *)v741 )
                  {
                    v741 = (_QWORD *)((char *)v741 + 2);
                    v740 = (_QWORD *)((char *)v740 + 2);
                  }
                  if ( (unsigned __int64)v741 < v1260 && *(_BYTE *)v740 == *(_BYTE *)v741 )
                    LODWORD(v741) = (_DWORD)v741 + 1;
                  v744 = (_DWORD)v741 - (_DWORD)v739;
                }
LABEL_1226:
                v738 += v744;
              }
              v716 = 0;
              if ( v1336 )
              {
                v711 = v581 - 1;
                v712 = (_DWORD)v1235 - v1350;
                v713 = 0LL;
                if ( (__int64)((__int64)v1235 - v1350) <= -(__int64)(v575 - v1312) )
                  v712 = v1312 - v575;
                v714 = v1350 - (_QWORD)v581;
                while ( v716 - v712 > 3 )
                {
                  if ( *v711 != *(_DWORD *)((char *)v711 + v714) )
                  {
                    _BitScanReverse(&v715, *v711 ^ *(_DWORD *)((char *)v711 + v714));
                    v716 -= (31 - v715) >> 3;
                    goto LABEL_1133;
                  }
                  v716 -= 4;
                  v713 -= 4LL;
                  --v711;
                }
                v710 = v1281;
                v746 = v712;
                if ( v713 > v712 )
                {
                  v747 = &v1326[v713 - 3];
                  do
                  {
                    if ( *v747 != *((_BYTE *)v1281 + v575 - v1312 + v713 - 1) )
                      break;
                    --v716;
                    --v713;
                    --v747;
                  }
                  while ( v713 > v746 );
                  v578 = v1230;
                }
              }
              else
              {
LABEL_1133:
                v710 = v1281;
              }
              v717 = v738 - v716;
              if ( v717 > v1221 )
              {
                v1221 = v717;
                v1272 = v1241 - v575;
                v1266 = v1350 + v716;
              }
              v577 = v1204;
LABEL_1137:
              v580 = 1;
              goto LABEL_1138;
            }
            v710 = v1281;
            v580 = 1;
LABEL_1139:
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v575 + 0x20000) != 1 )
              goto LABEL_1017;
            v718 = v575 - 1;
            if ( v579 )
            {
              if ( v1212 != 2 )
                goto LABEL_1017;
              v719 = v1250;
            }
            else
            {
              v719 = v1250;
              if ( (_BYTE)v1250 != HIBYTE(v1250) || (unsigned __int16)v1250 != HIWORD(v1250) )
              {
                v1212 = 1;
LABEL_1017:
                v577 = v1204;
                v575 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v575 + 0x20000);
LABEL_1018:
                v576 = v1336;
                goto LABEL_1019;
              }
              v1212 = 2;
              v1375 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1350 + 4), v1260, v1250) + 4LL;
            }
            if ( v718 < v577 || v578 - v575 < 3 )
              goto LABEL_1017;
            if ( v718 < v578 )
            {
              v720 = (char *)v710 + v718 - v1312;
            }
            else
            {
              v580 = 0;
              v720 = &v1301[v718 - v578];
            }
            if ( *(_DWORD *)v720 != v719 )
              goto LABEL_1017;
            v721 = v1260;
            if ( v580 )
              v721 = v1354;
            v722 = (unsigned int)LZ4HC_countPattern(v720 + 4, v721, v719) + 4LL;
            if ( v580 )
            {
              if ( &v720[v722] == (char *)v721 )
              {
                v736 = LZ4HC_rotatePattern(v722, v719);
                v722 += (unsigned int)LZ4HC_countPattern(v1301, v1260, v736);
              }
              v724 = (unsigned __int64)v1281;
              v723 = v1301;
              v725 = (char *)v1281;
            }
            else
            {
              v723 = v1301;
              v724 = (unsigned __int64)v1281;
              v725 = v1301;
            }
            v1380 = v719;
            for ( j = (unsigned __int64)v720; j >= (unsigned __int64)(v725 + 4) && *(_DWORD *)(j - 4) == v719; j -= 4LL )
              ;
            v727 = (char *)&v1380 - j + 3;
            while ( j > (unsigned __int64)v725 && *(_BYTE *)(j - 1) == v727[j] )
              --j;
            v728 = (unsigned int)((_DWORD)v720 - j);
            if ( !v580 && &v720[-v728] == v723 && v1312 < v578 )
            {
              v732 = LZ4HC_rotatePattern((unsigned int)(j - (_DWORD)v720), v719);
              v734 = v1354;
              v1381 = v732;
              while ( v734 >= v724 + 4 && *(_DWORD *)(v734 - 4) == v732 )
                v734 -= 4LL;
              v735 = (char *)&v1381 - v734 + 3;
              while ( v734 > v724 && *(_BYTE *)(v734 - 1) == v735[v734] )
                --v734;
              LODWORD(v728) = v1354 - v734 + v733;
            }
            v577 = v1204;
            v575 = v1204;
            if ( v718 - (unsigned int)v728 > v1204 )
              v575 = v718 - v728;
            v729 = v722 + v718 - v575;
            if ( v729 >= v1375 && v722 <= v1375 )
            {
              v575 = v578;
              if ( v578 - (v718 - (_DWORD)v1375 + (_DWORD)v722) - 1 >= 3 )
                v575 = v718 - v1375 + v722;
              goto LABEL_1018;
            }
            v576 = v1336;
            if ( v578 - v575 - 1 < 3 )
            {
              v575 = v578;
            }
            else if ( !v1336 )
            {
              v560 = v1221;
              v730 = v1375;
              if ( v729 < v1375 )
                v730 = v729;
              if ( v1221 < v730 )
              {
                if ( v578 + v1350 - v575 - (unsigned __int64)v723 > 0xFFFF )
                  goto LABEL_1020;
                v560 = v730;
                v1221 = v730;
                v1272 = v1241 - v575;
                v1266 = v1350;
              }
              v731 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v575 + 0x20000);
              if ( v731 > v575 )
                goto LABEL_1020;
              v575 -= v731;
            }
LABEL_1019:
            v570 = v1250;
            v564 = v1301;
            v560 = v1221;
            v567 = v1281;
            if ( v575 < v577 )
              goto LABEL_1020;
          }
          v667 = (_DWORD *)((char *)v564 + v575 - v578);
          if ( *(_WORD *)((char *)v1235 + v560 - 1) != *(_WORD *)((char *)v667 + v560 - v576 - 1) || *v667 != v570 )
          {
            v710 = v1281;
            v577 = v1204;
            goto LABEL_1138;
          }
          v668 = v576 == 0;
          v669 = 0;
          if ( !v668 )
          {
            v670 = 0LL;
            v671 = (_DWORD)v1235 - v1350;
            v672 = v667 - 1;
            v673 = -(__int64)(v575 - v578);
            if ( (__int64)((__int64)v1235 - v1350) <= v673 )
              v671 = v673;
            v674 = v1350 - (_QWORD)v667;
            while ( v669 - v671 > 3 )
            {
              if ( *v672 != *(_DWORD *)((char *)v672 + v674) )
              {
                _BitScanReverse(&v675, *v672 ^ *(_DWORD *)((char *)v672 + v674));
                v669 -= (31 - v675) >> 3;
                goto LABEL_1038;
              }
              v669 -= 4;
              v670 -= 4LL;
              --v672;
            }
            v706 = v671;
            if ( v670 > v671 )
            {
              v707 = &v1326[v670 - 3];
              do
              {
                if ( *v707 != *((_BYTE *)v564 + v575 - v578 + v670 - 1) )
                  break;
                --v669;
                --v670;
                --v707;
              }
              while ( v670 > v706 );
            }
          }
LABEL_1038:
          v676 = (_DWORD *)(v1350 + 4);
          v677 = v667 + 1;
          v678 = v1350 + 4;
          if ( v1350 + 4 >= v1260 - 7 )
          {
LABEL_1114:
            if ( (unsigned __int64)v676 < v1260 - 3 && *v677 == *v676 )
            {
              ++v676;
              ++v677;
            }
            if ( (unsigned __int64)v676 < v1260 - 1 && *(_WORD *)v677 == *(_WORD *)v676 )
            {
              v676 = (_DWORD *)((char *)v676 + 2);
              v677 = (_DWORD *)((char *)v677 + 2);
            }
            if ( (unsigned __int64)v676 < v1260 && *(_BYTE *)v677 == *(_BYTE *)v676 )
              LODWORD(v676) = (_DWORD)v676 + 1;
            v682 = (_DWORD)v676 - v678;
          }
          else
          {
            if ( *(_QWORD *)v677 == *(_QWORD *)v676 )
            {
              while ( 1 )
              {
                v676 += 2;
                v677 += 2;
                if ( (unsigned __int64)v676 >= v1260 - 7 )
                  goto LABEL_1114;
                if ( *(_QWORD *)v677 != *(_QWORD *)v676 )
                {
                  __asm { tzcnt   rax, rax }
                  v682 = ((unsigned int)_RAX >> 3) - v678 + (_DWORD)v676;
                  goto LABEL_1125;
                }
              }
            }
            __asm { tzcnt   rcx, rax }
            v682 = (unsigned int)_RCX >> 3;
          }
LABEL_1125:
          v577 = v1204;
          v709 = v682 - v669 + 4;
          v174 = v709 <= v560;
          v710 = v1281;
          if ( !v174 )
          {
            v1272 = v1241 - v575;
            v1266 = v1350 + v669;
            v1221 = v709;
            goto LABEL_1137;
          }
LABEL_1138:
          v579 = v1212;
          goto LABEL_1139;
        }
LABEL_1021:
        v454 = (unsigned int *)v1372;
        v455 = HIDWORD(v1304);
        v453 = (unsigned __int64)v1235;
        v29 = v1317;
        v458 = __PAIR64__(v560, v568);
        v1278 = __PAIR64__(v560, v568);
        v457 = v560;
LABEL_665:
        v1335 = v458;
        if ( v457 <= v455 )
        {
          v522 = v1235;
          v25 = v1258;
          v467 = v32;
          v523 = v32;
          v524 = v32;
          v525 = (char *)v1235 - (char *)v1258;
          v526 = v32 + 1;
          if ( a7 )
          {
            v30 = v1255;
            if ( (unsigned __int64)&v526[v525 / 0xFF + 8 + v525] > v1255 )
              goto LABEL_938;
          }
          if ( v525 < 0xF )
          {
            *v523 = 16 * v525;
          }
          else
          {
            v527 = v525 - 15;
            *v523 = -16;
            if ( v525 - 15 >= 0xFF )
            {
              v914 = v527 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v914) = -1;
              memset_thunk_772440563353939046(v526, SDWORD2(v914), v527 / 0xFF);
              v455 = HIDWORD(v1304);
              v526 += v527 / 0xFF;
              v25 = v1258;
              LOBYTE(v527) = v527 / 0xFF + v527;
            }
            *v526++ = v527;
          }
          v528 = v526;
          do
          {
            *v528 = *(_QWORD *)((char *)v528 + (char *)v25 - v526);
            ++v528;
          }
          while ( v528 < (_QWORD *)&v526[v525] );
          v529 = &v526[v525];
          v30 = v1255;
          v530 = v455 - 4LL;
          *v529 = v1304;
          v32 = v529 + 1;
          v1322 = v32;
          if ( a7 && (unsigned __int64)&v32[v530 / 0xFF + 6] > v1255 )
            goto LABEL_937;
          v531 = *v524;
          if ( v530 >= 0xF )
          {
            v686 = v455 - 19LL;
            *v523 = v531 + 15;
            if ( v686 >= 0x1FE )
            {
              v687 = v686 / 0x1FE;
              v686 %= 0x1FEuLL;
              do
              {
                *v32 = -1;
                v688 = v32 + 1;
                *v688 = -1;
                v32 = v688 + 1;
                --v687;
              }
              while ( v687 );
            }
            if ( v686 >= 0xFF )
            {
              LOBYTE(v686) = v686 + 1;
              *v32++ = -1;
            }
            *v32++ = v686;
            v1322 = v32;
          }
          else
          {
            *v523 = v530 + v531;
          }
          v26 = (unsigned int *)((char *)v1235 + v455);
          goto LABEL_848;
        }
        v459 = v1266;
        if ( (unsigned __int64)v454 < v453 && v1266 < v453 + v1343 )
        {
          LOWORD(v1304) = v452;
          v453 = (unsigned __int64)v454;
          v455 = HIDWORD(v452);
          v1395 = HIDWORD(v452);
          v1235 = v454;
        }
        if ( (__int64)(v1266 - v453) < 3 )
        {
          v453 = v1266;
          v1235 = (unsigned int *)v1266;
          v1304 = v458;
          continue;
        }
LABEL_668:
        if ( (__int64)(v459 - v453) < 18 )
        {
          v590 = v455;
          if ( v455 > 18 )
            v590 = 18;
          if ( v453 + v590 > v459 + v457 - 4LL )
            v590 = v459 + v457 - v453 - 4;
          v591 = v590 - v459 + v453;
          if ( v591 > 0 )
          {
            v459 += v591;
            v457 -= v591;
            v1266 = v459;
            HIDWORD(v1278) = v457;
            v458 = v1278;
            v1335 = v1278;
          }
        }
        v460 = v457;
        v461 = v459 + v457;
        if ( v461 > v29 )
        {
          v462 = 0;
          v463 = 0LL;
          goto LABEL_671;
        }
        v619 = (unsigned int *)(v461 - 3);
        v1283 = v461 - 3;
        v1327 = v461 - 3;
        v1242 = v457;
        v620 = *(unsigned int *)(a1 + 262172);
        v621 = v620;
        v622 = *(_QWORD **)(a1 + 262152);
        v1273 = *(_DWORD *)(a1 + 262168);
        v623 = v461 - 3 + v1273 - (_DWORD)v622;
        v1205 = *(_DWORD *)(a1 + 262172);
        v1282 = (char *)v622;
        v1251 = v623;
        if ( (int)v620 + 0x10000 <= v623 )
          v621 = v623 - 0xFFFF;
        v1222 = v621;
        v624 = *(_QWORD **)(a1 + 262160);
        v625 = (_DWORD)v619 - v459;
        v1340 = v624;
        v1294 = 256;
        v1376 = (unsigned __int64)v624 + v1273 - v620;
        v1231 = *v619;
        v1213 = 0;
        v626 = 0;
        v1373 = 0LL;
        v1313 = 0;
        v627 = a1;
        v628 = *(_DWORD *)(a1 + 262176);
        if ( v628 < v623 )
        {
          v629 = (_DWORD *)((char *)v622 + v628 - (unsigned __int64)v1273);
          do
          {
            v630 = (unsigned __int64)(unsigned int)(-1640531535 * *v629) >> 17;
            v631 = v628 - *(_DWORD *)(a1 + 4 * v630);
            if ( v631 > 0xFFFF )
              LOWORD(v631) = -1;
            v629 = (_DWORD *)((char *)v629 + 1);
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v628 + 0x20000) = v631;
            *(_DWORD *)(a1 + 4 * v630) = v628++;
          }
          while ( v628 < v623 );
          v457 = HIDWORD(v1278);
          v619 = (unsigned int *)(v461 - 3);
          v624 = v1340;
          v627 = a1;
        }
        *(_DWORD *)(v627 + 262176) = v623;
        v632 = *(_DWORD *)(v627 + 4 * ((unsigned __int64)(-1640531535 * *v619) >> 17));
        v633 = v625;
        v1302 = v625;
        if ( v632 >= v1222 )
        {
          v634 = v1266;
          v635 = v1273;
          v636 = v1266 + v460;
          v637 = v1231;
          v1355 = v636;
          while ( 1 )
          {
            v638 = v1213;
            if ( v1294 <= 0 )
            {
LABEL_1027:
              v458 = v1335;
              v32 = v1322;
              v457 = HIDWORD(v1278);
              v626 = v1313;
              goto LABEL_1028;
            }
            --v1294;
            if ( v632 >= v635 )
              break;
            v653 = v1205;
            v697 = (_DWORD *)((char *)v624 + v632 - v1205);
            if ( v632 <= v635 - 4 && *v697 == v637 )
            {
              v698 = (_QWORD *)(v1327 + 4);
              v699 = v697 + 1;
              v700 = (_QWORD *)(v1327 + v635 - v632);
              v701 = v1327 + 4;
              if ( (unsigned __int64)v700 > v1260 )
                v700 = (_QWORD *)v1260;
              if ( v698 >= (_QWORD *)((char *)v700 - 7) )
                goto LABEL_1253;
              if ( *v699 != *v698 )
              {
                __asm { tzcnt   rcx, rax }
                v705 = (unsigned int)_RCX >> 3;
              }
              else
              {
                while ( 1 )
                {
                  ++v698;
                  ++v699;
                  if ( v698 >= (_QWORD *)((char *)v700 - 7) )
                    break;
                  if ( *v699 != *v698 )
                  {
                    __asm { tzcnt   rax, rax }
                    v705 = ((unsigned int)_RAX >> 3) - v701 + (_DWORD)v698;
                    goto LABEL_1264;
                  }
                }
LABEL_1253:
                if ( v698 < (_QWORD *)((char *)v700 - 3) && *(_DWORD *)v699 == *(_DWORD *)v698 )
                {
                  v698 = (_QWORD *)((char *)v698 + 4);
                  v699 = (_QWORD *)((char *)v699 + 4);
                }
                if ( v698 < (_QWORD *)((char *)v700 - 1) && *(_WORD *)v699 == *(_WORD *)v698 )
                {
                  v698 = (_QWORD *)((char *)v698 + 2);
                  v699 = (_QWORD *)((char *)v699 + 2);
                }
                if ( v698 < v700 && *(_BYTE *)v699 == *(_BYTE *)v698 )
                  LODWORD(v698) = (_DWORD)v698 + 1;
                v705 = (_DWORD)v698 - v701;
              }
LABEL_1264:
              v753 = v705 + 4;
              v754 = (_QWORD *)(v1327 + (int)(v705 + 4));
              if ( v754 == v700 && (unsigned __int64)v700 < v1260 )
              {
                v755 = v622;
                v756 = (_QWORD *)(v1327 + v753);
                if ( (unsigned __int64)v754 >= v1260 - 7 )
                  goto LABEL_1269;
                if ( *v622 != *v754 )
                {
                  __asm { tzcnt   rcx, rax }
                  v759 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v756 = v754 + 1;
                  v755 = v622 + 1;
LABEL_1269:
                  while ( (unsigned __int64)v756 < v1260 - 7 )
                  {
                    if ( *v755 != *v756 )
                    {
                      __asm { tzcnt   rax, rax }
                      v759 = ((unsigned int)_RAX >> 3) - (_DWORD)v754 + (_DWORD)v756;
                      goto LABEL_1283;
                    }
                    ++v756;
                    ++v755;
                  }
                  if ( (unsigned __int64)v756 < v1260 - 3 && *(_DWORD *)v755 == *(_DWORD *)v756 )
                  {
                    v756 = (_QWORD *)((char *)v756 + 4);
                    v755 = (_QWORD *)((char *)v755 + 4);
                  }
                  if ( (unsigned __int64)v756 < v1260 - 1 && *(_WORD *)v755 == *(_WORD *)v756 )
                  {
                    v756 = (_QWORD *)((char *)v756 + 2);
                    v755 = (_QWORD *)((char *)v755 + 2);
                  }
                  if ( (unsigned __int64)v756 < v1260 && *(_BYTE *)v755 == *(_BYTE *)v756 )
                    LODWORD(v756) = (_DWORD)v756 + 1;
                  v759 = (_DWORD)v756 - (_DWORD)v754;
                }
LABEL_1283:
                v753 += v759;
              }
              v761 = 0;
              if ( v1302 )
              {
                v762 = (_DWORD *)(v1327 - 4);
                v763 = v1266 - v1327;
                v764 = 0LL;
                if ( (__int64)(v1266 - v1327) <= -(__int64)(v632 - v1205) )
                  v763 = v1205 - v632;
                v765 = (char *)v697 - v1327;
                while ( v761 - v763 > 3 )
                {
                  if ( *v762 != *(_DWORD *)((char *)v762 + (_QWORD)v765) )
                  {
                    _BitScanReverse(&v766, *v762 ^ *(_DWORD *)((char *)v762 + (_QWORD)v765));
                    v761 -= (31 - v766) >> 3;
                    goto LABEL_1291;
                  }
                  v761 -= 4;
                  v764 -= 4LL;
                  --v762;
                }
                v768 = v763;
                if ( v764 > v763 )
                {
                  v769 = (_BYTE *)(v764 + v1355 - 4);
                  do
                  {
                    if ( *v769 != *((_BYTE *)v1340 + v632 - v1205 + v764 - 1) )
                      break;
                    --v761;
                    --v764;
                    --v769;
                  }
                  while ( v764 > v768 );
                  v635 = v1273;
                }
              }
LABEL_1291:
              v637 = v1231;
              v767 = v753 - v761;
              v638 = v1213;
              if ( v767 > v1242 )
              {
                v1242 = v767;
                v1313 = v1251 - v632;
                v1283 = v1327 + v761;
              }
LABEL_1293:
              v653 = v1205;
            }
LABEL_997:
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v632 + 0x20000) != 1 )
              goto LABEL_1023;
            v655 = v632 - 1;
            if ( v638 )
            {
              if ( v1213 != 2 )
                goto LABEL_1023;
            }
            else
            {
              if ( (_BYTE)v637 != HIBYTE(v637) || (unsigned __int16)v637 != HIWORD(v637) )
              {
                v1213 = 1;
LABEL_1023:
                v656 = v1222;
                goto LABEL_1024;
              }
              v1213 = 2;
              v1373 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1327 + 4), v1260, v637) + 4LL;
            }
            v656 = v1222;
            if ( v655 < v1222 || v635 - v632 < 3 )
            {
              v637 = v1231;
LABEL_1024:
              v632 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v632 + 0x20000);
LABEL_1025:
              v633 = v1302;
              goto LABEL_1026;
            }
            if ( v655 >= v635 )
            {
              v657 = 0;
              v658 = &v1282[v655 - v635];
            }
            else
            {
              v657 = 1;
              v658 = (char *)v1340 + v655 - v653;
            }
            v637 = v1231;
            if ( *(_DWORD *)v658 != v1231 )
              goto LABEL_1023;
            v659 = v1260;
            if ( v657 )
              v659 = v1376;
            v660 = (unsigned int)LZ4HC_countPattern(v658 + 4, v659, v1231) + 4LL;
            if ( v657 )
            {
              if ( &v658[v660] == v661 )
              {
                v885 = LZ4HC_rotatePattern(v660, v1231);
                v660 += (unsigned int)LZ4HC_countPattern(v1282, v1260, v885);
              }
              v663 = (unsigned __int64)v1340;
              v662 = v1282;
              v664 = (char *)v1340;
            }
            else
            {
              v662 = v1282;
              v663 = (unsigned __int64)v1340;
              v664 = v1282;
            }
            v637 = v1231;
            v1382 = v1231;
            for ( k = (unsigned __int64)v658; k >= (unsigned __int64)(v664 + 4) && *(_DWORD *)(k - 4) == v1231; k -= 4LL )
              ;
            v666 = (char *)&v1382 - k + 3;
            while ( k > (unsigned __int64)v664 && *(_BYTE *)(k - 1) == v666[k] )
              --k;
            v689 = (unsigned int)((_DWORD)v658 - k);
            if ( !v657 && &v658[-v689] == v662 && v1205 < v635 )
            {
              v693 = LZ4HC_rotatePattern((unsigned int)(k - (_DWORD)v658), v1231);
              v695 = v1376;
              v1383 = v693;
              while ( v695 >= v663 + 4 && *(_DWORD *)(v695 - 4) == v693 )
                v695 -= 4LL;
              v696 = (char *)&v1383 - v695 + 3;
              while ( v695 > v663 && *(_BYTE *)(v695 - 1) == v696[v695] )
                --v695;
              LODWORD(v689) = v1376 - v695 + v694;
            }
            v656 = v1222;
            v632 = v1222;
            if ( v655 - (unsigned int)v689 > v1222 )
              v632 = v655 - v689;
            v690 = v660 + v655 - v632;
            if ( v690 >= v1373 && v660 <= v1373 )
            {
              v632 = v635;
              if ( v635 - ((_DWORD)v660 - (_DWORD)v1373 + v655) - 1 >= 3 )
                v632 = v660 - v1373 + v655;
              goto LABEL_1025;
            }
            v633 = v1302;
            if ( v635 - v632 - 1 < 3 )
            {
              v632 = v635;
              goto LABEL_1026;
            }
            if ( !v1302 )
            {
              v691 = v1373;
              if ( v690 < v1373 )
                v691 = v660 + v655 - v632;
              if ( v1242 < v691 )
              {
                if ( v635 + v1327 - v632 - (unsigned __int64)v662 > 0xFFFF )
                  goto LABEL_1027;
                v1242 = v691;
                v1313 = v1251 - v632;
                v1283 = v1327;
              }
              v692 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v632 + 0x20000);
              if ( v692 > v632 )
                goto LABEL_1027;
              v632 -= v692;
              goto LABEL_1025;
            }
LABEL_1026:
            v622 = v1282;
            v624 = v1340;
            v634 = v1266;
            if ( v632 < v656 )
              goto LABEL_1027;
          }
          v639 = (_DWORD *)((char *)v622 + v632 - v635);
          if ( *(_WORD *)(v634 + v1242 - 1) != *(_WORD *)((char *)v639 + v1242 - v633 - 1) || *v639 != v637 )
            goto LABEL_1293;
          v640 = 0;
          if ( v633 )
          {
            v641 = (_DWORD *)(v1327 - 4);
            v642 = v634 - v1327;
            v643 = 0LL;
            v644 = -(__int64)(v632 - v635);
            if ( (__int64)(v634 - v1327) <= v644 )
              v642 = v644;
            v645 = (char *)v639 - v1327;
            while ( v640 - v642 > 3 )
            {
              if ( *v641 != *(_DWORD *)((char *)v641 + (_QWORD)v645) )
              {
                _BitScanReverse(&v646, *v641 ^ *(_DWORD *)((char *)v641 + (_QWORD)v645));
                v640 -= (31 - v646) >> 3;
                goto LABEL_991;
              }
              v640 -= 4;
              v643 -= 4LL;
              --v641;
            }
            v748 = v642;
            if ( v643 > v642 )
            {
              v749 = (_BYTE *)(v643 + v1355 - 4);
              do
              {
                if ( *v749 != *((_BYTE *)v622 + v632 - v635 + v643 - 1) )
                  break;
                --v640;
                --v643;
                --v749;
              }
              while ( v643 > v748 );
            }
          }
LABEL_991:
          v647 = (_QWORD *)(v1327 + 4);
          v648 = v639 + 1;
          v649 = v1327 + 4;
          if ( v1327 + 4 < v1260 - 7 )
          {
            if ( *v648 != *v647 )
            {
              __asm { tzcnt   rcx, rax }
              v652 = (unsigned int)_RCX >> 3;
LABEL_994:
              v653 = v1205;
              v654 = v652 - v640 + 4;
              if ( v654 > v1242 )
              {
                v1242 = v654;
                v1313 = v1251 - v632;
                v1283 = v1327 + v640;
              }
              v637 = v1231;
              v638 = v1213;
              goto LABEL_997;
            }
            while ( 1 )
            {
              ++v647;
              ++v648;
              if ( (unsigned __int64)v647 >= v1260 - 7 )
                break;
              if ( *v648 != *v647 )
              {
                __asm { tzcnt   rax, rax }
                v652 = ((unsigned int)_RAX >> 3) - v649 + (_DWORD)v647;
                goto LABEL_994;
              }
            }
          }
          if ( (unsigned __int64)v647 < v1260 - 3 && *(_DWORD *)v648 == *(_DWORD *)v647 )
          {
            v647 = (_QWORD *)((char *)v647 + 4);
            v648 = (_QWORD *)((char *)v648 + 4);
          }
          if ( (unsigned __int64)v647 < v1260 - 1 && *(_WORD *)v648 == *(_WORD *)v647 )
          {
            v647 = (_QWORD *)((char *)v647 + 2);
            v648 = (_QWORD *)((char *)v648 + 2);
          }
          if ( (unsigned __int64)v647 < v1260 && *(_BYTE *)v648 == *(_BYTE *)v647 )
            LODWORD(v647) = (_DWORD)v647 + 1;
          v652 = (_DWORD)v647 - v649;
          goto LABEL_994;
        }
LABEL_1028:
        v453 = (unsigned __int64)v1235;
        v29 = v1317;
        v463 = __PAIR64__(v1242, v626);
        v459 = v1266;
        v462 = v1242;
LABEL_671:
        if ( v462 <= v457 )
          break;
        v455 = v1395;
        v464 = v453 + v1395;
        if ( v1283 >= v464 + 3 )
        {
          if ( v459 < v464 )
          {
            if ( (__int64)(v459 - v453) >= 18 )
            {
              v455 = v459 - v453;
              v1395 = v459 - v453;
            }
            else
            {
              if ( v1395 > 18 )
                v455 = 18;
              v1395 = v455;
              if ( v453 + v455 > v459 + v457 - 4LL )
              {
                v455 = v459 + v457 - v453 - 4;
                v1395 = v455;
              }
              v506 = v453 + v455 - v459;
              if ( v506 > 0 )
              {
                v1266 = v506 + v459;
                HIDWORD(v1278) = v457 - v506;
                v458 = v1278;
              }
            }
          }
          v507 = v1258;
          v467 = v32;
          v508 = v32;
          v509 = v32;
          v510 = v32 + 1;
          v511 = v453 - (_QWORD)v1258;
          if ( a7 && (unsigned __int64)&v510[v511 / 0xFF + 8 + v511] > v1255 )
          {
            v25 = v1258;
LABEL_936:
            v30 = v1255;
LABEL_937:
            v522 = v1235;
LABEL_938:
            if ( a7 != 2 )
              goto LABEL_25;
            v603 = (char *)v522 - (char *)v25;
            v32 = v467;
            v604 = ((char *)v522 - (char *)v25 + 240) / 0xFFuLL + (char *)v522 - (char *)v25 + 1;
            if ( (unsigned __int64)&v467[v604] <= v30 - 3 )
            {
              if ( v455 > 255 * (v30 - 3 - v604 - (unsigned __int64)v467) + 18 )
                v455 = 255 * (v30 - 3 - v604 - (_DWORD)v467) + 18;
              v1396 = v455;
              if ( (__int64)(v30 + v455 - v604 - (_QWORD)v467 + 2) >= 12 )
              {
                v605 = v467 + 1;
                if ( v603 < 0xF )
                {
                  *v467 = 16 * v603;
                }
                else
                {
                  v606 = v603 - 15;
                  *v467 = -16;
                  if ( v603 - 15 >= 0xFF )
                  {
                    v915 = v606 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v915) = -1;
                    memset_thunk_772440563353939046(v467 + 1, SDWORD2(v915), v606 / 0xFF);
                    v455 = v1396;
                    v605 += v606 / 0xFF;
                    v30 = v1255;
                    v25 = v1258;
                    LOBYTE(v606) = v606 / 0xFF + v606;
                  }
                  *v605++ = v606;
                }
                v607 = v605;
                v608 = (char *)v25 - v605;
                do
                {
                  *v607 = *(_QWORD *)((char *)v607 + v608);
                  ++v607;
                }
                while ( v607 < (_QWORD *)&v605[v603] );
                v609 = &v605[v603];
                v610 = v455 - 4LL;
                *v609 = v1304;
                v32 = v609 + 1;
                v611 = *v467;
                if ( v610 < 0xF )
                {
                  *v467 = v611 + v610;
                }
                else
                {
                  v612 = v455 - 19LL;
                  *v467 = v611 + 15;
                  if ( v612 >= 0x1FE )
                  {
                    v613 = v612 / 0x1FE;
                    v612 %= 0x1FEuLL;
                    do
                    {
                      *v32 = -1;
                      v614 = v32 + 1;
                      *v614 = -1;
                      v32 = v614 + 1;
                      --v613;
                    }
                    while ( v613 );
                  }
                  if ( v612 >= 0xFF )
                  {
                    LOBYTE(v612) = v612 + 1;
                    *v32++ = -1;
                  }
                  *v32++ = v612;
                }
                v25 = (unsigned int *)((char *)v1235 + v455);
                v1258 = v25;
              }
            }
LABEL_957:
            LODWORD(v8) = (_DWORD)a3;
            v28 = v1348;
            goto LABEL_21;
          }
          if ( v511 < 0xF )
          {
            *v508 = 16 * v511;
          }
          else
          {
            v512 = v511 - 15;
            *v508 = -16;
            if ( v511 - 15 >= 0xFF )
            {
              v910 = v512 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v910) = -1;
              memset_thunk_772440563353939046(v510, SDWORD2(v910), v512 / 0xFF);
              v510 += v512 / 0xFF;
              v508 = v467;
              v507 = v1258;
              LOBYTE(v512) = v512 / 0xFF + v512;
              v509 = v467;
            }
            *v510++ = v512;
            v453 = (unsigned __int64)v1235;
          }
          v513 = v510;
          do
          {
            *v513 = *(_QWORD *)((char *)v513 + (char *)v507 - v510);
            ++v513;
          }
          while ( v513 < (_QWORD *)&v510[v511] );
          v514 = &v510[v511];
          v455 = v1395;
          *v514 = v1304;
          v32 = v514 + 1;
          v515 = v1395 - 4LL;
          v1322 = v32;
          if ( a7 && (unsigned __int64)&v32[v515 / 0xFF + 6] > v1255 )
            goto LABEL_965;
          v516 = *v509;
          if ( v515 >= 0xF )
          {
            v600 = v1395 - 19LL;
            *v508 = v516 + 15;
            if ( v600 >= 0x1FE )
            {
              v601 = v600 / 0x1FE;
              v600 %= 0x1FEuLL;
              do
              {
                *v32 = -1;
                v602 = v32 + 1;
                *v602 = -1;
                v32 = v602 + 1;
                --v601;
              }
              while ( v601 );
            }
            if ( v600 >= 0xFF )
            {
              LOBYTE(v600) = v600 + 1;
              *v32++ = -1;
            }
            *v32++ = v600;
            v1322 = v32;
          }
          else
          {
            *v508 = v516 + v515;
          }
          v29 = v1317;
          v1258 = (unsigned int *)(v453 + v1395);
          LOWORD(v1304) = v458;
          v453 = v1266;
          v455 = HIDWORD(v458);
          v458 = v463;
          v1235 = (unsigned int *)v1266;
          v1278 = v463;
          v459 = v1283;
          v457 = HIDWORD(v463);
          v1266 = v1283;
          v1335 = v463;
          v1395 = v455;
          goto LABEL_668;
        }
        if ( v1283 < v464 )
        {
          v1278 = v463;
          v459 = v1283;
          v457 = HIDWORD(v463);
          v458 = v463;
          v1266 = v1283;
          v1335 = v463;
          goto LABEL_668;
        }
        if ( v459 < v464 )
        {
          v465 = v453 + v1395 - v459;
          v1266 = v465 + v459;
          if ( v457 - v465 >= 4 )
          {
            HIDWORD(v1278) = v457 - v465;
            v458 = v1278;
          }
          else
          {
            v1266 = v1283;
            v458 = v463;
          }
        }
        v466 = v1258;
        v467 = v32;
        v468 = v32;
        v469 = v32;
        v470 = v32 + 1;
        v471 = v453 - (_QWORD)v1258;
        if ( a7 && (unsigned __int64)&v470[v471 / 0xFF + 8 + v471] > v1255 )
        {
          v30 = v1255;
          v25 = v1258;
          goto LABEL_937;
        }
        if ( v471 < 0xF )
        {
          *v468 = 16 * v471;
        }
        else
        {
          v472 = v471 - 15;
          *v468 = -16;
          if ( v471 - 15 >= 0xFF )
          {
            v911 = v472 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v911) = -1;
            memset_thunk_772440563353939046(v470, SDWORD2(v911), v472 / 0xFF);
            v470 += v472 / 0xFF;
            v468 = v467;
            v466 = v1258;
            LOBYTE(v472) = v472 / 0xFF + v472;
            v469 = v467;
          }
          *v470++ = v472;
          v453 = (unsigned __int64)v1235;
        }
        v473 = v470;
        do
        {
          *v473 = *(_QWORD *)((char *)v473 + (char *)v466 - v470);
          ++v473;
        }
        while ( v473 < (_QWORD *)&v470[v471] );
        v474 = &v470[v471];
        v455 = v1395;
        *v474 = v1304;
        v32 = v474 + 1;
        v475 = v1395 - 4LL;
        v1322 = v32;
        if ( a7 && (unsigned __int64)&v32[v475 / 0xFF + 6] > v1255 )
        {
LABEL_965:
          v522 = v1235;
          v25 = v1258;
          v30 = v1255;
          goto LABEL_938;
        }
        v476 = *v469;
        if ( v475 >= 0xF )
        {
          v683 = v1395 - 19LL;
          *v468 = v476 + 15;
          if ( v683 >= 0x1FE )
          {
            v684 = v683 / 0x1FE;
            v683 %= 0x1FEuLL;
            do
            {
              *v32 = -1;
              v685 = v32 + 1;
              *v685 = -1;
              v32 = v685 + 1;
              --v684;
            }
            while ( v684 );
          }
          if ( v683 >= 0xFF )
          {
            LOBYTE(v683) = v683 + 1;
            *v32++ = -1;
          }
          *v32++ = v683;
          v1322 = v32;
        }
        else
        {
          *v468 = v476 + v475;
        }
        v29 = v1317;
        v1258 = (unsigned int *)(v453 + v1395);
        v452 = v458;
        v453 = v1283;
        v1235 = (unsigned int *)v1283;
        v454 = (unsigned int *)v1266;
        v1372 = v1266;
        v1304 = v463;
        v1377 = v458;
        v1343 = HIDWORD(v458);
      }
      if ( v459 < v453 + v1395 )
        v1395 = v459 - v453;
      v25 = v1258;
      v467 = v32;
      v496 = v32;
      v497 = v32;
      v498 = v32 + 1;
      v499 = v453 - (_QWORD)v1258;
      if ( a7 )
      {
        v30 = v1255;
        if ( (unsigned __int64)&v498[v499 / 0xFF + 8 + v499] > v1255 )
        {
          v455 = v1395;
          goto LABEL_937;
        }
      }
      if ( v499 < 0xF )
      {
        *v496 = 16 * v499;
      }
      else
      {
        v500 = v499 - 15;
        *v496 = -16;
        if ( v499 - 15 >= 0xFF )
        {
          v912 = v500 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v912) = -1;
          memset_thunk_772440563353939046(v498, SDWORD2(v912), v500 / 0xFF);
          v498 += v500 / 0xFF;
          v497 = v496;
          v25 = v1258;
          LOBYTE(v500) = v500 / 0xFF + v500;
        }
        *v498++ = v500;
        v453 = (unsigned __int64)v1235;
      }
      v501 = v498;
      do
      {
        *v501 = *(_QWORD *)((char *)v501 + (char *)v25 - v498);
        ++v501;
      }
      while ( v501 < (_QWORD *)&v498[v499] );
      v502 = &v498[v499];
      *v502 = v1304;
      v503 = v502 + 1;
      v504 = v1395 - 4LL;
      if ( a7 )
      {
        v30 = v1255;
        if ( (unsigned __int64)&v503[v504 / 0xFF + 6] > v1255 )
        {
          v455 = v1395;
          goto LABEL_937;
        }
      }
      v505 = *v497;
      if ( v504 >= 0xF )
      {
        v535 = v1395 - 19LL;
        *v496 = v505 + 15;
        if ( v535 >= 0x1FE )
        {
          v536 = v535 / 0x1FE;
          v535 %= 0x1FEuLL;
          do
          {
            *v503 = -1;
            v537 = v503 + 1;
            *v537 = -1;
            v503 = v537 + 1;
            --v536;
          }
          while ( v536 );
        }
        if ( v535 >= 0xFF )
        {
          LOBYTE(v535) = v535 + 1;
          *v503++ = -1;
        }
        *v503++ = v535;
      }
      else
      {
        *v496 = v504 + v505;
      }
      v538 = v1266;
      v25 = (unsigned int *)(v453 + v1395);
      v1258 = v25;
      v467 = v503;
      v1235 = (unsigned int *)v1266;
      v539 = v503;
      v540 = v503;
      v541 = v1266 - (_QWORD)v25;
      v542 = v503 + 1;
      if ( a7 && (unsigned __int64)&v542[v541 / 0xFF + 8 + v541] > v1255 )
        goto LABEL_935;
      if ( v541 < 0xF )
      {
        *v539 = 16 * v541;
      }
      else
      {
        v543 = v541 - 15;
        *v539 = -16;
        if ( v541 - 15 >= 0xFF )
        {
          v913 = v543 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v913) = -1;
          memset_thunk_772440563353939046(v542, SDWORD2(v913), v543 / 0xFF);
          v538 = v1266;
          v542 += v543 / 0xFF;
          v540 = v539;
          LOBYTE(v543) = v543 / 0xFF + v543;
        }
        *v542++ = v543;
      }
      v544 = v542;
      do
      {
        *v544 = *(_QWORD *)((char *)v544 + (char *)v25 - v542);
        ++v544;
      }
      while ( v544 < (_QWORD *)&v542[v541] );
      v545 = &v542[v541];
      *v545 = v1278;
      v32 = v545 + 1;
      v546 = SHIDWORD(v1278) - 4LL;
      v1322 = v32;
      if ( a7 )
      {
        if ( (unsigned __int64)&v32[v546 / 0xFF + 6] > v1255 )
        {
LABEL_935:
          LOWORD(v1304) = v458;
          v455 = HIDWORD(v458);
          goto LABEL_936;
        }
      }
      v547 = *v540;
      if ( v546 < 0xF )
      {
        *v539 = v546 + v547;
      }
      else
      {
        v548 = SHIDWORD(v1278) - 19LL;
        *v539 = v547 + 15;
        if ( v548 >= 0x1FE )
        {
          v549 = v548 / 0x1FE;
          v548 %= 0x1FEuLL;
          do
          {
            *v32 = -1;
            v550 = v32 + 1;
            *v550 = -1;
            v32 = v550 + 1;
            --v549;
          }
          while ( v549 );
        }
        if ( v548 >= 0xFF )
        {
          LOBYTE(v548) = v548 + 1;
          *v32++ = -1;
        }
        *v32++ = v548;
        v1322 = v32;
      }
      v26 = (unsigned int *)(v538 + SHIDWORD(v1278));
      v30 = v1255;
LABEL_848:
      v29 = v1317;
      v25 = v26;
      v1258 = v26;
      v1235 = v26;
    }
  }
  return v24;
}
