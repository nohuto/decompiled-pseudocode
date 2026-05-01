/*
 * XREFs of ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1800FB828
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800FB28C (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     wcscmp_0 @ 0x1802D373C (wcscmp_0.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x180683BAC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaAvailability::IsCortanaAllowedOnSKU(CortanaAvailability *this, unsigned __int8 *a2)
{
  int v2; // r12d
  int v3; // eax
  _BYTE *v4; // rdi
  _BYTE *v5; // r14
  int v6; // r13d
  unsigned __int8 *v7; // r15
  int v8; // eax
  int v9; // r10d
  int v10; // r8d
  __int64 v11; // rsi
  int v12; // ebx
  int v13; // r11d
  int v14; // ecx
  int v15; // ebx
  int v16; // edx
  int v17; // r11d
  unsigned int v18; // r8d
  int v19; // r9d
  unsigned int v20; // r10d
  int v21; // edx
  int v22; // r8d
  unsigned int v23; // r9d
  int v24; // r10d
  int v25; // edx
  int v26; // r8d
  unsigned int v27; // r9d
  int v28; // edx
  int v29; // r8d
  unsigned int v30; // r10d
  unsigned int v31; // r8d
  int v32; // r9d
  int v33; // edx
  unsigned int v34; // r8d
  int v35; // r9d
  int v36; // edx
  int v37; // r8d
  unsigned int v38; // r9d
  int v39; // r10d
  int v40; // ecx
  char v41; // al
  unsigned __int64 v42; // rcx
  int v43; // esi
  unsigned int v44; // r13d
  __int64 v45; // rdi
  HMODULE *v46; // rbx
  void *v47; // rbx
  __int64 v48; // rax
  const WCHAR *v49; // rdx
  _BYTE *v50; // rdi
  HMODULE *v51; // r14
  __int64 v52; // rax
  char *v53; // rdx
  unsigned int v54; // r15d
  unsigned int v55; // r14d
  __int64 v56; // rcx
  __int64 v57; // rax
  const CHAR *v58; // rdx
  __int64 (__fastcall *ProcAddress)(); // rcx
  HANDLE ProcessHeap; // rax
  void *v61; // rsi
  void *v62; // rdi
  int v63; // r15d
  signed int LastError; // r14d
  void *v65; // rax
  bool v66; // sf
  void *v67; // rbx
  __int64 v68; // r9
  __int64 (__fastcall *v69)(); // rbx
  DWORD CurrentThreadId; // eax
  void *v71; // rax
  bool v72; // sf
  void *v73; // rbx
  __int64 v74; // r9
  HANDLE CurrentProcess; // rax
  bool v76; // sf
  HLOCAL v77; // rax
  void *v78; // r13
  int v79; // r15d
  unsigned int v80; // esi
  void *v81; // rdi
  HANDLE v82; // rax
  _OWORD *v83; // rax
  _OWORD *v84; // rbx
  HANDLE v85; // rax
  _QWORD *v86; // r11
  void *v87; // r11
  int v88; // eax
  unsigned int v89; // r10d
  void *v90; // r11
  int v91; // eax
  unsigned int v92; // r10d
  int v93; // r9d
  int v94; // eax
  unsigned int v95; // r10d
  int v96; // r9d
  int v97; // eax
  size_t v98; // rdx
  int v99; // r9d
  void *v100; // r11
  int v101; // eax
  unsigned int v102; // r10d
  void *v103; // r11
  int v104; // eax
  unsigned int v105; // r10d
  int v106; // r9d
  int v107; // eax
  int v108; // r9d
  unsigned int v109; // ebx
  HANDLE v110; // rax
  void *v111; // rbx
  __int64 v112; // r9
  _DWORD *v113; // r10
  _DWORD *v114; // rax
  int v115; // r10d
  unsigned int *v116; // r11
  __int64 v117; // rdx
  __int64 v118; // r9
  __int64 v119; // r11
  unsigned int v120; // r10d
  unsigned int v121; // r9d
  unsigned int *v122; // r11
  __int64 v123; // r9
  unsigned int *v124; // r10
  __int64 v125; // rdx
  __int64 v126; // r9
  __int64 v127; // r10
  int v128; // r11d
  _DWORD *v129; // r10
  __int64 v130; // r9
  size_t v131; // rdx
  int v132; // r11d
  unsigned int *v133; // r10
  __int64 v134; // rdx
  __int64 v135; // r9
  __int64 v136; // r10
  _DWORD *v137; // r10
  _QWORD *v138; // rax
  SIZE_T v139; // rcx
  __int64 v140; // r9
  int v141; // r11d
  unsigned int *v142; // r9
  int v143; // ebx
  __int64 v144; // rdx
  __int64 v145; // r9
  unsigned int v146; // r11d
  _DWORD *v147; // r9
  __int64 v148; // r10
  void *v149; // rcx
  unsigned int v150; // r10d
  unsigned int *v151; // r9
  __int64 v152; // rdx
  __int64 v153; // r9
  unsigned int v154; // r11d
  unsigned int *v155; // r9
  _DWORD *v156; // rax
  int v157; // ecx
  int v158; // r9d
  unsigned int v159; // r10d
  unsigned int *v160; // r10
  __int64 v161; // rdx
  __int64 v162; // r9
  __int64 v163; // r10
  unsigned int v164; // r9d
  unsigned int v165; // r9d
  unsigned int *v166; // r10
  _DWORD *v167; // rax
  __int64 v168; // rcx
  unsigned int v169; // r9d
  unsigned int v170; // r10d
  unsigned int v171; // r10d
  unsigned int v172; // r10d
  unsigned int v173; // r10d
  unsigned __int8 *v174; // rbx
  SIZE_T v175; // r9
  void *v176; // r10
  int v177; // r15d
  unsigned int v178; // ecx
  unsigned int v179; // ebx
  HANDLE v180; // rax
  unsigned __int8 *v181; // rax
  int v182; // eax
  __int64 v183; // r9
  unsigned int v184; // r10d
  size_t v185; // rcx
  int v186; // eax
  HANDLE v187; // rax
  SIZE_T v188; // r15
  LPVOID v189; // rax
  unsigned int v190; // r10d
  SIZE_T v191; // rdx
  unsigned __int8 v192; // al
  SIZE_T v193; // rcx
  SIZE_T v194; // rcx
  int v195; // r9d
  unsigned __int8 *v196; // r11
  int v197; // edx
  char v198; // r9
  int v199; // r14d
  int v200; // r8d
  int v201; // ecx
  unsigned int v202; // r9d
  unsigned int v203; // ecx
  unsigned int v204; // r8d
  _BYTE *v205; // r14
  char v206; // si
  SIZE_T v207; // rax
  SIZE_T v208; // rdx
  unsigned __int8 *v209; // r8
  int v210; // r13d
  int v211; // r15d
  SIZE_T v212; // r14
  int v213; // eax
  int v214; // ebx
  int v215; // r11d
  int v216; // edx
  int v217; // r9d
  int v218; // r10d
  int v219; // r8d
  int v220; // r9d
  unsigned int v221; // edx
  int v222; // r8d
  int v223; // ecx
  int v224; // edx
  int v225; // r8d
  int v226; // r9d
  int v227; // edx
  unsigned int v228; // r8d
  unsigned int v229; // r9d
  int v230; // edx
  int v231; // r8d
  int v232; // r9d
  int v233; // edx
  int v234; // r8d
  int v235; // r10d
  int v236; // edx
  int v237; // r9d
  unsigned int v238; // r8d
  int v239; // edx
  unsigned int v240; // r9d
  _BYTE *v241; // rdx
  int v242; // r9d
  HANDLE v243; // rax
  _QWORD *v244; // r15
  HANDLE v245; // rax
  void *v246; // rax
  LPVOID *v247; // rax
  HANDLE v248; // rax
  _OWORD *v249; // rax
  HANDLE v250; // rax
  _QWORD *v251; // rax
  int v252; // r15d
  HANDLE v253; // rax
  HANDLE v254; // rax
  HANDLE v255; // rax
  HANDLE v256; // rax
  void *v257; // rax
  void *v258; // r13
  const void **v259; // rdi
  HANDLE v260; // rax
  LPVOID v261; // rbx
  HANDLE v262; // rax
  HANDLE v263; // rax
  HANDLE v264; // rax
  HANDLE v265; // rax
  __int64 v266; // rdx
  size_t v267; // r11
  int v268; // r15d
  unsigned int v269; // ebx
  HANDLE v270; // rax
  _DWORD *v271; // rax
  __int64 v272; // r9
  void *v273; // rbx
  __int64 v274; // r9
  __int64 v275; // r9
  LPVOID v276; // rcx
  __int64 v277; // r9
  __int64 v278; // r9
  LPVOID v279; // rcx
  __int64 v280; // r9
  HANDLE v281; // rax
  int v282; // eax
  __int64 v283; // rcx
  SIZE_T v284; // rdi
  HANDLE v285; // rax
  LPVOID v286; // rbx
  HANDLE v287; // rax
  HANDLE v288; // rax
  HANDLE v289; // rax
  HANDLE v290; // rax
  void *v291; // rbx
  HANDLE v292; // rax
  void *v293; // rbx
  HANDLE v294; // rax
  LPVOID v295; // rbx
  HANDLE v296; // rax
  HANDLE v297; // rax
  HANDLE v298; // rax
  HANDLE v299; // rax
  HANDLE v300; // rax
  int v301; // ebx
  LPVOID v302; // rcx
  unsigned int v303; // r11d
  int v304; // eax
  SIZE_T v305; // r11
  size_t v306; // r10
  _DWORD *v307; // rcx
  int v308; // r11d
  unsigned int v309; // r10d
  unsigned int v310; // r10d
  unsigned int v311; // r10d
  unsigned int v312; // eax
  unsigned int v313; // ebx
  HANDLE v314; // rax
  _QWORD *v315; // r13
  void *v316; // rdi
  signed int v317; // eax
  FARPROC v318; // rax
  int v319; // eax
  void *v320; // r10
  SIZE_T v321; // rax
  void *v322; // rcx
  SIZE_T v323; // rdx
  __int64 v324; // rbx
  int v325; // r15d
  unsigned int v326; // ecx
  void *v327; // r10
  void *v328; // r10
  void *v329; // r10
  __int64 v330; // r11
  unsigned int v331; // r11d
  int v332; // r11d
  HANDLE v333; // rax
  LPVOID v334; // rbx
  unsigned __int64 v335; // rax
  unsigned int v336; // r15d
  HANDLE v337; // rax
  void *v338; // rax
  unsigned __int64 v339; // rax
  unsigned int v340; // r15d
  HANDLE v341; // rax
  void *v342; // rax
  unsigned __int64 v343; // rax
  unsigned int v344; // r15d
  HANDLE v345; // rax
  void *v346; // rax
  HANDLE v347; // rax
  HANDLE v348; // rax
  HANDLE v349; // rax
  HANDLE v350; // rax
  void *v351; // r15
  void *v352; // rbx
  HANDLE v353; // rax
  void *v354; // rbx
  HANDLE v355; // rax
  void *v356; // rbx
  HANDLE v357; // rax
  HANDLE v358; // rax
  _DWORD *v359; // rax
  void *v360; // r8
  _DWORD *v361; // r10
  unsigned __int8 v362; // al
  void *v363; // rdx
  void *v364; // rdi
  char v365; // al
  unsigned __int8 *v366; // r10
  int v367; // r8d
  unsigned int v368; // r8d
  unsigned int v369; // r11d
  unsigned int v370; // r9d
  int v371; // ecx
  int v372; // esi
  _BYTE *v373; // r14
  char v374; // r15
  size_t v375; // rax
  int v376; // r11d
  SIZE_T v377; // r9
  int v378; // r13d
  SIZE_T v379; // rsi
  int v380; // r15d
  int v381; // r10d
  unsigned __int8 *v382; // rdx
  int v383; // eax
  int v384; // edi
  int v385; // r8d
  int v386; // ebx
  unsigned int v387; // edx
  int v388; // r9d
  unsigned int v389; // r10d
  int v390; // r8d
  int v391; // r9d
  unsigned int v392; // edx
  int v393; // r8d
  int v394; // r10d
  int v395; // r11d
  unsigned int v396; // r9d
  int v397; // edx
  int v398; // r8d
  unsigned int v399; // r9d
  int v400; // edx
  int v401; // r8d
  int v402; // r9d
  int v403; // edx
  int v404; // r8d
  int v405; // r9d
  int v406; // edx
  int v407; // r8d
  unsigned int v408; // r9d
  int v409; // r11d
  int v410; // edx
  int v411; // r8d
  int v412; // ecx
  _BYTE *v413; // rdx
  int v414; // r8d
  SIZE_T i; // rcx
  void *v416; // r8
  int v417; // r15d
  SIZE_T v418; // rcx
  int v419; // eax
  void *v420; // rcx
  int v421; // eax
  unsigned __int8 *v422; // r11
  __int64 v423; // rbx
  void *v424; // rbx
  SIZE_T v425; // r10
  unsigned __int8 *v426; // r11
  int v427; // eax
  void *v428; // rax
  __int64 v429; // rdx
  void *v430; // r10
  void *v431; // r11
  SIZE_T v432; // rcx
  unsigned int v433; // ecx
  unsigned int v434; // ebx
  HANDLE v435; // rax
  void *v436; // rbx
  unsigned int *v437; // rcx
  _DWORD *v438; // r11
  int *v439; // r15
  __int64 v440; // r9
  int v441; // r11d
  int v442; // r9d
  void **v443; // rax
  __int64 v444; // r9
  void *v445; // rax
  LPVOID v446; // rcx
  __int64 v447; // r9
  unsigned int v448; // r10d
  int v449; // r9d
  int v450; // r9d
  SIZE_T v451; // r11
  int *v452; // rax
  int v453; // eax
  SIZE_T v454; // rcx
  __int64 v455; // r9
  __int64 v456; // r9
  unsigned int v457; // r10d
  int v458; // r9d
  unsigned int *v459; // rcx
  __int64 v460; // r9
  unsigned int v461; // ebx
  __int64 v462; // r9
  int v463; // r9d
  int v464; // r9d
  int *v465; // rax
  LPVOID v466; // rdx
  __int64 v467; // r9
  int v468; // eax
  unsigned int *v469; // rcx
  unsigned int v470; // ebx
  __int64 v471; // r9
  int v472; // r9d
  int v473; // r9d
  size_t v474; // r10
  const void *v475; // r11
  int *v476; // rbx
  int v477; // ebx
  void *v478; // rbx
  HANDLE v479; // rax
  void *v480; // rbx
  HANDLE v481; // rax
  HANDLE v482; // rax
  HANDLE v483; // rax
  void *v484; // r13
  DWORD ModuleFileNameW; // eax
  __int64 v486; // rax
  unsigned int v487; // edi
  int v488; // eax
  const WCHAR *v489; // rax
  _BYTE *v490; // rsi
  int v491; // r13d
  unsigned __int8 *v492; // r14
  int v493; // eax
  __int64 v494; // rdi
  int v495; // r8d
  int v496; // r10d
  int v497; // ebx
  int v498; // r11d
  int v499; // ecx
  int v500; // ebx
  int v501; // r10d
  int v502; // r11d
  unsigned int v503; // r8d
  int v504; // edx
  unsigned int v505; // r9d
  int v506; // r8d
  unsigned int v507; // r9d
  int v508; // r10d
  int v509; // edx
  int v510; // r8d
  unsigned int v511; // r9d
  int v512; // edx
  int v513; // r8d
  unsigned int v514; // r10d
  unsigned int v515; // r8d
  int v516; // r9d
  int v517; // edx
  unsigned int v518; // r8d
  int v519; // r9d
  int v520; // edx
  int v521; // r8d
  unsigned int v522; // r9d
  int v523; // edx
  int v524; // r10d
  _BYTE *v525; // r13
  unsigned __int64 v526; // rcx
  char v527; // al
  HMODULE *v528; // rbx
  __int64 v529; // r13
  const WCHAR *v530; // rdx
  __int64 v531; // rax
  _BYTE *v532; // r13
  LPCWSTR v533; // r8
  int v534; // ebx
  __int64 v535; // rax
  __int64 v536; // rax
  unsigned __int64 v537; // rdx
  unsigned int v538; // eax
  unsigned int v539; // ecx
  __int64 v540; // rdx
  const CHAR *v541; // r8
  __int64 v542; // rax
  __int64 (__fastcall *v543)(); // rcx
  HANDLE v544; // rax
  int v545; // eax
  const WCHAR *v546; // rax
  _BYTE *v547; // rsi
  int v548; // r13d
  unsigned __int8 *v549; // r14
  int v550; // eax
  __int64 v551; // rdi
  int v552; // r10d
  int v553; // r8d
  int v554; // ebx
  int v555; // r11d
  int v556; // ecx
  int v557; // ebx
  int v558; // edx
  int v559; // r11d
  unsigned int v560; // r8d
  int v561; // r9d
  unsigned int v562; // r10d
  int v563; // edx
  int v564; // r8d
  unsigned int v565; // r9d
  int v566; // r10d
  int v567; // edx
  int v568; // r8d
  unsigned int v569; // r9d
  int v570; // edx
  int v571; // r8d
  unsigned int v572; // r10d
  unsigned int v573; // r8d
  int v574; // r9d
  int v575; // edx
  unsigned int v576; // r8d
  int v577; // r9d
  int v578; // edx
  int v579; // r8d
  unsigned int v580; // r9d
  int v581; // r10d
  int v582; // ecx
  _BYTE *v583; // r13
  unsigned __int64 v584; // rcx
  char v585; // al
  HMODULE *v586; // rbx
  __int64 v587; // r13
  const WCHAR *v588; // rdx
  __int64 v589; // rax
  _BYTE *v590; // r13
  LPCWSTR v591; // r8
  int v592; // ebx
  __int64 v593; // rax
  __int64 v594; // rax
  unsigned __int64 v595; // rdx
  unsigned int v596; // eax
  unsigned int v597; // ecx
  __int64 v598; // rdx
  const CHAR *v599; // r8
  __int64 v600; // rax
  __int64 (__fastcall *v601)(); // rcx
  HANDLE v602; // rax
  int v603; // r13d
  signed int v604; // eax
  signed int v605; // ebx
  bool v606; // sf
  LPVOID v607; // rax
  LPVOID v608; // rax
  SIZE_T v609; // rax
  unsigned int v610; // esi
  _DWORD *v611; // r14
  int v612; // eax
  __int64 v613; // rcx
  unsigned int v614; // r11d
  unsigned int v615; // ebx
  _DWORD *Ptr; // rdx
  unsigned int v617; // r8d
  unsigned int v618; // r9d
  unsigned int *v619; // rcx
  unsigned int v620; // eax
  __int64 v621; // rcx
  const wchar_t *v622; // rcx
  __int64 v623; // r8
  const wchar_t **v624; // rdx
  __int64 v625; // rax
  __int64 v626; // rcx
  char *v627; // rax
  _BYTE *v628; // r14
  int v629; // ebx
  unsigned __int8 *v630; // rsi
  int v631; // r13d
  int v632; // edx
  int v633; // r8d
  __int64 v634; // rdi
  int v635; // r11d
  int v636; // r10d
  int v637; // eax
  int v638; // r11d
  int v639; // r8d
  int v640; // r10d
  unsigned int v641; // edx
  int v642; // ecx
  unsigned int v643; // r8d
  int v644; // edx
  unsigned int v645; // r8d
  int v646; // r9d
  int v647; // ecx
  int v648; // edx
  unsigned int v649; // r8d
  int v650; // ecx
  int v651; // edx
  unsigned int v652; // r9d
  unsigned int v653; // edx
  int v654; // r8d
  int v655; // ecx
  unsigned int v656; // r8d
  int v657; // edx
  int v658; // ecx
  int v659; // r8d
  unsigned int v660; // edx
  int v661; // ecx
  int v662; // r8d
  unsigned __int64 v663; // rax
  __m128 v664; // xmm1
  __m128 v665; // xmm0
  __m128 v666; // xmm0
  __m128 v667; // xmm1
  __m128 v668; // xmm1
  __m128 v669; // xmm1
  __int64 v670; // rax
  unsigned int v671; // r11d
  int v672; // r10d
  __int64 *v673; // r8
  __int64 v674; // rdx
  __int64 v675; // r9
  unsigned int v676; // ecx
  __int64 v677; // rax
  LPVOID v678; // rax
  __int64 v679; // rax
  __int64 v680; // rax
  __int16 v681; // dx
  unsigned int v682; // ecx
  __int16 *v683; // rax
  __int64 v684; // r9
  void *v685; // rax
  signed int v686; // eax
  LPVOID v687; // rdx
  __int64 v688; // r9
  signed int v689; // eax
  signed int v690; // eax
  __int64 v691; // rax
  __int16 v692; // r11
  __int64 v693; // rcx
  void **v694; // rsi
  _BYTE *v695; // rax
  __int64 v696; // rcx
  __int64 ii; // rcx
  _BYTE *v698; // rax
  char v699; // r11
  __int64 jj; // rcx
  void **v701; // rax
  signed int v702; // eax
  int v703; // eax
  const WCHAR *v704; // rax
  bool v705; // sf
  int v706; // eax
  __int64 v707; // rax
  HMODULE *v708; // r13
  unsigned int v709; // ebx
  int v710; // edi
  int v711; // r13d
  __int64 v712; // rax
  int v713; // eax
  __int64 v714; // rax
  bool v715; // sf
  size_t v716; // rax
  signed int v717; // eax
  int v718; // eax
  __int64 v719; // rax
  bool v720; // sf
  unsigned int v721; // r8d
  int v722; // eax
  __int32 v723; // r13d
  void *v724; // rbx
  void *v725; // rbx
  int v726; // ebx
  __int64 v727; // rdx
  bool v728; // sf
  int v729; // eax
  __int64 v730; // rax
  bool v731; // sf
  void *v732; // rbx
  __int64 v733; // r13
  unsigned int v734; // ebx
  int v735; // eax
  unsigned __int64 v736; // rdx
  __int32 v737; // edx
  int v738; // r13d
  int v739; // ebx
  int v740; // ebx
  CToastCenterExperienceManager *v741; // rax
  int v742; // edx
  int v743; // ecx
  CToastCenterExperienceManager *v744; // rax
  SIZE_T v745; // rbx
  int v746; // eax
  void *v747; // rbx
  SIZE_T v748; // rbx
  __int64 v749; // rax
  CToastCenterExperienceManager *v750; // r13
  LPVOID v751; // rbx
  signed int v752; // ebx
  bool v753; // sf
  bool v754; // zf
  void *v755; // rcx
  void *v756; // rax
  __int64 (__fastcall *v757)(); // rbx
  __int64 v758; // rax
  __int32 v759; // ebx
  __int32 v760; // r10d
  __int32 v761; // r8d
  __int32 v762; // r9d
  int v763; // ecx
  int v764; // eax
  unsigned __int64 v765; // r14
  char v766; // si
  int v767; // edx
  __int64 v768; // rdi
  char *v769; // r8
  char *v770; // rax
  signed int v771; // r13d
  unsigned __int8 *v772; // r10
  __int64 v773; // r11
  char *v774; // r8
  int v775; // r9d
  int v776; // ecx
  int v777; // r8d
  int v778; // edx
  int v779; // ecx
  int v780; // r8d
  int v781; // edx
  void *v782; // rbx
  SIZE_T v783; // rbx
  __int64 v784; // rax
  CToastCenterExperienceManager *v785; // r13
  LPVOID v786; // rbx
  signed int v787; // ebx
  bool v788; // sf
  void *v789; // rcx
  void *v790; // rax
  __int64 (__fastcall *v791)(); // rbx
  __int64 v792; // rax
  int v793; // eax
  __int32 v794; // r10d
  __int32 v795; // r9d
  __int32 v796; // r8d
  __int32 v797; // edx
  int v798; // edi
  int v799; // eax
  char *v800; // rdx
  char *v801; // rax
  signed int v802; // r9d
  char v803; // r14
  unsigned __int8 *v804; // r10
  unsigned __int64 v805; // r8
  __int64 v806; // r11
  int v807; // r9d
  int v808; // ecx
  int v809; // r8d
  int v810; // edx
  int v811; // ecx
  int v812; // r8d
  int v813; // edx
  int v814; // r8d
  int v815; // ecx
  LPVOID v816; // rbx
  char v817; // al
  unsigned __int32 v818; // r13d
  __int32 v819; // edx
  int v820; // ebx
  __int32 v821; // eax
  __int32 v822; // ebx
  void *v823; // rax
  __int64 v824; // rax
  LPVOID v825; // rcx
  __int64 v826; // rax
  __int64 v827; // rcx
  _BYTE *m; // rax
  __int64 v829; // rax
  __int64 v830; // rcx
  _BYTE *n; // rax
  _BYTE *v832; // rcx
  __int64 v833; // rax
  __int64 v834; // rax
  int v835; // eax
  HMODULE *v836; // rbx
  __int64 v837; // rdi
  int v838; // ebx
  int v839; // eax
  signed int v840; // ebx
  bool v841; // sf
  void *v842; // rcx
  CToastCenterExperienceManager *v843; // rbx
  const WCHAR *v844; // rax
  __int64 (__fastcall *v845)(); // rbx
  __int64 v846; // rax
  int v847; // r11d
  int v848; // r9d
  int v849; // r8d
  int v850; // ecx
  int v851; // edx
  int v852; // eax
  unsigned __int64 v853; // r14
  char v854; // si
  LPCWSTR v855; // r13
  unsigned __int8 *v856; // rdx
  SIZE_T v857; // rax
  unsigned int v858; // r9d
  SIZE_T v859; // r11
  unsigned __int8 *v860; // r10
  char *v861; // r8
  int v862; // r9d
  int v863; // ecx
  int v864; // r8d
  int v865; // edx
  int v866; // ecx
  int v867; // r8d
  int v868; // edx
  int v869; // r8d
  int v870; // ecx
  void *v871; // rbx
  __int64 v872; // rax
  CToastCenterExperienceManager *v873; // rbx
  void *v874; // rax
  signed int v875; // ebx
  bool v876; // sf
  SIZE_T v877; // rcx
  void *v878; // rax
  __int64 (__fastcall *v879)(); // rbx
  __int64 v880; // rax
  int v881; // eax
  int v882; // r11d
  int v883; // r9d
  int v884; // r8d
  int v885; // ecx
  int v886; // edx
  int v887; // eax
  unsigned __int64 v888; // rsi
  char v889; // di
  LPCWSTR v890; // r14
  SIZE_T v891; // rdx
  char *v892; // rax
  unsigned int v893; // r9d
  char *v894; // r11
  unsigned __int8 *v895; // r10
  char *v896; // r8
  int v897; // r9d
  int v898; // ecx
  int v899; // r8d
  int v900; // edx
  int v901; // ecx
  int v902; // r8d
  int v903; // edx
  int v904; // r8d
  int v905; // ecx
  int v906; // eax
  const WCHAR *v907; // rax
  _BYTE *v908; // r14
  int v909; // esi
  unsigned __int8 *v910; // rax
  int v911; // r13d
  int v912; // r9d
  __int64 v913; // rdi
  int v914; // r8d
  int v915; // ebx
  int v916; // r11d
  int v917; // ecx
  int v918; // ebx
  int v919; // edx
  int v920; // r11d
  unsigned int v921; // r8d
  int v922; // r9d
  unsigned int v923; // r10d
  int v924; // edx
  int v925; // r8d
  unsigned int v926; // r9d
  int v927; // r10d
  int v928; // edx
  int v929; // r8d
  unsigned int v930; // r9d
  int v931; // edx
  int v932; // r8d
  unsigned int v933; // r10d
  unsigned int v934; // r8d
  int v935; // r9d
  int v936; // edx
  unsigned int v937; // r8d
  int v938; // r9d
  int v939; // edx
  int v940; // r8d
  unsigned int v941; // r9d
  int v942; // edx
  int v943; // r8d
  LPCWSTR v944; // rdi
  int v945; // r13d
  unsigned __int64 v946; // rcx
  char v947; // al
  HMODULE *v948; // rbx
  __int64 v949; // rdi
  HMODULE *v950; // rbx
  WCHAR *v951; // rbx
  const WCHAR *v952; // rdx
  __int64 v953; // rax
  const WCHAR *v954; // rdi
  LPCWSTR v955; // r8
  __int64 v956; // rax
  __int64 v957; // rax
  unsigned __int64 v958; // rdx
  int v959; // eax
  unsigned int v960; // ecx
  __int64 v961; // rdx
  const CHAR *v962; // r8
  __int64 v963; // rax
  __int64 (__fastcall *v964)(); // rcx
  HANDLE v965; // rax
  __int64 v966; // rdi
  int v967; // eax
  void *v968; // rbx
  HANDLE v969; // rax
  _OWORD *v970; // rdi
  HANDLE v971; // rax
  _QWORD *v972; // rax
  int v973; // eax
  void *v974; // r9
  void *v975; // r12
  int v976; // eax
  int v977; // r10d
  int v978; // eax
  int v979; // r10d
  int v980; // eax
  int v981; // r10d
  unsigned int v982; // ebx
  HANDLE v983; // rax
  LPVOID v984; // rax
  unsigned int v985; // r10d
  _DWORD *v986; // r11
  _DWORD *v987; // rax
  int v988; // r11d
  void *v989; // rdi
  HANDLE v990; // rax
  HANDLE v991; // rax
  HANDLE v992; // rax
  HANDLE v993; // rax
  unsigned int *v994; // r9
  __int64 v995; // rdx
  __int64 v996; // r9
  unsigned int v997; // r11d
  unsigned int *v998; // r9
  unsigned int v999; // r10d
  __int64 v1000; // r9
  unsigned int *v1001; // r10
  __int64 v1002; // rdx
  __int64 v1003; // r9
  __int64 v1004; // r10
  int v1005; // r11d
  _DWORD *v1006; // r10
  __int64 v1007; // r9
  unsigned int *v1008; // r10
  __int64 v1009; // rdx
  __int64 v1010; // r9
  __int64 v1011; // r10
  int v1012; // r11d
  _DWORD *v1013; // r10
  LPCWSTR *v1014; // rax
  LPCWSTR v1015; // rcx
  __int64 v1016; // rcx
  unsigned int v1017; // r9d
  int v1018; // ebx
  unsigned int v1019; // r9d
  unsigned int v1020; // ecx
  unsigned int v1021; // ebx
  HANDLE v1022; // rax
  WCHAR *v1023; // rax
  int v1024; // eax
  void *v1025; // r9
  unsigned int v1026; // r11d
  size_t v1027; // rcx
  int v1028; // eax
  char *v1029; // r9
  int v1030; // ebx
  unsigned __int8 *v1031; // rbx
  void *v1032; // rax
  unsigned int v1033; // r8d
  size_t v1034; // rcx
  size_t v1035; // r10
  unsigned __int8 v1036; // al
  size_t v1037; // rdx
  int v1038; // r9d
  unsigned __int8 *v1039; // r11
  unsigned int v1040; // edx
  unsigned int v1041; // ecx
  char v1042; // r9
  int v1043; // r14d
  int v1044; // esi
  int v1045; // r8d
  HANDLE v1046; // rax
  unsigned int v1047; // r9d
  unsigned int v1048; // ecx
  int v1049; // ebx
  _BYTE *v1050; // r14
  unsigned int v1051; // esi
  char v1052; // al
  size_t v1053; // rax
  size_t v1054; // rdx
  unsigned __int8 *v1055; // r10
  int v1056; // r15d
  size_t v1057; // r14
  int v1058; // eax
  unsigned int v1059; // r12d
  int v1060; // ebx
  int v1061; // r11d
  int v1062; // r8d
  int v1063; // r10d
  int v1064; // r8d
  int v1065; // r10d
  int v1066; // r9d
  int v1067; // r8d
  unsigned int v1068; // edx
  int v1069; // r9d
  int v1070; // ecx
  int v1071; // edx
  int v1072; // r8d
  int v1073; // r9d
  int v1074; // edx
  unsigned int v1075; // r8d
  unsigned int v1076; // r9d
  int v1077; // edx
  int v1078; // r8d
  int v1079; // r9d
  int v1080; // edx
  int v1081; // r8d
  int v1082; // r9d
  int v1083; // r10d
  int v1084; // r8d
  unsigned int v1085; // edx
  int v1086; // r8d
  int v1087; // r9d
  _BYTE *v1088; // rdx
  void *v1089; // rbx
  HANDLE v1090; // rax
  unsigned int *v1091; // rsi
  HANDLE v1092; // rax
  void *v1093; // rax
  HANDLE v1094; // rax
  _OWORD *v1095; // rax
  int v1096; // ebx
  HANDLE v1097; // rax
  _QWORD *v1098; // rax
  HANDLE v1099; // rax
  HANDLE v1100; // rax
  HANDLE v1101; // rax
  HANDLE v1102; // rax
  void *v1103; // r12
  HANDLE v1104; // rax
  _QWORD *v1105; // r13
  HANDLE v1106; // rax
  HANDLE v1107; // rax
  HANDLE v1108; // rax
  HANDLE v1109; // rax
  void *v1110; // r9
  __int64 v1111; // rdx
  int v1112; // ebx
  size_t v1113; // r11
  unsigned int v1114; // ebx
  HANDLE v1115; // rax
  _DWORD *v1116; // rax
  __int64 v1117; // r9
  void *v1118; // r12
  __int64 v1119; // r9
  __int64 v1120; // r9
  LPVOID v1121; // rcx
  __int64 v1122; // r9
  __int64 v1123; // r9
  LPVOID v1124; // rcx
  __int64 v1125; // r9
  HANDLE v1126; // rax
  int v1127; // eax
  __int64 v1128; // rcx
  LPVOID v1129; // rcx
  unsigned int v1130; // r11d
  SIZE_T v1131; // r10
  _DWORD *v1132; // rcx
  int v1133; // r11d
  unsigned int v1134; // r11d
  unsigned int v1135; // r11d
  unsigned int v1136; // r11d
  unsigned int v1137; // r10d
  unsigned int v1138; // r12d
  HANDLE v1139; // rax
  _QWORD *v1140; // r13
  void *v1141; // rsi
  signed int v1142; // eax
  FARPROC v1143; // rax
  int v1144; // eax
  __int64 v1145; // r9
  void *v1146; // r11
  void *v1147; // rax
  LPVOID v1148; // rcx
  LPVOID v1149; // rdx
  __int64 v1150; // r12
  int v1151; // ebx
  __int64 v1152; // r9
  void *v1153; // r11
  __int64 v1154; // r9
  __int64 v1155; // r10
  SIZE_T v1156; // r12
  unsigned int v1157; // r10d
  __int64 v1158; // r9
  __int64 v1159; // r9
  unsigned int v1160; // r10d
  int v1161; // r9d
  unsigned int v1162; // r10d
  int v1163; // r9d
  int v1164; // r10d
  HANDLE v1165; // rax
  _QWORD *v1166; // rsi
  size_t v1167; // rax
  unsigned int v1168; // ebx
  HANDLE v1169; // rax
  void *v1170; // rax
  HANDLE v1171; // rax
  void *v1172; // rax
  const void *v1173; // r12
  size_t v1174; // rax
  unsigned int v1175; // ebx
  HANDLE v1176; // rax
  void *v1177; // rax
  void *v1178; // r12
  HANDLE v1179; // rax
  void *v1180; // r12
  HANDLE v1181; // rax
  void *v1182; // r12
  HANDLE v1183; // rax
  HANDLE v1184; // rax
  unsigned int *v1185; // rax
  void *v1186; // rsi
  HANDLE v1187; // rax
  void *v1188; // rsi
  HANDLE v1189; // rax
  void *v1190; // rsi
  HANDLE v1191; // rax
  HANDLE v1192; // rax
  void *v1193; // rdx
  void *v1194; // r10
  void *v1195; // rbx
  unsigned __int8 v1196; // al
  void *v1197; // rcx
  void *v1198; // rsi
  void *v1199; // rdx
  unsigned int v1200; // r8d
  unsigned __int8 *v1201; // rax
  int v1202; // r15d
  int v1203; // ecx
  int v1204; // r10d
  unsigned int v1205; // r10d
  unsigned int v1206; // r9d
  unsigned int v1207; // ecx
  int v1208; // r11d
  _BYTE *v1209; // rbx
  unsigned int v1210; // r14d
  int v1211; // r9d
  SIZE_T v1212; // rbx
  int v1213; // esi
  SIZE_T v1214; // r15
  _BYTE *v1215; // r12
  unsigned int v1216; // r11d
  unsigned __int8 *v1217; // r13
  int v1218; // eax
  int v1219; // edi
  int v1220; // ebx
  int v1221; // ecx
  int v1222; // edi
  int v1223; // r8d
  int v1224; // ebx
  unsigned int v1225; // edx
  int v1226; // r9d
  unsigned int v1227; // r10d
  int v1228; // r8d
  int v1229; // r9d
  unsigned int v1230; // edx
  int v1231; // r8d
  int v1232; // r10d
  int v1233; // r11d
  unsigned int v1234; // r9d
  int v1235; // edx
  int v1236; // r8d
  unsigned int v1237; // r9d
  int v1238; // edx
  int v1239; // r8d
  int v1240; // r9d
  int v1241; // edx
  int v1242; // r8d
  int v1243; // r9d
  int v1244; // edx
  int v1245; // r8d
  unsigned int v1246; // r9d
  int v1247; // edx
  int v1248; // r8d
  char *v1249; // r10
  SIZE_T k; // rcx
  void *v1251; // r14
  int v1252; // ebx
  SIZE_T v1253; // r9
  void *v1254; // r11
  SIZE_T v1255; // r10
  SIZE_T v1256; // r10
  int v1257; // eax
  SIZE_T v1258; // rdx
  int v1259; // eax
  SIZE_T v1260; // r10
  void *v1261; // r9
  SIZE_T v1262; // rax
  void *v1263; // r11
  SIZE_T v1264; // r10
  SIZE_T v1265; // r14
  __int64 v1266; // r10
  SIZE_T v1267; // r11
  LPVOID v1268; // rcx
  unsigned int v1269; // ecx
  unsigned int v1270; // ebx
  HANDLE v1271; // rax
  void *v1272; // rsi
  HANDLE v1273; // rax
  _QWORD *v1274; // rsi
  void *v1275; // r14
  HANDLE v1276; // rax
  void *v1277; // r14
  HANDLE v1278; // rax
  void *v1279; // r14
  HANDLE v1280; // rax
  HANDLE v1281; // rax
  void *v1282; // rsi
  HANDLE v1283; // rax
  void *v1284; // rsi
  HANDLE v1285; // rax
  _QWORD *v1286; // rsi
  void *v1287; // r14
  HANDLE v1288; // rax
  void *v1289; // r14
  HANDLE v1290; // rax
  void *v1291; // r14
  HANDLE v1292; // rax
  HANDLE v1293; // rax
  void *v1294; // rsi
  HANDLE v1295; // rax
  unsigned int v1296; // r14d
  SIZE_T v1297; // r9
  int v1298; // r10d
  int *v1299; // rax
  unsigned int *v1300; // r9
  __int64 v1301; // r9
  int v1302; // r10d
  int v1303; // eax
  __int64 v1304; // rdi
  HMODULE *v1305; // rbx
  int v1306; // ebx
  int v1308; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v1309; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned __int8 v1310; // [rsp+70h] [rbp-98h]
  SIZE_T v1311; // [rsp+78h] [rbp-90h] BYREF
  SIZE_T dwBytes; // [rsp+80h] [rbp-88h] BYREF
  SIZE_T v1313; // [rsp+88h] [rbp-80h]
  SIZE_T j; // [rsp+90h] [rbp-78h] BYREF
  LPVOID v1315; // [rsp+98h] [rbp-70h]
  LPVOID v1316; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID v1317; // [rsp+A8h] [rbp-60h] BYREF
  size_t Size; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v1319; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID v1320; // [rsp+C0h] [rbp-48h]
  SIZE_T v1321; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID v1322; // [rsp+D0h] [rbp-38h] BYREF
  SIZE_T v1323; // [rsp+D8h] [rbp-30h]
  LPVOID v1324; // [rsp+E0h] [rbp-28h]
  SIZE_T v1325; // [rsp+E8h] [rbp-20h]
  void *v1326; // [rsp+F0h] [rbp-18h] BYREF
  LPVOID v1327; // [rsp+F8h] [rbp-10h]
  LPVOID v1328; // [rsp+100h] [rbp-8h]
  SIZE_T v1329; // [rsp+108h] [rbp+0h] BYREF
  SIZE_T v1330; // [rsp+110h] [rbp+8h]
  size_t pcchLength; // [rsp+118h] [rbp+10h] BYREF
  LPVOID lpMem; // [rsp+120h] [rbp+18h] BYREF
  void *v1333; // [rsp+128h] [rbp+20h] BYREF
  SIZE_T v1334; // [rsp+130h] [rbp+28h]
  LPCWSTR lpModuleName; // [rsp+138h] [rbp+30h]
  void *Src[2]; // [rsp+140h] [rbp+38h] BYREF
  int v1337; // [rsp+150h] [rbp+48h]
  size_t v1338; // [rsp+158h] [rbp+50h] BYREF
  void *v1339; // [rsp+160h] [rbp+58h] BYREF
  void *v1340; // [rsp+168h] [rbp+60h]
  size_t v1341[2]; // [rsp+170h] [rbp+68h] BYREF
  SIZE_T v1342; // [rsp+180h] [rbp+78h] BYREF
  void *v1343; // [rsp+188h] [rbp+80h] BYREF
  int v1344; // [rsp+190h] [rbp+88h]
  LPCWSTR v1345; // [rsp+198h] [rbp+90h]
  _DWORD *v1346; // [rsp+1A0h] [rbp+98h] BYREF
  unsigned int v1347; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v1348; // [rsp+1ACh] [rbp+A4h] BYREF
  unsigned int v1349; // [rsp+1B0h] [rbp+A8h] BYREF
  int v1350; // [rsp+1B4h] [rbp+ACh]
  int v1351; // [rsp+1B8h] [rbp+B0h]
  int v1352; // [rsp+1C0h] [rbp+B8h]
  unsigned int v1353; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned int v1354; // [rsp+1CCh] [rbp+C4h]
  __int128 v1355; // [rsp+1D0h] [rbp+C8h]
  unsigned int v1356; // [rsp+1E0h] [rbp+D8h] BYREF
  unsigned int v1357; // [rsp+1E4h] [rbp+DCh] BYREF
  unsigned int v1358; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned int v1359; // [rsp+1ECh] [rbp+E4h] BYREF
  unsigned int v1360; // [rsp+1F0h] [rbp+E8h] BYREF
  int v1361; // [rsp+1F4h] [rbp+ECh] BYREF
  unsigned int v1362; // [rsp+1F8h] [rbp+F0h] BYREF
  void *v1363; // [rsp+200h] [rbp+F8h] BYREF
  int v1364; // [rsp+208h] [rbp+100h]
  __int64 v1365; // [rsp+210h] [rbp+108h] BYREF
  int v1366; // [rsp+218h] [rbp+110h]
  __int64 v1367; // [rsp+220h] [rbp+118h]
  LPVOID v1368; // [rsp+228h] [rbp+120h]
  __int64 v1369; // [rsp+230h] [rbp+128h] BYREF
  LPVOID v1370; // [rsp+238h] [rbp+130h]
  HMODULE phModule; // [rsp+240h] [rbp+138h] BYREF
  HMODULE hModule; // [rsp+248h] [rbp+140h] BYREF
  __int128 v1373; // [rsp+250h] [rbp+148h] BYREF
  __int128 v1374; // [rsp+260h] [rbp+158h]
  __int128 v1375; // [rsp+270h] [rbp+168h] BYREF
  __int128 v1376; // [rsp+280h] [rbp+178h]
  __int64 v1377; // [rsp+290h] [rbp+188h] BYREF
  CortanaAvailability *v1378; // [rsp+298h] [rbp+190h]
  __int64 v1379; // [rsp+2A0h] [rbp+198h] BYREF
  __int64 v1380; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v1381; // [rsp+2B0h] [rbp+1A8h] BYREF
  __int128 v1382; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v1383[13]; // [rsp+2D0h] [rbp+1C8h] BYREF
  _OWORD v1384[3]; // [rsp+338h] [rbp+230h] BYREF
  __int64 v1385; // [rsp+368h] [rbp+260h] BYREF
  char v1386[152]; // [rsp+370h] [rbp+268h] BYREF
  unsigned int v1387; // [rsp+408h] [rbp+300h] BYREF
  int v1388; // [rsp+40Ch] [rbp+304h]
  void *v1389; // [rsp+410h] [rbp+308h]
  void *v1390; // [rsp+418h] [rbp+310h]
  void *v1391; // [rsp+420h] [rbp+318h]
  const WCHAR *v1392; // [rsp+428h] [rbp+320h]
  const WCHAR *v1393; // [rsp+430h] [rbp+328h]
  __int64 v1394; // [rsp+438h] [rbp+330h]
  int v1395; // [rsp+440h] [rbp+338h]
  __m128i v1396; // [rsp+444h] [rbp+33Ch] BYREF
  __m128i v1397; // [rsp+454h] [rbp+34Ch] BYREF
  unsigned int v1398; // [rsp+464h] [rbp+35Ch] BYREF
  unsigned int v1399; // [rsp+468h] [rbp+360h]
  unsigned __int32 v1400; // [rsp+46Ch] [rbp+364h]
  unsigned int v1401; // [rsp+470h] [rbp+368h]
  int v1402; // [rsp+478h] [rbp+370h] BYREF
  _DWORD v1403[3]; // [rsp+47Ch] [rbp+374h] BYREF
  __int16 v1404; // [rsp+48Ah] [rbp+382h]
  __int64 v1405; // [rsp+490h] [rbp+388h]
  int v1406; // [rsp+4E8h] [rbp+3E0h] BYREF
  _DWORD v1407[5]; // [rsp+4ECh] [rbp+3E4h] BYREF
  void *v1408; // [rsp+500h] [rbp+3F8h]
  int v1409; // [rsp+558h] [rbp+450h] BYREF
  _DWORD v1410[5]; // [rsp+55Ch] [rbp+454h] BYREF
  SIZE_T v1411; // [rsp+570h] [rbp+468h]
  int v1412; // [rsp+5C8h] [rbp+4C0h] BYREF
  _DWORD v1413[5]; // [rsp+5CCh] [rbp+4C4h] BYREF
  void *v1414; // [rsp+5E0h] [rbp+4D8h]
  int v1415; // [rsp+638h] [rbp+530h] BYREF
  _DWORD v1416[5]; // [rsp+63Ch] [rbp+534h] BYREF
  void *v1417; // [rsp+650h] [rbp+548h]
  int v1418; // [rsp+6A8h] [rbp+5A0h] BYREF
  char v1419[20]; // [rsp+6ACh] [rbp+5A4h] BYREF
  void *v1420; // [rsp+6C0h] [rbp+5B8h]
  int v1421; // [rsp+718h] [rbp+610h] BYREF
  char v1422[20]; // [rsp+71Ch] [rbp+614h] BYREF
  void *v1423; // [rsp+730h] [rbp+628h]
  int v1424; // [rsp+788h] [rbp+680h] BYREF
  char v1425[20]; // [rsp+78Ch] [rbp+684h] BYREF
  SIZE_T v1426; // [rsp+7A0h] [rbp+698h]
  int v1427; // [rsp+7F8h] [rbp+6F0h] BYREF
  char v1428[20]; // [rsp+7FCh] [rbp+6F4h] BYREF
  void *v1429; // [rsp+810h] [rbp+708h]
  __int128 v1430; // [rsp+868h] [rbp+760h] BYREF
  __int128 v1431; // [rsp+878h] [rbp+770h] BYREF
  __int128 v1432; // [rsp+888h] [rbp+780h] BYREF
  __int128 v1433; // [rsp+898h] [rbp+790h] BYREF
  __int64 v1434; // [rsp+8A8h] [rbp+7A0h] BYREF
  unsigned __int32 v1435; // [rsp+8B0h] [rbp+7A8h]
  int v1436; // [rsp+8B4h] [rbp+7ACh]
  _DWORD v1437[12]; // [rsp+8B8h] [rbp+7B0h] BYREF
  __int128 v1438; // [rsp+8E8h] [rbp+7E0h] BYREF
  __int128 v1439; // [rsp+8F8h] [rbp+7F0h] BYREF
  __int64 v1440; // [rsp+908h] [rbp+800h]
  _OWORD v1441[2]; // [rsp+910h] [rbp+808h] BYREF
  __int64 v1442; // [rsp+930h] [rbp+828h]
  int v1443; // [rsp+938h] [rbp+830h]
  _OWORD v1444[2]; // [rsp+940h] [rbp+838h] BYREF
  __int64 v1445; // [rsp+960h] [rbp+858h]
  int v1446; // [rsp+968h] [rbp+860h]
  _OWORD v1447[2]; // [rsp+970h] [rbp+868h] BYREF
  __int64 v1448; // [rsp+990h] [rbp+888h]
  int v1449; // [rsp+998h] [rbp+890h]
  _OWORD v1450[2]; // [rsp+9A0h] [rbp+898h] BYREF
  __int64 v1451; // [rsp+9C0h] [rbp+8B8h]
  int v1452; // [rsp+9C8h] [rbp+8C0h]
  __int128 v1453; // [rsp+9D0h] [rbp+8C8h] BYREF
  __int128 v1454; // [rsp+9E0h] [rbp+8D8h] BYREF
  __int64 v1455; // [rsp+9F0h] [rbp+8E8h]
  _OWORD v1456[2]; // [rsp+9F8h] [rbp+8F0h] BYREF
  _DWORD v1457[6]; // [rsp+A18h] [rbp+910h] BYREF
  char v1458; // [rsp+A32h] [rbp+92Ah]
  unsigned __int16 v1459[34]; // [rsp+A34h] [rbp+92Ch] BYREF
  _DWORD v1460[6]; // [rsp+A78h] [rbp+970h] BYREF
  char v1461; // [rsp+A92h] [rbp+98Ah]
  unsigned __int16 v1462[34]; // [rsp+A94h] [rbp+98Ch] BYREF
  _DWORD v1463[6]; // [rsp+AD8h] [rbp+9D0h] BYREF
  char v1464; // [rsp+AF2h] [rbp+9EAh]
  unsigned __int16 v1465[34]; // [rsp+AF4h] [rbp+9ECh] BYREF
  _BYTE v1466[68]; // [rsp+B38h] [rbp+A30h] BYREF
  __int16 v1467; // [rsp+B7Ch] [rbp+A74h]
  unsigned __int16 v1468; // [rsp+BDEh] [rbp+AD6h]
  int v1469; // [rsp+BE4h] [rbp+ADCh]
  int v1470; // [rsp+BE8h] [rbp+AE0h]
  int v1471; // [rsp+C18h] [rbp+B10h] BYREF
  __int128 v1472; // [rsp+C20h] [rbp+B18h]
  __int128 v1473; // [rsp+C30h] [rbp+B28h]
  __int128 v1474; // [rsp+C40h] [rbp+B38h]
  __int64 v1475; // [rsp+C50h] [rbp+B48h]
  _BYTE v1476[176]; // [rsp+C58h] [rbp+B50h] BYREF
  WCHAR Filename[264]; // [rsp+D08h] [rbp+C00h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F50h] [rbp+E48h]

  v1378 = this;
  v1309 = 0;
  v1369 = 0LL;
  v1351 = 0;
  v2 = 1;
  v1354 = 0;
  v1365 = 0LL;
  v1344 = 0;
  while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
    ;
  v3 = dword_1808DDD3C;
  v1350 = -1;
  if ( dword_1808DDD3C )
    goto LABEL_42;
  v1352 = 0;
  v4 = MemoryAlloc(0x338uLL);
  if ( !v4 )
    goto LABEL_11;
  v5 = v4 + 7;
  v6 = 0;
  v7 = (unsigned __int8 *)&unk_180783012;
  v8 = -1;
  v9 = 0;
  v10 = 0;
  v11 = 103LL;
  do
  {
    v12 = *(v7 - 1) | (*(v7 - 2) << 8);
    v13 = v7[2] << 8;
    v14 = *v7;
    v7 += 8;
    v15 = *(v7 - 7) | ((v14 | (v12 << 8)) << 8);
    v16 = v10 ^ v15;
    v17 = *(v7 - 3) | ((*(v7 - 4) | ((*(v7 - 5) | v13) << 8)) << 8);
    v18 = v9 ^ v10 ^ v15 ^ v17 ^ 0xAC987321;
    v19 = v16 ^ (__ROR4__(v18, 22) + 4991 * __ROR4__(v18 + 1419157410, 27));
    v20 = v18 ^ (43881 * __ROR4__(v19 + 133239679, 9) - __ROR4__(v19, 30));
    v21 = v19 ^ (24670 * v20 - (v20 >> 13) - 123127970);
    v22 = v20 ^ (2033 * __ROR4__(v21 ^ 0xAB69, 26) - __ROR4__(v21, 30));
    v23 = v21 ^ (133239679 - (v22 ^ 0xAB69605E));
    v24 = v22 ^ (43881 * (v23 ^ 0x137F)) ^ __ROR4__(v23, 6);
    v25 = v23 ^ (__ROR4__(v24, 30) + 24670 * __ROR4__(v24 + 133239679, 15));
    v26 = v24 ^ (2033 * __ROR4__(v25 + 1419157410, 14) - __ROR4__(v25, 24));
    v27 = v25 ^ __ROR4__(v26, 10) ^ (4991 * __ROR4__(v26 ^ 0xAB69605E, 12));
    v28 = v26 ^ (v27 >> 10) ^ (43881 * (v27 ^ 0x7F1));
    v29 = v27 ^ (2033 * (__ROR4__(~v28, 5) + 24670));
    v30 = v29 ^ (((v28 ^ (v29 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v28 ^ (v29 - 2033) ^ 0xAB6967AF, 30));
    v31 = v28 ^ (v29 - 2033) ^ 0xAB69605E ^ (__ROR4__(v30, 25) + 43881 * __ROR4__(v30 - 133239679, 6));
    v32 = v30 ^ (24670 * (v31 ^ 0x137F) + __ROR4__(v31, 9));
    v33 = v31 ^ (__ROR4__(v32, 25) + 2033 * __ROR4__(v32 ^ 0xAB69, 27));
    v34 = v32 ^ v33 ^ 0xAC987321;
    v35 = v33 ^ (4991 * __ROR4__(v34, 3) - 219010071);
    v36 = v34 ^ (24670 * __ROR4__(v35 - 133239679, 1) - __ROR4__(v35, 6));
    v37 = v35 ^ (__ROR4__(v36, 18) + 2033 * __ROR4__(v36 - 1419157410, 29));
    v38 = v36 ^ (4991 * __ROR4__(v37 - 1419157410, 17) - __ROR4__(v37, 14));
    v39 = v37 ^ (v38 >> 3) ^ (43881 * (v38 ^ 0x605E));
    v40 = __ROR4__(v39, 30);
    v9 = v8 ^ v39;
    v8 = v17;
    v10 = v6 ^ v38 ^ v40 ^ (24670 * __ROR4__(v37 ^ (v38 >> 3) ^ (43881 * (v38 ^ 0x605E)) ^ 0x7F1137F, 28));
    v6 = v15;
    *(v5 - 4) = v10;
    *v5 = v9;
    *(v5 - 5) = __ROR4__(v10, 8);
    v5 += 8;
    *(v5 - 9) = __ROR4__(v9, 8);
    *(v5 - 14) = __ROR4__(v10, 16);
    *(v5 - 10) = __ROR4__(v9, 16);
    *(v5 - 15) = __ROR4__(v10, 24);
    *(v5 - 11) = __ROR4__(v9, 24);
    --v11;
  }
  while ( v11 );
  v41 = 0;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  do
    v41 ^= v4[v42++];
  while ( v42 < 0x338 );
  if ( v41 == 64LL )
  {
    v4[823] = 0;
    memset_0(&unk_1808DA540, 0, 0x60uLL);
    v47 = v4;
    if ( *v4 )
    {
      while ( 1 )
      {
        v48 = -1LL;
        v49 = (const WCHAR *)v4;
        v43 = 0;
        do
          ++v48;
        while ( *(_WORD *)&v4[2 * v48] );
        v50 = &v4[2 * v48];
        v51 = (HMODULE *)((char *)&unk_1808DA540 + 24 * v44);
        if ( !GetModuleHandleExW(0, v49, v51) )
          break;
        if ( *(_WORD *)*v51 == 23117
          && (v52 = *((int *)*v51 + 15), (unsigned int)v52 < 0x10000000)
          && (v53 = (char *)*v51 + v52, v53 >= (char *)*v51)
          && *(_DWORD *)v53 == 17744 )
        {
          if ( *((_WORD *)v53 + 12) == 267 || *((_WORD *)v53 + 12) == 523 )
          {
            *(_QWORD *)((char *)&unk_1808DA540 + 24 * v44 + 12) = *((_QWORD *)v53 + 17);
            *((_DWORD *)&unk_1808DA540 + 6 * v44 + 2) = *((_DWORD *)v53 + 20);
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
        v54 = *(_DWORD *)(v50 + 2);
        v4 = v50 + 6;
        v55 = 0;
        if ( v54 )
        {
          v56 = v44;
          do
          {
            v57 = -1LL;
            v58 = v4;
            do
              ++v57;
            while ( v4[v57] );
            v4 += v57 + 1;
            if ( v43 >= 0 )
            {
              ProcAddress = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v56), v58);
              if ( !ProcAddress )
                goto LABEL_40;
              off_1808D1340[v1352] = ProcAddress;
              v56 = v44;
            }
            ++v1352;
            ++v55;
          }
          while ( v55 < v54 );
        }
        ++v44;
        if ( !*v4 )
          goto LABEL_40;
      }
      v43 = -1073741702;
    }
LABEL_40:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v47);
    if ( v43 < 0 )
      goto LABEL_11;
    v3 = dword_1808DDD3C;
LABEL_42:
    dword_1808DDD3C = v3 + 1;
    goto LABEL_43;
  }
  MemoryFree(v4);
LABEL_11:
  v45 = 4LL;
  v46 = (HMODULE *)&unk_1808DA540;
  do
  {
    if ( *v46 )
      FreeLibrary(*v46);
    v46 += 3;
    --v45;
  }
  while ( v45 );
  memset_0(&unk_1808DA540, 0, 0x60uLL);
  memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_43:
  _InterlockedExchange(&dword_1808DDD40, 0);
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
  {
LABEL_94:
    v1344 = v63;
LABEL_95:
    if ( v62 )
LABEL_96:
      MemoryFree(v62);
LABEL_97:
    if ( v61 )
      MemoryFree(v61);
LABEL_99:
    if ( LastError >= 0 )
      goto LABEL_101;
    goto LABEL_100;
  }
  v65 = (void *)off_1808D1450[0]();
  lpMem = v65;
  if ( v65 )
  {
    v1359 = 0;
    v67 = 0LL;
    v68 = 0LL;
    while ( !((unsigned int (__fastcall *)(void *, __int64, void *, __int64, unsigned int *))off_1808D1470[0])(
               v65,
               2LL,
               v67,
               v68,
               &v1359) )
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
        if ( v67 )
          goto LABEL_61;
        goto LABEL_97;
      }
      if ( v67 )
      {
        LastError = -2147467259;
LABEL_61:
        MemoryFree(v67);
        goto LABEL_97;
      }
      v67 = MemoryAlloc(v1359);
      if ( !v67 )
        goto LABEL_100;
      v68 = v1359;
      v65 = lpMem;
    }
    v61 = v67;
    v69 = off_1808D1468[0];
    CurrentThreadId = GetCurrentThreadId();
    v71 = (void *)((__int64 (__fastcall *)(_QWORD))v69)(CurrentThreadId);
    lpMem = v71;
    if ( !v71 )
    {
      LastError = GetLastError();
      v72 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v72 = LastError < 0;
      }
      if ( !v72 )
        LastError = -2147467259;
      goto LABEL_97;
    }
    v1358 = 0;
    v73 = 0LL;
    v74 = 0LL;
    while ( !((unsigned int (__fastcall *)(void *, __int64, void *, __int64, unsigned int *))off_1808D1470[0])(
               v71,
               2LL,
               v73,
               v74,
               &v1358) )
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
        if ( v73 )
          goto LABEL_81;
        goto LABEL_95;
      }
      if ( v73 )
      {
        LastError = -2147467259;
LABEL_81:
        MemoryFree(v73);
        goto LABEL_95;
      }
      v73 = MemoryAlloc(v1358);
      if ( !v73 )
      {
        LastError = -2147024882;
        goto LABEL_97;
      }
      v74 = v1358;
      v71 = lpMem;
    }
    v62 = v73;
    LastError = 0;
    if ( !v61 || wcscmp_0((const wchar_t *)v61, L"WinSta0") || !v73 || wcscmp_0((const wchar_t *)v73, L"Default") )
      goto LABEL_94;
    v1361 = 0;
    CurrentProcess = GetCurrentProcess();
    if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1361) )
    {
      LastError = GetLastError();
      v76 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v76 = LastError < 0;
      }
      if ( !v76 )
        LastError = -2147467259;
      goto LABEL_96;
    }
    if ( (v1361 & 0xF) == 0 )
      v63 = 1;
    goto LABEL_94;
  }
  LastError = GetLastError();
  v66 = LastError < 0;
  if ( LastError > 0 )
  {
    LastError = (unsigned __int16)LastError | 0x80070000;
    v66 = LastError < 0;
  }
  if ( v66 )
    goto LABEL_99;
LABEL_100:
  v1344 = 0;
LABEL_101:
  v77 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(&v1365, v77);
  v78 = 0LL;
  lpModuleName = (LPCWSTR)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1365);
  if ( !lpModuleName )
  {
    v79 = -2147024882;
    v80 = 0;
    goto LABEL_1567;
  }
  v81 = 0LL;
  LODWORD(v1334) = 0;
  *(_OWORD *)Src = 0LL;
  v1337 = 0;
  v1322 = 0LL;
  v82 = GetProcessHeap();
  v83 = HeapAlloc(v82, 8u, 0xA0uLL);
  v1352 = 56;
  v84 = v83;
  if ( !v83 )
    goto LABEL_588;
  *v83 = xmmword_1808D8540[0];
  v83[1] = *((_OWORD *)&_ImageBase + 579669);
  v83[2] = *((_OWORD *)&_ImageBase + 579670);
  v83[3] = *((_OWORD *)&_ImageBase + 579671);
  v83[4] = *((_OWORD *)&_ImageBase + 579672);
  v83[5] = *((_OWORD *)&_ImageBase + 579673);
  v83[6] = *((_OWORD *)&_ImageBase + 579674);
  v83[7] = *((_OWORD *)&_ImageBase + 579675);
  v83[8] = xmmword_1808D8540[8];
  v83[9] = xmmword_1808D8540[9];
  v85 = GetProcessHeap();
  v86 = HeapAlloc(v85, 8u, 8uLL);
  if ( !v86 )
  {
    v79 = -1073741801;
    v1308 = -1073741801;
    goto LABEL_586;
  }
  *v86 = qword_1808D8690;
  v1342 = __rdtsc();
  LODWORD(dwBytes) = 0;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(4LL, 4LL, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
  {
    v81 = v87;
LABEL_586:
    v78 = v84;
    goto LABEL_590;
  }
  v88 = RtlUIntAdd(0LL, (unsigned int)v1311, &dwBytes);
  v79 = v88 | 0x10000000;
  v81 = v90;
  v1308 = v88 | 0x10000000;
  v78 = v84;
  if ( v88 < 0 )
    goto LABEL_590;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v89, 160LL, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v91 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v79 = v93 | v91;
  v1308 = v93 | v91;
  if ( (v93 | v91) < 0 )
    goto LABEL_590;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v92, 8LL, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v94 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v79 = v96 | v94;
  v1308 = v96 | v94;
  if ( (v96 | v94) < 0 )
    goto LABEL_590;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v95, 8LL, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v97 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v79 = v99 | v97;
  v1308 = v99 | v97;
  if ( (v99 | v97) < 0 )
    goto LABEL_590;
  pcchLength = 0LL;
  if ( StringCchLengthW(L"Cortana-AllowCortana-Enabled", v98, &pcchLength) < 0 )
  {
    v79 = -1073741762;
    v1308 = -1073741762;
LABEL_115:
    v81 = v100;
    goto LABEL_590;
  }
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(4LL, (unsigned int)(2 * (pcchLength + 1)), &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_115;
  v101 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v79 = v101 | 0x10000000;
  v81 = v103;
  v1308 = v101 | 0x10000000;
  if ( v101 < 0 )
    goto LABEL_590;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v102, v102, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v104 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v79 = v106 | v104;
  v1308 = v106 | v104;
  if ( (v106 | v104) < 0 )
    goto LABEL_590;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v105, v105, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v107 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v79 = v108 | v107;
  v1308 = v108 | v107;
  if ( (v108 | v107) < 0 )
    goto LABEL_590;
  HIDWORD(Src[0]) = dwBytes;
  v109 = dwBytes;
  v110 = GetProcessHeap();
  v111 = HeapAlloc(v110, 8u, v109);
  if ( !v111 )
  {
LABEL_588:
    v79 = -1073741801;
    goto LABEL_589;
  }
  LODWORD(v1339) = 0;
  v1338 = 0LL;
  LODWORD(Src[0]) = 0;
  Src[1] = v111;
  v1316 = v111;
  v1315 = v81;
  v1319 = v78;
  v1308 = RtlULongLongAdd(v111, 4LL, &v1339, 160LL);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  if ( v113 + 2 > (_DWORD *)((char *)v113 + HIDWORD(Src[0])) )
    goto LABEL_125;
  v114 = v1339;
  *v113 = 4;
  *v114 = 0;
  v115 = LODWORD(Src[0]) + 1;
  LODWORD(v1339) = 0;
  ++LODWORD(Src[0]);
  v1338 = 0LL;
  if ( v78 )
  {
    if ( !(_DWORD)v112 )
      goto LABEL_529;
  }
  else if ( (_DWORD)v112 )
  {
    goto LABEL_529;
  }
  if ( Src[1] )
  {
    v116 = (unsigned int *)Src[1];
    Size = (size_t)Src[1];
    LODWORD(v1330) = 0;
    if ( v115 )
    {
      do
      {
        v117 = *v116;
        LODWORD(v1311) = 0;
        v1308 = RtlUIntAdd(4LL, v117, &v1311);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v1308 = RtlULongLongAdd(v119, (unsigned int)v1311, &Size, v118);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v116 = (unsigned int *)Size;
        LODWORD(v1330) = v1330 + 1;
      }
      while ( (unsigned int)v1330 < v120 );
      v1315 = v81;
      v1319 = v78;
    }
    v1308 = RtlULongLongAdd(v116, 4LL, &v1339, v112);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    if ( (char *)v122 + v121 + 4 > (char *)Src[1] + HIDWORD(Src[0]) )
      goto LABEL_125;
    *v122 = v121;
    if ( v78 )
      memcpy_0(v1339, v78, v121);
  }
  else
  {
    LODWORD(v1311) = 0;
    v1308 = RtlUIntAdd(4LL, (unsigned int)v112, &v1311);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    v1308 = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1311, (char *)Src + 4);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
  }
  v123 = (unsigned int)(LODWORD(Src[0]) + 1);
  LODWORD(v1339) = 0;
  ++LODWORD(Src[0]);
  v1338 = 0LL;
  if ( !v81 )
    goto LABEL_529;
  if ( Src[1] )
  {
    v124 = (unsigned int *)Src[1];
    Size = (size_t)Src[1];
    if ( (_DWORD)v123 )
    {
      do
      {
        v125 = *v124;
        LODWORD(v1311) = 0;
        v1308 = RtlUIntAdd(4LL, v125, &v1311);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v79 = RtlULongLongAdd(v127, (unsigned int)v1311, &Size, v126);
        v1308 = v79;
        if ( v79 < 0 )
          goto LABEL_590;
        v124 = (unsigned int *)Size;
      }
      while ( v128 + 1 < (unsigned int)v123 );
      v1315 = v81;
      v1319 = v78;
    }
    v1308 = RtlULongLongAdd(v124, 4LL, &v1339, v123);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    if ( v129 + 3 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_125;
    *v129 = 8;
    memcpy_0(v1339, v81, 8uLL);
  }
  else
  {
    LODWORD(v1311) = 0;
    v1308 = RtlUIntAdd(4LL, 8LL, &v1311);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    v1308 = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1311, (char *)Src + 4);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
  }
  v130 = (unsigned int)(LODWORD(Src[0]) + 1);
  LODWORD(v1339) = 0;
  ++LODWORD(Src[0]);
  v1338 = 0LL;
  if ( Src[1] )
  {
    v133 = (unsigned int *)Src[1];
    Size = (size_t)Src[1];
    LODWORD(v1330) = 0;
    if ( (_DWORD)v130 )
    {
      do
      {
        v134 = *v133;
        LODWORD(v1311) = 0;
        v1308 = RtlUIntAdd(4LL, v134, &v1311);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v1308 = RtlULongLongAdd(v136, (unsigned int)v1311, &Size, v135);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v133 = (unsigned int *)Size;
        LODWORD(v1330) = v1330 + 1;
      }
      while ( (unsigned int)v1330 < (unsigned int)v130 );
      v1315 = v81;
      v1319 = v78;
    }
    v1308 = RtlULongLongAdd(v133, 4LL, &v1339, v130);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    if ( v137 + 3 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_125;
    v138 = v1339;
    v139 = v1342;
    *v137 = 8;
    *v138 = v139;
    v132 = LODWORD(Src[0]) + 1;
  }
  else
  {
    LODWORD(v1311) = 0;
    v1308 = RtlUIntAdd(4LL, 8LL, &v1311);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    v79 = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1311, (char *)Src + 4);
    v1308 = v79;
    if ( v79 < 0 )
      goto LABEL_590;
    v132 = LODWORD(Src[0]) + 1;
  }
  LODWORD(Src[0]) = v132;
  Size = 0LL;
  if ( StringCchLengthW(L"Cortana-AllowCortana-Enabled", v131, &Size) < 0 )
  {
    v79 = -1073741762;
    goto LABEL_589;
  }
  v1308 = RtlULongLongAdd(Size, 1LL, &Size, v140);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  LODWORD(v1339) = 0;
  v1338 = 0LL;
  if ( !(2 * (_DWORD)Size) )
  {
    v79 = -1073741811;
LABEL_185:
    v1308 = v79;
    goto LABEL_186;
  }
  if ( Src[1] )
  {
    v142 = (unsigned int *)Src[1];
    v143 = 0;
    Size = (size_t)Src[1];
    if ( v141 )
    {
      do
      {
        v144 = *v142;
        LODWORD(v1311) = 0;
        v1308 = RtlUIntAdd(4LL, v144, &v1311);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v79 = RtlULongLongAdd(v145, (unsigned int)v1311, &Size, v145);
        v1308 = v79;
        if ( v79 < 0 )
          goto LABEL_590;
        v142 = (unsigned int *)Size;
      }
      while ( ++v143 < v146 );
    }
    v1308 = RtlULongLongAdd(v142, 4LL, &v1339, v142);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    if ( (char *)v147 + v148 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
    {
      v149 = v1339;
      *v147 = v148;
      memcpy_0(v149, L"Cortana-AllowCortana-Enabled", (unsigned int)v148);
      v141 = ++LODWORD(Src[0]);
      goto LABEL_186;
    }
    v79 = -1073741789;
    goto LABEL_185;
  }
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(4LL, (unsigned int)(2 * Size), &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v79 = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1311, (char *)Src + 4);
  v1308 = v79;
  if ( v79 < 0 )
    goto LABEL_590;
  v141 = LODWORD(Src[0]) + 1;
  v1308 = 0;
  ++LODWORD(Src[0]);
  v79 = 0;
LABEL_186:
  if ( v79 < 0 )
    goto LABEL_590;
  LODWORD(v1339) = 0;
  v1338 = 0LL;
  if ( Src[1] )
  {
    v151 = (unsigned int *)Src[1];
    Size = (size_t)Src[1];
    LODWORD(v1330) = 0;
    if ( v141 )
    {
      do
      {
        v152 = *v151;
        LODWORD(v1311) = 0;
        v1308 = RtlUIntAdd(4LL, v152, &v1311);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v1308 = RtlULongLongAdd(v153, (unsigned int)v1311, &Size, v153);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v151 = (unsigned int *)Size;
        LODWORD(v1330) = v1330 + 1;
      }
      while ( (unsigned int)v1330 < v154 );
      v1315 = v81;
      v1319 = v78;
    }
    v1308 = RtlULongLongAdd(v151, 4LL, &v1339, v151);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    if ( v155 + 2 > (unsigned int *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_125;
    v156 = v1339;
    v157 = v1344;
    *v155 = v150;
    *v156 = v157;
  }
  else
  {
    LODWORD(v1311) = 0;
    v1308 = RtlUIntAdd(4LL, 4LL, &v1311);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    v1308 = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1311, (char *)Src + 4);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
  }
  v158 = LODWORD(Src[0]) + 1;
  LODWORD(v1339) = 0;
  ++LODWORD(Src[0]);
  v1338 = 0LL;
  if ( Src[1] )
  {
    v160 = (unsigned int *)Src[1];
    Size = (size_t)Src[1];
    LODWORD(v1330) = 0;
    if ( v158 )
    {
      do
      {
        v161 = *v160;
        LODWORD(v1311) = 0;
        v1308 = RtlUIntAdd(4LL, v161, &v1311);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v1308 = RtlULongLongAdd(v163, (unsigned int)v1311, &Size, v162);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_590;
        v160 = (unsigned int *)Size;
        LODWORD(v1330) = v1330 + 1;
      }
      while ( (unsigned int)v1330 < v164 );
      v1315 = v81;
      v1319 = v78;
    }
    v1308 = RtlULongLongAdd(v160, 4LL, &v1339, 4LL);
    v79 = v1308;
    if ( v1308 < 0 )
      goto LABEL_590;
    if ( v166 + 2 <= (unsigned int *)((char *)Src[1] + HIDWORD(Src[0])) )
    {
      v167 = v1339;
      *v166 = v165;
      v159 = v165;
      *v167 = v165;
      ++LODWORD(Src[0]);
      goto LABEL_211;
    }
LABEL_125:
    v79 = -1073741789;
LABEL_589:
    v1308 = v79;
    goto LABEL_590;
  }
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v150, v150, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v79 = RtlUIntAdd(HIDWORD(Src[0]), (unsigned int)v1311, (char *)Src + 4);
  v1308 = v79;
  if ( v79 < 0 )
    goto LABEL_590;
  ++LODWORD(Src[0]);
LABEL_211:
  LODWORD(v1311) = 0;
  v79 = RtlUIntAdd(v159, v159, &v1311);
  v1308 = v79;
  if ( v79 < 0 )
    goto LABEL_590;
  LODWORD(dwBytes) = v1311;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v168, 8LL, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v79 = RtlUIntAdd(v169, (unsigned int)v1311, &dwBytes);
  v1308 = v79;
  if ( v79 < 0 )
    goto LABEL_590;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v170, v170, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v79 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v1308 = v79;
  if ( v79 < 0 )
    goto LABEL_590;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v171, v171, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v79 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v1308 = v79;
  if ( v79 < 0 )
    goto LABEL_590;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v172, v172, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v79 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v1308 = v79;
  if ( v79 < 0 )
    goto LABEL_590;
  LODWORD(v1311) = 0;
  v1308 = RtlUIntAdd(v173, v173, &v1311);
  v79 = v1308;
  if ( v1308 < 0 )
    goto LABEL_590;
  v79 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1311, &dwBytes);
  v1308 = v79;
  if ( v79 < 0 )
    goto LABEL_590;
  LODWORD(v1334) = dwBytes;
  v1316 = 0LL;
  v1324 = 0LL;
  v174 = 0LL;
  LODWORD(v1330) = 0;
  v1328 = 0LL;
  v1327 = 0LL;
  v1313 = 0LL;
  v1320 = 0LL;
  lpMem = (LPVOID)__rdtsc();
  v1347 = 8;
  v177 = RtlUIntAdd(8LL, HIDWORD(Src[0]), &v1347);
  if ( v177 < 0 )
  {
LABEL_230:
    v79 = v177 | 0x10000000;
    v1308 = v79;
    if ( v79 < 0 )
    {
LABEL_307:
      v284 = v1313;
      goto LABEL_308;
    }
    v1317 = v176;
    if ( !v174 )
    {
      v79 = -805306355;
      goto LABEL_589;
    }
    v188 = (unsigned int)v175;
    v1329 = (unsigned int)v175;
    if ( !(_DWORD)v175
      || (Size = (unsigned int)v175 + 8LL,
          v189 = MemoryAlloc(Size),
          v190 = 0,
          v1321 = (SIZE_T)v189,
          (v191 = (SIZE_T)v189) == 0) )
    {
      v284 = v1313;
      v79 = -805306367;
      v1308 = -805306367;
      goto LABEL_309;
    }
    v192 = 0;
    v193 = 0LL;
    v1310 = 0;
    if ( v188 )
    {
      do
        v192 ^= v174[v193++];
      while ( v193 < v188 );
      v1310 = v192;
    }
    v194 = v191;
    j = v191;
    v1326 = (void *)0xC81ECB17B1B54A58LL;
    LODWORD(dwBytes) = 0;
    v195 = -1;
    v1308 = 0;
    v196 = v174;
    v197 = v188 & 7;
    if ( (v188 & 7) != 0 )
    {
      v1308 = 0;
      LODWORD(dwBytes) = 0;
      v198 = 56;
      v199 = 0;
      do
      {
        v200 = *v196;
        if ( v190 >= 4 )
        {
          v201 = (v200 << v198) | dwBytes;
          LODWORD(dwBytes) = v201;
        }
        else
        {
          v201 = dwBytes;
          v199 |= v200 << (v198 - 32);
        }
        ++v196;
        ++v190;
        v198 -= 8;
      }
      while ( (int)v190 < v197 );
      v1308 = v199;
      v1316 = v174;
      v1315 = v81;
      v1319 = v78;
      LODWORD(v1323) = 0;
      v190 = v199 ^ 0xB17A307A;
      v202 = v201 ^ 0x42F6B18D;
      v203 = v199 ^ 0xB17A307A;
      v204 = v202;
      if ( (v188 & 7) != 0 )
      {
        v205 = (_BYTE *)j;
        do
        {
          if ( (unsigned int)v1323 >= 4 )
          {
            v204 = __ROR4__(v204, 24);
            v206 = v204;
          }
          else
          {
            v203 = __ROR4__(v203, 24);
            v206 = v203;
          }
          LODWORD(v1323) = v1323 + 1;
          v207 = (SIZE_T)(v205 + 1);
          *v205++ = v206;
        }
        while ( (int)v1323 < v197 );
        v194 = v207;
        j = v207;
        v192 = v1310;
      }
      else
      {
        v194 = j;
      }
      if ( (unsigned int)v197 <= 4 )
      {
        v195 = 0;
        if ( (unsigned int)v197 >= 4 )
          goto LABEL_259;
        v190 = v190 >> (8 * (4 - v197)) << (8 * (4 - v197));
      }
      else
      {
        v195 = v202 >> (8 * (8 - v197)) << (8 * (8 - v197));
      }
      v194 = j;
    }
LABEL_259:
    v208 = v188 >> 3;
    if ( v188 >> 3 )
    {
      v209 = v196 + 2;
      v210 = WORD2(v1326);
      v211 = dwBytes;
      v212 = v208;
      LODWORD(v1311) = WORD1(v1326);
      v213 = v1308;
      pcchLength = v194 + 7;
      do
      {
        v214 = v209[1] | ((*v209 | ((*(v209 - 1) | (*(v209 - 2) << 8)) << 8)) << 8);
        v215 = v209[5] | ((v209[4] | ((v209[3] | (v209[2] << 8)) << 8)) << 8);
        lpMem = v209 + 8;
        v216 = v195 ^ v215;
        v217 = v190 ^ HIDWORD(v1326) ^ v214 ^ ((v195 ^ v215) - 19032);
        v218 = v216 ^ (__ROR4__(v217, 7) + WORD1(v1326) * __ROR4__(v217 ^ HIDWORD(v1326), 15));
        v219 = v217 ^ (v210 * __ROR4__(v218 - 1313519016, 9) - __ROR4__(v218, 10));
        v220 = v218 ^ (__ROR4__(v219, 27) + HIWORD(v1326) * __ROR4__(v219 ^ v210, 28));
        v221 = v219 ^ (HIDWORD(v1326) - (v220 ^ 0xB1B54A58));
        v222 = v220 ^ (WORD1(v1326) * (v221 - 19032) - (v221 >> 6));
        v223 = v221 ^ (19032 * (v210 ^ __ROR4__(v222, 15)));
        v224 = v222 ^ (v210 * (HIWORD(v1326) + __ROR4__(~v223, 3)));
        v225 = v223 ^ (v224 - HIDWORD(v1326) - 19032);
        v226 = v224 ^ (v1311 * (v225 ^ HIWORD(v1326))) ^ __ROR4__(v225, 10);
        v227 = v225 ^ __ROR4__(v226, 3) ^ (v210 * __ROR4__(v226 ^ 0x4A58, 26));
        v228 = v226 ^ (19032 * (__ROR4__(v227, 15) - HIWORD(v1326)));
        v229 = v227 ^ ((v228 ^ (v228 >> 14)) >> 1) ^ (19032 * (HIWORD(v1326) ^ v228)) ^ (19032
                                                                                       * ((8 * (v228 - v210)) | ((v228 - v210) >> 29)));
        v230 = v228 ^ (WORD1(v1326) * (v229 - v210) - (v229 >> 13));
        v231 = v229 ^ __ROR4__(v230, 11) ^ (v210 * __ROR4__(-1313519016 - v230, 9));
        v232 = v230 ^ (v231 - HIWORD(v1326) + 1313519016);
        v233 = v231 ^ (19032 * (v232 ^ WORD1(v1326)) - __ROR4__(v232, 7));
        v234 = v232 ^ (WORD1(v1326) * __ROR4__(HIWORD(v1326) ^ v233, 28) - __ROR4__(v233, 16));
        v235 = v233 ^ (__ROR4__(v234, 4) + v210 * __ROR4__(-1313519016 - v234, 10));
        v236 = v234 ^ __ROR4__(v235, 9) ^ (HIWORD(v1326) * __ROR4__(v235 + 1313519016, 4));
        v237 = v235 ^ (19032 * __ROR4__(v236 ^ HIDWORD(v1326), 24) - __ROR4__(v236, 30));
        v238 = v236 ^ (WORD1(v1326) * __ROR4__(HIDWORD(v1326) - v237, 11) - __ROR4__(v237, 12));
        v239 = v237 ^ (v238 >> 8) ^ (v210 * (WORD1(v1326) ^ v238));
        v190 = v213 ^ v239;
        v240 = v239 ^ HIDWORD(v1326) ^ 0xB1B54A58;
        v241 = (_BYTE *)pcchLength;
        v242 = v238 ^ v240;
        v209 = (unsigned __int8 *)lpMem;
        v195 = v211 ^ v242;
        v213 = v214;
        v211 = v215;
        *(_BYTE *)(pcchLength - 4) = v190;
        *v241 = v195;
        *(v241 - 5) = __ROR4__(v190, 8);
        *(v241 - 1) = __ROR4__(v195, 8);
        *(v241 - 6) = __ROR4__(v190, 16);
        *(v241 - 2) = __ROR4__(v195, 16);
        *(v241 - 7) = __ROR4__(v190, 24);
        *(v241 - 3) = __ROR4__(v195, 24);
        pcchLength = (size_t)(v241 + 8);
        --v212;
      }
      while ( v212 );
      v192 = v1310;
      v78 = v1319;
      v81 = v1315;
      v174 = (unsigned __int8 *)v1316;
      v188 = v1329;
    }
    *(_QWORD *)(v1321 + v188) = v192;
    v243 = GetProcessHeap();
    v1316 = HeapAlloc(v243, 8u, 0x30uLL);
    v244 = v1316;
    if ( v1316 )
    {
      *(_DWORD *)v1316 = Size;
      v245 = GetProcessHeap();
      v246 = HeapAlloc(v245, 8u, (unsigned int)Size);
      if ( v246 )
      {
        v244[1] = v246;
        memcpy_0(v246, (const void *)v1321, (unsigned int)Size);
        *((_DWORD *)v244 + 4) = 160;
        v248 = GetProcessHeap();
        v249 = HeapAlloc(v248, 8u, 0xA0uLL);
        if ( v249 )
        {
          v244[3] = v249;
          *v249 = xmmword_1808D85F0[0];
          v249[1] = xmmword_1808D85F0[1];
          v249[2] = xmmword_1808D85F0[2];
          v249[3] = xmmword_1808D85F0[3];
          v249[4] = xmmword_1808D85F0[4];
          v249[5] = xmmword_1808D85F0[5];
          v249[6] = xmmword_1808D85F0[6];
          v249[7] = xmmword_1808D85F0[7];
          v249[8] = xmmword_1808D85F0[8];
          v249[9] = xmmword_1808D85F0[9];
          *((_DWORD *)v244 + 8) = 8;
          v250 = GetProcessHeap();
          v251 = HeapAlloc(v250, 8u, 8uLL);
          if ( v251 )
          {
            v244[5] = v251;
            *v251 = qword_1808D85E0;
            v257 = v244;
            v252 = 0;
            v1320 = v257;
            v1317 = 0LL;
            goto LABEL_278;
          }
        }
        v247 = (LPVOID *)v1316;
      }
      else
      {
        v247 = (LPVOID *)v244;
      }
      v252 = -1073741801;
      lpMem = v247[1];
      if ( lpMem )
      {
        v253 = GetProcessHeap();
        HeapFree(v253, 0, lpMem);
        v247 = (LPVOID *)v1316;
        *((_QWORD *)v1316 + 1) = 0LL;
      }
      lpMem = v247[3];
      if ( lpMem )
      {
        v254 = GetProcessHeap();
        HeapFree(v254, 0, lpMem);
        v247 = (LPVOID *)v1316;
        *((_QWORD *)v1316 + 3) = 0LL;
      }
      lpMem = v247[5];
      if ( lpMem )
      {
        v255 = GetProcessHeap();
        HeapFree(v255, 0, lpMem);
        *((_QWORD *)v1316 + 5) = 0LL;
      }
      v256 = GetProcessHeap();
      HeapFree(v256, 0, v1316);
    }
    else
    {
      v252 = -1073741801;
    }
LABEL_278:
    Size = (size_t)v78;
    v258 = v81;
    j = (SIZE_T)v81;
    v259 = (const void **)v1320;
    v1316 = v174;
    v260 = GetProcessHeap();
    HeapFree(v260, 0, (LPVOID)v1321);
    v261 = v1317;
    if ( v1317 )
    {
      lpMem = (LPVOID)*((_QWORD *)v1317 + 1);
      if ( lpMem )
      {
        v262 = GetProcessHeap();
        HeapFree(v262, 0, lpMem);
        *((_QWORD *)v261 + 1) = 0LL;
      }
      lpMem = (LPVOID)*((_QWORD *)v261 + 3);
      if ( lpMem )
      {
        v263 = GetProcessHeap();
        HeapFree(v263, 0, lpMem);
        *((_QWORD *)v261 + 3) = 0LL;
      }
      lpMem = (LPVOID)*((_QWORD *)v261 + 5);
      if ( lpMem )
      {
        v264 = GetProcessHeap();
        HeapFree(v264, 0, lpMem);
        *((_QWORD *)v261 + 5) = 0LL;
      }
      v265 = GetProcessHeap();
      HeapFree(v265, 0, v261);
      v1320 = v259;
    }
    v79 = v252 | 0x10000000;
    v174 = (unsigned __int8 *)v1316;
    v1315 = v258;
    v78 = (void *)Size;
    v1308 = v79;
    if ( v79 < 0 )
      goto LABEL_307;
    v266 = *(unsigned int *)v259;
    v1366 = 0;
    LODWORD(dwBytes) = 4;
    v268 = RtlUIntAdd(4LL, v266, &dwBytes);
    if ( v268 >= 0 )
    {
      v268 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
      if ( v268 >= 0 )
      {
        v268 = RtlUIntAdd((unsigned int)dwBytes, *((unsigned int *)v259 + 4), &dwBytes);
        if ( v268 >= 0 )
        {
          v268 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
          if ( v268 >= 0 )
          {
            v268 = RtlUIntAdd((unsigned int)dwBytes, *((unsigned int *)v259 + 8), &dwBytes);
            if ( v268 >= 0 )
            {
              v1366 = dwBytes;
              v269 = dwBytes;
              v270 = GetProcessHeap();
              v271 = HeapAlloc(v270, 8u, v269);
              v273 = v271;
              if ( !v271 )
              {
                v175 = j;
                v79 = -805306345;
                v174 = (unsigned __int8 *)v1316;
                v78 = (void *)Size;
                v1308 = -805306345;
                v1315 = (LPVOID)j;
                goto LABEL_307;
              }
              v1317 = v271;
              *v271 = *(_DWORD *)v259;
              v268 = RtlULongLongAdd(v271, 4LL, &v1317, v272);
              if ( v268 < 0 )
                goto LABEL_302;
              memcpy_0(v1317, v259[1], *(unsigned int *)v259);
              v268 = RtlULongLongAdd(v1317, *(unsigned int *)v259, &v1317, v274);
              if ( v268 < 0 )
                goto LABEL_302;
              v276 = v1317;
              *(_DWORD *)v1317 = *((_DWORD *)v259 + 4);
              v268 = RtlULongLongAdd(v276, 4LL, &v1317, v275);
              if ( v268 < 0
                || (memcpy_0(v1317, v259[3], *((unsigned int *)v259 + 4)),
                    v268 = RtlULongLongAdd(v1317, *((unsigned int *)v259 + 4), &v1317, v277),
                    v268 < 0)
                || (v279 = v1317,
                    *(_DWORD *)v1317 = *((_DWORD *)v259 + 8),
                    v268 = RtlULongLongAdd(v279, 4LL, &v1317, v278),
                    v268 < 0)
                || (memcpy_0(v1317, v259[5], *((unsigned int *)v259 + 8)),
                    v268 = RtlULongLongAdd(v1317, *((unsigned int *)v259 + 8), &v1317, v280),
                    v268 < 0) )
              {
LABEL_302:
                v281 = GetProcessHeap();
                HeapFree(v281, 0, v273);
                v267 = Size;
              }
              else
              {
                v267 = Size;
                LODWORD(v1330) = v1366;
                v1324 = v273;
              }
            }
          }
        }
      }
    }
    v175 = j;
    v79 = v268 | 0x10000000;
    v174 = (unsigned __int8 *)v1316;
    v78 = (void *)v267;
    v1308 = v79;
    v1315 = (LPVOID)j;
    if ( v79 < 0 )
      goto LABEL_307;
    LODWORD(v1319) = 0;
    v1357 = 8;
    v282 = RtlUIntAdd(8LL, (unsigned int)v1334, &v1357);
    v79 = v282 | 0x10000000;
    v1308 = v282 | 0x10000000;
    v1315 = (LPVOID)v175;
    if ( v282 < 0 )
      goto LABEL_307;
    v283 = (v1357 + 7) & 0xFFFFFFF8;
    if ( (unsigned int)v283 < v1357 )
    {
      v79 = -1073741675;
      v1315 = (LPVOID)v175;
      v1308 = -1073741675;
      goto LABEL_307;
    }
    v1362 = (v1357 + 7) & 0xFFFFFFF8;
    v1308 = RtlUIntAdd(v283, 8LL, &v1362);
    v79 = v1308;
    if ( v1308 >= 0 )
    {
      if ( Src[1] && LODWORD(Src[0]) > 1 )
      {
        v302 = Src[1];
        LODWORD(v1311) = 0;
        v175 = j;
        v1315 = (LPVOID)j;
        v1317 = Src[1];
        do
        {
          v79 = RtlULongLongAdd(v302, 4LL, &v1317, v175);
          v1308 = v79;
          if ( v79 < 0 )
            goto LABEL_409;
          v304 = RtlULongLongAdd(v1317, v303, &v1317, v175);
          v305 = 0LL;
          v1308 = v304;
          v79 = v304;
          if ( v304 < 0 )
            goto LABEL_395;
          v302 = v1317;
          LODWORD(v1311) = v1311 + 1;
        }
        while ( !(_DWORD)v1311 );
        LODWORD(v1326) = *(_DWORD *)v1317;
        v1308 = RtlULongLongAdd(v1317, 4LL, &v1317, v175);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_395;
        if ( LODWORD(Src[0]) <= 2 )
        {
          v79 = -1073741811;
LABEL_394:
          v1308 = v79;
LABEL_395:
          v284 = v305;
          goto LABEL_308;
        }
        v307 = Src[1];
        j = (SIZE_T)Src[1];
        do
        {
          LODWORD(v1311) = *v307;
          Size = v306;
          v1334 = (SIZE_T)v78;
          v1317 = (LPVOID)v175;
          v1323 = (SIZE_T)v174;
          v1325 = (SIZE_T)v259;
          v79 = RtlULongLongAdd(v307, 4LL, &j, v175);
          v1308 = v79;
          if ( v79 < 0 )
            goto LABEL_409;
          v79 = RtlULongLongAdd(j, (unsigned int)v1311, &j, v175);
          v1308 = v79;
          if ( v79 < 0 )
            goto LABEL_409;
          v307 = (_DWORD *)j;
        }
        while ( (unsigned int)(v308 + 1) < 2 );
        v284 = 0LL;
        v1308 = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_308;
        LODWORD(dwBytes) = v309;
        v1308 = RtlUIntAdd(v309, v1362, &dwBytes);
        v79 = v1308;
        if ( v1308 < 0 )
          goto LABEL_360;
        v1308 = RtlUIntAdd((unsigned int)dwBytes, v310, &dwBytes);
        v79 = v1308;
        if ( v1308 < 0
          || (v1308 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1326, &dwBytes), v79 = v1308, v1308 < 0)
          || (v1308 = RtlUIntAdd((unsigned int)dwBytes, v311, &dwBytes), v79 = v1308, v1308 < 0)
          || (v1308 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v175, &dwBytes), v79 = v1308, v1308 < 0) )
        {
LABEL_360:
          if ( v79 < 0 )
            goto LABEL_307;
          v312 = (unsigned int)v1319;
        }
        else
        {
          v312 = dwBytes;
        }
        if ( v312 > 0x400000 )
        {
          v79 = -2147418113;
LABEL_364:
          v1308 = v79;
          goto LABEL_308;
        }
        v313 = v312;
        v314 = GetProcessHeap();
        v315 = 0LL;
        v1328 = HeapAlloc(v314, 8u, v313);
        if ( !v1328 )
        {
          v175 = (SIZE_T)v1317;
          v174 = (unsigned __int8 *)v1323;
          v79 = -805306345;
          v1328 = 0LL;
          v78 = (void *)v1334;
          v1308 = -805306345;
          v1320 = (LPVOID)v1325;
          v1315 = v1317;
          v1324 = (LPVOID)Size;
          goto LABEL_308;
        }
        v316 = (void *)Size;
        phModule = 0LL;
        v1373 = 0LL;
        v1374 = 0LL;
        if ( !Size )
        {
          v79 = -2147024809;
LABEL_368:
          v1320 = (LPVOID)v1325;
LABEL_369:
          v175 = (SIZE_T)v1317;
          v174 = (unsigned __int8 *)v1323;
          v78 = (void *)v1334;
          v1315 = v1317;
LABEL_370:
          v1308 = v79;
          v1324 = v316;
          goto LABEL_307;
        }
        LODWORD(v1374) = v1330;
        *(_QWORD *)&v1373 = Size;
        *((_QWORD *)&v1373 + 1) = v1328;
        *(_QWORD *)((char *)&v1374 + 4) = v313;
        if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
          && (v318 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
        {
          v319 = ((__int64 (__fastcall *)(__int64, __int128 *))v318)(134LL, &v1373);
          LODWORD(dwBytes) = v313;
          v79 = v319 | 0x10000000;
          v1308 = v319 | 0x10000000;
          if ( v319 >= 0 )
          {
            v175 = DWORD1(v1374);
            v320 = (void *)v1325;
            v321 = v1323;
            v322 = v1317;
            v323 = v1334;
LABEL_383:
            v1308 = 0;
            v1316 = v1328;
            if ( (unsigned int)v175 < 4 )
            {
              v79 = -805306306;
              v1320 = v320;
              v1308 = -805306306;
              v174 = (unsigned __int8 *)v321;
              v1315 = v322;
              v78 = (void *)v323;
              v1324 = v316;
LABEL_385:
              v284 = 0LL;
              goto LABEL_308;
            }
            v324 = *(unsigned int *)v1328;
            LODWORD(v1311) = *(_DWORD *)v1328;
            v325 = RtlULongLongAdd(v1328, 4LL, &v1316, v175);
            if ( v325 < 0 )
              goto LABEL_434;
            v325 = RtlUIntAdd(0LL, 4LL, &v1308);
            if ( v325 < 0 )
              goto LABEL_434;
            if ( (int)v175 - v1308 < (unsigned int)v324 )
            {
              v175 = (SIZE_T)v1317;
              v79 = -805306306;
              v174 = (unsigned __int8 *)v1323;
              v78 = (void *)v1334;
              v1324 = v316;
              v284 = v326;
              v1308 = -805306306;
              v1315 = v1317;
              v1320 = v327;
              goto LABEL_308;
            }
            pcchLength = (size_t)v1316;
            v325 = RtlULongLongAdd(v1316, v324, &v1316, v175);
            if ( v325 < 0 )
              goto LABEL_434;
            v325 = RtlUIntAdd((unsigned int)v1308, (unsigned int)v324, &v1308);
            if ( v325 < 0 )
              goto LABEL_434;
            if ( (unsigned int)(v175 - v1308) < 4 )
            {
              v175 = (SIZE_T)v1317;
              v79 = -805306306;
              v174 = (unsigned __int8 *)v1323;
              v78 = (void *)v1334;
              v1315 = v1317;
              v1320 = v328;
              v1324 = v316;
              goto LABEL_394;
            }
            LODWORD(v1330) = *(_DWORD *)v1316;
            v325 = RtlULongLongAdd(v1316, 4LL, &v1316, v175);
            if ( v325 < 0 )
              goto LABEL_434;
            v325 = RtlUIntAdd((unsigned int)v1308, 4LL, &v1308);
            if ( v325 < 0 )
              goto LABEL_434;
            if ( (int)v175 - v1308 < (unsigned int)v330 )
            {
LABEL_399:
              v79 = -805306306;
              v1320 = v329;
              goto LABEL_369;
            }
            v1329 = (SIZE_T)v1316;
            v325 = RtlULongLongAdd(v1316, v330, &v1316, v175);
            if ( v325 < 0 )
              goto LABEL_434;
            v325 = RtlUIntAdd((unsigned int)v1308, v331, &v1308);
            if ( v325 < 0 )
              goto LABEL_434;
            if ( (unsigned int)(v175 - v1308) < 4 )
              goto LABEL_399;
            LODWORD(v1321) = *(_DWORD *)v1316;
            v325 = RtlULongLongAdd(v1316, 4LL, &v1316, v175);
            if ( v325 < 0 )
              goto LABEL_434;
            v325 = RtlUIntAdd((unsigned int)v1308, 4LL, &v1308);
            if ( v325 < 0 )
              goto LABEL_434;
            if ( (int)v175 - v1308 < (unsigned int)v1321 )
              goto LABEL_399;
            v325 = RtlUIntAdd((unsigned int)v1308, (unsigned int)v1321, &v1308);
            if ( v325 < 0 )
            {
LABEL_434:
              v79 = v325 | 0x10000000;
              v174 = (unsigned __int8 *)v1323;
              v1308 = v79;
              v78 = (void *)v1334;
              v1320 = (LPVOID)v1325;
              v1315 = v1317;
              v1324 = v316;
              if ( v79 < 0 )
                goto LABEL_307;
              v351 = v1327;
              if ( !v1327 || (v175 = *((_QWORD *)v1327 + 1), (v1340 = (void *)v175) == 0LL) || !*(_DWORD *)v1327 )
              {
                v79 = -805306355;
                v1320 = (LPVOID)v1325;
                v174 = (unsigned __int8 *)v1323;
                v1315 = v1317;
                goto LABEL_370;
              }
              j = *(unsigned int *)v1327 - 8LL;
              v359 = MemoryAlloc(j);
              v360 = (void *)v1325;
              v361 = v359;
              v175 = (SIZE_T)v78;
              v174 = (unsigned __int8 *)v1323;
              v1324 = v316;
              v284 = 0LL;
              v1329 = (SIZE_T)v359;
              v1320 = (LPVOID)v1325;
              v1315 = v1317;
              if ( !v359 )
              {
LABEL_477:
                v79 = -805306367;
                goto LABEL_364;
              }
              v362 = 0;
              v1326 = v1340;
              v1315 = v1317;
              v1311 = j & 7;
              v363 = v1317;
              v1324 = (LPVOID)Size;
              v1310 = 0;
              v1313 = 0x7F1137FAB69605ELL;
              pcchLength = (size_t)v361;
              LODWORD(v1325) = 0;
              v1320 = v360;
              v1316 = (LPVOID)v1323;
              if ( (j & 7) != 0 )
              {
                v1308 = 0;
                LODWORD(v1321) = 0;
                v364 = v360;
                v1319 = v78;
                if ( (_DWORD)v1311 )
                {
                  v365 = 56;
                  v366 = (unsigned __int8 *)v1326;
                  v1324 = (LPVOID)Size;
                  do
                  {
                    v78 = (void *)v175;
                    v1319 = (LPVOID)v175;
                    v174 = (unsigned __int8 *)v1323;
                    v1320 = v360;
                    v364 = v360;
                    v367 = *v366;
                    v1315 = v1317;
                    v1316 = (LPVOID)v1323;
                    if ( (unsigned int)v1321 >= 4 )
                      v1308 |= v367 << v365;
                    else
                      LODWORD(v1325) = (v367 << (v365 - 32)) | v1325;
                    ++v366;
                    LODWORD(v1321) = v1321 + 1;
                    v365 -= 8;
                    v360 = v364;
                  }
                  while ( (int)v1321 < (int)v1311 );
                  v362 = v1310;
                  v1326 = v366;
                  v361 = (_DWORD *)v1329;
                  v363 = v1317;
                  v1327 = v351;
                }
                v368 = v1325 ^ 0x92F65A5;
                LODWORD(v1323) = 0;
                v369 = v1308 ^ 0x699A899C;
                v370 = v1311;
                v371 = v1325 ^ 0x92F65A5;
                if ( (_DWORD)v1311 )
                {
                  v372 = v1308 ^ 0x699A899C;
                  v373 = v361;
                  do
                  {
                    if ( (unsigned int)v1323 >= 4 )
                    {
                      v372 = __ROR4__(v372, 24);
                      v374 = v372;
                    }
                    else
                    {
                      v371 = __ROR4__(v371, 24);
                      v374 = v371;
                    }
                    LODWORD(v1323) = v1323 + 1;
                    v375 = (size_t)(v373 + 1);
                    *v373++ = v374;
                  }
                  while ( (int)v1323 < (int)v370 );
                  v351 = v1327;
                  pcchLength = v375;
                  v362 = v1310;
                }
                if ( v370 <= 4 )
                {
                  v376 = 0;
                  if ( v370 < 4 )
                    v368 = v368 >> (8 * (4 - v370)) << (8 * (4 - v370));
                }
                else
                {
                  v376 = v369 >> (8 * (8 - v370)) << (8 * (8 - v370));
                }
              }
              else
              {
                LODWORD(v1330) = 0;
                v376 = 0;
                LODWORD(v1311) = 0;
                v364 = v360;
                v368 = 0;
                v1308 = -1;
                v1319 = v78;
              }
              v377 = j;
              if ( j >> 3 )
              {
                v378 = HIDWORD(v1313);
                v379 = j >> 3;
                v380 = v1325;
                LODWORD(dwBytes) = 24670;
                v381 = WORD2(v1313);
                LODWORD(v1311) = HIDWORD(v1313) ^ 0xAB69605E;
                LODWORD(v1321) = WORD2(v1313);
                pcchLength += 7LL;
                v382 = (unsigned __int8 *)v1326 + 2;
                v383 = v1308;
                do
                {
                  v384 = v382[1] | ((*v382 | ((*(v382 - 1) | (*(v382 - 2) << 8)) << 8)) << 8);
                  v385 = v384 ^ v368;
                  v386 = v382[5] | ((v382[4] | ((v382[3] | (v382[2] << 8)) << 8)) << 8);
                  lpMem = v382 + 8;
                  v387 = v386 ^ v376 ^ v378 ^ v385 ^ 0xAB69605E;
                  v388 = v385 ^ (__ROR4__(v387, 22) + v381 * __ROR4__(v387 + 1419157410, 27));
                  v389 = v387 ^ (WORD1(v1313) * __ROR4__(v388 + v378, 9) - __ROR4__(v388, 30));
                  v390 = v388 ^ (dwBytes * (v389 - v1321) - (v389 >> 13));
                  v391 = v389 ^ (HIWORD(v1313) * __ROR4__(v390 ^ WORD1(v1313), 26) - __ROR4__(v390, 30));
                  v392 = v390 ^ (v378 - (v391 ^ 0xAB69605E));
                  v393 = v391 ^ (WORD1(v1313) * (v1321 ^ v392)) ^ __ROR4__(v392, 6);
                  v394 = v392 ^ (__ROR4__(v393, 30) + dwBytes * __ROR4__(v393 + v378, 15));
                  v395 = v393 ^ (HIWORD(v1313) * __ROR4__(v394 + 1419157410, 14) - __ROR4__(v394, 24));
                  v396 = v394 ^ __ROR4__(v395, 10) ^ (v1321 * __ROR4__(v395 ^ 0xAB69605E, 12));
                  v397 = v395 ^ (v396 >> 10) ^ (WORD1(v1313) * (v396 ^ HIWORD(v1313)));
                  v398 = v396 ^ (HIWORD(v1313) * (dwBytes + __ROR4__(~v397, 5)));
                  v381 = v1321;
                  v399 = v397 ^ (v398 - HIWORD(v1313)) ^ 0xAB69605E;
                  v400 = v398 ^ ((v399 >> 2) + v1321 * __ROR4__(v399 ^ HIWORD(v1313), 30));
                  v401 = v399 ^ (__ROR4__(v400, 25) + WORD1(v1313) * __ROR4__(v400 - v378, 6));
                  v402 = v400 ^ (dwBytes * (v1321 ^ v401) + __ROR4__(v401, 9));
                  v403 = v401 ^ (__ROR4__(v402, 25) + HIWORD(v1313) * __ROR4__(WORD1(v1313) ^ v402, 27));
                  v404 = v402 ^ v403 ^ v1311;
                  v405 = v403 ^ (v1321 * (__ROR4__(v404, 3) - WORD1(v1313)));
                  v406 = v404 ^ (dwBytes * __ROR4__(v405 - v378, 1) - __ROR4__(v405, 6));
                  v407 = v405 ^ (__ROR4__(v406, 18) + HIWORD(v1313) * __ROR4__(v406 - 1419157410, 29));
                  v408 = v406 ^ (v1321 * __ROR4__(v407 - 1419157410, 17) - __ROR4__(v407, 14));
                  v409 = v383;
                  v383 = v386;
                  v410 = v407 ^ (v408 >> 3) ^ (WORD1(v1313) * (v408 ^ dwBytes));
                  v376 = v410 ^ v409;
                  v411 = __ROR4__(v410 ^ v378, 28);
                  v412 = v410;
                  v413 = (_BYTE *)pcchLength;
                  v414 = v380 ^ __ROR4__(v412, 30) ^ (dwBytes * v411);
                  v380 = v384;
                  v368 = v408 ^ v414;
                  *(_BYTE *)(pcchLength - 4) = v368;
                  *v413 = v376;
                  *(v413 - 5) = __ROR4__(v368, 8);
                  *(v413 - 1) = __ROR4__(v376, 8);
                  *(v413 - 6) = __ROR4__(v368, 16);
                  *(v413 - 2) = __ROR4__(v376, 16);
                  *(v413 - 7) = __ROR4__(v368, 24);
                  *(v413 - 3) = __ROR4__(v376, 24);
                  pcchLength = (size_t)(v413 + 8);
                  v382 = (unsigned __int8 *)lpMem;
                  --v379;
                }
                while ( v379 );
                v362 = v1310;
                v78 = v1319;
                v363 = v1315;
                v364 = v1320;
                v174 = (unsigned __int8 *)v1316;
                v351 = v1327;
                v361 = (_DWORD *)v1329;
                v377 = j;
              }
              for ( i = 0LL; i < v377; ++i )
                v362 ^= *((_BYTE *)v361 + i);
              v416 = v351;
              v1317 = v1328;
              v1311 = (SIZE_T)v351;
              v1327 = v351;
              if ( v362 != *(_QWORD *)((char *)v1340 + v377) )
              {
                MemoryFree(v361);
                v284 = 0LL;
                goto LABEL_477;
              }
              v1319 = v363;
              v175 = (SIZE_T)v363;
              LODWORD(dwBytes) = 0;
              v1326 = v361;
              if ( (unsigned int)j < 4 )
              {
                v1315 = v363;
LABEL_480:
                v1327 = v416;
LABEL_481:
                v417 = -1073741762;
                v1328 = v1317;
                v1320 = v364;
LABEL_482:
                v284 = (SIZE_T)v361;
LABEL_525:
                v79 = v417 | 0x10000000;
                goto LABEL_364;
              }
              LODWORD(v1330) = *v361;
              v417 = RtlULongLongAdd(v361, 4LL, &v1326, v363);
              v1320 = v364;
              v1327 = (LPVOID)v1311;
              v1328 = v1317;
              v1315 = (LPVOID)v175;
              if ( v417 < 0 )
              {
                v284 = v418;
                goto LABEL_525;
              }
              v419 = RtlUIntAdd(0LL, 4LL, &dwBytes);
              v416 = (void *)v1311;
              v417 = v419;
              v420 = (void *)v175;
              v1328 = v1317;
              v1327 = (LPVOID)v1311;
              v1320 = v364;
              v1315 = (LPVOID)v175;
              if ( v419 < 0 )
                goto LABEL_482;
              if ( (unsigned int)(j - dwBytes) < 4 )
                goto LABEL_486;
              LODWORD(v1325) = *(_DWORD *)v1326;
              v417 = RtlULongLongAdd(v1326, 4LL, &v1326, v175);
              v1320 = v364;
              v1327 = (LPVOID)v1311;
              v1328 = v1317;
              v1315 = (LPVOID)v175;
              if ( v417 < 0 )
                goto LABEL_482;
              v421 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
              v416 = (void *)v1311;
              v417 = v421;
              v420 = (void *)v175;
              v1328 = v1317;
              v1327 = (LPVOID)v1311;
              v1320 = v364;
              v1315 = (LPVOID)v175;
              if ( v421 < 0 )
                goto LABEL_482;
              v175 = (unsigned int)v1325;
              if ( (int)j - (int)dwBytes < (unsigned int)v1325 )
              {
LABEL_486:
                v1315 = v420;
                goto LABEL_480;
              }
              v417 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1325, &dwBytes);
              v1327 = (LPVOID)v1311;
              v1328 = v1317;
              v1320 = v364;
              v1315 = v1319;
              if ( v417 < 0 )
                goto LABEL_482;
              v423 = (unsigned int)v175;
              v175 = (unsigned int)j;
              if ( (char *)v361 + (unsigned int)j < (char *)v1326 + v423
                || (v175 = (SIZE_T)v361 + (unsigned int)j - (_QWORD)v1326 - v423, v175 >= 8) )
              {
                v174 = v422;
                v1327 = (LPVOID)v1311;
                v1315 = v1319;
                goto LABEL_481;
              }
              v424 = v1317;
              j = 0LL;
              v417 = 0;
              pcchLength = 0LL;
              v1329 = 0LL;
              LODWORD(v1321) = 0;
              v1327 = (LPVOID)v1311;
              v1313 = (SIZE_T)v361;
              v1328 = v1317;
              v1320 = v364;
              v1316 = v422;
              v1315 = v1319;
              if ( v1326 )
              {
                v1334 = (SIZE_T)v1326;
                v417 = RtlULongLongAdd(v1326, (unsigned int)v1325, &j, v175);
                v427 = 0;
                v1328 = v424;
                v174 = v426;
                v1327 = (LPVOID)v1311;
                v1320 = v364;
                v1315 = v1319;
                if ( v417 < 0 )
                {
                  v284 = v425;
                  goto LABEL_520;
                }
                v175 = v1334;
                v1313 = v425;
                v1327 = (LPVOID)v1311;
                v1328 = v1317;
                v1320 = v364;
                v1316 = v426;
                v1315 = v1319;
                if ( v1334 < j )
                {
                  v1313 = v425;
                  v1328 = v1317;
                  v428 = v1319;
                  v1327 = (LPVOID)v1311;
                  v1320 = v364;
                  v1315 = v1319;
                  while ( 1 )
                  {
                    v1340 = v364;
                    v284 = v1313;
                    Size = v1313;
                    lpMem = v428;
                    v417 = RtlULongLongAdd(v175, 4LL, &pcchLength, v175);
                    if ( v417 < 0 )
                      goto LABEL_525;
                    if ( pcchLength > j )
                    {
                      v417 = -1073741811;
                      goto LABEL_525;
                    }
                    v429 = *(unsigned int *)v175;
                    LODWORD(v1311) = 0;
                    v417 = RtlUIntAdd(4LL, v429, &v1311);
                    if ( v417 < 0 )
                      goto LABEL_525;
                    v417 = RtlULongLongAdd(v175, (unsigned int)v1311, &v1329, v175);
                    v1313 = v284;
                    v364 = v1340;
                    v1327 = v430;
                    v1328 = v431;
                    v1320 = v1340;
                    v1315 = lpMem;
                    if ( v417 < 0 )
                    {
                      v284 = v1313;
                      v427 = 0;
                      goto LABEL_520;
                    }
                    v175 = v1329;
                    v432 = j;
                    v1334 = v1329;
                    v1327 = v430;
                    v1328 = v431;
                    v1320 = v1340;
                    if ( v1329 > j )
                    {
                      v284 = Size;
                      v417 = -1073741811;
                      v1315 = lpMem;
                      goto LABEL_525;
                    }
                    LODWORD(v1321) = v1321 + 1;
                    v1313 = Size;
                    v428 = lpMem;
                    v1315 = lpMem;
                    if ( v1329 >= j )
                    {
                      v1313 = Size;
                      v1327 = v430;
                      v1328 = v431;
                      v1320 = v1340;
                      v1316 = v174;
                      v1315 = lpMem;
                      goto LABEL_507;
                    }
                  }
                }
                v432 = j;
LABEL_507:
                if ( v175 != v432 )
                {
                  v417 = -1073741811;
LABEL_509:
                  v284 = v1313;
                  goto LABEL_525;
                }
              }
              v433 = v1325;
              if ( (_DWORD)v1325 )
              {
                v434 = v1325;
                v435 = GetProcessHeap();
                v436 = HeapAlloc(v435, 8u, v434);
                if ( !v436 )
                {
                  v174 = (unsigned __int8 *)v1316;
                  v417 = -1073741801;
                  v1322 = 0LL;
                  v1337 = 0;
                  goto LABEL_509;
                }
                v433 = v1325;
                v417 = 0;
              }
              else
              {
                v436 = 0LL;
              }
              if ( v1326 )
                memcpy_0(v436, v1326, v433);
              v427 = v1321;
              v284 = v1313;
              v1322 = v436;
              v174 = (unsigned __int8 *)v1316;
              v1337 = v1321;
LABEL_520:
              if ( v417 >= 0 && (_DWORD)v1330 != v427 )
                v417 = -1073741762;
              goto LABEL_525;
            }
            if ( (_DWORD)v175 != v1308 )
            {
              v175 = (SIZE_T)v1317;
              v79 = -805306306;
              v174 = (unsigned __int8 *)v1323;
              v78 = (void *)v1334;
              v1308 = -805306306;
              v1315 = v1317;
              v1320 = v329;
              v1324 = v316;
LABEL_409:
              v284 = 0LL;
LABEL_308:
              if ( !v174 )
              {
LABEL_310:
                v286 = v1320;
                if ( v1320 )
                {
                  lpMem = (LPVOID)*((_QWORD *)v1320 + 1);
                  if ( lpMem )
                  {
                    v287 = GetProcessHeap();
                    HeapFree(v287, 0, lpMem);
                    *((_QWORD *)v286 + 1) = 0LL;
                  }
                  lpMem = (LPVOID)*((_QWORD *)v286 + 3);
                  if ( lpMem )
                  {
                    v288 = GetProcessHeap();
                    HeapFree(v288, 0, lpMem);
                    *((_QWORD *)v286 + 3) = 0LL;
                  }
                  lpMem = (LPVOID)*((_QWORD *)v286 + 5);
                  if ( lpMem )
                  {
                    v289 = GetProcessHeap();
                    HeapFree(v289, 0, lpMem);
                    *((_QWORD *)v286 + 5) = 0LL;
                  }
                  v290 = GetProcessHeap();
                  HeapFree(v290, 0, v286);
                }
                v291 = v1324;
                if ( v1324 )
                {
                  v292 = GetProcessHeap();
                  HeapFree(v292, 0, v291);
                }
                v293 = v1328;
                if ( v1328 )
                {
                  v294 = GetProcessHeap();
                  HeapFree(v294, 0, v293);
                }
                v295 = v1327;
                if ( v1327 )
                {
                  lpMem = (LPVOID)*((_QWORD *)v1327 + 1);
                  if ( lpMem )
                  {
                    v296 = GetProcessHeap();
                    HeapFree(v296, 0, lpMem);
                    *((_QWORD *)v295 + 1) = 0LL;
                  }
                  lpMem = (LPVOID)*((_QWORD *)v295 + 3);
                  if ( lpMem )
                  {
                    v297 = GetProcessHeap();
                    HeapFree(v297, 0, lpMem);
                    *((_QWORD *)v295 + 3) = 0LL;
                  }
                  lpMem = (LPVOID)*((_QWORD *)v295 + 5);
                  if ( lpMem )
                  {
                    v298 = GetProcessHeap();
                    HeapFree(v298, 0, lpMem);
                    *((_QWORD *)v295 + 5) = 0LL;
                  }
                  v299 = GetProcessHeap();
                  HeapFree(v299, 0, v295);
                }
                if ( v284 )
                {
                  v300 = GetProcessHeap();
                  HeapFree(v300, 0, (LPVOID)v284);
                }
                v81 = v1315;
                goto LABEL_333;
              }
LABEL_309:
              v285 = GetProcessHeap();
              HeapFree(v285, 0, v174);
              goto LABEL_310;
            }
            if ( (unsigned int)(v324 + v332 + v1321) + 12LL != (unsigned int)v175 )
              goto LABEL_399;
            v333 = GetProcessHeap();
            v334 = HeapAlloc(v333, 8u, 0x30uLL);
            if ( !v334 )
            {
              v1327 = 0LL;
              v79 = -805306345;
              goto LABEL_368;
            }
            v325 = 0;
            if ( pcchLength )
            {
              v335 = (unsigned int)v1311;
              *(_DWORD *)v334 = v1311;
              v336 = v335;
              lpMem = (LPVOID)v335;
              v337 = GetProcessHeap();
              v338 = HeapAlloc(v337, 8u, v336);
              if ( !v338 )
                goto LABEL_422;
              *((_QWORD *)v334 + 1) = v338;
              v325 = 0;
              memcpy_0(v338, (const void *)pcchLength, (size_t)lpMem);
            }
            else
            {
              *(_DWORD *)v334 = 0;
              *((_QWORD *)v334 + 1) = 0LL;
            }
            if ( !v1329 )
            {
              *((_DWORD *)v334 + 4) = 0;
              *((_QWORD *)v334 + 3) = 0LL;
LABEL_420:
              if ( v1316 )
              {
                v343 = (unsigned int)v1321;
                *((_DWORD *)v334 + 8) = v1321;
                v344 = v343;
                lpMem = (LPVOID)v343;
                v345 = GetProcessHeap();
                v346 = HeapAlloc(v345, 8u, v344);
                if ( !v346 )
                  goto LABEL_422;
                *((_QWORD *)v334 + 5) = v346;
                v325 = 0;
                memcpy_0(v346, v1316, (size_t)lpMem);
              }
              else
              {
                *((_DWORD *)v334 + 8) = 0;
                *((_QWORD *)v334 + 5) = 0LL;
              }
              v315 = v334;
LABEL_432:
              if ( v325 < 0 )
              {
                v1327 = 0LL;
                if ( v315 )
                {
                  v352 = (void *)v315[1];
                  if ( v352 )
                  {
                    v353 = GetProcessHeap();
                    HeapFree(v353, 0, v352);
                    v315[1] = 0LL;
                  }
                  v354 = (void *)v315[3];
                  if ( v354 )
                  {
                    v355 = GetProcessHeap();
                    HeapFree(v355, 0, v354);
                    v315[3] = 0LL;
                  }
                  v356 = (void *)v315[5];
                  if ( v356 )
                  {
                    v357 = GetProcessHeap();
                    HeapFree(v357, 0, v356);
                    v315[5] = 0LL;
                  }
                  v358 = GetProcessHeap();
                  HeapFree(v358, 0, v315);
                  v1327 = 0LL;
                }
              }
              else
              {
                v1327 = v315;
              }
              goto LABEL_434;
            }
            v339 = (unsigned int)v1330;
            *((_DWORD *)v334 + 4) = v1330;
            v340 = v339;
            lpMem = (LPVOID)v339;
            v341 = GetProcessHeap();
            v342 = HeapAlloc(v341, 8u, v340);
            if ( v342 )
            {
              *((_QWORD *)v334 + 3) = v342;
              v325 = 0;
              memcpy_0(v342, (const void *)v1329, (size_t)lpMem);
              goto LABEL_420;
            }
LABEL_422:
            v325 = -1073741801;
            lpMem = (LPVOID)*((_QWORD *)v334 + 1);
            if ( lpMem )
            {
              v347 = GetProcessHeap();
              HeapFree(v347, 0, lpMem);
              *((_QWORD *)v334 + 1) = 0LL;
            }
            lpMem = (LPVOID)*((_QWORD *)v334 + 3);
            if ( lpMem )
            {
              v348 = GetProcessHeap();
              HeapFree(v348, 0, lpMem);
              *((_QWORD *)v334 + 3) = 0LL;
            }
            lpMem = (LPVOID)*((_QWORD *)v334 + 5);
            if ( lpMem )
            {
              v349 = GetProcessHeap();
              HeapFree(v349, 0, lpMem);
              *((_QWORD *)v334 + 5) = 0LL;
            }
            v350 = GetProcessHeap();
            HeapFree(v350, 0, v334);
            goto LABEL_432;
          }
        }
        else
        {
          v317 = GetLastError();
          v1308 = v317;
          v79 = v317;
          if ( v317 > 0 )
          {
            v79 = (unsigned __int16)v317 | 0x80070000;
            v1308 = v79;
          }
          LODWORD(dwBytes) = v313;
          if ( v79 >= 0 )
          {
            v79 = -2147467259;
            LODWORD(dwBytes) = v313;
            v1308 = -2147467259;
          }
        }
        v1324 = v316;
        if ( v79 == -805306333 )
        {
          v79 = -2147024774;
          v175 = (SIZE_T)v1317;
          v174 = (unsigned __int8 *)v1323;
          v78 = (void *)v1334;
          v1308 = -2147024774;
          v1320 = (LPVOID)v1325;
          v1315 = v1317;
          goto LABEL_307;
        }
        v320 = (void *)v1325;
        v321 = v1323;
        v322 = v1317;
        v174 = (unsigned __int8 *)v1323;
        v323 = v1334;
        v1320 = (LPVOID)v1325;
        v78 = (void *)v1334;
        v1315 = v1317;
        if ( v79 < 0 )
          goto LABEL_385;
        v175 = (unsigned int)dwBytes;
        v315 = 0LL;
        goto LABEL_383;
      }
      v79 = -1073741811;
      v1308 = -1073741811;
    }
    v175 = j;
    v1315 = (LPVOID)j;
    goto LABEL_307;
  }
  v178 = (v1347 + 7) & 0xFFFFFFF8;
  if ( v178 < v1347 )
  {
    v79 = -805306219;
    goto LABEL_589;
  }
  v1347 = (v1347 + 7) & 0xFFFFFFF8;
  v179 = v178;
  v180 = GetProcessHeap();
  v181 = (unsigned __int8 *)HeapAlloc(v180, 8u, v179);
  v174 = v181;
  if ( v181 )
  {
    Size = (size_t)v181;
    *(_DWORD *)v181 = Src[0];
    v182 = RtlULongLongAdd(v181, 4LL, &Size, v175);
    pcchLength = (size_t)v174;
    v177 = v182;
    if ( v182 < 0
      || (v185 = Size,
          *(_DWORD *)Size = HIDWORD(Src[0]),
          v186 = RtlULongLongAdd(v185, v184, &Size, v183),
          pcchLength = (size_t)v174,
          v177 = v186,
          v186 < 0) )
    {
      v187 = GetProcessHeap();
      HeapFree(v187, 0, (LPVOID)pcchLength);
      v174 = (unsigned __int8 *)v1316;
      v175 = (unsigned int)v1316;
    }
    else
    {
      *(_QWORD *)&v174[v1347 - 8] = lpMem;
      memcpy_0((void *)Size, Src[1], HIDWORD(Src[0]));
      v175 = v1347;
      v1316 = v174;
    }
    v176 = 0LL;
    goto LABEL_230;
  }
  v79 = -805306345;
  v1308 = -805306345;
LABEL_333:
  if ( v79 < 0 )
    goto LABEL_590;
  v301 = v1337;
  if ( !v1337 )
    goto LABEL_335;
  if ( !v1322 )
  {
LABEL_529:
    v79 = -1073741811;
    goto LABEL_589;
  }
  pcchLength = (size_t)v1322;
  v79 = RtlULongLongAdd(v1322, 4LL, &pcchLength, v175);
  v1308 = v79;
  if ( v79 < 0 )
  {
LABEL_535:
    v1322 = v437;
    goto LABEL_590;
  }
  v439 = (int *)pcchLength;
  if ( !*v438 )
    v439 = 0LL;
  if ( *v438 != 4 )
  {
    v79 = -1073741789;
    v1308 = -1073741789;
    goto LABEL_535;
  }
  v79 = *v439;
  v1308 = v79;
  if ( v79 == -805306333 )
  {
    LODWORD(v1321) = -2147024774;
  }
  else
  {
    LODWORD(v1321) = v79;
    if ( v79 != -2147024774 )
    {
      LODWORD(v1321) = v79;
      v1322 = v437;
      if ( v79 < 0 )
        goto LABEL_590;
    }
  }
  v1322 = v437;
  if ( v301 != 6 )
  {
LABEL_335:
    v79 = -1073425151;
    goto LABEL_589;
  }
  j = (SIZE_T)v437;
  while ( 1 )
  {
    v1308 = RtlULongLongAdd(v437, 4LL, &j, *v437);
    v79 = v1308;
    if ( v1308 < 0 )
      break;
    v1308 = RtlULongLongAdd(j, (unsigned int)v440, &j, v440);
    v79 = v1308;
    if ( v1308 < 0 )
      break;
    v437 = (unsigned int *)j;
    if ( v441 != -1 )
    {
      v1308 = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
      v79 = v1308;
      if ( v1308 < 0 )
        break;
      v443 = (void **)j;
      if ( !v442 )
        v443 = 0LL;
      if ( v442 == 8 )
      {
        v444 = 0LL;
        v445 = *v443;
        v446 = v1322;
        j = (SIZE_T)v1322;
        lpMem = v445;
        while ( 1 )
        {
          v1308 = RtlULongLongAdd(v446, 4LL, &j, v444);
          v79 = v1308;
          if ( v1308 < 0 )
            goto LABEL_590;
          v1308 = RtlULongLongAdd(j, v448, &j, v447);
          v79 = v1308;
          if ( v1308 < 0 )
            goto LABEL_590;
          v446 = (LPVOID)j;
          v444 = (unsigned int)(v449 + 1);
          if ( (unsigned int)v444 >= 2 )
          {
            v1308 = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
            v79 = v1308;
            if ( v1308 < 0 )
              goto LABEL_590;
            v452 = (int *)j;
            if ( !v450 )
              v452 = 0LL;
            if ( v450 == 4 )
            {
              v453 = *v452;
              v454 = v451;
              j = v451;
              v455 = 0LL;
              LODWORD(v1311) = v453;
              while ( 1 )
              {
                v1308 = RtlULongLongAdd(v454, 4LL, &j, v455);
                v79 = v1308;
                if ( v1308 < 0 )
                  goto LABEL_590;
                v1308 = RtlULongLongAdd(j, v457, &j, v456);
                v79 = v1308;
                if ( v1308 < 0 )
                  goto LABEL_590;
                v454 = j;
                v455 = (unsigned int)(v458 + 1);
                if ( (unsigned int)v455 >= 3 )
                {
                  v1308 = RtlULongLongAdd(j, 4LL, &j, v455);
                  v79 = v1308;
                  if ( v1308 >= 0 )
                  {
                    v459 = (unsigned int *)v1322;
                    v460 = 0LL;
                    j = (SIZE_T)v1322;
                    while ( 1 )
                    {
                      v461 = *v459;
                      v1308 = RtlULongLongAdd(v459, 4LL, &j, v460);
                      v79 = v1308;
                      if ( v1308 < 0 )
                        break;
                      v1308 = RtlULongLongAdd(j, v461, &j, v462);
                      v79 = v1308;
                      if ( v1308 < 0 )
                        break;
                      v459 = (unsigned int *)j;
                      v460 = (unsigned int)(v463 + 1);
                      if ( (unsigned int)v460 >= 4 )
                      {
                        v1308 = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
                        v79 = v1308;
                        if ( v1308 < 0 )
                          goto LABEL_590;
                        v465 = (int *)j;
                        if ( !v464 )
                          v465 = 0LL;
                        if ( v464 == 4 )
                        {
                          v466 = v1322;
                          v467 = 0LL;
                          v468 = *v465;
                          v469 = (unsigned int *)v1322;
                          j = (SIZE_T)v1322;
                          LODWORD(v1330) = v468;
                          while ( 1 )
                          {
                            v470 = *v469;
                            pcchLength = (size_t)v466;
                            v1308 = RtlULongLongAdd(v469, 4LL, &j, v467);
                            v79 = v1308;
                            if ( v1308 < 0 )
                              goto LABEL_590;
                            v1308 = RtlULongLongAdd(j, v470, &j, v471);
                            v79 = v1308;
                            if ( v1308 < 0 )
                              goto LABEL_590;
                            v469 = (unsigned int *)j;
                            v467 = (unsigned int)(v472 + 1);
                            if ( (unsigned int)v467 >= 5 )
                            {
                              v79 = RtlULongLongAdd(j, 4LL, &j, *(unsigned int *)j);
                              v1308 = v79;
                              if ( v79 < 0 )
                                goto LABEL_589;
                              v476 = (int *)j;
                              if ( !v473 )
                                v476 = 0LL;
                              if ( v473 != 4 )
                                goto LABEL_125;
                              v477 = *v476;
                              if ( (LPVOID)v1342 != lpMem )
                                goto LABEL_335;
                              v1354 = v1311;
                              v1344 = v477;
                              if ( (unsigned int)v1330 > 4 || (unsigned int)v474 > 4 )
                              {
                                v79 = -2147024774;
                                goto LABEL_589;
                              }
                              memcpy_0((void *)lpModuleName, v475, v474);
                              v1322 = (LPVOID)pcchLength;
                              v1354 = v1311;
                              v1344 = v477;
                              if ( (_DWORD)v1321 )
                              {
                                v79 = v1321;
                                v1308 = v1321;
                                v1354 = v1311;
                                v1344 = v477;
                                v1322 = (LPVOID)pcchLength;
                              }
                              goto LABEL_590;
                            }
                            v466 = v1322;
                          }
                        }
                        goto LABEL_125;
                      }
                    }
                  }
                  goto LABEL_590;
                }
              }
            }
            goto LABEL_125;
          }
        }
      }
      goto LABEL_125;
    }
  }
LABEL_590:
  v478 = Src[1];
  Src[0] = 0LL;
  if ( Src[1] )
  {
    v479 = GetProcessHeap();
    HeapFree(v479, 0, v478);
    Src[1] = 0LL;
  }
  v480 = v1322;
  if ( v1322 )
  {
    v481 = GetProcessHeap();
    HeapFree(v481, 0, v480);
  }
  if ( v78 )
  {
    v482 = GetProcessHeap();
    HeapFree(v482, 0, v78);
  }
  if ( v81 )
  {
    v483 = GetProcessHeap();
    HeapFree(v483, 0, v81);
  }
  v484 = 0LL;
  if ( v79 >= 0 )
  {
    if ( !v1344 )
    {
LABEL_1228:
      v80 = v1354;
      v1369 = v1365;
      v1365 = 0LL;
      goto LABEL_1567;
    }
    v1338 = 0LL;
    dword_1808DA538 = v1344;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    {
LABEL_1199:
      SH<void *,SH_HANDLE>::Reset(&v1338);
      v968 = 0LL;
      *(_OWORD *)v1341 = 0LL;
      v1337 = 0;
      v1320 = 0LL;
      v969 = GetProcessHeap();
      v970 = HeapAlloc(v969, 8u, 0xA0uLL);
      if ( !v970 )
      {
        v975 = 0LL;
        goto LABEL_1219;
      }
      *v970 = xmmword_1808D8540[0];
      v970[1] = xmmword_1808D8540[1];
      v970[2] = xmmword_1808D8540[2];
      v970[3] = xmmword_1808D8540[3];
      v970[4] = xmmword_1808D8540[4];
      v970[5] = xmmword_1808D8540[5];
      v970[6] = xmmword_1808D8540[6];
      v970[7] = xmmword_1808D8540[7];
      v970[8] = xmmword_1808D8540[8];
      v970[9] = xmmword_1808D8540[9];
      v971 = GetProcessHeap();
      v972 = HeapAlloc(v971, 8u, 8uLL);
      if ( !v972 )
      {
        v484 = 0LL;
        v975 = v970;
        goto LABEL_1219;
      }
      *v972 = qword_1808D8690;
      lpModuleName = (LPCWSTR)__rdtsc();
      LODWORD(dwBytes) = 0;
      v1309 = 0;
      v973 = RtlUIntAdd(4LL, 4LL, &v1309);
      v484 = v974;
      v975 = v970;
      if ( v973 < 0 )
        goto LABEL_1218;
      if ( (int)RtlUIntAdd(0LL, v1309, &dwBytes) < 0 )
        goto LABEL_1218;
      v1309 = 0;
      if ( (int)RtlUIntAdd(4LL, 160LL, &v1309) < 0 )
        goto LABEL_1218;
      v976 = RtlUIntAdd((unsigned int)dwBytes, v1309, &dwBytes);
      if ( (v977 | v976) < 0 )
        goto LABEL_1218;
      v1309 = 0;
      if ( (int)RtlUIntAdd(4LL, 8LL, &v1309) < 0 )
        goto LABEL_1218;
      v978 = RtlUIntAdd((unsigned int)dwBytes, v1309, &dwBytes);
      if ( (v979 | v978) < 0 )
        goto LABEL_1218;
      v1309 = 0;
      if ( (int)RtlUIntAdd(4LL, 8LL, &v1309) < 0 )
        goto LABEL_1218;
      v980 = RtlUIntAdd((unsigned int)dwBytes, v1309, &dwBytes);
      if ( (v981 | v980) < 0 )
        goto LABEL_1218;
      HIDWORD(v1341[0]) = dwBytes;
      v982 = dwBytes;
      v983 = GetProcessHeap();
      v984 = HeapAlloc(v983, 8u, v982);
      v968 = 0LL;
      if ( v984 )
      {
        v1341[1] = (size_t)v984;
        LODWORD(v1346) = 0;
        v1345 = 0LL;
        LODWORD(v1341[0]) = 0;
        v1316 = v970;
        pcchLength = (size_t)v984;
        v1322 = v484;
        if ( (int)RtlULongLongAdd(v984, 4LL, &v1346, v484) < 0 )
          goto LABEL_1563;
        if ( v986 + 2 > (_DWORD *)((char *)v986 + HIDWORD(v1341[0])) )
          goto LABEL_1218;
        v987 = v1346;
        *v986 = 4;
        *v987 = 4;
        v988 = ++LODWORD(v1341[0]);
        LODWORD(v1333) = 0;
        lpMem = 0LL;
        if ( !v985 )
          goto LABEL_1218;
        if ( v1341[1] )
        {
          v994 = (unsigned int *)v1341[1];
          pcchLength = v1341[1];
          LODWORD(v1311) = 0;
          if ( v988 )
          {
            do
            {
              v995 = *v994;
              v1309 = 0;
              if ( (int)RtlUIntAdd(4LL, v995, &v1309) < 0 || (int)RtlULongLongAdd(v996, v1309, &pcchLength, v996) < 0 )
                goto LABEL_1563;
              v994 = (unsigned int *)pcchLength;
              LODWORD(v1311) = v1311 + 1;
              v1322 = v484;
              v1316 = v970;
            }
            while ( (unsigned int)v1311 < v997 );
          }
          if ( (int)RtlULongLongAdd(v994, 4LL, &v1333, v994) < 0
            || (unsigned __int64)v998 + v999 + 4 > v1341[1] + HIDWORD(v1341[0]) )
          {
            v968 = 0LL;
            goto LABEL_1219;
          }
          *v998 = v999;
          memcpy_0(v1333, v970, v999);
        }
        else
        {
          v1309 = 0;
          if ( (int)RtlUIntAdd(4LL, v985, &v1309) < 0 )
          {
            v968 = 0LL;
            goto LABEL_1219;
          }
          if ( (int)RtlUIntAdd(HIDWORD(v1341[0]), v1309, (char *)v1341 + 4) < 0 )
            goto LABEL_1218;
        }
        v1000 = (unsigned int)(LODWORD(v1341[0]) + 1);
        LODWORD(v1333) = 0;
        ++LODWORD(v1341[0]);
        lpMem = 0LL;
        if ( v484 )
        {
          if ( !v1341[1] )
          {
            v1309 = 0;
            v968 = 0LL;
            if ( (int)RtlUIntAdd(4LL, 8LL, &v1309) < 0 )
              goto LABEL_1219;
            if ( (int)RtlUIntAdd(HIDWORD(v1341[0]), v1309, (char *)v1341 + 4) < 0 )
              goto LABEL_1218;
            goto LABEL_1248;
          }
          v1001 = (unsigned int *)v1341[1];
          pcchLength = v1341[1];
          if ( (_DWORD)v1000 )
          {
            while ( 1 )
            {
              v1002 = *v1001;
              v1309 = 0;
              if ( (int)RtlUIntAdd(4LL, v1002, &v1309) < 0 || (int)RtlULongLongAdd(v1004, v1309, &pcchLength, v1003) < 0 )
                break;
              v1001 = (unsigned int *)pcchLength;
              v1322 = v484;
              v1316 = v970;
              if ( v1005 + 1 >= (unsigned int)v1000 )
                goto LABEL_1245;
            }
          }
          else
          {
LABEL_1245:
            if ( (int)RtlULongLongAdd(v1001, 4LL, &v1333, v1000) >= 0 )
            {
              if ( (unsigned __int64)(v1006 + 3) > v1341[1] + HIDWORD(v1341[0]) )
                goto LABEL_1218;
              *v1006 = 8;
              memcpy_0(v1333, v484, 8uLL);
LABEL_1248:
              v1007 = (unsigned int)(LODWORD(v1341[0]) + 1);
              LODWORD(v1346) = 0;
              ++LODWORD(v1341[0]);
              v1345 = 0LL;
              if ( v1341[1] )
              {
                v1008 = (unsigned int *)v1341[1];
                pcchLength = v1341[1];
                if ( (_DWORD)v1007 )
                {
                  do
                  {
                    v1009 = *v1008;
                    v1309 = 0;
                    if ( (int)RtlUIntAdd(4LL, v1009, &v1309) < 0 )
                      goto LABEL_1218;
                    if ( (int)RtlULongLongAdd(v1011, v1309, &pcchLength, v1010) < 0 )
                      goto LABEL_1563;
                    v1008 = (unsigned int *)pcchLength;
                    v1316 = v970;
                    v1322 = v484;
                  }
                  while ( v1012 + 1 < (unsigned int)v1007 );
                }
                if ( (int)RtlULongLongAdd(v1008, 4LL, &v1346, v1007) < 0
                  || (unsigned __int64)(v1013 + 3) > v1341[1] + HIDWORD(v1341[0]) )
                {
                  goto LABEL_1218;
                }
                v1014 = (LPCWSTR *)v1346;
                v1015 = lpModuleName;
                *v1013 = 8;
                *v1014 = v1015;
              }
              else
              {
                v1309 = 0;
                if ( (int)RtlUIntAdd(4LL, 8LL, &v1309) < 0
                  || (int)RtlUIntAdd(HIDWORD(v1341[0]), v1309, (char *)v1341 + 4) < 0 )
                {
                  goto LABEL_1218;
                }
              }
              ++LODWORD(v1341[0]);
              v1309 = 0;
              if ( (int)RtlUIntAdd(4LL, 4LL, &v1309) < 0 )
                goto LABEL_1218;
              LODWORD(v1311) = v1309;
              v1309 = 0;
              if ( (int)RtlUIntAdd(v1016, (unsigned int)(v1016 + 4), &v1309) < 0
                || (int)RtlUIntAdd(v1017, v1309, &v1311) < 0 )
              {
                goto LABEL_1218;
              }
              LODWORD(v1326) = v1311;
              LODWORD(v1311) = 0;
              v1319 = 0LL;
              LODWORD(v1313) = 0;
              v1315 = 0LL;
              v1327 = 0LL;
              v1328 = 0LL;
              v1321 = 0LL;
              v1325 = 0LL;
              v1338 = __rdtsc();
              v1349 = 8;
              v1018 = RtlUIntAdd(8LL, HIDWORD(v1341[0]), &v1349);
              if ( v1018 >= 0 )
              {
                v1020 = (v1349 + 7) & 0xFFFFFFF8;
                if ( v1020 < v1349 )
                  goto LABEL_1218;
                v1349 = (v1349 + 7) & 0xFFFFFFF8;
                v1021 = v1020;
                v1022 = GetProcessHeap();
                v1023 = (WCHAR *)HeapAlloc(v1022, 8u, v1021);
                v1345 = v1023;
                if ( !v1023 )
                {
                  v1030 = -805306345;
                  goto LABEL_1546;
                }
                Size = (size_t)v1023;
                *(_DWORD *)v1023 = v1341[0];
                v1024 = RtlULongLongAdd(v1023, 4LL, &Size, v1023);
                lpMem = v1025;
                v1018 = v1024;
                if ( v1024 < 0
                  || (v1027 = Size,
                      *(_DWORD *)Size = HIDWORD(v1341[0]),
                      v1028 = RtlULongLongAdd(v1027, v1026, &Size, v1025),
                      lpMem = v1029,
                      v1018 = v1028,
                      v1028 < 0) )
                {
                  v1046 = GetProcessHeap();
                  HeapFree(v1046, 0, lpMem);
                  v1019 = v1313;
                }
                else
                {
                  *(_QWORD *)&v1029[v1349 - 8] = v1338;
                  memcpy_0((void *)Size, (const void *)v1341[1], HIDWORD(v1341[0]));
                  v1019 = v1349;
                  v1319 = (LPVOID)v1345;
                }
              }
              v1030 = v1018 | 0x10000000;
              if ( v1030 < 0 )
              {
                v1110 = v1319;
                goto LABEL_1522;
              }
              v1031 = (unsigned __int8 *)v1319;
              v1317 = 0LL;
              if ( v1319 )
              {
                pcchLength = v1019;
                if ( !v1019
                  || (v1329 = v1019 + 8LL,
                      v1032 = MemoryAlloc(v1329),
                      v1033 = 0,
                      v1340 = v1032,
                      (v1034 = (size_t)v1032) == 0) )
                {
                  v1030 = -805306367;
                  goto LABEL_1523;
                }
                v1035 = pcchLength;
                v1036 = 0;
                v1310 = 0;
                v1037 = 0LL;
                if ( pcchLength )
                {
                  do
                    v1036 ^= v1031[v1037++];
                  while ( v1037 < pcchLength );
                  v1310 = v1036;
                }
                v1324 = (LPVOID)0xC81ECB17B1B54A58LL;
                LODWORD(v1323) = 0;
                v1038 = -1;
                LODWORD(v1334) = 0;
                v1039 = v1031;
                Size = v1034;
                v1040 = pcchLength & 7;
                if ( (pcchLength & 7) != 0 )
                {
                  LODWORD(v1323) = 0;
                  v1041 = 0;
                  v1309 = 0;
                  LODWORD(v1334) = 0;
                  v1042 = 56;
                  v1043 = 0;
                  v1044 = 0;
                  do
                  {
                    v1045 = *v1039;
                    if ( v1041 >= 4 )
                      v1043 |= v1045 << v1042;
                    else
                      v1044 |= v1045 << (v1042 - 32);
                    ++v1039;
                    v1041 = v1309 + 1;
                    v1042 -= 8;
                    v1309 = v1041;
                  }
                  while ( (int)v1041 < (int)v1040 );
                  LODWORD(v1334) = v1044;
                  LODWORD(v1323) = v1043;
                  v1319 = v1031;
                  v1322 = v484;
                  v1316 = v970;
                  v1033 = v1044 ^ 0xB17A307A;
                  v1047 = v1043 ^ 0x42F6B18D;
                  LODWORD(v1313) = 0;
                  v1048 = v1044 ^ 0xB17A307A;
                  v1049 = v1043 ^ 0x42F6B18D;
                  if ( (pcchLength & 7) != 0 )
                  {
                    v1050 = (_BYTE *)Size;
                    v1051 = v1313;
                    do
                    {
                      if ( v1051 >= 4 )
                      {
                        v1049 = __ROR4__(v1049, 24);
                        v1052 = v1049;
                      }
                      else
                      {
                        v1048 = __ROR4__(v1048, 24);
                        v1052 = v1048;
                      }
                      *v1050 = v1052;
                      ++v1051;
                      v1053 = (size_t)++v1050;
                    }
                    while ( (int)v1051 < (int)v1040 );
                    v1035 = pcchLength;
                    v1034 = v1053;
                    Size = v1053;
                    v1036 = v1310;
                  }
                  else
                  {
                    v1034 = Size;
                  }
                  if ( v1040 <= 4 )
                  {
                    v1038 = 0;
                    if ( v1040 >= 4 )
                      goto LABEL_1296;
                    v1033 = v1033 >> (8 * (4 - v1040)) << (8 * (4 - v1040));
                  }
                  else
                  {
                    v1038 = v1047 >> (8 * (8 - v1040)) << (8 * (8 - v1040));
                  }
                  v1034 = Size;
                }
LABEL_1296:
                v1054 = v1035 >> 3;
                if ( v1035 >> 3 )
                {
                  v1055 = v1039 + 2;
                  v1056 = v1334;
                  v1057 = v1054;
                  LODWORD(v1330) = HIWORD(v1324);
                  v1309 = WORD1(v1324);
                  LODWORD(v1313) = HIDWORD(v1324) ^ 0xB1B54A58;
                  v1058 = v1323;
                  v1059 = HIDWORD(v1324) ^ 0xB1B54A58;
                  lpMem = (LPVOID)(v1034 + 7);
                  do
                  {
                    v1060 = v1055[1] | ((*v1055 | ((*(v1055 - 1) | (*(v1055 - 2) << 8)) << 8)) << 8);
                    v1061 = v1055[5] | ((v1055[4] | ((v1055[3] | (v1055[2] << 8)) << 8)) << 8);
                    v1338 = (size_t)(v1055 + 8);
                    v1062 = v1033 ^ v1060 ^ ((v1038 ^ v1061) - 19032);
                    v1063 = __ROR4__(v1062, 15);
                    v1064 = HIDWORD(v1324) ^ v1062;
                    v1065 = v1038 ^ v1061 ^ (__ROR4__(v1064, 7) + WORD1(v1324) * v1063);
                    v1066 = v1064 ^ (WORD2(v1324) * __ROR4__(v1065 - 1313519016, 9) - __ROR4__(v1065, 10));
                    v1067 = v1065 ^ (__ROR4__(v1066, 27) + HIWORD(v1324) * __ROR4__(v1066 ^ WORD2(v1324), 28));
                    v1068 = v1066 ^ (HIDWORD(v1324) - (v1067 ^ 0xB1B54A58));
                    v1069 = v1067 ^ (WORD1(v1324) * (v1068 - 19032) - (v1068 >> 6));
                    v1070 = v1068 ^ (19032 * (WORD2(v1324) ^ __ROR4__(v1069, 15)));
                    v1071 = v1069 ^ (WORD2(v1324) * (HIWORD(v1324) + __ROR4__(~v1070, 3)));
                    v1072 = v1070 ^ (v1071 - 19032 - HIDWORD(v1324));
                    v1073 = v1071 ^ (v1309 * (v1072 ^ HIWORD(v1324))) ^ __ROR4__(v1072, 10);
                    v1074 = v1072 ^ __ROR4__(v1073, 3) ^ (WORD2(v1324) * __ROR4__(v1073 ^ 0x4A58, 26));
                    v1075 = v1073 ^ (19032 * (__ROR4__(v1074, 15) - HIWORD(v1324)));
                    v1076 = v1074 ^ ((v1075 ^ (v1075 >> 14)) >> 1) ^ (19032 * (v1330 ^ v1075)) ^ (19032
                                                                                                * ((8
                                                                                                  * (v1075 - WORD2(v1324))) | ((v1075 - WORD2(v1324)) >> 29)));
                    v1077 = v1075 ^ (WORD1(v1324) * (v1076 - WORD2(v1324)) - (v1076 >> 13));
                    v1078 = v1076 ^ __ROR4__(v1077, 11) ^ (WORD2(v1324) * __ROR4__(-1313519016 - v1077, 9));
                    v1079 = v1077 ^ (v1078 + 1313519016 - HIWORD(v1324));
                    v1080 = v1078 ^ (19032 * (v1079 ^ WORD1(v1324)) - __ROR4__(v1079, 7));
                    v1081 = v1079 ^ (WORD1(v1324) * __ROR4__(HIWORD(v1324) ^ v1080, 28) - __ROR4__(v1080, 16));
                    v1082 = v1080 ^ (__ROR4__(v1081, 4) + WORD2(v1324) * __ROR4__(-1313519016 - v1081, 10));
                    v1083 = v1081 ^ __ROR4__(v1082, 9) ^ (HIWORD(v1324) * __ROR4__(v1082 + 1313519016, 4));
                    v1084 = v1082 ^ (19032 * __ROR4__(HIDWORD(v1324) ^ v1083, 24) - __ROR4__(v1083, 30));
                    v1085 = v1083 ^ (WORD1(v1324) * __ROR4__(HIDWORD(v1324) - v1084, 11) - __ROR4__(v1084, 12));
                    v1055 = (unsigned __int8 *)v1338;
                    v1086 = v1084 ^ (v1085 >> 8) ^ (WORD2(v1324) * (WORD1(v1324) ^ v1085));
                    v1087 = v1085 ^ v1086;
                    v1088 = lpMem;
                    v1033 = v1056 ^ v1086;
                    v1038 = v1058 ^ v1059 ^ v1087;
                    v1056 = v1060;
                    v1058 = v1061;
                    *((char *)lpMem - 4) = v1033;
                    *v1088 = v1038;
                    *(v1088 - 5) = __ROR4__(v1033, 8);
                    *(v1088 - 1) = __ROR4__(v1038, 8);
                    *(v1088 - 6) = __ROR4__(v1033, 16);
                    *(v1088 - 2) = __ROR4__(v1038, 16);
                    *(v1088 - 7) = __ROR4__(v1033, 24);
                    *(v1088 - 3) = __ROR4__(v1038, 24);
                    lpMem = v1088 + 8;
                    --v1057;
                  }
                  while ( v1057 );
                  v1036 = v1310;
                  v79 = v1308;
                  v975 = v1316;
                  v484 = v1322;
                  v1035 = pcchLength;
                }
                v1089 = v1340;
                *(_QWORD *)((char *)v1340 + v1035) = v1036;
                v1090 = GetProcessHeap();
                v1091 = (unsigned int *)HeapAlloc(v1090, 8u, 0x30uLL);
                if ( v1091 )
                {
                  *v1091 = v1329;
                  v1092 = GetProcessHeap();
                  v1093 = HeapAlloc(v1092, 8u, (unsigned int)v1329);
                  if ( v1093 )
                  {
                    *((_QWORD *)v1091 + 1) = v1093;
                    memcpy_0(v1093, v1089, (unsigned int)v1329);
                    v1091[4] = 160;
                    v1094 = GetProcessHeap();
                    v1095 = HeapAlloc(v1094, 8u, 0xA0uLL);
                    v1096 = 0;
                    if ( v1095 )
                    {
                      *((_QWORD *)v1091 + 3) = v1095;
                      *v1095 = xmmword_1808D85F0[0];
                      v1095[1] = xmmword_1808D85F0[1];
                      v1095[2] = xmmword_1808D85F0[2];
                      v1095[3] = xmmword_1808D85F0[3];
                      v1095[4] = xmmword_1808D85F0[4];
                      v1095[5] = xmmword_1808D85F0[5];
                      v1095[6] = xmmword_1808D85F0[6];
                      v1095[7] = xmmword_1808D85F0[7];
                      v1095[8] = xmmword_1808D85F0[8];
                      v1095[9] = xmmword_1808D85F0[9];
                      v1091[8] = 8;
                      v1097 = GetProcessHeap();
                      v1098 = HeapAlloc(v1097, 8u, 8uLL);
                      if ( v1098 )
                      {
                        *((_QWORD *)v1091 + 5) = v1098;
                        *v1098 = qword_1808D85E0;
                        v1317 = 0LL;
LABEL_1314:
                        Size = (size_t)v975;
                        v1103 = v484;
                        j = (SIZE_T)v1319;
                        v1316 = v484;
                        v1315 = v1091;
                        v1104 = GetProcessHeap();
                        HeapFree(v1104, 0, v1340);
                        v1105 = v1317;
                        if ( v1317 )
                        {
                          v1338 = *((_QWORD *)v1317 + 1);
                          if ( v1338 )
                          {
                            v1106 = GetProcessHeap();
                            HeapFree(v1106, 0, (LPVOID)v1338);
                            v1105[1] = 0LL;
                          }
                          v1338 = v1105[3];
                          if ( v1338 )
                          {
                            v1107 = GetProcessHeap();
                            HeapFree(v1107, 0, (LPVOID)v1338);
                            v1105[3] = 0LL;
                          }
                          v1338 = v1105[5];
                          if ( v1338 )
                          {
                            v1108 = GetProcessHeap();
                            HeapFree(v1108, 0, (LPVOID)v1338);
                            v1105[5] = 0LL;
                          }
                          v1109 = GetProcessHeap();
                          HeapFree(v1109, 0, v1105);
                          v1315 = v1091;
                        }
                        v1030 = v1096 | 0x10000000;
                        v1110 = (void *)j;
                        v484 = v1103;
                        v1319 = (LPVOID)j;
                        v975 = (void *)Size;
                        if ( v1030 < 0 )
                          goto LABEL_1522;
                        v1111 = *v1091;
                        v1364 = 0;
                        LODWORD(dwBytes) = 4;
                        v1112 = RtlUIntAdd(4LL, v1111, &dwBytes);
                        if ( v1112 >= 0 )
                        {
                          v1112 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                          if ( v1112 >= 0 )
                          {
                            v1112 = RtlUIntAdd((unsigned int)dwBytes, v1091[4], &dwBytes);
                            if ( v1112 >= 0 )
                            {
                              v1112 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                              if ( v1112 >= 0 )
                              {
                                v1112 = RtlUIntAdd((unsigned int)dwBytes, v1091[8], &dwBytes);
                                if ( v1112 >= 0 )
                                {
                                  v1364 = dwBytes;
                                  v1114 = dwBytes;
                                  v1115 = GetProcessHeap();
                                  v1116 = HeapAlloc(v1115, 8u, v1114);
                                  v1118 = v1116;
                                  if ( !v1116 )
                                  {
                                    v1110 = (void *)j;
                                    v1030 = -805306345;
                                    v484 = v1316;
                                    v975 = (void *)Size;
                                    v1319 = (LPVOID)j;
                                    goto LABEL_1522;
                                  }
                                  v1322 = v1116;
                                  *v1116 = *v1091;
                                  v1112 = RtlULongLongAdd(v1116, 4LL, &v1322, v1117);
                                  if ( v1112 < 0 )
                                    goto LABEL_1338;
                                  memcpy_0(v1322, *((const void **)v1091 + 1), *v1091);
                                  v1112 = RtlULongLongAdd(v1322, *v1091, &v1322, v1119);
                                  if ( v1112 < 0 )
                                    goto LABEL_1338;
                                  v1121 = v1322;
                                  *(_DWORD *)v1322 = v1091[4];
                                  v1112 = RtlULongLongAdd(v1121, 4LL, &v1322, v1120);
                                  if ( v1112 < 0
                                    || (memcpy_0(v1322, *((const void **)v1091 + 3), v1091[4]),
                                        v1112 = RtlULongLongAdd(v1322, v1091[4], &v1322, v1122),
                                        v1112 < 0)
                                    || (v1124 = v1322,
                                        *(_DWORD *)v1322 = v1091[8],
                                        v1112 = RtlULongLongAdd(v1124, 4LL, &v1322, v1123),
                                        v1112 < 0)
                                    || (memcpy_0(v1322, *((const void **)v1091 + 5), v1091[8]),
                                        v1112 = RtlULongLongAdd(v1322, v1091[8], &v1322, v1125),
                                        v1112 < 0) )
                                  {
LABEL_1338:
                                    v1126 = GetProcessHeap();
                                    HeapFree(v1126, 0, v1118);
                                    v1113 = Size;
                                  }
                                  else
                                  {
                                    v1113 = Size;
                                    LODWORD(v1311) = v1364;
                                    v1327 = v1118;
                                  }
                                }
                              }
                            }
                          }
                        }
                        v1030 = v1112 | 0x10000000;
                        v1110 = (void *)j;
                        v484 = v1316;
                        v975 = (void *)v1113;
                        v1319 = (LPVOID)j;
                        if ( v1030 < 0 )
                          goto LABEL_1522;
                        LODWORD(v1330) = 0;
                        v1360 = 8;
                        v1127 = RtlUIntAdd(8LL, (unsigned int)v1326, &v1360);
                        v1319 = v1110;
                        v1030 = v1127 | 0x10000000;
                        if ( v1127 < 0 )
                          goto LABEL_1522;
                        v1128 = (v1360 + 7) & 0xFFFFFFF8;
                        if ( (unsigned int)v1128 < v1360 )
                        {
                          v1030 = -1073741675;
                          v1319 = v1110;
                          goto LABEL_1522;
                        }
                        v1353 = (v1360 + 7) & 0xFFFFFFF8;
                        v1030 = RtlUIntAdd(v1128, 8LL, &v1353);
                        if ( v1030 >= 0 )
                        {
                          if ( v1341[1] && LODWORD(v1341[0]) > 1 )
                          {
                            v1129 = (LPVOID)v1341[1];
                            v1309 = 0;
                            v1110 = (void *)j;
                            v1319 = (LPVOID)j;
                            v1322 = (LPVOID)v1341[1];
                            do
                            {
                              v1030 = RtlULongLongAdd(v1129, 4LL, &v1322, v1110);
                              if ( v1030 < 0 )
                                goto LABEL_1522;
                              v1030 = RtlULongLongAdd(v1322, v1130, &v1322, v1110);
                              if ( v1030 < 0 )
                                goto LABEL_1522;
                              v1129 = v1322;
                              ++v1309;
                            }
                            while ( !v1309 );
                            v1309 = *(_DWORD *)v1322;
                            v1030 = RtlULongLongAdd(v1322, 4LL, &v1322, v1110);
                            if ( v1030 < 0 )
                              goto LABEL_1522;
                            if ( LODWORD(v1341[0]) <= 2 )
                            {
                              v1030 = -1073741811;
                              goto LABEL_1522;
                            }
                            v1132 = (_DWORD *)v1341[1];
                            v1316 = (LPVOID)v1341[1];
                            do
                            {
                              LODWORD(v1313) = *v1132;
                              j = v1131;
                              v1317 = v975;
                              v1324 = v484;
                              v1326 = v1110;
                              v1322 = v1091;
                              v1030 = RtlULongLongAdd(v1132, 4LL, &v1316, v1110);
                              if ( v1030 < 0 )
                                goto LABEL_1522;
                              v1030 = RtlULongLongAdd(v1316, (unsigned int)v1313, &v1316, v1110);
                              if ( v1030 < 0 )
                                goto LABEL_1522;
                              v1132 = v1316;
                            }
                            while ( (unsigned int)(v1133 + 1) < 2 );
                            v1030 = RtlULongLongAdd(v1316, 4LL, &v1316, v1110);
                            if ( v1030 < 0 )
                              goto LABEL_1522;
                            LODWORD(dwBytes) = v1134;
                            v1030 = RtlUIntAdd(v1134, v1353, &dwBytes);
                            if ( v1030 < 0 )
                              goto LABEL_1522;
                            v1030 = RtlUIntAdd((unsigned int)dwBytes, v1135, &dwBytes);
                            if ( v1030 < 0 )
                              goto LABEL_1522;
                            v1030 = RtlUIntAdd((unsigned int)dwBytes, v1309, &dwBytes);
                            if ( v1030 < 0 )
                              goto LABEL_1522;
                            v1030 = RtlUIntAdd((unsigned int)dwBytes, v1136, &dwBytes);
                            if ( v1030 < 0 )
                              goto LABEL_1522;
                            v1030 = RtlUIntAdd((unsigned int)dwBytes, v1137, &dwBytes);
                            if ( v1030 < 0 )
                              goto LABEL_1522;
                            if ( (unsigned int)dwBytes > 0x400000 )
                            {
                              v1030 = -2147418113;
                              goto LABEL_1522;
                            }
                            v1138 = dwBytes;
                            v1139 = GetProcessHeap();
                            v1140 = 0LL;
                            v1328 = HeapAlloc(v1139, 8u, v1138);
                            if ( !v1328 )
                            {
                              v1328 = 0LL;
                              v1030 = -805306345;
                              goto LABEL_1519;
                            }
                            v1141 = (void *)j;
                            hModule = 0LL;
                            v1375 = 0LL;
                            v1376 = 0LL;
                            if ( !j )
                            {
                              v1030 = -2147024809;
                              v1315 = v1322;
LABEL_1372:
                              v1110 = v1326;
                              v484 = v1324;
                              v975 = v1317;
                              v1319 = v1326;
LABEL_1373:
                              v1327 = v1141;
                              goto LABEL_1522;
                            }
                            LODWORD(v1376) = v1311;
                            *(_QWORD *)&v1375 = j;
                            *((_QWORD *)&v1375 + 1) = v1328;
                            *(_QWORD *)((char *)&v1376 + 4) = v1138;
                            if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                              && (v1143 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                            {
                              v1144 = ((__int64 (__fastcall *)(__int64, __int128 *))v1143)(134LL, &v1375);
                              LODWORD(v1323) = v1138;
                              v1030 = v1144 | 0x10000000;
                              if ( v1144 >= 0 )
                              {
                                v1145 = DWORD1(v1376);
                                v1146 = v1322;
                                v1147 = v1326;
                                v1148 = v1324;
                                v1149 = v1317;
                                goto LABEL_1386;
                              }
                            }
                            else
                            {
                              v1142 = GetLastError();
                              v1030 = v1142;
                              if ( v1142 > 0 )
                                v1030 = (unsigned __int16)v1142 | 0x80070000;
                              LODWORD(v1323) = v1138;
                              if ( v1030 >= 0 )
                              {
                                v1030 = -2147467259;
                                LODWORD(v1323) = v1138;
                              }
                            }
                            v1327 = v1141;
                            if ( v1030 == -805306333 )
                            {
                              v1030 = -2147024774;
                              v1110 = v1326;
                              v484 = v1324;
                              v975 = v1317;
                              v1315 = v1322;
                              v1319 = v1326;
                              goto LABEL_1522;
                            }
                            v1147 = v1326;
                            v1146 = v1322;
                            v1110 = v1326;
                            v1148 = v1324;
                            v1149 = v1317;
                            v484 = v1324;
                            v1315 = v1322;
                            v975 = v1317;
                            v1319 = v1326;
                            if ( v1030 < 0 )
                            {
LABEL_1522:
                              if ( !v1110 )
                              {
LABEL_1524:
                                v1274 = v1315;
                                if ( v1315 )
                                {
                                  v1275 = (void *)*((_QWORD *)v1315 + 1);
                                  if ( v1275 )
                                  {
                                    v1276 = GetProcessHeap();
                                    HeapFree(v1276, 0, v1275);
                                    v1274[1] = 0LL;
                                  }
                                  v1277 = (void *)v1274[3];
                                  if ( v1277 )
                                  {
                                    v1278 = GetProcessHeap();
                                    HeapFree(v1278, 0, v1277);
                                    v1274[3] = 0LL;
                                  }
                                  v1279 = (void *)v1274[5];
                                  if ( v1279 )
                                  {
                                    v1280 = GetProcessHeap();
                                    HeapFree(v1280, 0, v1279);
                                    v1274[5] = 0LL;
                                  }
                                  v1281 = GetProcessHeap();
                                  HeapFree(v1281, 0, v1274);
                                }
                                v1282 = v1327;
                                if ( v1327 )
                                {
                                  v1283 = GetProcessHeap();
                                  HeapFree(v1283, 0, v1282);
                                }
                                v1284 = v1328;
                                if ( v1328 )
                                {
                                  v1285 = GetProcessHeap();
                                  HeapFree(v1285, 0, v1284);
                                }
                                v1286 = (_QWORD *)v1321;
                                if ( v1321 )
                                {
                                  v1287 = *(void **)(v1321 + 8);
                                  if ( v1287 )
                                  {
                                    v1288 = GetProcessHeap();
                                    HeapFree(v1288, 0, v1287);
                                    v1286[1] = 0LL;
                                  }
                                  v1289 = (void *)v1286[3];
                                  if ( v1289 )
                                  {
                                    v1290 = GetProcessHeap();
                                    HeapFree(v1290, 0, v1289);
                                    v1286[3] = 0LL;
                                  }
                                  v1291 = (void *)v1286[5];
                                  if ( v1291 )
                                  {
                                    v1292 = GetProcessHeap();
                                    HeapFree(v1292, 0, v1291);
                                    v1286[5] = 0LL;
                                  }
                                  v1293 = GetProcessHeap();
                                  HeapFree(v1293, 0, v1286);
                                }
                                v1294 = (void *)v1325;
                                if ( v1325 )
                                {
                                  v1295 = GetProcessHeap();
                                  HeapFree(v1295, 0, v1294);
                                }
LABEL_1546:
                                v66 = v1030 < 0;
                                v968 = v1320;
                                if ( !v66 )
                                {
                                  v1296 = v1337;
                                  if ( v1337 )
                                  {
                                    if ( v1320 )
                                    {
                                      lpMem = v1320;
                                      if ( (int)RtlULongLongAdd(v1320, 4LL, &lpMem, v1320) >= 0 )
                                      {
                                        v1299 = (int *)lpMem;
                                        if ( !v1298 )
                                          v1299 = 0LL;
                                        if ( v1298 == 4 && *v1299 >= 0 && v1296 > 1 )
                                        {
                                          for ( j = (SIZE_T)v968;
                                                (int)RtlULongLongAdd(v1297, 4LL, &j, v1297) >= 0
                                             && (int)RtlULongLongAdd(j, *v1300, &j, v1300) >= 0;
                                                v1297 = j )
                                          {
                                            if ( v1302 != -1 )
                                            {
                                              RtlULongLongAdd(j, 4LL, &j, v1301);
                                              goto LABEL_1219;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LABEL_1219;
                              }
LABEL_1523:
                              v1273 = GetProcessHeap();
                              HeapFree(v1273, 0, v1319);
                              goto LABEL_1524;
                            }
                            v1145 = (unsigned int)v1323;
                            v1140 = 0LL;
LABEL_1386:
                            LODWORD(dwBytes) = 0;
                            v1316 = v1328;
                            if ( (unsigned int)v1145 < 4 )
                            {
                              v1030 = -805306306;
                              v1315 = v1146;
                              v1110 = v1147;
                              v1319 = v1147;
                              v484 = v1148;
                              v975 = v1149;
                              goto LABEL_1373;
                            }
                            v1150 = *(unsigned int *)v1328;
                            v1309 = *(_DWORD *)v1328;
                            v1151 = RtlULongLongAdd(v1328, 4LL, &v1316, v1145);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            v1151 = RtlUIntAdd(0LL, 4LL, &dwBytes);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            if ( (int)v1152 - (int)dwBytes < (unsigned int)v1150 )
                            {
LABEL_1391:
                              v1030 = -805306306;
                              v1315 = v1153;
                              goto LABEL_1372;
                            }
                            lpMem = v1316;
                            v1151 = RtlULongLongAdd(v1316, v1150, &v1316, v1152);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            v1151 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1150, &dwBytes);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            if ( (int)v1154 - (int)dwBytes < (unsigned int)v1155 )
                              goto LABEL_1391;
                            v1156 = *(unsigned int *)v1316;
                            v1151 = RtlULongLongAdd(v1316, v1155, &v1316, v1154);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            v1151 = RtlUIntAdd((unsigned int)dwBytes, v1157, &dwBytes);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            if ( (int)v1158 - (int)dwBytes < (unsigned int)v1156 )
                              goto LABEL_1391;
                            pcchLength = (size_t)v1316;
                            v1151 = RtlULongLongAdd(v1316, (unsigned int)v1156, &v1316, v1158);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            v1151 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1156, &dwBytes);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            if ( (int)v1159 - (int)dwBytes < v1160 )
                              goto LABEL_1391;
                            LODWORD(v1313) = *(_DWORD *)v1316;
                            v1151 = RtlULongLongAdd(v1316, 4LL, &v1316, v1159);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            v1151 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                            if ( v1151 < 0 )
                              goto LABEL_1444;
                            if ( v1161 - (int)dwBytes < v1162 )
                              goto LABEL_1391;
                            v1151 = RtlUIntAdd((unsigned int)dwBytes, v1162, &dwBytes);
                            if ( v1151 < 0 )
                            {
LABEL_1444:
                              v1185 = (unsigned int *)v1321;
LABEL_1432:
                              v1030 = v1151 | 0x10000000;
                              v1110 = v1326;
                              v484 = v1324;
                              v1315 = v1322;
                              v975 = v1317;
                              v1319 = v1326;
                              v1327 = v1141;
                              if ( v1030 < 0 )
                                goto LABEL_1522;
                              if ( !v1185 )
                                goto LABEL_1434;
                              v1342 = *((_QWORD *)v1185 + 1);
                              if ( !v1342 || !*v1185 )
                              {
                                v1110 = v1326;
LABEL_1434:
                                v1315 = v1322;
                                v1030 = -805306355;
                                v1319 = v1326;
                                goto LABEL_1373;
                              }
                              v1334 = *v1185 - 8LL;
                              v1193 = MemoryAlloc(v1334);
                              v1194 = v1322;
                              v1110 = v1326;
                              v1340 = v1193;
                              v1195 = v484;
                              v1196 = 0;
                              v1315 = v1322;
                              v1319 = v1326;
                              v1197 = v975;
                              v1327 = v1141;
                              if ( !v1193 )
                              {
LABEL_1475:
                                v1030 = -805306367;
                                v1325 = 0LL;
                                goto LABEL_1522;
                              }
                              pcchLength = (size_t)v1193;
                              v1198 = v1322;
                              v1199 = v1326;
                              v1329 = v1342;
                              v1338 = v1334 & 7;
                              v1200 = 0;
                              v1310 = 0;
                              v1330 = 0x7F1137FAB69605ELL;
                              LODWORD(v1323) = 0;
                              v1315 = v1322;
                              v1319 = v1326;
                              if ( (v1334 & 7) != 0 )
                              {
                                v1350 = 0;
                                LODWORD(v1311) = 0;
                                v1316 = v975;
                                v1322 = v484;
                                v1201 = (unsigned __int8 *)v1329;
                                v1202 = v1323;
                                v1327 = (LPVOID)j;
                                do
                                {
                                  v1319 = v1326;
                                  v975 = v1197;
                                  v1316 = v1197;
                                  v1198 = v1194;
                                  v1203 = v1352;
                                  v484 = v1195;
                                  v1315 = v1194;
                                  v1204 = *v1201;
                                  v1322 = v1195;
                                  if ( (unsigned int)v1311 >= 4 )
                                  {
                                    v1350 |= v1204 << v1352;
                                  }
                                  else
                                  {
                                    v1203 = v1352;
                                    v1202 |= v1204 << (v1352 - 32);
                                  }
                                  LODWORD(v1311) = v1311 + 1;
                                  ++v1201;
                                  v1194 = v1198;
                                  v1352 = v1203 - 8;
                                  v1197 = v975;
                                }
                                while ( (int)v1311 < (unsigned __int8)(v1334 & 7) );
                                LODWORD(v1323) = v1202;
                                v79 = v1308;
                                v1329 = (SIZE_T)v1201;
                                v1196 = v1310;
                                v1199 = v1326;
                                v1200 = v1323 ^ 0x92F65A5;
                                v1205 = v1338;
                                v1206 = v1350 ^ 0x699A899C;
                                v1207 = v1323 ^ 0x92F65A5;
                                LODWORD(v1313) = 0;
                                v1208 = v1350 ^ 0x699A899C;
                                if ( (_DWORD)v1338 )
                                {
                                  v1209 = (_BYTE *)pcchLength;
                                  v1210 = v1313;
                                  do
                                  {
                                    if ( v1210 >= 4 )
                                    {
                                      v1208 = __ROR4__(v1208, 24);
                                      v1309 = v1208;
                                    }
                                    else
                                    {
                                      v1207 = __ROR4__(v1207, 24);
                                      v1309 = v1207;
                                    }
                                    ++v1210;
                                    lpMem = v1209 + 1;
                                    *v1209 = v1309;
                                    v1209 = lpMem;
                                  }
                                  while ( (int)v1210 < (int)v1205 );
                                  v1196 = v1310;
                                  pcchLength = (size_t)lpMem;
                                }
                                if ( v1205 <= 4 )
                                {
                                  v1211 = 0;
                                  if ( v1205 < 4 )
                                    v1200 = v1200 >> (8 * (4 - v1205)) << (8 * (4 - v1205));
                                }
                                else
                                {
                                  v1211 = v1206 >> (8 * (8 - v1205)) << (8 * (8 - v1205));
                                }
                              }
                              else
                              {
                                v1211 = 0;
                                v1316 = v975;
                                v1322 = v484;
                                v1327 = (LPVOID)j;
                              }
                              v1212 = v1334;
                              if ( v1334 >> 3 )
                              {
                                v1213 = HIDWORD(v1330);
                                v1214 = v1334 >> 3;
                                v1215 = (_BYTE *)(pcchLength + 7);
                                LODWORD(dwBytes) = 24670;
                                v1216 = WORD2(v1330);
                                LODWORD(v1313) = HIDWORD(v1330) ^ 0xAB69605E;
                                v1217 = (unsigned __int8 *)(v1329 + 2);
                                v1218 = v1323;
                                v1309 = WORD2(v1330);
                                do
                                {
                                  v1219 = *(v1217 - 1) | (*(v1217 - 2) << 8);
                                  v1220 = v1217[2] << 8;
                                  v1221 = *v1217;
                                  v1217 += 8;
                                  v1222 = *(v1217 - 7) | ((v1221 | (v1219 << 8)) << 8);
                                  v1223 = v1222 ^ v1200;
                                  v1224 = *(v1217 - 3) | ((*(v1217 - 4) | ((*(v1217 - 5) | v1220) << 8)) << 8);
                                  v1225 = v1224 ^ v1223 ^ v1211 ^ v1213 ^ 0xAB69605E;
                                  v1226 = v1223 ^ (__ROR4__(v1225, 22) + v1216 * __ROR4__(v1225 + 1419157410, 27));
                                  v1227 = v1225 ^ (WORD1(v1330) * __ROR4__(v1226 + v1213, 9) - __ROR4__(v1226, 30));
                                  v1228 = v1226 ^ (dwBytes * (v1227 - v1216) - (v1227 >> 13));
                                  v1229 = v1227 ^ (HIWORD(v1330) * __ROR4__(v1228 ^ WORD1(v1330), 26)
                                                 - __ROR4__(v1228, 30));
                                  v1230 = v1228 ^ (v1213 - (v1229 ^ 0xAB69605E));
                                  v1231 = v1229 ^ (WORD1(v1330) * (v1216 ^ v1230)) ^ __ROR4__(v1230, 6);
                                  v1232 = v1230 ^ (__ROR4__(v1231, 30) + dwBytes * __ROR4__(v1213 + v1231, 15));
                                  v1233 = v1231 ^ (HIWORD(v1330) * __ROR4__(v1232 + 1419157410, 14) - __ROR4__(v1232, 24));
                                  v1234 = v1232 ^ __ROR4__(v1233, 10) ^ (v1309 * __ROR4__(v1233 ^ 0xAB69605E, 12));
                                  v1235 = v1233 ^ (v1234 >> 10) ^ (WORD1(v1330) * (v1234 ^ HIWORD(v1330)));
                                  v1216 = v1309;
                                  v1236 = v1234 ^ (HIWORD(v1330) * (dwBytes + __ROR4__(~v1235, 5)));
                                  v1237 = v1235 ^ (v1236 - HIWORD(v1330)) ^ 0xAB69605E;
                                  v1238 = v1236 ^ ((v1237 >> 2) + v1309 * __ROR4__(HIWORD(v1330) ^ v1237, 30));
                                  v1239 = v1237 ^ (__ROR4__(v1238, 25) + WORD1(v1330) * __ROR4__(v1238 - v1213, 6));
                                  v1240 = v1238 ^ (dwBytes * (v1309 ^ v1239) + __ROR4__(v1239, 9));
                                  v1241 = v1239 ^ (__ROR4__(v1240, 25)
                                                 + HIWORD(v1330) * __ROR4__(WORD1(v1330) ^ v1240, 27));
                                  v1242 = v1240 ^ v1241 ^ v1313;
                                  v1243 = v1241 ^ (v1309 * (__ROR4__(v1242, 3) - WORD1(v1330)));
                                  v1244 = v1242 ^ (dwBytes * __ROR4__(v1243 - v1213, 1) - __ROR4__(v1243, 6));
                                  v1245 = v1243 ^ (__ROR4__(v1244, 18) + HIWORD(v1330)
                                                                       * __ROR4__(v1244 - 1419157410, 29));
                                  v1246 = v1244 ^ (v1309 * __ROR4__(v1245 - 1419157410, 17) - __ROR4__(v1245, 14));
                                  v1247 = v1245 ^ (v1246 >> 3) ^ (WORD1(v1330) * (dwBytes ^ v1246));
                                  v1248 = v1218 ^ __ROR4__(v1247, 30) ^ (dwBytes * __ROR4__(v1247 ^ v1213, 28));
                                  v1218 = v1222;
                                  v1200 = v1246 ^ v1248;
                                  v1211 = v1247 ^ v1350;
                                  *(v1215 - 4) = v1200;
                                  *v1215 = v1211;
                                  *(v1215 - 5) = __ROR4__(v1200, 8);
                                  v1215 += 8;
                                  v1350 = v1224;
                                  *(v1215 - 9) = __ROR4__(v1211, 8);
                                  *(v1215 - 14) = __ROR4__(v1200, 16);
                                  *(v1215 - 10) = __ROR4__(v1211, 16);
                                  *(v1215 - 15) = __ROR4__(v1200, 24);
                                  *(v1215 - 11) = __ROR4__(v1211, 24);
                                  --v1214;
                                }
                                while ( v1214 );
                                v1196 = v1310;
                                v79 = v1308;
                                v975 = v1316;
                                v484 = v1322;
                                v1198 = v1315;
                                v1199 = v1319;
                                v1212 = v1334;
                              }
                              v1249 = (char *)v1340;
                              for ( k = 0LL; k < v1212; ++k )
                                v1196 ^= *((_BYTE *)v1340 + k);
                              j = (SIZE_T)v1328;
                              Size = v1321;
                              if ( v1196 != *(_QWORD *)(v1212 + v1342) )
                              {
                                MemoryFree(v1340);
                                v1110 = v1319;
                                goto LABEL_1475;
                              }
                              v1322 = v1340;
                              v1251 = v1199;
                              LODWORD(dwBytes) = 0;
                              if ( (unsigned int)v1212 < 4 )
                                goto LABEL_1514;
                              LODWORD(v1313) = *(_DWORD *)v1340;
                              v1252 = RtlULongLongAdd(v1340, 4LL, &v1322, v1321);
                              v1321 = v1253;
                              v1110 = v1251;
                              v1328 = (LPVOID)j;
                              v484 = v1254;
                              v1325 = v1255;
                              v1315 = v1198;
                              v1319 = v1251;
                              if ( v1252 < 0 )
                                goto LABEL_1517;
                              v1252 = RtlUIntAdd(0LL, 4LL, &dwBytes);
                              v1321 = Size;
                              v1325 = (SIZE_T)v1249;
                              v1328 = (LPVOID)j;
                              v1315 = v1198;
                              v1319 = v1251;
                              if ( v1252 < 0 )
                                goto LABEL_1517;
                              if ( (unsigned int)(v1334 - dwBytes) < 4 )
                              {
                                v1321 = Size;
                                v1328 = (LPVOID)j;
LABEL_1515:
                                v1319 = v1251;
                                v1315 = v1198;
                                v1325 = (SIZE_T)v1249;
LABEL_1516:
                                v1252 = -1073741762;
                                goto LABEL_1517;
                              }
                              LODWORD(v1323) = *(_DWORD *)v1322;
                              v1252 = RtlULongLongAdd(v1322, 4LL, &v1322, v1110);
                              v1325 = v1256;
                              v1321 = Size;
                              v1328 = (LPVOID)j;
                              v1315 = v1198;
                              v1319 = v1251;
                              if ( v1252 < 0 )
                                goto LABEL_1517;
                              v1257 = RtlUIntAdd((unsigned int)dwBytes, 4LL, &dwBytes);
                              v1258 = Size;
                              v1252 = v1257;
                              v1321 = Size;
                              v1325 = (SIZE_T)v1249;
                              v1328 = (LPVOID)j;
                              v1315 = v1198;
                              v1319 = v1251;
                              if ( v1257 < 0 )
                                goto LABEL_1517;
                              if ( (int)v1334 - (int)dwBytes < (unsigned int)v1323 )
                              {
                                v1328 = (LPVOID)j;
LABEL_1513:
                                v1321 = v1258;
LABEL_1514:
                                v1110 = v1251;
                                goto LABEL_1515;
                              }
                              v1259 = RtlUIntAdd((unsigned int)dwBytes, (unsigned int)v1323, &dwBytes);
                              v1258 = Size;
                              v1252 = v1259;
                              v1110 = v1251;
                              v1328 = (LPVOID)j;
                              v1325 = (SIZE_T)v1249;
                              v1321 = Size;
                              v1315 = v1198;
                              v1319 = v1251;
                              if ( v1259 >= 0 )
                              {
                                if ( &v1249[(unsigned int)v1334] < (char *)v1322 + (unsigned int)v1323
                                  || (unsigned __int64)&v1249[(unsigned int)v1334
                                                            - (unsigned __int64)(unsigned int)v1323
                                                            - (_QWORD)v1322] >= 8 )
                                {
                                  v1328 = (LPVOID)j;
                                  goto LABEL_1513;
                                }
                                v1317 = 0LL;
                                v1252 = 0;
                                v1343 = 0LL;
                                v1326 = 0LL;
                                LODWORD(v1311) = 0;
                                v1325 = (SIZE_T)v1249;
                                v1321 = Size;
                                v1328 = (LPVOID)j;
                                v1315 = v1198;
                                v1319 = v1251;
                                if ( v1322 )
                                {
                                  v1330 = (SIZE_T)v1322;
                                  v1252 = RtlULongLongAdd(v1322, (unsigned int)v1323, &v1317, j);
                                  v1328 = v1261;
                                  v1325 = v1260;
                                  v1110 = v1251;
                                  v1321 = Size;
                                  v1315 = v1198;
                                  v1319 = v1251;
                                  if ( v1252 < 0 )
                                    goto LABEL_1517;
                                  v1262 = v1330;
                                  v1325 = v1260;
                                  v1321 = Size;
                                  v1328 = (LPVOID)j;
                                  v1315 = v1198;
                                  v1319 = v1251;
                                  if ( v1330 < (unsigned __int64)v1317 )
                                  {
                                    v1263 = (void *)v1260;
                                    v1325 = v1260;
                                    v1264 = j;
                                    v1321 = Size;
                                    v1265 = Size;
                                    v1328 = (LPVOID)j;
                                    v1315 = v1198;
                                    v1319 = v1110;
                                    while ( 1 )
                                    {
                                      pcchLength = v1264;
                                      v1340 = v1263;
                                      v1252 = RtlULongLongAdd(v1262, 4LL, &v1343, v1110);
                                      if ( v1252 < 0 )
                                        goto LABEL_1517;
                                      if ( v1343 > v1317 )
                                        goto LABEL_1500;
                                      v1309 = 0;
                                      v1252 = RtlUIntAdd(4LL, *(unsigned int *)v1330, &v1309);
                                      if ( v1252 < 0 )
                                        goto LABEL_1517;
                                      v1252 = RtlULongLongAdd(v1266, v1309, &v1326, v1110);
                                      v1325 = v1267;
                                      v1321 = v1265;
                                      v1328 = (LPVOID)pcchLength;
                                      v1315 = v1198;
                                      v1319 = v1110;
                                      if ( v1252 < 0 )
                                        goto LABEL_1517;
                                      v1262 = (SIZE_T)v1326;
                                      v1268 = v1317;
                                      v1330 = (SIZE_T)v1326;
                                      v1321 = v1265;
                                      v1315 = v1198;
                                      if ( v1326 > v1317 )
                                      {
                                        v1252 = -1073741811;
                                        v1325 = (SIZE_T)v1340;
                                        v1328 = (LPVOID)pcchLength;
                                        v1319 = v1110;
                                        goto LABEL_1517;
                                      }
                                      LODWORD(v1311) = v1311 + 1;
                                      v1263 = v1340;
                                      v1264 = pcchLength;
                                      v1325 = (SIZE_T)v1340;
                                      v1328 = (LPVOID)pcchLength;
                                      v1319 = v1110;
                                      if ( v1326 >= v1317 )
                                      {
                                        v1325 = (SIZE_T)v1340;
                                        v1321 = v1265;
                                        v1328 = (LPVOID)pcchLength;
                                        v1315 = v1198;
                                        v1319 = v1110;
                                        goto LABEL_1502;
                                      }
                                    }
                                  }
                                  v1268 = v1317;
LABEL_1502:
                                  if ( (LPVOID)v1262 != v1268 )
                                  {
LABEL_1500:
                                    v1252 = -1073741811;
                                    goto LABEL_1517;
                                  }
                                }
                                v1269 = v1323;
                                if ( !(_DWORD)v1323 )
                                {
                                  v1272 = 0LL;
LABEL_1508:
                                  if ( v1322 )
                                    memcpy_0(v1272, v1322, v1269);
                                  v1110 = v1319;
                                  v1337 = v1311;
                                  v1320 = v1272;
                                  if ( (_DWORD)v1313 == (_DWORD)v1311 )
                                    goto LABEL_1517;
                                  goto LABEL_1516;
                                }
                                v1270 = v1323;
                                v1271 = GetProcessHeap();
                                v1272 = HeapAlloc(v1271, 8u, v1270);
                                if ( v1272 )
                                {
                                  v1269 = v1323;
                                  v1252 = 0;
                                  goto LABEL_1508;
                                }
                                v1320 = 0LL;
                                v1252 = -1073741801;
                                v1337 = 0;
                                v1110 = v1319;
                              }
LABEL_1517:
                              v1030 = v1252 | 0x10000000;
                              goto LABEL_1522;
                            }
                            if ( v1163 != (_DWORD)dwBytes || v1309 + (_DWORD)v1156 + v1164 + 12LL != v1163 )
                              goto LABEL_1391;
                            v1165 = GetProcessHeap();
                            v1166 = HeapAlloc(v1165, 8u, 0x30uLL);
                            if ( v1166 )
                            {
                              v1151 = 0;
                              if ( lpMem )
                              {
                                v1167 = v1309;
                                *(_DWORD *)v1166 = v1309;
                                v1168 = v1167;
                                v1338 = v1167;
                                v1169 = GetProcessHeap();
                                v1170 = HeapAlloc(v1169, 8u, v1168);
                                if ( !v1170 )
                                  goto LABEL_1418;
                                v1166[1] = v1170;
                                v1151 = 0;
                                memcpy_0(v1170, lpMem, v1338);
                              }
                              else
                              {
                                *(_DWORD *)v1166 = 0;
                                v1166[1] = 0LL;
                              }
                              if ( !pcchLength )
                              {
                                *((_DWORD *)v1166 + 4) = 0;
                                v1166[3] = 0LL;
LABEL_1416:
                                v1173 = v1316;
                                if ( v1316 )
                                {
                                  v1174 = (unsigned int)v1313;
                                  *((_DWORD *)v1166 + 8) = v1313;
                                  v1175 = v1174;
                                  v1338 = v1174;
                                  v1176 = GetProcessHeap();
                                  v1177 = HeapAlloc(v1176, 8u, v1175);
                                  if ( !v1177 )
                                    goto LABEL_1418;
                                  v1166[5] = v1177;
                                  v1151 = 0;
                                  memcpy_0(v1177, v1173, v1338);
                                }
                                else
                                {
                                  *((_DWORD *)v1166 + 8) = 0;
                                  v1166[5] = 0LL;
                                }
                                v1140 = v1166;
                                goto LABEL_1428;
                              }
                              *((_DWORD *)v1166 + 4) = v1156;
                              v1171 = GetProcessHeap();
                              v1172 = HeapAlloc(v1171, 8u, v1156);
                              if ( v1172 )
                              {
                                v1166[3] = v1172;
                                v1151 = 0;
                                memcpy_0(v1172, (const void *)pcchLength, v1156);
                                goto LABEL_1416;
                              }
LABEL_1418:
                              v1151 = -1073741801;
                              v1178 = (void *)v1166[1];
                              if ( v1178 )
                              {
                                v1179 = GetProcessHeap();
                                HeapFree(v1179, 0, v1178);
                                v1166[1] = 0LL;
                              }
                              v1180 = (void *)v1166[3];
                              if ( v1180 )
                              {
                                v1181 = GetProcessHeap();
                                HeapFree(v1181, 0, v1180);
                                v1166[3] = 0LL;
                              }
                              v1182 = (void *)v1166[5];
                              if ( v1182 )
                              {
                                v1183 = GetProcessHeap();
                                HeapFree(v1183, 0, v1182);
                                v1166[5] = 0LL;
                              }
                              v1184 = GetProcessHeap();
                              HeapFree(v1184, 0, v1166);
LABEL_1428:
                              if ( v1151 < 0 )
                              {
                                v1185 = 0LL;
                                v1321 = 0LL;
                                if ( !v1140 )
                                  goto LABEL_1431;
                                v1186 = (void *)v1140[1];
                                if ( v1186 )
                                {
                                  v1187 = GetProcessHeap();
                                  HeapFree(v1187, 0, v1186);
                                  v1140[1] = 0LL;
                                }
                                v1188 = (void *)v1140[3];
                                if ( v1188 )
                                {
                                  v1189 = GetProcessHeap();
                                  HeapFree(v1189, 0, v1188);
                                  v1140[3] = 0LL;
                                }
                                v1190 = (void *)v1140[5];
                                if ( v1190 )
                                {
                                  v1191 = GetProcessHeap();
                                  HeapFree(v1191, 0, v1190);
                                  v1140[5] = 0LL;
                                }
                                v1192 = GetProcessHeap();
                                HeapFree(v1192, 0, v1140);
                                v1185 = 0LL;
                              }
                              else
                              {
                                v1185 = (unsigned int *)v1140;
                              }
                              v1321 = (SIZE_T)v1185;
LABEL_1431:
                              v1141 = (void *)j;
                              goto LABEL_1432;
                            }
                            v1321 = 0LL;
                            v1030 = -805306345;
LABEL_1519:
                            v1110 = v1326;
                            v484 = v1324;
                            v975 = v1317;
                            v1315 = v1322;
                            v1319 = v1326;
                            v1327 = (LPVOID)j;
                            goto LABEL_1522;
                          }
                          v1030 = -1073741811;
                        }
                        v1110 = (void *)j;
                        v1319 = (LPVOID)j;
                        goto LABEL_1522;
                      }
                    }
                  }
                  v1096 = -1073741801;
                  v1338 = *((_QWORD *)v1091 + 1);
                  if ( v1338 )
                  {
                    v1099 = GetProcessHeap();
                    HeapFree(v1099, 0, (LPVOID)v1338);
                    *((_QWORD *)v1091 + 1) = 0LL;
                  }
                  v1338 = *((_QWORD *)v1091 + 3);
                  if ( v1338 )
                  {
                    v1100 = GetProcessHeap();
                    HeapFree(v1100, 0, (LPVOID)v1338);
                    *((_QWORD *)v1091 + 3) = 0LL;
                  }
                  v1338 = *((_QWORD *)v1091 + 5);
                  if ( v1338 )
                  {
                    v1101 = GetProcessHeap();
                    HeapFree(v1101, 0, (LPVOID)v1338);
                    *((_QWORD *)v1091 + 5) = 0LL;
                  }
                  v1102 = GetProcessHeap();
                  HeapFree(v1102, 0, v1091);
                }
                else
                {
                  v1096 = -1073741801;
                }
                v1091 = (unsigned int *)v1315;
                goto LABEL_1314;
              }
LABEL_1218:
              v968 = v1320;
              goto LABEL_1219;
            }
          }
LABEL_1563:
          v968 = 0LL;
          goto LABEL_1219;
        }
        v968 = 0LL;
      }
LABEL_1219:
      v1341[0] = 0LL;
      v989 = (void *)v1341[1];
      if ( v1341[1] )
      {
        v990 = GetProcessHeap();
        HeapFree(v990, 0, v989);
        v1341[1] = 0LL;
      }
      if ( v968 )
      {
        v991 = GetProcessHeap();
        HeapFree(v991, 0, v968);
      }
      if ( v975 )
      {
        v992 = GetProcessHeap();
        HeapFree(v992, 0, v975);
      }
      if ( v484 )
      {
        v993 = GetProcessHeap();
        HeapFree(v993, 0, v484);
      }
      v2 = 1;
      goto LABEL_1228;
    }
    j = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
    if ( !j )
    {
      GetLastError();
      goto LABEL_1199;
    }
    v486 = off_1808D13D8[0]();
    v487 = dword_1808DA538;
    qword_1808DDD48 = v486;
    LODWORD(dwBytes) = dword_1808DA538;
    memset_0(&v1387, 0, 0x70uLL);
    v1316 = 0LL;
    memset(v1437, 0, 44);
    v1355 = 0LL;
    pcchLength = 0LL;
    while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
      ;
    v488 = dword_1808DDD3C;
    if ( dword_1808DDD3C )
      goto LABEL_651;
    LODWORD(v1321) = 0;
    LODWORD(v1325) = 0;
    v489 = (const WCHAR *)MemoryAlloc(0x338uLL);
    lpModuleName = v489;
    if ( !v489 )
      goto LABEL_615;
    v1309 = -1;
    v490 = (char *)v489 + 7;
    v491 = -1;
    v492 = (unsigned __int8 *)&unk_180783012;
    v493 = 0;
    v494 = 103LL;
    v495 = 0;
    v496 = 0;
    do
    {
      v497 = *(v492 - 1) | (*(v492 - 2) << 8);
      v498 = v492[2] << 8;
      v499 = *v492;
      v492 += 8;
      v500 = *(v492 - 7) | ((v499 | (v497 << 8)) << 8);
      v501 = v500 ^ v496;
      v502 = *(v492 - 3) | ((*(v492 - 4) | ((*(v492 - 5) | v498) << 8)) << 8);
      v503 = v501 ^ v502 ^ v495 ^ 0xAC987321;
      v504 = v501 ^ (__ROR4__(v503, 22) + 4991 * __ROR4__(v503 + 1419157410, 27));
      v505 = v503 ^ (43881 * __ROR4__(v504 + 133239679, 9) - __ROR4__(v504, 30));
      v506 = v505 ^ (2033 * __ROR4__(v504 ^ (24670 * v505 - (v505 >> 13) - 123127970) ^ 0xAB69, 26)
                   - __ROR4__(v504 ^ (24670 * v505 - (v505 >> 13) - 123127970), 30));
      v507 = v504 ^ (24670 * v505 - (v505 >> 13) - 123127970) ^ (133239679 - (v506 ^ 0xAB69605E));
      v508 = v506 ^ (43881 * (v507 ^ 0x137F)) ^ __ROR4__(v507, 6);
      v509 = v507 ^ (__ROR4__(v508, 30) + 24670 * __ROR4__(v508 + 133239679, 15));
      v510 = v508 ^ (2033 * __ROR4__(v509 + 1419157410, 14) - __ROR4__(v509, 24));
      v511 = v509 ^ __ROR4__(v510, 10) ^ (4991 * __ROR4__(v510 ^ 0xAB69605E, 12));
      v512 = v510 ^ (v511 >> 10) ^ (43881 * (v511 ^ 0x7F1));
      v513 = v511 ^ (2033 * (__ROR4__(~v512, 5) + 24670));
      v514 = v513 ^ (((v512 ^ (v513 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v512 ^ (v513 - 2033) ^ 0xAB6967AF, 30));
      v515 = v512 ^ (v513 - 2033) ^ 0xAB69605E ^ (__ROR4__(v514, 25) + 43881 * __ROR4__(v514 - 133239679, 6));
      v516 = v514 ^ (24670 * (v515 ^ 0x137F) + __ROR4__(v515, 9));
      v517 = v515 ^ (__ROR4__(v516, 25) + 2033 * __ROR4__(v516 ^ 0xAB69, 27));
      v518 = v516 ^ v517 ^ 0xAC987321;
      v519 = v517 ^ (4991 * __ROR4__(v518, 3) - 219010071);
      v520 = v518 ^ (24670 * __ROR4__(v519 - 133239679, 1) - __ROR4__(v519, 6));
      v521 = v519 ^ (__ROR4__(v520, 18) + 2033 * __ROR4__(v520 - 1419157410, 29));
      v522 = v520 ^ (4991 * __ROR4__(v521 - 1419157410, 17) - __ROR4__(v521, 14));
      v523 = v521 ^ (v522 >> 3) ^ (43881 * (v522 ^ 0x605E));
      v495 = v523 ^ v491;
      v491 = v502;
      v524 = v493 ^ __ROR4__(v523, 30) ^ (24670 * __ROR4__(v523 ^ 0x7F1137F, 28));
      v493 = v500;
      v496 = v522 ^ v524;
      *(v490 - 4) = v496;
      *v490 = v495;
      *(v490 - 5) = __ROR4__(v496, 8);
      v490 += 8;
      *(v490 - 9) = __ROR4__(v495, 8);
      *(v490 - 14) = __ROR4__(v496, 16);
      *(v490 - 10) = __ROR4__(v495, 16);
      *(v490 - 15) = __ROR4__(v496, 24);
      *(v490 - 11) = __ROR4__(v495, 24);
      --v494;
    }
    while ( v494 );
    v487 = dwBytes;
    v525 = lpModuleName;
    v526 = 0LL;
    v527 = 0;
    do
      v527 ^= *((_BYTE *)lpModuleName + v526++);
    while ( v526 < 0x338 );
    if ( v527 != 64LL )
    {
      MemoryFree((void *)lpModuleName);
      goto LABEL_615;
    }
    *((_BYTE *)lpModuleName + 823) = 0;
    memset_0(&unk_1808DA540, 0, 0x60uLL);
    if ( *v525 )
    {
      v1368 = v525;
      while ( 1 )
      {
        v530 = (const WCHAR *)v525;
        v531 = -1LL;
        do
          ++v531;
        while ( *(_WORD *)&v525[2 * v531] );
        v532 = &v525[2 * v531];
        lpModuleName = (LPCWSTR)(3LL * (unsigned int)v1325);
        if ( !GetModuleHandleExW(0, v530, (HMODULE *)&unk_1808DA540 + 3 * (unsigned int)v1325) )
          break;
        v533 = lpModuleName;
        v534 = 0;
        v535 = *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName);
        if ( *(_WORD *)v535 == 23117
          && (v536 = *(int *)(v535 + 60), (unsigned int)v536 < 0x10000000)
          && (v537 = *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName) + v536,
              v537 >= *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName))
          && *(_DWORD *)v537 == 17744 )
        {
          if ( *(_WORD *)(v537 + 24) == 267 || *(_WORD *)(v537 + 24) == 523 )
          {
            *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)lpModuleName + 12) = *(_QWORD *)(v537 + 136);
            *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v533 + 2) = *(_DWORD *)(v537 + 80);
          }
          else
          {
            v534 = -1073741811;
          }
        }
        else
        {
          v534 = -1073741701;
        }
        v538 = *(_DWORD *)(v532 + 2);
        v539 = 0;
        v525 = v532 + 6;
        v1309 = v538;
        LODWORD(v1311) = 0;
        if ( v538 )
        {
          v540 = (unsigned int)v1325;
          do
          {
            v541 = v525;
            v542 = -1LL;
            do
              ++v542;
            while ( v525[v542] );
            v525 += v542 + 1;
            if ( v534 >= 0 )
            {
              v543 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v540), v541);
              if ( !v543 )
                goto LABEL_645;
              off_1808D1340[(unsigned int)v1321] = v543;
              v539 = v1311;
              v540 = (unsigned int)v1325;
            }
            LODWORD(v1321) = v1321 + 1;
            LODWORD(v1311) = ++v539;
          }
          while ( v539 < v1309 );
        }
        LODWORD(v1325) = v1325 + 1;
        if ( !*v525 )
          goto LABEL_645;
      }
      v534 = -1073741702;
LABEL_645:
      v525 = v1368;
      if ( !v1368 )
        goto LABEL_649;
    }
    else
    {
      v534 = 0;
    }
    v544 = GetProcessHeap();
    HeapFree(v544, 0, v525);
LABEL_649:
    if ( v534 < 0 )
    {
LABEL_615:
      v528 = (HMODULE *)&unk_1808DA540;
      v529 = 4LL;
      do
      {
        if ( *v528 )
          FreeLibrary(*v528);
        v528 += 3;
        --v529;
      }
      while ( v529 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_652:
      LODWORD(v1328) = 0;
      LODWORD(v1313) = 0;
      _InterlockedExchange(&dword_1808DDD40, 0);
      WORD2(v1313) = 0;
      LODWORD(v1324) = 0;
      LODWORD(v1334) = 0;
      LODWORD(v1327) = 0;
      LODWORD(v1320) = 0;
      v1329 = 0LL;
      v1340 = 0LL;
      lpMem = 0LL;
      Size = 0LL;
      LODWORD(v1315) = 0;
      LODWORD(v1330) = 0;
      while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
        ;
      v545 = dword_1808DDD3C;
      if ( dword_1808DDD3C )
        goto LABEL_698;
      LODWORD(v1321) = 0;
      LODWORD(v1325) = 0;
      v546 = (const WCHAR *)MemoryAlloc(0x338uLL);
      lpModuleName = v546;
      if ( !v546 )
        goto LABEL_662;
      v1309 = -1;
      v547 = (char *)v546 + 7;
      v548 = -1;
      v549 = (unsigned __int8 *)&unk_180783012;
      v550 = 0;
      v551 = 103LL;
      v552 = 0;
      v553 = 0;
      do
      {
        v554 = *(v549 - 1) | (*(v549 - 2) << 8);
        v555 = v549[2] << 8;
        v556 = *v549;
        v549 += 8;
        v557 = *(v549 - 7) | ((v556 | (v554 << 8)) << 8);
        v558 = v553 ^ v557;
        v559 = *(v549 - 3) | ((*(v549 - 4) | ((*(v549 - 5) | v555) << 8)) << 8);
        v560 = v552 ^ v553 ^ v557 ^ v559 ^ 0xAC987321;
        v561 = v558 ^ (__ROR4__(v560, 22) + 4991 * __ROR4__(v560 + 1419157410, 27));
        v562 = v560 ^ (43881 * __ROR4__(v561 + 133239679, 9) - __ROR4__(v561, 30));
        v563 = v561 ^ (24670 * v562 - (v562 >> 13) - 123127970);
        v564 = v562 ^ (2033 * __ROR4__(v563 ^ 0xAB69, 26) - __ROR4__(v563, 30));
        v565 = v563 ^ (133239679 - (v564 ^ 0xAB69605E));
        v566 = v564 ^ (43881 * (v565 ^ 0x137F)) ^ __ROR4__(v565, 6);
        v567 = v565 ^ (__ROR4__(v566, 30) + 24670 * __ROR4__(v566 + 133239679, 15));
        v568 = v566 ^ (2033 * __ROR4__(v567 + 1419157410, 14) - __ROR4__(v567, 24));
        v569 = v567 ^ __ROR4__(v568, 10) ^ (4991 * __ROR4__(v568 ^ 0xAB69605E, 12));
        v570 = v568 ^ (v569 >> 10) ^ (43881 * (v569 ^ 0x7F1));
        v571 = v569 ^ (2033 * (__ROR4__(~v570, 5) + 24670));
        v572 = v571 ^ (((v570 ^ (v571 - 2033) ^ 0xAB69605E) >> 2)
                     + 4991 * __ROR4__(v570 ^ (v571 - 2033) ^ 0xAB6967AF, 30));
        v573 = v570 ^ (v571 - 2033) ^ 0xAB69605E ^ (__ROR4__(v572, 25) + 43881 * __ROR4__(v572 - 133239679, 6));
        v574 = v572 ^ (24670 * (v573 ^ 0x137F) + __ROR4__(v573, 9));
        v575 = v573 ^ (__ROR4__(v574, 25) + 2033 * __ROR4__(v574 ^ 0xAB69, 27));
        v576 = v574 ^ v575 ^ 0xAC987321;
        v577 = v575 ^ (4991 * __ROR4__(v576, 3) - 219010071);
        v578 = v576 ^ (24670 * __ROR4__(v577 - 133239679, 1) - __ROR4__(v577, 6));
        v579 = v577 ^ (__ROR4__(v578, 18) + 2033 * __ROR4__(v578 - 1419157410, 29));
        v580 = v578 ^ (4991 * __ROR4__(v579 - 1419157410, 17) - __ROR4__(v579, 14));
        v581 = v579 ^ (v580 >> 3) ^ (43881 * (v580 ^ 0x605E));
        v582 = __ROR4__(v581, 30);
        v552 = v548 ^ v581;
        v548 = v559;
        v553 = v550 ^ v580 ^ v582 ^ (24670 * __ROR4__(v579 ^ (v580 >> 3) ^ (43881 * (v580 ^ 0x605E)) ^ 0x7F1137F, 28));
        v550 = v557;
        *(v547 - 4) = v553;
        *v547 = v552;
        *(v547 - 5) = __ROR4__(v553, 8);
        v547 += 8;
        *(v547 - 9) = __ROR4__(v552, 8);
        *(v547 - 14) = __ROR4__(v553, 16);
        *(v547 - 10) = __ROR4__(v552, 16);
        *(v547 - 15) = __ROR4__(v553, 24);
        *(v547 - 11) = __ROR4__(v552, 24);
        --v551;
      }
      while ( v551 );
      v487 = dwBytes;
      v583 = lpModuleName;
      v584 = 0LL;
      v585 = 0;
      do
        v585 ^= *((_BYTE *)lpModuleName + v584++);
      while ( v584 < 0x338 );
      if ( v585 != 64LL )
      {
        MemoryFree((void *)lpModuleName);
        goto LABEL_662;
      }
      *((_BYTE *)lpModuleName + 823) = 0;
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      if ( *v583 )
      {
        v1370 = v583;
        while ( 1 )
        {
          v588 = (const WCHAR *)v583;
          v589 = -1LL;
          do
            ++v589;
          while ( *(_WORD *)&v583[2 * v589] );
          v590 = &v583[2 * v589];
          lpModuleName = (LPCWSTR)(3LL * (unsigned int)v1325);
          if ( !GetModuleHandleExW(0, v588, (HMODULE *)&unk_1808DA540 + 3 * (unsigned int)v1325) )
            break;
          v591 = lpModuleName;
          v592 = 0;
          v593 = *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName);
          if ( *(_WORD *)v593 == 23117
            && (v594 = *(int *)(v593 + 60), (unsigned int)v594 < 0x10000000)
            && (v595 = *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName) + v594,
                v595 >= *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName))
            && *(_DWORD *)v595 == 17744 )
          {
            if ( *(_WORD *)(v595 + 24) == 267 || *(_WORD *)(v595 + 24) == 523 )
            {
              *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)lpModuleName + 12) = *(_QWORD *)(v595 + 136);
              *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v591 + 2) = *(_DWORD *)(v595 + 80);
            }
            else
            {
              v592 = -1073741811;
            }
          }
          else
          {
            v592 = -1073741701;
          }
          v596 = *(_DWORD *)(v590 + 2);
          v597 = 0;
          v583 = v590 + 6;
          v1309 = v596;
          LODWORD(v1311) = 0;
          if ( v596 )
          {
            v598 = (unsigned int)v1325;
            do
            {
              v599 = v583;
              v600 = -1LL;
              do
                ++v600;
              while ( v583[v600] );
              v583 += v600 + 1;
              if ( v592 >= 0 )
              {
                v601 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v598), v599);
                if ( !v601 )
                  goto LABEL_692;
                off_1808D1340[(unsigned int)v1321] = v601;
                v597 = v1311;
                v598 = (unsigned int)v1325;
              }
              LODWORD(v1321) = v1321 + 1;
              LODWORD(v1311) = ++v597;
            }
            while ( v597 < v1309 );
          }
          LODWORD(v1325) = v1325 + 1;
          if ( !*v583 )
            goto LABEL_692;
        }
        v592 = -1073741702;
LABEL_692:
        v583 = v1370;
        if ( !v1370 )
          goto LABEL_696;
      }
      else
      {
        v592 = 0;
      }
      v602 = GetProcessHeap();
      HeapFree(v602, 0, v583);
LABEL_696:
      if ( v592 < 0 )
      {
LABEL_662:
        v586 = (HMODULE *)&unk_1808DA540;
        v587 = 4LL;
        do
        {
          if ( *v586 )
            FreeLibrary(*v586);
          v586 += 3;
          --v587;
        }
        while ( v587 );
        memset_0(&unk_1808DA540, 0, 0x60uLL);
        memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_699:
        _InterlockedExchange(&dword_1808DDD40, 0);
        memset_0(&v1387, 0, 0x70uLL);
        LOWORD(v1313) = (v487 >> 4) & 0xF;
        v603 = v487 & 0xF;
        LODWORD(v1323) = v603;
        WORD1(v1313) = (v487 >> 8) & 0xF;
        WORD2(v1313) = (v487 >> 12) & 0xF;
        v1355 = 0LL;
        v1322 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
        v1337 = 0xFFFFFF;
        if ( !v1322 )
        {
          v604 = GetLastError();
          v484 = 0LL;
          v605 = v604;
          if ( v604 > 0 )
            v605 = (unsigned __int16)v604 | 0x80070000;
          if ( v605 >= 0 )
            v605 = -2147467259;
LABEL_814:
          while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
            ;
          v706 = dword_1808DDD3C;
          if ( dword_1808DDD3C > 0 )
          {
            --dword_1808DDD3C;
            if ( v706 == 1 )
            {
              v707 = 4LL;
              v708 = (HMODULE *)&unk_1808DA540;
              lpMem = (LPVOID)4;
              do
              {
                if ( *v708 )
                {
                  FreeLibrary(*v708);
                  v707 = (__int64)lpMem;
                }
                v708 += 3;
                lpMem = (LPVOID)--v707;
              }
              while ( v707 );
              memset_0(&unk_1808DA540, 0, 0x60uLL);
              memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              v484 = 0LL;
            }
          }
          _InterlockedExchange(&dword_1808DDD40, 0);
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1329);
          if ( v605 < 0 )
          {
LABEL_1031:
            if ( v1389 )
            {
              v826 = -1LL;
              do
                ++v826;
              while ( *((_WORD *)v1389 + v826) );
              v827 = 2 * v826 + 2;
              for ( m = v1389; v827; --v827 )
                *m++ = 0;
              MemoryFree(v1389);
              v1389 = 0LL;
            }
            if ( v1390 )
            {
              v829 = -1LL;
              do
                ++v829;
              while ( *((_WORD *)v1390 + v829) );
              v830 = 2 * v829 + 2;
              for ( n = v1390; v830; --v830 )
                *n++ = 0;
              MemoryFree(v1390);
              v1390 = 0LL;
            }
            v832 = v1391;
            if ( v1391 )
            {
              v833 = -1LL;
              do
                ++v833;
              while ( *((_WORD *)v1391 + v833) );
              v834 = 2 * v833 + 2;
              if ( v834 )
              {
                do
                {
                  *v832++ = 0;
                  --v834;
                }
                while ( v834 );
                v832 = v1391;
              }
              MemoryFree(v832);
              v1391 = 0LL;
            }
            if ( v1392 )
            {
              off_1808D1378();
              v1392 = 0LL;
            }
            if ( v1393 )
            {
              off_1808D1378();
              v1393 = 0LL;
            }
            if ( v1394 )
            {
              off_1808D1378();
              v1394 = 0LL;
            }
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v835 = dword_1808DDD3C;
            if ( dword_1808DDD3C > 0 )
            {
              --dword_1808DDD3C;
              if ( v835 == 1 )
              {
                v836 = (HMODULE *)&unk_1808DA540;
                v837 = 4LL;
                do
                {
                  if ( *v836 )
                    FreeLibrary(*v836);
                  v836 += 3;
                  --v837;
                }
                while ( v837 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              }
            }
            _InterlockedExchange(&dword_1808DDD40, 0);
            v838 = qword_1808DDD48;
            LODWORD(v1330) = dword_1808DA538;
            v839 = off_1808D13D8[0]();
            v1471 = 0;
            lpModuleName = (LPCWSTR)(unsigned int)(v839 - v838);
            v1475 = 0LL;
            v1472 = 0LL;
            v1473 = 0LL;
            v1474 = 0LL;
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v906 = dword_1808DDD3C;
            if ( !dword_1808DDD3C )
            {
              LODWORD(v1311) = 0;
              LODWORD(v1323) = 0;
              LODWORD(v1313) = 0;
              v907 = (const WCHAR *)MemoryAlloc(0x338uLL);
              v1345 = v907;
              if ( !v907 )
                goto LABEL_1156;
              v908 = (char *)v907 + 7;
              v909 = 0;
              v910 = (unsigned __int8 *)&unk_180783012;
              v911 = -1;
              v912 = 0;
              v913 = 103LL;
              v914 = 0;
              do
              {
                v915 = *(v910 - 1) | (*(v910 - 2) << 8);
                v916 = v910[2] << 8;
                v917 = *v910;
                v910 += 8;
                v918 = *(v910 - 7) | ((v917 | (v915 << 8)) << 8);
                v919 = v914 ^ v918;
                v920 = *(v910 - 3) | ((*(v910 - 4) | ((*(v910 - 5) | v916) << 8)) << 8);
                v921 = v914 ^ v918 ^ v912 ^ v920 ^ 0xAC987321;
                v922 = v919 ^ (__ROR4__(v921, 22) + 4991 * __ROR4__(v921 + 1419157410, 27));
                v923 = v921 ^ (43881 * __ROR4__(v922 + 133239679, 9) - __ROR4__(v922, 30));
                v924 = v922 ^ (24670 * v923 - (v923 >> 13) - 123127970);
                v925 = v923 ^ (2033 * __ROR4__(v924 ^ 0xAB69, 26) - __ROR4__(v924, 30));
                v926 = v924 ^ (133239679 - (v925 ^ 0xAB69605E));
                v927 = v925 ^ (43881 * (v926 ^ 0x137F)) ^ __ROR4__(v926, 6);
                v928 = v926 ^ (__ROR4__(v927, 30) + 24670 * __ROR4__(v927 + 133239679, 15));
                v929 = v927 ^ (2033 * __ROR4__(v928 + 1419157410, 14) - __ROR4__(v928, 24));
                v930 = v928 ^ __ROR4__(v929, 10) ^ (4991 * __ROR4__(v929 ^ 0xAB69605E, 12));
                v931 = v929 ^ (v930 >> 10) ^ (43881 * (v930 ^ 0x7F1));
                v932 = v930 ^ (2033 * (__ROR4__(~v931, 5) + 24670));
                v933 = v932 ^ (((v931 ^ (v932 - 2033) ^ 0xAB69605E) >> 2)
                             + 4991 * __ROR4__(v931 ^ (v932 - 2033) ^ 0xAB6967AF, 30));
                v934 = v931 ^ (v932 - 2033) ^ 0xAB69605E ^ (__ROR4__(v933, 25) + 43881 * __ROR4__(v933 - 133239679, 6));
                v935 = v933 ^ (24670 * (v934 ^ 0x137F) + __ROR4__(v934, 9));
                v936 = v934 ^ (__ROR4__(v935, 25) + 2033 * __ROR4__(v935 ^ 0xAB69, 27));
                v937 = v935 ^ v936 ^ 0xAC987321;
                v938 = v936 ^ (4991 * __ROR4__(v937, 3) - 219010071);
                v939 = v937 ^ (24670 * __ROR4__(v938 - 133239679, 1) - __ROR4__(v938, 6));
                v940 = v938 ^ (__ROR4__(v939, 18) + 2033 * __ROR4__(v939 - 1419157410, 29));
                v941 = v939 ^ (4991 * __ROR4__(v940 - 1419157410, 17) - __ROR4__(v940, 14));
                v942 = v940 ^ (v941 >> 3) ^ (43881 * (v941 ^ 0x605E));
                v943 = v909 ^ __ROR4__(v942, 30) ^ (24670 * __ROR4__(v942 ^ 0x7F1137F, 28));
                v909 = v918;
                v914 = v941 ^ v943;
                *(v908 - 4) = v914;
                v912 = v942 ^ v911;
                *v908 = v942 ^ v911;
                v911 = v920;
                *(v908 - 5) = __ROR4__(v914, 8);
                v908 += 8;
                *(v908 - 9) = __ROR4__(v912, 8);
                *(v908 - 14) = __ROR4__(v914, 16);
                *(v908 - 10) = __ROR4__(v912, 16);
                *(v908 - 15) = __ROR4__(v914, 24);
                *(v908 - 11) = __ROR4__(v912, 24);
                --v913;
              }
              while ( v913 );
              v944 = v1345;
              v945 = v1313;
              v946 = 0LL;
              v947 = 0;
              do
                v947 ^= *((_BYTE *)v1345 + v946++);
              while ( v946 < 0x338 );
              if ( v947 != 64LL )
              {
                MemoryFree((void *)v1345);
LABEL_1156:
                v948 = (HMODULE *)&unk_1808DA540;
                v949 = 4LL;
                v484 = 0LL;
                do
                {
                  if ( *v948 )
                    FreeLibrary(*v948);
                  v948 += 3;
                  --v949;
                }
                while ( v949 );
                v950 = (HMODULE *)&unk_1808DA540;
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                goto LABEL_1190;
              }
              *((_BYTE *)v1345 + 823) = 0;
              memset_0(&unk_1808DA540, 0, 0x60uLL);
              v951 = (WCHAR *)v944;
              if ( !*(_BYTE *)v944 )
                goto LABEL_1186;
              while ( 1 )
              {
                v952 = v944;
                v953 = -1LL;
                do
                  ++v953;
                while ( v944[v953] );
                v954 = &v944[v953];
                v1345 = (LPCWSTR)(3LL * (unsigned int)v1323);
                if ( !GetModuleHandleExW(0, v952, (HMODULE *)&unk_1808DA540 + 3 * (unsigned int)v1323) )
                  break;
                v955 = v1345;
                v945 = 0;
                v956 = *((_QWORD *)&unk_1808DA540 + (_QWORD)v1345);
                if ( *(_WORD *)v956 == 23117
                  && (v957 = *(int *)(v956 + 60), (unsigned int)v957 < 0x10000000)
                  && (v958 = *((_QWORD *)&unk_1808DA540 + (_QWORD)v1345) + v957,
                      v958 >= *((_QWORD *)&unk_1808DA540 + (_QWORD)v1345))
                  && *(_DWORD *)v958 == 17744 )
                {
                  if ( *(_WORD *)(v958 + 24) == 267 || *(_WORD *)(v958 + 24) == 523 )
                  {
                    *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)v1345 + 12) = *(_QWORD *)(v958 + 136);
                    *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v955 + 2) = *(_DWORD *)(v958 + 80);
                  }
                  else
                  {
                    v945 = -1073741811;
                  }
                }
                else
                {
                  v945 = -1073741701;
                }
                v959 = *(_DWORD *)(v954 + 1);
                v960 = 0;
                v944 = v954 + 3;
                LODWORD(v1313) = v959;
                v1309 = 0;
                if ( v959 )
                {
                  v961 = (unsigned int)v1323;
                  do
                  {
                    v962 = (const CHAR *)v944;
                    v963 = -1LL;
                    do
                      ++v963;
                    while ( *((_BYTE *)v944 + v963) );
                    v944 = (LPCWSTR)((char *)v944 + v963 + 1);
                    if ( v945 >= 0 )
                    {
                      v964 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v961), v962);
                      if ( !v964 )
                        goto LABEL_1185;
                      off_1808D1340[(unsigned int)v1311] = v964;
                      v960 = v1309;
                      v961 = (unsigned int)v1323;
                    }
                    LODWORD(v1311) = v1311 + 1;
                    v1309 = ++v960;
                  }
                  while ( v960 < (unsigned int)v1313 );
                }
                LODWORD(v1323) = v1323 + 1;
                if ( !*(_BYTE *)v944 )
                  goto LABEL_1185;
              }
              v945 = -1073741702;
LABEL_1185:
              if ( v951 )
              {
LABEL_1186:
                v965 = GetProcessHeap();
                HeapFree(v965, 0, v951);
              }
              if ( v945 < 0 )
                goto LABEL_1156;
              v906 = dword_1808DDD3C;
              v484 = 0LL;
            }
            v950 = (HMODULE *)&unk_1808DA540;
            dword_1808DDD3C = v906 + 1;
LABEL_1190:
            v966 = 4LL;
            _InterlockedExchange(&dword_1808DDD40, 0);
            LODWORD(v1475) = v1330;
            LODWORD(v1472) = (_DWORD)lpModuleName;
            v1471 = 1;
            LODWORD(v1473) = -1721306479;
            DWORD2(v1472) = 1;
            LODWORD(v1474) = 1;
            DWORD2(v1473) = 1;
            DWORD2(v1474) = 1;
            ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1808D1410)(0LL, 8225LL, 4LL, &v1471);
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v967 = dword_1808DDD3C;
            if ( dword_1808DDD3C > 0 )
            {
              --dword_1808DDD3C;
              if ( v967 == 1 )
              {
                do
                {
                  if ( *v950 )
                    FreeLibrary(*v950);
                  v950 += 3;
                  --v966;
                }
                while ( v966 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              }
            }
            _InterlockedExchange(&dword_1808DDD40, 0);
            ((void (__fastcall *)(_QWORD, SIZE_T))off_1808D14A0[0])(0LL, j);
            goto LABEL_1199;
          }
          v709 = v1355;
          lpMem = (LPVOID)v1355;
          v710 = v487 & 0xF;
          v1402 = 0;
          LODWORD(dwBytes) = v710;
          memset_0(v1403, 0, 0x64uLL);
          v711 = 1;
          v712 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1808D1390[0])(j, 7LL);
          if ( v712 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v712, 104LL, &v1402) )
          {
            if ( v1404 != 32 || !v1405 || v1403[0] <= 0 || v1403[1] <= 0 )
              v711 = 0;
            if ( v711 )
            {
LABEL_919:
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(&v1396, v709, HIDWORD(lpMem));
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(&v1397, v709, HIDWORD(lpMem));
              if ( v710 == 1 )
                pcchLength = ((__int64 (__fastcall *)(_QWORD))off_1808D1368[0])(v1388 == 0 ? 0xB26720 : 0);
LABEL_921:
              v745 = j;
              LODWORD(v1313) = off_1808D13C0((CToastCenterExperienceManager *)j, (struct CSingleViewShellExperience *)1);
              v746 = 2064;
              if ( v1387 )
                v746 = 133138;
              LODWORD(v1327) = v746;
              if ( v711 )
              {
                v747 = v1389;
                v1309 = v1388;
                v484 = 0LL;
                lpModuleName = v1392;
                v1329 = (SIZE_T)v1389;
                v1415 = 0;
                memset_0(v1416, 0, 0x64uLL);
                v1427 = 0;
                memset_0(v1428, 0, 0x64uLL);
                lpMem = 0LL;
                LODWORD(v1311) = 0;
                LODWORD(v1330) = 0;
                v1451 = 0LL;
                v1452 = 0;
                memset(v1450, 0, sizeof(v1450));
                v1433 = 0LL;
                if ( !v747 )
                  goto LABEL_1029;
                v748 = j;
                v749 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1808D1390[0])(j, 7LL);
                if ( !v749 )
                  goto LABEL_1008;
                if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v749, 104LL, &v1415) )
                {
                  lpMem = v1417;
                  LODWORD(v1311) = v1416[0];
                  LODWORD(v1330) = v1416[1];
                }
                Size = ((__int64 (__fastcall *)(SIZE_T))off_1808D1350[0])(v748);
                v750 = (CToastCenterExperienceManager *)Size;
                if ( Size )
                {
                  DWORD1(v1450[0]) = v1396.m128i_i32[2] - v1396.m128i_i32[0];
                  DWORD2(v1450[0]) = v1396.m128i_i32[1] - v1396.m128i_i32[3];
                  v1377 = 0LL;
                  LODWORD(v1450[0]) = 40;
                  HIDWORD(v1450[0]) = 2097153;
                  v1322 = (LPVOID)((__int64 (__fastcall *)(size_t, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                    Size,
                                    v1450,
                                    0LL,
                                    &v1377,
                                    0LL,
                                    0);
                  v751 = v1322;
                  if ( v1322 )
                  {
                    v754 = ((unsigned int (__fastcall *)(LPVOID, __int64, int *))off_1808D13A8[0])(v1322, 104LL, &v1427) == 0;
                    v755 = 0LL;
                    if ( !v754 )
                      v755 = v1429;
                    DWORD2(v1433) = v1396.m128i_i32[2] - v1396.m128i_i32[0];
                    HIDWORD(v1433) = v1396.m128i_i32[3] - v1396.m128i_i32[1];
                    v1340 = v755;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808D13B8)(v750, v751);
                    off_1808D13C0(v750, (struct CSingleViewShellExperience *)1);
                    v756 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                     v750,
                                     lpModuleName);
                    v757 = off_1808D1428[0];
                    v1315 = v756;
                    v758 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v757)(
                      v750,
                      &v1433,
                      v758);
                    v759 = 0;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v750,
                      v1329,
                      0xFFFFFFFFLL,
                      &v1433,
                      (_DWORD)v1327,
                      0LL);
                    if ( v710 == 1 )
                    {
                      if ( v1309 )
                        LODWORD(v1323) = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                      else
                        LODWORD(v1323) = 0xFFFFFF;
                    }
                    else
                    {
                      LODWORD(v1323) = -5723992;
                    }
                    v760 = 0;
                    v761 = -v1396.m128i_i32[0];
                    if ( v1396.m128i_i32[0] >= 0 )
                    {
                      v760 = v1396.m128i_i32[0];
                      v761 = 0;
                    }
                    v762 = -v1396.m128i_i32[1];
                    LODWORD(v1326) = v760;
                    if ( v1396.m128i_i32[1] >= 0 )
                    {
                      v762 = 0;
                      v759 = v1396.m128i_i32[1];
                    }
                    v1309 = v759;
                    v763 = DWORD2(v1433) - v761;
                    if ( DWORD2(v1433) - v761 >= (int)v1311 - v760 )
                      v763 = v1311 - v760;
                    LODWORD(v1319) = v763;
                    v764 = HIDWORD(v1433) - v762;
                    if ( HIDWORD(v1433) - v762 >= (int)v1330 - v759 )
                      v764 = v1330 - v759;
                    v752 = 0;
                    if ( v763 > 0 && v764 > 0 )
                    {
                      v765 = (unsigned int)v1319;
                      v766 = v1323;
                      v1343 = (void *)(4LL * SDWORD2(v1433));
                      v1342 = (unsigned int)v764;
                      lpModuleName = (LPCWSTR)(int)v1311;
                      v767 = v1309 * v1311;
                      v768 = (int)v1311;
                      LODWORD(v1311) = 0;
                      v769 = (char *)v1340 + 4 * v761 + 4 * (__int64)(v762 * DWORD2(v1433));
                      v1329 = (SIZE_T)v769;
                      v770 = (char *)lpMem + 4 * (int)v1326 + 4 * (__int64)v767;
                      v1340 = v770;
                      do
                      {
                        v771 = v1311;
                        v772 = (unsigned __int8 *)(v769 + 2);
                        lpMem = (LPVOID)v765;
                        v773 = v770 - v769;
                        v774 = (char *)v765;
                        do
                        {
                          if ( (unsigned __int8)((*v772 + *(v772 - 2) + 2 * (unsigned int)*(v772 - 1)) >> 2) != 0xFF )
                          {
                            v775 = (unsigned __int8)~((*v772 + *(v772 - 2) + 2 * (unsigned int)*(v772 - 1)) >> 2);
                            v776 = BYTE1(v1323);
                            v772[v773] -= ~((*v772 + *(v772 - 2) + 2 * (unsigned int)*(v772 - 1)) >> 2)
                                        * (v766 - v772[v773]);
                            v777 = v772[v773 - 1];
                            v778 = (unsigned __int64)(2155905153LL * v775 * (v776 - v777)) >> 32;
                            v779 = BYTE2(v1323);
                            v772[v773 - 1] = v777 + (v778 >> 7 < 0) + (v778 >> 7);
                            v780 = v772[v773 - 2];
                            v781 = (unsigned __int64)(2155905153LL * v775 * (v779 - v780)) >> 32;
                            v772[v773 - 2] = v780 + (v781 >> 7 < 0) + (v781 >> 7);
                            v774 = (char *)lpMem;
                            v772[v773 + 1] += v775 * (255 - v772[v773 + 1]) / 255;
                          }
                          v772 += 4;
                          v752 = v771;
                          lpMem = --v774;
                        }
                        while ( v774 );
                        v769 = (char *)v1343 + v1329;
                        v754 = v1342-- == 1;
                        v770 = (char *)v1340 + 4 * v768;
                        v1329 += (SIZE_T)v1343;
                        v1340 = v770;
                        LODWORD(v1311) = v771;
                      }
                      while ( !v754 );
                      v710 = dwBytes;
                      v750 = (CToastCenterExperienceManager *)Size;
                    }
                    ((void (__fastcall *)(LPVOID))off_1808D1378)(v1322);
                    if ( v1315 )
                      ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808D13B8)(v750, v1315);
                  }
                  else
                  {
                    v752 = GetLastError();
                    v753 = v752 < 0;
                    if ( v752 > 0 )
                    {
                      v752 = (unsigned __int16)v752 | 0x80070000;
                      v753 = v752 < 0;
                    }
                    if ( !v753 )
                      v752 = -2147467259;
                  }
                  ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808D1370[0])(v750);
                  v484 = 0LL;
                  if ( v752 < 0 )
                    goto LABEL_1029;
                  v782 = v1390;
                  v1309 = v1388;
                  lpModuleName = v1393;
                  v1329 = (SIZE_T)v1390;
                  v1412 = 0;
                  memset_0(v1413, 0, 0x64uLL);
                  v1418 = 0;
                  memset_0(v1419, 0, 0x64uLL);
                  lpMem = 0LL;
                  LODWORD(v1311) = 0;
                  LODWORD(v1330) = 0;
                  v1442 = 0LL;
                  v1443 = 0;
                  memset(v1441, 0, sizeof(v1441));
                  v1430 = 0LL;
                  if ( !v782 )
                    goto LABEL_1029;
                  v783 = j;
                  v784 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1808D1390[0])(j, 7LL);
                  if ( !v784 )
                    goto LABEL_1008;
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v784, 104LL, &v1412) )
                  {
                    lpMem = v1414;
                    LODWORD(v1311) = v1413[0];
                    LODWORD(v1330) = v1413[1];
                  }
                  Size = ((__int64 (__fastcall *)(SIZE_T))off_1808D1350[0])(v783);
                  v785 = (CToastCenterExperienceManager *)Size;
                  if ( Size )
                  {
                    DWORD1(v1441[0]) = v1397.m128i_i32[2] - v1397.m128i_i32[0];
                    DWORD2(v1441[0]) = v1397.m128i_i32[1] - v1397.m128i_i32[3];
                    v1379 = 0LL;
                    LODWORD(v1441[0]) = 40;
                    HIDWORD(v1441[0]) = 2097153;
                    v1322 = (LPVOID)((__int64 (__fastcall *)(size_t, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                      Size,
                                      v1441,
                                      0LL,
                                      &v1379,
                                      0LL,
                                      0);
                    v786 = v1322;
                    if ( !v1322 )
                    {
                      v787 = GetLastError();
                      v788 = v787 < 0;
                      if ( v787 > 0 )
                      {
                        v787 = (unsigned __int16)v787 | 0x80070000;
                        v788 = v787 < 0;
                      }
                      if ( !v788 )
                        v787 = -2147467259;
LABEL_1000:
                      ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808D1370[0])(v785);
                      v484 = 0LL;
                      if ( v787 < 0 )
                        goto LABEL_1029;
                      v816 = 0LL;
LABEL_1145:
                      off_1808D13C0(
                        (CToastCenterExperienceManager *)j,
                        (struct CSingleViewShellExperience *)(unsigned int)v1313);
                      v825 = v1316;
                      if ( !v1316 )
                      {
LABEL_1027:
                        if ( !v816 )
                          goto LABEL_1029;
                        goto LABEL_1028;
                      }
LABEL_1026:
                      ((void (__fastcall *)(LPVOID))off_1808D1378)(v825);
                      goto LABEL_1027;
                    }
                    v754 = ((unsigned int (__fastcall *)(LPVOID, __int64, int *))off_1808D13A8[0])(v1322, 104LL, &v1418) == 0;
                    v789 = 0LL;
                    if ( !v754 )
                      v789 = v1420;
                    DWORD2(v1430) = v1397.m128i_i32[2] - v1397.m128i_i32[0];
                    HIDWORD(v1430) = v1397.m128i_i32[3] - v1397.m128i_i32[1];
                    v1340 = v789;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808D13B8)(v785, v786);
                    off_1808D13C0(v785, (struct CSingleViewShellExperience *)1);
                    v790 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                     v785,
                                     lpModuleName);
                    v791 = off_1808D1428[0];
                    v1326 = v790;
                    v792 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v791)(
                      v785,
                      &v1430,
                      v792);
                    v787 = 0;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v785,
                      v1329,
                      0xFFFFFFFFLL,
                      &v1430,
                      (_DWORD)v1327,
                      0LL);
                    if ( v710 == 1 )
                    {
                      if ( !v1309 )
                      {
                        LODWORD(v1320) = 0xFFFFFF;
LABEL_981:
                        v794 = 0;
                        v795 = -v1397.m128i_i32[0];
                        v796 = 0;
                        if ( v1397.m128i_i32[0] >= 0 )
                        {
                          v794 = v1397.m128i_i32[0];
                          v795 = 0;
                        }
                        v797 = -v1397.m128i_i32[1];
                        if ( v1397.m128i_i32[1] >= 0 )
                        {
                          v796 = v1397.m128i_i32[1];
                          v797 = 0;
                        }
                        v798 = DWORD2(v1430) - v795;
                        if ( DWORD2(v1430) - v795 >= (int)v1311 - v794 )
                          v798 = v1311 - v794;
                        v799 = HIDWORD(v1430) - v797;
                        if ( HIDWORD(v1430) - v797 >= (int)v1330 - v796 )
                          v799 = v1330 - v796;
                        if ( v798 > 0 && v799 > 0 )
                        {
                          lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1430));
                          v1342 = (unsigned int)v799;
                          v1343 = (void *)(int)v1311;
                          v800 = (char *)v1340 + 4 * v795 + 4 * (__int64)(DWORD2(v1430) * v797);
                          v1329 = (SIZE_T)v800;
                          v801 = (char *)lpMem + 4 * v794 + 4 * (__int64)((int)v1311 * v796);
                          v802 = 0;
                          LODWORD(v1311) = 0;
                          v1340 = v801;
                          do
                          {
                            v803 = v1337;
                            v804 = (unsigned __int8 *)(v800 + 2);
                            v805 = (unsigned int)v798;
                            v806 = v801 - v800;
                            lpMem = (LPVOID)(unsigned int)v798;
                            do
                            {
                              if ( (unsigned __int8)((*v804 + *(v804 - 2) + 2 * (unsigned int)*(v804 - 1)) >> 2) != 0xFF )
                              {
                                v807 = (unsigned __int8)~((*v804 + *(v804 - 2) + 2 * (unsigned int)*(v804 - 1)) >> 2);
                                v808 = BYTE1(v1320);
                                v804[v806] -= ~((*v804 + *(v804 - 2) + 2 * (unsigned int)*(v804 - 1)) >> 2)
                                            * (v803 - v804[v806]);
                                v809 = v804[v806 - 1];
                                v810 = (unsigned __int64)(2155905153LL * v807 * (v808 - v809)) >> 32;
                                v811 = BYTE2(v1320);
                                v804[v806 - 1] = v809 + (v810 >> 7 < 0) + (v810 >> 7);
                                v812 = v804[v806 - 2];
                                v813 = (unsigned __int64)(2155905153LL * v807 * (v811 - v812)) >> 32;
                                v804[v806 - 2] = v812 + (v813 >> 7 < 0) + (v813 >> 7);
                                v814 = v804[v806 + 1];
                                v815 = v807 * (255 - v814);
                                v802 = v1311;
                                LOBYTE(v813) = v814 + v815 / 255;
                                v805 = (unsigned __int64)lpMem;
                                v804[v806 + 1] = v813;
                              }
                              v804 += 4;
                              v787 = v802;
                              lpMem = (LPVOID)--v805;
                            }
                            while ( v805 );
                            v800 = (char *)lpModuleName + v1329;
                            v754 = v1342-- == 1;
                            v1329 += (SIZE_T)lpModuleName;
                            LODWORD(v1311) = v802;
                            v801 = (char *)v1340 + 4 * (_QWORD)v1343;
                            v1340 = v801;
                          }
                          while ( !v754 );
                          v785 = (CToastCenterExperienceManager *)Size;
                        }
                        ((void (__fastcall *)(LPVOID))off_1808D1378)(v1322);
                        if ( v1326 )
                          ((void (__fastcall *)(CToastCenterExperienceManager *, void *))off_1808D13B8)(v785, v1326);
                        goto LABEL_1000;
                      }
                      v793 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                    }
                    else
                    {
                      v793 = -5723992;
                    }
                    LODWORD(v1320) = v793;
                    v1337 = v793;
                    goto LABEL_981;
                  }
                }
                v484 = 0LL;
LABEL_1008:
                GetLastError();
                goto LABEL_1029;
              }
              v484 = 0LL;
              if ( v1388 || (v817 = -64, v710 == 1) )
                v817 = -1;
              BYTE2(v1328) = v817;
              LOWORD(v1328) = 0;
              BYTE3(v1328) = 1;
              LODWORD(v1323) = 0;
              LODWORD(v1320) = 0;
              LODWORD(v1325) = 0;
              v1317 = (LPVOID)((__int64 (__fastcall *)(SIZE_T))off_1808D1350[0])(v745);
              if ( !v1317 )
                goto LABEL_1008;
              if ( v710 == 1 )
              {
                v818 = v1397.m128i_i32[2] - v1397.m128i_i32[0];
                if ( v1397.m128i_i32[2] - v1397.m128i_i32[0] <= v1396.m128i_i32[2] - v1396.m128i_i32[0] )
                  v818 = v1396.m128i_i32[2] - v1396.m128i_i32[0];
                v819 = v1397.m128i_i32[3] - v1396.m128i_i32[1];
                LODWORD(v1311) = v818;
                v820 = 0;
                LODWORD(v1321) = v1397.m128i_i32[3] - v1396.m128i_i32[1];
                v821 = 0;
                if ( v1387 )
                {
                  v821 = v1397.m128i_i32[0] + v818 - v1397.m128i_i32[2];
                  LODWORD(v1323) = v1396.m128i_i32[0] + v818 - v1396.m128i_i32[2];
                  LODWORD(v1325) = v821;
                  v820 = v1323;
                }
                LODWORD(v1326) = v1397.m128i_i32[2] + v821 - v1397.m128i_i32[0];
                v822 = v1396.m128i_i32[2] + v820 - v1396.m128i_i32[0];
                LODWORD(v1324) = v1397.m128i_i32[1] - v1396.m128i_i32[1];
                LODWORD(v1330) = v1397.m128i_i32[3] - v1396.m128i_i32[1];
                LODWORD(v1315) = v1396.m128i_i32[3] - v1396.m128i_i32[1];
              }
              else
              {
                v818 = DWORD2(v1355);
                v819 = HIDWORD(v1355);
                LODWORD(v1311) = DWORD2(v1355);
                LODWORD(v1315) = _mm_cvtsi128_si32(_mm_srli_si128(v1396, 12));
                LODWORD(v1320) = _mm_cvtsi128_si32(_mm_srli_si128(v1396, 4));
                LODWORD(v1330) = _mm_cvtsi128_si32(_mm_srli_si128(v1397, 12));
                v822 = _mm_cvtsi128_si32(_mm_srli_si128(v1396, 8));
                LODWORD(v1324) = _mm_cvtsi128_si32(_mm_srli_si128(v1397, 4));
                LODWORD(v1321) = HIDWORD(v1355);
                LODWORD(v1323) = _mm_cvtsi128_si32(v1396);
                LODWORD(v1326) = _mm_cvtsi128_si32(_mm_srli_si128(v1397, 8));
                LODWORD(v1325) = _mm_cvtsi128_si32(v1397);
              }
              v1437[0] = 40;
              v1380 = 0LL;
              v1437[2] = -v819;
              memset(&v1437[4], 0, 28);
              v1437[1] = v818;
              v1437[3] = 2097153;
              v823 = (void *)((__int64 (__fastcall *)(LPVOID, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                               v1317,
                               v1437,
                               0LL,
                               &v1380,
                               0LL,
                               0);
              v1316 = v823;
              if ( !v823 )
              {
                GetLastError();
                v816 = v1317;
                v484 = 0LL;
LABEL_1028:
                ((void (__fastcall *)(LPVOID))off_1808D1370[0])(v816);
LABEL_1029:
                if ( pcchLength )
                  ((void (__fastcall *)(size_t))off_1808D1378)(pcchLength);
                goto LABEL_1031;
              }
              ((void (__fastcall *)(LPVOID, void *))off_1808D13B8)(v1317, v823);
              if ( v710 == 1 && pcchLength )
              {
                v1434 = 0LL;
                v1436 = v1321;
                v1435 = v818;
                ((void (__fastcall *)(LPVOID, __int64 *))off_1808D1428[0])(v1317, &v1434);
              }
              LODWORD(v1334) = v1388;
              lpModuleName = v1392;
              lpMem = v1389;
              v1409 = 0;
              memset_0(v1410, 0, 0x64uLL);
              v1421 = 0;
              memset_0(v1422, 0, 0x64uLL);
              v1329 = 0LL;
              LODWORD(v1319) = 0;
              v1309 = 0;
              memset(v1444, 0, sizeof(v1444));
              v1445 = 0LL;
              v1446 = 0;
              v1431 = 0LL;
              if ( !lpMem )
                goto LABEL_1024;
              v824 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1808D1390[0])(v1317, 7LL);
              if ( v824 )
              {
                if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v824, 104LL, &v1409) )
                {
                  v1329 = v1411;
                  LODWORD(v1319) = v1410[0];
                  v1309 = v1410[1];
                }
                Size = ((__int64 (__fastcall *)(LPVOID))off_1808D1350[0])(v1317);
                if ( Size )
                {
                  v1381 = 0LL;
                  DWORD1(v1444[0]) = v822 - v1323;
                  DWORD2(v1444[0]) = (_DWORD)v1320 - (_DWORD)v1315;
                  LODWORD(v1444[0]) = 40;
                  HIDWORD(v1444[0]) = 2097153;
                  v1343 = (void *)((__int64 (__fastcall *)(size_t, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                    Size,
                                    v1444,
                                    0LL,
                                    &v1381,
                                    0LL,
                                    0);
                  if ( v1343 )
                  {
                    v754 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1808D13A8[0])(v1343, 104LL, &v1421) == 0;
                    v842 = 0LL;
                    if ( !v754 )
                      v842 = v1423;
                    DWORD2(v1431) = v822 - v1323;
                    v843 = (CToastCenterExperienceManager *)Size;
                    v1340 = v842;
                    HIDWORD(v1431) = (_DWORD)v1315 - (_DWORD)v1320;
                    ((void (__fastcall *)(size_t, void *))off_1808D13B8)(Size, v1343);
                    off_1808D13C0(v843, (struct CSingleViewShellExperience *)1);
                    v844 = (const WCHAR *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                            v843,
                                            lpModuleName);
                    v845 = off_1808D1428[0];
                    v1345 = v844;
                    v846 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(size_t, __int128 *, __int64))v845)(Size, &v1431, v846);
                    v840 = 0;
                    ((void (__fastcall *)(size_t, LPVOID, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      Size,
                      lpMem,
                      0xFFFFFFFFLL,
                      &v1431,
                      (_DWORD)v1327,
                      0LL);
                    if ( v710 == 1 )
                    {
                      if ( (_DWORD)v1334 )
                        LODWORD(v1334) = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                      else
                        LODWORD(v1334) = 0xFFFFFF;
                    }
                    else
                    {
                      LODWORD(v1334) = -5723992;
                    }
                    v847 = 0;
                    v848 = -(int)v1323;
                    v849 = 0;
                    if ( (v1323 & 0x80000000) == 0LL )
                    {
                      v847 = v1323;
                      v848 = 0;
                    }
                    v850 = -(int)v1320;
                    if ( (int)v1320 >= 0 )
                    {
                      v849 = (int)v1320;
                      v850 = 0;
                    }
                    v851 = DWORD2(v1431) - v848;
                    if ( DWORD2(v1431) - v848 >= (int)v1319 - v847 )
                      v851 = (_DWORD)v1319 - v847;
                    LODWORD(v1315) = v851;
                    v852 = HIDWORD(v1431) - v850;
                    if ( HIDWORD(v1431) - v850 >= (int)(v1309 - v849) )
                      v852 = v1309 - v849;
                    if ( v851 > 0 && v852 > 0 )
                    {
                      v853 = (unsigned int)v1315;
                      v854 = v1334;
                      lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1431));
                      v855 = lpModuleName;
                      v1342 = (unsigned int)v852;
                      v1322 = (LPVOID)(int)v1319;
                      v856 = (unsigned __int8 *)v1340 + 4 * v848 + 4 * (__int64)(DWORD2(v1431) * v850);
                      v1340 = v856;
                      v857 = v1329 + 4 * (v847 + (__int64)((int)v1319 * v849));
                      v858 = 0;
                      v1309 = 0;
                      v1329 = v857;
                      do
                      {
                        lpMem = (LPVOID)v853;
                        v859 = v857 - (_QWORD)v856;
                        v860 = v856 + 2;
                        v861 = (char *)v853;
                        do
                        {
                          if ( (unsigned __int8)((*v860 + *(v860 - 2) + 2 * (unsigned int)*(v860 - 1)) >> 2) != 0xFF )
                          {
                            v862 = (unsigned __int8)~((*v860 + *(v860 - 2) + 2 * (unsigned int)*(v860 - 1)) >> 2);
                            v863 = BYTE1(v1334);
                            v860[v859] -= ~((*v860 + *(v860 - 2) + 2 * (unsigned int)*(v860 - 1)) >> 2)
                                        * (v854 - v860[v859]);
                            v864 = v860[v859 - 1];
                            v865 = (unsigned __int64)(2155905153LL * v862 * (v863 - v864)) >> 32;
                            v866 = BYTE2(v1334);
                            v860[v859 - 1] = v864 + (v865 >> 7 < 0) + (v865 >> 7);
                            v867 = v860[v859 - 2];
                            v868 = (unsigned __int64)(2155905153LL * v862 * (v866 - v867)) >> 32;
                            v860[v859 - 2] = v867 + (v868 >> 7 < 0) + (v868 >> 7);
                            v869 = v860[v859 + 1];
                            v870 = v862 * (255 - v869);
                            v858 = v1309;
                            LOBYTE(v868) = v869 + v870 / 255;
                            v861 = (char *)lpMem;
                            v860[v859 + 1] = v868;
                          }
                          v860 += 4;
                          v840 = v858;
                          lpMem = --v861;
                        }
                        while ( v861 );
                        v856 = (unsigned __int8 *)v1340 + (_QWORD)v855;
                        v754 = v1342-- == 1;
                        v1340 = (char *)v1340 + (_QWORD)v855;
                        v1309 = v858;
                        v857 = v1329 + 4LL * (_QWORD)v1322;
                        v1329 = v857;
                      }
                      while ( !v754 );
                      v710 = dwBytes;
                      v79 = v1308;
                      v818 = v1311;
                    }
                    ((void (__fastcall *)(void *))off_1808D1378)(v1343);
                    if ( v1345 )
                      ((void (__fastcall *)(size_t, LPCWSTR))off_1808D13B8)(Size, v1345);
                  }
                  else
                  {
                    v840 = GetLastError();
                    v841 = v840 < 0;
                    if ( v840 > 0 )
                    {
                      v840 = (unsigned __int16)v840 | 0x80070000;
                      v841 = v840 < 0;
                    }
                    if ( !v841 )
                      v840 = -2147467259;
                  }
                  ((void (__fastcall *)(size_t))off_1808D1370[0])(Size);
                  if ( v840 < 0 )
                    goto LABEL_1024;
                  v871 = v1390;
                  LODWORD(v1315) = v1388;
                  v1406 = 0;
                  v1345 = v1393;
                  lpModuleName = (LPCWSTR)v1390;
                  memset_0(v1407, 0, 0x64uLL);
                  v1424 = 0;
                  memset_0(v1425, 0, 0x64uLL);
                  lpMem = 0LL;
                  LODWORD(v1319) = 0;
                  v1309 = 0;
                  v1448 = 0LL;
                  v1449 = 0;
                  memset(v1447, 0, sizeof(v1447));
                  v1432 = 0LL;
                  if ( !v871 )
                    goto LABEL_1024;
                  v816 = v1317;
                  v872 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1808D1390[0])(v1317, 7LL);
                  if ( !v872 )
                  {
                    GetLastError();
                    goto LABEL_1025;
                  }
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v872, 104LL, &v1406) )
                  {
                    lpMem = v1408;
                    LODWORD(v1319) = v1407[0];
                    v1309 = v1407[1];
                  }
                  Size = ((__int64 (__fastcall *)(LPVOID))off_1808D1350[0])(v816);
                  v873 = (CToastCenterExperienceManager *)Size;
                  if ( Size )
                  {
                    DWORD1(v1447[0]) = (_DWORD)v1326 - v1325;
                    DWORD2(v1447[0]) = (_DWORD)v1324 - v1330;
                    v1383[0] = 0LL;
                    LODWORD(v1447[0]) = 40;
                    HIDWORD(v1447[0]) = 2097153;
                    v874 = (void *)((__int64 (__fastcall *)(size_t, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                     Size,
                                     v1447,
                                     0LL,
                                     v1383,
                                     0LL,
                                     0);
                    v1343 = v874;
                    if ( !v874 )
                    {
                      v875 = GetLastError();
                      v876 = v875 < 0;
                      if ( v875 > 0 )
                      {
                        v875 = (unsigned __int16)v875 | 0x80070000;
                        v876 = v875 < 0;
                      }
                      if ( !v876 )
                        v875 = -2147467259;
                      goto LABEL_1140;
                    }
                    v754 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1808D13A8[0])(v874, 104LL, &v1424) == 0;
                    v877 = 0LL;
                    if ( !v754 )
                      v877 = v1426;
                    DWORD2(v1432) = (_DWORD)v1326 - v1325;
                    HIDWORD(v1432) = v1330 - (_DWORD)v1324;
                    v1329 = v877;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, void *))off_1808D13B8)(v873, v1343);
                    off_1808D13C0(v873, (struct CSingleViewShellExperience *)1);
                    v878 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                     v873,
                                     v1345);
                    v879 = off_1808D1428[0];
                    v1322 = v878;
                    v880 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(size_t, __int128 *, __int64))v879)(Size, &v1432, v880);
                    v875 = 0;
                    ((void (__fastcall *)(size_t, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      Size,
                      lpModuleName,
                      0xFFFFFFFFLL,
                      &v1432,
                      (_DWORD)v1327,
                      0LL);
                    if ( v710 == 1 )
                    {
                      if ( !(_DWORD)v1315 )
                      {
                        LODWORD(v1320) = 0xFFFFFF;
LABEL_1121:
                        v882 = 0;
                        v883 = -(int)v1325;
                        v884 = 0;
                        if ( (v1325 & 0x80000000) == 0LL )
                        {
                          v882 = v1325;
                          v883 = 0;
                        }
                        v885 = -(int)v1324;
                        if ( (int)v1324 >= 0 )
                        {
                          v884 = (int)v1324;
                          v885 = 0;
                        }
                        v886 = DWORD2(v1432) - v883;
                        if ( DWORD2(v1432) - v883 >= (int)v1319 - v882 )
                          v886 = (_DWORD)v1319 - v882;
                        LODWORD(v1330) = v886;
                        v887 = HIDWORD(v1432) - v885;
                        if ( HIDWORD(v1432) - v885 >= (int)(v1309 - v884) )
                          v887 = v1309 - v884;
                        if ( v886 > 0 && v887 > 0 )
                        {
                          v888 = (unsigned int)v1330;
                          v889 = v1337;
                          v1345 = (LPCWSTR)(4LL * SDWORD2(v1432));
                          v890 = v1345;
                          v1342 = (unsigned int)v887;
                          lpModuleName = (LPCWSTR)(int)v1319;
                          v891 = v1329 + 4 * (v883 + (__int64)(DWORD2(v1432) * v885));
                          v1329 = v891;
                          v892 = (char *)lpMem + 4 * v882 + 4 * (__int64)((int)v1319 * v884);
                          v893 = 0;
                          v1309 = 0;
                          v1340 = v892;
                          do
                          {
                            lpMem = (LPVOID)v888;
                            v894 = &v892[-v891];
                            v895 = (unsigned __int8 *)(v891 + 2);
                            v896 = (char *)v888;
                            do
                            {
                              if ( (unsigned __int8)((*v895 + *(v895 - 2) + 2 * (unsigned int)*(v895 - 1)) >> 2) != 0xFF )
                              {
                                v897 = (unsigned __int8)~((*v895 + *(v895 - 2) + 2 * (unsigned int)*(v895 - 1)) >> 2);
                                v898 = BYTE1(v1320);
                                v894[(_QWORD)v895] -= ~((*v895 + *(v895 - 2) + 2 * (unsigned int)*(v895 - 1)) >> 2)
                                                    * (v889 - v894[(_QWORD)v895]);
                                v899 = (unsigned __int8)v894[(_QWORD)v895 - 1];
                                v900 = (unsigned __int64)(2155905153LL * v897 * (v898 - v899)) >> 32;
                                v901 = BYTE2(v1320);
                                v894[(_QWORD)v895 - 1] = v899 + (v900 >> 7 < 0) + (v900 >> 7);
                                v902 = (unsigned __int8)v894[(_QWORD)v895 - 2];
                                v903 = (unsigned __int64)(2155905153LL * v897 * (v901 - v902)) >> 32;
                                v894[(_QWORD)v895 - 2] = v902 + (v903 >> 7 < 0) + (v903 >> 7);
                                v904 = (unsigned __int8)v894[(_QWORD)v895 + 1];
                                v905 = v897 * (255 - v904);
                                v893 = v1309;
                                LOBYTE(v903) = v904 + v905 / 255;
                                v896 = (char *)lpMem;
                                v894[(_QWORD)v895 + 1] = v903;
                              }
                              v895 += 4;
                              v875 = v893;
                              lpMem = --v896;
                            }
                            while ( v896 );
                            v891 = (SIZE_T)v890 + v1329;
                            v754 = v1342-- == 1;
                            v1329 += (SIZE_T)v890;
                            v1309 = v893;
                            v892 = (char *)v1340 + 4 * (_QWORD)lpModuleName;
                            v1340 = v892;
                          }
                          while ( !v754 );
                          v710 = dwBytes;
                          v79 = v1308;
                          v818 = v1311;
                        }
                        ((void (__fastcall *)(void *))off_1808D1378)(v1343);
                        if ( v1322 )
                          ((void (__fastcall *)(size_t, LPVOID))off_1808D13B8)(Size, v1322);
LABEL_1140:
                        ((void (__fastcall *)(size_t))off_1808D1370[0])(Size);
                        if ( v875 >= 0 )
                        {
                          v816 = v1317;
                          if ( v710 == 1 )
                            ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, int))off_1808D1340[0])(
                              j,
                              v1396.m128i_u32[0],
                              v1396.m128i_u32[1],
                              v818,
                              v1321,
                              v1317,
                              0,
                              0,
                              13369376);
                          else
                            ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, unsigned __int32, _DWORD, _DWORD))off_1808D1380[0])(
                              j,
                              (unsigned int)v1355,
                              DWORD1(v1355),
                              v818,
                              v1321,
                              v1317,
                              0,
                              0,
                              v818,
                              v1321,
                              (_DWORD)v1328);
                          v484 = 0LL;
                          goto LABEL_1145;
                        }
                        goto LABEL_1024;
                      }
                      v881 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                    }
                    else
                    {
                      v881 = -5723992;
                    }
                    LODWORD(v1320) = v881;
                    v1337 = v881;
                    goto LABEL_1121;
                  }
                }
              }
              GetLastError();
LABEL_1024:
              v816 = v1317;
LABEL_1025:
              v825 = v1316;
              v484 = 0LL;
              goto LABEL_1026;
            }
          }
          else
          {
            v711 = 0;
          }
          if ( v710 != 1 )
            goto LABEL_921;
          goto LABEL_919;
        }
        v1342 = 0LL;
        LODWORD(v1311) = 0;
        v1363 = 0LL;
        v1367 = 0LL;
        v605 = 0;
        v1326 = 0LL;
        v1321 = 0LL;
        v1348 = 0;
        v1319 = 0LL;
        v1356 = 0;
        memset(v1384, 0, sizeof(v1384));
        if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1808D13E0[0])(
               8LL,
               &v1348,
               0LL,
               &v1356) )
        {
          v607 = MemoryAlloc(2LL * v1356);
          SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1321, v607);
          if ( !SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1321)
            || (v608 = MemoryAlloc(4LL * (v1348 + 1)),
                SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1319, v608),
                (v1343 = (void *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1319)) == 0LL) )
          {
            v605 = -2147024882;
LABEL_720:
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1319);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1321);
            v614 = 0;
            if ( v605 < 0 )
              goto LABEL_775;
            v615 = 0;
            LODWORD(v1321) = 0;
            if ( (_DWORD)v1311 )
            {
              Ptr = (_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1342);
              while ( 2 )
              {
                v619 = dword_1807D4A70;
                v620 = v614;
                do
                {
                  if ( *Ptr == *v619 )
                  {
                    v615 = v620;
                    LODWORD(v1321) = v620;
                    goto LABEL_729;
                  }
                  ++v620;
                  ++v619;
                }
                while ( v620 < 0x26 );
                ++v617;
                ++Ptr;
                if ( v617 < v618 )
                  continue;
                break;
              }
            }
LABEL_729:
            LODWORD(v1311) = v614;
            v621 = dword_1807D4A70[v615];
            memset(v1456, 0, sizeof(v1456));
            if ( ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64))off_1808D13E8[0])(v621, v1476, 85LL)
              && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *))off_1808D13D0[0])(v1476, 88LL, v1456) > 0 )
            {
              LODWORD(v1311) = (HIDWORD(v1456[0]) >> 27) & 1;
              v615 = v1321;
            }
            memset_0(v1386, 0, 0x90uLL);
            v622 = L"Segoe UI Light";
            v623 = 19LL;
            v624 = (const wchar_t **)&v1385;
            do
            {
              *v624 = v622;
              v625 = -1LL;
              do
                ++v625;
              while ( v622[v625] );
              ++v624;
              v622 += v625 + 1;
              --v623;
            }
            while ( v623 );
            v626 = 3LL * v615;
            v1340 = *(void **)&v1386[8 * *((unsigned __int8 *)&unk_1807D2D40 + v626) - 8];
            lpMem = *(LPVOID *)&v1386[8 * (unsigned __int8)byte_1807D2D41[v626] - 8];
            Size = *(_QWORD *)&v1386[8 * (unsigned __int8)byte_1807D2D42[v626] - 8];
            v627 = (char *)MemoryAlloc(0x1C90uLL);
            v1343 = v627;
            if ( !v627 )
              goto LABEL_752;
            v1309 = -1;
            v628 = v627 + 7;
            v629 = -1;
            v630 = (unsigned __int8 *)&unk_1807D2DD2;
            v631 = 0;
            v632 = 0;
            v633 = 0;
            v634 = 914LL;
            do
            {
              v635 = *(v630 - 1) | (*(v630 - 2) << 8);
              v636 = v630[2] << 8;
              v637 = *v630;
              v630 += 8;
              v638 = *(v630 - 7) | ((v637 | (v635 << 8)) << 8);
              v639 = v638 ^ v633;
              v640 = *(v630 - 3) | ((*(v630 - 4) | ((*(v630 - 5) | v636) << 8)) << 8);
              v641 = v640 ^ v639 ^ v632 ^ 0xAC987321;
              v642 = v639 ^ (__ROR4__(v641, 22) + 4991 * __ROR4__(v641 + 1419157410, 27));
              v643 = v641 ^ (43881 * __ROR4__(v642 + 133239679, 9) - __ROR4__(v642, 30));
              v644 = v643 ^ (2033 * __ROR4__(v642 ^ (24670 * v643 - (v643 >> 13) - 123127970) ^ 0xAB69, 26)
                           - __ROR4__(v642 ^ (24670 * v643 - (v643 >> 13) - 123127970), 30));
              v645 = v642 ^ (24670 * v643 - (v643 >> 13) - 123127970) ^ (133239679 - (v644 ^ 0xAB69605E));
              v646 = v644 ^ (43881 * (v645 ^ 0x137F)) ^ __ROR4__(v645, 6);
              v647 = v645 ^ (__ROR4__(v646, 30) + 24670 * __ROR4__(v646 + 133239679, 15));
              v648 = v646 ^ (2033 * __ROR4__(v647 + 1419157410, 14) - __ROR4__(v647, 24));
              v649 = v647 ^ __ROR4__(v648, 10) ^ (4991 * __ROR4__(v648 ^ 0xAB69605E, 12));
              v650 = v648 ^ (v649 >> 10) ^ (43881 * (v649 ^ 0x7F1));
              v651 = v649 ^ (2033 * (__ROR4__(~v650, 5) + 24670));
              v652 = v651 ^ (((v650 ^ (v651 - 2033) ^ 0xAB69605E) >> 2)
                           + 4991 * __ROR4__(v650 ^ (v651 - 2033) ^ 0xAB6967AF, 30));
              v653 = v650 ^ (v651 - 2033) ^ 0xAB69605E ^ (__ROR4__(v652, 25) + 43881 * __ROR4__(v652 - 133239679, 6));
              v654 = v652 ^ (24670 * (v653 ^ 0x137F) + __ROR4__(v653, 9));
              v655 = v653 ^ (__ROR4__(v654, 25) + 2033 * __ROR4__(v654 ^ 0xAB69, 27));
              v656 = v655 ^ v654 ^ 0xAC987321;
              v657 = v655 ^ (4991 * __ROR4__(v656, 3) - 219010071);
              v658 = v656 ^ (24670 * __ROR4__(v657 - 133239679, 1) - __ROR4__(v657, 6));
              v659 = v657 ^ (__ROR4__(v658, 18) + 2033 * __ROR4__(v658 - 1419157410, 29));
              v660 = v658 ^ (4991 * __ROR4__(v659 - 1419157410, 17) - __ROR4__(v659, 14));
              v661 = v659 ^ (v660 >> 3) ^ (43881 * (v660 ^ 0x605E));
              v662 = v631 ^ __ROR4__(v661, 30) ^ (24670 * __ROR4__(v661 ^ 0x7F1137F, 28));
              v631 = v638;
              v633 = v660 ^ v662;
              *(v628 - 4) = v633;
              v632 = v661 ^ v629;
              *v628 = v661 ^ v629;
              v629 = v640;
              *(v628 - 5) = __ROR4__(v633, 8);
              v628 += 8;
              *(v628 - 9) = __ROR4__(v632, 8);
              *(v628 - 14) = __ROR4__(v633, 16);
              *(v628 - 10) = __ROR4__(v632, 16);
              *(v628 - 15) = __ROR4__(v633, 24);
              *(v628 - 11) = __ROR4__(v632, 24);
              --v634;
            }
            while ( v634 );
            LOBYTE(v487) = dwBytes;
            v603 = v1323;
            v663 = 0LL;
            v664 = 0LL;
            do
            {
              v665 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v1343 + v663));
              v663 += 16LL;
              v666 = _mm_xor_ps(v665, v664);
              v664 = v666;
            }
            while ( v663 < 0x1C90 );
            v667 = _mm_xor_ps(v666, (__m128)_mm_srli_si128((__m128i)v666, 8));
            v668 = _mm_xor_ps(v667, (__m128)_mm_srli_si128((__m128i)v667, 4));
            v669 = _mm_xor_ps(v668, (__m128)_mm_srli_si128((__m128i)v668, 2));
            if ( (unsigned __int8)_mm_cvtsi128_si32((__m128i)_mm_xor_ps(v669, (__m128)_mm_srli_si128((__m128i)v669, 1))) != 127LL )
            {
              v605 = -1073425151;
              MemoryFree(v1343);
              goto LABEL_775;
            }
            v1367 = 7312LL;
            v1363 = v1343;
            v605 = 0;
            v670 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1363);
            v672 = v1321;
            v673 = (__int64 *)v1384;
            v674 = v670;
            v675 = 6LL;
            do
            {
              v676 = v671;
              do
              {
                if ( v672 == v676 )
                  *v673 = v674;
                v677 = -1LL;
                do
                  ++v677;
                while ( *(_BYTE *)(v674 + v677) != (_BYTE)v671 );
                ++v676;
                v674 += v677 + 1;
              }
              while ( v676 < 0x26 );
              ++v673;
              --v675;
            }
            while ( v675 );
            v678 = MemoryAlloc(0x18uLL);
            SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1326, v678);
            v679 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1326);
            lpModuleName = (LPCWSTR)v679;
            if ( v679 )
            {
              *(_OWORD *)v679 = 0LL;
              *(_QWORD *)(v679 + 16) = 0LL;
              v680 = 0LL;
              LODWORD(v1321) = 0;
              while ( 2 )
              {
                v681 = *((_WORD *)&v1313 + v680);
                v682 = 0;
                v683 = &word_1807D2DB8;
                while ( v681 != *v683 )
                {
                  ++v682;
                  ++v683;
                  if ( v682 >= 6 )
                    goto LABEL_765;
                }
                v684 = -1LL;
                v685 = (void *)*((_QWORD *)v1384 + v682);
                v1343 = v685;
                do
                  ++v684;
                while ( *((_BYTE *)v685 + v684) );
                v686 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD, _QWORD, _DWORD))off_1808D1400[0])(
                         65001LL,
                         0LL,
                         v685,
                         (unsigned int)(v684 + 1),
                         0LL,
                         0);
                v1309 = v686;
                if ( !v686 )
                {
                  v690 = GetLastError();
                  v605 = v690;
                  if ( v690 > 0 )
                    v605 = (unsigned __int16)v690 | 0x80070000;
                  if ( v605 >= 0 )
                    v605 = -2147467259;
                  goto LABEL_775;
                }
                v687 = MemoryAlloc(2LL * v686);
                *(_QWORD *)&lpModuleName[4 * (unsigned int)v1321] = v687;
                if ( !v687 )
                  goto LABEL_752;
                v688 = -1LL;
                do
                  ++v688;
                while ( *((_BYTE *)v1343 + v688) );
                if ( !((unsigned int (__fastcall *)(__int64, _QWORD, void *, _QWORD, LPVOID, unsigned int))off_1808D1400[0])(
                        65001LL,
                        0LL,
                        v1343,
                        (unsigned int)(v688 + 1),
                        v687,
                        v1309) )
                {
                  v689 = GetLastError();
                  v605 = v689;
                  if ( v689 > 0 )
                    v605 = (unsigned __int16)v689 | 0x80070000;
                  if ( v605 >= 0 )
                    v605 = -2147467259;
                  goto LABEL_775;
                }
LABEL_765:
                v680 = (unsigned int)(v1321 + 1);
                LODWORD(v1321) = v680;
                if ( (unsigned int)v680 < 3 )
                  continue;
                break;
              }
              v1329 = (SIZE_T)v1326;
              v1387 = v1311;
              v1326 = 0LL;
            }
            else
            {
LABEL_752:
              v605 = -2147024882;
            }
LABEL_775:
            v691 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1326);
            if ( v691 )
            {
              v693 = 3LL;
              v694 = (void **)v691;
              v1343 = (void *)3;
              do
              {
                v695 = *v694;
                if ( *v694 )
                {
                  v696 = -1LL;
                  do
                    ++v696;
                  while ( *(_WORD *)&v695[2 * v696] != v692 );
                  for ( ii = 2 * v696 + 2; ii; --ii )
                    *v695++ = v692;
                  MemoryFree(*v694);
                  v693 = (__int64)v1343;
                  v692 = 0;
                }
                ++v694;
                v1343 = (void *)--v693;
              }
              while ( v693 );
            }
            if ( SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1363) )
            {
              v698 = (_BYTE *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1363);
              for ( jj = v1367; jj; --jj )
                *v698++ = v699;
            }
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1326);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1363);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1342);
            if ( v605 < 0 )
              goto LABEL_812;
            v701 = (void **)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1329);
            v1389 = *v701;
            v1390 = v701[1];
            v1391 = v701[2];
            v1382 = 0LL;
            LODWORD(v1382) = 16;
            if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1808D14A8[0])(
                    66LL,
                    0LL,
                    &v1382,
                    0LL) )
            {
              v702 = GetLastError();
              v484 = 0LL;
              v605 = v702;
              if ( v702 > 0 )
                v605 = (unsigned __int16)v702 | 0x80070000;
              v1388 = 0;
              if ( v605 >= 0 )
                v605 = -2147467259;
              goto LABEL_813;
            }
            v1388 = BYTE4(v1382) & 1;
            if ( v603 == 1 )
            {
              LODWORD(v1328) = 42;
            }
            else
            {
              if ( v603 != 2 )
              {
                if ( v603 == 3 )
                {
                  LODWORD(v1328) = 225;
                  LODWORD(v1324) = 225;
                }
LABEL_801:
                LODWORD(v1325) = 96;
                memset_0(v1466, 0, 0xDCuLL);
                v1467 = 220;
                v605 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1808D1420[0])(0LL, 0xFFFFFFFFLL, v1466) )
                {
                  v703 = v1468;
                  LODWORD(v1315) = v1469;
                  LODWORD(v1330) = v1470;
                  if ( v1468 < 0x60u )
                    v703 = 96;
                  LODWORD(v1325) = v703;
                }
                v704 = (const WCHAR *)Size;
                if ( v603 == 1 )
                  v704 = (const WCHAR *)v1340;
                lpModuleName = v704;
                memset_0(v1457, 0, 0x5CuLL);
                v1342 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
                if ( v1342 )
                {
                  v713 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                           (unsigned int)v1328,
                           (unsigned int)v1325,
                           72LL);
                  v1457[4] = 400;
                  v1457[0] = -v713;
                  v1458 = 5;
                  StringCchCopyW((char *)v1459, 32LL, (char *)lpModuleName);
                  v714 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1457);
                  if ( v714 )
                  {
                    v1392 = (const WCHAR *)v714;
                  }
                  else
                  {
                    v605 = GetLastError();
                    v715 = v605 < 0;
                    if ( v605 > 0 )
                    {
                      v605 = (unsigned __int16)v605 | 0x80070000;
                      v715 = v605 < 0;
                    }
                    if ( !v715 )
                      v605 = -2147467259;
                  }
                  ((void (__fastcall *)(_QWORD, SIZE_T))off_1808D14A0[0])(0LL, v1342);
                }
                else
                {
                  v605 = GetLastError();
                  v705 = v605 < 0;
                  if ( v605 > 0 )
                  {
                    v605 = (unsigned __int16)v605 | 0x80070000;
                    v705 = v605 < 0;
                  }
                  if ( !v705 )
                    goto LABEL_811;
                }
                if ( v605 < 0 )
                  goto LABEL_812;
                v716 = Size;
                if ( v603 == 1 )
                  v716 = (size_t)v1340;
                Size = v716;
                memset_0(v1460, 0, 0x5CuLL);
                v605 = 0;
                v484 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
                if ( !v484 )
                {
                  v717 = GetLastError();
                  v605 = v717;
                  if ( v717 > 0 )
                    v605 = (unsigned __int16)v717 | 0x80070000;
                  if ( v605 >= 0 )
                    v605 = -2147467259;
                  goto LABEL_813;
                }
                v718 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                         (unsigned int)v1324,
                         (unsigned int)v1325,
                         72LL);
                v1460[4] = 400;
                v1460[0] = -v718;
                v1461 = 5;
                StringCchCopyW((char *)v1462, 32LL, (char *)Size);
                v719 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1460);
                if ( v719 )
                {
                  v1393 = (const WCHAR *)v719;
                }
                else
                {
                  v605 = GetLastError();
                  v720 = v605 < 0;
                  if ( v605 > 0 )
                  {
                    v605 = (unsigned __int16)v605 | 0x80070000;
                    v720 = v605 < 0;
                  }
                  if ( !v720 )
                    v605 = -2147467259;
                }
                ((void (__fastcall *)(_QWORD, void *))off_1808D14A0[0])(0LL, v484);
                v484 = 0LL;
                if ( v605 < 0 )
                  goto LABEL_813;
                v721 = 0;
                if ( (_DWORD)v1323 != 1 )
                {
                  if ( (_DWORD)v1323 == 2 )
                  {
                    LODWORD(v484) = (int)v1315 / 4;
LABEL_858:
                    *((_QWORD *)&v1355 + 1) = __PAIR64__(v721, (unsigned int)v484);
                    if ( (_DWORD)v1323 == 1 )
                    {
                      v722 = 150;
                      LODWORD(v1327) = 42;
                      LODWORD(v1334) = 150;
                      LODWORD(v1320) = 32;
                    }
                    else
                    {
                      v722 = 0;
                      if ( (unsigned int)(v1323 - 2) <= 1 )
                      {
                        LODWORD(v1327) = 0;
                        LODWORD(v1334) = 0;
                        LODWORD(v1320) = 0;
                      }
                    }
                    v723 = (_DWORD)v484 - v722;
                    v724 = v1389;
                    v1397.m128i_i32[2] = v723;
                    v1396.m128i_i32[2] = v723;
                    lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, const WCHAR *))off_1808D13B8)(v1322, v1392);
                    v1309 = ((__int64 (__fastcall *)(LPVOID, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                              v1322,
                              v724,
                              0xFFFFFFFFLL,
                              &v1396,
                              3152,
                              0LL);
                    v605 = v1309 != 0 ? 0 : 0x80004005;
                    if ( lpModuleName )
                      ((void (__fastcall *)(LPVOID, LPCWSTR))off_1808D13B8)(v1322, lpModuleName);
                    if ( !v1309 )
                      goto LABEL_812;
                    v725 = v1390;
                    lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, const WCHAR *))off_1808D13B8)(v1322, v1393);
                    v1309 = ((__int64 (__fastcall *)(LPVOID, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                              v1322,
                              v725,
                              0xFFFFFFFFLL,
                              &v1397,
                              3152,
                              0LL);
                    v605 = v1309 != 0 ? 0 : 0x80004005;
                    if ( lpModuleName )
                      ((void (__fastcall *)(LPVOID, LPCWSTR))off_1808D13B8)(v1322, lpModuleName);
                    if ( !v1309 )
                      goto LABEL_812;
                    v726 = v1323;
                    if ( (unsigned int)(v1323 - 2) <= 1 )
                    {
                      v723 = v1397.m128i_i32[2];
                      if ( v1396.m128i_i32[2] > v1397.m128i_i32[2] )
                        v723 = v1396.m128i_i32[2];
                    }
                    if ( v1387 )
                    {
                      off_1808D1490(
                        (CToastCenterExperienceManager *)&v1396,
                        (struct CSingleViewShellExperience *)(unsigned int)(v723 - v1396.m128i_i32[2]));
                      v727 = (unsigned int)(v723 - v1397.m128i_i32[2]);
                    }
                    else
                    {
                      off_1808D1490(
                        (CToastCenterExperienceManager *)&v1396,
                        (struct CSingleViewShellExperience *)(unsigned int)v1334);
                      v727 = (unsigned int)v1334;
                    }
                    ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1808D1490)(
                      &v1397,
                      v727,
                      (unsigned int)((_DWORD)v1320 + v1396.m128i_i32[3]));
                    if ( (unsigned int)(v726 - 2) <= 1 )
                    {
                      *((_QWORD *)&v1355 + 1) = __PAIR64__(v1397.m128i_u32[3], v723);
                      v1395 = -5723992;
                    }
                    else if ( v726 == 1 )
                    {
                      v1395 = 0xFFFFFF;
                      memset_0(v1463, 0, 0x5CuLL);
                      v605 = 0;
                      lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(
                                                0LL,
                                                0LL,
                                                1027LL);
                      if ( lpModuleName )
                      {
                        v729 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808D13F8)(11LL, (unsigned int)v1325);
                        v1463[4] = 400;
                        v1463[0] = -v729;
                        v1464 = 5;
                        StringCchCopyW((char *)v1465, 32LL, (char *)lpMem);
                        v730 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1463);
                        if ( v730 )
                        {
                          v1394 = v730;
                        }
                        else
                        {
                          v605 = GetLastError();
                          v731 = v605 < 0;
                          if ( v605 > 0 )
                          {
                            v605 = (unsigned __int16)v605 | 0x80070000;
                            v731 = v605 < 0;
                          }
                          if ( !v731 )
                            v605 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808D14A0[0])(0LL, lpModuleName);
                      }
                      else
                      {
                        v605 = GetLastError();
                        v728 = v605 < 0;
                        if ( v605 > 0 )
                        {
                          v605 = (unsigned __int16)v605 | 0x80070000;
                          v728 = v605 < 0;
                        }
                        if ( !v728 )
                        {
LABEL_811:
                          v605 = -2147467259;
LABEL_812:
                          v484 = 0LL;
LABEL_813:
                          ((void (__fastcall *)(_QWORD, LPVOID))off_1808D14A0[0])(0LL, v1322);
                          goto LABEL_814;
                        }
                      }
                      if ( v605 < 0 )
                        goto LABEL_812;
                      v732 = v1391;
                      v1400 = v723;
                      v733 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1808D13B8)(v1322, v1394);
                      v1309 = ((__int64 (__fastcall *)(LPVOID, void *, __int64, unsigned int *, int, _QWORD))off_1808D1418)(
                                v1322,
                                v732,
                                0xFFFFFFFFLL,
                                &v1398,
                                1120,
                                0LL);
                      v605 = v1309 == 0 ? 0x80004005 : 0;
                      if ( v733 )
                        ((void (__fastcall *)(LPVOID, __int64))off_1808D13B8)(v1322, v733);
                      v484 = 0LL;
                      if ( !v1309 )
                        goto LABEL_813;
                      v734 = v1325;
                      v735 = v1400 + 24;
                      if ( (int)(v1400 + 24) < 90 )
                        v735 = 90;
                      v1400 = v735;
                      v1401 = 32;
                      v1398 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                v1398,
                                (unsigned int)v1325,
                                96LL);
                      v1399 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1399, v734, 96LL);
                      v1400 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1400, v734, 96LL);
                      v1401 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1401, v734, 96LL);
                      if ( v1387 )
                      {
                        v736 = v1396.m128i_u32[0];
                        if ( v1396.m128i_i32[0] >= v1397.m128i_i32[0] )
                          v736 = v1397.m128i_u32[0];
                      }
                      else
                      {
                        v737 = v1396.m128i_i32[2];
                        if ( v1396.m128i_i32[2] <= v1397.m128i_i32[2] )
                          v737 = v1397.m128i_i32[2];
                        v736 = v1398 + v737 - v1400;
                      }
                      off_1808D1490((CToastCenterExperienceManager *)&v1398, (struct CSingleViewShellExperience *)v736);
                      v726 = v1323;
                    }
                    v738 = DWORD2(v1355);
                    v1309 = v1387;
                    LODWORD(v1311) = HIDWORD(v1355);
                    v739 = v726 - 1;
                    if ( !v739 )
                    {
                      v484 = 0LL;
                      *(_QWORD *)&v1355 = 0LL;
                      goto LABEL_910;
                    }
                    v740 = v739 - 1;
                    if ( v740 )
                    {
                      if ( v740 != 1 )
                        goto LABEL_909;
                      v1455 = 0LL;
                      v1453 = 0LL;
                      v1454 = 0LL;
                      v741 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1453) = 40;
                      if ( !(unsigned int)off_1808D1448(v741, (struct CSingleViewShellExperience *)&v1453) )
                        goto LABEL_909;
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1454 + 4));
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1454 + 12));
                      v742 = 50 * (HIDWORD(v1454) - v738) / 100;
                      v743 = 50 * (v1455 - v1311);
                    }
                    else
                    {
                      v1440 = 0LL;
                      v1438 = 0LL;
                      v1439 = 0LL;
                      v744 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1438) = 40;
                      if ( !(unsigned int)off_1808D1448(v744, (struct CSingleViewShellExperience *)&v1438) )
                        goto LABEL_909;
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1439 + 4));
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1439 + 12));
                      if ( v1309 )
                        v742 = DWORD1(v1439) + 5 * HIDWORD(v1439) / 100;
                      else
                        v742 = 95 * (HIDWORD(v1439) - v738) / 100;
                      v743 = 95 * (v1440 - v1311);
                    }
                    LODWORD(v1355) = v742;
                    DWORD1(v1355) = v743 / 100;
LABEL_909:
                    v484 = 0LL;
LABEL_910:
                    v605 = 0;
                    goto LABEL_813;
                  }
                  if ( (_DWORD)v1323 != 3 )
                    goto LABEL_858;
                }
                LODWORD(v484) = (_DWORD)v1315;
                v721 = v1330;
                goto LABEL_858;
              }
              LODWORD(v1328) = 15;
            }
            LODWORD(v1324) = 11;
            goto LABEL_801;
          }
          v1325 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1321);
          if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, SIZE_T, unsigned int *))off_1808D13E0[0])(
                 8LL,
                 &v1348,
                 v1325,
                 &v1356) )
          {
            if ( v1348 )
            {
              v609 = v1325;
              v610 = 0;
              v611 = v1343;
              do
              {
                v612 = ((__int64 (__fastcall *)(SIZE_T, _QWORD))off_1808D13F0)(v609, 0LL);
                v613 = -1LL;
                *v611 = v612;
                do
                  ++v613;
                while ( *(_WORD *)(v1325 + 2 * v613) );
                ++v611;
                v609 = v1325 + 2 * v613 + 2;
                ++v610;
                v1325 = v609;
              }
              while ( v610 < v1348 );
              v1343 = v611;
            }
            *(_DWORD *)v1343 = 1033;
            v1342 = (SIZE_T)v1319;
            v1319 = 0LL;
            LODWORD(v1311) = v1348 + 1;
            goto LABEL_720;
          }
        }
        v605 = GetLastError();
        v606 = v605 < 0;
        if ( v605 > 0 )
        {
          v605 = (unsigned __int16)v605 | 0x80070000;
          v606 = v605 < 0;
        }
        if ( !v606 )
          v605 = -2147467259;
        goto LABEL_720;
      }
      v545 = dword_1808DDD3C;
LABEL_698:
      dword_1808DDD3C = v545 + 1;
      goto LABEL_699;
    }
    v488 = dword_1808DDD3C;
LABEL_651:
    dword_1808DDD3C = v488 + 1;
    goto LABEL_652;
  }
  v80 = v1309;
LABEL_1567:
  while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
    ;
  v1303 = dword_1808DDD3C;
  if ( dword_1808DDD3C > 0 )
  {
    --dword_1808DDD3C;
    if ( v1303 == 1 )
    {
      v1304 = 4LL;
      v1305 = (HMODULE *)&unk_1808DA540;
      do
      {
        if ( *v1305 )
          FreeLibrary(*v1305);
        v1305 += 3;
        --v1304;
      }
      while ( v1304 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1808DDD40, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1365);
  if ( v79 >= 0 )
  {
    if ( v80 == 4 )
    {
      v2 = *(_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1369);
      goto LABEL_1587;
    }
    goto LABEL_1583;
  }
  if ( v79 != -805306316 )
  {
    if ( v79 == -805306139 || v79 == -1073425151 )
    {
      v1351 = -1073418201;
      goto LABEL_1587;
    }
    if ( v79 == -805306306 )
    {
      v1351 = -1073418200;
      goto LABEL_1587;
    }
    v1351 = v79;
    if ( v79 != -2147024774 )
      goto LABEL_1587;
LABEL_1583:
    v1306 = -1073418210;
    goto LABEL_1588;
  }
  v1351 = -1073418222;
LABEL_1587:
  v1306 = v1351;
LABEL_1588:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1369);
  if ( v1306 >= 0 )
  {
    *(_BYTE *)v1378 = v2 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v1306);
    return (unsigned int)v1306;
  }
}
