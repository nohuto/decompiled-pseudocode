/*
 * XREFs of ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x18014B1A4
 * Callers:
 *     ?IsWindowTabHostComponentEnabled@@YA_NXZ @ 0x1803E52F0 (-IsWindowTabHostComponentEnabled@@YA_NXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800EBD80 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800EBDAC (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800EBDE0 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x1801892D8 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18018AAB8 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1801A1320 (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1801D94A0 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ??4?$SP@EV?$SP_HLOCAL@E@@@@QEAAAEAV0@V?$CTypeWrapper@PEAE@@@Z @ 0x1802C17C4 (--4-$SP@EV-$SP_HLOCAL@E@@@@QEAAAEAV0@V-$CTypeWrapper@PEAE@@@Z.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1802C3B30 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ??$GetPtrAs@PEAG@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEBAPEAPEAGXZ @ 0x1802C6D98 (--$GetPtrAs@PEAG@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEBAPEAPEAGXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     wcscmp_0 @ 0x1802D373C (wcscmp_0.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x180683BAC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char IsWindowTabHostEnabledOnSKU(void)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // rax
  void *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // rdi
  HMODULE *v20; // r14
  int v21; // esi
  _BYTE *v22; // rdi
  __int64 (__fastcall *ProcAddress)(); // rdx
  int v24; // eax
  __int64 v25; // rcx
  _BYTE *v26; // r13
  unsigned __int16 *v27; // r8
  int v28; // ebx
  __int64 v29; // rax
  _BYTE *v30; // r13
  __int64 (__fastcall *v31)(); // rax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  _BYTE *v34; // r13
  unsigned __int16 *v35; // r8
  int v36; // ebx
  __int64 v37; // rax
  _BYTE *v38; // r13
  __int64 (__fastcall *v39)(); // rax
  unsigned int v40; // ecx
  __int64 v41; // rdx
  WCHAR *v42; // r14
  char *v43; // rax
  unsigned int v44; // esi
  unsigned int v45; // r11d
  unsigned int v46; // ebx
  _DWORD *v47; // rax
  unsigned int *v48; // rdx
  unsigned int v49; // r8d
  unsigned int v50; // r9d
  unsigned int v51; // ecx
  const wchar_t **v52; // rdx
  const wchar_t *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  char *v56; // rax
  _BYTE *v57; // r14
  int v58; // ebx
  unsigned __int8 *v59; // rsi
  int v60; // r13d
  int v61; // edx
  int v62; // r9d
  __int64 v63; // rdi
  int v64; // r11d
  int v65; // r10d
  int v66; // eax
  int v67; // r11d
  int v68; // r9d
  int v69; // r10d
  unsigned int v70; // edx
  int v71; // ecx
  unsigned int v72; // r8d
  int v73; // edx
  unsigned int v74; // r8d
  int v75; // r9d
  int v76; // ecx
  int v77; // edx
  unsigned int v78; // r8d
  int v79; // ecx
  int v80; // edx
  unsigned int v81; // r9d
  unsigned int v82; // edx
  int v83; // r8d
  int v84; // ecx
  unsigned int v85; // edx
  int v86; // r8d
  int v87; // ecx
  int v88; // edx
  unsigned int v89; // r8d
  int v90; // ecx
  int v91; // r9d
  unsigned int v92; // edi
  int v93; // r13d
  unsigned __int64 v94; // rax
  __m128 v95; // xmm1
  __m128 v96; // xmm0
  __m128 v97; // xmm0
  __m128 v98; // xmm1
  __m128 v99; // xmm1
  __m128 v100; // xmm1
  signed int v101; // ebx
  unsigned int v102; // ecx
  __int64 v103; // rdx
  __int64 *v104; // r8
  __int64 v105; // r9
  LPVOID v106; // rax
  __int64 v107; // rax
  signed int v108; // eax
  LPVOID v109; // rdx
  __int64 v110; // rax
  __int64 ii; // rax
  _BYTE *v112; // rcx
  __int64 v113; // rax
  __int16 v114; // r11
  void **v115; // rsi
  _BYTE *v116; // rax
  char v117; // r11
  __int64 jj; // rcx
  void **v119; // rax
  signed int v120; // eax
  __int64 v121; // rcx
  _BYTE *m; // rax
  __int64 v123; // rcx
  _BYTE *n; // rax
  _BYTE *v125; // rcx
  __int64 v126; // rax
  int v127; // eax
  HMODULE *v128; // rbx
  __int64 v129; // rdi
  int v130; // ebx
  int v131; // eax
  _BYTE *v132; // rdi
  LPVOID v133; // r8
  int v134; // r13d
  __int64 v135; // rax
  _BYTE *v136; // rdi
  __int64 (__fastcall *v137)(); // rax
  unsigned int v138; // ecx
  __int64 v139; // rdx
  char v140; // r12
  int v141; // eax
  int v142; // r13d
  _BYTE *v143; // r14
  int v144; // ecx
  unsigned __int8 *v145; // r15
  int v146; // r10d
  __int64 v147; // rsi
  int v148; // r8d
  int v149; // ebx
  int v150; // r11d
  int v151; // eax
  int v152; // ebx
  int v153; // edx
  int v154; // r11d
  unsigned int v155; // r8d
  int v156; // r9d
  unsigned int v157; // r10d
  int v158; // edx
  int v159; // r8d
  unsigned int v160; // r9d
  int v161; // r10d
  int v162; // edx
  int v163; // r8d
  unsigned int v164; // r9d
  int v165; // edx
  int v166; // r8d
  unsigned int v167; // r10d
  unsigned int v168; // r8d
  int v169; // r9d
  int v170; // edx
  unsigned int v171; // r8d
  int v172; // r9d
  int v173; // edx
  int v174; // r8d
  unsigned int v175; // r9d
  int v176; // r10d
  int v177; // eax
  unsigned __int64 v178; // rax
  char v179; // cl
  unsigned int v180; // r13d
  __int64 v181; // rdi
  HMODULE *v182; // rbx
  void *v183; // rbx
  const WCHAR *v184; // rdx
  __int64 v185; // rax
  char *v186; // rdx
  unsigned int v187; // r15d
  unsigned int v188; // r14d
  const CHAR *v189; // rdx
  HANDLE ProcessHeap; // rax
  void *v191; // rsi
  void *v192; // rdi
  int v193; // r15d
  signed int LastError; // r14d
  void *v195; // rax
  bool v196; // sf
  void *v197; // rbx
  __int64 v198; // r9
  __int64 (__fastcall *v199)(); // rbx
  DWORD CurrentThreadId; // eax
  void *v201; // rax
  bool v202; // sf
  void *v203; // rbx
  __int64 v204; // r9
  HANDLE CurrentProcess; // rax
  bool v206; // sf
  HLOCAL v207; // rax
  void *v208; // r13
  int v209; // r15d
  unsigned int v210; // esi
  void *v211; // rdi
  HANDLE v212; // rax
  _OWORD *v213; // rax
  _OWORD *v214; // rbx
  HANDLE v215; // rax
  _QWORD *v216; // r11
  void *v217; // r11
  int v218; // eax
  unsigned int v219; // r10d
  void *v220; // r11
  int v221; // eax
  unsigned int v222; // r10d
  int v223; // r9d
  int v224; // eax
  unsigned int v225; // r10d
  int v226; // r9d
  int v227; // eax
  size_t v228; // rdx
  int v229; // r9d
  void *v230; // r11
  int v231; // eax
  unsigned int v232; // r10d
  void *v233; // r11
  int v234; // eax
  unsigned int v235; // r10d
  int v236; // r9d
  int v237; // eax
  int v238; // r9d
  unsigned int v239; // ebx
  HANDLE v240; // rax
  void *v241; // rbx
  __int64 v242; // r9
  _DWORD *v243; // r10
  _DWORD *v244; // rax
  int v245; // r10d
  unsigned int *v246; // r11
  __int64 v247; // rdx
  __int64 v248; // r9
  __int64 v249; // r11
  unsigned int v250; // r10d
  unsigned int v251; // r9d
  unsigned int *v252; // r11
  __int64 v253; // r9
  unsigned int *v254; // r10
  __int64 v255; // rdx
  __int64 v256; // r9
  __int64 v257; // r10
  int v258; // r11d
  _DWORD *v259; // r10
  __int64 v260; // r9
  size_t v261; // rdx
  int v262; // r11d
  unsigned int *v263; // r10
  __int64 v264; // rdx
  __int64 v265; // r9
  __int64 v266; // r10
  _DWORD *v267; // r10
  _QWORD *v268; // rax
  SIZE_T v269; // rcx
  __int64 v270; // r9
  int v271; // r11d
  unsigned int *v272; // r9
  int v273; // ebx
  __int64 v274; // rdx
  __int64 v275; // r9
  unsigned int v276; // r11d
  _DWORD *v277; // r9
  __int64 v278; // r10
  void *v279; // rcx
  unsigned int v280; // r10d
  unsigned int *v281; // r9
  __int64 v282; // rdx
  __int64 v283; // r9
  unsigned int v284; // r11d
  unsigned int *v285; // r9
  _DWORD *v286; // rax
  int v287; // ecx
  int v288; // r9d
  unsigned int v289; // r10d
  unsigned int *v290; // r10
  __int64 v291; // rdx
  __int64 v292; // r9
  __int64 v293; // r10
  unsigned int v294; // r9d
  unsigned int v295; // r9d
  unsigned int *v296; // r10
  _DWORD *v297; // rax
  __int64 v298; // rcx
  unsigned int v299; // r9d
  unsigned int v300; // r10d
  unsigned int v301; // r10d
  unsigned int v302; // r10d
  unsigned int v303; // r10d
  unsigned __int8 *v304; // rbx
  int v305; // eax
  SIZE_T v306; // r9
  const WCHAR *v307; // r10
  int v308; // r15d
  unsigned int v309; // ecx
  unsigned int v310; // ebx
  HANDLE v311; // rax
  unsigned __int8 *v312; // rax
  int v313; // eax
  __int64 v314; // r9
  unsigned int v315; // r10d
  size_t v316; // rcx
  size_t v317; // rcx
  int v318; // eax
  HANDLE v319; // rax
  unsigned __int64 v320; // r15
  void *v321; // rax
  unsigned int v322; // r10d
  SIZE_T v323; // rdx
  unsigned __int8 v324; // al
  unsigned __int64 v325; // rcx
  size_t v326; // r8
  SIZE_T v327; // rcx
  int v328; // r15d
  unsigned __int8 *v329; // r11
  unsigned int v330; // r9d
  int v331; // edx
  int v332; // r15d
  char v333; // r9
  int v334; // r8d
  int v335; // ecx
  unsigned int v336; // r15d
  unsigned int v337; // ecx
  unsigned int v338; // r10d
  _BYTE *v339; // r14
  char v340; // si
  SIZE_T v341; // rax
  int v342; // r10d
  unsigned __int8 *v343; // rdx
  int v344; // r8d
  char *v345; // r14
  int v346; // edi
  int v347; // eax
  int v348; // ebx
  int v349; // r11d
  int v350; // r15d
  int v351; // edx
  int v352; // r10d
  int v353; // r8d
  int v354; // r9d
  unsigned int v355; // edx
  int v356; // r8d
  int v357; // ecx
  int v358; // edx
  int v359; // r8d
  int v360; // r9d
  int v361; // edx
  unsigned int v362; // r8d
  unsigned int v363; // r9d
  int v364; // edx
  int v365; // r8d
  int v366; // r9d
  int v367; // edx
  int v368; // r8d
  int v369; // r10d
  int v370; // edx
  int v371; // r9d
  unsigned int v372; // r8d
  int v373; // r15d
  _BYTE *v374; // rdx
  int v375; // r15d
  HANDLE v376; // rax
  _QWORD *v377; // r15
  HANDLE v378; // rax
  void *v379; // rax
  LPVOID *v380; // rax
  HANDLE v381; // rax
  _OWORD *v382; // rax
  HANDLE v383; // rax
  _QWORD *v384; // rax
  int v385; // r15d
  HANDLE v386; // rax
  HANDLE v387; // rax
  HANDLE v388; // rax
  HANDLE v389; // rax
  void *v390; // rax
  void *v391; // r13
  const void **v392; // rdi
  HANDLE v393; // rax
  WCHAR *v394; // rbx
  HANDLE v395; // rax
  HANDLE v396; // rax
  HANDLE v397; // rax
  HANDLE v398; // rax
  __int64 v399; // rdx
  size_t v400; // r11
  int v401; // r15d
  unsigned int v402; // ebx
  HANDLE v403; // rax
  _DWORD *v404; // rax
  __int64 v405; // r9
  void *v406; // rcx
  void *v407; // r13
  __int64 v408; // r9
  __int64 v409; // r9
  void *v410; // rcx
  __int64 v411; // r9
  __int64 v412; // r9
  void *v413; // rcx
  __int64 v414; // r9
  HANDLE v415; // rax
  int v416; // eax
  __int64 v417; // rcx
  void *v418; // rcx
  unsigned int v419; // r11d
  size_t v420; // r10
  _DWORD *v421; // rcx
  int v422; // r11d
  unsigned int v423; // r10d
  unsigned int v424; // r10d
  unsigned int v425; // r10d
  unsigned int v426; // eax
  void *v427; // rdi
  HANDLE v428; // rax
  LPVOID v429; // rbx
  HANDLE v430; // rax
  HANDLE v431; // rax
  HANDLE v432; // rax
  HANDLE v433; // rax
  HANDLE v434; // rax
  void *v435; // rbx
  HANDLE v436; // rax
  _QWORD *v437; // rbx
  void *v438; // rdi
  HANDLE v439; // rax
  void *v440; // rdi
  HANDLE v441; // rax
  void *v442; // rdi
  HANDLE v443; // rax
  HANDLE v444; // rax
  void *v445; // rbx
  HANDLE v446; // rax
  int v447; // ebx
  unsigned int v448; // ebx
  HANDLE v449; // rax
  void *v450; // rax
  _QWORD *v451; // r13
  signed int v452; // eax
  FARPROC v453; // rax
  int v454; // eax
  WCHAR *v455; // r10
  unsigned __int8 *v456; // rax
  void *v457; // rcx
  SIZE_T v458; // rdx
  __int64 v459; // rbx
  int v460; // r15d
  void *v461; // r10
  unsigned int v462; // r11d
  unsigned int v463; // r11d
  int v464; // r11d
  HANDLE v465; // rax
  LPVOID v466; // rbx
  unsigned __int64 v467; // rax
  unsigned int v468; // r15d
  HANDLE v469; // rax
  void *v470; // rax
  unsigned __int64 v471; // rax
  unsigned int v472; // r15d
  HANDLE v473; // rax
  void *v474; // rax
  unsigned __int64 v475; // rax
  unsigned int v476; // r15d
  HANDLE v477; // rax
  void *v478; // rax
  HANDLE v479; // rax
  HANDLE v480; // rax
  HANDLE v481; // rax
  HANDLE v482; // rax
  void *v483; // r15
  void *v484; // rbx
  HANDLE v485; // rax
  void *v486; // rbx
  HANDLE v487; // rax
  void *v488; // rbx
  HANDLE v489; // rax
  HANDLE v490; // rax
  _DWORD *v491; // rax
  WCHAR *v492; // rcx
  _DWORD *v493; // r10
  unsigned __int8 v494; // dl
  void *v495; // rdi
  void *v496; // r8
  char v497; // dl
  unsigned __int8 *v498; // r10
  void *v499; // r8
  int v500; // r8d
  unsigned int v501; // r11d
  unsigned int v502; // r9d
  unsigned int v503; // eax
  unsigned int v504; // ecx
  int v505; // esi
  _BYTE *v506; // r14
  char v507; // r15
  size_t v508; // rdx
  SIZE_T v509; // r9
  int v510; // r13d
  int v511; // r8d
  char *v512; // rsi
  int v513; // edx
  int v514; // r15d
  int v515; // r10d
  unsigned __int8 *v516; // rcx
  int v517; // edi
  int v518; // r11d
  int v519; // ebx
  unsigned int v520; // ecx
  int v521; // r9d
  unsigned int v522; // r10d
  int v523; // r8d
  int v524; // r9d
  unsigned int v525; // ecx
  unsigned int v526; // r8d
  int v527; // r10d
  int v528; // r11d
  unsigned int v529; // r9d
  int v530; // ecx
  int v531; // r8d
  unsigned int v532; // r9d
  int v533; // ecx
  int v534; // r8d
  int v535; // r9d
  int v536; // ecx
  int v537; // r8d
  int v538; // r9d
  int v539; // ecx
  int v540; // r8d
  unsigned int v541; // r9d
  int v542; // ecx
  int v543; // r11d
  int v544; // eax
  _BYTE *v545; // rcx
  int v546; // r11d
  SIZE_T i; // rax
  int v548; // r15d
  void *v549; // r10
  int v550; // eax
  void *v551; // r8
  void *v552; // rcx
  void *v553; // r10
  int v554; // eax
  unsigned __int8 *v555; // r11
  __int64 v556; // rbx
  void *v557; // rbx
  void *v558; // r10
  unsigned __int8 *v559; // r11
  void *v560; // rax
  __int64 v561; // rdx
  void *v562; // r10
  void *v563; // r11
  SIZE_T v564; // rcx
  unsigned int v565; // ecx
  unsigned int v566; // ebx
  HANDLE v567; // rax
  void *v568; // rbx
  int v569; // eax
  unsigned int *v570; // rcx
  _DWORD *v571; // r11
  int *v572; // r15
  __int64 v573; // r9
  int v574; // r11d
  int v575; // r9d
  void **v576; // rax
  __int64 v577; // r9
  void *v578; // rax
  LPVOID v579; // rcx
  __int64 v580; // r9
  unsigned int v581; // r10d
  int v582; // r9d
  int v583; // r9d
  SIZE_T v584; // r11
  int *v585; // rax
  int v586; // eax
  SIZE_T v587; // rcx
  __int64 v588; // r9
  __int64 v589; // r9
  unsigned int v590; // r10d
  int v591; // r9d
  unsigned int *v592; // rcx
  __int64 v593; // r9
  unsigned int v594; // ebx
  __int64 v595; // r9
  int v596; // r9d
  int v597; // r9d
  int *v598; // rax
  LPVOID v599; // rdx
  __int64 v600; // r9
  int v601; // eax
  unsigned int *v602; // rcx
  unsigned int v603; // ebx
  __int64 v604; // r9
  int v605; // r9d
  int v606; // r9d
  size_t v607; // r10
  const void *v608; // r11
  int *v609; // rbx
  int v610; // ebx
  void *v611; // rbx
  HANDLE v612; // rax
  void *v613; // rbx
  HANDLE v614; // rax
  HANDLE v615; // rax
  HANDLE v616; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v618; // rax
  int v619; // eax
  unsigned __int16 *v620; // rax
  _BYTE *v621; // rsi
  int v622; // r13d
  unsigned __int8 *v623; // r14
  int v624; // ecx
  __int64 v625; // rdi
  int v626; // r10d
  int v627; // r8d
  int v628; // ebx
  int v629; // r11d
  int v630; // eax
  int v631; // ebx
  int v632; // edx
  int v633; // r11d
  unsigned int v634; // r8d
  int v635; // r9d
  unsigned int v636; // edx
  int v637; // r10d
  int v638; // r8d
  unsigned int v639; // r9d
  int v640; // r10d
  int v641; // edx
  int v642; // r8d
  unsigned int v643; // r9d
  int v644; // edx
  int v645; // r8d
  unsigned int v646; // r10d
  unsigned int v647; // r8d
  int v648; // r9d
  int v649; // edx
  unsigned int v650; // r8d
  int v651; // r9d
  int v652; // edx
  int v653; // r8d
  unsigned int v654; // r9d
  int v655; // r10d
  int v656; // eax
  unsigned __int64 v657; // rax
  char v658; // cl
  HMODULE *v659; // rbx
  __int64 v660; // r13
  const WCHAR *v661; // rdx
  __int64 v662; // rax
  unsigned __int64 v663; // rdx
  unsigned int v664; // eax
  const CHAR *v665; // r8
  HANDLE v666; // rax
  int v667; // eax
  unsigned __int16 *v668; // rax
  _BYTE *v669; // rsi
  int v670; // r13d
  unsigned __int8 *v671; // r14
  int v672; // ecx
  __int64 v673; // rdi
  int v674; // r10d
  int v675; // r8d
  int v676; // ebx
  int v677; // r11d
  int v678; // eax
  int v679; // ebx
  int v680; // edx
  int v681; // r11d
  unsigned int v682; // r8d
  int v683; // r9d
  unsigned int v684; // r10d
  int v685; // edx
  int v686; // r8d
  unsigned int v687; // r9d
  int v688; // r10d
  int v689; // edx
  int v690; // r8d
  unsigned int v691; // r9d
  int v692; // edx
  int v693; // r8d
  unsigned int v694; // r10d
  unsigned int v695; // r8d
  int v696; // r9d
  int v697; // edx
  unsigned int v698; // r8d
  int v699; // r9d
  int v700; // edx
  int v701; // r8d
  unsigned int v702; // r9d
  int v703; // r10d
  int v704; // eax
  unsigned __int64 v705; // rax
  char v706; // cl
  HMODULE *v707; // rbx
  __int64 v708; // r13
  const WCHAR *v709; // rdx
  __int64 v710; // rax
  unsigned __int64 v711; // rdx
  unsigned int v712; // eax
  const CHAR *v713; // r8
  HANDLE v714; // rax
  signed int v715; // eax
  bool v716; // sf
  LPVOID v717; // rax
  LPVOID v718; // rax
  int v719; // eax
  __int64 v720; // rcx
  __int64 v721; // rax
  unsigned int v722; // r11d
  int v723; // r10d
  __int16 v724; // dx
  unsigned int v725; // ecx
  __int16 *v726; // rax
  void *v727; // rax
  signed int v728; // eax
  signed int v729; // eax
  int v730; // eax
  unsigned __int16 *v731; // rax
  bool v732; // sf
  int v733; // eax
  __int64 v734; // rax
  HMODULE *v735; // r13
  unsigned int v736; // ebx
  int v737; // edi
  int v738; // r13d
  __int64 v739; // rax
  int v740; // eax
  __int64 v741; // rax
  bool v742; // sf
  size_t v743; // rax
  signed int v744; // eax
  int v745; // eax
  __int64 v746; // rax
  bool v747; // sf
  unsigned int v748; // r8d
  int v749; // eax
  __int32 v750; // r13d
  void *v751; // rbx
  void *v752; // rbx
  int v753; // ebx
  __int64 v754; // rdx
  bool v755; // sf
  int v756; // eax
  __int64 v757; // rax
  bool v758; // sf
  void *v759; // rbx
  __int64 v760; // r13
  unsigned int v761; // eax
  unsigned int v762; // ebx
  int v763; // eax
  unsigned __int64 v764; // rdx
  __int32 v765; // edx
  int v766; // r13d
  int v767; // ebx
  int v768; // ebx
  CToastCenterExperienceManager *v769; // rax
  int v770; // edx
  int v771; // ecx
  CToastCenterExperienceManager *v772; // rax
  SIZE_T v773; // rbx
  int v774; // eax
  void *v775; // rbx
  SIZE_T v776; // rbx
  __int64 v777; // rax
  CToastCenterExperienceManager *v778; // r13
  LPVOID v779; // rbx
  signed int v780; // ebx
  bool v781; // sf
  bool v782; // zf
  void *v783; // rcx
  void *v784; // rax
  __int64 (__fastcall *v785)(); // rbx
  __int64 v786; // rax
  __int32 v787; // ebx
  __int32 v788; // r10d
  __int32 v789; // r8d
  __int32 v790; // r9d
  int v791; // ecx
  int v792; // eax
  unsigned __int64 v793; // r14
  char v794; // si
  int v795; // edx
  __int64 v796; // rdi
  char *v797; // r8
  char *v798; // rax
  signed int v799; // r13d
  unsigned __int8 *v800; // r10
  __int64 v801; // r11
  char *v802; // r8
  int v803; // r9d
  int v804; // ecx
  int v805; // r8d
  int v806; // edx
  int v807; // ecx
  int v808; // r8d
  int v809; // edx
  void *v810; // rbx
  SIZE_T v811; // rbx
  __int64 v812; // rax
  CToastCenterExperienceManager *v813; // r13
  LPVOID v814; // rbx
  signed int v815; // ebx
  bool v816; // sf
  void *v817; // rcx
  void *v818; // rax
  __int64 (__fastcall *v819)(); // rbx
  __int64 v820; // rax
  int v821; // eax
  __int32 v822; // r10d
  __int32 v823; // r9d
  __int32 v824; // r8d
  __int32 v825; // edx
  int v826; // edi
  int v827; // eax
  char *v828; // rdx
  char *v829; // rax
  signed int v830; // r9d
  char v831; // r14
  unsigned __int8 *v832; // r10
  unsigned __int64 v833; // r8
  __int64 v834; // r11
  int v835; // r9d
  int v836; // ecx
  int v837; // r8d
  int v838; // edx
  int v839; // ecx
  int v840; // r8d
  int v841; // edx
  int v842; // r8d
  int v843; // ecx
  void *v844; // rbx
  char v845; // al
  unsigned __int32 v846; // r13d
  __int32 v847; // edx
  int v848; // ebx
  __int32 v849; // eax
  __int32 v850; // ebx
  void *v851; // rax
  __int64 v852; // rax
  LPVOID v853; // rcx
  void *v854; // rax
  signed int v855; // ebx
  bool v856; // sf
  void *v857; // rcx
  CToastCenterExperienceManager *v858; // rbx
  void *v859; // rax
  __int64 (__fastcall *v860)(); // rbx
  __int64 v861; // rax
  int v862; // r11d
  int v863; // r9d
  int v864; // r8d
  int v865; // ecx
  int v866; // edx
  int v867; // eax
  unsigned __int64 v868; // r14
  char v869; // si
  unsigned __int16 *v870; // r13
  unsigned __int8 *v871; // rdx
  SIZE_T v872; // rax
  unsigned int v873; // r9d
  SIZE_T v874; // r11
  unsigned __int8 *v875; // r10
  char *v876; // r8
  int v877; // r9d
  int v878; // ecx
  int v879; // r8d
  int v880; // edx
  int v881; // ecx
  int v882; // r8d
  int v883; // edx
  int v884; // r8d
  int v885; // ecx
  void *v886; // rbx
  __int64 v887; // rax
  CToastCenterExperienceManager *v888; // rbx
  void *v889; // rax
  signed int v890; // ebx
  bool v891; // sf
  SIZE_T v892; // rcx
  void *v893; // rax
  __int64 (__fastcall *v894)(); // rbx
  __int64 v895; // rax
  int v896; // eax
  int v897; // ecx
  int v898; // r8d
  int v899; // edx
  int v900; // r9d
  int v901; // eax
  int v902; // ecx
  int v903; // eax
  unsigned __int64 v904; // rsi
  LPVOID v905; // r14
  SIZE_T v906; // r8
  char *v907; // rax
  unsigned int v908; // r13d
  unsigned __int8 *v909; // r10
  char v910; // di
  char *v911; // r11
  char *v912; // r8
  int v913; // r9d
  int v914; // ecx
  int v915; // r8d
  int v916; // edx
  int v917; // ecx
  int v918; // r8d
  int v919; // edx
  int v920; // eax
  char *v921; // rax
  int v922; // esi
  _BYTE *v923; // r14
  int v924; // r13d
  unsigned __int8 *v925; // rcx
  int v926; // r9d
  __int64 v927; // rdi
  int v928; // r8d
  int v929; // ebx
  int v930; // r11d
  int v931; // eax
  int v932; // ebx
  int v933; // edx
  int v934; // r11d
  unsigned int v935; // r8d
  int v936; // r9d
  unsigned int v937; // r10d
  int v938; // edx
  int v939; // r8d
  unsigned int v940; // r9d
  int v941; // r10d
  int v942; // edx
  int v943; // r8d
  unsigned int v944; // r9d
  int v945; // edx
  int v946; // r8d
  unsigned int v947; // r10d
  unsigned int v948; // r8d
  int v949; // r9d
  int v950; // edx
  unsigned int v951; // r8d
  int v952; // r9d
  int v953; // edx
  int v954; // r8d
  unsigned int v955; // r9d
  int v956; // edx
  int v957; // r8d
  unsigned __int64 v958; // rax
  char v959; // cl
  HMODULE *v960; // rbx
  __int64 v961; // rdi
  HMODULE *v962; // rbx
  void *v963; // rbx
  const WCHAR *v964; // rdx
  __int64 v965; // rax
  unsigned __int64 v966; // rdx
  int v967; // eax
  const CHAR *v968; // r8
  HANDLE v969; // rax
  __int64 v970; // rdi
  int v971; // eax
  void *v972; // rbx
  HANDLE v973; // rax
  _OWORD *v974; // rdi
  HANDLE v975; // rax
  _QWORD *v976; // rax
  int v977; // eax
  void *v978; // r9
  void *v979; // r12
  int v980; // eax
  int v981; // r10d
  int v982; // eax
  int v983; // r10d
  int v984; // eax
  int v985; // r10d
  unsigned int v986; // ebx
  HANDLE v987; // rax
  LPVOID v988; // rax
  unsigned int v989; // r10d
  _DWORD *v990; // r11
  _DWORD *v991; // rax
  int v992; // r11d
  void *v993; // rdi
  HANDLE v994; // rax
  HANDLE v995; // rax
  HANDLE v996; // rax
  HANDLE v997; // rax
  unsigned int *v998; // r9
  __int64 v999; // rdx
  __int64 v1000; // r9
  unsigned int v1001; // r11d
  unsigned int *v1002; // r9
  unsigned int v1003; // r10d
  __int64 v1004; // r9
  unsigned int *v1005; // r10
  __int64 v1006; // rdx
  __int64 v1007; // r9
  __int64 v1008; // r10
  int v1009; // r11d
  _DWORD *v1010; // r10
  __int64 v1011; // r9
  unsigned int *v1012; // r10
  __int64 v1013; // rdx
  __int64 v1014; // r9
  __int64 v1015; // r10
  int v1016; // r11d
  _DWORD *v1017; // r10
  unsigned __int16 **v1018; // rax
  unsigned __int16 *v1019; // rcx
  __int64 v1020; // rcx
  unsigned int v1021; // r9d
  int v1022; // ebx
  unsigned int v1023; // r9d
  unsigned int v1024; // ecx
  unsigned int v1025; // ebx
  HANDLE v1026; // rax
  _DWORD *v1027; // rax
  int v1028; // eax
  __int64 v1029; // r9
  unsigned int v1030; // r11d
  void *v1031; // rcx
  size_t v1032; // rcx
  int v1033; // eax
  char *v1034; // r9
  int v1035; // ebx
  unsigned __int8 *v1036; // rbx
  void *v1037; // rax
  unsigned int v1038; // r8d
  size_t v1039; // rcx
  size_t v1040; // r10
  unsigned __int8 v1041; // al
  size_t v1042; // rdx
  int v1043; // r9d
  unsigned __int8 *v1044; // r11
  unsigned int v1045; // edx
  unsigned int v1046; // ecx
  char v1047; // r9
  int v1048; // r14d
  int v1049; // esi
  int v1050; // r8d
  HANDLE v1051; // rax
  unsigned int v1052; // r9d
  unsigned int v1053; // ecx
  int v1054; // ebx
  _BYTE *v1055; // r14
  unsigned int v1056; // esi
  char v1057; // al
  size_t v1058; // rax
  unsigned __int8 *v1059; // rdx
  size_t v1060; // r14
  int v1061; // r15d
  int v1062; // eax
  unsigned int v1063; // r12d
  int v1064; // ebx
  int v1065; // r11d
  int v1066; // r9d
  int v1067; // edx
  int v1068; // r10d
  int v1069; // edx
  int v1070; // r10d
  int v1071; // r8d
  int v1072; // r9d
  unsigned int v1073; // edx
  int v1074; // r8d
  int v1075; // ecx
  int v1076; // edx
  int v1077; // r8d
  int v1078; // r9d
  int v1079; // edx
  unsigned int v1080; // r8d
  unsigned int v1081; // r9d
  int v1082; // edx
  int v1083; // r8d
  int v1084; // r9d
  int v1085; // edx
  int v1086; // r8d
  int v1087; // r9d
  int v1088; // r10d
  int v1089; // r8d
  unsigned int v1090; // edx
  int v1091; // r8d
  int v1092; // r9d
  _BYTE *v1093; // rdx
  void *v1094; // rbx
  HANDLE v1095; // rax
  unsigned int *v1096; // rsi
  HANDLE v1097; // rax
  void *v1098; // rax
  HANDLE v1099; // rax
  _OWORD *v1100; // rax
  int v1101; // ebx
  HANDLE v1102; // rax
  _QWORD *v1103; // rax
  HANDLE v1104; // rax
  HANDLE v1105; // rax
  HANDLE v1106; // rax
  HANDLE v1107; // rax
  void *v1108; // r12
  HANDLE v1109; // rax
  _QWORD *v1110; // r13
  HANDLE v1111; // rax
  HANDLE v1112; // rax
  HANDLE v1113; // rax
  HANDLE v1114; // rax
  void *v1115; // r9
  __int64 v1116; // rdx
  int v1117; // ebx
  size_t v1118; // r11
  unsigned int v1119; // ebx
  HANDLE v1120; // rax
  _DWORD *v1121; // rax
  __int64 v1122; // r9
  void *v1123; // rcx
  void *v1124; // r13
  __int64 v1125; // r9
  __int64 v1126; // r9
  LPVOID v1127; // rcx
  __int64 v1128; // r9
  __int64 v1129; // r9
  LPVOID v1130; // rcx
  __int64 v1131; // r9
  HANDLE v1132; // rax
  int v1133; // eax
  __int64 v1134; // rcx
  LPVOID v1135; // rcx
  unsigned int v1136; // r11d
  SIZE_T v1137; // r10
  _DWORD *v1138; // rcx
  int v1139; // r11d
  unsigned int v1140; // r11d
  unsigned int v1141; // r11d
  unsigned int v1142; // r11d
  unsigned int v1143; // r10d
  unsigned int v1144; // r12d
  HANDLE v1145; // rax
  _QWORD *v1146; // r13
  void *v1147; // rsi
  signed int v1148; // eax
  FARPROC v1149; // rax
  int v1150; // eax
  __int64 v1151; // r9
  void *v1152; // r11
  void *v1153; // rax
  void *v1154; // rcx
  LPVOID v1155; // rdx
  __int64 v1156; // r12
  int v1157; // ebx
  __int64 v1158; // r9
  void *v1159; // r11
  __int64 v1160; // r9
  __int64 v1161; // r10
  SIZE_T v1162; // r12
  unsigned int v1163; // r10d
  __int64 v1164; // r9
  __int64 v1165; // r9
  unsigned int v1166; // r10d
  int v1167; // r9d
  unsigned int v1168; // r10d
  int v1169; // r9d
  int v1170; // r10d
  HANDLE v1171; // rax
  _QWORD *v1172; // rsi
  size_t v1173; // rax
  unsigned int v1174; // ebx
  HANDLE v1175; // rax
  void *v1176; // rax
  HANDLE v1177; // rax
  void *v1178; // rax
  const void *v1179; // r12
  size_t v1180; // rax
  unsigned int v1181; // ebx
  HANDLE v1182; // rax
  void *v1183; // rax
  void *v1184; // r12
  HANDLE v1185; // rax
  void *v1186; // r12
  HANDLE v1187; // rax
  void *v1188; // r12
  HANDLE v1189; // rax
  HANDLE v1190; // rax
  unsigned int *v1191; // rax
  void *v1192; // rsi
  HANDLE v1193; // rax
  void *v1194; // rsi
  HANDLE v1195; // rax
  void *v1196; // rsi
  HANDLE v1197; // rax
  HANDLE v1198; // rax
  void *v1199; // rax
  void *v1200; // r10
  void *v1201; // rcx
  void *v1202; // r11
  void *v1203; // rbx
  unsigned __int8 v1204; // dl
  void *v1205; // rsi
  void *v1206; // r8
  unsigned __int8 *v1207; // rdx
  int v1208; // r15d
  void *v1209; // r14
  int v1210; // r10d
  int v1211; // ecx
  unsigned int v1212; // r10d
  unsigned int v1213; // eax
  unsigned int v1214; // r9d
  unsigned int v1215; // ecx
  int v1216; // r11d
  _BYTE *v1217; // rbx
  unsigned int v1218; // r14d
  size_t v1219; // r11
  int v1220; // r9d
  SIZE_T v1221; // rbx
  int v1222; // esi
  _BYTE *v1223; // r12
  int v1224; // r8d
  int v1225; // edx
  size_t v1226; // r15
  int v1227; // r11d
  unsigned __int8 *v1228; // r13
  int v1229; // edi
  int v1230; // ebx
  int v1231; // eax
  int v1232; // edi
  int v1233; // r10d
  int v1234; // ebx
  unsigned int v1235; // ecx
  int v1236; // r9d
  unsigned int v1237; // r10d
  int v1238; // r8d
  int v1239; // r9d
  unsigned int v1240; // ecx
  int v1241; // r8d
  int v1242; // r10d
  int v1243; // r11d
  unsigned int v1244; // r9d
  int v1245; // ecx
  int v1246; // r8d
  unsigned int v1247; // r9d
  int v1248; // ecx
  int v1249; // r8d
  int v1250; // r9d
  int v1251; // ecx
  int v1252; // r8d
  int v1253; // r9d
  int v1254; // ecx
  int v1255; // r8d
  unsigned int v1256; // r9d
  int v1257; // ecx
  int v1258; // r10d
  const WCHAR *v1259; // r10
  SIZE_T k; // rax
  void *v1261; // r14
  int v1262; // ebx
  SIZE_T v1263; // r9
  void *v1264; // r11
  const WCHAR *v1265; // r10
  const WCHAR *v1266; // r10
  void *v1267; // r9
  const WCHAR *v1268; // r10
  SIZE_T v1269; // rax
  void *v1270; // r11
  SIZE_T v1271; // r10
  SIZE_T v1272; // r14
  __int64 v1273; // r10
  const WCHAR *v1274; // r11
  void *v1275; // rcx
  unsigned int v1276; // ecx
  unsigned int v1277; // ebx
  HANDLE v1278; // rax
  void *v1279; // rax
  HANDLE v1280; // rax
  _QWORD *v1281; // rsi
  void *v1282; // r14
  HANDLE v1283; // rax
  void *v1284; // r14
  HANDLE v1285; // rax
  void *v1286; // r14
  HANDLE v1287; // rax
  HANDLE v1288; // rax
  void *v1289; // rsi
  HANDLE v1290; // rax
  void *v1291; // rsi
  HANDLE v1292; // rax
  _QWORD *v1293; // rsi
  void *v1294; // r14
  HANDLE v1295; // rax
  void *v1296; // r14
  HANDLE v1297; // rax
  void *v1298; // r14
  HANDLE v1299; // rax
  HANDLE v1300; // rax
  WCHAR *v1301; // rsi
  HANDLE v1302; // rax
  unsigned int v1303; // r14d
  SIZE_T v1304; // r9
  int v1305; // r10d
  int *v1306; // rax
  unsigned int *v1307; // r9
  __int64 v1308; // r9
  int v1309; // r10d
  int v1310; // eax
  __int64 v1311; // rdi
  HMODULE *v1312; // rbx
  int v1313; // ebx
  unsigned int v1314; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v1315; // [rsp+6Ch] [rbp-9Ch]
  SIZE_T Size; // [rsp+70h] [rbp-98h] BYREF
  SIZE_T v1317; // [rsp+78h] [rbp-90h] BYREF
  SIZE_T dwBytes; // [rsp+80h] [rbp-88h] BYREF
  void *v1319; // [rsp+88h] [rbp-80h] BYREF
  SIZE_T j; // [rsp+90h] [rbp-78h] BYREF
  LPVOID v1321; // [rsp+98h] [rbp-70h]
  SIZE_T v1322; // [rsp+A0h] [rbp-68h]
  LPVOID v1323; // [rsp+A8h] [rbp-60h] BYREF
  size_t v1324; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v1325; // [rsp+B8h] [rbp-50h] BYREF
  SIZE_T v1326; // [rsp+C0h] [rbp-48h]
  SIZE_T v1327; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID v1328; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v1329; // [rsp+D8h] [rbp-30h]
  LPVOID v1330; // [rsp+E0h] [rbp-28h]
  LPVOID v1331; // [rsp+E8h] [rbp-20h]
  LPCWSTR lpModuleName; // [rsp+F0h] [rbp-18h]
  SIZE_T v1333; // [rsp+F8h] [rbp-10h]
  LPVOID v1334; // [rsp+100h] [rbp-8h]
  size_t pcchLength; // [rsp+108h] [rbp+0h] BYREF
  SIZE_T v1336; // [rsp+110h] [rbp+8h] BYREF
  LPVOID lpMem; // [rsp+118h] [rbp+10h] BYREF
  void *v1338; // [rsp+120h] [rbp+18h] BYREF
  void *v1339; // [rsp+128h] [rbp+20h] BYREF
  void *Src[2]; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int8 *v1341; // [rsp+140h] [rbp+38h]
  unsigned __int16 *Ptr; // [rsp+148h] [rbp+40h]
  int v1343; // [rsp+150h] [rbp+48h]
  size_t v1344; // [rsp+158h] [rbp+50h] BYREF
  void *v1345; // [rsp+160h] [rbp+58h] BYREF
  void *v1346; // [rsp+168h] [rbp+60h]
  void *v1347; // [rsp+170h] [rbp+68h] BYREF
  size_t v1348[2]; // [rsp+178h] [rbp+70h] BYREF
  SIZE_T v1349; // [rsp+188h] [rbp+80h] BYREF
  int v1350; // [rsp+190h] [rbp+88h]
  int v1351; // [rsp+194h] [rbp+8Ch]
  int v1352; // [rsp+198h] [rbp+90h]
  LPVOID v1353; // [rsp+1A0h] [rbp+98h]
  _DWORD *v1354; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v1355; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned int v1356; // [rsp+1B4h] [rbp+ACh] BYREF
  unsigned int v1357; // [rsp+1B8h] [rbp+B0h] BYREF
  int v1358; // [rsp+1BCh] [rbp+B4h]
  unsigned int v1359; // [rsp+1C0h] [rbp+B8h]
  __int128 v1360; // [rsp+1C8h] [rbp+C0h]
  unsigned int v1361; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned int v1362; // [rsp+1DCh] [rbp+D4h] BYREF
  unsigned int v1363; // [rsp+1E0h] [rbp+D8h] BYREF
  unsigned int v1364; // [rsp+1E4h] [rbp+DCh] BYREF
  unsigned int v1365; // [rsp+1E8h] [rbp+E0h] BYREF
  int v1366; // [rsp+1ECh] [rbp+E4h]
  int v1367; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v1368; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned int v1369; // [rsp+200h] [rbp+F8h] BYREF
  int v1370; // [rsp+204h] [rbp+FCh]
  unsigned int v1371; // [rsp+208h] [rbp+100h] BYREF
  void *v1372; // [rsp+210h] [rbp+108h] BYREF
  int v1373; // [rsp+218h] [rbp+110h]
  __int64 v1374; // [rsp+220h] [rbp+118h]
  LPVOID v1375; // [rsp+228h] [rbp+120h]
  LPVOID v1376; // [rsp+230h] [rbp+128h]
  __int64 v1377; // [rsp+238h] [rbp+130h] BYREF
  HMODULE phModule; // [rsp+240h] [rbp+138h] BYREF
  HMODULE hModule; // [rsp+248h] [rbp+140h] BYREF
  __int128 v1380; // [rsp+250h] [rbp+148h] BYREF
  __int128 v1381; // [rsp+260h] [rbp+158h]
  __int128 v1382; // [rsp+270h] [rbp+168h] BYREF
  __int128 v1383; // [rsp+280h] [rbp+178h]
  __int64 v1384; // [rsp+290h] [rbp+188h] BYREF
  __int64 v1385; // [rsp+298h] [rbp+190h] BYREF
  __int64 v1386; // [rsp+2A0h] [rbp+198h] BYREF
  __int64 v1387; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int128 v1388; // [rsp+2B0h] [rbp+1A8h] BYREF
  __int64 v1389[13]; // [rsp+2C0h] [rbp+1B8h] BYREF
  _OWORD v1390[3]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v1391; // [rsp+358h] [rbp+250h] BYREF
  char v1392[152]; // [rsp+360h] [rbp+258h] BYREF
  unsigned int v1393; // [rsp+3F8h] [rbp+2F0h] BYREF
  int v1394; // [rsp+3FCh] [rbp+2F4h]
  void *v1395; // [rsp+400h] [rbp+2F8h]
  void *v1396; // [rsp+408h] [rbp+300h]
  void *v1397; // [rsp+410h] [rbp+308h]
  unsigned __int16 *v1398; // [rsp+418h] [rbp+310h]
  unsigned __int16 *v1399; // [rsp+420h] [rbp+318h]
  __int64 v1400; // [rsp+428h] [rbp+320h]
  int v1401; // [rsp+430h] [rbp+328h]
  __m128i v1402; // [rsp+434h] [rbp+32Ch] BYREF
  __m128i v1403; // [rsp+444h] [rbp+33Ch] BYREF
  unsigned int v1404; // [rsp+454h] [rbp+34Ch] BYREF
  unsigned int v1405; // [rsp+458h] [rbp+350h]
  unsigned __int32 v1406; // [rsp+45Ch] [rbp+354h]
  unsigned int v1407; // [rsp+460h] [rbp+358h]
  int v1408; // [rsp+468h] [rbp+360h] BYREF
  _DWORD v1409[3]; // [rsp+46Ch] [rbp+364h] BYREF
  __int16 v1410; // [rsp+47Ah] [rbp+372h]
  __int64 v1411; // [rsp+480h] [rbp+378h]
  int v1412; // [rsp+4D8h] [rbp+3D0h] BYREF
  _DWORD v1413[5]; // [rsp+4DCh] [rbp+3D4h] BYREF
  SIZE_T v1414; // [rsp+4F0h] [rbp+3E8h]
  int v1415; // [rsp+548h] [rbp+440h] BYREF
  _DWORD v1416[5]; // [rsp+54Ch] [rbp+444h] BYREF
  void *v1417; // [rsp+560h] [rbp+458h]
  int v1418; // [rsp+5B8h] [rbp+4B0h] BYREF
  _DWORD v1419[5]; // [rsp+5BCh] [rbp+4B4h] BYREF
  void *v1420; // [rsp+5D0h] [rbp+4C8h]
  int v1421; // [rsp+628h] [rbp+520h] BYREF
  _DWORD v1422[5]; // [rsp+62Ch] [rbp+524h] BYREF
  void *v1423; // [rsp+640h] [rbp+538h]
  int v1424; // [rsp+698h] [rbp+590h] BYREF
  char v1425[20]; // [rsp+69Ch] [rbp+594h] BYREF
  void *v1426; // [rsp+6B0h] [rbp+5A8h]
  int v1427; // [rsp+708h] [rbp+600h] BYREF
  char v1428[20]; // [rsp+70Ch] [rbp+604h] BYREF
  void *v1429; // [rsp+720h] [rbp+618h]
  int v1430; // [rsp+778h] [rbp+670h] BYREF
  char v1431[20]; // [rsp+77Ch] [rbp+674h] BYREF
  void *v1432; // [rsp+790h] [rbp+688h]
  int v1433; // [rsp+7E8h] [rbp+6E0h] BYREF
  char v1434[20]; // [rsp+7ECh] [rbp+6E4h] BYREF
  SIZE_T v1435; // [rsp+800h] [rbp+6F8h]
  __int128 v1436; // [rsp+858h] [rbp+750h] BYREF
  __int128 v1437; // [rsp+868h] [rbp+760h] BYREF
  __int128 v1438; // [rsp+878h] [rbp+770h] BYREF
  __int128 v1439; // [rsp+888h] [rbp+780h] BYREF
  __int64 v1440; // [rsp+898h] [rbp+790h] BYREF
  unsigned __int32 v1441; // [rsp+8A0h] [rbp+798h]
  int v1442; // [rsp+8A4h] [rbp+79Ch]
  _DWORD v1443[12]; // [rsp+8A8h] [rbp+7A0h] BYREF
  __int128 v1444; // [rsp+8D8h] [rbp+7D0h] BYREF
  __int128 v1445; // [rsp+8E8h] [rbp+7E0h] BYREF
  __int64 v1446; // [rsp+8F8h] [rbp+7F0h]
  _OWORD v1447[2]; // [rsp+900h] [rbp+7F8h] BYREF
  __int64 v1448; // [rsp+920h] [rbp+818h]
  int v1449; // [rsp+928h] [rbp+820h]
  _OWORD v1450[2]; // [rsp+930h] [rbp+828h] BYREF
  __int64 v1451; // [rsp+950h] [rbp+848h]
  int v1452; // [rsp+958h] [rbp+850h]
  _OWORD v1453[2]; // [rsp+960h] [rbp+858h] BYREF
  __int64 v1454; // [rsp+980h] [rbp+878h]
  int v1455; // [rsp+988h] [rbp+880h]
  _OWORD v1456[2]; // [rsp+990h] [rbp+888h] BYREF
  __int64 v1457; // [rsp+9B0h] [rbp+8A8h]
  int v1458; // [rsp+9B8h] [rbp+8B0h]
  __int128 v1459; // [rsp+9C0h] [rbp+8B8h] BYREF
  __int128 v1460; // [rsp+9D0h] [rbp+8C8h] BYREF
  __int64 v1461; // [rsp+9E0h] [rbp+8D8h]
  _OWORD v1462[2]; // [rsp+9E8h] [rbp+8E0h] BYREF
  _DWORD v1463[6]; // [rsp+A08h] [rbp+900h] BYREF
  char v1464; // [rsp+A22h] [rbp+91Ah]
  unsigned __int16 v1465[34]; // [rsp+A24h] [rbp+91Ch] BYREF
  _DWORD v1466[6]; // [rsp+A68h] [rbp+960h] BYREF
  char v1467; // [rsp+A82h] [rbp+97Ah]
  unsigned __int16 v1468[34]; // [rsp+A84h] [rbp+97Ch] BYREF
  _DWORD v1469[6]; // [rsp+AC8h] [rbp+9C0h] BYREF
  char v1470; // [rsp+AE2h] [rbp+9DAh]
  unsigned __int16 v1471[34]; // [rsp+AE4h] [rbp+9DCh] BYREF
  _BYTE v1472[68]; // [rsp+B28h] [rbp+A20h] BYREF
  __int16 v1473; // [rsp+B6Ch] [rbp+A64h]
  unsigned __int16 v1474; // [rsp+BCEh] [rbp+AC6h]
  int v1475; // [rsp+BD4h] [rbp+ACCh]
  int v1476; // [rsp+BD8h] [rbp+AD0h]
  int v1477; // [rsp+C08h] [rbp+B00h] BYREF
  __int128 v1478; // [rsp+C10h] [rbp+B08h]
  __int128 v1479; // [rsp+C20h] [rbp+B18h]
  __int128 v1480; // [rsp+C30h] [rbp+B28h]
  __int64 v1481; // [rsp+C40h] [rbp+B38h]
  _BYTE v1482[176]; // [rsp+C48h] [rbp+B40h] BYREF
  WCHAR Filename[264]; // [rsp+CF8h] [rbp+BF0h] BYREF

  v1366 = 0;
  if ( dword_1808DE440 <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                    + 16LL) )
    return byte_1808DE458;
  Init_thread_header(&dword_1808DE440);
  if ( dword_1808DE440 != -1 )
    return byte_1808DE458;
  v1314 = 0;
  v1377 = 0LL;
  v1352 = 0;
  v140 = 1;
  v1359 = 0;
  v1368 = 0LL;
  v1351 = 0;
  while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
    ;
  v141 = dword_1808DDD3C;
  v1358 = -1;
  if ( dword_1808DDD3C )
    goto LABEL_180;
  v1350 = 0;
  v22 = MemoryAlloc(0x338uLL);
  if ( !v22 )
    goto LABEL_156;
  v142 = 0;
  v143 = v22 + 7;
  v144 = -1;
  v145 = (unsigned __int8 *)&unk_180783012;
  v146 = 0;
  v147 = 103LL;
  v148 = 0;
  do
  {
    v149 = *(v145 - 1) | (*(v145 - 2) << 8);
    v150 = v145[2] << 8;
    v151 = *v145;
    v145 += 8;
    v152 = *(v145 - 7) | ((v151 | (v149 << 8)) << 8);
    v153 = v148 ^ v152;
    v154 = *(v145 - 3) | ((*(v145 - 4) | ((*(v145 - 5) | v150) << 8)) << 8);
    v155 = v146 ^ v148 ^ v152 ^ v154 ^ 0xAC987321;
    v156 = v153 ^ (__ROR4__(v155, 22) + 4991 * __ROR4__(v155 + 1419157410, 27));
    v157 = v155 ^ (43881 * __ROR4__(v156 + 133239679, 9) - __ROR4__(v156, 30));
    v158 = v156 ^ (24670 * v157 - (v157 >> 13) - 123127970);
    v159 = v157 ^ (2033 * __ROR4__(v158 ^ 0xAB69, 26) - __ROR4__(v158, 30));
    v160 = v158 ^ (133239679 - (v159 ^ 0xAB69605E));
    v161 = v159 ^ (43881 * (v160 ^ 0x137F)) ^ __ROR4__(v160, 6);
    v162 = v160 ^ (__ROR4__(v161, 30) + 24670 * __ROR4__(v161 + 133239679, 15));
    v163 = v161 ^ (2033 * __ROR4__(v162 + 1419157410, 14) - __ROR4__(v162, 24));
    v164 = v162 ^ __ROR4__(v163, 10) ^ (4991 * __ROR4__(v163 ^ 0xAB69605E, 12));
    v165 = v163 ^ (v164 >> 10) ^ (43881 * (v164 ^ 0x7F1));
    v166 = v164 ^ (2033 * (__ROR4__(~v165, 5) + 24670));
    v167 = v166 ^ (((v165 ^ (v166 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v165 ^ (v166 - 2033) ^ 0xAB6967AF, 30));
    v168 = v165 ^ (v166 - 2033) ^ 0xAB69605E ^ (__ROR4__(v167, 25) + 43881 * __ROR4__(v167 - 133239679, 6));
    v169 = v167 ^ (24670 * (v168 ^ 0x137F) + __ROR4__(v168, 9));
    v170 = v168 ^ (__ROR4__(v169, 25) + 2033 * __ROR4__(v169 ^ 0xAB69, 27));
    v171 = v169 ^ v170 ^ 0xAC987321;
    v172 = v170 ^ (4991 * __ROR4__(v171, 3) - 219010071);
    v173 = v171 ^ (24670 * __ROR4__(v172 - 133239679, 1) - __ROR4__(v172, 6));
    v174 = v172 ^ (__ROR4__(v173, 18) + 2033 * __ROR4__(v173 - 1419157410, 29));
    v175 = v173 ^ (4991 * __ROR4__(v174 - 1419157410, 17) - __ROR4__(v174, 14));
    v176 = v174 ^ (v175 >> 3) ^ (43881 * (v175 ^ 0x605E));
    v177 = __ROR4__(v176, 30);
    v146 = v144 ^ v176;
    v144 = v154;
    v148 = v142 ^ v175 ^ v177 ^ (24670 * __ROR4__(v174 ^ (v175 >> 3) ^ (43881 * (v175 ^ 0x605E)) ^ 0x7F1137F, 28));
    v142 = v152;
    *(v143 - 4) = v148;
    *v143 = v146;
    *(v143 - 5) = __ROR4__(v148, 8);
    v143 += 8;
    *(v143 - 9) = __ROR4__(v146, 8);
    *(v143 - 14) = __ROR4__(v148, 16);
    *(v143 - 10) = __ROR4__(v146, 16);
    *(v143 - 15) = __ROR4__(v148, 24);
    *(v143 - 11) = __ROR4__(v146, 24);
    --v147;
  }
  while ( v147 );
  v178 = 0LL;
  v179 = 0;
  v21 = 0;
  v180 = 0;
  do
    v179 ^= v22[v178++];
  while ( v178 < 0x338 );
  if ( v179 == 64LL )
  {
    v22[823] = 0;
    memset_0(&unk_1808DA540, 0, 0x60uLL);
    v183 = v22;
    if ( *v22 )
    {
      while ( 1 )
      {
        v1 = -1LL;
        v184 = (const WCHAR *)v22;
        v21 = 0;
        do
          ++v1;
        while ( *(_WORD *)&v22[2 * v1] );
        v19 = &v22[2 * v1];
        v20 = (HMODULE *)((char *)&unk_1808DA540 + 24 * v180);
        if ( !GetModuleHandleExW(0, v184, v20) )
          break;
        if ( *(_WORD *)*v20 == 23117
          && (v185 = *((int *)*v20 + 15), (unsigned int)v185 < 0x10000000)
          && (v186 = (char *)*v20 + v185, v186 >= (char *)*v20)
          && *(_DWORD *)v186 == 17744 )
        {
          if ( *((_WORD *)v186 + 12) == 267 || *((_WORD *)v186 + 12) == 523 )
          {
            *(_QWORD *)((char *)&unk_1808DA540 + 24 * v180 + 12) = *((_QWORD *)v186 + 17);
            *((_DWORD *)&unk_1808DA540 + 6 * v180 + 2) = *((_DWORD *)v186 + 20);
          }
          else
          {
            v21 = -1073741811;
          }
        }
        else
        {
          v21 = -1073741701;
        }
        v187 = *(_DWORD *)(v19 + 2);
        v22 = v19 + 6;
        v188 = 0;
        if ( v187 )
        {
          v25 = v180;
          do
          {
            v2 = -1LL;
            v189 = v22;
            do
              ++v2;
            while ( v22[v2] );
            v22 += v2 + 1;
            if ( v21 < 0 )
            {
              v24 = v1350;
            }
            else
            {
              ProcAddress = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v25), v189);
              if ( !ProcAddress )
                goto LABEL_178;
              v24 = v1350;
              v25 = v180;
              off_1808D1340[v1350] = ProcAddress;
            }
            ++v188;
            v1350 = v24 + 1;
          }
          while ( v188 < v187 );
        }
        ++v180;
        if ( !*v22 )
          goto LABEL_178;
      }
      v21 = -1073741702;
    }
LABEL_178:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v183);
    if ( v21 < 0 )
      goto LABEL_156;
    v141 = dword_1808DDD3C;
LABEL_180:
    dword_1808DDD3C = v141 + 1;
    goto LABEL_181;
  }
  MemoryFree(v22);
LABEL_156:
  v181 = 4LL;
  v182 = (HMODULE *)&unk_1808DA540;
  do
  {
    if ( *v182 )
      FreeLibrary(*v182);
    v182 += 3;
    --v181;
  }
  while ( v181 );
  memset_0(&unk_1808DA540, 0, 0x60uLL);
  memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_181:
  _InterlockedExchange(&dword_1808DDD40, 0);
  v191 = 0LL;
  v192 = 0LL;
  v193 = 0;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
  {
LABEL_232:
    v1351 = v193;
LABEL_233:
    if ( v192 )
LABEL_234:
      MemoryFree(v192);
LABEL_235:
    if ( v191 )
      MemoryFree(v191);
LABEL_237:
    if ( LastError >= 0 )
      goto LABEL_239;
    goto LABEL_238;
  }
  v195 = (void *)off_1808D1450[0]();
  lpMem = v195;
  if ( v195 )
  {
    v1361 = 0;
    v197 = 0LL;
    v198 = 0LL;
    while ( !((unsigned int (__fastcall *)(void *, __int64, void *, __int64, unsigned int *))off_1808D1470[0])(
               v195,
               2LL,
               v197,
               v198,
               &v1361) )
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
        if ( v197 )
          goto LABEL_199;
        goto LABEL_235;
      }
      if ( v197 )
      {
        LastError = -2147467259;
LABEL_199:
        MemoryFree(v197);
        goto LABEL_235;
      }
      v197 = MemoryAlloc(v1361);
      if ( !v197 )
        goto LABEL_238;
      v198 = v1361;
      v195 = lpMem;
    }
    v191 = v197;
    v199 = off_1808D1468[0];
    CurrentThreadId = GetCurrentThreadId();
    v201 = (void *)((__int64 (__fastcall *)(_QWORD))v199)(CurrentThreadId);
    lpMem = v201;
    if ( !v201 )
    {
      LastError = GetLastError();
      v202 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v202 = LastError < 0;
      }
      if ( !v202 )
        LastError = -2147467259;
      goto LABEL_235;
    }
    v1362 = 0;
    v203 = 0LL;
    v204 = 0LL;
    while ( !((unsigned int (__fastcall *)(void *, __int64, void *, __int64, unsigned int *))off_1808D1470[0])(
               v201,
               2LL,
               v203,
               v204,
               &v1362) )
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
        if ( v203 )
          goto LABEL_219;
        goto LABEL_233;
      }
      if ( v203 )
      {
        LastError = -2147467259;
LABEL_219:
        MemoryFree(v203);
        goto LABEL_233;
      }
      v203 = MemoryAlloc(v1362);
      if ( !v203 )
      {
        LastError = -2147024882;
        goto LABEL_235;
      }
      v204 = v1362;
      v201 = lpMem;
    }
    v192 = v203;
    LastError = 0;
    if ( !v191 || wcscmp_0((const wchar_t *)v191, L"WinSta0") || !v203 || wcscmp_0((const wchar_t *)v203, L"Default") )
      goto LABEL_232;
    v1367 = 0;
    CurrentProcess = GetCurrentProcess();
    if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1367) )
    {
      LastError = GetLastError();
      v206 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v206 = LastError < 0;
      }
      if ( !v206 )
        LastError = -2147467259;
      goto LABEL_234;
    }
    if ( (v1367 & 0xF) == 0 )
      v193 = 1;
    goto LABEL_232;
  }
  LastError = GetLastError();
  v196 = LastError < 0;
  if ( LastError > 0 )
  {
    LastError = (unsigned __int16)LastError | 0x80070000;
    v196 = LastError < 0;
  }
  if ( v196 )
    goto LABEL_237;
LABEL_238:
  v1351 = 0;
LABEL_239:
  v207 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(&v1368, v207);
  v208 = 0LL;
  Ptr = (unsigned __int16 *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1368);
  if ( !Ptr )
  {
    v209 = -2147024882;
    v210 = 0;
    goto LABEL_1579;
  }
  v211 = 0LL;
  LODWORD(v1341) = 0;
  *(_OWORD *)Src = 0LL;
  v1343 = 0;
  v1328 = 0LL;
  v212 = GetProcessHeap();
  v213 = HeapAlloc(v212, 8u, 0xA0uLL);
  v1350 = 56;
  v214 = v213;
  if ( !v213 )
    goto LABEL_715;
  *v213 = xmmword_1808D8540[0];
  v213[1] = *((_OWORD *)&_ImageBase + 579669);
  v213[2] = *((_OWORD *)&_ImageBase + 579670);
  v213[3] = *((_OWORD *)&_ImageBase + 579671);
  v213[4] = *((_OWORD *)&_ImageBase + 579672);
  v213[5] = *((_OWORD *)&_ImageBase + 579673);
  v213[6] = *((_OWORD *)&_ImageBase + 579674);
  v213[7] = *((_OWORD *)&_ImageBase + 579675);
  v213[8] = xmmword_1808D8540[8];
  v213[9] = xmmword_1808D8540[9];
  v215 = GetProcessHeap();
  v216 = HeapAlloc(v215, 8u, 8uLL);
  if ( !v216 )
  {
    v209 = -1073741801;
    LODWORD(Size) = -1073741801;
    goto LABEL_713;
  }
  *v216 = qword_1808D8690;
  v1349 = __rdtsc();
  LODWORD(dwBytes) = 0;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(4LL, 4LL, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
  {
    v211 = v217;
LABEL_713:
    v208 = v214;
    goto LABEL_717;
  }
  v218 = RtlUIntAdd(0LL, (unsigned int)v1317, &dwBytes);
  v209 = v218 | 0x10000000;
  v211 = v220;
  LODWORD(Size) = v218 | 0x10000000;
  v208 = v214;
  if ( v218 < 0 )
    goto LABEL_717;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v219, 160LL, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v221 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  v209 = v223 | v221;
  LODWORD(Size) = v223 | v221;
  if ( (v223 | v221) < 0 )
    goto LABEL_717;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v222, 8LL, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v224 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  v209 = v226 | v224;
  LODWORD(Size) = v226 | v224;
  if ( (v226 | v224) < 0 )
    goto LABEL_717;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v225, 8LL, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v227 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  v209 = v229 | v227;
  LODWORD(Size) = v229 | v227;
  if ( (v229 | v227) < 0 )
    goto LABEL_717;
  pcchLength = 0LL;
  if ( StringCchLengthW(L"Shell-WindowTabHost-Enabled", v228, &pcchLength) < 0 )
  {
    v209 = -1073741762;
    LODWORD(Size) = -1073741762;
LABEL_253:
    v211 = v230;
    goto LABEL_717;
  }
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(4LL, (unsigned int)(2 * (pcchLength + 1)), &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_253;
  v231 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  v209 = v231 | 0x10000000;
  v211 = v233;
  LODWORD(Size) = v231 | 0x10000000;
  if ( v231 < 0 )
    goto LABEL_717;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v232, v232, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v234 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  v209 = v236 | v234;
  LODWORD(Size) = v236 | v234;
  if ( (v236 | v234) < 0 )
    goto LABEL_717;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v235, v235, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v237 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  v209 = v238 | v237;
  LODWORD(Size) = v238 | v237;
  if ( (v238 | v237) < 0 )
    goto LABEL_717;
  HIDWORD(Src[0]) = dwBytes;
  v239 = dwBytes;
  v240 = GetProcessHeap();
  v241 = HeapAlloc(v240, 8u, v239);
  if ( !v241 )
  {
LABEL_715:
    v209 = -1073741801;
    goto LABEL_716;
  }
  LODWORD(v1345) = 0;
  v1344 = 0LL;
  LODWORD(Src[0]) = 0;
  Src[1] = v241;
  v1323 = v241;
  v1321 = v211;
  v1325 = v208;
  LODWORD(Size) = RtlULongLongAdd(v241, 4LL, &v1345, 160LL);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  if ( v243 + 2 > (_DWORD *)((char *)v243 + HIDWORD(Src[0])) )
    goto LABEL_263;
  v244 = v1345;
  *v243 = 4;
  *v244 = 0;
  v245 = LODWORD(Src[0]) + 1;
  LODWORD(v1345) = 0;
  ++LODWORD(Src[0]);
  v1344 = 0LL;
  if ( v208 )
  {
    if ( !(_DWORD)v242 )
      goto LABEL_656;
  }
  else if ( (_DWORD)v242 )
  {
    goto LABEL_656;
  }
  if ( Src[1] )
  {
    v246 = (unsigned int *)Src[1];
    v1324 = (size_t)Src[1];
    LODWORD(v1333) = 0;
    if ( v245 )
    {
      do
      {
        v247 = *v246;
        LODWORD(v1317) = 0;
        LODWORD(Size) = RtlUIntAdd(4LL, v247, &v1317);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        LODWORD(Size) = RtlULongLongAdd(v249, (unsigned int)v1317, &v1324, v248);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        v246 = (unsigned int *)v1324;
        LODWORD(v1333) = v1333 + 1;
      }
      while ( (unsigned int)v1333 < v250 );
      v1321 = v211;
      v1325 = v208;
    }
    LODWORD(Size) = RtlULongLongAdd(v246, 4LL, &v1345, v242);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    if ( (char *)v252 + v251 + 4 > (char *)Src[1] + HIDWORD(Src[0]) )
      goto LABEL_263;
    *v252 = v251;
    if ( v208 )
      memcpy_0(v1345, v208, v251);
  }
  else
  {
    LODWORD(v1317) = 0;
    LODWORD(Size) = RtlUIntAdd(4LL, (unsigned int)v242, &v1317);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    LODWORD(Size) = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1317, (char *)Src + 4);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
  }
  v253 = (unsigned int)(LODWORD(Src[0]) + 1);
  LODWORD(v1345) = 0;
  ++LODWORD(Src[0]);
  v1344 = 0LL;
  if ( !v211 )
    goto LABEL_656;
  if ( Src[1] )
  {
    v254 = (unsigned int *)Src[1];
    v1324 = (size_t)Src[1];
    if ( (_DWORD)v253 )
    {
      do
      {
        v255 = *v254;
        LODWORD(v1317) = 0;
        LODWORD(Size) = RtlUIntAdd(4LL, v255, &v1317);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        v209 = RtlULongLongAdd(v257, (unsigned int)v1317, &v1324, v256);
        LODWORD(Size) = v209;
        if ( v209 < 0 )
          goto LABEL_717;
        v254 = (unsigned int *)v1324;
      }
      while ( v258 + 1 < (unsigned int)v253 );
      v1321 = v211;
      v1325 = v208;
    }
    LODWORD(Size) = RtlULongLongAdd(v254, 4LL, &v1345, v253);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    if ( v259 + 3 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_263;
    *v259 = 8;
    memcpy_0(v1345, v211, 8uLL);
  }
  else
  {
    LODWORD(v1317) = 0;
    LODWORD(Size) = RtlUIntAdd(4LL, 8LL, &v1317);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    LODWORD(Size) = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1317, (char *)Src + 4);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
  }
  v260 = (unsigned int)(LODWORD(Src[0]) + 1);
  LODWORD(v1345) = 0;
  ++LODWORD(Src[0]);
  v1344 = 0LL;
  if ( Src[1] )
  {
    v263 = (unsigned int *)Src[1];
    v1324 = (size_t)Src[1];
    LODWORD(v1333) = 0;
    if ( (_DWORD)v260 )
    {
      do
      {
        v264 = *v263;
        LODWORD(v1317) = 0;
        LODWORD(Size) = RtlUIntAdd(4LL, v264, &v1317);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        LODWORD(Size) = RtlULongLongAdd(v266, (unsigned int)v1317, &v1324, v265);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        v263 = (unsigned int *)v1324;
        LODWORD(v1333) = v1333 + 1;
      }
      while ( (unsigned int)v1333 < (unsigned int)v260 );
      v1321 = v211;
      v1325 = v208;
    }
    LODWORD(Size) = RtlULongLongAdd(v263, 4LL, &v1345, v260);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    if ( v267 + 3 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_263;
    v268 = v1345;
    v269 = v1349;
    *v267 = 8;
    *v268 = v269;
    v262 = LODWORD(Src[0]) + 1;
  }
  else
  {
    LODWORD(v1317) = 0;
    LODWORD(Size) = RtlUIntAdd(4LL, 8LL, &v1317);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    v209 = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1317, (char *)Src + 4);
    LODWORD(Size) = v209;
    if ( v209 < 0 )
      goto LABEL_717;
    v262 = LODWORD(Src[0]) + 1;
  }
  LODWORD(Src[0]) = v262;
  v1324 = 0LL;
  if ( StringCchLengthW(L"Shell-WindowTabHost-Enabled", v261, &v1324) < 0 )
  {
    v209 = -1073741762;
    goto LABEL_716;
  }
  LODWORD(Size) = RtlULongLongAdd(v1324, 1LL, &v1324, v270);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  LODWORD(v1345) = 0;
  v1344 = 0LL;
  if ( !(2 * (_DWORD)v1324) )
  {
    v209 = -1073741811;
LABEL_323:
    LODWORD(Size) = v209;
    goto LABEL_324;
  }
  if ( Src[1] )
  {
    v272 = (unsigned int *)Src[1];
    v273 = 0;
    v1324 = (size_t)Src[1];
    if ( v271 )
    {
      do
      {
        v274 = *v272;
        LODWORD(v1317) = 0;
        LODWORD(Size) = RtlUIntAdd(4LL, v274, &v1317);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        v209 = RtlULongLongAdd(v275, (unsigned int)v1317, &v1324, v275);
        LODWORD(Size) = v209;
        if ( v209 < 0 )
          goto LABEL_717;
        v272 = (unsigned int *)v1324;
      }
      while ( ++v273 < v276 );
    }
    LODWORD(Size) = RtlULongLongAdd(v272, 4LL, &v1345, v272);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    if ( (char *)v277 + v278 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
    {
      v279 = v1345;
      *v277 = v278;
      memcpy_0(v279, L"Shell-WindowTabHost-Enabled", (unsigned int)v278);
      v271 = ++LODWORD(Src[0]);
      goto LABEL_324;
    }
    v209 = -1073741789;
    goto LABEL_323;
  }
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(4LL, (unsigned int)(2 * v1324), &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v209 = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1317, (char *)Src + 4);
  LODWORD(Size) = v209;
  if ( v209 < 0 )
    goto LABEL_717;
  v271 = LODWORD(Src[0]) + 1;
  LODWORD(Size) = 0;
  ++LODWORD(Src[0]);
  v209 = 0;
LABEL_324:
  if ( v209 < 0 )
    goto LABEL_717;
  LODWORD(v1345) = 0;
  v1344 = 0LL;
  if ( Src[1] )
  {
    v281 = (unsigned int *)Src[1];
    v1324 = (size_t)Src[1];
    LODWORD(v1333) = 0;
    if ( v271 )
    {
      do
      {
        v282 = *v281;
        LODWORD(v1317) = 0;
        LODWORD(Size) = RtlUIntAdd(4LL, v282, &v1317);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        LODWORD(Size) = RtlULongLongAdd(v283, (unsigned int)v1317, &v1324, v283);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        v281 = (unsigned int *)v1324;
        LODWORD(v1333) = v1333 + 1;
      }
      while ( (unsigned int)v1333 < v284 );
      v1321 = v211;
      v1325 = v208;
    }
    LODWORD(Size) = RtlULongLongAdd(v281, 4LL, &v1345, v281);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    if ( v285 + 2 > (unsigned int *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_263;
    v286 = v1345;
    v287 = v1351;
    *v285 = v280;
    *v286 = v287;
  }
  else
  {
    LODWORD(v1317) = 0;
    LODWORD(Size) = RtlUIntAdd(4LL, 4LL, &v1317);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    LODWORD(Size) = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1317, (char *)Src + 4);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
  }
  v288 = LODWORD(Src[0]) + 1;
  LODWORD(v1345) = 0;
  ++LODWORD(Src[0]);
  v1344 = 0LL;
  if ( Src[1] )
  {
    v290 = (unsigned int *)Src[1];
    v1324 = (size_t)Src[1];
    LODWORD(v1333) = 0;
    if ( v288 )
    {
      do
      {
        v291 = *v290;
        LODWORD(v1317) = 0;
        LODWORD(Size) = RtlUIntAdd(4LL, v291, &v1317);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        LODWORD(Size) = RtlULongLongAdd(v293, (unsigned int)v1317, &v1324, v292);
        v209 = Size;
        if ( (Size & 0x80000000) != 0LL )
          goto LABEL_717;
        v290 = (unsigned int *)v1324;
        LODWORD(v1333) = v1333 + 1;
      }
      while ( (unsigned int)v1333 < v294 );
      v1321 = v211;
      v1325 = v208;
    }
    LODWORD(Size) = RtlULongLongAdd(v290, 4LL, &v1345, 4LL);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_717;
    if ( v296 + 2 <= (unsigned int *)((char *)Src[1] + HIDWORD(Src[0])) )
    {
      v297 = v1345;
      *v296 = v295;
      v289 = v295;
      *v297 = v295;
      ++LODWORD(Src[0]);
      goto LABEL_349;
    }
LABEL_263:
    v209 = -1073741789;
LABEL_716:
    LODWORD(Size) = v209;
    goto LABEL_717;
  }
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v280, v280, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v209 = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1317, (char *)Src + 4);
  LODWORD(Size) = v209;
  if ( v209 < 0 )
    goto LABEL_717;
  ++LODWORD(Src[0]);
LABEL_349:
  LODWORD(v1317) = 0;
  v209 = RtlUIntAdd(v289, v289, &v1317);
  LODWORD(Size) = v209;
  if ( v209 < 0 )
    goto LABEL_717;
  LODWORD(dwBytes) = v1317;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v298, 8LL, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v209 = RtlUIntAdd(v299, (unsigned int)v1317, &dwBytes);
  LODWORD(Size) = v209;
  if ( v209 < 0 )
    goto LABEL_717;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v300, v300, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v209 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  LODWORD(Size) = v209;
  if ( v209 < 0 )
    goto LABEL_717;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v301, v301, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v209 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  LODWORD(Size) = v209;
  if ( v209 < 0 )
    goto LABEL_717;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v302, v302, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  v209 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  LODWORD(Size) = v209;
  if ( v209 < 0 )
    goto LABEL_717;
  LODWORD(v1317) = 0;
  LODWORD(Size) = RtlUIntAdd(v303, v303, &v1317);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  LODWORD(Size) = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1317, &dwBytes);
  v209 = Size;
  if ( (Size & 0x80000000) != 0LL )
    goto LABEL_717;
  LODWORD(v1341) = dwBytes;
  v1323 = 0LL;
  v1322 = 0LL;
  v304 = 0LL;
  LODWORD(v1333) = 0;
  v1334 = 0LL;
  v1330 = 0LL;
  v1331 = 0LL;
  v1329 = 0LL;
  lpMem = (LPVOID)__rdtsc();
  v1355 = 8;
  v305 = RtlUIntAdd(8LL, HIDWORD(Src[0]), &v1355);
  v308 = v305;
  if ( v305 < 0 )
  {
LABEL_370:
    v209 = v308 | 0x10000000;
    LODWORD(Size) = v209;
    if ( v209 < 0 )
    {
LABEL_475:
      v427 = (void *)v1322;
      goto LABEL_476;
    }
    lpModuleName = v307;
    if ( !v304 )
    {
      v209 = -805306355;
      goto LABEL_716;
    }
    v320 = (unsigned int)v306;
    v1324 = (unsigned int)v306;
    if ( !(_DWORD)v306
      || (Size = (unsigned int)v306 + 8LL, v321 = MemoryAlloc(Size), v322 = 0, v1347 = v321, (v323 = (SIZE_T)v321) == 0) )
    {
      v427 = (void *)v1322;
      v209 = -805306367;
      LODWORD(Size) = -805306367;
      goto LABEL_477;
    }
    v324 = 0;
    v325 = 0LL;
    v1315 = 0;
    if ( v320 )
    {
      do
        v324 ^= v304[v325++];
      while ( v325 < v320 );
      v1315 = v324;
    }
    v326 = v1324;
    v327 = v323;
    j = v323;
    v328 = -1;
    v1319 = (void *)0xC81ECB17B1B54A58LL;
    LODWORD(v1327) = 0;
    v329 = v304;
    LODWORD(dwBytes) = 0;
    v330 = 0;
    v331 = v1324 & 7;
    if ( (v1324 & 7) != 0 )
    {
      LODWORD(v1327) = 0;
      LODWORD(dwBytes) = 0;
      v332 = 0;
      v333 = 56;
      do
      {
        v334 = *v329;
        if ( v322 >= 4 )
        {
          v335 = dwBytes;
          v332 |= v334 << v333;
        }
        else
        {
          v335 = (v334 << (v333 - 32)) | dwBytes;
          LODWORD(dwBytes) = v335;
        }
        ++v329;
        ++v322;
        v333 -= 8;
      }
      while ( (int)v322 < v331 );
      v326 = v1324;
      LODWORD(v1327) = v332;
      v1323 = v304;
      v1321 = v211;
      v1325 = v208;
      LODWORD(v1326) = 0;
      v330 = v335 ^ 0xB17A307A;
      v336 = v332 ^ 0x42F6B18D;
      v337 = v335 ^ 0xB17A307A;
      v338 = v336;
      if ( (v1324 & 7) != 0 )
      {
        v339 = (_BYTE *)j;
        do
        {
          if ( (unsigned int)v1326 >= 4 )
          {
            v338 = __ROR4__(v338, 24);
            v340 = v338;
          }
          else
          {
            v337 = __ROR4__(v337, 24);
            v340 = v337;
          }
          LODWORD(v1326) = v1326 + 1;
          v341 = (SIZE_T)(v339 + 1);
          *v339++ = v340;
        }
        while ( (int)v1326 < v331 );
        v327 = v341;
        j = v341;
        v324 = v1315;
      }
      else
      {
        v327 = j;
      }
      if ( (unsigned int)v331 <= 4 )
      {
        v328 = 0;
        if ( (unsigned int)v331 >= 4 )
          goto LABEL_399;
        v330 = v330 >> (8 * (4 - v331)) << (8 * (4 - v331));
      }
      else
      {
        v328 = v336 >> (8 * (8 - v331)) << (8 * (8 - v331));
      }
      v327 = j;
    }
LABEL_399:
    lpMem = (LPVOID)(v326 >> 3);
    if ( v326 >> 3 )
    {
      v342 = HIDWORD(v1319);
      v343 = v329 + 2;
      v344 = WORD1(v1319);
      v345 = (char *)lpMem;
      v346 = dwBytes;
      LODWORD(v1326) = WORD2(v1319);
      LODWORD(v1339) = HIWORD(v1319);
      v347 = v1327;
      LODWORD(v1317) = WORD1(v1319);
      pcchLength = v327 + 7;
      do
      {
        v348 = v343[1] | ((*v343 | ((*(v343 - 1) | (*(v343 - 2) << 8)) << 8)) << 8);
        v349 = v343[5] | ((v343[4] | ((v343[3] | (v343[2] << 8)) << 8)) << 8);
        lpMem = v343 + 8;
        v350 = v349 ^ v328;
        v351 = v330 ^ v342 ^ v348 ^ (v350 - 19032);
        v352 = v350 ^ (__ROR4__(v351, 7) + v344 * __ROR4__(v351 ^ v342, 15));
        v353 = v351 ^ (v1326 * __ROR4__(v352 - 1313519016, 9) - __ROR4__(v352, 10));
        v354 = v352 ^ (__ROR4__(v353, 27) + HIWORD(v1319) * __ROR4__(v353 ^ v1326, 28));
        v355 = v353 ^ (HIDWORD(v1319) - (v354 ^ 0xB1B54A58));
        v356 = v354 ^ (WORD1(v1319) * (v355 - 19032) - (v355 >> 6));
        v357 = v355 ^ (19032 * (v1326 ^ __ROR4__(v356, 15)));
        v358 = v356 ^ (v1326 * (HIWORD(v1319) + __ROR4__(~v357, 3)));
        v359 = v357 ^ (v358 - HIDWORD(v1319) - 19032);
        v360 = v358 ^ (v1317 * (v359 ^ HIWORD(v1319))) ^ __ROR4__(v359, 10);
        v361 = v359 ^ __ROR4__(v360, 3) ^ (v1326 * __ROR4__(v360 ^ 0x4A58, 26));
        v362 = v360 ^ (19032 * (__ROR4__(v361, 15) - HIWORD(v1319)));
        v363 = v361 ^ ((v362 ^ (v362 >> 14)) >> 1) ^ (19032 * ((unsigned int)v1339 ^ v362)) ^ (19032
                                                                                             * ((8 * (v362 - v1326)) | ((v362 - (unsigned int)v1326) >> 29)));
        v364 = v362 ^ (WORD1(v1319) * (v363 - v1326) - (v363 >> 13));
        v365 = v363 ^ __ROR4__(v364, 11) ^ (v1326 * __ROR4__(-1313519016 - v364, 9));
        v366 = v364 ^ (v365 - HIWORD(v1319) + 1313519016);
        v367 = v365 ^ (19032 * (v366 ^ WORD1(v1319)) - __ROR4__(v366, 7));
        v368 = v366 ^ (WORD1(v1319) * __ROR4__(HIWORD(v1319) ^ v367, 28) - __ROR4__(v367, 16));
        v369 = v367 ^ (__ROR4__(v368, 4) + v1326 * __ROR4__(-1313519016 - v368, 10));
        v370 = v368 ^ __ROR4__(v369, 9) ^ (HIWORD(v1319) * __ROR4__(v369 + 1313519016, 4));
        v371 = v369 ^ (19032 * __ROR4__(v370 ^ HIDWORD(v1319), 24) - __ROR4__(v370, 30));
        v342 = HIDWORD(v1319);
        v372 = v370 ^ (WORD1(v1319) * __ROR4__(HIDWORD(v1319) - v371, 11) - __ROR4__(v371, 12));
        v373 = v371 ^ (v372 >> 8) ^ (v1326 * (WORD1(v1319) ^ v372)) ^ HIDWORD(v1319) ^ 0xB1B54A58;
        v374 = (_BYTE *)pcchLength;
        v330 = v346 ^ v371 ^ (v372 >> 8) ^ (v1326 * (WORD1(v1319) ^ v372));
        v375 = v372 ^ v373;
        v344 = WORD1(v1319);
        v328 = v347 ^ v375;
        v346 = v348;
        *(_BYTE *)(pcchLength - 4) = v330;
        v347 = v349;
        *v374 = v328;
        *(v374 - 5) = __ROR4__(v330, 8);
        *(v374 - 1) = __ROR4__(v328, 8);
        *(v374 - 6) = __ROR4__(v330, 16);
        *(v374 - 2) = __ROR4__(v328, 16);
        *(v374 - 7) = __ROR4__(v330, 24);
        *(v374 - 3) = __ROR4__(v328, 24);
        pcchLength = (size_t)(v374 + 8);
        v343 = (unsigned __int8 *)lpMem;
        --v345;
      }
      while ( v345 );
      v324 = v1315;
      v208 = v1325;
      v211 = v1321;
      v304 = (unsigned __int8 *)v1323;
      v326 = v1324;
    }
    *(_QWORD *)((char *)v1347 + v326) = v324;
    v376 = GetProcessHeap();
    v1323 = HeapAlloc(v376, 8u, 0x30uLL);
    v377 = v1323;
    if ( v1323 )
    {
      *(_DWORD *)v1323 = Size;
      v378 = GetProcessHeap();
      v379 = HeapAlloc(v378, 8u, (unsigned int)Size);
      if ( v379 )
      {
        v377[1] = v379;
        memcpy_0(v379, v1347, (unsigned int)Size);
        *((_DWORD *)v377 + 4) = 160;
        v381 = GetProcessHeap();
        v382 = HeapAlloc(v381, 8u, 0xA0uLL);
        if ( v382 )
        {
          v377[3] = v382;
          *v382 = xmmword_1808D85F0[0];
          v382[1] = xmmword_1808D85F0[1];
          v382[2] = xmmword_1808D85F0[2];
          v382[3] = xmmword_1808D85F0[3];
          v382[4] = xmmword_1808D85F0[4];
          v382[5] = xmmword_1808D85F0[5];
          v382[6] = xmmword_1808D85F0[6];
          v382[7] = xmmword_1808D85F0[7];
          v382[8] = xmmword_1808D85F0[8];
          v382[9] = xmmword_1808D85F0[9];
          *((_DWORD *)v377 + 8) = 8;
          v383 = GetProcessHeap();
          v384 = HeapAlloc(v383, 8u, 8uLL);
          if ( v384 )
          {
            v377[5] = v384;
            *v384 = qword_1808D85E0;
            v390 = v377;
            v385 = 0;
            v1329 = v390;
            lpModuleName = 0LL;
            goto LABEL_418;
          }
        }
        v380 = (LPVOID *)v1323;
      }
      else
      {
        v380 = (LPVOID *)v377;
      }
      v385 = -1073741801;
      lpMem = v380[1];
      if ( lpMem )
      {
        v386 = GetProcessHeap();
        HeapFree(v386, 0, lpMem);
        v380 = (LPVOID *)v1323;
        *((_QWORD *)v1323 + 1) = 0LL;
      }
      lpMem = v380[3];
      if ( lpMem )
      {
        v387 = GetProcessHeap();
        HeapFree(v387, 0, lpMem);
        v380 = (LPVOID *)v1323;
        *((_QWORD *)v1323 + 3) = 0LL;
      }
      lpMem = v380[5];
      if ( lpMem )
      {
        v388 = GetProcessHeap();
        HeapFree(v388, 0, lpMem);
        *((_QWORD *)v1323 + 5) = 0LL;
      }
      v389 = GetProcessHeap();
      HeapFree(v389, 0, v1323);
    }
    else
    {
      v385 = -1073741801;
    }
LABEL_418:
    v1324 = (size_t)v208;
    v391 = v211;
    j = (SIZE_T)v211;
    v392 = (const void **)v1329;
    v1323 = v304;
    v393 = GetProcessHeap();
    HeapFree(v393, 0, v1347);
    v394 = (WCHAR *)lpModuleName;
    if ( lpModuleName )
    {
      lpMem = (LPVOID)*((_QWORD *)lpModuleName + 1);
      if ( lpMem )
      {
        v395 = GetProcessHeap();
        HeapFree(v395, 0, lpMem);
        *((_QWORD *)v394 + 1) = 0LL;
      }
      lpMem = (LPVOID)*((_QWORD *)v394 + 3);
      if ( lpMem )
      {
        v396 = GetProcessHeap();
        HeapFree(v396, 0, lpMem);
        *((_QWORD *)v394 + 3) = 0LL;
      }
      lpMem = (LPVOID)*((_QWORD *)v394 + 5);
      if ( lpMem )
      {
        v397 = GetProcessHeap();
        HeapFree(v397, 0, lpMem);
        *((_QWORD *)v394 + 5) = 0LL;
      }
      v398 = GetProcessHeap();
      HeapFree(v398, 0, v394);
      v1329 = v392;
    }
    v209 = v385 | 0x10000000;
    v304 = (unsigned __int8 *)v1323;
    v1321 = v391;
    v208 = (void *)v1324;
    LODWORD(Size) = v209;
    if ( v209 < 0 )
      goto LABEL_475;
    v399 = *(unsigned int *)v392;
    v1373 = 0;
    LODWORD(dwBytes) = 4;
    v401 = RtlUIntAdd(4LL, v399, &dwBytes);
    if ( v401 >= 0 )
    {
      v401 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
      if ( v401 >= 0 )
      {
        v401 = RtlUIntAdd((unsigned int)dwBytes, *((unsigned int *)v392 + 4), &dwBytes);
        if ( v401 >= 0 )
        {
          v401 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
          if ( v401 >= 0 )
          {
            v401 = RtlUIntAdd((unsigned int)dwBytes, *((unsigned int *)v392 + 8), &dwBytes);
            if ( v401 >= 0 )
            {
              v1373 = dwBytes;
              v402 = dwBytes;
              v403 = GetProcessHeap();
              v404 = HeapAlloc(v403, 8u, v402);
              if ( !v404 )
              {
                v306 = j;
                v209 = -805306345;
                v304 = (unsigned __int8 *)v1323;
                v208 = (void *)v1324;
                v1321 = (LPVOID)j;
                goto LABEL_474;
              }
              *v404 = *(_DWORD *)v392;
              v1319 = v404;
              v401 = RtlULongLongAdd(v404, 4LL, &v1319, v405);
              v407 = v406;
              if ( v401 < 0 )
                goto LABEL_442;
              memcpy_0(v1319, v392[1], *(unsigned int *)v392);
              v401 = RtlULongLongAdd(v1319, *(unsigned int *)v392, &v1319, v408);
              if ( v401 < 0 )
                goto LABEL_442;
              v410 = v1319;
              *(_DWORD *)v1319 = *((_DWORD *)v392 + 4);
              v401 = RtlULongLongAdd(v410, 4LL, &v1319, v409);
              if ( v401 < 0
                || (memcpy_0(v1319, v392[3], *((unsigned int *)v392 + 4)),
                    v401 = RtlULongLongAdd(v1319, *((unsigned int *)v392 + 4), &v1319, v411),
                    v401 < 0)
                || (v413 = v1319,
                    *(_DWORD *)v1319 = *((_DWORD *)v392 + 8),
                    v401 = RtlULongLongAdd(v413, 4LL, &v1319, v412),
                    v401 < 0)
                || (memcpy_0(v1319, v392[5], *((unsigned int *)v392 + 8)),
                    v401 = RtlULongLongAdd(v1319, *((unsigned int *)v392 + 8), &v1319, v414),
                    v401 < 0) )
              {
LABEL_442:
                v415 = GetProcessHeap();
                HeapFree(v415, 0, v407);
                v400 = v1324;
              }
              else
              {
                v400 = v1324;
                LODWORD(v1333) = v1373;
                v1322 = (SIZE_T)v407;
              }
            }
          }
        }
      }
    }
    v306 = j;
    v209 = v401 | 0x10000000;
    v304 = (unsigned __int8 *)v1323;
    v208 = (void *)v400;
    LODWORD(Size) = v209;
    v1321 = (LPVOID)j;
    if ( v209 < 0 )
      goto LABEL_475;
    LODWORD(v1325) = 0;
    v1363 = 8;
    v416 = RtlUIntAdd(8LL, (unsigned int)v1341, &v1363);
    v209 = v416 | 0x10000000;
    LODWORD(Size) = v416 | 0x10000000;
    v1321 = (LPVOID)v306;
    if ( v416 < 0 )
      goto LABEL_475;
    v417 = (v1363 + 7) & 0xFFFFFFF8;
    if ( (unsigned int)v417 < v1363 )
    {
      v209 = -1073741675;
      v1321 = (LPVOID)v306;
LABEL_474:
      LODWORD(Size) = v209;
      goto LABEL_475;
    }
    v1369 = (v1363 + 7) & 0xFFFFFFF8;
    LODWORD(Size) = RtlUIntAdd(v417, 8LL, &v1369);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
    {
      v306 = j;
      v1321 = (LPVOID)j;
      goto LABEL_475;
    }
    if ( !Src[1] || LODWORD(Src[0]) <= 1 )
    {
      v306 = j;
      v209 = -1073741811;
      v1321 = (LPVOID)j;
      goto LABEL_474;
    }
    v418 = Src[1];
    LODWORD(v1317) = 0;
    v306 = j;
    v1321 = (LPVOID)j;
    v1319 = Src[1];
    do
    {
      LODWORD(Size) = RtlULongLongAdd(v418, 4LL, &v1319, v306);
      v209 = Size;
      if ( (Size & 0x80000000) != 0LL )
        goto LABEL_475;
      LODWORD(Size) = RtlULongLongAdd(v1319, v419, &v1319, v306);
      v209 = Size;
      if ( (Size & 0x80000000) != 0LL )
        goto LABEL_475;
      v418 = v1319;
      LODWORD(v1317) = v1317 + 1;
    }
    while ( !(_DWORD)v1317 );
    LODWORD(v1339) = *(_DWORD *)v1319;
    LODWORD(Size) = RtlULongLongAdd(v1319, 4LL, &v1319, v306);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_475;
    if ( LODWORD(Src[0]) <= 2 )
    {
      v209 = -1073741811;
      goto LABEL_474;
    }
    v421 = Src[1];
    j = (SIZE_T)Src[1];
    do
    {
      LODWORD(v1317) = *v421;
      v1324 = v420;
      v1326 = (SIZE_T)v208;
      v1319 = (void *)v306;
      v1341 = v304;
      lpModuleName = (LPCWSTR)v392;
      LODWORD(Size) = RtlULongLongAdd(v421, 4LL, &j, v306);
      v209 = Size;
      if ( (Size & 0x80000000) != 0LL )
        goto LABEL_475;
      LODWORD(Size) = RtlULongLongAdd(j, (unsigned int)v1317, &j, v306);
      v209 = Size;
      if ( (Size & 0x80000000) != 0LL )
        goto LABEL_475;
      v421 = (_DWORD *)j;
    }
    while ( (unsigned int)(v422 + 1) < 2 );
    LODWORD(Size) = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_475;
    LODWORD(dwBytes) = v423;
    LODWORD(Size) = RtlUIntAdd(v423, v1369, &dwBytes);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      goto LABEL_470;
    LODWORD(Size) = RtlUIntAdd((unsigned int)dwBytes, v424, &dwBytes);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL
      || (LODWORD(Size) = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1339, &dwBytes),
          v209 = Size,
          (Size & 0x80000000) != 0LL)
      || (LODWORD(Size) = RtlUIntAdd((unsigned int)dwBytes, v425, &dwBytes), v209 = Size, (Size & 0x80000000) != 0LL)
      || (LODWORD(Size) = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v306, &dwBytes),
          v209 = Size,
          (Size & 0x80000000) != 0LL) )
    {
LABEL_470:
      if ( v209 < 0 )
        goto LABEL_475;
      v426 = (unsigned int)v1325;
    }
    else
    {
      v426 = dwBytes;
    }
    if ( v426 > 0x400000 )
    {
      v209 = -2147418113;
      goto LABEL_474;
    }
    v448 = v426;
    v449 = GetProcessHeap();
    v450 = HeapAlloc(v449, 8u, v448);
    v427 = (void *)v1324;
    v451 = 0LL;
    v1334 = v450;
    if ( !v450 )
    {
      v1334 = 0LL;
      v209 = -805306345;
      goto LABEL_514;
    }
    phModule = 0LL;
    v1382 = 0LL;
    v1383 = 0LL;
    if ( !v1324 )
    {
      v209 = -2147024809;
LABEL_514:
      v1329 = (LPVOID)lpModuleName;
LABEL_515:
      v306 = (SIZE_T)v1319;
      v304 = v1341;
      v208 = (void *)v1326;
      v1321 = v1319;
      LODWORD(Size) = v209;
      goto LABEL_476;
    }
    LODWORD(v1383) = v1333;
    *(_QWORD *)&v1382 = v1324;
    *((_QWORD *)&v1382 + 1) = v450;
    *(_QWORD *)((char *)&v1383 + 4) = v448;
    if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
      && (v453 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
    {
      v454 = ((__int64 (__fastcall *)(__int64, __int128 *))v453)(134LL, &v1382);
      LODWORD(dwBytes) = v448;
      v209 = v454 | 0x10000000;
      LODWORD(Size) = v454 | 0x10000000;
      if ( v454 >= 0 )
      {
        v306 = DWORD1(v1383);
        v455 = (WCHAR *)lpModuleName;
        v456 = v1341;
        v457 = v1319;
        v458 = v1326;
        goto LABEL_521;
      }
    }
    else
    {
      v452 = GetLastError();
      LODWORD(Size) = v452;
      v209 = v452;
      if ( v452 > 0 )
      {
        v209 = (unsigned __int16)v452 | 0x80070000;
        LODWORD(Size) = v209;
      }
      LODWORD(dwBytes) = v448;
      if ( v209 >= 0 )
      {
        LODWORD(dwBytes) = v448;
        v209 = -2147467259;
        LODWORD(Size) = -2147467259;
      }
    }
    if ( v209 == -805306333 )
    {
      v209 = -2147024774;
      goto LABEL_514;
    }
    v455 = (WCHAR *)lpModuleName;
    v456 = v1341;
    v457 = v1319;
    v304 = v1341;
    v458 = v1326;
    v1329 = (LPVOID)lpModuleName;
    v208 = (void *)v1326;
    v1321 = v1319;
    if ( v209 < 0 )
    {
LABEL_476:
      if ( !v304 )
      {
LABEL_478:
        v429 = v1329;
        if ( v1329 )
        {
          lpMem = (LPVOID)*((_QWORD *)v1329 + 1);
          if ( lpMem )
          {
            v430 = GetProcessHeap();
            HeapFree(v430, 0, lpMem);
            *((_QWORD *)v429 + 1) = 0LL;
          }
          lpMem = (LPVOID)*((_QWORD *)v429 + 3);
          if ( lpMem )
          {
            v431 = GetProcessHeap();
            HeapFree(v431, 0, lpMem);
            *((_QWORD *)v429 + 3) = 0LL;
          }
          lpMem = (LPVOID)*((_QWORD *)v429 + 5);
          if ( lpMem )
          {
            v432 = GetProcessHeap();
            HeapFree(v432, 0, lpMem);
            *((_QWORD *)v429 + 5) = 0LL;
          }
          v433 = GetProcessHeap();
          HeapFree(v433, 0, v429);
        }
        if ( v427 )
        {
          v434 = GetProcessHeap();
          HeapFree(v434, 0, v427);
        }
        v435 = v1334;
        if ( v1334 )
        {
          v436 = GetProcessHeap();
          HeapFree(v436, 0, v435);
        }
        v437 = v1330;
        if ( v1330 )
        {
          v438 = (void *)*((_QWORD *)v1330 + 1);
          if ( v438 )
          {
            v439 = GetProcessHeap();
            HeapFree(v439, 0, v438);
            v437[1] = 0LL;
          }
          v440 = (void *)v437[3];
          if ( v440 )
          {
            v441 = GetProcessHeap();
            HeapFree(v441, 0, v440);
            v437[3] = 0LL;
          }
          v442 = (void *)v437[5];
          if ( v442 )
          {
            v443 = GetProcessHeap();
            HeapFree(v443, 0, v442);
            v437[5] = 0LL;
          }
          v444 = GetProcessHeap();
          HeapFree(v444, 0, v437);
        }
        v445 = v1331;
        if ( v1331 )
        {
          v446 = GetProcessHeap();
          HeapFree(v446, 0, v445);
        }
        v211 = v1321;
        goto LABEL_501;
      }
LABEL_477:
      v428 = GetProcessHeap();
      HeapFree(v428, 0, v304);
      goto LABEL_478;
    }
    v306 = (unsigned int)dwBytes;
    v451 = 0LL;
LABEL_521:
    LODWORD(Size) = 0;
    v1323 = v1334;
    if ( (unsigned int)v306 < 4 )
    {
      v209 = -805306306;
      v1329 = v455;
      LODWORD(Size) = -805306306;
      v304 = v456;
      v1321 = v457;
      v208 = (void *)v458;
      goto LABEL_476;
    }
    v459 = *(unsigned int *)v1334;
    LODWORD(v1317) = *(_DWORD *)v1334;
    v460 = RtlULongLongAdd(v1334, 4LL, &v1323, v306);
    if ( v460 < 0 )
      goto LABEL_565;
    v460 = RtlUIntAdd(0LL, 4LL, &Size);
    if ( v460 < 0 )
      goto LABEL_565;
    if ( (int)v306 - (int)Size < (unsigned int)v459 )
    {
LABEL_526:
      v209 = -805306306;
      v1329 = v461;
      goto LABEL_515;
    }
    pcchLength = (size_t)v1323;
    v460 = RtlULongLongAdd(v1323, v459, &v1323, v306);
    if ( v460 < 0 )
      goto LABEL_565;
    v460 = RtlUIntAdd((unsigned int)Size, (unsigned int)v459, &Size);
    if ( v460 < 0 )
      goto LABEL_565;
    if ( (unsigned int)(v306 - Size) < 4 )
      goto LABEL_526;
    LODWORD(v1333) = *(_DWORD *)v1323;
    v460 = RtlULongLongAdd(v1323, 4LL, &v1323, v306);
    if ( v460 < 0 )
      goto LABEL_565;
    v460 = RtlUIntAdd((unsigned int)Size, 4LL, &Size);
    if ( v460 < 0 )
      goto LABEL_565;
    if ( (int)v306 - (int)Size < v462 )
      goto LABEL_526;
    v1336 = (SIZE_T)v1323;
    v460 = RtlULongLongAdd(v1323, v462, &v1323, v306);
    if ( v460 < 0 )
      goto LABEL_565;
    v460 = RtlUIntAdd((unsigned int)Size, v463, &Size);
    if ( v460 < 0 )
      goto LABEL_565;
    if ( (unsigned int)(v306 - Size) < 4 )
      goto LABEL_526;
    LODWORD(v1327) = *(_DWORD *)v1323;
    v460 = RtlULongLongAdd(v1323, 4LL, &v1323, v306);
    if ( v460 < 0 )
      goto LABEL_565;
    v460 = RtlUIntAdd((unsigned int)Size, 4LL, &Size);
    if ( v460 < 0 )
      goto LABEL_565;
    if ( (int)v306 - (int)Size < (unsigned int)v1327 )
      goto LABEL_526;
    v460 = RtlUIntAdd((unsigned int)Size, (unsigned int)v1327, &Size);
    if ( v460 < 0 )
    {
LABEL_565:
      v209 = v460 | 0x10000000;
      v304 = v1341;
      LODWORD(Size) = v209;
      v208 = (void *)v1326;
      v1329 = (LPVOID)lpModuleName;
      v1321 = v1319;
      if ( v209 < 0 )
        goto LABEL_476;
      v483 = v1330;
      if ( !v1330 || (v306 = *((_QWORD *)v1330 + 1), (v1346 = (void *)v306) == 0LL) || !*(_DWORD *)v1330 )
      {
        v209 = -805306355;
        v1329 = (LPVOID)lpModuleName;
        LODWORD(Size) = -805306355;
        v304 = v1341;
        v1321 = v1319;
        goto LABEL_476;
      }
      j = *(unsigned int *)v1330 - 8LL;
      v491 = MemoryAlloc(j);
      v492 = (WCHAR *)lpModuleName;
      v493 = v491;
      v494 = 0;
      v1336 = (SIZE_T)v491;
      v304 = v1341;
      v306 = (SIZE_T)v208;
      v1321 = v1319;
      v1329 = (LPVOID)lpModuleName;
      if ( !v491 )
        goto LABEL_608;
      v1339 = v1346;
      v495 = (void *)lpModuleName;
      v1321 = v1319;
      v1347 = (void *)(j & 7);
      v496 = v1319;
      v1322 = v1324;
      v1315 = 0;
      v1333 = 0x7F1137FAB69605ELL;
      pcchLength = (size_t)v491;
      LODWORD(lpModuleName) = 0;
      LODWORD(v1327) = 0;
      v1329 = v492;
      if ( (j & 7) != 0 )
      {
        LODWORD(Size) = 0;
        v304 = v1341;
        v1325 = v208;
        v1323 = v1341;
        if ( (_DWORD)v1347 )
        {
          v497 = 56;
          v498 = (unsigned __int8 *)v1339;
          v1322 = v1324;
          v499 = v208;
          do
          {
            v1321 = v1319;
            v304 = v1341;
            v1325 = v499;
            v208 = v499;
            v500 = *v498;
            v495 = v492;
            v1323 = v1341;
            v1329 = v492;
            if ( (unsigned int)v1327 >= 4 )
              LODWORD(Size) = (v500 << v497) | Size;
            else
              LODWORD(lpModuleName) = (v500 << (v497 - 32)) | (unsigned int)lpModuleName;
            ++v498;
            LODWORD(v1327) = v1327 + 1;
            v497 -= 8;
            v499 = v208;
          }
          while ( (int)v1327 < (int)v1347 );
          v494 = v1315;
          v1339 = v498;
          v493 = (_DWORD *)v1336;
          v496 = v1319;
          v1330 = v483;
        }
        v501 = (unsigned int)lpModuleName ^ 0x92F65A5;
        LODWORD(v1326) = 0;
        v502 = Size ^ 0x699A899C;
        v503 = (unsigned int)v1347;
        v504 = (unsigned int)lpModuleName ^ 0x92F65A5;
        if ( (_DWORD)v1347 )
        {
          v505 = Size ^ 0x699A899C;
          v506 = v493;
          do
          {
            if ( (unsigned int)v1326 >= 4 )
            {
              v505 = __ROR4__(v505, 24);
              v507 = v505;
            }
            else
            {
              v504 = __ROR4__(v504, 24);
              v507 = v504;
            }
            LODWORD(v1326) = v1326 + 1;
            v508 = (size_t)(v506 + 1);
            *v506++ = v507;
          }
          while ( (int)v1326 < (int)v503 );
          v483 = v1330;
          pcchLength = v508;
          v494 = v1315;
        }
        if ( v503 <= 4 )
        {
          LODWORD(v1327) = 0;
          if ( v503 < 4 )
            v501 = v501 >> (8 * (4 - v503)) << (8 * (4 - v503));
        }
        else
        {
          LODWORD(v1327) = v502 >> (8 * (8 - v503)) << (8 * (8 - v503));
        }
      }
      else
      {
        LODWORD(v1317) = 0;
        v304 = v1341;
        v501 = 0;
        v1323 = v1341;
        LODWORD(Size) = -1;
        v1325 = v208;
      }
      v509 = j;
      lpMem = (LPVOID)(j >> 3);
      if ( j >> 3 )
      {
        v510 = HIDWORD(v1333);
        v511 = v1327;
        v512 = (char *)lpMem;
        v513 = Size;
        v514 = (int)lpModuleName;
        LODWORD(dwBytes) = 24670;
        pcchLength += 7LL;
        v515 = WORD2(v1333);
        v516 = (unsigned __int8 *)v1339 + 2;
        LODWORD(v1317) = HIDWORD(v1333) ^ 0xAB69605E;
        LODWORD(v1331) = WORD2(v1333);
        do
        {
          v517 = v516[1] | ((*v516 | ((*(v516 - 1) | (*(v516 - 2) << 8)) << 8)) << 8);
          v518 = v517 ^ v501;
          v519 = v516[5] | ((v516[4] | ((v516[3] | (v516[2] << 8)) << 8)) << 8);
          lpMem = v516 + 8;
          v520 = v519 ^ v511 ^ v510 ^ v518 ^ 0xAB69605E;
          v521 = v518 ^ (__ROR4__(v520, 22) + v515 * __ROR4__(v520 + 1419157410, 27));
          v522 = v520 ^ (WORD1(v1333) * __ROR4__(v521 + v510, 9) - __ROR4__(v521, 30));
          v523 = v521 ^ (dwBytes * (v522 - (_DWORD)v1331) - (v522 >> 13));
          v524 = v522 ^ (HIWORD(v1333) * __ROR4__(v523 ^ WORD1(v1333), 26) - __ROR4__(v523, 30));
          v525 = v523 ^ (v510 - (v524 ^ 0xAB69605E));
          v526 = v524 ^ (WORD1(v1333) * ((unsigned int)v1331 ^ v525)) ^ __ROR4__(v525, 6);
          v527 = v525 ^ (__ROR4__(v526, 30) + dwBytes * __ROR4__(v526 + v510, 15));
          v528 = v526 ^ (HIWORD(v1333) * __ROR4__(v527 + 1419157410, 14) - __ROR4__(v527, 24));
          v529 = v527 ^ __ROR4__(v528, 10) ^ ((_DWORD)v1331 * __ROR4__(v528 ^ 0xAB69605E, 12));
          v530 = v528 ^ (v529 >> 10) ^ (WORD1(v1333) * (v529 ^ HIWORD(v1333)));
          v531 = v529 ^ (HIWORD(v1333) * (dwBytes + __ROR4__(~v530, 5)));
          v515 = (int)v1331;
          v532 = v530 ^ (v531 - HIWORD(v1333)) ^ 0xAB69605E;
          v533 = v531 ^ ((v532 >> 2) + (_DWORD)v1331 * __ROR4__(v532 ^ HIWORD(v1333), 30));
          v534 = v532 ^ (__ROR4__(v533, 25) + WORD1(v1333) * __ROR4__(v533 - v510, 6));
          v535 = v533 ^ (dwBytes * ((unsigned int)v1331 ^ v534) + __ROR4__(v534, 9));
          v536 = v534 ^ (__ROR4__(v535, 25) + HIWORD(v1333) * __ROR4__(v535 ^ WORD1(v1333), 27));
          v537 = v535 ^ v536 ^ v1317;
          v538 = v536 ^ ((_DWORD)v1331 * (__ROR4__(v537, 3) - WORD1(v1333)));
          v539 = v537 ^ (dwBytes * __ROR4__(v538 - v510, 1) - __ROR4__(v538, 6));
          v540 = v538 ^ (__ROR4__(v539, 18) + HIWORD(v1333) * __ROR4__(v539 - 1419157410, 29));
          v541 = v539 ^ ((_DWORD)v1331 * __ROR4__(v540 - 1419157410, 17) - __ROR4__(v540, 14));
          v542 = v540 ^ (v541 >> 3) ^ (WORD1(v1333) * (v541 ^ dwBytes));
          v511 = v542 ^ v513;
          v543 = __ROR4__(v542 ^ v510, 28);
          v544 = v542;
          v545 = (_BYTE *)pcchLength;
          v513 = v519;
          v546 = v514 ^ __ROR4__(v544, 30) ^ (dwBytes * v543);
          v514 = v517;
          v501 = v541 ^ v546;
          *(_BYTE *)(pcchLength - 4) = v501;
          *v545 = v511;
          *(v545 - 5) = __ROR4__(v501, 8);
          *(v545 - 1) = __ROR4__(v511, 8);
          *(v545 - 6) = __ROR4__(v501, 16);
          *(v545 - 2) = __ROR4__(v511, 16);
          *(v545 - 7) = __ROR4__(v501, 24);
          *(v545 - 3) = __ROR4__(v511, 24);
          pcchLength = (size_t)(v545 + 8);
          v516 = (unsigned __int8 *)lpMem;
          --v512;
        }
        while ( v512 );
        v494 = v1315;
        v208 = v1325;
        v496 = v1321;
        v495 = v1329;
        v304 = (unsigned __int8 *)v1323;
        v483 = v1330;
        v493 = (_DWORD *)v1336;
        v509 = j;
      }
      for ( i = 0LL; i < v509; ++i )
        v494 ^= *((_BYTE *)v493 + i);
      v1319 = v1334;
      v1317 = (SIZE_T)v483;
      v1330 = v483;
      if ( v494 != *(_QWORD *)((char *)v1346 + v509) )
      {
        MemoryFree(v493);
        v427 = (void *)v1322;
LABEL_608:
        v209 = -805306367;
        LODWORD(Size) = -805306367;
        v1331 = 0LL;
        goto LABEL_476;
      }
      v1325 = v496;
      v306 = (SIZE_T)v496;
      LODWORD(dwBytes) = 0;
      v1339 = v493;
      if ( (unsigned int)j < 4 )
      {
        v1330 = v483;
        v1321 = v496;
LABEL_649:
        v1334 = v1319;
        v1329 = v495;
        v1331 = v493;
LABEL_650:
        v548 = -1073741762;
        goto LABEL_651;
      }
      LODWORD(v1333) = *v493;
      v548 = RtlULongLongAdd(v493, 4LL, &v1339, v496);
      v1331 = v549;
      v1330 = (LPVOID)v1317;
      v1334 = v1319;
      v1329 = v495;
      v1321 = (LPVOID)v306;
      if ( v548 < 0 )
        goto LABEL_651;
      v550 = RtlUIntAdd(0LL, 4LL, &dwBytes);
      v551 = (void *)v1317;
      v548 = v550;
      v552 = (void *)v306;
      v1334 = v1319;
      v1331 = v493;
      v1330 = (LPVOID)v1317;
      v1329 = v495;
      v1321 = (LPVOID)v306;
      if ( v550 < 0 )
        goto LABEL_651;
      if ( (unsigned int)(j - dwBytes) < 4 )
        goto LABEL_614;
      LODWORD(lpModuleName) = *(_DWORD *)v1339;
      v548 = RtlULongLongAdd(v1339, 4LL, &v1339, v306);
      v1331 = v553;
      v1330 = (LPVOID)v1317;
      v1334 = v1319;
      v1329 = v495;
      v1321 = (LPVOID)v306;
      if ( v548 < 0 )
        goto LABEL_651;
      v554 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
      v551 = (void *)v1317;
      v548 = v554;
      v552 = (void *)v306;
      v1334 = v1319;
      v1331 = v493;
      v1330 = (LPVOID)v1317;
      v1329 = v495;
      v1321 = (LPVOID)v306;
      if ( v554 < 0 )
        goto LABEL_651;
      v306 = (unsigned int)lpModuleName;
      if ( (int)j - (int)dwBytes < (unsigned int)lpModuleName )
      {
LABEL_614:
        v1330 = v551;
        v1321 = v552;
        goto LABEL_649;
      }
      v548 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)lpModuleName, &dwBytes);
      v1330 = (LPVOID)v1317;
      v1334 = v1319;
      v1331 = v493;
      v1329 = v495;
      v1321 = v1325;
      if ( v548 >= 0 )
      {
        v556 = (unsigned int)v306;
        v306 = (unsigned int)j;
        if ( (char *)v493 + (unsigned int)j < (char *)v1339 + v556
          || (v306 = (SIZE_T)v493 + (unsigned int)j - (_QWORD)v1339 - v556, v306 >= 8) )
        {
          v304 = v555;
          v1330 = (LPVOID)v1317;
          v1321 = v1325;
          goto LABEL_649;
        }
        v557 = v1319;
        v1341 = 0LL;
        v548 = 0;
        j = 0LL;
        pcchLength = 0LL;
        v1336 = 0LL;
        LODWORD(v1327) = 0;
        v1330 = (LPVOID)v1317;
        v1331 = v493;
        v1334 = v1319;
        v1329 = v495;
        v1323 = v555;
        v1321 = v1325;
        if ( v1339 )
        {
          v1347 = v1339;
          v548 = RtlULongLongAdd(v1339, (unsigned int)lpModuleName, &j, v306);
          v1334 = v557;
          v304 = v559;
          v1331 = v558;
          v1330 = (LPVOID)v1317;
          v1329 = v495;
          v1321 = v1325;
          if ( v548 < 0 )
            goto LABEL_651;
          v306 = (SIZE_T)v1347;
          v1331 = v558;
          v1330 = (LPVOID)v1317;
          v1334 = v1319;
          v1329 = v495;
          v1323 = v559;
          v1321 = v1325;
          if ( (unsigned __int64)v1347 < j )
          {
            v1331 = v558;
            v1334 = v1319;
            v560 = v1325;
            v1330 = (LPVOID)v1317;
            v1329 = v495;
            v1321 = v1325;
            while ( 1 )
            {
              lpMem = v560;
              v1324 = (size_t)v1331;
              v548 = RtlULongLongAdd(v306, 4LL, &pcchLength, v306);
              if ( v548 < 0 )
                goto LABEL_651;
              if ( pcchLength > j )
                goto LABEL_633;
              v561 = *(unsigned int *)v306;
              LODWORD(v1317) = 0;
              v548 = RtlUIntAdd(4LL, v561, &v1317);
              if ( v548 < 0 )
                goto LABEL_651;
              v548 = RtlULongLongAdd(v306, (unsigned int)v1317, &v1336, v306);
              v1331 = (LPVOID)v1324;
              v1330 = v562;
              v1334 = v563;
              v1329 = v495;
              v1321 = lpMem;
              if ( v548 < 0 )
              {
                v569 = 0;
                goto LABEL_645;
              }
              v306 = v1336;
              v564 = j;
              v1347 = (void *)v1336;
              v1330 = v562;
              v1334 = v563;
              v1329 = v495;
              if ( v1336 > j )
              {
                v548 = -1073741811;
                v1331 = (LPVOID)v1324;
                v1321 = lpMem;
                goto LABEL_651;
              }
              LODWORD(v1327) = v1327 + 1;
              v1331 = (LPVOID)v1324;
              v560 = lpMem;
              v1321 = lpMem;
              if ( v1336 >= j )
              {
                v1331 = (LPVOID)v1324;
                v1330 = v562;
                v1334 = v563;
                v1329 = v495;
                v1323 = v304;
                v1321 = lpMem;
                goto LABEL_635;
              }
            }
          }
          v564 = j;
LABEL_635:
          if ( v306 != v564 )
          {
LABEL_633:
            v548 = -1073741811;
            goto LABEL_651;
          }
        }
        v565 = (unsigned int)lpModuleName;
        if ( !(_DWORD)lpModuleName )
        {
          v568 = v1341;
          goto LABEL_641;
        }
        v566 = (unsigned int)lpModuleName;
        v567 = GetProcessHeap();
        v568 = HeapAlloc(v567, 8u, v566);
        if ( v568 )
        {
          v565 = (unsigned int)lpModuleName;
          v548 = 0;
LABEL_641:
          if ( v1339 )
            memcpy_0(v568, v1339, v565);
          v569 = v1327;
          v1328 = v568;
          v304 = (unsigned __int8 *)v1323;
          v1343 = v1327;
LABEL_645:
          if ( v548 < 0 || (_DWORD)v1333 == v569 )
            goto LABEL_651;
          goto LABEL_650;
        }
        v304 = (unsigned __int8 *)v1323;
        v548 = -1073741801;
        v1328 = 0LL;
        v1343 = 0;
      }
LABEL_651:
      v209 = v548 | 0x10000000;
      goto LABEL_474;
    }
    if ( (_DWORD)v306 != (_DWORD)Size || (unsigned int)(v459 + v464 + v1327) + 12LL != (unsigned int)v306 )
      goto LABEL_526;
    v465 = GetProcessHeap();
    v466 = HeapAlloc(v465, 8u, 0x30uLL);
    if ( !v466 )
    {
      v1330 = 0LL;
      v209 = -805306345;
      goto LABEL_514;
    }
    v460 = 0;
    if ( pcchLength )
    {
      v467 = (unsigned int)v1317;
      *(_DWORD *)v466 = v1317;
      v468 = v467;
      lpMem = (LPVOID)v467;
      v469 = GetProcessHeap();
      v470 = HeapAlloc(v469, 8u, v468);
      if ( !v470 )
        goto LABEL_553;
      *((_QWORD *)v466 + 1) = v470;
      v460 = 0;
      memcpy_0(v470, (const void *)pcchLength, (size_t)lpMem);
    }
    else
    {
      *(_DWORD *)v466 = 0;
      *((_QWORD *)v466 + 1) = 0LL;
    }
    if ( !v1336 )
    {
      *((_DWORD *)v466 + 4) = 0;
      *((_QWORD *)v466 + 3) = 0LL;
LABEL_551:
      if ( v1323 )
      {
        v475 = (unsigned int)v1327;
        *((_DWORD *)v466 + 8) = v1327;
        v476 = v475;
        lpMem = (LPVOID)v475;
        v477 = GetProcessHeap();
        v478 = HeapAlloc(v477, 8u, v476);
        if ( !v478 )
          goto LABEL_553;
        *((_QWORD *)v466 + 5) = v478;
        v460 = 0;
        memcpy_0(v478, v1323, (size_t)lpMem);
      }
      else
      {
        *((_DWORD *)v466 + 8) = 0;
        *((_QWORD *)v466 + 5) = 0LL;
      }
      v451 = v466;
LABEL_563:
      if ( v460 < 0 )
      {
        v1330 = 0LL;
        if ( v451 )
        {
          v484 = (void *)v451[1];
          if ( v484 )
          {
            v485 = GetProcessHeap();
            HeapFree(v485, 0, v484);
            v451[1] = 0LL;
          }
          v486 = (void *)v451[3];
          if ( v486 )
          {
            v487 = GetProcessHeap();
            HeapFree(v487, 0, v486);
            v451[3] = 0LL;
          }
          v488 = (void *)v451[5];
          if ( v488 )
          {
            v489 = GetProcessHeap();
            HeapFree(v489, 0, v488);
            v451[5] = 0LL;
          }
          v490 = GetProcessHeap();
          HeapFree(v490, 0, v451);
          v1330 = 0LL;
        }
      }
      else
      {
        v1330 = v451;
      }
      goto LABEL_565;
    }
    v471 = (unsigned int)v1333;
    *((_DWORD *)v466 + 4) = v1333;
    v472 = v471;
    lpMem = (LPVOID)v471;
    v473 = GetProcessHeap();
    v474 = HeapAlloc(v473, 8u, v472);
    if ( v474 )
    {
      *((_QWORD *)v466 + 3) = v474;
      v460 = 0;
      memcpy_0(v474, (const void *)v1336, (size_t)lpMem);
      goto LABEL_551;
    }
LABEL_553:
    v460 = -1073741801;
    lpMem = (LPVOID)*((_QWORD *)v466 + 1);
    if ( lpMem )
    {
      v479 = GetProcessHeap();
      HeapFree(v479, 0, lpMem);
      *((_QWORD *)v466 + 1) = 0LL;
    }
    lpMem = (LPVOID)*((_QWORD *)v466 + 3);
    if ( lpMem )
    {
      v480 = GetProcessHeap();
      HeapFree(v480, 0, lpMem);
      *((_QWORD *)v466 + 3) = 0LL;
    }
    lpMem = (LPVOID)*((_QWORD *)v466 + 5);
    if ( lpMem )
    {
      v481 = GetProcessHeap();
      HeapFree(v481, 0, lpMem);
      *((_QWORD *)v466 + 5) = 0LL;
    }
    v482 = GetProcessHeap();
    HeapFree(v482, 0, v466);
    goto LABEL_563;
  }
  v309 = (v1355 + 7) & 0xFFFFFFF8;
  if ( v309 < v1355 )
  {
    v209 = -805306219;
    goto LABEL_716;
  }
  v1355 = (v1355 + 7) & 0xFFFFFFF8;
  v310 = v309;
  v311 = GetProcessHeap();
  v312 = (unsigned __int8 *)HeapAlloc(v311, 8u, v310);
  v304 = v312;
  if ( v312 )
  {
    *(_DWORD *)v312 = Src[0];
    v1324 = (size_t)v312;
    v313 = RtlULongLongAdd(v312, 4LL, &v1324, v306);
    pcchLength = v316;
    v308 = v313;
    if ( v313 < 0
      || (v317 = v1324,
          *(_DWORD *)v1324 = HIDWORD(Src[0]),
          v318 = RtlULongLongAdd(v317, v315, &v1324, v314),
          pcchLength = (size_t)v304,
          v308 = v318,
          v318 < 0) )
    {
      v319 = GetProcessHeap();
      HeapFree(v319, 0, (LPVOID)pcchLength);
      v304 = (unsigned __int8 *)v1323;
      v306 = (unsigned int)v1323;
    }
    else
    {
      *(_QWORD *)&v304[v1355 - 8] = lpMem;
      memcpy_0((void *)v1324, Src[1], HIDWORD(Src[0]));
      v306 = v1355;
      v1323 = v304;
    }
    v307 = 0LL;
    goto LABEL_370;
  }
  v209 = -805306345;
  LODWORD(Size) = -805306345;
LABEL_501:
  if ( v209 < 0 )
    goto LABEL_717;
  v447 = v1343;
  if ( !v1343 )
    goto LABEL_503;
  if ( !v1328 )
  {
LABEL_656:
    v209 = -1073741811;
    goto LABEL_716;
  }
  pcchLength = (size_t)v1328;
  v209 = RtlULongLongAdd(v1328, 4LL, &pcchLength, v306);
  LODWORD(Size) = v209;
  if ( v209 < 0 )
  {
LABEL_662:
    v1328 = v570;
    goto LABEL_717;
  }
  v572 = (int *)pcchLength;
  if ( !*v571 )
    v572 = 0LL;
  if ( *v571 != 4 )
  {
    v209 = -1073741789;
    LODWORD(Size) = -1073741789;
    goto LABEL_662;
  }
  v209 = *v572;
  LODWORD(Size) = v209;
  if ( v209 == -805306333 )
  {
    LODWORD(v1327) = -2147024774;
  }
  else
  {
    LODWORD(v1327) = v209;
    if ( v209 != -2147024774 )
    {
      LODWORD(v1327) = v209;
      v1328 = v570;
      if ( v209 < 0 )
        goto LABEL_717;
    }
  }
  v1328 = v570;
  if ( v447 != 6 )
  {
LABEL_503:
    v209 = -1073425151;
    goto LABEL_716;
  }
  j = (SIZE_T)v570;
  while ( 1 )
  {
    LODWORD(Size) = RtlULongLongAdd(v570, 4LL, &j, *v570);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      break;
    LODWORD(Size) = RtlULongLongAdd(j, (unsigned int)v573, &j, v573);
    v209 = Size;
    if ( (Size & 0x80000000) != 0LL )
      break;
    v570 = (unsigned int *)j;
    if ( v574 != -1 )
    {
      LODWORD(Size) = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
      v209 = Size;
      if ( (Size & 0x80000000) != 0LL )
        break;
      v576 = (void **)j;
      if ( !v575 )
        v576 = 0LL;
      if ( v575 == 8 )
      {
        v577 = 0LL;
        v578 = *v576;
        v579 = v1328;
        j = (SIZE_T)v1328;
        lpMem = v578;
        while ( 1 )
        {
          LODWORD(Size) = RtlULongLongAdd(v579, 4LL, &j, v577);
          v209 = Size;
          if ( (Size & 0x80000000) != 0LL )
            goto LABEL_717;
          LODWORD(Size) = RtlULongLongAdd(j, v581, &j, v580);
          v209 = Size;
          if ( (Size & 0x80000000) != 0LL )
            goto LABEL_717;
          v579 = (LPVOID)j;
          v577 = (unsigned int)(v582 + 1);
          if ( (unsigned int)v577 >= 2 )
          {
            LODWORD(Size) = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
            v209 = Size;
            if ( (Size & 0x80000000) != 0LL )
              goto LABEL_717;
            v585 = (int *)j;
            if ( !v583 )
              v585 = 0LL;
            if ( v583 == 4 )
            {
              v586 = *v585;
              v587 = v584;
              j = v584;
              v588 = 0LL;
              LODWORD(v1317) = v586;
              while ( 1 )
              {
                LODWORD(Size) = RtlULongLongAdd(v587, 4LL, &j, v588);
                v209 = Size;
                if ( (Size & 0x80000000) != 0LL )
                  goto LABEL_717;
                LODWORD(Size) = RtlULongLongAdd(j, v590, &j, v589);
                v209 = Size;
                if ( (Size & 0x80000000) != 0LL )
                  goto LABEL_717;
                v587 = j;
                v588 = (unsigned int)(v591 + 1);
                if ( (unsigned int)v588 >= 3 )
                {
                  LODWORD(Size) = RtlULongLongAdd(j, 4LL, &j, v588);
                  v209 = Size;
                  if ( (Size & 0x80000000) == 0LL )
                  {
                    v592 = (unsigned int *)v1328;
                    v593 = 0LL;
                    j = (SIZE_T)v1328;
                    while ( 1 )
                    {
                      v594 = *v592;
                      LODWORD(Size) = RtlULongLongAdd(v592, 4LL, &j, v593);
                      v209 = Size;
                      if ( (Size & 0x80000000) != 0LL )
                        break;
                      LODWORD(Size) = RtlULongLongAdd(j, v594, &j, v595);
                      v209 = Size;
                      if ( (Size & 0x80000000) != 0LL )
                        break;
                      v592 = (unsigned int *)j;
                      v593 = (unsigned int)(v596 + 1);
                      if ( (unsigned int)v593 >= 4 )
                      {
                        LODWORD(Size) = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
                        v209 = Size;
                        if ( (Size & 0x80000000) != 0LL )
                          goto LABEL_717;
                        v598 = (int *)j;
                        if ( !v597 )
                          v598 = 0LL;
                        if ( v597 == 4 )
                        {
                          v599 = v1328;
                          v600 = 0LL;
                          v601 = *v598;
                          v602 = (unsigned int *)v1328;
                          j = (SIZE_T)v1328;
                          LODWORD(v1333) = v601;
                          while ( 1 )
                          {
                            v603 = *v602;
                            pcchLength = (size_t)v599;
                            LODWORD(Size) = RtlULongLongAdd(v602, 4LL, &j, v600);
                            v209 = Size;
                            if ( (Size & 0x80000000) != 0LL )
                              goto LABEL_717;
                            LODWORD(Size) = RtlULongLongAdd(j, v603, &j, v604);
                            v209 = Size;
                            if ( (Size & 0x80000000) != 0LL )
                              goto LABEL_717;
                            v602 = (unsigned int *)j;
                            v600 = (unsigned int)(v605 + 1);
                            if ( (unsigned int)v600 >= 5 )
                            {
                              v209 = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
                              LODWORD(Size) = v209;
                              if ( v209 < 0 )
                                goto LABEL_716;
                              v609 = (int *)j;
                              if ( !v606 )
                                v609 = 0LL;
                              if ( v606 != 4 )
                                goto LABEL_263;
                              v610 = *v609;
                              if ( (LPVOID)v1349 != lpMem )
                                goto LABEL_503;
                              v1359 = v1317;
                              v1351 = v610;
                              if ( (unsigned int)v1333 > 4 || (unsigned int)v607 > 4 )
                              {
                                v209 = -2147024774;
                                goto LABEL_716;
                              }
                              memcpy_0(Ptr, v608, v607);
                              v1328 = (LPVOID)pcchLength;
                              v1359 = v1317;
                              v1351 = v610;
                              if ( (_DWORD)v1327 )
                              {
                                v209 = v1327;
                                LODWORD(Size) = v1327;
                                v1359 = v1317;
                                v1351 = v610;
                                v1328 = (LPVOID)pcchLength;
                              }
                              goto LABEL_717;
                            }
                            v599 = v1328;
                          }
                        }
                        goto LABEL_263;
                      }
                    }
                  }
                  goto LABEL_717;
                }
              }
            }
            goto LABEL_263;
          }
        }
      }
      goto LABEL_263;
    }
  }
LABEL_717:
  v611 = Src[1];
  Src[0] = 0LL;
  if ( Src[1] )
  {
    v612 = GetProcessHeap();
    HeapFree(v612, 0, v611);
    Src[1] = 0LL;
  }
  v613 = v1328;
  if ( v1328 )
  {
    v614 = GetProcessHeap();
    HeapFree(v614, 0, v613);
  }
  if ( v208 )
  {
    v615 = GetProcessHeap();
    HeapFree(v615, 0, v208);
  }
  if ( v211 )
  {
    v616 = GetProcessHeap();
    HeapFree(v616, 0, v211);
  }
  v13 = 0LL;
  if ( v209 >= 0 )
  {
    if ( !v1351 )
    {
LABEL_1243:
      v210 = v1359;
      v1377 = v1368;
      v1368 = 0LL;
      goto LABEL_1579;
    }
    v1344 = 0LL;
    dword_1808DA538 = v1351;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    {
LABEL_1210:
      SH<void *,SH_HANDLE>::Reset(&v1344);
      v972 = 0LL;
      *(_OWORD *)v1348 = 0LL;
      v1343 = 0;
      v1331 = 0LL;
      v973 = GetProcessHeap();
      v974 = HeapAlloc(v973, 8u, 0xA0uLL);
      if ( !v974 )
      {
        v979 = 0LL;
        goto LABEL_1234;
      }
      *v974 = xmmword_1808D8540[0];
      v974[1] = xmmword_1808D8540[1];
      v974[2] = xmmword_1808D8540[2];
      v974[3] = xmmword_1808D8540[3];
      v974[4] = xmmword_1808D8540[4];
      v974[5] = xmmword_1808D8540[5];
      v974[6] = xmmword_1808D8540[6];
      v974[7] = xmmword_1808D8540[7];
      v974[8] = xmmword_1808D8540[8];
      v974[9] = xmmword_1808D8540[9];
      v975 = GetProcessHeap();
      v976 = HeapAlloc(v975, 8u, 8uLL);
      if ( !v976 )
      {
        v13 = 0LL;
        v979 = v974;
        goto LABEL_1234;
      }
      *v976 = qword_1808D8690;
      Ptr = (unsigned __int16 *)__rdtsc();
      LODWORD(dwBytes) = 0;
      v1314 = 0;
      v977 = RtlUIntAdd(4LL, 4LL, &v1314);
      v13 = v978;
      v979 = v974;
      if ( v977 < 0 )
        goto LABEL_1233;
      if ( (int)RtlUIntAdd(0LL, v1314, &dwBytes) < 0 )
        goto LABEL_1233;
      v1314 = 0;
      if ( (int)RtlUIntAdd(4LL, 160LL, &v1314) < 0 )
        goto LABEL_1233;
      v980 = RtlUIntAdd((unsigned int)dwBytes, v1314, &dwBytes);
      if ( (v981 | v980) < 0 )
        goto LABEL_1233;
      v1314 = 0;
      if ( (int)RtlUIntAdd(4LL, 8LL, &v1314) < 0 )
        goto LABEL_1233;
      v982 = RtlUIntAdd((unsigned int)dwBytes, v1314, &dwBytes);
      if ( (v983 | v982) < 0 )
        goto LABEL_1233;
      v1314 = 0;
      if ( (int)RtlUIntAdd(4LL, 8LL, &v1314) < 0 )
        goto LABEL_1233;
      v984 = RtlUIntAdd((unsigned int)dwBytes, v1314, &dwBytes);
      if ( (v985 | v984) < 0 )
        goto LABEL_1233;
      HIDWORD(v1348[0]) = dwBytes;
      v986 = dwBytes;
      v987 = GetProcessHeap();
      v988 = HeapAlloc(v987, 8u, v986);
      v972 = 0LL;
      if ( !v988 )
        goto LABEL_1234;
      v1348[1] = (size_t)v988;
      LODWORD(v1354) = 0;
      v1353 = 0LL;
      LODWORD(v1348[0]) = 0;
      v1328 = v974;
      pcchLength = (size_t)v988;
      v1319 = v13;
      if ( (int)RtlULongLongAdd(v988, 4LL, &v1354, v13) >= 0 )
      {
        if ( v990 + 2 > (_DWORD *)((char *)v990 + HIDWORD(v1348[0])) )
          goto LABEL_1233;
        v991 = v1354;
        *v990 = 4;
        *v991 = 4;
        v992 = ++LODWORD(v1348[0]);
        LODWORD(v1338) = 0;
        lpMem = 0LL;
        if ( !v989 )
          goto LABEL_1233;
        if ( !v1348[1] )
        {
          v1314 = 0;
          if ( (int)RtlUIntAdd(4LL, v989, &v1314) < 0 )
          {
            v972 = 0LL;
            goto LABEL_1234;
          }
          if ( (int)RtlUIntAdd(HIDWORD(v1348[0]), v1314, (char *)v1348 + 4) < 0 )
            goto LABEL_1233;
          goto LABEL_1251;
        }
        v998 = (unsigned int *)v1348[1];
        pcchLength = v1348[1];
        LODWORD(v1317) = 0;
        if ( !v992 )
        {
LABEL_1248:
          if ( (int)RtlULongLongAdd(v998, 4LL, &v1338, v998) < 0
            || (unsigned __int64)v1002 + v1003 + 4 > v1348[1] + HIDWORD(v1348[0]) )
          {
            v972 = 0LL;
            goto LABEL_1234;
          }
          *v1002 = v1003;
          memcpy_0(v1338, v974, v1003);
LABEL_1251:
          v1004 = (unsigned int)(LODWORD(v1348[0]) + 1);
          LODWORD(v1338) = 0;
          ++LODWORD(v1348[0]);
          lpMem = 0LL;
          if ( v13 )
          {
            if ( !v1348[1] )
            {
              v1314 = 0;
              v972 = 0LL;
              if ( (int)RtlUIntAdd(4LL, 8LL, &v1314) < 0 )
                goto LABEL_1234;
              if ( (int)RtlUIntAdd(HIDWORD(v1348[0]), v1314, (char *)v1348 + 4) < 0 )
                goto LABEL_1233;
              goto LABEL_1263;
            }
            v1005 = (unsigned int *)v1348[1];
            pcchLength = v1348[1];
            if ( (_DWORD)v1004 )
            {
              while ( 1 )
              {
                v1006 = *v1005;
                v1314 = 0;
                if ( (int)RtlUIntAdd(4LL, v1006, &v1314) < 0
                  || (int)RtlULongLongAdd(v1008, v1314, &pcchLength, v1007) < 0 )
                {
                  break;
                }
                v1005 = (unsigned int *)pcchLength;
                v1319 = v13;
                v1328 = v974;
                if ( v1009 + 1 >= (unsigned int)v1004 )
                  goto LABEL_1260;
              }
            }
            else
            {
LABEL_1260:
              if ( (int)RtlULongLongAdd(v1005, 4LL, &v1338, v1004) >= 0 )
              {
                if ( (unsigned __int64)(v1010 + 3) > v1348[1] + HIDWORD(v1348[0]) )
                  goto LABEL_1233;
                *v1010 = 8;
                memcpy_0(v1338, v13, 8uLL);
LABEL_1263:
                v1011 = (unsigned int)(LODWORD(v1348[0]) + 1);
                LODWORD(v1354) = 0;
                ++LODWORD(v1348[0]);
                v1353 = 0LL;
                if ( v1348[1] )
                {
                  v1012 = (unsigned int *)v1348[1];
                  pcchLength = v1348[1];
                  if ( (_DWORD)v1011 )
                  {
                    do
                    {
                      v1013 = *v1012;
                      v1314 = 0;
                      if ( (int)RtlUIntAdd(4LL, v1013, &v1314) < 0 )
                        goto LABEL_1233;
                      if ( (int)RtlULongLongAdd(v1015, v1314, &pcchLength, v1014) < 0 )
                        goto LABEL_1230;
                      v1012 = (unsigned int *)pcchLength;
                      v1328 = v974;
                      v1319 = v13;
                    }
                    while ( v1016 + 1 < (unsigned int)v1011 );
                  }
                  if ( (int)RtlULongLongAdd(v1012, 4LL, &v1354, v1011) < 0
                    || (unsigned __int64)(v1017 + 3) > v1348[1] + HIDWORD(v1348[0]) )
                  {
                    goto LABEL_1233;
                  }
                  v1018 = (unsigned __int16 **)v1354;
                  v1019 = Ptr;
                  *v1017 = 8;
                  *v1018 = v1019;
                }
                else
                {
                  v1314 = 0;
                  if ( (int)RtlUIntAdd(4LL, 8LL, &v1314) < 0
                    || (int)RtlUIntAdd(HIDWORD(v1348[0]), v1314, (char *)v1348 + 4) < 0 )
                  {
                    goto LABEL_1233;
                  }
                }
                ++LODWORD(v1348[0]);
                v1314 = 0;
                if ( (int)RtlUIntAdd(4LL, 4LL, &v1314) < 0 )
                  goto LABEL_1233;
                LODWORD(v1317) = v1314;
                v1314 = 0;
                if ( (int)RtlUIntAdd(v1020, (unsigned int)(v1020 + 4), &v1314) < 0
                  || (int)RtlUIntAdd(v1021, v1314, &v1317) < 0 )
                {
                  goto LABEL_1233;
                }
                LODWORD(v1339) = v1317;
                LODWORD(v1317) = 0;
                v1325 = 0LL;
                LODWORD(v1322) = 0;
                v1321 = 0LL;
                v1329 = 0LL;
                v1334 = 0LL;
                v1327 = 0LL;
                lpModuleName = 0LL;
                v1344 = __rdtsc();
                v1357 = 8;
                v1022 = RtlUIntAdd(8LL, HIDWORD(v1348[0]), &v1357);
                if ( v1022 >= 0 )
                {
                  v1024 = (v1357 + 7) & 0xFFFFFFF8;
                  if ( v1024 < v1357 )
                    goto LABEL_1233;
                  v1357 = (v1357 + 7) & 0xFFFFFFF8;
                  v1025 = v1024;
                  v1026 = GetProcessHeap();
                  v1027 = HeapAlloc(v1026, 8u, v1025);
                  v1353 = v1027;
                  if ( !v1027 )
                  {
                    v1035 = -805306345;
                    goto LABEL_1561;
                  }
                  *v1027 = v1348[0];
                  v1324 = (size_t)v1027;
                  v1028 = RtlULongLongAdd(v1027, 4LL, &v1324, v1027);
                  lpMem = v1031;
                  v1022 = v1028;
                  if ( v1028 < 0
                    || (v1032 = v1324,
                        *(_DWORD *)v1324 = HIDWORD(v1348[0]),
                        v1033 = RtlULongLongAdd(v1032, v1030, &v1324, v1029),
                        lpMem = v1034,
                        v1022 = v1033,
                        v1033 < 0) )
                  {
                    v1051 = GetProcessHeap();
                    HeapFree(v1051, 0, lpMem);
                    v1023 = v1322;
                  }
                  else
                  {
                    *(_QWORD *)&v1034[v1357 - 8] = v1344;
                    memcpy_0((void *)v1324, (const void *)v1348[1], HIDWORD(v1348[0]));
                    v1023 = v1357;
                    v1325 = v1353;
                  }
                }
                v1035 = v1022 | 0x10000000;
                if ( v1035 < 0 )
                {
                  v1115 = v1325;
                  goto LABEL_1537;
                }
                v1036 = (unsigned __int8 *)v1325;
                dwBytes = 0LL;
                if ( v1325 )
                {
                  pcchLength = v1023;
                  if ( !v1023
                    || (v1336 = v1023 + 8LL,
                        v1037 = MemoryAlloc(v1336),
                        v1038 = 0,
                        v1346 = v1037,
                        (v1039 = (size_t)v1037) == 0) )
                  {
                    v1035 = -805306367;
                    goto LABEL_1538;
                  }
                  v1040 = pcchLength;
                  v1041 = 0;
                  v1315 = 0;
                  v1042 = 0LL;
                  if ( pcchLength )
                  {
                    do
                      v1041 ^= v1036[v1042++];
                    while ( v1042 < pcchLength );
                    v1315 = v1041;
                  }
                  v1330 = (LPVOID)0xC81ECB17B1B54A58LL;
                  LODWORD(v1326) = 0;
                  v1043 = -1;
                  LODWORD(v1341) = 0;
                  v1044 = v1036;
                  v1324 = v1039;
                  v1045 = pcchLength & 7;
                  if ( (pcchLength & 7) != 0 )
                  {
                    LODWORD(v1326) = 0;
                    v1046 = 0;
                    v1314 = 0;
                    LODWORD(v1341) = 0;
                    v1047 = 56;
                    v1048 = 0;
                    v1049 = 0;
                    do
                    {
                      v1050 = *v1044;
                      if ( v1046 >= 4 )
                        v1048 |= v1050 << v1047;
                      else
                        v1049 |= v1050 << (v1047 - 32);
                      ++v1044;
                      v1046 = v1314 + 1;
                      v1047 -= 8;
                      v1314 = v1046;
                    }
                    while ( (int)v1046 < (int)v1045 );
                    LODWORD(v1341) = v1049;
                    LODWORD(v1326) = v1048;
                    v1325 = v1036;
                    v1319 = v13;
                    v1328 = v974;
                    v1038 = v1049 ^ 0xB17A307A;
                    v1052 = v1048 ^ 0x42F6B18D;
                    LODWORD(v1322) = 0;
                    v1053 = v1049 ^ 0xB17A307A;
                    v1054 = v1048 ^ 0x42F6B18D;
                    if ( (pcchLength & 7) != 0 )
                    {
                      v1055 = (_BYTE *)v1324;
                      v1056 = v1322;
                      do
                      {
                        if ( v1056 >= 4 )
                        {
                          v1054 = __ROR4__(v1054, 24);
                          v1057 = v1054;
                        }
                        else
                        {
                          v1053 = __ROR4__(v1053, 24);
                          v1057 = v1053;
                        }
                        *v1055 = v1057;
                        ++v1056;
                        v1058 = (size_t)++v1055;
                      }
                      while ( (int)v1056 < (int)v1045 );
                      v1040 = pcchLength;
                      v1039 = v1058;
                      v1324 = v1058;
                      v1041 = v1315;
                    }
                    else
                    {
                      v1039 = v1324;
                    }
                    if ( v1045 <= 4 )
                    {
                      v1043 = 0;
                      if ( v1045 >= 4 )
                        goto LABEL_1311;
                      v1038 = v1038 >> (8 * (4 - v1045)) << (8 * (4 - v1045));
                    }
                    else
                    {
                      v1043 = v1052 >> (8 * (8 - v1045)) << (8 * (8 - v1045));
                    }
                    v1039 = v1324;
                  }
LABEL_1311:
                  v1344 = v1040 >> 3;
                  if ( v1040 >> 3 )
                  {
                    v1059 = v1044 + 2;
                    v1060 = v1344;
                    v1061 = (int)v1341;
                    LODWORD(v1333) = HIWORD(v1330);
                    v1314 = WORD1(v1330);
                    LODWORD(v1322) = HIDWORD(v1330) ^ 0xB1B54A58;
                    v1062 = v1326;
                    v1063 = HIDWORD(v1330) ^ 0xB1B54A58;
                    lpMem = (LPVOID)(v1039 + 7);
                    do
                    {
                      v1064 = v1059[1] | ((*v1059 | ((*(v1059 - 1) | (*(v1059 - 2) << 8)) << 8)) << 8);
                      v1065 = v1059[5] | ((v1059[4] | ((v1059[3] | (v1059[2] << 8)) << 8)) << 8);
                      v1344 = (size_t)(v1059 + 8);
                      v1066 = v1065 ^ v1043;
                      v1067 = v1038 ^ v1064 ^ (v1066 - 19032);
                      v1068 = __ROR4__(v1067, 15);
                      v1069 = HIDWORD(v1330) ^ v1067;
                      v1070 = v1066 ^ (__ROR4__(v1069, 7) + WORD1(v1330) * v1068);
                      v1071 = v1069 ^ (WORD2(v1330) * __ROR4__(v1070 - 1313519016, 9) - __ROR4__(v1070, 10));
                      v1072 = v1070 ^ (__ROR4__(v1071, 27) + HIWORD(v1330) * __ROR4__(v1071 ^ WORD2(v1330), 28));
                      v1073 = v1071 ^ (HIDWORD(v1330) - (v1072 ^ 0xB1B54A58));
                      v1074 = v1072 ^ (WORD1(v1330) * (v1073 - 19032) - (v1073 >> 6));
                      v1075 = v1073 ^ (19032 * (WORD2(v1330) ^ __ROR4__(v1074, 15)));
                      v1076 = v1074 ^ (WORD2(v1330) * (HIWORD(v1330) + __ROR4__(~v1075, 3)));
                      v1077 = v1075 ^ (v1076 - 19032 - HIDWORD(v1330));
                      v1078 = v1076 ^ (v1314 * (v1077 ^ HIWORD(v1330))) ^ __ROR4__(v1077, 10);
                      v1079 = v1077 ^ __ROR4__(v1078, 3) ^ (WORD2(v1330) * __ROR4__(v1078 ^ 0x4A58, 26));
                      v1080 = v1078 ^ (19032 * (__ROR4__(v1079, 15) - HIWORD(v1330)));
                      v1081 = v1079 ^ ((v1080 ^ (v1080 >> 14)) >> 1) ^ (19032 * (v1333 ^ v1080)) ^ (19032
                                                                                                  * ((8 * (v1080 - WORD2(v1330))) | ((v1080 - WORD2(v1330)) >> 29)));
                      v1082 = v1080 ^ (WORD1(v1330) * (v1081 - WORD2(v1330)) - (v1081 >> 13));
                      v1083 = v1081 ^ __ROR4__(v1082, 11) ^ (WORD2(v1330) * __ROR4__(-1313519016 - v1082, 9));
                      v1084 = v1082 ^ (v1083 + 1313519016 - HIWORD(v1330));
                      v1085 = v1083 ^ (19032 * (v1084 ^ WORD1(v1330)) - __ROR4__(v1084, 7));
                      v1086 = v1084 ^ (WORD1(v1330) * __ROR4__(HIWORD(v1330) ^ v1085, 28) - __ROR4__(v1085, 16));
                      v1087 = v1085 ^ (__ROR4__(v1086, 4) + WORD2(v1330) * __ROR4__(-1313519016 - v1086, 10));
                      v1088 = v1086 ^ __ROR4__(v1087, 9) ^ (HIWORD(v1330) * __ROR4__(v1087 + 1313519016, 4));
                      v1089 = v1087 ^ (19032 * __ROR4__(HIDWORD(v1330) ^ v1088, 24) - __ROR4__(v1088, 30));
                      v1090 = v1088 ^ (WORD1(v1330) * __ROR4__(HIDWORD(v1330) - v1089, 11) - __ROR4__(v1089, 12));
                      v1091 = v1089 ^ (v1090 >> 8) ^ (WORD2(v1330) * (WORD1(v1330) ^ v1090));
                      v1092 = v1090 ^ v1091;
                      v1093 = lpMem;
                      v1038 = v1061 ^ v1091;
                      v1043 = v1062 ^ v1063 ^ v1092;
                      v1061 = v1064;
                      v1062 = v1065;
                      *((char *)lpMem - 4) = v1038;
                      *v1093 = v1043;
                      *(v1093 - 5) = __ROR4__(v1038, 8);
                      *(v1093 - 1) = __ROR4__(v1043, 8);
                      *(v1093 - 6) = __ROR4__(v1038, 16);
                      *(v1093 - 2) = __ROR4__(v1043, 16);
                      *(v1093 - 7) = __ROR4__(v1038, 24);
                      *(v1093 - 3) = __ROR4__(v1043, 24);
                      lpMem = v1093 + 8;
                      v1059 = (unsigned __int8 *)v1344;
                      --v1060;
                    }
                    while ( v1060 );
                    v1041 = v1315;
                    v209 = Size;
                    v979 = v1328;
                    v13 = v1319;
                    v1040 = pcchLength;
                  }
                  v1094 = v1346;
                  *(_QWORD *)((char *)v1346 + v1040) = v1041;
                  v1095 = GetProcessHeap();
                  v1096 = (unsigned int *)HeapAlloc(v1095, 8u, 0x30uLL);
                  if ( v1096 )
                  {
                    *v1096 = v1336;
                    v1097 = GetProcessHeap();
                    v1098 = HeapAlloc(v1097, 8u, (unsigned int)v1336);
                    if ( v1098 )
                    {
                      *((_QWORD *)v1096 + 1) = v1098;
                      memcpy_0(v1098, v1094, (unsigned int)v1336);
                      v1096[4] = 160;
                      v1099 = GetProcessHeap();
                      v1100 = HeapAlloc(v1099, 8u, 0xA0uLL);
                      v1101 = 0;
                      if ( v1100 )
                      {
                        *((_QWORD *)v1096 + 3) = v1100;
                        *v1100 = xmmword_1808D85F0[0];
                        v1100[1] = xmmword_1808D85F0[1];
                        v1100[2] = xmmword_1808D85F0[2];
                        v1100[3] = xmmword_1808D85F0[3];
                        v1100[4] = xmmword_1808D85F0[4];
                        v1100[5] = xmmword_1808D85F0[5];
                        v1100[6] = xmmword_1808D85F0[6];
                        v1100[7] = xmmword_1808D85F0[7];
                        v1100[8] = xmmword_1808D85F0[8];
                        v1100[9] = xmmword_1808D85F0[9];
                        v1096[8] = 8;
                        v1102 = GetProcessHeap();
                        v1103 = HeapAlloc(v1102, 8u, 8uLL);
                        if ( v1103 )
                        {
                          *((_QWORD *)v1096 + 5) = v1103;
                          *v1103 = qword_1808D85E0;
                          dwBytes = 0LL;
LABEL_1329:
                          v1324 = (size_t)v979;
                          v1108 = v13;
                          j = (SIZE_T)v1325;
                          v1323 = v13;
                          v1321 = v1096;
                          v1109 = GetProcessHeap();
                          HeapFree(v1109, 0, v1346);
                          v1110 = (_QWORD *)dwBytes;
                          if ( dwBytes )
                          {
                            v1344 = *(_QWORD *)(dwBytes + 8);
                            if ( v1344 )
                            {
                              v1111 = GetProcessHeap();
                              HeapFree(v1111, 0, (LPVOID)v1344);
                              v1110[1] = 0LL;
                            }
                            v1344 = v1110[3];
                            if ( v1344 )
                            {
                              v1112 = GetProcessHeap();
                              HeapFree(v1112, 0, (LPVOID)v1344);
                              v1110[3] = 0LL;
                            }
                            v1344 = v1110[5];
                            if ( v1344 )
                            {
                              v1113 = GetProcessHeap();
                              HeapFree(v1113, 0, (LPVOID)v1344);
                              v1110[5] = 0LL;
                            }
                            v1114 = GetProcessHeap();
                            HeapFree(v1114, 0, v1110);
                            v1321 = v1096;
                          }
                          v1035 = v1101 | 0x10000000;
                          v1115 = (void *)j;
                          v13 = v1108;
                          v1325 = (LPVOID)j;
                          v979 = (void *)v1324;
                          if ( v1035 < 0 )
                            goto LABEL_1537;
                          v1116 = *v1096;
                          v1370 = 0;
                          LODWORD(dwBytes) = 4;
                          v1117 = RtlUIntAdd(4LL, v1116, &dwBytes);
                          if ( v1117 >= 0 )
                          {
                            v1117 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                            if ( v1117 >= 0 )
                            {
                              v1117 = RtlUIntAdd((unsigned int)dwBytes, v1096[4], &dwBytes);
                              if ( v1117 >= 0 )
                              {
                                v1117 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                                if ( v1117 >= 0 )
                                {
                                  v1117 = RtlUIntAdd((unsigned int)dwBytes, v1096[8], &dwBytes);
                                  if ( v1117 >= 0 )
                                  {
                                    v1370 = dwBytes;
                                    v1119 = dwBytes;
                                    v1120 = GetProcessHeap();
                                    v1121 = HeapAlloc(v1120, 8u, v1119);
                                    if ( !v1121 )
                                    {
                                      v1115 = (void *)j;
                                      v1035 = -805306345;
                                      v13 = v1323;
                                      v979 = (void *)v1324;
                                      v1325 = (LPVOID)j;
                                      goto LABEL_1537;
                                    }
                                    *v1121 = *v1096;
                                    v1328 = v1121;
                                    v1117 = RtlULongLongAdd(v1121, 4LL, &v1328, v1122);
                                    v1124 = v1123;
                                    if ( v1117 < 0 )
                                      goto LABEL_1353;
                                    memcpy_0(v1328, *((const void **)v1096 + 1), *v1096);
                                    v1117 = RtlULongLongAdd(v1328, *v1096, &v1328, v1125);
                                    if ( v1117 < 0 )
                                      goto LABEL_1353;
                                    v1127 = v1328;
                                    *(_DWORD *)v1328 = v1096[4];
                                    v1117 = RtlULongLongAdd(v1127, 4LL, &v1328, v1126);
                                    if ( v1117 < 0
                                      || (memcpy_0(v1328, *((const void **)v1096 + 3), v1096[4]),
                                          v1117 = RtlULongLongAdd(v1328, v1096[4], &v1328, v1128),
                                          v1117 < 0)
                                      || (v1130 = v1328,
                                          *(_DWORD *)v1328 = v1096[8],
                                          v1117 = RtlULongLongAdd(v1130, 4LL, &v1328, v1129),
                                          v1117 < 0)
                                      || (memcpy_0(v1328, *((const void **)v1096 + 5), v1096[8]),
                                          v1117 = RtlULongLongAdd(v1328, v1096[8], &v1328, v1131),
                                          v1117 < 0) )
                                    {
LABEL_1353:
                                      v1132 = GetProcessHeap();
                                      HeapFree(v1132, 0, v1124);
                                      v1118 = v1324;
                                    }
                                    else
                                    {
                                      v1118 = v1324;
                                      LODWORD(v1317) = v1370;
                                      v1329 = v1124;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          v1035 = v1117 | 0x10000000;
                          v1115 = (void *)j;
                          v13 = v1323;
                          v979 = (void *)v1118;
                          v1325 = (LPVOID)j;
                          if ( v1035 < 0 )
                            goto LABEL_1537;
                          LODWORD(v1333) = 0;
                          v1365 = 8;
                          v1133 = RtlUIntAdd(8LL, (unsigned int)v1339, &v1365);
                          v1325 = v1115;
                          v1035 = v1133 | 0x10000000;
                          if ( v1133 < 0 )
                            goto LABEL_1537;
                          v1134 = (v1365 + 7) & 0xFFFFFFF8;
                          if ( (unsigned int)v1134 < v1365 )
                          {
                            v1035 = -1073741675;
                            v1325 = v1115;
                            goto LABEL_1537;
                          }
                          v1371 = (v1365 + 7) & 0xFFFFFFF8;
                          v1035 = RtlUIntAdd(v1134, 8LL, &v1371);
                          if ( v1035 >= 0 )
                          {
                            if ( v1348[1] && LODWORD(v1348[0]) > 1 )
                            {
                              v1135 = (LPVOID)v1348[1];
                              v1314 = 0;
                              v1115 = (void *)j;
                              v1325 = (LPVOID)j;
                              v1328 = (LPVOID)v1348[1];
                              do
                              {
                                v1035 = RtlULongLongAdd(v1135, 4LL, &v1328, v1115);
                                if ( v1035 < 0 )
                                  goto LABEL_1537;
                                v1035 = RtlULongLongAdd(v1328, v1136, &v1328, v1115);
                                if ( v1035 < 0 )
                                  goto LABEL_1537;
                                v1135 = v1328;
                                ++v1314;
                              }
                              while ( !v1314 );
                              v1314 = *(_DWORD *)v1328;
                              v1035 = RtlULongLongAdd(v1328, 4LL, &v1328, v1115);
                              if ( v1035 < 0 )
                                goto LABEL_1537;
                              if ( LODWORD(v1348[0]) <= 2 )
                              {
                                v1035 = -1073741811;
                                goto LABEL_1537;
                              }
                              v1138 = (_DWORD *)v1348[1];
                              v1323 = (LPVOID)v1348[1];
                              do
                              {
                                LODWORD(v1322) = *v1138;
                                j = v1137;
                                v1330 = v979;
                                v1339 = v13;
                                v1319 = v1115;
                                v1328 = v1096;
                                v1035 = RtlULongLongAdd(v1138, 4LL, &v1323, v1115);
                                if ( v1035 < 0 )
                                  goto LABEL_1537;
                                v1035 = RtlULongLongAdd(v1323, (unsigned int)v1322, &v1323, v1115);
                                if ( v1035 < 0 )
                                  goto LABEL_1537;
                                v1138 = v1323;
                              }
                              while ( (unsigned int)(v1139 + 1) < 2 );
                              v1035 = RtlULongLongAdd(v1323, 4LL, &v1323, v1115);
                              if ( v1035 < 0 )
                                goto LABEL_1537;
                              LODWORD(dwBytes) = v1140;
                              v1035 = RtlUIntAdd(v1140, v1371, &dwBytes);
                              if ( v1035 < 0 )
                                goto LABEL_1537;
                              v1035 = RtlUIntAdd((unsigned int)dwBytes, v1141, &dwBytes);
                              if ( v1035 < 0 )
                                goto LABEL_1537;
                              v1035 = RtlUIntAdd((unsigned int)dwBytes, v1314, &dwBytes);
                              if ( v1035 < 0 )
                                goto LABEL_1537;
                              v1035 = RtlUIntAdd((unsigned int)dwBytes, v1142, &dwBytes);
                              if ( v1035 < 0 )
                                goto LABEL_1537;
                              v1035 = RtlUIntAdd((unsigned int)dwBytes, v1143, &dwBytes);
                              if ( v1035 < 0 )
                                goto LABEL_1537;
                              if ( (unsigned int)dwBytes > 0x400000 )
                              {
                                v1035 = -2147418113;
                                goto LABEL_1537;
                              }
                              v1144 = dwBytes;
                              v1145 = GetProcessHeap();
                              v1146 = 0LL;
                              v1334 = HeapAlloc(v1145, 8u, v1144);
                              if ( !v1334 )
                              {
                                v1334 = 0LL;
                                v1035 = -805306345;
                                goto LABEL_1534;
                              }
                              v1147 = (void *)j;
                              hModule = 0LL;
                              v1380 = 0LL;
                              v1381 = 0LL;
                              if ( !j )
                              {
                                v1035 = -2147024809;
                                v1321 = v1328;
LABEL_1387:
                                v1115 = v1319;
                                v13 = v1339;
                                v979 = v1330;
                                v1325 = v1319;
LABEL_1388:
                                v1329 = v1147;
                                goto LABEL_1537;
                              }
                              LODWORD(v1381) = v1317;
                              *(_QWORD *)&v1380 = j;
                              *((_QWORD *)&v1380 + 1) = v1334;
                              *(_QWORD *)((char *)&v1381 + 4) = v1144;
                              if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                && (v1149 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                              {
                                v1150 = ((__int64 (__fastcall *)(__int64, __int128 *))v1149)(134LL, &v1380);
                                LODWORD(v1326) = v1144;
                                v1035 = v1150 | 0x10000000;
                                if ( v1150 >= 0 )
                                {
                                  v1151 = DWORD1(v1381);
                                  v1152 = v1328;
                                  v1153 = v1319;
                                  v1154 = v1339;
                                  v1155 = v1330;
                                  goto LABEL_1401;
                                }
                              }
                              else
                              {
                                v1148 = GetLastError();
                                v1035 = v1148;
                                if ( v1148 > 0 )
                                  v1035 = (unsigned __int16)v1148 | 0x80070000;
                                LODWORD(v1326) = v1144;
                                if ( v1035 >= 0 )
                                {
                                  v1035 = -2147467259;
                                  LODWORD(v1326) = v1144;
                                }
                              }
                              v1329 = v1147;
                              if ( v1035 == -805306333 )
                              {
                                v1035 = -2147024774;
                                v1115 = v1319;
                                v13 = v1339;
                                v979 = v1330;
                                v1321 = v1328;
                                v1325 = v1319;
                                goto LABEL_1537;
                              }
                              v1153 = v1319;
                              v1152 = v1328;
                              v1115 = v1319;
                              v1154 = v1339;
                              v1155 = v1330;
                              v13 = v1339;
                              v1321 = v1328;
                              v979 = v1330;
                              v1325 = v1319;
                              if ( v1035 < 0 )
                              {
LABEL_1537:
                                if ( !v1115 )
                                {
LABEL_1539:
                                  v1281 = v1321;
                                  if ( v1321 )
                                  {
                                    v1282 = (void *)*((_QWORD *)v1321 + 1);
                                    if ( v1282 )
                                    {
                                      v1283 = GetProcessHeap();
                                      HeapFree(v1283, 0, v1282);
                                      v1281[1] = 0LL;
                                    }
                                    v1284 = (void *)v1281[3];
                                    if ( v1284 )
                                    {
                                      v1285 = GetProcessHeap();
                                      HeapFree(v1285, 0, v1284);
                                      v1281[3] = 0LL;
                                    }
                                    v1286 = (void *)v1281[5];
                                    if ( v1286 )
                                    {
                                      v1287 = GetProcessHeap();
                                      HeapFree(v1287, 0, v1286);
                                      v1281[5] = 0LL;
                                    }
                                    v1288 = GetProcessHeap();
                                    HeapFree(v1288, 0, v1281);
                                  }
                                  v1289 = v1329;
                                  if ( v1329 )
                                  {
                                    v1290 = GetProcessHeap();
                                    HeapFree(v1290, 0, v1289);
                                  }
                                  v1291 = v1334;
                                  if ( v1334 )
                                  {
                                    v1292 = GetProcessHeap();
                                    HeapFree(v1292, 0, v1291);
                                  }
                                  v1293 = (_QWORD *)v1327;
                                  if ( v1327 )
                                  {
                                    v1294 = *(void **)(v1327 + 8);
                                    if ( v1294 )
                                    {
                                      v1295 = GetProcessHeap();
                                      HeapFree(v1295, 0, v1294);
                                      v1293[1] = 0LL;
                                    }
                                    v1296 = (void *)v1293[3];
                                    if ( v1296 )
                                    {
                                      v1297 = GetProcessHeap();
                                      HeapFree(v1297, 0, v1296);
                                      v1293[3] = 0LL;
                                    }
                                    v1298 = (void *)v1293[5];
                                    if ( v1298 )
                                    {
                                      v1299 = GetProcessHeap();
                                      HeapFree(v1299, 0, v1298);
                                      v1293[5] = 0LL;
                                    }
                                    v1300 = GetProcessHeap();
                                    HeapFree(v1300, 0, v1293);
                                  }
                                  v1301 = (WCHAR *)lpModuleName;
                                  if ( lpModuleName )
                                  {
                                    v1302 = GetProcessHeap();
                                    HeapFree(v1302, 0, v1301);
                                  }
LABEL_1561:
                                  v196 = v1035 < 0;
                                  v972 = v1331;
                                  if ( !v196 )
                                  {
                                    v1303 = v1343;
                                    if ( v1343 )
                                    {
                                      if ( v1331 )
                                      {
                                        lpMem = v1331;
                                        if ( (int)RtlULongLongAdd(v1331, 4LL, &lpMem, v1331) >= 0 )
                                        {
                                          v1306 = (int *)lpMem;
                                          if ( !v1305 )
                                            v1306 = 0LL;
                                          if ( v1305 == 4 && *v1306 >= 0 && v1303 > 1 )
                                          {
                                            for ( j = (SIZE_T)v972;
                                                  (int)RtlULongLongAdd(v1304, 4LL, &j, v1304) >= 0
                                               && (int)RtlULongLongAdd(j, *v1307, &j, v1307) >= 0;
                                                  v1304 = j )
                                            {
                                              if ( v1309 != -1 )
                                              {
                                                RtlULongLongAdd(j, 4LL, &j, v1308);
                                                goto LABEL_1234;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto LABEL_1234;
                                }
LABEL_1538:
                                v1280 = GetProcessHeap();
                                HeapFree(v1280, 0, v1325);
                                goto LABEL_1539;
                              }
                              v1151 = (unsigned int)v1326;
                              v1146 = 0LL;
LABEL_1401:
                              LODWORD(dwBytes) = 0;
                              v1323 = v1334;
                              if ( (unsigned int)v1151 < 4 )
                              {
                                v1035 = -805306306;
                                v1321 = v1152;
                                v1115 = v1153;
                                v1325 = v1153;
                                v13 = v1154;
                                v979 = v1155;
                                goto LABEL_1388;
                              }
                              v1156 = *(unsigned int *)v1334;
                              v1314 = *(_DWORD *)v1334;
                              v1157 = RtlULongLongAdd(v1334, 4LL, &v1323, v1151);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              v1157 = RtlUIntAdd(0LL, 4LL, &dwBytes);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              if ( (int)v1158 - (int)dwBytes < (unsigned int)v1156 )
                              {
LABEL_1406:
                                v1035 = -805306306;
                                v1321 = v1159;
                                goto LABEL_1387;
                              }
                              lpMem = v1323;
                              v1157 = RtlULongLongAdd(v1323, v1156, &v1323, v1158);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              v1157 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1156, &dwBytes);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              if ( (int)v1160 - (int)dwBytes < (unsigned int)v1161 )
                                goto LABEL_1406;
                              v1162 = *(unsigned int *)v1323;
                              v1157 = RtlULongLongAdd(v1323, v1161, &v1323, v1160);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              v1157 = RtlUIntAdd((unsigned int)dwBytes, v1163, &dwBytes);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              if ( (int)v1164 - (int)dwBytes < (unsigned int)v1162 )
                                goto LABEL_1406;
                              pcchLength = (size_t)v1323;
                              v1157 = RtlULongLongAdd(v1323, (unsigned int)v1162, &v1323, v1164);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              v1157 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1162, &dwBytes);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              if ( (int)v1165 - (int)dwBytes < v1166 )
                                goto LABEL_1406;
                              LODWORD(v1322) = *(_DWORD *)v1323;
                              v1157 = RtlULongLongAdd(v1323, 4LL, &v1323, v1165);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              v1157 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                              if ( v1157 < 0 )
                                goto LABEL_1445;
                              if ( v1167 - (int)dwBytes < v1168 )
                                goto LABEL_1406;
                              v1157 = RtlUIntAdd((unsigned int)dwBytes, v1168, &dwBytes);
                              if ( v1157 < 0 )
                              {
LABEL_1445:
                                v1191 = (unsigned int *)v1327;
                                goto LABEL_1448;
                              }
                              if ( v1169 != (_DWORD)dwBytes || v1314 + (_DWORD)v1162 + v1170 + 12LL != v1169 )
                                goto LABEL_1406;
                              v1171 = GetProcessHeap();
                              v1172 = HeapAlloc(v1171, 8u, 0x30uLL);
                              if ( v1172 )
                              {
                                v1157 = 0;
                                if ( lpMem )
                                {
                                  v1173 = v1314;
                                  *(_DWORD *)v1172 = v1314;
                                  v1174 = v1173;
                                  v1344 = v1173;
                                  v1175 = GetProcessHeap();
                                  v1176 = HeapAlloc(v1175, 8u, v1174);
                                  if ( !v1176 )
                                    goto LABEL_1433;
                                  v1172[1] = v1176;
                                  v1157 = 0;
                                  memcpy_0(v1176, lpMem, v1344);
                                }
                                else
                                {
                                  *(_DWORD *)v1172 = 0;
                                  v1172[1] = 0LL;
                                }
                                if ( !pcchLength )
                                {
                                  *((_DWORD *)v1172 + 4) = 0;
                                  v1172[3] = 0LL;
LABEL_1431:
                                  v1179 = v1323;
                                  if ( v1323 )
                                  {
                                    v1180 = (unsigned int)v1322;
                                    *((_DWORD *)v1172 + 8) = v1322;
                                    v1181 = v1180;
                                    v1344 = v1180;
                                    v1182 = GetProcessHeap();
                                    v1183 = HeapAlloc(v1182, 8u, v1181);
                                    if ( !v1183 )
                                      goto LABEL_1433;
                                    v1172[5] = v1183;
                                    v1157 = 0;
                                    memcpy_0(v1183, v1179, v1344);
                                  }
                                  else
                                  {
                                    *((_DWORD *)v1172 + 8) = 0;
                                    v1172[5] = 0LL;
                                  }
                                  v1146 = v1172;
                                  goto LABEL_1443;
                                }
                                *((_DWORD *)v1172 + 4) = v1162;
                                v1177 = GetProcessHeap();
                                v1178 = HeapAlloc(v1177, 8u, v1162);
                                if ( v1178 )
                                {
                                  v1172[3] = v1178;
                                  v1157 = 0;
                                  memcpy_0(v1178, (const void *)pcchLength, v1162);
                                  goto LABEL_1431;
                                }
LABEL_1433:
                                v1157 = -1073741801;
                                v1184 = (void *)v1172[1];
                                if ( v1184 )
                                {
                                  v1185 = GetProcessHeap();
                                  HeapFree(v1185, 0, v1184);
                                  v1172[1] = 0LL;
                                }
                                v1186 = (void *)v1172[3];
                                if ( v1186 )
                                {
                                  v1187 = GetProcessHeap();
                                  HeapFree(v1187, 0, v1186);
                                  v1172[3] = 0LL;
                                }
                                v1188 = (void *)v1172[5];
                                if ( v1188 )
                                {
                                  v1189 = GetProcessHeap();
                                  HeapFree(v1189, 0, v1188);
                                  v1172[5] = 0LL;
                                }
                                v1190 = GetProcessHeap();
                                HeapFree(v1190, 0, v1172);
LABEL_1443:
                                if ( v1157 < 0 )
                                {
                                  v1191 = 0LL;
                                  v1327 = 0LL;
                                  if ( !v1146 )
                                    goto LABEL_1447;
                                  v1192 = (void *)v1146[1];
                                  if ( v1192 )
                                  {
                                    v1193 = GetProcessHeap();
                                    HeapFree(v1193, 0, v1192);
                                    v1146[1] = 0LL;
                                  }
                                  v1194 = (void *)v1146[3];
                                  if ( v1194 )
                                  {
                                    v1195 = GetProcessHeap();
                                    HeapFree(v1195, 0, v1194);
                                    v1146[3] = 0LL;
                                  }
                                  v1196 = (void *)v1146[5];
                                  if ( v1196 )
                                  {
                                    v1197 = GetProcessHeap();
                                    HeapFree(v1197, 0, v1196);
                                    v1146[5] = 0LL;
                                  }
                                  v1198 = GetProcessHeap();
                                  HeapFree(v1198, 0, v1146);
                                  v1191 = 0LL;
                                }
                                else
                                {
                                  v1191 = (unsigned int *)v1146;
                                }
                                v1327 = (SIZE_T)v1191;
LABEL_1447:
                                v1147 = (void *)j;
LABEL_1448:
                                v1035 = v1157 | 0x10000000;
                                v1115 = v1319;
                                v13 = v1339;
                                v1321 = v1328;
                                v979 = v1330;
                                v1325 = v1319;
                                v1329 = v1147;
                                if ( v1035 < 0 )
                                  goto LABEL_1537;
                                if ( !v1191 )
                                  goto LABEL_1450;
                                v1349 = *((_QWORD *)v1191 + 1);
                                if ( !v1349 || !*v1191 )
                                {
                                  v1115 = v1319;
LABEL_1450:
                                  v1321 = v1328;
                                  v1035 = -805306355;
                                  v1325 = v1319;
                                  goto LABEL_1388;
                                }
                                v1333 = *v1191 - 8LL;
                                v1199 = MemoryAlloc(v1333);
                                v1200 = v1319;
                                v1201 = v1328;
                                v1115 = v1319;
                                v1321 = v1328;
                                v1202 = v13;
                                v1325 = v1319;
                                v1203 = v979;
                                v1346 = v1199;
                                v1329 = v1147;
                                if ( !v1199 )
                                {
LABEL_1491:
                                  v1035 = -805306367;
                                  lpModuleName = 0LL;
                                  goto LABEL_1537;
                                }
                                v1204 = 0;
                                v1336 = v1349;
                                v1205 = v1328;
                                pcchLength = (size_t)v1199;
                                v1206 = v1319;
                                v1329 = (LPVOID)j;
                                v1315 = 0;
                                v1323 = (LPVOID)0x7F1137FAB69605ELL;
                                v1344 = v1333 & 7;
                                LODWORD(v1326) = 0;
                                v1321 = v1328;
                                v1325 = v1319;
                                if ( (v1333 & 7) != 0 )
                                {
                                  v1358 = 0;
                                  LODWORD(v1317) = 0;
                                  v1319 = v13;
                                  v1328 = v979;
                                  v1207 = (unsigned __int8 *)v1336;
                                  v1208 = v1326;
                                  v1329 = (LPVOID)j;
                                  do
                                  {
                                    v13 = v1202;
                                    v1319 = v1202;
                                    v1209 = v1200;
                                    v1325 = v1200;
                                    v1205 = v1201;
                                    v1210 = *v1207;
                                    v979 = v1203;
                                    v1321 = v1201;
                                    v1211 = v1350;
                                    v1328 = v1203;
                                    if ( (unsigned int)v1317 >= 4 )
                                    {
                                      v1358 |= v1210 << v1350;
                                    }
                                    else
                                    {
                                      v1211 = v1350;
                                      v1208 |= v1210 << (v1350 - 32);
                                    }
                                    LODWORD(v1317) = v1317 + 1;
                                    ++v1207;
                                    v1200 = v1209;
                                    v1350 = v1211 - 8;
                                    v1201 = v1205;
                                  }
                                  while ( (int)v1317 < (unsigned __int8)(v1333 & 7) );
                                  LODWORD(v1326) = v1208;
                                  v209 = Size;
                                  v1336 = (SIZE_T)v1207;
                                  v1204 = v1315;
                                  v1206 = v1209;
                                  v1212 = v1326 ^ 0x92F65A5;
                                  v1213 = v1344;
                                  v1214 = v1358 ^ 0x699A899C;
                                  LODWORD(v1322) = 0;
                                  v1215 = v1326 ^ 0x92F65A5;
                                  v1216 = v1358 ^ 0x699A899C;
                                  if ( (_DWORD)v1344 )
                                  {
                                    v1217 = (_BYTE *)pcchLength;
                                    v1218 = v1322;
                                    do
                                    {
                                      if ( v1218 >= 4 )
                                      {
                                        v1216 = __ROR4__(v1216, 24);
                                        v1314 = v1216;
                                      }
                                      else
                                      {
                                        v1215 = __ROR4__(v1215, 24);
                                        v1314 = v1215;
                                      }
                                      ++v1218;
                                      lpMem = v1217 + 1;
                                      *v1217 = v1314;
                                      v1217 = lpMem;
                                    }
                                    while ( (int)v1218 < (int)v1213 );
                                    v1204 = v1315;
                                    v1219 = (size_t)lpMem;
                                  }
                                  else
                                  {
                                    v1219 = pcchLength;
                                  }
                                  if ( v1213 <= 4 )
                                  {
                                    v1220 = 0;
                                    if ( v1213 < 4 )
                                      v1212 = v1212 >> (8 * (4 - v1213)) << (8 * (4 - v1213));
                                  }
                                  else
                                  {
                                    v1220 = v1214 >> (8 * (8 - v1213)) << (8 * (8 - v1213));
                                  }
                                }
                                else
                                {
                                  v1220 = 0;
                                  LODWORD(v1322) = 0;
                                  v1319 = v13;
                                  v1212 = 0;
                                  v1219 = pcchLength;
                                  v1328 = v979;
                                }
                                v1221 = v1333;
                                v1344 = v1333 >> 3;
                                if ( v1333 >> 3 )
                                {
                                  v1222 = HIDWORD(v1323);
                                  v1223 = (_BYTE *)(v1219 + 7);
                                  v1224 = WORD1(v1323);
                                  v1225 = v1326;
                                  v1226 = v1344;
                                  LODWORD(v1317) = WORD2(v1323);
                                  v1227 = WORD2(v1323);
                                  LODWORD(dwBytes) = 24670;
                                  LODWORD(v1322) = HIDWORD(v1323) ^ 0xAB69605E;
                                  v1228 = (unsigned __int8 *)(v1336 + 2);
                                  do
                                  {
                                    v1229 = *(v1228 - 1) | (*(v1228 - 2) << 8);
                                    v1230 = v1228[2] << 8;
                                    v1231 = *v1228;
                                    v1228 += 8;
                                    v1232 = *(v1228 - 7) | ((v1231 | (v1229 << 8)) << 8);
                                    v1233 = v1232 ^ v1212;
                                    v1234 = *(v1228 - 3) | ((*(v1228 - 4) | ((*(v1228 - 5) | v1230) << 8)) << 8);
                                    v1235 = v1234 ^ v1233 ^ v1220 ^ v1222 ^ 0xAB69605E;
                                    v1236 = v1233 ^ (__ROR4__(v1235, 22) + v1227 * __ROR4__(v1235 + 1419157410, 27));
                                    v1237 = v1235 ^ (v1224 * __ROR4__(v1222 + v1236, 9) - __ROR4__(v1236, 30));
                                    v1238 = v1236 ^ (dwBytes * (v1237 - v1227) - (v1237 >> 13));
                                    v1239 = v1237 ^ (HIWORD(v1323) * __ROR4__(v1238 ^ WORD1(v1323), 26)
                                                   - __ROR4__(v1238, 30));
                                    v1240 = v1238 ^ (v1222 - (v1239 ^ 0xAB69605E));
                                    v1241 = v1239 ^ (WORD1(v1323) * (v1227 ^ v1240)) ^ __ROR4__(v1240, 6);
                                    v1242 = v1240 ^ (__ROR4__(v1241, 30) + dwBytes * __ROR4__(v1222 + v1241, 15));
                                    v1243 = v1241 ^ (HIWORD(v1323) * __ROR4__(v1242 + 1419157410, 14)
                                                   - __ROR4__(v1242, 24));
                                    v1244 = v1242 ^ __ROR4__(v1243, 10) ^ (v1317 * __ROR4__(v1243 ^ 0xAB69605E, 12));
                                    v1245 = v1243 ^ (v1244 >> 10) ^ (WORD1(v1323) * (v1244 ^ HIWORD(v1323)));
                                    v1227 = v1317;
                                    v1246 = v1244 ^ (HIWORD(v1323) * (dwBytes + __ROR4__(~v1245, 5)));
                                    v1247 = v1245 ^ (v1246 - HIWORD(v1323)) ^ 0xAB69605E;
                                    v1248 = v1246 ^ ((v1247 >> 2) + v1317 * __ROR4__(HIWORD(v1323) ^ v1247, 30));
                                    v1249 = v1247 ^ (__ROR4__(v1248, 25) + WORD1(v1323) * __ROR4__(v1248 - v1222, 6));
                                    v1250 = v1248 ^ (dwBytes * (v1317 ^ v1249) + __ROR4__(v1249, 9));
                                    v1251 = v1249 ^ (__ROR4__(v1250, 25)
                                                   + HIWORD(v1323) * __ROR4__(WORD1(v1323) ^ v1250, 27));
                                    v1252 = v1250 ^ v1251 ^ v1322;
                                    v1253 = v1251 ^ (v1317 * (__ROR4__(v1252, 3) - WORD1(v1323)));
                                    v1254 = v1252 ^ (dwBytes * __ROR4__(v1253 - v1222, 1) - __ROR4__(v1253, 6));
                                    v1255 = v1253 ^ (__ROR4__(v1254, 18)
                                                   + HIWORD(v1323) * __ROR4__(v1254 - 1419157410, 29));
                                    v1256 = v1254 ^ (v1317 * __ROR4__(v1255 - 1419157410, 17) - __ROR4__(v1255, 14));
                                    v1257 = v1255 ^ (v1256 >> 3) ^ (WORD1(v1323) * (dwBytes ^ v1256));
                                    v1224 = WORD1(v1323);
                                    v1258 = v1225 ^ __ROR4__(v1257, 30) ^ (dwBytes * __ROR4__(v1257 ^ v1222, 28));
                                    v1225 = v1232;
                                    v1212 = v1256 ^ v1258;
                                    v1220 = v1257 ^ v1358;
                                    *(v1223 - 4) = v1212;
                                    *v1223 = v1220;
                                    *(v1223 - 5) = __ROR4__(v1212, 8);
                                    v1223 += 8;
                                    v1358 = v1234;
                                    *(v1223 - 9) = __ROR4__(v1220, 8);
                                    *(v1223 - 14) = __ROR4__(v1212, 16);
                                    *(v1223 - 10) = __ROR4__(v1220, 16);
                                    *(v1223 - 15) = __ROR4__(v1212, 24);
                                    *(v1223 - 11) = __ROR4__(v1220, 24);
                                    --v1226;
                                  }
                                  while ( v1226 );
                                  v1204 = v1315;
                                  v209 = Size;
                                  v979 = v1328;
                                  v13 = v1319;
                                  v1205 = v1321;
                                  v1206 = v1325;
                                  v1221 = v1333;
                                }
                                v1259 = (const WCHAR *)v1346;
                                for ( k = 0LL; k < v1221; ++k )
                                  v1204 ^= *((_BYTE *)v1346 + k);
                                j = (SIZE_T)v1334;
                                v1324 = v1327;
                                if ( v1204 != *(_QWORD *)(v1221 + v1349) )
                                {
                                  MemoryFree(v1346);
                                  v1115 = v1325;
                                  goto LABEL_1491;
                                }
                                v1323 = v1346;
                                v1261 = v1206;
                                LODWORD(dwBytes) = 0;
                                if ( (unsigned int)v1221 < 4 )
                                  goto LABEL_1529;
                                LODWORD(v1322) = *(_DWORD *)v1346;
                                v1262 = RtlULongLongAdd(v1346, 4LL, &v1323, v1327);
                                v1327 = v1263;
                                v1115 = v1261;
                                v1334 = (LPVOID)j;
                                v13 = v1264;
                                lpModuleName = v1265;
                                v1321 = v1205;
                                v1325 = v1261;
                                if ( v1262 < 0 )
                                  goto LABEL_1532;
                                v1262 = RtlUIntAdd(0LL, 4LL, &dwBytes);
                                v1327 = v1324;
                                lpModuleName = v1259;
                                v1334 = (LPVOID)j;
                                v1321 = v1205;
                                v1325 = v1261;
                                if ( v1262 < 0 )
                                  goto LABEL_1532;
                                if ( (unsigned int)(v1333 - dwBytes) < 4 )
                                {
                                  v1327 = v1324;
                                  v1334 = (LPVOID)j;
LABEL_1530:
                                  v1325 = v1261;
                                  v1321 = v1205;
                                  lpModuleName = v1259;
LABEL_1531:
                                  v1262 = -1073741762;
                                  goto LABEL_1532;
                                }
                                LODWORD(v1326) = *(_DWORD *)v1323;
                                v1262 = RtlULongLongAdd(v1323, 4LL, &v1323, v1115);
                                lpModuleName = v1266;
                                v1327 = v1324;
                                v1334 = (LPVOID)j;
                                v1321 = v1205;
                                v1325 = v1261;
                                if ( v1262 < 0 )
                                  goto LABEL_1532;
                                v1262 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                                v1327 = v1324;
                                lpModuleName = v1259;
                                v1334 = (LPVOID)j;
                                v1321 = v1205;
                                v1325 = v1261;
                                if ( v1262 < 0 )
                                  goto LABEL_1532;
                                if ( (int)v1333 - (int)dwBytes < (unsigned int)v1326 )
                                {
                                  v1327 = v1324;
                                  v1334 = (LPVOID)j;
LABEL_1529:
                                  v1115 = v1261;
                                  goto LABEL_1530;
                                }
                                v1262 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1326, &dwBytes);
                                v1115 = v1261;
                                v1334 = (LPVOID)j;
                                lpModuleName = v1259;
                                v1327 = v1324;
                                v1321 = v1205;
                                v1325 = v1261;
                                if ( v1262 >= 0 )
                                {
                                  if ( (char *)v1259 + (unsigned int)v1333 < (char *)v1323 + (unsigned int)v1326
                                    || (unsigned __int64)v1259
                                     + (unsigned int)v1333
                                     - (unsigned __int64)(unsigned int)v1326
                                     - (_QWORD)v1323 >= 8 )
                                  {
                                    v1334 = (LPVOID)j;
                                    v1327 = v1324;
                                    goto LABEL_1529;
                                  }
                                  lpModuleName = v1259;
                                  v1349 = 0LL;
                                  v1267 = 0LL;
                                  v1319 = 0LL;
                                  v1262 = 0;
                                  v1347 = 0LL;
                                  v1339 = 0LL;
                                  LODWORD(v1317) = 0;
                                  v1334 = (LPVOID)j;
                                  v1327 = v1324;
                                  v1321 = v1205;
                                  v1325 = v1261;
                                  if ( v1323 )
                                  {
                                    v1333 = (SIZE_T)v1323;
                                    v1262 = RtlULongLongAdd(v1323, (unsigned int)v1326, &v1319, 0LL);
                                    lpModuleName = v1268;
                                    v1115 = v1261;
                                    v1327 = v1324;
                                    v1334 = (LPVOID)j;
                                    v1321 = v1205;
                                    v1325 = v1261;
                                    if ( v1262 < 0 )
                                      goto LABEL_1532;
                                    v1269 = v1333;
                                    lpModuleName = v1268;
                                    v1327 = v1324;
                                    v1334 = (LPVOID)j;
                                    v1321 = v1205;
                                    v1325 = v1261;
                                    if ( v1333 < (unsigned __int64)v1319 )
                                    {
                                      v1270 = (void *)v1268;
                                      lpModuleName = v1268;
                                      v1271 = j;
                                      v1327 = v1324;
                                      v1272 = v1324;
                                      v1334 = (LPVOID)j;
                                      v1321 = v1205;
                                      v1325 = v1115;
                                      while ( 1 )
                                      {
                                        pcchLength = v1271;
                                        v1346 = v1270;
                                        v1262 = RtlULongLongAdd(v1269, 4LL, &v1347, v1115);
                                        if ( v1262 < 0 )
                                          goto LABEL_1532;
                                        if ( v1347 > v1319 )
                                          goto LABEL_1516;
                                        v1314 = 0;
                                        v1262 = RtlUIntAdd(4LL, *(unsigned int *)v1333, &v1314);
                                        if ( v1262 < 0 )
                                          goto LABEL_1532;
                                        v1262 = RtlULongLongAdd(v1273, v1314, &v1339, v1115);
                                        lpModuleName = v1274;
                                        v1327 = v1272;
                                        v1334 = (LPVOID)pcchLength;
                                        v1321 = v1205;
                                        v1325 = v1115;
                                        if ( v1262 < 0 )
                                          goto LABEL_1532;
                                        v1269 = (SIZE_T)v1339;
                                        v1275 = v1319;
                                        v1333 = (SIZE_T)v1339;
                                        v1327 = v1272;
                                        v1321 = v1205;
                                        if ( v1339 > v1319 )
                                        {
                                          v1262 = -1073741811;
                                          lpModuleName = (LPCWSTR)v1346;
                                          v1334 = (LPVOID)pcchLength;
                                          v1325 = v1115;
                                          goto LABEL_1532;
                                        }
                                        LODWORD(v1317) = v1317 + 1;
                                        v1270 = v1346;
                                        v1271 = pcchLength;
                                        lpModuleName = (LPCWSTR)v1346;
                                        v1334 = (LPVOID)pcchLength;
                                        v1325 = v1115;
                                        if ( v1339 >= v1319 )
                                        {
                                          lpModuleName = (LPCWSTR)v1346;
                                          v1327 = v1272;
                                          v1334 = (LPVOID)pcchLength;
                                          v1321 = v1205;
                                          v1325 = v1115;
                                          goto LABEL_1518;
                                        }
                                      }
                                    }
                                    v1275 = v1319;
LABEL_1518:
                                    if ( (void *)v1269 != v1275 )
                                    {
LABEL_1516:
                                      v1262 = -1073741811;
                                      goto LABEL_1532;
                                    }
                                    v1267 = (void *)v1349;
                                  }
                                  v1276 = v1326;
                                  if ( !(_DWORD)v1326 )
                                    goto LABEL_1523;
                                  v1277 = v1326;
                                  v1278 = GetProcessHeap();
                                  v1279 = HeapAlloc(v1278, 8u, v1277);
                                  v1262 = 0;
                                  v1349 = (SIZE_T)v1279;
                                  v1267 = v1279;
                                  if ( v1279 )
                                  {
                                    v1276 = v1326;
LABEL_1523:
                                    if ( v1323 )
                                    {
                                      memcpy_0(v1267, v1323, v1276);
                                      v1267 = (void *)v1349;
                                    }
                                    v1331 = v1267;
                                    v1115 = v1325;
                                    v1343 = v1317;
                                    if ( (_DWORD)v1322 == (_DWORD)v1317 )
                                      goto LABEL_1532;
                                    goto LABEL_1531;
                                  }
                                  v1115 = v1325;
                                  v1331 = 0LL;
                                  v1343 = 0;
                                  v1262 = -1073741801;
                                }
LABEL_1532:
                                v1035 = v1262 | 0x10000000;
                                goto LABEL_1537;
                              }
                              v1327 = 0LL;
                              v1035 = -805306345;
LABEL_1534:
                              v1115 = v1319;
                              v13 = v1339;
                              v979 = v1330;
                              v1321 = v1328;
                              v1329 = (LPVOID)j;
                              v1325 = v1319;
                              goto LABEL_1537;
                            }
                            v1035 = -1073741811;
                          }
                          v1115 = (void *)j;
                          v1325 = (LPVOID)j;
                          goto LABEL_1537;
                        }
                      }
                    }
                    v1101 = -1073741801;
                    v1344 = *((_QWORD *)v1096 + 1);
                    if ( v1344 )
                    {
                      v1104 = GetProcessHeap();
                      HeapFree(v1104, 0, (LPVOID)v1344);
                      *((_QWORD *)v1096 + 1) = 0LL;
                    }
                    v1344 = *((_QWORD *)v1096 + 3);
                    if ( v1344 )
                    {
                      v1105 = GetProcessHeap();
                      HeapFree(v1105, 0, (LPVOID)v1344);
                      *((_QWORD *)v1096 + 3) = 0LL;
                    }
                    v1344 = *((_QWORD *)v1096 + 5);
                    if ( v1344 )
                    {
                      v1106 = GetProcessHeap();
                      HeapFree(v1106, 0, (LPVOID)v1344);
                      *((_QWORD *)v1096 + 5) = 0LL;
                    }
                    v1107 = GetProcessHeap();
                    HeapFree(v1107, 0, v1096);
                  }
                  else
                  {
                    v1101 = -1073741801;
                  }
                  v1096 = (unsigned int *)v1321;
                  goto LABEL_1329;
                }
LABEL_1233:
                v972 = v1331;
                goto LABEL_1234;
              }
            }
            goto LABEL_1230;
          }
          v972 = 0LL;
LABEL_1234:
          v1348[0] = 0LL;
          v993 = (void *)v1348[1];
          if ( v1348[1] )
          {
            v994 = GetProcessHeap();
            HeapFree(v994, 0, v993);
            v1348[1] = 0LL;
          }
          if ( v972 )
          {
            v995 = GetProcessHeap();
            HeapFree(v995, 0, v972);
          }
          if ( v979 )
          {
            v996 = GetProcessHeap();
            HeapFree(v996, 0, v979);
          }
          if ( v13 )
          {
            v997 = GetProcessHeap();
            HeapFree(v997, 0, v13);
          }
          v140 = 1;
          goto LABEL_1243;
        }
        while ( 1 )
        {
          v999 = *v998;
          v1314 = 0;
          if ( (int)RtlUIntAdd(4LL, v999, &v1314) < 0 || (int)RtlULongLongAdd(v1000, v1314, &pcchLength, v1000) < 0 )
            break;
          v998 = (unsigned int *)pcchLength;
          LODWORD(v1317) = v1317 + 1;
          v1319 = v13;
          v1328 = v974;
          if ( (unsigned int)v1317 >= v1001 )
            goto LABEL_1248;
        }
      }
LABEL_1230:
      v972 = 0LL;
      goto LABEL_1234;
    }
    j = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
    if ( !j )
    {
      GetLastError();
      goto LABEL_1210;
    }
    v618 = off_1808D13D8[0]();
    v92 = dword_1808DA538;
    qword_1808DDD48 = v618;
    LODWORD(dwBytes) = dword_1808DA538;
    memset_0(&v1393, 0, 0x70uLL);
    v1323 = 0LL;
    memset(v1443, 0, 44);
    v1360 = 0LL;
    pcchLength = 0LL;
    while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
      ;
    v619 = dword_1808DDD3C;
    if ( dword_1808DDD3C )
      goto LABEL_767;
    LODWORD(v1327) = 0;
    LODWORD(lpModuleName) = 0;
    v620 = (unsigned __int16 *)MemoryAlloc(0x338uLL);
    Ptr = v620;
    if ( !v620 )
      goto LABEL_742;
    v1314 = -1;
    v621 = (char *)v620 + 7;
    v622 = -1;
    v623 = (unsigned __int8 *)&unk_180783012;
    v624 = 0;
    v625 = 103LL;
    v626 = 0;
    v627 = 0;
    do
    {
      v628 = *(v623 - 1) | (*(v623 - 2) << 8);
      v629 = v623[2] << 8;
      v630 = *v623;
      v623 += 8;
      v631 = *(v623 - 7) | ((v630 | (v628 << 8)) << 8);
      v632 = v627 ^ v631;
      v633 = *(v623 - 3) | ((*(v623 - 4) | ((*(v623 - 5) | v629) << 8)) << 8);
      v634 = v627 ^ v631 ^ v626 ^ v633 ^ 0xAC987321;
      v635 = v632 ^ (__ROR4__(v634, 22) + 4991 * __ROR4__(v634 + 1419157410, 27));
      v636 = v634 ^ (43881 * __ROR4__(v635 + 133239679, 9) - __ROR4__(v635, 30));
      v637 = v635 ^ (24670 * v636 - (v636 >> 13) - 123127970);
      v638 = v636 ^ (2033 * __ROR4__(v637 ^ 0xAB69, 26) - __ROR4__(v637, 30));
      v639 = v637 ^ (133239679 - (v638 ^ 0xAB69605E));
      v640 = v638 ^ (43881 * (v639 ^ 0x137F)) ^ __ROR4__(v639, 6);
      v641 = v639 ^ (__ROR4__(v640, 30) + 24670 * __ROR4__(v640 + 133239679, 15));
      v642 = v640 ^ (2033 * __ROR4__(v641 + 1419157410, 14) - __ROR4__(v641, 24));
      v643 = v641 ^ __ROR4__(v642, 10) ^ (4991 * __ROR4__(v642 ^ 0xAB69605E, 12));
      v644 = v642 ^ (v643 >> 10) ^ (43881 * (v643 ^ 0x7F1));
      v645 = v643 ^ (2033 * (__ROR4__(~v644, 5) + 24670));
      v646 = v645 ^ (((v644 ^ (v645 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v644 ^ (v645 - 2033) ^ 0xAB6967AF, 30));
      v647 = v644 ^ (v645 - 2033) ^ 0xAB69605E ^ (__ROR4__(v646, 25) + 43881 * __ROR4__(v646 - 133239679, 6));
      v648 = v646 ^ (24670 * (v647 ^ 0x137F) + __ROR4__(v647, 9));
      v649 = v647 ^ (__ROR4__(v648, 25) + 2033 * __ROR4__(v648 ^ 0xAB69, 27));
      v650 = v648 ^ v649 ^ 0xAC987321;
      v651 = v649 ^ (4991 * __ROR4__(v650, 3) - 219010071);
      v652 = v650 ^ (24670 * __ROR4__(v651 - 133239679, 1) - __ROR4__(v651, 6));
      v653 = v651 ^ (__ROR4__(v652, 18) + 2033 * __ROR4__(v652 - 1419157410, 29));
      v654 = v652 ^ (4991 * __ROR4__(v653 - 1419157410, 17) - __ROR4__(v653, 14));
      v655 = v653 ^ (v654 >> 3) ^ (43881 * (v654 ^ 0x605E));
      v656 = __ROR4__(v655, 30);
      v626 = v622 ^ v655;
      v622 = v633;
      v627 = v624 ^ v654 ^ v656 ^ (24670 * __ROR4__(v653 ^ (v654 >> 3) ^ (43881 * (v654 ^ 0x605E)) ^ 0x7F1137F, 28));
      v624 = v631;
      *(v621 - 4) = v627;
      *v621 = v626;
      *(v621 - 5) = __ROR4__(v627, 8);
      v621 += 8;
      *(v621 - 9) = __ROR4__(v626, 8);
      *(v621 - 14) = __ROR4__(v627, 16);
      *(v621 - 10) = __ROR4__(v626, 16);
      *(v621 - 15) = __ROR4__(v627, 24);
      *(v621 - 11) = __ROR4__(v626, 24);
      --v625;
    }
    while ( v625 );
    v92 = dwBytes;
    v30 = Ptr;
    v657 = 0LL;
    v658 = 0;
    do
      v658 ^= *((_BYTE *)Ptr + v657++);
    while ( v657 < 0x338 );
    if ( v658 != 64LL )
    {
      MemoryFree(Ptr);
      goto LABEL_742;
    }
    *((_BYTE *)Ptr + 823) = 0;
    memset_0(&unk_1808DA540, 0, 0x60uLL);
    if ( *v30 )
    {
      v1376 = v30;
      while ( 1 )
      {
        v661 = (const WCHAR *)v30;
        v3 = -1LL;
        do
          ++v3;
        while ( *(_WORD *)&v30[2 * v3] );
        v26 = &v30[2 * v3];
        Ptr = (unsigned __int16 *)(3LL * (unsigned int)lpModuleName);
        if ( !GetModuleHandleExW(0, v661, (HMODULE *)&unk_1808DA540 + 3 * (unsigned int)lpModuleName) )
          break;
        v27 = Ptr;
        v28 = 0;
        v29 = *((_QWORD *)&unk_1808DA540 + (_QWORD)Ptr);
        if ( *(_WORD *)v29 == 23117
          && (v662 = *(int *)(v29 + 60), (unsigned int)v662 < 0x10000000)
          && (v663 = *((_QWORD *)&unk_1808DA540 + (_QWORD)Ptr) + v662, v663 >= *((_QWORD *)&unk_1808DA540 + (_QWORD)Ptr))
          && *(_DWORD *)v663 == 17744 )
        {
          if ( *(_WORD *)(v663 + 24) == 267 || *(_WORD *)(v663 + 24) == 523 )
          {
            *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)Ptr + 12) = *(_QWORD *)(v663 + 136);
            *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v27 + 2) = *(_DWORD *)(v663 + 80);
          }
          else
          {
            v28 = -1073741811;
          }
        }
        else
        {
          v28 = -1073741701;
        }
        v664 = *(_DWORD *)(v26 + 2);
        v32 = 0;
        v30 = v26 + 6;
        v1314 = v664;
        LODWORD(v1317) = 0;
        if ( v664 )
        {
          v33 = (unsigned int)lpModuleName;
          do
          {
            v665 = v30;
            v4 = -1LL;
            do
              ++v4;
            while ( v30[v4] );
            v30 += v4 + 1;
            if ( v28 >= 0 )
            {
              v31 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v33), v665);
              if ( !v31 )
                goto LABEL_761;
              off_1808D1340[(unsigned int)v1327] = v31;
              v32 = v1317;
              v33 = (unsigned int)lpModuleName;
            }
            LODWORD(v1327) = v1327 + 1;
            LODWORD(v1317) = ++v32;
          }
          while ( v32 < v1314 );
        }
        LODWORD(lpModuleName) = (_DWORD)lpModuleName + 1;
        if ( !*v30 )
          goto LABEL_761;
      }
      v28 = -1073741702;
LABEL_761:
      v30 = v1376;
      if ( !v1376 )
        goto LABEL_765;
    }
    else
    {
      v28 = 0;
    }
    v666 = GetProcessHeap();
    HeapFree(v666, 0, v30);
LABEL_765:
    if ( v28 < 0 )
    {
LABEL_742:
      v659 = (HMODULE *)&unk_1808DA540;
      v660 = 4LL;
      do
      {
        if ( *v659 )
          FreeLibrary(*v659);
        v659 += 3;
        --v660;
      }
      while ( v660 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_768:
      LODWORD(v1334) = 0;
      LODWORD(v1322) = 0;
      _InterlockedExchange(&dword_1808DDD40, 0);
      WORD2(v1322) = 0;
      LODWORD(v1330) = 0;
      LODWORD(v1341) = 0;
      LODWORD(v1329) = 0;
      LODWORD(v1331) = 0;
      v1336 = 0LL;
      v1346 = 0LL;
      lpMem = 0LL;
      v1324 = 0LL;
      LODWORD(v1321) = 0;
      LODWORD(v1333) = 0;
      while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
        ;
      v667 = dword_1808DDD3C;
      if ( dword_1808DDD3C )
        goto LABEL_803;
      LODWORD(v1327) = 0;
      LODWORD(lpModuleName) = 0;
      v668 = (unsigned __int16 *)MemoryAlloc(0x338uLL);
      Ptr = v668;
      if ( !v668 )
        goto LABEL_778;
      v1314 = -1;
      v669 = (char *)v668 + 7;
      v670 = -1;
      v671 = (unsigned __int8 *)&unk_180783012;
      v672 = 0;
      v673 = 103LL;
      v674 = 0;
      v675 = 0;
      do
      {
        v676 = *(v671 - 1) | (*(v671 - 2) << 8);
        v677 = v671[2] << 8;
        v678 = *v671;
        v671 += 8;
        v679 = *(v671 - 7) | ((v678 | (v676 << 8)) << 8);
        v680 = v675 ^ v679;
        v681 = *(v671 - 3) | ((*(v671 - 4) | ((*(v671 - 5) | v677) << 8)) << 8);
        v682 = v674 ^ v675 ^ v679 ^ v681 ^ 0xAC987321;
        v683 = v680 ^ (__ROR4__(v682, 22) + 4991 * __ROR4__(v682 + 1419157410, 27));
        v684 = v682 ^ (43881 * __ROR4__(v683 + 133239679, 9) - __ROR4__(v683, 30));
        v685 = v683 ^ (24670 * v684 - (v684 >> 13) - 123127970);
        v686 = v684 ^ (2033 * __ROR4__(v685 ^ 0xAB69, 26) - __ROR4__(v685, 30));
        v687 = v685 ^ (133239679 - (v686 ^ 0xAB69605E));
        v688 = v686 ^ (43881 * (v687 ^ 0x137F)) ^ __ROR4__(v687, 6);
        v689 = v687 ^ (__ROR4__(v688, 30) + 24670 * __ROR4__(v688 + 133239679, 15));
        v690 = v688 ^ (2033 * __ROR4__(v689 + 1419157410, 14) - __ROR4__(v689, 24));
        v691 = v689 ^ __ROR4__(v690, 10) ^ (4991 * __ROR4__(v690 ^ 0xAB69605E, 12));
        v692 = v690 ^ (v691 >> 10) ^ (43881 * (v691 ^ 0x7F1));
        v693 = v691 ^ (2033 * (__ROR4__(~v692, 5) + 24670));
        v694 = v693 ^ (((v692 ^ (v693 - 2033) ^ 0xAB69605E) >> 2)
                     + 4991 * __ROR4__(v692 ^ (v693 - 2033) ^ 0xAB6967AF, 30));
        v695 = v692 ^ (v693 - 2033) ^ 0xAB69605E ^ (__ROR4__(v694, 25) + 43881 * __ROR4__(v694 - 133239679, 6));
        v696 = v694 ^ (24670 * (v695 ^ 0x137F) + __ROR4__(v695, 9));
        v697 = v695 ^ (__ROR4__(v696, 25) + 2033 * __ROR4__(v696 ^ 0xAB69, 27));
        v698 = v696 ^ v697 ^ 0xAC987321;
        v699 = v697 ^ (4991 * __ROR4__(v698, 3) - 219010071);
        v700 = v698 ^ (24670 * __ROR4__(v699 - 133239679, 1) - __ROR4__(v699, 6));
        v701 = v699 ^ (__ROR4__(v700, 18) + 2033 * __ROR4__(v700 - 1419157410, 29));
        v702 = v700 ^ (4991 * __ROR4__(v701 - 1419157410, 17) - __ROR4__(v701, 14));
        v703 = v701 ^ (v702 >> 3) ^ (43881 * (v702 ^ 0x605E));
        v704 = __ROR4__(v703, 30);
        v674 = v670 ^ v703;
        v670 = v681;
        v675 = v672 ^ v702 ^ v704 ^ (24670 * __ROR4__(v701 ^ (v702 >> 3) ^ (43881 * (v702 ^ 0x605E)) ^ 0x7F1137F, 28));
        v672 = v679;
        *(v669 - 4) = v675;
        *v669 = v674;
        *(v669 - 5) = __ROR4__(v675, 8);
        v669 += 8;
        *(v669 - 9) = __ROR4__(v674, 8);
        *(v669 - 14) = __ROR4__(v675, 16);
        *(v669 - 10) = __ROR4__(v674, 16);
        *(v669 - 15) = __ROR4__(v675, 24);
        *(v669 - 11) = __ROR4__(v674, 24);
        --v673;
      }
      while ( v673 );
      v92 = dwBytes;
      v38 = Ptr;
      v705 = 0LL;
      v706 = 0;
      do
        v706 ^= *((_BYTE *)Ptr + v705++);
      while ( v705 < 0x338 );
      if ( v706 != 64LL )
      {
        MemoryFree(Ptr);
        goto LABEL_778;
      }
      *((_BYTE *)Ptr + 823) = 0;
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      if ( *v38 )
      {
        v1375 = v38;
        while ( 1 )
        {
          v709 = (const WCHAR *)v38;
          v5 = -1LL;
          do
            ++v5;
          while ( *(_WORD *)&v38[2 * v5] );
          v34 = &v38[2 * v5];
          Ptr = (unsigned __int16 *)(3LL * (unsigned int)lpModuleName);
          if ( !GetModuleHandleExW(0, v709, (HMODULE *)&unk_1808DA540 + 3 * (unsigned int)lpModuleName) )
            break;
          v35 = Ptr;
          v36 = 0;
          v37 = *((_QWORD *)&unk_1808DA540 + (_QWORD)Ptr);
          if ( *(_WORD *)v37 == 23117
            && (v710 = *(int *)(v37 + 60), (unsigned int)v710 < 0x10000000)
            && (v711 = *((_QWORD *)&unk_1808DA540 + (_QWORD)Ptr) + v710,
                v711 >= *((_QWORD *)&unk_1808DA540 + (_QWORD)Ptr))
            && *(_DWORD *)v711 == 17744 )
          {
            if ( *(_WORD *)(v711 + 24) == 267 || *(_WORD *)(v711 + 24) == 523 )
            {
              *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)Ptr + 12) = *(_QWORD *)(v711 + 136);
              *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v35 + 2) = *(_DWORD *)(v711 + 80);
            }
            else
            {
              v36 = -1073741811;
            }
          }
          else
          {
            v36 = -1073741701;
          }
          v712 = *(_DWORD *)(v34 + 2);
          v40 = 0;
          v38 = v34 + 6;
          v1314 = v712;
          LODWORD(v1317) = 0;
          if ( v712 )
          {
            v41 = (unsigned int)lpModuleName;
            do
            {
              v713 = v38;
              v6 = -1LL;
              do
                ++v6;
              while ( v38[v6] );
              v38 += v6 + 1;
              if ( v36 >= 0 )
              {
                v39 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v41), v713);
                if ( !v39 )
                  goto LABEL_797;
                off_1808D1340[(unsigned int)v1327] = v39;
                v40 = v1317;
                v41 = (unsigned int)lpModuleName;
              }
              LODWORD(v1327) = v1327 + 1;
              LODWORD(v1317) = ++v40;
            }
            while ( v40 < v1314 );
          }
          LODWORD(lpModuleName) = (_DWORD)lpModuleName + 1;
          if ( !*v38 )
            goto LABEL_797;
        }
        v36 = -1073741702;
LABEL_797:
        v38 = v1375;
        if ( !v1375 )
          goto LABEL_801;
      }
      else
      {
        v36 = 0;
      }
      v714 = GetProcessHeap();
      HeapFree(v714, 0, v38);
LABEL_801:
      if ( v36 < 0 )
      {
LABEL_778:
        v707 = (HMODULE *)&unk_1808DA540;
        v708 = 4LL;
        do
        {
          if ( *v707 )
            FreeLibrary(*v707);
          v707 += 3;
          --v708;
        }
        while ( v708 );
        memset_0(&unk_1808DA540, 0, 0x60uLL);
        memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_804:
        _InterlockedExchange(&dword_1808DDD40, 0);
        memset_0(&v1393, 0, 0x70uLL);
        LOWORD(v1322) = (v92 >> 4) & 0xF;
        v93 = v92 & 0xF;
        LODWORD(v1326) = v93;
        WORD1(v1322) = (v92 >> 8) & 0xF;
        WORD2(v1322) = (v92 >> 12) & 0xF;
        v1360 = 0LL;
        v1328 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
        v1343 = 0xFFFFFF;
        if ( !v1328 )
        {
          v715 = GetLastError();
          v13 = 0LL;
          v101 = v715;
          if ( v715 > 0 )
            v101 = (unsigned __int16)v715 | 0x80070000;
          if ( v101 >= 0 )
            v101 = -2147467259;
LABEL_869:
          while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
            ;
          v733 = dword_1808DDD3C;
          if ( dword_1808DDD3C > 0 )
          {
            --dword_1808DDD3C;
            if ( v733 == 1 )
            {
              v734 = 4LL;
              v735 = (HMODULE *)&unk_1808DA540;
              lpMem = (LPVOID)4;
              do
              {
                if ( *v735 )
                {
                  FreeLibrary(*v735);
                  v734 = (__int64)lpMem;
                }
                v735 += 3;
                lpMem = (LPVOID)--v734;
              }
              while ( v734 );
              memset_0(&unk_1808DA540, 0, 0x60uLL);
              memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              v13 = 0LL;
            }
          }
          _InterlockedExchange(&dword_1808DDD40, 0);
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1336);
          if ( v101 < 0 )
          {
LABEL_1085:
            if ( v1395 )
            {
              v14 = -1LL;
              do
                ++v14;
              while ( *((_WORD *)v1395 + v14) );
              v121 = 2 * v14 + 2;
              for ( m = v1395; v121; --v121 )
                *m++ = 0;
              MemoryFree(v1395);
              v1395 = 0LL;
            }
            if ( v1396 )
            {
              v15 = -1LL;
              do
                ++v15;
              while ( *((_WORD *)v1396 + v15) );
              v123 = 2 * v15 + 2;
              for ( n = v1396; v123; --v123 )
                *n++ = 0;
              MemoryFree(v1396);
              v1396 = 0LL;
            }
            v125 = v1397;
            if ( v1397 )
            {
              v16 = -1LL;
              do
                ++v16;
              while ( *((_WORD *)v1397 + v16) );
              v126 = 2 * v16 + 2;
              if ( v126 )
              {
                do
                {
                  *v125++ = 0;
                  --v126;
                }
                while ( v126 );
                v125 = v1397;
              }
              MemoryFree(v125);
              v1397 = 0LL;
            }
            if ( v1398 )
            {
              off_1808D1378();
              v1398 = 0LL;
            }
            if ( v1399 )
            {
              off_1808D1378();
              v1399 = 0LL;
            }
            if ( v1400 )
            {
              off_1808D1378();
              v1400 = 0LL;
            }
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v127 = dword_1808DDD3C;
            if ( dword_1808DDD3C > 0 )
            {
              --dword_1808DDD3C;
              if ( v127 == 1 )
              {
                v128 = (HMODULE *)&unk_1808DA540;
                v129 = 4LL;
                do
                {
                  if ( *v128 )
                    FreeLibrary(*v128);
                  v128 += 3;
                  --v129;
                }
                while ( v129 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              }
            }
            _InterlockedExchange(&dword_1808DDD40, 0);
            v130 = qword_1808DDD48;
            LODWORD(v1333) = dword_1808DA538;
            v131 = off_1808D13D8[0]();
            v1477 = 0;
            Ptr = (unsigned __int16 *)(unsigned int)(v131 - v130);
            v1481 = 0LL;
            v1478 = 0LL;
            v1479 = 0LL;
            v1480 = 0LL;
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v920 = dword_1808DDD3C;
            if ( !dword_1808DDD3C )
            {
              LODWORD(v1317) = 0;
              LODWORD(v1326) = 0;
              LODWORD(v1322) = 0;
              v921 = (char *)MemoryAlloc(0x338uLL);
              v1353 = v921;
              if ( !v921 )
                goto LABEL_1178;
              v922 = 0;
              v923 = v921 + 7;
              v924 = -1;
              v925 = (unsigned __int8 *)&unk_180783012;
              v926 = 0;
              v927 = 103LL;
              v928 = 0;
              do
              {
                v929 = *(v925 - 1) | (*(v925 - 2) << 8);
                v930 = v925[2] << 8;
                v931 = *v925;
                v925 += 8;
                v932 = *(v925 - 7) | ((v931 | (v929 << 8)) << 8);
                v933 = v928 ^ v932;
                v934 = *(v925 - 3) | ((*(v925 - 4) | ((*(v925 - 5) | v930) << 8)) << 8);
                v935 = v928 ^ v932 ^ v926 ^ v934 ^ 0xAC987321;
                v936 = v933 ^ (__ROR4__(v935, 22) + 4991 * __ROR4__(v935 + 1419157410, 27));
                v937 = v935 ^ (43881 * __ROR4__(v936 + 133239679, 9) - __ROR4__(v936, 30));
                v938 = v936 ^ (24670 * v937 - (v937 >> 13) - 123127970);
                v939 = v937 ^ (2033 * __ROR4__(v938 ^ 0xAB69, 26) - __ROR4__(v938, 30));
                v940 = v938 ^ (133239679 - (v939 ^ 0xAB69605E));
                v941 = v939 ^ (43881 * (v940 ^ 0x137F)) ^ __ROR4__(v940, 6);
                v942 = v940 ^ (__ROR4__(v941, 30) + 24670 * __ROR4__(v941 + 133239679, 15));
                v943 = v941 ^ (2033 * __ROR4__(v942 + 1419157410, 14) - __ROR4__(v942, 24));
                v944 = v942 ^ __ROR4__(v943, 10) ^ (4991 * __ROR4__(v943 ^ 0xAB69605E, 12));
                v945 = v943 ^ (v944 >> 10) ^ (43881 * (v944 ^ 0x7F1));
                v946 = v944 ^ (2033 * (__ROR4__(~v945, 5) + 24670));
                v947 = v946 ^ (((v945 ^ (v946 - 2033) ^ 0xAB69605E) >> 2)
                             + 4991 * __ROR4__(v945 ^ (v946 - 2033) ^ 0xAB6967AF, 30));
                v948 = v945 ^ (v946 - 2033) ^ 0xAB69605E ^ (__ROR4__(v947, 25) + 43881 * __ROR4__(v947 - 133239679, 6));
                v949 = v947 ^ (24670 * (v948 ^ 0x137F) + __ROR4__(v948, 9));
                v950 = v948 ^ (__ROR4__(v949, 25) + 2033 * __ROR4__(v949 ^ 0xAB69, 27));
                v951 = v949 ^ v950 ^ 0xAC987321;
                v952 = v950 ^ (4991 * __ROR4__(v951, 3) - 219010071);
                v953 = v951 ^ (24670 * __ROR4__(v952 - 133239679, 1) - __ROR4__(v952, 6));
                v954 = v952 ^ (__ROR4__(v953, 18) + 2033 * __ROR4__(v953 - 1419157410, 29));
                v955 = v953 ^ (4991 * __ROR4__(v954 - 1419157410, 17) - __ROR4__(v954, 14));
                v956 = v954 ^ (v955 >> 3) ^ (43881 * (v955 ^ 0x605E));
                v957 = v922 ^ __ROR4__(v956, 30) ^ (24670 * __ROR4__(v956 ^ 0x7F1137F, 28));
                v922 = v932;
                v928 = v955 ^ v957;
                *(v923 - 4) = v928;
                v926 = v956 ^ v924;
                *v923 = v956 ^ v924;
                v924 = v934;
                *(v923 - 5) = __ROR4__(v928, 8);
                v923 += 8;
                *(v923 - 9) = __ROR4__(v926, 8);
                *(v923 - 14) = __ROR4__(v928, 16);
                *(v923 - 10) = __ROR4__(v926, 16);
                *(v923 - 15) = __ROR4__(v928, 24);
                *(v923 - 11) = __ROR4__(v926, 24);
                --v927;
              }
              while ( v927 );
              v136 = v1353;
              v134 = v1322;
              v958 = 0LL;
              v959 = 0;
              do
                v959 ^= *((_BYTE *)v1353 + v958++);
              while ( v958 < 0x338 );
              if ( v959 != 64LL )
              {
                MemoryFree(v1353);
LABEL_1178:
                v960 = (HMODULE *)&unk_1808DA540;
                v961 = 4LL;
                v13 = 0LL;
                do
                {
                  if ( *v960 )
                    FreeLibrary(*v960);
                  v960 += 3;
                  --v961;
                }
                while ( v961 );
                v962 = (HMODULE *)&unk_1808DA540;
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                goto LABEL_1201;
              }
              *((_BYTE *)v1353 + 823) = 0;
              memset_0(&unk_1808DA540, 0, 0x60uLL);
              v963 = v136;
              if ( !*v136 )
                goto LABEL_1197;
              while ( 1 )
              {
                v964 = (const WCHAR *)v136;
                v17 = -1LL;
                do
                  ++v17;
                while ( *(_WORD *)&v136[2 * v17] );
                v132 = &v136[2 * v17];
                v1353 = (LPVOID)(3LL * (unsigned int)v1326);
                if ( !GetModuleHandleExW(0, v964, (HMODULE *)&unk_1808DA540 + 3 * (unsigned int)v1326) )
                  break;
                v133 = v1353;
                v134 = 0;
                v135 = *((_QWORD *)&unk_1808DA540 + (_QWORD)v1353);
                if ( *(_WORD *)v135 == 23117
                  && (v965 = *(int *)(v135 + 60), (unsigned int)v965 < 0x10000000)
                  && (v966 = *((_QWORD *)&unk_1808DA540 + (_QWORD)v1353) + v965,
                      v966 >= *((_QWORD *)&unk_1808DA540 + (_QWORD)v1353))
                  && *(_DWORD *)v966 == 17744 )
                {
                  if ( *(_WORD *)(v966 + 24) == 267 || *(_WORD *)(v966 + 24) == 523 )
                  {
                    *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)v1353 + 12) = *(_QWORD *)(v966 + 136);
                    *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v133 + 2) = *(_DWORD *)(v966 + 80);
                  }
                  else
                  {
                    v134 = -1073741811;
                  }
                }
                else
                {
                  v134 = -1073741701;
                }
                v967 = *(_DWORD *)(v132 + 2);
                v138 = 0;
                v136 = v132 + 6;
                LODWORD(v1322) = v967;
                v1314 = 0;
                if ( v967 )
                {
                  v139 = (unsigned int)v1326;
                  do
                  {
                    v968 = v136;
                    v18 = -1LL;
                    do
                      ++v18;
                    while ( v136[v18] );
                    v136 += v18 + 1;
                    if ( v134 >= 0 )
                    {
                      v137 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v139), v968);
                      if ( !v137 )
                        goto LABEL_1196;
                      off_1808D1340[(unsigned int)v1317] = v137;
                      v138 = v1314;
                      v139 = (unsigned int)v1326;
                    }
                    LODWORD(v1317) = v1317 + 1;
                    v1314 = ++v138;
                  }
                  while ( v138 < (unsigned int)v1322 );
                }
                LODWORD(v1326) = v1326 + 1;
                if ( !*v136 )
                  goto LABEL_1196;
              }
              v134 = -1073741702;
LABEL_1196:
              if ( v963 )
              {
LABEL_1197:
                v969 = GetProcessHeap();
                HeapFree(v969, 0, v963);
              }
              if ( v134 < 0 )
                goto LABEL_1178;
              v920 = dword_1808DDD3C;
              v13 = 0LL;
            }
            v962 = (HMODULE *)&unk_1808DA540;
            dword_1808DDD3C = v920 + 1;
LABEL_1201:
            v970 = 4LL;
            _InterlockedExchange(&dword_1808DDD40, 0);
            LODWORD(v1481) = v1333;
            LODWORD(v1478) = (_DWORD)Ptr;
            v1477 = 1;
            LODWORD(v1479) = -1721306479;
            DWORD2(v1478) = 1;
            LODWORD(v1480) = 1;
            DWORD2(v1479) = 1;
            DWORD2(v1480) = 1;
            ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1808D1410)(0LL, 8225LL, 4LL, &v1477);
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v971 = dword_1808DDD3C;
            if ( dword_1808DDD3C > 0 )
            {
              --dword_1808DDD3C;
              if ( v971 == 1 )
              {
                do
                {
                  if ( *v962 )
                    FreeLibrary(*v962);
                  v962 += 3;
                  --v970;
                }
                while ( v970 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              }
            }
            _InterlockedExchange(&dword_1808DDD40, 0);
            ((void (__fastcall *)(_QWORD, SIZE_T))off_1808D14A0[0])(0LL, j);
            goto LABEL_1210;
          }
          v736 = v1360;
          lpMem = (LPVOID)v1360;
          v737 = v92 & 0xF;
          v1408 = 0;
          LODWORD(dwBytes) = v737;
          memset_0(v1409, 0, 0x64uLL);
          v738 = 1;
          v739 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1808D1390[0])(j, 7LL);
          if ( v739 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v739, 104LL, &v1408) )
          {
            if ( v1410 != 32 || !v1411 || v1409[0] <= 0 || v1409[1] <= 0 )
              v738 = 0;
            if ( v738 )
            {
LABEL_973:
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(&v1402, v736, HIDWORD(lpMem));
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(&v1403, v736, HIDWORD(lpMem));
              if ( v737 == 1 )
                pcchLength = ((__int64 (__fastcall *)(_QWORD))off_1808D1368[0])(v1394 == 0 ? 0xB26720 : 0);
LABEL_975:
              v773 = j;
              LODWORD(v1322) = off_1808D13C0((CToastCenterExperienceManager *)j, (struct CSingleViewShellExperience *)1);
              v774 = 2064;
              if ( v1393 )
                v774 = 133138;
              LODWORD(v1329) = v774;
              if ( v738 )
              {
                v775 = v1395;
                v1314 = v1394;
                v13 = 0LL;
                Ptr = v1398;
                v1336 = (SIZE_T)v1395;
                v1415 = 0;
                memset_0(v1416, 0, 0x64uLL);
                v1424 = 0;
                memset_0(v1425, 0, 0x64uLL);
                lpMem = 0LL;
                LODWORD(v1317) = 0;
                LODWORD(v1333) = 0;
                v1448 = 0LL;
                v1449 = 0;
                memset(v1447, 0, sizeof(v1447));
                v1439 = 0LL;
                if ( !v775 )
                  goto LABEL_1083;
                v776 = j;
                v777 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1808D1390[0])(j, 7LL);
                if ( !v777 )
                  goto LABEL_1062;
                if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v777, 104LL, &v1415) )
                {
                  lpMem = v1417;
                  LODWORD(v1317) = v1416[0];
                  LODWORD(v1333) = v1416[1];
                }
                v778 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(SIZE_T))off_1808D1350[0])(v776);
                v1324 = (size_t)v778;
                if ( v778 )
                {
                  DWORD1(v1447[0]) = v1402.m128i_i32[2] - v1402.m128i_i32[0];
                  DWORD2(v1447[0]) = v1402.m128i_i32[1] - v1402.m128i_i32[3];
                  v1389[0] = 0LL;
                  LODWORD(v1447[0]) = 40;
                  HIDWORD(v1447[0]) = 2097153;
                  v1328 = (LPVOID)((__int64 (__fastcall *)(CToastCenterExperienceManager *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                    v778,
                                    v1447,
                                    0LL,
                                    v1389,
                                    0LL,
                                    0);
                  v779 = v1328;
                  if ( v1328 )
                  {
                    v782 = ((unsigned int (__fastcall *)(LPVOID, __int64, int *))off_1808D13A8[0])(v1328, 104LL, &v1424) == 0;
                    v783 = 0LL;
                    if ( !v782 )
                      v783 = v1426;
                    DWORD2(v1439) = v1402.m128i_i32[2] - v1402.m128i_i32[0];
                    HIDWORD(v1439) = v1402.m128i_i32[3] - v1402.m128i_i32[1];
                    v1346 = v783;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808D13B8)(v778, v779);
                    off_1808D13C0(v778, (struct CSingleViewShellExperience *)1);
                    v784 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808D13B8)(
                                     v778,
                                     Ptr);
                    v785 = off_1808D1428[0];
                    v1321 = v784;
                    v786 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v785)(
                      v778,
                      &v1439,
                      v786);
                    v787 = 0;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v778,
                      v1336,
                      0xFFFFFFFFLL,
                      &v1439,
                      (_DWORD)v1329,
                      0LL);
                    if ( v737 == 1 )
                    {
                      if ( v1314 )
                        LODWORD(v1326) = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                      else
                        LODWORD(v1326) = 0xFFFFFF;
                    }
                    else
                    {
                      LODWORD(v1326) = -5723992;
                    }
                    v788 = 0;
                    v789 = -v1402.m128i_i32[0];
                    if ( v1402.m128i_i32[0] >= 0 )
                    {
                      v788 = v1402.m128i_i32[0];
                      v789 = 0;
                    }
                    v790 = -v1402.m128i_i32[1];
                    LODWORD(v1339) = v788;
                    if ( v1402.m128i_i32[1] >= 0 )
                    {
                      v790 = 0;
                      v787 = v1402.m128i_i32[1];
                    }
                    v1314 = v787;
                    v791 = DWORD2(v1439) - v789;
                    if ( DWORD2(v1439) - v789 >= (int)v1317 - v788 )
                      v791 = v1317 - v788;
                    LODWORD(v1325) = v791;
                    v792 = HIDWORD(v1439) - v790;
                    if ( HIDWORD(v1439) - v790 >= (int)v1333 - v787 )
                      v792 = v1333 - v787;
                    v780 = 0;
                    if ( v791 > 0 && v792 > 0 )
                    {
                      v793 = (unsigned int)v1325;
                      v794 = v1326;
                      v1347 = (void *)(4LL * SDWORD2(v1439));
                      v1349 = (unsigned int)v792;
                      Ptr = (unsigned __int16 *)(int)v1317;
                      v795 = v1314 * v1317;
                      v796 = (int)v1317;
                      LODWORD(v1317) = 0;
                      v797 = (char *)v1346 + 4 * v789 + 4 * (__int64)(v790 * DWORD2(v1439));
                      v1336 = (SIZE_T)v797;
                      v798 = (char *)lpMem + 4 * (int)v1339 + 4 * (__int64)v795;
                      v1346 = v798;
                      do
                      {
                        v799 = v1317;
                        v800 = (unsigned __int8 *)(v797 + 2);
                        lpMem = (LPVOID)v793;
                        v801 = v798 - v797;
                        v802 = (char *)v793;
                        do
                        {
                          if ( (unsigned __int8)((*v800 + *(v800 - 2) + 2 * (unsigned int)*(v800 - 1)) >> 2) != 0xFF )
                          {
                            v803 = (unsigned __int8)~((*v800 + *(v800 - 2) + 2 * (unsigned int)*(v800 - 1)) >> 2);
                            v804 = BYTE1(v1326);
                            v800[v801] -= ~((*v800 + *(v800 - 2) + 2 * (unsigned int)*(v800 - 1)) >> 2)
                                        * (v794 - v800[v801]);
                            v805 = v800[v801 - 1];
                            v806 = (unsigned __int64)(2155905153LL * v803 * (v804 - v805)) >> 32;
                            v807 = BYTE2(v1326);
                            v800[v801 - 1] = v805 + (v806 >> 7 < 0) + (v806 >> 7);
                            v808 = v800[v801 - 2];
                            v809 = (unsigned __int64)(2155905153LL * v803 * (v807 - v808)) >> 32;
                            v800[v801 - 2] = v808 + (v809 >> 7 < 0) + (v809 >> 7);
                            v802 = (char *)lpMem;
                            v800[v801 + 1] += v803 * (255 - v800[v801 + 1]) / 255;
                          }
                          v800 += 4;
                          v780 = v799;
                          lpMem = --v802;
                        }
                        while ( v802 );
                        v797 = (char *)v1347 + v1336;
                        v782 = v1349-- == 1;
                        v798 = (char *)v1346 + 4 * v796;
                        v1336 += (SIZE_T)v1347;
                        v1346 = v798;
                        LODWORD(v1317) = v799;
                      }
                      while ( !v782 );
                      v737 = dwBytes;
                      v778 = (CToastCenterExperienceManager *)v1324;
                    }
                    ((void (__fastcall *)(LPVOID))off_1808D1378)(v1328);
                    if ( v1321 )
                      ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808D13B8)(v778, v1321);
                  }
                  else
                  {
                    v780 = GetLastError();
                    v781 = v780 < 0;
                    if ( v780 > 0 )
                    {
                      v780 = (unsigned __int16)v780 | 0x80070000;
                      v781 = v780 < 0;
                    }
                    if ( !v781 )
                      v780 = -2147467259;
                  }
                  ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808D1370[0])(v778);
                  v13 = 0LL;
                  if ( v780 < 0 )
                    goto LABEL_1083;
                  v810 = v1396;
                  v1314 = v1394;
                  Ptr = v1399;
                  v1336 = (SIZE_T)v1396;
                  v1418 = 0;
                  memset_0(v1419, 0, 0x64uLL);
                  v1427 = 0;
                  memset_0(v1428, 0, 0x64uLL);
                  lpMem = 0LL;
                  LODWORD(v1317) = 0;
                  LODWORD(v1333) = 0;
                  v1451 = 0LL;
                  v1452 = 0;
                  memset(v1450, 0, sizeof(v1450));
                  v1436 = 0LL;
                  if ( !v810 )
                    goto LABEL_1083;
                  v811 = j;
                  v812 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1808D1390[0])(j, 7LL);
                  if ( !v812 )
                    goto LABEL_1062;
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v812, 104LL, &v1418) )
                  {
                    lpMem = v1420;
                    LODWORD(v1317) = v1419[0];
                    LODWORD(v1333) = v1419[1];
                  }
                  v813 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(SIZE_T))off_1808D1350[0])(v811);
                  v1324 = (size_t)v813;
                  if ( v813 )
                  {
                    DWORD1(v1450[0]) = v1403.m128i_i32[2] - v1403.m128i_i32[0];
                    DWORD2(v1450[0]) = v1403.m128i_i32[1] - v1403.m128i_i32[3];
                    v1384 = 0LL;
                    LODWORD(v1450[0]) = 40;
                    HIDWORD(v1450[0]) = 2097153;
                    v1328 = (LPVOID)((__int64 (__fastcall *)(CToastCenterExperienceManager *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                      v813,
                                      v1450,
                                      0LL,
                                      &v1384,
                                      0LL,
                                      0);
                    v814 = v1328;
                    if ( !v1328 )
                    {
                      v815 = GetLastError();
                      v816 = v815 < 0;
                      if ( v815 > 0 )
                      {
                        v815 = (unsigned __int16)v815 | 0x80070000;
                        v816 = v815 < 0;
                      }
                      if ( !v816 )
                        v815 = -2147467259;
LABEL_1054:
                      ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808D1370[0])(v813);
                      v13 = 0LL;
                      if ( v815 < 0 )
                        goto LABEL_1083;
                      v844 = 0LL;
LABEL_1167:
                      off_1808D13C0(
                        (CToastCenterExperienceManager *)j,
                        (struct CSingleViewShellExperience *)(unsigned int)v1322);
                      v853 = v1323;
                      if ( !v1323 )
                      {
LABEL_1081:
                        if ( !v844 )
                          goto LABEL_1083;
                        goto LABEL_1082;
                      }
LABEL_1080:
                      ((void (__fastcall *)(LPVOID))off_1808D1378)(v853);
                      goto LABEL_1081;
                    }
                    v782 = ((unsigned int (__fastcall *)(LPVOID, __int64, int *))off_1808D13A8[0])(v1328, 104LL, &v1427) == 0;
                    v817 = 0LL;
                    if ( !v782 )
                      v817 = v1429;
                    DWORD2(v1436) = v1403.m128i_i32[2] - v1403.m128i_i32[0];
                    HIDWORD(v1436) = v1403.m128i_i32[3] - v1403.m128i_i32[1];
                    v1346 = v817;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808D13B8)(v813, v814);
                    off_1808D13C0(v813, (struct CSingleViewShellExperience *)1);
                    v818 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808D13B8)(
                                     v813,
                                     Ptr);
                    v819 = off_1808D1428[0];
                    v1339 = v818;
                    v820 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v819)(
                      v813,
                      &v1436,
                      v820);
                    v815 = 0;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v813,
                      v1336,
                      0xFFFFFFFFLL,
                      &v1436,
                      (_DWORD)v1329,
                      0LL);
                    if ( v737 == 1 )
                    {
                      if ( !v1314 )
                      {
                        LODWORD(v1331) = 0xFFFFFF;
LABEL_1035:
                        v822 = 0;
                        v823 = -v1403.m128i_i32[0];
                        v824 = 0;
                        if ( v1403.m128i_i32[0] >= 0 )
                        {
                          v822 = v1403.m128i_i32[0];
                          v823 = 0;
                        }
                        v825 = -v1403.m128i_i32[1];
                        if ( v1403.m128i_i32[1] >= 0 )
                        {
                          v824 = v1403.m128i_i32[1];
                          v825 = 0;
                        }
                        v826 = DWORD2(v1436) - v823;
                        if ( DWORD2(v1436) - v823 >= (int)v1317 - v822 )
                          v826 = v1317 - v822;
                        v827 = HIDWORD(v1436) - v825;
                        if ( HIDWORD(v1436) - v825 >= (int)v1333 - v824 )
                          v827 = v1333 - v824;
                        if ( v826 > 0 && v827 > 0 )
                        {
                          Ptr = (unsigned __int16 *)(4LL * SDWORD2(v1436));
                          v1349 = (unsigned int)v827;
                          v1347 = (void *)(int)v1317;
                          v828 = (char *)v1346 + 4 * v823 + 4 * (__int64)(DWORD2(v1436) * v825);
                          v1336 = (SIZE_T)v828;
                          v829 = (char *)lpMem + 4 * v822 + 4 * (__int64)((int)v1317 * v824);
                          v830 = 0;
                          LODWORD(v1317) = 0;
                          v1346 = v829;
                          do
                          {
                            v831 = v1343;
                            v832 = (unsigned __int8 *)(v828 + 2);
                            v833 = (unsigned int)v826;
                            v834 = v829 - v828;
                            lpMem = (LPVOID)(unsigned int)v826;
                            do
                            {
                              if ( (unsigned __int8)((*v832 + *(v832 - 2) + 2 * (unsigned int)*(v832 - 1)) >> 2) != 0xFF )
                              {
                                v835 = (unsigned __int8)~((*v832 + *(v832 - 2) + 2 * (unsigned int)*(v832 - 1)) >> 2);
                                v836 = BYTE1(v1331);
                                v832[v834] -= ~((*v832 + *(v832 - 2) + 2 * (unsigned int)*(v832 - 1)) >> 2)
                                            * (v831 - v832[v834]);
                                v837 = v832[v834 - 1];
                                v838 = (unsigned __int64)(2155905153LL * v835 * (v836 - v837)) >> 32;
                                v839 = BYTE2(v1331);
                                v832[v834 - 1] = v837 + (v838 >> 7 < 0) + (v838 >> 7);
                                v840 = v832[v834 - 2];
                                v841 = (unsigned __int64)(2155905153LL * v835 * (v839 - v840)) >> 32;
                                v832[v834 - 2] = v840 + (v841 >> 7 < 0) + (v841 >> 7);
                                v842 = v832[v834 + 1];
                                v843 = v835 * (255 - v842);
                                v830 = v1317;
                                LOBYTE(v841) = v842 + v843 / 255;
                                v833 = (unsigned __int64)lpMem;
                                v832[v834 + 1] = v841;
                              }
                              v832 += 4;
                              v815 = v830;
                              lpMem = (LPVOID)--v833;
                            }
                            while ( v833 );
                            v828 = (char *)Ptr + v1336;
                            v782 = v1349-- == 1;
                            v1336 += (SIZE_T)Ptr;
                            LODWORD(v1317) = v830;
                            v829 = (char *)v1346 + 4 * (_QWORD)v1347;
                            v1346 = v829;
                          }
                          while ( !v782 );
                          v813 = (CToastCenterExperienceManager *)v1324;
                        }
                        ((void (__fastcall *)(LPVOID))off_1808D1378)(v1328);
                        if ( v1339 )
                          ((void (__fastcall *)(CToastCenterExperienceManager *, void *))off_1808D13B8)(v813, v1339);
                        goto LABEL_1054;
                      }
                      v821 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                    }
                    else
                    {
                      v821 = -5723992;
                    }
                    LODWORD(v1331) = v821;
                    v1343 = v821;
                    goto LABEL_1035;
                  }
                }
                v13 = 0LL;
LABEL_1062:
                GetLastError();
                goto LABEL_1083;
              }
              v13 = 0LL;
              if ( v1394 || (v845 = -64, v737 == 1) )
                v845 = -1;
              BYTE2(v1334) = v845;
              LOWORD(v1334) = 0;
              BYTE3(v1334) = 1;
              LODWORD(v1326) = 0;
              LODWORD(v1331) = 0;
              LODWORD(lpModuleName) = 0;
              v1319 = (void *)((__int64 (__fastcall *)(SIZE_T))off_1808D1350[0])(v773);
              if ( !v1319 )
                goto LABEL_1062;
              if ( v737 == 1 )
              {
                v846 = v1403.m128i_i32[2] - v1403.m128i_i32[0];
                if ( v1403.m128i_i32[2] - v1403.m128i_i32[0] <= v1402.m128i_i32[2] - v1402.m128i_i32[0] )
                  v846 = v1402.m128i_i32[2] - v1402.m128i_i32[0];
                v847 = v1403.m128i_i32[3] - v1402.m128i_i32[1];
                LODWORD(v1317) = v846;
                v848 = 0;
                LODWORD(v1327) = v1403.m128i_i32[3] - v1402.m128i_i32[1];
                v849 = 0;
                if ( v1393 )
                {
                  v849 = v1403.m128i_i32[0] + v846 - v1403.m128i_i32[2];
                  LODWORD(v1326) = v1402.m128i_i32[0] + v846 - v1402.m128i_i32[2];
                  LODWORD(lpModuleName) = v849;
                  v848 = v1326;
                }
                LODWORD(v1339) = v1403.m128i_i32[2] + v849 - v1403.m128i_i32[0];
                v850 = v1402.m128i_i32[2] + v848 - v1402.m128i_i32[0];
                LODWORD(v1330) = v1403.m128i_i32[1] - v1402.m128i_i32[1];
                LODWORD(v1333) = v1403.m128i_i32[3] - v1402.m128i_i32[1];
                LODWORD(v1321) = v1402.m128i_i32[3] - v1402.m128i_i32[1];
              }
              else
              {
                v846 = DWORD2(v1360);
                v847 = HIDWORD(v1360);
                LODWORD(v1317) = DWORD2(v1360);
                LODWORD(v1321) = _mm_cvtsi128_si32(_mm_srli_si128(v1402, 12));
                LODWORD(v1331) = _mm_cvtsi128_si32(_mm_srli_si128(v1402, 4));
                LODWORD(v1333) = _mm_cvtsi128_si32(_mm_srli_si128(v1403, 12));
                v850 = _mm_cvtsi128_si32(_mm_srli_si128(v1402, 8));
                LODWORD(v1330) = _mm_cvtsi128_si32(_mm_srli_si128(v1403, 4));
                LODWORD(v1327) = HIDWORD(v1360);
                LODWORD(v1326) = _mm_cvtsi128_si32(v1402);
                LODWORD(v1339) = _mm_cvtsi128_si32(_mm_srli_si128(v1403, 8));
                LODWORD(lpModuleName) = _mm_cvtsi128_si32(v1403);
              }
              v1443[0] = 40;
              v1387 = 0LL;
              v1443[2] = -v847;
              memset(&v1443[4], 0, 28);
              v1443[1] = v846;
              v1443[3] = 2097153;
              v851 = (void *)((__int64 (__fastcall *)(void *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                               v1319,
                               v1443,
                               0LL,
                               &v1387,
                               0LL,
                               0);
              v1323 = v851;
              if ( !v851 )
              {
                GetLastError();
                v844 = v1319;
                v13 = 0LL;
LABEL_1082:
                ((void (__fastcall *)(void *))off_1808D1370[0])(v844);
LABEL_1083:
                if ( pcchLength )
                  ((void (__fastcall *)(size_t))off_1808D1378)(pcchLength);
                goto LABEL_1085;
              }
              ((void (__fastcall *)(void *, void *))off_1808D13B8)(v1319, v851);
              if ( v737 == 1 && pcchLength )
              {
                v1440 = 0LL;
                v1442 = v1327;
                v1441 = v846;
                ((void (__fastcall *)(void *, __int64 *))off_1808D1428[0])(v1319, &v1440);
              }
              LODWORD(v1341) = v1394;
              Ptr = v1398;
              lpMem = v1395;
              v1412 = 0;
              memset_0(v1413, 0, 0x64uLL);
              v1430 = 0;
              memset_0(v1431, 0, 0x64uLL);
              v1336 = 0LL;
              LODWORD(v1325) = 0;
              v1314 = 0;
              memset(v1456, 0, sizeof(v1456));
              v1457 = 0LL;
              v1458 = 0;
              v1437 = 0LL;
              if ( !lpMem )
                goto LABEL_1078;
              v852 = ((__int64 (__fastcall *)(void *, __int64))off_1808D1390[0])(v1319, 7LL);
              if ( v852 )
              {
                if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v852, 104LL, &v1412) )
                {
                  v1336 = v1414;
                  LODWORD(v1325) = v1413[0];
                  v1314 = v1413[1];
                }
                v1324 = ((__int64 (__fastcall *)(void *))off_1808D1350[0])(v1319);
                if ( v1324 )
                {
                  v1385 = 0LL;
                  DWORD1(v1456[0]) = v850 - v1326;
                  DWORD2(v1456[0]) = (_DWORD)v1331 - (_DWORD)v1321;
                  LODWORD(v1456[0]) = 40;
                  HIDWORD(v1456[0]) = 2097153;
                  v854 = (void *)((__int64 (__fastcall *)(size_t, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                   v1324,
                                   v1456,
                                   0LL,
                                   &v1385,
                                   0LL,
                                   0);
                  v1347 = v854;
                  if ( v854 )
                  {
                    v782 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1808D13A8[0])(v854, 104LL, &v1430) == 0;
                    v857 = 0LL;
                    if ( !v782 )
                      v857 = v1432;
                    DWORD2(v1437) = v850 - v1326;
                    v858 = (CToastCenterExperienceManager *)v1324;
                    v1346 = v857;
                    HIDWORD(v1437) = (_DWORD)v1321 - (_DWORD)v1331;
                    ((void (__fastcall *)(size_t, void *))off_1808D13B8)(v1324, v1347);
                    off_1808D13C0(v858, (struct CSingleViewShellExperience *)1);
                    v859 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808D13B8)(
                                     v858,
                                     Ptr);
                    v860 = off_1808D1428[0];
                    v1353 = v859;
                    v861 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(size_t, __int128 *, __int64))v860)(v1324, &v1437, v861);
                    v855 = 0;
                    ((void (__fastcall *)(size_t, LPVOID, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v1324,
                      lpMem,
                      0xFFFFFFFFLL,
                      &v1437,
                      (_DWORD)v1329,
                      0LL);
                    if ( v737 == 1 )
                    {
                      if ( (_DWORD)v1341 )
                        LODWORD(v1341) = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                      else
                        LODWORD(v1341) = 0xFFFFFF;
                    }
                    else
                    {
                      LODWORD(v1341) = -5723992;
                    }
                    v862 = 0;
                    v863 = -(int)v1326;
                    v864 = 0;
                    if ( (v1326 & 0x80000000) == 0LL )
                    {
                      v862 = v1326;
                      v863 = 0;
                    }
                    v865 = -(int)v1331;
                    if ( (int)v1331 >= 0 )
                    {
                      v864 = (int)v1331;
                      v865 = 0;
                    }
                    v866 = DWORD2(v1437) - v863;
                    if ( DWORD2(v1437) - v863 >= (int)v1325 - v862 )
                      v866 = (_DWORD)v1325 - v862;
                    LODWORD(v1321) = v866;
                    v867 = HIDWORD(v1437) - v865;
                    if ( HIDWORD(v1437) - v865 >= (int)(v1314 - v864) )
                      v867 = v1314 - v864;
                    if ( v866 > 0 && v867 > 0 )
                    {
                      v868 = (unsigned int)v1321;
                      v869 = (char)v1341;
                      Ptr = (unsigned __int16 *)(4LL * SDWORD2(v1437));
                      v870 = Ptr;
                      v1349 = (unsigned int)v867;
                      v1328 = (LPVOID)(int)v1325;
                      v871 = (unsigned __int8 *)v1346 + 4 * v863 + 4 * (__int64)(DWORD2(v1437) * v865);
                      v1346 = v871;
                      v872 = v1336 + 4 * (v862 + (__int64)((int)v1325 * v864));
                      v873 = 0;
                      v1314 = 0;
                      v1336 = v872;
                      do
                      {
                        lpMem = (LPVOID)v868;
                        v874 = v872 - (_QWORD)v871;
                        v875 = v871 + 2;
                        v876 = (char *)v868;
                        do
                        {
                          if ( (unsigned __int8)((*v875 + *(v875 - 2) + 2 * (unsigned int)*(v875 - 1)) >> 2) != 0xFF )
                          {
                            v877 = (unsigned __int8)~((*v875 + *(v875 - 2) + 2 * (unsigned int)*(v875 - 1)) >> 2);
                            v878 = BYTE1(v1341);
                            v875[v874] -= ~((*v875 + *(v875 - 2) + 2 * (unsigned int)*(v875 - 1)) >> 2)
                                        * (v869 - v875[v874]);
                            v879 = v875[v874 - 1];
                            v880 = (unsigned __int64)(2155905153LL * v877 * (v878 - v879)) >> 32;
                            v881 = BYTE2(v1341);
                            v875[v874 - 1] = v879 + (v880 >> 7 < 0) + (v880 >> 7);
                            v882 = v875[v874 - 2];
                            v883 = (unsigned __int64)(2155905153LL * v877 * (v881 - v882)) >> 32;
                            v875[v874 - 2] = v882 + (v883 >> 7 < 0) + (v883 >> 7);
                            v884 = v875[v874 + 1];
                            v885 = v877 * (255 - v884);
                            v873 = v1314;
                            LOBYTE(v883) = v884 + v885 / 255;
                            v876 = (char *)lpMem;
                            v875[v874 + 1] = v883;
                          }
                          v875 += 4;
                          v855 = v873;
                          lpMem = --v876;
                        }
                        while ( v876 );
                        v871 = (unsigned __int8 *)v1346 + (_QWORD)v870;
                        v782 = v1349-- == 1;
                        v1346 = (char *)v1346 + (_QWORD)v870;
                        v1314 = v873;
                        v872 = v1336 + 4LL * (_QWORD)v1328;
                        v1336 = v872;
                      }
                      while ( !v782 );
                      v737 = dwBytes;
                      v209 = Size;
                      v846 = v1317;
                    }
                    ((void (__fastcall *)(void *))off_1808D1378)(v1347);
                    if ( v1353 )
                      ((void (__fastcall *)(size_t, LPVOID))off_1808D13B8)(v1324, v1353);
                  }
                  else
                  {
                    v855 = GetLastError();
                    v856 = v855 < 0;
                    if ( v855 > 0 )
                    {
                      v855 = (unsigned __int16)v855 | 0x80070000;
                      v856 = v855 < 0;
                    }
                    if ( !v856 )
                      v855 = -2147467259;
                  }
                  ((void (__fastcall *)(size_t))off_1808D1370[0])(v1324);
                  if ( v855 < 0 )
                    goto LABEL_1078;
                  v886 = v1396;
                  LODWORD(v1321) = v1394;
                  v1421 = 0;
                  v1353 = v1399;
                  Ptr = (unsigned __int16 *)v1396;
                  memset_0(v1422, 0, 0x64uLL);
                  v1433 = 0;
                  memset_0(v1434, 0, 0x64uLL);
                  lpMem = 0LL;
                  LODWORD(v1325) = 0;
                  v1314 = 0;
                  v1454 = 0LL;
                  v1455 = 0;
                  memset(v1453, 0, sizeof(v1453));
                  v1438 = 0LL;
                  if ( !v886 )
                    goto LABEL_1078;
                  v844 = v1319;
                  v887 = ((__int64 (__fastcall *)(void *, __int64))off_1808D1390[0])(v1319, 7LL);
                  if ( !v887 )
                  {
                    GetLastError();
                    goto LABEL_1079;
                  }
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v887, 104LL, &v1421) )
                  {
                    lpMem = v1423;
                    LODWORD(v1325) = v1422[0];
                    v1314 = v1422[1];
                  }
                  v1324 = ((__int64 (__fastcall *)(void *))off_1808D1350[0])(v844);
                  v888 = (CToastCenterExperienceManager *)v1324;
                  if ( v1324 )
                  {
                    DWORD1(v1453[0]) = (_DWORD)v1339 - (_DWORD)lpModuleName;
                    DWORD2(v1453[0]) = (_DWORD)v1330 - v1333;
                    v1386 = 0LL;
                    LODWORD(v1453[0]) = 40;
                    HIDWORD(v1453[0]) = 2097153;
                    v889 = (void *)((__int64 (__fastcall *)(size_t, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                     v1324,
                                     v1453,
                                     0LL,
                                     &v1386,
                                     0LL,
                                     0);
                    v1347 = v889;
                    if ( !v889 )
                    {
                      v890 = GetLastError();
                      v891 = v890 < 0;
                      if ( v890 > 0 )
                      {
                        v890 = (unsigned __int16)v890 | 0x80070000;
                        v891 = v890 < 0;
                      }
                      if ( !v891 )
                        v890 = -2147467259;
                      goto LABEL_1162;
                    }
                    v782 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1808D13A8[0])(v889, 104LL, &v1433) == 0;
                    v892 = 0LL;
                    if ( !v782 )
                      v892 = v1435;
                    DWORD2(v1438) = (_DWORD)v1339 - (_DWORD)lpModuleName;
                    HIDWORD(v1438) = v1333 - (_DWORD)v1330;
                    v1336 = v892;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, void *))off_1808D13B8)(v888, v1347);
                    off_1808D13C0(v888, (struct CSingleViewShellExperience *)1);
                    v893 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808D13B8)(
                                     v888,
                                     v1353);
                    v894 = off_1808D1428[0];
                    v1328 = v893;
                    v895 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(size_t, __int128 *, __int64))v894)(v1324, &v1438, v895);
                    v890 = 0;
                    ((void (__fastcall *)(size_t, unsigned __int16 *, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v1324,
                      Ptr,
                      0xFFFFFFFFLL,
                      &v1438,
                      (_DWORD)v1329,
                      0LL);
                    if ( v737 == 1 )
                    {
                      if ( !(_DWORD)v1321 )
                      {
                        LODWORD(v1331) = 0xFFFFFF;
LABEL_1143:
                        v897 = 0;
                        v898 = -(int)lpModuleName;
                        v899 = 0;
                        if ( (int)lpModuleName >= 0 )
                        {
                          v897 = (int)lpModuleName;
                          v898 = 0;
                        }
                        v900 = -(int)v1330;
                        LODWORD(v1333) = v897;
                        if ( (int)v1330 >= 0 )
                        {
                          v899 = (int)v1330;
                          v900 = 0;
                        }
                        v901 = (_DWORD)v1325 - v897;
                        v902 = DWORD2(v1438) - v898;
                        if ( DWORD2(v1438) - v898 >= v901 )
                          v902 = v901;
                        LODWORD(v1339) = v902;
                        v903 = HIDWORD(v1438) - v900;
                        if ( HIDWORD(v1438) - v900 >= (int)(v1314 - v899) )
                          v903 = v1314 - v899;
                        if ( v902 > 0 && v903 > 0 )
                        {
                          v904 = (unsigned int)v1339;
                          v1353 = (LPVOID)(4LL * SDWORD2(v1438));
                          v905 = v1353;
                          v1349 = (unsigned int)v903;
                          Ptr = (unsigned __int16 *)(int)v1325;
                          v906 = v1336 + 4 * (v898 + (__int64)(v900 * DWORD2(v1438)));
                          v1336 = v906;
                          v1314 = 0;
                          v907 = (char *)lpMem + 4 * (int)v1333 + 4 * (__int64)((int)v1325 * v899);
                          v1346 = v907;
                          do
                          {
                            v908 = v1314;
                            v909 = (unsigned __int8 *)(v906 + 2);
                            v910 = v1343;
                            v911 = &v907[-v906];
                            lpMem = (LPVOID)v904;
                            v912 = (char *)v904;
                            do
                            {
                              if ( (unsigned __int8)((*v909 + *(v909 - 2) + 2 * (unsigned int)*(v909 - 1)) >> 2) != 0xFF )
                              {
                                v913 = (unsigned __int8)~((*v909 + *(v909 - 2) + 2 * (unsigned int)*(v909 - 1)) >> 2);
                                v914 = BYTE1(v1331);
                                v911[(_QWORD)v909] -= ~((*v909 + *(v909 - 2) + 2 * (unsigned int)*(v909 - 1)) >> 2)
                                                    * (v910 - v911[(_QWORD)v909]);
                                v915 = (unsigned __int8)v911[(_QWORD)v909 - 1];
                                v916 = (unsigned __int64)(2155905153LL * v913 * (v914 - v915)) >> 32;
                                v917 = BYTE2(v1331);
                                v911[(_QWORD)v909 - 1] = v915 + (v916 >> 7 < 0) + (v916 >> 7);
                                v918 = (unsigned __int8)v911[(_QWORD)v909 - 2];
                                v919 = (unsigned __int64)(2155905153LL * v913 * (v917 - v918)) >> 32;
                                v911[(_QWORD)v909 - 2] = v918 + (v919 >> 7 < 0) + (v919 >> 7);
                                v912 = (char *)lpMem;
                                v911[(_QWORD)v909 + 1] += v913 * (255 - (unsigned __int8)v911[(_QWORD)v909 + 1]) / 255;
                              }
                              v909 += 4;
                              v890 = v908;
                              lpMem = --v912;
                            }
                            while ( v912 );
                            v906 = (SIZE_T)v905 + v1336;
                            v782 = v1349-- == 1;
                            v1336 += (SIZE_T)v905;
                            v1314 = v908;
                            v907 = (char *)v1346 + 4 * (_QWORD)Ptr;
                            v1346 = v907;
                          }
                          while ( !v782 );
                          v737 = dwBytes;
                          v846 = v1317;
                        }
                        ((void (__fastcall *)(void *))off_1808D1378)(v1347);
                        if ( v1328 )
                          ((void (__fastcall *)(size_t, LPVOID))off_1808D13B8)(v1324, v1328);
LABEL_1162:
                        ((void (__fastcall *)(size_t))off_1808D1370[0])(v1324);
                        if ( v890 >= 0 )
                        {
                          v844 = v1319;
                          if ( v737 == 1 )
                            ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, int))off_1808D1340[0])(
                              j,
                              v1402.m128i_u32[0],
                              v1402.m128i_u32[1],
                              v846,
                              v1327,
                              v1319,
                              0,
                              0,
                              13369376);
                          else
                            ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, unsigned __int32, _DWORD, _DWORD))off_1808D1380[0])(
                              j,
                              (unsigned int)v1360,
                              DWORD1(v1360),
                              v846,
                              v1327,
                              v1319,
                              0,
                              0,
                              v846,
                              v1327,
                              (_DWORD)v1334);
                          v13 = 0LL;
                          goto LABEL_1167;
                        }
                        goto LABEL_1078;
                      }
                      v896 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                    }
                    else
                    {
                      v896 = -5723992;
                    }
                    LODWORD(v1331) = v896;
                    v1343 = v896;
                    goto LABEL_1143;
                  }
                }
              }
              GetLastError();
LABEL_1078:
              v844 = v1319;
LABEL_1079:
              v853 = v1323;
              v13 = 0LL;
              goto LABEL_1080;
            }
          }
          else
          {
            v738 = 0;
          }
          if ( v737 != 1 )
            goto LABEL_975;
          goto LABEL_973;
        }
        v1349 = 0LL;
        LODWORD(v1317) = 0;
        v1372 = 0LL;
        v1374 = 0LL;
        v101 = 0;
        v1339 = 0LL;
        v1327 = 0LL;
        v1356 = 0;
        v1325 = 0LL;
        v1364 = 0;
        memset(v1390, 0, sizeof(v1390));
        if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1808D13E0[0])(
               8LL,
               &v1356,
               0LL,
               &v1364) )
        {
          v717 = MemoryAlloc(2LL * v1364);
          SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1327, v717);
          if ( !SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1327)
            || (v718 = MemoryAlloc(4LL * (v1356 + 1)),
                SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1325, v718),
                (lpModuleName = (LPCWSTR)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1325)) == 0LL) )
          {
            v101 = -2147024882;
LABEL_67:
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1325);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1327);
            v45 = 0;
            if ( v101 < 0 )
              goto LABEL_845;
            v46 = 0;
            LODWORD(v1327) = 0;
            if ( (_DWORD)v1317 )
            {
              v47 = (_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1349);
LABEL_70:
              v51 = v45;
              while ( *v47 != *v48 )
              {
                ++v51;
                ++v48;
                if ( v51 >= 0x26 )
                {
                  ++v49;
                  ++v47;
                  if ( v49 >= v50 )
                    goto LABEL_822;
                  v48 = dword_1807D4A70;
                  goto LABEL_70;
                }
              }
              v46 = v51;
              LODWORD(v1327) = v51;
            }
LABEL_822:
            LODWORD(v1317) = v45;
            v720 = dword_1807D4A70[v46];
            memset(v1462, 0, sizeof(v1462));
            if ( ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64))off_1808D13E8[0])(v720, v1482, 85LL)
              && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *))off_1808D13D0[0])(v1482, 88LL, v1462) > 0 )
            {
              LODWORD(v1317) = (HIDWORD(v1462[0]) >> 27) & 1;
              v46 = v1327;
            }
            memset_0(v1392, 0, 0x90uLL);
            v53 = L"Segoe UI Light";
            v54 = 19LL;
            v52 = (const wchar_t **)&v1391;
            do
            {
              *v52 = v53;
              v8 = -1LL;
              do
                ++v8;
              while ( v53[v8] );
              ++v52;
              v53 += v8 + 1;
              --v54;
            }
            while ( v54 );
            v55 = 3LL * v46;
            v1346 = *(void **)&v1392[8 * *((unsigned __int8 *)&unk_1807D2D40 + v55) - 8];
            lpMem = *(LPVOID *)&v1392[8 * (unsigned __int8)byte_1807D2D41[v55] - 8];
            v1324 = *(_QWORD *)&v1392[8 * (unsigned __int8)byte_1807D2D42[v55] - 8];
            v56 = (char *)MemoryAlloc(0x1C90uLL);
            v1347 = v56;
            if ( !v56 )
              goto LABEL_86;
            v1314 = -1;
            v57 = v56 + 7;
            v58 = -1;
            v59 = (unsigned __int8 *)&unk_1807D2DD2;
            v60 = 0;
            v61 = 0;
            v62 = 0;
            v63 = 914LL;
            do
            {
              v64 = *(v59 - 1) | (*(v59 - 2) << 8);
              v65 = v59[2] << 8;
              v66 = *v59;
              v59 += 8;
              v67 = *(v59 - 7) | ((v66 | (v64 << 8)) << 8);
              v68 = v67 ^ v62;
              v69 = *(v59 - 3) | ((*(v59 - 4) | ((*(v59 - 5) | v65) << 8)) << 8);
              v70 = v69 ^ v68 ^ v61 ^ 0xAC987321;
              v71 = v68 ^ (__ROR4__(v70, 22) + 4991 * __ROR4__(v70 + 1419157410, 27));
              v72 = v70 ^ (43881 * __ROR4__(v71 + 133239679, 9) - __ROR4__(v71, 30));
              v73 = v72 ^ (2033 * __ROR4__(v71 ^ (24670 * v72 - (v72 >> 13) - 123127970) ^ 0xAB69, 26)
                         - __ROR4__(v71 ^ (24670 * v72 - (v72 >> 13) - 123127970), 30));
              v74 = v71 ^ (24670 * v72 - (v72 >> 13) - 123127970) ^ (133239679 - (v73 ^ 0xAB69605E));
              v75 = v73 ^ (43881 * (v74 ^ 0x137F)) ^ __ROR4__(v74, 6);
              v76 = v74 ^ (__ROR4__(v75, 30) + 24670 * __ROR4__(v75 + 133239679, 15));
              v77 = v75 ^ (2033 * __ROR4__(v76 + 1419157410, 14) - __ROR4__(v76, 24));
              v78 = v76 ^ __ROR4__(v77, 10) ^ (4991 * __ROR4__(v77 ^ 0xAB69605E, 12));
              v79 = v77 ^ (v78 >> 10) ^ (43881 * (v78 ^ 0x7F1));
              v80 = v78 ^ (2033 * (__ROR4__(~v79, 5) + 24670));
              v81 = v80 ^ (((v79 ^ (v80 - 2033) ^ 0xAB69605E) >> 2)
                         + 4991 * __ROR4__(v79 ^ (v80 - 2033) ^ 0xAB6967AF, 30));
              v82 = v79 ^ (v80 - 2033) ^ 0xAB69605E ^ (__ROR4__(v81, 25) + 43881 * __ROR4__(v81 - 133239679, 6));
              v83 = v81 ^ (24670 * (v82 ^ 0x137F) + __ROR4__(v82, 9));
              v84 = v82 ^ (__ROR4__(v83, 25) + 2033 * __ROR4__(v83 ^ 0xAB69, 27));
              v85 = v83 ^ v84 ^ 0xAC987321;
              v86 = v84 ^ (4991 * __ROR4__(v85, 3) - 219010071);
              v87 = v85 ^ (24670 * __ROR4__(v86 - 133239679, 1) - __ROR4__(v86, 6));
              v88 = v86 ^ (__ROR4__(v87, 18) + 2033 * __ROR4__(v87 - 1419157410, 29));
              v89 = v87 ^ (4991 * __ROR4__(v88 - 1419157410, 17) - __ROR4__(v88, 14));
              v90 = v88 ^ (v89 >> 3) ^ (43881 * (v89 ^ 0x605E));
              v61 = v90 ^ v58;
              v58 = v69;
              v91 = v60 ^ __ROR4__(v90, 30) ^ (24670 * __ROR4__(v90 ^ 0x7F1137F, 28));
              v60 = v67;
              v62 = v89 ^ v91;
              *(v57 - 4) = v62;
              *v57 = v61;
              *(v57 - 5) = __ROR4__(v62, 8);
              v57 += 8;
              *(v57 - 9) = __ROR4__(v61, 8);
              *(v57 - 14) = __ROR4__(v62, 16);
              *(v57 - 10) = __ROR4__(v61, 16);
              *(v57 - 15) = __ROR4__(v62, 24);
              *(v57 - 11) = __ROR4__(v61, 24);
              --v63;
            }
            while ( v63 );
            LOBYTE(v92) = dwBytes;
            v93 = v1326;
            v94 = 0LL;
            v95 = 0LL;
            do
            {
              v96 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v1347 + v94));
              v94 += 16LL;
              v97 = _mm_xor_ps(v96, v95);
              v95 = v97;
            }
            while ( v94 < 0x1C90 );
            v98 = _mm_xor_ps(v97, (__m128)_mm_srli_si128((__m128i)v97, 8));
            v99 = _mm_xor_ps(v98, (__m128)_mm_srli_si128((__m128i)v98, 4));
            v100 = _mm_xor_ps(v99, (__m128)_mm_srli_si128((__m128i)v99, 2));
            if ( (unsigned __int8)_mm_cvtsi128_si32((__m128i)_mm_xor_ps(v100, (__m128)_mm_srli_si128((__m128i)v100, 1))) != 127LL )
            {
              v101 = -1073425151;
              MemoryFree(v1347);
              goto LABEL_845;
            }
            v1374 = 7312LL;
            v1372 = v1347;
            v101 = 0;
            v721 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1372);
            v723 = v1327;
            v104 = (__int64 *)v1390;
            v103 = v721;
            v105 = 6LL;
            do
            {
              v102 = v722;
              do
              {
                if ( v723 == v102 )
                  *v104 = v103;
                v9 = -1LL;
                do
                  ++v9;
                while ( *(_BYTE *)(v103 + v9) != (_BYTE)v722 );
                ++v102;
                v103 += v9 + 1;
              }
              while ( v102 < 0x26 );
              ++v104;
              --v105;
            }
            while ( v105 );
            v106 = MemoryAlloc(0x18uLL);
            SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1339, v106);
            v107 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1339);
            Ptr = (unsigned __int16 *)v107;
            if ( v107 )
            {
              *(_OWORD *)v107 = 0LL;
              *(_QWORD *)(v107 + 16) = 0LL;
              v110 = 0LL;
              LODWORD(v1327) = 0;
              while ( 2 )
              {
                v724 = *((_WORD *)&v1322 + v110);
                v725 = 0;
                v726 = &word_1807D2DB8;
                while ( v724 != *v726 )
                {
                  ++v725;
                  ++v726;
                  if ( v725 >= 6 )
                    goto LABEL_91;
                }
                v10 = -1LL;
                v727 = (void *)*((_QWORD *)v1390 + v725);
                v1347 = v727;
                do
                  ++v10;
                while ( *((_BYTE *)v727 + v10) );
                v108 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD, _QWORD, _DWORD))off_1808D1400[0])(
                         65001LL,
                         0LL,
                         v727,
                         (unsigned int)(v10 + 1),
                         0LL,
                         0);
                v1314 = v108;
                if ( !v108 )
                {
                  v729 = GetLastError();
                  v101 = v729;
                  if ( v729 > 0 )
                    v101 = (unsigned __int16)v729 | 0x80070000;
                  if ( v101 >= 0 )
                    v101 = -2147467259;
                  goto LABEL_845;
                }
                v109 = MemoryAlloc(2LL * v108);
                *(_QWORD *)&Ptr[4 * (unsigned int)v1327] = v109;
                if ( !v109 )
                  goto LABEL_86;
                v11 = -1LL;
                do
                  ++v11;
                while ( *((_BYTE *)v1347 + v11) );
                if ( !((unsigned int (__fastcall *)(__int64, _QWORD, void *, _QWORD, LPVOID, unsigned int))off_1808D1400[0])(
                        65001LL,
                        0LL,
                        v1347,
                        (unsigned int)(v11 + 1),
                        v109,
                        v1314) )
                {
                  v728 = GetLastError();
                  v101 = v728;
                  if ( v728 > 0 )
                    v101 = (unsigned __int16)v728 | 0x80070000;
                  if ( v101 >= 0 )
                    v101 = -2147467259;
                  goto LABEL_845;
                }
LABEL_91:
                v110 = (unsigned int)(v1327 + 1);
                LODWORD(v1327) = v110;
                if ( (unsigned int)v110 < 3 )
                  continue;
                break;
              }
              v1336 = (SIZE_T)v1339;
              v1393 = v1317;
              v1339 = 0LL;
            }
            else
            {
LABEL_86:
              v101 = -2147024882;
            }
LABEL_845:
            Ptr = (unsigned __int16 *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1339);
            if ( Ptr )
            {
              v115 = (void **)Ptr;
              v113 = 3LL;
              v1347 = (void *)3;
              do
              {
                v112 = *v115;
                if ( *v115 )
                {
                  v12 = -1LL;
                  do
                    ++v12;
                  while ( *(_WORD *)&v112[2 * v12] != v114 );
                  for ( ii = 2 * v12 + 2; ii; --ii )
                    *v112++ = v114;
                  MemoryFree(*v115);
                  v113 = (__int64)v1347;
                  v114 = 0;
                }
                ++v115;
                v1347 = (void *)--v113;
              }
              while ( v113 );
            }
            if ( SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1372) )
            {
              v116 = (_BYTE *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1372);
              for ( jj = v1374; jj; --jj )
                *v116++ = v117;
            }
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1339);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1372);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1349);
            if ( v101 < 0 )
              goto LABEL_867;
            v119 = (void **)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1336);
            v1395 = *v119;
            v1396 = v119[1];
            v1397 = v119[2];
            v1388 = 0LL;
            LODWORD(v1388) = 16;
            if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1808D14A8[0])(
                    66LL,
                    0LL,
                    &v1388,
                    0LL) )
            {
              v120 = GetLastError();
              v13 = 0LL;
              v101 = v120;
              if ( v120 > 0 )
                v101 = (unsigned __int16)v120 | 0x80070000;
              v1394 = 0;
              if ( v101 >= 0 )
                v101 = -2147467259;
              goto LABEL_868;
            }
            v1394 = BYTE4(v1388) & 1;
            if ( v93 == 1 )
            {
              LODWORD(v1334) = 42;
            }
            else
            {
              if ( v93 != 2 )
              {
                if ( v93 == 3 )
                {
                  LODWORD(v1334) = 225;
                  LODWORD(v1330) = 225;
                }
LABEL_856:
                LODWORD(lpModuleName) = 96;
                memset_0(v1472, 0, 0xDCuLL);
                v1473 = 220;
                v101 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1808D1420[0])(0LL, 0xFFFFFFFFLL, v1472) )
                {
                  v730 = v1474;
                  LODWORD(v1321) = v1475;
                  LODWORD(v1333) = v1476;
                  if ( v1474 < 0x60u )
                    v730 = 96;
                  LODWORD(lpModuleName) = v730;
                }
                v731 = (unsigned __int16 *)v1324;
                if ( v93 == 1 )
                  v731 = (unsigned __int16 *)v1346;
                Ptr = v731;
                memset_0(v1463, 0, 0x5CuLL);
                v1349 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
                if ( v1349 )
                {
                  v740 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                           (unsigned int)v1334,
                           (unsigned int)lpModuleName,
                           72LL);
                  v1463[4] = 400;
                  v1463[0] = -v740;
                  v1464 = 5;
                  StringCchCopyW((char *)v1465, 32LL, (char *)Ptr);
                  v741 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1463);
                  if ( v741 )
                  {
                    v1398 = (unsigned __int16 *)v741;
                  }
                  else
                  {
                    v101 = GetLastError();
                    v742 = v101 < 0;
                    if ( v101 > 0 )
                    {
                      v101 = (unsigned __int16)v101 | 0x80070000;
                      v742 = v101 < 0;
                    }
                    if ( !v742 )
                      v101 = -2147467259;
                  }
                  ((void (__fastcall *)(_QWORD, SIZE_T))off_1808D14A0[0])(0LL, v1349);
                }
                else
                {
                  v101 = GetLastError();
                  v732 = v101 < 0;
                  if ( v101 > 0 )
                  {
                    v101 = (unsigned __int16)v101 | 0x80070000;
                    v732 = v101 < 0;
                  }
                  if ( !v732 )
                    goto LABEL_866;
                }
                if ( v101 < 0 )
                  goto LABEL_867;
                v743 = v1324;
                if ( v93 == 1 )
                  v743 = (size_t)v1346;
                v1324 = v743;
                memset_0(v1466, 0, 0x5CuLL);
                v101 = 0;
                v13 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
                if ( !v13 )
                {
                  v744 = GetLastError();
                  v101 = v744;
                  if ( v744 > 0 )
                    v101 = (unsigned __int16)v744 | 0x80070000;
                  if ( v101 >= 0 )
                    v101 = -2147467259;
                  goto LABEL_868;
                }
                v745 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                         (unsigned int)v1330,
                         (unsigned int)lpModuleName,
                         72LL);
                v1466[4] = 400;
                v1466[0] = -v745;
                v1467 = 5;
                StringCchCopyW((char *)v1468, 32LL, (char *)v1324);
                v746 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1466);
                if ( v746 )
                {
                  v1399 = (unsigned __int16 *)v746;
                }
                else
                {
                  v101 = GetLastError();
                  v747 = v101 < 0;
                  if ( v101 > 0 )
                  {
                    v101 = (unsigned __int16)v101 | 0x80070000;
                    v747 = v101 < 0;
                  }
                  if ( !v747 )
                    v101 = -2147467259;
                }
                ((void (__fastcall *)(_QWORD, void *))off_1808D14A0[0])(0LL, v13);
                v13 = 0LL;
                if ( v101 < 0 )
                  goto LABEL_868;
                v748 = 0;
                if ( (_DWORD)v1326 != 1 )
                {
                  if ( (_DWORD)v1326 == 2 )
                  {
                    LODWORD(v13) = (int)v1321 / 4;
LABEL_913:
                    *((_QWORD *)&v1360 + 1) = __PAIR64__(v748, (unsigned int)v13);
                    if ( (_DWORD)v1326 == 1 )
                    {
                      v749 = 150;
                      LODWORD(v1329) = 42;
                      LODWORD(v1341) = 150;
                      LODWORD(v1331) = 32;
                    }
                    else
                    {
                      v749 = 0;
                      if ( (unsigned int)(v1326 - 2) <= 1 )
                      {
                        LODWORD(v1329) = 0;
                        LODWORD(v1341) = 0;
                        LODWORD(v1331) = 0;
                      }
                    }
                    v750 = (_DWORD)v13 - v749;
                    v751 = v1395;
                    v1403.m128i_i32[2] = v750;
                    v1402.m128i_i32[2] = v750;
                    Ptr = (unsigned __int16 *)((__int64 (__fastcall *)(LPVOID, unsigned __int16 *))off_1808D13B8)(
                                                v1328,
                                                v1398);
                    v1314 = ((__int64 (__fastcall *)(LPVOID, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                              v1328,
                              v751,
                              0xFFFFFFFFLL,
                              &v1402,
                              3152,
                              0LL);
                    v101 = v1314 == 0 ? 0x80004005 : 0;
                    if ( Ptr )
                      ((void (__fastcall *)(LPVOID, unsigned __int16 *))off_1808D13B8)(v1328, Ptr);
                    if ( !v1314 )
                      goto LABEL_867;
                    v752 = v1396;
                    Ptr = (unsigned __int16 *)((__int64 (__fastcall *)(LPVOID, unsigned __int16 *))off_1808D13B8)(
                                                v1328,
                                                v1399);
                    v1314 = ((__int64 (__fastcall *)(LPVOID, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                              v1328,
                              v752,
                              0xFFFFFFFFLL,
                              &v1403,
                              3152,
                              0LL);
                    v101 = v1314 == 0 ? 0x80004005 : 0;
                    if ( Ptr )
                      ((void (__fastcall *)(LPVOID, unsigned __int16 *))off_1808D13B8)(v1328, Ptr);
                    if ( !v1314 )
                      goto LABEL_867;
                    v753 = v1326;
                    if ( (unsigned int)(v1326 - 2) <= 1 )
                    {
                      v750 = v1403.m128i_i32[2];
                      if ( v1402.m128i_i32[2] > v1403.m128i_i32[2] )
                        v750 = v1402.m128i_i32[2];
                    }
                    if ( v1393 )
                    {
                      off_1808D1490(
                        (CToastCenterExperienceManager *)&v1402,
                        (struct CSingleViewShellExperience *)(unsigned int)(v750 - v1402.m128i_i32[2]));
                      v754 = (unsigned int)(v750 - v1403.m128i_i32[2]);
                    }
                    else
                    {
                      off_1808D1490(
                        (CToastCenterExperienceManager *)&v1402,
                        (struct CSingleViewShellExperience *)(unsigned int)v1341);
                      v754 = (unsigned int)v1341;
                    }
                    ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1808D1490)(
                      &v1403,
                      v754,
                      (unsigned int)((_DWORD)v1331 + v1402.m128i_i32[3]));
                    if ( (unsigned int)(v753 - 2) <= 1 )
                    {
                      *((_QWORD *)&v1360 + 1) = __PAIR64__(v1403.m128i_u32[3], v750);
                      v1401 = -5723992;
                    }
                    else if ( v753 == 1 )
                    {
                      v1401 = 0xFFFFFF;
                      memset_0(v1469, 0, 0x5CuLL);
                      v101 = 0;
                      Ptr = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(
                                                  0LL,
                                                  0LL,
                                                  1027LL);
                      if ( Ptr )
                      {
                        v756 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808D13F8)(
                                 11LL,
                                 (unsigned int)lpModuleName);
                        v1469[4] = 400;
                        v1469[0] = -v756;
                        v1470 = 5;
                        StringCchCopyW((char *)v1471, 32LL, (char *)lpMem);
                        v757 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1469);
                        if ( v757 )
                        {
                          v1400 = v757;
                        }
                        else
                        {
                          v101 = GetLastError();
                          v758 = v101 < 0;
                          if ( v101 > 0 )
                          {
                            v101 = (unsigned __int16)v101 | 0x80070000;
                            v758 = v101 < 0;
                          }
                          if ( !v758 )
                            v101 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, unsigned __int16 *))off_1808D14A0[0])(0LL, Ptr);
                      }
                      else
                      {
                        v101 = GetLastError();
                        v755 = v101 < 0;
                        if ( v101 > 0 )
                        {
                          v101 = (unsigned __int16)v101 | 0x80070000;
                          v755 = v101 < 0;
                        }
                        if ( !v755 )
                        {
LABEL_866:
                          v101 = -2147467259;
LABEL_867:
                          v13 = 0LL;
LABEL_868:
                          ((void (__fastcall *)(_QWORD, LPVOID))off_1808D14A0[0])(0LL, v1328);
                          goto LABEL_869;
                        }
                      }
                      if ( v101 < 0 )
                        goto LABEL_867;
                      v759 = v1397;
                      v1406 = v750;
                      v760 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1808D13B8)(v1328, v1400);
                      v761 = ((__int64 (__fastcall *)(LPVOID, void *, __int64, unsigned int *, int, _QWORD))off_1808D1418)(
                               v1328,
                               v759,
                               0xFFFFFFFFLL,
                               &v1404,
                               1120,
                               0LL);
                      v1314 = v761;
                      v101 = v761 == 0 ? 0x80004005 : 0;
                      if ( v760 )
                      {
                        ((void (__fastcall *)(LPVOID, __int64))off_1808D13B8)(v1328, v760);
                        v761 = v1314;
                      }
                      v13 = 0LL;
                      if ( !v761 )
                        goto LABEL_868;
                      v762 = (unsigned int)lpModuleName;
                      v763 = v1406 + 24;
                      if ( (int)(v1406 + 24) < 90 )
                        v763 = 90;
                      v1406 = v763;
                      v1407 = 32;
                      v1404 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                v1404,
                                (unsigned int)lpModuleName,
                                96LL);
                      v1405 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1405, v762, 96LL);
                      v1406 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1406, v762, 96LL);
                      v1407 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1407, v762, 96LL);
                      if ( v1393 )
                      {
                        v764 = v1402.m128i_u32[0];
                        if ( v1402.m128i_i32[0] >= v1403.m128i_i32[0] )
                          v764 = v1403.m128i_u32[0];
                      }
                      else
                      {
                        v765 = v1402.m128i_i32[2];
                        if ( v1402.m128i_i32[2] <= v1403.m128i_i32[2] )
                          v765 = v1403.m128i_i32[2];
                        v764 = v1404 + v765 - v1406;
                      }
                      off_1808D1490((CToastCenterExperienceManager *)&v1404, (struct CSingleViewShellExperience *)v764);
                      v753 = v1326;
                    }
                    v766 = DWORD2(v1360);
                    v1314 = v1393;
                    LODWORD(v1317) = HIDWORD(v1360);
                    v767 = v753 - 1;
                    if ( !v767 )
                    {
                      v13 = 0LL;
                      *(_QWORD *)&v1360 = 0LL;
LABEL_965:
                      v101 = 0;
                      goto LABEL_868;
                    }
                    v768 = v767 - 1;
                    if ( v768 )
                    {
                      if ( v768 != 1 )
                        goto LABEL_964;
                      v1461 = 0LL;
                      v1459 = 0LL;
                      v1460 = 0LL;
                      v769 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1459) = 40;
                      if ( !(unsigned int)off_1808D1448(v769, (struct CSingleViewShellExperience *)&v1459) )
                        goto LABEL_964;
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1460 + 4));
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1460 + 12));
                      v770 = 50 * (HIDWORD(v1460) - v766) / 100;
                      v771 = 50 * (v1461 - v1317);
                    }
                    else
                    {
                      v1446 = 0LL;
                      v1444 = 0LL;
                      v1445 = 0LL;
                      v772 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1444) = 40;
                      if ( !(unsigned int)off_1808D1448(v772, (struct CSingleViewShellExperience *)&v1444) )
                        goto LABEL_964;
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1445 + 4));
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1445 + 12));
                      if ( v1314 )
                        v770 = DWORD1(v1445) + 5 * HIDWORD(v1445) / 100;
                      else
                        v770 = 95 * (HIDWORD(v1445) - v766) / 100;
                      v771 = 95 * (v1446 - v1317);
                    }
                    LODWORD(v1360) = v770;
                    DWORD1(v1360) = v771 / 100;
LABEL_964:
                    v13 = 0LL;
                    goto LABEL_965;
                  }
                  if ( (_DWORD)v1326 != 3 )
                    goto LABEL_913;
                }
                LODWORD(v13) = (_DWORD)v1321;
                v748 = v1333;
                goto LABEL_913;
              }
              LODWORD(v1334) = 15;
            }
            LODWORD(v1330) = 11;
            goto LABEL_856;
          }
          v1347 = (void *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1327);
          if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, void *, unsigned int *))off_1808D13E0[0])(
                 8LL,
                 &v1356,
                 v1347,
                 &v1364) )
          {
            if ( v1356 )
            {
              v43 = (char *)v1347;
              v44 = 0;
              v42 = (WCHAR *)lpModuleName;
              do
              {
                v719 = ((__int64 (__fastcall *)(char *, _QWORD))off_1808D13F0)(v43, 0LL);
                v7 = -1LL;
                *(_DWORD *)v42 = v719;
                do
                  ++v7;
                while ( *((_WORD *)v1347 + v7) );
                v42 += 2;
                v43 = (char *)v1347 + 2 * v7 + 2;
                ++v44;
                v1347 = v43;
              }
              while ( v44 < v1356 );
              lpModuleName = v42;
            }
            *(_DWORD *)lpModuleName = 1033;
            v1349 = (SIZE_T)v1325;
            v1325 = 0LL;
            LODWORD(v1317) = v1356 + 1;
            goto LABEL_67;
          }
        }
        v101 = GetLastError();
        v716 = v101 < 0;
        if ( v101 > 0 )
        {
          v101 = (unsigned __int16)v101 | 0x80070000;
          v716 = v101 < 0;
        }
        if ( !v716 )
          v101 = -2147467259;
        goto LABEL_67;
      }
      v667 = dword_1808DDD3C;
LABEL_803:
      dword_1808DDD3C = v667 + 1;
      goto LABEL_804;
    }
    v619 = dword_1808DDD3C;
LABEL_767:
    dword_1808DDD3C = v619 + 1;
    goto LABEL_768;
  }
  v210 = v1314;
LABEL_1579:
  while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
    ;
  v1310 = dword_1808DDD3C;
  if ( dword_1808DDD3C > 0 )
  {
    --dword_1808DDD3C;
    if ( v1310 == 1 )
    {
      v1311 = 4LL;
      v1312 = (HMODULE *)&unk_1808DA540;
      do
      {
        if ( *v1312 )
          FreeLibrary(*v1312);
        v1312 += 3;
        --v1311;
      }
      while ( v1311 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1808DDD40, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1368);
  if ( v209 < 0 )
  {
    switch ( v209 )
    {
      case -805306316:
        v1352 = -1073418222;
LABEL_1596:
        v1313 = v1366;
        goto LABEL_1600;
      case -805306139:
      case -1073425151:
        v1352 = -1073418201;
        goto LABEL_1596;
      case -805306306:
        v1352 = -1073418200;
        goto LABEL_1596;
    }
    v1352 = v209;
    if ( v209 != -2147024774 )
      goto LABEL_1596;
LABEL_1595:
    v1352 = -1073418210;
    goto LABEL_1596;
  }
  if ( v210 != 4 )
    goto LABEL_1595;
  v1313 = *(_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1377);
LABEL_1600:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1377);
  if ( v1352 < 0 || !v1313 )
    v140 = 0;
  byte_1808DE458 = v140;
  Init_thread_footer(&dword_1808DE440);
  return byte_1808DE458;
}
