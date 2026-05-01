/*
 * XREFs of ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x18004A918
 * Callers:
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x18004A8E8 (-HampSystemCdplIsManaged@@YAKXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18001B970 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18005FF44 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x180068480 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18006864C (RtlUIntAdd.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18006C2D0 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     StringCchLengthW @ 0x18006CBF4 (StringCchLengthW.c)
 *     StringLengthWorkerW @ 0x18006CC1C (StringLengthWorkerW.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x18006E880 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x18006EA34 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ??$GetPtrAs@PEAG@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEBAPEAPEAGXZ @ 0x1800986E8 (--$GetPtrAs@PEAG@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEBAPEAPEAGXZ.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x1800986FC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     wcscmp_0 @ 0x1800A28E6 (wcscmp_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CdplIsSupportedInl(int *a1)
{
  __int64 v2; // r13
  int v3; // ebx
  int v4; // eax
  char *v5; // rax
  __int64 v6; // rsi
  _BYTE *v7; // r15
  int v8; // eax
  unsigned __int8 *v9; // r12
  int v10; // r14d
  int v11; // r10d
  int v12; // edi
  int v13; // ebx
  int v14; // r11d
  int v15; // ecx
  int v16; // ebx
  int v17; // r10d
  int v18; // r11d
  unsigned int v19; // edx
  int v20; // r8d
  unsigned int v21; // r9d
  int v22; // edx
  int v23; // r8d
  unsigned int v24; // r9d
  int v25; // r10d
  int v26; // edx
  int v27; // r8d
  unsigned int v28; // r9d
  int v29; // edx
  int v30; // r8d
  unsigned int v31; // r10d
  unsigned int v32; // r8d
  int v33; // r9d
  int v34; // edx
  unsigned int v35; // r8d
  int v36; // r9d
  int v37; // edx
  int v38; // r8d
  unsigned int v39; // r9d
  _BYTE *v40; // rdi
  unsigned __int64 v41; // rcx
  char v42; // al
  int v43; // esi
  __int64 v44; // rdi
  HMODULE *v45; // rbx
  _BYTE *v47; // rdi
  HMODULE *v48; // rbx
  unsigned int v49; // eax
  unsigned int v50; // r14d
  const CHAR *v51; // rdx
  __int64 v52; // rax
  __int64 (__fastcall *ProcAddress)(); // rcx
  unsigned int v54; // r15d
  const WCHAR *v55; // rdx
  __int64 v56; // rax
  wchar_t *v57; // rsi
  void *v58; // rdi
  int v59; // r15d
  signed int v60; // r14d
  __int64 v61; // rsi
  unsigned int v62; // eax
  HLOCAL v63; // rax
  void *v64; // r14
  void *v65; // rbx
  int v66; // r12d
  int v67; // r15d
  int v68; // eax
  int v69; // edi
  HANDLE v70; // rax
  _OWORD *v71; // rax
  void *v72; // r15
  HANDLE v73; // rax
  _QWORD *v74; // rax
  const wchar_t *v75; // rcx
  unsigned int v76; // ecx
  _DWORD *v77; // rdx
  unsigned int k; // r8d
  unsigned int v79; // eax
  HANDLE v80; // rax
  HANDLE v81; // rax
  void *v82; // r15
  void *v83; // r10
  unsigned int v84; // ecx
  _DWORD *v85; // rdx
  unsigned int n; // r8d
  unsigned int v87; // eax
  unsigned int v88; // r11d
  unsigned int v89; // r9d
  unsigned int v90; // ecx
  unsigned int v91; // edx
  unsigned int v92; // eax
  unsigned int v93; // ecx
  unsigned int v94; // eax
  int v95; // edx
  unsigned int v96; // r15d
  HANDLE v97; // rax
  _DWORD *v98; // rax
  unsigned __int8 v99; // al
  unsigned __int64 m; // rcx
  size_t v101; // r11
  SIZE_T v102; // r15
  void *v103; // r15
  void *v104; // r15
  LPVOID v105; // r15
  void *v106; // r15
  WCHAR *v107; // rcx
  void *v108; // r10
  int v109; // r11d
  int *v110; // r12
  size_t v111; // r12
  unsigned __int8 v112; // al
  unsigned __int64 v113; // rcx
  SIZE_T v114; // rcx
  int v115; // r9d
  char *v116; // r11
  unsigned int v117; // r8d
  unsigned int v118; // r10d
  unsigned __int64 v119; // r12
  unsigned __int8 *v120; // r10
  int v121; // eax
  SIZE_T v122; // rsi
  int v123; // r14d
  int v124; // r13d
  unsigned int v125; // ebx
  int v126; // r15d
  int v127; // r11d
  int v128; // edx
  int v129; // r9d
  int v130; // r10d
  int v131; // r8d
  int v132; // r9d
  unsigned int v133; // edx
  int v134; // r8d
  int v135; // ecx
  int v136; // edx
  int v137; // r8d
  int v138; // r9d
  int v139; // edx
  unsigned int v140; // r8d
  unsigned int v141; // r9d
  int v142; // edx
  int v143; // r8d
  int v144; // r9d
  int v145; // edx
  int v146; // r8d
  int v147; // r9d
  int v148; // r10d
  int v149; // r8d
  unsigned int v150; // edx
  int v151; // r8d
  int v152; // r9d
  _BYTE *v153; // rdx
  HANDLE v154; // rax
  _QWORD *v155; // r15
  int v156; // r12d
  unsigned int v157; // r12d
  HANDLE v158; // rax
  void *v159; // rax
  HANDLE v160; // rax
  _OWORD *v161; // rax
  HANDLE v162; // rax
  _QWORD *v163; // rax
  HANDLE v164; // rax
  SIZE_T v165; // rax
  SIZE_T v166; // r15
  LPVOID v167; // r10
  unsigned int v168; // r11d
  int v169; // r12d
  unsigned int v170; // r11d
  _DWORD *v171; // rcx
  int v172; // eax
  unsigned int v173; // r10d
  _DWORD *v174; // rcx
  unsigned int v175; // edx
  SIZE_T v176; // r10
  void *v177; // r9
  void *v178; // r12
  _DWORD *v179; // rax
  SIZE_T v180; // rdx
  _DWORD *v181; // r9
  void *v182; // r8
  LPCWSTR v183; // r10
  void *v184; // r15
  int v185; // r11d
  SIZE_T v186; // rcx
  unsigned int v187; // r8d
  unsigned __int64 v188; // r10
  int v189; // r14d
  _BYTE *v190; // r13
  int v191; // edi
  unsigned __int8 *v192; // rdx
  int v193; // ebx
  int v194; // r10d
  SIZE_T v195; // rax
  int v196; // r12d
  int v197; // r15d
  int v198; // edx
  unsigned int v199; // r8d
  int v200; // r9d
  unsigned int v201; // edx
  int v202; // r8d
  int v203; // r9d
  unsigned int v204; // edx
  int v205; // r8d
  int v206; // r10d
  int v207; // r11d
  unsigned int v208; // r9d
  int v209; // r8d
  unsigned int v210; // r9d
  int v211; // r10d
  int v212; // r11d
  int v213; // edx
  int v214; // r8d
  unsigned int v215; // r9d
  int v216; // edx
  int v217; // r10d
  int v218; // r8d
  unsigned int v219; // edx
  int v220; // r11d
  int v221; // ecx
  int v222; // r8d
  int v223; // r8d
  int v224; // r11d
  unsigned int v225; // r9d
  int v226; // r11d
  unsigned int v227; // r10d
  int v228; // r9d
  __int64 v229; // r11
  LPVOID v230; // rcx
  unsigned int v231; // r9d
  int v232; // eax
  unsigned int v233; // r10d
  unsigned int v234; // r9d
  __int64 v235; // r11
  void *v236; // rcx
  int v237; // r9d
  _DWORD *v238; // rcx
  unsigned int v239; // r9d
  int v240; // r9d
  _DWORD *v241; // rcx
  unsigned int v242; // r9d
  int v243; // eax
  unsigned int v244; // r11d
  int v245; // eax
  int v246; // r9d
  unsigned int v247; // r10d
  unsigned int v248; // r15d
  HANDLE v249; // rax
  _DWORD *v250; // r15
  unsigned int v251; // r15d
  HANDLE v252; // rax
  WCHAR *v253; // rax
  SIZE_T v254; // rax
  const WCHAR *v255; // r15
  int v256; // eax
  void *v257; // r9
  size_t v258; // r10
  __int64 v259; // rcx
  unsigned int v260; // r12d
  HANDLE v261; // rax
  void *v262; // r15
  FARPROC v263; // rax
  int v264; // eax
  unsigned int v265; // r11d
  SIZE_T v266; // r9
  SIZE_T v267; // r10
  void *v268; // rcx
  LPCWSTR v269; // rdx
  HANDLE v270; // rax
  void *v271; // rax
  HANDLE v272; // rax
  void *v273; // rax
  int v274; // r12d
  unsigned __int64 v275; // rax
  unsigned int v276; // r12d
  HANDLE v277; // rax
  void *v278; // rax
  void *v279; // r12
  __int64 v280; // rax
  char *v281; // rdx
  HANDLE ProcessHeap; // rax
  signed int v283; // eax
  wchar_t *v284; // rbx
  wchar_t *v285; // rax
  wchar_t *v286; // rcx
  wchar_t *i; // r12
  signed int LastError; // eax
  __int64 (__fastcall *v289)(); // rbx
  DWORD CurrentThreadId; // eax
  signed int v291; // eax
  void *v292; // rbx
  void *v293; // rax
  void *v294; // rcx
  void *j; // r12
  signed int v296; // eax
  HANDLE CurrentProcess; // rax
  signed int v298; // eax
  void *v299; // r10
  unsigned int v300; // r11d
  size_t v301; // rdx
  const wchar_t *v302; // rcx
  unsigned int *v303; // r11
  unsigned int v304; // eax
  __int64 v305; // rdx
  __int64 v306; // r11
  void *v307; // r10
  _DWORD *v308; // r11
  _QWORD *v309; // rax
  unsigned int *v310; // r9
  unsigned int v311; // eax
  __int64 v312; // rdx
  __int64 v313; // r9
  _DWORD *v314; // r9
  __int64 v315; // r10
  void *v316; // rcx
  unsigned int *v317; // r9
  unsigned int v318; // eax
  __int64 v319; // rdx
  __int64 v320; // r9
  void *v321; // r10
  unsigned int *v322; // r9
  _DWORD *v323; // rax
  unsigned int v324; // ecx
  unsigned int v325; // r9d
  unsigned int v326; // r10d
  int v327; // r11d
  unsigned int *v328; // r11
  unsigned int v329; // eax
  __int64 v330; // rdx
  __int64 v331; // r11
  void *v332; // r10
  unsigned int *v333; // r11
  _DWORD *v334; // rax
  __int64 v335; // rcx
  unsigned int v336; // r9d
  unsigned int v337; // r10d
  unsigned int v338; // r10d
  unsigned int v339; // r10d
  unsigned int v340; // r10d
  unsigned int v341; // r9d
  int v342; // r12d
  unsigned int v343; // ecx
  unsigned int v344; // r9d
  void *v345; // rcx
  HANDLE v346; // rax
  unsigned int v347; // ecx
  int v348; // r9d
  char v349; // r14
  unsigned __int8 *v350; // rsi
  int v351; // r11d
  unsigned __int8 *v352; // rbx
  unsigned int v353; // r9d
  int v354; // edx
  unsigned int v355; // ecx
  unsigned int v356; // edi
  _BYTE *v357; // r15
  char v358; // r12
  SIZE_T v359; // rax
  HANDLE v360; // rax
  HANDLE v361; // rax
  HANDLE v362; // rax
  HANDLE v363; // rax
  HANDLE v364; // rax
  HANDLE v365; // rax
  HANDLE v366; // rax
  HANDLE v367; // rax
  const void **v368; // r15
  WCHAR *v369; // rcx
  int v370; // eax
  LPCWSTR v371; // r9
  SIZE_T v372; // rcx
  int v373; // eax
  SIZE_T v374; // rcx
  WCHAR *v375; // r15
  HANDLE v376; // rax
  unsigned int v377; // r10d
  unsigned int v378; // r10d
  unsigned int v379; // r10d
  unsigned int v380; // r9d
  unsigned int v381; // eax
  int v382; // r12d
  signed int v383; // eax
  SIZE_T v384; // r9
  size_t v385; // r10
  int v386; // r11d
  int v387; // r11d
  int v388; // r11d
  int v389; // r11d
  int v390; // r11d
  int v391; // r11d
  HANDLE v392; // rax
  _QWORD *v393; // rax
  _QWORD *v394; // r15
  HANDLE v395; // rax
  HANDLE v396; // rax
  HANDLE v397; // rax
  HANDLE v398; // rax
  HANDLE v399; // rax
  HANDLE v400; // rax
  HANDLE v401; // rax
  HANDLE v402; // rax
  char v403; // bl
  int v404; // eax
  SIZE_T v405; // r14
  int v406; // edx
  int v407; // ecx
  int v408; // r10d
  unsigned int v409; // edx
  int v410; // r11d
  _BYTE *v411; // r12
  char v412; // r15
  SIZE_T v413; // r10
  size_t v414; // r15
  void *v415; // r9
  SIZE_T v416; // r10
  void *v417; // r9
  SIZE_T v418; // r10
  void *v419; // r9
  void *v420; // r9
  SIZE_T v421; // r10
  void *v422; // r11
  LPVOID v423; // r9
  SIZE_T v424; // r10
  unsigned int *v425; // r9
  SIZE_T v426; // r10
  __int64 v427; // rdx
  __int64 v428; // r9
  HANDLE v429; // rax
  SIZE_T v430; // r15
  void *v431; // rcx
  int v432; // eax
  HANDLE v433; // rax
  HANDLE v434; // rax
  HANDLE v435; // rax
  HANDLE v436; // rax
  HANDLE v437; // rax
  HANDLE v438; // rax
  HANDLE v439; // rax
  HANDLE v440; // rax
  HANDLE v441; // rax
  HANDLE v442; // rax
  HANDLE v443; // rax
  HANDLE v444; // rax
  int v445; // r9d
  void *v446; // r10
  SIZE_T *v447; // rax
  SIZE_T v448; // rax
  int v449; // r9d
  int *v450; // rax
  int v451; // eax
  int v452; // r9d
  int *v453; // rax
  int v454; // eax
  int v455; // r9d
  size_t v456; // r10
  const void *v457; // r11
  unsigned int *v458; // rax
  unsigned int v459; // ecx
  HANDLE v460; // rax
  HANDLE v461; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v463; // rcx
  __int64 v464; // rax
  unsigned int v465; // ebx
  int v466; // eax
  const WCHAR *v467; // rax
  __int64 v468; // r14
  int v469; // ebx
  _BYTE *v470; // rsi
  int v471; // r10d
  unsigned __int8 *v472; // rdi
  int v473; // r8d
  int v474; // eax
  int v475; // r15d
  int v476; // r11d
  int v477; // ecx
  int v478; // r15d
  int v479; // edx
  int v480; // r11d
  unsigned int v481; // r8d
  int v482; // r9d
  unsigned int v483; // r10d
  int v484; // edx
  int v485; // r8d
  unsigned int v486; // r9d
  int v487; // r10d
  int v488; // edx
  int v489; // r8d
  unsigned int v490; // r9d
  int v491; // edx
  int v492; // r8d
  unsigned int v493; // r10d
  unsigned int v494; // r8d
  int v495; // r9d
  int v496; // edx
  unsigned int v497; // r8d
  int v498; // r9d
  int v499; // edx
  int v500; // r8d
  unsigned int v501; // r9d
  int v502; // r10d
  int v503; // ecx
  char v504; // al
  unsigned __int64 v505; // rcx
  const WCHAR *v506; // r15
  __int64 v507; // rax
  HMODULE *v508; // r15
  const WCHAR *v509; // rdx
  __int64 v510; // rax
  const WCHAR *v511; // r15
  LPVOID v512; // r9
  int v513; // edx
  __int64 v514; // rax
  __int64 v515; // rax
  unsigned __int64 v516; // r8
  unsigned int v517; // ecx
  unsigned int v518; // eax
  const CHAR *v519; // rcx
  __int64 v520; // rax
  __int64 (__fastcall *v521)(); // rcx
  int v522; // r15d
  HANDLE v523; // rax
  int v524; // eax
  const WCHAR *v525; // rax
  __int64 v526; // r14
  int v527; // ebx
  _BYTE *v528; // rdi
  int v529; // r8d
  unsigned __int8 *v530; // rsi
  int v531; // r10d
  int v532; // eax
  int v533; // r15d
  int v534; // r11d
  int v535; // ecx
  int v536; // r15d
  int v537; // r10d
  int v538; // r11d
  unsigned int v539; // edx
  int v540; // r8d
  unsigned int v541; // r9d
  int v542; // edx
  int v543; // r8d
  unsigned int v544; // r9d
  int v545; // r10d
  int v546; // edx
  int v547; // r8d
  unsigned int v548; // r9d
  int v549; // edx
  int v550; // r8d
  unsigned int v551; // r10d
  unsigned int v552; // r8d
  int v553; // r9d
  int v554; // edx
  unsigned int v555; // r8d
  int v556; // r9d
  int v557; // edx
  int v558; // r8d
  unsigned int v559; // r9d
  int v560; // edx
  int v561; // r10d
  char v562; // al
  unsigned __int64 v563; // rcx
  const WCHAR *v564; // r15
  __int64 v565; // rax
  HMODULE *v566; // r15
  const WCHAR *v567; // rdx
  __int64 v568; // rax
  const WCHAR *v569; // r15
  SIZE_T v570; // r9
  int v571; // edx
  __int64 v572; // rax
  __int64 v573; // rax
  unsigned __int64 v574; // r8
  unsigned int v575; // ecx
  unsigned int v576; // eax
  const CHAR *v577; // rcx
  __int64 v578; // rax
  __int64 (__fastcall *v579)(); // rcx
  int v580; // r15d
  HANDLE v581; // rax
  signed int v582; // eax
  signed int v583; // ebx
  unsigned int v584; // r15d
  signed int v585; // eax
  void *v586; // rax
  void *v587; // rax
  __int64 v588; // r15
  signed int v589; // eax
  _DWORD *v590; // rdi
  unsigned int mm; // esi
  __int64 v592; // rax
  unsigned int v593; // eax
  unsigned int v594; // r10d
  __int64 v595; // r9
  unsigned int ii; // r8d
  __int64 Ptr; // rax
  unsigned int v598; // r8d
  __int64 v599; // r11
  __int64 v600; // r15
  __int64 v601; // rcx
  const wchar_t *v602; // rcx
  const wchar_t **v603; // rdx
  __int64 v604; // r8
  __int64 v605; // rax
  char *v606; // rax
  _BYTE *v607; // rbx
  int v608; // r15d
  unsigned __int8 *v609; // rdi
  int v610; // r14d
  int v611; // r9d
  int v612; // edx
  __int64 v613; // rsi
  int v614; // r11d
  int v615; // r10d
  int v616; // eax
  int v617; // r11d
  int v618; // ecx
  int v619; // r10d
  unsigned int v620; // edx
  int v621; // r8d
  unsigned int v622; // r9d
  int v623; // ecx
  int v624; // edx
  unsigned int v625; // r8d
  int v626; // r9d
  int v627; // ecx
  int v628; // edx
  unsigned int v629; // r8d
  int v630; // ecx
  int v631; // edx
  unsigned int v632; // r9d
  unsigned int v633; // edx
  int v634; // r8d
  int v635; // ecx
  unsigned int v636; // edx
  int v637; // r8d
  int v638; // ecx
  int v639; // edx
  unsigned int v640; // r8d
  int v641; // r9d
  int v642; // eax
  unsigned __int64 v643; // rax
  __m128 v644; // xmm1
  __m128 v645; // xmm0
  __m128 v646; // xmm0
  __m128 v647; // xmm1
  __m128 v648; // xmm1
  __m128 v649; // xmm1
  __int64 v650; // rax
  __int64 v651; // r11
  int v652; // r10d
  __int64 *v653; // r8
  __int64 v654; // rdx
  __int64 v655; // r9
  unsigned int v656; // ecx
  __int64 v657; // rax
  void *v658; // rax
  SIZE_T v659; // rax
  unsigned int v660; // eax
  unsigned int v661; // ecx
  __int64 v662; // r15
  __int64 v663; // r9
  int v664; // eax
  void *v665; // rcx
  __int64 v666; // r9
  signed int v667; // eax
  void **v668; // r15
  __int64 v669; // rdi
  _BYTE *v670; // rax
  __int64 v671; // rcx
  __int64 jj; // rcx
  _BYTE *v673; // rax
  __int64 v674; // rdx
  __int64 kk; // rcx
  void **v676; // rax
  signed int v677; // eax
  int v678; // ebx
  unsigned int v679; // r15d
  void *v680; // rax
  int v681; // eax
  __int64 v682; // rax
  signed int v683; // eax
  signed int v684; // eax
  void *v685; // rax
  int v686; // eax
  __int64 v687; // rax
  signed int v688; // eax
  int v689; // r15d
  unsigned int v690; // edx
  int v691; // eax
  __int32 v692; // r15d
  void *v693; // rbx
  void *v694; // rbx
  int v695; // ebx
  __int64 v696; // rdx
  int v697; // eax
  __int64 v698; // rax
  signed int v699; // eax
  void *v700; // rbx
  __int64 v701; // r15
  unsigned int v702; // ebx
  int v703; // eax
  unsigned __int64 v704; // rdx
  __int32 v705; // edx
  int v706; // r15d
  int v707; // ebx
  HAM_ACTIVITY_RM_CONTEXT *v708; // rax
  int v709; // edx
  int v710; // ecx
  HAM_ACTIVITY_RM_CONTEXT *v711; // rax
  int v712; // r15d
  int v713; // eax
  SIZE_T v714; // rax
  HMODULE *v715; // r15
  unsigned int v716; // ebx
  __int64 v717; // rax
  int v718; // ebx
  int v719; // eax
  void *v720; // rbx
  SIZE_T v721; // rbx
  __int64 v722; // rax
  SIZE_T v723; // rax
  HAM_ACTIVITY_RM_CONTEXT *v724; // r15
  void *v725; // rbx
  signed int v726; // eax
  signed int v727; // ebx
  bool v728; // zf
  void *v729; // rcx
  SIZE_T v730; // rax
  __int64 (__fastcall *v731)(); // rbx
  __int64 v732; // rax
  __int32 v733; // r11d
  __int32 v734; // r9d
  __int32 v735; // r8d
  __int32 v736; // edx
  int v737; // ecx
  int v738; // eax
  size_t v739; // rsi
  char v740; // di
  __int64 v741; // rax
  signed int v742; // r9d
  int v743; // r8d
  unsigned __int8 *v744; // rdx
  char *v745; // rax
  unsigned __int8 *v746; // r10
  __int64 v747; // r11
  size_t v748; // r8
  int v749; // r9d
  int v750; // ecx
  int v751; // r8d
  int v752; // edx
  int v753; // ecx
  int v754; // r8d
  int v755; // edx
  int v756; // r8d
  int v757; // ecx
  void *v758; // rbx
  SIZE_T v759; // rbx
  __int64 v760; // rax
  __int64 v761; // rax
  HAM_ACTIVITY_RM_CONTEXT *v762; // r15
  SIZE_T v763; // rbx
  signed int v764; // eax
  signed int v765; // ebx
  void *v766; // rcx
  SIZE_T v767; // rax
  __int64 (__fastcall *v768)(); // rbx
  __int64 v769; // rax
  int v770; // eax
  __int32 v771; // r11d
  __int32 v772; // r9d
  __int32 v773; // r8d
  __int32 v774; // edx
  int v775; // ecx
  int v776; // eax
  unsigned int v777; // edi
  __int64 v778; // rax
  signed int v779; // r9d
  unsigned __int8 *v780; // rdx
  char *v781; // rax
  char v782; // r14
  unsigned __int8 *v783; // r10
  SIZE_T v784; // r8
  __int64 v785; // r11
  int v786; // r9d
  int v787; // ecx
  int v788; // r8d
  int v789; // edx
  int v790; // ecx
  int v791; // r8d
  int v792; // edx
  int v793; // r8d
  int v794; // ecx
  SIZE_T v795; // rbx
  char v796; // al
  __int32 v797; // r15d
  __int32 v798; // ebx
  __int32 v799; // eax
  __int32 v800; // r9d
  __int32 v801; // r8d
  SIZE_T v802; // rax
  void *v803; // rbx
  __int64 v804; // rax
  size_t v805; // rax
  HAM_ACTIVITY_RM_CONTEXT *v806; // rbx
  SIZE_T v807; // rcx
  __int64 v808; // rax
  __int64 v809; // rcx
  _BYTE *nn; // rax
  __int64 v811; // rax
  __int64 v812; // rcx
  _BYTE *i1; // rax
  _BYTE *v814; // rcx
  __int64 v815; // rax
  __int64 v816; // rax
  __int64 v817; // rcx
  int v818; // eax
  HMODULE *v819; // rbx
  __int64 v820; // r15
  int v821; // ebx
  int v822; // eax
  const WCHAR *v823; // rax
  signed int v824; // eax
  signed int v825; // ebx
  SIZE_T v826; // rcx
  const WCHAR *v827; // rax
  __int64 (__fastcall *v828)(); // rbx
  __int64 v829; // rax
  int v830; // ecx
  SIZE_T v831; // r9
  int v832; // edx
  int v833; // ebx
  int v834; // r8d
  int v835; // eax
  int v836; // ecx
  int v837; // r11d
  int v838; // eax
  unsigned __int64 v839; // rdi
  char v840; // si
  char *v841; // rdx
  __int64 v842; // rcx
  signed int v843; // r9d
  SIZE_T v844; // rax
  unsigned __int8 *v845; // r10
  SIZE_T v846; // r11
  char *v847; // r8
  int v848; // r9d
  int v849; // ecx
  int v850; // r8d
  int v851; // edx
  int v852; // ecx
  int v853; // r8d
  int v854; // edx
  int v855; // r8d
  int v856; // ecx
  void *v857; // rbx
  __int64 v858; // rax
  __int64 v859; // rax
  HAM_ACTIVITY_RM_CONTEXT *v860; // r15
  int v861; // ebx
  const WCHAR *v862; // rax
  signed int v863; // eax
  signed int v864; // ebx
  void *v865; // rcx
  __int64 v866; // rax
  __int64 (__fastcall *v867)(); // rbx
  __int64 v868; // rax
  int v869; // eax
  int v870; // ecx
  SIZE_T v871; // r9
  int v872; // edx
  int v873; // ebx
  int v874; // r8d
  int v875; // eax
  int v876; // ecx
  int v877; // r11d
  int v878; // eax
  unsigned int v879; // esi
  unsigned __int8 *v880; // rdx
  __int64 v881; // rcx
  signed int v882; // r9d
  size_t v883; // rax
  char v884; // r14
  unsigned __int8 *v885; // r10
  SIZE_T v886; // r8
  size_t v887; // r11
  int v888; // r9d
  int v889; // ecx
  int v890; // r8d
  int v891; // edx
  int v892; // ecx
  int v893; // r8d
  int v894; // edx
  int v895; // r8d
  int v896; // ecx
  int v897; // eax
  const WCHAR *v898; // rax
  _BYTE *v899; // rsi
  int v900; // r14d
  unsigned __int8 *v901; // r15
  int v902; // edi
  int v903; // r10d
  int v904; // eax
  int v905; // ebx
  int v906; // r11d
  int v907; // ecx
  int v908; // ebx
  int v909; // r10d
  int v910; // r11d
  unsigned int v911; // edx
  int v912; // r8d
  unsigned int v913; // r9d
  int v914; // edx
  int v915; // r8d
  unsigned int v916; // r9d
  int v917; // r10d
  int v918; // edx
  int v919; // r8d
  unsigned int v920; // r9d
  int v921; // edx
  int v922; // r8d
  unsigned int v923; // r10d
  unsigned int v924; // r8d
  int v925; // r9d
  int v926; // edx
  unsigned int v927; // r8d
  int v928; // r9d
  int v929; // edx
  int v930; // r8d
  unsigned int v931; // r9d
  char v932; // al
  unsigned __int64 v933; // rcx
  const WCHAR *v934; // r15
  HMODULE *v935; // rbx
  __int64 v936; // r15
  const WCHAR *v937; // rdx
  __int64 v938; // rax
  const WCHAR *v939; // r15
  size_t v940; // r8
  int v941; // ebx
  __int64 v942; // rax
  __int64 v943; // rax
  unsigned __int64 v944; // rdx
  unsigned int v945; // ecx
  unsigned int v946; // eax
  const CHAR *v947; // rdx
  __int64 v948; // rax
  __int64 (__fastcall *v949)(); // rcx
  WCHAR *v950; // r15
  HANDLE v951; // rax
  __int64 v952; // r15
  int v953; // eax
  HMODULE *v954; // rbx
  void *v955; // rbx
  HANDLE v956; // rax
  SIZE_T v957; // r15
  HANDLE v958; // rax
  _QWORD *v959; // rax
  int v960; // eax
  void *v961; // r10
  unsigned int v962; // r11d
  unsigned int v963; // r11d
  unsigned int v964; // r11d
  unsigned int v965; // ebx
  HANDLE v966; // rax
  void *v967; // rax
  __int64 v968; // r9
  unsigned int v969; // r10d
  _DWORD *v970; // r11
  _DWORD *v971; // rax
  __int64 v972; // rcx
  unsigned int v973; // r11d
  void *v974; // rdi
  void *v975; // rsi
  HANDLE v976; // rax
  HANDLE v977; // rax
  HANDLE v978; // rax
  HANDLE v979; // rax
  unsigned int *v980; // r9
  unsigned int v981; // eax
  __int64 v982; // rdx
  __int64 v983; // r9
  unsigned int *v984; // r9
  unsigned int v985; // r10d
  unsigned int v986; // r9d
  int v987; // r10d
  unsigned int v988; // r11d
  unsigned int *v989; // r10
  unsigned int v990; // eax
  __int64 v991; // rdx
  __int64 v992; // r10
  _DWORD *v993; // r10
  __int64 v994; // r11
  unsigned int v995; // r9d
  int v996; // r10d
  unsigned int v997; // r11d
  unsigned int *v998; // r10
  unsigned int v999; // r11d
  __int64 v1000; // rdx
  __int64 v1001; // r10
  int v1002; // r11d
  _DWORD *v1003; // r10
  _QWORD *v1004; // rax
  SIZE_T v1005; // rcx
  __int64 v1006; // rcx
  unsigned int v1007; // r9d
  int v1008; // ebx
  unsigned int v1009; // r9d
  unsigned int v1010; // ecx
  unsigned int v1011; // ebx
  HANDLE v1012; // rax
  _DWORD *v1013; // rax
  int v1014; // eax
  unsigned int v1015; // r10d
  SIZE_T v1016; // r9
  size_t v1017; // rcx
  int v1018; // eax
  SIZE_T v1019; // r9
  int v1020; // ebx
  SIZE_T v1021; // rbx
  unsigned __int8 v1022; // al
  unsigned __int64 v1023; // rcx
  int v1024; // r9d
  unsigned __int8 *v1025; // r11
  unsigned int v1026; // r10d
  int v1027; // r8d
  int v1028; // r9d
  char v1029; // di
  unsigned int v1030; // r14d
  HANDLE v1031; // rax
  unsigned int v1032; // r9d
  unsigned int v1033; // ecx
  unsigned int v1034; // esi
  _BYTE *v1035; // rdx
  int v1036; // ebx
  char v1037; // r13
  unsigned int v1038; // edx
  int v1039; // r8d
  unsigned __int8 *v1040; // r15
  unsigned __int64 v1041; // rsi
  int v1042; // r13d
  _BYTE *v1043; // rax
  int v1044; // r12d
  int v1045; // ebx
  int v1046; // r11d
  int v1047; // ecx
  int v1048; // ebx
  int v1049; // r11d
  int v1050; // r9d
  int v1051; // edx
  int v1052; // r10d
  int v1053; // r8d
  int v1054; // r9d
  unsigned int v1055; // edx
  int v1056; // r8d
  int v1057; // ecx
  int v1058; // edx
  int v1059; // r8d
  int v1060; // r9d
  int v1061; // edx
  unsigned int v1062; // r8d
  unsigned int v1063; // r9d
  int v1064; // edx
  int v1065; // r8d
  int v1066; // r9d
  int v1067; // edx
  int v1068; // r8d
  int v1069; // r10d
  int v1070; // edx
  int v1071; // r9d
  unsigned int v1072; // r8d
  int v1073; // r10d
  int v1074; // edx
  unsigned int v1075; // r9d
  const void *v1076; // rbx
  HANDLE v1077; // rax
  LPVOID v1078; // rdi
  HANDLE v1079; // rax
  void *v1080; // rax
  HANDLE v1081; // rax
  _OWORD *v1082; // rax
  HANDLE v1083; // rax
  _QWORD *v1084; // rax
  int v1085; // ebx
  const WCHAR *v1086; // rax
  HANDLE v1087; // rax
  HANDLE v1088; // rax
  HANDLE v1089; // rax
  HANDLE v1090; // rax
  HANDLE v1091; // rax
  _QWORD *v1092; // r15
  HANDLE v1093; // rax
  HANDLE v1094; // rax
  HANDLE v1095; // rax
  HANDLE v1096; // rax
  void *v1097; // r10
  const void **v1098; // rdi
  int v1099; // ebx
  LPCWSTR v1100; // r9
  unsigned int v1101; // r11d
  unsigned int v1102; // r11d
  unsigned int v1103; // ebx
  HANDLE v1104; // rax
  _DWORD *v1105; // rax
  void *v1106; // r15
  size_t v1107; // rcx
  size_t v1108; // rcx
  HANDLE v1109; // rax
  SIZE_T v1110; // rdi
  int v1111; // eax
  __int64 v1112; // rcx
  LPCWSTR v1113; // rcx
  int v1114; // eax
  unsigned int v1115; // r9d
  void *v1116; // r11
  LPCWSTR v1117; // rcx
  unsigned int v1118; // eax
  void *v1119; // r9
  unsigned int v1120; // r11d
  unsigned int v1121; // r11d
  unsigned int v1122; // r11d
  unsigned int v1123; // r9d
  unsigned int v1124; // r15d
  HANDLE v1125; // rax
  LPVOID v1126; // rdi
  FARPROC v1127; // rax
  int v1128; // eax
  unsigned int v1129; // r10d
  void *v1130; // r9
  LPVOID v1131; // r11
  SIZE_T v1132; // rax
  SIZE_T v1133; // rdx
  signed int v1134; // eax
  _QWORD *v1135; // r15
  int v1136; // ebx
  void *v1137; // r9
  int v1138; // r10d
  SIZE_T v1139; // r11
  int v1140; // r10d
  int v1141; // r10d
  int v1142; // r10d
  int v1143; // r10d
  int v1144; // r10d
  HANDLE v1145; // rax
  _QWORD *v1146; // rax
  _QWORD *v1147; // rdi
  HANDLE v1148; // rax
  void *v1149; // rax
  HANDLE v1150; // rax
  void *v1151; // rax
  size_t v1152; // rax
  unsigned int v1153; // ebx
  HANDLE v1154; // rax
  void *v1155; // rax
  HANDLE v1156; // rax
  HANDLE v1157; // rax
  HANDLE v1158; // rax
  HANDLE v1159; // rax
  LPVOID *v1160; // rcx
  HANDLE v1161; // rax
  HANDLE v1162; // rax
  const WCHAR *v1163; // rax
  LPVOID v1164; // r9
  SIZE_T v1165; // rdx
  void *v1166; // rcx
  SIZE_T v1167; // r11
  const WCHAR *v1168; // rbx
  unsigned __int8 v1169; // al
  int v1170; // eax
  SIZE_T v1171; // r8
  int v1172; // r12d
  unsigned __int8 *v1173; // r13
  void *v1174; // rsi
  void *v1175; // r14
  int v1176; // r9d
  size_t v1177; // rdi
  int v1178; // ecx
  void *v1179; // rdi
  HANDLE v1180; // rax
  void *v1181; // rdi
  HANDLE v1182; // rax
  void *v1183; // rdi
  unsigned int v1184; // r9d
  int v1185; // ecx
  int v1186; // ebx
  int v1187; // r11d
  unsigned int v1188; // edx
  _BYTE *v1189; // r8
  char v1190; // r13
  unsigned int v1191; // r10d
  SIZE_T v1192; // rcx
  int v1193; // r9d
  LPVOID v1194; // r8
  int v1195; // eax
  _BYTE *v1196; // r12
  int v1197; // r14d
  int v1198; // r8d
  char *v1199; // r13
  unsigned __int8 *v1200; // r15
  int v1201; // r11d
  int v1202; // edi
  int v1203; // ebx
  int v1204; // ecx
  int v1205; // edi
  int v1206; // ebx
  int v1207; // r8d
  int v1208; // r9d
  unsigned int v1209; // edx
  int v1210; // r8d
  int v1211; // r9d
  unsigned int v1212; // edx
  int v1213; // r8d
  int v1214; // r10d
  int v1215; // r11d
  unsigned int v1216; // r9d
  int v1217; // r8d
  unsigned int v1218; // r9d
  int v1219; // r10d
  int v1220; // r11d
  int v1221; // edx
  int v1222; // r8d
  unsigned int v1223; // r9d
  int v1224; // edx
  int v1225; // r10d
  int v1226; // r8d
  unsigned int v1227; // edx
  int v1228; // r9d
  int v1229; // r10d
  int v1230; // ecx
  const WCHAR *v1231; // r11
  unsigned __int64 v1232; // rcx
  void *v1233; // r9
  SIZE_T v1234; // rsi
  int v1235; // ebx
  void *v1236; // r10
  const WCHAR *v1237; // r11
  void *v1238; // r9
  int v1239; // eax
  void *v1240; // rdx
  LPCWSTR v1241; // r8
  const WCHAR *v1242; // r11
  void *v1243; // r9
  int v1244; // eax
  void *v1245; // r9
  const WCHAR *v1246; // r11
  SIZE_T v1247; // r10
  size_t v1248; // r11
  LPVOID v1249; // r9
  unsigned int *v1250; // r9
  unsigned __int64 v1251; // r11
  __int64 v1252; // rdx
  __int64 v1253; // r9
  HANDLE v1254; // rax
  SIZE_T v1255; // rdi
  void *v1256; // rsi
  int v1257; // eax
  HANDLE v1258; // rax
  _QWORD *v1259; // rdi
  void *v1260; // rsi
  HANDLE v1261; // rax
  void *v1262; // rsi
  HANDLE v1263; // rax
  void *v1264; // rsi
  HANDLE v1265; // rax
  HANDLE v1266; // rax
  void *v1267; // rdi
  HANDLE v1268; // rax
  void *v1269; // rdi
  HANDLE v1270; // rax
  _QWORD *v1271; // rdi
  void *v1272; // rsi
  HANDLE v1273; // rax
  void *v1274; // rsi
  HANDLE v1275; // rax
  void *v1276; // rsi
  HANDLE v1277; // rax
  HANDLE v1278; // rax
  WCHAR *v1279; // rdi
  HANDLE v1280; // rax
  SIZE_T v1281; // r9
  int v1282; // r10d
  int *v1283; // rax
  int i2; // r10d
  unsigned int *v1285; // r9
  int v1286; // r10d
  HMODULE *v1287; // rdi
  unsigned int *v1288; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v1289; // [rsp+68h] [rbp-A0h]
  unsigned __int8 v1290; // [rsp+68h] [rbp-A0h]
  void *Src; // [rsp+70h] [rbp-98h] BYREF
  LPCWSTR v1292; // [rsp+78h] [rbp-90h] BYREF
  SIZE_T v1293; // [rsp+80h] [rbp-88h] BYREF
  size_t v1294; // [rsp+88h] [rbp-80h] BYREF
  void *v1295; // [rsp+90h] [rbp-78h]
  SIZE_T v1296; // [rsp+98h] [rbp-70h] BYREF
  SIZE_T v1297; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID lpMem; // [rsp+A8h] [rbp-60h] BYREF
  SIZE_T dwBytes; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v1300; // [rsp+B8h] [rbp-50h]
  LPCWSTR lpModuleName; // [rsp+C0h] [rbp-48h] BYREF
  LPCWSTR v1302; // [rsp+C8h] [rbp-40h] BYREF
  SIZE_T v1303; // [rsp+D0h] [rbp-38h]
  SIZE_T v1304; // [rsp+D8h] [rbp-30h] BYREF
  void *v1305; // [rsp+E0h] [rbp-28h] BYREF
  SIZE_T Size; // [rsp+E8h] [rbp-20h] BYREF
  SIZE_T v1307; // [rsp+F0h] [rbp-18h] BYREF
  LPVOID v1308; // [rsp+F8h] [rbp-10h]
  LPVOID v1309; // [rsp+100h] [rbp-8h]
  unsigned int v1310; // [rsp+108h] [rbp+0h]
  size_t v1311; // [rsp+110h] [rbp+8h] BYREF
  int v1312; // [rsp+118h] [rbp+10h]
  LPVOID v1313; // [rsp+120h] [rbp+18h] BYREF
  SIZE_T v1314; // [rsp+128h] [rbp+20h] BYREF
  LPVOID v1315; // [rsp+130h] [rbp+28h]
  SIZE_T v1316; // [rsp+138h] [rbp+30h]
  void *v1317; // [rsp+140h] [rbp+38h] BYREF
  SIZE_T v1318; // [rsp+148h] [rbp+40h] BYREF
  void *v1319; // [rsp+150h] [rbp+48h] BYREF
  LPVOID v1320; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int64 v1321; // [rsp+160h] [rbp+58h] BYREF
  __int64 v1322; // [rsp+168h] [rbp+60h]
  int v1323; // [rsp+170h] [rbp+68h]
  int v1324; // [rsp+174h] [rbp+6Ch]
  int v1325; // [rsp+178h] [rbp+70h]
  int v1326; // [rsp+17Ch] [rbp+74h]
  int v1327; // [rsp+180h] [rbp+78h]
  unsigned int v1328; // [rsp+188h] [rbp+80h] BYREF
  int v1329; // [rsp+18Ch] [rbp+84h] BYREF
  int v1330; // [rsp+190h] [rbp+88h]
  unsigned int v1331; // [rsp+194h] [rbp+8Ch] BYREF
  int v1332; // [rsp+198h] [rbp+90h]
  unsigned int v1333; // [rsp+19Ch] [rbp+94h] BYREF
  unsigned int v1334; // [rsp+1A0h] [rbp+98h] BYREF
  unsigned int v1335; // [rsp+1A4h] [rbp+9Ch] BYREF
  unsigned int v1336; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v1337; // [rsp+1ACh] [rbp+A4h] BYREF
  unsigned int v1338; // [rsp+1B0h] [rbp+A8h] BYREF
  int v1339; // [rsp+1B4h] [rbp+ACh]
  unsigned int v1340; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned int v1341; // [rsp+1BCh] [rbp+B4h] BYREF
  void *v1342; // [rsp+1C0h] [rbp+B8h] BYREF
  int *v1343; // [rsp+1C8h] [rbp+C0h]
  HLOCAL hMem[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  unsigned __int64 v1345; // [rsp+1E0h] [rbp+D8h]
  SIZE_T v1346; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v1347; // [rsp+1F0h] [rbp+E8h]
  HMODULE phModule; // [rsp+208h] [rbp+100h] BYREF
  __int64 v1349; // [rsp+218h] [rbp+110h] BYREF
  __int64 v1350; // [rsp+220h] [rbp+118h] BYREF
  __int64 v1351; // [rsp+228h] [rbp+120h] BYREF
  __int64 v1352; // [rsp+238h] [rbp+130h] BYREF
  size_t pcchLength[2]; // [rsp+240h] [rbp+138h] BYREF
  __int64 v1354; // [rsp+250h] [rbp+148h] BYREF
  HMODULE hModule; // [rsp+260h] [rbp+158h] BYREF
  size_t v1356[2]; // [rsp+268h] [rbp+160h] BYREF
  __int128 v1357; // [rsp+278h] [rbp+170h]
  __int128 v1358; // [rsp+288h] [rbp+180h] BYREF
  size_t v1359[2]; // [rsp+298h] [rbp+190h] BYREF
  __int128 v1360; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int128 v1361; // [rsp+2B8h] [rbp+1B0h]
  __int128 v1362; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int128 v1363; // [rsp+2D8h] [rbp+1D0h]
  _OWORD v1364[3]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v1365; // [rsp+318h] [rbp+210h] BYREF
  char v1366[152]; // [rsp+320h] [rbp+218h] BYREF
  int v1367; // [rsp+3B8h] [rbp+2B0h] BYREF
  _DWORD v1368[5]; // [rsp+3BCh] [rbp+2B4h] BYREF
  void *v1369; // [rsp+3D0h] [rbp+2C8h]
  int v1370; // [rsp+428h] [rbp+320h] BYREF
  _DWORD v1371[3]; // [rsp+42Ch] [rbp+324h] BYREF
  __int16 v1372; // [rsp+43Ah] [rbp+332h]
  __int64 v1373; // [rsp+440h] [rbp+338h]
  int v1374; // [rsp+498h] [rbp+390h] BYREF
  _DWORD v1375[5]; // [rsp+49Ch] [rbp+394h] BYREF
  void *v1376; // [rsp+4B0h] [rbp+3A8h]
  int v1377; // [rsp+508h] [rbp+400h] BYREF
  char v1378[20]; // [rsp+50Ch] [rbp+404h] BYREF
  void *v1379; // [rsp+520h] [rbp+418h]
  int v1380; // [rsp+578h] [rbp+470h] BYREF
  char v1381[20]; // [rsp+57Ch] [rbp+474h] BYREF
  void *v1382; // [rsp+590h] [rbp+488h]
  int v1383; // [rsp+5E8h] [rbp+4E0h] BYREF
  _DWORD v1384[5]; // [rsp+5ECh] [rbp+4E4h] BYREF
  SIZE_T v1385; // [rsp+600h] [rbp+4F8h]
  int v1386; // [rsp+658h] [rbp+550h] BYREF
  char v1387[20]; // [rsp+65Ch] [rbp+554h] BYREF
  SIZE_T v1388; // [rsp+670h] [rbp+568h]
  int v1389; // [rsp+6C8h] [rbp+5C0h] BYREF
  _DWORD v1390[5]; // [rsp+6CCh] [rbp+5C4h] BYREF
  size_t v1391; // [rsp+6E0h] [rbp+5D8h]
  int v1392; // [rsp+738h] [rbp+630h] BYREF
  char v1393[20]; // [rsp+73Ch] [rbp+634h] BYREF
  void *v1394; // [rsp+750h] [rbp+648h]
  int v1395; // [rsp+7A8h] [rbp+6A0h] BYREF
  int v1396; // [rsp+7ACh] [rbp+6A4h]
  void *v1397; // [rsp+7B0h] [rbp+6A8h]
  void *v1398; // [rsp+7B8h] [rbp+6B0h]
  void *v1399; // [rsp+7C0h] [rbp+6B8h]
  const WCHAR *v1400; // [rsp+7C8h] [rbp+6C0h]
  SIZE_T v1401; // [rsp+7D0h] [rbp+6C8h]
  __int64 v1402; // [rsp+7D8h] [rbp+6D0h]
  int v1403; // [rsp+7E0h] [rbp+6D8h]
  __m128i v1404; // [rsp+7E4h] [rbp+6DCh] BYREF
  __m128i v1405; // [rsp+7F4h] [rbp+6ECh] BYREF
  unsigned int v1406; // [rsp+804h] [rbp+6FCh] BYREF
  unsigned int v1407; // [rsp+808h] [rbp+700h]
  unsigned __int32 v1408; // [rsp+80Ch] [rbp+704h]
  unsigned int v1409; // [rsp+810h] [rbp+708h]
  __int128 v1410; // [rsp+818h] [rbp+710h] BYREF
  __int128 v1411; // [rsp+828h] [rbp+720h] BYREF
  __int64 v1412; // [rsp+838h] [rbp+730h] BYREF
  unsigned int v1413; // [rsp+840h] [rbp+738h]
  int v1414; // [rsp+844h] [rbp+73Ch]
  __int128 v1415; // [rsp+848h] [rbp+740h] BYREF
  __int128 v1416; // [rsp+858h] [rbp+750h] BYREF
  _OWORD v1417[2]; // [rsp+868h] [rbp+760h] BYREF
  __int128 v1418; // [rsp+888h] [rbp+780h] BYREF
  __int128 v1419; // [rsp+898h] [rbp+790h] BYREF
  __int64 v1420; // [rsp+8A8h] [rbp+7A0h]
  __int128 v1421; // [rsp+8B0h] [rbp+7A8h] BYREF
  __int128 v1422; // [rsp+8C0h] [rbp+7B8h] BYREF
  __int64 v1423; // [rsp+8D0h] [rbp+7C8h]
  _DWORD v1424[12]; // [rsp+8D8h] [rbp+7D0h] BYREF
  _OWORD v1425[2]; // [rsp+908h] [rbp+800h] BYREF
  __int64 v1426; // [rsp+928h] [rbp+820h]
  int v1427; // [rsp+930h] [rbp+828h]
  _OWORD v1428[2]; // [rsp+938h] [rbp+830h] BYREF
  __int64 v1429; // [rsp+958h] [rbp+850h]
  int v1430; // [rsp+960h] [rbp+858h]
  _OWORD v1431[2]; // [rsp+968h] [rbp+860h] BYREF
  __int64 v1432; // [rsp+988h] [rbp+880h]
  int v1433; // [rsp+990h] [rbp+888h]
  _OWORD v1434[2]; // [rsp+998h] [rbp+890h] BYREF
  __int64 v1435; // [rsp+9B8h] [rbp+8B0h]
  int v1436; // [rsp+9C0h] [rbp+8B8h]
  _DWORD v1437[6]; // [rsp+9C8h] [rbp+8C0h] BYREF
  char v1438; // [rsp+9E2h] [rbp+8DAh]
  unsigned __int16 v1439[34]; // [rsp+9E4h] [rbp+8DCh] BYREF
  _DWORD v1440[6]; // [rsp+A28h] [rbp+920h] BYREF
  char v1441; // [rsp+A42h] [rbp+93Ah]
  unsigned __int16 v1442[34]; // [rsp+A44h] [rbp+93Ch] BYREF
  _DWORD v1443[6]; // [rsp+A88h] [rbp+980h] BYREF
  char v1444; // [rsp+AA2h] [rbp+99Ah]
  unsigned __int16 v1445[34]; // [rsp+AA4h] [rbp+99Ch] BYREF
  _BYTE v1446[68]; // [rsp+AE8h] [rbp+9E0h] BYREF
  __int16 v1447; // [rsp+B2Ch] [rbp+A24h]
  unsigned __int16 v1448; // [rsp+B8Eh] [rbp+A86h]
  int v1449; // [rsp+B94h] [rbp+A8Ch]
  int v1450; // [rsp+B98h] [rbp+A90h]
  int v1451; // [rsp+BC8h] [rbp+AC0h] BYREF
  __int128 v1452; // [rsp+BD0h] [rbp+AC8h]
  __int128 v1453; // [rsp+BE0h] [rbp+AD8h]
  __int128 v1454; // [rsp+BF0h] [rbp+AE8h]
  __int64 v1455; // [rsp+C00h] [rbp+AF8h]
  _BYTE v1456[176]; // [rsp+C08h] [rbp+B00h] BYREF
  WCHAR Filename[264]; // [rsp+CB8h] [rbp+BB0h] BYREF

  v1343 = a1;
  LODWORD(v2) = 0;
  v3 = 0;
  AcquireSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  if ( `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
  {
    *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
    ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
    return (unsigned int)v3;
  }
  ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  AcquireSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  if ( `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
  {
    *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
    goto LABEL_107;
  }
  v1325 = 0;
  LODWORD(v1322) = 0;
  hMem[0] = 0LL;
  v1326 = 0;
  v1327 = 0;
  LODWORD(v1321) = 0;
  while ( _InterlockedCompareExchange(&dword_1800E36FC, 1, 0) )
    ;
  v4 = dword_1800E36F8;
  v1323 = -1;
  if ( dword_1800E36F8 )
    goto LABEL_41;
  v1324 = 0;
  v5 = (char *)MemoryAlloc(0x338uLL);
  v1295 = v5;
  if ( !v5 )
    goto LABEL_13;
  v6 = 103LL;
  v7 = v5 + 7;
  v8 = 0;
  v9 = (unsigned __int8 *)&unk_1800BC1E2;
  v10 = 0;
  v11 = 0;
  v12 = -1;
  do
  {
    v13 = *(v9 - 1) | (*(v9 - 2) << 8);
    v14 = v9[2] << 8;
    v15 = *v9;
    v9 += 8;
    v16 = *(v9 - 7) | ((v15 | (v13 << 8)) << 8);
    v17 = v16 ^ v11;
    v18 = *(v9 - 3) | ((*(v9 - 4) | ((*(v9 - 5) | v14) << 8)) << 8);
    v19 = v18 ^ v10 ^ v17 ^ 0xAC987321;
    v20 = v17 ^ (__ROR4__(v19, 22) + 4991 * __ROR4__(v19 + 1419157410, 27));
    v21 = v19 ^ (43881 * __ROR4__(v20 + 133239679, 9) - __ROR4__(v20, 30));
    v22 = v20 ^ (24670 * v21 - (v21 >> 13) - 123127970);
    v23 = v21 ^ (2033 * __ROR4__(v22 ^ 0xAB69, 26) - __ROR4__(v22, 30));
    v24 = v22 ^ (133239679 - (v23 ^ 0xAB69605E));
    v25 = v23 ^ (43881 * (v24 ^ 0x137F)) ^ __ROR4__(v24, 6);
    v26 = v24 ^ (__ROR4__(v25, 30) + 24670 * __ROR4__(v25 + 133239679, 15));
    v27 = v25 ^ (2033 * __ROR4__(v26 + 1419157410, 14) - __ROR4__(v26, 24));
    v28 = v26 ^ __ROR4__(v27, 10) ^ (4991 * __ROR4__(v27 ^ 0xAB69605E, 12));
    v29 = v27 ^ (v28 >> 10) ^ (43881 * (v28 ^ 0x7F1));
    v30 = v28 ^ (2033 * (__ROR4__(~v29, 5) + 24670));
    v31 = v30 ^ (((v29 ^ (v30 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v29 ^ (v30 - 2033) ^ 0xAB6967AF, 30));
    v32 = v29 ^ (v30 - 2033) ^ 0xAB69605E ^ (__ROR4__(v31, 25) + 43881 * __ROR4__(v31 - 133239679, 6));
    v33 = v31 ^ (24670 * (v32 ^ 0x137F) + __ROR4__(v32, 9));
    v34 = v32 ^ (__ROR4__(v33, 25) + 2033 * __ROR4__(v33 ^ 0xAB69, 27));
    v35 = v33 ^ v34 ^ 0xAC987321;
    v36 = v34 ^ (4991 * __ROR4__(v35, 3) - 219010071);
    v37 = v35 ^ (24670 * __ROR4__(v36 - 133239679, 1) - __ROR4__(v36, 6));
    v38 = v36 ^ (__ROR4__(v37, 18) + 2033 * __ROR4__(v37 - 1419157410, 29));
    v39 = v37 ^ (4991 * __ROR4__(v38 - 1419157410, 17) - __ROR4__(v38, 14));
    v10 = v12 ^ v38 ^ (v39 >> 3) ^ (43881 * (v39 ^ 0x605E));
    v12 = v18;
    v11 = v8 ^ v39 ^ __ROR4__(v38 ^ (v39 >> 3) ^ (43881 * (v39 ^ 0x605E)), 30) ^ (24670
                                                                                * __ROR4__(
                                                                                    v38 ^ (v39 >> 3) ^ (43881 * (v39 ^ 0x605E)) ^ 0x7F1137F,
                                                                                    28));
    v8 = v16;
    *(v7 - 4) = v11;
    *v7 = v10;
    *(v7 - 5) = __ROR4__(v11, 8);
    v7 += 8;
    *(v7 - 9) = __ROR4__(v10, 8);
    *(v7 - 14) = __ROR4__(v11, 16);
    *(v7 - 10) = __ROR4__(v10, 16);
    *(v7 - 15) = __ROR4__(v11, 24);
    *(v7 - 11) = __ROR4__(v10, 24);
    --v6;
  }
  while ( v6 );
  v40 = v1295;
  LODWORD(v2) = 0;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  do
    v42 ^= *((_BYTE *)v1295 + v41++);
  while ( v41 < 0x338 );
  if ( v42 == 64LL )
  {
    *((_BYTE *)v1295 + 823) = 0;
    memset_0(&unk_1800E33A0, 0, 0x60uLL);
    v279 = v40;
    v54 = 0;
    while ( *v40 )
    {
      v55 = (const WCHAR *)v40;
      v56 = -1LL;
      do
        ++v56;
      while ( *(_WORD *)&v40[2 * v56] );
      v47 = &v40[2 * v56];
      v48 = (HMODULE *)((char *)&unk_1800E33A0 + 24 * v54);
      if ( !GetModuleHandleExW(0, v55, v48) )
      {
        v43 = -1073741702;
        break;
      }
      v43 = 0;
      if ( *(_WORD *)*v48 == 23117
        && (v280 = *((int *)*v48 + 15), (unsigned int)v280 < 0x10000000)
        && (v281 = (char *)*v48 + v280, v281 >= (char *)*v48)
        && *(_DWORD *)v281 == 17744 )
      {
        if ( *((_WORD *)v281 + 12) == 267 || *((_WORD *)v281 + 12) == 523 )
        {
          *(_QWORD *)((char *)&unk_1800E33A0 + 24 * v54 + 12) = *((_QWORD *)v281 + 17);
          *((_DWORD *)&unk_1800E33A0 + 6 * v54 + 2) = *((_DWORD *)v281 + 20);
        }
        else
        {
          v43 = -1073741811;
        }
      }
      else
      {
        v43 = -1073741701;
      }
      v49 = *(_DWORD *)(v47 + 2);
      v50 = 0;
      v1310 = v49;
      v40 = v47 + 6;
      while ( v50 < v49 )
      {
        v51 = v40;
        v52 = -1LL;
        do
          ++v52;
        while ( v40[v52] );
        v40 += v52 + 1;
        if ( v43 >= 0 )
        {
          ProcAddress = GetProcAddress(*v48, v51);
          if ( !ProcAddress )
            goto LABEL_37;
          off_1800E1000[v1324] = ProcAddress;
        }
        ++v1324;
        ++v50;
        v49 = v1310;
      }
      ++v54;
    }
LABEL_37:
    if ( v279 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v279);
    }
    if ( v43 < 0 )
      goto LABEL_13;
    v4 = dword_1800E36F8;
LABEL_41:
    dword_1800E36F8 = v4 + 1;
    goto LABEL_42;
  }
  MemoryFree(v1295);
LABEL_13:
  v44 = 4LL;
  v45 = (HMODULE *)&unk_1800E33A0;
  do
  {
    if ( *v45 )
      FreeLibrary(*v45);
    v45 += 3;
    --v44;
  }
  while ( v44 );
  memset_0(&unk_1800E33A0, 0, 0x60uLL);
  memcpy_0(off_1800E1000, off_1800B5650, 0x170uLL);
LABEL_42:
  v57 = 0LL;
  _InterlockedExchange(&dword_1800E36FC, 0);
  v58 = 0LL;
  v59 = 0;
  v60 = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_43;
  v1295 = (void *)off_1800E1110[0]();
  if ( v1295 )
  {
    v284 = 0LL;
    v1328 = 0;
    Src = 0LL;
    v285 = 0LL;
    v286 = 0LL;
    for ( i = 0LL; ; i = v284 )
    {
      if ( v285 )
        i = v286;
      v1288 = &v1328;
      if ( (unsigned int)off_1800E1130() )
      {
        Src = 0LL;
        v57 = i;
        goto LABEL_294;
      }
      LastError = GetLastError();
      if ( LastError != 122 )
        break;
      if ( v284 )
        goto LABEL_288;
      v284 = (wchar_t *)MemoryAlloc(v1328);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&Src);
      Src = v284;
      v285 = v284;
      if ( !v284 )
      {
        v60 = -2147024882;
        goto LABEL_294;
      }
      v286 = v284;
    }
    if ( !LastError )
    {
LABEL_288:
      v60 = -2147467259;
      goto LABEL_294;
    }
    if ( LastError > 0 )
      v60 = (unsigned __int16)LastError | 0x80070000;
    else
      v60 = LastError;
LABEL_294:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&Src);
    if ( v60 < 0 )
    {
      v59 = v1321;
    }
    else
    {
      v289 = off_1800E1128[0];
      CurrentThreadId = GetCurrentThreadId();
      v1295 = (void *)((__int64 (__fastcall *)(_QWORD))v289)(CurrentThreadId);
      if ( !v1295 )
      {
        v291 = GetLastError();
        v60 = v291;
        if ( v291 > 0 )
          v60 = (unsigned __int16)v291 | 0x80070000;
        v59 = v1321;
        if ( v60 >= 0 )
          v60 = -2147467259;
        goto LABEL_45;
      }
      v292 = 0LL;
      v1335 = 0;
      Src = 0LL;
      v60 = 0;
      v293 = 0LL;
      v294 = 0LL;
      for ( j = 0LL; ; j = v292 )
      {
        if ( v293 )
          j = v294;
        v1288 = &v1335;
        if ( (unsigned int)off_1800E1130() )
        {
          Src = 0LL;
          v58 = j;
          goto LABEL_315;
        }
        v296 = GetLastError();
        if ( v296 != 122 )
          break;
        if ( v292 )
          goto LABEL_309;
        v292 = MemoryAlloc(v1335);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&Src);
        Src = v292;
        v293 = v292;
        if ( !v292 )
        {
          v60 = -2147024882;
          goto LABEL_315;
        }
        v294 = v292;
      }
      if ( !v296 )
      {
LABEL_309:
        v60 = -2147467259;
        goto LABEL_315;
      }
      if ( v296 > 0 )
        v60 = (unsigned __int16)v296 | 0x80070000;
      else
        v60 = v296;
LABEL_315:
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&Src);
      if ( v60 < 0 )
      {
        v59 = v1321;
        goto LABEL_43;
      }
      if ( !v57 || wcscmp_0(v57, L"WinSta0") )
      {
LABEL_43:
        if ( !v58 )
          goto LABEL_45;
        goto LABEL_44;
      }
      if ( v58 )
      {
        if ( !wcscmp_0((const wchar_t *)v58, L"Default") )
        {
          v1329 = 0;
          CurrentProcess = GetCurrentProcess();
          if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1329) )
          {
            v298 = GetLastError();
            v60 = v298;
            if ( v298 > 0 )
              v60 = (unsigned __int16)v298 | 0x80070000;
            v59 = v1321;
            if ( v60 >= 0 )
              v60 = -2147467259;
LABEL_44:
            MemoryFree(v58);
            goto LABEL_45;
          }
          if ( (v1329 & 0xF) == 0 )
            v59 = 1;
        }
        goto LABEL_43;
      }
    }
LABEL_45:
    if ( v57 )
      MemoryFree(v57);
    goto LABEL_47;
  }
  v283 = GetLastError();
  v60 = v283;
  if ( v283 > 0 )
    v60 = (unsigned __int16)v283 | 0x80070000;
  v59 = v1321;
  if ( v60 >= 0 )
    v60 = -2147467259;
LABEL_47:
  v61 = 4LL;
  v62 = 0;
  if ( v60 >= 0 )
    v62 = v59;
  v1310 = v62;
  v63 = LocalAlloc(0x40u, 4uLL);
  v1342 = v63;
  v64 = v63;
  if ( !v63 )
  {
    v65 = 0LL;
    v66 = -2147024882;
LABEL_51:
    v67 = v1322;
    goto LABEL_52;
  }
  v1295 = v63;
  *(_OWORD *)v1356 = 0LL;
  v65 = v63;
  Src = 0LL;
  LODWORD(v1314) = 0;
  v1312 = 0;
  v1292 = 0LL;
  v1330 = 0;
  v70 = GetProcessHeap();
  v71 = HeapAlloc(v70, 8u, 0xA0uLL);
  v1324 = 56;
  v72 = v71;
  Size = (SIZE_T)v71;
  if ( !v71 )
  {
    v72 = 0LL;
    goto LABEL_99;
  }
  *v71 = xmmword_1800E19B0[0];
  v71[1] = xmmword_1800E19B0[1];
  v71[2] = xmmword_1800E19B0[2];
  v71[3] = xmmword_1800E19B0[3];
  v71[4] = xmmword_1800E19B0[4];
  v71[5] = xmmword_1800E19B0[5];
  v71[6] = xmmword_1800E19B0[6];
  v71[7] = xmmword_1800E19B0[7];
  v71[8] = xmmword_1800E19B0[8];
  v71[9] = xmmword_1800E19B0[9];
  v73 = GetProcessHeap();
  v74 = HeapAlloc(v73, 8u, 8uLL);
  Src = v74;
  if ( !v74 )
  {
    Src = 0LL;
    goto LABEL_99;
  }
  *v74 = qword_1800E18F8;
  v1345 = __rdtsc();
  pcchLength[0] = 0LL;
  if ( StringLengthWorkerW(v75, (unsigned __int64)HIDWORD(v1345) << 32, pcchLength) >= 0 )
  {
    LODWORD(v1296) = 0;
    ++pcchLength[0];
    LODWORD(v1321) = RtlUIntAdd(4LL, (unsigned int)(2 * LODWORD(pcchLength[0])), &v1296);
    v66 = v1321;
    if ( (v1321 & 0x80000000) != 0LL )
    {
      Src = v299;
      goto LABEL_72;
    }
    v90 = v300 + v1296;
    v91 = -1;
    if ( v300 + (unsigned int)v1296 >= v300 )
      v91 = v300 + v1296;
    v66 = v90 < v300 ? -805306219 : 0x10000000;
    LODWORD(v1321) = v66;
    if ( v90 < v300 )
      goto LABEL_218;
    v92 = v91 + 8;
    v93 = -1;
    if ( v91 + 8 >= v91 )
      v93 = v91 + 8;
    v66 = v92 < v91 ? -805306219 : 0x10000000;
    LODWORD(v1321) = v66;
    if ( v92 < v91 )
      goto LABEL_218;
    v94 = v93 + 8;
    v95 = -1;
    if ( v93 + 8 >= v93 )
      v95 = v93 + 8;
    v66 = v94 < v93 ? -805306219 : 0x10000000;
    LODWORD(v1321) = v66;
    if ( v94 < v93 )
    {
LABEL_218:
      if ( v66 < 0 )
        goto LABEL_72;
LABEL_219:
      v243 = v1330;
      if ( !v1330 )
        goto LABEL_72;
      v66 = v1330;
      goto LABEL_221;
    }
    HIDWORD(v1356[0]) = v95;
    v96 = v95;
    v97 = GetProcessHeap();
    v98 = HeapAlloc(v97, 8u, v96);
    v72 = (void *)Size;
    if ( v98 )
    {
      v1356[1] = (size_t)v98;
      LODWORD(v1356[0]) = 0;
      if ( v98 + 1 >= v98 )
      {
        if ( (unsigned __int64)(v98 + 2) > v1356[1] + HIDWORD(v1356[0]) )
          goto LABEL_334;
        *v98 = 4;
        v98[1] = 0;
        v76 = ++LODWORD(v1356[0]);
        if ( !v72 )
          goto LABEL_97;
        if ( v1356[1] )
        {
          v77 = (_DWORD *)v1356[1];
          for ( k = 0; k < v76; ++k )
          {
            v79 = *v77 + 4;
            if ( v79 < 4 || (_DWORD *)((char *)v77 + v79) < v77 )
              goto LABEL_70;
            v77 = (_DWORD *)((char *)v77 + v79);
          }
          if ( v77 + 1 < v77 )
            goto LABEL_70;
          if ( (unsigned __int64)(v77 + 41) > v1356[1] + HIDWORD(v1356[0]) )
            goto LABEL_334;
          *v77 = 160;
          memcpy_0(v77 + 1, v72, 0xA0uLL);
        }
        else
        {
          LODWORD(v1296) = 0;
          LODWORD(v1321) = RtlUIntAdd(4LL, 160LL, &v1296);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
          LODWORD(v1321) = RtlUIntAdd(HIDWORD(v1356[0]), (unsigned int)v1296, (char *)v1356 + 4);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
        }
        v83 = Src;
        v84 = ++LODWORD(v1356[0]);
        if ( !Src )
          goto LABEL_97;
        if ( !v1356[1] )
        {
          LODWORD(v1296) = 0;
          LODWORD(v1321) = RtlUIntAdd(4LL, 8LL, &v1296);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
          LODWORD(v1321) = RtlUIntAdd(HIDWORD(v1356[0]), (unsigned int)v1296, (char *)v1356 + 4);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
          v89 = LODWORD(v1356[0]) + 1;
LABEL_341:
          LODWORD(v1356[0]) = v89;
          LODWORD(v1319) = 0;
          v1318 = 0LL;
          if ( v1356[1] )
          {
            v303 = (unsigned int *)v1356[1];
            v304 = 0;
            v1294 = v1356[1];
            while ( 1 )
            {
              LODWORD(v1296) = v304;
              if ( v304 >= v89 )
                break;
              v305 = *v303;
              LODWORD(v1293) = 0;
              LODWORD(v1321) = RtlUIntAdd(4LL, v305, &v1293);
              v66 = v1321;
              if ( (v1321 & 0x80000000) != 0LL )
                goto LABEL_72;
              LODWORD(v1321) = RtlULongLongAdd(v306, (unsigned int)v1293, &v1294);
              v66 = v1321;
              Src = v307;
              if ( (v1321 & 0x80000000) != 0LL )
                goto LABEL_72;
              v303 = (unsigned int *)v1294;
              v304 = v1296 + 1;
              Size = (SIZE_T)v72;
            }
            LODWORD(v1321) = RtlULongLongAdd(v303, 4LL, &v1319);
            v66 = v1321;
            if ( (v1321 & 0x80000000) != 0LL )
              goto LABEL_72;
            if ( (unsigned __int64)(v308 + 3) > v1356[1] + HIDWORD(v1356[0]) )
              goto LABEL_334;
            v309 = v1319;
            v302 = (const wchar_t *)v1345;
            *v308 = 8;
            *v309 = v302;
          }
          else
          {
            LODWORD(v1296) = 0;
            LODWORD(v1321) = RtlUIntAdd(v88, 8LL, &v1296);
            v66 = v1321;
            if ( (v1321 & 0x80000000) != 0LL )
              goto LABEL_72;
            LODWORD(v1321) = RtlUIntAdd(HIDWORD(v1356[0]), (unsigned int)v1296, (char *)v1356 + 4);
            v66 = v1321;
            if ( (v1321 & 0x80000000) != 0LL )
              goto LABEL_72;
          }
          v1294 = 0LL;
          ++LODWORD(v1356[0]);
          if ( StringCchLengthW(v302, v301, &v1294) < 0 )
            goto LABEL_64;
          LODWORD(v1321) = RtlULongLongAdd(v1294, 1LL, &v1294);
          v66 = v1321;
          if ( (v1321 & 0x80000000) == 0LL )
          {
            LODWORD(v1319) = 0;
            v1318 = 0LL;
            if ( !(2 * (_DWORD)v1294) )
            {
              v66 = -1073741811;
LABEL_363:
              LODWORD(v1321) = v66;
              goto LABEL_229;
            }
            if ( !v1356[1] )
            {
              LODWORD(v1293) = 0;
              LODWORD(v1321) = RtlUIntAdd(4LL, (unsigned int)(2 * v1294), &v1293);
              v66 = v1321;
              if ( (v1321 & 0x80000000) == 0LL )
              {
                v245 = RtlUIntAdd(HIDWORD(v1356[0]), (unsigned int)v1293, (char *)v1356 + 4);
                v244 = v1356[0];
                v66 = v245;
                LODWORD(v1321) = v245;
                if ( v245 >= 0 )
                {
                  v244 = v246 + LODWORD(v1356[0]);
                  LODWORD(v1321) = 0;
                  LODWORD(v1356[0]) += v246;
                  v66 = 0;
                }
              }
              goto LABEL_229;
            }
            v310 = (unsigned int *)v1356[1];
            v311 = 0;
            v1294 = v1356[1];
            while ( 1 )
            {
              LODWORD(v1293) = v311;
              if ( v311 >= v244 )
                break;
              v312 = *v310;
              LODWORD(v1296) = 0;
              LODWORD(v1321) = RtlUIntAdd(4LL, v312, &v1296);
              v66 = v1321;
              if ( (v1321 & 0x80000000) != 0LL )
                goto LABEL_229;
              LODWORD(v1321) = RtlULongLongAdd(v313, (unsigned int)v1296, &v1294);
              v66 = v1321;
              if ( (v1321 & 0x80000000) != 0LL )
                goto LABEL_229;
              v310 = (unsigned int *)v1294;
              v311 = v1293 + 1;
            }
            LODWORD(v1321) = RtlULongLongAdd(v310, 4LL, &v1319);
            v66 = v1321;
            if ( (v1321 & 0x80000000) == 0LL )
            {
              if ( (unsigned __int64)v314 + v315 + 4 <= v1356[1] + HIDWORD(v1356[0]) )
              {
                v316 = v1319;
                *v314 = v315;
                memcpy_0(v316, L"DataProtectionUnderLock-WindowsCore-Enabled", (unsigned int)v315);
                v244 = ++LODWORD(v1356[0]);
                goto LABEL_229;
              }
              v66 = -1073741789;
              goto LABEL_363;
            }
          }
LABEL_229:
          if ( v66 < 0 )
            goto LABEL_72;
          LODWORD(v1319) = 0;
          v1318 = 0LL;
          if ( v1356[1] )
          {
            v317 = (unsigned int *)v1356[1];
            v318 = 0;
            v1294 = v1356[1];
            while ( 1 )
            {
              LODWORD(v1293) = v318;
              if ( v318 >= v244 )
                break;
              v319 = *v317;
              LODWORD(v1296) = 0;
              LODWORD(v1321) = RtlUIntAdd(4LL, v319, &v1296);
              v66 = v1321;
              if ( (v1321 & 0x80000000) != 0LL )
                goto LABEL_72;
              LODWORD(v1321) = RtlULongLongAdd(v320, (unsigned int)v1296, &v1294);
              v66 = v1321;
              Src = v321;
              if ( (v1321 & 0x80000000) != 0LL )
                goto LABEL_72;
              v317 = (unsigned int *)v1294;
              v318 = v1293 + 1;
              Size = (SIZE_T)v72;
            }
            LODWORD(v1321) = RtlULongLongAdd(v317, 4LL, &v1319);
            v66 = v1321;
            if ( (v1321 & 0x80000000) != 0LL )
              goto LABEL_72;
            if ( (unsigned __int64)(v322 + 2) > v1356[1] + HIDWORD(v1356[0]) )
              goto LABEL_334;
            v323 = v1319;
            v324 = v1310;
            *v322 = v247;
            *v323 = v324;
          }
          else
          {
            LODWORD(v1293) = 0;
            LODWORD(v1321) = RtlUIntAdd(4LL, 4LL, &v1293);
            v66 = v1321;
            if ( (v1321 & 0x80000000) != 0LL )
              goto LABEL_72;
            LODWORD(v1321) = RtlUIntAdd(HIDWORD(v1356[0]), (unsigned int)v1293, (char *)v1356 + 4);
            v66 = v1321;
            if ( (v1321 & 0x80000000) != 0LL )
              goto LABEL_72;
          }
          LODWORD(v1319) = 0;
          v325 = LODWORD(v1356[0]) + 1;
          v1318 = 0LL;
          ++LODWORD(v1356[0]);
          if ( v1356[1] )
          {
            v328 = (unsigned int *)v1356[1];
            v329 = 0;
            v1294 = v1356[1];
            while ( 1 )
            {
              LODWORD(v1293) = v329;
              if ( v329 >= v325 )
                break;
              v330 = *v328;
              LODWORD(v1296) = 0;
              LODWORD(v1321) = RtlUIntAdd(4LL, v330, &v1296);
              v66 = v1321;
              if ( (v1321 & 0x80000000) != 0LL )
                goto LABEL_72;
              LODWORD(v1321) = RtlULongLongAdd(v331, (unsigned int)v1296, &v1294);
              v66 = v1321;
              Src = v332;
              if ( (v1321 & 0x80000000) != 0LL )
                goto LABEL_72;
              v328 = (unsigned int *)v1294;
              v329 = v1293 + 1;
              Size = (SIZE_T)v72;
            }
            LODWORD(v1321) = RtlULongLongAdd(v328, 4LL, &v1319);
            v66 = v1321;
            if ( (v1321 & 0x80000000) != 0LL )
              goto LABEL_72;
            if ( (unsigned __int64)(v333 + 2) > v1356[1] + HIDWORD(v1356[0]) )
              goto LABEL_334;
            v334 = v1319;
            *v333 = v326;
            *v334 = v326;
            LODWORD(v1356[0]) += v326 - 3;
          }
          else
          {
            LODWORD(v1293) = 0;
            LODWORD(v1321) = RtlUIntAdd(v247, v247, &v1293);
            v66 = v1321;
            if ( (v1321 & 0x80000000) != 0LL )
              goto LABEL_72;
            LODWORD(v1321) = RtlUIntAdd(HIDWORD(v1356[0]), (unsigned int)v1293, (char *)v1356 + 4);
            v66 = v1321;
            if ( (v1321 & 0x80000000) != 0LL )
              goto LABEL_72;
            LODWORD(v1356[0]) += v327;
          }
          LODWORD(v1293) = 0;
          LODWORD(v1321) = RtlUIntAdd(v326, v326, &v1293);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
          LODWORD(v1296) = 0;
          LODWORD(v1321) = RtlUIntAdd(v335, 8LL, &v1296);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
          LODWORD(v1321) = RtlUIntAdd(v336, (unsigned int)v1296, &v1293);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_234;
          LODWORD(v1296) = 0;
          LODWORD(v1321) = RtlUIntAdd(v337, v337, &v1296);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
          LODWORD(v1321) = RtlUIntAdd((unsigned int)v1293, (unsigned int)v1296, &v1293);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_234;
          LODWORD(v1296) = 0;
          LODWORD(v1321) = RtlUIntAdd(v338, v338, &v1296);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
          LODWORD(v1321) = RtlUIntAdd((unsigned int)v1293, (unsigned int)v1296, &v1293);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_234;
          LODWORD(v1296) = 0;
          LODWORD(v1321) = RtlUIntAdd(v339, v339, &v1296);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
          LODWORD(v1321) = RtlUIntAdd((unsigned int)v1293, (unsigned int)v1296, &v1293);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_234;
          LODWORD(v1296) = 0;
          LODWORD(v1321) = RtlUIntAdd(v340, v340, &v1296);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
            goto LABEL_72;
          LODWORD(v1321) = RtlUIntAdd((unsigned int)v1293, (unsigned int)v1296, &v1293);
          v66 = v1321;
          if ( (v1321 & 0x80000000) != 0LL )
          {
LABEL_234:
            if ( v66 < 0 )
              goto LABEL_72;
          }
          else
          {
            LODWORD(v1314) = v1293;
          }
          v1294 = 0LL;
          LODWORD(v1293) = 0;
          v1307 = 0LL;
          v1313 = 0LL;
          LODWORD(v1296) = 0;
          v1320 = 0LL;
          v1308 = 0LL;
          v1309 = 0LL;
          dwBytes = __rdtsc();
          v1331 = 8;
          v342 = RtlUIntAdd(8LL, HIDWORD(v1356[0]), &v1331);
          if ( v342 >= 0 )
          {
            v343 = (v1331 + 7) & 0xFFFFFFF8;
            if ( v343 < v1331 )
            {
              v66 = -805306219;
              goto LABEL_71;
            }
            v1331 = (v1331 + 7) & 0xFFFFFFF8;
            v248 = v343;
            v249 = GetProcessHeap();
            v250 = HeapAlloc(v249, 8u, v248);
            if ( !v250 )
            {
              v66 = -805306345;
              LODWORD(v1321) = -805306345;
LABEL_134:
              v72 = (void *)Size;
              if ( v66 < 0 )
                goto LABEL_72;
              if ( !v1312 )
                goto LABEL_594;
              if ( v1292 )
              {
                lpMem = (LPVOID)v1292;
                LODWORD(v1321) = RtlULongLongAdd(v1292, 4LL, &lpMem);
                v66 = v1321;
                if ( (v1321 & 0x80000000) != 0LL )
                {
                  Src = v108;
                  v1292 = v107;
                  goto LABEL_72;
                }
                v110 = (int *)lpMem;
                if ( !*(_DWORD *)v107 )
                  v110 = 0LL;
                if ( *(_DWORD *)v107 != 4 )
                {
                  v66 = -1073741789;
                  Src = v108;
LABEL_596:
                  v1292 = v107;
                  goto LABEL_71;
                }
                v66 = *v110;
                LODWORD(v1321) = v66;
                if ( v66 == -805306333 )
                {
                  v1330 = -2147024774;
                }
                else
                {
                  v1330 = v66;
                  if ( v66 != -2147024774 )
                  {
                    v1330 = v66;
                    Src = v108;
                    v1292 = v107;
                    if ( v66 < 0 )
                      goto LABEL_72;
                  }
                }
                Src = v108;
                if ( v109 != 6 )
                {
                  v66 = -1073425151;
                  goto LABEL_596;
                }
                lpMem = v107;
                v224 = 0;
                v1292 = v107;
                while ( !v224 )
                {
                  LODWORD(v1321) = RtlULongLongAdd(v107, 4LL, &lpMem);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_72;
                  LODWORD(v1321) = RtlULongLongAdd(lpMem, v225, &lpMem);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_72;
                  v107 = (WCHAR *)lpMem;
                  v224 = v226 + 1;
                }
                LODWORD(v1321) = RtlULongLongAdd(v107, 4LL, &lpMem);
                v66 = v1321;
                if ( (v1321 & 0x80000000) != 0LL )
                  goto LABEL_72;
                v447 = (SIZE_T *)lpMem;
                if ( !v445 )
                  v447 = 0LL;
                if ( v445 != 8 )
                  goto LABEL_334;
                v448 = *v447;
                v230 = v446;
                lpMem = v446;
                v231 = 0;
                v1316 = v448;
                v229 = 4LL;
                while ( v231 < 2 )
                {
                  LODWORD(v1321) = RtlULongLongAdd(v230, v229, &lpMem);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_72;
                  LODWORD(v1321) = RtlULongLongAdd(lpMem, v227, &lpMem);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_72;
                  v230 = lpMem;
                  v231 = v228 + 1;
                }
                LODWORD(v1321) = RtlULongLongAdd(v230, v229, &lpMem);
                v66 = v1321;
                if ( (v1321 & 0x80000000) != 0LL )
                  goto LABEL_72;
                v450 = (int *)lpMem;
                if ( !v449 )
                  v450 = 0LL;
                if ( v449 != (_DWORD)v235 )
                  goto LABEL_334;
                v236 = (void *)v1292;
                v451 = *v450;
                lpMem = (LPVOID)v1292;
                LODWORD(dwBytes) = v451;
                while ( 1 )
                {
                  v232 = RtlULongLongAdd(v236, v235, &lpMem);
                  LODWORD(v1321) = v232;
                  v66 = v232;
                  if ( v234 >= 3 )
                    break;
                  if ( v232 < 0 )
                    goto LABEL_72;
                  LODWORD(v1321) = RtlULongLongAdd(lpMem, v233, &lpMem);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_72;
                  v236 = lpMem;
                }
                if ( v232 < 0 )
                  goto LABEL_72;
                v238 = v1292;
                v239 = 0;
                lpMem = (LPVOID)v1292;
                while ( v239 < 4 )
                {
                  LODWORD(v1305) = *v238;
                  LODWORD(v1321) = RtlULongLongAdd(v238, 4LL, &lpMem);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_72;
                  LODWORD(v1321) = RtlULongLongAdd(lpMem, (unsigned int)v1305, &lpMem);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_72;
                  v238 = lpMem;
                  v239 = v237 + 1;
                }
                LODWORD(v1321) = RtlULongLongAdd(v238, 4LL, &lpMem);
                v66 = v1321;
                if ( (v1321 & 0x80000000) != 0LL )
                  goto LABEL_72;
                v453 = (int *)lpMem;
                if ( !v452 )
                  v453 = 0LL;
                if ( v452 != 4 )
                  goto LABEL_334;
                v241 = v1292;
                v242 = 0;
                v454 = *v453;
                lpMem = (LPVOID)v1292;
                LODWORD(v1305) = v454;
                while ( v242 < 5 )
                {
                  LODWORD(v1293) = *v241;
                  LODWORD(v1321) = RtlULongLongAdd(v241, 4LL, &lpMem);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_72;
                  LODWORD(v1321) = RtlULongLongAdd(lpMem, (unsigned int)v1293, &lpMem);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_72;
                  v241 = lpMem;
                  v242 = v240 + 1;
                }
                v243 = RtlULongLongAdd(v241, 4LL, &lpMem);
                LODWORD(v1321) = v243;
                v66 = v243;
                if ( v243 < 0 )
                {
LABEL_221:
                  LODWORD(v1321) = v243;
                  goto LABEL_72;
                }
                v458 = (unsigned int *)lpMem;
                if ( !v455 )
                  v458 = 0LL;
                if ( v455 != 4 )
                  goto LABEL_334;
                if ( v1345 == v1316 )
                {
                  v459 = *v458;
                  v1327 = dwBytes;
                  v1310 = v459;
                  if ( (unsigned int)v1305 > 4 || (unsigned int)v456 > 4 )
                  {
                    v66 = -2147024774;
                    goto LABEL_71;
                  }
                  memcpy_0(v64, v457, v456);
                  goto LABEL_219;
                }
LABEL_594:
                v66 = -1073425151;
                goto LABEL_71;
              }
LABEL_97:
              v66 = -1073741811;
              goto LABEL_71;
            }
            v1305 = v250;
            *v250 = v1356[0];
            v342 = RtlULongLongAdd(v250, 4LL, &v1305);
            if ( v342 < 0
              || (v345 = v1305,
                  *(_DWORD *)v1305 = HIDWORD(v1356[0]),
                  v342 = RtlULongLongAdd(v345, v344, &v1305),
                  v342 < 0) )
            {
              v346 = GetProcessHeap();
              HeapFree(v346, 0, v250);
              v72 = (void *)Size;
              v341 = 0;
            }
            else
            {
              *(_QWORD *)((char *)v250 + v1331 - 8) = dwBytes;
              memcpy_0(v1305, (const void *)v1356[1], HIDWORD(v1356[0]));
              v341 = v1331;
              v1294 = (size_t)v250;
              v72 = (void *)Size;
              LODWORD(v1293) = v1331;
            }
          }
          v66 = v342 | 0x10000000;
          LODWORD(v1321) = v66;
          if ( v66 < 0 )
          {
            v101 = v1294;
            goto LABEL_125;
          }
          v111 = v1294;
          v1304 = 0LL;
          if ( !v1294 )
          {
            v66 = -805306355;
            goto LABEL_71;
          }
          v1300 = (LPVOID)v341;
          if ( !v341 || (lpModuleName = (LPCWSTR)MemoryAlloc(v341 + 8LL)) == 0LL )
          {
            v66 = -805306367;
            LODWORD(v1321) = -805306367;
            goto LABEL_578;
          }
          v112 = 0;
          v1289 = 0;
          v113 = 0LL;
          if ( (_DWORD)v1293 )
          {
            do
              v112 ^= *(_BYTE *)(v111 + v113++);
            while ( v113 < (unsigned int)v1293 );
            v1289 = v112;
          }
          v114 = (SIZE_T)lpModuleName;
          v1307 = 0xC81ECB17B1B54A58uLL;
          v115 = -1;
          v1297 = (SIZE_T)lpModuleName;
          LODWORD(v1321) = 0;
          LODWORD(v1305) = 0;
          v116 = (char *)v111;
          v117 = 0;
          v118 = v1293 & 7;
          if ( (v1293 & 7) != 0 )
          {
            v347 = 0;
            v348 = 0;
            LODWORD(dwBytes) = 0;
            v349 = 56;
            v350 = (unsigned __int8 *)v111;
            do
            {
              v351 = *v350;
              v352 = ++v350;
              if ( v347 >= 4 )
                v348 |= v351 << v349;
              else
                v117 |= v351 << (v349 - 32);
              v349 -= 8;
              v347 = dwBytes + 1;
              LODWORD(v1321) = v348;
              LODWORD(v1305) = v117;
              LODWORD(dwBytes) = v347;
            }
            while ( (int)v347 < (int)v118 );
            v117 ^= 0xB17A307A;
            v1315 = v352;
            v65 = v1295;
            v353 = v348 ^ 0x42F6B18D;
            v354 = 0;
            v112 = v1289;
            v355 = v117;
            Size = (SIZE_T)v72;
            v356 = v353;
            v357 = (_BYTE *)v1297;
            v1294 = v111;
            v64 = v1295;
            do
            {
              v1297 = (SIZE_T)(v357 + 1);
              if ( v354 >= 4 )
              {
                v356 = __ROR4__(v356, 24);
                v358 = v356;
              }
              else
              {
                v355 = __ROR4__(v355, 24);
                v358 = v355;
              }
              *v357 = v358;
              ++v354;
              v357 = (_BYTE *)v1297;
            }
            while ( v354 < (int)v118 );
            v114 = v1297;
            v116 = (char *)v1315;
            LODWORD(v2) = 0;
            if ( v118 <= 4 )
            {
              v115 = 0;
              if ( v118 < 4 )
              {
                v117 = v117 >> (8 * (4 - v118)) << (8 * (4 - v118));
                v114 = v1297;
              }
            }
            else
            {
              v115 = v353 >> (8 * (8 - v118)) << (8 * (8 - v118));
              v114 = v1297;
            }
          }
          v119 = (unsigned int)v1293;
          v1297 = (unsigned __int64)(unsigned int)v1293 >> 3;
          if ( v1297 )
          {
            v120 = (unsigned __int8 *)(v116 + 2);
            v121 = WORD2(v1307);
            v122 = v1297;
            v123 = v1321;
            v124 = (int)v1305;
            LODWORD(dwBytes) = WORD1(v1307);
            v1315 = (LPVOID)(v114 + 7);
            v125 = HIDWORD(v1307) ^ 0xB1B54A58;
            do
            {
              v126 = v120[1] | ((*v120 | ((*(v120 - 1) | (*(v120 - 2) << 8)) << 8)) << 8);
              v127 = v120[5] | ((v120[4] | ((v120[3] | (v120[2] << 8)) << 8)) << 8);
              v1297 = (SIZE_T)(v120 + 8);
              v128 = v115 ^ v127;
              v129 = v117 ^ v126 ^ HIDWORD(v1307) ^ ((v115 ^ v127) - 19032);
              v130 = v128 ^ (__ROR4__(v129, 7) + WORD1(v1307) * __ROR4__(HIDWORD(v1307) ^ v129, 15));
              v131 = v129 ^ (v121 * __ROR4__(v130 - 1313519016, 9) - __ROR4__(v130, 10));
              v132 = v130 ^ (__ROR4__(v131, 27) + HIWORD(v1307) * __ROR4__(v131 ^ v121, 28));
              v133 = v131 ^ (HIDWORD(v1307) - (v132 ^ 0xB1B54A58));
              v134 = v132 ^ (WORD1(v1307) * (v133 - 19032) - (v133 >> 6));
              v135 = v133 ^ (19032 * (v121 ^ __ROR4__(v134, 15)));
              v136 = v134 ^ (v121 * (HIWORD(v1307) + __ROR4__(~v135, 3)));
              v137 = v135 ^ (v136 - HIDWORD(v1307) - 19032);
              v138 = v136 ^ (dwBytes * (v137 ^ HIWORD(v1307))) ^ __ROR4__(v137, 10);
              v139 = v137 ^ __ROR4__(v138, 3) ^ (v121 * __ROR4__(v138 ^ 0x4A58, 26));
              v140 = v138 ^ (19032 * (__ROR4__(v139, 15) - HIWORD(v1307)));
              v141 = v139 ^ ((v140 ^ (v140 >> 14)) >> 1) ^ (19032 * (HIWORD(v1307) ^ v140)) ^ (19032
                                                                                             * ((8 * (v140 - v121)) | ((v140 - v121) >> 29)));
              v142 = v140 ^ (WORD1(v1307) * (v141 - v121) - (v141 >> 13));
              v143 = v141 ^ __ROR4__(v142, 11) ^ (v121 * __ROR4__(-1313519016 - v142, 9));
              v144 = v142 ^ (v143 + 1313519016 - HIWORD(v1307));
              v145 = v143 ^ (19032 * (v144 ^ WORD1(v1307)) - __ROR4__(v144, 7));
              v146 = v144 ^ (WORD1(v1307) * __ROR4__(HIWORD(v1307) ^ v145, 28) - __ROR4__(v145, 16));
              v147 = v145 ^ (__ROR4__(v146, 4) + v121 * __ROR4__(-1313519016 - v146, 10));
              v148 = v146 ^ __ROR4__(v147, 9) ^ (HIWORD(v1307) * __ROR4__(v147 + 1313519016, 4));
              v149 = v147 ^ (19032 * __ROR4__(HIDWORD(v1307) ^ v148, 24) - __ROR4__(v148, 30));
              v150 = v148 ^ (WORD1(v1307) * __ROR4__(HIDWORD(v1307) - v149, 11) - __ROR4__(v149, 12));
              v120 = (unsigned __int8 *)v1297;
              v151 = v149 ^ (v150 >> 8) ^ (v121 * (WORD1(v1307) ^ v150));
              v152 = v150 ^ v151;
              v153 = v1315;
              v117 = v124 ^ v151;
              v115 = v123 ^ v125 ^ v152;
              v124 = v126;
              v123 = v127;
              *((char *)v1315 - 4) = v117;
              *v153 = v115;
              *(v153 - 5) = __ROR4__(v117, 8);
              *(v153 - 1) = __ROR4__(v115, 8);
              *(v153 - 6) = __ROR4__(v117, 16);
              *(v153 - 2) = __ROR4__(v115, 16);
              *(v153 - 7) = __ROR4__(v117, 24);
              *(v153 - 3) = __ROR4__(v115, 24);
              v1315 = v153 + 8;
              --v122;
            }
            while ( v122 );
            v64 = v1342;
            v112 = v1289;
            v65 = v1342;
            v119 = (unsigned __int64)v1300;
            LODWORD(v2) = 0;
          }
          *(_QWORD *)((char *)lpModuleName + v119) = v112;
          v154 = GetProcessHeap();
          v155 = HeapAlloc(v154, 8u, 0x30uLL);
          if ( v155 )
          {
            *(_DWORD *)v155 = v119 + 8;
            v157 = v119 + 8;
            v158 = GetProcessHeap();
            v159 = HeapAlloc(v158, 8u, v157);
            if ( v159 )
            {
              v155[1] = v159;
              memcpy_0(v159, lpModuleName, v157);
              *((_DWORD *)v155 + 4) = 160;
              v160 = GetProcessHeap();
              v161 = HeapAlloc(v160, 8u, 0xA0uLL);
              if ( v161 )
              {
                v155[3] = v161;
                *v161 = xmmword_1800E1900[0];
                v161[1] = xmmword_1800E1900[1];
                v161[2] = xmmword_1800E1900[2];
                v161[3] = xmmword_1800E1900[3];
                v161[4] = xmmword_1800E1900[4];
                v161[5] = xmmword_1800E1900[5];
                v161[6] = xmmword_1800E1900[6];
                v161[7] = xmmword_1800E1900[7];
                v161[8] = xmmword_1800E1900[8];
                v161[9] = xmmword_1800E1900[9];
                *((_DWORD *)v155 + 8) = 8;
                v162 = GetProcessHeap();
                v163 = HeapAlloc(v162, 8u, 8uLL);
                if ( v163 )
                {
                  v155[5] = v163;
                  v156 = 0;
                  *v163 = qword_1800E19A0;
                  v1304 = 0LL;
                  goto LABEL_160;
                }
              }
            }
            v156 = -1073741801;
            v359 = v155[1];
            v1304 = 0LL;
            v1297 = v359;
            if ( v359 )
            {
              v360 = GetProcessHeap();
              HeapFree(v360, 0, (LPVOID)v1297);
              v155[1] = 0LL;
            }
            v1297 = v155[3];
            if ( v1297 )
            {
              v361 = GetProcessHeap();
              HeapFree(v361, 0, (LPVOID)v1297);
              v155[3] = 0LL;
            }
            v1297 = v155[5];
            if ( v1297 )
            {
              v362 = GetProcessHeap();
              HeapFree(v362, 0, (LPVOID)v1297);
              v155[5] = 0LL;
            }
            v363 = GetProcessHeap();
            HeapFree(v363, 0, v155);
          }
          else
          {
            v156 = -1073741801;
          }
          v155 = 0LL;
LABEL_160:
          v1297 = Size;
          v1315 = Src;
          v1300 = (LPVOID)v1294;
          v1307 = (SIZE_T)v155;
          v164 = GetProcessHeap();
          HeapFree(v164, 0, (LPVOID)lpModuleName);
          v165 = v1304;
          if ( v1304 )
          {
            lpModuleName = *(LPCWSTR *)(v1304 + 8);
            if ( lpModuleName )
            {
              v364 = GetProcessHeap();
              HeapFree(v364, 0, (LPVOID)lpModuleName);
              v165 = v1304;
              *(_QWORD *)(v1304 + 8) = 0LL;
            }
            lpModuleName = *(LPCWSTR *)(v165 + 24);
            if ( lpModuleName )
            {
              v365 = GetProcessHeap();
              HeapFree(v365, 0, (LPVOID)lpModuleName);
              v165 = v1304;
              *(_QWORD *)(v1304 + 24) = 0LL;
            }
            lpModuleName = *(LPCWSTR *)(v165 + 40);
            if ( lpModuleName )
            {
              v366 = GetProcessHeap();
              HeapFree(v366, 0, (LPVOID)lpModuleName);
              *(_QWORD *)(v1304 + 40) = 0LL;
            }
            v367 = GetProcessHeap();
            HeapFree(v367, 0, (LPVOID)v1304);
            v1307 = (SIZE_T)v155;
          }
          v66 = v156 | 0x10000000;
          v101 = (size_t)v1300;
          LODWORD(v1321) = v66;
          v1294 = (size_t)v1300;
          Src = v1315;
          Size = v1297;
          if ( v66 < 0 )
            goto LABEL_125;
          v166 = v1307;
          v1332 = 0;
          LODWORD(dwBytes) = 4;
          v169 = RtlUIntAdd(4LL, *(unsigned int *)v1307, &dwBytes);
          if ( v169 < 0
            || (v169 = RtlUIntAdd((unsigned int)dwBytes, v168, &dwBytes), v169 < 0)
            || (v169 = RtlUIntAdd((unsigned int)dwBytes, *(unsigned int *)(v166 + 16), &dwBytes), v169 < 0)
            || (v169 = RtlUIntAdd((unsigned int)dwBytes, v170, &dwBytes), v169 < 0)
            || (v169 = RtlUIntAdd((unsigned int)dwBytes, *(unsigned int *)(v166 + 32), &dwBytes), v169 < 0) )
          {
LABEL_242:
            v66 = v169 | 0x10000000;
            v255 = (const WCHAR *)v1297;
            v101 = (size_t)v167;
            LODWORD(v1321) = v66;
            Src = v1315;
            Size = v1297;
            v1294 = (size_t)v167;
            if ( v66 >= 0 )
            {
              LODWORD(dwBytes) = 0;
              v1333 = 8;
              v256 = RtlUIntAdd(8LL, (unsigned int)v1314, &v1333);
              v1294 = v258;
              v66 = v256 | 0x10000000;
              Src = v257;
              LODWORD(v1321) = v256 | 0x10000000;
              Size = (SIZE_T)v255;
              if ( v256 >= 0 )
              {
                v259 = (v1333 + 7) & 0xFFFFFFF8;
                if ( (unsigned int)v259 < v1333 )
                {
                  v66 = -1073741675;
LABEL_447:
                  LODWORD(v1321) = v66;
                  goto LABEL_448;
                }
                v1334 = (v1333 + 7) & 0xFFFFFFF8;
                LODWORD(v1321) = RtlUIntAdd(v259, 8LL, &v1334);
                v66 = v1321;
                if ( (v1321 & 0x80000000) != 0LL )
                {
LABEL_448:
                  v1294 = v258;
                  Src = v257;
                  Size = (SIZE_T)v255;
                  goto LABEL_125;
                }
                if ( !v1356[1] )
                {
                  v66 = -1073741811;
                  goto LABEL_447;
                }
                Src = v257;
                Size = (SIZE_T)v255;
                if ( LODWORD(v1356[0]) <= 1 )
                {
                  v66 = -1073741811;
                  v1294 = v258;
                  LODWORD(v1321) = -1073741811;
                  goto LABEL_125;
                }
                v171 = (_DWORD *)v1356[1];
                v172 = 0;
                v1297 = v1356[1];
                v1294 = v101;
                while ( 1 )
                {
                  LODWORD(v1305) = v172;
                  if ( v172 )
                    break;
                  LODWORD(v1321) = RtlULongLongAdd(v171, 4LL, &v1297);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_125;
                  LODWORD(v1321) = RtlULongLongAdd(v1297, v173, &v1297);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) != 0LL )
                    goto LABEL_125;
                  v171 = (_DWORD *)v1297;
                  v172 = (_DWORD)v1305 + 1;
                }
                LODWORD(v1305) = *v171;
                LODWORD(v1321) = RtlULongLongAdd(v171, 4LL, &v1297);
                v66 = v1321;
                if ( (v1321 & 0x80000000) == 0LL )
                {
                  if ( LODWORD(v1356[0]) <= 2 )
                  {
                    v66 = -1073741811;
LABEL_470:
                    LODWORD(v1321) = v66;
                    goto LABEL_125;
                  }
                  v174 = (_DWORD *)v1356[1];
                  v175 = 0;
                  v176 = v1307;
                  v1297 = v1356[1];
                  while ( 1 )
                  {
                    v1315 = v1313;
                    LODWORD(v1293) = v175;
                    lpModuleName = v255;
                    v1300 = v177;
                    v1304 = v101;
                    v1314 = v176;
                    if ( v175 >= 2 )
                      break;
                    LODWORD(v1314) = *v174;
                    LODWORD(v1321) = RtlULongLongAdd(v174, 4LL, &v1297);
                    v66 = v1321;
                    if ( (v1321 & 0x80000000) != 0LL )
                      goto LABEL_125;
                    LODWORD(v1321) = RtlULongLongAdd(v1297, (unsigned int)v1314, &v1297);
                    v66 = v1321;
                    if ( (v1321 & 0x80000000) != 0LL )
                      goto LABEL_125;
                    v174 = (_DWORD *)v1297;
                    v175 = v1293 + 1;
                  }
                  LODWORD(v1321) = RtlULongLongAdd(v174, 4LL, &v1297);
                  v66 = v1321;
                  if ( (v1321 & 0x80000000) == 0LL )
                  {
                    LODWORD(v1293) = v377;
                    LODWORD(v1321) = RtlUIntAdd(v377, v1334, &v1293);
                    v66 = v1321;
                    if ( (v1321 & 0x80000000) != 0LL )
                      goto LABEL_460;
                    LODWORD(v1321) = RtlUIntAdd((unsigned int)v1293, v378, &v1293);
                    v66 = v1321;
                    if ( (v1321 & 0x80000000) != 0LL
                      || (LODWORD(v1321) = RtlUIntAdd((unsigned int)v1293, (unsigned int)v1305, &v1293),
                          v66 = v1321,
                          (v1321 & 0x80000000) != 0LL)
                      || (LODWORD(v1321) = RtlUIntAdd((unsigned int)v1293, v379, &v1293),
                          v66 = v1321,
                          (v1321 & 0x80000000) != 0LL)
                      || (LODWORD(v1321) = RtlUIntAdd((unsigned int)v1293, v380, &v1293),
                          v66 = v1321,
                          (v1321 & 0x80000000) != 0LL) )
                    {
LABEL_460:
                      if ( v66 < 0 )
                        goto LABEL_125;
                      v381 = 0;
                    }
                    else
                    {
                      v381 = v1293;
                      LODWORD(dwBytes) = v1293;
                    }
                    if ( v381 > 0x400000 )
                    {
                      v66 = -2147418113;
                      goto LABEL_470;
                    }
                    v260 = v381;
                    v261 = GetProcessHeap();
                    v1320 = HeapAlloc(v261, 8u, v260);
                    if ( !v1320 )
                    {
                      v1320 = 0LL;
                      v1307 = v1314;
                      v66 = -805306345;
                      Src = v1300;
                      Size = (SIZE_T)v255;
LABEL_248:
                      v101 = v1304;
                      v1294 = v1304;
                      v1313 = v1315;
                      LODWORD(v1321) = -805306345;
                      goto LABEL_125;
                    }
                    v262 = v1315;
                    phModule = 0LL;
                    v1360 = 0LL;
                    v1361 = 0LL;
                    if ( !v1315 )
                    {
                      v66 = -2147024809;
                      v101 = v1304;
                      v1307 = v1314;
                      v1294 = v1304;
                      goto LABEL_473;
                    }
                    *((_QWORD *)&v1360 + 1) = v1320;
                    *(_QWORD *)&v1360 = v1315;
                    LODWORD(v1361) = v1296;
                    *(_QWORD *)((char *)&v1361 + 4) = v260;
                    if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                      && (v263 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                    {
                      v264 = ((__int64 (__fastcall *)(__int64, __int128 *))v263)(134LL, &v1360);
                      v66 = v264 | 0x10000000;
                      LODWORD(v1321) = v264 | 0x10000000;
                      if ( v264 >= 0 )
                      {
                        v265 = DWORD1(v1361);
                        v266 = v1314;
                        v267 = v1304;
                        v268 = v1300;
                        v269 = lpModuleName;
LABEL_256:
                        LODWORD(dwBytes) = 0;
                        v1297 = (SIZE_T)v1320;
                        if ( v265 < 4 )
                        {
                          v66 = -805306306;
                          v1307 = v266;
                          v101 = v267;
                          v1294 = v267;
                          Src = v268;
                          Size = (SIZE_T)v269;
LABEL_258:
                          LODWORD(v1321) = v66;
                          v1313 = v262;
                          goto LABEL_125;
                        }
                        LODWORD(v1305) = *(_DWORD *)v1320;
                        v274 = RtlULongLongAdd(v1320, 4LL, &v1297);
                        if ( v274 < 0 || (v274 = RtlUIntAdd(0LL, 4LL, &dwBytes), v274 < 0) )
                        {
LABEL_181:
                          v66 = v274 | 0x10000000;
                          v101 = v1304;
                          LODWORD(v1321) = v66;
                          v1307 = v1314;
                          v1294 = v1304;
                          Src = v1300;
                          Size = (SIZE_T)lpModuleName;
                          v1313 = v262;
                          if ( v66 < 0 )
                            goto LABEL_125;
                          v178 = v1308;
                          if ( !v1308 || (v1297 = *((_QWORD *)v1308 + 1)) == 0 || !*(_DWORD *)v1308 )
                          {
                            v66 = -805306355;
                            v1307 = v1314;
                            v1294 = v1304;
                            Src = v1300;
                            Size = (SIZE_T)lpModuleName;
                            goto LABEL_258;
                          }
                          v1321 = *(unsigned int *)v1308 - 8LL;
                          v179 = MemoryAlloc(v1321);
                          v180 = v1304;
                          v181 = v179;
                          v101 = v1304;
                          v182 = v1300;
                          v183 = lpModuleName;
                          v1307 = v1314;
                          v1294 = v1304;
                          Src = v1300;
                          Size = (SIZE_T)lpModuleName;
                          v1309 = v179;
                          v1313 = v262;
                          if ( !v179 )
                          {
LABEL_124:
                            v66 = -805306367;
                            v1309 = 0LL;
                            LODWORD(v1321) = -805306367;
                            goto LABEL_125;
                          }
                          v99 = 0;
                          v1300 = (LPVOID)v1297;
                          v1316 = v1321 & 7;
                          lpModuleName = (LPCWSTR)0x7F1137FAB69605ELL;
                          v1304 = (SIZE_T)v181;
                          if ( (v1321 & 7) == 0 )
                          {
                            v1307 = v1314;
                            v184 = (void *)v183;
                            v185 = 0;
                            v1313 = v1315;
                            v186 = (SIZE_T)v181;
                            Src = v182;
                            v187 = 0;
                            LODWORD(v1305) = 0;
                            LODWORD(dwBytes) = -1;
                            LODWORD(v1296) = 0;
                            LODWORD(v1293) = 0;
                            v1294 = v180;
                            Size = (SIZE_T)v183;
                            goto LABEL_188;
                          }
                          LODWORD(dwBytes) = 0;
                          v403 = 56;
                          v404 = 0;
                          v1313 = v262;
                          do
                          {
                            v1307 = v1314;
                            v405 = v180;
                            v1294 = v180;
                            Size = (SIZE_T)v183;
                            Src = v182;
                            v406 = *(unsigned __int8 *)v1300;
                            v1315 = (char *)v1300 + 1;
                            v1300 = (char *)v1300 + 1;
                            if ( (unsigned int)v404 >= 4 )
                              LODWORD(dwBytes) = (v406 << v403) | dwBytes;
                            else
                              LODWORD(v2) = (v406 << (v403 - 32)) | v2;
                            ++v404;
                            v403 -= 8;
                            v180 = v405;
                          }
                          while ( v404 < (int)v1316 );
                          v65 = v1295;
                          v407 = dwBytes ^ 0x699A899C;
                          v181 = v1309;
                          v408 = v2 ^ 0x92F65A5;
                          v409 = v1316;
                          LODWORD(v1305) = v2;
                          v410 = 0;
                          LODWORD(v1293) = v2 ^ 0x92F65A5;
                          v1300 = v1315;
                          v99 = 0;
                          v64 = v1295;
                          v1308 = v178;
                          v411 = v1309;
                          LODWORD(v1296) = dwBytes ^ 0x699A899C;
                          do
                          {
                            v1316 = (SIZE_T)(v411 + 1);
                            if ( v410 >= 4 )
                            {
                              v407 = __ROR4__(v407, 24);
                              v412 = v407;
                            }
                            else
                            {
                              v408 = __ROR4__(v408, 24);
                              v412 = v408;
                            }
                            *v411 = v412;
                            ++v410;
                            v411 = (_BYTE *)v1316;
                          }
                          while ( v410 < (int)v409 );
                          v178 = v1308;
                          v186 = v1316;
                          v184 = (void *)Size;
                          v187 = v1293;
                          v1304 = v1316;
                          LODWORD(v2) = 0;
                          if ( v409 <= 4 )
                          {
                            v185 = 0;
                            if ( v409 >= 4 )
                              goto LABEL_188;
                            v187 = (unsigned int)v1293 >> (8 * (4 - v409)) << (8 * (4 - v409));
                          }
                          else
                          {
                            v185 = (unsigned int)v1296 >> (8 * (8 - v409)) << (8 * (8 - v409));
                          }
                          v186 = v1304;
LABEL_188:
                          v188 = v1321;
                          v1316 = v1321 >> 3;
                          if ( v1321 >> 3 )
                          {
                            v189 = HIDWORD(lpModuleName);
                            v190 = (_BYTE *)(v186 + 7);
                            v191 = (int)v1305;
                            v192 = (unsigned __int8 *)v1300 + 2;
                            v193 = dwBytes;
                            v194 = WORD2(lpModuleName);
                            LODWORD(v1296) = 24670;
                            v195 = v1316;
                            LODWORD(v1293) = WORD2(lpModuleName);
                            do
                            {
                              v196 = v192[1] | ((*v192 | ((*(v192 - 1) | (*(v192 - 2) << 8)) << 8)) << 8);
                              v197 = v192[5] | ((v192[4] | ((v192[3] | (v192[2] << 8)) << 8)) << 8);
                              v1316 = (SIZE_T)(v192 + 8);
                              v198 = v187 ^ v196;
                              v199 = v185 ^ v197 ^ v189 ^ v187 ^ v196 ^ 0xAB69605E;
                              v200 = v198 ^ (__ROR4__(v199, 22) + v194 * __ROR4__(v199 + 1419157410, 27));
                              v201 = v199 ^ (WORD1(lpModuleName) * __ROR4__(v189 + v200, 9) - __ROR4__(v200, 30));
                              v202 = v200 ^ (v1296 * (v201 - v194) - (v201 >> 13));
                              v203 = v201 ^ (HIWORD(lpModuleName) * __ROR4__(v202 ^ WORD1(lpModuleName), 26)
                                           - __ROR4__(v202, 30));
                              v204 = v202 ^ (v189 - (v203 ^ 0xAB69605E));
                              v205 = v203 ^ (WORD1(lpModuleName) * (v194 ^ v204)) ^ __ROR4__(v204, 6);
                              v206 = v204 ^ (__ROR4__(v205, 30) + v1296 * __ROR4__(v205 + v189, 15));
                              v207 = v205 ^ (HIWORD(lpModuleName) * __ROR4__(v206 + 1419157410, 14) - __ROR4__(v206, 24));
                              v208 = v206 ^ __ROR4__(v207, 10) ^ (v1293 * __ROR4__(v207 ^ 0xAB69605E, 12));
                              v209 = v208 ^ (HIWORD(lpModuleName)
                                           * (v1296
                                            + __ROR4__(
                                                ~(v207 ^ (v208 >> 10) ^ (WORD1(lpModuleName)
                                                                       * (v208 ^ HIWORD(lpModuleName)))),
                                                5)));
                              v210 = v207 ^ (v208 >> 10) ^ (WORD1(lpModuleName) * (v208 ^ HIWORD(lpModuleName))) ^ (v209 - HIWORD(lpModuleName)) ^ 0xAB69605E;
                              v211 = v209 ^ ((v210 >> 2) + v1293 * __ROR4__(HIWORD(lpModuleName) ^ v210, 30));
                              v212 = v210 ^ (__ROR4__(v211, 25) + WORD1(lpModuleName) * __ROR4__(v211 - v189, 6));
                              v213 = v211 ^ (v1296 * (v1293 ^ v212) + __ROR4__(v212, 9));
                              v214 = v212 ^ (__ROR4__(v213, 25)
                                           + HIWORD(lpModuleName) * __ROR4__(WORD1(lpModuleName) ^ v213, 27));
                              v215 = v189 ^ v213 ^ v214 ^ 0xAB69605E;
                              v216 = v214 ^ (v1293 * (__ROR4__(v215, 3) - WORD1(lpModuleName)));
                              v217 = v215 ^ (v1296 * __ROR4__(v216 - v189, 1) - __ROR4__(v216, 6));
                              v218 = v216 ^ (__ROR4__(v217, 18) + HIWORD(lpModuleName) * __ROR4__(v217 - 1419157410, 29));
                              v219 = v217 ^ (v1293 * __ROR4__(v218 - 1419157410, 17) - __ROR4__(v218, 14));
                              v194 = v1293;
                              v220 = v218 ^ (v219 >> 3) ^ (WORD1(lpModuleName) * (v219 ^ v1296));
                              v221 = __ROR4__(v220, 30);
                              v222 = v189 ^ v220;
                              v185 = v193 ^ v220;
                              v193 = v197;
                              v223 = v219 ^ v221 ^ (v1296 * __ROR4__(v222, 28));
                              v192 = (unsigned __int8 *)v1316;
                              v187 = v191 ^ v223;
                              v191 = v196;
                              *(v190 - 4) = v187;
                              *v190 = v185;
                              *(v190 - 5) = __ROR4__(v187, 8);
                              v190 += 8;
                              *(v190 - 9) = __ROR4__(v185, 8);
                              *(v190 - 14) = __ROR4__(v187, 16);
                              *(v190 - 10) = __ROR4__(v185, 16);
                              *(v190 - 15) = __ROR4__(v187, 24);
                              *(v190 - 11) = __ROR4__(v185, 24);
                              --v195;
                            }
                            while ( v195 );
                            v64 = v1342;
                            v99 = 0;
                            v65 = v1342;
                            v184 = (void *)Size;
                            LODWORD(v2) = 0;
                            v181 = v1309;
                            v178 = v1308;
                            v188 = v1321;
                          }
                          for ( m = 0LL; m < v188; ++m )
                            v99 ^= *((_BYTE *)v181 + m);
                          v1316 = (SIZE_T)v1320;
                          v1315 = v178;
                          v1308 = v178;
                          if ( v99 != *(_QWORD *)(v188 + v1297) )
                          {
                            MemoryFree(v181);
                            v101 = v1294;
                            goto LABEL_124;
                          }
                          v413 = v1307;
                          v101 = v1294;
                          lpModuleName = (LPCWSTR)Src;
                          v1300 = v184;
                          LODWORD(dwBytes) = 0;
                          v1304 = (SIZE_T)v181;
                          if ( (unsigned int)v1321 < 4 )
                          {
                            v1308 = v178;
                            Size = (SIZE_T)v184;
                            goto LABEL_466;
                          }
                          LODWORD(v1305) = *v181;
                          v382 = RtlULongLongAdd(v181, 4LL, &v1304);
                          v414 = v101;
                          v1308 = v1315;
                          Src = (void *)lpModuleName;
                          Size = (SIZE_T)v1300;
                          v1309 = v415;
                          v1320 = (LPVOID)v1316;
                          v1307 = v416;
                          v1294 = v101;
                          if ( v382 < 0 )
                            goto LABEL_469;
                          v382 = RtlUIntAdd(0LL, 4LL, &dwBytes);
                          v1320 = (LPVOID)v1316;
                          v1309 = v181;
                          v1308 = v1315;
                          v1307 = v413;
                          v1294 = v101;
                          Src = (void *)lpModuleName;
                          Size = (SIZE_T)v1300;
                          if ( v382 < 0 )
                            goto LABEL_469;
                          if ( (unsigned int)(v1321 - dwBytes) < 4 )
                          {
                            v1308 = v1315;
                            v1320 = (LPVOID)v1316;
                            Src = (void *)lpModuleName;
                            Size = (SIZE_T)v1300;
                            goto LABEL_465;
                          }
                          LODWORD(v1293) = *(_DWORD *)v1304;
                          v382 = RtlULongLongAdd(v1304, 4LL, &v1304);
                          v101 = v414;
                          v1308 = v1315;
                          Src = (void *)lpModuleName;
                          Size = (SIZE_T)v1300;
                          v1309 = v417;
                          v1320 = (LPVOID)v1316;
                          v1307 = v418;
                          v1294 = v414;
                          if ( v382 < 0 )
                            goto LABEL_469;
                          v382 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                          v1320 = (LPVOID)v1316;
                          v1309 = v419;
                          v1308 = v1315;
                          v1307 = v413;
                          v1294 = v414;
                          Src = (void *)lpModuleName;
                          Size = (SIZE_T)v1300;
                          if ( v382 < 0 )
                            goto LABEL_469;
                          if ( (int)v1321 - (int)dwBytes < (unsigned int)v1293 )
                          {
                            v1309 = v419;
                            v101 = v414;
                            v1320 = (LPVOID)v1316;
                            v1308 = v1315;
                            v1294 = v414;
                            Src = (void *)lpModuleName;
                            Size = (SIZE_T)v1300;
                            goto LABEL_467;
                          }
                          v382 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1293, &dwBytes);
                          v101 = v414;
                          v1308 = v1315;
                          v1309 = v181;
                          v1320 = (LPVOID)v1316;
                          v1307 = v413;
                          v1294 = v414;
                          Src = (void *)lpModuleName;
                          Size = (SIZE_T)v1300;
                          if ( v382 < 0 )
                            goto LABEL_469;
                          v1297 = (unsigned int)v1293;
                          if ( (unsigned __int64)v181 + (unsigned int)v1321 < (unsigned int)v1293 + v1304
                            || (unsigned __int64)v181 + (unsigned int)v1321 - v1304 - (unsigned int)v1293 >= 8 )
                          {
                            v1308 = v1315;
                            v1320 = (LPVOID)v1316;
                            Src = (void *)lpModuleName;
                            Size = (SIZE_T)v1300;
LABEL_465:
                            v1294 = v414;
                            v101 = v414;
LABEL_466:
                            v1309 = v181;
LABEL_467:
                            v1307 = v413;
LABEL_468:
                            v382 = -1073741762;
LABEL_469:
                            v66 = v382 | 0x10000000;
                            goto LABEL_470;
                          }
                          v382 = 0;
                          v1308 = v1315;
                          v1320 = (LPVOID)v1316;
                          v1295 = 0LL;
                          v1296 = 0LL;
                          v1314 = 0LL;
                          v1321 = 0LL;
                          LODWORD(dwBytes) = 0;
                          v1309 = v181;
                          v1307 = v413;
                          v1294 = v414;
                          Src = (void *)lpModuleName;
                          Size = (SIZE_T)v1300;
                          if ( v1304 )
                          {
                            lpMem = (LPVOID)v1304;
                            v382 = RtlULongLongAdd(v1304, v1297, &v1296);
                            v1320 = v422;
                            v101 = v414;
                            Size = (SIZE_T)v1300;
                            v1309 = v420;
                            v1308 = v1315;
                            v1307 = v421;
                            v1294 = v414;
                            Src = (void *)lpModuleName;
                            if ( v382 < 0 )
                            {
LABEL_573:
                              v432 = v1312;
LABEL_574:
                              if ( v382 < 0 || (_DWORD)v1305 == v432 )
                                goto LABEL_469;
                              goto LABEL_468;
                            }
                            v1309 = v420;
                            v423 = lpMem;
                            v1307 = v421;
                            v424 = v1296;
                            v1294 = v414;
                            v1320 = (LPVOID)v1316;
                            v1308 = v1315;
                            Src = (void *)lpModuleName;
                            Size = (SIZE_T)v1300;
                            while ( (unsigned __int64)v423 < v424 )
                            {
                              v382 = RtlULongLongAdd(v423, 4LL, &v1314);
                              if ( v382 < 0 )
                                goto LABEL_573;
                              if ( v1314 > v426 )
                                goto LABEL_563;
                              v427 = *v425;
                              LODWORD(v1296) = 0;
                              v382 = RtlUIntAdd(4LL, v427, &v1296);
                              if ( v382 < 0 )
                                goto LABEL_469;
                              v382 = RtlULongLongAdd(v428, (unsigned int)v1296, &v1321);
                              if ( v382 < 0 )
                                goto LABEL_573;
                              v423 = (LPVOID)v1321;
                              if ( v1321 > v424 )
                                goto LABEL_563;
                              LODWORD(dwBytes) = dwBytes + 1;
                            }
                            if ( v423 != (LPVOID)v424 )
                            {
LABEL_563:
                              v382 = -1073741811;
                              goto LABEL_469;
                            }
                          }
                          if ( (_DWORD)v1293 )
                          {
                            v429 = GetProcessHeap();
                            v430 = v1297;
                            v1295 = HeapAlloc(v429, 8u, v1297);
                            v431 = v1295;
                            if ( !v1295 )
                            {
                              v101 = v1294;
                              v382 = -1073741801;
                              v1292 = 0LL;
                              v1312 = 0;
                              goto LABEL_469;
                            }
                            v382 = 0;
                          }
                          else
                          {
                            v430 = v1297;
                            v431 = 0LL;
                          }
                          if ( v1304 )
                            memcpy_0(v431, (const void *)v1304, v430);
                          v101 = v1294;
                          v1292 = (LPCWSTR)v1295;
                          v432 = dwBytes;
                          v1312 = dwBytes;
                          goto LABEL_574;
                        }
                        if ( v386 - (int)dwBytes >= (unsigned int)v1305 )
                        {
                          Size = (unsigned int)v1305;
                          Src = (void *)v1297;
                          v274 = RtlULongLongAdd(v1297, (unsigned int)v1305, &v1297);
                          if ( v274 < 0 )
                            goto LABEL_181;
                          v274 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1305, &dwBytes);
                          if ( v274 < 0 )
                            goto LABEL_181;
                          if ( (unsigned int)(v387 - dwBytes) >= 4 )
                          {
                            LODWORD(v1293) = *(_DWORD *)v1297;
                            v274 = RtlULongLongAdd(v1297, 4LL, &v1297);
                            if ( v274 < 0 )
                              goto LABEL_181;
                            v274 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                            if ( v274 < 0 )
                              goto LABEL_181;
                            if ( v388 - (int)dwBytes >= (unsigned int)v1293 )
                            {
                              v1307 = (unsigned int)v1293;
                              v1294 = v1297;
                              v274 = RtlULongLongAdd(v1297, (unsigned int)v1293, &v1297);
                              if ( v274 < 0 )
                                goto LABEL_181;
                              v274 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1293, &dwBytes);
                              if ( v274 < 0 )
                                goto LABEL_181;
                              if ( (unsigned int)(v389 - dwBytes) >= 4 )
                              {
                                LODWORD(v1296) = *(_DWORD *)v1297;
                                v274 = RtlULongLongAdd(v1297, 4LL, &v1297);
                                if ( v274 < 0 )
                                  goto LABEL_181;
                                v274 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                                if ( v274 < 0 )
                                  goto LABEL_181;
                                if ( v390 - (int)dwBytes >= (unsigned int)v1296 )
                                {
                                  v274 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1296, &dwBytes);
                                  if ( v274 < 0 )
                                    goto LABEL_181;
                                  if ( v391 == (_DWORD)dwBytes
                                    && (unsigned int)((_DWORD)v1305 + v1296 + v1293) + 12LL == v391 )
                                  {
                                    v392 = GetProcessHeap();
                                    v393 = HeapAlloc(v392, 8u, 0x30uLL);
                                    v394 = v393;
                                    if ( !v393 )
                                    {
                                      v66 = -805306345;
                                      v1307 = v1314;
                                      Src = v1300;
                                      Size = (SIZE_T)lpModuleName;
                                      v1308 = 0LL;
                                      goto LABEL_248;
                                    }
                                    v274 = 0;
                                    if ( Src )
                                    {
                                      *(_DWORD *)v393 = (_DWORD)v1305;
                                      v270 = GetProcessHeap();
                                      v271 = HeapAlloc(v270, 8u, Size);
                                      if ( !v271 )
                                        goto LABEL_505;
                                      v394[1] = v271;
                                      memcpy_0(v271, Src, Size);
                                    }
                                    else
                                    {
                                      *(_DWORD *)v393 = 0;
                                      v393[1] = 0LL;
                                    }
                                    if ( v1294 )
                                    {
                                      *((_DWORD *)v394 + 4) = v1293;
                                      v272 = GetProcessHeap();
                                      v273 = HeapAlloc(v272, 8u, v1307);
                                      if ( !v273 )
                                        goto LABEL_505;
                                      v394[3] = v273;
                                      v274 = 0;
                                      memcpy_0(v273, (const void *)v1294, v1307);
                                    }
                                    else
                                    {
                                      *((_DWORD *)v394 + 4) = 0;
                                      v394[3] = 0LL;
                                    }
                                    if ( !v1297 )
                                    {
                                      *((_DWORD *)v394 + 8) = 0;
                                      v394[5] = 0LL;
                                      goto LABEL_512;
                                    }
                                    v275 = (unsigned int)v1296;
                                    *((_DWORD *)v394 + 8) = v1296;
                                    v276 = v275;
                                    Src = (void *)v275;
                                    v277 = GetProcessHeap();
                                    v278 = HeapAlloc(v277, 8u, v276);
                                    if ( v278 )
                                    {
                                      v394[5] = v278;
                                      v274 = 0;
                                      memcpy_0(v278, (const void *)v1297, (size_t)Src);
LABEL_512:
                                      if ( v274 < 0 )
                                      {
                                        v1308 = 0LL;
                                        if ( v394 )
                                        {
                                          v1297 = v394[1];
                                          if ( v1297 )
                                          {
                                            v399 = GetProcessHeap();
                                            HeapFree(v399, 0, (LPVOID)v1297);
                                            v394[1] = 0LL;
                                          }
                                          v1297 = v394[3];
                                          if ( v1297 )
                                          {
                                            v400 = GetProcessHeap();
                                            HeapFree(v400, 0, (LPVOID)v1297);
                                            v394[3] = 0LL;
                                          }
                                          v1297 = v394[5];
                                          if ( v1297 )
                                          {
                                            v401 = GetProcessHeap();
                                            HeapFree(v401, 0, (LPVOID)v1297);
                                            v394[5] = 0LL;
                                          }
                                          v402 = GetProcessHeap();
                                          HeapFree(v402, 0, v394);
                                          v1308 = 0LL;
                                        }
                                      }
                                      else
                                      {
                                        v1308 = v394;
                                      }
                                      v262 = v1315;
                                      goto LABEL_181;
                                    }
LABEL_505:
                                    v274 = -1073741801;
                                    v1297 = v394[1];
                                    if ( v1297 )
                                    {
                                      v395 = GetProcessHeap();
                                      HeapFree(v395, 0, (LPVOID)v1297);
                                      v394[1] = 0LL;
                                    }
                                    v1297 = v394[3];
                                    if ( v1297 )
                                    {
                                      v396 = GetProcessHeap();
                                      HeapFree(v396, 0, (LPVOID)v1297);
                                      v394[3] = 0LL;
                                    }
                                    v1297 = v394[5];
                                    if ( v1297 )
                                    {
                                      v397 = GetProcessHeap();
                                      HeapFree(v397, 0, (LPVOID)v1297);
                                      v394[5] = 0LL;
                                    }
                                    v398 = GetProcessHeap();
                                    HeapFree(v398, 0, v394);
                                    v394 = 0LL;
                                    goto LABEL_512;
                                  }
                                }
                              }
                            }
                          }
                        }
                        v66 = -805306306;
                        v1307 = v384;
                        v101 = v385;
                        v1294 = v385;
LABEL_473:
                        Src = v1300;
                        Size = (SIZE_T)lpModuleName;
                        goto LABEL_258;
                      }
                    }
                    else
                    {
                      v383 = GetLastError();
                      LODWORD(v1321) = v383;
                      v66 = v383;
                      if ( v383 > 0 )
                      {
                        v66 = (unsigned __int16)v383 | 0x80070000;
                        LODWORD(v1321) = v66;
                      }
                      if ( v66 >= 0 )
                      {
                        v66 = -2147467259;
                        LODWORD(v1321) = -2147467259;
                      }
                    }
                    v1313 = v262;
                    if ( v66 == -805306333 )
                    {
                      v66 = -2147024774;
                      v101 = v1304;
                      v1307 = v1314;
                      Src = v1300;
                      v254 = (SIZE_T)lpModuleName;
                      goto LABEL_241;
                    }
                    v267 = v1304;
                    v266 = v1314;
                    v101 = v1304;
                    v268 = v1300;
                    v269 = lpModuleName;
                    v1307 = v1314;
                    v1294 = v1304;
                    Src = v1300;
                    Size = (SIZE_T)lpModuleName;
                    if ( v66 >= 0 )
                    {
                      v265 = dwBytes;
                      goto LABEL_256;
                    }
                  }
                }
              }
            }
LABEL_125:
            if ( !v101 )
            {
LABEL_126:
              v102 = v1307;
              if ( v1307 )
              {
                lpMem = *(LPVOID *)(v1307 + 8);
                if ( lpMem )
                {
                  v434 = GetProcessHeap();
                  HeapFree(v434, 0, lpMem);
                  *(_QWORD *)(v102 + 8) = 0LL;
                }
                lpMem = *(LPVOID *)(v102 + 24);
                if ( lpMem )
                {
                  v435 = GetProcessHeap();
                  HeapFree(v435, 0, lpMem);
                  *(_QWORD *)(v102 + 24) = 0LL;
                }
                lpMem = *(LPVOID *)(v102 + 40);
                if ( lpMem )
                {
                  v436 = GetProcessHeap();
                  HeapFree(v436, 0, lpMem);
                  *(_QWORD *)(v102 + 40) = 0LL;
                }
                v437 = GetProcessHeap();
                HeapFree(v437, 0, (LPVOID)v102);
              }
              v103 = v1313;
              if ( v1313 )
              {
                v438 = GetProcessHeap();
                HeapFree(v438, 0, v103);
              }
              v104 = v1320;
              if ( v1320 )
              {
                v439 = GetProcessHeap();
                HeapFree(v439, 0, v104);
              }
              v105 = v1308;
              if ( v1308 )
              {
                lpMem = (LPVOID)*((_QWORD *)v1308 + 1);
                if ( lpMem )
                {
                  v440 = GetProcessHeap();
                  HeapFree(v440, 0, lpMem);
                  *((_QWORD *)v105 + 1) = 0LL;
                }
                lpMem = (LPVOID)*((_QWORD *)v105 + 3);
                if ( lpMem )
                {
                  v441 = GetProcessHeap();
                  HeapFree(v441, 0, lpMem);
                  *((_QWORD *)v105 + 3) = 0LL;
                }
                lpMem = (LPVOID)*((_QWORD *)v105 + 5);
                if ( lpMem )
                {
                  v442 = GetProcessHeap();
                  HeapFree(v442, 0, lpMem);
                  *((_QWORD *)v105 + 5) = 0LL;
                }
                v443 = GetProcessHeap();
                HeapFree(v443, 0, v105);
              }
              v106 = v1309;
              if ( v1309 )
              {
                v444 = GetProcessHeap();
                HeapFree(v444, 0, v106);
              }
              goto LABEL_134;
            }
LABEL_578:
            v433 = GetProcessHeap();
            HeapFree(v433, 0, (LPVOID)v1294);
            goto LABEL_126;
          }
          v1332 = dwBytes;
          v251 = dwBytes;
          v252 = GetProcessHeap();
          v253 = (WCHAR *)HeapAlloc(v252, 8u, v251);
          lpModuleName = v253;
          if ( !v253 )
          {
            v66 = -805306345;
            v101 = (size_t)v1300;
            Src = v1315;
            v254 = v1297;
LABEL_241:
            v1294 = v101;
            LODWORD(v1321) = v66;
            Size = v254;
            goto LABEL_125;
          }
          v368 = (const void **)v1307;
          v1304 = (SIZE_T)v253;
          *(_DWORD *)v253 = *(_DWORD *)v1307;
          v169 = RtlULongLongAdd(v253, 4LL, &v1304);
          if ( v169 < 0 )
          {
            v375 = v369;
          }
          else
          {
            memcpy_0((void *)v1304, v368[1], *(unsigned int *)v368);
            v370 = RtlULongLongAdd(v1304, *(unsigned int *)v368, &v1304);
            v371 = lpModuleName;
            v169 = v370;
            if ( v370 < 0 )
              goto LABEL_443;
            v372 = v1304;
            *(_DWORD *)v1304 = *((_DWORD *)v368 + 4);
            v169 = RtlULongLongAdd(v372, 4LL, &v1304);
            if ( v169 < 0
              || (memcpy_0((void *)v1304, v368[3], *((unsigned int *)v368 + 4)),
                  v373 = RtlULongLongAdd(v1304, *((unsigned int *)v368 + 4), &v1304),
                  v371 = lpModuleName,
                  v169 = v373,
                  v373 < 0)
              || (v374 = v1304,
                  *(_DWORD *)v1304 = *((_DWORD *)v368 + 8),
                  v169 = RtlULongLongAdd(v374, 4LL, &v1304),
                  v169 < 0) )
            {
LABEL_443:
              v375 = (WCHAR *)v371;
            }
            else
            {
              memcpy_0((void *)v1304, v368[5], *((unsigned int *)v368 + 8));
              v169 = RtlULongLongAdd(v1304, *((unsigned int *)v368 + 8), &v1304);
              v375 = (WCHAR *)lpModuleName;
              if ( v169 >= 0 )
              {
                v1313 = (LPVOID)lpModuleName;
                LODWORD(v1296) = v1332;
LABEL_442:
                v167 = v1300;
                goto LABEL_242;
              }
            }
          }
          v376 = GetProcessHeap();
          HeapFree(v376, 0, v375);
          goto LABEL_442;
        }
        v85 = (_DWORD *)v1356[1];
        for ( n = 0; n < v84; ++n )
        {
          v87 = *v85 + 4;
          if ( v87 < 4 || (_DWORD *)((char *)v85 + v87) < v85 )
            goto LABEL_70;
          v85 = (_DWORD *)((char *)v85 + v87);
        }
        if ( v85 + 1 >= v85 )
        {
          if ( (unsigned __int64)(v85 + 3) <= v1356[1] + HIDWORD(v1356[0]) )
          {
            *v85 = 8;
            if ( v83 )
              memcpy_0(v85 + 1, v83, 8uLL);
            v88 = 4;
            v89 = LODWORD(v1356[0]) + 1;
            goto LABEL_341;
          }
LABEL_334:
          v66 = -1073741789;
          goto LABEL_71;
        }
      }
LABEL_70:
      v66 = -1073741675;
      goto LABEL_71;
    }
LABEL_99:
    v66 = -1073741801;
    goto LABEL_71;
  }
  pcchLength[0] = 0LL;
LABEL_64:
  v66 = -1073741762;
LABEL_71:
  LODWORD(v1321) = v66;
LABEL_72:
  v1356[0] = 0LL;
  lpMem = (LPVOID)v1356[1];
  if ( v1356[1] )
  {
    v80 = GetProcessHeap();
    HeapFree(v80, 0, lpMem);
    v1356[1] = 0LL;
  }
  if ( v1292 )
  {
    v81 = GetProcessHeap();
    HeapFree(v81, 0, (LPVOID)v1292);
  }
  if ( v72 )
  {
    v460 = GetProcessHeap();
    HeapFree(v460, 0, v72);
  }
  v82 = Src;
  if ( Src )
  {
    v461 = GetProcessHeap();
    HeapFree(v461, 0, v82);
  }
  if ( v66 < 0 )
  {
    v61 = 4LL;
    goto LABEL_51;
  }
  if ( !v1310 )
    goto LABEL_1242;
  lpMem = 0LL;
  dword_1800E24E8 = v1310;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    goto LABEL_1219;
  v1316 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10F8[0])(0LL, 0LL, 1027LL);
  if ( !v1316 )
  {
    GetLastError();
    goto LABEL_1219;
  }
  v464 = ((__int64 (__fastcall *)(__int64))off_1800E1098[0])(v463);
  v465 = dword_1800E24E8;
  qword_1800E36F0 = v464;
  LODWORD(dwBytes) = dword_1800E24E8;
  memset_0(&v1395, 0, 0x70uLL);
  v1297 = 0LL;
  memset(v1424, 0, 44);
  v1357 = 0LL;
  v1315 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800E36FC, 1, 0) )
    ;
  v466 = dword_1800E36F8;
  if ( dword_1800E36F8 )
  {
LABEL_678:
    dword_1800E36F8 = v466 + 1;
    goto LABEL_679;
  }
  LODWORD(v1305) = 0;
  LODWORD(v1293) = 0;
  LODWORD(v1296) = 0;
  v467 = (const WCHAR *)MemoryAlloc(0x338uLL);
  lpModuleName = v467;
  if ( !v467 )
    goto LABEL_643;
  v468 = 103LL;
  v469 = 0;
  v470 = (char *)v467 + 7;
  v471 = 0;
  v472 = (unsigned __int8 *)&unk_1800BC1E2;
  v473 = 0;
  v474 = -1;
  do
  {
    v475 = *(v472 - 1) | (*(v472 - 2) << 8);
    v476 = v472[2] << 8;
    v477 = *v472;
    v472 += 8;
    v478 = *(v472 - 7) | ((v477 | (v475 << 8)) << 8);
    v479 = v473 ^ v478;
    v480 = *(v472 - 3) | ((*(v472 - 4) | ((*(v472 - 5) | v476) << 8)) << 8);
    v481 = v473 ^ v478 ^ v471 ^ v480 ^ 0xAC987321;
    v482 = v479 ^ (__ROR4__(v481, 22) + 4991 * __ROR4__(v481 + 1419157410, 27));
    v483 = v481 ^ (43881 * __ROR4__(v482 + 133239679, 9) - __ROR4__(v482, 30));
    v484 = v482 ^ (24670 * v483 - (v483 >> 13) - 123127970);
    v485 = v483 ^ (2033 * __ROR4__(v484 ^ 0xAB69, 26) - __ROR4__(v484, 30));
    v486 = v484 ^ (133239679 - (v485 ^ 0xAB69605E));
    v487 = v485 ^ (43881 * (v486 ^ 0x137F)) ^ __ROR4__(v486, 6);
    v488 = v486 ^ (__ROR4__(v487, 30) + 24670 * __ROR4__(v487 + 133239679, 15));
    v489 = v487 ^ (2033 * __ROR4__(v488 + 1419157410, 14) - __ROR4__(v488, 24));
    v490 = v488 ^ __ROR4__(v489, 10) ^ (4991 * __ROR4__(v489 ^ 0xAB69605E, 12));
    v491 = v489 ^ (v490 >> 10) ^ (43881 * (v490 ^ 0x7F1));
    v492 = v490 ^ (2033 * (__ROR4__(~v491, 5) + 24670));
    v493 = v492 ^ (((v491 ^ (v492 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v491 ^ (v492 - 2033) ^ 0xAB6967AF, 30));
    v494 = v491 ^ (v492 - 2033) ^ 0xAB69605E ^ (__ROR4__(v493, 25) + 43881 * __ROR4__(v493 - 133239679, 6));
    v495 = v493 ^ (24670 * (v494 ^ 0x137F) + __ROR4__(v494, 9));
    v496 = v494 ^ (__ROR4__(v495, 25) + 2033 * __ROR4__(v495 ^ 0xAB69, 27));
    v497 = v495 ^ v496 ^ 0xAC987321;
    v498 = v496 ^ (4991 * __ROR4__(v497, 3) - 219010071);
    v499 = v497 ^ (24670 * __ROR4__(v498 - 133239679, 1) - __ROR4__(v498, 6));
    v500 = v498 ^ (__ROR4__(v499, 18) + 2033 * __ROR4__(v499 - 1419157410, 29));
    v501 = v499 ^ (4991 * __ROR4__(v500 - 1419157410, 17) - __ROR4__(v500, 14));
    v502 = v500 ^ (v501 >> 3) ^ (43881 * (v501 ^ 0x605E));
    v503 = __ROR4__(v502, 30);
    v471 = v474 ^ v502;
    v474 = v480;
    v473 = v469 ^ v501 ^ v503 ^ (24670 * __ROR4__(v500 ^ (v501 >> 3) ^ (43881 * (v501 ^ 0x605E)) ^ 0x7F1137F, 28));
    v469 = v478;
    *(v470 - 4) = v473;
    *v470 = v471;
    *(v470 - 5) = __ROR4__(v473, 8);
    v470 += 8;
    *(v470 - 9) = __ROR4__(v471, 8);
    *(v470 - 14) = __ROR4__(v473, 16);
    *(v470 - 10) = __ROR4__(v471, 16);
    *(v470 - 15) = __ROR4__(v473, 24);
    *(v470 - 11) = __ROR4__(v471, 24);
    --v468;
  }
  while ( v468 );
  v504 = 0;
  LODWORD(v2) = 0;
  v465 = dwBytes;
  v505 = 0LL;
  v64 = v1342;
  v506 = lpModuleName;
  do
    v504 ^= *((_BYTE *)lpModuleName + v505++);
  while ( v505 < 0x338 );
  if ( v504 != 64LL )
  {
    MemoryFree((void *)lpModuleName);
    goto LABEL_643;
  }
  *((_BYTE *)lpModuleName + 823) = 0;
  memset_0(&unk_1800E33A0, 0, 0x60uLL);
  lpModuleName = v506;
  while ( *(_BYTE *)v506 )
  {
    v509 = v506;
    v510 = -1LL;
    do
      ++v510;
    while ( v506[v510] );
    v511 = &v506[v510];
    v1300 = (LPVOID)(3LL * (unsigned int)v1296);
    if ( !GetModuleHandleExW(0, v509, (HMODULE *)&unk_1800E33A0 + 3 * (unsigned int)v1296) )
    {
      v522 = -1073741702;
      goto LABEL_674;
    }
    v512 = v1300;
    v513 = 0;
    LODWORD(v1293) = 0;
    v514 = *((_QWORD *)&unk_1800E33A0 + (_QWORD)v1300);
    if ( *(_WORD *)v514 == 23117
      && (v515 = *(int *)(v514 + 60), (unsigned int)v515 < 0x10000000)
      && (v516 = *((_QWORD *)&unk_1800E33A0 + (_QWORD)v1300) + v515, v516 >= *((_QWORD *)&unk_1800E33A0 + (_QWORD)v1300))
      && *(_DWORD *)v516 == 17744 )
    {
      if ( *(_WORD *)(v516 + 24) == 267 || *(_WORD *)(v516 + 24) == 523 )
      {
        *(_QWORD *)((char *)&unk_1800E33A0 + 8 * (_QWORD)v1300 + 12) = *(_QWORD *)(v516 + 136);
        *((_DWORD *)&unk_1800E33A0 + 2 * (_QWORD)v512 + 2) = *(_DWORD *)(v516 + 80);
        goto LABEL_663;
      }
      v513 = -1073741811;
    }
    else
    {
      v513 = -1073741701;
    }
    LODWORD(v1293) = v513;
LABEL_663:
    v517 = *(_DWORD *)(v511 + 1);
    v518 = 0;
    v1310 = v517;
    v506 = v511 + 3;
    while ( 1 )
    {
      LODWORD(v1314) = v518;
      if ( v518 >= v517 )
        break;
      v519 = (const CHAR *)v506;
      v520 = -1LL;
      do
        ++v520;
      while ( *((_BYTE *)v506 + v520) );
      v506 = (const WCHAR *)((char *)v506 + v520 + 1);
      if ( v513 >= 0 )
      {
        v521 = GetProcAddress(*((HMODULE *)&unk_1800E33A0 + (_QWORD)v512), v519);
        if ( !v521 )
          goto LABEL_673;
        v512 = v1300;
        off_1800E1000[(unsigned int)v1305] = v521;
        v513 = v1293;
      }
      LODWORD(v1305) = (_DWORD)v1305 + 1;
      v517 = v1310;
      v518 = v1314 + 1;
    }
    LODWORD(v1296) = v1296 + 1;
  }
LABEL_673:
  v522 = v1293;
LABEL_674:
  if ( lpModuleName )
  {
    v523 = GetProcessHeap();
    HeapFree(v523, 0, (LPVOID)lpModuleName);
  }
  if ( v522 >= 0 )
  {
    v466 = dword_1800E36F8;
    goto LABEL_678;
  }
LABEL_643:
  v507 = 4LL;
  v508 = (HMODULE *)&unk_1800E33A0;
  lpModuleName = (LPCWSTR)4;
  do
  {
    if ( *v508 )
    {
      FreeLibrary(*v508);
      v507 = (__int64)lpModuleName;
    }
    v508 += 3;
    lpModuleName = (LPCWSTR)--v507;
  }
  while ( v507 );
  memset_0(&unk_1800E33A0, 0, 0x60uLL);
  memcpy_0(off_1800E1000, off_1800B5650, 0x170uLL);
LABEL_679:
  LODWORD(v1305) = 0;
  LODWORD(v1295) = 0;
  _InterlockedExchange(&dword_1800E36FC, 0);
  WORD2(v1295) = 0;
  LODWORD(v1293) = 0;
  LODWORD(v1296) = 0;
  v1310 = 0;
  LODWORD(v1314) = 0;
  lpModuleName = 0LL;
  v1300 = 0LL;
  v1304 = 0LL;
  Src = 0LL;
  v1312 = 0;
  LODWORD(v1322) = 0;
  while ( _InterlockedCompareExchange(&dword_1800E36FC, 1, 0) )
    ;
  v524 = dword_1800E36F8;
  if ( dword_1800E36F8 )
  {
LABEL_724:
    dword_1800E36F8 = v524 + 1;
    goto LABEL_725;
  }
  LODWORD(v1309) = 0;
  LODWORD(v1308) = 0;
  LODWORD(v1320) = 0;
  v525 = (const WCHAR *)MemoryAlloc(0x338uLL);
  v1292 = v525;
  if ( !v525 )
    goto LABEL_689;
  v526 = 103LL;
  v527 = 0;
  v528 = (char *)v525 + 7;
  v529 = 0;
  v530 = (unsigned __int8 *)&unk_1800BC1E2;
  v531 = 0;
  v532 = -1;
  do
  {
    v533 = *(v530 - 1) | (*(v530 - 2) << 8);
    v534 = v530[2] << 8;
    v535 = *v530;
    v530 += 8;
    v536 = *(v530 - 7) | ((v535 | (v533 << 8)) << 8);
    v537 = v536 ^ v531;
    v538 = *(v530 - 3) | ((*(v530 - 4) | ((*(v530 - 5) | v534) << 8)) << 8);
    v539 = v538 ^ v529 ^ v537 ^ 0xAC987321;
    v540 = v537 ^ (__ROR4__(v539, 22) + 4991 * __ROR4__(v539 + 1419157410, 27));
    v541 = v539 ^ (43881 * __ROR4__(v540 + 133239679, 9) - __ROR4__(v540, 30));
    v542 = v540 ^ (24670 * v541 - (v541 >> 13) - 123127970);
    v543 = v541 ^ (2033 * __ROR4__(v542 ^ 0xAB69, 26) - __ROR4__(v542, 30));
    v544 = v542 ^ (133239679 - (v543 ^ 0xAB69605E));
    v545 = v543 ^ (43881 * (v544 ^ 0x137F)) ^ __ROR4__(v544, 6);
    v546 = v544 ^ (__ROR4__(v545, 30) + 24670 * __ROR4__(v545 + 133239679, 15));
    v547 = v545 ^ (2033 * __ROR4__(v546 + 1419157410, 14) - __ROR4__(v546, 24));
    v548 = v546 ^ __ROR4__(v547, 10) ^ (4991 * __ROR4__(v547 ^ 0xAB69605E, 12));
    v549 = v547 ^ (v548 >> 10) ^ (43881 * (v548 ^ 0x7F1));
    v550 = v548 ^ (2033 * (__ROR4__(~v549, 5) + 24670));
    v551 = v550 ^ (((v549 ^ (v550 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v549 ^ (v550 - 2033) ^ 0xAB6967AF, 30));
    v552 = v549 ^ (v550 - 2033) ^ 0xAB69605E ^ (__ROR4__(v551, 25) + 43881 * __ROR4__(v551 - 133239679, 6));
    v553 = v551 ^ (24670 * (v552 ^ 0x137F) + __ROR4__(v552, 9));
    v554 = v552 ^ (__ROR4__(v553, 25) + 2033 * __ROR4__(v553 ^ 0xAB69, 27));
    v555 = v553 ^ v554 ^ 0xAC987321;
    v556 = v554 ^ (4991 * __ROR4__(v555, 3) - 219010071);
    v557 = v555 ^ (24670 * __ROR4__(v556 - 133239679, 1) - __ROR4__(v556, 6));
    v558 = v556 ^ (__ROR4__(v557, 18) + 2033 * __ROR4__(v557 - 1419157410, 29));
    v559 = v557 ^ (4991 * __ROR4__(v558 - 1419157410, 17) - __ROR4__(v558, 14));
    v560 = v558 ^ (v559 >> 3) ^ (43881 * (v559 ^ 0x605E));
    v529 = v560 ^ v532;
    v532 = v538;
    v561 = v527 ^ __ROR4__(v560, 30) ^ (24670 * __ROR4__(v560 ^ 0x7F1137F, 28));
    v527 = v536;
    v531 = v559 ^ v561;
    *(v528 - 4) = v531;
    *v528 = v529;
    *(v528 - 5) = __ROR4__(v531, 8);
    v528 += 8;
    *(v528 - 9) = __ROR4__(v529, 8);
    *(v528 - 14) = __ROR4__(v531, 16);
    *(v528 - 10) = __ROR4__(v529, 16);
    *(v528 - 15) = __ROR4__(v531, 24);
    *(v528 - 11) = __ROR4__(v529, 24);
    --v526;
  }
  while ( v526 );
  v562 = 0;
  LODWORD(v2) = 0;
  v465 = dwBytes;
  v563 = 0LL;
  v64 = v1342;
  v564 = v1292;
  do
    v562 ^= *((_BYTE *)v1292 + v563++);
  while ( v563 < 0x338 );
  if ( v562 != 64LL )
  {
    MemoryFree((void *)v1292);
    goto LABEL_689;
  }
  *((_BYTE *)v1292 + 823) = 0;
  memset_0(&unk_1800E33A0, 0, 0x60uLL);
  v1292 = v564;
  while ( 2 )
  {
    if ( *(_BYTE *)v564 )
    {
      v567 = v564;
      v568 = -1LL;
      do
        ++v568;
      while ( v564[v568] );
      v569 = &v564[v568];
      Size = 3LL * (unsigned int)v1320;
      if ( !GetModuleHandleExW(0, v567, (HMODULE *)&unk_1800E33A0 + 3 * (unsigned int)v1320) )
      {
        v580 = -1073741702;
        goto LABEL_720;
      }
      v570 = Size;
      v571 = 0;
      LODWORD(v1308) = 0;
      v572 = *((_QWORD *)&unk_1800E33A0 + Size);
      if ( *(_WORD *)v572 == 23117
        && (v573 = *(int *)(v572 + 60), (unsigned int)v573 < 0x10000000)
        && (v574 = *((_QWORD *)&unk_1800E33A0 + Size) + v573, v574 >= *((_QWORD *)&unk_1800E33A0 + Size))
        && *(_DWORD *)v574 == 17744 )
      {
        if ( *(_WORD *)(v574 + 24) != 267 && *(_WORD *)(v574 + 24) != 523 )
        {
          v571 = -1073741811;
          goto LABEL_707;
        }
        *(_QWORD *)((char *)&unk_1800E33A0 + 8 * Size + 12) = *(_QWORD *)(v574 + 136);
        *((_DWORD *)&unk_1800E33A0 + 2 * v570 + 2) = *(_DWORD *)(v574 + 80);
      }
      else
      {
        v571 = -1073741701;
LABEL_707:
        LODWORD(v1308) = v571;
      }
      v575 = *(_DWORD *)(v569 + 1);
      v576 = 0;
      LODWORD(dwBytes) = v575;
      v564 = v569 + 3;
      while ( 1 )
      {
        LODWORD(v1313) = v576;
        if ( v576 >= v575 )
          break;
        v577 = (const CHAR *)v564;
        v578 = -1LL;
        do
          ++v578;
        while ( *((_BYTE *)v564 + v578) );
        v564 = (const WCHAR *)((char *)v564 + v578 + 1);
        if ( v571 >= 0 )
        {
          v579 = GetProcAddress(*((HMODULE *)&unk_1800E33A0 + v570), v577);
          if ( !v579 )
            goto LABEL_719;
          v570 = Size;
          off_1800E1000[(unsigned int)v1309] = v579;
          v571 = (int)v1308;
        }
        LODWORD(v1309) = (_DWORD)v1309 + 1;
        v575 = dwBytes;
        v576 = (_DWORD)v1313 + 1;
      }
      LODWORD(v1320) = (_DWORD)v1320 + 1;
      continue;
    }
    break;
  }
LABEL_719:
  v580 = (int)v1308;
LABEL_720:
  if ( v1292 )
  {
    v581 = GetProcessHeap();
    HeapFree(v581, 0, (LPVOID)v1292);
  }
  if ( v580 >= 0 )
  {
    v524 = dword_1800E36F8;
    goto LABEL_724;
  }
LABEL_689:
  v565 = 4LL;
  v566 = (HMODULE *)&unk_1800E33A0;
  v1292 = (LPCWSTR)4;
  do
  {
    if ( *v566 )
    {
      FreeLibrary(*v566);
      v565 = (__int64)v1292;
    }
    v566 += 3;
    v1292 = (LPCWSTR)--v565;
  }
  while ( v565 );
  memset_0(&unk_1800E33A0, 0, 0x60uLL);
  memcpy_0(off_1800E1000, off_1800B5650, 0x170uLL);
LABEL_725:
  _InterlockedExchange(&dword_1800E36FC, 0);
  memset_0(&v1395, 0, 0x70uLL);
  LOWORD(v1295) = (v465 >> 4) & 0xF;
  LODWORD(v1313) = v465 & 0xF;
  WORD1(v1295) = (v465 >> 8) & 0xF;
  WORD2(v1295) = (v465 >> 12) & 0xF;
  v1357 = 0LL;
  v1292 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10F8[0])(0LL, 0LL, 1027LL);
  LODWORD(v1320) = 0xFFFFFF;
  if ( v1292 )
  {
    Size = 0LL;
    v1346 = 0LL;
    v583 = 0;
    v1347 = 0LL;
    v1294 = 0LL;
    v584 = 0;
    v1307 = 0LL;
    v1336 = 0;
    memset(v1364, 0, sizeof(v1364));
    dwBytes = 0LL;
    LODWORD(v1309) = 0;
    v1337 = 0;
    if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *, unsigned int *))off_1800E10A0[0])(
           8LL,
           &v1336,
           0LL,
           &v1337,
           v1288) )
    {
      v586 = MemoryAlloc(2LL * v1337);
      SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1307, v586);
      if ( !SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1307)
        || (v587 = MemoryAlloc(4LL * (v1336 + 1)),
            SP<unsigned long,SP_MEM<unsigned long>>::operator=(&dwBytes, v587),
            (v1303 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&dwBytes)) == 0) )
      {
        v583 = -2147024882;
LABEL_749:
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&dwBytes);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1307);
        if ( v583 < 0 )
          goto LABEL_802;
        v593 = 0;
        v594 = 0;
        LODWORD(v1308) = 0;
        if ( v584 )
        {
          v595 = 0LL;
          while ( 2 )
          {
            for ( ii = 0; ii < 0x26; ii = v598 + 1 )
            {
              Ptr = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&Size);
              if ( *(_DWORD *)(Ptr + v595) == *(_DWORD *)(v599 + 4LL * v598 + 813888) )
              {
                v593 = v598;
                LODWORD(v1308) = v598;
                goto LABEL_759;
              }
            }
            ++v594;
            v595 += 4LL;
            if ( v594 < v584 )
              continue;
            break;
          }
          v593 = 0;
        }
LABEL_759:
        v600 = v593;
        LODWORD(v1309) = 0;
        v601 = (unsigned int)dword_1800C6B40[v593];
        memset(v1417, 0, sizeof(v1417));
        if ( ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64))off_1800E10A8[0])(v601, v1456, 85LL)
          && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *))off_1800E1090[0])(v1456, 88LL, v1417) > 0 )
        {
          LODWORD(v1309) = (HIDWORD(v1417[0]) >> 27) & 1;
        }
        memset_0(v1366, 0, 0x90uLL);
        v602 = L"Segoe UI Light";
        v603 = (const wchar_t **)&v1365;
        v604 = 19LL;
        do
        {
          *v603 = v602;
          v605 = -1LL;
          do
            ++v605;
          while ( v602[v605] );
          ++v603;
          v602 += v605 + 1;
          --v604;
        }
        while ( v604 );
        v1300 = *(LPVOID *)&v1366[8 * byte_1800C6BE0[3 * v600] - 8];
        v1304 = *(_QWORD *)&v1366[8 * byte_1800C6BE0[3 * v600 + 1] - 8];
        Src = *(void **)&v1366[8 * byte_1800C6BE0[3 * v600 + 2] - 8];
        v606 = (char *)MemoryAlloc(0x1C90uLL);
        v1303 = (SIZE_T)v606;
        if ( !v606 )
          goto LABEL_788;
        LODWORD(dwBytes) = -1;
        v607 = v606 + 7;
        v608 = -1;
        v609 = (unsigned __int8 *)&unk_1800C4EA2;
        v610 = 0;
        v611 = 0;
        v612 = 0;
        v613 = 914LL;
        do
        {
          v614 = *(v609 - 1) | (*(v609 - 2) << 8);
          v615 = v609[2] << 8;
          v616 = *v609;
          v609 += 8;
          v617 = *(v609 - 7) | ((v616 | (v614 << 8)) << 8);
          v618 = v612 ^ v617;
          v619 = *(v609 - 3) | ((*(v609 - 4) | ((*(v609 - 5) | v615) << 8)) << 8);
          v620 = v612 ^ v617 ^ v611 ^ v619 ^ 0xAC987321;
          v621 = v618 ^ (__ROR4__(v620, 22) + 4991 * __ROR4__(v620 + 1419157410, 27));
          v622 = v620 ^ (43881 * __ROR4__(v621 + 133239679, 9) - __ROR4__(v621, 30));
          v623 = v621 ^ (24670 * v622 - (v622 >> 13) - 123127970);
          v624 = v622 ^ (2033 * __ROR4__(v623 ^ 0xAB69, 26) - __ROR4__(v623, 30));
          v625 = v623 ^ (133239679 - (v624 ^ 0xAB69605E));
          v626 = v624 ^ (43881 * (v625 ^ 0x137F)) ^ __ROR4__(v625, 6);
          v627 = v625 ^ (__ROR4__(v626, 30) + 24670 * __ROR4__(v626 + 133239679, 15));
          v628 = v626 ^ (2033 * __ROR4__(v627 + 1419157410, 14) - __ROR4__(v627, 24));
          v629 = v627 ^ __ROR4__(v628, 10) ^ (4991 * __ROR4__(v628 ^ 0xAB69605E, 12));
          v630 = v628 ^ (v629 >> 10) ^ (43881 * (v629 ^ 0x7F1));
          v631 = v629 ^ (2033 * (__ROR4__(~v630, 5) + 24670));
          v632 = v631 ^ (((v630 ^ (v631 - 2033) ^ 0xAB69605E) >> 2)
                       + 4991 * __ROR4__(v630 ^ (v631 - 2033) ^ 0xAB6967AF, 30));
          v633 = v630 ^ (v631 - 2033) ^ 0xAB69605E ^ (__ROR4__(v632, 25) + 43881 * __ROR4__(v632 - 133239679, 6));
          v634 = v632 ^ (24670 * (v633 ^ 0x137F) + __ROR4__(v633, 9));
          v635 = v633 ^ (__ROR4__(v634, 25) + 2033 * __ROR4__(v634 ^ 0xAB69, 27));
          v636 = v634 ^ v635 ^ 0xAC987321;
          v637 = v635 ^ (4991 * __ROR4__(v636, 3) - 219010071);
          v638 = v636 ^ (24670 * __ROR4__(v637 - 133239679, 1) - __ROR4__(v637, 6));
          v639 = v637 ^ (__ROR4__(v638, 18) + 2033 * __ROR4__(v638 - 1419157410, 29));
          v640 = v638 ^ (4991 * __ROR4__(v639 - 1419157410, 17) - __ROR4__(v639, 14));
          v641 = v639 ^ (v640 >> 3) ^ (43881 * (v640 ^ 0x605E));
          v642 = __ROR4__(v641, 30);
          v611 = v608 ^ v641;
          v608 = v619;
          v612 = v610 ^ v640 ^ v642 ^ (24670 * __ROR4__(v639 ^ (v640 >> 3) ^ (43881 * (v640 ^ 0x605E)) ^ 0x7F1137F, 28));
          v610 = v617;
          *(v607 - 4) = v612;
          *v607 = v611;
          *(v607 - 5) = __ROR4__(v612, 8);
          v607 += 8;
          *(v607 - 9) = __ROR4__(v611, 8);
          *(v607 - 14) = __ROR4__(v612, 16);
          *(v607 - 10) = __ROR4__(v611, 16);
          *(v607 - 15) = __ROR4__(v612, 24);
          *(v607 - 11) = __ROR4__(v611, 24);
          --v613;
        }
        while ( v613 );
        v64 = v1342;
        v643 = 0LL;
        v644 = 0LL;
        do
        {
          v645 = (__m128)_mm_loadu_si128((const __m128i *)(v643 + v1303));
          v643 += 16LL;
          v646 = _mm_xor_ps(v645, v644);
          v644 = v646;
        }
        while ( v643 < 0x1C90 );
        v647 = _mm_xor_ps(v646, (__m128)_mm_srli_si128((__m128i)v646, 8));
        v648 = _mm_xor_ps(v647, (__m128)_mm_srli_si128((__m128i)v647, 4));
        v649 = _mm_xor_ps(v648, (__m128)_mm_srli_si128((__m128i)v648, 2));
        if ( (unsigned __int8)_mm_cvtsi128_si32((__m128i)_mm_xor_ps(v649, (__m128)_mm_srli_si128((__m128i)v649, 1))) != 127LL )
        {
          v583 = -1073425151;
          MemoryFree((void *)v1303);
          v1347 = 0LL;
          goto LABEL_802;
        }
        v1347 = 7312LL;
        v583 = 0;
        v1346 = v1303;
        v650 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1346);
        v652 = (int)v1308;
        v653 = (__int64 *)v1364;
        v654 = v650;
        v655 = 6LL;
        do
        {
          v656 = 0;
          do
          {
            if ( v652 == v656 )
              *v653 = v654;
            v657 = -1LL;
            do
              ++v657;
            while ( *(_BYTE *)(v654 + v657) );
            v656 += v651;
            v654 += v657 + 1;
          }
          while ( v656 < 0x26 );
          ++v653;
          v655 -= v651;
        }
        while ( v655 );
        v658 = MemoryAlloc(0x18uLL);
        SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1294, v658);
        v659 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1294);
        v1303 = v659;
        if ( v659 )
        {
          *(_OWORD *)v659 = 0LL;
          *(_QWORD *)(v659 + 16) = 0LL;
          v660 = 0;
          while ( 2 )
          {
            LODWORD(v1308) = v660;
            if ( v660 >= 3 )
            {
              lpModuleName = (LPCWSTR)v1294;
              v1395 = (int)v1309;
              v1294 = 0LL;
            }
            else
            {
              v661 = 0;
              v1307 = v660;
              while ( 1 )
              {
                if ( v661 >= 6 )
                  goto LABEL_796;
                if ( *((_WORD *)&v1295 + v660) == word_1800C6C58[v661] )
                  break;
                ++v661;
              }
              v662 = *((_QWORD *)v1364 + v661);
              v663 = -1LL;
              do
                ++v663;
              while ( *(_BYTE *)(v662 + v663) );
              v664 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1800E10C0[0])(
                       65001LL,
                       0LL,
                       v662,
                       (unsigned int)(v663 + 1),
                       0LL,
                       0);
              LODWORD(dwBytes) = v664;
              if ( v664 )
              {
                v665 = MemoryAlloc(2LL * v664);
                *(_QWORD *)(v1303 + 8 * v1307) = v665;
                if ( !v665 )
                  goto LABEL_788;
                v666 = -1LL;
                do
                  ++v666;
                while ( *(_BYTE *)(v662 + v666) );
                if ( ((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, _DWORD))off_1800E10C0[0])(
                       65001LL,
                       0LL,
                       v662,
                       (unsigned int)(v666 + 1),
                       v665,
                       dwBytes) )
                {
LABEL_796:
                  v660 = (_DWORD)v1308 + 1;
                  continue;
                }
              }
              v667 = GetLastError();
              v583 = v667;
              if ( v667 > 0 )
                v583 = (unsigned __int16)v667 | 0x80070000;
              if ( v583 >= 0 )
                v583 = -2147467259;
            }
            break;
          }
        }
        else
        {
LABEL_788:
          v583 = -2147024882;
        }
LABEL_802:
        v668 = (void **)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1294);
        if ( v668 )
        {
          v669 = 3LL;
          do
          {
            v670 = *v668;
            if ( *v668 )
            {
              v671 = -1LL;
              do
                ++v671;
              while ( *(_WORD *)&v670[2 * v671] );
              for ( jj = 2 * v671 + 2; jj; --jj )
                *v670++ = 0;
              MemoryFree(*v668);
            }
            ++v668;
            --v669;
          }
          while ( v669 );
        }
        if ( SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1346) )
        {
          v673 = (_BYTE *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1346);
          for ( kk = v1347; kk; kk -= v674 )
          {
            *v673 = 0;
            v673 += v674;
          }
        }
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1294);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1346);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&Size);
        if ( v583 < 0 )
          goto LABEL_915;
        v676 = (void **)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&lpModuleName);
        v1397 = *v676;
        v1398 = v676[1];
        v1399 = v676[2];
        v1358 = 0LL;
        LODWORD(v1358) = 16;
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1800E1168)(
                              66LL,
                              0LL,
                              &v1358,
                              0LL) )
        {
          v677 = GetLastError();
          v583 = v677;
          if ( v677 > 0 )
            v583 = (unsigned __int16)v677 | 0x80070000;
          v1396 = 0;
          if ( v583 >= 0 )
            v583 = -2147467259;
          goto LABEL_915;
        }
        v678 = (int)v1313;
        v1396 = BYTE4(v1358) & 1;
        if ( (_DWORD)v1313 == 1 )
        {
          LODWORD(v1305) = 42;
        }
        else
        {
          if ( (_DWORD)v1313 != 2 )
          {
            if ( (_DWORD)v1313 == 3 )
            {
              LODWORD(v1305) = 225;
              LODWORD(v1293) = 225;
            }
LABEL_828:
            v679 = 96;
            LODWORD(v1308) = 96;
            memset_0(v1446, 0, 0xDCuLL);
            v1447 = 220;
            if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1800E10E0[0])(0LL, 0xFFFFFFFFLL, v1446) )
            {
              v679 = v1448;
              v1312 = v1449;
              LODWORD(v1322) = v1450;
              if ( v1448 < 0x60u )
                v679 = 96;
              LODWORD(v1308) = v679;
            }
            v680 = Src;
            if ( v678 == 1 )
              v680 = v1300;
            v1303 = (SIZE_T)v680;
            memset_0(v1437, 0, 0x5CuLL);
            v583 = 0;
            v1295 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10F8[0])(0LL, 0LL, 1027LL);
            if ( !v1295 )
              goto LABEL_840;
            v681 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10B8[0])((unsigned int)v1305, v679, 72LL);
            v1437[4] = 400;
            v1437[0] = -v681;
            v1438 = 5;
            StringCchCopyW((char *)v1439, 32LL, (char *)v1303);
            v682 = ((__int64 (__fastcall *)(_DWORD *))off_1800E1020[0])(v1437);
            if ( v682 )
            {
              v1400 = (const WCHAR *)v682;
            }
            else
            {
              v683 = GetLastError();
              v583 = v683;
              if ( v683 > 0 )
                v583 = (unsigned __int16)v683 | 0x80070000;
              if ( v583 >= 0 )
                v583 = -2147467259;
            }
            ((void (__fastcall *)(_QWORD, void *))off_1800E1160[0])(0LL, v1295);
            if ( v583 < 0 )
              goto LABEL_915;
            v685 = Src;
            if ( (_DWORD)v1313 == 1 )
              v685 = v1300;
            Src = v685;
            memset_0(v1440, 0, 0x5CuLL);
            v583 = 0;
            v1303 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10F8[0])(0LL, 0LL, 1027LL);
            if ( !v1303 )
              goto LABEL_840;
            v686 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10B8[0])((unsigned int)v1293, v679, 72LL);
            v1440[4] = 400;
            v1440[0] = -v686;
            v1441 = 5;
            StringCchCopyW((char *)v1442, 32LL, (char *)Src);
            v687 = ((__int64 (__fastcall *)(_DWORD *))off_1800E1020[0])(v1440);
            if ( v687 )
            {
              v1401 = v687;
            }
            else
            {
              v688 = GetLastError();
              v583 = v688;
              if ( v688 > 0 )
                v583 = (unsigned __int16)v688 | 0x80070000;
              if ( v583 >= 0 )
                v583 = -2147467259;
            }
            ((void (__fastcall *)(_QWORD, SIZE_T))off_1800E1160[0])(0LL, v1303);
            if ( v583 < 0 )
              goto LABEL_915;
            v689 = 0;
            v690 = 0;
            switch ( (_DWORD)v1313 )
            {
              case 1:
                goto LABEL_859;
              case 2:
                v690 = 0;
                v689 = v1312 / 4;
                break;
              case 3:
LABEL_859:
                v689 = v1312;
                v690 = v1322;
                break;
            }
            *((_QWORD *)&v1357 + 1) = __PAIR64__(v690, v689);
            if ( (_DWORD)v1313 == 1 )
            {
              v691 = 150;
              v1310 = 42;
              LODWORD(v1296) = 150;
              LODWORD(v1314) = 32;
            }
            else if ( (unsigned int)((_DWORD)v1313 - 2) < 2 )
            {
              v691 = 0;
              v1310 = 0;
              LODWORD(v1296) = 0;
              LODWORD(v1314) = 0;
            }
            else
            {
              v691 = v1296;
            }
            v692 = v689 - v691;
            v693 = v1397;
            v1405.m128i_i32[2] = v692;
            v1404.m128i_i32[2] = v692;
            v1303 = ((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1800E1078)(v1292, v1400);
            LODWORD(v1309) = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1800E10D8)(
                               v1292,
                               v693,
                               0xFFFFFFFFLL,
                               &v1404,
                               3152,
                               0LL);
            v583 = (_DWORD)v1309 != 0 ? 0 : 0x80004005;
            if ( v1303 )
              ((void (__fastcall *)(LPCWSTR, SIZE_T))off_1800E1078)(v1292, v1303);
            if ( !(_DWORD)v1309 )
              goto LABEL_915;
            v694 = v1398;
            v1303 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_1800E1078)(v1292, v1401);
            LODWORD(v1309) = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1800E10D8)(
                               v1292,
                               v694,
                               0xFFFFFFFFLL,
                               &v1405,
                               3152,
                               0LL);
            v583 = (_DWORD)v1309 != 0 ? 0 : 0x80004005;
            if ( v1303 )
              ((void (__fastcall *)(LPCWSTR, SIZE_T))off_1800E1078)(v1292, v1303);
            if ( !(_DWORD)v1309 )
              goto LABEL_915;
            v695 = (int)v1313;
            if ( (unsigned int)((_DWORD)v1313 - 2) <= 1 )
            {
              v692 = v1405.m128i_i32[2];
              if ( v1404.m128i_i32[2] > v1405.m128i_i32[2] )
                v692 = v1404.m128i_i32[2];
            }
            if ( v1395 )
            {
              off_1800E1150((HAM_ACTIVITY_RM_CONTEXT *)&v1404, (void *)(unsigned int)(v692 - v1404.m128i_i32[2]));
              v696 = (unsigned int)(v692 - v1405.m128i_i32[2]);
            }
            else
            {
              off_1800E1150((HAM_ACTIVITY_RM_CONTEXT *)&v1404, (void *)(unsigned int)v1296);
              v696 = (unsigned int)v1296;
            }
            ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1800E1150)(
              &v1405,
              v696,
              (unsigned int)(v1314 + v1404.m128i_i32[3]));
            if ( (unsigned int)(v695 - 2) <= 1 )
            {
              *((_QWORD *)&v1357 + 1) = __PAIR64__(v1405.m128i_u32[3], v692);
              v1403 = -5723992;
              goto LABEL_902;
            }
            if ( v695 != 1 )
              goto LABEL_902;
            v1403 = 0xFFFFFF;
            memset_0(v1443, 0, 0x5CuLL);
            v583 = 0;
            v1303 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10F8[0])(0LL, 0LL, 1027LL);
            if ( v1303 )
            {
              v697 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800E10B8[0])(11LL, (unsigned int)v1308);
              v1443[4] = 400;
              v1443[0] = -v697;
              v1444 = 5;
              StringCchCopyW((char *)v1445, 32LL, (char *)v1304);
              v698 = ((__int64 (__fastcall *)(_DWORD *))off_1800E1020[0])(v1443);
              if ( v698 )
              {
                v1402 = v698;
              }
              else
              {
                v699 = GetLastError();
                v583 = v699;
                if ( v699 > 0 )
                  v583 = (unsigned __int16)v699 | 0x80070000;
                if ( v583 >= 0 )
                  v583 = -2147467259;
              }
              ((void (__fastcall *)(_QWORD, SIZE_T))off_1800E1160[0])(0LL, v1303);
              if ( v583 < 0 )
                goto LABEL_915;
              v700 = v1399;
              v1408 = v692;
              v701 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1800E1078)(v1292, v1402);
              LODWORD(v1309) = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1800E10D8)(
                                 v1292,
                                 v700,
                                 0xFFFFFFFFLL,
                                 &v1406,
                                 1120,
                                 0LL);
              v583 = (_DWORD)v1309 == 0 ? 0x80004005 : 0;
              if ( v701 )
                ((void (__fastcall *)(LPCWSTR, __int64))off_1800E1078)(v1292, v701);
              if ( !(_DWORD)v1309 )
                goto LABEL_915;
              v702 = (unsigned int)v1308;
              v703 = v1408 + 24;
              if ( (int)(v1408 + 24) < 90 )
                v703 = 90;
              v1408 = v703;
              v1409 = 32;
              v1406 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10B8[0])(
                        v1406,
                        (unsigned int)v1308,
                        96LL);
              v1407 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10B8[0])(v1407, v702, 96LL);
              v1408 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10B8[0])(v1408, v702, 96LL);
              v1409 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E10B8[0])(v1409, v702, 96LL);
              if ( v1395 )
              {
                v704 = v1404.m128i_u32[0];
                if ( v1404.m128i_i32[0] >= v1405.m128i_i32[0] )
                  v704 = v1405.m128i_u32[0];
              }
              else
              {
                v705 = v1404.m128i_i32[2];
                if ( v1404.m128i_i32[2] <= v1405.m128i_i32[2] )
                  v705 = v1405.m128i_i32[2];
                v704 = v1406 + v705 - v1408;
              }
              off_1800E1150((HAM_ACTIVITY_RM_CONTEXT *)&v1406, (void *)v704);
LABEL_902:
              v706 = HIDWORD(v1357);
              v707 = DWORD2(v1357);
              LODWORD(v1308) = v1395;
              switch ( (_DWORD)v1313 )
              {
                case 1:
                  *(_QWORD *)&v1357 = 0LL;
                  goto LABEL_914;
                case 2:
                  v1423 = 0LL;
                  v1421 = 0LL;
                  v1422 = 0LL;
                  v711 = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(_QWORD))off_1800E1148[0])(0LL);
                  LODWORD(v1421) = 40;
                  if ( !(unsigned int)off_1800E1108(v711, &v1421) )
                  {
LABEL_914:
                    v583 = 0;
LABEL_915:
                    ((void (__fastcall *)(_QWORD, LPCWSTR))off_1800E1160[0])(0LL, v1292);
                    goto LABEL_916;
                  }
                  off_1800E1140[0](0LL, (char *)&v1422 + 4);
                  off_1800E1140[0](0LL, (char *)&v1422 + 12);
                  if ( (_DWORD)v1308 )
                    v709 = DWORD1(v1422) + 5 * HIDWORD(v1422) / 100;
                  else
                    v709 = 95 * (HIDWORD(v1422) - v707) / 100;
                  v710 = 95 * (v1423 - v706);
                  break;
                case 3:
                  v1420 = 0LL;
                  v1418 = 0LL;
                  v1419 = 0LL;
                  v708 = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(_QWORD))off_1800E1148[0])(0LL);
                  LODWORD(v1418) = 40;
                  if ( !(unsigned int)off_1800E1108(v708, &v1418) )
                    goto LABEL_914;
                  off_1800E1140[0](0LL, (char *)&v1419 + 4);
                  off_1800E1140[0](0LL, (char *)&v1419 + 12);
                  v709 = 50 * (HIDWORD(v1419) - v707) / 100;
                  v710 = 50 * (v1420 - v706);
                  break;
                default:
                  goto LABEL_914;
              }
              LODWORD(v1357) = v709;
              DWORD1(v1357) = v710 / 100;
              goto LABEL_914;
            }
LABEL_840:
            v684 = GetLastError();
            v583 = v684;
            if ( v684 > 0 )
              v583 = (unsigned __int16)v684 | 0x80070000;
            if ( v583 >= 0 )
              v583 = -2147467259;
            goto LABEL_915;
          }
          LODWORD(v1305) = 15;
        }
        LODWORD(v1293) = 11;
        goto LABEL_828;
      }
      v588 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1307);
      if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1800E10A0[0])(
             8LL,
             &v1336,
             v588,
             &v1337) )
      {
        if ( v1336 )
        {
          v590 = (_DWORD *)v1303;
          for ( mm = 0; mm < v1336; ++mm )
          {
            *v590 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800E10B0[0])(v588, 0LL);
            v592 = -1LL;
            do
              ++v592;
            while ( *(_WORD *)(v588 + 2 * v592) );
            ++v590;
            v588 += 2 * v592 + 2;
          }
          v64 = v1342;
          v583 = (int)v1309;
          v1303 = (SIZE_T)v590;
        }
        *(_DWORD *)v1303 = 1033;
        Size = dwBytes;
        v584 = v1336 + 1;
        dwBytes = 0LL;
        goto LABEL_749;
      }
      v589 = GetLastError();
      v583 = v589;
      if ( v589 > 0 )
        v583 = (unsigned __int16)v589 | 0x80070000;
      v584 = 0;
    }
    else
    {
      v585 = GetLastError();
      v583 = v585;
      if ( v585 > 0 )
        v583 = (unsigned __int16)v585 | 0x80070000;
    }
    if ( v583 >= 0 )
      v583 = -2147467259;
    goto LABEL_749;
  }
  v582 = GetLastError();
  v583 = v582;
  if ( v582 > 0 )
    v583 = (unsigned __int16)v582 | 0x80070000;
  if ( v583 >= 0 )
    v583 = -2147467259;
LABEL_916:
  v712 = 1;
  while ( _InterlockedCompareExchange(&dword_1800E36FC, 1, 0) )
    ;
  v713 = dword_1800E36F8;
  if ( dword_1800E36F8 > 0 )
  {
    --dword_1800E36F8;
    if ( v713 == 1 )
    {
      v714 = 4LL;
      v715 = (HMODULE *)&unk_1800E33A0;
      v1303 = 4LL;
      do
      {
        if ( *v715 )
        {
          FreeLibrary(*v715);
          v714 = v1303;
        }
        v715 += 3;
        v1303 = --v714;
      }
      while ( v714 );
      memset_0(&unk_1800E33A0, 0, 0x60uLL);
      memcpy_0(off_1800E1000, off_1800B5650, 0x170uLL);
      v712 = 1;
    }
  }
  _InterlockedExchange(&dword_1800E36FC, 0);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&lpModuleName);
  if ( v583 < 0 )
    goto LABEL_1051;
  v716 = v1357;
  v1303 = v1357;
  v1370 = 0;
  memset_0(v1371, 0, 0x64uLL);
  v717 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800E1050[0])(v1316, 7LL);
  if ( v717 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E1068[0])(v717, 104LL, &v1370) )
  {
    if ( v1372 != 32 || !v1373 || v1371[0] <= 0 || v1371[1] <= 0 )
      v712 = 0;
    if ( v712 )
    {
LABEL_934:
      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1800E1150)(&v1404, v716, HIDWORD(v1303));
      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1800E1150)(&v1405, v716, HIDWORD(v1303));
      v718 = (int)v1313;
      if ( (_DWORD)v1313 == 1 )
        v1315 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1800E1028[0])(v1396 == 0 ? 0xB26720 : 0);
      goto LABEL_936;
    }
  }
  else
  {
    v712 = 0;
  }
  if ( (_DWORD)v1313 == 1 )
    goto LABEL_934;
  v718 = (int)v1313;
LABEL_936:
  LODWORD(v1308) = off_1800E1080((HAM_ACTIVITY_RM_CONTEXT *)v1316, (void *)1);
  v719 = 2064;
  if ( v1395 )
    v719 = 133138;
  LODWORD(v1309) = v719;
  if ( !v712 )
  {
    if ( v1396 || (v796 = -64, v718 == 1) )
      v796 = -1;
    BYTE2(dwBytes) = v796;
    v797 = 0;
    BYTE3(dwBytes) = 1;
    LOWORD(dwBytes) = 0;
    LODWORD(v1305) = 0;
    LODWORD(v1293) = 0;
    LODWORD(v1296) = 0;
    v1303 = ((__int64 (__fastcall *)(SIZE_T))off_1800E1010[0])(v1316);
    if ( !v1303 )
      goto LABEL_1025;
    if ( v718 == 1 )
    {
      v798 = 0;
      v799 = v1405.m128i_i32[2] - v1405.m128i_i32[0];
      if ( v1405.m128i_i32[2] - v1405.m128i_i32[0] <= v1404.m128i_i32[2] - v1404.m128i_i32[0] )
        v799 = v1404.m128i_i32[2] - v1404.m128i_i32[0];
      v1312 = 0;
      v800 = v1405.m128i_i32[3] - v1404.m128i_i32[1];
      v1310 = v799;
      LODWORD(v1314) = v1405.m128i_i32[3] - v1404.m128i_i32[1];
      if ( v1395 )
      {
        v797 = v799 - v1404.m128i_i32[2] + v1404.m128i_i32[0];
        v798 = v797;
        LODWORD(v1305) = v797;
        LODWORD(v1296) = v1405.m128i_i32[0] + v1310 - v1405.m128i_i32[2];
        v1312 = v1296;
        v799 = v1310;
      }
      v1312 += v1405.m128i_i32[2] - v1405.m128i_i32[0];
      v801 = v798 + v1404.m128i_i32[2] - v1404.m128i_i32[0];
      LODWORD(v1294) = v1405.m128i_i32[1] - v1404.m128i_i32[1];
      LODWORD(Size) = v1405.m128i_i32[3] - v1404.m128i_i32[1];
      v718 = (int)v1313;
      LODWORD(v1322) = v801;
      LODWORD(v1307) = v1404.m128i_i32[3] - v1404.m128i_i32[1];
    }
    else
    {
      v799 = DWORD2(v1357);
      v800 = HIDWORD(v1357);
      v797 = _mm_cvtsi128_si32(v1404);
      LODWORD(v1307) = _mm_cvtsi128_si32(_mm_srli_si128(v1404, 12));
      LODWORD(v1293) = _mm_cvtsi128_si32(_mm_srli_si128(v1404, 4));
      LODWORD(Size) = _mm_cvtsi128_si32(_mm_srli_si128(v1405, 12));
      LODWORD(v1322) = _mm_cvtsi128_si32(_mm_srli_si128(v1404, 8));
      LODWORD(v1294) = _mm_cvtsi128_si32(_mm_srli_si128(v1405, 4));
      LODWORD(v1314) = HIDWORD(v1357);
      v1310 = DWORD2(v1357);
      LODWORD(v1305) = v797;
      v1312 = _mm_cvtsi128_si32(_mm_srli_si128(v1405, 8));
      LODWORD(v1296) = _mm_cvtsi128_si32(v1405);
    }
    v1424[1] = v799;
    v1424[2] = -v800;
    v1351 = 0LL;
    memset(&v1424[4], 0, 28);
    v1424[0] = 40;
    v1424[3] = 2097153;
    v802 = ((__int64 (__fastcall *)(SIZE_T, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800E1018[0])(
             v1303,
             v1424,
             0LL,
             &v1351,
             0LL,
             0);
    v1297 = v802;
    if ( !v802 )
    {
      GetLastError();
      v795 = v1303;
      goto LABEL_1048;
    }
    ((void (__fastcall *)(SIZE_T, SIZE_T))off_1800E1078)(v1303, v802);
    if ( v718 == 1 && v1315 )
    {
      v1413 = v1310;
      v1414 = v1314;
      v1412 = 0LL;
      ((void (__fastcall *)(SIZE_T, __int64 *))off_1800E10E8[0])(v1303, &v1412);
    }
    v803 = v1397;
    LODWORD(v1292) = v1396;
    lpModuleName = v1400;
    v1300 = v1397;
    v1383 = 0;
    memset_0(v1384, 0, 0x64uLL);
    v1386 = 0;
    memset_0(v1387, 0, 0x64uLL);
    v1304 = 0LL;
    LODWORD(Src) = 0;
    v728 = v803 == 0LL;
    LODWORD(v1295) = 0;
    v795 = v1303;
    memset(v1434, 0, sizeof(v1434));
    v1435 = 0LL;
    v1436 = 0;
    v1415 = 0LL;
    if ( v728 )
      goto LABEL_1045;
    v804 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800E1050[0])(v1303, 7LL);
    if ( !v804 )
      goto LABEL_1086;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E1068[0])(v804, 104LL, &v1383) )
    {
      v1304 = v1385;
      LODWORD(Src) = v1384[0];
      LODWORD(v1295) = v1384[1];
    }
    v805 = ((__int64 (__fastcall *)(SIZE_T))off_1800E1010[0])(v795);
    v1311 = v805;
    v806 = (HAM_ACTIVITY_RM_CONTEXT *)v805;
    if ( !v805 )
    {
      GetLastError();
LABEL_1044:
      v795 = v1303;
LABEL_1045:
      v807 = v1297;
      goto LABEL_1046;
    }
    LODWORD(v1322) = v1322 - v797;
    DWORD1(v1434[0]) = v1322;
    DWORD2(v1434[0]) = v1293 - v1307;
    v1352 = 0LL;
    LODWORD(v1434[0]) = 40;
    HIDWORD(v1434[0]) = 2097153;
    v823 = (const WCHAR *)((__int64 (__fastcall *)(size_t, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800E1018[0])(
                            v805,
                            v1434,
                            0LL,
                            &v1352,
                            0LL,
                            0);
    v1302 = v823;
    if ( v823 )
    {
      v728 = ((unsigned int (__fastcall *)(const WCHAR *, __int64, int *))off_1800E1068[0])(v823, 104LL, &v1386) == 0;
      v826 = 0LL;
      if ( !v728 )
        v826 = v1388;
      HIDWORD(v1415) = v1307 - v1293;
      v1318 = v826;
      DWORD2(v1415) = v1322;
      ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPCWSTR))off_1800E1078)(v806, v1302);
      off_1800E1080(v806, (void *)1);
      v827 = (const WCHAR *)((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPCWSTR))off_1800E1078)(
                              v806,
                              lpModuleName);
      v828 = off_1800E10E8[0];
      lpModuleName = v827;
      v829 = ((__int64 (__fastcall *)(_QWORD))off_1800E1070[0])(0LL);
      ((void (__fastcall *)(size_t, __int128 *, __int64))v828)(v1311, &v1415, v829);
      ((void (__fastcall *)(size_t, LPVOID, __int64, __int128 *, _DWORD, _QWORD))off_1800E10D8)(
        v1311,
        v1300,
        0xFFFFFFFFLL,
        &v1415,
        (_DWORD)v1309,
        0LL);
      if ( (_DWORD)v1313 == 1 )
      {
        if ( (_DWORD)v1292 )
          LODWORD(v1292) = ((__int64 (__fastcall *)(__int64))off_1800E1118[0])(8LL);
        else
          LODWORD(v1292) = 0xFFFFFF;
      }
      else
      {
        LODWORD(v1292) = -5723992;
      }
      v830 = 0;
      v831 = (int)Src;
      v832 = -(int)v1305;
      v833 = 0;
      if ( (int)v1305 >= 0 )
      {
        v830 = (int)v1305;
        v832 = 0;
      }
      v834 = -(int)v1293;
      LODWORD(v1307) = v830;
      if ( (v1293 & 0x80000000) == 0LL )
      {
        v833 = v1293;
        v834 = 0;
      }
      LODWORD(v1305) = v833;
      v835 = (_DWORD)Src - v830;
      v836 = DWORD2(v1415) - v832;
      if ( DWORD2(v1415) - v832 >= v835 )
        v836 = v835;
      v837 = (_DWORD)v1295 - v833;
      LODWORD(Src) = v836;
      v838 = HIDWORD(v1415) - v834;
      v825 = 0;
      if ( HIDWORD(v1415) - v834 >= v837 )
        v838 = v837;
      if ( v836 > 0 && v838 > 0 )
      {
        v839 = (unsigned int)Src;
        v840 = (char)v1292;
        v1300 = (LPVOID)(4LL * SDWORD2(v1415));
        v1322 = (unsigned int)v838;
        v1293 = v831;
        LODWORD(v1295) = 0;
        v841 = (char *)(v1318 + 4 * (v832 + (__int64)(v834 * DWORD2(v1415))));
        v842 = (int)v1305 * (int)v831;
        v843 = 0;
        v1318 = (SIZE_T)v841;
        v844 = v1304 + 4 * ((int)v1307 + v842);
        v1304 = v844;
        do
        {
          Src = (void *)v839;
          v845 = (unsigned __int8 *)(v841 + 2);
          v846 = v844 - (_QWORD)v841;
          v847 = (char *)v839;
          do
          {
            if ( (unsigned __int8)((*v845 + *(v845 - 2) + 2 * (unsigned int)*(v845 - 1)) >> 2) != 0xFF )
            {
              v848 = (unsigned __int8)~((*v845 + *(v845 - 2) + 2 * (unsigned int)*(v845 - 1)) >> 2);
              v849 = BYTE1(v1292);
              v845[v846] -= ~((*v845 + *(v845 - 2) + 2 * (unsigned int)*(v845 - 1)) >> 2) * (v840 - v845[v846]);
              v850 = v845[v846 - 1];
              v851 = (unsigned __int64)(2155905153LL * v848 * (v849 - v850)) >> 32;
              v852 = BYTE2(v1292);
              v845[v846 - 1] = v850 + (v851 >> 7 < 0) + (v851 >> 7);
              v853 = v845[v846 - 2];
              v854 = (unsigned __int64)(2155905153LL * v848 * (v852 - v853)) >> 32;
              v845[v846 - 2] = v853 + (v854 >> 7 < 0) + (v854 >> 7);
              v855 = v845[v846 + 1];
              v856 = v848 * (255 - v855);
              v843 = (int)v1295;
              LOBYTE(v854) = v855
                           + ((((unsigned __int64)(2155905153LL * v856) >> 32) & 0x80000000) != 0LL)
                           + ((int)((unsigned __int64)(2155905153LL * v856) >> 32) >> 7);
              v847 = (char *)Src;
              v845[v846 + 1] = v854;
            }
            v845 += 4;
            v825 = v843;
            Src = --v847;
          }
          while ( v847 );
          v841 = (char *)v1300 + v1318;
          v728 = v1322-- == 1;
          v1318 += (SIZE_T)v1300;
          LODWORD(v1295) = v843;
          v844 = v1304 + 4 * v1293;
          v1304 = v844;
        }
        while ( !v728 );
        v64 = v1342;
        v66 = v1321;
      }
      ((void (__fastcall *)(LPCWSTR))off_1800E1038)(v1302);
      if ( lpModuleName )
        ((void (__fastcall *)(size_t, LPCWSTR))off_1800E1078)(v1311, lpModuleName);
    }
    else
    {
      v824 = GetLastError();
      v825 = v824;
      if ( v824 > 0 )
        v825 = (unsigned __int16)v824 | 0x80070000;
      if ( v825 >= 0 )
        v825 = -2147467259;
    }
    ((void (__fastcall *)(size_t))off_1800E1030[0])(v1311);
    if ( v825 < 0 )
      goto LABEL_1044;
    v857 = v1398;
    LODWORD(v1295) = v1396;
    v1318 = v1401;
    v1302 = (LPCWSTR)v1398;
    v1389 = 0;
    memset_0(v1390, 0, 0x64uLL);
    v1392 = 0;
    memset_0(v1393, 0, 0x64uLL);
    v1311 = 0LL;
    LODWORD(Src) = 0;
    LODWORD(v1292) = 0;
    v1432 = 0LL;
    v1433 = 0;
    memset(v1431, 0, sizeof(v1431));
    v1416 = 0LL;
    if ( !v857 )
      goto LABEL_1044;
    v795 = v1303;
    v858 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800E1050[0])(v1303, 7LL);
    if ( !v858 )
      goto LABEL_1086;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E1068[0])(v858, 104LL, &v1389) )
    {
      v1311 = v1391;
      LODWORD(Src) = v1390[0];
      LODWORD(v1292) = v1390[1];
    }
    v859 = ((__int64 (__fastcall *)(SIZE_T))off_1800E1010[0])(v795);
    v860 = (HAM_ACTIVITY_RM_CONTEXT *)v859;
    if ( !v859 )
    {
LABEL_1086:
      GetLastError();
      goto LABEL_1045;
    }
    v861 = v1294;
    v1312 -= v1296;
    DWORD1(v1431[0]) = v1312;
    DWORD2(v1431[0]) = v1294 - Size;
    v1354 = 0LL;
    LODWORD(v1431[0]) = 40;
    HIDWORD(v1431[0]) = 2097153;
    v862 = (const WCHAR *)((__int64 (__fastcall *)(__int64, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800E1018[0])(
                            v859,
                            v1431,
                            0LL,
                            &v1354,
                            0LL,
                            0);
    lpModuleName = v862;
    if ( !v862 )
    {
      v863 = GetLastError();
      v864 = v863;
      if ( v863 > 0 )
        v864 = (unsigned __int16)v863 | 0x80070000;
      if ( v864 >= 0 )
        v864 = -2147467259;
      goto LABEL_1158;
    }
    v728 = ((unsigned int (__fastcall *)(const WCHAR *, __int64, int *))off_1800E1068[0])(v862, 104LL, &v1392) == 0;
    v865 = 0LL;
    if ( !v728 )
      v865 = v1394;
    HIDWORD(v1416) = Size - v861;
    v1300 = v865;
    DWORD2(v1416) = v1312;
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPCWSTR))off_1800E1078)(v860, lpModuleName);
    off_1800E1080(v860, (void *)1);
    v866 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E1078)(v860, v1318);
    v867 = off_1800E10E8[0];
    v1318 = v866;
    v868 = ((__int64 (__fastcall *)(_QWORD))off_1800E1070[0])(0LL);
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int128 *, __int64))v867)(v860, &v1416, v868);
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1800E10D8)(
      v860,
      v1302,
      0xFFFFFFFFLL,
      &v1416,
      (_DWORD)v1309,
      0LL);
    if ( (_DWORD)v1313 == 1 )
    {
      if ( !(_DWORD)v1295 )
      {
        LODWORD(v1295) = 0xFFFFFF;
LABEL_1139:
        v870 = 0;
        v871 = (int)Src;
        v872 = -(int)v1296;
        v873 = 0;
        if ( (v1296 & 0x80000000) == 0LL )
        {
          v870 = v1296;
          v872 = 0;
        }
        v874 = -(int)v1294;
        LODWORD(Size) = v870;
        if ( (v1294 & 0x80000000) == 0LL )
        {
          v873 = v1294;
          v874 = 0;
        }
        LODWORD(v1294) = v873;
        v875 = (_DWORD)Src - v870;
        v876 = DWORD2(v1416) - v872;
        if ( DWORD2(v1416) - v872 >= v875 )
          v876 = v875;
        v877 = (_DWORD)v1292 - v873;
        LODWORD(Src) = v876;
        v878 = HIDWORD(v1416) - v874;
        v864 = 0;
        if ( HIDWORD(v1416) - v874 >= v877 )
          v878 = v877;
        if ( v876 > 0 && v878 > 0 )
        {
          v879 = (unsigned int)Src;
          v1302 = (LPCWSTR)(4LL * SDWORD2(v1416));
          v1307 = (unsigned int)v878;
          v1304 = v871;
          LODWORD(v1292) = 0;
          v880 = (unsigned __int8 *)v1300 + 4 * v872 + 4 * (__int64)(v874 * DWORD2(v1416));
          v881 = (int)v1294 * (int)v871;
          v882 = 0;
          v1300 = v880;
          v883 = v1311 + 4 * ((int)Size + v881);
          v1311 = v883;
          do
          {
            v884 = (char)v1320;
            v885 = v880 + 2;
            v886 = v879;
            Size = v879;
            v887 = v883 - (_QWORD)v880;
            do
            {
              if ( (unsigned __int8)((*v885 + *(v885 - 2) + 2 * (unsigned int)*(v885 - 1)) >> 2) != 0xFF )
              {
                v888 = (unsigned __int8)~((*v885 + *(v885 - 2) + 2 * (unsigned int)*(v885 - 1)) >> 2);
                v889 = BYTE1(v1295);
                v885[v887] -= ~((*v885 + *(v885 - 2) + 2 * (unsigned int)*(v885 - 1)) >> 2) * (v884 - v885[v887]);
                v890 = v885[v887 - 1];
                v891 = (unsigned __int64)(2155905153LL * v888 * (v889 - v890)) >> 32;
                v892 = BYTE2(v1295);
                v885[v887 - 1] = v890 + (v891 >> 7 < 0) + (v891 >> 7);
                v893 = v885[v887 - 2];
                v894 = (unsigned __int64)(2155905153LL * v888 * (v892 - v893)) >> 32;
                v885[v887 - 2] = v893 + (v894 >> 7 < 0) + (v894 >> 7);
                v895 = v885[v887 + 1];
                v896 = v888 * (255 - v895);
                v882 = (int)v1292;
                LOBYTE(v894) = v895 + v896 / 255;
                v886 = Size;
                v885[v887 + 1] = v894;
              }
              v885 += 4;
              v864 = v882;
              Size = --v886;
            }
            while ( v886 );
            v880 = (unsigned __int8 *)v1300 + (_QWORD)v1302;
            v728 = v1307-- == 1;
            v879 = (unsigned int)Src;
            v1300 = (char *)v1300 + (_QWORD)v1302;
            v883 = v1311 + 4 * v1304;
            LODWORD(v1292) = v882;
            v1311 = v883;
          }
          while ( !v728 );
          v64 = v1342;
        }
        ((void (__fastcall *)(LPCWSTR))off_1800E1038)(lpModuleName);
        if ( v1318 )
          ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E1078)(v860, v1318);
LABEL_1158:
        ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E1030[0])(v860);
        if ( v864 >= 0 )
        {
          v795 = v1303;
          if ( (_DWORD)v1313 == 1 )
            ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, SIZE_T, _DWORD, _DWORD, int))off_1800E1000[0])(
              v1316,
              v1404.m128i_u32[0],
              v1404.m128i_u32[1],
              v1310,
              v1314,
              v1303,
              0,
              0,
              13369376);
          else
            ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, SIZE_T, _DWORD, _DWORD, unsigned int, _DWORD, _DWORD))off_1800E1040[0])(
              v1316,
              (unsigned int)v1357,
              DWORD1(v1357),
              v1310,
              v1314,
              v1303,
              0,
              0,
              v1310,
              v1314,
              dwBytes);
LABEL_1162:
          off_1800E1080((HAM_ACTIVITY_RM_CONTEXT *)v1316, (void *)(unsigned int)v1308);
          v807 = v1297;
          if ( !v1297 )
          {
LABEL_1047:
            if ( !v795 )
              goto LABEL_1049;
LABEL_1048:
            ((void (__fastcall *)(SIZE_T))off_1800E1030[0])(v795);
            goto LABEL_1049;
          }
LABEL_1046:
          ((void (__fastcall *)(SIZE_T))off_1800E1038)(v807);
          goto LABEL_1047;
        }
        goto LABEL_1044;
      }
      v869 = ((__int64 (__fastcall *)(__int64))off_1800E1118[0])(8LL);
    }
    else
    {
      v869 = -5723992;
    }
    LODWORD(v1295) = v869;
    LODWORD(v1320) = v869;
    goto LABEL_1139;
  }
  v720 = v1397;
  LODWORD(dwBytes) = v1396;
  v1303 = (SIZE_T)v1400;
  lpModuleName = (LPCWSTR)v1397;
  v1374 = 0;
  memset_0(v1375, 0, 0x64uLL);
  v1377 = 0;
  memset_0(v1378, 0, 0x64uLL);
  v1300 = 0LL;
  LODWORD(v1305) = 0;
  LODWORD(v1293) = 0;
  v1426 = 0LL;
  v1427 = 0;
  memset(v1425, 0, sizeof(v1425));
  v1410 = 0LL;
  if ( !v720 )
    goto LABEL_1049;
  v721 = v1316;
  v722 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800E1050[0])(v1316, 7LL);
  if ( !v722 )
    goto LABEL_1025;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E1068[0])(v722, 104LL, &v1374) )
  {
    v1300 = v1376;
    LODWORD(v1305) = v1375[0];
    LODWORD(v1293) = v1375[1];
  }
  v723 = ((__int64 (__fastcall *)(SIZE_T))off_1800E1010[0])(v721);
  v1304 = v723;
  v724 = (HAM_ACTIVITY_RM_CONTEXT *)v723;
  if ( !v723 )
    goto LABEL_1025;
  DWORD1(v1425[0]) = v1404.m128i_i32[2] - v1404.m128i_i32[0];
  DWORD2(v1425[0]) = v1404.m128i_i32[1] - v1404.m128i_i32[3];
  v1349 = 0LL;
  LODWORD(v1425[0]) = 40;
  HIDWORD(v1425[0]) = 2097153;
  v1295 = (void *)((__int64 (__fastcall *)(SIZE_T, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800E1018[0])(
                    v723,
                    v1425,
                    0LL,
                    &v1349,
                    0LL,
                    0);
  v725 = v1295;
  if ( v1295 )
  {
    v728 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1800E1068[0])(v1295, 104LL, &v1377) == 0;
    v729 = 0LL;
    if ( !v728 )
      v729 = v1379;
    DWORD2(v1410) = v1404.m128i_i32[2] - v1404.m128i_i32[0];
    HIDWORD(v1410) = v1404.m128i_i32[3] - v1404.m128i_i32[1];
    Src = v729;
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *))off_1800E1078)(v724, v725);
    off_1800E1080(v724, (void *)1);
    v730 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E1078)(v724, v1303);
    v731 = off_1800E10E8[0];
    v1303 = v730;
    v732 = ((__int64 (__fastcall *)(_QWORD))off_1800E1070[0])(0LL);
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int128 *, __int64))v731)(v724, &v1410, v732);
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1800E10D8)(
      v724,
      lpModuleName,
      0xFFFFFFFFLL,
      &v1410,
      (_DWORD)v1309,
      0LL);
    if ( (_DWORD)v1313 == 1 )
    {
      if ( (_DWORD)dwBytes )
        LODWORD(dwBytes) = ((__int64 (__fastcall *)(__int64))off_1800E1118[0])(8LL);
      else
        LODWORD(dwBytes) = 0xFFFFFF;
    }
    else
    {
      LODWORD(dwBytes) = -5723992;
    }
    v733 = 0;
    v734 = -v1404.m128i_i32[0];
    v735 = 0;
    v727 = 0;
    if ( v1404.m128i_i32[0] >= 0 )
    {
      v733 = v1404.m128i_i32[0];
      v734 = 0;
    }
    v736 = -v1404.m128i_i32[1];
    if ( v1404.m128i_i32[1] >= 0 )
    {
      v735 = v1404.m128i_i32[1];
      v736 = 0;
    }
    v737 = DWORD2(v1410) - v734;
    if ( DWORD2(v1410) - v734 >= (int)v1305 - v733 )
      v737 = (_DWORD)v1305 - v733;
    v738 = HIDWORD(v1410) - v736;
    LODWORD(v1296) = v737;
    if ( HIDWORD(v1410) - v736 >= (int)v1293 - v735 )
      v738 = v1293 - v735;
    if ( v737 > 0 && v738 > 0 )
    {
      v739 = (unsigned int)v1296;
      v740 = dwBytes;
      lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1410));
      Size = (unsigned int)v738;
      v741 = v734;
      v742 = 0;
      v743 = (_DWORD)v1305 * v735;
      v1292 = (LPCWSTR)(int)v1305;
      LODWORD(v1305) = 0;
      v744 = (unsigned __int8 *)Src + 4 * v741 + 4 * DWORD2(v1410) * v736;
      Src = v744;
      v745 = (char *)v1300 + 4 * v733 + 4 * (__int64)v743;
      v1300 = v745;
      do
      {
        v1294 = v739;
        v746 = v744 + 2;
        v747 = v745 - (char *)v744;
        v748 = v739;
        do
        {
          if ( (unsigned __int8)((*v746 + *(v746 - 2) + 2 * (unsigned int)*(v746 - 1)) >> 2) != 0xFF )
          {
            v749 = (unsigned __int8)~((*v746 + *(v746 - 2) + 2 * (unsigned int)*(v746 - 1)) >> 2);
            v750 = BYTE1(dwBytes);
            v746[v747] -= ~((*v746 + *(v746 - 2) + 2 * (unsigned int)*(v746 - 1)) >> 2) * (v740 - v746[v747]);
            v751 = v746[v747 - 1];
            v752 = (unsigned __int64)(2155905153LL * v749 * (v750 - v751)) >> 32;
            v753 = BYTE2(dwBytes);
            v746[v747 - 1] = v751 + (v752 >> 7 < 0) + (v752 >> 7);
            v754 = v746[v747 - 2];
            v755 = (unsigned __int64)(2155905153LL * v749 * (v753 - v754)) >> 32;
            v746[v747 - 2] = v754 + (v755 >> 7 < 0) + (v755 >> 7);
            v756 = v746[v747 + 1];
            v757 = v749 * (255 - v756);
            v742 = (int)v1305;
            LOBYTE(v755) = v756 + v757 / 255;
            v748 = v1294;
            v746[v747 + 1] = v755;
          }
          v746 += 4;
          v727 = v742;
          v1294 = --v748;
        }
        while ( v748 );
        v744 = (unsigned __int8 *)Src + (_QWORD)lpModuleName;
        v728 = Size-- == 1;
        Src = (char *)Src + (_QWORD)lpModuleName;
        LODWORD(v1305) = v742;
        v745 = (char *)v1300 + 4 * (_QWORD)v1292;
        v1300 = v745;
      }
      while ( !v728 );
      v64 = v1342;
      v724 = (HAM_ACTIVITY_RM_CONTEXT *)v1304;
    }
    ((void (__fastcall *)(void *))off_1800E1038)(v1295);
    if ( v1303 )
      ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E1078)(v724, v1303);
  }
  else
  {
    v726 = GetLastError();
    v727 = v726;
    if ( v726 > 0 )
      v727 = (unsigned __int16)v726 | 0x80070000;
    if ( v727 >= 0 )
      v727 = -2147467259;
  }
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E1030[0])(v724);
  if ( v727 < 0 )
    goto LABEL_1049;
  v758 = v1398;
  LODWORD(dwBytes) = v1396;
  v1303 = v1401;
  lpModuleName = (LPCWSTR)v1398;
  v1367 = 0;
  memset_0(v1368, 0, 0x64uLL);
  v1380 = 0;
  memset_0(v1381, 0, 0x64uLL);
  v1300 = 0LL;
  LODWORD(v1305) = 0;
  LODWORD(v1293) = 0;
  v1429 = 0LL;
  v1430 = 0;
  memset(v1428, 0, sizeof(v1428));
  v1411 = 0LL;
  if ( !v758 )
    goto LABEL_1049;
  v759 = v1316;
  v760 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800E1050[0])(v1316, 7LL);
  if ( !v760 )
    goto LABEL_1025;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E1068[0])(v760, 104LL, &v1367) )
  {
    v1300 = v1369;
    LODWORD(v1305) = v1368[0];
    LODWORD(v1293) = v1368[1];
  }
  v761 = ((__int64 (__fastcall *)(SIZE_T))off_1800E1010[0])(v759);
  v762 = (HAM_ACTIVITY_RM_CONTEXT *)v761;
  if ( !v761 )
  {
LABEL_1025:
    GetLastError();
    goto LABEL_1049;
  }
  DWORD1(v1428[0]) = v1405.m128i_i32[2] - v1405.m128i_i32[0];
  DWORD2(v1428[0]) = v1405.m128i_i32[1] - v1405.m128i_i32[3];
  v1350 = 0LL;
  LODWORD(v1428[0]) = 40;
  HIDWORD(v1428[0]) = 2097153;
  v1304 = ((__int64 (__fastcall *)(__int64, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800E1018[0])(
            v761,
            v1428,
            0LL,
            &v1350,
            0LL,
            0);
  v763 = v1304;
  if ( !v1304 )
  {
    v764 = GetLastError();
    v765 = v764;
    if ( v764 > 0 )
      v765 = (unsigned __int16)v764 | 0x80070000;
    if ( v765 >= 0 )
      v765 = -2147467259;
    goto LABEL_1018;
  }
  v728 = ((unsigned int (__fastcall *)(SIZE_T, __int64, int *))off_1800E1068[0])(v1304, 104LL, &v1380) == 0;
  v766 = 0LL;
  if ( !v728 )
    v766 = v1382;
  DWORD2(v1411) = v1405.m128i_i32[2] - v1405.m128i_i32[0];
  HIDWORD(v1411) = v1405.m128i_i32[3] - v1405.m128i_i32[1];
  v1295 = v766;
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E1078)(v762, v763);
  off_1800E1080(v762, (void *)1);
  v767 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E1078)(v762, v1303);
  v768 = off_1800E10E8[0];
  v1303 = v767;
  v769 = ((__int64 (__fastcall *)(_QWORD))off_1800E1070[0])(0LL);
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int128 *, __int64))v768)(v762, &v1411, v769);
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1800E10D8)(
    v762,
    lpModuleName,
    0xFFFFFFFFLL,
    &v1411,
    (_DWORD)v1309,
    0LL);
  if ( (_DWORD)v1313 == 1 )
  {
    if ( (_DWORD)dwBytes )
    {
      v770 = ((__int64 (__fastcall *)(__int64))off_1800E1118[0])(8LL);
      goto LABEL_998;
    }
    LODWORD(v1313) = 0xFFFFFF;
  }
  else
  {
    v770 = -5723992;
LABEL_998:
    LODWORD(v1313) = v770;
    LODWORD(v1320) = v770;
  }
  v771 = 0;
  v772 = -v1405.m128i_i32[0];
  v773 = 0;
  v765 = 0;
  if ( v1405.m128i_i32[0] >= 0 )
  {
    v771 = v1405.m128i_i32[0];
    v772 = 0;
  }
  v774 = -v1405.m128i_i32[1];
  if ( v1405.m128i_i32[1] >= 0 )
  {
    v773 = v1405.m128i_i32[1];
    v774 = 0;
  }
  v775 = DWORD2(v1411) - v772;
  if ( DWORD2(v1411) - v772 >= (int)v1305 - v771 )
    v775 = (_DWORD)v1305 - v771;
  v776 = HIDWORD(v1411) - v774;
  LODWORD(v1309) = v775;
  if ( HIDWORD(v1411) - v774 >= (int)v1293 - v773 )
    v776 = v1293 - v773;
  if ( v775 > 0 && v776 > 0 )
  {
    v777 = (unsigned int)v1309;
    lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1411));
    v1292 = (LPCWSTR)(unsigned int)v776;
    v778 = v772;
    v779 = 0;
    Src = (void *)(int)v1305;
    LODWORD(dwBytes) = 0;
    v780 = (unsigned __int8 *)v1295 + 4 * v778 + 4 * DWORD2(v1411) * v774;
    v1295 = v780;
    v781 = (char *)v1300 + 4 * v771 + 4 * (__int64)((int)v1305 * v773);
    v1300 = v781;
    do
    {
      v782 = (char)v1320;
      v783 = v780 + 2;
      v784 = v777;
      Size = v777;
      v785 = v781 - (char *)v780;
      do
      {
        if ( (unsigned __int8)((*v783 + *(v783 - 2) + 2 * (unsigned int)*(v783 - 1)) >> 2) != 0xFF )
        {
          v786 = (unsigned __int8)~((*v783 + *(v783 - 2) + 2 * (unsigned int)*(v783 - 1)) >> 2);
          v787 = BYTE1(v1313);
          v783[v785] -= ~((*v783 + *(v783 - 2) + 2 * (unsigned int)*(v783 - 1)) >> 2) * (v782 - v783[v785]);
          v788 = v783[v785 - 1];
          v789 = (unsigned __int64)(2155905153LL * v786 * (v787 - v788)) >> 32;
          v790 = BYTE2(v1313);
          v783[v785 - 1] = v788 + (v789 >> 7 < 0) + (v789 >> 7);
          v791 = v783[v785 - 2];
          v792 = (unsigned __int64)(2155905153LL * v786 * (v790 - v791)) >> 32;
          v783[v785 - 2] = v791 + (v792 >> 7 < 0) + (v792 >> 7);
          v793 = v783[v785 + 1];
          v794 = v786 * (255 - v793);
          v779 = dwBytes;
          LOBYTE(v792) = v793 + v794 / 255;
          v784 = Size;
          v783[v785 + 1] = v792;
        }
        v783 += 4;
        v765 = v779;
        Size = --v784;
      }
      while ( v784 );
      v780 = (unsigned __int8 *)v1295 + (_QWORD)lpModuleName;
      v728 = v1292 == (LPCWSTR)1;
      v1292 = (LPCWSTR)((char *)v1292 - 1);
      v777 = (unsigned int)v1309;
      v1295 = (char *)v1295 + (_QWORD)lpModuleName;
      v781 = (char *)v1300 + 4 * (_QWORD)Src;
      LODWORD(dwBytes) = v779;
      v1300 = v781;
    }
    while ( !v728 );
    v64 = v1342;
  }
  ((void (__fastcall *)(SIZE_T))off_1800E1038)(v1304);
  if ( v1303 )
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E1078)(v762, v1303);
LABEL_1018:
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E1030[0])(v762);
  if ( v765 >= 0 )
  {
    v795 = 0LL;
    goto LABEL_1162;
  }
LABEL_1049:
  if ( v1315 )
    ((void (__fastcall *)(LPVOID))off_1800E1038)(v1315);
LABEL_1051:
  if ( v1397 )
  {
    v808 = -1LL;
    do
      ++v808;
    while ( *((_WORD *)v1397 + v808) );
    v809 = 2 * v808 + 2;
    for ( nn = v1397; v809; --v809 )
      *nn++ = 0;
    MemoryFree(v1397);
    v1397 = 0LL;
  }
  if ( v1398 )
  {
    v811 = -1LL;
    do
      ++v811;
    while ( *((_WORD *)v1398 + v811) );
    v812 = 2 * v811 + 2;
    for ( i1 = v1398; v812; --v812 )
      *i1++ = 0;
    MemoryFree(v1398);
    v1398 = 0LL;
  }
  v814 = v1399;
  if ( v1399 )
  {
    v815 = -1LL;
    do
      ++v815;
    while ( *((_WORD *)v1399 + v815) );
    v816 = 2 * v815 + 2;
    if ( v816 )
    {
      do
      {
        *v814++ = 0;
        --v816;
      }
      while ( v816 );
      v814 = v1399;
    }
    MemoryFree(v814);
    v1399 = 0LL;
  }
  if ( v1400 )
  {
    off_1800E1038();
    v1400 = 0LL;
  }
  if ( v1401 )
  {
    off_1800E1038();
    v1401 = 0LL;
  }
  if ( v1402 )
  {
    off_1800E1038();
    v1402 = 0LL;
  }
  v817 = 1LL;
  while ( _InterlockedCompareExchange(&dword_1800E36FC, 1, 0) )
    ;
  v818 = dword_1800E36F8;
  if ( dword_1800E36F8 > 0 )
  {
    --dword_1800E36F8;
    if ( v818 == 1 )
    {
      v819 = (HMODULE *)&unk_1800E33A0;
      v820 = 4LL;
      do
      {
        if ( *v819 )
          FreeLibrary(*v819);
        v819 += 3;
        --v820;
      }
      while ( v820 );
      memset_0(&unk_1800E33A0, 0, 0x60uLL);
      memcpy_0(off_1800E1000, off_1800B5650, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1800E36FC, 0);
  v821 = qword_1800E36F0;
  LODWORD(v1295) = dword_1800E24E8;
  v822 = ((__int64 (__fastcall *)(__int64))off_1800E1098[0])(v817);
  v1451 = 0;
  v1318 = (unsigned int)(v822 - v821);
  v1452 = 0LL;
  v1455 = 0LL;
  v1453 = 0LL;
  v1454 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800E36FC, 1, 0) )
    ;
  v897 = dword_1800E36F8;
  if ( dword_1800E36F8 )
  {
LABEL_1208:
    dword_1800E36F8 = v897 + 1;
    goto LABEL_1209;
  }
  LODWORD(Src) = 0;
  LODWORD(v1292) = 0;
  LODWORD(Size) = 0;
  v898 = (const WCHAR *)MemoryAlloc(0x338uLL);
  v1302 = v898;
  if ( !v898 )
    goto LABEL_1173;
  v899 = (char *)v898 + 7;
  v900 = 0;
  v901 = (unsigned __int8 *)&unk_1800BC1E2;
  v902 = 0;
  v903 = 0;
  v2 = 103LL;
  v904 = -1;
  do
  {
    v905 = *(v901 - 1) | (*(v901 - 2) << 8);
    v906 = v901[2] << 8;
    v907 = *v901;
    v901 += 8;
    v908 = *(v901 - 7) | ((v907 | (v905 << 8)) << 8);
    v909 = v908 ^ v903;
    v910 = *(v901 - 3) | ((*(v901 - 4) | ((*(v901 - 5) | v906) << 8)) << 8);
    v911 = v910 ^ v902 ^ v909 ^ 0xAC987321;
    v912 = v909 ^ (__ROR4__(v911, 22) + 4991 * __ROR4__(v911 + 1419157410, 27));
    v913 = v911 ^ (43881 * __ROR4__(v912 + 133239679, 9) - __ROR4__(v912, 30));
    v914 = v912 ^ (24670 * v913 - (v913 >> 13) - 123127970);
    v915 = v913 ^ (2033 * __ROR4__(v914 ^ 0xAB69, 26) - __ROR4__(v914, 30));
    v916 = v914 ^ (133239679 - (v915 ^ 0xAB69605E));
    v917 = v915 ^ (43881 * (v916 ^ 0x137F)) ^ __ROR4__(v916, 6);
    v918 = v916 ^ (__ROR4__(v917, 30) + 24670 * __ROR4__(v917 + 133239679, 15));
    v919 = v917 ^ (2033 * __ROR4__(v918 + 1419157410, 14) - __ROR4__(v918, 24));
    v920 = v918 ^ __ROR4__(v919, 10) ^ (4991 * __ROR4__(v919 ^ 0xAB69605E, 12));
    v921 = v919 ^ (v920 >> 10) ^ (43881 * (v920 ^ 0x7F1));
    v922 = v920 ^ (2033 * (__ROR4__(~v921, 5) + 24670));
    v923 = v922 ^ (((v921 ^ (v922 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v921 ^ (v922 - 2033) ^ 0xAB6967AF, 30));
    v924 = v921 ^ (v922 - 2033) ^ 0xAB69605E ^ (__ROR4__(v923, 25) + 43881 * __ROR4__(v923 - 133239679, 6));
    v925 = v923 ^ (24670 * (v924 ^ 0x137F) + __ROR4__(v924, 9));
    v926 = v924 ^ (__ROR4__(v925, 25) + 2033 * __ROR4__(v925 ^ 0xAB69, 27));
    v927 = v925 ^ v926 ^ 0xAC987321;
    v928 = v926 ^ (4991 * __ROR4__(v927, 3) - 219010071);
    v929 = v927 ^ (24670 * __ROR4__(v928 - 133239679, 1) - __ROR4__(v928, 6));
    v930 = v928 ^ (__ROR4__(v929, 18) + 2033 * __ROR4__(v929 - 1419157410, 29));
    v931 = v929 ^ (4991 * __ROR4__(v930 - 1419157410, 17) - __ROR4__(v930, 14));
    v902 = v904 ^ v930 ^ (v931 >> 3) ^ (43881 * (v931 ^ 0x605E));
    v904 = v910;
    v903 = v900 ^ v931 ^ __ROR4__(v930 ^ (v931 >> 3) ^ (43881 * (v931 ^ 0x605E)), 30) ^ (24670
                                                                                       * __ROR4__(
                                                                                           v930 ^ (v931 >> 3) ^ (43881 * (v931 ^ 0x605E)) ^ 0x7F1137F,
                                                                                           28));
    v900 = v908;
    *(v899 - 4) = v903;
    *v899 = v902;
    *(v899 - 5) = __ROR4__(v903, 8);
    v899 += 8;
    *(v899 - 9) = __ROR4__(v902, 8);
    *(v899 - 14) = __ROR4__(v903, 16);
    *(v899 - 10) = __ROR4__(v902, 16);
    *(v899 - 15) = __ROR4__(v903, 24);
    *(v899 - 11) = __ROR4__(v902, 24);
    --v2;
  }
  while ( v2 );
  v932 = 0;
  v64 = v1342;
  v933 = 0LL;
  v66 = v1321;
  v934 = v1302;
  do
    v932 ^= *((_BYTE *)v1302 + v933++);
  while ( v933 < 0x338 );
  if ( v932 != 64LL )
  {
    MemoryFree((void *)v1302);
    goto LABEL_1173;
  }
  *((_BYTE *)v1302 + 823) = 0;
  memset_0(&unk_1800E33A0, 0, 0x60uLL);
  v1302 = v934;
  while ( 2 )
  {
    if ( *(_BYTE *)v934 )
    {
      v937 = v934;
      v938 = -1LL;
      do
        ++v938;
      while ( v934[v938] );
      v939 = &v934[v938];
      v1311 = 3LL * (unsigned int)Size;
      if ( !GetModuleHandleExW(0, v937, (HMODULE *)&unk_1800E33A0 + 3 * (unsigned int)Size) )
      {
        v941 = -1073741702;
        goto LABEL_1204;
      }
      v940 = v1311;
      v941 = 0;
      LODWORD(v1292) = 0;
      v942 = *((_QWORD *)&unk_1800E33A0 + v1311);
      if ( *(_WORD *)v942 == 23117
        && (v943 = *(int *)(v942 + 60), (unsigned int)v943 < 0x10000000)
        && (v944 = *((_QWORD *)&unk_1800E33A0 + v1311) + v943, v944 >= *((_QWORD *)&unk_1800E33A0 + v1311))
        && *(_DWORD *)v944 == 17744 )
      {
        if ( *(_WORD *)(v944 + 24) != 267 && *(_WORD *)(v944 + 24) != 523 )
        {
          v941 = -1073741811;
          goto LABEL_1191;
        }
        *(_QWORD *)((char *)&unk_1800E33A0 + 8 * v1311 + 12) = *(_QWORD *)(v944 + 136);
        *((_DWORD *)&unk_1800E33A0 + 2 * v940 + 2) = *(_DWORD *)(v944 + 80);
      }
      else
      {
        v941 = -1073741701;
LABEL_1191:
        LODWORD(v1292) = v941;
      }
      v945 = *(_DWORD *)(v939 + 1);
      v946 = 0;
      LODWORD(v1294) = v945;
      v934 = v939 + 3;
      while ( 1 )
      {
        LODWORD(v1307) = v946;
        if ( v946 >= v945 )
          break;
        v947 = (const CHAR *)v934;
        v948 = -1LL;
        do
          ++v948;
        while ( *((_BYTE *)v934 + v948) );
        v934 = (const WCHAR *)((char *)v934 + v948 + 1);
        if ( v941 >= 0 )
        {
          v949 = GetProcAddress(*((HMODULE *)&unk_1800E33A0 + v940), v947);
          if ( !v949 )
            goto LABEL_1204;
          v940 = v1311;
          off_1800E1000[(unsigned int)Src] = v949;
          v945 = v1294;
        }
        LODWORD(Src) = (_DWORD)Src + 1;
        v946 = v1307 + 1;
      }
      LODWORD(Size) = Size + 1;
      continue;
    }
    break;
  }
  v941 = (int)v1292;
LABEL_1204:
  v950 = (WCHAR *)v1302;
  if ( v1302 )
  {
    v951 = GetProcessHeap();
    HeapFree(v951, 0, v950);
  }
  if ( v941 >= 0 )
  {
    v897 = dword_1800E36F8;
    goto LABEL_1208;
  }
LABEL_1173:
  v935 = (HMODULE *)&unk_1800E33A0;
  v936 = 4LL;
  do
  {
    if ( *v935 )
      FreeLibrary(*v935);
    v935 += 3;
    --v936;
  }
  while ( v936 );
  memset_0(&unk_1800E33A0, 0, 0x60uLL);
  memcpy_0(off_1800E1000, off_1800B5650, 0x170uLL);
LABEL_1209:
  v952 = 4LL;
  _InterlockedExchange(&dword_1800E36FC, 0);
  LODWORD(v1455) = (_DWORD)v1295;
  LODWORD(v1452) = v1318;
  v1451 = 1;
  LODWORD(v1453) = -1721306479;
  DWORD2(v1452) = 1;
  LODWORD(v1454) = 1;
  DWORD2(v1453) = 1;
  DWORD2(v1454) = 1;
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1800E10D0)(0LL, 8225LL, 4LL, &v1451);
  while ( _InterlockedCompareExchange(&dword_1800E36FC, 1, 0) )
    ;
  v953 = dword_1800E36F8;
  if ( dword_1800E36F8 > 0 )
  {
    --dword_1800E36F8;
    if ( v953 == 1 )
    {
      v954 = (HMODULE *)&unk_1800E33A0;
      do
      {
        if ( *v954 )
          FreeLibrary(*v954);
        v954 += 3;
        --v952;
      }
      while ( v952 );
      memset_0(&unk_1800E33A0, 0, 0x60uLL);
      memcpy_0(off_1800E1000, off_1800B5650, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1800E36FC, 0);
  ((void (__fastcall *)(_QWORD, SIZE_T))off_1800E1160[0])(0LL, v1316);
LABEL_1219:
  SH<void *,SH_HANDLE>::Reset(&lpMem);
  LODWORD(v1295) = 0;
  *(_OWORD *)v1359 = 0LL;
  v955 = 0LL;
  v1318 = 0LL;
  v956 = GetProcessHeap();
  v957 = (SIZE_T)HeapAlloc(v956, 8u, 0xA0uLL);
  if ( !v957 )
  {
    v957 = 0LL;
    goto LABEL_1233;
  }
  *(_OWORD *)v957 = xmmword_1800E19B0[0];
  *(_OWORD *)(v957 + 16) = xmmword_1800E19B0[1];
  *(_OWORD *)(v957 + 32) = xmmword_1800E19B0[2];
  *(_OWORD *)(v957 + 48) = xmmword_1800E19B0[3];
  *(_OWORD *)(v957 + 64) = xmmword_1800E19B0[4];
  *(_OWORD *)(v957 + 80) = xmmword_1800E19B0[5];
  *(_OWORD *)(v957 + 96) = xmmword_1800E19B0[6];
  *(_OWORD *)(v957 + 112) = xmmword_1800E19B0[7];
  *(_OWORD *)(v957 + 128) = xmmword_1800E19B0[8];
  *(_OWORD *)(v957 + 144) = xmmword_1800E19B0[9];
  v958 = GetProcessHeap();
  v959 = HeapAlloc(v958, 8u, 8uLL);
  v1311 = (size_t)v959;
  if ( !v959 )
    goto LABEL_1233;
  *v959 = qword_1800E18F8;
  v1303 = __rdtsc();
  LODWORD(Src) = 0;
  LODWORD(v1292) = 0;
  v960 = RtlUIntAdd(4LL, 4LL, &v1292);
  v955 = v961;
  if ( v960 < 0 )
    goto LABEL_1233;
  if ( (int)RtlUIntAdd(0LL, (unsigned int)v1292, &Src) < 0 )
    goto LABEL_1233;
  LODWORD(v1292) = 0;
  if ( (int)RtlUIntAdd(v962, 160LL, &v1292) < 0 )
    goto LABEL_1233;
  if ( (int)RtlUIntAdd((unsigned int)Src, (unsigned int)v1292, &Src) < 0 )
    goto LABEL_1233;
  LODWORD(v1292) = 0;
  if ( (int)RtlUIntAdd(v963, v963 + 4, &v1292) < 0 )
    goto LABEL_1233;
  if ( (int)RtlUIntAdd((unsigned int)Src, (unsigned int)v1292, &Src) < 0 )
    goto LABEL_1233;
  LODWORD(v1292) = 0;
  if ( (int)RtlUIntAdd(v964, v964 + 4, &v1292) < 0 || (int)RtlUIntAdd((unsigned int)Src, (unsigned int)v1292, &Src) < 0 )
    goto LABEL_1233;
  HIDWORD(v1359[0]) = (_DWORD)Src;
  v965 = (unsigned int)Src;
  v966 = GetProcessHeap();
  v967 = HeapAlloc(v966, 8u, v965);
  if ( !v967 )
  {
LABEL_1579:
    v955 = (void *)v1311;
    goto LABEL_1233;
  }
  v1359[1] = (size_t)v967;
  LODWORD(v1317) = 0;
  v1316 = 0LL;
  LODWORD(v1359[0]) = 0;
  v955 = (void *)v1311;
  lpMem = v967;
  v1302 = (LPCWSTR)v957;
  LODWORD(Src) = 0;
  if ( (int)RtlULongLongAdd(v967, 4LL, &v1317) < 0 )
    goto LABEL_1233;
  if ( (unsigned __int64)(v970 + 2) > v1359[1] + HIDWORD(v1359[0]) )
    goto LABEL_1233;
  v971 = v1317;
  v972 = v968;
  *v970 = v968;
  *v971 = v968;
  v973 = ++LODWORD(v1359[0]);
  LODWORD(v1317) = 0;
  v1316 = 0LL;
  if ( !v969 )
  {
LABEL_1233:
    v974 = 0LL;
    goto LABEL_1234;
  }
  if ( v1359[1] )
  {
    v980 = (unsigned int *)v1359[1];
    v981 = 0;
    lpMem = (LPVOID)v1359[1];
    while ( 1 )
    {
      LODWORD(Src) = v981;
      if ( v981 >= v973 )
        break;
      v982 = *v980;
      LODWORD(v1292) = 0;
      if ( (int)RtlUIntAdd(v972, v982, &v1292) < 0 || (int)RtlULongLongAdd(v983, (unsigned int)v1292, &lpMem) < 0 )
        goto LABEL_1233;
      v972 = 4LL;
      v980 = (unsigned int *)lpMem;
      v981 = (_DWORD)Src + 1;
    }
    if ( (int)RtlULongLongAdd(v980, v972, &v1317) >= 0
      && (unsigned __int64)v984 + v985 + 4 <= v1359[1] + HIDWORD(v1359[0]) )
    {
      *v984 = v985;
      memcpy_0(v1317, (const void *)v957, v985);
      goto LABEL_1256;
    }
    goto LABEL_1233;
  }
  LODWORD(Src) = 0;
  if ( (int)RtlUIntAdd(v968, v969, &Src) < 0
    || (int)RtlUIntAdd(HIDWORD(v1359[0]), (unsigned int)Src, (char *)v1359 + 4) < 0 )
  {
    goto LABEL_1233;
  }
LABEL_1256:
  LODWORD(v1317) = 0;
  v986 = LODWORD(v1359[0]) + 1;
  v1316 = 0LL;
  ++LODWORD(v1359[0]);
  if ( !v955 )
    goto LABEL_1233;
  if ( v1359[1] )
  {
    v989 = (unsigned int *)v1359[1];
    v990 = 0;
    lpMem = (LPVOID)v1359[1];
    while ( 1 )
    {
      LODWORD(Src) = v990;
      if ( v990 >= v986 )
        break;
      v991 = *v989;
      LODWORD(v1292) = 0;
      if ( (int)RtlUIntAdd(4LL, v991, &v1292) < 0 || (int)RtlULongLongAdd(v992, (unsigned int)v1292, &lpMem) < 0 )
        goto LABEL_1233;
      v989 = (unsigned int *)lpMem;
      v990 = (_DWORD)Src + 1;
    }
    if ( (int)RtlULongLongAdd(v989, 4LL, &v1317) >= 0
      && (unsigned __int64)v993 + v994 + 4 <= v1359[1] + HIDWORD(v1359[0]) )
    {
      *v993 = v994;
      memcpy_0(v1317, v955, (unsigned int)v994);
      v987 = 1;
      v988 = 4;
      goto LABEL_1269;
    }
    goto LABEL_1233;
  }
  LODWORD(Src) = 0;
  if ( (int)RtlUIntAdd(4LL, 8LL, &Src) < 0
    || (int)RtlUIntAdd(HIDWORD(v1359[0]), (unsigned int)Src, (char *)v1359 + 4) < 0 )
  {
    goto LABEL_1233;
  }
LABEL_1269:
  v995 = v987 + LODWORD(v1359[0]);
  LODWORD(v1317) = 0;
  LODWORD(v1359[0]) += v987;
  v1316 = 0LL;
  if ( v1359[1] )
  {
    v998 = (unsigned int *)v1359[1];
    v999 = 0;
    lpMem = (LPVOID)v1359[1];
    while ( v999 < v995 )
    {
      v1000 = *v998;
      LODWORD(Src) = 0;
      if ( (int)RtlUIntAdd(4LL, v1000, &Src) < 0 || (int)RtlULongLongAdd(v1001, (unsigned int)Src, &lpMem) < 0 )
        goto LABEL_1233;
      v998 = (unsigned int *)lpMem;
      v999 = v1002 + 1;
    }
    if ( (int)RtlULongLongAdd(v998, 4LL, &v1317) >= 0 && (unsigned __int64)(v1003 + 3) <= v1359[1] + HIDWORD(v1359[0]) )
    {
      v1004 = v1317;
      v1005 = v1303;
      *v1003 = 8;
      *v1004 = v1005;
      LODWORD(v1359[0]) += v997 - 3;
      goto LABEL_1281;
    }
    goto LABEL_1233;
  }
  LODWORD(Src) = 0;
  if ( (int)RtlUIntAdd(v988, 8LL, &Src) < 0
    || (int)RtlUIntAdd(HIDWORD(v1359[0]), (unsigned int)Src, (char *)v1359 + 4) < 0 )
  {
    goto LABEL_1233;
  }
  LODWORD(v1359[0]) += v996;
LABEL_1281:
  LODWORD(Src) = 0;
  if ( (int)RtlUIntAdd(v997, v997, &Src) < 0 )
    goto LABEL_1233;
  LODWORD(v1292) = 0;
  if ( (int)RtlUIntAdd(v1006, 8LL, &v1292) < 0 || (int)RtlUIntAdd(v1007, (unsigned int)v1292, &Src) < 0 )
    goto LABEL_1233;
  v1303 = 0LL;
  LODWORD(v1292) = 0;
  lpMem = 0LL;
  v1316 = 0LL;
  LODWORD(Size) = 0;
  v1297 = 0LL;
  v1315 = 0LL;
  lpModuleName = 0LL;
  v1300 = (LPVOID)__rdtsc();
  v1338 = 8;
  v1008 = RtlUIntAdd(8LL, HIDWORD(v1359[0]), &v1338);
  if ( v1008 < 0 )
  {
LABEL_1290:
    v1020 = v1008 | 0x10000000;
    if ( v1020 < 0 )
    {
      v1097 = (void *)v1303;
      goto LABEL_1540;
    }
    v1021 = v1303;
    v1300 = 0LL;
    if ( !v1303 )
      goto LABEL_1579;
    if ( !v1009 || (v1304 = v1009 + 8LL, (v1320 = MemoryAlloc(v1304)) == 0LL) )
    {
      v1020 = -805306367;
      goto LABEL_1541;
    }
    v1022 = 0;
    v1290 = 0;
    v1023 = 0LL;
    if ( (_DWORD)v1292 )
    {
      do
      {
        v1022 ^= *(_BYTE *)(v1023 + v1021);
        ++v1023;
      }
      while ( v1023 < (unsigned int)v1292 );
      v1290 = v1022;
    }
    v1308 = v1320;
    v1024 = -1;
    lpMem = (LPVOID)0xC81ECB17B1B54A58LL;
    LODWORD(v1294) = 0;
    v1025 = (unsigned __int8 *)v1021;
    LODWORD(v1307) = 0;
    v1026 = 0;
    v1027 = (unsigned __int8)v1292 & 7;
    if ( ((unsigned __int8)v1292 & 7) != 0 )
    {
      v1028 = 0;
      v1029 = 56;
      v1030 = 0;
      do
      {
        LODWORD(v1294) = *v1025++;
        if ( v1030 >= 4 )
        {
          LODWORD(v1294) = (_DWORD)v1294 << v1029;
          v1028 |= v1294;
        }
        else
        {
          LODWORD(v1294) = (_DWORD)v1294 << (v1029 - 32);
          v1026 |= v1294;
        }
        ++v1030;
        LODWORD(v1294) = v1028;
        v1029 -= 8;
        LODWORD(v1307) = v1026;
      }
      while ( (int)v1030 < v1027 );
      v1022 = v1290;
      v1026 ^= 0xB17A307A;
      v64 = v1342;
      v1032 = v1028 ^ 0x42F6B18D;
      v1309 = v1025;
      v1303 = v1021;
      v1033 = v1026;
      v1034 = v1032;
      v1035 = v1308;
      v1302 = (LPCWSTR)v957;
      v1036 = 0;
      do
      {
        v1313 = v1035 + 1;
        if ( v1036 >= 4 )
        {
          v1034 = __ROR4__(v1034, 24);
          v1037 = v1034;
        }
        else
        {
          v1033 = __ROR4__(v1033, 24);
          v1037 = v1033;
        }
        *v1035 = v1037;
        ++v1036;
        v1035 = v1313;
      }
      while ( v1036 < v1027 );
      v1025 = (unsigned __int8 *)v1309;
      v1308 = v1313;
      LODWORD(v2) = 0;
      if ( (unsigned int)v1027 <= 4 )
      {
        v1024 = 0;
        if ( (unsigned int)v1027 < 4 )
          v1026 = v1026 >> (8 * (4 - v1027)) << (8 * (4 - v1027));
      }
      else
      {
        v1024 = v1032 >> (8 * (8 - v1027)) << (8 * (8 - v1027));
      }
    }
    v1038 = (unsigned int)v1292;
    if ( (unsigned __int64)(unsigned int)v1292 >> 3 )
    {
      v1039 = WORD1(lpMem);
      v1040 = v1025 + 2;
      v1041 = (unsigned __int64)(unsigned int)v1292 >> 3;
      v1042 = WORD2(lpMem);
      v1043 = (char *)v1308 + 7;
      v1044 = v1294;
      LODWORD(v1313) = WORD1(lpMem);
      do
      {
        v1045 = *(v1040 - 1) | (*(v1040 - 2) << 8);
        v1046 = v1040[2] << 8;
        v1047 = *v1040;
        v1040 += 8;
        v1048 = *(v1040 - 7) | ((v1047 | (v1045 << 8)) << 8);
        v1049 = *(v1040 - 3) | ((*(v1040 - 4) | ((*(v1040 - 5) | v1046) << 8)) << 8);
        v1050 = v1049 ^ v1024;
        v1051 = v1048 ^ v1026 ^ HIDWORD(lpMem) ^ (v1050 - 19032);
        v1052 = v1050 ^ (__ROR4__(v1051, 7) + v1039 * __ROR4__(HIDWORD(lpMem) ^ v1051, 15));
        v1053 = v1051 ^ (v1042 * __ROR4__(v1052 - 1313519016, 9) - __ROR4__(v1052, 10));
        v1054 = v1052 ^ (__ROR4__(v1053, 27) + HIWORD(lpMem) * __ROR4__(v1053 ^ v1042, 28));
        v1055 = v1053 ^ (HIDWORD(lpMem) - (v1054 ^ 0xB1B54A58));
        v1056 = v1054 ^ (WORD1(lpMem) * (v1055 - 19032) - (v1055 >> 6));
        v1057 = v1055 ^ (19032 * (v1042 ^ __ROR4__(v1056, 15)));
        v1058 = v1056 ^ (v1042 * (HIWORD(lpMem) + __ROR4__(~v1057, 3)));
        v1059 = v1057 ^ (v1058 - 19032 - HIDWORD(lpMem));
        v1060 = v1058 ^ ((_DWORD)v1313 * (v1059 ^ HIWORD(lpMem))) ^ __ROR4__(v1059, 10);
        v1061 = v1059 ^ __ROR4__(v1060, 3) ^ (v1042 * __ROR4__(v1060 ^ 0x4A58, 26));
        v1062 = v1060 ^ (19032 * (__ROR4__(v1061, 15) - HIWORD(lpMem)));
        v1063 = v1061 ^ ((v1062 ^ (v1062 >> 14)) >> 1) ^ (19032 * (v1062 ^ HIWORD(lpMem))) ^ (19032
                                                                                            * ((8 * (v1062 - v1042)) | ((v1062 - v1042) >> 29)));
        v1064 = v1062 ^ (WORD1(lpMem) * (v1063 - v1042) - (v1063 >> 13));
        v1065 = v1063 ^ __ROR4__(v1064, 11) ^ (v1042 * __ROR4__(-1313519016 - v1064, 9));
        v1066 = v1064 ^ (v1065 + 1313519016 - HIWORD(lpMem));
        v1067 = v1065 ^ (19032 * (v1066 ^ WORD1(lpMem)) - __ROR4__(v1066, 7));
        v1068 = v1066 ^ (WORD1(lpMem) * __ROR4__(v1067 ^ HIWORD(lpMem), 28) - __ROR4__(v1067, 16));
        v1069 = v1067 ^ (__ROR4__(v1068, 4) + v1042 * __ROR4__(-1313519016 - v1068, 10));
        v1070 = v1068 ^ __ROR4__(v1069, 9) ^ (HIWORD(lpMem) * __ROR4__(v1069 + 1313519016, 4));
        v1071 = v1069 ^ (19032 * __ROR4__(v1070 ^ HIDWORD(lpMem), 24) - __ROR4__(v1070, 30));
        v1072 = v1070 ^ (WORD1(lpMem) * __ROR4__(HIDWORD(lpMem) - v1071, 11) - __ROR4__(v1071, 12));
        v1073 = v1307;
        LODWORD(v1307) = v1048;
        v1074 = v1071 ^ (v1072 >> 8) ^ (v1042 * (WORD1(lpMem) ^ v1072));
        v1026 = v1074 ^ v1073;
        v1075 = HIDWORD(lpMem) ^ 0xB1B54A58;
        *(v1043 - 4) = v1026;
        v1024 = v1072 ^ v1074 ^ v1044 ^ v1075;
        v1039 = WORD1(lpMem);
        v1044 = v1049;
        *v1043 = v1024;
        *(v1043 - 5) = __ROR4__(v1026, 8);
        v1043 += 8;
        *(v1043 - 9) = __ROR4__(v1024, 8);
        *(v1043 - 14) = __ROR4__(v1026, 16);
        *(v1043 - 10) = __ROR4__(v1024, 16);
        *(v1043 - 15) = __ROR4__(v1026, 24);
        *(v1043 - 11) = __ROR4__(v1024, 24);
        --v1041;
      }
      while ( v1041 );
      v1022 = v1290;
      v64 = v1342;
      LODWORD(v2) = 0;
      v66 = v1321;
      v957 = (SIZE_T)v1302;
      v1038 = (unsigned int)v1292;
    }
    v1076 = v1320;
    *(_QWORD *)((char *)v1320 + v1038) = v1022;
    v1077 = GetProcessHeap();
    v1078 = HeapAlloc(v1077, 8u, 0x30uLL);
    if ( v1078 )
    {
      *(_DWORD *)v1078 = v1304;
      v1079 = GetProcessHeap();
      v1080 = HeapAlloc(v1079, 8u, (unsigned int)v1304);
      if ( v1080 )
      {
        *((_QWORD *)v1078 + 1) = v1080;
        memcpy_0(v1080, v1076, (unsigned int)v1304);
        *((_DWORD *)v1078 + 4) = 160;
        v1081 = GetProcessHeap();
        v1082 = HeapAlloc(v1081, 8u, 0xA0uLL);
        if ( v1082 )
        {
          *((_QWORD *)v1078 + 3) = v1082;
          *v1082 = xmmword_1800E1900[0];
          v1082[1] = xmmword_1800E1900[1];
          v1082[2] = xmmword_1800E1900[2];
          v1082[3] = xmmword_1800E1900[3];
          v1082[4] = xmmword_1800E1900[4];
          v1082[5] = xmmword_1800E1900[5];
          v1082[6] = xmmword_1800E1900[6];
          v1082[7] = xmmword_1800E1900[7];
          v1082[8] = xmmword_1800E1900[8];
          v1082[9] = xmmword_1800E1900[9];
          *((_DWORD *)v1078 + 8) = 8;
          v1083 = GetProcessHeap();
          v1084 = HeapAlloc(v1083, 8u, 8uLL);
          if ( v1084 )
          {
            *((_QWORD *)v1078 + 5) = v1084;
            v1085 = 0;
            *v1084 = qword_1800E19A0;
            v1300 = 0LL;
LABEL_1332:
            v1304 = v1311;
            v1294 = v1303;
            v1302 = (LPCWSTR)v957;
            lpMem = v1078;
            v1091 = GetProcessHeap();
            HeapFree(v1091, 0, v1320);
            v1092 = v1300;
            if ( v1300 )
            {
              v1311 = *((_QWORD *)v1300 + 1);
              if ( v1311 )
              {
                v1093 = GetProcessHeap();
                HeapFree(v1093, 0, (LPVOID)v1311);
                v1092[1] = 0LL;
              }
              v1311 = v1092[3];
              if ( v1311 )
              {
                v1094 = GetProcessHeap();
                HeapFree(v1094, 0, (LPVOID)v1311);
                v1092[3] = 0LL;
              }
              v1311 = v1092[5];
              if ( v1311 )
              {
                v1095 = GetProcessHeap();
                HeapFree(v1095, 0, (LPVOID)v1311);
                v1092[5] = 0LL;
              }
              v1096 = GetProcessHeap();
              HeapFree(v1096, 0, v1092);
              lpMem = v1078;
            }
            v1020 = v1085 | 0x10000000;
            v1097 = (void *)v1294;
            v1303 = v1294;
            v957 = (SIZE_T)v1302;
            v1311 = v1304;
            if ( v1020 >= 0 )
            {
              v1098 = (const void **)lpMem;
              v1339 = 0;
              LODWORD(v1292) = 4;
              v1099 = RtlUIntAdd(4LL, *(unsigned int *)lpMem, &v1292);
              if ( v1099 >= 0 )
              {
                v1099 = RtlUIntAdd((unsigned int)v1292, v1101, &v1292);
                if ( v1099 >= 0 )
                {
                  v1099 = RtlUIntAdd((unsigned int)v1292, *((unsigned int *)v1098 + 4), &v1292);
                  if ( v1099 >= 0 )
                  {
                    v1099 = RtlUIntAdd((unsigned int)v1292, v1102, &v1292);
                    if ( v1099 >= 0 )
                    {
                      v1099 = RtlUIntAdd((unsigned int)v1292, *((unsigned int *)v1098 + 8), &v1292);
                      if ( v1099 >= 0 )
                      {
                        v1339 = (int)v1292;
                        v1103 = (unsigned int)v1292;
                        v1104 = GetProcessHeap();
                        v1105 = HeapAlloc(v1104, 8u, v1103);
                        v1106 = v1105;
                        if ( !v1105 )
                        {
                          v1097 = (void *)v1294;
                          v1020 = -805306345;
                          v957 = (SIZE_T)v1302;
                          v1303 = v1294;
                          v1311 = v1304;
                          goto LABEL_1540;
                        }
                        v1311 = (size_t)v1105;
                        *v1105 = *(_DWORD *)v1098;
                        v1099 = RtlULongLongAdd(v1105, 4LL, &v1311);
                        if ( v1099 < 0 )
                          goto LABEL_1356;
                        memcpy_0((void *)v1311, v1098[1], *(unsigned int *)v1098);
                        v1099 = RtlULongLongAdd(v1311, *(unsigned int *)v1098, &v1311);
                        if ( v1099 < 0 )
                          goto LABEL_1356;
                        v1107 = v1311;
                        *(_DWORD *)v1311 = *((_DWORD *)v1098 + 4);
                        v1099 = RtlULongLongAdd(v1107, 4LL, &v1311);
                        if ( v1099 < 0
                          || (memcpy_0((void *)v1311, v1098[3], *((unsigned int *)v1098 + 4)),
                              v1099 = RtlULongLongAdd(v1311, *((unsigned int *)v1098 + 4), &v1311),
                              v1099 < 0)
                          || (v1108 = v1311,
                              *(_DWORD *)v1311 = *((_DWORD *)v1098 + 8),
                              v1099 = RtlULongLongAdd(v1108, 4LL, &v1311),
                              v1099 < 0)
                          || (memcpy_0((void *)v1311, v1098[5], *((unsigned int *)v1098 + 8)),
                              v1099 = RtlULongLongAdd(v1311, *((unsigned int *)v1098 + 8), &v1311),
                              v1099 < 0) )
                        {
LABEL_1356:
                          v1109 = GetProcessHeap();
                          HeapFree(v1109, 0, v1106);
                          v1100 = v1302;
                        }
                        else
                        {
                          v1100 = v1302;
                          LODWORD(Size) = v1339;
                          v1316 = (SIZE_T)v1106;
                        }
                      }
                    }
                  }
                }
              }
              v1020 = v1099 | 0x10000000;
              v1097 = (void *)v1294;
              v1110 = v1304;
              v957 = (SIZE_T)v1100;
              v1303 = v1294;
              v1311 = v1304;
              if ( v1020 >= 0 )
              {
                v1340 = 8;
                v1111 = RtlUIntAdd(8LL, (unsigned int)Src, &v1340);
                v1311 = v1110;
                v1020 = v1111 | 0x10000000;
                v1303 = (SIZE_T)v1097;
                if ( v1111 >= 0 )
                {
                  v1112 = (v1340 + 7) & 0xFFFFFFF8;
                  if ( (unsigned int)v1112 < v1340 )
                  {
                    v1020 = -1073741675;
                    v1303 = (SIZE_T)v1097;
LABEL_1366:
                    v1311 = v1110;
                    goto LABEL_1540;
                  }
                  v1341 = (v1340 + 7) & 0xFFFFFFF8;
                  v1020 = RtlUIntAdd(v1112, 8LL, &v1341);
                  if ( v1020 < 0 )
                  {
LABEL_1365:
                    v1303 = (SIZE_T)v1097;
                    goto LABEL_1366;
                  }
                  if ( !v1359[1] )
                  {
                    v1020 = -1073741811;
                    goto LABEL_1365;
                  }
                  v1303 = (SIZE_T)v1097;
                  v1311 = v1110;
                  if ( LODWORD(v1359[0]) <= 1 )
                    goto LABEL_1373;
                  v1113 = (LPCWSTR)v1359[1];
                  v1114 = 0;
                  v1302 = (LPCWSTR)v1359[1];
                  while ( 1 )
                  {
                    LODWORD(Src) = v1114;
                    if ( v1114 )
                      break;
                    v1020 = RtlULongLongAdd(v1113, 4LL, &v1302);
                    if ( v1020 < 0 )
                      goto LABEL_1540;
                    v1020 = RtlULongLongAdd(v1302, v1115, &v1302);
                    if ( v1020 < 0 )
                      goto LABEL_1540;
                    v1113 = v1302;
                    v1114 = (_DWORD)Src + 1;
                  }
                  LODWORD(Src) = *(_DWORD *)v1113;
                  v1020 = RtlULongLongAdd(v1113, 4LL, &v1302);
                  if ( v1020 < 0 )
                    goto LABEL_1540;
                  if ( LODWORD(v1359[0]) <= 2 )
                  {
LABEL_1373:
                    v1020 = -1073741811;
                    goto LABEL_1540;
                  }
                  v1117 = (LPCWSTR)v1359[1];
                  v1118 = 0;
                  v1119 = lpMem;
                  v1302 = (LPCWSTR)v1359[1];
                  while ( 1 )
                  {
                    LODWORD(v1294) = v1118;
                    v1300 = v1116;
                    v1304 = v957;
                    v1307 = v1110;
                    v1313 = v1097;
                    v1320 = v1119;
                    if ( v1118 >= 2 )
                      break;
                    LODWORD(v1307) = *(_DWORD *)v1117;
                    v1020 = RtlULongLongAdd(v1117, 4LL, &v1302);
                    if ( v1020 < 0 )
                      goto LABEL_1540;
                    v1020 = RtlULongLongAdd(v1302, (unsigned int)v1307, &v1302);
                    if ( v1020 < 0 )
                      goto LABEL_1540;
                    v1117 = v1302;
                    v1118 = v1294 + 1;
                  }
                  v1020 = RtlULongLongAdd(v1117, 4LL, &v1302);
                  if ( v1020 < 0 )
                    goto LABEL_1540;
                  LODWORD(v1294) = v1120;
                  v1020 = RtlUIntAdd(v1120, v1341, &v1294);
                  if ( v1020 < 0 )
                    goto LABEL_1540;
                  v1020 = RtlUIntAdd((unsigned int)v1294, v1121, &v1294);
                  if ( v1020 < 0 )
                    goto LABEL_1540;
                  v1020 = RtlUIntAdd((unsigned int)v1294, (unsigned int)Src, &v1294);
                  if ( v1020 < 0 )
                    goto LABEL_1540;
                  v1020 = RtlUIntAdd((unsigned int)v1294, v1122, &v1294);
                  if ( v1020 < 0 )
                    goto LABEL_1540;
                  v1020 = RtlUIntAdd((unsigned int)v1294, v1123, &v1294);
                  if ( v1020 < 0 )
                    goto LABEL_1540;
                  if ( (unsigned int)v1294 > 0x400000 )
                  {
                    v1020 = -2147418113;
                    goto LABEL_1540;
                  }
                  v1124 = v1294;
                  v1125 = GetProcessHeap();
                  v1297 = (SIZE_T)HeapAlloc(v1125, 8u, v1124);
                  if ( !v1297 )
                  {
                    v1297 = 0LL;
                    lpMem = v1320;
                    v1311 = v1110;
                    v1020 = -805306345;
                    goto LABEL_1537;
                  }
                  v1126 = v1300;
                  hModule = 0LL;
                  v1362 = 0LL;
                  v1363 = 0LL;
                  if ( !v1300 )
                  {
                    v1020 = -2147024809;
                    v1097 = v1313;
                    lpMem = v1320;
                    v1303 = (SIZE_T)v1313;
LABEL_1398:
                    v1132 = v1307;
                    v957 = v1304;
LABEL_1400:
                    v1311 = v1132;
                    goto LABEL_1402;
                  }
                  *((_QWORD *)&v1362 + 1) = v1297;
                  *(_QWORD *)&v1362 = v1300;
                  LODWORD(v1363) = Size;
                  *(_QWORD *)((char *)&v1363 + 4) = v1124;
                  if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                    && (v1127 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                  {
                    v1128 = ((__int64 (__fastcall *)(__int64, __int128 *))v1127)(134LL, &v1362);
                    LODWORD(Src) = v1124;
                    v1020 = v1128 | 0x10000000;
                    if ( v1128 >= 0 )
                    {
                      v1129 = DWORD1(v1363);
                      v1130 = v1320;
                      v1131 = v1313;
                      v1132 = v1307;
                      v1133 = v1304;
                      goto LABEL_1411;
                    }
                  }
                  else
                  {
                    v1134 = GetLastError();
                    v1020 = v1134;
                    if ( v1134 > 0 )
                      v1020 = (unsigned __int16)v1134 | 0x80070000;
                    LODWORD(Src) = v1124;
                    if ( v1020 >= 0 )
                    {
                      v1020 = -2147467259;
                      LODWORD(Src) = v1124;
                    }
                  }
                  v1316 = (SIZE_T)v1126;
                  if ( v1020 == -805306333 )
                  {
                    v1020 = -2147024774;
                    v1097 = v1313;
                    v957 = v1304;
                    lpMem = v1320;
                    v1311 = v1307;
                    v1303 = (SIZE_T)v1313;
                    goto LABEL_1540;
                  }
                  v1131 = v1313;
                  v1130 = v1320;
                  v1097 = v1313;
                  v1132 = v1307;
                  v1133 = v1304;
                  lpMem = v1320;
                  v957 = v1304;
                  v1303 = (SIZE_T)v1313;
                  v1311 = v1307;
                  if ( v1020 >= 0 )
                  {
                    v1129 = (unsigned int)Src;
LABEL_1411:
                    LODWORD(Src) = 0;
                    v1135 = 0LL;
                    v1302 = (LPCWSTR)v1297;
                    if ( v1129 < 4 )
                    {
                      v1020 = -805306306;
                      lpMem = v1130;
                      v1097 = v1131;
                      v1303 = (SIZE_T)v1131;
                      v957 = v1133;
                      goto LABEL_1400;
                    }
                    LODWORD(v1292) = *(_DWORD *)v1297;
                    v1136 = RtlULongLongAdd(v1297, 4LL, &v1302);
                    if ( v1136 >= 0 )
                    {
                      v1136 = RtlUIntAdd(0LL, 4LL, &Src);
                      if ( v1136 >= 0 )
                      {
                        if ( v1138 - (int)Src < (unsigned int)v1292 )
                          goto LABEL_1397;
                        v1303 = (unsigned int)v1292;
                        v1311 = (size_t)v1302;
                        v1136 = RtlULongLongAdd(v1302, (unsigned int)v1292, &v1302);
                        if ( v1136 < 0 )
                          goto LABEL_1473;
                        v1136 = RtlUIntAdd((unsigned int)Src, (unsigned int)v1292, &Src);
                        if ( v1136 < 0 )
                          goto LABEL_1473;
                        if ( (unsigned int)(v1140 - (_DWORD)Src) < 4 )
                          goto LABEL_1397;
                        LODWORD(Size) = *(_DWORD *)v1302;
                        v1136 = RtlULongLongAdd(v1302, 4LL, &v1302);
                        if ( v1136 < 0 )
                          goto LABEL_1473;
                        v1136 = RtlUIntAdd((unsigned int)Src, 4LL, &Src);
                        if ( v1136 < 0 )
                          goto LABEL_1473;
                        if ( v1141 - (int)Src < (unsigned int)Size )
                          goto LABEL_1397;
                        v1316 = (unsigned int)Size;
                        lpMem = (LPVOID)v1302;
                        v1136 = RtlULongLongAdd(v1302, (unsigned int)Size, &v1302);
                        if ( v1136 < 0 )
                          goto LABEL_1473;
                        v1136 = RtlUIntAdd((unsigned int)Src, (unsigned int)Size, &Src);
                        if ( v1136 < 0 )
                          goto LABEL_1473;
                        if ( (unsigned int)(v1142 - (_DWORD)Src) < 4 )
                          goto LABEL_1397;
                        LODWORD(v1294) = *(_DWORD *)v1302;
                        v1136 = RtlULongLongAdd(v1302, 4LL, &v1302);
                        if ( v1136 < 0 )
                          goto LABEL_1473;
                        v1136 = RtlUIntAdd((unsigned int)Src, 4LL, &Src);
                        if ( v1136 < 0 )
                          goto LABEL_1473;
                        if ( v1143 - (int)Src < (unsigned int)v1294 )
                        {
LABEL_1397:
                          v1020 = -805306306;
                          lpMem = v1137;
                          v1097 = (void *)v1139;
                          v1303 = v1139;
                          goto LABEL_1398;
                        }
                        v1136 = RtlUIntAdd((unsigned int)Src, (unsigned int)v1294, &Src);
                        if ( v1136 >= 0 )
                        {
                          if ( v1144 == (_DWORD)Src && (unsigned int)((_DWORD)v1292 + v1294 + Size) + 12LL == v1144 )
                          {
                            v1145 = GetProcessHeap();
                            v1146 = HeapAlloc(v1145, 8u, 0x30uLL);
                            v1147 = v1146;
                            if ( v1146 )
                            {
                              v1136 = 0;
                              if ( v1311 )
                              {
                                *(_DWORD *)v1146 = (_DWORD)v1292;
                                v1148 = GetProcessHeap();
                                v1149 = HeapAlloc(v1148, 8u, v1303);
                                if ( !v1149 )
                                  goto LABEL_1442;
                                v1147[1] = v1149;
                                memcpy_0(v1149, (const void *)v1311, v1303);
                              }
                              else
                              {
                                *(_DWORD *)v1146 = 0;
                                v1146[1] = 0LL;
                              }
                              if ( lpMem )
                              {
                                *((_DWORD *)v1147 + 4) = Size;
                                v1150 = GetProcessHeap();
                                v1151 = HeapAlloc(v1150, 8u, v1316);
                                if ( !v1151 )
                                  goto LABEL_1442;
                                v1147[3] = v1151;
                                v1136 = 0;
                                memcpy_0(v1151, lpMem, v1316);
                              }
                              else
                              {
                                *((_DWORD *)v1147 + 4) = 0;
                                v1147[3] = 0LL;
                              }
                              if ( !v1302 )
                              {
                                *((_DWORD *)v1147 + 8) = 0;
                                v1147[5] = 0LL;
                                goto LABEL_1450;
                              }
                              v1152 = (unsigned int)v1294;
                              *((_DWORD *)v1147 + 8) = v1294;
                              v1153 = v1152;
                              v1311 = v1152;
                              v1154 = GetProcessHeap();
                              v1155 = HeapAlloc(v1154, 8u, v1153);
                              if ( v1155 )
                              {
                                v1147[5] = v1155;
                                v1136 = 0;
                                memcpy_0(v1155, v1302, v1311);
LABEL_1450:
                                v1135 = v1147;
                                goto LABEL_1451;
                              }
LABEL_1442:
                              v1136 = -1073741801;
                              v1302 = (LPCWSTR)v1147[1];
                              if ( v1302 )
                              {
                                v1156 = GetProcessHeap();
                                HeapFree(v1156, 0, (LPVOID)v1302);
                                v1147[1] = 0LL;
                              }
                              v1302 = (LPCWSTR)v1147[3];
                              if ( v1302 )
                              {
                                v1157 = GetProcessHeap();
                                HeapFree(v1157, 0, (LPVOID)v1302);
                                v1147[3] = 0LL;
                              }
                              v1302 = (LPCWSTR)v1147[5];
                              if ( v1302 )
                              {
                                v1158 = GetProcessHeap();
                                HeapFree(v1158, 0, (LPVOID)v1302);
                                v1147[5] = 0LL;
                              }
                              v1159 = GetProcessHeap();
                              HeapFree(v1159, 0, v1147);
LABEL_1451:
                              if ( v1136 < 0 )
                              {
                                v1160 = 0LL;
                                v1315 = 0LL;
                                if ( !v1135 )
                                  goto LABEL_1455;
                                v1179 = (void *)v1135[1];
                                if ( v1179 )
                                {
                                  v1180 = GetProcessHeap();
                                  HeapFree(v1180, 0, v1179);
                                  v1135[1] = 0LL;
                                }
                                v1181 = (void *)v1135[3];
                                if ( v1181 )
                                {
                                  v1182 = GetProcessHeap();
                                  HeapFree(v1182, 0, v1181);
                                  v1135[3] = 0LL;
                                }
                                v1183 = (void *)v1135[5];
                                if ( v1183 )
                                {
                                  v1161 = GetProcessHeap();
                                  HeapFree(v1161, 0, v1183);
                                  v1135[5] = 0LL;
                                }
                                v1162 = GetProcessHeap();
                                HeapFree(v1162, 0, v1135);
                                v1160 = 0LL;
                              }
                              else
                              {
                                v1160 = (LPVOID *)v1135;
                              }
                              v1315 = v1160;
LABEL_1455:
                              v1126 = v1300;
LABEL_1456:
                              v1020 = v1136 | 0x10000000;
                              v1097 = v1313;
                              lpMem = v1320;
                              v957 = v1304;
                              v1303 = (SIZE_T)v1313;
                              v1311 = v1307;
                              v1316 = (SIZE_T)v1126;
                              if ( v1020 < 0 )
                                goto LABEL_1540;
                              if ( v1160 )
                              {
                                v1308 = v1160[1];
                                if ( v1308 )
                                {
                                  if ( *(_DWORD *)v1160 )
                                  {
                                    v1309 = (LPVOID)(*(unsigned int *)v1160 - 8LL);
                                    v1163 = (const WCHAR *)MemoryAlloc((unsigned __int64)v1309);
                                    v1164 = v1313;
                                    v1165 = (SIZE_T)v1163;
                                    v1166 = v1320;
                                    v1097 = v1313;
                                    v1167 = v1307;
                                    v1168 = (const WCHAR *)v957;
                                    lpMem = v1320;
                                    v1303 = (SIZE_T)v1313;
                                    v1311 = v1307;
                                    lpModuleName = v1163;
                                    v1316 = (SIZE_T)v1126;
                                    if ( !v1163 )
                                    {
LABEL_1495:
                                      v1020 = -805306367;
                                      lpModuleName = 0LL;
                                      goto LABEL_1540;
                                    }
                                    v1169 = 0;
                                    Size = v1165;
                                    v1294 = (unsigned __int8)v1309 & 7;
                                    v1304 = 0x7F1137FAB69605ELL;
                                    v1307 = (SIZE_T)v1308;
                                    if ( ((unsigned __int8)v1309 & 7) != 0 )
                                    {
                                      v1323 = 0;
                                      v1170 = 0;
                                      v1171 = v1297;
                                      v1172 = 0;
                                      v1173 = (unsigned __int8 *)v1307;
                                      v1316 = (SIZE_T)v1126;
                                      do
                                      {
                                        v1174 = v1166;
                                        lpMem = v1166;
                                        v1303 = (SIZE_T)v1164;
                                        v1297 = (SIZE_T)(v1173 + 1);
                                        v1175 = v1164;
                                        v1176 = *v1173;
                                        v957 = (SIZE_T)v1168;
                                        ++v1173;
                                        v1302 = v1168;
                                        v1311 = v1167;
                                        v1177 = v1167;
                                        v1178 = v1324;
                                        if ( (unsigned int)v1172 >= 4 )
                                        {
                                          v1323 |= v1176 << v1324;
                                        }
                                        else
                                        {
                                          v1178 = v1324;
                                          v1170 |= v1176 << (v1324 - 32);
                                        }
                                        ++v1172;
                                        v1324 = v1178 - 8;
                                        v1166 = v1174;
                                        v1164 = v1175;
                                      }
                                      while ( v1172 < (int)v1294 );
                                      v64 = v1342;
                                      v66 = v1321;
                                      v1184 = v1323 ^ 0x699A899C;
                                      LODWORD(Src) = v1170;
                                      v1185 = v1170 ^ 0x92F65A5;
                                      LODWORD(v1292) = v1170 ^ 0x92F65A5;
                                      v1186 = 0;
                                      v1307 = v1297;
                                      v1187 = v1323 ^ 0x699A899C;
                                      v1169 = 0;
                                      v1188 = v1294;
                                      v1297 = v1171;
                                      v1189 = (_BYTE *)Size;
                                      do
                                      {
                                        v1300 = v1189 + 1;
                                        if ( v1186 >= 4 )
                                        {
                                          v1187 = __ROR4__(v1187, 24);
                                          v1190 = v1187;
                                        }
                                        else
                                        {
                                          v1185 = __ROR4__(v1185, 24);
                                          v1190 = v1185;
                                        }
                                        *v1189 = v1190;
                                        ++v1186;
                                        v1189 = v1300;
                                      }
                                      while ( v1186 < (int)v1188 );
                                      v1191 = (unsigned int)v1292;
                                      v1192 = (SIZE_T)v1300;
                                      Size = (SIZE_T)v1300;
                                      LODWORD(v2) = 0;
                                      if ( v1188 <= 4 )
                                      {
                                        v1193 = 0;
                                        if ( v1188 >= 4 )
                                          goto LABEL_1487;
                                        v1191 = (unsigned int)v1292 >> (8 * (4 - v1188)) << (8 * (4 - v1188));
                                      }
                                      else
                                      {
                                        v1193 = v1184 >> (8 * (8 - v1188)) << (8 * (8 - v1188));
                                      }
                                    }
                                    else
                                    {
                                      lpMem = v1320;
                                      v1191 = 0;
                                      v1177 = v1167;
                                      v1303 = (SIZE_T)v1313;
                                      v1193 = 0;
                                      v1316 = (SIZE_T)v1300;
                                      LODWORD(Src) = 0;
                                      LODWORD(v1292) = 0;
                                      v1311 = v1167;
                                      v1302 = (LPCWSTR)v957;
                                    }
                                    v1192 = Size;
LABEL_1487:
                                    v1194 = v1309;
                                    v1300 = (LPVOID)((unsigned __int64)v1309 >> 3);
                                    if ( (unsigned __int64)v1309 >> 3 )
                                    {
                                      v1195 = HIDWORD(v1304);
                                      v1196 = (_BYTE *)(v1192 + 7);
                                      v1197 = (int)Src;
                                      v1198 = HIDWORD(v1304) ^ 0xAB69605E;
                                      v1199 = (char *)v1300;
                                      v1200 = (unsigned __int8 *)(v1307 + 2);
                                      v1201 = WORD2(v1304);
                                      LODWORD(Size) = HIDWORD(v1304) ^ 0xAB69605E;
                                      LODWORD(v1292) = WORD2(v1304);
                                      LODWORD(v1294) = 24670;
                                      do
                                      {
                                        v1202 = *(v1200 - 1) | (*(v1200 - 2) << 8);
                                        v1203 = v1200[2] << 8;
                                        v1204 = *v1200;
                                        v1200 += 8;
                                        v1205 = *(v1200 - 7) | ((v1204 | (v1202 << 8)) << 8);
                                        v1206 = *(v1200 - 3) | ((*(v1200 - 4) | ((*(v1200 - 5) | v1203) << 8)) << 8);
                                        v1207 = v1191 ^ v1205 ^ v1193 ^ v1206 ^ v1198;
                                        v1208 = v1191 ^ v1205 ^ (__ROR4__(v1207, 22)
                                                               + v1201 * __ROR4__(v1207 + 1419157410, 27));
                                        v1209 = v1207 ^ (WORD1(v1304) * __ROR4__(v1208 + v1195, 9) - __ROR4__(v1208, 30));
                                        v1210 = v1208 ^ (v1294 * (v1209 - v1201) - (v1209 >> 13));
                                        v1211 = v1209 ^ (HIWORD(v1304) * __ROR4__(v1210 ^ WORD1(v1304), 26)
                                                       - __ROR4__(v1210, 30));
                                        v1212 = v1210 ^ (v1195 - (v1211 ^ 0xAB69605E));
                                        v1213 = v1211 ^ (WORD1(v1304) * (v1201 ^ v1212)) ^ __ROR4__(v1212, 6);
                                        v1214 = v1212 ^ (__ROR4__(v1213, 30) + v1294 * __ROR4__(v1213 + v1195, 15));
                                        v1215 = v1213 ^ (HIWORD(v1304) * __ROR4__(v1214 + 1419157410, 14)
                                                       - __ROR4__(v1214, 24));
                                        v1216 = v1214 ^ __ROR4__(v1215, 10) ^ ((_DWORD)v1292
                                                                             * __ROR4__(v1215 ^ 0xAB69605E, 12));
                                        v1217 = v1216 ^ (HIWORD(v1304)
                                                       * (v1294
                                                        + __ROR4__(
                                                            ~(v1215 ^ (v1216 >> 10) ^ (WORD1(v1304)
                                                                                     * (v1216 ^ HIWORD(v1304)))),
                                                            5)));
                                        v1218 = v1215 ^ (v1216 >> 10) ^ (WORD1(v1304) * (v1216 ^ HIWORD(v1304))) ^ (v1217 - HIWORD(v1304)) ^ 0xAB69605E;
                                        v1219 = v1217 ^ ((v1218 >> 2)
                                                       + (_DWORD)v1292 * __ROR4__(HIWORD(v1304) ^ v1218, 30));
                                        v1220 = v1218 ^ (__ROR4__(v1219, 25) + WORD1(v1304) * __ROR4__(v1219 - v1195, 6));
                                        v1221 = v1219 ^ (v1294 * ((unsigned int)v1292 ^ v1220) + __ROR4__(v1220, 9));
                                        v1222 = v1220 ^ (__ROR4__(v1221, 25)
                                                       + HIWORD(v1304) * __ROR4__(WORD1(v1304) ^ v1221, 27));
                                        v1201 = (int)v1292;
                                        v1223 = v1195 ^ v1221 ^ v1222 ^ 0xAB69605E;
                                        v1224 = v1222 ^ ((_DWORD)v1292 * (__ROR4__(v1223, 3) - WORD1(v1304)));
                                        v1225 = v1223 ^ (v1294 * __ROR4__(v1224 - v1195, 1) - __ROR4__(v1224, 6));
                                        v1226 = v1224 ^ (__ROR4__(v1225, 18)
                                                       + HIWORD(v1304) * __ROR4__(v1225 - 1419157410, 29));
                                        v1227 = v1225 ^ ((_DWORD)v1292 * __ROR4__(v1226 - 1419157410, 17)
                                                       - __ROR4__(v1226, 14));
                                        v1228 = v1226 ^ (v1227 >> 3) ^ (WORD1(v1304) * (v1294 ^ v1227));
                                        v1198 = Size;
                                        v1229 = v1228;
                                        v1230 = v1228;
                                        v1193 = v1323 ^ v1228;
                                        v1323 = v1206;
                                        v1191 = v1197 ^ v1227 ^ __ROR4__(v1230, 30) ^ (v1294
                                                                                     * __ROR4__(v1195 ^ v1229, 28));
                                        v1197 = v1205;
                                        *(v1196 - 4) = v1191;
                                        *v1196 = v1193;
                                        *(v1196 - 5) = __ROR4__(v1191, 8);
                                        v1196 += 8;
                                        *(v1196 - 9) = __ROR4__(v1193, 8);
                                        *(v1196 - 14) = __ROR4__(v1191, 16);
                                        *(v1196 - 10) = __ROR4__(v1193, 16);
                                        *(v1196 - 15) = __ROR4__(v1191, 24);
                                        *(v1196 - 11) = __ROR4__(v1193, 24);
                                        --v1199;
                                      }
                                      while ( v1199 );
                                      v1169 = 0;
                                      LODWORD(v2) = 0;
                                      v64 = v1342;
                                      v66 = v1321;
                                      v957 = (SIZE_T)v1302;
                                      v1177 = v1311;
                                      v1194 = v1309;
                                    }
                                    v1231 = lpModuleName;
                                    v1232 = 0LL;
                                    if ( v1194 )
                                    {
                                      do
                                        v1169 ^= *((_BYTE *)lpModuleName + v1232++);
                                      while ( v1232 < (unsigned __int64)v1194 );
                                    }
                                    v1302 = (LPCWSTR)v1297;
                                    v1300 = v1315;
                                    if ( v1169 != *(_QWORD *)((char *)v1308 + (_QWORD)v1194) )
                                    {
                                      MemoryFree((void *)lpModuleName);
                                      v1097 = (void *)v1303;
                                      goto LABEL_1495;
                                    }
                                    v1233 = lpMem;
                                    v1234 = v1303;
                                    LODWORD(Src) = 0;
                                    v1342 = (void *)lpModuleName;
                                    if ( (unsigned int)v1194 >= 4 )
                                    {
                                      LODWORD(v1292) = *(_DWORD *)lpModuleName;
                                      v1235 = RtlULongLongAdd(lpModuleName, 4LL, &v1342);
                                      v1315 = v1236;
                                      v1097 = (void *)v1234;
                                      v1297 = (SIZE_T)v1302;
                                      lpModuleName = v1237;
                                      lpMem = v1238;
                                      v1303 = v1234;
                                      v1311 = v1177;
                                      if ( v1235 < 0 )
                                        goto LABEL_1535;
                                      v1239 = RtlUIntAdd(0LL, 4LL, &Src);
                                      v1240 = v1300;
                                      v1235 = v1239;
                                      v1241 = v1302;
                                      v1315 = v1300;
                                      lpModuleName = v1231;
                                      v1297 = (SIZE_T)v1302;
                                      lpMem = v1233;
                                      v1303 = v1234;
                                      v1311 = v1177;
                                      if ( v1239 < 0 )
                                        goto LABEL_1535;
                                      if ( (unsigned int)((_DWORD)v1309 - (_DWORD)Src) < 4 )
                                        goto LABEL_1516;
                                      LODWORD(Size) = *(_DWORD *)v1342;
                                      v1235 = RtlULongLongAdd(v1342, 4LL, &v1342);
                                      v1097 = (void *)v1234;
                                      v1297 = (SIZE_T)v1302;
                                      lpModuleName = v1242;
                                      v1315 = v1300;
                                      lpMem = v1243;
                                      v1303 = v1234;
                                      v1311 = v1177;
                                      if ( v1235 < 0 )
                                        goto LABEL_1535;
                                      v1244 = RtlUIntAdd((unsigned int)Src, 4LL, &Src);
                                      v1240 = v1300;
                                      v1235 = v1244;
                                      v1241 = v1302;
                                      v1315 = v1300;
                                      lpModuleName = v1231;
                                      v1297 = (SIZE_T)v1302;
                                      lpMem = v1233;
                                      v1303 = v1234;
                                      v1311 = v1177;
                                      if ( v1244 < 0 )
                                        goto LABEL_1535;
                                      if ( (int)v1309 - (int)Src < (unsigned int)Size )
                                      {
LABEL_1516:
                                        v1297 = (SIZE_T)v1241;
                                      }
                                      else
                                      {
                                        v1235 = RtlUIntAdd((unsigned int)Src, (unsigned int)Size, &Src);
                                        v1097 = (void *)v1234;
                                        v1297 = (SIZE_T)v1302;
                                        lpModuleName = v1231;
                                        v1315 = v1300;
                                        lpMem = v1233;
                                        v1303 = v1234;
                                        v1311 = v1177;
                                        if ( v1235 < 0 )
                                          goto LABEL_1535;
                                        v1307 = (unsigned int)Size;
                                        if ( (char *)v1231 + (unsigned int)v1309 >= (char *)v1342 + (unsigned int)Size
                                          && (unsigned __int64)v1231
                                           + (unsigned int)v1309
                                           - (unsigned __int64)(unsigned int)Size
                                           - (_QWORD)v1342 < 8 )
                                        {
                                          v1235 = 0;
                                          v1315 = v1300;
                                          v1297 = (SIZE_T)v1302;
                                          v1294 = 0LL;
                                          v1313 = 0LL;
                                          v1320 = 0LL;
                                          LODWORD(Src) = 0;
                                          lpModuleName = v1231;
                                          lpMem = v1233;
                                          v1303 = v1234;
                                          v1311 = v1177;
                                          if ( v1342 )
                                          {
                                            v1308 = v1342;
                                            v1235 = RtlULongLongAdd(v1342, v1307, &v1294);
                                            v1297 = v1247;
                                            v1097 = (void *)v1234;
                                            v1315 = v1300;
                                            lpModuleName = v1246;
                                            lpMem = v1245;
                                            v1303 = v1234;
                                            v1311 = v1177;
                                            if ( v1235 < 0 )
                                            {
LABEL_1527:
                                              v1257 = (int)v1295;
                                              goto LABEL_1528;
                                            }
                                            lpModuleName = v1246;
                                            v1248 = v1294;
                                            lpMem = v1245;
                                            v1249 = v1308;
                                            v1311 = v1177;
                                            v1297 = (SIZE_T)v1302;
                                            v1315 = v1300;
                                            v1303 = v1234;
                                            while ( (unsigned __int64)v1249 < v1248 )
                                            {
                                              v1235 = RtlULongLongAdd(v1249, 4LL, &v1313);
                                              if ( v1235 < 0 )
                                                goto LABEL_1527;
                                              if ( (unsigned __int64)v1313 > v1251 )
                                                goto LABEL_1517;
                                              v1252 = *v1250;
                                              LODWORD(v1294) = 0;
                                              v1235 = RtlUIntAdd(4LL, v1252, &v1294);
                                              if ( v1235 < 0 )
                                                goto LABEL_1535;
                                              v1235 = RtlULongLongAdd(v1253, (unsigned int)v1294, &v1320);
                                              if ( v1235 < 0 )
                                                goto LABEL_1527;
                                              v1249 = v1320;
                                              if ( (unsigned __int64)v1320 > v1248 )
                                                goto LABEL_1517;
                                              LODWORD(Src) = (_DWORD)Src + 1;
                                            }
                                            if ( v1249 != (LPVOID)v1248 )
                                            {
LABEL_1517:
                                              v1235 = -1073741811;
                                              goto LABEL_1535;
                                            }
                                          }
                                          if ( !(_DWORD)Size )
                                          {
                                            v1255 = v1307;
                                            v1256 = 0LL;
                                            goto LABEL_1524;
                                          }
                                          v1254 = GetProcessHeap();
                                          v1255 = v1307;
                                          v1256 = HeapAlloc(v1254, 8u, v1307);
                                          if ( v1256 )
                                          {
                                            v1235 = 0;
LABEL_1524:
                                            if ( v1342 )
                                              memcpy_0(v1256, v1342, v1255);
                                            v1257 = (int)Src;
                                            v1097 = (void *)v1303;
                                            LODWORD(v1295) = (_DWORD)Src;
                                            v1318 = (SIZE_T)v1256;
LABEL_1528:
                                            if ( v1235 < 0 || (_DWORD)v1292 == v1257 )
                                              goto LABEL_1535;
                                            goto LABEL_1534;
                                          }
                                          v1097 = (void *)v1303;
                                          v1235 = -1073741801;
                                          v1318 = 0LL;
                                          LODWORD(v1295) = 0;
LABEL_1535:
                                          v1020 = v1235 | 0x10000000;
                                          goto LABEL_1540;
                                        }
                                        v1240 = v1300;
                                        v1297 = (SIZE_T)v1302;
                                      }
                                      v1315 = v1240;
                                    }
                                    v1311 = v1177;
                                    v1097 = (void *)v1234;
                                    v1303 = v1234;
                                    lpMem = v1233;
                                    lpModuleName = v1231;
LABEL_1534:
                                    v1235 = -1073741762;
                                    goto LABEL_1535;
                                  }
                                }
                              }
                              v1020 = -805306355;
                              lpMem = v1320;
                              v1303 = (SIZE_T)v1313;
                              v1311 = v1307;
LABEL_1402:
                              v1316 = (SIZE_T)v1126;
                              goto LABEL_1540;
                            }
                            v1020 = -805306345;
                            lpMem = v1320;
                            v1311 = v1307;
                            v1315 = 0LL;
LABEL_1537:
                            v1097 = v1313;
                            v957 = v1304;
                            v1303 = (SIZE_T)v1313;
                            v1316 = (SIZE_T)v1300;
                            goto LABEL_1540;
                          }
                          goto LABEL_1397;
                        }
                      }
                    }
LABEL_1473:
                    v1160 = 0LL;
                    goto LABEL_1456;
                  }
                }
              }
            }
LABEL_1540:
            if ( !v1097 )
            {
LABEL_1542:
              v1259 = lpMem;
              if ( lpMem )
              {
                v1260 = (void *)*((_QWORD *)lpMem + 1);
                if ( v1260 )
                {
                  v1261 = GetProcessHeap();
                  HeapFree(v1261, 0, v1260);
                  v1259[1] = 0LL;
                }
                v1262 = (void *)v1259[3];
                if ( v1262 )
                {
                  v1263 = GetProcessHeap();
                  HeapFree(v1263, 0, v1262);
                  v1259[3] = 0LL;
                }
                v1264 = (void *)v1259[5];
                if ( v1264 )
                {
                  v1265 = GetProcessHeap();
                  HeapFree(v1265, 0, v1264);
                  v1259[5] = 0LL;
                }
                v1266 = GetProcessHeap();
                HeapFree(v1266, 0, v1259);
              }
              v1267 = (void *)v1316;
              if ( v1316 )
              {
                v1268 = GetProcessHeap();
                HeapFree(v1268, 0, v1267);
              }
              v1269 = (void *)v1297;
              if ( v1297 )
              {
                v1270 = GetProcessHeap();
                HeapFree(v1270, 0, v1269);
              }
              v1271 = v1315;
              if ( v1315 )
              {
                v1272 = (void *)*((_QWORD *)v1315 + 1);
                if ( v1272 )
                {
                  v1273 = GetProcessHeap();
                  HeapFree(v1273, 0, v1272);
                  v1271[1] = 0LL;
                }
                v1274 = (void *)v1271[3];
                if ( v1274 )
                {
                  v1275 = GetProcessHeap();
                  HeapFree(v1275, 0, v1274);
                  v1271[3] = 0LL;
                }
                v1276 = (void *)v1271[5];
                if ( v1276 )
                {
                  v1277 = GetProcessHeap();
                  HeapFree(v1277, 0, v1276);
                  v1271[5] = 0LL;
                }
                v1278 = GetProcessHeap();
                HeapFree(v1278, 0, v1271);
              }
              v1279 = (WCHAR *)lpModuleName;
              if ( lpModuleName )
              {
                v1280 = GetProcessHeap();
                HeapFree(v1280, 0, v1279);
              }
              goto LABEL_1564;
            }
LABEL_1541:
            v1258 = GetProcessHeap();
            HeapFree(v1258, 0, (LPVOID)v1303);
            goto LABEL_1542;
          }
        }
      }
      v1085 = -1073741801;
      v1086 = (const WCHAR *)*((_QWORD *)v1078 + 1);
      v1300 = 0LL;
      v1302 = v1086;
      if ( v1086 )
      {
        v1087 = GetProcessHeap();
        HeapFree(v1087, 0, (LPVOID)v1302);
        *((_QWORD *)v1078 + 1) = 0LL;
      }
      v1302 = (LPCWSTR)*((_QWORD *)v1078 + 3);
      if ( v1302 )
      {
        v1088 = GetProcessHeap();
        HeapFree(v1088, 0, (LPVOID)v1302);
        *((_QWORD *)v1078 + 3) = 0LL;
      }
      v1302 = (LPCWSTR)*((_QWORD *)v1078 + 5);
      if ( v1302 )
      {
        v1089 = GetProcessHeap();
        HeapFree(v1089, 0, (LPVOID)v1302);
        *((_QWORD *)v1078 + 5) = 0LL;
      }
      v1090 = GetProcessHeap();
      HeapFree(v1090, 0, v1078);
    }
    else
    {
      v1085 = -1073741801;
    }
    v1078 = 0LL;
    goto LABEL_1332;
  }
  v1010 = (v1338 + 7) & 0xFFFFFFF8;
  if ( v1010 < v1338 )
    goto LABEL_1579;
  v1338 = (v1338 + 7) & 0xFFFFFFF8;
  v1011 = v1010;
  v1012 = GetProcessHeap();
  v1013 = HeapAlloc(v1012, 8u, v1011);
  v1304 = (SIZE_T)v1013;
  if ( v1013 )
  {
    v1294 = (size_t)v1013;
    *v1013 = v1359[0];
    v1014 = RtlULongLongAdd(v1013, 4LL, &v1294);
    v1307 = v1016;
    v1008 = v1014;
    if ( v1014 < 0
      || (v1017 = v1294,
          *(_DWORD *)v1294 = HIDWORD(v1359[0]),
          v1018 = RtlULongLongAdd(v1017, v1015, &v1294),
          v1307 = v1019,
          v1008 = v1018,
          v1018 < 0) )
    {
      v1031 = GetProcessHeap();
      HeapFree(v1031, 0, (LPVOID)v1307);
      v1009 = 0;
    }
    else
    {
      *(_QWORD *)(v1338 + v1019 - 8) = v1300;
      memcpy_0((void *)v1294, (const void *)v1359[1], HIDWORD(v1359[0]));
      v1009 = v1338;
      v1303 = v1304;
      LODWORD(v1292) = v1338;
    }
    goto LABEL_1290;
  }
  v1020 = -805306345;
LABEL_1564:
  v974 = (void *)v1318;
  if ( v1020 >= 0 && (_DWORD)v1295 )
  {
    v955 = (void *)v1311;
    if ( v1318 && (int)RtlULongLongAdd(v1318, 4LL, &v1318) >= 0 )
    {
      v1283 = (int *)v1318;
      if ( !v1282 )
        v1283 = 0LL;
      if ( v1282 == 4 && *v1283 >= 0 && (unsigned int)v1295 > 1 )
      {
        v1318 = (SIZE_T)v974;
        for ( i2 = 0; !i2; i2 = v1286 + 1 )
        {
          if ( (int)RtlULongLongAdd(v1281, 4LL, &v1318) < 0 || (int)RtlULongLongAdd(v1318, *v1285, &v1318) < 0 )
            goto LABEL_1234;
          v1281 = v1318;
        }
        RtlULongLongAdd(v1281, 4LL, &v1318);
      }
    }
  }
  else
  {
    v955 = (void *)v1311;
  }
LABEL_1234:
  v975 = (void *)v1359[1];
  v1359[0] = 0LL;
  if ( v1359[1] )
  {
    v976 = GetProcessHeap();
    HeapFree(v976, 0, v975);
    v1359[1] = 0LL;
  }
  if ( v974 )
  {
    v977 = GetProcessHeap();
    HeapFree(v977, 0, v974);
  }
  if ( v957 )
  {
    v978 = GetProcessHeap();
    HeapFree(v978, 0, (LPVOID)v957);
  }
  if ( v955 )
  {
    v979 = GetProcessHeap();
    HeapFree(v979, 0, v955);
  }
LABEL_1242:
  v67 = v1327;
  v65 = 0LL;
  hMem[0] = v64;
  v61 = 4LL;
LABEL_52:
  while ( _InterlockedCompareExchange(&dword_1800E36FC, 1, 0) )
    ;
  v68 = dword_1800E36F8;
  if ( dword_1800E36F8 > 0 )
  {
    --dword_1800E36F8;
    if ( v68 == 1 )
    {
      v1287 = (HMODULE *)&unk_1800E33A0;
      do
      {
        if ( *v1287 )
          FreeLibrary(*v1287);
        v1287 += 3;
        --v61;
      }
      while ( v61 );
      memset_0(&unk_1800E33A0, 0, 0x60uLL);
      memcpy_0(off_1800E1000, off_1800B5650, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1800E36FC, 0);
  if ( v65 )
    LocalFree(v65);
  if ( v66 < 0 )
  {
    switch ( v66 )
    {
      case -805306316:
        v1326 = -1073418222;
        break;
      case -805306139:
      case -1073425151:
        v1326 = -1073418201;
        break;
      case -805306306:
        v1326 = -1073418200;
        break;
      default:
        v1326 = v66;
        if ( v66 == -2147024774 )
          goto LABEL_102;
        break;
    }
    v69 = v1325;
LABEL_59:
    v3 = v1326;
  }
  else
  {
    if ( v67 == 4 )
    {
      v69 = *(_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(hMem);
      goto LABEL_59;
    }
LABEL_102:
    v69 = v1325;
    v3 = -1073418210;
  }
  if ( hMem[0] )
  {
    LocalFree(hMem[0]);
    hMem[0] = 0LL;
  }
  if ( v3 < 0 )
  {
    v69 = 0;
    if ( v3 == -1073418222 )
      v3 = 0;
  }
  LOBYTE(v2) = v69 == 1;
  *v1343 = v2;
  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue = v2;
  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried = 1;
LABEL_107:
  ReleaseSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  return (unsigned int)v3;
}
