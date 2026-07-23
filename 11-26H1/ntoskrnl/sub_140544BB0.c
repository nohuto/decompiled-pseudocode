/*
 * XREFs of sub_140544BB0 @ 0x140544BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     KeVerifyGroupAffinity @ 0x14047D244 (KeVerifyGroupAffinity.c)
 *     KeCheckProcessorGroupAffinity @ 0x140485940 (KeCheckProcessorGroupAffinity.c)
 *     KeAreApcsDisabled @ 0x140486690 (KeAreApcsDisabled.c)
 *     KiGetNtDdiVersion @ 0x1404C165C (KiGetNtDdiVersion.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     sub_140553D6C @ 0x140553D6C (sub_140553D6C.c)
 *     sub_140553E5C @ 0x140553E5C (sub_140553E5C.c)
 *     sub_140554F64 @ 0x140554F64 (sub_140554F64.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     sub_140C7CE10 @ 0x140C7CE10 (sub_140C7CE10.c)
 *     sub_140C7E7A8 @ 0x140C7E7A8 (sub_140C7E7A8.c)
 *     sub_140C7F02C @ 0x140C7F02C (sub_140C7F02C.c)
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     sub_140C7F338 @ 0x140C7F338 (sub_140C7F338.c)
 *     sub_140C7F9D0 @ 0x140C7F9D0 (sub_140C7F9D0.c)
 *     KiGetGdtIdt @ 0x140C81320 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140C81330 (KiGetLdtr.c)
 *     KiGetSs @ 0x140C81340 (KiGetSs.c)
 *     KiGetTr @ 0x140C81350 (KiGetTr.c)
 *     KiErrata361Present @ 0x140C81360 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140C81380 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140C81390 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140C81440 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140C81700 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140C8189C (RtlInitMinimalBarrier.c)
 *     sub_140C8713C @ 0x140C8713C (sub_140C8713C.c)
 */

__int64 __fastcall sub_140544BB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rsi
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rax
  char *Pool2; // rax
  char *v15; // r14
  char *v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  unsigned __int64 v20; // rax
  unsigned __int128 v21; // rax
  __int64 v22; // r14
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int128 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned int *v29; // rax
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r10
  int v32; // ecx
  unsigned int v33; // ecx
  int n; // r12d
  int v35; // eax
  __int64 v36; // r8
  unsigned int v37; // r9d
  char *v38; // r13
  __int64 v39; // rdx
  __int64 v40; // r10
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int128 v43; // rax
  unsigned __int64 v44; // rbx
  int v45; // eax
  unsigned int v46; // r9d
  unsigned int v47; // ecx
  int v48; // r8d
  __int64 v49; // r10
  bool v50; // zf
  int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  __int64 v58; // rcx
  unsigned int v59; // edx
  int v60; // eax
  unsigned __int64 v61; // r10
  unsigned __int64 v62; // r8
  int v63; // r10d
  _QWORD *v64; // r14
  __int64 v65; // r8
  _QWORD *v66; // r9
  const char *v67; // rax
  int v68; // r11d
  __int64 v69; // r15
  unsigned __int64 v70; // rbx
  unsigned int v71; // r10d
  __int64 v72; // rax
  __int64 v73; // rbx
  unsigned __int128 v74; // rax
  unsigned int v75; // r8d
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  unsigned __int64 i23; // rax
  unsigned int v79; // ebx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // r8
  unsigned __int8 v83; // r13
  unsigned __int64 v84; // r14
  unsigned __int64 v85; // r15
  int v86; // eax
  __int64 v87; // rcx
  int v88; // ecx
  __int64 v89; // rcx
  __int64 v90; // r10
  __int64 v91; // r8
  _QWORD *v92; // rdx
  unsigned __int64 v93; // r9
  int v94; // ecx
  __int64 v95; // rax
  __int64 v96; // r8
  unsigned int v97; // edx
  char *v98; // r8
  char *v99; // r9
  __int64 v100; // rcx
  __int64 v101; // rax
  char v102; // cl
  char v103; // al
  __int64 v104; // rdx
  __int64 v105; // r8
  unsigned __int8 v106; // r14
  unsigned __int64 v107; // rbx
  __int64 v108; // r12
  unsigned __int64 v109; // r15
  int v110; // eax
  __int64 v111; // rcx
  int v112; // ecx
  __int64 v113; // rcx
  __int64 v114; // r10
  __int64 v115; // r8
  _QWORD *v116; // rdx
  unsigned __int64 v117; // r9
  int v118; // ecx
  __int64 v119; // rax
  unsigned int *v120; // r15
  unsigned __int64 v121; // r12
  unsigned __int64 v122; // r13
  __int64 v123; // r14
  _QWORD *v124; // r8
  const char *v125; // rax
  __int64 v126; // r9
  unsigned __int64 v127; // r11
  unsigned __int64 v128; // rbx
  unsigned int v129; // r10d
  __int64 v130; // rax
  __int64 v131; // rbx
  unsigned __int128 v132; // rax
  unsigned int v133; // edx
  unsigned __int64 v134; // rax
  __int64 v135; // rax
  unsigned __int64 i22; // rax
  unsigned int v137; // ebx
  __int64 v138; // rcx
  unsigned __int8 v139; // r12
  unsigned __int64 v140; // r14
  unsigned __int64 v141; // r13
  int v142; // eax
  __int64 v143; // rax
  int *v144; // rdx
  int v145; // ecx
  __int64 v146; // rcx
  __int64 v147; // r10
  __int64 v148; // r8
  _QWORD *v149; // rdx
  unsigned __int64 v150; // r9
  bool v151; // zf
  __int64 v152; // r15
  int v153; // ecx
  __int64 v154; // rax
  unsigned int v155; // ecx
  __int64 v156; // rbx
  int v157; // ecx
  __int64 v158; // rcx
  __int64 v159; // r10
  __int64 v160; // r8
  _QWORD *v161; // rdx
  unsigned __int64 v162; // r9
  int v163; // ecx
  __int64 v164; // rax
  int v165; // ecx
  __int64 v166; // rcx
  __int64 v167; // r10
  __int64 v168; // r8
  _QWORD *v169; // rdx
  unsigned __int64 v170; // r9
  int v171; // ecx
  __int64 v172; // rax
  _QWORD *v173; // r14
  __int64 v174; // r8
  _QWORD *v175; // r9
  const char *v176; // rax
  int v177; // r10d
  __int64 v178; // r15
  unsigned __int64 v179; // rbx
  unsigned int v180; // r11d
  __int64 v181; // rax
  __int64 v182; // rbx
  unsigned __int128 v183; // rax
  unsigned int v184; // r8d
  unsigned __int64 v185; // rax
  __int64 v186; // rax
  unsigned __int64 i21; // rax
  unsigned int v188; // ebx
  __int64 v189; // rdx
  __int64 v190; // r8
  unsigned __int8 v191; // r15
  unsigned __int64 v192; // r14
  unsigned __int64 v193; // r13
  int v194; // eax
  __int16 v195; // ax
  __int64 v196; // rcx
  int (__fastcall *v197)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD); // rax
  __int64 v198; // rcx
  int v199; // ecx
  __int64 v200; // rcx
  __int64 v201; // r10
  __int64 v202; // r8
  _QWORD *v203; // rdx
  unsigned __int64 v204; // r9
  __int64 v205; // rcx
  int v206; // ecx
  __int64 v207; // rcx
  __int64 v208; // r10
  __int64 v209; // r8
  _QWORD *v210; // rdx
  unsigned __int64 v211; // r9
  int v212; // ecx
  __int64 v213; // rax
  int v214; // ecx
  __int64 v215; // rax
  void (*v216)(void); // rax
  unsigned int i20; // ebx
  __int64 v218; // r9
  unsigned __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  unsigned __int64 v222; // rdx
  unsigned __int64 v223; // rcx
  int v224; // ecx
  __int64 v225; // rcx
  __int64 v226; // r10
  __int64 v227; // r8
  _QWORD *v228; // rdx
  unsigned __int64 v229; // r9
  int v230; // ecx
  __int64 v231; // rax
  int v232; // ecx
  __int64 v233; // rcx
  unsigned __int64 v234; // rax
  unsigned __int128 v235; // rax
  void (__fastcall *v236)(_QWORD, _QWORD); // rax
  unsigned int v237; // r13d
  __int64 v238; // rbx
  unsigned int v239; // ecx
  unsigned __int8 v240; // r14
  volatile signed __int8 **v241; // r8
  volatile signed __int8 *v242; // rdx
  __int64 v243; // rdi
  unsigned __int64 v244; // rbx
  __int64 v245; // r12
  _BYTE *v246; // rax
  _BYTE *v247; // rbx
  char v248; // cl
  int *v249; // rcx
  int v250; // ecx
  __int64 v251; // rcx
  __int64 v252; // r10
  __int64 v253; // r8
  _QWORD *v254; // rdx
  unsigned __int64 v255; // r9
  int v256; // ecx
  __int64 v257; // rax
  __int64 v258; // rcx
  __int64 v259; // rax
  int *v260; // rcx
  int v261; // ecx
  __int64 v262; // rcx
  __int64 v263; // r10
  __int64 v264; // r8
  _QWORD *v265; // rdx
  unsigned __int64 v266; // r9
  int *v267; // rcx
  int v268; // ecx
  __int64 v269; // rcx
  __int64 v270; // r10
  _QWORD *v271; // rdx
  unsigned __int64 v272; // r9
  int v273; // ecx
  __int64 v274; // rax
  unsigned int v275; // r13d
  int v276; // r13d
  void (__fastcall *v277)(_QWORD, _QWORD); // rax
  unsigned int v278; // r13d
  __int64 v279; // rbx
  unsigned int v280; // ecx
  unsigned __int8 v281; // r15
  _QWORD **v282; // r12
  _QWORD *v283; // r14
  int *v284; // rdi
  unsigned __int64 v285; // rbx
  int v286; // ecx
  __int64 v287; // rcx
  __int64 v288; // r10
  __int64 v289; // r8
  _QWORD *v290; // rdx
  unsigned __int64 v291; // r9
  int v292; // ecx
  __int64 v293; // rax
  __int64 v294; // rcx
  _QWORD **v295; // r13
  _QWORD *v296; // r14
  unsigned __int8 v297; // r12
  int v298; // edi
  int *v299; // r15
  unsigned __int8 v300; // r12
  char *v301; // rbx
  int v302; // ecx
  __int64 v303; // rcx
  __int64 v304; // r11
  __int64 v305; // r8
  _QWORD *v306; // r9
  unsigned __int64 v307; // r10
  int v308; // ecx
  __int64 v309; // rax
  unsigned int v310; // eax
  _QWORD *v311; // r14
  __int64 v312; // r8
  _QWORD *v313; // r9
  const char *v314; // rax
  int v315; // r10d
  __int64 v316; // r15
  unsigned __int64 v317; // rbx
  unsigned int v318; // r11d
  __int64 v319; // rax
  __int64 v320; // rbx
  unsigned __int128 v321; // rax
  unsigned int v322; // r8d
  unsigned __int64 v323; // rax
  __int64 v324; // rax
  unsigned __int64 i19; // rax
  unsigned int v326; // ebx
  __int64 v327; // rdx
  __int64 v328; // r8
  unsigned __int8 v329; // r15
  unsigned __int64 v330; // r14
  unsigned __int64 v331; // r13
  int v332; // eax
  __int64 v333; // rcx
  int v334; // ecx
  __int64 v335; // rcx
  __int64 v336; // r10
  __int64 v337; // r8
  _QWORD *v338; // rdx
  unsigned __int64 v339; // r9
  int v340; // ecx
  __int64 v341; // rax
  __int64 v342; // r15
  __int64 v343; // r14
  unsigned __int64 v344; // rax
  __int64 v345; // rcx
  unsigned __int64 v346; // rbx
  int v347; // ecx
  __int64 v348; // rcx
  __int64 v349; // r10
  __int64 v350; // r8
  _QWORD *v351; // rdx
  unsigned __int64 v352; // r9
  int v353; // ecx
  __int64 v354; // rax
  unsigned __int64 v355; // rcx
  int v356; // ecx
  __int64 v357; // rcx
  __int64 v358; // r10
  __int64 v359; // r8
  _QWORD *v360; // rdx
  unsigned __int64 v361; // r9
  __int64 v362; // rax
  int v363; // ecx
  _QWORD *v364; // r14
  __int64 v365; // r8
  _QWORD *v366; // r9
  const char *v367; // rax
  int v368; // r10d
  __int64 v369; // r15
  unsigned __int64 v370; // rbx
  unsigned int v371; // r11d
  __int64 v372; // rax
  __int64 v373; // rbx
  unsigned __int128 v374; // rax
  unsigned int v375; // r8d
  unsigned __int64 v376; // rax
  __int64 v377; // rax
  unsigned __int64 i1; // rax
  unsigned int v379; // ebx
  __int64 v380; // rdx
  __int64 v381; // r8
  unsigned __int8 v382; // r15
  unsigned __int64 v383; // r14
  unsigned __int64 v384; // r13
  int v385; // eax
  __int64 **v386; // r12
  unsigned int v387; // eax
  char *v388; // rdi
  __int64 v389; // r13
  char *v390; // rbx
  __int64 v391; // r15
  __int64 v392; // r14
  _QWORD *v393; // rcx
  int v394; // edx
  __int64 v395; // r8
  char v396; // al
  __int64 v397; // rax
  __int64 v398; // rax
  int v399; // ecx
  __int64 v400; // rcx
  __int64 v401; // r10
  __int64 v402; // r8
  _QWORD *v403; // rdx
  unsigned __int64 v404; // r9
  __int64 v405; // rcx
  int v406; // ecx
  __int64 v407; // rcx
  __int64 v408; // r10
  __int64 v409; // r8
  _QWORD *v410; // rdx
  unsigned __int64 v411; // r9
  int v412; // ecx
  __int64 v413; // rax
  int v414; // ecx
  __int64 v415; // rax
  __int64 v416; // r8
  __int16 v417; // ax
  __int64 v418; // rcx
  int (__fastcall *v419)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD); // rax
  unsigned __int64 v420; // r12
  __int64 v421; // rax
  unsigned int v422; // r14d
  __int64 v423; // rdx
  unsigned __int64 v424; // rbx
  __int64 v425; // rax
  unsigned int v426; // r9d
  unsigned __int64 v427; // r8
  unsigned __int64 v428; // r9
  _QWORD *v429; // r14
  __int64 v430; // r9
  _QWORD *v431; // r10
  const char *v432; // rax
  int v433; // r11d
  __int64 v434; // r15
  unsigned __int64 v435; // r8
  unsigned int v436; // ebx
  __int64 v437; // rax
  __int64 v438; // r8
  unsigned __int128 v439; // rax
  unsigned int v440; // r9d
  unsigned __int64 v441; // rax
  __int64 v442; // rax
  unsigned __int64 i5; // rax
  unsigned int v444; // r9d
  const char *v445; // rbx
  unsigned __int8 v446; // dl
  unsigned int v447; // r8d
  unsigned __int64 v448; // rcx
  const char *v449; // r10
  int v450; // r11d
  const char *v451; // rax
  __int64 v452; // r15
  const char *v453; // rcx
  unsigned int v454; // r14d
  unsigned __int64 v455; // r8
  __int64 v456; // rax
  __int64 v457; // r8
  signed __int64 v458; // rcx
  unsigned int v459; // r9d
  unsigned __int64 v460; // rax
  __int64 v461; // rax
  unsigned __int64 i6; // rax
  __int64 v463; // rax
  int v464; // ecx
  __int64 v465; // rcx
  __int64 v466; // r10
  _QWORD *v467; // rdx
  unsigned __int64 v468; // r9
  _QWORD *v469; // rcx
  int v470; // edx
  __int64 v471; // r9
  char v472; // al
  __int64 v473; // rax
  __int64 v474; // rcx
  int v475; // ecx
  __int64 v476; // rcx
  __int64 v477; // r10
  __int64 v478; // r8
  _QWORD *v479; // rdx
  unsigned __int64 v480; // r9
  int v481; // ecx
  __int64 v482; // rax
  _QWORD *v483; // r14
  _QWORD *v484; // r9
  int v485; // r10d
  const char *v486; // rax
  __int64 v487; // r15
  unsigned __int64 v488; // rbx
  unsigned int v489; // r11d
  __int64 v490; // rax
  __int64 v491; // rbx
  unsigned __int128 v492; // rax
  unsigned int v493; // r8d
  unsigned __int64 v494; // rax
  __int64 v495; // rax
  unsigned __int64 i7; // rax
  unsigned int v497; // ebx
  __int64 v498; // rdx
  __int64 v499; // r8
  unsigned __int8 v500; // r15
  unsigned __int64 v501; // r14
  unsigned __int64 v502; // r13
  int v503; // eax
  unsigned int v504; // r9d
  const char *v505; // r14
  const char *v506; // r10
  int v507; // r11d
  const char *v508; // rax
  __int64 v509; // r15
  const char *v510; // rcx
  unsigned __int64 v511; // r8
  unsigned int v512; // ebx
  __int64 v513; // rax
  __int64 v514; // r8
  unsigned __int128 v515; // rax
  unsigned int v516; // r9d
  unsigned __int64 v517; // rax
  __int64 v518; // rax
  unsigned __int64 i8; // rax
  __int64 v520; // rcx
  int v521; // ecx
  __int64 v522; // rcx
  __int64 v523; // r10
  __int64 v524; // r8
  _QWORD *v525; // rdx
  unsigned __int64 v526; // r9
  int v527; // ecx
  __int64 v528; // rax
  __int64 v529; // rax
  unsigned int v530; // r8d
  int v531; // ecx
  __int64 v532; // rcx
  __int64 v533; // r10
  __int64 v534; // r8
  _QWORD *v535; // rdx
  unsigned __int64 v536; // r9
  int v537; // ecx
  __int64 v538; // rax
  _QWORD *v539; // r14
  void (__fastcall *v540)(_QWORD, _QWORD); // rax
  __int64 v541; // rbx
  unsigned __int64 v542; // r12
  unsigned int v543; // ecx
  void (__fastcall *v544)(_QWORD, _QWORD); // rax
  _QWORD **v545; // r9
  unsigned int *v546; // r12
  _QWORD *v547; // r8
  __int64 v548; // rdx
  __int64 v549; // rax
  _QWORD **v550; // r13
  _QWORD *v551; // r14
  int v552; // r12d
  unsigned int v553; // edx
  unsigned __int8 v554; // al
  __int64 v555; // r15
  unsigned __int8 v556; // di
  char *v557; // rbx
  __int64 v558; // rcx
  int *v559; // rcx
  int v560; // ecx
  __int64 v561; // rcx
  __int64 v562; // r10
  __int64 v563; // r8
  _QWORD *v564; // rdx
  unsigned __int64 v565; // r9
  int v566; // ecx
  __int64 v567; // rax
  _QWORD **v568; // r10
  _QWORD *v569; // r9
  _QWORD *v570; // rax
  unsigned int *v571; // r15
  __int64 v572; // rbx
  void (__fastcall *v573)(_QWORD, _QWORD); // rax
  unsigned int v574; // ecx
  unsigned __int8 v575; // r14
  volatile signed __int8 **v576; // r8
  volatile signed __int8 *v577; // rdx
  _QWORD **v578; // r12
  _QWORD *v579; // r15
  __int64 v580; // rax
  int *v581; // rdi
  char *v582; // rcx
  __int64 v583; // rbx
  int v584; // ecx
  __int64 v585; // rcx
  __int64 v586; // r10
  __int64 v587; // r8
  _QWORD *v588; // rdx
  unsigned __int64 v589; // r9
  int v590; // ecx
  __int64 v591; // rax
  _QWORD **v592; // r12
  __int64 v593; // rcx
  __int64 v594; // rdx
  unsigned int **v595; // rax
  __int64 v596; // rcx
  __int64 v597; // r13
  _QWORD *v598; // rax
  __int64 v599; // r8
  unsigned __int64 v600; // rax
  __int64 v601; // rcx
  int v602; // ebx
  unsigned __int64 v603; // rax
  unsigned __int128 v604; // rax
  unsigned __int64 v605; // r14
  __int64 v606; // rax
  __int64 v607; // r11
  int v608; // r10d
  _QWORD *v609; // r8
  unsigned __int64 v610; // r9
  unsigned __int64 v611; // rax
  unsigned __int128 v612; // rax
  unsigned __int64 v613; // rax
  unsigned __int128 v614; // rax
  unsigned __int64 v615; // rdx
  unsigned int v616; // ebx
  _QWORD *v617; // r8
  unsigned __int64 v618; // r9
  unsigned __int64 v619; // rax
  unsigned __int128 v620; // rax
  unsigned __int64 v621; // rax
  unsigned __int128 v622; // rax
  unsigned __int64 v623; // rdx
  __int64 v624; // rbx
  _QWORD *v625; // rdx
  unsigned int v626; // r14d
  unsigned int v627; // eax
  __int64 v628; // rcx
  unsigned __int64 v629; // r15
  unsigned int v630; // r14d
  unsigned int *v631; // r12
  int *v632; // rdi
  unsigned __int64 v633; // r10
  int v634; // r8d
  int v635; // edx
  int v636; // ecx
  int v637; // ecx
  __int64 v638; // rcx
  __int64 v639; // r10
  __int64 v640; // r8
  _QWORD *v641; // rdx
  unsigned __int64 v642; // r9
  int v643; // ecx
  __int64 v644; // rax
  unsigned __int64 v645; // rax
  unsigned __int128 v646; // rax
  int v647; // ecx
  int v648; // ecx
  int v649; // ecx
  int v650; // ecx
  int v651; // ecx
  char *v652; // rbx
  unsigned int v653; // r14d
  int v654; // r13d
  _QWORD *v655; // rcx
  int v656; // edx
  __int64 v657; // r8
  char v658; // al
  __int64 v659; // rax
  __int64 v660; // rcx
  int v661; // ecx
  __int64 v662; // rcx
  __int64 v663; // r10
  __int64 v664; // r8
  _QWORD *v665; // rdx
  unsigned __int64 v666; // r9
  int v667; // ecx
  __int64 v668; // rax
  __int64 (__fastcall *v669)(_QWORD, _QWORD); // rax
  __int64 v670; // r15
  char *v671; // rdi
  char *v672; // rbx
  int v673; // r12d
  __int64 v674; // r14
  _QWORD *v675; // rcx
  int v676; // edx
  __int64 v677; // r8
  char v678; // al
  __int64 v679; // rax
  __int64 v680; // rax
  int v681; // ecx
  __int64 v682; // rcx
  __int64 v683; // r10
  __int64 v684; // r8
  _QWORD *v685; // rdx
  unsigned __int64 v686; // r9
  int v687; // ecx
  __int64 v688; // rax
  __int64 (__fastcall *v689)(_QWORD); // rax
  const signed __int32 *v690; // r13
  ULONG_PTR *v691; // rax
  ULONG_PTR v692; // rbx
  int *v693; // rcx
  __int64 v694; // rax
  __int64 v695; // rax
  __int64 v696; // rax
  int v697; // ecx
  __int64 v698; // rcx
  __int64 v699; // r10
  __int64 v700; // r8
  _QWORD *v701; // rdx
  unsigned __int64 v702; // r9
  int v703; // ecx
  __int64 v704; // rax
  __int64 (__fastcall *v705)(_QWORD, _QWORD); // rax
  __int64 v706; // rax
  ULONG_PTR v707; // r15
  unsigned int v708; // r11d
  unsigned int v709; // r14d
  unsigned __int64 v710; // r12
  int v711; // ecx
  int v712; // ecx
  unsigned int *v713; // rax
  __int64 v714; // r8
  __int64 v715; // rdx
  unsigned int v716; // ebx
  unsigned int v717; // ecx
  int v718; // r9d
  __int64 v719; // r10
  __int64 v720; // r9
  __int64 v721; // rax
  int v722; // eax
  int v723; // eax
  char **v724; // rbx
  __int64 v725; // rcx
  __int64 v726; // rdx
  char *v727; // rdx
  __int64 v728; // r9
  ULONG_PTR v729; // rax
  __int64 v730; // rdx
  int v731; // eax
  __int64 (__fastcall *v732)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v733; // rax
  __int64 v734; // rdx
  unsigned int v735; // ecx
  __int64 (__fastcall *v736)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v737; // rdx
  unsigned int v738; // eax
  __int64 v739; // rax
  unsigned int v740; // ecx
  __int64 (__fastcall *v741)(_QWORD); // rax
  __int64 v742; // rbx
  int v743; // ecx
  __int64 v744; // rcx
  __int64 v745; // r10
  __int64 v746; // r8
  _QWORD *v747; // rdx
  unsigned __int64 v748; // r9
  int v749; // ecx
  __int64 v750; // rax
  __int64 v751; // rcx
  __int64 v752; // rax
  __int64 v753; // r8
  __int64 v754; // r15
  unsigned int v755; // eax
  __int64 v756; // rbx
  int v757; // eax
  unsigned int v758; // ecx
  __int64 v759; // r9
  bool v760; // cf
  _QWORD *v761; // rax
  int v762; // r8d
  unsigned __int64 v763; // rdx
  int v764; // r14d
  __int64 v765; // r11
  unsigned int *v766; // rdi
  _DWORD *v767; // rsi
  __int64 v768; // r13
  __int64 v769; // rdx
  _QWORD *v770; // r15
  int v771; // ecx
  _QWORD *v772; // rax
  _QWORD *v773; // r9
  const char *v774; // rax
  int v775; // r14d
  __int64 v776; // r12
  unsigned __int64 v777; // r8
  unsigned int v778; // r10d
  __int64 v779; // rax
  __int64 v780; // r8
  unsigned __int128 v781; // rax
  unsigned int v782; // edx
  unsigned __int64 v783; // rax
  __int64 v784; // rax
  unsigned __int64 i11; // rax
  _DWORD *v786; // rbx
  ULONG_PTR v787; // r14
  _BYTE *v788; // rbx
  unsigned int v789; // r9d
  _QWORD *v790; // r15
  _DWORD *v791; // r13
  int v792; // ecx
  __int64 v793; // rdx
  _QWORD *v794; // rax
  _QWORD *v795; // r10
  const char *v796; // rax
  int v797; // r11d
  __int64 v798; // r12
  unsigned __int64 v799; // rcx
  ULONG_PTR v800; // r8
  unsigned int v801; // r14d
  __int64 v802; // rax
  __int64 v803; // r8
  unsigned __int128 v804; // rax
  unsigned __int64 v805; // r9
  unsigned __int64 v806; // rax
  __int64 v807; // rax
  ULONG_PTR i12; // rax
  __int64 v809; // r15
  unsigned int v810; // eax
  __int64 v811; // r14
  int v812; // ecx
  unsigned int v813; // eax
  __int64 v814; // r8
  int v815; // edx
  unsigned __int64 v816; // rcx
  int v817; // ebx
  __int64 v818; // r15
  int v819; // ecx
  _QWORD *v820; // rax
  __int64 v821; // rdx
  unsigned __int64 v822; // r13
  unsigned int v823; // r12d
  int v824; // r11d
  __int64 v825; // rbx
  const char *v826; // rax
  unsigned int v827; // r10d
  __int64 v828; // rax
  __int64 v829; // r8
  unsigned __int128 v830; // rax
  unsigned __int64 v831; // rax
  __int64 v832; // rax
  ULONG_PTR i13; // rax
  _DWORD *v834; // rbx
  ULONG_PTR v835; // r12
  __int64 v836; // r15
  __int64 v837; // rax
  int v838; // ecx
  _QWORD *v839; // rax
  _QWORD *v840; // rax
  ULONG_PTR v841; // r15
  __int64 v842; // rax
  unsigned __int16 v843; // r10
  int v844; // ecx
  __int64 v845; // rcx
  __int64 v846; // r11
  _QWORD *v847; // rdx
  unsigned __int64 v848; // r9
  __int64 v849; // rax
  int v850; // ecx
  unsigned int *v851; // r13
  __int64 v852; // r11
  unsigned int v853; // ecx
  _BYTE *v854; // rbx
  unsigned int *v855; // r14
  __int64 v856; // r8
  unsigned int v857; // edx
  unsigned int v858; // r9d
  unsigned int v859; // edx
  unsigned int v860; // eax
  __int64 v861; // rax
  unsigned int v862; // r14d
  unsigned int v863; // r12d
  unsigned int v864; // r14d
  unsigned int *v865; // rax
  unsigned int *v866; // r15
  ULONG_PTR v867; // r8
  unsigned int v868; // eax
  unsigned int v869; // ecx
  __int64 v870; // rcx
  __int64 v871; // r10
  __int64 v872; // r8
  _QWORD *v873; // rdx
  unsigned __int64 v874; // r9
  int v875; // ecx
  __int64 v876; // rax
  unsigned int *v877; // rax
  unsigned int v878; // eax
  unsigned int v879; // ecx
  __int64 v880; // rcx
  __int64 v881; // r10
  __int64 v882; // r8
  _QWORD *v883; // rdx
  unsigned __int64 v884; // r9
  int v885; // ecx
  __int64 v886; // rax
  int v887; // r9d
  unsigned int *v888; // r12
  int v889; // ecx
  __int64 v890; // rcx
  __int64 v891; // r10
  __int64 v892; // r8
  _QWORD *v893; // rdx
  unsigned __int64 v894; // r9
  int v895; // ecx
  __int64 v896; // rax
  int v897; // ecx
  __int64 v898; // rcx
  __int64 v899; // r10
  _QWORD *v900; // rdx
  unsigned __int64 v901; // r9
  unsigned int *v902; // r11
  int v903; // ecx
  __int64 v904; // rcx
  __int64 v905; // r10
  _QWORD *v906; // rdx
  unsigned __int64 v907; // r9
  int v908; // edx
  __int64 v909; // r15
  unsigned int v910; // ecx
  int v911; // ecx
  unsigned int v912; // eax
  __int64 v913; // r8
  int v914; // edx
  unsigned __int64 v915; // rcx
  int v916; // ebx
  __int64 v917; // rdx
  _QWORD *v918; // rax
  int v919; // ecx
  __int64 v920; // r8
  unsigned __int64 v921; // r15
  unsigned __int64 v922; // rcx
  unsigned __int64 i14; // rax
  ULONG_PTR v924; // rax
  unsigned int *v925; // rbx
  __int64 v926; // rax
  unsigned int *v927; // r8
  __int64 v928; // r13
  __int64 v929; // rdx
  _DWORD *v930; // rax
  __int64 v931; // rcx
  unsigned int *v932; // r12
  _DWORD *v933; // r11
  int v934; // r15d
  unsigned int v935; // ecx
  _WORD *v936; // rax
  char *v937; // rdx
  int v938; // r10d
  char *v939; // r9
  char *v940; // r8
  char *v941; // r11
  char *v942; // rbx
  char v943; // cl
  char v944; // al
  int v945; // ecx
  __int16 v946; // cx
  unsigned int v947; // edx
  char *v948; // r8
  __int64 v949; // rcx
  __int64 v950; // rax
  char v951; // cl
  char v952; // al
  int v953; // r8d
  char *v954; // rdx
  char v955; // cl
  char v956; // al
  int v957; // r8d
  char *v958; // rdx
  char v959; // cl
  char v960; // al
  ULONG_PTR v961; // r10
  __int64 v962; // rdx
  unsigned int v963; // r14d
  unsigned int *v964; // r9
  unsigned int v965; // r14d
  unsigned int v966; // eax
  unsigned int v967; // ecx
  unsigned int v968; // r12d
  unsigned int v969; // r9d
  _QWORD *v970; // rbx
  __int64 v971; // r10
  unsigned int v972; // edx
  char *v973; // r10
  unsigned __int64 v974; // r8
  _QWORD *v975; // r10
  int v976; // r14d
  const char *v977; // rax
  __int64 v978; // r15
  unsigned __int64 v979; // rcx
  unsigned __int64 v980; // r8
  unsigned int v981; // r11d
  __int64 v982; // rax
  __int64 v983; // r8
  unsigned __int128 v984; // rax
  unsigned int v985; // r9d
  unsigned __int64 v986; // rax
  __int64 v987; // rax
  unsigned __int64 i15; // rax
  unsigned int v989; // ecx
  unsigned __int64 v990; // rdx
  unsigned int *v991; // rax
  unsigned int v992; // r12d
  char v993; // r8
  unsigned int v994; // r15d
  __int64 v995; // r14
  int v996; // ecx
  ULONG_PTR v997; // rax
  __int64 v998; // rcx
  __int64 v999; // r10
  __int64 v1000; // r8
  _QWORD *v1001; // rdx
  unsigned __int64 v1002; // r9
  int v1003; // ecx
  __int64 v1004; // rax
  _QWORD *v1005; // rbx
  unsigned int v1006; // r9d
  unsigned int i16; // edx
  ULONG_PTR v1008; // r8
  _QWORD *v1009; // r10
  int v1010; // r14d
  const char *v1011; // rax
  __int64 v1012; // r15
  unsigned __int64 v1013; // rcx
  unsigned __int64 v1014; // r8
  unsigned int v1015; // r11d
  __int64 v1016; // rax
  __int64 v1017; // r8
  unsigned __int128 v1018; // rax
  unsigned int v1019; // r9d
  unsigned __int64 v1020; // rax
  __int64 v1021; // rax
  unsigned __int64 i17; // rax
  unsigned int *v1023; // rbx
  unsigned int v1024; // edx
  unsigned int v1025; // r9d
  ULONG_PTR v1026; // r11
  ULONG_PTR v1027; // r8
  _QWORD *v1028; // r10
  int v1029; // r14d
  const char *v1030; // rax
  __int64 v1031; // r15
  ULONG_PTR v1032; // rcx
  unsigned __int64 v1033; // r8
  unsigned int v1034; // ebx
  __int64 v1035; // rax
  __int64 v1036; // r8
  unsigned __int128 v1037; // rax
  unsigned int v1038; // r9d
  unsigned __int64 v1039; // rax
  __int64 v1040; // rax
  unsigned __int64 i18; // rax
  unsigned __int64 v1042; // r9
  _QWORD *v1043; // r8
  unsigned __int64 v1044; // rax
  _BYTE *v1045; // rax
  char *v1046; // rdx
  char *v1047; // rbx
  unsigned int v1048; // r12d
  __int64 v1049; // r14
  __int64 v1050; // r15
  _QWORD *v1051; // rcx
  int v1052; // edx
  __int64 v1053; // r8
  char v1054; // al
  __int64 v1055; // rax
  __int64 v1056; // rax
  int v1057; // ecx
  __int64 v1058; // rcx
  __int64 v1059; // r10
  __int64 v1060; // r8
  _QWORD *v1061; // rdx
  unsigned __int64 v1062; // r9
  int v1063; // ecx
  __int64 v1064; // rax
  char *v1065; // rbx
  unsigned __int8 v1066; // r15
  __int64 i10; // r14
  _QWORD *v1068; // rcx
  int v1069; // edx
  __int64 v1070; // r8
  char v1071; // al
  __int64 v1072; // rax
  __int64 v1073; // rax
  int v1074; // ecx
  __int64 v1075; // rcx
  __int64 v1076; // r10
  __int64 v1077; // r8
  _QWORD *v1078; // rdx
  unsigned __int64 v1079; // r9
  int v1080; // ecx
  __int64 v1081; // rax
  char *v1082; // rbx
  __int64 i9; // r14
  _QWORD *v1084; // rcx
  int v1085; // edx
  __int64 v1086; // r8
  char v1087; // al
  __int64 v1088; // rax
  __int64 v1089; // rax
  int v1090; // ecx
  __int64 v1091; // rcx
  __int64 v1092; // r10
  __int64 v1093; // r8
  _QWORD *v1094; // rdx
  unsigned __int64 v1095; // r9
  int v1096; // ecx
  __int64 v1097; // rax
  int v1098; // eax
  int v1099; // ebx
  unsigned __int64 v1100; // rbx
  __int64 v1101; // rdx
  unsigned __int64 v1102; // r8
  __int64 v1103; // rcx
  int v1104; // ecx
  __int64 v1105; // rcx
  __int64 v1106; // r10
  _QWORD *v1107; // rdx
  unsigned __int64 v1108; // r9
  __int64 v1109; // r8
  unsigned __int64 v1110; // rcx
  unsigned int *v1111; // r11
  unsigned int *v1112; // rbx
  unsigned __int64 v1113; // r10
  char *v1114; // r12
  unsigned int v1115; // r9d
  unsigned __int64 v1116; // rdx
  __int64 v1117; // rax
  unsigned __int64 v1118; // r15
  unsigned int v1119; // r14d
  _QWORD *v1120; // r9
  int v1121; // r10d
  const char *v1122; // rax
  unsigned __int64 v1123; // rbx
  unsigned __int64 v1124; // rcx
  unsigned __int64 v1125; // r8
  unsigned int v1126; // r11d
  __int64 v1127; // rax
  __int64 v1128; // r8
  unsigned __int128 v1129; // rax
  unsigned int v1130; // edx
  unsigned __int64 v1131; // rax
  __int64 v1132; // rax
  unsigned __int64 mm; // rax
  unsigned __int64 v1134; // r13
  __int64 v1135; // rcx
  unsigned __int8 v1136; // r14
  unsigned __int64 v1137; // rbx
  __int64 v1138; // r12
  unsigned __int64 v1139; // r15
  int v1140; // eax
  int v1141; // r11d
  int v1142; // ecx
  __int64 v1143; // rcx
  __int64 v1144; // r10
  __int64 v1145; // r8
  _QWORD *v1146; // rdx
  unsigned __int64 v1147; // r9
  int v1148; // ecx
  __int64 v1149; // rax
  unsigned __int64 v1150; // rcx
  unsigned int *v1151; // r15
  __int64 v1152; // r13
  __int64 v1153; // r12
  unsigned int v1154; // r14d
  unsigned __int64 v1155; // r12
  unsigned __int64 v1156; // rcx
  __int64 v1157; // r9
  _QWORD *v1158; // r8
  unsigned __int64 v1159; // r11
  const char *v1160; // rax
  unsigned __int64 v1161; // rbx
  unsigned int v1162; // r10d
  __int64 v1163; // rax
  __int64 v1164; // rbx
  unsigned __int128 v1165; // rax
  unsigned int v1166; // edx
  unsigned __int64 v1167; // rax
  __int64 v1168; // rax
  unsigned __int64 nn; // rax
  unsigned int v1170; // ebx
  __int64 v1171; // rcx
  unsigned __int8 v1172; // r15
  unsigned __int64 v1173; // r14
  __int64 v1174; // r13
  unsigned __int64 v1175; // r12
  int v1176; // eax
  unsigned __int64 v1177; // rcx
  __int64 v1178; // rax
  int *v1179; // rcx
  int v1180; // ecx
  __int64 v1181; // rcx
  __int64 v1182; // r10
  __int64 v1183; // r8
  _QWORD *v1184; // rdx
  unsigned __int64 v1185; // r9
  int v1186; // ecx
  __int64 v1187; // rax
  __int64 v1188; // r10
  _QWORD *v1189; // r11
  int v1190; // ebx
  _QWORD *v1191; // r9
  __int64 v1192; // r15
  const char *v1193; // rax
  __int64 v1194; // r8
  unsigned int v1195; // r14d
  __int64 v1196; // rax
  __int64 v1197; // r8
  unsigned __int128 v1198; // rax
  unsigned int v1199; // r10d
  unsigned __int64 v1200; // rax
  __int64 v1201; // rax
  __int64 v1202; // rcx
  __int64 v1203; // rcx
  int v1204; // ecx
  __int64 v1205; // rcx
  __int64 v1206; // r10
  _QWORD *v1207; // rdx
  unsigned __int64 v1208; // r9
  __int64 v1209; // rax
  __int64 v1210; // rdx
  __int64 v1211; // rbx
  __int64 v1212; // rdx
  __int64 v1213; // r8
  __int64 v1214; // rcx
  int v1215; // ecx
  __int64 v1216; // rcx
  __int64 v1217; // r10
  _QWORD *v1218; // rdx
  unsigned __int64 v1219; // r9
  int v1220; // ecx
  __int64 v1221; // rcx
  __int64 v1222; // r10
  _QWORD *v1223; // rdx
  unsigned __int64 v1224; // r9
  _QWORD *v1225; // r14
  __int64 v1226; // r8
  _QWORD *v1227; // r9
  const char *v1228; // rax
  int v1229; // r10d
  __int64 v1230; // r15
  unsigned __int64 v1231; // rbx
  unsigned int v1232; // r11d
  __int64 v1233; // rax
  __int64 v1234; // rbx
  unsigned __int128 v1235; // rax
  char v1236; // r10
  __int64 v1237; // r8
  unsigned __int64 v1238; // rax
  __int64 v1239; // rax
  unsigned __int64 j; // rax
  unsigned int v1241; // ebx
  unsigned __int8 v1242; // r15
  unsigned __int64 v1243; // r14
  unsigned __int64 v1244; // r13
  int v1245; // eax
  __int64 v1246; // rcx
  int v1247; // ecx
  __int64 v1248; // rcx
  __int64 v1249; // r10
  int v1250; // ecx
  __int64 v1251; // rax
  __int64 v1252; // rcx
  unsigned __int8 v1253; // r14
  unsigned int *v1254; // rcx
  unsigned int *v1255; // rbx
  char v1256; // r15
  unsigned __int64 v1257; // r12
  __int64 v1258; // rdx
  char *v1259; // r8
  unsigned int *v1260; // r9
  __int64 v1261; // rcx
  __int64 v1262; // rax
  char v1263; // cl
  char v1264; // al
  int v1265; // ecx
  int v1266; // eax
  __int64 v1267; // rcx
  __int64 v1268; // r10
  __int64 v1269; // r8
  _QWORD *v1270; // rdx
  unsigned __int64 v1271; // r9
  int v1272; // ecx
  __int64 v1273; // rax
  int v1274; // ecx
  __int64 v1275; // rcx
  __int64 v1276; // r10
  __int64 v1277; // r8
  _QWORD *v1278; // rdx
  unsigned __int64 v1279; // r9
  int v1280; // ecx
  __int64 v1281; // rax
  __int64 v1282; // rcx
  unsigned __int8 v1283; // r15
  unsigned __int64 v1284; // rdx
  unsigned int *v1285; // rcx
  unsigned int *v1286; // rbx
  unsigned __int64 v1287; // r14
  unsigned __int64 v1288; // rcx
  unsigned __int64 v1289; // rax
  int v1290; // ecx
  __int64 v1291; // rcx
  __int64 v1292; // r10
  _QWORD *v1293; // rdx
  unsigned __int64 v1294; // r9
  _QWORD *v1295; // r14
  __int64 v1296; // r8
  _QWORD *v1297; // r9
  const char *v1298; // rax
  int v1299; // r10d
  __int64 v1300; // r15
  unsigned __int64 v1301; // rbx
  unsigned int v1302; // r11d
  __int64 v1303; // rax
  __int64 v1304; // rbx
  unsigned __int128 v1305; // rax
  unsigned int v1306; // r8d
  unsigned __int64 v1307; // rax
  __int64 v1308; // rax
  unsigned __int64 i; // rax
  unsigned int v1310; // ebx
  __int64 v1311; // rdx
  __int64 v1312; // r8
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v1314; // r14
  unsigned __int64 v1315; // r13
  int v1316; // eax
  int v1317; // eax
  __int64 v1318; // rbx
  __int64 v1319; // rdx
  __int64 v1320; // rcx
  __int64 v1321; // rax
  __int64 v1322; // rcx
  int v1323; // ecx
  __int64 v1324; // rcx
  __int64 v1325; // r10
  __int64 v1326; // r8
  _QWORD *v1327; // rdx
  unsigned __int64 v1328; // r9
  __int64 v1329; // rcx
  int v1330; // ecx
  __int64 v1331; // rcx
  __int64 v1332; // r10
  __int64 v1333; // r8
  _QWORD *v1334; // rdx
  unsigned __int64 v1335; // r9
  int v1336; // ecx
  __int64 v1337; // rax
  int v1338; // ecx
  __int64 v1339; // rax
  __int64 v1340; // rdx
  __int64 v1341; // rcx
  __int64 v1342; // rax
  __int64 v1343; // rcx
  int v1344; // ecx
  __int64 v1345; // rcx
  __int64 v1346; // r10
  _QWORD *v1347; // rdx
  unsigned __int64 v1348; // r9
  __int64 v1349; // rbx
  __int64 v1350; // rcx
  __int64 v1351; // rbx
  int v1352; // r14d
  __int64 v1353; // rbx
  __int64 (__fastcall *v1354)(_QWORD, _QWORD); // rax
  int v1355; // r14d
  __int64 v1356; // rax
  __int64 v1357; // rdi
  unsigned __int64 v1358; // rbx
  int *v1359; // rdx
  int v1360; // ecx
  __int64 v1361; // rcx
  __int64 v1362; // r10
  __int64 v1363; // r8
  _QWORD *v1364; // rdx
  unsigned __int64 v1365; // r9
  int v1366; // ecx
  __int64 v1367; // rax
  char v1368; // r14
  int v1369; // ecx
  __int64 v1370; // rcx
  __int64 v1371; // r10
  __int64 v1372; // r8
  _QWORD *v1373; // rdx
  unsigned __int64 v1374; // r9
  int v1375; // ecx
  __int64 v1376; // rax
  __int64 v1377; // r15
  __int64 v1378; // r8
  int *v1379; // rdx
  unsigned __int64 v1380; // r9
  unsigned __int64 v1381; // rbx
  int v1382; // ecx
  __int64 v1383; // rcx
  __int64 v1384; // r10
  __int64 v1385; // r8
  _QWORD *v1386; // rdx
  unsigned __int64 v1387; // r9
  int v1388; // ecx
  __int64 v1389; // rax
  int v1390; // ecx
  __int64 v1391; // rcx
  __int64 v1392; // r10
  int v1393; // ecx
  __int64 v1394; // rax
  unsigned __int64 *v1395; // rax
  unsigned __int64 *v1396; // rbx
  unsigned __int64 v1397; // rcx
  unsigned __int64 *v1398; // r15
  unsigned __int8 v1399; // r15
  unsigned int *v1400; // r12
  __int64 v1401; // rdx
  unsigned __int64 v1402; // r14
  unsigned __int64 v1403; // rcx
  _QWORD *v1404; // rcx
  int v1405; // edx
  __int64 v1406; // r8
  char v1407; // al
  int v1408; // ecx
  __int64 v1409; // rcx
  __int64 v1410; // r10
  __int64 v1411; // r8
  _QWORD *v1412; // rdx
  unsigned __int64 v1413; // r9
  int v1414; // ecx
  __int64 v1415; // rax
  unsigned __int64 v1416; // rbx
  int v1417; // ecx
  __int64 v1418; // rcx
  __int64 v1419; // r10
  __int64 v1420; // r8
  _QWORD *v1421; // rdx
  unsigned __int64 v1422; // r9
  int v1423; // ecx
  __int64 v1424; // rax
  char v1425; // r14
  int v1426; // ecx
  __int64 v1427; // rcx
  __int64 v1428; // r10
  __int64 v1429; // r8
  unsigned __int64 v1430; // r9
  int v1431; // ecx
  __int64 v1432; // rax
  __int64 v1433; // r15
  unsigned __int64 v1434; // rbx
  int v1435; // ecx
  __int64 v1436; // rcx
  __int64 v1437; // r11
  __int64 v1438; // r8
  _QWORD *v1439; // r9
  unsigned __int64 v1440; // r10
  __int64 v1441; // rax
  int v1442; // ecx
  int v1443; // ecx
  __int64 v1444; // rcx
  __int64 v1445; // r10
  int v1446; // ecx
  __int64 v1447; // rax
  unsigned __int64 *v1448; // rax
  unsigned __int64 *v1449; // rbx
  unsigned __int64 v1450; // rcx
  unsigned __int8 v1451; // r15
  unsigned int *v1452; // r12
  __int64 v1453; // rdx
  unsigned __int64 v1454; // r14
  unsigned __int64 v1455; // rcx
  _QWORD *v1456; // rcx
  int v1457; // edx
  __int64 v1458; // r8
  char v1459; // al
  int v1460; // ecx
  __int64 v1461; // rcx
  __int64 v1462; // r10
  __int64 v1463; // r8
  _QWORD *v1464; // rdx
  unsigned __int64 v1465; // r9
  int v1466; // ecx
  __int64 v1467; // rax
  __int64 (__fastcall *v1468)(_QWORD); // rax
  __int64 v1469; // r13
  unsigned __int64 v1470; // rbx
  int *v1471; // rdx
  int v1472; // ecx
  __int64 v1473; // rcx
  __int64 v1474; // r10
  __int64 v1475; // r8
  _QWORD *v1476; // rdx
  unsigned __int64 v1477; // r9
  int v1478; // ecx
  __int64 v1479; // rax
  char v1480; // r14
  int v1481; // ecx
  __int64 v1482; // rcx
  __int64 v1483; // r10
  __int64 v1484; // r8
  _QWORD *v1485; // rdx
  unsigned __int64 v1486; // r9
  int v1487; // ecx
  __int64 v1488; // rax
  __int64 v1489; // r15
  __int64 v1490; // r8
  int *v1491; // rdx
  unsigned __int64 v1492; // r9
  unsigned __int64 v1493; // rbx
  int v1494; // ecx
  __int64 v1495; // rcx
  __int64 v1496; // r10
  __int64 v1497; // r8
  _QWORD *v1498; // rdx
  unsigned __int64 v1499; // r9
  int v1500; // ecx
  __int64 v1501; // rax
  int v1502; // ecx
  __int64 v1503; // rcx
  __int64 v1504; // r10
  int v1505; // ecx
  __int64 v1506; // rax
  unsigned __int64 *v1507; // rax
  unsigned __int64 *v1508; // rbx
  unsigned __int64 v1509; // rcx
  unsigned __int64 *v1510; // r15
  unsigned __int8 v1511; // di
  unsigned int *v1512; // r12
  char *v1513; // r15
  __int64 v1514; // rdx
  unsigned __int64 v1515; // r14
  unsigned __int64 v1516; // rcx
  _QWORD *v1517; // rcx
  int v1518; // edx
  __int64 v1519; // r8
  char v1520; // al
  int v1521; // ecx
  __int64 v1522; // rcx
  __int64 v1523; // r10
  __int64 v1524; // r8
  _QWORD *v1525; // rdx
  unsigned __int64 v1526; // r9
  int v1527; // ecx
  __int64 v1528; // rax
  int v1529; // r14d
  int v1530; // r10d
  int v1531; // r10d
  int v1532; // ecx
  __int64 v1533; // rcx
  __int64 v1534; // r10
  _QWORD *v1535; // rdx
  unsigned __int64 v1536; // r9
  __int64 v1537; // rax
  unsigned int v1538; // ebx
  unsigned __int64 v1539; // rax
  __int64 v1540; // rcx
  unsigned int v1541; // r14d
  unsigned __int64 v1542; // rax
  struct _KPRCB *v1543; // rdx
  __int64 v1544; // r8
  int v1545; // ecx
  struct _KPRCB *v1546; // rax
  unsigned __int64 v1547; // rcx
  unsigned __int64 v1548; // r8
  unsigned __int64 v1549; // rdx
  int v1550; // ecx
  __int64 v1551; // rcx
  __int64 v1552; // r10
  __int64 v1553; // r8
  _QWORD *v1554; // rdx
  unsigned __int64 v1555; // r9
  int v1556; // ecx
  __int64 v1557; // rax
  unsigned __int64 v1558; // r8
  unsigned __int64 v1559; // rdx
  int v1560; // ecx
  __int64 v1561; // rcx
  __int64 v1562; // r10
  __int64 v1563; // r8
  _QWORD *v1564; // rdx
  unsigned __int64 v1565; // r9
  int v1566; // ecx
  __int64 v1567; // rax
  _QWORD *v1568; // r12
  __int64 v1569; // r14
  __int64 v1570; // r8
  __int64 v1571; // rdx
  int v1572; // ecx
  _QWORD *v1573; // rax
  int v1574; // r15d
  __int64 v1575; // r8
  __int64 Ldtr; // r15
  unsigned __int16 Tr; // ax
  int v1578; // r10d
  _QWORD *v1579; // r8
  __int64 v1580; // r11
  const char *v1581; // rcx
  __int64 v1582; // r13
  unsigned __int64 v1583; // rbx
  unsigned int v1584; // r9d
  __int64 v1585; // rax
  __int64 v1586; // rbx
  unsigned __int128 v1587; // rax
  unsigned int v1588; // r14d
  unsigned __int64 v1589; // rax
  __int64 v1590; // rax
  unsigned __int64 i2; // rax
  unsigned int v1592; // ebx
  char *v1593; // r9
  _QWORD *v1594; // rcx
  int v1595; // edx
  __int64 v1596; // r8
  char v1597; // al
  __int64 v1598; // rcx
  int v1599; // ecx
  __int64 v1600; // rcx
  __int64 v1601; // r10
  __int64 v1602; // r8
  _QWORD *v1603; // rdx
  unsigned __int64 v1604; // r9
  int v1605; // ecx
  __int64 v1606; // rax
  __int64 v1607; // rdx
  void (__fastcall *v1608)(_QWORD, _QWORD); // rax
  unsigned int v1609; // edi
  __int64 v1610; // rcx
  __int64 v1611; // r9
  __int64 v1612; // r14
  unsigned int *v1613; // r8
  __int64 v1614; // r13
  __int64 v1615; // r12
  unsigned __int8 v1616; // r15
  __int16 v1617; // r10
  int v1618; // eax
  __int64 v1619; // rcx
  unsigned __int64 v1620; // rbx
  __int64 v1621; // rdx
  __int64 v1622; // r12
  __int64 v1623; // rax
  __int64 v1624; // rax
  unsigned __int64 v1625; // r13
  unsigned int v1626; // r15d
  __int64 v1627; // rax
  unsigned int *v1628; // rax
  int v1629; // r14d
  __int64 v1630; // rcx
  unsigned __int64 v1631; // rbx
  unsigned __int64 v1632; // rdx
  struct _KPRCB *v1633; // r8
  unsigned int *v1634; // rax
  __int64 v1635; // rax
  unsigned int *v1636; // r14
  unsigned int *v1637; // r8
  int v1638; // r9d
  const char *v1639; // rax
  __int64 v1640; // r11
  unsigned __int64 v1641; // rbx
  int v1642; // r10d
  __int64 v1643; // rax
  __int64 v1644; // rbx
  unsigned __int128 v1645; // rax
  int v1646; // r15d
  int v1647; // edx
  __int64 v1648; // rax
  __int64 v1649; // rax
  unsigned __int64 i3; // rax
  _QWORD *v1651; // rdx
  int v1652; // r9d
  unsigned __int64 v1653; // rcx
  unsigned __int64 v1654; // r14
  unsigned int v1655; // ebx
  const char *v1656; // rax
  int v1657; // r8d
  __int64 v1658; // rax
  __int64 v1659; // rax
  unsigned __int64 i4; // rax
  unsigned int v1661; // r14d
  int *v1662; // r8
  __int64 v1663; // rdx
  unsigned __int64 v1664; // rcx
  __int64 v1665; // rcx
  int v1666; // ecx
  __int64 v1667; // rcx
  __int64 v1668; // r10
  __int64 v1669; // r8
  _QWORD *v1670; // rdx
  unsigned __int64 v1671; // r9
  int v1672; // ecx
  __int64 v1673; // rax
  volatile signed __int32 *v1674; // rcx
  _QWORD *v1675; // r14
  __int64 v1676; // r8
  _QWORD *v1677; // r9
  const char *v1678; // rax
  int v1679; // r10d
  __int64 v1680; // r15
  unsigned __int64 v1681; // rbx
  unsigned int v1682; // r11d
  __int64 v1683; // rax
  __int64 v1684; // rbx
  unsigned __int128 v1685; // rax
  unsigned int v1686; // r8d
  unsigned __int64 v1687; // rax
  __int64 v1688; // rax
  unsigned __int64 k; // rax
  unsigned int v1690; // ebx
  __int64 v1691; // rdx
  __int64 v1692; // r8
  unsigned __int8 v1693; // r15
  unsigned __int64 v1694; // r14
  unsigned __int64 v1695; // r13
  int v1696; // eax
  __int64 v1697; // rcx
  int v1698; // ecx
  __int64 v1699; // rcx
  __int64 v1700; // r10
  __int64 v1701; // r8
  _QWORD *v1702; // rdx
  unsigned __int64 v1703; // r9
  int v1704; // ecx
  __int64 v1705; // rax
  __int64 v1706; // r14
  __int64 v1707; // rcx
  __int64 v1708; // rax
  unsigned int v1709; // ebx
  _QWORD *v1710; // rcx
  int v1711; // edx
  __int64 v1712; // r8
  char v1713; // al
  __int64 v1714; // rcx
  int v1715; // ecx
  __int64 v1716; // rcx
  __int64 v1717; // r10
  _QWORD *v1718; // rdx
  unsigned __int64 v1719; // r9
  int v1720; // r14d
  __int64 v1721; // r15
  unsigned int v1722; // ecx
  char v1723; // bl
  volatile signed __int8 **v1724; // r8
  volatile signed __int8 *v1725; // rdx
  unsigned __int8 v1726; // bl
  _QWORD *v1727; // r15
  __int64 v1728; // r14
  __int64 v1729; // r8
  _QWORD *v1730; // r9
  const char *v1731; // rax
  int v1732; // r10d
  __int64 v1733; // r12
  unsigned __int64 v1734; // rbx
  unsigned int m; // r11d
  __int64 v1736; // rax
  __int64 v1737; // rbx
  unsigned __int128 v1738; // rax
  __int64 v1739; // r8
  unsigned __int64 v1740; // rax
  __int64 v1741; // rax
  unsigned __int64 ii; // rax
  int *v1743; // r15
  unsigned int v1744; // ebx
  BOOL v1745; // r13d
  __int64 v1746; // rdx
  unsigned __int8 v1747; // r12
  unsigned __int64 v1748; // r15
  int v1749; // eax
  unsigned int *v1750; // rbx
  __int64 (__fastcall *v1751)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v1752; // rax
  _DWORD *v1753; // r15
  unsigned int v1754; // r13d
  int v1755; // esi
  unsigned int v1756; // ecx
  unsigned int v1757; // r12d
  int v1758; // eax
  char *v1759; // rdx
  char *v1760; // r9
  char *v1761; // r11
  char *v1762; // rbx
  __int64 v1763; // rcx
  int v1764; // ecx
  __int64 v1765; // rcx
  __int64 v1766; // r10
  _QWORD *v1767; // rdx
  int v1768; // ecx
  __int64 v1769; // rax
  __int16 v1770; // ax
  unsigned int v1771; // ecx
  int v1772; // r10d
  char *v1773; // r8
  char v1774; // cl
  char v1775; // al
  unsigned int v1776; // edx
  char *v1777; // r8
  __int64 v1778; // rcx
  __int64 v1779; // rax
  char v1780; // cl
  char v1781; // al
  int v1782; // r8d
  char *v1783; // rdx
  char v1784; // cl
  char v1785; // al
  int v1786; // r8d
  char *v1787; // rdx
  char v1788; // cl
  char v1789; // al
  int v1790; // eax
  BOOL v1791; // r12d
  unsigned __int64 v1792; // rbx
  int v1793; // eax
  int *v1794; // rcx
  int v1795; // ecx
  __int64 v1796; // rcx
  __int64 v1797; // r10
  __int64 v1798; // r8
  _QWORD *v1799; // rdx
  unsigned __int64 v1800; // r9
  __int64 v1801; // rax
  int v1802; // ecx
  int v1803; // eax
  unsigned __int8 v1804; // bl
  _QWORD *v1805; // r14
  __int64 v1806; // r8
  _QWORD *v1807; // r9
  const char *v1808; // rax
  int v1809; // r11d
  __int64 v1810; // r15
  unsigned __int64 v1811; // rbx
  unsigned int v1812; // r10d
  __int64 v1813; // rax
  __int64 v1814; // rbx
  unsigned __int128 v1815; // rax
  unsigned int v1816; // r8d
  unsigned __int64 v1817; // rax
  __int64 v1818; // rax
  unsigned __int64 jj; // rax
  unsigned int v1820; // ebx
  __int64 v1821; // rdx
  __int64 v1822; // r8
  unsigned __int8 v1823; // r15
  unsigned __int64 v1824; // r14
  unsigned __int64 v1825; // r13
  int v1826; // eax
  __int64 v1827; // r8
  unsigned __int64 v1828; // rcx
  unsigned int *v1829; // r14
  unsigned int *v1830; // rax
  int *v1831; // r12
  unsigned __int64 v1832; // r15
  unsigned int v1833; // ebx
  __int64 v1834; // r8
  int v1835; // r10d
  const char *v1836; // rax
  __int64 v1837; // r11
  unsigned __int64 v1838; // rcx
  unsigned __int64 v1839; // r13
  unsigned int v1840; // r9d
  __int64 v1841; // rax
  __int64 v1842; // r13
  unsigned __int128 v1843; // rax
  unsigned __int64 v1844; // r9
  unsigned int v1845; // edx
  unsigned __int64 v1846; // rax
  __int64 v1847; // rax
  unsigned __int64 kk; // rax
  __int64 v1849; // rcx
  int v1850; // ecx
  __int64 v1851; // rcx
  __int64 v1852; // r10
  __int64 v1853; // r8
  _QWORD *v1854; // rdx
  unsigned __int64 v1855; // r9
  int v1856; // ecx
  __int64 v1857; // rax
  unsigned int v1858; // r13d
  char v1859; // cl
  volatile signed __int32 *v1860; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v1862; // r8
  int v1863; // ecx
  struct _KPRCB *v1864; // rax
  unsigned __int64 v1865; // rcx
  int *v1866; // rcx
  int v1867; // ecx
  __int64 v1868; // rcx
  __int64 v1869; // r10
  _QWORD *v1870; // rdx
  int v1871; // ecx
  __int64 v1872; // rax
  __int64 v1873; // rcx
  unsigned __int8 v1874; // r14
  unsigned __int64 v1875; // rbx
  __int64 v1876; // r12
  unsigned __int64 v1877; // r15
  int v1878; // eax
  __int64 v1879; // rax
  int v1880; // ecx
  __int64 v1881; // rcx
  __int64 v1882; // r10
  __int64 v1883; // r8
  _QWORD *v1884; // rdx
  unsigned __int64 v1885; // r9
  __int64 v1886; // rdx
  int v1887; // ecx
  __int64 v1888; // rax
  __int64 v1889; // rcx
  unsigned __int8 v1890; // bl
  unsigned int *v1891; // rcx
  unsigned int *v1892; // r15
  char v1893; // r14
  unsigned __int64 v1894; // r12
  __int64 v1895; // rdx
  char *v1896; // r8
  unsigned int *v1897; // r9
  __int64 v1898; // rcx
  __int64 v1899; // rax
  char v1900; // cl
  char v1901; // al
  char *v1902; // rcx
  __int64 v1903; // rax
  int v1904; // ecx
  __int64 v1905; // rcx
  __int64 v1906; // r10
  __int64 v1907; // r8
  _QWORD *v1908; // rdx
  unsigned __int64 v1909; // r9
  int v1910; // ecx
  __int64 v1911; // rax
  char *v1912; // rcx
  __int64 v1913; // rax
  int v1914; // ecx
  __int64 v1915; // rcx
  __int64 v1916; // r10
  __int64 v1917; // r8
  _QWORD *v1918; // rdx
  unsigned __int64 v1919; // r9
  int v1920; // ecx
  __int64 v1921; // rax
  __int64 v1922; // rbx
  __int64 v1923; // rbx
  __int64 v1924; // rsi
  __int64 v1925; // r14
  unsigned __int64 v1926; // r15
  struct _KPRCB *v1927; // r8
  unsigned __int64 v1928; // r13
  __int64 v1929; // rax
  unsigned __int64 v1930; // rdx
  unsigned int *v1931; // r9
  unsigned __int64 v1932; // rcx
  unsigned __int64 v1933; // r11
  unsigned __int64 v1934; // rsi
  _QWORD *v1935; // r9
  unsigned __int64 v1936; // rcx
  unsigned __int64 v1937; // rax
  _QWORD *v1938; // rdi
  __int64 v1939; // r14
  unsigned __int64 v1940; // r8
  _QWORD *v1941; // rcx
  signed __int64 v1942; // r8
  unsigned int v1943; // r12d
  __int64 v1944; // rbx
  unsigned __int64 *v1945; // rcx
  __int64 v1946; // rdx
  __int64 v1947; // r10
  unsigned __int64 v1948; // rax
  __int64 v1949; // rax
  unsigned __int64 v1950; // rdx
  unsigned __int64 v1951; // rcx
  unsigned int v1952; // r10d
  _QWORD *v1953; // rbx
  unsigned int v1954; // r15d
  unsigned __int64 v1955; // r12
  char *v1956; // rbx
  unsigned __int64 v1957; // rcx
  unsigned __int64 v1958; // rax
  char *v1959; // r8
  unsigned __int64 v1960; // r9
  __int64 v1961; // r11
  __int64 v1962; // rdx
  __int64 v1963; // r10
  unsigned __int64 v1964; // rax
  unsigned __int64 *v1965; // rcx
  __int64 *v1966; // r11
  __int64 v1967; // rax
  unsigned __int64 v1968; // rdx
  unsigned __int64 v1969; // rcx
  unsigned __int64 v1970; // r10
  signed __int64 v1971; // r9
  unsigned int v1972; // ebx
  unsigned int v1973; // ebx
  unsigned __int8 v1974; // al
  unsigned int v1975; // ebx
  unsigned __int8 v1976; // al
  unsigned int v1977; // ebx
  unsigned __int8 v1978; // al
  unsigned __int64 v1979; // rcx
  unsigned __int64 v1980; // rax
  int v1981; // ecx
  int v1982; // ecx
  int v1983; // ecx
  int v1984; // ecx
  int v1985; // ecx
  volatile signed __int32 *v1986; // rax
  unsigned int v1987; // ebx
  unsigned __int8 EffectiveIrql; // al
  signed __int32 v1989[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v1990; // [rsp+28h] [rbp-D8h]
  __int64 *v1991; // [rsp+38h] [rbp-C8h]
  char *v1992; // [rsp+50h] [rbp-B0h]
  __int64 v1993; // [rsp+58h] [rbp-A8h]
  int v1994; // [rsp+60h] [rbp-A0h]
  __int64 v1995; // [rsp+68h] [rbp-98h]
  unsigned int *v1996; // [rsp+70h] [rbp-90h]
  unsigned __int64 v1997; // [rsp+78h] [rbp-88h]
  unsigned int v1998; // [rsp+80h] [rbp-80h]
  int v1999; // [rsp+84h] [rbp-7Ch]
  unsigned int *v2000; // [rsp+88h] [rbp-78h]
  char *v2001; // [rsp+90h] [rbp-70h]
  unsigned int *v2002; // [rsp+98h] [rbp-68h]
  unsigned __int8 v2003; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 v2004; // [rsp+A1h] [rbp-5Fh] BYREF
  char v2005[2]; // [rsp+A2h] [rbp-5Eh] BYREF
  unsigned int v2006; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v2007; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v2008; // [rsp+B0h] [rbp-50h]
  char v2009; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v2010; // [rsp+C0h] [rbp-40h]
  unsigned int *v2011; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v2012; // [rsp+D0h] [rbp-30h]
  __int64 v2013; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v2014; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v2015; // [rsp+E8h] [rbp-18h]
  int v2016; // [rsp+F0h] [rbp-10h]
  unsigned int v2017; // [rsp+F4h] [rbp-Ch]
  _BYTE *v2018; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v2019; // [rsp+100h] [rbp+0h]
  unsigned __int64 v2020; // [rsp+108h] [rbp+8h]
  unsigned int v2021; // [rsp+110h] [rbp+10h]
  unsigned int v2022; // [rsp+114h] [rbp+14h]
  PVOID Entry; // [rsp+118h] [rbp+18h]
  __int64 v2024; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v2025; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v2026; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v2027; // [rsp+130h] [rbp+30h] BYREF
  __int64 v2028; // [rsp+138h] [rbp+38h]
  unsigned int v2029; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v2030; // [rsp+148h] [rbp+48h] BYREF
  char *v2031; // [rsp+150h] [rbp+50h]
  __int64 v2032; // [rsp+158h] [rbp+58h]
  unsigned __int64 v2033; // [rsp+160h] [rbp+60h]
  __int64 v2034; // [rsp+168h] [rbp+68h]
  unsigned int v2035; // [rsp+170h] [rbp+70h] BYREF
  __int64 v2036; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v2037; // [rsp+180h] [rbp+80h]
  __int64 v2038; // [rsp+188h] [rbp+88h]
  char v2039; // [rsp+190h] [rbp+90h] BYREF
  __int64 v2040; // [rsp+198h] [rbp+98h]
  int v2041; // [rsp+1A0h] [rbp+A0h]
  int v2042; // [rsp+1A4h] [rbp+A4h]
  int v2043; // [rsp+1A8h] [rbp+A8h]
  _DWORD v2044[3]; // [rsp+1ACh] [rbp+ACh] BYREF
  __int64 v2045; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v2046; // [rsp+1C0h] [rbp+C0h]
  __int64 v2047; // [rsp+1C8h] [rbp+C8h] BYREF
  int v2048; // [rsp+1D0h] [rbp+D0h]
  int v2049; // [rsp+1D4h] [rbp+D4h]
  int v2050; // [rsp+1D8h] [rbp+D8h]
  int v2051; // [rsp+1DCh] [rbp+DCh]
  unsigned __int64 v2052; // [rsp+1E0h] [rbp+E0h]
  int v2053; // [rsp+1E8h] [rbp+E8h]
  _DWORD v2054[6]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v2055; // [rsp+208h] [rbp+108h] BYREF
  _QWORD *v2056; // [rsp+20Ah] [rbp+10Ah]
  __int64 v2057; // [rsp+218h] [rbp+118h]
  __int64 v2058; // [rsp+220h] [rbp+120h] BYREF
  __int64 v2059; // [rsp+228h] [rbp+128h] BYREF
  __int64 v2060; // [rsp+230h] [rbp+130h] BYREF
  __int64 v2061; // [rsp+238h] [rbp+138h]
  __int64 v2062; // [rsp+240h] [rbp+140h]
  __int64 v2063; // [rsp+248h] [rbp+148h] BYREF
  __int64 v2064; // [rsp+250h] [rbp+150h] BYREF
  __int64 v2065; // [rsp+258h] [rbp+158h] BYREF
  __int16 v2066; // [rsp+260h] [rbp+160h]
  __int16 v2067; // [rsp+262h] [rbp+162h]
  unsigned __int64 v2068; // [rsp+278h] [rbp+178h]
  int v2069; // [rsp+280h] [rbp+180h]
  unsigned int v2070; // [rsp+284h] [rbp+184h]
  unsigned __int64 v2071; // [rsp+288h] [rbp+188h]
  __int16 v2072; // [rsp+290h] [rbp+190h] BYREF
  struct _KPRCB *v2073; // [rsp+292h] [rbp+192h]
  __int16 v2074; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _KPRCB *v2075; // [rsp+2A2h] [rbp+1A2h]
  __int16 v2076; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v2077; // [rsp+2B2h] [rbp+1B2h]
  __int16 v2078; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int *v2079; // [rsp+2C2h] [rbp+1C2h]
  int v2080; // [rsp+2E0h] [rbp+1E0h] BYREF
  _DWORD *v2081; // [rsp+2E8h] [rbp+1E8h]
  __int64 v2082; // [rsp+2F0h] [rbp+1F0h]
  __int64 v2083; // [rsp+2F8h] [rbp+1F8h] BYREF
  _WORD v2084[4]; // [rsp+300h] [rbp+200h] BYREF
  _BYTE *v2085; // [rsp+308h] [rbp+208h]
  _WORD v2086[4]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE *v2087; // [rsp+318h] [rbp+218h]
  _QWORD v2088[6]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v2089[16]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v2090[16]; // [rsp+360h] [rbp+260h] BYREF
  _BYTE v2091[16]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v2092[16]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v2093; // [rsp+390h] [rbp+290h]
  __int64 v2094; // [rsp+398h] [rbp+298h]
  __int64 v2095; // [rsp+3A0h] [rbp+2A0h]
  __int64 v2096; // [rsp+3A8h] [rbp+2A8h]
  char v2097[8]; // [rsp+3B0h] [rbp+2B0h] BYREF
  char v2098[8]; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int64 v2099; // [rsp+3C0h] [rbp+2C0h]
  __int64 v2100; // [rsp+3C8h] [rbp+2C8h]
  __int64 v2101; // [rsp+3D0h] [rbp+2D0h]
  unsigned int *v2102; // [rsp+3D8h] [rbp+2D8h]
  __int64 v2103; // [rsp+3E0h] [rbp+2E0h]
  __int64 v2104; // [rsp+3E8h] [rbp+2E8h]
  __int64 v2105; // [rsp+3F0h] [rbp+2F0h]
  char v2106[8]; // [rsp+3F8h] [rbp+2F8h] BYREF
  char v2107[8]; // [rsp+400h] [rbp+300h] BYREF
  char v2108[8]; // [rsp+408h] [rbp+308h] BYREF
  __int64 v2109; // [rsp+410h] [rbp+310h]
  __int64 v2110; // [rsp+418h] [rbp+318h]
  __int64 v2111; // [rsp+420h] [rbp+320h]
  __int64 v2112; // [rsp+428h] [rbp+328h]
  __int64 v2113; // [rsp+430h] [rbp+330h]
  __int64 v2114; // [rsp+438h] [rbp+338h]
  __int64 v2115; // [rsp+440h] [rbp+340h]
  __int64 v2116; // [rsp+448h] [rbp+348h]
  __int64 v2117; // [rsp+450h] [rbp+350h]
  __int64 v2118; // [rsp+458h] [rbp+358h]
  __int64 v2119; // [rsp+468h] [rbp+368h]
  __int64 v2120; // [rsp+470h] [rbp+370h]
  __int64 v2121; // [rsp+478h] [rbp+378h]
  __int64 v2122; // [rsp+480h] [rbp+380h]
  __int64 v2123; // [rsp+488h] [rbp+388h]
  __int64 v2124; // [rsp+490h] [rbp+390h]
  char v2125[8]; // [rsp+498h] [rbp+398h] BYREF
  __int64 v2126; // [rsp+4A0h] [rbp+3A0h]
  __int64 v2127; // [rsp+4A8h] [rbp+3A8h]
  __int64 v2128; // [rsp+4B0h] [rbp+3B0h]
  __int64 v2129; // [rsp+4B8h] [rbp+3B8h]
  __int64 v2130; // [rsp+4C0h] [rbp+3C0h]
  __int64 v2131; // [rsp+4C8h] [rbp+3C8h]
  __int64 v2132; // [rsp+4D0h] [rbp+3D0h]
  __int64 v2133; // [rsp+4D8h] [rbp+3D8h]
  __int64 v2134; // [rsp+4E0h] [rbp+3E0h]
  __int64 v2135; // [rsp+4E8h] [rbp+3E8h]
  __int64 v2136; // [rsp+4F0h] [rbp+3F0h]
  _BYTE v2137[16]; // [rsp+4F8h] [rbp+3F8h] BYREF
  _BYTE v2138[16]; // [rsp+508h] [rbp+408h] BYREF
  _BYTE v2139[16]; // [rsp+518h] [rbp+418h] BYREF
  _BYTE v2140[16]; // [rsp+528h] [rbp+428h] BYREF
  _BYTE v2141[16]; // [rsp+538h] [rbp+438h] BYREF
  __int64 v2142; // [rsp+548h] [rbp+448h]
  _BYTE v2143[16]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v2144[16]; // [rsp+560h] [rbp+460h] BYREF
  _BYTE v2145[16]; // [rsp+570h] [rbp+470h] BYREF
  _BYTE v2146[16]; // [rsp+580h] [rbp+480h] BYREF
  _BYTE v2147[16]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v2148[16]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v2149[16]; // [rsp+5B0h] [rbp+4B0h] BYREF
  _BYTE v2150[16]; // [rsp+5C0h] [rbp+4C0h] BYREF
  __int64 v2151; // [rsp+5D0h] [rbp+4D0h]
  _BYTE v2152[24]; // [rsp+5D8h] [rbp+4D8h] BYREF
  char v2153[8]; // [rsp+5F0h] [rbp+4F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+5F8h] [rbp+4F8h]
  unsigned int v2155; // [rsp+604h] [rbp+504h]
  __int64 v2156; // [rsp+608h] [rbp+508h]
  _BYTE v2157[16]; // [rsp+610h] [rbp+510h] BYREF
  char v2158[16]; // [rsp+620h] [rbp+520h] BYREF
  char v2159[16]; // [rsp+630h] [rbp+530h] BYREF
  _QWORD v2160[4]; // [rsp+640h] [rbp+540h] BYREF
  _QWORD v2161[4]; // [rsp+660h] [rbp+560h] BYREF
  _BYTE v2162[24]; // [rsp+680h] [rbp+580h] BYREF
  char v2163[8]; // [rsp+698h] [rbp+598h] BYREF
  unsigned __int64 v2164; // [rsp+6A0h] [rbp+5A0h]
  char v2165[8]; // [rsp+6B0h] [rbp+5B0h] BYREF
  unsigned __int64 v2166; // [rsp+6B8h] [rbp+5B8h]
  _BYTE v2167[48]; // [rsp+6C8h] [rbp+5C8h] BYREF
  _BYTE v2168[104]; // [rsp+6F8h] [rbp+5F8h] BYREF
  BOOL v2170; // [rsp+780h] [rbp+680h]
  unsigned __int8 v2171; // [rsp+780h] [rbp+680h]
  __int64 **v2172; // [rsp+780h] [rbp+680h]
  int v2173; // [rsp+780h] [rbp+680h]
  unsigned int v2174; // [rsp+780h] [rbp+680h]
  unsigned int v2175; // [rsp+780h] [rbp+680h]
  unsigned __int16 v2176; // [rsp+780h] [rbp+680h]
  unsigned int v2177; // [rsp+780h] [rbp+680h]
  unsigned __int8 v2178; // [rsp+780h] [rbp+680h]
  unsigned __int8 v2179; // [rsp+780h] [rbp+680h]
  unsigned __int8 v2180; // [rsp+780h] [rbp+680h]
  __int16 v2181; // [rsp+780h] [rbp+680h]
  int v2182; // [rsp+780h] [rbp+680h]
  unsigned int v2183; // [rsp+780h] [rbp+680h]
  unsigned int v2184; // [rsp+780h] [rbp+680h]
  char v2185; // [rsp+788h] [rbp+688h] BYREF

  v2 = a2;
  if ( !__2f )
    KeBugCheck(0x33u);
  v4 = *(_QWORD *)&MaxDataSize;
  _InterlockedOr(v1989, 0);
  if ( !v4 )
    return 3221225635LL;
  if ( *(_QWORD *)a1 < 0x40uLL
    || *(_DWORD *)(a1 + 8) != (unsigned int)KiGetNtDdiVersion()
    || *(_DWORD *)(a1 + 12)
    || (*(_DWORD *)(a1 + 20) & 0x7FFFFFFE) != 0
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 40)
    || *(_QWORD *)(v2 + 16)
    || *(_QWORD *)(v2 + 24)
    || *(_QWORD *)(v2 + 32)
    || *(_DWORD *)(v2 + 4) >= *(_DWORD *)(v4 + 2092) )
  {
    return 3221225485LL;
  }
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 20) & 1;
  v8 = *(_DWORD *)(a1 + 52);
  if ( !v6 )
  {
    if ( v8 == 16 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      if ( v13 )
      {
        if ( v13 <= 0xFFFFFFFF )
        {
          if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
          {
            v1987 = KeAreAllApcsDisabled();
            EffectiveIrql = KeGetEffectiveIrql();
            KeBugCheckEx(0xC8u, ((unsigned __int64)EffectiveIrql << 16) | 0xFF, v1987, 0LL, 0LL);
          }
          goto LABEL_38;
        }
      }
    }
    return 3221225485LL;
  }
  v9 = v6 - 1;
  if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 )
  {
    if ( v8 == 16 && KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0) )
    {
      if ( *(int *)(a1 + 20) >= 0 )
      {
        if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
        {
          v1977 = KeAreAllApcsDisabled();
          v1978 = KeGetEffectiveIrql();
          KeBugCheckEx(0xC8u, ((unsigned __int64)v1978 << 16) | 0xFF, v1977, 0LL, 0LL);
        }
      }
      else if ( KeGetEffectiveIrql() > 1u )
      {
        v1975 = KeAreAllApcsDisabled();
        v1976 = KeGetEffectiveIrql();
        KeBugCheckEx(0xC8u, ((unsigned __int64)v1976 << 16) | 0xFF, v1975, 0LL, 0LL);
      }
      goto LABEL_38;
    }
    return 3221225485LL;
  }
  if ( v12 != 1 || v8 )
    return 3221225485LL;
  if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
  {
    v1973 = KeAreAllApcsDisabled();
    v1974 = KeGetEffectiveIrql();
    KeBugCheckEx(0xC8u, ((unsigned __int64)v1974 << 16) | 0xFF, v1973, 0LL, 0LL);
  }
LABEL_38:
  v2040 = 2872LL;
  if ( !v7 || (v2040 = *(_QWORD *)(v4 + 2776) + 2879LL, v2040 == 2872) )
    Pool2 = (char *)ExAllocateFromNPagedLookasideList(&stru_140E0F440);
  else
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
  Entry = Pool2;
  v15 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v16 = Pool2 + 32;
  v2031 = Pool2 + 32;
  memmove(Pool2 + 32, (const void *)v4, 0xAE8uLL);
  *((_QWORD *)v15 + 348) = v4;
  *((_QWORD *)v15 + 349) = v15 + 2824;
  *((_DWORD *)v15 + 536) = *(_DWORD *)v2;
  *(_QWORD *)(v15 + 2148) = *(unsigned int *)(v2 + 4);
  *((_DWORD *)v15 + 540) = 0;
  *((_DWORD *)v15 + 639) |= 0x1000u;
  if ( v7 )
    *((_QWORD *)v15 + 350) = (unsigned __int64)(v15 + 2879) & 0xFFFFFFFFFFFFFFF8uLL;
  v17 = *(_DWORD *)(a1 + 16);
  if ( v17 > 0x80000 )
    v17 = 0x80000;
  *((_DWORD *)v15 + 539) = v17;
  if ( !v17 )
    *((_DWORD *)v15 + 539) = 1;
  v2061 = a1;
  v18 = (__int64)(v15 + 32);
  v2062 = v2;
  v19 = *((_DWORD *)v15 + 639);
  v2001 = v15 + 32;
  if ( (v19 & 8) == 0
    || (v19 & 0x1000) != 0
    || (v20 = __rdtsc(),
        v21 = (v20 ^ __ROR8__(v20, 3)) * (unsigned __int128)0x7010008004002001uLL,
        v2128 = *((_QWORD *)&v21 + 1),
        (((unsigned __int8)v21 ^ BYTE8(v21)) & 3) != 0)
    || (v22 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v15 + 36))(
                64LL,
                *((_QWORD *)v15 + 243),
                *((unsigned int *)v15 + 532))) == 0 )
  {
LABEL_61:
    v2016 = 0;
  }
  else
  {
    (*((void (__fastcall **)(__int64, _QWORD))v16 + 55))(v22, *((unsigned __int16 *)v16 + 960));
    v23 = *(unsigned int *)(*((_QWORD *)v16 + 223) + *((_QWORD *)v16 + 162));
    if ( (_DWORD)v23 )
    {
      v24 = __rdtsc();
      v25 = (v24 ^ __ROR8__(v24, 3)) * (unsigned __int128)0x7010008004002001uLL;
      v2129 = *((_QWORD *)&v25 + 1);
      v23 = (*((_QWORD *)&v25 + 1) ^ (unsigned __int64)v25) % v23;
    }
    v26 = 0LL;
    while ( 1 )
    {
      v27 = (*((__int64 (__fastcall **)(__int64))v16 + 119))(v26);
      v28 = v27;
      if ( !v27 )
        goto LABEL_60;
      v26 = v27;
      if ( !(_DWORD)v23 )
        break;
      LODWORD(v23) = v23 - 1;
    }
    if ( (*((int (__fastcall **)(__int64))v16 + 117))(v27) < 0 )
    {
      (*((void (__fastcall **)(__int64))v16 + 120))(v28);
LABEL_60:
      (*((void (__fastcall **)(__int64))v16 + 33))(v22);
      goto LABEL_61;
    }
    (*((void (__fastcall **)(__int64, _BYTE *))v16 + 136))(v28, v2168);
    (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))v16 + 59))(v28, v22, 0LL, 0LL, 0LL);
    v42 = __rdtsc();
    v43 = (v42 ^ __ROR8__(v42, 3)) * (unsigned __int128)0x7010008004002001uLL;
    v2151 = *((_QWORD *)&v43 + 1);
    v44 = ((unsigned __int64)v43 ^ *((_QWORD *)&v43 + 1)) % (*((unsigned int (__fastcall **)(__int64))v16 + 58))(v22);
    _disable();
    _enable();
    (*((void (__fastcall **)(_BYTE *, _QWORD))v16 + 54))(v2092, 0LL);
    (*((void (__fastcall **)(_BYTE *, __int64))v16 + 56))(v2152, v22);
    while ( (*((int (__fastcall **)(unsigned int *, _BYTE *))v16 + 57))(&v2025, v2152) >= 0 )
    {
      if ( !(_DWORD)v44 )
      {
        (*((void (__fastcall **)(_BYTE *, _QWORD))v16 + 54))(v2092, v2025);
        break;
      }
      LODWORD(v44) = v44 - 1;
    }
    (*((void (__fastcall **)(_BYTE *, _BYTE *))v16 + 60))(v2092, v2150);
    (*((void (__fastcall **)(__int64))v16 + 33))(v22);
    v2016 = 1;
  }
  v2028 = 0LL;
  v29 = &v2029;
  v30 = 4LL;
  v31 = 0LL;
  v32 = 4;
  do
  {
    *(_BYTE *)v29 = 0;
    v29 = (unsigned int *)((char *)v29 + 1);
    --v32;
  }
  while ( v32 );
  v33 = *((_DWORD *)v16 + 528);
  if ( *((_DWORD *)v16 + 530) < *((_DWORD *)v16 + 531) )
  {
    n = 0;
    while ( 1 )
    {
      v35 = *(_DWORD *)(v18 + 2520) & 0x88000;
      v2022 = v33;
      if ( v35 != 557056 )
        __writedr(7u, 0LL);
      if ( v33 == *(_DWORD *)(v18 + 2092) )
      {
        v33 = 0;
        ++*(_DWORD *)(v18 + 2128);
LABEL_2906:
        v16 = v2031;
        v31 = 0LL;
        v2 = a2;
        goto LABEL_2907;
      }
      v36 = v18;
      v37 = 0;
      if ( *(_QWORD *)(v18 + 2752) )
        v36 = *(_QWORD *)(v18 + 2752);
      v38 = (char *)(v36 + *(unsigned int *)(v36 + 2088));
      v1992 = v38;
      if ( (_DWORD)v2028 && HIDWORD(v2028) <= v33 )
      {
        v37 = HIDWORD(v2028);
        v38 = (char *)(v36 + v2029);
        v1992 = v38;
      }
      v39 = 1LL;
      if ( v37 != v33 )
      {
        v40 = v33 - v37;
        v37 = v33;
        while ( 1 )
        {
          if ( *(_DWORD *)v38 == 1 )
          {
LABEL_101:
            v41 = 4 * (*((_DWORD *)v38 + 4) / 0xCu) + 48;
            goto LABEL_102;
          }
          if ( *(_DWORD *)v38 == 7 )
          {
            v41 = (unsigned int)(24 * (*((_DWORD *)v38 + 6) + 2));
            goto LABEL_103;
          }
          if ( *(_DWORD *)v38 == 8 )
            break;
          switch ( *(_DWORD *)v38 )
          {
            case 0xA:
              v41 = (unsigned int)(16 * (*((_DWORD *)v38 + 7) + 3));
              break;
            case 0x1C:
              v45 = *((unsigned __int16 *)v38 + 20);
LABEL_99:
              v41 = (v45 + 55) & 0xFFFFFFF8;
              break;
            case 0x1E:
              v41 = (((*((_DWORD *)v38 + 9) != 0 ? *((_DWORD *)v38 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                  + 24 * (*((unsigned __int16 *)v38 + 20) + 2);
              goto LABEL_102;
            case 0x21:
              v41 = 20
                  * (unsigned int)(((*((_DWORD *)v38 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v38 + 10)
                                                                   + 4095) >> 12)
                  + 48;
LABEL_102:
              v39 = 1LL;
              break;
            case 0x2B:
              goto LABEL_101;
            default:
              v41 = 48LL;
              break;
          }
LABEL_103:
          v38 += v41;
          if ( !--v40 )
          {
            v1992 = v38;
            goto LABEL_105;
          }
        }
        v45 = *((unsigned __int16 *)v38 + 16);
        goto LABEL_99;
      }
LABEL_105:
      LODWORD(v2028) = 1;
      HIDWORD(v2028) = v37;
      v2029 = (_DWORD)v38 - v36;
      if ( !*(_DWORD *)(v18 + 2116) )
        break;
LABEL_147:
      v63 = *(_DWORD *)v38;
      v1994 = v63;
      if ( v63 > 30 )
      {
        if ( v63 <= 40 )
        {
          if ( v63 == 40 )
            goto LABEL_1758;
          if ( v63 != 31 )
          {
            switch ( v63 )
            {
              case ' ':
                sub_140554F64(v18, v38);
                goto LABEL_289;
              case '!':
                sub_140553E5C(v18, v38);
                goto LABEL_289;
              case '#':
                v1295 = (_QWORD *)*((_QWORD *)v38 + 1);
                v1296 = *((unsigned int *)v38 + 4);
                v1297 = v1295;
                *(_DWORD *)(v18 + 2120) += v1296;
                v1298 = (const char *)v1295;
                v1299 = *(_DWORD *)(v18 + 2100);
                v1300 = *(_QWORD *)(v18 + 2104);
                if ( v1295 < (_QWORD *)((char *)v1295 + v1296) )
                {
                  do
                  {
                    _mm_prefetch(v1298, 0);
                    v1298 += 64;
                  }
                  while ( v1298 < (const char *)v1295 + v1296 );
                }
                v1301 = *(_QWORD *)(v18 + 2104);
                v1302 = (unsigned int)v1296 >> 7;
                if ( (unsigned int)v1296 >> 7 )
                {
                  do
                  {
                    v1303 = 8LL;
                    do
                    {
                      v1304 = v1297[1] ^ __ROL8__(*v1297 ^ v1301, v1299);
                      v1297 += 2;
                      v1301 = __ROL8__(v1304, v1299);
                      --v1303;
                    }
                    while ( v1303 );
                    v1305 = (__ROL8__(v1300 ^ ((char *)v1297 - (char *)v1295), 17) ^ v1300 ^ (unsigned __int64)((char *)v1297 - (char *)v1295))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2112 = *((_QWORD *)&v1305 + 1);
                    v1299 = ((unsigned __int8)(v1305 ^ BYTE8(v1305)) ^ (unsigned __int8)v1299) & 0x3F;
                    if ( !v1299 )
                      LOBYTE(v1299) = 1;
                    --v1302;
                  }
                  while ( v1302 );
                  v18 = (__int64)v2001;
                }
                v1306 = v1296 & 0x7F;
                if ( v1306 >= 8 )
                {
                  v1307 = (unsigned __int64)v1306 >> 3;
                  do
                  {
                    v1301 = __ROL8__(*v1297++ ^ v1301, v1299);
                    v1306 -= 8;
                    --v1307;
                  }
                  while ( v1307 );
                }
                for ( ; v1306; --v1306 )
                {
                  v1308 = *(unsigned __int8 *)v1297;
                  v1297 = (_QWORD *)((char *)v1297 + 1);
                  v1301 = __ROL8__(v1308 ^ v1301, v1299);
                }
                for ( i = v1301; ; LODWORD(v1301) = i ^ v1301 )
                {
                  i >>= 31;
                  if ( !i )
                    break;
                }
                v1310 = v1301 & 0x7FFFFFFF;
                if ( v1310 == *((_DWORD *)v38 + 5) )
                {
                  n = 0;
                  goto LABEL_1930;
                }
                if ( !*(_DWORD *)v38 && *((_DWORD *)v38 + 6) )
                  n = 1;
                v1311 = *((_QWORD *)v38 + 1);
                if ( !*((_DWORD *)v38 + 4) )
                  goto LABEL_1941;
                v1312 = 64LL;
                if ( (*(_DWORD *)(v18 + 2524) & 0x40) == 0 )
                  goto LABEL_1941;
                CurrentIrql = KeGetCurrentIrql();
                v1314 = v1311 & 0xFFFFFFFFFFFFF000uLL;
                v2002 = (unsigned int *)((v1311 + *((unsigned int *)v38 + 4) - 1LL) | 0xFFF);
                v1315 = (v1311 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1922:
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1316 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                            v1314,
                            0LL,
                            v1312,
                            v1297);
                  if ( v1316 == -1073741267 )
                  {
                    if ( n )
                      goto LABEL_1940;
                    if ( CurrentIrql <= 1u )
                    {
                      __writecr8(CurrentIrql);
                      goto LABEL_1922;
                    }
                  }
                  else if ( v1316 < 0 )
                  {
LABEL_1940:
                    __writecr8(CurrentIrql);
                    v38 = v1992;
LABEL_1941:
                    n = 0;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1310 ^ (unsigned __int64)*((unsigned int *)v38 + 5);
                    v1329 = *((_QWORD *)v38 + 1);
                    if ( !*(_DWORD *)(v18 + 2328) )
                    {
                      *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v18 + 2352) = *(int *)v38;
                      *(_QWORD *)(v18 + 2360) = v1329;
                      *(_DWORD *)(v18 + 2328) = 1;
                      v1330 = *(_DWORD *)(v18 + 2520);
                      if ( (v1330 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1330 & 1) != 0 )
                      {
                        v1331 = *(unsigned int *)(v18 + 2676);
                        v1332 = *(_QWORD *)(v18 + 2104);
                        v1333 = *(_QWORD *)(v18 + 2680);
                        v1334 = (_QWORD *)(v1331 + v18);
                        v1335 = v1331
                              + v18
                              + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1331) >> 3);
                        while ( v1334 != (_QWORD *)v1335 )
                        {
                          *v1334 ^= v1333;
                          v1333 = ((v1332 ^ *v1334++) + __ROR8__(v1333, v1333 & 0x3F)) ^ 0xF05;
                        }
                        *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                        if ( v1333 != *(_QWORD *)(v18 + 2688) )
                        {
                          v1336 = *(_DWORD *)(v18 + 2052);
                          v1337 = *(_QWORD *)(v18 + 1416);
                          *(_QWORD *)v1337 = v18;
                          *(_DWORD *)(v1337 + 16) = v1336;
                          if ( !*(_DWORD *)(v18 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1333 ^ *(_QWORD *)(v18 + 2688);
                          sub_140C7F03C(v18, 0LL, v1333, 256LL);
                        }
                      }
                    }
LABEL_1930:
                    v1317 = *((_DWORD *)v38 + 10);
                    v30 = 4LL;
                    if ( (v1317 & 2) == 0 )
                      goto LABEL_289;
                    v1318 = *((_QWORD *)v38 + 1);
                    if ( (v1317 & 4) != 0 )
                    {
                      v1319 = *((_QWORD *)v38 + 3);
                      v1320 = **(_QWORD **)(v1318 + 112);
                      if ( v1320 != v1319 )
                      {
                        v1321 = *(_QWORD *)(v18 + 1416);
                        *(_QWORD *)v1321 = v1320;
                        *(_DWORD *)(v1321 + 16) = 256;
                        if ( !*(_DWORD *)(v18 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1319 ^ v1320;
                        v1322 = *(_QWORD *)(v1318 + 112);
                        if ( !*(_DWORD *)(v18 + 2328) )
                        {
                          *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2352) = *(int *)v38;
                          *(_QWORD *)(v18 + 2360) = v1322;
                          *(_DWORD *)(v18 + 2328) = 1;
                          v1323 = *(_DWORD *)(v18 + 2520);
                          if ( (v1323 & 0x20000000) == 0
                            && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0
                            && (v1323 & 1) != 0 )
                          {
                            v1324 = *(unsigned int *)(v18 + 2676);
                            v1325 = *(_QWORD *)(v18 + 2104);
                            v1326 = *(_QWORD *)(v18 + 2680);
                            v1327 = (_QWORD *)(v1324 + v18);
                            v1328 = v1324
                                  + v18
                                  + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1324) >> 3);
                            while ( v1327 != (_QWORD *)v1328 )
                            {
                              *v1327 ^= v1326;
                              v1326 = ((v1325 ^ *v1327++) + __ROR8__(v1326, v1326 & 0x3F)) ^ 0xF05;
                            }
                            *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                            if ( v1326 != *(_QWORD *)(v18 + 2688) )
                            {
                              v1338 = *(_DWORD *)(v18 + 2052);
                              v1339 = *(_QWORD *)(v18 + 1416);
                              *(_QWORD *)v1339 = v18;
                              *(_DWORD *)(v1339 + 16) = v1338;
                              if ( !*(_DWORD *)(v18 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1326 ^ *(_QWORD *)(v18 + 2688);
                              sub_140C7F03C(v18, 0LL, v1326, 256LL);
                            }
                          }
                        }
                      }
                    }
                    if ( (*((_DWORD *)v38 + 10) & 8) == 0 )
                      goto LABEL_289;
                    v1340 = *((_QWORD *)v38 + 4);
                    v1341 = **(_QWORD **)(v1318 + 120);
                    if ( v1341 == v1340 )
                      goto LABEL_289;
                    v1342 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v1342 = v1341;
                    *(_DWORD *)(v1342 + 16) = 256;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1340 ^ v1341;
                    v1343 = *(_QWORD *)(v1318 + 120);
                    if ( *(_DWORD *)(v18 + 2328) )
                      goto LABEL_289;
                    *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2352) = *(int *)v38;
                    *(_QWORD *)(v18 + 2360) = v1343;
                    *(_DWORD *)(v18 + 2328) = 1;
                    v1344 = *(_DWORD *)(v18 + 2520);
                    if ( (v1344 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v1344 & 1) == 0 )
                      goto LABEL_289;
                    v1345 = *(unsigned int *)(v18 + 2676);
                    v1346 = *(_QWORD *)(v18 + 2104);
                    v478 = *(_QWORD *)(v18 + 2680);
                    v1347 = (_QWORD *)(v1345 + v18);
                    v1348 = v1345 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1345) >> 3);
                    while ( v1347 != (_QWORD *)v1348 )
                    {
                      *v1347 ^= v478;
                      v478 = ((v1346 ^ *v1347++) + __ROR8__(v478, v478 & 0x3F)) ^ 0xF05;
                    }
LABEL_763:
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v478 != *(_QWORD *)(v18 + 2688) )
                    {
                      v481 = *(_DWORD *)(v18 + 2052);
                      v482 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)v482 = v18;
                      *(_DWORD *)(v482 + 16) = v481;
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v478 ^ *(_QWORD *)(v18 + 2688);
                      sub_140C7F03C(v18, 0LL, v478, 256LL);
                    }
                    goto LABEL_289;
                  }
                  v1314 += 4096LL;
                  v1315 += 4096LL;
                  if ( (unsigned int *)v1315 == v2002 )
                  {
                    __writecr8(CurrentIrql);
                    v38 = v1992;
                    n = 0;
                    goto LABEL_1930;
                  }
                }
              case '$':
                v1225 = (_QWORD *)*((_QWORD *)v38 + 1);
                v1226 = *((unsigned int *)v38 + 4);
                v1227 = v1225;
                *(_DWORD *)(v18 + 2120) += v1226;
                v1228 = (const char *)v1225;
                v1229 = *(_DWORD *)(v18 + 2100);
                v1230 = *(_QWORD *)(v18 + 2104);
                if ( v1225 < (_QWORD *)((char *)v1225 + v1226) )
                {
                  do
                  {
                    _mm_prefetch(v1228, 0);
                    v1228 += 64;
                  }
                  while ( v1228 < (const char *)v1225 + v1226 );
                }
                v1231 = *(_QWORD *)(v18 + 2104);
                v1232 = (unsigned int)v1226 >> 7;
                if ( (unsigned int)v1226 >> 7 )
                {
                  do
                  {
                    v1233 = 8LL;
                    do
                    {
                      v1234 = v1227[1] ^ __ROL8__(*v1227 ^ v1231, v1229);
                      v1227 += 2;
                      v1231 = __ROL8__(v1234, v1229);
                      --v1233;
                    }
                    while ( v1233 );
                    v1235 = (__ROL8__(v1230 ^ ((char *)v1227 - (char *)v1225), 17) ^ v1230 ^ (unsigned __int64)((char *)v1227 - (char *)v1225))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2111 = *((_QWORD *)&v1235 + 1);
                    v1236 = v1235 ^ BYTE8(v1235) ^ v1229;
                    v39 = 1LL;
                    v1229 = v1236 & 0x3F;
                    if ( !v1229 )
                      LOBYTE(v1229) = 1;
                    --v1232;
                  }
                  while ( v1232 );
                  v18 = (__int64)v2001;
                }
                v1237 = v1226 & 0x7F;
                if ( (unsigned int)v1237 >= 8 )
                {
                  v1238 = (unsigned __int64)(unsigned int)v1237 >> 3;
                  do
                  {
                    v1231 = __ROL8__(*v1227++ ^ v1231, v1229);
                    v1237 = (unsigned int)(v1237 - 8);
                    --v1238;
                  }
                  while ( v1238 );
                }
                for ( ; (_DWORD)v1237; v1237 = (unsigned int)(v1237 - 1) )
                {
                  v1239 = *(unsigned __int8 *)v1227;
                  v1227 = (_QWORD *)((char *)v1227 + 1);
                  v1231 = __ROL8__(v1239 ^ v1231, v1229);
                }
                for ( j = v1231; ; LODWORD(v1231) = j ^ v1231 )
                {
                  j >>= 31;
                  if ( !j )
                    break;
                }
                v1241 = v1231 & 0x7FFFFFFF;
                if ( v1241 == *((_DWORD *)v38 + 5) )
                  goto LABEL_1846;
                if ( !*(_DWORD *)v38 && *((_DWORD *)v38 + 6) )
                  n = 1;
                v39 = *((_QWORD *)v38 + 1);
                if ( !*((_DWORD *)v38 + 4) )
                  goto LABEL_1833;
                v1237 = 64LL;
                if ( (*(_DWORD *)(v18 + 2524) & 0x40) == 0 )
                  goto LABEL_1833;
                v1242 = KeGetCurrentIrql();
                v1243 = v39 & 0xFFFFFFFFFFFFF000uLL;
                v2002 = (unsigned int *)((v39 + *((unsigned int *)v38 + 4) - 1LL) | 0xFFF);
                v1244 = (v39 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1824:
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1245 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                            v1243,
                            0LL,
                            v1237,
                            v1227);
                  if ( v1245 == -1073741267 )
                  {
                    if ( n )
                      goto LABEL_1832;
                    if ( v1242 <= 1u )
                    {
                      __writecr8(v1242);
                      goto LABEL_1824;
                    }
                  }
                  else if ( v1245 < 0 )
                  {
LABEL_1832:
                    __writecr8(v1242);
                    v38 = v1992;
LABEL_1833:
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *((unsigned int *)v38 + 5) ^ (unsigned __int64)v1241;
                    v1246 = *((_QWORD *)v38 + 1);
                    if ( !*(_DWORD *)(v18 + 2328) )
                    {
                      v39 = 1LL;
                      *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v18 + 2352) = *(int *)v38;
                      *(_QWORD *)(v18 + 2360) = v1246;
                      *(_DWORD *)(v18 + 2328) = 1;
                      v1247 = *(_DWORD *)(v18 + 2520);
                      if ( (v1247 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1247 & 1) != 0 )
                      {
                        v1248 = *(unsigned int *)(v18 + 2676);
                        v1249 = *(_QWORD *)(v18 + 2104);
                        v1237 = *(_QWORD *)(v18 + 2680);
                        v39 = v1248 + v18;
                        v1227 = (_QWORD *)(v1248
                                         + v18
                                         + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1248) >> 3));
                        while ( (_QWORD *)v39 != v1227 )
                        {
                          *(_QWORD *)v39 ^= v1237;
                          v1237 = ((v1249 ^ *(_QWORD *)v39) + __ROR8__(v1237, v1237 & 0x3F)) ^ 0xF05;
                          v39 += 8LL;
                        }
                        *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                        if ( v1237 != *(_QWORD *)(v18 + 2688) )
                        {
                          v1250 = *(_DWORD *)(v18 + 2052);
                          v1251 = *(_QWORD *)(v18 + 1416);
                          *(_QWORD *)v1251 = v18;
                          *(_DWORD *)(v1251 + 16) = v1250;
                          if ( !*(_DWORD *)(v18 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1237 ^ *(_QWORD *)(v18 + 2688);
                          sub_140C7F03C(v18, 0LL, v1237, 256LL);
                        }
                      }
                    }
                    goto LABEL_1846;
                  }
                  v1243 += 4096LL;
                  v1244 += 4096LL;
                  if ( (unsigned int *)v1244 == v2002 )
                  {
                    __writecr8(v1242);
                    v38 = v1992;
LABEL_1846:
                    v1252 = *(_QWORD *)(v18 + 1336);
                    v1253 = KeGetCurrentIrql();
                    __writecr8(0xFuLL);
                    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v18 + 352))(v1252, v39, v1237, v1227);
                    v1254 = **(unsigned int ***)(v18 + 1568);
                    v1255 = v1254 + 4;
                    v1256 = *((_BYTE *)v1254 + 12);
                    v1257 = (unsigned __int64)&v1254[6 * *v1254 + 4];
                    while ( 1 )
                    {
                      v1258 = 24LL;
                      v1259 = v38 + 24;
                      v1260 = v1255;
                      do
                      {
                        v1261 = *(_QWORD *)v1260;
                        v1260 += 2;
                        v1262 = *(_QWORD *)v1259;
                        v1259 += 8;
                        if ( v1261 != v1262 )
                          goto LABEL_1854;
                        v1258 = (unsigned int)(v1258 - 8);
                      }
                      while ( (unsigned int)v1258 >= 8 );
                      if ( (_DWORD)v1258 )
                      {
                        while ( 1 )
                        {
                          v1263 = *(_BYTE *)v1260;
                          v1260 = (unsigned int *)((char *)v1260 + 1);
                          v1264 = *v1259++;
                          if ( v1263 != v1264 )
                            break;
                          v50 = (_DWORD)v1258 == 1;
                          v1258 = (unsigned int)(v1258 - 1);
                          if ( v50 )
                            goto LABEL_1855;
                        }
LABEL_1854:
                        v1255 += 6;
                        if ( (unsigned __int64)v1255 < v1257 )
                          continue;
                      }
LABEL_1855:
                      (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v18 + 416))(
                        *(_QWORD *)(v18 + 1336),
                        v1258,
                        v1259,
                        v1260);
                      __writecr8(v1253);
                      if ( v1256 )
                      {
                        v1265 = *(_DWORD *)(v18 + 2524);
                        if ( (v1265 & 0x10) != 0 && !*(_DWORD *)(v18 + 2328) )
                        {
                          *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2352) = *(int *)v38;
                          *(_QWORD *)(v18 + 2360) = 1LL;
                          *(_DWORD *)(v18 + 2328) = 1;
                          v1266 = *(_DWORD *)(v18 + 2520);
                          if ( (v1266 & 0x20000000) == 0 && (v1265 & 0x200000) != 0 && (v1266 & 1) != 0 )
                          {
                            v1267 = *(unsigned int *)(v18 + 2676);
                            v1268 = *(_QWORD *)(v18 + 2104);
                            v1269 = *(_QWORD *)(v18 + 2680);
                            v1270 = (_QWORD *)(v1267 + v18);
                            v1271 = v1267
                                  + v18
                                  + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1267) >> 3);
                            while ( v1270 != (_QWORD *)v1271 )
                            {
                              *v1270 ^= v1269;
                              v1269 = ((v1268 ^ *v1270++) + __ROR8__(v1269, v1269 & 0x3F)) ^ 0xF05;
                            }
                            *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                            if ( v1269 != *(_QWORD *)(v18 + 2688) )
                            {
                              v1272 = *(_DWORD *)(v18 + 2052);
                              v1273 = *(_QWORD *)(v18 + 1416);
                              *(_QWORD *)v1273 = v18;
                              *(_DWORD *)(v1273 + 16) = v1272;
                              if ( !*(_DWORD *)(v18 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1269 ^ *(_QWORD *)(v18 + 2688);
                              sub_140C7F03C(v18, 0LL, v1269, 256LL);
                            }
                          }
                        }
                        if ( *((_QWORD *)v38 + 3) == 1LL )
                          goto LABEL_1881;
                      }
                      if ( v1255 != (unsigned int *)v1257 )
                      {
LABEL_1881:
                        n = 0;
                      }
                      else
                      {
                        n = 0;
                        if ( !*(_DWORD *)(v18 + 2328) )
                        {
                          *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2352) = *(int *)v38;
                          *(_QWORD *)(v18 + 2360) = v1255;
                          *(_DWORD *)(v18 + 2328) = 1;
                          v1274 = *(_DWORD *)(v18 + 2520);
                          if ( (v1274 & 0x20000000) == 0
                            && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0
                            && (v1274 & 1) != 0 )
                          {
                            v1275 = *(unsigned int *)(v18 + 2676);
                            v1276 = *(_QWORD *)(v18 + 2104);
                            v1277 = *(_QWORD *)(v18 + 2680);
                            v1278 = (_QWORD *)(v1275 + v18);
                            v1279 = v1275
                                  + v18
                                  + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1275) >> 3);
                            while ( v1278 != (_QWORD *)v1279 )
                            {
                              *v1278 ^= v1277;
                              v1277 = ((v1276 ^ *v1278++) + __ROR8__(v1277, v1277 & 0x3F)) ^ 0xF05;
                            }
                            *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                            if ( v1277 != *(_QWORD *)(v18 + 2688) )
                            {
                              v1280 = *(_DWORD *)(v18 + 2052);
                              v1281 = *(_QWORD *)(v18 + 1416);
                              *(_QWORD *)v1281 = v18;
                              *(_DWORD *)(v1281 + 16) = v1280;
                              if ( !*(_DWORD *)(v18 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1277 ^ *(_QWORD *)(v18 + 2688);
                              sub_140C7F03C(v18, 0LL, v1277, 256LL);
                            }
                          }
                        }
                      }
                      v1282 = *(_QWORD *)(v18 + 1336);
                      v1283 = KeGetCurrentIrql();
                      __writecr8(0xFuLL);
                      (*(void (__fastcall **)(__int64))(v18 + 352))(v1282);
                      v1284 = 0LL;
                      v1285 = **(unsigned int ***)(v18 + 1568);
                      v1286 = v1285 + 4;
                      v1287 = (unsigned __int64)&v1285[6 * *v1285 + 4];
                      while ( 1 )
                      {
                        v1286 += 6;
                        if ( (unsigned __int64)v1286 >= v1287 )
                          break;
                        v1288 = *((_QWORD *)v1286 + 1);
                        if ( v1288 < v1284 )
                          break;
                        if ( (v1288 & 0xFFFFFFFFFFFFF000uLL) != v1288 )
                          break;
                        v1289 = v1288 + v1286[4];
                        if ( v1289 <= v1288 || v1289 == v1284 )
                          break;
                        v1284 = v1288 + v1286[4];
                      }
                      (*(void (__fastcall **)(_QWORD))(v18 + 416))(*(_QWORD *)(v18 + 1336));
                      __writecr8(v1283);
                      if ( v1286 == (unsigned int *)v1287 )
                        goto LABEL_2486;
                      if ( *(_DWORD *)(v18 + 2328) )
                        goto LABEL_2486;
                      *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v18 + 2352) = *(int *)v38;
                      *(_QWORD *)(v18 + 2360) = v1286;
                      *(_DWORD *)(v18 + 2328) = 1;
                      v1290 = *(_DWORD *)(v18 + 2520);
                      if ( (v1290 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v1290 & 1) == 0 )
                        goto LABEL_2486;
                      v1291 = *(unsigned int *)(v18 + 2676);
                      v1292 = *(_QWORD *)(v18 + 2104);
                      v337 = *(_QWORD *)(v18 + 2680);
                      v1293 = (_QWORD *)(v1291 + v18);
                      v1294 = v1291 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1291) >> 3);
                      while ( v1293 != (_QWORD *)v1294 )
                      {
                        *v1293 ^= v337;
                        v337 = ((v1292 ^ *v1293++) + __ROR8__(v337, v337 & 0x3F)) ^ 0xF05;
                      }
                      goto LABEL_554;
                    }
                  }
                }
              case '%':
                if ( (*(_DWORD *)(v18 + 2524) & 4) != 0 )
                  goto LABEL_289;
                if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(v18 + 1072))((unsigned int)(v63 - 37), 1LL) )
                  goto LABEL_289;
                if ( *(_DWORD *)(v18 + 2328) )
                  goto LABEL_289;
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *(int *)v38;
                *(_QWORD *)(v18 + 2360) = 0LL;
                *(_DWORD *)(v18 + 2328) = 1;
                v1220 = *(_DWORD *)(v18 + 2520);
                if ( (v1220 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v1220 & 1) == 0 )
                  goto LABEL_289;
                v1221 = *(unsigned int *)(v18 + 2676);
                v1222 = *(_QWORD *)(v18 + 2104);
                v478 = *(_QWORD *)(v18 + 2680);
                v1223 = (_QWORD *)(v1221 + v18);
                v1224 = v1221 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1221) >> 3);
                while ( v1223 != (_QWORD *)v1224 )
                {
                  *v1223 ^= v478;
                  v478 = ((v1222 ^ *v1223++) + __ROR8__(v478, v478 & 0x3F)) ^ 0xF05;
                }
                goto LABEL_763;
              case '&':
                (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 432))(v2157, *((unsigned int *)v38 + 11));
                v1209 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v18 + 480))(v2157, v2143);
                __asm { xgetbv }
                v1211 = v1209 | (v1210 << 32);
                (*(void (__fastcall **)(_BYTE *))(v18 + 424))(v2143);
                v1212 = *((_QWORD *)v38 + 4);
                v1213 = v1211 & *((_QWORD *)v38 + 3);
                if ( v1213 == v1212 )
                  goto LABEL_289;
                v1214 = *((_QWORD *)v38 + 5);
                if ( *(_DWORD *)(v18 + 2328) )
                  goto LABEL_289;
                *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1213 ^ v1212;
                if ( *(_DWORD *)(v18 + 2328) )
                  goto LABEL_289;
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *(int *)v38;
                *(_QWORD *)(v18 + 2360) = v1214;
                *(_DWORD *)(v18 + 2328) = 1;
                v1215 = *(_DWORD *)(v18 + 2520);
                if ( (v1215 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v1215 & 1) == 0 )
                  goto LABEL_289;
                v1216 = *(unsigned int *)(v18 + 2676);
                v1217 = *(_QWORD *)(v18 + 2104);
                v478 = *(_QWORD *)(v18 + 2680);
                v1218 = (_QWORD *)(v1216 + v18);
                v1219 = v1216 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1216) >> 3);
                while ( v1218 != (_QWORD *)v1219 )
                {
                  *v1218 ^= v478;
                  v478 = ((v1217 ^ *v1218++) + __ROR8__(v478, v478 & 0x3F)) ^ 0xF05;
                }
                goto LABEL_763;
            }
            if ( v63 != 39 )
              goto LABEL_2264;
LABEL_1758:
            *(_DWORD *)(v18 + 2120) += *((_DWORD *)v38 + 9);
            v1188 = *((unsigned int *)v38 + 9);
            v1189 = (_QWORD *)(v18 + *((unsigned int *)v38 + 8));
            v1190 = *(_DWORD *)(v18 + 2100);
            v1191 = v1189;
            v1192 = *(_QWORD *)(v18 + 2104);
            v1193 = (const char *)v1189;
            if ( v1189 < (_QWORD *)((char *)v1189 + v1188) )
            {
              do
              {
                _mm_prefetch(v1193, 0);
                v1193 += 64;
              }
              while ( v1193 < (const char *)v1189 + v1188 );
            }
            v1194 = *(_QWORD *)(v18 + 2104);
            v1195 = (unsigned int)v1188 >> 7;
            if ( (unsigned int)v1188 >> 7 )
            {
              do
              {
                v1196 = 8LL;
                do
                {
                  v1197 = v1191[1] ^ __ROL8__(*v1191 ^ v1194, v1190);
                  v1191 += 2;
                  v1194 = __ROL8__(v1197, v1190);
                  --v1196;
                }
                while ( v1196 );
                v1198 = (__ROL8__(v1192 ^ ((char *)v1191 - (char *)v1189), 17) ^ v1192 ^ (unsigned __int64)((char *)v1191 - (char *)v1189))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2122 = *((_QWORD *)&v1198 + 1);
                v1190 = ((unsigned __int8)(v1198 ^ BYTE8(v1198)) ^ (unsigned __int8)v1190) & 0x3F;
                if ( !v1190 )
                  LOBYTE(v1190) = 1;
                --v1195;
              }
              while ( v1195 );
              v18 = (__int64)v2001;
            }
            v1199 = v1188 & 0x7F;
            if ( v1199 >= 8 )
            {
              v1200 = (unsigned __int64)v1199 >> 3;
              do
              {
                v1194 = __ROL8__(*v1191++ ^ v1194, v1190);
                v1199 -= 8;
                --v1200;
              }
              while ( v1200 );
            }
            for ( ; v1199; --v1199 )
            {
              v1201 = *(unsigned __int8 *)v1191;
              v1191 = (_QWORD *)((char *)v1191 + 1);
              v1194 = __ROL8__(v1201 ^ v1194, v1190);
            }
            v1202 = *((_QWORD *)v38 + 3);
            if ( v1194 == v1202 )
              goto LABEL_237;
            if ( !*(_DWORD *)(v18 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1194 ^ v1202;
            v1203 = v18 + *((unsigned int *)v38 + 8);
            if ( *(_DWORD *)(v18 + 2328) )
              goto LABEL_2486;
            *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2352) = *(int *)v38;
            *(_QWORD *)(v18 + 2360) = v1203;
            *(_DWORD *)(v18 + 2328) = 1;
            v1204 = *(_DWORD *)(v18 + 2520);
            if ( (v1204 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v1204 & 1) == 0 )
              goto LABEL_2486;
            v1205 = *(unsigned int *)(v18 + 2676);
            v1206 = *(_QWORD *)(v18 + 2104);
            v337 = *(_QWORD *)(v18 + 2680);
            v1207 = (_QWORD *)(v1205 + v18);
            v1208 = v1205 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1205) >> 3);
            while ( v1207 != (_QWORD *)v1208 )
            {
              *v1207 ^= v337;
              v337 = ((v1206 ^ *v1207++) + __ROR8__(v337, v337 & 0x3F)) ^ 0xF05;
            }
            goto LABEL_554;
          }
          if ( (*(_DWORD *)(v18 + 2128) & 1) == 0 )
            goto LABEL_289;
          if ( !*(_QWORD *)(*(_QWORD *)(v18 + 1384) + 32LL) )
            goto LABEL_1977;
          v1350 = *(unsigned int *)(v18 + 2492);
          if ( (_DWORD)v1350 == -1 )
          {
            *(_DWORD *)(v18 + 2492) = 0;
            v1350 = 0LL;
          }
          v1351 = (*(__int64 (__fastcall **)(__int64, __int64))(v18 + 656))(v1350, 1LL);
          if ( v1351 || (v1351 = (*(__int64 (__fastcall **)(_QWORD))(v18 + 664))(0LL)) != 0 )
          {
            while ( (*(int (__fastcall **)(__int64, __int64))(v18 + 680))(v1351, v18 + 2440) < 0 )
            {
              v1351 = (*(__int64 (__fastcall **)(__int64))(v18 + 664))(v1351);
              if ( !v1351 )
              {
                *(_DWORD *)(v18 + 2492) = -1;
                goto LABEL_1977;
              }
            }
            v1352 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(v18 + 984))(26LL, &v2083, 0LL);
            (*(void (__fastcall **)(__int64, __int64))(v18 + 688))(v1351, v18 + 2440);
            v1353 = (*(__int64 (__fastcall **)(__int64))(v18 + 664))(v1351);
            if ( v1353 )
            {
              *(_DWORD *)(v18 + 2492) = (*(__int64 (__fastcall **)(__int64))(v18 + 696))(v1353);
              (*(void (__fastcall **)(__int64))(v18 + 672))(v1353);
            }
            else
            {
              *(_DWORD *)(v18 + 2492) = -1;
            }
            v1349 = v2083;
            if ( v1352 < 0 )
              v1349 = 0LL;
          }
          else
          {
LABEL_1977:
            v1349 = 0LL;
          }
          v1354 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v18 + 952);
          v1993 = v1349;
          v1355 = 0;
          LODWORD(v1995) = 0;
          v1356 = v1354(0LL, v39);
          if ( v1356 )
          {
            v1357 = v1356;
            while ( v1349 != v1357 )
            {
              if ( (*(unsigned int (__fastcall **)(__int64))(v18 + 976))(v1357) )
              {
                if ( (*(int (__fastcall **)(__int64))(v18 + 936))(v1357) >= 0 )
                {
                  v1416 = (*(unsigned __int8 (__fastcall **)(__int64))(v18 + 1000))(v1357);
                  v2179 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v18 + 1008))(v1357, &v2004);
                  v2002 = (unsigned int *)(*(__int64 (__fastcall **)(__int64))(v18 + 1016))(v1357);
                  if ( (_BYTE)v1416 == 97 )
                    goto LABEL_2093;
                  if ( *(_DWORD *)(v18 + 2328) )
                    goto LABEL_2093;
                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = (unsigned int)v1416 ^ 0x61LL;
                  if ( *(_DWORD *)(v18 + 2328) )
                    goto LABEL_2093;
                  v1379 = (int *)v1992;
                  *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2344) = (char *)v1379 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2352) = *v1379;
                  *(_QWORD *)(v18 + 2360) = v1357;
                  *(_DWORD *)(v18 + 2328) = 1;
                  v1417 = *(_DWORD *)(v18 + 2520);
                  if ( (v1417 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1417 & 1) != 0 )
                  {
                    v1418 = *(unsigned int *)(v18 + 2676);
                    v1419 = *(_QWORD *)(v18 + 2104);
                    v1420 = *(_QWORD *)(v18 + 2680);
                    v1421 = (_QWORD *)(v1418 + v18);
                    v1422 = v1418 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1418) >> 3);
                    while ( v1421 != (_QWORD *)v1422 )
                    {
                      *v1421 ^= v1420;
                      v1420 = ((v1419 ^ *v1421++) + __ROR8__(v1420, v1420 & 0x3F)) ^ 0xF05;
                    }
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v1420 != *(_QWORD *)(v18 + 2688) )
                    {
                      v1423 = *(_DWORD *)(v18 + 2052);
                      v1424 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)v1424 = v18;
                      *(_DWORD *)(v1424 + 16) = v1423;
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1420 ^ *(_QWORD *)(v18 + 2688);
                      sub_140C7F03C(v18, 0LL, v1420, 256LL);
                    }
LABEL_2093:
                    v1379 = (int *)v1992;
                  }
                  v1425 = 0;
                  if ( (v1416 & 7) == 1 )
                  {
                    v1425 = 48;
                  }
                  else if ( (v1416 & 7) == 2 )
                  {
                    v1425 = 16;
                    LOBYTE(n) = 16;
                  }
                  else if ( (v1416 & 7) != 0 && !*(_DWORD *)(v18 + 2328) )
                  {
                    *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2344) = (char *)v1379 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2352) = *v1379;
                    *(_QWORD *)(v18 + 2360) = v1357;
                    *(_DWORD *)(v18 + 2328) = 1;
                    v1426 = *(_DWORD *)(v18 + 2520);
                    if ( (v1426 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1426 & 1) != 0 )
                    {
                      v1427 = *(unsigned int *)(v18 + 2676);
                      v1428 = *(_QWORD *)(v18 + 2104);
                      v1429 = *(_QWORD *)(v18 + 2680);
                      v1379 = (int *)(v1427 + v18);
                      v1430 = v1427 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1427) >> 3);
                      while ( v1379 != (int *)v1430 )
                      {
                        *(_QWORD *)v1379 ^= v1429;
                        v1429 = ((v1428 ^ *(_QWORD *)v1379) + __ROR8__(v1429, v1429 & 0x3F)) ^ 0xF05;
                        v1379 += 2;
                      }
                      *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                      if ( v1429 != *(_QWORD *)(v18 + 2688) )
                      {
                        v1431 = *(_DWORD *)(v18 + 2052);
                        v1432 = *(_QWORD *)(v18 + 1416);
                        *(_QWORD *)v1432 = v18;
                        *(_DWORD *)(v1432 + 16) = v1431;
                        if ( !*(_DWORD *)(v18 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1429 ^ *(_QWORD *)(v18 + 2688);
                        sub_140C7F03C(v18, 0LL, v1429, 256LL);
                      }
                    }
                  }
                  v1433 = *(_QWORD *)(v18 + 1472);
                  v1380 = 0xA3A03F5891C8B4E8uLL;
                  v1378 = (__int64)v1992;
                  v1434 = v1416 >> 4;
                  if ( (*(_BYTE *)(v1433 + 2 * v1434) | (unsigned __int8)v1425) != v2179 && !*(_DWORD *)(v18 + 2328) )
                  {
                    *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2344) = v1378 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2352) = *(int *)v1378;
                    *(_QWORD *)(v18 + 2360) = v1357;
                    *(_DWORD *)(v18 + 2328) = 1;
                    v1435 = *(_DWORD *)(v18 + 2520);
                    if ( (v1435 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1435 & 1) != 0 )
                    {
                      v1436 = *(unsigned int *)(v18 + 2676);
                      v1437 = *(_QWORD *)(v18 + 2104);
                      v1438 = *(_QWORD *)(v18 + 2680);
                      v1439 = (_QWORD *)(v1436 + v18);
                      v1440 = v1436 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1436) >> 3);
                      while ( v1439 != (_QWORD *)v1440 )
                      {
                        *v1439 ^= v1438;
                        v1438 = ((*v1439++ ^ v1437) + __ROR8__(v1438, v1438 & 0x3F)) ^ 0xF05;
                      }
                      *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                      if ( v1438 != *(_QWORD *)(v18 + 2688) )
                      {
                        v1441 = *(_QWORD *)(v18 + 1416);
                        v1442 = *(_DWORD *)(v18 + 2052);
                        *(_QWORD *)v1441 = v18;
                        *(_DWORD *)(v1441 + 16) = v1442;
                        if ( !*(_DWORD *)(v18 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *(_QWORD *)(v18 + 2688) ^ v1438;
                        sub_140C7F03C(v18, 0LL, v1438, 256LL);
                      }
                      v1378 = (__int64)v1992;
                      v1380 = 0xA3A03F5891C8B4E8uLL;
                    }
                  }
                  if ( (*(_BYTE *)(v1433 + 2 * v1434 + 1) | (unsigned __int8)n) == v2004 )
                  {
                    n = 0;
                  }
                  else
                  {
                    n = 0;
                    if ( !*(_DWORD *)(v18 + 2328) )
                    {
                      *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v18 + 2344) = v1378 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v18 + 2352) = *(int *)v1378;
                      *(_QWORD *)(v18 + 2360) = v1357;
                      *(_DWORD *)(v18 + 2328) = 1;
                      v1443 = *(_DWORD *)(v18 + 2520);
                      if ( (v1443 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1443 & 1) != 0 )
                      {
                        v1444 = *(unsigned int *)(v18 + 2676);
                        v1445 = *(_QWORD *)(v18 + 2104);
                        v1378 = *(_QWORD *)(v18 + 2680);
                        v1379 = (int *)(v1444 + v18);
                        v1380 = v1444
                              + v18
                              + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1444) >> 3);
                        while ( v1379 != (int *)v1380 )
                        {
                          *(_QWORD *)v1379 ^= v1378;
                          v1378 = ((v1445 ^ *(_QWORD *)v1379) + __ROR8__(v1378, v1378 & 0x3F)) ^ 0xF05;
                          v1379 += 2;
                        }
                        *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                        if ( v1378 != *(_QWORD *)(v18 + 2688) )
                        {
                          v1446 = *(_DWORD *)(v18 + 2052);
                          v1447 = *(_QWORD *)(v18 + 1416);
                          *(_QWORD *)v1447 = v18;
                          *(_DWORD *)(v1447 + 16) = v1446;
                          if ( !*(_DWORD *)(v18 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1378 ^ *(_QWORD *)(v18 + 2688);
                          sub_140C7F03C(v18, 0LL, v1378, 256LL);
                        }
                      }
                    }
                  }
                  if ( v1357 != *(_QWORD *)(v18 + 1240) )
                  {
                    v1448 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v18 + 992))(
                                                  v1357,
                                                  1LL,
                                                  v1378,
                                                  v1380);
                    v1449 = v1448;
                    if ( v1448 )
                    {
                      v1450 = *v1448;
                      v1398 = v1448;
                      if ( *v1448 )
                      {
                        v1451 = v2179;
                        v1452 = v2002;
                        v1996 = (unsigned int *)v1448;
                        do
                        {
                          *v1449 = v1450 & 0xFFFFFFFFFFFFFFFCuLL;
                          (*(void (**)(void))(v18 + 496))();
                          v1453 = v2004;
                          v1454 = v1449[1] & 0xFFFFFFFFFFFF0000uLL;
                          if ( (unsigned int *)v1454 == v1452 )
                            v1453 = v1451;
                          v1455 = v1449[1] >> 6;
                          LOBYTE(v1455) = v1455 & 0xF;
                          if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v18 + 1024))(v1455, v1453) )
                          {
                            if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                            {
                              v1456 = *(_QWORD **)(v18 + 2760);
                              v1457 = 48;
                              v1458 = 6LL;
                              do
                              {
                                v1457 -= 8;
                                *v1456 = *(_QWORD *)v38;
                                v38 += 8;
                                ++v1456;
                                --v1458;
                              }
                              while ( v1458 );
                              if ( v1457 )
                              {
                                do
                                {
                                  v1459 = *v38++;
                                  *(_BYTE *)v1456 = v1459;
                                  v1456 = (_QWORD *)((char *)v1456 + 1);
                                  --v1457;
                                }
                                while ( v1457 );
                                v1451 = v2179;
                              }
                              v38 = *(char **)(v18 + 2760);
                            }
                            *((_QWORD *)v38 + 3) = v1454;
                            *((_QWORD *)v38 + 4) = *v1449;
                            v38[40] = ((unsigned __int64)*((unsigned int *)v1449 + 2) >> 6) & 0xF;
                            if ( !*(_DWORD *)(v18 + 2328) )
                            {
                              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v18 + 2352) = *(int *)v38;
                              *(_QWORD *)(v18 + 2360) = v1357;
                              *(_DWORD *)(v18 + 2328) = 1;
                              v1460 = *(_DWORD *)(v18 + 2520);
                              if ( (v1460 & 0x20000000) == 0
                                && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0
                                && (v1460 & 1) != 0 )
                              {
                                v1461 = *(unsigned int *)(v18 + 2676);
                                v1462 = *(_QWORD *)(v18 + 2104);
                                v1463 = *(_QWORD *)(v18 + 2680);
                                v1464 = (_QWORD *)(v1461 + v18);
                                v1465 = v1461
                                      + v18
                                      + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1461) >> 3);
                                while ( v1464 != (_QWORD *)v1465 )
                                {
                                  *v1464 ^= v1463;
                                  v1463 = ((v1462 ^ *v1464++) + __ROR8__(v1463, v1463 & 0x3F)) ^ 0xF05;
                                }
                                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                                if ( v1463 != *(_QWORD *)(v18 + 2688) )
                                {
                                  v1466 = *(_DWORD *)(v18 + 2052);
                                  v1467 = *(_QWORD *)(v18 + 1416);
                                  *(_QWORD *)v1467 = v18;
                                  *(_DWORD *)(v1467 + 16) = v1466;
                                  if ( !*(_DWORD *)(v18 + 2328) )
                                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1463 ^ *(_QWORD *)(v18 + 2688);
                                  sub_140C7F03C(v18, 0LL, v1463, 256LL);
                                }
                              }
                            }
                          }
                          v1449 += 6;
                          v1450 = *v1449;
                        }
                        while ( *v1449 );
LABEL_2162:
                        v1398 = (unsigned __int64 *)v1996;
                        n = 0;
                      }
LABEL_2163:
                      (*(void (__fastcall **)(unsigned __int64 *))(v18 + 264))(v1398);
                    }
                  }
LABEL_2164:
                  (*(void (__fastcall **)(__int64, int *, __int64, unsigned __int64))(v18 + 944))(
                    v1357,
                    v1379,
                    v1378,
                    v1380);
                  v1355 = v1995;
                  *(_DWORD *)(v18 + 2120) += 0x8000;
                  v1349 = v1993;
                }
LABEL_2165:
                v38 = v1992;
              }
              v1468 = *(__int64 (__fastcall **)(_QWORD))(v18 + 952);
              LODWORD(v1995) = ++v1355;
              v1357 = v1468(v1357);
              if ( !v1357 )
                goto LABEL_2167;
            }
            if ( (*(int (__fastcall **)(__int64))(v18 + 936))(v1357) < 0 )
              goto LABEL_2165;
            v1358 = (*(unsigned __int8 (__fastcall **)(__int64))(v18 + 1000))(v1357);
            v2178 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v18 + 1008))(v1357, &v2003);
            v2002 = (unsigned int *)(*(__int64 (__fastcall **)(__int64))(v18 + 1016))(v1357);
            if ( (_BYTE)v1358 == 97
              || *(_DWORD *)(v18 + 2328)
              || (*(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = (unsigned int)v1358 ^ 0x61LL, *(_DWORD *)(v18 + 2328)) )
            {
LABEL_2008:
              v1359 = (int *)v1992;
            }
            else
            {
              v1359 = (int *)v1992;
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v1359 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v1359;
              *(_QWORD *)(v18 + 2360) = v1357;
              *(_DWORD *)(v18 + 2328) = 1;
              v1360 = *(_DWORD *)(v18 + 2520);
              if ( (v1360 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1360 & 1) != 0 )
              {
                v1361 = *(unsigned int *)(v18 + 2676);
                v1362 = *(_QWORD *)(v18 + 2104);
                v1363 = *(_QWORD *)(v18 + 2680);
                v1364 = (_QWORD *)(v1361 + v18);
                v1365 = v1361 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1361) >> 3);
                while ( v1364 != (_QWORD *)v1365 )
                {
                  *v1364 ^= v1363;
                  v1363 = ((v1362 ^ *v1364++) + __ROR8__(v1363, v1363 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v1363 != *(_QWORD *)(v18 + 2688) )
                {
                  v1366 = *(_DWORD *)(v18 + 2052);
                  v1367 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v1367 = v18;
                  *(_DWORD *)(v1367 + 16) = v1366;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1363 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v1363, 256LL);
                }
                goto LABEL_2008;
              }
            }
            v1368 = 0;
            if ( (v1358 & 7) == 1 )
            {
              v1368 = 48;
            }
            else if ( (v1358 & 7) == 2 )
            {
              v1368 = 16;
              LOBYTE(n) = 16;
            }
            else if ( (v1358 & 7) != 0 && !*(_DWORD *)(v18 + 2328) )
            {
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v1359 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v1359;
              *(_QWORD *)(v18 + 2360) = v1357;
              *(_DWORD *)(v18 + 2328) = 1;
              v1369 = *(_DWORD *)(v18 + 2520);
              if ( (v1369 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1369 & 1) != 0 )
              {
                v1370 = *(unsigned int *)(v18 + 2676);
                v1371 = *(_QWORD *)(v18 + 2104);
                v1372 = *(_QWORD *)(v18 + 2680);
                v1373 = (_QWORD *)(v1370 + v18);
                v1374 = v1370 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1370) >> 3);
                while ( v1373 != (_QWORD *)v1374 )
                {
                  *v1373 ^= v1372;
                  v1372 = ((v1371 ^ *v1373++) + __ROR8__(v1372, v1372 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v1372 != *(_QWORD *)(v18 + 2688) )
                {
                  v1375 = *(_DWORD *)(v18 + 2052);
                  v1376 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v1376 = v18;
                  *(_DWORD *)(v1376 + 16) = v1375;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1372 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v1372, 256LL);
                }
              }
            }
            v1377 = *(_QWORD *)(v18 + 1472);
            v1378 = 0xA3A03F5891C8B4E8uLL;
            v1379 = (int *)v1992;
            v1380 = 0xB3B74BDEE4453415uLL;
            v1381 = v1358 >> 4;
            if ( (*(_BYTE *)(v1377 + 2 * v1381) | (unsigned __int8)v1368) != v2178 && !*(_DWORD *)(v18 + 2328) )
            {
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v1379 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v1379;
              *(_QWORD *)(v18 + 2360) = v1357;
              *(_DWORD *)(v18 + 2328) = 1;
              v1382 = *(_DWORD *)(v18 + 2520);
              if ( (v1382 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1382 & 1) != 0 )
              {
                v1383 = *(unsigned int *)(v18 + 2676);
                v1384 = *(_QWORD *)(v18 + 2104);
                v1385 = *(_QWORD *)(v18 + 2680);
                v1386 = (_QWORD *)(v1383 + v18);
                v1387 = v1383 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1383) >> 3);
                while ( v1386 != (_QWORD *)v1387 )
                {
                  *v1386 ^= v1385;
                  v1385 = ((v1384 ^ *v1386++) + __ROR8__(v1385, v1385 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v1385 != *(_QWORD *)(v18 + 2688) )
                {
                  v1388 = *(_DWORD *)(v18 + 2052);
                  v1389 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v1389 = v18;
                  *(_DWORD *)(v1389 + 16) = v1388;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1385 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v1385, 256LL);
                }
                v1379 = (int *)v1992;
                v1380 = 0xB3B74BDEE4453415uLL;
                v1378 = 0xA3A03F5891C8B4E8uLL;
              }
            }
            if ( (*(_BYTE *)(v1377 + 2 * v1381 + 1) | (unsigned __int8)n) == v2003 )
            {
              n = 0;
            }
            else
            {
              n = 0;
              if ( !*(_DWORD *)(v18 + 2328) )
              {
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = (char *)v1379 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *v1379;
                *(_QWORD *)(v18 + 2360) = v1357;
                *(_DWORD *)(v18 + 2328) = 1;
                v1390 = *(_DWORD *)(v18 + 2520);
                if ( (v1390 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1390 & 1) != 0 )
                {
                  v1391 = *(unsigned int *)(v18 + 2676);
                  v1392 = *(_QWORD *)(v18 + 2104);
                  v1378 = *(_QWORD *)(v18 + 2680);
                  v1379 = (int *)(v1391 + v18);
                  v1380 = v1391 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1391) >> 3);
                  while ( v1379 != (int *)v1380 )
                  {
                    *(_QWORD *)v1379 ^= v1378;
                    v1378 = ((v1392 ^ *(_QWORD *)v1379) + __ROR8__(v1378, v1378 & 0x3F)) ^ 0xF05;
                    v1379 += 2;
                  }
                  *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                  if ( v1378 != *(_QWORD *)(v18 + 2688) )
                  {
                    v1393 = *(_DWORD *)(v18 + 2052);
                    v1394 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v1394 = v18;
                    *(_DWORD *)(v1394 + 16) = v1393;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1378 ^ *(_QWORD *)(v18 + 2688);
                    sub_140C7F03C(v18, 0LL, v1378, 256LL);
                  }
                }
              }
            }
            if ( v1357 != *(_QWORD *)(v18 + 1240) )
            {
              v1395 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v18 + 992))(
                                            v1357,
                                            1LL,
                                            v1378,
                                            v1380);
              v1396 = v1395;
              if ( v1395 )
              {
                v1397 = *v1395;
                v1398 = v1395;
                if ( *v1395 )
                {
                  v1399 = v2178;
                  v1400 = v2002;
                  v1996 = (unsigned int *)v1395;
                  do
                  {
                    *v1396 = v1397 & 0xFFFFFFFFFFFFFFFCuLL;
                    (*(void (**)(void))(v18 + 496))();
                    v1401 = v2003;
                    v1402 = v1396[1] & 0xFFFFFFFFFFFF0000uLL;
                    if ( (unsigned int *)v1402 == v1400 )
                      v1401 = v1399;
                    v1403 = v1396[1] >> 6;
                    LOBYTE(v1403) = v1403 & 0xF;
                    if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v18 + 1024))(v1403, v1401) )
                    {
                      if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                      {
                        v1404 = *(_QWORD **)(v18 + 2760);
                        v1405 = 48;
                        v1406 = 6LL;
                        do
                        {
                          v1405 -= 8;
                          *v1404 = *(_QWORD *)v38;
                          v38 += 8;
                          ++v1404;
                          --v1406;
                        }
                        while ( v1406 );
                        if ( v1405 )
                        {
                          do
                          {
                            v1407 = *v38++;
                            *(_BYTE *)v1404 = v1407;
                            v1404 = (_QWORD *)((char *)v1404 + 1);
                            --v1405;
                          }
                          while ( v1405 );
                          v1399 = v2178;
                        }
                        v38 = *(char **)(v18 + 2760);
                      }
                      *((_QWORD *)v38 + 3) = v1402;
                      *((_QWORD *)v38 + 4) = *v1396;
                      v38[40] = ((unsigned __int64)*((unsigned int *)v1396 + 2) >> 6) & 0xF;
                      if ( !*(_DWORD *)(v18 + 2328) )
                      {
                        *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v18 + 2352) = *(int *)v38;
                        *(_QWORD *)(v18 + 2360) = v1357;
                        *(_DWORD *)(v18 + 2328) = 1;
                        v1408 = *(_DWORD *)(v18 + 2520);
                        if ( (v1408 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1408 & 1) != 0 )
                        {
                          v1409 = *(unsigned int *)(v18 + 2676);
                          v1410 = *(_QWORD *)(v18 + 2104);
                          v1411 = *(_QWORD *)(v18 + 2680);
                          v1412 = (_QWORD *)(v1409 + v18);
                          v1413 = v1409
                                + v18
                                + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1409) >> 3);
                          while ( v1412 != (_QWORD *)v1413 )
                          {
                            *v1412 ^= v1411;
                            v1411 = ((v1410 ^ *v1412++) + __ROR8__(v1411, v1411 & 0x3F)) ^ 0xF05;
                          }
                          *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                          if ( v1411 != *(_QWORD *)(v18 + 2688) )
                          {
                            v1414 = *(_DWORD *)(v18 + 2052);
                            v1415 = *(_QWORD *)(v18 + 1416);
                            *(_QWORD *)v1415 = v18;
                            *(_DWORD *)(v1415 + 16) = v1414;
                            if ( !*(_DWORD *)(v18 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1411 ^ *(_QWORD *)(v18 + 2688);
                            sub_140C7F03C(v18, 0LL, v1411, 256LL);
                          }
                        }
                      }
                    }
                    v1396 += 6;
                    v1397 = *v1396;
                  }
                  while ( *v1396 );
                  goto LABEL_2162;
                }
                goto LABEL_2163;
              }
            }
            goto LABEL_2164;
          }
LABEL_2167:
          v1469 = *(_QWORD *)(v18 + 1240);
          if ( (*(int (__fastcall **)(__int64))(v18 + 936))(v1469) >= 0 )
          {
            v1470 = (*(unsigned __int8 (__fastcall **)(__int64))(v18 + 1000))(v1469);
            v2180 = (*(__int64 (__fastcall **)(__int64, char *))(v18 + 1008))(v1469, v2005);
            v2002 = (unsigned int *)(*(__int64 (__fastcall **)(__int64))(v18 + 1016))(v1469);
            if ( (_BYTE)v1470 == 114 )
              goto LABEL_2181;
            if ( *(_DWORD *)(v18 + 2328) )
              goto LABEL_2181;
            *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = (unsigned int)v1470 ^ 0x72LL;
            if ( *(_DWORD *)(v18 + 2328) )
              goto LABEL_2181;
            v1471 = (int *)v1992;
            *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2344) = (char *)v1471 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2352) = *v1471;
            *(_QWORD *)(v18 + 2360) = v1469;
            *(_DWORD *)(v18 + 2328) = 1;
            v1472 = *(_DWORD *)(v18 + 2520);
            if ( (v1472 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1472 & 1) != 0 )
            {
              v1473 = *(unsigned int *)(v18 + 2676);
              v1474 = *(_QWORD *)(v18 + 2104);
              v1475 = *(_QWORD *)(v18 + 2680);
              v1476 = (_QWORD *)(v1473 + v18);
              v1477 = v1473 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1473) >> 3);
              while ( v1476 != (_QWORD *)v1477 )
              {
                *v1476 ^= v1475;
                v1475 = ((v1474 ^ *v1476++) + __ROR8__(v1475, v1475 & 0x3F)) ^ 0xF05;
              }
              *(_DWORD *)(v18 + 2524) &= ~0x200000u;
              if ( v1475 != *(_QWORD *)(v18 + 2688) )
              {
                v1478 = *(_DWORD *)(v18 + 2052);
                v1479 = *(_QWORD *)(v18 + 1416);
                *(_QWORD *)v1479 = v18;
                *(_DWORD *)(v1479 + 16) = v1478;
                if ( !*(_DWORD *)(v18 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1475 ^ *(_QWORD *)(v18 + 2688);
                sub_140C7F03C(v18, 0LL, v1475, 256LL);
              }
LABEL_2181:
              v1471 = (int *)v1992;
            }
            v1480 = 0;
            if ( (v1470 & 7) == 1 )
            {
              v1480 = 48;
            }
            else if ( (v1470 & 7) == 2 )
            {
              v1480 = 16;
              LOBYTE(n) = 16;
            }
            else if ( (v1470 & 7) != 0 && !*(_DWORD *)(v18 + 2328) )
            {
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v1471 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v1471;
              *(_QWORD *)(v18 + 2360) = v1469;
              *(_DWORD *)(v18 + 2328) = 1;
              v1481 = *(_DWORD *)(v18 + 2520);
              if ( (v1481 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1481 & 1) != 0 )
              {
                v1482 = *(unsigned int *)(v18 + 2676);
                v1483 = *(_QWORD *)(v18 + 2104);
                v1484 = *(_QWORD *)(v18 + 2680);
                v1485 = (_QWORD *)(v1482 + v18);
                v1486 = v1482 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1482) >> 3);
                while ( v1485 != (_QWORD *)v1486 )
                {
                  *v1485 ^= v1484;
                  v1484 = ((v1483 ^ *v1485++) + __ROR8__(v1484, v1484 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v1484 != *(_QWORD *)(v18 + 2688) )
                {
                  v1487 = *(_DWORD *)(v18 + 2052);
                  v1488 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v1488 = v18;
                  *(_DWORD *)(v1488 + 16) = v1487;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1484 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v1484, 256LL);
                }
              }
            }
            v1489 = *(_QWORD *)(v18 + 1472);
            v1490 = 0xA3A03F5891C8B4E8uLL;
            v1491 = (int *)v1992;
            v1492 = 0xB3B74BDEE4453415uLL;
            v1493 = v1470 >> 4;
            if ( (*(_BYTE *)(v1489 + 2 * v1493) | (unsigned __int8)v1480) != v2180 && !*(_DWORD *)(v18 + 2328) )
            {
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v1491 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v1491;
              *(_QWORD *)(v18 + 2360) = v1469;
              *(_DWORD *)(v18 + 2328) = 1;
              v1494 = *(_DWORD *)(v18 + 2520);
              if ( (v1494 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1494 & 1) != 0 )
              {
                v1495 = *(unsigned int *)(v18 + 2676);
                v1496 = *(_QWORD *)(v18 + 2104);
                v1497 = *(_QWORD *)(v18 + 2680);
                v1498 = (_QWORD *)(v1495 + v18);
                v1499 = v1495 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1495) >> 3);
                while ( v1498 != (_QWORD *)v1499 )
                {
                  *v1498 ^= v1497;
                  v1497 = ((v1496 ^ *v1498++) + __ROR8__(v1497, v1497 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v1497 != *(_QWORD *)(v18 + 2688) )
                {
                  v1500 = *(_DWORD *)(v18 + 2052);
                  v1501 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v1501 = v18;
                  *(_DWORD *)(v1501 + 16) = v1500;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1497 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v1497, 256LL);
                }
                v1491 = (int *)v1992;
                v1492 = 0xB3B74BDEE4453415uLL;
                v1490 = 0xA3A03F5891C8B4E8uLL;
              }
            }
            if ( (*(_BYTE *)(v1489 + 2 * v1493 + 1) | (unsigned __int8)n) == v2005[0] )
            {
              n = 0;
            }
            else
            {
              n = 0;
              if ( !*(_DWORD *)(v18 + 2328) )
              {
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = (char *)v1491 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *v1491;
                *(_QWORD *)(v18 + 2360) = v1469;
                *(_DWORD *)(v18 + 2328) = 1;
                v1502 = *(_DWORD *)(v18 + 2520);
                if ( (v1502 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1502 & 1) != 0 )
                {
                  v1503 = *(unsigned int *)(v18 + 2676);
                  v1504 = *(_QWORD *)(v18 + 2104);
                  v1490 = *(_QWORD *)(v18 + 2680);
                  v1491 = (int *)(v1503 + v18);
                  v1492 = v1503 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1503) >> 3);
                  while ( v1491 != (int *)v1492 )
                  {
                    *(_QWORD *)v1491 ^= v1490;
                    v1490 = ((v1504 ^ *(_QWORD *)v1491) + __ROR8__(v1490, v1490 & 0x3F)) ^ 0xF05;
                    v1491 += 2;
                  }
                  *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                  if ( v1490 != *(_QWORD *)(v18 + 2688) )
                  {
                    v1505 = *(_DWORD *)(v18 + 2052);
                    v1506 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v1506 = v18;
                    *(_DWORD *)(v1506 + 16) = v1505;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1490 ^ *(_QWORD *)(v18 + 2688);
                    sub_140C7F03C(v18, 0LL, v1490, 256LL);
                  }
                }
              }
            }
            if ( v1469 != *(_QWORD *)(v18 + 1240) )
            {
              v1507 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v18 + 992))(
                                            v1469,
                                            1LL,
                                            v1490,
                                            v1492);
              v1508 = v1507;
              if ( v1507 )
              {
                v1509 = *v1507;
                v1510 = v1507;
                if ( *v1507 )
                {
                  v1511 = v2180;
                  v1512 = v2002;
                  v1513 = v1992;
                  v1996 = (unsigned int *)v1507;
                  do
                  {
                    *v1508 = v1509 & 0xFFFFFFFFFFFFFFFCuLL;
                    (*(void (**)(void))(v18 + 496))();
                    v1514 = (unsigned __int8)v2005[0];
                    v1515 = v1508[1] & 0xFFFFFFFFFFFF0000uLL;
                    if ( (unsigned int *)v1515 == v1512 )
                      v1514 = v1511;
                    v1516 = v1508[1] >> 6;
                    LOBYTE(v1516) = v1516 & 0xF;
                    if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v18 + 1024))(v1516, v1514) )
                    {
                      if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                      {
                        v1517 = *(_QWORD **)(v18 + 2760);
                        v1518 = 48;
                        v1519 = 6LL;
                        do
                        {
                          v1518 -= 8;
                          *v1517 = *(_QWORD *)v1513;
                          v1513 += 8;
                          ++v1517;
                          --v1519;
                        }
                        while ( v1519 );
                        if ( v1518 )
                        {
                          do
                          {
                            v1520 = *v1513++;
                            *(_BYTE *)v1517 = v1520;
                            v1517 = (_QWORD *)((char *)v1517 + 1);
                            --v1518;
                          }
                          while ( v1518 );
                          v1511 = v2180;
                        }
                        v1513 = *(char **)(v18 + 2760);
                      }
                      *((_QWORD *)v1513 + 3) = v1515;
                      *((_QWORD *)v1513 + 4) = *v1508;
                      v1513[40] = ((unsigned __int64)*((unsigned int *)v1508 + 2) >> 6) & 0xF;
                      if ( !*(_DWORD *)(v18 + 2328) )
                      {
                        *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v18 + 2344) = v1513 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v18 + 2352) = *(int *)v1513;
                        *(_QWORD *)(v18 + 2360) = v1469;
                        *(_DWORD *)(v18 + 2328) = 1;
                        v1521 = *(_DWORD *)(v18 + 2520);
                        if ( (v1521 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1521 & 1) != 0 )
                        {
                          v1522 = *(unsigned int *)(v18 + 2676);
                          v1523 = *(_QWORD *)(v18 + 2104);
                          v1524 = *(_QWORD *)(v18 + 2680);
                          v1525 = (_QWORD *)(v1522 + v18);
                          v1526 = v1522
                                + v18
                                + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1522) >> 3);
                          while ( v1525 != (_QWORD *)v1526 )
                          {
                            *v1525 ^= v1524;
                            v1524 = ((v1523 ^ *v1525++) + __ROR8__(v1524, v1524 & 0x3F)) ^ 0xF05;
                          }
                          *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                          if ( v1524 != *(_QWORD *)(v18 + 2688) )
                          {
                            v1527 = *(_DWORD *)(v18 + 2052);
                            v1528 = *(_QWORD *)(v18 + 1416);
                            *(_QWORD *)v1528 = v18;
                            *(_DWORD *)(v1528 + 16) = v1527;
                            if ( !*(_DWORD *)(v18 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1524 ^ *(_QWORD *)(v18 + 2688);
                            sub_140C7F03C(v18, 0LL, v1524, 256LL);
                          }
                        }
                      }
                    }
                    v1508 += 6;
                    v1509 = *v1508;
                  }
                  while ( *v1508 );
                  v1510 = (unsigned __int64 *)v1996;
                  n = 0;
                }
                (*(void (__fastcall **)(unsigned __int64 *))(v18 + 264))(v1510);
              }
            }
            (*(void (__fastcall **)(__int64, int *, __int64, unsigned __int64))(v18 + 944))(v1469, v1491, v1490, v1492);
            v1355 = v1995;
            *(_DWORD *)(v18 + 2120) += 0x8000;
          }
          if ( v1993 )
            (*(void (**)(void))(v18 + 496))();
          v1529 = v1355 << 8;
LABEL_2256:
          *(_DWORD *)(v18 + 2120) += v1529;
          goto LABEL_237;
        }
        if ( v63 == 41 || v63 == 42 )
          goto LABEL_1758;
        if ( v63 != 43 )
        {
          if ( v63 != 44 )
          {
            if ( v63 != 46 )
            {
              if ( v63 == 47 )
              {
                v2014 = *(_QWORD *)(*(_QWORD *)(v18 + 1720)
                                  + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v18 + 1624))
                                  + *(_QWORD *)(v18 + 1688));
                v1706 = (*(__int64 (__fastcall **)(__int64, __int64))(v18 + 1168))(v2014, 1LL);
                if ( v1706 == 0xFFFFFFFFLL )
                {
                  v2014 = 0LL;
                  v1707 = *(_QWORD *)(v18 + 2512);
                  if ( !v1707
                    || ((*(int (__fastcall **)(__int64, __int64 *))(v18 + 1152))(v1707, &v2014) >= 0
                      ? (v1708 = v2014)
                      : (v1708 = 0LL, v2014 = 0LL),
                        !v1708) )
                  {
                    v2014 = (*(__int64 (__fastcall **)(_QWORD))(v18 + 968))(0LL);
                  }
                  *(_QWORD *)(v18 + 2512) = 0LL;
                  v1709 = 0;
                  if ( !v2014 )
                    goto LABEL_2556;
                  while ( 1 )
                  {
                    ++v1709;
                    if ( (*(int (**)(void))(v18 + 936))() >= 0 )
                    {
                      (*(void (__fastcall **)(__int64, _BYTE *))(v18 + 1088))(v2014, v2167);
                      v1706 = (*(__int64 (**)(void))(v18 + 1168))();
                      (*(void (__fastcall **)(_BYTE *))(v18 + 1096))(v2167);
                      (*(void (__fastcall **)(__int64))(v18 + 944))(v2014);
                      if ( v1706 != 0xFFFFFFFFLL || v1709 > 0x100 )
                        break;
                    }
                    v2014 = (*(__int64 (__fastcall **)(__int64))(v18 + 968))(v2014);
                    if ( !v2014 )
                      goto LABEL_2556;
                  }
                  *(_QWORD *)(v18 + 2512) = (*(__int64 (__fastcall **)(__int64))(v18 + 1160))(v2014);
                  (*(void (__fastcall **)(__int64))(v18 + 496))(v2014);
                  if ( v1706 == 0xFFFFFFFFLL )
                  {
LABEL_2556:
                    *(_DWORD *)(v18 + 2120) += v1709 << 12;
                    goto LABEL_289;
                  }
                }
                if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                {
                  v1710 = *(_QWORD **)(v18 + 2760);
                  v1711 = 48;
                  v1712 = 6LL;
                  do
                  {
                    v1711 -= 8;
                    *v1710 = *(_QWORD *)v38;
                    v38 += 8;
                    ++v1710;
                    --v1712;
                  }
                  while ( v1712 );
                  for ( ; v1711; --v1711 )
                  {
                    v1713 = *v38++;
                    *(_BYTE *)v1710 = v1713;
                    v1710 = (_QWORD *)((char *)v1710 + 1);
                  }
                  v38 = *(char **)(v18 + 2760);
                }
                *((_QWORD *)v38 + 3) = v1706;
                v1714 = v2014;
                if ( *(_DWORD *)(v18 + 2328) )
                  goto LABEL_289;
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *(int *)v38;
                *(_QWORD *)(v18 + 2360) = v1714;
                *(_DWORD *)(v18 + 2328) = 1;
                v1715 = *(_DWORD *)(v18 + 2520);
                if ( (v1715 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v1715 & 1) == 0 )
                  goto LABEL_289;
                v1716 = *(unsigned int *)(v18 + 2676);
                v1717 = *(_QWORD *)(v18 + 2104);
                v478 = *(_QWORD *)(v18 + 2680);
                v1718 = (_QWORD *)(v1716 + v18);
                v1719 = v1716 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1716) >> 3);
                while ( v1718 != (_QWORD *)v1719 )
                {
                  *v1718 ^= v478;
                  v478 = ((v1717 ^ *v1718++) + __ROR8__(v478, v478 & 0x3F)) ^ 0xF05;
                }
                goto LABEL_763;
              }
              if ( v63 == 48 )
              {
                if ( !*((_DWORD *)v38 + 4) )
                  goto LABEL_289;
                if ( (*(_DWORD *)(v18 + 2524) & 0x4000) != 0 )
                {
                  v1674 = *(volatile signed __int32 **)(v18 + 1240);
                  while ( 1 )
                  {
                    _disable();
                    if ( !_interlockedbittestandset(v1674, (*(_DWORD *)(v18 + 2520) >> 9) & 0x1F) )
                      break;
                    _enable();
                    _mm_pause();
                  }
                }
                v1675 = (_QWORD *)*((_QWORD *)v38 + 1);
                v1676 = *((unsigned int *)v38 + 4);
                v1677 = v1675;
                *(_DWORD *)(v18 + 2120) += v1676;
                v1678 = (const char *)v1675;
                v1679 = *(_DWORD *)(v18 + 2100);
                v1680 = *(_QWORD *)(v18 + 2104);
                if ( v1675 < (_QWORD *)((char *)v1675 + v1676) )
                {
                  do
                  {
                    _mm_prefetch(v1678, 0);
                    v1678 += 64;
                  }
                  while ( v1678 < (const char *)v1675 + v1676 );
                }
                v1681 = *(_QWORD *)(v18 + 2104);
                v1682 = (unsigned int)v1676 >> 7;
                if ( (unsigned int)v1676 >> 7 )
                {
                  do
                  {
                    v1683 = 8LL;
                    do
                    {
                      v1684 = v1677[1] ^ __ROL8__(*v1677 ^ v1681, v1679);
                      v1677 += 2;
                      v1681 = __ROL8__(v1684, v1679);
                      --v1683;
                    }
                    while ( v1683 );
                    v1685 = (__ROL8__(v1680 ^ ((char *)v1677 - (char *)v1675), 17) ^ v1680 ^ (unsigned __int64)((char *)v1677 - (char *)v1675))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2117 = *((_QWORD *)&v1685 + 1);
                    v1679 = ((unsigned __int8)(v1685 ^ BYTE8(v1685)) ^ (unsigned __int8)v1679) & 0x3F;
                    if ( !v1679 )
                      LOBYTE(v1679) = 1;
                    --v1682;
                  }
                  while ( v1682 );
                  v18 = (__int64)v2001;
                }
                v1686 = v1676 & 0x7F;
                if ( v1686 >= 8 )
                {
                  v1687 = (unsigned __int64)v1686 >> 3;
                  do
                  {
                    v1681 = __ROL8__(*v1677++ ^ v1681, v1679);
                    v1686 -= 8;
                    --v1687;
                  }
                  while ( v1687 );
                }
                for ( ; v1686; --v1686 )
                {
                  v1688 = *(unsigned __int8 *)v1677;
                  v1677 = (_QWORD *)((char *)v1677 + 1);
                  v1681 = __ROL8__(v1688 ^ v1681, v1679);
                }
                for ( k = v1681; ; LODWORD(v1681) = k ^ v1681 )
                {
                  k >>= 31;
                  if ( !k )
                    break;
                }
                v1690 = v1681 & 0x7FFFFFFF;
                if ( v1690 == *((_DWORD *)v38 + 5) )
                {
                  n = 0;
LABEL_2524:
                  if ( (*(_DWORD *)(v18 + 2524) & 0x4000) != 0 )
                  {
                    _InterlockedAnd(
                      *(volatile signed __int32 **)(v18 + 1240),
                      ~(1 << ((*(_DWORD *)(v18 + 2520) >> 9) & 0x1F)));
                    _enable();
                  }
                  goto LABEL_2486;
                }
                if ( !*(_DWORD *)v38 && *((_DWORD *)v38 + 6) )
                  n = 1;
                v1691 = *((_QWORD *)v38 + 1);
                if ( !*((_DWORD *)v38 + 4) || (v1692 = 64LL, (*(_DWORD *)(v18 + 2524) & 0x40) == 0) )
                {
LABEL_2528:
                  n = 0;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1690 ^ (unsigned __int64)*((unsigned int *)v38 + 5);
                  v1697 = *((_QWORD *)v38 + 1);
                  if ( !*(_DWORD *)(v18 + 2328) )
                  {
                    *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2352) = *(int *)v38;
                    *(_QWORD *)(v18 + 2360) = v1697;
                    *(_DWORD *)(v18 + 2328) = 1;
                    v1698 = *(_DWORD *)(v18 + 2520);
                    if ( (v1698 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1698 & 1) != 0 )
                    {
                      v1699 = *(unsigned int *)(v18 + 2676);
                      v1700 = *(_QWORD *)(v18 + 2104);
                      v1701 = *(_QWORD *)(v18 + 2680);
                      v1702 = (_QWORD *)(v1699 + v18);
                      v1703 = v1699 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1699) >> 3);
                      while ( v1702 != (_QWORD *)v1703 )
                      {
                        *v1702 ^= v1701;
                        v1701 = ((v1700 ^ *v1702++) + __ROR8__(v1701, v1701 & 0x3F)) ^ 0xF05;
                      }
                      *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                      if ( v1701 != *(_QWORD *)(v18 + 2688) )
                      {
                        v1704 = *(_DWORD *)(v18 + 2052);
                        v1705 = *(_QWORD *)(v18 + 1416);
                        *(_QWORD *)v1705 = v18;
                        *(_DWORD *)(v1705 + 16) = v1704;
                        if ( !*(_DWORD *)(v18 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1701 ^ *(_QWORD *)(v18 + 2688);
                        sub_140C7F03C(v18, 0LL, v1701, 256LL);
                      }
                    }
                  }
                  goto LABEL_2524;
                }
                v1693 = KeGetCurrentIrql();
                v1694 = v1691 & 0xFFFFFFFFFFFFF000uLL;
                v2002 = (unsigned int *)((v1691 + *((unsigned int *)v38 + 4) - 1LL) | 0xFFF);
                v1695 = (v1691 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_2516:
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1696 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                            v1694,
                            0LL,
                            v1692,
                            v1677);
                  if ( v1696 == -1073741267 )
                  {
                    if ( n )
                      goto LABEL_2527;
                    if ( v1693 <= 1u )
                    {
                      __writecr8(v1693);
                      goto LABEL_2516;
                    }
                  }
                  else if ( v1696 < 0 )
                  {
LABEL_2527:
                    __writecr8(v1693);
                    v38 = v1992;
                    goto LABEL_2528;
                  }
                  v1694 += 4096LL;
                  v1695 += 4096LL;
                  if ( (unsigned int *)v1695 == v2002 )
                  {
                    __writecr8(v1693);
                    n = 0;
                    goto LABEL_2524;
                  }
                }
              }
              goto LABEL_2264;
            }
            if ( (*(_DWORD *)(v18 + 2128) & 1) != 0 )
              goto LABEL_289;
            v1720 = 0;
            v1721 = *(_QWORD *)(v18 + 1344);
            (*(void (__fastcall **)(_QWORD, __int64))(v18 + 392))((unsigned int)(v63 - 46), 1LL);
            if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 || (v1722 = *(_DWORD *)(v18 + 2424), v1722 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 312))(*(_QWORD *)(v18 + 2632), 0LL);
              v1723 = 0x80;
            }
            else
            {
              v1723 = 1 << v1722;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v18 + 328))(v1721, 0LL);
            if ( v1723 == (char)0x80 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 320))(*(_QWORD *)(v18 + 2632), 0LL);
            }
            else
            {
              v1724 = *(volatile signed __int8 ***)(v18 + 1304);
              v1725 = *v1724;
              if ( *v1724 != (volatile signed __int8 *)v1724 )
              {
                v1726 = ~v1723;
                do
                {
                  _InterlockedAnd8(&v1725[*(_QWORD *)(v18 + 1736) - *(_QWORD *)(v18 + 1760)], v1726);
                  v1725 = *(volatile signed __int8 **)v1725;
                  ++v1720;
                }
                while ( v1725 != (volatile signed __int8 *)v1724 );
              }
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 336))(*(_QWORD *)(v18 + 1344), 0LL);
            (*(void (**)(void))(v18 + 400))();
            v1529 = v1720 << 7;
            goto LABEL_2256;
          }
          v1727 = (_QWORD *)*((_QWORD *)v38 + 1);
          v1728 = v18;
          v1729 = *((unsigned int *)v38 + 4);
          v1730 = v1727;
          *(_DWORD *)(v18 + 2120) += v1729;
          v1731 = (const char *)v1727;
          v1732 = *(_DWORD *)(v18 + 2100);
          v1733 = *(_QWORD *)(v18 + 2104);
          if ( v1727 < (_QWORD *)((char *)v1727 + v1729) )
          {
            do
            {
              _mm_prefetch(v1731, 0);
              v1731 += 64;
            }
            while ( v1731 < (const char *)v1727 + v1729 );
          }
          v1734 = *(_QWORD *)(v18 + 2104);
          for ( m = (unsigned int)v1729 >> 7; m; --m )
          {
            v1736 = 8LL;
            do
            {
              v1737 = v1730[1] ^ __ROL8__(*v1730 ^ v1734, v1732);
              v1730 += 2;
              v1734 = __ROL8__(v1737, v1732);
              --v1736;
            }
            while ( v1736 );
            v1738 = (__ROL8__(v1733 ^ ((char *)v1730 - (char *)v1727), 17) ^ v1733 ^ (unsigned __int64)((char *)v1730 - (char *)v1727))
                  * (unsigned __int128)0x7010008004002001uLL;
            v2118 = *((_QWORD *)&v1738 + 1);
            v1732 = ((unsigned __int8)(v1738 ^ BYTE8(v1738)) ^ (unsigned __int8)v1732) & 0x3F;
            if ( !v1732 )
              LOBYTE(v1732) = 1;
          }
          v1739 = v1729 & 0x7F;
          if ( (unsigned int)v1739 >= 8 )
          {
            v1740 = (unsigned __int64)(unsigned int)v1739 >> 3;
            do
            {
              v1734 = __ROL8__(*v1730++ ^ v1734, v1732);
              v1739 = (unsigned int)(v1739 - 8);
              --v1740;
            }
            while ( v1740 );
          }
          for ( n = 0; (_DWORD)v1739; v1739 = (unsigned int)(v1739 - 1) )
          {
            v1741 = *(unsigned __int8 *)v1730;
            v1730 = (_QWORD *)((char *)v1730 + 1);
            v1734 = __ROL8__(v1741 ^ v1734, v1732);
          }
          for ( ii = v1734; ; LODWORD(v1734) = ii ^ v1734 )
          {
            ii >>= 31;
            if ( !ii )
              break;
          }
          v1743 = (int *)v1992;
          v1744 = v1734 & 0x7FFFFFFF;
          v1745 = 0;
          if ( v1744 != *((_DWORD *)v1992 + 5) )
          {
            if ( !*(_DWORD *)v1992 )
              v1745 = *((_DWORD *)v1992 + 6) != 0;
            v1746 = *((_QWORD *)v1992 + 1);
            if ( *((_DWORD *)v1992 + 4) )
            {
              v1739 = 64LL;
              if ( (*(_DWORD *)(v18 + 2524) & 0x40) != 0 )
              {
                v1747 = KeGetCurrentIrql();
                v1748 = v1746 & 0xFFFFFFFFFFFFF000uLL;
                v2002 = (unsigned int *)((v1746 + *((unsigned int *)v1992 + 4) - 1LL) | 0xFFF);
                v1993 = (v1746 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v1749 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                              v1748,
                              0LL,
                              v1739,
                              v1730);
                    if ( v1749 == -1073741267 )
                      break;
                    if ( v1749 < 0 )
                    {
LABEL_2631:
                      __writecr8(v1747);
                      v1743 = (int *)v1992;
                      n = 0;
                      goto LABEL_2632;
                    }
LABEL_2611:
                    v1748 += 4096LL;
                    v1993 += 4096LL;
                    if ( (unsigned int *)v1993 == v2002 )
                    {
                      __writecr8(v1747);
                      v1743 = (int *)v1992;
                      n = 0;
                      goto LABEL_2613;
                    }
                  }
                  if ( v1745 )
                    goto LABEL_2631;
                  if ( v1747 > 1u )
                    goto LABEL_2611;
                  __writecr8(v1747);
                }
              }
            }
LABEL_2632:
            if ( !*(_DWORD *)(v18 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = (unsigned int)v1743[5] ^ (unsigned __int64)v1744;
            v1763 = *((_QWORD *)v1743 + 1);
            if ( !*(_DWORD *)(v18 + 2328) )
            {
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v1743 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v1743;
              *(_QWORD *)(v18 + 2360) = v1763;
              *(_DWORD *)(v18 + 2328) = 1;
              v1764 = *(_DWORD *)(v18 + 2520);
              if ( (v1764 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1764 & 1) != 0 )
              {
                v1765 = *(unsigned int *)(v18 + 2676);
                v1766 = *(_QWORD *)(v18 + 2104);
                v1739 = *(_QWORD *)(v18 + 2680);
                v1767 = (_QWORD *)(v1765 + v18);
                v1730 = (_QWORD *)(v1765
                                 + v18
                                 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1765) >> 3));
                while ( v1767 != v1730 )
                {
                  *v1767 ^= v1739;
                  v1739 = ((v1766 ^ *v1767++) + __ROR8__(v1739, v1739 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v1739 != *(_QWORD *)(v18 + 2688) )
                {
                  v1768 = *(_DWORD *)(v18 + 2052);
                  v1769 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v1769 = v18;
                  *(_DWORD *)(v1769 + 16) = v1768;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1739 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v1739, 256LL);
                }
              }
            }
          }
LABEL_2613:
          if ( (v1743[8] & 1) == 0 )
            goto LABEL_2901;
          v1750 = (unsigned int *)*((_QWORD *)v1743 + 3);
          v1751 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v18 + 520);
          v2002 = v1750;
          v1752 = v1751(v1750, 1LL, v1739, v1730);
          v1753 = (_DWORD *)(v1752 + *(unsigned __int16 *)(v1752 + 20) + 24LL);
          v1993 = (__int64)&v1753[10 * *(unsigned __int16 *)(v1752 + 6)];
          if ( v1753 == (_DWORD *)v1993 )
            goto LABEL_237;
          v1754 = *(_DWORD *)(v18 + 2116);
          if ( !v1754 )
          {
            *(_DWORD *)(v18 + 2116) = 4096;
            v1754 = 4096;
          }
          if ( v1750 == *(unsigned int **)(v18 + 1504) || (v2182 = 0, v1750 == *(unsigned int **)(v18 + 1512)) )
            v2182 = 1;
          v1755 = v2182;
          while ( 2 )
          {
            v1756 = v1753[4];
            v2183 = v1753[3];
            if ( v1756 <= v1753[2] )
              v1756 = v1753[2];
            v1757 = (v1756 + v1753[3] + 4095) & 0xFFFFF000;
            LODWORD(v1995) = v1757;
            if ( v1754 >= v1757 )
              goto LABEL_2651;
            if ( (v1753[9] & 0x2000000) != 0 )
              goto LABEL_2650;
            v1758 = *v1753;
            if ( *v1753 == 1414090313 )
            {
              if ( v1753[1] == 1195525195 )
                goto LABEL_2650;
              goto LABEL_2627;
            }
            if ( v1758 == 1162297680 )
            {
              v1770 = *((_WORD *)v1753 + 2);
              if ( v1770 == 30839 || v1770 == 29303 || v1770 == 30583 )
                goto LABEL_2650;
            }
            else
            {
LABEL_2627:
              if ( v1758 == 1095914053 && *((_WORD *)v1753 + 2) == 16724 )
                goto LABEL_2650;
            }
            if ( v1728 )
            {
              v1759 = *(char **)(v1728 + 2384);
              v1760 = *(char **)(v1728 + 2392);
              v1761 = *(char **)(v1728 + 2400);
              v1762 = *(char **)(v1728 + 2408);
            }
            else
            {
              v1759 = VfExcludeSections[0];
              v1760 = off_140E0A060[0];
              v1761 = off_140E0A068[0];
              v1762 = off_140E0A070;
            }
            v1772 = 7;
            v1773 = (char *)v1753;
            while ( 1 )
            {
              v1774 = *v1773++;
              v1775 = *v1759++;
              if ( v1774 != v1775 )
                break;
              if ( !--v1772 )
                goto LABEL_2650;
            }
            v1776 = 8;
            v1777 = (char *)v1753;
            do
            {
              v1778 = *(_QWORD *)v1777;
              v1777 += 8;
              v1779 = *(_QWORD *)v1760;
              v1760 += 8;
              if ( v1778 != v1779 )
                goto LABEL_2668;
              v1776 -= 8;
            }
            while ( v1776 >= 8 );
            if ( !v1776 )
              goto LABEL_2650;
            while ( 1 )
            {
              v1780 = *v1777++;
              v1781 = *v1760++;
              if ( v1780 != v1781 )
                break;
              if ( !--v1776 )
                goto LABEL_2650;
            }
LABEL_2668:
            v1782 = 4;
            v1783 = (char *)v1753;
            while ( 1 )
            {
              v1784 = *v1783++;
              v1785 = *v1761++;
              if ( v1784 != v1785 )
                break;
              if ( !--v1782 )
                goto LABEL_2650;
            }
            v1786 = 6;
            v1787 = (char *)v1753;
            while ( 1 )
            {
              v1788 = *v1787++;
              v1789 = *v1762++;
              if ( v1788 != v1789 )
                break;
              if ( !--v1786 )
                goto LABEL_2650;
            }
            v1790 = v1753[9];
            if ( v1790 < 0 || (v1790 & 0x20000000) == 0 )
            {
LABEL_2650:
              v1754 = v1757;
LABEL_2651:
              v1771 = v1757;
              goto LABEL_2652;
            }
            v1791 = 1;
            if ( v1755 && *v1753 != 778396769 )
              v1791 = *v1753 == 1162297680;
            if ( v1754 < v2183 )
              v1754 = v2183;
LABEL_2683:
            v1792 = (unsigned __int64)v2002 + v1754;
            if ( (*(_BYTE *)(v1728 + 2203) & 4) != 0 )
            {
              __asm { xbegin  $+6 }
              __asm { xend }
              ++*(_DWORD *)(v1728 + 2140);
              *(_DWORD *)(v1728 + 2120) += 256;
LABEL_2701:
              v1771 = v1995;
              v1754 += 4096;
              v1803 = *(_DWORD *)(v1728 + 2124);
              if ( v1754 >= (unsigned int)v1995 )
              {
                if ( *(_DWORD *)(v1728 + 2120) >= v1803 )
                  goto LABEL_2653;
LABEL_2652:
                v1753 += 10;
                if ( v1753 == (_DWORD *)v1993 )
                {
LABEL_2653:
                  v18 = (__int64)v2001;
                  if ( v1753 == (_DWORD *)v1993 && v1754 >= v1771 )
                  {
                    n = 0;
                    *(_DWORD *)(v1728 + 2116) = 0;
                    goto LABEL_237;
                  }
                  *(_DWORD *)(v1728 + 2116) = v1754;
                  goto LABEL_466;
                }
                continue;
              }
              if ( *(_DWORD *)(v1728 + 2120) >= v1803 )
                goto LABEL_2653;
              goto LABEL_2683;
            }
            break;
          }
          v2065 = 0LL;
          v2067 = 0;
          v2069 = 4096;
          v2066 = 8 * ((((v1792 & 0xFFF) + 0x1FFF) >> 12) + 6);
          v2068 = v1792 & 0xFFFFFFFFFFFFF000uLL;
          v2070 = v1792 & 0xFFF;
          if ( v1791 )
          {
            v1793 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v1728 + 576))(
                      &v2065,
                      2LL,
                      4096LL,
                      1LL);
            if ( v1793 < 0 )
            {
              if ( v1793 == -1073741819 )
              {
                v1794 = (int *)v1992;
                if ( ((*((_DWORD *)v1992 + 8) & 4) == 0 || (int)v1753[9] < 0) && !*(_DWORD *)(v1728 + 2328) )
                {
                  *(_QWORD *)(v1728 + 2336) = v1728 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v1728 + 2344) = (char *)v1794 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v1728 + 2352) = *v1794;
                  *(_QWORD *)(v1728 + 2360) = v1792;
                  *(_DWORD *)(v1728 + 2328) = 1;
                  v1795 = *(_DWORD *)(v1728 + 2520);
                  if ( (v1795 & 0x20000000) == 0 && (*(_DWORD *)(v1728 + 2524) & 0x200000) != 0 && (v1795 & 1) != 0 )
                  {
                    v1796 = *(unsigned int *)(v1728 + 2676);
                    v1797 = *(_QWORD *)(v1728 + 2104);
                    v1798 = *(_QWORD *)(v1728 + 2680);
                    v1799 = (_QWORD *)(v1796 + v1728);
                    v1800 = v1796
                          + v1728
                          + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v1728 + 2052) - v1796) >> 3);
                    while ( v1799 != (_QWORD *)v1800 )
                    {
                      *v1799 ^= v1798;
                      v1798 = ((v1797 ^ *v1799++) + __ROR8__(v1798, v1798 & 0x3F)) ^ 0xF05;
                    }
                    *(_DWORD *)(v1728 + 2524) &= ~0x200000u;
                    if ( v1798 != *(_QWORD *)(v1728 + 2688) )
                    {
                      v1801 = *(_QWORD *)(v1728 + 1416);
                      v1802 = *(_DWORD *)(v1728 + 2052);
                      *(_QWORD *)v1801 = v1728;
                      *(_DWORD *)(v1801 + 16) = v1802;
                      if ( !*(_DWORD *)(v1728 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v1728 + 1416) + 24LL) = v1798 ^ *(_QWORD *)(v1728 + 2688);
                      sub_140C7F03C(v1728, 0LL, v1798, 256LL);
                    }
                  }
                }
              }
              goto LABEL_2701;
            }
          }
          else
          {
            v2071 = (unsigned __int64)(*(__int64 (__fastcall **)(char *, __int64, __int64, __int64))(v1728 + 1112))(
                                        (char *)v2002 + v1754,
                                        4095LL,
                                        4096LL,
                                        1LL) >> 12;
          }
          ++*(_DWORD *)(v1728 + 2144);
          *(_QWORD *)(v1728 + 2736) = v2068 + v2070;
          *(_QWORD *)(v1728 + 2728) = v1992;
          v1804 = KeGetCurrentIrql();
          __writecr8(2uLL);
          RtlInitMinimalBarrier(v1728 + 2696, **(unsigned int **)(v1728 + 1520), 0LL);
          v1728 = (*(__int64 (__fastcall **)(__int64, __int64))(v1728 + 1104))(
                    v1728 + *(unsigned int *)(v1728 + 2068),
                    v1728);
          __writecr8(v1804);
          if ( v1791 )
            (*(void (__fastcall **)(__int64 *))(v1728 + 1120))(&v2065);
          *(_DWORD *)(v1728 + 2120) += 81920;
          goto LABEL_2701;
        }
LABEL_2711:
        if ( !*(_DWORD *)(v18 + 2116) )
        {
          v1805 = (_QWORD *)*((_QWORD *)v38 + 1);
          v1806 = *((unsigned int *)v38 + 4);
          v1807 = v1805;
          *(_DWORD *)(v18 + 2120) += v1806;
          v1808 = (const char *)v1805;
          v1809 = *(_DWORD *)(v18 + 2100);
          v1810 = *(_QWORD *)(v18 + 2104);
          if ( v1805 < (_QWORD *)((char *)v1805 + v1806) )
          {
            do
            {
              _mm_prefetch(v1808, 0);
              v1808 += 64;
            }
            while ( v1808 < (const char *)v1805 + v1806 );
          }
          v1811 = *(_QWORD *)(v18 + 2104);
          v1812 = (unsigned int)v1806 >> 7;
          if ( (unsigned int)v1806 >> 7 )
          {
            do
            {
              v1813 = 8LL;
              do
              {
                v1814 = v1807[1] ^ __ROL8__(*v1807 ^ v1811, v1809);
                v1807 += 2;
                v1811 = __ROL8__(v1814, v1809);
                --v1813;
              }
              while ( v1813 );
              v1815 = (__ROL8__(v1810 ^ ((char *)v1807 - (char *)v1805), 17) ^ v1810 ^ (unsigned __int64)((char *)v1807 - (char *)v1805))
                    * (unsigned __int128)0x7010008004002001uLL;
              v2119 = *((_QWORD *)&v1815 + 1);
              v1809 = ((unsigned __int8)(v1815 ^ BYTE8(v1815)) ^ (unsigned __int8)v1809) & 0x3F;
              if ( !v1809 )
                LOBYTE(v1809) = 1;
              --v1812;
            }
            while ( v1812 );
            v18 = (__int64)v2001;
          }
          v1816 = v1806 & 0x7F;
          if ( v1816 >= 8 )
          {
            v1817 = (unsigned __int64)v1816 >> 3;
            do
            {
              v1811 = __ROL8__(*v1807++ ^ v1811, v1809);
              v1816 -= 8;
              --v1817;
            }
            while ( v1817 );
          }
          for ( ; v1816; --v1816 )
          {
            v1818 = *(unsigned __int8 *)v1807;
            v1807 = (_QWORD *)((char *)v1807 + 1);
            v1811 = __ROL8__(v1818 ^ v1811, v1809);
          }
          for ( jj = v1811; ; LODWORD(v1811) = jj ^ v1811 )
          {
            jj >>= 31;
            if ( !jj )
              break;
          }
          v1820 = v1811 & 0x7FFFFFFF;
          if ( v1820 == *((_DWORD *)v38 + 5) )
            goto LABEL_2777;
          if ( !*(_DWORD *)v38 && *((_DWORD *)v38 + 6) )
            n = 1;
          v1821 = *((_QWORD *)v38 + 1);
          if ( *((_DWORD *)v38 + 4) )
          {
            v1822 = 64LL;
            if ( (*(_DWORD *)(v18 + 2524) & 0x40) != 0 )
            {
              v1823 = KeGetCurrentIrql();
              v1824 = v1821 & 0xFFFFFFFFFFFFF000uLL;
              v2002 = (unsigned int *)((v1821 + *((unsigned int *)v38 + 4) - 1LL) | 0xFFF);
              v1825 = (v1821 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1826 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                            v1824,
                            0LL,
                            v1822,
                            v1807);
                  if ( v1826 == -1073741267 )
                    break;
                  if ( v1826 < 0 )
                  {
LABEL_2763:
                    __writecr8(v1823);
                    v38 = v1992;
                    goto LABEL_2764;
                  }
LABEL_2742:
                  v1824 += 4096LL;
                  v1825 += 4096LL;
                  if ( (unsigned int *)v1825 == v2002 )
                  {
                    __writecr8(v1823);
                    v38 = v1992;
                    goto LABEL_2744;
                  }
                }
                if ( n )
                  goto LABEL_2763;
                if ( v1823 > 1u )
                  goto LABEL_2742;
                __writecr8(v1823);
              }
            }
          }
LABEL_2764:
          if ( !*(_DWORD *)(v18 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *((unsigned int *)v38 + 5) ^ (unsigned __int64)v1820;
          v1849 = *((_QWORD *)v38 + 1);
          if ( *(_DWORD *)(v18 + 2328) )
            goto LABEL_2777;
          *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2352) = *(int *)v38;
          *(_QWORD *)(v18 + 2360) = v1849;
          *(_DWORD *)(v18 + 2328) = 1;
          v1850 = *(_DWORD *)(v18 + 2520);
          if ( (v1850 & 0x20000000) != 0 )
            goto LABEL_2777;
          if ( (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 )
            goto LABEL_2777;
          if ( (v1850 & 1) == 0 )
            goto LABEL_2777;
          v1851 = *(unsigned int *)(v18 + 2676);
          v1852 = *(_QWORD *)(v18 + 2104);
          v1853 = *(_QWORD *)(v18 + 2680);
          v1854 = (_QWORD *)(v1851 + v18);
          v1855 = v1851 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1851) >> 3);
          while ( v1854 != (_QWORD *)v1855 )
          {
            *v1854 ^= v1853;
            v1853 = ((v1852 ^ *v1854++) + __ROR8__(v1853, v1853 & 0x3F)) ^ 0xF05;
          }
          *(_DWORD *)(v18 + 2524) &= ~0x200000u;
          if ( v1853 == *(_QWORD *)(v18 + 2688) )
          {
LABEL_2777:
            v63 = v1994;
            v30 = 4LL;
          }
          else
          {
            v1856 = *(_DWORD *)(v18 + 2052);
            v1857 = *(_QWORD *)(v18 + 1416);
            *(_QWORD *)v1857 = v18;
            *(_DWORD *)(v1857 + 16) = v1856;
            if ( !*(_DWORD *)(v18 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1853 ^ *(_QWORD *)(v18 + 2688);
            sub_140C7F03C(v18, 0LL, v1853, 256LL);
LABEL_2744:
            v63 = v1994;
            v30 = 4LL;
          }
        }
        v1827 = *(unsigned int *)(v18 + 2116);
        v1828 = *((unsigned int *)v38 + 4);
        v1997 = *((_QWORD *)v38 + 1);
        v1829 = (unsigned int *)(v1997 + 12 * v1827);
        v1996 = v1829;
        v2000 = (unsigned int *)(v1997 + 12 * (v1828 / 0xC));
        v1830 = v2000;
        v1831 = (int *)&v38[4 * v1827 + 48];
        v1993 = (__int64)v1831;
        if ( v1829 != v2000 )
        {
          while ( 2 )
          {
            if ( *v1831 >= 0 )
            {
              v1832 = *((_QWORD *)v38 + 4) + *v1829;
              v1833 = v1829[1] - *v1829;
              v2002 = (unsigned int *)v1832;
              if ( v63 != 43 )
              {
                *(_DWORD *)(v18 + 2120) += v1833;
                v1834 = v1832;
                v1835 = *(_DWORD *)(v18 + 2100);
                v1836 = (const char *)v1832;
                v1837 = *(_QWORD *)(v18 + 2104);
                v1838 = v1832 + v1833;
                if ( v1832 < v1838 )
                {
                  do
                  {
                    _mm_prefetch(v1836, 0);
                    v1836 += 64;
                  }
                  while ( (unsigned __int64)v1836 < v1838 );
                }
                v1839 = *(_QWORD *)(v18 + 2104);
                v1840 = v1833 >> 7;
                if ( v1833 >> 7 )
                {
                  do
                  {
                    v1841 = 8LL;
                    do
                    {
                      v1842 = *(_QWORD *)(v1834 + 8) ^ __ROL8__(*(_QWORD *)v1834 ^ v1839, v1835);
                      v1834 += 16LL;
                      v1839 = __ROL8__(v1842, v1835);
                      --v1841;
                    }
                    while ( v1841 );
                    v1843 = (__ROL8__(v1837 ^ (v1834 - v1832), 17) ^ v1837 ^ (v1834 - v1832))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2120 = *((_QWORD *)&v1843 + 1);
                    v1835 = ((unsigned __int8)(v1843 ^ BYTE8(v1843)) ^ (unsigned __int8)v1835) & 0x3F;
                    if ( !v1835 )
                      LOBYTE(v1835) = 1;
                    --v1840;
                  }
                  while ( v1840 );
                  v18 = (__int64)v2001;
                  v1831 = (int *)v1993;
                }
                v1844 = 1LL;
                v1845 = v1833 & 0x7F;
                if ( v1845 >= 8 )
                {
                  v1846 = (unsigned __int64)(v1833 & 0x7F) >> 3;
                  do
                  {
                    v1839 = __ROL8__(*(_QWORD *)v1834 ^ v1839, v1835);
                    v1834 += 8LL;
                    v1845 -= 8;
                    --v1846;
                  }
                  while ( v1846 );
                }
                for ( ; v1845; --v1845 )
                {
                  v1847 = *(unsigned __int8 *)v1834++;
                  v1839 = __ROL8__(v1847 ^ v1839, v1835);
                }
                for ( kk = v1839; ; LODWORD(v1839) = kk ^ v1839 )
                {
                  kk >>= 31;
                  if ( !kk )
                    break;
                }
                v1858 = v1839 & 0x7FFFFFFF;
                goto LABEL_2819;
              }
              v1858 = sub_140C7F338(v18, v1832, v1833);
              *(_DWORD *)(v18 + 2120) += 8 * v1833;
              if ( (*(_DWORD *)(v18 + 2524) & 0x800) == 0 )
                goto LABEL_2819;
              v1859 = *(_BYTE *)(v1832 - 1);
              if ( *(_BYTE *)(v1832 - 6) != 76
                || *(_BYTE *)(v1832 - 5) != 0x87
                || *(_BYTE *)(v1832 - 4)
                || *(_BYTE *)(v1832 - 3) != 0x98
                || *(_BYTE *)(v1832 - 2) != 0xC3
                || v1859 != -112 && v1859 != -15 )
              {
                v1844 = 1LL;
                goto LABEL_2808;
              }
              v1860 = *(volatile signed __int32 **)(v18 + 1240);
              while ( 1 )
              {
                _disable();
                if ( !_interlockedbittestandset(v1860, (*(_DWORD *)(v18 + 2520) >> 9) & 0x1F) )
                  break;
                _enable();
                _mm_pause();
              }
              CurrentPrcb = *(struct _KPRCB **)(v18 + 2304);
              v1862 = 38LL;
              v1863 = 304;
              v1864 = CurrentPrcb;
              v1844 = 1LL;
              do
              {
                *(_QWORD *)&v1864->MxCsr = 0LL;
                v1863 -= 8;
                v1864 = (struct _KPRCB *)((char *)v1864 + 8);
                --v1862;
              }
              while ( v1862 );
              if ( v1863 )
              {
                v1862 = 0xFFFFFFFFLL;
                do
                {
                  LOBYTE(v1864->MxCsr) = 0;
                  v1864 = (struct _KPRCB *)((char *)v1864 + 1);
                  --v1863;
                }
                while ( v1863 );
              }
              *(_OWORD *)&CurrentPrcb->NextThread = *(_OWORD *)(v18 + 2152);
              *(_OWORD *)&CurrentPrcb->NestingLevel = *(_OWORD *)(v18 + 2168);
              *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v18 + 2184);
              v2072 = 303;
              v2073 = CurrentPrcb;
              LOWORD(CurrentPrcb->NextThread) = v18 + 2220;
              v1865 = (unsigned __int64)(v18 + 2220) >> 16;
              v2121 = v18 + 2220;
              HIWORD(CurrentPrcb->NextThread) = v1865;
              LODWORD(CurrentPrcb->IdleThread) = (unsigned __int64)(v18 + 2220) >> 32;
              __sidt(v2091);
              __lidt(&v2072);
              *(_BYTE *)(v1832 - 1) = -15;
              if ( *(_BYTE *)(v1832 - 1) != 0xF1 )
                goto LABEL_2803;
              if ( (*(_DWORD *)(v18 + 2524) & 0x20000) == 0 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v1865 = v18 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v18 + 1208) = v18 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v18 + 1216) = CurrentPrcb;
                **(_QWORD **)(v18 + 1224) = v1832;
                **(_QWORD **)(v18 + 1232) = 275LL;
              }
              ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1832 - 1))(
                v1865,
                CurrentPrcb,
                v1862,
                1LL);
              if ( (*(_DWORD *)(v18 + 2524) & 0x20000) == 0 )
              {
                **(_QWORD **)(v18 + 1208) = 0xA3A03F5891C8B4E8uLL;
                **(_QWORD **)(v18 + 1216) = 0LL;
                **(_QWORD **)(v18 + 1224) = 0LL;
                **(_QWORD **)(v18 + 1232) = 0LL;
              }
              v1844 = 1LL;
              if ( *(_BYTE *)(v1832 - 1) == 0xF1 )
              {
                *(_BYTE *)(v1832 - 1) = -112;
                v1834 = *(_BYTE *)(v1832 - 1) == 0x90;
              }
              else
              {
LABEL_2803:
                v1834 = 0LL;
              }
              __lidt(v2091);
              _InterlockedAnd(
                *(volatile signed __int32 **)(v18 + 1240),
                ~(1 << ((*(_DWORD *)(v18 + 2520) >> 9) & 0x1F)));
              _enable();
              if ( !(_DWORD)v1834 )
              {
LABEL_2808:
                if ( !*(_DWORD *)(v18 + 2328) )
                {
                  v1866 = (int *)v1992;
                  *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2344) = (char *)v1866 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2352) = *v1866;
                  *(_QWORD *)(v18 + 2360) = v1832 - 6;
                  *(_DWORD *)(v18 + 2328) = 1;
                  v1867 = *(_DWORD *)(v18 + 2520);
                  if ( (v1867 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1867 & 1) != 0 )
                  {
                    v1868 = *(unsigned int *)(v18 + 2676);
                    v1869 = *(_QWORD *)(v18 + 2104);
                    v1834 = *(_QWORD *)(v18 + 2680);
                    v1870 = (_QWORD *)(v1868 + v18);
                    v1844 = v1868 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1868) >> 3);
                    while ( v1870 != (_QWORD *)v1844 )
                    {
                      *v1870 ^= v1834;
                      v1834 = ((v1869 ^ *v1870++) + __ROR8__(v1834, v1834 & 0x3F)) ^ 0xF05;
                    }
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v1834 != *(_QWORD *)(v18 + 2688) )
                    {
                      v1871 = *(_DWORD *)(v18 + 2052);
                      v1872 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)v1872 = v18;
                      *(_DWORD *)(v1872 + 16) = v1871;
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1834 ^ *(_QWORD *)(v18 + 2688);
                      sub_140C7F03C(v18, 0LL, v1834, 256LL);
                    }
                  }
                }
              }
LABEL_2819:
              if ( v1858 == (*v1831 & 0x7FFFFFFF) )
                goto LABEL_2837;
              v1873 = v1833;
              if ( v1833 && (*(_DWORD *)(v18 + 2524) & 0x40) != 0 )
              {
                v1874 = KeGetCurrentIrql();
                v1875 = v1832 & 0xFFFFFFFFFFFFF000uLL;
                v1876 = (v1873 + v1832 - 1) | 0xFFF;
                v1877 = (v1832 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v1878 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(v18 + 1128))(
                              v1875,
                              0LL,
                              v1834,
                              v1844);
                    if ( v1878 == -1073741267 )
                      break;
                    if ( v1878 < 0 )
                    {
                      __writecr8(v1874);
                      v1832 = (unsigned __int64)v2002;
                      v1829 = v1996;
                      v1831 = (int *)v1993;
                      goto LABEL_2829;
                    }
LABEL_2835:
                    v1875 += 4096LL;
                    v1877 += 4096LL;
                    if ( v1877 == v1876 )
                    {
                      __writecr8(v1874);
                      v1829 = v1996;
                      v1831 = (int *)v1993;
                      goto LABEL_2837;
                    }
                  }
                  if ( v1874 > 1u )
                    goto LABEL_2835;
                  __writecr8(v1874);
                }
              }
LABEL_2829:
              v1879 = (unsigned int)*v1831;
              LODWORD(v1879) = v1879 & 0x7FFFFFFF;
              if ( *(_DWORD *)(v18 + 2328)
                || (*(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1879 ^ v1858, *(_DWORD *)(v18 + 2328)) )
              {
LABEL_2837:
                v38 = v1992;
              }
              else
              {
                v38 = v1992;
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *(int *)v38;
                *(_QWORD *)(v18 + 2360) = v1832;
                *(_DWORD *)(v18 + 2328) = 1;
                v1880 = *(_DWORD *)(v18 + 2520);
                if ( (v1880 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1880 & 1) != 0 )
                {
                  v1881 = *(unsigned int *)(v18 + 2676);
                  v1882 = *(_QWORD *)(v18 + 2104);
                  v1883 = *(_QWORD *)(v18 + 2680);
                  v1884 = (_QWORD *)(v1881 + v18);
                  v1885 = v1881 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1881) >> 3);
                  while ( v1884 != (_QWORD *)v1885 )
                  {
                    *v1884 ^= v1883;
                    v1883 = ((v1882 ^ *v1884++) + __ROR8__(v1883, v1883 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                  if ( v1883 != *(_QWORD *)(v18 + 2688) )
                  {
                    v1887 = *(_DWORD *)(v18 + 2052);
                    v1888 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v1888 = v18;
                    *(_DWORD *)(v1888 + 16) = v1887;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1883 ^ *(_QWORD *)(v18 + 2688);
                    sub_140C7F03C(v18, 0LL, v1883, 256LL);
                  }
                }
              }
              v1830 = v2000;
              v30 = 4LL;
            }
            ++v1831;
            v1829 += 3;
            v1993 = (__int64)v1831;
            v1996 = v1829;
            if ( v1829 < v1830 )
            {
              v1830 = v2000;
              v63 = v1994;
              if ( *(_DWORD *)(v18 + 2120) < *(_DWORD *)(v18 + 2124) )
                continue;
            }
            break;
          }
          if ( v1829 != v2000 )
          {
            v1886 = (__int64)((__int64)v1829 - v1997) / 12;
            n = 0;
            goto LABEL_2879;
          }
        }
        v1889 = *(_QWORD *)(v18 + 1336);
        v1890 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        (*(void (__fastcall **)(__int64))(v18 + 352))(v1889);
        v1891 = **(unsigned int ***)(v18 + 1568);
        v1892 = v1891 + 4;
        v1893 = *((_BYTE *)v1891 + 12);
        v1894 = (unsigned __int64)&v1891[6 * *v1891 + 4];
        do
        {
          v1895 = 24LL;
          v1896 = v38 + 24;
          v1897 = v1892;
          do
          {
            v1898 = *(_QWORD *)v1897;
            v1897 += 2;
            v1899 = *(_QWORD *)v1896;
            v1896 += 8;
            if ( v1898 != v1899 )
              goto LABEL_2857;
            v1895 = (unsigned int)(v1895 - 8);
          }
          while ( (unsigned int)v1895 >= 8 );
          if ( !(_DWORD)v1895 )
            break;
          while ( 1 )
          {
            v1900 = *(_BYTE *)v1897;
            v1897 = (unsigned int *)((char *)v1897 + 1);
            v1901 = *v1896++;
            if ( v1900 != v1901 )
              break;
            v50 = (_DWORD)v1895 == 1;
            v1895 = (unsigned int)(v1895 - 1);
            if ( v50 )
              goto LABEL_2858;
          }
LABEL_2857:
          v1892 += 6;
        }
        while ( (unsigned __int64)v1892 < v1894 );
LABEL_2858:
        (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v18 + 416))(
          *(_QWORD *)(v18 + 1336),
          v1895,
          v1896,
          v1897);
        __writecr8(v1890);
        if ( v1893 )
        {
          if ( (*(_DWORD *)(v18 + 2524) & 0x10) != 0 && !*(_DWORD *)(v18 + 2328) )
          {
            v1902 = v38 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
            if ( !v38 )
              v1902 = 0LL;
            *(_QWORD *)(v18 + 2344) = v1902;
            if ( v38 )
              v1903 = *(int *)v38;
            else
              v1903 = 0LL;
            *(_QWORD *)(v18 + 2352) = v1903;
            *(_QWORD *)(v18 + 2360) = 1LL;
            *(_DWORD *)(v18 + 2328) = 1;
            v1904 = *(_DWORD *)(v18 + 2520);
            if ( (v1904 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1904 & 1) != 0 )
            {
              v1905 = *(unsigned int *)(v18 + 2676);
              v1906 = *(_QWORD *)(v18 + 2104);
              v1907 = *(_QWORD *)(v18 + 2680);
              v1908 = (_QWORD *)(v1905 + v18);
              v1909 = v1905 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1905) >> 3);
              while ( v1908 != (_QWORD *)v1909 )
              {
                *v1908 ^= v1907;
                v1907 = ((v1906 ^ *v1908++) + __ROR8__(v1907, v1907 & 0x3F)) ^ 0xF05;
              }
              *(_DWORD *)(v18 + 2524) &= ~0x200000u;
              if ( v1907 != *(_QWORD *)(v18 + 2688) )
              {
                v1910 = *(_DWORD *)(v18 + 2052);
                v1911 = *(_QWORD *)(v18 + 1416);
                *(_QWORD *)v1911 = v18;
                *(_DWORD *)(v1911 + 16) = v1910;
                if ( !*(_DWORD *)(v18 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1907 ^ *(_QWORD *)(v18 + 2688);
                sub_140C7F03C(v18, 0LL, v1907, 256LL);
              }
            }
          }
          if ( *((_QWORD *)v38 + 3) == 1LL )
            goto LABEL_2877;
        }
        if ( v1892 != (unsigned int *)v1894 )
        {
LABEL_2877:
          n = 0;
        }
        else
        {
          n = 0;
          if ( !*(_DWORD *)(v18 + 2328) )
          {
            v1912 = v38 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
            if ( !v38 )
              v1912 = 0LL;
            *(_QWORD *)(v18 + 2344) = v1912;
            if ( v38 )
              v1913 = *(int *)v38;
            else
              v1913 = 0LL;
            *(_QWORD *)(v18 + 2352) = v1913;
            *(_QWORD *)(v18 + 2360) = v1892;
            *(_DWORD *)(v18 + 2328) = 1;
            v1914 = *(_DWORD *)(v18 + 2520);
            if ( (v1914 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1914 & 1) != 0 )
            {
              v1915 = *(unsigned int *)(v18 + 2676);
              v1916 = *(_QWORD *)(v18 + 2104);
              v1917 = *(_QWORD *)(v18 + 2680);
              v1918 = (_QWORD *)(v1915 + v18);
              v1919 = v1915 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1915) >> 3);
              while ( v1918 != (_QWORD *)v1919 )
              {
                *v1918 ^= v1917;
                v1917 = ((v1916 ^ *v1918++) + __ROR8__(v1917, v1917 & 0x3F)) ^ 0xF05;
              }
              *(_DWORD *)(v18 + 2524) &= ~0x200000u;
              if ( v1917 != *(_QWORD *)(v18 + 2688) )
              {
                v1920 = *(_DWORD *)(v18 + 2052);
                v1921 = *(_QWORD *)(v18 + 1416);
                *(_QWORD *)v1921 = v18;
                *(_DWORD *)(v1921 + 16) = v1920;
                if ( !*(_DWORD *)(v18 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1917 ^ *(_QWORD *)(v18 + 2688);
                sub_140C7F03C(v18, 0LL, v1917, 256LL);
              }
            }
          }
        }
        LODWORD(v1886) = 0;
        v30 = 4LL;
LABEL_2879:
        *(_DWORD *)(v18 + 2116) = v1886;
        goto LABEL_289;
      }
      if ( v63 == 30 )
      {
        v1109 = *(unsigned int *)(v18 + 2116);
        v1110 = *((unsigned int *)v38 + 9);
        v2000 = (unsigned int *)*((_QWORD *)v38 + 1);
        v1111 = &v2000[3 * v1109];
        v1112 = v1111 + 3;
        v1996 = v1111;
        v1997 = (unsigned __int64)(v1111 + 3);
        v1113 = v1110 / 0xC;
        v2012 = v1110 / 0xC;
        v2015 = &v2000[3 * (unsigned int)(v1110 / 0xC)];
        v1114 = &v38[v1109 + 48];
        v1993 = (__int64)v1114;
        v1115 = v1110 / 0xC - 1;
        if ( (unsigned int)(v1110 / 0xC) )
          v1116 = (unsigned __int64)&v38[((v1115 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
        else
          v1116 = (unsigned __int64)(v38 + 48);
        v1117 = *((unsigned __int16 *)v38 + 20);
        v2010 = v1116;
        v2011 = (unsigned int *)(v1116 + 24 * v1117);
        if ( (_DWORD)v1113 )
        {
          if ( (unsigned int)v1109 < v1115 )
          {
            do
            {
              if ( *v1114 >= 0 )
              {
                v1118 = *((_QWORD *)v38 + 3) + v1111[1];
                v1119 = *v1112 - v1111[1];
                *(_DWORD *)(v18 + 2120) += v1119;
                v1120 = (_QWORD *)v1118;
                v1121 = *(_DWORD *)(v18 + 2100);
                v1122 = (const char *)v1118;
                v1123 = *(_QWORD *)(v18 + 2104);
                v1124 = v1118 + v1119;
                v2002 = (unsigned int *)v1118;
                if ( v1118 < v1124 )
                {
                  do
                  {
                    _mm_prefetch(v1122, 0);
                    v1122 += 64;
                  }
                  while ( (unsigned __int64)v1122 < v1124 );
                }
                v1125 = v1123;
                v1126 = v1119 >> 7;
                if ( v1119 >> 7 )
                {
                  do
                  {
                    v1127 = 8LL;
                    do
                    {
                      v1128 = v1120[1] ^ __ROL8__(*v1120 ^ v1125, v1121);
                      v1120 += 2;
                      v1125 = __ROL8__(v1128, v1121);
                      --v1127;
                    }
                    while ( v1127 );
                    v1129 = (__ROL8__(v1123 ^ ((unsigned __int64)v1120 - v1118), 17) ^ v1123 ^ ((unsigned __int64)v1120
                                                                                              - v1118))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2109 = *((_QWORD *)&v1129 + 1);
                    v1121 = ((unsigned __int8)(v1129 ^ BYTE8(v1129)) ^ (unsigned __int8)v1121) & 0x3F;
                    if ( !v1121 )
                      LOBYTE(v1121) = 1;
                    --v1126;
                  }
                  while ( v1126 );
                  v1114 = (char *)v1993;
                }
                v1130 = v1119 & 0x7F;
                if ( v1130 >= 8 )
                {
                  v1131 = (unsigned __int64)(v1119 & 0x7F) >> 3;
                  do
                  {
                    v1125 = __ROL8__(*v1120++ ^ v1125, v1121);
                    v1130 -= 8;
                    --v1131;
                  }
                  while ( v1131 );
                }
                for ( ; v1130; --v1130 )
                {
                  v1132 = *(unsigned __int8 *)v1120;
                  v1120 = (_QWORD *)((char *)v1120 + 1);
                  v1125 = __ROL8__(v1132 ^ v1125, v1121);
                }
                for ( mm = v1125; ; LOBYTE(v1125) = mm ^ v1125 )
                {
                  mm >>= 7;
                  if ( !mm )
                    break;
                }
                LOBYTE(v1125) = v1125 & 0x7F;
                v1134 = (unsigned __int8)v1125;
                if ( (unsigned __int8)v1125 == (*v1114 & 0x7F) )
                  goto LABEL_1674;
                v1135 = v1119;
                if ( v1119 && (*(_DWORD *)(v18 + 2524) & 0x40) != 0 )
                {
                  v1136 = KeGetCurrentIrql();
                  v1137 = v1118 & 0xFFFFFFFFFFFFF000uLL;
                  v1138 = (v1135 + v1118 - 1) | 0xFFF;
                  v1139 = (v1118 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    __writecr8(2uLL);
                    while ( 1 )
                    {
                      v1140 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD *))(v18 + 1128))(
                                v1137,
                                0LL,
                                v1125,
                                v1120);
                      if ( v1140 == -1073741267 )
                        break;
                      if ( v1140 < 0 )
                      {
                        __writecr8(v1136);
                        v1118 = (unsigned __int64)v2002;
                        v1114 = (char *)v1993;
                        goto LABEL_1684;
                      }
LABEL_1672:
                      v1137 += 4096LL;
                      v1139 += 4096LL;
                      if ( v1139 == v1138 )
                      {
                        __writecr8(v1136);
                        v1114 = (char *)v1993;
                        goto LABEL_1674;
                      }
                    }
                    if ( v1136 > 1u )
                      goto LABEL_1672;
                    __writecr8(v1136);
                  }
                }
LABEL_1684:
                if ( *(_DWORD *)(v18 + 2328)
                  || (*(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *v1114 & 0x7F ^ v1134, *(_DWORD *)(v18 + 2328)) )
                {
LABEL_1674:
                  v38 = v1992;
                }
                else
                {
                  v38 = v1992;
                  *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2352) = *(int *)v38;
                  *(_QWORD *)(v18 + 2360) = v1118;
                  *(_DWORD *)(v18 + 2328) = 1;
                  v1142 = *(_DWORD *)(v18 + 2520);
                  if ( (v1142 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1142 & 1) != 0 )
                  {
                    v1143 = *(unsigned int *)(v18 + 2676);
                    v1144 = *(_QWORD *)(v18 + 2104);
                    v1145 = *(_QWORD *)(v18 + 2680);
                    v1146 = (_QWORD *)(v1143 + v18);
                    v1147 = v1143 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1143) >> 3);
                    while ( v1146 != (_QWORD *)v1147 )
                    {
                      *v1146 ^= v1145;
                      v1145 = ((v1144 ^ *v1146++) + __ROR8__(v1145, v1145 & 0x3F)) ^ 0xF05;
                    }
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v1145 != *(_QWORD *)(v18 + 2688) )
                    {
                      v1148 = *(_DWORD *)(v18 + 2052);
                      v1149 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)v1149 = v18;
                      *(_DWORD *)(v1149 + 16) = v1148;
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1145 ^ *(_QWORD *)(v18 + 2688);
                      sub_140C7F03C(v18, 0LL, v1145, 256LL);
                    }
                  }
                }
                v1111 = v1996;
                *(_DWORD *)(v18 + 2120) += 64;
                v1112 = (unsigned int *)v1997;
              }
              ++v1114;
              v1111 += 3;
              v1993 = (__int64)v1114;
              v1112 += 3;
              v1996 = v1111;
              v1997 = (unsigned __int64)v1112;
            }
            while ( v1112 < v2015 && *(_DWORD *)(v18 + 2120) < *(_DWORD *)(v18 + 2124) );
            v1141 = (_DWORD)v1111 - (_DWORD)v2000;
            LODWORD(v1113) = v2012;
            v30 = 4LL;
            *(_DWORD *)(v18 + 2116) = v1141 / 12;
            LODWORD(v1109) = v1141 / 12;
            v1116 = v2010;
          }
          if ( (unsigned int)v1109 < (int)v1113 - 1 )
            goto LABEL_467;
        }
        n = 0;
        if ( *(_DWORD *)(v18 + 2120) >= *(_DWORD *)(v18 + 2124) )
          goto LABEL_289;
        if ( (_DWORD)v1113 )
          LODWORD(v1109) = v1109 - v1113 + 1;
        v1150 = v1116 + 24LL * (unsigned int)v1109;
        v1997 = v1150;
        while ( 2 )
        {
          v1151 = (unsigned int *)(v1150 + 8);
          v1993 = 2LL;
          v1996 = (unsigned int *)(v1150 + 8);
          v1152 = 2LL;
LABEL_1698:
          if ( (*v1151 & 0x80000000) == 0 )
          {
            v1153 = *(v1151 - 2);
            v1154 = *(v1151 - 1) - v1153;
            v1155 = *((_QWORD *)v1992 + 3) + v1153;
            *(_DWORD *)(v18 + 2120) += v1154;
            v1156 = v1155 + v1154;
            v1157 = *(unsigned int *)(v18 + 2100);
            v1158 = (_QWORD *)v1155;
            v1159 = *(_QWORD *)(v18 + 2104);
            v1160 = (const char *)v1155;
            v2002 = (unsigned int *)v1155;
            if ( v1155 < v1156 )
            {
              do
              {
                _mm_prefetch(v1160, 0);
                v1160 += 64;
              }
              while ( (unsigned __int64)v1160 < v1156 );
            }
            v1161 = v1159;
            v1162 = v1154 >> 7;
            if ( v1154 >> 7 )
            {
              do
              {
                v1163 = 8LL;
                do
                {
                  v1164 = v1158[1] ^ __ROL8__(*v1158 ^ v1161, v1157);
                  v1158 += 2;
                  v1161 = __ROL8__(v1164, v1157);
                  --v1163;
                }
                while ( v1163 );
                v1165 = (__ROL8__(v1159 ^ ((unsigned __int64)v1158 - v1155), 17) ^ v1159 ^ ((unsigned __int64)v1158
                                                                                          - v1155))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2110 = *((_QWORD *)&v1165 + 1);
                v1157 = ((unsigned __int8)(v1165 ^ BYTE8(v1165)) ^ (unsigned __int8)v1157) & 0x3F;
                if ( !(_DWORD)v1157 )
                  v1157 = 1LL;
                --v1162;
              }
              while ( v1162 );
              v1152 = v1993;
            }
            v1166 = v1154 & 0x7F;
            if ( v1166 >= 8 )
            {
              v1167 = (unsigned __int64)(v1154 & 0x7F) >> 3;
              do
              {
                v1161 = __ROL8__(*v1158++ ^ v1161, v1157);
                v1166 -= 8;
                --v1167;
              }
              while ( v1167 );
            }
            for ( ; v1166; --v1166 )
            {
              v1168 = *(unsigned __int8 *)v1158;
              v1158 = (_QWORD *)((char *)v1158 + 1);
              v1161 = __ROL8__(v1168 ^ v1161, v1157);
            }
            for ( nn = v1161; ; LODWORD(v1161) = nn ^ v1161 )
            {
              nn >>= 31;
              if ( !nn )
                break;
            }
            v1170 = v1161 & 0x7FFFFFFF;
            if ( v1170 == (*v1151 & 0x7FFFFFFF) )
              goto LABEL_1727;
            v1171 = v1154;
            if ( v1154 && (*(_DWORD *)(v18 + 2524) & 0x40) != 0 )
            {
              v1172 = KeGetCurrentIrql();
              v1173 = v1155 & 0xFFFFFFFFFFFFF000uLL;
              v1174 = (v1171 + v1155 - 1) | 0xFFF;
              v1175 = (v1155 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1176 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v18 + 1128))(
                            v1173,
                            0LL,
                            v1158,
                            v1157);
                  if ( v1176 == -1073741267 )
                    break;
                  if ( v1176 < 0 )
                  {
                    __writecr8(v1172);
                    v1155 = (unsigned __int64)v2002;
                    v1151 = v1996;
                    v1152 = v1993;
                    goto LABEL_1733;
                  }
LABEL_1725:
                  v1173 += 4096LL;
                  v1175 += 4096LL;
                  if ( v1175 == v1174 )
                  {
                    __writecr8(v1172);
                    v1151 = v1996;
                    v1152 = v1993;
                    goto LABEL_1727;
                  }
                }
                if ( v1172 > 1u )
                  goto LABEL_1725;
                __writecr8(v1172);
              }
            }
LABEL_1733:
            v1178 = *v1151;
            LODWORD(v1178) = v1178 & 0x7FFFFFFF;
            if ( *(_DWORD *)(v18 + 2328)
              || (*(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1178 ^ v1170, *(_DWORD *)(v18 + 2328)) )
            {
LABEL_1727:
              n = 0;
            }
            else
            {
              v1179 = (int *)v1992;
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v1179 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v1179;
              *(_QWORD *)(v18 + 2360) = v1155;
              *(_DWORD *)(v18 + 2328) = 1;
              v1180 = *(_DWORD *)(v18 + 2520);
              if ( (v1180 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1180 & 1) != 0 )
              {
                v1181 = *(unsigned int *)(v18 + 2676);
                v1182 = *(_QWORD *)(v18 + 2104);
                v1183 = *(_QWORD *)(v18 + 2680);
                v1184 = (_QWORD *)(v1181 + v18);
                v1185 = v1181 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1181) >> 3);
                while ( v1184 != (_QWORD *)v1185 )
                {
                  *v1184 ^= v1183;
                  v1183 = ((v1182 ^ *v1184++) + __ROR8__(v1183, v1183 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                n = 0;
                if ( v1183 != *(_QWORD *)(v18 + 2688) )
                {
                  v1186 = *(_DWORD *)(v18 + 2052);
                  v1187 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v1187 = v18;
                  *(_DWORD *)(v1187 + 16) = v1186;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1183 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v1183, 256LL);
                }
              }
              else
              {
                n = 0;
              }
            }
          }
          v1151 += 3;
          --v1152;
          v1996 = v1151;
          v1993 = v1152;
          if ( !v1152 )
          {
            v1177 = v1997;
            ++*(_DWORD *)(v18 + 2116);
            v1150 = v1177 + 24;
            v1997 = v1150;
            if ( (unsigned int *)v1150 == v2011 )
            {
              *(_DWORD *)(v18 + 2116) = 0;
              goto LABEL_2486;
            }
            if ( *(_DWORD *)(v18 + 2120) >= *(_DWORD *)(v18 + 2124) )
              goto LABEL_2486;
            continue;
          }
          goto LABEL_1698;
        }
      }
      if ( v63 > 15 )
      {
        if ( v63 == 21 )
        {
          v1099 = *((_DWORD *)v38 + 10);
          (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 432))(v2140, *((unsigned int *)v38 + 11));
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(v18 + 480))(v2140, v2141);
          v50 = v1099 == 0;
          v1100 = __readcr4();
          if ( v50 )
            v1100 = __readcr0();
          (*(void (__fastcall **)(_BYTE *))(v18 + 424))(v2141);
          v1101 = *((_QWORD *)v38 + 4);
          v1102 = v1100 & *((_QWORD *)v38 + 3);
          if ( v1102 == v1101 )
            goto LABEL_289;
          v1103 = *((_QWORD *)v38 + 5);
          if ( *(_DWORD *)(v18 + 2328) )
            goto LABEL_289;
          *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1102 ^ v1101;
          if ( *(_DWORD *)(v18 + 2328) )
            goto LABEL_289;
          *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v18 + 2352) = *(int *)v38;
          *(_QWORD *)(v18 + 2360) = v1103;
          *(_DWORD *)(v18 + 2328) = 1;
          v1104 = *(_DWORD *)(v18 + 2520);
          if ( (v1104 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v1104 & 1) == 0 )
            goto LABEL_289;
          v1105 = *(unsigned int *)(v18 + 2676);
          v1106 = *(_QWORD *)(v18 + 2104);
          v478 = *(_QWORD *)(v18 + 2680);
          v1107 = (_QWORD *)(v1105 + v18);
          v1108 = v1105 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1105) >> 3);
          while ( v1107 != (_QWORD *)v1108 )
          {
            *v1107 ^= v478;
            v478 = ((v1106 ^ *v1107++) + __ROR8__(v478, v478 & 0x3F)) ^ 0xF05;
          }
          goto LABEL_763;
        }
        if ( v63 != 24 )
        {
          if ( v63 != 25 )
          {
            if ( v63 != 26 )
            {
              if ( v63 == 27 )
              {
                if ( (*(_DWORD *)(v18 + 2128) & 1) == 0 )
                  goto LABEL_289;
                v539 = *(_QWORD **)(v18 + 1448);
                v540 = *(void (__fastcall **)(_QWORD, _QWORD))(v18 + 392);
                v541 = *(_QWORD *)(v18 + 1344);
                LODWORD(v1995) = 0;
                v542 = *(_QWORD *)(v18 + 1440);
                v1997 = v542;
                v1993 = (__int64)v539;
                v540((unsigned int)(v63 - 27), 1LL);
                if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 || (v543 = *(_DWORD *)(v18 + 2424), v543 >= 7) )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 312))(*(_QWORD *)(v18 + 2632), 0LL);
                  LOBYTE(v30) = 0x80;
                }
                else
                {
                  LODWORD(v30) = 1;
                  LOBYTE(v30) = 1 << v543;
                }
                v544 = *(void (__fastcall **)(_QWORD, _QWORD))(v18 + 328);
                v1999 = v30;
                v544(v541, 0LL);
                (*(void (__fastcall **)(unsigned __int64, _QWORD))(v18 + 328))(v542, 0LL);
                v545 = *(_QWORD ***)(v18 + 1432);
                v546 = 0LL;
                v1996 = 0LL;
                v547 = *v545;
                if ( *v545 != v545 )
                {
                  do
                  {
                    if ( v547 - 3 != v539 )
                    {
                      v548 = *(_QWORD *)((char *)v547 + *(_QWORD *)(v18 + 1864) - 24);
                      if ( (*(_DWORD *)(v548 + *(_QWORD *)(v18 + 1744)) & *(_DWORD *)(v18 + 1768)) == 0 )
                      {
                        v549 = *(_QWORD *)((char *)v547 + *(_QWORD *)(v18 + 1864) - 24);
                        if ( v546 )
                          v549 = 1LL;
                        v546 = (unsigned int *)v549;
                      }
                      _InterlockedOr8((volatile signed __int8 *)(v548 + *(_QWORD *)(v18 + 1736)), v30);
                    }
                    v547 = (_QWORD *)*v547;
                  }
                  while ( v547 != v545 );
                  v1996 = v546;
                }
                v550 = *(_QWORD ***)(v18 + 1304);
                v551 = *v550;
                if ( *v550 != v550 )
                {
                  v552 = v1995;
                  v553 = (unsigned __int8)v30;
                  v554 = ~(_BYTE)v30;
                  v555 = v1993;
                  v556 = v554;
                  v1998 = v553;
                  do
                  {
                    v557 = (char *)v551 - *(_QWORD *)(v18 + 1760);
                    if ( (v557[*(_QWORD *)(v18 + 1736)] & v553) == 0 )
                    {
                      v558 = *(_QWORD *)&v557[*(_QWORD *)(v18 + 1752)];
                      if ( v558 )
                      {
                        if ( v558 != v555 && !*(_DWORD *)(v18 + 2328) )
                        {
                          v559 = (int *)v1992;
                          *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2344) = (char *)v559 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2352) = *v559;
                          *(_QWORD *)(v18 + 2360) = v557;
                          *(_DWORD *)(v18 + 2328) = 1;
                          v560 = *(_DWORD *)(v18 + 2520);
                          if ( (v560 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v560 & 1) != 0 )
                          {
                            v561 = *(unsigned int *)(v18 + 2676);
                            v562 = *(_QWORD *)(v18 + 2104);
                            v563 = *(_QWORD *)(v18 + 2680);
                            v564 = (_QWORD *)(v561 + v18);
                            v565 = v561
                                 + v18
                                 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v561) >> 3);
                            while ( v564 != (_QWORD *)v565 )
                            {
                              *v564 ^= v563;
                              v563 = ((v562 ^ *v564++) + __ROR8__(v563, v563 & 0x3F)) ^ 0xF05;
                            }
                            *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                            if ( v563 != *(_QWORD *)(v18 + 2688) )
                            {
                              v566 = *(_DWORD *)(v18 + 2052);
                              v567 = *(_QWORD *)(v18 + 1416);
                              *(_QWORD *)v567 = v18;
                              *(_DWORD *)(v567 + 16) = v566;
                              if ( !*(_DWORD *)(v18 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v563 ^ *(_QWORD *)(v18 + 2688);
                              sub_140C7F03C(v18, 0LL, v563, 256LL);
                            }
                            v553 = v1998;
                          }
                        }
                      }
                    }
                    _InterlockedAnd8(&v557[*(_QWORD *)(v18 + 1736)], v556);
                    v551 = (_QWORD *)*v551;
                    ++v552;
                  }
                  while ( v551 != v550 );
                  LOBYTE(v30) = v1999;
                  LODWORD(v1995) = v552;
                  v546 = v1996;
                }
                if ( v546 )
                {
                  if ( v546 == (unsigned int *)1 )
                  {
                    v568 = *(_QWORD ***)(v18 + 1432);
                    v569 = *v568;
                    if ( *v568 != v568 )
                    {
                      v570 = (_QWORD *)v1993;
                      do
                      {
                        if ( v569 - 3 != v570 )
                        {
                          _InterlockedAnd8(
                            (volatile signed __int8 *)(*(_QWORD *)((char *)v569 + *(_QWORD *)(v18 + 1864) - 24)
                                                     + *(_QWORD *)(v18 + 1736)),
                            ~(_BYTE)v30);
                          v570 = (_QWORD *)v1993;
                        }
                        v569 = (_QWORD *)*v569;
                      }
                      while ( v569 != v568 );
                    }
                  }
                  else
                  {
                    _InterlockedAnd8((volatile signed __int8 *)v546 + *(_QWORD *)(v18 + 1736), ~(_BYTE)v30);
                  }
                }
                (*(void (__fastcall **)(unsigned __int64, _QWORD))(v18 + 336))(v1997, 0LL);
                if ( (_BYTE)v30 == 0x80 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 320))(*(_QWORD *)(v18 + 2632), 0LL);
                (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 336))(*(_QWORD *)(v18 + 1344), 0LL);
                (*(void (**)(void))(v18 + 400))();
                v310 = v1995;
                goto LABEL_511;
              }
              if ( v63 != 28 )
              {
                if ( v63 == 29 )
                {
                  v364 = (_QWORD *)*((_QWORD *)v38 + 1);
                  v365 = *((unsigned int *)v38 + 4);
                  v366 = v364;
                  *(_DWORD *)(v18 + 2120) += v365;
                  v367 = (const char *)v364;
                  v368 = *(_DWORD *)(v18 + 2100);
                  v369 = *(_QWORD *)(v18 + 2104);
                  if ( v364 < (_QWORD *)((char *)v364 + v365) )
                  {
                    do
                    {
                      _mm_prefetch(v367, 0);
                      v367 += 64;
                    }
                    while ( v367 < (const char *)v364 + v365 );
                  }
                  v370 = *(_QWORD *)(v18 + 2104);
                  v371 = (unsigned int)v365 >> 7;
                  if ( (unsigned int)v365 >> 7 )
                  {
                    do
                    {
                      v372 = 8LL;
                      do
                      {
                        v373 = v366[1] ^ __ROL8__(*v366 ^ v370, v368);
                        v366 += 2;
                        v370 = __ROL8__(v373, v368);
                        --v372;
                      }
                      while ( v372 );
                      v374 = (__ROL8__(v369 ^ ((char *)v366 - (char *)v364), 17) ^ v369 ^ (unsigned __int64)((char *)v366 - (char *)v364))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v2142 = *((_QWORD *)&v374 + 1);
                      v368 = ((unsigned __int8)(v374 ^ BYTE8(v374)) ^ (unsigned __int8)v368) & 0x3F;
                      if ( !v368 )
                        LOBYTE(v368) = 1;
                      --v371;
                    }
                    while ( v371 );
                    v18 = (__int64)v2001;
                  }
                  v375 = v365 & 0x7F;
                  if ( v375 >= 8 )
                  {
                    v376 = (unsigned __int64)v375 >> 3;
                    do
                    {
                      v370 = __ROL8__(*v366++ ^ v370, v368);
                      v375 -= 8;
                      --v376;
                    }
                    while ( v376 );
                  }
                  for ( ; v375; --v375 )
                  {
                    v377 = *(unsigned __int8 *)v366;
                    v366 = (_QWORD *)((char *)v366 + 1);
                    v370 = __ROL8__(v377 ^ v370, v368);
                  }
                  for ( i1 = v370; ; LODWORD(v370) = i1 ^ v370 )
                  {
                    i1 >>= 31;
                    if ( !i1 )
                      break;
                  }
                  v379 = v370 & 0x7FFFFFFF;
                  if ( v379 != *((_DWORD *)v38 + 5) )
                  {
                    if ( !*(_DWORD *)v38 && *((_DWORD *)v38 + 6) )
                      n = 1;
                    v380 = *((_QWORD *)v38 + 1);
                    if ( *((_DWORD *)v38 + 4) )
                    {
                      v381 = 64LL;
                      if ( (*(_DWORD *)(v18 + 2524) & 0x40) != 0 )
                      {
                        v382 = KeGetCurrentIrql();
                        v383 = v380 & 0xFFFFFFFFFFFFF000uLL;
                        v1993 = (v380 + *((unsigned int *)v38 + 4) - 1LL) | 0xFFF;
                        v384 = (v380 & 0xFFFFFFFFFFFFF000uLL) - 1;
                        while ( 1 )
                        {
                          __writecr8(2uLL);
                          while ( 1 )
                          {
                            v385 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                                     v383,
                                     0LL,
                                     v381,
                                     v366);
                            if ( v385 == -1073741267 )
                              break;
                            if ( v385 < 0 )
                            {
LABEL_645:
                              __writecr8(v382);
                              v38 = v1992;
                              goto LABEL_646;
                            }
LABEL_627:
                            v383 += 4096LL;
                            v384 += 4096LL;
                            if ( v384 == v1993 )
                            {
                              __writecr8(v382);
                              v38 = v1992;
                              goto LABEL_629;
                            }
                          }
                          if ( n )
                            goto LABEL_645;
                          if ( v382 > 1u )
                            goto LABEL_627;
                          __writecr8(v382);
                        }
                      }
                    }
LABEL_646:
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *((unsigned int *)v38 + 5) ^ (unsigned __int64)v379;
                    v405 = *((_QWORD *)v38 + 1);
                    if ( !*(_DWORD *)(v18 + 2328) )
                    {
                      *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v18 + 2352) = *(int *)v38;
                      *(_QWORD *)(v18 + 2360) = v405;
                      *(_DWORD *)(v18 + 2328) = 1;
                      v406 = *(_DWORD *)(v18 + 2520);
                      if ( (v406 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v406 & 1) != 0 )
                      {
                        v407 = *(unsigned int *)(v18 + 2676);
                        v408 = *(_QWORD *)(v18 + 2104);
                        v409 = *(_QWORD *)(v18 + 2680);
                        v410 = (_QWORD *)(v407 + v18);
                        v411 = v407 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v407) >> 3);
                        while ( v410 != (_QWORD *)v411 )
                        {
                          *v410 ^= v409;
                          v409 = ((v408 ^ *v410++) + __ROR8__(v409, v409 & 0x3F)) ^ 0xF05;
                        }
                        *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                        if ( v409 != *(_QWORD *)(v18 + 2688) )
                        {
                          v412 = *(_DWORD *)(v18 + 2052);
                          v413 = *(_QWORD *)(v18 + 1416);
                          *(_QWORD *)v413 = v18;
                          *(_DWORD *)(v413 + 16) = v412;
                          if ( !*(_DWORD *)(v18 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v409 ^ *(_QWORD *)(v18 + 2688);
                          sub_140C7F03C(v18, 0LL, v409, 256LL);
                        }
                      }
                    }
                  }
LABEL_629:
                  v386 = (__int64 **)*((_QWORD *)v38 + 1);
                  v387 = *((_DWORD *)v38 + 4) >> 4;
                  v2172 = v386;
                  if ( v387 )
                  {
                    v388 = v1992;
                    v389 = v387;
                    v1993 = v387;
                    do
                    {
                      v390 = v388;
                      v391 = **v386;
                      v2063 = 0LL;
                      v392 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 792))(v391, &v2063);
                      if ( v392 )
                      {
                        do
                        {
                          if ( !(*(__int64 (__fastcall **)(__int64, char *))(v18 + 536))(v392, v2125) )
                          {
                            if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                            {
                              v393 = *(_QWORD **)(v18 + 2760);
                              v394 = 48;
                              v395 = 6LL;
                              do
                              {
                                v394 -= 8;
                                *v393 = *(_QWORD *)v390;
                                v390 += 8;
                                ++v393;
                                --v395;
                              }
                              while ( v395 );
                              if ( v394 )
                              {
                                do
                                {
                                  v396 = *v390++;
                                  *(_BYTE *)v393 = v396;
                                  v393 = (_QWORD *)((char *)v393 + 1);
                                  --v394;
                                }
                                while ( v394 );
                                v18 = (__int64)v2001;
                              }
                              v390 = *(char **)(v18 + 2760);
                            }
                            *((_QWORD *)v390 + 3) = v392;
                            *((_QWORD *)v390 + 4) = v391;
                            v397 = *(_QWORD *)(v18 + 1416);
                            *(_QWORD *)v397 = v390;
                            *(_DWORD *)(v397 + 16) = 48;
                            v398 = *(_QWORD *)(v18 + 1416);
                            *(_QWORD *)(v398 + 8) = v392;
                            *(_DWORD *)(v398 + 20) = 4096;
                            if ( !*(_DWORD *)(v18 + 2328) )
                            {
                              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v18 + 2344) = v390 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v18 + 2352) = *(int *)v390;
                              *(_QWORD *)(v18 + 2360) = 6LL;
                              *(_DWORD *)(v18 + 2328) = 1;
                              v399 = *(_DWORD *)(v18 + 2520);
                              if ( (v399 & 0x20000000) == 0
                                && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0
                                && (v399 & 1) != 0 )
                              {
                                v400 = *(unsigned int *)(v18 + 2676);
                                v401 = *(_QWORD *)(v18 + 2104);
                                v402 = *(_QWORD *)(v18 + 2680);
                                v403 = (_QWORD *)(v400 + v18);
                                v404 = v400
                                     + v18
                                     + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v400) >> 3);
                                while ( v403 != (_QWORD *)v404 )
                                {
                                  *v403 ^= v402;
                                  v402 = ((v401 ^ *v403++) + __ROR8__(v402, v402 & 0x3F)) ^ 0xF05;
                                }
                                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                                if ( v402 != *(_QWORD *)(v18 + 2688) )
                                {
                                  v414 = *(_DWORD *)(v18 + 2052);
                                  v415 = *(_QWORD *)(v18 + 1416);
                                  *(_QWORD *)v415 = v18;
                                  *(_DWORD *)(v415 + 16) = v414;
                                  if ( !*(_DWORD *)(v18 + 2328) )
                                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v402 ^ *(_QWORD *)(v18 + 2688);
                                  sub_140C7F03C(v18, 0LL, v402, 256LL);
                                }
                              }
                            }
                          }
                          v392 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 792))(v391, &v2063);
                        }
                        while ( v392 );
                        v386 = v2172;
                        v389 = v1993;
                        v388 = v1992;
                      }
                      v386 += 2;
                      --v389;
                      v2172 = v386;
                      v1993 = v389;
                    }
                    while ( v389 );
                    goto LABEL_669;
                  }
                  n = 0;
LABEL_2901:
                  v30 = 4LL;
                  goto LABEL_289;
                }
LABEL_2264:
                v1530 = v63 - 2;
                if ( v1530 )
                {
                  v1531 = v1530 - 1;
                  if ( !v1531 )
                  {
                    (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 432))(v2146, *((unsigned int *)v38 + 10));
                    (*(void (__fastcall **)(_BYTE *, _BYTE *))(v18 + 480))(v2146, v2147);
                    KiGetGdtIdt(&v2055, v2159);
                    v1568 = v2056;
                    v1569 = *((unsigned int *)v38 + 4);
                    if ( (*(_BYTE *)(v18 + 2203) & 2) != 0 )
                    {
                      v1570 = *(_QWORD *)(v18 + 2304);
                      v1571 = 38LL;
                      v1572 = 304;
                      v1573 = (_QWORD *)v1570;
                      do
                      {
                        *v1573 = 0LL;
                        v1572 -= 8;
                        ++v1573;
                        --v1571;
                      }
                      while ( v1571 );
                      for ( ; v1572; --v1572 )
                      {
                        *(_BYTE *)v1573 = 0;
                        v1573 = (_QWORD *)((char *)v1573 + 1);
                      }
                      *(_OWORD *)(v1570 + 16) = *(_OWORD *)(v18 + 2152);
                      *(_OWORD *)(v1570 + 32) = *(_OWORD *)(v18 + 2168);
                      *(_OWORD *)(v1570 + 288) = *(_OWORD *)(v18 + 2184);
                      v2076 = 303;
                      v2077 = v1570;
                      *(_WORD *)(v1570 + 16) = v18 + 2200;
                      v2114 = v18 + 2200;
                      *(_WORD *)(v1570 + 22) = (unsigned int)(v18 + 2200) >> 16;
                      *(_DWORD *)(v1570 + 24) = (unsigned __int64)(v18 + 2200) >> 32;
                      _disable();
                      v1574 = sub_140C7F02C(v18);
                      __sidt(v2090);
                      __lidt(&v2076);
                      __writedr(7u, 0LL);
                      *(_WORD *)(v1575 + 16) = v18 + 2206;
                      *(_WORD *)(v1575 + 22) = (unsigned int)(v18 + 2206) >> 16;
                      *(_DWORD *)(v1575 + 24) = (unsigned __int64)(v18 + 2206) >> 32;
                      if ( (*(_BYTE *)(v18 + 2203) & 0x20) != 0 )
                      {
                        *(_WORD *)(v18 + 2250) = KiGetSs();
                        __writedr(0, v18 + 2250);
                        __writedr(7u, 0x70001uLL);
                        *(_QWORD *)(v18 + 2312) = KiErrataSkx55Present(v18 + 2250);
                        __writedr(7u, 0LL);
                        __writedr(0, 0LL);
                      }
                      else
                      {
                        *(_QWORD *)(v18 + 2312) = KiErrata704Present();
                      }
                      *(_DWORD *)(v18 + 2320) = KeGetPcr()->Prcb.Number;
                      __lidt(v2090);
                      if ( (*(_BYTE *)(v18 + 2203) & 0x40) != 0 )
                      {
                        if ( (v1574 & 0x40000) != 0 )
                          __asm { stac }
                        else
                          __asm { clac }
                      }
                      _enable();
                    }
                    Ldtr = (unsigned __int16)KiGetLdtr();
                    Tr = KiGetTr();
                    *(_DWORD *)(v18 + 2120) += v1569;
                    v1578 = *(_DWORD *)(v18 + 2100);
                    v1579 = v1568;
                    v1580 = *(_QWORD *)(v18 + 2104);
                    v1581 = (const char *)v1568;
                    v1582 = Tr;
                    if ( v1568 < (_QWORD *)((char *)v1568 + v1569) )
                    {
                      do
                      {
                        _mm_prefetch(v1581, 0);
                        v1581 += 64;
                      }
                      while ( v1581 < (const char *)v1568 + v1569 );
                    }
                    v1583 = *(_QWORD *)(v18 + 2104);
                    v1584 = (unsigned int)v1569 >> 7;
                    if ( (unsigned int)v1569 >> 7 )
                    {
                      do
                      {
                        v1585 = 8LL;
                        do
                        {
                          v1586 = v1579[1] ^ __ROL8__(*v1579 ^ v1583, v1578);
                          v1579 += 2;
                          v1583 = __ROL8__(v1586, v1578);
                          --v1585;
                        }
                        while ( v1585 );
                        v1587 = (__ROL8__(v1580 ^ ((char *)v1579 - (char *)v1568), 17) ^ v1580 ^ (unsigned __int64)((char *)v1579 - (char *)v1568))
                              * (unsigned __int128)0x7010008004002001uLL;
                        v2115 = *((_QWORD *)&v1587 + 1);
                        v1578 = ((unsigned __int8)(v1587 ^ BYTE8(v1587)) ^ (unsigned __int8)v1578) & 0x3F;
                        if ( !v1578 )
                          LOBYTE(v1578) = 1;
                        --v1584;
                      }
                      while ( v1584 );
                      v18 = (__int64)v2001;
                    }
                    v1588 = v1569 & 0x7F;
                    if ( v1588 >= 8 )
                    {
                      v1589 = (unsigned __int64)v1588 >> 3;
                      do
                      {
                        v1583 = __ROL8__(*v1579++ ^ v1583, v1578);
                        v1588 -= 8;
                        --v1589;
                      }
                      while ( v1589 );
                    }
                    for ( n = 0; v1588; --v1588 )
                    {
                      v1590 = *(unsigned __int8 *)v1579;
                      v1579 = (_QWORD *)((char *)v1579 + 1);
                      v1583 = __ROL8__(v1590 ^ v1583, v1578);
                    }
                    for ( i2 = v1583; ; LODWORD(v1583) = i2 ^ v1583 )
                    {
                      i2 >>= 31;
                      if ( !i2 )
                        break;
                    }
                    v1592 = v1583 & 0x7FFFFFFF;
                    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD *))(v18 + 424))(v2147, 1LL, v1579);
                    v1593 = v1992;
                    if ( v1592 != *((_DWORD *)v1992 + 5)
                      || v2055 != *((_WORD *)v1992 + 22)
                      || (_WORD)Ldtr
                      || (_WORD)v1582 != 64 )
                    {
                      if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                      {
                        v1594 = *(_QWORD **)(v18 + 2760);
                        v1595 = 48;
                        v1596 = 6LL;
                        do
                        {
                          v1595 -= 8;
                          *v1594 = *(_QWORD *)v1593;
                          v1593 += 8;
                          ++v1594;
                          --v1596;
                        }
                        while ( v1596 );
                        for ( ; v1595; --v1595 )
                        {
                          v1597 = *v1593++;
                          *(_BYTE *)v1594 = v1597;
                          v1594 = (_QWORD *)((char *)v1594 + 1);
                        }
                        v1593 = *(char **)(v18 + 2760);
                      }
                      *((_QWORD *)v1593 + 3) = v2056;
                      *((_QWORD *)v1593 + 4) = v1592;
                      if ( (_WORD)Ldtr )
                      {
                        *((_QWORD *)v1593 + 3) = Ldtr;
                      }
                      else if ( (_WORD)v1582 != 64 )
                      {
                        *((_QWORD *)v1593 + 3) = v1582;
                      }
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *((unsigned int *)v1593 + 5) ^ (unsigned __int64)v1592;
                      v1598 = *((_QWORD *)v1593 + 1);
                      if ( !*(_DWORD *)(v18 + 2328) )
                      {
                        *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v18 + 2344) = v1593 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v18 + 2352) = *(int *)v1593;
                        *(_QWORD *)(v18 + 2360) = v1598;
                        *(_DWORD *)(v18 + 2328) = 1;
                        v1599 = *(_DWORD *)(v18 + 2520);
                        if ( (v1599 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1599 & 1) != 0 )
                        {
                          v1600 = *(unsigned int *)(v18 + 2676);
                          v1601 = *(_QWORD *)(v18 + 2104);
                          v1602 = *(_QWORD *)(v18 + 2680);
                          v1603 = (_QWORD *)(v1600 + v18);
                          v1604 = v1600
                                + v18
                                + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1600) >> 3);
                          while ( v1603 != (_QWORD *)v1604 )
                          {
                            *v1603 ^= v1602;
                            v1602 = ((v1601 ^ *v1603++) + __ROR8__(v1602, v1602 & 0x3F)) ^ 0xF05;
                          }
                          *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                          if ( v1602 != *(_QWORD *)(v18 + 2688) )
                          {
                            v1605 = *(_DWORD *)(v18 + 2052);
                            v1606 = *(_QWORD *)(v18 + 1416);
                            *(_QWORD *)v1606 = v18;
                            *(_DWORD *)(v1606 + 16) = v1605;
                            if ( !*(_DWORD *)(v18 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1602 ^ *(_QWORD *)(v18 + 2688);
                            sub_140C7F03C(v18, 0LL, v1602, 256LL);
                          }
                        }
                      }
                    }
                    *(_DWORD *)(v18 + 2120) += 0x8000;
                    goto LABEL_2486;
                  }
                  if ( v1531 == 20 )
                  {
                    (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 432))(v2144, *((unsigned int *)v38 + 10));
                    (*(void (__fastcall **)(_BYTE *, _BYTE *))(v18 + 480))(v2144, v2145);
                    v1537 = *(_QWORD *)(v18 + 2648);
                    if ( v1537 )
                    {
                      v1538 = *(_DWORD *)(v1537 + 800);
                    }
                    else
                    {
                      v1539 = __readmsr(0x832u);
                      v1538 = v1539;
                    }
                    v1540 = *(_QWORD *)(v18 + 2648);
                    if ( v1540 )
                    {
                      v1541 = *(_DWORD *)(v1540 + 832);
                    }
                    else
                    {
                      v1542 = __readmsr(0x834u);
                      v1541 = v1542;
                    }
                    (*(void (__fastcall **)(_BYTE *))(v18 + 424))(v2145);
                    if ( (*(_BYTE *)(v18 + 2203) & 0x10) != 0 )
                    {
                      _disable();
                      v1543 = *(struct _KPRCB **)(v18 + 2304);
                      v1544 = 38LL;
                      v1545 = 304;
                      v1546 = v1543;
                      do
                      {
                        *(_QWORD *)&v1546->MxCsr = 0LL;
                        v1545 -= 8;
                        v1546 = (struct _KPRCB *)((char *)v1546 + 8);
                        --v1544;
                      }
                      while ( v1544 );
                      if ( v1545 )
                      {
                        v1544 = 0xFFFFFFFFLL;
                        do
                        {
                          LOBYTE(v1546->MxCsr) = 0;
                          v1546 = (struct _KPRCB *)((char *)v1546 + 1);
                          --v1545;
                        }
                        while ( v1545 );
                      }
                      *(_OWORD *)&v1543->NextThread = *(_OWORD *)(v18 + 2152);
                      *(_OWORD *)&v1543->NestingLevel = *(_OWORD *)(v18 + 2168);
                      *(_OWORD *)&v1543->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v18 + 2184);
                      v2074 = 303;
                      v2075 = v1543;
                      LOWORD(v1543->NextThread) = v18 + 2200;
                      v1547 = (unsigned __int64)(v18 + 2200) >> 16;
                      v2113 = v18 + 2200;
                      HIWORD(v1543->NextThread) = v1547;
                      LODWORD(v1543->IdleThread) = (unsigned __int64)(v18 + 2200) >> 32;
                      __sidt(v2089);
                      __lidt(&v2074);
                      if ( (*(_DWORD *)(v18 + 2524) & 0x20000) == 0 )
                      {
                        v1543 = KeGetCurrentPrcb();
                        v1547 = v18 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v18 + 1208) = v18 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v18 + 1216) = v1543;
                        **(_QWORD **)(v18 + 1224) = 0LL;
                        **(_QWORD **)(v18 + 1232) = 277LL;
                      }
                      KiErrata361Present(v1547, v1543, v1544, 1LL);
                      if ( (*(_DWORD *)(v18 + 2524) & 0x20000) == 0 )
                      {
                        **(_QWORD **)(v18 + 1208) = 0xA3A03F5891C8B4E8uLL;
                        **(_QWORD **)(v18 + 1216) = 0LL;
                        **(_QWORD **)(v18 + 1224) = 0LL;
                        **(_QWORD **)(v18 + 1232) = 0LL;
                      }
                      __lidt(v2089);
                      _enable();
                    }
                    v1548 = *((unsigned int *)v38 + 6);
                    if ( (v1538 & *((_DWORD *)v38 + 7)) != (_DWORD)v1548
                      || (v1538 & 0x10000) == 0
                      && (unsigned __int8)v1538 != 209
                      && (unsigned int)(unsigned __int8)v1538 - 253 >= 2 )
                    {
                      v1549 = v1548 | ((unsigned __int64)*((unsigned int *)v38 + 10) << 48) | 0x32000000000LL;
                      if ( !*(_DWORD *)(v18 + 2328) )
                      {
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1538 ^ v1548;
                        if ( !*(_DWORD *)(v18 + 2328) )
                        {
                          *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2352) = *(int *)v38;
                          *(_QWORD *)(v18 + 2360) = v1549;
                          *(_DWORD *)(v18 + 2328) = 1;
                          v1550 = *(_DWORD *)(v18 + 2520);
                          if ( (v1550 & 0x20000000) == 0
                            && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0
                            && (v1550 & 1) != 0 )
                          {
                            v1551 = *(unsigned int *)(v18 + 2676);
                            v1552 = *(_QWORD *)(v18 + 2104);
                            v1553 = *(_QWORD *)(v18 + 2680);
                            v1554 = (_QWORD *)(v1551 + v18);
                            v1555 = v1551
                                  + v18
                                  + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1551) >> 3);
                            while ( v1554 != (_QWORD *)v1555 )
                            {
                              *v1554 ^= v1553;
                              v1553 = ((v1552 ^ *v1554++) + __ROR8__(v1553, v1553 & 0x3F)) ^ 0xF05;
                            }
                            *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                            if ( v1553 != *(_QWORD *)(v18 + 2688) )
                            {
                              v1556 = *(_DWORD *)(v18 + 2052);
                              v1557 = *(_QWORD *)(v18 + 1416);
                              *(_QWORD *)v1557 = v18;
                              *(_DWORD *)(v1557 + 16) = v1556;
                              if ( !*(_DWORD *)(v18 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1553 ^ *(_QWORD *)(v18 + 2688);
                              sub_140C7F03C(v18, 0LL, v1553, 256LL);
                            }
                          }
                        }
                      }
                    }
                    v1558 = *((unsigned int *)v38 + 8);
                    if ( (v1541 & *((_DWORD *)v38 + 9)) != (_DWORD)v1558
                      || (v1541 & 0x10000) == 0
                      && (unsigned __int8)v1541 != 209
                      && (unsigned int)(unsigned __int8)v1541 - 253 >= 2 )
                    {
                      v1559 = v1558 | ((unsigned __int64)*((unsigned int *)v38 + 10) << 48) | 0x34000000000LL;
                      if ( !*(_DWORD *)(v18 + 2328) )
                      {
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1541 ^ v1558;
                        if ( !*(_DWORD *)(v18 + 2328) )
                        {
                          *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v18 + 2352) = *(int *)v38;
                          *(_QWORD *)(v18 + 2360) = v1559;
                          *(_DWORD *)(v18 + 2328) = 1;
                          v1560 = *(_DWORD *)(v18 + 2520);
                          if ( (v1560 & 0x20000000) == 0
                            && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0
                            && (v1560 & 1) != 0 )
                          {
                            v1561 = *(unsigned int *)(v18 + 2676);
                            v1562 = *(_QWORD *)(v18 + 2104);
                            v1563 = *(_QWORD *)(v18 + 2680);
                            v1564 = (_QWORD *)(v1561 + v18);
                            v1565 = v1561
                                  + v18
                                  + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1561) >> 3);
                            while ( v1564 != (_QWORD *)v1565 )
                            {
                              *v1564 ^= v1563;
                              v1563 = ((v1562 ^ *v1564++) + __ROR8__(v1563, v1563 & 0x3F)) ^ 0xF05;
                            }
                            *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                            if ( v1563 != *(_QWORD *)(v18 + 2688) )
                            {
                              v1566 = *(_DWORD *)(v18 + 2052);
                              v1567 = *(_QWORD *)(v18 + 1416);
                              *(_QWORD *)v1567 = v18;
                              *(_DWORD *)(v1567 + 16) = v1566;
                              if ( !*(_DWORD *)(v18 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1563 ^ *(_QWORD *)(v18 + 2688);
                              sub_140C7F03C(v18, 0LL, v1563, 256LL);
                            }
                          }
                        }
                      }
                    }
                    *(_DWORD *)(v18 + 2120) += 0x8000;
                    goto LABEL_289;
                  }
                  if ( *(_DWORD *)(v18 + 2328) )
                    goto LABEL_289;
                  *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2352) = 257LL;
                  *(_QWORD *)(v18 + 2360) = 0LL;
                  *(_DWORD *)(v18 + 2328) = 1;
                  v1532 = *(_DWORD *)(v18 + 2520);
                  if ( (v1532 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v1532 & 1) == 0 )
                    goto LABEL_289;
                  v1533 = *(unsigned int *)(v18 + 2676);
                  v1534 = *(_QWORD *)(v18 + 2104);
                  v478 = *(_QWORD *)(v18 + 2680);
                  v1535 = (_QWORD *)(v1533 + v18);
                  v1536 = v1533 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1533) >> 3);
                  while ( v1535 != (_QWORD *)v1536 )
                  {
                    *v1535 ^= v478;
                    v478 = ((v1534 ^ *v1535++) + __ROR8__(v478, v478 & 0x3F)) ^ 0xF05;
                  }
                  goto LABEL_763;
                }
                v1607 = *((unsigned int *)v38 + 10);
                v1608 = *(void (__fastcall **)(_QWORD, _QWORD))(v18 + 432);
                v1999 = 0;
                v1608(v2148, v1607);
                (*(void (__fastcall **)(_BYTE *, _BYTE *))(v18 + 480))(v2148, v2149);
                KiGetGdtIdt(v2158, &v2078);
                v1609 = 0;
                v2002 = v2079;
                v1610 = (__int64)(v2079 + 1);
                v1993 = (__int64)(v2079 + 1);
                while ( 2 )
                {
                  v1611 = 0LL;
                  v2030 = *(_QWORD *)(v18 + 2280);
                  v1612 = 0LL;
                  v1613 = *(unsigned int **)(v18 + 2288);
                  v1614 = *(unsigned int *)(v18 + 2256);
                  v1998 = 0;
                  v1995 = 0LL;
                  v1615 = *(unsigned int *)(v18 + 2252);
                  v1996 = v1613;
                  v1997 = 0LL;
                  v1616 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  v1617 = *(_WORD *)v1610;
                  LOWORD(v2020) = *(_WORD *)(v1610 - 4);
                  WORD1(v2020) = *(_WORD *)(v1610 + 2);
                  v1618 = *(_DWORD *)(v1610 + 4);
                  v1619 = *(_QWORD *)(v18 + 1576);
                  HIDWORD(v2020) = v1618;
                  v1620 = v2020;
                  v2181 = v1617;
                  v1621 = v1619 + 8LL * v1609;
                  if ( v2020 == v1621 )
                  {
                    if ( (v1617 & 0x6000) != 0 )
                    {
                      __writecr8(v1616);
                      goto LABEL_2391;
                    }
                    v1612 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, _QWORD))(v18 + 1136))(
                                         v1609,
                                         v1621,
                                         v1613,
                                         0LL);
                    if ( v1612 )
                    {
                      v1622 = *(_QWORD *)(v1615 + v1612);
                      v1995 = v1622;
                      if ( v1609 < 0x30 )
                      {
                        __writecr8(v1616);
                        goto LABEL_2390;
                      }
                      v1625 = *(_QWORD *)(v1614 + v1612);
                      v1613 = v1996;
LABEL_2399:
                      __writecr8(v1616);
                      v1626 = 0;
                      if ( v1612 )
                      {
                        v1626 = v1998;
                      }
                      else
                      {
                        if ( v1620 < v2030 )
                          goto LABEL_2390;
                        if ( v1620 > (unsigned __int64)v1613 )
                          goto LABEL_2390;
                        v1627 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v18 + 544))(
                                  *(_QWORD *)(v18 + 2296),
                                  v2030,
                                  (unsigned int)(v2020 - v2030));
                        if ( !v1627 || (*(_DWORD *)(v1627 + 36) & 0x2000000) != 0 )
                          goto LABEL_2390;
                      }
                      if ( *(_WORD *)(v1993 - 2) == 16 && (*(_WORD *)v1993 & 0x1F00) == 0xE00 && *(__int16 *)v1993 < 0 )
                      {
                        v1628 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *, _QWORD))(v18 + 632))(
                                                  v1620,
                                                  &v2030,
                                                  0LL);
                        if ( v1628 && !v1626 && v2030 + *v1628 == v1620 && v2030 == *(_QWORD *)(v18 + 2280) )
                        {
                          if ( !v1612 )
                            goto LABEL_2414;
                        }
                        else if ( !v1612 )
                        {
                          goto LABEL_2390;
                        }
                        if ( (v2181 & 0x6000) != 0 )
                          goto LABEL_2390;
                        if ( v1612 == -1 )
                        {
LABEL_2414:
                          n = 0;
                        }
                        else
                        {
                          v1634 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(v18 + 632))(
                                                    v1622,
                                                    &v2030,
                                                    0LL);
                          if ( !v1634 )
                            goto LABEL_2390;
                          if ( v2030 + *v1634 != v1622 )
                          {
                            n = 0;
                            goto LABEL_2436;
                          }
                          if ( v2030 != *(_QWORD *)(v18 + 2280) )
                            goto LABEL_2390;
                          v1635 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v18 + 544))(
                                    *(_QWORD *)(v18 + 2296),
                                    v2030,
                                    (unsigned int)(v1622 - v2030));
                          n = 0;
                          if ( !v1635
                            || (*(_DWORD *)(v1635 + 36) & 0x2000000) != 0
                            || v1609 == 254 && v1625 != *(_QWORD *)(v18 + 2264) )
                          {
LABEL_2436:
                            v1611 = v1995;
                            goto LABEL_2392;
                          }
                        }
                      }
                      else
                      {
LABEL_2390:
                        v1611 = v1995;
LABEL_2391:
                        n = 0;
LABEL_2392:
                        v1623 = *(_QWORD *)(v18 + 1416);
                        *(_QWORD *)v1623 = v1620;
                        *(_DWORD *)(v1623 + 16) = 128;
                        if ( v1611 )
                        {
                          v1624 = *(_QWORD *)(v18 + 1416);
                          *(_QWORD *)(v1624 + 8) = v1611;
                          *(_DWORD *)(v1624 + 20) = 128;
                        }
                        v1999 = 1;
                      }
                      ++v1609;
                      v1610 = v1993 + 16;
                      v1993 += 16LL;
                      if ( v1609 > 0xFF )
                      {
                        if ( (*(_BYTE *)(v18 + 2203) & 1) != 0 )
                        {
                          _disable();
                          v1629 = sub_140C7F02C(v18);
                          v1630 = 3221225602LL;
                          v1631 = __readmsr(0xC0000082);
                          v1632 = (unsigned __int64)(v18 + 2202) >> 32;
                          __writemsr(0xC0000082, v18 + 2202);
                          if ( (*(_DWORD *)(v18 + 2524) & 0x20000) == 0 )
                          {
                            v1633 = KeGetCurrentPrcb();
                            v1632 = v18 - 0x5C5FC0A76E374B18LL;
                            **(_QWORD **)(v18 + 1208) = v18 - 0x5C5FC0A76E374B18LL;
                            **(_QWORD **)(v18 + 1216) = v1633;
                            **(_QWORD **)(v18 + 1224) = 3221225602LL;
                            v1630 = *(_QWORD *)(v18 + 1232);
                            *(_QWORD *)v1630 = 274LL;
                          }
                          ((void (__fastcall *)(__int64, unsigned __int64))(v18 + 2204))(v1630, v1632);
                          if ( (*(_DWORD *)(v18 + 2524) & 0x20000) == 0 )
                          {
                            **(_QWORD **)(v18 + 1208) = 0xA3A03F5891C8B4E8uLL;
                            **(_QWORD **)(v18 + 1216) = 0LL;
                            **(_QWORD **)(v18 + 1224) = 0LL;
                            **(_QWORD **)(v18 + 1232) = 0LL;
                          }
                          __writemsr(0xC0000082, v1631);
                          if ( (*(_BYTE *)(v18 + 2203) & 0x40) != 0 )
                          {
                            if ( (v1629 & 0x40000) != 0 )
                              __asm { stac }
                            else
                              __asm { clac }
                          }
                          _enable();
                        }
                        v1636 = v2002;
                        *(_DWORD *)(v18 + 2120) += 848;
                        v1637 = v1636;
                        v1638 = *(_DWORD *)(v18 + 2100);
                        v1639 = (const char *)v1636;
                        v1640 = *(_QWORD *)(v18 + 2104);
                        if ( v1636 < v1636 + 212 )
                        {
                          do
                          {
                            _mm_prefetch(v1639, 0);
                            v1639 += 64;
                          }
                          while ( v1639 < (const char *)v1636 + 848 );
                        }
                        v1641 = *(_QWORD *)(v18 + 2104);
                        v1642 = 6;
                        do
                        {
                          v1643 = 8LL;
                          do
                          {
                            v1644 = *((_QWORD *)v1637 + 1) ^ __ROL8__(*(_QWORD *)v1637 ^ v1641, v1638);
                            v1637 += 4;
                            v1641 = __ROL8__(v1644, v1638);
                            --v1643;
                          }
                          while ( v1643 );
                          v1645 = (__ROL8__(v1640 ^ ((char *)v1637 - (char *)v1636), 17) ^ v1640 ^ (unsigned __int64)((char *)v1637 - (char *)v1636))
                                * (unsigned __int128)0x7010008004002001uLL;
                          v2116 = *((_QWORD *)&v1645 + 1);
                          v1638 = ((unsigned __int8)(v1645 ^ BYTE8(v1645)) ^ (unsigned __int8)v1638) & 0x3F;
                          if ( !v1638 )
                            LOBYTE(v1638) = 1;
                          --v1642;
                        }
                        while ( v1642 );
                        v1646 = v1999;
                        v1647 = 80;
                        v1648 = 10LL;
                        do
                        {
                          v1641 = __ROL8__(*(_QWORD *)v1637 ^ v1641, v1638);
                          v1637 += 2;
                          v1647 -= 8;
                          --v1648;
                        }
                        while ( v1648 );
                        for ( ; v1647; --v1647 )
                        {
                          v1649 = *(unsigned __int8 *)v1637;
                          v1637 = (unsigned int *)((char *)v1637 + 1);
                          v1641 = __ROL8__(v1649 ^ v1641, v1638);
                        }
                        for ( i3 = v1641; ; LODWORD(v1641) = i3 ^ v1641 )
                        {
                          i3 >>= 31;
                          if ( !i3 )
                            break;
                        }
                        *(_DWORD *)(v18 + 2120) += 16;
                        v1651 = v1636 + 900;
                        v1652 = *(_DWORD *)(v18 + 2100);
                        v1653 = (unsigned __int64)(v1636 + 904);
                        v1654 = *(_QWORD *)(v18 + 2104);
                        v1655 = v1641 & 0x7FFFFFFF;
                        v1656 = (const char *)v1651;
                        if ( (unsigned __int64)v1651 < v1653 )
                        {
                          do
                          {
                            _mm_prefetch(v1656, 0);
                            v1656 += 64;
                          }
                          while ( (unsigned __int64)v1656 < v1653 );
                        }
                        v1657 = 16;
                        v1658 = 2LL;
                        do
                        {
                          v1654 = __ROL8__(*v1651++ ^ v1654, v1652);
                          v1657 -= 8;
                          --v1658;
                        }
                        while ( v1658 );
                        for ( ; v1657; --v1657 )
                        {
                          v1659 = *(unsigned __int8 *)v1651;
                          v1651 = (_QWORD *)((char *)v1651 + 1);
                          v1654 = __ROL8__(v1659 ^ v1654, v1652);
                        }
                        for ( i4 = v1654; ; LODWORD(v1654) = i4 ^ v1654 )
                        {
                          i4 >>= 31;
                          if ( !i4 )
                            break;
                        }
                        v1661 = v1654 & 0x7FFFFFFF;
                        (*(void (__fastcall **)(_BYTE *, _QWORD *))(v18 + 424))(v2149, v1651);
                        v1662 = (int *)v1992;
                        v1663 = *((unsigned int *)v1992 + 5);
                        if ( v1655 != (_DWORD)v1663
                          || v1661 != *((_QWORD *)v1992 + 3)
                          || v2078 != *((_WORD *)v1992 + 22)
                          || v1646 )
                        {
                          if ( !v1646 )
                          {
                            if ( v1661 == *((_QWORD *)v1992 + 3) )
                            {
                              if ( !*(_DWORD *)(v18 + 2328) )
                              {
                                v1664 = v1663 ^ v1655;
                                goto LABEL_2473;
                              }
                            }
                            else if ( !*(_DWORD *)(v18 + 2328) )
                            {
                              v1664 = *((unsigned int *)v1992 + 6) ^ (unsigned __int64)v1661;
LABEL_2473:
                              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1664;
                            }
                          }
                          v1665 = *((_QWORD *)v1662 + 1);
                          if ( !*(_DWORD *)(v18 + 2328) )
                          {
                            *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v18 + 2344) = (char *)v1662 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v18 + 2352) = *v1662;
                            *(_QWORD *)(v18 + 2360) = v1665;
                            *(_DWORD *)(v18 + 2328) = 1;
                            v1666 = *(_DWORD *)(v18 + 2520);
                            if ( (v1666 & 0x20000000) == 0
                              && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0
                              && (v1666 & 1) != 0 )
                            {
                              v1667 = *(unsigned int *)(v18 + 2676);
                              v1668 = *(_QWORD *)(v18 + 2104);
                              v1669 = *(_QWORD *)(v18 + 2680);
                              v1670 = (_QWORD *)(v1667 + v18);
                              v1671 = v1667
                                    + v18
                                    + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1667) >> 3);
                              while ( v1670 != (_QWORD *)v1671 )
                              {
                                *v1670 ^= v1669;
                                v1669 = ((v1668 ^ *v1670++) + __ROR8__(v1669, v1669 & 0x3F)) ^ 0xF05;
                              }
                              *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                              if ( v1669 != *(_QWORD *)(v18 + 2688) )
                              {
                                v1672 = *(_DWORD *)(v18 + 2052);
                                v1673 = *(_QWORD *)(v18 + 1416);
                                *(_QWORD *)v1673 = v18;
                                *(_DWORD *)(v1673 + 16) = v1672;
                                if ( !*(_DWORD *)(v18 + 2328) )
                                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1669 ^ *(_QWORD *)(v18 + 2688);
                                sub_140C7F03C(v18, 0LL, v1669, 256LL);
                              }
                            }
                          }
                        }
                        *(_DWORD *)(v18 + 2120) += 0x10000;
LABEL_2486:
                        v30 = 4LL;
                        goto LABEL_289;
                      }
                      continue;
                    }
                    v1613 = v1996;
                    v1612 = -1LL;
                    v1625 = 0LL;
                  }
                  else
                  {
                    v1625 = v1997;
                  }
                  break;
                }
                v1622 = v1995;
                goto LABEL_2399;
              }
              v416 = *((unsigned int *)v38 + 4);
              if ( !(_DWORD)v416 )
              {
                v2087 = v38 + 48;
                v417 = *((_WORD *)v38 + 20);
                v1991 = &v2024;
                v2086[0] = v417;
                v2086[1] = v417;
                v418 = *(_QWORD *)(v18 + 1288);
                v419 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v18 + 504);
                LOBYTE(v1990) = 0;
                if ( v419(v2086, 0LL, 0LL, 0LL, v418, v1990, 0LL, &v2024) < 0 )
                  goto LABEL_289;
                if ( (*(_DWORD *)(v2024 + 16) & 0x10) == 0 )
                {
                  (*(void (__fastcall **)(__int64))(v18 + 496))(v2024);
                  goto LABEL_289;
                }
                (*(void (__fastcall **)(_QWORD, char *))(v18 + 528))(*(_QWORD *)(v18 + 504), v2163);
                if ( v2164 )
                {
                  v420 = v2164;
                  v2032 = v2164;
                  v421 = (*(__int64 (__fastcall **)(unsigned __int64))(v18 + 520))(v2164);
                  if ( v421 )
                  {
                    v422 = *(_DWORD *)(v421 + 80);
                    v2021 = v422;
                    goto LABEL_679;
                  }
                }
                else
                {
                  v420 = v2032;
                }
                v422 = v2021;
LABEL_679:
                (*(void (__fastcall **)(_QWORD, char *))(v18 + 528))(*((_QWORD *)v38 + 3), v2165);
                if ( v2166 )
                {
                  v424 = v2166;
                  v2033 = v2166;
                  v425 = (*(__int64 (__fastcall **)(unsigned __int64))(v18 + 520))(v2166);
                  if ( v425 )
                  {
                    v426 = *(_DWORD *)(v425 + 80);
                    v2017 = v426;
                    goto LABEL_684;
                  }
                }
                else
                {
                  v424 = v2033;
                }
                v426 = v2017;
LABEL_684:
                if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) == 0 )
                {
                  *((_QWORD *)v38 + 1) = v2024 + 112;
                  *((_DWORD *)v38 + 4) = 224;
                }
                LOBYTE(v423) = 0;
                while ( 1 )
                {
                  v427 = *(_QWORD *)(v2024 + 8LL * (unsigned __int8)v423 + 112);
                  if ( !v422 || v427 < v420 || v427 > v422 + v420 - 1 )
                  {
                    if ( !v426 )
                      break;
                    v428 = v424 + v426 - 1LL;
                    if ( v427 < v424 || v427 > v428 )
                      break;
                  }
                  v426 = v2017;
                  LOBYTE(v423) = v423 + 1;
                  if ( (unsigned __int8)v423 >= 0x1Cu )
                  {
                    if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                    {
                      (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(v18 + 496))(
                        v2024,
                        v423,
                        v427,
                        v2017);
                      n = 0;
                      goto LABEL_289;
                    }
                    v429 = (_QWORD *)*((_QWORD *)v38 + 1);
                    v430 = *((unsigned int *)v38 + 4);
                    v431 = v429;
                    *(_DWORD *)(v18 + 2120) += v430;
                    v432 = (const char *)v429;
                    v433 = *(_DWORD *)(v18 + 2100);
                    v434 = *(_QWORD *)(v18 + 2104);
                    if ( v429 < (_QWORD *)((char *)v429 + v430) )
                    {
                      do
                      {
                        _mm_prefetch(v432, 0);
                        v432 += 64;
                      }
                      while ( v432 < (const char *)v429 + v430 );
                    }
                    v435 = *(_QWORD *)(v18 + 2104);
                    v436 = (unsigned int)v430 >> 7;
                    if ( (unsigned int)v430 >> 7 )
                    {
                      do
                      {
                        v437 = 8LL;
                        do
                        {
                          v438 = v431[1] ^ __ROL8__(*v431 ^ v435, v433);
                          v431 += 2;
                          v435 = __ROL8__(v438, v433);
                          --v437;
                        }
                        while ( v437 );
                        v439 = (__ROL8__(v434 ^ ((char *)v431 - (char *)v429), 17) ^ v434 ^ (unsigned __int64)((char *)v431 - (char *)v429))
                             * (unsigned __int128)0x7010008004002001uLL;
                        v2126 = *((_QWORD *)&v439 + 1);
                        v433 = ((unsigned __int8)(v439 ^ BYTE8(v439)) ^ (unsigned __int8)v433) & 0x3F;
                        if ( !v433 )
                          LOBYTE(v433) = 1;
                        --v436;
                      }
                      while ( v436 );
                      v18 = (__int64)v2001;
                      v420 = v2032;
                    }
                    v440 = v430 & 0x7F;
                    if ( v440 >= 8 )
                    {
                      v441 = (unsigned __int64)v440 >> 3;
                      do
                      {
                        v435 = __ROL8__(*v431++ ^ v435, v433);
                        v440 -= 8;
                        --v441;
                      }
                      while ( v441 );
                    }
                    for ( ; v440; --v440 )
                    {
                      v442 = *(unsigned __int8 *)v431;
                      v431 = (_QWORD *)((char *)v431 + 1);
                      v435 = __ROL8__(v442 ^ v435, v433);
                    }
                    for ( i5 = v435 >> 31; i5; i5 >>= 31 )
                      LODWORD(v435) = i5 ^ v435;
                    v444 = 0;
                    *((_DWORD *)v38 + 5) = v435 & 0x7FFFFFFF;
                    v445 = *(const char **)(v2024 + 80);
                    if ( !v445
                      || (v444 = *(_DWORD *)v445, v446 = 0, (v447 = (unsigned int)(*(_DWORD *)v445 - 8) >> 3) == 0) )
                    {
LABEL_723:
                      *(_DWORD *)(v18 + 2120) += v444;
                      v449 = v445;
                      v450 = *(_DWORD *)(v18 + 2100);
                      v451 = v445;
                      v452 = *(_QWORD *)(v18 + 2104);
                      v453 = &v445[v444];
                      if ( v445 < v453 )
                      {
                        do
                        {
                          _mm_prefetch(v451, 0);
                          v451 += 64;
                        }
                        while ( v451 < v453 );
                      }
                      n = 0;
                      v454 = v444 >> 7;
                      v455 = *(_QWORD *)(v18 + 2104);
                      if ( v444 >> 7 )
                      {
                        do
                        {
                          v456 = 8LL;
                          do
                          {
                            v457 = *((_QWORD *)v449 + 1) ^ __ROL8__(*(_QWORD *)v449 ^ v455, v450);
                            v449 += 16;
                            v455 = __ROL8__(v457, v450);
                            --v456;
                          }
                          while ( v456 );
                          v458 = __ROL8__(v452 ^ (v449 - v445), 17) ^ v452 ^ (v449 - v445);
                          v2127 = ((unsigned __int64)v458 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v450 = ((unsigned __int8)(v2127 ^ v458) ^ (unsigned __int8)v450) & 0x3F;
                          if ( !v450 )
                            LOBYTE(v450) = 1;
                          --v454;
                        }
                        while ( v454 );
                        v18 = (__int64)v2001;
                      }
                      v459 = v444 & 0x7F;
                      if ( v459 >= 8 )
                      {
                        v460 = (unsigned __int64)v459 >> 3;
                        do
                        {
                          v455 = __ROL8__(*(_QWORD *)v449 ^ v455, v450);
                          v449 += 8;
                          v459 -= 8;
                          --v460;
                        }
                        while ( v460 );
                      }
                      for ( ; v459; --v459 )
                      {
                        v461 = *(unsigned __int8 *)v449++;
                        v455 = __ROL8__(v461 ^ v455, v450);
                      }
                      for ( i6 = v455; ; LODWORD(v455) = i6 ^ v455 )
                      {
                        i6 >>= 31;
                        if ( !i6 )
                          break;
                      }
                      *((_DWORD *)v38 + 11) = v455 & 0x7FFFFFFF;
                      goto LABEL_237;
                    }
                    while ( 1 )
                    {
                      v448 = *(_QWORD *)&v445[8 * v446 + 8];
                      if ( v448
                        && (!v2021 || v448 < v420 || v448 > v420 + v2021 - 1LL)
                        && (!v2017 || v448 < v2033 || v448 > v2017 + v2033 - 1) )
                      {
                        break;
                      }
                      if ( ++v446 >= v447 )
                        goto LABEL_723;
                    }
                    *((_QWORD *)v38 + 4) = v448;
                    n = 0;
                    v463 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v463 = v38;
                    *(_DWORD *)(v463 + 16) = 48;
                    if ( *(_DWORD *)(v18 + 2328) )
                      goto LABEL_2486;
                    *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2352) = *(int *)v38;
                    *(_QWORD *)(v18 + 2360) = v445;
                    *(_DWORD *)(v18 + 2328) = 1;
                    v464 = *(_DWORD *)(v18 + 2520);
                    if ( (v464 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v464 & 1) == 0 )
                      goto LABEL_2486;
                    v465 = *(unsigned int *)(v18 + 2676);
                    v466 = *(_QWORD *)(v18 + 2104);
                    v337 = *(_QWORD *)(v18 + 2680);
                    v467 = (_QWORD *)(v465 + v18);
                    v468 = v465 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v465) >> 3);
                    while ( v467 != (_QWORD *)v468 )
                    {
                      *v467 ^= v337;
                      v337 = ((v466 ^ *v467++) + __ROR8__(v337, v337 & 0x3F)) ^ 0xF05;
                    }
LABEL_554:
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v337 == *(_QWORD *)(v18 + 2688) )
                      goto LABEL_2486;
                    v340 = *(_DWORD *)(v18 + 2052);
                    v341 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v341 = v18;
                    *(_DWORD *)(v341 + 16) = v340;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v337 ^ *(_QWORD *)(v18 + 2688);
                    sub_140C7F03C(v18, 0LL, v337, 256LL);
LABEL_558:
                    v30 = 4LL;
                    goto LABEL_289;
                  }
                }
                if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                {
                  v469 = *(_QWORD **)(v18 + 2760);
                  v470 = 48;
                  v471 = 6LL;
                  do
                  {
                    v470 -= 8;
                    *v469 = *(_QWORD *)v38;
                    v38 += 8;
                    ++v469;
                    --v471;
                  }
                  while ( v471 );
                  for ( n = 0; v470; --v470 )
                  {
                    v472 = *v38++;
                    *(_BYTE *)v469 = v472;
                    v469 = (_QWORD *)((char *)v469 + 1);
                  }
                  v38 = *(char **)(v18 + 2760);
                }
                else
                {
                  n = 0;
                }
                *((_QWORD *)v38 + 4) = v427;
                v473 = *(_QWORD *)(v18 + 1416);
                *(_QWORD *)v473 = v38;
                *(_DWORD *)(v473 + 16) = 48;
                v474 = *((_QWORD *)v38 + 1);
                if ( *(_DWORD *)(v18 + 2328) )
                  goto LABEL_289;
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *(int *)v38;
                *(_QWORD *)(v18 + 2360) = v474;
                *(_DWORD *)(v18 + 2328) = 1;
                v475 = *(_DWORD *)(v18 + 2520);
                if ( (v475 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v475 & 1) == 0 )
                  goto LABEL_289;
                v476 = *(unsigned int *)(v18 + 2676);
                v477 = *(_QWORD *)(v18 + 2104);
                v478 = *(_QWORD *)(v18 + 2680);
                v479 = (_QWORD *)(v476 + v18);
                v480 = v476 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v476) >> 3);
                while ( v479 != (_QWORD *)v480 )
                {
                  *v479 ^= v478;
                  v478 = ((v477 ^ *v479++) + __ROR8__(v478, v478 & 0x3F)) ^ 0xF05;
                }
                goto LABEL_763;
              }
              v483 = (_QWORD *)*((_QWORD *)v38 + 1);
              *(_DWORD *)(v18 + 2120) += v416;
              v484 = v483;
              v485 = *(_DWORD *)(v18 + 2100);
              v486 = (const char *)v483;
              v487 = *(_QWORD *)(v18 + 2104);
              if ( v483 < (_QWORD *)((char *)v483 + v416) )
              {
                do
                {
                  _mm_prefetch(v486, 0);
                  v486 += 64;
                }
                while ( v486 < (const char *)v483 + v416 );
              }
              v488 = *(_QWORD *)(v18 + 2104);
              v489 = (unsigned int)v416 >> 7;
              if ( (unsigned int)v416 >> 7 )
              {
                do
                {
                  v490 = 8LL;
                  do
                  {
                    v491 = v484[1] ^ __ROL8__(*v484 ^ v488, v485);
                    v484 += 2;
                    v488 = __ROL8__(v491, v485);
                    --v490;
                  }
                  while ( v490 );
                  v492 = (__ROL8__(v487 ^ ((char *)v484 - (char *)v483), 17) ^ v487 ^ (unsigned __int64)((char *)v484 - (char *)v483))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2130 = *((_QWORD *)&v492 + 1);
                  v485 = ((unsigned __int8)(v492 ^ BYTE8(v492)) ^ (unsigned __int8)v485) & 0x3F;
                  if ( !v485 )
                    LOBYTE(v485) = 1;
                  --v489;
                }
                while ( v489 );
                v18 = (__int64)v2001;
              }
              v493 = v416 & 0x7F;
              if ( v493 >= 8 )
              {
                v494 = (unsigned __int64)v493 >> 3;
                do
                {
                  v488 = __ROL8__(*v484++ ^ v488, v485);
                  v493 -= 8;
                  --v494;
                }
                while ( v494 );
              }
              for ( ; v493; --v493 )
              {
                v495 = *(unsigned __int8 *)v484;
                v484 = (_QWORD *)((char *)v484 + 1);
                v488 = __ROL8__(v495 ^ v488, v485);
              }
              for ( i7 = v488; ; LODWORD(v488) = i7 ^ v488 )
              {
                i7 >>= 31;
                if ( !i7 )
                  break;
              }
              v497 = v488 & 0x7FFFFFFF;
              if ( v497 == *((_DWORD *)v38 + 5) )
              {
                n = 0;
              }
              else
              {
                if ( !*(_DWORD *)v38 && *((_DWORD *)v38 + 6) )
                  n = 1;
                v498 = *((_QWORD *)v38 + 1);
                if ( *((_DWORD *)v38 + 4) )
                {
                  v499 = 64LL;
                  if ( (*(_DWORD *)(v18 + 2524) & 0x40) != 0 )
                  {
                    v500 = KeGetCurrentIrql();
                    v501 = v498 & 0xFFFFFFFFFFFFF000uLL;
                    v1993 = (v498 + *((unsigned int *)v38 + 4) - 1LL) | 0xFFF;
                    v502 = (v498 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      __writecr8(2uLL);
                      while ( 1 )
                      {
                        v503 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                                 v501,
                                 0LL,
                                 v499,
                                 v484);
                        if ( v503 == -1073741267 )
                          break;
                        if ( v503 < 0 )
                        {
LABEL_816:
                          __writecr8(v500);
                          v38 = v1992;
                          goto LABEL_817;
                        }
LABEL_797:
                        v501 += 4096LL;
                        v502 += 4096LL;
                        if ( v502 == v1993 )
                        {
                          __writecr8(v500);
                          v38 = v1992;
                          n = 0;
                          goto LABEL_799;
                        }
                      }
                      if ( n )
                        goto LABEL_816;
                      if ( v500 > 1u )
                        goto LABEL_797;
                      __writecr8(v500);
                    }
                  }
                }
LABEL_817:
                n = 0;
                if ( !*(_DWORD *)(v18 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v497 ^ (unsigned __int64)*((unsigned int *)v38 + 5);
                v520 = *((_QWORD *)v38 + 1);
                if ( !*(_DWORD *)(v18 + 2328) )
                {
                  *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2352) = *(int *)v38;
                  *(_QWORD *)(v18 + 2360) = v520;
                  *(_DWORD *)(v18 + 2328) = 1;
                  v521 = *(_DWORD *)(v18 + 2520);
                  if ( (v521 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v521 & 1) != 0 )
                  {
                    v522 = *(unsigned int *)(v18 + 2676);
                    v523 = *(_QWORD *)(v18 + 2104);
                    v524 = *(_QWORD *)(v18 + 2680);
                    v525 = (_QWORD *)(v522 + v18);
                    v526 = v522 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v522) >> 3);
                    while ( v525 != (_QWORD *)v526 )
                    {
                      *v525 ^= v524;
                      v524 = ((v523 ^ *v525++) + __ROR8__(v524, v524 & 0x3F)) ^ 0xF05;
                    }
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v524 != *(_QWORD *)(v18 + 2688) )
                    {
                      v527 = *(_DWORD *)(v18 + 2052);
                      v528 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)v528 = v18;
                      *(_DWORD *)(v528 + 16) = v527;
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v524 ^ *(_QWORD *)(v18 + 2688);
                      sub_140C7F03C(v18, 0LL, v524, 256LL);
                    }
                  }
                }
              }
LABEL_799:
              v504 = 0;
              v2024 = *((_QWORD *)v38 + 1) - 112LL;
              v505 = *(const char **)(v2024 + 80);
              if ( v505 )
                v504 = *(_DWORD *)v505;
              *(_DWORD *)(v18 + 2120) += v504;
              v506 = v505;
              v507 = *(_DWORD *)(v18 + 2100);
              v508 = v505;
              v509 = *(_QWORD *)(v18 + 2104);
              v510 = &v505[v504];
              if ( v505 < v510 )
              {
                do
                {
                  _mm_prefetch(v508, 0);
                  v508 += 64;
                }
                while ( v508 < v510 );
              }
              v511 = *(_QWORD *)(v18 + 2104);
              v512 = v504 >> 7;
              if ( v504 >> 7 )
              {
                do
                {
                  v513 = 8LL;
                  do
                  {
                    v514 = *((_QWORD *)v506 + 1) ^ __ROL8__(*(_QWORD *)v506 ^ v511, v507);
                    v506 += 16;
                    v511 = __ROL8__(v514, v507);
                    --v513;
                  }
                  while ( v513 );
                  v515 = (__ROL8__(v509 ^ (v506 - v505), 17) ^ v509 ^ (unsigned __int64)(v506 - v505))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2134 = *((_QWORD *)&v515 + 1);
                  v507 = ((unsigned __int8)(v515 ^ BYTE8(v515)) ^ (unsigned __int8)v507) & 0x3F;
                  if ( !v507 )
                    LOBYTE(v507) = 1;
                  --v512;
                }
                while ( v512 );
                v18 = (__int64)v2001;
              }
              v516 = v504 & 0x7F;
              if ( v516 >= 8 )
              {
                v517 = (unsigned __int64)v516 >> 3;
                do
                {
                  v511 = __ROL8__(*(_QWORD *)v506 ^ v511, v507);
                  v506 += 8;
                  v516 -= 8;
                  --v517;
                }
                while ( v517 );
              }
              for ( ; v516; --v516 )
              {
                v518 = *(unsigned __int8 *)v506++;
                v511 = __ROL8__(v518 ^ v511, v507);
              }
              for ( i8 = v511; ; LODWORD(v511) = i8 ^ v511 )
              {
                i8 >>= 31;
                if ( !i8 )
                  break;
              }
              v529 = *((unsigned int *)v38 + 11);
              v530 = v511 & 0x7FFFFFFF;
              if ( v530 == (_DWORD)v529 )
                goto LABEL_237;
              if ( *(_DWORD *)(v18 + 2328) )
                goto LABEL_237;
              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v529 ^ v530;
              if ( *(_DWORD *)(v18 + 2328) )
                goto LABEL_237;
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *(int *)v38;
              *(_QWORD *)(v18 + 2360) = v505;
              *(_DWORD *)(v18 + 2328) = 1;
              v531 = *(_DWORD *)(v18 + 2520);
              if ( (v531 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v531 & 1) != 0 )
              {
                v532 = *(unsigned int *)(v18 + 2676);
                v533 = *(_QWORD *)(v18 + 2104);
                v534 = *(_QWORD *)(v18 + 2680);
                v535 = (_QWORD *)(v532 + v18);
                v536 = v532 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v532) >> 3);
                while ( v535 != (_QWORD *)v536 )
                {
                  *v535 ^= v534;
                  v534 = ((v533 ^ *v535++) + __ROR8__(v534, v534 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v534 != *(_QWORD *)(v18 + 2688) )
                {
                  v537 = *(_DWORD *)(v18 + 2052);
                  v538 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v538 = v18;
                  *(_DWORD *)(v538 + 16) = v537;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v534 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v534, 256LL);
                  goto LABEL_237;
                }
              }
              goto LABEL_2901;
            }
            if ( (*(_DWORD *)(v18 + 2128) & 1) != 0 )
              goto LABEL_289;
            v276 = 0;
            v571 = *(unsigned int **)(v18 + 1440);
            v572 = *(_QWORD *)(v18 + 1344);
            v1993 = *(_QWORD *)(v18 + 1448);
            v573 = *(void (__fastcall **)(_QWORD, _QWORD))(v18 + 392);
            v2173 = 0;
            v1996 = v571;
            v573((unsigned int)(v63 - 26), 1LL);
            if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 || (v574 = *(_DWORD *)(v18 + 2424), v574 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 312))(*(_QWORD *)(v18 + 2632), 0LL);
              v575 = 0x80;
            }
            else
            {
              v575 = 1 << v574;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v18 + 328))(v572, 0LL);
            v576 = *(volatile signed __int8 ***)(v18 + 1304);
            v577 = *v576;
            if ( *v576 != (volatile signed __int8 *)v576 )
            {
              do
              {
                _InterlockedOr8(&v577[*(_QWORD *)(v18 + 1736) - *(_QWORD *)(v18 + 1760)], v575);
                v577 = *(volatile signed __int8 **)v577;
                ++v276;
              }
              while ( v577 != (volatile signed __int8 *)v576 );
              v2173 = v276;
            }
            (*(void (__fastcall **)(unsigned int *, _QWORD))(v18 + 328))(v571, 0LL);
            v578 = *(_QWORD ***)(v18 + 1432);
            v579 = *v578;
            if ( *v578 != v578 )
            {
              v580 = v1993;
              v581 = (int *)v1992;
              do
              {
                v582 = (char *)v579 - *(_QWORD *)(v18 + 1872);
                if ( v582 != (char *)v580 )
                {
                  v583 = *(_QWORD *)&v582[*(_QWORD *)(v18 + 1864)];
                  if ( (v575 & *(_BYTE *)(v583 + *(_QWORD *)(v18 + 1736))) == 0
                    && (*(_DWORD *)(v583 + *(_QWORD *)(v18 + 1744)) & *(_DWORD *)(v18 + 1768)) != 0
                    && !*(_DWORD *)(v18 + 2328) )
                  {
                    *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2344) = (char *)v581 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2352) = *v581;
                    *(_QWORD *)(v18 + 2360) = v583;
                    *(_DWORD *)(v18 + 2328) = 1;
                    v584 = *(_DWORD *)(v18 + 2520);
                    if ( (v584 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v584 & 1) != 0 )
                    {
                      v585 = *(unsigned int *)(v18 + 2676);
                      v586 = *(_QWORD *)(v18 + 2104);
                      v587 = *(_QWORD *)(v18 + 2680);
                      v588 = (_QWORD *)(v585 + v18);
                      v589 = v585 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v585) >> 3);
                      while ( v588 != (_QWORD *)v589 )
                      {
                        *v588 ^= v587;
                        v587 = ((v586 ^ *v588++) + __ROR8__(v587, v587 & 0x3F)) ^ 0xF05;
                      }
                      *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                      if ( v587 != *(_QWORD *)(v18 + 2688) )
                      {
                        v590 = *(_DWORD *)(v18 + 2052);
                        v591 = *(_QWORD *)(v18 + 1416);
                        *(_QWORD *)v591 = v18;
                        *(_DWORD *)(v591 + 16) = v590;
                        if ( !*(_DWORD *)(v18 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v587 ^ *(_QWORD *)(v18 + 2688);
                        sub_140C7F03C(v18, 0LL, v587, 256LL);
                      }
                    }
                  }
                  _InterlockedAnd8((volatile signed __int8 *)(v583 + *(_QWORD *)(v18 + 1736)), ~v575);
                  v580 = v1993;
                }
                v579 = (_QWORD *)*v579;
              }
              while ( v579 != v578 );
              v276 = v2173;
            }
            (*(void (__fastcall **)(unsigned int *, _QWORD))(v18 + 336))(v1996, 0LL);
            if ( v575 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 320))(*(_QWORD *)(v18 + 2632), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 336))(*(_QWORD *)(v18 + 1344), 0LL);
            (*(void (**)(void))(v18 + 400))();
LABEL_465:
            *(_DWORD *)(v18 + 2120) += v276 << 8;
LABEL_466:
            v30 = 4LL;
LABEL_467:
            n = 0;
            goto LABEL_289;
          }
          v592 = *(_QWORD ***)(v18 + 1320);
          v2174 = 0;
          v1997 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v18 + 896))((unsigned int)(v63 - 25), 1LL);
          _disable();
          v593 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v18 + 1624));
          _enable();
          (*(void (__fastcall **)(__int64))(v18 + 376))(v593);
          LOBYTE(v594) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(v18 + 248))(*(_QWORD *)(v18 + 1328), v594);
          v595 = *(unsigned int ***)(v18 + 1568);
          v1998 = 0;
          v596 = (__int64)*v595;
          v597 = **v595;
          v1993 = (__int64)(*v595 + 4);
          v1996 = (unsigned int *)(v1993 + 24 * v597);
          if ( *(_BYTE *)(v596 + 12) )
          {
            v598 = *v592;
            LODWORD(v597) = 0;
            while ( v598 != v592 )
            {
              v598 = (_QWORD *)*v598;
              LODWORD(v597) = v597 + 1;
            }
          }
          v599 = *(unsigned int *)(v18 + 2096);
          v600 = __rdtsc();
          v601 = __ROR8__(v600, 3);
          v2135 = ((v600 ^ v601) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v602 = ((unsigned __int16)(8193 * (v600 ^ v601)) ^ (unsigned __int16)v2135) & 0x7FF;
          v603 = __rdtsc();
          v604 = (v603 ^ __ROR8__(v603, 3)) * (unsigned __int128)0x7010008004002001uLL;
          v2136 = *((_QWORD *)&v604 + 1);
          v605 = (*((_QWORD *)&v604 + 1) ^ (unsigned __int64)v604) % (unsigned int)(v602 + 1);
          v606 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v18 + 256))(
                   66LL,
                   (unsigned int)(v602 + 8 * v597),
                   v599);
          v607 = v606;
          if ( !v606 )
          {
            ++*(_DWORD *)(v18 + 2656);
            goto LABEL_940;
          }
          v608 = v605;
          v609 = (_QWORD *)v606;
          if ( (unsigned int)v605 >= 8 )
          {
            v610 = (unsigned __int64)(unsigned int)v605 >> 3;
            do
            {
              v611 = __rdtsc();
              v608 -= 8;
              v612 = (v611 ^ __ROR8__(v611, 3)) * (unsigned __int128)0x7010008004002001uLL;
              v2156 = *((_QWORD *)&v612 + 1);
              *v609++ = v612 ^ *((_QWORD *)&v612 + 1);
              --v610;
            }
            while ( v610 );
            v18 = (__int64)v2001;
          }
          if ( v608 )
          {
            v613 = __rdtsc();
            v614 = (v613 ^ __ROR8__(v613, 3)) * (unsigned __int128)0x7010008004002001uLL;
            v2093 = *((_QWORD *)&v614 + 1);
            v615 = v614 ^ *((_QWORD *)&v614 + 1);
            do
            {
              *(_BYTE *)v609 = v615;
              v609 = (_QWORD *)((char *)v609 + 1);
              v615 >>= 8;
              --v608;
            }
            while ( v608 );
          }
          v616 = v602 - v605;
          v617 = (_QWORD *)(v607 + (unsigned int)v605 + (unsigned int)(8 * v597));
          if ( v616 >= 8 )
          {
            v618 = (unsigned __int64)v616 >> 3;
            do
            {
              v619 = __rdtsc();
              v616 -= 8;
              v620 = (v619 ^ __ROR8__(v619, 3)) * (unsigned __int128)0x7010008004002001uLL;
              v2094 = *((_QWORD *)&v620 + 1);
              *v617++ = v620 ^ *((_QWORD *)&v620 + 1);
              --v618;
            }
            while ( v618 );
          }
          if ( v616 )
          {
            v621 = __rdtsc();
            v622 = (v621 ^ __ROR8__(v621, 3)) * (unsigned __int128)0x7010008004002001uLL;
            v2095 = *((_QWORD *)&v622 + 1);
            v623 = v622 ^ *((_QWORD *)&v622 + 1);
            do
            {
              *(_BYTE *)v617 = v623;
              v617 = (_QWORD *)((char *)v617 + 1);
              v623 >>= 8;
              --v616;
            }
            while ( v616 );
          }
          v2046 = v607;
          v624 = v607 + (unsigned int)v605;
          if ( v624 )
          {
            v625 = *v592;
            v626 = v1998;
            if ( *v592 != v592 )
            {
              v627 = v1998;
              do
              {
                v617 = (_QWORD *)((char *)v625 - *(_QWORD *)(v18 + 1880));
                if ( v626 < (unsigned int)v597 )
                {
                  v628 = v626++;
                  *(_QWORD *)(v624 + 8 * v628) = *(_QWORD *)((char *)v617 + *(_QWORD *)(v18 + 1888));
                  v627 = v2174;
                }
                v625 = (_QWORD *)*v625;
                v2174 = ++v627;
              }
              while ( v625 != v592 );
            }
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(v18 + 928))(v624, v626, v617);
            v629 = v1993;
            v630 = v626 - 1;
            v631 = v1996;
            v632 = (int *)v1992;
            do
            {
              v633 = *(_QWORD *)(v629 + 8);
              v634 = 0;
              v635 = v630;
              while ( v635 >= v634 )
              {
                v636 = (v635 + v634) >> 1;
                if ( v633 >= *(_QWORD *)(v624 + 8LL * v636) )
                {
                  if ( v633 <= *(_QWORD *)(v624 + 8LL * v636) )
                    goto LABEL_965;
                  v634 = v636 + 1;
                }
                else
                {
                  if ( !v636 )
                    break;
                  v635 = v636 - 1;
                }
              }
              if ( !*(_DWORD *)(v18 + 2328) )
              {
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = (char *)v632 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *v632;
                *(_QWORD *)(v18 + 2360) = v633;
                *(_DWORD *)(v18 + 2328) = 1;
                v637 = *(_DWORD *)(v18 + 2520);
                if ( (v637 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v637 & 1) != 0 )
                {
                  v638 = *(unsigned int *)(v18 + 2676);
                  v639 = *(_QWORD *)(v18 + 2104);
                  v640 = *(_QWORD *)(v18 + 2680);
                  v641 = (_QWORD *)(v638 + v18);
                  v642 = v638 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v638) >> 3);
                  while ( v641 != (_QWORD *)v642 )
                  {
                    *v641 ^= v640;
                    v640 = ((v639 ^ *v641++) + __ROR8__(v640, v640 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                  if ( v640 != *(_QWORD *)(v18 + 2688) )
                  {
                    v643 = *(_DWORD *)(v18 + 2052);
                    v644 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v644 = v18;
                    *(_DWORD *)(v644 + 16) = v643;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v640 ^ *(_QWORD *)(v18 + 2688);
                    sub_140C7F03C(v18, 0LL, v640, 256LL);
                  }
                }
              }
LABEL_965:
              v629 += 24LL;
            }
            while ( v629 < (unsigned __int64)v631 );
            n = 0;
          }
          else
          {
LABEL_940:
            n = 0;
            v2046 = 0LL;
          }
          (*(void (__fastcall **)(_QWORD))(v18 + 296))(*(_QWORD *)(v18 + 1328));
          (*(void (**)(void))(v18 + 384))();
          (*(void (__fastcall **)(unsigned __int64))(v18 + 904))(v1997);
          if ( !v2046 )
            goto LABEL_237;
          *(_DWORD *)(v18 + 2120) += v2174 << 9;
          v216 = *(void (**)(void))(v18 + 264);
          goto LABEL_380;
        }
        if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 && (*(_DWORD *)(v18 + 2524) & 0x1000) == 0 )
        {
          v645 = __rdtsc();
          v646 = (v645 ^ __ROR8__(v645, 3)) * (unsigned __int128)0x7010008004002001uLL;
          v2096 = *((_QWORD *)&v646 + 1);
          *(_DWORD *)(v18 + 2116) = ((unsigned __int64)v646 ^ *((_QWORD *)&v646 + 1)) % 5;
        }
LABEL_972:
        v647 = *(_DWORD *)(v18 + 2116);
        if ( !v647 )
        {
          v2059 = 0LL;
          v1082 = v38;
          v654 = 0;
          for ( i9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v18 + 776))(&v2059, 1LL);
                i9;
                i9 = (*(__int64 (__fastcall **)(__int64 *))(v18 + 776))(&v2059) )
          {
            ++v654;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v18 + 536))(i9, v2108) )
            {
              if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
              {
                v1084 = *(_QWORD **)(v18 + 2760);
                v1085 = 48;
                v1086 = 6LL;
                do
                {
                  v1085 -= 8;
                  *v1084 = *(_QWORD *)v1082;
                  v1082 += 8;
                  ++v1084;
                  --v1086;
                }
                while ( v1086 );
                if ( v1085 )
                {
                  do
                  {
                    v1087 = *v1082++;
                    *(_BYTE *)v1084 = v1087;
                    v1084 = (_QWORD *)((char *)v1084 + 1);
                    --v1085;
                  }
                  while ( v1085 );
                  v18 = (__int64)v2001;
                }
                v1082 = *(char **)(v18 + 2760);
              }
              *((_QWORD *)v1082 + 3) = i9;
              v1088 = *(_QWORD *)(v18 + 1416);
              *(_QWORD *)v1088 = v1082;
              *(_DWORD *)(v1088 + 16) = 48;
              v1089 = *(_QWORD *)(v18 + 1416);
              *(_QWORD *)(v1089 + 8) = i9;
              *(_DWORD *)(v1089 + 20) = 4096;
              if ( !*(_DWORD *)(v18 + 2328) )
              {
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = v1082 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *(int *)v1082;
                *(_QWORD *)(v18 + 2360) = 3LL;
                *(_DWORD *)(v18 + 2328) = 1;
                v1090 = *(_DWORD *)(v18 + 2520);
                if ( (v1090 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1090 & 1) != 0 )
                {
                  v1091 = *(unsigned int *)(v18 + 2676);
                  v1092 = *(_QWORD *)(v18 + 2104);
                  v1093 = *(_QWORD *)(v18 + 2680);
                  v1094 = (_QWORD *)(v1091 + v18);
                  v1095 = v1091 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1091) >> 3);
                  while ( v1094 != (_QWORD *)v1095 )
                  {
                    *v1094 ^= v1093;
                    v1093 = ((v1092 ^ *v1094++) + __ROR8__(v1093, v1093 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                  if ( v1093 != *(_QWORD *)(v18 + 2688) )
                  {
                    v1096 = *(_DWORD *)(v18 + 2052);
                    v1097 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v1097 = v18;
                    *(_DWORD *)(v1097 + 16) = v1096;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1093 ^ *(_QWORD *)(v18 + 2688);
                    sub_140C7F03C(v18, 0LL, v1093, 256LL);
                  }
                }
              }
            }
          }
          goto LABEL_1623;
        }
        v648 = v647 - 1;
        if ( !v648 )
        {
          v1065 = v38;
          v2058 = 0LL;
          v654 = 0;
          v1066 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          for ( i10 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v18 + 784))(&v2058, 1LL);
                i10;
                i10 = (*(__int64 (__fastcall **)(__int64 *))(v18 + 784))(&v2058) )
          {
            ++v654;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v18 + 536))(i10, v2107) )
            {
              if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
              {
                v1068 = *(_QWORD **)(v18 + 2760);
                v1069 = 48;
                v1070 = 6LL;
                do
                {
                  v1069 -= 8;
                  *v1068 = *(_QWORD *)v1065;
                  v1065 += 8;
                  ++v1068;
                  --v1070;
                }
                while ( v1070 );
                if ( v1069 )
                {
                  do
                  {
                    v1071 = *v1065++;
                    *(_BYTE *)v1068 = v1071;
                    v1068 = (_QWORD *)((char *)v1068 + 1);
                    --v1069;
                  }
                  while ( v1069 );
                  v18 = (__int64)v2001;
                }
                v1065 = *(char **)(v18 + 2760);
              }
              *((_QWORD *)v1065 + 3) = i10;
              v1072 = *(_QWORD *)(v18 + 1416);
              *(_QWORD *)v1072 = v1065;
              *(_DWORD *)(v1072 + 16) = 48;
              v1073 = *(_QWORD *)(v18 + 1416);
              *(_QWORD *)(v1073 + 8) = i10;
              *(_DWORD *)(v1073 + 20) = 4096;
              if ( !*(_DWORD *)(v18 + 2328) )
              {
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = v1065 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *(int *)v1065;
                *(_QWORD *)(v18 + 2360) = 4LL;
                *(_DWORD *)(v18 + 2328) = 1;
                v1074 = *(_DWORD *)(v18 + 2520);
                if ( (v1074 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1074 & 1) != 0 )
                {
                  v1075 = *(unsigned int *)(v18 + 2676);
                  v1076 = *(_QWORD *)(v18 + 2104);
                  v1077 = *(_QWORD *)(v18 + 2680);
                  v1078 = (_QWORD *)(v1075 + v18);
                  v1079 = v1075 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1075) >> 3);
                  while ( v1078 != (_QWORD *)v1079 )
                  {
                    *v1078 ^= v1077;
                    v1077 = ((v1076 ^ *v1078++) + __ROR8__(v1077, v1077 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                  if ( v1077 != *(_QWORD *)(v18 + 2688) )
                  {
                    v1080 = *(_DWORD *)(v18 + 2052);
                    v1081 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v1081 = v18;
                    *(_DWORD *)(v1081 + 16) = v1080;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1077 ^ *(_QWORD *)(v18 + 2688);
                    sub_140C7F03C(v18, 0LL, v1077, 256LL);
                  }
                }
              }
            }
          }
          __writecr8(v1066);
          goto LABEL_1623;
        }
        v649 = v648 - 1;
        if ( !v649 )
        {
          v1047 = v38;
          v1048 = 0;
          v654 = 0;
          while ( 1 )
          {
            v2027 = 0;
            while ( 1 )
            {
              do
              {
                if ( !(*(unsigned int (__fastcall **)(_QWORD, int *, __int64 *))(v18 + 768))(v1048, &v2027, &v2047) )
                  goto LABEL_1578;
                v1049 = (*(__int64 (__fastcall **)(__int64))(v18 + 736))(v2047);
              }
              while ( !v1049 );
              ++v654;
              v1050 = (*(__int64 (__fastcall **)(__int64))(v18 + 744))(v1049);
              if ( !(*(__int64 (__fastcall **)(__int64, char *))(v18 + 536))(v1050, v2106) )
                break;
              (*(void (__fastcall **)(__int64, __int64))(v18 + 752))(v2047, v1049);
            }
            if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
            {
              v1051 = *(_QWORD **)(v18 + 2760);
              v1052 = 48;
              v1053 = 6LL;
              do
              {
                v1052 -= 8;
                *v1051 = *(_QWORD *)v1047;
                v1047 += 8;
                ++v1051;
                --v1053;
              }
              while ( v1053 );
              if ( v1052 )
              {
                do
                {
                  v1054 = *v1047++;
                  *(_BYTE *)v1051 = v1054;
                  v1051 = (_QWORD *)((char *)v1051 + 1);
                  --v1052;
                }
                while ( v1052 );
                v18 = (__int64)v2001;
              }
              v1047 = *(char **)(v18 + 2760);
            }
            *((_QWORD *)v1047 + 3) = v1050;
            v1055 = *(_QWORD *)(v18 + 1416);
            *(_QWORD *)v1055 = v1047;
            *(_DWORD *)(v1055 + 16) = 48;
            v1056 = *(_QWORD *)(v18 + 1416);
            *(_QWORD *)(v1056 + 8) = v1050;
            *(_DWORD *)(v1056 + 20) = 4096;
            if ( !*(_DWORD *)(v18 + 2328) )
            {
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = v1047 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *(int *)v1047;
              *(_QWORD *)(v18 + 2360) = v1048;
              *(_DWORD *)(v18 + 2328) = 1;
              v1057 = *(_DWORD *)(v18 + 2520);
              if ( (v1057 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v1057 & 1) != 0 )
              {
                v1058 = *(unsigned int *)(v18 + 2676);
                v1059 = *(_QWORD *)(v18 + 2104);
                v1060 = *(_QWORD *)(v18 + 2680);
                v1061 = (_QWORD *)(v1058 + v18);
                v1062 = v1058 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v1058) >> 3);
                while ( v1061 != (_QWORD *)v1062 )
                {
                  *v1061 ^= v1060;
                  v1060 = ((v1059 ^ *v1061++) + __ROR8__(v1060, v1060 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v1060 != *(_QWORD *)(v18 + 2688) )
                {
                  v1063 = *(_DWORD *)(v18 + 2052);
                  v1064 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v1064 = v18;
                  *(_DWORD *)(v1064 + 16) = v1063;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v1060 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v1060, 256LL);
                }
              }
            }
LABEL_1578:
            if ( ++v1048 >= 3 )
              goto LABEL_1623;
          }
        }
        v650 = v649 - 1;
        if ( v650 )
        {
          v651 = v650 - 1;
          if ( !v651 )
          {
            v669 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v18 + 800);
            v654 = 0;
            v1999 = 0;
            v670 = v669(0LL, 1LL);
            if ( v670 )
            {
              v671 = v1992;
              do
              {
                v2064 = 0LL;
                v672 = v671;
                v673 = 1;
                v674 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 792))(v670, &v2064);
                if ( v674 )
                {
                  do
                  {
                    ++v673;
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(v18 + 536))(v674, v2098) )
                    {
                      if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                      {
                        v675 = *(_QWORD **)(v18 + 2760);
                        v676 = 48;
                        v677 = 6LL;
                        do
                        {
                          v676 -= 8;
                          *v675 = *(_QWORD *)v672;
                          v672 += 8;
                          ++v675;
                          --v677;
                        }
                        while ( v677 );
                        if ( v676 )
                        {
                          do
                          {
                            v678 = *v672++;
                            *(_BYTE *)v675 = v678;
                            v675 = (_QWORD *)((char *)v675 + 1);
                            --v676;
                          }
                          while ( v676 );
                          v18 = (__int64)v2001;
                        }
                        v672 = *(char **)(v18 + 2760);
                      }
                      *((_QWORD *)v672 + 3) = v674;
                      *((_QWORD *)v672 + 4) = v670;
                      v679 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)v679 = v672;
                      *(_DWORD *)(v679 + 16) = 48;
                      v680 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)(v680 + 8) = v674;
                      *(_DWORD *)(v680 + 20) = 4096;
                      if ( !*(_DWORD *)(v18 + 2328) )
                      {
                        *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v18 + 2344) = v672 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v18 + 2352) = *(int *)v672;
                        *(_QWORD *)(v18 + 2360) = 6LL;
                        *(_DWORD *)(v18 + 2328) = 1;
                        v681 = *(_DWORD *)(v18 + 2520);
                        if ( (v681 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v681 & 1) != 0 )
                        {
                          v682 = *(unsigned int *)(v18 + 2676);
                          v683 = *(_QWORD *)(v18 + 2104);
                          v684 = *(_QWORD *)(v18 + 2680);
                          v685 = (_QWORD *)(v682 + v18);
                          v686 = v682
                               + v18
                               + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v682) >> 3);
                          while ( v685 != (_QWORD *)v686 )
                          {
                            *v685 ^= v684;
                            v684 = ((v683 ^ *v685++) + __ROR8__(v684, v684 & 0x3F)) ^ 0xF05;
                          }
                          *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                          if ( v684 != *(_QWORD *)(v18 + 2688) )
                          {
                            v687 = *(_DWORD *)(v18 + 2052);
                            v688 = *(_QWORD *)(v18 + 1416);
                            *(_QWORD *)v688 = v18;
                            *(_DWORD *)(v688 + 16) = v687;
                            if ( !*(_DWORD *)(v18 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v684 ^ *(_QWORD *)(v18 + 2688);
                            sub_140C7F03C(v18, 0LL, v684, 256LL);
                          }
                        }
                      }
                    }
                    v674 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 792))(v670, &v2064);
                  }
                  while ( v674 );
                  v654 = v1999;
                  v671 = v1992;
                }
                v689 = *(__int64 (__fastcall **)(_QWORD))(v18 + 800);
                v654 += v673;
                v1999 = v654;
                v670 = v689(v670);
              }
              while ( v670 );
            }
            goto LABEL_1623;
          }
          if ( v651 == 1 )
          {
            v2185 = -1;
            v652 = v38;
            v653 = 0;
            v654 = 0;
            do
            {
              v2060 = 0LL;
              while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v18 + 1080))(
                        v653,
                        &v2060,
                        &v2185,
                        &v2036) )
              {
                ++v654;
                if ( !(*(__int64 (__fastcall **)(__int64, char *))(v18 + 536))(v2036, v2097) )
                {
                  if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
                  {
                    v655 = *(_QWORD **)(v18 + 2760);
                    v656 = 48;
                    v657 = 6LL;
                    do
                    {
                      v656 -= 8;
                      *v655 = *(_QWORD *)v652;
                      v652 += 8;
                      ++v655;
                      --v657;
                    }
                    while ( v657 );
                    if ( v656 )
                    {
                      do
                      {
                        v658 = *v652++;
                        *(_BYTE *)v655 = v658;
                        v655 = (_QWORD *)((char *)v655 + 1);
                        --v656;
                      }
                      while ( v656 );
                      v18 = (__int64)v2001;
                    }
                    v652 = *(char **)(v18 + 2760);
                  }
                  *((_QWORD *)v652 + 3) = v2036;
                  v659 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v659 = v652;
                  *(_DWORD *)(v659 + 16) = 48;
                  v660 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)(v660 + 8) = v2036;
                  *(_DWORD *)(v660 + 20) = 4096;
                  if ( !*(_DWORD *)(v18 + 2328) )
                  {
                    *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2344) = v652 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2352) = *(int *)v652;
                    *(_QWORD *)(v18 + 2360) = v653;
                    *(_DWORD *)(v18 + 2328) = 1;
                    v661 = *(_DWORD *)(v18 + 2520);
                    if ( (v661 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v661 & 1) != 0 )
                    {
                      v662 = *(unsigned int *)(v18 + 2676);
                      v663 = *(_QWORD *)(v18 + 2104);
                      v664 = *(_QWORD *)(v18 + 2680);
                      v665 = (_QWORD *)(v662 + v18);
                      v666 = v662 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v662) >> 3);
                      while ( v665 != (_QWORD *)v666 )
                      {
                        *v665 ^= v664;
                        v664 = ((v663 ^ *v665++) + __ROR8__(v664, v664 & 0x3F)) ^ 0xF05;
                      }
                      *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                      if ( v664 != *(_QWORD *)(v18 + 2688) )
                      {
                        v667 = *(_DWORD *)(v18 + 2052);
                        v668 = *(_QWORD *)(v18 + 1416);
                        *(_QWORD *)v668 = v18;
                        *(_DWORD *)(v668 + 16) = v667;
                        if ( !*(_DWORD *)(v18 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v664 ^ *(_QWORD *)(v18 + 2688);
                        sub_140C7F03C(v18, 0LL, v664, 256LL);
                      }
                    }
                  }
                }
              }
              ++v653;
            }
            while ( v653 < 3 );
            goto LABEL_1623;
          }
          n = 0;
          *(_DWORD *)(v18 + 2116) = 0;
          goto LABEL_1627;
        }
        v50 = (*(_DWORD *)(v18 + 2520) & 0x20000000) == 0;
        v690 = (const signed __int32 *)v18;
        v691 = *(ULONG_PTR **)(v18 + 1256);
        v2013 = v18;
        v692 = *v691;
        v2010 = *v691;
        if ( !v50 )
          goto LABEL_1552;
        v693 = (int *)v1992;
        v694 = *((_QWORD *)v1992 + 5);
        if ( v694 )
        {
          v654 = 1;
          if ( v692 != v694 )
          {
            *((_QWORD *)v1992 + 3) = v692;
            v695 = *(_QWORD *)(v18 + 1416);
            *(_QWORD *)v695 = v693;
            *(_DWORD *)(v695 + 16) = 48;
            v696 = *(_QWORD *)(v18 + 1416);
            *(_QWORD *)(v696 + 8) = v692;
            *(_DWORD *)(v696 + 20) = 4096;
            if ( !*(_DWORD *)(v18 + 2328) )
            {
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v693 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v693;
              *(_QWORD *)(v18 + 2360) = 5LL;
              *(_DWORD *)(v18 + 2328) = 1;
              v697 = *(_DWORD *)(v18 + 2520);
              if ( (v697 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v697 & 1) != 0 )
              {
                v698 = *(unsigned int *)(v18 + 2676);
                v699 = *(_QWORD *)(v18 + 2104);
                v700 = *(_QWORD *)(v18 + 2680);
                v701 = (_QWORD *)(v698 + v18);
                v702 = v698 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v698) >> 3);
                while ( v701 != (_QWORD *)v702 )
                {
                  *v701 ^= v700;
                  v700 = ((v699 ^ *v701++) + __ROR8__(v700, v700 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v700 != *(_QWORD *)(v18 + 2688) )
                {
                  v703 = *(_DWORD *)(v18 + 2052);
                  v704 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v704 = v18;
                  *(_DWORD *)(v704 + 16) = v703;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v700 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v700, 256LL);
                }
              }
            }
          }
          goto LABEL_1623;
        }
        if ( !v692 )
        {
LABEL_1552:
          v654 = 0;
          goto LABEL_1623;
        }
        v705 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v18 + 528);
        v1999 = 1;
        v2018 = (_BYTE *)v18;
        v706 = v705(v692, v2153);
        v707 = BugCheckParameter2;
        v708 = 0;
        v709 = v2155;
        v710 = v706;
        v2012 = v706;
        v2006 = v2155;
        v2008 = BugCheckParameter2;
        if ( !BugCheckParameter2 )
        {
          if ( (*(_DWORD *)(v18 + 2520) & 0x100000) == 0 )
          {
            v2044[2] = -402653175;
            KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v692, 5uLL, 0LL);
          }
          v711 = -1073741701;
          goto LABEL_1548;
        }
        v712 = 4;
        v2034 = 0LL;
        v713 = &v2035;
        v714 = 0xFFFFFFFFLL;
        v715 = 1LL;
        do
        {
          *(_BYTE *)v713 = 0;
          v713 = (unsigned int *)((char *)v713 + 1);
          --v712;
        }
        while ( v712 );
        v716 = 0;
        if ( !*(_DWORD *)(v18 + 2092) )
        {
LABEL_1084:
          v2019 = 0LL;
          goto LABEL_1085;
        }
        v717 = v2035;
        LODWORD(v715) = HIDWORD(v2034);
        v718 = v2034;
        while ( 1 )
        {
          v719 = v18;
          if ( *(_QWORD *)(v18 + 2752) )
            v719 = *(_QWORD *)(v18 + 2752);
          v714 = v719 + *(unsigned int *)(v719 + 2088);
          if ( v718 && (unsigned int)v715 <= v716 )
          {
            v708 = v715;
            v714 = v719 + v717;
          }
          if ( v708 != v716 )
            break;
LABEL_1076:
          v717 = v714 - v719;
          LODWORD(v2034) = 1;
          v718 = 1;
          v2035 = v714 - v719;
          v715 = v708;
          HIDWORD(v2034) = v708;
          v723 = *(_DWORD *)v714;
          if ( (*(_DWORD *)v714 == 1 || v723 == 12 || v723 == 43)
            && *(_QWORD *)(v714 + 8) == v710
            && *(_DWORD *)(v714 + 16) == v709
            || (unsigned int)(v723 - 33) <= 1 && *(_QWORD *)(v714 + 32) == v707 )
          {
            v2019 = (_DWORD *)v714;
            if ( v714 )
            {
              v711 = -1073741554;
              goto LABEL_1547;
            }
LABEL_1085:
            v724 = *(char ***)(v18 + 1320);
            v1998 = v2006;
            _disable();
            v725 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v18 + 1624));
            _enable();
            (*(void (__fastcall **)(__int64, __int64, __int64))(v18 + 376))(v725, v715, v714);
            LOBYTE(v726) = 1;
            (*(void (__fastcall **)(_QWORD, __int64))(v18 + 248))(*(_QWORD *)(v18 + 1328), v726);
            v727 = *v724;
            if ( *v724 != (char *)v724 )
            {
              v728 = *(_QWORD *)(v18 + 1880);
              while ( 1 )
              {
                v729 = *(_QWORD *)&v727[*(_QWORD *)(v18 + 1888) - v728];
                if ( v707 >= v729 && v707 < v729 + *(unsigned int *)&v727[*(_QWORD *)(v18 + 1896) - v728] )
                  break;
                v727 = *(char **)v727;
                if ( v727 == (char *)v724 )
                  goto LABEL_1094;
              }
              (*(void (__fastcall **)(char *, __int64))(v18 + 232))(&v727[-v728], 1LL);
            }
LABEL_1094:
            (*(void (__fastcall **)(_QWORD))(v18 + 296))(*(_QWORD *)(v18 + 1328));
            (*(void (**)(void))(v18 + 384))();
            if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
            {
              v731 = sub_140C8713C(&v2013, v707, 9LL);
              v690 = (const signed __int32 *)v2013;
              v711 = v731;
              goto LABEL_1547;
            }
            v732 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v18 + 512);
            v2088[4] = 0LL;
            LOBYTE(v730) = 1;
            v2054[4] = 0;
            v733 = v732(v707, v730, 0LL, &v2006);
            if ( v733 )
            {
              v735 = v2006;
            }
            else
            {
              v735 = 0;
              v2006 = 0;
            }
            v2088[1] = v733;
            v736 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v18 + 512);
            v2054[1] = v735;
            LOBYTE(v734) = 1;
            v1997 = v736(v707, v734, 12LL, &v2006);
            if ( v1997 )
            {
              v738 = v2006;
            }
            else
            {
              v738 = 0;
              v2006 = 0;
            }
            v2175 = v738;
            v2088[2] = v1997;
            v2054[2] = v738;
            LOBYTE(v737) = 1;
            v739 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(v18 + 512))(
                     v707,
                     v737,
                     10LL,
                     &v2006);
            if ( v739 )
            {
              v740 = v2006;
            }
            else
            {
              v740 = 0;
              v2006 = 0;
            }
            v2088[3] = v739;
            v741 = *(__int64 (__fastcall **)(_QWORD))(v18 + 520);
            v2054[3] = v740;
            v742 = v741(v707);
            if ( !v742 )
            {
              v743 = *(_DWORD *)(v18 + 2520);
              if ( (v743 & 0x100000) == 0 )
              {
                v2051 = -402653175;
                KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v707, 7uLL, 0LL);
              }
              if ( !*(_DWORD *)(v18 + 2328) )
              {
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = 0LL;
                *(_QWORD *)(v18 + 2352) = 271LL;
                *(_QWORD *)(v18 + 2360) = v707;
                *(_DWORD *)(v18 + 2328) = 1;
                if ( (v743 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v743 & 1) != 0 )
                {
                  v744 = *(unsigned int *)(v18 + 2676);
                  v745 = *(_QWORD *)(v18 + 2104);
                  v746 = *(_QWORD *)(v18 + 2680);
                  v747 = (_QWORD *)(v744 + v18);
                  v748 = v744 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v744) >> 3);
                  while ( v747 != (_QWORD *)v748 )
                  {
                    *v747 ^= v746;
                    v746 = ((v745 ^ *v747++) + __ROR8__(v746, v746 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                  if ( v746 != *(_QWORD *)(v18 + 2688) )
                  {
                    v749 = *(_DWORD *)(v18 + 2052);
                    v750 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v750 = v18;
                    *(_DWORD *)(v750 + 16) = v749;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v746 ^ *(_QWORD *)(v18 + 2688);
                    v751 = v18;
                    goto LABEL_1118;
                  }
                }
              }
              goto LABEL_1119;
            }
            v752 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v18 + 1176))(v707, &v2080);
            v753 = *(unsigned int *)(v18 + 2372);
            v2088[5] = v752;
            v2054[5] = v2080;
            LODWORD(v752) = *(_DWORD *)(v742 + 84);
            v2088[0] = v707;
            v754 = *(unsigned int *)(v18 + 2052);
            v2054[0] = v752;
            v755 = v754 + 288;
            if ( (unsigned int)(v754 + 288) <= *(_DWORD *)(v18 + 2660) )
            {
              v756 = v18;
              *(_DWORD *)(v18 + 2052) = v755;
              v1993 = v18;
              goto LABEL_1137;
            }
            v1993 = sub_140C7E7A8(v18, v755, v753);
            v756 = v1993;
            if ( !v1993 )
              goto LABEL_1138;
            v757 = *(_DWORD *)(v18 + 2520);
            if ( (v757 & 2) == 0 )
            {
              v758 = *(_DWORD *)(v18 + 2052);
              v759 = *(_QWORD *)(v18 + 2024);
              v760 = (v757 & 0x10000000) != 0;
              v761 = (_QWORD *)v18;
              v762 = v760 ? *(_DWORD *)(v18 + 2372) : 0;
              if ( v758 >= 8 )
              {
                v763 = (unsigned __int64)v758 >> 3;
                do
                {
                  *v761 = 0LL;
                  v758 -= 8;
                  ++v761;
                  --v763;
                }
                while ( v763 );
              }
              for ( ; v758; --v758 )
              {
                *(_BYTE *)v761 = 0;
                v761 = (_QWORD *)((char *)v761 + 1);
              }
              v764 = *(_DWORD *)(v756 + 2372);
              *(_DWORD *)(v756 + 2372) = v762;
              if ( v762 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v756 + 880))(v759);
              }
              else if ( (*(_DWORD *)(v756 + 2520) & 0x8000000) != 0 || !v762 )
              {
                (*(void (__fastcall **)(__int64))(v756 + 264))(v759);
              }
              else
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v756 + 568))(v759 - 8, *(_QWORD *)(v759 - 8));
              }
              *(_DWORD *)(v756 + 2372) = v764;
            }
            *(_DWORD *)(v756 + 2520) &= ~2u;
LABEL_1137:
            v765 = v756 + v754;
            *(_DWORD *)(v756 + 2092) += 6;
            v2057 = v756 + v754;
            if ( !v756 )
              goto LABEL_1138;
            v766 = (unsigned int *)v2088;
            v2019 = (_DWORD *)(v756 + v754);
            v1996 = (unsigned int *)v2088;
            v767 = v2054;
            v2013 = 6LL;
            v2000 = (unsigned int *)v756;
            do
            {
              v768 = (unsigned int)*v767;
              v769 = 6LL;
              v770 = *(_QWORD **)v766;
              v771 = 48;
              LODWORD(v1995) = *v767;
              v772 = (_QWORD *)v765;
              do
              {
                *v772 = 0LL;
                v771 -= 8;
                ++v772;
                --v769;
              }
              while ( v769 );
              for ( ; v771; --v771 )
              {
                *(_BYTE *)v772 = 0;
                v772 = (_QWORD *)((char *)v772 + 1);
              }
              *(_DWORD *)v765 = 0;
              *(_QWORD *)(v765 + 8) = v770;
              v773 = v770;
              *(_DWORD *)(v765 + 16) = v768;
              v774 = (const char *)v770;
              *(_DWORD *)(v756 + 2120) += v768;
              v775 = *(_DWORD *)(v756 + 2100);
              v776 = *(_QWORD *)(v756 + 2104);
              if ( v770 < (_QWORD *)((char *)v770 + v768) )
              {
                do
                {
                  _mm_prefetch(v774, 0);
                  v774 += 64;
                }
                while ( v774 < (const char *)v770 + v768 );
              }
              v777 = *(_QWORD *)(v756 + 2104);
              v778 = (unsigned int)v768 >> 7;
              if ( (unsigned int)v768 >> 7 )
              {
                do
                {
                  v779 = 8LL;
                  do
                  {
                    v780 = v773[1] ^ __ROL8__(*v773 ^ v777, v775);
                    v773 += 2;
                    v777 = __ROL8__(v780, v775);
                    --v779;
                  }
                  while ( v779 );
                  v781 = (__ROL8__(v776 ^ ((char *)v773 - (char *)v770), 17) ^ v776 ^ (unsigned __int64)((char *)v773 - (char *)v770))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2099 = *((_QWORD *)&v781 + 1);
                  v775 = ((unsigned __int8)(v781 ^ BYTE8(v781)) ^ (unsigned __int8)v775) & 0x3F;
                  if ( !v775 )
                    LOBYTE(v775) = 1;
                  --v778;
                }
                while ( v778 );
                v756 = v1993;
                LODWORD(v768) = v1995;
                v766 = v1996;
              }
              v782 = v768 & 0x7F;
              if ( v782 >= 8 )
              {
                v783 = (unsigned __int64)(v768 & 0x7F) >> 3;
                do
                {
                  v777 = __ROL8__(*v773++ ^ v777, v775);
                  v782 -= 8;
                  --v783;
                }
                while ( v783 );
              }
              if ( v782 )
              {
                do
                {
                  v784 = *(unsigned __int8 *)v773;
                  v773 = (_QWORD *)((char *)v773 + 1);
                  v777 = __ROL8__(v784 ^ v777, v775);
                  --v782;
                }
                while ( v782 );
                v756 = v1993;
              }
              for ( i11 = v777; ; v777 = (unsigned int)i11 ^ (unsigned int)v777 )
              {
                i11 >>= 31;
                if ( !i11 )
                  break;
              }
              LODWORD(v777) = v777 & 0x7FFFFFFF;
              *(_DWORD *)(v765 + 20) = v777;
              *(_DWORD *)(v756 + 2120) += v768;
              v766 += 2;
              ++v767;
              v765 = v2057 + 48;
              v1996 = v766;
              v50 = v2013-- == 1;
              v2057 += 48LL;
            }
            while ( !v50 );
            v786 = v2019;
            v690 = (const signed __int32 *)v2000;
            v787 = v2008;
            v18 = (__int64)v2001;
            *v2019 = 44;
            *((_QWORD *)v786 + 3) = v787;
            if ( (v690[630] & 0x8100000) == 0 )
            {
              if ( _bittest(v690 + 631, 0xFu) )
              {
                v786[8] |= 1u;
                if ( (unsigned int)sub_140C7F9D0(v690, v787, v777, v773) )
                  v786[8] |= 4u;
              }
            }
            v2018 = v690;
            v2013 = (__int64)v690;
            v711 = sub_140C7CE10((unsigned int)&v2018, v2012, v1998, v787, 9, (__int64)&v2026, (__int64)v2044);
            if ( v711 < 0 )
              goto LABEL_1547;
            v788 = v2018;
            v789 = v2044[0] - v2026;
            v2019 = (_DWORD *)((char *)v2019 + v2018 - (_BYTE *)v690);
            v790 = (_QWORD *)(v787 + v2026);
            v791 = v2019 + 48;
            v792 = 48;
            v1993 = (__int64)(v2019 + 48);
            v793 = 6LL;
            v794 = v2019 + 48;
            do
            {
              *v794 = 0LL;
              v792 -= 8;
              ++v794;
              --v793;
            }
            while ( v793 );
            if ( v792 )
            {
              v793 = 0xFFFFFFFFLL;
              do
              {
                *(_BYTE *)v794 = 0;
                v794 = (_QWORD *)((char *)v794 + 1);
                --v792;
              }
              while ( v792 );
            }
            *v791 = 0;
            v795 = v790;
            *((_QWORD *)v791 + 1) = v790;
            v796 = (const char *)v790;
            v791[4] = v789;
            *((_DWORD *)v788 + 530) += v789;
            v797 = *((_DWORD *)v788 + 525);
            v798 = *((_QWORD *)v788 + 263);
            v799 = (unsigned __int64)v790 + v789;
            if ( (unsigned __int64)v790 < v799 )
            {
              v793 = 64LL;
              do
              {
                _mm_prefetch(v796, 0);
                v796 += 64;
              }
              while ( (unsigned __int64)v796 < v799 );
            }
            v800 = *((_QWORD *)v788 + 263);
            v801 = v789 >> 7;
            if ( v789 >> 7 )
            {
              do
              {
                v802 = 8LL;
                do
                {
                  v803 = v795[1] ^ __ROL8__(*v795 ^ v800, v797);
                  v795 += 2;
                  v800 = __ROL8__(v803, v797);
                  --v802;
                }
                while ( v802 );
                v804 = (__ROL8__(v798 ^ ((char *)v795 - (char *)v790), 17) ^ v798 ^ (unsigned __int64)((char *)v795 - (char *)v790))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2100 = *((_QWORD *)&v804 + 1);
                v793 = v804 ^ *((_QWORD *)&v804 + 1);
                v797 = ((unsigned __int8)v793 ^ (unsigned __int8)v797) & 0x3F;
                if ( !v797 )
                  LOBYTE(v797) = 1;
                --v801;
              }
              while ( v801 );
              v18 = (__int64)v2001;
              v791 = (_DWORD *)v1993;
            }
            v805 = v789 & 0x7F;
            if ( (unsigned int)v805 >= 8 )
            {
              v806 = (unsigned __int64)(unsigned int)v805 >> 3;
              do
              {
                v800 = __ROL8__(*v795++ ^ v800, v797);
                v805 = (unsigned int)(v805 - 8);
                --v806;
              }
              while ( v806 );
            }
            for ( ; (_DWORD)v805; v805 = (unsigned int)(v805 - 1) )
            {
              v807 = *(unsigned __int8 *)v795;
              v795 = (_QWORD *)((char *)v795 + 1);
              v800 = __ROL8__(v807 ^ v800, v797);
            }
            for ( i12 = v800 >> 31; i12; i12 >>= 31 )
              v800 = (unsigned int)i12 ^ (unsigned int)v800;
            LODWORD(v800) = v800 & 0x7FFFFFFF;
            v2000 = (unsigned int *)v788;
            v791[5] = v800;
            v690 = (const signed __int32 *)v788;
            v2013 = (__int64)v788;
            v2019[60] = 48;
            v2037 = v2019 + 24;
            if ( v2019 != (_DWORD *)-96LL )
            {
              v823 = v2175;
              v811 = (__int64)v788;
              v822 = v1997;
              v2019[24] = 13;
              goto LABEL_1235;
            }
            v809 = *((unsigned int *)v788 + 513);
            v810 = v809 + 48;
            if ( (unsigned int)(v809 + 48) <= *((_DWORD *)v788 + 665) )
            {
              v811 = (__int64)v788;
              *((_DWORD *)v788 + 513) = v810;
            }
            else
            {
              v811 = sub_140C7E7A8(v788, v810, *((unsigned int *)v788 + 593));
              if ( !v811 )
                goto LABEL_1138;
              v812 = *((_DWORD *)v788 + 630);
              if ( (v812 & 2) == 0 )
              {
                v813 = *((_DWORD *)v788 + 513);
                v814 = *((_QWORD *)v788 + 253);
                v815 = (v812 & 0x10000000) != 0 ? *((_DWORD *)v788 + 593) : 0;
                if ( v813 >= 8 )
                {
                  v816 = (unsigned __int64)v813 >> 3;
                  do
                  {
                    *(_QWORD *)v788 = 0LL;
                    v813 -= 8;
                    v788 += 8;
                    --v816;
                  }
                  while ( v816 );
                }
                for ( ; v813; --v813 )
                  *v788++ = 0;
                v817 = *(_DWORD *)(v811 + 2372);
                *(_DWORD *)(v811 + 2372) = v815;
                if ( v815 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v811 + 880))(v814);
                }
                else if ( (*(_DWORD *)(v811 + 2520) & 0x8000000) != 0 || !v815 )
                {
                  (*(void (__fastcall **)(__int64))(v811 + 264))(v814);
                }
                else
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v811 + 568))(v814 - 8, *(_QWORD *)(v814 - 8));
                }
                *(_DWORD *)(v811 + 2372) = v817;
              }
              *(_DWORD *)(v811 + 2520) &= ~2u;
            }
            ++*(_DWORD *)(v811 + 2092);
            v818 = v811 + v809;
            v2081 = (_DWORD *)v818;
            if ( !v811 )
            {
LABEL_1138:
              v2018 = 0LL;
              goto LABEL_1139;
            }
            v819 = 48;
            v820 = (_QWORD *)v818;
            v821 = 6LL;
            do
            {
              *v820 = 0LL;
              v819 -= 8;
              ++v820;
              --v821;
            }
            while ( v821 );
            for ( ; v819; --v819 )
            {
              *(_BYTE *)v820 = 0;
              v820 = (_QWORD *)((char *)v820 + 1);
            }
            v822 = v1997;
            v823 = v2175;
            v805 = v1997;
            *(_DWORD *)v818 = 13;
            *(_QWORD *)(v818 + 8) = v805;
            *(_DWORD *)(v818 + 16) = v2175;
            *(_DWORD *)(v811 + 2120) += v2175;
            v824 = *(_DWORD *)(v811 + 2100);
            v825 = *(_QWORD *)(v811 + 2104);
            if ( v805 < v2175 + v805 )
            {
              v826 = (const char *)v822;
              do
              {
                _mm_prefetch(v826, 0);
                v826 += 64;
              }
              while ( (unsigned __int64)v826 < v2175 + v805 );
            }
            v800 = *(_QWORD *)(v811 + 2104);
            v827 = v2175 >> 7;
            if ( v2175 >> 7 )
            {
              do
              {
                v828 = 8LL;
                do
                {
                  v829 = *(_QWORD *)(v805 + 8) ^ __ROL8__(*(_QWORD *)v805 ^ v800, v824);
                  v805 += 16LL;
                  v800 = __ROL8__(v829, v824);
                  --v828;
                }
                while ( v828 );
                v830 = (__ROL8__(v825 ^ (v805 - v822), 17) ^ v825 ^ (v805 - v822))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2101 = *((_QWORD *)&v830 + 1);
                v824 = ((unsigned __int8)(v830 ^ BYTE8(v830)) ^ (unsigned __int8)v824) & 0x3F;
                if ( !v824 )
                  LOBYTE(v824) = 1;
                --v827;
              }
              while ( v827 );
              v18 = (__int64)v2001;
              v823 = v2175;
            }
            v793 = v823 & 0x7F;
            if ( (unsigned int)v793 >= 8 )
            {
              v831 = (unsigned __int64)(v823 & 0x7F) >> 3;
              do
              {
                v800 = __ROL8__(*(_QWORD *)v805 ^ v800, v824);
                v805 += 8LL;
                v793 = (unsigned int)(v793 - 8);
                --v831;
              }
              while ( v831 );
            }
            for ( ; (_DWORD)v793; v793 = (unsigned int)(v793 - 1) )
            {
              v832 = *(unsigned __int8 *)v805++;
              v800 = __ROL8__(v832 ^ v800, v824);
            }
            for ( i13 = v800 >> 31; i13; i13 >>= 31 )
              v800 = (unsigned int)i13 ^ (unsigned int)v800;
            LODWORD(v800) = v800 & 0x7FFFFFFF;
            *(_DWORD *)(v818 + 20) = v800;
            v2037 = v2081;
            *(_DWORD *)(v811 + 2120) += v823;
LABEL_1235:
            if ( (*(_DWORD *)(v811 + 2520) & 0x20000000) != 0 && v823 )
              sub_140553D6C(v811, v822, v823, v2037 + 7);
            v2018 = (_BYTE *)v811;
            v2037[6] = 0;
            v2037[6] |= 1u;
            if ( !v811 )
            {
              v690 = (const signed __int32 *)v2000;
LABEL_1139:
              v711 = -1073741670;
LABEL_1547:
              v692 = v2010;
LABEL_1548:
              v2001 = (char *)v690;
              v1045 = (char *)v690 - v18;
              v18 = (__int64)v690;
              v1046 = &v1992[(_QWORD)v1045];
              v1992 = &v1992[(_QWORD)v1045];
              if ( (int)(v711 + 0x80000000) < 0 || v711 == -1073741554 )
                *((_QWORD *)v1046 + 5) = v692;
              v654 = v1999;
LABEL_1623:
              *(_DWORD *)(v18 + 2120) += v654 << 12;
              v1098 = *(_DWORD *)(v18 + 2120);
              ++*(_DWORD *)(v18 + 2116);
              if ( v1098 < *(_DWORD *)(v18 + 2124) )
              {
                v38 = v1992;
                goto LABEL_972;
              }
              n = 0;
LABEL_1627:
              v2001 = (char *)v18;
              goto LABEL_558;
            }
            v834 = v2019;
            v690 = (const signed __int32 *)v811;
            v2013 = v811;
            v2019[36] = 35;
            if ( v834[40] < 0x94u )
            {
              v841 = v2008;
            }
            else
            {
              v835 = v2008;
              v836 = *((_QWORD *)v834 + 19);
              v837 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))(v811 + 520))(
                       v2008,
                       v793,
                       v800,
                       v805);
              if ( !v837 )
                goto LABEL_1138;
              v800 = v835 + *(unsigned int *)(v837 + 80);
              v793 = v834[46] | 2u;
              v834[46] = v793;
              v838 = v793;
              v839 = *(_QWORD **)(v836 + 112);
              if ( (unsigned __int64)v839 >= v835 && (unsigned __int64)v839 < v800 )
              {
                v838 = v793 | 4;
                *((_QWORD *)v834 + 21) = *v839;
                v834[46] = v793 | 4;
              }
              v840 = *(_QWORD **)(v836 + 120);
              v841 = v2008;
              if ( (unsigned __int64)v840 >= v2008 && (unsigned __int64)v840 < v800 )
              {
                *((_QWORD *)v834 + 22) = *v840;
                v834[46] = v838 | 8;
              }
            }
            v760 = _bittest((const signed __int32 *)(v811 + 2520), 0x15u);
            v2000 = (unsigned int *)v811;
            v2013 = v811;
            if ( !v760 )
              goto LABEL_1546;
            v842 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR))(v811 + 520))(v841, v793, v800);
            v1996 = (unsigned int *)v842;
            if ( !v842 )
              goto LABEL_1119;
            v843 = *(_WORD *)(v842 + 6);
            v2176 = v843;
            v1993 = v1998 / 0xCuLL;
            if ( !v843 )
            {
              v844 = *(_DWORD *)(v811 + 2520);
              if ( (v844 & 0x100000) == 0 )
              {
                v2048 = -402653175;
                KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v841, 0LL, 0LL);
              }
              if ( !*(_DWORD *)(v811 + 2328) )
              {
                *(_QWORD *)(v811 + 2336) = v811 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v811 + 2344) = 0LL;
                *(_QWORD *)(v811 + 2352) = 271LL;
                *(_QWORD *)(v811 + 2360) = v841;
                *(_DWORD *)(v811 + 2328) = 1;
                if ( (v844 & 0x20000000) == 0 )
                {
                  if ( _bittest((const signed __int32 *)(v811 + 2524), 0x15u) )
                  {
                    if ( (v844 & 1) != 0 )
                    {
                      v845 = *(unsigned int *)(v811 + 2676);
                      v846 = *(_QWORD *)(v811 + 2104);
                      v746 = *(_QWORD *)(v811 + 2680);
                      v847 = (_QWORD *)(v845 + v811);
                      v848 = v845 + v811 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v811 + 2052) - v845) >> 3);
                      while ( v847 != (_QWORD *)v848 )
                      {
                        *v847 ^= v746;
                        v746 = ((v846 ^ *v847++) + __ROR8__(v746, v746 & 0x3F)) ^ 0xF05;
                      }
                      *(_DWORD *)(v811 + 2524) &= ~0x200000u;
                      if ( v746 != *(_QWORD *)(v811 + 2688) )
                      {
                        v849 = *(_QWORD *)(v811 + 1416);
                        v850 = *(_DWORD *)(v811 + 2052);
                        *(_QWORD *)v849 = v811;
                        *(_DWORD *)(v849 + 16) = v850;
                        if ( !*(_DWORD *)(v811 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v811 + 1416) + 24LL) = v746 ^ *(_QWORD *)(v811 + 2688);
                        v751 = v811;
LABEL_1118:
                        sub_140C7F03C(v751, 0LL, v746, 256LL);
                      }
                    }
                  }
                }
              }
LABEL_1119:
              v711 = -1073741701;
              goto LABEL_1547;
            }
            v851 = (unsigned int *)v2012;
            v852 = v842 + *(unsigned __int16 *)(v842 + 20) + 24LL;
            v2015 = (unsigned int *)v852;
            v2011 = (unsigned int *)(v2012 + 12LL * (v1998 / 0xC));
            v853 = 0;
            LODWORD(v1995) = 0;
            v854 = v2000;
            v855 = v2011;
            do
            {
              v856 = 5LL * v853;
              v857 = *(_DWORD *)(v852 + 40LL * v853 + 16);
              v858 = *(_DWORD *)(v852 + 40LL * v853 + 12);
              if ( v857 <= *(_DWORD *)(v852 + 40LL * v853 + 8) )
                v857 = *(_DWORD *)(v852 + 40LL * v853 + 8);
              v1997 = 5LL * v853;
              v859 = v858 + v857;
              v2007 = v858;
              v1994 = v859;
              if ( v853 )
              {
                if ( v859 < *(_DWORD *)(v852 + 40LL * (v853 - 1) + 12) )
                {
                  v889 = *((_DWORD *)v854 + 630);
                  if ( (v889 & 0x100000) == 0 )
                  {
                    v2049 = -402653175;
                    KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v841, 1uLL, 0LL);
                  }
                  if ( !*((_DWORD *)v854 + 582) )
                  {
                    *((_QWORD *)v854 + 292) = v854 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v854 + 293) = 0LL;
                    *((_QWORD *)v854 + 294) = 271LL;
                    *((_QWORD *)v854 + 295) = v841;
                    *((_DWORD *)v854 + 582) = 1;
                    if ( (v889 & 0x20000000) == 0 && (*((_DWORD *)v854 + 631) & 0x200000) != 0 && (v889 & 1) != 0 )
                    {
                      v890 = *((unsigned int *)v854 + 669);
                      v891 = *((_QWORD *)v854 + 263);
                      v892 = *((_QWORD *)v854 + 335);
                      v893 = &v854[v890];
                      v894 = (unsigned __int64)&v854[8
                                                   * ((unsigned __int64)(unsigned int)(*((_DWORD *)v854 + 513) - v890) >> 3)
                                                   + v890];
                      while ( v893 != (_QWORD *)v894 )
                      {
                        *v893 ^= v892;
                        v892 = ((v891 ^ *v893++) + __ROR8__(v892, v892 & 0x3F)) ^ 0xF05;
                      }
                      goto LABEL_1321;
                    }
                  }
                  goto LABEL_1325;
                }
                v853 = v1995;
              }
              if ( v851 != v855 )
              {
                do
                {
                  v860 = v851[1];
                  if ( *v851 >= v859 || v860 <= v858 )
                    break;
                  if ( *v851 < v858 || v860 > v859 )
                  {
                    v897 = *((_DWORD *)v854 + 630);
                    if ( (v897 & 0x100000) == 0 )
                    {
                      v2041 = -402653175;
                      KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v841, 2uLL, 0LL);
                    }
                    if ( !*((_DWORD *)v854 + 582) )
                    {
                      *((_QWORD *)v854 + 292) = v854 - 0x5C5FC0A76E374B18LL;
                      *((_QWORD *)v854 + 293) = 0LL;
                      *((_QWORD *)v854 + 294) = 271LL;
                      *((_QWORD *)v854 + 295) = v841;
                      *((_DWORD *)v854 + 582) = 1;
                      if ( (v897 & 0x20000000) == 0 && (*((_DWORD *)v854 + 631) & 0x200000) != 0 && (v897 & 1) != 0 )
                      {
                        v898 = *((unsigned int *)v854 + 669);
                        v899 = *((_QWORD *)v854 + 263);
                        v892 = *((_QWORD *)v854 + 335);
                        v900 = &v854[v898];
                        v901 = (unsigned __int64)&v854[8
                                                     * ((unsigned __int64)(unsigned int)(*((_DWORD *)v854 + 513) - v898) >> 3)
                                                     + v898];
                        while ( v900 != (_QWORD *)v901 )
                        {
                          *v900 ^= v892;
                          v892 = ((v899 ^ *v900++) + __ROR8__(v892, v892 & 0x3F)) ^ 0xF05;
                        }
                        goto LABEL_1321;
                      }
                    }
                    goto LABEL_1325;
                  }
                  v861 = v851[2];
                  v2102 = v851;
                  if ( (v861 & 1) != 0 || (*(_BYTE *)(v861 + v841) & 0x20) != 0 )
                  {
                    v862 = *(_DWORD *)(v852 + 8 * v856 + 16);
                    v863 = *(_DWORD *)(v852 + 8 * v856 + 12);
                    if ( v862 <= *(_DWORD *)(v852 + 8 * v856 + 8) )
                      v862 = *(_DWORD *)(v852 + 8 * v856 + 8);
                    v864 = v863 + v862;
                    v865 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v854 + 132))(
                                             v851,
                                             v841);
                    v866 = v865;
                    if ( *v865 < v863 || v865[1] > v864 )
                    {
                      v867 = v2008;
                      v868 = ((_DWORD)v865 - v2008) | 0x80000000;
                      v869 = v2000[630];
                      if ( (v869 & 0x100000) == 0 )
                      {
                        v2044[1] = -402653175;
                        KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v2008, v868, 0LL);
                      }
                      if ( !*((_DWORD *)v854 + 582) )
                      {
                        *((_QWORD *)v854 + 292) = v854 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v854 + 293) = 0LL;
                        *((_QWORD *)v854 + 294) = 271LL;
                        *((_QWORD *)v854 + 295) = v867;
                        *((_DWORD *)v854 + 582) = 1;
                        if ( (v869 & 0x20000000) == 0 && (*((_DWORD *)v854 + 631) & 0x200000) != 0 && (v869 & 1) != 0 )
                        {
                          v870 = *((unsigned int *)v854 + 669);
                          v871 = *((_QWORD *)v854 + 263);
                          v872 = *((_QWORD *)v854 + 335);
                          v873 = &v854[v870];
                          v874 = (unsigned __int64)&v854[8
                                                       * ((unsigned __int64)(unsigned int)(*((_DWORD *)v854 + 513) - v870) >> 3)
                                                       + v870];
                          while ( v873 != (_QWORD *)v874 )
                          {
                            *v873 ^= v872;
                            v872 = ((v871 ^ *v873++) + __ROR8__(v872, v872 & 0x3F)) ^ 0xF05;
                          }
                          *((_DWORD *)v854 + 631) &= ~0x200000u;
                          if ( v872 != *((_QWORD *)v854 + 336) )
                          {
                            v875 = *((_DWORD *)v854 + 513);
                            v876 = *((_QWORD *)v854 + 177);
                            *(_QWORD *)v876 = v854;
                            *(_DWORD *)(v876 + 16) = v875;
                            if ( !*((_DWORD *)v854 + 582) )
                              *(_QWORD *)(*((_QWORD *)v854 + 177) + 24LL) = v872 ^ *((_QWORD *)v854 + 336);
                            sub_140C7F03C(v854, 0LL, v872, 256LL);
                          }
                        }
                      }
                    }
                    v877 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v854 + 133))(
                                             v866,
                                             v2008,
                                             v2008 + *v866);
                    if ( *v877 >= v863 && v877[1] <= v864 )
                    {
                      v841 = v2008;
                    }
                    else
                    {
                      v841 = v2008;
                      v878 = ((_DWORD)v877 - v2008) | 0x80000000;
                      v879 = v2000[630];
                      if ( (v879 & 0x100000) == 0 )
                      {
                        v2050 = -402653175;
                        KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v2008, v878, 0LL);
                      }
                      if ( !*((_DWORD *)v854 + 582) )
                      {
                        *((_QWORD *)v854 + 292) = v854 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v854 + 293) = 0LL;
                        *((_QWORD *)v854 + 294) = 271LL;
                        *((_QWORD *)v854 + 295) = v841;
                        *((_DWORD *)v854 + 582) = 1;
                        if ( (v879 & 0x20000000) == 0 && (*((_DWORD *)v854 + 631) & 0x200000) != 0 && (v879 & 1) != 0 )
                        {
                          v880 = *((unsigned int *)v854 + 669);
                          v881 = *((_QWORD *)v854 + 263);
                          v882 = *((_QWORD *)v854 + 335);
                          v883 = &v854[v880];
                          v884 = (unsigned __int64)&v854[8
                                                       * ((unsigned __int64)(unsigned int)(*((_DWORD *)v854 + 513) - v880) >> 3)
                                                       + v880];
                          while ( v883 != (_QWORD *)v884 )
                          {
                            *v883 ^= v882;
                            v882 = ((v881 ^ *v883++) + __ROR8__(v882, v882 & 0x3F)) ^ 0xF05;
                          }
                          *((_DWORD *)v854 + 631) &= ~0x200000u;
                          if ( v882 != *((_QWORD *)v854 + 336) )
                          {
                            v885 = *((_DWORD *)v854 + 513);
                            v886 = *((_QWORD *)v854 + 177);
                            *(_QWORD *)v886 = v854;
                            *(_DWORD *)(v886 + 16) = v885;
                            if ( !*((_DWORD *)v854 + 582) )
                              *(_QWORD *)(*((_QWORD *)v854 + 177) + 24LL) = v882 ^ *((_QWORD *)v854 + 336);
                            sub_140C7F03C(v854, 0LL, v882, 256LL);
                          }
                        }
                      }
                    }
                    v859 = v1994;
                    v856 = v1997;
                    v858 = v2007;
                    v852 = (__int64)v2015;
                  }
                  v851 += 3;
                }
                while ( v851 != v2011 );
                v853 = v1995;
                v843 = v2176;
                v855 = v2011;
              }
              LODWORD(v1995) = ++v853;
            }
            while ( v853 < v843 );
            v887 = v1993;
            v888 = v1996;
            v902 = v2011;
            if ( v851 != v2011 )
            {
              v903 = *((_DWORD *)v854 + 630);
              if ( (v903 & 0x100000) == 0 )
              {
                v2042 = -402653175;
                KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v841, 3uLL, 0LL);
              }
              if ( !*((_DWORD *)v854 + 582) )
              {
                *((_QWORD *)v854 + 292) = v854 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v854 + 293) = 0LL;
                *((_QWORD *)v854 + 294) = 271LL;
                *((_QWORD *)v854 + 295) = v841;
                *((_DWORD *)v854 + 582) = 1;
                if ( (v903 & 0x20000000) == 0 && (*((_DWORD *)v854 + 631) & 0x200000) != 0 && (v903 & 1) != 0 )
                {
                  v904 = *((unsigned int *)v854 + 669);
                  v905 = *((_QWORD *)v854 + 263);
                  v892 = *((_QWORD *)v854 + 335);
                  v906 = &v854[v904];
                  v907 = (unsigned __int64)&v854[8
                                               * ((unsigned __int64)(unsigned int)(*((_DWORD *)v854 + 513) - v904) >> 3)
                                               + v904];
                  while ( v906 != (_QWORD *)v907 )
                  {
                    *v906 ^= v892;
                    v892 = ((v905 ^ *v906++) + __ROR8__(v892, v892 & 0x3F)) ^ 0xF05;
                  }
LABEL_1321:
                  *((_DWORD *)v854 + 631) &= ~0x200000u;
                  if ( v892 != *((_QWORD *)v854 + 336) )
                  {
                    v895 = *((_DWORD *)v854 + 513);
                    v896 = *((_QWORD *)v854 + 177);
                    *(_QWORD *)v896 = v854;
                    *(_DWORD *)(v896 + 16) = v895;
                    if ( !*((_DWORD *)v854 + 582) )
                      *(_QWORD *)(*((_QWORD *)v854 + 177) + 24LL) = v892 ^ *((_QWORD *)v854 + 336);
                    sub_140C7F03C(v854, 0LL, v892, 256LL);
                  }
                }
              }
LABEL_1325:
              v711 = -1073741701;
              goto LABEL_1351;
            }
            if ( (_DWORD)v1993 )
              v908 = (v1993 + 6) & 0xFFFFFFF8;
            else
              v908 = 0;
            v909 = *((unsigned int *)v854 + 513);
            v910 = v908 + 24 * v843 + v909 + 48;
            if ( v910 <= *((_DWORD *)v854 + 665) )
            {
              v811 = (__int64)v854;
              *((_DWORD *)v854 + 513) = v910;
            }
            else
            {
              v811 = sub_140C7E7A8(v854, v910, *((unsigned int *)v854 + 593));
              if ( !v811 )
              {
                v711 = -1073741670;
LABEL_1351:
                v690 = (const signed __int32 *)v2000;
                goto LABEL_1547;
              }
              v911 = *((_DWORD *)v854 + 630);
              if ( (v911 & 2) == 0 )
              {
                v912 = *((_DWORD *)v854 + 513);
                v913 = *((_QWORD *)v854 + 253);
                v914 = (v911 & 0x10000000) != 0 ? *((_DWORD *)v854 + 593) : 0;
                if ( v912 >= 8 )
                {
                  v915 = (unsigned __int64)v912 >> 3;
                  do
                  {
                    *(_QWORD *)v854 = 0LL;
                    v912 -= 8;
                    v854 += 8;
                    --v915;
                  }
                  while ( v915 );
                }
                for ( ; v912; --v912 )
                  *v854++ = 0;
                v916 = *(_DWORD *)(v811 + 2372);
                *(_DWORD *)(v811 + 2372) = v914;
                if ( v914 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v811 + 880))(v913);
                }
                else if ( (*(_DWORD *)(v811 + 2520) & 0x8000000) != 0 || !v914 )
                {
                  (*(void (__fastcall **)(__int64))(v811 + 264))(v913);
                }
                else
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v811 + 568))(v913 - 8, *(_QWORD *)(v913 - 8));
                }
                *(_DWORD *)(v811 + 2372) = v916;
              }
              *(_DWORD *)(v811 + 2520) &= ~2u;
              v887 = v1993;
              v843 = v2176;
              v902 = v2011;
            }
            v917 = v811 + v909;
            ++*(_DWORD *)(v811 + 2092);
            v918 = (_QWORD *)(v811 + v909);
            v2082 = v811 + v909;
            v919 = 48;
            v920 = 6LL;
            do
            {
              *v918 = 0LL;
              v919 -= 8;
              ++v918;
              --v920;
            }
            while ( v920 );
            for ( ; v919; --v919 )
            {
              *(_BYTE *)v918 = 0;
              v918 = (_QWORD *)((char *)v918 + 1);
            }
            v921 = v2012;
            *(_DWORD *)v917 = 30;
            *(_QWORD *)(v917 + 8) = v921;
            *(_DWORD *)(v917 + 16) = 0;
            v922 = *(_QWORD *)(v811 + 2104);
            for ( i14 = v922; ; LODWORD(v922) = i14 ^ v922 )
            {
              i14 >>= 31;
              if ( !i14 )
                break;
            }
            v924 = v2008;
            *(_DWORD *)(v917 + 20) = v922 & 0x7FFFFFFF;
            v2038 = v2082;
            v2018 = (_BYTE *)v811;
            *(_QWORD *)(v2082 + 24) = v924;
            *(_DWORD *)(v2038 + 32) = v888[20];
            *(_DWORD *)(v2038 + 36) = v1998;
            *(_WORD *)(v2038 + 40) = v843;
            v1997 = v2038 + 48;
            if ( v887 )
              v925 = (unsigned int *)(v2038 + 48 + (((unsigned int)(v887 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
            else
              v925 = (unsigned int *)(v2038 + 48);
            v926 = *(unsigned __int16 *)(v2038 + 40);
            v2000 = v925;
            v927 = &v925[6 * v926];
            v2002 = v927;
            if ( v887 )
              v1996 = (unsigned int *)(v921 + 12);
            else
              v1996 = v902;
            v928 = v811;
            if ( v843 )
            {
              v929 = v843;
              v930 = v925 + 2;
              do
              {
                v931 = 2LL;
                do
                {
                  *(v930 - 2) = 0;
                  *(v930 - 1) = 0;
                  *v930 = 0x80000000;
                  v930 += 3;
                  --v931;
                }
                while ( v931 );
                --v929;
              }
              while ( v929 );
            }
            if ( v925 == v927 )
            {
LABEL_1546:
              v690 = (const signed __int32 *)v811;
              v2013 = v811;
              v711 = 0;
              goto LABEL_1547;
            }
            v932 = v2015;
            v933 = (_DWORD *)(v811 + 2524);
            v1993 = v811 + 2524;
            while ( 2 )
            {
              v50 = (v932[9] & 0x2000000) == 0;
              v934 = 0;
              v1994 = 0;
              if ( !v50 )
                goto LABEL_1403;
              v935 = *v932;
              v936 = v932 + 1;
              if ( *v932 == 1414090313 )
              {
                if ( *(_DWORD *)v936 != 1195525195 )
                {
LABEL_1390:
                  if ( v935 != 1095914053 || *v936 != 16724 )
                    goto LABEL_1392;
                }
LABEL_1403:
                v934 = 1;
                v1994 = 1;
              }
              else
              {
                if ( v935 != 1162297680 )
                  goto LABEL_1390;
                v946 = *v936;
                if ( *v936 == 30839 || v946 == 29303 || v946 == 30583 )
                  goto LABEL_1403;
LABEL_1392:
                v937 = *(char **)(v928 + 2384);
                v938 = 7;
                v939 = *(char **)(v928 + 2392);
                v940 = (char *)v932;
                v941 = *(char **)(v928 + 2400);
                v942 = *(char **)(v928 + 2408);
                while ( 1 )
                {
                  v943 = *v940++;
                  v944 = *v937++;
                  if ( v943 != v944 )
                    break;
                  if ( !--v938 )
                    goto LABEL_1395;
                }
                v947 = 8;
                v948 = (char *)v932;
                do
                {
                  v949 = *(_QWORD *)v948;
                  v948 += 8;
                  v950 = *(_QWORD *)v939;
                  v939 += 8;
                  if ( v949 != v950 )
                    goto LABEL_1411;
                  v947 -= 8;
                }
                while ( v947 >= 8 );
                if ( v947 )
                {
                  while ( 1 )
                  {
                    v951 = *v948++;
                    v952 = *v939++;
                    if ( v951 != v952 )
                      break;
                    if ( !--v947 )
                      goto LABEL_1395;
                  }
LABEL_1411:
                  v953 = 4;
                  v954 = (char *)v932;
                  while ( 1 )
                  {
                    v955 = *v954++;
                    v956 = *v941++;
                    if ( v955 != v956 )
                      break;
                    if ( !--v953 )
                      goto LABEL_1395;
                  }
                  v957 = 6;
                  v958 = (char *)v932;
                  while ( 1 )
                  {
                    v959 = *v958++;
                    v960 = *v942++;
                    if ( v959 != v960 )
                      break;
                    if ( !--v957 )
                      goto LABEL_1395;
                  }
                }
                else
                {
LABEL_1395:
                  v934 = 1;
                  v1994 = 1;
                }
                v933 = (_DWORD *)v1993;
                v925 = v2000;
              }
              v945 = v932[9];
              if ( v945 < 0 )
              {
                v934 = 1;
                v1994 = 1;
                goto LABEL_1420;
              }
              if ( v934 )
              {
LABEL_1420:
                if ( *v932 == 1414090313 && v932[1] == 1195525195 )
                {
                  v933 = (_DWORD *)(v928 + 2524);
                  v50 = (*(_DWORD *)(v928 + 2524) & 0x2000) == 0;
                  v1993 = v928 + 2524;
                  if ( !v50 )
                    v934 = 0;
                  v1994 = v934;
                }
              }
              v961 = v2008;
              if ( (*v933 & 0x4000) != 0
                && (v945 & 0x20000000) != 0
                && (v2008 == *(_QWORD *)(v928 + 1504) || v2008 == *(_QWORD *)(v928 + 1512)) )
              {
                v934 = 1;
                v1994 = 1;
              }
              v962 = v932[3];
              v963 = v932[4];
              v964 = v2011;
              if ( v963 <= v932[2] )
                v963 = v932[2];
              v965 = v962 + v963;
              v2007 = v932[3];
              LODWORD(v1995) = v965;
              v2177 = v962;
              if ( (unsigned int *)v2012 == v2011 )
              {
                v966 = 0;
                v968 = 0;
              }
              else
              {
                v966 = *(_DWORD *)v2012;
                v967 = *(_DWORD *)(v2012 + 4);
                v968 = v967;
                if ( *(_DWORD *)v2012 > (unsigned int)v962 )
                {
                  v2177 = v962;
                  if ( v967 > v965 )
                  {
                    v989 = v962;
                    goto LABEL_1463;
                  }
                  v2177 = v962;
                  if ( v934 )
                  {
                    v989 = v962;
                    v990 = v2012;
                    goto LABEL_1467;
                  }
                  *v925 = v962;
                  v969 = v966 - v962;
                  v925[1] = v966;
                  v970 = (_QWORD *)(v961 + v962);
                  v1998 = v966 - v962;
                  v971 = v966 - (unsigned int)v962;
                  v972 = 0;
                  v973 = (char *)v970 + v971;
                  v2177 = v966;
                  v968 = v967;
                  do
                  {
                    v974 = v2088[v972];
                    if ( (unsigned __int64)v970 < v974 + (unsigned int)v2054[v972] && (unsigned __int64)v973 > v974 )
                      goto LABEL_1458;
                    ++v972;
                  }
                  while ( v972 < 6 );
                  *(_DWORD *)(v928 + 2120) += v969;
                  v975 = v970;
                  v976 = *(_DWORD *)(v928 + 2100);
                  v977 = (const char *)v970;
                  v978 = *(_QWORD *)(v928 + 2104);
                  v979 = (unsigned __int64)v970 + v969;
                  if ( (unsigned __int64)v970 < v979 )
                  {
                    do
                    {
                      _mm_prefetch(v977, 0);
                      v977 += 64;
                    }
                    while ( (unsigned __int64)v977 < v979 );
                  }
                  v980 = *(_QWORD *)(v928 + 2104);
                  v981 = v969 >> 7;
                  if ( v969 >> 7 )
                  {
                    do
                    {
                      v982 = 8LL;
                      do
                      {
                        v983 = v975[1] ^ __ROL8__(*v975 ^ v980, v976);
                        v975 += 2;
                        v980 = __ROL8__(v983, v976);
                        --v982;
                      }
                      while ( v982 );
                      v984 = (__ROL8__(v978 ^ ((char *)v975 - (char *)v970), 17) ^ v978 ^ (unsigned __int64)((char *)v975 - (char *)v970))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v2103 = *((_QWORD *)&v984 + 1);
                      v976 = ((unsigned __int8)(v984 ^ BYTE8(v984)) ^ (unsigned __int8)v976) & 0x3F;
                      if ( !v976 )
                        LOBYTE(v976) = 1;
                      --v981;
                    }
                    while ( v981 );
                    v18 = (__int64)v2001;
                    LOBYTE(v969) = v1998;
                  }
                  v985 = v969 & 0x7F;
                  if ( v985 >= 8 )
                  {
                    v986 = (unsigned __int64)v985 >> 3;
                    do
                    {
                      v980 = __ROL8__(*v975++ ^ v980, v976);
                      v985 -= 8;
                      --v986;
                    }
                    while ( v986 );
                  }
                  for ( ; v985; --v985 )
                  {
                    v987 = *(unsigned __int8 *)v975;
                    v975 = (_QWORD *)((char *)v975 + 1);
                    v980 = __ROL8__(v987 ^ v980, v976);
                  }
                  for ( i15 = v980; ; LODWORD(v980) = i15 ^ v980 )
                  {
                    i15 >>= 31;
                    if ( !i15 )
                      break;
                  }
                  v965 = v1995;
                  v934 = v1994;
                  v933 = (_DWORD *)v1993;
                  v2000[2] = v980 & 0x7FFFFFFF;
LABEL_1458:
                  v989 = v2177;
                  v964 = v2011;
LABEL_1463:
                  if ( v968 <= v965 )
                  {
                    v990 = v2012;
                    if ( (unsigned int *)v2012 != v964 )
                    {
LABEL_1467:
                      v991 = v1996;
                      if ( v1996 != v964 )
                      {
                        v992 = v1996[1];
                        if ( v992 <= v965 )
                        {
                          do
                          {
                            if ( v991 == v964 )
                              break;
                            if ( v934 )
                            {
                              v993 = 0x80;
                            }
                            else
                            {
                              v994 = *v991;
                              v995 = *(unsigned int *)(v990 + 4);
                              v2177 = *v991;
                              if ( *v991 < (unsigned int)v995 )
                              {
                                v996 = *(_DWORD *)(v928 + 2520);
                                if ( (v996 & 0x100000) == 0 )
                                {
                                  v2053 = -402653175;
                                  KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v2008, 6uLL, 0LL);
                                }
                                if ( !*(_DWORD *)(v928 + 2328) )
                                {
                                  *(_QWORD *)(v928 + 2336) = v928 - 0x5C5FC0A76E374B18LL;
                                  v997 = v2008;
                                  *(_QWORD *)(v928 + 2344) = 0LL;
                                  *(_QWORD *)(v928 + 2352) = 271LL;
                                  *(_QWORD *)(v928 + 2360) = v997;
                                  *(_DWORD *)(v928 + 2328) = 1;
                                  if ( (v996 & 0x20000000) == 0 && (*v933 & 0x200000) != 0 && (v996 & 1) != 0 )
                                  {
                                    v998 = *(unsigned int *)(v928 + 2676);
                                    v999 = *(_QWORD *)(v928 + 2104);
                                    v1000 = *(_QWORD *)(v928 + 2680);
                                    v1001 = (_QWORD *)(v998 + v928);
                                    v1002 = v998
                                          + v928
                                          + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v928 + 2052) - v998) >> 3);
                                    while ( v1001 != (_QWORD *)v1002 )
                                    {
                                      *v1001 ^= v1000;
                                      v1000 = ((v999 ^ *v1001++) + __ROR8__(v1000, v1000 & 0x3F)) ^ 0xF05;
                                    }
                                    *v933 &= ~0x200000u;
                                    if ( v1000 != *(_QWORD *)(v928 + 2688) )
                                    {
                                      v1003 = *(_DWORD *)(v928 + 2052);
                                      v1004 = *(_QWORD *)(v928 + 1416);
                                      *(_QWORD *)v1004 = v928;
                                      *(_DWORD *)(v1004 + 16) = v1003;
                                      if ( !*(_DWORD *)(v928 + 2328) )
                                        *(_QWORD *)(*(_QWORD *)(v928 + 1416) + 24LL) = v1000 ^ *(_QWORD *)(v928 + 2688);
                                      sub_140C7F03C(v928, 0LL, v1000, 256LL);
                                    }
                                  }
                                }
                              }
                              v1005 = (_QWORD *)(v2008 + v995);
                              v1006 = v994 - v995;
                              for ( i16 = 0; i16 < 6; ++i16 )
                              {
                                v1008 = v2088[i16];
                                if ( (unsigned __int64)v1005 < v1008 + (unsigned int)v2054[i16]
                                  && v2008 + v995 + v994 - (unsigned int)v995 > v1008 )
                                {
                                  goto LABEL_1508;
                                }
                              }
                              if ( v1006 < 4 )
                              {
LABEL_1508:
                                v993 = 0x80;
                              }
                              else
                              {
                                *(_DWORD *)(v928 + 2120) += v1006;
                                v1009 = v1005;
                                v1010 = *(_DWORD *)(v928 + 2100);
                                v1011 = (const char *)v1005;
                                v1012 = *(_QWORD *)(v928 + 2104);
                                v1013 = (unsigned __int64)v1005 + v1006;
                                if ( (unsigned __int64)v1005 < v1013 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v1011, 0);
                                    v1011 += 64;
                                  }
                                  while ( (unsigned __int64)v1011 < v1013 );
                                }
                                v1014 = *(_QWORD *)(v928 + 2104);
                                v1015 = v1006 >> 7;
                                if ( v1006 >> 7 )
                                {
                                  do
                                  {
                                    v1016 = 8LL;
                                    do
                                    {
                                      v1017 = v1009[1] ^ __ROL8__(*v1009 ^ v1014, v1010);
                                      v1009 += 2;
                                      v1014 = __ROL8__(v1017, v1010);
                                      --v1016;
                                    }
                                    while ( v1016 );
                                    v1018 = (__ROL8__(v1012 ^ ((char *)v1009 - (char *)v1005), 17) ^ v1012 ^ (unsigned __int64)((char *)v1009 - (char *)v1005))
                                          * (unsigned __int128)0x7010008004002001uLL;
                                    v2104 = *((_QWORD *)&v1018 + 1);
                                    v1010 = ((unsigned __int8)(v1018 ^ BYTE8(v1018)) ^ (unsigned __int8)v1010) & 0x3F;
                                    if ( !v1010 )
                                      LOBYTE(v1010) = 1;
                                    --v1015;
                                  }
                                  while ( v1015 );
                                  v18 = (__int64)v2001;
                                }
                                v1019 = v1006 & 0x7F;
                                if ( v1019 >= 8 )
                                {
                                  v1020 = (unsigned __int64)v1019 >> 3;
                                  do
                                  {
                                    v1014 = __ROL8__(*v1009++ ^ v1014, v1010);
                                    v1019 -= 8;
                                    --v1020;
                                  }
                                  while ( v1020 );
                                }
                                for ( ; v1019; --v1019 )
                                {
                                  v1021 = *(unsigned __int8 *)v1009;
                                  v1009 = (_QWORD *)((char *)v1009 + 1);
                                  v1014 = __ROL8__(v1021 ^ v1014, v1010);
                                }
                                for ( i17 = v1014; ; LOBYTE(v1014) = i17 ^ v1014 )
                                {
                                  i17 >>= 7;
                                  if ( !i17 )
                                    break;
                                }
                                v993 = v1014 & 0x7F;
                              }
                              v990 = v2012;
                              v964 = v2011;
                              v934 = v1994;
                              v965 = v1995;
                            }
                            v990 += 12LL;
                            v2012 = v990;
                            *(_BYTE *)v1997++ = v993;
                            v991 = v1996 + 3;
                            v1996 = v991;
                            if ( v991 != v964 )
                              v992 = v991[1];
                            v933 = (_DWORD *)v1993;
                          }
                          while ( v992 <= v965 );
                          v989 = v2177;
                        }
                      }
                    }
                  }
LABEL_1514:
                  v1023 = v2000;
                  if ( !v934 && v989 != v965 )
                  {
                    v2000[3] = v989;
                    v1023[4] = v965;
                    v1024 = 0;
                    v1025 = v965 - v1023[3];
                    v1026 = v2008 + v1023[3];
                    do
                    {
                      v1027 = v2088[v1024];
                      if ( v1026 < v1027 + (unsigned int)v2054[v1024] && v1026 + v965 - v1023[3] > v1027 )
                        goto LABEL_1538;
                      ++v1024;
                    }
                    while ( v1024 < 6 );
                    *(_DWORD *)(v928 + 2120) += v1025;
                    v1028 = (_QWORD *)v1026;
                    v1029 = *(_DWORD *)(v928 + 2100);
                    v1030 = (const char *)v1026;
                    v1031 = *(_QWORD *)(v928 + 2104);
                    v1032 = v1026 + v1025;
                    if ( v1026 < v1032 )
                    {
                      do
                      {
                        _mm_prefetch(v1030, 0);
                        v1030 += 64;
                      }
                      while ( (unsigned __int64)v1030 < v1032 );
                    }
                    v1033 = *(_QWORD *)(v928 + 2104);
                    v1034 = v1025 >> 7;
                    if ( v1025 >> 7 )
                    {
                      do
                      {
                        v1035 = 8LL;
                        do
                        {
                          v1036 = v1028[1] ^ __ROL8__(*v1028 ^ v1033, v1029);
                          v1028 += 2;
                          v1033 = __ROL8__(v1036, v1029);
                          --v1035;
                        }
                        while ( v1035 );
                        v1037 = (__ROL8__(v1031 ^ ((unsigned __int64)v1028 - v1026), 17) ^ v1031 ^ ((unsigned __int64)v1028
                                                                                                  - v1026))
                              * (unsigned __int128)0x7010008004002001uLL;
                        v2105 = *((_QWORD *)&v1037 + 1);
                        v1029 = ((unsigned __int8)(v1037 ^ BYTE8(v1037)) ^ (unsigned __int8)v1029) & 0x3F;
                        if ( !v1029 )
                          LOBYTE(v1029) = 1;
                        --v1034;
                      }
                      while ( v1034 );
                      v18 = (__int64)v2001;
                    }
                    v1038 = v1025 & 0x7F;
                    if ( v1038 >= 8 )
                    {
                      v1039 = (unsigned __int64)v1038 >> 3;
                      do
                      {
                        v1033 = __ROL8__(*v1028++ ^ v1033, v1029);
                        v1038 -= 8;
                        --v1039;
                      }
                      while ( v1039 );
                    }
                    for ( ; v1038; --v1038 )
                    {
                      v1040 = *(unsigned __int8 *)v1028;
                      v1028 = (_QWORD *)((char *)v1028 + 1);
                      v1033 = __ROL8__(v1040 ^ v1033, v1029);
                    }
                    for ( i18 = v1033; ; LODWORD(v1033) = i18 ^ v1033 )
                    {
                      i18 >>= 31;
                      if ( !i18 )
                        break;
                    }
                    v1023 = v2000;
                    v965 = v1995;
                    v2000[5] = v1033 & 0x7FFFFFFF;
                  }
LABEL_1538:
                  v1042 = v2012;
                  if ( (unsigned int *)v2012 != v2011 && *(_DWORD *)v2012 >= v2007 && *(_DWORD *)(v2012 + 4) <= v965 )
                  {
                    v1043 = v1996;
                    if ( v1996 != v2011 )
                    {
                      v1044 = v1997;
                      *(_BYTE *)v1997 = 0x80;
                      v1997 = v1044 + 1;
                      v1996 = (unsigned int *)v1043 + 3;
                    }
                    v2012 = v1042 + 12;
                  }
                  v925 = v1023 + 6;
                  v933 = (_DWORD *)v1993;
                  v932 = v2015 + 10;
                  v2000 = v925;
                  v2015 += 10;
                  if ( v925 == v2002 )
                  {
                    v811 = (__int64)v2018;
                    goto LABEL_1546;
                  }
                  continue;
                }
              }
              break;
            }
            v989 = v962;
            if ( v966 >= (unsigned int)v962 )
              goto LABEL_1463;
            goto LABEL_1514;
          }
          ++v716;
          v708 = 0;
          if ( v716 >= *(_DWORD *)(v18 + 2092) )
            goto LABEL_1084;
        }
        v720 = v716 - v708;
        v708 = v716;
        while ( 2 )
        {
          if ( *(_DWORD *)v714 == 1 )
            goto LABEL_1073;
          if ( *(_DWORD *)v714 != 7 )
          {
            switch ( *(_DWORD *)v714 )
            {
              case 8:
                v722 = *(unsigned __int16 *)(v714 + 32);
                break;
              case 0xA:
                v721 = (unsigned int)(16 * (*(_DWORD *)(v714 + 28) + 3));
                goto LABEL_1074;
              case 0x1C:
                v722 = *(unsigned __int16 *)(v714 + 40);
                break;
              default:
                switch ( *(_DWORD *)v714 )
                {
                  case 0x1E:
                    v721 = (((*(_DWORD *)(v714 + 36) != 0 ? *(_DWORD *)(v714 + 36) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                         + 24 * (*(unsigned __int16 *)(v714 + 40) + 2);
                    break;
                  case 0x21:
                    v721 = 20
                         * (unsigned int)(((*(_DWORD *)(v714 + 32) & 0xFFF)
                                         + (unsigned __int64)*(unsigned int *)(v714 + 40)
                                         + 4095) >> 12)
                         + 48;
                    break;
                  case 0x2B:
LABEL_1073:
                    v721 = 4 * (*(_DWORD *)(v714 + 16) / 0xCu) + 48;
                    break;
                  default:
                    v721 = 48LL;
                    break;
                }
LABEL_1074:
                v714 += v721;
                if ( !--v720 )
                {
                  v18 = (__int64)v2001;
                  v707 = v2008;
                  v710 = v2012;
                  goto LABEL_1076;
                }
                continue;
            }
            v721 = (v722 + 55) & 0xFFFFFFF8;
            goto LABEL_1074;
          }
          break;
        }
        v721 = (unsigned int)(24 * (*(_DWORD *)(v714 + 24) + 2));
        goto LABEL_1074;
      }
      switch ( v63 )
      {
        case 15:
          if ( *(_QWORD *)(*(_QWORD *)(v18 + 1384) + 32LL) )
          {
            *(_DWORD *)(v18 + 2120) += 256;
            v342 = *(_QWORD *)(v18 + 1408);
            v343 = (*(__int64 (__fastcall **)(__int64, __int64))(v18 + 736))(v342, 1LL);
            if ( v343 )
            {
              v344 = (*(__int64 (__fastcall **)(__int64))(v18 + 744))(v343);
              v345 = *((_QWORD *)v38 + 3);
              v346 = v344;
              if ( v345 )
              {
                if ( v345 != v344 && !*(_DWORD *)(v18 + 2328) )
                {
                  *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2352) = *(int *)v38;
                  *(_QWORD *)(v18 + 2360) = v344;
                  *(_DWORD *)(v18 + 2328) = 1;
                  v347 = *(_DWORD *)(v18 + 2520);
                  if ( (v347 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v347 & 1) != 0 )
                  {
                    v348 = *(unsigned int *)(v18 + 2676);
                    v349 = *(_QWORD *)(v18 + 2104);
                    v350 = *(_QWORD *)(v18 + 2680);
                    v351 = (_QWORD *)(v348 + v18);
                    v352 = v348 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v348) >> 3);
                    while ( v351 != (_QWORD *)v352 )
                    {
                      *v351 ^= v350;
                      v350 = ((v349 ^ *v351++) + __ROR8__(v350, v350 & 0x3F)) ^ 0xF05;
                    }
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v350 != *(_QWORD *)(v18 + 2688) )
                    {
                      v353 = *(_DWORD *)(v18 + 2052);
                      v354 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)v354 = v18;
                      *(_DWORD *)(v354 + 16) = v353;
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v350 ^ *(_QWORD *)(v18 + 2688);
                      sub_140C7F03C(v18, 0LL, v350, 256LL);
                    }
                  }
                }
              }
              else
              {
                v355 = *(_QWORD *)(v18 + 2504);
                if ( (!*(_DWORD *)(v18 + 2496) || v344 < v355 || v344 > v355 + *(unsigned int *)(v18 + 2496) - 1LL)
                  && !*(_DWORD *)(v18 + 2328) )
                {
                  *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2352) = *(int *)v38;
                  *(_QWORD *)(v18 + 2360) = v344;
                  *(_DWORD *)(v18 + 2328) = 1;
                  v356 = *(_DWORD *)(v18 + 2520);
                  if ( (v356 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v356 & 1) != 0 )
                  {
                    v357 = *(unsigned int *)(v18 + 2676);
                    v358 = *(_QWORD *)(v18 + 2104);
                    v359 = *(_QWORD *)(v18 + 2680);
                    v360 = (_QWORD *)(v357 + v18);
                    v361 = v357 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v357) >> 3);
                    while ( v360 != (_QWORD *)v361 )
                    {
                      *v360 ^= v359;
                      v359 = ((v358 ^ *v360++) + __ROR8__(v359, v359 & 0x3F)) ^ 0xF05;
                    }
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v359 != *(_QWORD *)(v18 + 2688) )
                    {
                      v362 = *(_QWORD *)(v18 + 1416);
                      v363 = *(_DWORD *)(v18 + 2052);
                      *(_QWORD *)v362 = v18;
                      *(_DWORD *)(v362 + 16) = v363;
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *(_QWORD *)(v18 + 2688) ^ v359;
                      sub_140C7F03C(v18, 0LL, v359, 256LL);
                    }
                  }
                }
                *((_QWORD *)v38 + 3) = v346;
              }
              (*(void (__fastcall **)(__int64, __int64))(v18 + 752))(v342, v343);
            }
            goto LABEL_237;
          }
          goto LABEL_289;
        case 0:
          v311 = (_QWORD *)*((_QWORD *)v38 + 1);
          v312 = *((unsigned int *)v38 + 4);
          v313 = v311;
          *(_DWORD *)(v18 + 2120) += v312;
          v314 = (const char *)v311;
          v315 = *(_DWORD *)(v18 + 2100);
          v316 = *(_QWORD *)(v18 + 2104);
          if ( v311 < (_QWORD *)((char *)v311 + v312) )
          {
            do
            {
              _mm_prefetch(v314, 0);
              v314 += 64;
            }
            while ( v314 < (const char *)v311 + v312 );
          }
          v317 = *(_QWORD *)(v18 + 2104);
          v318 = (unsigned int)v312 >> 7;
          if ( (unsigned int)v312 >> 7 )
          {
            do
            {
              v319 = 8LL;
              do
              {
                v320 = v313[1] ^ __ROL8__(*v313 ^ v317, v315);
                v313 += 2;
                v317 = __ROL8__(v320, v315);
                --v319;
              }
              while ( v319 );
              v321 = (__ROL8__(v316 ^ ((char *)v313 - (char *)v311), 17) ^ v316 ^ (unsigned __int64)((char *)v313 - (char *)v311))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2123 = *((_QWORD *)&v321 + 1);
              v315 = ((unsigned __int8)(v321 ^ BYTE8(v321)) ^ (unsigned __int8)v315) & 0x3F;
              if ( !v315 )
                LOBYTE(v315) = 1;
              --v318;
            }
            while ( v318 );
            v18 = (__int64)v2001;
          }
          v322 = v312 & 0x7F;
          if ( v322 >= 8 )
          {
            v323 = (unsigned __int64)v322 >> 3;
            do
            {
              v317 = __ROL8__(*v313++ ^ v317, v315);
              v322 -= 8;
              --v323;
            }
            while ( v323 );
          }
          for ( ; v322; --v322 )
          {
            v324 = *(unsigned __int8 *)v313;
            v313 = (_QWORD *)((char *)v313 + 1);
            v317 = __ROL8__(v324 ^ v317, v315);
          }
          for ( i19 = v317; ; LODWORD(v317) = i19 ^ v317 )
          {
            i19 >>= 31;
            if ( !i19 )
              break;
          }
          v326 = v317 & 0x7FFFFFFF;
          if ( v326 != *((_DWORD *)v38 + 5) )
          {
            if ( !*(_DWORD *)v38 && *((_DWORD *)v38 + 6) )
              n = 1;
            v327 = *((_QWORD *)v38 + 1);
            if ( !*((_DWORD *)v38 + 4) || (v328 = 64LL, (*(_DWORD *)(v18 + 2524) & 0x40) == 0) )
            {
LABEL_545:
              n = 0;
              if ( !*(_DWORD *)(v18 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *((unsigned int *)v38 + 5) ^ (unsigned __int64)v326;
              v333 = *((_QWORD *)v38 + 1);
              if ( *(_DWORD *)(v18 + 2328) )
                goto LABEL_2486;
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *(int *)v38;
              *(_QWORD *)(v18 + 2360) = v333;
              *(_DWORD *)(v18 + 2328) = 1;
              v334 = *(_DWORD *)(v18 + 2520);
              if ( (v334 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v334 & 1) == 0 )
                goto LABEL_2486;
              v335 = *(unsigned int *)(v18 + 2676);
              v336 = *(_QWORD *)(v18 + 2104);
              v337 = *(_QWORD *)(v18 + 2680);
              v338 = (_QWORD *)(v335 + v18);
              v339 = v335 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v335) >> 3);
              while ( v338 != (_QWORD *)v339 )
              {
                *v338 ^= v337;
                v337 = ((v336 ^ *v338++) + __ROR8__(v337, v337 & 0x3F)) ^ 0xF05;
              }
              goto LABEL_554;
            }
            v329 = KeGetCurrentIrql();
            v330 = v327 & 0xFFFFFFFFFFFFF000uLL;
            v1993 = (v327 + *((unsigned int *)v38 + 4) - 1LL) | 0xFFF;
            v331 = (v327 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_536:
            __writecr8(2uLL);
            while ( 1 )
            {
              v332 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                       v330,
                       0LL,
                       v328,
                       v313);
              if ( v332 == -1073741267 )
              {
                if ( n )
                  goto LABEL_544;
                if ( v329 <= 1u )
                {
                  __writecr8(v329);
                  goto LABEL_536;
                }
              }
              else if ( v332 < 0 )
              {
LABEL_544:
                __writecr8(v329);
                v38 = v1992;
                goto LABEL_545;
              }
              v330 += 4096LL;
              v331 += 4096LL;
              if ( v331 == v1993 )
              {
                __writecr8(v329);
                goto LABEL_466;
              }
            }
          }
LABEL_669:
          n = 0;
          goto LABEL_237;
        case 1:
          goto LABEL_2711;
        case 4:
          if ( (*(_DWORD *)(v18 + 2128) & 1) != 0 )
            goto LABEL_289;
          v277 = *(void (__fastcall **)(_QWORD, _QWORD))(v18 + 392);
          v278 = 0;
          v279 = *(_QWORD *)(v18 + 1344);
          v1998 = 0;
          v277((unsigned int)(v63 - 4), 1LL);
          if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 || (v280 = *(_DWORD *)(v18 + 2424), v280 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 312))(*(_QWORD *)(v18 + 2632), 0LL);
            v281 = 0x80;
          }
          else
          {
            v281 = 1 << v280;
          }
          v2171 = v281;
          (*(void (__fastcall **)(__int64, _QWORD))(v18 + 328))(v279, 0LL);
          v282 = *(_QWORD ***)(v18 + 1304);
          v283 = *v282;
          if ( *v282 != v282 )
          {
            v284 = (int *)v1992;
            do
            {
              v285 = (unsigned __int64)v283 - *(_QWORD *)(v18 + 1760);
              if ( v281 != 0x80
                && (v281 & *(_BYTE *)(v285 + *(_QWORD *)(v18 + 1736))) != 0
                && (*(_DWORD *)(v285 + *(_QWORD *)(v18 + 1744)) & *(_DWORD *)(v18 + 1768)) != 0
                && !*(_DWORD *)(v18 + 2328) )
              {
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = (char *)v284 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *v284;
                *(_QWORD *)(v18 + 2360) = v285 | 1;
                *(_DWORD *)(v18 + 2328) = 1;
                v286 = *(_DWORD *)(v18 + 2520);
                if ( (v286 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v286 & 1) != 0 )
                {
                  v287 = *(unsigned int *)(v18 + 2676);
                  v288 = *(_QWORD *)(v18 + 2104);
                  v289 = *(_QWORD *)(v18 + 2680);
                  v290 = (_QWORD *)(v287 + v18);
                  v291 = v287 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v287) >> 3);
                  while ( v290 != (_QWORD *)v291 )
                  {
                    *v290 ^= v289;
                    v289 = ((v288 ^ *v290++) + __ROR8__(v289, v289 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                  if ( v289 != *(_QWORD *)(v18 + 2688) )
                  {
                    v292 = *(_DWORD *)(v18 + 2052);
                    v293 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v293 = v18;
                    *(_DWORD *)(v293 + 16) = v292;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v289 ^ *(_QWORD *)(v18 + 2688);
                    sub_140C7F03C(v18, 0LL, v289, 256LL);
                  }
                }
              }
              _InterlockedOr8((volatile signed __int8 *)(v285 + *(_QWORD *)(v18 + 1736)), v281);
              v283 = (_QWORD *)*v283;
              ++v278;
            }
            while ( v283 != v282 );
            v1998 = v278;
          }
          v294 = *(_QWORD *)(v18 + 1272);
          v1993 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          (*(void (__fastcall **)(__int64, _BYTE *))(v18 + 344))(v294, v2162);
          v295 = *(_QWORD ***)(v18 + 1264);
          v296 = *v295;
          if ( *v295 != v295 )
          {
            v297 = v281;
            v298 = v281;
            v299 = (int *)v1992;
            v300 = ~v297;
            do
            {
              v301 = (char *)v296 - *(_QWORD *)(v18 + 1728);
              if ( (v301[*(_QWORD *)(v18 + 1736)] & v298) == 0 && !*(_DWORD *)(v18 + 2328) )
              {
                *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v18 + 2344) = (char *)v299 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v18 + 2352) = *v299;
                *(_QWORD *)(v18 + 2360) = v301;
                *(_DWORD *)(v18 + 2328) = 1;
                v302 = *(_DWORD *)(v18 + 2520);
                if ( (v302 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v302 & 1) != 0 )
                {
                  v303 = *(unsigned int *)(v18 + 2676);
                  v304 = *(_QWORD *)(v18 + 2104);
                  v305 = *(_QWORD *)(v18 + 2680);
                  v306 = (_QWORD *)(v303 + v18);
                  v307 = v303 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v303) >> 3);
                  while ( v306 != (_QWORD *)v307 )
                  {
                    *v306 ^= v305;
                    v305 = ((*v306++ ^ v304) + __ROR8__(v305, v305 & 0x3F)) ^ 0xF05;
                  }
                  *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                  if ( v305 != *(_QWORD *)(v18 + 2688) )
                  {
                    v308 = *(_DWORD *)(v18 + 2052);
                    v309 = *(_QWORD *)(v18 + 1416);
                    *(_QWORD *)v309 = v18;
                    *(_DWORD *)(v309 + 16) = v308;
                    if ( !*(_DWORD *)(v18 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v305 ^ *(_QWORD *)(v18 + 2688);
                    sub_140C7F03C(v18, 0LL, v305, 256LL);
                  }
                }
              }
              _InterlockedAnd8(&v301[*(_QWORD *)(v18 + 1736)], v300);
              v296 = (_QWORD *)*v296;
            }
            while ( v296 != v295 );
            v281 = v2171;
          }
          (*(void (__fastcall **)(_BYTE *))(v18 + 408))(v2162);
          __writecr8((unsigned __int8)v1993);
          if ( v281 == 0x80 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 320))(*(_QWORD *)(v18 + 2632), 0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 336))(*(_QWORD *)(v18 + 1344), 0LL);
          (*(void (**)(void))(v18 + 400))();
          v310 = v1998;
LABEL_511:
          *(_DWORD *)(v18 + 2120) += v310 << 8;
          goto LABEL_466;
        case 5:
          v232 = *(_DWORD *)(v18 + 2128);
          if ( (v232 & 1) == 0 )
            goto LABEL_289;
          if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 )
          {
            v234 = __rdtsc();
            v235 = (v234 ^ __ROR8__(v234, 3)) * (unsigned __int128)0x7010008004002001uLL;
            v2124 = *((_QWORD *)&v235 + 1);
            v233 = v235 ^ *((_QWORD *)&v235 + 1);
            *(_QWORD *)&v235 = 3 * (((unsigned __int64)v235 ^ *((_QWORD *)&v235 + 1)) / 3);
            v39 = v233 == v235;
            v2170 = v233 == (_QWORD)v235;
          }
          else
          {
            v233 = v232 & 3;
            v2170 = (_BYTE)v233 == 3;
          }
          v236 = *(void (__fastcall **)(_QWORD, _QWORD))(v18 + 392);
          v237 = 0;
          v238 = *(_QWORD *)(v18 + 1344);
          v1998 = 0;
          v236(v233, v39);
          if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) != 0 || (v239 = *(_DWORD *)(v18 + 2424), v239 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 312))(*(_QWORD *)(v18 + 2632), 0LL);
            v240 = 0x80;
          }
          else
          {
            v240 = 1 << v239;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(v18 + 328))(v238, 0LL);
          v241 = *(volatile signed __int8 ***)(v18 + 1304);
          v242 = *v241;
          if ( *v241 != (volatile signed __int8 *)v241 )
          {
            do
            {
              _InterlockedOr8(&v242[*(_QWORD *)(v18 + 1736) - *(_QWORD *)(v18 + 1760)], v240);
              v242 = *(volatile signed __int8 **)v242;
              ++v237;
            }
            while ( v242 != (volatile signed __int8 *)v241 );
            v1998 = v237;
          }
          v243 = **(_QWORD **)(v18 + 1352);
          v244 = *(unsigned int *)(*(_QWORD *)(v18 + 1856) + v243);
          v1993 = v244;
          while ( 1 )
          {
            v245 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v18 + 272))(v243, v30);
            if ( v245 )
              break;
LABEL_461:
            v30 += 4LL;
            if ( v30 >= v244 )
            {
              v275 = v1998;
              if ( v240 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 320))(*(_QWORD *)(v18 + 2632), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v18 + 336))(*(_QWORD *)(v18 + 1344), 0LL);
              (*(void (**)(void))(v18 + 400))();
              v276 = (v244 >> 2) + v275;
              goto LABEL_465;
            }
          }
          v246 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(v18 + 280))(v245);
          v247 = v246;
          v248 = *v246 & 0x7F;
          if ( v248 == 3 )
          {
            if ( (v240 & v246[*(_QWORD *)(v18 + 1736)]) == 0
              && (*(_DWORD *)&v246[*(_QWORD *)(v18 + 1744)] & *(_DWORD *)(v18 + 1768)) != 0
              && !*(_DWORD *)(v18 + 2328) )
            {
              v249 = (int *)v1992;
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v249 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v249;
              *(_QWORD *)(v18 + 2360) = v246;
              *(_DWORD *)(v18 + 2328) = 1;
              v250 = *(_DWORD *)(v18 + 2520);
              if ( (v250 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v250 & 1) != 0 )
              {
                v251 = *(unsigned int *)(v18 + 2676);
                v252 = *(_QWORD *)(v18 + 2104);
                v253 = *(_QWORD *)(v18 + 2680);
                v254 = (_QWORD *)(v251 + v18);
                v255 = v251 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v251) >> 3);
                while ( v254 != (_QWORD *)v255 )
                {
                  *v254 ^= v253;
                  v253 = ((v252 ^ *v254++) + __ROR8__(v253, v253 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v253 != *(_QWORD *)(v18 + 2688) )
                {
                  v256 = *(_DWORD *)(v18 + 2052);
                  v257 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v257 = v18;
                  *(_DWORD *)(v257 + 16) = v256;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v253 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v253, 256LL);
                }
              }
            }
            _InterlockedAnd8(&v247[*(_QWORD *)(v18 + 1736)], ~v240);
            goto LABEL_460;
          }
          if ( v248 == 6 )
          {
            if ( v2170 )
            {
              if ( (v258 = *(_QWORD *)(v18 + 1680), v259 = *(_QWORD *)&v246[v258 + 32], v259 != *(_QWORD *)(v18 + 808))
                && v259 != *(_QWORD *)(v18 + 816)
                || *(_QWORD *)&v247[v258 + 48] != *(_QWORD *)(v18 + 824)
                || *(_QWORD *)&v247[v258 + 40] != *(_QWORD *)(v18 + 832) )
              {
                if ( !*(_DWORD *)(v18 + 2328) )
                {
                  v260 = (int *)v1992;
                  *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2344) = (char *)v260 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2352) = *v260;
                  *(_QWORD *)(v18 + 2360) = v247;
                  *(_DWORD *)(v18 + 2328) = 1;
                  v261 = *(_DWORD *)(v18 + 2520);
                  if ( (v261 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v261 & 1) != 0 )
                  {
                    v262 = *(unsigned int *)(v18 + 2676);
                    v263 = *(_QWORD *)(v18 + 2104);
                    v264 = *(_QWORD *)(v18 + 2680);
                    v265 = (_QWORD *)(v262 + v18);
                    v266 = v262 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v262) >> 3);
                    while ( v265 != (_QWORD *)v266 )
                    {
                      *v265 ^= v264;
                      v264 = ((v263 ^ *v265++) + __ROR8__(v264, v264 & 0x3F)) ^ 0xF05;
                    }
                    goto LABEL_456;
                  }
                }
              }
            }
          }
          else if ( v248 )
          {
            if ( !*(_DWORD *)(v18 + 2328) )
            {
              v267 = (int *)v1992;
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = (char *)v267 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *v267;
              *(_QWORD *)(v18 + 2360) = v246;
              *(_DWORD *)(v18 + 2328) = 1;
              v268 = *(_DWORD *)(v18 + 2520);
              if ( (v268 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v268 & 1) != 0 )
              {
                v269 = *(unsigned int *)(v18 + 2676);
                v270 = *(_QWORD *)(v18 + 2104);
                v264 = *(_QWORD *)(v18 + 2680);
                v271 = (_QWORD *)(v269 + v18);
                v272 = v269 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v269) >> 3);
                while ( v271 != (_QWORD *)v272 )
                {
                  *v271 ^= v264;
                  v264 = ((v270 ^ *v271++) + __ROR8__(v264, v264 & 0x3F)) ^ 0xF05;
                }
LABEL_456:
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v264 != *(_QWORD *)(v18 + 2688) )
                {
                  v273 = *(_DWORD *)(v18 + 2052);
                  v274 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v274 = v18;
                  *(_DWORD *)(v274 + 16) = v273;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v264 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v264, 256LL);
                }
              }
            }
          }
LABEL_460:
          (*(void (__fastcall **)(__int64, __int64))(v18 + 304))(v243, v245);
          v244 = v1993;
          goto LABEL_461;
        case 7:
          (*(void (__fastcall **)(_BYTE *, _QWORD))(v18 + 432))(v2138, *((unsigned int *)v38 + 7));
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(v18 + 480))(v2138, v2139);
          for ( i20 = 0; i20 < *((_DWORD *)v38 + 6); ++i20 )
          {
            v218 = *(unsigned int *)&v38[24 * i20 + 64];
            if ( (*(_BYTE *)(v18 + 2203) & 2) != 0
              && (_DWORD)v218 == -1073741694
              && KeGetPcr()->Prcb.Number == *(_DWORD *)(v18 + 2320) )
            {
              v219 = *(_QWORD *)(v18 + 2312);
            }
            else
            {
              v219 = __readmsr(v218);
            }
            v220 = *(_QWORD *)&v38[24 * i20 + 48];
            v221 = *(_QWORD *)&v38[24 * i20 + 56];
            v222 = v220 & v219;
            if ( v222 == v221 )
            {
              if ( (*(_DWORD *)(v18 + 2524) & 0x200) != 0 && v220 == -1 )
                __writemsr(v218, v222);
            }
            else
            {
              v223 = v218 | ((unsigned __int64)*((unsigned int *)v38 + 7) << 32);
              if ( !*(_DWORD *)(v18 + 2328) )
              {
                *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v222 ^ v221;
                if ( !*(_DWORD *)(v18 + 2328) )
                {
                  *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v18 + 2352) = *(int *)v38;
                  *(_QWORD *)(v18 + 2360) = v223;
                  *(_DWORD *)(v18 + 2328) = 1;
                  v224 = *(_DWORD *)(v18 + 2520);
                  if ( (v224 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v224 & 1) != 0 )
                  {
                    v225 = *(unsigned int *)(v18 + 2676);
                    v226 = *(_QWORD *)(v18 + 2104);
                    v227 = *(_QWORD *)(v18 + 2680);
                    v228 = (_QWORD *)(v225 + v18);
                    v229 = v225 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v225) >> 3);
                    while ( v228 != (_QWORD *)v229 )
                    {
                      *v228 ^= v227;
                      v227 = ((v226 ^ *v228++) + __ROR8__(v227, v227 & 0x3F)) ^ 0xF05;
                    }
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v227 != *(_QWORD *)(v18 + 2688) )
                    {
                      v230 = *(_DWORD *)(v18 + 2052);
                      v231 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)v231 = v18;
                      *(_DWORD *)(v231 + 16) = v230;
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v227 ^ *(_QWORD *)(v18 + 2688);
                      sub_140C7F03C(v18, 0LL, v227, 256LL);
                    }
                  }
                }
              }
            }
          }
          (*(void (__fastcall **)(_BYTE *))(v18 + 424))(v2139);
          *(_DWORD *)(v18 + 2120) += *((_DWORD *)v38 + 6) << 15;
          goto LABEL_289;
        case 8:
          v156 = *((_QWORD *)v38 + 3);
          if ( *(_WORD *)(v156 + *(_QWORD *)(v18 + 1792) + *(_QWORD *)(v18 + 1840)) != *((_WORD *)v38 + 17)
            && !*(_DWORD *)(v18 + 2328) )
          {
            *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2352) = *(int *)v38;
            *(_QWORD *)(v18 + 2360) = v156;
            *(_DWORD *)(v18 + 2328) = 1;
            v157 = *(_DWORD *)(v18 + 2520);
            if ( (v157 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v157 & 1) != 0 )
            {
              v158 = *(unsigned int *)(v18 + 2676);
              v159 = *(_QWORD *)(v18 + 2104);
              v160 = *(_QWORD *)(v18 + 2680);
              v161 = (_QWORD *)(v158 + v18);
              v162 = v158 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v158) >> 3);
              while ( v161 != (_QWORD *)v162 )
              {
                *v161 ^= v160;
                v160 = ((v159 ^ *v161++) + __ROR8__(v160, v160 & 0x3F)) ^ 0xF05;
              }
              *(_DWORD *)(v18 + 2524) &= ~0x200000u;
              if ( v160 != *(_QWORD *)(v18 + 2688) )
              {
                v163 = *(_DWORD *)(v18 + 2052);
                v164 = *(_QWORD *)(v18 + 1416);
                *(_QWORD *)v164 = v18;
                *(_DWORD *)(v164 + 16) = v163;
                if ( !*(_DWORD *)(v18 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v160 ^ *(_QWORD *)(v18 + 2688);
                sub_140C7F03C(v18, 0LL, v160, 256LL);
              }
            }
          }
          if ( (*(_WORD *)(v18 + 1848) & *((_WORD *)v38 + 17)) == 0
            && *(_QWORD *)(v156 + *(_QWORD *)(v18 + 1800)) != v156 + *(_QWORD *)(v18 + 1800)
            && !*(_DWORD *)(v18 + 2328) )
          {
            *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2352) = *(int *)v38;
            *(_QWORD *)(v18 + 2360) = v156;
            *(_DWORD *)(v18 + 2328) = 1;
            v165 = *(_DWORD *)(v18 + 2520);
            if ( (v165 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v165 & 1) != 0 )
            {
              v166 = *(unsigned int *)(v18 + 2676);
              v167 = *(_QWORD *)(v18 + 2104);
              v168 = *(_QWORD *)(v18 + 2680);
              v169 = (_QWORD *)(v166 + v18);
              v170 = v166 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v166) >> 3);
              while ( v169 != (_QWORD *)v170 )
              {
                *v169 ^= v168;
                v168 = ((v167 ^ *v169++) + __ROR8__(v168, v168 & 0x3F)) ^ 0xF05;
              }
              *(_DWORD *)(v18 + 2524) &= ~0x200000u;
              if ( v168 != *(_QWORD *)(v18 + 2688) )
              {
                v171 = *(_DWORD *)(v18 + 2052);
                v172 = *(_QWORD *)(v18 + 1416);
                *(_QWORD *)v172 = v18;
                *(_DWORD *)(v172 + 16) = v171;
                if ( !*(_DWORD *)(v18 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v168 ^ *(_QWORD *)(v18 + 2688);
                sub_140C7F03C(v18, 0LL, v168, 256LL);
              }
            }
          }
          v173 = (_QWORD *)*((_QWORD *)v38 + 1);
          v174 = *((unsigned int *)v38 + 4);
          v175 = v173;
          *(_DWORD *)(v18 + 2120) += v174;
          v176 = (const char *)v173;
          v177 = *(_DWORD *)(v18 + 2100);
          v178 = *(_QWORD *)(v18 + 2104);
          if ( v173 < (_QWORD *)((char *)v173 + v174) )
          {
            do
            {
              _mm_prefetch(v176, 0);
              v176 += 64;
            }
            while ( v176 < (const char *)v173 + v174 );
          }
          v179 = *(_QWORD *)(v18 + 2104);
          v180 = (unsigned int)v174 >> 7;
          if ( (unsigned int)v174 >> 7 )
          {
            do
            {
              v181 = 8LL;
              do
              {
                v182 = v175[1] ^ __ROL8__(*v175 ^ v179, v177);
                v175 += 2;
                v179 = __ROL8__(v182, v177);
                --v181;
              }
              while ( v181 );
              v183 = (__ROL8__(v178 ^ ((char *)v175 - (char *)v173), 17) ^ v178 ^ (unsigned __int64)((char *)v175 - (char *)v173))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2131 = *((_QWORD *)&v183 + 1);
              v177 = ((unsigned __int8)(v183 ^ BYTE8(v183)) ^ (unsigned __int8)v177) & 0x3F;
              if ( !v177 )
                LOBYTE(v177) = 1;
              --v180;
            }
            while ( v180 );
            v18 = (__int64)v2001;
          }
          v184 = v174 & 0x7F;
          if ( v184 >= 8 )
          {
            v185 = (unsigned __int64)v184 >> 3;
            do
            {
              v179 = __ROL8__(*v175++ ^ v179, v177);
              v184 -= 8;
              --v185;
            }
            while ( v185 );
          }
          for ( ; v184; --v184 )
          {
            v186 = *(unsigned __int8 *)v175;
            v175 = (_QWORD *)((char *)v175 + 1);
            v179 = __ROL8__(v186 ^ v179, v177);
          }
          for ( i21 = v179; ; LODWORD(v179) = i21 ^ v179 )
          {
            i21 >>= 31;
            if ( !i21 )
              break;
          }
          v188 = v179 & 0x7FFFFFFF;
          if ( v188 == *((_DWORD *)v38 + 5) )
          {
LABEL_351:
            n = 0;
          }
          else
          {
            if ( !*(_DWORD *)v38 && *((_DWORD *)v38 + 6) )
              n = 1;
            v189 = *((_QWORD *)v38 + 1);
            if ( *((_DWORD *)v38 + 4) )
            {
              v190 = 64LL;
              if ( (*(_DWORD *)(v18 + 2524) & 0x40) != 0 )
              {
                v191 = KeGetCurrentIrql();
                v192 = v189 & 0xFFFFFFFFFFFFF000uLL;
                v1993 = (v189 + *((unsigned int *)v38 + 4) - 1LL) | 0xFFF;
                v193 = (v189 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v194 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                             v192,
                             0LL,
                             v190,
                             v175);
                    if ( v194 == -1073741267 )
                      break;
                    if ( v194 < 0 )
                    {
LABEL_359:
                      __writecr8(v191);
                      v38 = v1992;
                      goto LABEL_360;
                    }
LABEL_349:
                    v192 += 4096LL;
                    v193 += 4096LL;
                    if ( v193 == v1993 )
                    {
                      __writecr8(v191);
                      v38 = v1992;
                      goto LABEL_351;
                    }
                  }
                  if ( n )
                    goto LABEL_359;
                  if ( v191 > 1u )
                    goto LABEL_349;
                  __writecr8(v191);
                }
              }
            }
LABEL_360:
            n = 0;
            if ( !*(_DWORD *)(v18 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *((unsigned int *)v38 + 5) ^ (unsigned __int64)v188;
            v205 = *((_QWORD *)v38 + 1);
            if ( !*(_DWORD *)(v18 + 2328) )
            {
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *(int *)v38;
              *(_QWORD *)(v18 + 2360) = v205;
              *(_DWORD *)(v18 + 2328) = 1;
              v206 = *(_DWORD *)(v18 + 2520);
              if ( (v206 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v206 & 1) != 0 )
              {
                v207 = *(unsigned int *)(v18 + 2676);
                v208 = *(_QWORD *)(v18 + 2104);
                v209 = *(_QWORD *)(v18 + 2680);
                v210 = (_QWORD *)(v207 + v18);
                v211 = v207 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v207) >> 3);
                while ( v210 != (_QWORD *)v211 )
                {
                  *v210 ^= v209;
                  v209 = ((v208 ^ *v210++) + __ROR8__(v209, v209 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v209 != *(_QWORD *)(v18 + 2688) )
                {
                  v212 = *(_DWORD *)(v18 + 2052);
                  v213 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v213 = v18;
                  *(_DWORD *)(v213 + 16) = v212;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v209 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v209, 256LL);
                }
              }
            }
          }
          v2085 = v38 + 48;
          v195 = *((_WORD *)v38 + 16);
          v1991 = &v2045;
          v2084[0] = v195;
          v2084[1] = v195;
          v196 = *(_QWORD *)(v18 + 1280);
          v197 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v18 + 504);
          LOBYTE(v1990) = 0;
          if ( v197(v2084, 0LL, 0LL, 0LL, v196, v1990, 0LL, &v2045) < 0 )
            goto LABEL_237;
          v198 = v2045;
          if ( v2045 != *((_QWORD *)v38 + 3) && !*(_DWORD *)(v18 + 2328) )
          {
            *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v18 + 2352) = *(int *)v38;
            *(_QWORD *)(v18 + 2360) = v198;
            *(_DWORD *)(v18 + 2328) = 1;
            v199 = *(_DWORD *)(v18 + 2520);
            if ( (v199 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v199 & 1) != 0 )
            {
              v200 = *(unsigned int *)(v18 + 2676);
              v201 = *(_QWORD *)(v18 + 2104);
              v202 = *(_QWORD *)(v18 + 2680);
              v203 = (_QWORD *)(v200 + v18);
              v204 = v200 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v200) >> 3);
              while ( v203 != (_QWORD *)v204 )
              {
                *v203 ^= v202;
                v202 = ((v201 ^ *v203++) + __ROR8__(v202, v202 & 0x3F)) ^ 0xF05;
              }
              *(_DWORD *)(v18 + 2524) &= ~0x200000u;
              if ( v202 != *(_QWORD *)(v18 + 2688) )
              {
                v214 = *(_DWORD *)(v18 + 2052);
                v215 = *(_QWORD *)(v18 + 1416);
                *(_QWORD *)v215 = v18;
                *(_DWORD *)(v215 + 16) = v214;
                if ( !*(_DWORD *)(v18 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v202 ^ *(_QWORD *)(v18 + 2688);
                sub_140C7F03C(v18, 0LL, v202, 256LL);
              }
            }
          }
          v216 = *(void (**)(void))(v18 + 496);
LABEL_380:
          v216();
          goto LABEL_237;
        case 10:
          v120 = (unsigned int *)&v38[16 * *(unsigned int *)(v18 + 2116) + 48];
          v121 = (unsigned __int64)&v38[16 * *((unsigned int *)v38 + 7) + 48];
          v1993 = v121;
          while ( 1 )
          {
            if ( (*v120 & 0x80000000) == 0 )
            {
              v122 = *((_QWORD *)v120 + 1);
              v123 = v120[1];
              v124 = (_QWORD *)v122;
              *(_DWORD *)(v18 + 2120) += v123;
              v125 = (const char *)v122;
              v126 = *(unsigned int *)(v18 + 2100);
              v127 = *(_QWORD *)(v18 + 2104);
              v1997 = v122;
              if ( v122 < v123 + v122 )
              {
                do
                {
                  _mm_prefetch(v125, 0);
                  v125 += 64;
                }
                while ( (unsigned __int64)v125 < v123 + v122 );
              }
              v128 = v127;
              v129 = (unsigned int)v123 >> 7;
              if ( (unsigned int)v123 >> 7 )
              {
                do
                {
                  v130 = 8LL;
                  do
                  {
                    v131 = v124[1] ^ __ROL8__(*v124 ^ v128, v126);
                    v124 += 2;
                    v128 = __ROL8__(v131, v126);
                    --v130;
                  }
                  while ( v130 );
                  v132 = (__ROL8__(v127 ^ ((unsigned __int64)v124 - v122), 17) ^ v127 ^ ((unsigned __int64)v124 - v122))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2132 = *((_QWORD *)&v132 + 1);
                  v126 = ((unsigned __int8)(v132 ^ BYTE8(v132)) ^ (unsigned __int8)v126) & 0x3F;
                  if ( !(_DWORD)v126 )
                    v126 = 1LL;
                  --v129;
                }
                while ( v129 );
                v18 = (__int64)v2001;
                v121 = v1993;
              }
              v133 = v123 & 0x7F;
              if ( v133 >= 8 )
              {
                v134 = (unsigned __int64)(v123 & 0x7F) >> 3;
                do
                {
                  v128 = __ROL8__(*v124++ ^ v128, v126);
                  v133 -= 8;
                  --v134;
                }
                while ( v134 );
              }
              for ( ; v133; --v133 )
              {
                v135 = *(unsigned __int8 *)v124;
                v124 = (_QWORD *)((char *)v124 + 1);
                v128 = __ROL8__(v135 ^ v128, v126);
              }
              for ( i22 = v128; ; LODWORD(v128) = i22 ^ v128 )
              {
                i22 >>= 31;
                if ( !i22 )
                  break;
              }
              v137 = v128 & 0x7FFFFFFF;
              if ( v137 != (*v120 & 0x7FFFFFFF) )
              {
                v138 = v123;
                if ( (_DWORD)v123 && (*(_DWORD *)(v18 + 2524) & 0x40) != 0 )
                {
                  v139 = KeGetCurrentIrql();
                  v140 = v122 & 0xFFFFFFFFFFFFF000uLL;
                  v1996 = (unsigned int *)((v138 + v122 - 1) | 0xFFF);
                  v141 = (v122 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    __writecr8(2uLL);
                    while ( 1 )
                    {
                      v142 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v18 + 1128))(
                               v140,
                               0LL,
                               v124,
                               v126);
                      if ( v142 == -1073741267 )
                        break;
                      if ( v142 < 0 )
                      {
                        __writecr8(v139);
                        v122 = v1997;
                        v121 = v1993;
                        goto LABEL_267;
                      }
LABEL_273:
                      v140 += 4096LL;
                      v141 += 4096LL;
                      if ( (unsigned int *)v141 == v1996 )
                      {
                        __writecr8(v139);
                        v121 = v1993;
                        goto LABEL_275;
                      }
                    }
                    if ( v139 > 1u )
                      goto LABEL_273;
                    __writecr8(v139);
                  }
                }
LABEL_267:
                v143 = *v120;
                LODWORD(v143) = v143 & 0x7FFFFFFF;
                if ( !*(_DWORD *)(v18 + 2328) )
                {
                  *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v143 ^ v137;
                  if ( !*(_DWORD *)(v18 + 2328) )
                  {
                    v144 = (int *)v1992;
                    *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v18 + 2344) = (char *)v144 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v18 + 2352) = *v144;
                    *(_QWORD *)(v18 + 2360) = v122;
                    *(_DWORD *)(v18 + 2328) = 1;
                    v145 = *(_DWORD *)(v18 + 2520);
                    if ( (v145 & 0x20000000) != 0 || (*(_DWORD *)(v18 + 2524) & 0x200000) == 0 || (v145 & 1) == 0 )
                      goto LABEL_276;
                    v146 = *(unsigned int *)(v18 + 2676);
                    v147 = *(_QWORD *)(v18 + 2104);
                    v148 = *(_QWORD *)(v18 + 2680);
                    v149 = (_QWORD *)(v146 + v18);
                    v150 = v146 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v146) >> 3);
                    while ( v149 != (_QWORD *)v150 )
                    {
                      *v149 ^= v148;
                      v148 = ((v147 ^ *v149++) + __ROR8__(v148, v148 & 0x3F)) ^ 0xF05;
                    }
                    *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                    if ( v148 != *(_QWORD *)(v18 + 2688) )
                    {
                      v153 = *(_DWORD *)(v18 + 2052);
                      v154 = *(_QWORD *)(v18 + 1416);
                      *(_QWORD *)v154 = v18;
                      *(_DWORD *)(v154 + 16) = v153;
                      if ( !*(_DWORD *)(v18 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v148 ^ *(_QWORD *)(v18 + 2688);
                      sub_140C7F03C(v18, 0LL, v148, 256LL);
                    }
                  }
                }
              }
            }
LABEL_275:
            v144 = (int *)v1992;
LABEL_276:
            v120 += 4;
            v151 = v120 == (unsigned int *)v121;
            if ( (unsigned __int64)v120 >= v121 )
              goto LABEL_279;
            if ( *(_DWORD *)(v18 + 2120) >= *(_DWORD *)(v18 + 2124) )
            {
              v151 = v120 == (unsigned int *)v121;
LABEL_279:
              if ( v151 )
                LODWORD(v152) = 0;
              else
                v152 = ((char *)v120 - (char *)(v144 + 12)) >> 4;
              n = 0;
              *(_DWORD *)(v18 + 2116) = v152;
              v30 = 4LL;
              goto LABEL_289;
            }
          }
      }
      if ( v63 != 13 )
        goto LABEL_2264;
      v64 = (_QWORD *)*((_QWORD *)v38 + 1);
      v65 = *((unsigned int *)v38 + 4);
      v66 = v64;
      *(_DWORD *)(v18 + 2120) += v65;
      v67 = (const char *)v64;
      v68 = *(_DWORD *)(v18 + 2100);
      v69 = *(_QWORD *)(v18 + 2104);
      if ( v64 < (_QWORD *)((char *)v64 + v65) )
      {
        do
        {
          _mm_prefetch(v67, 0);
          v67 += 64;
        }
        while ( v67 < (const char *)v64 + v65 );
      }
      v70 = *(_QWORD *)(v18 + 2104);
      v71 = (unsigned int)v65 >> 7;
      if ( (unsigned int)v65 >> 7 )
      {
        do
        {
          v72 = 8LL;
          do
          {
            v73 = v66[1] ^ __ROL8__(*v66 ^ v70, v68);
            v66 += 2;
            v70 = __ROL8__(v73, v68);
            --v72;
          }
          while ( v72 );
          v74 = (__ROL8__(v69 ^ ((char *)v66 - (char *)v64), 17) ^ v69 ^ (unsigned __int64)((char *)v66 - (char *)v64))
              * (unsigned __int128)0x7010008004002001uLL;
          v2133 = *((_QWORD *)&v74 + 1);
          v68 = ((unsigned __int8)(v74 ^ BYTE8(v74)) ^ (unsigned __int8)v68) & 0x3F;
          if ( !v68 )
            LOBYTE(v68) = 1;
          --v71;
        }
        while ( v71 );
        v18 = (__int64)v2001;
      }
      v75 = v65 & 0x7F;
      if ( v75 >= 8 )
      {
        v76 = (unsigned __int64)v75 >> 3;
        do
        {
          v70 = __ROL8__(*v66++ ^ v70, v68);
          v75 -= 8;
          --v76;
        }
        while ( v76 );
      }
      for ( ; v75; --v75 )
      {
        v77 = *(unsigned __int8 *)v66;
        v66 = (_QWORD *)((char *)v66 + 1);
        v70 = __ROL8__(v77 ^ v70, v68);
      }
      for ( i23 = v70; ; LODWORD(v70) = i23 ^ v70 )
      {
        i23 >>= 31;
        if ( !i23 )
          break;
      }
      v79 = v70 & 0x7FFFFFFF;
      if ( v79 != *((_DWORD *)v38 + 5) )
      {
        _InterlockedOr(v1989, 0);
        if ( (*((_DWORD *)v38 + 6) & 1) == 0 || !**(_BYTE **)(v18 + 1400) )
        {
          v80 = *((unsigned int *)v38 + 4);
          v81 = *((_QWORD *)v38 + 1);
          if ( *((_DWORD *)v38 + 4) && (v82 = 64LL, (*(_DWORD *)(v18 + 2524) & 0x40) != 0) )
          {
            v83 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v84 = v81 & 0xFFFFFFFFFFFFF000uLL;
            v1996 = (unsigned int *)((v81 + v80 - 1) | 0xFFF);
            v1993 = (v81 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v85 = v83;
              while ( 1 )
              {
                v86 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v18 + 1128))(
                        v84,
                        0LL,
                        v82,
                        v66);
                if ( v86 != -1073741267 )
                  break;
                if ( v83 > 1u )
                  goto LABEL_187;
                v85 = v83;
                __writecr8(v83);
                __writecr8(2uLL);
              }
              v85 = v83;
              if ( v86 < 0 )
              {
                __writecr8(v83);
                v38 = v1992;
                n = 0;
                goto LABEL_190;
              }
LABEL_187:
              v84 += 4096LL;
              v1993 += 4096LL;
              if ( (unsigned int *)v1993 != v1996 )
                continue;
              break;
            }
            __writecr8(v85);
            v38 = v1992;
            n = 0;
          }
          else
          {
LABEL_190:
            if ( !*(_DWORD *)(v18 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = *((unsigned int *)v38 + 5) ^ (unsigned __int64)v79;
            v87 = *((_QWORD *)v38 + 1);
            if ( !*(_DWORD *)(v18 + 2328) )
            {
              *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v18 + 2352) = *(int *)v38;
              *(_QWORD *)(v18 + 2360) = v87;
              *(_DWORD *)(v18 + 2328) = 1;
              v88 = *(_DWORD *)(v18 + 2520);
              if ( (v88 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v88 & 1) != 0 )
              {
                v89 = *(unsigned int *)(v18 + 2676);
                v90 = *(_QWORD *)(v18 + 2104);
                v91 = *(_QWORD *)(v18 + 2680);
                v92 = (_QWORD *)(v89 + v18);
                v93 = v89 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v89) >> 3);
                while ( v92 != (_QWORD *)v93 )
                {
                  *v92 ^= v91;
                  v91 = ((v90 ^ *v92++) + __ROR8__(v91, v91 & 0x3F)) ^ 0xF05;
                }
                *(_DWORD *)(v18 + 2524) &= ~0x200000u;
                if ( v91 != *(_QWORD *)(v18 + 2688) )
                {
                  v94 = *(_DWORD *)(v18 + 2052);
                  v95 = *(_QWORD *)(v18 + 1416);
                  *(_QWORD *)v95 = v18;
                  *(_DWORD *)(v95 + 16) = v94;
                  if ( !*(_DWORD *)(v18 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v91 ^ *(_QWORD *)(v18 + 2688);
                  sub_140C7F03C(v18, 0LL, v91, 256LL);
                }
              }
            }
          }
        }
      }
      if ( (*(_DWORD *)(v18 + 2520) & 0x20000000) == 0 )
        goto LABEL_237;
      v96 = *((unsigned int *)v38 + 4);
      if ( !(_DWORD)v96 )
        goto LABEL_237;
      sub_140553D6C(v18, *((_QWORD *)v38 + 1), v96, v2137);
      v97 = 16;
      v98 = v38 + 28;
      v99 = v2137;
      while ( 1 )
      {
        v100 = *(_QWORD *)v99;
        v99 += 8;
        v101 = *(_QWORD *)v98;
        v98 += 8;
        if ( v100 != v101 )
          break;
        v97 -= 8;
        if ( v97 < 8 )
        {
          if ( !v97 )
            goto LABEL_236;
          while ( 1 )
          {
            v102 = *v99++;
            v103 = *v98++;
            if ( v102 != v103 )
              goto LABEL_212;
            if ( !--v97 )
              goto LABEL_236;
          }
        }
      }
LABEL_212:
      _InterlockedOr(v1989, 0);
      if ( (*((_DWORD *)v38 + 6) & 1) != 0 && **(_BYTE **)(v18 + 1400) )
        goto LABEL_236;
      v104 = *((_QWORD *)v38 + 1);
      if ( !*((_DWORD *)v38 + 4) )
        goto LABEL_225;
      v105 = 64LL;
      if ( (*(_DWORD *)(v18 + 2524) & 0x40) == 0 )
        goto LABEL_225;
      v106 = KeGetCurrentIrql();
      v107 = v104 & 0xFFFFFFFFFFFFF000uLL;
      v108 = (v104 + *((unsigned int *)v38 + 4) - 1LL) | 0xFFF;
      v109 = (v104 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_217:
      __writecr8(2uLL);
      while ( 1 )
      {
        v110 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, char *))(v18 + 1128))(v107, 0LL, v105, v99);
        if ( v110 == -1073741267 )
        {
          if ( v106 <= 1u )
          {
            __writecr8(v106);
            goto LABEL_217;
          }
          goto LABEL_222;
        }
        if ( v110 < 0 )
          break;
LABEL_222:
        v107 += 4096LL;
        v109 += 4096LL;
        if ( v109 == v108 )
        {
          __writecr8(v106);
          n = 0;
          goto LABEL_236;
        }
      }
      __writecr8(v106);
      n = 0;
LABEL_225:
      v111 = *((_QWORD *)v38 + 1);
      if ( !*(_DWORD *)(v18 + 2328) )
      {
        *(_QWORD *)(v18 + 2336) = v18 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v18 + 2344) = v38 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v18 + 2352) = *(int *)v38;
        *(_QWORD *)(v18 + 2360) = v111;
        *(_DWORD *)(v18 + 2328) = 1;
        v112 = *(_DWORD *)(v18 + 2520);
        if ( (v112 & 0x20000000) == 0 && (*(_DWORD *)(v18 + 2524) & 0x200000) != 0 && (v112 & 1) != 0 )
        {
          v113 = *(unsigned int *)(v18 + 2676);
          v114 = *(_QWORD *)(v18 + 2104);
          v115 = *(_QWORD *)(v18 + 2680);
          v116 = (_QWORD *)(v113 + v18);
          v117 = v113 + v18 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v18 + 2052) - v113) >> 3);
          while ( v116 != (_QWORD *)v117 )
          {
            *v116 ^= v115;
            v115 = ((v114 ^ *v116++) + __ROR8__(v115, v115 & 0x3F)) ^ 0xF05;
          }
          *(_DWORD *)(v18 + 2524) &= ~0x200000u;
          if ( v115 != *(_QWORD *)(v18 + 2688) )
          {
            v118 = *(_DWORD *)(v18 + 2052);
            v119 = *(_QWORD *)(v18 + 1416);
            *(_QWORD *)v119 = v18;
            *(_DWORD *)(v119 + 16) = v118;
            if ( !*(_DWORD *)(v18 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v18 + 1416) + 24LL) = v115 ^ *(_QWORD *)(v18 + 2688);
            sub_140C7F03C(v18, 0LL, v115, 256LL);
          }
        }
      }
LABEL_236:
      *(_DWORD *)(v18 + 2120) += 16 * *((_DWORD *)v38 + 4);
LABEL_237:
      v30 = 4LL;
LABEL_289:
      v155 = v2022;
      if ( *(_DWORD *)(v18 + 2116) )
        v155 = v2022 - 1;
      v33 = v155 + 1;
      if ( *(_DWORD *)(v18 + 2328) || *(_DWORD *)(v18 + 2120) >= *(_DWORD *)(v18 + 2124) )
        goto LABEL_2906;
    }
    v46 = 0;
    v47 = *(_DWORD *)v38;
    v48 = *(_DWORD *)(v2061 + 48);
    v49 = *(_QWORD *)(v2061 + 56);
    if ( *(int *)v38 > 21 )
    {
      v52 = v47 - 24;
      if ( v52 )
      {
        v53 = v52 - 4;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( v54 )
          {
            v55 = v54 - 1;
            if ( v55 )
            {
              v56 = v55 - 2;
              if ( v56 )
              {
                v57 = v56 - 3;
                if ( v57 )
                {
                  if ( v57 - 8 > 1 )
                    goto LABEL_289;
                }
              }
            }
            goto LABEL_136;
          }
        }
      }
LABEL_145:
      if ( v48 != 5 )
        goto LABEL_289;
      goto LABEL_146;
    }
    if ( v47 == 21 )
    {
      v46 = *((_DWORD *)v38 + 11);
      if ( v48 != 4 )
        goto LABEL_289;
    }
    else
    {
      if ( v47 < 2 )
      {
LABEL_136:
        if ( v48 )
          goto LABEL_289;
        goto LABEL_137;
      }
      if ( v47 == 2 || v47 == 3 )
      {
        if ( !v48 )
        {
LABEL_137:
          v58 = *((unsigned int *)v38 + 4);
          if ( !(_DWORD)v58 )
            goto LABEL_289;
          v59 = 0;
          v2052 = *(_QWORD *)v49;
          v60 = *(_DWORD *)(v49 + 8);
          v61 = *((_QWORD *)v38 + 1);
          v2043 = v60;
          while ( 1 )
          {
            v62 = *(&v2052 + v59);
            if ( v61 < v62 + (unsigned int)v2044[v59 - 1] && v61 + v58 > v62 )
              break;
            if ( ++v59 )
              goto LABEL_289;
          }
          v39 = 1LL;
          goto LABEL_146;
        }
      }
      else if ( v47 != 7 )
      {
        if ( v47 != 8 )
        {
          if ( v47 != 9 && v47 != 13 )
            goto LABEL_289;
          goto LABEL_136;
        }
        v39 = 1LL;
        goto LABEL_145;
      }
      if ( v47 == 7 )
      {
        v46 = *((_DWORD *)v38 + 7);
        v50 = v48 == 1;
      }
      else
      {
        if ( v47 - 2 > 1 )
          goto LABEL_127;
        v46 = *((_DWORD *)v38 + 10);
        if ( v47 == 3 && v48 != 2 )
          goto LABEL_289;
        if ( v47 != 2 )
          goto LABEL_127;
        v50 = v48 == 3;
      }
      if ( !v50 )
        goto LABEL_289;
    }
LABEL_127:
    v51 = KeCheckProcessorGroupAffinity(*(_QWORD *)(v2061 + 56), v46);
    v39 = 1LL;
    if ( !v51 )
      goto LABEL_289;
LABEL_146:
    ++*(_QWORD *)(v2062 + 8);
    goto LABEL_147;
  }
LABEL_2907:
  *(_DWORD *)(v18 + 2112) = v33;
  if ( v2016 )
  {
    v1922 = *(_QWORD *)(*(_QWORD *)(v18 + 1720)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v18 + 1624))
                      + *(_QWORD *)(v18 + 1688));
    (*(void (__fastcall **)(_BYTE *))(v18 + 424))(v2150);
    (*(void (__fastcall **)(_BYTE *))(v18 + 1096))(v2168);
    (*(void (__fastcall **)(__int64))(v18 + 944))(v1922);
    (*(void (__fastcall **)(__int64))(v18 + 960))(v1922);
    v31 = 0LL;
  }
  if ( *((_DWORD *)v16 + 582) )
  {
    v1923 = *((_QWORD *)v16 + 294);
    v1924 = *((_QWORD *)v16 + 295);
    v1925 = *((_QWORD *)v16 + 293);
    v1926 = *((_QWORD *)v16 + 292);
    v2032 = v1923;
    v2013 = v1924;
    v2040 = v1925;
    v2010 = v1926;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1927 = KeGetCurrentPrcb();
    v1928 = *(_QWORD *)((char *)&v1927->MxCsr + *((_QWORD *)v16 + 200));
    v1929 = *((_QWORD *)v16 + 201);
    v1993 = v1928;
    v1930 = *((_QWORD *)v16 + 241) + *(_QWORD *)((char *)&v1927->MxCsr + v1929);
    v1931 = *(unsigned int **)((char *)&v1927->MxCsr + *((_QWORD *)v16 + 203));
    v1996 = v1931;
    if ( (unsigned __int64)&v2039 > v1928 || (unsigned __int64)&v2039 < v1928 - *((unsigned int *)v16 + 383) )
    {
      if ( *((_BYTE *)&v1927->MxCsr + *((_QWORD *)v16 + 202))
        && (unsigned __int64)&v2039 <= v1930
        && (unsigned __int64)&v2039 >= v1930 - *((unsigned int *)v16 + 382) )
      {
        v1928 = v1930;
        v1993 = v1930;
      }
      else
      {
        v1928 = *(_QWORD *)((char *)v1931 + *((_QWORD *)v16 + 209));
        v1993 = v1928;
      }
    }
    if ( (*((_DWORD *)v16 + 630) & 0x4000000) == 0 )
    {
      v50 = (*((_DWORD *)v16 + 631) & 0x400000) == 0;
      v1997 = 0LL;
      if ( v50 )
      {
        v1932 = __readcr0();
        v1997 = v1932;
        __writecr0(v1932 & 0xFFFFFFFFFFFEFFFFuLL);
      }
      v1933 = (unsigned __int64)(v16 + 2800);
      v1930 = 0LL;
      v1934 = (unsigned __int64)&v16[16 * *((unsigned int *)v16 + 698) + 2800];
      v1935 = (_QWORD *)v1934;
      v2052 = v1934;
      if ( *((_DWORD *)v16 + 699) )
      {
        do
        {
          *(_QWORD *)*v1935 = v1935[1];
          v1936 = __readcr4();
          if ( (v1936 & 0x20080) != 0 )
          {
            __writecr4(v1936 ^ 0x80);
            __writecr4(v1936);
          }
          else
          {
            v1937 = __readcr3();
            __writecr3(v1937);
          }
          v1935 += 2;
          v1930 = (unsigned int)(v1930 + 1);
        }
        while ( (unsigned int)v1930 < *((_DWORD *)v16 + 699) );
        v1923 = v2032;
      }
      if ( v1933 < v1934 )
      {
        v1938 = Entry;
        do
        {
          v50 = (*((_DWORD *)v16 + 631) & 0x400000) == 0;
          v1939 = *(unsigned int *)(v1933 + 8);
          v1940 = *(_QWORD *)v1933;
          v2022 = *(_DWORD *)(v1933 + 8);
          if ( v50 )
          {
            v1930 = (unsigned int)v1939;
            v1941 = v1935;
            if ( (unsigned int)v1939 >= 8 )
            {
              v31 = (unsigned __int64)(unsigned int)v1939 >> 3;
              do
              {
                v1930 = (unsigned int)(v1930 - 8);
                *(_QWORD *)v1940 = *v1941++;
                v1940 += 8LL;
                --v31;
              }
              while ( v31 );
            }
            if ( (_DWORD)v1930 )
            {
              v1942 = v1940 - (_QWORD)v1941;
              do
              {
                *((_BYTE *)v1941 + v1942) = *(_BYTE *)v1941;
                v1941 = (_QWORD *)((char *)v1941 + 1);
                v1930 = (unsigned int)(v1930 - 1);
              }
              while ( (_DWORD)v1930 );
              v1938 = Entry;
            }
          }
          else
          {
            v2184 = v1939;
            v2020 = (unsigned __int64)v1935;
            v1943 = v1939;
            v1930 = ((v1940 & 0xFFF) + v1939 + 4095) >> 12;
            if ( (_DWORD)v1930 )
            {
              v2033 = (unsigned int)v1930;
              do
              {
                v1944 = v1938[191];
                v1945 = v2160;
                v1946 = 4LL;
                LODWORD(v1947) = 4;
                v1948 = v1944 + ((v1940 >> 9) & 0x7FFFFFFFF8LL);
                do
                {
                  *v1945++ = v1948;
                  v1948 = v1944 + ((v1948 >> 9) & 0x7FFFFFFFF8LL);
                  --v1946;
                }
                while ( v1946 );
                do
                {
                  v50 = (_DWORD)v1947 == 1;
                  v1947 = (unsigned int)(v1947 - 1);
                }
                while ( !v50 && (*(_DWORD *)v2160[v1947] & 0x80) == 0 );
                v2002 = (unsigned int *)v2160[v1947];
                v1949 = *(_QWORD *)v2002 | 0x62LL;
                *(_QWORD *)v2002 = v1949;
                v1950 = __readcr4();
                if ( (v1950 & 0x20080) != 0 )
                {
                  __writecr4(v1950 ^ 0x80);
                  __writecr4(v1950);
                }
                else
                {
                  v1951 = __readcr3();
                  __writecr3(v1951);
                }
                v1952 = v1943;
                v1953 = (_QWORD *)v1940;
                if ( 4096 - (v1940 & 0xFFF) < v1943 )
                  v1952 = 4096 - (v1940 & 0xFFF);
                v1930 = v2020;
                v1954 = v1952;
                if ( v1952 >= 8 )
                {
                  v1955 = (unsigned __int64)v1952 >> 3;
                  do
                  {
                    v1954 -= 8;
                    *v1953 = *(_QWORD *)v1930;
                    v1930 += 8LL;
                    ++v1953;
                    --v1955;
                  }
                  while ( v1955 );
                  v1943 = v2184;
                }
                if ( v1954 )
                {
                  v1956 = (char *)v1953 - v1930;
                  do
                  {
                    v1956[v1930] = *(_BYTE *)v1930;
                    ++v1930;
                    --v1954;
                  }
                  while ( v1954 );
                  v1938 = Entry;
                }
                v2020 += v1952;
                v1940 += v1952;
                v1943 -= v1952;
                v2184 = v1943;
                *(_QWORD *)v2002 = v1949;
                v1957 = __readcr4();
                if ( (v1957 & 0x20080) != 0 )
                {
                  __writecr4(v1957 ^ 0x80);
                  __writecr4(v1957);
                }
                else
                {
                  v1958 = __readcr3();
                  __writecr3(v1958);
                }
                --v2033;
              }
              while ( v2033 );
              v1934 = v2052;
              v31 = 0LL;
              LODWORD(v1939) = v2022;
              v16 = v2031;
            }
            else
            {
              v16 = v2031;
            }
          }
          v1933 += 16LL;
          v1935 = (_QWORD *)((char *)v1935 + (unsigned int)v1939);
        }
        while ( v1933 < v1934 );
        v1928 = v1993;
        v1923 = v2032;
        LODWORD(v1925) = v2040;
        LODWORD(v1926) = v2010;
      }
      if ( (*((_DWORD *)v16 + 631) & 0x400000) != 0 )
      {
        v2009 = -61;
        v1959 = &v2009;
        v1960 = *((_QWORD *)v16 + 69);
        v1961 = 4LL;
        v1962 = *((_QWORD *)v16 + 187);
        LODWORD(v1963) = 4;
        v1964 = v1962 + ((v1960 >> 9) & 0x7FFFFFFFF8LL);
        v1965 = v2161;
        do
        {
          *v1965++ = v1964;
          v1964 = v1962 + ((v1964 >> 9) & 0x7FFFFFFFF8LL);
          --v1961;
        }
        while ( v1961 );
        do
        {
          v50 = (_DWORD)v1963 == 1;
          v1963 = (unsigned int)(v1963 - 1);
        }
        while ( !v50 && (*(_DWORD *)v2161[v1963] & 0x80) == 0 );
        v1966 = (__int64 *)v2161[v1963];
        v1967 = *v1966 | 0x62;
        *v1966 = v1967;
        v1968 = __readcr4();
        if ( (v1968 & 0x20080) != 0 )
        {
          __writecr4(v1968 ^ 0x80);
          __writecr4(v1968);
        }
        else
        {
          v1969 = __readcr3();
          __writecr3(v1969);
        }
        v1930 = 1LL;
        if ( (v1960 & 0xFFF) == 0x1000 )
          v1930 = 4096 - (unsigned int)(v1960 & 0xFFF);
        if ( (unsigned int)v1930 >= 8 )
        {
          v1970 = (unsigned __int64)(unsigned int)v1930 >> 3;
          do
          {
            v1930 = (unsigned int)(v1930 - 8);
            *(_QWORD *)v1960 = *(_QWORD *)v1959;
            v1959 += 8;
            v1960 += 8LL;
            --v1970;
          }
          while ( v1970 );
        }
        v31 = 0LL;
        if ( (_DWORD)v1930 )
        {
          v1971 = v1960 - (_QWORD)v1959;
          do
          {
            v1959[v1971] = *v1959;
            ++v1959;
            v1930 = (unsigned int)(v1930 - 1);
          }
          while ( (_DWORD)v1930 );
          LODWORD(v1926) = v2010;
        }
        *v1966 = v1967;
        v1979 = __readcr4();
        if ( (v1979 & 0x20080) != 0 )
        {
          __writecr4(v1979 ^ 0x80);
          __writecr4(v1979);
        }
        else
        {
          v1980 = __readcr3();
          __writecr3(v1980);
        }
      }
      else
      {
        **((_BYTE **)v16 + 69) = -61;
        __writecr0(v1997);
      }
      v1931 = v1996;
      LODWORD(v1924) = v2013;
    }
    if ( *((_DWORD *)v16 + 594) != (_DWORD)v31 && KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1981 = *((_DWORD *)v16 + 594);
    if ( v1981 )
    {
      v1982 = v1981 - 1;
      if ( v1982 )
      {
        v1983 = v1982 - 1;
        if ( v1983 )
        {
          v1984 = v1983 - 1;
          if ( v1984 )
          {
            v1985 = v1984 - 1;
            if ( v1985 )
            {
              if ( v1985 == 1 )
              {
                v1930 = (*((_DWORD *)v16 + 630) >> 9) & 0x1F;
                _interlockedbittestandset(
                  *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v16 + 203)),
                  v1930);
              }
              else
              {
                _InterlockedOr64((volatile signed __int64 *)(*((_QWORD *)v16 + 182) + 832LL), 1uLL);
              }
            }
            else
            {
              v1930 = *(_QWORD *)(*((_QWORD *)v16 + 215)
                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v16 + 203))
                                + *((_QWORD *)v16 + 211));
              _interlockedbittestandset((volatile signed __int32 *)v1930, (*((_DWORD *)v16 + 630) >> 9) & 0x1F);
            }
            goto LABEL_3026;
          }
          v1986 = (volatile signed __int32 *)*((_QWORD *)v16 + 171);
        }
        else
        {
          v1986 = (volatile signed __int32 *)*((_QWORD *)v16 + 170);
        }
      }
      else
      {
        v1986 = (volatile signed __int32 *)*((_QWORD *)v16 + 168);
      }
      _interlockedbittestandset64(v1986, 0LL);
    }
LABEL_3026:
    *(_QWORD *)((char *)v1931 + *((_QWORD *)v16 + 212)) = v31;
    *(_QWORD *)((char *)v1931 + *((_QWORD *)v16 + 214)) = v31;
    KeGuardCheckICall(*((_QWORD *)v16 + 45), v1930);
    SdbpCheckDll(265, v1926, v1925, v1924, v1923, *((_QWORD *)v16 + 45), v1928 - 8);
    __debugbreak();
  }
  if ( *((_DWORD *)v16 + 529) || *((_DWORD *)v16 + 528) )
  {
    v1972 = -1073741802;
    *(_DWORD *)v2 = *((_DWORD *)v16 + 528);
    *(_DWORD *)(v2 + 4) = *((_DWORD *)v16 + 529);
  }
  else
  {
    v1972 = *(_QWORD *)(v2 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( v2040 == 2872 )
    ExFreeToNPagedLookasideList(&stru_140E0F440, Entry);
  else
    ExFreePool(Entry);
  return v1972;
}
