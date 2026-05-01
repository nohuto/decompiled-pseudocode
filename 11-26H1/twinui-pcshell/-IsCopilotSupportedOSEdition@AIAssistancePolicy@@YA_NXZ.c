/*
 * XREFs of ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x1806275E0
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180635280 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsWindowsServer@@YA_NXZ @ 0x1800C5334 (-IsWindowsServer@@YA_NXZ.c)
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
 *     ??$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@Z @ 0x18061E4DC (--$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0D.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID47983836@@@details@wil@@QEAA_NXZ @ 0x1806366B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID47983836@@@details@wil@@QEAA_NX.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x180683BAC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall AIAssistancePolicy::IsCopilotSupportedOSEdition(AIAssistancePolicy *this)
{
  int v1; // eax
  _BYTE *v2; // rdi
  int v3; // esi
  _BYTE *v4; // r14
  int v5; // r12d
  unsigned __int8 *v6; // r15
  int v7; // r10d
  int v8; // r8d
  __int64 v9; // r13
  int v10; // ebx
  int v11; // r11d
  int v12; // eax
  int v13; // ebx
  int v14; // edx
  int v15; // r11d
  unsigned int v16; // r8d
  int v17; // r9d
  unsigned int v18; // r10d
  int v19; // edx
  int v20; // r8d
  unsigned int v21; // r9d
  int v22; // r10d
  int v23; // edx
  int v24; // r8d
  unsigned int v25; // r9d
  int v26; // edx
  int v27; // r8d
  unsigned int v28; // r10d
  unsigned int v29; // r8d
  int v30; // r9d
  int v31; // edx
  unsigned int v32; // r8d
  int v33; // r9d
  int v34; // edx
  int v35; // r8d
  unsigned int v36; // r9d
  int v37; // r10d
  int v38; // eax
  unsigned __int64 v39; // rax
  char v40; // cl
  int v41; // esi
  unsigned int v42; // r12d
  int v43; // r13d
  __int64 v44; // rdi
  HMODULE *v45; // rbx
  void *v46; // rbx
  __int64 v47; // rax
  const WCHAR *v48; // rdx
  _BYTE *v49; // rdi
  HMODULE *v50; // r14
  __int64 v51; // rax
  char *v52; // rdx
  unsigned int v53; // r15d
  unsigned int v54; // r14d
  __int64 v55; // rcx
  __int64 v56; // rax
  const CHAR *v57; // rdx
  __int64 (__fastcall *ProcAddress)(); // rax
  HANDLE ProcessHeap; // rax
  const wchar_t *v60; // rdi
  const wchar_t *v61; // rsi
  int v62; // r15d
  signed int v63; // r14d
  __int64 v64; // r13
  LPVOID v65; // rax
  bool v66; // sf
  SIZE_T v67; // rcx
  SIZE_T v68; // r12
  LPVOID i; // rbx
  signed int LastError; // eax
  __int64 (__fastcall *v71)(); // rbx
  DWORD CurrentThreadId; // eax
  __int64 v73; // r13
  LPVOID v74; // rax
  size_t v75; // rcx
  size_t v76; // r12
  LPVOID v77; // rbx
  signed int v78; // eax
  HANDLE CurrentProcess; // rax
  int v80; // edi
  HLOCAL v81; // rax
  int v82; // r15d
  int v83; // esi
  unsigned __int16 *v84; // r13
  HANDLE v85; // rax
  _OWORD *v86; // rax
  void *v87; // r12
  HANDLE v88; // rax
  _QWORD *v89; // r9
  unsigned __int16 *v90; // r9
  int v91; // eax
  int v92; // ecx
  int v93; // ebx
  unsigned __int16 *v94; // r9
  int v95; // eax
  unsigned int v96; // r10d
  int v97; // eax
  unsigned int v98; // r10d
  int v99; // eax
  size_t v100; // rdx
  void *v101; // rdi
  HANDLE v102; // rax
  void *v103; // rdi
  HANDLE v104; // rax
  HANDLE v105; // rax
  HANDLE v106; // rax
  DWORD ModuleFileNameW; // eax
  void *v108; // r12
  __int64 v109; // rcx
  int v110; // eax
  int v111; // r10d
  int v112; // eax
  unsigned int v113; // r10d
  int v114; // eax
  unsigned int v115; // ebx
  HANDLE v116; // rax
  void *v117; // rax
  int v118; // r9d
  unsigned int *v119; // r10
  unsigned int v120; // r11d
  _DWORD *v121; // rax
  int v122; // r10d
  unsigned int v123; // r11d
  int *v124; // r11
  int v125; // edx
  unsigned __int64 v126; // r11
  unsigned int v127; // r10d
  unsigned int v128; // r9d
  unsigned int *v129; // r11
  int v130; // r9d
  __int64 v131; // r11
  int *v132; // r10
  int v133; // edx
  unsigned __int64 v134; // r10
  unsigned int v135; // r9d
  int v136; // r11d
  _DWORD *v137; // r10
  int v138; // r9d
  size_t v139; // rdx
  int v140; // r11d
  int *v141; // r10
  int v142; // edx
  unsigned __int64 v143; // r10
  unsigned int v144; // r9d
  _DWORD *v145; // r10
  _QWORD *v146; // rax
  SIZE_T v147; // rcx
  unsigned int v148; // r11d
  int v149; // eax
  int *v150; // r9
  int v151; // ebx
  int v152; // edx
  unsigned __int64 v153; // r9
  _DWORD *v154; // r9
  __int64 v155; // r10
  void *v156; // rcx
  __int64 v157; // r11
  int *v158; // r9
  int v159; // edx
  unsigned __int64 v160; // r9
  unsigned int v161; // r11d
  _DWORD *v162; // r9
  _DWORD *v163; // rax
  int v164; // r9d
  int v165; // r10d
  unsigned int v166; // r11d
  int *v167; // r10
  int v168; // edx
  unsigned __int64 v169; // r10
  unsigned int v170; // r9d
  unsigned int *v171; // r10
  _DWORD *v172; // rax
  unsigned int v173; // ecx
  unsigned int v174; // r9d
  unsigned int v175; // r11d
  unsigned int v176; // r11d
  unsigned int v177; // r11d
  unsigned int v178; // r11d
  char *v179; // rbx
  unsigned int v180; // r9d
  int v181; // r15d
  unsigned int v182; // ecx
  unsigned int v183; // ebx
  HANDLE v184; // rax
  char *v185; // rax
  int v186; // eax
  unsigned int v187; // r9d
  size_t v188; // rcx
  size_t v189; // rcx
  int v190; // eax
  HANDLE v191; // rax
  size_t v192; // r15
  void *v193; // rdx
  unsigned __int8 v194; // al
  size_t v195; // rcx
  size_t v196; // rcx
  int v197; // r9d
  unsigned __int8 *v198; // r11
  unsigned int v199; // r10d
  unsigned int v200; // edx
  char v201; // r9
  unsigned int v202; // r14d
  int v203; // r8d
  unsigned int v204; // ecx
  unsigned int v205; // r9d
  unsigned int v206; // ebx
  unsigned int v207; // ecx
  unsigned int v208; // r8d
  _BYTE *v209; // r14
  char v210; // si
  _BYTE *v211; // rdi
  _BYTE *v212; // r13
  int v213; // r12d
  unsigned __int8 *v214; // r8
  int v215; // edi
  size_t v216; // r14
  unsigned int v217; // r15d
  int v218; // ebx
  int v219; // r11d
  int v220; // edx
  int v221; // r9d
  int v222; // r10d
  int v223; // r8d
  int v224; // r9d
  unsigned int v225; // edx
  int v226; // r8d
  int v227; // ecx
  int v228; // edx
  int v229; // r8d
  int v230; // r9d
  int v231; // edx
  unsigned int v232; // r8d
  unsigned int v233; // r9d
  int v234; // edx
  int v235; // r8d
  int v236; // r9d
  int v237; // edx
  int v238; // r8d
  int v239; // r10d
  int v240; // edx
  int v241; // r9d
  unsigned int v242; // r8d
  int v243; // edx
  unsigned int v244; // r9d
  int v245; // r9d
  HANDLE v246; // rax
  size_t *v247; // rbx
  unsigned int v248; // r15d
  HANDLE v249; // rax
  void *v250; // rax
  HANDLE v251; // rax
  _OWORD *v252; // rax
  int v253; // r15d
  HANDLE v254; // rax
  _QWORD *v255; // rax
  HANDLE v256; // rax
  HANDLE v257; // rax
  HANDLE v258; // rax
  HANDLE v259; // rax
  unsigned __int16 *v260; // r12
  HANDLE v261; // rax
  _QWORD *v262; // r13
  HANDLE v263; // rax
  HANDLE v264; // rax
  HANDLE v265; // rax
  HANDLE v266; // rax
  char *v267; // r9
  int v268; // edx
  LPVOID v269; // r11
  int v270; // r15d
  unsigned int v271; // ebx
  HANDLE v272; // rax
  _DWORD *v273; // rax
  void *v274; // rcx
  void *v275; // r13
  void *v276; // rcx
  void *v277; // rcx
  HANDLE v278; // rax
  char *v279; // r9
  unsigned int v280; // ecx
  void *v281; // r11
  LPVOID v282; // rcx
  unsigned int v283; // r11d
  size_t v284; // r10
  HANDLE v285; // rax
  _QWORD *v286; // rbx
  HANDLE v287; // rax
  HANDLE v288; // rax
  HANDLE v289; // rax
  HANDLE v290; // rax
  void *v291; // rbx
  HANDLE v292; // rax
  void *v293; // rbx
  HANDLE v294; // rax
  _QWORD *v295; // rbx
  HANDLE v296; // rax
  HANDLE v297; // rax
  HANDLE v298; // rax
  HANDLE v299; // rax
  void *v300; // rbx
  HANDLE v301; // rax
  _DWORD *v302; // rcx
  int v303; // r11d
  unsigned int v304; // r10d
  int v305; // r10d
  int v306; // r10d
  int v307; // r9d
  unsigned int v308; // eax
  unsigned int v309; // ebx
  HANDLE v310; // rax
  void *v311; // rax
  LPVOID v312; // rcx
  signed int v313; // eax
  FARPROC v314; // rax
  int v315; // eax
  unsigned int v316; // ebx
  unsigned __int16 *v317; // rax
  void *v318; // r9
  LPVOID v319; // r10
  char *v320; // r11
  void *v321; // rcx
  _QWORD *v322; // r13
  __int64 v323; // r12
  int v324; // r15d
  SIZE_T v325; // r12
  HANDLE v326; // rax
  _DWORD *v327; // rax
  _QWORD *v328; // rbx
  size_t v329; // rax
  unsigned int v330; // r15d
  HANDLE v331; // rax
  void *v332; // rax
  HANDLE v333; // rax
  void *v334; // rax
  const void *v335; // r12
  size_t v336; // rax
  unsigned int v337; // r15d
  HANDLE v338; // rax
  void *v339; // rax
  void *v340; // r12
  HANDLE v341; // rax
  void *v342; // r12
  HANDLE v343; // rax
  void *v344; // r12
  HANDLE v345; // rax
  HANDLE v346; // rax
  void *v347; // r15
  void *v348; // rbx
  HANDLE v349; // rax
  void *v350; // rbx
  HANDLE v351; // rax
  void *v352; // rbx
  HANDLE v353; // rax
  HANDLE v354; // rax
  _DWORD *v355; // r10
  LPVOID v356; // r9
  unsigned __int8 v357; // dl
  void *v358; // rax
  unsigned __int16 *v359; // r11
  size_t v360; // r8
  void *v361; // rbx
  char v362; // r10
  int v363; // edx
  unsigned __int8 *v364; // rdi
  void *v365; // rax
  int v366; // eax
  unsigned int v367; // r11d
  unsigned int v368; // r9d
  unsigned int v369; // eax
  int v370; // ecx
  unsigned int v371; // esi
  _BYTE *v372; // r14
  char v373; // r15
  size_t v374; // rdi
  LPVOID v375; // r9
  int v376; // r12d
  int v377; // r9d
  size_t v378; // rsi
  int v379; // edx
  int v380; // r15d
  unsigned int v381; // r13d
  int v382; // r8d
  unsigned __int8 *v383; // rcx
  int v384; // edi
  int v385; // r11d
  int v386; // ebx
  unsigned int v387; // ecx
  int v388; // r9d
  unsigned int v389; // r10d
  unsigned int v390; // r8d
  int v391; // r9d
  unsigned int v392; // ecx
  unsigned int v393; // r8d
  int v394; // r10d
  int v395; // r11d
  unsigned int v396; // r9d
  int v397; // ecx
  int v398; // r8d
  unsigned int v399; // r9d
  unsigned int v400; // ecx
  int v401; // r8d
  unsigned int v402; // r9d
  int v403; // ecx
  int v404; // r8d
  int v405; // r9d
  int v406; // r10d
  int v407; // ecx
  unsigned int v408; // r8d
  int v409; // r9d
  _BYTE *v410; // rcx
  int v411; // eax
  int v412; // r11d
  int v413; // r11d
  unsigned __int64 v414; // rax
  SIZE_T v415; // r11
  char *v416; // r9
  int v417; // r15d
  void *v418; // r10
  char *v419; // r9
  SIZE_T v420; // r11
  void *v421; // r10
  SIZE_T v422; // r11
  void *v423; // rbx
  void *v424; // r10
  SIZE_T v425; // r11
  unsigned __int64 v426; // r9
  void *v427; // rax
  void *v428; // rbx
  int *v429; // r9
  int v430; // eax
  int v431; // edx
  unsigned __int64 v432; // r9
  void *v433; // r10
  void *v434; // r11
  LPVOID v435; // rcx
  unsigned int v436; // ecx
  unsigned int v437; // ebx
  HANDLE v438; // rax
  void *v439; // rbx
  _DWORD *v440; // rcx
  int v441; // r11d
  int *v442; // r15
  __int64 v443; // r10
  unsigned int v444; // r9d
  int v445; // r11d
  int v446; // r9d
  size_t *v447; // rax
  size_t v448; // rax
  unsigned __int64 v449; // rcx
  unsigned int v450; // r10d
  int v451; // r9d
  int v452; // r9d
  size_t v453; // r11
  int *v454; // rax
  int v455; // eax
  size_t v456; // rcx
  __int64 v457; // r11
  unsigned int v458; // r10d
  int v459; // r9d
  unsigned int *v460; // rcx
  unsigned int v461; // ebx
  int v462; // r9d
  int v463; // r9d
  int *v464; // rax
  unsigned int *v465; // rcx
  int v466; // eax
  unsigned int v467; // ebx
  int v468; // r9d
  int v469; // r9d
  size_t v470; // r10
  const void *v471; // r11
  int *v472; // rbx
  __int64 v473; // rax
  unsigned int v474; // edi
  int v475; // eax
  const WCHAR *v476; // r12
  _BYTE *v477; // r14
  int v478; // r13d
  int v479; // ecx
  int v480; // r8d
  unsigned __int8 *v481; // rsi
  int v482; // r10d
  __int64 v483; // rdi
  int v484; // ebx
  int v485; // r11d
  int v486; // eax
  int v487; // ebx
  int v488; // r10d
  int v489; // r11d
  unsigned int v490; // edx
  int v491; // r8d
  unsigned int v492; // r9d
  int v493; // edx
  int v494; // r8d
  unsigned int v495; // r9d
  int v496; // r10d
  int v497; // edx
  int v498; // r8d
  unsigned int v499; // r9d
  int v500; // edx
  int v501; // r8d
  unsigned int v502; // r10d
  unsigned int v503; // r8d
  int v504; // r9d
  int v505; // edx
  unsigned int v506; // r8d
  int v507; // r9d
  int v508; // edx
  int v509; // r8d
  unsigned int v510; // r9d
  int v511; // edx
  int v512; // r10d
  WCHAR *v513; // r12
  unsigned __int64 v514; // rax
  char v515; // cl
  int v516; // r13d
  HMODULE *v517; // rbx
  __int64 v518; // r12
  const WCHAR *v519; // rdx
  __int64 v520; // rax
  WCHAR *v521; // r12
  HMODULE *v522; // rbx
  __int64 v523; // rax
  char *v524; // rdx
  LPCWSTR v525; // rcx
  int v526; // eax
  unsigned int v527; // ebx
  __int64 v528; // rcx
  const CHAR *v529; // rdx
  __int64 v530; // rax
  __int64 (__fastcall *v531)(); // rax
  void *v532; // rbx
  HANDLE v533; // rax
  int v534; // eax
  const WCHAR *v535; // rax
  __int64 v536; // rdi
  _BYTE *v537; // r14
  int v538; // r13d
  unsigned __int8 *v539; // rsi
  int v540; // ecx
  int v541; // r10d
  int v542; // r8d
  int v543; // ebx
  int v544; // r11d
  int v545; // eax
  int v546; // ebx
  int v547; // edx
  int v548; // r11d
  unsigned int v549; // r8d
  int v550; // r9d
  unsigned int v551; // r10d
  int v552; // edx
  int v553; // r8d
  unsigned int v554; // r9d
  int v555; // r10d
  int v556; // edx
  int v557; // r8d
  unsigned int v558; // r9d
  int v559; // edx
  int v560; // r8d
  unsigned int v561; // r10d
  unsigned int v562; // r8d
  int v563; // r9d
  int v564; // edx
  unsigned int v565; // r8d
  int v566; // r9d
  int v567; // edx
  int v568; // r8d
  unsigned int v569; // r9d
  int v570; // r10d
  int v571; // eax
  WCHAR *v572; // r12
  unsigned __int64 v573; // rax
  char v574; // cl
  int v575; // r13d
  HMODULE *v576; // rbx
  __int64 v577; // r12
  const WCHAR *v578; // rdx
  __int64 v579; // rax
  WCHAR *v580; // r12
  HMODULE *v581; // rbx
  __int64 v582; // rax
  char *v583; // rdx
  LPCWSTR v584; // rcx
  int v585; // eax
  unsigned int v586; // ebx
  __int64 v587; // rcx
  const CHAR *v588; // rdx
  __int64 v589; // rax
  __int64 (__fastcall *v590)(); // rax
  void *v591; // rbx
  HANDLE v592; // rax
  int v593; // r13d
  signed int v594; // eax
  signed int v595; // ebx
  bool v596; // sf
  LPVOID v597; // rax
  LPVOID v598; // rax
  __int64 v599; // r12
  _DWORD *v600; // rsi
  unsigned int ii; // r14d
  __int64 v602; // rax
  unsigned int v603; // r10d
  unsigned int v604; // ebx
  _DWORD *v605; // rax
  unsigned int *v606; // rdx
  unsigned int v607; // r8d
  unsigned int v608; // r11d
  unsigned int v609; // ecx
  __int64 v610; // rcx
  const wchar_t *v611; // rcx
  const wchar_t **v612; // rdx
  __int64 v613; // r8
  __int64 v614; // rax
  __int64 v615; // rcx
  const WCHAR *v616; // rax
  int v617; // edi
  _BYTE *v618; // rbx
  int v619; // r13d
  unsigned __int8 *v620; // rsi
  int v621; // r8d
  int v622; // edx
  __int64 v623; // r14
  int v624; // r11d
  int v625; // r10d
  int v626; // eax
  int v627; // r11d
  int v628; // ecx
  int v629; // r10d
  unsigned int v630; // edx
  int v631; // r8d
  unsigned int v632; // r9d
  int v633; // ecx
  int v634; // edx
  unsigned int v635; // r8d
  int v636; // r9d
  int v637; // ecx
  int v638; // edx
  unsigned int v639; // r8d
  int v640; // ecx
  int v641; // edx
  unsigned int v642; // r9d
  unsigned int v643; // edx
  int v644; // r8d
  int v645; // ecx
  unsigned int v646; // edx
  int v647; // r8d
  int v648; // ecx
  int v649; // edx
  unsigned int v650; // r8d
  int v651; // ecx
  unsigned __int64 v652; // rax
  __m128 v653; // xmm1
  __m128 v654; // xmm0
  __m128i v655; // xmm0
  __m128i v656; // xmm1
  __m128i v657; // xmm1
  __m128i v658; // xmm1
  __int64 v659; // rax
  unsigned int v660; // r11d
  int v661; // r9d
  __int64 *v662; // r8
  __int64 v663; // rdx
  __int64 v664; // r10
  unsigned int v665; // ecx
  __int64 v666; // rax
  LPVOID v667; // rax
  __int64 v668; // rax
  unsigned int v669; // r12d
  unsigned int v670; // ecx
  __int16 *v671; // rax
  __int64 v672; // r9
  void *v673; // rax
  int v674; // eax
  LPVOID v675; // rdx
  __int64 v676; // r9
  signed int v677; // eax
  signed int v678; // eax
  __int64 v679; // rdx
  __int16 v680; // r10
  void **v681; // r12
  __int64 v682; // rax
  _BYTE *v683; // rcx
  __int64 v684; // rax
  __int64 jj; // rax
  _BYTE *v686; // rax
  __int64 v687; // rdx
  __int64 kk; // rcx
  void **v689; // rax
  signed int v690; // eax
  unsigned int v691; // r12d
  const WCHAR *v692; // rax
  bool v693; // sf
  int v694; // eax
  HMODULE *v695; // r12
  __int64 v696; // r13
  unsigned int v697; // ebx
  int v698; // edi
  int v699; // r12d
  __int64 v700; // rax
  __int32 v701; // r13d
  int v702; // eax
  __int64 v703; // rax
  bool v704; // sf
  unsigned __int16 *v705; // rax
  signed int v706; // eax
  int v707; // eax
  __int64 v708; // rax
  signed int v709; // eax
  unsigned int v710; // edx
  int v711; // eax
  __int32 v712; // r12d
  void *v713; // rbx
  void *v714; // rbx
  __int64 v715; // rdx
  bool v716; // sf
  int v717; // eax
  __int64 v718; // rax
  bool v719; // sf
  void *v720; // rbx
  __int64 v721; // r12
  int v722; // eax
  unsigned int v723; // ebx
  int v724; // eax
  unsigned __int64 v725; // rdx
  __int32 v726; // edx
  int v727; // r12d
  int v728; // ebx
  int v729; // r13d
  int v730; // r13d
  CToastCenterExperienceManager *v731; // rax
  int v732; // edx
  int v733; // ecx
  CToastCenterExperienceManager *v734; // rax
  size_t v735; // rbx
  int v736; // eax
  void *v737; // rbx
  size_t v738; // rbx
  __int64 v739; // rax
  void *v740; // r12
  __int64 v741; // rbx
  signed int v742; // ebx
  bool v743; // sf
  bool v744; // zf
  void *v745; // rcx
  __int64 v746; // rax
  __int64 (__fastcall *v747)(); // rbx
  __int64 v748; // rax
  __int32 v749; // r11d
  __int32 v750; // r9d
  __int32 v751; // r8d
  __int32 v752; // edx
  int v753; // ecx
  int v754; // eax
  size_t v755; // r14
  char v756; // si
  char *v757; // rdx
  char *v758; // rax
  signed int v759; // r9d
  __int64 v760; // r11
  unsigned __int8 *v761; // r10
  size_t v762; // r8
  int v763; // r9d
  int v764; // ecx
  int v765; // r8d
  int v766; // edx
  int v767; // ecx
  int v768; // r8d
  int v769; // edx
  int v770; // r8d
  int v771; // ecx
  void *v772; // rbx
  size_t v773; // rbx
  __int64 v774; // rax
  void *v775; // r12
  __int64 v776; // rbx
  signed int v777; // ebx
  bool v778; // sf
  void *v779; // rcx
  void *v780; // rax
  __int64 (__fastcall *v781)(); // rbx
  __int64 v782; // rax
  unsigned int v783; // eax
  __int32 v784; // r10d
  __int32 v785; // r9d
  __int32 v786; // r8d
  __int32 v787; // edx
  int v788; // edi
  int v789; // eax
  char *v790; // rdx
  char *v791; // rax
  signed int v792; // r9d
  char v793; // r14
  unsigned __int8 *v794; // r10
  size_t v795; // r8
  __int64 v796; // r11
  int v797; // r9d
  int v798; // ecx
  int v799; // r8d
  int v800; // edx
  int v801; // ecx
  int v802; // r8d
  int v803; // edx
  int v804; // r8d
  int v805; // ecx
  CToastCenterExperienceManager *v806; // r13
  void *v807; // rbx
  char v808; // al
  unsigned __int32 v809; // r12d
  __int32 v810; // edx
  __int32 v811; // eax
  __int32 v812; // ebx
  __int32 v813; // ebx
  void *v814; // rax
  __int64 v815; // rax
  LPVOID v816; // rcx
  __int64 v817; // rax
  __int64 v818; // rcx
  _BYTE *m; // rax
  __int64 v820; // rax
  __int64 v821; // rcx
  _BYTE *n; // rax
  _BYTE *v823; // rcx
  __int64 v824; // rax
  __int64 v825; // rax
  int v826; // eax
  HMODULE *v827; // rbx
  __int64 v828; // rdi
  int v829; // ebx
  int v830; // eax
  int v831; // r13d
  void *v832; // rax
  signed int v833; // ebx
  bool v834; // sf
  void *v835; // rcx
  CToastCenterExperienceManager *v836; // rbx
  const WCHAR *v837; // rax
  __int64 (__fastcall *v838)(); // rbx
  __int64 v839; // rax
  int v840; // ecx
  int v841; // r8d
  int v842; // edx
  int v843; // r9d
  int v844; // eax
  int v845; // ecx
  int v846; // eax
  size_t v847; // r14
  char v848; // si
  unsigned __int8 *v849; // r8
  SIZE_T v850; // rax
  signed int v851; // r12d
  unsigned __int8 *v852; // r10
  SIZE_T v853; // r11
  size_t v854; // r8
  int v855; // r9d
  int v856; // ecx
  int v857; // r8d
  int v858; // edx
  int v859; // ecx
  int v860; // r8d
  int v861; // edx
  void *v862; // rbx
  __int64 v863; // rax
  CToastCenterExperienceManager *v864; // rbx
  void *v865; // rax
  signed int v866; // ebx
  bool v867; // sf
  SIZE_T v868; // rcx
  void *v869; // rax
  __int64 (__fastcall *v870)(); // rbx
  __int64 v871; // rax
  int v872; // ebx
  unsigned int v873; // eax
  int v874; // ecx
  int v875; // r9d
  int v876; // edx
  int v877; // r8d
  int v878; // eax
  int v879; // ecx
  int v880; // eax
  size_t v881; // rsi
  char v882; // di
  char *v883; // rdx
  __int64 v884; // rcx
  signed int v885; // r9d
  char *v886; // rax
  __int64 v887; // r11
  unsigned __int8 *v888; // r10
  size_t v889; // r8
  int v890; // r9d
  int v891; // ecx
  int v892; // r8d
  int v893; // edx
  int v894; // ecx
  int v895; // r8d
  int v896; // edx
  int v897; // r8d
  int v898; // ecx
  int v899; // eax
  const WCHAR *v900; // rax
  int v901; // esi
  _BYTE *v902; // r13
  int v903; // r14d
  unsigned __int8 *v904; // r12
  int v905; // r9d
  __int64 v906; // rcx
  int v907; // r8d
  int v908; // ebx
  int v909; // r11d
  int v910; // eax
  int v911; // ebx
  int v912; // edx
  int v913; // r11d
  unsigned int v914; // r8d
  int v915; // r9d
  unsigned int v916; // r10d
  int v917; // edx
  int v918; // r8d
  unsigned int v919; // r9d
  int v920; // r10d
  int v921; // edx
  int v922; // r8d
  unsigned int v923; // r9d
  int v924; // edx
  int v925; // r8d
  unsigned int v926; // r10d
  unsigned int v927; // r8d
  int v928; // r9d
  int v929; // edx
  unsigned int v930; // r8d
  int v931; // r9d
  int v932; // edx
  int v933; // r8d
  unsigned int v934; // r9d
  int v935; // edx
  int v936; // r8d
  LPCWSTR v937; // rdi
  int v938; // r12d
  unsigned __int64 v939; // rax
  char v940; // cl
  __int64 v941; // rdi
  HMODULE *v942; // rbx
  WCHAR *v943; // rbx
  const WCHAR *v944; // rdx
  __int64 v945; // rax
  const WCHAR *v946; // rdi
  HMODULE *v947; // r13
  __int64 v948; // rax
  char *v949; // rdx
  LPCWSTR v950; // rcx
  int v951; // eax
  unsigned int v952; // r13d
  __int64 v953; // rcx
  const CHAR *v954; // rdx
  __int64 v955; // rax
  __int64 (__fastcall *v956)(); // rax
  HANDLE v957; // rax
  __int64 v958; // rdi
  int v959; // eax
  HMODULE *v960; // rbx
  void *v961; // r13
  HANDLE v962; // rax
  _OWORD *v963; // rdi
  HANDLE v964; // rax
  _QWORD *v965; // rax
  int v966; // eax
  void *v967; // r9
  int v968; // r10d
  int v969; // eax
  int v970; // r10d
  int v971; // r11d
  int v972; // eax
  int v973; // r10d
  int v974; // r11d
  int v975; // eax
  int v976; // r11d
  unsigned int v977; // ebx
  HANDLE v978; // rax
  LPVOID v979; // rax
  int v980; // r10d
  _DWORD *v981; // r11
  _DWORD *v982; // rax
  int v983; // r11d
  unsigned __int16 *v984; // rbx
  void *v985; // rdi
  HANDLE v986; // rax
  HANDLE v987; // rax
  HANDLE v988; // rax
  HANDLE v989; // rax
  __int64 v990; // r10
  int *v991; // r9
  unsigned int v992; // edi
  int v993; // edx
  unsigned __int64 v994; // r9
  unsigned int v995; // r11d
  unsigned int *v996; // r9
  unsigned int v997; // r10d
  int v998; // r9d
  __int64 v999; // r10
  int *v1000; // r10
  int v1001; // edx
  unsigned __int64 v1002; // r10
  unsigned int v1003; // r9d
  int v1004; // r11d
  _DWORD *v1005; // r10
  int v1006; // r9d
  int v1007; // r10d
  int *v1008; // r10
  int v1009; // edx
  unsigned __int64 v1010; // r10
  unsigned int v1011; // r9d
  int v1012; // r11d
  _DWORD *v1013; // r10
  _QWORD *v1014; // rax
  LPCWSTR v1015; // rcx
  unsigned int v1016; // ecx
  int v1017; // r10d
  unsigned int v1018; // r9d
  _QWORD *v1019; // r10
  _QWORD *v1020; // rdi
  int v1021; // ebx
  unsigned int v1022; // r9d
  void *v1023; // r10
  unsigned int v1024; // ecx
  unsigned int v1025; // ebx
  HANDLE v1026; // rax
  WCHAR *v1027; // rax
  int v1028; // eax
  unsigned int v1029; // r10d
  size_t v1030; // rcx
  LPVOID v1031; // rcx
  int v1032; // eax
  size_t v1033; // r9
  int v1034; // ebx
  unsigned __int8 *v1035; // rbx
  size_t v1036; // rcx
  unsigned __int8 v1037; // al
  size_t v1038; // rdx
  size_t v1039; // r10
  unsigned int v1040; // r8d
  int v1041; // r9d
  unsigned __int8 *v1042; // r11
  unsigned int v1043; // edx
  unsigned int v1044; // ecx
  char v1045; // r9
  int v1046; // r14d
  unsigned int v1047; // esi
  int v1048; // r8d
  HANDLE v1049; // rax
  unsigned int v1050; // r9d
  unsigned int v1051; // ecx
  int v1052; // ebx
  _BYTE *v1053; // r14
  unsigned int v1054; // esi
  char v1055; // di
  _BYTE *v1056; // rax
  size_t v1057; // rdx
  _BYTE *v1058; // r13
  int v1059; // r12d
  unsigned __int8 *v1060; // r10
  int v1061; // r14d
  unsigned int v1062; // edi
  size_t v1063; // rax
  int v1064; // ebx
  int v1065; // r11d
  int v1066; // edx
  int v1067; // r9d
  int v1068; // r10d
  int v1069; // r8d
  int v1070; // r9d
  unsigned int v1071; // edx
  int v1072; // r8d
  int v1073; // ecx
  int v1074; // edx
  int v1075; // r8d
  int v1076; // r9d
  int v1077; // edx
  unsigned int v1078; // r8d
  unsigned int v1079; // r9d
  int v1080; // edx
  int v1081; // r8d
  int v1082; // r9d
  int v1083; // edx
  int v1084; // r8d
  int v1085; // r9d
  int v1086; // r10d
  int v1087; // r8d
  unsigned int v1088; // edx
  int v1089; // r8d
  int v1090; // r9d
  const void *v1091; // rbx
  HANDLE v1092; // rax
  LPVOID v1093; // rsi
  HANDLE v1094; // rax
  void *v1095; // rax
  HANDLE v1096; // rax
  _OWORD *v1097; // rax
  int v1098; // ebx
  HANDLE v1099; // rax
  _QWORD *v1100; // rax
  HANDLE v1101; // rax
  HANDLE v1102; // rax
  HANDLE v1103; // rax
  HANDLE v1104; // rax
  _QWORD *v1105; // rsi
  LPVOID v1106; // r12
  HANDLE v1107; // rax
  void *v1108; // r13
  HANDLE v1109; // rax
  void *v1110; // r13
  HANDLE v1111; // rax
  void *v1112; // r13
  HANDLE v1113; // rax
  HANDLE v1114; // rax
  void *v1115; // rsi
  int v1116; // edx
  int v1117; // ebx
  LPVOID v1118; // r10
  LPVOID v1119; // r11
  unsigned int v1120; // r13d
  HANDLE v1121; // rax
  _DWORD *v1122; // rax
  void *v1123; // rcx
  void *v1124; // r12
  void *v1125; // rcx
  void *v1126; // rcx
  HANDLE v1127; // rax
  int v1128; // eax
  unsigned int v1129; // ecx
  LPVOID v1130; // rcx
  unsigned int v1131; // r10d
  size_t v1132; // r9
  LPVOID v1133; // rcx
  unsigned int v1134; // r11d
  int v1135; // r10d
  unsigned int v1136; // r10d
  int v1137; // r10d
  int v1138; // r10d
  int v1139; // r9d
  unsigned int v1140; // edi
  HANDLE v1141; // rax
  void *v1142; // rax
  signed int v1143; // eax
  FARPROC v1144; // rax
  int v1145; // eax
  unsigned int v1146; // edi
  void *v1147; // rax
  void *v1148; // r10
  void *v1149; // rcx
  _QWORD *v1150; // r11
  void *v1151; // rdx
  SIZE_T *v1152; // rsi
  SIZE_T v1153; // r13
  int v1154; // ebx
  __int64 v1155; // r9
  SIZE_T v1156; // r12
  int v1157; // r9d
  unsigned int v1158; // r9d
  unsigned int v1159; // r9d
  int v1160; // r9d
  HANDLE v1161; // rax
  _QWORD *v1162; // rax
  _QWORD *v1163; // rdi
  HANDLE v1164; // rax
  void *v1165; // rax
  const void *v1166; // r13
  HANDLE v1167; // rax
  void *v1168; // rax
  const void *v1169; // r12
  unsigned int v1170; // eax
  size_t v1171; // r13
  HANDLE v1172; // rax
  void *v1173; // rax
  void *v1174; // r12
  HANDLE v1175; // rax
  void *v1176; // r12
  HANDLE v1177; // rax
  void *v1178; // r12
  HANDLE v1179; // rax
  HANDLE v1180; // rax
  SIZE_T *v1181; // rax
  void *v1182; // rdi
  HANDLE v1183; // rax
  void *v1184; // rdi
  HANDLE v1185; // rax
  void *v1186; // rdi
  HANDLE v1187; // rax
  HANDLE v1188; // rax
  SIZE_T v1189; // rbx
  void *v1190; // r8
  void *v1191; // rax
  unsigned __int8 v1192; // dl
  size_t v1193; // rcx
  void *v1194; // r9
  void *v1195; // r10
  void *v1196; // r11
  int v1197; // edx
  int v1198; // ebx
  int v1199; // r15d
  unsigned __int8 *v1200; // r14
  int v1201; // r9d
  int v1202; // ecx
  unsigned int v1203; // r8d
  unsigned int v1204; // eax
  unsigned int v1205; // r9d
  int v1206; // ecx
  int v1207; // r10d
  _BYTE *v1208; // r11
  unsigned int v1209; // r14d
  int v1210; // r9d
  int v1211; // edx
  _BYTE *v1212; // r13
  int v1213; // esi
  char *v1214; // r12
  int v1215; // r11d
  unsigned __int8 *v1216; // r15
  int v1217; // edi
  int v1218; // ebx
  int v1219; // eax
  int v1220; // edi
  int v1221; // r8d
  int v1222; // ebx
  unsigned int v1223; // ecx
  int v1224; // r9d
  unsigned int v1225; // r10d
  int v1226; // r8d
  int v1227; // r9d
  unsigned int v1228; // ecx
  int v1229; // r8d
  int v1230; // r10d
  int v1231; // r11d
  unsigned int v1232; // r9d
  int v1233; // ecx
  int v1234; // r8d
  unsigned int v1235; // r9d
  unsigned int v1236; // ecx
  int v1237; // r8d
  unsigned int v1238; // r9d
  int v1239; // ecx
  int v1240; // r8d
  int v1241; // r9d
  int v1242; // ecx
  int v1243; // r8d
  unsigned int v1244; // r9d
  int v1245; // ecx
  int v1246; // r8d
  int v1247; // r9d
  char *v1248; // r9
  SIZE_T j; // rax
  _QWORD *v1250; // r11
  int v1251; // ebx
  void *v1252; // r9
  _QWORD *v1253; // r11
  int v1254; // eax
  void *v1255; // rdx
  void *v1256; // r8
  void *v1257; // r9
  int v1258; // eax
  void *v1259; // r9
  void *v1260; // rax
  size_t v1261; // r11
  SIZE_T v1262; // r9
  void *v1263; // r14
  int *v1264; // r11
  int v1265; // edx
  unsigned __int64 v1266; // r11
  int v1267; // eax
  void *v1268; // r10
  void *v1269; // r9
  unsigned int v1270; // ecx
  unsigned int v1271; // ebx
  HANDLE v1272; // rax
  LPVOID v1273; // rax
  void *v1274; // r14
  int v1275; // eax
  HANDLE v1276; // rax
  void *v1277; // rsi
  HANDLE v1278; // rax
  void *v1279; // rsi
  HANDLE v1280; // rax
  void *v1281; // rsi
  HANDLE v1282; // rax
  HANDLE v1283; // rax
  void *v1284; // rdi
  HANDLE v1285; // rax
  void *v1286; // rdi
  HANDLE v1287; // rax
  _QWORD *v1288; // rdi
  void *v1289; // rsi
  HANDLE v1290; // rax
  void *v1291; // rsi
  HANDLE v1292; // rax
  void *v1293; // rsi
  HANDLE v1294; // rax
  HANDLE v1295; // rax
  void *v1296; // rdi
  HANDLE v1297; // rax
  unsigned int v1298; // esi
  size_t v1299; // r9
  int v1300; // r10d
  int *v1301; // rax
  unsigned int *v1302; // r9
  int v1303; // r10d
  int v1304; // eax
  __int64 v1305; // rdi
  HMODULE *v1306; // rbx
  int v1307; // edi
  int v1308; // ebx
  __int64 v1309; // rdx
  const WCHAR *v1310; // rcx
  unsigned int *v1312; // [rsp+28h] [rbp-E0h]
  int v1313; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int dwBytes; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned __int8 dwBytes_4; // [rsp+70h] [rbp-98h]
  size_t k; // [rsp+78h] [rbp-90h] BYREF
  SIZE_T v1317; // [rsp+80h] [rbp-88h] BYREF
  void *v1318; // [rsp+88h] [rbp-80h] BYREF
  void *v1319; // [rsp+90h] [rbp-78h] BYREF
  SIZE_T v1320; // [rsp+98h] [rbp-70h] BYREF
  LPVOID v1321; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID v1322; // [rsp+A8h] [rbp-60h] BYREF
  void *Src; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v1324; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v1325; // [rsp+C0h] [rbp-48h]
  unsigned int v1326; // [rsp+C8h] [rbp-40h] BYREF
  SIZE_T Ptr; // [rsp+D0h] [rbp-38h]
  LPVOID v1328; // [rsp+D8h] [rbp-30h]
  __int64 v1329; // [rsp+E0h] [rbp-28h]
  size_t pcchLength; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int16 *v1331; // [rsp+F0h] [rbp-18h]
  LPVOID v1332; // [rsp+F8h] [rbp-10h]
  SIZE_T v1333; // [rsp+100h] [rbp-8h] BYREF
  LPVOID v1334; // [rsp+108h] [rbp+0h]
  size_t Size; // [rsp+110h] [rbp+8h] BYREF
  void *v1336; // [rsp+118h] [rbp+10h] BYREF
  LPVOID v1337; // [rsp+120h] [rbp+18h] BYREF
  void *v1338; // [rsp+128h] [rbp+20h]
  LPCWSTR lpModuleName; // [rsp+130h] [rbp+28h]
  LPVOID lpMem[2]; // [rsp+138h] [rbp+30h] BYREF
  LPVOID v1341; // [rsp+148h] [rbp+40h]
  void *v1342; // [rsp+150h] [rbp+48h]
  LPVOID v1343; // [rsp+158h] [rbp+50h] BYREF
  void *v1344; // [rsp+160h] [rbp+58h] BYREF
  void *v1345; // [rsp+168h] [rbp+60h] BYREF
  size_t v1346[2]; // [rsp+170h] [rbp+68h] BYREF
  SIZE_T v1347; // [rsp+180h] [rbp+78h] BYREF
  unsigned int v1348; // [rsp+18Ch] [rbp+84h] BYREF
  unsigned int v1349; // [rsp+190h] [rbp+88h] BYREF
  int v1350; // [rsp+194h] [rbp+8Ch]
  int v1351; // [rsp+198h] [rbp+90h]
  unsigned int v1352; // [rsp+19Ch] [rbp+94h] BYREF
  LPCWSTR v1353; // [rsp+1A0h] [rbp+98h]
  void *v1354; // [rsp+1A8h] [rbp+A0h] BYREF
  int v1355; // [rsp+1B0h] [rbp+A8h]
  unsigned int v1356; // [rsp+1B4h] [rbp+ACh] BYREF
  __int128 v1357; // [rsp+1B8h] [rbp+B0h]
  unsigned int v1358; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned int v1359; // [rsp+1CCh] [rbp+C4h] BYREF
  int v1360; // [rsp+1D0h] [rbp+C8h]
  unsigned int v1361; // [rsp+1D4h] [rbp+CCh] BYREF
  unsigned int v1362; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned int v1363; // [rsp+1DCh] [rbp+D4h] BYREF
  int v1364; // [rsp+1E0h] [rbp+D8h] BYREF
  LPCWSTR v1365; // [rsp+1E8h] [rbp+E0h] BYREF
  void *v1366; // [rsp+1F0h] [rbp+E8h] BYREF
  int v1367; // [rsp+1F8h] [rbp+F0h]
  unsigned int v1368; // [rsp+1FCh] [rbp+F4h]
  unsigned int v1369; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v1370; // [rsp+208h] [rbp+100h]
  void *v1371; // [rsp+210h] [rbp+108h] BYREF
  LPVOID v1372; // [rsp+218h] [rbp+110h]
  LPVOID v1373; // [rsp+220h] [rbp+118h]
  HMODULE phModule; // [rsp+228h] [rbp+120h] BYREF
  HMODULE hModule; // [rsp+230h] [rbp+128h] BYREF
  __int128 v1376; // [rsp+238h] [rbp+130h] BYREF
  __int128 v1377; // [rsp+248h] [rbp+140h]
  __int128 v1378; // [rsp+258h] [rbp+150h] BYREF
  __int128 v1379; // [rsp+268h] [rbp+160h]
  __int64 v1380; // [rsp+278h] [rbp+170h] BYREF
  __int64 v1381; // [rsp+280h] [rbp+178h] BYREF
  __int64 v1382; // [rsp+288h] [rbp+180h] BYREF
  __int64 v1383; // [rsp+290h] [rbp+188h] BYREF
  __int128 v1384; // [rsp+298h] [rbp+190h] BYREF
  __int64 v1385[15]; // [rsp+2B0h] [rbp+1A8h] BYREF
  _OWORD v1386[3]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v1387; // [rsp+358h] [rbp+250h] BYREF
  char v1388[152]; // [rsp+360h] [rbp+258h] BYREF
  int v1389; // [rsp+3F8h] [rbp+2F0h] BYREF
  int v1390; // [rsp+3FCh] [rbp+2F4h]
  void *v1391; // [rsp+400h] [rbp+2F8h]
  void *v1392; // [rsp+408h] [rbp+300h]
  void *v1393; // [rsp+410h] [rbp+308h]
  const WCHAR *v1394; // [rsp+418h] [rbp+310h]
  const WCHAR *v1395; // [rsp+420h] [rbp+318h]
  __int64 v1396; // [rsp+428h] [rbp+320h]
  int v1397; // [rsp+430h] [rbp+328h]
  __m128i v1398; // [rsp+434h] [rbp+32Ch] BYREF
  __m128i v1399; // [rsp+444h] [rbp+33Ch] BYREF
  unsigned int v1400; // [rsp+454h] [rbp+34Ch] BYREF
  unsigned int v1401; // [rsp+458h] [rbp+350h]
  unsigned __int32 v1402; // [rsp+45Ch] [rbp+354h]
  unsigned int v1403; // [rsp+460h] [rbp+358h]
  int v1404; // [rsp+468h] [rbp+360h] BYREF
  _DWORD v1405[3]; // [rsp+46Ch] [rbp+364h] BYREF
  __int16 v1406; // [rsp+47Ah] [rbp+372h]
  __int64 v1407; // [rsp+480h] [rbp+378h]
  int v1408; // [rsp+4D8h] [rbp+3D0h] BYREF
  _DWORD v1409[5]; // [rsp+4DCh] [rbp+3D4h] BYREF
  size_t v1410; // [rsp+4F0h] [rbp+3E8h]
  int v1411; // [rsp+548h] [rbp+440h] BYREF
  _DWORD v1412[5]; // [rsp+54Ch] [rbp+444h] BYREF
  SIZE_T v1413; // [rsp+560h] [rbp+458h]
  int v1414; // [rsp+5B8h] [rbp+4B0h] BYREF
  _DWORD v1415[5]; // [rsp+5BCh] [rbp+4B4h] BYREF
  size_t v1416; // [rsp+5D0h] [rbp+4C8h]
  int v1417; // [rsp+628h] [rbp+520h] BYREF
  _DWORD v1418[5]; // [rsp+62Ch] [rbp+524h] BYREF
  size_t v1419; // [rsp+640h] [rbp+538h]
  int v1420; // [rsp+698h] [rbp+590h] BYREF
  char v1421[20]; // [rsp+69Ch] [rbp+594h] BYREF
  void *v1422; // [rsp+6B0h] [rbp+5A8h]
  int v1423; // [rsp+708h] [rbp+600h] BYREF
  char v1424[20]; // [rsp+70Ch] [rbp+604h] BYREF
  SIZE_T v1425; // [rsp+720h] [rbp+618h]
  int v1426; // [rsp+778h] [rbp+670h] BYREF
  char v1427[20]; // [rsp+77Ch] [rbp+674h] BYREF
  void *v1428; // [rsp+790h] [rbp+688h]
  int v1429; // [rsp+7E8h] [rbp+6E0h] BYREF
  char v1430[20]; // [rsp+7ECh] [rbp+6E4h] BYREF
  void *v1431; // [rsp+800h] [rbp+6F8h]
  __int128 v1432; // [rsp+858h] [rbp+750h] BYREF
  __int128 v1433; // [rsp+868h] [rbp+760h] BYREF
  __int128 v1434; // [rsp+878h] [rbp+770h] BYREF
  __int128 v1435; // [rsp+888h] [rbp+780h] BYREF
  __int64 v1436; // [rsp+898h] [rbp+790h] BYREF
  unsigned __int32 v1437; // [rsp+8A0h] [rbp+798h]
  int v1438; // [rsp+8A4h] [rbp+79Ch]
  _DWORD v1439[12]; // [rsp+8A8h] [rbp+7A0h] BYREF
  __int128 v1440; // [rsp+8D8h] [rbp+7D0h] BYREF
  __int128 v1441; // [rsp+8E8h] [rbp+7E0h] BYREF
  __int64 v1442; // [rsp+8F8h] [rbp+7F0h]
  _OWORD v1443[2]; // [rsp+900h] [rbp+7F8h] BYREF
  __int64 v1444; // [rsp+920h] [rbp+818h]
  int v1445; // [rsp+928h] [rbp+820h]
  _OWORD v1446[2]; // [rsp+930h] [rbp+828h] BYREF
  __int64 v1447; // [rsp+950h] [rbp+848h]
  int v1448; // [rsp+958h] [rbp+850h]
  _OWORD v1449[2]; // [rsp+960h] [rbp+858h] BYREF
  __int64 v1450; // [rsp+980h] [rbp+878h]
  int v1451; // [rsp+988h] [rbp+880h]
  _OWORD v1452[2]; // [rsp+990h] [rbp+888h] BYREF
  __int64 v1453; // [rsp+9B0h] [rbp+8A8h]
  int v1454; // [rsp+9B8h] [rbp+8B0h]
  __int128 v1455; // [rsp+9C0h] [rbp+8B8h] BYREF
  __int128 v1456; // [rsp+9D0h] [rbp+8C8h] BYREF
  __int64 v1457; // [rsp+9E0h] [rbp+8D8h]
  _OWORD v1458[2]; // [rsp+9E8h] [rbp+8E0h] BYREF
  _DWORD v1459[6]; // [rsp+A08h] [rbp+900h] BYREF
  char v1460; // [rsp+A22h] [rbp+91Ah]
  unsigned __int16 v1461[34]; // [rsp+A24h] [rbp+91Ch] BYREF
  _DWORD v1462[6]; // [rsp+A68h] [rbp+960h] BYREF
  char v1463; // [rsp+A82h] [rbp+97Ah]
  unsigned __int16 v1464[34]; // [rsp+A84h] [rbp+97Ch] BYREF
  _DWORD v1465[6]; // [rsp+AC8h] [rbp+9C0h] BYREF
  char v1466; // [rsp+AE2h] [rbp+9DAh]
  unsigned __int16 v1467[34]; // [rsp+AE4h] [rbp+9DCh] BYREF
  _BYTE v1468[68]; // [rsp+B28h] [rbp+A20h] BYREF
  __int16 v1469; // [rsp+B6Ch] [rbp+A64h]
  unsigned __int16 v1470; // [rsp+BCEh] [rbp+AC6h]
  int v1471; // [rsp+BD4h] [rbp+ACCh]
  int v1472; // [rsp+BD8h] [rbp+AD0h]
  int v1473; // [rsp+C08h] [rbp+B00h] BYREF
  __int128 v1474; // [rsp+C10h] [rbp+B08h]
  __int128 v1475; // [rsp+C20h] [rbp+B18h]
  __int128 v1476; // [rsp+C30h] [rbp+B28h]
  __int64 v1477; // [rsp+C40h] [rbp+B38h]
  _BYTE v1478[176]; // [rsp+C48h] [rbp+B40h] BYREF
  WCHAR Filename[264]; // [rsp+CF8h] [rbp+BF0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F40h] [rbp+E38h]

  v1360 = 0;
  LODWORD(v1319) = 0;
  v1371 = 0LL;
  v1351 = 0;
  v1367 = 0;
  v1366 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
    ;
  v1 = dword_1808DDD3C;
  v1350 = -1;
  if ( !dword_1808DDD3C )
  {
    v2 = MemoryAlloc(0x338uLL);
    if ( !v2 )
      goto LABEL_11;
    v3 = 0;
    v4 = v2 + 7;
    v5 = -1;
    v6 = (unsigned __int8 *)&unk_180783012;
    v7 = 0;
    v8 = 0;
    v9 = 103LL;
    do
    {
      v10 = *(v6 - 1) | (*(v6 - 2) << 8);
      v11 = v6[2] << 8;
      v12 = *v6;
      v6 += 8;
      v13 = *(v6 - 7) | ((v12 | (v10 << 8)) << 8);
      v14 = v8 ^ v13;
      v15 = *(v6 - 3) | ((*(v6 - 4) | ((*(v6 - 5) | v11) << 8)) << 8);
      v16 = v7 ^ v8 ^ v13 ^ v15 ^ 0xAC987321;
      v17 = v14 ^ (__ROR4__(v16, 22) + 4991 * __ROR4__(v16 + 1419157410, 27));
      v18 = v16 ^ (43881 * __ROR4__(v17 + 133239679, 9) - __ROR4__(v17, 30));
      v19 = v17 ^ (24670 * v18 - (v18 >> 13) - 123127970);
      v20 = v18 ^ (2033 * __ROR4__(v19 ^ 0xAB69, 26) - __ROR4__(v19, 30));
      v21 = v19 ^ (133239679 - (v20 ^ 0xAB69605E));
      v22 = v20 ^ (43881 * (v21 ^ 0x137F)) ^ __ROR4__(v21, 6);
      v23 = v21 ^ (__ROR4__(v22, 30) + 24670 * __ROR4__(v22 + 133239679, 15));
      v24 = v22 ^ (2033 * __ROR4__(v23 + 1419157410, 14) - __ROR4__(v23, 24));
      v25 = v23 ^ __ROR4__(v24, 10) ^ (4991 * __ROR4__(v24 ^ 0xAB69605E, 12));
      v26 = v24 ^ (v25 >> 10) ^ (43881 * (v25 ^ 0x7F1));
      v27 = v25 ^ (2033 * (__ROR4__(~v26, 5) + 24670));
      v28 = v27 ^ (((v26 ^ (v27 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v26 ^ (v27 - 2033) ^ 0xAB6967AF, 30));
      v29 = v26 ^ (v27 - 2033) ^ 0xAB69605E ^ (__ROR4__(v28, 25) + 43881 * __ROR4__(v28 - 133239679, 6));
      v30 = v28 ^ (24670 * (v29 ^ 0x137F) + __ROR4__(v29, 9));
      v31 = v29 ^ (__ROR4__(v30, 25) + 2033 * __ROR4__(v30 ^ 0xAB69, 27));
      v32 = v30 ^ v31 ^ 0xAC987321;
      v33 = v31 ^ (4991 * __ROR4__(v32, 3) - 219010071);
      v34 = v32 ^ (24670 * __ROR4__(v33 - 133239679, 1) - __ROR4__(v33, 6));
      v35 = v33 ^ (__ROR4__(v34, 18) + 2033 * __ROR4__(v34 - 1419157410, 29));
      v36 = v34 ^ (4991 * __ROR4__(v35 - 1419157410, 17) - __ROR4__(v35, 14));
      v37 = v35 ^ (v36 >> 3) ^ (43881 * (v36 ^ 0x605E));
      v38 = __ROR4__(v37, 30);
      v7 = v5 ^ v37;
      v5 = v15;
      v8 = v3 ^ v36 ^ v38 ^ (24670 * __ROR4__(v35 ^ (v36 >> 3) ^ (43881 * (v36 ^ 0x605E)) ^ 0x7F1137F, 28));
      v3 = v13;
      *(v4 - 4) = v8;
      *v4 = v7;
      *(v4 - 5) = __ROR4__(v8, 8);
      v4 += 8;
      *(v4 - 9) = __ROR4__(v7, 8);
      *(v4 - 14) = __ROR4__(v8, 16);
      *(v4 - 10) = __ROR4__(v7, 16);
      *(v4 - 15) = __ROR4__(v8, 24);
      *(v4 - 11) = __ROR4__(v7, 24);
      --v9;
    }
    while ( v9 );
    v39 = 0LL;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    do
      v40 ^= v2[v39++];
    while ( v39 < 0x338 );
    if ( v40 != 64LL )
    {
      MemoryFree(v2);
LABEL_11:
      v44 = 4LL;
      v45 = (HMODULE *)&unk_1808DA540;
      do
      {
        if ( *v45 )
          FreeLibrary(*v45);
        v45 += 3;
        --v44;
      }
      while ( v44 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
      goto LABEL_43;
    }
    v2[823] = 0;
    memset_0(&unk_1808DA540, 0, 0x60uLL);
    v46 = v2;
    if ( *v2 )
    {
      while ( 1 )
      {
        v47 = -1LL;
        v48 = (const WCHAR *)v2;
        v41 = 0;
        do
          ++v47;
        while ( *(_WORD *)&v2[2 * v47] );
        v49 = &v2[2 * v47];
        v50 = (HMODULE *)((char *)&unk_1808DA540 + 24 * v42);
        if ( !GetModuleHandleExW(0, v48, v50) )
          break;
        if ( *(_WORD *)*v50 == 23117
          && (v51 = *((int *)*v50 + 15), (unsigned int)v51 < 0x10000000)
          && (v52 = (char *)*v50 + v51, v52 >= (char *)*v50)
          && *(_DWORD *)v52 == 17744 )
        {
          if ( *((_WORD *)v52 + 12) == 267 || *((_WORD *)v52 + 12) == 523 )
          {
            *(_QWORD *)((char *)&unk_1808DA540 + 24 * v42 + 12) = *((_QWORD *)v52 + 17);
            *((_DWORD *)&unk_1808DA540 + 6 * v42 + 2) = *((_DWORD *)v52 + 20);
          }
          else
          {
            v41 = -1073741811;
          }
        }
        else
        {
          v41 = -1073741701;
        }
        v53 = *(_DWORD *)(v49 + 2);
        v2 = v49 + 6;
        v54 = 0;
        if ( v53 )
        {
          v55 = v42;
          do
          {
            v56 = -1LL;
            v57 = v2;
            do
              ++v56;
            while ( v2[v56] );
            v2 += v56 + 1;
            if ( v41 >= 0 )
            {
              ProcAddress = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v55), v57);
              if ( !ProcAddress )
                goto LABEL_40;
              off_1808D1340[v43] = ProcAddress;
              v55 = v42;
            }
            ++v43;
            ++v54;
          }
          while ( v54 < v53 );
        }
        ++v42;
        if ( !*v2 )
          goto LABEL_40;
      }
      v41 = -1073741702;
    }
LABEL_40:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v46);
    if ( v41 < 0 )
      goto LABEL_11;
    v1 = dword_1808DDD3C;
  }
  dword_1808DDD3C = v1 + 1;
LABEL_43:
  _InterlockedExchange(&dword_1808DDD40, 0);
  v60 = 0LL;
  v1333 = 0LL;
  v61 = 0LL;
  pcchLength = 0LL;
  v62 = 0;
  v63 = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_91;
  v64 = off_1808D1450[0]();
  v65 = 0LL;
  if ( !v64 )
    goto LABEL_45;
  v1359 = 0;
  v67 = 0LL;
  k = 0LL;
  v68 = 0LL;
  for ( i = 0LL; ; v68 = (SIZE_T)i )
  {
    if ( v65 )
      v68 = v67;
    v1312 = &v1359;
    if ( (unsigned int)off_1808D1470[0]() )
    {
      v1333 = v68;
      k = 0LL;
      v60 = (const wchar_t *)v68;
      goto LABEL_64;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      break;
    if ( i )
      goto LABEL_58;
    i = MemoryAlloc(v1359);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&k);
    k = (size_t)i;
    v65 = i;
    if ( !i )
    {
      v63 = -2147024882;
      goto LABEL_64;
    }
    v67 = (SIZE_T)i;
  }
  if ( !LastError )
  {
LABEL_58:
    v63 = -2147467259;
    goto LABEL_64;
  }
  if ( LastError > 0 )
    v63 = (unsigned __int16)LastError | 0x80070000;
  else
    v63 = LastError;
LABEL_64:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&k);
  if ( v63 < 0 )
    goto LABEL_90;
  v71 = off_1808D1468[0];
  CurrentThreadId = GetCurrentThreadId();
  v73 = ((__int64 (__fastcall *)(_QWORD))v71)(CurrentThreadId);
  v74 = 0LL;
  if ( !v73 )
  {
LABEL_45:
    v63 = GetLastError();
    v66 = v63 < 0;
    if ( v63 > 0 )
    {
      v63 = (unsigned __int16)v63 | 0x80070000;
      v66 = v63 < 0;
    }
    v62 = 0;
    if ( !v66 )
      v63 = -2147467259;
    goto LABEL_91;
  }
  v1358 = 0;
  v75 = 0LL;
  k = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v63 = 0;
  while ( 1 )
  {
    if ( v74 )
      v76 = v75;
    v1312 = &v1358;
    if ( (unsigned int)off_1808D1470[0]() )
    {
      pcchLength = v76;
      k = 0LL;
      v61 = (const wchar_t *)v76;
      goto LABEL_81;
    }
    v78 = GetLastError();
    if ( v78 != 122 )
      break;
    if ( v77 )
      goto LABEL_75;
    v77 = MemoryAlloc(v1358);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&k);
    k = (size_t)v77;
    v74 = v77;
    if ( !v77 )
    {
      v63 = -2147024882;
      goto LABEL_81;
    }
    v75 = (size_t)v77;
    v76 = (size_t)v77;
  }
  if ( !v78 )
  {
LABEL_75:
    v63 = -2147467259;
    goto LABEL_81;
  }
  v63 = v78 > 0 ? (unsigned __int16)v78 | 0x80070000 : v78;
LABEL_81:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&k);
  if ( v63 < 0 )
  {
LABEL_90:
    v62 = 0;
    goto LABEL_91;
  }
  if ( !v60 || wcscmp_0(v60, L"WinSta0") || !v61 || wcscmp_0(v61, L"Default") )
    goto LABEL_91;
  v1364 = 0;
  CurrentProcess = GetCurrentProcess();
  if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1364) )
    goto LABEL_45;
  if ( (v1364 & 0xF) == 0 )
    v62 = 1;
LABEL_91:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&pcchLength);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1333);
  v80 = 0;
  if ( v63 >= 0 )
    v80 = v62;
  LODWORD(Ptr) = v80;
  v81 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(&v1366, v81);
  lpModuleName = (LPCWSTR)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1366);
  if ( !lpModuleName )
  {
    v82 = -2147024882;
    v83 = 0;
    goto LABEL_1554;
  }
  v84 = 0LL;
  LODWORD(v1338) = 0;
  *(_OWORD *)lpMem = 0LL;
  v1326 = 0;
  v1337 = 0LL;
  v85 = GetProcessHeap();
  v86 = HeapAlloc(v85, 8u, 0xA0uLL);
  v1355 = 56;
  v87 = v86;
  v82 = -1073741801;
  if ( !v86 )
  {
    v87 = 0LL;
    goto LABEL_583;
  }
  *v86 = xmmword_1808D8540[0];
  v86[1] = *((_OWORD *)&_ImageBase + 579669);
  v86[2] = *((_OWORD *)&_ImageBase + 579670);
  v86[3] = *((_OWORD *)&_ImageBase + 579671);
  v86[4] = *((_OWORD *)&_ImageBase + 579672);
  v86[5] = *((_OWORD *)&_ImageBase + 579673);
  v86[6] = *((_OWORD *)&_ImageBase + 579674);
  v86[7] = *((_OWORD *)&_ImageBase + 579675);
  v86[8] = xmmword_1808D8540[8];
  v86[9] = xmmword_1808D8540[9];
  v88 = GetProcessHeap();
  v89 = HeapAlloc(v88, 8u, 8uLL);
  if ( !v89 )
  {
LABEL_583:
    v1313 = v82;
    goto LABEL_584;
  }
  *v89 = qword_1808D8690;
  v1347 = __rdtsc();
  dwBytes = 0;
  LODWORD(v1317) = 0;
  v82 = RtlUIntAdd(4u, 4, (int *)&v1317);
  v1313 = v82;
  if ( v82 < 0 )
  {
    v93 = v80;
    v84 = v90;
    goto LABEL_108;
  }
  v91 = RtlUIntAdd(0, v1317, (int *)&dwBytes);
  v93 = v80;
  v82 = v91 | 0x10000000;
  v84 = v94;
  v1313 = v91 | 0x10000000;
  if ( v91 >= 0 )
  {
    LODWORD(v1317) = 0;
    v82 = RtlUIntAdd(v92 + 4, 160, (int *)&v1317);
    v1313 = v82;
    if ( v82 >= 0 )
    {
      v95 = RtlUIntAdd(dwBytes, v1317, (int *)&dwBytes);
      v82 = v95 | 0x10000000;
      v1313 = v95 | 0x10000000;
      if ( v95 >= 0 )
      {
        LODWORD(v1317) = 0;
        v82 = RtlUIntAdd(v96, 8, (int *)&v1317);
        v1313 = v82;
        if ( v82 >= 0 )
        {
          v97 = RtlUIntAdd(dwBytes, v1317, (int *)&dwBytes);
          v82 = v97 | 0x10000000;
          v1313 = v97 | 0x10000000;
          if ( v97 >= 0 )
          {
            LODWORD(Src) = 0;
            v82 = RtlUIntAdd(v98, 8, (int *)&Src);
            v1313 = v82;
            if ( v82 >= 0 )
            {
              v99 = RtlUIntAdd(dwBytes, (int)Src, (int *)&dwBytes);
              v82 = v99 | 0x10000000;
              v1313 = v99 | 0x10000000;
              if ( v99 >= 0 )
              {
                pcchLength = 0LL;
                if ( StringCchLengthW(L"WindowsCopilot-Available", v100, &pcchLength) < 0 )
                {
                  v82 = -1073741762;
LABEL_107:
                  v1313 = v82;
                  goto LABEL_108;
                }
                LODWORD(v1317) = 0;
                v82 = RtlUIntAdd(4u, 2 * ((int)pcchLength + 1), (int *)&v1317);
                v1313 = v82;
                if ( v82 >= 0 )
                {
                  v110 = RtlUIntAdd(dwBytes, v1317, (int *)&dwBytes);
                  v82 = v110 | 0x10000000;
                  v1313 = v110 | 0x10000000;
                  if ( v110 >= 0 )
                  {
                    LODWORD(v1317) = v111;
                    v82 = RtlUIntAdd(4u, 4, (int *)&v1317);
                    v1313 = v82;
                    if ( v82 >= 0 )
                    {
                      v112 = RtlUIntAdd(dwBytes, v1317, (int *)&dwBytes);
                      v82 = v112 | 0x10000000;
                      v1313 = v112 | 0x10000000;
                      if ( v112 >= 0 )
                      {
                        LODWORD(v1317) = 0;
                        v82 = RtlUIntAdd(v113, v113, (int *)&v1317);
                        v1313 = v82;
                        if ( v82 >= 0 )
                        {
                          v114 = RtlUIntAdd(dwBytes, v1317, (int *)&dwBytes);
                          v82 = v114 | 0x10000000;
                          v1313 = v114 | 0x10000000;
                          if ( v114 >= 0 )
                          {
                            HIDWORD(lpMem[0]) = dwBytes;
                            v115 = dwBytes;
                            v116 = GetProcessHeap();
                            v117 = HeapAlloc(v116, 8u, v115);
                            if ( !v117 )
                            {
                              v82 = -1073741801;
                              goto LABEL_133;
                            }
                            lpMem[1] = v117;
                            LODWORD(v1344) = 0;
                            v1343 = 0LL;
                            LODWORD(lpMem[0]) = 0;
                            v1324 = v117;
                            v1331 = v84;
                            v1318 = v87;
                            v1313 = RtlULongLongAdd((unsigned __int64)v117, 4LL, (__int64 *)&v1344);
                            v82 = v1313;
                            if ( v1313 < 0 )
                            {
LABEL_134:
                              v93 = v80;
                              goto LABEL_108;
                            }
                            if ( v119 + 2 > (unsigned int *)((char *)v119 + HIDWORD(lpMem[0])) )
                              goto LABEL_132;
                            v121 = v1344;
                            *v119 = v120;
                            *v121 = 0;
                            v122 = LODWORD(lpMem[0]) + 1;
                            LODWORD(v1344) = 0;
                            ++LODWORD(lpMem[0]);
                            v1343 = 0LL;
                            if ( v87 )
                            {
                              if ( !v118 )
                                goto LABEL_137;
                            }
                            else if ( v118 )
                            {
LABEL_137:
                              v82 = -1073741811;
                              goto LABEL_583;
                            }
                            if ( lpMem[1] )
                            {
                              v124 = (int *)lpMem[1];
                              k = (size_t)lpMem[1];
                              LODWORD(v1329) = 0;
                              if ( v122 )
                              {
                                do
                                {
                                  v125 = *v124;
                                  LODWORD(v1317) = 0;
                                  v82 = RtlUIntAdd(4u, v125, (int *)&v1317);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_584;
                                  v82 = RtlULongLongAdd(v126, (unsigned int)v1317, (__int64 *)&k);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_584;
                                  v124 = (int *)k;
                                  LODWORD(v1329) = v1329 + 1;
                                }
                                while ( (unsigned int)v1329 < v127 );
                                v1331 = v84;
                                v1318 = v87;
                              }
                              v1313 = RtlULongLongAdd((unsigned __int64)v124, 4LL, (__int64 *)&v1344);
                              v82 = v1313;
                              if ( v1313 < 0 )
                                goto LABEL_134;
                              if ( (char *)v129 + v128 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
                                goto LABEL_132;
                              *v129 = v128;
                              if ( v87 )
                                memcpy_0(v1344, v87, v128);
                              v123 = 4;
                            }
                            else
                            {
                              LODWORD(v1317) = 0;
                              v82 = RtlUIntAdd(v120, v118, (int *)&v1317);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_584;
                              v1313 = RtlUIntAdd(HIDWORD(lpMem[0]), v1317, (int *)lpMem + 1);
                              v82 = v1313;
                              if ( v1313 < 0 )
                                goto LABEL_134;
                            }
                            v130 = LODWORD(lpMem[0]) + 1;
                            LODWORD(v1344) = 0;
                            ++LODWORD(lpMem[0]);
                            v1343 = 0LL;
                            if ( !v84 )
                              goto LABEL_137;
                            if ( lpMem[1] )
                            {
                              v132 = (int *)lpMem[1];
                              k = (size_t)lpMem[1];
                              if ( v130 )
                              {
                                do
                                {
                                  v133 = *v132;
                                  LODWORD(v1317) = 0;
                                  v82 = RtlUIntAdd(4u, v133, (int *)&v1317);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_584;
                                  v82 = RtlULongLongAdd(v134, (unsigned int)v1317, (__int64 *)&k);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_584;
                                  v132 = (int *)k;
                                }
                                while ( v136 + 1 < v135 );
                                v1331 = v84;
                                v1318 = v87;
                              }
                              v1313 = RtlULongLongAdd((unsigned __int64)v132, 4LL, (__int64 *)&v1344);
                              v82 = v1313;
                              if ( v1313 < 0 )
                                goto LABEL_134;
                              if ( v137 + 3 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                                goto LABEL_132;
                              *v137 = 8;
                              memcpy_0(v1344, v84, 8uLL);
                              v131 = 4LL;
                            }
                            else
                            {
                              LODWORD(v1317) = 0;
                              v82 = RtlUIntAdd(v123, 8, (int *)&v1317);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_584;
                              v1313 = RtlUIntAdd(HIDWORD(lpMem[0]), v1317, (int *)lpMem + 1);
                              v82 = v1313;
                              if ( v1313 < 0 )
                                goto LABEL_134;
                            }
                            LODWORD(v1344) = 0;
                            v138 = LODWORD(lpMem[0]) + 1;
                            v1343 = 0LL;
                            ++LODWORD(lpMem[0]);
                            if ( lpMem[1] )
                            {
                              v141 = (int *)lpMem[1];
                              k = (size_t)lpMem[1];
                              LODWORD(v1329) = 0;
                              if ( v138 )
                              {
                                do
                                {
                                  v142 = *v141;
                                  LODWORD(v1317) = 0;
                                  v82 = RtlUIntAdd(4u, v142, (int *)&v1317);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_584;
                                  v82 = RtlULongLongAdd(v143, (unsigned int)v1317, (__int64 *)&k);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_584;
                                  v141 = (int *)k;
                                  LODWORD(v1329) = v1329 + 1;
                                }
                                while ( (unsigned int)v1329 < v144 );
                                v1331 = v84;
                                v131 = 4LL;
                                v1318 = v87;
                              }
                              v1313 = RtlULongLongAdd((unsigned __int64)v141, v131, (__int64 *)&v1344);
                              v82 = v1313;
                              if ( v1313 < 0 )
                                goto LABEL_134;
                              if ( v145 + 3 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                                goto LABEL_132;
                              v146 = v1344;
                              v147 = v1347;
                              *v145 = 8;
                              *v146 = v147;
                              v140 = LODWORD(lpMem[0]) + 1;
                            }
                            else
                            {
                              LODWORD(v1317) = 0;
                              v82 = RtlUIntAdd(v131, 8, (int *)&v1317);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_584;
                              v82 = RtlUIntAdd(HIDWORD(lpMem[0]), v1317, (int *)lpMem + 1);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_134;
                              v140 = LODWORD(lpMem[0]) + 1;
                            }
                            LODWORD(lpMem[0]) = v140;
                            k = 0LL;
                            if ( StringCchLengthW(L"WindowsCopilot-Available", v139, &k) < 0 )
                            {
                              v82 = -1073741762;
                              goto LABEL_133;
                            }
                            v1313 = RtlULongLongAdd(k, 1LL, (__int64 *)&k);
                            v82 = v1313;
                            if ( v1313 >= 0 )
                            {
                              LODWORD(v1344) = 0;
                              v1343 = 0LL;
                              if ( !(2 * (_DWORD)k) )
                              {
                                v82 = -1073741811;
                                goto LABEL_195;
                              }
                              if ( !lpMem[1] )
                              {
                                LODWORD(v1317) = 0;
                                v1313 = RtlUIntAdd(4u, 2 * (int)k, (int *)&v1317);
                                v82 = v1313;
                                if ( v1313 >= 0 )
                                {
                                  v149 = RtlUIntAdd(HIDWORD(lpMem[0]), v1317, (int *)lpMem + 1);
                                  v148 = (unsigned int)lpMem[0];
                                  v82 = v149;
                                  v1313 = v149;
                                  if ( v149 >= 0 )
                                  {
                                    v148 = LODWORD(lpMem[0]) + 1;
                                    v1313 = 0;
                                    ++LODWORD(lpMem[0]);
                                    v82 = 0;
                                  }
                                }
                                goto LABEL_196;
                              }
                              v150 = (int *)lpMem[1];
                              v151 = 0;
                              k = (size_t)lpMem[1];
                              if ( v148 )
                              {
                                do
                                {
                                  v152 = *v150;
                                  LODWORD(v1317) = 0;
                                  v1313 = RtlUIntAdd(4u, v152, (int *)&v1317);
                                  v82 = v1313;
                                  if ( v1313 < 0 )
                                    goto LABEL_196;
                                  v82 = RtlULongLongAdd(v153, (unsigned int)v1317, (__int64 *)&k);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_196;
                                  v150 = (int *)k;
                                }
                                while ( ++v151 < v148 );
                              }
                              v1313 = RtlULongLongAdd((unsigned __int64)v150, 4LL, (__int64 *)&v1344);
                              v82 = v1313;
                              if ( v1313 >= 0 )
                              {
                                if ( (char *)v154 + v155 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
                                {
                                  v82 = -1073741789;
LABEL_195:
                                  v1313 = v82;
                                  goto LABEL_196;
                                }
                                v156 = v1344;
                                *v154 = v155;
                                memcpy_0(v156, L"WindowsCopilot-Available", (unsigned int)v155);
                                v148 = ++LODWORD(lpMem[0]);
                              }
                            }
LABEL_196:
                            v93 = v80;
                            if ( v82 < 0 )
                              goto LABEL_108;
                            LODWORD(v1344) = 0;
                            v1343 = 0LL;
                            if ( lpMem[1] )
                            {
                              v158 = (int *)lpMem[1];
                              k = (size_t)lpMem[1];
                              LODWORD(v1329) = 0;
                              if ( v148 )
                              {
                                do
                                {
                                  v159 = *v158;
                                  LODWORD(v1317) = 0;
                                  v82 = RtlUIntAdd(4u, v159, (int *)&v1317);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_584;
                                  v82 = RtlULongLongAdd(v160, (unsigned int)v1317, (__int64 *)&k);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_584;
                                  v158 = (int *)k;
                                  LODWORD(v1329) = v1329 + 1;
                                }
                                while ( (unsigned int)v1329 < v161 );
                                v1331 = v84;
                                v1318 = v87;
                              }
                              v1313 = RtlULongLongAdd((unsigned __int64)v158, 4LL, (__int64 *)&v1344);
                              v82 = v1313;
                              if ( v1313 < 0 )
                                goto LABEL_134;
                              if ( v162 + 2 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                                goto LABEL_132;
                              v163 = v1344;
                              *v162 = v157;
                              *v163 = v80;
                            }
                            else
                            {
                              LODWORD(v1317) = 0;
                              v82 = RtlUIntAdd(4u, 4, (int *)&v1317);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_108;
                              v1313 = RtlUIntAdd(HIDWORD(lpMem[0]), v1317, (int *)lpMem + 1);
                              v82 = v1313;
                              if ( v1313 < 0 )
                                goto LABEL_134;
                            }
                            LODWORD(v1344) = 0;
                            v164 = LODWORD(lpMem[0]) + 1;
                            v1343 = 0LL;
                            ++LODWORD(lpMem[0]);
                            if ( !lpMem[1] )
                            {
                              LODWORD(v1317) = 0;
                              v82 = RtlUIntAdd(v157, v157, (int *)&v1317);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_584;
                              v82 = RtlUIntAdd(HIDWORD(lpMem[0]), v1317, (int *)lpMem + 1);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_134;
                              LODWORD(lpMem[0]) += v165;
                              goto LABEL_221;
                            }
                            v167 = (int *)lpMem[1];
                            k = (size_t)lpMem[1];
                            LODWORD(v1329) = 0;
                            if ( v164 )
                            {
                              do
                              {
                                v168 = *v167;
                                LODWORD(v1317) = 0;
                                v82 = RtlUIntAdd(4u, v168, (int *)&v1317);
                                v1313 = v82;
                                if ( v82 < 0 )
                                  goto LABEL_584;
                                v82 = RtlULongLongAdd(v169, (unsigned int)v1317, (__int64 *)&k);
                                v1313 = v82;
                                if ( v82 < 0 )
                                  goto LABEL_584;
                                v167 = (int *)k;
                                LODWORD(v1329) = v1329 + 1;
                              }
                              while ( (unsigned int)v1329 < v170 );
                              v1331 = v84;
                              v157 = 4LL;
                              v1318 = v87;
                            }
                            v1313 = RtlULongLongAdd((unsigned __int64)v167, v157, (__int64 *)&v1344);
                            v82 = v1313;
                            if ( v1313 < 0 )
                              goto LABEL_134;
                            if ( v171 + 2 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                            {
                              v172 = v1344;
                              *v171 = v166;
                              *v172 = v166;
                              ++LODWORD(lpMem[0]);
LABEL_221:
                              LODWORD(v1317) = 0;
                              v82 = RtlUIntAdd(v166, v166, (int *)&v1317);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_584;
                              dwBytes = v1317;
                              LODWORD(v1317) = 0;
                              v82 = RtlUIntAdd(v173, 8, (int *)&v1317);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_584;
                              v82 = RtlUIntAdd(v174, v1317, (int *)&dwBytes);
                              v1313 = v82;
                              if ( v82 < 0 )
                                goto LABEL_233;
                              LODWORD(v1317) = 0;
                              v82 = RtlUIntAdd(v175, v175, (int *)&v1317);
                              v1313 = v82;
                              if ( v82 >= 0 )
                              {
                                v82 = RtlUIntAdd(dwBytes, v1317, (int *)&dwBytes);
                                v1313 = v82;
                                if ( v82 < 0 )
                                  goto LABEL_233;
                                LODWORD(v1317) = 0;
                                v82 = RtlUIntAdd(v176, v176, (int *)&v1317);
                                v1313 = v82;
                                if ( v82 >= 0 )
                                {
                                  v82 = RtlUIntAdd(dwBytes, v1317, (int *)&dwBytes);
                                  v1313 = v82;
                                  if ( v82 < 0 )
                                    goto LABEL_233;
                                  LODWORD(v1317) = 0;
                                  v82 = RtlUIntAdd(v177, v177, (int *)&v1317);
                                  v1313 = v82;
                                  if ( v82 >= 0 )
                                  {
                                    v82 = RtlUIntAdd(dwBytes, v1317, (int *)&dwBytes);
                                    v1313 = v82;
                                    if ( v82 < 0 )
                                      goto LABEL_233;
                                    LODWORD(v1317) = 0;
                                    v82 = RtlUIntAdd(v178, v178, (int *)&v1317);
                                    v1313 = v82;
                                    if ( v82 >= 0 )
                                    {
                                      v82 = RtlUIntAdd(dwBytes, v1317, (int *)&dwBytes);
                                      v1313 = v82;
                                      if ( v82 >= 0 )
                                      {
                                        LODWORD(v1338) = dwBytes;
                                        v179 = 0LL;
                                        v1325 = 0LL;
                                        v1320 = 0LL;
                                        v1328 = 0LL;
                                        LODWORD(v1329) = 0;
                                        v1334 = 0LL;
                                        v1332 = 0LL;
                                        v1341 = 0LL;
                                        Size = __rdtsc();
                                        v1348 = 8;
                                        v181 = RtlUIntAdd(8u, SHIDWORD(lpMem[0]), (int *)&v1348);
                                        if ( v181 >= 0 )
                                        {
                                          v182 = (v1348 + 7) & 0xFFFFFFF8;
                                          if ( v182 < v1348 )
                                          {
                                            v82 = -805306219;
                                            goto LABEL_583;
                                          }
                                          v1348 = (v1348 + 7) & 0xFFFFFFF8;
                                          v183 = v182;
                                          v184 = GetProcessHeap();
                                          v185 = (char *)HeapAlloc(v184, 8u, v183);
                                          v179 = v185;
                                          if ( !v185 )
                                          {
                                            v82 = -805306345;
                                            v1313 = -805306345;
LABEL_355:
                                            v93 = v80;
                                            if ( v82 < 0 )
                                              goto LABEL_108;
                                            if ( !v1326 )
                                            {
                                              v82 = -1073425151;
                                              goto LABEL_107;
                                            }
                                            if ( !v1337 )
                                            {
                                              v82 = -1073741811;
                                              goto LABEL_107;
                                            }
                                            pcchLength = (size_t)v1337;
                                            v1313 = RtlULongLongAdd(
                                                      (unsigned __int64)v1337,
                                                      4LL,
                                                      (__int64 *)&pcchLength);
                                            v82 = v1313;
                                            if ( v1313 < 0 )
                                              goto LABEL_538;
                                            v442 = (int *)pcchLength;
                                            if ( !*v440 )
                                              v442 = 0LL;
                                            if ( *v440 != v441 )
                                            {
                                              v82 = -1073741789;
                                              v1313 = -1073741789;
LABEL_538:
                                              v93 = v80;
                                              v1337 = v440;
                                              goto LABEL_108;
                                            }
                                            v82 = *v442;
                                            v1313 = v82;
                                            if ( v82 == -805306333 )
                                            {
                                              LODWORD(Src) = -2147024774;
LABEL_543:
                                              v1337 = v440;
                                              if ( v1326 == 6 )
                                              {
                                                k = (size_t)v440;
                                                v443 = 4LL;
                                                while ( 1 )
                                                {
                                                  v1313 = RtlULongLongAdd((unsigned __int64)v440, v443, (__int64 *)&k);
                                                  v82 = v1313;
                                                  if ( v1313 < 0 )
                                                    goto LABEL_134;
                                                  v1313 = RtlULongLongAdd(k, v444, (__int64 *)&k);
                                                  v82 = v1313;
                                                  if ( v1313 < 0 )
                                                    goto LABEL_134;
                                                  v440 = (_DWORD *)k;
                                                  if ( v445 != -1 )
                                                  {
                                                    v1313 = RtlULongLongAdd(k, v443, (__int64 *)&k);
                                                    v82 = v1313;
                                                    if ( v1313 < 0 )
                                                      goto LABEL_134;
                                                    v447 = (size_t *)k;
                                                    if ( !v446 )
                                                      v447 = 0LL;
                                                    if ( v446 == 8 )
                                                    {
                                                      v448 = *v447;
                                                      v449 = (unsigned __int64)v1337;
                                                      k = (size_t)v1337;
                                                      Size = v448;
                                                      while ( 1 )
                                                      {
                                                        v1313 = RtlULongLongAdd(v449, 4LL, (__int64 *)&k);
                                                        v82 = v1313;
                                                        if ( v1313 < 0 )
                                                          goto LABEL_134;
                                                        v1313 = RtlULongLongAdd(k, v450, (__int64 *)&k);
                                                        v82 = v1313;
                                                        if ( v1313 < 0 )
                                                          goto LABEL_134;
                                                        v449 = k;
                                                        if ( (unsigned int)(v451 + 1) >= 2 )
                                                        {
                                                          v1313 = RtlULongLongAdd(k, 4LL, (__int64 *)&k);
                                                          v82 = v1313;
                                                          if ( v1313 < 0 )
                                                            goto LABEL_134;
                                                          v454 = (int *)k;
                                                          if ( !v452 )
                                                            v454 = 0LL;
                                                          if ( v452 == 4 )
                                                          {
                                                            v455 = *v454;
                                                            v456 = v453;
                                                            k = v453;
                                                            LODWORD(v1317) = v455;
                                                            v457 = 4LL;
                                                            while ( 1 )
                                                            {
                                                              v1313 = RtlULongLongAdd(v456, v457, (__int64 *)&k);
                                                              v82 = v1313;
                                                              if ( v1313 < 0 )
                                                                goto LABEL_134;
                                                              v1313 = RtlULongLongAdd(k, v458, (__int64 *)&k);
                                                              v82 = v1313;
                                                              if ( v1313 < 0 )
                                                                goto LABEL_134;
                                                              v456 = k;
                                                              if ( (unsigned int)(v459 + 1) >= 3 )
                                                              {
                                                                v1313 = RtlULongLongAdd(k, v457, (__int64 *)&k);
                                                                v82 = v1313;
                                                                if ( v1313 < 0 )
                                                                  goto LABEL_134;
                                                                v460 = (unsigned int *)v1337;
                                                                k = (size_t)v1337;
                                                                while ( 1 )
                                                                {
                                                                  v461 = *v460;
                                                                  v82 = RtlULongLongAdd(
                                                                          (unsigned __int64)v460,
                                                                          4LL,
                                                                          (__int64 *)&k);
                                                                  v1313 = v82;
                                                                  if ( v82 < 0 )
                                                                    goto LABEL_584;
                                                                  v1313 = RtlULongLongAdd(k, v461, (__int64 *)&k);
                                                                  v82 = v1313;
                                                                  if ( v1313 < 0 )
                                                                    goto LABEL_134;
                                                                  v460 = (unsigned int *)k;
                                                                  if ( (unsigned int)(v462 + 1) >= 4 )
                                                                  {
                                                                    v1313 = RtlULongLongAdd(k, 4LL, (__int64 *)&k);
                                                                    v82 = v1313;
                                                                    if ( v1313 < 0 )
                                                                      goto LABEL_134;
                                                                    v464 = (int *)k;
                                                                    if ( !v463 )
                                                                      v464 = 0LL;
                                                                    if ( v463 == 4 )
                                                                    {
                                                                      v465 = (unsigned int *)v1337;
                                                                      v466 = *v464;
                                                                      k = (size_t)v1337;
                                                                      LODWORD(v1329) = v466;
                                                                      while ( 1 )
                                                                      {
                                                                        v467 = *v465;
                                                                        v82 = RtlULongLongAdd(
                                                                                (unsigned __int64)v465,
                                                                                4LL,
                                                                                (__int64 *)&k);
                                                                        v1313 = v82;
                                                                        if ( v82 < 0 )
                                                                          goto LABEL_584;
                                                                        v82 = RtlULongLongAdd(k, v467, (__int64 *)&k);
                                                                        v1313 = v82;
                                                                        if ( v82 < 0 )
                                                                          goto LABEL_584;
                                                                        v465 = (unsigned int *)k;
                                                                        if ( (unsigned int)(v468 + 1) >= 5 )
                                                                        {
                                                                          v82 = RtlULongLongAdd(k, 4LL, (__int64 *)&k);
                                                                          v1313 = v82;
                                                                          if ( v82 < 0 )
                                                                            goto LABEL_583;
                                                                          v472 = (int *)k;
                                                                          if ( !v469 )
                                                                            v472 = 0LL;
                                                                          if ( v469 != 4 )
                                                                          {
                                                                            v82 = -1073741789;
                                                                            goto LABEL_583;
                                                                          }
                                                                          v93 = *v472;
                                                                          if ( v1347 != Size )
                                                                            goto LABEL_544;
                                                                          v1367 = v1317;
                                                                          if ( (unsigned int)v1329 > 4
                                                                            || (unsigned int)v470 > 4 )
                                                                          {
                                                                            v82 = -2147024774;
                                                                            goto LABEL_107;
                                                                          }
                                                                          memcpy_0((void *)lpModuleName, v471, v470);
                                                                          if ( (_DWORD)Src )
                                                                          {
                                                                            v82 = (int)Src;
                                                                            v1313 = (int)Src;
                                                                          }
                                                                          goto LABEL_108;
                                                                        }
                                                                      }
                                                                    }
                                                                    goto LABEL_132;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                          goto LABEL_132;
                                                        }
                                                      }
                                                    }
                                                    goto LABEL_132;
                                                  }
                                                }
                                              }
LABEL_544:
                                              v82 = -1073425151;
                                              goto LABEL_133;
                                            }
                                            LODWORD(Src) = v82;
                                            if ( v82 == -2147024774 )
                                              goto LABEL_543;
                                            LODWORD(Src) = v82;
                                            v1337 = v440;
                                            v93 = v80;
                                            if ( v82 >= 0 )
                                              goto LABEL_543;
                                            goto LABEL_108;
                                          }
                                          *(_DWORD *)v185 = lpMem[0];
                                          k = (size_t)v185;
                                          v186 = RtlULongLongAdd((unsigned __int64)v185, 4LL, (__int64 *)&k);
                                          pcchLength = v188;
                                          v181 = v186;
                                          if ( v186 < 0
                                            || (v189 = k,
                                                *(_DWORD *)k = HIDWORD(lpMem[0]),
                                                v190 = RtlULongLongAdd(v189, v187, (__int64 *)&k),
                                                pcchLength = (size_t)v179,
                                                v181 = v190,
                                                v190 < 0) )
                                          {
                                            v191 = GetProcessHeap();
                                            HeapFree(v191, 0, (LPVOID)pcchLength);
                                            v179 = (char *)v1325;
                                            v180 = v1325;
                                          }
                                          else
                                          {
                                            *(_QWORD *)&v179[v1348 - 8] = Size;
                                            memcpy_0((void *)k, lpMem[1], HIDWORD(lpMem[0]));
                                            v180 = v1348;
                                            v1325 = (__int64)v179;
                                          }
                                        }
                                        v82 = v181 | 0x10000000;
                                        v1313 = v82;
                                        if ( v82 < 0 )
                                        {
LABEL_331:
                                          if ( !v179 )
                                          {
LABEL_333:
                                            v286 = (_QWORD *)v1320;
                                            if ( v1320 )
                                            {
                                              Size = *(_QWORD *)(v1320 + 8);
                                              if ( Size )
                                              {
                                                v287 = GetProcessHeap();
                                                HeapFree(v287, 0, (LPVOID)Size);
                                                v286[1] = 0LL;
                                              }
                                              Size = v286[3];
                                              if ( Size )
                                              {
                                                v288 = GetProcessHeap();
                                                HeapFree(v288, 0, (LPVOID)Size);
                                                v286[3] = 0LL;
                                              }
                                              Size = v286[5];
                                              if ( Size )
                                              {
                                                v289 = GetProcessHeap();
                                                HeapFree(v289, 0, (LPVOID)Size);
                                                v286[5] = 0LL;
                                              }
                                              v290 = GetProcessHeap();
                                              HeapFree(v290, 0, v286);
                                            }
                                            v291 = v1328;
                                            if ( v1328 )
                                            {
                                              v292 = GetProcessHeap();
                                              HeapFree(v292, 0, v291);
                                            }
                                            v293 = v1334;
                                            if ( v1334 )
                                            {
                                              v294 = GetProcessHeap();
                                              HeapFree(v294, 0, v293);
                                            }
                                            v295 = v1332;
                                            if ( v1332 )
                                            {
                                              Size = *((_QWORD *)v1332 + 1);
                                              if ( Size )
                                              {
                                                v296 = GetProcessHeap();
                                                HeapFree(v296, 0, (LPVOID)Size);
                                                v295[1] = 0LL;
                                              }
                                              Size = v295[3];
                                              if ( Size )
                                              {
                                                v297 = GetProcessHeap();
                                                HeapFree(v297, 0, (LPVOID)Size);
                                                v295[3] = 0LL;
                                              }
                                              Size = v295[5];
                                              if ( Size )
                                              {
                                                v298 = GetProcessHeap();
                                                HeapFree(v298, 0, (LPVOID)Size);
                                                v295[5] = 0LL;
                                              }
                                              v299 = GetProcessHeap();
                                              HeapFree(v299, 0, v295);
                                            }
                                            v300 = v1341;
                                            if ( v1341 )
                                            {
                                              v301 = GetProcessHeap();
                                              HeapFree(v301, 0, v300);
                                            }
                                            goto LABEL_355;
                                          }
LABEL_332:
                                          v285 = GetProcessHeap();
                                          HeapFree(v285, 0, v179);
                                          goto LABEL_333;
                                        }
                                        v1321 = 0LL;
                                        if ( !v179 )
                                        {
                                          v82 = -805306355;
                                          goto LABEL_133;
                                        }
                                        v192 = v180;
                                        pcchLength = v180;
                                        if ( !v180 || (v193 = MemoryAlloc(v180 + 8LL), Src = v193, v194 = 0, !v193) )
                                        {
                                          v82 = -805306367;
                                          v1313 = -805306367;
                                          goto LABEL_332;
                                        }
                                        dwBytes_4 = 0;
                                        v195 = 0LL;
                                        if ( v192 )
                                        {
                                          do
                                            v194 ^= v179[v195++];
                                          while ( v195 < v192 );
                                          dwBytes_4 = v194;
                                        }
                                        v196 = (size_t)v193;
                                        k = (size_t)v193;
                                        v1322 = (LPVOID)0xC81ECB17B1B54A58LL;
                                        v197 = -1;
                                        LODWORD(v1342) = 0;
                                        dwBytes = 0;
                                        v198 = (unsigned __int8 *)v179;
                                        v199 = 0;
                                        v200 = v192 & 7;
                                        if ( (v192 & 7) != 0 )
                                        {
                                          dwBytes = 0;
                                          LODWORD(v1342) = 0;
                                          v201 = 56;
                                          v202 = 0;
                                          do
                                          {
                                            v203 = *v198;
                                            if ( v199 >= 4 )
                                            {
                                              v204 = (v203 << v201) | (unsigned int)v1342;
                                              LODWORD(v1342) = v204;
                                            }
                                            else
                                            {
                                              v204 = (unsigned int)v1342;
                                              v202 |= v203 << (v201 - 32);
                                            }
                                            ++v198;
                                            ++v199;
                                            v201 -= 8;
                                          }
                                          while ( (int)v199 < (int)v200 );
                                          v194 = dwBytes_4;
                                          dwBytes = v202;
                                          v1325 = (__int64)v179;
                                          v1331 = v84;
                                          v1318 = v87;
                                          v199 = v202 ^ 0xB17A307A;
                                          v205 = v204 ^ 0x42F6B18D;
                                          v206 = 0;
                                          v207 = v202 ^ 0xB17A307A;
                                          v208 = v205;
                                          if ( (v192 & 7) != 0 )
                                          {
                                            v209 = (_BYTE *)k;
                                            do
                                            {
                                              if ( v206 >= 4 )
                                              {
                                                v208 = __ROR4__(v208, 24);
                                                v210 = v208;
                                              }
                                              else
                                              {
                                                v207 = __ROR4__(v207, 24);
                                                v210 = v207;
                                              }
                                              ++v206;
                                              *v209 = v210;
                                              v211 = ++v209;
                                            }
                                            while ( (int)v206 < (int)v200 );
                                            v196 = (size_t)v211;
                                            v80 = Ptr;
                                            k = v196;
                                          }
                                          else
                                          {
                                            v196 = k;
                                          }
                                          if ( v200 <= 4 )
                                          {
                                            v197 = 0;
                                            if ( v200 >= 4 )
                                              goto LABEL_270;
                                            v199 = v199 >> (8 * (4 - v200)) << (8 * (4 - v200));
                                          }
                                          else
                                          {
                                            v197 = v205 >> (8 * (8 - v200)) << (8 * (8 - v200));
                                          }
                                          v196 = k;
                                        }
LABEL_270:
                                        if ( v192 >> 3 )
                                        {
                                          v212 = (_BYTE *)(v196 + 7);
                                          v213 = WORD2(v1322);
                                          v214 = v198 + 2;
                                          v215 = (int)v1342;
                                          v216 = v192 >> 3;
                                          v217 = dwBytes;
                                          LODWORD(v1317) = WORD1(v1322);
                                          do
                                          {
                                            v218 = v214[1] | ((*v214 | ((*(v214 - 1) | (*(v214 - 2) << 8)) << 8)) << 8);
                                            v219 = v214[5] | ((v214[4] | ((v214[3] | (v214[2] << 8)) << 8)) << 8);
                                            Size = (size_t)(v214 + 8);
                                            v220 = v197 ^ v219;
                                            v221 = v199 ^ HIDWORD(v1322) ^ v218 ^ ((v197 ^ v219) - 19032);
                                            v222 = v220 ^ (__ROR4__(v221, 7)
                                                         + WORD1(v1322) * __ROR4__(v221 ^ HIDWORD(v1322), 15));
                                            v223 = v221 ^ (v213 * __ROR4__(v222 - 1313519016, 9) - __ROR4__(v222, 10));
                                            v224 = v222 ^ (__ROR4__(v223, 27) + HIWORD(v1322)
                                                                              * __ROR4__(v223 ^ v213, 28));
                                            v225 = v223 ^ (HIDWORD(v1322) - (v224 ^ 0xB1B54A58));
                                            v226 = v224 ^ (WORD1(v1322) * (v225 - 19032) - (v225 >> 6));
                                            v227 = v225 ^ (19032 * (v213 ^ __ROR4__(v226, 15)));
                                            v228 = v226 ^ (v213 * (HIWORD(v1322) + __ROR4__(~v227, 3)));
                                            v229 = v227 ^ (v228 - HIDWORD(v1322) - 19032);
                                            v230 = v228 ^ (v1317 * (v229 ^ HIWORD(v1322))) ^ __ROR4__(v229, 10);
                                            v231 = v229 ^ __ROR4__(v230, 3) ^ (v213 * __ROR4__(v230 ^ 0x4A58, 26));
                                            v232 = v230 ^ (19032 * (__ROR4__(v231, 15) - HIWORD(v1322)));
                                            v233 = v231 ^ (19032 * (HIWORD(v1322) ^ v232)) ^ ((v232 ^ (v232 >> 14)) >> 1) ^ (19032 * ((8 * (v232 - v213)) | ((v232 - v213) >> 29)));
                                            v234 = v232 ^ (WORD1(v1322) * (v233 - v213) - (v233 >> 13));
                                            v235 = v233 ^ __ROR4__(v234, 11) ^ (v213 * __ROR4__(-1313519016 - v234, 9));
                                            v236 = v234 ^ (v235 - HIWORD(v1322) + 1313519016);
                                            v237 = v235 ^ (19032 * (v236 ^ WORD1(v1322)) - __ROR4__(v236, 7));
                                            v238 = v236 ^ (WORD1(v1322) * __ROR4__(HIWORD(v1322) ^ v237, 28)
                                                         - __ROR4__(v237, 16));
                                            v239 = v237 ^ (__ROR4__(v238, 4) + v213 * __ROR4__(-1313519016 - v238, 10));
                                            v240 = v238 ^ __ROR4__(v239, 9) ^ (HIWORD(v1322)
                                                                             * __ROR4__(v239 + 1313519016, 4));
                                            v241 = v239 ^ (19032 * __ROR4__(v240 ^ HIDWORD(v1322), 24)
                                                         - __ROR4__(v240, 30));
                                            v242 = v240 ^ (WORD1(v1322) * __ROR4__(HIDWORD(v1322) - v241, 11)
                                                         - __ROR4__(v241, 12));
                                            v243 = v241 ^ (v242 >> 8) ^ (v213 * (WORD1(v1322) ^ v242));
                                            v199 = v217 ^ v243;
                                            v244 = v243 ^ HIDWORD(v1322) ^ 0xB1B54A58;
                                            *(v212 - 4) = v217 ^ v243;
                                            v245 = v242 ^ v244;
                                            v214 = (unsigned __int8 *)Size;
                                            v197 = v215 ^ v245;
                                            *v212 = v197;
                                            LOBYTE(v227) = __ROR4__(v217 ^ v243, 8);
                                            v217 = v218;
                                            *(v212 - 5) = v227;
                                            v212 += 8;
                                            v215 = v219;
                                            *(v212 - 9) = __ROR4__(v197, 8);
                                            *(v212 - 14) = __ROR4__(v199, 16);
                                            *(v212 - 10) = __ROR4__(v197, 16);
                                            *(v212 - 15) = __ROR4__(v199, 24);
                                            *(v212 - 11) = __ROR4__(v197, 24);
                                            --v216;
                                          }
                                          while ( v216 );
                                          v194 = dwBytes_4;
                                          v87 = v1318;
                                          v84 = v1331;
                                          v80 = Ptr;
                                          v192 = pcchLength;
                                        }
                                        *(_QWORD *)((char *)Src + v192) = v194;
                                        v246 = GetProcessHeap();
                                        v247 = (size_t *)HeapAlloc(v246, 8u, 0x30uLL);
                                        if ( v247 )
                                        {
                                          *(_DWORD *)v247 = v192 + 8;
                                          v248 = v192 + 8;
                                          v249 = GetProcessHeap();
                                          v250 = HeapAlloc(v249, 8u, v248);
                                          if ( v250 )
                                          {
                                            v247[1] = (size_t)v250;
                                            memcpy_0(v250, Src, v248);
                                            *((_DWORD *)v247 + 4) = 160;
                                            v251 = GetProcessHeap();
                                            v252 = HeapAlloc(v251, 8u, 0xA0uLL);
                                            v253 = 0;
                                            if ( v252 )
                                            {
                                              v247[3] = (size_t)v252;
                                              *v252 = xmmword_1808D85F0[0];
                                              v252[1] = xmmword_1808D85F0[1];
                                              v252[2] = xmmword_1808D85F0[2];
                                              v252[3] = xmmword_1808D85F0[3];
                                              v252[4] = xmmword_1808D85F0[4];
                                              v252[5] = xmmword_1808D85F0[5];
                                              v252[6] = xmmword_1808D85F0[6];
                                              v252[7] = xmmword_1808D85F0[7];
                                              v252[8] = xmmword_1808D85F0[8];
                                              v252[9] = xmmword_1808D85F0[9];
                                              *((_DWORD *)v247 + 8) = 8;
                                              v254 = GetProcessHeap();
                                              v255 = HeapAlloc(v254, 8u, 8uLL);
                                              if ( v255 )
                                              {
                                                v247[5] = (size_t)v255;
                                                *v255 = qword_1808D85E0;
                                                v1321 = 0LL;
LABEL_288:
                                                v1324 = v87;
                                                v260 = v84;
                                                k = v1325;
                                                v1322 = v84;
                                                v1320 = (SIZE_T)v247;
                                                v261 = GetProcessHeap();
                                                HeapFree(v261, 0, Src);
                                                v262 = v1321;
                                                if ( v1321 )
                                                {
                                                  Size = *((_QWORD *)v1321 + 1);
                                                  if ( Size )
                                                  {
                                                    v263 = GetProcessHeap();
                                                    HeapFree(v263, 0, (LPVOID)Size);
                                                    v262[1] = 0LL;
                                                  }
                                                  Size = v262[3];
                                                  if ( Size )
                                                  {
                                                    v264 = GetProcessHeap();
                                                    HeapFree(v264, 0, (LPVOID)Size);
                                                    v262[3] = 0LL;
                                                  }
                                                  Size = v262[5];
                                                  if ( Size )
                                                  {
                                                    v265 = GetProcessHeap();
                                                    HeapFree(v265, 0, (LPVOID)Size);
                                                    v262[5] = 0LL;
                                                  }
                                                  v266 = GetProcessHeap();
                                                  HeapFree(v266, 0, v262);
                                                  v1320 = (SIZE_T)v247;
                                                }
                                                v82 = v253 | 0x10000000;
                                                v267 = (char *)k;
                                                v84 = v260;
                                                v1313 = v82;
                                                v87 = v1324;
                                                if ( v82 < 0 )
                                                  goto LABEL_330;
                                                v268 = *(_DWORD *)v247;
                                                v1368 = 0;
                                                dwBytes = 4;
                                                v270 = RtlUIntAdd(4u, v268, (int *)&dwBytes);
                                                if ( v270 >= 0 )
                                                {
                                                  v270 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                                                  if ( v270 >= 0 )
                                                  {
                                                    v270 = RtlUIntAdd(dwBytes, *((_DWORD *)v247 + 4), (int *)&dwBytes);
                                                    if ( v270 >= 0 )
                                                    {
                                                      v270 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                                                      if ( v270 >= 0 )
                                                      {
                                                        v270 = RtlUIntAdd(
                                                                 dwBytes,
                                                                 *((_DWORD *)v247 + 8),
                                                                 (int *)&dwBytes);
                                                        if ( v270 >= 0 )
                                                        {
                                                          v1368 = dwBytes;
                                                          v271 = dwBytes;
                                                          v272 = GetProcessHeap();
                                                          v273 = HeapAlloc(v272, 8u, v271);
                                                          if ( !v273 )
                                                          {
                                                            v179 = (char *)k;
                                                            v82 = -805306345;
                                                            v84 = (unsigned __int16 *)v1322;
                                                            v87 = v1324;
                                                            v1313 = -805306345;
                                                            goto LABEL_331;
                                                          }
                                                          v247 = (size_t *)v1320;
                                                          v1318 = v273;
                                                          *v273 = *(_DWORD *)v1320;
                                                          v270 = RtlULongLongAdd(
                                                                   (unsigned __int64)v273,
                                                                   4LL,
                                                                   (__int64 *)&v1318);
                                                          v275 = v274;
                                                          if ( v270 < 0 )
                                                            goto LABEL_312;
                                                          memcpy_0(v1318, (const void *)v247[1], *(unsigned int *)v247);
                                                          v270 = RtlULongLongAdd(
                                                                   (unsigned __int64)v1318,
                                                                   *(unsigned int *)v247,
                                                                   (__int64 *)&v1318);
                                                          if ( v270 < 0 )
                                                            goto LABEL_312;
                                                          v276 = v1318;
                                                          *(_DWORD *)v1318 = *((_DWORD *)v247 + 4);
                                                          v270 = RtlULongLongAdd(
                                                                   (unsigned __int64)v276,
                                                                   4LL,
                                                                   (__int64 *)&v1318);
                                                          if ( v270 < 0
                                                            || (memcpy_0(
                                                                  v1318,
                                                                  (const void *)v247[3],
                                                                  *((unsigned int *)v247 + 4)),
                                                                v270 = RtlULongLongAdd(
                                                                         (unsigned __int64)v1318,
                                                                         *((unsigned int *)v247 + 4),
                                                                         (__int64 *)&v1318),
                                                                v270 < 0)
                                                            || (v277 = v1318,
                                                                *(_DWORD *)v1318 = *((_DWORD *)v247 + 8),
                                                                v270 = RtlULongLongAdd(
                                                                         (unsigned __int64)v277,
                                                                         4LL,
                                                                         (__int64 *)&v1318),
                                                                v270 < 0)
                                                            || (memcpy_0(
                                                                  v1318,
                                                                  (const void *)v247[5],
                                                                  *((unsigned int *)v247 + 8)),
                                                                v270 = RtlULongLongAdd(
                                                                         (unsigned __int64)v1318,
                                                                         *((unsigned int *)v247 + 8),
                                                                         (__int64 *)&v1318),
                                                                v270 < 0) )
                                                          {
LABEL_312:
                                                            v278 = GetProcessHeap();
                                                            HeapFree(v278, 0, v275);
                                                            v269 = v1324;
                                                          }
                                                          else
                                                          {
                                                            v269 = v1324;
                                                            LODWORD(v1329) = v1368;
                                                            v1328 = v275;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                v267 = (char *)k;
                                                v82 = v270 | 0x10000000;
                                                v84 = (unsigned __int16 *)v1322;
                                                v87 = v269;
                                                v1313 = v82;
                                                if ( v82 < 0 )
                                                  goto LABEL_330;
                                                v1363 = 8;
                                                v82 = RtlUIntAdd(8u, (int)v1338, (int *)&v1363) | 0x10000000;
                                                v1325 = (__int64)v279;
                                                v1313 = v82;
                                                if ( v82 < 0 )
                                                {
LABEL_373:
                                                  v179 = (char *)v1325;
                                                  goto LABEL_331;
                                                }
                                                v280 = (v1363 + 7) & 0xFFFFFFF8;
                                                if ( v280 < v1363 )
                                                {
                                                  v82 = -1073741675;
                                                  v179 = v279;
                                                  v1313 = -1073741675;
                                                  goto LABEL_331;
                                                }
                                                v1369 = (v1363 + 7) & 0xFFFFFFF8;
                                                v1313 = RtlUIntAdd(v280, 8, (int *)&v1369);
                                                v82 = v1313;
                                                if ( v1313 >= 0 )
                                                {
                                                  if ( lpMem[1] && LODWORD(lpMem[0]) > 1 )
                                                  {
                                                    v282 = lpMem[1];
                                                    LODWORD(v1317) = 0;
                                                    v87 = v281;
                                                    v1321 = lpMem[1];
                                                    v1325 = k;
                                                    do
                                                    {
                                                      v1313 = RtlULongLongAdd(
                                                                (unsigned __int64)v282,
                                                                4LL,
                                                                (__int64 *)&v1321);
                                                      v82 = v1313;
                                                      if ( v1313 < 0 )
                                                        goto LABEL_330;
                                                      v1313 = RtlULongLongAdd(
                                                                (unsigned __int64)v1321,
                                                                v283,
                                                                (__int64 *)&v1321);
                                                      v82 = v1313;
                                                      if ( v1313 < 0 )
                                                        goto LABEL_330;
                                                      LODWORD(v1317) = v1317 + 1;
                                                      v282 = v1321;
                                                    }
                                                    while ( !(_DWORD)v1317 );
                                                    LODWORD(v1322) = *(_DWORD *)v1321;
                                                    v1313 = RtlULongLongAdd(
                                                              (unsigned __int64)v1321,
                                                              4LL,
                                                              (__int64 *)&v1321);
                                                    v82 = v1313;
                                                    if ( v1313 < 0 )
                                                      goto LABEL_330;
                                                    if ( LODWORD(lpMem[0]) <= 2 )
                                                    {
                                                      v82 = -1073741811;
                                                      v1313 = -1073741811;
LABEL_330:
                                                      v179 = v267;
                                                      goto LABEL_331;
                                                    }
                                                    v302 = lpMem[1];
                                                    Src = lpMem[1];
                                                    do
                                                    {
                                                      LODWORD(v1317) = *v302;
                                                      k = v284;
                                                      v1338 = v87;
                                                      v1318 = v84;
                                                      v1321 = v267;
                                                      v1324 = v247;
                                                      v1313 = RtlULongLongAdd(
                                                                (unsigned __int64)v302,
                                                                4LL,
                                                                (__int64 *)&Src);
                                                      v82 = v1313;
                                                      if ( v1313 < 0 )
                                                        goto LABEL_330;
                                                      v1313 = RtlULongLongAdd(
                                                                (unsigned __int64)Src,
                                                                (unsigned int)v1317,
                                                                (__int64 *)&Src);
                                                      v82 = v1313;
                                                      if ( v1313 < 0 )
                                                        goto LABEL_330;
                                                      v302 = Src;
                                                    }
                                                    while ( (unsigned int)(v303 + 1) < 2 );
                                                    v1313 = RtlULongLongAdd((unsigned __int64)Src, 4LL, (__int64 *)&Src);
                                                    v82 = v1313;
                                                    if ( v1313 < 0 )
                                                      goto LABEL_373;
                                                    dwBytes = v304;
                                                    v1313 = RtlUIntAdd(v304, v1369, (int *)&dwBytes);
                                                    v82 = v1313;
                                                    if ( v1313 < 0 )
                                                      goto LABEL_369;
                                                    v1313 = RtlUIntAdd(dwBytes, v305, (int *)&dwBytes);
                                                    v82 = v1313;
                                                    if ( v1313 < 0
                                                      || (v1313 = RtlUIntAdd(dwBytes, (int)v1322, (int *)&dwBytes),
                                                          v82 = v1313,
                                                          v1313 < 0)
                                                      || (v1313 = RtlUIntAdd(dwBytes, v306, (int *)&dwBytes),
                                                          v82 = v1313,
                                                          v1313 < 0)
                                                      || (v1313 = RtlUIntAdd(dwBytes, v307, (int *)&dwBytes),
                                                          v82 = v1313,
                                                          v1313 < 0) )
                                                    {
LABEL_369:
                                                      if ( v82 < 0 )
                                                        goto LABEL_373;
                                                      v308 = 0;
                                                    }
                                                    else
                                                    {
                                                      v308 = dwBytes;
                                                    }
                                                    if ( v308 > 0x400000 )
                                                    {
                                                      v82 = -2147418113;
                                                      v1313 = -2147418113;
                                                      goto LABEL_373;
                                                    }
                                                    v309 = v308;
                                                    v310 = GetProcessHeap();
                                                    v1334 = HeapAlloc(v310, 8u, v309);
                                                    if ( !v1334 )
                                                    {
                                                      v1334 = 0LL;
                                                      v311 = (void *)k;
                                                      v82 = -805306345;
                                                      goto LABEL_377;
                                                    }
                                                    v311 = (void *)k;
                                                    phModule = 0LL;
                                                    v1376 = 0LL;
                                                    v1377 = 0LL;
                                                    if ( !k )
                                                    {
                                                      v82 = -2147024809;
LABEL_377:
                                                      v87 = v1338;
                                                      v179 = (char *)v1321;
                                                      v312 = v1324;
LABEL_378:
                                                      v1313 = v82;
                                                      v1320 = (SIZE_T)v312;
                                                      v1328 = v311;
                                                      goto LABEL_331;
                                                    }
                                                    *(_QWORD *)&v1376 = k;
                                                    LODWORD(v1377) = v1329;
                                                    *((_QWORD *)&v1376 + 1) = v1334;
                                                    *(_QWORD *)((char *)&v1377 + 4) = v309;
                                                    if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                                      && (v314 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                                    {
                                                      v315 = ((__int64 (__fastcall *)(__int64, __int128 *))v314)(
                                                               134LL,
                                                               &v1376);
                                                      LODWORD(v1342) = v309;
                                                      v82 = v315 | 0x10000000;
                                                      v1313 = v315 | 0x10000000;
                                                      if ( v315 >= 0 )
                                                      {
                                                        v316 = DWORD1(v1377);
                                                        v317 = v84;
                                                        v318 = (void *)k;
                                                        v319 = v1324;
                                                        v320 = (char *)v1321;
                                                        v321 = v1338;
                                                        goto LABEL_392;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v313 = GetLastError();
                                                      v1313 = v313;
                                                      v82 = v313;
                                                      if ( v313 > 0 )
                                                      {
                                                        v82 = (unsigned __int16)v313 | 0x80070000;
                                                        v1313 = v82;
                                                      }
                                                      LODWORD(v1342) = v309;
                                                      if ( v82 >= 0 )
                                                      {
                                                        LODWORD(v1342) = v309;
                                                        v82 = -2147467259;
                                                        v1313 = -2147467259;
                                                      }
                                                    }
                                                    if ( v82 == -805306333 )
                                                    {
                                                      v82 = -2147024774;
                                                      goto LABEL_386;
                                                    }
                                                    v319 = v1324;
                                                    v317 = v84;
                                                    v320 = (char *)v1321;
                                                    v321 = v1338;
                                                    v179 = (char *)v1321;
                                                    v318 = (void *)k;
                                                    v87 = v1338;
                                                    v1320 = (SIZE_T)v1324;
                                                    v1328 = (LPVOID)k;
                                                    if ( v82 < 0 )
                                                      goto LABEL_331;
                                                    v316 = (unsigned int)v1342;
LABEL_392:
                                                    v322 = 0LL;
                                                    v1320 = (SIZE_T)v1334;
                                                    v1313 = 0;
                                                    if ( v316 < 4 )
                                                    {
                                                      v84 = v317;
                                                      v87 = v321;
LABEL_394:
                                                      v82 = -805306306;
                                                      v1320 = (SIZE_T)v319;
                                                      v1313 = -805306306;
                                                      v179 = v320;
                                                      v1328 = v318;
                                                      goto LABEL_331;
                                                    }
                                                    v323 = *(unsigned int *)v1334;
                                                    LODWORD(v1317) = *(_DWORD *)v1334;
                                                    v324 = RtlULongLongAdd(
                                                             (unsigned __int64)v1334,
                                                             4LL,
                                                             (__int64 *)&v1320);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    v324 = RtlUIntAdd(0, 4, &v1313);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    if ( v316 - v1313 < (unsigned int)v323 )
                                                    {
LABEL_398:
                                                      v84 = (unsigned __int16 *)v1318;
                                                      v87 = v1338;
                                                      goto LABEL_394;
                                                    }
                                                    pcchLength = v1320;
                                                    v324 = RtlULongLongAdd(v1320, v323, (__int64 *)&v1320);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    v324 = RtlUIntAdd(v1313, v323, &v1313);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    if ( v316 - v1313 < 4 )
                                                      goto LABEL_398;
                                                    v325 = *(unsigned int *)v1320;
                                                    v324 = RtlULongLongAdd(v1320, 4LL, (__int64 *)&v1320);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    v324 = RtlUIntAdd(v1313, 4, &v1313);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    if ( v316 - v1313 < (unsigned int)v325 )
                                                      goto LABEL_398;
                                                    v1333 = v1320;
                                                    v324 = RtlULongLongAdd(v1320, (unsigned int)v325, (__int64 *)&v1320);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    v324 = RtlUIntAdd(v1313, v325, &v1313);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    if ( v316 - v1313 < 4 )
                                                      goto LABEL_398;
                                                    LODWORD(Src) = *(_DWORD *)v1320;
                                                    v324 = RtlULongLongAdd(v1320, 4LL, (__int64 *)&v1320);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    v324 = RtlUIntAdd(v1313, 4, &v1313);
                                                    if ( v324 < 0 )
                                                      goto LABEL_437;
                                                    if ( v316 - v1313 < (unsigned int)Src )
                                                      goto LABEL_398;
                                                    v324 = RtlUIntAdd(v1313, (int)Src, &v1313);
                                                    if ( v324 < 0 )
                                                    {
LABEL_437:
                                                      v312 = v1324;
                                                      v82 = v324 | 0x10000000;
                                                      v179 = (char *)v1321;
                                                      v84 = (unsigned __int16 *)v1318;
                                                      v311 = (void *)k;
                                                      v87 = v1338;
                                                      v1313 = v82;
                                                      v1320 = (SIZE_T)v1324;
                                                      v1328 = (LPVOID)k;
                                                      if ( v82 < 0 )
                                                        goto LABEL_331;
                                                      v347 = v1332;
                                                      if ( !v1332
                                                        || (v1345 = (void *)*((_QWORD *)v1332 + 1)) == 0LL
                                                        || !*(_DWORD *)v1332 )
                                                      {
                                                        v82 = -805306355;
                                                        v179 = (char *)v1321;
                                                        goto LABEL_378;
                                                      }
                                                      v1322 = (LPVOID)(*(unsigned int *)v1332 - 8LL);
                                                      v355 = MemoryAlloc((SIZE_T)v1322);
                                                      v356 = v1321;
                                                      v357 = 0;
                                                      v1333 = (SIZE_T)v355;
                                                      v179 = (char *)v1321;
                                                      v358 = (void *)k;
                                                      v359 = v84;
                                                      v1328 = (LPVOID)k;
                                                      v1320 = (SIZE_T)v1324;
                                                      if ( !v355 )
                                                        goto LABEL_480;
                                                      v1321 = v1345;
                                                      dwBytes_4 = 0;
                                                      k = (unsigned __int8)v1322 & 7;
                                                      v360 = (size_t)v356;
                                                      v1329 = 0x7F1137FAB69605ELL;
                                                      pcchLength = (size_t)v355;
                                                      v1313 = 0;
                                                      LODWORD(v1317) = 0;
                                                      v1320 = (SIZE_T)v1324;
                                                      v1325 = (__int64)v356;
                                                      v1318 = v87;
                                                      v1328 = v358;
                                                      if ( ((unsigned __int8)v1322 & 7) != 0 )
                                                      {
                                                        LODWORD(v1342) = 0;
                                                        v361 = v1324;
                                                        v1331 = v84;
                                                        if ( (_DWORD)k )
                                                        {
                                                          v362 = 56;
                                                          v363 = v1317;
                                                          v364 = (unsigned __int8 *)v1321;
                                                          v1328 = v358;
                                                          v365 = v87;
                                                          do
                                                          {
                                                            v1318 = v365;
                                                            v87 = v365;
                                                            v366 = *v364;
                                                            v84 = v359;
                                                            v1331 = v359;
                                                            v1325 = (__int64)v356;
                                                            v1320 = (SIZE_T)v1324;
                                                            if ( (unsigned int)v363 >= 4 )
                                                              LODWORD(v1342) = (v366 << v362) | (unsigned int)v1342;
                                                            else
                                                              v1313 |= v366 << (v362 - 32);
                                                            ++v364;
                                                            ++v363;
                                                            v362 -= 8;
                                                            v365 = v87;
                                                          }
                                                          while ( v363 < (int)k );
                                                          v357 = dwBytes_4;
                                                          v355 = (_DWORD *)v1333;
                                                          v1321 = v364;
                                                          v361 = v1324;
                                                          v80 = Ptr;
                                                          v360 = (size_t)v356;
                                                          v1332 = v347;
                                                        }
                                                        v367 = v1313 ^ 0x92F65A5;
                                                        LODWORD(v1338) = 0;
                                                        v368 = (unsigned int)v1342 ^ 0x699A899C;
                                                        v369 = k;
                                                        v370 = v1313 ^ 0x92F65A5;
                                                        if ( (_DWORD)k )
                                                        {
                                                          v371 = (unsigned int)v1342 ^ 0x699A899C;
                                                          v372 = v355;
                                                          do
                                                          {
                                                            if ( (unsigned int)v1338 >= 4 )
                                                            {
                                                              v371 = __ROR4__(v371, 24);
                                                              v373 = v371;
                                                            }
                                                            else
                                                            {
                                                              v370 = __ROR4__(v370, 24);
                                                              v373 = v370;
                                                            }
                                                            LODWORD(v1338) = (_DWORD)v1338 + 1;
                                                            v374 = (size_t)(v372 + 1);
                                                            *v372++ = v373;
                                                          }
                                                          while ( (int)v1338 < (int)v369 );
                                                          v347 = v1332;
                                                          pcchLength = v374;
                                                          v80 = Ptr;
                                                        }
                                                        if ( v369 <= 4 )
                                                        {
                                                          LODWORD(Src) = 0;
                                                          if ( v369 < 4 )
                                                            v367 = v367 >> (8 * (4 - v369)) << (8 * (4 - v369));
                                                        }
                                                        else
                                                        {
                                                          LODWORD(Src) = v368 >> (8 * (8 - v369)) << (8 * (8 - v369));
                                                        }
                                                      }
                                                      else
                                                      {
                                                        LODWORD(Src) = 0;
                                                        v361 = v1324;
                                                        v1331 = v84;
                                                        v367 = v1317;
                                                        LODWORD(v1342) = -1;
                                                      }
                                                      v375 = v1322;
                                                      Size = (unsigned __int64)v1322 >> 3;
                                                      if ( (unsigned __int64)v1322 >> 3 )
                                                      {
                                                        v376 = HIDWORD(v1329);
                                                        v377 = (int)Src;
                                                        v378 = Size;
                                                        v379 = (int)v1342;
                                                        v380 = v1313;
                                                        dwBytes = 24670;
                                                        pcchLength += 7LL;
                                                        v381 = HIDWORD(v1329) ^ 0xAB69605E;
                                                        v382 = WORD2(v1329);
                                                        v383 = (unsigned __int8 *)v1321 + 2;
                                                        LODWORD(v1338) = WORD2(v1329);
                                                        do
                                                        {
                                                          v384 = v383[1] | ((*v383 | ((*(v383 - 1) | (*(v383 - 2) << 8)) << 8)) << 8);
                                                          v385 = v384 ^ v367;
                                                          v386 = v383[5] | ((v383[4] | ((v383[3] | (v383[2] << 8)) << 8)) << 8);
                                                          Size = (size_t)(v383 + 8);
                                                          v387 = v386 ^ v377 ^ v376 ^ v385 ^ 0xAB69605E;
                                                          v388 = v385 ^ (__ROR4__(v387, 22)
                                                                       + v382 * __ROR4__(v387 + 1419157410, 27));
                                                          v389 = v387 ^ (WORD1(v1329) * __ROR4__(v388 + v376, 9)
                                                                       - __ROR4__(v388, 30));
                                                          v390 = v388 ^ (dwBytes * (v389 - (_DWORD)v1338) - (v389 >> 13));
                                                          v391 = v389 ^ (HIWORD(v1329)
                                                                       * __ROR4__(v390 ^ WORD1(v1329), 26)
                                                                       - __ROR4__(v390, 30));
                                                          v392 = v390 ^ (v376 - (v391 ^ 0xAB69605E));
                                                          v393 = v391 ^ (WORD1(v1329) * ((unsigned int)v1338 ^ v392)) ^ __ROR4__(v392, 6);
                                                          v394 = v392 ^ (__ROR4__(v393, 30)
                                                                       + dwBytes * __ROR4__(v393 + v376, 15));
                                                          v395 = v393 ^ (HIWORD(v1329) * __ROR4__(v394 + 1419157410, 14)
                                                                       - __ROR4__(v394, 24));
                                                          v396 = v394 ^ __ROR4__(v395, 10) ^ ((_DWORD)v1338
                                                                                            * __ROR4__(
                                                                                                v395 ^ 0xAB69605E,
                                                                                                12));
                                                          v397 = v395 ^ (v396 >> 10) ^ (WORD1(v1329)
                                                                                      * (v396 ^ HIWORD(v1329)));
                                                          v398 = v396 ^ (HIWORD(v1329) * (dwBytes + __ROR4__(~v397, 5)));
                                                          v399 = v397 ^ (v398 - HIWORD(v1329)) ^ 0xAB69605E;
                                                          v400 = v398 ^ ((v399 >> 2)
                                                                       + (_DWORD)v1338
                                                                       * __ROR4__(v399 ^ HIWORD(v1329), 30));
                                                          v401 = v399 ^ (__ROR4__(v400, 25)
                                                                       + WORD1(v1329) * __ROR4__(v400 - v376, 6));
                                                          v402 = v400 ^ (dwBytes * ((unsigned int)v1338 ^ v401)
                                                                       + __ROR4__(v401, 9));
                                                          v403 = v401 ^ (__ROR4__(v402, 25)
                                                                       + HIWORD(v1329)
                                                                       * __ROR4__(WORD1(v1329) ^ v402, 27));
                                                          v404 = v402 ^ v403 ^ v381;
                                                          v405 = v403 ^ ((_DWORD)v1338
                                                                       * (__ROR4__(v404, 3) - WORD1(v1329)));
                                                          v406 = v404 ^ (dwBytes * __ROR4__(v405 - v376, 1)
                                                                       - __ROR4__(v405, 6));
                                                          v407 = v405 ^ (__ROR4__(v406, 18)
                                                                       + HIWORD(v1329) * __ROR4__(v406 - 1419157410, 29));
                                                          v408 = v406 ^ ((_DWORD)v1338 * __ROR4__(v407 - 1419157410, 17)
                                                                       - __ROR4__(v407, 14));
                                                          v409 = v407 ^ (v408 >> 3) ^ (WORD1(v1329) * (dwBytes ^ v408));
                                                          v410 = (_BYTE *)pcchLength;
                                                          v411 = __ROR4__(v409, 30);
                                                          v412 = v376 ^ v409;
                                                          v377 = v379 ^ v409;
                                                          v379 = v386;
                                                          v413 = v408 ^ v411 ^ (dwBytes * __ROR4__(v412, 28));
                                                          v382 = (int)v1338;
                                                          v367 = v380 ^ v413;
                                                          v380 = v384;
                                                          *(_BYTE *)(pcchLength - 4) = v367;
                                                          *v410 = v377;
                                                          *(v410 - 5) = __ROR4__(v367, 8);
                                                          *(v410 - 1) = __ROR4__(v377, 8);
                                                          *(v410 - 6) = __ROR4__(v367, 16);
                                                          *(v410 - 2) = __ROR4__(v377, 16);
                                                          *(v410 - 7) = __ROR4__(v367, 24);
                                                          *(v410 - 3) = __ROR4__(v377, 24);
                                                          pcchLength = (size_t)(v410 + 8);
                                                          v383 = (unsigned __int8 *)Size;
                                                          --v378;
                                                        }
                                                        while ( v378 );
                                                        v357 = dwBytes_4;
                                                        v87 = v1318;
                                                        v84 = v1331;
                                                        v80 = Ptr;
                                                        v361 = (void *)v1320;
                                                        v360 = v1325;
                                                        v347 = v1332;
                                                        v355 = (_DWORD *)v1333;
                                                        v375 = v1322;
                                                      }
                                                      v414 = 0LL;
                                                      if ( v375 )
                                                      {
                                                        do
                                                          v357 ^= *((_BYTE *)v355 + v414++);
                                                        while ( v414 < (unsigned __int64)v375 );
                                                      }
                                                      v1318 = v1334;
                                                      v1321 = v347;
                                                      v1332 = v347;
                                                      if ( v357 != *(_QWORD *)((char *)v1345 + (_QWORD)v375) )
                                                      {
                                                        MemoryFree(v355);
                                                        v179 = (char *)v1325;
LABEL_480:
                                                        v82 = -805306367;
                                                        v1313 = -805306367;
                                                        v1341 = 0LL;
                                                        goto LABEL_331;
                                                      }
                                                      v1345 = v361;
                                                      v415 = (SIZE_T)v361;
                                                      v416 = (char *)v360;
                                                      Size = v360;
                                                      dwBytes = 0;
                                                      k = (size_t)v355;
                                                      if ( (unsigned int)v1322 < 4 )
                                                      {
                                                        v1332 = v347;
LABEL_525:
                                                        v179 = v416;
                                                        goto LABEL_526;
                                                      }
                                                      LODWORD(v1329) = *v355;
                                                      v417 = RtlULongLongAdd((unsigned __int64)v355, 4LL, (__int64 *)&k);
                                                      v1341 = v418;
                                                      v179 = v419;
                                                      v1332 = v1321;
                                                      v1334 = v1318;
                                                      v1320 = v420;
                                                      if ( v417 < 0 )
                                                        goto LABEL_528;
                                                      v417 = RtlUIntAdd(0, 4, (int *)&dwBytes);
                                                      v1334 = v1318;
                                                      v1341 = v355;
                                                      v1332 = v1321;
                                                      v1320 = v415;
                                                      if ( v417 < 0 )
                                                        goto LABEL_528;
                                                      if ( (unsigned int)v1322 - dwBytes < 4 )
                                                      {
                                                        v1332 = v1321;
LABEL_526:
                                                        v1334 = v1318;
                                                        v1320 = v415;
                                                        v1341 = v355;
LABEL_527:
                                                        v417 = -1073741762;
                                                        goto LABEL_528;
                                                      }
                                                      LODWORD(Ptr) = *(_DWORD *)k;
                                                      v417 = RtlULongLongAdd(k, 4LL, (__int64 *)&k);
                                                      v1341 = v421;
                                                      v1332 = v1321;
                                                      v1334 = v1318;
                                                      v1320 = v422;
                                                      if ( v417 < 0 )
                                                        goto LABEL_528;
                                                      v417 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                                                      v1334 = v1318;
                                                      v1341 = v355;
                                                      v1332 = v1321;
                                                      v1320 = v415;
                                                      if ( v417 < 0 )
                                                        goto LABEL_528;
                                                      if ( (unsigned int)v1322 - dwBytes < (unsigned int)Ptr )
                                                      {
                                                        v1332 = v1321;
                                                        goto LABEL_525;
                                                      }
                                                      v417 = RtlUIntAdd(dwBytes, Ptr, (int *)&dwBytes);
                                                      v1341 = v355;
                                                      v179 = v416;
                                                      v1332 = v1321;
                                                      v1334 = v1318;
                                                      v1320 = v415;
                                                      if ( v417 >= 0 )
                                                      {
                                                        if ( (unsigned __int64)v355 + (unsigned int)v1322 < (unsigned int)Ptr + k
                                                          || (unsigned __int64)v355
                                                           + (unsigned int)v1322
                                                           - (unsigned int)Ptr
                                                           - k >= 8 )
                                                        {
                                                          v1332 = v1321;
                                                          goto LABEL_525;
                                                        }
                                                        v423 = v1318;
                                                        v1342 = 0LL;
                                                        v417 = 0;
                                                        v1322 = 0LL;
                                                        pcchLength = 0LL;
                                                        v1333 = 0LL;
                                                        LODWORD(Src) = 0;
                                                        v1325 = (__int64)v416;
                                                        v1332 = v1321;
                                                        v1341 = v355;
                                                        v1334 = v1318;
                                                        v1320 = v415;
                                                        if ( !k )
                                                          goto LABEL_511;
                                                        v1324 = (LPVOID)k;
                                                        v417 = RtlULongLongAdd(k, (unsigned int)Ptr, (__int64 *)&v1322);
                                                        v1334 = v423;
                                                        v179 = (char *)Size;
                                                        v1341 = v424;
                                                        v1332 = v1321;
                                                        v1320 = v425;
                                                        if ( v417 >= 0 )
                                                        {
                                                          v426 = (unsigned __int64)v1324;
                                                          v1334 = v1318;
                                                          v1341 = v424;
                                                          v1332 = v1321;
                                                          v1320 = v425;
                                                          v1325 = Size;
                                                          if ( v1324 < v1322 )
                                                          {
                                                            v427 = (void *)Size;
                                                            v428 = v1345;
                                                            v1341 = v424;
                                                            v1334 = v1318;
                                                            v1320 = (SIZE_T)v1345;
                                                            v1332 = v1321;
                                                            v1325 = Size;
                                                            while ( 1 )
                                                            {
                                                              v1318 = v427;
                                                              v1321 = v1341;
                                                              v1324 = v428;
                                                              v417 = RtlULongLongAdd(v426, 4LL, (__int64 *)&pcchLength);
                                                              v430 = 0;
                                                              if ( v417 < 0 )
                                                                break;
                                                              if ( pcchLength > (unsigned __int64)v1322 )
                                                              {
                                                                v417 = -1073741811;
                                                                goto LABEL_507;
                                                              }
                                                              v431 = *v429;
                                                              LODWORD(v1317) = 0;
                                                              v417 = RtlUIntAdd(4u, v431, (int *)&v1317);
                                                              if ( v417 < 0 )
                                                                goto LABEL_507;
                                                              v417 = RtlULongLongAdd(
                                                                       v432,
                                                                       (unsigned int)v1317,
                                                                       (__int64 *)&v1333);
                                                              v1320 = (SIZE_T)v428;
                                                              v1341 = v1321;
                                                              v427 = v1318;
                                                              v1332 = v433;
                                                              v179 = (char *)v1318;
                                                              v1334 = v434;
                                                              if ( v417 < 0 )
                                                              {
                                                                v430 = 0;
                                                                goto LABEL_521;
                                                              }
                                                              v426 = v1333;
                                                              v435 = v1322;
                                                              v1332 = v433;
                                                              v1334 = v434;
                                                              if ( v1333 > (unsigned __int64)v1322 )
                                                              {
                                                                v417 = -1073741811;
                                                                v1341 = v1321;
                                                                v1320 = (SIZE_T)v1324;
                                                                goto LABEL_528;
                                                              }
                                                              LODWORD(Src) = (_DWORD)Src + 1;
                                                              v1341 = v1321;
                                                              v428 = v1324;
                                                              v1320 = (SIZE_T)v1324;
                                                              v1325 = (__int64)v1318;
                                                              if ( v1333 >= (unsigned __int64)v1322 )
                                                              {
                                                                v1320 = (SIZE_T)v1324;
                                                                v179 = (char *)v1318;
                                                                v1325 = (__int64)v1318;
                                                                v1341 = v1321;
                                                                v1332 = v433;
                                                                v1334 = v434;
                                                                goto LABEL_509;
                                                              }
                                                            }
LABEL_519:
                                                            v179 = (char *)v1325;
LABEL_521:
                                                            if ( v417 < 0 || (_DWORD)v1329 == v430 )
                                                              goto LABEL_528;
                                                            goto LABEL_527;
                                                          }
                                                          v435 = v1322;
LABEL_509:
                                                          if ( (LPVOID)v426 != v435 )
                                                          {
                                                            v417 = -1073741811;
                                                            goto LABEL_528;
                                                          }
LABEL_511:
                                                          v436 = Ptr;
                                                          if ( (_DWORD)Ptr )
                                                          {
                                                            v437 = Ptr;
                                                            v438 = GetProcessHeap();
                                                            v439 = HeapAlloc(v438, 8u, v437);
                                                            if ( !v439 )
                                                            {
                                                              v1337 = 0LL;
                                                              v417 = -1073741801;
                                                              v1326 = 0;
LABEL_507:
                                                              v179 = (char *)v1325;
                                                              goto LABEL_528;
                                                            }
                                                            v436 = Ptr;
                                                            v417 = 0;
                                                          }
                                                          else
                                                          {
                                                            v439 = v1342;
                                                          }
                                                          if ( k )
                                                            memcpy_0(v439, (const void *)k, v436);
                                                          v430 = (int)Src;
                                                          v1326 = (unsigned int)Src;
                                                          v1337 = v439;
                                                          goto LABEL_519;
                                                        }
                                                      }
LABEL_528:
                                                      v82 = v417 | 0x10000000;
                                                      v1313 = v82;
                                                      goto LABEL_331;
                                                    }
                                                    if ( v316 != v1313
                                                      || (unsigned int)(v1317 + v325 + (_DWORD)Src) + 12LL != v316 )
                                                    {
                                                      goto LABEL_398;
                                                    }
                                                    v326 = GetProcessHeap();
                                                    v327 = HeapAlloc(v326, 8u, 0x30uLL);
                                                    v328 = v327;
                                                    if ( v327 )
                                                    {
                                                      v324 = 0;
                                                      if ( pcchLength )
                                                      {
                                                        v329 = (unsigned int)v1317;
                                                        *(_DWORD *)v328 = v1317;
                                                        v330 = v329;
                                                        Size = v329;
                                                        v331 = GetProcessHeap();
                                                        v332 = HeapAlloc(v331, 8u, v330);
                                                        if ( !v332 )
                                                          goto LABEL_425;
                                                        v328[1] = v332;
                                                        v324 = 0;
                                                        memcpy_0(v332, (const void *)pcchLength, Size);
                                                      }
                                                      else
                                                      {
                                                        *v327 = 0;
                                                        *((_QWORD *)v327 + 1) = 0LL;
                                                      }
                                                      if ( !v1333 )
                                                      {
                                                        *((_DWORD *)v328 + 4) = 0;
                                                        v328[3] = 0LL;
LABEL_423:
                                                        v335 = (const void *)v1320;
                                                        if ( v1320 )
                                                        {
                                                          v336 = (unsigned int)Src;
                                                          *((_DWORD *)v328 + 8) = (_DWORD)Src;
                                                          v337 = v336;
                                                          Size = v336;
                                                          v338 = GetProcessHeap();
                                                          v339 = HeapAlloc(v338, 8u, v337);
                                                          if ( !v339 )
                                                            goto LABEL_425;
                                                          v328[5] = v339;
                                                          v324 = 0;
                                                          memcpy_0(v339, v335, Size);
                                                        }
                                                        else
                                                        {
                                                          *((_DWORD *)v328 + 8) = 0;
                                                          v328[5] = 0LL;
                                                        }
                                                        v322 = v328;
LABEL_435:
                                                        if ( v324 < 0 )
                                                        {
                                                          v1332 = 0LL;
                                                          if ( v322 )
                                                          {
                                                            v348 = (void *)v322[1];
                                                            if ( v348 )
                                                            {
                                                              v349 = GetProcessHeap();
                                                              HeapFree(v349, 0, v348);
                                                              v322[1] = 0LL;
                                                            }
                                                            v350 = (void *)v322[3];
                                                            if ( v350 )
                                                            {
                                                              v351 = GetProcessHeap();
                                                              HeapFree(v351, 0, v350);
                                                              v322[3] = 0LL;
                                                            }
                                                            v352 = (void *)v322[5];
                                                            if ( v352 )
                                                            {
                                                              v353 = GetProcessHeap();
                                                              HeapFree(v353, 0, v352);
                                                              v322[5] = 0LL;
                                                            }
                                                            v354 = GetProcessHeap();
                                                            HeapFree(v354, 0, v322);
                                                            v1332 = 0LL;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v1332 = v322;
                                                        }
                                                        goto LABEL_437;
                                                      }
                                                      *((_DWORD *)v328 + 4) = v325;
                                                      v333 = GetProcessHeap();
                                                      v334 = HeapAlloc(v333, 8u, v325);
                                                      if ( v334 )
                                                      {
                                                        v328[3] = v334;
                                                        v324 = 0;
                                                        memcpy_0(v334, (const void *)v1333, v325);
                                                        goto LABEL_423;
                                                      }
LABEL_425:
                                                      v324 = -1073741801;
                                                      v340 = (void *)v328[1];
                                                      if ( v340 )
                                                      {
                                                        v341 = GetProcessHeap();
                                                        HeapFree(v341, 0, v340);
                                                        v328[1] = 0LL;
                                                      }
                                                      v342 = (void *)v328[3];
                                                      if ( v342 )
                                                      {
                                                        v343 = GetProcessHeap();
                                                        HeapFree(v343, 0, v342);
                                                        v328[3] = 0LL;
                                                      }
                                                      v344 = (void *)v328[5];
                                                      if ( v344 )
                                                      {
                                                        v345 = GetProcessHeap();
                                                        HeapFree(v345, 0, v344);
                                                        v328[5] = 0LL;
                                                      }
                                                      v346 = GetProcessHeap();
                                                      HeapFree(v346, 0, v328);
                                                      goto LABEL_435;
                                                    }
                                                    v84 = (unsigned __int16 *)v1318;
                                                    v82 = -805306345;
                                                    v1332 = 0LL;
LABEL_386:
                                                    v179 = (char *)v1321;
                                                    v87 = v1338;
                                                    v1320 = (SIZE_T)v1324;
                                                    v1328 = (LPVOID)k;
                                                    v1313 = v82;
                                                    goto LABEL_331;
                                                  }
                                                  v82 = -1073741811;
                                                  v1313 = -1073741811;
                                                }
                                                v179 = (char *)k;
                                                v87 = v281;
                                                goto LABEL_331;
                                              }
                                            }
                                          }
                                          v253 = -1073741801;
                                          Size = v247[1];
                                          if ( Size )
                                          {
                                            v256 = GetProcessHeap();
                                            HeapFree(v256, 0, (LPVOID)Size);
                                            v247[1] = 0LL;
                                          }
                                          Size = v247[3];
                                          if ( Size )
                                          {
                                            v257 = GetProcessHeap();
                                            HeapFree(v257, 0, (LPVOID)Size);
                                            v247[3] = 0LL;
                                          }
                                          Size = v247[5];
                                          if ( Size )
                                          {
                                            v258 = GetProcessHeap();
                                            HeapFree(v258, 0, (LPVOID)Size);
                                            v247[5] = 0LL;
                                          }
                                          v259 = GetProcessHeap();
                                          HeapFree(v259, 0, v247);
                                        }
                                        else
                                        {
                                          v253 = -1073741801;
                                        }
                                        v247 = (size_t *)v1320;
                                        goto LABEL_288;
                                      }
LABEL_233:
                                      v93 = v80;
                                      goto LABEL_108;
                                    }
                                  }
                                }
                              }
LABEL_584:
                              v93 = v80;
                              goto LABEL_108;
                            }
LABEL_132:
                            v82 = -1073741789;
LABEL_133:
                            v1313 = v82;
                            goto LABEL_134;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_108:
  v101 = lpMem[1];
  lpMem[0] = 0LL;
  if ( lpMem[1] )
  {
    v102 = GetProcessHeap();
    HeapFree(v102, 0, v101);
    lpMem[1] = 0LL;
  }
  v103 = v1337;
  if ( v1337 )
  {
    v104 = GetProcessHeap();
    HeapFree(v104, 0, v103);
  }
  if ( v87 )
  {
    v105 = GetProcessHeap();
    HeapFree(v105, 0, v87);
  }
  if ( v84 )
  {
    v106 = GetProcessHeap();
    HeapFree(v106, 0, v84);
  }
  if ( v82 >= 0 )
  {
    if ( !v93 )
    {
LABEL_1552:
      v83 = v1367;
      v1371 = v1366;
      v1366 = 0LL;
      goto LABEL_1554;
    }
    dword_1808DA538 = v93;
    v1343 = 0LL;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    v108 = 0LL;
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    {
LABEL_1193:
      SH<void *,SH_HANDLE>::Reset(&v1343);
      LODWORD(v1342) = 0;
      *(_OWORD *)v1346 = 0LL;
      v961 = 0LL;
      v1331 = 0LL;
      v962 = GetProcessHeap();
      v963 = HeapAlloc(v962, 8u, 0xA0uLL);
      if ( !v963 )
      {
        v984 = 0LL;
        goto LABEL_1208;
      }
      *v963 = xmmword_1808D8540[0];
      v963[1] = xmmword_1808D8540[1];
      v963[2] = xmmword_1808D8540[2];
      v963[3] = xmmword_1808D8540[3];
      v963[4] = xmmword_1808D8540[4];
      v963[5] = xmmword_1808D8540[5];
      v963[6] = xmmword_1808D8540[6];
      v963[7] = xmmword_1808D8540[7];
      v963[8] = xmmword_1808D8540[8];
      v963[9] = xmmword_1808D8540[9];
      v964 = GetProcessHeap();
      v965 = HeapAlloc(v964, 8u, 8uLL);
      if ( !v965 )
      {
        v108 = v963;
        v984 = 0LL;
        goto LABEL_1208;
      }
      *v965 = qword_1808D8690;
      lpModuleName = (LPCWSTR)__rdtsc();
      dwBytes = 0;
      LODWORD(v1319) = 0;
      v966 = RtlUIntAdd(4u, 4, (int *)&v1319);
      v961 = v967;
      v108 = v963;
      if ( v966 < 0 )
        goto LABEL_1207;
      if ( (int)RtlUIntAdd(0, (int)v1319, (int *)&dwBytes) < 0 )
        goto LABEL_1207;
      LODWORD(v1319) = v968;
      if ( (int)RtlUIntAdd(4u, 160, (int *)&v1319) < 0 )
        goto LABEL_1207;
      v969 = RtlUIntAdd(dwBytes, (int)v1319, (int *)&dwBytes);
      if ( (v971 | v969) < 0 )
        goto LABEL_1207;
      LODWORD(v1319) = v970;
      if ( (int)RtlUIntAdd(4u, 8, (int *)&v1319) < 0 )
        goto LABEL_1207;
      v972 = RtlUIntAdd(dwBytes, (int)v1319, (int *)&dwBytes);
      if ( (v974 | v972) < 0 )
        goto LABEL_1207;
      LODWORD(v1319) = v973;
      if ( (int)RtlUIntAdd(4u, 8, (int *)&v1319) < 0 )
        goto LABEL_1207;
      v975 = RtlUIntAdd(dwBytes, (int)v1319, (int *)&dwBytes);
      if ( (v976 | v975) < 0 )
        goto LABEL_1207;
      HIDWORD(v1346[0]) = dwBytes;
      v977 = dwBytes;
      v978 = GetProcessHeap();
      v979 = HeapAlloc(v978, 8u, v977);
      if ( !v979 )
        goto LABEL_1207;
      v1346[1] = (size_t)v979;
      LODWORD(v1344) = 0;
      v1343 = 0LL;
      LODWORD(v1346[0]) = 0;
      pcchLength = (size_t)v979;
      v1318 = v961;
      v1337 = v963;
      if ( (int)RtlULongLongAdd((unsigned __int64)v979, 4LL, (__int64 *)&v1344) < 0 )
        goto LABEL_1207;
      if ( v981 + 2 > (_DWORD *)((char *)v981 + HIDWORD(v1346[0])) )
        goto LABEL_1207;
      v982 = v1344;
      *v981 = 4;
      *v982 = 4;
      v983 = ++LODWORD(v1346[0]);
      LODWORD(v1336) = 0;
      Size = 0LL;
      if ( !v980 )
        goto LABEL_1207;
      if ( v1346[1] )
      {
        v991 = (int *)v1346[1];
        v992 = 0;
        pcchLength = v1346[1];
        if ( v983 )
        {
          do
          {
            v993 = *v991;
            LODWORD(v1319) = 0;
            if ( (int)RtlUIntAdd(4u, v993, (int *)&v1319) < 0
              || (int)RtlULongLongAdd(v994, (unsigned int)v1319, (__int64 *)&pcchLength) < 0 )
            {
              goto LABEL_1207;
            }
            v991 = (int *)pcchLength;
            v1318 = v961;
            ++v992;
            v1337 = v108;
          }
          while ( v992 < v995 );
        }
        if ( (int)RtlULongLongAdd((unsigned __int64)v991, 4LL, (__int64 *)&v1336) < 0
          || (unsigned __int64)v996 + v997 + 4 > v1346[1] + HIDWORD(v1346[0]) )
        {
          goto LABEL_1207;
        }
        *v996 = v997;
        memcpy_0(v1336, v108, v997);
        v990 = 0LL;
      }
      else
      {
        LODWORD(v1319) = 0;
        if ( (int)RtlUIntAdd(4u, v980, (int *)&v1319) < 0
          || (int)RtlUIntAdd(HIDWORD(v1346[0]), (int)v1319, (int *)v1346 + 1) < 0 )
        {
          goto LABEL_1207;
        }
      }
      v998 = LODWORD(v1346[0]) + 1;
      LODWORD(v1354) = 0;
      ++LODWORD(v1346[0]);
      v1353 = 0LL;
      if ( !v961 )
        goto LABEL_1207;
      if ( v1346[1] == v990 )
      {
        LODWORD(v1319) = v990;
        if ( (int)RtlUIntAdd(4u, 8, (int *)&v1319) < 0
          || (int)RtlUIntAdd(HIDWORD(v1346[0]), (int)v1319, (int *)v1346 + 1) < 0 )
        {
          goto LABEL_1207;
        }
      }
      else
      {
        v1000 = (int *)v1346[1];
        pcchLength = v1346[1];
        if ( v998 )
        {
          do
          {
            v1001 = *v1000;
            LODWORD(v1319) = 0;
            if ( (int)RtlUIntAdd(4u, v1001, (int *)&v1319) < 0
              || (int)RtlULongLongAdd(v1002, (unsigned int)v1319, (__int64 *)&pcchLength) < 0 )
            {
              goto LABEL_1207;
            }
            v1000 = (int *)pcchLength;
            v1337 = v108;
            v1318 = v961;
          }
          while ( v1004 + 1 < v1003 );
        }
        if ( (int)RtlULongLongAdd((unsigned __int64)v1000, 4LL, (__int64 *)&v1354) < 0
          || (unsigned __int64)(v1005 + 3) > v1346[1] + HIDWORD(v1346[0]) )
        {
          goto LABEL_1207;
        }
        *v1005 = 8;
        memcpy_0(v1354, v961, 8uLL);
        v999 = 0LL;
      }
      v1006 = LODWORD(v1346[0]) + 1;
      LODWORD(v1344) = 0;
      ++LODWORD(v1346[0]);
      v1343 = 0LL;
      if ( v1346[1] == v999 )
      {
        LODWORD(v1319) = v999;
        if ( (int)RtlUIntAdd(4u, 8, (int *)&v1319) < 0
          || (int)RtlUIntAdd(HIDWORD(v1346[0]), (int)v1319, (int *)v1346 + 1) < 0 )
        {
          goto LABEL_1207;
        }
        ++LODWORD(v1346[0]);
        goto LABEL_1251;
      }
      v1008 = (int *)v1346[1];
      pcchLength = v1346[1];
      if ( v1006 )
      {
        do
        {
          v1009 = *v1008;
          LODWORD(v1319) = 0;
          if ( (int)RtlUIntAdd(4u, v1009, (int *)&v1319) < 0
            || (int)RtlULongLongAdd(v1010, (unsigned int)v1319, (__int64 *)&pcchLength) < 0 )
          {
            goto LABEL_1207;
          }
          v1008 = (int *)pcchLength;
          v1318 = v961;
          v1337 = v108;
        }
        while ( v1012 + 1 < v1011 );
      }
      if ( (int)RtlULongLongAdd((unsigned __int64)v1008, 4LL, (__int64 *)&v1344) >= 0
        && (unsigned __int64)(v1013 + 3) <= v1346[1] + HIDWORD(v1346[0]) )
      {
        v1014 = v1344;
        v1015 = lpModuleName;
        *v1013 = 8;
        *v1014 = v1015;
        ++LODWORD(v1346[0]);
        v1007 = 0;
LABEL_1251:
        LODWORD(v1319) = v1007;
        if ( (int)RtlUIntAdd(4u, 4, (int *)&v1319) >= 0 )
        {
          LODWORD(v1317) = (_DWORD)v1319;
          LODWORD(v1319) = v1017;
          if ( (int)RtlUIntAdd(v1016, v1016 + 4, (int *)&v1319) >= 0
            && (int)RtlUIntAdd(v1018, (int)v1319, (int *)&v1317) >= 0 )
          {
            LODWORD(v1329) = v1317;
            v1020 = v1019;
            LODWORD(v1317) = (_DWORD)v1019;
            v1341 = v1019;
            k = (size_t)v1019;
            Src = v1019;
            v1332 = v1019;
            v1322 = v1019;
            v1334 = v1019;
            v1343 = (LPVOID)__rdtsc();
            v1352 = 8;
            v1021 = RtlUIntAdd(8u, SHIDWORD(v1346[0]), (int *)&v1352);
            if ( v1021 < 0 )
              goto LABEL_1261;
            v1024 = (v1352 + 7) & 0xFFFFFFF8;
            if ( v1024 >= v1352 )
            {
              v1352 = (v1352 + 7) & 0xFFFFFFF8;
              v1025 = v1024;
              v1026 = GetProcessHeap();
              v1027 = (WCHAR *)HeapAlloc(v1026, 8u, v1025);
              v1353 = v1027;
              if ( !v1027 )
              {
                v1034 = -805306345;
                goto LABEL_1535;
              }
              *(_DWORD *)v1027 = v1346[0];
              v1321 = v1027;
              v1028 = RtlULongLongAdd((unsigned __int64)v1027, 4LL, (__int64 *)&v1321);
              Size = v1030;
              v1021 = v1028;
              if ( v1028 < 0
                || (v1031 = v1321,
                    *(_DWORD *)v1321 = HIDWORD(v1346[0]),
                    v1032 = RtlULongLongAdd((unsigned __int64)v1031, v1029, (__int64 *)&v1321),
                    Size = v1033,
                    v1021 = v1032,
                    v1032 < 0) )
              {
                v1049 = GetProcessHeap();
                HeapFree(v1049, 0, (LPVOID)Size);
                v1022 = (unsigned int)v1020;
              }
              else
              {
                *(_QWORD *)(v1352 + v1033 - 8) = v1343;
                memcpy_0(v1321, (const void *)v1346[1], HIDWORD(v1346[0]));
                v1022 = v1352;
                v1341 = (LPVOID)v1353;
              }
              v1023 = 0LL;
LABEL_1261:
              v1034 = v1021 | 0x10000000;
              if ( v1034 < 0 )
              {
                v1115 = v1341;
                goto LABEL_1511;
              }
              v1035 = (unsigned __int8 *)v1341;
              v1324 = v1023;
              if ( v1341 )
              {
                pcchLength = v1022;
                if ( !v1022 || (v1333 = v1022 + 8LL, Size = (size_t)MemoryAlloc(v1333), (v1036 = Size) == 0) )
                {
                  v1115 = v1341;
                  v1034 = -805306367;
                  goto LABEL_1512;
                }
                v1037 = 0;
                v1038 = 0LL;
                v1039 = pcchLength;
                dwBytes_4 = 0;
                if ( pcchLength )
                {
                  do
                    v1037 ^= v1035[v1038++];
                  while ( v1038 < pcchLength );
                  dwBytes_4 = v1037;
                }
                v1328 = (LPVOID)0xC81ECB17B1B54A58LL;
                v1040 = 0;
                LODWORD(Ptr) = 0;
                v1326 = 0;
                v1041 = -1;
                v1321 = (LPVOID)Size;
                v1042 = v1035;
                v1043 = pcchLength & 7;
                if ( (pcchLength & 7) == 0 )
                  goto LABEL_1289;
                LODWORD(Ptr) = 0;
                v1044 = 0;
                LODWORD(v1319) = 0;
                v1326 = 0;
                v1045 = 56;
                v1046 = 0;
                v1047 = 0;
                do
                {
                  v1048 = *v1042;
                  if ( v1044 >= 4 )
                    v1046 |= v1048 << v1045;
                  else
                    v1047 |= v1048 << (v1045 - 32);
                  ++v1042;
                  v1044 = (_DWORD)v1319 + 1;
                  v1045 -= 8;
                  LODWORD(v1319) = v1044;
                }
                while ( (int)v1044 < (int)v1043 );
                v1039 = pcchLength;
                v1326 = v1047;
                LODWORD(Ptr) = v1046;
                v1341 = v1035;
                v1318 = v961;
                v1337 = v108;
                v1040 = v1047 ^ 0xB17A307A;
                v1050 = v1046 ^ 0x42F6B18D;
                LODWORD(v1320) = 0;
                v1051 = v1047 ^ 0xB17A307A;
                v1052 = v1046 ^ 0x42F6B18D;
                if ( (pcchLength & 7) != 0 )
                {
                  v1053 = v1321;
                  v1054 = v1320;
                  do
                  {
                    if ( v1054 >= 4 )
                    {
                      v1052 = __ROR4__(v1052, 24);
                      v1055 = v1052;
                    }
                    else
                    {
                      v1051 = __ROR4__(v1051, 24);
                      v1055 = v1051;
                    }
                    ++v1054;
                    *v1053 = v1055;
                    v1056 = ++v1053;
                  }
                  while ( (int)v1054 < (int)v1043 );
                  v1020 = (_QWORD *)k;
                  v1036 = (size_t)v1056;
                  v1321 = v1056;
                  v1037 = dwBytes_4;
                }
                else
                {
                  v1036 = (size_t)v1321;
                }
                if ( v1043 <= 4 )
                {
                  v1041 = 0;
                  if ( v1043 >= 4 )
                  {
LABEL_1289:
                    v1057 = v1039 >> 3;
                    if ( v1039 >> 3 )
                    {
                      v1058 = (_BYTE *)(v1036 + 7);
                      v1059 = WORD2(v1328);
                      v1060 = v1042 + 2;
                      v1061 = Ptr;
                      v1062 = v1326;
                      LODWORD(v1320) = WORD1(v1328);
                      LODWORD(v1325) = HIDWORD(v1328) ^ 0xB1B54A58;
                      v1063 = v1057;
                      do
                      {
                        v1064 = v1060[1] | ((*v1060 | ((*(v1060 - 1) | (*(v1060 - 2) << 8)) << 8)) << 8);
                        v1065 = v1060[5] | ((v1060[4] | ((v1060[3] | (v1060[2] << 8)) << 8)) << 8);
                        v1343 = v1060 + 8;
                        v1066 = v1041 ^ v1065;
                        v1067 = v1040 ^ v1064 ^ HIDWORD(v1328) ^ ((v1041 ^ v1065) - 19032);
                        v1068 = v1066 ^ (__ROR4__(v1067, 7) + WORD1(v1328) * __ROR4__(v1067 ^ HIDWORD(v1328), 15));
                        v1069 = v1067 ^ (v1059 * __ROR4__(v1068 - 1313519016, 9) - __ROR4__(v1068, 10));
                        v1070 = v1068 ^ (__ROR4__(v1069, 27) + HIWORD(v1328) * __ROR4__(v1069 ^ v1059, 28));
                        v1071 = v1069 ^ (HIDWORD(v1328) - (v1070 ^ 0xB1B54A58));
                        v1072 = v1070 ^ (WORD1(v1328) * (v1071 - 19032) - (v1071 >> 6));
                        v1073 = v1071 ^ (19032 * (v1059 ^ __ROR4__(v1072, 15)));
                        v1074 = v1072 ^ (v1059 * (HIWORD(v1328) + __ROR4__(~v1073, 3)));
                        v1075 = v1073 ^ (v1074 - HIDWORD(v1328) - 19032);
                        v1076 = v1074 ^ (v1320 * (v1075 ^ HIWORD(v1328))) ^ __ROR4__(v1075, 10);
                        v1077 = v1075 ^ __ROR4__(v1076, 3) ^ (v1059 * __ROR4__(v1076 ^ 0x4A58, 26));
                        v1078 = v1076 ^ (19032 * (__ROR4__(v1077, 15) - HIWORD(v1328)));
                        v1079 = v1077 ^ ((v1078 ^ (v1078 >> 14)) >> 1) ^ (19032 * (HIWORD(v1328) ^ v1078)) ^ (19032 * ((8 * (v1078 - v1059)) | ((v1078 - v1059) >> 29)));
                        v1080 = v1078 ^ (WORD1(v1328) * (v1079 - v1059) - (v1079 >> 13));
                        v1081 = v1079 ^ __ROR4__(v1080, 11) ^ (v1059 * __ROR4__(-1313519016 - v1080, 9));
                        v1082 = v1080 ^ (v1081 + 1313519016 - HIWORD(v1328));
                        v1083 = v1081 ^ (19032 * (v1082 ^ WORD1(v1328)) - __ROR4__(v1082, 7));
                        v1084 = v1082 ^ (WORD1(v1328) * __ROR4__(HIWORD(v1328) ^ v1083, 28) - __ROR4__(v1083, 16));
                        v1085 = v1083 ^ (__ROR4__(v1084, 4) + v1059 * __ROR4__(-1313519016 - v1084, 10));
                        v1086 = v1084 ^ __ROR4__(v1085, 9) ^ (HIWORD(v1328) * __ROR4__(v1085 + 1313519016, 4));
                        v1087 = v1085 ^ (19032 * __ROR4__(v1086 ^ HIDWORD(v1328), 24) - __ROR4__(v1086, 30));
                        v1088 = v1086 ^ (WORD1(v1328) * __ROR4__(HIDWORD(v1328) - v1087, 11) - __ROR4__(v1087, 12));
                        v1060 = (unsigned __int8 *)v1343;
                        v1089 = v1087 ^ (v1088 >> 8) ^ (v1059 * (WORD1(v1328) ^ v1088));
                        v1090 = v1088 ^ v1089;
                        v1040 = v1062 ^ v1089;
                        v1041 = v1325 ^ v1061 ^ v1090;
                        v1062 = v1064;
                        *(v1058 - 4) = v1040;
                        v1061 = v1065;
                        *v1058 = v1041;
                        *(v1058 - 5) = __ROR4__(v1040, 8);
                        v1058 += 8;
                        *(v1058 - 9) = __ROR4__(v1041, 8);
                        *(v1058 - 14) = __ROR4__(v1040, 16);
                        *(v1058 - 10) = __ROR4__(v1041, 16);
                        *(v1058 - 15) = __ROR4__(v1040, 24);
                        *(v1058 - 11) = __ROR4__(v1041, 24);
                        --v1063;
                      }
                      while ( v1063 );
                      v1037 = dwBytes_4;
                      v82 = v1313;
                      v108 = v1337;
                      v961 = v1318;
                      v1020 = (_QWORD *)k;
                      v1039 = pcchLength;
                    }
                    v1091 = (const void *)Size;
                    *(_QWORD *)(Size + v1039) = v1037;
                    v1092 = GetProcessHeap();
                    v1093 = HeapAlloc(v1092, 8u, 0x30uLL);
                    if ( v1093 )
                    {
                      *(_DWORD *)v1093 = v1333;
                      v1094 = GetProcessHeap();
                      v1095 = HeapAlloc(v1094, 8u, (unsigned int)v1333);
                      if ( !v1095 )
                        goto LABEL_1297;
                      *((_QWORD *)v1093 + 1) = v1095;
                      memcpy_0(v1095, v1091, (unsigned int)v1333);
                      *((_DWORD *)v1093 + 4) = 160;
                      v1096 = GetProcessHeap();
                      v1097 = HeapAlloc(v1096, 8u, 0xA0uLL);
                      v1098 = 0;
                      if ( !v1097 )
                        goto LABEL_1297;
                      *((_QWORD *)v1093 + 3) = v1097;
                      *v1097 = xmmword_1808D85F0[0];
                      v1097[1] = xmmword_1808D85F0[1];
                      v1097[2] = xmmword_1808D85F0[2];
                      v1097[3] = xmmword_1808D85F0[3];
                      v1097[4] = xmmword_1808D85F0[4];
                      v1097[5] = xmmword_1808D85F0[5];
                      v1097[6] = xmmword_1808D85F0[6];
                      v1097[7] = xmmword_1808D85F0[7];
                      v1097[8] = xmmword_1808D85F0[8];
                      v1097[9] = xmmword_1808D85F0[9];
                      *((_DWORD *)v1093 + 8) = 8;
                      v1099 = GetProcessHeap();
                      v1100 = HeapAlloc(v1099, 8u, 8uLL);
                      if ( v1100 )
                      {
                        *((_QWORD *)v1093 + 5) = v1100;
                        *v1100 = qword_1808D85E0;
                        v1020 = v1093;
                        v1105 = 0LL;
                      }
                      else
                      {
LABEL_1297:
                        v1098 = -1073741801;
                        v1343 = (LPVOID)*((_QWORD *)v1093 + 1);
                        if ( v1343 )
                        {
                          v1101 = GetProcessHeap();
                          HeapFree(v1101, 0, v1343);
                          *((_QWORD *)v1093 + 1) = 0LL;
                        }
                        v1343 = (LPVOID)*((_QWORD *)v1093 + 3);
                        if ( v1343 )
                        {
                          v1102 = GetProcessHeap();
                          HeapFree(v1102, 0, v1343);
                          *((_QWORD *)v1093 + 3) = 0LL;
                        }
                        v1343 = (LPVOID)*((_QWORD *)v1093 + 5);
                        if ( v1343 )
                        {
                          v1103 = GetProcessHeap();
                          HeapFree(v1103, 0, v1343);
                          *((_QWORD *)v1093 + 5) = 0LL;
                        }
                        v1104 = GetProcessHeap();
                        HeapFree(v1104, 0, v1093);
                        v1105 = v1324;
                      }
                    }
                    else
                    {
                      v1105 = v1324;
                      v1098 = -1073741801;
                    }
                    v1324 = v108;
                    v1106 = v1341;
                    k = (size_t)v1341;
                    v1321 = v961;
                    v1107 = GetProcessHeap();
                    HeapFree(v1107, 0, (LPVOID)Size);
                    if ( v1105 )
                    {
                      v1108 = (void *)v1105[1];
                      if ( v1108 )
                      {
                        v1109 = GetProcessHeap();
                        HeapFree(v1109, 0, v1108);
                        v1105[1] = 0LL;
                      }
                      v1110 = (void *)v1105[3];
                      if ( v1110 )
                      {
                        v1111 = GetProcessHeap();
                        HeapFree(v1111, 0, v1110);
                        v1105[3] = 0LL;
                      }
                      v1112 = (void *)v1105[5];
                      if ( v1112 )
                      {
                        v1113 = GetProcessHeap();
                        HeapFree(v1113, 0, v1112);
                        v1105[5] = 0LL;
                      }
                      v1114 = GetProcessHeap();
                      HeapFree(v1114, 0, v1105);
                    }
                    v1034 = v1098 | 0x10000000;
                    v1115 = v1106;
                    v961 = v1321;
                    v108 = v1324;
                    if ( v1034 < 0 )
                      goto LABEL_1511;
                    v1116 = *(_DWORD *)v1020;
                    dwBytes = 4;
                    v1117 = RtlUIntAdd(4u, v1116, (int *)&dwBytes);
                    if ( v1117 >= 0 )
                    {
                      v1117 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                      if ( v1117 >= 0 )
                      {
                        v1117 = RtlUIntAdd(dwBytes, *((_DWORD *)v1020 + 4), (int *)&dwBytes);
                        if ( v1117 >= 0 )
                        {
                          v1117 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                          if ( v1117 >= 0 )
                          {
                            v1117 = RtlUIntAdd(dwBytes, *((_DWORD *)v1020 + 8), (int *)&dwBytes);
                            if ( v1117 >= 0 )
                            {
                              v1120 = dwBytes;
                              v1121 = GetProcessHeap();
                              v1122 = HeapAlloc(v1121, 8u, v1120);
                              if ( !v1122 )
                              {
                                v1115 = (void *)k;
                                v1034 = -805306345;
                                v961 = v1321;
                                v108 = v1324;
                                goto LABEL_1511;
                              }
                              *v1122 = *(_DWORD *)v1020;
                              v1318 = v1122;
                              v1117 = RtlULongLongAdd((unsigned __int64)v1122, 4LL, (__int64 *)&v1318);
                              v1124 = v1123;
                              if ( v1117 < 0 )
                                goto LABEL_1330;
                              memcpy_0(v1318, (const void *)v1020[1], *(unsigned int *)v1020);
                              v1117 = RtlULongLongAdd(
                                        (unsigned __int64)v1318,
                                        *(unsigned int *)v1020,
                                        (__int64 *)&v1318);
                              if ( v1117 < 0 )
                                goto LABEL_1330;
                              v1125 = v1318;
                              *(_DWORD *)v1318 = *((_DWORD *)v1020 + 4);
                              v1117 = RtlULongLongAdd((unsigned __int64)v1125, 4LL, (__int64 *)&v1318);
                              if ( v1117 < 0
                                || (memcpy_0(v1318, (const void *)v1020[3], *((unsigned int *)v1020 + 4)),
                                    v1117 = RtlULongLongAdd(
                                              (unsigned __int64)v1318,
                                              *((unsigned int *)v1020 + 4),
                                              (__int64 *)&v1318),
                                    v1117 < 0)
                                || (v1126 = v1318,
                                    *(_DWORD *)v1318 = *((_DWORD *)v1020 + 8),
                                    v1117 = RtlULongLongAdd((unsigned __int64)v1126, 4LL, (__int64 *)&v1318),
                                    v1117 < 0)
                                || (memcpy_0(v1318, (const void *)v1020[5], *((unsigned int *)v1020 + 8)),
                                    v1117 = RtlULongLongAdd(
                                              (unsigned __int64)v1318,
                                              *((unsigned int *)v1020 + 8),
                                              (__int64 *)&v1318),
                                    v1117 < 0) )
                              {
LABEL_1330:
                                v1127 = GetProcessHeap();
                                HeapFree(v1127, 0, v1124);
                                v1118 = v1324;
                                v1119 = v1321;
                              }
                              else
                              {
                                v1118 = v1324;
                                v1119 = v1321;
                                Src = v1124;
                                LODWORD(v1317) = v1120;
                              }
                            }
                          }
                        }
                      }
                    }
                    v1034 = v1117 | 0x10000000;
                    v1115 = (void *)k;
                    v961 = v1119;
                    v108 = v1118;
                    if ( v1034 < 0 )
                      goto LABEL_1511;
                    v1361 = 8;
                    v1128 = RtlUIntAdd(8u, v1329, (int *)&v1361);
                    v1034 = v1128 | 0x10000000;
                    if ( v1128 < 0 )
                      goto LABEL_1511;
                    v1129 = (v1361 + 7) & 0xFFFFFFF8;
                    if ( v1129 < v1361 )
                    {
                      v1034 = -1073741675;
                      goto LABEL_1511;
                    }
                    v1356 = (v1361 + 7) & 0xFFFFFFF8;
                    v1034 = RtlUIntAdd(v1129, 8, (int *)&v1356);
                    if ( v1034 >= 0 )
                    {
                      if ( v1346[1] && LODWORD(v1346[0]) > 1 )
                      {
                        v1130 = (LPVOID)v1346[1];
                        LODWORD(v1319) = 0;
                        v1115 = (void *)k;
                        v1321 = (LPVOID)v1346[1];
                        do
                        {
                          v1034 = RtlULongLongAdd((unsigned __int64)v1130, 4LL, (__int64 *)&v1321);
                          if ( v1034 < 0 )
                            goto LABEL_1511;
                          v1034 = RtlULongLongAdd((unsigned __int64)v1321, v1131, (__int64 *)&v1321);
                          if ( v1034 < 0 )
                            goto LABEL_1511;
                          LODWORD(v1319) = (_DWORD)v1319 + 1;
                          v1130 = v1321;
                        }
                        while ( !(_DWORD)v1319 );
                        LODWORD(v1320) = *(_DWORD *)v1321;
                        v1034 = RtlULongLongAdd((unsigned __int64)v1321, 4LL, (__int64 *)&v1321);
                        if ( v1034 >= 0 )
                        {
                          if ( LODWORD(v1346[0]) <= 2 )
                          {
                            v1034 = -1073741811;
                            goto LABEL_1511;
                          }
                          v1133 = (LPVOID)v1346[1];
                          v1324 = (LPVOID)v1346[1];
                          do
                          {
                            k = v1132;
                            v1329 = (__int64)v108;
                            v1319 = v961;
                            v1318 = v1115;
                            v1321 = v1020;
                            v1034 = RtlULongLongAdd((unsigned __int64)v1133, 4LL, (__int64 *)&v1324);
                            if ( v1034 < 0 )
                              goto LABEL_1511;
                            v1034 = RtlULongLongAdd((unsigned __int64)v1324, v1134, (__int64 *)&v1324);
                            if ( v1034 < 0 )
                              goto LABEL_1511;
                            v1133 = v1324;
                          }
                          while ( (unsigned int)(v1135 + 1) < 2 );
                          v1034 = RtlULongLongAdd((unsigned __int64)v1324, 4LL, (__int64 *)&v1324);
                          if ( v1034 >= 0 )
                          {
                            dwBytes = v1136;
                            v1034 = RtlUIntAdd(v1136, v1356, (int *)&dwBytes);
                            if ( v1034 >= 0 )
                            {
                              v1034 = RtlUIntAdd(dwBytes, v1137, (int *)&dwBytes);
                              if ( v1034 >= 0 )
                              {
                                v1034 = RtlUIntAdd(dwBytes, v1320, (int *)&dwBytes);
                                if ( v1034 >= 0 )
                                {
                                  v1034 = RtlUIntAdd(dwBytes, v1138, (int *)&dwBytes);
                                  if ( v1034 >= 0 )
                                  {
                                    v1034 = RtlUIntAdd(dwBytes, v1139, (int *)&dwBytes);
                                    if ( v1034 >= 0 )
                                    {
                                      if ( dwBytes > 0x400000 )
                                      {
                                        v1034 = -2147418113;
                                        goto LABEL_1511;
                                      }
                                      v1140 = dwBytes;
                                      v1141 = GetProcessHeap();
                                      v1332 = HeapAlloc(v1141, 8u, v1140);
                                      if ( !v1332 )
                                      {
                                        v1332 = 0LL;
                                        v1142 = (void *)k;
                                        v1034 = -805306345;
                                        goto LABEL_1363;
                                      }
                                      v1142 = (void *)k;
                                      hModule = 0LL;
                                      v1378 = 0LL;
                                      v1379 = 0LL;
                                      if ( !k )
                                      {
                                        v1034 = -2147024809;
LABEL_1363:
                                        v108 = (void *)v1329;
                                        v1020 = v1321;
                                        Src = v1142;
                                        goto LABEL_1511;
                                      }
                                      *(_QWORD *)&v1378 = k;
                                      LODWORD(v1379) = v1317;
                                      *((_QWORD *)&v1378 + 1) = v1332;
                                      *(_QWORD *)((char *)&v1379 + 4) = v1140;
                                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                        && (v1144 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                                      {
                                        v1145 = ((__int64 (__fastcall *)(__int64, __int128 *))v1144)(134LL, &v1378);
                                        LODWORD(Ptr) = v1140;
                                        v1034 = v1145 | 0x10000000;
                                        if ( v1145 >= 0 )
                                        {
                                          v1146 = DWORD1(v1379);
                                          v1147 = v1115;
                                          v1148 = (void *)k;
                                          v1149 = v961;
                                          v1150 = v1321;
                                          v1151 = (void *)v1329;
                                          goto LABEL_1377;
                                        }
                                      }
                                      else
                                      {
                                        v1143 = GetLastError();
                                        v1034 = v1143;
                                        if ( v1143 > 0 )
                                          v1034 = (unsigned __int16)v1143 | 0x80070000;
                                        LODWORD(Ptr) = v1140;
                                        if ( v1034 >= 0 )
                                        {
                                          v1034 = -2147467259;
                                          LODWORD(Ptr) = v1140;
                                        }
                                      }
                                      if ( v1034 == -805306333 )
                                      {
                                        v1034 = -2147024774;
                                        goto LABEL_1371;
                                      }
                                      v1150 = v1321;
                                      v1147 = v1115;
                                      v1151 = (void *)v1329;
                                      v1020 = v1321;
                                      v1148 = (void *)k;
                                      v108 = (void *)v1329;
                                      Src = (void *)k;
                                      v1149 = v961;
                                      if ( v1034 < 0 )
                                        goto LABEL_1511;
                                      v1146 = Ptr;
LABEL_1377:
                                      v1152 = 0LL;
                                      v1337 = v1332;
                                      dwBytes = 0;
                                      if ( v1146 < 4 )
                                      {
                                        v1115 = v1147;
                                        v961 = v1149;
                                        v108 = v1151;
LABEL_1379:
                                        v1020 = v1150;
                                        Src = v1148;
                                        v1034 = -805306306;
                                        goto LABEL_1511;
                                      }
                                      v1153 = *(unsigned int *)v1332;
                                      v1154 = RtlULongLongAdd((unsigned __int64)v1332, 4LL, (__int64 *)&v1337);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      v1154 = RtlUIntAdd(0, 4, (int *)&dwBytes);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      if ( v1146 - dwBytes < (unsigned int)v1153 )
                                      {
LABEL_1383:
                                        v1115 = v1318;
                                        v961 = v1319;
                                        v108 = (void *)v1329;
                                        goto LABEL_1379;
                                      }
                                      Size = (size_t)v1337;
                                      v1154 = RtlULongLongAdd((unsigned __int64)v1337, v1153, (__int64 *)&v1337);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      v1154 = RtlUIntAdd(dwBytes, v1153, (int *)&dwBytes);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      if ( v1146 - dwBytes < (unsigned int)v1155 )
                                        goto LABEL_1383;
                                      v1156 = *(unsigned int *)v1337;
                                      v1154 = RtlULongLongAdd((unsigned __int64)v1337, v1155, (__int64 *)&v1337);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      v1154 = RtlUIntAdd(dwBytes, v1157, (int *)&dwBytes);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      if ( v1146 - dwBytes < (unsigned int)v1156 )
                                        goto LABEL_1383;
                                      v1343 = v1337;
                                      v1154 = RtlULongLongAdd(
                                                (unsigned __int64)v1337,
                                                (unsigned int)v1156,
                                                (__int64 *)&v1337);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      v1154 = RtlUIntAdd(dwBytes, v1156, (int *)&dwBytes);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      if ( v1146 - dwBytes < v1158 )
                                        goto LABEL_1383;
                                      LODWORD(v1320) = *(_DWORD *)v1337;
                                      v1154 = RtlULongLongAdd((unsigned __int64)v1337, 4LL, (__int64 *)&v1337);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      v1154 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                                      if ( v1154 < 0 )
                                        goto LABEL_1432;
                                      if ( v1146 - dwBytes < v1159 )
                                        goto LABEL_1383;
                                      v1154 = RtlUIntAdd(dwBytes, v1159, (int *)&dwBytes);
                                      if ( v1154 < 0 )
                                      {
LABEL_1432:
                                        v1181 = (SIZE_T *)v1322;
                                        goto LABEL_1433;
                                      }
                                      if ( v1146 != dwBytes || (unsigned int)(v1153 + v1156 + v1160) + 12LL != v1146 )
                                        goto LABEL_1383;
                                      v1161 = GetProcessHeap();
                                      v1162 = HeapAlloc(v1161, 8u, 0x30uLL);
                                      v1163 = v1162;
                                      if ( v1162 )
                                      {
                                        v1154 = 0;
                                        if ( Size )
                                        {
                                          *(_DWORD *)v1162 = v1153;
                                          v1164 = GetProcessHeap();
                                          v1165 = HeapAlloc(v1164, 8u, v1153);
                                          if ( !v1165 )
                                            goto LABEL_1410;
                                          v1163[1] = v1165;
                                          memcpy_0(v1165, (const void *)Size, v1153);
                                        }
                                        else
                                        {
                                          *(_DWORD *)v1162 = 0;
                                          v1162[1] = 0LL;
                                        }
                                        v1166 = v1343;
                                        if ( !v1343 )
                                        {
                                          *((_DWORD *)v1163 + 4) = 0;
                                          v1163[3] = 0LL;
LABEL_1408:
                                          v1169 = v1337;
                                          if ( v1337 )
                                          {
                                            v1170 = v1320;
                                            *((_DWORD *)v1163 + 8) = v1320;
                                            v1171 = v1170;
                                            v1172 = GetProcessHeap();
                                            v1173 = HeapAlloc(v1172, 8u, (unsigned int)v1171);
                                            if ( !v1173 )
                                              goto LABEL_1410;
                                            v1163[5] = v1173;
                                            v1154 = 0;
                                            memcpy_0(v1173, v1169, v1171);
                                          }
                                          else
                                          {
                                            *((_DWORD *)v1163 + 8) = 0;
                                            v1163[5] = 0LL;
                                          }
                                          v1152 = v1163;
LABEL_1420:
                                          if ( v1154 >= 0 )
                                          {
                                            v1181 = v1152;
LABEL_1422:
                                            v1322 = v1181;
                                            goto LABEL_1433;
                                          }
                                          v1181 = 0LL;
                                          v1322 = 0LL;
                                          if ( v1152 )
                                          {
                                            v1182 = (void *)v1152[1];
                                            if ( v1182 )
                                            {
                                              v1183 = GetProcessHeap();
                                              HeapFree(v1183, 0, v1182);
                                              v1152[1] = 0LL;
                                            }
                                            v1184 = (void *)v1152[3];
                                            if ( v1184 )
                                            {
                                              v1185 = GetProcessHeap();
                                              HeapFree(v1185, 0, v1184);
                                              v1152[3] = 0LL;
                                            }
                                            v1186 = (void *)v1152[5];
                                            if ( v1186 )
                                            {
                                              v1187 = GetProcessHeap();
                                              HeapFree(v1187, 0, v1186);
                                              v1152[5] = 0LL;
                                            }
                                            v1188 = GetProcessHeap();
                                            HeapFree(v1188, 0, v1152);
                                            v1181 = 0LL;
                                            goto LABEL_1422;
                                          }
LABEL_1433:
                                          v1034 = v1154 | 0x10000000;
                                          v1020 = v1321;
                                          v1115 = v1318;
                                          v961 = v1319;
                                          v108 = (void *)v1329;
                                          Src = (void *)k;
                                          if ( v1034 < 0 )
                                            goto LABEL_1511;
                                          if ( !v1181 || (v1347 = v1181[1]) == 0 || !*(_DWORD *)v1181 )
                                          {
                                            v1034 = -805306355;
                                            Src = (void *)k;
                                            goto LABEL_1511;
                                          }
                                          v1317 = *(unsigned int *)v1181 - 8LL;
                                          v1189 = v1317;
                                          v1190 = MemoryAlloc(v1317);
                                          v1345 = v1190;
                                          v1191 = (void *)k;
                                          v1192 = 0;
                                          Src = (void *)k;
                                          v1193 = (size_t)v1020;
                                          v1194 = v1115;
                                          v1195 = v961;
                                          v1196 = v108;
                                          if ( !v1190 )
                                            goto LABEL_1465;
                                          pcchLength = (size_t)v1190;
                                          v1333 = v1347;
                                          Size = v1189 & 7;
                                          dwBytes_4 = 0;
                                          v1325 = 0x7F1137FAB69605ELL;
                                          LODWORD(Ptr) = 0;
                                          k = (size_t)v1020;
                                          v1341 = v1115;
                                          Src = v1191;
                                          if ( (v1189 & 7) != 0 )
                                          {
                                            v1350 = 0;
                                            v1318 = v961;
                                            v1337 = v108;
                                            v1197 = Ptr;
                                            v1198 = Ptr;
                                            v1199 = Ptr;
                                            v1200 = (unsigned __int8 *)v1333;
                                            Src = v1191;
                                            do
                                            {
                                              v1341 = v1194;
                                              v1115 = v1194;
                                              v1201 = *v1200;
                                              v1020 = (_QWORD *)v1193;
                                              k = v1193;
                                              v108 = v1196;
                                              v1202 = v1355;
                                              v961 = v1195;
                                              v1337 = v1196;
                                              v1318 = v1195;
                                              if ( (unsigned int)v1198 >= 4 )
                                              {
                                                v1199 |= v1201 << v1355;
                                              }
                                              else
                                              {
                                                v1202 = v1355;
                                                v1197 |= v1201 << (v1355 - 32);
                                              }
                                              ++v1200;
                                              ++v1198;
                                              v1355 = v1202 - 8;
                                              v1193 = (size_t)v1020;
                                              v1194 = v1115;
                                            }
                                            while ( v1198 < (int)Size );
                                            v1189 = v1317;
                                            v1350 = v1199;
                                            v82 = v1313;
                                            LODWORD(Ptr) = v1197;
                                            v1192 = dwBytes_4;
                                            v1333 = (SIZE_T)v1200;
                                            v1203 = Ptr ^ 0x92F65A5;
                                            v1204 = Size;
                                            v1205 = v1350 ^ 0x699A899C;
                                            LODWORD(v1320) = 0;
                                            v1206 = Ptr ^ 0x92F65A5;
                                            v1207 = v1350 ^ 0x699A899C;
                                            if ( (_DWORD)Size )
                                            {
                                              v1208 = (_BYTE *)pcchLength;
                                              v1209 = v1320;
                                              do
                                              {
                                                if ( v1209 >= 4 )
                                                {
                                                  v1207 = __ROR4__(v1207, 24);
                                                  LODWORD(v1319) = v1207;
                                                }
                                                else
                                                {
                                                  v1206 = __ROR4__(v1206, 24);
                                                  LODWORD(v1319) = v1206;
                                                }
                                                ++v1209;
                                                Size = (size_t)(v1208 + 1);
                                                *v1208 = (_BYTE)v1319;
                                                v1208 = (_BYTE *)Size;
                                              }
                                              while ( (int)v1209 < (int)v1204 );
                                              v1192 = dwBytes_4;
                                              pcchLength = Size;
                                            }
                                            if ( v1204 <= 4 )
                                            {
                                              v1210 = 0;
                                              if ( v1204 < 4 )
                                                v1203 = v1203 >> (8 * (4 - v1204)) << (8 * (4 - v1204));
                                            }
                                            else
                                            {
                                              v1210 = v1205 >> (8 * (8 - v1204)) << (8 * (8 - v1204));
                                            }
                                          }
                                          else
                                          {
                                            v1203 = 0;
                                            LODWORD(v1320) = 0;
                                            v1318 = v961;
                                            v1210 = 0;
                                            v1337 = v108;
                                          }
                                          v1343 = (LPVOID)(v1189 >> 3);
                                          if ( v1189 >> 3 )
                                          {
                                            v1211 = HIDWORD(v1325);
                                            v1212 = (_BYTE *)(pcchLength + 7);
                                            v1213 = Ptr;
                                            v1214 = (char *)v1343;
                                            v1326 = 24670;
                                            v1215 = WORD2(v1325);
                                            LODWORD(v1320) = HIDWORD(v1325) ^ 0xAB69605E;
                                            v1216 = (unsigned __int8 *)(v1333 + 2);
                                            LODWORD(v1319) = WORD2(v1325);
                                            do
                                            {
                                              v1217 = *(v1216 - 1) | (*(v1216 - 2) << 8);
                                              v1218 = v1216[2] << 8;
                                              v1219 = *v1216;
                                              v1216 += 8;
                                              v1220 = *(v1216 - 7) | ((v1219 | (v1217 << 8)) << 8);
                                              v1221 = v1220 ^ v1203;
                                              v1222 = *(v1216 - 3) | ((*(v1216 - 4) | ((*(v1216 - 5) | v1218) << 8)) << 8);
                                              v1223 = v1222 ^ v1221 ^ v1210 ^ v1211 ^ 0xAB69605E;
                                              v1224 = v1221 ^ (__ROR4__(v1223, 22)
                                                             + v1215 * __ROR4__(v1223 + 1419157410, 27));
                                              v1225 = v1223 ^ (WORD1(v1325) * __ROR4__(v1224 + v1211, 9)
                                                             - __ROR4__(v1224, 30));
                                              v1226 = v1224 ^ (v1326 * (v1225 - v1215) - (v1225 >> 13));
                                              v1227 = v1225 ^ (HIWORD(v1325) * __ROR4__(v1226 ^ WORD1(v1325), 26)
                                                             - __ROR4__(v1226, 30));
                                              v1228 = v1226 ^ (v1211 - (v1227 ^ 0xAB69605E));
                                              v1229 = v1227 ^ (WORD1(v1325) * (v1228 ^ v1215)) ^ __ROR4__(v1228, 6);
                                              v1230 = v1228 ^ (__ROR4__(v1229, 30) + v1326 * __ROR4__(v1211 + v1229, 15));
                                              v1231 = v1229 ^ (HIWORD(v1325) * __ROR4__(v1230 + 1419157410, 14)
                                                             - __ROR4__(v1230, 24));
                                              v1232 = v1230 ^ __ROR4__(v1231, 10) ^ ((_DWORD)v1319
                                                                                   * __ROR4__(v1231 ^ 0xAB69605E, 12));
                                              v1233 = v1231 ^ (v1232 >> 10) ^ (WORD1(v1325) * (v1232 ^ HIWORD(v1325)));
                                              v1215 = (int)v1319;
                                              v1234 = v1232 ^ (HIWORD(v1325) * (v1326 + __ROR4__(~v1233, 5)));
                                              v1235 = v1233 ^ (v1234 - HIWORD(v1325)) ^ 0xAB69605E;
                                              v1236 = v1234 ^ ((v1235 >> 2)
                                                             + (_DWORD)v1319 * __ROR4__(HIWORD(v1325) ^ v1235, 30));
                                              v1237 = v1235 ^ (__ROR4__(v1236, 25)
                                                             + WORD1(v1325) * __ROR4__(v1236 - v1211, 6));
                                              v1238 = v1236 ^ (v1326 * (v1237 ^ (unsigned int)v1319) + __ROR4__(v1237, 9));
                                              v1239 = v1237 ^ (__ROR4__(v1238, 25)
                                                             + HIWORD(v1325) * __ROR4__(v1238 ^ WORD1(v1325), 27));
                                              v1240 = v1238 ^ v1239 ^ v1320;
                                              v1241 = v1239 ^ ((_DWORD)v1319 * (__ROR4__(v1240, 3) - WORD1(v1325)));
                                              v1242 = v1240 ^ (v1326 * __ROR4__(v1241 - v1211, 1) - __ROR4__(v1241, 6));
                                              v1243 = v1241 ^ (__ROR4__(v1242, 18)
                                                             + HIWORD(v1325) * __ROR4__(v1242 - 1419157410, 29));
                                              v1244 = v1242 ^ ((_DWORD)v1319 * __ROR4__(v1243 - 1419157410, 17)
                                                             - __ROR4__(v1243, 14));
                                              v1245 = v1243 ^ (v1244 >> 3) ^ (WORD1(v1325) * (v1326 ^ v1244));
                                              v1246 = v1213 ^ __ROR4__(v1245, 30) ^ (v1326 * __ROR4__(v1245 ^ v1211, 28));
                                              v1213 = v1220;
                                              v1203 = v1244 ^ v1246;
                                              v1247 = v1350;
                                              *(v1212 - 4) = v1203;
                                              v1210 = v1245 ^ v1247;
                                              *v1212 = v1210;
                                              *(v1212 - 5) = __ROR4__(v1203, 8);
                                              v1212 += 8;
                                              v1350 = v1222;
                                              *(v1212 - 9) = __ROR4__(v1210, 8);
                                              *(v1212 - 14) = __ROR4__(v1203, 16);
                                              *(v1212 - 10) = __ROR4__(v1210, 16);
                                              *(v1212 - 15) = __ROR4__(v1203, 24);
                                              *(v1212 - 11) = __ROR4__(v1210, 24);
                                              --v1214;
                                            }
                                            while ( v1214 );
                                            v1192 = dwBytes_4;
                                            v82 = v1313;
                                            v108 = v1337;
                                            v961 = v1318;
                                            v1020 = (_QWORD *)k;
                                            v1115 = v1341;
                                            v1189 = v1317;
                                          }
                                          v1248 = (char *)v1345;
                                          for ( j = 0LL; j < v1189; ++j )
                                            v1192 ^= *((_BYTE *)v1345 + j);
                                          k = (size_t)v1332;
                                          v1321 = v1322;
                                          if ( v1192 != *(_QWORD *)(v1189 + v1347) )
                                          {
                                            MemoryFree(v1345);
LABEL_1465:
                                            v1034 = -805306367;
                                            v1334 = 0LL;
                                            goto LABEL_1511;
                                          }
                                          v1250 = v1020;
                                          v1324 = v1345;
                                          v1326 = 0;
                                          if ( (unsigned int)v1189 >= 4 )
                                          {
                                            LODWORD(v1320) = *(_DWORD *)v1345;
                                            v1251 = RtlULongLongAdd((unsigned __int64)v1345, 4LL, (__int64 *)&v1324);
                                            v1334 = v1252;
                                            v1020 = v1253;
                                            v1322 = v1321;
                                            v1332 = (LPVOID)k;
                                            if ( v1251 < 0 )
                                              goto LABEL_1507;
                                            v1254 = RtlUIntAdd(0, 4, (int *)&v1326);
                                            v1255 = v1321;
                                            v1251 = v1254;
                                            v1256 = (void *)k;
                                            v1322 = v1321;
                                            v1334 = v1248;
                                            v1332 = (LPVOID)k;
                                            if ( v1254 < 0 )
                                              goto LABEL_1507;
                                            if ( (unsigned int)v1317 - v1326 < 4 )
                                              goto LABEL_1470;
                                            LODWORD(Ptr) = *(_DWORD *)v1324;
                                            v1251 = RtlULongLongAdd((unsigned __int64)v1324, 4LL, (__int64 *)&v1324);
                                            v1334 = v1257;
                                            v1322 = v1321;
                                            v1332 = (LPVOID)k;
                                            if ( v1251 < 0 )
                                              goto LABEL_1507;
                                            v1258 = RtlUIntAdd(v1326, 4, (int *)&v1326);
                                            v1255 = v1321;
                                            v1251 = v1258;
                                            v1256 = (void *)k;
                                            v1322 = v1321;
                                            v1334 = v1248;
                                            v1332 = (LPVOID)k;
                                            if ( v1258 < 0 )
                                              goto LABEL_1507;
                                            if ( (unsigned int)v1317 - v1326 < (unsigned int)Ptr )
                                            {
LABEL_1470:
                                              v1322 = v1255;
                                              v1332 = v1256;
LABEL_1505:
                                              v1334 = v1248;
LABEL_1506:
                                              v1251 = -1073741762;
                                              goto LABEL_1507;
                                            }
                                            v1251 = RtlUIntAdd(v1326, Ptr, (int *)&v1326);
                                            v1332 = (LPVOID)k;
                                            v1334 = v1248;
                                            v1322 = v1321;
                                            if ( v1251 < 0 )
                                              goto LABEL_1507;
                                            if ( &v1248[(unsigned int)v1317] >= (char *)v1324 + (unsigned int)Ptr
                                              && (unsigned __int64)(unsigned int)v1317
                                               + &v1248[-(unsigned int)Ptr]
                                               - (_BYTE *)v1324 < 8 )
                                            {
                                              v1334 = v1248;
                                              v1325 = 0LL;
                                              v1251 = 0;
                                              v1318 = 0LL;
                                              v1020 = v1250;
                                              v1345 = 0LL;
                                              v1347 = 0LL;
                                              LODWORD(v1317) = 0;
                                              v1332 = (LPVOID)k;
                                              v1322 = v1321;
                                              if ( !v1324 )
                                                goto LABEL_1489;
                                              pcchLength = (size_t)v1324;
                                              v1251 = RtlULongLongAdd(
                                                        (unsigned __int64)v1324,
                                                        (unsigned int)Ptr,
                                                        (__int64 *)&v1318);
                                              v1322 = v1321;
                                              v1334 = v1259;
                                              v1332 = (LPVOID)k;
                                              if ( v1251 < 0 )
                                              {
LABEL_1499:
                                                v1275 = (int)v1342;
                                                goto LABEL_1500;
                                              }
                                              v1260 = v1318;
                                              v1261 = pcchLength;
                                              v1334 = v1259;
                                              v1322 = v1321;
                                              v1332 = (LPVOID)k;
                                              if ( pcchLength < (unsigned __int64)v1318 )
                                              {
                                                v1334 = v1259;
                                                v1262 = k;
                                                v1322 = v1321;
                                                v1263 = v1321;
                                                v1332 = (LPVOID)k;
                                                while ( 1 )
                                                {
                                                  v1333 = v1262;
                                                  v1251 = RtlULongLongAdd(v1261, 4LL, (__int64 *)&v1345);
                                                  if ( v1251 < 0 )
                                                    goto LABEL_1499;
                                                  if ( v1345 > v1318 )
                                                    goto LABEL_1493;
                                                  v1265 = *v1264;
                                                  LODWORD(v1319) = 0;
                                                  v1251 = RtlUIntAdd(4u, v1265, (int *)&v1319);
                                                  if ( v1251 < 0 )
                                                    goto LABEL_1507;
                                                  v1267 = RtlULongLongAdd(v1266, (unsigned int)v1319, (__int64 *)&v1347);
                                                  v1332 = v1269;
                                                  v1251 = v1267;
                                                  v1334 = v1268;
                                                  v1322 = v1263;
                                                  if ( v1267 < 0 )
                                                    goto LABEL_1499;
                                                  v1261 = v1347;
                                                  v1260 = v1318;
                                                  v1334 = v1268;
                                                  v1322 = v1263;
                                                  if ( v1347 > (unsigned __int64)v1318 )
                                                  {
                                                    v1251 = -1073741811;
                                                    v1332 = (LPVOID)v1333;
                                                    goto LABEL_1507;
                                                  }
                                                  LODWORD(v1317) = v1317 + 1;
                                                  v1262 = v1333;
                                                  v1332 = (LPVOID)v1333;
                                                  if ( v1347 >= (unsigned __int64)v1318 )
                                                  {
                                                    v1334 = v1268;
                                                    v1322 = v1263;
                                                    v1332 = (LPVOID)v1333;
                                                    break;
                                                  }
                                                }
                                              }
                                              if ( (void *)v1261 != v1260 )
                                              {
LABEL_1493:
                                                v1251 = -1073741811;
                                              }
                                              else
                                              {
LABEL_1489:
                                                v1270 = Ptr;
                                                if ( !(_DWORD)Ptr )
                                                {
                                                  v1274 = (void *)v1325;
                                                  goto LABEL_1496;
                                                }
                                                v1271 = Ptr;
                                                v1272 = GetProcessHeap();
                                                v1273 = HeapAlloc(v1272, 8u, v1271);
                                                v1251 = 0;
                                                v1274 = v1273;
                                                if ( v1273 )
                                                {
                                                  v1270 = Ptr;
LABEL_1496:
                                                  if ( v1324 )
                                                    memcpy_0(v1274, v1324, v1270);
                                                  v1275 = v1317;
                                                  LODWORD(v1342) = v1317;
                                                  v1331 = (unsigned __int16 *)v1274;
LABEL_1500:
                                                  if ( v1251 < 0 || (_DWORD)v1320 == v1275 )
                                                    goto LABEL_1507;
                                                  goto LABEL_1506;
                                                }
                                                v1331 = 0LL;
                                                LODWORD(v1342) = 0;
                                                v1251 = -1073741801;
                                              }
LABEL_1507:
                                              v1034 = v1251 | 0x10000000;
                                              goto LABEL_1511;
                                            }
                                            v1332 = (LPVOID)k;
                                            v1322 = v1321;
                                          }
                                          v1020 = v1250;
                                          goto LABEL_1505;
                                        }
                                        *((_DWORD *)v1163 + 4) = v1156;
                                        v1167 = GetProcessHeap();
                                        v1168 = HeapAlloc(v1167, 8u, v1156);
                                        if ( v1168 )
                                        {
                                          v1163[3] = v1168;
                                          v1154 = 0;
                                          memcpy_0(v1168, v1166, v1156);
                                          goto LABEL_1408;
                                        }
LABEL_1410:
                                        v1154 = -1073741801;
                                        v1174 = (void *)v1163[1];
                                        if ( v1174 )
                                        {
                                          v1175 = GetProcessHeap();
                                          HeapFree(v1175, 0, v1174);
                                          v1163[1] = 0LL;
                                        }
                                        v1176 = (void *)v1163[3];
                                        if ( v1176 )
                                        {
                                          v1177 = GetProcessHeap();
                                          HeapFree(v1177, 0, v1176);
                                          v1163[3] = 0LL;
                                        }
                                        v1178 = (void *)v1163[5];
                                        if ( v1178 )
                                        {
                                          v1179 = GetProcessHeap();
                                          HeapFree(v1179, 0, v1178);
                                          v1163[5] = 0LL;
                                        }
                                        v1180 = GetProcessHeap();
                                        HeapFree(v1180, 0, v1163);
                                        goto LABEL_1420;
                                      }
                                      v1115 = v1318;
                                      v1034 = -805306345;
                                      v961 = v1319;
                                      v1322 = 0LL;
LABEL_1371:
                                      v1020 = v1321;
                                      v108 = (void *)v1329;
                                      Src = (void *)k;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
LABEL_1511:
                        if ( !v1115 )
                        {
LABEL_1513:
                          if ( v1020 )
                          {
                            v1277 = (void *)v1020[1];
                            if ( v1277 )
                            {
                              v1278 = GetProcessHeap();
                              HeapFree(v1278, 0, v1277);
                              v1020[1] = 0LL;
                            }
                            v1279 = (void *)v1020[3];
                            if ( v1279 )
                            {
                              v1280 = GetProcessHeap();
                              HeapFree(v1280, 0, v1279);
                              v1020[3] = 0LL;
                            }
                            v1281 = (void *)v1020[5];
                            if ( v1281 )
                            {
                              v1282 = GetProcessHeap();
                              HeapFree(v1282, 0, v1281);
                              v1020[5] = 0LL;
                            }
                            v1283 = GetProcessHeap();
                            HeapFree(v1283, 0, v1020);
                          }
                          v1284 = Src;
                          if ( Src )
                          {
                            v1285 = GetProcessHeap();
                            HeapFree(v1285, 0, v1284);
                          }
                          v1286 = v1332;
                          if ( v1332 )
                          {
                            v1287 = GetProcessHeap();
                            HeapFree(v1287, 0, v1286);
                          }
                          v1288 = v1322;
                          if ( v1322 )
                          {
                            v1289 = (void *)*((_QWORD *)v1322 + 1);
                            if ( v1289 )
                            {
                              v1290 = GetProcessHeap();
                              HeapFree(v1290, 0, v1289);
                              v1288[1] = 0LL;
                            }
                            v1291 = (void *)v1288[3];
                            if ( v1291 )
                            {
                              v1292 = GetProcessHeap();
                              HeapFree(v1292, 0, v1291);
                              v1288[3] = 0LL;
                            }
                            v1293 = (void *)v1288[5];
                            if ( v1293 )
                            {
                              v1294 = GetProcessHeap();
                              HeapFree(v1294, 0, v1293);
                              v1288[5] = 0LL;
                            }
                            v1295 = GetProcessHeap();
                            HeapFree(v1295, 0, v1288);
                          }
                          v1296 = v1334;
                          if ( v1334 )
                          {
                            v1297 = GetProcessHeap();
                            HeapFree(v1297, 0, v1296);
                          }
LABEL_1535:
                          v66 = v1034 < 0;
                          v984 = v1331;
                          if ( !v66 )
                          {
                            v1298 = (unsigned int)v1342;
                            if ( (_DWORD)v1342 )
                            {
                              if ( v1331 )
                              {
                                Size = (size_t)v1331;
                                if ( (int)RtlULongLongAdd((unsigned __int64)v1331, 4LL, (__int64 *)&Size) >= 0 )
                                {
                                  v1301 = (int *)Size;
                                  if ( !v1300 )
                                    v1301 = 0LL;
                                  if ( v1300 == 4 && *v1301 >= 0 && v1298 > 1 )
                                  {
                                    for ( k = (size_t)v984;
                                          (int)RtlULongLongAdd(v1299, 4LL, (__int64 *)&k) >= 0
                                       && (int)RtlULongLongAdd(k, *v1302, (__int64 *)&k) >= 0;
                                          v1299 = k )
                                    {
                                      if ( v1303 != -1 )
                                      {
                                        RtlULongLongAdd(k, 4LL, (__int64 *)&k);
                                        goto LABEL_1208;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LABEL_1208;
                        }
LABEL_1512:
                        v1276 = GetProcessHeap();
                        HeapFree(v1276, 0, v1115);
                        goto LABEL_1513;
                      }
                      v1034 = -1073741811;
                    }
                    v1115 = (void *)k;
                    goto LABEL_1511;
                  }
                  v1040 = v1040 >> (8 * (4 - v1043)) << (8 * (4 - v1043));
                }
                else
                {
                  v1041 = v1050 >> (8 * (8 - v1043)) << (8 * (8 - v1043));
                }
                v1036 = (size_t)v1321;
                goto LABEL_1289;
              }
            }
          }
        }
      }
LABEL_1207:
      v984 = v1331;
LABEL_1208:
      v985 = (void *)v1346[1];
      v1346[0] = 0LL;
      if ( v1346[1] )
      {
        v986 = GetProcessHeap();
        HeapFree(v986, 0, v985);
        v1346[1] = 0LL;
      }
      if ( v984 )
      {
        v987 = GetProcessHeap();
        HeapFree(v987, 0, v984);
      }
      if ( v108 )
      {
        v988 = GetProcessHeap();
        HeapFree(v988, 0, v108);
      }
      if ( v961 )
      {
        v989 = GetProcessHeap();
        HeapFree(v989, 0, v961);
      }
      goto LABEL_1552;
    }
    k = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
    if ( !k )
    {
      GetLastError();
      goto LABEL_1193;
    }
    v473 = ((__int64 (__fastcall *)(__int64))off_1808D13D8[0])(v109);
    v474 = dword_1808DA538;
    qword_1808DDD48 = v473;
    dwBytes = dword_1808DA538;
    memset_0(&v1389, 0, 0x70uLL);
    v1337 = 0LL;
    memset(v1439, 0, 44);
    v1357 = 0LL;
    pcchLength = 0LL;
    while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
      ;
    v475 = dword_1808DDD3C;
    if ( dword_1808DDD3C )
      goto LABEL_640;
    LODWORD(Src) = 0;
    LODWORD(Ptr) = 0;
    v476 = (const WCHAR *)MemoryAlloc(0x338uLL);
    lpModuleName = v476;
    if ( !v476 )
      goto LABEL_604;
    v477 = (char *)v476 + 7;
    v478 = 0;
    v479 = -1;
    v480 = 0;
    v481 = (unsigned __int8 *)&unk_180783012;
    v482 = 0;
    v483 = 103LL;
    do
    {
      v484 = *(v481 - 1) | (*(v481 - 2) << 8);
      v485 = v481[2] << 8;
      v486 = *v481;
      v481 += 8;
      v487 = *(v481 - 7) | ((v486 | (v484 << 8)) << 8);
      v488 = v487 ^ v482;
      v489 = *(v481 - 3) | ((*(v481 - 4) | ((*(v481 - 5) | v485) << 8)) << 8);
      v490 = v488 ^ v480 ^ v489 ^ 0xAC987321;
      v491 = v488 ^ (__ROR4__(v490, 22) + 4991 * __ROR4__(v490 + 1419157410, 27));
      v492 = v490 ^ (43881 * __ROR4__(v491 + 133239679, 9) - __ROR4__(v491, 30));
      v493 = v491 ^ (24670 * v492 - (v492 >> 13) - 123127970);
      v494 = v492 ^ (2033 * __ROR4__(v493 ^ 0xAB69, 26) - __ROR4__(v493, 30));
      v495 = v493 ^ (133239679 - (v494 ^ 0xAB69605E));
      v496 = v494 ^ (43881 * (v495 ^ 0x137F)) ^ __ROR4__(v495, 6);
      v497 = v495 ^ (__ROR4__(v496, 30) + 24670 * __ROR4__(v496 + 133239679, 15));
      v498 = v496 ^ (2033 * __ROR4__(v497 + 1419157410, 14) - __ROR4__(v497, 24));
      v499 = v497 ^ __ROR4__(v498, 10) ^ (4991 * __ROR4__(v498 ^ 0xAB69605E, 12));
      v500 = v498 ^ (v499 >> 10) ^ (43881 * (v499 ^ 0x7F1));
      v501 = v499 ^ (2033 * (__ROR4__(~v500, 5) + 24670));
      v502 = v501 ^ (((v500 ^ (v501 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v500 ^ (v501 - 2033) ^ 0xAB6967AF, 30));
      v503 = v500 ^ (v501 - 2033) ^ 0xAB69605E ^ (__ROR4__(v502, 25) + 43881 * __ROR4__(v502 - 133239679, 6));
      v504 = v502 ^ (24670 * (v503 ^ 0x137F) + __ROR4__(v503, 9));
      v505 = v503 ^ (__ROR4__(v504, 25) + 2033 * __ROR4__(v504 ^ 0xAB69, 27));
      v506 = v504 ^ v505 ^ 0xAC987321;
      v507 = v505 ^ (4991 * __ROR4__(v506, 3) - 219010071);
      v508 = v506 ^ (24670 * __ROR4__(v507 - 133239679, 1) - __ROR4__(v507, 6));
      v509 = v507 ^ (__ROR4__(v508, 18) + 2033 * __ROR4__(v508 - 1419157410, 29));
      v510 = v508 ^ (4991 * __ROR4__(v509 - 1419157410, 17) - __ROR4__(v509, 14));
      v511 = v509 ^ (v510 >> 3) ^ (43881 * (v510 ^ 0x605E));
      v480 = v511 ^ v479;
      v479 = v489;
      v512 = v478 ^ __ROR4__(v511, 30) ^ (24670 * __ROR4__(v511 ^ 0x7F1137F, 28));
      v478 = v487;
      v482 = v510 ^ v512;
      *(v477 - 4) = v482;
      *v477 = v480;
      *(v477 - 5) = __ROR4__(v482, 8);
      v477 += 8;
      *(v477 - 9) = __ROR4__(v480, 8);
      *(v477 - 14) = __ROR4__(v482, 16);
      *(v477 - 10) = __ROR4__(v480, 16);
      *(v477 - 15) = __ROR4__(v482, 24);
      *(v477 - 11) = __ROR4__(v480, 24);
      --v483;
    }
    while ( v483 );
    v474 = dwBytes;
    v513 = (WCHAR *)lpModuleName;
    v514 = 0LL;
    v515 = 0;
    v516 = 0;
    do
      v515 ^= *((_BYTE *)lpModuleName + v514++);
    while ( v514 < 0x338 );
    if ( v515 != 64LL )
    {
      MemoryFree((void *)lpModuleName);
      goto LABEL_604;
    }
    *((_BYTE *)lpModuleName + 823) = 0;
    memset_0(&unk_1808DA540, 0, 0x60uLL);
    if ( *(_BYTE *)v513 )
    {
      v1372 = v513;
      while ( 1 )
      {
        v519 = v513;
        v520 = -1LL;
        do
          ++v520;
        while ( v513[v520] );
        v521 = &v513[v520];
        v522 = (HMODULE *)((char *)&unk_1808DA540 + 24 * (unsigned int)Ptr);
        lpModuleName = (LPCWSTR)(3LL * (unsigned int)Ptr);
        if ( !GetModuleHandleExW(0, v519, v522) )
          break;
        v516 = 0;
        if ( *(_WORD *)*v522 == 23117
          && (v523 = *((int *)*v522 + 15), (unsigned int)v523 < 0x10000000)
          && (v524 = (char *)*v522 + v523, v524 >= (char *)*v522)
          && *(_DWORD *)v524 == 17744 )
        {
          if ( *((_WORD *)v524 + 12) == 267 || *((_WORD *)v524 + 12) == 523 )
          {
            v525 = lpModuleName;
            *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)lpModuleName + 12) = *((_QWORD *)v524 + 17);
            *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v525 + 2) = *((_DWORD *)v524 + 20);
          }
          else
          {
            v516 = -1073741811;
          }
        }
        else
        {
          v516 = -1073741701;
        }
        v526 = *(_DWORD *)(v521 + 1);
        v527 = 0;
        v513 = v521 + 3;
        LODWORD(v1319) = v526;
        if ( v526 )
        {
          v528 = (unsigned int)Ptr;
          do
          {
            v529 = (const CHAR *)v513;
            v530 = -1LL;
            do
              ++v530;
            while ( *((_BYTE *)v513 + v530) );
            v513 = (WCHAR *)((char *)v513 + v530 + 1);
            if ( v516 >= 0 )
            {
              v531 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v528), v529);
              if ( !v531 )
                goto LABEL_634;
              off_1808D1340[(unsigned int)Src] = v531;
              v528 = (unsigned int)Ptr;
            }
            LODWORD(Src) = (_DWORD)Src + 1;
            ++v527;
          }
          while ( v527 < (unsigned int)v1319 );
        }
        LODWORD(Ptr) = Ptr + 1;
        if ( !*(_BYTE *)v513 )
          goto LABEL_634;
      }
      v516 = -1073741702;
LABEL_634:
      v532 = v1372;
      if ( !v1372 )
        goto LABEL_638;
    }
    else
    {
      v532 = v513;
    }
    v533 = GetProcessHeap();
    HeapFree(v533, 0, v532);
LABEL_638:
    if ( v516 < 0 )
    {
LABEL_604:
      v517 = (HMODULE *)&unk_1808DA540;
      v518 = 4LL;
      do
      {
        if ( *v517 )
          FreeLibrary(*v517);
        v517 += 3;
        --v518;
      }
      while ( v518 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_641:
      LODWORD(v1320) = 0;
      LODWORD(v1341) = 0;
      _InterlockedExchange(&dword_1808DDD40, 0);
      LODWORD(v1328) = 0;
      v1333 = 0LL;
      v1345 = 0LL;
      Size = 0LL;
      v1331 = 0LL;
      LODWORD(v1332) = 0;
      LODWORD(v1329) = 0;
      WORD2(v1320) = 0;
      LODWORD(v1338) = 0;
      LODWORD(v1342) = 0;
      LODWORD(v1334) = 0;
      while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
        ;
      v534 = dword_1808DDD3C;
      if ( dword_1808DDD3C )
        goto LABEL_687;
      LODWORD(Src) = 0;
      LODWORD(Ptr) = 0;
      v535 = (const WCHAR *)MemoryAlloc(0x338uLL);
      lpModuleName = v535;
      if ( !v535 )
        goto LABEL_651;
      v536 = 103LL;
      v537 = (char *)v535 + 7;
      v538 = 0;
      v539 = (unsigned __int8 *)&unk_180783012;
      v540 = -1;
      v541 = 0;
      v542 = 0;
      do
      {
        v543 = *(v539 - 1) | (*(v539 - 2) << 8);
        v544 = v539[2] << 8;
        v545 = *v539;
        v539 += 8;
        v546 = *(v539 - 7) | ((v545 | (v543 << 8)) << 8);
        v547 = v542 ^ v546;
        v548 = *(v539 - 3) | ((*(v539 - 4) | ((*(v539 - 5) | v544) << 8)) << 8);
        v549 = v541 ^ v542 ^ v546 ^ v548 ^ 0xAC987321;
        v550 = v547 ^ (__ROR4__(v549, 22) + 4991 * __ROR4__(v549 + 1419157410, 27));
        v551 = v549 ^ (43881 * __ROR4__(v550 + 133239679, 9) - __ROR4__(v550, 30));
        v552 = v550 ^ (24670 * v551 - (v551 >> 13) - 123127970);
        v553 = v551 ^ (2033 * __ROR4__(v552 ^ 0xAB69, 26) - __ROR4__(v552, 30));
        v554 = v552 ^ (133239679 - (v553 ^ 0xAB69605E));
        v555 = v553 ^ (43881 * (v554 ^ 0x137F)) ^ __ROR4__(v554, 6);
        v556 = v554 ^ (__ROR4__(v555, 30) + 24670 * __ROR4__(v555 + 133239679, 15));
        v557 = v555 ^ (2033 * __ROR4__(v556 + 1419157410, 14) - __ROR4__(v556, 24));
        v558 = v556 ^ __ROR4__(v557, 10) ^ (4991 * __ROR4__(v557 ^ 0xAB69605E, 12));
        v559 = v557 ^ (v558 >> 10) ^ (43881 * (v558 ^ 0x7F1));
        v560 = v558 ^ (2033 * (__ROR4__(~v559, 5) + 24670));
        v561 = v560 ^ (((v559 ^ (v560 - 2033) ^ 0xAB69605E) >> 2)
                     + 4991 * __ROR4__(v559 ^ (v560 - 2033) ^ 0xAB6967AF, 30));
        v562 = v559 ^ (v560 - 2033) ^ 0xAB69605E ^ (__ROR4__(v561, 25) + 43881 * __ROR4__(v561 - 133239679, 6));
        v563 = v561 ^ (24670 * (v562 ^ 0x137F) + __ROR4__(v562, 9));
        v564 = v562 ^ (__ROR4__(v563, 25) + 2033 * __ROR4__(v563 ^ 0xAB69, 27));
        v565 = v563 ^ v564 ^ 0xAC987321;
        v566 = v564 ^ (4991 * __ROR4__(v565, 3) - 219010071);
        v567 = v565 ^ (24670 * __ROR4__(v566 - 133239679, 1) - __ROR4__(v566, 6));
        v568 = v566 ^ (__ROR4__(v567, 18) + 2033 * __ROR4__(v567 - 1419157410, 29));
        v569 = v567 ^ (4991 * __ROR4__(v568 - 1419157410, 17) - __ROR4__(v568, 14));
        v570 = v568 ^ (v569 >> 3) ^ (43881 * (v569 ^ 0x605E));
        v571 = __ROR4__(v570, 30);
        v541 = v540 ^ v570;
        v540 = v548;
        v542 = v538 ^ v569 ^ v571 ^ (24670 * __ROR4__(v568 ^ (v569 >> 3) ^ (43881 * (v569 ^ 0x605E)) ^ 0x7F1137F, 28));
        v538 = v546;
        *(v537 - 4) = v542;
        *v537 = v541;
        *(v537 - 5) = __ROR4__(v542, 8);
        v537 += 8;
        *(v537 - 9) = __ROR4__(v541, 8);
        *(v537 - 14) = __ROR4__(v542, 16);
        *(v537 - 10) = __ROR4__(v541, 16);
        *(v537 - 15) = __ROR4__(v542, 24);
        *(v537 - 11) = __ROR4__(v541, 24);
        --v536;
      }
      while ( v536 );
      v474 = dwBytes;
      v572 = (WCHAR *)lpModuleName;
      v573 = 0LL;
      v574 = 0;
      v575 = 0;
      do
        v574 ^= *((_BYTE *)lpModuleName + v573++);
      while ( v573 < 0x338 );
      if ( v574 != 64LL )
      {
        MemoryFree((void *)lpModuleName);
        goto LABEL_651;
      }
      *((_BYTE *)lpModuleName + 823) = 0;
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      if ( *(_BYTE *)v572 )
      {
        v1373 = v572;
        while ( 1 )
        {
          v578 = v572;
          v579 = -1LL;
          do
            ++v579;
          while ( v572[v579] );
          v580 = &v572[v579];
          v581 = (HMODULE *)((char *)&unk_1808DA540 + 24 * (unsigned int)Ptr);
          lpModuleName = (LPCWSTR)(3LL * (unsigned int)Ptr);
          if ( !GetModuleHandleExW(0, v578, v581) )
            break;
          v575 = 0;
          if ( *(_WORD *)*v581 == 23117
            && (v582 = *((int *)*v581 + 15), (unsigned int)v582 < 0x10000000)
            && (v583 = (char *)*v581 + v582, v583 >= (char *)*v581)
            && *(_DWORD *)v583 == 17744 )
          {
            if ( *((_WORD *)v583 + 12) == 267 || *((_WORD *)v583 + 12) == 523 )
            {
              v584 = lpModuleName;
              *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)lpModuleName + 12) = *((_QWORD *)v583 + 17);
              *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v584 + 2) = *((_DWORD *)v583 + 20);
            }
            else
            {
              v575 = -1073741811;
            }
          }
          else
          {
            v575 = -1073741701;
          }
          v585 = *(_DWORD *)(v580 + 1);
          v586 = 0;
          v572 = v580 + 3;
          LODWORD(v1319) = v585;
          if ( v585 )
          {
            v587 = (unsigned int)Ptr;
            do
            {
              v588 = (const CHAR *)v572;
              v589 = -1LL;
              do
                ++v589;
              while ( *((_BYTE *)v572 + v589) );
              v572 = (WCHAR *)((char *)v572 + v589 + 1);
              if ( v575 >= 0 )
              {
                v590 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v587), v588);
                if ( !v590 )
                  goto LABEL_681;
                off_1808D1340[(unsigned int)Src] = v590;
                v587 = (unsigned int)Ptr;
              }
              LODWORD(Src) = (_DWORD)Src + 1;
              ++v586;
            }
            while ( v586 < (unsigned int)v1319 );
          }
          LODWORD(Ptr) = Ptr + 1;
          if ( !*(_BYTE *)v572 )
            goto LABEL_681;
        }
        v575 = -1073741702;
LABEL_681:
        v591 = v1373;
        if ( !v1373 )
          goto LABEL_685;
      }
      else
      {
        v591 = v572;
      }
      v592 = GetProcessHeap();
      HeapFree(v592, 0, v591);
LABEL_685:
      if ( v575 < 0 )
      {
LABEL_651:
        v576 = (HMODULE *)&unk_1808DA540;
        v577 = 4LL;
        do
        {
          if ( *v576 )
            FreeLibrary(*v576);
          v576 += 3;
          --v577;
        }
        while ( v577 );
        memset_0(&unk_1808DA540, 0, 0x60uLL);
        memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_688:
        v108 = 0LL;
        _InterlockedExchange(&dword_1808DDD40, 0);
        memset_0(&v1389, 0, 0x70uLL);
        LOWORD(v1320) = (v474 >> 4) & 0xF;
        v593 = v474 & 0xF;
        LODWORD(v1322) = v593;
        WORD1(v1320) = (v474 >> 8) & 0xF;
        WORD2(v1320) = (v474 >> 12) & 0xF;
        v1357 = 0LL;
        v1325 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
        v1326 = 0xFFFFFF;
        if ( !v1325 )
        {
          v594 = GetLastError();
          v595 = v594;
          if ( v594 > 0 )
            v595 = (unsigned __int16)v594 | 0x80070000;
          if ( v595 >= 0 )
            v595 = -2147467259;
LABEL_806:
          while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
            ;
          v694 = dword_1808DDD3C;
          if ( dword_1808DDD3C > 0 )
          {
            --dword_1808DDD3C;
            if ( v694 == 1 )
            {
              v695 = (HMODULE *)&unk_1808DA540;
              v696 = 4LL;
              do
              {
                if ( *v695 )
                  FreeLibrary(*v695);
                v695 += 3;
                --v696;
              }
              while ( v696 );
              memset_0(&unk_1808DA540, 0, 0x60uLL);
              memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              v108 = 0LL;
            }
          }
          _InterlockedExchange(&dword_1808DDD40, 0);
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1333);
          if ( v595 < 0 )
          {
LABEL_1023:
            if ( v1391 )
            {
              v817 = -1LL;
              do
                ++v817;
              while ( *((_WORD *)v1391 + v817) );
              v818 = 2 * v817 + 2;
              for ( m = v1391; v818; --v818 )
                *m++ = 0;
              MemoryFree(v1391);
              v1391 = 0LL;
            }
            if ( v1392 )
            {
              v820 = -1LL;
              do
                ++v820;
              while ( *((_WORD *)v1392 + v820) );
              v821 = 2 * v820 + 2;
              for ( n = v1392; v821; --v821 )
                *n++ = 0;
              MemoryFree(v1392);
              v1392 = 0LL;
            }
            v823 = v1393;
            if ( v1393 )
            {
              v824 = -1LL;
              do
                ++v824;
              while ( *((_WORD *)v1393 + v824) );
              v825 = 2 * v824 + 2;
              if ( v825 )
              {
                do
                {
                  *v823++ = 0;
                  --v825;
                }
                while ( v825 );
                v823 = v1393;
              }
              MemoryFree(v823);
              v1393 = 0LL;
            }
            if ( v1394 )
            {
              off_1808D1378();
              v1394 = 0LL;
            }
            if ( v1395 )
            {
              off_1808D1378();
              v1395 = 0LL;
            }
            if ( v1396 )
            {
              off_1808D1378();
              v1396 = 0LL;
            }
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v826 = dword_1808DDD3C;
            if ( dword_1808DDD3C > 0 )
            {
              --dword_1808DDD3C;
              if ( v826 == 1 )
              {
                v827 = (HMODULE *)&unk_1808DA540;
                v828 = 4LL;
                do
                {
                  if ( *v827 )
                    FreeLibrary(*v827);
                  v827 += 3;
                  --v828;
                }
                while ( v828 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              }
            }
            _InterlockedExchange(&dword_1808DDD40, 0);
            v829 = qword_1808DDD48;
            LODWORD(v1325) = dword_1808DA538;
            v830 = off_1808D13D8[0]();
            v1473 = 0;
            v831 = v830 - v829;
            pcchLength = (unsigned int)(v830 - v829);
            v1474 = 0LL;
            v1477 = 0LL;
            v1475 = 0LL;
            v1476 = 0LL;
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v899 = dword_1808DDD3C;
            if ( !dword_1808DDD3C )
            {
              LODWORD(v1317) = 0;
              LODWORD(Ptr) = 0;
              LODWORD(v1320) = 0;
              v900 = (const WCHAR *)MemoryAlloc(0x338uLL);
              v1353 = v900;
              if ( !v900 )
                goto LABEL_1149;
              v901 = 0;
              v902 = (char *)v900 + 7;
              v903 = -1;
              v904 = (unsigned __int8 *)&unk_180783012;
              v905 = 0;
              v906 = 103LL;
              v907 = 0;
              do
              {
                v908 = *(v904 - 1) | (*(v904 - 2) << 8);
                v909 = v904[2] << 8;
                v910 = *v904;
                v904 += 8;
                v911 = *(v904 - 7) | ((v910 | (v908 << 8)) << 8);
                v912 = v907 ^ v911;
                v913 = *(v904 - 3) | ((*(v904 - 4) | ((*(v904 - 5) | v909) << 8)) << 8);
                v914 = v907 ^ v911 ^ v905 ^ v913 ^ 0xAC987321;
                v915 = v912 ^ (__ROR4__(v914, 22) + 4991 * __ROR4__(v914 + 1419157410, 27));
                v916 = v914 ^ (43881 * __ROR4__(v915 + 133239679, 9) - __ROR4__(v915, 30));
                v917 = v915 ^ (24670 * v916 - (v916 >> 13) - 123127970);
                v918 = v916 ^ (2033 * __ROR4__(v917 ^ 0xAB69, 26) - __ROR4__(v917, 30));
                v919 = v917 ^ (133239679 - (v918 ^ 0xAB69605E));
                v920 = v918 ^ (43881 * (v919 ^ 0x137F)) ^ __ROR4__(v919, 6);
                v921 = v919 ^ (__ROR4__(v920, 30) + 24670 * __ROR4__(v920 + 133239679, 15));
                v922 = v920 ^ (2033 * __ROR4__(v921 + 1419157410, 14) - __ROR4__(v921, 24));
                v923 = v921 ^ __ROR4__(v922, 10) ^ (4991 * __ROR4__(v922 ^ 0xAB69605E, 12));
                v924 = v922 ^ (v923 >> 10) ^ (43881 * (v923 ^ 0x7F1));
                v925 = v923 ^ (2033 * (__ROR4__(~v924, 5) + 24670));
                v926 = v925 ^ (((v924 ^ (v925 - 2033) ^ 0xAB69605E) >> 2)
                             + 4991 * __ROR4__(v924 ^ (v925 - 2033) ^ 0xAB6967AF, 30));
                v927 = v924 ^ (v925 - 2033) ^ 0xAB69605E ^ (__ROR4__(v926, 25) + 43881 * __ROR4__(v926 - 133239679, 6));
                v928 = v926 ^ (24670 * (v927 ^ 0x137F) + __ROR4__(v927, 9));
                v929 = v927 ^ (__ROR4__(v928, 25) + 2033 * __ROR4__(v928 ^ 0xAB69, 27));
                v930 = v928 ^ v929 ^ 0xAC987321;
                v931 = v929 ^ (4991 * __ROR4__(v930, 3) - 219010071);
                v932 = v930 ^ (24670 * __ROR4__(v931 - 133239679, 1) - __ROR4__(v931, 6));
                v933 = v931 ^ (__ROR4__(v932, 18) + 2033 * __ROR4__(v932 - 1419157410, 29));
                v934 = v932 ^ (4991 * __ROR4__(v933 - 1419157410, 17) - __ROR4__(v933, 14));
                v935 = v933 ^ (v934 >> 3) ^ (43881 * (v934 ^ 0x605E));
                v936 = v901 ^ __ROR4__(v935, 30) ^ (24670 * __ROR4__(v935 ^ 0x7F1137F, 28));
                v901 = v911;
                v907 = v934 ^ v936;
                *(v902 - 4) = v907;
                v905 = v935 ^ v903;
                *v902 = v935 ^ v903;
                v903 = v913;
                *(v902 - 5) = __ROR4__(v907, 8);
                v902 += 8;
                *(v902 - 9) = __ROR4__(v905, 8);
                *(v902 - 14) = __ROR4__(v907, 16);
                *(v902 - 10) = __ROR4__(v905, 16);
                *(v902 - 15) = __ROR4__(v907, 24);
                *(v902 - 11) = __ROR4__(v905, 24);
                --v906;
              }
              while ( v906 );
              v937 = v1353;
              v938 = v1320;
              v939 = 0LL;
              v940 = 0;
              do
                v940 ^= *((_BYTE *)v1353 + v939++);
              while ( v939 < 0x338 );
              if ( v940 != 64LL )
              {
                MemoryFree((void *)v1353);
LABEL_1148:
                v831 = pcchLength;
LABEL_1149:
                v941 = 4LL;
                v942 = (HMODULE *)&unk_1808DA540;
                v108 = 0LL;
                do
                {
                  if ( *v942 )
                    FreeLibrary(*v942);
                  v942 += 3;
                  --v941;
                }
                while ( v941 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                goto LABEL_1183;
              }
              *((_BYTE *)v1353 + 823) = 0;
              memset_0(&unk_1808DA540, 0, 0x60uLL);
              v943 = (WCHAR *)v937;
              if ( !*(_BYTE *)v937 )
                goto LABEL_1179;
              while ( 1 )
              {
                v944 = v937;
                v945 = -1LL;
                do
                  ++v945;
                while ( v937[v945] );
                v946 = &v937[v945];
                v947 = (HMODULE *)((char *)&unk_1808DA540 + 24 * (unsigned int)Ptr);
                v1353 = (LPCWSTR)(3LL * (unsigned int)Ptr);
                if ( !GetModuleHandleExW(0, v944, v947) )
                  break;
                v938 = 0;
                if ( *(_WORD *)*v947 == 23117
                  && (v948 = *((int *)*v947 + 15), (unsigned int)v948 < 0x10000000)
                  && (v949 = (char *)*v947 + v948, v949 >= (char *)*v947)
                  && *(_DWORD *)v949 == 17744 )
                {
                  if ( *((_WORD *)v949 + 12) == 267 || *((_WORD *)v949 + 12) == 523 )
                  {
                    v950 = v1353;
                    *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)v1353 + 12) = *((_QWORD *)v949 + 17);
                    *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v950 + 2) = *((_DWORD *)v949 + 20);
                  }
                  else
                  {
                    v938 = -1073741811;
                  }
                }
                else
                {
                  v938 = -1073741701;
                }
                v951 = *(_DWORD *)(v946 + 1);
                v952 = 0;
                v937 = v946 + 3;
                LODWORD(v1320) = v951;
                if ( v951 )
                {
                  v953 = (unsigned int)Ptr;
                  do
                  {
                    v954 = (const CHAR *)v937;
                    v955 = -1LL;
                    do
                      ++v955;
                    while ( *((_BYTE *)v937 + v955) );
                    v937 = (LPCWSTR)((char *)v937 + v955 + 1);
                    if ( v938 >= 0 )
                    {
                      v956 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v953), v954);
                      if ( !v956 )
                        goto LABEL_1178;
                      off_1808D1340[(unsigned int)v1317] = v956;
                      v953 = (unsigned int)Ptr;
                    }
                    LODWORD(v1317) = v1317 + 1;
                    ++v952;
                  }
                  while ( v952 < (unsigned int)v1320 );
                }
                LODWORD(Ptr) = Ptr + 1;
                if ( !*(_BYTE *)v937 )
                  goto LABEL_1178;
              }
              v938 = -1073741702;
LABEL_1178:
              if ( v943 )
              {
LABEL_1179:
                v957 = GetProcessHeap();
                HeapFree(v957, 0, v943);
              }
              if ( v938 < 0 )
                goto LABEL_1148;
              v899 = dword_1808DDD3C;
              v108 = 0LL;
              v831 = pcchLength;
            }
            dword_1808DDD3C = v899 + 1;
LABEL_1183:
            _InterlockedExchange(&dword_1808DDD40, 0);
            v958 = 4LL;
            LODWORD(v1477) = v1325;
            LODWORD(v1474) = v831;
            v1473 = 1;
            LODWORD(v1475) = -1721306479;
            DWORD2(v1474) = 1;
            LODWORD(v1476) = 1;
            DWORD2(v1475) = 1;
            DWORD2(v1476) = 1;
            ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1808D1410)(0LL, 8225LL, 4LL, &v1473);
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v959 = dword_1808DDD3C;
            if ( dword_1808DDD3C > 0 )
            {
              --dword_1808DDD3C;
              if ( v959 == 1 )
              {
                v960 = (HMODULE *)&unk_1808DA540;
                do
                {
                  if ( *v960 )
                    FreeLibrary(*v960);
                  v960 += 3;
                  --v958;
                }
                while ( v958 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              }
            }
            _InterlockedExchange(&dword_1808DDD40, 0);
            ((void (__fastcall *)(_QWORD, size_t))off_1808D14A0[0])(0LL, k);
            goto LABEL_1193;
          }
          v697 = v1357;
          Size = v1357;
          v698 = v474 & 0xF;
          v1404 = 0;
          dwBytes = v698;
          memset_0(v1405, 0, 0x64uLL);
          v699 = 1;
          v700 = ((__int64 (__fastcall *)(size_t, __int64))off_1808D1390[0])(k, 7LL);
          v701 = 0;
          if ( v700 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v700, 104LL, &v1404) )
          {
            if ( v1406 != 32 || !v1407 || v1405[0] <= 0 || v1405[1] <= 0 )
              v699 = 0;
            if ( v699 )
            {
LABEL_911:
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(&v1398, v697, HIDWORD(Size));
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(&v1399, v697, HIDWORD(Size));
              if ( v698 == 1 )
                pcchLength = ((__int64 (__fastcall *)(_QWORD))off_1808D1368[0])(v1390 == 0 ? 0xB26720 : 0);
LABEL_913:
              v735 = k;
              LODWORD(v1320) = off_1808D13C0((CToastCenterExperienceManager *)k, (struct CSingleViewShellExperience *)1);
              v736 = 2064;
              if ( v1389 )
                v736 = 133138;
              LODWORD(v1341) = v736;
              if ( v699 )
              {
                v737 = v1391;
                v108 = 0LL;
                LODWORD(v1319) = v1390;
                lpModuleName = v1394;
                v1333 = (SIZE_T)v1391;
                v1417 = 0;
                memset_0(v1418, 0, 0x64uLL);
                v1426 = 0;
                memset_0(v1427, 0, 0x64uLL);
                Size = 0LL;
                LODWORD(Src) = 0;
                LODWORD(v1317) = 0;
                v1453 = 0LL;
                v1454 = 0;
                memset(v1452, 0, sizeof(v1452));
                v1432 = 0LL;
                if ( !v737 )
                  goto LABEL_1021;
                v738 = k;
                v739 = ((__int64 (__fastcall *)(size_t, __int64))off_1808D1390[0])(k, 7LL);
                if ( !v739 )
                  goto LABEL_1000;
                if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v739, 104LL, &v1417) )
                {
                  Size = v1419;
                  LODWORD(Src) = v1418[0];
                  LODWORD(v1317) = v1418[1];
                }
                v740 = (void *)((__int64 (__fastcall *)(size_t))off_1808D1350[0])(v738);
                v1324 = v740;
                if ( v740 )
                {
                  DWORD1(v1452[0]) = v1398.m128i_i32[2] - v1398.m128i_i32[0];
                  DWORD2(v1452[0]) = v1398.m128i_i32[1] - v1398.m128i_i32[3];
                  v1380 = 0LL;
                  LODWORD(v1452[0]) = 40;
                  HIDWORD(v1452[0]) = 2097153;
                  v1325 = ((__int64 (__fastcall *)(void *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                            v740,
                            v1452,
                            0LL,
                            &v1380,
                            0LL,
                            0);
                  v741 = v1325;
                  if ( v1325 )
                  {
                    v744 = ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(
                             v1325,
                             104LL,
                             &v1426) == 0;
                    v745 = 0LL;
                    if ( !v744 )
                      v745 = v1428;
                    DWORD2(v1432) = v1398.m128i_i32[2] - v1398.m128i_i32[0];
                    HIDWORD(v1432) = v1398.m128i_i32[3] - v1398.m128i_i32[1];
                    v1345 = v745;
                    ((void (__fastcall *)(void *, __int64))off_1808D13B8)(v740, v741);
                    off_1808D13C0((CToastCenterExperienceManager *)v740, (struct CSingleViewShellExperience *)1);
                    v746 = ((__int64 (__fastcall *)(void *, LPCWSTR))off_1808D13B8)(v740, lpModuleName);
                    v747 = off_1808D1428[0];
                    v1329 = v746;
                    v748 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(void *, __int128 *, __int64))v747)(v740, &v1432, v748);
                    v742 = 0;
                    ((void (__fastcall *)(void *, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v740,
                      v1333,
                      0xFFFFFFFFLL,
                      &v1432,
                      (_DWORD)v1341,
                      0LL);
                    if ( v698 == 1 )
                    {
                      if ( (_DWORD)v1319 )
                        LODWORD(Ptr) = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                      else
                        LODWORD(Ptr) = 0xFFFFFF;
                    }
                    else
                    {
                      LODWORD(Ptr) = -5723992;
                    }
                    v749 = 0;
                    v750 = -v1398.m128i_i32[0];
                    v751 = 0;
                    if ( v1398.m128i_i32[0] >= 0 )
                    {
                      v749 = v1398.m128i_i32[0];
                      v750 = 0;
                    }
                    v752 = -v1398.m128i_i32[1];
                    if ( v1398.m128i_i32[1] >= 0 )
                    {
                      v751 = v1398.m128i_i32[1];
                      v752 = 0;
                    }
                    v753 = DWORD2(v1432) - v750;
                    if ( DWORD2(v1432) - v750 >= (int)Src - v749 )
                      v753 = (_DWORD)Src - v749;
                    LODWORD(v1319) = v753;
                    v754 = HIDWORD(v1432) - v752;
                    if ( HIDWORD(v1432) - v752 >= (int)v1317 - v751 )
                      v754 = v1317 - v751;
                    if ( v753 > 0 && v754 > 0 )
                    {
                      v755 = (unsigned int)v1319;
                      v756 = Ptr;
                      lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1432));
                      v1347 = (unsigned int)v754;
                      v1321 = (LPVOID)(int)Src;
                      v757 = (char *)v1345 + 4 * v750 + 4 * (__int64)(DWORD2(v1432) * v752);
                      v1333 = (SIZE_T)v757;
                      v758 = (char *)(Size + 4 * (v749 + (__int64)((int)Src * v751)));
                      v759 = 0;
                      LODWORD(v1317) = 0;
                      v1345 = v758;
                      do
                      {
                        Size = v755;
                        v760 = v758 - v757;
                        v761 = (unsigned __int8 *)(v757 + 2);
                        v762 = v755;
                        do
                        {
                          if ( (unsigned __int8)((*v761 + *(v761 - 2) + 2 * (unsigned int)*(v761 - 1)) >> 2) != 0xFF )
                          {
                            v763 = (unsigned __int8)~((*v761 + *(v761 - 2) + 2 * (unsigned int)*(v761 - 1)) >> 2);
                            v764 = BYTE1(Ptr);
                            v761[v760] -= ~((*v761 + *(v761 - 2) + 2 * (unsigned int)*(v761 - 1)) >> 2)
                                        * (v756 - v761[v760]);
                            v765 = v761[v760 - 1];
                            v766 = (unsigned __int64)(2155905153LL * v763 * (v764 - v765)) >> 32;
                            v767 = BYTE2(Ptr);
                            v761[v760 - 1] = v765 + (v766 >> 7 < 0) + (v766 >> 7);
                            v768 = v761[v760 - 2];
                            v769 = (unsigned __int64)(2155905153LL * v763 * (v767 - v768)) >> 32;
                            v761[v760 - 2] = v768 + (v769 >> 7 < 0) + (v769 >> 7);
                            v770 = v761[v760 + 1];
                            v771 = v763 * (255 - v770);
                            v759 = v1317;
                            LOBYTE(v769) = v770
                                         + ((((unsigned __int64)(2155905153LL * v771) >> 32) & 0x80000000) != 0LL)
                                         + ((int)((unsigned __int64)(2155905153LL * v771) >> 32) >> 7);
                            v762 = Size;
                            v761[v760 + 1] = v769;
                          }
                          v761 += 4;
                          v742 = v759;
                          Size = --v762;
                        }
                        while ( v762 );
                        v757 = (char *)lpModuleName + v1333;
                        v744 = v1347-- == 1;
                        v1333 += (SIZE_T)lpModuleName;
                        LODWORD(v1317) = v759;
                        v758 = (char *)v1345 + 4 * (_QWORD)v1321;
                        v1345 = v758;
                      }
                      while ( !v744 );
                      v698 = dwBytes;
                      v82 = v1313;
                      v740 = v1324;
                    }
                    ((void (__fastcall *)(__int64))off_1808D1378)(v1325);
                    if ( v1329 )
                      ((void (__fastcall *)(void *, __int64))off_1808D13B8)(v740, v1329);
                  }
                  else
                  {
                    v742 = GetLastError();
                    v743 = v742 < 0;
                    if ( v742 > 0 )
                    {
                      v742 = (unsigned __int16)v742 | 0x80070000;
                      v743 = v742 < 0;
                    }
                    if ( !v743 )
                      v742 = -2147467259;
                  }
                  ((void (__fastcall *)(void *))off_1808D1370[0])(v740);
                  v108 = 0LL;
                  if ( v742 < 0 )
                    goto LABEL_1021;
                  v772 = v1392;
                  LODWORD(v1319) = v1390;
                  lpModuleName = v1395;
                  v1333 = (SIZE_T)v1392;
                  v1414 = 0;
                  memset_0(v1415, 0, 0x64uLL);
                  v1429 = 0;
                  memset_0(v1430, 0, 0x64uLL);
                  Size = 0LL;
                  LODWORD(v1317) = 0;
                  LODWORD(v1329) = 0;
                  v1444 = 0LL;
                  v1445 = 0;
                  memset(v1443, 0, sizeof(v1443));
                  v1433 = 0LL;
                  if ( !v772 )
                    goto LABEL_1021;
                  v773 = k;
                  v774 = ((__int64 (__fastcall *)(size_t, __int64))off_1808D1390[0])(k, 7LL);
                  if ( !v774 )
                    goto LABEL_1000;
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v774, 104LL, &v1414) )
                  {
                    Size = v1416;
                    LODWORD(v1317) = v1415[0];
                    LODWORD(v1329) = v1415[1];
                  }
                  v775 = (void *)((__int64 (__fastcall *)(size_t))off_1808D1350[0])(v773);
                  v1324 = v775;
                  if ( v775 )
                  {
                    DWORD1(v1443[0]) = v1399.m128i_i32[2] - v1399.m128i_i32[0];
                    DWORD2(v1443[0]) = v1399.m128i_i32[1] - v1399.m128i_i32[3];
                    v1381 = 0LL;
                    LODWORD(v1443[0]) = 40;
                    HIDWORD(v1443[0]) = 2097153;
                    v1325 = ((__int64 (__fastcall *)(void *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                              v775,
                              v1443,
                              0LL,
                              &v1381,
                              0LL,
                              0);
                    v776 = v1325;
                    if ( !v1325 )
                    {
                      v777 = GetLastError();
                      v778 = v777 < 0;
                      if ( v777 > 0 )
                      {
                        v777 = (unsigned __int16)v777 | 0x80070000;
                        v778 = v777 < 0;
                      }
                      if ( !v778 )
                        v777 = -2147467259;
LABEL_992:
                      ((void (__fastcall *)(void *))off_1808D1370[0])(v775);
                      v108 = 0LL;
                      if ( v777 < 0 )
                        goto LABEL_1021;
                      v806 = (CToastCenterExperienceManager *)k;
                      v807 = 0LL;
LABEL_1137:
                      off_1808D13C0(v806, (struct CSingleViewShellExperience *)(unsigned int)v1320);
                      v816 = v1337;
                      if ( !v1337 )
                      {
LABEL_1019:
                        if ( !v807 )
                          goto LABEL_1021;
                        goto LABEL_1020;
                      }
LABEL_1018:
                      ((void (__fastcall *)(LPVOID))off_1808D1378)(v816);
                      goto LABEL_1019;
                    }
                    v744 = ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(
                             v1325,
                             104LL,
                             &v1429) == 0;
                    v779 = 0LL;
                    if ( !v744 )
                      v779 = v1431;
                    DWORD2(v1433) = v1399.m128i_i32[2] - v1399.m128i_i32[0];
                    HIDWORD(v1433) = v1399.m128i_i32[3] - v1399.m128i_i32[1];
                    v1345 = v779;
                    ((void (__fastcall *)(void *, __int64))off_1808D13B8)(v775, v776);
                    off_1808D13C0((CToastCenterExperienceManager *)v775, (struct CSingleViewShellExperience *)1);
                    v780 = (void *)((__int64 (__fastcall *)(void *, LPCWSTR))off_1808D13B8)(v775, lpModuleName);
                    v781 = off_1808D1428[0];
                    v1322 = v780;
                    v782 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(void *, __int128 *, __int64))v781)(v775, &v1433, v782);
                    v777 = 0;
                    ((void (__fastcall *)(void *, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v775,
                      v1333,
                      0xFFFFFFFFLL,
                      &v1433,
                      (_DWORD)v1341,
                      0LL);
                    if ( v698 == 1 )
                    {
                      if ( !(_DWORD)v1319 )
                      {
                        LODWORD(v1328) = 0xFFFFFF;
LABEL_973:
                        v784 = 0;
                        v785 = -v1399.m128i_i32[0];
                        v786 = 0;
                        if ( v1399.m128i_i32[0] >= 0 )
                        {
                          v784 = v1399.m128i_i32[0];
                          v785 = 0;
                        }
                        v787 = -v1399.m128i_i32[1];
                        if ( v1399.m128i_i32[1] >= 0 )
                        {
                          v786 = v1399.m128i_i32[1];
                          v787 = 0;
                        }
                        v788 = DWORD2(v1433) - v785;
                        if ( DWORD2(v1433) - v785 >= (int)v1317 - v784 )
                          v788 = v1317 - v784;
                        LODWORD(v1319) = v788;
                        v789 = HIDWORD(v1433) - v787;
                        if ( HIDWORD(v1433) - v787 >= (int)v1329 - v786 )
                          v789 = v1329 - v786;
                        if ( v788 > 0 && v789 > 0 )
                        {
                          lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1433));
                          v1347 = (unsigned int)v789;
                          v1321 = (LPVOID)(int)v1317;
                          v790 = (char *)v1345 + 4 * v785 + 4 * (__int64)(DWORD2(v1433) * v787);
                          v1333 = (SIZE_T)v790;
                          v791 = (char *)(Size + 4 * (v784 + (__int64)((int)v1317 * v786)));
                          v792 = 0;
                          LODWORD(v1317) = 0;
                          v1345 = v791;
                          do
                          {
                            v793 = v1326;
                            v794 = (unsigned __int8 *)(v790 + 2);
                            v795 = (unsigned int)v788;
                            v796 = v791 - v790;
                            Size = (unsigned int)v788;
                            do
                            {
                              if ( (unsigned __int8)((*v794 + *(v794 - 2) + 2 * (unsigned int)*(v794 - 1)) >> 2) != 0xFF )
                              {
                                v797 = (unsigned __int8)~((*v794 + *(v794 - 2) + 2 * (unsigned int)*(v794 - 1)) >> 2);
                                v798 = BYTE1(v1328);
                                v794[v796] -= ~((*v794 + *(v794 - 2) + 2 * (unsigned int)*(v794 - 1)) >> 2)
                                            * (v793 - v794[v796]);
                                v799 = v794[v796 - 1];
                                v800 = (unsigned __int64)(2155905153LL * v797 * (v798 - v799)) >> 32;
                                v801 = BYTE2(v1328);
                                v794[v796 - 1] = v799 + (v800 >> 7 < 0) + (v800 >> 7);
                                v802 = v794[v796 - 2];
                                v803 = (unsigned __int64)(2155905153LL * v797 * (v801 - v802)) >> 32;
                                v794[v796 - 2] = v802 + (v803 >> 7 < 0) + (v803 >> 7);
                                v804 = v794[v796 + 1];
                                v805 = v797 * (255 - v804);
                                v792 = v1317;
                                LOBYTE(v803) = v804
                                             + ((((unsigned __int64)(2155905153LL * v805) >> 32) & 0x80000000) != 0LL)
                                             + ((int)((unsigned __int64)(2155905153LL * v805) >> 32) >> 7);
                                v795 = Size;
                                v794[v796 + 1] = v803;
                              }
                              v794 += 4;
                              v777 = v792;
                              Size = --v795;
                            }
                            while ( v795 );
                            v790 = (char *)lpModuleName + v1333;
                            v744 = v1347-- == 1;
                            v788 = (int)v1319;
                            v1333 += (SIZE_T)lpModuleName;
                            v791 = (char *)v1345 + 4 * (_QWORD)v1321;
                            LODWORD(v1317) = v792;
                            v1345 = v791;
                          }
                          while ( !v744 );
                          v775 = v1324;
                        }
                        ((void (__fastcall *)(__int64))off_1808D1378)(v1325);
                        if ( v1322 )
                          ((void (__fastcall *)(void *, LPVOID))off_1808D13B8)(v775, v1322);
                        goto LABEL_992;
                      }
                      v783 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                    }
                    else
                    {
                      v783 = -5723992;
                    }
                    LODWORD(v1328) = v783;
                    v1326 = v783;
                    goto LABEL_973;
                  }
                }
                v108 = 0LL;
LABEL_1000:
                GetLastError();
                goto LABEL_1021;
              }
              v108 = 0LL;
              if ( v1390 || (v808 = -64, v698 == 1) )
                v808 = -1;
              BYTE2(v1332) = v808;
              BYTE3(v1332) = 1;
              LOWORD(v1332) = 0;
              LODWORD(v1328) = 0;
              LODWORD(v1334) = 0;
              LODWORD(v1342) = 0;
              v1318 = (void *)((__int64 (__fastcall *)(size_t))off_1808D1350[0])(v735);
              if ( !v1318 )
                goto LABEL_1000;
              if ( v698 == 1 )
              {
                v809 = v1399.m128i_i32[2] - v1399.m128i_i32[0];
                if ( v1399.m128i_i32[2] - v1399.m128i_i32[0] <= v1398.m128i_i32[2] - v1398.m128i_i32[0] )
                  v809 = v1398.m128i_i32[2] - v1398.m128i_i32[0];
                v810 = v1399.m128i_i32[3] - v1398.m128i_i32[1];
                v811 = 0;
                LODWORD(v1317) = v809;
                v812 = 0;
                LODWORD(Src) = v1399.m128i_i32[3] - v1398.m128i_i32[1];
                if ( v1389 )
                {
                  v701 = v1398.m128i_i32[0] + v809 - v1398.m128i_i32[2];
                  v811 = v1399.m128i_i32[0] + v809 - v1399.m128i_i32[2];
                  LODWORD(v1328) = v701;
                  LODWORD(v1342) = v811;
                  v812 = v701;
                }
                v813 = v1398.m128i_i32[2] + v812 - v1398.m128i_i32[0];
                LODWORD(v1322) = v1399.m128i_i32[2] + v811 - v1399.m128i_i32[0];
                LODWORD(Ptr) = v1398.m128i_i32[3] - v1398.m128i_i32[1];
                LODWORD(v1338) = v1399.m128i_i32[1] - v1398.m128i_i32[1];
                LODWORD(v1329) = v1399.m128i_i32[3] - v1398.m128i_i32[1];
              }
              else
              {
                v809 = DWORD2(v1357);
                v810 = HIDWORD(v1357);
                v701 = _mm_cvtsi128_si32(v1398);
                LODWORD(Ptr) = _mm_cvtsi128_si32(_mm_srli_si128(v1398, 12));
                LODWORD(v1334) = _mm_cvtsi128_si32(_mm_srli_si128(v1398, 4));
                LODWORD(v1329) = _mm_cvtsi128_si32(_mm_srli_si128(v1399, 12));
                v813 = _mm_cvtsi128_si32(_mm_srli_si128(v1398, 8));
                LODWORD(v1338) = _mm_cvtsi128_si32(_mm_srli_si128(v1399, 4));
                LODWORD(Src) = HIDWORD(v1357);
                LODWORD(v1317) = DWORD2(v1357);
                LODWORD(v1328) = v701;
                LODWORD(v1322) = _mm_cvtsi128_si32(_mm_srli_si128(v1399, 8));
                LODWORD(v1342) = _mm_cvtsi128_si32(v1399);
              }
              v1439[0] = 40;
              v1382 = 0LL;
              v1439[2] = -v810;
              memset(&v1439[4], 0, 28);
              v1439[1] = v809;
              v1439[3] = 2097153;
              v814 = (void *)((__int64 (__fastcall *)(void *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                               v1318,
                               v1439,
                               0LL,
                               &v1382,
                               0LL,
                               0);
              v1337 = v814;
              if ( !v814 )
              {
                GetLastError();
                v807 = v1318;
                v108 = 0LL;
LABEL_1020:
                ((void (__fastcall *)(void *))off_1808D1370[0])(v807);
LABEL_1021:
                if ( pcchLength )
                  ((void (__fastcall *)(size_t))off_1808D1378)(pcchLength);
                goto LABEL_1023;
              }
              ((void (__fastcall *)(void *, void *))off_1808D13B8)(v1318, v814);
              if ( v698 == 1 && pcchLength )
              {
                v1436 = 0LL;
                v1438 = (int)Src;
                v1437 = v809;
                ((void (__fastcall *)(void *, __int64 *))off_1808D1428[0])(v1318, &v1436);
              }
              LODWORD(v1325) = v1390;
              lpModuleName = v1394;
              Size = (size_t)v1391;
              v1411 = 0;
              memset_0(v1412, 0, 0x64uLL);
              v1420 = 0;
              memset_0(v1421, 0, 0x64uLL);
              v1333 = 0LL;
              LODWORD(v1331) = 0;
              LODWORD(v1319) = 0;
              memset(v1446, 0, sizeof(v1446));
              v1447 = 0LL;
              v1448 = 0;
              v1435 = 0LL;
              if ( !Size )
                goto LABEL_1016;
              v815 = ((__int64 (__fastcall *)(void *, __int64))off_1808D1390[0])(v1318, 7LL);
              if ( v815 )
              {
                if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v815, 104LL, &v1411) )
                {
                  v1333 = v1413;
                  LODWORD(v1331) = v1412[0];
                  LODWORD(v1319) = v1412[1];
                }
                v1321 = (LPVOID)((__int64 (__fastcall *)(void *))off_1808D1350[0])(v1318);
                if ( v1321 )
                {
                  v1383 = 0LL;
                  DWORD1(v1446[0]) = v813 - v701;
                  DWORD2(v1446[0]) = (_DWORD)v1334 - Ptr;
                  LODWORD(v1446[0]) = 40;
                  HIDWORD(v1446[0]) = 2097153;
                  v832 = (void *)((__int64 (__fastcall *)(LPVOID, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                   v1321,
                                   v1446,
                                   0LL,
                                   &v1383,
                                   0LL,
                                   0);
                  v1324 = v832;
                  if ( v832 )
                  {
                    v744 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1808D13A8[0])(v832, 104LL, &v1420) == 0;
                    v835 = 0LL;
                    if ( !v744 )
                      v835 = v1422;
                    DWORD2(v1435) = v813 - (_DWORD)v1328;
                    v836 = (CToastCenterExperienceManager *)v1321;
                    v1345 = v835;
                    HIDWORD(v1435) = Ptr - (_DWORD)v1334;
                    ((void (__fastcall *)(LPVOID, LPVOID))off_1808D13B8)(v1321, v1324);
                    off_1808D13C0(v836, (struct CSingleViewShellExperience *)1);
                    v837 = (const WCHAR *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                            v836,
                                            lpModuleName);
                    v838 = off_1808D1428[0];
                    v1353 = v837;
                    v839 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(LPVOID, __int128 *, __int64))v838)(v1321, &v1435, v839);
                    v833 = 0;
                    ((void (__fastcall *)(LPVOID, size_t, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v1321,
                      Size,
                      0xFFFFFFFFLL,
                      &v1435,
                      (_DWORD)v1341,
                      0LL);
                    if ( v698 == 1 )
                    {
                      if ( (_DWORD)v1325 )
                        LODWORD(Ptr) = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                      else
                        LODWORD(Ptr) = 0xFFFFFF;
                    }
                    else
                    {
                      LODWORD(Ptr) = -5723992;
                    }
                    v840 = 0;
                    v841 = -(int)v1328;
                    v842 = 0;
                    if ( (int)v1328 >= 0 )
                    {
                      v840 = (int)v1328;
                      v841 = 0;
                    }
                    v843 = -(int)v1334;
                    LODWORD(v1325) = v840;
                    if ( (int)v1334 >= 0 )
                    {
                      v842 = (int)v1334;
                      v843 = 0;
                    }
                    v844 = (_DWORD)v1331 - v840;
                    v845 = DWORD2(v1435) - v841;
                    if ( DWORD2(v1435) - v841 >= v844 )
                      v845 = v844;
                    LODWORD(v1328) = v845;
                    v846 = HIDWORD(v1435) - v843;
                    if ( HIDWORD(v1435) - v843 >= (int)v1319 - v842 )
                      v846 = (_DWORD)v1319 - v842;
                    if ( v845 > 0 && v846 > 0 )
                    {
                      v847 = (unsigned int)v1328;
                      v848 = Ptr;
                      lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1435));
                      v1347 = (unsigned int)v846;
                      v1331 = (unsigned __int16 *)(int)v1331;
                      v849 = (unsigned __int8 *)v1345 + 4 * v841 + 4 * (__int64)(v843 * DWORD2(v1435));
                      v1345 = v849;
                      LODWORD(v1319) = 0;
                      v850 = v1333 + 4 * ((int)v1325 + (__int64)((int)v1331 * v842));
                      v1333 = v850;
                      do
                      {
                        v851 = (int)v1319;
                        v852 = v849 + 2;
                        Size = v847;
                        v853 = v850 - (_QWORD)v849;
                        v854 = v847;
                        do
                        {
                          if ( (unsigned __int8)((*v852 + *(v852 - 2) + 2 * (unsigned int)*(v852 - 1)) >> 2) != 0xFF )
                          {
                            v855 = (unsigned __int8)~((*v852 + *(v852 - 2) + 2 * (unsigned int)*(v852 - 1)) >> 2);
                            v856 = BYTE1(Ptr);
                            v852[v853] -= ~((*v852 + *(v852 - 2) + 2 * (unsigned int)*(v852 - 1)) >> 2)
                                        * (v848 - v852[v853]);
                            v857 = v852[v853 - 1];
                            v858 = (unsigned __int64)(2155905153LL * v855 * (v856 - v857)) >> 32;
                            v859 = BYTE2(Ptr);
                            v852[v853 - 1] = v857 + (v858 >> 7 < 0) + (v858 >> 7);
                            v860 = v852[v853 - 2];
                            v861 = (unsigned __int64)(2155905153LL * v855 * (v859 - v860)) >> 32;
                            v852[v853 - 2] = v860 + (v861 >> 7 < 0) + (v861 >> 7);
                            v854 = Size;
                            v852[v853 + 1] += ((((unsigned __int64)(2155905153LL * v855 * (255 - v852[v853 + 1])) >> 32) & 0x80000000) != 0LL)
                                            + ((int)((unsigned __int64)(2155905153LL * v855 * (255 - v852[v853 + 1])) >> 32) >> 7);
                          }
                          v852 += 4;
                          v833 = v851;
                          Size = --v854;
                        }
                        while ( v854 );
                        v849 = (unsigned __int8 *)v1345 + (_QWORD)lpModuleName;
                        v744 = v1347-- == 1;
                        v1345 = (char *)v1345 + (_QWORD)lpModuleName;
                        LODWORD(v1319) = v851;
                        v850 = v1333 + 4LL * (_QWORD)v1331;
                        v1333 = v850;
                      }
                      while ( !v744 );
                      v698 = dwBytes;
                      v809 = v1317;
                    }
                    ((void (__fastcall *)(LPVOID))off_1808D1378)(v1324);
                    if ( v1353 )
                      ((void (__fastcall *)(LPVOID, LPCWSTR))off_1808D13B8)(v1321, v1353);
                  }
                  else
                  {
                    v833 = GetLastError();
                    v834 = v833 < 0;
                    if ( v833 > 0 )
                    {
                      v833 = (unsigned __int16)v833 | 0x80070000;
                      v834 = v833 < 0;
                    }
                    if ( !v834 )
                      v833 = -2147467259;
                  }
                  ((void (__fastcall *)(LPVOID))off_1808D1370[0])(v1321);
                  if ( v833 < 0 )
                    goto LABEL_1016;
                  v862 = v1392;
                  LODWORD(v1325) = v1390;
                  v1408 = 0;
                  v1353 = v1395;
                  lpModuleName = (LPCWSTR)v1392;
                  memset_0(v1409, 0, 0x64uLL);
                  v1423 = 0;
                  memset_0(v1424, 0, 0x64uLL);
                  Size = 0LL;
                  LODWORD(v1319) = 0;
                  LODWORD(v1331) = 0;
                  v1450 = 0LL;
                  v1451 = 0;
                  memset(v1449, 0, sizeof(v1449));
                  v1434 = 0LL;
                  if ( !v862 )
                    goto LABEL_1016;
                  v807 = v1318;
                  v863 = ((__int64 (__fastcall *)(void *, __int64))off_1808D1390[0])(v1318, 7LL);
                  if ( !v863 )
                  {
                    GetLastError();
                    goto LABEL_1017;
                  }
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v863, 104LL, &v1408) )
                  {
                    Size = v1410;
                    LODWORD(v1319) = v1409[0];
                    LODWORD(v1331) = v1409[1];
                  }
                  v1321 = (LPVOID)((__int64 (__fastcall *)(void *))off_1808D1350[0])(v807);
                  v864 = (CToastCenterExperienceManager *)v1321;
                  if ( v1321 )
                  {
                    DWORD1(v1449[0]) = (_DWORD)v1322 - (_DWORD)v1342;
                    DWORD2(v1449[0]) = (_DWORD)v1338 - v1329;
                    v1385[0] = 0LL;
                    LODWORD(v1449[0]) = 40;
                    HIDWORD(v1449[0]) = 2097153;
                    v865 = (void *)((__int64 (__fastcall *)(LPVOID, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                     v1321,
                                     v1449,
                                     0LL,
                                     v1385,
                                     0LL,
                                     0);
                    v1324 = v865;
                    if ( !v865 )
                    {
                      v866 = GetLastError();
                      v867 = v866 < 0;
                      if ( v866 > 0 )
                      {
                        v866 = (unsigned __int16)v866 | 0x80070000;
                        v867 = v866 < 0;
                      }
                      if ( !v867 )
                        v866 = -2147467259;
                      goto LABEL_1132;
                    }
                    v744 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1808D13A8[0])(v865, 104LL, &v1423) == 0;
                    v868 = 0LL;
                    if ( !v744 )
                      v868 = v1425;
                    DWORD2(v1434) = (_DWORD)v1322 - (_DWORD)v1342;
                    HIDWORD(v1434) = v1329 - (_DWORD)v1338;
                    v1333 = v868;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808D13B8)(v864, v1324);
                    off_1808D13C0(v864, (struct CSingleViewShellExperience *)1);
                    v869 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                     v864,
                                     v1353);
                    v870 = off_1808D1428[0];
                    v1334 = v869;
                    v871 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(LPVOID, __int128 *, __int64))v870)(v1321, &v1434, v871);
                    v872 = 0;
                    ((void (__fastcall *)(LPVOID, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v1321,
                      lpModuleName,
                      0xFFFFFFFFLL,
                      &v1434,
                      (_DWORD)v1341,
                      0LL);
                    if ( v698 == 1 )
                    {
                      if ( !(_DWORD)v1325 )
                      {
                        LODWORD(v1328) = 0xFFFFFF;
LABEL_1113:
                        v874 = 0;
                        v875 = (int)v1319;
                        v876 = -(int)v1342;
                        if ( (int)v1342 >= 0 )
                        {
                          v874 = (int)v1342;
                          v876 = 0;
                        }
                        v877 = -(int)v1338;
                        LODWORD(v1329) = v874;
                        if ( (int)v1338 >= 0 )
                        {
                          v877 = 0;
                          v872 = (int)v1338;
                        }
                        LODWORD(v1325) = v872;
                        v878 = (_DWORD)v1319 - v874;
                        v879 = DWORD2(v1434) - v876;
                        if ( DWORD2(v1434) - v876 >= v878 )
                          v879 = v878;
                        LODWORD(v1322) = v879;
                        v880 = HIDWORD(v1434) - v877;
                        if ( HIDWORD(v1434) - v877 >= (int)v1331 - v872 )
                          v880 = (_DWORD)v1331 - v872;
                        v866 = 0;
                        if ( v879 > 0 && v880 > 0 )
                        {
                          v881 = (unsigned int)v1322;
                          v882 = v1326;
                          v1353 = (LPCWSTR)(4LL * SDWORD2(v1434));
                          v1347 = (unsigned int)v880;
                          lpModuleName = (LPCWSTR)(int)v1319;
                          LODWORD(v1319) = 0;
                          v883 = (char *)(v1333 + 4 * (v876 + (__int64)(v877 * DWORD2(v1434))));
                          v884 = (int)v1325 * v875;
                          v885 = 0;
                          v1333 = (SIZE_T)v883;
                          v886 = (char *)(Size + 4 * ((int)v1329 + v884));
                          v1345 = v886;
                          do
                          {
                            Size = v881;
                            v887 = v886 - v883;
                            v888 = (unsigned __int8 *)(v883 + 2);
                            v889 = v881;
                            do
                            {
                              if ( (unsigned __int8)((*v888 + *(v888 - 2) + 2 * (unsigned int)*(v888 - 1)) >> 2) != 0xFF )
                              {
                                v890 = (unsigned __int8)~((*v888 + *(v888 - 2) + 2 * (unsigned int)*(v888 - 1)) >> 2);
                                v891 = BYTE1(v1328);
                                v888[v887] -= ~((*v888 + *(v888 - 2) + 2 * (unsigned int)*(v888 - 1)) >> 2)
                                            * (v882 - v888[v887]);
                                v892 = v888[v887 - 1];
                                v893 = (unsigned __int64)(2155905153LL * v890 * (v891 - v892)) >> 32;
                                v894 = BYTE2(v1328);
                                v888[v887 - 1] = v892 + (v893 >> 7 < 0) + (v893 >> 7);
                                v895 = v888[v887 - 2];
                                v896 = (unsigned __int64)(2155905153LL * v890 * (v894 - v895)) >> 32;
                                v888[v887 - 2] = v895 + (v896 >> 7 < 0) + (v896 >> 7);
                                v897 = v888[v887 + 1];
                                v898 = v890 * (255 - v897);
                                v885 = (int)v1319;
                                LOBYTE(v896) = v897
                                             + ((((unsigned __int64)(2155905153LL * v898) >> 32) & 0x80000000) != 0LL)
                                             + ((int)((unsigned __int64)(2155905153LL * v898) >> 32) >> 7);
                                v889 = Size;
                                v888[v887 + 1] = v896;
                              }
                              v888 += 4;
                              v866 = v885;
                              Size = --v889;
                            }
                            while ( v889 );
                            v883 = (char *)v1353 + v1333;
                            v744 = v1347-- == 1;
                            v1333 += (SIZE_T)v1353;
                            LODWORD(v1319) = v885;
                            v886 = (char *)v1345 + 4 * (_QWORD)lpModuleName;
                            v1345 = v886;
                          }
                          while ( !v744 );
                          v698 = dwBytes;
                          v82 = v1313;
                          v809 = v1317;
                        }
                        ((void (__fastcall *)(LPVOID))off_1808D1378)(v1324);
                        if ( v1334 )
                          ((void (__fastcall *)(LPVOID, LPVOID))off_1808D13B8)(v1321, v1334);
LABEL_1132:
                        ((void (__fastcall *)(LPVOID))off_1808D1370[0])(v1321);
                        if ( v866 >= 0 )
                        {
                          v807 = v1318;
                          v806 = (CToastCenterExperienceManager *)k;
                          if ( v698 == 1 )
                            ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, int))off_1808D1340[0])(
                              k,
                              v1398.m128i_u32[0],
                              v1398.m128i_u32[1],
                              v809,
                              (_DWORD)Src,
                              v1318,
                              0,
                              0,
                              13369376);
                          else
                            ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, unsigned __int32, _DWORD, _DWORD))off_1808D1380[0])(
                              k,
                              (unsigned int)v1357,
                              DWORD1(v1357),
                              v809,
                              (_DWORD)Src,
                              v1318,
                              0,
                              0,
                              v809,
                              (_DWORD)Src,
                              (_DWORD)v1332);
                          v108 = 0LL;
                          goto LABEL_1137;
                        }
                        goto LABEL_1016;
                      }
                      v873 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                    }
                    else
                    {
                      v873 = -5723992;
                    }
                    LODWORD(v1328) = v873;
                    v1326 = v873;
                    goto LABEL_1113;
                  }
                }
              }
              GetLastError();
LABEL_1016:
              v807 = v1318;
LABEL_1017:
              v816 = v1337;
              v108 = 0LL;
              goto LABEL_1018;
            }
          }
          else
          {
            v699 = 0;
          }
          if ( v698 != 1 )
            goto LABEL_913;
          goto LABEL_911;
        }
        v1347 = 0LL;
        v1365 = 0LL;
        v1370 = 0LL;
        v1321 = 0LL;
        Src = 0LL;
        v1349 = 0;
        v595 = 0;
        v1324 = 0LL;
        v1362 = 0;
        memset(v1386, 0, sizeof(v1386));
        if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *, unsigned int *))off_1808D13E0[0])(
               8LL,
               &v1349,
               0LL,
               &v1362,
               v1312) )
        {
          v597 = MemoryAlloc(2LL * v1362);
          SP<unsigned long,SP_MEM<unsigned long>>::operator=(&Src, v597);
          if ( !SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&Src)
            || (v598 = MemoryAlloc(4LL * (v1349 + 1)),
                SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1324, v598),
                (Ptr = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1324)) == 0) )
          {
            v595 = -2147024882;
            goto LABEL_712;
          }
          v599 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&Src);
          if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1808D13E0[0])(
                 8LL,
                 &v1349,
                 v599,
                 &v1362) )
          {
            if ( v1349 )
            {
              v600 = (_DWORD *)Ptr;
              for ( ii = 0; ii < v1349; ++ii )
              {
                *v600 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808D13F0)(v599, 0LL);
                v602 = -1LL;
                do
                  ++v602;
                while ( *(_WORD *)(v599 + 2 * v602) );
                ++v600;
                v599 += 2 * v602 + 2;
              }
              LOBYTE(v474) = dwBytes;
              Ptr = (SIZE_T)v600;
            }
            *(_DWORD *)Ptr = 1033;
            v1347 = (SIZE_T)v1324;
            LODWORD(v108) = v1349 + 1;
            v1324 = 0LL;
LABEL_712:
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1324);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&Src);
            v603 = 0;
            if ( v595 < 0 )
              goto LABEL_767;
            v604 = 0;
            LODWORD(Src) = 0;
            if ( (_DWORD)v108 )
            {
              v605 = (_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1347);
              v608 = v603 + 1;
LABEL_715:
              v609 = v603;
              while ( *v605 != *v606 )
              {
                v609 += v608;
                ++v606;
                if ( v609 >= 0x26 )
                {
                  v607 += v608;
                  ++v605;
                  if ( v607 >= (unsigned int)v108 )
                    goto LABEL_721;
                  v606 = dword_1807D4A70;
                  goto LABEL_715;
                }
              }
              v604 = v609;
              LODWORD(Src) = v609;
            }
LABEL_721:
            LODWORD(v1317) = v603;
            v610 = dword_1807D4A70[v604];
            memset(v1458, 0, sizeof(v1458));
            if ( ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64))off_1808D13E8[0])(v610, v1478, 85LL)
              && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *, __int64))off_1808D13D0[0])(v1478, 88LL, v1458, 16LL) > 0 )
            {
              LODWORD(v1317) = (HIDWORD(v1458[0]) >> 27) & 1;
              v604 = (unsigned int)Src;
            }
            memset_0(v1388, 0, 0x90uLL);
            v611 = L"Segoe UI Light";
            v612 = (const wchar_t **)&v1387;
            v613 = 19LL;
            do
            {
              *v612 = v611;
              v614 = -1LL;
              do
                ++v614;
              while ( v611[v614] );
              ++v612;
              v611 += v614 + 1;
              --v613;
            }
            while ( v613 );
            v615 = 3LL * v604;
            v1345 = *(void **)&v1388[8 * *((unsigned __int8 *)&unk_1807D2D40 + v615) - 8];
            Size = *(_QWORD *)&v1388[8 * (unsigned __int8)byte_1807D2D41[v615] - 8];
            v1331 = *(unsigned __int16 **)&v1388[8 * (unsigned __int8)byte_1807D2D42[v615] - 8];
            v616 = (const WCHAR *)MemoryAlloc(0x1C90uLL);
            lpModuleName = v616;
            if ( !v616 )
              goto LABEL_729;
            v617 = 0;
            v618 = (char *)v616 + 7;
            v619 = -1;
            v620 = (unsigned __int8 *)&unk_1807D2DD2;
            v621 = 0;
            v622 = 0;
            v623 = 914LL;
            do
            {
              v624 = *(v620 - 1) | (*(v620 - 2) << 8);
              v625 = v620[2] << 8;
              v626 = *v620;
              v620 += 8;
              v627 = *(v620 - 7) | ((v626 | (v624 << 8)) << 8);
              v628 = v622 ^ v627;
              v629 = *(v620 - 3) | ((*(v620 - 4) | ((*(v620 - 5) | v625) << 8)) << 8);
              v630 = v622 ^ v627 ^ v621 ^ v629 ^ 0xAC987321;
              v631 = v628 ^ (__ROR4__(v630, 22) + 4991 * __ROR4__(v630 + 1419157410, 27));
              v632 = v630 ^ (43881 * __ROR4__(v631 + 133239679, 9) - __ROR4__(v631, 30));
              v633 = v631 ^ (24670 * v632 - (v632 >> 13) - 123127970);
              v634 = v632 ^ (2033 * __ROR4__(v633 ^ 0xAB69, 26) - __ROR4__(v633, 30));
              v635 = v633 ^ (133239679 - (v634 ^ 0xAB69605E));
              v636 = v634 ^ (43881 * (v635 ^ 0x137F)) ^ __ROR4__(v635, 6);
              v637 = v635 ^ (__ROR4__(v636, 30) + 24670 * __ROR4__(v636 + 133239679, 15));
              v638 = v636 ^ (2033 * __ROR4__(v637 + 1419157410, 14) - __ROR4__(v637, 24));
              v639 = v637 ^ __ROR4__(v638, 10) ^ (4991 * __ROR4__(v638 ^ 0xAB69605E, 12));
              v640 = v638 ^ (v639 >> 10) ^ (43881 * (v639 ^ 0x7F1));
              v641 = v639 ^ (2033 * (__ROR4__(~v640, 5) + 24670));
              v642 = v641 ^ (((v640 ^ (v641 - 2033) ^ 0xAB69605E) >> 2)
                           + 4991 * __ROR4__(v640 ^ (v641 - 2033) ^ 0xAB6967AF, 30));
              v643 = v640 ^ (v641 - 2033) ^ 0xAB69605E ^ (__ROR4__(v642, 25) + 43881 * __ROR4__(v642 - 133239679, 6));
              v644 = v642 ^ (24670 * (v643 ^ 0x137F) + __ROR4__(v643, 9));
              v645 = v643 ^ (__ROR4__(v644, 25) + 2033 * __ROR4__(v644 ^ 0xAB69, 27));
              v646 = v644 ^ v645 ^ 0xAC987321;
              v647 = v645 ^ (4991 * __ROR4__(v646, 3) - 219010071);
              v648 = v646 ^ (24670 * __ROR4__(v647 - 133239679, 1) - __ROR4__(v647, 6));
              v649 = v647 ^ (__ROR4__(v648, 18) + 2033 * __ROR4__(v648 - 1419157410, 29));
              v650 = v648 ^ (4991 * __ROR4__(v649 - 1419157410, 17) - __ROR4__(v649, 14));
              v651 = v649 ^ (v650 >> 3) ^ (43881 * (v650 ^ 0x605E));
              v622 = v617 ^ v650 ^ __ROR4__(v651, 30) ^ (24670 * __ROR4__(v651 ^ 0x7F1137F, 28));
              v621 = v651 ^ v619;
              *(v618 - 4) = v622;
              v617 = v627;
              *v618 = v651 ^ v619;
              v619 = v629;
              *(v618 - 5) = __ROR4__(v622, 8);
              v618 += 8;
              *(v618 - 9) = __ROR4__(v621, 8);
              *(v618 - 14) = __ROR4__(v622, 16);
              *(v618 - 10) = __ROR4__(v621, 16);
              *(v618 - 15) = __ROR4__(v622, 24);
              *(v618 - 11) = __ROR4__(v621, 24);
              --v623;
            }
            while ( v623 );
            LOBYTE(v474) = dwBytes;
            v593 = (int)v1322;
            v652 = 0LL;
            v653 = 0LL;
            do
            {
              v654 = (__m128)_mm_loadu_si128((const __m128i *)&lpModuleName[v652]);
              v652 += 8LL;
              v655 = (__m128i)_mm_xor_ps(v654, v653);
              v653 = (__m128)v655;
            }
            while ( v652 < 3656 );
            v656 = (__m128i)_mm_xor_ps((__m128)v655, (__m128)_mm_srli_si128(v655, 8));
            v657 = (__m128i)_mm_xor_ps((__m128)v656, (__m128)_mm_srli_si128(v656, 4));
            v658 = (__m128i)_mm_xor_ps((__m128)v657, (__m128)_mm_srli_si128(v657, 2));
            if ( (unsigned __int8)_mm_cvtsi128_si32((__m128i)_mm_xor_ps((__m128)v658, (__m128)_mm_srli_si128(v658, 1))) == 127LL )
            {
              v1370 = 7312LL;
              v595 = 0;
              v1365 = lpModuleName;
              v659 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1365);
              v661 = (int)Src;
              v662 = (__int64 *)v1386;
              v663 = v659;
              v664 = 6LL;
              do
              {
                v665 = v660;
                do
                {
                  if ( v661 == v665 )
                    *v662 = v663;
                  v666 = -1LL;
                  do
                    ++v666;
                  while ( *(_BYTE *)(v663 + v666) != (_BYTE)v660 );
                  v663 += v666 + 1;
                  ++v665;
                }
                while ( v665 < 0x26 );
                ++v662;
                --v664;
              }
              while ( v664 );
              v667 = MemoryAlloc(0x18uLL);
              SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1321, v667);
              v668 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1321);
              lpModuleName = (LPCWSTR)v668;
              if ( !v668 )
              {
LABEL_729:
                v595 = -2147024882;
                goto LABEL_767;
              }
              *(_OWORD *)v668 = 0LL;
              *(_QWORD *)(v668 + 16) = 0LL;
              v669 = 0;
              while ( 2 )
              {
                v670 = 0;
                v671 = word_1807D2DB8;
                while ( *((_WORD *)&v1320 + v669) != *v671 )
                {
                  ++v670;
                  ++v671;
                  if ( v670 >= 6 )
                    goto LABEL_757;
                }
                v672 = -1LL;
                v673 = (void *)*((_QWORD *)v1386 + v670);
                v1324 = v673;
                do
                  ++v672;
                while ( *((_BYTE *)v673 + v672) );
                v674 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD, _QWORD, _DWORD))off_1808D1400[0])(
                         65001LL,
                         0LL,
                         v673,
                         (unsigned int)(v672 + 1),
                         0LL,
                         0);
                LODWORD(v1319) = v674;
                if ( !v674 )
                {
                  v678 = GetLastError();
                  v595 = v678;
                  if ( v678 > 0 )
                    v595 = (unsigned __int16)v678 | 0x80070000;
                  if ( v595 >= 0 )
                    v595 = -2147467259;
                  goto LABEL_767;
                }
                v675 = MemoryAlloc(2LL * v674);
                *(_QWORD *)&lpModuleName[4 * v669] = v675;
                if ( !v675 )
                  goto LABEL_729;
                v676 = -1LL;
                do
                  ++v676;
                while ( *((_BYTE *)v1324 + v676) );
                if ( !((unsigned int (__fastcall *)(__int64, _QWORD, LPVOID, _QWORD, LPVOID, _DWORD))off_1808D1400[0])(
                        65001LL,
                        0LL,
                        v1324,
                        (unsigned int)(v676 + 1),
                        v675,
                        (_DWORD)v1319) )
                {
                  v677 = GetLastError();
                  v595 = v677;
                  if ( v677 > 0 )
                    v595 = (unsigned __int16)v677 | 0x80070000;
                  if ( v595 >= 0 )
                    v595 = -2147467259;
                  goto LABEL_767;
                }
LABEL_757:
                if ( ++v669 < 3 )
                  continue;
                break;
              }
              v1333 = (SIZE_T)v1321;
              v1389 = v1317;
              v1321 = 0LL;
            }
            else
            {
              v595 = -1073425151;
              MemoryFree((void *)lpModuleName);
            }
LABEL_767:
            v681 = (void **)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1321);
            if ( v681 )
            {
              v682 = 3LL;
              v1324 = (LPVOID)3;
              do
              {
                v683 = *v681;
                if ( *v681 )
                {
                  v684 = -1LL;
                  do
                    ++v684;
                  while ( *(_WORD *)&v683[2 * v684] != v680 );
                  for ( jj = 2 * v684 + 2; jj; jj -= v679 )
                  {
                    *v683 = v680;
                    v683 += v679;
                  }
                  MemoryFree(*v681);
                  v682 = (__int64)v1324;
                  v680 = 0;
                  v679 = 1LL;
                }
                ++v681;
                v682 -= v679;
                v1324 = (LPVOID)v682;
              }
              while ( v682 );
            }
            v108 = 0LL;
            if ( SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1365) )
            {
              v686 = (_BYTE *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1365);
              for ( kk = v1370; kk; kk -= v687 )
              {
                *v686 = 0;
                v686 += v687;
              }
            }
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1321);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1365);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1347);
            if ( v595 < 0 )
              goto LABEL_805;
            v689 = (void **)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1333);
            v1391 = *v689;
            v1392 = v689[1];
            v1393 = v689[2];
            v1384 = 0LL;
            LODWORD(v1384) = 16;
            if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1808D14A8[0])(
                    66LL,
                    0LL,
                    &v1384,
                    0LL) )
            {
              v690 = GetLastError();
              v595 = v690;
              if ( v690 > 0 )
                v595 = (unsigned __int16)v690 | 0x80070000;
              v1390 = 0;
              if ( v595 >= 0 )
                v595 = -2147467259;
              goto LABEL_805;
            }
            v1390 = BYTE4(v1384) & 1;
            if ( v593 == 1 )
            {
              LODWORD(v1338) = 42;
            }
            else
            {
              if ( v593 != 2 )
              {
                if ( v593 == 3 )
                {
                  LODWORD(v1338) = 225;
                  LODWORD(v1342) = 225;
                }
LABEL_793:
                v691 = 96;
                LODWORD(Src) = 96;
                memset_0(v1468, 0, 0xDCuLL);
                v1469 = 220;
                v595 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1808D1420[0])(0LL, 0xFFFFFFFFLL, v1468) )
                {
                  v691 = v1470;
                  LODWORD(v1332) = v1471;
                  LODWORD(v1329) = v1472;
                  if ( v1470 < 0x60u )
                    v691 = 96;
                  LODWORD(Src) = v691;
                }
                v692 = v1331;
                if ( v593 == 1 )
                  v692 = (const WCHAR *)v1345;
                lpModuleName = v692;
                memset_0(v1459, 0, 0x5CuLL);
                v1347 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
                if ( v1347 )
                {
                  v702 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                           (unsigned int)v1338,
                           v691,
                           72LL);
                  v1459[4] = 400;
                  v1459[0] = -v702;
                  v1460 = 5;
                  StringCchCopyW((char *)v1461, 32LL, (char *)lpModuleName);
                  v703 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1459);
                  if ( v703 )
                  {
                    v1394 = (const WCHAR *)v703;
                  }
                  else
                  {
                    v595 = GetLastError();
                    v704 = v595 < 0;
                    if ( v595 > 0 )
                    {
                      v595 = (unsigned __int16)v595 | 0x80070000;
                      v704 = v595 < 0;
                    }
                    if ( !v704 )
                      v595 = -2147467259;
                  }
                  ((void (__fastcall *)(_QWORD, SIZE_T))off_1808D14A0[0])(0LL, v1347);
                }
                else
                {
                  v595 = GetLastError();
                  v693 = v595 < 0;
                  if ( v595 > 0 )
                  {
                    v595 = (unsigned __int16)v595 | 0x80070000;
                    v693 = v595 < 0;
                  }
                  if ( !v693 )
                    goto LABEL_803;
                }
                if ( v595 < 0 )
                  goto LABEL_804;
                v705 = v1331;
                if ( v593 == 1 )
                  v705 = (unsigned __int16 *)v1345;
                v1331 = v705;
                memset_0(v1462, 0, 0x5CuLL);
                v595 = 0;
                lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(
                                          0LL,
                                          0LL,
                                          1027LL);
                if ( !lpModuleName )
                {
                  v706 = GetLastError();
                  v108 = 0LL;
                  v595 = v706;
                  if ( v706 > 0 )
                    v595 = (unsigned __int16)v706 | 0x80070000;
                  if ( v595 >= 0 )
                    v595 = -2147467259;
                  goto LABEL_805;
                }
                v707 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)((unsigned int)v1342, v691, 72LL);
                v1462[4] = 400;
                v1462[0] = -v707;
                v1463 = 5;
                StringCchCopyW((char *)v1464, 32LL, (char *)v1331);
                v708 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1462);
                v108 = 0LL;
                if ( v708 )
                {
                  v1395 = (const WCHAR *)v708;
                }
                else
                {
                  v709 = GetLastError();
                  v595 = v709;
                  if ( v709 > 0 )
                    v595 = (unsigned __int16)v709 | 0x80070000;
                  if ( v595 >= 0 )
                    v595 = -2147467259;
                }
                ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808D14A0[0])(0LL, lpModuleName);
                if ( v595 < 0 )
                  goto LABEL_805;
                v710 = 0;
                if ( v593 != 1 )
                {
                  if ( v593 == 2 )
                  {
                    v710 = 0;
                    LODWORD(v108) = (int)v1332 / 4;
LABEL_850:
                    *((_QWORD *)&v1357 + 1) = __PAIR64__(v710, (unsigned int)v108);
                    if ( v593 == 1 )
                    {
                      v711 = 150;
                      LODWORD(v1341) = 42;
                      LODWORD(v1334) = 150;
                      LODWORD(v1328) = 32;
                    }
                    else
                    {
                      v711 = 0;
                      if ( (unsigned int)(v593 - 2) <= 1 )
                      {
                        LODWORD(v1341) = 0;
                        LODWORD(v1334) = 0;
                        LODWORD(v1328) = 0;
                      }
                    }
                    v712 = (_DWORD)v108 - v711;
                    v713 = v1391;
                    v1399.m128i_i32[2] = v712;
                    v1398.m128i_i32[2] = v712;
                    lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(__int64, const WCHAR *))off_1808D13B8)(
                                              v1325,
                                              v1394);
                    LODWORD(v1319) = ((__int64 (__fastcall *)(__int64, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                                       v1325,
                                       v713,
                                       0xFFFFFFFFLL,
                                       &v1398,
                                       3152,
                                       0LL);
                    v595 = (_DWORD)v1319 == 0 ? 0x80004005 : 0;
                    if ( lpModuleName )
                      ((void (__fastcall *)(__int64, LPCWSTR))off_1808D13B8)(v1325, lpModuleName);
                    if ( !(_DWORD)v1319 )
                      goto LABEL_804;
                    v714 = v1392;
                    lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(__int64, const WCHAR *))off_1808D13B8)(
                                              v1325,
                                              v1395);
                    LODWORD(v1319) = ((__int64 (__fastcall *)(__int64, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                                       v1325,
                                       v714,
                                       0xFFFFFFFFLL,
                                       &v1399,
                                       3152,
                                       0LL);
                    v595 = (_DWORD)v1319 == 0 ? 0x80004005 : 0;
                    if ( lpModuleName )
                      ((void (__fastcall *)(__int64, LPCWSTR))off_1808D13B8)(v1325, lpModuleName);
                    if ( !(_DWORD)v1319 )
                      goto LABEL_804;
                    if ( (unsigned int)(v593 - 2) <= 1 )
                    {
                      v712 = v1399.m128i_i32[2];
                      if ( v1398.m128i_i32[2] > v1399.m128i_i32[2] )
                        v712 = v1398.m128i_i32[2];
                    }
                    if ( v1389 )
                    {
                      off_1808D1490(
                        (CToastCenterExperienceManager *)&v1398,
                        (struct CSingleViewShellExperience *)(unsigned int)(v712 - v1398.m128i_i32[2]));
                      v715 = (unsigned int)(v712 - v1399.m128i_i32[2]);
                    }
                    else
                    {
                      off_1808D1490(
                        (CToastCenterExperienceManager *)&v1398,
                        (struct CSingleViewShellExperience *)(unsigned int)v1334);
                      v715 = (unsigned int)v1334;
                    }
                    ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1808D1490)(
                      &v1399,
                      v715,
                      (unsigned int)((_DWORD)v1328 + v1398.m128i_i32[3]));
                    if ( (unsigned int)(v593 - 2) <= 1 )
                    {
                      *((_QWORD *)&v1357 + 1) = __PAIR64__(v1399.m128i_u32[3], v712);
                      v1397 = -5723992;
                    }
                    else if ( v593 == 1 )
                    {
                      v1397 = 0xFFFFFF;
                      memset_0(v1465, 0, 0x5CuLL);
                      v595 = 0;
                      lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(
                                                0LL,
                                                0LL,
                                                1027LL);
                      if ( lpModuleName )
                      {
                        v717 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808D13F8)(11LL, (unsigned int)Src);
                        v1465[4] = 400;
                        v1465[0] = -v717;
                        v1466 = 5;
                        StringCchCopyW((char *)v1467, 32LL, (char *)Size);
                        v718 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1465);
                        if ( v718 )
                        {
                          v1396 = v718;
                        }
                        else
                        {
                          v595 = GetLastError();
                          v719 = v595 < 0;
                          if ( v595 > 0 )
                          {
                            v595 = (unsigned __int16)v595 | 0x80070000;
                            v719 = v595 < 0;
                          }
                          if ( !v719 )
                            v595 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808D14A0[0])(0LL, lpModuleName);
                      }
                      else
                      {
                        v595 = GetLastError();
                        v716 = v595 < 0;
                        if ( v595 > 0 )
                        {
                          v595 = (unsigned __int16)v595 | 0x80070000;
                          v716 = v595 < 0;
                        }
                        if ( !v716 )
                        {
LABEL_803:
                          v595 = -2147467259;
LABEL_804:
                          v108 = 0LL;
LABEL_805:
                          ((void (__fastcall *)(_QWORD, __int64))off_1808D14A0[0])(0LL, v1325);
                          goto LABEL_806;
                        }
                      }
                      if ( v595 < 0 )
                        goto LABEL_804;
                      v720 = v1393;
                      v1402 = v712;
                      v721 = ((__int64 (__fastcall *)(__int64, __int64))off_1808D13B8)(v1325, v1396);
                      v722 = ((__int64 (__fastcall *)(__int64, void *, __int64, unsigned int *, int, _QWORD))off_1808D1418)(
                               v1325,
                               v720,
                               0xFFFFFFFFLL,
                               &v1400,
                               1120,
                               0LL);
                      LODWORD(v1319) = v722;
                      v595 = v722 == 0 ? 0x80004005 : 0;
                      if ( v721 )
                      {
                        ((void (__fastcall *)(__int64, __int64))off_1808D13B8)(v1325, v721);
                        v722 = (int)v1319;
                      }
                      v108 = 0LL;
                      if ( !v722 )
                        goto LABEL_805;
                      v723 = (unsigned int)Src;
                      v724 = v1402 + 24;
                      if ( (int)(v1402 + 24) < 90 )
                        v724 = 90;
                      v1402 = v724;
                      v1403 = 32;
                      v1400 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                v1400,
                                (unsigned int)Src,
                                96LL);
                      v1401 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1401, v723, 96LL);
                      v1402 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1402, v723, 96LL);
                      v1403 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1403, v723, 96LL);
                      if ( v1389 )
                      {
                        v725 = v1398.m128i_u32[0];
                        if ( v1398.m128i_i32[0] >= v1399.m128i_i32[0] )
                          v725 = v1399.m128i_u32[0];
                      }
                      else
                      {
                        v726 = v1398.m128i_i32[2];
                        if ( v1398.m128i_i32[2] <= v1399.m128i_i32[2] )
                          v726 = v1399.m128i_i32[2];
                        v725 = v1400 + v726 - v1402;
                      }
                      off_1808D1490((CToastCenterExperienceManager *)&v1400, (struct CSingleViewShellExperience *)v725);
                    }
                    v727 = HIDWORD(v1357);
                    v728 = DWORD2(v1357);
                    LODWORD(v1319) = v1389;
                    v729 = v593 - 1;
                    if ( !v729 )
                    {
                      v108 = 0LL;
                      *(_QWORD *)&v1357 = 0LL;
                      goto LABEL_902;
                    }
                    v730 = v729 - 1;
                    if ( v730 )
                    {
                      if ( v730 != 1 )
                        goto LABEL_901;
                      v1457 = 0LL;
                      v1455 = 0LL;
                      v1456 = 0LL;
                      v731 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1455) = 40;
                      if ( !(unsigned int)off_1808D1448(v731, (struct CSingleViewShellExperience *)&v1455) )
                        goto LABEL_901;
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1456 + 4));
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1456 + 12));
                      v732 = 50 * (HIDWORD(v1456) - v728) / 100;
                      v733 = 50 * (v1457 - v727);
                    }
                    else
                    {
                      v1442 = 0LL;
                      v1440 = 0LL;
                      v1441 = 0LL;
                      v734 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1440) = 40;
                      if ( !(unsigned int)off_1808D1448(v734, (struct CSingleViewShellExperience *)&v1440) )
                        goto LABEL_901;
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1441 + 4));
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1441 + 12));
                      if ( (_DWORD)v1319 )
                        v732 = DWORD1(v1441) + 5 * HIDWORD(v1441) / 100;
                      else
                        v732 = 95 * (HIDWORD(v1441) - v728) / 100;
                      v733 = 95 * (v1442 - v727);
                    }
                    LODWORD(v1357) = v732;
                    DWORD1(v1357) = v733 / 100;
LABEL_901:
                    v108 = 0LL;
LABEL_902:
                    v595 = 0;
                    goto LABEL_805;
                  }
                  if ( v593 != 3 )
                    goto LABEL_850;
                }
                LODWORD(v108) = (_DWORD)v1332;
                v710 = v1329;
                goto LABEL_850;
              }
              LODWORD(v1338) = 15;
            }
            LODWORD(v1342) = 11;
            goto LABEL_793;
          }
          v595 = GetLastError();
          v596 = v595 < 0;
          if ( v595 > 0 )
          {
            v595 = (unsigned __int16)v595 | 0x80070000;
            v596 = v595 < 0;
          }
          LODWORD(v108) = 0;
        }
        else
        {
          v595 = GetLastError();
          v596 = v595 < 0;
          if ( v595 > 0 )
          {
            v595 = (unsigned __int16)v595 | 0x80070000;
            v596 = v595 < 0;
          }
        }
        if ( !v596 )
          v595 = -2147467259;
        goto LABEL_712;
      }
      v534 = dword_1808DDD3C;
LABEL_687:
      dword_1808DDD3C = v534 + 1;
      goto LABEL_688;
    }
    v475 = dword_1808DDD3C;
LABEL_640:
    dword_1808DDD3C = v475 + 1;
    goto LABEL_641;
  }
  v83 = (int)v1319;
LABEL_1554:
  while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
    ;
  v1304 = dword_1808DDD3C;
  if ( dword_1808DDD3C > 0 )
  {
    --dword_1808DDD3C;
    if ( v1304 == 1 )
    {
      v1305 = 4LL;
      v1306 = (HMODULE *)&unk_1808DA540;
      do
      {
        if ( *v1306 )
          FreeLibrary(*v1306);
        v1306 += 3;
        --v1305;
      }
      while ( v1305 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1808DDD40, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1366);
  if ( v82 >= 0 )
  {
    if ( v83 == 4 )
    {
      v1307 = *(_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>((__int64 *)&v1371);
      goto LABEL_1575;
    }
    goto LABEL_1570;
  }
  if ( v82 != -805306316 )
  {
    if ( v82 == -805306139 || v82 == -1073425151 )
    {
      v1351 = -1073418201;
      goto LABEL_1572;
    }
    if ( v82 == -805306306 )
    {
      v1351 = -1073418200;
      goto LABEL_1572;
    }
    v1351 = v82;
    if ( v82 != -2147024774 )
      goto LABEL_1572;
LABEL_1570:
    v1307 = v1360;
    v1308 = -1073418210;
    goto LABEL_1576;
  }
  v1351 = -1073418222;
LABEL_1572:
  v1307 = v1360;
LABEL_1575:
  v1308 = v1351;
LABEL_1576:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1371);
  LODWORD(v1320) = v1308;
  if ( v1308 >= 0 )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID47983836>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID47983836>::GetImpl'::`2'::impl)
      && IsWindowsServer() )
    {
      v1307 = 0;
    }
    return v1307 == 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\AIAssistanceUserEligibilityCheck.h",
      (const char *)(unsigned int)v1308);
    AIAssistanceTelemetry::PolicyCheckError<unsigned short const (&)[28],unsigned short const (&)[50],long &>(
      v1310,
      v1309,
      &v1320);
    return 0;
  }
}
