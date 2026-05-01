/*
 * XREFs of ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x18015915C
 * Callers:
 *     ?IsWindowTabHostComponentEnabled@@YA_NXZ @ 0x1803DC490 (-IsWindowTabHostComponentEnabled@@YA_NXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800E67E8 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800E6810 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800E6844 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x180190928 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1801918B0 (RtlUIntAdd.c)
 *     StringLengthWorkerW @ 0x1801B0628 (StringLengthWorkerW.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1802CC614 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x18065D9FC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1806A4AF4 (wcscmp_0.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char IsWindowTabHostEnabledOnSKU(void)
{
  int *v0; // r14
  char v1; // r15
  int v2; // eax
  _BYTE *v3; // rbx
  int v4; // r8d
  _BYTE *v5; // r13
  int v6; // ecx
  unsigned __int8 *v7; // r14
  unsigned int v8; // r11d
  __int64 v9; // r12
  unsigned int v10; // esi
  int v11; // r10d
  int v12; // r9d
  int v13; // eax
  int v14; // r10d
  int v15; // esi
  int v16; // r9d
  unsigned int v17; // r11d
  int v18; // esi
  unsigned int v19; // r11d
  int v20; // esi
  int v21; // r11d
  unsigned int v22; // esi
  int v23; // r11d
  int v24; // esi
  int v25; // r11d
  unsigned int v26; // esi
  int v27; // edx
  int v28; // esi
  unsigned int v29; // r11d
  int v30; // esi
  int v31; // r11d
  int v32; // esi
  int v33; // r11d
  unsigned int v34; // edi
  int v35; // r11d
  int v36; // edi
  int v37; // r11d
  unsigned int v38; // edi
  int v39; // r11d
  int v40; // esi
  int v41; // eax
  unsigned __int64 v42; // rax
  char v43; // cl
  int v44; // r12d
  __int64 v45; // rbx
  HMODULE *v46; // rdi
  __int64 v47; // rdx
  __int64 (__fastcall **v48)(); // rax
  __int64 (__fastcall **v49)(); // rcx
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  unsigned int v63; // r13d
  __int64 v64; // rax
  const WCHAR *v65; // rdx
  unsigned int v66; // esi
  _BYTE *v67; // rbx
  char *v68; // rdi
  __int64 v69; // rcx
  unsigned __int64 v70; // rcx
  unsigned int v71; // eax
  const CHAR *v72; // rdx
  __int64 v73; // rax
  __int64 (__fastcall *ProcAddress)(); // rax
  HANDLE ProcessHeap; // rax
  wchar_t *v76; // rdi
  void *v77; // rsi
  signed int LastError; // r12d
  __int64 v79; // r13
  wchar_t *v80; // rbx
  __int64 i; // r9
  __int64 (__fastcall *v82)(); // rbx
  DWORD CurrentThreadId; // eax
  __int64 v84; // rax
  bool v85; // sf
  void *v86; // rbx
  __int64 v87; // r9
  int v88; // eax
  HANDLE CurrentProcess; // rax
  bool v90; // sf
  __int64 v91; // rbx
  HLOCAL v92; // r13
  int v93; // r12d
  int v94; // esi
  _QWORD *v95; // rbx
  HANDLE v96; // rax
  _OWORD *v97; // rax
  void *v98; // r13
  HANDLE v99; // rax
  int v100; // eax
  __int64 v101; // rcx
  unsigned int v102; // r9d
  unsigned int v103; // r10d
  unsigned int v104; // r11d
  unsigned int v105; // edi
  unsigned int v106; // ecx
  unsigned int v107; // r11d
  size_t v108; // rdx
  unsigned int v109; // r9d
  __int64 v110; // rcx
  unsigned int v111; // r11d
  unsigned int v112; // r9d
  unsigned int v113; // r10d
  unsigned int v114; // r11d
  unsigned int v115; // edi
  unsigned int v116; // ecx
  unsigned int v117; // r10d
  unsigned int v118; // eax
  unsigned int v119; // ecx
  unsigned int v120; // edi
  HANDLE v121; // rax
  void *v122; // rdi
  unsigned int v123; // r10d
  _DWORD *v124; // r11
  _DWORD *v125; // rax
  unsigned int v126; // eax
  unsigned int v127; // r9d
  int v128; // eax
  int v129; // r9d
  unsigned int v130; // eax
  unsigned int v131; // r9d
  unsigned int *v132; // r11
  __int64 v133; // rdx
  __int64 v134; // r11
  unsigned int v135; // r10d
  unsigned int *v136; // r11
  int v137; // eax
  int v138; // r9d
  unsigned int v139; // r9d
  size_t v140; // rdx
  unsigned int *v141; // r11
  __int64 v142; // rdx
  __int64 v143; // r11
  unsigned int v144; // r10d
  unsigned int *v145; // r11
  unsigned int *v146; // r10
  unsigned int v147; // r11d
  __int64 v148; // rdx
  __int64 v149; // r10
  int v150; // r11d
  _DWORD *v151; // r10
  LPCWSTR *v152; // rax
  unsigned int v153; // r11d
  unsigned int *v154; // r9
  unsigned int v155; // r11d
  __int64 v156; // rdx
  __int64 v157; // r9
  int v158; // r11d
  _DWORD *v159; // r9
  __int64 v160; // r10
  void *v161; // rcx
  __int64 v162; // r11
  __int64 v163; // r11
  unsigned int v164; // r11d
  unsigned int *v165; // r9
  unsigned int v166; // r10d
  __int64 v167; // rdx
  __int64 v168; // r9
  int v169; // r10d
  _DWORD *v170; // r9
  int *v171; // rax
  unsigned int *v172; // r9
  unsigned int v173; // r10d
  __int64 v174; // rdx
  __int64 v175; // r9
  int v176; // r10d
  unsigned int *v177; // r9
  unsigned int *v178; // rax
  __int64 v179; // rcx
  unsigned int v180; // r9d
  unsigned int v181; // r11d
  unsigned int v182; // r11d
  unsigned int v183; // r11d
  unsigned int v184; // r11d
  unsigned int v185; // r9d
  int v186; // r12d
  unsigned int v187; // ecx
  unsigned int v188; // edi
  HANDLE v189; // rax
  char *v190; // rax
  char *v191; // rdi
  unsigned int v192; // r9d
  void *v193; // rcx
  HANDLE v194; // rax
  char *v195; // r8
  unsigned __int8 v196; // al
  unsigned __int64 v197; // rcx
  char *v198; // rcx
  unsigned int v199; // r11d
  unsigned int v200; // r8d
  unsigned __int8 *v201; // r9
  int v202; // r10d
  int v203; // r8d
  char v204; // cl
  int v205; // edx
  int v206; // ecx
  int v207; // edx
  int v208; // r14d
  unsigned int v209; // r8d
  unsigned int v210; // r15d
  int v211; // edx
  unsigned int v212; // esi
  char v213; // dl
  SIZE_T v214; // r12
  _BYTE *v215; // rbx
  int v216; // edi
  unsigned __int8 *v217; // rdx
  int v218; // r15d
  int v219; // r14d
  int v220; // r13d
  unsigned __int64 v221; // rax
  int v222; // r10d
  int v223; // r9d
  int v224; // r8d
  int v225; // r11d
  int v226; // r8d
  int v227; // r11d
  int v228; // r8d
  unsigned int v229; // r11d
  int v230; // r8d
  int v231; // r11d
  int v232; // r8d
  int v233; // r11d
  int v234; // r8d
  int v235; // r11d
  unsigned int v236; // r8d
  unsigned int v237; // r11d
  int v238; // r8d
  int v239; // r11d
  int v240; // r8d
  int v241; // r11d
  int v242; // r8d
  int v243; // r11d
  int v244; // r8d
  int v245; // r11d
  unsigned int v246; // r8d
  int v247; // r11d
  unsigned int v248; // r8d
  HANDLE v249; // rax
  unsigned int *v250; // rcx
  unsigned int *v251; // rax
  unsigned int v252; // r12d
  HANDLE v253; // rax
  void *v254; // rax
  HANDLE v255; // rax
  LPVOID v256; // rax
  size_t v257; // rax
  HANDLE v258; // rax
  HANDLE v259; // rax
  HANDLE v260; // rax
  HANDLE v261; // rax
  unsigned int *v262; // rax
  _OWORD *v263; // rcx
  HANDLE v264; // rax
  LPVOID v265; // rax
  HANDLE v266; // rax
  unsigned __int8 *v267; // r10
  __int64 v268; // rdx
  unsigned int v269; // ecx
  void *v270; // r11
  int v271; // r12d
  __int64 v272; // r9
  __int64 v273; // r9
  unsigned int v274; // edi
  HANDLE v275; // rax
  _DWORD *v276; // rax
  void *v277; // rdi
  const void **v278; // r9
  void *v279; // rcx
  void *v280; // rax
  __int64 v281; // r9
  void *v282; // rcx
  __int64 v283; // r9
  __int64 v284; // r9
  void *v285; // rcx
  __int64 v286; // r9
  HANDLE v287; // rax
  unsigned int v288; // edx
  __int64 v289; // rcx
  HANDLE v290; // rax
  HANDLE v291; // rax
  HANDLE v292; // rax
  HANDLE v293; // rax
  HANDLE v294; // rax
  HANDLE v295; // rax
  HANDLE v296; // rax
  HANDLE v297; // rax
  HANDLE v298; // rax
  HANDLE v299; // rax
  HANDLE v300; // rax
  HANDLE v301; // rax
  unsigned int *v302; // r9
  unsigned __int8 *v303; // r11
  void *v304; // r11
  unsigned int *v305; // rcx
  int v306; // eax
  unsigned int *v307; // rcx
  unsigned int v308; // eax
  unsigned int v309; // edi
  unsigned int v310; // ecx
  unsigned int *v311; // r9
  void *v312; // r11
  unsigned int v313; // eax
  unsigned int v314; // edi
  HANDLE v315; // rax
  int *v316; // rax
  int *v317; // r10
  signed int v318; // eax
  FARPROC v319; // rax
  int v320; // eax
  unsigned int v321; // r9d
  int v322; // eax
  unsigned int *v323; // r10
  signed int v324; // r12d
  unsigned int *v325; // rcx
  int v326; // r9d
  SIZE_T v327; // r11
  unsigned int v328; // r11d
  int v329; // r9d
  __int64 v330; // rdx
  int v331; // r9d
  SIZE_T v332; // r10
  unsigned int v333; // r10d
  int v334; // r9d
  unsigned int v335; // r9d
  int v336; // r9d
  int v337; // r10d
  int v338; // r11d
  HANDLE v339; // rax
  _QWORD *v340; // rax
  _QWORD *v341; // rcx
  HANDLE v342; // rax
  void *v343; // rcx
  HANDLE v344; // rax
  void *v345; // rcx
  HANDLE v346; // rax
  void *v347; // rcx
  _QWORD *v348; // rax
  HANDLE v349; // rax
  HANDLE v350; // rax
  HANDLE v351; // rax
  HANDLE v352; // rax
  unsigned int *v353; // rax
  HANDLE v354; // rax
  HANDLE v355; // rax
  HANDLE v356; // rax
  HANDLE v357; // rax
  SIZE_T v358; // r12
  _DWORD *v359; // r10
  int v360; // eax
  unsigned __int8 *v361; // rcx
  unsigned int *v362; // rdx
  char v363; // cl
  unsigned __int8 *v364; // rsi
  int v365; // r12d
  int v366; // ecx
  int v367; // r12d
  unsigned int v368; // r11d
  unsigned int v369; // r12d
  int v370; // r14d
  int v371; // ecx
  int v372; // edx
  unsigned int v373; // r12d
  int v374; // r8d
  int v375; // eax
  int v376; // esi
  size_t v377; // r14
  int v378; // edi
  _BYTE *v379; // rbx
  unsigned int v380; // r13d
  unsigned __int8 *v381; // rdx
  int v382; // r10d
  int v383; // r11d
  unsigned int v384; // r12d
  int v385; // r11d
  unsigned int v386; // r12d
  int v387; // r11d
  int v388; // r12d
  unsigned int v389; // r11d
  int v390; // r12d
  int v391; // r11d
  int v392; // r12d
  unsigned int v393; // r11d
  int v394; // r12d
  int v395; // r11d
  unsigned int v396; // r12d
  int v397; // r11d
  int v398; // r12d
  int v399; // r11d
  int v400; // r12d
  int v401; // edi
  int v402; // r12d
  int v403; // edi
  int v404; // r12d
  unsigned int v405; // edi
  int v406; // r12d
  int v407; // r11d
  int v408; // ecx
  size_t n; // rcx
  void *v410; // r11
  _DWORD *v411; // r8
  unsigned int *v412; // r9
  int v413; // r12d
  void *v414; // rcx
  int v415; // eax
  _DWORD *v416; // r9
  unsigned int *v417; // rcx
  const void *v418; // rdx
  _DWORD *v419; // r8
  unsigned __int64 v420; // rax
  HANDLE v421; // rax
  size_t v422; // rdi
  int v423; // r9d
  _DWORD *v424; // r10
  int v425; // r11d
  _DWORD *v426; // r12
  int v427; // edx
  unsigned int *v428; // rax
  int ii; // r8d
  __int64 v430; // r9
  unsigned int *v431; // rcx
  LPCWSTR *v432; // rax
  int *v433; // rcx
  unsigned int v434; // r9d
  unsigned int v435; // r10d
  int v436; // r9d
  int v437; // r9d
  int *v438; // r11
  int *v439; // rax
  LPVOID v440; // rcx
  unsigned int v441; // r9d
  unsigned int v442; // r10d
  int v443; // r9d
  int v444; // r11d
  void *v445; // r10
  unsigned int *v446; // rcx
  unsigned int v447; // r9d
  int v448; // r9d
  int v449; // r9d
  unsigned int *v450; // rax
  unsigned int *v451; // rcx
  unsigned int v452; // r9d
  int v453; // r9d
  unsigned int v454; // edi
  int v455; // eax
  const void *v456; // r10
  size_t v457; // r11
  unsigned int *v458; // rax
  void *v459; // rdi
  HANDLE v460; // rax
  void *v461; // rdi
  HANDLE v462; // rax
  HANDLE v463; // rax
  HANDLE v464; // rax
  const void **v465; // r11
  DWORD ModuleFileNameW; // eax
  unsigned int v467; // r14d
  WCHAR *v468; // rbx
  HANDLE v469; // rax
  _OWORD *v470; // rax
  void *v471; // r14
  HANDLE v472; // rax
  WCHAR *v473; // rax
  __int64 v474; // rcx
  unsigned int v475; // r10d
  __int64 v476; // rcx
  unsigned int v477; // r9d
  unsigned int v478; // r10d
  unsigned int v479; // edi
  HANDLE v480; // rax
  unsigned int *v481; // rax
  __int64 v482; // rax
  unsigned int v483; // edi
  int v484; // eax
  char *v485; // rax
  int v486; // r12d
  _BYTE *v487; // r15
  unsigned int v488; // esi
  unsigned __int8 *v489; // rdi
  __int64 v490; // rcx
  int v491; // ebx
  int v492; // r11d
  int v493; // r10d
  int v494; // eax
  int v495; // r11d
  int v496; // r14d
  int v497; // r10d
  unsigned int v498; // r9d
  int v499; // r14d
  unsigned int v500; // r9d
  int v501; // r14d
  int v502; // r9d
  unsigned int v503; // r14d
  int v504; // r9d
  int v505; // r14d
  int v506; // r9d
  unsigned int v507; // r14d
  int v508; // r9d
  int v509; // r14d
  unsigned int v510; // esi
  int v511; // r14d
  int v512; // esi
  int v513; // r14d
  int v514; // esi
  unsigned int v515; // r8d
  int v516; // esi
  int v517; // r8d
  int v518; // esi
  unsigned int v519; // r8d
  int v520; // esi
  int v521; // r14d
  int v522; // eax
  unsigned __int64 v523; // rax
  const WCHAR *v524; // rbx
  char v525; // cl
  HMODULE *v526; // rbx
  __int64 v527; // r14
  __int64 v528; // rdx
  __int64 (__fastcall **v529)(); // rax
  __int64 (__fastcall **v530)(); // rcx
  __int128 v531; // xmm1
  __int128 v532; // xmm0
  __int128 v533; // xmm1
  __int128 v534; // xmm0
  __int128 v535; // xmm1
  __int128 v536; // xmm0
  __int128 v537; // xmm1
  __int128 v538; // xmm1
  __int128 v539; // xmm0
  __int128 v540; // xmm1
  __int128 v541; // xmm0
  __int128 v542; // xmm1
  __int128 v543; // xmm0
  const WCHAR *v544; // rdx
  __int64 v545; // rax
  const WCHAR *v546; // rbx
  HMODULE *v547; // r8
  int v548; // r14d
  __int64 v549; // rcx
  unsigned __int64 v550; // rcx
  unsigned int v551; // ecx
  unsigned int v552; // eax
  const CHAR *v553; // rdx
  __int64 v554; // rax
  __int64 (__fastcall *v555)(); // rax
  HANDLE v556; // rax
  int v557; // eax
  char *v558; // rax
  _BYTE *v559; // rsi
  int v560; // ebx
  unsigned __int8 *v561; // rdi
  int v562; // r9d
  __int64 v563; // rcx
  unsigned int v564; // r14d
  unsigned int v565; // r15d
  int v566; // r11d
  int v567; // r10d
  int v568; // eax
  int v569; // r11d
  int v570; // r15d
  int v571; // r10d
  unsigned int v572; // r14d
  int v573; // r15d
  unsigned int v574; // r14d
  int v575; // r15d
  int v576; // r14d
  unsigned int v577; // r15d
  int v578; // r14d
  int v579; // r15d
  int v580; // r14d
  unsigned int v581; // r15d
  int v582; // edx
  int v583; // r15d
  unsigned int v584; // r14d
  int v585; // r15d
  int v586; // r14d
  int v587; // r15d
  int v588; // r14d
  unsigned int v589; // r8d
  int v590; // r14d
  int v591; // r8d
  int v592; // r14d
  unsigned int v593; // r8d
  int v594; // r14d
  int v595; // r15d
  int v596; // eax
  WCHAR *v597; // rbx
  unsigned __int64 v598; // rax
  char v599; // cl
  HMODULE *v600; // rbx
  __int64 v601; // r14
  __int64 v602; // rdx
  __int64 (__fastcall **v603)(); // rax
  __int64 (__fastcall **v604)(); // rcx
  __int128 v605; // xmm1
  __int128 v606; // xmm0
  __int128 v607; // xmm1
  __int128 v608; // xmm0
  __int128 v609; // xmm1
  __int128 v610; // xmm0
  __int128 v611; // xmm1
  __int128 v612; // xmm1
  __int128 v613; // xmm0
  __int128 v614; // xmm1
  __int128 v615; // xmm0
  __int128 v616; // xmm1
  __int128 v617; // xmm0
  const WCHAR *v618; // rdx
  __int64 v619; // rax
  WCHAR *v620; // rbx
  HMODULE *v621; // r8
  int v622; // r14d
  __int64 v623; // rcx
  unsigned __int64 v624; // rcx
  unsigned int v625; // ecx
  unsigned int v626; // eax
  const CHAR *v627; // rdx
  __int64 v628; // rax
  __int64 (__fastcall *v629)(); // rax
  HANDLE v630; // rax
  _DWORD *v631; // rbx
  signed int v632; // eax
  signed int v633; // r14d
  signed int v634; // eax
  bool v635; // sf
  LPVOID v636; // rax
  LPVOID v637; // rax
  _DWORD *v638; // rdi
  _DWORD *v639; // rax
  char *v640; // rbx
  _DWORD *v641; // rsi
  unsigned int jj; // r15d
  __int64 v643; // rax
  unsigned int v644; // eax
  unsigned int v645; // edi
  __int64 v646; // rdx
  unsigned int kk; // ecx
  __int64 v648; // rdi
  __int64 v649; // rcx
  const wchar_t *v650; // rcx
  __int64 v651; // r8
  const wchar_t **v652; // rdx
  __int64 v653; // rax
  char *v654; // rax
  unsigned int v655; // r11d
  _BYTE *v656; // r14
  int v657; // r10d
  unsigned __int8 *v658; // rsi
  int v659; // edi
  unsigned int v660; // ebx
  __int64 v661; // r15
  int v662; // r9d
  int v663; // r8d
  int v664; // eax
  int v665; // r9d
  int v666; // ebx
  int v667; // r8d
  unsigned int v668; // r11d
  int v669; // ebx
  unsigned int v670; // r11d
  int v671; // ebx
  int v672; // r11d
  unsigned int v673; // ebx
  int v674; // r11d
  int v675; // ebx
  int v676; // r11d
  unsigned int v677; // ebx
  int v678; // ecx
  int v679; // ebx
  unsigned int v680; // r11d
  int v681; // ebx
  int v682; // r11d
  int v683; // ebx
  int v684; // r11d
  unsigned int v685; // edx
  int v686; // r11d
  int v687; // edx
  int v688; // r11d
  unsigned int v689; // edx
  int v690; // r11d
  int v691; // ebx
  int v692; // eax
  char *v693; // r10
  unsigned __int64 v694; // rax
  __m128 v695; // xmm1
  __m128 v696; // xmm0
  __m128 v697; // xmm0
  __m128 v698; // xmm1
  __m128 v699; // xmm1
  __m128 v700; // xmm1
  _QWORD *v701; // rdx
  __int64 v702; // r8
  unsigned int mm; // ecx
  __int64 v704; // rax
  LPVOID v705; // rax
  void **v706; // rbx
  unsigned int v707; // eax
  unsigned int v708; // ecx
  _BYTE *v709; // rax
  __int64 v710; // r9
  int v711; // eax
  LPVOID v712; // rax
  __int64 v713; // r9
  signed int v714; // eax
  void **v715; // rax
  __int64 v716; // rax
  _WORD *v717; // rdi
  __int64 v718; // rcx
  char *v719; // rbx
  void **v720; // rax
  void **v721; // rax
  void **v722; // rax
  signed int v723; // eax
  unsigned int v724; // edi
  char *v725; // rax
  bool v726; // sf
  int v727; // eax
  HMODULE *v728; // rdi
  __int64 v729; // rbx
  __int64 v730; // rdx
  __int64 (__fastcall **v731)(); // rax
  __int64 (__fastcall **v732)(); // rcx
  __int128 v733; // xmm1
  __int128 v734; // xmm0
  __int128 v735; // xmm1
  __int128 v736; // xmm0
  __int128 v737; // xmm1
  __int128 v738; // xmm0
  __int128 v739; // xmm1
  __int128 v740; // xmm1
  __int128 v741; // xmm0
  __int128 v742; // xmm1
  __int128 v743; // xmm0
  __int128 v744; // xmm1
  __int128 v745; // xmm0
  unsigned int v746; // edi
  int v747; // ebx
  __int64 v748; // rax
  int v749; // eax
  __int64 v750; // rax
  bool v751; // sf
  signed int v752; // eax
  int v753; // eax
  __int64 v754; // rax
  int v755; // ebx
  signed int v756; // eax
  unsigned int v757; // edx
  int v758; // eax
  __int32 v759; // ebx
  void *v760; // rdi
  int v761; // edi
  void *v762; // rdi
  int v763; // edi
  __int64 v764; // rdx
  __int64 v765; // rdi
  bool v766; // sf
  int v767; // eax
  __int64 v768; // rax
  bool v769; // sf
  void *v770; // rdi
  __int64 v771; // rbx
  int v772; // edi
  int v773; // eax
  unsigned __int64 v774; // rdx
  __int32 v775; // edx
  int v776; // r14d
  int v777; // ebx
  int v778; // edi
  CToastCenterExperienceManager *v779; // rax
  int v780; // edx
  int v781; // ecx
  CToastCenterExperienceManager *v782; // rax
  int v783; // edi
  int v784; // eax
  void *v785; // rdi
  __int64 v786; // rax
  CToastCenterExperienceManager *v787; // rbx
  signed int v788; // edi
  bool v789; // sf
  bool v790; // zf
  SIZE_T v791; // rcx
  __int64 v792; // rax
  __int64 (__fastcall *v793)(); // rdi
  __int64 v794; // rax
  __int32 v795; // r10d
  __int32 v796; // r9d
  __int32 v797; // r8d
  __int32 v798; // edx
  int v799; // ecx
  int v800; // r11d
  __int64 v801; // rdi
  int v802; // r15d
  unsigned __int16 *v803; // rdx
  __int64 v804; // rcx
  int v805; // r8d
  SIZE_T v806; // rax
  unsigned __int8 *v807; // r9
  SIZE_T v808; // r10
  int v809; // r8d
  int v810; // edi
  int v811; // edx
  int v812; // edi
  int v813; // edx
  int v814; // edi
  int v815; // ecx
  void *v816; // r14
  __int64 v817; // rax
  CToastCenterExperienceManager *v818; // rbx
  signed int v819; // edi
  bool v820; // sf
  const WCHAR *v821; // rcx
  __int64 v822; // rax
  __int64 (__fastcall *v823)(); // rdi
  __int64 v824; // rax
  int v825; // eax
  __int32 v826; // r10d
  __int32 v827; // r8d
  __int32 v828; // edx
  __int32 v829; // r9d
  int v830; // r14d
  int v831; // r11d
  const WCHAR *v832; // r8
  unsigned __int16 *v833; // rax
  unsigned __int8 *v834; // r9
  signed __int64 v835; // r10
  int i1; // esi
  int v837; // r8d
  int v838; // edi
  int v839; // edx
  int v840; // edi
  int v841; // edx
  CToastCenterExperienceManager *v842; // r14
  size_t v843; // rdi
  char v844; // al
  unsigned __int32 v845; // ebx
  __int32 v846; // ecx
  __int32 v847; // edi
  __int32 v848; // r14d
  __int32 v849; // edi
  __int32 v850; // r14d
  __int64 v851; // rax
  __int64 v852; // rax
  SIZE_T v853; // rcx
  __int64 v854; // rcx
  __int64 v855; // rcx
  __int64 v856; // rcx
  int v857; // eax
  __int64 v858; // rbx
  HMODULE *v859; // rdi
  __int64 v860; // rdx
  __int64 (__fastcall **v861)(); // rax
  __int64 (__fastcall **v862)(); // rcx
  __int128 v863; // xmm1
  __int128 v864; // xmm0
  __int128 v865; // xmm1
  __int128 v866; // xmm0
  __int128 v867; // xmm1
  __int128 v868; // xmm0
  __int128 v869; // xmm1
  __int128 v870; // xmm1
  __int128 v871; // xmm0
  __int128 v872; // xmm1
  __int128 v873; // xmm0
  __int128 v874; // xmm1
  __int128 v875; // xmm0
  int v876; // eax
  int v877; // r14d
  int v878; // eax
  char *v879; // rax
  int v880; // esi
  _BYTE *v881; // r15
  int v882; // ecx
  unsigned __int8 *v883; // rbx
  unsigned int v884; // r14d
  __int64 v885; // r12
  unsigned int v886; // r11d
  int v887; // r10d
  int v888; // r9d
  int v889; // eax
  int v890; // r10d
  int v891; // r11d
  int v892; // r9d
  unsigned int v893; // r8d
  int v894; // r11d
  unsigned int v895; // r8d
  int v896; // r11d
  int v897; // r8d
  unsigned int v898; // r11d
  int v899; // r8d
  int v900; // r11d
  int v901; // r8d
  unsigned int v902; // r11d
  int v903; // edx
  int v904; // r11d
  unsigned int v905; // r14d
  int v906; // r11d
  int v907; // r14d
  int v908; // r11d
  int v909; // r14d
  unsigned int v910; // edi
  int v911; // r14d
  int v912; // edi
  int v913; // r14d
  unsigned int v914; // edi
  int v915; // r14d
  int v916; // r11d
  int v917; // eax
  WCHAR *v918; // rbx
  unsigned __int64 v919; // rax
  char v920; // cl
  HMODULE *v921; // rdi
  __int64 v922; // rbx
  HMODULE *v923; // rdi
  __int64 v924; // rdx
  __int64 (__fastcall **v925)(); // rax
  __int64 (__fastcall **v926)(); // rcx
  __int128 v927; // xmm1
  __int128 v928; // xmm0
  __int128 v929; // xmm1
  __int128 v930; // xmm0
  __int128 v931; // xmm1
  __int128 v932; // xmm0
  __int128 v933; // xmm1
  __int128 v934; // xmm1
  __int128 v935; // xmm0
  __int128 v936; // xmm1
  __int128 v937; // xmm0
  __int128 v938; // xmm1
  __int128 v939; // xmm0
  __int32 v940; // edi
  __int64 v941; // rax
  signed int v942; // edi
  bool v943; // sf
  int v944; // eax
  char *v945; // rcx
  __int64 v946; // rax
  __int64 (__fastcall *v947)(); // rdi
  __int64 v948; // rax
  int v949; // eax
  __int32 v950; // r9d
  int v951; // r10d
  int v952; // edx
  int v953; // r8d
  int v954; // ecx
  int v955; // eax
  int v956; // esi
  unsigned __int8 *v957; // rdx
  unsigned __int16 *v958; // rax
  __int64 v959; // rbx
  signed int v960; // r11d
  signed __int64 v961; // r10
  unsigned __int8 *v962; // r9
  int v963; // r8d
  int v964; // r8d
  int v965; // edi
  int v966; // edx
  int v967; // edi
  int v968; // edx
  int v969; // edi
  int v970; // ecx
  void *v971; // rdi
  __int64 v972; // rax
  __int32 v973; // r14d
  __int64 v974; // rax
  signed int v975; // edi
  bool v976; // sf
  CToastCenterExperienceManager *v977; // r14
  int v978; // eax
  SIZE_T v979; // rcx
  __int64 v980; // rax
  __int64 (__fastcall *v981)(); // rdi
  __int64 v982; // rax
  int v983; // eax
  __int32 v984; // r10d
  int v985; // r8d
  __int32 v986; // edx
  int v987; // r9d
  int v988; // ecx
  int v989; // r11d
  __int64 v990; // rdi
  int v991; // edx
  const WCHAR *v992; // r8
  char *v993; // rax
  unsigned __int8 *v994; // r9
  signed __int64 v995; // r10
  int nn; // r15d
  int v997; // r8d
  int v998; // edi
  int v999; // edx
  int v1000; // edi
  int v1001; // edx
  const WCHAR *v1002; // rdx
  __int64 v1003; // rax
  WCHAR *v1004; // rbx
  char *v1005; // r14
  int v1006; // edi
  __int64 v1007; // rcx
  unsigned __int64 v1008; // rcx
  unsigned int v1009; // ecx
  unsigned int v1010; // eax
  const CHAR *v1011; // rdx
  __int64 v1012; // rax
  __int64 (__fastcall *v1013)(); // rax
  HANDLE v1014; // rax
  __int64 v1015; // rbx
  int v1016; // eax
  __int64 v1017; // rdx
  __int64 (__fastcall **v1018)(); // rax
  __int64 (__fastcall **v1019)(); // rcx
  __int128 v1020; // xmm1
  __int128 v1021; // xmm0
  __int128 v1022; // xmm1
  __int128 v1023; // xmm0
  __int128 v1024; // xmm1
  __int128 v1025; // xmm0
  __int128 v1026; // xmm1
  __int128 v1027; // xmm1
  __int128 v1028; // xmm0
  __int128 v1029; // xmm1
  __int128 v1030; // xmm0
  __int128 v1031; // xmm1
  __int128 v1032; // xmm0
  unsigned int *v1033; // rdi
  unsigned int v1034; // r9d
  unsigned int v1035; // r10d
  unsigned int *v1036; // rax
  unsigned int v1037; // edi
  unsigned int v1038; // r9d
  unsigned int *v1039; // r9
  __int64 v1040; // rdx
  __int64 v1041; // r9
  int v1042; // r11d
  int v1043; // eax
  unsigned int *v1044; // r9
  unsigned int v1045; // r10d
  unsigned int v1046; // edi
  unsigned int v1047; // r9d
  unsigned int *v1048; // r9
  __int64 v1049; // rdx
  __int64 v1050; // r9
  int v1051; // r11d
  int v1052; // eax
  unsigned int *v1053; // r9
  unsigned int v1054; // r10d
  unsigned int v1055; // edi
  unsigned int v1056; // r9d
  unsigned int *v1057; // r9
  unsigned int v1058; // r10d
  __int64 v1059; // rdx
  __int64 v1060; // r9
  int v1061; // r10d
  _DWORD *v1062; // r9
  _QWORD *v1063; // rax
  __int64 v1064; // rcx
  unsigned int v1065; // edi
  const void **v1066; // r13
  int v1067; // edi
  unsigned int v1068; // r9d
  unsigned int v1069; // ecx
  unsigned int v1070; // edi
  HANDLE v1071; // rax
  unsigned __int8 *v1072; // rax
  int v1073; // eax
  unsigned int v1074; // r10d
  WCHAR *v1075; // rcx
  void *v1076; // rcx
  int v1077; // eax
  WCHAR *v1078; // r9
  HANDLE v1079; // rax
  int v1080; // edi
  unsigned __int8 v1081; // al
  unsigned __int64 v1082; // rcx
  unsigned int v1083; // ecx
  const void **v1084; // r10
  unsigned int v1085; // r8d
  int v1086; // r9d
  char v1087; // r12
  int v1088; // r8d
  int v1089; // ecx
  int v1090; // r8d
  int v1091; // r15d
  unsigned int v1092; // r9d
  unsigned int v1093; // esi
  int v1094; // edx
  _BYTE *v1095; // rax
  unsigned int v1096; // r13d
  char v1097; // cl
  unsigned __int8 *v1098; // rdx
  int v1099; // edi
  unsigned int v1100; // r15d
  int v1101; // r13d
  unsigned __int64 v1102; // r14
  int v1103; // r12d
  int v1104; // eax
  int v1105; // r10d
  int v1106; // r9d
  int v1107; // r15d
  int v1108; // r8d
  int v1109; // r15d
  int v1110; // r8d
  int v1111; // r15d
  unsigned int v1112; // r8d
  int v1113; // r15d
  int v1114; // r8d
  int v1115; // r15d
  int v1116; // r8d
  int v1117; // r15d
  int v1118; // r8d
  unsigned int v1119; // r15d
  unsigned int v1120; // r8d
  int v1121; // r15d
  int v1122; // r8d
  int v1123; // r15d
  int v1124; // r8d
  int v1125; // r15d
  int v1126; // r8d
  int v1127; // r15d
  int v1128; // r8d
  unsigned int v1129; // r15d
  int v1130; // r8d
  int v1131; // edx
  unsigned int v1132; // ecx
  _BYTE *v1133; // rax
  unsigned int v1134; // edx
  HANDLE v1135; // rax
  _QWORD *v1136; // rax
  _QWORD *v1137; // rsi
  signed int v1138; // edi
  HANDLE v1139; // rax
  void *v1140; // rax
  HANDLE v1141; // rax
  _OWORD *v1142; // rax
  HANDLE v1143; // rax
  HANDLE v1144; // rax
  HANDLE v1145; // rax
  HANDLE v1146; // rax
  unsigned __int16 *v1147; // rax
  unsigned __int16 *v1148; // rsi
  HANDLE v1149; // rax
  _QWORD *v1150; // rax
  HANDLE v1151; // rax
  HANDLE v1152; // rax
  HANDLE v1153; // rax
  HANDLE v1154; // rax
  HANDLE v1155; // rax
  void *v1156; // rsi
  __int64 v1157; // rdx
  unsigned int v1158; // ecx
  int v1159; // edi
  unsigned int v1160; // edi
  HANDLE v1161; // rax
  _DWORD *v1162; // rax
  void *v1163; // rsi
  void *v1164; // rcx
  void *v1165; // rax
  void *v1166; // rcx
  void *v1167; // rcx
  HANDLE v1168; // rax
  unsigned int v1169; // edx
  __int64 v1170; // rcx
  const void **v1171; // r15
  HANDLE v1172; // rax
  void *v1173; // rsi
  HANDLE v1174; // rax
  void *v1175; // rsi
  HANDLE v1176; // rax
  void *v1177; // rsi
  HANDLE v1178; // rax
  HANDLE v1179; // rax
  HANDLE v1180; // rax
  HANDLE v1181; // rax
  void *v1182; // r15
  HANDLE v1183; // rax
  void *v1184; // r15
  HANDLE v1185; // rax
  void *v1186; // r15
  HANDLE v1187; // rax
  HANDLE v1188; // rax
  HANDLE v1189; // rax
  _DWORD *v1190; // rsi
  unsigned int v1191; // r9d
  int v1192; // r10d
  const void **v1193; // rax
  int i3; // edx
  _DWORD *v1195; // rcx
  const void **v1196; // r9
  const void **v1197; // r9
  const void **v1198; // r10
  unsigned __int8 *v1199; // rdi
  unsigned int *v1200; // rcx
  int v1201; // r10d
  int v1202; // r10d
  unsigned int *v1203; // rcx
  unsigned int v1204; // r10d
  int v1205; // r10d
  unsigned int v1206; // ecx
  unsigned int v1207; // r10d
  const void **v1208; // r9
  HANDLE v1209; // rax
  const void **v1210; // rax
  const void **v1211; // r11
  signed int v1212; // eax
  FARPROC v1213; // rax
  int v1214; // eax
  unsigned int v1215; // r9d
  int v1216; // eax
  signed int v1217; // edi
  int v1218; // r9d
  SIZE_T v1219; // r10
  unsigned int v1220; // r10d
  int v1221; // r9d
  int v1222; // r9d
  SIZE_T v1223; // r11
  unsigned int v1224; // r11d
  int v1225; // r9d
  int v1226; // r9d
  unsigned int v1227; // r10d
  int v1228; // r9d
  int v1229; // r10d
  int v1230; // r11d
  HANDLE v1231; // rax
  _QWORD *v1232; // rax
  _QWORD *v1233; // rcx
  HANDLE v1234; // rax
  void *v1235; // rcx
  HANDLE v1236; // rax
  void *v1237; // rcx
  HANDLE v1238; // rax
  void *v1239; // rcx
  _QWORD *v1240; // rax
  HANDLE v1241; // rax
  HANDLE v1242; // rax
  HANDLE v1243; // rax
  HANDLE v1244; // rax
  unsigned __int16 *v1245; // rax
  unsigned __int16 *v1246; // r10
  HANDLE v1247; // rax
  HANDLE v1248; // rax
  HANDLE v1249; // rax
  HANDLE v1250; // rax
  SIZE_T v1251; // rdi
  _DWORD *v1252; // rax
  _BYTE *v1253; // rcx
  unsigned __int16 *v1254; // r10
  unsigned __int8 v1255; // al
  unsigned int v1256; // r9d
  unsigned int v1257; // ecx
  int v1258; // edi
  unsigned __int8 *v1259; // rdx
  unsigned __int16 *v1260; // r11
  int v1261; // r8d
  unsigned int v1262; // r8d
  unsigned int v1263; // eax
  unsigned int v1264; // r12d
  char v1265; // dl
  _BYTE *v1266; // r14
  int v1267; // r12d
  unsigned __int8 *v1268; // rbx
  int v1269; // r11d
  SIZE_T v1270; // r13
  int v1271; // edi
  unsigned int v1272; // eax
  int v1273; // r10d
  int v1274; // r9d
  int v1275; // ecx
  int v1276; // r10d
  int v1277; // r8d
  int v1278; // r9d
  unsigned int v1279; // eax
  int v1280; // r8d
  unsigned int v1281; // eax
  int v1282; // r8d
  int v1283; // eax
  unsigned int v1284; // r8d
  int v1285; // eax
  int v1286; // r8d
  int v1287; // eax
  unsigned int v1288; // r8d
  int v1289; // eax
  int v1290; // r8d
  unsigned int v1291; // eax
  int v1292; // r8d
  int v1293; // eax
  int v1294; // r8d
  int v1295; // eax
  unsigned int v1296; // edi
  int v1297; // eax
  int v1298; // edi
  int v1299; // eax
  unsigned int v1300; // edi
  int v1301; // ecx
  unsigned int v1302; // r8d
  unsigned int v1303; // r8d
  SIZE_T i2; // rcx
  unsigned __int16 *v1305; // r10
  const void **v1306; // r9
  int v1307; // edi
  unsigned int *v1308; // r11
  SIZE_T v1309; // rcx
  unsigned __int16 *v1310; // r11
  SIZE_T v1311; // r10
  void *v1312; // rcx
  int v1313; // eax
  _DWORD *v1314; // r9
  unsigned int *v1315; // rdx
  _DWORD *v1316; // r8
  unsigned int *v1317; // r11
  __int64 v1318; // rdx
  unsigned __int64 v1319; // r11
  unsigned __int64 v1320; // rcx
  _DWORD *v1321; // rax
  HANDLE v1322; // rax
  size_t v1323; // rsi
  LPVOID v1324; // rax
  void *v1325; // rdi
  HANDLE v1326; // rax
  void *v1327; // rsi
  HANDLE v1328; // rax
  HANDLE v1329; // rax
  HANDLE v1330; // rax
  int v1331; // eax
  HMODULE *v1332; // rdi
  __int64 v1333; // rdx
  __int64 (__fastcall **v1334)(); // rax
  __int64 (__fastcall **v1335)(); // rcx
  __int128 v1336; // xmm1
  __int128 v1337; // xmm0
  __int128 v1338; // xmm1
  __int128 v1339; // xmm0
  __int128 v1340; // xmm1
  __int128 v1341; // xmm0
  __int128 v1342; // xmm1
  __int128 v1343; // xmm1
  __int128 v1344; // xmm0
  __int128 v1345; // xmm1
  __int128 v1346; // xmm0
  __int128 v1347; // xmm1
  __int128 v1348; // xmm0
  int v1349; // ebx
  int v1350; // edi
  unsigned __int8 v1352; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1353; // [rsp+60h] [rbp-A0h]
  char *v1354; // [rsp+68h] [rbp-98h]
  void *v1355; // [rsp+68h] [rbp-98h]
  void *v1356; // [rsp+68h] [rbp-98h]
  void *v1357; // [rsp+68h] [rbp-98h]
  void *v1358; // [rsp+68h] [rbp-98h]
  void *v1359; // [rsp+68h] [rbp-98h]
  void *v1360; // [rsp+68h] [rbp-98h]
  void *v1361; // [rsp+68h] [rbp-98h]
  void *v1362; // [rsp+68h] [rbp-98h]
  void *v1363; // [rsp+68h] [rbp-98h]
  unsigned int *v1364; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v1365; // [rsp+68h] [rbp-98h]
  unsigned int *v1366; // [rsp+68h] [rbp-98h]
  LPCWSTR v1367; // [rsp+68h] [rbp-98h]
  CToastCenterExperienceManager *v1368; // [rsp+68h] [rbp-98h]
  const void **v1369; // [rsp+68h] [rbp-98h]
  const void **v1370; // [rsp+68h] [rbp-98h]
  void *lpMem; // [rsp+70h] [rbp-90h]
  LPVOID lpMema; // [rsp+70h] [rbp-90h]
  __int64 lpMemb; // [rsp+70h] [rbp-90h]
  LPVOID lpMemc; // [rsp+70h] [rbp-90h]
  CToastCenterExperienceManager *lpMemd; // [rsp+70h] [rbp-90h]
  LPVOID lpMeme; // [rsp+70h] [rbp-90h]
  int lpMemf; // [rsp+70h] [rbp-90h]
  int lpMemg; // [rsp+70h] [rbp-90h]
  int lpMemh; // [rsp+70h] [rbp-90h]
  int lpMemi; // [rsp+70h] [rbp-90h]
  int lpMemj; // [rsp+70h] [rbp-90h]
  unsigned int lpMemk; // [rsp+70h] [rbp-90h]
  unsigned int lpMeml; // [rsp+70h] [rbp-90h]
  int lpMemm; // [rsp+70h] [rbp-90h]
  unsigned int lpMemn; // [rsp+70h] [rbp-90h]
  int lpMemo; // [rsp+70h] [rbp-90h]
  unsigned int lpMemq; // [rsp+70h] [rbp-90h]
  int lpMemp; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1389; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1390; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1391; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1392; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1393; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1394; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1395; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1396; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1397; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1398; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1399; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1400; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1401; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1402; // [rsp+78h] [rbp-88h]
  SIZE_T v1403; // [rsp+80h] [rbp-80h]
  SIZE_T v1404; // [rsp+80h] [rbp-80h]
  SIZE_T v1405; // [rsp+80h] [rbp-80h]
  unsigned int v1406; // [rsp+80h] [rbp-80h]
  WCHAR *v1407; // [rsp+80h] [rbp-80h]
  SIZE_T v1408; // [rsp+80h] [rbp-80h]
  SIZE_T v1409; // [rsp+80h] [rbp-80h]
  SIZE_T v1410; // [rsp+80h] [rbp-80h]
  SIZE_T v1411; // [rsp+80h] [rbp-80h]
  SIZE_T v1412; // [rsp+80h] [rbp-80h]
  SIZE_T v1413; // [rsp+80h] [rbp-80h]
  SIZE_T v1414; // [rsp+80h] [rbp-80h]
  SIZE_T v1415; // [rsp+80h] [rbp-80h]
  SIZE_T v1416; // [rsp+80h] [rbp-80h]
  SIZE_T v1417; // [rsp+80h] [rbp-80h]
  CToastCenterExperienceManager *v1418; // [rsp+80h] [rbp-80h]
  _DWORD *v1419; // [rsp+80h] [rbp-80h]
  SIZE_T v1420; // [rsp+88h] [rbp-78h]
  SIZE_T v1421; // [rsp+88h] [rbp-78h]
  LPVOID v1422; // [rsp+88h] [rbp-78h]
  char *v1423; // [rsp+88h] [rbp-78h]
  SIZE_T v1424; // [rsp+88h] [rbp-78h]
  SIZE_T v1425; // [rsp+88h] [rbp-78h]
  SIZE_T v1426; // [rsp+88h] [rbp-78h]
  int v1427; // [rsp+88h] [rbp-78h]
  int v1428; // [rsp+88h] [rbp-78h]
  int v1429; // [rsp+88h] [rbp-78h]
  int v1430; // [rsp+88h] [rbp-78h]
  unsigned int v1431; // [rsp+88h] [rbp-78h]
  unsigned int v1432; // [rsp+88h] [rbp-78h]
  _BYTE *v1433; // [rsp+88h] [rbp-78h]
  int v1434; // [rsp+88h] [rbp-78h]
  unsigned int v1435; // [rsp+88h] [rbp-78h]
  LPCWSTR lpModuleName; // [rsp+90h] [rbp-70h]
  WCHAR *lpModuleNamea; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNameb; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNamec; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNamed; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNamee; // [rsp+90h] [rbp-70h]
  int lpModuleNamef; // [rsp+90h] [rbp-70h]
  int lpModuleNameg; // [rsp+90h] [rbp-70h]
  int lpModuleNameh; // [rsp+90h] [rbp-70h]
  int lpModuleNamei; // [rsp+90h] [rbp-70h]
  int lpModuleNamej; // [rsp+90h] [rbp-70h]
  unsigned int lpModuleNamek; // [rsp+90h] [rbp-70h]
  unsigned int lpModuleNamel; // [rsp+90h] [rbp-70h]
  unsigned int lpModuleNamem; // [rsp+90h] [rbp-70h]
  int lpModuleNamen; // [rsp+90h] [rbp-70h]
  unsigned int lpModuleNameo; // [rsp+90h] [rbp-70h]
  unsigned int lpModuleNamep; // [rsp+90h] [rbp-70h]
  unsigned int v1453; // [rsp+98h] [rbp-68h]
  unsigned int v1454; // [rsp+98h] [rbp-68h]
  unsigned int v1455; // [rsp+98h] [rbp-68h]
  unsigned int v1456; // [rsp+98h] [rbp-68h]
  unsigned int v1457; // [rsp+98h] [rbp-68h]
  unsigned int v1458; // [rsp+98h] [rbp-68h]
  unsigned int v1459; // [rsp+98h] [rbp-68h]
  unsigned int v1460; // [rsp+98h] [rbp-68h]
  int v1461; // [rsp+98h] [rbp-68h]
  unsigned int v1462; // [rsp+98h] [rbp-68h]
  unsigned int v1463; // [rsp+98h] [rbp-68h]
  int v1464; // [rsp+98h] [rbp-68h]
  unsigned int v1465; // [rsp+98h] [rbp-68h]
  int v1466; // [rsp+98h] [rbp-68h]
  int v1467; // [rsp+98h] [rbp-68h]
  int v1468; // [rsp+98h] [rbp-68h]
  int v1469; // [rsp+98h] [rbp-68h]
  int v1470; // [rsp+98h] [rbp-68h]
  SIZE_T v1471; // [rsp+98h] [rbp-68h]
  SIZE_T v1472; // [rsp+98h] [rbp-68h]
  int v1473; // [rsp+A0h] [rbp-60h]
  char *v1474; // [rsp+A0h] [rbp-60h]
  unsigned __int8 *v1475; // [rsp+A0h] [rbp-60h]
  LPVOID v1476; // [rsp+A0h] [rbp-60h]
  LPVOID v1477; // [rsp+A0h] [rbp-60h]
  LPVOID v1478; // [rsp+A0h] [rbp-60h]
  unsigned __int8 *v1479; // [rsp+A0h] [rbp-60h]
  void *v1480; // [rsp+A0h] [rbp-60h]
  void *v1481; // [rsp+A0h] [rbp-60h]
  void *v1482; // [rsp+A0h] [rbp-60h]
  LPVOID v1483; // [rsp+A0h] [rbp-60h]
  void *v1484; // [rsp+A0h] [rbp-60h]
  void *v1485; // [rsp+A0h] [rbp-60h]
  void *v1486; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v1487; // [rsp+A8h] [rbp-58h]
  char j; // [rsp+A8h] [rbp-58h]
  int v1489; // [rsp+A8h] [rbp-58h]
  int v1490; // [rsp+A8h] [rbp-58h]
  int v1491; // [rsp+A8h] [rbp-58h]
  unsigned int v1492; // [rsp+A8h] [rbp-58h]
  int v1493; // [rsp+A8h] [rbp-58h]
  int v1494; // [rsp+A8h] [rbp-58h]
  int v1495; // [rsp+A8h] [rbp-58h]
  int v1496; // [rsp+A8h] [rbp-58h]
  unsigned int v1497; // [rsp+A8h] [rbp-58h]
  unsigned int v1498; // [rsp+A8h] [rbp-58h]
  int v1499; // [rsp+A8h] [rbp-58h]
  unsigned int v1500; // [rsp+A8h] [rbp-58h]
  unsigned int v1501; // [rsp+A8h] [rbp-58h]
  int v1502; // [rsp+A8h] [rbp-58h]
  unsigned int dwBytes; // [rsp+B0h] [rbp-50h]
  void *dwBytesa; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *dwBytesb; // [rsp+B0h] [rbp-50h]
  SIZE_T dwBytesc; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *dwBytesd; // [rsp+B0h] [rbp-50h]
  void *dwBytese; // [rsp+B0h] [rbp-50h]
  void *dwBytesf; // [rsp+B0h] [rbp-50h]
  void *dwBytesg; // [rsp+B0h] [rbp-50h]
  void *dwBytesh; // [rsp+B0h] [rbp-50h]
  void *dwBytesi; // [rsp+B0h] [rbp-50h]
  void *dwBytesj; // [rsp+B0h] [rbp-50h]
  char *v1514; // [rsp+B8h] [rbp-48h]
  size_t v1515; // [rsp+B8h] [rbp-48h]
  void *v1516; // [rsp+B8h] [rbp-48h]
  void *v1517; // [rsp+B8h] [rbp-48h]
  void *v1518; // [rsp+B8h] [rbp-48h]
  void *v1519; // [rsp+B8h] [rbp-48h]
  void *v1520; // [rsp+B8h] [rbp-48h]
  void *v1521; // [rsp+B8h] [rbp-48h]
  void *v1522; // [rsp+B8h] [rbp-48h]
  size_t v1523; // [rsp+B8h] [rbp-48h]
  size_t v1524; // [rsp+B8h] [rbp-48h]
  const void **v1525; // [rsp+B8h] [rbp-48h]
  SIZE_T v1526; // [rsp+C0h] [rbp-40h]
  SIZE_T v1527; // [rsp+C0h] [rbp-40h]
  SIZE_T v1528; // [rsp+C0h] [rbp-40h]
  SIZE_T v1529; // [rsp+C0h] [rbp-40h]
  __int32 v1530; // [rsp+C0h] [rbp-40h]
  unsigned int v1531; // [rsp+C0h] [rbp-40h]
  unsigned int v1532; // [rsp+C0h] [rbp-40h]
  SIZE_T v1533; // [rsp+C0h] [rbp-40h]
  SIZE_T v1534; // [rsp+C0h] [rbp-40h]
  int v1535; // [rsp+C0h] [rbp-40h]
  SIZE_T v1536; // [rsp+C0h] [rbp-40h]
  _DWORD *v1537; // [rsp+C8h] [rbp-38h]
  SIZE_T v1538; // [rsp+C8h] [rbp-38h]
  char *v1539; // [rsp+C8h] [rbp-38h]
  SIZE_T v1540; // [rsp+C8h] [rbp-38h]
  SIZE_T v1541; // [rsp+C8h] [rbp-38h]
  CToastCenterExperienceManager *v1542; // [rsp+C8h] [rbp-38h]
  SIZE_T v1543; // [rsp+C8h] [rbp-38h]
  SIZE_T v1544; // [rsp+C8h] [rbp-38h]
  SIZE_T v1545; // [rsp+C8h] [rbp-38h]
  unsigned int v1546; // [rsp+C8h] [rbp-38h]
  void *v1547; // [rsp+C8h] [rbp-38h]
  SIZE_T v1548; // [rsp+C8h] [rbp-38h]
  int v1549; // [rsp+D0h] [rbp-30h]
  int v1550; // [rsp+D0h] [rbp-30h]
  unsigned int v1551; // [rsp+D0h] [rbp-30h]
  unsigned int v1552; // [rsp+D0h] [rbp-30h]
  unsigned __int32 v1553; // [rsp+D0h] [rbp-30h]
  int v1554; // [rsp+D4h] [rbp-2Ch]
  unsigned int v1555; // [rsp+D4h] [rbp-2Ch]
  unsigned int v1556; // [rsp+D4h] [rbp-2Ch]
  int v1557; // [rsp+D4h] [rbp-2Ch]
  int v1558; // [rsp+D4h] [rbp-2Ch]
  __int32 v1559; // [rsp+D4h] [rbp-2Ch]
  unsigned int v1560; // [rsp+D8h] [rbp-28h]
  char k; // [rsp+D8h] [rbp-28h]
  int v1562; // [rsp+D8h] [rbp-28h]
  const void *v1563; // [rsp+D8h] [rbp-28h]
  unsigned int v1564; // [rsp+D8h] [rbp-28h]
  unsigned int v1565; // [rsp+D8h] [rbp-28h]
  int v1566; // [rsp+D8h] [rbp-28h]
  int v1567; // [rsp+D8h] [rbp-28h]
  int v1568; // [rsp+D8h] [rbp-28h]
  __int32 v1569; // [rsp+D8h] [rbp-28h]
  signed int v1570; // [rsp+D8h] [rbp-28h]
  int v1571; // [rsp+E0h] [rbp-20h]
  int v1572; // [rsp+E0h] [rbp-20h]
  int v1573; // [rsp+E0h] [rbp-20h]
  unsigned int v1574; // [rsp+E0h] [rbp-20h]
  unsigned int v1575; // [rsp+E0h] [rbp-20h]
  int v1576; // [rsp+E0h] [rbp-20h]
  int m; // [rsp+E0h] [rbp-20h]
  unsigned int v1578; // [rsp+E0h] [rbp-20h]
  unsigned int v1579; // [rsp+E0h] [rbp-20h]
  unsigned int v1580; // [rsp+E0h] [rbp-20h]
  int v1581; // [rsp+E0h] [rbp-20h]
  unsigned int v1582; // [rsp+E0h] [rbp-20h]
  int v1583; // [rsp+E0h] [rbp-20h]
  _BYTE *v1584; // [rsp+E0h] [rbp-20h]
  unsigned int v1585; // [rsp+E8h] [rbp-18h]
  unsigned int v1586; // [rsp+E8h] [rbp-18h]
  unsigned int v1587; // [rsp+E8h] [rbp-18h]
  _DWORD *v1588; // [rsp+E8h] [rbp-18h]
  unsigned int v1589; // [rsp+E8h] [rbp-18h]
  int v1590; // [rsp+E8h] [rbp-18h]
  int v1591; // [rsp+E8h] [rbp-18h]
  int v1592; // [rsp+E8h] [rbp-18h]
  __int64 v1593; // [rsp+E8h] [rbp-18h]
  WCHAR *v1594; // [rsp+F0h] [rbp-10h]
  LPCWSTR v1595; // [rsp+F0h] [rbp-10h]
  LPCWSTR v1596; // [rsp+F0h] [rbp-10h]
  LPCWSTR v1597; // [rsp+F0h] [rbp-10h]
  LPCWSTR v1598; // [rsp+F0h] [rbp-10h]
  WCHAR *v1599; // [rsp+F0h] [rbp-10h]
  LPCWSTR v1600; // [rsp+F0h] [rbp-10h]
  int *v1601; // [rsp+F8h] [rbp-8h]
  unsigned int v1602; // [rsp+F8h] [rbp-8h]
  int v1603; // [rsp+F8h] [rbp-8h]
  int v1604; // [rsp+F8h] [rbp-8h]
  unsigned int v1605; // [rsp+F8h] [rbp-8h]
  int v1606; // [rsp+F8h] [rbp-8h]
  _DWORD *v1607; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v1608; // [rsp+100h] [rbp+0h]
  __int32 v1609; // [rsp+100h] [rbp+0h]
  unsigned int v1610; // [rsp+100h] [rbp+0h]
  int v1611; // [rsp+100h] [rbp+0h]
  int v1612; // [rsp+100h] [rbp+0h]
  int v1613; // [rsp+100h] [rbp+0h]
  int v1614; // [rsp+100h] [rbp+0h]
  void *v1615; // [rsp+100h] [rbp+0h]
  unsigned int *v1616; // [rsp+100h] [rbp+0h]
  unsigned int *v1617; // [rsp+108h] [rbp+8h]
  char *v1618; // [rsp+108h] [rbp+8h]
  SIZE_T v1619; // [rsp+108h] [rbp+8h]
  SIZE_T v1620; // [rsp+108h] [rbp+8h]
  unsigned int v1621; // [rsp+108h] [rbp+8h]
  int v1622; // [rsp+108h] [rbp+8h]
  SIZE_T v1623; // [rsp+108h] [rbp+8h]
  SIZE_T v1624; // [rsp+108h] [rbp+8h]
  SIZE_T v1625; // [rsp+108h] [rbp+8h]
  char *Size; // [rsp+110h] [rbp+10h]
  SIZE_T Sizea; // [rsp+110h] [rbp+10h]
  SIZE_T Sizeb; // [rsp+110h] [rbp+10h]
  const void **Sizec; // [rsp+110h] [rbp+10h]
  int v1630; // [rsp+118h] [rbp+18h]
  int v1631; // [rsp+118h] [rbp+18h]
  __int32 v1632; // [rsp+118h] [rbp+18h]
  void *v1633; // [rsp+120h] [rbp+20h]
  _BYTE *v1634; // [rsp+120h] [rbp+20h]
  __int32 v1635; // [rsp+120h] [rbp+20h]
  int v1636; // [rsp+120h] [rbp+20h]
  int v1637; // [rsp+120h] [rbp+20h]
  int v1638; // [rsp+120h] [rbp+20h]
  _QWORD *v1639; // [rsp+120h] [rbp+20h]
  LPVOID v1640; // [rsp+120h] [rbp+20h]
  unsigned int *v1641; // [rsp+128h] [rbp+28h]
  _QWORD *v1642; // [rsp+128h] [rbp+28h]
  unsigned int v1643; // [rsp+128h] [rbp+28h]
  char v1644; // [rsp+128h] [rbp+28h]
  LPVOID v1645; // [rsp+128h] [rbp+28h]
  LPVOID v1646; // [rsp+130h] [rbp+30h]
  CToastCenterExperienceManager *v1647; // [rsp+130h] [rbp+30h]
  char *v1648; // [rsp+130h] [rbp+30h]
  char *v1649; // [rsp+130h] [rbp+30h]
  const void **v1650; // [rsp+130h] [rbp+30h]
  int v1651; // [rsp+138h] [rbp+38h]
  int v1652; // [rsp+138h] [rbp+38h]
  unsigned int v1653; // [rsp+138h] [rbp+38h]
  unsigned int *v1654; // [rsp+138h] [rbp+38h]
  int v1655; // [rsp+140h] [rbp+40h]
  char v1656; // [rsp+144h] [rbp+44h]
  int v1657; // [rsp+14Ch] [rbp+4Ch]
  int v1658; // [rsp+150h] [rbp+50h]
  unsigned int v1659; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1660; // [rsp+158h] [rbp+58h] BYREF
  int v1661; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v1662; // [rsp+160h] [rbp+60h]
  int v1663; // [rsp+164h] [rbp+64h] BYREF
  int v1664; // [rsp+168h] [rbp+68h] BYREF
  int v1665; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v1666; // [rsp+170h] [rbp+70h] BYREF
  int v1667; // [rsp+174h] [rbp+74h] BYREF
  int v1668; // [rsp+178h] [rbp+78h] BYREF
  int v1669; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1670; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1671; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1672; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1673; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1674; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1675; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1676; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1677; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1678; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1679; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1680; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1681; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1682; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1683; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1684; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1685; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1686; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1687; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1688; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1689; // [rsp+1D4h] [rbp+D4h] BYREF
  unsigned int v1690; // [rsp+1D8h] [rbp+D8h]
  unsigned int v1691; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1692; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1693; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1694; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1695; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1696; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1697; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1698; // [rsp+1F8h] [rbp+F8h] BYREF
  int v1699; // [rsp+1FCh] [rbp+FCh] BYREF
  int v1700; // [rsp+200h] [rbp+100h] BYREF
  int v1701; // [rsp+204h] [rbp+104h] BYREF
  unsigned int v1702; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1703; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1704; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1705; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1706; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1707; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1708; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1709; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1710; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1711; // [rsp+234h] [rbp+134h]
  unsigned int v1712; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1713; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1714; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1715; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1716; // [rsp+248h] [rbp+148h] BYREF
  _DWORD *v1717; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1718; // [rsp+258h] [rbp+158h] BYREF
  HMODULE phModule; // [rsp+260h] [rbp+160h] BYREF
  HLOCAL hMem; // [rsp+268h] [rbp+168h]
  size_t pcchLength[2]; // [rsp+270h] [rbp+170h] BYREF
  unsigned int *v1722; // [rsp+280h] [rbp+180h] BYREF
  unsigned int *v1723; // [rsp+288h] [rbp+188h] BYREF
  unsigned int *v1724; // [rsp+290h] [rbp+190h] BYREF
  void *v1725; // [rsp+298h] [rbp+198h] BYREF
  unsigned int *v1726; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *v1727; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int *v1728; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int *v1729; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned __int64 v1730; // [rsp+2C8h] [rbp+1C8h]
  void *v1731; // [rsp+2D0h] [rbp+1D0h] BYREF
  HMODULE hModule; // [rsp+2D8h] [rbp+1D8h] BYREF
  unsigned __int64 v1733; // [rsp+2E0h] [rbp+1E0h] BYREF
  _DWORD *v1734; // [rsp+2E8h] [rbp+1E8h] BYREF
  int *v1735; // [rsp+2F0h] [rbp+1F0h] BYREF
  LPVOID v1736; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int *v1737; // [rsp+300h] [rbp+200h] BYREF
  unsigned int *v1738; // [rsp+308h] [rbp+208h] BYREF
  __int64 v1739; // [rsp+310h] [rbp+210h] BYREF
  void **v1740; // [rsp+318h] [rbp+218h] BYREF
  void *v1741; // [rsp+320h] [rbp+220h] BYREF
  void *v1742; // [rsp+328h] [rbp+228h] BYREF
  void *v1743; // [rsp+330h] [rbp+230h] BYREF
  void **v1744; // [rsp+338h] [rbp+238h] BYREF
  char *v1745; // [rsp+340h] [rbp+240h] BYREF
  LPVOID v1746[4]; // [rsp+348h] [rbp+248h] BYREF
  __int64 v1747; // [rsp+368h] [rbp+268h]
  __int64 v1748; // [rsp+370h] [rbp+270h] BYREF
  __int64 v1749; // [rsp+378h] [rbp+278h] BYREF
  __int64 v1750; // [rsp+380h] [rbp+280h] BYREF
  unsigned int *v1751; // [rsp+388h] [rbp+288h] BYREF
  __int64 v1752; // [rsp+390h] [rbp+290h] BYREF
  unsigned int *v1753; // [rsp+398h] [rbp+298h] BYREF
  size_t v1754; // [rsp+3A0h] [rbp+2A0h] BYREF
  _QWORD v1755[2]; // [rsp+3A8h] [rbp+2A8h] BYREF
  size_t v1756; // [rsp+3B8h] [rbp+2B8h] BYREF
  size_t v1757; // [rsp+3C0h] [rbp+2C0h] BYREF
  size_t v1758; // [rsp+3C8h] [rbp+2C8h] BYREF
  void *v1759; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned __int64 v1760; // [rsp+3D8h] [rbp+2D8h] BYREF
  void *v1761; // [rsp+3E8h] [rbp+2E8h] BYREF
  size_t v1762; // [rsp+3F0h] [rbp+2F0h] BYREF
  _QWORD v1763[2]; // [rsp+3F8h] [rbp+2F8h] BYREF
  void *v1764[2]; // [rsp+408h] [rbp+308h] BYREF
  _QWORD *v1765; // [rsp+418h] [rbp+318h] BYREF
  __int128 v1766; // [rsp+420h] [rbp+320h]
  void *Src[2]; // [rsp+430h] [rbp+330h] BYREF
  LPVOID v1768[2]; // [rsp+440h] [rbp+340h]
  __int64 v1769; // [rsp+450h] [rbp+350h]
  _QWORD v1770[2]; // [rsp+458h] [rbp+358h] BYREF
  void *v1771[2]; // [rsp+468h] [rbp+368h] BYREF
  void *v1772[2]; // [rsp+478h] [rbp+378h] BYREF
  _QWORD v1773[2]; // [rsp+488h] [rbp+388h] BYREF
  _QWORD v1774[2]; // [rsp+498h] [rbp+398h] BYREF
  _QWORD v1775[2]; // [rsp+4A8h] [rbp+3A8h] BYREF
  unsigned int *v1776; // [rsp+4B8h] [rbp+3B8h] BYREF
  __int128 v1777; // [rsp+4C0h] [rbp+3C0h] BYREF
  size_t v1778[2]; // [rsp+4D0h] [rbp+3D0h] BYREF
  LPVOID v1779[2]; // [rsp+4E0h] [rbp+3E0h]
  __int64 v1780; // [rsp+4F0h] [rbp+3F0h]
  _QWORD v1781[2]; // [rsp+4F8h] [rbp+3F8h] BYREF
  void *v1782; // [rsp+508h] [rbp+408h] BYREF
  __int128 v1783; // [rsp+510h] [rbp+410h] BYREF
  __int128 v1784; // [rsp+520h] [rbp+420h]
  __int128 v1785; // [rsp+530h] [rbp+430h] BYREF
  __int128 v1786; // [rsp+540h] [rbp+440h]
  int v1787; // [rsp+550h] [rbp+450h] BYREF
  _DWORD v1788[3]; // [rsp+554h] [rbp+454h] BYREF
  __int16 v1789; // [rsp+562h] [rbp+462h]
  __int64 v1790; // [rsp+568h] [rbp+468h]
  int v1791; // [rsp+5C0h] [rbp+4C0h] BYREF
  _DWORD v1792[5]; // [rsp+5C4h] [rbp+4C4h] BYREF
  SIZE_T v1793; // [rsp+5D8h] [rbp+4D8h]
  int v1794; // [rsp+630h] [rbp+530h] BYREF
  char v1795[20]; // [rsp+634h] [rbp+534h] BYREF
  SIZE_T v1796; // [rsp+648h] [rbp+548h]
  int v1797; // [rsp+6A0h] [rbp+5A0h] BYREF
  _DWORD v1798[5]; // [rsp+6A4h] [rbp+5A4h] BYREF
  unsigned __int16 *v1799; // [rsp+6B8h] [rbp+5B8h]
  int v1800; // [rsp+710h] [rbp+610h] BYREF
  char v1801[20]; // [rsp+714h] [rbp+614h] BYREF
  const WCHAR *v1802; // [rsp+728h] [rbp+628h]
  int v1803; // [rsp+780h] [rbp+680h] BYREF
  _DWORD v1804[5]; // [rsp+784h] [rbp+684h] BYREF
  SIZE_T v1805; // [rsp+798h] [rbp+698h]
  int v1806; // [rsp+7F0h] [rbp+6F0h] BYREF
  char v1807[20]; // [rsp+7F4h] [rbp+6F4h] BYREF
  char *v1808; // [rsp+808h] [rbp+708h]
  int v1809; // [rsp+860h] [rbp+760h] BYREF
  _DWORD v1810[5]; // [rsp+864h] [rbp+764h] BYREF
  char *v1811; // [rsp+878h] [rbp+778h]
  int v1812; // [rsp+8D0h] [rbp+7D0h] BYREF
  char v1813[20]; // [rsp+8D4h] [rbp+7D4h] BYREF
  SIZE_T v1814; // [rsp+8E8h] [rbp+7E8h]
  int v1815; // [rsp+940h] [rbp+840h] BYREF
  int v1816; // [rsp+944h] [rbp+844h]
  void *v1817; // [rsp+948h] [rbp+848h]
  void *v1818; // [rsp+950h] [rbp+850h]
  void *v1819; // [rsp+958h] [rbp+858h]
  SIZE_T v1820; // [rsp+960h] [rbp+860h]
  void *v1821; // [rsp+968h] [rbp+868h]
  __int64 v1822; // [rsp+970h] [rbp+870h]
  int v1823; // [rsp+978h] [rbp+878h]
  __m128i v1824; // [rsp+97Ch] [rbp+87Ch] BYREF
  __m128i v1825; // [rsp+98Ch] [rbp+88Ch] BYREF
  unsigned int v1826; // [rsp+99Ch] [rbp+89Ch] BYREF
  unsigned int v1827; // [rsp+9A0h] [rbp+8A0h]
  unsigned __int32 v1828; // [rsp+9A4h] [rbp+8A4h]
  unsigned int v1829; // [rsp+9A8h] [rbp+8A8h]
  __int64 v1830; // [rsp+9B0h] [rbp+8B0h]
  unsigned __int64 v1831; // [rsp+9B8h] [rbp+8B8h]
  __int64 v1832; // [rsp+9C0h] [rbp+8C0h]
  unsigned __int64 v1833; // [rsp+9C8h] [rbp+8C8h]
  __int64 v1834; // [rsp+9D0h] [rbp+8D0h] BYREF
  unsigned __int32 v1835; // [rsp+9D8h] [rbp+8D8h]
  __int32 v1836; // [rsp+9DCh] [rbp+8DCh]
  __int128 v1837; // [rsp+9E0h] [rbp+8E0h] BYREF
  __int128 v1838; // [rsp+9F0h] [rbp+8F0h] BYREF
  __int128 v1839; // [rsp+A00h] [rbp+900h]
  __int128 v1840; // [rsp+A10h] [rbp+910h] BYREF
  __int128 v1841; // [rsp+A20h] [rbp+920h] BYREF
  _OWORD v1842[2]; // [rsp+A30h] [rbp+930h] BYREF
  __int128 v1843; // [rsp+A50h] [rbp+950h] BYREF
  __int128 v1844; // [rsp+A60h] [rbp+960h] BYREF
  __int64 v1845; // [rsp+A70h] [rbp+970h]
  __int128 v1846; // [rsp+A78h] [rbp+978h] BYREF
  __int128 v1847; // [rsp+A88h] [rbp+988h] BYREF
  __int64 v1848; // [rsp+A98h] [rbp+998h]
  __int128 v1849; // [rsp+AA0h] [rbp+9A0h] BYREF
  __int128 v1850; // [rsp+AB0h] [rbp+9B0h]
  __int64 v1851; // [rsp+AC0h] [rbp+9C0h]
  int v1852; // [rsp+AC8h] [rbp+9C8h]
  _DWORD v1853[12]; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int128 v1854; // [rsp+B00h] [rbp+A00h] BYREF
  __int128 v1855; // [rsp+B10h] [rbp+A10h]
  __int64 v1856; // [rsp+B20h] [rbp+A20h]
  int v1857; // [rsp+B28h] [rbp+A28h]
  __int128 v1858; // [rsp+B30h] [rbp+A30h] BYREF
  __int128 v1859; // [rsp+B40h] [rbp+A40h]
  __int64 v1860; // [rsp+B50h] [rbp+A50h]
  int v1861; // [rsp+B58h] [rbp+A58h]
  __int128 v1862; // [rsp+B60h] [rbp+A60h] BYREF
  __int128 v1863; // [rsp+B70h] [rbp+A70h]
  __int64 v1864; // [rsp+B80h] [rbp+A80h]
  int v1865; // [rsp+B88h] [rbp+A88h]
  _DWORD v1866[6]; // [rsp+B90h] [rbp+A90h] BYREF
  char v1867; // [rsp+BAAh] [rbp+AAAh]
  unsigned __int16 v1868[34]; // [rsp+BACh] [rbp+AACh] BYREF
  _DWORD v1869[6]; // [rsp+BF0h] [rbp+AF0h] BYREF
  char v1870; // [rsp+C0Ah] [rbp+B0Ah]
  unsigned __int16 v1871[34]; // [rsp+C0Ch] [rbp+B0Ch] BYREF
  _DWORD v1872[6]; // [rsp+C50h] [rbp+B50h] BYREF
  char v1873; // [rsp+C6Ah] [rbp+B6Ah]
  unsigned __int16 v1874[34]; // [rsp+C6Ch] [rbp+B6Ch] BYREF
  _BYTE v1875[68]; // [rsp+CB0h] [rbp+BB0h] BYREF
  __int16 v1876; // [rsp+CF4h] [rbp+BF4h]
  unsigned __int16 v1877; // [rsp+D56h] [rbp+C56h]
  __int64 v1878; // [rsp+D5Ch] [rbp+C5Ch]
  _OWORD v1879[3]; // [rsp+D90h] [rbp+C90h] BYREF
  int v1880; // [rsp+DC0h] [rbp+CC0h] BYREF
  __int128 v1881; // [rsp+DC8h] [rbp+CC8h]
  __int128 v1882; // [rsp+DD8h] [rbp+CD8h]
  __int128 v1883; // [rsp+DE8h] [rbp+CE8h]
  __int64 v1884; // [rsp+DF8h] [rbp+CF8h]
  __int64 v1885; // [rsp+E00h] [rbp+D00h] BYREF
  char v1886[152]; // [rsp+E08h] [rbp+D08h] BYREF
  _QWORD v1887[2]; // [rsp+EA0h] [rbp+DA0h]
  _BYTE v1888[176]; // [rsp+EB0h] [rbp+DB0h] BYREF
  WCHAR Filename[264]; // [rsp+F60h] [rbp+E60h] BYREF

  if ( dword_18089DDF0 <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                    + 16LL) )
    return byte_18089DE08;
  Init_thread_header(&dword_18089DDF0);
  if ( dword_18089DDF0 != -1 )
    return byte_18089DE08;
  v0 = 0LL;
  v1887[0] = 0LL;
  v1657 = 0;
  v1 = 1;
  v1658 = 0;
  v1549 = 0;
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v2 = dword_18089D72C;
  v1655 = -1;
  if ( !dword_18089D72C )
  {
    v1554 = 0;
    v3 = MemoryAlloc(0x338uLL);
    if ( !v3 )
      goto LABEL_13;
    v4 = 0;
    v5 = v3 + 7;
    v6 = -1;
    v7 = (unsigned __int8 *)&unk_1807573B2;
    v8 = 0;
    v9 = 103LL;
    v10 = 0;
    do
    {
      v11 = *(v7 - 1) | (*(v7 - 2) << 8);
      v12 = v7[2] << 8;
      v13 = *v7;
      v7 += 8;
      v14 = *(v7 - 7) | ((v13 | (v11 << 8)) << 8);
      v15 = v14 ^ v10;
      v16 = *(v7 - 3) | ((*(v7 - 4) | ((*(v7 - 5) | v12) << 8)) << 8);
      v17 = v15 ^ v16 ^ v8 ^ 0xAC987321;
      v18 = (__ROR4__(v17, 22) + 4991 * __ROR4__(v17 + 1419157410, 27)) ^ v15;
      v19 = (43881 * __ROR4__(v18 + 133239679, 9) - __ROR4__(v18, 30)) ^ v17;
      v20 = (24670 * v19 - (v19 >> 13) - 123127970) ^ v18;
      v21 = (2033 * __ROR4__(v20 ^ 0xAB69, 26) - __ROR4__(v20, 30)) ^ v19;
      v22 = (133239679 - (v21 ^ 0xAB69605E)) ^ v20;
      v23 = (43881 * (v22 ^ 0x137F)) ^ __ROR4__(v22, 6) ^ v21;
      v24 = (__ROR4__(v23, 30) + 24670 * __ROR4__(v23 + 133239679, 15)) ^ v22;
      v25 = (2033 * __ROR4__(v24 + 1419157410, 14) - __ROR4__(v24, 24)) ^ v23;
      v26 = __ROR4__(v25, 10) ^ (4991 * __ROR4__(v25 ^ 0xAB69605E, 12)) ^ v24;
      v27 = v25 ^ (v26 >> 10) ^ (43881 * (v26 ^ 0x7F1));
      v28 = (2033 * (__ROR4__(~v27, 5) + 24670)) ^ v26;
      v29 = v27 ^ (v28 - 2033) ^ 0xAB69605E;
      v30 = ((v29 >> 2) + 4991 * __ROR4__(v27 ^ (v28 - 2033) ^ 0xAB6967AF, 30)) ^ v28;
      v31 = (__ROR4__(v30, 25) + 43881 * __ROR4__(v30 - 133239679, 6)) ^ v29;
      v32 = (24670 * (v31 ^ 0x137F) + __ROR4__(v31, 9)) ^ v30;
      v33 = (__ROR4__(v32, 25) + 2033 * __ROR4__(v32 ^ 0xAB69, 27)) ^ v31;
      v34 = v32 ^ v33 ^ 0xAC987321;
      v35 = (4991 * __ROR4__(v34, 3) - 219010071) ^ v33;
      v36 = (24670 * __ROR4__(v35 - 133239679, 1) - __ROR4__(v35, 6)) ^ v34;
      v37 = (__ROR4__(v36, 18) + 2033 * __ROR4__(v36 - 1419157410, 29)) ^ v35;
      v38 = (4991 * __ROR4__(v37 - 1419157410, 17) - __ROR4__(v37, 14)) ^ v36;
      v39 = (v38 >> 3) ^ (43881 * (v38 ^ 0x605E)) ^ v37;
      v40 = 24670 * __ROR4__(v39 ^ 0x7F1137F, 28);
      v41 = __ROR4__(v39, 30);
      v8 = v6 ^ v39;
      v6 = v16;
      v10 = v4 ^ v38 ^ v41 ^ v40;
      *(v5 - 4) = v10;
      *v5 = v8;
      v5 += 8;
      *(v5 - 13) = BYTE1(v10);
      *(v5 - 9) = BYTE1(v8);
      *(v5 - 14) = (unsigned __int16)(v10 >> 8) >> 8;
      *(v5 - 10) = (unsigned __int16)(v8 >> 8) >> 8;
      *(v5 - 15) = __ROR4__((((v10 >> 8) | (v10 << 24)) >> 8) | (((v10 >> 8) | (v10 << 24)) << 24), 8);
      v4 = v14;
      *(v5 - 11) = __ROR4__((((v8 >> 8) | (v8 << 24)) >> 8) | (((v8 >> 8) | (v8 << 24)) << 24), 8);
      --v9;
    }
    while ( v9 );
    v42 = 0LL;
    v43 = 0;
    v0 = 0LL;
    v44 = 0;
    do
      v43 ^= v3[v42++];
    while ( v42 < 0x338 );
    if ( v43 != 64LL )
    {
      MemoryFree(v3);
LABEL_13:
      v45 = 4LL;
      v46 = (HMODULE *)&unk_180899E50;
      do
      {
        if ( *v46 )
          FreeLibrary(*v46);
        v46 += 3;
        --v45;
      }
      while ( v45 );
      memset_0(&unk_180899E50, 0, 0x60uLL);
      v47 = 2LL;
      v48 = off_180891340;
      v49 = off_1806EF510;
      do
      {
        v50 = *((_OWORD *)v49 + 1);
        *(_OWORD *)v48 = *(_OWORD *)v49;
        v51 = *((_OWORD *)v49 + 2);
        *((_OWORD *)v48 + 1) = v50;
        v52 = *((_OWORD *)v49 + 3);
        *((_OWORD *)v48 + 2) = v51;
        v53 = *((_OWORD *)v49 + 4);
        *((_OWORD *)v48 + 3) = v52;
        v54 = *((_OWORD *)v49 + 5);
        *((_OWORD *)v48 + 4) = v53;
        v55 = *((_OWORD *)v49 + 6);
        *((_OWORD *)v48 + 5) = v54;
        v56 = *((_OWORD *)v49 + 7);
        v49 += 16;
        *((_OWORD *)v48 + 6) = v55;
        v48 += 16;
        *((_OWORD *)v48 - 1) = v56;
        --v47;
      }
      while ( v47 );
      v57 = *((_OWORD *)v49 + 1);
      *(_OWORD *)v48 = *(_OWORD *)v49;
      v58 = *((_OWORD *)v49 + 2);
      *((_OWORD *)v48 + 1) = v57;
      v59 = *((_OWORD *)v49 + 3);
      *((_OWORD *)v48 + 2) = v58;
      v60 = *((_OWORD *)v49 + 4);
      *((_OWORD *)v48 + 3) = v59;
      v61 = *((_OWORD *)v49 + 5);
      *((_OWORD *)v48 + 4) = v60;
      v62 = *((_OWORD *)v49 + 6);
      *((_OWORD *)v48 + 5) = v61;
      *((_OWORD *)v48 + 6) = v62;
      goto LABEL_46;
    }
    v3[823] = 0;
    memset_0(&unk_180899E50, 0, 0x60uLL);
    lpMem = v3;
    v63 = 0;
    while ( *v3 )
    {
      v64 = -1LL;
      v65 = (const WCHAR *)v3;
      v66 = 0;
      do
        ++v64;
      while ( *(_WORD *)&v3[2 * v64] );
      v67 = &v3[2 * v64];
      v68 = (char *)&unk_180899E50 + 24 * v63;
      if ( !GetModuleHandleExW(0, v65, (HMODULE *)v68) )
      {
        v44 = -1073741702;
        break;
      }
      v44 = 0;
      if ( **(_WORD **)v68 == 23117
        && (v69 = *(int *)(*(_QWORD *)v68 + 60LL), (unsigned int)v69 < 0x10000000)
        && (v70 = *(_QWORD *)v68 + v69, v70 >= *(_QWORD *)v68)
        && *(_DWORD *)v70 == 17744 )
      {
        if ( ((*(_WORD *)(v70 + 24) - 267) & 0xFEFF) != 0 )
        {
          v44 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v68 + 12) = *(_QWORD *)(v70 + 136);
          *((_DWORD *)v68 + 2) = *(_DWORD *)(v70 + 80);
        }
      }
      else
      {
        v44 = -1073741701;
      }
      v71 = *(_DWORD *)(v67 + 2);
      v3 = v67 + 6;
      v1585 = v71;
      while ( v66 < v71 )
      {
        v72 = v3;
        v73 = -1LL;
        do
          ++v73;
        while ( v3[v73] );
        v3 += v73 + 1;
        if ( v44 >= 0 )
        {
          ProcAddress = GetProcAddress(*(HMODULE *)v68, v72);
          if ( !ProcAddress )
            goto LABEL_43;
          off_180891340[v1554] = ProcAddress;
        }
        ++v1554;
        v71 = v1585;
        ++v66;
      }
      ++v63;
    }
LABEL_43:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    if ( v44 < 0 )
      goto LABEL_13;
    v2 = dword_18089D72C;
  }
  dword_18089D72C = v2 + 1;
LABEL_46:
  _InterlockedExchange(&dword_18089D738, 0);
  v76 = 0LL;
  v77 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_92;
  v79 = off_180891450[0]();
  if ( !v79 )
  {
    GetLastError();
    goto LABEL_99;
  }
  v1659 = 0;
  v80 = 0LL;
  for ( i = 0LL; ; i = v1659 )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180891470[0])(
           v79,
           2LL,
           v80,
           i,
           &v1659) )
    {
      v76 = v80;
      v82 = off_180891468[0];
      CurrentThreadId = GetCurrentThreadId();
      v84 = ((__int64 (__fastcall *)(_QWORD))v82)(CurrentThreadId);
      lpMema = (LPVOID)v84;
      if ( !v84 )
      {
        LastError = GetLastError();
        v85 = LastError < 0;
        if ( LastError > 0 )
        {
          LastError = (unsigned __int16)LastError | 0x80070000;
          v85 = LastError < 0;
        }
        if ( !v85 )
          LastError = -2147467259;
        goto LABEL_96;
      }
      v1660 = 0;
      v86 = 0LL;
      v87 = 0LL;
      while ( !((unsigned int (__fastcall *)(__int64, __int64, void *, __int64, unsigned int *))off_180891470[0])(
                 v84,
                 2LL,
                 v86,
                 v87,
                 &v1660) )
      {
        LastError = GetLastError();
        if ( LastError != 122 )
        {
          if ( LastError )
          {
            if ( LastError > 0 )
              LastError = (unsigned __int16)LastError | 0x80070000;
          }
          else
          {
            LastError = -2147467259;
          }
          if ( v86 )
            goto LABEL_77;
          goto LABEL_96;
        }
        if ( v86 )
        {
          LastError = -2147467259;
LABEL_77:
          MemoryFree(v86);
          goto LABEL_96;
        }
        v86 = MemoryAlloc(v1660);
        if ( !v86 )
        {
          LastError = -2147024882;
          goto LABEL_96;
        }
        v87 = v1660;
        v84 = (__int64)lpMema;
      }
      v77 = v86;
      LastError = 0;
      if ( !v76 )
      {
        v88 = 0;
        goto LABEL_94;
      }
      if ( !wcscmp_0(v76, L"WinSta0") )
      {
        v88 = 0;
        if ( !v86 )
          goto LABEL_94;
        if ( !wcscmp_0((const wchar_t *)v86, L"Default") )
        {
          v1661 = 0;
          CurrentProcess = GetCurrentProcess();
          if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1661) )
          {
            LastError = GetLastError();
            v90 = LastError < 0;
            if ( LastError > 0 )
            {
              LastError = (unsigned __int16)LastError | 0x80070000;
              v90 = LastError < 0;
            }
            if ( !v90 )
              LastError = -2147467259;
            goto LABEL_95;
          }
          if ( (v1661 & 0xF) == 0 )
          {
            v88 = 1;
            goto LABEL_94;
          }
        }
        v88 = 0;
        goto LABEL_94;
      }
LABEL_92:
      v88 = 0;
LABEL_94:
      v1549 = v88;
      if ( !v77 )
      {
LABEL_96:
        if ( v76 )
          MemoryFree(v76);
        if ( LastError < 0 )
          goto LABEL_99;
        goto LABEL_100;
      }
LABEL_95:
      MemoryFree(v77);
      goto LABEL_96;
    }
    if ( GetLastError() != 122 )
      break;
    if ( v80 )
      goto LABEL_57;
    v80 = (wchar_t *)MemoryAlloc(v1659);
    if ( !v80 )
      goto LABEL_99;
  }
  if ( v80 )
LABEL_57:
    MemoryFree(v80);
LABEL_99:
  v1549 = 0;
LABEL_100:
  v91 = 4LL;
  hMem = LocalAlloc(0x40u, 4uLL);
  if ( !hMem )
  {
    v92 = 0LL;
    v93 = -2147024882;
    v94 = 0;
LABEL_1625:
    LODWORD(v465) = 0;
    goto LABEL_1626;
  }
  v95 = 0LL;
  v1662 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v1768 = 0LL;
  v96 = GetProcessHeap();
  v97 = HeapAlloc(v96, 8u, 0xA0uLL);
  v1656 = 56;
  v98 = v97;
  lpMemb = 3LL;
  v93 = -1073741801;
  if ( !v97 )
  {
    v1651 = -1073741801;
    v98 = 0LL;
    goto LABEL_601;
  }
  *v97 = xmmword_180897FA0[0];
  v97[1] = xmmword_180897FA0[1];
  v97[2] = xmmword_180897FA0[2];
  v97[3] = xmmword_180897FA0[3];
  v97[4] = xmmword_180897FA0[4];
  v97[5] = xmmword_180897FA0[5];
  v97[6] = xmmword_180897FA0[6];
  v97[7] = xmmword_180897FA0[7];
  v97[8] = xmmword_180897FA0[8];
  v97[9] = xmmword_180897FA0[9];
  v99 = GetProcessHeap();
  v95 = HeapAlloc(v99, 8u, 8uLL);
  if ( !v95 )
  {
    v1651 = -1073741801;
    v95 = 0LL;
    goto LABEL_601;
  }
  *v95 = qword_180897F90;
  lpModuleName = (LPCWSTR)__rdtsc();
  v1663 = 0;
  v100 = RtlUIntAdd(4LL, 4LL, &v1663);
  v93 = v100;
  v1651 = v100;
  if ( v100 >= 0 )
  {
    v1664 = 0;
    v93 = RtlUIntAdd(v101, 160LL, &v1664);
    v1651 = v93;
    if ( v93 >= 0 )
    {
      v105 = -1;
      v106 = v103 + v1664;
      if ( v103 + v1664 >= v103 )
        v105 = v103 + v1664;
      v93 = v106 < v103 ? -805306219 : 0x10000000;
      v1651 = v93;
      if ( v106 < v103 )
        goto LABEL_597;
      v1665 = 0;
      v93 = RtlUIntAdd(v104, v102, &v1665);
      v1651 = v93;
      if ( v93 < 0 )
        goto LABEL_601;
      v93 = v105 + v1665 < v105 ? -805306219 : 0x10000000;
      v1651 = v93;
      if ( v105 + v1665 < v105 )
        goto LABEL_597;
      v1666 = 0;
      v1651 = RtlUIntAdd(v107, 8LL, &v1666);
      v93 = v1651;
      if ( v1651 < 0 )
        goto LABEL_601;
      v93 = v109 + v1666 < v109 ? -805306219 : 0x10000000;
      v1651 = v93;
      if ( v109 + v1666 < v109 )
        goto LABEL_597;
      pcchLength[0] = 0LL;
      if ( StringLengthWorkerW(L"Shell-WindowTabHost-Enabled", v108, pcchLength) < 0 )
      {
        pcchLength[0] = 0LL;
        goto LABEL_174;
      }
      v1667 = 0;
      ++pcchLength[0];
      v93 = RtlUIntAdd(4LL, (unsigned int)(2 * LODWORD(pcchLength[0])), &v1667);
      v1651 = v93;
      if ( v93 < 0 )
        goto LABEL_601;
      v93 = v111 + v1667 < v111 ? -805306219 : 0x10000000;
      v1651 = v93;
      if ( v111 + v1667 < v111 )
        goto LABEL_597;
      v1668 = 0;
      v93 = RtlUIntAdd(v110, (unsigned int)v110, &v1668);
      v1651 = v93;
      if ( v93 < 0 )
        goto LABEL_601;
      v115 = v113;
      v116 = v112 + v1668;
      if ( v112 + v1668 >= v112 )
        v115 = v112 + v1668;
      v93 = v116 < v112 ? -805306219 : 0x10000000;
      v1651 = v93;
      if ( v116 < v112 )
        goto LABEL_597;
      v1669 = 0;
      v1651 = RtlUIntAdd(v114, v114, &v1669);
      v93 = v1651;
      if ( v1651 < 0 )
        goto LABEL_601;
      v118 = v117;
      v119 = v115 + v1669;
      if ( v115 + v1669 >= v115 )
        v118 = v115 + v1669;
      v93 = v119 < v115 ? -805306219 : 0x10000000;
      v1651 = v93;
      if ( v119 < v115 )
      {
LABEL_597:
        if ( v93 < 0 )
          goto LABEL_601;
        goto LABEL_598;
      }
      HIDWORD(Src[0]) = v118;
      v120 = v118;
      v121 = GetProcessHeap();
      v122 = HeapAlloc(v121, 8u, v120);
      if ( !v122 )
      {
        v93 = -1073741801;
        goto LABEL_340;
      }
      Src[1] = v122;
      LODWORD(Src[0]) = 0;
      LODWORD(v1770[0]) = 0;
      v1769 = 0LL;
      pcchLength[1] = (size_t)v122;
      v1526 = (SIZE_T)v95;
      v1420 = (SIZE_T)v98;
      v93 = RtlULongLongAdd(v122, 4LL, v1770);
      v1651 = v93;
      if ( v93 < 0 )
        goto LABEL_601;
      if ( v124 + 2 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
        goto LABEL_589;
      v125 = (_DWORD *)v1770[0];
      *v124 = 4;
      *v125 = 0;
      v126 = 0;
      v127 = LODWORD(Src[0]) + 1;
      LODWORD(v1771[0]) = 0;
      ++LODWORD(Src[0]);
      v1770[1] = 0LL;
      if ( v98 )
      {
        if ( v123 )
          goto LABEL_135;
        goto LABEL_560;
      }
      if ( v123 )
      {
LABEL_560:
        v93 = -1073741811;
        goto LABEL_340;
      }
LABEL_135:
      if ( !Src[1] )
      {
        v1670 = 0;
        v1651 = RtlUIntAdd(4LL, v123, &v1670);
        v93 = v1651;
        if ( v1651 >= 0 )
        {
          v128 = RtlUIntAdd(HIDWORD(Src[0]), v1670, (char *)Src + 4);
          v129 = (int)Src[0];
          v93 = v128;
          v1651 = v128;
          if ( v128 >= 0 )
            goto LABEL_138;
        }
        goto LABEL_601;
      }
      v132 = (unsigned int *)Src[1];
      v1722 = (unsigned int *)Src[1];
      while ( 1 )
      {
        v1453 = v126;
        if ( v126 >= v127 )
          break;
        v133 = *v132;
        v1671 = 0;
        v1651 = RtlUIntAdd(4LL, v133, &v1671);
        v93 = v1651;
        if ( v1651 < 0 )
          goto LABEL_601;
        v1651 = RtlULongLongAdd(v134, v1671, &v1722);
        v93 = v1651;
        if ( v1651 < 0 )
          goto LABEL_601;
        v132 = v1722;
        v126 = v1453 + 1;
      }
      v93 = RtlULongLongAdd(v132, 4LL, v1771);
      v1651 = v93;
      if ( v93 < 0 )
        goto LABEL_601;
      if ( (char *)v136 + v135 + 4 > (char *)Src[1] + HIDWORD(Src[0]) )
        goto LABEL_589;
      *v136 = v135;
      if ( v98 )
        memcpy_0(v1771[0], v98, v135);
      v129 = (int)Src[0];
LABEL_138:
      v130 = 0;
      v131 = v129 + 1;
      LODWORD(v1772[0]) = 0;
      v1771[1] = 0LL;
      LODWORD(Src[0]) = v131;
      if ( Src[1] )
      {
        v141 = (unsigned int *)Src[1];
        v1723 = (unsigned int *)Src[1];
        while ( 1 )
        {
          v1454 = v130;
          if ( v130 >= v131 )
            break;
          v142 = *v141;
          v1673 = 0;
          v1651 = RtlUIntAdd(4LL, v142, &v1673);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v1651 = RtlULongLongAdd(v143, v1673, &v1723);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v141 = v1723;
          v130 = v1454 + 1;
        }
        v93 = RtlULongLongAdd(v141, 4LL, v1772);
        v1651 = v93;
        if ( v93 < 0 )
          goto LABEL_601;
        if ( (char *)v145 + v144 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
        {
          *v145 = v144;
          memcpy_0(v1772[0], v95, v144);
          v138 = (int)Src[0];
          goto LABEL_152;
        }
        goto LABEL_589;
      }
      v1672 = 0;
      v1651 = RtlUIntAdd(4LL, 8LL, &v1672);
      v93 = v1651;
      if ( v1651 < 0 )
        goto LABEL_601;
      v137 = RtlUIntAdd(HIDWORD(Src[0]), v1672, (char *)Src + 4);
      v138 = (int)Src[0];
      v93 = v137;
      v1651 = v137;
      if ( v137 < 0 )
        goto LABEL_601;
LABEL_152:
      v139 = v138 + 1;
      LODWORD(v1773[0]) = 0;
      v1772[1] = 0LL;
      LODWORD(Src[0]) = v139;
      if ( Src[1] )
      {
        v146 = (unsigned int *)Src[1];
        v147 = 0;
        v1724 = (unsigned int *)Src[1];
        while ( v147 < v139 )
        {
          v148 = *v146;
          v1675 = 0;
          v1651 = RtlUIntAdd(4LL, v148, &v1675);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v93 = RtlULongLongAdd(v149, v1675, &v1724);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          v146 = v1724;
          v147 = v150 + 1;
        }
        v93 = RtlULongLongAdd(v146, 4LL, v1773);
        v1651 = v93;
        if ( v93 < 0 )
          goto LABEL_601;
        if ( v151 + 3 <= (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
        {
          v152 = (LPCWSTR *)v1773[0];
          *v151 = 8;
          *v152 = lpModuleName;
          ++LODWORD(Src[0]);
          goto LABEL_172;
        }
        goto LABEL_589;
      }
      v1674 = 0;
      v1651 = RtlUIntAdd(4LL, 8LL, &v1674);
      v93 = v1651;
      if ( v1651 < 0 )
        goto LABEL_601;
      v93 = RtlUIntAdd(HIDWORD(Src[0]), v1674, (char *)Src + 4);
      v1651 = v93;
      if ( v93 < 0 )
        goto LABEL_601;
      ++LODWORD(Src[0]);
LABEL_172:
      v1754 = 0LL;
      if ( StringLengthWorkerW(L"Shell-WindowTabHost-Enabled", v140, &v1754) < 0 )
      {
        v1754 = 0LL;
LABEL_174:
        v93 = -1073741762;
        goto LABEL_340;
      }
      v1651 = RtlULongLongAdd(v1754, 1LL, &v1754);
      v93 = v1651;
      if ( v1651 < 0 )
        goto LABEL_601;
      LODWORD(v1774[0]) = 0;
      v1773[1] = 0LL;
      if ( 2 * (_DWORD)v1754 )
      {
        if ( !Src[1] )
        {
          v1676 = 0;
          v1651 = RtlUIntAdd(v153, (unsigned int)(2 * v1754), &v1676);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v93 = RtlUIntAdd(HIDWORD(Src[0]), v1676, (char *)Src + 4);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          ++LODWORD(Src[0]);
          v93 = 0;
          v1651 = 0;
LABEL_192:
          if ( v93 < 0 )
            goto LABEL_601;
          LODWORD(v1775[0]) = 0;
          v1774[1] = 0LL;
          v162 = 4LL;
          if ( Src[1] )
          {
            v165 = (unsigned int *)Src[1];
            v166 = 0;
            v1751 = (unsigned int *)Src[1];
            while ( v166 < LODWORD(Src[0]) )
            {
              v167 = *v165;
              v1679 = 0;
              v1651 = RtlUIntAdd((unsigned int)v162, v167, &v1679);
              v93 = v1651;
              if ( v1651 < 0 )
                goto LABEL_601;
              v93 = RtlULongLongAdd(v168, v1679, &v1751);
              v1651 = v93;
              if ( v93 < 0 )
                goto LABEL_601;
              v165 = v1751;
              v166 = v169 + 1;
            }
            v93 = RtlULongLongAdd(v165, v162, v1775);
            v1651 = v93;
            if ( v93 < 0 )
              goto LABEL_601;
            if ( v170 + 2 <= (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
            {
              v171 = (int *)v1775[0];
              *v170 = v163;
              *v171 = v1549;
              goto LABEL_196;
            }
            goto LABEL_589;
          }
          v1678 = 0;
          v1651 = RtlUIntAdd(4LL, 4LL, &v1678);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v1651 = RtlUIntAdd(HIDWORD(Src[0]), v1678, (char *)Src + 4);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
LABEL_196:
          ++LODWORD(Src[0]);
          LODWORD(v1776) = 0;
          v1775[1] = 0LL;
          if ( Src[1] )
          {
            v172 = (unsigned int *)Src[1];
            v173 = 0;
            v1726 = (unsigned int *)Src[1];
            while ( v173 < LODWORD(Src[0]) )
            {
              v174 = *v172;
              v1681 = 0;
              v1651 = RtlUIntAdd((unsigned int)v163, v174, &v1681);
              v93 = v1651;
              if ( v1651 < 0 )
                goto LABEL_601;
              v93 = RtlULongLongAdd(v175, v1681, &v1726);
              v1651 = v93;
              if ( v93 < 0 )
                goto LABEL_601;
              v172 = v1726;
              v173 = v176 + 1;
            }
            v93 = RtlULongLongAdd(v172, v163, &v1776);
            v1651 = v93;
            if ( v93 < 0 )
              goto LABEL_601;
            if ( v177 + 2 <= (unsigned int *)((char *)Src[1] + HIDWORD(Src[0])) )
            {
              v178 = v1776;
              *v177 = v164;
              *v178 = v164;
              ++LODWORD(Src[0]);
              goto LABEL_216;
            }
            goto LABEL_589;
          }
          v1680 = 0;
          v1651 = RtlUIntAdd((unsigned int)v163, (unsigned int)v163, &v1680);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v93 = RtlUIntAdd(HIDWORD(Src[0]), v1680, (char *)Src + 4);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          ++LODWORD(Src[0]);
LABEL_216:
          v1682 = 0;
          v93 = RtlUIntAdd(v164, v164, &v1682);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          v1683 = v1682;
          v1684 = 0;
          v1651 = RtlUIntAdd(v179, 8LL, &v1684);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v93 = RtlUIntAdd(v180, v1684, &v1683);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          v1685 = 0;
          v1651 = RtlUIntAdd(v181, v181, &v1685);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v93 = RtlUIntAdd(v1683, v1685, &v1683);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          v1686 = 0;
          v1651 = RtlUIntAdd(v182, v182, &v1686);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v93 = RtlUIntAdd(v1683, v1686, &v1683);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          v1687 = 0;
          v1651 = RtlUIntAdd(v183, v183, &v1687);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v93 = RtlUIntAdd(v1683, v1687, &v1683);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          v1688 = 0;
          v1651 = RtlUIntAdd(v184, v184, &v1688);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v93 = RtlUIntAdd(v1683, v1688, &v1683);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          v1586 = v1683;
          v1608 = 0LL;
          v1455 = 0;
          v1617 = 0LL;
          v1633 = 0LL;
          v1560 = 0;
          v1601 = 0LL;
          v1555 = 0;
          v1641 = 0LL;
          v1537 = 0LL;
          v1487 = __rdtsc();
          v1689 = 8;
          v186 = RtlUIntAdd(8LL, HIDWORD(Src[0]), &v1689);
          if ( v186 >= 0 )
          {
            v187 = (v1689 + 7) & 0xFFFFFFF8;
            if ( v187 < v1689 )
            {
              v93 = -805306219;
LABEL_340:
              v1651 = v93;
              goto LABEL_601;
            }
            v1689 = (v1689 + 7) & 0xFFFFFFF8;
            v188 = v187;
            v189 = GetProcessHeap();
            v190 = (char *)HeapAlloc(v189, 8u, v188);
            v191 = v190;
            if ( v190 )
            {
              *(_DWORD *)v190 = Src[0];
              v1725 = v190;
              v186 = RtlULongLongAdd(v190, 4LL, &v1725);
              if ( v186 >= 0 )
              {
                v193 = v1725;
                *(_DWORD *)v1725 = HIDWORD(Src[0]);
                v186 = RtlULongLongAdd(v193, v192, &v1725);
                if ( v186 >= 0 )
                {
                  *(_QWORD *)&v191[v1689 - 8] = v1487;
                  memcpy_0(v1725, Src[1], HIDWORD(Src[0]));
                  v185 = v1689;
                  v1455 = v1689;
                  v1608 = (unsigned __int8 *)v191;
                  goto LABEL_237;
                }
              }
              v194 = GetProcessHeap();
              HeapFree(v194, 0, v191);
            }
            else
            {
              v186 = -1073741801;
            }
            v185 = 0;
LABEL_237:
            v1526 = (SIZE_T)v95;
            v1420 = (SIZE_T)v98;
          }
          v93 = v186 | 0x10000000;
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_312;
          if ( !v1608 )
          {
            v93 = -805306355;
            goto LABEL_340;
          }
          v1403 = v185;
          if ( !v185 || (dwBytes = v185 + 8, v195 = (char *)MemoryAlloc(v185 + 8LL), Size = v195, v196 = 0, !v195) )
          {
            v93 = -805306367;
            v1651 = -805306367;
            goto LABEL_314;
          }
          v1352 = 0;
          v197 = 0LL;
          if ( v1455 )
          {
            do
              v196 ^= v1608[v197++];
            while ( v197 < v1455 );
            v1352 = v196;
          }
          v198 = v195;
          v1652 = 0;
          v199 = 0;
          v1571 = 0;
          v200 = -1;
          v1833 = 0xC81ECB17B1B54A58uLL;
          v1514 = v198;
          v201 = v1608;
          v202 = v1455 & 7;
          if ( (v1455 & 7) != 0 )
          {
            v1572 = 0;
            v203 = 0;
            v1653 = 0;
            v204 = 56;
            for ( j = 56; ; v204 = j )
            {
              v205 = *v201++;
              if ( v1653 >= 4 )
              {
                v207 = v205 << v204;
                v206 = v1572;
                v203 |= v207;
              }
              else
              {
                v206 = (v205 << (v204 - 32)) | v1572;
                v1572 = v206;
              }
              j -= 8;
              if ( (int)++v1653 >= v202 )
                break;
            }
            v199 = v206 ^ 0xB17A307A;
            v208 = v203;
            v209 = v203 ^ 0x42F6B18D;
            v210 = v206 ^ 0xB17A307A;
            v211 = 0;
            v1489 = 0;
            v212 = v209;
            do
            {
              v1571 = v206;
              v1354 = v1514 + 1;
              if ( v211 >= 4 )
              {
                v212 = (v212 << 8) | HIBYTE(v212);
                v213 = v212;
              }
              else
              {
                v210 = (v210 << 8) | HIBYTE(v210);
                v213 = v210;
              }
              *v1514 = v213;
              v211 = v1489 + 1;
              ++v1514;
              v1489 = v211;
            }
            while ( v211 < v202 );
            v198 = v1354;
            v196 = v1352;
            v1652 = v208;
            v0 = (int *)v1887[0];
            v1420 = (SIZE_T)v98;
            v1526 = (SIZE_T)v95;
            if ( (unsigned int)v202 > 4 )
            {
              v200 = v209 >> (8 * (8 - v202)) << (8 * (8 - v202));
              goto LABEL_262;
            }
            v200 = 0;
            if ( (unsigned int)v202 < 4 )
            {
              v199 = v199 >> (8 * (4 - v202)) << (8 * (4 - v202));
LABEL_262:
              v198 = v1354;
            }
          }
          v214 = v1455;
          if ( (unsigned __int64)v1455 >> 3 )
          {
            v215 = v198 + 7;
            v216 = HIDWORD(v1833);
            v217 = v201 + 2;
            v218 = v1571;
            v219 = v1652;
            v1490 = WORD1(v1833);
            v220 = WORD2(v1833);
            v221 = (unsigned __int64)v1455 >> 3;
            while ( 1 )
            {
              v222 = v217[1] | ((*v217 | ((*(v217 - 1) | (*(v217 - 2) << 8)) << 8)) << 8);
              v223 = v217[5] | ((v217[4] | ((v217[3] | (v217[2] << 8)) << 8)) << 8);
              v224 = v223 ^ v200;
              v225 = v222 ^ v216 ^ (v224 - 19032) ^ v199;
              v226 = (__ROR4__(v225, 7) + WORD1(v1833) * __ROR4__(v216 ^ v225, 15)) ^ v224;
              v227 = (v220 * __ROR4__(v226 - 1313519016, 9) - __ROR4__(v226, 10)) ^ v225;
              v228 = (__ROR4__(v227, 27) + HIWORD(v1833) * __ROR4__(v227 ^ v220, 28)) ^ v226;
              v229 = (v216 - (v228 ^ 0xB1B54A58)) ^ v227;
              v230 = (WORD1(v1833) * (v229 - 19032) - (v229 >> 6)) ^ v228;
              v231 = (19032 * (v220 ^ __ROR4__(v230, 15))) ^ v229;
              v232 = (v220 * (HIWORD(v1833) + __ROR4__(~v231, 3))) ^ v230;
              v233 = (v232 - v216 - 19032) ^ v231;
              v234 = (v1490 * (v233 ^ HIWORD(v1833))) ^ __ROR4__(v233, 10) ^ v232;
              v235 = __ROR4__(v234, 3) ^ (v220 * __ROR4__(v234 ^ 0x4A58, 26)) ^ v233;
              v236 = (19032 * (__ROR4__(v235, 15) - HIWORD(v1833))) ^ v234;
              v237 = (v236 >> 15) ^ (19032 * ((8 * (v236 - v220)) | ((v236 - v220) >> 29))) ^ (v236 >> 1) ^ (19032 * (v236 ^ HIWORD(v1833))) ^ v235;
              v238 = (WORD1(v1833) * (v237 - v220) - (v237 >> 13)) ^ v236;
              v239 = __ROR4__(v238, 11) ^ (v220 * __ROR4__(-1313519016 - v238, 9)) ^ v237;
              v240 = (v239 + 1313519016 - HIWORD(v1833)) ^ v238;
              v241 = (19032 * (v240 ^ WORD1(v1833)) - __ROR4__(v240, 7)) ^ v239;
              v242 = (WORD1(v1833) * __ROR4__(v241 ^ HIWORD(v1833), 28) - __ROR4__(v241, 16)) ^ v240;
              v243 = (__ROR4__(v242, 4) + v220 * __ROR4__(-1313519016 - v242, 10)) ^ v241;
              v244 = __ROR4__(v243, 9) ^ (HIWORD(v1833) * __ROR4__(v243 + 1313519016, 4)) ^ v242;
              v245 = (19032 * __ROR4__(v244 ^ v216, 24) - __ROR4__(v244, 30)) ^ v243;
              v246 = (WORD1(v1833) * __ROR4__(v216 - v245, 11) - __ROR4__(v245, 12)) ^ v244;
              v247 = (v246 >> 8) ^ (v220 * (WORD1(v1833) ^ v246)) ^ v245;
              v248 = v247 ^ v216 ^ 0xB1B54A58 ^ v246;
              v199 = v218 ^ v247;
              v200 = v219 ^ v248;
              *(v215 - 4) = v199;
              *v215 = v200;
              v215 += 8;
              v218 = v222;
              v219 = v223;
              *(v215 - 13) = BYTE1(v199);
              *(v215 - 9) = BYTE1(v200);
              v217 += 8;
              *(v215 - 14) = (unsigned __int16)(v199 >> 8) >> 8;
              *(v215 - 10) = (unsigned __int16)(v200 >> 8) >> 8;
              *(v215 - 15) = __ROR4__((((v199 >> 8) | (v199 << 24)) >> 8) | (((v199 >> 8) | (v199 << 24)) << 24), 8);
              *(v215 - 11) = __ROR4__((((v200 >> 8) | (v200 << 24)) >> 8) | (((v200 >> 8) | (v200 << 24)) << 24), 8);
              if ( !--v221 )
                break;
              v216 = HIDWORD(v1833);
            }
            v196 = v1352;
            v0 = (int *)v1887[0];
            v95 = (_QWORD *)v1526;
            v98 = (void *)v1420;
            v214 = v1403;
          }
          *(_QWORD *)&Size[v214] = v196;
          v249 = GetProcessHeap();
          v250 = (unsigned int *)HeapAlloc(v249, 8u, 0x30uLL);
          v251 = 0LL;
          if ( v250 )
            v251 = v250;
          v1515 = (size_t)v251;
          v252 = v250 == 0LL ? 0xC0000017 : 0;
          if ( v250 )
          {
            *v251 = dwBytes;
            v253 = GetProcessHeap();
            v254 = HeapAlloc(v253, 8u, dwBytes);
            if ( !v254
              || (*(_QWORD *)(v1515 + 8) = v254,
                  memcpy_0(v254, Size, dwBytes),
                  *(_DWORD *)(v1515 + 16) = 160,
                  v255 = GetProcessHeap(),
                  (v256 = HeapAlloc(v255, 8u, 0xA0uLL)) == 0LL) )
            {
              v252 = -1073741801;
              goto LABEL_274;
            }
            *(_QWORD *)(v1515 + 24) = v256;
            v263 = *(_OWORD **)(v1515 + 24);
            *v263 = xmmword_180897EF0[0];
            v263[1] = xmmword_180897EF0[1];
            v263[2] = xmmword_180897EF0[2];
            v263[3] = xmmword_180897EF0[3];
            v263[4] = xmmword_180897EF0[4];
            v263[5] = xmmword_180897EF0[5];
            v263[6] = xmmword_180897EF0[6];
            v263[7] = xmmword_180897EF0[7];
            v263[8] = xmmword_180897EF0[8];
            v263[9] = xmmword_180897EF0[9];
            *(_DWORD *)(v1515 + 32) = 8;
            v264 = GetProcessHeap();
            v265 = HeapAlloc(v264, 8u, 8uLL);
            if ( !v265 )
            {
              v252 = -1073741801;
              goto LABEL_274;
            }
            *(_QWORD *)(v1515 + 40) = v265;
            v252 = 0;
            **(_QWORD **)(v1515 + 40) = qword_180897EE0;
            v262 = (unsigned int *)v1515;
          }
          else
          {
LABEL_274:
            v257 = v1515;
            if ( v1515 )
            {
              v1355 = *(void **)(v1515 + 8);
              if ( v1355 )
              {
                v258 = GetProcessHeap();
                HeapFree(v258, 0, v1355);
                v257 = v1515;
                *(_QWORD *)(v1515 + 8) = 0LL;
              }
              v1356 = *(void **)(v257 + 24);
              if ( v1356 )
              {
                v259 = GetProcessHeap();
                HeapFree(v259, 0, v1356);
                v257 = v1515;
                *(_QWORD *)(v1515 + 24) = 0LL;
              }
              v1357 = *(void **)(v257 + 40);
              if ( v1357 )
              {
                v260 = GetProcessHeap();
                HeapFree(v260, 0, v1357);
                *(_QWORD *)(v1515 + 40) = 0LL;
              }
              v261 = GetProcessHeap();
              HeapFree(v261, 0, (LPVOID)v1515);
            }
            v262 = 0LL;
          }
          v1421 = (SIZE_T)v98;
          v1527 = (SIZE_T)v95;
          v1617 = v262;
          v266 = GetProcessHeap();
          HeapFree(v266, 0, Size);
          v267 = v1608;
          v93 = v252 | 0x10000000;
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_313;
          v268 = *v1617;
          v1690 = 0;
          v1691 = 4;
          v271 = RtlUIntAdd(4LL, v268, &v1691);
          if ( v271 < 0 )
            goto LABEL_304;
          v271 = RtlUIntAdd(v1691, v269, &v1691);
          if ( v271 < 0 )
            goto LABEL_304;
          v271 = RtlUIntAdd(v1691, *(unsigned int *)(v272 + 16), &v1691);
          if ( v271 < 0 )
            goto LABEL_304;
          v271 = RtlUIntAdd(v1691, 4LL, &v1691);
          if ( v271 < 0 )
            goto LABEL_304;
          v271 = RtlUIntAdd(v1691, *(unsigned int *)(v273 + 32), &v1691);
          if ( v271 < 0 )
            goto LABEL_304;
          v1690 = v1691;
          v274 = v1691;
          v275 = GetProcessHeap();
          v276 = HeapAlloc(v275, 8u, v274);
          v277 = v276;
          if ( !v276 )
          {
            v93 = -805306345;
            goto LABEL_311;
          }
          v1727 = v276;
          *v276 = *v1617;
          v271 = RtlULongLongAdd(v276, 4LL, &v1727);
          v280 = v279;
          if ( v271 < 0 )
            goto LABEL_1661;
          memcpy_0(v1727, v278[1], *(unsigned int *)v278);
          v271 = RtlULongLongAdd(v1727, *v1617, &v1727);
          v280 = v277;
          if ( v271 < 0 )
            goto LABEL_1661;
          v282 = v1727;
          *(_DWORD *)v1727 = *(_DWORD *)(v281 + 16);
          v271 = RtlULongLongAdd(v282, 4LL, &v1727);
          v280 = v277;
          if ( v271 < 0 )
            goto LABEL_1661;
          memcpy_0(v1727, *(const void **)(v283 + 24), *(unsigned int *)(v283 + 16));
          v271 = RtlULongLongAdd(v1727, v1617[4], &v1727);
          v280 = v277;
          if ( v271 < 0
            || (v285 = v1727,
                *(_DWORD *)v1727 = *(_DWORD *)(v284 + 32),
                v271 = RtlULongLongAdd(v285, 4LL, &v1727),
                v280 = v277,
                v271 < 0)
            || (memcpy_0(v1727, *(const void **)(v286 + 40), *(unsigned int *)(v286 + 32)),
                v271 = RtlULongLongAdd(v1727, v1617[8], &v1727),
                v280 = v277,
                v271 < 0) )
          {
LABEL_1661:
            if ( v280 )
            {
              v287 = GetProcessHeap();
              HeapFree(v287, 0, v277);
            }
            v270 = 0LL;
          }
          else
          {
            v270 = v277;
            v1560 = v1690;
            v1633 = v277;
          }
          v267 = v1608;
LABEL_304:
          v1404 = (SIZE_T)v270;
          v93 = v271 | 0x10000000;
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_313;
          v288 = -1;
          if ( v1586 < 0xFFFFFFF8 )
            v288 = v1586 + 8;
          v93 = v1586 >= 0xFFFFFFF8 ? -805306219 : 0x10000000;
          v1651 = v93;
          if ( v1586 + 8 >= 8 )
          {
            v1692 = 0;
            v289 = (v288 + 7) & 0xFFFFFFF8;
            if ( (unsigned int)v289 < v288 )
            {
              v93 = -1073741675;
              v1651 = -1073741675;
              goto LABEL_313;
            }
            v1633 = v270;
            v1692 = (v288 + 7) & 0xFFFFFFF8;
            v1651 = RtlUIntAdd(v289, 8LL, &v1692);
            v93 = v1651;
            if ( v1651 < 0 )
              goto LABEL_313;
            v1608 = v303;
            v304 = (void *)v1404;
            v1633 = (void *)v1404;
            v1617 = v302;
            if ( !Src[1] || (v1617 = v302, v1608 = v267, v1633 = (void *)v1404, LODWORD(Src[0]) <= 1) )
            {
LABEL_344:
              v93 = -1073741811;
              goto LABEL_366;
            }
            v305 = (unsigned int *)Src[1];
            v306 = 0;
            v1728 = (unsigned int *)Src[1];
            while ( 1 )
            {
              v1573 = v306;
              if ( v306 )
                break;
              v1456 = *v305;
              v1651 = RtlULongLongAdd(v305, 4LL, &v1728);
              v93 = v1651;
              if ( v1651 < 0 )
                goto LABEL_313;
              v1651 = RtlULongLongAdd(v1728, v1456, &v1728);
              v93 = v1651;
              if ( v1651 < 0 )
                goto LABEL_313;
              v305 = v1728;
              v306 = v1573 + 1;
            }
            v1574 = *v305;
            if ( v305 + 1 < v305 )
              goto LABEL_368;
            v1608 = v267;
            v1617 = v302;
            v1633 = v304;
            if ( !Src[1] )
              goto LABEL_344;
            v1617 = v302;
            v1608 = v267;
            v1633 = v304;
            if ( LODWORD(Src[0]) <= 2 )
              goto LABEL_344;
            v307 = (unsigned int *)Src[1];
            v308 = 0;
            v1729 = (unsigned int *)Src[1];
            while ( 1 )
            {
              v1457 = v308;
              if ( v308 >= 2 )
                break;
              v1587 = *v307;
              v1651 = RtlULongLongAdd(v307, 4LL, &v1729);
              v93 = v1651;
              if ( v1651 < 0 )
                goto LABEL_313;
              v1651 = RtlULongLongAdd(v1729, v1587, &v1729);
              v93 = v1651;
              if ( v1651 < 0 )
                goto LABEL_313;
              v307 = v1729;
              v308 = v1457 + 1;
            }
            v309 = *v307;
            if ( v307 + 1 < v307 )
            {
LABEL_368:
              v93 = -1073741675;
              goto LABEL_366;
            }
            v1608 = v267;
            v1421 = (SIZE_T)v98;
            v1527 = (SIZE_T)v95;
            v1617 = v302;
            v1633 = v304;
            v1693 = 4;
            v1651 = RtlUIntAdd(4LL, v1692, &v1693);
            v93 = v1651;
            if ( v1651 >= 0 )
            {
              v1651 = RtlUIntAdd(v1693, v310, &v1693);
              v93 = v1651;
              if ( v1651 >= 0 )
              {
                v1651 = RtlUIntAdd(v1693, v1574, &v1693);
                v93 = v1651;
                if ( v1651 >= 0 )
                {
                  v1651 = RtlUIntAdd(v1693, 4LL, &v1693);
                  v93 = v1651;
                  if ( v1651 >= 0 )
                  {
                    v1651 = RtlUIntAdd(v1693, v309, &v1693);
                    v93 = v1651;
                    if ( v1651 >= 0 )
                    {
                      v313 = v1693;
                      v1617 = v311;
                      v1608 = v267;
                      v1633 = v312;
                      if ( v1693 > 0x400000 )
                      {
                        v93 = -2147418113;
                        goto LABEL_366;
                      }
                      v1555 = v1693;
                      v1527 = (SIZE_T)v95;
                      v1421 = (SIZE_T)v98;
LABEL_371:
                      v314 = v313;
                      v315 = GetProcessHeap();
                      v316 = (int *)HeapAlloc(v315, 8u, v314);
                      v317 = 0LL;
                      if ( v316 )
                        v317 = v316;
                      v1601 = v317;
                      v93 = v316 != 0LL ? 0x10000000 : -805306345;
                      v1651 = v93;
                      if ( !v316 )
                        goto LABEL_312;
                      phModule = 0LL;
                      v1783 = 0LL;
                      v1784 = 0LL;
                      if ( !v1633 || !v317 )
                      {
                        v93 = -2147024809;
                        goto LABEL_311;
                      }
                      LODWORD(v1784) = v1560;
                      *(_QWORD *)((char *)&v1784 + 4) = v1555;
                      *(_QWORD *)&v1783 = v1633;
                      *((_QWORD *)&v1783 + 1) = v317;
                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                        && (v319 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                      {
                        v320 = ((__int64 (__fastcall *)(__int64, __int128 *))v319)(134LL, &v1783);
                        v93 = v320 | 0x10000000;
                        v1651 = v320 | 0x10000000;
                        if ( v320 >= 0 )
                        {
                          v321 = DWORD1(v1784);
                          v1555 = DWORD1(v1784);
                          goto LABEL_389;
                        }
                      }
                      else
                      {
                        v318 = GetLastError();
                        v1651 = v318;
                        v93 = v318;
                        if ( v318 > 0 )
                        {
                          v93 = (unsigned __int16)v318 | 0x80070000;
                          v1651 = v93;
                        }
                        if ( v93 >= 0 )
                        {
                          v93 = -2147467259;
                          v1651 = -2147467259;
                        }
                      }
                      if ( v93 == -805306333 )
                      {
                        v93 = -2147024774;
                        goto LABEL_311;
                      }
                      if ( v93 < 0 )
                        goto LABEL_312;
                      v321 = v1555;
LABEL_389:
                      v1364 = 0LL;
                      v1694 = 0;
                      v1731 = v1601;
                      if ( v321 < 4 )
                      {
LABEL_390:
                        v93 = -805306306;
                        goto LABEL_311;
                      }
                      v1491 = *v1601;
                      v322 = RtlULongLongAdd(v1601, 4LL, &v1731);
                      v323 = 0LL;
                      v324 = v322;
                      if ( v322 < 0 )
                        goto LABEL_446;
                      v324 = RtlUIntAdd(0LL, 4LL, &v1694);
                      if ( v324 < 0 )
                        goto LABEL_447;
                      if ( v326 - v1694 < (unsigned int)v327 )
                        goto LABEL_390;
                      v1516 = v1731;
                      Sizea = v327;
                      v324 = RtlULongLongAdd(v1731, (unsigned int)v327, &v1731);
                      if ( v324 < 0 || (v324 = RtlUIntAdd(v1694, v328, &v1694), v324 < 0) )
                      {
LABEL_446:
                        v325 = v323;
                      }
                      else
                      {
                        v330 = (unsigned int)((_DWORD)v323 + 4);
                        if ( v329 - v1694 < (unsigned int)v330 )
                          goto LABEL_390;
                        v1575 = *(_DWORD *)v1731;
                        v324 = RtlULongLongAdd(v1731, v330, &v1731);
                        if ( v324 < 0 )
                          goto LABEL_445;
                        v324 = RtlUIntAdd(v1694, 4LL, &v1694);
                        if ( v324 < 0 )
                          goto LABEL_445;
                        if ( v331 - v1694 < (unsigned int)v332 )
                          goto LABEL_390;
                        dwBytesa = v1731;
                        v1405 = v332;
                        v324 = RtlULongLongAdd(v1731, (unsigned int)v332, &v1731);
                        if ( v324 < 0 )
                          goto LABEL_445;
                        v324 = RtlUIntAdd(v1694, v333, &v1694);
                        if ( v324 < 0 )
                          goto LABEL_445;
                        if ( v334 - v1694 < 4 )
                          goto LABEL_390;
                        v1458 = *(_DWORD *)v1731;
                        v324 = RtlULongLongAdd(v1731, 4LL, &v1731);
                        if ( v324 < 0 )
                          goto LABEL_445;
                        v324 = RtlUIntAdd(v1694, 4LL, &v1694);
                        if ( v324 < 0 )
                          goto LABEL_445;
                        if ( v1555 - v1694 < v335 )
                          goto LABEL_390;
                        v324 = RtlUIntAdd(v1694, v335, &v1694);
                        if ( v324 < 0 )
                        {
LABEL_445:
                          v325 = 0LL;
                          LODWORD(v323) = 0;
                        }
                        else
                        {
                          if ( v1555 != v1694 || (unsigned int)(v338 + v336 + v337) + 12LL != v1555 )
                            goto LABEL_390;
                          v339 = GetProcessHeap();
                          v340 = HeapAlloc(v339, 8u, 0x30uLL);
                          v341 = 0LL;
                          if ( v340 )
                            v341 = v340;
                          v1642 = v341;
                          v324 = v340 == 0LL ? 0xC0000017 : 0;
                          if ( !v340 )
                            goto LABEL_423;
                          if ( v1516 )
                          {
                            *(_DWORD *)v341 = v1491;
                            v342 = GetProcessHeap();
                            v343 = HeapAlloc(v342, 8u, Sizea);
                            if ( v343 )
                            {
                              v1642[1] = v343;
                              v324 = 0;
                              memcpy_0(v343, v1516, Sizea);
                              v341 = v1642;
                              v1527 = (SIZE_T)v95;
                              v1421 = (SIZE_T)v98;
                              goto LABEL_416;
                            }
LABEL_422:
                            v324 = -1073741801;
LABEL_423:
                            v348 = v1642;
                            if ( v1642 )
                            {
                              v1517 = (void *)v1642[1];
                              if ( v1517 )
                              {
                                v349 = GetProcessHeap();
                                HeapFree(v349, 0, v1517);
                                v348 = v1642;
                                v1642[1] = 0LL;
                              }
                              v1518 = (void *)v348[3];
                              if ( v1518 )
                              {
                                v350 = GetProcessHeap();
                                HeapFree(v350, 0, v1518);
                                v348 = v1642;
                                v1642[3] = 0LL;
                              }
                              v1519 = (void *)v348[5];
                              if ( v1519 )
                              {
                                v351 = GetProcessHeap();
                                HeapFree(v351, 0, v1519);
                                v1642[5] = 0LL;
                              }
                              v352 = GetProcessHeap();
                              HeapFree(v352, 0, v1642);
                            }
                            v353 = 0LL;
                          }
                          else
                          {
                            *(_DWORD *)v341 = 0;
                            v341[1] = 0LL;
LABEL_416:
                            if ( dwBytesa )
                            {
                              *((_DWORD *)v341 + 4) = v1575;
                              v344 = GetProcessHeap();
                              v345 = HeapAlloc(v344, 8u, v1405);
                              if ( !v345 )
                                goto LABEL_422;
                              v1642[3] = v345;
                              v324 = 0;
                              memcpy_0(v345, dwBytesa, v1405);
                              v341 = v1642;
                              v1527 = (SIZE_T)v95;
                              v1421 = (SIZE_T)v98;
                            }
                            else
                            {
                              *((_DWORD *)v341 + 4) = 0;
                              v341[3] = 0LL;
                            }
                            if ( v1731 )
                            {
                              *((_DWORD *)v341 + 8) = v1458;
                              v346 = GetProcessHeap();
                              v347 = HeapAlloc(v346, 8u, v1458);
                              if ( !v347 )
                                goto LABEL_422;
                              v1642[5] = v347;
                              v324 = 0;
                              memcpy_0(v347, v1731, v1458);
                              v341 = v1642;
                              v1527 = (SIZE_T)v95;
                              v1421 = (SIZE_T)v98;
                            }
                            else
                            {
                              *((_DWORD *)v341 + 8) = 0;
                              v341[5] = 0LL;
                            }
                            v353 = (unsigned int *)v341;
                            v1364 = (unsigned int *)v341;
                          }
                          LODWORD(v323) = 0;
                          if ( v324 < 0 )
                          {
                            v325 = 0LL;
                            v1641 = 0LL;
                            if ( v353 )
                            {
                              v1520 = (void *)*((_QWORD *)v353 + 1);
                              if ( v1520 )
                              {
                                v354 = GetProcessHeap();
                                HeapFree(v354, 0, v1520);
                                v353 = v1364;
                                *((_QWORD *)v1364 + 1) = 0LL;
                              }
                              v1521 = (void *)*((_QWORD *)v353 + 3);
                              if ( v1521 )
                              {
                                v355 = GetProcessHeap();
                                HeapFree(v355, 0, v1521);
                                v353 = v1364;
                                *((_QWORD *)v1364 + 3) = 0LL;
                              }
                              v1522 = (void *)*((_QWORD *)v353 + 5);
                              if ( v1522 )
                              {
                                v356 = GetProcessHeap();
                                HeapFree(v356, 0, v1522);
                                *((_QWORD *)v1364 + 5) = 0LL;
                              }
                              v357 = GetProcessHeap();
                              HeapFree(v357, 0, v1364);
                              LODWORD(v323) = 0;
                              v325 = 0LL;
                              v1641 = 0LL;
                            }
                          }
                          else
                          {
                            v325 = v353;
                            v1641 = v353;
                          }
                        }
                      }
LABEL_447:
                      v93 = v324 | 0x10000000;
                      v1651 = v93;
                      if ( v93 < 0 )
                        goto LABEL_312;
                      if ( !v325 || (v1365 = (unsigned __int8 *)*((_QWORD *)v325 + 1)) == 0LL || *v325 == (_DWORD)v323 )
                      {
                        v93 = -805306355;
                        goto LABEL_311;
                      }
                      v358 = *v325 - 8LL;
                      v1523 = v358;
                      v359 = MemoryAlloc(v358);
                      v1537 = v359;
                      v360 = 0;
                      if ( !v359 )
                        goto LABEL_480;
                      v361 = v1365;
                      v1406 = v358 & 7;
                      v1830 = 0x7F1137FAB69605ELL;
                      dwBytesb = (unsigned __int16 *)v359;
                      if ( (v358 & 7) != 0 )
                      {
                        v1576 = 0;
                        v1459 = 0;
                        v362 = v1617;
                        v363 = 56;
                        v364 = v1365;
                        for ( k = 56; ; v363 = k )
                        {
                          v365 = *v364++;
                          if ( v1459 >= 4 )
                          {
                            v367 = v365 << v363;
                            v366 = v1576;
                            v360 |= v367;
                          }
                          else
                          {
                            v366 = (v365 << (v363 - 32)) | v1576;
                            v1576 = v366;
                          }
                          k -= 8;
                          if ( (int)++v1459 >= (int)v1406 )
                            break;
                        }
                        v368 = v366 ^ 0x92F65A5;
                        v369 = v360 ^ 0x699A899C;
                        v370 = v360;
                        LOBYTE(v360) = 0;
                        v1492 = v366 ^ 0x92F65A5;
                        v1562 = 0;
                        v371 = 0;
                        v1460 = v369;
                        do
                        {
                          v1617 = v362;
                          v1389 = (unsigned __int16 *)((char *)dwBytesb + 1);
                          if ( v371 >= 4 )
                          {
                            v372 = (v1460 << 8) | HIBYTE(v1460);
                            v1460 = v372;
                          }
                          else
                          {
                            v372 = (v1492 << 8) | HIBYTE(v1492);
                            v1492 = v372;
                          }
                          *(_BYTE *)dwBytesb = v372;
                          v371 = v1562 + 1;
                          dwBytesb = (unsigned __int16 *)((char *)dwBytesb + 1);
                          v362 = v1617;
                          v1562 = v371;
                        }
                        while ( v371 < (int)v1406 );
                        v1493 = v370;
                        v0 = (int *)v1887[0];
                        v1421 = (SIZE_T)v98;
                        v1527 = (SIZE_T)v95;
                        dwBytesb = v1389;
                        if ( v1406 <= 4 )
                        {
                          v373 = 0;
                          if ( v1406 < 4 )
                            v368 = v368 >> (8 * (4 - v1406)) << (8 * (4 - v1406));
                        }
                        else
                        {
                          v373 = v369 >> (8 * (8 - v1406)) << (8 * (8 - v1406));
                        }
                        v361 = v364;
                        v374 = v1576;
                      }
                      else
                      {
                        v374 = 0;
                        v1493 = -1;
                        v373 = 0;
                        v368 = 0;
                      }
                      if ( v1523 >> 3 )
                      {
                        v375 = HIDWORD(v1830);
                        v376 = v1493;
                        v377 = v1523 >> 3;
                        v1461 = WORD1(v1830);
                        v378 = WORD2(v1830);
                        v379 = (char *)dwBytesb + 7;
                        v380 = HIDWORD(v1830) ^ 0xAB69605E;
                        v381 = v361 + 2;
                        for ( m = WORD2(v1830); ; v378 = m )
                        {
                          v382 = v381[1] | ((*v381 | ((*(v381 - 1) | (*(v381 - 2) << 8)) << 8)) << 8);
                          v383 = v382 ^ v368;
                          v384 = v383 ^ v375 ^ 0xAB69605E ^ (v381[5] | ((v381[4] | ((v381[3] | (v381[2] << 8)) << 8)) << 8)) ^ v373;
                          v385 = (__ROR4__(v384, 22) + v378 * __ROR4__(v384 + 1419157410, 27)) ^ v383;
                          v386 = (WORD1(v1830) * __ROR4__(v375 + v385, 9) - __ROR4__(v385, 30)) ^ v384;
                          v387 = (24670 * (v386 - v378) - (v386 >> 13)) ^ v385;
                          v388 = (HIWORD(v1830) * __ROR4__(v387 ^ WORD1(v1830), 26) - __ROR4__(v387, 30)) ^ v386;
                          v389 = (v375 - (v388 ^ 0xAB69605E)) ^ v387;
                          v390 = (v1461 * (v389 ^ v378)) ^ __ROR4__(v389, 6) ^ v388;
                          v391 = (__ROR4__(v390, 30) + 24670 * __ROR4__(v375 + v390, 15)) ^ v389;
                          v392 = (HIWORD(v1830) * __ROR4__(v391 + 1419157410, 14) - __ROR4__(v391, 24)) ^ v390;
                          v393 = __ROR4__(v392, 10) ^ (v378 * __ROR4__(v392 ^ 0xAB69605E, 12)) ^ v391;
                          v394 = (v393 >> 10) ^ (WORD1(v1830) * (HIWORD(v1830) ^ v393)) ^ v392;
                          v395 = (HIWORD(v1830) * (__ROR4__(~v394, 5) + 24670)) ^ v393;
                          v396 = (v395 - HIWORD(v1830)) ^ 0xAB69605E ^ v394;
                          v397 = ((v396 >> 2) + v378 * __ROR4__(HIWORD(v1830) ^ v396, 30)) ^ v395;
                          v398 = (__ROR4__(v397, 25) + WORD1(v1830) * __ROR4__(v397 - v375, 6)) ^ v396;
                          v399 = (24670 * (v398 ^ v378) + __ROR4__(v398, 9)) ^ v397;
                          v400 = (__ROR4__(v399, 25) + HIWORD(v1830) * __ROR4__(v399 ^ WORD1(v1830), 27)) ^ v398;
                          v401 = v380 ^ v399 ^ v400;
                          v402 = (m * (__ROR4__(v401, 3) - WORD1(v1830))) ^ v400;
                          v403 = (24670 * __ROR4__(v402 - v375, 1) - __ROR4__(v402, 6)) ^ v401;
                          v404 = (__ROR4__(v403, 18) + HIWORD(v1830) * __ROR4__(v403 - 1419157410, 29)) ^ v402;
                          v405 = (m * __ROR4__(v404 - 1419157410, 17) - __ROR4__(v404, 14)) ^ v403;
                          v406 = (v405 >> 3) ^ (WORD1(v1830) * (v405 ^ 0x605E)) ^ v404;
                          v407 = v406 ^ v375;
                          v408 = __ROR4__(v406, 30);
                          v373 = v376 ^ v406;
                          v376 = v381[5] | ((v381[4] | ((v381[3] | (v381[2] << 8)) << 8)) << 8);
                          v368 = v374 ^ v405 ^ v408 ^ (24670 * __ROR4__(v407, 28));
                          *(v379 - 4) = v368;
                          *v379 = v373;
                          v379 += 8;
                          *(v379 - 13) = BYTE1(v368);
                          *(v379 - 9) = BYTE1(v373);
                          v381 += 8;
                          *(v379 - 14) = (unsigned __int16)(v368 >> 8) >> 8;
                          *(v379 - 10) = (unsigned __int16)(v373 >> 8) >> 8;
                          *(v379 - 15) = __ROR4__(
                                           (((v368 >> 8) | (v368 << 24)) >> 8) | (((v368 >> 8) | (v368 << 24)) << 24),
                                           8);
                          v374 = v382;
                          *(v379 - 11) = __ROR4__(
                                           (((v373 >> 8) | (v373 << 24)) >> 8) | (((v373 >> 8) | (v373 << 24)) << 24),
                                           8);
                          if ( !--v377 )
                            break;
                        }
                        LOBYTE(v360) = 0;
                        v0 = (int *)v1887[0];
                        v95 = (_QWORD *)v1527;
                        v98 = (void *)v1421;
                        v359 = v1537;
                      }
                      for ( n = 0LL; n < v1523; ++n )
                        LOBYTE(v360) = *((_BYTE *)v359 + n) ^ v360;
                      v410 = v1633;
                      if ( (unsigned __int8)v360 != *(_QWORD *)&v1365[v1523] )
                      {
                        MemoryFree(v359);
LABEL_480:
                        v93 = -805306367;
                        v1537 = 0LL;
LABEL_311:
                        v1651 = v93;
LABEL_312:
                        v267 = v1608;
LABEL_313:
                        if ( v267 )
                        {
LABEL_314:
                          v290 = GetProcessHeap();
                          HeapFree(v290, 0, v1608);
                        }
                        if ( v1617 )
                        {
                          v1358 = (void *)*((_QWORD *)v1617 + 1);
                          if ( v1358 )
                          {
                            v291 = GetProcessHeap();
                            HeapFree(v291, 0, v1358);
                            *((_QWORD *)v1617 + 1) = 0LL;
                          }
                          v1359 = (void *)*((_QWORD *)v1617 + 3);
                          if ( v1359 )
                          {
                            v292 = GetProcessHeap();
                            HeapFree(v292, 0, v1359);
                            *((_QWORD *)v1617 + 3) = 0LL;
                          }
                          v1360 = (void *)*((_QWORD *)v1617 + 5);
                          if ( v1360 )
                          {
                            v293 = GetProcessHeap();
                            HeapFree(v293, 0, v1360);
                            *((_QWORD *)v1617 + 5) = 0LL;
                          }
                          v294 = GetProcessHeap();
                          HeapFree(v294, 0, v1617);
                        }
                        if ( v1633 )
                        {
                          v295 = GetProcessHeap();
                          HeapFree(v295, 0, v1633);
                        }
                        if ( v1601 )
                        {
                          v296 = GetProcessHeap();
                          HeapFree(v296, 0, v1601);
                        }
                        if ( v1641 )
                        {
                          v1361 = (void *)*((_QWORD *)v1641 + 1);
                          if ( v1361 )
                          {
                            v297 = GetProcessHeap();
                            HeapFree(v297, 0, v1361);
                            *((_QWORD *)v1641 + 1) = 0LL;
                          }
                          v1362 = (void *)*((_QWORD *)v1641 + 3);
                          if ( v1362 )
                          {
                            v298 = GetProcessHeap();
                            HeapFree(v298, 0, v1362);
                            *((_QWORD *)v1641 + 3) = 0LL;
                          }
                          v1363 = (void *)*((_QWORD *)v1641 + 5);
                          if ( v1363 )
                          {
                            v299 = GetProcessHeap();
                            HeapFree(v299, 0, v1363);
                            *((_QWORD *)v1641 + 5) = 0LL;
                          }
                          v300 = GetProcessHeap();
                          HeapFree(v300, 0, v1641);
                        }
                        if ( v1537 )
                        {
                          v301 = GetProcessHeap();
                          HeapFree(v301, 0, v1537);
                        }
                        if ( v93 < 0 )
                          goto LABEL_601;
                        if ( !LODWORD(v1768[0]) )
                        {
LABEL_339:
                          v93 = -1073425151;
                          goto LABEL_340;
                        }
                        if ( v1768[1] )
                        {
                          v1734 = v1768[1];
                          v1651 = RtlULongLongAdd(v1768[1], 4LL, &v1734);
                          v93 = v1651;
                          if ( v1651 < 0 )
                            goto LABEL_601;
                          v426 = v1734;
                          if ( !v423 )
                            v426 = v424;
                          v1734 = v426;
                          if ( v423 != v425 )
                            goto LABEL_589;
                          v93 = *v426;
                          v1651 = v93;
                          if ( v93 == -805306333 )
                          {
                            v427 = -2147024774;
                            v1662 = -2147024774;
                          }
                          else
                          {
                            v427 = v93;
                            v1662 = v93;
                            if ( v93 != -2147024774 )
                            {
                              v1662 = v93;
                              if ( v93 < 0 )
                                goto LABEL_601;
                            }
                          }
                          if ( LODWORD(v1768[0]) != 6 )
                            goto LABEL_339;
                          if ( v1768[1] != v424 )
                          {
                            v428 = (unsigned int *)v1768[1];
                            for ( ii = (int)v424; ; ii = 1 )
                            {
                              v430 = *v428;
                              v431 = v428 + 1;
                              if ( ii )
                                break;
                              if ( v431 < v428 )
                                goto LABEL_595;
                              v428 = (unsigned int *)((char *)v431 + v430);
                              v1662 = v427;
                              if ( (unsigned int *)((char *)v431 + v430) < v431 )
                                goto LABEL_595;
                            }
                            if ( v431 < v428 )
                            {
LABEL_595:
                              v93 = -1073741675;
                              goto LABEL_340;
                            }
                            v432 = 0LL;
                            if ( (_DWORD)v430 )
                              v432 = (LPCWSTR *)v431;
                            if ( (_DWORD)v430 != 8 )
                              goto LABEL_589;
                            v1367 = *v432;
                            if ( !v1768[1] )
                              goto LABEL_560;
                            v433 = (int *)v1768[1];
                            v434 = 0;
                            v1735 = (int *)v1768[1];
                            while ( v434 < 2 )
                            {
                              v1651 = RtlULongLongAdd(v433, 4LL, &v1735);
                              v93 = v1651;
                              if ( v1651 < 0 )
                                goto LABEL_601;
                              v1651 = RtlULongLongAdd(v1735, v435, &v1735);
                              v93 = v1651;
                              if ( v1651 < 0 )
                                goto LABEL_601;
                              v433 = v1735;
                              v434 = v436 + 1;
                            }
                            v1651 = RtlULongLongAdd(v433, 4LL, &v1735);
                            v93 = v1651;
                            if ( v1651 < 0 )
                              goto LABEL_601;
                            v439 = v1735;
                            if ( !v437 )
                              v439 = v438;
                            v1735 = v439;
                            if ( v437 != 4 )
                              goto LABEL_589;
                            v1495 = *v439;
                            if ( v1768[1] == v438 )
                              goto LABEL_560;
                            v440 = v1768[1];
                            v441 = (unsigned int)v438;
                            v1736 = v1768[1];
                            while ( v441 < 3 )
                            {
                              v1651 = RtlULongLongAdd(v440, 4LL, &v1736);
                              v93 = v1651;
                              if ( v1651 < 0 )
                                goto LABEL_601;
                              v1651 = RtlULongLongAdd(v1736, v442, &v1736);
                              v93 = v1651;
                              if ( v1651 < 0 )
                                goto LABEL_601;
                              v440 = v1736;
                              v441 = v443 + 1;
                            }
                            v93 = RtlULongLongAdd(v440, 4LL, &v1736);
                            v1651 = v93;
                            if ( v93 < 0 )
                              goto LABEL_601;
                            v445 = v1736;
                            if ( !v444 )
                              v445 = 0LL;
                            v1736 = v445;
                            if ( v1768[1] )
                            {
                              v446 = (unsigned int *)v1768[1];
                              v447 = 0;
                              v1737 = (unsigned int *)v1768[1];
                              while ( v447 < 4 )
                              {
                                v1579 = *v446;
                                v1651 = RtlULongLongAdd(v446, 4LL, &v1737);
                                v93 = v1651;
                                if ( v1651 < 0 )
                                  goto LABEL_601;
                                v1651 = RtlULongLongAdd(v1737, v1579, &v1737);
                                v93 = v1651;
                                if ( v1651 < 0 )
                                  goto LABEL_601;
                                v446 = v1737;
                                v447 = v448 + 1;
                              }
                              v1651 = RtlULongLongAdd(v446, 4LL, &v1737);
                              v93 = v1651;
                              if ( v1651 < 0 )
                                goto LABEL_601;
                              v450 = v1737;
                              if ( !v449 )
                                v450 = 0LL;
                              v1737 = v450;
                              if ( v449 != 4 )
                                goto LABEL_589;
                              v1580 = *v450;
                              if ( !v1768[1] )
                                goto LABEL_560;
                              v451 = (unsigned int *)v1768[1];
                              v452 = 0;
                              v1738 = (unsigned int *)v1768[1];
                              while ( v452 < 5 )
                              {
                                v1463 = *v451;
                                v1651 = RtlULongLongAdd(v451, 4LL, &v1738);
                                v93 = v1651;
                                if ( v1651 < 0 )
                                  goto LABEL_601;
                                v1651 = RtlULongLongAdd(v1738, v1463, &v1738);
                                v93 = v1651;
                                if ( v1651 < 0 )
                                  goto LABEL_601;
                                v451 = v1738;
                                v452 = v453 + 1;
                              }
                              v454 = *v451;
                              v455 = RtlULongLongAdd(v451, 4LL, &v1738);
                              v1651 = v455;
                              v93 = v455;
                              if ( v455 >= 0 )
                              {
                                v458 = v1738;
                                if ( !v454 )
                                  v458 = 0LL;
                                v1738 = v458;
                                if ( v454 != 4 )
                                {
LABEL_589:
                                  v93 = -1073741789;
                                  goto LABEL_340;
                                }
                                if ( lpModuleName != v1367 )
                                  goto LABEL_339;
                                v1549 = *v458;
                                v1658 = v1495;
                                if ( v1580 > 4 || (unsigned int)v457 > 4 )
                                {
                                  v93 = -2147024774;
                                  goto LABEL_340;
                                }
                                memcpy_0(hMem, v456, v457);
LABEL_598:
                                v455 = v1662;
                                if ( !v1662 )
                                  goto LABEL_601;
                                v93 = v1662;
                              }
                              v1651 = v455;
                              goto LABEL_601;
                            }
                          }
                        }
                        goto LABEL_560;
                      }
                      v411 = v1537;
                      v412 = v1617;
                      v267 = v1608;
                      if ( (unsigned int)v1523 < 4 )
                      {
LABEL_482:
                        v413 = -1073741762;
                        goto LABEL_507;
                      }
                      v1494 = *v1537;
                      if ( v1537 + 1 >= v1537 )
                      {
                        if ( (unsigned int)(v1523 - 4) < 4 )
                        {
                          v413 = -1073741762;
LABEL_486:
                          v1617 = v412;
                          v1608 = v267;
LABEL_487:
                          v1633 = v410;
                          goto LABEL_507;
                        }
                        v1578 = v1537[1];
                        v1563 = v1537 + 2;
                        if ( v1537 + 2 < v1537 + 1 )
                        {
                          v413 = -1073741675;
LABEL_527:
                          v1633 = v410;
                          v1608 = v267;
                          v1617 = v412;
                          goto LABEL_507;
                        }
                        if ( (int)v1523 - 8 < v1578 )
                          goto LABEL_482;
                        if ( v1578 < 0xFFFFFFF8 )
                        {
                          if ( (char *)v1537 + (unsigned int)v1523 < (char *)v1537 + v1578 + 8
                            || (unsigned int)v1523 + -8LL - (unsigned __int64)v1578 >= 8 )
                          {
                            v413 = -1073741762;
                            goto LABEL_487;
                          }
                          v1422 = 0LL;
                          v414 = 0LL;
                          v1733 = 0LL;
                          v413 = 0;
                          v1462 = 0;
                          if ( v1537 != (_DWORD *)-8LL )
                          {
                            v1366 = v1537 + 2;
                            v415 = RtlULongLongAdd(v1563, v1578, &v1733);
                            v417 = v1641;
                            v413 = v415;
                            v267 = v1608;
                            v1537 = v416;
                            v1633 = v410;
                            if ( v415 < 0 )
                              goto LABEL_507;
                            v418 = v1563;
                            v419 = v416;
                            v1537 = v416;
                            v412 = v1617;
                            v420 = (unsigned __int64)v1563;
                            v1633 = v410;
                            while ( 1 )
                            {
                              v1654 = v417;
                              v1588 = v419;
                              if ( v420 >= v1733 )
                                break;
                              if ( v420 + 4 < v420 )
                                goto LABEL_506;
                              v1641 = v417;
                              v1537 = v419;
                              v1633 = v410;
                              v1617 = v412;
                              v1563 = v418;
                              v1608 = v267;
                              if ( v420 + 4 > v1733 )
                              {
                                v1537 = v419;
                                v413 = -1073741811;
                                v1641 = v417;
                                goto LABEL_527;
                              }
                              v1695 = 0;
                              v413 = RtlUIntAdd(4LL, *v1366, &v1695);
                              if ( v413 < 0 )
                              {
                                v1537 = v1588;
                                v1641 = v1654;
                                v1608 = v267;
                                v1617 = v412;
                                v1633 = v410;
                                goto LABEL_521;
                              }
                              v420 = (unsigned __int64)v1366 + v1695;
                              if ( v420 < (unsigned __int64)v1366 )
                              {
                                v411 = v1588;
                                v1641 = v1654;
                                goto LABEL_505;
                              }
                              v1366 = (unsigned int *)((char *)v1366 + v1695);
                              v413 = 0;
                              if ( v420 > v1733 )
                              {
                                v413 = -1073741811;
                                goto LABEL_486;
                              }
                              ++v1462;
                              v417 = v1654;
                              v418 = v1563;
                              v419 = v1588;
                            }
                            if ( v420 != v1733 )
                            {
                              v413 = -1073741811;
                              goto LABEL_507;
                            }
                            v414 = 0LL;
                          }
                          if ( v1578 )
                          {
                            v421 = GetProcessHeap();
                            v422 = v1578;
                            v1422 = HeapAlloc(v421, 8u, v1578);
                            v414 = v1422;
                            if ( !v1422 )
                            {
                              v267 = v1608;
                              v413 = -1073741801;
                              goto LABEL_507;
                            }
                            v413 = 0;
                          }
                          else
                          {
                            v422 = 0LL;
                          }
                          if ( v1563 )
                          {
                            memcpy_0(v414, v1563, v422);
                            v414 = v1422;
                          }
                          v267 = v1608;
                          v1768[0] = (LPVOID)__PAIR64__(v1578, v1462);
                          v1768[1] = v414;
LABEL_521:
                          if ( v413 >= 0 && v1494 != LODWORD(v1768[0]) )
                            goto LABEL_482;
LABEL_507:
                          v93 = v413 | 0x10000000;
LABEL_366:
                          v1651 = v93;
                          goto LABEL_313;
                        }
LABEL_505:
                        v1617 = v412;
                        v1537 = v411;
                        v1608 = v267;
                        v1633 = v410;
                      }
LABEL_506:
                      v413 = -1073741675;
                      goto LABEL_507;
                    }
                  }
                }
              }
            }
          }
          if ( v93 >= 0 )
          {
            v313 = 0;
            goto LABEL_371;
          }
          goto LABEL_313;
        }
        v154 = (unsigned int *)Src[1];
        v155 = 0;
        v1753 = (unsigned int *)Src[1];
        while ( v155 < LODWORD(Src[0]) )
        {
          v156 = *v154;
          v1677 = 0;
          v1651 = RtlUIntAdd(4LL, v156, &v1677);
          v93 = v1651;
          if ( v1651 < 0 )
            goto LABEL_601;
          v93 = RtlULongLongAdd(v157, v1677, &v1753);
          v1651 = v93;
          if ( v93 < 0 )
            goto LABEL_601;
          v154 = v1753;
          v155 = v158 + 1;
        }
        v1651 = RtlULongLongAdd(v154, 4LL, v1774);
        v93 = v1651;
        if ( v1651 < 0 )
          goto LABEL_601;
        if ( (char *)v159 + v160 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
        {
          v161 = (void *)v1774[0];
          *v159 = v160;
          memcpy_0(v161, L"Shell-WindowTabHost-Enabled", (unsigned int)v160);
          ++LODWORD(Src[0]);
          goto LABEL_192;
        }
        v93 = -1073741789;
      }
      else
      {
        v93 = -1073741811;
      }
      v1651 = v93;
      goto LABEL_192;
    }
  }
LABEL_601:
  Src[0] = 0LL;
  v459 = Src[1];
  if ( Src[1] )
  {
    v460 = GetProcessHeap();
    HeapFree(v460, 0, v459);
    Src[1] = 0LL;
  }
  v1768[0] = 0LL;
  v461 = v1768[1];
  if ( v1768[1] )
  {
    v462 = GetProcessHeap();
    HeapFree(v462, 0, v461);
    v1768[1] = 0LL;
  }
  if ( v98 )
  {
    v463 = GetProcessHeap();
    HeapFree(v463, 0, v98);
  }
  if ( v95 )
  {
    v464 = GetProcessHeap();
    HeapFree(v464, 0, v95);
  }
  if ( v93 < 0 )
  {
    v94 = 0;
    v1 = 1;
    v92 = hMem;
    v91 = 4LL;
    goto LABEL_1625;
  }
  v465 = 0LL;
  if ( !v1549 )
    goto LABEL_1623;
  v1739 = 0LL;
  dword_180899E48 = v1549;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  v467 = 0;
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    goto LABEL_616;
  v1368 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(
                                             0LL,
                                             0LL,
                                             1027LL);
  if ( !v1368 )
  {
    GetLastError();
    goto LABEL_616;
  }
  v482 = off_1808913D8[0]();
  v483 = dword_180899E48;
  qword_18089D730 = v482;
  v1496 = dword_180899E48;
  memset_0(&v1815, 0, 0x70uLL);
  Sizeb = 0LL;
  v1839 = 0LL;
  memset(v1853, 0, 44);
  dwBytesc = 0LL;
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v484 = dword_18089D72C;
  if ( dword_18089D72C )
  {
LABEL_673:
    dword_18089D72C = v484 + 1;
    goto LABEL_674;
  }
  v1581 = 0;
  v1464 = 0;
  v1564 = 0;
  v485 = (char *)MemoryAlloc(0x338uLL);
  v1407 = (WCHAR *)v485;
  if ( !v485 )
    goto LABEL_637;
  v486 = -1;
  v487 = v485 + 7;
  v488 = 0;
  v489 = (unsigned __int8 *)&unk_1807573B2;
  v490 = 103LL;
  v491 = 0;
  do
  {
    v492 = *(v489 - 1) | (*(v489 - 2) << 8);
    v493 = v489[2] << 8;
    v494 = *v489;
    v489 += 8;
    v495 = *(v489 - 7) | ((v494 | (v492 << 8)) << 8);
    v496 = v495 ^ v467;
    v497 = *(v489 - 3) | ((*(v489 - 4) | ((*(v489 - 5) | v493) << 8)) << 8);
    v498 = v496 ^ v497 ^ v488 ^ 0xAC987321;
    v499 = (__ROR4__(v498, 22) + 4991 * __ROR4__(v498 + 1419157410, 27)) ^ v496;
    v500 = (43881 * __ROR4__(v499 + 133239679, 9) - __ROR4__(v499, 30)) ^ v498;
    v501 = (24670 * v500 - (v500 >> 13) - 123127970) ^ v499;
    v502 = (2033 * __ROR4__(v501 ^ 0xAB69, 26) - __ROR4__(v501, 30)) ^ v500;
    v503 = (133239679 - (v502 ^ 0xAB69605E)) ^ v501;
    v504 = (43881 * (v503 ^ 0x137F)) ^ __ROR4__(v503, 6) ^ v502;
    v505 = (__ROR4__(v504, 30) + 24670 * __ROR4__(v504 + 133239679, 15)) ^ v503;
    v506 = (2033 * __ROR4__(v505 + 1419157410, 14) - __ROR4__(v505, 24)) ^ v504;
    v507 = __ROR4__(v506, 10) ^ (4991 * __ROR4__(v506 ^ 0xAB69605E, 12)) ^ v505;
    v508 = (v507 >> 10) ^ (43881 * (v507 ^ 0x7F1)) ^ v506;
    v509 = (2033 * (__ROR4__(~v508, 5) + 24670)) ^ v507;
    v510 = v508 ^ (v509 - 2033) ^ 0xAB69605E;
    v511 = ((v510 >> 2) + 4991 * __ROR4__(v508 ^ (v509 - 2033) ^ 0xAB6967AF, 30)) ^ v509;
    v512 = (__ROR4__(v511, 25) + 43881 * __ROR4__(v511 - 133239679, 6)) ^ v510;
    v513 = (24670 * (v512 ^ 0x137F) + __ROR4__(v512, 9)) ^ v511;
    v514 = (__ROR4__(v513, 25) + 2033 * __ROR4__(v513 ^ 0xAB69, 27)) ^ v512;
    v515 = v513 ^ v514 ^ 0xAC987321;
    v516 = (4991 * __ROR4__(v515, 3) - 219010071) ^ v514;
    v517 = (24670 * __ROR4__(v516 - 133239679, 1) - __ROR4__(v516, 6)) ^ v515;
    v518 = (__ROR4__(v517, 18) + 2033 * __ROR4__(v517 - 1419157410, 29)) ^ v516;
    v519 = (4991 * __ROR4__(v518 - 1419157410, 17) - __ROR4__(v518, 14)) ^ v517;
    v520 = (v519 >> 3) ^ (43881 * (v519 ^ 0x605E)) ^ v518;
    v521 = 24670 * __ROR4__(v520 ^ 0x7F1137F, 28);
    v522 = __ROR4__(v520, 30);
    v488 = v486 ^ v520;
    v486 = v497;
    v467 = v491 ^ v519 ^ v522 ^ v521;
    *(v487 - 4) = v467;
    *v487 = v488;
    v487 += 8;
    v491 = v495;
    *(v487 - 13) = BYTE1(v467);
    *(v487 - 9) = BYTE1(v488);
    *(v487 - 14) = (unsigned __int16)(v467 >> 8) >> 8;
    *(v487 - 10) = (unsigned __int16)(v488 >> 8) >> 8;
    *(v487 - 15) = __ROR4__((((v467 >> 8) | (v467 << 24)) >> 8) | (((v467 >> 8) | (v467 << 24)) << 24), 8);
    *(v487 - 11) = __ROR4__((((v488 >> 8) | (v488 << 24)) >> 8) | (((v488 >> 8) | (v488 << 24)) << 24), 8);
    --v490;
  }
  while ( v490 );
  v483 = v1496;
  v93 = v1651;
  v523 = 0LL;
  v524 = v1407;
  v525 = 0;
  do
    v525 ^= *((_BYTE *)v1407 + v523++);
  while ( v523 < 0x338 );
  if ( v525 != 64LL )
  {
    MemoryFree(v1407);
    goto LABEL_637;
  }
  *((_BYTE *)v1407 + 823) = 0;
  memset_0(&unk_180899E50, 0, 0x60uLL);
  while ( 2 )
  {
    if ( *(_BYTE *)v524 )
    {
      v544 = v524;
      v545 = -1LL;
      do
        ++v545;
      while ( v524[v545] );
      v546 = &v524[v545];
      v1390 = (unsigned __int16 *)((char *)&unk_180899E50 + 24 * v1564);
      if ( !GetModuleHandleExW(0, v544, (HMODULE *)v1390) )
      {
        v548 = -1073741702;
        goto LABEL_669;
      }
      v547 = (HMODULE *)((char *)&unk_180899E50 + 24 * v1564);
      v548 = 0;
      v1464 = 0;
      if ( **(_WORD **)v1390 == 23117 )
      {
        v549 = *(int *)(*(_QWORD *)v1390 + 60LL);
        if ( (unsigned int)v549 < 0x10000000 )
        {
          v550 = *(_QWORD *)v1390 + v549;
          if ( v550 >= *(_QWORD *)v1390 && *(_DWORD *)v550 == 17744 )
          {
            if ( ((*(_WORD *)(v550 + 24) - 267) & 0xFEFF) != 0 )
            {
              v548 = -1073741811;
LABEL_651:
              v1464 = v548;
            }
            else
            {
              *(_QWORD *)(v1390 + 6) = *(_QWORD *)(v550 + 136);
              *((_DWORD *)v1390 + 2) = *(_DWORD *)(v550 + 80);
            }
            v551 = *(_DWORD *)(v546 + 1);
            v552 = 0;
            v1589 = v551;
            v524 = v546 + 3;
            while ( 1 )
            {
              v1556 = v552;
              if ( v552 >= v551 )
                break;
              v553 = (const CHAR *)v524;
              v554 = -1LL;
              do
                ++v554;
              while ( *((_BYTE *)v524 + v554) );
              v524 = (const WCHAR *)((char *)v524 + v554 + 1);
              if ( v548 >= 0 )
              {
                v555 = GetProcAddress(*v547, v553);
                if ( !v555 )
                  goto LABEL_669;
                v547 = (HMODULE *)((char *)&unk_180899E50 + 24 * v1564);
                off_180891340[v1581] = v555;
                v551 = v1589;
              }
              ++v1581;
              v552 = v1556 + 1;
            }
            ++v1564;
            continue;
          }
        }
      }
      v548 = -1073741701;
      goto LABEL_651;
    }
    break;
  }
  v548 = v1464;
LABEL_669:
  if ( v1407 )
  {
    v556 = GetProcessHeap();
    HeapFree(v556, 0, v1407);
  }
  if ( v548 >= 0 )
  {
    v484 = dword_18089D72C;
    goto LABEL_673;
  }
LABEL_637:
  v526 = (HMODULE *)&unk_180899E50;
  v527 = 4LL;
  do
  {
    if ( *v526 )
      FreeLibrary(*v526);
    v526 += 3;
    --v527;
  }
  while ( v527 );
  memset_0(&unk_180899E50, 0, 0x60uLL);
  v528 = 2LL;
  v529 = off_180891340;
  v530 = off_1806EF510;
  do
  {
    v531 = *((_OWORD *)v530 + 1);
    *(_OWORD *)v529 = *(_OWORD *)v530;
    v532 = *((_OWORD *)v530 + 2);
    *((_OWORD *)v529 + 1) = v531;
    v533 = *((_OWORD *)v530 + 3);
    *((_OWORD *)v529 + 2) = v532;
    v534 = *((_OWORD *)v530 + 4);
    *((_OWORD *)v529 + 3) = v533;
    v535 = *((_OWORD *)v530 + 5);
    *((_OWORD *)v529 + 4) = v534;
    v536 = *((_OWORD *)v530 + 6);
    *((_OWORD *)v529 + 5) = v535;
    v537 = *((_OWORD *)v530 + 7);
    v530 += 16;
    *((_OWORD *)v529 + 6) = v536;
    v529 += 16;
    *((_OWORD *)v529 - 1) = v537;
    --v528;
  }
  while ( v528 );
  v538 = *((_OWORD *)v530 + 1);
  *(_OWORD *)v529 = *(_OWORD *)v530;
  v539 = *((_OWORD *)v530 + 2);
  *((_OWORD *)v529 + 1) = v538;
  v540 = *((_OWORD *)v530 + 3);
  *((_OWORD *)v529 + 2) = v539;
  v541 = *((_OWORD *)v530 + 4);
  *((_OWORD *)v529 + 3) = v540;
  v542 = *((_OWORD *)v530 + 5);
  *((_OWORD *)v529 + 4) = v541;
  v543 = *((_OWORD *)v530 + 6);
  *((_OWORD *)v529 + 5) = v542;
  *((_OWORD *)v529 + 6) = v543;
LABEL_674:
  v1582 = 0;
  v1465 = 0;
  _InterlockedExchange(&dword_18089D738, 0);
  LODWORD(v1887[0]) = 0;
  WORD2(v1887[0]) = 0;
  v1740 = 0LL;
  v1766 = 0LL;
  v1565 = 0;
  v1557 = 0;
  v1408 = 0LL;
  v1391 = 0LL;
  v1538 = 0LL;
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v557 = dword_18089D72C;
  if ( dword_18089D72C )
  {
LABEL_720:
    dword_18089D72C = v557 + 1;
    goto LABEL_721;
  }
  v1550 = 0;
  v1630 = 0;
  v1643 = 0;
  v558 = (char *)MemoryAlloc(0x338uLL);
  lpModuleNamea = (WCHAR *)v558;
  if ( !v558 )
    goto LABEL_684;
  v559 = v558 + 7;
  v560 = -1;
  v561 = (unsigned __int8 *)&unk_1807573B2;
  v562 = 0;
  v563 = 103LL;
  v564 = 0;
  v565 = 0;
  do
  {
    v566 = *(v561 - 1) | (*(v561 - 2) << 8);
    v567 = v561[2] << 8;
    v568 = *v561;
    v561 += 8;
    v569 = *(v561 - 7) | ((v568 | (v566 << 8)) << 8);
    v570 = v569 ^ v565;
    v571 = *(v561 - 3) | ((*(v561 - 4) | ((*(v561 - 5) | v567) << 8)) << 8);
    v572 = v570 ^ v571 ^ v564 ^ 0xAC987321;
    v573 = (__ROR4__(v572, 22) + 4991 * __ROR4__(v572 + 1419157410, 27)) ^ v570;
    v574 = (43881 * __ROR4__(v573 + 133239679, 9) - __ROR4__(v573, 30)) ^ v572;
    v575 = (24670 * v574 - (v574 >> 13) - 123127970) ^ v573;
    v576 = (2033 * __ROR4__(v575 ^ 0xAB69, 26) - __ROR4__(v575, 30)) ^ v574;
    v577 = (133239679 - (v576 ^ 0xAB69605E)) ^ v575;
    v578 = (43881 * (v577 ^ 0x137F)) ^ __ROR4__(v577, 6) ^ v576;
    v579 = (__ROR4__(v578, 30) + 24670 * __ROR4__(v578 + 133239679, 15)) ^ v577;
    v580 = (2033 * __ROR4__(v579 + 1419157410, 14) - __ROR4__(v579, 24)) ^ v578;
    v581 = __ROR4__(v580, 10) ^ (4991 * __ROR4__(v580 ^ 0xAB69605E, 12)) ^ v579;
    v582 = v580 ^ (v581 >> 10) ^ (43881 * (v581 ^ 0x7F1));
    v583 = (2033 * (__ROR4__(~v582, 5) + 24670)) ^ v581;
    v584 = v582 ^ (v583 - 2033) ^ 0xAB69605E;
    v585 = ((v584 >> 2) + 4991 * __ROR4__(v582 ^ (v583 - 2033) ^ 0xAB6967AF, 30)) ^ v583;
    v586 = (__ROR4__(v585, 25) + 43881 * __ROR4__(v585 - 133239679, 6)) ^ v584;
    v587 = (24670 * (v586 ^ 0x137F) + __ROR4__(v586, 9)) ^ v585;
    v588 = (__ROR4__(v587, 25) + 2033 * __ROR4__(v587 ^ 0xAB69, 27)) ^ v586;
    v589 = v587 ^ v588 ^ 0xAC987321;
    v590 = (4991 * __ROR4__(v589, 3) - 219010071) ^ v588;
    v591 = (24670 * __ROR4__(v590 - 133239679, 1) - __ROR4__(v590, 6)) ^ v589;
    v592 = (__ROR4__(v591, 18) + 2033 * __ROR4__(v591 - 1419157410, 29)) ^ v590;
    v593 = (4991 * __ROR4__(v592 - 1419157410, 17) - __ROR4__(v592, 14)) ^ v591;
    v594 = (v593 >> 3) ^ (43881 * (v593 ^ 0x605E)) ^ v592;
    v595 = 24670 * __ROR4__(v594 ^ 0x7F1137F, 28);
    v596 = __ROR4__(v594, 30);
    v564 = v560 ^ v594;
    v560 = v571;
    v565 = v562 ^ v593 ^ v596 ^ v595;
    *(v559 - 4) = v565;
    *v559 = v564;
    v559 += 8;
    *(v559 - 13) = BYTE1(v565);
    *(v559 - 9) = BYTE1(v564);
    *(v559 - 14) = (unsigned __int16)(v565 >> 8) >> 8;
    *(v559 - 10) = (unsigned __int16)(v564 >> 8) >> 8;
    *(v559 - 15) = __ROR4__((((v565 >> 8) | (v565 << 24)) >> 8) | (((v565 >> 8) | (v565 << 24)) << 24), 8);
    v562 = v569;
    *(v559 - 11) = __ROR4__((((v564 >> 8) | (v564 << 24)) >> 8) | (((v564 >> 8) | (v564 << 24)) << 24), 8);
    --v563;
  }
  while ( v563 );
  v483 = v1496;
  v597 = lpModuleNamea;
  v598 = 0LL;
  v599 = 0;
  do
    v599 ^= *((_BYTE *)lpModuleNamea + v598++);
  while ( v598 < 0x338 );
  if ( v599 != 64LL )
  {
    MemoryFree(lpModuleNamea);
    goto LABEL_684;
  }
  *((_BYTE *)lpModuleNamea + 823) = 0;
  memset_0(&unk_180899E50, 0, 0x60uLL);
  while ( 2 )
  {
    if ( *(_BYTE *)v597 )
    {
      v618 = v597;
      v619 = -1LL;
      do
        ++v619;
      while ( v597[v619] );
      v620 = &v597[v619];
      v1423 = (char *)&unk_180899E50 + 24 * v1643;
      if ( !GetModuleHandleExW(0, v618, (HMODULE *)v1423) )
      {
        v622 = -1073741702;
        goto LABEL_716;
      }
      v621 = (HMODULE *)((char *)&unk_180899E50 + 24 * v1643);
      v622 = 0;
      v1630 = 0;
      if ( **(_WORD **)v1423 == 23117 )
      {
        v623 = *(int *)(*(_QWORD *)v1423 + 60LL);
        if ( (unsigned int)v623 < 0x10000000 )
        {
          v624 = *(_QWORD *)v1423 + v623;
          if ( v624 >= *(_QWORD *)v1423 && *(_DWORD *)v624 == 17744 )
          {
            if ( ((*(_WORD *)(v624 + 24) - 267) & 0xFEFF) != 0 )
            {
              v622 = -1073741811;
LABEL_698:
              v1630 = v622;
            }
            else
            {
              *(_QWORD *)(v1423 + 12) = *(_QWORD *)(v624 + 136);
              *((_DWORD *)v1423 + 2) = *(_DWORD *)(v624 + 80);
            }
            v625 = *(_DWORD *)(v620 + 1);
            v626 = 0;
            v1602 = v625;
            v597 = v620 + 3;
            while ( 1 )
            {
              v1497 = v626;
              if ( v626 >= v625 )
                break;
              v627 = (const CHAR *)v597;
              v628 = -1LL;
              do
                ++v628;
              while ( *((_BYTE *)v597 + v628) );
              v597 = (WCHAR *)((char *)v597 + v628 + 1);
              if ( v622 >= 0 )
              {
                v629 = GetProcAddress(*v621, v627);
                if ( !v629 )
                  goto LABEL_716;
                v621 = (HMODULE *)((char *)&unk_180899E50 + 24 * v1643);
                off_180891340[v1550] = v629;
                v625 = v1602;
              }
              ++v1550;
              v626 = v1497 + 1;
            }
            ++v1643;
            continue;
          }
        }
      }
      v622 = -1073741701;
      goto LABEL_698;
    }
    break;
  }
  v622 = v1630;
LABEL_716:
  if ( lpModuleNamea )
  {
    v630 = GetProcessHeap();
    HeapFree(v630, 0, lpModuleNamea);
  }
  if ( v622 >= 0 )
  {
    v557 = dword_18089D72C;
    goto LABEL_720;
  }
LABEL_684:
  v600 = (HMODULE *)&unk_180899E50;
  v601 = 4LL;
  do
  {
    if ( *v600 )
      FreeLibrary(*v600);
    v600 += 3;
    --v601;
  }
  while ( v601 );
  memset_0(&unk_180899E50, 0, 0x60uLL);
  v602 = 2LL;
  v603 = off_180891340;
  v604 = off_1806EF510;
  do
  {
    v605 = *((_OWORD *)v604 + 1);
    *(_OWORD *)v603 = *(_OWORD *)v604;
    v606 = *((_OWORD *)v604 + 2);
    *((_OWORD *)v603 + 1) = v605;
    v607 = *((_OWORD *)v604 + 3);
    *((_OWORD *)v603 + 2) = v606;
    v608 = *((_OWORD *)v604 + 4);
    *((_OWORD *)v603 + 3) = v607;
    v609 = *((_OWORD *)v604 + 5);
    *((_OWORD *)v603 + 4) = v608;
    v610 = *((_OWORD *)v604 + 6);
    *((_OWORD *)v603 + 5) = v609;
    v611 = *((_OWORD *)v604 + 7);
    v604 += 16;
    *((_OWORD *)v603 + 6) = v610;
    v603 += 16;
    *((_OWORD *)v603 - 1) = v611;
    --v602;
  }
  while ( v602 );
  v612 = *((_OWORD *)v604 + 1);
  *(_OWORD *)v603 = *(_OWORD *)v604;
  v613 = *((_OWORD *)v604 + 2);
  *((_OWORD *)v603 + 1) = v612;
  v614 = *((_OWORD *)v604 + 3);
  *((_OWORD *)v603 + 2) = v613;
  v615 = *((_OWORD *)v604 + 4);
  *((_OWORD *)v603 + 3) = v614;
  v616 = *((_OWORD *)v604 + 5);
  *((_OWORD *)v603 + 4) = v615;
  v617 = *((_OWORD *)v604 + 6);
  *((_OWORD *)v603 + 5) = v616;
  *((_OWORD *)v603 + 6) = v617;
LABEL_721:
  v631 = 0LL;
  _InterlockedExchange(&dword_18089D738, 0);
  memset_0(&v1815, 0, 0x70uLL);
  v1603 = v483 & 0xF;
  LOWORD(v1887[0]) = (v483 >> 4) & 0xF;
  WORD1(v1887[0]) = (v483 >> 8) & 0xF;
  v1839 = 0LL;
  WORD2(v1887[0]) = (v483 >> 12) & 0xF;
  lpModuleNameb = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(0LL, 0LL, 1027LL);
  v1644 = -1;
  if ( lpModuleNameb )
  {
    v1741 = 0LL;
    v1498 = 0;
    v1742 = 0LL;
    v1730 = 0LL;
    v1744 = 0LL;
    memset(v1879, 0, sizeof(v1879));
    v1745 = 0LL;
    v633 = 0;
    v1696 = 0;
    v1717 = 0LL;
    v1697 = 0;
    if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1808913E0[0])(
           8LL,
           &v1696,
           0LL,
           &v1697) )
    {
      v636 = MemoryAlloc(2LL * v1697);
      SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1745, v636);
      if ( !v1745
        || (v637 = MemoryAlloc(4LL * (v1696 + 1)),
            SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1717, v637),
            (v638 = v1717) == 0LL) )
      {
        v633 = -2147024882;
        goto LABEL_746;
      }
      if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1808913E0[0])(
             8LL,
             &v1696,
             v1745,
             &v1697) )
      {
        v639 = v638;
        if ( v1696 )
        {
          v640 = v1745;
          v641 = v638;
          for ( jj = 0; jj < v1696; ++jj )
          {
            *v641 = ((__int64 (__fastcall *)(char *, _QWORD))off_1808913F0)(v640, 0LL);
            v643 = -1LL;
            do
              ++v643;
            while ( *(_WORD *)&v640[2 * v643] );
            ++v641;
            v640 += 2 * v643 + 2;
          }
          v633 = 0;
          v1717 = v641;
          v639 = v641;
        }
        *v639 = 1033;
        v631 = v638;
        v1717 = 0LL;
        v1498 = v1696 + 1;
        v1741 = v638;
LABEL_746:
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1717);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1745);
        if ( v633 >= 0 )
        {
          v644 = 0;
          v645 = 0;
          v1551 = 0;
          if ( v1498 )
          {
            v646 = 0LL;
            while ( 2 )
            {
              for ( kk = 0; kk < 0x26; ++kk )
              {
                if ( v631[v646] == dword_1807A63F0[kk] )
                {
                  v644 = kk;
                  v1551 = kk;
                  goto LABEL_755;
                }
              }
              ++v645;
              ++v646;
              if ( v645 < v1498 )
                continue;
              break;
            }
            v644 = 0;
          }
LABEL_755:
          v648 = v644;
          v1499 = 0;
          v649 = (unsigned int)dword_1807A63F0[v644];
          memset(v1842, 0, sizeof(v1842));
          if ( ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64))off_1808913E8[0])(v649, v1888, 85LL)
            && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *, __int64))off_1808913D0[0])(v1888, 88LL, v1842, 16LL) > 0 )
          {
            v1499 = (HIDWORD(v1842[0]) >> 27) & 1;
          }
          memset_0(v1886, 0, 0x90uLL);
          v650 = L"Segoe UI Light";
          v651 = 19LL;
          v652 = (const wchar_t **)&v1885;
          do
          {
            *v652 = v650;
            v653 = -1LL;
            do
              ++v653;
            while ( v650[v653] );
            ++v652;
            v650 += v653 + 1;
            --v651;
          }
          while ( v651 );
          v1408 = *(_QWORD *)&v1886[8 * byte_1807A6490[3 * v648] - 8];
          v1391 = *(unsigned __int16 **)&v1886[8 * byte_1807A6490[3 * v648 + 1] - 8];
          v1538 = *(_QWORD *)&v1886[8 * byte_1807A6490[3 * v648 + 2] - 8];
          v654 = (char *)MemoryAlloc(0x1C90uLL);
          v655 = 0;
          v1618 = v654;
          if ( v654 )
          {
            v656 = v654 + 7;
            v657 = -1;
            v658 = (unsigned __int8 *)&unk_1807A6512;
            v659 = 0;
            v660 = 0;
            v661 = 914LL;
            do
            {
              v662 = *(v658 - 1) | (*(v658 - 2) << 8);
              v663 = v658[2] << 8;
              v664 = *v658;
              v658 += 8;
              v665 = *(v658 - 7) | ((v664 | (v662 << 8)) << 8);
              v666 = v665 ^ v660;
              v667 = *(v658 - 3) | ((*(v658 - 4) | ((*(v658 - 5) | v663) << 8)) << 8);
              v668 = v666 ^ v667 ^ v655 ^ 0xAC987321;
              v669 = (__ROR4__(v668, 22) + 4991 * __ROR4__(v668 + 1419157410, 27)) ^ v666;
              v670 = (43881 * __ROR4__(v669 + 133239679, 9) - __ROR4__(v669, 30)) ^ v668;
              v671 = (24670 * v670 - (v670 >> 13) - 123127970) ^ v669;
              v672 = (2033 * __ROR4__(v671 ^ 0xAB69, 26) - __ROR4__(v671, 30)) ^ v670;
              v673 = (133239679 - (v672 ^ 0xAB69605E)) ^ v671;
              v674 = (43881 * (v673 ^ 0x137F)) ^ __ROR4__(v673, 6) ^ v672;
              v675 = (__ROR4__(v674, 30) + 24670 * __ROR4__(v674 + 133239679, 15)) ^ v673;
              v676 = (2033 * __ROR4__(v675 + 1419157410, 14) - __ROR4__(v675, 24)) ^ v674;
              v677 = __ROR4__(v676, 10) ^ (4991 * __ROR4__(v676 ^ 0xAB69605E, 12)) ^ v675;
              v678 = v676 ^ (v677 >> 10) ^ (43881 * (v677 ^ 0x7F1));
              v679 = (2033 * (__ROR4__(~v678, 5) + 24670)) ^ v677;
              v680 = v678 ^ (v679 - 2033) ^ 0xAB69605E;
              v681 = ((v680 >> 2) + 4991 * __ROR4__(v678 ^ (v679 - 2033) ^ 0xAB6967AF, 30)) ^ v679;
              v682 = (__ROR4__(v681, 25) + 43881 * __ROR4__(v681 - 133239679, 6)) ^ v680;
              v683 = (24670 * (v682 ^ 0x137F) + __ROR4__(v682, 9)) ^ v681;
              v684 = (__ROR4__(v683, 25) + 2033 * __ROR4__(v683 ^ 0xAB69, 27)) ^ v682;
              v685 = v684 ^ v683 ^ 0xAC987321;
              v686 = (4991 * __ROR4__(v685, 3) - 219010071) ^ v684;
              v687 = (24670 * __ROR4__(v686 - 133239679, 1) - __ROR4__(v686, 6)) ^ v685;
              v688 = (__ROR4__(v687, 18) + 2033 * __ROR4__(v687 - 1419157410, 29)) ^ v686;
              v689 = (4991 * __ROR4__(v688 - 1419157410, 17) - __ROR4__(v688, 14)) ^ v687;
              v690 = (v689 >> 3) ^ (43881 * (v689 ^ 0x605E)) ^ v688;
              v691 = 24670 * __ROR4__(v690 ^ 0x7F1137F, 28);
              v692 = __ROR4__(v690, 30);
              v655 = v657 ^ v690;
              v657 = v667;
              v660 = v659 ^ v689 ^ v692 ^ v691;
              *(v656 - 4) = v660;
              *v656 = v655;
              v656 += 8;
              *(v656 - 13) = BYTE1(v660);
              *(v656 - 9) = BYTE1(v655);
              *(v656 - 14) = (unsigned __int16)(v660 >> 8) >> 8;
              *(v656 - 10) = (unsigned __int16)(v655 >> 8) >> 8;
              *(v656 - 15) = __ROR4__((((v660 >> 8) | (v660 << 24)) >> 8) | (((v660 >> 8) | (v660 << 24)) << 24), 8);
              v659 = v665;
              *(v656 - 11) = __ROR4__((((v655 >> 8) | (v655 << 24)) >> 8) | (((v655 >> 8) | (v655 << 24)) << 24), 8);
              --v661;
            }
            while ( v661 );
            v693 = v1618;
            v694 = 0LL;
            v695 = 0LL;
            do
            {
              v696 = (__m128)_mm_loadu_si128((const __m128i *)&v1618[v694]);
              v694 += 16LL;
              v697 = _mm_xor_ps(v696, v695);
              v695 = v697;
            }
            while ( v694 < 0x1C90 );
            v698 = _mm_xor_ps(v697, (__m128)_mm_srli_si128((__m128i)v697, 8));
            v699 = _mm_xor_ps(v698, (__m128)_mm_srli_si128((__m128i)v698, 4));
            v700 = _mm_xor_ps(v699, (__m128)_mm_srli_si128((__m128i)v699, 2));
            if ( (unsigned __int8)_mm_cvtsi128_si32((__m128i)_mm_xor_ps(v700, (__m128)_mm_srli_si128((__m128i)v700, 1))) == 127LL )
            {
              v1742 = v1618;
              v633 = 0;
              v1730 = 7312LL;
              if ( v1618 )
                v1730 = 7312LL;
              else
                v693 = 0LL;
              v701 = v1879;
              v702 = 6LL;
              do
              {
                for ( mm = 0; mm < 0x26; ++mm )
                {
                  if ( v1551 == mm )
                    *v701 = v693;
                  v704 = -1LL;
                  do
                    ++v704;
                  while ( v693[v704] );
                  v693 += v704 + 1;
                }
                ++v701;
                --v702;
              }
              while ( v702 );
              v705 = MemoryAlloc(0x18uLL);
              SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1744, v705);
              v706 = v1744;
              if ( v1744 )
              {
                v707 = 0;
                *(_OWORD *)v1744 = 0LL;
                v706[2] = 0LL;
                v1730 = 7312LL;
                while ( 2 )
                {
                  v1552 = v707;
                  if ( v707 >= 3 )
                  {
                    v715 = v706;
                    v706 = 0LL;
                    v1740 = v715;
                    v1815 = v1499;
                    v1744 = 0LL;
                  }
                  else
                  {
                    v708 = 0;
                    v1619 = v707;
                    while ( 1 )
                    {
                      if ( v708 >= 6 )
                        goto LABEL_797;
                      if ( *((_WORD *)v1887 + v707) == word_1807A63E0[v708] )
                        break;
                      ++v708;
                    }
                    v709 = (_BYTE *)*((_QWORD *)v1879 + v708);
                    v710 = -1LL;
                    v1634 = v709;
                    do
                      ++v710;
                    while ( v709[v710] );
                    v711 = ((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))off_180891400[0])(
                             65001LL,
                             0LL,
                             v709,
                             (unsigned int)(v710 + 1),
                             0LL,
                             0);
                    v1631 = v711;
                    if ( v711 )
                    {
                      v712 = MemoryAlloc(2LL * v711);
                      v706[v1619] = v712;
                      if ( !v712 )
                        goto LABEL_789;
                      v713 = -1LL;
                      do
                        ++v713;
                      while ( v1634[v713] );
                      if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, LPVOID, int))off_180891400[0])(
                             65001LL,
                             0LL,
                             v1634,
                             (unsigned int)(v713 + 1),
                             v712,
                             v1631) )
                      {
LABEL_797:
                        v707 = v1552 + 1;
                        continue;
                      }
                    }
                    v714 = GetLastError();
                    v633 = v714;
                    if ( v714 > 0 )
                      v633 = (unsigned __int16)v714 | 0x80070000;
                    if ( v633 >= 0 )
                      v633 = -2147467259;
                  }
                  break;
                }
              }
              else
              {
LABEL_789:
                v633 = -2147024882;
              }
              if ( v706 )
              {
                v716 = 3LL;
                v1730 = 7312LL;
                do
                {
                  v717 = *v706;
                  if ( *v706 )
                  {
                    v718 = -1LL;
                    do
                      ++v718;
                    while ( v717[v718] );
                    memset(v717, 0, 2 * v718 + 2);
                    MemoryFree(*v706);
                    v716 = lpMemb;
                  }
                  ++v706;
                  lpMemb = --v716;
                }
                while ( v716 );
              }
            }
            else
            {
              v633 = -1073425151;
              MemoryFree(v1618);
            }
          }
          else
          {
            v633 = -2147024882;
          }
        }
        if ( v1742 )
          memset(v1742, 0, v1730);
        v719 = (char *)v1538;
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1744);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1742);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1741);
        if ( v633 < 0 )
          goto LABEL_846;
        if ( v1740 )
          v720 = v1740;
        else
          v720 = 0LL;
        v1817 = *v720;
        if ( v1740 )
          v721 = v1740;
        else
          v721 = 0LL;
        v1818 = v721[1];
        if ( v1740 )
          v722 = v1740;
        else
          v722 = 0LL;
        v1819 = v722[2];
        v1777 = 0LL;
        LODWORD(v1777) = 16;
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *))off_1808914A8)(66LL, 0LL, &v1777) )
        {
          v723 = GetLastError();
          v633 = v723;
          if ( v723 > 0 )
            v633 = (unsigned __int16)v723 | 0x80070000;
          v1816 = 0;
          if ( v633 >= 0 )
            v633 = -2147467259;
          goto LABEL_846;
        }
        v1816 = BYTE4(v1777) & 1;
        if ( v1603 == 1 )
        {
          v1582 = 42;
        }
        else
        {
          if ( v1603 != 2 )
          {
            if ( v1603 == 3 )
            {
              v1582 = 225;
              v1465 = 225;
            }
LABEL_835:
            v724 = 96;
            v1500 = 96;
            memset_0(v1875, 0, 0xDCuLL);
            v1876 = 220;
            if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_180891420[0])(0LL, 0xFFFFFFFFLL, v1875) )
            {
              v724 = v1877;
              *((_QWORD *)&v1766 + 1) = v1878;
              *(_QWORD *)&v1766 = 0LL;
              if ( v1877 < 0x60u )
                v724 = 96;
              v1500 = v724;
            }
            v725 = (char *)v1538;
            if ( v1603 == 1 )
              v725 = (char *)v1408;
            v1539 = v725;
            memset_0(v1872, 0, 0x5CuLL);
            v633 = 0;
            lpMemc = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(0LL, 0LL, 1027LL);
            if ( lpMemc )
            {
              v749 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1582, v724, 72LL);
              v1872[4] = 400;
              v1872[0] = -v749;
              v1873 = 5;
              StringCchCopyW((char *)v1874, 32LL, v1539);
              v750 = ((__int64 (__fastcall *)(_DWORD *))off_180891360[0])(v1872);
              if ( v750 )
              {
                v1820 = v750;
              }
              else
              {
                v633 = GetLastError();
                v751 = v633 < 0;
                if ( v633 > 0 )
                {
                  v633 = (unsigned __int16)v633 | 0x80070000;
                  v751 = v633 < 0;
                }
                if ( !v751 )
                  v633 = -2147467259;
              }
              ((void (__fastcall *)(_QWORD, LPVOID))off_1808914A0[0])(0LL, lpMemc);
            }
            else
            {
              v633 = GetLastError();
              v726 = v633 < 0;
              if ( v633 > 0 )
              {
                v633 = (unsigned __int16)v633 | 0x80070000;
                v726 = v633 < 0;
              }
              if ( !v726 )
                goto LABEL_845;
            }
            if ( v633 < 0 )
              goto LABEL_846;
            if ( v1603 == 1 )
              v719 = (char *)v1408;
            memset_0(v1866, 0, 0x5CuLL);
            v633 = 0;
            v1409 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(0LL, 0LL, 1027LL);
            if ( !v1409 )
            {
              v752 = GetLastError();
              v633 = v752;
              if ( v752 > 0 )
                v633 = (unsigned __int16)v752 | 0x80070000;
              if ( v633 >= 0 )
                v633 = -2147467259;
              goto LABEL_846;
            }
            v753 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1465, v724, 72LL);
            v1866[4] = 400;
            v1866[0] = -v753;
            v1867 = 5;
            StringCchCopyW((char *)v1868, 32LL, v719);
            v754 = ((__int64 (__fastcall *)(_DWORD *))off_180891360[0])(v1866);
            v755 = 0;
            if ( v754 )
            {
              v1821 = (void *)v754;
            }
            else
            {
              v756 = GetLastError();
              v633 = v756;
              if ( v756 > 0 )
                v633 = (unsigned __int16)v756 | 0x80070000;
              if ( v633 >= 0 )
                v633 = -2147467259;
            }
            ((void (__fastcall *)(_QWORD, SIZE_T))off_1808914A0[0])(0LL, v1409);
            if ( v633 < 0 )
              goto LABEL_846;
            v757 = 0;
            if ( v1603 != 1 )
            {
              if ( v1603 == 2 )
              {
                v757 = 0;
                v755 = SDWORD2(v1766) / 4;
LABEL_893:
                *((_QWORD *)&v1839 + 1) = __PAIR64__(v757, v755);
                if ( v1603 == 1 )
                {
                  v758 = 150;
                  v1565 = 150;
                  v1557 = 32;
                }
                else
                {
                  v758 = 0;
                  if ( (unsigned int)(v1603 - 2) <= 1 )
                  {
                    v1565 = 0;
                    v1557 = 0;
                  }
                }
                v759 = v755 - v758;
                v760 = v1817;
                v1825.m128i_i32[2] = v759;
                v1824.m128i_i32[2] = v759;
                v1410 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_1808913B8)(lpModuleNameb, v1820);
                v761 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_180891418)(
                         lpModuleNameb,
                         v760,
                         0xFFFFFFFFLL,
                         &v1824,
                         3152,
                         0LL);
                v633 = v761 == 0 ? 0x80004005 : 0;
                if ( v1410 )
                  ((void (__fastcall *)(LPCWSTR, SIZE_T))off_1808913B8)(lpModuleNameb, v1410);
                if ( !v761 )
                  goto LABEL_846;
                v762 = v1818;
                v1411 = ((__int64 (__fastcall *)(LPCWSTR, void *))off_1808913B8)(lpModuleNameb, v1821);
                v763 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_180891418)(
                         lpModuleNameb,
                         v762,
                         0xFFFFFFFFLL,
                         &v1825,
                         3152,
                         0LL);
                v633 = v763 == 0 ? 0x80004005 : 0;
                if ( v1411 )
                  ((void (__fastcall *)(LPCWSTR, SIZE_T))off_1808913B8)(lpModuleNameb, v1411);
                if ( !v763 )
                  goto LABEL_846;
                if ( (unsigned int)(v1603 - 2) <= 1 )
                {
                  v759 = v1825.m128i_i32[2];
                  if ( v1824.m128i_i32[2] > v1825.m128i_i32[2] )
                    v759 = v1824.m128i_i32[2];
                }
                if ( v1815 )
                {
                  off_180891490(
                    (CToastCenterExperienceManager *)&v1824,
                    (struct CSingleViewShellExperience *)(unsigned int)(v759 - v1824.m128i_i32[2]));
                  v764 = (unsigned int)(v759 - v1825.m128i_i32[2]);
                }
                else
                {
                  off_180891490((CToastCenterExperienceManager *)&v1824, (struct CSingleViewShellExperience *)v1565);
                  v764 = v1565;
                }
                ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_180891490)(
                  &v1825,
                  v764,
                  (unsigned int)(v1824.m128i_i32[3] + v1557));
                if ( (unsigned int)(v1603 - 2) <= 1 )
                {
                  *((_QWORD *)&v1839 + 1) = __PAIR64__(v1825.m128i_u32[3], v759);
                  v1823 = -5723992;
                }
                else if ( v1603 == 1 )
                {
                  v1823 = 0xFFFFFF;
                  memset_0(v1869, 0, 0x5CuLL);
                  v633 = 0;
                  v765 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(0LL, 0LL, 1027LL);
                  if ( v765 )
                  {
                    v767 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808913F8)(11LL, v1500);
                    v1869[4] = 400;
                    v1869[0] = -v767;
                    v1870 = 5;
                    StringCchCopyW((char *)v1871, 32LL, (char *)v1391);
                    v768 = ((__int64 (__fastcall *)(_DWORD *))off_180891360[0])(v1869);
                    if ( v768 )
                    {
                      v1822 = v768;
                    }
                    else
                    {
                      v633 = GetLastError();
                      v769 = v633 < 0;
                      if ( v633 > 0 )
                      {
                        v633 = (unsigned __int16)v633 | 0x80070000;
                        v769 = v633 < 0;
                      }
                      if ( !v769 )
                        v633 = -2147467259;
                    }
                    ((void (__fastcall *)(_QWORD, __int64))off_1808914A0[0])(0LL, v765);
                  }
                  else
                  {
                    v633 = GetLastError();
                    v766 = v633 < 0;
                    if ( v633 > 0 )
                    {
                      v633 = (unsigned __int16)v633 | 0x80070000;
                      v766 = v633 < 0;
                    }
                    if ( !v766 )
                    {
LABEL_845:
                      v633 = -2147467259;
LABEL_846:
                      ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808914A0[0])(0LL, lpModuleNameb);
                      goto LABEL_847;
                    }
                  }
                  if ( v633 < 0 )
                    goto LABEL_846;
                  v770 = v1819;
                  v1828 = v759;
                  v771 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1808913B8)(lpModuleNameb, v1822);
                  v772 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_180891418)(
                           lpModuleNameb,
                           v770,
                           0xFFFFFFFFLL,
                           &v1826,
                           1120,
                           0LL);
                  v633 = v772 == 0 ? 0x80004005 : 0;
                  if ( v771 )
                    ((void (__fastcall *)(LPCWSTR, __int64))off_1808913B8)(lpModuleNameb, v771);
                  if ( !v772 )
                    goto LABEL_846;
                  v773 = v1828 + 24;
                  if ( (int)(v1828 + 24) < 90 )
                    v773 = 90;
                  v1828 = v773;
                  v1829 = 32;
                  v1826 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1826, v1500, 96LL);
                  v1827 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1827, v1500, 96LL);
                  v1828 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1828, v1500, 96LL);
                  v1829 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1829, v1500, 96LL);
                  if ( v1815 )
                  {
                    v774 = v1824.m128i_u32[0];
                    if ( v1824.m128i_i32[0] >= v1825.m128i_i32[0] )
                      v774 = v1825.m128i_u32[0];
                  }
                  else
                  {
                    v775 = v1824.m128i_i32[2];
                    if ( v1824.m128i_i32[2] <= v1825.m128i_i32[2] )
                      v775 = v1825.m128i_i32[2];
                    v774 = v1826 + v775 - v1828;
                  }
                  off_180891490((CToastCenterExperienceManager *)&v1826, (struct CSingleViewShellExperience *)v774);
                }
                v776 = v1815;
                v777 = HIDWORD(v1839);
                v778 = DWORD2(v1839);
                switch ( v1603 )
                {
                  case 1:
                    *(_QWORD *)&v1839 = 0LL;
                    goto LABEL_944;
                  case 2:
                    v1848 = 0LL;
                    v1846 = 0LL;
                    v1847 = 0LL;
                    v782 = (CToastCenterExperienceManager *)off_180891488[0](
                                                              0LL,
                                                              (struct CSingleViewShellExperience *)1);
                    LODWORD(v1846) = 40;
                    if ( !(unsigned int)off_180891448(v782, (struct CSingleViewShellExperience *)&v1846) )
                      goto LABEL_944;
                    off_180891480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1847 + 4));
                    off_180891480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1847 + 12));
                    if ( v776 )
                      v780 = DWORD1(v1847) + 5 * HIDWORD(v1847) / 100;
                    else
                      v780 = 95 * (HIDWORD(v1847) - v778) / 100;
                    v781 = 95 * (v1848 - v777);
                    break;
                  case 3:
                    v1845 = 0LL;
                    v1843 = 0LL;
                    v1844 = 0LL;
                    v779 = (CToastCenterExperienceManager *)off_180891488[0](
                                                              0LL,
                                                              (struct CSingleViewShellExperience *)1);
                    LODWORD(v1843) = 40;
                    if ( !(unsigned int)off_180891448(v779, (struct CSingleViewShellExperience *)&v1843) )
                      goto LABEL_944;
                    off_180891480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1844 + 4));
                    off_180891480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1844 + 12));
                    v780 = 50 * (HIDWORD(v1844) - v778) / 100;
                    v781 = 50 * (v1845 - v777);
                    break;
                  default:
                    goto LABEL_944;
                }
                LODWORD(v1839) = v780;
                DWORD1(v1839) = v781 / 100;
LABEL_944:
                v633 = 0;
                goto LABEL_846;
              }
              if ( v1603 != 3 )
                goto LABEL_893;
            }
            v755 = DWORD2(v1766);
            v757 = HIDWORD(v1766);
            goto LABEL_893;
          }
          v1582 = 15;
        }
        v1465 = 11;
        goto LABEL_835;
      }
      v633 = GetLastError();
      v635 = v633 < 0;
      if ( v633 <= 0 )
      {
LABEL_731:
        if ( !v635 )
          v633 = -2147467259;
        goto LABEL_746;
      }
      v633 = (unsigned __int16)v633;
    }
    else
    {
      v634 = GetLastError();
      v633 = v634;
      if ( v634 <= 0 )
      {
LABEL_730:
        v635 = v633 < 0;
        goto LABEL_731;
      }
      v633 = (unsigned __int16)v634;
    }
    v633 |= 0x80070000;
    goto LABEL_730;
  }
  v632 = GetLastError();
  v633 = v632;
  if ( v632 > 0 )
    v633 = (unsigned __int16)v632 | 0x80070000;
  if ( v633 >= 0 )
    v633 = -2147467259;
LABEL_847:
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v727 = dword_18089D72C;
  if ( dword_18089D72C > 0 )
  {
    --dword_18089D72C;
    if ( v727 == 1 )
    {
      v728 = (HMODULE *)&unk_180899E50;
      v729 = 4LL;
      do
      {
        if ( *v728 )
          FreeLibrary(*v728);
        v728 += 3;
        --v729;
      }
      while ( v729 );
      memset_0(&unk_180899E50, 0, 0x60uLL);
      v730 = 2LL;
      v731 = off_180891340;
      v732 = off_1806EF510;
      do
      {
        v733 = *((_OWORD *)v732 + 1);
        *(_OWORD *)v731 = *(_OWORD *)v732;
        v734 = *((_OWORD *)v732 + 2);
        *((_OWORD *)v731 + 1) = v733;
        v735 = *((_OWORD *)v732 + 3);
        *((_OWORD *)v731 + 2) = v734;
        v736 = *((_OWORD *)v732 + 4);
        *((_OWORD *)v731 + 3) = v735;
        v737 = *((_OWORD *)v732 + 5);
        *((_OWORD *)v731 + 4) = v736;
        v738 = *((_OWORD *)v732 + 6);
        *((_OWORD *)v731 + 5) = v737;
        v739 = *((_OWORD *)v732 + 7);
        v732 += 16;
        *((_OWORD *)v731 + 6) = v738;
        v731 += 16;
        *((_OWORD *)v731 - 1) = v739;
        --v730;
      }
      while ( v730 );
      v740 = *((_OWORD *)v732 + 1);
      *(_OWORD *)v731 = *(_OWORD *)v732;
      v741 = *((_OWORD *)v732 + 2);
      *((_OWORD *)v731 + 1) = v740;
      v742 = *((_OWORD *)v732 + 3);
      *((_OWORD *)v731 + 2) = v741;
      v743 = *((_OWORD *)v732 + 4);
      *((_OWORD *)v731 + 3) = v742;
      v744 = *((_OWORD *)v732 + 5);
      *((_OWORD *)v731 + 4) = v743;
      v745 = *((_OWORD *)v732 + 6);
      *((_OWORD *)v731 + 5) = v744;
      *((_OWORD *)v731 + 6) = v745;
    }
  }
  _InterlockedExchange(&dword_18089D738, 0);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1740);
  if ( v633 < 0 )
    goto LABEL_1067;
  v746 = v1839;
  v1747 = v1839;
  v1787 = 0;
  memset_0(v1788, 0, 0x64uLL);
  v747 = 1;
  v748 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180891390[0])(v1368, 7LL);
  if ( v748 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v748, 104LL, &v1787) )
  {
    if ( v1789 != 32 || !v1790 || v1788[0] <= 0 || v1788[1] <= 0 )
      v747 = 0;
    if ( v747 )
    {
LABEL_953:
      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_180891490)(&v1824, v746, HIDWORD(v1747));
      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_180891490)(&v1825, v746, HIDWORD(v1747));
      v783 = v1603;
      if ( v1603 == 1 )
        dwBytesc = ((__int64 (__fastcall *)(_QWORD))off_180891368[0])(v1816 == 0 ? 0xB26720 : 0);
      goto LABEL_956;
    }
  }
  else
  {
    v747 = 0;
  }
  if ( v1603 == 1 )
    goto LABEL_953;
  v783 = v1603;
LABEL_956:
  v1501 = off_1808913C0(v1368, (struct CSingleViewShellExperience *)1);
  v784 = 2064;
  if ( v1815 )
    v784 = 133138;
  v1583 = v784;
  if ( !v747 )
  {
    if ( v1816 || (v844 = -64, v783 == 1) )
      v844 = -1;
    BYTE2(v1470) = v844;
    LOWORD(v1470) = 0;
    HIBYTE(v1470) = 1;
    v1569 = 0;
    v1592 = 0;
    v1559 = 0;
    v1524 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180891350[0])(v1368);
    if ( !v1524 )
    {
LABEL_1044:
      GetLastError();
      goto LABEL_1065;
    }
    if ( v783 == 1 )
    {
      v845 = v1825.m128i_i32[2] - v1825.m128i_i32[0];
      if ( v1825.m128i_i32[2] - v1825.m128i_i32[0] <= v1824.m128i_i32[2] - v1824.m128i_i32[0] )
        v845 = v1824.m128i_i32[2] - v1824.m128i_i32[0];
      v846 = v1825.m128i_i32[3] - v1824.m128i_i32[1];
      v1553 = v845;
      v847 = 0;
      v1632 = v1825.m128i_i32[3] - v1824.m128i_i32[1];
      v848 = 0;
      if ( v1815 )
      {
        v1569 = v1824.m128i_i32[0] + v845 - v1824.m128i_i32[2];
        v847 = v1569;
        v1559 = v1825.m128i_i32[0] + v845 - v1825.m128i_i32[2];
        v846 = v1825.m128i_i32[3] - v1824.m128i_i32[1];
        v848 = v1559;
      }
      v849 = v1824.m128i_i32[2] + v847 - v1824.m128i_i32[0];
      v1635 = v1824.m128i_i32[3] - v1824.m128i_i32[1];
      v850 = v1825.m128i_i32[2] + v848 - v1825.m128i_i32[0];
      v1609 = v1825.m128i_i32[1] - v1824.m128i_i32[1];
      v1530 = v1825.m128i_i32[3] - v1824.m128i_i32[1];
    }
    else
    {
      v845 = DWORD2(v1839);
      v846 = HIDWORD(v1839);
      v1553 = DWORD2(v1839);
      v1635 = _mm_cvtsi128_si32(_mm_srli_si128(v1824, 12));
      v1592 = _mm_cvtsi128_si32(_mm_srli_si128(v1824, 4));
      v1530 = _mm_cvtsi128_si32(_mm_srli_si128(v1825, 12));
      v849 = _mm_cvtsi128_si32(_mm_srli_si128(v1824, 8));
      v1609 = _mm_cvtsi128_si32(_mm_srli_si128(v1825, 4));
      v1632 = HIDWORD(v1839);
      v1569 = _mm_cvtsi128_si32(v1824);
      v850 = _mm_cvtsi128_si32(_mm_srli_si128(v1825, 8));
      v1559 = _mm_cvtsi128_si32(v1825);
    }
    v1750 = 0LL;
    v1853[2] = -v846;
    memset(&v1853[4], 0, 28);
    v1853[0] = 40;
    v1853[1] = v845;
    v1853[3] = 2097153;
    v851 = ((__int64 (__fastcall *)(size_t, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
             v1524,
             v1853,
             0LL,
             &v1750,
             0LL,
             0);
    Sizeb = v851;
    if ( !v851 )
    {
      GetLastError();
      v843 = v1524;
      goto LABEL_1064;
    }
    ((void (__fastcall *)(size_t, __int64))off_1808913B8)(v1524, v851);
    if ( v1603 == 1 && dwBytesc )
    {
      v1834 = 0LL;
      v1836 = v1632;
      v1835 = v845;
      ((void (__fastcall *)(size_t, __int64 *))off_180891428[0])(v1524, &v1834);
    }
    v1427 = v1816;
    v1416 = v1820;
    v1396 = (unsigned __int16 *)v1817;
    v1803 = 0;
    memset_0(v1804, 0, 0x64uLL);
    v1806 = 0;
    memset_0(v1807, 0, 0x64uLL);
    v1543 = 0LL;
    lpModuleNamef = 0;
    lpMemf = 0;
    v1862 = 0LL;
    v1864 = 0LL;
    v1863 = 0LL;
    v1865 = 0;
    v1837 = 0LL;
    if ( !v1396 )
      goto LABEL_1060;
    v852 = ((__int64 (__fastcall *)(size_t, __int64))off_180891390[0])(v1524, 7LL);
    if ( v852 )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v852, 104LL, &v1803) )
      {
        v1543 = v1805;
        lpModuleNamef = v1804[0];
        lpMemf = v1804[1];
      }
      v1647 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(size_t))off_180891350[0])(v1524);
      if ( v1647 )
      {
        v940 = v849 - v1569;
        DWORD2(v1862) = v1592 - v1635;
        v1752 = 0LL;
        v1864 = 0LL;
        v1865 = 0;
        v1863 = 0LL;
        LODWORD(v1862) = 40;
        DWORD1(v1862) = v940;
        HIDWORD(v1862) = 2097153;
        v941 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                 v1647,
                 &v1862,
                 0LL,
                 &v1752,
                 0LL,
                 0);
        v1595 = (LPCWSTR)v941;
        if ( v941 )
        {
          v944 = ((__int64 (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v941, 104LL, &v1806);
          DWORD2(v1837) = v940;
          v945 = 0LL;
          if ( v944 )
            v945 = v1808;
          HIDWORD(v1837) = v1635 - v1592;
          v1474 = v945;
          ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(v1647, v1595);
          off_1808913C0(v1647, (struct CSingleViewShellExperience *)1);
          v946 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808913B8)(v1647, v1416);
          v947 = off_180891428[0];
          v1417 = v946;
          v948 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
          ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v947)(v1647, &v1837, v948);
          ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_180891418)(
            v1647,
            v1396,
            0xFFFFFFFFLL,
            &v1837,
            v1583,
            0LL);
          if ( v1603 == 1 )
          {
            if ( v1427 )
              v949 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
            else
              v949 = 0xFFFFFF;
          }
          else
          {
            v949 = -5723992;
          }
          v950 = 0;
          v951 = 0;
          v1429 = v949;
          v952 = -v1569;
          if ( v1569 >= 0 )
          {
            v950 = v1569;
            v952 = 0;
          }
          v953 = -v1592;
          if ( v1592 >= 0 )
          {
            v951 = v1592;
            v953 = 0;
          }
          v954 = DWORD2(v1837) - v952;
          if ( DWORD2(v1837) - v952 >= lpModuleNamef - v950 )
            v954 = lpModuleNamef - v950;
          v955 = HIDWORD(v1837) - v953;
          if ( HIDWORD(v1837) - v953 >= lpMemf - v951 )
            v955 = lpMemf - v951;
          v942 = 0;
          lpMemh = v955;
          if ( v954 > 0 && v955 > 0 )
          {
            v956 = v954;
            v1636 = 0;
            v1570 = 0;
            v957 = (unsigned __int8 *)&v1474[4 * v952 + 4 * (__int64)(v953 * DWORD2(v1837))];
            v1475 = v957;
            v958 = (unsigned __int16 *)(v1543 + 4 * (v950 + (__int64)(v951 * lpModuleNamef)));
            v959 = 4LL * SDWORD2(v1837);
            v960 = 0;
            v1593 = 2LL * lpModuleNamef;
            v1397 = v958;
            do
            {
              lpModuleNameh = 0;
              v961 = (char *)v958 - (char *)v957;
              v962 = v957 + 2;
              v963 = 0;
              do
              {
                if ( (unsigned __int8)((*v962 + *(v962 - 2) + 2 * (unsigned int)*(v962 - 1)) >> 2) != 0xFF )
                {
                  v964 = (unsigned __int8)~((*v962 + *(v962 - 2) + 2 * (unsigned int)*(v962 - 1)) >> 2);
                  v962[v961] -= ~((*v962 + *(v962 - 2) + 2 * (unsigned int)*(v962 - 1)) >> 2) * (v1429 - v962[v961]);
                  v965 = v962[v961 - 1];
                  v966 = (unsigned __int64)(2155905153LL * v964 * (BYTE1(v1429) - v965)) >> 32;
                  v962[v961 - 1] = v965 + (v966 >> 7 < 0) + (v966 >> 7);
                  v967 = v962[v961 - 2];
                  v968 = (unsigned __int64)(2155905153LL * v964 * (BYTE2(v1429) - v967)) >> 32;
                  v960 = v1570;
                  v962[v961 - 2] = v967 + (v968 >> 7 < 0) + (v968 >> 7);
                  v969 = v962[v961 + 1];
                  v970 = v964 * (255 - v969);
                  v963 = lpModuleNameh;
                  v962[v961 + 1] = v969 + v970 / 255;
                }
                ++v963;
                v962 += 4;
                lpModuleNameh = v963;
                v942 = v960;
              }
              while ( v963 < v956 );
              v957 = &v1475[v959];
              v958 = &v1397[v1593];
              v1475 += v959;
              v1397 = (unsigned __int16 *)((char *)v1397 + v1593 * 2);
              ++v1636;
              v1570 = v960;
            }
            while ( v1636 < lpMemh );
            v93 = v1651;
            v845 = v1553;
          }
          ((void (__fastcall *)(LPCWSTR))off_180891378)(v1595);
          if ( v1417 )
            ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808913B8)(v1647, v1417);
        }
        else
        {
          v942 = GetLastError();
          v943 = v942 < 0;
          if ( v942 > 0 )
          {
            v942 = (unsigned __int16)v942 | 0x80070000;
            v943 = v942 < 0;
          }
          if ( !v943 )
            v942 = -2147467259;
        }
        ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(v1647);
        if ( v942 < 0 )
          goto LABEL_1060;
        v971 = v1818;
        lpMemi = v1816;
        v1809 = 0;
        v1476 = v1821;
        v1596 = (LPCWSTR)v1818;
        memset_0(v1810, 0, 0x64uLL);
        v1812 = 0;
        memset_0(v1813, 0, 0x64uLL);
        v1648 = 0LL;
        v790 = v971 == 0LL;
        lpModuleNamei = 0;
        v843 = v1524;
        v1430 = 0;
        v1849 = 0LL;
        v1851 = 0LL;
        v1850 = 0LL;
        v1852 = 0;
        v1838 = 0LL;
        if ( v790 )
          goto LABEL_1061;
        v972 = ((__int64 (__fastcall *)(size_t, __int64))off_180891390[0])(v1524, 7LL);
        if ( !v972 )
        {
          GetLastError();
          goto LABEL_1061;
        }
        if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v972, 104LL, &v1809) )
        {
          v1648 = v1811;
          lpModuleNamei = v1810[0];
          v1430 = v1810[1];
        }
        v1418 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(size_t))off_180891350[0])(v1524);
        if ( v1418 )
        {
          v973 = v850 - v1559;
          DWORD2(v1849) = v1609 - v1530;
          v1755[0] = 0LL;
          v1851 = 0LL;
          v1852 = 0;
          v1850 = 0LL;
          LODWORD(v1849) = 40;
          DWORD1(v1849) = v973;
          HIDWORD(v1849) = 2097153;
          v974 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_180891358[0])(
                   v1418,
                   &v1849,
                   0LL,
                   v1755,
                   0LL,
                   0);
          v1398 = (unsigned __int16 *)v974;
          if ( !v974 )
          {
            v975 = GetLastError();
            v976 = v975 < 0;
            if ( v975 > 0 )
            {
              v975 = (unsigned __int16)v975 | 0x80070000;
              v976 = v975 < 0;
            }
            if ( !v976 )
              v975 = -2147467259;
            v977 = v1418;
            goto LABEL_1188;
          }
          v978 = ((__int64 (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v974, 104LL, &v1812);
          DWORD2(v1838) = v973;
          v979 = 0LL;
          if ( v978 )
            v979 = v1814;
          HIDWORD(v1838) = v1530 - v1609;
          v1544 = v979;
          ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808913B8)(v1418, v1398);
          off_1808913C0(v1418, (struct CSingleViewShellExperience *)1);
          v980 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808913B8)(v1418, v1476);
          v981 = off_180891428[0];
          v1477 = (LPVOID)v980;
          v982 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
          v977 = v1418;
          ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v981)(v1418, &v1838, v982);
          v975 = 0;
          ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR, __int64, __int128 *, int, _QWORD))off_180891418)(
            v1418,
            v1596,
            0xFFFFFFFFLL,
            &v1838,
            v1583,
            0LL);
          if ( v1603 == 1 )
          {
            if ( !lpMemi )
            {
              lpMemj = 0xFFFFFF;
LABEL_1169:
              v984 = 0;
              v985 = -v1559;
              v986 = 0;
              if ( v1559 >= 0 )
              {
                v984 = v1559;
                v985 = 0;
              }
              v987 = -v1609;
              if ( v1609 >= 0 )
              {
                v986 = v1609;
                v987 = 0;
              }
              v988 = DWORD2(v1838) - v985;
              if ( DWORD2(v1838) - v985 >= lpModuleNamei - v984 )
                v988 = lpModuleNamei - v984;
              v989 = HIDWORD(v1838) - v987;
              if ( HIDWORD(v1838) - v987 >= v1430 - v986 )
                v989 = v1430 - v986;
              if ( v988 > 0 && v989 > 0 )
              {
                v990 = lpModuleNamei;
                v991 = lpModuleNamei * v986;
                lpModuleNamej = 0;
                v992 = (const WCHAR *)(v1544 + 4 * (v985 + (__int64)(v987 * DWORD2(v1838))));
                v1597 = v992;
                v993 = &v1648[4 * v984 + 4 * (__int64)v991];
                v1545 = 2LL * SDWORD2(v1838);
                v1620 = 4 * v990;
                v1649 = v993;
                do
                {
                  v994 = (unsigned __int8 *)(v992 + 1);
                  v995 = v993 - (char *)v992;
                  for ( nn = 0; nn < v988; ++nn )
                  {
                    if ( (unsigned __int8)((*v994 + *(v994 - 2) + 2 * (unsigned int)*(v994 - 1)) >> 2) != 0xFF )
                    {
                      v997 = (unsigned __int8)~((*v994 + *(v994 - 2) + 2 * (unsigned int)*(v994 - 1)) >> 2);
                      v994[v995] -= ~((*v994 + *(v994 - 2) + 2 * (unsigned int)*(v994 - 1)) >> 2) * (v1644 - v994[v995]);
                      v998 = v994[v995 - 1];
                      v999 = (unsigned __int64)(2155905153LL * v997 * (BYTE1(lpMemj) - v998)) >> 32;
                      v994[v995 - 1] = v998 + (v999 >> 7 < 0) + (v999 >> 7);
                      v1000 = v994[v995 - 2];
                      v1001 = (unsigned __int64)(2155905153LL * v997 * (BYTE2(lpMemj) - v1000)) >> 32;
                      v994[v995 - 2] = v1000 + (v1001 >> 7 < 0) + (v1001 >> 7);
                      v994[v995 + 1] += v997 * (255 - v994[v995 + 1]) / 255;
                    }
                    v994 += 4;
                    v975 = 0;
                  }
                  v992 = &v1597[v1545];
                  v993 = &v1649[v1620];
                  v1597 = (LPCWSTR)((char *)v1597 + v1545 * 2);
                  v1649 += v1620;
                  ++lpModuleNamej;
                }
                while ( lpModuleNamej < v989 );
                v93 = v1651;
                v845 = v1553;
                v977 = v1418;
              }
              ((void (__fastcall *)(unsigned __int16 *))off_180891378)(v1398);
              if ( v1477 )
                ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808913B8)(v977, v1477);
LABEL_1188:
              ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(v977);
              if ( v975 >= 0 )
              {
                v843 = v1524;
                v842 = v1368;
                if ( v1603 == 1 )
                  ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, int))off_180891340[0])(
                    v1368,
                    v1824.m128i_u32[0],
                    v1824.m128i_u32[1],
                    v845,
                    v1632,
                    v1524,
                    0,
                    0,
                    13369376);
                else
                  ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, unsigned __int32, __int32, int))off_180891380[0])(
                    v1368,
                    (unsigned int)v1839,
                    DWORD1(v1839),
                    v845,
                    v1632,
                    v1524,
                    0,
                    0,
                    v845,
                    v1632,
                    v1470);
LABEL_1192:
                off_1808913C0(v842, (struct CSingleViewShellExperience *)v1501);
                v853 = Sizeb;
                if ( !Sizeb )
                {
LABEL_1063:
                  if ( !v843 )
                    goto LABEL_1065;
LABEL_1064:
                  ((void (__fastcall *)(size_t))off_180891370[0])(v843);
                  goto LABEL_1065;
                }
LABEL_1062:
                ((void (__fastcall *)(SIZE_T))off_180891378)(v853);
                goto LABEL_1063;
              }
              goto LABEL_1060;
            }
            v983 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
          }
          else
          {
            v983 = -5723992;
          }
          lpMemj = v983;
          v1644 = v983;
          goto LABEL_1169;
        }
      }
    }
    GetLastError();
LABEL_1060:
    v843 = v1524;
LABEL_1061:
    v853 = Sizeb;
    goto LABEL_1062;
  }
  v785 = v1817;
  v1466 = v1816;
  v1412 = v1820;
  v1392 = (unsigned __int16 *)v1817;
  v1791 = 0;
  memset_0(v1792, 0, 0x64uLL);
  v1794 = 0;
  memset_0(v1795, 0, 0x64uLL);
  v1540 = 0LL;
  v1566 = 0;
  v1590 = 0;
  v1856 = 0LL;
  v1857 = 0;
  v1854 = 0LL;
  v1855 = 0LL;
  v1840 = 0LL;
  if ( v785 )
  {
    v786 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180891390[0])(v1368, 7LL);
    if ( !v786 )
      goto LABEL_1044;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v786, 104LL, &v1791) )
    {
      v1540 = v1793;
      v1566 = v1792[0];
      v1590 = v1792[1];
    }
    lpMemd = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180891350[0])(v1368);
    v787 = lpMemd;
    if ( !lpMemd )
      goto LABEL_1044;
    DWORD1(v1854) = v1824.m128i_i32[2] - v1824.m128i_i32[0];
    DWORD2(v1854) = v1824.m128i_i32[1] - v1824.m128i_i32[3];
    v1748 = 0LL;
    v1856 = 0LL;
    v1857 = 0;
    v1855 = 0LL;
    LODWORD(v1854) = 40;
    HIDWORD(v1854) = 2097153;
    lpModuleNamec = (LPCWSTR)((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                               lpMemd,
                               &v1854,
                               0LL,
                               &v1748,
                               0LL,
                               0);
    if ( lpModuleNamec )
    {
      v790 = ((unsigned int (__fastcall *)(LPCWSTR, __int64, int *))off_1808913A8[0])(lpModuleNamec, 104LL, &v1794) == 0;
      v791 = 0LL;
      if ( !v790 )
        v791 = v1796;
      DWORD2(v1840) = v1824.m128i_i32[2] - v1824.m128i_i32[0];
      HIDWORD(v1840) = v1824.m128i_i32[3] - v1824.m128i_i32[1];
      v1424 = v791;
      ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(lpMemd, lpModuleNamec);
      off_1808913C0(lpMemd, (struct CSingleViewShellExperience *)1);
      v792 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808913B8)(lpMemd, v1412);
      v793 = off_180891428[0];
      v1413 = v792;
      v794 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
      ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v793)(lpMemd, &v1840, v794);
      v788 = 0;
      ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_180891418)(
        lpMemd,
        v1392,
        0xFFFFFFFFLL,
        &v1840,
        v1583,
        0LL);
      if ( v1603 == 1 )
      {
        if ( v1466 )
          v1467 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
        else
          v1467 = 0xFFFFFF;
      }
      else
      {
        v1467 = -5723992;
      }
      v795 = 0;
      v796 = -v1824.m128i_i32[0];
      v797 = 0;
      if ( v1824.m128i_i32[0] >= 0 )
      {
        v795 = v1824.m128i_i32[0];
        v796 = 0;
      }
      v798 = -v1824.m128i_i32[1];
      if ( v1824.m128i_i32[1] >= 0 )
      {
        v797 = v1824.m128i_i32[1];
        v798 = 0;
      }
      v799 = DWORD2(v1840) - v796;
      if ( DWORD2(v1840) - v796 >= v1566 - v795 )
        v799 = v1566 - v795;
      v800 = HIDWORD(v1840) - v798;
      if ( HIDWORD(v1840) - v798 >= v1590 - v797 )
        v800 = v1590 - v797;
      if ( v799 > 0 && v800 > 0 )
      {
        v801 = v1566;
        v802 = v799;
        v803 = (unsigned __int16 *)(v1424 + 4 * (v796 + (__int64)(DWORD2(v1840) * v798)));
        v804 = v1566 * v797;
        v805 = 0;
        v1393 = v803;
        v1567 = 0;
        v806 = v1540 + 4 * (v795 + v804);
        v1425 = 2LL * SDWORD2(v1840);
        v1528 = 4 * v801;
        v1541 = v806;
        while ( 1 )
        {
          v807 = (unsigned __int8 *)(v803 + 1);
          v1558 = 0;
          v808 = v806 - (_QWORD)v803;
          do
          {
            if ( (unsigned __int8)((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2) != 0xFF )
            {
              v809 = (unsigned __int8)~((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2);
              v807[v808] -= ~((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2) * (v1467 - v807[v808]);
              v810 = v807[v808 - 1];
              v811 = (unsigned __int64)(2155905153LL * v809 * (BYTE1(v1467) - v810)) >> 32;
              v807[v808 - 1] = v810 + (v811 >> 7 < 0) + (v811 >> 7);
              v812 = v807[v808 - 2];
              v813 = (unsigned __int64)(2155905153LL * v809 * (BYTE2(v1467) - v812)) >> 32;
              v807[v808 - 2] = v812 + (v813 >> 7 < 0) + (v813 >> 7);
              v814 = v807[v808 + 1];
              v815 = v809 * (255 - v814);
              v805 = v1558;
              v807[v808 + 1] = v814
                             + ((((unsigned __int64)(2155905153LL * v815) >> 32) & 0x80000000) != 0LL)
                             + ((int)((unsigned __int64)(2155905153LL * v815) >> 32) >> 7);
            }
            ++v805;
            v807 += 4;
            v1558 = v805;
            v788 = 0;
          }
          while ( v805 < v802 );
          v803 = &v1393[v1425];
          v806 = v1528 + v1541;
          v1393 = (unsigned __int16 *)((char *)v1393 + v1425 * 2);
          v1541 += v1528;
          if ( ++v1567 >= v800 )
            break;
          v805 = 0;
        }
        v93 = v1651;
        v787 = lpMemd;
      }
      ((void (__fastcall *)(LPCWSTR))off_180891378)(lpModuleNamec);
      if ( v1413 )
        ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808913B8)(v787, v1413);
    }
    else
    {
      v788 = GetLastError();
      v789 = v788 < 0;
      if ( v788 > 0 )
      {
        v788 = (unsigned __int16)v788 | 0x80070000;
        v789 = v788 < 0;
      }
      if ( !v789 )
        v788 = -2147467259;
    }
    ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(v787);
    if ( v788 >= 0 )
    {
      v816 = v1818;
      v1468 = v1816;
      v1414 = (SIZE_T)v1821;
      v1797 = 0;
      memset_0(v1798, 0, 0x64uLL);
      v1800 = 0;
      memset_0(v1801, 0, 0x64uLL);
      v1394 = 0LL;
      v1568 = 0;
      v1591 = 0;
      v1860 = 0LL;
      v1861 = 0;
      v1858 = 0LL;
      v1859 = 0LL;
      v1841 = 0LL;
      if ( v816 )
      {
        v817 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180891390[0])(v1368, 7LL);
        if ( !v817 )
          goto LABEL_1044;
        if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v817, 104LL, &v1797) )
        {
          v1394 = v1799;
          v1568 = v1798[0];
          v1591 = v1798[1];
        }
        v1542 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180891350[0])(v1368);
        v818 = v1542;
        if ( !v1542 )
          goto LABEL_1044;
        DWORD1(v1858) = v1825.m128i_i32[2] - v1825.m128i_i32[0];
        DWORD2(v1858) = v1825.m128i_i32[1] - v1825.m128i_i32[3];
        v1749 = 0LL;
        v1860 = 0LL;
        v1861 = 0;
        v1859 = 0LL;
        LODWORD(v1858) = 40;
        HIDWORD(v1858) = 2097153;
        lpMeme = (LPVOID)((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                           v1542,
                           &v1858,
                           0LL,
                           &v1749,
                           0LL,
                           0);
        if ( !lpMeme )
        {
          v819 = GetLastError();
          v820 = v819 < 0;
          if ( v819 > 0 )
          {
            v819 = (unsigned __int16)v819 | 0x80070000;
            v820 = v819 < 0;
          }
          if ( !v820 )
            v819 = -2147467259;
          goto LABEL_1038;
        }
        v790 = ((unsigned int (__fastcall *)(LPVOID, __int64, int *))off_1808913A8[0])(lpMeme, 104LL, &v1800) == 0;
        v821 = 0LL;
        if ( !v790 )
          v821 = v1802;
        DWORD2(v1841) = v1825.m128i_i32[2] - v1825.m128i_i32[0];
        HIDWORD(v1841) = v1825.m128i_i32[3] - v1825.m128i_i32[1];
        lpModuleNamed = v821;
        ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808913B8)(v1542, lpMeme);
        off_1808913C0(v1542, (struct CSingleViewShellExperience *)1);
        v822 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808913B8)(v1542, v1414);
        v823 = off_180891428[0];
        v1415 = v822;
        v824 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
        ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v823)(v1542, &v1841, v824);
        v819 = 0;
        ((void (__fastcall *)(CToastCenterExperienceManager *, void *, __int64, __int128 *, int, _QWORD))off_180891418)(
          v1542,
          v816,
          0xFFFFFFFFLL,
          &v1841,
          v1583,
          0LL);
        if ( v1603 == 1 )
        {
          if ( v1468 )
          {
            v825 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
            goto LABEL_1018;
          }
          v1604 = 0xFFFFFF;
        }
        else
        {
          v825 = -5723992;
LABEL_1018:
          v1604 = v825;
          v1644 = v825;
        }
        v826 = 0;
        v827 = -v1825.m128i_i32[0];
        v828 = 0;
        if ( v1825.m128i_i32[0] >= 0 )
        {
          v826 = v1825.m128i_i32[0];
          v827 = 0;
        }
        v829 = -v1825.m128i_i32[1];
        if ( v1825.m128i_i32[1] >= 0 )
        {
          v829 = 0;
          v828 = v1825.m128i_i32[1];
        }
        v830 = DWORD2(v1841) - v827;
        if ( DWORD2(v1841) - v827 >= v1568 - v826 )
          v830 = v1568 - v826;
        v831 = HIDWORD(v1841) - v829;
        if ( HIDWORD(v1841) - v829 >= v1591 - v828 )
          v831 = v1591 - v828;
        if ( v830 > 0 && v831 > 0 )
        {
          v1469 = 0;
          v832 = &lpModuleNamed[2 * v827 + 2 * (__int64)(v829 * DWORD2(v1841))];
          lpModuleNamee = v832;
          v833 = &v1394[2 * v826 + 2 * (__int64)(v1568 * v828)];
          v1426 = 2LL * SDWORD2(v1841);
          v1529 = 2LL * v1568;
          v1395 = v833;
          do
          {
            v834 = (unsigned __int8 *)(v832 + 1);
            v835 = (char *)v833 - (char *)v832;
            for ( i1 = 0; i1 < v830; ++i1 )
            {
              if ( (unsigned __int8)((*v834 + *(v834 - 2) + 2 * (unsigned int)*(v834 - 1)) >> 2) != 0xFF )
              {
                v837 = (unsigned __int8)~((*v834 + *(v834 - 2) + 2 * (unsigned int)*(v834 - 1)) >> 2);
                v834[v835] -= ~((*v834 + *(v834 - 2) + 2 * (unsigned int)*(v834 - 1)) >> 2) * (v1644 - v834[v835]);
                v838 = v834[v835 - 1];
                v839 = (unsigned __int64)(2155905153LL * v837 * (BYTE1(v1604) - v838)) >> 32;
                v834[v835 - 1] = v838 + (v839 >> 7 < 0) + (v839 >> 7);
                v840 = v834[v835 - 2];
                v841 = (unsigned __int64)(2155905153LL * v837 * (BYTE2(v1604) - v840)) >> 32;
                v834[v835 - 2] = v840 + (v841 >> 7 < 0) + (v841 >> 7);
                v834[v835 + 1] += v837 * (255 - v834[v835 + 1]) / 255;
              }
              v834 += 4;
              v819 = 0;
            }
            v832 = &lpModuleNamee[v1426];
            v833 = &v1395[v1529];
            lpModuleNamee = (LPCWSTR)((char *)lpModuleNamee + v1426 * 2);
            v1395 = (unsigned __int16 *)((char *)v1395 + v1529 * 2);
            ++v1469;
          }
          while ( v1469 < v831 );
          v93 = v1651;
          v818 = v1542;
        }
        ((void (__fastcall *)(LPVOID))off_180891378)(lpMeme);
        if ( v1415 )
          ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808913B8)(v818, v1415);
LABEL_1038:
        ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(v818);
        if ( v819 >= 0 )
        {
          v842 = v1368;
          v843 = 0LL;
          goto LABEL_1192;
        }
      }
    }
  }
LABEL_1065:
  if ( dwBytesc )
    ((void (__fastcall *)(SIZE_T))off_180891378)(dwBytesc);
LABEL_1067:
  if ( v1817 )
  {
    v854 = -1LL;
    do
      ++v854;
    while ( *((_WORD *)v1817 + v854) );
    memset(v1817, 0, 2 * v854 + 2);
    MemoryFree(v1817);
    v1817 = 0LL;
  }
  if ( v1818 )
  {
    v855 = -1LL;
    do
      ++v855;
    while ( *((_WORD *)v1818 + v855) );
    memset(v1818, 0, 2 * v855 + 2);
    MemoryFree(v1818);
    v1818 = 0LL;
  }
  if ( v1819 )
  {
    v856 = -1LL;
    do
      ++v856;
    while ( *((_WORD *)v1819 + v856) );
    memset(v1819, 0, 2 * v856 + 2);
    MemoryFree(v1819);
    v1819 = 0LL;
  }
  if ( v1820 )
  {
    off_180891378();
    v1820 = 0LL;
  }
  if ( v1821 )
  {
    off_180891378();
    v1821 = 0LL;
  }
  if ( v1822 )
  {
    off_180891378();
    v1822 = 0LL;
  }
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v857 = dword_18089D72C;
  if ( dword_18089D72C > 0 )
  {
    --dword_18089D72C;
    if ( v857 == 1 )
    {
      v858 = 4LL;
      v859 = (HMODULE *)&unk_180899E50;
      do
      {
        if ( *v859 )
          FreeLibrary(*v859);
        v859 += 3;
        --v858;
      }
      while ( v858 );
      memset_0(&unk_180899E50, 0, 0x60uLL);
      v860 = 2LL;
      v861 = off_180891340;
      v862 = off_1806EF510;
      do
      {
        v863 = *((_OWORD *)v862 + 1);
        *(_OWORD *)v861 = *(_OWORD *)v862;
        v864 = *((_OWORD *)v862 + 2);
        *((_OWORD *)v861 + 1) = v863;
        v865 = *((_OWORD *)v862 + 3);
        *((_OWORD *)v861 + 2) = v864;
        v866 = *((_OWORD *)v862 + 4);
        *((_OWORD *)v861 + 3) = v865;
        v867 = *((_OWORD *)v862 + 5);
        *((_OWORD *)v861 + 4) = v866;
        v868 = *((_OWORD *)v862 + 6);
        *((_OWORD *)v861 + 5) = v867;
        v869 = *((_OWORD *)v862 + 7);
        v862 += 16;
        *((_OWORD *)v861 + 6) = v868;
        v861 += 16;
        *((_OWORD *)v861 - 1) = v869;
        --v860;
      }
      while ( v860 );
      v870 = *((_OWORD *)v862 + 1);
      *(_OWORD *)v861 = *(_OWORD *)v862;
      v871 = *((_OWORD *)v862 + 2);
      *((_OWORD *)v861 + 1) = v870;
      v872 = *((_OWORD *)v862 + 3);
      *((_OWORD *)v861 + 2) = v871;
      v873 = *((_OWORD *)v862 + 4);
      *((_OWORD *)v861 + 3) = v872;
      v874 = *((_OWORD *)v862 + 5);
      *((_OWORD *)v861 + 4) = v873;
      v875 = *((_OWORD *)v862 + 6);
      *((_OWORD *)v861 + 5) = v874;
      *((_OWORD *)v861 + 6) = v875;
    }
  }
  _InterlockedExchange(&dword_18089D738, 0);
  lpMemg = dword_180899E48;
  v876 = off_1808913D8[0]();
  v1880 = 0;
  v877 = v876 - qword_18089D730;
  v1473 = v876 - qword_18089D730;
  v1884 = 0LL;
  v1881 = 0LL;
  v1882 = 0LL;
  v1883 = 0LL;
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v878 = dword_18089D72C;
  if ( dword_18089D72C )
  {
LABEL_1223:
    v923 = (HMODULE *)&unk_180899E50;
    dword_18089D72C = v878 + 1;
    goto LABEL_1224;
  }
  lpModuleNameg = 0;
  v1428 = 0;
  v1531 = 0;
  v879 = (char *)MemoryAlloc(0x338uLL);
  v1594 = (WCHAR *)v879;
  if ( !v879 )
    goto LABEL_1106;
  v880 = 0;
  v881 = v879 + 7;
  v882 = -1;
  v883 = (unsigned __int8 *)&unk_1807573B2;
  v884 = 0;
  v885 = 103LL;
  v886 = 0;
  do
  {
    v887 = *(v883 - 1) | (*(v883 - 2) << 8);
    v888 = v883[2] << 8;
    v889 = *v883;
    v883 += 8;
    v890 = *(v883 - 7) | ((v889 | (v887 << 8)) << 8);
    v891 = v890 ^ v886;
    v892 = *(v883 - 3) | ((*(v883 - 4) | ((*(v883 - 5) | v888) << 8)) << 8);
    v893 = v892 ^ v884 ^ v891 ^ 0xAC987321;
    v894 = (__ROR4__(v893, 22) + 4991 * __ROR4__(v893 + 1419157410, 27)) ^ v891;
    v895 = (43881 * __ROR4__(v894 + 133239679, 9) - __ROR4__(v894, 30)) ^ v893;
    v896 = (24670 * v895 - (v895 >> 13) - 123127970) ^ v894;
    v897 = (2033 * __ROR4__(v896 ^ 0xAB69, 26) - __ROR4__(v896, 30)) ^ v895;
    v898 = (133239679 - (v897 ^ 0xAB69605E)) ^ v896;
    v899 = (43881 * (v898 ^ 0x137F)) ^ __ROR4__(v898, 6) ^ v897;
    v900 = (__ROR4__(v899, 30) + 24670 * __ROR4__(v899 + 133239679, 15)) ^ v898;
    v901 = (2033 * __ROR4__(v900 + 1419157410, 14) - __ROR4__(v900, 24)) ^ v899;
    v902 = __ROR4__(v901, 10) ^ (4991 * __ROR4__(v901 ^ 0xAB69605E, 12)) ^ v900;
    v903 = v901 ^ (v902 >> 10) ^ (43881 * (v902 ^ 0x7F1));
    v904 = (2033 * (__ROR4__(~v903, 5) + 24670)) ^ v902;
    v905 = v903 ^ (v904 - 2033) ^ 0xAB69605E;
    v906 = ((v905 >> 2) + 4991 * __ROR4__(v903 ^ (v904 - 2033) ^ 0xAB6967AF, 30)) ^ v904;
    v907 = (__ROR4__(v906, 25) + 43881 * __ROR4__(v906 - 133239679, 6)) ^ v905;
    v908 = (24670 * (v907 ^ 0x137F) + __ROR4__(v907, 9)) ^ v906;
    v909 = (__ROR4__(v908, 25) + 2033 * __ROR4__(v908 ^ 0xAB69, 27)) ^ v907;
    v910 = v909 ^ v908 ^ 0xAC987321;
    v911 = (4991 * __ROR4__(v910, 3) - 219010071) ^ v909;
    v912 = (24670 * __ROR4__(v911 - 133239679, 1) - __ROR4__(v911, 6)) ^ v910;
    v913 = (__ROR4__(v912, 18) + 2033 * __ROR4__(v912 - 1419157410, 29)) ^ v911;
    v914 = (4991 * __ROR4__(v913 - 1419157410, 17) - __ROR4__(v913, 14)) ^ v912;
    v915 = (v914 >> 3) ^ (43881 * (v914 ^ 0x605E)) ^ v913;
    v916 = 24670 * __ROR4__(v915 ^ 0x7F1137F, 28);
    v917 = __ROR4__(v915, 30);
    v884 = v882 ^ v915;
    v882 = v892;
    v886 = v880 ^ v914 ^ v917 ^ v916;
    *(v881 - 4) = v886;
    *v881 = v884;
    v881 += 8;
    v880 = v890;
    *(v881 - 13) = BYTE1(v886);
    *(v881 - 9) = BYTE1(v884);
    *(v881 - 14) = (unsigned __int16)(v886 >> 8) >> 8;
    *(v881 - 10) = (unsigned __int16)(v884 >> 8) >> 8;
    *(v881 - 15) = __ROR4__((((v886 >> 8) | (v886 << 24)) >> 8) | (((v886 >> 8) | (v886 << 24)) << 24), 8);
    *(v881 - 11) = __ROR4__((((v884 >> 8) | (v884 << 24)) >> 8) | (((v884 >> 8) | (v884 << 24)) << 24), 8);
    --v885;
  }
  while ( v885 );
  v93 = v1651;
  v918 = v1594;
  v919 = 0LL;
  v920 = 0;
  do
    v920 ^= *((_BYTE *)v1594 + v919++);
  while ( v919 < 0x338 );
  if ( v920 != 64LL )
  {
    MemoryFree(v1594);
    goto LABEL_1105;
  }
  *((_BYTE *)v1594 + 823) = 0;
  memset_0(&unk_180899E50, 0, 0x60uLL);
  while ( 2 )
  {
    if ( *(_BYTE *)v918 )
    {
      v1002 = v918;
      v1003 = -1LL;
      do
        ++v1003;
      while ( v918[v1003] );
      v1004 = &v918[v1003];
      v1005 = (char *)&unk_180899E50 + 24 * v1531;
      if ( !GetModuleHandleExW(0, v1002, (HMODULE *)v1005) )
      {
        v1006 = -1073741702;
        goto LABEL_1219;
      }
      v1006 = 0;
      v1428 = 0;
      if ( **(_WORD **)v1005 == 23117 )
      {
        v1007 = *(int *)(*(_QWORD *)v1005 + 60LL);
        if ( (unsigned int)v1007 < 0x10000000 )
        {
          v1008 = *(_QWORD *)v1005 + v1007;
          if ( v1008 >= *(_QWORD *)v1005 && *(_DWORD *)v1008 == 17744 )
          {
            if ( ((*(_WORD *)(v1008 + 24) - 267) & 0xFEFF) != 0 )
            {
              v1006 = -1073741811;
LABEL_1201:
              v1428 = v1006;
            }
            else
            {
              *(_QWORD *)(v1005 + 12) = *(_QWORD *)(v1008 + 136);
              *((_DWORD *)v1005 + 2) = *(_DWORD *)(v1008 + 80);
            }
            v1009 = *(_DWORD *)(v1004 + 1);
            v1010 = 0;
            v1610 = v1009;
            v918 = v1004 + 3;
            while ( 1 )
            {
              v1621 = v1010;
              if ( v1010 >= v1009 )
                break;
              v1011 = (const CHAR *)v918;
              v1012 = -1LL;
              do
                ++v1012;
              while ( *((_BYTE *)v918 + v1012) );
              v918 = (WCHAR *)((char *)v918 + v1012 + 1);
              if ( v1006 >= 0 )
              {
                v1013 = GetProcAddress(*(HMODULE *)v1005, v1011);
                if ( !v1013 )
                  goto LABEL_1219;
                off_180891340[lpModuleNameg] = v1013;
                v1009 = v1610;
              }
              ++lpModuleNameg;
              v1010 = v1621 + 1;
            }
            ++v1531;
            continue;
          }
        }
      }
      v1006 = -1073741701;
      goto LABEL_1201;
    }
    break;
  }
  v1006 = v1428;
LABEL_1219:
  if ( v1594 )
  {
    v1014 = GetProcessHeap();
    HeapFree(v1014, 0, v1594);
  }
  if ( v1006 >= 0 )
  {
    v878 = dword_18089D72C;
    v877 = v1473;
    goto LABEL_1223;
  }
LABEL_1105:
  v877 = v1473;
LABEL_1106:
  v921 = (HMODULE *)&unk_180899E50;
  v922 = 4LL;
  do
  {
    if ( *v921 )
      FreeLibrary(*v921);
    v921 += 3;
    --v922;
  }
  while ( v922 );
  v923 = (HMODULE *)&unk_180899E50;
  memset_0(&unk_180899E50, 0, 0x60uLL);
  v924 = 2LL;
  v925 = off_180891340;
  v926 = off_1806EF510;
  do
  {
    v927 = *((_OWORD *)v926 + 1);
    *(_OWORD *)v925 = *(_OWORD *)v926;
    v928 = *((_OWORD *)v926 + 2);
    *((_OWORD *)v925 + 1) = v927;
    v929 = *((_OWORD *)v926 + 3);
    *((_OWORD *)v925 + 2) = v928;
    v930 = *((_OWORD *)v926 + 4);
    *((_OWORD *)v925 + 3) = v929;
    v931 = *((_OWORD *)v926 + 5);
    *((_OWORD *)v925 + 4) = v930;
    v932 = *((_OWORD *)v926 + 6);
    *((_OWORD *)v925 + 5) = v931;
    v933 = *((_OWORD *)v926 + 7);
    v926 += 16;
    *((_OWORD *)v925 + 6) = v932;
    v925 += 16;
    *((_OWORD *)v925 - 1) = v933;
    --v924;
  }
  while ( v924 );
  v934 = *((_OWORD *)v926 + 1);
  *(_OWORD *)v925 = *(_OWORD *)v926;
  v935 = *((_OWORD *)v926 + 2);
  *((_OWORD *)v925 + 1) = v934;
  v936 = *((_OWORD *)v926 + 3);
  *((_OWORD *)v925 + 2) = v935;
  v937 = *((_OWORD *)v926 + 4);
  *((_OWORD *)v925 + 3) = v936;
  v938 = *((_OWORD *)v926 + 5);
  *((_OWORD *)v925 + 4) = v937;
  v939 = *((_OWORD *)v926 + 6);
  *((_OWORD *)v925 + 5) = v938;
  *((_OWORD *)v925 + 6) = v939;
LABEL_1224:
  _InterlockedExchange(&dword_18089D738, 0);
  v1015 = 4LL;
  LODWORD(v1884) = lpMemg;
  LODWORD(v1881) = v877;
  v1880 = 1;
  LODWORD(v1882) = -1721306479;
  DWORD2(v1881) = 1;
  LODWORD(v1883) = 1;
  DWORD2(v1882) = 1;
  DWORD2(v1883) = 1;
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_180891410)(0LL, 8225LL, 4LL, &v1880);
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v1016 = dword_18089D72C;
  if ( dword_18089D72C > 0 )
  {
    --dword_18089D72C;
    if ( v1016 == 1 )
    {
      do
      {
        if ( *v923 )
          FreeLibrary(*v923);
        v923 += 3;
        --v1015;
      }
      while ( v1015 );
      memset_0(&unk_180899E50, 0, 0x60uLL);
      v1017 = 2LL;
      v1018 = off_180891340;
      v1019 = off_1806EF510;
      do
      {
        v1020 = *((_OWORD *)v1019 + 1);
        *(_OWORD *)v1018 = *(_OWORD *)v1019;
        v1021 = *((_OWORD *)v1019 + 2);
        *((_OWORD *)v1018 + 1) = v1020;
        v1022 = *((_OWORD *)v1019 + 3);
        *((_OWORD *)v1018 + 2) = v1021;
        v1023 = *((_OWORD *)v1019 + 4);
        *((_OWORD *)v1018 + 3) = v1022;
        v1024 = *((_OWORD *)v1019 + 5);
        *((_OWORD *)v1018 + 4) = v1023;
        v1025 = *((_OWORD *)v1019 + 6);
        *((_OWORD *)v1018 + 5) = v1024;
        v1026 = *((_OWORD *)v1019 + 7);
        v1019 += 16;
        *((_OWORD *)v1018 + 6) = v1025;
        v1018 += 16;
        *((_OWORD *)v1018 - 1) = v1026;
        --v1017;
      }
      while ( v1017 );
      v1027 = *((_OWORD *)v1019 + 1);
      *(_OWORD *)v1018 = *(_OWORD *)v1019;
      v1028 = *((_OWORD *)v1019 + 2);
      *((_OWORD *)v1018 + 1) = v1027;
      v1029 = *((_OWORD *)v1019 + 3);
      *((_OWORD *)v1018 + 2) = v1028;
      v1030 = *((_OWORD *)v1019 + 4);
      *((_OWORD *)v1018 + 3) = v1029;
      v1031 = *((_OWORD *)v1019 + 5);
      *((_OWORD *)v1018 + 4) = v1030;
      v1032 = *((_OWORD *)v1019 + 6);
      *((_OWORD *)v1018 + 5) = v1031;
      *((_OWORD *)v1018 + 6) = v1032;
    }
  }
  _InterlockedExchange(&dword_18089D738, 0);
  ((void (__fastcall *)(_QWORD, CToastCenterExperienceManager *))off_1808914A0[0])(0LL, v1368);
LABEL_616:
  SH<void *,SH_HANDLE>::Reset(&v1739);
  *(_OWORD *)v1778 = 0LL;
  v468 = 0LL;
  *(_OWORD *)v1779 = 0LL;
  v469 = GetProcessHeap();
  v470 = HeapAlloc(v469, 8u, 0xA0uLL);
  v465 = 0LL;
  v471 = v470;
  if ( !v470 )
  {
    v471 = 0LL;
    goto LABEL_1615;
  }
  *v470 = xmmword_180897FA0[0];
  v470[1] = xmmword_180897FA0[1];
  v470[2] = xmmword_180897FA0[2];
  v470[3] = xmmword_180897FA0[3];
  v470[4] = xmmword_180897FA0[4];
  v470[5] = xmmword_180897FA0[5];
  v470[6] = xmmword_180897FA0[6];
  v470[7] = xmmword_180897FA0[7];
  v470[8] = xmmword_180897FA0[8];
  v470[9] = xmmword_180897FA0[9];
  v472 = GetProcessHeap();
  v473 = (WCHAR *)HeapAlloc(v472, 8u, 8uLL);
  v465 = 0LL;
  v468 = v473;
  if ( !v473 )
  {
    v468 = 0LL;
    goto LABEL_1615;
  }
  *(_QWORD *)v473 = qword_180897F90;
  v1646 = (LPVOID)__rdtsc();
  v1698 = 0;
  if ( (int)RtlUIntAdd(4LL, 4LL, &v1698) < 0 )
    goto LABEL_1615;
  v1699 = (int)v465;
  if ( (int)RtlUIntAdd(v474, 160LL, &v1699) < 0 )
    goto LABEL_1615;
  if ( v1698 + v1699 < v1698 )
    goto LABEL_1615;
  v1700 = (int)v465;
  if ( (int)RtlUIntAdd((unsigned int)((_DWORD)v465 + 4), v475, &v1700) < 0 )
    goto LABEL_1615;
  if ( v477 + v1700 < v477 )
    goto LABEL_1615;
  v1701 = (int)v465;
  if ( (int)RtlUIntAdd(v476, (unsigned int)(v476 + 4), &v1701) < 0 )
    goto LABEL_1615;
  if ( v478 + v1701 < v478 )
    goto LABEL_1615;
  v479 = v478 + v1701;
  HIDWORD(v1778[0]) = v478 + v1701;
  v480 = GetProcessHeap();
  v481 = (unsigned int *)HeapAlloc(v480, 8u, v479);
  v465 = 0LL;
  if ( !v481 )
    goto LABEL_1615;
  v1778[1] = (size_t)v481;
  LODWORD(v1778[0]) = 0;
  LODWORD(v1781[0]) = 0;
  v1780 = 0LL;
  v1033 = v481;
  v1755[1] = v481;
  v1598 = v468;
  v1478 = v471;
  if ( (int)RtlULongLongAdd(v481, 4LL, v1781) < 0 || (unsigned __int64)(v1033 + 2) > v1778[1] + HIDWORD(v1778[0]) )
    goto LABEL_1615;
  v1036 = (unsigned int *)v1781[0];
  *v1033 = v1034;
  *v1036 = v1034;
  v1037 = ++LODWORD(v1778[0]);
  LODWORD(v1782) = 0;
  v1781[1] = 0LL;
  if ( v471 )
  {
    if ( v1035 )
      goto LABEL_1243;
    goto LABEL_1615;
  }
  if ( v1035 )
    goto LABEL_1615;
LABEL_1243:
  if ( (const void **)v1778[1] != v465 )
  {
    v1039 = (unsigned int *)v1778[1];
    v1756 = v1778[1];
    while ( (unsigned int)v465 < v1037 )
    {
      v1040 = *v1039;
      v1703 = 0;
      if ( (int)RtlUIntAdd(4LL, v1040, &v1703) < 0 || (int)RtlULongLongAdd(v1041, v1703, &v1756) < 0 )
      {
LABEL_1614:
        v465 = 0LL;
        goto LABEL_1615;
      }
      v1039 = (unsigned int *)v1756;
      LODWORD(v465) = v1042 + 1;
    }
    v1043 = RtlULongLongAdd(v1039, 4LL, &v1782);
    v465 = 0LL;
    if ( v1043 >= 0 && (unsigned __int64)v1044 + v1045 + 4 <= v1778[1] + HIDWORD(v1778[0]) )
    {
      *v1044 = v1045;
      if ( v471 )
      {
        memcpy_0(v1782, v471, v1045);
        v465 = 0LL;
      }
      v1038 = 4;
      goto LABEL_1257;
    }
    goto LABEL_1615;
  }
  v1702 = (unsigned int)v465;
  if ( (int)RtlUIntAdd(v1034, v1035, &v1702) < 0 || (int)RtlUIntAdd(HIDWORD(v1778[0]), v1702, (char *)v1778 + 4) < 0 )
    goto LABEL_1615;
LABEL_1257:
  v1046 = LODWORD(v1778[0]) + 1;
  LODWORD(v1764[0]) = 0;
  ++LODWORD(v1778[0]);
  v1763[1] = 0LL;
  if ( !v468 )
    goto LABEL_1615;
  if ( (const void **)v1778[1] != v465 )
  {
    v1048 = (unsigned int *)v1778[1];
    v1757 = v1778[1];
    while ( (unsigned int)v465 < v1046 )
    {
      v1049 = *v1048;
      v1705 = 0;
      if ( (int)RtlUIntAdd(4LL, v1049, &v1705) < 0 || (int)RtlULongLongAdd(v1050, v1705, &v1757) < 0 )
        goto LABEL_1614;
      v1048 = (unsigned int *)v1757;
      LODWORD(v465) = v1051 + 1;
    }
    v1052 = RtlULongLongAdd(v1048, 4LL, v1764);
    v465 = 0LL;
    if ( v1052 >= 0 && (unsigned __int64)v1053 + v1054 + 4 <= v1778[1] + HIDWORD(v1778[0]) )
    {
      *v1053 = v1054;
      memcpy_0(v1764[0], v468, v1054);
      v465 = 0LL;
      v1047 = 4;
      goto LABEL_1270;
    }
    goto LABEL_1615;
  }
  v1704 = (unsigned int)v465;
  if ( (int)RtlUIntAdd(v1038, 8LL, &v1704) < 0 || (int)RtlUIntAdd(HIDWORD(v1778[0]), v1704, (char *)v1778 + 4) < 0 )
    goto LABEL_1615;
LABEL_1270:
  v1055 = LODWORD(v1778[0]) + 1;
  LODWORD(v1765) = 0;
  ++LODWORD(v1778[0]);
  v1764[1] = 0LL;
  if ( (const void **)v1778[1] != v465 )
  {
    v1057 = (unsigned int *)v1778[1];
    v1058 = (unsigned int)v465;
    v1758 = v1778[1];
    while ( v1058 < v1055 )
    {
      v1059 = *v1057;
      v1707 = (unsigned int)v465;
      if ( (int)RtlUIntAdd(4LL, v1059, &v1707) < 0 || (int)RtlULongLongAdd(v1060, v1707, &v1758) < 0 )
        goto LABEL_1615;
      v1057 = (unsigned int *)v1758;
      v1058 = v1061 + 1;
    }
    if ( (int)RtlULongLongAdd(v1057, 4LL, &v1765) >= 0 && (unsigned __int64)(v1062 + 3) <= v1778[1] + HIDWORD(v1778[0]) )
    {
      v1063 = v1765;
      *v1062 = 8;
      v1056 = 4;
      *v1063 = v1646;
      goto LABEL_1282;
    }
    goto LABEL_1615;
  }
  v1706 = (unsigned int)v465;
  if ( (int)RtlUIntAdd(v1047, 8LL, &v1706) < 0 || (int)RtlUIntAdd(HIDWORD(v1778[0]), v1706, (char *)v1778 + 4) < 0 )
    goto LABEL_1615;
LABEL_1282:
  ++LODWORD(v1778[0]);
  v1708 = (unsigned int)v465;
  if ( (int)RtlUIntAdd(v1056, v1056, &v1708) < 0 )
    goto LABEL_1615;
  v1065 = v1708;
  v1718 = v1708;
  v1709 = (unsigned int)v465;
  if ( (int)RtlUIntAdd(v1064, 8LL, &v1709) < 0 || (int)RtlUIntAdd(v1065, v1709, &v1718) < 0 )
    goto LABEL_1615;
  v1650 = v465;
  v1066 = v465;
  lpModuleNamek = (unsigned int)v465;
  v1369 = v465;
  v1525 = v465;
  v1431 = (unsigned int)v465;
  Sizec = v465;
  v1532 = (unsigned int)v465;
  dwBytesd = (unsigned __int16 *)v465;
  v1419 = 0LL;
  lpMemk = v1718;
  v1399 = (unsigned __int16 *)__rdtsc();
  v1710 = 8;
  v1067 = RtlUIntAdd(8LL, HIDWORD(v1778[0]), &v1710);
  if ( v1067 >= 0 )
  {
    v1069 = (v1710 + 7) & 0xFFFFFFF8;
    if ( v1069 < v1710 )
      goto LABEL_1615;
    v1710 = (v1710 + 7) & 0xFFFFFFF8;
    v1070 = v1069;
    v1071 = GetProcessHeap();
    v1072 = (unsigned __int8 *)HeapAlloc(v1071, 8u, v1070);
    v465 = 0LL;
    v1479 = v1072;
    if ( v1072 )
    {
      *(_DWORD *)v1072 = v1778[0];
      v1759 = v1072;
      v1073 = RtlULongLongAdd(v1072, 4LL, &v1759);
      v1599 = v1075;
      v1067 = v1073;
      if ( v1073 >= 0 )
      {
        v1076 = v1759;
        *(_DWORD *)v1759 = HIDWORD(v1778[0]);
        v1077 = RtlULongLongAdd(v1076, v1074, &v1759);
        v1599 = v1078;
        v1067 = v1077;
        if ( v1077 >= 0 )
        {
          *(_QWORD *)((char *)v1078 + v1710 - 8) = v1399;
          memcpy_0(v1759, (const void *)v1778[1], HIDWORD(v1778[0]));
          v465 = 0LL;
          v1068 = v1710;
          v1650 = (const void **)v1479;
          lpModuleNamek = v1710;
          goto LABEL_1294;
        }
      }
      v1079 = GetProcessHeap();
      HeapFree(v1079, 0, v1599);
      v465 = 0LL;
    }
    else
    {
      v1067 = -1073741801;
    }
    v1068 = (unsigned int)v1066;
LABEL_1294:
    v1598 = v468;
    v1478 = v471;
  }
  v1080 = v1067 | 0x10000000;
  if ( v1080 < 0 )
    goto LABEL_1379;
  v1400 = (unsigned __int16 *)v465;
  if ( !v1650 )
    goto LABEL_1615;
  if ( !v1068 || (v1546 = v1068 + 8, (v1584 = MemoryAlloc(v1068 + 8LL)) == 0LL) )
  {
    v1171 = v1650;
    v1080 = -805306367;
    goto LABEL_1381;
  }
  v1081 = 0;
  v1353 = 0;
  v1082 = 0LL;
  if ( lpModuleNamek )
  {
    do
      v1081 ^= *((_BYTE *)v1650 + v1082++);
    while ( v1082 < lpModuleNamek );
    v1353 = v1081;
  }
  v1083 = 0;
  v1471 = (SIZE_T)v1584;
  v1831 = 0xC81ECB17B1B54A58uLL;
  v1611 = -1;
  v1605 = lpModuleNamek & 7;
  v1084 = v1650;
  v1085 = 0;
  v1622 = 0;
  v1637 = 0;
  if ( (lpModuleNamek & 7) != 0 )
  {
    v1638 = 0;
    v1086 = 0;
    v1612 = 0;
    v1087 = 56;
    while ( 1 )
    {
      v1088 = *(unsigned __int8 *)v1084;
      v1084 = (const void **)((char *)v1084 + 1);
      if ( v1083 >= 4 )
      {
        v1089 = v1638;
        v1086 |= v1088 << v1087;
      }
      else
      {
        v1089 = (v1088 << (v1087 - 32)) | v1638;
        v1638 = v1089;
      }
      v1087 -= 8;
      v1090 = v1612 + 1;
      v1612 = v1090;
      if ( v1090 >= (unsigned __int8)(lpModuleNamek & 7) )
        break;
      v1083 = v1090;
    }
    v93 = v1651;
    v1085 = v1089 ^ 0xB17A307A;
    v1091 = v1086;
    v1092 = v1086 ^ 0x42F6B18D;
    v1093 = v1089 ^ 0xB17A307A;
    v1094 = 0;
    v1613 = 0;
    v1095 = v1584;
    v1096 = v1092;
    while ( 1 )
    {
      v1637 = v1089;
      v1645 = v1095 + 1;
      if ( v1094 >= 4 )
      {
        v1096 = (v1096 << 8) | HIBYTE(v1096);
        v1097 = v1096;
      }
      else
      {
        v1093 = (v1093 << 8) | HIBYTE(v1093);
        v1097 = v1093;
      }
      *v1095++ = v1097;
      ++v1613;
      v1089 = v1637;
      if ( v1613 >= (int)v1605 )
        break;
      v1094 = v1613;
    }
    v1066 = v1369;
    v1622 = v1091;
    v1471 = (SIZE_T)v1645;
    v1081 = v1353;
    v1478 = v471;
    v1598 = v468;
    if ( v1605 <= 4 )
    {
      v1611 = 0;
      if ( v1605 < 4 )
        v1085 = v1085 >> (8 * (4 - v1605)) << (8 * (4 - v1605));
    }
    else
    {
      v1611 = v1092 >> (8 * (8 - v1605)) << (8 * (8 - v1605));
    }
  }
  if ( (unsigned __int64)lpModuleNamek >> 3 )
  {
    v1098 = (unsigned __int8 *)v1084 + 2;
    v1099 = HIDWORD(v1831);
    v1100 = v1611;
    v1101 = v1637;
    v1102 = (unsigned __int64)lpModuleNamek >> 3;
    v1606 = WORD1(v1831);
    v1103 = WORD2(v1831);
    v1502 = HIWORD(v1831);
    v1104 = v1622;
    v1472 = v1471 + 7;
    do
    {
      v1105 = v1098[1] | ((*v1098 | ((*(v1098 - 1) | (*(v1098 - 2) << 8)) << 8)) << 8);
      v1106 = v1098[5] | ((v1098[4] | ((v1098[3] | (v1098[2] << 8)) << 8)) << 8);
      v1623 = (SIZE_T)(v1098 + 8);
      v1107 = v1106 ^ v1100;
      v1108 = v1105 ^ v1099 ^ (v1107 - 19032) ^ v1085;
      v1109 = (__ROR4__(v1108, 7) + WORD1(v1831) * __ROR4__(v1108 ^ v1099, 15)) ^ v1107;
      v1110 = (v1103 * __ROR4__(v1109 - 1313519016, 9) - __ROR4__(v1109, 10)) ^ v1108;
      v1111 = (__ROR4__(v1110, 27) + HIWORD(v1831) * __ROR4__(v1103 ^ v1110, 28)) ^ v1109;
      v1112 = (v1099 - (v1111 ^ 0xB1B54A58)) ^ v1110;
      v1113 = (WORD1(v1831) * (v1112 - 19032) - (v1112 >> 6)) ^ v1111;
      v1114 = (19032 * (v1103 ^ __ROR4__(v1113, 15))) ^ v1112;
      v1115 = (v1103 * (HIWORD(v1831) + __ROR4__(~v1114, 3))) ^ v1113;
      v1116 = (v1115 - v1099 - 19032) ^ v1114;
      v1117 = (v1606 * (v1502 ^ v1116)) ^ __ROR4__(v1116, 10) ^ v1115;
      v1118 = __ROR4__(v1117, 3) ^ (v1103 * __ROR4__(v1117 ^ 0x4A58, 26)) ^ v1116;
      v1119 = (19032 * (__ROR4__(v1118, 15) - HIWORD(v1831))) ^ v1117;
      v1120 = (v1119 >> 15) ^ (19032 * ((8 * (v1119 - v1103)) | ((v1119 - v1103) >> 29))) ^ (v1119 >> 1) ^ (19032 * (HIWORD(v1831) ^ v1119)) ^ v1118;
      v1121 = (WORD1(v1831) * (v1120 - v1103) - (v1120 >> 13)) ^ v1119;
      v1122 = __ROR4__(v1121, 11) ^ (v1103 * __ROR4__(-1313519016 - v1121, 9)) ^ v1120;
      v1123 = (v1122 + 1313519016 - HIWORD(v1831)) ^ v1121;
      v1124 = (19032 * (v1606 ^ v1123) - __ROR4__(v1123, 7)) ^ v1122;
      v1125 = (WORD1(v1831) * __ROR4__(HIWORD(v1831) ^ v1124, 28) - __ROR4__(v1124, 16)) ^ v1123;
      v1126 = (__ROR4__(v1125, 4) + v1103 * __ROR4__(-1313519016 - v1125, 10)) ^ v1124;
      v1127 = __ROR4__(v1126, 9) ^ (HIWORD(v1831) * __ROR4__(v1126 + 1313519016, 4)) ^ v1125;
      v1128 = (19032 * __ROR4__(v1099 ^ v1127, 24) - __ROR4__(v1127, 30)) ^ v1126;
      v1129 = (WORD1(v1831) * __ROR4__(v1099 - v1128, 11) - __ROR4__(v1128, 12)) ^ v1127;
      v1130 = (v1129 >> 8) ^ (v1103 * (WORD1(v1831) ^ v1129)) ^ v1128;
      v1614 = v1101 ^ v1130;
      v1131 = v1101 ^ v1130;
      v1132 = (v1101 ^ (unsigned int)v1130) >> 8;
      v1100 = v1104 ^ v1130 ^ v1099 ^ 0xB1B54A58 ^ v1129;
      v1133 = (_BYTE *)v1472;
      v1472 += 8LL;
      v1101 = v1105;
      v1134 = v1132 | (v1131 << 24);
      *(v1133 - 4) = v1614;
      *v1133 = v1100;
      *(v1133 - 5) = v1134;
      *(v1133 - 1) = BYTE1(v1100);
      *(v1133 - 6) = BYTE1(v1134);
      *(v1133 - 2) = (unsigned __int16)(v1100 >> 8) >> 8;
      *(v1133 - 7) = __ROR4__((v1134 >> 8) | (v1134 << 24), 8);
      v1085 = v1614;
      *(v1133 - 3) = __ROR4__((((v1100 >> 8) | (v1100 << 24)) >> 8) | (((v1100 >> 8) | (v1100 << 24)) << 24), 8);
      --v1102;
      v1104 = v1106;
      v1099 = HIDWORD(v1831);
      v1098 = (unsigned __int8 *)v1623;
    }
    while ( v1102 );
    v1081 = v1353;
    v93 = v1651;
    v468 = (WCHAR *)v1598;
    v471 = v1478;
    v1066 = v1369;
  }
  *(_QWORD *)&v1584[lpModuleNamek] = v1081;
  v1135 = GetProcessHeap();
  v1136 = HeapAlloc(v1135, 8u, 0x30uLL);
  v1137 = 0LL;
  if ( v1136 )
    v1137 = v1136;
  v1138 = v1136 == 0LL ? 0xC0000017 : 0;
  if ( v1136 )
  {
    *(_DWORD *)v1137 = v1546;
    v1139 = GetProcessHeap();
    v1140 = HeapAlloc(v1139, 8u, v1546);
    if ( !v1140
      || (v1137[1] = v1140,
          memcpy_0(v1140, v1584, v1546),
          *((_DWORD *)v1137 + 4) = 160,
          v1141 = GetProcessHeap(),
          (v1142 = HeapAlloc(v1141, 8u, 0xA0uLL)) == 0LL) )
    {
      v1138 = -1073741801;
      goto LABEL_1329;
    }
    v1137[3] = v1142;
    *v1142 = xmmword_180897EF0[0];
    v1142[1] = xmmword_180897EF0[1];
    v1142[2] = xmmword_180897EF0[2];
    v1142[3] = xmmword_180897EF0[3];
    v1142[4] = xmmword_180897EF0[4];
    v1142[5] = xmmword_180897EF0[5];
    v1142[6] = xmmword_180897EF0[6];
    v1142[7] = xmmword_180897EF0[7];
    v1142[8] = xmmword_180897EF0[8];
    v1142[9] = xmmword_180897EF0[9];
    *((_DWORD *)v1137 + 8) = 8;
    v1149 = GetProcessHeap();
    v1150 = HeapAlloc(v1149, 8u, 8uLL);
    if ( !v1150 )
    {
      v1138 = -1073741801;
      goto LABEL_1329;
    }
    v1137[5] = v1150;
    v1138 = 0;
    *v1150 = qword_180897EE0;
    v1147 = (unsigned __int16 *)v1137;
LABEL_1339:
    v1066 = (const void **)v1147;
    v1148 = 0LL;
  }
  else
  {
LABEL_1329:
    if ( v1137 )
    {
      v1480 = (void *)v1137[1];
      if ( v1480 )
      {
        v1143 = GetProcessHeap();
        HeapFree(v1143, 0, v1480);
        v1137[1] = 0LL;
      }
      v1481 = (void *)v1137[3];
      if ( v1481 )
      {
        v1144 = GetProcessHeap();
        HeapFree(v1144, 0, v1481);
        v1137[3] = 0LL;
      }
      v1482 = (void *)v1137[5];
      if ( v1482 )
      {
        v1145 = GetProcessHeap();
        HeapFree(v1145, 0, v1482);
        v1137[5] = 0LL;
      }
      v1146 = GetProcessHeap();
      HeapFree(v1146, 0, v1137);
    }
    if ( v1138 >= 0 )
    {
      v1147 = v1400;
      goto LABEL_1339;
    }
    v1148 = v1400;
  }
  v1483 = v471;
  v1600 = v468;
  v1370 = v1066;
  v1151 = GetProcessHeap();
  HeapFree(v1151, 0, v1584);
  if ( v1148 )
  {
    v1484 = (void *)*((_QWORD *)v1148 + 1);
    if ( v1484 )
    {
      v1152 = GetProcessHeap();
      HeapFree(v1152, 0, v1484);
      *((_QWORD *)v1148 + 1) = 0LL;
    }
    v1485 = (void *)*((_QWORD *)v1148 + 3);
    if ( v1485 )
    {
      v1153 = GetProcessHeap();
      HeapFree(v1153, 0, v1485);
      *((_QWORD *)v1148 + 3) = 0LL;
    }
    v1486 = (void *)*((_QWORD *)v1148 + 5);
    if ( v1486 )
    {
      v1154 = GetProcessHeap();
      HeapFree(v1154, 0, v1486);
      *((_QWORD *)v1148 + 5) = 0LL;
    }
    v1155 = GetProcessHeap();
    HeapFree(v1155, 0, v1148);
    v1370 = v1066;
    v1600 = v468;
    v1483 = v471;
  }
  v1080 = v1138 | 0x10000000;
  v1156 = v471;
  if ( v1080 < 0 )
    goto LABEL_1378;
  v1157 = *(unsigned int *)v1066;
  v1711 = 0;
  v1712 = 4;
  v1159 = RtlUIntAdd(4LL, v1157, &v1712);
  if ( v1159 < 0
    || (v1159 = RtlUIntAdd(v1712, v1158, &v1712), v1159 < 0)
    || (v1159 = RtlUIntAdd(v1712, *((unsigned int *)v1066 + 4), &v1712), v1159 < 0)
    || (v1159 = RtlUIntAdd(v1712, 4LL, &v1712), v1159 < 0)
    || (v1159 = RtlUIntAdd(v1712, *((unsigned int *)v1066 + 8), &v1712), v1159 < 0) )
  {
    v1196 = v1525;
    goto LABEL_1372;
  }
  v1711 = v1712;
  v1160 = v1712;
  v1161 = GetProcessHeap();
  v1162 = HeapAlloc(v1161, 8u, v1160);
  v465 = 0LL;
  v1163 = v1162;
  if ( !v1162 )
  {
    v1080 = -805306345;
    goto LABEL_1379;
  }
  *v1162 = *(_DWORD *)v1066;
  v1761 = v1162;
  v1159 = RtlULongLongAdd(v1162, 4LL, &v1761);
  v1165 = v1164;
  if ( v1159 < 0 )
    goto LABEL_1662;
  memcpy_0(v1761, v1066[1], *(unsigned int *)v1066);
  v1159 = RtlULongLongAdd(v1761, *(unsigned int *)v1066, &v1761);
  v1165 = v1163;
  if ( v1159 < 0 )
    goto LABEL_1662;
  v1166 = v1761;
  *(_DWORD *)v1761 = *((_DWORD *)v1066 + 4);
  v1159 = RtlULongLongAdd(v1166, 4LL, &v1761);
  v1165 = v1163;
  if ( v1159 < 0 )
    goto LABEL_1662;
  memcpy_0(v1761, v1066[3], *((unsigned int *)v1066 + 4));
  v1159 = RtlULongLongAdd(v1761, *((unsigned int *)v1066 + 4), &v1761);
  v1165 = v1163;
  if ( v1159 < 0
    || (v1167 = v1761,
        *(_DWORD *)v1761 = *((_DWORD *)v1066 + 8),
        v1159 = RtlULongLongAdd(v1167, 4LL, &v1761),
        v1165 = v1163,
        v1159 < 0)
    || (memcpy_0(v1761, v1066[5], *((unsigned int *)v1066 + 8)),
        v1159 = RtlULongLongAdd(v1761, *((unsigned int *)v1066 + 8), &v1761),
        v1165 = v1163,
        v1159 < 0) )
  {
LABEL_1662:
    if ( v1165 )
    {
      v1168 = GetProcessHeap();
      HeapFree(v1168, 0, v1163);
    }
    v1196 = v1525;
  }
  else
  {
    v1196 = (const void **)v1163;
    v1431 = v1711;
    v1525 = (const void **)v1163;
  }
  v1156 = v471;
LABEL_1372:
  v1080 = v1159 | 0x10000000;
  if ( v1080 < 0 )
  {
LABEL_1378:
    v465 = 0LL;
    goto LABEL_1379;
  }
  v1169 = -1;
  if ( lpMemk < 0xFFFFFFF8 )
    v1169 = lpMemk + 8;
  v1080 = lpMemk >= 0xFFFFFFF8 ? -805306219 : 0x10000000;
  if ( lpMemk + 8 < 8 )
  {
LABEL_1449:
    v465 = 0LL;
    if ( v1080 >= 0 )
      goto LABEL_1450;
    goto LABEL_1379;
  }
  v1713 = 0;
  v1170 = (v1169 + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v1170 < v1169 )
  {
    v1080 = -1073741675;
    goto LABEL_1378;
  }
  v1713 = (v1169 + 7) & 0xFFFFFFF8;
  v1525 = v1196;
  v471 = v1156;
  v1080 = RtlUIntAdd(v1170, 8LL, &v1713);
  if ( v1080 < 0 )
  {
LABEL_1424:
    v1171 = v1198;
    v465 = 0LL;
    goto LABEL_1380;
  }
  v1199 = (unsigned __int8 *)v1198;
  v1525 = v1197;
  if ( !v1778[1] || (v1525 = v1197, LODWORD(v1778[0]) <= 1) )
  {
    v1080 = -1073741811;
    goto LABEL_1424;
  }
  v1200 = (unsigned int *)v1778[1];
  v1201 = 0;
  v1762 = v1778[1];
  v1650 = (const void **)v1199;
  while ( 1 )
  {
    lpMeml = *v1200;
    if ( v1201 )
      break;
    v1080 = RtlULongLongAdd(v1200, 4LL, &v1762);
    if ( v1080 < 0 )
      goto LABEL_1378;
    v1080 = RtlULongLongAdd(v1762, lpMeml, &v1762);
    if ( v1080 < 0 )
      goto LABEL_1378;
    v1200 = (unsigned int *)v1762;
    v1201 = v1202 + 1;
  }
  if ( v1200 + 1 < v1200 )
    goto LABEL_1448;
  v1525 = v1197;
  if ( !v1778[1] || (v1525 = v1197, LODWORD(v1778[0]) <= 2) )
  {
    v1080 = -1073741811;
    goto LABEL_1378;
  }
  v1203 = (unsigned int *)v1778[1];
  v1204 = 0;
  v1763[0] = v1778[1];
  while ( v1204 < 2 )
  {
    lpModuleNamel = *v1203;
    v1080 = RtlULongLongAdd(v1203, 4LL, v1763);
    if ( v1080 < 0 )
      goto LABEL_1378;
    v1080 = RtlULongLongAdd(v1763[0], lpModuleNamel, v1763);
    if ( v1080 < 0 )
      goto LABEL_1378;
    v1203 = (unsigned int *)v1763[0];
    v1204 = v1205 + 1;
  }
  if ( v1203 + 1 < v1203 )
  {
LABEL_1448:
    v1080 = -1073741675;
    goto LABEL_1378;
  }
  v1483 = v1156;
  v1600 = v468;
  v1370 = v1066;
  v1525 = v1197;
  v1714 = 4;
  v1080 = RtlUIntAdd(4LL, v1713, &v1714);
  if ( v1080 < 0 )
    goto LABEL_1449;
  v1080 = RtlUIntAdd(v1714, v1206, &v1714);
  if ( v1080 < 0 )
    goto LABEL_1449;
  v1080 = RtlUIntAdd(v1714, lpMeml, &v1714);
  if ( v1080 < 0 )
    goto LABEL_1449;
  v1080 = RtlUIntAdd(v1714, 4LL, &v1714);
  if ( v1080 < 0 )
    goto LABEL_1449;
  v1080 = RtlUIntAdd(v1714, v1207, &v1714);
  if ( v1080 < 0 )
    goto LABEL_1449;
  v1525 = v1208;
  if ( v1714 > 0x400000 )
  {
    v1080 = -2147418113;
    goto LABEL_1378;
  }
  v1532 = v1714;
  v1370 = v1066;
  v1600 = v468;
  v1483 = v1156;
LABEL_1450:
  v1209 = GetProcessHeap();
  v1210 = (const void **)HeapAlloc(v1209, 8u, v1532);
  v1211 = Sizec;
  if ( v1210 )
    v1211 = v1210;
  Sizec = v1211;
  v1080 = v1210 != 0LL ? 0x10000000 : -805306345;
  if ( !v1210 )
    goto LABEL_1378;
  hModule = 0LL;
  v1785 = 0LL;
  v1786 = 0LL;
  if ( !v1525 || !v1211 )
  {
    v1080 = -2147024809;
    goto LABEL_1378;
  }
  LODWORD(v1786) = v1431;
  *(_QWORD *)((char *)&v1786 + 4) = v1532;
  *(_QWORD *)&v1785 = v1525;
  *((_QWORD *)&v1785 + 1) = v1211;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
    && (v1213 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
  {
    v1214 = ((__int64 (__fastcall *)(__int64, __int128 *))v1213)(134LL, &v1785);
    v1080 = v1214 | 0x10000000;
    if ( v1214 >= 0 )
    {
      v1215 = DWORD1(v1786);
      goto LABEL_1469;
    }
    v465 = 0LL;
  }
  else
  {
    v1212 = GetLastError();
    v465 = 0LL;
    v1080 = v1212;
    if ( v1212 > 0 )
      v1080 = (unsigned __int16)v1212 | 0x80070000;
    if ( v1080 >= 0 )
      v1080 = -2147467259;
  }
  if ( v1080 == -805306333 )
  {
    v1080 = -2147024774;
    goto LABEL_1379;
  }
  if ( v1080 < 0 )
    goto LABEL_1379;
  v1215 = v1532;
LABEL_1469:
  v1401 = 0LL;
  v1715 = 0;
  v1743 = Sizec;
  if ( v1215 < 4 )
  {
LABEL_1470:
    v1080 = -805306306;
    goto LABEL_1378;
  }
  lpMemm = *(_DWORD *)Sizec;
  v1216 = RtlULongLongAdd(Sizec, 4LL, &v1743);
  v465 = 0LL;
  v1217 = v1216;
  if ( v1216 < 0 )
    goto LABEL_1527;
  v1217 = RtlUIntAdd(0LL, 4LL, &v1715);
  if ( v1217 < 0 )
    goto LABEL_1527;
  if ( v1218 - v1715 < (unsigned int)v1219 )
    goto LABEL_1474;
  v1547 = v1743;
  v1533 = v1219;
  v1217 = RtlULongLongAdd(v1743, v1219, &v1743);
  if ( v1217 < 0 || (v1217 = RtlUIntAdd(v1715, v1220, &v1715), v1217 < 0) )
  {
LABEL_1527:
    v1246 = dwBytesd;
    goto LABEL_1528;
  }
  if ( v1221 - v1715 < 4 )
  {
LABEL_1474:
    v1080 = -805306306;
    goto LABEL_1379;
  }
  lpModuleNamem = *(_DWORD *)v1743;
  v1217 = RtlULongLongAdd(v1743, 4LL, &v1743);
  if ( v1217 < 0 )
    goto LABEL_1526;
  v1217 = RtlUIntAdd(v1715, 4LL, &v1715);
  if ( v1217 < 0 )
    goto LABEL_1526;
  if ( v1222 - v1715 < (unsigned int)v1223 )
    goto LABEL_1470;
  v1615 = v1743;
  v1624 = v1223;
  v1217 = RtlULongLongAdd(v1743, (unsigned int)v1223, &v1743);
  if ( v1217 < 0 )
    goto LABEL_1526;
  v1217 = RtlUIntAdd(v1715, v1224, &v1715);
  if ( v1217 < 0 )
    goto LABEL_1526;
  if ( v1225 - v1715 < 4 )
    goto LABEL_1470;
  v1432 = *(_DWORD *)v1743;
  v1217 = RtlULongLongAdd(v1743, 4LL, &v1743);
  if ( v1217 < 0 )
    goto LABEL_1526;
  v1217 = RtlUIntAdd(v1715, 4LL, &v1715);
  if ( v1217 < 0 )
    goto LABEL_1526;
  if ( v1226 - v1715 < v1227 )
    goto LABEL_1470;
  v1217 = RtlUIntAdd(v1715, v1227, &v1715);
  if ( v1217 < 0 )
  {
LABEL_1526:
    v465 = 0LL;
    goto LABEL_1527;
  }
  if ( v1228 != v1715 || (unsigned int)(lpMemm + v1229 + v1230) + 12LL != v1228 )
    goto LABEL_1470;
  v1231 = GetProcessHeap();
  v1232 = HeapAlloc(v1231, 8u, 0x30uLL);
  v1233 = 0LL;
  if ( v1232 )
    v1233 = v1232;
  v1639 = v1233;
  v1217 = v1232 == 0LL ? 0xC0000017 : 0;
  if ( !v1232 )
    goto LABEL_1504;
  if ( v1547 )
  {
    *(_DWORD *)v1233 = lpMemm;
    v1234 = GetProcessHeap();
    v1235 = HeapAlloc(v1234, 8u, v1533);
    if ( v1235 )
    {
      v1639[1] = v1235;
      v1217 = 0;
      memcpy_0(v1235, v1547, v1533);
      v1233 = v1639;
      v1370 = v1066;
      v1600 = v468;
      v1483 = v471;
      goto LABEL_1497;
    }
LABEL_1503:
    v1217 = -1073741801;
LABEL_1504:
    v1240 = v1639;
    if ( v1639 )
    {
      dwBytese = (void *)v1639[1];
      if ( dwBytese )
      {
        v1241 = GetProcessHeap();
        HeapFree(v1241, 0, dwBytese);
        v1240 = v1639;
        v1639[1] = 0LL;
      }
      dwBytesf = (void *)v1240[3];
      if ( dwBytesf )
      {
        v1242 = GetProcessHeap();
        HeapFree(v1242, 0, dwBytesf);
        v1240 = v1639;
        v1639[3] = 0LL;
      }
      dwBytesg = (void *)v1240[5];
      if ( dwBytesg )
      {
        v1243 = GetProcessHeap();
        HeapFree(v1243, 0, dwBytesg);
        v1639[5] = 0LL;
      }
      v1244 = GetProcessHeap();
      HeapFree(v1244, 0, v1639);
    }
    v1245 = 0LL;
  }
  else
  {
    *(_DWORD *)v1233 = 0;
    v1233[1] = 0LL;
LABEL_1497:
    if ( v1615 )
    {
      *((_DWORD *)v1233 + 4) = lpModuleNamem;
      v1236 = GetProcessHeap();
      v1237 = HeapAlloc(v1236, 8u, v1624);
      if ( !v1237 )
        goto LABEL_1503;
      v1639[3] = v1237;
      v1217 = 0;
      memcpy_0(v1237, v1615, v1624);
      v1233 = v1639;
      v1370 = v1066;
      v1600 = v468;
      v1483 = v471;
    }
    else
    {
      *((_DWORD *)v1233 + 4) = 0;
      v1233[3] = 0LL;
    }
    if ( v1743 )
    {
      *((_DWORD *)v1233 + 8) = v1432;
      v1238 = GetProcessHeap();
      v1239 = HeapAlloc(v1238, 8u, v1432);
      if ( !v1239 )
        goto LABEL_1503;
      v1639[5] = v1239;
      v1217 = 0;
      memcpy_0(v1239, v1743, v1432);
      v1233 = v1639;
      v1370 = v1066;
      v1600 = v468;
      v1483 = v471;
    }
    else
    {
      *((_DWORD *)v1233 + 8) = 0;
      v1233[5] = 0LL;
    }
    v1245 = (unsigned __int16 *)v1233;
    v1401 = (unsigned __int16 *)v1233;
  }
  v465 = 0LL;
  if ( v1217 < 0 )
  {
    dwBytesd = 0LL;
    v1246 = 0LL;
    if ( v1245 )
    {
      dwBytesh = (void *)*((_QWORD *)v1245 + 1);
      if ( dwBytesh )
      {
        v1247 = GetProcessHeap();
        HeapFree(v1247, 0, dwBytesh);
        v1245 = v1401;
        *((_QWORD *)v1401 + 1) = 0LL;
      }
      dwBytesi = (void *)*((_QWORD *)v1245 + 3);
      if ( dwBytesi )
      {
        v1248 = GetProcessHeap();
        HeapFree(v1248, 0, dwBytesi);
        v1245 = v1401;
        *((_QWORD *)v1401 + 3) = 0LL;
      }
      dwBytesj = (void *)*((_QWORD *)v1245 + 5);
      if ( dwBytesj )
      {
        v1249 = GetProcessHeap();
        HeapFree(v1249, 0, dwBytesj);
        *((_QWORD *)v1401 + 5) = 0LL;
      }
      v1250 = GetProcessHeap();
      HeapFree(v1250, 0, v1401);
      v465 = 0LL;
      v1246 = 0LL;
      dwBytesd = 0LL;
    }
  }
  else
  {
    v1246 = v1245;
    dwBytesd = v1245;
  }
LABEL_1528:
  v1080 = v1217 | 0x10000000;
  if ( v1080 < 0 )
    goto LABEL_1379;
  if ( !v1246 || (v1402 = (unsigned __int16 *)*((_QWORD *)v1246 + 1)) == 0LL || *(_DWORD *)v1246 == (_DWORD)v465 )
  {
    v1080 = -805306355;
    goto LABEL_1379;
  }
  v1251 = *(unsigned int *)v1246 - 8LL;
  v1548 = v1251;
  v1252 = MemoryAlloc(v1251);
  v465 = 0LL;
  v1419 = v1252;
  v1253 = v1252;
  if ( !v1252 )
    goto LABEL_1562;
  v1254 = v1402;
  v1832 = 0x7F1137FAB69605ELL;
  v1255 = 0;
  v1433 = v1253;
  v1256 = v1251 & 7;
  if ( (v1251 & 7) == 0 )
  {
    lpMemo = 0;
    v1262 = 0;
    lpModuleNameo = 0;
    v1260 = dwBytesd;
    goto LABEL_1554;
  }
  v1655 = 0;
  v1257 = 0;
  lpMemn = 0;
  v1258 = 0;
  if ( !v1256 )
  {
    lpMemo = 0;
    v1262 = 154101157;
    v1655 = 0;
    lpModuleNameo = 0;
    v1260 = dwBytesd;
LABEL_1551:
    v1262 = v1262 >> (8 * (4 - v1256)) << (8 * (4 - v1256));
LABEL_1552:
    v1253 = v1433;
    goto LABEL_1554;
  }
  v1259 = (unsigned __int8 *)v1650;
  v1260 = dwBytesd;
  do
  {
    v1261 = *(unsigned __int8 *)v1254;
    v1254 = (unsigned __int16 *)((char *)v1254 + 1);
    if ( v1257 >= 4 )
      v1655 |= v1261 << v1656;
    else
      v1258 |= v1261 << (v1656 - 32);
    v1656 -= 8;
    v1257 = lpMemn + 1;
    lpMemn = v1257;
  }
  while ( (int)v1257 < (int)v1256 );
  v1262 = v1258 ^ 0x92F65A5;
  v1263 = v1258 ^ 0x92F65A5;
  lpModuleNamen = 0;
  v1264 = v1655 ^ 0x699A899C;
  v1253 = v1433;
  do
  {
    v1650 = (const void **)v1259;
    v1534 = (SIZE_T)(v1253 + 1);
    if ( lpModuleNamen >= 4 )
    {
      v1264 = (v1264 << 8) | HIBYTE(v1264);
      v1265 = v1264;
    }
    else
    {
      v1263 = (v1263 << 8) | HIBYTE(v1263);
      v1265 = v1263;
    }
    *v1433 = v1265;
    ++v1253;
    ++lpModuleNamen;
    v1259 = (unsigned __int8 *)v1650;
    v1433 = (_BYTE *)v1534;
  }
  while ( lpModuleNamen < (int)v1256 );
  v93 = v1651;
  lpMemo = v1258;
  v1255 = 0;
  v1370 = v1066;
  v1483 = v471;
  v1600 = v468;
  v1433 = (_BYTE *)v1534;
  if ( v1256 > 4 )
  {
    lpModuleNameo = (v1655 ^ 0x699A899Cu) >> (8 * (8 - v1256)) << (8 * (8 - v1256));
    goto LABEL_1552;
  }
  lpModuleNameo = 0;
  if ( v1256 < 4 )
    goto LABEL_1551;
LABEL_1554:
  if ( v1548 >> 3 )
  {
    v1266 = v1253 + 7;
    v1267 = HIDWORD(v1832);
    v1268 = (unsigned __int8 *)(v1254 + 1);
    v1269 = lpMemo;
    v1270 = v1548 >> 3;
    v1535 = WORD1(v1832);
    v1271 = WORD2(v1832);
    v1272 = lpModuleNameo;
    v1434 = WORD2(v1832);
    do
    {
      v1273 = *(v1268 - 1) | (*(v1268 - 2) << 8);
      v1274 = v1268[2] << 8;
      v1275 = *v1268;
      v1268 += 8;
      v1276 = *(v1268 - 7) | ((v1275 | (v1273 << 8)) << 8);
      v1277 = v1276 ^ v1262;
      v1278 = *(v1268 - 3) | ((*(v1268 - 4) | ((*(v1268 - 5) | v1274) << 8)) << 8);
      v1279 = v1277 ^ v1267 ^ 0xAB69605E ^ v1278 ^ v1272;
      v1280 = (__ROR4__(v1279, 22) + v1271 * __ROR4__(v1279 + 1419157410, 27)) ^ v1277;
      v1281 = (WORD1(v1832) * __ROR4__(v1280 + v1267, 9) - __ROR4__(v1280, 30)) ^ v1279;
      v1282 = (24670 * (v1281 - v1271) - (v1281 >> 13)) ^ v1280;
      v1283 = (HIWORD(v1832) * __ROR4__(v1282 ^ WORD1(v1832), 26) - __ROR4__(v1282, 30)) ^ v1281;
      v1284 = (v1267 - (v1283 ^ 0xAB69605E)) ^ v1282;
      v1285 = (v1535 * (v1284 ^ v1271)) ^ __ROR4__(v1284, 6) ^ v1283;
      v1286 = (__ROR4__(v1285, 30) + 24670 * __ROR4__(v1285 + v1267, 15)) ^ v1284;
      v1287 = (HIWORD(v1832) * __ROR4__(v1286 + 1419157410, 14) - __ROR4__(v1286, 24)) ^ v1285;
      v1288 = __ROR4__(v1287, 10) ^ (v1271 * __ROR4__(v1287 ^ 0xAB69605E, 12)) ^ v1286;
      v1289 = (v1288 >> 10) ^ (WORD1(v1832) * (v1288 ^ HIWORD(v1832))) ^ v1287;
      v1290 = (HIWORD(v1832) * (__ROR4__(~v1289, 5) + 24670)) ^ v1288;
      v1291 = (v1290 - HIWORD(v1832)) ^ 0xAB69605E ^ v1289;
      v1292 = ((v1291 >> 2) + v1271 * __ROR4__(v1291 ^ HIWORD(v1832), 30)) ^ v1290;
      v1293 = (__ROR4__(v1292, 25) + WORD1(v1832) * __ROR4__(v1292 - v1267, 6)) ^ v1291;
      v1294 = (24670 * (v1293 ^ v1271) + __ROR4__(v1293, 9)) ^ v1292;
      v1295 = (__ROR4__(v1294, 25) + HIWORD(v1832) * __ROR4__(v1294 ^ WORD1(v1832), 27)) ^ v1293;
      v1296 = v1267 ^ v1294 ^ v1295 ^ 0xAB69605E;
      v1297 = (v1434 * (__ROR4__(v1296, 3) - WORD1(v1832))) ^ v1295;
      v1298 = (24670 * __ROR4__(v1297 - v1267, 1) - __ROR4__(v1297, 6)) ^ v1296;
      v1299 = (__ROR4__(v1298, 18) + HIWORD(v1832) * __ROR4__(v1298 - 1419157410, 29)) ^ v1297;
      v1300 = (v1434 * __ROR4__(v1299 - 1419157410, 17) - __ROR4__(v1299, 14)) ^ v1298;
      v1301 = (v1300 >> 3) ^ (WORD1(v1832) * (v1300 ^ 0x605E)) ^ v1299;
      v1272 = v1655 ^ v1301;
      v1655 = v1278;
      v1302 = v1269 ^ v1300 ^ __ROR4__(v1301, 30) ^ (24670 * __ROR4__(v1267 ^ v1301, 28));
      *(v1266 - 4) = v1302;
      *v1266 = v1272;
      v1266 += 8;
      lpMemq = v1302;
      v1269 = v1276;
      *(v1266 - 13) = BYTE1(v1302);
      *(v1266 - 9) = BYTE1(v1272);
      v1271 = v1434;
      v1303 = (((v1302 >> 8) | (v1302 << 24)) >> 8) | (((v1302 >> 8) | (v1302 << 24)) << 24);
      *(v1266 - 14) = v1303;
      *(v1266 - 10) = (unsigned __int16)(v1272 >> 8) >> 8;
      *(v1266 - 15) = __ROR4__(v1303, 8);
      v1262 = lpMemq;
      *(v1266 - 11) = __ROR4__((((v1272 >> 8) | (v1272 << 24)) >> 8) | (((v1272 >> 8) | (v1272 << 24)) << 24), 8);
      --v1270;
    }
    while ( v1270 );
    v1255 = 0;
    v93 = v1651;
    v468 = (WCHAR *)v1600;
    v471 = v1483;
    v1066 = v1370;
    v1260 = dwBytesd;
  }
  for ( i2 = 0LL; i2 < v1548; ++i2 )
    v1255 ^= *((_BYTE *)v1419 + i2);
  v1305 = v1260;
  v1306 = v1525;
  dwBytesd = v1260;
  if ( v1255 == *(_QWORD *)((char *)v1402 + v1548) )
  {
    dwBytesd = v1260;
    if ( (unsigned int)v1548 < 4 )
    {
      v1307 = -1073741762;
LABEL_1610:
      v1171 = v1650;
      goto LABEL_1611;
    }
    v1308 = v1419 + 1;
    lpMemp = *v1419;
    dwBytesd = v1305;
    if ( v1419 + 1 < v1419 )
    {
      v1307 = -1073741675;
      goto LABEL_1610;
    }
    if ( (unsigned int)(v1548 - 4) < 4 )
    {
      v1307 = -1073741762;
      dwBytesd = v1305;
      goto LABEL_1610;
    }
    v1309 = *v1308;
    lpModuleNamep = *v1308;
    v1616 = v1419 + 2;
    if ( v1419 + 2 < v1419 + 1 )
    {
      v1171 = v1650;
      v1307 = -1073741675;
    }
    else
    {
      v1310 = v1305;
      v1536 = (SIZE_T)v1305;
      if ( (int)v1548 - 8 < (unsigned int)v1309 )
      {
        v1171 = v1650;
        v1307 = -1073741762;
LABEL_1611:
        v465 = 0LL;
        goto LABEL_1612;
      }
      if ( (unsigned int)v1309 < 0xFFFFFFF8 )
      {
        v1311 = v1309;
        v1625 = v1309;
        if ( (char *)v1419 + (unsigned int)v1548 < (char *)v1419 + v1309 + 8 || (unsigned int)v1548 - v1309 - 8 >= 8 )
        {
          v1307 = -1073741762;
          v1171 = v1650;
          dwBytesd = v1310;
          goto LABEL_1611;
        }
        v1171 = v1650;
        dwBytesd = v1310;
        v1312 = 0LL;
        v1640 = 0LL;
        v1307 = 0;
        v1760 = 0LL;
        v465 = 0LL;
        v1435 = 0;
        if ( v1419 != (_DWORD *)-8LL )
        {
          v1313 = RtlULongLongAdd(v1616, v1311, &v1760);
          v1305 = (unsigned __int16 *)v1536;
          v1307 = v1313;
          v1419 = v1314;
          dwBytesd = (unsigned __int16 *)v1536;
          if ( v1313 < 0 )
          {
LABEL_1589:
            v465 = 0LL;
            goto LABEL_1603;
          }
          v1315 = v1616;
          v1316 = v1314;
          v1419 = v1314;
          v1317 = v1616;
          v1306 = v1525;
          dwBytesd = (unsigned __int16 *)v1536;
          while ( 1 )
          {
            v1607 = v1316;
            if ( (unsigned __int64)v1317 >= v1760 )
              break;
            if ( v1317 + 1 < v1317 )
            {
              v1307 = -1073741675;
              goto LABEL_1611;
            }
            v1616 = v1315;
            v1525 = v1306;
            dwBytesd = v1305;
            v1419 = v1316;
            if ( (unsigned __int64)(v1317 + 1) > v1760 )
            {
              v1307 = -1073741811;
              v1419 = v1316;
              goto LABEL_1586;
            }
            v1318 = *v1317;
            v1716 = 0;
            v1307 = RtlUIntAdd(4LL, v1318, &v1716);
            if ( v1307 < 0 )
            {
              v1419 = v1607;
              dwBytesd = v1305;
              v1525 = v1306;
              goto LABEL_1589;
            }
            v1320 = v1319 + v1716;
            if ( v1320 < v1319 )
            {
              v1307 = -1073741675;
              v1321 = v1607;
              goto LABEL_1585;
            }
            v1307 = 0;
            v1317 = (unsigned int *)(v1319 + v1716);
            if ( v1320 > v1760 )
            {
              v1321 = v1607;
              v1307 = -1073741811;
LABEL_1585:
              v1419 = v1321;
              goto LABEL_1586;
            }
            ++v1435;
            v1316 = v1607;
            v1315 = v1616;
          }
          if ( v1317 != (unsigned int *)v1760 )
          {
            v1307 = -1073741811;
            goto LABEL_1611;
          }
          v1312 = 0LL;
          v465 = 0LL;
        }
        if ( lpModuleNamep )
        {
          v1322 = GetProcessHeap();
          v1323 = v1625;
          v1324 = HeapAlloc(v1322, 8u, v1625);
          v465 = 0LL;
          v1640 = v1324;
          v1312 = v1324;
          if ( !v1324 )
          {
            v1307 = -1073741801;
LABEL_1612:
            v1080 = v1307 | 0x10000000;
            goto LABEL_1380;
          }
          v1307 = 0;
        }
        else
        {
          v1323 = v1625;
        }
        if ( v1616 )
        {
          memcpy_0(v1312, v1616, v1323);
          v1312 = v1640;
          v465 = 0LL;
        }
        v1779[0] = (LPVOID)__PAIR64__(lpModuleNamep, v1435);
        v1779[1] = v1312;
LABEL_1603:
        if ( v1307 >= 0 && lpMemp != LODWORD(v1779[0]) )
          v1307 = -1073741762;
        goto LABEL_1612;
      }
      v1171 = v1650;
      v1307 = -1073741675;
    }
LABEL_1586:
    dwBytesd = v1305;
    v1525 = v1306;
    goto LABEL_1611;
  }
  MemoryFree(v1419);
  v465 = 0LL;
LABEL_1562:
  v1080 = -805306367;
  v1419 = 0LL;
LABEL_1379:
  v1171 = v1650;
LABEL_1380:
  if ( v1171 )
  {
LABEL_1381:
    v1172 = GetProcessHeap();
    HeapFree(v1172, 0, v1171);
    v465 = 0LL;
  }
  if ( v1066 )
  {
    v1173 = (void *)v1066[1];
    if ( v1173 )
    {
      v1174 = GetProcessHeap();
      HeapFree(v1174, 0, v1173);
      v1066[1] = 0LL;
    }
    v1175 = (void *)v1066[3];
    if ( v1175 )
    {
      v1176 = GetProcessHeap();
      HeapFree(v1176, 0, v1175);
      v1066[3] = 0LL;
    }
    v1177 = (void *)v1066[5];
    if ( v1177 )
    {
      v1178 = GetProcessHeap();
      HeapFree(v1178, 0, v1177);
      v1066[5] = 0LL;
    }
    v1179 = GetProcessHeap();
    HeapFree(v1179, 0, v1066);
    v465 = 0LL;
  }
  if ( v1525 )
  {
    v1180 = GetProcessHeap();
    HeapFree(v1180, 0, v1525);
    v465 = 0LL;
  }
  if ( Sizec )
  {
    v1181 = GetProcessHeap();
    HeapFree(v1181, 0, Sizec);
    v465 = 0LL;
  }
  if ( dwBytesd )
  {
    v1182 = (void *)*((_QWORD *)dwBytesd + 1);
    if ( v1182 )
    {
      v1183 = GetProcessHeap();
      HeapFree(v1183, 0, v1182);
      *((_QWORD *)dwBytesd + 1) = 0LL;
    }
    v1184 = (void *)*((_QWORD *)dwBytesd + 3);
    if ( v1184 )
    {
      v1185 = GetProcessHeap();
      HeapFree(v1185, 0, v1184);
      *((_QWORD *)dwBytesd + 3) = 0LL;
    }
    v1186 = (void *)*((_QWORD *)dwBytesd + 5);
    if ( v1186 )
    {
      v1187 = GetProcessHeap();
      HeapFree(v1187, 0, v1186);
      *((_QWORD *)dwBytesd + 5) = 0LL;
    }
    v1188 = GetProcessHeap();
    HeapFree(v1188, 0, dwBytesd);
    v465 = 0LL;
  }
  if ( v1419 )
  {
    v1189 = GetProcessHeap();
    HeapFree(v1189, 0, v1419);
    v465 = 0LL;
  }
  if ( v1080 >= 0 )
  {
    if ( LODWORD(v1779[0]) )
    {
      v1190 = v1779[1];
      if ( v1779[1] )
      {
        v1746[0] = v1779[1];
        if ( (int)RtlULongLongAdd(v1779[1], 4LL, v1746) >= 0 )
        {
          v1193 = (const void **)v1746[0];
          if ( *v1190 == (_DWORD)v465 )
            v1193 = v465;
          v1746[0] = v1193;
          if ( *v1190 == v1192 && *(_DWORD *)v1193 >= (int)v465 && v1190 && v1191 > 1 )
          {
            for ( i3 = (int)v465; ; i3 = 1 )
            {
              v1195 = v1190 + 1;
              if ( i3 )
                break;
              if ( v1195 < v1190 )
                break;
              v1190 = (_DWORD *)((char *)v1195 + (unsigned int)*v1190);
              if ( v1190 < v1195 )
                break;
            }
          }
        }
      }
    }
  }
LABEL_1615:
  v1778[0] = 0LL;
  v1325 = (void *)v1778[1];
  if ( v1778[1] )
  {
    v1326 = GetProcessHeap();
    HeapFree(v1326, 0, v1325);
    v465 = 0LL;
    v1778[1] = 0LL;
  }
  v1779[0] = 0LL;
  v1327 = v1779[1];
  if ( v1779[1] )
  {
    v1328 = GetProcessHeap();
    HeapFree(v1328, 0, v1327);
    v465 = 0LL;
    v1779[1] = 0LL;
  }
  if ( v471 )
  {
    v1329 = GetProcessHeap();
    HeapFree(v1329, 0, v471);
    v465 = 0LL;
  }
  if ( v468 )
  {
    v1330 = GetProcessHeap();
    HeapFree(v1330, 0, v468);
    v465 = 0LL;
  }
LABEL_1623:
  v94 = v1658;
  v91 = 4LL;
  v0 = (int *)hMem;
  v92 = v465;
  v1 = 1;
LABEL_1626:
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v1331 = dword_18089D72C;
  if ( dword_18089D72C > 0 )
  {
    --dword_18089D72C;
    if ( v1331 == 1 )
    {
      v1332 = (HMODULE *)&unk_180899E50;
      do
      {
        if ( *v1332 )
          FreeLibrary(*v1332);
        v1332 += 3;
        --v91;
      }
      while ( v91 );
      memset_0(&unk_180899E50, 0, 0x60uLL);
      v1333 = 2LL;
      v1334 = off_180891340;
      v1335 = off_1806EF510;
      do
      {
        v1336 = *((_OWORD *)v1335 + 1);
        *(_OWORD *)v1334 = *(_OWORD *)v1335;
        v1337 = *((_OWORD *)v1335 + 2);
        *((_OWORD *)v1334 + 1) = v1336;
        v1338 = *((_OWORD *)v1335 + 3);
        *((_OWORD *)v1334 + 2) = v1337;
        v1339 = *((_OWORD *)v1335 + 4);
        *((_OWORD *)v1334 + 3) = v1338;
        v1340 = *((_OWORD *)v1335 + 5);
        *((_OWORD *)v1334 + 4) = v1339;
        v1341 = *((_OWORD *)v1335 + 6);
        *((_OWORD *)v1334 + 5) = v1340;
        v1342 = *((_OWORD *)v1335 + 7);
        v1335 += 16;
        *((_OWORD *)v1334 + 6) = v1341;
        v1334 += 16;
        *((_OWORD *)v1334 - 1) = v1342;
        --v1333;
      }
      while ( v1333 );
      LODWORD(v465) = 0;
      v1343 = *((_OWORD *)v1335 + 1);
      *(_OWORD *)v1334 = *(_OWORD *)v1335;
      v1344 = *((_OWORD *)v1335 + 2);
      *((_OWORD *)v1334 + 1) = v1343;
      v1345 = *((_OWORD *)v1335 + 3);
      *((_OWORD *)v1334 + 2) = v1344;
      v1346 = *((_OWORD *)v1335 + 4);
      *((_OWORD *)v1334 + 3) = v1345;
      v1347 = *((_OWORD *)v1335 + 5);
      *((_OWORD *)v1334 + 4) = v1346;
      v1348 = *((_OWORD *)v1335 + 6);
      *((_OWORD *)v1334 + 5) = v1347;
      *((_OWORD *)v1334 + 6) = v1348;
    }
  }
  _InterlockedExchange(&dword_18089D738, (__int32)v465);
  if ( v92 )
  {
    LocalFree(v92);
    LOBYTE(v465) = 0;
  }
  if ( v93 >= 0 )
  {
    if ( v94 != 4 )
      goto LABEL_1646;
    v1349 = *v0;
  }
  else
  {
    switch ( v93 )
    {
      case -805306316:
        v1657 = -1073418222;
        break;
      case -805306139:
      case -1073425151:
        v1657 = -1073418201;
        break;
      case -805306306:
        v1657 = -1073418200;
        break;
      default:
        v1657 = v93;
        if ( v93 == -2147024774 )
        {
LABEL_1646:
          v1349 = 0;
          v1350 = -1073418210;
          goto LABEL_1652;
        }
        break;
    }
    v1349 = 0;
  }
  v1350 = v1657;
LABEL_1652:
  if ( v0 )
  {
    LocalFree(v0);
    LOBYTE(v465) = 0;
  }
  if ( v1350 < 0 || !v1349 )
    v1 = (char)v465;
  byte_18089DE08 = v1;
  Init_thread_footer(&dword_18089DDF0);
  return byte_18089DE08;
}
