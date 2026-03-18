/*
 * XREFs of sub_140507C90 @ 0x140507C90
 * Callers:
 *     <none>
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeAreAllApcsDisabled @ 0x140256FE0 (KeAreAllApcsDisabled.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     KeCheckProcessorGroupAffinity @ 0x140457A40 (KeCheckProcessorGroupAffinity.c)
 *     KeAreApcsDisabled @ 0x14045AC60 (KeAreApcsDisabled.c)
 *     KeVerifyGroupAffinity @ 0x140471198 (KeVerifyGroupAffinity.c)
 *     KiGetNtDdiVersion @ 0x140484F30 (KiGetNtDdiVersion.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     sub_140516AFC @ 0x140516AFC (sub_140516AFC.c)
 *     sub_140516BE4 @ 0x140516BE4 (sub_140516BE4.c)
 *     sub_140517CE8 @ 0x140517CE8 (sub_140517CE8.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     sub_140BC50B0 @ 0x140BC50B0 (sub_140BC50B0.c)
 *     sub_140BC6AF8 @ 0x140BC6AF8 (sub_140BC6AF8.c)
 *     sub_140BC7384 @ 0x140BC7384 (sub_140BC7384.c)
 *     sub_140BC7680 @ 0x140BC7680 (sub_140BC7680.c)
 *     sub_140BC7D30 @ 0x140BC7D30 (sub_140BC7D30.c)
 *     KiGetGdtIdt @ 0x140BC9690 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140BC96A0 (KiGetLdtr.c)
 *     KiGetSs @ 0x140BC96B0 (KiGetSs.c)
 *     KiGetTr @ 0x140BC96C0 (KiGetTr.c)
 *     KiErrata361Present @ 0x140BC96D0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140BC96F0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140BC9700 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140BC97B0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140BC9A60 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140BC9A70 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140BC9BD4 (RtlInitMinimalBarrier.c)
 *     sub_140BCE96C @ 0x140BCE96C (sub_140BCE96C.c)
 */

__int64 __fastcall sub_140507C90(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rsi
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rax
  char *Pool2; // rax
  _QWORD *v15; // r13
  char *v16; // r15
  unsigned __int64 v17; // r10
  unsigned int v18; // eax
  unsigned __int64 v19; // rdi
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int128 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  int v32; // ecx
  unsigned int *v33; // rax
  int v34; // r14d
  unsigned int v35; // ecx
  int i9; // r12d
  int v37; // r15d
  int v38; // eax
  unsigned __int64 v39; // r8
  unsigned int v40; // r9d
  char *v41; // r13
  __int64 v42; // r10
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int128 v45; // rax
  unsigned __int64 v46; // rbx
  int v47; // eax
  unsigned int v48; // r9d
  unsigned int v49; // ecx
  int v50; // r8d
  __int64 *v51; // r10
  bool v52; // zf
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  __int64 v59; // rcx
  unsigned __int64 v60; // r11
  unsigned __int64 v61; // r10
  unsigned int *v62; // rcx
  int v63; // r10d
  _QWORD *v64; // rsi
  __int64 v65; // r8
  _QWORD *v66; // r9
  const char *v67; // rax
  int v68; // r10d
  __int64 v69; // r14
  unsigned __int64 v70; // rbx
  unsigned int v71; // r11d
  __int64 v72; // rax
  __int64 v73; // rbx
  unsigned __int128 v74; // rax
  char v75; // r10
  unsigned int v76; // r8d
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int64 mm; // rax
  unsigned int v80; // ebx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned __int8 v83; // r15
  unsigned __int64 v84; // rsi
  __int64 v85; // r13
  unsigned __int64 v86; // r12
  unsigned __int64 v87; // r14
  int v88; // eax
  __int64 v89; // rcx
  int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // r10
  __int64 v93; // r8
  unsigned __int64 v94; // r9
  int v95; // ecx
  __int64 v96; // rax
  __int64 v97; // r8
  char *v98; // r8
  char *v99; // r9
  __int64 v100; // rcx
  __int64 v101; // rax
  char v102; // cl
  char v103; // al
  __int64 v104; // r8
  unsigned __int8 v105; // si
  unsigned __int64 v106; // rbx
  __int64 v107; // r15
  unsigned __int64 v108; // r14
  int v109; // eax
  __int64 v110; // rcx
  int v111; // ecx
  __int64 v112; // rcx
  __int64 v113; // r10
  __int64 v114; // r8
  unsigned __int64 v115; // r9
  int v116; // ecx
  __int64 v117; // rax
  unsigned int v118; // ecx
  unsigned int *v119; // r14
  unsigned __int64 v120; // r15
  unsigned __int64 v121; // r12
  __int64 v122; // rsi
  _QWORD *v123; // r8
  const char *v124; // rax
  __int64 v125; // r9
  unsigned __int64 v126; // r11
  unsigned __int64 v127; // rbx
  unsigned int v128; // r10d
  __int64 v129; // rax
  __int64 v130; // rbx
  unsigned __int128 v131; // rax
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  unsigned __int64 nn; // rax
  unsigned int v135; // ebx
  __int64 v136; // rcx
  unsigned __int8 v137; // r15
  unsigned __int64 v138; // rsi
  __int64 v139; // r13
  unsigned __int64 v140; // r12
  int v141; // eax
  bool v142; // zf
  __int64 v143; // r14
  __int64 v144; // rax
  int v145; // ecx
  __int64 v146; // rcx
  __int64 v147; // r10
  __int64 v148; // r8
  unsigned __int64 v149; // r9
  int v150; // ecx
  __int64 v151; // rax
  __int64 v152; // rbx
  int v153; // ecx
  __int64 v154; // rcx
  __int64 v155; // r10
  __int64 v156; // r8
  _QWORD *v157; // rdx
  unsigned __int64 v158; // r9
  int v159; // ecx
  __int64 v160; // rax
  int v161; // ecx
  __int64 v162; // rcx
  __int64 v163; // r10
  __int64 v164; // r8
  _QWORD *v165; // rdx
  unsigned __int64 v166; // r9
  int v167; // ecx
  __int64 v168; // rax
  _QWORD *v169; // rsi
  __int64 v170; // r8
  _QWORD *v171; // r9
  const char *v172; // rax
  int v173; // r10d
  __int64 v174; // r14
  unsigned __int64 v175; // rbx
  unsigned int v176; // r11d
  __int64 v177; // rax
  __int64 v178; // rbx
  unsigned __int128 v179; // rax
  unsigned int v180; // r8d
  unsigned __int64 v181; // rax
  __int64 v182; // rax
  unsigned __int64 i1; // rax
  unsigned int v184; // ebx
  BOOL v185; // r15d
  __int64 v186; // rdx
  __int64 v187; // r8
  unsigned __int8 v188; // r14
  unsigned __int64 v189; // rsi
  __int64 v190; // r13
  unsigned __int64 v191; // r12
  int v192; // eax
  __int16 v193; // ax
  __int64 v194; // rcx
  int (__fastcall *v195)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD); // rax
  __int64 v196; // rcx
  int v197; // ecx
  __int64 v198; // rcx
  __int64 v199; // r10
  __int64 v200; // r8
  _QWORD *v201; // rdx
  unsigned __int64 v202; // r9
  __int64 v203; // rcx
  int v204; // ecx
  __int64 v205; // rcx
  __int64 v206; // r10
  __int64 v207; // r8
  _QWORD *v208; // rdx
  unsigned __int64 v209; // r9
  int v210; // ecx
  __int64 v211; // rax
  int v212; // ecx
  __int64 v213; // rax
  void (*v214)(void); // rax
  unsigned int kk; // ebx
  __int64 v216; // rcx
  unsigned __int64 v217; // rdx
  __int64 v218; // r8
  __int64 v219; // r9
  unsigned __int64 v220; // rdx
  unsigned __int64 v221; // r8
  int v222; // ecx
  __int64 v223; // rcx
  __int64 v224; // r10
  __int64 v225; // r8
  _QWORD *v226; // rdx
  unsigned __int64 v227; // r9
  int v228; // ecx
  __int64 v229; // rax
  int v230; // eax
  int v231; // ecx
  __int64 v232; // rcx
  unsigned __int64 v233; // rax
  unsigned __int128 v234; // rax
  void (__fastcall *v235)(_QWORD, _QWORD); // rax
  unsigned int v236; // r14d
  __int64 v237; // rbx
  unsigned int v238; // ecx
  unsigned __int8 v239; // si
  volatile signed __int8 **v240; // r8
  volatile signed __int8 *v241; // rdx
  unsigned __int64 v242; // r14
  __int64 v243; // r12
  unsigned __int64 v244; // r13
  __int64 v245; // r15
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
  void (__fastcall *v275)(_QWORD, _QWORD); // rax
  unsigned int v276; // r13d
  __int64 v277; // rbx
  unsigned int v278; // ecx
  void (__fastcall *v279)(_QWORD, _QWORD); // rax
  _QWORD **v280; // r14
  _QWORD *v281; // rsi
  unsigned __int64 v282; // rbx
  int *v283; // rcx
  int v284; // ecx
  __int64 v285; // rcx
  __int64 v286; // r10
  __int64 v287; // r8
  _QWORD *v288; // rdx
  unsigned __int64 v289; // r9
  int v290; // ecx
  __int64 v291; // rax
  __int64 v292; // rcx
  _QWORD **v293; // r12
  _QWORD *v294; // rsi
  char v295; // r14
  int v296; // r13d
  int *v297; // r15
  unsigned __int8 v298; // r14
  char *v299; // rbx
  int v300; // ecx
  __int64 v301; // rcx
  __int64 v302; // r10
  __int64 v303; // r8
  _QWORD *v304; // rdx
  unsigned __int64 v305; // r9
  int v306; // ecx
  __int64 v307; // rax
  _QWORD *v308; // rsi
  __int64 v309; // r8
  _QWORD *v310; // r9
  const char *v311; // rax
  int v312; // r11d
  __int64 v313; // r14
  unsigned __int64 v314; // rbx
  unsigned int v315; // r10d
  __int64 v316; // rax
  __int64 v317; // rbx
  unsigned __int128 v318; // rax
  char v319; // r11
  unsigned int v320; // r8d
  unsigned __int64 v321; // rax
  __int64 v322; // rax
  unsigned __int64 jj; // rax
  unsigned int v324; // ebx
  BOOL v325; // r15d
  __int64 v326; // r8
  unsigned __int8 v327; // r14
  unsigned __int64 v328; // rsi
  __int64 v329; // r13
  unsigned __int64 v330; // r12
  int v331; // eax
  __int64 v332; // rcx
  int v333; // ecx
  __int64 v334; // rcx
  __int64 v335; // r10
  __int64 v336; // r8
  unsigned __int64 v337; // r9
  int v338; // ecx
  __int64 v339; // rax
  __int64 v340; // r14
  __int64 v341; // rsi
  unsigned __int64 v342; // rax
  __int64 v343; // rcx
  unsigned __int64 v344; // rbx
  int v345; // ecx
  __int64 v346; // rcx
  __int64 v347; // r10
  __int64 v348; // r8
  _QWORD *v349; // rdx
  unsigned __int64 v350; // r9
  int v351; // ecx
  __int64 v352; // rax
  unsigned __int64 v353; // rcx
  int v354; // ecx
  __int64 v355; // rcx
  __int64 v356; // r10
  __int64 v357; // r8
  _QWORD *v358; // rdx
  unsigned __int64 v359; // r9
  int v360; // ecx
  __int64 v361; // rax
  _QWORD *v362; // rsi
  __int64 v363; // r8
  _QWORD *v364; // r9
  const char *v365; // rax
  int v366; // r10d
  __int64 v367; // r14
  unsigned __int64 v368; // rbx
  unsigned int v369; // r11d
  __int64 v370; // rax
  __int64 v371; // rbx
  unsigned __int128 v372; // rax
  char v373; // r10
  __int64 v374; // r8
  unsigned __int64 v375; // rax
  __int64 v376; // rax
  unsigned __int64 i3; // rax
  unsigned int v378; // ebx
  BOOL v379; // r15d
  unsigned __int8 v380; // r14
  unsigned __int64 v381; // rsi
  __int64 v382; // r13
  unsigned __int64 v383; // r12
  int v384; // eax
  __int64 **v385; // r15
  unsigned int v386; // eax
  __int64 v387; // r12
  char *v388; // rbx
  __int64 v389; // r14
  __int64 v390; // rsi
  _QWORD *v391; // rcx
  int v392; // edx
  __int64 v393; // r8
  char v394; // al
  __int64 v395; // rax
  __int64 v396; // rax
  int v397; // ecx
  __int64 v398; // rcx
  __int64 v399; // r10
  __int64 v400; // r8
  _QWORD *v401; // rdx
  unsigned __int64 v402; // r9
  __int64 v403; // rcx
  int v404; // ecx
  __int64 v405; // rcx
  __int64 v406; // r10
  int v407; // ecx
  __int64 v408; // rax
  int v409; // ecx
  __int64 v410; // rax
  __int16 v411; // ax
  __int64 v412; // rcx
  int (__fastcall *v413)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD); // rax
  __int64 (*v414)(void); // rax
  unsigned __int64 v415; // r15
  __int64 v416; // rax
  unsigned int v417; // esi
  __int64 (*v418)(void); // rax
  unsigned __int64 v419; // r12
  __int64 v420; // rax
  unsigned int v421; // r9d
  unsigned __int64 v422; // r8
  unsigned __int64 v423; // r9
  _QWORD *v424; // rsi
  __int64 v425; // r9
  _QWORD *v426; // r10
  const char *v427; // rax
  int v428; // r11d
  __int64 v429; // r14
  unsigned __int64 v430; // r8
  unsigned int v431; // ebx
  __int64 v432; // rax
  __int64 v433; // r8
  unsigned __int128 v434; // rax
  char v435; // r11
  unsigned int v436; // r9d
  unsigned __int64 v437; // rax
  __int64 v438; // rax
  unsigned __int64 i7; // rax
  unsigned int v440; // r10d
  const char *v441; // rsi
  unsigned int v442; // r8d
  unsigned __int64 v443; // rcx
  const char *v444; // r9
  int v445; // r11d
  const char *v446; // rax
  __int64 v447; // r14
  const char *v448; // rcx
  unsigned int v449; // ebx
  unsigned __int64 v450; // r8
  __int64 v451; // rax
  __int64 v452; // r8
  unsigned __int128 v453; // rax
  char v454; // r11
  __int64 v455; // rax
  int v456; // ecx
  __int64 v457; // rcx
  __int64 v458; // r10
  unsigned __int64 v459; // r9
  int v460; // ecx
  __int64 v461; // rax
  unsigned int v462; // r10d
  unsigned __int64 v463; // rax
  __int64 v464; // rax
  unsigned __int64 i8; // rax
  _QWORD *v466; // rcx
  __int64 v467; // r9
  char v468; // al
  __int64 v469; // rax
  __int64 v470; // rcx
  int v471; // ecx
  __int64 v472; // rcx
  __int64 v473; // r10
  unsigned __int64 v474; // r9
  int v475; // ecx
  __int64 v476; // rax
  _QWORD *v477; // rsi
  __int64 v478; // r8
  _QWORD *v479; // r9
  const char *v480; // rax
  int v481; // r10d
  __int64 v482; // r14
  unsigned __int64 v483; // rbx
  unsigned int v484; // r11d
  __int64 v485; // rax
  __int64 v486; // rbx
  unsigned __int128 v487; // rax
  unsigned int v488; // r8d
  unsigned __int64 v489; // rax
  __int64 v490; // rax
  unsigned __int64 i10; // rax
  unsigned int v492; // ebx
  BOOL v493; // r15d
  __int64 v494; // rdx
  __int64 v495; // r8
  unsigned __int8 v496; // r14
  unsigned __int64 v497; // rsi
  __int64 v498; // r13
  unsigned __int64 v499; // r12
  int v500; // eax
  unsigned int v501; // r9d
  const char *v502; // rsi
  const char *v503; // r10
  int v504; // r11d
  const char *v505; // rax
  __int64 v506; // r14
  const char *v507; // rcx
  unsigned __int64 v508; // r8
  unsigned int v509; // ebx
  __int64 v510; // rax
  __int64 v511; // r8
  unsigned __int128 v512; // rax
  char v513; // r11
  __int64 v514; // rcx
  int v515; // ecx
  __int64 v516; // rcx
  __int64 v517; // r10
  __int64 v518; // r8
  _QWORD *v519; // rdx
  unsigned __int64 v520; // r9
  int v521; // ecx
  __int64 v522; // rax
  unsigned int v523; // r9d
  unsigned __int64 v524; // rax
  __int64 v525; // rax
  unsigned __int64 i11; // rax
  unsigned int v527; // eax
  unsigned int v528; // r8d
  int v529; // ecx
  __int64 v530; // rcx
  __int64 v531; // r10
  unsigned __int64 v532; // r9
  unsigned __int64 v533; // rsi
  void (__fastcall *v534)(_QWORD, _QWORD); // rax
  __int64 v535; // rbx
  _QWORD *v536; // r12
  unsigned int v537; // ecx
  void (__fastcall *v538)(_QWORD, _QWORD); // rax
  _QWORD **v539; // r9
  __int64 v540; // r13
  _QWORD *v541; // r8
  __int64 v542; // rdx
  __int64 v543; // rax
  _QWORD **v544; // r15
  _QWORD *v545; // rsi
  unsigned int v546; // r13d
  int v547; // edx
  unsigned __int8 v548; // r12
  __int64 v549; // r14
  char *v550; // rbx
  __int64 v551; // rcx
  int *v552; // rcx
  int v553; // ecx
  __int64 v554; // rcx
  __int64 v555; // r10
  __int64 v556; // r8
  _QWORD *v557; // rdx
  unsigned __int64 v558; // r9
  int v559; // ecx
  __int64 v560; // rax
  _QWORD **v561; // r10
  _QWORD *i2; // r9
  __int64 v563; // r13
  __int64 v564; // rbx
  void (__fastcall *v565)(_QWORD, _QWORD); // rax
  unsigned int v566; // ecx
  unsigned __int8 v567; // r14
  volatile signed __int8 **v568; // r8
  volatile signed __int8 *v569; // rdx
  _QWORD **v570; // r15
  _QWORD *v571; // rsi
  __int64 v572; // rax
  int *v573; // r13
  char *v574; // rcx
  __int64 v575; // rbx
  int v576; // ecx
  __int64 v577; // rcx
  __int64 v578; // r10
  __int64 v579; // r8
  _QWORD *v580; // rdx
  unsigned __int64 v581; // r9
  int v582; // ecx
  __int64 v583; // rax
  _QWORD **v584; // r15
  __int64 (__fastcall *v585)(_QWORD, _QWORD); // rax
  __int64 v586; // rcx
  __int64 v587; // rdx
  unsigned int *v588; // rcx
  __int64 v589; // r12
  unsigned int v590; // r13d
  _QWORD *v591; // rax
  __int64 v592; // r8
  unsigned __int64 v593; // rax
  __int64 v594; // rcx
  int v595; // ebx
  unsigned __int64 v596; // rax
  unsigned __int128 v597; // rax
  unsigned __int64 v598; // rsi
  __int64 v599; // rax
  __int64 v600; // r11
  int v601; // r10d
  _QWORD *v602; // r9
  unsigned __int64 v603; // r8
  unsigned __int64 v604; // rax
  unsigned __int128 v605; // rax
  unsigned __int64 v606; // rax
  unsigned __int128 v607; // rax
  unsigned __int64 v608; // rdx
  unsigned int v609; // ebx
  _QWORD *v610; // r8
  unsigned __int64 v611; // rax
  unsigned __int128 v612; // rax
  unsigned __int64 v613; // rax
  unsigned __int128 v614; // rax
  unsigned __int64 v615; // rdx
  __int64 v616; // rbx
  _QWORD *v617; // rdx
  unsigned int v618; // eax
  __int64 v619; // rcx
  unsigned __int64 v620; // rsi
  int v621; // r13d
  unsigned __int64 v622; // r14
  unsigned __int64 v623; // r10
  int v624; // r8d
  int v625; // edx
  int v626; // ecx
  int *v627; // rcx
  int v628; // ecx
  __int64 v629; // rcx
  __int64 v630; // r11
  __int64 v631; // r8
  _QWORD *v632; // r9
  unsigned __int64 v633; // r10
  int v634; // ecx
  __int64 v635; // rax
  unsigned __int64 v636; // rax
  unsigned __int128 v637; // rax
  int v638; // ecx
  int v639; // ecx
  unsigned int v640; // r15d
  int v641; // ecx
  int v642; // ecx
  int v643; // ecx
  int v644; // ecx
  char *v645; // rbx
  int v646; // r13d
  unsigned int v647; // esi
  __int64 v648; // r14
  _QWORD *v649; // rcx
  int v650; // edx
  __int64 v651; // r8
  char v652; // al
  __int64 v653; // rax
  __int64 v654; // rcx
  int v655; // ecx
  __int64 v656; // rcx
  __int64 v657; // r10
  __int64 v658; // r8
  _QWORD *v659; // rdx
  unsigned __int64 v660; // r9
  int v661; // ecx
  __int64 v662; // rax
  __int64 (__fastcall *v663)(_QWORD, _QWORD); // rax
  __int64 i13; // rax
  char *v665; // rbx
  int v666; // r15d
  __int64 v667; // rsi
  _QWORD *v668; // rcx
  int v669; // edx
  __int64 v670; // r8
  char v671; // al
  __int64 v672; // rax
  __int64 v673; // rax
  int v674; // ecx
  __int64 v675; // rcx
  __int64 v676; // r10
  __int64 v677; // r8
  _QWORD *v678; // rdx
  unsigned __int64 v679; // r9
  int v680; // ecx
  __int64 v681; // rax
  __int64 (__fastcall *v682)(_QWORD); // rax
  __int64 v683; // r14
  ULONG_PTR *v684; // rax
  ULONG_PTR v685; // rbx
  int *v686; // rcx
  __int64 v687; // rax
  __int64 v688; // rax
  __int64 v689; // rax
  int v690; // ecx
  __int64 v691; // rcx
  __int64 v692; // r10
  __int64 v693; // r8
  unsigned __int64 v694; // r9
  int v695; // ecx
  __int64 v696; // rax
  __int64 (__fastcall *v697)(_QWORD, _QWORD); // rax
  __int64 v698; // rax
  ULONG_PTR v699; // r14
  __int64 v700; // r15
  unsigned int v701; // esi
  int v702; // ecx
  unsigned int *v703; // rax
  int v704; // ecx
  __int64 v705; // rdx
  unsigned int v706; // ebx
  unsigned int v707; // ecx
  int v708; // r9d
  unsigned __int64 v709; // r11
  unsigned int v710; // r10d
  int *v711; // r8
  __int64 v712; // r9
  __int64 v713; // rax
  int v714; // eax
  int v715; // eax
  char **v716; // rbx
  __int64 v717; // rcx
  __int64 v718; // rdx
  char *v719; // rdx
  __int64 v720; // r9
  ULONG_PTR v721; // rax
  __int64 v722; // rdx
  __int64 (__fastcall *v723)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v724; // rax
  __int64 v725; // rdx
  unsigned int v726; // ecx
  __int64 (__fastcall *v727)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v728; // rdx
  unsigned int v729; // eax
  __int64 v730; // rax
  unsigned int v731; // ecx
  __int64 (__fastcall *v732)(_QWORD); // rax
  __int64 v733; // rbx
  int v734; // ecx
  __int64 v735; // rcx
  __int64 v736; // r10
  __int64 v737; // r8
  _QWORD *v738; // rdx
  unsigned __int64 v739; // r9
  int v740; // ecx
  __int64 v741; // rax
  __int64 v742; // rcx
  __int64 v743; // rax
  __int64 v744; // r8
  __int64 v745; // r14
  unsigned int v746; // eax
  __int64 v747; // rsi
  int v748; // ecx
  unsigned int v749; // eax
  __int64 v750; // r9
  _QWORD *v751; // rcx
  int v752; // r8d
  unsigned __int64 v753; // rdx
  int v754; // ebx
  __int64 v755; // r15
  _QWORD *v756; // r13
  int *v757; // rdi
  __int64 v758; // r12
  __int64 v759; // rdx
  _QWORD *v760; // r14
  int v761; // ecx
  _QWORD *v762; // rax
  _QWORD *v763; // r9
  const char *v764; // rax
  int v765; // r11d
  __int64 v766; // rbx
  unsigned __int64 v767; // r8
  unsigned int v768; // r10d
  __int64 v769; // rax
  __int64 v770; // r8
  unsigned __int128 v771; // rax
  unsigned int v772; // edx
  unsigned __int64 v773; // rax
  __int64 v774; // rax
  unsigned __int64 i14; // rax
  _DWORD *v776; // rbx
  ULONG_PTR v777; // r14
  _BYTE *v778; // rbx
  unsigned int v779; // r9d
  _QWORD *v780; // rsi
  _DWORD *v781; // r12
  int v782; // ecx
  _QWORD *v783; // rax
  __int64 v784; // rdx
  __int64 i15; // rdx
  _QWORD *v786; // r10
  const char *v787; // rax
  int v788; // r14d
  __int64 v789; // r15
  unsigned __int64 v790; // rcx
  ULONG_PTR v791; // r8
  unsigned int v792; // r11d
  __int64 v793; // rax
  __int64 v794; // r8
  unsigned __int128 v795; // rax
  char v796; // r14
  unsigned __int64 v797; // r9
  unsigned __int64 v798; // rax
  __int64 v799; // rax
  ULONG_PTR i16; // rax
  __int64 v801; // rsi
  unsigned int v802; // eax
  __int64 v803; // r13
  int v804; // ecx
  unsigned int v805; // eax
  __int64 v806; // r8
  int v807; // edx
  unsigned __int64 v808; // rcx
  int v809; // ebx
  int v810; // ecx
  __int64 v811; // rsi
  _QWORD *v812; // rax
  __int64 v813; // rdx
  const char *v814; // r15
  __int64 v815; // r14
  int v816; // r11d
  __int64 v817; // rbx
  const char *v818; // rax
  unsigned int v819; // r10d
  __int64 v820; // rax
  __int64 v821; // r8
  unsigned __int128 v822; // rax
  unsigned __int64 v823; // rax
  __int64 v824; // rax
  ULONG_PTR i17; // rax
  _DWORD *v826; // rbx
  ULONG_PTR v827; // r14
  __int64 v828; // rsi
  __int64 v829; // rax
  int v830; // ecx
  _QWORD *v831; // rax
  _QWORD *v832; // rax
  ULONG_PTR v833; // rsi
  __int64 v834; // rax
  unsigned __int16 v835; // r10
  int v836; // ecx
  __int64 v837; // rcx
  __int64 v838; // r10
  _QWORD *v839; // rdx
  unsigned __int64 v840; // r9
  __int64 v841; // rax
  int v842; // ecx
  _BYTE *v843; // rbx
  unsigned int *v844; // r12
  _DWORD *v845; // r15
  unsigned int v846; // ecx
  _DWORD *v847; // r8
  unsigned int *v848; // r11
  unsigned int v849; // edx
  unsigned int v850; // r9d
  unsigned int v851; // edx
  unsigned int v852; // eax
  __int64 v853; // rax
  unsigned int v854; // esi
  unsigned int v855; // r15d
  unsigned int v856; // esi
  unsigned int *v857; // rax
  unsigned int *v858; // r14
  ULONG_PTR v859; // r8
  unsigned int v860; // eax
  int v861; // ecx
  __int64 v862; // rcx
  __int64 v863; // r10
  __int64 v864; // r8
  _QWORD *v865; // rdx
  unsigned __int64 v866; // r9
  int v867; // ecx
  __int64 v868; // rax
  unsigned int *v869; // rax
  unsigned int v870; // eax
  int v871; // ecx
  __int64 v872; // rcx
  __int64 v873; // r10
  __int64 v874; // r8
  _QWORD *v875; // rdx
  unsigned __int64 v876; // r9
  int v877; // ecx
  __int64 v878; // rax
  int v879; // r9d
  __int64 v880; // r14
  int v881; // ecx
  __int64 v882; // rcx
  __int64 v883; // r10
  _QWORD *v884; // rdx
  unsigned __int64 v885; // r9
  int v886; // ecx
  __int64 v887; // rcx
  __int64 v888; // r10
  _QWORD *v889; // rdx
  unsigned __int64 v890; // r9
  int v891; // ecx
  __int64 v892; // rax
  __int64 v893; // rcx
  __int64 v894; // rax
  int v895; // ecx
  __int64 v896; // rcx
  __int64 v897; // r10
  _QWORD *v898; // rdx
  unsigned __int64 v899; // r9
  int v900; // ecx
  __int64 v901; // rax
  int v902; // edx
  __int64 v903; // rsi
  unsigned int v904; // ecx
  int v905; // ecx
  unsigned int v906; // eax
  __int64 v907; // r8
  int v908; // edx
  unsigned __int64 v909; // rcx
  int v910; // ebx
  __int64 v911; // rdx
  int v912; // ecx
  _QWORD *v913; // rax
  __int64 v914; // r8
  unsigned int *v915; // rbx
  unsigned __int64 v916; // rcx
  unsigned __int64 i18; // rax
  ULONG_PTR v918; // rax
  _DWORD *v919; // r11
  __int64 v920; // rax
  _DWORD *v921; // r8
  unsigned int *v922; // rax
  __int64 v923; // rdx
  _DWORD *v924; // rax
  __int64 v925; // rcx
  int v926; // r14d
  int v927; // ecx
  __int16 *v928; // rax
  __int16 v929; // cx
  char *v930; // r9
  int v931; // r10d
  char *v932; // r11
  char *v933; // rdx
  char *v934; // rbx
  char *v935; // r8
  char v936; // cl
  char v937; // al
  unsigned int v938; // edx
  char *v939; // r8
  __int64 v940; // rcx
  __int64 v941; // rax
  char v942; // cl
  char v943; // al
  int v944; // r8d
  char *v945; // rdx
  char v946; // cl
  char v947; // al
  int v948; // r8d
  char *v949; // rdx
  char v950; // cl
  char v951; // al
  int v952; // ecx
  ULONG_PTR v953; // r9
  unsigned int v954; // esi
  __int64 v955; // rdx
  unsigned int *v956; // r8
  unsigned int v957; // esi
  unsigned int v958; // eax
  unsigned int v959; // r12d
  unsigned int v960; // ecx
  unsigned int v961; // r15d
  bool v962; // cf
  unsigned int v963; // r10d
  unsigned __int64 v964; // rbx
  unsigned int *v965; // rdx
  unsigned int v966; // r9d
  _QWORD *v967; // r8
  _QWORD *v968; // r10
  int v969; // r14d
  const char *v970; // rax
  __int64 v971; // rsi
  unsigned __int64 v972; // rcx
  unsigned __int64 v973; // r8
  unsigned int v974; // r11d
  __int64 v975; // rax
  __int64 v976; // r8
  unsigned __int128 v977; // rax
  unsigned int v978; // r9d
  unsigned __int64 v979; // rax
  __int64 v980; // rax
  unsigned __int64 v981; // rax
  unsigned int *v982; // rax
  unsigned int v983; // r15d
  char v984; // r8
  __int64 v985; // rsi
  int v986; // ecx
  ULONG_PTR v987; // rdx
  __int64 v988; // rcx
  __int64 v989; // r10
  __int64 v990; // r8
  _QWORD *v991; // rdx
  unsigned __int64 v992; // r9
  __int64 v993; // rax
  int v994; // ecx
  unsigned int *v995; // rdx
  unsigned int v996; // r9d
  _QWORD *v997; // r8
  unsigned __int64 v998; // rbx
  _QWORD *v999; // r11
  int v1000; // r14d
  const char *v1001; // rax
  __int64 v1002; // rsi
  unsigned __int64 v1003; // rcx
  unsigned __int64 v1004; // r8
  unsigned int v1005; // r10d
  __int64 v1006; // rax
  __int64 v1007; // r8
  unsigned __int128 v1008; // rax
  unsigned int v1009; // r9d
  unsigned __int64 v1010; // rax
  __int64 v1011; // rax
  unsigned __int64 i19; // rax
  unsigned __int64 v1013; // rax
  unsigned int *v1014; // rdx
  _QWORD *v1015; // r8
  unsigned int v1016; // eax
  unsigned int v1017; // r9d
  unsigned __int64 v1018; // rbx
  unsigned int v1019; // r10d
  _QWORD *v1020; // r10
  int v1021; // r14d
  const char *v1022; // rax
  __int64 v1023; // rsi
  unsigned __int64 v1024; // rcx
  unsigned __int64 v1025; // r8
  unsigned int v1026; // r11d
  __int64 v1027; // rax
  __int64 v1028; // r8
  unsigned __int128 v1029; // rax
  unsigned int v1030; // r9d
  unsigned __int64 v1031; // rax
  __int64 v1032; // rax
  unsigned __int64 i20; // rax
  unsigned __int64 v1034; // r11
  unsigned __int64 v1035; // r8
  char *v1036; // rax
  char *v1037; // rax
  char *v1038; // rsi
  __int64 v1039; // r12
  __int64 v1040; // rbx
  __int64 v1041; // r14
  _QWORD *v1042; // rcx
  __int64 v1043; // r8
  char v1044; // al
  __int64 v1045; // rax
  __int64 v1046; // rax
  int v1047; // ecx
  __int64 v1048; // rcx
  __int64 v1049; // r10
  __int64 v1050; // r8
  unsigned __int64 v1051; // r9
  int v1052; // ecx
  __int64 v1053; // rax
  char *v1054; // rbx
  unsigned __int64 v1055; // r14
  __int64 v1056; // rsi
  _QWORD *v1057; // rcx
  int v1058; // edx
  __int64 v1059; // r8
  char v1060; // al
  __int64 v1061; // rax
  __int64 v1062; // rax
  int v1063; // ecx
  __int64 v1064; // rcx
  __int64 v1065; // r10
  __int64 v1066; // r8
  _QWORD *v1067; // rdx
  unsigned __int64 v1068; // r9
  int v1069; // ecx
  __int64 v1070; // rax
  char *v1071; // rbx
  __int64 i12; // rsi
  _QWORD *v1073; // rcx
  int v1074; // edx
  __int64 v1075; // r8
  char v1076; // al
  __int64 v1077; // rax
  __int64 v1078; // rax
  int v1079; // ecx
  __int64 v1080; // rcx
  __int64 v1081; // r10
  __int64 v1082; // r8
  _QWORD *v1083; // rdx
  unsigned __int64 v1084; // r9
  int v1085; // ecx
  __int64 v1086; // rax
  int v1087; // eax
  int v1088; // ebx
  unsigned __int64 v1089; // rbx
  unsigned __int64 v1090; // r8
  __int64 v1091; // rcx
  int v1092; // ecx
  __int64 v1093; // rcx
  __int64 v1094; // r10
  unsigned __int64 v1095; // r9
  __int64 v1096; // r8
  unsigned __int64 v1097; // rcx
  __int64 v1098; // r11
  _DWORD *v1099; // rbx
  unsigned __int64 v1100; // r10
  char *v1101; // r14
  unsigned int v1102; // r9d
  __int64 v1103; // rax
  __int64 v1104; // r13
  int *v1105; // r15
  unsigned int v1106; // esi
  unsigned __int64 v1107; // r13
  unsigned __int64 v1108; // rcx
  int v1109; // r11d
  _QWORD *v1110; // r9
  __int64 v1111; // rbx
  const char *v1112; // rax
  unsigned __int64 v1113; // r8
  unsigned int v1114; // r10d
  __int64 v1115; // rax
  __int64 v1116; // r8
  unsigned __int64 v1117; // rcx
  unsigned int v1118; // edx
  unsigned __int64 v1119; // rax
  __int64 v1120; // rax
  unsigned __int64 i21; // rax
  unsigned int v1122; // r12d
  __int64 v1123; // rcx
  unsigned __int8 v1124; // si
  unsigned __int64 v1125; // rbx
  __int64 v1126; // r15
  unsigned __int64 v1127; // r14
  int v1128; // eax
  int v1129; // r11d
  __int64 v1130; // rcx
  __int64 v1131; // rax
  int v1132; // ecx
  __int64 v1133; // rcx
  __int64 v1134; // r10
  __int64 v1135; // r8
  _QWORD *v1136; // rdx
  unsigned __int64 v1137; // r9
  int v1138; // ecx
  __int64 v1139; // rax
  __int64 v1140; // rcx
  int *v1141; // r14
  __int64 v1142; // r15
  __int64 v1143; // r13
  int *v1144; // r12
  unsigned int v1145; // esi
  unsigned __int64 v1146; // r13
  unsigned __int64 v1147; // rcx
  int v1148; // r10d
  _QWORD *v1149; // r8
  __int64 v1150; // r11
  const char *v1151; // rax
  unsigned __int64 v1152; // rbx
  unsigned int v1153; // r9d
  __int64 v1154; // rax
  __int64 v1155; // rbx
  unsigned __int64 v1156; // rcx
  unsigned __int64 v1157; // rax
  __int64 v1158; // r9
  __int64 v1159; // rax
  unsigned __int64 i22; // rax
  unsigned int v1161; // ebx
  __int64 v1162; // rcx
  unsigned __int8 v1163; // r14
  unsigned __int64 v1164; // rsi
  __int64 v1165; // r12
  unsigned __int64 v1166; // r15
  int v1167; // eax
  __int64 v1168; // rcx
  __int64 v1169; // rax
  int v1170; // ecx
  __int64 v1171; // rcx
  __int64 v1172; // r10
  __int64 v1173; // r8
  unsigned __int64 v1174; // r9
  int v1175; // ecx
  __int64 v1176; // rax
  __int64 v1177; // r9
  _QWORD *v1178; // rbx
  int v1179; // r11d
  _QWORD *v1180; // r10
  __int64 v1181; // r14
  const char *v1182; // rax
  __int64 v1183; // r8
  unsigned int v1184; // esi
  __int64 v1185; // rax
  __int64 v1186; // r8
  unsigned __int128 v1187; // rax
  char v1188; // r11
  __int64 v1189; // rax
  __int64 v1190; // rdx
  __int64 v1191; // rbx
  __int64 v1192; // r8
  __int64 v1193; // rcx
  int v1194; // ecx
  __int64 v1195; // rcx
  __int64 v1196; // r10
  unsigned __int64 v1197; // r9
  int v1198; // ecx
  __int64 v1199; // rcx
  __int64 v1200; // r10
  unsigned __int64 v1201; // r9
  _QWORD *v1202; // rsi
  __int64 v1203; // r8
  _QWORD *v1204; // r9
  const char *v1205; // rax
  int v1206; // r11d
  __int64 v1207; // r14
  unsigned __int64 v1208; // rbx
  unsigned int v1209; // r10d
  __int64 v1210; // rax
  __int64 v1211; // rbx
  unsigned __int128 v1212; // rax
  char v1213; // r11
  __int64 v1214; // rdx
  __int64 v1215; // r8
  unsigned __int64 v1216; // rax
  __int64 v1217; // rax
  unsigned __int64 i; // rax
  unsigned int v1219; // ebx
  BOOL v1220; // r15d
  unsigned __int8 v1221; // r14
  unsigned __int64 v1222; // rsi
  __int64 v1223; // r13
  unsigned __int64 v1224; // r12
  int v1225; // eax
  __int64 v1226; // rcx
  int v1227; // ecx
  __int64 v1228; // rcx
  __int64 v1229; // r10
  int v1230; // ecx
  __int64 v1231; // rax
  __int64 v1232; // rcx
  unsigned __int8 v1233; // si
  unsigned int *v1234; // rcx
  unsigned int *v1235; // rbx
  char v1236; // r14
  unsigned __int64 v1237; // r15
  __int64 v1238; // rdx
  char *v1239; // r8
  unsigned int *v1240; // r9
  __int64 v1241; // rcx
  __int64 v1242; // rax
  char v1243; // cl
  char v1244; // al
  int v1245; // ecx
  int v1246; // eax
  __int64 v1247; // rcx
  __int64 v1248; // r10
  __int64 v1249; // r8
  _QWORD *v1250; // rdx
  unsigned __int64 v1251; // r9
  int v1252; // ecx
  __int64 v1253; // rax
  int v1254; // ecx
  __int64 v1255; // rcx
  __int64 v1256; // r10
  __int64 v1257; // r8
  _QWORD *v1258; // rdx
  unsigned __int64 v1259; // r9
  int v1260; // ecx
  __int64 v1261; // rax
  __int64 v1262; // rcx
  unsigned __int8 v1263; // r14
  unsigned __int64 v1264; // rdx
  unsigned int *v1265; // rcx
  unsigned int *v1266; // rbx
  unsigned __int64 v1267; // rsi
  unsigned __int64 v1268; // rcx
  unsigned __int64 v1269; // rax
  int v1270; // ecx
  __int64 v1271; // rcx
  __int64 v1272; // r10
  unsigned __int64 v1273; // r9
  _QWORD *v1274; // rsi
  __int64 v1275; // r8
  _QWORD *v1276; // r9
  const char *v1277; // rax
  int v1278; // r11d
  __int64 v1279; // r14
  unsigned __int64 v1280; // rbx
  unsigned int v1281; // r10d
  __int64 v1282; // rax
  __int64 v1283; // rbx
  unsigned __int64 v1284; // rcx
  unsigned int v1285; // r8d
  unsigned __int64 v1286; // rax
  __int64 v1287; // rax
  unsigned __int64 j; // rax
  unsigned int v1289; // ebx
  BOOL v1290; // r15d
  __int64 v1291; // r8
  unsigned __int8 v1292; // r14
  unsigned __int64 v1293; // rsi
  __int64 v1294; // r13
  unsigned __int64 v1295; // r12
  int v1296; // eax
  int v1297; // eax
  __int64 v1298; // rbx
  __int64 v1299; // rcx
  __int64 v1300; // rax
  __int64 v1301; // rcx
  int v1302; // ecx
  __int64 v1303; // rcx
  __int64 v1304; // r10
  __int64 v1305; // r8
  unsigned __int64 v1306; // r9
  __int64 v1307; // rcx
  int v1308; // ecx
  __int64 v1309; // rcx
  __int64 v1310; // r10
  __int64 v1311; // r8
  unsigned __int64 v1312; // r9
  int v1313; // ecx
  __int64 v1314; // rax
  int v1315; // ecx
  __int64 v1316; // rax
  __int64 v1317; // rcx
  __int64 v1318; // rax
  __int64 v1319; // rcx
  int v1320; // ecx
  __int64 v1321; // rcx
  __int64 v1322; // r10
  unsigned __int64 v1323; // r9
  unsigned __int64 v1324; // rbx
  __int64 v1325; // rcx
  __int64 v1326; // rbx
  int v1327; // esi
  __int64 v1328; // rbx
  unsigned int v1329; // r14d
  __int64 v1330; // rcx
  char *v1331; // r12
  unsigned __int64 v1332; // rbx
  unsigned int v1333; // r13d
  int *v1334; // rdx
  int v1335; // ecx
  __int64 v1336; // rcx
  __int64 v1337; // r10
  __int64 v1338; // r8
  _QWORD *v1339; // rdx
  unsigned __int64 v1340; // r9
  __int64 v1341; // rax
  int v1342; // ecx
  char v1343; // si
  char v1344; // r15
  __int64 v1345; // r8
  int v1346; // ecx
  __int64 v1347; // rcx
  __int64 v1348; // r10
  __int64 v1349; // r8
  _QWORD *v1350; // rdx
  unsigned __int64 v1351; // r9
  int v1352; // ecx
  __int64 v1353; // rax
  __int64 v1354; // r14
  unsigned __int64 v1355; // r9
  int *v1356; // rdx
  unsigned __int64 v1357; // rbx
  __int64 v1358; // rsi
  int v1359; // ecx
  __int64 v1360; // rcx
  __int64 v1361; // r10
  _QWORD *v1362; // rdx
  unsigned __int64 v1363; // r9
  int v1364; // ecx
  __int64 v1365; // rax
  __int64 v1366; // rax
  __int64 v1367; // rdx
  int v1368; // ecx
  __int64 v1369; // rcx
  __int64 v1370; // r10
  _QWORD *v1371; // rdx
  int v1372; // ecx
  __int64 v1373; // rax
  unsigned __int64 *v1374; // rax
  unsigned __int64 *v1375; // rbx
  unsigned __int64 v1376; // rcx
  _QWORD *v1377; // r14
  __int64 v1378; // r15
  _DWORD *v1379; // r14
  __int64 v1380; // rdx
  unsigned __int64 v1381; // rsi
  unsigned __int64 v1382; // rcx
  _QWORD *v1383; // rcx
  int v1384; // edx
  __int64 v1385; // r8
  char v1386; // al
  int v1387; // ecx
  __int64 v1388; // rcx
  __int64 v1389; // r10
  __int64 v1390; // r8
  _QWORD *v1391; // rdx
  unsigned __int64 v1392; // r9
  int v1393; // ecx
  __int64 v1394; // rax
  char *v1395; // r12
  unsigned __int64 v1396; // rbx
  unsigned int v1397; // r13d
  int *v1398; // rdx
  int v1399; // ecx
  __int64 v1400; // rcx
  __int64 v1401; // r10
  __int64 v1402; // r8
  _QWORD *v1403; // rdx
  unsigned __int64 v1404; // r9
  int v1405; // ecx
  __int64 v1406; // rax
  char v1407; // si
  char v1408; // r15
  int v1409; // ecx
  __int64 v1410; // rcx
  __int64 v1411; // r10
  __int64 v1412; // r8
  _QWORD *v1413; // rdx
  unsigned __int64 v1414; // r9
  int v1415; // ecx
  __int64 v1416; // rax
  __int64 v1417; // r14
  int *v1418; // rdx
  unsigned __int64 v1419; // rbx
  int v1420; // ecx
  __int64 v1421; // rcx
  __int64 v1422; // r10
  _QWORD *v1423; // rdx
  unsigned __int64 v1424; // r9
  int v1425; // ecx
  __int64 v1426; // rax
  __int64 v1427; // rax
  int v1428; // ecx
  __int64 v1429; // rcx
  __int64 v1430; // r10
  _QWORD *v1431; // rdx
  int v1432; // ecx
  __int64 v1433; // rax
  unsigned __int64 *v1434; // rax
  unsigned __int64 *v1435; // rbx
  unsigned __int64 v1436; // rcx
  __int64 v1437; // r15
  _DWORD *v1438; // r14
  __int64 v1439; // rdx
  unsigned __int64 v1440; // rsi
  unsigned __int64 v1441; // rcx
  _QWORD *v1442; // rcx
  int v1443; // edx
  __int64 v1444; // r8
  char v1445; // al
  int v1446; // ecx
  __int64 v1447; // rcx
  __int64 v1448; // r10
  __int64 v1449; // r8
  _QWORD *v1450; // rdx
  unsigned __int64 v1451; // r9
  int v1452; // ecx
  __int64 v1453; // rax
  __int64 v1454; // rax
  __int64 v1455; // r12
  unsigned __int64 v1456; // rbx
  unsigned int v1457; // r13d
  int *v1458; // rdx
  int v1459; // ecx
  __int64 v1460; // rcx
  __int64 v1461; // r10
  __int64 v1462; // r8
  _QWORD *v1463; // rdx
  unsigned __int64 v1464; // r9
  int v1465; // ecx
  __int64 v1466; // rax
  char v1467; // si
  char v1468; // r15
  __int64 v1469; // r8
  int v1470; // ecx
  __int64 v1471; // rcx
  __int64 v1472; // r10
  __int64 v1473; // r8
  _QWORD *v1474; // rdx
  unsigned __int64 v1475; // r9
  int v1476; // ecx
  __int64 v1477; // rax
  __int64 v1478; // r14
  unsigned __int64 v1479; // r9
  int *v1480; // rdx
  unsigned __int64 v1481; // rbx
  int v1482; // ecx
  __int64 v1483; // rcx
  __int64 v1484; // r10
  _QWORD *v1485; // rdx
  unsigned __int64 v1486; // r9
  int v1487; // ecx
  __int64 v1488; // rax
  int v1489; // ecx
  __int64 v1490; // rcx
  __int64 v1491; // r10
  int v1492; // ecx
  __int64 v1493; // rax
  unsigned __int64 *v1494; // rax
  unsigned __int64 *v1495; // rbx
  unsigned __int64 v1496; // rcx
  _QWORD *v1497; // r14
  __int64 v1498; // r15
  char *v1499; // r14
  __int64 v1500; // rdx
  unsigned __int64 v1501; // rsi
  unsigned __int64 v1502; // rcx
  _QWORD *v1503; // rcx
  int v1504; // edx
  __int64 v1505; // r8
  char v1506; // al
  int v1507; // ecx
  __int64 v1508; // rcx
  __int64 v1509; // r10
  __int64 v1510; // r8
  _QWORD *v1511; // rdx
  unsigned __int64 v1512; // r9
  int v1513; // ecx
  __int64 v1514; // rax
  int v1515; // r10d
  int v1516; // r10d
  int v1517; // ecx
  __int64 v1518; // rcx
  __int64 v1519; // r10
  unsigned __int64 v1520; // r9
  __int64 v1521; // rax
  unsigned int v1522; // ebx
  unsigned __int64 v1523; // rax
  __int64 v1524; // rcx
  unsigned int v1525; // esi
  unsigned __int64 v1526; // rax
  __int64 v1527; // rdx
  int v1528; // ecx
  _QWORD *v1529; // rax
  __int64 v1530; // r8
  struct _KPRCB *v1531; // rdx
  __int64 v1532; // r8
  int v1533; // ecx
  __int64 v1534; // rcx
  __int64 v1535; // r10
  __int64 v1536; // r8
  unsigned __int64 v1537; // r9
  int v1538; // ecx
  __int64 v1539; // rax
  unsigned __int64 v1540; // r8
  int v1541; // ecx
  __int64 v1542; // rcx
  __int64 v1543; // r10
  __int64 v1544; // r8
  unsigned __int64 v1545; // r9
  int v1546; // ecx
  __int64 v1547; // rax
  _QWORD *v1548; // r14
  __int64 v1549; // rsi
  __int64 v1550; // rdx
  int v1551; // ecx
  _QWORD *v1552; // rax
  __int64 v1553; // r8
  __int64 Ldtr; // r15
  unsigned __int16 Tr; // ax
  int v1556; // r10d
  unsigned __int16 v1557; // r12
  unsigned __int64 v1558; // r11
  _QWORD *v1559; // r8
  const char *v1560; // rcx
  unsigned __int64 v1561; // rbx
  unsigned int v1562; // r9d
  __int64 v1563; // rax
  __int64 v1564; // rbx
  unsigned __int64 v1565; // rcx
  unsigned int v1566; // esi
  unsigned __int64 v1567; // rax
  __int64 v1568; // rax
  unsigned __int64 i4; // rax
  unsigned int v1570; // ebx
  _QWORD *v1571; // rcx
  __int64 v1572; // r8
  char v1573; // al
  __int64 v1574; // rcx
  int v1575; // ecx
  __int64 v1576; // rcx
  __int64 v1577; // r10
  __int64 v1578; // r8
  unsigned __int64 v1579; // r9
  int v1580; // ecx
  __int64 v1581; // rax
  __int64 v1582; // rdx
  void (__fastcall *v1583)(_QWORD, _QWORD); // rax
  unsigned int v1584; // r10d
  __int64 v1585; // rcx
  __int64 v1586; // r8
  __int64 v1587; // rsi
  unsigned __int64 v1588; // r13
  __int64 v1589; // r15
  __int64 v1590; // r12
  unsigned __int8 v1591; // r14
  __int16 v1592; // r9
  int v1593; // eax
  __int64 v1594; // rcx
  unsigned __int64 v1595; // rbx
  __int64 v1596; // rdx
  __int64 v1597; // r15
  __int64 v1598; // rax
  __int64 v1599; // rax
  __int64 v1600; // r12
  __int64 v1601; // rax
  unsigned int *v1602; // rax
  __int64 v1603; // rcx
  unsigned __int64 v1604; // rbx
  unsigned __int64 v1605; // rdx
  struct _KPRCB *v1606; // r8
  _QWORD *v1607; // rsi
  _QWORD *v1608; // r8
  int v1609; // r9d
  const char *v1610; // rax
  __int64 v1611; // r11
  int v1612; // r10d
  unsigned __int64 v1613; // rbx
  __int64 v1614; // rax
  __int64 v1615; // rbx
  _QWORD *v1616; // r8
  __int64 v1617; // rbx
  unsigned __int128 v1618; // rax
  int v1619; // edx
  int v1620; // r14d
  __int64 v1621; // rax
  __int64 v1622; // rax
  unsigned __int64 i5; // rax
  unsigned int *v1624; // rax
  __int64 v1625; // rax
  _QWORD *v1626; // rdx
  int v1627; // r9d
  unsigned __int64 v1628; // rcx
  unsigned __int64 v1629; // rsi
  unsigned int v1630; // ebx
  const char *v1631; // rax
  __int64 v1632; // rax
  int v1633; // r8d
  __int64 v1634; // rax
  unsigned __int64 i6; // rax
  unsigned int v1636; // esi
  __int64 v1637; // rcx
  __int64 v1638; // rax
  __int64 v1639; // rcx
  int v1640; // ecx
  __int64 v1641; // rcx
  __int64 v1642; // r10
  __int64 v1643; // r8
  unsigned __int64 v1644; // r9
  int v1645; // ecx
  __int64 v1646; // rax
  volatile signed __int32 *v1647; // rcx
  _QWORD *v1648; // rsi
  __int64 v1649; // r8
  _QWORD *v1650; // r9
  const char *v1651; // rax
  int v1652; // r11d
  __int64 v1653; // r14
  unsigned __int64 v1654; // rbx
  unsigned int v1655; // r10d
  __int64 v1656; // rax
  __int64 v1657; // rbx
  unsigned __int128 v1658; // rax
  char v1659; // r11
  unsigned int v1660; // r8d
  unsigned __int64 v1661; // rax
  __int64 v1662; // rax
  unsigned __int64 n; // rax
  unsigned int v1664; // ebx
  BOOL v1665; // r15d
  __int64 v1666; // r8
  unsigned __int8 v1667; // r14
  unsigned __int64 v1668; // rsi
  __int64 v1669; // r13
  unsigned __int64 v1670; // r12
  int v1671; // eax
  __int64 v1672; // rcx
  int v1673; // ecx
  __int64 v1674; // rcx
  __int64 v1675; // r10
  __int64 v1676; // r8
  unsigned __int64 v1677; // r9
  int v1678; // ecx
  __int64 v1679; // rax
  __int64 v1680; // rsi
  __int64 v1681; // rcx
  __int64 v1682; // rax
  unsigned int v1683; // ebx
  _QWORD *v1684; // rcx
  __int64 v1685; // r8
  char v1686; // al
  __int64 v1687; // rcx
  int v1688; // ecx
  __int64 v1689; // rcx
  __int64 v1690; // r10
  unsigned __int64 v1691; // r9
  int v1692; // esi
  __int64 v1693; // r14
  unsigned int v1694; // ecx
  char v1695; // bl
  volatile signed __int8 **v1696; // r8
  volatile signed __int8 *v1697; // rdx
  unsigned __int8 v1698; // bl
  _QWORD *v1699; // rsi
  __int64 v1700; // r14
  __int64 v1701; // r8
  _QWORD *v1702; // r9
  const char *v1703; // rax
  int v1704; // r10d
  unsigned __int64 v1705; // r15
  unsigned __int64 v1706; // rbx
  unsigned int v1707; // r11d
  __int64 v1708; // rax
  __int64 v1709; // rbx
  unsigned __int128 v1710; // rax
  char v1711; // r10
  __int64 v1712; // r8
  unsigned __int64 v1713; // rax
  __int64 v1714; // rax
  unsigned __int64 ii; // rax
  unsigned int v1716; // ebx
  __int64 v1717; // rcx
  unsigned __int8 v1718; // r15
  unsigned __int64 v1719; // rsi
  unsigned __int64 v1720; // r13
  int v1721; // eax
  __int64 v1722; // rbx
  __int64 (__fastcall *v1723)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v1724; // rax
  __int64 v1725; // rsi
  unsigned int v1726; // r12d
  int v1727; // edi
  unsigned int v1728; // ecx
  unsigned int v1729; // r10d
  unsigned int v1730; // r13d
  int v1731; // eax
  char *v1732; // rdx
  __int64 v1733; // rcx
  int v1734; // ecx
  __int64 v1735; // rcx
  __int64 v1736; // r10
  int v1737; // ecx
  __int64 v1738; // rax
  __int16 v1739; // ax
  int v1740; // r9d
  char *v1741; // r8
  char v1742; // cl
  char v1743; // al
  char *v1744; // r8
  unsigned int v1745; // edx
  char *v1746; // r9
  __int64 v1747; // rcx
  __int64 v1748; // rax
  char v1749; // cl
  char v1750; // al
  char *v1751; // rdx
  int v1752; // r9d
  char *v1753; // r8
  char v1754; // cl
  char v1755; // al
  char *v1756; // rdx
  unsigned __int64 v1757; // r9
  __int64 v1758; // r8
  char v1759; // cl
  char v1760; // al
  int v1761; // eax
  __int64 v1762; // rbx
  int v1763; // eax
  int *v1764; // rcx
  int v1765; // ecx
  __int64 v1766; // rcx
  __int64 v1767; // r10
  _QWORD *v1768; // rdx
  __int64 v1769; // rax
  int v1770; // ecx
  int v1771; // eax
  unsigned __int8 v1772; // bl
  _QWORD *v1773; // rsi
  __int64 v1774; // r8
  _QWORD *v1775; // r9
  const char *v1776; // rax
  int v1777; // r10d
  __int64 v1778; // r14
  unsigned __int64 v1779; // rbx
  unsigned int v1780; // r11d
  __int64 v1781; // rax
  __int64 v1782; // rbx
  unsigned __int128 v1783; // rax
  unsigned int v1784; // r8d
  unsigned __int64 v1785; // rax
  __int64 v1786; // rax
  unsigned __int64 k; // rax
  unsigned int v1788; // ebx
  BOOL v1789; // r15d
  __int64 v1790; // rdx
  __int64 v1791; // r8
  unsigned __int8 v1792; // r14
  unsigned __int64 v1793; // rsi
  __int64 v1794; // r13
  unsigned __int64 v1795; // r12
  int v1796; // eax
  __int64 v1797; // rcx
  int v1798; // ecx
  __int64 v1799; // rcx
  __int64 v1800; // r10
  __int64 v1801; // r8
  _QWORD *v1802; // rdx
  unsigned __int64 v1803; // r9
  int v1804; // ecx
  __int64 v1805; // rax
  __int64 v1806; // r8
  unsigned __int64 v1807; // rcx
  unsigned int *v1808; // rsi
  int *v1809; // r14
  unsigned int *v1810; // r15
  unsigned int v1811; // ebx
  unsigned __int64 v1812; // r13
  __int64 v1813; // r8
  int v1814; // r10d
  const char *v1815; // rax
  __int64 v1816; // r11
  unsigned __int64 v1817; // rcx
  unsigned __int64 v1818; // r12
  unsigned int v1819; // r9d
  __int64 v1820; // rax
  __int64 v1821; // r12
  unsigned __int128 v1822; // rax
  unsigned __int64 v1823; // r9
  unsigned int v1824; // edx
  unsigned __int64 v1825; // rax
  __int64 v1826; // rax
  unsigned __int64 m; // rax
  unsigned int v1828; // r12d
  char v1829; // cl
  volatile signed __int32 *v1830; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v1832; // r8
  int v1833; // ecx
  struct _KPRCB *v1834; // rax
  unsigned __int64 v1835; // rcx
  int *v1836; // rcx
  int v1837; // ecx
  __int64 v1838; // rcx
  __int64 v1839; // r10
  _QWORD *v1840; // rdx
  int v1841; // ecx
  __int64 v1842; // rax
  __int64 v1843; // rcx
  unsigned __int8 v1844; // si
  unsigned __int64 v1845; // rbx
  __int64 v1846; // r15
  unsigned __int64 v1847; // r14
  int v1848; // eax
  bool v1849; // zf
  __int64 v1850; // rax
  int *v1851; // rcx
  int v1852; // ecx
  __int64 v1853; // rcx
  __int64 v1854; // r10
  __int64 v1855; // r8
  _QWORD *v1856; // rdx
  unsigned __int64 v1857; // r9
  int v1858; // ecx
  __int64 v1859; // rax
  __int64 v1860; // rcx
  unsigned __int8 v1861; // bl
  unsigned int *v1862; // rcx
  unsigned int *v1863; // r14
  char v1864; // si
  unsigned __int64 v1865; // r15
  __int64 v1866; // rdx
  char *v1867; // r8
  unsigned int *v1868; // r9
  __int64 v1869; // rcx
  __int64 v1870; // rax
  char v1871; // cl
  char v1872; // al
  char *v1873; // rcx
  __int64 v1874; // rax
  int v1875; // ecx
  __int64 v1876; // rcx
  __int64 v1877; // r10
  __int64 v1878; // r8
  _QWORD *v1879; // rdx
  unsigned __int64 v1880; // r9
  int v1881; // ecx
  __int64 v1882; // rax
  char *v1883; // rcx
  __int64 v1884; // rax
  int v1885; // ecx
  __int64 v1886; // rcx
  __int64 v1887; // r10
  __int64 v1888; // r8
  _QWORD *v1889; // rdx
  unsigned __int64 v1890; // r9
  int v1891; // ecx
  __int64 v1892; // rax
  unsigned int v1893; // r9d
  unsigned __int64 v1894; // rax
  __int64 v1895; // rax
  __int64 v1896; // rcx
  unsigned __int64 v1897; // rcx
  int v1898; // ecx
  __int64 v1899; // rcx
  __int64 v1900; // r10
  unsigned __int64 v1901; // r9
  __int64 v1902; // rbx
  __int64 v1903; // rbx
  unsigned __int64 v1904; // rdi
  char *v1905; // rsi
  unsigned __int64 v1906; // r14
  struct _KPRCB *v1907; // r8
  char *v1908; // r13
  __int64 v1909; // rax
  unsigned __int64 v1910; // rdx
  unsigned __int64 v1911; // r9
  unsigned __int64 v1912; // rcx
  unsigned __int64 v1913; // rbx
  unsigned __int64 v1914; // rdi
  _QWORD *v1915; // r9
  unsigned __int64 v1916; // rcx
  unsigned __int64 v1917; // rax
  __int64 v1918; // rsi
  unsigned __int64 v1919; // r8
  _QWORD *v1920; // rcx
  signed __int64 v1921; // r8
  unsigned int v1922; // r12d
  char *v1923; // rdi
  __int64 v1924; // r11
  unsigned __int64 *v1925; // rcx
  __int64 v1926; // rdx
  __int64 v1927; // r10
  unsigned __int64 v1928; // rax
  _QWORD *v1929; // r15
  __int64 v1930; // rax
  unsigned __int64 v1931; // rdx
  unsigned __int64 v1932; // rcx
  unsigned int v1933; // r10d
  _QWORD *v1934; // r11
  unsigned int v1935; // r14d
  unsigned __int64 v1936; // r15
  char *v1937; // r11
  unsigned __int64 v1938; // rcx
  unsigned __int64 v1939; // rax
  char *v1940; // r8
  unsigned __int64 v1941; // r9
  __int64 v1942; // r11
  __int64 v1943; // rdx
  __int64 v1944; // r10
  unsigned __int64 v1945; // rax
  unsigned __int64 *v1946; // rcx
  __int64 *v1947; // r11
  __int64 v1948; // rax
  unsigned __int64 v1949; // rdx
  unsigned __int64 v1950; // rcx
  unsigned __int64 v1951; // r9
  unsigned int v1952; // ebx
  unsigned int v1953; // ebx
  unsigned __int8 v1954; // al
  unsigned int v1955; // ebx
  unsigned __int8 v1956; // al
  unsigned int v1957; // ebx
  unsigned __int8 v1958; // al
  unsigned __int64 v1959; // rcx
  unsigned __int64 v1960; // rax
  int v1961; // ecx
  int v1962; // ecx
  int v1963; // ecx
  int v1964; // ecx
  int v1965; // ecx
  volatile signed __int32 *v1966; // rax
  unsigned int v1967; // ebx
  unsigned __int8 CurrentIrql; // al
  signed __int32 v1969[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v1970; // [rsp+28h] [rbp-D8h]
  __int64 *v1971; // [rsp+38h] [rbp-C8h]
  __int16 v1972; // [rsp+50h] [rbp-B0h]
  char *v1973; // [rsp+58h] [rbp-A8h]
  unsigned int v1974; // [rsp+60h] [rbp-A0h]
  __int64 v1975; // [rsp+68h] [rbp-98h]
  __int64 v1976; // [rsp+70h] [rbp-90h]
  int v1977; // [rsp+78h] [rbp-88h]
  char *v1978; // [rsp+80h] [rbp-80h]
  __int64 v1979; // [rsp+88h] [rbp-78h]
  unsigned __int64 v1980; // [rsp+90h] [rbp-70h]
  unsigned int v1981; // [rsp+98h] [rbp-68h]
  unsigned int v1982; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v1983; // [rsp+A0h] [rbp-60h]
  _DWORD *v1984; // [rsp+A8h] [rbp-58h]
  unsigned __int8 v1985; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int8 v1986; // [rsp+B1h] [rbp-4Fh] BYREF
  unsigned __int8 v1987; // [rsp+B2h] [rbp-4Eh] BYREF
  unsigned __int64 v1988; // [rsp+B8h] [rbp-48h]
  unsigned int v1989; // [rsp+C0h] [rbp-40h] BYREF
  char *v1990; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v1991; // [rsp+D0h] [rbp-30h]
  unsigned int *v1992; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v1993; // [rsp+E0h] [rbp-20h]
  __int64 v1994; // [rsp+E8h] [rbp-18h] BYREF
  int v1995; // [rsp+F0h] [rbp-10h]
  unsigned int v1996; // [rsp+F4h] [rbp-Ch]
  _BYTE *v1997; // [rsp+F8h] [rbp-8h] BYREF
  char *v1998; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v1999; // [rsp+108h] [rbp+8h]
  char *v2000; // [rsp+110h] [rbp+10h]
  unsigned __int64 v2001; // [rsp+118h] [rbp+18h]
  unsigned int v2002; // [rsp+120h] [rbp+20h]
  unsigned int v2003; // [rsp+124h] [rbp+24h]
  __int64 v2004; // [rsp+128h] [rbp+28h] BYREF
  char *v2005; // [rsp+130h] [rbp+30h]
  unsigned int v2006; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v2007; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v2008; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v2009; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v2010; // [rsp+150h] [rbp+50h]
  char *v2011; // [rsp+158h] [rbp+58h]
  __int64 v2012; // [rsp+160h] [rbp+60h]
  unsigned int v2013; // [rsp+168h] [rbp+68h] BYREF
  __int64 v2014; // [rsp+170h] [rbp+70h]
  unsigned int v2015; // [rsp+178h] [rbp+78h] BYREF
  __int64 v2016; // [rsp+180h] [rbp+80h] BYREF
  _DWORD *v2017; // [rsp+188h] [rbp+88h]
  __int64 v2018; // [rsp+190h] [rbp+90h]
  __int64 v2019; // [rsp+198h] [rbp+98h]
  char v2020; // [rsp+1A0h] [rbp+A0h] BYREF
  int v2021; // [rsp+1A8h] [rbp+A8h] BYREF
  _DWORD v2022[9]; // [rsp+1ACh] [rbp+ACh] BYREF
  __int64 v2023; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v2024; // [rsp+1D8h] [rbp+D8h]
  int v2025; // [rsp+1E0h] [rbp+E0h]
  __int64 v2026; // [rsp+1E8h] [rbp+E8h] BYREF
  int v2027; // [rsp+1F0h] [rbp+F0h]
  _DWORD v2028[6]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int16 v2029; // [rsp+210h] [rbp+110h] BYREF
  _QWORD *v2030; // [rsp+212h] [rbp+112h]
  __int64 v2031; // [rsp+220h] [rbp+120h] BYREF
  __int64 v2032; // [rsp+228h] [rbp+128h] BYREF
  __int64 v2033; // [rsp+230h] [rbp+130h] BYREF
  __int64 v2034; // [rsp+238h] [rbp+138h] BYREF
  __int64 v2035; // [rsp+240h] [rbp+140h]
  __int64 v2036; // [rsp+248h] [rbp+148h]
  __int64 v2037; // [rsp+250h] [rbp+150h]
  __int64 v2038; // [rsp+258h] [rbp+158h] BYREF
  __int16 v2039; // [rsp+260h] [rbp+160h] BYREF
  struct _KPRCB *v2040; // [rsp+262h] [rbp+162h]
  __int16 v2041; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int64 v2042; // [rsp+272h] [rbp+172h]
  __int16 v2043; // [rsp+280h] [rbp+180h] BYREF
  __int64 v2044; // [rsp+282h] [rbp+182h]
  __int16 v2045; // [rsp+290h] [rbp+190h] BYREF
  __int64 v2046; // [rsp+292h] [rbp+192h]
  __int128 v2047; // [rsp+2A0h] [rbp+1A0h]
  __int128 v2048; // [rsp+2B0h] [rbp+1B0h]
  unsigned __int64 v2049; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v2050; // [rsp+2C8h] [rbp+1C8h] BYREF
  _DWORD *v2051; // [rsp+2D0h] [rbp+1D0h]
  int v2052; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v2053; // [rsp+2E0h] [rbp+1E0h]
  _WORD v2054[4]; // [rsp+2E8h] [rbp+1E8h] BYREF
  _BYTE *v2055; // [rsp+2F0h] [rbp+1F0h]
  _WORD v2056[4]; // [rsp+2F8h] [rbp+1F8h] BYREF
  _BYTE *v2057; // [rsp+300h] [rbp+200h]
  _QWORD v2058[6]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v2059[16]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE v2060[16]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v2061[16]; // [rsp+360h] [rbp+260h] BYREF
  __int64 v2062; // [rsp+370h] [rbp+270h] BYREF
  __int16 v2063; // [rsp+378h] [rbp+278h]
  __int16 v2064; // [rsp+37Ah] [rbp+27Ah]
  unsigned __int64 v2065; // [rsp+390h] [rbp+290h]
  int v2066; // [rsp+398h] [rbp+298h]
  unsigned int v2067; // [rsp+39Ch] [rbp+29Ch]
  unsigned __int64 v2068; // [rsp+3A0h] [rbp+2A0h]
  _BYTE v2069[16]; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int64 v2070; // [rsp+3B8h] [rbp+2B8h]
  __int64 v2071; // [rsp+3C0h] [rbp+2C0h]
  __int64 v2072; // [rsp+3C8h] [rbp+2C8h]
  __int64 v2073; // [rsp+3D0h] [rbp+2D0h]
  char v2074; // [rsp+3D8h] [rbp+2D8h] BYREF
  char v2075; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v2076; // [rsp+3E8h] [rbp+2E8h]
  __int64 v2077; // [rsp+3F0h] [rbp+2F0h]
  __int64 v2078; // [rsp+3F8h] [rbp+2F8h]
  unsigned int *v2079; // [rsp+400h] [rbp+300h]
  __int64 v2080; // [rsp+408h] [rbp+308h]
  __int64 v2081; // [rsp+410h] [rbp+310h]
  __int64 v2082; // [rsp+418h] [rbp+318h]
  char v2083; // [rsp+420h] [rbp+320h] BYREF
  char v2084; // [rsp+428h] [rbp+328h] BYREF
  char v2085; // [rsp+430h] [rbp+330h] BYREF
  __int64 v2086; // [rsp+438h] [rbp+338h]
  __int64 v2087; // [rsp+440h] [rbp+340h]
  __int64 v2088; // [rsp+448h] [rbp+348h]
  __int64 v2089; // [rsp+450h] [rbp+350h]
  unsigned __int64 v2090; // [rsp+458h] [rbp+358h]
  unsigned __int64 v2091; // [rsp+460h] [rbp+360h]
  __int64 v2092; // [rsp+468h] [rbp+368h]
  __int64 v2093; // [rsp+470h] [rbp+370h]
  __int64 v2094; // [rsp+478h] [rbp+378h]
  __int64 v2095; // [rsp+480h] [rbp+380h]
  __int64 v2096; // [rsp+490h] [rbp+390h]
  unsigned __int64 v2097; // [rsp+498h] [rbp+398h]
  __int64 v2098; // [rsp+4A0h] [rbp+3A0h]
  char v2099; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int64 v2100; // [rsp+4B0h] [rbp+3B0h]
  __int64 v2101; // [rsp+4B8h] [rbp+3B8h]
  __int64 v2102; // [rsp+4C0h] [rbp+3C0h]
  __int64 v2103; // [rsp+4C8h] [rbp+3C8h]
  __int64 v2104; // [rsp+4D0h] [rbp+3D0h]
  __int64 v2105; // [rsp+4D8h] [rbp+3D8h]
  __int64 v2106; // [rsp+4E0h] [rbp+3E0h]
  __int64 v2107; // [rsp+4E8h] [rbp+3E8h]
  __int64 v2108; // [rsp+4F0h] [rbp+3F0h]
  __int64 v2109; // [rsp+4F8h] [rbp+3F8h]
  __int64 v2110; // [rsp+500h] [rbp+400h]
  __int64 v2111; // [rsp+508h] [rbp+408h]
  __int64 v2112; // [rsp+510h] [rbp+410h]
  _BYTE v2113[16]; // [rsp+518h] [rbp+418h] BYREF
  _BYTE v2114[16]; // [rsp+528h] [rbp+428h] BYREF
  _BYTE v2115[16]; // [rsp+538h] [rbp+438h] BYREF
  _BYTE v2116[16]; // [rsp+548h] [rbp+448h] BYREF
  _BYTE v2117[16]; // [rsp+558h] [rbp+458h] BYREF
  _BYTE v2118[16]; // [rsp+568h] [rbp+468h] BYREF
  __int64 v2119; // [rsp+578h] [rbp+478h]
  _BYTE v2120[16]; // [rsp+580h] [rbp+480h] BYREF
  _BYTE v2121[16]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v2122[16]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v2123[16]; // [rsp+5B0h] [rbp+4B0h] BYREF
  _BYTE v2124[16]; // [rsp+5C0h] [rbp+4C0h] BYREF
  _BYTE v2125[16]; // [rsp+5D0h] [rbp+4D0h] BYREF
  _BYTE v2126[16]; // [rsp+5E0h] [rbp+4E0h] BYREF
  __int64 v2127; // [rsp+5F0h] [rbp+4F0h]
  _BYTE v2128[24]; // [rsp+5F8h] [rbp+4F8h] BYREF
  char v2129; // [rsp+610h] [rbp+510h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+618h] [rbp+518h]
  unsigned int v2131; // [rsp+624h] [rbp+524h]
  _BYTE v2132[16]; // [rsp+628h] [rbp+528h] BYREF
  __int64 v2133; // [rsp+638h] [rbp+538h]
  __int64 v2134; // [rsp+640h] [rbp+540h]
  char v2135; // [rsp+648h] [rbp+548h] BYREF
  char v2136; // [rsp+658h] [rbp+558h] BYREF
  _QWORD v2137[4]; // [rsp+668h] [rbp+568h] BYREF
  _QWORD v2138[4]; // [rsp+688h] [rbp+588h] BYREF
  char v2139; // [rsp+6A8h] [rbp+5A8h] BYREF
  unsigned __int64 v2140; // [rsp+6B0h] [rbp+5B0h]
  char v2141; // [rsp+6C0h] [rbp+5C0h] BYREF
  unsigned __int64 v2142; // [rsp+6C8h] [rbp+5C8h]
  _BYTE v2143[24]; // [rsp+6D8h] [rbp+5D8h] BYREF
  _BYTE v2144[48]; // [rsp+6F0h] [rbp+5F0h] BYREF
  _BYTE v2145[96]; // [rsp+720h] [rbp+620h] BYREF
  char v2147; // [rsp+7A0h] [rbp+6A0h] BYREF
  char v2148; // [rsp+7A8h] [rbp+6A8h] BYREF

  v2 = a2;
  if ( !__2c )
    KeBugCheck(0x33u);
  v4 = *(_QWORD *)&MaxDataSize;
  _InterlockedOr(v1969, 0);
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
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_DWORD *)(a1 + 20) & 1;
  if ( !v6 )
  {
    if ( v7 == 16 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      if ( v13 )
      {
        if ( v13 <= 0xFFFFFFFF )
        {
          if ( ObGetCurrentIrql() || KeAreApcsDisabled() )
          {
            v1967 = KeAreAllApcsDisabled();
            CurrentIrql = ObGetCurrentIrql();
            KeBugCheckEx(0xC8u, ((unsigned __int64)CurrentIrql << 16) | 0xFF, v1967, 0LL, 0LL);
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
    if ( v7 == 16 && KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0) )
    {
      if ( *(int *)(a1 + 20) >= 0 )
      {
        if ( ObGetCurrentIrql() || KeAreApcsDisabled() )
        {
          v1957 = KeAreAllApcsDisabled();
          v1958 = ObGetCurrentIrql();
          KeBugCheckEx(0xC8u, ((unsigned __int64)v1958 << 16) | 0xFF, v1957, 0LL, 0LL);
        }
      }
      else if ( ObGetCurrentIrql() > 1u )
      {
        v1955 = KeAreAllApcsDisabled();
        v1956 = ObGetCurrentIrql();
        KeBugCheckEx(0xC8u, ((unsigned __int64)v1956 << 16) | 0xFF, v1955, 0LL, 0LL);
      }
      goto LABEL_38;
    }
    return 3221225485LL;
  }
  if ( v12 != 1 || v7 )
    return 3221225485LL;
  if ( ObGetCurrentIrql() || KeAreApcsDisabled() )
  {
    v1953 = KeAreAllApcsDisabled();
    v1954 = ObGetCurrentIrql();
    KeBugCheckEx(0xC8u, ((unsigned __int64)v1954 << 16) | 0xFF, v1953, 0LL, 0LL);
  }
LABEL_38:
  v2019 = 2872LL;
  if ( !v8 || (v2019 = *(_QWORD *)(v4 + 2776) + 2879LL, v2019 == 2872) )
    Pool2 = (char *)ExAllocateFromNPagedLookasideList(&stru_140E0F080);
  else
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
  v2000 = Pool2;
  v15 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v16 = Pool2 + 32;
  v2005 = Pool2 + 32;
  memmove(Pool2 + 32, (const void *)v4, 0xAE8uLL);
  v15[348] = v4;
  v15[349] = v15 + 353;
  v17 = 0LL;
  *((_DWORD *)v15 + 536) = *(_DWORD *)v2;
  *(_QWORD *)((char *)v15 + 2148) = *(unsigned int *)(v2 + 4);
  *((_DWORD *)v15 + 540) = 0;
  *((_DWORD *)v15 + 639) |= 0x1000u;
  if ( v8 )
    v15[350] = ((unsigned __int64)v15 + 2879) & 0xFFFFFFFFFFFFFFF8uLL;
  v18 = *(_DWORD *)(a1 + 16);
  if ( v18 > 0x80000 )
    v18 = 0x80000;
  *((_DWORD *)v15 + 539) = v18;
  if ( !v18 )
    *((_DWORD *)v15 + 539) = 1;
  v2036 = a1;
  v19 = (unsigned __int64)(v15 + 4);
  v2037 = v2;
  v20 = *((_DWORD *)v15 + 639);
  v1978 = (char *)(v15 + 4);
  if ( (v20 & 8) == 0
    || (v20 & 0x1000) != 0
    || (v21 = __rdtsc(),
        v22 = (__ROR8__(v21, 3) ^ v21) * (unsigned __int128)0x7010008004002001uLL,
        v2108 = *((_QWORD *)&v22 + 1),
        (((unsigned __int8)v22 ^ BYTE8(v22)) & 3) != 0)
    || (v23 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v15[36])(64LL, v15[243], *((unsigned int *)v15 + 532)),
        v17 = 0LL,
        (v24 = v23) == 0) )
  {
LABEL_61:
    v31 = 1LL;
    v1995 = 0;
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v15[59])(v23, *((unsigned __int16 *)v15 + 976));
    v25 = *(unsigned int *)(v15[227] + v15[166]);
    if ( (_DWORD)v25 )
    {
      v26 = __rdtsc();
      v27 = (__ROR8__(v26, 3) ^ v26) * (unsigned __int128)0x7010008004002001uLL;
      v2107 = *((_QWORD *)&v27 + 1);
      v25 = (*((_QWORD *)&v27 + 1) ^ (unsigned __int64)v27) % v25;
    }
    v28 = 0LL;
    while ( 1 )
    {
      v29 = ((__int64 (__fastcall *)(__int64))v15[122])(v28);
      v30 = v29;
      if ( !v29 )
        goto LABEL_60;
      v28 = v29;
      if ( !(_DWORD)v25 )
        break;
      LODWORD(v25) = v25 - 1;
    }
    if ( ((int (__fastcall *)(__int64))v15[120])(v29) < 0 )
    {
      ((void (__fastcall *)(__int64))v15[123])(v30);
LABEL_60:
      ((void (__fastcall *)(__int64))v15[37])(v24);
      v17 = 0LL;
      goto LABEL_61;
    }
    ((void (__fastcall *)(__int64, _BYTE *))v15[139])(v30, v2145);
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v15[63])(v30, v24, 0LL, 0LL, 0LL);
    v44 = __rdtsc();
    v45 = (__ROR8__(v44, 3) ^ v44) * (unsigned __int128)0x7010008004002001uLL;
    v2106 = *((_QWORD *)&v45 + 1);
    v46 = ((unsigned __int64)v45 ^ *((_QWORD *)&v45 + 1)) % ((unsigned int (__fastcall *)(__int64))v15[62])(v24);
    _disable();
    _enable();
    ((void (__fastcall *)(_BYTE *, _QWORD))v15[58])(v2069, 0LL);
    ((void (__fastcall *)(_BYTE *, __int64))v15[60])(v2128, v24);
    while ( ((int (__fastcall *)(unsigned int *, _BYTE *))v15[61])(&v2006, v2128) >= 0 )
    {
      if ( !(_DWORD)v46 )
      {
        ((void (__fastcall *)(_BYTE *, _QWORD))v15[58])(v2069, v2006);
        break;
      }
      LODWORD(v46) = v46 - 1;
    }
    ((void (__fastcall *)(_BYTE *, _BYTE *))v15[64])(v2069, v2126);
    ((void (__fastcall *)(__int64))v15[37])(v24);
    v31 = 1LL;
    v17 = 0LL;
    v1995 = 1;
  }
  v2012 = 0LL;
  v32 = 4;
  v33 = &v2013;
  v34 = -1;
  do
  {
    *(_BYTE *)v33 = 0;
    v33 = (unsigned int *)((char *)v33 + 1);
    --v32;
  }
  while ( v32 );
  v35 = *((_DWORD *)v15 + 536);
  if ( *((_DWORD *)v15 + 538) >= *((_DWORD *)v15 + 539) )
    goto LABEL_2898;
  i9 = 0;
  v37 = 1;
  while ( 1 )
  {
    v38 = *(_DWORD *)(v19 + 2520) & 0x88000;
    v2003 = v35;
    if ( v38 != 557056 )
      __writedr(7u, 0LL);
    if ( v35 == *(_DWORD *)(v19 + 2092) )
      break;
    v39 = v19;
    v40 = 0;
    if ( *(_QWORD *)(v19 + 2752) )
      v39 = *(_QWORD *)(v19 + 2752);
    v41 = (char *)(v39 + *(unsigned int *)(v39 + 2088));
    v1973 = v41;
    if ( (_DWORD)v2012 && HIDWORD(v2012) <= v35 )
    {
      v40 = HIDWORD(v2012);
      v41 = (char *)(v39 + v2013);
      v1973 = v41;
    }
    if ( v40 != v35 )
    {
      v42 = v35 - v40;
      v40 = v35;
      while ( 1 )
      {
        if ( *(_DWORD *)v41 == 1 )
        {
LABEL_101:
          v31 = *((unsigned int *)v41 + 4) / 0xCuLL;
          v43 = (unsigned int)(4 * v31 + 48);
          goto LABEL_102;
        }
        if ( *(_DWORD *)v41 == 7 )
        {
          v43 = (unsigned int)(24 * (*((_DWORD *)v41 + 6) + 2));
          goto LABEL_102;
        }
        if ( *(_DWORD *)v41 == 8 )
          break;
        switch ( *(_DWORD *)v41 )
        {
          case 0xA:
            v43 = (unsigned int)(16 * (*((_DWORD *)v41 + 7) + 3));
            break;
          case 0x1C:
            v47 = *((unsigned __int16 *)v41 + 20);
LABEL_99:
            v43 = (v47 + 55) & 0xFFFFFFF8;
            break;
          case 0x1E:
            v31 = ((*((_DWORD *)v41 + 9) != 0 ? *((_DWORD *)v41 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
            v43 = (unsigned int)v31 + 24 * (*((unsigned __int16 *)v41 + 20) + 2);
            break;
          case 0x21:
            v31 = ((*((_DWORD *)v41 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v41 + 10) + 4095) >> 12;
            v43 = (unsigned int)(20 * v31 + 48);
            break;
          case 0x2B:
            goto LABEL_101;
          default:
            v43 = 48LL;
            break;
        }
LABEL_102:
        v41 += v43;
        if ( !--v42 )
        {
          v1973 = v41;
          v34 = -1;
          goto LABEL_104;
        }
      }
      v47 = *((unsigned __int16 *)v41 + 16);
      goto LABEL_99;
    }
LABEL_104:
    LODWORD(v2012) = 1;
    HIDWORD(v2012) = v40;
    v2013 = (_DWORD)v41 - v39;
    if ( !*(_DWORD *)(v19 + 2116) )
    {
      v48 = 0;
      v49 = *(_DWORD *)v41;
      v50 = *(_DWORD *)(v2036 + 48);
      v51 = *(__int64 **)(v2036 + 56);
      if ( *(int *)v41 > 21 )
      {
        v53 = v49 - 24;
        if ( !v53 )
          goto LABEL_144;
        v54 = v53 - 4;
        if ( !v54 )
          goto LABEL_144;
        v55 = v54 - 1;
        if ( !v55 )
          goto LABEL_144;
        v56 = v55 - 1;
        if ( v56 )
        {
          v57 = v56 - 2;
          if ( v57 )
          {
            v58 = v57 - 3;
            if ( v58 )
            {
              if ( (unsigned int)(v58 - 8) > 1 )
                goto LABEL_238;
            }
          }
        }
LABEL_136:
        if ( v50 )
          goto LABEL_238;
      }
      else
      {
        if ( v49 == 21 )
        {
          v48 = *((_DWORD *)v41 + 11);
          if ( v50 != 4 )
            goto LABEL_238;
          goto LABEL_127;
        }
        v31 = v49;
        if ( !v49 )
          goto LABEL_136;
        v31 = v49 - 1;
        if ( v49 == 1 )
          goto LABEL_136;
        v31 = v49 - 2;
        if ( v49 != 2 )
        {
          v31 = v49 - 3;
          if ( v49 != 3 )
          {
            v31 = v49 - 7;
            if ( v49 != 7 )
            {
              v31 = v49 - 8;
              if ( v49 != 8 )
              {
                v31 = v49 - 9;
                if ( v49 != 9 && v49 != 13 )
                  goto LABEL_238;
                goto LABEL_136;
              }
LABEL_144:
              if ( v50 != 5 )
                goto LABEL_238;
LABEL_145:
              ++*(_QWORD *)(v2037 + 8);
              goto LABEL_146;
            }
LABEL_117:
            if ( v49 == 7 )
            {
              v48 = *((_DWORD *)v41 + 7);
              v52 = v50 == 1;
LABEL_119:
              if ( !v52 )
                goto LABEL_238;
            }
            else if ( v49 - 2 <= 1 )
            {
              v48 = *((_DWORD *)v41 + 10);
              if ( v49 == 3 && v50 != 2 )
                goto LABEL_238;
              if ( v49 == 2 )
              {
                v52 = v50 == 3;
                goto LABEL_119;
              }
            }
LABEL_127:
            if ( !(unsigned int)KeCheckProcessorGroupAffinity(*(_QWORD *)(v2036 + 56), v48) )
              goto LABEL_238;
            goto LABEL_145;
          }
        }
        if ( v50 )
          goto LABEL_117;
      }
      v59 = *((unsigned int *)v41 + 4);
      if ( !(_DWORD)v59 )
        goto LABEL_238;
      v31 = (unsigned __int64)&v2050;
      v60 = *((_QWORD *)v41 + 1);
      v2050 = *v51;
      v2021 = *((_DWORD *)v51 + 2);
      v61 = v60 + v59;
      v62 = (unsigned int *)&v2021;
      while ( v60 >= *(_QWORD *)v31 + (unsigned __int64)*v62 || v61 <= *(_QWORD *)v31 )
      {
        ++v48;
        v31 += 8LL;
        ++v62;
        if ( v48 )
          goto LABEL_238;
      }
      goto LABEL_145;
    }
LABEL_146:
    v63 = *(_DWORD *)v41;
    v1981 = v63;
    if ( v63 > 30 )
    {
      if ( v63 <= 40 )
      {
        if ( v63 == 40 )
          goto LABEL_1760;
        if ( v63 != 31 )
        {
          if ( v63 == 32 )
          {
            sub_140517CE8(v19, v41);
            goto LABEL_238;
          }
          if ( v63 == 33 )
          {
            sub_140516BE4(v19, v41);
            goto LABEL_238;
          }
          if ( v63 != 35 )
          {
            switch ( v63 )
            {
              case '$':
                v1202 = (_QWORD *)*((_QWORD *)v41 + 1);
                v1203 = *((unsigned int *)v41 + 4);
                v1204 = v1202;
                *(_DWORD *)(v19 + 2120) += v1203;
                v1205 = (const char *)v1202;
                v1206 = *(_DWORD *)(v19 + 2100);
                v1207 = *(_QWORD *)(v19 + 2104);
                if ( v1202 < (_QWORD *)((char *)v1202 + v1203) )
                {
                  do
                  {
                    _mm_prefetch(v1205, 0);
                    v1205 += 64;
                  }
                  while ( v1205 < (const char *)v1202 + v1203 );
                }
                v1208 = *(_QWORD *)(v19 + 2104);
                v1209 = (unsigned int)v1203 >> 7;
                if ( (unsigned int)v1203 >> 7 )
                {
                  do
                  {
                    v1210 = 8LL;
                    do
                    {
                      v1211 = v1204[1] ^ __ROL8__(*v1204 ^ v1208, v1206);
                      v1204 += 2;
                      v1208 = __ROL8__(v1211, v1206);
                      --v1210;
                    }
                    while ( v1210 );
                    v1212 = (__ROL8__(v1207 ^ ((char *)v1204 - (char *)v1202), 17) ^ v1207 ^ (unsigned __int64)((char *)v1204 - (char *)v1202))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2088 = *((_QWORD *)&v1212 + 1);
                    v1213 = v1212 ^ BYTE8(v1212) ^ v1206;
                    v1214 = 0xFFFFFFFFLL;
                    v1206 = v1213 & 0x3F;
                    if ( !v1206 )
                      LOBYTE(v1206) = 1;
                    --v1209;
                  }
                  while ( v1209 );
                  v19 = (unsigned __int64)v1978;
                }
                else
                {
                  v1214 = 0xFFFFFFFFLL;
                }
                v1215 = v1203 & 0x7F;
                if ( (unsigned int)v1215 >= 8 )
                {
                  v1216 = (unsigned __int64)(unsigned int)v1215 >> 3;
                  do
                  {
                    v1208 = __ROL8__(*v1204++ ^ v1208, v1206);
                    v1215 = (unsigned int)(v1215 - 8);
                    --v1216;
                  }
                  while ( v1216 );
                }
                for ( ; (_DWORD)v1215; v1215 = (unsigned int)(v1215 - 1) )
                {
                  v1217 = *(unsigned __int8 *)v1204;
                  v1204 = (_QWORD *)((char *)v1204 + 1);
                  v1208 = __ROL8__(v1217 ^ v1208, v1206);
                }
                for ( i = v1208; ; LODWORD(v1208) = i ^ v1208 )
                {
                  i >>= 31;
                  if ( !i )
                    break;
                }
                v1219 = v1208 & 0x7FFFFFFF;
                v1220 = 0;
                if ( v1219 == *((_DWORD *)v41 + 5) )
                  goto LABEL_1835;
                if ( !*(_DWORD *)v41 )
                  v1220 = *((_DWORD *)v41 + 6) != 0;
                v1214 = *((_QWORD *)v41 + 1);
                if ( !*((_DWORD *)v41 + 4) )
                  goto LABEL_1822;
                v1215 = 64LL;
                if ( (*(_DWORD *)(v19 + 2524) & 0x40) == 0 )
                  goto LABEL_1822;
                v1221 = KeGetCurrentIrql();
                v1222 = v1214 & 0xFFFFFFFFFFFFF000uLL;
                v1223 = (v1214 + *((unsigned int *)v41 + 4) - 1LL) | 0xFFF;
                v1224 = (v1214 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1813:
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1225 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                            v1222,
                            0LL,
                            v1215,
                            v1204);
                  if ( v1225 == -1073741267 )
                  {
                    if ( v1220 )
                      goto LABEL_1821;
                    if ( v1221 <= 1u )
                    {
                      __writecr8(v1221);
                      goto LABEL_1813;
                    }
                  }
                  else if ( v1225 < 0 )
                  {
LABEL_1821:
                    __writecr8(v1221);
                    v41 = v1973;
                    i9 = 0;
LABEL_1822:
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1219 ^ (unsigned __int64)*((unsigned int *)v41 + 5);
                    v1226 = *((_QWORD *)v41 + 1);
                    if ( !*(_DWORD *)(v19 + 2328) )
                    {
                      v1214 = 1LL;
                      *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v19 + 2352) = *(int *)v41;
                      *(_QWORD *)(v19 + 2360) = v1226;
                      *(_DWORD *)(v19 + 2328) = 1;
                      v1227 = *(_DWORD *)(v19 + 2520);
                      if ( (v1227 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1227 & 1) != 0 )
                      {
                        v1228 = *(unsigned int *)(v19 + 2676);
                        v1229 = *(_QWORD *)(v19 + 2104);
                        v1215 = *(_QWORD *)(v19 + 2680);
                        v1214 = v1228 + v19;
                        v1204 = (_QWORD *)(v1228
                                         + v19
                                         + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1228) >> 3));
                        while ( (_QWORD *)v1214 != v1204 )
                        {
                          *(_QWORD *)v1214 ^= v1215;
                          v1215 = ((v1229 ^ *(_QWORD *)v1214) + __ROR8__(v1215, v1215 & 0x3F)) ^ 0xEFA;
                          v1214 += 8LL;
                        }
                        *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                        if ( v1215 != *(_QWORD *)(v19 + 2688) )
                        {
                          v1230 = *(_DWORD *)(v19 + 2052);
                          v1231 = *(_QWORD *)(v19 + 1416);
                          *(_QWORD *)v1231 = v19;
                          *(_DWORD *)(v1231 + 16) = v1230;
                          if ( !*(_DWORD *)(v19 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1215 ^ *(_QWORD *)(v19 + 2688);
                          sub_140BC7384(v19, 0LL, v1215, 256LL);
                        }
                      }
                    }
                    goto LABEL_1835;
                  }
                  v1222 += 4096LL;
                  v1224 += 4096LL;
                  if ( v1224 == v1223 )
                  {
                    __writecr8(v1221);
                    v41 = v1973;
                    i9 = 0;
LABEL_1835:
                    v1232 = *(_QWORD *)(v19 + 1336);
                    v1233 = KeGetCurrentIrql();
                    __writecr8(0xFuLL);
                    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v19 + 352))(
                      v1232,
                      v1214,
                      v1215,
                      v1204);
                    v1234 = **(unsigned int ***)(v19 + 1568);
                    v1235 = v1234 + 4;
                    v1236 = *((_BYTE *)v1234 + 12);
                    v1237 = (unsigned __int64)&v1234[6 * *v1234 + 4];
                    do
                    {
                      v1238 = 24LL;
                      v1239 = v41 + 24;
                      v1240 = v1235;
                      do
                      {
                        v1241 = *(_QWORD *)v1240;
                        v1240 += 2;
                        v1242 = *(_QWORD *)v1239;
                        v1239 += 8;
                        if ( v1241 != v1242 )
                          goto LABEL_1843;
                        v1238 = (unsigned int)(v1238 - 8);
                      }
                      while ( (unsigned int)v1238 >= 8 );
                      if ( !(_DWORD)v1238 )
                        break;
                      while ( 1 )
                      {
                        v1243 = *(_BYTE *)v1240;
                        v1240 = (unsigned int *)((char *)v1240 + 1);
                        v1244 = *v1239++;
                        if ( v1243 != v1244 )
                          break;
                        v52 = (_DWORD)v1238 == 1;
                        v1238 = (unsigned int)(v1238 - 1);
                        if ( v52 )
                          goto LABEL_1844;
                      }
LABEL_1843:
                      v1235 += 6;
                    }
                    while ( (unsigned __int64)v1235 < v1237 );
LABEL_1844:
                    (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v19 + 416))(
                      *(_QWORD *)(v19 + 1336),
                      v1238,
                      v1239,
                      v1240);
                    __writecr8(v1233);
                    if ( !v1236 )
                      goto LABEL_1858;
                    v1245 = *(_DWORD *)(v19 + 2524);
                    if ( (v1245 & 0x10) != 0 && !*(_DWORD *)(v19 + 2328) )
                    {
                      *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v19 + 2352) = *(int *)v41;
                      *(_QWORD *)(v19 + 2360) = 1LL;
                      *(_DWORD *)(v19 + 2328) = 1;
                      v1246 = *(_DWORD *)(v19 + 2520);
                      if ( (v1246 & 0x20000000) == 0 && (v1245 & 0x200000) != 0 && (v1246 & 1) != 0 )
                      {
                        v1247 = *(unsigned int *)(v19 + 2676);
                        v1248 = *(_QWORD *)(v19 + 2104);
                        v1249 = *(_QWORD *)(v19 + 2680);
                        v1250 = (_QWORD *)(v1247 + v19);
                        v1251 = v1247
                              + v19
                              + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1247) >> 3);
                        while ( v1250 != (_QWORD *)v1251 )
                        {
                          *v1250 ^= v1249;
                          v1249 = ((v1248 ^ *v1250++) + __ROR8__(v1249, v1249 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                        if ( v1249 != *(_QWORD *)(v19 + 2688) )
                        {
                          v1252 = *(_DWORD *)(v19 + 2052);
                          v1253 = *(_QWORD *)(v19 + 1416);
                          *(_QWORD *)v1253 = v19;
                          *(_DWORD *)(v1253 + 16) = v1252;
                          if ( !*(_DWORD *)(v19 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1249 ^ *(_QWORD *)(v19 + 2688);
                          sub_140BC7384(v19, 0LL, v1249, 256LL);
                        }
                      }
                    }
                    if ( *((_QWORD *)v41 + 3) == 1LL )
                    {
                      v37 = 1;
                    }
                    else
                    {
LABEL_1858:
                      v52 = v1235 == (unsigned int *)v1237;
                      v37 = 1;
                      if ( v52 && !*(_DWORD *)(v19 + 2328) )
                      {
                        *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v19 + 2352) = *(int *)v41;
                        *(_QWORD *)(v19 + 2360) = v1235;
                        *(_DWORD *)(v19 + 2328) = 1;
                        v1254 = *(_DWORD *)(v19 + 2520);
                        if ( (v1254 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1254 & 1) != 0 )
                        {
                          v1255 = *(unsigned int *)(v19 + 2676);
                          v1256 = *(_QWORD *)(v19 + 2104);
                          v1257 = *(_QWORD *)(v19 + 2680);
                          v1258 = (_QWORD *)(v1255 + v19);
                          v1259 = v1255
                                + v19
                                + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1255) >> 3);
                          while ( v1258 != (_QWORD *)v1259 )
                          {
                            *v1258 ^= v1257;
                            v1257 = ((v1256 ^ *v1258++) + __ROR8__(v1257, v1257 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                          if ( v1257 != *(_QWORD *)(v19 + 2688) )
                          {
                            v1260 = *(_DWORD *)(v19 + 2052);
                            v1261 = *(_QWORD *)(v19 + 1416);
                            *(_QWORD *)v1261 = v19;
                            *(_DWORD *)(v1261 + 16) = v1260;
                            if ( !*(_DWORD *)(v19 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1257 ^ *(_QWORD *)(v19 + 2688);
                            sub_140BC7384(v19, 0LL, v1257, 256LL);
                          }
                        }
                      }
                    }
                    v1262 = *(_QWORD *)(v19 + 1336);
                    v1263 = KeGetCurrentIrql();
                    __writecr8(0xFuLL);
                    (*(void (__fastcall **)(__int64))(v19 + 352))(v1262);
                    v1264 = 0LL;
                    v1265 = **(unsigned int ***)(v19 + 1568);
                    v1266 = v1265 + 4;
                    v1267 = (unsigned __int64)&v1265[6 * *v1265 + 4];
                    while ( 1 )
                    {
                      v1266 += 6;
                      if ( (unsigned __int64)v1266 >= v1267 )
                        break;
                      v1268 = *((_QWORD *)v1266 + 1);
                      if ( v1268 < v1264 )
                        break;
                      if ( (v1268 & 0xFFFFFFFFFFFFF000uLL) != v1268 )
                        break;
                      v1269 = v1268 + v1266[4];
                      if ( v1269 <= v1268 || v1269 == v1264 )
                        break;
                      v1264 = v1268 + v1266[4];
                    }
                    (*(void (__fastcall **)(_QWORD))(v19 + 416))(*(_QWORD *)(v19 + 1336));
                    __writecr8(v1263);
                    if ( v1266 == (unsigned int *)v1267 )
                      goto LABEL_238;
                    if ( *(_DWORD *)(v19 + 2328) )
                      goto LABEL_238;
                    *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v19 + 2352) = *(int *)v41;
                    *(_QWORD *)(v19 + 2360) = v1266;
                    *(_DWORD *)(v19 + 2328) = 1;
                    v1270 = *(_DWORD *)(v19 + 2520);
                    if ( (v1270 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v1270 & 1) == 0 )
                      goto LABEL_238;
                    v1271 = *(unsigned int *)(v19 + 2676);
                    v1272 = *(_QWORD *)(v19 + 2104);
                    v336 = *(_QWORD *)(v19 + 2680);
                    v31 = v1271 + v19;
                    v1273 = v1271 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1271) >> 3);
                    while ( v31 != v1273 )
                    {
                      *(_QWORD *)v31 ^= v336;
                      v336 = ((v1272 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
                      v31 += 8LL;
                    }
LABEL_550:
                    *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                    if ( v336 == *(_QWORD *)(v19 + 2688) )
                      goto LABEL_238;
                    v338 = *(_DWORD *)(v19 + 2052);
                    v339 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v339 = v19;
                    *(_DWORD *)(v339 + 16) = v338;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v336 ^ *(_QWORD *)(v19 + 2688);
                    goto LABEL_766;
                  }
                }
              case '%':
                if ( (*(_DWORD *)(v19 + 2524) & 4) != 0 )
                  goto LABEL_238;
                if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64))(v19 + 1064))(
                        (unsigned int)(v63 - 37),
                        v31) )
                  goto LABEL_238;
                if ( *(_DWORD *)(v19 + 2328) )
                  goto LABEL_238;
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *(int *)v41;
                *(_QWORD *)(v19 + 2360) = 0LL;
                *(_DWORD *)(v19 + 2328) = 1;
                v1198 = *(_DWORD *)(v19 + 2520);
                if ( (v1198 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v1198 & 1) == 0 )
                  goto LABEL_238;
                v1199 = *(unsigned int *)(v19 + 2676);
                v1200 = *(_QWORD *)(v19 + 2104);
                v336 = *(_QWORD *)(v19 + 2680);
                v31 = v1199 + v19;
                v1201 = v1199 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1199) >> 3);
                while ( v31 != v1201 )
                {
                  *(_QWORD *)v31 ^= v336;
                  v336 = ((v1200 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
                  v31 += 8LL;
                }
                goto LABEL_763;
              case '&':
                (*(void (__fastcall **)(_BYTE *, _QWORD))(v19 + 432))(v2118, *((unsigned int *)v41 + 11));
                v1189 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v19 + 480))(v2118, v2132);
                __asm { xgetbv }
                v1191 = v1189 | (v1190 << 32);
                (*(void (__fastcall **)(_BYTE *))(v19 + 424))(v2132);
                v31 = *((_QWORD *)v41 + 4);
                v1192 = v1191 & *((_QWORD *)v41 + 3);
                if ( v1192 == v31 )
                  goto LABEL_238;
                v1193 = *((_QWORD *)v41 + 5);
                if ( *(_DWORD *)(v19 + 2328) )
                  goto LABEL_238;
                v31 ^= v1192;
                *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v31;
                if ( *(_DWORD *)(v19 + 2328) )
                  goto LABEL_238;
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *(int *)v41;
                *(_QWORD *)(v19 + 2360) = v1193;
                *(_DWORD *)(v19 + 2328) = 1;
                v1194 = *(_DWORD *)(v19 + 2520);
                if ( (v1194 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v1194 & 1) == 0 )
                  goto LABEL_238;
                v1195 = *(unsigned int *)(v19 + 2676);
                v1196 = *(_QWORD *)(v19 + 2104);
                v336 = *(_QWORD *)(v19 + 2680);
                v31 = v1195 + v19;
                v1197 = v1195 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1195) >> 3);
                while ( v31 != v1197 )
                {
                  *(_QWORD *)v31 ^= v336;
                  v336 = ((v1196 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
                  v31 += 8LL;
                }
                goto LABEL_550;
            }
            if ( v63 != 39 )
              goto LABEL_2253;
LABEL_1760:
            *(_DWORD *)(v19 + 2120) += *((_DWORD *)v41 + 9);
            v1177 = *((unsigned int *)v41 + 9);
            v1178 = (_QWORD *)(v19 + *((unsigned int *)v41 + 8));
            v1179 = *(_DWORD *)(v19 + 2100);
            v1180 = v1178;
            v1181 = *(_QWORD *)(v19 + 2104);
            v1182 = (const char *)v1178;
            if ( v1178 < (_QWORD *)((char *)v1178 + v1177) )
            {
              do
              {
                _mm_prefetch(v1182, 0);
                v1182 += 64;
              }
              while ( v1182 < (const char *)v1178 + v1177 );
            }
            v1183 = *(_QWORD *)(v19 + 2104);
            v1184 = (unsigned int)v1177 >> 7;
            if ( (unsigned int)v1177 >> 7 )
            {
              do
              {
                v1185 = 8LL;
                do
                {
                  v1186 = v1180[1] ^ __ROL8__(*v1180 ^ v1183, v1179);
                  v1180 += 2;
                  v1183 = __ROL8__(v1186, v1179);
                  --v1185;
                }
                while ( v1185 );
                v1187 = (__ROL8__(v1181 ^ ((char *)v1180 - (char *)v1178), 17) ^ v1181 ^ (unsigned __int64)((char *)v1180 - (char *)v1178))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2098 = *((_QWORD *)&v1187 + 1);
                v1188 = v1187 ^ BYTE8(v1187) ^ v1179;
                v31 = 0xFFFFFFFFLL;
                v1179 = v1188 & 0x3F;
                if ( !v1179 )
                  LOBYTE(v1179) = 1;
                --v1184;
              }
              while ( v1184 );
              v19 = (unsigned __int64)v1978;
            }
            else
            {
              v31 = 0xFFFFFFFFLL;
            }
            v1893 = v1177 & 0x7F;
            if ( v1893 >= 8 )
            {
              v1894 = (unsigned __int64)v1893 >> 3;
              do
              {
                v1183 = __ROL8__(*v1180++ ^ v1183, v1179);
                v1893 -= 8;
                --v1894;
              }
              while ( v1894 );
            }
            for ( ; v1893; --v1893 )
            {
              v1895 = *(unsigned __int8 *)v1180;
              v1180 = (_QWORD *)((char *)v1180 + 1);
              v1183 = __ROL8__(v1895 ^ v1183, v1179);
            }
            v1896 = *((_QWORD *)v41 + 3);
            if ( v1183 == v1896 )
              goto LABEL_238;
            if ( !*(_DWORD *)(v19 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1183 ^ v1896;
            v1897 = v19 + *((unsigned int *)v41 + 8);
            if ( *(_DWORD *)(v19 + 2328) )
              goto LABEL_238;
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *(int *)v41;
            *(_QWORD *)(v19 + 2360) = v1897;
            *(_DWORD *)(v19 + 2328) = 1;
            v1898 = *(_DWORD *)(v19 + 2520);
            if ( (v1898 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v1898 & 1) == 0 )
              goto LABEL_238;
            v1899 = *(unsigned int *)(v19 + 2676);
            v1900 = *(_QWORD *)(v19 + 2104);
            v336 = *(_QWORD *)(v19 + 2680);
            v31 = v1899 + v19;
            v1901 = v1899 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1899) >> 3);
            while ( v31 != v1901 )
            {
              *(_QWORD *)v31 ^= v336;
              v336 = ((v1900 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
              v31 += 8LL;
            }
            goto LABEL_550;
          }
          v1274 = (_QWORD *)*((_QWORD *)v41 + 1);
          v1275 = *((unsigned int *)v41 + 4);
          v1276 = v1274;
          *(_DWORD *)(v19 + 2120) += v1275;
          v1277 = (const char *)v1274;
          v1278 = *(_DWORD *)(v19 + 2100);
          v1279 = *(_QWORD *)(v19 + 2104);
          if ( v1274 < (_QWORD *)((char *)v1274 + v1275) )
          {
            do
            {
              _mm_prefetch(v1277, 0);
              v1277 += 64;
            }
            while ( v1277 < (const char *)v1274 + v1275 );
          }
          v1280 = *(_QWORD *)(v19 + 2104);
          v1281 = (unsigned int)v1275 >> 7;
          if ( (unsigned int)v1275 >> 7 )
          {
            do
            {
              v1282 = 8LL;
              do
              {
                v1283 = v1276[1] ^ __ROL8__(*v1276 ^ v1280, v1278);
                v1276 += 2;
                v1280 = __ROL8__(v1283, v1278);
                --v1282;
              }
              while ( v1282 );
              v1284 = __ROL8__(v1279 ^ ((char *)v1276 - (char *)v1274), 17) ^ v1279 ^ ((char *)v1276 - (char *)v1274);
              v2089 = (v1284 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v31 = 0xFFFFFFFFLL;
              v1278 = ((unsigned __int8)(v2089 ^ v1284) ^ (unsigned __int8)v1278) & 0x3F;
              if ( !v1278 )
                LOBYTE(v1278) = 1;
              --v1281;
            }
            while ( v1281 );
            v19 = (unsigned __int64)v1978;
          }
          else
          {
            v31 = 0xFFFFFFFFLL;
          }
          v1285 = v1275 & 0x7F;
          if ( v1285 >= 8 )
          {
            v1286 = (unsigned __int64)v1285 >> 3;
            do
            {
              v1280 = __ROL8__(*v1276++ ^ v1280, v1278);
              v1285 -= 8;
              --v1286;
            }
            while ( v1286 );
          }
          for ( ; v1285; --v1285 )
          {
            v1287 = *(unsigned __int8 *)v1276;
            v1276 = (_QWORD *)((char *)v1276 + 1);
            v1280 = __ROL8__(v1287 ^ v1280, v1278);
          }
          for ( j = v1280; ; LODWORD(v1280) = j ^ v1280 )
          {
            j >>= 31;
            if ( !j )
              break;
          }
          v1289 = v1280 & 0x7FFFFFFF;
          v1290 = 0;
          if ( v1289 == *((_DWORD *)v41 + 5) )
          {
LABEL_1919:
            v37 = 1;
          }
          else
          {
            if ( !*(_DWORD *)v41 )
              v1290 = *((_DWORD *)v41 + 6) != 0;
            v31 = *((_QWORD *)v41 + 1);
            if ( *((_DWORD *)v41 + 4) )
            {
              v1291 = 64LL;
              if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
              {
                v1292 = KeGetCurrentIrql();
                v1293 = v31 & 0xFFFFFFFFFFFFF000uLL;
                v1294 = (v31 + *((unsigned int *)v41 + 4) - 1LL) | 0xFFF;
                v1295 = (v31 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v1296 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                              v1293,
                              0LL,
                              v1291,
                              v1276);
                    if ( v1296 == -1073741267 )
                      break;
                    if ( v1296 < 0 )
                    {
LABEL_1930:
                      __writecr8(v1292);
                      v41 = v1973;
                      i9 = 0;
                      goto LABEL_1931;
                    }
LABEL_1917:
                    v1293 += 4096LL;
                    v1295 += 4096LL;
                    if ( v1295 == v1294 )
                    {
                      __writecr8(v1292);
                      v41 = v1973;
                      i9 = 0;
                      goto LABEL_1919;
                    }
                  }
                  if ( v1290 )
                    goto LABEL_1930;
                  if ( v1292 > 1u )
                    goto LABEL_1917;
                  __writecr8(v1292);
                }
              }
            }
LABEL_1931:
            if ( !*(_DWORD *)(v19 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = *((unsigned int *)v41 + 5) ^ (unsigned __int64)v1289;
            v1307 = *((_QWORD *)v41 + 1);
            v37 = 1;
            if ( !*(_DWORD *)(v19 + 2328) )
            {
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *(int *)v41;
              *(_QWORD *)(v19 + 2360) = v1307;
              *(_DWORD *)(v19 + 2328) = 1;
              v1308 = *(_DWORD *)(v19 + 2520);
              if ( (v1308 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1308 & 1) != 0 )
              {
                v1309 = *(unsigned int *)(v19 + 2676);
                v1310 = *(_QWORD *)(v19 + 2104);
                v1311 = *(_QWORD *)(v19 + 2680);
                v31 = v1309 + v19;
                v1312 = v1309 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1309) >> 3);
                while ( v31 != v1312 )
                {
                  *(_QWORD *)v31 ^= v1311;
                  v1311 = ((v1310 ^ *(_QWORD *)v31) + __ROR8__(v1311, v1311 & 0x3F)) ^ 0xEFA;
                  v31 += 8LL;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v1311 != *(_QWORD *)(v19 + 2688) )
                {
                  v1313 = *(_DWORD *)(v19 + 2052);
                  v1314 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v1314 = v19;
                  *(_DWORD *)(v1314 + 16) = v1313;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1311 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v1311, 256LL);
                }
              }
            }
          }
          v1297 = *((_DWORD *)v41 + 10);
          if ( (v1297 & 2) == 0 )
            goto LABEL_238;
          v1298 = *((_QWORD *)v41 + 1);
          if ( (v1297 & 4) != 0 )
          {
            v31 = *((_QWORD *)v41 + 3);
            v1299 = **(_QWORD **)(v1298 + 112);
            if ( v1299 != v31 )
            {
              v1300 = *(_QWORD *)(v19 + 1416);
              *(_QWORD *)v1300 = v1299;
              *(_DWORD *)(v1300 + 16) = 256;
              if ( !*(_DWORD *)(v19 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v31 ^ v1299;
              v1301 = *(_QWORD *)(v1298 + 112);
              if ( !*(_DWORD *)(v19 + 2328) )
              {
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *(int *)v41;
                *(_QWORD *)(v19 + 2360) = v1301;
                *(_DWORD *)(v19 + 2328) = 1;
                v1302 = *(_DWORD *)(v19 + 2520);
                if ( (v1302 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1302 & 1) != 0 )
                {
                  v1303 = *(unsigned int *)(v19 + 2676);
                  v1304 = *(_QWORD *)(v19 + 2104);
                  v1305 = *(_QWORD *)(v19 + 2680);
                  v31 = v1303 + v19;
                  v1306 = v1303 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1303) >> 3);
                  while ( v31 != v1306 )
                  {
                    *(_QWORD *)v31 ^= v1305;
                    v1305 = ((v1304 ^ *(_QWORD *)v31) + __ROR8__(v1305, v1305 & 0x3F)) ^ 0xEFA;
                    v31 += 8LL;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v1305 != *(_QWORD *)(v19 + 2688) )
                  {
                    v1315 = *(_DWORD *)(v19 + 2052);
                    v1316 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v1316 = v19;
                    *(_DWORD *)(v1316 + 16) = v1315;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1305 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v1305, 256LL);
                  }
                }
              }
            }
          }
          if ( (*((_DWORD *)v41 + 10) & 8) == 0 )
            goto LABEL_238;
          v31 = *((_QWORD *)v41 + 4);
          v1317 = **(_QWORD **)(v1298 + 120);
          if ( v1317 == v31 )
            goto LABEL_238;
          v1318 = *(_QWORD *)(v19 + 1416);
          *(_QWORD *)v1318 = v1317;
          *(_DWORD *)(v1318 + 16) = 256;
          if ( !*(_DWORD *)(v19 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v31 ^ v1317;
          v1319 = *(_QWORD *)(v1298 + 120);
          if ( *(_DWORD *)(v19 + 2328) )
            goto LABEL_238;
          *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v19 + 2352) = *(int *)v41;
          *(_QWORD *)(v19 + 2360) = v1319;
          *(_DWORD *)(v19 + 2328) = 1;
          v1320 = *(_DWORD *)(v19 + 2520);
          if ( (v1320 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v1320 & 1) == 0 )
            goto LABEL_238;
          v1321 = *(unsigned int *)(v19 + 2676);
          v1322 = *(_QWORD *)(v19 + 2104);
          v336 = *(_QWORD *)(v19 + 2680);
          v31 = v1321 + v19;
          v1323 = v1321 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1321) >> 3);
          while ( v31 != v1323 )
          {
            *(_QWORD *)v31 ^= v336;
            v336 = ((v1322 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
            v31 += 8LL;
          }
          goto LABEL_550;
        }
        if ( (*(_DWORD *)(v19 + 2128) & 1) == 0 )
          goto LABEL_238;
        if ( !*(_QWORD *)(*(_QWORD *)(v19 + 1384) + 32LL) )
          goto LABEL_1966;
        v1325 = *(unsigned int *)(v19 + 2492);
        if ( (_DWORD)v1325 == -1 )
        {
          *(_DWORD *)(v19 + 2492) = 0;
          v1325 = 0LL;
        }
        v1326 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v19 + 648))(v1325, v31);
        if ( v1326 || (v1326 = (*(__int64 (__fastcall **)(_QWORD))(v19 + 656))(0LL)) != 0 )
        {
          while ( (*(int (__fastcall **)(__int64, unsigned __int64))(v19 + 672))(v1326, v19 + 2440) < 0 )
          {
            v1326 = (*(__int64 (__fastcall **)(__int64))(v19 + 656))(v1326);
            if ( !v1326 )
            {
              *(_DWORD *)(v19 + 2492) = -1;
              goto LABEL_1966;
            }
          }
          v1327 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(v19 + 976))(26LL, &v2049, 0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(v19 + 680))(v1326, v19 + 2440);
          v1328 = (*(__int64 (__fastcall **)(__int64))(v19 + 656))(v1326);
          if ( v1328 )
          {
            *(_DWORD *)(v19 + 2492) = (*(__int64 (__fastcall **)(__int64))(v19 + 688))(v1328);
            (*(void (__fastcall **)(__int64))(v19 + 664))(v1328);
          }
          else
          {
            *(_DWORD *)(v19 + 2492) = -1;
          }
          v1324 = v2049;
          if ( v1327 < 0 )
            v1324 = 0LL;
        }
        else
        {
LABEL_1966:
          v1324 = 0LL;
        }
        v1980 = v1324;
        v1329 = 0;
        v1974 = 0;
        v1330 = 0LL;
        while ( 2 )
        {
          v1454 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v19 + 944))(v1330, v31);
          v1984 = (_DWORD *)v1454;
          v1358 = v1454;
          if ( !v1454 )
          {
            v1455 = *(_QWORD *)(v19 + 1240);
            if ( (*(int (__fastcall **)(__int64))(v19 + 928))(v1455) >= 0 )
            {
              v1456 = (*(unsigned __int8 (__fastcall **)(__int64))(v19 + 992))(v1455);
              v1457 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(v19 + 1000))(v1455, &v1987);
              v1975 = (*(__int64 (__fastcall **)(__int64))(v19 + 1008))(v1455);
              if ( (_BYTE)v1456 == 114 )
                goto LABEL_2171;
              if ( *(_DWORD *)(v19 + 2328) )
                goto LABEL_2171;
              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = (unsigned int)v1456 ^ 0x72LL;
              if ( *(_DWORD *)(v19 + 2328) )
                goto LABEL_2171;
              v1458 = (int *)v1973;
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = (char *)v1458 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *v1458;
              *(_QWORD *)(v19 + 2360) = v1455;
              *(_DWORD *)(v19 + 2328) = 1;
              v1459 = *(_DWORD *)(v19 + 2520);
              if ( (v1459 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1459 & 1) != 0 )
              {
                v1460 = *(unsigned int *)(v19 + 2676);
                v1461 = *(_QWORD *)(v19 + 2104);
                v1462 = *(_QWORD *)(v19 + 2680);
                v1463 = (_QWORD *)(v1460 + v19);
                v1464 = v1460 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1460) >> 3);
                while ( v1463 != (_QWORD *)v1464 )
                {
                  *v1463 ^= v1462;
                  v1462 = ((v1461 ^ *v1463++) + __ROR8__(v1462, v1462 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v1462 != *(_QWORD *)(v19 + 2688) )
                {
                  v1465 = *(_DWORD *)(v19 + 2052);
                  v1466 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v1466 = v19;
                  *(_DWORD *)(v1466 + 16) = v1465;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1462 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v1462, 256LL);
                }
LABEL_2171:
                v1458 = (int *)v1973;
              }
              v1467 = 0;
              v1468 = 0;
              if ( (v1456 & 7) == 1 )
              {
                v1467 = 48;
                goto LABEL_2188;
              }
              if ( (v1456 & 7) == 2 )
              {
                v1467 = 16;
                v1468 = 16;
                goto LABEL_2188;
              }
              if ( (v1456 & 7) == 0 || *(_DWORD *)(v19 + 2328) )
              {
LABEL_2188:
                v1469 = 1LL;
              }
              else
              {
                v1469 = 1LL;
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = (char *)v1458 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *v1458;
                *(_QWORD *)(v19 + 2360) = v1455;
                *(_DWORD *)(v19 + 2328) = 1;
                v1470 = *(_DWORD *)(v19 + 2520);
                if ( (v1470 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1470 & 1) != 0 )
                {
                  v1471 = *(unsigned int *)(v19 + 2676);
                  v1472 = *(_QWORD *)(v19 + 2104);
                  v1473 = *(_QWORD *)(v19 + 2680);
                  v1474 = (_QWORD *)(v1471 + v19);
                  v1475 = v1471 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1471) >> 3);
                  while ( v1474 != (_QWORD *)v1475 )
                  {
                    *v1474 ^= v1473;
                    v1473 = ((v1472 ^ *v1474++) + __ROR8__(v1473, v1473 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v1473 != *(_QWORD *)(v19 + 2688) )
                  {
                    v1476 = *(_DWORD *)(v19 + 2052);
                    v1477 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v1477 = v19;
                    *(_DWORD *)(v1477 + 16) = v1476;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1473 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v1473, 256LL);
                  }
                  goto LABEL_2188;
                }
              }
              v1478 = *(_QWORD *)(v19 + 1472);
              v1479 = 0xA3A03F5891C8B4E8uLL;
              v1480 = (int *)v1973;
              v1481 = v1456 >> 4;
              if ( (*(_BYTE *)(v1478 + 2 * v1481) | (unsigned __int8)v1467) != (_BYTE)v1457 && !*(_DWORD *)(v19 + 2328) )
              {
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = (char *)v1480 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *v1480;
                *(_QWORD *)(v19 + 2360) = v1455;
                *(_DWORD *)(v19 + 2328) = 1;
                v1482 = *(_DWORD *)(v19 + 2520);
                if ( (v1482 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1482 & 1) != 0 )
                {
                  v1483 = *(unsigned int *)(v19 + 2676);
                  v1484 = *(_QWORD *)(v19 + 2104);
                  v1469 = *(_QWORD *)(v19 + 2680);
                  v1485 = (_QWORD *)(v1483 + v19);
                  v1486 = v1483 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1483) >> 3);
                  while ( v1485 != (_QWORD *)v1486 )
                  {
                    *v1485 ^= v1469;
                    v1469 = ((v1484 ^ *v1485++) + __ROR8__(v1469, v1469 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v1469 != *(_QWORD *)(v19 + 2688) )
                  {
                    v1487 = *(_DWORD *)(v19 + 2052);
                    v1488 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v1488 = v19;
                    *(_DWORD *)(v1488 + 16) = v1487;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1469 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v1469, 256LL);
                  }
                  v1480 = (int *)v1973;
                  v1479 = 0xA3A03F5891C8B4E8uLL;
                }
              }
              v52 = (*(_BYTE *)(v1478 + 2 * v1481 + 1) | (unsigned __int8)v1468) == v1987;
              v37 = 1;
              if ( !v52 && !*(_DWORD *)(v19 + 2328) )
              {
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = (char *)v1480 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *v1480;
                *(_QWORD *)(v19 + 2360) = v1455;
                *(_DWORD *)(v19 + 2328) = 1;
                v1489 = *(_DWORD *)(v19 + 2520);
                if ( (v1489 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1489 & 1) != 0 )
                {
                  v1490 = *(unsigned int *)(v19 + 2676);
                  v1491 = *(_QWORD *)(v19 + 2104);
                  v1469 = *(_QWORD *)(v19 + 2680);
                  v1480 = (int *)(v1490 + v19);
                  v1479 = v1490 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1490) >> 3);
                  while ( v1480 != (int *)v1479 )
                  {
                    *(_QWORD *)v1480 ^= v1469;
                    v1469 = ((v1491 ^ *(_QWORD *)v1480) + __ROR8__(v1469, v1469 & 0x3F)) ^ 0xEFA;
                    v1480 += 2;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v1469 != *(_QWORD *)(v19 + 2688) )
                  {
                    v1492 = *(_DWORD *)(v19 + 2052);
                    v1493 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v1493 = v19;
                    *(_DWORD *)(v1493 + 16) = v1492;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1469 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v1469, 256LL);
                  }
                }
              }
              if ( v1455 != *(_QWORD *)(v19 + 1240) )
              {
                v1494 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v19 + 984))(
                                              v1455,
                                              1LL,
                                              v1469,
                                              v1479);
                v1495 = v1494;
                if ( v1494 )
                {
                  v1496 = *v1494;
                  v1497 = v1494;
                  if ( *v1494 )
                  {
                    v1498 = v1975;
                    v1499 = v1973;
                    v1983 = (unsigned __int64)v1494;
                    do
                    {
                      *v1495 = v1496 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v19 + 496))();
                      v1500 = v1987;
                      v1501 = v1495[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v1501 == v1498 )
                        v1500 = v1457;
                      v1502 = v1495[1] >> 6;
                      LOBYTE(v1502) = v1502 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v19 + 1016))(v1502, v1500) )
                      {
                        if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
                        {
                          v1503 = *(_QWORD **)(v19 + 2760);
                          v1504 = 48;
                          v1505 = 6LL;
                          do
                          {
                            v1504 -= 8;
                            *v1503 = *(_QWORD *)v1499;
                            v1499 += 8;
                            ++v1503;
                            --v1505;
                          }
                          while ( v1505 );
                          if ( v1504 )
                          {
                            do
                            {
                              v1506 = *v1499++;
                              *(_BYTE *)v1503 = v1506;
                              v1503 = (_QWORD *)((char *)v1503 + 1);
                              --v1504;
                            }
                            while ( v1504 );
                            v1498 = v1975;
                          }
                          v1499 = *(char **)(v19 + 2760);
                        }
                        *((_QWORD *)v1499 + 3) = v1501;
                        *((_QWORD *)v1499 + 4) = *v1495;
                        v1499[40] = ((unsigned __int64)*((unsigned int *)v1495 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v19 + 2328) )
                        {
                          *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v19 + 2344) = v1499 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v19 + 2352) = *(int *)v1499;
                          *(_QWORD *)(v19 + 2360) = v1455;
                          *(_DWORD *)(v19 + 2328) = 1;
                          v1507 = *(_DWORD *)(v19 + 2520);
                          if ( (v1507 & 0x20000000) == 0
                            && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0
                            && (v1507 & 1) != 0 )
                          {
                            v1508 = *(unsigned int *)(v19 + 2676);
                            v1509 = *(_QWORD *)(v19 + 2104);
                            v1510 = *(_QWORD *)(v19 + 2680);
                            v1511 = (_QWORD *)(v1508 + v19);
                            v1512 = v1508
                                  + v19
                                  + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1508) >> 3);
                            while ( v1511 != (_QWORD *)v1512 )
                            {
                              *v1511 ^= v1510;
                              v1510 = ((v1509 ^ *v1511++) + __ROR8__(v1510, v1510 & 0x3F)) ^ 0xEFA;
                            }
                            *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                            if ( v1510 != *(_QWORD *)(v19 + 2688) )
                            {
                              v1513 = *(_DWORD *)(v19 + 2052);
                              v1514 = *(_QWORD *)(v19 + 1416);
                              *(_QWORD *)v1514 = v19;
                              *(_DWORD *)(v1514 + 16) = v1513;
                              if ( !*(_DWORD *)(v19 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1510 ^ *(_QWORD *)(v19 + 2688);
                              sub_140BC7384(v19, 0LL, v1510, 256LL);
                            }
                          }
                        }
                      }
                      v1495 += 6;
                      v1496 = *v1495;
                    }
                    while ( *v1495 );
                    v1497 = (_QWORD *)v1983;
                    v37 = 1;
                  }
                  (*(void (__fastcall **)(_QWORD *))(v19 + 264))(v1497);
                }
              }
              (*(void (__fastcall **)(__int64, int *, __int64, unsigned __int64))(v19 + 936))(
                v1455,
                v1480,
                v1469,
                v1479);
              v1329 = v1974;
              *(_DWORD *)(v19 + 2120) += 0x8000;
            }
            i9 = 0;
            if ( v1980 )
              (*(void (**)(void))(v19 + 496))();
            *(_DWORD *)(v19 + 2120) += v1329 << 8;
            goto LABEL_238;
          }
          if ( v1324 == v1454 )
          {
            v1331 = v41;
            if ( (*(int (__fastcall **)(__int64))(v19 + 928))(v1454) >= 0 )
            {
              v1332 = (*(unsigned __int8 (__fastcall **)(__int64))(v19 + 992))(v1358);
              v1333 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(v19 + 1000))(v1358, &v1985);
              v1975 = (*(__int64 (__fastcall **)(__int64))(v19 + 1008))(v1358);
              if ( (_BYTE)v1332 == 97 )
                goto LABEL_1996;
              if ( *(_DWORD *)(v19 + 2328) )
                goto LABEL_1996;
              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = (unsigned int)v1332 ^ 0x61LL;
              if ( *(_DWORD *)(v19 + 2328) )
                goto LABEL_1996;
              v1334 = (int *)v1973;
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = (char *)v1334 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *v1334;
              *(_QWORD *)(v19 + 2360) = v1358;
              *(_DWORD *)(v19 + 2328) = 1;
              v1335 = *(_DWORD *)(v19 + 2520);
              if ( (v1335 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1335 & 1) != 0 )
              {
                v1336 = *(unsigned int *)(v19 + 2676);
                v1337 = *(_QWORD *)(v19 + 2104);
                v1338 = *(_QWORD *)(v19 + 2680);
                v1339 = (_QWORD *)(v1336 + v19);
                v1340 = v1336 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1336) >> 3);
                while ( v1339 != (_QWORD *)v1340 )
                {
                  *v1339 ^= v1338;
                  v1338 = ((v1337 ^ *v1339++) + __ROR8__(v1338, v1338 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v1338 != *(_QWORD *)(v19 + 2688) )
                {
                  v1341 = *(_QWORD *)(v19 + 1416);
                  v1342 = *(_DWORD *)(v19 + 2052);
                  *(_QWORD *)v1341 = v19;
                  *(_DWORD *)(v1341 + 16) = v1342;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = *(_QWORD *)(v19 + 2688) ^ v1338;
                  sub_140BC7384(v19, 0LL, v1338, 256LL);
                }
LABEL_1996:
                v1334 = (int *)v1973;
              }
              v1343 = 0;
              v1344 = 0;
              if ( (v1332 & 7) == 1 )
              {
                v1343 = 48;
                goto LABEL_2013;
              }
              if ( (v1332 & 7) == 2 )
              {
                v1343 = 16;
                v1344 = 16;
                goto LABEL_2013;
              }
              if ( (v1332 & 7) == 0 || *(_DWORD *)(v19 + 2328) )
              {
LABEL_2013:
                v1345 = 1LL;
              }
              else
              {
                v1345 = 1LL;
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = (char *)v1334 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *v1334;
                *(_QWORD *)(v19 + 2360) = v1984;
                *(_DWORD *)(v19 + 2328) = 1;
                v1346 = *(_DWORD *)(v19 + 2520);
                if ( (v1346 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1346 & 1) != 0 )
                {
                  v1347 = *(unsigned int *)(v19 + 2676);
                  v1348 = *(_QWORD *)(v19 + 2104);
                  v1349 = *(_QWORD *)(v19 + 2680);
                  v1350 = (_QWORD *)(v1347 + v19);
                  v1351 = v1347 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1347) >> 3);
                  while ( v1350 != (_QWORD *)v1351 )
                  {
                    *v1350 ^= v1349;
                    v1349 = ((v1348 ^ *v1350++) + __ROR8__(v1349, v1349 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v1349 != *(_QWORD *)(v19 + 2688) )
                  {
                    v1352 = *(_DWORD *)(v19 + 2052);
                    v1353 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v1353 = v19;
                    *(_DWORD *)(v1353 + 16) = v1352;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1349 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v1349, 256LL);
                  }
                  goto LABEL_2013;
                }
              }
              v1354 = *(_QWORD *)(v19 + 1472);
              v1355 = 0xA3A03F5891C8B4E8uLL;
              v1356 = (int *)v1973;
              v1357 = v1332 >> 4;
              v52 = (*(_BYTE *)(v1354 + 2 * v1357) | (unsigned __int8)v1343) == (_BYTE)v1333;
              v1358 = (__int64)v1984;
              if ( !v52 && !*(_DWORD *)(v19 + 2328) )
              {
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = (char *)v1356 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *v1356;
                *(_QWORD *)(v19 + 2360) = v1358;
                *(_DWORD *)(v19 + 2328) = 1;
                v1359 = *(_DWORD *)(v19 + 2520);
                if ( (v1359 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1359 & 1) != 0 )
                {
                  v1360 = *(unsigned int *)(v19 + 2676);
                  v1361 = *(_QWORD *)(v19 + 2104);
                  v1345 = *(_QWORD *)(v19 + 2680);
                  v1362 = (_QWORD *)(v1360 + v19);
                  v1363 = v1360 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1360) >> 3);
                  while ( v1362 != (_QWORD *)v1363 )
                  {
                    *v1362 ^= v1345;
                    v1345 = ((v1361 ^ *v1362++) + __ROR8__(v1345, v1345 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v1345 != *(_QWORD *)(v19 + 2688) )
                  {
                    v1364 = *(_DWORD *)(v19 + 2052);
                    v1365 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v1365 = v19;
                    *(_DWORD *)(v1365 + 16) = v1364;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1345 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v1345, 256LL);
                  }
                  v1356 = (int *)v1973;
                  v1355 = 0xA3A03F5891C8B4E8uLL;
                }
              }
              if ( (*(_BYTE *)(v1354 + 2 * v1357 + 1) | (unsigned __int8)v1344) == v1985 || *(_DWORD *)(v19 + 2328) )
              {
LABEL_2039:
                v1367 = 1LL;
              }
              else
              {
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = (char *)v1356 - 0x4C48B4211BBACBEBLL;
                v1366 = *v1356;
                v1367 = 1LL;
                *(_QWORD *)(v19 + 2352) = v1366;
                *(_QWORD *)(v19 + 2360) = v1358;
                *(_DWORD *)(v19 + 2328) = 1;
                v1368 = *(_DWORD *)(v19 + 2520);
                if ( (v1368 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1368 & 1) != 0 )
                {
                  v1369 = *(unsigned int *)(v19 + 2676);
                  v1370 = *(_QWORD *)(v19 + 2104);
                  v1345 = *(_QWORD *)(v19 + 2680);
                  v1371 = (_QWORD *)(v1369 + v19);
                  v1355 = v1369 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1369) >> 3);
                  while ( v1371 != (_QWORD *)v1355 )
                  {
                    *v1371 ^= v1345;
                    v1345 = ((v1370 ^ *v1371++) + __ROR8__(v1345, v1345 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v1345 != *(_QWORD *)(v19 + 2688) )
                  {
                    v1372 = *(_DWORD *)(v19 + 2052);
                    v1373 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v1373 = v19;
                    *(_DWORD *)(v1373 + 16) = v1372;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1345 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v1345, 256LL);
                  }
                  goto LABEL_2039;
                }
              }
              if ( v1358 != *(_QWORD *)(v19 + 1240) )
              {
                v1374 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v19 + 984))(
                                              v1358,
                                              1LL,
                                              v1345,
                                              v1355);
                v1375 = v1374;
                if ( v1374 )
                {
                  v1376 = *v1374;
                  v1377 = v1374;
                  if ( *v1374 )
                  {
                    v1378 = v1975;
                    v1379 = v1984;
                    v1983 = (unsigned __int64)v1374;
                    do
                    {
                      *v1375 = v1376 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v19 + 496))();
                      v1380 = v1985;
                      v1381 = v1375[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v1381 == v1378 )
                        v1380 = v1333;
                      v1382 = v1375[1] >> 6;
                      LOBYTE(v1382) = v1382 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v19 + 1016))(v1382, v1380) )
                      {
                        if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
                        {
                          v1383 = *(_QWORD **)(v19 + 2760);
                          v1384 = 48;
                          v1385 = 6LL;
                          do
                          {
                            v1384 -= 8;
                            *v1383 = *(_QWORD *)v1331;
                            v1331 += 8;
                            ++v1383;
                            --v1385;
                          }
                          while ( v1385 );
                          if ( v1384 )
                          {
                            do
                            {
                              v1386 = *v1331++;
                              *(_BYTE *)v1383 = v1386;
                              v1383 = (_QWORD *)((char *)v1383 + 1);
                              --v1384;
                            }
                            while ( v1384 );
                            v1378 = v1975;
                          }
                          v1331 = *(char **)(v19 + 2760);
                        }
                        *((_QWORD *)v1331 + 3) = v1381;
                        *((_QWORD *)v1331 + 4) = *v1375;
                        v1331[40] = ((unsigned __int64)*((unsigned int *)v1375 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v19 + 2328) )
                        {
                          *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v19 + 2344) = v1331 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v19 + 2352) = *(int *)v1331;
                          *(_QWORD *)(v19 + 2360) = v1379;
                          *(_DWORD *)(v19 + 2328) = 1;
                          v1387 = *(_DWORD *)(v19 + 2520);
                          if ( (v1387 & 0x20000000) == 0
                            && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0
                            && (v1387 & 1) != 0 )
                          {
                            v1388 = *(unsigned int *)(v19 + 2676);
                            v1389 = *(_QWORD *)(v19 + 2104);
                            v1390 = *(_QWORD *)(v19 + 2680);
                            v1391 = (_QWORD *)(v1388 + v19);
                            v1392 = v1388
                                  + v19
                                  + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1388) >> 3);
                            while ( v1391 != (_QWORD *)v1392 )
                            {
                              *v1391 ^= v1390;
                              v1390 = ((v1389 ^ *v1391++) + __ROR8__(v1390, v1390 & 0x3F)) ^ 0xEFA;
                            }
                            *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                            if ( v1390 != *(_QWORD *)(v19 + 2688) )
                            {
                              v1393 = *(_DWORD *)(v19 + 2052);
                              v1394 = *(_QWORD *)(v19 + 1416);
                              *(_QWORD *)v1394 = v19;
                              *(_DWORD *)(v1394 + 16) = v1393;
                              if ( !*(_DWORD *)(v19 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1390 ^ *(_QWORD *)(v19 + 2688);
                              sub_140BC7384(v19, 0LL, v1390, 256LL);
                            }
                          }
                        }
                      }
                      v1375 += 6;
                      v1376 = *v1375;
                    }
                    while ( *v1375 );
                    goto LABEL_2152;
                  }
                  goto LABEL_2153;
                }
              }
              goto LABEL_2154;
            }
            goto LABEL_2155;
          }
          if ( !(*(unsigned int (__fastcall **)(__int64))(v19 + 968))(v1454) )
            goto LABEL_2155;
          v1395 = v41;
          if ( (*(int (__fastcall **)(__int64))(v19 + 928))(v1358) < 0 )
            goto LABEL_2155;
          v1396 = (*(unsigned __int8 (__fastcall **)(__int64))(v19 + 992))(v1358);
          v1397 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(v19 + 1000))(v1358, &v1986);
          v1975 = (*(__int64 (__fastcall **)(__int64))(v19 + 1008))(v1358);
          if ( (_BYTE)v1396 == 97
            || *(_DWORD *)(v19 + 2328)
            || (*(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = (unsigned int)v1396 ^ 0x61LL, *(_DWORD *)(v19 + 2328)) )
          {
LABEL_2082:
            v1398 = (int *)v1973;
          }
          else
          {
            v1398 = (int *)v1973;
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = (char *)v1398 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *v1398;
            *(_QWORD *)(v19 + 2360) = v1358;
            *(_DWORD *)(v19 + 2328) = 1;
            v1399 = *(_DWORD *)(v19 + 2520);
            if ( (v1399 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1399 & 1) != 0 )
            {
              v1400 = *(unsigned int *)(v19 + 2676);
              v1401 = *(_QWORD *)(v19 + 2104);
              v1402 = *(_QWORD *)(v19 + 2680);
              v1403 = (_QWORD *)(v1400 + v19);
              v1404 = v1400 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1400) >> 3);
              while ( v1403 != (_QWORD *)v1404 )
              {
                *v1403 ^= v1402;
                v1402 = ((v1401 ^ *v1403++) + __ROR8__(v1402, v1402 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v19 + 2524) &= ~0x200000u;
              if ( v1402 != *(_QWORD *)(v19 + 2688) )
              {
                v1405 = *(_DWORD *)(v19 + 2052);
                v1406 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v1406 = v19;
                *(_DWORD *)(v1406 + 16) = v1405;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1402 ^ *(_QWORD *)(v19 + 2688);
                sub_140BC7384(v19, 0LL, v1402, 256LL);
              }
              goto LABEL_2082;
            }
          }
          v1407 = 0;
          v1408 = 0;
          if ( (v1396 & 7) == 1 )
          {
            v1407 = 48;
            goto LABEL_2099;
          }
          if ( (v1396 & 7) == 2 )
          {
            v1407 = 16;
            v1408 = 16;
            goto LABEL_2099;
          }
          if ( (v1396 & 7) == 0 || *(_DWORD *)(v19 + 2328) )
          {
LABEL_2099:
            v1345 = 1LL;
          }
          else
          {
            v1345 = 1LL;
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = (char *)v1398 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *v1398;
            *(_QWORD *)(v19 + 2360) = v1984;
            *(_DWORD *)(v19 + 2328) = 1;
            v1409 = *(_DWORD *)(v19 + 2520);
            if ( (v1409 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1409 & 1) != 0 )
            {
              v1410 = *(unsigned int *)(v19 + 2676);
              v1411 = *(_QWORD *)(v19 + 2104);
              v1412 = *(_QWORD *)(v19 + 2680);
              v1413 = (_QWORD *)(v1410 + v19);
              v1414 = v1410 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1410) >> 3);
              while ( v1413 != (_QWORD *)v1414 )
              {
                *v1413 ^= v1412;
                v1412 = ((v1411 ^ *v1413++) + __ROR8__(v1412, v1412 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v19 + 2524) &= ~0x200000u;
              if ( v1412 != *(_QWORD *)(v19 + 2688) )
              {
                v1415 = *(_DWORD *)(v19 + 2052);
                v1416 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v1416 = v19;
                *(_DWORD *)(v1416 + 16) = v1415;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1412 ^ *(_QWORD *)(v19 + 2688);
                sub_140BC7384(v19, 0LL, v1412, 256LL);
              }
              goto LABEL_2099;
            }
          }
          v1417 = *(_QWORD *)(v19 + 1472);
          v1355 = 0xA3A03F5891C8B4E8uLL;
          v1418 = (int *)v1973;
          v1419 = v1396 >> 4;
          v52 = (*(_BYTE *)(v1417 + 2 * v1419) | (unsigned __int8)v1407) == (_BYTE)v1397;
          v1358 = (__int64)v1984;
          if ( !v52 && !*(_DWORD *)(v19 + 2328) )
          {
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = (char *)v1418 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *v1418;
            *(_QWORD *)(v19 + 2360) = v1358;
            *(_DWORD *)(v19 + 2328) = 1;
            v1420 = *(_DWORD *)(v19 + 2520);
            if ( (v1420 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1420 & 1) != 0 )
            {
              v1421 = *(unsigned int *)(v19 + 2676);
              v1422 = *(_QWORD *)(v19 + 2104);
              v1345 = *(_QWORD *)(v19 + 2680);
              v1423 = (_QWORD *)(v1421 + v19);
              v1424 = v1421 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1421) >> 3);
              while ( v1423 != (_QWORD *)v1424 )
              {
                *v1423 ^= v1345;
                v1345 = ((v1422 ^ *v1423++) + __ROR8__(v1345, v1345 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v19 + 2524) &= ~0x200000u;
              if ( v1345 != *(_QWORD *)(v19 + 2688) )
              {
                v1425 = *(_DWORD *)(v19 + 2052);
                v1426 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v1426 = v19;
                *(_DWORD *)(v1426 + 16) = v1425;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1345 ^ *(_QWORD *)(v19 + 2688);
                sub_140BC7384(v19, 0LL, v1345, 256LL);
              }
              v1418 = (int *)v1973;
              v1355 = 0xA3A03F5891C8B4E8uLL;
            }
          }
          if ( (*(_BYTE *)(v1417 + 2 * v1419 + 1) | (unsigned __int8)v1408) == v1986 || *(_DWORD *)(v19 + 2328) )
          {
LABEL_2125:
            v1367 = 1LL;
          }
          else
          {
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = (char *)v1418 - 0x4C48B4211BBACBEBLL;
            v1427 = *v1418;
            v1367 = 1LL;
            *(_QWORD *)(v19 + 2352) = v1427;
            *(_QWORD *)(v19 + 2360) = v1358;
            *(_DWORD *)(v19 + 2328) = 1;
            v1428 = *(_DWORD *)(v19 + 2520);
            if ( (v1428 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1428 & 1) != 0 )
            {
              v1429 = *(unsigned int *)(v19 + 2676);
              v1430 = *(_QWORD *)(v19 + 2104);
              v1345 = *(_QWORD *)(v19 + 2680);
              v1431 = (_QWORD *)(v1429 + v19);
              v1355 = v1429 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1429) >> 3);
              while ( v1431 != (_QWORD *)v1355 )
              {
                *v1431 ^= v1345;
                v1345 = ((v1430 ^ *v1431++) + __ROR8__(v1345, v1345 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v19 + 2524) &= ~0x200000u;
              if ( v1345 != *(_QWORD *)(v19 + 2688) )
              {
                v1432 = *(_DWORD *)(v19 + 2052);
                v1433 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v1433 = v19;
                *(_DWORD *)(v1433 + 16) = v1432;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1345 ^ *(_QWORD *)(v19 + 2688);
                sub_140BC7384(v19, 0LL, v1345, 256LL);
              }
              goto LABEL_2125;
            }
          }
          if ( v1358 != *(_QWORD *)(v19 + 1240) )
          {
            v1434 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v19 + 984))(
                                          v1358,
                                          1LL,
                                          v1345,
                                          v1355);
            v1435 = v1434;
            if ( v1434 )
            {
              v1436 = *v1434;
              v1377 = v1434;
              if ( *v1434 )
              {
                v1437 = v1975;
                v1438 = v1984;
                v1983 = (unsigned __int64)v1434;
                do
                {
                  *v1435 = v1436 & 0xFFFFFFFFFFFFFFFCuLL;
                  (*(void (**)(void))(v19 + 496))();
                  v1439 = v1986;
                  v1440 = v1435[1] & 0xFFFFFFFFFFFF0000uLL;
                  if ( v1440 == v1437 )
                    v1439 = v1397;
                  v1441 = v1435[1] >> 6;
                  LOBYTE(v1441) = v1441 & 0xF;
                  if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v19 + 1016))(v1441, v1439) )
                  {
                    if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
                    {
                      v1442 = *(_QWORD **)(v19 + 2760);
                      v1443 = 48;
                      v1444 = 6LL;
                      do
                      {
                        v1443 -= 8;
                        *v1442 = *(_QWORD *)v1395;
                        v1395 += 8;
                        ++v1442;
                        --v1444;
                      }
                      while ( v1444 );
                      if ( v1443 )
                      {
                        do
                        {
                          v1445 = *v1395++;
                          *(_BYTE *)v1442 = v1445;
                          v1442 = (_QWORD *)((char *)v1442 + 1);
                          --v1443;
                        }
                        while ( v1443 );
                        v1437 = v1975;
                      }
                      v1395 = *(char **)(v19 + 2760);
                    }
                    *((_QWORD *)v1395 + 3) = v1440;
                    *((_QWORD *)v1395 + 4) = *v1435;
                    v1395[40] = ((unsigned __int64)*((unsigned int *)v1435 + 2) >> 6) & 0xF;
                    if ( !*(_DWORD *)(v19 + 2328) )
                    {
                      *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v19 + 2344) = v1395 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v19 + 2352) = *(int *)v1395;
                      *(_QWORD *)(v19 + 2360) = v1438;
                      *(_DWORD *)(v19 + 2328) = 1;
                      v1446 = *(_DWORD *)(v19 + 2520);
                      if ( (v1446 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1446 & 1) != 0 )
                      {
                        v1447 = *(unsigned int *)(v19 + 2676);
                        v1448 = *(_QWORD *)(v19 + 2104);
                        v1449 = *(_QWORD *)(v19 + 2680);
                        v1450 = (_QWORD *)(v1447 + v19);
                        v1451 = v1447
                              + v19
                              + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1447) >> 3);
                        while ( v1450 != (_QWORD *)v1451 )
                        {
                          *v1450 ^= v1449;
                          v1449 = ((v1448 ^ *v1450++) + __ROR8__(v1449, v1449 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                        if ( v1449 != *(_QWORD *)(v19 + 2688) )
                        {
                          v1452 = *(_DWORD *)(v19 + 2052);
                          v1453 = *(_QWORD *)(v19 + 1416);
                          *(_QWORD *)v1453 = v19;
                          *(_DWORD *)(v1453 + 16) = v1452;
                          if ( !*(_DWORD *)(v19 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1449 ^ *(_QWORD *)(v19 + 2688);
                          sub_140BC7384(v19, 0LL, v1449, 256LL);
                        }
                      }
                    }
                  }
                  v1435 += 6;
                  v1436 = *v1435;
                }
                while ( *v1435 );
LABEL_2152:
                v1377 = (_QWORD *)v1983;
                v1358 = (__int64)v1984;
              }
LABEL_2153:
              (*(void (__fastcall **)(_QWORD *))(v19 + 264))(v1377);
            }
          }
LABEL_2154:
          (*(void (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v19 + 936))(v1358, v1367, v1345, v1355);
          v41 = v1973;
          *(_DWORD *)(v19 + 2120) += 0x8000;
          v37 = 1;
          v1329 = v1974;
          v1324 = v1980;
LABEL_2155:
          ++v1329;
          v1330 = v1358;
          v1974 = v1329;
          continue;
        }
      }
      if ( v63 == 41 || v63 == 42 )
        goto LABEL_1760;
      if ( v63 == 43 )
      {
LABEL_2692:
        if ( !*(_DWORD *)(v19 + 2116) )
        {
          v1773 = (_QWORD *)*((_QWORD *)v41 + 1);
          v1774 = *((unsigned int *)v41 + 4);
          v1775 = v1773;
          *(_DWORD *)(v19 + 2120) += v1774;
          v1776 = (const char *)v1773;
          v1777 = *(_DWORD *)(v19 + 2100);
          v1778 = *(_QWORD *)(v19 + 2104);
          if ( v1773 < (_QWORD *)((char *)v1773 + v1774) )
          {
            do
            {
              _mm_prefetch(v1776, 0);
              v1776 += 64;
            }
            while ( v1776 < (const char *)v1773 + v1774 );
          }
          v1779 = *(_QWORD *)(v19 + 2104);
          v1780 = (unsigned int)v1774 >> 7;
          if ( (unsigned int)v1774 >> 7 )
          {
            do
            {
              v1781 = 8LL;
              do
              {
                v1782 = v1775[1] ^ __ROL8__(*v1775 ^ v1779, v1777);
                v1775 += 2;
                v1779 = __ROL8__(v1782, v1777);
                --v1781;
              }
              while ( v1781 );
              v1783 = (__ROL8__(v1778 ^ ((char *)v1775 - (char *)v1773), 17) ^ v1778 ^ (unsigned __int64)((char *)v1775 - (char *)v1773))
                    * (unsigned __int128)0x7010008004002001uLL;
              v2096 = *((_QWORD *)&v1783 + 1);
              v1777 = ((unsigned __int8)v1783 ^ (unsigned __int8)(BYTE8(v1783) ^ v1777)) & 0x3F;
              if ( !v1777 )
                LOBYTE(v1777) = 1;
              --v1780;
            }
            while ( v1780 );
            v19 = (unsigned __int64)v1978;
          }
          v1784 = v1774 & 0x7F;
          if ( v1784 >= 8 )
          {
            v1785 = (unsigned __int64)v1784 >> 3;
            do
            {
              v1779 = __ROL8__(*v1775++ ^ v1779, v1777);
              v1784 -= 8;
              --v1785;
            }
            while ( v1785 );
          }
          for ( ; v1784; --v1784 )
          {
            v1786 = *(unsigned __int8 *)v1775;
            v1775 = (_QWORD *)((char *)v1775 + 1);
            v1779 = __ROL8__(v1786 ^ v1779, v1777);
          }
          for ( k = v1779; ; LODWORD(v1779) = k ^ v1779 )
          {
            k >>= 31;
            if ( !k )
              break;
          }
          v1788 = v1779 & 0x7FFFFFFF;
          v1789 = 0;
          if ( v1788 != *((_DWORD *)v41 + 5) )
          {
            if ( !*(_DWORD *)v41 )
              v1789 = *((_DWORD *)v41 + 6) != 0;
            v1790 = *((_QWORD *)v41 + 1);
            if ( *((_DWORD *)v41 + 4) )
            {
              v1791 = 64LL;
              if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
              {
                v1792 = KeGetCurrentIrql();
                v1793 = v1790 & 0xFFFFFFFFFFFFF000uLL;
                v1794 = (v1790 + *((unsigned int *)v41 + 4) - 1LL) | 0xFFF;
                v1795 = (v1790 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v1796 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                              v1793,
                              0LL,
                              v1791,
                              v1775);
                    if ( v1796 == -1073741267 )
                      break;
                    if ( v1796 < 0 )
                    {
LABEL_2724:
                      __writecr8(v1792);
                      v41 = v1973;
                      i9 = 0;
                      goto LABEL_2725;
                    }
LABEL_2722:
                    v1793 += 4096LL;
                    v1795 += 4096LL;
                    if ( v1795 == v1794 )
                    {
                      __writecr8(v1792);
                      v41 = v1973;
                      i9 = 0;
                      goto LABEL_2738;
                    }
                  }
                  if ( v1789 )
                    goto LABEL_2724;
                  if ( v1792 > 1u )
                    goto LABEL_2722;
                  __writecr8(v1792);
                }
              }
            }
LABEL_2725:
            if ( !*(_DWORD *)(v19 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1788 ^ (unsigned __int64)*((unsigned int *)v41 + 5);
            v1797 = *((_QWORD *)v41 + 1);
            if ( !*(_DWORD *)(v19 + 2328) )
            {
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *(int *)v41;
              *(_QWORD *)(v19 + 2360) = v1797;
              *(_DWORD *)(v19 + 2328) = 1;
              v1798 = *(_DWORD *)(v19 + 2520);
              if ( (v1798 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1798 & 1) != 0 )
              {
                v1799 = *(unsigned int *)(v19 + 2676);
                v1800 = *(_QWORD *)(v19 + 2104);
                v1801 = *(_QWORD *)(v19 + 2680);
                v1802 = (_QWORD *)(v1799 + v19);
                v1803 = v1799 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1799) >> 3);
                while ( v1802 != (_QWORD *)v1803 )
                {
                  *v1802 ^= v1801;
                  v1801 = ((v1800 ^ *v1802++) + __ROR8__(v1801, v1801 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v1801 != *(_QWORD *)(v19 + 2688) )
                {
                  v1804 = *(_DWORD *)(v19 + 2052);
                  v1805 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v1805 = v19;
                  *(_DWORD *)(v1805 + 16) = v1804;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1801 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v1801, 256LL);
                }
              }
            }
          }
LABEL_2738:
          v63 = v1981;
        }
        v1806 = *(unsigned int *)(v19 + 2116);
        v1807 = *((unsigned int *)v41 + 4);
        v1983 = *((_QWORD *)v41 + 1);
        v1808 = (unsigned int *)(v1983 + 12 * v1806);
        v1980 = (unsigned __int64)v1808;
        v1809 = (int *)&v41[4 * v1806 + 48];
        v1976 = (__int64)v1809;
        v1810 = (unsigned int *)(v1983 + 12 * (v1807 / 0xC));
        v1975 = (__int64)v1810;
        if ( v1808 == v1810 )
          goto LABEL_2831;
LABEL_2740:
        if ( *v1809 < 0 )
          goto LABEL_2811;
        v1811 = v1808[1] - *v1808;
        v1812 = *((_QWORD *)v1973 + 4) + *v1808;
        if ( v63 != 43 )
        {
          *(_DWORD *)(v19 + 2120) += v1811;
          v1813 = v1812;
          v1814 = *(_DWORD *)(v19 + 2100);
          v1815 = (const char *)v1812;
          v1816 = *(_QWORD *)(v19 + 2104);
          v1817 = v1812 + v1811;
          if ( v1812 < v1817 )
          {
            do
            {
              _mm_prefetch(v1815, 0);
              v1815 += 64;
            }
            while ( (unsigned __int64)v1815 < v1817 );
          }
          v1818 = *(_QWORD *)(v19 + 2104);
          v1819 = v1811 >> 7;
          if ( v1811 >> 7 )
          {
            do
            {
              v1820 = 8LL;
              do
              {
                v1821 = *(_QWORD *)(v1813 + 8) ^ __ROL8__(*(_QWORD *)v1813 ^ v1818, v1814);
                v1813 += 16LL;
                v1818 = __ROL8__(v1821, v1814);
                --v1820;
              }
              while ( v1820 );
              v1822 = (__ROL8__(v1816 ^ (v1813 - v1812), 17) ^ v1816 ^ (v1813 - v1812))
                    * (unsigned __int128)0x7010008004002001uLL;
              v2105 = *((_QWORD *)&v1822 + 1);
              v1814 = ((unsigned __int8)(v1822 ^ BYTE8(v1822)) ^ (unsigned __int8)v1814) & 0x3F;
              if ( !v1814 )
                LOBYTE(v1814) = 1;
              --v1819;
            }
            while ( v1819 );
            v19 = (unsigned __int64)v1978;
            v1809 = (int *)v1976;
            v1810 = (unsigned int *)v1975;
          }
          v1823 = 1LL;
          v1824 = v1811 & 0x7F;
          if ( v1824 >= 8 )
          {
            v1825 = (unsigned __int64)(v1811 & 0x7F) >> 3;
            do
            {
              v1818 = __ROL8__(*(_QWORD *)v1813 ^ v1818, v1814);
              v1813 += 8LL;
              v1824 -= 8;
              --v1825;
            }
            while ( v1825 );
          }
          if ( v1824 )
          {
            do
            {
              v1826 = *(unsigned __int8 *)v1813++;
              v1818 = __ROL8__(v1826 ^ v1818, v1814);
              --v1824;
            }
            while ( v1824 );
            v1809 = (int *)v1976;
          }
          for ( m = v1818; ; LODWORD(v1818) = m ^ v1818 )
          {
            m >>= 31;
            if ( !m )
              break;
          }
          v1828 = v1818 & 0x7FFFFFFF;
          goto LABEL_2799;
        }
        v1828 = sub_140BC7680(v19, *((_QWORD *)v1973 + 4) + *v1808, v1811);
        *(_DWORD *)(v19 + 2120) += 8 * v1811;
        if ( (*(_DWORD *)(v19 + 2524) & 0x800) == 0 )
          goto LABEL_2799;
        v1829 = *(_BYTE *)(v1812 - 1);
        if ( *(_BYTE *)(v1812 - 6) == 76
          && *(_BYTE *)(v1812 - 5) == 0x87
          && !*(_BYTE *)(v1812 - 4)
          && *(_BYTE *)(v1812 - 3) == 0x98
          && *(_BYTE *)(v1812 - 2) == 0xC3
          && (v1829 == -112 || v1829 == -15) )
        {
          v1830 = *(volatile signed __int32 **)(v19 + 1240);
          while ( 1 )
          {
            _disable();
            if ( !_interlockedbittestandset(v1830, (*(_DWORD *)(v19 + 2520) >> 9) & 0x1F) )
              break;
            _enable();
            _mm_pause();
          }
          CurrentPrcb = *(struct _KPRCB **)(v19 + 2304);
          v1832 = 38LL;
          v1833 = 304;
          v1834 = CurrentPrcb;
          v1823 = 1LL;
          do
          {
            *(_QWORD *)&v1834->MxCsr = 0LL;
            v1833 -= 8;
            v1834 = (struct _KPRCB *)((char *)v1834 + 8);
            --v1832;
          }
          while ( v1832 );
          if ( v1833 )
          {
            v1832 = 0xFFFFFFFFLL;
            do
            {
              LOBYTE(v1834->MxCsr) = 0;
              v1834 = (struct _KPRCB *)((char *)v1834 + 1);
              --v1833;
            }
            while ( v1833 );
          }
          *(_OWORD *)&CurrentPrcb->NextThread = *(_OWORD *)(v19 + 2152);
          *(_OWORD *)&CurrentPrcb->NestingLevel = *(_OWORD *)(v19 + 2168);
          *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v19 + 2184);
          v2039 = 303;
          v2040 = CurrentPrcb;
          LOWORD(CurrentPrcb->NextThread) = v19 + 2220;
          v1835 = (v19 + 2220) >> 16;
          v2097 = v19 + 2220;
          HIWORD(CurrentPrcb->NextThread) = v1835;
          LODWORD(CurrentPrcb->IdleThread) = (v19 + 2220) >> 32;
          __sidt(v2059);
          __lidt(&v2039);
          *(_BYTE *)(v1812 - 1) = -15;
          if ( *(_BYTE *)(v1812 - 1) != 0xF1 )
            goto LABEL_2783;
          if ( (*(_DWORD *)(v19 + 2524) & 0x20000) == 0 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v1835 = v19 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(v19 + 1208) = v19 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(v19 + 1216) = CurrentPrcb;
            **(_QWORD **)(v19 + 1224) = v1812;
            **(_QWORD **)(v19 + 1232) = 275LL;
          }
          ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1812 - 1))(
            v1835,
            CurrentPrcb,
            v1832,
            1LL);
          if ( (*(_DWORD *)(v19 + 2524) & 0x20000) == 0 )
          {
            **(_QWORD **)(v19 + 1208) = 0xA3A03F5891C8B4E8uLL;
            **(_QWORD **)(v19 + 1216) = 0LL;
            **(_QWORD **)(v19 + 1224) = 0LL;
            **(_QWORD **)(v19 + 1232) = 0LL;
          }
          v1823 = 1LL;
          if ( *(_BYTE *)(v1812 - 1) == 0xF1 )
          {
            *(_BYTE *)(v1812 - 1) = -112;
            v1813 = *(_BYTE *)(v1812 - 1) == 0x90;
          }
          else
          {
LABEL_2783:
            v1813 = 0LL;
          }
          __lidt(v2059);
          _InterlockedAnd(*(volatile signed __int32 **)(v19 + 1240), ~(1 << ((*(_DWORD *)(v19 + 2520) >> 9) & 0x1F)));
          _enable();
          if ( (_DWORD)v1813 )
          {
LABEL_2799:
            if ( v1828 == (*v1809 & 0x7FFFFFFF) )
              goto LABEL_2810;
            v1843 = v1811;
            if ( !v1811 || (*(_DWORD *)(v19 + 2524) & 0x40) == 0 )
              goto LABEL_2817;
            v1844 = KeGetCurrentIrql();
            v1845 = v1812 & 0xFFFFFFFFFFFFF000uLL;
            v1846 = (v1843 + v1812 - 1) | 0xFFF;
            v1847 = (v1812 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_2803:
            __writecr8(2uLL);
            while ( 1 )
            {
              v1848 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(v19 + 1128))(
                        v1845,
                        0LL,
                        v1813,
                        v1823);
              if ( v1848 == -1073741267 )
              {
                if ( v1844 <= 1u )
                {
                  __writecr8(v1844);
                  goto LABEL_2803;
                }
              }
              else if ( v1848 < 0 )
              {
                __writecr8(v1844);
                v1808 = (unsigned int *)v1980;
                v1809 = (int *)v1976;
                v1810 = (unsigned int *)v1975;
LABEL_2817:
                v1850 = (unsigned int)*v1809;
                LODWORD(v1850) = v1850 & 0x7FFFFFFF;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1850 ^ v1828;
                i9 = 0;
                if ( !*(_DWORD *)(v19 + 2328) )
                {
                  v1851 = (int *)v1973;
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = (char *)v1851 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *v1851;
                  *(_QWORD *)(v19 + 2360) = v1812;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v1852 = *(_DWORD *)(v19 + 2520);
                  if ( (v1852 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1852 & 1) != 0 )
                  {
                    v1853 = *(unsigned int *)(v19 + 2676);
                    v1854 = *(_QWORD *)(v19 + 2104);
                    v1855 = *(_QWORD *)(v19 + 2680);
                    v1856 = (_QWORD *)(v1853 + v19);
                    v1857 = v1853 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1853) >> 3);
                    while ( v1856 != (_QWORD *)v1857 )
                    {
                      *v1856 ^= v1855;
                      v1855 = ((v1854 ^ *v1856++) + __ROR8__(v1855, v1855 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                    if ( v1855 != *(_QWORD *)(v19 + 2688) )
                    {
                      v1858 = *(_DWORD *)(v19 + 2052);
                      v1859 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)v1859 = v19;
                      *(_DWORD *)(v1859 + 16) = v1858;
                      if ( !*(_DWORD *)(v19 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1855 ^ *(_QWORD *)(v19 + 2688);
                      sub_140BC7384(v19, 0LL, v1855, 256LL);
                    }
                  }
                }
                goto LABEL_2811;
              }
              v1845 += 4096LL;
              v1847 += 4096LL;
              if ( v1847 == v1846 )
              {
                __writecr8(v1844);
                v1808 = (unsigned int *)v1980;
                v1809 = (int *)v1976;
                v1810 = (unsigned int *)v1975;
LABEL_2810:
                i9 = 0;
LABEL_2811:
                ++v1809;
                v1808 += 3;
                v1976 = (__int64)v1809;
                v1980 = (unsigned __int64)v1808;
                v1849 = v1808 == v1810;
                if ( v1808 >= v1810 )
                {
LABEL_2814:
                  if ( !v1849 )
                  {
                    v31 = (__int64)((__int64)v1808 - v1983) / 12;
                    goto LABEL_2877;
                  }
                  v41 = v1973;
LABEL_2831:
                  v1860 = *(_QWORD *)(v19 + 1336);
                  v1861 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64))(v19 + 352))(v1860);
                  v1862 = **(unsigned int ***)(v19 + 1568);
                  v1863 = v1862 + 4;
                  v1864 = *((_BYTE *)v1862 + 12);
                  v1865 = (unsigned __int64)&v1862[6 * *v1862 + 4];
                  do
                  {
                    v1866 = 24LL;
                    v1867 = v41 + 24;
                    v1868 = v1863;
                    do
                    {
                      v1869 = *(_QWORD *)v1868;
                      v1868 += 2;
                      v1870 = *(_QWORD *)v1867;
                      v1867 += 8;
                      if ( v1869 != v1870 )
                        goto LABEL_2839;
                      v1866 = (unsigned int)(v1866 - 8);
                    }
                    while ( (unsigned int)v1866 >= 8 );
                    if ( !(_DWORD)v1866 )
                      break;
                    while ( 1 )
                    {
                      v1871 = *(_BYTE *)v1868;
                      v1868 = (unsigned int *)((char *)v1868 + 1);
                      v1872 = *v1867++;
                      if ( v1871 != v1872 )
                        break;
                      v52 = (_DWORD)v1866 == 1;
                      v1866 = (unsigned int)(v1866 - 1);
                      if ( v52 )
                        goto LABEL_2840;
                    }
LABEL_2839:
                    v1863 += 6;
                  }
                  while ( (unsigned __int64)v1863 < v1865 );
LABEL_2840:
                  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v19 + 416))(
                    *(_QWORD *)(v19 + 1336),
                    v1866,
                    v1867,
                    v1868);
                  __writecr8(v1861);
                  if ( !v1864 )
                    goto LABEL_3013;
                  if ( (*(_DWORD *)(v19 + 2524) & 0x10) != 0 && !*(_DWORD *)(v19 + 2328) )
                  {
                    v1873 = v41 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                    if ( !v41 )
                      v1873 = 0LL;
                    *(_QWORD *)(v19 + 2344) = v1873;
                    if ( v41 )
                      v1874 = *(int *)v41;
                    else
                      v1874 = 0LL;
                    *(_QWORD *)(v19 + 2352) = v1874;
                    *(_QWORD *)(v19 + 2360) = 1LL;
                    *(_DWORD *)(v19 + 2328) = 1;
                    v1875 = *(_DWORD *)(v19 + 2520);
                    if ( (v1875 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1875 & 1) != 0 )
                    {
                      v1876 = *(unsigned int *)(v19 + 2676);
                      v1877 = *(_QWORD *)(v19 + 2104);
                      v1878 = *(_QWORD *)(v19 + 2680);
                      v1879 = (_QWORD *)(v1876 + v19);
                      v1880 = v1876 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1876) >> 3);
                      while ( v1879 != (_QWORD *)v1880 )
                      {
                        *v1879 ^= v1878;
                        v1878 = ((v1877 ^ *v1879++) + __ROR8__(v1878, v1878 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                      if ( v1878 != *(_QWORD *)(v19 + 2688) )
                      {
                        v1881 = *(_DWORD *)(v19 + 2052);
                        v1882 = *(_QWORD *)(v19 + 1416);
                        *(_QWORD *)v1882 = v19;
                        *(_DWORD *)(v1882 + 16) = v1881;
                        if ( !*(_DWORD *)(v19 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1878 ^ *(_QWORD *)(v19 + 2688);
                        sub_140BC7384(v19, 0LL, v1878, 256LL);
                      }
                    }
                  }
                  if ( *((_QWORD *)v41 + 3) != 1LL )
                  {
LABEL_3013:
                    if ( v1863 == (unsigned int *)v1865 && !*(_DWORD *)(v19 + 2328) )
                    {
                      v1883 = v41 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                      if ( !v41 )
                        v1883 = 0LL;
                      *(_QWORD *)(v19 + 2344) = v1883;
                      if ( v41 )
                        v1884 = *(int *)v41;
                      else
                        v1884 = 0LL;
                      *(_QWORD *)(v19 + 2352) = v1884;
                      *(_QWORD *)(v19 + 2360) = v1863;
                      *(_DWORD *)(v19 + 2328) = 1;
                      v1885 = *(_DWORD *)(v19 + 2520);
                      if ( (v1885 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1885 & 1) != 0 )
                      {
                        v1886 = *(unsigned int *)(v19 + 2676);
                        v1887 = *(_QWORD *)(v19 + 2104);
                        v1888 = *(_QWORD *)(v19 + 2680);
                        v1889 = (_QWORD *)(v1886 + v19);
                        v1890 = v1886
                              + v19
                              + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1886) >> 3);
                        while ( v1889 != (_QWORD *)v1890 )
                        {
                          *v1889 ^= v1888;
                          v1888 = ((v1887 ^ *v1889++) + __ROR8__(v1888, v1888 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                        if ( v1888 != *(_QWORD *)(v19 + 2688) )
                        {
                          v1891 = *(_DWORD *)(v19 + 2052);
                          v1892 = *(_QWORD *)(v19 + 1416);
                          *(_QWORD *)v1892 = v19;
                          *(_DWORD *)(v1892 + 16) = v1891;
                          if ( !*(_DWORD *)(v19 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1888 ^ *(_QWORD *)(v19 + 2688);
                          sub_140BC7384(v19, 0LL, v1888, 256LL);
                        }
                      }
                    }
                  }
                  v31 = 0LL;
LABEL_2877:
                  *(_DWORD *)(v19 + 2116) = v31;
                  goto LABEL_237;
                }
                v63 = v1981;
                if ( *(_DWORD *)(v19 + 2120) >= *(_DWORD *)(v19 + 2124) )
                {
                  v1849 = v1808 == v1810;
                  goto LABEL_2814;
                }
                goto LABEL_2740;
              }
            }
          }
        }
        else
        {
          v1823 = 1LL;
        }
        if ( !*(_DWORD *)(v19 + 2328) )
        {
          v1836 = (int *)v1973;
          *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v19 + 2344) = (char *)v1836 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v19 + 2352) = *v1836;
          *(_QWORD *)(v19 + 2360) = v1812 - 6;
          *(_DWORD *)(v19 + 2328) = 1;
          v1837 = *(_DWORD *)(v19 + 2520);
          if ( (v1837 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1837 & 1) != 0 )
          {
            v1838 = *(unsigned int *)(v19 + 2676);
            v1839 = *(_QWORD *)(v19 + 2104);
            v1813 = *(_QWORD *)(v19 + 2680);
            v1840 = (_QWORD *)(v1838 + v19);
            v1823 = v1838 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1838) >> 3);
            while ( v1840 != (_QWORD *)v1823 )
            {
              *v1840 ^= v1813;
              v1813 = ((v1839 ^ *v1840++) + __ROR8__(v1813, v1813 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v19 + 2524) &= ~0x200000u;
            if ( v1813 != *(_QWORD *)(v19 + 2688) )
            {
              v1841 = *(_DWORD *)(v19 + 2052);
              v1842 = *(_QWORD *)(v19 + 1416);
              *(_QWORD *)v1842 = v19;
              *(_DWORD *)(v1842 + 16) = v1841;
              if ( !*(_DWORD *)(v19 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1813 ^ *(_QWORD *)(v19 + 2688);
              sub_140BC7384(v19, 0LL, v1813, 256LL);
            }
          }
        }
        goto LABEL_2799;
      }
      if ( v63 != 44 )
      {
        if ( v63 == 46 )
        {
          if ( (*(_DWORD *)(v19 + 2128) & 1) == 0 )
          {
            v1692 = 0;
            v1693 = *(_QWORD *)(v19 + 1344);
            (*(void (__fastcall **)(_QWORD, unsigned __int64))(v19 + 392))((unsigned int)(v63 - 46), v31);
            if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 || (v1694 = *(_DWORD *)(v19 + 2424), v1694 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 312))(*(_QWORD *)(v19 + 2632), 0LL);
              v1695 = 0x80;
            }
            else
            {
              v1695 = 1 << v1694;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v19 + 328))(v1693, 0LL);
            if ( v1695 == (char)0x80 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 320))(*(_QWORD *)(v19 + 2632), 0LL);
            }
            else
            {
              v1696 = *(volatile signed __int8 ***)(v19 + 1304);
              v1697 = *v1696;
              if ( *v1696 != (volatile signed __int8 *)v1696 )
              {
                v1698 = ~v1695;
                do
                {
                  _InterlockedAnd8(&v1697[*(_QWORD *)(v19 + 1736) - *(_QWORD *)(v19 + 1760)], v1698);
                  v1697 = *(volatile signed __int8 **)v1697;
                  ++v1692;
                }
                while ( v1697 != (volatile signed __int8 *)v1696 );
              }
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 336))(*(_QWORD *)(v19 + 1344), 0LL);
            (*(void (**)(void))(v19 + 400))();
            *(_DWORD *)(v19 + 2120) += v1692 << 7;
          }
          goto LABEL_238;
        }
        if ( v63 == 47 )
        {
          v1994 = *(_QWORD *)(*(_QWORD *)(v19 + 1720)
                            + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v19 + 1624))
                            + *(_QWORD *)(v19 + 1688));
          v1680 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v19 + 1168))(v1994, v31);
          if ( v1680 == 0xFFFFFFFFLL )
          {
            v1994 = 0LL;
            v1681 = *(_QWORD *)(v19 + 2512);
            if ( !v1681
              || ((*(int (__fastcall **)(__int64, __int64 *))(v19 + 1152))(v1681, &v1994) >= 0
                ? (v1682 = v1994)
                : (v1682 = 0LL, v1994 = 0LL),
                  !v1682) )
            {
              v1994 = (*(__int64 (__fastcall **)(_QWORD))(v19 + 960))(0LL);
            }
            *(_QWORD *)(v19 + 2512) = 0LL;
            v1683 = 0;
            if ( !v1994 )
              goto LABEL_2532;
            while ( 1 )
            {
              ++v1683;
              if ( (*(int (**)(void))(v19 + 928))() >= 0 )
              {
                (*(void (__fastcall **)(__int64, _BYTE *))(v19 + 1080))(v1994, v2144);
                v1680 = (*(__int64 (**)(void))(v19 + 1168))();
                (*(void (__fastcall **)(_BYTE *))(v19 + 1088))(v2144);
                (*(void (__fastcall **)(__int64))(v19 + 936))(v1994);
                if ( v1680 != 0xFFFFFFFFLL || v1683 > 0x100 )
                  break;
              }
              v1994 = (*(__int64 (__fastcall **)(__int64))(v19 + 960))(v1994);
              if ( !v1994 )
                goto LABEL_2532;
            }
            *(_QWORD *)(v19 + 2512) = (*(__int64 (__fastcall **)(__int64))(v19 + 1160))(v1994);
            (*(void (__fastcall **)(__int64))(v19 + 496))(v1994);
            if ( v1680 == 0xFFFFFFFFLL )
            {
LABEL_2532:
              *(_DWORD *)(v19 + 2120) += v1683 << 12;
              goto LABEL_238;
            }
          }
          if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
          {
            v1684 = *(_QWORD **)(v19 + 2760);
            LODWORD(v31) = 48;
            v1685 = 6LL;
            do
            {
              v31 = (unsigned int)(v31 - 8);
              *v1684 = *(_QWORD *)v41;
              v41 += 8;
              ++v1684;
              --v1685;
            }
            while ( v1685 );
            for ( ; (_DWORD)v31; v31 = (unsigned int)(v31 - 1) )
            {
              v1686 = *v41++;
              *(_BYTE *)v1684 = v1686;
              v1684 = (_QWORD *)((char *)v1684 + 1);
            }
            v41 = *(char **)(v19 + 2760);
          }
          *((_QWORD *)v41 + 3) = v1680;
          v1687 = v1994;
          if ( *(_DWORD *)(v19 + 2328) )
            goto LABEL_238;
          *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v19 + 2352) = *(int *)v41;
          *(_QWORD *)(v19 + 2360) = v1687;
          *(_DWORD *)(v19 + 2328) = 1;
          v1688 = *(_DWORD *)(v19 + 2520);
          if ( (v1688 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v1688 & 1) == 0 )
            goto LABEL_238;
          v1689 = *(unsigned int *)(v19 + 2676);
          v1690 = *(_QWORD *)(v19 + 2104);
          v336 = *(_QWORD *)(v19 + 2680);
          v31 = v1689 + v19;
          v1691 = v1689 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1689) >> 3);
          while ( v31 != v1691 )
          {
            *(_QWORD *)v31 ^= v336;
            v336 = ((v1690 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
            v31 += 8LL;
          }
LABEL_763:
          *(_DWORD *)(v19 + 2524) &= ~0x200000u;
          if ( v336 == *(_QWORD *)(v19 + 2688) )
            goto LABEL_238;
          v475 = *(_DWORD *)(v19 + 2052);
          v476 = *(_QWORD *)(v19 + 1416);
          *(_QWORD *)v476 = v19;
          *(_DWORD *)(v476 + 16) = v475;
          if ( !*(_DWORD *)(v19 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v336 ^ *(_QWORD *)(v19 + 2688);
          goto LABEL_766;
        }
        if ( v63 != 48 )
          goto LABEL_2253;
        if ( !*((_DWORD *)v41 + 4) )
          goto LABEL_238;
        if ( (*(_DWORD *)(v19 + 2524) & 0x4000) != 0 )
        {
          v1647 = *(volatile signed __int32 **)(v19 + 1240);
          while ( 1 )
          {
            _disable();
            if ( !_interlockedbittestandset(v1647, (*(_DWORD *)(v19 + 2520) >> 9) & 0x1F) )
              break;
            _enable();
            _mm_pause();
          }
        }
        v1648 = (_QWORD *)*((_QWORD *)v41 + 1);
        v1649 = *((unsigned int *)v41 + 4);
        v1650 = v1648;
        *(_DWORD *)(v19 + 2120) += v1649;
        v1651 = (const char *)v1648;
        v1652 = *(_DWORD *)(v19 + 2100);
        v1653 = *(_QWORD *)(v19 + 2104);
        if ( v1648 < (_QWORD *)((char *)v1648 + v1649) )
        {
          do
          {
            _mm_prefetch(v1651, 0);
            v1651 += 64;
          }
          while ( v1651 < (const char *)v1648 + v1649 );
        }
        v1654 = *(_QWORD *)(v19 + 2104);
        v1655 = (unsigned int)v1649 >> 7;
        if ( (unsigned int)v1649 >> 7 )
        {
          do
          {
            v1656 = 8LL;
            do
            {
              v1657 = v1650[1] ^ __ROL8__(*v1650 ^ v1654, v1652);
              v1650 += 2;
              v1654 = __ROL8__(v1657, v1652);
              --v1656;
            }
            while ( v1656 );
            v1658 = (__ROL8__(v1653 ^ ((char *)v1650 - (char *)v1648), 17) ^ v1653 ^ (unsigned __int64)((char *)v1650 - (char *)v1648))
                  * (unsigned __int128)0x7010008004002001uLL;
            v2094 = *((_QWORD *)&v1658 + 1);
            v1659 = v1658 ^ BYTE8(v1658) ^ v1652;
            v31 = 0xFFFFFFFFLL;
            v1652 = v1659 & 0x3F;
            if ( !v1652 )
              LOBYTE(v1652) = 1;
            --v1655;
          }
          while ( v1655 );
          v19 = (unsigned __int64)v1978;
        }
        else
        {
          v31 = 0xFFFFFFFFLL;
        }
        v1660 = v1649 & 0x7F;
        if ( v1660 >= 8 )
        {
          v1661 = (unsigned __int64)v1660 >> 3;
          do
          {
            v1654 = __ROL8__(*v1650++ ^ v1654, v1652);
            v1660 -= 8;
            --v1661;
          }
          while ( v1661 );
        }
        for ( ; v1660; --v1660 )
        {
          v1662 = *(unsigned __int8 *)v1650;
          v1650 = (_QWORD *)((char *)v1650 + 1);
          v1654 = __ROL8__(v1662 ^ v1654, v1652);
        }
        for ( n = v1654; ; LODWORD(v1654) = n ^ v1654 )
        {
          n >>= 31;
          if ( !n )
            break;
        }
        v1664 = v1654 & 0x7FFFFFFF;
        v1665 = 0;
        if ( v1664 == *((_DWORD *)v41 + 5) )
        {
LABEL_2501:
          v37 = 1;
        }
        else
        {
          if ( !*(_DWORD *)v41 )
            v1665 = *((_DWORD *)v41 + 6) != 0;
          v31 = *((_QWORD *)v41 + 1);
          if ( *((_DWORD *)v41 + 4) )
          {
            v1666 = 64LL;
            if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
            {
              v1667 = KeGetCurrentIrql();
              v1668 = v31 & 0xFFFFFFFFFFFFF000uLL;
              v1669 = (v31 + *((unsigned int *)v41 + 4) - 1LL) | 0xFFF;
              v1670 = (v31 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1671 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                            v1668,
                            0LL,
                            v1666,
                            v1650);
                  if ( v1671 == -1073741267 )
                    break;
                  if ( v1671 < 0 )
                  {
LABEL_2504:
                    __writecr8(v1667);
                    v41 = v1973;
                    i9 = 0;
                    goto LABEL_2505;
                  }
LABEL_2499:
                  v1668 += 4096LL;
                  v1670 += 4096LL;
                  if ( v1670 == v1669 )
                  {
                    __writecr8(v1667);
                    i9 = 0;
                    goto LABEL_2501;
                  }
                }
                if ( v1665 )
                  goto LABEL_2504;
                if ( v1667 > 1u )
                  goto LABEL_2499;
                __writecr8(v1667);
              }
            }
          }
LABEL_2505:
          if ( !*(_DWORD *)(v19 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = *((unsigned int *)v41 + 5) ^ (unsigned __int64)v1664;
          v1672 = *((_QWORD *)v41 + 1);
          v37 = 1;
          if ( !*(_DWORD *)(v19 + 2328) )
          {
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *(int *)v41;
            *(_QWORD *)(v19 + 2360) = v1672;
            *(_DWORD *)(v19 + 2328) = 1;
            v1673 = *(_DWORD *)(v19 + 2520);
            if ( (v1673 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1673 & 1) != 0 )
            {
              v1674 = *(unsigned int *)(v19 + 2676);
              v1675 = *(_QWORD *)(v19 + 2104);
              v1676 = *(_QWORD *)(v19 + 2680);
              v31 = v1674 + v19;
              v1677 = v1674 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1674) >> 3);
              while ( v31 != v1677 )
              {
                *(_QWORD *)v31 ^= v1676;
                v1676 = ((v1675 ^ *(_QWORD *)v31) + __ROR8__(v1676, v1676 & 0x3F)) ^ 0xEFA;
                v31 += 8LL;
              }
              *(_DWORD *)(v19 + 2524) &= ~0x200000u;
              if ( v1676 != *(_QWORD *)(v19 + 2688) )
              {
                v1678 = *(_DWORD *)(v19 + 2052);
                v1679 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v1679 = v19;
                *(_DWORD *)(v1679 + 16) = v1678;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1676 ^ *(_QWORD *)(v19 + 2688);
                sub_140BC7384(v19, 0LL, v1676, 256LL);
              }
            }
          }
        }
        if ( (*(_DWORD *)(v19 + 2524) & 0x4000) != 0 )
        {
          v31 = *(_QWORD *)(v19 + 1240);
          _InterlockedAnd((volatile signed __int32 *)v31, ~(1 << ((*(_DWORD *)(v19 + 2520) >> 9) & 0x1F)));
          _enable();
        }
        goto LABEL_238;
      }
      v1699 = (_QWORD *)*((_QWORD *)v41 + 1);
      v1700 = v19;
      v1701 = *((unsigned int *)v41 + 4);
      v1702 = v1699;
      *(_DWORD *)(v19 + 2120) += v1701;
      v1703 = (const char *)v1699;
      v1704 = *(_DWORD *)(v19 + 2100);
      v1705 = *(_QWORD *)(v19 + 2104);
      v1983 = v19;
      if ( v1699 < (_QWORD *)((char *)v1699 + v1701) )
      {
        do
        {
          _mm_prefetch(v1703, 0);
          v1703 += 64;
        }
        while ( v1703 < (const char *)v1699 + v1701 );
      }
      v1706 = v1705;
      v1707 = (unsigned int)v1701 >> 7;
      v31 = 1LL;
      if ( (unsigned int)v1701 >> 7 )
      {
        do
        {
          v1708 = 8LL;
          do
          {
            v1709 = v1702[1] ^ __ROL8__(*v1702 ^ v1706, v1704);
            v1702 += 2;
            v1706 = __ROL8__(v1709, v1704);
            --v1708;
          }
          while ( v1708 );
          v1710 = (__ROL8__(v1705 ^ ((char *)v1702 - (char *)v1699), 17) ^ v1705 ^ ((char *)v1702 - (char *)v1699))
                * (unsigned __int128)0x7010008004002001uLL;
          v2095 = *((_QWORD *)&v1710 + 1);
          v1711 = v1710 ^ BYTE8(v1710) ^ v1704;
          v31 = 1LL;
          v1704 = v1711 & 0x3F;
          if ( !v1704 )
            LOBYTE(v1704) = 1;
          --v1707;
        }
        while ( v1707 );
        v19 = (unsigned __int64)v1978;
        v1700 = v1983;
      }
      v1712 = v1701 & 0x7F;
      if ( (unsigned int)v1712 >= 8 )
      {
        v1713 = (unsigned __int64)(unsigned int)v1712 >> 3;
        do
        {
          v1706 = __ROL8__(*v1702++ ^ v1706, v1704);
          v1712 = (unsigned int)(v1712 - 8);
          --v1713;
        }
        while ( v1713 );
      }
      if ( (_DWORD)v1712 )
      {
        do
        {
          v1714 = *(unsigned __int8 *)v1702;
          v1702 = (_QWORD *)((char *)v1702 + 1);
          v1706 = __ROL8__(v1714 ^ v1706, v1704);
          v1712 = (unsigned int)(v1712 - 1);
        }
        while ( (_DWORD)v1712 );
        v19 = (unsigned __int64)v1978;
      }
      for ( ii = v1706; ; LODWORD(v1706) = ii ^ v1706 )
      {
        ii >>= 31;
        if ( !ii )
          break;
      }
      v1716 = v1706 & 0x7FFFFFFF;
      if ( v1716 == *((_DWORD *)v41 + 5) )
      {
LABEL_2591:
        i9 = 0;
      }
      else
      {
        if ( !*(_DWORD *)v41 && *((_DWORD *)v41 + 6) )
          i9 = 1;
        v1717 = *((unsigned int *)v41 + 4);
        v31 = *((_QWORD *)v41 + 1);
        if ( *((_DWORD *)v41 + 4) )
        {
          v1712 = 64LL;
          if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
          {
            v1718 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1719 = v31 & 0xFFFFFFFFFFFFF000uLL;
            v1983 = (v31 + v1717 - 1) | 0xFFF;
            v1720 = (v31 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              while ( 1 )
              {
                v1721 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                          v1719,
                          0LL,
                          v1712,
                          v1702);
                if ( v1721 == -1073741267 )
                  break;
                if ( v1721 < 0 )
                {
LABEL_2611:
                  __writecr8(v1718);
                  v41 = v1973;
                  goto LABEL_2612;
                }
LABEL_2589:
                v1719 += 4096LL;
                v1720 += 4096LL;
                if ( v1720 == v1983 )
                {
                  __writecr8(v1718);
                  v41 = v1973;
                  goto LABEL_2591;
                }
              }
              if ( i9 )
                goto LABEL_2611;
              if ( v1718 > 1u )
                goto LABEL_2589;
              __writecr8(v1718);
              __writecr8(2uLL);
            }
          }
        }
LABEL_2612:
        i9 = 0;
        if ( !*(_DWORD *)(v19 + 2328) )
          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1716 ^ (unsigned __int64)*((unsigned int *)v41 + 5);
        v1733 = *((_QWORD *)v41 + 1);
        if ( !*(_DWORD *)(v19 + 2328) )
        {
          v37 = 1;
          *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v19 + 2352) = *(int *)v41;
          *(_QWORD *)(v19 + 2360) = v1733;
          *(_DWORD *)(v19 + 2328) = 1;
          v1734 = *(_DWORD *)(v19 + 2520);
          if ( (v1734 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1734 & 1) != 0 )
          {
            v1735 = *(unsigned int *)(v19 + 2676);
            v1736 = *(_QWORD *)(v19 + 2104);
            v1712 = *(_QWORD *)(v19 + 2680);
            v31 = v1735 + v19;
            v1702 = (_QWORD *)(v1735 + v19 + 8
                                           * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1735) >> 3));
            while ( (_QWORD *)v31 != v1702 )
            {
              *(_QWORD *)v31 ^= v1712;
              v1712 = ((v1736 ^ *(_QWORD *)v31) + __ROR8__(v1712, v1712 & 0x3F)) ^ 0xEFA;
              v31 += 8LL;
            }
            *(_DWORD *)(v19 + 2524) &= ~0x200000u;
            if ( v1712 != *(_QWORD *)(v19 + 2688) )
            {
              v1737 = *(_DWORD *)(v19 + 2052);
              v1738 = *(_QWORD *)(v19 + 1416);
              *(_QWORD *)v1738 = v19;
              *(_DWORD *)(v1738 + 16) = v1737;
              if ( !*(_DWORD *)(v19 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1712 ^ *(_QWORD *)(v19 + 2688);
              sub_140BC7384(v19, 0LL, v1712, 256LL);
            }
          }
          goto LABEL_2593;
        }
      }
      v37 = 1;
LABEL_2593:
      if ( (*((_DWORD *)v41 + 8) & 1) == 0 )
        goto LABEL_238;
      v1722 = *((_QWORD *)v41 + 3);
      v1723 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v19 + 520);
      v1975 = v1722;
      v1724 = v1723(v1722, v31, v1712, v1702);
      v1725 = v1724 + *(unsigned __int16 *)(v1724 + 20) + 24LL;
      v1976 = v1725 + 40LL * *(unsigned __int16 *)(v1724 + 6);
      if ( v1725 == v1976 )
        goto LABEL_238;
      v1726 = *(_DWORD *)(v19 + 2116);
      v31 = 0LL;
      if ( !v1726 )
      {
        *(_DWORD *)(v19 + 2116) = 4096;
        v1726 = 4096;
      }
      if ( v1722 == *(_QWORD *)(v19 + 1504) || (LODWORD(v1979) = 0, v1722 == *(_QWORD *)(v19 + 1512)) )
        LODWORD(v1979) = 1;
      v1727 = v1979;
      while ( 1 )
      {
        v1728 = *(_DWORD *)(v1725 + 16);
        v1729 = *(_DWORD *)(v1725 + 12);
        if ( v1728 <= *(_DWORD *)(v1725 + 8) )
          v1728 = *(_DWORD *)(v1725 + 8);
        v1730 = (v1728 + v1729 + 4095) & 0xFFFFF000;
        if ( v1726 < v1730 )
          break;
LABEL_2636:
        v1725 += 40LL;
        if ( v1725 == v1976 )
          goto LABEL_2637;
      }
      if ( (*(_DWORD *)(v1725 + 36) & 0x2000000) != 0 )
        goto LABEL_2635;
      v1731 = *(_DWORD *)v1725;
      if ( *(_DWORD *)v1725 == 1414090313 )
      {
        if ( *(_DWORD *)(v1725 + 4) != 1195525195 )
        {
LABEL_2607:
          if ( v1731 != 1095914053 || *(_WORD *)(v1725 + 4) != 16724 )
            goto LABEL_2609;
        }
        goto LABEL_2635;
      }
      if ( v1731 != 1162297680 )
        goto LABEL_2607;
      v1739 = *(_WORD *)(v1725 + 4);
      if ( v1739 == 30839 || v1739 == 29303 || v1739 == 30583 )
        goto LABEL_2635;
LABEL_2609:
      if ( v1700 )
      {
        v1732 = *(char **)(v1700 + 2384);
        *((_QWORD *)&v2047 + 1) = *(_QWORD *)(v1700 + 2392);
        v2048 = *(_OWORD *)(v1700 + 2400);
        *(_QWORD *)&v2047 = v1732;
      }
      else
      {
        v2047 = *(_OWORD *)VfExcludeSections;
        v2048 = *(_OWORD *)off_140E09F88;
        v1732 = VfExcludeSections[0];
      }
      v1740 = 7;
      v1741 = (char *)v1725;
      while ( 1 )
      {
        v1742 = *v1741++;
        v1743 = *v1732++;
        if ( v1742 != v1743 )
          break;
        if ( !--v1740 )
          goto LABEL_2634;
      }
      v1744 = (char *)*((_QWORD *)&v2047 + 1);
      v1745 = 8;
      v1746 = (char *)v1725;
      do
      {
        v1747 = *(_QWORD *)v1746;
        v1746 += 8;
        v1748 = *(_QWORD *)v1744;
        v1744 += 8;
        if ( v1747 != v1748 )
          goto LABEL_2647;
        v1745 -= 8;
      }
      while ( v1745 >= 8 );
      if ( !v1745 )
      {
LABEL_2634:
        v31 = 0LL;
        goto LABEL_2635;
      }
      while ( 1 )
      {
        v1749 = *v1746++;
        v1750 = *v1744++;
        if ( v1749 != v1750 )
          break;
        if ( !--v1745 )
          goto LABEL_2634;
      }
LABEL_2647:
      v1751 = (char *)v2048;
      v1752 = 4;
      v1753 = (char *)v1725;
      while ( 1 )
      {
        v1754 = *v1753++;
        v1755 = *v1751++;
        if ( v1754 != v1755 )
          break;
        if ( !--v1752 )
          goto LABEL_2634;
      }
      v1756 = (char *)*((_QWORD *)&v2048 + 1);
      v1757 = 6LL;
      v1758 = v1725;
      while ( 1 )
      {
        v1759 = *(_BYTE *)v1758++;
        v1760 = *v1756++;
        if ( v1759 != v1760 )
          break;
        v52 = (_DWORD)v1757 == 1;
        v1757 = (unsigned int)(v1757 - 1);
        if ( v52 )
          goto LABEL_2634;
      }
      v1761 = *(_DWORD *)(v1725 + 36);
      v31 = 0LL;
      if ( v1761 < 0 || (v1761 & 0x20000000) == 0 )
      {
LABEL_2635:
        v1726 = v1730;
        goto LABEL_2636;
      }
      if ( v1727 && *(_DWORD *)v1725 != 778396769 && *(_DWORD *)v1725 != 1162297680 )
        v37 = 0;
      if ( v1726 < v1729 )
        v1726 = v1729;
      while ( 2 )
      {
        v1762 = v1726 + v1722;
        if ( (*(_BYTE *)(v1700 + 2203) & 4) != 0 )
        {
          __asm { xbegin  $+6 }
          __asm { xend }
          v1758 = 1LL;
          ++*(_DWORD *)(v1700 + 2140);
          *(_DWORD *)(v1700 + 2120) += 256;
LABEL_2682:
          v1771 = *(_DWORD *)(v1700 + 2124);
          v1726 += 4096;
          if ( v1726 >= v1730 )
          {
            if ( *(_DWORD *)(v1700 + 2120) < v1771 )
            {
              v1722 = v1975;
              v37 = 1;
              goto LABEL_2636;
            }
LABEL_2637:
            v19 = (unsigned __int64)v1978;
            if ( v1725 == v1976 && v1726 >= v1730 )
            {
              i9 = 0;
              *(_DWORD *)(v1700 + 2116) = 0;
              goto LABEL_237;
            }
            *(_DWORD *)(v1700 + 2116) = v1726;
LABEL_466:
            i9 = 0;
            goto LABEL_237;
          }
          if ( *(_DWORD *)(v1700 + 2120) >= v1771 )
            goto LABEL_2637;
          v1722 = v1975;
          continue;
        }
        break;
      }
      if ( v37 )
      {
        v1763 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, unsigned __int64))(v1700 + 1104))(
                  &v2062,
                  v1762,
                  v1758,
                  v1757);
        v31 = 0LL;
        if ( v1763 < 0 )
        {
          if ( v1763 == -1073741819 )
          {
            v1764 = (int *)v1973;
            if ( ((*((_DWORD *)v1973 + 8) & 4) == 0 || *(int *)(v1725 + 36) < 0) && !*(_DWORD *)(v1700 + 2328) )
            {
              v1758 = 1LL;
              *(_QWORD *)(v1700 + 2336) = v1700 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v1700 + 2344) = (char *)v1764 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v1700 + 2352) = *v1764;
              *(_QWORD *)(v1700 + 2360) = v1762;
              *(_DWORD *)(v1700 + 2328) = 1;
              v1765 = *(_DWORD *)(v1700 + 2520);
              if ( (v1765 & 0x20000000) == 0 && (*(_DWORD *)(v1700 + 2524) & 0x200000) != 0 && (v1765 & 1) != 0 )
              {
                v1766 = *(unsigned int *)(v1700 + 2676);
                v1767 = *(_QWORD *)(v1700 + 2104);
                v1758 = *(_QWORD *)(v1700 + 2680);
                v1768 = (_QWORD *)(v1766 + v1700);
                v1757 = v1766 + v1700 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v1700 + 2052) - v1766) >> 3);
                while ( v1768 != (_QWORD *)v1757 )
                {
                  *v1768 ^= v1758;
                  v1758 = ((v1767 ^ *v1768++) + __ROR8__(v1758, v1758 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v1700 + 2524) &= ~0x200000u;
                if ( v1758 != *(_QWORD *)(v1700 + 2688) )
                {
                  v1769 = *(_QWORD *)(v1700 + 1416);
                  v1770 = *(_DWORD *)(v1700 + 2052);
                  *(_QWORD *)v1769 = v1700;
                  *(_DWORD *)(v1769 + 16) = v1770;
                  if ( !*(_DWORD *)(v1700 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v1700 + 1416) + 24LL) = v1758 ^ *(_QWORD *)(v1700 + 2688);
                  sub_140BC7384(v1700, 0LL, v1758, 256LL);
                }
                v31 = 0LL;
              }
            }
          }
          goto LABEL_2682;
        }
      }
      else
      {
        v2062 = 0LL;
        v2064 = 0;
        v2066 = 4096;
        v2063 = 8 * ((((unsigned __int64)(v1762 & 0xFFF) + 0x1FFF) >> 12) + 6);
        v2065 = v1762 & 0xFFFFFFFFFFFFF000uLL;
        v2067 = v1762 & 0xFFF;
        v2068 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64))(v1700 + 1112))(
                                    v1762,
                                    0LL,
                                    4095LL,
                                    v1757) >> 12;
      }
      ++*(_DWORD *)(v1700 + 2144);
      *(_QWORD *)(v1700 + 2736) = v2065 + v2067;
      *(_QWORD *)(v1700 + 2728) = v1973;
      v1772 = KeGetCurrentIrql();
      __writecr8(2uLL);
      RtlInitMinimalBarrier(v1700 + 2696, **(unsigned int **)(v1700 + 1520), 0LL);
      v1700 = (*(__int64 (__fastcall **)(__int64, __int64))(v1700 + 1096))(
                v1700 + *(unsigned int *)(v1700 + 2068),
                v1700);
      __writecr8(v1772);
      v31 = 0LL;
      if ( v37 )
      {
        (*(void (__fastcall **)(__int64 *, _QWORD))(v1700 + 1120))(&v2062, 0LL);
        v31 = 0LL;
      }
      *(_DWORD *)(v1700 + 2120) += 81920;
      goto LABEL_2682;
    }
    if ( v63 != 30 )
    {
      if ( v63 <= 15 )
      {
        if ( v63 == 15 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v19 + 1384) + 32LL) )
          {
            *(_DWORD *)(v19 + 2120) += 256;
            v340 = *(_QWORD *)(v19 + 1408);
            v341 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v19 + 728))(v340, v31);
            if ( v341 )
            {
              v342 = (*(__int64 (__fastcall **)(__int64))(v19 + 736))(v341);
              v343 = *((_QWORD *)v41 + 3);
              v344 = v342;
              if ( v343 )
              {
                if ( v343 != v342 && !*(_DWORD *)(v19 + 2328) )
                {
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *(int *)v41;
                  *(_QWORD *)(v19 + 2360) = v342;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v345 = *(_DWORD *)(v19 + 2520);
                  if ( (v345 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v345 & 1) != 0 )
                  {
                    v346 = *(unsigned int *)(v19 + 2676);
                    v347 = *(_QWORD *)(v19 + 2104);
                    v348 = *(_QWORD *)(v19 + 2680);
                    v349 = (_QWORD *)(v346 + v19);
                    v350 = v346 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v346) >> 3);
                    while ( v349 != (_QWORD *)v350 )
                    {
                      *v349 ^= v348;
                      v348 = ((v347 ^ *v349++) + __ROR8__(v348, v348 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                    if ( v348 != *(_QWORD *)(v19 + 2688) )
                    {
                      v351 = *(_DWORD *)(v19 + 2052);
                      v352 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)v352 = v19;
                      *(_DWORD *)(v352 + 16) = v351;
                      if ( !*(_DWORD *)(v19 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v348 ^ *(_QWORD *)(v19 + 2688);
                      sub_140BC7384(v19, 0LL, v348, 256LL);
                    }
                  }
                }
              }
              else
              {
                v353 = *(_QWORD *)(v19 + 2504);
                if ( (!*(_DWORD *)(v19 + 2496) || v342 < v353 || v342 > v353 + *(unsigned int *)(v19 + 2496) - 1LL)
                  && !*(_DWORD *)(v19 + 2328) )
                {
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *(int *)v41;
                  *(_QWORD *)(v19 + 2360) = v342;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v354 = *(_DWORD *)(v19 + 2520);
                  if ( (v354 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v354 & 1) != 0 )
                  {
                    v355 = *(unsigned int *)(v19 + 2676);
                    v356 = *(_QWORD *)(v19 + 2104);
                    v357 = *(_QWORD *)(v19 + 2680);
                    v358 = (_QWORD *)(v355 + v19);
                    v359 = v355 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v355) >> 3);
                    while ( v358 != (_QWORD *)v359 )
                    {
                      *v358 ^= v357;
                      v357 = ((v356 ^ *v358++) + __ROR8__(v357, v357 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                    if ( v357 != *(_QWORD *)(v19 + 2688) )
                    {
                      v360 = *(_DWORD *)(v19 + 2052);
                      v361 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)v361 = v19;
                      *(_DWORD *)(v361 + 16) = v360;
                      if ( !*(_DWORD *)(v19 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v357 ^ *(_QWORD *)(v19 + 2688);
                      sub_140BC7384(v19, 0LL, v357, 256LL);
                    }
                  }
                }
                *((_QWORD *)v41 + 3) = v344;
              }
              (*(void (__fastcall **)(__int64, __int64))(v19 + 744))(v340, v341);
            }
          }
          goto LABEL_238;
        }
        if ( !v63 )
        {
          v308 = (_QWORD *)*((_QWORD *)v41 + 1);
          v309 = *((unsigned int *)v41 + 4);
          v310 = v308;
          *(_DWORD *)(v19 + 2120) += v309;
          v311 = (const char *)v308;
          v312 = *(_DWORD *)(v19 + 2100);
          v313 = *(_QWORD *)(v19 + 2104);
          if ( v308 < (_QWORD *)((char *)v308 + v309) )
          {
            do
            {
              _mm_prefetch(v311, 0);
              v311 += 64;
            }
            while ( v311 < (const char *)v308 + v309 );
          }
          v314 = *(_QWORD *)(v19 + 2104);
          v315 = (unsigned int)v309 >> 7;
          if ( (unsigned int)v309 >> 7 )
          {
            do
            {
              v316 = 8LL;
              do
              {
                v317 = v310[1] ^ __ROL8__(*v310 ^ v314, v312);
                v310 += 2;
                v314 = __ROL8__(v317, v312);
                --v316;
              }
              while ( v316 );
              v318 = (__ROL8__(v313 ^ ((char *)v310 - (char *)v308), 17) ^ v313 ^ (unsigned __int64)((char *)v310 - (char *)v308))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2101 = *((_QWORD *)&v318 + 1);
              v319 = v318 ^ BYTE8(v318) ^ v312;
              v31 = 0xFFFFFFFFLL;
              v312 = v319 & 0x3F;
              if ( !v312 )
                LOBYTE(v312) = 1;
              --v315;
            }
            while ( v315 );
            v19 = (unsigned __int64)v1978;
          }
          else
          {
            v31 = 0xFFFFFFFFLL;
          }
          v320 = v309 & 0x7F;
          if ( v320 >= 8 )
          {
            v321 = (unsigned __int64)v320 >> 3;
            do
            {
              v314 = __ROL8__(*v310++ ^ v314, v312);
              v320 -= 8;
              --v321;
            }
            while ( v321 );
          }
          for ( ; v320; --v320 )
          {
            v322 = *(unsigned __int8 *)v310;
            v310 = (_QWORD *)((char *)v310 + 1);
            v314 = __ROL8__(v322 ^ v314, v312);
          }
          for ( jj = v314; ; LODWORD(v314) = jj ^ v314 )
          {
            jj >>= 31;
            if ( !jj )
              break;
          }
          v324 = v314 & 0x7FFFFFFF;
          v325 = 0;
          if ( v324 == *((_DWORD *)v41 + 5) )
            goto LABEL_237;
          if ( !*(_DWORD *)v41 )
            v325 = *((_DWORD *)v41 + 6) != 0;
          v31 = *((_QWORD *)v41 + 1);
          if ( !*((_DWORD *)v41 + 4) || (v326 = 64LL, (*(_DWORD *)(v19 + 2524) & 0x40) == 0) )
          {
LABEL_541:
            if ( !*(_DWORD *)(v19 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = *((unsigned int *)v41 + 5) ^ (unsigned __int64)v324;
            v332 = *((_QWORD *)v41 + 1);
            v37 = 1;
            if ( *(_DWORD *)(v19 + 2328) )
              goto LABEL_238;
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *(int *)v41;
            *(_QWORD *)(v19 + 2360) = v332;
            *(_DWORD *)(v19 + 2328) = 1;
            v333 = *(_DWORD *)(v19 + 2520);
            if ( (v333 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v333 & 1) == 0 )
              goto LABEL_238;
            v334 = *(unsigned int *)(v19 + 2676);
            v335 = *(_QWORD *)(v19 + 2104);
            v336 = *(_QWORD *)(v19 + 2680);
            v31 = v334 + v19;
            v337 = v334 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v334) >> 3);
            while ( v31 != v337 )
            {
              *(_QWORD *)v31 ^= v336;
              v336 = ((v335 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
              v31 += 8LL;
            }
            goto LABEL_550;
          }
          v327 = KeGetCurrentIrql();
          v328 = v31 & 0xFFFFFFFFFFFFF000uLL;
          v329 = (v31 + *((unsigned int *)v41 + 4) - 1LL) | 0xFFF;
          v330 = (v31 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_532:
          __writecr8(2uLL);
          while ( 1 )
          {
            v331 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                     v328,
                     0LL,
                     v326,
                     v310);
            if ( v331 == -1073741267 )
            {
              if ( v325 )
                goto LABEL_540;
              if ( v327 <= 1u )
              {
                __writecr8(v327);
                goto LABEL_532;
              }
            }
            else if ( v331 < 0 )
            {
LABEL_540:
              __writecr8(v327);
              v41 = v1973;
              i9 = 0;
              goto LABEL_541;
            }
            v31 = 4096LL;
            v328 += 4096LL;
            v330 += 4096LL;
            if ( v330 == v329 )
            {
              __writecr8(v327);
              goto LABEL_466;
            }
          }
        }
        if ( v63 != 1 )
        {
          if ( v63 == 4 )
          {
            if ( (*(_DWORD *)(v19 + 2128) & 1) != 0 )
              goto LABEL_238;
            v275 = *(void (__fastcall **)(_QWORD, _QWORD))(v19 + 392);
            v276 = 0;
            v277 = *(_QWORD *)(v19 + 1344);
            v1974 = 0;
            v275((unsigned int)(v63 - 4), v31);
            if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 || (v278 = *(_DWORD *)(v19 + 2424), v278 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 312))(*(_QWORD *)(v19 + 2632), 0LL);
              LOBYTE(v37) = 0x80;
            }
            else
            {
              LOBYTE(v37) = 1 << v278;
            }
            v279 = *(void (__fastcall **)(_QWORD, _QWORD))(v19 + 328);
            LODWORD(v1979) = v37;
            v279(v277, 0LL);
            v280 = *(_QWORD ***)(v19 + 1304);
            v281 = *v280;
            if ( *v280 != v280 )
            {
              do
              {
                v282 = (unsigned __int64)v281 - *(_QWORD *)(v19 + 1760);
                if ( (_BYTE)v37 != 0x80
                  && ((unsigned __int8)v37 & *(_BYTE *)(v282 + *(_QWORD *)(v19 + 1736))) != 0
                  && (*(_DWORD *)(v282 + *(_QWORD *)(v19 + 1744)) & *(_DWORD *)(v19 + 1768)) != 0
                  && !*(_DWORD *)(v19 + 2328) )
                {
                  v283 = (int *)v1973;
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = (char *)v283 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *v283;
                  *(_QWORD *)(v19 + 2360) = v282 | 1;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v284 = *(_DWORD *)(v19 + 2520);
                  if ( (v284 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v284 & 1) != 0 )
                  {
                    v285 = *(unsigned int *)(v19 + 2676);
                    v286 = *(_QWORD *)(v19 + 2104);
                    v287 = *(_QWORD *)(v19 + 2680);
                    v288 = (_QWORD *)(v285 + v19);
                    v289 = v285 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v285) >> 3);
                    while ( v288 != (_QWORD *)v289 )
                    {
                      *v288 ^= v287;
                      v287 = ((v286 ^ *v288++) + __ROR8__(v287, v287 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                    if ( v287 != *(_QWORD *)(v19 + 2688) )
                    {
                      v290 = *(_DWORD *)(v19 + 2052);
                      v291 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)v291 = v19;
                      *(_DWORD *)(v291 + 16) = v290;
                      if ( !*(_DWORD *)(v19 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v287 ^ *(_QWORD *)(v19 + 2688);
                      sub_140BC7384(v19, 0LL, v287, 256LL);
                    }
                  }
                }
                _InterlockedOr8((volatile signed __int8 *)(v282 + *(_QWORD *)(v19 + 1736)), v37);
                v281 = (_QWORD *)*v281;
                ++v276;
              }
              while ( v281 != v280 );
              v1974 = v276;
            }
            v292 = *(_QWORD *)(v19 + 1272);
            v1975 = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            (*(void (__fastcall **)(__int64, _BYTE *))(v19 + 344))(v292, v2143);
            v293 = *(_QWORD ***)(v19 + 1264);
            v294 = *v293;
            if ( *v293 != v293 )
            {
              v295 = v37;
              v296 = (unsigned __int8)v37;
              v297 = (int *)v1973;
              v298 = ~v295;
              do
              {
                v299 = (char *)v294 - *(_QWORD *)(v19 + 1728);
                if ( (v299[*(_QWORD *)(v19 + 1736)] & v296) == 0 && !*(_DWORD *)(v19 + 2328) )
                {
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = (char *)v297 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *v297;
                  *(_QWORD *)(v19 + 2360) = v299;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v300 = *(_DWORD *)(v19 + 2520);
                  if ( (v300 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v300 & 1) != 0 )
                  {
                    v301 = *(unsigned int *)(v19 + 2676);
                    v302 = *(_QWORD *)(v19 + 2104);
                    v303 = *(_QWORD *)(v19 + 2680);
                    v304 = (_QWORD *)(v301 + v19);
                    v305 = v301 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v301) >> 3);
                    while ( v304 != (_QWORD *)v305 )
                    {
                      *v304 ^= v303;
                      v303 = ((v302 ^ *v304++) + __ROR8__(v303, v303 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                    if ( v303 != *(_QWORD *)(v19 + 2688) )
                    {
                      v306 = *(_DWORD *)(v19 + 2052);
                      v307 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)v307 = v19;
                      *(_DWORD *)(v307 + 16) = v306;
                      if ( !*(_DWORD *)(v19 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v303 ^ *(_QWORD *)(v19 + 2688);
                      sub_140BC7384(v19, 0LL, v303, 256LL);
                    }
                  }
                }
                _InterlockedAnd8(&v299[*(_QWORD *)(v19 + 1736)], v298);
                v294 = (_QWORD *)*v294;
              }
              while ( v294 != v293 );
              LOBYTE(v37) = v1979;
              v276 = v1974;
            }
            (*(void (__fastcall **)(_BYTE *))(v19 + 408))(v2143);
            __writecr8((unsigned __int8)v1975);
            if ( (_BYTE)v37 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 320))(*(_QWORD *)(v19 + 2632), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 336))(*(_QWORD *)(v19 + 1344), 0LL);
            (*(void (**)(void))(v19 + 400))();
            *(_DWORD *)(v19 + 2120) += v276 << 8;
            goto LABEL_466;
          }
          if ( v63 != 5 )
          {
            if ( v63 == 7 )
            {
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v19 + 432))(v2114, *((unsigned int *)v41 + 7));
              (*(void (__fastcall **)(_BYTE *, _BYTE *))(v19 + 480))(v2114, v2115);
              for ( kk = 0; kk < *((_DWORD *)v41 + 6); ++kk )
              {
                v216 = *(unsigned int *)&v41[24 * kk + 64];
                if ( (*(_BYTE *)(v19 + 2203) & 2) != 0
                  && (_DWORD)v216 == -1073741694
                  && KeGetPcr()->Prcb.Number == *(_DWORD *)(v19 + 2320) )
                {
                  v217 = *(_QWORD *)(v19 + 2312);
                }
                else
                {
                  v217 = __readmsr(v216);
                }
                v218 = *(_QWORD *)&v41[24 * kk + 48];
                v219 = *(_QWORD *)&v41[24 * kk + 56];
                v220 = v218 & v217;
                if ( v220 == v219 )
                {
                  if ( (*(_DWORD *)(v19 + 2524) & 0x200) != 0 && v218 == -1 )
                    __writemsr(v216, v220);
                }
                else
                {
                  v221 = v216 | ((unsigned __int64)*((unsigned int *)v41 + 7) << 32);
                  if ( !*(_DWORD *)(v19 + 2328) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v220 ^ v219;
                    if ( !*(_DWORD *)(v19 + 2328) )
                    {
                      *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v19 + 2352) = *(int *)v41;
                      *(_QWORD *)(v19 + 2360) = v221;
                      *(_DWORD *)(v19 + 2328) = 1;
                      v222 = *(_DWORD *)(v19 + 2520);
                      if ( (v222 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v222 & 1) != 0 )
                      {
                        v223 = *(unsigned int *)(v19 + 2676);
                        v224 = *(_QWORD *)(v19 + 2104);
                        v225 = *(_QWORD *)(v19 + 2680);
                        v226 = (_QWORD *)(v223 + v19);
                        v227 = v223 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v223) >> 3);
                        while ( v226 != (_QWORD *)v227 )
                        {
                          *v226 ^= v225;
                          v225 = ((v224 ^ *v226++) + __ROR8__(v225, v225 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                        if ( v225 != *(_QWORD *)(v19 + 2688) )
                        {
                          v228 = *(_DWORD *)(v19 + 2052);
                          v229 = *(_QWORD *)(v19 + 1416);
                          *(_QWORD *)v229 = v19;
                          *(_DWORD *)(v229 + 16) = v228;
                          if ( !*(_DWORD *)(v19 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v225 ^ *(_QWORD *)(v19 + 2688);
                          sub_140BC7384(v19, 0LL, v225, 256LL);
                        }
                      }
                    }
                  }
                }
              }
              (*(void (__fastcall **)(_BYTE *))(v19 + 424))(v2115);
              v230 = *((_DWORD *)v41 + 6) << 15;
              goto LABEL_405;
            }
            if ( v63 != 8 )
            {
              if ( v63 != 10 )
              {
                if ( v63 == 13 )
                {
                  v64 = (_QWORD *)*((_QWORD *)v41 + 1);
                  v65 = *((unsigned int *)v41 + 4);
                  v66 = v64;
                  *(_DWORD *)(v19 + 2120) += v65;
                  v67 = (const char *)v64;
                  v68 = *(_DWORD *)(v19 + 2100);
                  v69 = *(_QWORD *)(v19 + 2104);
                  if ( v64 < (_QWORD *)((char *)v64 + v65) )
                  {
                    do
                    {
                      _mm_prefetch(v67, 0);
                      v67 += 64;
                    }
                    while ( v67 < (const char *)v64 + v65 );
                  }
                  v70 = *(_QWORD *)(v19 + 2104);
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
                      v2112 = *((_QWORD *)&v74 + 1);
                      v75 = v74 ^ BYTE8(v74) ^ v68;
                      v31 = 0xFFFFFFFFLL;
                      v68 = v75 & 0x3F;
                      if ( !v68 )
                        LOBYTE(v68) = 1;
                      --v71;
                    }
                    while ( v71 );
                    v19 = (unsigned __int64)v1978;
                  }
                  else
                  {
                    v31 = 0xFFFFFFFFLL;
                  }
                  v76 = v65 & 0x7F;
                  if ( v76 >= 8 )
                  {
                    v77 = (unsigned __int64)v76 >> 3;
                    do
                    {
                      v70 = __ROL8__(*v66++ ^ v70, v68);
                      v76 -= 8;
                      --v77;
                    }
                    while ( v77 );
                  }
                  for ( ; v76; --v76 )
                  {
                    v78 = *(unsigned __int8 *)v66;
                    v66 = (_QWORD *)((char *)v66 + 1);
                    v70 = __ROL8__(v78 ^ v70, v68);
                  }
                  for ( mm = v70; ; LODWORD(v70) = mm ^ v70 )
                  {
                    mm >>= 31;
                    if ( !mm )
                      break;
                  }
                  v80 = v70 & 0x7FFFFFFF;
                  if ( v80 == *((_DWORD *)v41 + 5) )
                    goto LABEL_203;
                  _InterlockedOr(v1969, 0);
                  if ( (*((_DWORD *)v41 + 6) & 1) != 0 )
                  {
                    if ( **(_BYTE **)(v19 + 1400) )
                      goto LABEL_203;
                  }
                  v81 = *((unsigned int *)v41 + 4);
                  v31 = *((_QWORD *)v41 + 1);
                  if ( *((_DWORD *)v41 + 4) )
                  {
                    v82 = 64LL;
                    if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
                    {
                      v83 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v84 = v31 & 0xFFFFFFFFFFFFF000uLL;
                      v85 = (v31 + v81 - 1) | 0xFFF;
                      v86 = (v31 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v87 = v83;
                        while ( 1 )
                        {
                          v88 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                                  v84,
                                  0LL,
                                  v82,
                                  v66);
                          if ( v88 != -1073741267 )
                            break;
                          if ( v83 > 1u )
                            goto LABEL_187;
                          v87 = v83;
                          __writecr8(v83);
                          __writecr8(2uLL);
                        }
                        if ( v88 < 0 )
                          break;
LABEL_187:
                        v84 += 4096LL;
                        v86 += 4096LL;
                        if ( v86 == v85 )
                        {
                          __writecr8(v87);
                          v41 = v1973;
                          i9 = 0;
LABEL_203:
                          if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) == 0 )
                            goto LABEL_237;
                          v97 = *((unsigned int *)v41 + 4);
                          if ( !(_DWORD)v97 )
                            goto LABEL_237;
                          sub_140516AFC(v19, *((_QWORD *)v41 + 1), v97, v2113);
                          v31 = 16LL;
                          v98 = v41 + 28;
                          v99 = v2113;
                          do
                          {
                            v100 = *(_QWORD *)v99;
                            v99 += 8;
                            v101 = *(_QWORD *)v98;
                            v98 += 8;
                            if ( v100 != v101 )
                              goto LABEL_212;
                            v31 = (unsigned int)(v31 - 8);
                          }
                          while ( (unsigned int)v31 >= 8 );
                          if ( !(_DWORD)v31 )
                            goto LABEL_236;
                          while ( 1 )
                          {
                            v102 = *v99++;
                            v103 = *v98++;
                            if ( v102 != v103 )
                              break;
                            v52 = (_DWORD)v31 == 1;
                            v31 = (unsigned int)(v31 - 1);
                            if ( v52 )
                              goto LABEL_236;
                          }
LABEL_212:
                          _InterlockedOr(v1969, 0);
                          if ( (*((_DWORD *)v41 + 6) & 1) != 0 && **(_BYTE **)(v19 + 1400) )
                            goto LABEL_236;
                          v31 = *((_QWORD *)v41 + 1);
                          if ( !*((_DWORD *)v41 + 4) )
                            goto LABEL_225;
                          v104 = 64LL;
                          if ( (*(_DWORD *)(v19 + 2524) & 0x40) == 0 )
                            goto LABEL_225;
                          v105 = KeGetCurrentIrql();
                          v106 = v31 & 0xFFFFFFFFFFFFF000uLL;
                          v107 = (v31 + *((unsigned int *)v41 + 4) - 1LL) | 0xFFF;
                          v108 = (v31 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_217:
                          __writecr8(2uLL);
                          while ( 1 )
                          {
                            v109 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, char *))(v19 + 1128))(
                                     v106,
                                     0LL,
                                     v104,
                                     v99);
                            if ( v109 == -1073741267 )
                            {
                              if ( v105 <= 1u )
                              {
                                __writecr8(v105);
                                goto LABEL_217;
                              }
                            }
                            else if ( v109 < 0 )
                            {
                              __writecr8(v105);
LABEL_225:
                              v110 = *((_QWORD *)v41 + 1);
                              if ( !*(_DWORD *)(v19 + 2328) )
                              {
                                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                                *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                                *(_QWORD *)(v19 + 2352) = *(int *)v41;
                                *(_QWORD *)(v19 + 2360) = v110;
                                *(_DWORD *)(v19 + 2328) = 1;
                                v111 = *(_DWORD *)(v19 + 2520);
                                if ( (v111 & 0x20000000) == 0
                                  && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0
                                  && (v111 & 1) != 0 )
                                {
                                  v112 = *(unsigned int *)(v19 + 2676);
                                  v113 = *(_QWORD *)(v19 + 2104);
                                  v114 = *(_QWORD *)(v19 + 2680);
                                  v31 = v112 + v19;
                                  v115 = v112
                                       + v19
                                       + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v112) >> 3);
                                  while ( v31 != v115 )
                                  {
                                    *(_QWORD *)v31 ^= v114;
                                    v114 = ((v113 ^ *(_QWORD *)v31) + __ROR8__(v114, v114 & 0x3F)) ^ 0xEFA;
                                    v31 += 8LL;
                                  }
                                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                                  if ( v114 != *(_QWORD *)(v19 + 2688) )
                                  {
                                    v116 = *(_DWORD *)(v19 + 2052);
                                    v117 = *(_QWORD *)(v19 + 1416);
                                    *(_QWORD *)v117 = v19;
                                    *(_DWORD *)(v117 + 16) = v116;
                                    if ( !*(_DWORD *)(v19 + 2328) )
                                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v114 ^ *(_QWORD *)(v19 + 2688);
                                    sub_140BC7384(v19, 0LL, v114, 256LL);
                                  }
                                }
                              }
LABEL_236:
                              *(_DWORD *)(v19 + 2120) += 16 * *((_DWORD *)v41 + 4);
LABEL_237:
                              v37 = 1;
                              goto LABEL_238;
                            }
                            v106 += 4096LL;
                            v108 += 4096LL;
                            if ( v108 == v107 )
                            {
                              __writecr8(v105);
                              goto LABEL_236;
                            }
                          }
                        }
                      }
                      __writecr8(v87);
                      v41 = v1973;
                      i9 = 0;
                    }
                  }
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = *((unsigned int *)v41 + 5) ^ (unsigned __int64)v80;
                  v89 = *((_QWORD *)v41 + 1);
                  if ( !*(_DWORD *)(v19 + 2328) )
                  {
                    *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v19 + 2352) = *(int *)v41;
                    *(_QWORD *)(v19 + 2360) = v89;
                    *(_DWORD *)(v19 + 2328) = 1;
                    v90 = *(_DWORD *)(v19 + 2520);
                    if ( (v90 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v90 & 1) != 0 )
                    {
                      v91 = *(unsigned int *)(v19 + 2676);
                      v92 = *(_QWORD *)(v19 + 2104);
                      v93 = *(_QWORD *)(v19 + 2680);
                      v31 = v91 + v19;
                      v94 = v91 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v91) >> 3);
                      while ( v31 != v94 )
                      {
                        *(_QWORD *)v31 ^= v93;
                        v93 = ((v92 ^ *(_QWORD *)v31) + __ROR8__(v93, v93 & 0x3F)) ^ 0xEFA;
                        v31 += 8LL;
                      }
                      *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                      if ( v93 != *(_QWORD *)(v19 + 2688) )
                      {
                        v95 = *(_DWORD *)(v19 + 2052);
                        v96 = *(_QWORD *)(v19 + 1416);
                        *(_QWORD *)v96 = v19;
                        *(_DWORD *)(v96 + 16) = v95;
                        if ( !*(_DWORD *)(v19 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v93 ^ *(_QWORD *)(v19 + 2688);
                        sub_140BC7384(v19, 0LL, v93, 256LL);
                      }
                    }
                  }
                  goto LABEL_203;
                }
                goto LABEL_2253;
              }
              v119 = (unsigned int *)&v41[16 * *(unsigned int *)(v19 + 2116) + 48];
              v120 = (unsigned __int64)&v41[16 * *((unsigned int *)v41 + 7) + 48];
              v1976 = v120;
              while ( 1 )
              {
                if ( (*v119 & 0x80000000) == 0 )
                {
                  v121 = *((_QWORD *)v119 + 1);
                  v122 = v119[1];
                  v123 = (_QWORD *)v121;
                  *(_DWORD *)(v19 + 2120) += v122;
                  v124 = (const char *)v121;
                  v125 = *(unsigned int *)(v19 + 2100);
                  v126 = *(_QWORD *)(v19 + 2104);
                  v1975 = v121;
                  LODWORD(v1979) = v122;
                  if ( v121 < v121 + v122 )
                  {
                    do
                    {
                      _mm_prefetch(v124, 0);
                      v124 += 64;
                    }
                    while ( (unsigned __int64)v124 < v121 + v122 );
                  }
                  v127 = v126;
                  v128 = (unsigned int)v122 >> 7;
                  if ( (unsigned int)v122 >> 7 )
                  {
                    do
                    {
                      v129 = 8LL;
                      do
                      {
                        v130 = v123[1] ^ __ROL8__(*v123 ^ v127, v125);
                        v123 += 2;
                        v127 = __ROL8__(v130, v125);
                        --v129;
                      }
                      while ( v129 );
                      v131 = (__ROL8__(v126 ^ ((unsigned __int64)v123 - v121), 17) ^ v126 ^ ((unsigned __int64)v123
                                                                                           - v121))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v2104 = *((_QWORD *)&v131 + 1);
                      v125 = ((unsigned __int8)v131 ^ (unsigned __int8)(BYTE8(v131) ^ v125)) & 0x3F;
                      if ( !(_DWORD)v125 )
                        v125 = 1LL;
                      --v128;
                    }
                    while ( v128 );
                    v19 = (unsigned __int64)v1978;
                    LODWORD(v122) = v1979;
                    v120 = v1976;
                  }
                  v31 = v122 & 0x7F;
                  if ( (unsigned int)v31 >= 8 )
                  {
                    v132 = (unsigned __int64)(v122 & 0x7F) >> 3;
                    do
                    {
                      v127 = __ROL8__(*v123++ ^ v127, v125);
                      v31 = (unsigned int)(v31 - 8);
                      --v132;
                    }
                    while ( v132 );
                  }
                  if ( (_DWORD)v31 )
                  {
                    do
                    {
                      v133 = *(unsigned __int8 *)v123;
                      v123 = (_QWORD *)((char *)v123 + 1);
                      v127 = __ROL8__(v133 ^ v127, v125);
                      v31 = (unsigned int)(v31 - 1);
                    }
                    while ( (_DWORD)v31 );
                    v19 = (unsigned __int64)v1978;
                  }
                  for ( nn = v127; ; LODWORD(v127) = nn ^ v127 )
                  {
                    nn >>= 31;
                    if ( !nn )
                      break;
                  }
                  v135 = v127 & 0x7FFFFFFF;
                  if ( v135 == (*v119 & 0x7FFFFFFF) )
                    goto LABEL_274;
                  v136 = (unsigned int)v122;
                  if ( (_DWORD)v122 )
                  {
                    v31 = 64LL;
                    if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
                    {
                      v137 = KeGetCurrentIrql();
                      v138 = v121 & 0xFFFFFFFFFFFFF000uLL;
                      v139 = (v136 + v121 - 1) | 0xFFF;
                      v140 = (v121 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        __writecr8(2uLL);
                        while ( 1 )
                        {
                          v141 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v19 + 1128))(
                                   v138,
                                   0LL,
                                   v123,
                                   v125);
                          if ( v141 == -1073741267 )
                            break;
                          if ( v141 < 0 )
                          {
                            __writecr8(v137);
                            v121 = v1975;
                            v120 = v1976;
                            v41 = v1973;
                            goto LABEL_281;
                          }
LABEL_272:
                          v138 += 4096LL;
                          v140 += 4096LL;
                          if ( v140 == v139 )
                          {
                            __writecr8(v137);
                            v120 = v1976;
                            goto LABEL_274;
                          }
                        }
                        if ( v137 > 1u )
                          goto LABEL_272;
                        __writecr8(v137);
                      }
                    }
                  }
LABEL_281:
                  v144 = *v119;
                  LODWORD(v144) = v144 & 0x7FFFFFFF;
                  if ( *(_DWORD *)(v19 + 2328) )
                    goto LABEL_274;
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v144 ^ v135;
                  if ( *(_DWORD *)(v19 + 2328) )
                    goto LABEL_274;
                  v31 = 1LL;
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *(int *)v41;
                  *(_QWORD *)(v19 + 2360) = v121;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v145 = *(_DWORD *)(v19 + 2520);
                  if ( (v145 & 0x20000000) != 0 )
                    goto LABEL_274;
                  if ( (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 )
                    goto LABEL_274;
                  if ( (v145 & 1) == 0 )
                    goto LABEL_274;
                  v146 = *(unsigned int *)(v19 + 2676);
                  v147 = *(_QWORD *)(v19 + 2104);
                  v148 = *(_QWORD *)(v19 + 2680);
                  v31 = v146 + v19;
                  v149 = v146 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v146) >> 3);
                  while ( v31 != v149 )
                  {
                    *(_QWORD *)v31 ^= v148;
                    v148 = ((v147 ^ *(_QWORD *)v31) + __ROR8__(v148, v148 & 0x3F)) ^ 0xEFA;
                    v31 += 8LL;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v148 == *(_QWORD *)(v19 + 2688) )
                  {
LABEL_274:
                    i9 = 0;
                  }
                  else
                  {
                    v150 = *(_DWORD *)(v19 + 2052);
                    i9 = 0;
                    v151 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v151 = v19;
                    *(_DWORD *)(v151 + 16) = v150;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v148 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v148, 256LL);
                  }
                }
                v119 += 4;
                v142 = v119 == (unsigned int *)v120;
                if ( (unsigned __int64)v119 >= v120 )
                  goto LABEL_278;
                v41 = v1973;
                if ( *(_DWORD *)(v19 + 2120) >= *(_DWORD *)(v19 + 2124) )
                {
                  v142 = v119 == (unsigned int *)v120;
LABEL_278:
                  if ( v142 )
                    LODWORD(v143) = 0;
                  else
                    v143 = ((char *)v119 - (v1973 + 48)) >> 4;
                  *(_DWORD *)(v19 + 2116) = v143;
LABEL_295:
                  v37 = 1;
                  goto LABEL_238;
                }
              }
            }
            v152 = *((_QWORD *)v41 + 3);
            if ( *(_WORD *)(v152 + *(_QWORD *)(v19 + 1792) + *(_QWORD *)(v19 + 1840)) != *((_WORD *)v41 + 17)
              && !*(_DWORD *)(v19 + 2328) )
            {
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *(int *)v41;
              *(_QWORD *)(v19 + 2360) = v152;
              *(_DWORD *)(v19 + 2328) = 1;
              v153 = *(_DWORD *)(v19 + 2520);
              if ( (v153 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v153 & 1) != 0 )
              {
                v154 = *(unsigned int *)(v19 + 2676);
                v155 = *(_QWORD *)(v19 + 2104);
                v156 = *(_QWORD *)(v19 + 2680);
                v157 = (_QWORD *)(v154 + v19);
                v158 = v154 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v154) >> 3);
                while ( v157 != (_QWORD *)v158 )
                {
                  *v157 ^= v156;
                  v156 = ((v155 ^ *v157++) + __ROR8__(v156, v156 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v156 != *(_QWORD *)(v19 + 2688) )
                {
                  v159 = *(_DWORD *)(v19 + 2052);
                  v160 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v160 = v19;
                  *(_DWORD *)(v160 + 16) = v159;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v156 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v156, 256LL);
                }
              }
            }
            if ( (*(_WORD *)(v19 + 1848) & *((_WORD *)v41 + 17)) == 0
              && *(_QWORD *)(v152 + *(_QWORD *)(v19 + 1800)) != v152 + *(_QWORD *)(v19 + 1800)
              && !*(_DWORD *)(v19 + 2328) )
            {
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *(int *)v41;
              *(_QWORD *)(v19 + 2360) = v152;
              *(_DWORD *)(v19 + 2328) = 1;
              v161 = *(_DWORD *)(v19 + 2520);
              if ( (v161 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v161 & 1) != 0 )
              {
                v162 = *(unsigned int *)(v19 + 2676);
                v163 = *(_QWORD *)(v19 + 2104);
                v164 = *(_QWORD *)(v19 + 2680);
                v165 = (_QWORD *)(v162 + v19);
                v166 = v162 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v162) >> 3);
                while ( v165 != (_QWORD *)v166 )
                {
                  *v165 ^= v164;
                  v164 = ((v163 ^ *v165++) + __ROR8__(v164, v164 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v164 != *(_QWORD *)(v19 + 2688) )
                {
                  v167 = *(_DWORD *)(v19 + 2052);
                  v168 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v168 = v19;
                  *(_DWORD *)(v168 + 16) = v167;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v164 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v164, 256LL);
                }
              }
            }
            v169 = (_QWORD *)*((_QWORD *)v41 + 1);
            v170 = *((unsigned int *)v41 + 4);
            v171 = v169;
            *(_DWORD *)(v19 + 2120) += v170;
            v172 = (const char *)v169;
            v173 = *(_DWORD *)(v19 + 2100);
            v174 = *(_QWORD *)(v19 + 2104);
            if ( v169 < (_QWORD *)((char *)v169 + v170) )
            {
              do
              {
                _mm_prefetch(v172, 0);
                v172 += 64;
              }
              while ( v172 < (const char *)v169 + v170 );
            }
            v175 = *(_QWORD *)(v19 + 2104);
            v176 = (unsigned int)v170 >> 7;
            if ( (unsigned int)v170 >> 7 )
            {
              do
              {
                v177 = 8LL;
                do
                {
                  v178 = v171[1] ^ __ROL8__(*v171 ^ v175, v173);
                  v171 += 2;
                  v175 = __ROL8__(v178, v173);
                  --v177;
                }
                while ( v177 );
                v179 = (__ROL8__(v174 ^ ((char *)v171 - (char *)v169), 17) ^ v174 ^ (unsigned __int64)((char *)v171 - (char *)v169))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2103 = *((_QWORD *)&v179 + 1);
                v173 = ((unsigned __int8)v179 ^ (unsigned __int8)(BYTE8(v179) ^ v173)) & 0x3F;
                if ( !v173 )
                  LOBYTE(v173) = 1;
                --v176;
              }
              while ( v176 );
              v19 = (unsigned __int64)v1978;
            }
            v180 = v170 & 0x7F;
            if ( v180 >= 8 )
            {
              v181 = (unsigned __int64)v180 >> 3;
              do
              {
                v175 = __ROL8__(*v171++ ^ v175, v173);
                v180 -= 8;
                --v181;
              }
              while ( v181 );
            }
            for ( ; v180; --v180 )
            {
              v182 = *(unsigned __int8 *)v171;
              v171 = (_QWORD *)((char *)v171 + 1);
              v175 = __ROL8__(v182 ^ v175, v173);
            }
            for ( i1 = v175; ; LODWORD(v175) = i1 ^ v175 )
            {
              i1 >>= 31;
              if ( !i1 )
                break;
            }
            v184 = v175 & 0x7FFFFFFF;
            v185 = 0;
            if ( v184 != *((_DWORD *)v41 + 5) )
            {
              if ( !*(_DWORD *)v41 )
                v185 = *((_DWORD *)v41 + 6) != 0;
              v186 = *((_QWORD *)v41 + 1);
              if ( *((_DWORD *)v41 + 4) )
              {
                v187 = 64LL;
                if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
                {
                  v188 = KeGetCurrentIrql();
                  v189 = v186 & 0xFFFFFFFFFFFFF000uLL;
                  v190 = (v186 + *((unsigned int *)v41 + 4) - 1LL) | 0xFFF;
                  v191 = (v186 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    __writecr8(2uLL);
                    while ( 1 )
                    {
                      v192 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                               v189,
                               0LL,
                               v187,
                               v171);
                      if ( v192 == -1073741267 )
                        break;
                      if ( v192 < 0 )
                      {
LABEL_359:
                        __writecr8(v188);
                        v41 = v1973;
                        i9 = 0;
                        goto LABEL_360;
                      }
LABEL_350:
                      v189 += 4096LL;
                      v191 += 4096LL;
                      if ( v191 == v190 )
                      {
                        __writecr8(v188);
                        v41 = v1973;
                        i9 = 0;
                        goto LABEL_352;
                      }
                    }
                    if ( v185 )
                      goto LABEL_359;
                    if ( v188 > 1u )
                      goto LABEL_350;
                    __writecr8(v188);
                  }
                }
              }
LABEL_360:
              if ( !*(_DWORD *)(v19 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = *((unsigned int *)v41 + 5) ^ (unsigned __int64)v184;
              v203 = *((_QWORD *)v41 + 1);
              if ( !*(_DWORD *)(v19 + 2328) )
              {
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *(int *)v41;
                *(_QWORD *)(v19 + 2360) = v203;
                *(_DWORD *)(v19 + 2328) = 1;
                v204 = *(_DWORD *)(v19 + 2520);
                if ( (v204 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v204 & 1) != 0 )
                {
                  v205 = *(unsigned int *)(v19 + 2676);
                  v206 = *(_QWORD *)(v19 + 2104);
                  v207 = *(_QWORD *)(v19 + 2680);
                  v208 = (_QWORD *)(v205 + v19);
                  v209 = v205 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v205) >> 3);
                  while ( v208 != (_QWORD *)v209 )
                  {
                    *v208 ^= v207;
                    v207 = ((v206 ^ *v208++) + __ROR8__(v207, v207 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v207 != *(_QWORD *)(v19 + 2688) )
                  {
                    v210 = *(_DWORD *)(v19 + 2052);
                    v211 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v211 = v19;
                    *(_DWORD *)(v211 + 16) = v210;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v207 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v207, 256LL);
                  }
                }
              }
            }
LABEL_352:
            v2055 = v41 + 48;
            v193 = *((_WORD *)v41 + 16);
            v1971 = &v2023;
            v2054[0] = v193;
            v2054[1] = v193;
            v194 = *(_QWORD *)(v19 + 1280);
            v195 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v19 + 504);
            LOBYTE(v1970) = 0;
            if ( v195(v2054, 0LL, 0LL, 0LL, v194, v1970, 0LL, &v2023) < 0 )
              goto LABEL_237;
            v196 = v2023;
            if ( v2023 != *((_QWORD *)v41 + 3) && !*(_DWORD *)(v19 + 2328) )
            {
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *(int *)v41;
              *(_QWORD *)(v19 + 2360) = v196;
              *(_DWORD *)(v19 + 2328) = 1;
              v197 = *(_DWORD *)(v19 + 2520);
              if ( (v197 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v197 & 1) != 0 )
              {
                v198 = *(unsigned int *)(v19 + 2676);
                v199 = *(_QWORD *)(v19 + 2104);
                v200 = *(_QWORD *)(v19 + 2680);
                v201 = (_QWORD *)(v198 + v19);
                v202 = v198 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v198) >> 3);
                while ( v201 != (_QWORD *)v202 )
                {
                  *v201 ^= v200;
                  v200 = ((v199 ^ *v201++) + __ROR8__(v200, v200 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v200 != *(_QWORD *)(v19 + 2688) )
                {
                  v212 = *(_DWORD *)(v19 + 2052);
                  v213 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v213 = v19;
                  *(_DWORD *)(v213 + 16) = v212;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v200 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v200, 256LL);
                }
              }
            }
            v214 = *(void (**)(void))(v19 + 496);
            goto LABEL_380;
          }
          v231 = *(_DWORD *)(v19 + 2128);
          if ( (v231 & 1) == 0 )
            goto LABEL_238;
          if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
          {
            v233 = __rdtsc();
            v234 = (__ROR8__(v233, 3) ^ v233) * (unsigned __int128)0x7010008004002001uLL;
            v2102 = *((_QWORD *)&v234 + 1);
            v232 = v234 ^ *((_QWORD *)&v234 + 1);
            v31 = ((unsigned __int64)v234 ^ *((_QWORD *)&v234 + 1)) / 3;
            LODWORD(v1979) = v232 == 3 * v31;
          }
          else
          {
            v232 = v231 & 3;
            LODWORD(v1979) = (_BYTE)v232 == 3;
          }
          v235 = *(void (__fastcall **)(_QWORD, _QWORD))(v19 + 392);
          v236 = 0;
          v237 = *(_QWORD *)(v19 + 1344);
          v1974 = 0;
          v235(v232, v31);
          if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 || (v238 = *(_DWORD *)(v19 + 2424), v238 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 312))(*(_QWORD *)(v19 + 2632), 0LL);
            v239 = 0x80;
          }
          else
          {
            v239 = 1 << v238;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(v19 + 328))(v237, 0LL);
          v240 = *(volatile signed __int8 ***)(v19 + 1304);
          v241 = *v240;
          if ( *v240 != (volatile signed __int8 *)v240 )
          {
            do
            {
              _InterlockedOr8(&v241[*(_QWORD *)(v19 + 1736) - *(_QWORD *)(v19 + 1760)], v239);
              v241 = *(volatile signed __int8 **)v241;
              ++v236;
            }
            while ( v241 != (volatile signed __int8 *)v240 );
            v1974 = v236;
          }
          v242 = 4LL;
          v243 = **(_QWORD **)(v19 + 1352);
          v244 = *(unsigned int *)(*(_QWORD *)(v19 + 1856) + v243);
          while ( 1 )
          {
            v245 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v19 + 272))(v243, v242);
            if ( v245 )
              break;
LABEL_462:
            v242 += 4LL;
            if ( v242 >= v244 )
            {
              if ( v239 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 320))(*(_QWORD *)(v19 + 2632), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 336))(*(_QWORD *)(v19 + 1344), 0LL);
              (*(void (**)(void))(v19 + 400))();
              *(_DWORD *)(v19 + 2120) += ((unsigned int)(v244 >> 2) + v1974) << 8;
              goto LABEL_466;
            }
          }
          v246 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(v19 + 280))(v245);
          v247 = v246;
          v248 = *v246 & 0x7F;
          if ( v248 == 3 )
          {
            if ( (v239 & v246[*(_QWORD *)(v19 + 1736)]) == 0
              && (*(_DWORD *)&v246[*(_QWORD *)(v19 + 1744)] & *(_DWORD *)(v19 + 1768)) != 0
              && !*(_DWORD *)(v19 + 2328) )
            {
              v249 = (int *)v1973;
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = (char *)v249 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *v249;
              *(_QWORD *)(v19 + 2360) = v246;
              *(_DWORD *)(v19 + 2328) = 1;
              v250 = *(_DWORD *)(v19 + 2520);
              if ( (v250 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v250 & 1) != 0 )
              {
                v251 = *(unsigned int *)(v19 + 2676);
                v252 = *(_QWORD *)(v19 + 2104);
                v253 = *(_QWORD *)(v19 + 2680);
                v254 = (_QWORD *)(v251 + v19);
                v255 = v251 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v251) >> 3);
                while ( v254 != (_QWORD *)v255 )
                {
                  *v254 ^= v253;
                  v253 = ((v252 ^ *v254++) + __ROR8__(v253, v253 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v253 != *(_QWORD *)(v19 + 2688) )
                {
                  v256 = *(_DWORD *)(v19 + 2052);
                  v257 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v257 = v19;
                  *(_DWORD *)(v257 + 16) = v256;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v253 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v253, 256LL);
                }
              }
            }
            _InterlockedAnd8(&v247[*(_QWORD *)(v19 + 1736)], ~v239);
            goto LABEL_461;
          }
          if ( v248 == 6 )
          {
            if ( (_DWORD)v1979 )
            {
              if ( (v258 = *(_QWORD *)(v19 + 1680), v259 = *(_QWORD *)&v246[v258 + 32], v259 != *(_QWORD *)(v19 + 800))
                && v259 != *(_QWORD *)(v19 + 808)
                || *(_QWORD *)&v247[v258 + 48] != *(_QWORD *)(v19 + 816)
                || *(_QWORD *)&v247[v258 + 40] != *(_QWORD *)(v19 + 824) )
              {
                if ( !*(_DWORD *)(v19 + 2328) )
                {
                  v260 = (int *)v1973;
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = (char *)v260 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *v260;
                  *(_QWORD *)(v19 + 2360) = v247;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v261 = *(_DWORD *)(v19 + 2520);
                  if ( (v261 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v261 & 1) != 0 )
                  {
                    v262 = *(unsigned int *)(v19 + 2676);
                    v263 = *(_QWORD *)(v19 + 2104);
                    v264 = *(_QWORD *)(v19 + 2680);
                    v265 = (_QWORD *)(v262 + v19);
                    v266 = v262 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v262) >> 3);
                    while ( v265 != (_QWORD *)v266 )
                    {
                      *v265 ^= v264;
                      v264 = ((v263 ^ *v265++) + __ROR8__(v264, v264 & 0x3F)) ^ 0xEFA;
                    }
                    goto LABEL_457;
                  }
                }
              }
            }
          }
          else if ( v248 )
          {
            if ( !*(_DWORD *)(v19 + 2328) )
            {
              v267 = (int *)v1973;
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = (char *)v267 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *v267;
              *(_QWORD *)(v19 + 2360) = v246;
              *(_DWORD *)(v19 + 2328) = 1;
              v268 = *(_DWORD *)(v19 + 2520);
              if ( (v268 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v268 & 1) != 0 )
              {
                v269 = *(unsigned int *)(v19 + 2676);
                v270 = *(_QWORD *)(v19 + 2104);
                v264 = *(_QWORD *)(v19 + 2680);
                v271 = (_QWORD *)(v269 + v19);
                v272 = v269 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v269) >> 3);
                while ( v271 != (_QWORD *)v272 )
                {
                  *v271 ^= v264;
                  v264 = ((v270 ^ *v271++) + __ROR8__(v264, v264 & 0x3F)) ^ 0xEFA;
                }
LABEL_457:
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v264 != *(_QWORD *)(v19 + 2688) )
                {
                  v273 = *(_DWORD *)(v19 + 2052);
                  v274 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v274 = v19;
                  *(_DWORD *)(v274 + 16) = v273;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v264 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v264, 256LL);
                }
              }
            }
          }
LABEL_461:
          (*(void (__fastcall **)(__int64, __int64))(v19 + 304))(v243, v245);
          goto LABEL_462;
        }
        goto LABEL_2692;
      }
      if ( v63 == 21 )
      {
        v1088 = *((_DWORD *)v41 + 10);
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v19 + 432))(v2116, *((unsigned int *)v41 + 11));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v19 + 480))(v2116, v2117);
        v52 = v1088 == 0;
        v1089 = __readcr4();
        if ( v52 )
          v1089 = __readcr0();
        (*(void (__fastcall **)(_BYTE *))(v19 + 424))(v2117);
        v31 = *((_QWORD *)v41 + 4);
        v1090 = v1089 & *((_QWORD *)v41 + 3);
        if ( v1090 == v31 )
          goto LABEL_238;
        v1091 = *((_QWORD *)v41 + 5);
        if ( *(_DWORD *)(v19 + 2328) )
          goto LABEL_238;
        v31 ^= v1090;
        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v31;
        if ( *(_DWORD *)(v19 + 2328) )
          goto LABEL_238;
        *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v19 + 2352) = *(int *)v41;
        *(_QWORD *)(v19 + 2360) = v1091;
        *(_DWORD *)(v19 + 2328) = 1;
        v1092 = *(_DWORD *)(v19 + 2520);
        if ( (v1092 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v1092 & 1) == 0 )
          goto LABEL_238;
        v1093 = *(unsigned int *)(v19 + 2676);
        v1094 = *(_QWORD *)(v19 + 2104);
        v336 = *(_QWORD *)(v19 + 2680);
        v31 = v1093 + v19;
        v1095 = v1093 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1093) >> 3);
        while ( v31 != v1095 )
        {
          *(_QWORD *)v31 ^= v336;
          v336 = ((v1094 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
          v31 += 8LL;
        }
        goto LABEL_550;
      }
      if ( v63 != 24 )
      {
        if ( v63 != 25 )
        {
          if ( v63 == 26 )
          {
            if ( (*(_DWORD *)(v19 + 2128) & 1) != 0 )
              goto LABEL_238;
            v563 = *(_QWORD *)(v19 + 1440);
            v564 = *(_QWORD *)(v19 + 1344);
            v1975 = *(_QWORD *)(v19 + 1448);
            v565 = *(void (__fastcall **)(_QWORD, _QWORD))(v19 + 392);
            LODWORD(v1979) = 0;
            v1976 = v563;
            v565((unsigned int)(v63 - 26), v31);
            if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 || (v566 = *(_DWORD *)(v19 + 2424), v566 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 312))(*(_QWORD *)(v19 + 2632), 0LL);
              v567 = 0x80;
            }
            else
            {
              v567 = 1 << v566;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v19 + 328))(v564, 0LL);
            v568 = *(volatile signed __int8 ***)(v19 + 1304);
            v569 = *v568;
            if ( *v568 != (volatile signed __int8 *)v568 )
            {
              do
              {
                _InterlockedOr8(&v569[*(_QWORD *)(v19 + 1736) - *(_QWORD *)(v19 + 1760)], v567);
                v569 = *(volatile signed __int8 **)v569;
                ++i9;
              }
              while ( v569 != (volatile signed __int8 *)v568 );
              LODWORD(v1979) = i9;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v19 + 328))(v563, 0LL);
            v570 = *(_QWORD ***)(v19 + 1432);
            v571 = *v570;
            if ( *v570 != v570 )
            {
              v572 = v1975;
              v573 = (int *)v1973;
              do
              {
                v574 = (char *)v571 - *(_QWORD *)(v19 + 1872);
                if ( v574 != (char *)v572 )
                {
                  v575 = *(_QWORD *)&v574[*(_QWORD *)(v19 + 1864)];
                  if ( (v567 & *(_BYTE *)(v575 + *(_QWORD *)(v19 + 1736))) == 0
                    && (*(_DWORD *)(v575 + *(_QWORD *)(v19 + 1744)) & *(_DWORD *)(v19 + 1768)) != 0
                    && !*(_DWORD *)(v19 + 2328) )
                  {
                    *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v19 + 2344) = (char *)v573 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v19 + 2352) = *v573;
                    *(_QWORD *)(v19 + 2360) = v575;
                    *(_DWORD *)(v19 + 2328) = 1;
                    v576 = *(_DWORD *)(v19 + 2520);
                    if ( (v576 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v576 & 1) != 0 )
                    {
                      v577 = *(unsigned int *)(v19 + 2676);
                      v578 = *(_QWORD *)(v19 + 2104);
                      v579 = *(_QWORD *)(v19 + 2680);
                      v580 = (_QWORD *)(v577 + v19);
                      v581 = v577 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v577) >> 3);
                      while ( v580 != (_QWORD *)v581 )
                      {
                        *v580 ^= v579;
                        v579 = ((v578 ^ *v580++) + __ROR8__(v579, v579 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                      if ( v579 != *(_QWORD *)(v19 + 2688) )
                      {
                        v582 = *(_DWORD *)(v19 + 2052);
                        v583 = *(_QWORD *)(v19 + 1416);
                        *(_QWORD *)v583 = v19;
                        *(_DWORD *)(v583 + 16) = v582;
                        if ( !*(_DWORD *)(v19 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v579 ^ *(_QWORD *)(v19 + 2688);
                        sub_140BC7384(v19, 0LL, v579, 256LL);
                      }
                    }
                  }
                  _InterlockedAnd8((volatile signed __int8 *)(v575 + *(_QWORD *)(v19 + 1736)), ~v567);
                  v572 = v1975;
                }
                v571 = (_QWORD *)*v571;
              }
              while ( v571 != v570 );
              i9 = v1979;
              v563 = v1976;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v19 + 336))(v563, 0LL);
            if ( v567 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 320))(*(_QWORD *)(v19 + 2632), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 336))(*(_QWORD *)(v19 + 1344), 0LL);
            (*(void (**)(void))(v19 + 400))();
            *(_DWORD *)(v19 + 2120) += i9 << 8;
            goto LABEL_466;
          }
          if ( v63 == 27 )
          {
            if ( (*(_DWORD *)(v19 + 2128) & 1) != 0 )
            {
              v533 = *(_QWORD *)(v19 + 1440);
              v534 = *(void (__fastcall **)(_QWORD, _QWORD))(v19 + 392);
              v535 = *(_QWORD *)(v19 + 1344);
              v1974 = 0;
              v536 = *(_QWORD **)(v19 + 1448);
              v1976 = (__int64)v536;
              v1980 = v533;
              v534((unsigned int)(v63 - 27), v31);
              if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 || (v537 = *(_DWORD *)(v19 + 2424), v537 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 312))(*(_QWORD *)(v19 + 2632), 0LL);
                LOBYTE(v34) = 0x80;
              }
              else
              {
                v34 = 1;
                LOBYTE(v34) = 1 << v537;
              }
              v538 = *(void (__fastcall **)(_QWORD, _QWORD))(v19 + 328);
              v1982 = v34;
              v538(v535, 0LL);
              (*(void (__fastcall **)(unsigned __int64, _QWORD))(v19 + 328))(v533, 0LL);
              v539 = *(_QWORD ***)(v19 + 1432);
              v540 = 0LL;
              v1975 = 0LL;
              v541 = *v539;
              if ( *v539 != v539 )
              {
                do
                {
                  if ( v541 - 3 != v536 )
                  {
                    v542 = *(_QWORD *)((char *)v541 + *(_QWORD *)(v19 + 1864) - 24);
                    if ( (*(_DWORD *)(v542 + *(_QWORD *)(v19 + 1744)) & *(_DWORD *)(v19 + 1768)) == 0 )
                    {
                      v543 = *(_QWORD *)((char *)v541 + *(_QWORD *)(v19 + 1864) - 24);
                      if ( v540 )
                        v543 = 1LL;
                      v540 = v543;
                    }
                    _InterlockedOr8((volatile signed __int8 *)(v542 + *(_QWORD *)(v19 + 1736)), v34);
                  }
                  v541 = (_QWORD *)*v541;
                }
                while ( v541 != v539 );
                v1975 = v540;
              }
              v544 = *(_QWORD ***)(v19 + 1304);
              v545 = *v544;
              if ( *v544 != v544 )
              {
                v546 = v1974;
                v547 = (unsigned __int8)v34;
                v548 = ~(_BYTE)v34;
                v549 = v1976;
                LODWORD(v1979) = v547;
                do
                {
                  v550 = (char *)v545 - *(_QWORD *)(v19 + 1760);
                  if ( (v550[*(_QWORD *)(v19 + 1736)] & v547) == 0 )
                  {
                    v551 = *(_QWORD *)&v550[*(_QWORD *)(v19 + 1752)];
                    if ( v551 )
                    {
                      if ( v551 != v549 && !*(_DWORD *)(v19 + 2328) )
                      {
                        v552 = (int *)v1973;
                        *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v19 + 2344) = (char *)v552 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v19 + 2352) = *v552;
                        *(_QWORD *)(v19 + 2360) = v550;
                        *(_DWORD *)(v19 + 2328) = 1;
                        v553 = *(_DWORD *)(v19 + 2520);
                        if ( (v553 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v553 & 1) != 0 )
                        {
                          v554 = *(unsigned int *)(v19 + 2676);
                          v555 = *(_QWORD *)(v19 + 2104);
                          v556 = *(_QWORD *)(v19 + 2680);
                          v557 = (_QWORD *)(v554 + v19);
                          v558 = v554
                               + v19
                               + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v554) >> 3);
                          while ( v557 != (_QWORD *)v558 )
                          {
                            *v557 ^= v556;
                            v556 = ((v555 ^ *v557++) + __ROR8__(v556, v556 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                          if ( v556 != *(_QWORD *)(v19 + 2688) )
                          {
                            v559 = *(_DWORD *)(v19 + 2052);
                            v560 = *(_QWORD *)(v19 + 1416);
                            *(_QWORD *)v560 = v19;
                            *(_DWORD *)(v560 + 16) = v559;
                            if ( !*(_DWORD *)(v19 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v556 ^ *(_QWORD *)(v19 + 2688);
                            sub_140BC7384(v19, 0LL, v556, 256LL);
                          }
                          v547 = v1979;
                        }
                      }
                    }
                  }
                  _InterlockedAnd8(&v550[*(_QWORD *)(v19 + 1736)], v548);
                  v545 = (_QWORD *)*v545;
                  ++v546;
                }
                while ( v545 != v544 );
                LOBYTE(v34) = v1982;
                v536 = (_QWORD *)v1976;
                v1974 = v546;
                v540 = v1975;
              }
              v37 = 1;
              if ( v540 )
              {
                if ( v540 == 1 )
                {
                  v561 = *(_QWORD ***)(v19 + 1432);
                  for ( i2 = *v561; i2 != v561; i2 = (_QWORD *)*i2 )
                  {
                    if ( i2 - 3 != v536 )
                      _InterlockedAnd8(
                        (volatile signed __int8 *)(*(_QWORD *)((char *)i2 + *(_QWORD *)(v19 + 1864) - 24)
                                                 + *(_QWORD *)(v19 + 1736)),
                        ~(_BYTE)v34);
                  }
                }
                else
                {
                  _InterlockedAnd8((volatile signed __int8 *)(*(_QWORD *)(v19 + 1736) + v540), ~(_BYTE)v34);
                }
              }
              (*(void (__fastcall **)(unsigned __int64, _QWORD))(v19 + 336))(v1980, 0LL);
              if ( (_BYTE)v34 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 320))(*(_QWORD *)(v19 + 2632), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 336))(*(_QWORD *)(v19 + 1344), 0LL);
              (*(void (**)(void))(v19 + 400))();
              *(_DWORD *)(v19 + 2120) += v1974 << 8;
              i9 = 0;
            }
            goto LABEL_238;
          }
          if ( v63 != 28 )
          {
            if ( v63 == 29 )
            {
              v362 = (_QWORD *)*((_QWORD *)v41 + 1);
              v363 = *((unsigned int *)v41 + 4);
              v364 = v362;
              *(_DWORD *)(v19 + 2120) += v363;
              v365 = (const char *)v362;
              v366 = *(_DWORD *)(v19 + 2100);
              v367 = *(_QWORD *)(v19 + 2104);
              if ( v362 < (_QWORD *)((char *)v362 + v363) )
              {
                do
                {
                  _mm_prefetch(v365, 0);
                  v365 += 64;
                }
                while ( v365 < (const char *)v362 + v363 );
              }
              v368 = *(_QWORD *)(v19 + 2104);
              v369 = (unsigned int)v363 >> 7;
              if ( (unsigned int)v363 >> 7 )
              {
                do
                {
                  v370 = 8LL;
                  do
                  {
                    v371 = v364[1] ^ __ROL8__(*v364 ^ v368, v366);
                    v364 += 2;
                    v368 = __ROL8__(v371, v366);
                    --v370;
                  }
                  while ( v370 );
                  v372 = (__ROL8__(v367 ^ ((char *)v364 - (char *)v362), 17) ^ v367 ^ (unsigned __int64)((char *)v364 - (char *)v362))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2100 = *((_QWORD *)&v372 + 1);
                  v373 = v372 ^ BYTE8(v372) ^ v366;
                  v31 = 0xFFFFFFFFLL;
                  v366 = v373 & 0x3F;
                  if ( !v366 )
                    LOBYTE(v366) = 1;
                  --v369;
                }
                while ( v369 );
                v19 = (unsigned __int64)v1978;
              }
              else
              {
                v31 = 0xFFFFFFFFLL;
              }
              v374 = v363 & 0x7F;
              if ( (unsigned int)v374 >= 8 )
              {
                v375 = (unsigned __int64)(unsigned int)v374 >> 3;
                do
                {
                  v368 = __ROL8__(*v364++ ^ v368, v366);
                  v374 = (unsigned int)(v374 - 8);
                  --v375;
                }
                while ( v375 );
              }
              for ( ; (_DWORD)v374; v374 = (unsigned int)(v374 - 1) )
              {
                v376 = *(unsigned __int8 *)v364;
                v364 = (_QWORD *)((char *)v364 + 1);
                v368 = __ROL8__(v376 ^ v368, v366);
              }
              for ( i3 = v368; ; LODWORD(v368) = i3 ^ v368 )
              {
                i3 >>= 31;
                if ( !i3 )
                  break;
              }
              v378 = v368 & 0x7FFFFFFF;
              v379 = 0;
              if ( v378 != *((_DWORD *)v41 + 5) )
              {
                if ( !*(_DWORD *)v41 )
                  v379 = *((_DWORD *)v41 + 6) != 0;
                v31 = *((_QWORD *)v41 + 1);
                if ( *((_DWORD *)v41 + 4) )
                {
                  v374 = 64LL;
                  if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
                  {
                    v380 = KeGetCurrentIrql();
                    v381 = v31 & 0xFFFFFFFFFFFFF000uLL;
                    v382 = (v31 + *((unsigned int *)v41 + 4) - 1LL) | 0xFFF;
                    v383 = (v31 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      __writecr8(2uLL);
                      while ( 1 )
                      {
                        v384 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                                 v381,
                                 0LL,
                                 v374,
                                 v364);
                        if ( v384 == -1073741267 )
                          break;
                        if ( v384 < 0 )
                        {
LABEL_641:
                          __writecr8(v380);
                          v41 = v1973;
                          i9 = 0;
                          goto LABEL_642;
                        }
LABEL_623:
                        v381 += 4096LL;
                        v383 += 4096LL;
                        if ( v383 == v382 )
                        {
                          __writecr8(v380);
                          v41 = v1973;
                          i9 = 0;
                          goto LABEL_625;
                        }
                      }
                      if ( v379 )
                        goto LABEL_641;
                      if ( v380 > 1u )
                        goto LABEL_623;
                      __writecr8(v380);
                    }
                  }
                }
LABEL_642:
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = *((unsigned int *)v41 + 5) ^ (unsigned __int64)v378;
                v403 = *((_QWORD *)v41 + 1);
                if ( !*(_DWORD *)(v19 + 2328) )
                {
                  v31 = 1LL;
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *(int *)v41;
                  *(_QWORD *)(v19 + 2360) = v403;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v404 = *(_DWORD *)(v19 + 2520);
                  if ( (v404 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v404 & 1) != 0 )
                  {
                    v405 = *(unsigned int *)(v19 + 2676);
                    v406 = *(_QWORD *)(v19 + 2104);
                    v374 = *(_QWORD *)(v19 + 2680);
                    v31 = v405 + v19;
                    v364 = (_QWORD *)(v405
                                    + v19
                                    + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v405) >> 3));
                    while ( (_QWORD *)v31 != v364 )
                    {
                      *(_QWORD *)v31 ^= v374;
                      v374 = ((v406 ^ *(_QWORD *)v31) + __ROR8__(v374, v374 & 0x3F)) ^ 0xEFA;
                      v31 += 8LL;
                    }
                    *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                    if ( v374 != *(_QWORD *)(v19 + 2688) )
                    {
                      v407 = *(_DWORD *)(v19 + 2052);
                      v408 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)v408 = v19;
                      *(_DWORD *)(v408 + 16) = v407;
                      if ( !*(_DWORD *)(v19 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v374 ^ *(_QWORD *)(v19 + 2688);
                      sub_140BC7384(v19, 0LL, v374, 256LL);
                    }
                  }
                }
              }
LABEL_625:
              v385 = (__int64 **)*((_QWORD *)v41 + 1);
              v386 = *((_DWORD *)v41 + 4) >> 4;
              v1975 = (__int64)v385;
              if ( !v386 )
                goto LABEL_295;
              v387 = v386;
              v1976 = v386;
              do
              {
                v388 = v41;
                v389 = **v385;
                v2032 = 0LL;
                v390 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD *))(v19 + 784))(
                         v389,
                         &v2032,
                         v374,
                         v364);
                if ( v390 )
                {
                  do
                  {
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(v19 + 536))(v390, &v2099) )
                    {
                      if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
                      {
                        v391 = *(_QWORD **)(v19 + 2760);
                        v392 = 48;
                        v393 = 6LL;
                        do
                        {
                          v392 -= 8;
                          *v391 = *(_QWORD *)v388;
                          v388 += 8;
                          ++v391;
                          --v393;
                        }
                        while ( v393 );
                        if ( v392 )
                        {
                          do
                          {
                            v394 = *v388++;
                            *(_BYTE *)v391 = v394;
                            v391 = (_QWORD *)((char *)v391 + 1);
                            --v392;
                          }
                          while ( v392 );
                          v19 = (unsigned __int64)v1978;
                        }
                        v388 = *(char **)(v19 + 2760);
                      }
                      *((_QWORD *)v388 + 3) = v390;
                      *((_QWORD *)v388 + 4) = v389;
                      v395 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)v395 = v388;
                      *(_DWORD *)(v395 + 16) = 48;
                      v396 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)(v396 + 8) = v390;
                      *(_DWORD *)(v396 + 20) = 4096;
                      if ( !*(_DWORD *)(v19 + 2328) )
                      {
                        *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v19 + 2344) = v388 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v19 + 2352) = *(int *)v388;
                        *(_QWORD *)(v19 + 2360) = 6LL;
                        *(_DWORD *)(v19 + 2328) = 1;
                        v397 = *(_DWORD *)(v19 + 2520);
                        if ( (v397 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v397 & 1) != 0 )
                        {
                          v398 = *(unsigned int *)(v19 + 2676);
                          v399 = *(_QWORD *)(v19 + 2104);
                          v400 = *(_QWORD *)(v19 + 2680);
                          v401 = (_QWORD *)(v398 + v19);
                          v402 = v398
                               + v19
                               + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v398) >> 3);
                          while ( v401 != (_QWORD *)v402 )
                          {
                            *v401 ^= v400;
                            v400 = ((v399 ^ *v401++) + __ROR8__(v400, v400 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                          if ( v400 != *(_QWORD *)(v19 + 2688) )
                          {
                            v409 = *(_DWORD *)(v19 + 2052);
                            v410 = *(_QWORD *)(v19 + 1416);
                            *(_QWORD *)v410 = v19;
                            *(_DWORD *)(v410 + 16) = v409;
                            if ( !*(_DWORD *)(v19 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v400 ^ *(_QWORD *)(v19 + 2688);
                            sub_140BC7384(v19, 0LL, v400, 256LL);
                          }
                        }
                      }
                    }
                    v390 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v19 + 784))(v389, &v2032);
                  }
                  while ( v390 );
                  v385 = (__int64 **)v1975;
                  v387 = v1976;
                  v41 = v1973;
                }
                v385 += 2;
                --v387;
                v1975 = (__int64)v385;
                v1976 = v387;
              }
              while ( v387 );
              goto LABEL_466;
            }
LABEL_2253:
            v1515 = v63 - 2;
            if ( v1515 )
            {
              v1516 = v1515 - 1;
              if ( !v1516 )
              {
                (*(void (__fastcall **)(_BYTE *, _QWORD))(v19 + 432))(v2122, *((unsigned int *)v41 + 10));
                (*(void (__fastcall **)(_BYTE *, _BYTE *))(v19 + 480))(v2122, v2123);
                KiGetGdtIdt(&v2029, &v2135);
                v1548 = v2030;
                v1549 = *((unsigned int *)v41 + 4);
                if ( (*(_BYTE *)(v19 + 2203) & 2) != 0 )
                {
                  v1550 = *(_QWORD *)(v19 + 2304);
                  v1551 = 304;
                  v1552 = (_QWORD *)v1550;
                  v1553 = 38LL;
                  do
                  {
                    *v1552 = 0LL;
                    v1551 -= 8;
                    ++v1552;
                    --v1553;
                  }
                  while ( v1553 );
                  for ( ; v1551; --v1551 )
                  {
                    *(_BYTE *)v1552 = 0;
                    v1552 = (_QWORD *)((char *)v1552 + 1);
                  }
                  *(_OWORD *)(v1550 + 16) = *(_OWORD *)(v19 + 2152);
                  *(_OWORD *)(v1550 + 32) = *(_OWORD *)(v19 + 2168);
                  *(_OWORD *)(v1550 + 288) = *(_OWORD *)(v19 + 2184);
                  v2043 = 303;
                  v2044 = v1550;
                  *(_WORD *)(v1550 + 16) = v19 + 2200;
                  v2091 = v19 + 2200;
                  *(_WORD *)(v1550 + 22) = (unsigned int)(v19 + 2200) >> 16;
                  *(_DWORD *)(v1550 + 24) = (v19 + 2200) >> 32;
                  _disable();
                  __sidt(v2061);
                  __lidt(&v2043);
                  __writedr(7u, 0LL);
                  *(_WORD *)(v1550 + 16) = v19 + 2206;
                  *(_WORD *)(v1550 + 22) = (unsigned int)(v19 + 2206) >> 16;
                  *(_DWORD *)(v1550 + 24) = (v19 + 2206) >> 32;
                  if ( (*(_BYTE *)(v19 + 2203) & 0x20) != 0 )
                  {
                    *(_WORD *)(v19 + 2250) = KiGetSs();
                    __writedr(0, v19 + 2250);
                    __writedr(7u, 0x70001uLL);
                    *(_QWORD *)(v19 + 2312) = KiErrataSkx55Present(v19 + 2250);
                    __writedr(7u, 0LL);
                    __writedr(0, 0LL);
                  }
                  else
                  {
                    *(_QWORD *)(v19 + 2312) = KiErrata704Present();
                  }
                  *(_DWORD *)(v19 + 2320) = KeGetPcr()->Prcb.Number;
                  __lidt(v2061);
                  _enable();
                }
                Ldtr = (unsigned __int16)KiGetLdtr();
                Tr = KiGetTr();
                *(_DWORD *)(v19 + 2120) += v1549;
                v1556 = *(_DWORD *)(v19 + 2100);
                v1557 = Tr;
                v1558 = *(_QWORD *)(v19 + 2104);
                v1559 = v1548;
                v1972 = Tr;
                v1560 = (const char *)v1548;
                if ( v1548 < (_QWORD *)((char *)v1548 + v1549) )
                {
                  do
                  {
                    _mm_prefetch(v1560, 0);
                    v1560 += 64;
                  }
                  while ( v1560 < (const char *)v1548 + v1549 );
                }
                v1561 = v1558;
                v1562 = (unsigned int)v1549 >> 7;
                if ( (unsigned int)v1549 >> 7 )
                {
                  do
                  {
                    v1563 = 8LL;
                    do
                    {
                      v1564 = v1559[1] ^ __ROL8__(*v1559 ^ v1561, v1556);
                      v1559 += 2;
                      v1561 = __ROL8__(v1564, v1556);
                      --v1563;
                    }
                    while ( v1563 );
                    v1565 = __ROL8__(v1558 ^ ((char *)v1559 - (char *)v1548), 17) ^ v1558 ^ ((char *)v1559
                                                                                           - (char *)v1548);
                    v2092 = (v1565 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v1556 = ((unsigned __int8)(v2092 ^ v1565) ^ (unsigned __int8)v1556) & 0x3F;
                    if ( !v1556 )
                      LOBYTE(v1556) = 1;
                    --v1562;
                  }
                  while ( v1562 );
                  v19 = (unsigned __int64)v1978;
                  v1557 = v1972;
                }
                v1566 = v1549 & 0x7F;
                if ( v1566 >= 8 )
                {
                  v1567 = (unsigned __int64)v1566 >> 3;
                  do
                  {
                    v1561 = __ROL8__(*v1559++ ^ v1561, v1556);
                    v1566 -= 8;
                    --v1567;
                  }
                  while ( v1567 );
                }
                if ( v1566 )
                {
                  do
                  {
                    v1568 = *(unsigned __int8 *)v1559;
                    v1559 = (_QWORD *)((char *)v1559 + 1);
                    v1561 = __ROL8__(v1568 ^ v1561, v1556);
                    --v1566;
                  }
                  while ( v1566 );
                  v19 = (unsigned __int64)v1978;
                }
                for ( i4 = v1561; ; LODWORD(v1561) = i4 ^ v1561 )
                {
                  i4 >>= 31;
                  if ( !i4 )
                    break;
                }
                v1570 = v1561 & 0x7FFFFFFF;
                (*(void (__fastcall **)(_BYTE *, __int64, _QWORD *))(v19 + 424))(v2123, 1LL, v1559);
                if ( v1570 == *((_DWORD *)v41 + 5) && v2029 == *((_WORD *)v41 + 22) && !(_WORD)Ldtr && v1557 == 64 )
                {
                  i9 = 0;
                  v37 = 1;
                }
                else
                {
                  if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
                  {
                    v1571 = *(_QWORD **)(v19 + 2760);
                    LODWORD(v31) = 48;
                    v1572 = 6LL;
                    do
                    {
                      v31 = (unsigned int)(v31 - 8);
                      *v1571 = *(_QWORD *)v41;
                      v41 += 8;
                      ++v1571;
                      --v1572;
                    }
                    while ( v1572 );
                    if ( (_DWORD)v31 )
                    {
                      do
                      {
                        v1573 = *v41++;
                        *(_BYTE *)v1571 = v1573;
                        v1571 = (_QWORD *)((char *)v1571 + 1);
                        v31 = (unsigned int)(v31 - 1);
                      }
                      while ( (_DWORD)v31 );
                      v19 = (unsigned __int64)v1978;
                    }
                    v41 = *(char **)(v19 + 2760);
                  }
                  *((_QWORD *)v41 + 3) = v2030;
                  *((_QWORD *)v41 + 4) = v1570;
                  if ( (_WORD)Ldtr )
                  {
                    *((_QWORD *)v41 + 3) = Ldtr;
                  }
                  else if ( v1557 != 64 )
                  {
                    *((_QWORD *)v41 + 3) = v1557;
                  }
                  i9 = 0;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = *((unsigned int *)v41 + 5) ^ (unsigned __int64)v1570;
                  v1574 = *((_QWORD *)v41 + 1);
                  v37 = 1;
                  if ( !*(_DWORD *)(v19 + 2328) )
                  {
                    *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v19 + 2352) = *(int *)v41;
                    *(_QWORD *)(v19 + 2360) = v1574;
                    *(_DWORD *)(v19 + 2328) = 1;
                    v1575 = *(_DWORD *)(v19 + 2520);
                    if ( (v1575 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1575 & 1) != 0 )
                    {
                      v1576 = *(unsigned int *)(v19 + 2676);
                      v1577 = *(_QWORD *)(v19 + 2104);
                      v1578 = *(_QWORD *)(v19 + 2680);
                      v31 = v1576 + v19;
                      v1579 = v1576 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1576) >> 3);
                      while ( v31 != v1579 )
                      {
                        *(_QWORD *)v31 ^= v1578;
                        v1578 = ((v1577 ^ *(_QWORD *)v31) + __ROR8__(v1578, v1578 & 0x3F)) ^ 0xEFA;
                        v31 += 8LL;
                      }
                      *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                      if ( v1578 != *(_QWORD *)(v19 + 2688) )
                      {
                        v1580 = *(_DWORD *)(v19 + 2052);
                        v1581 = *(_QWORD *)(v19 + 1416);
                        *(_QWORD *)v1581 = v19;
                        *(_DWORD *)(v1581 + 16) = v1580;
                        if ( !*(_DWORD *)(v19 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1578 ^ *(_QWORD *)(v19 + 2688);
                        sub_140BC7384(v19, 0LL, v1578, 256LL);
                      }
                    }
                  }
                }
                *(_DWORD *)(v19 + 2120) += 0x8000;
                goto LABEL_238;
              }
              if ( v1516 != 20 )
              {
                if ( *(_DWORD *)(v19 + 2328) )
                  goto LABEL_238;
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = 257LL;
                *(_QWORD *)(v19 + 2360) = 0LL;
                *(_DWORD *)(v19 + 2328) = 1;
                v1517 = *(_DWORD *)(v19 + 2520);
                if ( (v1517 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v1517 & 1) == 0 )
                  goto LABEL_238;
                v1518 = *(unsigned int *)(v19 + 2676);
                v1519 = *(_QWORD *)(v19 + 2104);
                v336 = *(_QWORD *)(v19 + 2680);
                v31 = v1518 + v19;
                v1520 = v1518 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1518) >> 3);
                while ( v31 != v1520 )
                {
                  *(_QWORD *)v31 ^= v336;
                  v336 = ((v1519 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
                  v31 += 8LL;
                }
                goto LABEL_763;
              }
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v19 + 432))(v2120, *((unsigned int *)v41 + 10));
              (*(void (__fastcall **)(_BYTE *, _BYTE *))(v19 + 480))(v2120, v2121);
              v1521 = *(_QWORD *)(v19 + 2648);
              if ( v1521 )
              {
                v1522 = *(_DWORD *)(v1521 + 800);
              }
              else
              {
                v1523 = __readmsr(0x832u);
                v1522 = v1523;
              }
              v1524 = *(_QWORD *)(v19 + 2648);
              if ( v1524 )
              {
                v1525 = *(_DWORD *)(v1524 + 832);
              }
              else
              {
                v1526 = __readmsr(0x834u);
                v1525 = v1526;
              }
              (*(void (__fastcall **)(_BYTE *))(v19 + 424))(v2121);
              if ( (*(_BYTE *)(v19 + 2203) & 0x10) != 0 )
              {
                _disable();
                v1527 = *(_QWORD *)(v19 + 2304);
                v1528 = 304;
                v1529 = (_QWORD *)v1527;
                v1530 = 38LL;
                do
                {
                  *v1529 = 0LL;
                  v1528 -= 8;
                  ++v1529;
                  --v1530;
                }
                while ( v1530 );
                for ( ; v1528; --v1528 )
                {
                  *(_BYTE *)v1529 = 0;
                  v1529 = (_QWORD *)((char *)v1529 + 1);
                }
                *(_OWORD *)(v1527 + 16) = *(_OWORD *)(v19 + 2152);
                *(_OWORD *)(v1527 + 32) = *(_OWORD *)(v19 + 2168);
                *(_OWORD *)(v1527 + 288) = *(_OWORD *)(v19 + 2184);
                v2045 = 303;
                v2046 = v1527;
                *(_WORD *)(v1527 + 16) = v19 + 2200;
                v2090 = v19 + 2200;
                *(_WORD *)(v1527 + 22) = (unsigned int)(v19 + 2200) >> 16;
                *(_DWORD *)(v1527 + 24) = (v19 + 2200) >> 32;
                __sidt(v2060);
                __lidt(&v2045);
                if ( (*(_DWORD *)(v19 + 2524) & 0x20000) == 0 )
                {
                  v1531 = KeGetCurrentPrcb();
                  **(_QWORD **)(v19 + 1208) = v19 - 0x5C5FC0A76E374B18LL;
                  **(_QWORD **)(v19 + 1216) = v1531;
                  **(_QWORD **)(v19 + 1224) = 0LL;
                  **(_QWORD **)(v19 + 1232) = 277LL;
                }
                KiErrata361Present();
                if ( (*(_DWORD *)(v19 + 2524) & 0x20000) == 0 )
                {
                  **(_QWORD **)(v19 + 1208) = 0xA3A03F5891C8B4E8uLL;
                  **(_QWORD **)(v19 + 1216) = 0LL;
                  **(_QWORD **)(v19 + 1224) = 0LL;
                  **(_QWORD **)(v19 + 1232) = 0LL;
                }
                __lidt(v2060);
                _enable();
              }
              v1532 = *((unsigned int *)v41 + 6);
              if ( (v1522 & *((_DWORD *)v41 + 7)) != (_DWORD)v1532
                || (v1522 & 0x10000) == 0
                && (unsigned __int8)v1522 != 209
                && (unsigned int)(unsigned __int8)v1522 - 253 >= 2 )
              {
                v31 = v1532 | ((unsigned __int64)*((unsigned int *)v41 + 10) << 48) | 0x32000000000LL;
                if ( !*(_DWORD *)(v19 + 2328) )
                {
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1532 ^ v1522;
                  if ( !*(_DWORD *)(v19 + 2328) )
                  {
                    *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v19 + 2352) = *(int *)v41;
                    *(_QWORD *)(v19 + 2360) = v31;
                    *(_DWORD *)(v19 + 2328) = 1;
                    v1533 = *(_DWORD *)(v19 + 2520);
                    if ( (v1533 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1533 & 1) != 0 )
                    {
                      v1534 = *(unsigned int *)(v19 + 2676);
                      v1535 = *(_QWORD *)(v19 + 2104);
                      v1536 = *(_QWORD *)(v19 + 2680);
                      v31 = v1534 + v19;
                      v1537 = v1534 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1534) >> 3);
                      while ( v31 != v1537 )
                      {
                        *(_QWORD *)v31 ^= v1536;
                        v1536 = ((v1535 ^ *(_QWORD *)v31) + __ROR8__(v1536, v1536 & 0x3F)) ^ 0xEFA;
                        v31 += 8LL;
                      }
                      *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                      if ( v1536 != *(_QWORD *)(v19 + 2688) )
                      {
                        v1538 = *(_DWORD *)(v19 + 2052);
                        v1539 = *(_QWORD *)(v19 + 1416);
                        *(_QWORD *)v1539 = v19;
                        *(_DWORD *)(v1539 + 16) = v1538;
                        if ( !*(_DWORD *)(v19 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1536 ^ *(_QWORD *)(v19 + 2688);
                        sub_140BC7384(v19, 0LL, v1536, 256LL);
                      }
                    }
                  }
                }
              }
              v1540 = *((unsigned int *)v41 + 8);
              if ( (v1525 & *((_DWORD *)v41 + 9)) != (_DWORD)v1540
                || (v1525 & 0x10000) == 0
                && (unsigned __int8)v1525 != 209
                && (unsigned int)(unsigned __int8)v1525 - 253 >= 2 )
              {
                v31 = v1540 | ((unsigned __int64)*((unsigned int *)v41 + 10) << 48) | 0x34000000000LL;
                if ( !*(_DWORD *)(v19 + 2328) )
                {
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1525 ^ v1540;
                  if ( !*(_DWORD *)(v19 + 2328) )
                  {
                    *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v19 + 2352) = *(int *)v41;
                    *(_QWORD *)(v19 + 2360) = v31;
                    *(_DWORD *)(v19 + 2328) = 1;
                    v1541 = *(_DWORD *)(v19 + 2520);
                    if ( (v1541 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1541 & 1) != 0 )
                    {
                      v1542 = *(unsigned int *)(v19 + 2676);
                      v1543 = *(_QWORD *)(v19 + 2104);
                      v1544 = *(_QWORD *)(v19 + 2680);
                      v31 = v1542 + v19;
                      v1545 = v1542 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1542) >> 3);
                      while ( v31 != v1545 )
                      {
                        *(_QWORD *)v31 ^= v1544;
                        v1544 = ((v1543 ^ *(_QWORD *)v31) + __ROR8__(v1544, v1544 & 0x3F)) ^ 0xEFA;
                        v31 += 8LL;
                      }
                      *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                      if ( v1544 != *(_QWORD *)(v19 + 2688) )
                      {
                        v1546 = *(_DWORD *)(v19 + 2052);
                        v1547 = *(_QWORD *)(v19 + 1416);
                        *(_QWORD *)v1547 = v19;
                        *(_DWORD *)(v1547 + 16) = v1546;
                        if ( !*(_DWORD *)(v19 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1544 ^ *(_QWORD *)(v19 + 2688);
                        sub_140BC7384(v19, 0LL, v1544, 256LL);
                      }
                    }
                  }
                }
              }
              v230 = 0x8000;
LABEL_405:
              *(_DWORD *)(v19 + 2120) += v230;
              goto LABEL_238;
            }
            v1582 = *((unsigned int *)v41 + 10);
            v1583 = *(void (__fastcall **)(_QWORD, _QWORD))(v19 + 432);
            v1977 = 0;
            v1583(v2124, v1582);
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(v19 + 480))(v2124, v2125);
            KiGetGdtIdt(&v2136, &v2041);
            v1584 = 0;
            v1983 = v2042;
            v1585 = v2042 + 4;
            v1975 = v2042 + 4;
            v1974 = 0;
            while ( 1 )
            {
              v1586 = 0LL;
              v2009 = *(_QWORD *)(v19 + 2280);
              v1587 = 0LL;
              v1588 = *(_QWORD *)(v19 + 2288);
              v1589 = *(unsigned int *)(v19 + 2252);
              v1979 = 0LL;
              v1590 = *(unsigned int *)(v19 + 2256);
              v1976 = 0LL;
              v1591 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              v1592 = *(_WORD *)v1585;
              LOWORD(v2001) = *(_WORD *)(v1585 - 4);
              WORD1(v2001) = *(_WORD *)(v1585 + 2);
              v1593 = *(_DWORD *)(v1585 + 4);
              v1594 = *(_QWORD *)(v19 + 1576);
              HIDWORD(v2001) = v1593;
              v1595 = v2001;
              v1972 = v1592;
              v1596 = v1594 + 8LL * v1584;
              if ( v2001 != v1596 )
                break;
              if ( (v1592 & 0x6000) != 0 )
              {
                __writecr8(v1591);
                goto LABEL_2378;
              }
              v1587 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v19 + 1136))(v1584, v1596, 0LL);
              if ( !v1587 )
              {
                v1587 = -1LL;
                v1600 = 0LL;
LABEL_2384:
                v1597 = v1979;
                goto LABEL_2385;
              }
              v1597 = *(_QWORD *)(v1589 + v1587);
              v1979 = v1597;
              if ( v1974 < 0x30 )
              {
                __writecr8(v1591);
LABEL_2377:
                v1586 = v1979;
LABEL_2378:
                v1598 = *(_QWORD *)(v19 + 1416);
                i9 = 0;
                *(_QWORD *)v1598 = v1595;
                *(_DWORD *)(v1598 + 16) = 128;
                if ( v1586 )
                {
                  v1599 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)(v1599 + 8) = v1586;
                  *(_DWORD *)(v1599 + 20) = 128;
                }
                v37 = 1;
                v1977 = 1;
                goto LABEL_2398;
              }
              v1600 = *(_QWORD *)(v1590 + v1587);
LABEL_2385:
              __writecr8(v1591);
              if ( !v1587 )
              {
                if ( v1595 < v2009 )
                  goto LABEL_2377;
                if ( v1595 > v1588 )
                  goto LABEL_2377;
                v1601 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v19 + 544))(
                          *(_QWORD *)(v19 + 2296),
                          v2009,
                          (unsigned int)(v2001 - v2009));
                if ( !v1601 || (*(_DWORD *)(v1601 + 36) & 0x2000000) != 0 )
                  goto LABEL_2377;
              }
              if ( *(_WORD *)(v1975 - 2) != 16 || (*(_WORD *)v1975 & 0x1F00) != 0xE00 || *(__int16 *)v1975 >= 0 )
                goto LABEL_2377;
              v1602 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *, _QWORD))(v19 + 624))(
                                        v1595,
                                        &v2009,
                                        0LL);
              if ( v1602 && v2009 + *v1602 == v1595 && v2009 == *(_QWORD *)(v19 + 2280) )
              {
                if ( !v1587 )
                  goto LABEL_2397;
              }
              else if ( !v1587 )
              {
                goto LABEL_2377;
              }
              if ( (v1972 & 0x6000) != 0 )
                goto LABEL_2377;
              if ( v1587 != -1 )
              {
                v1624 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(v19 + 624))(
                                          v1597,
                                          &v2009,
                                          0LL);
                if ( !v1624 )
                  goto LABEL_2377;
                if ( v2009 + *v1624 != v1597 )
                  goto LABEL_2377;
                if ( v2009 != *(_QWORD *)(v19 + 2280) )
                  goto LABEL_2377;
                v1625 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v19 + 544))(
                          *(_QWORD *)(v19 + 2296),
                          v2009,
                          (unsigned int)(v1597 - v2009));
                if ( !v1625
                  || (*(_DWORD *)(v1625 + 36) & 0x2000000) != 0
                  || v1974 == 254 && v1600 != *(_QWORD *)(v19 + 2264) )
                {
                  goto LABEL_2377;
                }
              }
LABEL_2397:
              v37 = 1;
              i9 = 0;
LABEL_2398:
              v1584 = v1974 + 1;
              v1585 = v1975 + 16;
              v1974 = v1584;
              v1975 += 16LL;
              if ( v1584 > 0xFF )
              {
                if ( (*(_BYTE *)(v19 + 2203) & 1) != 0 )
                {
                  _disable();
                  v1603 = 3221225602LL;
                  v1604 = __readmsr(0xC0000082);
                  v1605 = (v19 + 2202) >> 32;
                  __writemsr(0xC0000082, v19 + 2202);
                  if ( !_bittest((const signed __int32 *)(v19 + 2524), 0x11u) )
                  {
                    v1606 = KeGetCurrentPrcb();
                    v1605 = v19 - 0x5C5FC0A76E374B18LL;
                    **(_QWORD **)(v19 + 1208) = v19 - 0x5C5FC0A76E374B18LL;
                    **(_QWORD **)(v19 + 1216) = v1606;
                    **(_QWORD **)(v19 + 1224) = 3221225602LL;
                    v1603 = *(_QWORD *)(v19 + 1232);
                    *(_QWORD *)v1603 = 274LL;
                  }
                  ((void (__fastcall *)(__int64, unsigned __int64))(v19 + 2204))(v1603, v1605);
                  if ( !_bittest((const signed __int32 *)(v19 + 2524), 0x11u) )
                  {
                    **(_QWORD **)(v19 + 1208) = 0xA3A03F5891C8B4E8uLL;
                    **(_QWORD **)(v19 + 1216) = 0LL;
                    **(_QWORD **)(v19 + 1224) = 0LL;
                    **(_QWORD **)(v19 + 1232) = 0LL;
                  }
                  __writemsr(0xC0000082, v1604);
                  _enable();
                }
                v1607 = (_QWORD *)v1983;
                *(_DWORD *)(v19 + 2120) += 848;
                v1608 = v1607;
                v1609 = *(_DWORD *)(v19 + 2100);
                v1610 = (const char *)v1607;
                v1611 = *(_QWORD *)(v19 + 2104);
                if ( v1607 < v1607 + 106 )
                {
                  do
                  {
                    _mm_prefetch(v1610, 0);
                    v1610 += 64;
                  }
                  while ( v1610 < (const char *)v1607 + 848 );
                }
                v1612 = 6;
                v1613 = *(_QWORD *)(v19 + 2104);
                do
                {
                  v1614 = 8LL;
                  do
                  {
                    v1615 = *v1608 ^ v1613;
                    v1616 = v1608 + 1;
                    v1617 = *v1616 ^ __ROL8__(v1615, v1609);
                    v1608 = v1616 + 1;
                    v1613 = __ROL8__(v1617, v1609);
                    --v1614;
                  }
                  while ( v1614 );
                  v1618 = (__ROL8__(v1611 ^ ((char *)v1608 - (char *)v1607), 17) ^ v1611 ^ (unsigned __int64)((char *)v1608 - (char *)v1607))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v2093 = *((_QWORD *)&v1618 + 1);
                  v1609 = ((unsigned __int8)(v1618 ^ BYTE8(v1618)) ^ (unsigned __int8)v1609) & 0x3F;
                  if ( !v1609 )
                    LOBYTE(v1609) = 1;
                  --v1612;
                }
                while ( v1612 );
                v19 = (unsigned __int64)v1978;
                v1619 = 80;
                v1620 = v1977;
                v1621 = 10LL;
                do
                {
                  v1613 = __ROL8__(*v1608++ ^ v1613, v1609);
                  v1619 -= 8;
                  --v1621;
                }
                while ( v1621 );
                for ( ; v1619; --v1619 )
                {
                  v1622 = *(unsigned __int8 *)v1608;
                  v1608 = (_QWORD *)((char *)v1608 + 1);
                  v1613 = __ROL8__(v1622 ^ v1613, v1609);
                }
                for ( i5 = v1613; ; LODWORD(v1613) = i5 ^ v1613 )
                {
                  i5 >>= 31;
                  if ( !i5 )
                    break;
                }
                *((_DWORD *)v1978 + 530) += 16;
                v1626 = v1607 + 450;
                v1627 = *(_DWORD *)(v19 + 2100);
                v1628 = (unsigned __int64)(v1607 + 452);
                v1629 = *(_QWORD *)(v19 + 2104);
                v1630 = v1613 & 0x7FFFFFFF;
                v1631 = (const char *)v1626;
                if ( (unsigned __int64)v1626 < v1628 )
                {
                  do
                  {
                    _mm_prefetch(v1631, 0);
                    v1631 += 64;
                  }
                  while ( (unsigned __int64)v1631 < v1628 );
                }
                v1632 = 2LL;
                v1633 = 16;
                do
                {
                  v1629 = __ROL8__(*v1626++ ^ v1629, v1627);
                  v1633 -= 8;
                  --v1632;
                }
                while ( v1632 );
                for ( ; v1633; --v1633 )
                {
                  v1634 = *(unsigned __int8 *)v1626;
                  v1626 = (_QWORD *)((char *)v1626 + 1);
                  v1629 = __ROL8__(v1634 ^ v1629, v1627);
                }
                for ( i6 = v1629; ; LODWORD(v1629) = i6 ^ v1629 )
                {
                  i6 >>= 31;
                  if ( !i6 )
                    break;
                }
                v1636 = v1629 & 0x7FFFFFFF;
                (*(void (__fastcall **)(_BYTE *, _QWORD *))(v19 + 424))(v2125, v1626);
                v31 = (unsigned __int64)v1973;
                v1637 = *((unsigned int *)v1973 + 5);
                if ( v1630 != (_DWORD)v1637
                  || v1636 != *((_QWORD *)v1973 + 3)
                  || v2041 != *((_WORD *)v1973 + 22)
                  || v1620 )
                {
                  if ( !v1620 )
                  {
                    if ( v1636 == *((_QWORD *)v1973 + 3) )
                    {
                      if ( !*(_DWORD *)(v19 + 2328) )
                      {
                        v1638 = v1630;
                        goto LABEL_2450;
                      }
                    }
                    else
                    {
                      v1638 = *((unsigned int *)v1973 + 6);
                      if ( !*(_DWORD *)(v19 + 2328) )
                      {
                        v1637 = v1636;
LABEL_2450:
                        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1638 ^ v1637;
                      }
                    }
                  }
                  v1639 = *(_QWORD *)(v31 + 8);
                  if ( !*(_DWORD *)(v19 + 2328) )
                  {
                    *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v19 + 2344) = v31 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v19 + 2352) = *(int *)v31;
                    *(_QWORD *)(v19 + 2360) = v1639;
                    *(_DWORD *)(v19 + 2328) = 1;
                    v1640 = *(_DWORD *)(v19 + 2520);
                    if ( (v1640 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1640 & 1) != 0 )
                    {
                      v1641 = *(unsigned int *)(v19 + 2676);
                      v1642 = *(_QWORD *)(v19 + 2104);
                      v1643 = *(_QWORD *)(v19 + 2680);
                      v31 = v1641 + v19;
                      v1644 = v1641 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1641) >> 3);
                      while ( v31 != v1644 )
                      {
                        *(_QWORD *)v31 ^= v1643;
                        v1643 = ((v1642 ^ *(_QWORD *)v31) + __ROR8__(v1643, v1643 & 0x3F)) ^ 0xEFA;
                        v31 += 8LL;
                      }
                      *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                      if ( v1643 != *(_QWORD *)(v19 + 2688) )
                      {
                        v1645 = *(_DWORD *)(v19 + 2052);
                        v1646 = *(_QWORD *)(v19 + 1416);
                        *(_QWORD *)v1646 = v19;
                        *(_DWORD *)(v1646 + 16) = v1645;
                        if ( !*(_DWORD *)(v19 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1643 ^ *(_QWORD *)(v19 + 2688);
                        sub_140BC7384(v19, 0LL, v1643, 256LL);
                      }
                    }
                  }
                }
                *(_DWORD *)(v19 + 2120) += 0x10000;
                goto LABEL_238;
              }
            }
            v1600 = v1976;
            goto LABEL_2384;
          }
          if ( !*((_DWORD *)v41 + 4) )
          {
            v2057 = v41 + 48;
            v411 = *((_WORD *)v41 + 20);
            v1971 = &v2004;
            v2056[0] = v411;
            v2056[1] = v411;
            v412 = *(_QWORD *)(v19 + 1288);
            v413 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v19 + 504);
            LOBYTE(v1970) = 0;
            if ( v413(v2056, 0LL, 0LL, 0LL, v412, v1970, 0LL, &v2004) < 0 )
              goto LABEL_238;
            if ( (*(_DWORD *)(v2004 + 16) & 0x10) == 0 )
            {
              (*(void (__fastcall **)(__int64))(v19 + 496))(v2004);
              goto LABEL_238;
            }
            (*(void (__fastcall **)(_QWORD, char *))(v19 + 528))(*(_QWORD *)(v19 + 504), &v2139);
            if ( v2140 )
            {
              v414 = *(__int64 (**)(void))(v19 + 520);
              v415 = v2140;
              v2011 = (char *)v2140;
              v416 = v414();
              if ( v416 )
              {
                v417 = *(_DWORD *)(v416 + 80);
                v2002 = v417;
                goto LABEL_674;
              }
            }
            else
            {
              v415 = (unsigned __int64)v2011;
            }
            v417 = v2002;
LABEL_674:
            (*(void (__fastcall **)(_QWORD, char *))(v19 + 528))(*((_QWORD *)v41 + 3), &v2141);
            if ( v2142 )
            {
              v418 = *(__int64 (**)(void))(v19 + 520);
              v419 = v2142;
              v2010 = v2142;
              v420 = v418();
              if ( v420 )
              {
                v421 = *(_DWORD *)(v420 + 80);
                v1996 = v421;
                goto LABEL_679;
              }
            }
            else
            {
              v419 = v2010;
            }
            v421 = v1996;
LABEL_679:
            if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) == 0 )
            {
              *((_QWORD *)v41 + 1) = v2004 + 112;
              *((_DWORD *)v41 + 4) = 224;
            }
            LOBYTE(v31) = 0;
            while ( 1 )
            {
              v422 = *(_QWORD *)(v2004 + 8LL * (unsigned __int8)v31 + 112);
              if ( !v417 || v422 < v415 || v422 > v417 + v415 - 1 )
              {
                if ( !v421 )
                  break;
                v423 = v421 + v419 - 1;
                if ( v422 < v419 || v422 > v423 )
                  break;
              }
              v421 = v1996;
              LOBYTE(v31) = v31 + 1;
              if ( (unsigned __int8)v31 >= 0x1Cu )
              {
                if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
                {
                  (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(v19 + 496))(
                    v2004,
                    v31,
                    v422,
                    v1996);
                  goto LABEL_466;
                }
                v424 = (_QWORD *)*((_QWORD *)v41 + 1);
                v425 = *((unsigned int *)v41 + 4);
                v426 = v424;
                *(_DWORD *)(v19 + 2120) += v425;
                v427 = (const char *)v424;
                v428 = *(_DWORD *)(v19 + 2100);
                v429 = *(_QWORD *)(v19 + 2104);
                if ( v424 < (_QWORD *)((char *)v424 + v425) )
                {
                  do
                  {
                    _mm_prefetch(v427, 0);
                    v427 += 64;
                  }
                  while ( v427 < (const char *)v424 + v425 );
                }
                v430 = *(_QWORD *)(v19 + 2104);
                v431 = (unsigned int)v425 >> 7;
                v31 = 1LL;
                if ( (unsigned int)v425 >> 7 )
                {
                  do
                  {
                    v432 = 8LL;
                    do
                    {
                      v433 = v426[1] ^ __ROL8__(*v426 ^ v430, v428);
                      v426 += 2;
                      v430 = __ROL8__(v433, v428);
                      --v432;
                    }
                    while ( v432 );
                    v434 = (__ROL8__(v429 ^ ((char *)v426 - (char *)v424), 17) ^ v429 ^ (unsigned __int64)((char *)v426 - (char *)v424))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2119 = *((_QWORD *)&v434 + 1);
                    v435 = v434 ^ BYTE8(v434) ^ v428;
                    v31 = 1LL;
                    v428 = v435 & 0x3F;
                    if ( !v428 )
                      LOBYTE(v428) = 1;
                    --v431;
                  }
                  while ( v431 );
                  v415 = (unsigned __int64)v2011;
                  v419 = v2010;
                }
                v436 = v425 & 0x7F;
                if ( v436 >= 8 )
                {
                  v437 = (unsigned __int64)v436 >> 3;
                  do
                  {
                    v430 = __ROL8__(*v426++ ^ v430, v428);
                    v436 -= 8;
                    --v437;
                  }
                  while ( v437 );
                }
                if ( v436 )
                {
                  do
                  {
                    v438 = *(unsigned __int8 *)v426;
                    v426 = (_QWORD *)((char *)v426 + 1);
                    v430 = __ROL8__(v438 ^ v430, v428);
                    --v436;
                  }
                  while ( v436 );
                  v19 = (unsigned __int64)v1978;
                }
                for ( i7 = v430; ; LODWORD(v430) = i7 ^ v430 )
                {
                  i7 >>= 31;
                  if ( !i7 )
                    break;
                }
                v440 = 0;
                *((_DWORD *)v41 + 5) = v430 & 0x7FFFFFFF;
                v441 = *(const char **)(v2004 + 80);
                if ( !v441
                  || (v440 = *(_DWORD *)v441, LOBYTE(v31) = 0, (v442 = (unsigned int)(*(_DWORD *)v441 - 8) >> 3) == 0) )
                {
LABEL_719:
                  *(_DWORD *)(v19 + 2120) += v440;
                  v444 = v441;
                  v445 = *(_DWORD *)(v19 + 2100);
                  v446 = v441;
                  v447 = *(_QWORD *)(v19 + 2104);
                  v448 = &v441[v440];
                  if ( v441 < v448 )
                  {
                    do
                    {
                      _mm_prefetch(v446, 0);
                      v446 += 64;
                    }
                    while ( v446 < v448 );
                  }
                  i9 = 0;
                  v449 = v440 >> 7;
                  v450 = *(_QWORD *)(v19 + 2104);
                  v37 = 1;
                  if ( v440 >> 7 )
                  {
                    do
                    {
                      v451 = 8LL;
                      do
                      {
                        v452 = *((_QWORD *)v444 + 1) ^ __ROL8__(*(_QWORD *)v444 ^ v450, v445);
                        v444 += 16;
                        v450 = __ROL8__(v452, v445);
                        --v451;
                      }
                      while ( v451 );
                      v453 = (__ROL8__(v447 ^ (v444 - v441), 17) ^ v447 ^ (unsigned __int64)(v444 - v441))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v2109 = *((_QWORD *)&v453 + 1);
                      v454 = v453 ^ BYTE8(v453) ^ v445;
                      v31 = 0xFFFFFFFFLL;
                      v445 = v454 & 0x3F;
                      if ( !v445 )
                        LOBYTE(v445) = 1;
                      --v449;
                    }
                    while ( v449 );
                    v19 = (unsigned __int64)v1978;
                  }
                  else
                  {
                    v31 = 0xFFFFFFFFLL;
                  }
                  v462 = v440 & 0x7F;
                  if ( v462 >= 8 )
                  {
                    v463 = (unsigned __int64)v462 >> 3;
                    do
                    {
                      v450 = __ROL8__(*(_QWORD *)v444 ^ v450, v445);
                      v444 += 8;
                      v462 -= 8;
                      --v463;
                    }
                    while ( v463 );
                  }
                  for ( ; v462; --v462 )
                  {
                    v464 = *(unsigned __int8 *)v444++;
                    v450 = __ROL8__(v464 ^ v450, v445);
                  }
                  for ( i8 = v450; ; LODWORD(v450) = i8 ^ v450 )
                  {
                    i8 >>= 31;
                    if ( !i8 )
                      break;
                  }
                  *((_DWORD *)v41 + 11) = v450 & 0x7FFFFFFF;
                  goto LABEL_238;
                }
                while ( 1 )
                {
                  v443 = *(_QWORD *)&v441[8 * (unsigned __int8)v31 + 8];
                  if ( v443
                    && (!v2002 || v443 < v415 || v443 > v415 + v2002 - 1LL)
                    && (!v1996 || v443 < v419 || v443 > v419 + v1996 - 1LL) )
                  {
                    break;
                  }
                  LOBYTE(v31) = v31 + 1;
                  if ( (unsigned __int8)v31 >= v442 )
                    goto LABEL_719;
                }
                *((_QWORD *)v41 + 4) = v443;
                i9 = 0;
                v455 = *(_QWORD *)(v19 + 1416);
                v37 = 1;
                *(_QWORD *)v455 = v41;
                *(_DWORD *)(v455 + 16) = 48;
                if ( *(_DWORD *)(v19 + 2328) )
                  goto LABEL_238;
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *(int *)v41;
                *(_QWORD *)(v19 + 2360) = v441;
                *(_DWORD *)(v19 + 2328) = 1;
                v456 = *(_DWORD *)(v19 + 2520);
                if ( (v456 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v456 & 1) == 0 )
                  goto LABEL_238;
                v457 = *(unsigned int *)(v19 + 2676);
                v458 = *(_QWORD *)(v19 + 2104);
                v336 = *(_QWORD *)(v19 + 2680);
                v31 = v457 + v19;
                v459 = v457 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v457) >> 3);
                while ( v31 != v459 )
                {
                  *(_QWORD *)v31 ^= v336;
                  v336 = ((v458 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
                  v31 += 8LL;
                }
LABEL_735:
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v336 == *(_QWORD *)(v19 + 2688) )
                  goto LABEL_238;
                v460 = *(_DWORD *)(v19 + 2052);
                v461 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v461 = v19;
                *(_DWORD *)(v461 + 16) = v460;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v336 ^ *(_QWORD *)(v19 + 2688);
LABEL_766:
                sub_140BC7384(v19, 0LL, v336, 256LL);
                goto LABEL_238;
              }
            }
            v37 = 1;
            if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
            {
              v466 = *(_QWORD **)(v19 + 2760);
              LODWORD(v31) = 48;
              v467 = 6LL;
              do
              {
                v31 = (unsigned int)(v31 - 8);
                *v466 = *(_QWORD *)v41;
                v41 += 8;
                ++v466;
                --v467;
              }
              while ( v467 );
              for ( i9 = 0; (_DWORD)v31; v31 = (unsigned int)(v31 - 1) )
              {
                v468 = *v41++;
                *(_BYTE *)v466 = v468;
                v466 = (_QWORD *)((char *)v466 + 1);
              }
              v41 = *(char **)(v19 + 2760);
            }
            else
            {
              i9 = 0;
            }
            *((_QWORD *)v41 + 4) = v422;
            v469 = *(_QWORD *)(v19 + 1416);
            *(_QWORD *)v469 = v41;
            *(_DWORD *)(v469 + 16) = 48;
            v470 = *((_QWORD *)v41 + 1);
            if ( *(_DWORD *)(v19 + 2328) )
              goto LABEL_238;
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *(int *)v41;
            *(_QWORD *)(v19 + 2360) = v470;
            *(_DWORD *)(v19 + 2328) = 1;
            v471 = *(_DWORD *)(v19 + 2520);
            if ( (v471 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v471 & 1) == 0 )
              goto LABEL_238;
            v472 = *(unsigned int *)(v19 + 2676);
            v473 = *(_QWORD *)(v19 + 2104);
            v336 = *(_QWORD *)(v19 + 2680);
            v31 = v472 + v19;
            v474 = v472 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v472) >> 3);
            while ( v31 != v474 )
            {
              *(_QWORD *)v31 ^= v336;
              v336 = ((v473 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
              v31 += 8LL;
            }
            goto LABEL_763;
          }
          v477 = (_QWORD *)*((_QWORD *)v41 + 1);
          v478 = *((unsigned int *)v41 + 4);
          v479 = v477;
          *(_DWORD *)(v19 + 2120) += v478;
          v480 = (const char *)v477;
          v481 = *(_DWORD *)(v19 + 2100);
          v482 = *(_QWORD *)(v19 + 2104);
          if ( v477 < (_QWORD *)((char *)v477 + v478) )
          {
            do
            {
              _mm_prefetch(v480, 0);
              v480 += 64;
            }
            while ( v480 < (const char *)v477 + v478 );
          }
          v483 = *(_QWORD *)(v19 + 2104);
          v484 = (unsigned int)v478 >> 7;
          if ( (unsigned int)v478 >> 7 )
          {
            do
            {
              v485 = 8LL;
              do
              {
                v486 = v479[1] ^ __ROL8__(*v479 ^ v483, v481);
                v479 += 2;
                v483 = __ROL8__(v486, v481);
                --v485;
              }
              while ( v485 );
              v487 = (__ROL8__(v482 ^ ((char *)v479 - (char *)v477), 17) ^ v482 ^ (unsigned __int64)((char *)v479 - (char *)v477))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2110 = *((_QWORD *)&v487 + 1);
              v481 = ((unsigned __int8)v487 ^ (unsigned __int8)(BYTE8(v487) ^ v481)) & 0x3F;
              if ( !v481 )
                LOBYTE(v481) = 1;
              --v484;
            }
            while ( v484 );
            v19 = (unsigned __int64)v1978;
          }
          v488 = v478 & 0x7F;
          if ( v488 >= 8 )
          {
            v489 = (unsigned __int64)v488 >> 3;
            do
            {
              v483 = __ROL8__(*v479++ ^ v483, v481);
              v488 -= 8;
              --v489;
            }
            while ( v489 );
          }
          for ( ; v488; --v488 )
          {
            v490 = *(unsigned __int8 *)v479;
            v479 = (_QWORD *)((char *)v479 + 1);
            v483 = __ROL8__(v490 ^ v483, v481);
          }
          for ( i10 = v483; ; LODWORD(v483) = i10 ^ v483 )
          {
            i10 >>= 31;
            if ( !i10 )
              break;
          }
          v492 = v483 & 0x7FFFFFFF;
          v493 = 0;
          if ( v492 == *((_DWORD *)v41 + 5) )
          {
LABEL_798:
            v37 = 1;
          }
          else
          {
            if ( !*(_DWORD *)v41 )
              v493 = *((_DWORD *)v41 + 6) != 0;
            v494 = *((_QWORD *)v41 + 1);
            if ( *((_DWORD *)v41 + 4) )
            {
              v495 = 64LL;
              if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
              {
                v496 = KeGetCurrentIrql();
                v497 = v494 & 0xFFFFFFFFFFFFF000uLL;
                v498 = (v494 + *((unsigned int *)v41 + 4) - 1LL) | 0xFFF;
                v499 = (v494 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v500 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v19 + 1128))(
                             v497,
                             0LL,
                             v495,
                             v479);
                    if ( v500 == -1073741267 )
                      break;
                    if ( v500 < 0 )
                    {
LABEL_810:
                      __writecr8(v496);
                      v41 = v1973;
                      i9 = 0;
                      goto LABEL_811;
                    }
LABEL_796:
                    v497 += 4096LL;
                    v499 += 4096LL;
                    if ( v499 == v498 )
                    {
                      __writecr8(v496);
                      v41 = v1973;
                      i9 = 0;
                      goto LABEL_798;
                    }
                  }
                  if ( v493 )
                    goto LABEL_810;
                  if ( v496 > 1u )
                    goto LABEL_796;
                  __writecr8(v496);
                }
              }
            }
LABEL_811:
            if ( !*(_DWORD *)(v19 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v492 ^ (unsigned __int64)*((unsigned int *)v41 + 5);
            v37 = 1;
            v514 = *((_QWORD *)v41 + 1);
            if ( !*(_DWORD *)(v19 + 2328) )
            {
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *(int *)v41;
              *(_QWORD *)(v19 + 2360) = v514;
              *(_DWORD *)(v19 + 2328) = 1;
              v515 = *(_DWORD *)(v19 + 2520);
              if ( (v515 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v515 & 1) != 0 )
              {
                v516 = *(unsigned int *)(v19 + 2676);
                v517 = *(_QWORD *)(v19 + 2104);
                v518 = *(_QWORD *)(v19 + 2680);
                v519 = (_QWORD *)(v516 + v19);
                v520 = v516 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v516) >> 3);
                while ( v519 != (_QWORD *)v520 )
                {
                  *v519 ^= v518;
                  v518 = ((v517 ^ *v519++) + __ROR8__(v518, v518 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v518 != *(_QWORD *)(v19 + 2688) )
                {
                  v521 = *(_DWORD *)(v19 + 2052);
                  v522 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v522 = v19;
                  *(_DWORD *)(v522 + 16) = v521;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v518 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v518, 256LL);
                }
              }
            }
          }
          v501 = 0;
          v2004 = *((_QWORD *)v41 + 1) - 112LL;
          v502 = *(const char **)(v2004 + 80);
          if ( v502 )
            v501 = *(_DWORD *)v502;
          *(_DWORD *)(v19 + 2120) += v501;
          v503 = v502;
          v504 = *(_DWORD *)(v19 + 2100);
          v505 = v502;
          v506 = *(_QWORD *)(v19 + 2104);
          v507 = &v502[v501];
          if ( v502 < v507 )
          {
            do
            {
              _mm_prefetch(v505, 0);
              v505 += 64;
            }
            while ( v505 < v507 );
          }
          v508 = *(_QWORD *)(v19 + 2104);
          v509 = v501 >> 7;
          if ( v501 >> 7 )
          {
            do
            {
              v510 = 8LL;
              do
              {
                v511 = *((_QWORD *)v503 + 1) ^ __ROL8__(*(_QWORD *)v503 ^ v508, v504);
                v503 += 16;
                v508 = __ROL8__(v511, v504);
                --v510;
              }
              while ( v510 );
              v512 = (__ROL8__(v506 ^ (v503 - v502), 17) ^ v506 ^ (unsigned __int64)(v503 - v502))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2111 = *((_QWORD *)&v512 + 1);
              v513 = v512 ^ BYTE8(v512) ^ v504;
              v31 = 0xFFFFFFFFLL;
              v504 = v513 & 0x3F;
              if ( !v504 )
                LOBYTE(v504) = 1;
              --v509;
            }
            while ( v509 );
            v19 = (unsigned __int64)v1978;
          }
          else
          {
            v31 = 0xFFFFFFFFLL;
          }
          v523 = v501 & 0x7F;
          if ( v523 >= 8 )
          {
            v524 = (unsigned __int64)v523 >> 3;
            do
            {
              v508 = __ROL8__(*(_QWORD *)v503 ^ v508, v504);
              v503 += 8;
              v523 -= 8;
              --v524;
            }
            while ( v524 );
          }
          for ( ; v523; --v523 )
          {
            v525 = *(unsigned __int8 *)v503++;
            v508 = __ROL8__(v525 ^ v508, v504);
          }
          for ( i11 = v508; ; LODWORD(v508) = i11 ^ v508 )
          {
            i11 >>= 31;
            if ( !i11 )
              break;
          }
          v527 = *((_DWORD *)v41 + 11);
          v528 = v508 & 0x7FFFFFFF;
          if ( v528 == v527 )
            goto LABEL_238;
          if ( *(_DWORD *)(v19 + 2328) )
            goto LABEL_238;
          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v528 ^ (unsigned __int64)v527;
          if ( *(_DWORD *)(v19 + 2328) )
            goto LABEL_238;
          *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v19 + 2344) = v41 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v19 + 2352) = *(int *)v41;
          *(_QWORD *)(v19 + 2360) = v502;
          *(_DWORD *)(v19 + 2328) = 1;
          v529 = *(_DWORD *)(v19 + 2520);
          if ( (v529 & 0x20000000) != 0 || (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 || (v529 & 1) == 0 )
            goto LABEL_238;
          v530 = *(unsigned int *)(v19 + 2676);
          v531 = *(_QWORD *)(v19 + 2104);
          v336 = *(_QWORD *)(v19 + 2680);
          v31 = v530 + v19;
          v532 = v530 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v530) >> 3);
          while ( v31 != v532 )
          {
            *(_QWORD *)v31 ^= v336;
            v336 = ((v531 ^ *(_QWORD *)v31) + __ROR8__(v336, v336 & 0x3F)) ^ 0xEFA;
            v31 += 8LL;
          }
          goto LABEL_735;
        }
        v584 = *(_QWORD ***)(v19 + 1320);
        v585 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v19 + 888);
        v1975 = (__int64)v584;
        v1974 = 0;
        v1990 = (char *)v585((unsigned int)(v63 - 25), v31);
        _disable();
        v586 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v19 + 1624));
        _enable();
        (*(void (__fastcall **)(__int64))(v19 + 376))(v586);
        LOBYTE(v587) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(v19 + 248))(*(_QWORD *)(v19 + 1328), v587);
        v588 = **(unsigned int ***)(v19 + 1568);
        v589 = *v588;
        v1976 = (__int64)(v588 + 4);
        v1980 = (unsigned __int64)&v588[6 * v589 + 4];
        v590 = 0;
        if ( *((_BYTE *)v588 + 12) )
        {
          LODWORD(v589) = 0;
          v591 = *v584;
          while ( v591 != v584 )
          {
            v591 = (_QWORD *)*v591;
            LODWORD(v589) = v589 + 1;
          }
        }
        v592 = *(unsigned int *)(v19 + 2096);
        v593 = __rdtsc();
        v594 = __ROR8__(v593, 3);
        v2127 = ((v594 ^ v593) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v595 = ((unsigned __int16)v2127 ^ (unsigned __int16)(8193 * (v594 ^ v593))) & 0x7FF;
        v596 = __rdtsc();
        v597 = (__ROR8__(v596, 3) ^ v596) * (unsigned __int128)0x7010008004002001uLL;
        v2133 = *((_QWORD *)&v597 + 1);
        v598 = (*((_QWORD *)&v597 + 1) ^ (unsigned __int64)v597) % (unsigned int)(v595 + 1);
        v599 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v19 + 256))(
                 66LL,
                 (unsigned int)(v595 + 8 * v589),
                 v592);
        v600 = v599;
        if ( !v599 )
        {
          ++*(_DWORD *)(v19 + 2656);
LABEL_937:
          i9 = 0;
          v2024 = 0LL;
          goto LABEL_965;
        }
        v601 = v598;
        v602 = (_QWORD *)v599;
        if ( (unsigned int)v598 >= 8 )
        {
          v603 = (unsigned __int64)(unsigned int)v598 >> 3;
          do
          {
            v604 = __rdtsc();
            v601 -= 8;
            v605 = (__ROR8__(v604, 3) ^ v604) * (unsigned __int128)0x7010008004002001uLL;
            v2134 = *((_QWORD *)&v605 + 1);
            *v602++ = v605 ^ *((_QWORD *)&v605 + 1);
            --v603;
          }
          while ( v603 );
          v19 = (unsigned __int64)v1978;
          v584 = (_QWORD **)v1975;
        }
        if ( v601 )
        {
          v606 = __rdtsc();
          v607 = (__ROR8__(v606, 3) ^ v606) * (unsigned __int128)0x7010008004002001uLL;
          v2070 = *((_QWORD *)&v607 + 1);
          v608 = v607 ^ *((_QWORD *)&v607 + 1);
          do
          {
            *(_BYTE *)v602 = v608;
            v602 = (_QWORD *)((char *)v602 + 1);
            v608 >>= 8;
            --v601;
          }
          while ( v601 );
        }
        v609 = v595 - v598;
        v610 = (_QWORD *)(v600 + (unsigned int)v598 + (unsigned int)(8 * v589));
        if ( v609 >= 8 )
        {
          v602 = (_QWORD *)((unsigned __int64)v609 >> 3);
          do
          {
            v611 = __rdtsc();
            v609 -= 8;
            v612 = (__ROR8__(v611, 3) ^ v611) * (unsigned __int128)0x7010008004002001uLL;
            v2071 = *((_QWORD *)&v612 + 1);
            *v610++ = v612 ^ *((_QWORD *)&v612 + 1);
            v602 = (_QWORD *)((char *)v602 - 1);
          }
          while ( v602 );
        }
        if ( v609 )
        {
          v613 = __rdtsc();
          v614 = (__ROR8__(v613, 3) ^ v613) * (unsigned __int128)0x7010008004002001uLL;
          v2072 = *((_QWORD *)&v614 + 1);
          v615 = v614 ^ *((_QWORD *)&v614 + 1);
          do
          {
            *(_BYTE *)v610 = v615;
            v610 = (_QWORD *)((char *)v610 + 1);
            v615 >>= 8;
            --v609;
          }
          while ( v609 );
        }
        v2024 = v600;
        v616 = v600 + (unsigned int)v598;
        if ( !v616 )
          goto LABEL_937;
        v617 = *v584;
        if ( *v584 != v584 )
        {
          v618 = v1974;
          do
          {
            v610 = (_QWORD *)((char *)v617 - *(_QWORD *)(v19 + 1880));
            if ( v590 < (unsigned int)v589 )
            {
              v619 = v590++;
              *(_QWORD *)(v616 + 8 * v619) = *(_QWORD *)((char *)v610 + *(_QWORD *)(v19 + 1888));
              v618 = v1974;
            }
            v617 = (_QWORD *)*v617;
            v1974 = ++v618;
          }
          while ( v617 != v584 );
        }
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD *))(v19 + 920))(
          v600 + (unsigned int)v598,
          v590,
          v610,
          v602);
        v620 = v1976;
        v621 = v590 - 1;
        v622 = v1980;
        i9 = 0;
LABEL_944:
        v623 = *(_QWORD *)(v620 + 8);
        v624 = 0;
        v625 = v621;
        if ( v621 < 0 )
          goto LABEL_953;
        while ( 1 )
        {
          v626 = (v625 + v624) >> 1;
          if ( v623 >= *(_QWORD *)(v616 + 8LL * v626) )
          {
            if ( v623 <= *(_QWORD *)(v616 + 8LL * v626) )
            {
              if ( v625 < v624 )
              {
LABEL_953:
                if ( !*(_DWORD *)(v19 + 2328) )
                {
                  v627 = (int *)v1973;
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = (char *)v627 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *v627;
                  *(_QWORD *)(v19 + 2360) = v623;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v628 = *(_DWORD *)(v19 + 2520);
                  if ( (v628 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v628 & 1) != 0 )
                  {
                    v629 = *(unsigned int *)(v19 + 2676);
                    v630 = *(_QWORD *)(v19 + 2104);
                    v631 = *(_QWORD *)(v19 + 2680);
                    v632 = (_QWORD *)(v629 + v19);
                    v633 = v629 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v629) >> 3);
                    while ( v632 != (_QWORD *)v633 )
                    {
                      *v632 ^= v631;
                      v631 = ((*v632++ ^ v630) + __ROR8__(v631, v631 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                    if ( v631 != *(_QWORD *)(v19 + 2688) )
                    {
                      v634 = *(_DWORD *)(v19 + 2052);
                      v635 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)v635 = v19;
                      *(_DWORD *)(v635 + 16) = v634;
                      if ( !*(_DWORD *)(v19 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v631 ^ *(_QWORD *)(v19 + 2688);
                      sub_140BC7384(v19, 0LL, v631, 256LL);
                    }
                  }
                }
              }
              v620 += 24LL;
              if ( v620 >= v622 )
              {
LABEL_965:
                (*(void (__fastcall **)(_QWORD))(v19 + 296))(*(_QWORD *)(v19 + 1328));
                (*(void (**)(void))(v19 + 384))();
                (*(void (__fastcall **)(char *))(v19 + 896))(v1990);
                if ( !v2024 )
                  goto LABEL_237;
                *(_DWORD *)(v19 + 2120) += v1974 << 9;
                v214 = *(void (**)(void))(v19 + 264);
LABEL_380:
                v214();
                goto LABEL_237;
              }
              goto LABEL_944;
            }
            v624 = v626 + 1;
          }
          else
          {
            if ( !v626 )
              goto LABEL_953;
            v625 = v626 - 1;
          }
          if ( v625 < v624 )
            goto LABEL_953;
        }
      }
      if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 && (*(_DWORD *)(v19 + 2524) & 0x1000) == 0 )
      {
        v636 = __rdtsc();
        v637 = (__ROR8__(v636, 3) ^ v636) * (unsigned __int128)0x7010008004002001uLL;
        v2073 = *((_QWORD *)&v637 + 1);
        v638 = v637 ^ DWORD2(v637);
        v31 = ((unsigned __int64)v637 ^ *((_QWORD *)&v637 + 1)) / 5;
        *(_DWORD *)(v19 + 2116) = v638 - 5 * v31;
      }
LABEL_970:
      v639 = *(_DWORD *)(v19 + 2116);
      v640 = 0;
      if ( !v639 )
      {
        v2031 = 0LL;
        v1071 = v41;
        v646 = 0;
        for ( i12 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(v19 + 768))(&v2031, v31);
              i12;
              i12 = (*(__int64 (__fastcall **)(__int64 *))(v19 + 768))(&v2031) )
        {
          ++v646;
          if ( !(*(__int64 (__fastcall **)(__int64, char *))(v19 + 536))(i12, &v2085) )
          {
            if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
            {
              v1073 = *(_QWORD **)(v19 + 2760);
              v1074 = 48;
              v1075 = 6LL;
              do
              {
                v1074 -= 8;
                *v1073 = *(_QWORD *)v1071;
                v1071 += 8;
                ++v1073;
                --v1075;
              }
              while ( v1075 );
              if ( v1074 )
              {
                do
                {
                  v1076 = *v1071++;
                  *(_BYTE *)v1073 = v1076;
                  v1073 = (_QWORD *)((char *)v1073 + 1);
                  --v1074;
                }
                while ( v1074 );
                v19 = (unsigned __int64)v1978;
              }
              v1071 = *(char **)(v19 + 2760);
            }
            *((_QWORD *)v1071 + 3) = i12;
            v1077 = *(_QWORD *)(v19 + 1416);
            *(_QWORD *)v1077 = v1071;
            *(_DWORD *)(v1077 + 16) = 48;
            v1078 = *(_QWORD *)(v19 + 1416);
            *(_QWORD *)(v1078 + 8) = i12;
            *(_DWORD *)(v1078 + 20) = 4096;
            if ( !*(_DWORD *)(v19 + 2328) )
            {
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = v1071 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v19 + 2352) = *(int *)v1071;
              *(_QWORD *)(v19 + 2360) = 3LL;
              *(_DWORD *)(v19 + 2328) = 1;
              v1079 = *(_DWORD *)(v19 + 2520);
              if ( (v1079 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1079 & 1) != 0 )
              {
                v1080 = *(unsigned int *)(v19 + 2676);
                v1081 = *(_QWORD *)(v19 + 2104);
                v1082 = *(_QWORD *)(v19 + 2680);
                v1083 = (_QWORD *)(v1080 + v19);
                v1084 = v1080 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1080) >> 3);
                while ( v1083 != (_QWORD *)v1084 )
                {
                  *v1083 ^= v1082;
                  v1082 = ((v1081 ^ *v1083++) + __ROR8__(v1082, v1082 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v1082 != *(_QWORD *)(v19 + 2688) )
                {
                  v1085 = *(_DWORD *)(v19 + 2052);
                  v1086 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v1086 = v19;
                  *(_DWORD *)(v1086 + 16) = v1085;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1082 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v1082, 256LL);
                }
              }
            }
          }
        }
        goto LABEL_1620;
      }
      v641 = v639 - 1;
      if ( !v641 )
      {
        v1054 = v41;
        v2038 = 0LL;
        v646 = 0;
        v1055 = KeGetCurrentIrql();
        v1983 = v1055;
        __writecr8(0xCuLL);
        v1056 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(v19 + 776))(&v2038, v31);
        if ( v1056 )
        {
          do
          {
            ++v646;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v19 + 536))(v1056, &v2084) )
            {
              if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
              {
                v1057 = *(_QWORD **)(v19 + 2760);
                v1058 = 48;
                v1059 = 6LL;
                do
                {
                  v1058 -= 8;
                  *v1057 = *(_QWORD *)v1054;
                  v1054 += 8;
                  ++v1057;
                  --v1059;
                }
                while ( v1059 );
                if ( v1058 )
                {
                  do
                  {
                    v1060 = *v1054++;
                    *(_BYTE *)v1057 = v1060;
                    v1057 = (_QWORD *)((char *)v1057 + 1);
                    --v1058;
                  }
                  while ( v1058 );
                  v19 = (unsigned __int64)v1978;
                }
                v1054 = *(char **)(v19 + 2760);
              }
              *((_QWORD *)v1054 + 3) = v1056;
              v1061 = *(_QWORD *)(v19 + 1416);
              *(_QWORD *)v1061 = v1054;
              *(_DWORD *)(v1061 + 16) = 48;
              v1062 = *(_QWORD *)(v19 + 1416);
              *(_QWORD *)(v1062 + 8) = v1056;
              *(_DWORD *)(v1062 + 20) = 4096;
              if ( !*(_DWORD *)(v19 + 2328) )
              {
                *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v19 + 2344) = v1054 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v19 + 2352) = *(int *)v1054;
                *(_QWORD *)(v19 + 2360) = 4LL;
                *(_DWORD *)(v19 + 2328) = 1;
                v1063 = *(_DWORD *)(v19 + 2520);
                if ( (v1063 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1063 & 1) != 0 )
                {
                  v1064 = *(unsigned int *)(v19 + 2676);
                  v1065 = *(_QWORD *)(v19 + 2104);
                  v1066 = *(_QWORD *)(v19 + 2680);
                  v1067 = (_QWORD *)(v1064 + v19);
                  v1068 = v1064 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1064) >> 3);
                  while ( v1067 != (_QWORD *)v1068 )
                  {
                    *v1067 ^= v1066;
                    v1066 = ((v1065 ^ *v1067++) + __ROR8__(v1066, v1066 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                  if ( v1066 != *(_QWORD *)(v19 + 2688) )
                  {
                    v1069 = *(_DWORD *)(v19 + 2052);
                    v1070 = *(_QWORD *)(v19 + 1416);
                    *(_QWORD *)v1070 = v19;
                    *(_DWORD *)(v1070 + 16) = v1069;
                    if ( !*(_DWORD *)(v19 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1066 ^ *(_QWORD *)(v19 + 2688);
                    sub_140BC7384(v19, 0LL, v1066, 256LL);
                  }
                }
              }
            }
            v1056 = (*(__int64 (__fastcall **)(__int64 *))(v19 + 776))(&v2038);
          }
          while ( v1056 );
          LOBYTE(v1055) = v1983;
        }
        __writecr8((unsigned __int8)v1055);
        goto LABEL_1620;
      }
      v642 = v641 - 1;
      if ( !v642 )
      {
        v1038 = v41;
        v1039 = 0LL;
        v646 = 0;
        do
        {
          v2008 = 0;
          while ( 1 )
          {
            do
            {
              if ( !(*(unsigned int (__fastcall **)(_QWORD, int *, __int64 *))(v19 + 760))(v640, &v2008, &v2026) )
                goto LABEL_1574;
              v1040 = (*(__int64 (__fastcall **)(__int64))(v19 + 728))(v2026);
            }
            while ( !v1040 );
            ++v646;
            v1041 = (*(__int64 (__fastcall **)(__int64))(v19 + 736))(v1040);
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v19 + 536))(v1041, &v2083) )
              break;
            (*(void (__fastcall **)(__int64, __int64))(v19 + 744))(v2026, v1040);
          }
          if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
          {
            v1042 = *(_QWORD **)(v19 + 2760);
            LODWORD(v31) = 48;
            v1043 = 6LL;
            do
            {
              v31 = (unsigned int)(v31 - 8);
              *v1042 = *(_QWORD *)v1038;
              v1038 += 8;
              ++v1042;
              --v1043;
            }
            while ( v1043 );
            if ( (_DWORD)v31 )
            {
              do
              {
                v1044 = *v1038++;
                *(_BYTE *)v1042 = v1044;
                v1042 = (_QWORD *)((char *)v1042 + 1);
                v31 = (unsigned int)(v31 - 1);
              }
              while ( (_DWORD)v31 );
              v19 = (unsigned __int64)v1978;
            }
            v1038 = *(char **)(v19 + 2760);
          }
          *((_QWORD *)v1038 + 3) = v1041;
          v1045 = *(_QWORD *)(v19 + 1416);
          *(_QWORD *)v1045 = v1038;
          *(_DWORD *)(v1045 + 16) = 48;
          v1046 = *(_QWORD *)(v19 + 1416);
          *(_QWORD *)(v1046 + 8) = v1041;
          *(_DWORD *)(v1046 + 20) = 4096;
          if ( !*(_DWORD *)(v19 + 2328) )
          {
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = v1038 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *(int *)v1038;
            *(_QWORD *)(v19 + 2360) = v1039;
            *(_DWORD *)(v19 + 2328) = 1;
            v1047 = *(_DWORD *)(v19 + 2520);
            if ( (v1047 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1047 & 1) != 0 )
            {
              v1048 = *(unsigned int *)(v19 + 2676);
              v1049 = *(_QWORD *)(v19 + 2104);
              v1050 = *(_QWORD *)(v19 + 2680);
              v31 = v1048 + v19;
              v1051 = v1048 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1048) >> 3);
              while ( v31 != v1051 )
              {
                *(_QWORD *)v31 ^= v1050;
                v1050 = ((v1049 ^ *(_QWORD *)v31) + __ROR8__(v1050, v1050 & 0x3F)) ^ 0xEFA;
                v31 += 8LL;
              }
              *(_DWORD *)(v19 + 2524) &= ~0x200000u;
              if ( v1050 != *(_QWORD *)(v19 + 2688) )
              {
                v1052 = *(_DWORD *)(v19 + 2052);
                v1053 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v1053 = v19;
                *(_DWORD *)(v1053 + 16) = v1052;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1050 ^ *(_QWORD *)(v19 + 2688);
                sub_140BC7384(v19, 0LL, v1050, 256LL);
              }
            }
          }
LABEL_1574:
          ++v640;
          ++v1039;
        }
        while ( v640 < 3 );
LABEL_1620:
        i9 = 0;
        goto LABEL_1621;
      }
      v643 = v642 - 1;
      if ( v643 )
      {
        v644 = v643 - 1;
        if ( v644 )
        {
          if ( v644 != 1 )
          {
            i9 = 0;
            *(_DWORD *)(v19 + 2116) = 0;
            v37 = 1;
            goto LABEL_1624;
          }
          v645 = v41;
          v2147 = -1;
          v646 = 0;
          v647 = 0;
          v648 = 0LL;
          do
          {
            v2033 = 0LL;
            while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v19 + 1072))(
                      v647,
                      &v2033,
                      &v2147,
                      &v2016) )
            {
              ++v646;
              if ( !(*(__int64 (__fastcall **)(__int64, char *))(v19 + 536))(v2016, &v2074) )
              {
                if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
                {
                  v649 = *(_QWORD **)(v19 + 2760);
                  v650 = 48;
                  v651 = 6LL;
                  do
                  {
                    v650 -= 8;
                    *v649 = *(_QWORD *)v645;
                    v645 += 8;
                    ++v649;
                    --v651;
                  }
                  while ( v651 );
                  if ( v650 )
                  {
                    do
                    {
                      v652 = *v645++;
                      *(_BYTE *)v649 = v652;
                      v649 = (_QWORD *)((char *)v649 + 1);
                      --v650;
                    }
                    while ( v650 );
                    v19 = (unsigned __int64)v1978;
                  }
                  v645 = *(char **)(v19 + 2760);
                }
                *((_QWORD *)v645 + 3) = v2016;
                v653 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v653 = v645;
                *(_DWORD *)(v653 + 16) = 48;
                v654 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)(v654 + 8) = v2016;
                *(_DWORD *)(v654 + 20) = 4096;
                if ( !*(_DWORD *)(v19 + 2328) )
                {
                  *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v19 + 2344) = v645 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v19 + 2352) = *(int *)v645;
                  *(_QWORD *)(v19 + 2360) = v648;
                  *(_DWORD *)(v19 + 2328) = 1;
                  v655 = *(_DWORD *)(v19 + 2520);
                  if ( (v655 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v655 & 1) != 0 )
                  {
                    v656 = *(unsigned int *)(v19 + 2676);
                    v657 = *(_QWORD *)(v19 + 2104);
                    v658 = *(_QWORD *)(v19 + 2680);
                    v659 = (_QWORD *)(v656 + v19);
                    v660 = v656 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v656) >> 3);
                    while ( v659 != (_QWORD *)v660 )
                    {
                      *v659 ^= v658;
                      v658 = ((v657 ^ *v659++) + __ROR8__(v658, v658 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                    if ( v658 != *(_QWORD *)(v19 + 2688) )
                    {
                      v661 = *(_DWORD *)(v19 + 2052);
                      v662 = *(_QWORD *)(v19 + 1416);
                      *(_QWORD *)v662 = v19;
                      *(_DWORD *)(v662 + 16) = v661;
                      if ( !*(_DWORD *)(v19 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v658 ^ *(_QWORD *)(v19 + 2688);
                      sub_140BC7384(v19, 0LL, v658, 256LL);
                    }
                  }
                }
              }
            }
            ++v647;
            ++v648;
          }
          while ( v647 < 3 );
        }
        else
        {
          v663 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v19 + 792);
          v646 = 0;
          v1974 = 0;
          for ( i13 = v663(0LL, v31); ; i13 = v682(v683) )
          {
            v683 = i13;
            if ( !i13 )
              break;
            v665 = v1973;
            v2034 = 0LL;
            v666 = 1;
            v667 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v19 + 784))(i13, &v2034);
            if ( v667 )
            {
              do
              {
                ++v666;
                if ( !(*(__int64 (__fastcall **)(__int64, char *))(v19 + 536))(v667, &v2075) )
                {
                  if ( (*(_DWORD *)(v19 + 2520) & 0x20000000) != 0 )
                  {
                    v668 = *(_QWORD **)(v19 + 2760);
                    v669 = 48;
                    v670 = 6LL;
                    do
                    {
                      v669 -= 8;
                      *v668 = *(_QWORD *)v665;
                      v665 += 8;
                      ++v668;
                      --v670;
                    }
                    while ( v670 );
                    if ( v669 )
                    {
                      do
                      {
                        v671 = *v665++;
                        *(_BYTE *)v668 = v671;
                        v668 = (_QWORD *)((char *)v668 + 1);
                        --v669;
                      }
                      while ( v669 );
                      v19 = (unsigned __int64)v1978;
                    }
                    v665 = *(char **)(v19 + 2760);
                  }
                  *((_QWORD *)v665 + 3) = v667;
                  *((_QWORD *)v665 + 4) = v683;
                  v672 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v672 = v665;
                  *(_DWORD *)(v672 + 16) = 48;
                  v673 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)(v673 + 8) = v667;
                  *(_DWORD *)(v673 + 20) = 4096;
                  if ( !*(_DWORD *)(v19 + 2328) )
                  {
                    *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v19 + 2344) = v665 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v19 + 2352) = *(int *)v665;
                    *(_QWORD *)(v19 + 2360) = 6LL;
                    *(_DWORD *)(v19 + 2328) = 1;
                    v674 = *(_DWORD *)(v19 + 2520);
                    if ( (v674 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v674 & 1) != 0 )
                    {
                      v675 = *(unsigned int *)(v19 + 2676);
                      v676 = *(_QWORD *)(v19 + 2104);
                      v677 = *(_QWORD *)(v19 + 2680);
                      v678 = (_QWORD *)(v675 + v19);
                      v679 = v675 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v675) >> 3);
                      while ( v678 != (_QWORD *)v679 )
                      {
                        *v678 ^= v677;
                        v677 = ((v676 ^ *v678++) + __ROR8__(v677, v677 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                      if ( v677 != *(_QWORD *)(v19 + 2688) )
                      {
                        v680 = *(_DWORD *)(v19 + 2052);
                        v681 = *(_QWORD *)(v19 + 1416);
                        *(_QWORD *)v681 = v19;
                        *(_DWORD *)(v681 + 16) = v680;
                        if ( !*(_DWORD *)(v19 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v677 ^ *(_QWORD *)(v19 + 2688);
                        sub_140BC7384(v19, 0LL, v677, 256LL);
                      }
                    }
                  }
                }
                v667 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v19 + 784))(v683, &v2034);
              }
              while ( v667 );
              v646 = v1974;
            }
            v682 = *(__int64 (__fastcall **)(_QWORD))(v19 + 792);
            v646 += v666;
            v1974 = v646;
          }
        }
        goto LABEL_1620;
      }
      v52 = (*(_DWORD *)(v19 + 2520) & 0x20000000) == 0;
      v646 = 0;
      v684 = *(ULONG_PTR **)(v19 + 1256);
      v1998 = (char *)v19;
      v685 = *v684;
      v1993 = *v684;
      if ( !v52 )
        goto LABEL_1620;
      v686 = (int *)v1973;
      v687 = *((_QWORD *)v1973 + 5);
      if ( v687 )
      {
        v31 = 1LL;
        v646 = 1;
        if ( v685 != v687 )
        {
          *((_QWORD *)v1973 + 3) = v685;
          v688 = *(_QWORD *)(v19 + 1416);
          *(_QWORD *)v688 = v686;
          *(_DWORD *)(v688 + 16) = 48;
          v689 = *(_QWORD *)(v19 + 1416);
          *(_QWORD *)(v689 + 8) = v685;
          *(_DWORD *)(v689 + 20) = 4096;
          i9 = 0;
          if ( !*(_DWORD *)(v19 + 2328) )
          {
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = (char *)v686 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *v686;
            *(_QWORD *)(v19 + 2360) = 5LL;
            *(_DWORD *)(v19 + 2328) = 1;
            v690 = *(_DWORD *)(v19 + 2520);
            if ( (v690 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v690 & 1) != 0 )
            {
              v691 = *(unsigned int *)(v19 + 2676);
              v692 = *(_QWORD *)(v19 + 2104);
              v693 = *(_QWORD *)(v19 + 2680);
              v31 = v691 + v19;
              v694 = v691 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v691) >> 3);
              while ( v31 != v694 )
              {
                *(_QWORD *)v31 ^= v693;
                v693 = ((v692 ^ *(_QWORD *)v31) + __ROR8__(v693, v693 & 0x3F)) ^ 0xEFA;
                v31 += 8LL;
              }
              *(_DWORD *)(v19 + 2524) &= ~0x200000u;
              if ( v693 != *(_QWORD *)(v19 + 2688) )
              {
                v695 = *(_DWORD *)(v19 + 2052);
                v696 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v696 = v19;
                *(_DWORD *)(v696 + 16) = v695;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v693 ^ *(_QWORD *)(v19 + 2688);
                sub_140BC7384(v19, 0LL, v693, 256LL);
              }
            }
          }
          goto LABEL_1621;
        }
        goto LABEL_1620;
      }
      i9 = 0;
      if ( !v685 )
        goto LABEL_1621;
      v697 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v19 + 528);
      v1974 = 1;
      v1997 = (_BYTE *)v19;
      v698 = v697(v685, &v2129);
      v699 = BugCheckParameter2;
      v700 = v698;
      v701 = v2131;
      v1984 = (_DWORD *)v698;
      v1989 = v2131;
      v1991 = BugCheckParameter2;
      if ( !BugCheckParameter2 )
      {
        if ( (*(_DWORD *)(v19 + 2520) & 0x100000) == 0 )
        {
          v2022[1] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v685, 5uLL, 0LL);
        }
        v702 = -1073741701;
        goto LABEL_1545;
      }
      v2014 = 0LL;
      v703 = &v2015;
      v704 = 4;
      v705 = 0xFFFFFFFFLL;
      do
      {
        *(_BYTE *)v703 = 0;
        v703 = (unsigned int *)((char *)v703 + 1);
        --v704;
      }
      while ( v704 );
      v706 = 0;
      if ( !*(_DWORD *)(v19 + 2092) )
      {
LABEL_1082:
        v1999 = 0LL;
        goto LABEL_1083;
      }
      v707 = v2015;
      LODWORD(v705) = HIDWORD(v2014);
      v708 = v2014;
      while ( 1 )
      {
        v709 = v19;
        v710 = 0;
        if ( *(_QWORD *)(v19 + 2752) )
          v709 = *(_QWORD *)(v19 + 2752);
        v711 = (int *)(v709 + *(unsigned int *)(v709 + 2088));
        if ( v708 && (unsigned int)v705 <= v706 )
        {
          v710 = v705;
          v711 = (int *)(v709 + v707);
        }
        if ( v710 != v706 )
          break;
LABEL_1074:
        LODWORD(v2014) = 1;
        v707 = (_DWORD)v711 - v709;
        v705 = v710;
        v2015 = (_DWORD)v711 - v709;
        v708 = 1;
        HIDWORD(v2014) = v710;
        v715 = *v711;
        if ( (*v711 == 1 || v715 == 12 || v715 == 43) && *((_QWORD *)v711 + 1) == v700 && v711[4] == v701
          || (unsigned int)(v715 - 33) <= 1 && *((_QWORD *)v711 + 4) == v699 )
        {
          v1999 = v711;
          if ( v711 )
          {
            v702 = -1073741554;
            goto LABEL_1544;
          }
LABEL_1083:
          v716 = *(char ***)(v19 + 1320);
          LODWORD(v1979) = v1989;
          _disable();
          v717 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v19 + 1624));
          _enable();
          (*(void (__fastcall **)(__int64, __int64))(v19 + 376))(v717, v705);
          LOBYTE(v718) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(v19 + 248))(*(_QWORD *)(v19 + 1328), v718);
          v719 = *v716;
          if ( *v716 != (char *)v716 )
          {
            v720 = *(_QWORD *)(v19 + 1880);
            while ( 1 )
            {
              v721 = *(_QWORD *)&v719[*(_QWORD *)(v19 + 1888) - v720];
              if ( v699 >= v721 && v699 < v721 + *(unsigned int *)&v719[*(_QWORD *)(v19 + 1896) - v720] )
                break;
              v719 = *(char **)v719;
              if ( v719 == (char *)v716 )
                goto LABEL_1092;
            }
            (*(void (__fastcall **)(char *, __int64))(v19 + 232))(&v719[-v720], 1LL);
          }
LABEL_1092:
          (*(void (__fastcall **)(_QWORD))(v19 + 296))(*(_QWORD *)(v19 + 1328));
          (*(void (**)(void))(v19 + 384))();
          if ( _bittest((const signed __int32 *)(v19 + 2520), 0x1Du) )
          {
            v702 = sub_140BCE96C(&v1998, v699, 9LL);
            goto LABEL_1544;
          }
          v723 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v19 + 512);
          v2058[4] = 0LL;
          LOBYTE(v722) = 1;
          v2028[4] = 0;
          v724 = v723(v699, v722, 0LL, &v1989);
          if ( v724 )
          {
            v726 = v1989;
          }
          else
          {
            v726 = 0;
            v1989 = 0;
          }
          v2058[1] = v724;
          v727 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v19 + 512);
          v2028[1] = v726;
          LOBYTE(v725) = 1;
          v1990 = (char *)v727(v699, v725, 12LL, &v1989);
          if ( v1990 )
          {
            v729 = v1989;
          }
          else
          {
            v729 = 0;
            v1989 = 0;
          }
          v1982 = v729;
          v2058[2] = v1990;
          v2028[2] = v729;
          LOBYTE(v728) = 1;
          v730 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(v19 + 512))(
                   v699,
                   v728,
                   10LL,
                   &v1989);
          if ( v730 )
          {
            v731 = v1989;
          }
          else
          {
            v731 = 0;
            v1989 = 0;
          }
          v2058[3] = v730;
          v732 = *(__int64 (__fastcall **)(_QWORD))(v19 + 520);
          v2028[3] = v731;
          v733 = v732(v699);
          if ( !v733 )
          {
            v734 = *(_DWORD *)(v19 + 2520);
            if ( (v734 & 0x100000) == 0 )
            {
              v2022[5] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v699, 7uLL, 0LL);
            }
            if ( *(_DWORD *)(v19 + 2328) )
              goto LABEL_1117;
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = 0LL;
            *(_QWORD *)(v19 + 2352) = 271LL;
            *(_QWORD *)(v19 + 2360) = v699;
            *(_DWORD *)(v19 + 2328) = 1;
            if ( (v734 & 0x20000000) != 0 )
              goto LABEL_1117;
            if ( (*(_DWORD *)(v19 + 2524) & 0x200000) == 0 )
              goto LABEL_1117;
            if ( (v734 & 1) == 0 )
              goto LABEL_1117;
            v735 = *(unsigned int *)(v19 + 2676);
            v736 = *(_QWORD *)(v19 + 2104);
            v737 = *(_QWORD *)(v19 + 2680);
            v738 = (_QWORD *)(v735 + v19);
            v739 = v735 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v735) >> 3);
            while ( v738 != (_QWORD *)v739 )
            {
              *v738 ^= v737;
              v737 = ((v736 ^ *v738++) + __ROR8__(v737, v737 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v19 + 2524) &= ~0x200000u;
            if ( v737 == *(_QWORD *)(v19 + 2688) )
              goto LABEL_1117;
            v740 = *(_DWORD *)(v19 + 2052);
            v741 = *(_QWORD *)(v19 + 1416);
            *(_QWORD *)v741 = v19;
            *(_DWORD *)(v741 + 16) = v740;
            if ( !*(_DWORD *)(v19 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v737 ^ *(_QWORD *)(v19 + 2688);
            v742 = v19;
            goto LABEL_1116;
          }
          v743 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v19 + 1176))(v699, &v2052);
          v744 = *(unsigned int *)(v19 + 2372);
          v2058[5] = v743;
          v2028[5] = v2052;
          LODWORD(v743) = *(_DWORD *)(v733 + 84);
          v2058[0] = v699;
          v745 = *(unsigned int *)(v19 + 2052);
          v2028[0] = v743;
          v746 = v745 + 288;
          if ( (unsigned int)(v745 + 288) <= *(_DWORD *)(v19 + 2660) )
          {
            v747 = v19;
            v1976 = v19;
            *(_DWORD *)(v19 + 2052) = v746;
          }
          else
          {
            v1976 = sub_140BC6AF8(v19, v746, v744);
            v747 = v1976;
            if ( !v1976 )
            {
LABEL_1120:
              v1997 = 0LL;
              goto LABEL_1162;
            }
            v748 = *(_DWORD *)(v19 + 2520);
            if ( (v748 & 2) == 0 )
            {
              v749 = *(_DWORD *)(v19 + 2052);
              v750 = *(_QWORD *)(v19 + 2024);
              v962 = (v748 & 0x10000000) != 0;
              v751 = (_QWORD *)v19;
              v752 = v962 ? *(_DWORD *)(v19 + 2372) : 0;
              if ( v749 >= 8 )
              {
                v753 = (unsigned __int64)v749 >> 3;
                do
                {
                  *v751 = 0LL;
                  v749 -= 8;
                  ++v751;
                  --v753;
                }
                while ( v753 );
              }
              for ( ; v749; --v749 )
              {
                *(_BYTE *)v751 = 0;
                v751 = (_QWORD *)((char *)v751 + 1);
              }
              v754 = *(_DWORD *)(v747 + 2372);
              *(_DWORD *)(v747 + 2372) = v752;
              if ( v752 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v747 + 872))(v750);
              }
              else if ( (*(_DWORD *)(v747 + 2520) & 0x8000000) != 0 || !v752 )
              {
                (*(void (__fastcall **)(__int64))(v747 + 264))(v750);
              }
              else
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v747 + 568))(v750 - 8, *(_QWORD *)(v750 - 8));
              }
              *(_DWORD *)(v747 + 2372) = v754;
            }
            *(_DWORD *)(v747 + 2520) &= ~2u;
          }
          v755 = v747 + v745;
          *(_DWORD *)(v747 + 2092) += 6;
          v756 = v2058;
          v2035 = v747 + v745;
          v757 = v2028;
          v1999 = (_DWORD *)(v747 + v745);
          v1975 = (__int64)v2058;
          v1980 = 6LL;
          do
          {
            v758 = (unsigned int)*v757;
            v759 = 6LL;
            v760 = (_QWORD *)*v756;
            v761 = 48;
            v1977 = *v757;
            v762 = (_QWORD *)v755;
            do
            {
              *v762 = 0LL;
              v761 -= 8;
              ++v762;
              --v759;
            }
            while ( v759 );
            for ( ; v761; --v761 )
            {
              *(_BYTE *)v762 = 0;
              v762 = (_QWORD *)((char *)v762 + 1);
            }
            *(_DWORD *)v755 = 0;
            *(_QWORD *)(v755 + 8) = v760;
            v763 = v760;
            *(_DWORD *)(v755 + 16) = v758;
            v764 = (const char *)v760;
            *(_DWORD *)(v747 + 2120) += v758;
            v765 = *(_DWORD *)(v747 + 2100);
            v766 = *(_QWORD *)(v747 + 2104);
            if ( v760 < (_QWORD *)((char *)v760 + v758) )
            {
              do
              {
                _mm_prefetch(v764, 0);
                v764 += 64;
              }
              while ( v764 < (const char *)v760 + v758 );
            }
            v767 = *(_QWORD *)(v747 + 2104);
            v768 = (unsigned int)v758 >> 7;
            if ( (unsigned int)v758 >> 7 )
            {
              do
              {
                v769 = 8LL;
                do
                {
                  v770 = v763[1] ^ __ROL8__(*v763 ^ v767, v765);
                  v763 += 2;
                  v767 = __ROL8__(v770, v765);
                  --v769;
                }
                while ( v769 );
                v771 = (__ROL8__(v766 ^ ((char *)v763 - (char *)v760), 17) ^ v766 ^ (unsigned __int64)((char *)v763 - (char *)v760))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2076 = *((_QWORD *)&v771 + 1);
                v765 = (BYTE8(v771) ^ (unsigned __int8)(v771 ^ v765)) & 0x3F;
                if ( !v765 )
                  LOBYTE(v765) = 1;
                --v768;
              }
              while ( v768 );
              v747 = v1976;
              LODWORD(v758) = v1977;
              v756 = (_QWORD *)v1975;
            }
            v772 = v758 & 0x7F;
            if ( v772 >= 8 )
            {
              v773 = (unsigned __int64)(v758 & 0x7F) >> 3;
              do
              {
                v767 = __ROL8__(*v763++ ^ v767, v765);
                v772 -= 8;
                --v773;
              }
              while ( v773 );
            }
            if ( v772 )
            {
              do
              {
                v774 = *(unsigned __int8 *)v763;
                v763 = (_QWORD *)((char *)v763 + 1);
                v767 = __ROL8__(v774 ^ v767, v765);
                --v772;
              }
              while ( v772 );
              v747 = v1976;
            }
            for ( i14 = v767; ; v767 = (unsigned int)i14 ^ (unsigned int)v767 )
            {
              i14 >>= 31;
              if ( !i14 )
                break;
            }
            LODWORD(v767) = v767 & 0x7FFFFFFF;
            ++v756;
            *(_DWORD *)(v755 + 20) = v767;
            *(_DWORD *)(v747 + 2120) += v758;
            v755 = v2035 + 48;
            v1975 = (__int64)v756;
            ++v757;
            v2035 += 48LL;
            --v1980;
          }
          while ( v1980 );
          v19 = (unsigned __int64)v1978;
          v1997 = (_BYTE *)v747;
          if ( !v747 )
          {
            i9 = 0;
            goto LABEL_1162;
          }
          v776 = v1999;
          v777 = v1991;
          *v1999 = 44;
          *((_QWORD *)v776 + 3) = v777;
          if ( (*(_DWORD *)(v747 + 2520) & 0x8100000) == 0 )
          {
            if ( _bittest((const signed __int32 *)(v747 + 2524), 0xFu) )
            {
              v776[8] |= 1u;
              if ( (unsigned int)sub_140BC7D30(v747, v777, v767, v763) )
                v776[8] |= 4u;
            }
          }
          v1998 = (char *)v747;
          i9 = 0;
          v702 = sub_140BC50B0((unsigned int)&v1997, (_DWORD)v1984, v1979, v777, 9, (__int64)&v2007, (__int64)v2022);
          if ( v702 < 0 )
            goto LABEL_1544;
          v778 = v1997;
          v779 = v2022[0] - v2007;
          v1999 = &v1997[(_QWORD)v1999 - v747];
          v780 = (_QWORD *)(v777 + v2007);
          v781 = v1999 + 48;
          v782 = 48;
          v1975 = (__int64)(v1999 + 48);
          v783 = v1999 + 48;
          v784 = 6LL;
          do
          {
            *v783 = 0LL;
            v782 -= 8;
            ++v783;
            --v784;
          }
          while ( v784 );
          for ( i15 = 0xFFFFFFFFLL; v782; --v782 )
          {
            *(_BYTE *)v783 = 0;
            v783 = (_QWORD *)((char *)v783 + 1);
          }
          *v781 = 0;
          v786 = v780;
          *((_QWORD *)v781 + 1) = v780;
          v787 = (const char *)v780;
          v781[4] = v779;
          *((_DWORD *)v778 + 530) += v779;
          v788 = *((_DWORD *)v778 + 525);
          v789 = *((_QWORD *)v778 + 263);
          v790 = (unsigned __int64)v780 + v779;
          if ( (unsigned __int64)v780 < v790 )
          {
            do
            {
              _mm_prefetch(v787, 0);
              v787 += 64;
            }
            while ( (unsigned __int64)v787 < v790 );
          }
          v791 = *((_QWORD *)v778 + 263);
          v792 = v779 >> 7;
          if ( v779 >> 7 )
          {
            do
            {
              v793 = 8LL;
              do
              {
                v794 = v786[1] ^ __ROL8__(*v786 ^ v791, v788);
                v786 += 2;
                v791 = __ROL8__(v794, v788);
                --v793;
              }
              while ( v793 );
              v795 = (__ROL8__(v789 ^ ((char *)v786 - (char *)v780), 17) ^ v789 ^ (unsigned __int64)((char *)v786 - (char *)v780))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2077 = *((_QWORD *)&v795 + 1);
              v796 = v795 ^ BYTE8(v795) ^ v788;
              i15 = 0xFFFFFFFFLL;
              v788 = v796 & 0x3F;
              if ( !v788 )
                LOBYTE(v788) = 1;
              --v792;
            }
            while ( v792 );
            v19 = (unsigned __int64)v1978;
            v781 = (_DWORD *)v1975;
          }
          v797 = v779 & 0x7F;
          if ( (unsigned int)v797 >= 8 )
          {
            v798 = (unsigned __int64)(unsigned int)v797 >> 3;
            do
            {
              v791 = __ROL8__(*v786++ ^ v791, v788);
              v797 = (unsigned int)(v797 - 8);
              --v798;
            }
            while ( v798 );
          }
          for ( ; (_DWORD)v797; v797 = (unsigned int)(v797 - 1) )
          {
            v799 = *(unsigned __int8 *)v786;
            v786 = (_QWORD *)((char *)v786 + 1);
            v791 = __ROL8__(v799 ^ v791, v788);
          }
          for ( i16 = v791; ; v791 = (unsigned int)i16 ^ (unsigned int)v791 )
          {
            i16 >>= 31;
            if ( !i16 )
              break;
          }
          LODWORD(v791) = v791 & 0x7FFFFFFF;
          v1998 = v778;
          v781[5] = v791;
          i9 = 0;
          v1999[60] = 48;
          v2017 = v1999 + 24;
          if ( v1999 == (_DWORD *)-96LL )
          {
            v801 = *((unsigned int *)v778 + 513);
            v802 = v801 + 48;
            if ( (unsigned int)(v801 + 48) <= *((_DWORD *)v778 + 665) )
            {
              v803 = (__int64)v778;
              *((_DWORD *)v778 + 513) = v802;
            }
            else
            {
              v803 = sub_140BC6AF8(v778, v802, *((unsigned int *)v778 + 593));
              if ( !v803 )
                goto LABEL_1120;
              v804 = *((_DWORD *)v778 + 630);
              if ( (v804 & 2) == 0 )
              {
                v805 = *((_DWORD *)v778 + 513);
                v806 = *((_QWORD *)v778 + 253);
                v807 = (v804 & 0x10000000) != 0 ? *((_DWORD *)v778 + 593) : 0;
                if ( v805 >= 8 )
                {
                  v808 = (unsigned __int64)v805 >> 3;
                  do
                  {
                    *(_QWORD *)v778 = 0LL;
                    v805 -= 8;
                    v778 += 8;
                    --v808;
                  }
                  while ( v808 );
                }
                for ( ; v805; --v805 )
                  *v778++ = 0;
                v809 = *(_DWORD *)(v803 + 2372);
                *(_DWORD *)(v803 + 2372) = v807;
                if ( v807 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v803 + 872))(v806);
                }
                else if ( (*(_DWORD *)(v803 + 2520) & 0x8000000) != 0 || !v807 )
                {
                  (*(void (__fastcall **)(__int64))(v803 + 264))(v806);
                }
                else
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v803 + 568))(v806 - 8, *(_QWORD *)(v806 - 8));
                }
                *(_DWORD *)(v803 + 2372) = v809;
              }
              *(_DWORD *)(v803 + 2520) &= ~2u;
            }
            ++*(_DWORD *)(v803 + 2092);
            v810 = 48;
            v811 = v803 + v801;
            v1975 = v811;
            v812 = (_QWORD *)v811;
            v2051 = (_DWORD *)v811;
            v813 = 6LL;
            do
            {
              *v812 = 0LL;
              v810 -= 8;
              ++v812;
              --v813;
            }
            while ( v813 );
            for ( ; v810; --v810 )
            {
              *(_BYTE *)v812 = 0;
              v812 = (_QWORD *)((char *)v812 + 1);
            }
            v814 = v1990;
            v815 = v1982;
            v797 = (unsigned __int64)v1990;
            *(_DWORD *)v811 = 13;
            *(_QWORD *)(v811 + 8) = v797;
            *(_DWORD *)(v811 + 16) = v815;
            *(_DWORD *)(v803 + 2120) += v815;
            v816 = *(_DWORD *)(v803 + 2100);
            v817 = *(_QWORD *)(v803 + 2104);
            if ( v797 < v797 + v815 )
            {
              v818 = v814;
              do
              {
                _mm_prefetch(v818, 0);
                v818 += 64;
              }
              while ( (unsigned __int64)v818 < v797 + v815 );
            }
            v791 = *(_QWORD *)(v803 + 2104);
            v819 = (unsigned int)v815 >> 7;
            if ( (unsigned int)v815 >> 7 )
            {
              do
              {
                v820 = 8LL;
                do
                {
                  v821 = *(_QWORD *)(v797 + 8) ^ __ROL8__(*(_QWORD *)v797 ^ v791, v816);
                  v797 += 16LL;
                  v791 = __ROL8__(v821, v816);
                  --v820;
                }
                while ( v820 );
                v822 = (__ROL8__(v817 ^ (v797 - (_QWORD)v814), 17) ^ v817 ^ (v797 - (unsigned __int64)v814))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2078 = *((_QWORD *)&v822 + 1);
                v816 = ((unsigned __int8)v822 ^ (unsigned __int8)(BYTE8(v822) ^ v816)) & 0x3F;
                if ( !v816 )
                  LOBYTE(v816) = 1;
                --v819;
              }
              while ( v819 );
              v19 = (unsigned __int64)v1978;
              v811 = v1975;
              LODWORD(v815) = v1982;
            }
            i15 = v815 & 0x7F;
            if ( (unsigned int)i15 >= 8 )
            {
              v823 = (unsigned __int64)(v815 & 0x7F) >> 3;
              do
              {
                v791 = __ROL8__(*(_QWORD *)v797 ^ v791, v816);
                v797 += 8LL;
                i15 = (unsigned int)(i15 - 8);
                --v823;
              }
              while ( v823 );
            }
            if ( (_DWORD)i15 )
            {
              do
              {
                v824 = *(unsigned __int8 *)v797++;
                v791 = __ROL8__(v824 ^ v791, v816);
                i15 = (unsigned int)(i15 - 1);
              }
              while ( (_DWORD)i15 );
              v19 = (unsigned __int64)v1978;
            }
            for ( i17 = v791; ; v791 = (unsigned int)i17 ^ (unsigned int)v791 )
            {
              i17 >>= 31;
              if ( !i17 )
                break;
            }
            LODWORD(v791) = v791 & 0x7FFFFFFF;
            *(_DWORD *)(v811 + 20) = v791;
            v2017 = v2051;
            *(_DWORD *)(v803 + 2120) += v815;
          }
          else
          {
            LODWORD(v815) = v1982;
            v803 = (__int64)v778;
            v814 = v1990;
            v1999[24] = 13;
          }
          if ( (*(_DWORD *)(v803 + 2520) & 0x20000000) != 0 && (_DWORD)v815 )
            sub_140516AFC(v803, v814, (unsigned int)v815, v2017 + 7);
          v1997 = (_BYTE *)v803;
          v2017[6] = 0;
          v2017[6] |= 1u;
          if ( !v803 )
            goto LABEL_1162;
          v826 = v1999;
          v1998 = (char *)v803;
          v1999[36] = 35;
          if ( v826[40] < 0x94u )
          {
            v833 = v1991;
          }
          else
          {
            v827 = v1991;
            v828 = *((_QWORD *)v826 + 19);
            v829 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))(v803 + 520))(
                     v1991,
                     i15,
                     v791,
                     v797);
            if ( !v829 )
              goto LABEL_1120;
            v791 = v827 + *(unsigned int *)(v829 + 80);
            i15 = v826[46] | 2u;
            v826[46] = i15;
            v830 = i15;
            v831 = *(_QWORD **)(v828 + 112);
            if ( (unsigned __int64)v831 >= v827 && (unsigned __int64)v831 < v791 )
            {
              v830 = i15 | 4;
              *((_QWORD *)v826 + 21) = *v831;
              v826[46] = i15 | 4;
            }
            v832 = *(_QWORD **)(v828 + 120);
            v833 = v1991;
            if ( (unsigned __int64)v832 >= v1991 && (unsigned __int64)v832 < v791 )
            {
              *((_QWORD *)v826 + 22) = *v832;
              v826[46] = v830 | 8;
            }
          }
          v962 = _bittest((const signed __int32 *)(v803 + 2520), 0x15u);
          v1998 = (char *)v803;
          if ( !v962 )
            goto LABEL_1543;
          v834 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR))(v803 + 520))(v833, i15, v791);
          v1975 = v834;
          if ( !v834 )
            goto LABEL_1117;
          v835 = *(_WORD *)(v834 + 6);
          v1972 = v835;
          v1980 = (unsigned int)v1979 / 0xCuLL;
          if ( !v835 )
          {
            v836 = *(_DWORD *)(v803 + 2520);
            if ( (v836 & 0x100000) == 0 )
            {
              v2022[6] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v833, 0LL, 0LL);
            }
            if ( *(_DWORD *)(v803 + 2328) )
              goto LABEL_1117;
            *(_QWORD *)(v803 + 2336) = v803 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v803 + 2344) = 0LL;
            *(_QWORD *)(v803 + 2352) = 271LL;
            *(_QWORD *)(v803 + 2360) = v833;
            *(_DWORD *)(v803 + 2328) = 1;
            if ( (v836 & 0x20000000) != 0 )
              goto LABEL_1117;
            if ( !_bittest((const signed __int32 *)(v803 + 2524), 0x15u) )
              goto LABEL_1117;
            if ( (v836 & 1) == 0 )
              goto LABEL_1117;
            v837 = *(unsigned int *)(v803 + 2676);
            v838 = *(_QWORD *)(v803 + 2104);
            v737 = *(_QWORD *)(v803 + 2680);
            v839 = (_QWORD *)(v837 + v803);
            v840 = v837 + v803 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v803 + 2052) - v837) >> 3);
            while ( v839 != (_QWORD *)v840 )
            {
              *v839 ^= v737;
              v737 = ((v838 ^ *v839++) + __ROR8__(v737, v737 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v803 + 2524) &= ~0x200000u;
            if ( v737 == *(_QWORD *)(v803 + 2688) )
              goto LABEL_1117;
            v841 = *(_QWORD *)(v803 + 1416);
            v842 = *(_DWORD *)(v803 + 2052);
            *(_QWORD *)v841 = v803;
            *(_DWORD *)(v841 + 16) = v842;
            if ( !*(_DWORD *)(v803 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v803 + 1416) + 24LL) = v737 ^ *(_QWORD *)(v803 + 2688);
            v742 = v803;
            goto LABEL_1116;
          }
          v843 = (_BYTE *)v803;
          v844 = v1984;
          v1976 = v834 + *(unsigned __int16 *)(v834 + 20) + 24LL;
          v845 = (_DWORD *)v1976;
          v1992 = &v1984[3 * ((unsigned int)v1979 / 0xC)];
          v846 = 0;
          v1982 = 0;
          v847 = (_DWORD *)v1976;
          v1988 = v1976;
          v848 = v1992;
          while ( 1 )
          {
            v849 = v847[4];
            v850 = v847[3];
            if ( v849 <= v847[2] )
              v849 = v847[2];
            v1977 = v847[3];
            v851 = v850 + v849;
            v1981 = v851;
            if ( v846 )
            {
              if ( v851 < v845[10 * v846 - 7] )
              {
                v886 = *(_DWORD *)(v803 + 2520);
                if ( (v886 & 0x100000) == 0 )
                {
                  v2022[2] = -402653175;
                  KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v833, 1uLL, 0LL);
                }
                i9 = 0;
                if ( *(_DWORD *)(v803 + 2328) )
                  goto LABEL_1117;
                *(_QWORD *)(v803 + 2336) = v803 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v803 + 2344) = 0LL;
                *(_QWORD *)(v803 + 2352) = 271LL;
                *(_QWORD *)(v803 + 2360) = v833;
                *(_DWORD *)(v803 + 2328) = 1;
                if ( (v886 & 0x20000000) != 0 || (*(_DWORD *)(v803 + 2524) & 0x200000) == 0 || (v886 & 1) == 0 )
                  goto LABEL_1117;
                v887 = *(unsigned int *)(v803 + 2676);
                v888 = *(_QWORD *)(v803 + 2104);
                v737 = *(_QWORD *)(v803 + 2680);
                v889 = (_QWORD *)(v887 + v803);
                v890 = v887 + v803 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v803 + 2052) - v887) >> 3);
                while ( v889 != (_QWORD *)v890 )
                {
                  *v889 ^= v737;
                  v737 = ((v888 ^ *v889++) + __ROR8__(v737, v737 & 0x3F)) ^ 0xEFA;
                }
LABEL_1323:
                *(_DWORD *)(v803 + 2524) &= ~0x200000u;
                if ( v737 == *(_QWORD *)(v803 + 2688) )
                {
LABEL_1117:
                  v702 = -1073741701;
                  goto LABEL_1544;
                }
                v891 = *(_DWORD *)(v803 + 2052);
                v892 = *(_QWORD *)(v803 + 1416);
                *(_QWORD *)v892 = v803;
                *(_DWORD *)(v892 + 16) = v891;
                v893 = *(_QWORD *)(v803 + 2688);
                if ( !*(_DWORD *)(v803 + 2328) )
                {
                  v894 = *(_QWORD *)(v803 + 1416);
                  goto LABEL_1326;
                }
LABEL_1327:
                v742 = v803;
LABEL_1116:
                sub_140BC7384(v742, 0LL, v737, 256LL);
                goto LABEL_1117;
              }
              v846 = v1982;
            }
            if ( v844 != v848 )
            {
              do
              {
                v852 = v844[1];
                if ( *v844 >= v851 || v852 <= v850 )
                  break;
                if ( *v844 < v850 || v852 > v851 )
                {
                  v895 = *(_DWORD *)(v803 + 2520);
                  if ( (v895 & 0x100000) == 0 )
                  {
                    v2027 = -402653175;
                    KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v833, 2uLL, 0LL);
                  }
                  i9 = 0;
                  if ( !*(_DWORD *)(v803 + 2328) )
                  {
                    *(_QWORD *)(v803 + 2336) = v803 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v803 + 2344) = 0LL;
                    *(_QWORD *)(v803 + 2352) = 271LL;
                    *(_QWORD *)(v803 + 2360) = v833;
                    *(_DWORD *)(v803 + 2328) = 1;
                    if ( (v895 & 0x20000000) == 0 && (*(_DWORD *)(v803 + 2524) & 0x200000) != 0 && (v895 & 1) != 0 )
                    {
                      v896 = *(unsigned int *)(v803 + 2676);
                      v897 = *(_QWORD *)(v803 + 2104);
                      v737 = *(_QWORD *)(v803 + 2680);
                      v898 = (_QWORD *)(v896 + v803);
                      v899 = v896 + v803 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v803 + 2052) - v896) >> 3);
                      while ( v898 != (_QWORD *)v899 )
                      {
                        *v898 ^= v737;
                        v737 = ((v897 ^ *v898++) + __ROR8__(v737, v737 & 0x3F)) ^ 0xEFA;
                      }
                      goto LABEL_1323;
                    }
                  }
                  goto LABEL_1117;
                }
                v853 = v844[2];
                v2079 = v844;
                if ( (v853 & 1) != 0 || (*(_BYTE *)(v853 + v833) & 0x20) != 0 )
                {
                  v854 = v847[4];
                  v855 = v847[3];
                  if ( v854 <= v847[2] )
                    v854 = v847[2];
                  v856 = v855 + v854;
                  v857 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR))(v803 + 1048))(
                                           v844,
                                           v1991);
                  v858 = v857;
                  if ( *v857 < v855 || v857[1] > v856 )
                  {
                    v859 = v1991;
                    v860 = ((_DWORD)v857 - v1991) | 0x80000000;
                    v861 = *(_DWORD *)(v803 + 2520);
                    if ( (v861 & 0x100000) == 0 )
                    {
                      v2022[4] = -402653175;
                      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v1991, v860, 0LL);
                    }
                    if ( !*(_DWORD *)(v803 + 2328) )
                    {
                      *(_QWORD *)(v803 + 2336) = v803 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v803 + 2344) = 0LL;
                      *(_QWORD *)(v803 + 2352) = 271LL;
                      *(_QWORD *)(v803 + 2360) = v859;
                      *(_DWORD *)(v803 + 2328) = 1;
                      if ( (v861 & 0x20000000) == 0 && (*(_DWORD *)(v803 + 2524) & 0x200000) != 0 && (v861 & 1) != 0 )
                      {
                        v862 = *(unsigned int *)(v803 + 2676);
                        v863 = *(_QWORD *)(v803 + 2104);
                        v864 = *(_QWORD *)(v803 + 2680);
                        v865 = (_QWORD *)(v862 + v803);
                        v866 = v862
                             + v803
                             + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v803 + 2052) - v862) >> 3);
                        while ( v865 != (_QWORD *)v866 )
                        {
                          *v865 ^= v864;
                          v864 = ((v863 ^ *v865++) + __ROR8__(v864, v864 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v803 + 2524) &= ~0x200000u;
                        if ( v864 != *(_QWORD *)(v803 + 2688) )
                        {
                          v867 = *(_DWORD *)(v803 + 2052);
                          v868 = *(_QWORD *)(v803 + 1416);
                          *(_QWORD *)v868 = v803;
                          *(_DWORD *)(v868 + 16) = v867;
                          if ( !*(_DWORD *)(v803 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v803 + 1416) + 24LL) = v864 ^ *(_QWORD *)(v803 + 2688);
                          sub_140BC7384(v803, 0LL, v864, 256LL);
                        }
                      }
                    }
                  }
                  v869 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))(v803 + 1056))(
                                           v858,
                                           v1991,
                                           v1991 + *v858);
                  if ( *v869 >= v855 && v869[1] <= v856 )
                  {
                    v833 = v1991;
                  }
                  else
                  {
                    v833 = v1991;
                    v870 = ((_DWORD)v869 - v1991) | 0x80000000;
                    v871 = *(_DWORD *)(v803 + 2520);
                    if ( (v871 & 0x100000) == 0 )
                    {
                      v2022[3] = -402653175;
                      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v1991, v870, 0LL);
                    }
                    if ( !*(_DWORD *)(v803 + 2328) )
                    {
                      *(_QWORD *)(v803 + 2336) = v803 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v803 + 2344) = 0LL;
                      *(_QWORD *)(v803 + 2352) = 271LL;
                      *(_QWORD *)(v803 + 2360) = v833;
                      *(_DWORD *)(v803 + 2328) = 1;
                      if ( (v871 & 0x20000000) == 0 && (*(_DWORD *)(v803 + 2524) & 0x200000) != 0 && (v871 & 1) != 0 )
                      {
                        v872 = *(unsigned int *)(v803 + 2676);
                        v873 = *(_QWORD *)(v803 + 2104);
                        v874 = *(_QWORD *)(v803 + 2680);
                        v875 = (_QWORD *)(v872 + v803);
                        v876 = v872
                             + v803
                             + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v803 + 2052) - v872) >> 3);
                        while ( v875 != (_QWORD *)v876 )
                        {
                          *v875 ^= v874;
                          v874 = ((v873 ^ *v875++) + __ROR8__(v874, v874 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v803 + 2524) &= ~0x200000u;
                        if ( v874 != *(_QWORD *)(v803 + 2688) )
                        {
                          v877 = *(_DWORD *)(v803 + 2052);
                          v878 = *(_QWORD *)(v803 + 1416);
                          *(_QWORD *)v878 = v803;
                          *(_DWORD *)(v878 + 16) = v877;
                          if ( !*(_DWORD *)(v803 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v803 + 1416) + 24LL) = v874 ^ *(_QWORD *)(v803 + 2688);
                          sub_140BC7384(v803, 0LL, v874, 256LL);
                        }
                      }
                    }
                  }
                  v851 = v1981;
                  v847 = (_DWORD *)v1988;
                  v850 = v1977;
                }
                v844 += 3;
              }
              while ( v844 != v1992 );
              v846 = v1982;
              v835 = v1972;
              v845 = (_DWORD *)v1976;
              v848 = v1992;
            }
            ++v846;
            v847 += 10;
            v1982 = v846;
            v1988 = (unsigned __int64)v847;
            if ( v846 >= v835 )
            {
              v879 = v1980;
              v880 = v1975;
              if ( v844 != v1992 )
              {
                v881 = *(_DWORD *)(v803 + 2520);
                if ( (v881 & 0x100000) == 0 )
                {
                  v2025 = -402653175;
                  KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v833, 3uLL, 0LL);
                }
                i9 = 0;
                if ( *(_DWORD *)(v803 + 2328) )
                  goto LABEL_1117;
                *(_QWORD *)(v803 + 2336) = v803 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v803 + 2344) = 0LL;
                *(_QWORD *)(v803 + 2352) = 271LL;
                *(_QWORD *)(v803 + 2360) = v833;
                *(_DWORD *)(v803 + 2328) = 1;
                if ( (v881 & 0x20000000) != 0 )
                  goto LABEL_1117;
                if ( (*(_DWORD *)(v803 + 2524) & 0x200000) == 0 )
                  goto LABEL_1117;
                if ( (v881 & 1) == 0 )
                  goto LABEL_1117;
                v882 = *(unsigned int *)(v803 + 2676);
                v883 = *(_QWORD *)(v803 + 2104);
                v737 = *(_QWORD *)(v803 + 2680);
                v884 = (_QWORD *)(v882 + v803);
                v885 = v882 + v803 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v803 + 2052) - v882) >> 3);
                while ( v884 != (_QWORD *)v885 )
                {
                  *v884 ^= v737;
                  v737 = ((v883 ^ *v884++) + __ROR8__(v737, v737 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v803 + 2524) &= ~0x200000u;
                if ( v737 == *(_QWORD *)(v803 + 2688) )
                  goto LABEL_1117;
                v900 = *(_DWORD *)(v803 + 2052);
                v901 = *(_QWORD *)(v803 + 1416);
                *(_QWORD *)v901 = v803;
                *(_DWORD *)(v901 + 16) = v900;
                v893 = *(_QWORD *)(v803 + 2688);
                if ( !*(_DWORD *)(v803 + 2328) )
                {
                  v894 = *(_QWORD *)(v803 + 1416);
LABEL_1326:
                  *(_QWORD *)(v894 + 24) = v737 ^ v893;
                }
                goto LABEL_1327;
              }
              i9 = 0;
              if ( (_DWORD)v1980 )
                v902 = (v1980 + 6) & 0xFFFFFFF8;
              else
                v902 = 0;
              v903 = *(unsigned int *)(v803 + 2052);
              v904 = v903 + v902 + 24 * (v835 + 2);
              if ( v904 <= *(_DWORD *)(v803 + 2660) )
              {
                v1975 = v803;
                *(_DWORD *)(v803 + 2052) = v904;
                goto LABEL_1362;
              }
              v1975 = sub_140BC6AF8(v803, v904, *(unsigned int *)(v803 + 2372));
              v803 = v1975;
              if ( v1975 )
              {
                v905 = *((_DWORD *)v843 + 630);
                if ( (v905 & 2) == 0 )
                {
                  v906 = *((_DWORD *)v843 + 513);
                  v907 = *((_QWORD *)v843 + 253);
                  v908 = (v905 & 0x10000000) != 0 ? *((_DWORD *)v843 + 593) : 0;
                  if ( v906 >= 8 )
                  {
                    v909 = (unsigned __int64)v906 >> 3;
                    do
                    {
                      *(_QWORD *)v843 = 0LL;
                      v906 -= 8;
                      v843 += 8;
                      --v909;
                    }
                    while ( v909 );
                  }
                  for ( ; v906; --v906 )
                    *v843++ = 0;
                  v910 = *(_DWORD *)(v803 + 2372);
                  *(_DWORD *)(v803 + 2372) = v908;
                  if ( v908 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v803 + 872))(v907);
                  }
                  else if ( (*(_DWORD *)(v803 + 2520) & 0x8000000) != 0 || !v908 )
                  {
                    (*(void (__fastcall **)(__int64))(v803 + 264))(v907);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v803 + 568))(v907 - 8, *(_QWORD *)(v907 - 8));
                  }
                  *(_DWORD *)(v803 + 2372) = v910;
                }
                *(_DWORD *)(v803 + 2520) &= ~2u;
                v879 = v1980;
                v835 = v1972;
LABEL_1362:
                v911 = v903 + v803;
                ++*(_DWORD *)(v803 + 2092);
                v2053 = v903 + v803;
                v912 = 48;
                v913 = (_QWORD *)(v903 + v803);
                v914 = 6LL;
                do
                {
                  *v913 = 0LL;
                  v912 -= 8;
                  ++v913;
                  --v914;
                }
                while ( v914 );
                for ( ; v912; --v912 )
                {
                  *(_BYTE *)v913 = 0;
                  v913 = (_QWORD *)((char *)v913 + 1);
                }
                v915 = v1984;
                *(_DWORD *)v911 = 30;
                *(_QWORD *)(v911 + 8) = v915;
                *(_DWORD *)(v911 + 16) = 0;
                v916 = *(_QWORD *)(v803 + 2104);
                for ( i18 = v916; ; LODWORD(v916) = i18 ^ v916 )
                {
                  i18 >>= 31;
                  if ( !i18 )
                    break;
                }
                v918 = v1991;
                *(_DWORD *)(v911 + 20) = v916 & 0x7FFFFFFF;
                v2018 = v2053;
                v1997 = (_BYTE *)v803;
                *(_QWORD *)(v2053 + 24) = v918;
                *(_DWORD *)(v2018 + 32) = *(_DWORD *)(v880 + 80);
                *(_DWORD *)(v2018 + 36) = v1979;
                *(_WORD *)(v2018 + 40) = v835;
                v1990 = (char *)(v2018 + 48);
                if ( v879 )
                  v919 = (_DWORD *)(v2018 + 48 + (((unsigned int)(v879 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
                else
                  v919 = (_DWORD *)(v2018 + 48);
                v920 = *(unsigned __int16 *)(v2018 + 40);
                v1988 = (unsigned __int64)v919;
                v921 = &v919[6 * v920];
                v1983 = (unsigned __int64)v921;
                v922 = v915 + 3;
                if ( !v879 )
                  v922 = v1992;
                v1980 = (unsigned __int64)v922;
                if ( v835 )
                {
                  v923 = v835;
                  v924 = v919 + 2;
                  do
                  {
                    v925 = 2LL;
                    do
                    {
                      *(v924 - 2) = 0;
                      *(v924 - 1) = 0;
                      *v924 = 0x80000000;
                      v924 += 3;
                      --v925;
                    }
                    while ( v925 );
                    --v923;
                  }
                  while ( v923 );
                  v19 = (unsigned __int64)v1978;
                }
                if ( v919 != v921 )
                {
                  while ( 2 )
                  {
                    v52 = (v845[9] & 0x2000000) == 0;
                    v926 = 0;
                    v1977 = 0;
                    if ( v52 )
                    {
                      v927 = *v845;
                      v928 = (__int16 *)(v845 + 1);
                      if ( *v845 != 1414090313 || *(_DWORD *)v928 != 1195525195 )
                      {
                        if ( v927 == 1162297680 )
                        {
                          v929 = *v928;
                          if ( *v928 == 30839 || v929 == 29303 || v929 == 30583 )
                            break;
LABEL_1391:
                          v930 = *(char **)(v803 + 2392);
                          v931 = 7;
                          v932 = *(char **)(v803 + 2400);
                          v933 = (char *)v845;
                          v934 = *(char **)(v803 + 2408);
                          v935 = *(char **)(v803 + 2384);
                          while ( 1 )
                          {
                            v936 = *v933++;
                            v937 = *v935++;
                            if ( v936 != v937 )
                              break;
                            if ( !--v931 )
                              goto LABEL_1409;
                          }
                          v938 = 8;
                          v939 = (char *)v845;
                          do
                          {
                            v940 = *(_QWORD *)v939;
                            v939 += 8;
                            v941 = *(_QWORD *)v930;
                            v930 += 8;
                            if ( v940 != v941 )
                              goto LABEL_1402;
                            v938 -= 8;
                          }
                          while ( v938 >= 8 );
                          if ( v938 )
                          {
                            while ( 1 )
                            {
                              v942 = *v939++;
                              v943 = *v930++;
                              if ( v942 != v943 )
                                break;
                              if ( !--v938 )
                                goto LABEL_1409;
                            }
LABEL_1402:
                            v944 = 4;
                            v945 = (char *)v845;
                            while ( 1 )
                            {
                              v946 = *v945++;
                              v947 = *v932++;
                              if ( v946 != v947 )
                                break;
                              if ( !--v944 )
                                goto LABEL_1409;
                            }
                            v948 = 6;
                            v949 = (char *)v845;
                            while ( 1 )
                            {
                              v950 = *v949++;
                              v951 = *v934++;
                              if ( v950 != v951 )
                                break;
                              if ( !--v948 )
                                goto LABEL_1409;
                            }
                          }
                          else
                          {
LABEL_1409:
                            v926 = 1;
                            v1977 = 1;
                          }
                          v915 = v1984;
                          v919 = (_DWORD *)v1988;
LABEL_1411:
                          v952 = v845[9];
                          if ( v952 < 0 )
                          {
                            v926 = 1;
                            v1977 = 1;
                            goto LABEL_1414;
                          }
                          if ( v926 )
                          {
LABEL_1414:
                            if ( *v845 == 1414090313 && v845[1] == 1195525195 )
                            {
                              if ( (*(_DWORD *)(v803 + 2524) & 0x2000) != 0 )
                                v926 = 0;
                              v1977 = v926;
                            }
                          }
                          v953 = v1991;
                          if ( (*(_DWORD *)(v803 + 2524) & 0x4000) != 0
                            && (v952 & 0x20000000) != 0
                            && (v1991 == *(_QWORD *)(v803 + 1504) || v1991 == *(_QWORD *)(v803 + 1512)) )
                          {
                            v926 = 1;
                            v1977 = 1;
                          }
                          v954 = v845[4];
                          v955 = (unsigned int)v845[3];
                          v956 = v1992;
                          if ( v954 <= v845[2] )
                            v954 = v845[2];
                          v957 = v955 + v954;
                          v1981 = v845[3];
                          v1982 = v957;
                          if ( v915 == v1992 )
                          {
                            v961 = 0;
                            v962 = (_DWORD)v955 != 0;
                            v959 = v955;
LABEL_1454:
                            if ( v962 )
                              goto LABEL_1508;
LABEL_1457:
                            v963 = 0;
                            goto LABEL_1458;
                          }
                          v958 = *v915;
                          v959 = v955;
                          v960 = v915[1];
                          v961 = v960;
                          v962 = *v915 < (unsigned int)v955;
                          if ( *v915 <= (unsigned int)v955 )
                            goto LABEL_1454;
                          v963 = 0;
                          if ( v960 > v957 )
                            goto LABEL_1458;
                          if ( v926 )
                          {
LABEL_1460:
                            v982 = (unsigned int *)v1980;
                            if ( (unsigned int *)v1980 != v956 )
                            {
                              v983 = *(_DWORD *)(v1980 + 4);
                              while ( v983 <= v957 )
                              {
                                if ( v982 == v956 )
                                  break;
                                if ( v926 )
                                {
                                  v984 = 0x80;
                                }
                                else
                                {
                                  v985 = v915[1];
                                  v959 = *v982;
                                  if ( *v982 < (unsigned int)v985 )
                                  {
                                    v986 = *(_DWORD *)(v803 + 2520);
                                    if ( (v986 & 0x100000) == 0 )
                                    {
                                      v2022[7] = -402653175;
                                      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v1991, 6uLL, 0LL);
                                    }
                                    if ( !*(_DWORD *)(v803 + 2328) )
                                    {
                                      v987 = v1991;
                                      *(_QWORD *)(v803 + 2336) = v803 - 0x5C5FC0A76E374B18LL;
                                      *(_QWORD *)(v803 + 2344) = 0LL;
                                      *(_QWORD *)(v803 + 2352) = 271LL;
                                      *(_QWORD *)(v803 + 2360) = v987;
                                      *(_DWORD *)(v803 + 2328) = 1;
                                      if ( (v986 & 0x20000000) == 0
                                        && (*(_DWORD *)(v803 + 2524) & 0x200000) != 0
                                        && (v986 & 1) != 0 )
                                      {
                                        v988 = *(unsigned int *)(v803 + 2676);
                                        v989 = *(_QWORD *)(v803 + 2104);
                                        v990 = *(_QWORD *)(v803 + 2680);
                                        v991 = (_QWORD *)(v988 + v803);
                                        v992 = v988
                                             + v803
                                             + 8
                                             * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v803 + 2052) - v988) >> 3);
                                        while ( v991 != (_QWORD *)v992 )
                                        {
                                          *v991 ^= v990;
                                          v990 = ((v989 ^ *v991++) + __ROR8__(v990, v990 & 0x3F)) ^ 0xEFA;
                                        }
                                        *(_DWORD *)(v803 + 2524) &= ~0x200000u;
                                        if ( v990 != *(_QWORD *)(v803 + 2688) )
                                        {
                                          v993 = *(_QWORD *)(v803 + 1416);
                                          v994 = *(_DWORD *)(v803 + 2052);
                                          *(_QWORD *)v993 = v803;
                                          *(_DWORD *)(v993 + 16) = v994;
                                          if ( !*(_DWORD *)(v803 + 2328) )
                                            *(_QWORD *)(*(_QWORD *)(v803 + 1416) + 24LL) = v990 ^ *(_QWORD *)(v803 + 2688);
                                          sub_140BC7384(v803, 0LL, v990, 256LL);
                                        }
                                        v963 = 0;
                                      }
                                    }
                                  }
                                  v995 = v2028;
                                  v996 = v959 - v985;
                                  v997 = v2058;
                                  v998 = v1991 + v985;
                                  do
                                  {
                                    if ( v998 < *v997 + (unsigned __int64)*v995
                                      && v1991 + v985 + v959 - (unsigned int)v985 > *v997 )
                                    {
                                      goto LABEL_1503;
                                    }
                                    ++v963;
                                    ++v995;
                                    ++v997;
                                  }
                                  while ( v963 < 6 );
                                  if ( v996 < 4 )
                                  {
LABEL_1503:
                                    v963 = 0;
                                    v984 = 0x80;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(v803 + 2120) += v996;
                                    v999 = (_QWORD *)v998;
                                    v1000 = *(_DWORD *)(v803 + 2100);
                                    v1001 = (const char *)v998;
                                    v1002 = *(_QWORD *)(v803 + 2104);
                                    v1003 = v998 + v996;
                                    if ( v998 < v1003 )
                                    {
                                      do
                                      {
                                        _mm_prefetch(v1001, 0);
                                        v1001 += 64;
                                      }
                                      while ( (unsigned __int64)v1001 < v1003 );
                                    }
                                    v1004 = *(_QWORD *)(v803 + 2104);
                                    v1005 = v996 >> 7;
                                    if ( v996 >> 7 )
                                    {
                                      do
                                      {
                                        v1006 = 8LL;
                                        do
                                        {
                                          v1007 = v999[1] ^ __ROL8__(*v999 ^ v1004, v1000);
                                          v999 += 2;
                                          v1004 = __ROL8__(v1007, v1000);
                                          --v1006;
                                        }
                                        while ( v1006 );
                                        v1008 = (__ROL8__(v1002 ^ ((unsigned __int64)v999 - v998), 17) ^ v1002 ^ ((unsigned __int64)v999 - v998))
                                              * (unsigned __int128)0x7010008004002001uLL;
                                        v2081 = *((_QWORD *)&v1008 + 1);
                                        v1000 = ((unsigned __int8)(v1008 ^ BYTE8(v1008)) ^ (unsigned __int8)v1000) & 0x3F;
                                        if ( !v1000 )
                                          LOBYTE(v1000) = 1;
                                        --v1005;
                                      }
                                      while ( v1005 );
                                      v19 = (unsigned __int64)v1978;
                                      v803 = v1975;
                                    }
                                    v1009 = v996 & 0x7F;
                                    if ( v1009 >= 8 )
                                    {
                                      v1010 = (unsigned __int64)v1009 >> 3;
                                      do
                                      {
                                        v1004 = __ROL8__(*v999++ ^ v1004, v1000);
                                        v1009 -= 8;
                                        --v1010;
                                      }
                                      while ( v1010 );
                                    }
                                    v963 = 0;
                                    if ( v1009 )
                                    {
                                      do
                                      {
                                        v1011 = *(unsigned __int8 *)v999;
                                        v999 = (_QWORD *)((char *)v999 + 1);
                                        v1004 = __ROL8__(v1011 ^ v1004, v1000);
                                        --v1009;
                                      }
                                      while ( v1009 );
                                      v19 = (unsigned __int64)v1978;
                                    }
                                    for ( i19 = v1004; ; LOBYTE(v1004) = i19 ^ v1004 )
                                    {
                                      i19 >>= 7;
                                      if ( !i19 )
                                        break;
                                    }
                                    v926 = v1977;
                                    v984 = v1004 & 0x7F;
                                  }
                                  v915 = v1984;
                                  v957 = v1982;
                                }
                                v915 += 3;
                                v1984 = v915;
                                *v1990++ = v984;
                                v982 = (unsigned int *)(v1980 + 12);
                                v956 = v1992;
                                v1980 = (unsigned __int64)v982;
                                if ( v982 != v1992 )
                                  v983 = v982[1];
                              }
                            }
                            goto LABEL_1508;
                          }
                          *v919 = v955;
                          v964 = v953 + v955;
                          v919[1] = v958;
                          v965 = v2028;
                          LODWORD(v1979) = v960;
                          v966 = v958 - *v919;
                          v967 = v2058;
                          v959 = v958;
                          do
                          {
                            if ( v964 < *v967 + (unsigned __int64)*v965 && v964 + v966 > *v967 )
                            {
                              v956 = v1992;
                              v915 = v1984;
                              goto LABEL_1457;
                            }
                            ++v963;
                            ++v967;
                            ++v965;
                          }
                          while ( v963 < 6 );
                          *(_DWORD *)(v803 + 2120) += v966;
                          v968 = (_QWORD *)v964;
                          v969 = *(_DWORD *)(v803 + 2100);
                          v970 = (const char *)v964;
                          v971 = *(_QWORD *)(v803 + 2104);
                          v972 = v964 + v966;
                          if ( v964 < v972 )
                          {
                            do
                            {
                              _mm_prefetch(v970, 0);
                              v970 += 64;
                            }
                            while ( (unsigned __int64)v970 < v972 );
                          }
                          v973 = *(_QWORD *)(v803 + 2104);
                          v974 = v966 >> 7;
                          if ( v966 >> 7 )
                          {
                            do
                            {
                              v975 = 8LL;
                              do
                              {
                                v976 = v968[1] ^ __ROL8__(*v968 ^ v973, v969);
                                v968 += 2;
                                v973 = __ROL8__(v976, v969);
                                --v975;
                              }
                              while ( v975 );
                              v977 = (__ROL8__(v971 ^ ((unsigned __int64)v968 - v964), 17) ^ v971 ^ ((unsigned __int64)v968 - v964))
                                   * (unsigned __int128)0x7010008004002001uLL;
                              v2080 = *((_QWORD *)&v977 + 1);
                              v969 = ((unsigned __int8)v977 ^ (unsigned __int8)(BYTE8(v977) ^ v969)) & 0x3F;
                              if ( !v969 )
                                LOBYTE(v969) = 1;
                              --v974;
                            }
                            while ( v974 );
                            v19 = (unsigned __int64)v1978;
                            v803 = v1975;
                            v961 = v1979;
                          }
                          v978 = v966 & 0x7F;
                          if ( v978 >= 8 )
                          {
                            v979 = (unsigned __int64)v978 >> 3;
                            do
                            {
                              v973 = __ROL8__(*v968++ ^ v973, v969);
                              v978 -= 8;
                              --v979;
                            }
                            while ( v979 );
                          }
                          if ( v978 )
                          {
                            do
                            {
                              v980 = *(unsigned __int8 *)v968;
                              v968 = (_QWORD *)((char *)v968 + 1);
                              v973 = __ROL8__(v980 ^ v973, v969);
                              --v978;
                            }
                            while ( v978 );
                            v19 = (unsigned __int64)v1978;
                          }
                          v981 = v973 >> 31;
                          v963 = 0;
                          while ( v981 )
                          {
                            LODWORD(v973) = v981 ^ v973;
                            v981 >>= 31;
                          }
                          v957 = v1982;
                          v926 = v1977;
                          v915 = v1984;
                          *(_DWORD *)(v1988 + 8) = v973 & 0x7FFFFFFF;
                          v956 = v1992;
LABEL_1458:
                          if ( v961 <= v957 && v915 != v956 )
                            goto LABEL_1460;
LABEL_1508:
                          if ( v926 || v959 == v957 )
                          {
                            i9 = 0;
                            goto LABEL_1534;
                          }
                          v1013 = v1988;
                          v1014 = v2028;
                          v1015 = v2058;
                          *(_DWORD *)(v1988 + 12) = v959;
                          *(_DWORD *)(v1013 + 16) = v957;
                          v1016 = *(_DWORD *)(v1013 + 12);
                          v1017 = v957 - v1016;
                          v1018 = v1991 + v1016;
                          i9 = 0;
                          v1019 = 0;
                          while ( 2 )
                          {
                            if ( v1018 < *v1015 + (unsigned __int64)*v1014 && v1018 + v957 - v1016 > *v1015 )
                            {
                              v915 = v1984;
LABEL_1534:
                              v1034 = v1988;
                              goto LABEL_1535;
                            }
                            ++v1019;
                            ++v1015;
                            ++v1014;
                            if ( v1019 < 6 )
                              continue;
                            break;
                          }
                          *(_DWORD *)(v803 + 2120) += v1017;
                          v1020 = (_QWORD *)v1018;
                          v1021 = *(_DWORD *)(v803 + 2100);
                          v1022 = (const char *)v1018;
                          v1023 = *(_QWORD *)(v803 + 2104);
                          v1024 = v1018 + v1017;
                          if ( v1018 < v1024 )
                          {
                            do
                            {
                              _mm_prefetch(v1022, 0);
                              v1022 += 64;
                            }
                            while ( (unsigned __int64)v1022 < v1024 );
                          }
                          v1025 = *(_QWORD *)(v803 + 2104);
                          v1026 = v1017 >> 7;
                          if ( v1017 >> 7 )
                          {
                            do
                            {
                              v1027 = 8LL;
                              do
                              {
                                v1028 = v1020[1] ^ __ROL8__(*v1020 ^ v1025, v1021);
                                v1020 += 2;
                                v1025 = __ROL8__(v1028, v1021);
                                --v1027;
                              }
                              while ( v1027 );
                              v1029 = (__ROL8__(v1023 ^ ((unsigned __int64)v1020 - v1018), 17) ^ v1023 ^ ((unsigned __int64)v1020 - v1018))
                                    * (unsigned __int128)0x7010008004002001uLL;
                              v2082 = *((_QWORD *)&v1029 + 1);
                              v1021 = ((unsigned __int8)(v1029 ^ BYTE8(v1029)) ^ (unsigned __int8)v1021) & 0x3F;
                              if ( !v1021 )
                                LOBYTE(v1021) = 1;
                              --v1026;
                            }
                            while ( v1026 );
                            v19 = (unsigned __int64)v1978;
                          }
                          v1030 = v1017 & 0x7F;
                          if ( v1030 >= 8 )
                          {
                            v1031 = (unsigned __int64)v1030 >> 3;
                            do
                            {
                              v1025 = __ROL8__(*v1020++ ^ v1025, v1021);
                              v1030 -= 8;
                              --v1031;
                            }
                            while ( v1031 );
                          }
                          for ( ; v1030; --v1030 )
                          {
                            v1032 = *(unsigned __int8 *)v1020;
                            v1020 = (_QWORD *)((char *)v1020 + 1);
                            v1025 = __ROL8__(v1032 ^ v1025, v1021);
                          }
                          for ( i20 = v1025; ; LODWORD(v1025) = i20 ^ v1025 )
                          {
                            i20 >>= 31;
                            if ( !i20 )
                              break;
                          }
                          v1034 = v1988;
                          v957 = v1982;
                          v915 = v1984;
                          *(_DWORD *)(v1988 + 20) = v1025 & 0x7FFFFFFF;
LABEL_1535:
                          if ( v915 != v1992 && *v915 >= v1981 && v915[1] <= v957 )
                          {
                            v1035 = v1980;
                            if ( (unsigned int *)v1980 != v1992 )
                            {
                              v1036 = v1990;
                              *v1990 = 0x80;
                              v1990 = v1036 + 1;
                              v1980 = v1035 + 12;
                            }
                            v915 += 3;
                            v1984 = v915;
                          }
                          v919 = (_DWORD *)(v1034 + 24);
                          v845 = (_DWORD *)(v1976 + 40);
                          v1988 = (unsigned __int64)v919;
                          v1976 += 40LL;
                          if ( v919 == (_DWORD *)v1983 )
                          {
                            v803 = (__int64)v1997;
                            goto LABEL_1543;
                          }
                          continue;
                        }
                        if ( v927 != 1095914053 || *v928 != 16724 )
                          goto LABEL_1391;
                      }
                    }
                    break;
                  }
                  v926 = 1;
                  v1977 = 1;
                  goto LABEL_1411;
                }
LABEL_1543:
                v1998 = (char *)v803;
                v702 = 0;
LABEL_1544:
                v685 = v1993;
LABEL_1545:
                v1037 = &v1998[-v19];
                v19 = (unsigned __int64)v1998;
                v31 = (unsigned __int64)&v1973[(_QWORD)v1037];
                v1978 = v1998;
                v1973 = &v1973[(_QWORD)v1037];
                if ( (int)(v702 + 0x80000000) < 0 || v702 == -1073741554 )
                  *(_QWORD *)(v31 + 40) = v685;
                v646 = v1974;
LABEL_1621:
                v37 = 1;
                *(_DWORD *)(v19 + 2120) += v646 << 12;
                v1087 = *(_DWORD *)(v19 + 2120);
                ++*(_DWORD *)(v19 + 2116);
                if ( v1087 < *(_DWORD *)(v19 + 2124) )
                {
                  v41 = v1973;
                  goto LABEL_970;
                }
LABEL_1624:
                v1978 = (char *)v19;
                goto LABEL_238;
              }
LABEL_1162:
              v702 = -1073741670;
              goto LABEL_1544;
            }
          }
        }
        if ( ++v706 >= *(_DWORD *)(v19 + 2092) )
          goto LABEL_1082;
      }
      v712 = v706 - v710;
      v710 = v706;
      while ( 1 )
      {
        if ( *v711 == 1 )
        {
LABEL_1071:
          v713 = 4 * (v711[4] / 0xCu) + 48;
          goto LABEL_1072;
        }
        if ( *v711 == 7 )
        {
          v713 = (unsigned int)(24 * (v711[6] + 2));
          goto LABEL_1072;
        }
        if ( *v711 == 8 )
          break;
        switch ( *v711 )
        {
          case 10:
            v713 = (unsigned int)(16 * (v711[7] + 3));
            break;
          case 28:
            v714 = *((unsigned __int16 *)v711 + 20);
LABEL_1069:
            v713 = (v714 + 55) & 0xFFFFFFF8;
            break;
          case 30:
            v713 = (((v711[9] != 0 ? v711[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                 + 24 * (*((unsigned __int16 *)v711 + 20) + 2);
            break;
          case 33:
            v713 = 20 * (unsigned int)(((v711[8] & 0xFFF) + (unsigned __int64)(unsigned int)v711[10] + 4095) >> 12) + 48;
            break;
          case 43:
            goto LABEL_1071;
          default:
            v713 = 48LL;
            break;
        }
LABEL_1072:
        v711 = (int *)((char *)v711 + v713);
        if ( !--v712 )
        {
          v19 = (unsigned __int64)v1978;
          v699 = v1991;
          v700 = (__int64)v1984;
          goto LABEL_1074;
        }
      }
      v714 = *((unsigned __int16 *)v711 + 16);
      goto LABEL_1069;
    }
    v1096 = *(unsigned int *)(v19 + 2116);
    v1097 = *((unsigned int *)v41 + 9);
    v1993 = *((_QWORD *)v41 + 1);
    v1098 = v1993 + 12 * v1096;
    v1099 = (_DWORD *)(v1098 + 12);
    v1975 = v1098;
    v1980 = v1098 + 12;
    v1100 = v1097 / 0xC;
    v1988 = v1097 / 0xC;
    v1983 = v1993 + 12LL * (unsigned int)(v1097 / 0xC);
    v1101 = &v41[v1096 + 48];
    v1976 = (__int64)v1101;
    v1102 = v1097 / 0xC - 1;
    if ( (unsigned int)(v1097 / 0xC) )
      v31 = (unsigned __int64)&v41[((v1102 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
    else
      v31 = (unsigned __int64)(v41 + 48);
    v1103 = *((unsigned __int16 *)v41 + 20);
    v1990 = (char *)v31;
    v1992 = (unsigned int *)(v31 + 24 * v1103);
    if ( (_DWORD)v1100 )
    {
      if ( (unsigned int)v1096 < v1102 )
      {
        while ( 1 )
        {
          if ( *v1101 < 0 )
            goto LABEL_1675;
          v1104 = *(unsigned int *)(v1098 + 4);
          v1105 = (int *)v1973;
          LODWORD(v1979) = *v1099 - v1104;
          v1106 = v1979;
          v1107 = *((_QWORD *)v1973 + 3) + v1104;
          *(_DWORD *)(v19 + 2120) += v1979;
          v1108 = v1107 + v1106;
          v1109 = *(_DWORD *)(v19 + 2100);
          v1110 = (_QWORD *)v1107;
          v1111 = *(_QWORD *)(v19 + 2104);
          v1112 = (const char *)v1107;
          if ( v1107 < v1108 )
          {
            do
            {
              _mm_prefetch(v1112, 0);
              v1112 += 64;
            }
            while ( (unsigned __int64)v1112 < v1108 );
          }
          v1113 = *(_QWORD *)(v19 + 2104);
          v1114 = v1106 >> 7;
          if ( v1106 >> 7 )
          {
            do
            {
              v1115 = 8LL;
              do
              {
                v1116 = v1110[1] ^ __ROL8__(*v1110 ^ v1113, v1109);
                v1110 += 2;
                v1113 = __ROL8__(v1116, v1109);
                --v1115;
              }
              while ( v1115 );
              v1117 = __ROL8__(v1111 ^ ((unsigned __int64)v1110 - v1107), 17) ^ v1111 ^ ((unsigned __int64)v1110 - v1107);
              v2086 = (v1117 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1109 = ((unsigned __int8)(v2086 ^ v1117) ^ (unsigned __int8)v1109) & 0x3F;
              if ( !v1109 )
                LOBYTE(v1109) = 1;
              --v1114;
            }
            while ( v1114 );
            v19 = (unsigned __int64)v1978;
            v1106 = v1979;
            v1101 = (char *)v1976;
          }
          v1118 = v1106 & 0x7F;
          if ( v1118 >= 8 )
          {
            v1119 = (unsigned __int64)(v1106 & 0x7F) >> 3;
            do
            {
              v1113 = __ROL8__(*v1110++ ^ v1113, v1109);
              v1118 -= 8;
              --v1119;
            }
            while ( v1119 );
          }
          if ( v1118 )
          {
            do
            {
              v1120 = *(unsigned __int8 *)v1110;
              v1110 = (_QWORD *)((char *)v1110 + 1);
              v1113 = __ROL8__(v1120 ^ v1113, v1109);
              --v1118;
            }
            while ( v1118 );
            v19 = (unsigned __int64)v1978;
          }
          for ( i21 = v1113; ; LOBYTE(v1113) = i21 ^ v1113 )
          {
            i21 >>= 7;
            if ( !i21 )
              break;
          }
          v1122 = v1113 & 0x7F;
          if ( v1122 == (*v1101 & 0x7F) )
          {
LABEL_1672:
            i9 = 0;
          }
          else
          {
            v1123 = v1106;
            if ( v1106 && (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
            {
              v1124 = KeGetCurrentIrql();
              v1125 = v1107 & 0xFFFFFFFFFFFFF000uLL;
              v1126 = (v1123 + v1107 - 1) | 0xFFF;
              v1127 = (v1107 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1665:
              __writecr8(2uLL);
              while ( 1 )
              {
                v1128 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD *))(v19 + 1128))(
                          v1125,
                          0LL,
                          v1113,
                          v1110);
                if ( v1128 == -1073741267 )
                {
                  if ( v1124 <= 1u )
                  {
                    __writecr8(v1124);
                    goto LABEL_1665;
                  }
                }
                else if ( v1128 < 0 )
                {
                  __writecr8(v1124);
                  v1101 = (char *)v1976;
                  v1105 = (int *)v1973;
                  break;
                }
                v1125 += 4096LL;
                v1127 += 4096LL;
                if ( v1127 == v1126 )
                {
                  __writecr8(v1124);
                  v1101 = (char *)v1976;
                  goto LABEL_1672;
                }
              }
            }
            if ( !*(_DWORD *)(v19 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = *v1101 & 0x7F ^ (unsigned __int64)v1122;
            i9 = 0;
            if ( !*(_DWORD *)(v19 + 2328) )
            {
              *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v19 + 2344) = (char *)v1105 - 0x4C48B4211BBACBEBLL;
              v1131 = *v1105;
              v37 = 1;
              *(_QWORD *)(v19 + 2352) = v1131;
              *(_QWORD *)(v19 + 2360) = v1107;
              *(_DWORD *)(v19 + 2328) = 1;
              v1132 = *(_DWORD *)(v19 + 2520);
              if ( (v1132 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1132 & 1) != 0 )
              {
                v1133 = *(unsigned int *)(v19 + 2676);
                v1134 = *(_QWORD *)(v19 + 2104);
                v1135 = *(_QWORD *)(v19 + 2680);
                v1136 = (_QWORD *)(v1133 + v19);
                v1137 = v1133 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1133) >> 3);
                while ( v1136 != (_QWORD *)v1137 )
                {
                  *v1136 ^= v1135;
                  v1135 = ((v1134 ^ *v1136++) + __ROR8__(v1135, v1135 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v19 + 2524) &= ~0x200000u;
                if ( v1135 != *(_QWORD *)(v19 + 2688) )
                {
                  v1138 = *(_DWORD *)(v19 + 2052);
                  v1139 = *(_QWORD *)(v19 + 1416);
                  *(_QWORD *)v1139 = v19;
                  *(_DWORD *)(v1139 + 16) = v1138;
                  if ( !*(_DWORD *)(v19 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1135 ^ *(_QWORD *)(v19 + 2688);
                  sub_140BC7384(v19, 0LL, v1135, 256LL);
                }
              }
              goto LABEL_1674;
            }
          }
          v37 = 1;
LABEL_1674:
          v1098 = v1975;
          *(_DWORD *)(v19 + 2120) += 64;
          v1099 = (_DWORD *)v1980;
LABEL_1675:
          ++v1101;
          v1098 += 12LL;
          v1976 = (__int64)v1101;
          v1099 += 3;
          v1975 = v1098;
          v1980 = (unsigned __int64)v1099;
          if ( (unsigned __int64)v1099 >= v1983 || *(_DWORD *)(v19 + 2120) >= *(_DWORD *)(v19 + 2124) )
          {
            v1129 = v1098 - v1993;
            LODWORD(v1100) = v1988;
            *(_DWORD *)(v19 + 2116) = v1129 / 12;
            LODWORD(v1096) = v1129 / 12;
            v31 = (unsigned __int64)v1990;
            break;
          }
        }
      }
      if ( (unsigned int)v1096 < (int)v1100 - 1 )
        goto LABEL_238;
    }
    if ( *(_DWORD *)(v19 + 2120) >= *(_DWORD *)(v19 + 2124) )
      goto LABEL_238;
    if ( (_DWORD)v1100 )
      v1130 = 3LL * (unsigned int)(v1096 - v1100 + 1);
    else
      v1130 = 3LL * (unsigned int)v1096;
    v1140 = v31 + 8 * v1130;
    v1975 = v1140;
    do
    {
      v1141 = (int *)(v1140 + 8);
      v1142 = 2LL;
      v1980 = 2LL;
      v1976 = v1140 + 8;
      do
      {
        if ( *v1141 >= 0 )
        {
          v1143 = (unsigned int)*(v1141 - 2);
          v1144 = (int *)v1973;
          v1145 = *(v1141 - 1) - v1143;
          v1146 = *((_QWORD *)v1973 + 3) + v1143;
          *(_DWORD *)(v19 + 2120) += v1145;
          v1147 = v1146 + v1145;
          v1148 = *(_DWORD *)(v19 + 2100);
          v1149 = (_QWORD *)v1146;
          v1150 = *(_QWORD *)(v19 + 2104);
          v1151 = (const char *)v1146;
          if ( v1146 < v1147 )
          {
            do
            {
              _mm_prefetch(v1151, 0);
              v1151 += 64;
            }
            while ( (unsigned __int64)v1151 < v1147 );
          }
          v1152 = *(_QWORD *)(v19 + 2104);
          v1153 = v1145 >> 7;
          if ( v1145 >> 7 )
          {
            do
            {
              v1154 = 8LL;
              do
              {
                v1155 = v1149[1] ^ __ROL8__(*v1149 ^ v1152, v1148);
                v1149 += 2;
                v1152 = __ROL8__(v1155, v1148);
                --v1154;
              }
              while ( v1154 );
              v1156 = __ROL8__(v1150 ^ ((unsigned __int64)v1149 - v1146), 17) ^ v1150 ^ ((unsigned __int64)v1149 - v1146);
              v2087 = (v1156 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1148 = ((unsigned __int8)(v2087 ^ v1156) ^ (unsigned __int8)v1148) & 0x3F;
              if ( !v1148 )
                LOBYTE(v1148) = 1;
              --v1153;
            }
            while ( v1153 );
            v19 = (unsigned __int64)v1978;
            v1141 = (int *)v1976;
            v1142 = v1980;
          }
          v31 = v1145 & 0x7F;
          if ( (unsigned int)v31 >= 8 )
          {
            v1157 = (unsigned __int64)(v1145 & 0x7F) >> 3;
            do
            {
              v1152 = __ROL8__(*v1149++ ^ v1152, v1148);
              v31 = (unsigned int)(v31 - 8);
              --v1157;
            }
            while ( v1157 );
          }
          v1158 = 0LL;
          if ( (_DWORD)v31 )
          {
            do
            {
              v1159 = *(unsigned __int8 *)v1149;
              v1149 = (_QWORD *)((char *)v1149 + 1);
              v1152 = __ROL8__(v1159 ^ v1152, v1148);
              v31 = (unsigned int)(v31 - 1);
            }
            while ( (_DWORD)v31 );
            v1141 = (int *)v1976;
          }
          for ( i22 = v1152; ; LODWORD(v1152) = i22 ^ v1152 )
          {
            i22 >>= 31;
            if ( !i22 )
              break;
          }
          v1161 = v1152 & 0x7FFFFFFF;
          if ( v1161 == (*v1141 & 0x7FFFFFFF) )
            goto LABEL_1729;
          v1162 = v1145;
          if ( v1145 )
          {
            v31 = 64LL;
            if ( (*(_DWORD *)(v19 + 2524) & 0x40) != 0 )
            {
              v1163 = KeGetCurrentIrql();
              v1164 = v1146 & 0xFFFFFFFFFFFFF000uLL;
              v1165 = (v1162 + v1146 - 1) | 0xFFF;
              v1166 = (v1146 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1722:
              __writecr8(2uLL);
              while ( 1 )
              {
                v1167 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v19 + 1128))(
                          v1164,
                          0LL,
                          v1149,
                          v1158);
                if ( v1167 == -1073741267 )
                {
                  if ( v1163 <= 1u )
                  {
                    __writecr8(v1163);
                    goto LABEL_1722;
                  }
                }
                else
                {
                  v1158 = 0LL;
                  if ( v1167 < 0 )
                  {
                    __writecr8(v1163);
                    v1141 = (int *)v1976;
                    v1142 = v1980;
                    v1144 = (int *)v1973;
                    break;
                  }
                }
                v1164 += 4096LL;
                v1166 += 4096LL;
                if ( v1166 == v1165 )
                {
                  __writecr8(v1163);
                  v1141 = (int *)v1976;
                  v1142 = v1980;
                  goto LABEL_1729;
                }
              }
            }
          }
          v1169 = (unsigned int)*v1141;
          LODWORD(v1169) = v1169 & 0x7FFFFFFF;
          if ( *(_DWORD *)(v19 + 2328)
            || (*(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1169 ^ v1161, *(_DWORD *)(v19 + 2328)) )
          {
LABEL_1729:
            i9 = 0;
          }
          else
          {
            *(_QWORD *)(v19 + 2336) = v19 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v19 + 2344) = (char *)v1144 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v19 + 2352) = *v1144;
            *(_QWORD *)(v19 + 2360) = v1146;
            *(_DWORD *)(v19 + 2328) = 1;
            v1170 = *(_DWORD *)(v19 + 2520);
            if ( (v1170 & 0x20000000) == 0 && (*(_DWORD *)(v19 + 2524) & 0x200000) != 0 && (v1170 & 1) != 0 )
            {
              v1171 = *(unsigned int *)(v19 + 2676);
              v1172 = *(_QWORD *)(v19 + 2104);
              v1173 = *(_QWORD *)(v19 + 2680);
              v31 = v1171 + v19;
              v1174 = v1171 + v19 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v19 + 2052) - v1171) >> 3);
              while ( v31 != v1174 )
              {
                *(_QWORD *)v31 ^= v1173;
                v1173 = ((v1172 ^ *(_QWORD *)v31) + __ROR8__(v1173, v1173 & 0x3F)) ^ 0xEFA;
                v31 += 8LL;
              }
              *(_DWORD *)(v19 + 2524) &= ~0x200000u;
              i9 = 0;
              if ( v1173 != *(_QWORD *)(v19 + 2688) )
              {
                v1175 = *(_DWORD *)(v19 + 2052);
                v1176 = *(_QWORD *)(v19 + 1416);
                *(_QWORD *)v1176 = v19;
                *(_DWORD *)(v1176 + 16) = v1175;
                if ( !*(_DWORD *)(v19 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v19 + 1416) + 24LL) = v1173 ^ *(_QWORD *)(v19 + 2688);
                sub_140BC7384(v19, 0LL, v1173, 256LL);
              }
            }
            else
            {
              i9 = 0;
            }
          }
        }
        v1141 += 3;
        --v1142;
        v1976 = (__int64)v1141;
        v1980 = v1142;
      }
      while ( v1142 );
      v1168 = v1975;
      v37 = 1;
      ++*(_DWORD *)(v19 + 2116);
      v1140 = v1168 + 24;
      v1975 = v1140;
      if ( (unsigned int *)v1140 == v1992 )
      {
        *(_DWORD *)(v19 + 2116) = 0;
        break;
      }
    }
    while ( *(_DWORD *)(v19 + 2120) < *(_DWORD *)(v19 + 2124) );
LABEL_238:
    v118 = v2003;
    if ( *(_DWORD *)(v19 + 2116) )
      v118 = v2003 - 1;
    v35 = v118 + 1;
    if ( *(_DWORD *)(v19 + 2328) || *(_DWORD *)(v19 + 2120) >= *(_DWORD *)(v19 + 2124) )
      goto LABEL_2897;
    v34 = -1;
  }
  ++*(_DWORD *)(v19 + 2128);
  v35 = 0;
LABEL_2897:
  v16 = v2005;
  v17 = 0LL;
  v2 = a2;
  v15 = v2000;
LABEL_2898:
  *(_DWORD *)(v19 + 2112) = v35;
  if ( v1995 )
  {
    v1902 = *(_QWORD *)(*(_QWORD *)(v19 + 1720)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v19 + 1624))
                      + *(_QWORD *)(v19 + 1688));
    (*(void (__fastcall **)(_BYTE *))(v19 + 424))(v2126);
    (*(void (__fastcall **)(_BYTE *))(v19 + 1088))(v2145);
    (*(void (__fastcall **)(__int64))(v19 + 936))(v1902);
    (*(void (__fastcall **)(__int64))(v19 + 952))(v1902);
    v17 = 0LL;
  }
  if ( *((_DWORD *)v16 + 582) )
  {
    v1903 = *((_QWORD *)v16 + 294);
    v1904 = *((_QWORD *)v16 + 295);
    v1905 = (char *)*((_QWORD *)v16 + 293);
    v1906 = *((_QWORD *)v16 + 292);
    v1976 = v1903;
    v1980 = v1904;
    v1990 = v1905;
    v1988 = v1906;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1907 = KeGetCurrentPrcb();
    v1908 = *(char **)((char *)&v1907->MxCsr + *((_QWORD *)v16 + 200));
    v1909 = *((_QWORD *)v16 + 201);
    v2000 = v1908;
    v1910 = *((_QWORD *)v16 + 241) + *(_QWORD *)((char *)&v1907->MxCsr + v1909);
    v1911 = *(_QWORD *)((char *)&v1907->MxCsr + *((_QWORD *)v16 + 203));
    v2001 = v1911;
    if ( &v2020 > v1908 || &v2020 < &v1908[-*((unsigned int *)v16 + 383)] )
    {
      if ( *((_BYTE *)&v1907->MxCsr + *((_QWORD *)v16 + 202))
        && (unsigned __int64)&v2020 <= v1910
        && (unsigned __int64)&v2020 >= v1910 - *((unsigned int *)v16 + 382) )
      {
        v1908 = (char *)v1910;
        v2000 = (char *)v1910;
      }
      else
      {
        v1908 = *(char **)(v1911 + *((_QWORD *)v16 + 209));
        v2000 = v1908;
      }
    }
    if ( (*((_DWORD *)v16 + 630) & 0x4000000) == 0 )
    {
      v1993 = 0LL;
      if ( (*((_DWORD *)v16 + 631) & 0x400000) == 0 )
      {
        v1912 = __readcr0();
        v1993 = v1912;
        __writecr0(v1912 & 0xFFFFFFFFFFFEFFFFuLL);
      }
      v1913 = (unsigned __int64)(v16 + 2800);
      v1910 = 0LL;
      v1914 = (unsigned __int64)&v16[16 * *((unsigned int *)v16 + 698) + 2800];
      v2011 = v16 + 2800;
      v1915 = (_QWORD *)v1914;
      v2019 = v1914;
      if ( *((_DWORD *)v16 + 699) )
      {
        do
        {
          *(_QWORD *)*v1915 = v1915[1];
          v1916 = __readcr4();
          if ( (v1916 & 0x20080) != 0 )
          {
            __writecr4(v1916 ^ 0x80);
            __writecr4(v1916);
          }
          else
          {
            v1917 = __readcr3();
            __writecr3(v1917);
          }
          v1915 += 2;
          v1910 = (unsigned int)(v1910 + 1);
        }
        while ( (unsigned int)v1910 < *((_DWORD *)v16 + 699) );
        LODWORD(v1905) = (_DWORD)v1990;
      }
      if ( v1913 < v1914 )
      {
        do
        {
          v1918 = *(unsigned int *)(v1913 + 8);
          v1919 = *(_QWORD *)v1913;
          v2003 = *(_DWORD *)(v1913 + 8);
          if ( (*((_DWORD *)v16 + 631) & 0x400000) != 0 )
          {
            v1975 = (__int64)v1915;
            v1922 = v1918;
            v1910 = ((v1919 & 0xFFF) + v1918 + 4095) >> 12;
            if ( (_DWORD)v1910 )
            {
              v1923 = v2005;
              v2010 = (unsigned int)v1910;
              do
              {
                v1924 = *((_QWORD *)v1923 + 187);
                v1925 = v2137;
                v1926 = 4LL;
                LODWORD(v1927) = 4;
                v1928 = v1924 + ((v1919 >> 9) & 0x7FFFFFFFF8LL);
                do
                {
                  *v1925++ = v1928;
                  v1928 = v1924 + ((v1928 >> 9) & 0x7FFFFFFFF8LL);
                  --v1926;
                }
                while ( v1926 );
                do
                {
                  v52 = (_DWORD)v1927 == 1;
                  v1927 = (unsigned int)(v1927 - 1);
                }
                while ( !v52 && (*(_DWORD *)v2137[v1927] & 0x80) == 0 );
                v1929 = (_QWORD *)v2137[v1927];
                v1983 = (unsigned __int64)v1929;
                v1930 = *v1929 | 0x62LL;
                *v1929 = v1930;
                v1931 = __readcr4();
                if ( (v1931 & 0x20080) != 0 )
                {
                  __writecr4(v1931 ^ 0x80);
                  __writecr4(v1931);
                }
                else
                {
                  v1932 = __readcr3();
                  __writecr3(v1932);
                }
                v1933 = v1922;
                v1934 = (_QWORD *)v1919;
                if ( 4096 - (v1919 & 0xFFF) < v1922 )
                  v1933 = 4096 - (v1919 & 0xFFF);
                v1910 = v1975;
                v1935 = v1933;
                if ( v1933 >= 8 )
                {
                  v1936 = (unsigned __int64)v1933 >> 3;
                  do
                  {
                    v1935 -= 8;
                    *v1934 = *(_QWORD *)v1910;
                    v1910 += 8LL;
                    ++v1934;
                    --v1936;
                  }
                  while ( v1936 );
                  v1929 = (_QWORD *)v1983;
                }
                if ( v1935 )
                {
                  v1937 = (char *)v1934 - v1910;
                  do
                  {
                    v1937[v1910] = *(_BYTE *)v1910;
                    ++v1910;
                    --v1935;
                  }
                  while ( v1935 );
                  v1923 = v2005;
                }
                v1975 += v1933;
                v1919 += v1933;
                v1922 -= v1933;
                *v1929 = v1930;
                v1938 = __readcr4();
                if ( (v1938 & 0x20080) != 0 )
                {
                  __writecr4(v1938 ^ 0x80);
                  __writecr4(v1938);
                }
                else
                {
                  v1939 = __readcr3();
                  __writecr3(v1939);
                }
                --v2010;
              }
              while ( v2010 );
              v1913 = (unsigned __int64)v2011;
              v17 = 0LL;
              v1914 = v2019;
              LODWORD(v1918) = v2003;
              v16 = v2005;
            }
          }
          else
          {
            v1910 = (unsigned int)v1918;
            v1920 = v1915;
            if ( (unsigned int)v1918 >= 8 )
            {
              v17 = (unsigned __int64)(unsigned int)v1918 >> 3;
              do
              {
                v1910 = (unsigned int)(v1910 - 8);
                *(_QWORD *)v1919 = *v1920++;
                v1919 += 8LL;
                --v17;
              }
              while ( v17 );
            }
            if ( (_DWORD)v1910 )
            {
              v1921 = v1919 - (_QWORD)v1920;
              do
              {
                *((_BYTE *)v1920 + v1921) = *(_BYTE *)v1920;
                v1920 = (_QWORD *)((char *)v1920 + 1);
                v1910 = (unsigned int)(v1910 - 1);
              }
              while ( (_DWORD)v1910 );
            }
          }
          v1913 += 16LL;
          v1915 = (_QWORD *)((char *)v1915 + (unsigned int)v1918);
          v2011 = (char *)v1913;
        }
        while ( v1913 < v1914 );
        v1908 = v2000;
        LODWORD(v1905) = (_DWORD)v1990;
        LODWORD(v1906) = v1988;
      }
      if ( (*((_DWORD *)v16 + 631) & 0x400000) != 0 )
      {
        v2148 = -61;
        v1940 = &v2148;
        v1941 = *((_QWORD *)v16 + 69);
        v1942 = 4LL;
        v1943 = *((_QWORD *)v16 + 187);
        LODWORD(v1944) = 4;
        v1945 = v1943 + ((v1941 >> 9) & 0x7FFFFFFFF8LL);
        v1946 = v2138;
        do
        {
          *v1946++ = v1945;
          v1945 = v1943 + ((v1945 >> 9) & 0x7FFFFFFFF8LL);
          --v1942;
        }
        while ( v1942 );
        do
          v1944 = (unsigned int)(v1944 - 1);
        while ( (_DWORD)v1944 && (*(_DWORD *)v2138[v1944] & 0x80) == 0 );
        v1947 = (__int64 *)v2138[v1944];
        v1948 = *v1947 | 0x62;
        *v1947 = v1948;
        v1949 = __readcr4();
        if ( (v1949 & 0x20080) != 0 )
        {
          __writecr4(v1949 ^ 0x80);
          __writecr4(v1949);
        }
        else
        {
          v1950 = __readcr3();
          __writecr3(v1950);
        }
        v1910 = (v1941 & 0xFFF) != 4096;
        v17 = 0LL;
        if ( (v1941 & 0xFFF) != 0x1000 )
        {
          v1951 = v1941 - (_QWORD)&v2148;
          do
          {
            v1940[v1951] = *v1940;
            ++v1940;
            v1910 = (unsigned int)(v1910 - 1);
          }
          while ( (_DWORD)v1910 );
        }
        *v1947 = v1948;
        v1959 = __readcr4();
        if ( (v1959 & 0x20080) != 0 )
        {
          __writecr4(v1959 ^ 0x80);
          __writecr4(v1959);
        }
        else
        {
          v1960 = __readcr3();
          __writecr3(v1960);
        }
      }
      else
      {
        **((_BYTE **)v16 + 69) = -61;
        __writecr0(v1993);
      }
      v1911 = v2001;
      v1903 = v1976;
      LODWORD(v1904) = v1980;
    }
    if ( *((_DWORD *)v16 + 594) != (_DWORD)v17 && KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1961 = *((_DWORD *)v16 + 594);
    if ( v1961 )
    {
      v1962 = v1961 - 1;
      if ( v1962 )
      {
        v1963 = v1962 - 1;
        if ( v1963 )
        {
          v1964 = v1963 - 1;
          if ( v1964 )
          {
            v1965 = v1964 - 1;
            if ( v1965 )
            {
              if ( v1965 == 1 )
              {
                v1910 = (*((_DWORD *)v16 + 630) >> 9) & 0x1F;
                _interlockedbittestandset(
                  *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v16 + 203)),
                  v1910);
              }
              else
              {
                _InterlockedOr64((volatile signed __int64 *)(*((_QWORD *)v16 + 182) + 832LL), 1uLL);
              }
            }
            else
            {
              v1910 = *(_QWORD *)(*((_QWORD *)v16 + 215)
                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v16 + 203))
                                + *((_QWORD *)v16 + 211));
              _interlockedbittestandset((volatile signed __int32 *)v1910, (*((_DWORD *)v16 + 630) >> 9) & 0x1F);
            }
            goto LABEL_3009;
          }
          v1966 = (volatile signed __int32 *)*((_QWORD *)v16 + 171);
        }
        else
        {
          v1966 = (volatile signed __int32 *)*((_QWORD *)v16 + 170);
        }
      }
      else
      {
        v1966 = (volatile signed __int32 *)*((_QWORD *)v16 + 168);
      }
      _interlockedbittestandset64(v1966, 0LL);
    }
LABEL_3009:
    *(_QWORD *)(v1911 + *((_QWORD *)v16 + 212)) = v17;
    *(_QWORD *)(v1911 + *((_QWORD *)v16 + 214)) = v17;
    KeGuardCheckICall(*((_QWORD *)v16 + 45), v1910);
    SdbpCheckDll(265, v1906, (_DWORD)v1905, v1904, v1903, *((_QWORD *)v16 + 45), (__int64)(v1908 - 8));
    __debugbreak();
  }
  if ( *((_DWORD *)v16 + 529) || *((_DWORD *)v16 + 528) )
  {
    v1952 = -1073741802;
    *(_DWORD *)v2 = *((_DWORD *)v16 + 528);
    *(_DWORD *)(v2 + 4) = *((_DWORD *)v16 + 529);
  }
  else
  {
    v1952 = *(_QWORD *)(v2 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( v2019 == 2872 )
    ExFreeToNPagedLookasideList(&stru_140E0F080, v15);
  else
    ExFreePool(v15);
  return v1952;
}
