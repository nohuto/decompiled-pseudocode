/*
 * XREFs of LZ4HC_compress_generic_dictCtx @ 0x1800F02D8
 * Callers:
 *     LZ4HC_compress_generic @ 0x1800ED8A8 (LZ4HC_compress_generic.c)
 * Callees:
 *     LZ4HC_countPattern @ 0x1800E78D8 (LZ4HC_countPattern.c)
 *     LZ4HC_reverseCountPattern @ 0x1800E7934 (LZ4HC_reverseCountPattern.c)
 *     LZ4HC_rotatePattern @ 0x18010D810 (LZ4HC_rotatePattern.c)
 *     LZ4HC_setExternalDict @ 0x18011F91C (LZ4HC_setExternalDict.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
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
  unsigned int v7; // r12d
  unsigned int *v8; // r13
  __int64 v10; // r10
  unsigned int *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int *v14; // rbx
  unsigned int *v15; // r8
  __int64 v16; // rdx
  _BYTE *v17; // r14
  unsigned __int64 v18; // r9
  char *v19; // r15
  unsigned __int64 v20; // r10
  size_t v21; // r15
  _BYTE *v22; // r8
  unsigned int *v23; // rbx
  unsigned int *v24; // r9
  __int64 v25; // rdx
  _BYTE *v26; // r14
  unsigned __int64 v27; // r10
  char *v28; // r15
  unsigned __int64 v29; // r8
  size_t v30; // r15
  _BYTE *v31; // r8
  int v32; // edi
  __int64 v33; // rdx
  _QWORD *v34; // rsi
  unsigned int v35; // ebx
  __int64 v36; // r13
  unsigned int v37; // r11d
  int v38; // r9d
  unsigned int v39; // r10d
  unsigned int v40; // r12d
  unsigned int v41; // r8d
  __int64 v42; // r9
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r8
  unsigned int v46; // r11d
  int v47; // r15d
  unsigned int *v48; // rbx
  __int64 v49; // r8
  _QWORD *v50; // rcx
  int v51; // ebx
  _QWORD *v52; // rdx
  unsigned __int64 v53; // rax
  unsigned int *v54; // r9
  unsigned __int64 v55; // r8
  unsigned int v57; // ecx
  unsigned __int64 v58; // rdi
  _DWORD *v59; // rdx
  unsigned int v60; // r14d
  unsigned int v61; // esi
  unsigned int v62; // r9d
  int v63; // r15d
  unsigned __int64 v64; // rbx
  unsigned __int64 v65; // r11
  unsigned __int64 v66; // rdi
  __int64 v67; // r11
  unsigned __int64 v68; // rdx
  unsigned int v69; // eax
  _QWORD *v70; // r8
  unsigned int v71; // r11d
  unsigned int v72; // eax
  unsigned int v73; // r11d
  unsigned __int64 v74; // rcx
  bool v75; // cf
  unsigned __int64 v76; // r11
  unsigned __int64 v77; // rbx
  unsigned int *v78; // rcx
  unsigned int v79; // r12d
  int v80; // r10d
  __int64 v81; // r9
  unsigned __int64 v82; // rax
  int v83; // esi
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // r12
  unsigned __int64 v86; // rax
  int v87; // eax
  unsigned __int64 v88; // rbx
  unsigned int *v89; // r13
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned int v93; // ecx
  int v94; // r8d
  __int64 v95; // rcx
  int v96; // eax
  int v97; // r11d
  _BYTE *v98; // r15
  char *v99; // r13
  char *v100; // r9
  _BYTE *v101; // r14
  unsigned __int64 v102; // rsi
  unsigned __int64 v103; // r12
  _QWORD *v104; // rcx
  _WORD *v105; // r14
  _BYTE *v106; // r14
  unsigned __int64 v107; // rcx
  char v108; // al
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // rdx
  _BYTE *v111; // r14
  char *v112; // r13
  char *v113; // r9
  unsigned __int64 v114; // rsi
  _BYTE *v115; // r14
  unsigned __int64 v116; // r12
  _QWORD *v117; // rcx
  _WORD *v118; // r14
  unsigned __int64 v119; // rcx
  char v120; // al
  int v121; // ecx
  unsigned int *v122; // rsi
  unsigned __int64 v123; // r12
  _BYTE *v124; // r8
  char *v125; // r10
  _BYTE *v126; // r14
  unsigned __int64 v127; // r13
  _QWORD *v128; // rcx
  _WORD *v129; // r14
  unsigned __int64 v130; // rcx
  char v131; // al
  _BYTE *v132; // r12
  char *v133; // r13
  _BYTE *v134; // r14
  unsigned __int64 v135; // rdi
  unsigned __int64 v136; // rsi
  _QWORD *v137; // rcx
  _WORD *v138; // r14
  unsigned __int64 v139; // rcx
  char v140; // al
  unsigned __int64 v141; // rcx
  unsigned __int64 v142; // rdx
  _BYTE *v143; // r14
  _QWORD *v144; // rcx
  int v145; // edi
  unsigned __int64 v146; // rax
  _QWORD *v147; // r9
  unsigned __int64 v148; // r10
  unsigned __int64 v149; // r8
  _QWORD *v150; // rdx
  unsigned int v154; // ecx
  signed int v155; // ebx
  _QWORD *v156; // r8
  _QWORD *v157; // rdx
  _QWORD *v158; // rcx
  unsigned __int64 v159; // rax
  _QWORD *v160; // r10
  unsigned __int64 v161; // r9
  unsigned int v164; // ecx
  signed int v169; // ecx
  bool v170; // cc
  int v171; // edx
  int v172; // ecx
  unsigned __int64 v173; // rcx
  unsigned __int64 v174; // rdx
  _BYTE *v175; // r14
  int v176; // ecx
  unsigned int *v177; // rsi
  unsigned __int64 v178; // r12
  _BYTE *v179; // r8
  char *v180; // r10
  _BYTE *v181; // r14
  unsigned __int64 v182; // r13
  _QWORD *v183; // rcx
  _WORD *v184; // r14
  unsigned __int64 v185; // rcx
  char v186; // al
  unsigned __int64 v187; // rcx
  unsigned __int64 v188; // rdx
  _BYTE *v189; // r14
  unsigned int *v190; // rax
  int v191; // r14d
  int v192; // esi
  size_t v193; // rdi
  unsigned __int64 v195; // rdi
  __int64 v196; // rbx
  unsigned int v197; // r8d
  _QWORD *v198; // r15
  unsigned int v199; // esi
  int v200; // r13d
  unsigned __int64 v201; // rdx
  int v202; // ebx
  __int64 v203; // rdx
  unsigned int v204; // r8d
  __int64 v205; // r10
  unsigned __int64 v206; // rdx
  unsigned __int64 v207; // rcx
  unsigned int v208; // esi
  __int64 v209; // rdx
  unsigned int *v210; // r8
  unsigned int v211; // r11d
  unsigned int v212; // r14d
  char *v213; // r12
  _DWORD *v214; // r15
  unsigned int v215; // r8d
  unsigned int v216; // r10d
  unsigned int v217; // edx
  _QWORD *v218; // rbx
  __int64 v219; // rcx
  unsigned int v220; // r9d
  unsigned __int64 v221; // r8
  int v222; // r11d
  unsigned int v223; // r10d
  int v224; // r8d
  unsigned int v225; // r12d
  _DWORD *v226; // r8
  unsigned __int64 v227; // rdx
  unsigned __int64 v228; // rcx
  __int64 v229; // rdx
  unsigned int v230; // r13d
  unsigned int v231; // edi
  unsigned int v232; // r14d
  __int64 v233; // r9
  int v234; // r12d
  _DWORD *v235; // r11
  _DWORD *v236; // r8
  int v237; // edx
  __int64 v238; // rcx
  __int64 v239; // rax
  signed __int64 v240; // r10
  unsigned int v241; // eax
  unsigned __int64 v242; // rbx
  _QWORD *v243; // rcx
  _QWORD *v244; // rdx
  int v245; // r10d
  unsigned int v246; // ecx
  unsigned __int64 v249; // rdi
  unsigned __int64 v250; // r8
  _BYTE *v251; // r14
  unsigned __int64 v252; // rsi
  _QWORD *v253; // rcx
  __int64 v254; // rbx
  _WORD *v255; // r14
  unsigned __int64 v256; // rcx
  char v257; // al
  unsigned __int64 v258; // rcx
  unsigned __int64 v259; // rdx
  _BYTE *v260; // r14
  int v261; // r9d
  _DWORD *v262; // rbx
  __int64 v263; // rcx
  __int64 v264; // rdx
  _DWORD *v265; // r8
  __int64 v266; // rax
  unsigned __int64 v267; // r10
  unsigned int v268; // eax
  unsigned __int64 v269; // r12
  _QWORD *v270; // rcx
  _QWORD *v271; // rdx
  int v272; // edi
  unsigned __int64 v273; // rax
  _QWORD *v274; // r10
  unsigned __int64 v275; // r8
  unsigned int v279; // ecx
  unsigned int v280; // ebx
  __int64 v281; // r12
  _DWORD *v282; // r15
  _QWORD *v283; // rcx
  _QWORD *v284; // rdx
  _QWORD *v285; // r10
  unsigned __int64 v286; // rax
  int v287; // edi
  _QWORD *v288; // r9
  unsigned __int64 v289; // r8
  unsigned int v293; // ecx
  __int64 v294; // rbx
  _DWORD *v295; // rsi
  _QWORD *v296; // rcx
  _QWORD *v297; // rdx
  _QWORD *v298; // r8
  int v299; // r10d
  unsigned int v302; // ecx
  signed int v303; // r11d
  _QWORD *v304; // r9
  _QWORD *v305; // rdx
  _QWORD *v306; // rcx
  unsigned int v309; // ecx
  int v310; // edx
  signed __int64 v311; // rbx
  int v312; // r8d
  __int64 v313; // rcx
  _DWORD *v314; // r9
  signed __int64 v315; // rsi
  unsigned int v316; // eax
  int v317; // r11d
  unsigned int v318; // r15d
  unsigned int v319; // ebx
  int v320; // r12d
  unsigned __int64 v321; // rbx
  unsigned __int64 v322; // r11
  unsigned __int64 v323; // rsi
  __int64 v324; // r11
  unsigned __int64 v325; // rdx
  unsigned __int64 v326; // r13
  unsigned int v327; // eax
  _QWORD *v328; // r8
  unsigned int v329; // r11d
  unsigned __int64 v330; // rdx
  unsigned __int64 v331; // rcx
  unsigned int v332; // ecx
  int v333; // r8d
  __int64 v334; // rcx
  int v335; // eax
  int v336; // r11d
  int v338; // ecx
  unsigned int v339; // r15d
  unsigned int v340; // r9d
  int v341; // r12d
  unsigned __int64 v342; // rbx
  unsigned __int64 v343; // rsi
  unsigned __int64 v344; // rdi
  unsigned __int64 v345; // rdx
  unsigned int v346; // eax
  unsigned int v347; // esi
  unsigned __int64 v348; // rdx
  unsigned int v349; // eax
  unsigned __int64 v350; // rcx
  int v351; // r8d
  unsigned int v352; // ecx
  int v353; // r8d
  __int64 v354; // rcx
  unsigned __int64 v355; // rcx
  unsigned __int64 v356; // rdx
  _BYTE *v357; // r14
  _BYTE *v360; // r14
  char *v361; // r10
  __int64 v362; // rdx
  unsigned int *v363; // r9
  _BYTE *v364; // rcx
  char *v365; // rbx
  unsigned __int64 v366; // r8
  _BYTE *v367; // r13
  int v368; // edi
  __int64 v369; // r13
  unsigned __int64 v370; // r8
  _QWORD *v371; // r12
  unsigned int v372; // r10d
  unsigned int v373; // r9d
  unsigned int v374; // edx
  __int64 v375; // r9
  int v376; // r15d
  unsigned int v377; // esi
  unsigned int *v378; // r9
  unsigned int v379; // r11d
  __int64 v380; // r8
  _QWORD *v381; // rcx
  _QWORD *v382; // rdx
  int v383; // r9d
  unsigned int v386; // ecx
  unsigned __int64 v388; // rbx
  signed int v389; // edi
  _QWORD *v390; // r9
  _QWORD *v391; // rdx
  _QWORD *v392; // rcx
  unsigned __int64 v393; // rax
  _QWORD *v394; // r10
  unsigned __int64 v395; // r8
  unsigned int v398; // ecx
  int v400; // edx
  __int64 v401; // r12
  int v402; // r8d
  __int64 v403; // rcx
  _DWORD *v404; // r9
  unsigned __int64 v405; // r10
  unsigned int v406; // eax
  int v407; // edi
  int v410; // ecx
  int v411; // esi
  __int64 v412; // r13
  char *v413; // r12
  unsigned int v414; // edx
  __int64 v415; // r9
  unsigned int v416; // r8d
  int v417; // edx
  unsigned int v418; // r10d
  int v419; // r15d
  unsigned int v420; // edi
  unsigned int v421; // r9d
  char *v422; // r8
  unsigned __int64 v423; // rdx
  unsigned __int64 v424; // rcx
  unsigned int *v425; // r9
  unsigned int v426; // r11d
  __int64 v427; // r8
  _QWORD *v428; // rcx
  int v429; // r9d
  char *v430; // rdx
  unsigned int v431; // ecx
  signed int v432; // ecx
  _QWORD *v433; // rdi
  unsigned int v434; // esi
  unsigned int v435; // eax
  int v436; // r15d
  char *v437; // rbx
  unsigned __int64 v438; // r11
  unsigned __int64 v439; // rdi
  char *v440; // r11
  char *v441; // r9
  unsigned __int64 i; // rcx
  char *v443; // rdx
  __int64 v444; // r8
  unsigned int v445; // eax
  unsigned int v446; // r11d
  unsigned __int64 v447; // rcx
  unsigned __int64 v448; // r11
  unsigned __int64 v449; // r12
  unsigned int *v450; // rcx
  unsigned __int64 v451; // rbx
  int v452; // r9d
  unsigned __int64 v453; // rax
  int v454; // esi
  unsigned __int64 v455; // rdi
  unsigned __int64 v456; // r15
  __int64 v457; // r10
  unsigned __int64 v458; // rax
  int v459; // eax
  unsigned __int64 v460; // rbx
  unsigned __int64 v461; // rcx
  int v462; // ecx
  unsigned int *v463; // rsi
  _BYTE *v464; // r15
  _BYTE *v465; // r8
  char *v466; // r10
  _BYTE *v467; // r14
  unsigned __int64 v468; // r13
  unsigned __int64 v469; // r12
  _QWORD *v470; // rcx
  _WORD *v471; // r14
  unsigned __int64 v472; // rcx
  char v473; // al
  unsigned __int64 v474; // rdx
  unsigned int v475; // ecx
  int v476; // eax
  int v477; // r8d
  unsigned __int64 v478; // r10
  unsigned __int64 v479; // rcx
  char *v480; // rdx
  _DWORD *v481; // rdx
  _QWORD *v482; // rcx
  int v483; // r10d
  _QWORD *v484; // r8
  _QWORD *v485; // rdx
  unsigned int v486; // ecx
  signed int v487; // r10d
  _QWORD *v488; // r9
  _QWORD *v489; // rdx
  _QWORD *v490; // rcx
  unsigned int v492; // ecx
  char *v493; // r13
  char *v494; // r9
  _BYTE *v495; // r14
  unsigned __int64 v496; // rsi
  unsigned __int64 v497; // r12
  _QWORD *v498; // rcx
  _WORD *v499; // r14
  _BYTE *v500; // r14
  unsigned __int64 v501; // rcx
  char v502; // al
  int v503; // ecx
  unsigned int *v504; // rsi
  _BYTE *v505; // r8
  char *v506; // r10
  _BYTE *v507; // r14
  unsigned __int64 v508; // r13
  unsigned __int64 v509; // r12
  _QWORD *v510; // rcx
  _WORD *v511; // r14
  unsigned __int64 v512; // rcx
  char v513; // al
  unsigned __int64 v519; // rcx
  _BYTE *v520; // r12
  char *v521; // r13
  unsigned __int64 v522; // rdi
  _BYTE *v523; // r14
  unsigned __int64 v524; // rsi
  _QWORD *v525; // rcx
  _WORD *v526; // r14
  unsigned __int64 v527; // rcx
  char v528; // al
  unsigned __int64 v532; // rcx
  unsigned __int64 v533; // rdx
  _BYTE *v534; // r14
  unsigned __int64 v535; // r10
  char *v536; // r13
  char *v537; // r9
  unsigned __int64 v538; // rsi
  _BYTE *v539; // r14
  unsigned __int64 v540; // r12
  _QWORD *v541; // rcx
  _WORD *v542; // r14
  unsigned __int64 v543; // rcx
  char v544; // al
  unsigned __int64 v545; // rcx
  unsigned __int64 v546; // rdx
  _BYTE *v547; // r14
  int v552; // r15d
  int v553; // esi
  size_t v554; // rdi
  unsigned int *v555; // rdi
  int v556; // r15d
  __int64 v557; // r9
  __int64 v558; // rdx
  unsigned int v559; // r8d
  _QWORD *v560; // r12
  unsigned int v561; // r13d
  __int64 v562; // rcx
  _QWORD *v563; // r8
  unsigned int v564; // esi
  int v565; // ebx
  unsigned int v566; // edx
  unsigned int v567; // r9d
  _DWORD *v568; // r8
  unsigned __int64 v569; // rdx
  unsigned __int64 v570; // rcx
  unsigned int v571; // edi
  __int64 v572; // r9
  unsigned int v573; // ebx
  unsigned int v574; // r11d
  int v575; // ecx
  int v576; // esi
  _DWORD *v577; // rsi
  _QWORD *v578; // rcx
  _QWORD *v579; // rdx
  _QWORD *v580; // r8
  int v581; // r10d
  unsigned int v585; // ecx
  int v586; // edx
  int v587; // ecx
  __int64 v588; // r10
  char *v589; // rdx
  __int64 v590; // r10
  _BYTE *v591; // rdx
  __int64 v592; // r10
  char *v593; // r8
  __int64 v594; // r10
  _BYTE *v595; // r8
  unsigned __int64 v596; // rcx
  unsigned __int64 v597; // rdx
  _BYTE *v598; // r14
  unsigned int *v603; // rbx
  __int64 v604; // r9
  unsigned int v605; // r8d
  _QWORD *v606; // r12
  unsigned int v607; // r13d
  _QWORD *v608; // r8
  int v609; // r11d
  unsigned int v610; // r15d
  __int64 v611; // rdx
  unsigned int v612; // r9d
  _DWORD *v613; // r8
  unsigned __int64 v614; // rdx
  unsigned __int64 v615; // rcx
  unsigned int v616; // r13d
  __int64 v617; // rdx
  unsigned __int64 v618; // r9
  unsigned int v619; // edi
  __int64 v620; // rax
  unsigned int v621; // r10d
  int v622; // ecx
  _DWORD *v623; // r11
  int v624; // r10d
  unsigned __int64 v625; // r8
  int v626; // edx
  __int64 v627; // rcx
  __int64 v628; // rax
  char *v629; // r9
  unsigned int v630; // eax
  _QWORD *v631; // rcx
  _QWORD *v632; // rdx
  int v633; // r9d
  unsigned int v636; // ecx
  unsigned int v637; // r11d
  int v638; // ecx
  unsigned int v639; // r12d
  unsigned int v640; // ebx
  int v641; // r15d
  char *v642; // rbx
  unsigned __int64 v643; // r11
  unsigned __int64 v644; // rsi
  char *v645; // r11
  char *v646; // r11
  unsigned __int64 v647; // r13
  char *v648; // r9
  unsigned __int64 k; // rcx
  char *v650; // r8
  _DWORD *v651; // rbx
  bool v652; // zf
  int v653; // r9d
  __int64 v654; // rcx
  int v655; // edx
  _DWORD *v656; // r8
  __int64 v657; // rax
  unsigned __int64 v658; // r10
  unsigned int v659; // eax
  _DWORD *v660; // rcx
  _DWORD *v661; // rdx
  int v662; // r10d
  unsigned int v666; // ecx
  unsigned __int64 v667; // rcx
  unsigned __int64 v668; // rdx
  _BYTE *v669; // r14
  unsigned __int64 v670; // rdi
  unsigned __int64 v671; // r8
  _BYTE *v672; // r14
  unsigned __int64 v673; // rsi
  _QWORD *v674; // rcx
  __int64 v675; // rbx
  _WORD *v676; // r14
  unsigned __int64 v677; // rcx
  char v678; // al
  unsigned __int64 v679; // rcx
  unsigned __int64 v680; // rdx
  _BYTE *v681; // r14
  unsigned __int64 v682; // rcx
  unsigned __int64 v683; // rdx
  _BYTE *v684; // r14
  __int64 v685; // r9
  unsigned __int64 v686; // rcx
  unsigned __int64 v687; // rdx
  unsigned int v688; // ecx
  int v689; // eax
  int v690; // r9d
  unsigned __int64 v691; // rcx
  char *v692; // rdx
  _DWORD *v693; // rsi
  _QWORD *v694; // rcx
  _QWORD *v695; // rdx
  _QWORD *v696; // r8
  int v697; // r10d
  unsigned int v701; // ecx
  __int64 v702; // r10
  char *v703; // rdx
  int v705; // ecx
  _QWORD *v706; // r15
  _DWORD *v707; // r9
  int v708; // r8d
  __int64 v709; // rcx
  unsigned __int64 v710; // r10
  unsigned int v711; // eax
  int v712; // edx
  int v713; // ebx
  unsigned int v714; // r12d
  unsigned int v715; // r13d
  char *v716; // rbx
  unsigned __int64 v717; // rdi
  unsigned __int64 v718; // r15
  char *v719; // r10
  unsigned __int64 v720; // rdi
  char *v721; // r9
  unsigned __int64 j; // rcx
  char *v723; // r8
  __int64 v724; // r9
  unsigned __int64 v725; // rcx
  unsigned __int64 v726; // rdx
  unsigned int v727; // ecx
  int v728; // eax
  int v729; // r9d
  unsigned __int64 v730; // rcx
  char *v731; // rdx
  unsigned int v732; // eax
  signed int v734; // ebx
  _QWORD *v735; // r9
  _QWORD *v736; // rdx
  _QWORD *v737; // rcx
  unsigned int v740; // ecx
  __int64 v742; // r10
  char *v743; // r8
  __int64 v744; // r9
  _BYTE *v745; // rdx
  signed int v749; // r11d
  _QWORD *v750; // r9
  _QWORD *v751; // rdx
  _QWORD *v752; // rcx
  unsigned int v755; // ecx
  int v757; // edx
  _DWORD *v758; // r9
  int v759; // r8d
  __int64 v760; // rcx
  char *v761; // rsi
  unsigned int v762; // eax
  int v763; // r11d
  __int64 v764; // r10
  _BYTE *v765; // r8
  _DWORD *v766; // rdx
  unsigned int v767; // edi
  int v768; // r15d
  unsigned __int64 v769; // rbx
  _QWORD *v770; // rcx
  int v771; // r10d
  _QWORD *v772; // r8
  _QWORD *v773; // rdx
  unsigned int v776; // ecx
  _DWORD *v777; // r8
  unsigned __int64 v778; // rdx
  unsigned __int64 v779; // rcx
  _BYTE *v780; // r14
  unsigned __int64 v781; // rdx
  unsigned __int64 v782; // rcx
  size_t v783; // rbx
  _BYTE *v784; // r8
  int v785; // ebx
  size_t v786; // rdi
  int v787; // esi
  unsigned int v790; // r8d
  __int64 v791; // rcx
  unsigned int v792; // r8d
  __int64 v793; // rcx
  unsigned int v794; // r8d
  __int64 v795; // rcx
  unsigned int v796; // eax
  _QWORD *v797; // rcx
  _WORD *v798; // r14
  int v799; // esi
  unsigned __int64 v800; // rcx
  char v801; // al
  unsigned __int64 v802; // rcx
  unsigned __int64 v803; // rdx
  _BYTE *v804; // r14
  unsigned __int64 v805; // r10
  unsigned __int64 v806; // r9
  unsigned __int64 v807; // rdi
  int v808; // r8d
  unsigned __int64 v809; // r12
  int v810; // edx
  int v811; // ecx
  __int64 v812; // rbx
  unsigned __int64 v813; // rax
  unsigned int *v814; // r15
  __int64 v815; // r8
  unsigned int v816; // r12d
  _QWORD *v817; // r11
  unsigned __int64 v818; // rsi
  unsigned int v819; // r9d
  unsigned int v820; // r13d
  __int64 v821; // r10
  int v822; // edx
  _DWORD *v823; // r8
  int v824; // r11d
  unsigned __int64 v825; // rdx
  unsigned __int64 v826; // rcx
  _QWORD *v827; // rcx
  _WORD *v828; // r14
  _BYTE *v829; // r14
  unsigned __int64 v830; // rcx
  char v831; // al
  unsigned __int64 v832; // rcx
  unsigned __int64 v833; // rdx
  _BYTE *v834; // r14
  _BYTE *v835; // r15
  char *v836; // r13
  char *v837; // r9
  unsigned __int64 v838; // rsi
  _BYTE *v839; // r14
  unsigned __int64 v840; // rcx
  _QWORD *v841; // rcx
  _WORD *v842; // r14
  unsigned __int64 v843; // rcx
  char v844; // al
  unsigned __int64 v845; // rcx
  unsigned __int64 v846; // rdx
  _BYTE *v847; // r14
  unsigned __int64 v848; // rdi
  unsigned __int64 v849; // r8
  _BYTE *v850; // r14
  _QWORD *v851; // rcx
  __int64 v852; // r10
  _WORD *v853; // r14
  unsigned __int64 v854; // rcx
  char v855; // al
  unsigned __int64 v856; // r12
  unsigned __int64 v857; // rsi
  signed int v859; // ecx
  signed int v861; // r10d
  _QWORD *v862; // r9
  _QWORD *v863; // rdx
  _QWORD *v864; // rcx
  int v867; // eax
  unsigned __int64 v868; // rbx
  unsigned __int64 v869; // rcx
  int v870; // ecx
  int v871; // ecx
  unsigned __int64 v872; // r13
  _BYTE *v873; // r8
  char *v874; // r10
  _BYTE *v875; // r14
  unsigned __int64 v876; // r12
  char *v877; // r13
  char *v878; // r9
  unsigned __int64 v879; // rsi
  _BYTE *v880; // r14
  unsigned __int64 v881; // r12
  unsigned int v882; // eax
  unsigned __int64 v883; // r11
  unsigned int *v884; // rcx
  __int64 v885; // rbx
  unsigned __int64 v886; // rax
  int v887; // eax
  int v888; // r8d
  __int64 v889; // rcx
  unsigned __int64 v890; // r8
  _QWORD *v891; // rdx
  _QWORD *v892; // rcx
  int v893; // esi
  unsigned int v896; // ecx
  int v897; // ecx
  int v898; // r10d
  unsigned int v899; // r11d
  unsigned int v900; // r9d
  unsigned __int128 v901; // rax
  unsigned __int128 v902; // rax
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
  unsigned int v918; // ecx
  unsigned __int64 v920; // r11
  unsigned __int64 v921; // rsi
  __int64 v922; // r11
  unsigned int v923; // eax
  unsigned __int64 v924; // rdx
  unsigned int v925; // eax
  unsigned int v926; // r11d
  int v927; // eax
  int v928; // eax
  int v929; // r11d
  unsigned int v930; // eax
  unsigned int v931; // r11d
  unsigned __int64 v932; // rcx
  unsigned __int64 v933; // rdx
  unsigned int v934; // ecx
  unsigned int *v935; // rbx
  __int64 v936; // r15
  __int64 v937; // r12
  __int64 v938; // rdi
  int v939; // r14d
  signed int v942; // ecx
  unsigned int *v943; // r9
  __int64 v944; // r8
  _QWORD *v945; // rdx
  __int64 v946; // r13
  unsigned __int64 v947; // rdi
  unsigned int v948; // r12d
  unsigned int v949; // esi
  unsigned int v950; // eax
  int v951; // r10d
  unsigned int v952; // r9d
  _DWORD *v953; // r8
  unsigned __int64 v954; // rdx
  unsigned __int64 v955; // rcx
  char *v956; // r9
  __int64 v957; // rdx
  unsigned int v958; // r15d
  char *v959; // rsi
  _QWORD *v960; // r11
  int v961; // r14d
  unsigned int v962; // r10d
  _DWORD *v963; // rbx
  int v964; // r10d
  __int64 v965; // rcx
  int v966; // edx
  _DWORD *v967; // r8
  __int64 v968; // rax
  signed __int64 v969; // r9
  unsigned int v970; // eax
  __int64 v971; // r9
  char *v972; // rdx
  _QWORD *v973; // rcx
  _QWORD *v974; // rdx
  int v975; // r9d
  unsigned int v978; // ecx
  int v981; // ecx
  __int64 v982; // rsi
  _DWORD *v983; // rdi
  char *v984; // rcx
  _QWORD *v985; // rdx
  char *v986; // r8
  int v987; // r10d
  unsigned int v990; // ecx
  signed int v993; // ebx
  char *v994; // r9
  _QWORD *v995; // rdx
  char *v996; // rcx
  unsigned int v1000; // ecx
  __int64 v1002; // rcx
  int v1003; // edx
  _DWORD *v1004; // r9
  int v1005; // r8d
  signed __int64 v1006; // rsi
  signed __int64 v1007; // r10
  unsigned int v1008; // eax
  __int64 v1009; // r10
  _BYTE *v1010; // r8
  int v1011; // ebx
  unsigned int v1012; // esi
  unsigned int v1013; // r8d
  int v1014; // r8d
  __int64 v1015; // rdx
  __int64 v1016; // r13
  __int64 v1017; // r12
  unsigned int v1018; // r15d
  unsigned int v1019; // esi
  char *v1020; // r11
  int v1021; // eax
  __int64 v1022; // r10
  _QWORD *v1023; // rcx
  _QWORD *v1024; // rdx
  unsigned __int64 v1025; // r8
  int v1026; // ebx
  unsigned int v1029; // ecx
  int v1030; // r12d
  unsigned __int64 v1031; // rbx
  unsigned __int64 v1032; // r15
  unsigned __int64 v1033; // rdi
  unsigned __int64 v1034; // r11
  unsigned int v1035; // eax
  _QWORD *v1036; // r11
  unsigned __int64 v1037; // rdx
  unsigned int v1038; // eax
  unsigned int v1039; // r8d
  unsigned int v1040; // r15d
  int v1041; // eax
  unsigned int v1042; // eax
  unsigned __int64 v1043; // rcx
  unsigned __int64 v1044; // rdx
  unsigned int v1045; // ecx
  unsigned int v1048; // ebx
  int v1049; // edx
  int v1050; // r9d
  __int64 v1051; // rcx
  __int64 v1052; // r8
  _DWORD *v1053; // r10
  char *v1054; // rcx
  unsigned int v1055; // eax
  __int64 v1056; // r10
  _BYTE *v1057; // rcx
  char *v1058; // r9
  int v1059; // ebx
  int v1060; // ecx
  unsigned int v1061; // r13d
  __int64 v1062; // rbx
  unsigned int v1063; // edi
  int v1064; // r12d
  unsigned int v1065; // r9d
  _DWORD *v1066; // r11
  int v1067; // r10d
  __int64 v1068; // rcx
  int v1069; // edx
  unsigned int *v1070; // r8
  __int64 v1071; // rax
  signed __int64 v1072; // r9
  unsigned int v1073; // eax
  __int64 v1074; // r9
  _BYTE *v1075; // rdx
  unsigned __int64 v1076; // rbx
  _QWORD *v1077; // rcx
  _QWORD *v1078; // rdx
  int v1079; // r9d
  unsigned int v1082; // ecx
  int v1085; // ecx
  __int64 v1086; // rbx
  _DWORD *v1087; // rsi
  _QWORD *v1088; // rcx
  _QWORD *v1089; // rdx
  _QWORD *v1090; // r8
  int v1091; // r10d
  unsigned int v1094; // ecx
  signed int v1097; // r11d
  _QWORD *v1098; // r9
  _QWORD *v1099; // rdx
  _QWORD *v1100; // rcx
  unsigned int v1104; // ecx
  __int64 v1106; // rcx
  int v1107; // edx
  unsigned int *v1108; // r9
  int v1109; // r8d
  signed __int64 v1110; // rbx
  signed __int64 v1111; // rsi
  unsigned int v1112; // eax
  __int64 v1113; // r10
  _BYTE *v1114; // r8
  int v1115; // r11d
  unsigned int v1116; // r15d
  int v1117; // r12d
  unsigned __int64 v1118; // rbx
  unsigned __int64 v1119; // r11
  unsigned __int64 v1120; // rsi
  __int64 v1121; // r11
  unsigned int v1122; // eax
  unsigned __int64 v1123; // r13
  unsigned __int64 v1124; // rdx
  unsigned int v1125; // eax
  unsigned int v1126; // r8d
  unsigned int v1127; // r11d
  int v1128; // eax
  int v1129; // eax
  int v1130; // r11d
  unsigned __int64 v1131; // rcx
  unsigned __int64 v1132; // rdx
  unsigned int v1133; // ecx
  __int64 v1134; // r9
  __int64 v1135; // r8
  unsigned int v1136; // r13d
  int v1137; // r15d
  unsigned int v1138; // esi
  __int64 v1139; // rdi
  __int64 v1140; // r14
  int v1141; // eax
  __int64 v1142; // r10
  __int64 v1143; // rbx
  _QWORD *v1144; // rdx
  unsigned __int64 v1145; // r8
  _QWORD *v1146; // rcx
  int v1147; // r11d
  unsigned int v1150; // ecx
  unsigned int v1153; // r11d
  int v1154; // edx
  signed __int64 v1155; // r10
  __int64 v1156; // rcx
  int v1157; // r8d
  _DWORD *v1158; // r9
  __int64 v1159; // rbx
  unsigned int v1160; // eax
  __int64 v1161; // r10
  _BYTE *v1162; // r8
  _BYTE *v1163; // r9
  int v1164; // r11d
  int v1165; // ecx
  unsigned __int128 v1166; // rax
  unsigned __int64 v1167; // r13
  _BYTE *v1168; // r8
  char *v1169; // r10
  _BYTE *v1170; // r14
  unsigned __int64 v1171; // r12
  unsigned __int128 v1172; // rax
  _QWORD *v1173; // rcx
  _WORD *v1174; // r14
  unsigned __int64 v1175; // rcx
  char v1176; // al
  unsigned __int64 v1177; // rcx
  unsigned __int64 v1178; // rdx
  _BYTE *v1179; // r14
  unsigned __int128 v1180; // rax
  unsigned __int128 v1181; // rax
  _BYTE *v1182; // r12
  char *v1183; // r13
  _BYTE *v1184; // r14
  unsigned __int64 v1185; // rdi
  unsigned __int64 v1186; // rsi
  unsigned __int128 v1187; // rax
  _QWORD *v1188; // rcx
  _WORD *v1189; // r14
  unsigned __int64 v1190; // rcx
  char v1191; // al
  unsigned __int64 v1192; // rcx
  unsigned __int64 v1193; // rdx
  _BYTE *v1194; // r14
  unsigned __int128 v1195; // rax
  unsigned __int128 v1196; // rax
  int v1197; // [rsp+28h] [rbp-E0h]
  unsigned int v1198; // [rsp+28h] [rbp-E0h]
  int v1199; // [rsp+28h] [rbp-E0h]
  unsigned int v1200; // [rsp+28h] [rbp-E0h]
  int v1201; // [rsp+28h] [rbp-E0h]
  unsigned int v1202; // [rsp+28h] [rbp-E0h]
  unsigned int v1203; // [rsp+28h] [rbp-E0h]
  int v1204; // [rsp+28h] [rbp-E0h]
  int v1205; // [rsp+28h] [rbp-E0h]
  int v1206; // [rsp+2Ch] [rbp-DCh]
  unsigned int v1207; // [rsp+2Ch] [rbp-DCh]
  unsigned int v1208; // [rsp+2Ch] [rbp-DCh]
  unsigned int v1209; // [rsp+2Ch] [rbp-DCh]
  int v1210; // [rsp+2Ch] [rbp-DCh]
  int v1211; // [rsp+2Ch] [rbp-DCh]
  int v1212; // [rsp+2Ch] [rbp-DCh]
  unsigned int v1213; // [rsp+2Ch] [rbp-DCh]
  int v1214; // [rsp+2Ch] [rbp-DCh]
  int v1215; // [rsp+30h] [rbp-D8h]
  unsigned int v1216; // [rsp+30h] [rbp-D8h]
  unsigned int v1217; // [rsp+30h] [rbp-D8h]
  unsigned int v1218; // [rsp+30h] [rbp-D8h]
  unsigned int v1219; // [rsp+30h] [rbp-D8h]
  unsigned int v1220; // [rsp+30h] [rbp-D8h]
  unsigned int v1221; // [rsp+30h] [rbp-D8h]
  unsigned int v1222; // [rsp+34h] [rbp-D4h]
  unsigned int v1223; // [rsp+34h] [rbp-D4h]
  signed int v1224; // [rsp+34h] [rbp-D4h]
  int v1225; // [rsp+34h] [rbp-D4h]
  int v1226; // [rsp+34h] [rbp-D4h]
  unsigned int v1227; // [rsp+34h] [rbp-D4h]
  int v1228; // [rsp+34h] [rbp-D4h]
  unsigned int v1229; // [rsp+34h] [rbp-D4h]
  int v1230; // [rsp+34h] [rbp-D4h]
  int v1231; // [rsp+34h] [rbp-D4h]
  unsigned int *v1232; // [rsp+38h] [rbp-D0h]
  unsigned int *v1233; // [rsp+38h] [rbp-D0h]
  unsigned int *v1234; // [rsp+38h] [rbp-D0h]
  int v1235; // [rsp+40h] [rbp-C8h]
  unsigned int v1236; // [rsp+40h] [rbp-C8h]
  int v1237; // [rsp+40h] [rbp-C8h]
  int v1238; // [rsp+40h] [rbp-C8h]
  unsigned int v1239; // [rsp+40h] [rbp-C8h]
  int v1240; // [rsp+40h] [rbp-C8h]
  unsigned int v1241; // [rsp+40h] [rbp-C8h]
  int v1242; // [rsp+40h] [rbp-C8h]
  unsigned int v1243; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v1244; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v1245; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v1246; // [rsp+48h] [rbp-C0h]
  unsigned int v1247; // [rsp+50h] [rbp-B8h]
  unsigned int v1248; // [rsp+50h] [rbp-B8h]
  unsigned int v1249; // [rsp+50h] [rbp-B8h]
  unsigned int v1250; // [rsp+50h] [rbp-B8h]
  unsigned int v1251; // [rsp+50h] [rbp-B8h]
  unsigned int v1252; // [rsp+50h] [rbp-B8h]
  unsigned int v1253; // [rsp+50h] [rbp-B8h]
  unsigned int v1254; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v1255; // [rsp+58h] [rbp-B0h]
  unsigned int *v1256; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v1257; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v1258; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v1259; // [rsp+60h] [rbp-A8h]
  __int64 v1260; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v1261; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v1262; // [rsp+60h] [rbp-A8h]
  unsigned int *v1263; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v1264; // [rsp+68h] [rbp-A0h]
  unsigned int *v1265; // [rsp+68h] [rbp-A0h]
  int v1266; // [rsp+70h] [rbp-98h]
  int v1267; // [rsp+70h] [rbp-98h]
  unsigned int v1268; // [rsp+70h] [rbp-98h]
  unsigned int v1269; // [rsp+70h] [rbp-98h]
  unsigned int v1270; // [rsp+70h] [rbp-98h]
  unsigned int v1271; // [rsp+70h] [rbp-98h]
  int v1272; // [rsp+70h] [rbp-98h]
  unsigned int v1273; // [rsp+70h] [rbp-98h]
  unsigned __int64 v1274; // [rsp+78h] [rbp-90h]
  _BYTE *v1275; // [rsp+78h] [rbp-90h]
  unsigned __int64 v1276; // [rsp+78h] [rbp-90h]
  unsigned __int64 v1277; // [rsp+80h] [rbp-88h]
  _BYTE *v1278; // [rsp+80h] [rbp-88h]
  _QWORD *v1279; // [rsp+80h] [rbp-88h]
  _QWORD *v1280; // [rsp+80h] [rbp-88h]
  unsigned __int64 v1281; // [rsp+88h] [rbp-80h]
  unsigned __int64 v1282; // [rsp+88h] [rbp-80h]
  unsigned __int64 v1283; // [rsp+88h] [rbp-80h]
  char *v1284; // [rsp+88h] [rbp-80h]
  unsigned __int64 v1285; // [rsp+90h] [rbp-78h]
  unsigned __int64 v1286; // [rsp+90h] [rbp-78h]
  unsigned __int64 v1287; // [rsp+90h] [rbp-78h]
  _QWORD *v1288; // [rsp+90h] [rbp-78h]
  unsigned __int64 v1289; // [rsp+90h] [rbp-78h]
  unsigned int v1290; // [rsp+98h] [rbp-70h]
  unsigned int v1291; // [rsp+98h] [rbp-70h]
  int v1292; // [rsp+98h] [rbp-70h]
  unsigned int v1293; // [rsp+98h] [rbp-70h]
  unsigned int v1294; // [rsp+98h] [rbp-70h]
  int v1295; // [rsp+98h] [rbp-70h]
  int v1296; // [rsp+98h] [rbp-70h]
  unsigned int v1297; // [rsp+98h] [rbp-70h]
  unsigned int v1298; // [rsp+A0h] [rbp-68h]
  unsigned int v1299; // [rsp+A0h] [rbp-68h]
  unsigned int v1300; // [rsp+A0h] [rbp-68h]
  unsigned int v1301; // [rsp+A0h] [rbp-68h]
  unsigned int v1302; // [rsp+A0h] [rbp-68h]
  unsigned int v1303; // [rsp+A0h] [rbp-68h]
  unsigned int v1304; // [rsp+A0h] [rbp-68h]
  unsigned int v1305; // [rsp+A0h] [rbp-68h]
  unsigned int *v1306; // [rsp+A0h] [rbp-68h]
  char *v1307; // [rsp+A8h] [rbp-60h]
  char *v1308; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v1309; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v1310; // [rsp+A8h] [rbp-60h]
  __int64 v1311; // [rsp+A8h] [rbp-60h]
  _QWORD *v1312; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v1313; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v1314; // [rsp+B0h] [rbp-58h]
  __int64 v1315; // [rsp+B0h] [rbp-58h]
  _QWORD *v1316; // [rsp+B0h] [rbp-58h]
  char *v1317; // [rsp+B0h] [rbp-58h]
  int v1318; // [rsp+B4h] [rbp-54h]
  _BYTE *v1319; // [rsp+B8h] [rbp-50h]
  _BYTE *v1320; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v1321; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v1322; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v1323; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v1324; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v1325; // [rsp+C0h] [rbp-48h]
  __int64 v1326; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v1327; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v1328; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v1329; // [rsp+C8h] [rbp-40h]
  char *v1330; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v1331; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v1332; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v1333; // [rsp+C8h] [rbp-40h]
  char *v1334; // [rsp+C8h] [rbp-40h]
  __int64 v1335; // [rsp+C8h] [rbp-40h]
  int v1336; // [rsp+CCh] [rbp-3Ch]
  unsigned __int64 v1337; // [rsp+D0h] [rbp-38h]
  char *v1338; // [rsp+D0h] [rbp-38h]
  char *v1339; // [rsp+D0h] [rbp-38h]
  __int64 v1340; // [rsp+D0h] [rbp-38h]
  size_t v1341; // [rsp+D0h] [rbp-38h]
  char *v1342; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v1343; // [rsp+D8h] [rbp-30h]
  _QWORD *v1344; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v1345; // [rsp+D8h] [rbp-30h]
  __int64 v1346; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v1347; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v1348; // [rsp+E0h] [rbp-28h]
  __int64 v1349; // [rsp+E0h] [rbp-28h]
  _QWORD *v1350; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v1351; // [rsp+E8h] [rbp-20h]
  int m; // [rsp+ECh] [rbp-1Ch]
  unsigned __int64 v1353; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1354; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1355; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1356; // [rsp+F0h] [rbp-18h]
  __int64 v1357; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1358; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v1359; // [rsp+F0h] [rbp-18h]
  char *v1360; // [rsp+F8h] [rbp-10h]
  __int64 v1361; // [rsp+F8h] [rbp-10h]
  __int64 v1362; // [rsp+100h] [rbp-8h]
  char *v1363; // [rsp+100h] [rbp-8h]
  __int64 v1364; // [rsp+100h] [rbp-8h]
  __int64 v1365; // [rsp+100h] [rbp-8h]
  _QWORD *v1366; // [rsp+108h] [rbp+0h]
  unsigned __int64 v1367; // [rsp+108h] [rbp+0h]
  unsigned __int64 v1368; // [rsp+118h] [rbp+10h]
  unsigned __int64 v1369; // [rsp+118h] [rbp+10h]
  unsigned __int64 v1370; // [rsp+118h] [rbp+10h]
  unsigned __int64 v1371; // [rsp+118h] [rbp+10h]
  __int64 v1372; // [rsp+120h] [rbp+18h]
  __int64 v1373; // [rsp+120h] [rbp+18h]
  unsigned __int64 v1374; // [rsp+128h] [rbp+20h]
  unsigned __int64 v1375; // [rsp+130h] [rbp+28h]
  unsigned __int64 v1376; // [rsp+130h] [rbp+28h]
  unsigned __int64 v1377; // [rsp+130h] [rbp+28h]
  int v1378; // [rsp+140h] [rbp+38h] BYREF
  int v1379; // [rsp+148h] [rbp+40h] BYREF
  unsigned int v1380; // [rsp+150h] [rbp+48h] BYREF
  int v1381; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v1382; // [rsp+160h] [rbp+58h] BYREF
  int v1383; // [rsp+168h] [rbp+60h] BYREF
  __int64 v1384; // [rsp+170h] [rbp+68h]
  int v1385; // [rsp+178h] [rbp+70h]
  int v1387; // [rsp+1E0h] [rbp+D8h]
  int v1388; // [rsp+1E8h] [rbp+E0h]
  unsigned int v1390; // [rsp+200h] [rbp+F8h]
  int v1391; // [rsp+200h] [rbp+F8h]
  int v1392; // [rsp+200h] [rbp+F8h]
  int v1393; // [rsp+200h] [rbp+F8h]
  unsigned int v1394; // [rsp+200h] [rbp+F8h]
  int v1395; // [rsp+200h] [rbp+F8h]
  int v1396; // [rsp+200h] [rbp+F8h]
  int v1397; // [rsp+200h] [rbp+F8h]
  int v1398; // [rsp+200h] [rbp+F8h]

  v1388 = (int)a3;
  v1387 = (int)a2;
  v7 = 0;
  v8 = a4;
  v10 = *(_QWORD *)(a1 + 0x40000);
  v11 = a2;
  v12 = v10 + (unsigned int)(*(_DWORD *)(a1 + 262168) - *(_DWORD *)(a1 + 262172)) - *(_QWORD *)(a1 + 262152);
  v13 = a1;
  if ( v12 >= 0x10000 )
  {
    *(_QWORD *)(a1 + 262184) = 0LL;
    if ( a7 == 2 && a5 < 1 || *a4 > 0x7E000000 )
      return v7;
    v14 = a2;
    *(_QWORD *)(a1 + 0x40000) = v10 + (int)*a4;
    v15 = a2;
    v16 = (int)*a4;
    v17 = a3;
    *a4 = 0;
    v1232 = v11;
    v18 = (unsigned __int64)&a3[a5 - 5];
    v19 = (char *)v11 + v16;
    if ( a7 != 2 )
      v18 = (unsigned __int64)&a3[a5];
    v1263 = v14;
    v1274 = v18;
    v20 = (unsigned __int64)(v19 - 12);
    v1360 = v19;
    v1307 = v19 - 12;
    v1244 = (unsigned __int64)(v19 - 5);
    v1319 = a3;
    v1255 = 0LL;
    v1281 = 0LL;
    if ( (int)v16 < 13 )
      goto LABEL_7;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v15 > v20 )
          goto LABEL_355;
        v32 = 3;
        v1206 = 3;
        v33 = *(unsigned int *)(a1 + 262172);
        v34 = *(_QWORD **)(a1 + 262152);
        v35 = v33;
        v36 = *(unsigned int *)(a1 + 262168);
        v37 = v36 + (_DWORD)v15 - (_DWORD)v34;
        v1312 = v34;
        v1390 = v37;
        v1298 = *(_DWORD *)(a1 + 262172);
        v1286 = *(_QWORD *)(a1 + 262160);
        if ( (int)v33 + 0x10000 <= v37 )
          v35 = v37 - 0xFFFF;
        v1266 = 256;
        v1222 = v35;
        v1197 = 0;
        v1347 = *(_QWORD *)(a1 + 262160) + (unsigned int)v36 - v33;
        v38 = 0;
        v39 = 0;
        v1322 = 0LL;
        v1247 = 0;
        v40 = *v1232;
        v1290 = *v1232;
        v41 = *(_DWORD *)(a1 + 262176);
        if ( v41 < v37 )
        {
          v42 = v41;
          do
          {
            v43 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v34 + v42 - v36)) >> 17;
            v44 = v41 - *(_DWORD *)(a1 + 4 * v43);
            if ( v44 > 0xFFFF )
              LOWORD(v44) = -1;
            ++v42;
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v41 + 0x20000) = v44;
            *(_DWORD *)(a1 + 4 * v43) = v41++;
          }
          while ( v41 < v37 );
          v40 = v1290;
          v38 = 0;
          v32 = 3;
          LODWORD(v33) = v1298;
        }
        v45 = (unsigned __int64)v1232;
        *(_DWORD *)(a1 + 262176) = v37;
        v46 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v1232) >> 17));
        if ( v46 >= v35 )
        {
          while ( 1 )
          {
            v47 = v38;
            if ( v1266 <= 0 )
            {
LABEL_80:
              v17 = v1319;
              v39 = v1247;
              break;
            }
            --v1266;
            if ( v46 < (unsigned int)v36 )
            {
              v58 = v1286;
              v59 = (_DWORD *)(v1286 + v46 - (unsigned int)v33);
              if ( v46 > (int)v36 - 4 || *v59 != v40 )
                goto LABEL_55;
              v144 = (_QWORD *)(v45 + 4);
              v145 = v45 + 4;
              v146 = v45 + 4;
              v147 = (_QWORD *)(v45 + (unsigned int)v36 - v46);
              v148 = v45 + 4;
              v149 = v45 + 4;
              if ( (unsigned __int64)v147 > v1244 )
                v147 = (_QWORD *)v1244;
              v150 = v59 + 1;
              if ( v144 >= (_QWORD *)((char *)v147 - 7) )
              {
LABEL_180:
                while ( v146 < (unsigned __int64)v147 - 7 )
                {
                  if ( *v144 != *v150 )
                  {
                    __asm { tzcnt   rax, rax }
                    v154 = ((unsigned int)_RAX >> 3) - v145 + (_DWORD)v144;
                    goto LABEL_183;
                  }
                  v144 = (_QWORD *)(v148 + 8);
                  ++v150;
                  v146 = (unsigned __int64)v144;
                  v148 += 8LL;
                  v149 = (unsigned __int64)v144;
                }
                if ( v149 < (unsigned __int64)v147 - 3 && *(_DWORD *)v150 == *(_DWORD *)v144 )
                {
                  v144 = (_QWORD *)((char *)v144 + 4);
                  v150 = (_QWORD *)((char *)v150 + 4);
                }
                if ( v144 < (_QWORD *)((char *)v147 - 1) && *(_WORD *)v150 == *(_WORD *)v144 )
                {
                  v144 = (_QWORD *)((char *)v144 + 2);
                  v150 = (_QWORD *)((char *)v150 + 2);
                }
                if ( v144 < v147 && *(_BYTE *)v150 == *(_BYTE *)v144 )
                  LODWORD(v144) = (_DWORD)v144 + 1;
                v154 = (_DWORD)v144 - v145;
              }
              else
              {
                if ( *v144 == *v150 )
                {
                  v146 = (unsigned __int64)(v144 + 1);
                  ++v150;
                  v144 = (_QWORD *)v146;
                  v148 = v146;
                  v149 = v146;
                  goto LABEL_180;
                }
                __asm { tzcnt   rcx, rax }
                v154 = (unsigned int)_RCX >> 3;
              }
LABEL_183:
              v155 = v154 + 4;
              v156 = (_QWORD *)((char *)v1232 + (int)(v154 + 4));
              if ( v156 == v147 && (unsigned __int64)v147 < v1244 )
              {
                v157 = v34;
                v158 = (_QWORD *)((char *)v1232 + v155);
                v159 = (unsigned __int64)v158;
                v160 = v158;
                v161 = (unsigned __int64)v158;
                if ( (unsigned __int64)v156 >= v1244 - 7 )
                {
                  while ( v159 < v1244 - 7 )
                  {
                    if ( *v158 != *v157 )
                    {
                      __asm { tzcnt   rax, rax }
                      v164 = ((unsigned int)_RAX >> 3) - (_DWORD)v156 + (_DWORD)v158;
                      goto LABEL_193;
                    }
                    v158 = v160 + 1;
                    ++v157;
LABEL_189:
                    v159 = (unsigned __int64)v158;
                    v160 = v158;
                    v161 = (unsigned __int64)v158;
                  }
                  if ( v161 < v1244 - 3 && *(_DWORD *)v157 == *(_DWORD *)v158 )
                  {
                    v158 = (_QWORD *)((char *)v158 + 4);
                    v157 = (_QWORD *)((char *)v157 + 4);
                  }
                  if ( (unsigned __int64)v158 < v1244 - 1 && *(_WORD *)v157 == *(_WORD *)v158 )
                  {
                    v158 = (_QWORD *)((char *)v158 + 2);
                    v157 = (_QWORD *)((char *)v157 + 2);
                  }
                  if ( (unsigned __int64)v158 < v1244 && *(_BYTE *)v157 == *(_BYTE *)v158 )
                    LODWORD(v158) = (_DWORD)v158 + 1;
                  v164 = (_DWORD)v158 - (_DWORD)v156;
                }
                else
                {
                  if ( *v156 == *v34 )
                  {
                    v158 = v156 + 1;
                    v157 = v34 + 1;
                    goto LABEL_189;
                  }
                  __asm { tzcnt   rcx, rax }
                  v164 = (unsigned int)_RCX >> 3;
                }
LABEL_193:
                v155 += v164;
              }
              v38 = v1197;
              v58 = v1286;
              if ( v155 <= v1206 )
              {
LABEL_55:
                v48 = v1232;
LABEL_56:
                v60 = v1390;
                goto LABEL_57;
              }
              v60 = v1390;
              v1206 = v155;
              v48 = v1232;
              v1247 = v1390 - v46;
            }
            else
            {
              v48 = v1232;
              v49 = v46 - (unsigned int)v36;
              if ( *(_WORD *)((char *)v1232 + v32 - 1) != *(_WORD *)((char *)v34 + v32 + v49 - 1)
                || *(_DWORD *)((char *)v34 + v49) != v40 )
              {
                v58 = v1286;
                goto LABEL_56;
              }
              v50 = v1232 + 1;
              v51 = (_DWORD)v1232 + 4;
              v52 = (_QWORD *)((char *)v34 + v49 + 4);
              v53 = (unsigned __int64)(v1232 + 1);
              v54 = v1232 + 1;
              v55 = (unsigned __int64)(v1232 + 1);
              if ( (unsigned __int64)(v1232 + 1) >= v1244 - 7 )
                goto LABEL_43;
              if ( *v52 != *v50 )
              {
                __asm { tzcnt   rcx, rax }
                v57 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v53 = (unsigned __int64)(v1232 + 3);
                ++v52;
                v50 = v1232 + 3;
                v54 = v1232 + 3;
                v55 = (unsigned __int64)(v1232 + 3);
LABEL_43:
                while ( v53 < v1244 - 7 )
                {
                  if ( *v52 != *v50 )
                  {
                    __asm { tzcnt   rax, rax }
                    v57 = ((unsigned int)_RAX >> 3) - v51 + (_DWORD)v50;
                    goto LABEL_198;
                  }
                  v50 = v54 + 2;
                  ++v52;
                  v53 = (unsigned __int64)v50;
                  v54 += 2;
                  v55 = (unsigned __int64)v50;
                }
                if ( v55 < v1244 - 3 && *(_DWORD *)v52 == *(_DWORD *)v50 )
                {
                  v50 = (_QWORD *)((char *)v50 + 4);
                  v52 = (_QWORD *)((char *)v52 + 4);
                }
                if ( (unsigned __int64)v50 < v1244 - 1 && *(_WORD *)v52 == *(_WORD *)v50 )
                {
                  v50 = (_QWORD *)((char *)v50 + 2);
                  v52 = (_QWORD *)((char *)v52 + 2);
                }
                if ( (unsigned __int64)v50 < v1244 && *(_BYTE *)v52 == *(_BYTE *)v50 )
                  LODWORD(v50) = (_DWORD)v50 + 1;
                v57 = (_DWORD)v50 - v51;
              }
LABEL_198:
              v60 = v1390;
              v169 = v57 + 4;
              v38 = v1197;
              v170 = v169 <= v32;
              v58 = v1286;
              v48 = v1232;
              if ( !v170 )
              {
                v1206 = v169;
                v1247 = v1390 - v46;
                goto LABEL_56;
              }
            }
LABEL_57:
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v46 + 0x20000) != 1 )
              goto LABEL_61;
            v61 = v46 - 1;
            if ( v38 )
            {
              v1197 = v47;
              if ( v47 != 2 )
                goto LABEL_61;
            }
            else
            {
              if ( (_BYTE)v40 != HIBYTE(v40) || (unsigned __int16)v40 != HIWORD(v40) )
              {
                v1197 = 1;
LABEL_61:
                v62 = v1222;
LABEL_62:
                v46 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v46 + 0x20000);
                goto LABEL_79;
              }
              v1197 = 2;
              v1322 = (unsigned int)LZ4HC_countPattern(v48 + 1, v1244, v40) + 4LL;
            }
            v62 = v1222;
            if ( v61 < v1222 || (unsigned int)v36 - v61 - 1 < 3 )
              goto LABEL_62;
            if ( v61 < (unsigned int)v36 )
            {
              v63 = 1;
              v64 = v58 + v61 - v1298;
            }
            else
            {
              v63 = 0;
              v64 = (unsigned __int64)v1312 + v61 - (unsigned int)v36;
            }
            if ( *(_DWORD *)v64 != v40 )
              goto LABEL_62;
            v65 = v1244;
            if ( v63 )
              v65 = v1347;
            v66 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v64 + 4), v65, v40) + 4LL;
            if ( v63 )
            {
              if ( v66 + v64 == v67 )
              {
                v790 = v40;
                v791 = 8 * (v66 & 3);
                if ( v791 )
                  v790 = __ROL4__(v40, v791);
                v66 += (unsigned int)LZ4HC_countPattern(v1312, v1244, v790);
              }
              v68 = v1286;
            }
            else
            {
              v68 = (unsigned __int64)v1312;
            }
            v69 = LZ4HC_reverseCountPattern(v64, v68, v40);
            v70 = v1312;
            v71 = v69;
            if ( !v63 && (_QWORD *)(v64 - v69) == v1312 && v1298 < (unsigned int)v36 )
            {
              v94 = v40;
              v95 = 8LL * (-v69 & 3);
              if ( v95 )
                v94 = __ROL4__(v40, v95);
              v96 = LZ4HC_reverseCountPattern(v1347, v1286, v94);
              v71 = v96 + v97;
              v70 = v1312;
            }
            v62 = v1222;
            v72 = v61 - v71;
            v73 = v1222;
            if ( v72 > v1222 )
              v73 = v72;
            v74 = v66 + v61 - v73;
            if ( v74 < v1322 || v66 > v1322 )
            {
              if ( (unsigned int)v36 - v73 - 1 >= 3 )
              {
                v32 = v1206;
                v91 = v1322;
                if ( v74 < v1322 )
                  v91 = v74;
                if ( v1206 >= v91 )
                {
                  v45 = (unsigned __int64)v1232;
                }
                else
                {
                  v92 = v36 - v73 - (_QWORD)v70;
                  v45 = (unsigned __int64)v1232;
                  if ( (unsigned __int64)v1232 + v92 > 0xFFFF )
                    goto LABEL_80;
                  v1206 = v91;
                  v32 = v91;
                  v1247 = v60 - v73;
                }
                v93 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v73 + 0x20000);
                if ( v93 > v73 )
                  goto LABEL_80;
                v46 = v73 - v93;
              }
              else
              {
                v46 = v36;
              }
            }
            else
            {
              v46 = v36;
              if ( (unsigned int)v36 - (v61 - (_DWORD)v1322 + (_DWORD)v66) - 1 >= 3 )
                v46 = v61 - v1322 + v66;
            }
LABEL_79:
            v34 = v1312;
            v75 = v46 < v62;
            v38 = v1197;
            v32 = v1206;
            LODWORD(v33) = v1298;
            v45 = (unsigned __int64)v1232;
            if ( v75 )
              goto LABEL_80;
          }
        }
        v76 = __PAIR64__(v32, v39);
        v1348 = __PAIR64__(v32, v39);
        v1277 = __PAIR64__(v32, v39);
        if ( v32 >= 4 )
          break;
        v14 = v1263;
        v18 = v1274;
        v15 = (unsigned int *)(v45 + 1);
        v20 = (unsigned __int64)v1307;
        v1232 = v15;
      }
      v77 = (unsigned __int64)v1307;
      v78 = (unsigned int *)v45;
      v1353 = v45;
      v1336 = v32;
      while ( 2 )
      {
        v79 = 0;
LABEL_84:
        v80 = HIDWORD(v1277);
        v1391 = HIDWORD(v1277);
        v81 = SHIDWORD(v1277);
        v82 = SHIDWORD(v1277) + v45;
        if ( v82 > v77 )
        {
          v1259 = 0LL;
          v83 = 0;
          v84 = 0LL;
          goto LABEL_86;
        }
        v195 = v82 - 2;
        v1255 = v82 - 2;
        v1287 = v82 - 2;
        v1215 = HIDWORD(v1277);
        v196 = *(unsigned int *)(a1 + 262172);
        v197 = v196;
        v198 = *(_QWORD **)(a1 + 262152);
        v1291 = *(_DWORD *)(a1 + 262168);
        v199 = v82 - 2 + v1291 - (_DWORD)v198;
        v1198 = *(_DWORD *)(a1 + 262172);
        v1344 = v198;
        v200 = 0;
        v1248 = v199;
        if ( (int)v196 + 0x10000 <= v199 )
          v197 = v199 - 0xFFFF;
        v1323 = *(_QWORD *)(a1 + 262160);
        v201 = v1323 + v1291 - v196;
        v1223 = v197;
        v202 = v195 - (_DWORD)v1232;
        v1368 = v201;
        v203 = a1;
        v1267 = 256;
        v1207 = *(_DWORD *)v195;
        v204 = *(_DWORD *)(a1 + 262176);
        v1235 = 0;
        v1313 = 0LL;
        v1299 = 0;
        if ( v204 < v199 )
        {
          v205 = v204;
          do
          {
            v206 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v198 + v205 - v1291)) >> 17;
            v207 = v204 - *(_DWORD *)(a1 + 4 * v206);
            if ( v207 > 0xFFFF )
              LOWORD(v207) = -1;
            ++v205;
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v204 + 0x20000) = v207;
            *(_DWORD *)(a1 + 4 * v206) = v204++;
          }
          while ( v204 < v199 );
          v81 = SHIDWORD(v1277);
          v200 = 0;
          v76 = v1348;
          v80 = HIDWORD(v1277);
          v195 = v82 - 2;
          v203 = a1;
        }
        *(_DWORD *)(v203 + 262176) = v199;
        v208 = *(_DWORD *)(v203 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v195) >> 17));
        v209 = v202;
        v1260 = v202;
        if ( v208 < v1223 )
        {
          v351 = HIDWORD(v1277);
          goto LABEL_488;
        }
        v210 = v1232;
        v211 = v1291;
        v212 = v1207;
        v213 = (char *)v1232 + v81;
        v1363 = (char *)v1232 + v81;
        while ( 1 )
        {
          v261 = 0;
          if ( v1267 <= 0 )
            break;
          --v1267;
          if ( v208 < v211 )
          {
            v280 = v1198;
            v281 = v208 - v1198;
            v282 = (_DWORD *)(v281 + v1323);
            if ( v208 > v211 - 4 || *v282 != v212 )
              goto LABEL_464;
            v283 = (_QWORD *)(v195 + 4);
            v284 = v282 + 1;
            v285 = (_QWORD *)(v195 + v211 - v208);
            v286 = (unsigned __int64)v283;
            v287 = v195 + 4;
            v288 = v283;
            v289 = (unsigned __int64)v283;
            if ( (unsigned __int64)v285 > v1244 )
              v285 = (_QWORD *)v1244;
            if ( v283 >= (_QWORD *)((char *)v285 - 7) )
            {
LABEL_385:
              while ( v286 < (unsigned __int64)v285 - 7 )
              {
                if ( *v284 != *v283 )
                {
                  __asm { tzcnt   rax, rax }
                  v293 = ((unsigned int)_RAX >> 3) - v287 + (_DWORD)v283;
                  goto LABEL_566;
                }
                v283 = v288 + 1;
                ++v284;
                v286 = (unsigned __int64)v283;
                ++v288;
                v289 = (unsigned __int64)v283;
              }
              if ( v289 < (unsigned __int64)v285 - 3 && *(_DWORD *)v284 == *(_DWORD *)v283 )
              {
                v283 = (_QWORD *)((char *)v283 + 4);
                v284 = (_QWORD *)((char *)v284 + 4);
              }
              if ( v283 < (_QWORD *)((char *)v285 - 1) && *(_WORD *)v284 == *(_WORD *)v283 )
              {
                v283 = (_QWORD *)((char *)v283 + 2);
                v284 = (_QWORD *)((char *)v284 + 2);
              }
              if ( v283 < v285 && *(_BYTE *)v284 == *(_BYTE *)v283 )
                LODWORD(v283) = (_DWORD)v283 + 1;
              v293 = (_DWORD)v283 - v287;
            }
            else
            {
              if ( *v284 == *v283 )
              {
                v286 = (unsigned __int64)(v283 + 1);
                v284 = v282 + 3;
                v283 = (_QWORD *)v286;
                v288 = (_QWORD *)v286;
                v289 = v286;
                goto LABEL_385;
              }
              __asm { tzcnt   rcx, rax }
              v293 = (unsigned int)_RCX >> 3;
            }
LABEL_566:
            v388 = v1287;
            v389 = v293 + 4;
            v390 = (_QWORD *)(v1287 + (int)(v293 + 4));
            if ( v390 == v285 && (unsigned __int64)v285 < v1244 )
            {
              v391 = v1344;
              v392 = (_QWORD *)(v1287 + v389);
              v393 = (unsigned __int64)v392;
              v394 = v392;
              v395 = (unsigned __int64)v392;
              if ( (unsigned __int64)v390 >= v1244 - 7 )
              {
                while ( v393 < v1244 - 7 )
                {
                  if ( *v391 != *v392 )
                  {
                    __asm { tzcnt   rax, rax }
                    v398 = ((unsigned int)_RAX >> 3) - (_DWORD)v390 + (_DWORD)v392;
                    goto LABEL_586;
                  }
                  v392 = v394 + 1;
LABEL_571:
                  ++v391;
                  v393 = (unsigned __int64)v392;
                  v394 = v392;
                  v395 = (unsigned __int64)v392;
                }
                if ( v395 < v1244 - 3 && *(_DWORD *)v391 == *(_DWORD *)v392 )
                {
                  v392 = (_QWORD *)((char *)v392 + 4);
                  v391 = (_QWORD *)((char *)v391 + 4);
                }
                if ( (unsigned __int64)v392 < v1244 - 1 && *(_WORD *)v391 == *(_WORD *)v392 )
                {
                  v392 = (_QWORD *)((char *)v392 + 2);
                  v391 = (_QWORD *)((char *)v391 + 2);
                }
                if ( (unsigned __int64)v392 < v1244 && *(_BYTE *)v391 == *(_BYTE *)v392 )
                  LODWORD(v392) = (_DWORD)v392 + 1;
                v398 = (_DWORD)v392 - (_DWORD)v390;
              }
              else
              {
                if ( *v1344 == *v390 )
                {
                  v392 = v390 + 1;
                  goto LABEL_571;
                }
                __asm { tzcnt   rcx, rax }
                v398 = (unsigned int)_RCX >> 3;
              }
LABEL_586:
              v388 = v1287;
              v389 += v398;
            }
            v400 = 0;
            if ( v1260 )
            {
              v401 = -v281;
              v402 = (_DWORD)v1232 - v388;
              v403 = 0LL;
              v404 = v282 - 1;
              if ( (__int64)((__int64)v1232 - v388) <= v401 )
                v402 = v401;
              v405 = v388 - (_QWORD)v282;
              while ( v400 - v402 > 3 )
              {
                if ( *v404 != *(_DWORD *)((char *)v404 + v405) )
                {
                  _BitScanReverse(&v406, *v404 ^ *(_DWORD *)((char *)v404 + v405));
                  v400 -= (31 - v406) >> 3;
                  goto LABEL_594;
                }
                v400 -= 4;
                v403 -= 4LL;
                --v404;
              }
              v592 = v402;
              if ( v403 > v402 )
              {
                v593 = &v1363[v403 - 3];
                do
                {
                  if ( *v593 != *(_BYTE *)(v1323 + v208 - v1198 + v403 - 1) )
                    break;
                  --v400;
                  --v403;
                  --v593;
                }
                while ( v403 > v592 );
                v211 = v1291;
              }
            }
LABEL_594:
            v280 = v1198;
            v407 = v389 - v400;
            v269 = v1244;
            if ( v407 <= v1215 )
            {
              v195 = v1287;
            }
            else
            {
              v1215 = v407;
              v195 = v1287;
              v1299 = v1248 - v208;
              v1255 = v1287 + v400;
            }
          }
          else
          {
            v262 = (_DWORD *)((char *)v198 + v208 - v211);
            if ( *(_WORD *)((char *)v210 + v80 - 1) != *(_WORD *)((char *)v262 + v80 - v209 - 1) || *v262 != v212 )
            {
              v280 = v1198;
              goto LABEL_464;
            }
            if ( v209 )
            {
              v263 = 0LL;
              v264 = (__int64)v210 - v195;
              v265 = v262 - 1;
              v266 = -(__int64)(v208 - v211);
              if ( v264 <= v266 )
                LODWORD(v264) = v266;
              v267 = v195 - (_QWORD)v262;
              while ( v261 - (int)v264 > 3 )
              {
                if ( *v265 != *(_DWORD *)((char *)v265 + v267) )
                {
                  _BitScanReverse(&v268, *v265 ^ *(_DWORD *)((char *)v265 + v267));
                  v261 -= (31 - v268) >> 3;
                  goto LABEL_372;
                }
                v261 -= 4;
                v263 -= 4LL;
                --v265;
              }
              v588 = (int)v264;
              if ( v263 > (int)v264 )
              {
                v589 = &v213[v263 - 3];
                do
                {
                  if ( *v589 != *((_BYTE *)v198 + v208 - v211 + v263 - 1) )
                    break;
                  --v261;
                  --v263;
                  --v589;
                }
                while ( v263 > v588 );
                v212 = v1207;
              }
            }
LABEL_372:
            v269 = v1244;
            v270 = (_QWORD *)(v195 + 4);
            v271 = v262 + 1;
            v272 = v195 + 4;
            v273 = (unsigned __int64)v270;
            v274 = v270;
            v275 = (unsigned __int64)v270;
            if ( (unsigned __int64)v270 >= v1244 - 7 )
              goto LABEL_375;
            if ( *v271 != *v270 )
            {
              __asm { tzcnt   rcx, rax }
              v279 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v273 = (unsigned __int64)(v270 + 1);
              v271 = v262 + 3;
              v270 = (_QWORD *)v273;
              v274 = (_QWORD *)v273;
              v275 = v273;
LABEL_375:
              while ( v273 < v1244 - 7 )
              {
                if ( *v271 != *v270 )
                {
                  __asm { tzcnt   rax, rax }
                  v279 = ((unsigned int)_RAX >> 3) - v272 + (_DWORD)v270;
                  goto LABEL_462;
                }
                v270 = v274 + 1;
                ++v271;
                v273 = (unsigned __int64)v270;
                ++v274;
                v275 = (unsigned __int64)v270;
              }
              if ( v275 < v1244 - 3 && *(_DWORD *)v271 == *(_DWORD *)v270 )
              {
                v270 = (_QWORD *)((char *)v270 + 4);
                v271 = (_QWORD *)((char *)v271 + 4);
              }
              if ( (unsigned __int64)v270 < v1244 - 1 && *(_WORD *)v271 == *(_WORD *)v270 )
              {
                v270 = (_QWORD *)((char *)v270 + 2);
                v271 = (_QWORD *)((char *)v271 + 2);
              }
              if ( (unsigned __int64)v270 < v1244 && *(_BYTE *)v271 == *(_BYTE *)v270 )
                LODWORD(v270) = (_DWORD)v270 + 1;
              v279 = (_DWORD)v270 - v272;
            }
LABEL_462:
            v195 = v1287;
            v280 = v1198;
            v338 = v279 - v261 + 4;
            if ( v338 > v1215 )
            {
              v1299 = v1248 - v208;
              v1255 = v1287 + v261;
              v1215 = v338;
LABEL_464:
              v269 = v1244;
            }
          }
          if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v208 + 0x20000) != 1 )
            goto LABEL_490;
          v339 = v208 - 1;
          if ( v1235 )
          {
            v1235 = v200;
            if ( v200 != 2 )
              goto LABEL_490;
          }
          else
          {
            if ( (_BYTE)v212 != HIBYTE(v212) || (unsigned __int16)v212 != HIWORD(v212) )
            {
              v1235 = 1;
LABEL_490:
              v340 = v1223;
LABEL_491:
              v208 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v208 + 0x20000);
LABEL_485:
              v351 = v1215;
              goto LABEL_486;
            }
            v1235 = 2;
            v1313 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v195 + 4), v269, v212) + 4LL;
          }
          v340 = v1223;
          if ( v339 < v1223 || v211 - v208 < 3 )
            goto LABEL_491;
          if ( v339 < v211 )
          {
            v341 = 1;
            v342 = v1323 + v339 - v280;
          }
          else
          {
            v341 = 0;
            v342 = (unsigned __int64)v1344 + v339 - v211;
          }
          if ( *(_DWORD *)v342 != v212 )
            goto LABEL_491;
          v343 = v1244;
          if ( v341 )
            v343 = v1368;
          v344 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v342 + 4), v343, v212) + 4LL;
          if ( v341 )
          {
            if ( v344 + v342 == v343 )
            {
              v792 = v212;
              v793 = 8 * (v344 & 3);
              if ( v793 )
                v792 = __ROL4__(v212, v793);
              v344 += (unsigned int)LZ4HC_countPattern(v1344, v1244, v792);
            }
            v345 = v1323;
          }
          else
          {
            v345 = (unsigned __int64)v1344;
          }
          v346 = LZ4HC_reverseCountPattern(v342, v345, v212);
          v347 = v346;
          if ( !v341 && (_QWORD *)(v342 - v346) == v1344 && v1198 < v211 )
          {
            v353 = v212;
            v354 = 8LL * (-v346 & 3);
            if ( v354 )
              v353 = __ROL4__(v212, v354);
            v347 = LZ4HC_reverseCountPattern(v1368, v1323, v353) + v346;
          }
          v340 = v1223;
          v348 = v1313;
          v349 = v339 - v347;
          v208 = v1223;
          if ( v349 > v1223 )
            v208 = v349;
          v350 = v344 + v339 - v208;
          if ( v350 >= v1313 && v344 <= v1313 )
          {
            v208 = v211;
            if ( v211 - (v339 - (_DWORD)v1313 + (_DWORD)v344) - 1 >= 3 )
              v208 = v339 - v1313 + v344;
            goto LABEL_485;
          }
          if ( v211 - v208 - 1 < 3 )
          {
            v208 = v211;
            goto LABEL_485;
          }
          if ( v1260 )
            goto LABEL_485;
          v351 = v1215;
          if ( v350 < v1313 )
            v348 = v344 + v339 - v208;
          if ( v1215 < v348 )
          {
            if ( v1287 + v211 - (unsigned __int64)v208 - (_QWORD)v1344 > 0xFFFF )
              goto LABEL_487;
            v351 = v348;
            v1215 = v348;
            v1299 = v1248 - v208;
            v1255 = v1287;
          }
          v352 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v208 + 0x20000);
          if ( v352 > v208 )
            goto LABEL_487;
          v208 -= v352;
LABEL_486:
          v195 = v1287;
          v198 = v1344;
          v209 = v1260;
          v200 = v1235;
          v213 = v1363;
          if ( v208 < v340 )
            goto LABEL_487;
          v80 = v1215;
          v210 = v1232;
        }
        v351 = v1215;
LABEL_487:
        v76 = v1348;
        v17 = v1319;
        v79 = v1299;
LABEL_488:
        v78 = (unsigned int *)v1353;
        v80 = HIDWORD(v1277);
        v77 = (unsigned __int64)v1307;
        HIDWORD(v1375) = v351;
        v45 = (unsigned __int64)v1232;
        LODWORD(v1375) = v79;
        v84 = v1375;
        v1259 = v1375;
        v83 = HIDWORD(v1375);
LABEL_86:
        v1343 = v84;
        if ( v83 <= v80 )
        {
          v14 = v1263;
          v98 = v17;
          v132 = v17;
          v133 = v17;
          v134 = v17 + 1;
          v135 = v45 - (_QWORD)v1263;
          if ( a7 )
          {
            v18 = v1274;
            if ( (unsigned __int64)&v134[v135 / 0xFF + 8 + v135] > v1274 )
              goto LABEL_336;
          }
          if ( v135 < 0xF )
          {
            *v132 = 16 * v135;
          }
          else
          {
            v136 = v135 - 15;
            *v132 = -16;
            if ( v135 - 15 >= 0xFF )
            {
              v905 = v136 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v905) = -1;
              memset_thunk_772440563353939046(v134, SDWORD2(v905), v136 / 0xFF);
              v80 = HIDWORD(v1277);
              v134 += v136 / 0xFF;
              v14 = v1263;
              LOBYTE(v136) = v136 / 0xFF + v136;
            }
            *v134++ = v136;
          }
          v137 = v134;
          do
          {
            *v137 = *(_QWORD *)((char *)v137 + (char *)v14 - v134);
            ++v137;
          }
          while ( v137 < (_QWORD *)&v134[v135] );
          v138 = &v134[v135];
          v18 = v1274;
          v139 = v80 - 4LL;
          *v138 = v1277;
          v17 = v138 + 1;
          v1319 = v17;
          if ( a7 && (unsigned __int64)&v17[v139 / 0xFF + 6] > v1274 )
          {
            v45 = (unsigned __int64)v1232;
            goto LABEL_336;
          }
          v140 = *v133;
          if ( v139 < 0xF )
          {
            *v132 = v139 + v140;
          }
          else
          {
            v141 = v80 - 19LL;
            *v132 = v140 + 15;
            if ( v141 >= 0x1FE )
            {
              v142 = v141 / 0x1FE;
              v141 %= 0x1FEuLL;
              do
              {
                *v17 = -1;
                v143 = v17 + 1;
                *v143 = -1;
                v17 = v143 + 1;
                --v142;
              }
              while ( v142 );
            }
            if ( v141 >= 0xFF )
            {
              LOBYTE(v141) = v141 + 1;
              *v17++ = -1;
            }
            *v17++ = v141;
            v1319 = v17;
          }
          v15 = (unsigned int *)((char *)v1232 + v80);
        }
        else
        {
          v85 = v1255;
          if ( (unsigned __int64)v78 < v45 && v1255 < v45 + v1336 )
          {
            LOWORD(v1277) = v76;
            v45 = (unsigned __int64)v78;
            v80 = HIDWORD(v76);
            v1391 = HIDWORD(v76);
            v1232 = v78;
          }
          if ( (__int64)(v1255 - v45) < 3 )
          {
            v45 = v1255;
            v1232 = (unsigned int *)v1255;
            v1277 = v84;
            continue;
          }
          while ( 2 )
          {
            if ( (__int64)(v85 - v45) < 18 )
            {
              v171 = v80;
              if ( v80 > 18 )
                v171 = 18;
              if ( v45 + v171 > v85 + v83 - 4LL )
                v171 = v83 + v85 - v45 - 4;
              v172 = v171 + v45 - v85;
              if ( v172 > 0 )
              {
                v85 += v172;
                v83 -= v172;
                v1255 = v85;
                HIDWORD(v1259) = v83;
                v84 = v1259;
                v1343 = v1259;
              }
            }
            v1362 = v83;
            v86 = v85 + v83;
            if ( v86 > v77 )
            {
              v87 = 0;
              v88 = 0LL;
              goto LABEL_92;
            }
            v1281 = v86 - 3;
            v214 = (_DWORD *)(v86 - 3);
            v1337 = v86 - 3;
            v1224 = v83;
            v215 = *(_DWORD *)(a1 + 262172);
            v216 = *(_DWORD *)(a1 + 262168);
            v217 = v215;
            v218 = *(_QWORD **)(a1 + 262152);
            v1300 = v215;
            v1216 = v216;
            v1268 = v216 + v86 - 3 - (_DWORD)v218;
            v1288 = v218;
            v219 = v216;
            v220 = *(_DWORD *)(a1 + 262176);
            if ( v215 + 0x10000 <= v1268 )
              v217 = v1268 - 0xFFFF;
            v1208 = v217;
            v221 = *(_QWORD *)(a1 + 262160) + v216 - (unsigned __int64)v215;
            v1292 = 256;
            v222 = v83 - 3;
            v1236 = *v214;
            v223 = (_DWORD)v214 + v216 - (_DWORD)v218;
            v1369 = v221;
            v1324 = *(_QWORD *)(a1 + 262160);
            v224 = 0;
            v1199 = 0;
            v225 = 0;
            v1314 = 0LL;
            v1249 = 0;
            if ( v220 < v223 )
            {
              v226 = (_DWORD *)((char *)v218 + v220 - v219);
              do
              {
                v227 = (unsigned __int64)(unsigned int)(-1640531535 * *v226) >> 17;
                v228 = v220 - *(_DWORD *)(a1 + 4 * v227);
                if ( v228 > 0xFFFF )
                  LOWORD(v228) = -1;
                v226 = (_DWORD *)((char *)v226 + 1);
                *(_WORD *)(a1 + 2LL * (unsigned __int16)v220 + 0x20000) = v228;
                *(_DWORD *)(a1 + 4 * v227) = v220++;
              }
              while ( v220 < v223 );
              v214 = (_DWORD *)(v86 - 3);
              v224 = 0;
            }
            *(_DWORD *)(a1 + 262176) = v223;
            v229 = v222;
            v1349 = v222;
            v230 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v214) >> 17));
            if ( v230 >= v1208 )
            {
              v231 = v1216;
              v232 = v1236;
              while ( 1 )
              {
                LODWORD(v233) = 0;
                v234 = v224;
                if ( v1292 <= 0 )
                {
LABEL_421:
                  v84 = v1343;
                  v17 = v1319;
                  v83 = HIDWORD(v1259);
                  v225 = v1249;
                  break;
                }
                --v1292;
                if ( v230 >= v231 )
                {
                  v235 = (_DWORD *)((char *)v218 + v230 - v231);
                  if ( *(_WORD *)(v1224 + v1255 - 1) != *(_WORD *)((char *)v235 + v1224 - v229 - 1) || *v235 != v232 )
                    goto LABEL_1553;
                  if ( v229 )
                  {
                    v236 = v214 - 1;
                    v237 = v1255 - (_DWORD)v214;
                    v238 = 0LL;
                    v239 = -(__int64)(v230 - v231);
                    if ( (__int64)(v1255 - (_QWORD)v214) <= v239 )
                      v237 = v239;
                    v240 = (char *)v235 - (char *)v214;
                    while ( (int)v233 - v237 > 3 )
                    {
                      if ( *v236 != *(_DWORD *)((char *)v236 + v240) )
                      {
                        _BitScanReverse(&v241, *v236 ^ *(_DWORD *)((char *)v236 + v240));
                        LODWORD(v233) = v233 - ((31 - v241) >> 3);
                        goto LABEL_307;
                      }
                      LODWORD(v233) = v233 - 4;
                      v238 -= 4LL;
                      --v236;
                    }
                    v590 = v237;
                    if ( v238 > v237 )
                    {
                      v591 = (_BYTE *)(v238 + v1255 + v1362 - 4);
                      do
                      {
                        if ( *v591 != *((_BYTE *)v218 + v230 - v231 + v238 - 1) )
                          break;
                        LODWORD(v233) = v233 - 1;
                        --v238;
                        --v591;
                      }
                      while ( v238 > v590 );
                      v232 = v1236;
                    }
                  }
LABEL_307:
                  v242 = v1244;
                  v243 = v214 + 1;
                  v244 = v235 + 1;
                  v245 = (_DWORD)v214 + 4;
                  if ( (unsigned __int64)(v214 + 1) < v1244 - 7 )
                  {
                    if ( *v244 == *v243 )
                    {
                      while ( 1 )
                      {
                        ++v243;
                        ++v244;
                        if ( (unsigned __int64)v243 >= v1244 - 7 )
                          goto LABEL_308;
                        if ( *v244 != *v243 )
                        {
                          __asm { tzcnt   rax, rax }
                          v246 = ((unsigned int)_RAX >> 3) - v245 + (_DWORD)v243;
                          goto LABEL_600;
                        }
                      }
                    }
                    __asm { tzcnt   rcx, rax }
                    v246 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
LABEL_308:
                    if ( (unsigned __int64)v243 < v1244 - 3 && *(_DWORD *)v244 == *(_DWORD *)v243 )
                    {
                      v243 = (_QWORD *)((char *)v243 + 4);
                      v244 = (_QWORD *)((char *)v244 + 4);
                    }
                    if ( (unsigned __int64)v243 < v1244 - 1 && *(_WORD *)v244 == *(_WORD *)v243 )
                    {
                      v243 = (_QWORD *)((char *)v243 + 2);
                      v244 = (_QWORD *)((char *)v244 + 2);
                    }
                    if ( (unsigned __int64)v243 < v1244 && *(_BYTE *)v244 == *(_BYTE *)v243 )
                      LODWORD(v243) = (_DWORD)v243 + 1;
                    v246 = (_DWORD)v243 - v245;
                  }
LABEL_600:
                  v224 = v1199;
                  v410 = v246 - v233 + 4;
                  if ( v410 > v1224 )
                  {
                    v1224 = v410;
                    v233 = (int)v233;
                    goto LABEL_412;
                  }
                  goto LABEL_413;
                }
                v294 = v230 - v1300;
                v295 = (_DWORD *)(v294 + v1324);
                if ( v230 > v231 - 4 || *v295 != v232 )
                {
LABEL_1553:
                  v242 = v1244;
                  goto LABEL_413;
                }
                v296 = v214 + 1;
                v297 = v295 + 1;
                v298 = (_QWORD *)((char *)v214 + v231 - v230);
                v299 = (_DWORD)v214 + 4;
                if ( (unsigned __int64)v298 > v1244 )
                  v298 = (_QWORD *)v1244;
                if ( v296 < (_QWORD *)((char *)v298 - 7) )
                {
                  if ( *v297 != *v296 )
                  {
                    __asm { tzcnt   rcx, rax }
                    v302 = (unsigned int)_RCX >> 3;
                    goto LABEL_397;
                  }
                  while ( 1 )
                  {
                    ++v296;
                    ++v297;
                    if ( v296 >= (_QWORD *)((char *)v298 - 7) )
                      break;
                    if ( *v297 != *v296 )
                    {
                      __asm { tzcnt   rax, rax }
                      v302 = ((unsigned int)_RAX >> 3) - v299 + (_DWORD)v296;
                      goto LABEL_397;
                    }
                  }
                }
                if ( v296 < (_QWORD *)((char *)v298 - 3) && *(_DWORD *)v297 == *(_DWORD *)v296 )
                {
                  v296 = (_QWORD *)((char *)v296 + 4);
                  v297 = (_QWORD *)((char *)v297 + 4);
                }
                if ( v296 < (_QWORD *)((char *)v298 - 1) && *(_WORD *)v297 == *(_WORD *)v296 )
                {
                  v296 = (_QWORD *)((char *)v296 + 2);
                  v297 = (_QWORD *)((char *)v297 + 2);
                }
                if ( v296 < v298 && *(_BYTE *)v297 == *(_BYTE *)v296 )
                  LODWORD(v296) = (_DWORD)v296 + 1;
                v302 = (_DWORD)v296 - v299;
LABEL_397:
                v303 = v302 + 4;
                v304 = (_QWORD *)((char *)v214 + (int)(v302 + 4));
                if ( v304 == v298 && (unsigned __int64)v298 < v1244 )
                {
                  v305 = v1288;
                  v306 = (_QWORD *)((char *)v214 + v303);
                  if ( (unsigned __int64)v304 >= v1244 - 7 )
                    goto LABEL_518;
                  if ( *v1288 != *v304 )
                  {
                    __asm { tzcnt   rcx, rax }
                    v309 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v306 = v304 + 1;
                    v305 = v1288 + 1;
LABEL_518:
                    while ( (unsigned __int64)v306 < v1244 - 7 )
                    {
                      if ( *v305 != *v306 )
                      {
                        __asm { tzcnt   rax, rax }
                        v309 = ((unsigned int)_RAX >> 3) - (_DWORD)v304 + (_DWORD)v306;
                        goto LABEL_402;
                      }
                      ++v306;
                      ++v305;
                    }
                    if ( (unsigned __int64)v306 < v1244 - 3 && *(_DWORD *)v305 == *(_DWORD *)v306 )
                    {
                      v306 = (_QWORD *)((char *)v306 + 4);
                      v305 = (_QWORD *)((char *)v305 + 4);
                    }
                    if ( (unsigned __int64)v306 < v1244 - 1 && *(_WORD *)v305 == *(_WORD *)v306 )
                    {
                      v306 = (_QWORD *)((char *)v306 + 2);
                      v305 = (_QWORD *)((char *)v305 + 2);
                    }
                    if ( (unsigned __int64)v306 < v1244 && *(_BYTE *)v305 == *(_BYTE *)v306 )
                      LODWORD(v306) = (_DWORD)v306 + 1;
                    v309 = (_DWORD)v306 - (_DWORD)v304;
                  }
LABEL_402:
                  v303 += v309;
                }
                v310 = 0;
                if ( v1349 )
                {
                  v311 = -v294;
                  v312 = v1255 - (_DWORD)v214;
                  v313 = 0LL;
                  v314 = v214 - 1;
                  if ( (__int64)(v1255 - (_QWORD)v214) <= v311 )
                    v312 = v311;
                  v315 = (char *)v295 - (char *)v214;
                  while ( v310 - v312 > 3 )
                  {
                    if ( *v314 != *(_DWORD *)((char *)v314 + v315) )
                    {
                      _BitScanReverse(&v316, *v314 ^ *(_DWORD *)((char *)v314 + v315));
                      v310 -= (31 - v316) >> 3;
                      goto LABEL_410;
                    }
                    v310 -= 4;
                    v313 -= 4LL;
                    --v314;
                  }
                  v594 = v312;
                  if ( v313 > v312 )
                  {
                    v595 = (_BYTE *)(v313 + v1255 + v1362 - 4);
                    do
                    {
                      if ( *v595 != *(_BYTE *)(v1324 + v230 - v1300 + v313 - 1) )
                        break;
                      --v310;
                      --v313;
                      --v595;
                    }
                    while ( v313 > v594 );
                    v231 = v1216;
                  }
                }
LABEL_410:
                v224 = v1199;
                v317 = v303 - v310;
                v242 = v1244;
                if ( v317 > v1224 )
                {
                  v1224 = v317;
                  v233 = v310;
LABEL_412:
                  v1249 = v1268 - v230;
                  v1281 = (unsigned __int64)v214 + v233;
                }
LABEL_413:
                if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v230 + 0x20000) != 1 )
                  goto LABEL_417;
                v318 = v230 - 1;
                if ( v224 )
                {
                  v1199 = v234;
                  if ( v234 != 2 )
                    goto LABEL_417;
                }
                else
                {
                  if ( (_BYTE)v232 != HIBYTE(v232) || (unsigned __int16)v232 != HIWORD(v232) )
                  {
                    v1199 = 1;
LABEL_417:
                    v319 = v1208;
LABEL_418:
                    v230 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v230 + 0x20000);
                    goto LABEL_420;
                  }
                  v1199 = 2;
                  v1314 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1337 + 4), v242, v232) + 4LL;
                }
                v319 = v1208;
                if ( v318 < v1208 || v231 - v230 < 3 )
                  goto LABEL_418;
                if ( v318 < v231 )
                {
                  v320 = 1;
                  v321 = v1324 + v318 - v1300;
                }
                else
                {
                  v320 = 0;
                  v321 = (unsigned __int64)v1288 + v318 - v231;
                }
                if ( *(_DWORD *)v321 != v232 )
                  goto LABEL_417;
                v322 = v1244;
                if ( v320 )
                  v322 = v1369;
                v323 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v321 + 4), v322, v232) + 4LL;
                if ( v320 )
                {
                  if ( v323 + v321 == v324 )
                  {
                    v794 = v232;
                    v795 = 8 * (v323 & 3);
                    if ( v795 )
                      v794 = __ROL4__(v232, v795);
                    v323 += (unsigned int)LZ4HC_countPattern(v1288, v1244, v794);
                  }
                  v326 = v1324;
                  v325 = v1324;
                }
                else
                {
                  v325 = (unsigned __int64)v1288;
                  v326 = v1324;
                }
                v327 = LZ4HC_reverseCountPattern(v321, v325, v232);
                v328 = v1288;
                v329 = v327;
                if ( !v320 && (_QWORD *)(v321 - v327) == v1288 && v1300 < v231 )
                {
                  v333 = v232;
                  v334 = 8LL * (-v327 & 3);
                  if ( v334 )
                    v333 = __ROL4__(v232, v334);
                  v335 = LZ4HC_reverseCountPattern(v1369, v326, v333);
                  v329 = v335 + v336;
                  v328 = v1288;
                }
                v319 = v1208;
                v330 = v1314;
                v230 = v1208;
                if ( v318 - v329 > v1208 )
                  v230 = v318 - v329;
                v331 = v323 + v318 - v230;
                if ( v331 < v1314 || v323 > v1314 )
                {
                  if ( v231 - v230 - 1 < 3 )
                  {
                    v230 = v231;
                  }
                  else if ( !v1349 )
                  {
                    if ( v331 < v1314 )
                      v330 = v323 + v318 - v230;
                    if ( v1224 < v330 )
                    {
                      if ( v1337 + v231 - (unsigned __int64)v230 - (_QWORD)v328 > 0xFFFF )
                        goto LABEL_421;
                      v1224 = v330;
                      v1249 = v1268 - v230;
                      v1281 = v1337;
                    }
                    v332 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v230 + 0x20000);
                    if ( v332 > v230 )
                      goto LABEL_421;
                    v230 -= v332;
                  }
                }
                else
                {
                  v230 = v231;
                  if ( v231 - ((_DWORD)v323 - (_DWORD)v1314 + v318) - 1 >= 3 )
                    v230 = v323 - v1314 + v318;
                }
LABEL_420:
                v214 = (_DWORD *)v1337;
                v75 = v230 < v319;
                v218 = v1288;
                v229 = v1349;
                v224 = v1199;
                if ( v75 )
                  goto LABEL_421;
              }
            }
            v45 = (unsigned __int64)v1232;
            v88 = __PAIR64__(v1224, v225);
            v85 = v1255;
            v87 = v1224;
LABEL_92:
            v80 = v1391;
            if ( v87 > v83 )
            {
              v89 = (unsigned int *)v1281;
              v90 = v45 + v1391;
              if ( v1281 >= v90 + 3 )
              {
                if ( v85 < v90 )
                {
                  if ( (__int64)(v85 - v45) < 18 )
                  {
                    if ( v1391 > 18 )
                      v80 = 18;
                    v1391 = v80;
                    if ( v45 + v80 > v85 + v83 - 4LL )
                    {
                      v80 = v83 + v85 - v45 - 4;
                      v1391 = v80;
                    }
                    v176 = v80 + v45 - v85;
                    if ( v176 > 0 )
                    {
                      v1255 = v176 + v85;
                      HIDWORD(v1259) = v83 - v176;
                      v84 = v1259;
                    }
                  }
                  else
                  {
                    v1391 = v85 - v45;
                  }
                }
                v177 = v1232;
                v98 = v17;
                v178 = (char *)v1232 - (char *)v1263;
                v179 = v17;
                v180 = v17;
                v181 = v17 + 1;
                if ( a7 )
                {
                  v18 = v1274;
                  if ( (unsigned __int64)&v181[v178 / 0xFF + 8 + v178] > v1274 )
                    goto LABEL_357;
                }
                if ( v178 < 0xF )
                {
                  *v179 = 16 * v178;
                }
                else
                {
                  v182 = v178 - 15;
                  *v179 = -16;
                  if ( v178 - 15 >= 0xFF )
                  {
                    v901 = v182 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v901) = -1;
                    memset_thunk_772440563353939046(v181, SDWORD2(v901), v182 / 0xFF);
                    v181 += v182 / 0xFF;
                    v179 = v98;
                    v177 = v1232;
                    LOBYTE(v182) = v182 / 0xFF + v182;
                    v180 = v98;
                  }
                  *v181++ = v182;
                  v89 = (unsigned int *)v1281;
                }
                v183 = v181;
                do
                {
                  *v183 = *(_QWORD *)((char *)v183 + (char *)v1263 - v181);
                  ++v183;
                }
                while ( v183 < (_QWORD *)&v181[v178] );
                v184 = &v181[v178];
                *v184 = v1277;
                v17 = v184 + 1;
                v185 = v1391 - 4LL;
                v1319 = v17;
                if ( a7 && (unsigned __int64)&v17[v185 / 0xFF + 6] > v1274 )
                  goto LABEL_359;
                v186 = *v180;
                if ( v185 < 0xF )
                {
                  *v179 = v185 + v186;
                }
                else
                {
                  v187 = v1391 - 19LL;
                  *v179 = v186 + 15;
                  if ( v187 >= 0x1FE )
                  {
                    v188 = v187 / 0x1FE;
                    v187 %= 0x1FEuLL;
                    do
                    {
                      *v17 = -1;
                      v189 = v17 + 1;
                      *v189 = -1;
                      v17 = v189 + 1;
                      --v188;
                    }
                    while ( v188 );
                  }
                  if ( v187 >= 0xFF )
                  {
                    LOBYTE(v187) = v187 + 1;
                    *v17++ = -1;
                  }
                  *v17++ = v187;
                  v1319 = v17;
                }
                v45 = v1255;
                v190 = (unsigned int *)((char *)v177 + v1391);
                LOWORD(v1277) = v84;
                v85 = (unsigned __int64)v89;
                v80 = HIDWORD(v84);
                v84 = v88;
                v1259 = v88;
                v83 = HIDWORD(v88);
                v1343 = v88;
                v77 = (unsigned __int64)v1307;
                v1391 = v80;
                v1263 = v190;
                v1232 = (unsigned int *)v1255;
                v1255 = (unsigned __int64)v89;
                continue;
              }
              if ( v1281 < v90 )
              {
                v1259 = v88;
                v84 = v88;
                v83 = HIDWORD(v88);
                v85 = v1281;
                v1343 = v88;
                v77 = (unsigned __int64)v1307;
                v1255 = v1281;
                continue;
              }
              if ( v85 < v90 )
              {
                v121 = v1391 + v45 - v85;
                v1255 = v121 + v85;
                if ( v83 - v121 >= 4 )
                {
                  HIDWORD(v1259) = v83 - v121;
                  v84 = v1259;
                }
                else
                {
                  v1255 = v1281;
                  v84 = v88;
                }
              }
              v122 = v1232;
              v98 = v17;
              v123 = (char *)v1232 - (char *)v1263;
              v124 = v17;
              v125 = v17;
              v126 = v17 + 1;
              if ( a7 && (v18 = v1274, (unsigned __int64)&v126[v123 / 0xFF + 8 + v123] > v1274) )
              {
LABEL_357:
                v80 = v1391;
                v45 = (unsigned __int64)v1232;
                v14 = v1263;
              }
              else
              {
                if ( v123 < 0xF )
                {
                  *v124 = 16 * v123;
                }
                else
                {
                  v127 = v123 - 15;
                  *v124 = -16;
                  if ( v123 - 15 >= 0xFF )
                  {
                    v902 = v127 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v902) = -1;
                    memset_thunk_772440563353939046(v126, SDWORD2(v902), v127 / 0xFF);
                    v126 += v127 / 0xFF;
                    v124 = v98;
                    v122 = v1232;
                    LOBYTE(v127) = v127 / 0xFF + v127;
                    v125 = v98;
                  }
                  *v126++ = v127;
                  v89 = (unsigned int *)v1281;
                }
                v128 = v126;
                do
                {
                  *v128 = *(_QWORD *)((char *)v128 + (char *)v1263 - v126);
                  ++v128;
                }
                while ( v128 < (_QWORD *)&v126[v123] );
                v129 = &v126[v123];
                v79 = 0;
                *v129 = v1277;
                v17 = v129 + 1;
                v130 = v1391 - 4LL;
                v1319 = v17;
                if ( !a7 || (unsigned __int64)&v17[v130 / 0xFF + 6] <= v1274 )
                {
                  v131 = *v125;
                  if ( v130 >= 0xF )
                  {
                    v355 = v1391 - 19LL;
                    *v124 = v131 + 15;
                    if ( v355 >= 0x1FE )
                    {
                      v356 = v355 / 0x1FE;
                      v355 %= 0x1FEuLL;
                      do
                      {
                        *v17 = -1;
                        v357 = v17 + 1;
                        *v357 = -1;
                        v17 = v357 + 1;
                        --v356;
                      }
                      while ( v356 );
                    }
                    if ( v355 >= 0xFF )
                    {
                      LOBYTE(v355) = v355 + 1;
                      *v17++ = -1;
                    }
                    *v17++ = v355;
                    v1319 = v17;
                  }
                  else
                  {
                    *v124 = v130 + v131;
                  }
                  v78 = (unsigned int *)v1255;
                  v1277 = v88;
                  v45 = (unsigned __int64)v89;
                  v77 = (unsigned __int64)v1307;
                  v76 = v84;
                  v1263 = (unsigned int *)((char *)v122 + v1391);
                  v1353 = v1255;
                  v1232 = v89;
                  v1348 = v84;
                  v1336 = HIDWORD(v84);
                  goto LABEL_84;
                }
LABEL_359:
                v80 = v1391;
                v45 = (unsigned __int64)v1232;
                v14 = v1263;
                v18 = v1274;
              }
              goto LABEL_336;
            }
            break;
          }
          if ( v85 < v45 + v1391 )
          {
            v80 = v85 - v45;
            v1391 = v85 - v45;
          }
          v14 = v1263;
          v98 = v17;
          v99 = v17;
          v100 = v17;
          v101 = v17 + 1;
          v102 = v45 - (_QWORD)v1263;
          if ( a7 && (unsigned __int64)&v101[v102 + 8 + v102 / 0xFF] > v1274 )
          {
            v18 = v1274;
            goto LABEL_336;
          }
          if ( v102 < 0xF )
          {
            *v99 = 16 * v102;
          }
          else
          {
            v103 = v102 - 15;
            *v99 = -16;
            if ( v102 - 15 >= 0xFF )
            {
              v903 = v103 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v903) = -1;
              memset_thunk_772440563353939046(v101, SDWORD2(v903), v103 / 0xFF);
              v101 += v103 / 0xFF;
              v100 = v99;
              v14 = v1263;
              LOBYTE(v103) = v103 / 0xFF + v103;
            }
            *v101++ = v103;
            v85 = v1255;
          }
          v104 = v101;
          do
          {
            *v104 = *(_QWORD *)((char *)v104 + (char *)v14 - v101);
            ++v104;
          }
          while ( v104 < (_QWORD *)&v101[v102] );
          v105 = &v101[v102];
          v80 = v1391;
          *v105 = v1277;
          v106 = v105 + 1;
          v107 = v1391 - 4LL;
          if ( a7 && (unsigned __int64)&v106[v107 / 0xFF + 6] > v1274 )
          {
            v45 = (unsigned __int64)v1232;
            goto LABEL_335;
          }
          v108 = *v100;
          if ( v107 < 0xF )
          {
            *v99 = v107 + v108;
          }
          else
          {
            v109 = v1391 - 19LL;
            *v99 = v108 + 15;
            if ( v109 >= 0x1FE )
            {
              v110 = v109 / 0x1FE;
              v109 %= 0x1FEuLL;
              do
              {
                *v106 = -1;
                v111 = v106 + 1;
                *v111 = -1;
                v106 = v111 + 1;
                --v110;
              }
              while ( v110 );
            }
            if ( v109 >= 0xFF )
            {
              LOBYTE(v109) = v109 + 1;
              *v106++ = -1;
            }
            *v106++ = v109;
          }
          v14 = (unsigned int *)((char *)v1232 + v1391);
          v98 = v106;
          v112 = v106;
          v1263 = v14;
          v113 = v106;
          v1232 = (unsigned int *)v85;
          v114 = v85 - (_QWORD)v14;
          v115 = v106 + 1;
          v45 = v85;
          if ( a7 && (unsigned __int64)&v115[v114 + 8 + v114 / 0xFF] > v1274 )
            goto LABEL_334;
          if ( v114 < 0xF )
          {
            *v112 = 16 * v114;
          }
          else
          {
            v116 = v114 - 15;
            *v112 = -16;
            if ( v114 - 15 >= 0xFF )
            {
              v904 = v116 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v904) = -1;
              memset_thunk_772440563353939046(v115, SDWORD2(v904), v116 / 0xFF);
              v115 += v116 / 0xFF;
              v113 = v112;
              LOBYTE(v116) = v116 / 0xFF + v116;
            }
            *v115++ = v116;
            v85 = v1255;
          }
          v117 = v115;
          do
          {
            *v117 = *(_QWORD *)((char *)v117 + (char *)v14 - v115);
            ++v117;
          }
          while ( v117 < (_QWORD *)&v115[v114] );
          v118 = &v115[v114];
          *v118 = v1259;
          v17 = v118 + 1;
          v119 = SHIDWORD(v1259) - 4LL;
          v1319 = v17;
          if ( a7 && (unsigned __int64)&v17[v119 / 0xFF + 6] > v1274 )
          {
            v45 = (unsigned __int64)v1232;
LABEL_334:
            LOWORD(v1277) = v84;
            v80 = HIDWORD(v84);
LABEL_335:
            v18 = v1274;
LABEL_336:
            if ( a7 != 2 )
              goto LABEL_257;
            v249 = v45 - (_QWORD)v14;
            v17 = v98;
            v250 = (v45 - (unsigned __int64)v14 + 240) / 0xFF + v45 - (_QWORD)v14 + 1;
            if ( (unsigned __int64)&v98[v250] <= v18 - 3 )
            {
              if ( v80 > 255 * (v18 - 3 - v250 - (unsigned __int64)v98) + 18 )
                v80 = 255 * (v18 - 3 - v250 - (_DWORD)v98) + 18;
              v1392 = v80;
              if ( (__int64)(v18 + v80 - v250 - (_QWORD)v98 + 2) >= 12 )
              {
                v251 = v98 + 1;
                if ( v249 < 0xF )
                {
                  *v98 = 16 * v249;
                }
                else
                {
                  v252 = v249 - 15;
                  *v98 = -16;
                  if ( v249 - 15 >= 0xFF )
                  {
                    v906 = v252 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v906) = -1;
                    memset_thunk_772440563353939046(v98 + 1, SDWORD2(v906), v252 / 0xFF);
                    v80 = v1392;
                    v251 += v252 / 0xFF;
                    v18 = v1274;
                    v14 = v1263;
                    LOBYTE(v252) = v252 / 0xFF + v252;
                  }
                  *v251++ = v252;
                }
                v253 = v251;
                v254 = (char *)v14 - v251;
                do
                {
                  *v253 = *(_QWORD *)((char *)v253 + v254);
                  ++v253;
                }
                while ( v253 < (_QWORD *)&v251[v249] );
                v255 = &v251[v249];
                v256 = v80 - 4LL;
                *v255 = v1277;
                v17 = v255 + 1;
                v257 = *v98;
                if ( v256 < 0xF )
                {
                  *v98 = v256 + v257;
                }
                else
                {
                  v258 = v80 - 19LL;
                  *v98 = v257 + 15;
                  if ( v258 >= 0x1FE )
                  {
                    v259 = v258 / 0x1FE;
                    v258 %= 0x1FEuLL;
                    do
                    {
                      *v17 = -1;
                      v260 = v17 + 1;
                      *v260 = -1;
                      v17 = v260 + 1;
                      --v259;
                    }
                    while ( v259 );
                  }
                  if ( v258 >= 0xFF )
                  {
                    LOBYTE(v258) = v258 + 1;
                    *v17++ = -1;
                  }
                  *v17++ = v258;
                }
                v14 = (unsigned int *)((char *)v1232 + v80);
                v1263 = v14;
              }
            }
LABEL_355:
            v8 = a4;
            v19 = v1360;
LABEL_7:
            v21 = v19 - (char *)v14;
            v22 = v17;
            if ( a7 == 2 )
            {
              v18 += 5LL;
            }
            else if ( !a7 )
            {
              goto LABEL_259;
            }
            if ( (unsigned __int64)&v17[(v21 + 240) / 0xFF + 1 + v21] <= v18 )
            {
LABEL_259:
              v192 = v21 + (_DWORD)v14;
              if ( v21 < 0xF )
              {
                *v17 = 16 * v21;
              }
              else
              {
                *v17 = -16;
                v193 = v21 - 15;
                ++v17;
                if ( v21 - 15 >= 0xFF )
                {
                  v907 = v193 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v907) = -1;
                  memset_thunk_772440563353939046(v17, SDWORD2(v907), v193 / 0xFF);
                  v17 += v193 / 0xFF;
                  v14 = v1263;
                  LOBYTE(v193) = v193 / 0xFF + v193;
                }
                v22 = v17;
                *v17 = v193;
              }
              memmove(v22 + 1, v14, v21);
              *v8 = v192 - v1387;
              v191 = v21 + (_DWORD)v17 + 1 - v1388;
              goto LABEL_264;
            }
            if ( a7 != 1 )
            {
              v21 = v18 - (_QWORD)v17 - 1 - ((v18 - (unsigned __int64)v17 - 1 + 241) >> 8);
              goto LABEL_259;
            }
LABEL_257:
            v191 = 0;
LABEL_264:
            if ( v191 <= 0 )
              *(_BYTE *)(a1 + 262183) = 1;
            return (unsigned int)v191;
          }
          v120 = *v113;
          if ( v119 >= 0xF )
          {
            v173 = SHIDWORD(v1259) - 19LL;
            *v112 = v120 + 15;
            if ( v173 >= 0x1FE )
            {
              v174 = v173 / 0x1FE;
              v173 %= 0x1FEuLL;
              do
              {
                *v17 = -1;
                v175 = v17 + 1;
                *v175 = -1;
                v17 = v175 + 1;
                --v174;
              }
              while ( v174 );
            }
            if ( v173 >= 0xFF )
            {
              LOBYTE(v173) = v173 + 1;
              *v17++ = -1;
            }
            *v17++ = v173;
            v1319 = v17;
          }
          else
          {
            *v112 = v119 + v120;
          }
          v18 = v1274;
          v15 = (unsigned int *)(v85 + SHIDWORD(v1259));
        }
        break;
      }
      v20 = (unsigned __int64)v1307;
      v14 = v15;
      v1263 = v15;
      v1232 = v15;
    }
  }
  if ( !v12 && (int)*a4 > 4096 )
  {
    memmove((void *)a1, *(const void **)(a1 + 262184), 0x40030uLL);
    LZ4HC_setExternalDict(v13, v11);
    *(_WORD *)(v13 + 262180) = 9;
    if ( a7 == 2 && a5 < 1 || *v8 > 0x7E000000 )
      return v7;
    v23 = v11;
    *(_QWORD *)(v13 + 0x40000) += (int)*v8;
    v24 = v11;
    v25 = (int)*v8;
    v26 = a3;
    v1233 = v11;
    v27 = (unsigned __int64)&a3[a5 - 5];
    v28 = (char *)v11 + v25;
    if ( a7 != 2 )
      v27 = (unsigned __int64)&a3[a5];
    v1256 = v23;
    v1245 = v27;
    v29 = (unsigned __int64)(v28 - 12);
    v1342 = v28;
    v1308 = v28 - 12;
    v1258 = (unsigned __int64)(v28 - 5);
    v1320 = a3;
    v1264 = 0LL;
    v1285 = 0LL;
    *v8 = 0;
    if ( (int)v25 < 13 )
      goto LABEL_21;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v24 > v29 )
          goto LABEL_1053;
        v411 = 3;
        v1238 = 3;
        v412 = *(unsigned int *)(a1 + 262168);
        v413 = *(char **)(a1 + 262152);
        v414 = (_DWORD)v24 + *(_DWORD *)(a1 + 262168) - (_DWORD)v413;
        v415 = *(unsigned int *)(a1 + 262172);
        v1269 = v414;
        v416 = v415;
        v1250 = *(_DWORD *)(a1 + 262172);
        v1316 = *(_QWORD **)(a1 + 262160);
        if ( (int)v415 + 0x10000 <= v414 )
          v416 = v414 - 0xFFFF;
        v1329 = v412 + *(_QWORD *)(a1 + 262160) - v415;
        v417 = 256;
        v418 = v412 + (_DWORD)v1233 - (_DWORD)v413;
        v1394 = v416;
        v1294 = *v1233;
        v419 = 0;
        v1225 = 0;
        v1355 = 0LL;
        v420 = 0;
        v1302 = 0;
        v421 = *(_DWORD *)(a1 + 262176);
        if ( v421 < v418 )
        {
          v422 = &v413[v421 - v412];
          do
          {
            v423 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v422) >> 17;
            v424 = v421 - *(_DWORD *)(a1 + 4 * v423);
            if ( v424 > 0xFFFF )
              LOWORD(v424) = -1;
            ++v422;
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v421 + 0x20000) = v424;
            *(_DWORD *)(a1 + 4 * v423) = v421++;
          }
          while ( v421 < v418 );
          v411 = 3;
          v419 = 0;
          v416 = v1394;
          v417 = 256;
        }
        v425 = v1233;
        *(_DWORD *)(a1 + 262176) = v418;
        v426 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v1233) >> 17));
        if ( v426 >= v416 )
        {
          while ( 1 )
          {
            if ( v417 <= 0 )
            {
LABEL_660:
              v26 = v1320;
              v420 = v1302;
              v23 = v1256;
              goto LABEL_661;
            }
            v1201 = v417 - 1;
            if ( v426 >= (unsigned int)v412 )
            {
              v427 = v426 - (unsigned int)v412;
              if ( *(_WORD *)((char *)v425 + v411 - 1) == *(_WORD *)&v413[v411 - 1 + v427]
                && *(_DWORD *)&v413[v427] == v1294 )
              {
                v428 = v425 + 1;
                v429 = (_DWORD)v425 + 4;
                v430 = &v413[v427 + 4];
                if ( (unsigned __int64)v428 >= v1258 - 7 )
                  goto LABEL_617;
                if ( *(_QWORD *)v430 != *v428 )
                {
                  __asm { tzcnt   rcx, rax }
                  v431 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  while ( 1 )
                  {
                    ++v428;
                    v430 += 8;
                    if ( (unsigned __int64)v428 >= v1258 - 7 )
                      break;
                    if ( *(_QWORD *)v430 != *v428 )
                    {
                      __asm { tzcnt   rax, rax }
                      v431 = ((unsigned int)_RAX >> 3) - v429 + (_DWORD)v428;
                      goto LABEL_627;
                    }
                  }
LABEL_617:
                  if ( (unsigned __int64)v428 < v1258 - 3 && *(_DWORD *)v430 == *(_DWORD *)v428 )
                  {
                    v428 = (_QWORD *)((char *)v428 + 4);
                    v430 += 4;
                  }
                  if ( (unsigned __int64)v428 < v1258 - 1 && *(_WORD *)v430 == *(_WORD *)v428 )
                  {
                    v428 = (_QWORD *)((char *)v428 + 2);
                    v430 += 2;
                  }
                  if ( (unsigned __int64)v428 < v1258 && *v430 == *(_BYTE *)v428 )
                    LODWORD(v428) = (_DWORD)v428 + 1;
                  v431 = (_DWORD)v428 - v429;
                }
LABEL_627:
                v416 = v1394;
                v432 = v431 + 4;
                v425 = v1233;
                if ( v432 > v411 )
                {
                  v1238 = v432;
                  v1302 = v1269 - v426;
                }
              }
              else
              {
                v416 = v1394;
              }
              v433 = v1316;
              goto LABEL_630;
            }
            v433 = v1316;
            v481 = (_DWORD *)((char *)v1316 + v426 - v1250);
            if ( v426 <= (int)v412 - 4 && *v481 == v1294 )
              break;
LABEL_630:
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v426 + 0x20000) != 1 )
              goto LABEL_637;
            v434 = v426 - 1;
            if ( v419 )
            {
              v1225 = v419;
              if ( v419 != 2 )
                goto LABEL_637;
            }
            else
            {
              if ( (_BYTE)v1294 != HIBYTE(v1294) || (unsigned __int16)v1294 != HIWORD(v1294) )
              {
                v416 = v1394;
                v1225 = 1;
LABEL_637:
                v426 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v426 + 0x20000);
                goto LABEL_659;
              }
              v1225 = 2;
              v435 = LZ4HC_countPattern(v425 + 1, v1258, v1294);
              v416 = v1394;
              v1355 = v435 + 4LL;
            }
            if ( v434 < v416 || (unsigned int)v412 - v434 - 1 < 3 )
              goto LABEL_637;
            if ( v434 < (unsigned int)v412 )
            {
              v436 = 1;
              v437 = (char *)v433 + v434 - v1250;
            }
            else
            {
              v436 = 0;
              v437 = &v413[v434 - (unsigned int)v412];
            }
            if ( *(_DWORD *)v437 != v1294 )
              goto LABEL_637;
            v438 = v1258;
            if ( v436 )
              v438 = v1329;
            v439 = (unsigned int)LZ4HC_countPattern(v437 + 4, v438, v1294) + 4LL;
            if ( v436 )
            {
              if ( &v437[v439] == v440 )
              {
                v796 = LZ4HC_rotatePattern(v439, v1294);
                v439 += (unsigned int)LZ4HC_countPattern(v413, v1258, v796);
              }
              v441 = (char *)v1316;
            }
            else
            {
              v441 = v413;
            }
            HIBYTE(v1378) = HIBYTE(v1294);
            for ( i = (unsigned __int64)v437; i >= (unsigned __int64)(v441 + 4) && *(_DWORD *)(i - 4) == v1294; i -= 4LL )
              ;
            v443 = (char *)&v1378 - i + 3;
            while ( i > (unsigned __int64)v441 && *(_BYTE *)(i - 1) == v443[i] )
              --i;
            v444 = (unsigned int)((_DWORD)v437 - i);
            if ( !v436 && &v437[-v444] == v413 && v1250 < (unsigned int)v412 )
            {
              v476 = LZ4HC_rotatePattern((unsigned int)(i - (_DWORD)v437), v1294);
              v479 = v1329;
              v1379 = v476;
              while ( v479 >= v478 + 4 && *(_DWORD *)(v479 - 4) == v476 )
                v479 -= 4LL;
              v480 = (char *)&v1379 - v479 + 3;
              while ( v479 > v478 && *(_BYTE *)(v479 - 1) == v480[v479] )
                --v479;
              LODWORD(v444) = v1329 - v479 + v477;
            }
            v445 = v434 - v444;
            v416 = v1394;
            v446 = v1394;
            if ( v445 > v1394 )
              v446 = v445;
            v447 = v439 + v434 - v446;
            if ( v447 < v1355 || v439 > v1355 )
            {
              if ( (unsigned int)v412 - v446 - 1 >= 3 )
              {
                v411 = v1238;
                v425 = v1233;
                v474 = v1355;
                if ( v447 < v1355 )
                  v474 = v447;
                if ( v1238 < v474 )
                {
                  if ( (unsigned __int64)(v412 + (char *)v1233 - v446 - v413) > 0xFFFF )
                    goto LABEL_660;
                  v411 = v474;
                  v1238 = v474;
                  v1302 = v1269 - v446;
                }
                v475 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v446 + 0x20000);
                if ( v475 > v446 )
                  goto LABEL_660;
                v426 = v446 - v475;
              }
              else
              {
                v426 = v412;
              }
            }
            else
            {
              v426 = v412;
              if ( (unsigned int)v412 - ((_DWORD)v439 - (_DWORD)v1355 + v434) - 1 >= 3 )
                v426 = v439 - v1355 + v434;
            }
LABEL_659:
            v411 = v1238;
            v419 = v1225;
            v417 = v1201;
            v425 = v1233;
            if ( v426 < v416 )
              goto LABEL_660;
          }
          v482 = v425 + 1;
          v483 = (_DWORD)v425 + 4;
          v484 = (_QWORD *)((char *)v425 + (unsigned int)v412 - v426);
          if ( (unsigned __int64)v484 > v1258 )
            v484 = (_QWORD *)v1258;
          v485 = v481 + 1;
          if ( v482 < (_QWORD *)((char *)v484 - 7) )
          {
            if ( *v482 != *v485 )
            {
              __asm { tzcnt   rcx, rax }
              v486 = (unsigned int)_RCX >> 3;
LABEL_727:
              v487 = v486 + 4;
              v488 = (_QWORD *)((char *)v1233 + (int)(v486 + 4));
              if ( v488 == v484 && (unsigned __int64)v484 < v1258 )
              {
                v489 = v413;
                v490 = (_QWORD *)((char *)v1233 + v487);
                if ( (unsigned __int64)v488 >= v1258 - 7 )
                  goto LABEL_732;
                if ( *v488 != *(_QWORD *)v413 )
                {
                  __asm { tzcnt   rcx, rax }
                  v492 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v490 = v488 + 1;
                  v489 = v413 + 8;
LABEL_732:
                  while ( (unsigned __int64)v490 < v1258 - 7 )
                  {
                    if ( *v490 != *v489 )
                    {
                      __asm { tzcnt   rax, rax }
                      v492 = ((unsigned int)_RAX >> 3) - (_DWORD)v488 + (_DWORD)v490;
                      goto LABEL_743;
                    }
                    ++v490;
                    ++v489;
                  }
                  if ( (unsigned __int64)v490 < v1258 - 3 && *(_DWORD *)v489 == *(_DWORD *)v490 )
                  {
                    v490 = (_QWORD *)((char *)v490 + 4);
                    v489 = (_QWORD *)((char *)v489 + 4);
                  }
                  if ( (unsigned __int64)v490 < v1258 - 1 && *(_WORD *)v489 == *(_WORD *)v490 )
                  {
                    v490 = (_QWORD *)((char *)v490 + 2);
                    v489 = (_QWORD *)((char *)v489 + 2);
                  }
                  if ( (unsigned __int64)v490 < v1258 && *(_BYTE *)v489 == *(_BYTE *)v490 )
                    LODWORD(v490) = (_DWORD)v490 + 1;
                  v492 = (_DWORD)v490 - (_DWORD)v488;
                }
LABEL_743:
                v487 += v492;
              }
              v416 = v1394;
              v425 = v1233;
              if ( v487 > v411 )
              {
                v1238 = v487;
                v1302 = v1269 - v426;
              }
              goto LABEL_630;
            }
            while ( 1 )
            {
              ++v482;
              ++v485;
              if ( v482 >= (_QWORD *)((char *)v484 - 7) )
                break;
              if ( *v482 != *v485 )
              {
                __asm { tzcnt   rax, rax }
                v486 = ((unsigned int)_RAX >> 3) - v483 + (_DWORD)v482;
                goto LABEL_727;
              }
            }
          }
          if ( v482 < (_QWORD *)((char *)v484 - 3) && *(_DWORD *)v485 == *(_DWORD *)v482 )
          {
            v482 = (_QWORD *)((char *)v482 + 4);
            v485 = (_QWORD *)((char *)v485 + 4);
          }
          if ( v482 < (_QWORD *)((char *)v484 - 1) && *(_WORD *)v485 == *(_WORD *)v482 )
          {
            v482 = (_QWORD *)((char *)v482 + 2);
            v485 = (_QWORD *)((char *)v485 + 2);
          }
          if ( v482 < v484 && *(_BYTE *)v485 == *(_BYTE *)v482 )
            LODWORD(v482) = (_DWORD)v482 + 1;
          v486 = (_DWORD)v482 - v483;
          goto LABEL_727;
        }
LABEL_661:
        v448 = __PAIR64__(v411, v420);
        v1374 = __PAIR64__(v411, v420);
        v1282 = __PAIR64__(v411, v420);
        if ( v411 >= 4 )
          break;
        v27 = v1245;
        v29 = (unsigned __int64)v1308;
        v24 = (unsigned int *)((char *)v425 + 1);
        v1233 = v24;
      }
      v449 = (unsigned __int64)v1233;
      v450 = v1233;
      v1318 = v411;
      v1370 = (unsigned __int64)v1233;
      while ( 1 )
      {
        v451 = (unsigned __int64)v1308;
        while ( 1 )
        {
          v452 = HIDWORD(v1282);
          v1395 = HIDWORD(v1282);
          v453 = SHIDWORD(v1282) + v449;
          if ( v453 > v451 )
          {
            v1276 = 0LL;
            v454 = 0;
            v455 = 0LL;
            goto LABEL_666;
          }
          v555 = (unsigned int *)(v453 - 2);
          v1226 = HIDWORD(v1282);
          v1264 = v453 - 2;
          v556 = HIDWORD(v1282);
          v1351 = v453 - 2;
          v557 = *(unsigned int *)(a1 + 262172);
          v558 = *(unsigned int *)(a1 + 262168);
          v559 = v557;
          v560 = *(_QWORD **)(a1 + 262152);
          v1218 = v558;
          v561 = v558 + v453 - 2 - (_DWORD)v560;
          v1303 = *(_DWORD *)(a1 + 262172);
          v1339 = (char *)v560;
          v1239 = v561;
          v562 = (unsigned int)v558;
          if ( (int)v557 + 0x10000 <= v561 )
            v559 = v561 - 0xFFFF;
          v1202 = v559;
          v563 = *(_QWORD **)(a1 + 262160);
          v1295 = 256;
          v1356 = (unsigned __int64)v563 + v558 - v557;
          v564 = 0;
          v565 = (_DWORD)v555 - (_DWORD)v1233;
          v1210 = 0;
          v566 = *v555;
          v1376 = 0LL;
          v1270 = 0;
          v567 = *(_DWORD *)(a1 + 262176);
          v1279 = v563;
          v1251 = *v555;
          if ( v567 < v561 )
          {
            v568 = (_DWORD *)((char *)v560 + v567 - v562);
            do
            {
              v569 = (unsigned __int64)(unsigned int)(-1640531535 * *v568) >> 17;
              v570 = v567 - *(_DWORD *)(a1 + 4 * v569);
              if ( v570 > 0xFFFF )
                LOWORD(v570) = -1;
              v568 = (_DWORD *)((char *)v568 + 1);
              *(_WORD *)(a1 + 2LL * (unsigned __int16)v567 + 0x20000) = v570;
              *(_DWORD *)(a1 + 4 * v569) = v567++;
            }
            while ( v567 < v561 );
            v448 = v1374;
            v556 = HIDWORD(v1282);
            v566 = v1251;
            v563 = v1279;
          }
          *(_DWORD *)(a1 + 262176) = v561;
          v571 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v555) >> 17));
          v572 = v565;
          v573 = v1202;
          v1326 = v572;
          if ( v571 >= v1202 )
          {
            v574 = v1218;
            v1330 = (char *)v1233 + SHIDWORD(v1282);
            while ( 1 )
            {
              v575 = v1210;
              if ( v1295 <= 0 )
              {
LABEL_998:
                v448 = v1374;
                v26 = v1320;
                v564 = v1270;
                goto LABEL_999;
              }
              v576 = 1;
              --v1295;
              if ( v571 >= v574 )
                break;
              v577 = (_DWORD *)((char *)v563 + v571 - v1303);
              if ( v571 <= v574 - 4 && *v577 == v566 )
              {
                v578 = (_QWORD *)(v1351 + 4);
                v579 = v577 + 1;
                v580 = (_QWORD *)(v1351 + v574 - v571);
                v581 = v1351 + 4;
                if ( (unsigned __int64)v580 > v1258 )
                  v580 = (_QWORD *)v1258;
                if ( v578 >= (_QWORD *)((char *)v580 - 7) )
                  goto LABEL_1194;
                if ( *v579 != *v578 )
                {
                  __asm { tzcnt   rcx, rax }
                  v585 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  while ( 1 )
                  {
                    ++v578;
                    ++v579;
                    if ( v578 >= (_QWORD *)((char *)v580 - 7) )
                      break;
                    if ( *v579 != *v578 )
                    {
                      __asm { tzcnt   rax, rax }
                      v585 = ((unsigned int)_RAX >> 3) - v581 + (_DWORD)v578;
                      goto LABEL_1205;
                    }
                  }
LABEL_1194:
                  if ( v578 < (_QWORD *)((char *)v580 - 3) && *(_DWORD *)v579 == *(_DWORD *)v578 )
                  {
                    v578 = (_QWORD *)((char *)v578 + 4);
                    v579 = (_QWORD *)((char *)v579 + 4);
                  }
                  if ( v578 < (_QWORD *)((char *)v580 - 1) && *(_WORD *)v579 == *(_WORD *)v578 )
                  {
                    v578 = (_QWORD *)((char *)v578 + 2);
                    v579 = (_QWORD *)((char *)v579 + 2);
                  }
                  if ( v578 < v580 && *(_BYTE *)v579 == *(_BYTE *)v578 )
                    LODWORD(v578) = (_DWORD)v578 + 1;
                  v585 = (_DWORD)v578 - v581;
                }
LABEL_1205:
                v734 = v585 + 4;
                v735 = (_QWORD *)(v1351 + (int)(v585 + 4));
                if ( v735 == v580 && (unsigned __int64)v580 < v1258 )
                {
                  v736 = v560;
                  v737 = (_QWORD *)(v1351 + v734);
                  if ( (unsigned __int64)v735 >= v1258 - 7 )
                    goto LABEL_1210;
                  if ( *v560 != *v735 )
                  {
                    __asm { tzcnt   rcx, rax }
                    v740 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v737 = v735 + 1;
                    v736 = v560 + 1;
LABEL_1210:
                    while ( (unsigned __int64)v737 < v1258 - 7 )
                    {
                      if ( *v736 != *v737 )
                      {
                        __asm { tzcnt   rax, rax }
                        v740 = ((unsigned int)_RAX >> 3) - (_DWORD)v735 + (_DWORD)v737;
                        goto LABEL_1224;
                      }
                      ++v737;
                      ++v736;
                    }
                    if ( (unsigned __int64)v737 < v1258 - 3 && *(_DWORD *)v736 == *(_DWORD *)v737 )
                    {
                      v737 = (_QWORD *)((char *)v737 + 4);
                      v736 = (_QWORD *)((char *)v736 + 4);
                    }
                    if ( (unsigned __int64)v737 < v1258 - 1 && *(_WORD *)v736 == *(_WORD *)v737 )
                    {
                      v737 = (_QWORD *)((char *)v737 + 2);
                      v736 = (_QWORD *)((char *)v736 + 2);
                    }
                    if ( (unsigned __int64)v737 < v1258 && *(_BYTE *)v736 == *(_BYTE *)v737 )
                      LODWORD(v737) = (_DWORD)v737 + 1;
                    v740 = (_DWORD)v737 - (_DWORD)v735;
                  }
LABEL_1224:
                  v734 += v740;
                }
                v712 = 0;
                if ( v1326 )
                {
                  v707 = v577 - 1;
                  v708 = (_DWORD)v1233 - v1351;
                  v709 = 0LL;
                  if ( (__int64)((__int64)v1233 - v1351) <= -(__int64)(v571 - v1303) )
                    v708 = v1303 - v571;
                  v710 = v1351 - (_QWORD)v577;
                  while ( v712 - v708 > 3 )
                  {
                    if ( *v707 != *(_DWORD *)((char *)v707 + v710) )
                    {
                      _BitScanReverse(&v711, *v707 ^ *(_DWORD *)((char *)v707 + v710));
                      v712 -= (31 - v711) >> 3;
                      goto LABEL_1131;
                    }
                    v712 -= 4;
                    v709 -= 4LL;
                    --v707;
                  }
                  v706 = v1279;
                  v742 = v708;
                  if ( v709 > v708 )
                  {
                    v743 = &v1330[v709 - 3];
                    do
                    {
                      if ( *v743 != *((_BYTE *)v1279 + v571 - v1303 + v709 - 1) )
                        break;
                      --v712;
                      --v709;
                      --v743;
                    }
                    while ( v709 > v742 );
                    v574 = v1218;
                  }
                }
                else
                {
LABEL_1131:
                  v706 = v1279;
                }
                v713 = v734 - v712;
                if ( v713 > v1226 )
                {
                  v1226 = v713;
                  v1270 = v1239 - v571;
                  v1264 = v1351 + v712;
                }
                v573 = v1202;
LABEL_1135:
                v576 = 1;
                goto LABEL_1136;
              }
              v706 = v1279;
              v576 = 1;
LABEL_1137:
              if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v571 + 0x20000) != 1 )
                goto LABEL_995;
              v714 = v571 - 1;
              if ( v575 )
              {
                if ( v1210 != 2 )
                  goto LABEL_995;
                v715 = v1251;
              }
              else
              {
                v715 = v1251;
                if ( (_BYTE)v1251 != HIBYTE(v1251) || (unsigned __int16)v1251 != HIWORD(v1251) )
                {
                  v1210 = 1;
LABEL_995:
                  v573 = v1202;
                  v571 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v571 + 0x20000);
LABEL_996:
                  v572 = v1326;
                  goto LABEL_997;
                }
                v1210 = 2;
                v1376 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1351 + 4), v1258, v1251) + 4LL;
              }
              if ( v714 < v573 || v574 - v571 < 3 )
                goto LABEL_995;
              if ( v714 < v574 )
              {
                v716 = (char *)v706 + v714 - v1303;
              }
              else
              {
                v576 = 0;
                v716 = &v1339[v714 - v574];
              }
              if ( *(_DWORD *)v716 != v715 )
                goto LABEL_995;
              v717 = v1258;
              if ( v576 )
                v717 = v1356;
              v718 = (unsigned int)LZ4HC_countPattern(v716 + 4, v717, v715) + 4LL;
              if ( v576 )
              {
                if ( &v716[v718] == (char *)v717 )
                {
                  v732 = LZ4HC_rotatePattern(v718, v715);
                  v718 += (unsigned int)LZ4HC_countPattern(v1339, v1258, v732);
                }
                v720 = (unsigned __int64)v1279;
                v719 = v1339;
                v721 = (char *)v1279;
              }
              else
              {
                v719 = v1339;
                v720 = (unsigned __int64)v1279;
                v721 = v1339;
              }
              v1380 = v715;
              for ( j = (unsigned __int64)v716; j >= (unsigned __int64)(v721 + 4) && *(_DWORD *)(j - 4) == v715; j -= 4LL )
                ;
              v723 = (char *)&v1380 - j + 3;
              while ( j > (unsigned __int64)v721 && *(_BYTE *)(j - 1) == v723[j] )
                --j;
              v724 = (unsigned int)((_DWORD)v716 - j);
              if ( !v576 && &v716[-v724] == v719 && v1303 < v574 )
              {
                v728 = LZ4HC_rotatePattern((unsigned int)(j - (_DWORD)v716), v715);
                v730 = v1356;
                v1381 = v728;
                while ( v730 >= v720 + 4 && *(_DWORD *)(v730 - 4) == v728 )
                  v730 -= 4LL;
                v731 = (char *)&v1381 - v730 + 3;
                while ( v730 > v720 && *(_BYTE *)(v730 - 1) == v731[v730] )
                  --v730;
                LODWORD(v724) = v1356 - v730 + v729;
              }
              v573 = v1202;
              v571 = v1202;
              if ( v714 - (unsigned int)v724 > v1202 )
                v571 = v714 - v724;
              v725 = v718 + v714 - v571;
              if ( v725 >= v1376 && v718 <= v1376 )
              {
                v571 = v574;
                if ( v574 - (v714 - (_DWORD)v1376 + (_DWORD)v718) - 1 >= 3 )
                  v571 = v714 - v1376 + v718;
                goto LABEL_996;
              }
              v572 = v1326;
              if ( v574 - v571 - 1 < 3 )
              {
                v571 = v574;
              }
              else if ( !v1326 )
              {
                v556 = v1226;
                v726 = v1376;
                if ( v725 < v1376 )
                  v726 = v725;
                if ( v1226 < v726 )
                {
                  if ( v574 + v1351 - v571 - (unsigned __int64)v719 > 0xFFFF )
                    goto LABEL_998;
                  v556 = v726;
                  v1226 = v726;
                  v1270 = v1239 - v571;
                  v1264 = v1351;
                }
                v727 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v571 + 0x20000);
                if ( v727 > v571 )
                  goto LABEL_998;
                v571 -= v727;
              }
LABEL_997:
              v566 = v1251;
              v560 = v1339;
              v556 = v1226;
              v563 = v1279;
              if ( v571 < v573 )
                goto LABEL_998;
            }
            v651 = (_DWORD *)((char *)v560 + v571 - v574);
            if ( *(_WORD *)((char *)v1233 + v556 - 1) != *(_WORD *)((char *)v651 + v556 - v572 - 1) || *v651 != v566 )
            {
              v706 = v1279;
              v573 = v1202;
              goto LABEL_1136;
            }
            v652 = v572 == 0;
            v653 = 0;
            if ( !v652 )
            {
              v654 = 0LL;
              v655 = (_DWORD)v1233 - v1351;
              v656 = v651 - 1;
              v657 = -(__int64)(v571 - v574);
              if ( (__int64)((__int64)v1233 - v1351) <= v657 )
                v655 = v657;
              v658 = v1351 - (_QWORD)v651;
              while ( v653 - v655 > 3 )
              {
                if ( *v656 != *(_DWORD *)((char *)v656 + v658) )
                {
                  _BitScanReverse(&v659, *v656 ^ *(_DWORD *)((char *)v656 + v658));
                  v653 -= (31 - v659) >> 3;
                  goto LABEL_1016;
                }
                v653 -= 4;
                v654 -= 4LL;
                --v656;
              }
              v702 = v655;
              if ( v654 > v655 )
              {
                v703 = &v1330[v654 - 3];
                do
                {
                  if ( *v703 != *((_BYTE *)v560 + v571 - v574 + v654 - 1) )
                    break;
                  --v653;
                  --v654;
                  --v703;
                }
                while ( v654 > v702 );
              }
            }
LABEL_1016:
            v660 = (_DWORD *)(v1351 + 4);
            v661 = v651 + 1;
            v662 = v1351 + 4;
            if ( v1351 + 4 >= v1258 - 7 )
            {
LABEL_1112:
              if ( (unsigned __int64)v660 < v1258 - 3 && *v661 == *v660 )
              {
                ++v660;
                ++v661;
              }
              if ( (unsigned __int64)v660 < v1258 - 1 && *(_WORD *)v661 == *(_WORD *)v660 )
              {
                v660 = (_DWORD *)((char *)v660 + 2);
                v661 = (_DWORD *)((char *)v661 + 2);
              }
              if ( (unsigned __int64)v660 < v1258 && *(_BYTE *)v661 == *(_BYTE *)v660 )
                LODWORD(v660) = (_DWORD)v660 + 1;
              v666 = (_DWORD)v660 - v662;
            }
            else
            {
              if ( *(_QWORD *)v661 == *(_QWORD *)v660 )
              {
                while ( 1 )
                {
                  v660 += 2;
                  v661 += 2;
                  if ( (unsigned __int64)v660 >= v1258 - 7 )
                    goto LABEL_1112;
                  if ( *(_QWORD *)v661 != *(_QWORD *)v660 )
                  {
                    __asm { tzcnt   rax, rax }
                    v666 = ((unsigned int)_RAX >> 3) - v662 + (_DWORD)v660;
                    goto LABEL_1123;
                  }
                }
              }
              __asm { tzcnt   rcx, rax }
              v666 = (unsigned int)_RCX >> 3;
            }
LABEL_1123:
            v573 = v1202;
            v705 = v666 - v653 + 4;
            v170 = v705 <= v556;
            v706 = v1279;
            if ( !v170 )
            {
              v1270 = v1239 - v571;
              v1264 = v1351 + v653;
              v1226 = v705;
              goto LABEL_1135;
            }
LABEL_1136:
            v575 = v1210;
            goto LABEL_1137;
          }
LABEL_999:
          v450 = (unsigned int *)v1370;
          v452 = HIDWORD(v1282);
          v449 = (unsigned __int64)v1233;
          v451 = (unsigned __int64)v1308;
          v455 = __PAIR64__(v556, v564);
          v1276 = __PAIR64__(v556, v564);
          v454 = v556;
LABEL_666:
          v1325 = v455;
          if ( v454 <= v452 )
          {
            v519 = (unsigned __int64)v1233;
            v23 = v1256;
            v464 = v26;
            v520 = v26;
            v521 = v26;
            v522 = (char *)v1233 - (char *)v1256;
            v523 = v26 + 1;
            if ( a7 )
            {
              v27 = v1245;
              if ( (unsigned __int64)&v523[v522 / 0xFF + 8 + v522] > v1245 )
                goto LABEL_1034;
            }
            if ( v522 < 0xF )
            {
              *v520 = 16 * v522;
            }
            else
            {
              v524 = v522 - 15;
              *v520 = -16;
              if ( v522 - 15 >= 0xFF )
              {
                v912 = v524 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v912) = -1;
                memset_thunk_772440563353939046(v523, SDWORD2(v912), v524 / 0xFF);
                v452 = HIDWORD(v1282);
                v523 += v524 / 0xFF;
                v23 = v1256;
                LOBYTE(v524) = v524 / 0xFF + v524;
              }
              *v523++ = v524;
            }
            v525 = v523;
            do
            {
              *v525 = *(_QWORD *)((char *)v525 + (char *)v23 - v523);
              ++v525;
            }
            while ( v525 < (_QWORD *)&v523[v522] );
            v526 = &v523[v522];
            v27 = v1245;
            v527 = v452 - 4LL;
            *v526 = v1282;
            v26 = v526 + 1;
            v1320 = v26;
            if ( a7 && (unsigned __int64)&v26[v527 / 0xFF + 6] > v1245 )
              goto LABEL_1033;
            v528 = *v521;
            if ( v527 >= 0xF )
            {
              v682 = v452 - 19LL;
              *v520 = v528 + 15;
              if ( v682 >= 0x1FE )
              {
                v683 = v682 / 0x1FE;
                v682 %= 0x1FEuLL;
                do
                {
                  *v26 = -1;
                  v684 = v26 + 1;
                  *v684 = -1;
                  v26 = v684 + 1;
                  --v683;
                }
                while ( v683 );
              }
              if ( v682 >= 0xFF )
              {
                LOBYTE(v682) = v682 + 1;
                *v26++ = -1;
              }
              *v26++ = v682;
              v1320 = v26;
            }
            else
            {
              *v520 = v527 + v528;
            }
            v24 = (unsigned int *)((char *)v1233 + v452);
            goto LABEL_849;
          }
          v456 = v1264;
          if ( (unsigned __int64)v450 < v449 && v1264 < v449 + v1318 )
          {
            LOWORD(v1282) = v448;
            v449 = (unsigned __int64)v450;
            v452 = HIDWORD(v448);
            v1395 = HIDWORD(v448);
            v1233 = v450;
          }
          if ( (__int64)(v1264 - v449) >= 3 )
            break;
          v449 = v1264;
          v1233 = (unsigned int *)v1264;
          v1282 = v455;
        }
LABEL_669:
        if ( (__int64)(v456 - v449) < 18 )
        {
          v586 = v452;
          if ( v452 > 18 )
            v586 = 18;
          if ( v449 + v586 > v456 + v454 - 4LL )
            v586 = v456 + v454 - v449 - 4;
          v587 = v586 - v456 + v449;
          if ( v587 > 0 )
          {
            v456 += v587;
            v454 -= v587;
            v1264 = v456;
            HIDWORD(v1276) = v454;
            v455 = v1276;
            v1325 = v1276;
          }
        }
        v457 = v454;
        v458 = v456 + v454;
        if ( v458 > v451 )
        {
          v459 = 0;
          v460 = 0LL;
          goto LABEL_672;
        }
        v603 = (unsigned int *)(v458 - 3);
        v1285 = v458 - 3;
        v1331 = v458 - 3;
        v1240 = v454;
        v604 = *(unsigned int *)(a1 + 262172);
        v605 = v604;
        v606 = *(_QWORD **)(a1 + 262152);
        v1271 = *(_DWORD *)(a1 + 262168);
        v607 = v458 - 3 + v1271 - (_DWORD)v606;
        v1203 = *(_DWORD *)(a1 + 262172);
        v1317 = (char *)v606;
        v1252 = v607;
        if ( (int)v604 + 0x10000 <= v607 )
          v605 = v607 - 0xFFFF;
        v1227 = v605;
        v608 = *(_QWORD **)(a1 + 262160);
        v609 = (_DWORD)v603 - v456;
        v1280 = v608;
        v1296 = 256;
        v1377 = (unsigned __int64)v608 + v1271 - v604;
        v1219 = *v603;
        v1211 = 0;
        v610 = 0;
        v1371 = 0LL;
        v1304 = 0;
        v611 = a1;
        v612 = *(_DWORD *)(a1 + 262176);
        if ( v612 < v607 )
        {
          v613 = (_DWORD *)((char *)v606 + v612 - (unsigned __int64)v1271);
          do
          {
            v614 = (unsigned __int64)(unsigned int)(-1640531535 * *v613) >> 17;
            v615 = v612 - *(_DWORD *)(a1 + 4 * v614);
            if ( v615 > 0xFFFF )
              LOWORD(v615) = -1;
            v613 = (_DWORD *)((char *)v613 + 1);
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v612 + 0x20000) = v615;
            *(_DWORD *)(a1 + 4 * v614) = v612++;
          }
          while ( v612 < v607 );
          v454 = HIDWORD(v1276);
          v603 = (unsigned int *)(v458 - 3);
          v608 = v1280;
          v611 = a1;
        }
        *(_DWORD *)(v611 + 262176) = v607;
        v616 = *(_DWORD *)(v611 + 4 * ((unsigned __int64)(-1640531535 * *v603) >> 17));
        v617 = v609;
        v1340 = v609;
        if ( v616 >= v1227 )
        {
          v618 = v1264;
          v619 = v1271;
          v620 = v1264 + v457;
          v621 = v1219;
          v1357 = v620;
          while ( 1 )
          {
            v622 = v1211;
            if ( v1296 <= 0 )
            {
LABEL_1005:
              v455 = v1325;
              v26 = v1320;
              v454 = HIDWORD(v1276);
              v610 = v1304;
              goto LABEL_1006;
            }
            --v1296;
            if ( v616 >= v619 )
              break;
            v637 = v1203;
            v693 = (_DWORD *)((char *)v608 + v616 - v1203);
            if ( v616 <= v619 - 4 && *v693 == v621 )
            {
              v694 = (_QWORD *)(v1331 + 4);
              v695 = v693 + 1;
              v696 = (_QWORD *)(v1331 + v619 - v616);
              v697 = v1331 + 4;
              if ( (unsigned __int64)v696 > v1258 )
                v696 = (_QWORD *)v1258;
              if ( v694 >= (_QWORD *)((char *)v696 - 7) )
                goto LABEL_1251;
              if ( *v695 != *v694 )
              {
                __asm { tzcnt   rcx, rax }
                v701 = (unsigned int)_RCX >> 3;
              }
              else
              {
                while ( 1 )
                {
                  ++v694;
                  ++v695;
                  if ( v694 >= (_QWORD *)((char *)v696 - 7) )
                    break;
                  if ( *v695 != *v694 )
                  {
                    __asm { tzcnt   rax, rax }
                    v701 = ((unsigned int)_RAX >> 3) - v697 + (_DWORD)v694;
                    goto LABEL_1262;
                  }
                }
LABEL_1251:
                if ( v694 < (_QWORD *)((char *)v696 - 3) && *(_DWORD *)v695 == *(_DWORD *)v694 )
                {
                  v694 = (_QWORD *)((char *)v694 + 4);
                  v695 = (_QWORD *)((char *)v695 + 4);
                }
                if ( v694 < (_QWORD *)((char *)v696 - 1) && *(_WORD *)v695 == *(_WORD *)v694 )
                {
                  v694 = (_QWORD *)((char *)v694 + 2);
                  v695 = (_QWORD *)((char *)v695 + 2);
                }
                if ( v694 < v696 && *(_BYTE *)v695 == *(_BYTE *)v694 )
                  LODWORD(v694) = (_DWORD)v694 + 1;
                v701 = (_DWORD)v694 - v697;
              }
LABEL_1262:
              v749 = v701 + 4;
              v750 = (_QWORD *)(v1331 + (int)(v701 + 4));
              if ( v750 == v696 && (unsigned __int64)v696 < v1258 )
              {
                v751 = v606;
                v752 = (_QWORD *)(v1331 + v749);
                if ( (unsigned __int64)v750 >= v1258 - 7 )
                  goto LABEL_1267;
                if ( *v606 != *v750 )
                {
                  __asm { tzcnt   rcx, rax }
                  v755 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v752 = v750 + 1;
                  v751 = v606 + 1;
LABEL_1267:
                  while ( (unsigned __int64)v752 < v1258 - 7 )
                  {
                    if ( *v751 != *v752 )
                    {
                      __asm { tzcnt   rax, rax }
                      v755 = ((unsigned int)_RAX >> 3) - (_DWORD)v750 + (_DWORD)v752;
                      goto LABEL_1281;
                    }
                    ++v752;
                    ++v751;
                  }
                  if ( (unsigned __int64)v752 < v1258 - 3 && *(_DWORD *)v751 == *(_DWORD *)v752 )
                  {
                    v752 = (_QWORD *)((char *)v752 + 4);
                    v751 = (_QWORD *)((char *)v751 + 4);
                  }
                  if ( (unsigned __int64)v752 < v1258 - 1 && *(_WORD *)v751 == *(_WORD *)v752 )
                  {
                    v752 = (_QWORD *)((char *)v752 + 2);
                    v751 = (_QWORD *)((char *)v751 + 2);
                  }
                  if ( (unsigned __int64)v752 < v1258 && *(_BYTE *)v751 == *(_BYTE *)v752 )
                    LODWORD(v752) = (_DWORD)v752 + 1;
                  v755 = (_DWORD)v752 - (_DWORD)v750;
                }
LABEL_1281:
                v749 += v755;
              }
              v757 = 0;
              if ( v1340 )
              {
                v758 = (_DWORD *)(v1331 - 4);
                v759 = v1264 - v1331;
                v760 = 0LL;
                if ( (__int64)(v1264 - v1331) <= -(__int64)(v616 - v1203) )
                  v759 = v1203 - v616;
                v761 = (char *)v693 - v1331;
                while ( v757 - v759 > 3 )
                {
                  if ( *v758 != *(_DWORD *)((char *)v758 + (_QWORD)v761) )
                  {
                    _BitScanReverse(&v762, *v758 ^ *(_DWORD *)((char *)v758 + (_QWORD)v761));
                    v757 -= (31 - v762) >> 3;
                    goto LABEL_1289;
                  }
                  v757 -= 4;
                  v760 -= 4LL;
                  --v758;
                }
                v764 = v759;
                if ( v760 > v759 )
                {
                  v765 = (_BYTE *)(v760 + v1357 - 4);
                  do
                  {
                    if ( *v765 != *((_BYTE *)v1280 + v616 - v1203 + v760 - 1) )
                      break;
                    --v757;
                    --v760;
                    --v765;
                  }
                  while ( v760 > v764 );
                  v619 = v1271;
                }
              }
LABEL_1289:
              v621 = v1219;
              v763 = v749 - v757;
              v622 = v1211;
              if ( v763 > v1240 )
              {
                v1240 = v763;
                v1304 = v1252 - v616;
                v1285 = v1331 + v757;
              }
LABEL_1291:
              v637 = v1203;
            }
LABEL_974:
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v616 + 0x20000) != 1 )
              goto LABEL_1001;
            v639 = v616 - 1;
            if ( v622 )
            {
              if ( v1211 != 2 )
                goto LABEL_1001;
            }
            else
            {
              if ( (_BYTE)v621 != HIBYTE(v621) || (unsigned __int16)v621 != HIWORD(v621) )
              {
                v1211 = 1;
LABEL_1001:
                v640 = v1227;
                goto LABEL_1002;
              }
              v1211 = 2;
              v1371 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1331 + 4), v1258, v621) + 4LL;
            }
            v640 = v1227;
            if ( v639 < v1227 || v619 - v616 < 3 )
            {
              v621 = v1219;
LABEL_1002:
              v616 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v616 + 0x20000);
LABEL_1003:
              v617 = v1340;
              goto LABEL_1004;
            }
            if ( v639 >= v619 )
            {
              v641 = 0;
              v642 = &v1317[v639 - v619];
            }
            else
            {
              v641 = 1;
              v642 = (char *)v1280 + v639 - v637;
            }
            v621 = v1219;
            if ( *(_DWORD *)v642 != v1219 )
              goto LABEL_1001;
            v643 = v1258;
            if ( v641 )
              v643 = v1377;
            v644 = (unsigned int)LZ4HC_countPattern(v642 + 4, v643, v1219) + 4LL;
            if ( v641 )
            {
              if ( &v642[v644] == v645 )
              {
                v882 = LZ4HC_rotatePattern(v644, v1219);
                v644 += (unsigned int)LZ4HC_countPattern(v1317, v1258, v882);
              }
              v647 = (unsigned __int64)v1280;
              v646 = v1317;
              v648 = (char *)v1280;
            }
            else
            {
              v646 = v1317;
              v647 = (unsigned __int64)v1280;
              v648 = v1317;
            }
            v621 = v1219;
            v1382 = v1219;
            for ( k = (unsigned __int64)v642; k >= (unsigned __int64)(v648 + 4) && *(_DWORD *)(k - 4) == v1219; k -= 4LL )
              ;
            v650 = (char *)&v1382 - k + 3;
            while ( k > (unsigned __int64)v648 && *(_BYTE *)(k - 1) == v650[k] )
              --k;
            v685 = (unsigned int)((_DWORD)v642 - k);
            if ( !v641 && &v642[-v685] == v646 && v1203 < v619 )
            {
              v689 = LZ4HC_rotatePattern((unsigned int)(k - (_DWORD)v642), v1219);
              v691 = v1377;
              v1383 = v689;
              while ( v691 >= v647 + 4 && *(_DWORD *)(v691 - 4) == v689 )
                v691 -= 4LL;
              v692 = (char *)&v1383 - v691 + 3;
              while ( v691 > v647 && *(_BYTE *)(v691 - 1) == v692[v691] )
                --v691;
              LODWORD(v685) = v1377 - v691 + v690;
            }
            v640 = v1227;
            v616 = v1227;
            if ( v639 - (unsigned int)v685 > v1227 )
              v616 = v639 - v685;
            v686 = v644 + v639 - v616;
            if ( v686 >= v1371 && v644 <= v1371 )
            {
              v616 = v619;
              if ( v619 - ((_DWORD)v644 - (_DWORD)v1371 + v639) - 1 >= 3 )
                v616 = v644 - v1371 + v639;
              goto LABEL_1003;
            }
            v617 = v1340;
            if ( v619 - v616 - 1 < 3 )
            {
              v616 = v619;
              goto LABEL_1004;
            }
            if ( !v1340 )
            {
              v687 = v1371;
              if ( v686 < v1371 )
                v687 = v644 + v639 - v616;
              if ( v1240 < v687 )
              {
                if ( v619 + v1331 - v616 - (unsigned __int64)v646 > 0xFFFF )
                  goto LABEL_1005;
                v1240 = v687;
                v1304 = v1252 - v616;
                v1285 = v1331;
              }
              v688 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v616 + 0x20000);
              if ( v688 > v616 )
                goto LABEL_1005;
              v616 -= v688;
              goto LABEL_1003;
            }
LABEL_1004:
            v606 = v1317;
            v608 = v1280;
            v618 = v1264;
            if ( v616 < v640 )
              goto LABEL_1005;
          }
          v623 = (_DWORD *)((char *)v606 + v616 - v619);
          if ( *(_WORD *)(v618 + v1240 - 1) != *(_WORD *)((char *)v623 + v1240 - v617 - 1) || *v623 != v621 )
            goto LABEL_1291;
          v624 = 0;
          if ( v617 )
          {
            v625 = v1331 - 4;
            v626 = v618 - v1331;
            v627 = 0LL;
            v628 = -(__int64)(v616 - v619);
            if ( (__int64)(v618 - v1331) <= v628 )
              v626 = v628;
            v629 = (char *)v623 - v1331;
            while ( v624 - v626 > 3 )
            {
              if ( *(_DWORD *)v625 != *(_DWORD *)&v629[v625] )
              {
                _BitScanReverse(&v630, *(_DWORD *)v625 ^ *(_DWORD *)&v629[v625]);
                v624 -= (31 - v630) >> 3;
                goto LABEL_968;
              }
              v624 -= 4;
              v627 -= 4LL;
              v625 -= 4LL;
            }
            v744 = v626;
            if ( v627 > v626 )
            {
              v745 = (_BYTE *)(v627 + v1357 - 4);
              do
              {
                if ( *v745 != *((_BYTE *)v606 + v616 - v619 + v627 - 1) )
                  break;
                --v624;
                --v627;
                --v745;
              }
              while ( v627 > v744 );
            }
          }
LABEL_968:
          v631 = (_QWORD *)(v1331 + 4);
          v632 = v623 + 1;
          v633 = v1331 + 4;
          if ( v1331 + 4 < v1258 - 7 )
          {
            if ( *v632 != *v631 )
            {
              __asm { tzcnt   rcx, rax }
              v636 = (unsigned int)_RCX >> 3;
LABEL_971:
              v637 = v1203;
              v638 = v636 - v624 + 4;
              if ( v638 > v1240 )
              {
                v1240 = v638;
                v1304 = v1252 - v616;
                v1285 = v1331 + v624;
              }
              v621 = v1219;
              v622 = v1211;
              goto LABEL_974;
            }
            while ( 1 )
            {
              ++v631;
              ++v632;
              if ( (unsigned __int64)v631 >= v1258 - 7 )
                break;
              if ( *v632 != *v631 )
              {
                __asm { tzcnt   rax, rax }
                v636 = ((unsigned int)_RAX >> 3) - v633 + (_DWORD)v631;
                goto LABEL_971;
              }
            }
          }
          if ( (unsigned __int64)v631 < v1258 - 3 && *(_DWORD *)v632 == *(_DWORD *)v631 )
          {
            v631 = (_QWORD *)((char *)v631 + 4);
            v632 = (_QWORD *)((char *)v632 + 4);
          }
          if ( (unsigned __int64)v631 < v1258 - 1 && *(_WORD *)v632 == *(_WORD *)v631 )
          {
            v631 = (_QWORD *)((char *)v631 + 2);
            v632 = (_QWORD *)((char *)v632 + 2);
          }
          if ( (unsigned __int64)v631 < v1258 && *(_BYTE *)v632 == *(_BYTE *)v631 )
            LODWORD(v631) = (_DWORD)v631 + 1;
          v636 = (_DWORD)v631 - v633;
          goto LABEL_971;
        }
LABEL_1006:
        v449 = (unsigned __int64)v1233;
        v460 = __PAIR64__(v1240, v610);
        v456 = v1264;
        v459 = v1240;
LABEL_672:
        if ( v459 <= v454 )
          break;
        v452 = v1395;
        v461 = v449 + v1395;
        if ( v1285 >= v461 + 3 )
        {
          if ( v456 < v461 )
          {
            if ( (__int64)(v456 - v449) >= 18 )
            {
              v452 = v456 - v449;
              v1395 = v456 - v449;
            }
            else
            {
              if ( v1395 > 18 )
                v452 = 18;
              v1395 = v452;
              if ( v449 + v452 > v456 + v454 - 4LL )
              {
                v452 = v456 + v454 - v449 - 4;
                v1395 = v452;
              }
              v503 = v449 + v452 - v456;
              if ( v503 > 0 )
              {
                v1264 = v503 + v456;
                HIDWORD(v1276) = v454 - v503;
                v455 = v1276;
              }
            }
          }
          v504 = v1256;
          v464 = v26;
          v505 = v26;
          v506 = v26;
          v507 = v26 + 1;
          v508 = v449 - (_QWORD)v1256;
          if ( a7 && (unsigned __int64)&v507[v508 / 0xFF + 8 + v508] > v1245 )
          {
            v23 = v1256;
LABEL_994:
            v27 = v1245;
LABEL_1033:
            v519 = (unsigned __int64)v1233;
            goto LABEL_1034;
          }
          if ( v508 < 0xF )
          {
            *v505 = 16 * v508;
          }
          else
          {
            v509 = v508 - 15;
            *v505 = -16;
            if ( v508 - 15 >= 0xFF )
            {
              v908 = v509 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v908) = -1;
              memset_thunk_772440563353939046(v507, SDWORD2(v908), v509 / 0xFF);
              v507 += v509 / 0xFF;
              v505 = v464;
              v504 = v1256;
              LOBYTE(v509) = v509 / 0xFF + v509;
              v506 = v464;
            }
            *v507++ = v509;
            v449 = (unsigned __int64)v1233;
          }
          v510 = v507;
          do
          {
            *v510 = *(_QWORD *)((char *)v510 + (char *)v504 - v507);
            ++v510;
          }
          while ( v510 < (_QWORD *)&v507[v508] );
          v511 = &v507[v508];
          v452 = v1395;
          *v511 = v1282;
          v26 = v511 + 1;
          v512 = v1395 - 4LL;
          v1320 = v26;
          if ( a7 && (unsigned __int64)&v26[v512 / 0xFF + 6] > v1245 )
            goto LABEL_942;
          v513 = *v506;
          if ( v512 >= 0xF )
          {
            v596 = v1395 - 19LL;
            *v505 = v513 + 15;
            if ( v596 >= 0x1FE )
            {
              v597 = v596 / 0x1FE;
              v596 %= 0x1FEuLL;
              do
              {
                *v26 = -1;
                v598 = v26 + 1;
                *v598 = -1;
                v26 = v598 + 1;
                --v597;
              }
              while ( v597 );
            }
            if ( v596 >= 0xFF )
            {
              LOBYTE(v596) = v596 + 1;
              *v26++ = -1;
            }
            *v26++ = v596;
            v1320 = v26;
          }
          else
          {
            *v505 = v513 + v512;
          }
          LOWORD(v1282) = v455;
          v452 = HIDWORD(v455);
          v455 = v460;
          v1256 = (unsigned int *)(v449 + v1395);
          v1276 = v460;
          v449 = v1264;
          v454 = HIDWORD(v460);
          v1233 = (unsigned int *)v1264;
          v1325 = v460;
          v456 = v1285;
          v451 = (unsigned __int64)v1308;
          v1264 = v1285;
          v1395 = v452;
          goto LABEL_669;
        }
        if ( v1285 < v461 )
        {
          v1276 = v460;
          v455 = v460;
          v454 = HIDWORD(v460);
          v456 = v1285;
          v1325 = v460;
          v451 = (unsigned __int64)v1308;
          v1264 = v1285;
          goto LABEL_669;
        }
        if ( v456 < v461 )
        {
          v462 = v449 + v1395 - v456;
          v1264 = v462 + v456;
          if ( v454 - v462 >= 4 )
          {
            HIDWORD(v1276) = v454 - v462;
            v455 = v1276;
          }
          else
          {
            v1264 = v1285;
            v455 = v460;
          }
        }
        v463 = v1256;
        v464 = v26;
        v465 = v26;
        v466 = v26;
        v467 = v26 + 1;
        v468 = v449 - (_QWORD)v1256;
        if ( a7 && (unsigned __int64)&v467[v468 / 0xFF + 8 + v468] > v1245 )
        {
          v27 = v1245;
          v23 = v1256;
          goto LABEL_1033;
        }
        if ( v468 < 0xF )
        {
          *v465 = 16 * v468;
        }
        else
        {
          v469 = v468 - 15;
          *v465 = -16;
          if ( v468 - 15 >= 0xFF )
          {
            v909 = v469 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v909) = -1;
            memset_thunk_772440563353939046(v467, SDWORD2(v909), v469 / 0xFF);
            v467 += v469 / 0xFF;
            v465 = v464;
            v463 = v1256;
            LOBYTE(v469) = v469 / 0xFF + v469;
            v466 = v464;
          }
          *v467++ = v469;
          v449 = (unsigned __int64)v1233;
        }
        v470 = v467;
        do
        {
          *v470 = *(_QWORD *)((char *)v470 + (char *)v463 - v467);
          ++v470;
        }
        while ( v470 < (_QWORD *)&v467[v468] );
        v471 = &v467[v468];
        v452 = v1395;
        *v471 = v1282;
        v26 = v471 + 1;
        v472 = v1395 - 4LL;
        v1320 = v26;
        if ( a7 && (unsigned __int64)&v26[v472 / 0xFF + 6] > v1245 )
        {
LABEL_942:
          v23 = v1256;
          goto LABEL_994;
        }
        v473 = *v466;
        if ( v472 >= 0xF )
        {
          v667 = v1395 - 19LL;
          *v465 = v473 + 15;
          if ( v667 >= 0x1FE )
          {
            v668 = v667 / 0x1FE;
            v667 %= 0x1FEuLL;
            do
            {
              *v26 = -1;
              v669 = v26 + 1;
              *v669 = -1;
              v26 = v669 + 1;
              --v668;
            }
            while ( v668 );
          }
          if ( v667 >= 0xFF )
          {
            LOBYTE(v667) = v667 + 1;
            *v26++ = -1;
          }
          *v26++ = v667;
          v1320 = v26;
        }
        else
        {
          *v465 = v473 + v472;
        }
        v1282 = v460;
        v1256 = (unsigned int *)(v449 + v1395);
        v448 = v455;
        v449 = v1285;
        v1233 = (unsigned int *)v1285;
        v450 = (unsigned int *)v1264;
        v1370 = v1264;
        v1374 = v455;
        v1318 = HIDWORD(v455);
      }
      if ( v456 < v449 + v1395 )
        v1395 = v456 - v449;
      v23 = v1256;
      v464 = v26;
      v493 = v26;
      v494 = v26;
      v495 = v26 + 1;
      v496 = v449 - (_QWORD)v1256;
      if ( a7 )
      {
        v27 = v1245;
        if ( (unsigned __int64)&v495[v496 / 0xFF + 8 + v496] > v1245 )
        {
          v452 = v1395;
          goto LABEL_1033;
        }
      }
      if ( v496 < 0xF )
      {
        *v493 = 16 * v496;
      }
      else
      {
        v497 = v496 - 15;
        *v493 = -16;
        if ( v496 - 15 >= 0xFF )
        {
          v910 = v497 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v910) = -1;
          memset_thunk_772440563353939046(v495, SDWORD2(v910), v497 / 0xFF);
          v495 += v497 / 0xFF;
          v494 = v493;
          v23 = v1256;
          LOBYTE(v497) = v497 / 0xFF + v497;
        }
        *v495++ = v497;
        v449 = (unsigned __int64)v1233;
      }
      v498 = v495;
      do
      {
        *v498 = *(_QWORD *)((char *)v498 + (char *)v23 - v495);
        ++v498;
      }
      while ( v498 < (_QWORD *)&v495[v496] );
      v499 = &v495[v496];
      *v499 = v1282;
      v500 = v499 + 1;
      v501 = v1395 - 4LL;
      if ( a7 )
      {
        v27 = v1245;
        if ( (unsigned __int64)&v500[v501 / 0xFF + 6] > v1245 )
        {
          v452 = v1395;
          goto LABEL_1033;
        }
      }
      v502 = *v494;
      if ( v501 >= 0xF )
      {
        v532 = v1395 - 19LL;
        *v493 = v502 + 15;
        if ( v532 >= 0x1FE )
        {
          v533 = v532 / 0x1FE;
          v532 %= 0x1FEuLL;
          do
          {
            *v500 = -1;
            v534 = v500 + 1;
            *v534 = -1;
            v500 = v534 + 1;
            --v533;
          }
          while ( v533 );
        }
        if ( v532 >= 0xFF )
        {
          LOBYTE(v532) = v532 + 1;
          *v500++ = -1;
        }
        *v500++ = v532;
      }
      else
      {
        *v493 = v501 + v502;
      }
      v535 = v1264;
      v23 = (unsigned int *)(v449 + v1395);
      v1256 = v23;
      v464 = v500;
      v1233 = (unsigned int *)v1264;
      v536 = v500;
      v537 = v500;
      v538 = v1264 - (_QWORD)v23;
      v539 = v500 + 1;
      if ( a7 && (unsigned __int64)&v539[v538 / 0xFF + 8 + v538] > v1245 )
        goto LABEL_934;
      if ( v538 < 0xF )
      {
        *v536 = 16 * v538;
      }
      else
      {
        v540 = v538 - 15;
        *v536 = -16;
        if ( v538 - 15 >= 0xFF )
        {
          v911 = v540 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v911) = -1;
          memset_thunk_772440563353939046(v539, SDWORD2(v911), v540 / 0xFF);
          v535 = v1264;
          v539 += v540 / 0xFF;
          v537 = v536;
          LOBYTE(v540) = v540 / 0xFF + v540;
        }
        *v539++ = v540;
      }
      v541 = v539;
      do
      {
        *v541 = *(_QWORD *)((char *)v541 + (char *)v23 - v539);
        ++v541;
      }
      while ( v541 < (_QWORD *)&v539[v538] );
      v542 = &v539[v538];
      *v542 = v1276;
      v26 = v542 + 1;
      v543 = SHIDWORD(v1276) - 4LL;
      v1320 = v26;
      if ( a7 )
      {
        if ( (unsigned __int64)&v26[v543 / 0xFF + 6] > v1245 )
        {
LABEL_934:
          v519 = v1264;
          v27 = v1245;
          LOWORD(v1282) = v455;
          v452 = HIDWORD(v455);
LABEL_1034:
          if ( a7 != 2 )
            goto LABEL_856;
          v670 = v519 - (_QWORD)v23;
          v26 = v464;
          v671 = (v519 - (unsigned __int64)v23 + 240) / 0xFF + v519 - (_QWORD)v23 + 1;
          if ( (unsigned __int64)&v464[v671] <= v27 - 3 )
          {
            if ( v452 > 255 * (v27 - 3 - v671 - (unsigned __int64)v464) + 18 )
              v452 = 255 * (v27 - 3 - v671 - (_DWORD)v464) + 18;
            v1396 = v452;
            if ( (__int64)(v27 + v452 - v671 - (_QWORD)v464 + 2) >= 12 )
            {
              v672 = v464 + 1;
              if ( v670 < 0xF )
              {
                *v464 = 16 * v670;
              }
              else
              {
                v673 = v670 - 15;
                *v464 = -16;
                if ( v670 - 15 >= 0xFF )
                {
                  v913 = v673 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v913) = -1;
                  memset_thunk_772440563353939046(v464 + 1, SDWORD2(v913), v673 / 0xFF);
                  v452 = v1396;
                  v672 += v673 / 0xFF;
                  v27 = v1245;
                  v23 = v1256;
                  LOBYTE(v673) = v673 / 0xFF + v673;
                }
                *v672++ = v673;
              }
              v674 = v672;
              v675 = (char *)v23 - v672;
              do
              {
                *v674 = *(_QWORD *)((char *)v674 + v675);
                ++v674;
              }
              while ( v674 < (_QWORD *)&v672[v670] );
              v676 = &v672[v670];
              v677 = v452 - 4LL;
              *v676 = v1282;
              v26 = v676 + 1;
              v678 = *v464;
              if ( v677 < 0xF )
              {
                *v464 = v678 + v677;
              }
              else
              {
                v679 = v452 - 19LL;
                *v464 = v678 + 15;
                if ( v679 >= 0x1FE )
                {
                  v680 = v679 / 0x1FE;
                  v679 %= 0x1FEuLL;
                  do
                  {
                    *v26 = -1;
                    v681 = v26 + 1;
                    *v681 = -1;
                    v26 = v681 + 1;
                    --v680;
                  }
                  while ( v680 );
                }
                if ( v679 >= 0xFF )
                {
                  LOBYTE(v679) = v679 + 1;
                  *v26++ = -1;
                }
                *v26++ = v679;
              }
              v23 = (unsigned int *)((char *)v1233 + v452);
              v1256 = v23;
            }
          }
LABEL_1053:
          v8 = a4;
          v28 = v1342;
LABEL_21:
          v30 = v28 - (char *)v23;
          v31 = v26;
          if ( a7 == 2 )
          {
            v27 += 5LL;
          }
          else if ( !a7 )
          {
            goto LABEL_858;
          }
          if ( (unsigned __int64)&v26[(v30 + 240) / 0xFF + 1 + v30] <= v27 )
          {
LABEL_858:
            v553 = v30 + (_DWORD)v23;
            if ( v30 < 0xF )
            {
              *v26 = 16 * v30;
            }
            else
            {
              *v26 = -16;
              v554 = v30 - 15;
              ++v26;
              if ( v30 - 15 >= 0xFF )
              {
                v914 = v554 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v914) = -1;
                memset_thunk_772440563353939046(v26, SDWORD2(v914), v554 / 0xFF);
                v26 += v554 / 0xFF;
                v23 = v1256;
                LOBYTE(v554) = v554 / 0xFF + v554;
              }
              v31 = v26;
              *v26 = v554;
            }
            memmove(v31 + 1, v23, v30);
            *v8 = v553 - v1387;
            v552 = (_DWORD)v26 + 1 + v30 - v1388;
            goto LABEL_863;
          }
          if ( a7 != 1 )
          {
            v30 = v27 - (_QWORD)v26 - 1 - ((v27 - (unsigned __int64)v26 - 1 + 241) >> 8);
            goto LABEL_858;
          }
LABEL_856:
          v552 = 0;
LABEL_863:
          if ( v552 <= 0 )
            *(_BYTE *)(a1 + 262183) = 1;
          return (unsigned int)v552;
        }
      }
      v544 = *v537;
      if ( v543 < 0xF )
      {
        *v536 = v543 + v544;
      }
      else
      {
        v545 = SHIDWORD(v1276) - 19LL;
        *v536 = v544 + 15;
        if ( v545 >= 0x1FE )
        {
          v546 = v545 / 0x1FE;
          v545 %= 0x1FEuLL;
          do
          {
            *v26 = -1;
            v547 = v26 + 1;
            *v547 = -1;
            v26 = v547 + 1;
            --v546;
          }
          while ( v546 );
        }
        if ( v545 >= 0xFF )
        {
          LOBYTE(v545) = v545 + 1;
          *v26++ = -1;
        }
        *v26++ = v545;
        v1320 = v26;
      }
      v24 = (unsigned int *)(v535 + SHIDWORD(v1276));
      v27 = v1245;
LABEL_849:
      v29 = (unsigned __int64)v1308;
      v23 = v24;
      v1256 = v24;
      v1233 = v24;
    }
  }
  if ( a7 == 2 && a5 < 1 || *a4 > 0x7E000000 )
    return v7;
  v360 = a3;
  *(_QWORD *)(a1 + 0x40000) = v10 + (int)*a4;
  v361 = (char *)a2;
  v362 = (int)*a4;
  v363 = v11;
  v364 = &a3[a5];
  v1385 = 16;
  v365 = (char *)v11 + v362;
  v366 = (unsigned __int64)v11 + v362 - 12;
  *v8 = 0;
  v367 = v364 - 5;
  if ( a7 != 2 )
    v367 = v364;
  v1275 = v367;
  v1384 = 0x10000000000LL;
  v1234 = v11;
  v1265 = v11;
  v1338 = (char *)v11 + v362;
  v1315 = (__int64)v11 + v362 - 12;
  v1246 = (unsigned __int64)(v365 - 5);
  v1278 = a3;
  v1257 = 0LL;
  v1289 = 0LL;
  if ( (int)v362 < 13 )
  {
LABEL_1330:
    v783 = v365 - v361;
    v1341 = v783;
    v784 = v360;
    if ( a7 == 2 )
    {
      v367 += 5;
    }
    else if ( !a7 )
    {
LABEL_1343:
      v787 = v783 + (_DWORD)v361;
      if ( v783 >= 0xF )
      {
        *v360 = -16;
        v786 = v783 - 15;
        ++v360;
        if ( v783 - 15 >= 0xFF )
        {
          v1196 = v786 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v1196) = -1;
          memset_thunk_772440563353939046(v360, SDWORD2(v1196), v786 / 0xFF);
          v361 = (char *)v1265;
          v360 += v786 / 0xFF;
          v783 = v1341;
          LOBYTE(v786) = v786 / 0xFF + v786;
        }
        v784 = v360;
        *v360 = v786;
      }
      else
      {
        *v360 = 16 * v783;
      }
      memmove(v784 + 1, v361, v783);
      v785 = (_DWORD)v360 + 1 + v783 - v1388;
      *a4 = v787 - (_DWORD)v11;
      goto LABEL_1339;
    }
    if ( &v360[(v783 + 240) / 0xFF + 1 + v783] > v367 )
    {
      if ( a7 == 1 )
        goto LABEL_1334;
      v783 = v367 - v360 - 1 - ((unsigned __int64)(v367 - v360 - 1 + 241) >> 8);
      v1341 = v783;
    }
    goto LABEL_1343;
  }
LABEL_530:
  if ( (unsigned __int64)v363 > v366 )
    goto LABEL_1329;
  v368 = 3;
  v369 = *(unsigned int *)(v13 + 262168);
  v370 = *(_QWORD *)(v13 + 262160);
  v371 = *(_QWORD **)(v13 + 262152);
  v372 = (_DWORD)v363 + *(_DWORD *)(v13 + 262168) - (_DWORD)v371;
  v1372 = *(_QWORD *)(v13 + 262184);
  v373 = *(_DWORD *)(v13 + 262172);
  v374 = v373;
  v1301 = v373;
  v1393 = 3;
  v1217 = v372;
  v1309 = v370;
  if ( v373 + 0x10000 <= v372 )
    v374 = v372 - 0xFFFF;
  v1209 = v374;
  v1237 = HIDWORD(v1384);
  v1328 = v369 + v370 - v373;
  v375 = *(unsigned int *)(a1 + 262176);
  v1293 = *v1234;
  v1354 = 0LL;
  v376 = 0;
  v1200 = 0;
  v377 = 0;
  if ( (unsigned int)v375 < v372 )
  {
    v777 = (_DWORD *)((char *)v371 + v375 - v369);
    do
    {
      v778 = (unsigned __int64)(unsigned int)(-1640531535 * *v777) >> 17;
      v779 = (unsigned int)(v375 - *(_DWORD *)(a1 + 4 * v778));
      if ( v779 > 0xFFFF )
        LOWORD(v779) = -1;
      v777 = (_DWORD *)((char *)v777 + 1);
      *(_WORD *)(a1 + 2LL * (unsigned __int16)v375 + 0x20000) = v779;
      *(_DWORD *)(a1 + 4 * v778) = v375;
      LODWORD(v375) = v375 + 1;
    }
    while ( (unsigned int)v375 < v372 );
    v368 = 3;
    v374 = v1209;
    v370 = v1309;
  }
  v378 = v1234;
  *(_DWORD *)(a1 + 262176) = v372;
  v379 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v1234) >> 17));
  while ( v379 >= v374 && v1237 > 0 )
  {
    --v1237;
    if ( v379 >= (unsigned int)v369 )
    {
      v380 = v379 - (unsigned int)v369;
      if ( *(_WORD *)((char *)v378 + v368 - 1) != *(_WORD *)((char *)v371 + v368 + v380 - 1)
        || *(_DWORD *)((char *)v371 + v380) != v1293 )
      {
        goto LABEL_1306;
      }
      v381 = v378 + 1;
      v382 = (_QWORD *)((char *)v371 + v380 + 4);
      v383 = (_DWORD)v378 + 4;
      if ( (unsigned __int64)v381 < v1246 - 7 )
      {
        if ( *v382 != *v381 )
        {
          __asm { tzcnt   rcx, rax }
          v386 = (unsigned int)_RCX >> 3;
LABEL_1464:
          v378 = v1234;
          v859 = v386 + 4;
          if ( v859 > v368 )
          {
            v377 = v1217 - v379;
            v1393 = v859;
            v1200 = v1217 - v379;
          }
          goto LABEL_1306;
        }
        while ( 1 )
        {
          ++v381;
          ++v382;
          if ( (unsigned __int64)v381 >= v1246 - 7 )
            break;
          if ( *v382 != *v381 )
          {
            __asm { tzcnt   rax, rax }
            v386 = ((unsigned int)_RAX >> 3) - v383 + (_DWORD)v381;
            goto LABEL_1464;
          }
        }
      }
      if ( (unsigned __int64)v381 < v1246 - 3 && *(_DWORD *)v382 == *(_DWORD *)v381 )
      {
        v381 = (_QWORD *)((char *)v381 + 4);
        v382 = (_QWORD *)((char *)v382 + 4);
      }
      if ( (unsigned __int64)v381 < v1246 - 1 && *(_WORD *)v382 == *(_WORD *)v381 )
      {
        v381 = (_QWORD *)((char *)v381 + 2);
        v382 = (_QWORD *)((char *)v382 + 2);
      }
      if ( (unsigned __int64)v381 < v1246 && *(_BYTE *)v382 == *(_BYTE *)v381 )
        LODWORD(v381) = (_DWORD)v381 + 1;
      v386 = (_DWORD)v381 - v383;
      goto LABEL_1464;
    }
    v766 = (_DWORD *)(v370 + v379 - v1301);
    if ( v379 > (int)v369 - 4 || *v766 != v1293 )
      goto LABEL_1306;
    v770 = v378 + 1;
    v771 = (_DWORD)v378 + 4;
    v772 = (_QWORD *)((char *)v378 + (unsigned int)v369 - v379);
    if ( (unsigned __int64)v772 > v1246 )
      v772 = (_QWORD *)v1246;
    v773 = v766 + 1;
    if ( v770 >= (_QWORD *)((char *)v772 - 7) )
      goto LABEL_1468;
    if ( *v773 == *v770 )
    {
      while ( 1 )
      {
        ++v770;
        ++v773;
        if ( v770 >= (_QWORD *)((char *)v772 - 7) )
          break;
        if ( *v773 != *v770 )
        {
          __asm { tzcnt   rax, rax }
          v776 = ((unsigned int)_RAX >> 3) - v771 + (_DWORD)v770;
          goto LABEL_1478;
        }
      }
LABEL_1468:
      if ( v770 < (_QWORD *)((char *)v772 - 3) && *(_DWORD *)v773 == *(_DWORD *)v770 )
      {
        v770 = (_QWORD *)((char *)v770 + 4);
        v773 = (_QWORD *)((char *)v773 + 4);
      }
      if ( v770 < (_QWORD *)((char *)v772 - 1) && *(_WORD *)v773 == *(_WORD *)v770 )
      {
        v770 = (_QWORD *)((char *)v770 + 2);
        v773 = (_QWORD *)((char *)v773 + 2);
      }
      if ( v770 < v772 && *(_BYTE *)v773 == *(_BYTE *)v770 )
        LODWORD(v770) = (_DWORD)v770 + 1;
      v776 = (_DWORD)v770 - v771;
      goto LABEL_1478;
    }
    __asm { tzcnt   rcx, rax }
    v776 = (unsigned int)_RCX >> 3;
LABEL_1478:
    v861 = v776 + 4;
    v862 = (_QWORD *)((char *)v1234 + (int)(v776 + 4));
    if ( v862 == v772 && (unsigned __int64)v772 < v1246 )
    {
      v863 = v371;
      v864 = (_QWORD *)((char *)v1234 + v861);
      if ( (unsigned __int64)v862 >= v1246 - 7 )
        goto LABEL_1483;
      if ( *v371 != *v862 )
      {
        __asm { tzcnt   rcx, rax }
        v918 = (unsigned int)_RCX >> 3;
      }
      else
      {
        v864 = v862 + 1;
        v863 = v371 + 1;
LABEL_1483:
        while ( (unsigned __int64)v864 < v1246 - 7 )
        {
          if ( *v863 != *v864 )
          {
            __asm { tzcnt   rax, rax }
            v918 = ((unsigned int)_RAX >> 3) - (_DWORD)v862 + (_DWORD)v864;
            goto LABEL_1574;
          }
          ++v864;
          ++v863;
        }
        if ( (unsigned __int64)v864 < v1246 - 3 && *(_DWORD *)v863 == *(_DWORD *)v864 )
        {
          v864 = (_QWORD *)((char *)v864 + 4);
          v863 = (_QWORD *)((char *)v863 + 4);
        }
        if ( (unsigned __int64)v864 < v1246 - 1 && *(_WORD *)v863 == *(_WORD *)v864 )
        {
          v864 = (_QWORD *)((char *)v864 + 2);
          v863 = (_QWORD *)((char *)v863 + 2);
        }
        if ( (unsigned __int64)v864 < v1246 && *(_BYTE *)v863 == *(_BYTE *)v864 )
          LODWORD(v864) = (_DWORD)v864 + 1;
        v918 = (_DWORD)v864 - (_DWORD)v862;
      }
LABEL_1574:
      v861 += v918;
    }
    v378 = v1234;
    if ( v861 > v368 )
    {
      v377 = v1217 - v379;
      v1393 = v861;
      v1200 = v1217 - v379;
    }
LABEL_1306:
    if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v379 + 0x20000) != 1 )
      goto LABEL_1303;
    v767 = v379 - 1;
    if ( v376 )
    {
      v1228 = v376;
      if ( v376 != 2 )
        goto LABEL_1303;
    }
    else
    {
      if ( (_BYTE)v1293 != HIBYTE(v1293) || (unsigned __int16)v1293 != HIWORD(v1293) )
      {
        v376 = 1;
LABEL_1303:
        v374 = v1209;
LABEL_1304:
        v379 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v379 + 0x20000);
        goto LABEL_1305;
      }
      v376 = 2;
      v1228 = 2;
      v1354 = (unsigned int)LZ4HC_countPattern(v378 + 1, v1246, v1293) + 4LL;
    }
    v374 = v1209;
    if ( v767 < v1209 || (unsigned int)v369 - v767 - 1 < 3 )
      goto LABEL_1304;
    if ( v767 >= (unsigned int)v369 )
    {
      v768 = 0;
      v769 = (unsigned __int64)v371 + v767 - (unsigned int)v369;
    }
    else
    {
      v768 = 1;
      v769 = v1309 + v767 - v1301;
    }
    if ( *(_DWORD *)v769 != v1293 )
    {
      v376 = v1228;
      goto LABEL_1304;
    }
    v920 = v1246;
    if ( v768 )
      v920 = v1328;
    v921 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v769 + 4), v920, v1293) + 4LL;
    if ( v768 )
    {
      if ( v921 + v769 == v922 )
      {
        v923 = LZ4HC_rotatePattern(v921, v1293);
        v921 += (unsigned int)LZ4HC_countPattern(v371, v1246, v923);
      }
      v924 = v1309;
    }
    else
    {
      v924 = (unsigned __int64)v371;
    }
    v925 = LZ4HC_reverseCountPattern(v769, v924, v1293);
    v926 = v925;
    if ( !v768 && (_QWORD *)(v769 - v925) == v371 && v1301 < (unsigned int)v369 )
    {
      v927 = LZ4HC_rotatePattern(-v925, v1293);
      v928 = LZ4HC_reverseCountPattern(v1328, v1309, v927);
      v926 = v928 + v929;
    }
    v374 = v1209;
    v930 = v767 - v926;
    v931 = v1209;
    if ( v930 > v1209 )
      v931 = v930;
    v932 = v921 + v767 - v931;
    if ( v932 >= v1354 && v921 <= v1354 )
    {
      v379 = v369;
      if ( (unsigned int)v369 - (v767 - (_DWORD)v1354 + (_DWORD)v921) - 1 >= 3 )
        v379 = v767 - v1354 + v921;
      goto LABEL_1602;
    }
    if ( (unsigned int)v369 - v931 - 1 < 3 )
    {
      v379 = v369;
LABEL_1602:
      v377 = v1200;
      v376 = v1228;
LABEL_1305:
      v368 = v1393;
      v372 = v1217;
      v370 = v1309;
      v378 = v1234;
    }
    else
    {
      v368 = v1393;
      v378 = v1234;
      v933 = v1354;
      v372 = v1217;
      if ( v932 < v1354 )
        v933 = v932;
      if ( v1393 >= v933 )
      {
        v377 = v1200;
      }
      else
      {
        if ( (unsigned __int64)(v369 + (char *)v1234 - v931 - (char *)v371) > 0xFFFF )
        {
          v374 = v1209;
          v377 = v1200;
          break;
        }
        v1393 = v933;
        v377 = v1217 - v931;
        v368 = v933;
        v1200 = v1217 - v931;
      }
      v374 = v1209;
      v934 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v931 + 0x20000);
      if ( v934 > v931 )
        break;
      v376 = v1228;
      v379 = v931 - v934;
      v370 = v1309;
    }
  }
  v888 = v1237;
  v360 = v1278;
  if ( v1237 > 0 && v372 - v374 < 0xFFFF )
  {
    v935 = v1234;
    v936 = *(_QWORD *)(v1372 + 262152);
    v937 = *(unsigned int *)(v1372 + 262168);
    v938 = v937 + *(_QWORD *)(v1372 + 0x40000) - v936;
    v899 = *(_DWORD *)(v1372 + 4 * ((unsigned __int64)(-1640531535 * *v1234) >> 17));
    v898 = v374 + v899 - v938;
    v900 = v1217 - v898;
    if ( v1217 - v898 <= 0xFFFF )
    {
      v939 = v1393;
      while ( 1 )
      {
        v887 = v888--;
        v1242 = v888;
        if ( !v887 )
        {
LABEL_1544:
          v1393 = v939;
          v360 = v1278;
          goto LABEL_1521;
        }
        v889 = v899 - v937;
        if ( *(_DWORD *)(v889 + v936) == v1293 )
          break;
LABEL_1543:
        v897 = *(unsigned __int16 *)(v1372 + 2LL * (unsigned __int16)v899 + 0x20000);
        v898 -= v897;
        v899 -= v897;
        v900 = v1217 - v898;
        if ( v1217 - v898 > 0xFFFF )
          goto LABEL_1544;
      }
      v890 = (unsigned __int64)v935 + v938 - v899;
      if ( v890 > v1246 )
        v890 = v1246;
      v891 = (_QWORD *)(v889 + v936 + 4);
      v892 = v935 + 1;
      v893 = (_DWORD)v935 + 4;
      if ( (unsigned __int64)(v935 + 1) < v890 - 7 )
      {
        if ( *v892 != *v891 )
        {
          __asm { tzcnt   rcx, rax }
          v896 = (unsigned int)_RCX >> 3;
LABEL_1631:
          v888 = v1242;
          v942 = v896 + 4;
          v935 = v1234;
          if ( v942 <= v939 )
          {
            v377 = v1200;
          }
          else
          {
            v939 = v942;
            v1200 = v900;
            v377 = v900;
          }
          goto LABEL_1543;
        }
        while ( 1 )
        {
          ++v892;
          ++v891;
          if ( (unsigned __int64)v892 >= v890 - 7 )
            break;
          if ( *v892 != *v891 )
          {
            __asm { tzcnt   rax, rax }
            v896 = ((unsigned int)_RAX >> 3) - v893 + (_DWORD)v892;
            goto LABEL_1631;
          }
        }
      }
      if ( (unsigned __int64)v892 < v890 - 3 && *(_DWORD *)v891 == *(_DWORD *)v892 )
      {
        v892 = (_QWORD *)((char *)v892 + 4);
        v891 = (_QWORD *)((char *)v891 + 4);
      }
      if ( (unsigned __int64)v892 < v890 - 1 && *(_WORD *)v891 == *(_WORD *)v892 )
      {
        v892 = (_QWORD *)((char *)v892 + 2);
        v891 = (_QWORD *)((char *)v891 + 2);
      }
      if ( (unsigned __int64)v892 < v890 && *(_BYTE *)v891 == *(_BYTE *)v892 )
        LODWORD(v892) = (_DWORD)v892 + 1;
      v896 = (_DWORD)v892 - v893;
      goto LABEL_1631;
    }
  }
LABEL_1521:
  v806 = (unsigned __int64)v1234;
  v883 = __PAIR64__(v1393, v377);
  v1345 = __PAIR64__(v1393, v377);
  v1321 = __PAIR64__(v1393, v377);
  if ( v1393 < 4 )
  {
    v361 = (char *)v1265;
    v363 = (unsigned int *)((char *)v1234 + 1);
    goto LABEL_1533;
  }
  v884 = v1234;
  for ( m = v1393; ; m = HIDWORD(v807) )
  {
    v805 = v1315;
    v1306 = v884;
    while ( 1 )
    {
      v799 = HIDWORD(v1321);
      v885 = SHIDWORD(v1321);
      v1397 = HIDWORD(v1321);
      v886 = SHIDWORD(v1321) + v806;
      if ( v886 > v805 )
      {
        v1261 = 0LL;
        v808 = 0;
        v807 = 0LL;
        goto LABEL_1526;
      }
      v943 = (unsigned int *)(v886 - 2);
      v1257 = v886 - 2;
      v1367 = v886 - 2;
      v1284 = (char *)(v886 - 2);
      v944 = *(unsigned int *)(a1 + 262172);
      v945 = *(_QWORD **)(a1 + 262152);
      v946 = *(unsigned int *)(a1 + 262168);
      v947 = *(_QWORD *)(a1 + 262160);
      v948 = v946 + v886 - 2 - (_DWORD)v945;
      v1365 = *(_QWORD *)(a1 + 262184);
      v1205 = HIDWORD(v1321);
      v949 = *(_DWORD *)(a1 + 262172);
      v1350 = v945;
      v1243 = v948;
      v1273 = v949;
      if ( (int)v944 + 0x10000 <= v948 )
        v949 = v948 - 0xFFFF;
      v1262 = *(_QWORD *)(a1 + 262160);
      v1230 = HIDWORD(v1384);
      v950 = *v943;
      v1333 = v947 + (unsigned int)v946 - v944;
      v951 = (_DWORD)v943 - (_DWORD)v1234;
      v952 = *(_DWORD *)(a1 + 262176);
      v1221 = v950;
      v1213 = v949;
      v1359 = 0LL;
      v1254 = 0;
      if ( v952 < v948 )
      {
        v953 = (_DWORD *)((char *)v945 + v952 - v946);
        do
        {
          v954 = (unsigned __int64)(unsigned int)(-1640531535 * *v953) >> 17;
          v955 = v952 - *(_DWORD *)(a1 + 4 * v954);
          if ( v955 > 0xFFFF )
            LOWORD(v955) = -1;
          v953 = (_DWORD *)((char *)v953 + 1);
          *(_WORD *)(a1 + 2LL * (unsigned __int16)v952 + 0x20000) = v955;
          *(_DWORD *)(a1 + 4 * v954) = v952++;
        }
        while ( v952 < v948 );
        v883 = v1345;
        LODWORD(v944) = v1273;
      }
      v956 = v1284;
      *(_DWORD *)(a1 + 262176) = v948;
      v957 = v951;
      v1311 = v951;
      v958 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v1284) >> 17));
      if ( v958 >= v949 )
      {
        v959 = (char *)v1234 + SHIDWORD(v1321);
        v960 = v1350;
        v961 = 0;
        while ( 1 )
        {
          if ( v1230 <= 0 )
          {
LABEL_1748:
            v883 = v1345;
            v360 = v1278;
            v885 = SHIDWORD(v1321);
            v949 = v1213;
            v948 = v1243;
            goto LABEL_1749;
          }
          v962 = v1221;
          --v1230;
          if ( v958 >= (unsigned int)v946 )
          {
            v963 = (_DWORD *)((char *)v960 + v958 - (unsigned int)v946);
            if ( *(_WORD *)((char *)v1234 + v1205 - 1) != *(_WORD *)((char *)v963 + v1205 - v957 - 1) || *v963 != v1221 )
              goto LABEL_1739;
            v964 = 0;
            if ( v957 )
            {
              v965 = 0LL;
              v966 = (_DWORD)v1234 - (_DWORD)v956;
              v967 = v963 - 1;
              v968 = -(__int64)(v958 - (unsigned int)v946);
              if ( (char *)v1234 - v956 <= v968 )
                v966 = v968;
              v969 = v956 - (char *)v963;
              while ( v964 - v966 > 3 )
              {
                if ( *v967 != *(_DWORD *)((char *)v967 + v969) )
                {
                  _BitScanReverse(&v970, *v967 ^ *(_DWORD *)((char *)v967 + v969));
                  v964 -= (31 - v970) >> 3;
                  goto LABEL_1661;
                }
                v964 -= 4;
                v965 -= 4LL;
                --v967;
              }
              v971 = v966;
              if ( v965 > v966 )
              {
                v972 = &v959[v965 - 3];
                do
                {
                  if ( *v972 != *((_BYTE *)v960 + v958 - (unsigned int)v946 + v965 - 1) )
                    break;
                  --v964;
                  --v965;
                  --v972;
                }
                while ( v965 > v971 );
                v960 = v1350;
              }
LABEL_1661:
              v956 = v1284;
            }
            v973 = v956 + 4;
            v974 = v963 + 1;
            v975 = (_DWORD)v956 + 4;
            if ( (unsigned __int64)v973 < v1246 - 7 )
            {
              if ( *v974 != *v973 )
              {
                __asm { tzcnt   rcx, rax }
                v978 = (unsigned int)_RCX >> 3;
LABEL_1678:
                v956 = v1284;
                v981 = v978 - v964 + 4;
                if ( v981 > v1205 )
                {
                  v1205 = v981;
                  v1254 = v1243 - v958;
                  v1257 = (unsigned __int64)&v1284[v964];
                }
                v962 = v1221;
                goto LABEL_1739;
              }
              while ( 1 )
              {
                ++v973;
                ++v974;
                if ( (unsigned __int64)v973 >= v1246 - 7 )
                  break;
                if ( *v974 != *v973 )
                {
                  __asm { tzcnt   rax, rax }
                  v978 = ((unsigned int)_RAX >> 3) - v975 + (_DWORD)v973;
                  goto LABEL_1678;
                }
              }
            }
            if ( (unsigned __int64)v973 < v1246 - 3 && *(_DWORD *)v974 == *(_DWORD *)v973 )
            {
              v973 = (_QWORD *)((char *)v973 + 4);
              v974 = (_QWORD *)((char *)v974 + 4);
            }
            if ( (unsigned __int64)v973 < v1246 - 1 && *(_WORD *)v974 == *(_WORD *)v973 )
            {
              v973 = (_QWORD *)((char *)v973 + 2);
              v974 = (_QWORD *)((char *)v974 + 2);
            }
            if ( (unsigned __int64)v973 < v1246 && *(_BYTE *)v974 == *(_BYTE *)v973 )
              LODWORD(v973) = (_DWORD)v973 + 1;
            v978 = (_DWORD)v973 - v975;
            goto LABEL_1678;
          }
          v982 = v958 - (unsigned int)v944;
          v983 = (_DWORD *)(v982 + v947);
          if ( v958 > (int)v946 - 4 || *v983 != v1221 )
          {
            v947 = v1262;
            goto LABEL_1739;
          }
          v984 = v956 + 4;
          v985 = v983 + 1;
          v986 = &v956[(unsigned int)v946 - v958];
          v987 = (_DWORD)v956 + 4;
          if ( (unsigned __int64)v986 > v1246 )
            v986 = (char *)v1246;
          if ( v984 >= v986 - 7 )
            goto LABEL_1691;
          if ( *v985 == *(_QWORD *)v984 )
            break;
          __asm { tzcnt   rcx, rax }
          v990 = (unsigned int)_RCX >> 3;
LABEL_1701:
          v993 = v990 + 4;
          v994 = &v1284[v990 + 4];
          if ( v994 == v986 && (unsigned __int64)v986 < v1246 )
          {
            v995 = v960;
            v996 = &v1284[v993];
            if ( (unsigned __int64)v994 >= v1246 - 7 )
              goto LABEL_1706;
            if ( *v960 != *(_QWORD *)v994 )
            {
              __asm { tzcnt   rcx, rax }
              v1000 = (unsigned int)_RCX >> 3;
            }
            else
            {
              v996 = v994 + 8;
              v995 = v960 + 1;
LABEL_1706:
              while ( (unsigned __int64)v996 < v1246 - 7 )
              {
                if ( *v995 != *(_QWORD *)v996 )
                {
                  __asm { tzcnt   rax, rax }
                  v1000 = ((unsigned int)_RAX >> 3) - (_DWORD)v994 + (_DWORD)v996;
                  goto LABEL_1721;
                }
                v996 += 8;
                ++v995;
              }
              if ( (unsigned __int64)v996 < v1246 - 3 && *(_DWORD *)v995 == *(_DWORD *)v996 )
              {
                v996 += 4;
                v995 = (_QWORD *)((char *)v995 + 4);
              }
              if ( (unsigned __int64)v996 < v1246 - 1 && *(_WORD *)v995 == *(_WORD *)v996 )
              {
                v996 += 2;
                v995 = (_QWORD *)((char *)v995 + 2);
              }
              if ( (unsigned __int64)v996 < v1246 && *(_BYTE *)v995 == *v996 )
                LODWORD(v996) = (_DWORD)v996 + 1;
              v1000 = (_DWORD)v996 - (_DWORD)v994;
            }
LABEL_1721:
            v993 += v1000;
          }
          v1002 = 0LL;
          v1003 = 0;
          if ( v1311 )
          {
            v1004 = v983 - 1;
            v1005 = (_DWORD)v1234 - (_DWORD)v1284;
            v1006 = -v982;
            if ( (char *)v1234 - v1284 <= v1006 )
              v1005 = v1006;
            v1007 = v1284 - (char *)v983;
            while ( v1003 - v1005 > 3 )
            {
              if ( *v1004 != *(_DWORD *)((char *)v1004 + v1007) )
              {
                _BitScanReverse(&v1008, *v1004 ^ *(_DWORD *)((char *)v1004 + v1007));
                v1003 -= (31 - v1008) >> 3;
                goto LABEL_1735;
              }
              v1003 -= 4;
              v1002 -= 4LL;
              --v1004;
            }
            v1009 = v1005;
            if ( v1002 > v1005 )
            {
              v1010 = (char *)v1234 + SHIDWORD(v1321) + v1002 - 3;
              do
              {
                if ( *v1010 != *(_BYTE *)(v1262 + v958 - v1273 + v1002 - 1) )
                  break;
                --v1003;
                --v1002;
                --v1010;
              }
              while ( v1002 > v1009 );
              v960 = v1350;
            }
          }
LABEL_1735:
          v956 = v1284;
          v1011 = v993 - v1003;
          v947 = v1262;
          v962 = v1221;
          if ( v1011 > v1205 )
          {
            v1205 = v1011;
            v1254 = v1243 - v958;
            v1257 = (unsigned __int64)&v1284[v1003];
          }
LABEL_1739:
          if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v958 + 0x20000) != 1 )
            goto LABEL_1744;
          v1012 = v958 - 1;
          if ( v961 )
          {
            if ( v961 != 2 )
              goto LABEL_1744;
          }
          else
          {
            if ( (_BYTE)v962 != HIBYTE(v962) || (unsigned __int16)v962 != HIWORD(v962) )
            {
              v961 = 1;
LABEL_1744:
              v1013 = v1213;
LABEL_1745:
              v958 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v958 + 0x20000);
              goto LABEL_1746;
            }
            v961 = 2;
            v1359 = (unsigned int)LZ4HC_countPattern(v956 + 4, v1246, v962) + 4LL;
          }
          v1013 = v1213;
          if ( v1012 < v1213 || (unsigned int)v946 - v958 < 3 )
            goto LABEL_1745;
          if ( v1012 >= (unsigned int)v946 )
          {
            v1030 = 0;
            v1031 = (unsigned __int64)v960 + v1012 - (unsigned int)v946;
          }
          else
          {
            v1030 = 1;
            v1031 = v947 + v1012 - v1273;
          }
          if ( *(_DWORD *)v1031 != v1221 )
            goto LABEL_1745;
          v1032 = v1246;
          if ( v1030 )
            v1032 = v1333;
          v1033 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1031 + 4), v1032, v1221) + 4LL;
          if ( v1030 )
          {
            if ( v1033 + v1031 == v1032 )
            {
              v1035 = LZ4HC_rotatePattern(v1033, v1221);
              v1033 += (unsigned int)LZ4HC_countPattern(v1036, v1246, v1035);
            }
            v1037 = v1262;
          }
          else
          {
            v1037 = v1034;
          }
          v1038 = LZ4HC_reverseCountPattern(v1031, v1037, v1221);
          v1040 = v1038;
          if ( !v1030 && (_QWORD *)(v1031 - v1038) == v960 && v1273 < (unsigned int)v946 )
          {
            v1041 = LZ4HC_rotatePattern(-v1038, v1039);
            v1040 += LZ4HC_reverseCountPattern(v1333, v1262, v1041);
          }
          v1013 = v1213;
          v1042 = v1012 - v1040;
          v958 = v1213;
          if ( v1042 > v1213 )
            v958 = v1042;
          v1043 = v1033 + v1012 - v958;
          if ( v1043 < v1359 || v1033 > v1359 )
          {
            v957 = v1311;
            if ( (unsigned int)v946 - v958 - 1 < 3 )
            {
              v958 = v946;
              goto LABEL_1747;
            }
            if ( v1311 )
              goto LABEL_1747;
            v956 = v1284;
            v1044 = v1359;
            if ( v1043 < v1359 )
              v1044 = v1033 + v1012 - v958;
            if ( v1205 < v1044 )
            {
              if ( (unsigned __int64)&v1284[v946 - v958 - (_QWORD)v960] > 0xFFFF )
                goto LABEL_1748;
              v1205 = v1044;
              v1254 = v1243 - v958;
              v1257 = (unsigned __int64)v1284;
            }
            v1045 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v958 + 0x20000);
            if ( v1045 > v958 )
              goto LABEL_1748;
            v958 -= v1045;
          }
          else
          {
            v958 = v946;
            if ( (unsigned int)v946 - (v1012 - (_DWORD)v1359 + (_DWORD)v1033) - 1 >= 3 )
              v958 = v1012 - v1359 + v1033;
          }
LABEL_1746:
          v957 = v1311;
LABEL_1747:
          v947 = v1262;
          v75 = v958 < v1013;
          LODWORD(v944) = v1273;
          v959 = (char *)v1234 + SHIDWORD(v1321);
          v956 = v1284;
          if ( v75 )
            goto LABEL_1748;
        }
        while ( 1 )
        {
          v984 += 8;
          ++v985;
          if ( v984 >= v986 - 7 )
            break;
          if ( *v985 != *(_QWORD *)v984 )
          {
            __asm { tzcnt   rax, rax }
            v990 = ((unsigned int)_RAX >> 3) - v987 + (_DWORD)v984;
            goto LABEL_1701;
          }
        }
LABEL_1691:
        if ( v984 < v986 - 3 && *(_DWORD *)v985 == *(_DWORD *)v984 )
        {
          v984 += 4;
          v985 = (_QWORD *)((char *)v985 + 4);
        }
        if ( v984 < v986 - 1 && *(_WORD *)v985 == *(_WORD *)v984 )
        {
          v984 += 2;
          v985 = (_QWORD *)((char *)v985 + 2);
        }
        if ( v984 < v986 && *(_BYTE *)v985 == *v984 )
          LODWORD(v984) = (_DWORD)v984 + 1;
        v990 = (_DWORD)v984 - v987;
        goto LABEL_1701;
      }
LABEL_1749:
      v1014 = v1230;
      if ( v1230 > 0 && v948 - v949 < 0xFFFF )
      {
        v1015 = *(unsigned int *)(v1365 + 262168);
        v1016 = *(_QWORD *)(v1365 + 262152);
        v1017 = v1015 + *(_QWORD *)(v1365 + 0x40000) - v1016;
        v1018 = *(_DWORD *)(v1365 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v956) >> 17));
        v1214 = v1018 + v949 - v1017;
        v1019 = v1243 - v1214;
        if ( v1243 - v1214 <= 0xFFFF )
        {
          v1334 = (char *)v1234 + v885;
          v1020 = (char *)v1234 + v885;
          while ( 1 )
          {
            v1021 = v1014--;
            v1231 = v1014;
            if ( !v1021 )
            {
LABEL_1825:
              v883 = v1345;
              v360 = v1278;
              goto LABEL_1826;
            }
            v1022 = v1018 + v1016 - v1015;
            if ( *(_DWORD *)v1022 == v1221 )
              break;
LABEL_1824:
            v1060 = *(unsigned __int16 *)(v1365 + 2LL * (unsigned __int16)v1018 + 0x20000);
            v1018 -= v1060;
            v1019 = v1243 - (v1214 - v1060);
            v1214 -= v1060;
            if ( v1019 > 0xFFFF )
              goto LABEL_1825;
          }
          v1023 = v956 + 4;
          v1024 = (_QWORD *)(v1022 + 4);
          v1025 = v1367 + v1017 - v1018;
          v1026 = (_DWORD)v956 + 4;
          if ( v1025 > v1246 )
            v1025 = v1246;
          if ( (unsigned __int64)v1023 < v1025 - 7 )
          {
            if ( *v1024 != *v1023 )
            {
              __asm { tzcnt   rcx, rax }
              v1029 = (unsigned int)_RCX >> 3;
LABEL_1808:
              v1048 = v1029 + 4;
              v1049 = 0;
              if ( v1311 )
              {
                v1050 = (_DWORD)v1234 - (_DWORD)v1284;
                v1051 = -v1022;
                v1052 = 0LL;
                if ( (char *)v1234 - v1284 <= v1016 - v1022 )
                  v1050 = v1016 - v1022;
                v1053 = (_DWORD *)(v1022 - 4);
                v1054 = &v1284[v1051];
                while ( v1049 - v1050 > 3 )
                {
                  if ( *v1053 != *(_DWORD *)((char *)v1053 + (_QWORD)v1054) )
                  {
                    _BitScanReverse(&v1055, *v1053 ^ *(_DWORD *)((char *)v1053 + (_QWORD)v1054));
                    v1049 -= (31 - v1055) >> 3;
                    goto LABEL_1821;
                  }
                  v1049 -= 4;
                  v1052 -= 4LL;
                  --v1053;
                }
                v1056 = v1050;
                if ( v1052 > v1050 )
                {
                  v1057 = (_BYTE *)(v1052 + v1018 - (unsigned __int64)*(unsigned int *)(v1365 + 262168) + v1016 - 1);
                  v1058 = &v1020[v1052 - 3];
                  do
                  {
                    if ( *v1058 != *v1057 )
                      break;
                    --v1049;
                    --v1052;
                    --v1058;
                    --v1057;
                  }
                  while ( v1052 > v1056 );
                  v1020 = v1334;
                }
              }
LABEL_1821:
              v956 = v1284;
              v1059 = v1048 - v1049;
              v1014 = v1231;
              if ( v1059 > v1205 )
              {
                v1205 = v1059;
                v1257 = (unsigned __int64)&v1284[v1049];
                v1254 = v1019;
              }
              v1015 = *(unsigned int *)(v1365 + 262168);
              goto LABEL_1824;
            }
            while ( 1 )
            {
              ++v1023;
              ++v1024;
              if ( (unsigned __int64)v1023 >= v1025 - 7 )
                break;
              if ( *v1024 != *v1023 )
              {
                __asm { tzcnt   rax, rax }
                v1029 = ((unsigned int)_RAX >> 3) - v1026 + (_DWORD)v1023;
                goto LABEL_1808;
              }
            }
          }
          if ( (unsigned __int64)v1023 < v1025 - 3 && *(_DWORD *)v1024 == *(_DWORD *)v1023 )
          {
            v1023 = (_QWORD *)((char *)v1023 + 4);
            v1024 = (_QWORD *)((char *)v1024 + 4);
          }
          if ( (unsigned __int64)v1023 < v1025 - 1 && *(_WORD *)v1024 == *(_WORD *)v1023 )
          {
            v1023 = (_QWORD *)((char *)v1023 + 2);
            v1024 = (_QWORD *)((char *)v1024 + 2);
          }
          if ( (unsigned __int64)v1023 < v1025 && *(_BYTE *)v1024 == *(_BYTE *)v1023 )
            LODWORD(v1023) = (_DWORD)v1023 + 1;
          v1029 = (_DWORD)v1023 - v1026;
          goto LABEL_1808;
        }
      }
LABEL_1826:
      v884 = v1306;
      v799 = HIDWORD(v1321);
      v806 = (unsigned __int64)v1234;
      v805 = v1315;
      v807 = __PAIR64__(v1205, v1254);
      v1261 = __PAIR64__(v1205, v1254);
      v808 = v1205;
LABEL_1526:
      v1327 = v807;
      if ( v808 <= v799 )
      {
        v361 = (char *)v1265;
        v835 = v360;
        v1182 = v360;
        v1183 = v360;
        v1184 = v360 + 1;
        v1185 = v806 - (_QWORD)v1265;
        if ( a7 && &v1184[v1185 / 0xFF + 8 + v1185] > v1275 )
          goto LABEL_2063;
        if ( v1185 < 0xF )
        {
          *v1182 = 16 * v1185;
        }
        else
        {
          v1186 = v1185 - 15;
          *v1182 = -16;
          if ( v1185 - 15 >= 0xFF )
          {
            v1187 = v1186 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v1187) = -1;
            memset_thunk_772440563353939046(v1184, SDWORD2(v1187), v1186 / 0xFF);
            v806 = (unsigned __int64)v1234;
            v1184 += v1186 / 0xFF;
            v361 = (char *)v1265;
            v1186 %= 0xFFuLL;
          }
          *v1184++ = v1186;
          v799 = HIDWORD(v1321);
        }
        v1188 = v1184;
        do
        {
          *v1188 = *(_QWORD *)((char *)v1188 + v361 - v1184);
          ++v1188;
        }
        while ( v1188 < (_QWORD *)&v1184[v1185] );
        v1189 = &v1184[v1185];
        v1190 = v799 - 4LL;
        *v1189 = v1321;
        v360 = v1189 + 1;
        v1278 = v360;
        if ( a7 )
        {
          if ( &v360[v1190 / 0xFF + 6] > v1275 )
            goto LABEL_2063;
        }
        v1191 = *v1183;
        if ( v1190 < 0xF )
        {
          *v1182 = v1190 + v1191;
        }
        else
        {
          v1192 = v799 - 19LL;
          *v1182 = v1191 + 15;
          if ( v1192 >= 0x1FE )
          {
            v1193 = v1192 / 0x1FE;
            v1192 %= 0x1FEuLL;
            do
            {
              *v360 = -1;
              v1194 = v360 + 1;
              *v1194 = -1;
              v360 = v1194 + 1;
              --v1193;
            }
            while ( v1193 );
          }
          if ( v1192 >= 0xFF )
          {
            LOBYTE(v1192) = v1192 + 1;
            *v360++ = -1;
          }
          *v360++ = v1192;
          v1278 = v360;
        }
        v363 = (unsigned int *)(v799 + v806);
        goto LABEL_2057;
      }
      v809 = v1257;
      if ( (unsigned __int64)v884 < v806 && v1257 < v806 + m )
      {
        LOWORD(v1321) = v883;
        v806 = (unsigned __int64)v884;
        v799 = HIDWORD(v883);
        v1397 = HIDWORD(v883);
        v1234 = v884;
      }
      if ( (__int64)(v1257 - v806) >= 3 )
        break;
      v806 = v1257;
      v1234 = (unsigned int *)v1257;
      v1321 = v807;
    }
LABEL_1384:
    if ( (__int64)(v809 - v806) < 18 )
    {
      v810 = v799;
      if ( v799 > 18 )
        v810 = 18;
      if ( v806 + v810 > v809 + v808 - 4LL )
        v810 = v809 + v808 - v806 - 4;
      v811 = v810 - v809 + v806;
      if ( v811 > 0 )
      {
        v809 += v811;
        v808 -= v811;
        v1257 = v809;
        HIDWORD(v1261) = v808;
        v807 = v1261;
        v1327 = v1261;
      }
    }
    v812 = v808;
    v1364 = v808;
    v813 = v809 + v808;
    if ( v813 > v805 )
    {
      v867 = 0;
      v868 = 0LL;
    }
    else
    {
      v814 = (unsigned int *)(v813 - 3);
      v1289 = v813 - 3;
      v1310 = v813 - 3;
      v1204 = v808;
      v815 = *(unsigned int *)(a1 + 262172);
      v816 = v815;
      v817 = *(_QWORD **)(a1 + 262152);
      v818 = *(_QWORD *)(a1 + 262160);
      v819 = *(_DWORD *)(a1 + 262176);
      v820 = v813 - 3 + *(_DWORD *)(a1 + 262168) - (_DWORD)v817;
      v1361 = *(_QWORD *)(a1 + 262184);
      v1297 = *(_DWORD *)(a1 + 262168);
      v1366 = v817;
      v1241 = v820;
      v1253 = *(_DWORD *)(a1 + 262172);
      if ( (int)v815 + 0x10000 <= v820 )
        v816 = v820 - 0xFFFF;
      v1283 = *(_QWORD *)(a1 + 262160);
      LODWORD(v821) = v813 - 3 - v1257;
      v1272 = HIDWORD(v1384);
      v1220 = *v814;
      v1332 = v1297 + v818 - v815;
      v822 = 0;
      v1229 = v816;
      v1212 = 0;
      v1358 = 0LL;
      v1305 = 0;
      if ( v819 >= v820 )
      {
        v824 = 1;
      }
      else
      {
        v823 = (_DWORD *)((char *)v817 + v819 - (unsigned __int64)v1297);
        v824 = 1;
        do
        {
          v825 = (unsigned __int64)(unsigned int)(-1640531535 * *v823) >> 17;
          v826 = v819 - *(_DWORD *)(a1 + 4 * v825);
          if ( v826 > 0xFFFF )
            LOWORD(v826) = -1;
          v823 = (_DWORD *)((char *)v823 + 1);
          *(_WORD *)(a1 + 2LL * (unsigned __int16)v819 + 0x20000) = v826;
          *(_DWORD *)(a1 + 4 * v825) = v819++;
        }
        while ( v819 < v820 );
        v822 = 0;
        LODWORD(v815) = v1253;
        v812 = v1364;
      }
      v821 = (int)v821;
      v1346 = (int)v821;
      *(_DWORD *)(a1 + 262176) = v820;
      v1061 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v814) >> 17));
      if ( v1061 < v816 )
        goto LABEL_1971;
      v1062 = v1257 + v812;
      v1063 = v1297;
      v1289 = v813 - 3;
      v1373 = v1062;
      while ( 1 )
      {
        v1064 = v822;
        if ( v1272 <= 0 )
          break;
        v1065 = v1220;
        v1272 -= v824;
        if ( v1061 >= v1063 )
        {
          v1066 = (_DWORD *)((char *)v1366 + v1061 - v1063);
          if ( *(_WORD *)(v1257 + v1204 - 1) != *(_WORD *)((char *)v1066 + v1204 - v821 - 1) || *v1066 != v1220 )
          {
            v1076 = v1246;
            v824 = 1;
            goto LABEL_1924;
          }
          v652 = v821 == 0;
          v1067 = 0;
          if ( !v652 )
          {
            v1068 = 0LL;
            v1069 = v1257 - (_DWORD)v814;
            v1070 = v814 - 1;
            v1071 = -(__int64)(v1061 - v1063);
            if ( (__int64)(v1257 - (_QWORD)v814) <= v1071 )
              v1069 = v1071;
            v1072 = (char *)v1066 - (char *)v814;
            while ( v1067 - v1069 > 3 )
            {
              if ( *v1070 != *(unsigned int *)((char *)v1070 + v1072) )
              {
                _BitScanReverse(&v1073, *v1070 ^ *(unsigned int *)((char *)v1070 + v1072));
                v1067 -= (31 - v1073) >> 3;
                goto LABEL_1847;
              }
              v1067 -= 4;
              v1068 -= 4LL;
              --v1070;
            }
            v1074 = v1069;
            if ( v1068 > v1069 )
            {
              v1075 = (_BYTE *)(v1062 + v1068 - 4);
              do
              {
                if ( *v1075 != *((_BYTE *)v1366 + v1061 - v1063 + v1068 - 1) )
                  break;
                --v1067;
                --v1068;
                --v1075;
              }
              while ( v1068 > v1074 );
              v818 = v1283;
            }
          }
LABEL_1847:
          v1076 = v1246;
          v1077 = v814 + 1;
          v1078 = v1066 + 1;
          v1079 = (_DWORD)v814 + 4;
          if ( (unsigned __int64)(v814 + 1) < v1246 - 7 )
          {
            if ( *v1078 != *v1077 )
            {
              __asm { tzcnt   rcx, rax }
              v1082 = (unsigned int)_RCX >> 3;
LABEL_1863:
              v822 = v1212;
              v1065 = v1220;
              v1085 = v1082 - v1067 + 4;
              v824 = 1;
              if ( v1085 > v1204 )
              {
                v1204 = v1085;
                v1305 = v1241 - v1061;
                v1289 = (unsigned __int64)v814 + v1067;
              }
              goto LABEL_1924;
            }
            while ( 1 )
            {
              ++v1077;
              ++v1078;
              if ( (unsigned __int64)v1077 >= v1246 - 7 )
                break;
              if ( *v1078 != *v1077 )
              {
                __asm { tzcnt   rax, rax }
                v1082 = ((unsigned int)_RAX >> 3) - v1079 + (_DWORD)v1077;
                goto LABEL_1863;
              }
            }
          }
          if ( (unsigned __int64)v1077 < v1246 - 3 && *(_DWORD *)v1078 == *(_DWORD *)v1077 )
          {
            v1077 = (_QWORD *)((char *)v1077 + 4);
            v1078 = (_QWORD *)((char *)v1078 + 4);
          }
          if ( (unsigned __int64)v1077 < v1246 - 1 && *(_WORD *)v1078 == *(_WORD *)v1077 )
          {
            v1077 = (_QWORD *)((char *)v1077 + 2);
            v1078 = (_QWORD *)((char *)v1078 + 2);
          }
          if ( (unsigned __int64)v1077 < v1246 && *(_BYTE *)v1078 == *(_BYTE *)v1077 )
            LODWORD(v1077) = (_DWORD)v1077 + 1;
          v1082 = (_DWORD)v1077 - v1079;
          goto LABEL_1863;
        }
        v1086 = v1061 - (unsigned int)v815;
        v1087 = (_DWORD *)(v1086 + v818);
        if ( v1061 > v1063 - 4 || *v1087 != v1220 )
        {
          v818 = v1283;
          v1076 = v1246;
          goto LABEL_1924;
        }
        v1088 = v814 + 1;
        v1089 = v1087 + 1;
        v1090 = (_QWORD *)((char *)v814 + v1063 - v1061);
        v1091 = (_DWORD)v814 + 4;
        if ( (unsigned __int64)v1090 > v1246 )
          v1090 = (_QWORD *)v1246;
        if ( v1088 >= (_QWORD *)((char *)v1090 - 7) )
          goto LABEL_1875;
        if ( *v1089 == *v1088 )
        {
          while ( 1 )
          {
            ++v1088;
            ++v1089;
            if ( v1088 >= (_QWORD *)((char *)v1090 - 7) )
              break;
            if ( *v1089 != *v1088 )
            {
              __asm { tzcnt   rax, rax }
              v1094 = ((unsigned int)_RAX >> 3) - v1091 + (_DWORD)v1088;
              goto LABEL_1885;
            }
          }
LABEL_1875:
          if ( v1088 < (_QWORD *)((char *)v1090 - 3) && *(_DWORD *)v1089 == *(_DWORD *)v1088 )
          {
            v1088 = (_QWORD *)((char *)v1088 + 4);
            v1089 = (_QWORD *)((char *)v1089 + 4);
          }
          if ( v1088 < (_QWORD *)((char *)v1090 - 1) && *(_WORD *)v1089 == *(_WORD *)v1088 )
          {
            v1088 = (_QWORD *)((char *)v1088 + 2);
            v1089 = (_QWORD *)((char *)v1089 + 2);
          }
          if ( v1088 < v1090 && *(_BYTE *)v1089 == *(_BYTE *)v1088 )
            LODWORD(v1088) = v824 + (_DWORD)v1088;
          v1094 = (_DWORD)v1088 - v1091;
          goto LABEL_1885;
        }
        __asm { tzcnt   rcx, rax }
        v1094 = (unsigned int)_RCX >> 3;
LABEL_1885:
        v1097 = v1094 + 4;
        v1098 = (_QWORD *)((char *)v814 + (int)(v1094 + 4));
        if ( v1098 == v1090 && (unsigned __int64)v1090 < v1246 )
        {
          v1099 = v1366;
          v1100 = (_QWORD *)((char *)v814 + v1097);
          if ( (unsigned __int64)v1098 >= v1246 - 7 )
            goto LABEL_1890;
          if ( *v1366 != *v1098 )
          {
            __asm { tzcnt   rcx, rax }
            v1104 = (unsigned int)_RCX >> 3;
          }
          else
          {
            v1100 = v1098 + 1;
            v1099 = v1366 + 1;
LABEL_1890:
            while ( (unsigned __int64)v1100 < v1246 - 7 )
            {
              if ( *v1099 != *v1100 )
              {
                __asm { tzcnt   rax, rax }
                v1104 = ((unsigned int)_RAX >> 3) - (_DWORD)v1098 + (_DWORD)v1100;
                goto LABEL_1905;
              }
              ++v1100;
              ++v1099;
            }
            if ( (unsigned __int64)v1100 < v1246 - 3 && *(_DWORD *)v1099 == *(_DWORD *)v1100 )
            {
              v1100 = (_QWORD *)((char *)v1100 + 4);
              v1099 = (_QWORD *)((char *)v1099 + 4);
            }
            if ( (unsigned __int64)v1100 < v1246 - 1 && *(_WORD *)v1099 == *(_WORD *)v1100 )
            {
              v1100 = (_QWORD *)((char *)v1100 + 2);
              v1099 = (_QWORD *)((char *)v1099 + 2);
            }
            if ( (unsigned __int64)v1100 < v1246 && *(_BYTE *)v1099 == *(_BYTE *)v1100 )
              LODWORD(v1100) = (_DWORD)v1100 + 1;
            v1104 = (_DWORD)v1100 - (_DWORD)v1098;
          }
LABEL_1905:
          v1097 += v1104;
        }
        v1106 = 0LL;
        v1107 = 0;
        if ( v1346 )
        {
          v1108 = v814 - 1;
          v1109 = v1257 - (_DWORD)v814;
          v1110 = -v1086;
          if ( (__int64)(v1257 - (_QWORD)v814) <= v1110 )
            v1109 = v1110;
          v1111 = (char *)v1087 - (char *)v814;
          while ( v1107 - v1109 > 3 )
          {
            if ( *v1108 != *(unsigned int *)((char *)v1108 + v1111) )
            {
              _BitScanReverse(&v1112, *v1108 ^ *(unsigned int *)((char *)v1108 + v1111));
              v1107 -= (31 - v1112) >> 3;
              goto LABEL_1919;
            }
            v1107 -= 4;
            v1106 -= 4LL;
            --v1108;
          }
          v1113 = v1109;
          if ( v1106 > v1109 )
          {
            v1114 = (_BYTE *)(v1106 + v1373 - 4);
            do
            {
              if ( *v1114 != *(_BYTE *)(v1283 + v1061 - v1253 + v1106 - 1) )
                break;
              --v1107;
              --v1106;
              --v1114;
            }
            while ( v1106 > v1113 );
            v1063 = v1297;
          }
        }
LABEL_1919:
        v818 = v1283;
        v1115 = v1097 - v1107;
        v1065 = v1220;
        v1076 = v1246;
        if ( v1115 > v1204 )
        {
          v1204 = v1115;
          v1305 = v1241 - v1061;
          v1289 = (unsigned __int64)v814 + v1107;
        }
        v822 = v1212;
        v824 = 1;
LABEL_1924:
        if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v1061 + 0x20000) != (_WORD)v824 )
          goto LABEL_1929;
        v1116 = v1061 - 1;
        if ( v822 )
        {
          v1212 = v1064;
          if ( v1064 != 2 )
            goto LABEL_1929;
        }
        else
        {
          if ( (_BYTE)v1065 != HIBYTE(v1065) || (unsigned __int16)v1065 != HIWORD(v1065) )
          {
            v1212 = v824;
LABEL_1929:
            v816 = v1229;
LABEL_1930:
            v1061 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v1061 + 0x20000);
LABEL_1931:
            v821 = v1346;
            goto LABEL_1932;
          }
          v1212 = 2;
          v1358 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1310 + 4), v1076, v1065) + 4LL;
        }
        v816 = v1229;
        if ( v1116 < v1229 || v1063 - v1116 - v824 < 3 )
          goto LABEL_1930;
        if ( v1116 >= v1063 )
        {
          v1117 = 0;
          v1118 = (unsigned __int64)v1366 + v1116 - v1063;
        }
        else
        {
          v1117 = v824;
          v1118 = v818 + v1116 - v1253;
        }
        if ( *(_DWORD *)v1118 != v1220 )
          goto LABEL_1929;
        v1119 = v1246;
        if ( v1117 )
          v1119 = v1332;
        v1120 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1118 + 4), v1119, v1220) + 4LL;
        if ( v1117 )
        {
          if ( v1120 + v1118 == v1121 )
          {
            v1122 = LZ4HC_rotatePattern(v1120, v1220);
            v1120 += (unsigned int)LZ4HC_countPattern(v1366, v1246, v1122);
          }
          v1123 = v1283;
          v1124 = v1283;
        }
        else
        {
          v1123 = v1283;
          v1124 = (unsigned __int64)v1366;
        }
        v1125 = LZ4HC_reverseCountPattern(v1118, v1124, v1220);
        v1127 = v1125;
        if ( !v1117 && (_QWORD *)(v1118 - v1125) == v1366 && v1253 < v1063 )
        {
          v1128 = LZ4HC_rotatePattern(-v1125, v1126);
          v1129 = LZ4HC_reverseCountPattern(v1332, v1123, v1128);
          v1127 = v1129 + v1130;
        }
        v816 = v1229;
        v1061 = v1229;
        if ( v1116 - v1127 > v1229 )
          v1061 = v1116 - v1127;
        v1131 = v1120 + v1116 - v1061;
        if ( v1131 >= v1358 && v1120 <= v1358 )
        {
          v824 = 1;
          v1061 = v1063;
          if ( v1063 - (v1116 - (_DWORD)v1358 + (_DWORD)v1120) - 1 >= 3 )
            v1061 = v1116 - v1358 + v1120;
          goto LABEL_1931;
        }
        v821 = v1346;
        v824 = 1;
        if ( v1063 - v1061 - 1 >= 3 )
        {
          if ( !v1346 )
          {
            v814 = (unsigned int *)v1310;
            v1132 = v1358;
            if ( v1131 < v1358 )
              v1132 = v1131;
            if ( v1204 < v1132 )
            {
              if ( v1063 + v1310 - v1061 - (unsigned __int64)v1366 > 0xFFFF )
                goto LABEL_1970;
              v1204 = v1132;
              v1305 = v1241 - v1061;
              v1289 = v1310;
            }
            v1133 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v1061 + 0x20000);
            if ( v1133 > v1061 )
              goto LABEL_1970;
            v1061 -= v1133;
          }
        }
        else
        {
          v1061 = v1063;
        }
LABEL_1932:
        v822 = v1212;
        v814 = (unsigned int *)v1310;
        v818 = v1283;
        LODWORD(v815) = v1253;
        v1062 = v1373;
        if ( v1061 < v816 )
          goto LABEL_1970;
      }
      v816 = v1229;
LABEL_1970:
      v807 = v1327;
      v360 = v1278;
      v812 = v1364;
LABEL_1971:
      if ( v1272 > 0 && v1241 - v816 < 0xFFFF )
      {
        v1134 = *(_QWORD *)(v1361 + 262152);
        v1135 = *(unsigned int *)(v1361 + 262168);
        v1335 = v1135 + *(_QWORD *)(v1361 + 0x40000) - v1134;
        v1136 = *(_DWORD *)(v1361 + 4 * ((unsigned __int64)(-1640531535 * *v814) >> 17));
        v1137 = v816 + v1136 - v1335;
        v1138 = v1241 - v1137;
        if ( v1241 - v1137 <= 0xFFFF )
        {
          v1139 = v1135 + *(_QWORD *)(v1361 + 0x40000) - v1134;
          v1140 = v812 + v1257;
          while ( 1 )
          {
            v1141 = v1272;
            v1272 -= v824;
            if ( !v1141 )
            {
LABEL_2012:
              v807 = v1327;
              v360 = v1278;
              goto LABEL_2013;
            }
            v1142 = v1136 - v1135;
            v1143 = v1134 + v1142;
            if ( *(_DWORD *)(v1134 + v1142) == v1220 )
              break;
LABEL_2011:
            v1165 = *(unsigned __int16 *)(v1361 + 2LL * (unsigned __int16)v1136 + 0x20000);
            v1137 -= v1165;
            v1136 -= v1165;
            v1138 = v1241 - v1137;
            if ( v1241 - v1137 > 0xFFFF )
              goto LABEL_2012;
          }
          v1144 = (_QWORD *)(v1143 + 4);
          v1145 = v1310 + v1139 - v1136;
          if ( v1145 > v1246 )
            v1145 = v1246;
          v1146 = (_QWORD *)(v1310 + 4);
          v1147 = v1310 + 4;
          if ( v1310 + 4 < v1145 - 7 )
          {
            if ( *v1144 != *v1146 )
            {
              __asm { tzcnt   rcx, rax }
              v1150 = (unsigned int)_RCX >> 3;
LABEL_1995:
              v1153 = v1150 + 4;
              v1154 = 0;
              if ( v1346 )
              {
                v1155 = -v1142;
                v1156 = 0LL;
                v1157 = v1257 - v1310;
                if ( (__int64)(v1257 - v1310) <= v1155 )
                  v1157 = v1155;
                v1158 = (_DWORD *)(v1310 - 4);
                v1159 = v1143 - v1310;
                while ( v1154 - v1157 > 3 )
                {
                  if ( *v1158 != *(_DWORD *)((char *)v1158 + v1159) )
                  {
                    _BitScanReverse(&v1160, *v1158 ^ *(_DWORD *)((char *)v1158 + v1159));
                    v1154 -= (31 - v1160) >> 3;
                    goto LABEL_2008;
                  }
                  v1154 -= 4;
                  v1156 -= 4LL;
                  --v1158;
                }
                v1161 = v1157;
                if ( v1156 > v1157 )
                {
                  v1162 = (_BYTE *)(v1156 + v1140 - 4);
                  v1163 = (_BYTE *)(v1156 + v1136
                                          + *(_QWORD *)(v1361 + 262152)
                                          - *(unsigned int *)(v1361 + 262168)
                                          - 1LL);
                  do
                  {
                    if ( *v1162 != *v1163 )
                      break;
                    --v1154;
                    --v1156;
                    --v1163;
                    --v1162;
                  }
                  while ( v1156 > v1161 );
                  v1139 = v1335;
                }
              }
LABEL_2008:
              v1135 = *(unsigned int *)(v1361 + 262168);
              v1164 = v1153 - v1154;
              v1134 = *(_QWORD *)(v1361 + 262152);
              if ( v1164 > v1204 )
              {
                v1289 = v1310 + v1154;
                v1204 = v1164;
                v1305 = v1138;
              }
              v824 = 1;
              goto LABEL_2011;
            }
            while ( 1 )
            {
              ++v1146;
              ++v1144;
              if ( (unsigned __int64)v1146 >= v1145 - 7 )
                break;
              if ( *v1144 != *v1146 )
              {
                __asm { tzcnt   rax, rax }
                v1150 = ((unsigned int)_RAX >> 3) - v1147 + (_DWORD)v1146;
                goto LABEL_1995;
              }
            }
          }
          if ( (unsigned __int64)v1146 < v1145 - 3 && *(_DWORD *)v1144 == *(_DWORD *)v1146 )
          {
            v1146 = (_QWORD *)((char *)v1146 + 4);
            v1144 = (_QWORD *)((char *)v1144 + 4);
          }
          if ( (unsigned __int64)v1146 < v1145 - 1 && *(_WORD *)v1144 == *(_WORD *)v1146 )
          {
            v1146 = (_QWORD *)((char *)v1146 + 2);
            v1144 = (_QWORD *)((char *)v1144 + 2);
          }
          if ( (unsigned __int64)v1146 < v1145 && *(_BYTE *)v1144 == *(_BYTE *)v1146 )
            LODWORD(v1146) = (_DWORD)v1146 + 1;
          v1150 = (_DWORD)v1146 - v1147;
          goto LABEL_1995;
        }
      }
LABEL_2013:
      v808 = HIDWORD(v1261);
      v806 = (unsigned __int64)v1234;
      v809 = v1257;
      v868 = __PAIR64__(v1204, v1305);
      v867 = v1204;
    }
    if ( v867 <= v808 )
    {
      if ( v809 < v806 + v1397 )
        v1397 = v809 - v806;
      v840 = (unsigned __int64)v1234;
      v361 = (char *)v1265;
      v835 = v360;
      v877 = v360;
      v878 = v360;
      v879 = (char *)v1234 - (char *)v1265;
      v880 = v360 + 1;
      if ( a7 && &v880[v879 / 0xFF + 8 + v879] > v1275 )
      {
        v799 = v1397;
        goto LABEL_1430;
      }
      if ( v879 < 0xF )
      {
        *v877 = 16 * v879;
      }
      else
      {
        v881 = v879 - 15;
        *v877 = -16;
        if ( v879 - 15 >= 0xFF )
        {
          v1180 = v881 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v1180) = -1;
          memset_thunk_772440563353939046(v880, SDWORD2(v1180), v881 / 0xFF);
          v361 = (char *)v1265;
          v880 += v881 / 0xFF;
          v878 = v877;
          v881 %= 0xFFuLL;
        }
        *v880++ = v881;
        v809 = v1257;
      }
      v827 = v880;
      do
      {
        *v827 = *(_QWORD *)((char *)v827 + v361 - v880);
        ++v827;
      }
      while ( v827 < (_QWORD *)&v880[v879] );
      v828 = &v880[v879];
      v799 = v1397;
      *v828 = v1321;
      v829 = v828 + 1;
      v830 = v1397 - 4LL;
      if ( a7 && &v829[v830 / 0xFF + 6] > v1275 )
      {
        v840 = (unsigned __int64)v1234;
        v367 = v1275;
        goto LABEL_1431;
      }
      v831 = *v878;
      if ( v830 < 0xF )
      {
        *v877 = v830 + v831;
      }
      else
      {
        v832 = v1397 - 19LL;
        *v877 = v831 + 15;
        if ( v832 >= 0x1FE )
        {
          v833 = v832 / 0x1FE;
          v832 %= 0x1FEuLL;
          do
          {
            *v829 = -1;
            v834 = v829 + 1;
            *v834 = -1;
            v829 = v834 + 1;
            --v833;
          }
          while ( v833 );
        }
        if ( v832 >= 0xFF )
        {
          LOBYTE(v832) = v832 + 1;
          *v829++ = -1;
        }
        *v829++ = v832;
      }
      v835 = v829;
      v361 = (char *)v1234 + v1397;
      v836 = v829;
      v1265 = (unsigned int *)v361;
      v837 = v829;
      v838 = v809 - (_QWORD)v361;
      v839 = v829 + 1;
      v840 = v809;
      v1234 = (unsigned int *)v809;
      if ( a7 && &v839[v838 / 0xFF + 8 + v838] > v1275 )
        goto LABEL_1429;
      if ( v838 >= 0xF )
      {
        v856 = v838 - 15;
        *v836 = -16;
        if ( v838 - 15 >= 0xFF )
        {
          v1181 = v856 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v1181) = -1;
          memset_thunk_772440563353939046(v839, SDWORD2(v1181), v856 / 0xFF);
          v361 = (char *)v1265;
          v839 += v856 / 0xFF;
          v837 = v836;
          v856 %= 0xFFuLL;
        }
        *v839++ = v856;
        v809 = v1257;
      }
      else
      {
        *v836 = 16 * v838;
      }
      v841 = v839;
      do
      {
        *v841 = *(_QWORD *)((char *)v841 + v361 - v839);
        ++v841;
      }
      while ( v841 < (_QWORD *)&v839[v838] );
      v842 = &v839[v838];
      *v842 = v1261;
      v360 = v842 + 1;
      v843 = SHIDWORD(v1261) - 4LL;
      v1278 = v360;
      if ( a7 && &v360[v843 / 0xFF + 6] > v1275 )
      {
        v840 = (unsigned __int64)v1234;
LABEL_1429:
        LOWORD(v1321) = v807;
        v799 = HIDWORD(v807);
        goto LABEL_1430;
      }
      v844 = *v837;
      if ( v843 < 0xF )
      {
        *v836 = v843 + v844;
      }
      else
      {
        v845 = SHIDWORD(v1261) - 19LL;
        *v836 = v844 + 15;
        if ( v845 >= 0x1FE )
        {
          v846 = v845 / 0x1FE;
          v845 %= 0x1FEuLL;
          do
          {
            *v360 = -1;
            v847 = v360 + 1;
            *v847 = -1;
            v360 = v847 + 1;
            --v846;
          }
          while ( v846 );
        }
        if ( v845 >= 0xFF )
        {
          LOBYTE(v845) = v845 + 1;
          *v360++ = -1;
        }
        *v360++ = v845;
        v1278 = v360;
      }
      v363 = (unsigned int *)(v809 + SHIDWORD(v1261));
LABEL_2057:
      v361 = (char *)v363;
      v1265 = v363;
LABEL_1533:
      v367 = v1275;
      v366 = v1315;
      v13 = a1;
      v1234 = v363;
      goto LABEL_530;
    }
    v799 = v1397;
    v869 = v806 + v1397;
    if ( v1289 >= v869 + 3 )
      break;
    if ( v1289 < v869 )
    {
      v1261 = v868;
      v809 = v1289;
      v808 = HIDWORD(v868);
      v807 = v868;
      v1257 = v1289;
      v805 = v1315;
      v1327 = v868;
      goto LABEL_1384;
    }
    if ( v809 < v869 )
    {
      v870 = v806 + v1397 - v809;
      v1257 = v870 + v809;
      if ( v808 - v870 >= 4 )
      {
        HIDWORD(v1261) = v808 - v870;
        v807 = v1261;
      }
      else
      {
        v1257 = v1289;
        v807 = v868;
      }
    }
    v1167 = v806 - (_QWORD)v1265;
    v835 = v360;
    v1168 = v360;
    v1169 = v360;
    v1170 = v360 + 1;
    if ( a7 && &v1170[v1167 / 0xFF + 8 + v1167] > v1275 )
    {
      v840 = (unsigned __int64)v1234;
      v361 = (char *)v1265;
      v367 = v1275;
      goto LABEL_1431;
    }
    if ( v1167 < 0xF )
    {
      *v1168 = 16 * v1167;
    }
    else
    {
      v1171 = v1167 - 15;
      *v1168 = -16;
      if ( v1167 - 15 >= 0xFF )
      {
        v1172 = v1171 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v1172) = -1;
        memset_thunk_772440563353939046(v1170, SDWORD2(v1172), v1171 / 0xFF);
        v1170 += v1171 / 0xFF;
        v1168 = v835;
        v799 = v1397;
        LOBYTE(v1171) = v1171 / 0xFF + v1171;
        v1169 = v835;
      }
      *v1170++ = v1171;
    }
    v1173 = v1170;
    do
    {
      *v1173 = *(_QWORD *)((char *)v1173 + (char *)v1265 - v1170);
      ++v1173;
    }
    while ( v1173 < (_QWORD *)&v1170[v1167] );
    v1174 = &v1170[v1167];
    v1175 = v799 - 4LL;
    *v1174 = v1321;
    v360 = v1174 + 1;
    v1278 = v360;
    if ( a7 )
    {
      v367 = v1275;
      if ( &v360[v1175 / 0xFF + 6] > v1275 )
      {
        v840 = (unsigned __int64)v1234;
        v361 = (char *)v1265;
        goto LABEL_1431;
      }
    }
    v1176 = *v1169;
    if ( v1175 < 0xF )
    {
      *v1168 = v1175 + v1176;
    }
    else
    {
      v1177 = v799 - 19LL;
      *v1168 = v1176 + 15;
      if ( v1177 >= 0x1FE )
      {
        v1178 = v1177 / 0x1FE;
        v1177 %= 0x1FEuLL;
        do
        {
          *v360 = -1;
          v1179 = v360 + 1;
          *v1179 = -1;
          v360 = v1179 + 1;
          --v1178;
        }
        while ( v1178 );
      }
      if ( v1177 >= 0xFF )
      {
        LOBYTE(v1177) = v1177 + 1;
        *v360++ = -1;
      }
      *v360++ = v1177;
      v1278 = v360;
    }
    v884 = (unsigned int *)v1257;
    v883 = v807;
    v1265 = (unsigned int *)((char *)v1234 + v799);
    v806 = v1289;
    v1234 = (unsigned int *)v1289;
    v1321 = v868;
    v1345 = v807;
  }
  if ( v809 < v869 )
  {
    if ( (__int64)(v809 - v806) >= 18 )
    {
      v799 = v809 - v806;
      v1397 = v809 - v806;
    }
    else
    {
      if ( v1397 > 18 )
        v799 = 18;
      v1397 = v799;
      if ( v806 + v799 > v809 + v808 - 4LL )
      {
        v799 = v809 + v808 - v806 - 4;
        v1397 = v799;
      }
      v871 = v806 + v799 - v809;
      if ( v871 > 0 )
      {
        v809 += v871;
        v1257 = v809;
        HIDWORD(v1261) = v808 - v871;
        v807 = v1261;
      }
    }
  }
  v872 = v806 - (_QWORD)v1265;
  v835 = v360;
  v873 = v360;
  v874 = v360;
  v875 = v360 + 1;
  if ( !a7 || &v875[v872 / 0xFF + 8 + v872] <= v1275 )
  {
    if ( v872 < 0xF )
    {
      *v873 = 16 * v872;
    }
    else
    {
      v876 = v872 - 15;
      *v873 = -16;
      if ( v872 - 15 >= 0xFF )
      {
        v1166 = v876 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v1166) = -1;
        memset_thunk_772440563353939046(v875, SDWORD2(v1166), v876 / 0xFF);
        v875 += v876 / 0xFF;
        v873 = v835;
        v876 %= 0xFFuLL;
        v874 = v835;
      }
      *v875++ = v876;
      v809 = v1257;
    }
    v797 = v875;
    do
    {
      *v797 = *(_QWORD *)((char *)v797 + (char *)v1265 - v875);
      ++v797;
    }
    while ( v797 < (_QWORD *)&v875[v872] );
    v798 = &v875[v872];
    v799 = v1397;
    *v798 = v1321;
    v360 = v798 + 1;
    v800 = v1397 - 4LL;
    v1278 = v360;
    if ( a7 )
    {
      v367 = v1275;
      if ( &v360[v800 / 0xFF + 6] > v1275 )
      {
        v840 = (unsigned __int64)v1234;
        v361 = (char *)v1265;
        goto LABEL_1431;
      }
    }
    v801 = *v874;
    if ( v800 < 0xF )
    {
      *v873 = v801 + v800;
    }
    else
    {
      v802 = v1397 - 19LL;
      *v873 = v801 + 15;
      if ( v802 >= 0x1FE )
      {
        v803 = v802 / 0x1FE;
        v802 %= 0x1FEuLL;
        do
        {
          *v360 = -1;
          v804 = v360 + 1;
          *v804 = -1;
          v360 = v804 + 1;
          --v803;
        }
        while ( v803 );
      }
      if ( v802 >= 0xFF )
      {
        LOBYTE(v802) = v802 + 1;
        *v360++ = -1;
      }
      *v360++ = v802;
      v1278 = v360;
    }
    v805 = v1315;
    v806 = v809;
    v1321 = v807;
    v807 = v868;
    v799 = HIDWORD(v1321);
    v1265 = (unsigned int *)((char *)v1234 + v1397);
    v1261 = v868;
    v808 = HIDWORD(v868);
    v1234 = (unsigned int *)v809;
    v809 = v1289;
    v1257 = v1289;
    v1327 = v868;
    v1397 = HIDWORD(v1321);
    goto LABEL_1384;
  }
  v361 = (char *)v1265;
LABEL_2063:
  v840 = (unsigned __int64)v1234;
LABEL_1430:
  v367 = v1275;
LABEL_1431:
  if ( a7 == 2 )
  {
    v848 = v840 - (_QWORD)v361;
    v360 = v835;
    v849 = (v840 - (unsigned __int64)v361 + 240) / 0xFF + v840 - (_QWORD)v361 + 1;
    if ( &v835[v849] <= v367 - 3 )
    {
      if ( v799 > (unsigned __int64)(255 * (&v367[-v849 - 3] - v835) + 18) )
        v799 = 255 * ((_DWORD)v367 - 3 - v849 - (_DWORD)v835) + 18;
      v1398 = v799;
      if ( (__int64)&v367[v799 - v849 - (_QWORD)v835 + 2] >= 12 )
      {
        v850 = v835 + 1;
        if ( v848 >= 0xF )
        {
          v857 = v848 - 15;
          *v835 = -16;
          if ( v848 - 15 >= 0xFF )
          {
            v1195 = v857 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v1195) = -1;
            memset_thunk_772440563353939046(v835 + 1, SDWORD2(v1195), v857 / 0xFF);
            v361 = (char *)v1265;
            v850 += v857 / 0xFF;
            v857 %= 0xFFuLL;
          }
          *v850++ = v857;
          v799 = v1398;
        }
        else
        {
          *v835 = 16 * v848;
        }
        v851 = v850;
        v852 = v361 - v850;
        do
        {
          *v851 = *(_QWORD *)((char *)v851 + v852);
          ++v851;
        }
        while ( v851 < (_QWORD *)&v850[v848] );
        v853 = &v850[v848];
        v854 = v799 - 4LL;
        *v853 = v1321;
        v360 = v853 + 1;
        v855 = *v835;
        if ( v854 < 0xF )
        {
          *v835 = v854 + v855;
        }
        else
        {
          v782 = v799 - 19LL;
          *v835 = v855 + 15;
          if ( v782 >= 0x1FE )
          {
            v781 = v782 / 0x1FE;
            v782 %= 0x1FEuLL;
            do
            {
              *v360 = -1;
              v780 = v360 + 1;
              *v780 = -1;
              v360 = v780 + 1;
              --v781;
            }
            while ( v781 );
          }
          if ( v782 >= 0xFF )
          {
            LOBYTE(v782) = v782 + 1;
            *v360++ = -1;
          }
          *v360++ = v782;
        }
        v361 = (char *)v1234 + v799;
        v1265 = (unsigned int *)v361;
      }
    }
LABEL_1329:
    LODWORD(v11) = v1387;
    v365 = v1338;
    goto LABEL_1330;
  }
LABEL_1334:
  v785 = 0;
LABEL_1339:
  if ( v785 <= 0 )
    *(_BYTE *)(a1 + 262183) = 1;
  return (unsigned int)v785;
}
