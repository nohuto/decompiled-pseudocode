/*
 * XREFs of ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026DD9C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180279DE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18027AA80 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805D5110 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x180026C6C (-IsActiveSessionCountLimited@@YA_NXZ.c)
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
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NXZ @ 0x18045D988 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NXZ.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x180683BAC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char winrt::Windows::Internal::Shell::implementation::DashboardManager::ShouldDeferWidgetsInitialization(void)
{
  int v1; // eax
  _BYTE *v2; // rdi
  int v3; // r13d
  _BYTE *v4; // r14
  int v5; // ecx
  unsigned __int8 *v6; // r15
  int v7; // r10d
  __int64 v8; // rsi
  int v9; // r8d
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
  unsigned int v42; // r13d
  __int64 v43; // rdi
  HMODULE *v44; // rbx
  void *v45; // rbx
  __int64 v46; // rax
  const WCHAR *v47; // rdx
  _BYTE *v48; // rdi
  HMODULE *v49; // r14
  __int64 v50; // rax
  char *v51; // rdx
  unsigned int v52; // r15d
  unsigned int v53; // r14d
  __int64 v54; // rcx
  __int64 v55; // rax
  const CHAR *v56; // rdx
  __int64 (__fastcall *ProcAddress)(); // rdx
  int v58; // eax
  HANDLE ProcessHeap; // rax
  const wchar_t *v60; // rdi
  const wchar_t *v61; // rsi
  int v62; // r15d
  signed int v63; // r14d
  LPVOID v64; // rax
  bool v65; // sf
  SIZE_T v66; // rcx
  SIZE_T v67; // r13
  LPVOID i; // rbx
  signed int LastError; // eax
  __int64 (__fastcall *v70)(); // rbx
  DWORD CurrentThreadId; // eax
  LPVOID v72; // rax
  size_t v73; // rcx
  size_t v74; // r13
  LPVOID v75; // rbx
  signed int v76; // eax
  HANDLE CurrentProcess; // rax
  int v78; // ebx
  HLOCAL v79; // rax
  int v80; // r15d
  int v81; // esi
  int v82; // eax
  __int64 v83; // rdi
  HMODULE *v84; // rbx
  void *v85; // rdi
  HANDLE v86; // rax
  unsigned __int16 *v87; // rax
  unsigned __int16 *v88; // r13
  HANDLE v89; // rax
  _QWORD *v90; // r10
  void *v91; // r10
  int v92; // eax
  void *v93; // r10
  int v94; // eax
  int v95; // eax
  int v96; // eax
  size_t v97; // rdx
  int v98; // r11d
  int v99; // r11d
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  unsigned int v104; // ebx
  HANDLE v105; // rax
  void *v106; // rax
  int v107; // r9d
  unsigned int *v108; // r10
  unsigned int v109; // r11d
  _DWORD *v110; // rax
  int v111; // r10d
  unsigned int v112; // r11d
  int *v113; // r11
  int v114; // edx
  unsigned __int64 v115; // r11
  unsigned int v116; // r10d
  unsigned int v117; // r9d
  unsigned int *v118; // r11
  int v119; // r9d
  __int64 v120; // r11
  int *v121; // r10
  int v122; // edx
  unsigned __int64 v123; // r10
  unsigned int v124; // r9d
  int v125; // r11d
  _DWORD *v126; // r10
  int v127; // r9d
  size_t v128; // rdx
  int v129; // r11d
  int *v130; // r10
  int v131; // edx
  unsigned __int64 v132; // r10
  unsigned int v133; // r9d
  _DWORD *v134; // r10
  _QWORD *v135; // rax
  unsigned __int64 v136; // rcx
  unsigned int v137; // r11d
  int v138; // eax
  int *v139; // r9
  int v140; // ebx
  int v141; // edx
  unsigned __int64 v142; // r9
  _DWORD *v143; // r9
  __int64 v144; // r10
  void *v145; // rcx
  unsigned int v146; // r9d
  unsigned int v147; // r11d
  int *v148; // r10
  int v149; // edx
  unsigned __int64 v150; // r10
  unsigned int v151; // r11d
  unsigned int *v152; // r10
  _DWORD *v153; // rax
  int v154; // r10d
  unsigned int v155; // r11d
  int *v156; // r11
  int v157; // edx
  unsigned __int64 v158; // r11
  unsigned int v159; // r10d
  unsigned int v160; // r10d
  unsigned int *v161; // r11
  _DWORD *v162; // rax
  unsigned int v163; // ecx
  unsigned int v164; // r10d
  int v165; // r9d
  unsigned int v166; // r11d
  unsigned int v167; // r11d
  unsigned int v168; // r11d
  unsigned int v169; // r11d
  char *v170; // rbx
  unsigned int v171; // r10d
  int v172; // r15d
  unsigned int v173; // ecx
  unsigned int v174; // ebx
  HANDLE v175; // rax
  char *v176; // rax
  int v177; // eax
  unsigned int v178; // r9d
  size_t v179; // rcx
  size_t v180; // rcx
  int v181; // eax
  HANDLE v182; // rax
  SIZE_T v183; // r15
  void *v184; // rdx
  unsigned __int8 v185; // al
  SIZE_T v186; // rcx
  size_t v187; // rcx
  int v188; // r9d
  unsigned __int8 *v189; // r11
  unsigned int v190; // r10d
  int v191; // edx
  char v192; // r9
  int v193; // r14d
  int v194; // r8d
  int v195; // ecx
  unsigned int v196; // r9d
  unsigned int v197; // ecx
  unsigned int v198; // r8d
  _BYTE *v199; // r14
  char v200; // si
  size_t v201; // rax
  SIZE_T v202; // rdx
  unsigned __int8 *v203; // r8
  int v204; // r13d
  int v205; // r15d
  SIZE_T v206; // r14
  int v207; // eax
  int v208; // ebx
  int v209; // r11d
  int v210; // edx
  int v211; // r9d
  int v212; // r10d
  int v213; // r8d
  int v214; // r9d
  unsigned int v215; // edx
  int v216; // r8d
  int v217; // ecx
  int v218; // edx
  int v219; // r8d
  int v220; // r9d
  int v221; // edx
  unsigned int v222; // r8d
  unsigned int v223; // r9d
  int v224; // edx
  int v225; // r8d
  int v226; // r9d
  int v227; // edx
  int v228; // r8d
  int v229; // r10d
  int v230; // edx
  int v231; // r9d
  unsigned int v232; // r8d
  int v233; // edx
  unsigned int v234; // r9d
  _BYTE *v235; // rdx
  int v236; // r9d
  HANDLE v237; // rax
  LPVOID *v238; // r15
  HANDLE v239; // rax
  void *v240; // rax
  LPVOID *v241; // rax
  HANDLE v242; // rax
  _OWORD *v243; // rax
  HANDLE v244; // rax
  _QWORD *v245; // rax
  int v246; // r15d
  HANDLE v247; // rax
  HANDLE v248; // rax
  HANDLE v249; // rax
  HANDLE v250; // rax
  LPVOID *v251; // rax
  SIZE_T v252; // r13
  int *v253; // rdi
  HANDLE v254; // rax
  SIZE_T v255; // rbx
  HANDLE v256; // rax
  HANDLE v257; // rax
  HANDLE v258; // rax
  HANDLE v259; // rax
  int v260; // edx
  int v261; // r10d
  unsigned __int16 *v262; // r11
  int v263; // r15d
  int v264; // r10d
  unsigned int v265; // ebx
  HANDLE v266; // rax
  _DWORD *v267; // rax
  void *v268; // rbx
  void *v269; // rcx
  void *v270; // r13
  SIZE_T v271; // rcx
  SIZE_T v272; // rcx
  HANDLE v273; // rax
  HANDLE v274; // rax
  _QWORD *v275; // rbx
  void *v276; // rdi
  HANDLE v277; // rax
  void *v278; // rdi
  HANDLE v279; // rax
  void *v280; // rdi
  HANDLE v281; // rax
  HANDLE v282; // rax
  void *v283; // rbx
  HANDLE v284; // rax
  void *v285; // rbx
  HANDLE v286; // rax
  _QWORD *v287; // rbx
  void *v288; // rdi
  HANDLE v289; // rax
  void *v290; // rdi
  HANDLE v291; // rax
  void *v292; // rdi
  HANDLE v293; // rax
  HANDLE v294; // rax
  void *v295; // rbx
  HANDLE v296; // rax
  int v297; // eax
  SIZE_T v298; // r9
  unsigned int v299; // ecx
  LPVOID v300; // rcx
  unsigned int v301; // r11d
  SIZE_T v302; // r9
  SIZE_T v303; // r10
  _DWORD *v304; // rcx
  int v305; // r11d
  unsigned int v306; // r10d
  int v307; // r10d
  int v308; // r10d
  int v309; // r9d
  unsigned int v310; // eax
  unsigned int v311; // ebx
  HANDLE v312; // rax
  _QWORD *v313; // r13
  void *v314; // rdi
  signed int v315; // eax
  FARPROC v316; // rax
  int v317; // eax
  unsigned int v318; // r9d
  void *v319; // r10
  size_t v320; // r11
  SIZE_T v321; // rax
  SIZE_T v322; // rcx
  __int64 v323; // rbx
  int v324; // r15d
  int v325; // r9d
  void *v326; // r10
  char *v327; // r11
  int v328; // r9d
  unsigned int v329; // ebx
  int v330; // r9d
  int v331; // r9d
  int v332; // r9d
  int v333; // r9d
  HANDLE v334; // rax
  LPVOID v335; // rbx
  unsigned __int64 v336; // rax
  unsigned int v337; // r15d
  HANDLE v338; // rax
  void *v339; // rax
  unsigned __int64 v340; // rax
  unsigned int v341; // r15d
  HANDLE v342; // rax
  void *v343; // rax
  unsigned __int64 v344; // rax
  unsigned int v345; // r15d
  HANDLE v346; // rax
  void *v347; // rax
  HANDLE v348; // rax
  HANDLE v349; // rax
  HANDLE v350; // rax
  HANDLE v351; // rax
  void *v352; // rbx
  HANDLE v353; // rax
  void *v354; // rbx
  HANDLE v355; // rax
  void *v356; // rbx
  HANDLE v357; // rax
  HANDLE v358; // rax
  void *v359; // r15
  _DWORD *v360; // rax
  void *v361; // rcx
  _DWORD *v362; // r10
  unsigned __int8 v363; // dl
  char *v364; // r11
  unsigned __int16 *v365; // r9
  void *v366; // rdi
  unsigned __int16 *v367; // r8
  char v368; // dl
  unsigned __int8 *v369; // r10
  SIZE_T v370; // rax
  unsigned __int16 *v371; // rsi
  int v372; // eax
  unsigned int v373; // r11d
  unsigned int v374; // r9d
  unsigned int v375; // eax
  unsigned int v376; // ecx
  int v377; // esi
  _BYTE *v378; // r14
  char v379; // r15
  size_t v380; // rdx
  void *v381; // r9
  int v382; // r13d
  int v383; // r9d
  char *v384; // rsi
  int v385; // edx
  int v386; // r15d
  int v387; // r8d
  unsigned __int8 *v388; // rcx
  int v389; // edi
  int v390; // r11d
  int v391; // ebx
  unsigned int v392; // ecx
  int v393; // r9d
  unsigned int v394; // r10d
  int v395; // r8d
  int v396; // r9d
  unsigned int v397; // ecx
  int v398; // r8d
  int v399; // r10d
  int v400; // r11d
  unsigned int v401; // r9d
  int v402; // ecx
  int v403; // r8d
  unsigned int v404; // r9d
  int v405; // ecx
  int v406; // r8d
  int v407; // r9d
  int v408; // ecx
  int v409; // r8d
  int v410; // r9d
  int v411; // r10d
  int v412; // ecx
  unsigned int v413; // r8d
  int v414; // r9d
  _BYTE *v415; // rcx
  int v416; // eax
  int v417; // r11d
  int v418; // r11d
  unsigned __int64 v419; // rax
  int v420; // r15d
  void *v421; // r10
  SIZE_T v422; // r9
  int v423; // eax
  void *v424; // r8
  SIZE_T v425; // r9
  SIZE_T v426; // rcx
  void *v427; // r10
  SIZE_T v428; // r9
  int v429; // eax
  SIZE_T v430; // r9
  __int64 v431; // r9
  char *v432; // r11
  void *v433; // rbx
  void *v434; // r10
  char *v435; // r11
  SIZE_T v436; // r9
  void *v437; // rax
  int *v438; // r9
  int v439; // edx
  unsigned __int64 v440; // r9
  void *v441; // r10
  void *v442; // r11
  void *v443; // rcx
  unsigned int v444; // ecx
  unsigned int v445; // ebx
  HANDLE v446; // rax
  void *v447; // rbx
  int v448; // eax
  _DWORD *v449; // rcx
  int v450; // r9d
  int *v451; // r15
  int v452; // ebx
  unsigned int v453; // r10d
  int v454; // r10d
  size_t v455; // r11
  void **v456; // rax
  void *v457; // rax
  size_t v458; // rcx
  unsigned int v459; // r11d
  int v460; // r10d
  int v461; // r10d
  int v462; // r11d
  int *v463; // rax
  unsigned int *v464; // rbx
  int v465; // eax
  unsigned __int64 v466; // rcx
  unsigned int v467; // r11d
  int v468; // r10d
  int v469; // r11d
  size_t v470; // rax
  unsigned int *v471; // rcx
  unsigned int v472; // ebx
  int v473; // r10d
  int v474; // r10d
  int *v475; // rax
  unsigned int *v476; // rcx
  int v477; // eax
  unsigned int v478; // ebx
  int v479; // r10d
  int v480; // r10d
  size_t v481; // r11
  int *v482; // rbx
  LPVOID v483; // rax
  HANDLE v484; // rax
  HANDLE v485; // rax
  HANDLE v486; // rax
  HANDLE v487; // rax
  DWORD ModuleFileNameW; // eax
  void *v489; // rbx
  __int64 v490; // rcx
  __int64 v491; // rax
  unsigned int v492; // edi
  int v493; // eax
  const WCHAR *v494; // rax
  _BYTE *v495; // rsi
  int v496; // r13d
  unsigned __int8 *v497; // r14
  int v498; // ecx
  int v499; // r8d
  int v500; // r10d
  __int64 v501; // rdi
  int v502; // ebx
  int v503; // r11d
  int v504; // eax
  int v505; // ebx
  int v506; // r10d
  int v507; // r11d
  unsigned int v508; // r8d
  int v509; // edx
  unsigned int v510; // r9d
  int v511; // r8d
  unsigned int v512; // r9d
  int v513; // r10d
  int v514; // edx
  int v515; // r8d
  unsigned int v516; // r9d
  int v517; // edx
  int v518; // r8d
  unsigned int v519; // r10d
  unsigned int v520; // r8d
  int v521; // r9d
  int v522; // edx
  unsigned int v523; // r8d
  int v524; // r9d
  int v525; // edx
  int v526; // r8d
  unsigned int v527; // r9d
  int v528; // edx
  int v529; // r10d
  _BYTE *v530; // r13
  unsigned __int64 v531; // rax
  char v532; // cl
  HMODULE *v533; // rbx
  __int64 v534; // r13
  const WCHAR *v535; // rdx
  __int64 v536; // rax
  _BYTE *v537; // r13
  LPCWSTR v538; // r8
  int v539; // ebx
  __int64 v540; // rax
  __int64 v541; // rax
  unsigned __int64 v542; // rdx
  int v543; // eax
  unsigned int v544; // ecx
  __int64 v545; // rdx
  const CHAR *v546; // r8
  __int64 v547; // rax
  __int64 (__fastcall *v548)(); // rax
  HANDLE v549; // rax
  int v550; // eax
  const WCHAR *v551; // rax
  _BYTE *v552; // rsi
  int v553; // r13d
  unsigned __int8 *v554; // r14
  int v555; // ecx
  __int64 v556; // rdi
  int v557; // r10d
  int v558; // r8d
  int v559; // ebx
  int v560; // r11d
  int v561; // eax
  int v562; // ebx
  int v563; // edx
  int v564; // r11d
  unsigned int v565; // r8d
  int v566; // r9d
  unsigned int v567; // r10d
  int v568; // edx
  int v569; // r8d
  unsigned int v570; // r9d
  int v571; // r10d
  int v572; // edx
  int v573; // r8d
  unsigned int v574; // r9d
  int v575; // edx
  int v576; // r8d
  unsigned int v577; // r10d
  unsigned int v578; // r8d
  int v579; // r9d
  int v580; // edx
  unsigned int v581; // r8d
  int v582; // r9d
  int v583; // edx
  int v584; // r8d
  unsigned int v585; // r9d
  int v586; // r10d
  int v587; // eax
  _BYTE *v588; // r13
  unsigned __int64 v589; // rax
  char v590; // cl
  HMODULE *v591; // rbx
  __int64 v592; // r13
  const WCHAR *v593; // rdx
  __int64 v594; // rax
  _BYTE *v595; // r13
  LPCWSTR v596; // r8
  int v597; // ebx
  __int64 v598; // rax
  __int64 v599; // rax
  unsigned __int64 v600; // rdx
  int v601; // eax
  unsigned int v602; // ecx
  __int64 v603; // rdx
  const CHAR *v604; // r8
  __int64 v605; // rax
  __int64 (__fastcall *v606)(); // rax
  HANDLE v607; // rax
  int v608; // r13d
  signed int v609; // eax
  signed int v610; // ebx
  bool v611; // sf
  LPVOID v612; // rax
  LPVOID v613; // rax
  SIZE_T v614; // rax
  unsigned int v615; // esi
  _DWORD *v616; // r14
  int v617; // eax
  __int64 v618; // rcx
  unsigned int v619; // r11d
  unsigned int v620; // ebx
  _DWORD *Ptr; // rax
  unsigned int *v622; // rdx
  unsigned int v623; // r8d
  unsigned int v624; // r9d
  unsigned int v625; // ecx
  __int64 v626; // rcx
  const wchar_t *v627; // rcx
  __int64 v628; // r8
  const wchar_t **v629; // rdx
  __int64 v630; // rax
  __int64 v631; // rcx
  char *v632; // rax
  _BYTE *v633; // r14
  int v634; // ebx
  unsigned __int8 *v635; // rsi
  int v636; // r13d
  int v637; // r9d
  int v638; // edx
  __int64 v639; // rdi
  int v640; // r11d
  int v641; // r10d
  int v642; // eax
  int v643; // r11d
  int v644; // ecx
  int v645; // r10d
  unsigned int v646; // edx
  int v647; // r8d
  unsigned int v648; // r9d
  int v649; // ecx
  int v650; // edx
  unsigned int v651; // r8d
  int v652; // r9d
  int v653; // ecx
  int v654; // edx
  unsigned int v655; // r8d
  int v656; // ecx
  int v657; // edx
  unsigned int v658; // r9d
  unsigned int v659; // edx
  int v660; // r8d
  int v661; // ecx
  unsigned int v662; // edx
  int v663; // r8d
  int v664; // ecx
  int v665; // edx
  unsigned int v666; // r8d
  int v667; // r9d
  int v668; // eax
  unsigned __int64 v669; // rax
  __m128 v670; // xmm1
  __m128 v671; // xmm0
  __m128 v672; // xmm0
  __m128 v673; // xmm1
  __m128 v674; // xmm1
  __m128 v675; // xmm1
  __int64 v676; // rax
  unsigned int v677; // r11d
  int v678; // r9d
  __int64 *v679; // r8
  __int64 v680; // rdx
  __int64 v681; // r10
  unsigned int v682; // ecx
  __int64 v683; // rax
  LPVOID v684; // rax
  __int64 v685; // rax
  __int64 v686; // rax
  __int16 v687; // dx
  unsigned int v688; // ecx
  __int16 *v689; // rax
  __int64 v690; // r9
  SIZE_T v691; // rax
  int v692; // eax
  LPVOID v693; // rdx
  __int64 v694; // r9
  signed int v695; // eax
  signed int v696; // eax
  __int16 v697; // r11
  void **v698; // rsi
  SIZE_T v699; // rax
  _BYTE *v700; // rcx
  __int64 v701; // rax
  __int64 ii; // rax
  _BYTE *v703; // rax
  char v704; // r11
  __int64 jj; // rcx
  void **v706; // rax
  signed int v707; // eax
  int v708; // eax
  const WCHAR *v709; // rax
  bool v710; // sf
  int v711; // eax
  __int64 v712; // rax
  HMODULE *v713; // r13
  unsigned int v714; // ebx
  int v715; // edi
  int v716; // r13d
  __int64 v717; // rax
  int v718; // eax
  __int64 v719; // rax
  bool v720; // sf
  unsigned __int16 *v721; // rax
  __int64 v722; // r13
  signed int v723; // eax
  int v724; // eax
  __int64 v725; // rax
  bool v726; // sf
  int v727; // r13d
  unsigned int v728; // r8d
  int v729; // eax
  __int32 v730; // r13d
  void *v731; // rbx
  void *v732; // rbx
  int v733; // ebx
  __int64 v734; // rdx
  bool v735; // sf
  int v736; // eax
  __int64 v737; // rax
  bool v738; // sf
  void *v739; // rbx
  __int64 v740; // r13
  int v741; // eax
  unsigned int v742; // ebx
  int v743; // eax
  unsigned __int64 v744; // rdx
  __int32 v745; // edx
  int v746; // r13d
  int v747; // ebx
  int v748; // ebx
  CToastCenterExperienceManager *v749; // rax
  int v750; // edx
  int v751; // ecx
  CToastCenterExperienceManager *v752; // rax
  size_t v753; // rbx
  int v754; // eax
  void *v755; // rbx
  size_t v756; // rbx
  __int64 v757; // rax
  SIZE_T v758; // rax
  CToastCenterExperienceManager *v759; // rbx
  void *v760; // rax
  signed int v761; // ebx
  bool v762; // sf
  bool v763; // zf
  void *v764; // rcx
  SIZE_T v765; // rax
  __int64 (__fastcall *v766)(); // rbx
  __int64 v767; // rax
  __int32 v768; // r11d
  __int32 v769; // r9d
  __int32 v770; // r8d
  __int32 v771; // edx
  int v772; // ecx
  int v773; // eax
  unsigned __int64 v774; // r14
  char v775; // si
  LPCWSTR v776; // rdi
  char *v777; // rdx
  char *v778; // rax
  signed int v779; // r9d
  __int64 v780; // r11
  unsigned __int8 *v781; // r10
  char *v782; // r8
  int v783; // r9d
  int v784; // ecx
  int v785; // r8d
  int v786; // edx
  int v787; // ecx
  int v788; // r8d
  int v789; // edx
  int v790; // r8d
  int v791; // ecx
  void *v792; // rbx
  size_t v793; // rbx
  __int64 v794; // rax
  CToastCenterExperienceManager *v795; // rbx
  void *v796; // rax
  signed int v797; // ebx
  bool v798; // sf
  void *v799; // rcx
  SIZE_T v800; // rax
  __int64 (__fastcall *v801)(); // rbx
  __int64 v802; // rax
  int v803; // eax
  __int32 v804; // r10d
  __int32 v805; // r9d
  __int32 v806; // r8d
  __int32 v807; // edx
  int v808; // edi
  int v809; // eax
  char *v810; // rdx
  char *v811; // rax
  signed int v812; // r9d
  char v813; // r14
  unsigned __int8 *v814; // r10
  unsigned __int64 v815; // r8
  __int64 v816; // r11
  int v817; // r9d
  int v818; // ecx
  int v819; // r8d
  int v820; // edx
  int v821; // ecx
  int v822; // r8d
  int v823; // edx
  int v824; // r8d
  int v825; // ecx
  LPVOID v826; // rbx
  char v827; // al
  unsigned __int32 v828; // r13d
  __int32 v829; // edx
  int v830; // ebx
  __int32 v831; // eax
  __int32 v832; // ebx
  void *v833; // rax
  __int64 v834; // rax
  LPVOID v835; // rcx
  __int64 v836; // rax
  __int64 v837; // rcx
  _BYTE *j; // rax
  __int64 v839; // rax
  __int64 v840; // rcx
  _BYTE *k; // rax
  _BYTE *v842; // rcx
  __int64 v843; // rax
  __int64 v844; // rax
  int v845; // eax
  HMODULE *v846; // rbx
  __int64 v847; // rdi
  int v848; // ebx
  int v849; // eax
  SIZE_T v850; // rax
  signed int v851; // ebx
  bool v852; // sf
  void *v853; // rcx
  CToastCenterExperienceManager *v854; // rbx
  const WCHAR *v855; // rax
  __int64 (__fastcall *v856)(); // rbx
  __int64 v857; // rax
  int v858; // ebx
  int v859; // eax
  void *v860; // r9
  int v861; // ecx
  int v862; // edx
  int v863; // r8d
  int v864; // eax
  int v865; // ecx
  int v866; // eax
  unsigned int v867; // r14d
  unsigned __int8 *v868; // rdx
  SIZE_T v869; // rax
  signed int v870; // edi
  unsigned __int8 *v871; // r10
  unsigned __int64 v872; // r8
  char v873; // r14
  SIZE_T v874; // rsi
  int v875; // r9d
  int v876; // ecx
  int v877; // r8d
  int v878; // edx
  int v879; // ecx
  int v880; // r8d
  int v881; // edx
  void *v882; // rbx
  __int64 v883; // rax
  CToastCenterExperienceManager *v884; // rbx
  void *v885; // rax
  signed int v886; // ebx
  bool v887; // sf
  SIZE_T v888; // rcx
  void *v889; // rax
  __int64 (__fastcall *v890)(); // rbx
  __int64 v891; // rax
  int v892; // ebx
  int v893; // eax
  unsigned int v894; // ecx
  int v895; // r9d
  int v896; // edx
  int v897; // r8d
  int v898; // eax
  int v899; // ecx
  int v900; // eax
  unsigned __int64 v901; // r14
  char *v902; // rdx
  __int64 v903; // rcx
  signed int v904; // r9d
  char *v905; // rax
  char v906; // di
  unsigned __int8 *v907; // r10
  __int64 v908; // r11
  char *v909; // r8
  int v910; // r9d
  int v911; // ecx
  int v912; // r8d
  int v913; // edx
  int v914; // ecx
  int v915; // r8d
  int v916; // edx
  int v917; // r8d
  int v918; // ecx
  int v919; // eax
  const WCHAR *v920; // rax
  int v921; // r14d
  _BYTE *v922; // rsi
  int v923; // r13d
  unsigned __int8 *v924; // rcx
  int v925; // r10d
  __int64 v926; // rdi
  int v927; // r8d
  int v928; // ebx
  int v929; // r11d
  int v930; // eax
  int v931; // ebx
  int v932; // edx
  int v933; // r11d
  unsigned int v934; // r8d
  int v935; // r9d
  unsigned int v936; // r10d
  int v937; // edx
  int v938; // r8d
  unsigned int v939; // r9d
  int v940; // r10d
  int v941; // edx
  int v942; // r8d
  unsigned int v943; // r9d
  int v944; // edx
  int v945; // r8d
  unsigned int v946; // r10d
  unsigned int v947; // r8d
  int v948; // r9d
  int v949; // edx
  unsigned int v950; // r8d
  int v951; // r9d
  int v952; // edx
  int v953; // r8d
  unsigned int v954; // r9d
  int v955; // r10d
  int v956; // eax
  LPCWSTR v957; // rdi
  int v958; // r13d
  unsigned __int64 v959; // rax
  char v960; // cl
  __int64 v961; // rdi
  HMODULE *v962; // rbx
  WCHAR *v963; // rbx
  const WCHAR *v964; // rdx
  __int64 v965; // rax
  const WCHAR *v966; // rdi
  LPCWSTR v967; // r8
  __int64 v968; // rax
  __int64 v969; // rax
  unsigned __int64 v970; // rdx
  int v971; // eax
  unsigned int v972; // ecx
  __int64 v973; // rdx
  const CHAR *v974; // r8
  __int64 v975; // rax
  __int64 (__fastcall *v976)(); // rax
  HANDLE v977; // rax
  __int64 v978; // rdi
  int v979; // eax
  HMODULE *v980; // rbx
  void *v981; // r13
  HANDLE v982; // rax
  _OWORD *v983; // rdi
  HANDLE v984; // rax
  _QWORD *v985; // rax
  int v986; // eax
  void *v987; // r9
  void *v988; // r12
  int v989; // eax
  int v990; // r10d
  int v991; // eax
  int v992; // r10d
  int v993; // eax
  int v994; // r10d
  unsigned int v995; // ebx
  HANDLE v996; // rax
  LPVOID v997; // rax
  int v998; // r10d
  _DWORD *v999; // r11
  _DWORD *v1000; // rax
  int v1001; // r11d
  void *v1002; // rdi
  HANDLE v1003; // rax
  HANDLE v1004; // rax
  HANDLE v1005; // rax
  HANDLE v1006; // rax
  int *v1007; // r9
  int v1008; // edx
  unsigned __int64 v1009; // r9
  unsigned int v1010; // r11d
  unsigned int *v1011; // r9
  unsigned int v1012; // r10d
  int v1013; // r9d
  int *v1014; // r10
  int v1015; // edx
  unsigned __int64 v1016; // r10
  unsigned int v1017; // r9d
  int v1018; // r11d
  _DWORD *v1019; // r10
  int v1020; // r9d
  int *v1021; // r10
  int v1022; // edx
  unsigned __int64 v1023; // r10
  unsigned int v1024; // r9d
  int v1025; // r11d
  _DWORD *v1026; // r10
  LPCWSTR *v1027; // rax
  LPCWSTR v1028; // rcx
  unsigned int v1029; // ecx
  unsigned int v1030; // r9d
  int v1031; // ebx
  unsigned int v1032; // r9d
  unsigned int v1033; // ecx
  unsigned int v1034; // ebx
  HANDLE v1035; // rax
  WCHAR *v1036; // rax
  int v1037; // eax
  unsigned int v1038; // r11d
  void *v1039; // rcx
  SIZE_T v1040; // rcx
  int v1041; // eax
  char *v1042; // r9
  int v1043; // ebx
  unsigned __int16 *v1044; // rbx
  void *v1045; // rax
  unsigned int v1046; // r8d
  size_t v1047; // rcx
  size_t v1048; // r10
  unsigned __int8 v1049; // al
  size_t v1050; // rdx
  int v1051; // r9d
  unsigned __int16 *v1052; // r11
  unsigned int v1053; // edx
  unsigned int v1054; // ecx
  char v1055; // r9
  int v1056; // r14d
  int v1057; // esi
  int v1058; // r8d
  HANDLE v1059; // rax
  unsigned int v1060; // r9d
  unsigned int v1061; // ecx
  int v1062; // ebx
  _BYTE *v1063; // r14
  unsigned int v1064; // esi
  char v1065; // al
  size_t v1066; // rax
  size_t v1067; // rdx
  unsigned __int8 *v1068; // r10
  int v1069; // r13d
  size_t v1070; // r15
  int v1071; // r14d
  int v1072; // eax
  int v1073; // ebx
  int v1074; // r11d
  int v1075; // r8d
  int v1076; // r10d
  int v1077; // r8d
  int v1078; // r10d
  int v1079; // r9d
  int v1080; // r8d
  unsigned int v1081; // edx
  int v1082; // r9d
  int v1083; // ecx
  int v1084; // edx
  int v1085; // r8d
  int v1086; // r9d
  int v1087; // edx
  unsigned int v1088; // r8d
  unsigned int v1089; // r9d
  int v1090; // edx
  int v1091; // r8d
  int v1092; // r9d
  int v1093; // edx
  int v1094; // r8d
  int v1095; // r9d
  int v1096; // r10d
  int v1097; // r8d
  unsigned int v1098; // edx
  int v1099; // r8d
  int v1100; // r9d
  _BYTE *v1101; // rdx
  void *v1102; // rbx
  HANDLE v1103; // rax
  unsigned int *v1104; // rsi
  HANDLE v1105; // rax
  void *v1106; // rax
  HANDLE v1107; // rax
  _OWORD *v1108; // rax
  int v1109; // ebx
  HANDLE v1110; // rax
  _QWORD *v1111; // rax
  HANDLE v1112; // rax
  HANDLE v1113; // rax
  HANDLE v1114; // rax
  HANDLE v1115; // rax
  void *v1116; // r12
  HANDLE v1117; // rax
  _QWORD *v1118; // r13
  HANDLE v1119; // rax
  HANDLE v1120; // rax
  HANDLE v1121; // rax
  HANDLE v1122; // rax
  unsigned __int16 *v1123; // r9
  int v1124; // edx
  int v1125; // ebx
  SIZE_T v1126; // r11
  unsigned int v1127; // ebx
  HANDLE v1128; // rax
  _DWORD *v1129; // rax
  void *v1130; // rcx
  void *v1131; // r13
  SIZE_T v1132; // rcx
  SIZE_T v1133; // rcx
  HANDLE v1134; // rax
  int v1135; // eax
  unsigned int v1136; // ecx
  LPVOID v1137; // rcx
  unsigned int v1138; // r11d
  void *v1139; // r10
  _DWORD *v1140; // rcx
  int v1141; // r11d
  unsigned int v1142; // r11d
  int v1143; // r11d
  int v1144; // r11d
  int v1145; // r10d
  unsigned int v1146; // r12d
  HANDLE v1147; // rax
  _QWORD *v1148; // r13
  void *v1149; // rsi
  signed int v1150; // eax
  FARPROC v1151; // rax
  int v1152; // eax
  unsigned int v1153; // r9d
  void *v1154; // r11
  unsigned __int16 *v1155; // rax
  void *v1156; // rcx
  void *v1157; // rdx
  __int64 v1158; // r12
  int v1159; // ebx
  int v1160; // r9d
  void *v1161; // r11
  int v1162; // r9d
  __int64 v1163; // r10
  SIZE_T v1164; // r12
  int v1165; // r10d
  int v1166; // r9d
  int v1167; // r9d
  unsigned int v1168; // r10d
  int v1169; // r9d
  unsigned int v1170; // r10d
  int v1171; // r9d
  int v1172; // r10d
  HANDLE v1173; // rax
  _QWORD *v1174; // rsi
  size_t v1175; // rax
  unsigned int v1176; // ebx
  HANDLE v1177; // rax
  void *v1178; // rax
  HANDLE v1179; // rax
  void *v1180; // rax
  const void *v1181; // r12
  size_t v1182; // rax
  unsigned int v1183; // ebx
  HANDLE v1184; // rax
  void *v1185; // rax
  void *v1186; // r12
  HANDLE v1187; // rax
  void *v1188; // r12
  HANDLE v1189; // rax
  void *v1190; // r12
  HANDLE v1191; // rax
  HANDLE v1192; // rax
  unsigned int *v1193; // rax
  void *v1194; // rsi
  HANDLE v1195; // rax
  void *v1196; // rsi
  HANDLE v1197; // rax
  void *v1198; // rsi
  HANDLE v1199; // rax
  HANDLE v1200; // rax
  void *v1201; // rax
  unsigned __int16 *v1202; // r10
  void *v1203; // rcx
  void *v1204; // r11
  void *v1205; // rbx
  unsigned __int8 v1206; // dl
  void *v1207; // rsi
  SIZE_T v1208; // r8
  unsigned __int8 *v1209; // rdx
  int v1210; // r15d
  unsigned __int16 *v1211; // r14
  int v1212; // r10d
  int v1213; // ecx
  unsigned int v1214; // r10d
  unsigned int v1215; // eax
  unsigned int v1216; // r9d
  int v1217; // ecx
  int v1218; // r11d
  _BYTE *v1219; // rbx
  unsigned int v1220; // r14d
  size_t v1221; // r11
  int v1222; // r9d
  SIZE_T v1223; // rbx
  int v1224; // edx
  _BYTE *v1225; // r12
  int v1226; // r8d
  int v1227; // esi
  size_t v1228; // r15
  int v1229; // r11d
  unsigned __int8 *v1230; // r13
  int v1231; // edi
  int v1232; // ebx
  int v1233; // eax
  int v1234; // edi
  int v1235; // r10d
  int v1236; // ebx
  unsigned int v1237; // ecx
  int v1238; // r9d
  unsigned int v1239; // r10d
  unsigned int v1240; // r8d
  int v1241; // r9d
  unsigned int v1242; // ecx
  int v1243; // r8d
  unsigned int v1244; // r10d
  int v1245; // r11d
  unsigned int v1246; // r9d
  int v1247; // ecx
  int v1248; // r8d
  unsigned int v1249; // r9d
  int v1250; // ecx
  int v1251; // r8d
  int v1252; // r9d
  int v1253; // ecx
  int v1254; // r8d
  int v1255; // r9d
  int v1256; // ecx
  int v1257; // r8d
  unsigned int v1258; // r9d
  unsigned int v1259; // ecx
  int v1260; // r10d
  char *v1261; // r10
  SIZE_T n; // rax
  unsigned __int16 *v1263; // r14
  int v1264; // ebx
  SIZE_T v1265; // r9
  void *v1266; // r11
  void *v1267; // r10
  void *v1268; // r10
  void *v1269; // rcx
  void *v1270; // r10
  SIZE_T v1271; // rax
  void *v1272; // r11
  size_t v1273; // r10
  void *v1274; // r14
  unsigned __int64 v1275; // r10
  int v1276; // eax
  void *v1277; // r11
  LPVOID v1278; // rcx
  unsigned int v1279; // eax
  unsigned int v1280; // ebx
  HANDLE v1281; // rax
  int v1282; // eax
  HANDLE v1283; // rax
  _QWORD *v1284; // rsi
  void *v1285; // r14
  HANDLE v1286; // rax
  void *v1287; // r14
  HANDLE v1288; // rax
  void *v1289; // r14
  HANDLE v1290; // rax
  HANDLE v1291; // rax
  void *v1292; // rsi
  HANDLE v1293; // rax
  void *v1294; // rsi
  HANDLE v1295; // rax
  _QWORD *v1296; // rsi
  void *v1297; // r14
  HANDLE v1298; // rax
  void *v1299; // r14
  HANDLE v1300; // rax
  void *v1301; // r14
  HANDLE v1302; // rax
  HANDLE v1303; // rax
  void *v1304; // rsi
  HANDLE v1305; // rax
  unsigned int v1306; // r14d
  size_t v1307; // r9
  int v1308; // r10d
  int *v1309; // rax
  unsigned int *v1310; // r9
  int v1311; // r10d
  int v1312; // ebx
  unsigned int *v1313; // [rsp+28h] [rbp-E0h]
  SIZE_T v1314; // [rsp+68h] [rbp-A0h] BYREF
  SIZE_T v1315; // [rsp+70h] [rbp-98h] BYREF
  __int64 v1316; // [rsp+78h] [rbp-90h]
  void *v1317; // [rsp+80h] [rbp-88h] BYREF
  size_t m; // [rsp+88h] [rbp-80h] BYREF
  SIZE_T v1319; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v1320; // [rsp+98h] [rbp-70h] BYREF
  LPVOID v1321; // [rsp+A0h] [rbp-68h]
  SIZE_T dwBytes; // [rsp+A8h] [rbp-60h] BYREF
  LPVOID v1323; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int16 *v1324; // [rsp+B8h] [rbp-50h]
  SIZE_T v1325; // [rsp+C0h] [rbp-48h] BYREF
  SIZE_T Size; // [rsp+C8h] [rbp-40h] BYREF
  void *v1327; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v1328; // [rsp+D8h] [rbp-30h]
  SIZE_T v1329; // [rsp+E0h] [rbp-28h]
  LPVOID v1330; // [rsp+E8h] [rbp-20h] BYREF
  SIZE_T v1331; // [rsp+F0h] [rbp-18h]
  LPVOID v1332; // [rsp+F8h] [rbp-10h]
  size_t pcchLength; // [rsp+100h] [rbp-8h] BYREF
  void *v1334; // [rsp+108h] [rbp+0h] BYREF
  SIZE_T v1335; // [rsp+110h] [rbp+8h] BYREF
  LPVOID v1336; // [rsp+118h] [rbp+10h]
  LPVOID v1337; // [rsp+120h] [rbp+18h]
  SIZE_T v1338; // [rsp+128h] [rbp+20h] BYREF
  SIZE_T v1339; // [rsp+130h] [rbp+28h]
  LPVOID lpMem; // [rsp+138h] [rbp+30h] BYREF
  void *v1341; // [rsp+140h] [rbp+38h] BYREF
  void *v1342; // [rsp+148h] [rbp+40h] BYREF
  LPCWSTR lpModuleName; // [rsp+150h] [rbp+48h]
  void *Src[2]; // [rsp+158h] [rbp+50h] BYREF
  size_t v1345; // [rsp+168h] [rbp+60h] BYREF
  void *v1346; // [rsp+170h] [rbp+68h] BYREF
  void *v1347; // [rsp+178h] [rbp+70h]
  size_t v1348[2]; // [rsp+180h] [rbp+78h] BYREF
  SIZE_T v1349; // [rsp+190h] [rbp+88h] BYREF
  int v1350; // [rsp+19Ch] [rbp+94h]
  LPCWSTR v1351; // [rsp+1A0h] [rbp+98h]
  _DWORD *v1352; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v1353; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned int v1354; // [rsp+1B4h] [rbp+ACh] BYREF
  int v1355; // [rsp+1B8h] [rbp+B0h]
  unsigned int v1356; // [rsp+1BCh] [rbp+B4h] BYREF
  SIZE_T v1357; // [rsp+1C0h] [rbp+B8h] BYREF
  __int128 v1358; // [rsp+1C8h] [rbp+C0h]
  unsigned int v1359; // [rsp+1D8h] [rbp+D0h] BYREF
  int v1360; // [rsp+1DCh] [rbp+D4h]
  unsigned int v1361; // [rsp+1E0h] [rbp+D8h] BYREF
  unsigned int v1362; // [rsp+1E4h] [rbp+DCh] BYREF
  unsigned int v1363; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned int v1364; // [rsp+1ECh] [rbp+E4h] BYREF
  SIZE_T v1365; // [rsp+1F0h] [rbp+E8h] BYREF
  void *v1366; // [rsp+1F8h] [rbp+F0h] BYREF
  int v1367; // [rsp+200h] [rbp+F8h] BYREF
  int v1368; // [rsp+204h] [rbp+FCh]
  int v1369; // [rsp+208h] [rbp+100h]
  int v1370; // [rsp+20Ch] [rbp+104h]
  unsigned int v1371; // [rsp+210h] [rbp+108h] BYREF
  unsigned int v1372; // [rsp+214h] [rbp+10Ch] BYREF
  __int64 v1373; // [rsp+218h] [rbp+110h]
  LPVOID v1374; // [rsp+220h] [rbp+118h]
  LPVOID v1375; // [rsp+228h] [rbp+120h]
  void *v1376; // [rsp+230h] [rbp+128h] BYREF
  HMODULE phModule; // [rsp+238h] [rbp+130h] BYREF
  HMODULE hModule; // [rsp+240h] [rbp+138h] BYREF
  __int128 v1379; // [rsp+248h] [rbp+140h] BYREF
  __int128 v1380; // [rsp+258h] [rbp+150h]
  __int128 v1381; // [rsp+268h] [rbp+160h] BYREF
  __int128 v1382; // [rsp+278h] [rbp+170h]
  __int64 v1383; // [rsp+288h] [rbp+180h] BYREF
  __int64 v1384; // [rsp+290h] [rbp+188h] BYREF
  __int64 v1385; // [rsp+298h] [rbp+190h] BYREF
  __int128 v1386; // [rsp+2A0h] [rbp+198h] BYREF
  __int64 v1387; // [rsp+2B0h] [rbp+1A8h] BYREF
  __int64 v1388[15]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _OWORD v1389[3]; // [rsp+330h] [rbp+228h] BYREF
  __int64 v1390; // [rsp+368h] [rbp+260h] BYREF
  char v1391[152]; // [rsp+370h] [rbp+268h] BYREF
  int v1392; // [rsp+408h] [rbp+300h] BYREF
  int v1393; // [rsp+40Ch] [rbp+304h]
  void *v1394; // [rsp+410h] [rbp+308h]
  void *v1395; // [rsp+418h] [rbp+310h]
  void *v1396; // [rsp+420h] [rbp+318h]
  const WCHAR *v1397; // [rsp+428h] [rbp+320h]
  const WCHAR *v1398; // [rsp+430h] [rbp+328h]
  __int64 v1399; // [rsp+438h] [rbp+330h]
  int v1400; // [rsp+440h] [rbp+338h]
  __m128i v1401; // [rsp+444h] [rbp+33Ch] BYREF
  __m128i v1402; // [rsp+454h] [rbp+34Ch] BYREF
  unsigned int v1403; // [rsp+464h] [rbp+35Ch] BYREF
  unsigned int v1404; // [rsp+468h] [rbp+360h]
  unsigned __int32 v1405; // [rsp+46Ch] [rbp+364h]
  unsigned int v1406; // [rsp+470h] [rbp+368h]
  int v1407; // [rsp+478h] [rbp+370h] BYREF
  _DWORD v1408[3]; // [rsp+47Ch] [rbp+374h] BYREF
  __int16 v1409; // [rsp+48Ah] [rbp+382h]
  __int64 v1410; // [rsp+490h] [rbp+388h]
  int v1411; // [rsp+4E8h] [rbp+3E0h] BYREF
  _DWORD v1412[5]; // [rsp+4ECh] [rbp+3E4h] BYREF
  void *v1413; // [rsp+500h] [rbp+3F8h]
  int v1414; // [rsp+558h] [rbp+450h] BYREF
  _DWORD v1415[5]; // [rsp+55Ch] [rbp+454h] BYREF
  SIZE_T v1416; // [rsp+570h] [rbp+468h]
  int v1417; // [rsp+5C8h] [rbp+4C0h] BYREF
  _DWORD v1418[5]; // [rsp+5CCh] [rbp+4C4h] BYREF
  void *v1419; // [rsp+5E0h] [rbp+4D8h]
  int v1420; // [rsp+638h] [rbp+530h] BYREF
  _DWORD v1421[5]; // [rsp+63Ch] [rbp+534h] BYREF
  void *v1422; // [rsp+650h] [rbp+548h]
  int v1423; // [rsp+6A8h] [rbp+5A0h] BYREF
  char v1424[20]; // [rsp+6ACh] [rbp+5A4h] BYREF
  void *v1425; // [rsp+6C0h] [rbp+5B8h]
  int v1426; // [rsp+718h] [rbp+610h] BYREF
  char v1427[20]; // [rsp+71Ch] [rbp+614h] BYREF
  SIZE_T v1428; // [rsp+730h] [rbp+628h]
  int v1429; // [rsp+788h] [rbp+680h] BYREF
  char v1430[20]; // [rsp+78Ch] [rbp+684h] BYREF
  void *v1431; // [rsp+7A0h] [rbp+698h]
  int v1432; // [rsp+7F8h] [rbp+6F0h] BYREF
  char v1433[20]; // [rsp+7FCh] [rbp+6F4h] BYREF
  void *v1434; // [rsp+810h] [rbp+708h]
  __int128 v1435; // [rsp+868h] [rbp+760h] BYREF
  __int128 v1436; // [rsp+878h] [rbp+770h] BYREF
  __int128 v1437; // [rsp+888h] [rbp+780h] BYREF
  __int128 v1438; // [rsp+898h] [rbp+790h] BYREF
  __int64 v1439; // [rsp+8A8h] [rbp+7A0h] BYREF
  unsigned __int32 v1440; // [rsp+8B0h] [rbp+7A8h]
  int v1441; // [rsp+8B4h] [rbp+7ACh]
  _DWORD v1442[12]; // [rsp+8B8h] [rbp+7B0h] BYREF
  __int128 v1443; // [rsp+8E8h] [rbp+7E0h] BYREF
  __int128 v1444; // [rsp+8F8h] [rbp+7F0h] BYREF
  __int64 v1445; // [rsp+908h] [rbp+800h]
  _OWORD v1446[2]; // [rsp+910h] [rbp+808h] BYREF
  __int64 v1447; // [rsp+930h] [rbp+828h]
  int v1448; // [rsp+938h] [rbp+830h]
  _OWORD v1449[2]; // [rsp+940h] [rbp+838h] BYREF
  __int64 v1450; // [rsp+960h] [rbp+858h]
  int v1451; // [rsp+968h] [rbp+860h]
  _OWORD v1452[2]; // [rsp+970h] [rbp+868h] BYREF
  __int64 v1453; // [rsp+990h] [rbp+888h]
  int v1454; // [rsp+998h] [rbp+890h]
  _OWORD v1455[2]; // [rsp+9A0h] [rbp+898h] BYREF
  __int64 v1456; // [rsp+9C0h] [rbp+8B8h]
  int v1457; // [rsp+9C8h] [rbp+8C0h]
  __int128 v1458; // [rsp+9D0h] [rbp+8C8h] BYREF
  __int128 v1459; // [rsp+9E0h] [rbp+8D8h] BYREF
  __int64 v1460; // [rsp+9F0h] [rbp+8E8h]
  _OWORD v1461[2]; // [rsp+9F8h] [rbp+8F0h] BYREF
  _DWORD v1462[6]; // [rsp+A18h] [rbp+910h] BYREF
  char v1463; // [rsp+A32h] [rbp+92Ah]
  unsigned __int16 v1464[34]; // [rsp+A34h] [rbp+92Ch] BYREF
  _DWORD v1465[6]; // [rsp+A78h] [rbp+970h] BYREF
  char v1466; // [rsp+A92h] [rbp+98Ah]
  unsigned __int16 v1467[34]; // [rsp+A94h] [rbp+98Ch] BYREF
  _DWORD v1468[6]; // [rsp+AD8h] [rbp+9D0h] BYREF
  char v1469; // [rsp+AF2h] [rbp+9EAh]
  unsigned __int16 v1470[34]; // [rsp+AF4h] [rbp+9ECh] BYREF
  _BYTE v1471[68]; // [rsp+B38h] [rbp+A30h] BYREF
  __int16 v1472; // [rsp+B7Ch] [rbp+A74h]
  unsigned __int16 v1473; // [rsp+BDEh] [rbp+AD6h]
  int v1474; // [rsp+BE4h] [rbp+ADCh]
  int v1475; // [rsp+BE8h] [rbp+AE0h]
  int v1476; // [rsp+C18h] [rbp+B10h] BYREF
  __int128 v1477; // [rsp+C20h] [rbp+B18h]
  __int128 v1478; // [rsp+C30h] [rbp+B28h]
  __int128 v1479; // [rsp+C40h] [rbp+B38h]
  __int64 v1480; // [rsp+C50h] [rbp+B48h]
  _BYTE v1481[176]; // [rsp+C58h] [rbp+B50h] BYREF
  WCHAR Filename[264]; // [rsp+D08h] [rbp+C00h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54629273>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive() )
  {
    return 1;
  }
  v1360 = 0;
  v1376 = 0LL;
  v1350 = 0;
  v1369 = 0;
  v1366 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
    ;
  v1 = dword_1808DDD3C;
  v1355 = -1;
  if ( !dword_1808DDD3C )
  {
    LODWORD(v1357) = 0;
    v2 = MemoryAlloc(0x338uLL);
    if ( !v2 )
      goto LABEL_14;
    v3 = 0;
    v4 = v2 + 7;
    v5 = -1;
    v6 = (unsigned __int8 *)&unk_180783012;
    v7 = 0;
    v8 = 103LL;
    v9 = 0;
    do
    {
      v10 = *(v6 - 1) | (*(v6 - 2) << 8);
      v11 = v6[2] << 8;
      v12 = *v6;
      v6 += 8;
      v13 = *(v6 - 7) | ((v12 | (v10 << 8)) << 8);
      v14 = v9 ^ v13;
      v15 = *(v6 - 3) | ((*(v6 - 4) | ((*(v6 - 5) | v11) << 8)) << 8);
      v16 = v7 ^ v9 ^ v13 ^ v15 ^ 0xAC987321;
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
      v9 = v3 ^ v36 ^ v38 ^ (24670 * __ROR4__(v35 ^ (v36 >> 3) ^ (43881 * (v36 ^ 0x605E)) ^ 0x7F1137F, 28));
      v3 = v13;
      *(v4 - 4) = v9;
      *v4 = v7;
      *(v4 - 5) = __ROR4__(v9, 8);
      v4 += 8;
      *(v4 - 9) = __ROR4__(v7, 8);
      *(v4 - 14) = __ROR4__(v9, 16);
      *(v4 - 10) = __ROR4__(v7, 16);
      *(v4 - 15) = __ROR4__(v9, 24);
      *(v4 - 11) = __ROR4__(v7, 24);
      --v8;
    }
    while ( v8 );
    v39 = 0LL;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    do
      v40 ^= v2[v39++];
    while ( v39 < 0x338 );
    if ( v40 != 64LL )
    {
      MemoryFree(v2);
LABEL_14:
      v43 = 4LL;
      v44 = (HMODULE *)&unk_1808DA540;
      do
      {
        if ( *v44 )
          FreeLibrary(*v44);
        v44 += 3;
        --v43;
      }
      while ( v43 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
      goto LABEL_47;
    }
    v2[823] = 0;
    memset_0(&unk_1808DA540, 0, 0x60uLL);
    v45 = v2;
    if ( *v2 )
    {
      while ( 1 )
      {
        v46 = -1LL;
        v47 = (const WCHAR *)v2;
        v41 = 0;
        do
          ++v46;
        while ( *(_WORD *)&v2[2 * v46] );
        v48 = &v2[2 * v46];
        v49 = (HMODULE *)((char *)&unk_1808DA540 + 24 * v42);
        if ( !GetModuleHandleExW(0, v47, v49) )
          break;
        if ( *(_WORD *)*v49 == 23117
          && (v50 = *((int *)*v49 + 15), (unsigned int)v50 < 0x10000000)
          && (v51 = (char *)*v49 + v50, v51 >= (char *)*v49)
          && *(_DWORD *)v51 == 17744 )
        {
          if ( *((_WORD *)v51 + 12) == 267 || *((_WORD *)v51 + 12) == 523 )
          {
            *(_QWORD *)((char *)&unk_1808DA540 + 24 * v42 + 12) = *((_QWORD *)v51 + 17);
            *((_DWORD *)&unk_1808DA540 + 6 * v42 + 2) = *((_DWORD *)v51 + 20);
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
        v52 = *(_DWORD *)(v48 + 2);
        v2 = v48 + 6;
        v53 = 0;
        if ( v52 )
        {
          v54 = v42;
          do
          {
            v55 = -1LL;
            v56 = v2;
            do
              ++v55;
            while ( v2[v55] );
            v2 += v55 + 1;
            if ( v41 < 0 )
            {
              v58 = v1357;
            }
            else
            {
              ProcAddress = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v54), v56);
              if ( !ProcAddress )
                goto LABEL_44;
              v58 = v1357;
              v54 = v42;
              off_1808D1340[(unsigned int)v1357] = ProcAddress;
            }
            ++v53;
            LODWORD(v1357) = v58 + 1;
          }
          while ( v53 < v52 );
        }
        ++v42;
        if ( !*v2 )
          goto LABEL_44;
      }
      v41 = -1073741702;
    }
LABEL_44:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v45);
    if ( v41 < 0 )
      goto LABEL_14;
    v1 = dword_1808DDD3C;
  }
  dword_1808DDD3C = v1 + 1;
LABEL_47:
  _InterlockedExchange(&dword_1808DDD40, 0);
  v60 = 0LL;
  v1338 = 0LL;
  v61 = 0LL;
  pcchLength = 0LL;
  v62 = 0;
  v63 = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_95;
  lpMem = (LPVOID)off_1808D1450[0]();
  v64 = 0LL;
  if ( !lpMem )
    goto LABEL_49;
  v1364 = 0;
  v66 = 0LL;
  m = 0LL;
  v67 = 0LL;
  for ( i = 0LL; ; v67 = (SIZE_T)i )
  {
    if ( v64 )
      v67 = v66;
    v1313 = &v1364;
    if ( (unsigned int)off_1808D1470[0]() )
    {
      v1338 = v67;
      m = 0LL;
      v60 = (const wchar_t *)v67;
      goto LABEL_68;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      break;
    if ( i )
      goto LABEL_62;
    i = MemoryAlloc(v1364);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&m);
    m = (size_t)i;
    v64 = i;
    if ( !i )
    {
      v63 = -2147024882;
      goto LABEL_68;
    }
    v66 = (SIZE_T)i;
  }
  if ( !LastError )
  {
LABEL_62:
    v63 = -2147467259;
    goto LABEL_68;
  }
  if ( LastError > 0 )
    v63 = (unsigned __int16)LastError | 0x80070000;
  else
    v63 = LastError;
LABEL_68:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&m);
  if ( v63 < 0 )
    goto LABEL_94;
  v70 = off_1808D1468[0];
  CurrentThreadId = GetCurrentThreadId();
  lpMem = (LPVOID)((__int64 (__fastcall *)(_QWORD))v70)(CurrentThreadId);
  v72 = 0LL;
  if ( !lpMem )
  {
LABEL_49:
    v63 = GetLastError();
    v65 = v63 < 0;
    if ( v63 > 0 )
    {
      v63 = (unsigned __int16)v63 | 0x80070000;
      v65 = v63 < 0;
    }
    v62 = 0;
    if ( !v65 )
      v63 = -2147467259;
    goto LABEL_95;
  }
  v1363 = 0;
  v73 = 0LL;
  m = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v63 = 0;
  while ( 1 )
  {
    if ( v72 )
      v74 = v73;
    v1313 = &v1363;
    if ( (unsigned int)off_1808D1470[0]() )
    {
      pcchLength = v74;
      m = 0LL;
      v61 = (const wchar_t *)v74;
      goto LABEL_85;
    }
    v76 = GetLastError();
    if ( v76 != 122 )
      break;
    if ( v75 )
      goto LABEL_79;
    v75 = MemoryAlloc(v1363);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&m);
    m = (size_t)v75;
    v72 = v75;
    if ( !v75 )
    {
      v63 = -2147024882;
      goto LABEL_85;
    }
    v73 = (size_t)v75;
    v74 = (size_t)v75;
  }
  if ( !v76 )
  {
LABEL_79:
    v63 = -2147467259;
    goto LABEL_85;
  }
  v63 = v76 > 0 ? (unsigned __int16)v76 | 0x80070000 : v76;
LABEL_85:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&m);
  if ( v63 < 0 )
  {
LABEL_94:
    v62 = 0;
    goto LABEL_95;
  }
  if ( !v60 || wcscmp_0(v60, L"WinSta0") || !v61 || wcscmp_0(v61, L"Default") )
    goto LABEL_95;
  v1367 = 0;
  CurrentProcess = GetCurrentProcess();
  if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1367) )
    goto LABEL_49;
  if ( (v1367 & 0xF) == 0 )
    v62 = 1;
LABEL_95:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&pcchLength);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1338);
  v78 = 0;
  if ( v63 >= 0 )
    v78 = v62;
  v1320 = v78;
  v79 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(&v1366, v79);
  lpModuleName = (LPCWSTR)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1366);
  if ( !lpModuleName )
  {
    v80 = -2147024882;
LABEL_99:
    v81 = 0;
    goto LABEL_100;
  }
  v85 = 0LL;
  LODWORD(v1329) = 0;
  *(_OWORD *)Src = 0LL;
  LODWORD(v1342) = 0;
  v1330 = 0LL;
  v86 = GetProcessHeap();
  v87 = (unsigned __int16 *)HeapAlloc(v86, 8u, 0xA0uLL);
  LODWORD(v1357) = 56;
  v88 = v87;
  if ( !v87 )
  {
    v88 = 0LL;
    goto LABEL_596;
  }
  *(_OWORD *)v87 = xmmword_1808D8540[0];
  *((_OWORD *)v87 + 1) = *((_OWORD *)&_ImageBase + 579669);
  *((_OWORD *)v87 + 2) = *((_OWORD *)&_ImageBase + 579670);
  *((_OWORD *)v87 + 3) = *((_OWORD *)&_ImageBase + 579671);
  *((_OWORD *)v87 + 4) = *((_OWORD *)&_ImageBase + 579672);
  *((_OWORD *)v87 + 5) = *((_OWORD *)&_ImageBase + 579673);
  *((_OWORD *)v87 + 6) = *((_OWORD *)&_ImageBase + 579674);
  *((_OWORD *)v87 + 7) = *((_OWORD *)&_ImageBase + 579675);
  *((_OWORD *)v87 + 8) = xmmword_1808D8540[8];
  *((_OWORD *)v87 + 9) = xmmword_1808D8540[9];
  v89 = GetProcessHeap();
  v90 = HeapAlloc(v89, 8u, 8uLL);
  if ( !v90 )
  {
LABEL_596:
    v80 = -1073741801;
    goto LABEL_597;
  }
  *v90 = qword_1808D8690;
  v1349 = __rdtsc();
  LODWORD(dwBytes) = 0;
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(4u, 4, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
  {
    v85 = v91;
    goto LABEL_598;
  }
  v92 = RtlUIntAdd(0, v1315, (int *)&dwBytes);
  v80 = v92 | 0x10000000;
  v85 = v93;
  LODWORD(v1317) = v92 | 0x10000000;
  if ( v92 < 0 )
    goto LABEL_598;
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(4u, 160, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_598;
  v94 = RtlUIntAdd(dwBytes, v1315, (int *)&dwBytes);
  v80 = v94 | 0x10000000;
  LODWORD(v1317) = v94 | 0x10000000;
  if ( v94 < 0 )
    goto LABEL_598;
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(4u, 8, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_598;
  v95 = RtlUIntAdd(dwBytes, v1315, (int *)&dwBytes);
  v80 = v95 | 0x10000000;
  LODWORD(v1317) = v95 | 0x10000000;
  if ( v95 < 0 )
    goto LABEL_598;
  LODWORD(v1325) = 0;
  LODWORD(v1317) = RtlUIntAdd(4u, 8, (int *)&v1325);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_598;
  v96 = RtlUIntAdd(dwBytes, v1325, (int *)&dwBytes);
  v80 = v96 | 0x10000000;
  LODWORD(v1317) = v96 | 0x10000000;
  if ( v96 < 0 )
    goto LABEL_598;
  pcchLength = 0LL;
  if ( StringCchLengthW(L"DeferWidgetsInitialization", v97, &pcchLength) < 0 )
  {
    v80 = -1073741762;
    v78 = v98;
LABEL_597:
    LODWORD(v1317) = v80;
    goto LABEL_598;
  }
  LODWORD(v1315) = 0;
  v80 = RtlUIntAdd(4u, 2 * ((int)pcchLength + 1), (int *)&v1315);
  LODWORD(v1317) = v80;
  v100 = v1325;
  if ( v80 >= 0 )
    v100 = v1315;
  v78 = v99;
  if ( v80 < 0 )
    goto LABEL_598;
  v101 = RtlUIntAdd(dwBytes, v100, (int *)&dwBytes);
  v80 = v101 | 0x10000000;
  LODWORD(v1317) = v101 | 0x10000000;
  if ( v101 < 0 )
    goto LABEL_598;
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(4u, 4, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_598;
  v102 = RtlUIntAdd(dwBytes, v1315, (int *)&dwBytes);
  v80 = v102 | 0x10000000;
  LODWORD(v1317) = v102 | 0x10000000;
  if ( v102 < 0 )
    goto LABEL_598;
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(4u, 4, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_598;
  v103 = RtlUIntAdd(dwBytes, v1315, (int *)&dwBytes);
  v80 = v103 | 0x10000000;
  LODWORD(v1317) = v103 | 0x10000000;
  if ( v103 < 0 )
    goto LABEL_598;
  HIDWORD(Src[0]) = dwBytes;
  v104 = dwBytes;
  v105 = GetProcessHeap();
  v106 = HeapAlloc(v105, 8u, v104);
  if ( !v106 )
  {
    v80 = -1073741801;
    goto LABEL_180;
  }
  Src[1] = v106;
  LODWORD(v1346) = 0;
  v1345 = 0LL;
  LODWORD(Src[0]) = 0;
  Size = (SIZE_T)v106;
  v1319 = (SIZE_T)v85;
  v1324 = v88;
  LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v106, 4LL, (__int64 *)&v1346);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
  {
LABEL_181:
    v78 = v1320;
    goto LABEL_598;
  }
  if ( v108 + 2 > (unsigned int *)((char *)v108 + HIDWORD(Src[0])) )
    goto LABEL_176;
  v110 = v1346;
  *v108 = v109;
  *v110 = 0;
  v111 = LODWORD(Src[0]) + 1;
  LODWORD(v1346) = 0;
  ++LODWORD(Src[0]);
  v1345 = 0LL;
  if ( v88 )
  {
    if ( !v107 )
      goto LABEL_136;
  }
  else if ( v107 )
  {
LABEL_136:
    v80 = -1073741811;
LABEL_180:
    LODWORD(v1317) = v80;
    goto LABEL_181;
  }
  if ( Src[1] )
  {
    v113 = (int *)Src[1];
    Size = (SIZE_T)Src[1];
    LODWORD(v1334) = 0;
    if ( v111 )
    {
      do
      {
        v114 = *v113;
        LODWORD(v1315) = 0;
        LODWORD(v1317) = RtlUIntAdd(4u, v114, (int *)&v1315);
        v80 = (int)v1317;
        if ( (int)v1317 < 0 )
          goto LABEL_181;
        LODWORD(v1317) = RtlULongLongAdd(v115, (unsigned int)v1315, (__int64 *)&Size);
        v80 = (int)v1317;
        if ( (int)v1317 < 0 )
          goto LABEL_181;
        v113 = (int *)Size;
        LODWORD(v1334) = (_DWORD)v1334 + 1;
      }
      while ( (unsigned int)v1334 < v116 );
      v1319 = (SIZE_T)v85;
      v1324 = v88;
    }
    LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v113, 4LL, (__int64 *)&v1346);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_181;
    if ( (char *)v118 + v117 + 4 > (char *)Src[1] + HIDWORD(Src[0]) )
      goto LABEL_176;
    *v118 = v117;
    if ( v88 )
      memcpy_0(v1346, v88, v117);
    v112 = 4;
  }
  else
  {
    LODWORD(v1315) = 0;
    LODWORD(v1317) = RtlUIntAdd(v109, v107, (int *)&v1315);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_181;
    LODWORD(v1317) = RtlUIntAdd(HIDWORD(Src[0]), v1315, (int *)Src + 1);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_181;
  }
  v119 = LODWORD(Src[0]) + 1;
  LODWORD(v1346) = 0;
  ++LODWORD(Src[0]);
  v1345 = 0LL;
  if ( !v85 )
    goto LABEL_136;
  if ( Src[1] )
  {
    v121 = (int *)Src[1];
    Size = (SIZE_T)Src[1];
    if ( v119 )
    {
      do
      {
        v122 = *v121;
        LODWORD(v1315) = 0;
        LODWORD(v1317) = RtlUIntAdd(4u, v122, (int *)&v1315);
        v80 = (int)v1317;
        if ( (int)v1317 < 0 )
          goto LABEL_181;
        v80 = RtlULongLongAdd(v123, (unsigned int)v1315, (__int64 *)&Size);
        LODWORD(v1317) = v80;
        if ( v80 < 0 )
          goto LABEL_181;
        v121 = (int *)Size;
      }
      while ( v125 + 1 < v124 );
      v1319 = (SIZE_T)v85;
      v1324 = v88;
    }
    LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v121, 4LL, (__int64 *)&v1346);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_181;
    if ( v126 + 3 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_176;
    *v126 = 8;
    memcpy_0(v1346, v85, 8uLL);
    v120 = 4LL;
  }
  else
  {
    LODWORD(v1315) = 0;
    LODWORD(v1317) = RtlUIntAdd(v112, 8, (int *)&v1315);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_181;
    LODWORD(v1317) = RtlUIntAdd(HIDWORD(Src[0]), v1315, (int *)Src + 1);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_181;
  }
  v127 = LODWORD(Src[0]) + 1;
  LODWORD(v1346) = 0;
  ++LODWORD(Src[0]);
  v1345 = 0LL;
  if ( Src[1] )
  {
    v130 = (int *)Src[1];
    Size = (SIZE_T)Src[1];
    LODWORD(v1334) = 0;
    if ( v127 )
    {
      do
      {
        v131 = *v130;
        LODWORD(v1315) = 0;
        LODWORD(v1317) = RtlUIntAdd(4u, v131, (int *)&v1315);
        v80 = (int)v1317;
        if ( (int)v1317 < 0 )
          goto LABEL_181;
        LODWORD(v1317) = RtlULongLongAdd(v132, (unsigned int)v1315, (__int64 *)&Size);
        v80 = (int)v1317;
        if ( (int)v1317 < 0 )
          goto LABEL_181;
        v130 = (int *)Size;
        LODWORD(v1334) = (_DWORD)v1334 + 1;
      }
      while ( (unsigned int)v1334 < v133 );
      v1319 = (SIZE_T)v85;
      v120 = 4LL;
      v1324 = v88;
    }
    LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v130, v120, (__int64 *)&v1346);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_181;
    if ( v134 + 3 <= (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
    {
      v135 = v1346;
      v136 = v1349;
      *v134 = 8;
      *v135 = v136;
      v129 = LODWORD(Src[0]) + 1;
      goto LABEL_178;
    }
LABEL_176:
    v80 = -1073741789;
    goto LABEL_180;
  }
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(v120, 8, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_181;
  v80 = RtlUIntAdd(HIDWORD(Src[0]), v1315, (int *)Src + 1);
  LODWORD(v1317) = v80;
  if ( v80 < 0 )
    goto LABEL_181;
  v129 = LODWORD(Src[0]) + 1;
LABEL_178:
  LODWORD(Src[0]) = v129;
  m = 0LL;
  if ( StringCchLengthW(L"DeferWidgetsInitialization", v128, &m) < 0 )
  {
    v80 = -1073741762;
    goto LABEL_180;
  }
  LODWORD(v1317) = RtlULongLongAdd(m, 1LL, (__int64 *)&m);
  v80 = (int)v1317;
  if ( (int)v1317 >= 0 )
  {
    LODWORD(v1346) = 0;
    v1345 = 0LL;
    if ( 2 * (_DWORD)m )
    {
      if ( !Src[1] )
      {
        LODWORD(v1315) = 0;
        LODWORD(v1317) = RtlUIntAdd(4u, 2 * (int)m, (int *)&v1315);
        v80 = (int)v1317;
        if ( (int)v1317 >= 0 )
        {
          v138 = RtlUIntAdd(HIDWORD(Src[0]), v1315, (int *)Src + 1);
          v137 = (unsigned int)Src[0];
          v80 = v138;
          LODWORD(v1317) = v138;
          if ( v138 >= 0 )
          {
            v137 = LODWORD(Src[0]) + 1;
            LODWORD(v1317) = 0;
            ++LODWORD(Src[0]);
            v80 = 0;
          }
        }
        goto LABEL_198;
      }
      v139 = (int *)Src[1];
      v140 = 0;
      Size = (SIZE_T)Src[1];
      if ( v137 )
      {
        do
        {
          v141 = *v139;
          LODWORD(v1315) = 0;
          LODWORD(v1317) = RtlUIntAdd(4u, v141, (int *)&v1315);
          v80 = (int)v1317;
          if ( (int)v1317 < 0 )
            goto LABEL_198;
          v80 = RtlULongLongAdd(v142, (unsigned int)v1315, (__int64 *)&Size);
          LODWORD(v1317) = v80;
          if ( v80 < 0 )
            goto LABEL_198;
          v139 = (int *)Size;
        }
        while ( ++v140 < v137 );
      }
      LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v139, 4LL, (__int64 *)&v1346);
      v80 = (int)v1317;
      if ( (int)v1317 < 0 )
        goto LABEL_198;
      if ( (char *)v143 + v144 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
      {
        v145 = v1346;
        *v143 = v144;
        memcpy_0(v145, L"DeferWidgetsInitialization", (unsigned int)v144);
        v137 = ++LODWORD(Src[0]);
        goto LABEL_198;
      }
      v80 = -1073741789;
    }
    else
    {
      v80 = -1073741811;
    }
    LODWORD(v1317) = v80;
  }
LABEL_198:
  v78 = v1320;
  if ( v80 < 0 )
    goto LABEL_598;
  LODWORD(v1346) = 0;
  v1345 = 0LL;
  if ( Src[1] )
  {
    v148 = (int *)Src[1];
    Size = (SIZE_T)Src[1];
    LODWORD(v1334) = 0;
    if ( v137 )
    {
      do
      {
        v149 = *v148;
        LODWORD(v1315) = 0;
        LODWORD(v1317) = RtlUIntAdd(4u, v149, (int *)&v1315);
        v80 = (int)v1317;
        if ( (int)v1317 < 0 )
          goto LABEL_587;
        LODWORD(v1317) = RtlULongLongAdd(v150, (unsigned int)v1315, (__int64 *)&Size);
        v80 = (int)v1317;
        if ( (int)v1317 < 0 )
          goto LABEL_587;
        v148 = (int *)Size;
        LODWORD(v1334) = (_DWORD)v1334 + 1;
      }
      while ( (unsigned int)v1334 < v151 );
      v1319 = (SIZE_T)v85;
      v1324 = v88;
    }
    LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v148, 4LL, (__int64 *)&v1346);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_587;
    if ( v152 + 2 > (unsigned int *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_583;
    v153 = v1346;
    *v152 = v147;
    *v153 = v146;
  }
  else
  {
    LODWORD(v1315) = 0;
    LODWORD(v1317) = RtlUIntAdd(4u, 4, (int *)&v1315);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_598;
    LODWORD(v1317) = RtlUIntAdd(HIDWORD(Src[0]), v1315, (int *)Src + 1);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_587;
  }
  v154 = LODWORD(Src[0]) + 1;
  LODWORD(v1346) = 0;
  ++LODWORD(Src[0]);
  v1345 = 0LL;
  if ( !Src[1] )
  {
    LODWORD(v1315) = 0;
    LODWORD(v1317) = RtlUIntAdd(v147, v147, (int *)&v1315);
    v80 = (int)v1317;
    if ( (int)v1317 < 0 )
      goto LABEL_587;
    v80 = RtlUIntAdd(HIDWORD(Src[0]), v1315, (int *)Src + 1);
    LODWORD(v1317) = v80;
    if ( v80 < 0 )
      goto LABEL_587;
    ++LODWORD(Src[0]);
    goto LABEL_223;
  }
  v156 = (int *)Src[1];
  Size = (SIZE_T)Src[1];
  LODWORD(v1334) = 0;
  if ( v154 )
  {
    do
    {
      v157 = *v156;
      LODWORD(v1315) = 0;
      LODWORD(v1317) = RtlUIntAdd(4u, v157, (int *)&v1315);
      v80 = (int)v1317;
      if ( (int)v1317 < 0 )
        goto LABEL_587;
      LODWORD(v1317) = RtlULongLongAdd(v158, (unsigned int)v1315, (__int64 *)&Size);
      v80 = (int)v1317;
      if ( (int)v1317 < 0 )
        goto LABEL_587;
      v156 = (int *)Size;
      LODWORD(v1334) = (_DWORD)v1334 + 1;
    }
    while ( (unsigned int)v1334 < v159 );
    v1319 = (SIZE_T)v85;
    v1324 = v88;
  }
  LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v156, 4LL, (__int64 *)&v1346);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_587;
  if ( v161 + 2 > (unsigned int *)((char *)Src[1] + HIDWORD(Src[0])) )
  {
LABEL_583:
    v80 = -1073741789;
    goto LABEL_586;
  }
  v162 = v1346;
  *v161 = v160;
  v155 = v160;
  *v162 = v160;
  ++LODWORD(Src[0]);
LABEL_223:
  LODWORD(v1315) = 0;
  v80 = RtlUIntAdd(v155, v155, (int *)&v1315);
  LODWORD(v1317) = v80;
  if ( v80 < 0 )
    goto LABEL_587;
  LODWORD(dwBytes) = v1315;
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(v163, 8, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_587;
  v80 = RtlUIntAdd(v164, v1315, (int *)&dwBytes);
  LODWORD(v1317) = v80;
  if ( v80 < 0 )
    goto LABEL_235;
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(v166, v166, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
  {
LABEL_587:
    v78 = v146;
    goto LABEL_598;
  }
  v80 = RtlUIntAdd(dwBytes, v1315, (int *)&dwBytes);
  LODWORD(v1317) = v80;
  if ( v80 < 0 )
  {
LABEL_235:
    v78 = v165;
    goto LABEL_598;
  }
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(v167, v167, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_587;
  v80 = RtlUIntAdd(dwBytes, v1315, (int *)&dwBytes);
  LODWORD(v1317) = v80;
  if ( v80 < 0 )
    goto LABEL_235;
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(v168, v168, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_587;
  v80 = RtlUIntAdd(dwBytes, v1315, (int *)&dwBytes);
  LODWORD(v1317) = v80;
  if ( v80 < 0 )
    goto LABEL_235;
  LODWORD(v1315) = 0;
  LODWORD(v1317) = RtlUIntAdd(v169, v169, (int *)&v1315);
  v80 = (int)v1317;
  if ( (int)v1317 < 0 )
    goto LABEL_587;
  v80 = RtlUIntAdd(dwBytes, v1315, (int *)&dwBytes);
  LODWORD(v1317) = v80;
  if ( v80 < 0 )
    goto LABEL_235;
  LODWORD(v1329) = dwBytes;
  v170 = 0LL;
  v1323 = 0LL;
  v1321 = 0LL;
  v1336 = 0LL;
  LODWORD(v1334) = 0;
  v1337 = 0LL;
  v1328 = 0LL;
  v1332 = 0LL;
  lpMem = (LPVOID)__rdtsc();
  v1353 = 8;
  v172 = RtlUIntAdd(8u, SHIDWORD(Src[0]), (int *)&v1353);
  if ( v172 < 0 )
    goto LABEL_244;
  v173 = (v1353 + 7) & 0xFFFFFFF8;
  if ( v173 < v1353 )
  {
    v80 = -805306219;
LABEL_586:
    LODWORD(v1317) = v80;
    goto LABEL_587;
  }
  v1353 = (v1353 + 7) & 0xFFFFFFF8;
  v174 = v173;
  v175 = GetProcessHeap();
  v176 = (char *)HeapAlloc(v175, 8u, v174);
  v170 = v176;
  if ( v176 )
  {
    *(_DWORD *)v176 = Src[0];
    m = (size_t)v176;
    v177 = RtlULongLongAdd((unsigned __int64)v176, 4LL, (__int64 *)&m);
    pcchLength = v179;
    v172 = v177;
    if ( v177 < 0
      || (v180 = m,
          *(_DWORD *)m = HIDWORD(Src[0]),
          v181 = RtlULongLongAdd(v180, v178, (__int64 *)&m),
          pcchLength = (size_t)v170,
          v172 = v181,
          v181 < 0) )
    {
      v182 = GetProcessHeap();
      HeapFree(v182, 0, (LPVOID)pcchLength);
      v170 = (char *)v1323;
      v171 = (unsigned int)v1323;
    }
    else
    {
      *(_QWORD *)&v170[v1353 - 8] = lpMem;
      memcpy_0((void *)m, Src[1], HIDWORD(Src[0]));
      v171 = v1353;
      v1323 = v170;
    }
    v146 = v1320;
LABEL_244:
    v80 = v172 | 0x10000000;
    LODWORD(v1317) = v80;
    if ( v80 < 0 )
      goto LABEL_318;
    v1325 = 0LL;
    if ( !v170 )
    {
      v80 = -805306355;
      goto LABEL_586;
    }
    v183 = v171;
    v1338 = v171;
    if ( !v171 || (Size = v171 + 8LL, v184 = MemoryAlloc(Size), v1317 = v184, v185 = 0, !v184) )
    {
      v80 = -805306367;
      LODWORD(v1317) = -805306367;
      goto LABEL_319;
    }
    LOBYTE(v1316) = 0;
    v186 = 0LL;
    if ( v183 )
    {
      do
        v185 ^= v170[v186++];
      while ( v186 < v183 );
      LOBYTE(v1316) = v185;
    }
    v187 = (size_t)v184;
    m = (size_t)v184;
    v1315 = 0xC81ECB17B1B54A58uLL;
    v188 = -1;
    LODWORD(v1339) = 0;
    LODWORD(dwBytes) = 0;
    v189 = (unsigned __int8 *)v170;
    v190 = 0;
    v191 = v183 & 7;
    if ( (v183 & 7) != 0 )
    {
      LODWORD(dwBytes) = 0;
      LODWORD(v1339) = 0;
      v192 = 56;
      v193 = 0;
      do
      {
        v194 = *v189;
        if ( v190 >= 4 )
        {
          v195 = (v194 << v192) | v1339;
          LODWORD(v1339) = v195;
        }
        else
        {
          v195 = v1339;
          v193 |= v194 << (v192 - 32);
        }
        ++v189;
        ++v190;
        v192 -= 8;
      }
      while ( (int)v190 < v191 );
      LODWORD(dwBytes) = v193;
      v1323 = v170;
      v1319 = (SIZE_T)v85;
      v1324 = v88;
      LODWORD(v1331) = 0;
      v190 = v193 ^ 0xB17A307A;
      v196 = v195 ^ 0x42F6B18D;
      v197 = v193 ^ 0xB17A307A;
      v198 = v196;
      if ( (v183 & 7) != 0 )
      {
        v199 = (_BYTE *)m;
        do
        {
          if ( (unsigned int)v1331 >= 4 )
          {
            v198 = __ROR4__(v198, 24);
            v200 = v198;
          }
          else
          {
            v197 = __ROR4__(v197, 24);
            v200 = v197;
          }
          LODWORD(v1331) = v1331 + 1;
          v201 = (size_t)(v199 + 1);
          *v199++ = v200;
        }
        while ( (int)v1331 < v191 );
        v187 = v201;
        m = v201;
        v185 = v1316;
      }
      else
      {
        v187 = m;
      }
      if ( (unsigned int)v191 <= 4 )
      {
        v188 = 0;
        if ( (unsigned int)v191 >= 4 )
          goto LABEL_273;
        v190 = v190 >> (8 * (4 - v191)) << (8 * (4 - v191));
      }
      else
      {
        v188 = v196 >> (8 * (8 - v191)) << (8 * (8 - v191));
      }
      v187 = m;
    }
LABEL_273:
    v202 = v183 >> 3;
    if ( v183 >> 3 )
    {
      v203 = v189 + 2;
      v204 = WORD2(v1315);
      v205 = v1339;
      v206 = v202;
      LODWORD(v1335) = WORD1(v1315);
      v207 = dwBytes;
      pcchLength = v187 + 7;
      do
      {
        v208 = v203[1] | ((*v203 | ((*(v203 - 1) | (*(v203 - 2) << 8)) << 8)) << 8);
        v209 = v203[5] | ((v203[4] | ((v203[3] | (v203[2] << 8)) << 8)) << 8);
        lpMem = v203 + 8;
        v210 = v188 ^ v209;
        v211 = v190 ^ HIDWORD(v1315) ^ v208 ^ ((v188 ^ v209) - 19032);
        v212 = v210 ^ (__ROR4__(v211, 7) + WORD1(v1315) * __ROR4__(v211 ^ HIDWORD(v1315), 15));
        v213 = v211 ^ (v204 * __ROR4__(v212 - 1313519016, 9) - __ROR4__(v212, 10));
        v214 = v212 ^ (__ROR4__(v213, 27) + HIWORD(v1315) * __ROR4__(v213 ^ v204, 28));
        v215 = v213 ^ (HIDWORD(v1315) - (v214 ^ 0xB1B54A58));
        v216 = v214 ^ (WORD1(v1315) * (v215 - 19032) - (v215 >> 6));
        v217 = v215 ^ (19032 * (v204 ^ __ROR4__(v216, 15)));
        v218 = v216 ^ (v204 * (HIWORD(v1315) + __ROR4__(~v217, 3)));
        v219 = v217 ^ (v218 - 19032 - HIDWORD(v1315));
        v220 = v218 ^ (v1335 * (v219 ^ HIWORD(v1315))) ^ __ROR4__(v219, 10);
        v221 = v219 ^ __ROR4__(v220, 3) ^ (v204 * __ROR4__(v220 ^ 0x4A58, 26));
        v222 = v220 ^ (19032 * (__ROR4__(v221, 15) - HIWORD(v1315)));
        v223 = v221 ^ (19032 * (HIWORD(v1315) ^ v222)) ^ ((v222 ^ (v222 >> 14)) >> 1) ^ (19032
                                                                                       * ((8 * (v222 - v204)) | ((v222 - v204) >> 29)));
        v224 = v222 ^ (WORD1(v1315) * (v223 - v204) - (v223 >> 13));
        v225 = v223 ^ __ROR4__(v224, 11) ^ (v204 * __ROR4__(-1313519016 - v224, 9));
        v226 = v224 ^ (v225 - HIWORD(v1315) + 1313519016);
        v227 = v225 ^ (19032 * (v226 ^ WORD1(v1315)) - __ROR4__(v226, 7));
        v228 = v226 ^ (WORD1(v1315) * __ROR4__(HIWORD(v1315) ^ v227, 28) - __ROR4__(v227, 16));
        v229 = v227 ^ (__ROR4__(v228, 4) + v204 * __ROR4__(-1313519016 - v228, 10));
        v230 = v228 ^ __ROR4__(v229, 9) ^ (HIWORD(v1315) * __ROR4__(v229 + 1313519016, 4));
        v231 = v229 ^ (19032 * __ROR4__(v230 ^ HIDWORD(v1315), 24) - __ROR4__(v230, 30));
        v232 = v230 ^ (WORD1(v1315) * __ROR4__(HIDWORD(v1315) - v231, 11) - __ROR4__(v231, 12));
        v233 = v231 ^ (v232 >> 8) ^ (v204 * (WORD1(v1315) ^ v232));
        v190 = v207 ^ v233;
        v234 = v233 ^ HIDWORD(v1315) ^ 0xB1B54A58;
        v235 = (_BYTE *)pcchLength;
        v236 = v232 ^ v234;
        v203 = (unsigned __int8 *)lpMem;
        v188 = v205 ^ v236;
        v207 = v208;
        v205 = v209;
        *(_BYTE *)(pcchLength - 4) = v190;
        *v235 = v188;
        *(v235 - 5) = __ROR4__(v190, 8);
        *(v235 - 1) = __ROR4__(v188, 8);
        *(v235 - 6) = __ROR4__(v190, 16);
        *(v235 - 2) = __ROR4__(v188, 16);
        *(v235 - 7) = __ROR4__(v190, 24);
        *(v235 - 3) = __ROR4__(v188, 24);
        pcchLength = (size_t)(v235 + 8);
        --v206;
      }
      while ( v206 );
      v185 = v1316;
      v88 = v1324;
      v85 = (void *)v1319;
      v170 = (char *)v1323;
      v183 = v1338;
    }
    *(_QWORD *)((char *)v1317 + v183) = v185;
    v237 = GetProcessHeap();
    v1323 = HeapAlloc(v237, 8u, 0x30uLL);
    v238 = (LPVOID *)v1323;
    if ( v1323 )
    {
      *(_DWORD *)v1323 = Size;
      v239 = GetProcessHeap();
      v240 = HeapAlloc(v239, 8u, (unsigned int)Size);
      if ( !v240 )
      {
        v241 = v238;
LABEL_283:
        v246 = -1073741801;
        lpMem = v241[1];
        if ( lpMem )
        {
          v247 = GetProcessHeap();
          HeapFree(v247, 0, lpMem);
          v241 = (LPVOID *)v1323;
          *((_QWORD *)v1323 + 1) = 0LL;
        }
        lpMem = v241[3];
        if ( lpMem )
        {
          v248 = GetProcessHeap();
          HeapFree(v248, 0, lpMem);
          v241 = (LPVOID *)v1323;
          *((_QWORD *)v1323 + 3) = 0LL;
        }
        lpMem = v241[5];
        if ( lpMem )
        {
          v249 = GetProcessHeap();
          HeapFree(v249, 0, lpMem);
          *((_QWORD *)v1323 + 5) = 0LL;
        }
        v250 = GetProcessHeap();
        HeapFree(v250, 0, v1323);
        goto LABEL_292;
      }
      v238[1] = v240;
      memcpy_0(v240, v1317, (unsigned int)Size);
      *((_DWORD *)v238 + 4) = 160;
      v242 = GetProcessHeap();
      v243 = HeapAlloc(v242, 8u, 0xA0uLL);
      if ( !v243 )
        goto LABEL_282;
      v238[3] = v243;
      *v243 = xmmword_1808D85F0[0];
      v243[1] = xmmword_1808D85F0[1];
      v243[2] = xmmword_1808D85F0[2];
      v243[3] = xmmword_1808D85F0[3];
      v243[4] = xmmword_1808D85F0[4];
      v243[5] = xmmword_1808D85F0[5];
      v243[6] = xmmword_1808D85F0[6];
      v243[7] = xmmword_1808D85F0[7];
      v243[8] = xmmword_1808D85F0[8];
      v243[9] = xmmword_1808D85F0[9];
      *((_DWORD *)v238 + 8) = 8;
      v244 = GetProcessHeap();
      v245 = HeapAlloc(v244, 8u, 8uLL);
      if ( !v245 )
      {
LABEL_282:
        v241 = (LPVOID *)v1323;
        goto LABEL_283;
      }
      v238[5] = v245;
      *v245 = qword_1808D85E0;
      v251 = v238;
      v246 = 0;
      v1321 = v251;
      v1325 = 0LL;
    }
    else
    {
      v246 = -1073741801;
    }
LABEL_292:
    v1323 = v88;
    v252 = (SIZE_T)v85;
    v1327 = v85;
    v253 = (int *)v1321;
    m = (size_t)v170;
    v254 = GetProcessHeap();
    HeapFree(v254, 0, v1317);
    v255 = v1325;
    if ( v1325 )
    {
      lpMem = *(LPVOID *)(v1325 + 8);
      if ( lpMem )
      {
        v256 = GetProcessHeap();
        HeapFree(v256, 0, lpMem);
        *(_QWORD *)(v255 + 8) = 0LL;
      }
      lpMem = *(LPVOID *)(v255 + 24);
      if ( lpMem )
      {
        v257 = GetProcessHeap();
        HeapFree(v257, 0, lpMem);
        *(_QWORD *)(v255 + 24) = 0LL;
      }
      lpMem = *(LPVOID *)(v255 + 40);
      if ( lpMem )
      {
        v258 = GetProcessHeap();
        HeapFree(v258, 0, lpMem);
        *(_QWORD *)(v255 + 40) = 0LL;
      }
      v259 = GetProcessHeap();
      HeapFree(v259, 0, (LPVOID)v255);
      v1321 = v253;
    }
    v80 = v246 | 0x10000000;
    v170 = (char *)m;
    v1319 = v252;
    v88 = (unsigned __int16 *)v1323;
    LODWORD(v1317) = v80;
    if ( v80 < 0 )
      goto LABEL_318;
    v260 = *v253;
    v1368 = 0;
    LODWORD(dwBytes) = 4;
    v263 = RtlUIntAdd(4u, v260, (int *)&dwBytes);
    if ( v263 >= 0 )
    {
      v263 = RtlUIntAdd(dwBytes, v261, (int *)&dwBytes);
      if ( v263 >= 0 )
      {
        v263 = RtlUIntAdd(dwBytes, v253[4], (int *)&dwBytes);
        if ( v263 >= 0 )
        {
          v263 = RtlUIntAdd(dwBytes, v264, (int *)&dwBytes);
          if ( v263 >= 0 )
          {
            v263 = RtlUIntAdd(dwBytes, v253[8], (int *)&dwBytes);
            if ( v263 >= 0 )
            {
              v1368 = dwBytes;
              v265 = dwBytes;
              v266 = GetProcessHeap();
              v267 = HeapAlloc(v266, 8u, v265);
              v268 = v267;
              if ( !v267 )
              {
                v80 = -805306345;
                v170 = (char *)m;
                v88 = (unsigned __int16 *)v1323;
                LODWORD(v1317) = -805306345;
                v1319 = (SIZE_T)v1327;
                goto LABEL_318;
              }
              *v267 = *v253;
              v1319 = (SIZE_T)v267;
              v263 = RtlULongLongAdd((unsigned __int64)v267, 4LL, (__int64 *)&v1319);
              v270 = v269;
              if ( v263 < 0 )
                goto LABEL_316;
              memcpy_0((void *)v1319, *((const void **)v253 + 1), (unsigned int)*v253);
              v263 = RtlULongLongAdd(v1319, (unsigned int)*v253, (__int64 *)&v1319);
              if ( v263 < 0 )
                goto LABEL_316;
              v271 = v1319;
              *(_DWORD *)v1319 = v253[4];
              v263 = RtlULongLongAdd(v271, 4LL, (__int64 *)&v1319);
              if ( v263 < 0
                || (memcpy_0((void *)v1319, *((const void **)v253 + 3), (unsigned int)v253[4]),
                    v263 = RtlULongLongAdd(v1319, (unsigned int)v253[4], (__int64 *)&v1319),
                    v263 < 0)
                || (v272 = v1319,
                    *(_DWORD *)v1319 = v253[8],
                    v263 = RtlULongLongAdd(v272, 4LL, (__int64 *)&v1319),
                    v263 < 0)
                || (memcpy_0((void *)v1319, *((const void **)v253 + 5), (unsigned int)v253[8]),
                    v263 = RtlULongLongAdd(v1319, (unsigned int)v253[8], (__int64 *)&v1319),
                    v263 < 0) )
              {
LABEL_316:
                v273 = GetProcessHeap();
                HeapFree(v273, 0, v270);
                v262 = (unsigned __int16 *)v1323;
              }
              else
              {
                v262 = (unsigned __int16 *)v1323;
                LODWORD(v1334) = v1368;
                v1336 = v268;
              }
            }
          }
        }
      }
    }
    v80 = v263 | 0x10000000;
    v170 = (char *)m;
    v88 = v262;
    LODWORD(v1317) = v80;
    v1319 = (SIZE_T)v1327;
    if ( v80 < 0 )
      goto LABEL_318;
    LODWORD(v1324) = 0;
    v1362 = 8;
    v297 = RtlUIntAdd(8u, v1329, (int *)&v1362);
    v80 = v297 | 0x10000000;
    LODWORD(v1317) = v297 | 0x10000000;
    v1319 = v298;
    if ( v297 < 0 )
      goto LABEL_318;
    v299 = (v1362 + 7) & 0xFFFFFFF8;
    if ( v299 < v1362 )
    {
      v80 = -1073741675;
      v1319 = v298;
      LODWORD(v1317) = -1073741675;
      goto LABEL_318;
    }
    v1371 = (v1362 + 7) & 0xFFFFFFF8;
    LODWORD(v1317) = RtlUIntAdd(v299, 8, (int *)&v1371);
    v80 = (int)v1317;
    if ( (int)v1317 >= 0 )
    {
      if ( Src[1] && LODWORD(Src[0]) > 1 )
      {
        v300 = Src[1];
        LODWORD(v1315) = 0;
        v1319 = (SIZE_T)v1327;
        v1323 = Src[1];
        do
        {
          LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v300, 4LL, (__int64 *)&v1323);
          v80 = (int)v1317;
          if ( (int)v1317 < 0 )
            goto LABEL_318;
          LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v1323, v301, (__int64 *)&v1323);
          v80 = (int)v1317;
          if ( (int)v1317 < 0 )
            goto LABEL_318;
          v300 = v1323;
          LODWORD(v1315) = v1315 + 1;
        }
        while ( !(_DWORD)v1315 );
        LODWORD(v1315) = *(_DWORD *)v1323;
        LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v1323, 4LL, (__int64 *)&v1323);
        v80 = (int)v1317;
        if ( (int)v1317 >= 0 )
        {
          if ( LODWORD(Src[0]) <= 2 )
          {
            v80 = -1073741811;
LABEL_377:
            LODWORD(v1317) = v80;
            goto LABEL_318;
          }
          v304 = Src[1];
          v1323 = Src[1];
          do
          {
            LODWORD(v1335) = *v304;
            Size = v303;
            v1331 = (SIZE_T)v88;
            v1329 = v302;
            m = (size_t)v170;
            v1327 = v253;
            LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v304, 4LL, (__int64 *)&v1323);
            v80 = (int)v1317;
            if ( (int)v1317 < 0 )
              goto LABEL_318;
            LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v1323, (unsigned int)v1335, (__int64 *)&v1323);
            v80 = (int)v1317;
            if ( (int)v1317 < 0 )
              goto LABEL_318;
            v304 = v1323;
          }
          while ( (unsigned int)(v305 + 1) < 2 );
          LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v1323, 4LL, (__int64 *)&v1323);
          v80 = (int)v1317;
          if ( (int)v1317 < 0 )
            goto LABEL_318;
          LODWORD(dwBytes) = v306;
          LODWORD(v1317) = RtlUIntAdd(v306, v1371, (int *)&dwBytes);
          v80 = (int)v1317;
          if ( (int)v1317 < 0 )
            goto LABEL_373;
          LODWORD(v1317) = RtlUIntAdd(dwBytes, v307, (int *)&dwBytes);
          v80 = (int)v1317;
          if ( (int)v1317 < 0
            || (LODWORD(v1317) = RtlUIntAdd(dwBytes, v1315, (int *)&dwBytes), v80 = (int)v1317, (int)v1317 < 0)
            || (LODWORD(v1317) = RtlUIntAdd(dwBytes, v308, (int *)&dwBytes), v80 = (int)v1317, (int)v1317 < 0)
            || (LODWORD(v1317) = RtlUIntAdd(dwBytes, v309, (int *)&dwBytes), v80 = (int)v1317, (int)v1317 < 0) )
          {
LABEL_373:
            if ( v80 < 0 )
              goto LABEL_318;
            v310 = (unsigned int)v1324;
          }
          else
          {
            v310 = dwBytes;
          }
          if ( v310 > 0x400000 )
          {
            v80 = -2147418113;
            goto LABEL_377;
          }
          v311 = v310;
          v312 = GetProcessHeap();
          v313 = 0LL;
          v1337 = HeapAlloc(v312, 8u, v311);
          if ( v1337 )
          {
            v314 = (void *)Size;
            phModule = 0LL;
            v1379 = 0LL;
            v1380 = 0LL;
            if ( !Size )
            {
              v80 = -2147024809;
LABEL_381:
              v170 = (char *)m;
              v1321 = v1327;
LABEL_382:
              v88 = (unsigned __int16 *)v1331;
              v1319 = v1329;
LABEL_383:
              LODWORD(v1317) = v80;
              v1336 = v314;
              goto LABEL_318;
            }
            LODWORD(v1380) = (_DWORD)v1334;
            *(_QWORD *)&v1379 = Size;
            *((_QWORD *)&v1379 + 1) = v1337;
            *(_QWORD *)((char *)&v1380 + 4) = v311;
            if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
              && (v316 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
            {
              v317 = ((__int64 (__fastcall *)(__int64, __int128 *))v316)(134LL, &v1379);
              LODWORD(v1339) = v311;
              v80 = v317 | 0x10000000;
              LODWORD(v1317) = v317 | 0x10000000;
              if ( v317 >= 0 )
              {
                v318 = DWORD1(v1380);
                v319 = v1327;
                v320 = m;
                v321 = v1329;
                v322 = v1331;
LABEL_396:
                LODWORD(v1317) = 0;
                v1323 = v1337;
                if ( v318 < 4 )
                {
                  v80 = -805306306;
                  v1321 = v319;
                  v170 = (char *)v320;
                  v1319 = v321;
                  v88 = (unsigned __int16 *)v322;
                  goto LABEL_383;
                }
                v323 = *(unsigned int *)v1337;
                LODWORD(v1315) = *(_DWORD *)v1337;
                v324 = RtlULongLongAdd((unsigned __int64)v1337, 4LL, (__int64 *)&v1323);
                if ( v324 < 0 )
                  goto LABEL_449;
                v324 = RtlUIntAdd(0, 4, (int *)&v1317);
                if ( v324 < 0 )
                  goto LABEL_449;
                if ( v325 - (int)v1317 < (unsigned int)v323 )
                {
LABEL_401:
                  v80 = -805306306;
                  v1321 = v326;
                  v170 = v327;
                  goto LABEL_382;
                }
                pcchLength = (size_t)v1323;
                v324 = RtlULongLongAdd((unsigned __int64)v1323, v323, (__int64 *)&v1323);
                if ( v324 < 0 )
                  goto LABEL_449;
                v324 = RtlUIntAdd((unsigned int)v1317, v323, (int *)&v1317);
                if ( v324 < 0 )
                  goto LABEL_449;
                if ( (unsigned int)(v328 - (_DWORD)v1317) < 4 )
                  goto LABEL_401;
                v329 = *(_DWORD *)v1323;
                LODWORD(v1335) = *(_DWORD *)v1323;
                v324 = RtlULongLongAdd((unsigned __int64)v1323, 4LL, (__int64 *)&v1323);
                if ( v324 < 0 )
                  goto LABEL_449;
                v324 = RtlUIntAdd((unsigned int)v1317, 4, (int *)&v1317);
                if ( v324 < 0 )
                  goto LABEL_449;
                if ( v330 - (int)v1317 < v329 )
                  goto LABEL_401;
                v1338 = (SIZE_T)v1323;
                v324 = RtlULongLongAdd((unsigned __int64)v1323, v329, (__int64 *)&v1323);
                if ( v324 < 0 )
                  goto LABEL_449;
                v324 = RtlUIntAdd((unsigned int)v1317, v329, (int *)&v1317);
                if ( v324 < 0 )
                  goto LABEL_449;
                if ( (unsigned int)(v331 - (_DWORD)v1317) < 4 )
                  goto LABEL_401;
                LODWORD(v1325) = *(_DWORD *)v1323;
                v324 = RtlULongLongAdd((unsigned __int64)v1323, 4LL, (__int64 *)&v1323);
                if ( v324 < 0 )
                  goto LABEL_449;
                v324 = RtlUIntAdd((unsigned int)v1317, 4, (int *)&v1317);
                if ( v324 < 0 )
                  goto LABEL_449;
                if ( v332 - (int)v1317 < (unsigned int)v1325 )
                  goto LABEL_401;
                v324 = RtlUIntAdd((unsigned int)v1317, v1325, (int *)&v1317);
                if ( v324 < 0 )
                {
LABEL_449:
                  v80 = v324 | 0x10000000;
                  v170 = (char *)m;
                  LODWORD(v1317) = v80;
                  v88 = (unsigned __int16 *)v1331;
                  v1321 = v1327;
                  v1319 = v1329;
                  v1336 = v314;
                  if ( v80 < 0 )
                    goto LABEL_318;
                  v359 = v1328;
                  if ( !v1328 || (v1347 = (void *)*((_QWORD *)v1328 + 1)) == 0LL || !*(_DWORD *)v1328 )
                  {
                    v80 = -805306355;
                    v1321 = v1327;
                    v1319 = v1329;
                    goto LABEL_383;
                  }
                  v1334 = (void *)(*(unsigned int *)v1328 - 8LL);
                  v360 = MemoryAlloc((SIZE_T)v1334);
                  v361 = v1327;
                  v362 = v360;
                  v1338 = (SIZE_T)v360;
                  v363 = 0;
                  v364 = v170;
                  v1319 = v1329;
                  v365 = v88;
                  v1321 = v1327;
                  v1336 = v314;
                  if ( !v360 )
                    goto LABEL_483;
                  v1327 = v1347;
                  v366 = v361;
                  v1319 = v1329;
                  m = (unsigned __int8)v1334 & 7;
                  v367 = (unsigned __int16 *)v1329;
                  v1336 = (LPVOID)Size;
                  LOBYTE(v1316) = 0;
                  v1332 = (LPVOID)0x7F1137FAB69605ELL;
                  pcchLength = (size_t)v360;
                  LODWORD(v1317) = 0;
                  LODWORD(v1325) = 0;
                  v1321 = v361;
                  if ( ((unsigned __int8)v1334 & 7) != 0 )
                  {
                    LODWORD(v1339) = 0;
                    v1323 = v170;
                    v1324 = v88;
                    if ( (_DWORD)m )
                    {
                      v368 = 56;
                      v369 = (unsigned __int8 *)v1327;
                      v1336 = (LPVOID)Size;
                      v370 = v1329;
                      do
                      {
                        v88 = v365;
                        v1324 = v365;
                        v170 = v364;
                        v1319 = v370;
                        v371 = (unsigned __int16 *)v370;
                        v372 = *v369;
                        v366 = v361;
                        v1323 = v364;
                        v1321 = v361;
                        if ( (unsigned int)v1325 >= 4 )
                          LODWORD(v1339) = (v372 << v368) | v1339;
                        else
                          LODWORD(v1317) = (v372 << (v368 - 32)) | (unsigned int)v1317;
                        ++v369;
                        LODWORD(v1325) = v1325 + 1;
                        v368 -= 8;
                        v370 = (SIZE_T)v371;
                      }
                      while ( (int)v1325 < (int)m );
                      v363 = v1316;
                      v1327 = v369;
                      v362 = (_DWORD *)v1338;
                      v367 = v371;
                      v1328 = v359;
                    }
                    v373 = (unsigned int)v1317 ^ 0x92F65A5;
                    LODWORD(v1329) = 0;
                    v374 = v1339 ^ 0x699A899C;
                    v375 = m;
                    v376 = (unsigned int)v1317 ^ 0x92F65A5;
                    if ( (_DWORD)m )
                    {
                      v377 = v1339 ^ 0x699A899C;
                      v378 = v362;
                      do
                      {
                        if ( (unsigned int)v1329 >= 4 )
                        {
                          v377 = __ROR4__(v377, 24);
                          v379 = v377;
                        }
                        else
                        {
                          v376 = __ROR4__(v376, 24);
                          v379 = v376;
                        }
                        LODWORD(v1329) = v1329 + 1;
                        v380 = (size_t)(v378 + 1);
                        *v378++ = v379;
                      }
                      while ( (int)v1329 < (int)v375 );
                      v359 = v1328;
                      pcchLength = v380;
                      v363 = v1316;
                    }
                    if ( v375 <= 4 )
                    {
                      LODWORD(v1325) = 0;
                      if ( v375 < 4 )
                        v373 = v373 >> (8 * (4 - v375)) << (8 * (4 - v375));
                    }
                    else
                    {
                      LODWORD(v1325) = v374 >> (8 * (8 - v375)) << (8 * (8 - v375));
                    }
                  }
                  else
                  {
                    LODWORD(v1335) = 0;
                    v373 = 0;
                    v1323 = v170;
                    LODWORD(v1339) = -1;
                    v1324 = v88;
                  }
                  v381 = v1334;
                  lpMem = (LPVOID)((unsigned __int64)v1334 >> 3);
                  if ( (unsigned __int64)v1334 >> 3 )
                  {
                    v382 = HIDWORD(v1332);
                    v383 = v1325;
                    v384 = (char *)lpMem;
                    v385 = v1339;
                    v386 = (int)v1317;
                    LODWORD(dwBytes) = 24670;
                    pcchLength += 7LL;
                    v387 = WORD2(v1332);
                    v388 = (unsigned __int8 *)v1327 + 2;
                    LODWORD(v1335) = HIDWORD(v1332) ^ 0xAB69605E;
                    LODWORD(v1329) = WORD2(v1332);
                    do
                    {
                      v389 = v388[1] | ((*v388 | ((*(v388 - 1) | (*(v388 - 2) << 8)) << 8)) << 8);
                      v390 = v389 ^ v373;
                      v391 = v388[5] | ((v388[4] | ((v388[3] | (v388[2] << 8)) << 8)) << 8);
                      lpMem = v388 + 8;
                      v392 = v391 ^ v383 ^ v382 ^ v390 ^ 0xAB69605E;
                      v393 = v390 ^ (__ROR4__(v392, 22) + v387 * __ROR4__(v392 + 1419157410, 27));
                      v394 = v392 ^ (WORD1(v1332) * __ROR4__(v393 + v382, 9) - __ROR4__(v393, 30));
                      v395 = v393 ^ (dwBytes * (v394 - v1329) - (v394 >> 13));
                      v396 = v394 ^ (HIWORD(v1332) * __ROR4__(v395 ^ WORD1(v1332), 26) - __ROR4__(v395, 30));
                      v397 = v395 ^ (v382 - (v396 ^ 0xAB69605E));
                      v398 = v396 ^ (WORD1(v1332) * (v1329 ^ v397)) ^ __ROR4__(v397, 6);
                      v399 = v397 ^ (__ROR4__(v398, 30) + dwBytes * __ROR4__(v398 + v382, 15));
                      v400 = v398 ^ (HIWORD(v1332) * __ROR4__(v399 + 1419157410, 14) - __ROR4__(v399, 24));
                      v401 = v399 ^ __ROR4__(v400, 10) ^ (v1329 * __ROR4__(v400 ^ 0xAB69605E, 12));
                      v402 = v400 ^ (v401 >> 10) ^ (WORD1(v1332) * (v401 ^ HIWORD(v1332)));
                      v403 = v401 ^ (HIWORD(v1332) * (dwBytes + __ROR4__(~v402, 5)));
                      v404 = v402 ^ (v403 - HIWORD(v1332)) ^ 0xAB69605E;
                      v405 = v403 ^ ((v404 >> 2) + v1329 * __ROR4__(v404 ^ HIWORD(v1332), 30));
                      v406 = v404 ^ (__ROR4__(v405, 25) + WORD1(v1332) * __ROR4__(v405 - v382, 6));
                      v407 = v405 ^ (dwBytes * (v1329 ^ v406) + __ROR4__(v406, 9));
                      v408 = v406 ^ (__ROR4__(v407, 25) + HIWORD(v1332) * __ROR4__(WORD1(v1332) ^ v407, 27));
                      v409 = v407 ^ v408 ^ v1335;
                      v410 = v408 ^ (v1329 * (__ROR4__(v409, 3) - WORD1(v1332)));
                      v411 = v409 ^ (dwBytes * __ROR4__(v410 - v382, 1) - __ROR4__(v410, 6));
                      v412 = v410 ^ (__ROR4__(v411, 18) + HIWORD(v1332) * __ROR4__(v411 - 1419157410, 29));
                      v413 = v411 ^ (v1329 * __ROR4__(v412 - 1419157410, 17) - __ROR4__(v412, 14));
                      v414 = v412 ^ (v413 >> 3) ^ (WORD1(v1332) * (dwBytes ^ v413));
                      v415 = (_BYTE *)pcchLength;
                      v416 = __ROR4__(v414, 30);
                      v417 = v382 ^ v414;
                      v383 = v385 ^ v414;
                      v385 = v391;
                      v418 = v413 ^ v416 ^ (dwBytes * __ROR4__(v417, 28));
                      v387 = v1329;
                      v373 = v386 ^ v418;
                      v386 = v389;
                      *(_BYTE *)(pcchLength - 4) = v373;
                      *v415 = v383;
                      *(v415 - 5) = __ROR4__(v373, 8);
                      *(v415 - 1) = __ROR4__(v383, 8);
                      *(v415 - 6) = __ROR4__(v373, 16);
                      *(v415 - 2) = __ROR4__(v383, 16);
                      *(v415 - 7) = __ROR4__(v373, 24);
                      *(v415 - 3) = __ROR4__(v383, 24);
                      pcchLength = (size_t)(v415 + 8);
                      v388 = (unsigned __int8 *)lpMem;
                      --v384;
                    }
                    while ( v384 );
                    v363 = v1316;
                    v88 = v1324;
                    v367 = (unsigned __int16 *)v1319;
                    v366 = v1321;
                    v170 = (char *)v1323;
                    v359 = v1328;
                    v362 = (_DWORD *)v1338;
                    v381 = v1334;
                  }
                  v419 = 0LL;
                  if ( v381 )
                  {
                    do
                      v363 ^= *((_BYTE *)v362 + v419++);
                    while ( v419 < (unsigned __int64)v381 );
                  }
                  v1315 = (SIZE_T)v1337;
                  m = (size_t)v359;
                  v1328 = v359;
                  if ( v363 != *(_QWORD *)((char *)v1347 + (_QWORD)v381) )
                  {
                    MemoryFree(v362);
LABEL_483:
                    v80 = -805306367;
                    LODWORD(v1317) = -805306367;
                    v1332 = 0LL;
                    goto LABEL_318;
                  }
                  v1324 = v367;
                  LODWORD(dwBytes) = 0;
                  v1327 = v362;
                  if ( (unsigned int)v1334 < 4 )
                  {
                    v1328 = v359;
                    v1319 = (SIZE_T)v367;
LABEL_524:
                    v1337 = (LPVOID)v1315;
                    v1321 = v366;
                    v1332 = v362;
LABEL_525:
                    v420 = -1073741762;
                    goto LABEL_526;
                  }
                  LODWORD(v1335) = *v362;
                  v420 = RtlULongLongAdd((unsigned __int64)v362, 4LL, (__int64 *)&v1327);
                  v1332 = v421;
                  v1328 = (LPVOID)m;
                  v1337 = (LPVOID)v1315;
                  v1321 = v366;
                  v1319 = v422;
                  if ( v420 < 0 )
                    goto LABEL_526;
                  v423 = RtlUIntAdd(0, 4, (int *)&dwBytes);
                  v424 = (void *)m;
                  v420 = v423;
                  v426 = v425;
                  v1337 = (LPVOID)v1315;
                  v1332 = v362;
                  v1328 = (LPVOID)m;
                  v1321 = v366;
                  v1319 = v425;
                  if ( v423 < 0 )
                    goto LABEL_526;
                  if ( (unsigned int)((_DWORD)v1334 - dwBytes) < 4 )
                    goto LABEL_489;
                  LODWORD(v1339) = *(_DWORD *)v1327;
                  v420 = RtlULongLongAdd((unsigned __int64)v1327, 4LL, (__int64 *)&v1327);
                  v1332 = v427;
                  v1328 = (LPVOID)m;
                  v1337 = (LPVOID)v1315;
                  v1321 = v366;
                  v1319 = v428;
                  if ( v420 < 0 )
                    goto LABEL_526;
                  v429 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                  v424 = (void *)m;
                  v420 = v429;
                  v426 = v430;
                  v1337 = (LPVOID)v1315;
                  v1332 = v362;
                  v1328 = (LPVOID)m;
                  v1321 = v366;
                  v1319 = v430;
                  if ( v429 < 0 )
                    goto LABEL_526;
                  if ( (int)v1334 - (int)dwBytes < (unsigned int)v1339 )
                  {
LABEL_489:
                    v1328 = v424;
                    v1319 = v426;
                    goto LABEL_524;
                  }
                  v420 = RtlUIntAdd(dwBytes, v1339, (int *)&dwBytes);
                  v1328 = (LPVOID)m;
                  v1337 = (LPVOID)v1315;
                  v1332 = v362;
                  v1321 = v366;
                  v1319 = (SIZE_T)v1324;
                  if ( v420 >= 0 )
                  {
                    if ( (char *)v362 + (unsigned int)v1334 < (char *)v1327 + v431
                      || (unsigned __int64)(unsigned int)v1334 + (char *)v362 - (_BYTE *)v1327 - v431 >= 8 )
                    {
                      v170 = v432;
                      v1328 = (LPVOID)m;
                      v1319 = (SIZE_T)v1324;
                      goto LABEL_524;
                    }
                    v433 = (void *)v1315;
                    dwBytes = 0LL;
                    v420 = 0;
                    v1334 = 0LL;
                    pcchLength = 0LL;
                    v1338 = 0LL;
                    LODWORD(v1325) = 0;
                    v1328 = (LPVOID)m;
                    v1332 = v362;
                    v1337 = (LPVOID)v1315;
                    v1321 = v366;
                    v1323 = v432;
                    v1319 = (SIZE_T)v1324;
                    if ( v1327 )
                    {
                      Size = (SIZE_T)v1327;
                      v420 = RtlULongLongAdd((unsigned __int64)v1327, (unsigned int)v1339, (__int64 *)&v1334);
                      v1337 = v433;
                      v170 = v435;
                      v1332 = v434;
                      v1328 = (LPVOID)m;
                      v1321 = v366;
                      v1319 = (SIZE_T)v1324;
                      if ( v420 < 0 )
                        goto LABEL_526;
                      v436 = Size;
                      v1332 = v434;
                      v1328 = (LPVOID)m;
                      v1337 = (LPVOID)v1315;
                      v1321 = v366;
                      v1323 = v435;
                      v1319 = (SIZE_T)v1324;
                      if ( Size < (unsigned __int64)v1334 )
                      {
                        v1332 = v434;
                        v1337 = (LPVOID)v1315;
                        v437 = v1324;
                        v1328 = (LPVOID)m;
                        v1321 = v366;
                        v1319 = (SIZE_T)v1324;
                        while ( 1 )
                        {
                          lpMem = v437;
                          m = (size_t)v1332;
                          v420 = RtlULongLongAdd(v436, 4LL, (__int64 *)&pcchLength);
                          if ( v420 < 0 )
                            goto LABEL_526;
                          if ( pcchLength > (unsigned __int64)v1334 )
                            goto LABEL_508;
                          v439 = *v438;
                          LODWORD(v1315) = 0;
                          v420 = RtlUIntAdd(4u, v439, (int *)&v1315);
                          if ( v420 < 0 )
                            goto LABEL_526;
                          v420 = RtlULongLongAdd(v440, (unsigned int)v1315, (__int64 *)&v1338);
                          v1332 = (LPVOID)m;
                          v1328 = v441;
                          v1337 = v442;
                          v1321 = v366;
                          v1319 = (SIZE_T)lpMem;
                          if ( v420 < 0 )
                          {
                            v448 = 0;
                            goto LABEL_520;
                          }
                          v436 = v1338;
                          v443 = v1334;
                          Size = v1338;
                          v1328 = v441;
                          v1337 = v442;
                          v1321 = v366;
                          if ( v1338 > (unsigned __int64)v1334 )
                          {
                            v420 = -1073741811;
                            v1332 = (LPVOID)m;
                            v1319 = (SIZE_T)lpMem;
                            goto LABEL_526;
                          }
                          LODWORD(v1325) = v1325 + 1;
                          v1332 = (LPVOID)m;
                          v437 = lpMem;
                          v1319 = (SIZE_T)lpMem;
                          if ( v1338 >= (unsigned __int64)v1334 )
                          {
                            v1332 = (LPVOID)m;
                            v1328 = v441;
                            v1337 = v442;
                            v1321 = v366;
                            v1323 = v170;
                            v1319 = (SIZE_T)lpMem;
                            goto LABEL_510;
                          }
                        }
                      }
                      v443 = v1334;
LABEL_510:
                      if ( (void *)v436 != v443 )
                      {
LABEL_508:
                        v420 = -1073741811;
                        goto LABEL_526;
                      }
                    }
                    v444 = v1339;
                    if ( !(_DWORD)v1339 )
                    {
                      v447 = (void *)dwBytes;
                      goto LABEL_516;
                    }
                    v445 = v1339;
                    v446 = GetProcessHeap();
                    v447 = HeapAlloc(v446, 8u, v445);
                    if ( v447 )
                    {
                      v444 = v1339;
                      v420 = 0;
LABEL_516:
                      if ( v1327 )
                        memcpy_0(v447, v1327, v444);
                      v448 = v1325;
                      v1330 = v447;
                      v170 = (char *)v1323;
                      LODWORD(v1342) = v1325;
LABEL_520:
                      if ( v420 < 0 || (_DWORD)v1335 == v448 )
                        goto LABEL_526;
                      goto LABEL_525;
                    }
                    v170 = (char *)v1323;
                    v420 = -1073741801;
                    v1330 = 0LL;
                    LODWORD(v1342) = 0;
                  }
LABEL_526:
                  v80 = v420 | 0x10000000;
                  goto LABEL_377;
                }
                if ( v333 != (_DWORD)v1317 || (unsigned int)v1315 + v329 + (_DWORD)v1325 + 12LL != v333 )
                  goto LABEL_401;
                v334 = GetProcessHeap();
                v335 = HeapAlloc(v334, 8u, 0x30uLL);
                if ( !v335 )
                {
                  v1328 = 0LL;
                  v80 = -805306345;
                  goto LABEL_381;
                }
                v324 = 0;
                if ( pcchLength )
                {
                  v336 = (unsigned int)v1315;
                  *(_DWORD *)v335 = v1315;
                  v337 = v336;
                  lpMem = (LPVOID)v336;
                  v338 = GetProcessHeap();
                  v339 = HeapAlloc(v338, 8u, v337);
                  if ( !v339 )
                    goto LABEL_428;
                  *((_QWORD *)v335 + 1) = v339;
                  v324 = 0;
                  memcpy_0(v339, (const void *)pcchLength, (size_t)lpMem);
                }
                else
                {
                  *(_DWORD *)v335 = 0;
                  *((_QWORD *)v335 + 1) = 0LL;
                }
                if ( !v1338 )
                {
                  *((_DWORD *)v335 + 4) = 0;
                  *((_QWORD *)v335 + 3) = 0LL;
LABEL_426:
                  if ( v1323 )
                  {
                    v344 = (unsigned int)v1325;
                    *((_DWORD *)v335 + 8) = v1325;
                    v345 = v344;
                    lpMem = (LPVOID)v344;
                    v346 = GetProcessHeap();
                    v347 = HeapAlloc(v346, 8u, v345);
                    if ( !v347 )
                      goto LABEL_428;
                    *((_QWORD *)v335 + 5) = v347;
                    v324 = 0;
                    memcpy_0(v347, v1323, (size_t)lpMem);
                  }
                  else
                  {
                    *((_DWORD *)v335 + 8) = 0;
                    *((_QWORD *)v335 + 5) = 0LL;
                  }
                  v313 = v335;
LABEL_438:
                  if ( v324 < 0 )
                  {
                    v1328 = 0LL;
                    if ( v313 )
                    {
                      v352 = (void *)v313[1];
                      if ( v352 )
                      {
                        v353 = GetProcessHeap();
                        HeapFree(v353, 0, v352);
                        v313[1] = 0LL;
                      }
                      v354 = (void *)v313[3];
                      if ( v354 )
                      {
                        v355 = GetProcessHeap();
                        HeapFree(v355, 0, v354);
                        v313[3] = 0LL;
                      }
                      v356 = (void *)v313[5];
                      if ( v356 )
                      {
                        v357 = GetProcessHeap();
                        HeapFree(v357, 0, v356);
                        v313[5] = 0LL;
                      }
                      v358 = GetProcessHeap();
                      HeapFree(v358, 0, v313);
                      v1328 = 0LL;
                    }
                  }
                  else
                  {
                    v1328 = v313;
                  }
                  goto LABEL_449;
                }
                v340 = (unsigned int)v1335;
                *((_DWORD *)v335 + 4) = v1335;
                v341 = v340;
                lpMem = (LPVOID)v340;
                v342 = GetProcessHeap();
                v343 = HeapAlloc(v342, 8u, v341);
                if ( v343 )
                {
                  *((_QWORD *)v335 + 3) = v343;
                  v324 = 0;
                  memcpy_0(v343, (const void *)v1338, (size_t)lpMem);
                  goto LABEL_426;
                }
LABEL_428:
                v324 = -1073741801;
                lpMem = (LPVOID)*((_QWORD *)v335 + 1);
                if ( lpMem )
                {
                  v348 = GetProcessHeap();
                  HeapFree(v348, 0, lpMem);
                  *((_QWORD *)v335 + 1) = 0LL;
                }
                lpMem = (LPVOID)*((_QWORD *)v335 + 3);
                if ( lpMem )
                {
                  v349 = GetProcessHeap();
                  HeapFree(v349, 0, lpMem);
                  *((_QWORD *)v335 + 3) = 0LL;
                }
                lpMem = (LPVOID)*((_QWORD *)v335 + 5);
                if ( lpMem )
                {
                  v350 = GetProcessHeap();
                  HeapFree(v350, 0, lpMem);
                  *((_QWORD *)v335 + 5) = 0LL;
                }
                v351 = GetProcessHeap();
                HeapFree(v351, 0, v335);
                goto LABEL_438;
              }
            }
            else
            {
              v315 = GetLastError();
              LODWORD(v1317) = v315;
              v80 = v315;
              if ( v315 > 0 )
              {
                v80 = (unsigned __int16)v315 | 0x80070000;
                LODWORD(v1317) = v80;
              }
              LODWORD(v1339) = v311;
              if ( v80 >= 0 )
              {
                LODWORD(v1339) = v311;
                v80 = -2147467259;
                LODWORD(v1317) = -2147467259;
              }
            }
            v1336 = v314;
            if ( v80 == -805306333 )
            {
              v80 = -2147024774;
              v170 = (char *)m;
              v88 = (unsigned __int16 *)v1331;
              LODWORD(v1317) = -2147024774;
              v1321 = v1327;
              v1319 = v1329;
              goto LABEL_318;
            }
            v319 = v1327;
            v320 = m;
            v321 = v1329;
            v170 = (char *)m;
            v322 = v1331;
            v1321 = v1327;
            v88 = (unsigned __int16 *)v1331;
            v1319 = v1329;
            if ( v80 >= 0 )
            {
              v318 = v1339;
              v313 = 0LL;
              goto LABEL_396;
            }
          }
          else
          {
            v170 = (char *)m;
            v1321 = v1327;
            v80 = -805306345;
            v1337 = 0LL;
            v88 = (unsigned __int16 *)v1331;
            LODWORD(v1317) = -805306345;
            v1319 = v1329;
            v1336 = (LPVOID)Size;
          }
        }
LABEL_318:
        if ( !v170 )
        {
LABEL_320:
          v275 = v1321;
          if ( v1321 )
          {
            v276 = (void *)*((_QWORD *)v1321 + 1);
            if ( v276 )
            {
              v277 = GetProcessHeap();
              HeapFree(v277, 0, v276);
              v275[1] = 0LL;
            }
            v278 = (void *)v275[3];
            if ( v278 )
            {
              v279 = GetProcessHeap();
              HeapFree(v279, 0, v278);
              v275[3] = 0LL;
            }
            v280 = (void *)v275[5];
            if ( v280 )
            {
              v281 = GetProcessHeap();
              HeapFree(v281, 0, v280);
              v275[5] = 0LL;
            }
            v282 = GetProcessHeap();
            HeapFree(v282, 0, v275);
          }
          v283 = v1336;
          if ( v1336 )
          {
            v284 = GetProcessHeap();
            HeapFree(v284, 0, v283);
          }
          v285 = v1337;
          if ( v1337 )
          {
            v286 = GetProcessHeap();
            HeapFree(v286, 0, v285);
          }
          v287 = v1328;
          if ( v1328 )
          {
            v288 = (void *)*((_QWORD *)v1328 + 1);
            if ( v288 )
            {
              v289 = GetProcessHeap();
              HeapFree(v289, 0, v288);
              v287[1] = 0LL;
            }
            v290 = (void *)v287[3];
            if ( v290 )
            {
              v291 = GetProcessHeap();
              HeapFree(v291, 0, v290);
              v287[3] = 0LL;
            }
            v292 = (void *)v287[5];
            if ( v292 )
            {
              v293 = GetProcessHeap();
              HeapFree(v293, 0, v292);
              v287[5] = 0LL;
            }
            v294 = GetProcessHeap();
            HeapFree(v294, 0, v287);
          }
          v295 = v1332;
          if ( v1332 )
          {
            v296 = GetProcessHeap();
            HeapFree(v296, 0, v295);
          }
          v85 = (void *)v1319;
          goto LABEL_343;
        }
LABEL_319:
        v274 = GetProcessHeap();
        HeapFree(v274, 0, v170);
        goto LABEL_320;
      }
      v80 = -1073741811;
      LODWORD(v1317) = -1073741811;
    }
    v1319 = (SIZE_T)v1327;
    goto LABEL_318;
  }
  v80 = -805306345;
  LODWORD(v1317) = -805306345;
LABEL_343:
  v78 = v1320;
  if ( v80 < 0 )
    goto LABEL_598;
  if ( !(_DWORD)v1342 )
  {
    v80 = -1073425151;
    goto LABEL_597;
  }
  if ( !v1330 )
  {
    v80 = -1073741811;
    goto LABEL_597;
  }
  pcchLength = (size_t)v1330;
  v80 = RtlULongLongAdd((unsigned __int64)v1330, 4LL, (__int64 *)&pcchLength);
  LODWORD(v1317) = v80;
  if ( v80 < 0 )
  {
LABEL_543:
    v1330 = v449;
    goto LABEL_598;
  }
  v451 = (int *)pcchLength;
  if ( !*v449 )
    v451 = 0LL;
  if ( *v449 != 4 )
  {
    v80 = -1073741789;
LABEL_542:
    LODWORD(v1317) = v80;
    goto LABEL_543;
  }
  v80 = *v451;
  LODWORD(v1317) = v80;
  if ( v80 == -805306333 )
  {
    LODWORD(v1325) = -2147024774;
LABEL_540:
    if ( (_DWORD)v1342 == 6 )
    {
      m = (size_t)v449;
      v452 = 0;
      v1330 = v449;
      while ( 1 )
      {
        LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v449, 4LL, (__int64 *)&m);
        v80 = (int)v1317;
        if ( (int)v1317 < 0 )
          goto LABEL_587;
        LODWORD(v1317) = RtlULongLongAdd(m, v453, (__int64 *)&m);
        v80 = (int)v1317;
        if ( (int)v1317 < 0 )
          goto LABEL_587;
        v449 = (_DWORD *)m;
        if ( ++v452 )
        {
          LODWORD(v1317) = RtlULongLongAdd(m, 4LL, (__int64 *)&m);
          v80 = (int)v1317;
          if ( (int)v1317 < 0 )
            goto LABEL_587;
          v456 = (void **)m;
          if ( !v454 )
            v456 = 0LL;
          if ( v454 == 8 )
          {
            v457 = *v456;
            v458 = v455;
            m = v455;
            lpMem = v457;
            while ( 1 )
            {
              LODWORD(v1317) = RtlULongLongAdd(v458, 4LL, (__int64 *)&m);
              v80 = (int)v1317;
              if ( (int)v1317 < 0 )
                goto LABEL_587;
              LODWORD(v1317) = RtlULongLongAdd(m, v459, (__int64 *)&m);
              v80 = (int)v1317;
              if ( (int)v1317 < 0 )
                goto LABEL_587;
              v458 = m;
              if ( (unsigned int)(v460 + 1) >= 2 )
              {
                LODWORD(v1317) = RtlULongLongAdd(m, 4LL, (__int64 *)&m);
                v80 = (int)v1317;
                if ( (int)v1317 < 0 )
                  goto LABEL_587;
                v463 = (int *)m;
                if ( !v461 )
                  v463 = 0LL;
                if ( v461 == v462 )
                {
                  v464 = (unsigned int *)v1330;
                  v465 = *v463;
                  v466 = (unsigned __int64)v1330;
                  m = (size_t)v1330;
                  LODWORD(v1335) = v465;
                  while ( 1 )
                  {
                    LODWORD(v1317) = RtlULongLongAdd(v466, 4LL, (__int64 *)&m);
                    v80 = (int)v1317;
                    if ( (int)v1317 < 0 )
                      goto LABEL_587;
                    LODWORD(v1317) = RtlULongLongAdd(m, v467, (__int64 *)&m);
                    v80 = (int)v1317;
                    if ( (int)v1317 < 0 )
                      goto LABEL_587;
                    v466 = m;
                    if ( (unsigned int)(v468 + 1) >= 3 )
                    {
                      LODWORD(v1317) = RtlULongLongAdd(m, 4LL, (__int64 *)&m);
                      v80 = (int)v1317;
                      if ( (int)v1317 >= 0 )
                      {
                        v470 = m;
                        v471 = v464;
                        m = (size_t)v464;
                        if ( !v469 )
                          v470 = 0LL;
                        pcchLength = v470;
                        while ( 1 )
                        {
                          v472 = *v471;
                          LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v471, 4LL, (__int64 *)&m);
                          v80 = (int)v1317;
                          if ( (int)v1317 < 0 )
                            break;
                          LODWORD(v1317) = RtlULongLongAdd(m, v472, (__int64 *)&m);
                          v80 = (int)v1317;
                          if ( (int)v1317 < 0 )
                            break;
                          v471 = (unsigned int *)m;
                          if ( (unsigned int)(v473 + 1) >= 4 )
                          {
                            LODWORD(v1317) = RtlULongLongAdd(m, 4LL, (__int64 *)&m);
                            v80 = (int)v1317;
                            if ( (int)v1317 < 0 )
                              goto LABEL_587;
                            v475 = (int *)m;
                            if ( !v474 )
                              v475 = 0LL;
                            if ( v474 == 4 )
                            {
                              v476 = (unsigned int *)v1330;
                              v477 = *v475;
                              m = (size_t)v1330;
                              LODWORD(v1315) = v477;
                              while ( 1 )
                              {
                                v478 = *v476;
                                LODWORD(v1317) = RtlULongLongAdd((unsigned __int64)v476, 4LL, (__int64 *)&m);
                                v80 = (int)v1317;
                                if ( (int)v1317 < 0 )
                                  goto LABEL_587;
                                LODWORD(v1317) = RtlULongLongAdd(m, v478, (__int64 *)&m);
                                v80 = (int)v1317;
                                if ( (int)v1317 < 0 )
                                  goto LABEL_587;
                                v476 = (unsigned int *)m;
                                if ( (unsigned int)(v479 + 1) >= 5 )
                                {
                                  v80 = RtlULongLongAdd(m, 4LL, (__int64 *)&m);
                                  LODWORD(v1317) = v80;
                                  if ( v80 < 0 )
                                    goto LABEL_586;
                                  v482 = (int *)m;
                                  if ( !v480 )
                                    v482 = 0LL;
                                  if ( v480 != 4 )
                                    goto LABEL_583;
                                  v78 = *v482;
                                  if ( (LPVOID)v1349 != lpMem )
                                  {
                                    v80 = -1073425151;
                                    goto LABEL_586;
                                  }
                                  v1369 = v1335;
                                  if ( (unsigned int)v1315 > 4 || (unsigned int)v481 > 4 )
                                  {
                                    v80 = -2147024774;
                                    goto LABEL_597;
                                  }
                                  memcpy_0((void *)lpModuleName, (const void *)pcchLength, v481);
                                  if ( (_DWORD)v1325 )
                                  {
                                    v80 = v1325;
                                    LODWORD(v1317) = v1325;
                                  }
                                  goto LABEL_598;
                                }
                              }
                            }
                            goto LABEL_583;
                          }
                        }
                      }
                      goto LABEL_587;
                    }
                  }
                }
                goto LABEL_583;
              }
            }
          }
          goto LABEL_583;
        }
      }
    }
    v80 = -1073425151;
    v78 = v450;
    goto LABEL_542;
  }
  LODWORD(v1325) = v80;
  if ( v80 == -2147024774 )
    goto LABEL_540;
  LODWORD(v1325) = v80;
  v1330 = v449;
  if ( v80 >= 0 )
    goto LABEL_540;
LABEL_598:
  v483 = Src[1];
  Src[0] = 0LL;
  lpModuleName = (LPCWSTR)Src[1];
  if ( Src[1] )
  {
    v484 = GetProcessHeap();
    HeapFree(v484, 0, (LPVOID)lpModuleName);
    v483 = 0LL;
    Src[1] = 0LL;
  }
  if ( v1330 != v483 )
  {
    v485 = GetProcessHeap();
    HeapFree(v485, 0, v1330);
  }
  if ( v88 )
  {
    v486 = GetProcessHeap();
    HeapFree(v486, 0, v88);
  }
  if ( v85 )
  {
    v487 = GetProcessHeap();
    HeapFree(v487, 0, v85);
  }
  if ( v80 < 0 )
    goto LABEL_99;
  if ( v78 )
  {
    v1345 = 0LL;
    dword_1808DA538 = v78;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    v489 = 0LL;
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
      goto LABEL_1204;
    m = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
    if ( !m )
    {
      GetLastError();
      goto LABEL_1204;
    }
    v491 = ((__int64 (__fastcall *)(__int64))off_1808D13D8[0])(v490);
    v492 = dword_1808DA538;
    qword_1808DDD48 = v491;
    LODWORD(v1342) = dword_1808DA538;
    memset_0(&v1392, 0, 0x70uLL);
    v1330 = 0LL;
    memset(v1442, 0, 44);
    v1358 = 0LL;
    pcchLength = 0LL;
    while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
      ;
    v493 = dword_1808DDD3C;
    if ( dword_1808DDD3C )
      goto LABEL_659;
    LODWORD(v1325) = 0;
    LODWORD(v1339) = 0;
    v494 = (const WCHAR *)MemoryAlloc(0x338uLL);
    lpModuleName = v494;
    if ( !v494 )
      goto LABEL_623;
    LODWORD(v1314) = -1;
    v495 = (char *)v494 + 7;
    v496 = -1;
    v497 = (unsigned __int8 *)&unk_180783012;
    v498 = 0;
    v499 = 0;
    v500 = 0;
    v501 = 103LL;
    do
    {
      v502 = *(v497 - 1) | (*(v497 - 2) << 8);
      v503 = v497[2] << 8;
      v504 = *v497;
      v497 += 8;
      v505 = *(v497 - 7) | ((v504 | (v502 << 8)) << 8);
      v506 = v505 ^ v500;
      v507 = *(v497 - 3) | ((*(v497 - 4) | ((*(v497 - 5) | v503) << 8)) << 8);
      v508 = v506 ^ v507 ^ v499 ^ 0xAC987321;
      v509 = v506 ^ (__ROR4__(v508, 22) + 4991 * __ROR4__(v508 + 1419157410, 27));
      v510 = v508 ^ (43881 * __ROR4__(v509 + 133239679, 9) - __ROR4__(v509, 30));
      v511 = v510 ^ (2033 * __ROR4__(v509 ^ (24670 * v510 - (v510 >> 13) - 123127970) ^ 0xAB69, 26)
                   - __ROR4__(v509 ^ (24670 * v510 - (v510 >> 13) - 123127970), 30));
      v512 = v509 ^ (24670 * v510 - (v510 >> 13) - 123127970) ^ (133239679 - (v511 ^ 0xAB69605E));
      v513 = v511 ^ (43881 * (v512 ^ 0x137F)) ^ __ROR4__(v512, 6);
      v514 = v512 ^ (__ROR4__(v513, 30) + 24670 * __ROR4__(v513 + 133239679, 15));
      v515 = v513 ^ (2033 * __ROR4__(v514 + 1419157410, 14) - __ROR4__(v514, 24));
      v516 = v514 ^ __ROR4__(v515, 10) ^ (4991 * __ROR4__(v515 ^ 0xAB69605E, 12));
      v517 = v515 ^ (v516 >> 10) ^ (43881 * (v516 ^ 0x7F1));
      v518 = v516 ^ (2033 * (__ROR4__(~v517, 5) + 24670));
      v519 = v518 ^ (((v517 ^ (v518 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v517 ^ (v518 - 2033) ^ 0xAB6967AF, 30));
      v520 = v517 ^ (v518 - 2033) ^ 0xAB69605E ^ (__ROR4__(v519, 25) + 43881 * __ROR4__(v519 - 133239679, 6));
      v521 = v519 ^ (24670 * (v520 ^ 0x137F) + __ROR4__(v520, 9));
      v522 = v520 ^ (__ROR4__(v521, 25) + 2033 * __ROR4__(v521 ^ 0xAB69, 27));
      v523 = v521 ^ v522 ^ 0xAC987321;
      v524 = v522 ^ (4991 * __ROR4__(v523, 3) - 219010071);
      v525 = v523 ^ (24670 * __ROR4__(v524 - 133239679, 1) - __ROR4__(v524, 6));
      v526 = v524 ^ (__ROR4__(v525, 18) + 2033 * __ROR4__(v525 - 1419157410, 29));
      v527 = v525 ^ (4991 * __ROR4__(v526 - 1419157410, 17) - __ROR4__(v526, 14));
      v528 = v526 ^ (v527 >> 3) ^ (43881 * (v527 ^ 0x605E));
      v499 = v528 ^ v496;
      v496 = v507;
      v529 = v498 ^ __ROR4__(v528, 30) ^ (24670 * __ROR4__(v528 ^ 0x7F1137F, 28));
      v498 = v505;
      v500 = v527 ^ v529;
      *(v495 - 4) = v500;
      *v495 = v499;
      *(v495 - 5) = __ROR4__(v500, 8);
      v495 += 8;
      *(v495 - 9) = __ROR4__(v499, 8);
      *(v495 - 14) = __ROR4__(v500, 16);
      *(v495 - 10) = __ROR4__(v499, 16);
      *(v495 - 15) = __ROR4__(v500, 24);
      *(v495 - 11) = __ROR4__(v499, 24);
      --v501;
    }
    while ( v501 );
    v492 = (unsigned int)v1342;
    v530 = lpModuleName;
    v531 = 0LL;
    v532 = 0;
    do
      v532 ^= *((_BYTE *)lpModuleName + v531++);
    while ( v531 < 0x338 );
    if ( v532 != 64LL )
    {
      MemoryFree((void *)lpModuleName);
      goto LABEL_623;
    }
    *((_BYTE *)lpModuleName + 823) = 0;
    memset_0(&unk_1808DA540, 0, 0x60uLL);
    if ( *v530 )
    {
      v1374 = v530;
      while ( 1 )
      {
        v535 = (const WCHAR *)v530;
        v536 = -1LL;
        do
          ++v536;
        while ( *(_WORD *)&v530[2 * v536] );
        v537 = &v530[2 * v536];
        lpModuleName = (LPCWSTR)(3LL * (unsigned int)v1339);
        if ( !GetModuleHandleExW(0, v535, (HMODULE *)&unk_1808DA540 + 3 * (unsigned int)v1339) )
          break;
        v538 = lpModuleName;
        v539 = 0;
        v540 = *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName);
        if ( *(_WORD *)v540 == 23117
          && (v541 = *(int *)(v540 + 60), (unsigned int)v541 < 0x10000000)
          && (v542 = *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName) + v541,
              v542 >= *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName))
          && *(_DWORD *)v542 == 17744 )
        {
          if ( *(_WORD *)(v542 + 24) == 267 || *(_WORD *)(v542 + 24) == 523 )
          {
            *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)lpModuleName + 12) = *(_QWORD *)(v542 + 136);
            *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v538 + 2) = *(_DWORD *)(v542 + 80);
          }
          else
          {
            v539 = -1073741811;
          }
        }
        else
        {
          v539 = -1073741701;
        }
        v543 = *(_DWORD *)(v537 + 2);
        v544 = 0;
        v530 = v537 + 6;
        LODWORD(v1314) = v543;
        LODWORD(v1315) = 0;
        if ( v543 )
        {
          v545 = (unsigned int)v1339;
          do
          {
            v546 = v530;
            v547 = -1LL;
            do
              ++v547;
            while ( v530[v547] );
            v530 += v547 + 1;
            if ( v539 >= 0 )
            {
              v548 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v545), v546);
              if ( !v548 )
                goto LABEL_653;
              off_1808D1340[(unsigned int)v1325] = v548;
              v544 = v1315;
              v545 = (unsigned int)v1339;
            }
            LODWORD(v1325) = v1325 + 1;
            LODWORD(v1315) = ++v544;
          }
          while ( v544 < (unsigned int)v1314 );
        }
        LODWORD(v1339) = v1339 + 1;
        if ( !*v530 )
          goto LABEL_653;
      }
      v539 = -1073741702;
LABEL_653:
      v530 = v1374;
      if ( !v1374 )
        goto LABEL_657;
    }
    else
    {
      v539 = 0;
    }
    v549 = GetProcessHeap();
    HeapFree(v549, 0, v530);
LABEL_657:
    if ( v539 < 0 )
    {
LABEL_623:
      v533 = (HMODULE *)&unk_1808DA540;
      v534 = 4LL;
      do
      {
        if ( *v533 )
          FreeLibrary(*v533);
        v533 += 3;
        --v534;
      }
      while ( v534 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_660:
      LODWORD(v1329) = 0;
      LODWORD(v1319) = 0;
      _InterlockedExchange(&dword_1808DDD40, 0);
      WORD2(v1319) = 0;
      LODWORD(v1337) = 0;
      v1320 = 0;
      LODWORD(v1336) = 0;
      LODWORD(v1328) = 0;
      v1338 = 0LL;
      v1347 = 0LL;
      lpMem = 0LL;
      v1324 = 0LL;
      LODWORD(v1321) = 0;
      LODWORD(v1334) = 0;
      while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
        ;
      v550 = dword_1808DDD3C;
      if ( dword_1808DDD3C )
        goto LABEL_706;
      LODWORD(v1325) = 0;
      LODWORD(v1339) = 0;
      v551 = (const WCHAR *)MemoryAlloc(0x338uLL);
      lpModuleName = v551;
      if ( !v551 )
        goto LABEL_670;
      LODWORD(v1314) = -1;
      v552 = (char *)v551 + 7;
      v553 = -1;
      v554 = (unsigned __int8 *)&unk_180783012;
      v555 = 0;
      v556 = 103LL;
      v557 = 0;
      v558 = 0;
      do
      {
        v559 = *(v554 - 1) | (*(v554 - 2) << 8);
        v560 = v554[2] << 8;
        v561 = *v554;
        v554 += 8;
        v562 = *(v554 - 7) | ((v561 | (v559 << 8)) << 8);
        v563 = v558 ^ v562;
        v564 = *(v554 - 3) | ((*(v554 - 4) | ((*(v554 - 5) | v560) << 8)) << 8);
        v565 = v557 ^ v558 ^ v562 ^ v564 ^ 0xAC987321;
        v566 = v563 ^ (__ROR4__(v565, 22) + 4991 * __ROR4__(v565 + 1419157410, 27));
        v567 = v565 ^ (43881 * __ROR4__(v566 + 133239679, 9) - __ROR4__(v566, 30));
        v568 = v566 ^ (24670 * v567 - (v567 >> 13) - 123127970);
        v569 = v567 ^ (2033 * __ROR4__(v568 ^ 0xAB69, 26) - __ROR4__(v568, 30));
        v570 = v568 ^ (133239679 - (v569 ^ 0xAB69605E));
        v571 = v569 ^ (43881 * (v570 ^ 0x137F)) ^ __ROR4__(v570, 6);
        v572 = v570 ^ (__ROR4__(v571, 30) + 24670 * __ROR4__(v571 + 133239679, 15));
        v573 = v571 ^ (2033 * __ROR4__(v572 + 1419157410, 14) - __ROR4__(v572, 24));
        v574 = v572 ^ __ROR4__(v573, 10) ^ (4991 * __ROR4__(v573 ^ 0xAB69605E, 12));
        v575 = v573 ^ (v574 >> 10) ^ (43881 * (v574 ^ 0x7F1));
        v576 = v574 ^ (2033 * (__ROR4__(~v575, 5) + 24670));
        v577 = v576 ^ (((v575 ^ (v576 - 2033) ^ 0xAB69605E) >> 2)
                     + 4991 * __ROR4__(v575 ^ (v576 - 2033) ^ 0xAB6967AF, 30));
        v578 = v575 ^ (v576 - 2033) ^ 0xAB69605E ^ (__ROR4__(v577, 25) + 43881 * __ROR4__(v577 - 133239679, 6));
        v579 = v577 ^ (24670 * (v578 ^ 0x137F) + __ROR4__(v578, 9));
        v580 = v578 ^ (__ROR4__(v579, 25) + 2033 * __ROR4__(v579 ^ 0xAB69, 27));
        v581 = v579 ^ v580 ^ 0xAC987321;
        v582 = v580 ^ (4991 * __ROR4__(v581, 3) - 219010071);
        v583 = v581 ^ (24670 * __ROR4__(v582 - 133239679, 1) - __ROR4__(v582, 6));
        v584 = v582 ^ (__ROR4__(v583, 18) + 2033 * __ROR4__(v583 - 1419157410, 29));
        v585 = v583 ^ (4991 * __ROR4__(v584 - 1419157410, 17) - __ROR4__(v584, 14));
        v586 = v584 ^ (v585 >> 3) ^ (43881 * (v585 ^ 0x605E));
        v587 = __ROR4__(v586, 30);
        v557 = v553 ^ v586;
        v553 = v564;
        v558 = v555 ^ v585 ^ v587 ^ (24670 * __ROR4__(v584 ^ (v585 >> 3) ^ (43881 * (v585 ^ 0x605E)) ^ 0x7F1137F, 28));
        v555 = v562;
        *(v552 - 4) = v558;
        *v552 = v557;
        *(v552 - 5) = __ROR4__(v558, 8);
        v552 += 8;
        *(v552 - 9) = __ROR4__(v557, 8);
        *(v552 - 14) = __ROR4__(v558, 16);
        *(v552 - 10) = __ROR4__(v557, 16);
        *(v552 - 15) = __ROR4__(v558, 24);
        *(v552 - 11) = __ROR4__(v557, 24);
        --v556;
      }
      while ( v556 );
      v492 = (unsigned int)v1342;
      v588 = lpModuleName;
      v589 = 0LL;
      v590 = 0;
      do
        v590 ^= *((_BYTE *)lpModuleName + v589++);
      while ( v589 < 0x338 );
      if ( v590 != 64LL )
      {
        MemoryFree((void *)lpModuleName);
        goto LABEL_670;
      }
      *((_BYTE *)lpModuleName + 823) = 0;
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      if ( *v588 )
      {
        v1375 = v588;
        while ( 1 )
        {
          v593 = (const WCHAR *)v588;
          v594 = -1LL;
          do
            ++v594;
          while ( *(_WORD *)&v588[2 * v594] );
          v595 = &v588[2 * v594];
          lpModuleName = (LPCWSTR)(3LL * (unsigned int)v1339);
          if ( !GetModuleHandleExW(0, v593, (HMODULE *)&unk_1808DA540 + 3 * (unsigned int)v1339) )
            break;
          v596 = lpModuleName;
          v597 = 0;
          v598 = *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName);
          if ( *(_WORD *)v598 == 23117
            && (v599 = *(int *)(v598 + 60), (unsigned int)v599 < 0x10000000)
            && (v600 = *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName) + v599,
                v600 >= *((_QWORD *)&unk_1808DA540 + (_QWORD)lpModuleName))
            && *(_DWORD *)v600 == 17744 )
          {
            if ( *(_WORD *)(v600 + 24) == 267 || *(_WORD *)(v600 + 24) == 523 )
            {
              *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)lpModuleName + 12) = *(_QWORD *)(v600 + 136);
              *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v596 + 2) = *(_DWORD *)(v600 + 80);
            }
            else
            {
              v597 = -1073741811;
            }
          }
          else
          {
            v597 = -1073741701;
          }
          v601 = *(_DWORD *)(v595 + 2);
          v602 = 0;
          v588 = v595 + 6;
          LODWORD(v1314) = v601;
          LODWORD(v1315) = 0;
          if ( v601 )
          {
            v603 = (unsigned int)v1339;
            do
            {
              v604 = v588;
              v605 = -1LL;
              do
                ++v605;
              while ( v588[v605] );
              v588 += v605 + 1;
              if ( v597 >= 0 )
              {
                v606 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v603), v604);
                if ( !v606 )
                  goto LABEL_700;
                off_1808D1340[(unsigned int)v1325] = v606;
                v602 = v1315;
                v603 = (unsigned int)v1339;
              }
              LODWORD(v1325) = v1325 + 1;
              LODWORD(v1315) = ++v602;
            }
            while ( v602 < (unsigned int)v1314 );
          }
          LODWORD(v1339) = v1339 + 1;
          if ( !*v588 )
            goto LABEL_700;
        }
        v597 = -1073741702;
LABEL_700:
        v588 = v1375;
        if ( !v1375 )
          goto LABEL_704;
      }
      else
      {
        v597 = 0;
      }
      v607 = GetProcessHeap();
      HeapFree(v607, 0, v588);
LABEL_704:
      if ( v597 < 0 )
      {
LABEL_670:
        v591 = (HMODULE *)&unk_1808DA540;
        v592 = 4LL;
        do
        {
          if ( *v591 )
            FreeLibrary(*v591);
          v591 += 3;
          --v592;
        }
        while ( v592 );
        memset_0(&unk_1808DA540, 0, 0x60uLL);
        memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_707:
        _InterlockedExchange(&dword_1808DDD40, 0);
        memset_0(&v1392, 0, 0x70uLL);
        LOWORD(v1319) = (v492 >> 4) & 0xF;
        v608 = v492 & 0xF;
        LODWORD(v1331) = v608;
        WORD1(v1319) = (v492 >> 8) & 0xF;
        WORD2(v1319) = (v492 >> 12) & 0xF;
        v1358 = 0LL;
        v1323 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
        LODWORD(dwBytes) = 0xFFFFFF;
        if ( !v1323 )
        {
          v609 = GetLastError();
          v610 = v609;
          if ( v609 > 0 )
            v610 = (unsigned __int16)v609 | 0x80070000;
          if ( v610 >= 0 )
            v610 = -2147467259;
LABEL_821:
          while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
            ;
          v711 = dword_1808DDD3C;
          if ( dword_1808DDD3C > 0 )
          {
            --dword_1808DDD3C;
            if ( v711 == 1 )
            {
              v712 = 4LL;
              v713 = (HMODULE *)&unk_1808DA540;
              lpMem = (LPVOID)4;
              do
              {
                if ( *v713 )
                {
                  FreeLibrary(*v713);
                  v712 = (__int64)lpMem;
                }
                v713 += 3;
                lpMem = (LPVOID)--v712;
              }
              while ( v712 );
              memset_0(&unk_1808DA540, 0, 0x60uLL);
              memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
            }
          }
          _InterlockedExchange(&dword_1808DDD40, 0);
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1338);
          if ( v610 < 0 )
          {
LABEL_1036:
            if ( v1394 )
            {
              v836 = -1LL;
              do
                ++v836;
              while ( *((_WORD *)v1394 + v836) );
              v837 = 2 * v836 + 2;
              for ( j = v1394; v837; --v837 )
                *j++ = 0;
              MemoryFree(v1394);
              v1394 = 0LL;
            }
            if ( v1395 )
            {
              v839 = -1LL;
              do
                ++v839;
              while ( *((_WORD *)v1395 + v839) );
              v840 = 2 * v839 + 2;
              for ( k = v1395; v840; --v840 )
                *k++ = 0;
              MemoryFree(v1395);
              v1395 = 0LL;
            }
            v842 = v1396;
            if ( v1396 )
            {
              v843 = -1LL;
              do
                ++v843;
              while ( *((_WORD *)v1396 + v843) );
              v844 = 2 * v843 + 2;
              if ( v844 )
              {
                do
                {
                  *v842++ = 0;
                  --v844;
                }
                while ( v844 );
                v842 = v1396;
              }
              MemoryFree(v842);
              v1396 = 0LL;
            }
            if ( v1397 )
            {
              off_1808D1378();
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
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v845 = dword_1808DDD3C;
            if ( dword_1808DDD3C > 0 )
            {
              --dword_1808DDD3C;
              if ( v845 == 1 )
              {
                v846 = (HMODULE *)&unk_1808DA540;
                v847 = 4LL;
                do
                {
                  if ( *v846 )
                    FreeLibrary(*v846);
                  v846 += 3;
                  --v847;
                }
                while ( v847 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
              }
            }
            _InterlockedExchange(&dword_1808DDD40, 0);
            v848 = qword_1808DDD48;
            LODWORD(v1335) = dword_1808DA538;
            v849 = off_1808D13D8[0]();
            v1476 = 0;
            lpModuleName = (LPCWSTR)(unsigned int)(v849 - v848);
            v1480 = 0LL;
            v1477 = 0LL;
            v1478 = 0LL;
            v1479 = 0LL;
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v919 = dword_1808DDD3C;
            if ( !dword_1808DDD3C )
            {
              LODWORD(v1315) = 0;
              LODWORD(v1331) = 0;
              LODWORD(v1319) = 0;
              v920 = (const WCHAR *)MemoryAlloc(0x338uLL);
              v1351 = v920;
              if ( !v920 )
                goto LABEL_1160;
              v921 = 0;
              v922 = (char *)v920 + 7;
              v923 = -1;
              v924 = (unsigned __int8 *)&unk_180783012;
              v925 = 0;
              v926 = 103LL;
              v927 = 0;
              do
              {
                v928 = *(v924 - 1) | (*(v924 - 2) << 8);
                v929 = v924[2] << 8;
                v930 = *v924;
                v924 += 8;
                v931 = *(v924 - 7) | ((v930 | (v928 << 8)) << 8);
                v932 = v927 ^ v931;
                v933 = *(v924 - 3) | ((*(v924 - 4) | ((*(v924 - 5) | v929) << 8)) << 8);
                v934 = v927 ^ v931 ^ v925 ^ v933 ^ 0xAC987321;
                v935 = v932 ^ (__ROR4__(v934, 22) + 4991 * __ROR4__(v934 + 1419157410, 27));
                v936 = v934 ^ (43881 * __ROR4__(v935 + 133239679, 9) - __ROR4__(v935, 30));
                v937 = v935 ^ (24670 * v936 - (v936 >> 13) - 123127970);
                v938 = v936 ^ (2033 * __ROR4__(v937 ^ 0xAB69, 26) - __ROR4__(v937, 30));
                v939 = v937 ^ (133239679 - (v938 ^ 0xAB69605E));
                v940 = v938 ^ (43881 * (v939 ^ 0x137F)) ^ __ROR4__(v939, 6);
                v941 = v939 ^ (__ROR4__(v940, 30) + 24670 * __ROR4__(v940 + 133239679, 15));
                v942 = v940 ^ (2033 * __ROR4__(v941 + 1419157410, 14) - __ROR4__(v941, 24));
                v943 = v941 ^ __ROR4__(v942, 10) ^ (4991 * __ROR4__(v942 ^ 0xAB69605E, 12));
                v944 = v942 ^ (v943 >> 10) ^ (43881 * (v943 ^ 0x7F1));
                v945 = v943 ^ (2033 * (__ROR4__(~v944, 5) + 24670));
                v946 = v945 ^ (((v944 ^ (v945 - 2033) ^ 0xAB69605E) >> 2)
                             + 4991 * __ROR4__(v944 ^ (v945 - 2033) ^ 0xAB6967AF, 30));
                v947 = v944 ^ (v945 - 2033) ^ 0xAB69605E ^ (__ROR4__(v946, 25) + 43881 * __ROR4__(v946 - 133239679, 6));
                v948 = v946 ^ (24670 * (v947 ^ 0x137F) + __ROR4__(v947, 9));
                v949 = v947 ^ (__ROR4__(v948, 25) + 2033 * __ROR4__(v948 ^ 0xAB69, 27));
                v950 = v948 ^ v949 ^ 0xAC987321;
                v951 = v949 ^ (4991 * __ROR4__(v950, 3) - 219010071);
                v952 = v950 ^ (24670 * __ROR4__(v951 - 133239679, 1) - __ROR4__(v951, 6));
                v953 = v951 ^ (__ROR4__(v952, 18) + 2033 * __ROR4__(v952 - 1419157410, 29));
                v954 = v952 ^ (4991 * __ROR4__(v953 - 1419157410, 17) - __ROR4__(v953, 14));
                v955 = v953 ^ (v954 >> 3) ^ (43881 * (v954 ^ 0x605E));
                v956 = __ROR4__(v955, 30);
                v925 = v923 ^ v955;
                v923 = v933;
                v927 = v921 ^ v954 ^ v956 ^ (24670
                                           * __ROR4__(v953 ^ (v954 >> 3) ^ (43881 * (v954 ^ 0x605E)) ^ 0x7F1137F, 28));
                v921 = v931;
                *(v922 - 4) = v927;
                *v922 = v925;
                *(v922 - 5) = __ROR4__(v927, 8);
                v922 += 8;
                *(v922 - 9) = __ROR4__(v925, 8);
                *(v922 - 14) = __ROR4__(v927, 16);
                *(v922 - 10) = __ROR4__(v925, 16);
                *(v922 - 15) = __ROR4__(v927, 24);
                *(v922 - 11) = __ROR4__(v925, 24);
                --v926;
              }
              while ( v926 );
              v957 = v1351;
              v958 = v1319;
              v959 = 0LL;
              v960 = 0;
              do
                v960 ^= *((_BYTE *)v1351 + v959++);
              while ( v959 < 0x338 );
              if ( v960 != 64LL )
              {
                MemoryFree((void *)v1351);
LABEL_1160:
                v961 = 4LL;
                v962 = (HMODULE *)&unk_1808DA540;
                do
                {
                  if ( *v962 )
                    FreeLibrary(*v962);
                  v962 += 3;
                  --v961;
                }
                while ( v961 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                goto LABEL_1194;
              }
              *((_BYTE *)v1351 + 823) = 0;
              memset_0(&unk_1808DA540, 0, 0x60uLL);
              v963 = (WCHAR *)v957;
              if ( !*(_BYTE *)v957 )
                goto LABEL_1190;
              while ( 1 )
              {
                v964 = v957;
                v965 = -1LL;
                do
                  ++v965;
                while ( v957[v965] );
                v966 = &v957[v965];
                v1351 = (LPCWSTR)(3LL * (unsigned int)v1331);
                if ( !GetModuleHandleExW(0, v964, (HMODULE *)&unk_1808DA540 + 3 * (unsigned int)v1331) )
                  break;
                v967 = v1351;
                v958 = 0;
                v968 = *((_QWORD *)&unk_1808DA540 + (_QWORD)v1351);
                if ( *(_WORD *)v968 == 23117
                  && (v969 = *(int *)(v968 + 60), (unsigned int)v969 < 0x10000000)
                  && (v970 = *((_QWORD *)&unk_1808DA540 + (_QWORD)v1351) + v969,
                      v970 >= *((_QWORD *)&unk_1808DA540 + (_QWORD)v1351))
                  && *(_DWORD *)v970 == 17744 )
                {
                  if ( *(_WORD *)(v970 + 24) == 267 || *(_WORD *)(v970 + 24) == 523 )
                  {
                    *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)v1351 + 12) = *(_QWORD *)(v970 + 136);
                    *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v967 + 2) = *(_DWORD *)(v970 + 80);
                  }
                  else
                  {
                    v958 = -1073741811;
                  }
                }
                else
                {
                  v958 = -1073741701;
                }
                v971 = *(_DWORD *)(v966 + 1);
                v972 = 0;
                v957 = v966 + 3;
                LODWORD(v1319) = v971;
                LODWORD(v1314) = 0;
                if ( v971 )
                {
                  v973 = (unsigned int)v1331;
                  do
                  {
                    v974 = (const CHAR *)v957;
                    v975 = -1LL;
                    do
                      ++v975;
                    while ( *((_BYTE *)v957 + v975) );
                    v957 = (LPCWSTR)((char *)v957 + v975 + 1);
                    if ( v958 >= 0 )
                    {
                      v976 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v973), v974);
                      if ( !v976 )
                        goto LABEL_1189;
                      off_1808D1340[(unsigned int)v1315] = v976;
                      v972 = v1314;
                      v973 = (unsigned int)v1331;
                    }
                    LODWORD(v1315) = v1315 + 1;
                    LODWORD(v1314) = ++v972;
                  }
                  while ( v972 < (unsigned int)v1319 );
                }
                LODWORD(v1331) = v1331 + 1;
                if ( !*(_BYTE *)v957 )
                  goto LABEL_1189;
              }
              v958 = -1073741702;
LABEL_1189:
              if ( v963 )
              {
LABEL_1190:
                v977 = GetProcessHeap();
                HeapFree(v977, 0, v963);
              }
              if ( v958 < 0 )
                goto LABEL_1160;
              v919 = dword_1808DDD3C;
            }
            dword_1808DDD3C = v919 + 1;
LABEL_1194:
            v489 = 0LL;
            _InterlockedExchange(&dword_1808DDD40, 0);
            LODWORD(v1480) = v1335;
            v978 = 4LL;
            LODWORD(v1477) = (_DWORD)lpModuleName;
            v1476 = 1;
            LODWORD(v1478) = -1721306479;
            DWORD2(v1477) = 1;
            LODWORD(v1479) = 1;
            DWORD2(v1478) = 1;
            DWORD2(v1479) = 1;
            ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1808D1410)(0LL, 8225LL, 4LL, &v1476);
            while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
              ;
            v979 = dword_1808DDD3C;
            if ( dword_1808DDD3C > 0 )
            {
              --dword_1808DDD3C;
              if ( v979 == 1 )
              {
                v980 = (HMODULE *)&unk_1808DA540;
                do
                {
                  if ( *v980 )
                    FreeLibrary(*v980);
                  v980 += 3;
                  --v978;
                }
                while ( v978 );
                memset_0(&unk_1808DA540, 0, 0x60uLL);
                memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                v489 = 0LL;
              }
            }
            _InterlockedExchange(&dword_1808DDD40, 0);
            ((void (__fastcall *)(_QWORD, size_t))off_1808D14A0[0])(0LL, m);
LABEL_1204:
            SH<void *,SH_HANDLE>::Reset(&v1345);
            LODWORD(v1339) = 0;
            *(_OWORD *)v1348 = 0LL;
            v981 = 0LL;
            v1328 = 0LL;
            v982 = GetProcessHeap();
            v983 = HeapAlloc(v982, 8u, 0xA0uLL);
            if ( !v983 )
            {
              v988 = 0LL;
              goto LABEL_1219;
            }
            *v983 = xmmword_1808D8540[0];
            v983[1] = xmmword_1808D8540[1];
            v983[2] = xmmword_1808D8540[2];
            v983[3] = xmmword_1808D8540[3];
            v983[4] = xmmword_1808D8540[4];
            v983[5] = xmmword_1808D8540[5];
            v983[6] = xmmword_1808D8540[6];
            v983[7] = xmmword_1808D8540[7];
            v983[8] = xmmword_1808D8540[8];
            v983[9] = xmmword_1808D8540[9];
            v984 = GetProcessHeap();
            v985 = HeapAlloc(v984, 8u, 8uLL);
            if ( !v985 )
            {
              v988 = v983;
              goto LABEL_1219;
            }
            *v985 = qword_1808D8690;
            lpModuleName = (LPCWSTR)__rdtsc();
            LODWORD(dwBytes) = 0;
            LODWORD(v1314) = 0;
            v986 = RtlUIntAdd(4u, 4, (int *)&v1314);
            v981 = v987;
            v988 = v983;
            if ( v986 < 0 )
              goto LABEL_1218;
            if ( (int)RtlUIntAdd(0, v1314, (int *)&dwBytes) < 0 )
              goto LABEL_1218;
            LODWORD(v1314) = 0;
            if ( (int)RtlUIntAdd(4u, 160, (int *)&v1314) < 0 )
              goto LABEL_1218;
            v989 = RtlUIntAdd(dwBytes, v1314, (int *)&dwBytes);
            if ( (v990 | v989) < 0 )
              goto LABEL_1218;
            LODWORD(v1314) = 0;
            if ( (int)RtlUIntAdd(4u, 8, (int *)&v1314) < 0 )
              goto LABEL_1218;
            v991 = RtlUIntAdd(dwBytes, v1314, (int *)&dwBytes);
            if ( (v992 | v991) < 0 )
              goto LABEL_1218;
            LODWORD(v1314) = 0;
            if ( (int)RtlUIntAdd(4u, 8, (int *)&v1314) < 0 )
              goto LABEL_1218;
            v993 = RtlUIntAdd(dwBytes, v1314, (int *)&dwBytes);
            if ( (v994 | v993) < 0 )
              goto LABEL_1218;
            HIDWORD(v1348[0]) = dwBytes;
            v995 = dwBytes;
            v996 = GetProcessHeap();
            v997 = HeapAlloc(v996, 8u, v995);
            if ( !v997 )
              goto LABEL_1218;
            v1348[1] = (size_t)v997;
            LODWORD(v1352) = 0;
            v1351 = 0LL;
            LODWORD(v1348[0]) = 0;
            v1323 = v983;
            pcchLength = (size_t)v997;
            v1329 = (SIZE_T)v981;
            if ( (int)RtlULongLongAdd((unsigned __int64)v997, 4LL, (__int64 *)&v1352) < 0 )
              goto LABEL_1218;
            if ( v999 + 2 > (_DWORD *)((char *)v999 + HIDWORD(v1348[0])) )
              goto LABEL_1218;
            v1000 = v1352;
            *v999 = 4;
            *v1000 = 4;
            v1001 = ++LODWORD(v1348[0]);
            LODWORD(v1341) = 0;
            lpMem = 0LL;
            if ( !v998 )
              goto LABEL_1218;
            if ( v1348[1] )
            {
              v1007 = (int *)v1348[1];
              pcchLength = v1348[1];
              LODWORD(v1335) = 0;
              if ( v1001 )
              {
                do
                {
                  v1008 = *v1007;
                  LODWORD(v1314) = 0;
                  if ( (int)RtlUIntAdd(4u, v1008, (int *)&v1314) < 0
                    || (int)RtlULongLongAdd(v1009, (unsigned int)v1314, (__int64 *)&pcchLength) < 0 )
                  {
                    goto LABEL_1218;
                  }
                  v1007 = (int *)pcchLength;
                  LODWORD(v1335) = v1335 + 1;
                  v1329 = (SIZE_T)v981;
                  v1323 = v983;
                }
                while ( (unsigned int)v1335 < v1010 );
              }
              if ( (int)RtlULongLongAdd((unsigned __int64)v1007, 4LL, (__int64 *)&v1341) < 0
                || (unsigned __int64)v1011 + v1012 + 4 > v1348[1] + HIDWORD(v1348[0]) )
              {
                goto LABEL_1218;
              }
              *v1011 = v1012;
              memcpy_0(v1341, v983, v1012);
            }
            else
            {
              LODWORD(v1314) = 0;
              if ( (int)RtlUIntAdd(4u, v998, (int *)&v1314) < 0
                || (int)RtlUIntAdd(HIDWORD(v1348[0]), v1314, (int *)v1348 + 1) < 0 )
              {
                goto LABEL_1218;
              }
            }
            v1013 = LODWORD(v1348[0]) + 1;
            LODWORD(v1341) = 0;
            ++LODWORD(v1348[0]);
            lpMem = 0LL;
            if ( !v981 )
              goto LABEL_1218;
            if ( v1348[1] )
            {
              v1014 = (int *)v1348[1];
              pcchLength = v1348[1];
              if ( v1013 )
              {
                do
                {
                  v1015 = *v1014;
                  LODWORD(v1314) = 0;
                  if ( (int)RtlUIntAdd(4u, v1015, (int *)&v1314) < 0
                    || (int)RtlULongLongAdd(v1016, (unsigned int)v1314, (__int64 *)&pcchLength) < 0 )
                  {
                    goto LABEL_1218;
                  }
                  v1014 = (int *)pcchLength;
                  v1329 = (SIZE_T)v981;
                  v1323 = v983;
                }
                while ( v1018 + 1 < v1017 );
              }
              if ( (int)RtlULongLongAdd((unsigned __int64)v1014, 4LL, (__int64 *)&v1341) < 0
                || (unsigned __int64)(v1019 + 3) > v1348[1] + HIDWORD(v1348[0]) )
              {
                goto LABEL_1218;
              }
              *v1019 = 8;
              memcpy_0(v1341, v981, 8uLL);
            }
            else
            {
              LODWORD(v1314) = 0;
              if ( (int)RtlUIntAdd(4u, 8, (int *)&v1314) < 0
                || (int)RtlUIntAdd(HIDWORD(v1348[0]), v1314, (int *)v1348 + 1) < 0 )
              {
                goto LABEL_1218;
              }
            }
            v1020 = LODWORD(v1348[0]) + 1;
            LODWORD(v1352) = 0;
            ++LODWORD(v1348[0]);
            v1351 = 0LL;
            if ( v1348[1] )
            {
              v1021 = (int *)v1348[1];
              pcchLength = v1348[1];
              if ( v1020 )
              {
                do
                {
                  v1022 = *v1021;
                  LODWORD(v1314) = 0;
                  if ( (int)RtlUIntAdd(4u, v1022, (int *)&v1314) < 0
                    || (int)RtlULongLongAdd(v1023, (unsigned int)v1314, (__int64 *)&pcchLength) < 0 )
                  {
                    goto LABEL_1218;
                  }
                  v1021 = (int *)pcchLength;
                  v1323 = v983;
                  v1329 = (SIZE_T)v981;
                }
                while ( v1025 + 1 < v1024 );
              }
              if ( (int)RtlULongLongAdd((unsigned __int64)v1021, 4LL, (__int64 *)&v1352) < 0
                || (unsigned __int64)(v1026 + 3) > v1348[1] + HIDWORD(v1348[0]) )
              {
                goto LABEL_1218;
              }
              v1027 = (LPCWSTR *)v1352;
              v1028 = lpModuleName;
              *v1026 = 8;
              *v1027 = v1028;
            }
            else
            {
              LODWORD(v1314) = 0;
              if ( (int)RtlUIntAdd(4u, 8, (int *)&v1314) < 0
                || (int)RtlUIntAdd(HIDWORD(v1348[0]), v1314, (int *)v1348 + 1) < 0 )
              {
                goto LABEL_1218;
              }
            }
            ++LODWORD(v1348[0]);
            LODWORD(v1314) = 0;
            if ( (int)RtlUIntAdd(4u, 4, (int *)&v1314) < 0 )
              goto LABEL_1218;
            LODWORD(v1335) = v1314;
            LODWORD(v1314) = 0;
            if ( (int)RtlUIntAdd(v1029, v1029 + 4, (int *)&v1314) < 0
              || (int)RtlUIntAdd(v1030, v1314, (int *)&v1335) < 0 )
            {
              goto LABEL_1218;
            }
            LODWORD(v1315) = v1335;
            LODWORD(v1335) = 0;
            v1324 = 0LL;
            LODWORD(v1319) = 0;
            v1321 = 0LL;
            v1336 = 0LL;
            v1337 = 0LL;
            v1325 = 0LL;
            v1332 = 0LL;
            v1345 = __rdtsc();
            v1354 = 8;
            v1031 = RtlUIntAdd(8u, SHIDWORD(v1348[0]), (int *)&v1354);
            if ( v1031 >= 0 )
            {
              v1033 = (v1354 + 7) & 0xFFFFFFF8;
              if ( v1033 < v1354 )
                goto LABEL_1218;
              v1354 = (v1354 + 7) & 0xFFFFFFF8;
              v1034 = v1033;
              v1035 = GetProcessHeap();
              v1036 = (WCHAR *)HeapAlloc(v1035, 8u, v1034);
              v1351 = v1036;
              if ( !v1036 )
              {
                v1043 = -805306345;
                goto LABEL_1553;
              }
              *(_DWORD *)v1036 = v1348[0];
              Size = (SIZE_T)v1036;
              v1037 = RtlULongLongAdd((unsigned __int64)v1036, 4LL, (__int64 *)&Size);
              lpMem = v1039;
              v1031 = v1037;
              if ( v1037 < 0
                || (v1040 = Size,
                    *(_DWORD *)Size = HIDWORD(v1348[0]),
                    v1041 = RtlULongLongAdd(v1040, v1038, (__int64 *)&Size),
                    lpMem = v1042,
                    v1031 = v1041,
                    v1041 < 0) )
              {
                v1059 = GetProcessHeap();
                HeapFree(v1059, 0, lpMem);
                v1032 = v1319;
              }
              else
              {
                *(_QWORD *)&v1042[v1354 - 8] = v1345;
                memcpy_0((void *)Size, (const void *)v1348[1], HIDWORD(v1348[0]));
                v1032 = v1354;
                v1324 = (unsigned __int16 *)v1351;
              }
            }
            v1043 = v1031 | 0x10000000;
            if ( v1043 < 0 )
            {
              v1123 = v1324;
              goto LABEL_1529;
            }
            v1044 = v1324;
            v1330 = 0LL;
            if ( v1324 )
            {
              pcchLength = v1032;
              if ( !v1032
                || (v1338 = v1032 + 8LL,
                    v1045 = MemoryAlloc(v1338),
                    v1046 = 0,
                    v1347 = v1045,
                    (v1047 = (size_t)v1045) == 0) )
              {
                v1043 = -805306367;
                goto LABEL_1530;
              }
              v1048 = pcchLength;
              v1049 = 0;
              LOBYTE(v1316) = 0;
              v1050 = 0LL;
              if ( pcchLength )
              {
                do
                  v1049 ^= *((_BYTE *)v1044 + v1050++);
                while ( v1050 < pcchLength );
                LOBYTE(v1316) = v1049;
              }
              v1334 = (void *)0xC81ECB17B1B54A58LL;
              LODWORD(v1331) = 0;
              v1051 = -1;
              LODWORD(v1342) = 0;
              v1052 = v1044;
              m = v1047;
              v1053 = pcchLength & 7;
              if ( (pcchLength & 7) != 0 )
              {
                LODWORD(v1331) = 0;
                v1054 = 0;
                LODWORD(v1314) = 0;
                LODWORD(v1342) = 0;
                v1055 = 56;
                v1056 = 0;
                v1057 = 0;
                do
                {
                  v1058 = *(unsigned __int8 *)v1052;
                  if ( v1054 >= 4 )
                    v1056 |= v1058 << v1055;
                  else
                    v1057 |= v1058 << (v1055 - 32);
                  v1052 = (unsigned __int16 *)((char *)v1052 + 1);
                  v1054 = v1314 + 1;
                  v1055 -= 8;
                  LODWORD(v1314) = v1054;
                }
                while ( (int)v1054 < (int)v1053 );
                LODWORD(v1342) = v1057;
                LODWORD(v1331) = v1056;
                v1324 = v1044;
                v1329 = (SIZE_T)v981;
                v1323 = v983;
                v1046 = v1057 ^ 0xB17A307A;
                v1060 = v1056 ^ 0x42F6B18D;
                LODWORD(v1319) = 0;
                v1061 = v1057 ^ 0xB17A307A;
                v1062 = v1056 ^ 0x42F6B18D;
                if ( (pcchLength & 7) != 0 )
                {
                  v1063 = (_BYTE *)m;
                  v1064 = v1319;
                  do
                  {
                    if ( v1064 >= 4 )
                    {
                      v1062 = __ROR4__(v1062, 24);
                      v1065 = v1062;
                    }
                    else
                    {
                      v1061 = __ROR4__(v1061, 24);
                      v1065 = v1061;
                    }
                    *v1063 = v1065;
                    ++v1064;
                    v1066 = (size_t)++v1063;
                  }
                  while ( (int)v1064 < (int)v1053 );
                  v1048 = pcchLength;
                  v1047 = v1066;
                  m = v1066;
                  v1049 = v1316;
                }
                else
                {
                  v1047 = m;
                }
                if ( v1053 <= 4 )
                {
                  v1051 = 0;
                  if ( v1053 >= 4 )
                    goto LABEL_1300;
                  v1046 = v1046 >> (8 * (4 - v1053)) << (8 * (4 - v1053));
                }
                else
                {
                  v1051 = v1060 >> (8 * (8 - v1053)) << (8 * (8 - v1053));
                }
                v1047 = m;
              }
LABEL_1300:
              v1067 = v1048 >> 3;
              if ( v1048 >> 3 )
              {
                v1068 = (unsigned __int8 *)(v1052 + 1);
                v1069 = WORD2(v1334);
                v1070 = v1067;
                v1071 = v1331;
                LODWORD(v1319) = WORD1(v1334);
                LODWORD(v1314) = HIDWORD(v1334) ^ 0xB1B54A58;
                v1072 = (int)v1342;
                lpMem = (LPVOID)(v1047 + 7);
                do
                {
                  v1073 = v1068[1] | ((*v1068 | ((*(v1068 - 1) | (*(v1068 - 2) << 8)) << 8)) << 8);
                  v1074 = v1068[5] | ((v1068[4] | ((v1068[3] | (v1068[2] << 8)) << 8)) << 8);
                  v1345 = (size_t)(v1068 + 8);
                  v1075 = v1046 ^ v1073 ^ ((v1051 ^ v1074) - 19032);
                  v1076 = __ROR4__(v1075, 15);
                  v1077 = HIDWORD(v1334) ^ v1075;
                  v1078 = v1051 ^ v1074 ^ (__ROR4__(v1077, 7) + WORD1(v1334) * v1076);
                  v1079 = v1077 ^ (v1069 * __ROR4__(v1078 - 1313519016, 9) - __ROR4__(v1078, 10));
                  v1080 = v1078 ^ (__ROR4__(v1079, 27) + HIWORD(v1334) * __ROR4__(v1079 ^ v1069, 28));
                  v1081 = v1079 ^ (HIDWORD(v1334) - (v1080 ^ 0xB1B54A58));
                  v1082 = v1080 ^ (WORD1(v1334) * (v1081 - 19032) - (v1081 >> 6));
                  v1083 = v1081 ^ (19032 * (v1069 ^ __ROR4__(v1082, 15)));
                  v1084 = v1082 ^ (v1069 * (HIWORD(v1334) + __ROR4__(~v1083, 3)));
                  v1085 = v1083 ^ (v1084 - 19032 - HIDWORD(v1334));
                  v1086 = v1084 ^ (v1319 * (v1085 ^ HIWORD(v1334))) ^ __ROR4__(v1085, 10);
                  v1087 = v1085 ^ __ROR4__(v1086, 3) ^ (v1069 * __ROR4__(v1086 ^ 0x4A58, 26));
                  v1088 = v1086 ^ (19032 * (__ROR4__(v1087, 15) - HIWORD(v1334)));
                  v1089 = v1087 ^ (19032 * (HIWORD(v1334) ^ v1088)) ^ ((v1088 ^ (v1088 >> 14)) >> 1) ^ (19032 * ((8 * (v1088 - v1069)) | ((v1088 - v1069) >> 29)));
                  v1090 = v1088 ^ (WORD1(v1334) * (v1089 - v1069) - (v1089 >> 13));
                  v1091 = v1089 ^ __ROR4__(v1090, 11) ^ (v1069 * __ROR4__(-1313519016 - v1090, 9));
                  v1092 = v1090 ^ (v1091 + 1313519016 - HIWORD(v1334));
                  v1093 = v1091 ^ (19032 * (v1092 ^ WORD1(v1334)) - __ROR4__(v1092, 7));
                  v1094 = v1092 ^ (WORD1(v1334) * __ROR4__(HIWORD(v1334) ^ v1093, 28) - __ROR4__(v1093, 16));
                  v1095 = v1093 ^ (__ROR4__(v1094, 4) + v1069 * __ROR4__(-1313519016 - v1094, 10));
                  v1096 = v1094 ^ __ROR4__(v1095, 9) ^ (HIWORD(v1334) * __ROR4__(v1095 + 1313519016, 4));
                  v1097 = v1095 ^ (19032 * __ROR4__(HIDWORD(v1334) ^ v1096, 24) - __ROR4__(v1096, 30));
                  v1098 = v1096 ^ (WORD1(v1334) * __ROR4__(HIDWORD(v1334) - v1097, 11) - __ROR4__(v1097, 12));
                  v1068 = (unsigned __int8 *)v1345;
                  v1099 = v1097 ^ (v1098 >> 8) ^ (v1069 * (WORD1(v1334) ^ v1098));
                  v1100 = v1098 ^ v1099;
                  v1101 = lpMem;
                  v1046 = v1072 ^ v1099;
                  v1051 = v1314 ^ v1071 ^ v1100;
                  v1072 = v1073;
                  v1071 = v1074;
                  *((char *)lpMem - 4) = v1046;
                  *v1101 = v1051;
                  *(v1101 - 5) = __ROR4__(v1046, 8);
                  *(v1101 - 1) = __ROR4__(v1051, 8);
                  *(v1101 - 6) = __ROR4__(v1046, 16);
                  *(v1101 - 2) = __ROR4__(v1051, 16);
                  *(v1101 - 7) = __ROR4__(v1046, 24);
                  *(v1101 - 3) = __ROR4__(v1051, 24);
                  lpMem = v1101 + 8;
                  --v1070;
                }
                while ( v1070 );
                v1049 = v1316;
                v80 = (int)v1317;
                v988 = v1323;
                v981 = (void *)v1329;
                v1048 = pcchLength;
              }
              v1102 = v1347;
              *(_QWORD *)((char *)v1347 + v1048) = v1049;
              v1103 = GetProcessHeap();
              v1104 = (unsigned int *)HeapAlloc(v1103, 8u, 0x30uLL);
              if ( v1104 )
              {
                *v1104 = v1338;
                v1105 = GetProcessHeap();
                v1106 = HeapAlloc(v1105, 8u, (unsigned int)v1338);
                if ( v1106 )
                {
                  *((_QWORD *)v1104 + 1) = v1106;
                  memcpy_0(v1106, v1102, (unsigned int)v1338);
                  v1104[4] = 160;
                  v1107 = GetProcessHeap();
                  v1108 = HeapAlloc(v1107, 8u, 0xA0uLL);
                  v1109 = 0;
                  if ( v1108 )
                  {
                    *((_QWORD *)v1104 + 3) = v1108;
                    *v1108 = xmmword_1808D85F0[0];
                    v1108[1] = xmmword_1808D85F0[1];
                    v1108[2] = xmmword_1808D85F0[2];
                    v1108[3] = xmmword_1808D85F0[3];
                    v1108[4] = xmmword_1808D85F0[4];
                    v1108[5] = xmmword_1808D85F0[5];
                    v1108[6] = xmmword_1808D85F0[6];
                    v1108[7] = xmmword_1808D85F0[7];
                    v1108[8] = xmmword_1808D85F0[8];
                    v1108[9] = xmmword_1808D85F0[9];
                    v1104[8] = 8;
                    v1110 = GetProcessHeap();
                    v1111 = HeapAlloc(v1110, 8u, 8uLL);
                    if ( v1111 )
                    {
                      *((_QWORD *)v1104 + 5) = v1111;
                      *v1111 = qword_1808D85E0;
                      v1330 = 0LL;
LABEL_1318:
                      Size = (SIZE_T)v988;
                      v1116 = v981;
                      m = (size_t)v1324;
                      v1327 = v981;
                      v1321 = v1104;
                      v1117 = GetProcessHeap();
                      HeapFree(v1117, 0, v1347);
                      v1118 = v1330;
                      if ( v1330 )
                      {
                        v1345 = *((_QWORD *)v1330 + 1);
                        if ( v1345 )
                        {
                          v1119 = GetProcessHeap();
                          HeapFree(v1119, 0, (LPVOID)v1345);
                          v1118[1] = 0LL;
                        }
                        v1345 = v1118[3];
                        if ( v1345 )
                        {
                          v1120 = GetProcessHeap();
                          HeapFree(v1120, 0, (LPVOID)v1345);
                          v1118[3] = 0LL;
                        }
                        v1345 = v1118[5];
                        if ( v1345 )
                        {
                          v1121 = GetProcessHeap();
                          HeapFree(v1121, 0, (LPVOID)v1345);
                          v1118[5] = 0LL;
                        }
                        v1122 = GetProcessHeap();
                        HeapFree(v1122, 0, v1118);
                        v1321 = v1104;
                      }
                      v1043 = v1109 | 0x10000000;
                      v1123 = (unsigned __int16 *)m;
                      v981 = v1116;
                      v1324 = (unsigned __int16 *)m;
                      v988 = (void *)Size;
                      if ( v1043 < 0 )
                        goto LABEL_1529;
                      v1124 = *v1104;
                      v1370 = 0;
                      LODWORD(dwBytes) = 4;
                      v1125 = RtlUIntAdd(4u, v1124, (int *)&dwBytes);
                      if ( v1125 >= 0 )
                      {
                        v1125 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                        if ( v1125 >= 0 )
                        {
                          v1125 = RtlUIntAdd(dwBytes, v1104[4], (int *)&dwBytes);
                          if ( v1125 >= 0 )
                          {
                            v1125 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                            if ( v1125 >= 0 )
                            {
                              v1125 = RtlUIntAdd(dwBytes, v1104[8], (int *)&dwBytes);
                              if ( v1125 >= 0 )
                              {
                                v1370 = dwBytes;
                                v1127 = dwBytes;
                                v1128 = GetProcessHeap();
                                v1129 = HeapAlloc(v1128, 8u, v1127);
                                if ( !v1129 )
                                {
                                  v1123 = (unsigned __int16 *)m;
                                  v1043 = -805306345;
                                  v981 = v1327;
                                  v988 = (void *)Size;
                                  v1324 = (unsigned __int16 *)m;
                                  goto LABEL_1529;
                                }
                                *v1129 = *v1104;
                                v1319 = (SIZE_T)v1129;
                                v1125 = RtlULongLongAdd((unsigned __int64)v1129, 4LL, (__int64 *)&v1319);
                                v1131 = v1130;
                                if ( v1125 < 0 )
                                  goto LABEL_1342;
                                memcpy_0((void *)v1319, *((const void **)v1104 + 1), *v1104);
                                v1125 = RtlULongLongAdd(v1319, *v1104, (__int64 *)&v1319);
                                if ( v1125 < 0 )
                                  goto LABEL_1342;
                                v1132 = v1319;
                                *(_DWORD *)v1319 = v1104[4];
                                v1125 = RtlULongLongAdd(v1132, 4LL, (__int64 *)&v1319);
                                if ( v1125 < 0
                                  || (memcpy_0((void *)v1319, *((const void **)v1104 + 3), v1104[4]),
                                      v1125 = RtlULongLongAdd(v1319, v1104[4], (__int64 *)&v1319),
                                      v1125 < 0)
                                  || (v1133 = v1319,
                                      *(_DWORD *)v1319 = v1104[8],
                                      v1125 = RtlULongLongAdd(v1133, 4LL, (__int64 *)&v1319),
                                      v1125 < 0)
                                  || (memcpy_0((void *)v1319, *((const void **)v1104 + 5), v1104[8]),
                                      v1125 = RtlULongLongAdd(v1319, v1104[8], (__int64 *)&v1319),
                                      v1125 < 0) )
                                {
LABEL_1342:
                                  v1134 = GetProcessHeap();
                                  HeapFree(v1134, 0, v1131);
                                  v1126 = Size;
                                }
                                else
                                {
                                  v1126 = Size;
                                  LODWORD(v1335) = v1370;
                                  v1336 = v1131;
                                }
                              }
                            }
                          }
                        }
                      }
                      v1043 = v1125 | 0x10000000;
                      v1123 = (unsigned __int16 *)m;
                      v981 = v1327;
                      v988 = (void *)v1126;
                      v1324 = (unsigned __int16 *)m;
                      if ( v1043 < 0 )
                        goto LABEL_1529;
                      LODWORD(v1334) = 0;
                      v1359 = 8;
                      v1135 = RtlUIntAdd(8u, v1315, (int *)&v1359);
                      v1324 = v1123;
                      v1043 = v1135 | 0x10000000;
                      if ( v1135 < 0 )
                        goto LABEL_1529;
                      v1136 = (v1359 + 7) & 0xFFFFFFF8;
                      if ( v1136 < v1359 )
                      {
                        v1043 = -1073741675;
                        v1324 = v1123;
                        goto LABEL_1529;
                      }
                      v1372 = (v1359 + 7) & 0xFFFFFFF8;
                      v1043 = RtlUIntAdd(v1136, 8, (int *)&v1372);
                      if ( v1043 >= 0 )
                      {
                        if ( v1348[1] && LODWORD(v1348[0]) > 1 )
                        {
                          v1137 = (LPVOID)v1348[1];
                          LODWORD(v1314) = 0;
                          v1324 = (unsigned __int16 *)m;
                          v1330 = (LPVOID)v1348[1];
                          do
                          {
                            v1043 = RtlULongLongAdd((unsigned __int64)v1137, 4LL, (__int64 *)&v1330);
                            if ( v1043 < 0 )
                              goto LABEL_1529;
                            v1043 = RtlULongLongAdd((unsigned __int64)v1330, v1138, (__int64 *)&v1330);
                            if ( v1043 < 0 )
                              goto LABEL_1529;
                            v1137 = v1330;
                            LODWORD(v1314) = v1314 + 1;
                          }
                          while ( !(_DWORD)v1314 );
                          LODWORD(v1314) = *(_DWORD *)v1330;
                          v1043 = RtlULongLongAdd((unsigned __int64)v1330, 4LL, (__int64 *)&v1330);
                          if ( v1043 < 0 )
                            goto LABEL_1529;
                          if ( LODWORD(v1348[0]) <= 2 )
                          {
                            v1043 = -1073741811;
                            goto LABEL_1529;
                          }
                          v1140 = (_DWORD *)v1348[1];
                          v1330 = (LPVOID)v1348[1];
                          do
                          {
                            LODWORD(v1319) = *v1140;
                            v1327 = v1139;
                            v1342 = v988;
                            v1329 = (SIZE_T)v981;
                            v1315 = (SIZE_T)v1123;
                            m = (size_t)v1104;
                            v1043 = RtlULongLongAdd((unsigned __int64)v1140, 4LL, (__int64 *)&v1330);
                            if ( v1043 < 0 )
                              goto LABEL_1529;
                            v1043 = RtlULongLongAdd((unsigned __int64)v1330, (unsigned int)v1319, (__int64 *)&v1330);
                            if ( v1043 < 0 )
                              goto LABEL_1529;
                            v1140 = v1330;
                          }
                          while ( (unsigned int)(v1141 + 1) < 2 );
                          v1043 = RtlULongLongAdd((unsigned __int64)v1330, 4LL, (__int64 *)&v1330);
                          if ( v1043 < 0 )
                            goto LABEL_1529;
                          LODWORD(dwBytes) = v1142;
                          v1043 = RtlUIntAdd(v1142, v1372, (int *)&dwBytes);
                          if ( v1043 < 0 )
                            goto LABEL_1529;
                          v1043 = RtlUIntAdd(dwBytes, v1143, (int *)&dwBytes);
                          if ( v1043 < 0 )
                            goto LABEL_1529;
                          v1043 = RtlUIntAdd(dwBytes, v1314, (int *)&dwBytes);
                          if ( v1043 < 0 )
                            goto LABEL_1529;
                          v1043 = RtlUIntAdd(dwBytes, v1144, (int *)&dwBytes);
                          if ( v1043 < 0 )
                            goto LABEL_1529;
                          v1043 = RtlUIntAdd(dwBytes, v1145, (int *)&dwBytes);
                          if ( v1043 < 0 )
                            goto LABEL_1529;
                          if ( (unsigned int)dwBytes > 0x400000 )
                          {
                            v1043 = -2147418113;
                            goto LABEL_1529;
                          }
                          v1146 = dwBytes;
                          v1147 = GetProcessHeap();
                          v1148 = 0LL;
                          v1337 = HeapAlloc(v1147, 8u, v1146);
                          if ( !v1337 )
                          {
                            v1337 = 0LL;
                            v1043 = -805306345;
                            goto LABEL_1526;
                          }
                          v1149 = v1327;
                          hModule = 0LL;
                          v1381 = 0LL;
                          v1382 = 0LL;
                          if ( !v1327 )
                          {
                            v1043 = -2147024809;
                            v1321 = (LPVOID)m;
LABEL_1376:
                            v1123 = (unsigned __int16 *)v1315;
                            v981 = (void *)v1329;
                            v988 = v1342;
                            v1324 = (unsigned __int16 *)v1315;
LABEL_1377:
                            v1336 = v1149;
                            goto LABEL_1529;
                          }
                          LODWORD(v1382) = v1335;
                          *(_QWORD *)&v1381 = v1327;
                          *((_QWORD *)&v1381 + 1) = v1337;
                          *(_QWORD *)((char *)&v1382 + 4) = v1146;
                          if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                            && (v1151 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                          {
                            v1152 = ((__int64 (__fastcall *)(__int64, __int128 *))v1151)(134LL, &v1381);
                            LODWORD(v1331) = v1146;
                            v1043 = v1152 | 0x10000000;
                            if ( v1152 >= 0 )
                            {
                              v1153 = DWORD1(v1382);
                              v1154 = (void *)m;
                              v1155 = (unsigned __int16 *)v1315;
                              v1156 = (void *)v1329;
                              v1157 = v1342;
                              goto LABEL_1390;
                            }
                          }
                          else
                          {
                            v1150 = GetLastError();
                            v1043 = v1150;
                            if ( v1150 > 0 )
                              v1043 = (unsigned __int16)v1150 | 0x80070000;
                            LODWORD(v1331) = v1146;
                            if ( v1043 >= 0 )
                            {
                              v1043 = -2147467259;
                              LODWORD(v1331) = v1146;
                            }
                          }
                          v1336 = v1149;
                          if ( v1043 == -805306333 )
                          {
                            v1043 = -2147024774;
                            v1123 = (unsigned __int16 *)v1315;
                            v981 = (void *)v1329;
                            v988 = v1342;
                            v1321 = (LPVOID)m;
                            v1324 = (unsigned __int16 *)v1315;
                            goto LABEL_1529;
                          }
                          v1155 = (unsigned __int16 *)v1315;
                          v1154 = (void *)m;
                          v1123 = (unsigned __int16 *)v1315;
                          v1156 = (void *)v1329;
                          v1157 = v1342;
                          v981 = (void *)v1329;
                          v1321 = (LPVOID)m;
                          v988 = v1342;
                          v1324 = (unsigned __int16 *)v1315;
                          if ( v1043 < 0 )
                          {
LABEL_1529:
                            if ( !v1123 )
                            {
LABEL_1531:
                              v1284 = v1321;
                              if ( v1321 )
                              {
                                v1285 = (void *)*((_QWORD *)v1321 + 1);
                                if ( v1285 )
                                {
                                  v1286 = GetProcessHeap();
                                  HeapFree(v1286, 0, v1285);
                                  v1284[1] = 0LL;
                                }
                                v1287 = (void *)v1284[3];
                                if ( v1287 )
                                {
                                  v1288 = GetProcessHeap();
                                  HeapFree(v1288, 0, v1287);
                                  v1284[3] = 0LL;
                                }
                                v1289 = (void *)v1284[5];
                                if ( v1289 )
                                {
                                  v1290 = GetProcessHeap();
                                  HeapFree(v1290, 0, v1289);
                                  v1284[5] = 0LL;
                                }
                                v1291 = GetProcessHeap();
                                HeapFree(v1291, 0, v1284);
                              }
                              v1292 = v1336;
                              if ( v1336 )
                              {
                                v1293 = GetProcessHeap();
                                HeapFree(v1293, 0, v1292);
                              }
                              v1294 = v1337;
                              if ( v1337 )
                              {
                                v1295 = GetProcessHeap();
                                HeapFree(v1295, 0, v1294);
                              }
                              v1296 = (_QWORD *)v1325;
                              if ( v1325 )
                              {
                                v1297 = *(void **)(v1325 + 8);
                                if ( v1297 )
                                {
                                  v1298 = GetProcessHeap();
                                  HeapFree(v1298, 0, v1297);
                                  v1296[1] = 0LL;
                                }
                                v1299 = (void *)v1296[3];
                                if ( v1299 )
                                {
                                  v1300 = GetProcessHeap();
                                  HeapFree(v1300, 0, v1299);
                                  v1296[3] = 0LL;
                                }
                                v1301 = (void *)v1296[5];
                                if ( v1301 )
                                {
                                  v1302 = GetProcessHeap();
                                  HeapFree(v1302, 0, v1301);
                                  v1296[5] = 0LL;
                                }
                                v1303 = GetProcessHeap();
                                HeapFree(v1303, 0, v1296);
                              }
                              v1304 = v1332;
                              if ( v1332 )
                              {
                                v1305 = GetProcessHeap();
                                HeapFree(v1305, 0, v1304);
                              }
LABEL_1553:
                              if ( v1043 >= 0 )
                              {
                                v1306 = v1339;
                                v489 = v1328;
                                if ( (_DWORD)v1339 )
                                {
                                  if ( v1328 )
                                  {
                                    lpMem = v1328;
                                    if ( (int)RtlULongLongAdd((unsigned __int64)v1328, 4LL, (__int64 *)&lpMem) >= 0 )
                                    {
                                      v1309 = (int *)lpMem;
                                      if ( !v1308 )
                                        v1309 = 0LL;
                                      if ( v1308 == 4 && *v1309 >= 0 && v1306 > 1 )
                                      {
                                        for ( m = (size_t)v489;
                                              (int)RtlULongLongAdd(v1307, 4LL, (__int64 *)&m) >= 0
                                           && (int)RtlULongLongAdd(m, *v1310, (__int64 *)&m) >= 0;
                                              v1307 = m )
                                        {
                                          if ( v1311 != -1 )
                                          {
                                            RtlULongLongAdd(m, 4LL, (__int64 *)&m);
                                            goto LABEL_1219;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LABEL_1219;
                              }
                              goto LABEL_1218;
                            }
LABEL_1530:
                            v1283 = GetProcessHeap();
                            HeapFree(v1283, 0, v1324);
                            goto LABEL_1531;
                          }
                          v1153 = v1331;
                          v1148 = 0LL;
LABEL_1390:
                          v1320 = 0;
                          v1330 = v1337;
                          if ( v1153 < 4 )
                          {
                            v1043 = -805306306;
                            v1321 = v1154;
                            v1123 = v1155;
                            v1324 = v1155;
                            v981 = v1156;
                            v988 = v1157;
                            goto LABEL_1377;
                          }
                          v1158 = *(unsigned int *)v1337;
                          LODWORD(v1314) = *(_DWORD *)v1337;
                          v1159 = RtlULongLongAdd((unsigned __int64)v1337, 4LL, (__int64 *)&v1330);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          v1159 = RtlUIntAdd(0, 4, (int *)&v1320);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          if ( v1160 - v1320 < (unsigned int)v1158 )
                          {
LABEL_1395:
                            v1043 = -805306306;
                            v1321 = v1161;
                            goto LABEL_1376;
                          }
                          lpMem = v1330;
                          v1159 = RtlULongLongAdd((unsigned __int64)v1330, v1158, (__int64 *)&v1330);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          v1159 = RtlUIntAdd(v1320, v1158, (int *)&v1320);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          if ( v1162 - v1320 < (unsigned int)v1163 )
                            goto LABEL_1395;
                          v1164 = *(unsigned int *)v1330;
                          v1159 = RtlULongLongAdd((unsigned __int64)v1330, v1163, (__int64 *)&v1330);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          v1159 = RtlUIntAdd(v1320, v1165, (int *)&v1320);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          if ( v1166 - v1320 < (unsigned int)v1164 )
                            goto LABEL_1395;
                          pcchLength = (size_t)v1330;
                          v1159 = RtlULongLongAdd((unsigned __int64)v1330, (unsigned int)v1164, (__int64 *)&v1330);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          v1159 = RtlUIntAdd(v1320, v1164, (int *)&v1320);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          if ( v1167 - v1320 < v1168 )
                            goto LABEL_1395;
                          LODWORD(v1319) = *(_DWORD *)v1330;
                          v1159 = RtlULongLongAdd((unsigned __int64)v1330, 4LL, (__int64 *)&v1330);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          v1159 = RtlUIntAdd(v1320, 4, (int *)&v1320);
                          if ( v1159 < 0 )
                            goto LABEL_1448;
                          if ( v1169 - v1320 < v1170 )
                            goto LABEL_1395;
                          v1159 = RtlUIntAdd(v1320, v1170, (int *)&v1320);
                          if ( v1159 < 0 )
                          {
LABEL_1448:
                            v1193 = (unsigned int *)v1325;
LABEL_1436:
                            v1043 = v1159 | 0x10000000;
                            v1123 = (unsigned __int16 *)v1315;
                            v981 = (void *)v1329;
                            v1321 = (LPVOID)m;
                            v988 = v1342;
                            v1324 = (unsigned __int16 *)v1315;
                            v1336 = v1149;
                            if ( v1043 < 0 )
                              goto LABEL_1529;
                            if ( !v1193 )
                              goto LABEL_1438;
                            v1349 = *((_QWORD *)v1193 + 1);
                            if ( !v1349 || !*v1193 )
                            {
                              v1123 = (unsigned __int16 *)v1315;
LABEL_1438:
                              v1321 = (LPVOID)m;
                              v1043 = -805306355;
                              v1324 = (unsigned __int16 *)v1315;
                              goto LABEL_1377;
                            }
                            v1335 = *v1193 - 8LL;
                            v1201 = MemoryAlloc(v1335);
                            v1202 = (unsigned __int16 *)v1315;
                            v1203 = (void *)m;
                            v1123 = (unsigned __int16 *)v1315;
                            v1321 = (LPVOID)m;
                            v1204 = v981;
                            v1324 = (unsigned __int16 *)v1315;
                            v1205 = v988;
                            v1347 = v1201;
                            v1336 = v1149;
                            if ( !v1201 )
                            {
LABEL_1480:
                              v1043 = -805306367;
                              v1332 = 0LL;
                              goto LABEL_1529;
                            }
                            v1206 = 0;
                            v1338 = v1349;
                            v1207 = (void *)m;
                            pcchLength = (size_t)v1201;
                            v1208 = v1315;
                            v1336 = v1327;
                            LOBYTE(v1316) = 0;
                            v1330 = (LPVOID)0x7F1137FAB69605ELL;
                            v1345 = v1335 & 7;
                            LODWORD(v1331) = 0;
                            v1321 = (LPVOID)m;
                            v1324 = (unsigned __int16 *)v1315;
                            if ( (v1335 & 7) != 0 )
                            {
                              v1355 = 0;
                              LODWORD(v1315) = 0;
                              v1329 = (SIZE_T)v981;
                              v1323 = v988;
                              v1209 = (unsigned __int8 *)v1338;
                              v1210 = v1331;
                              v1336 = v1327;
                              do
                              {
                                v981 = v1204;
                                v1329 = (SIZE_T)v1204;
                                v1211 = v1202;
                                v1324 = v1202;
                                v1207 = v1203;
                                v1212 = *v1209;
                                v988 = v1205;
                                v1321 = v1203;
                                v1213 = v1357;
                                v1323 = v1205;
                                if ( (unsigned int)v1315 >= 4 )
                                {
                                  v1355 |= v1212 << v1357;
                                }
                                else
                                {
                                  v1213 = v1357;
                                  v1210 |= v1212 << (v1357 - 32);
                                }
                                LODWORD(v1315) = v1315 + 1;
                                ++v1209;
                                v1202 = v1211;
                                LODWORD(v1357) = v1213 - 8;
                                v1203 = v1207;
                              }
                              while ( (int)v1315 < (unsigned __int8)(v1335 & 7) );
                              LODWORD(v1331) = v1210;
                              v80 = (int)v1317;
                              v1338 = (SIZE_T)v1209;
                              v1206 = v1316;
                              v1208 = (SIZE_T)v1211;
                              v1214 = v1331 ^ 0x92F65A5;
                              v1215 = v1345;
                              v1216 = v1355 ^ 0x699A899C;
                              LODWORD(v1319) = 0;
                              v1217 = v1331 ^ 0x92F65A5;
                              v1218 = v1355 ^ 0x699A899C;
                              if ( (_DWORD)v1345 )
                              {
                                v1219 = (_BYTE *)pcchLength;
                                v1220 = v1319;
                                do
                                {
                                  if ( v1220 >= 4 )
                                  {
                                    v1218 = __ROR4__(v1218, 24);
                                    LODWORD(v1314) = v1218;
                                  }
                                  else
                                  {
                                    v1217 = __ROR4__(v1217, 24);
                                    LODWORD(v1314) = v1217;
                                  }
                                  ++v1220;
                                  lpMem = v1219 + 1;
                                  *v1219 = v1314;
                                  v1219 = lpMem;
                                }
                                while ( (int)v1220 < (int)v1215 );
                                v1206 = v1316;
                                v1221 = (size_t)lpMem;
                              }
                              else
                              {
                                v1221 = pcchLength;
                              }
                              if ( v1215 <= 4 )
                              {
                                v1222 = 0;
                                if ( v1215 < 4 )
                                  v1214 = v1214 >> (8 * (4 - v1215)) << (8 * (4 - v1215));
                              }
                              else
                              {
                                v1222 = v1216 >> (8 * (8 - v1215)) << (8 * (8 - v1215));
                              }
                            }
                            else
                            {
                              v1222 = 0;
                              LODWORD(v1319) = 0;
                              v1329 = (SIZE_T)v981;
                              v1214 = 0;
                              v1221 = pcchLength;
                              v1323 = v988;
                            }
                            v1223 = v1335;
                            v1345 = v1335 >> 3;
                            if ( v1335 >> 3 )
                            {
                              v1224 = HIDWORD(v1330);
                              v1225 = (_BYTE *)(v1221 + 7);
                              v1226 = WORD1(v1330);
                              v1227 = v1331;
                              v1228 = v1345;
                              LODWORD(v1315) = WORD2(v1330);
                              v1229 = WORD2(v1330);
                              LODWORD(v1342) = 24670;
                              LODWORD(v1319) = HIDWORD(v1330) ^ 0xAB69605E;
                              v1230 = (unsigned __int8 *)(v1338 + 2);
                              do
                              {
                                v1231 = *(v1230 - 1) | (*(v1230 - 2) << 8);
                                v1232 = v1230[2] << 8;
                                v1233 = *v1230;
                                v1230 += 8;
                                v1234 = *(v1230 - 7) | ((v1233 | (v1231 << 8)) << 8);
                                v1235 = v1234 ^ v1214;
                                v1236 = *(v1230 - 3) | ((*(v1230 - 4) | ((*(v1230 - 5) | v1232) << 8)) << 8);
                                v1237 = v1236 ^ v1235 ^ v1222 ^ v1224 ^ 0xAB69605E;
                                v1238 = v1235 ^ (__ROR4__(v1237, 22) + v1229 * __ROR4__(v1237 + 1419157410, 27));
                                v1239 = v1237 ^ (v1226 * __ROR4__(v1238 + v1224, 9) - __ROR4__(v1238, 30));
                                v1240 = v1238 ^ ((_DWORD)v1342 * (v1239 - v1229) - (v1239 >> 13));
                                v1241 = v1239 ^ (HIWORD(v1330) * __ROR4__(v1240 ^ WORD1(v1330), 26) - __ROR4__(v1240, 30));
                                v1242 = v1240 ^ (v1224 - (v1241 ^ 0xAB69605E));
                                v1243 = v1241 ^ (WORD1(v1330) * (v1229 ^ v1242)) ^ __ROR4__(v1242, 6);
                                v1244 = v1242 ^ (__ROR4__(v1243, 30) + (_DWORD)v1342 * __ROR4__(v1243 + v1224, 15));
                                v1245 = v1243 ^ (HIWORD(v1330) * __ROR4__(v1244 + 1419157410, 14) - __ROR4__(v1244, 24));
                                v1246 = v1244 ^ __ROR4__(v1245, 10) ^ (v1315 * __ROR4__(v1245 ^ 0xAB69605E, 12));
                                v1247 = v1245 ^ (v1246 >> 10) ^ (WORD1(v1330) * (v1246 ^ HIWORD(v1330)));
                                v1229 = v1315;
                                v1248 = v1246 ^ (HIWORD(v1330) * ((_DWORD)v1342 + __ROR4__(~v1247, 5)));
                                v1249 = v1247 ^ (v1248 - HIWORD(v1330)) ^ 0xAB69605E;
                                v1250 = v1248 ^ ((v1249 >> 2) + v1315 * __ROR4__(HIWORD(v1330) ^ v1249, 30));
                                v1251 = v1249 ^ (__ROR4__(v1250, 25) + WORD1(v1330) * __ROR4__(v1250 - v1224, 6));
                                v1252 = v1250 ^ ((_DWORD)v1342 * (v1251 ^ v1315) + __ROR4__(v1251, 9));
                                v1253 = v1251 ^ (__ROR4__(v1252, 25) + HIWORD(v1330)
                                                                     * __ROR4__(v1252 ^ WORD1(v1330), 27));
                                v1254 = v1252 ^ v1253 ^ v1319;
                                v1255 = v1253 ^ (v1315 * (__ROR4__(v1254, 3) - WORD1(v1330)));
                                v1256 = v1254 ^ ((_DWORD)v1342 * __ROR4__(v1255 - v1224, 1) - __ROR4__(v1255, 6));
                                v1257 = v1255 ^ (__ROR4__(v1256, 18) + HIWORD(v1330) * __ROR4__(v1256 - 1419157410, 29));
                                v1258 = v1256 ^ (v1315 * __ROR4__(v1257 - 1419157410, 17) - __ROR4__(v1257, 14));
                                v1259 = v1257 ^ (v1258 >> 3) ^ (WORD1(v1330) * ((unsigned int)v1342 ^ v1258));
                                v1226 = WORD1(v1330);
                                v1260 = v1227 ^ __ROR4__(v1259, 30) ^ ((_DWORD)v1342 * __ROR4__(v1259 ^ v1224, 28));
                                v1227 = v1234;
                                v1214 = v1258 ^ v1260;
                                v1222 = v1259 ^ v1355;
                                *(v1225 - 4) = v1214;
                                *v1225 = v1222;
                                *(v1225 - 5) = __ROR4__(v1214, 8);
                                v1225 += 8;
                                v1355 = v1236;
                                *(v1225 - 9) = __ROR4__(v1222, 8);
                                *(v1225 - 14) = __ROR4__(v1214, 16);
                                *(v1225 - 10) = __ROR4__(v1222, 16);
                                *(v1225 - 15) = __ROR4__(v1214, 24);
                                *(v1225 - 11) = __ROR4__(v1222, 24);
                                --v1228;
                              }
                              while ( v1228 );
                              v1206 = v1316;
                              v80 = (int)v1317;
                              v988 = v1323;
                              v981 = (void *)v1329;
                              v1207 = v1321;
                              v1208 = (SIZE_T)v1324;
                              v1223 = v1335;
                            }
                            v1261 = (char *)v1347;
                            for ( n = 0LL; n < v1223; ++n )
                              v1206 ^= *((_BYTE *)v1347 + n);
                            m = (size_t)v1337;
                            v1327 = (void *)v1325;
                            if ( v1206 != *(_QWORD *)(v1223 + v1349) )
                            {
                              MemoryFree(v1347);
                              v1123 = v1324;
                              goto LABEL_1480;
                            }
                            v1334 = v1347;
                            v1263 = (unsigned __int16 *)v1208;
                            LODWORD(v1342) = 0;
                            if ( (unsigned int)v1223 < 4 )
                              goto LABEL_1521;
                            LODWORD(v1319) = *(_DWORD *)v1347;
                            v1264 = RtlULongLongAdd((unsigned __int64)v1347, 4LL, (__int64 *)&v1334);
                            v1325 = v1265;
                            v1123 = v1263;
                            v1337 = (LPVOID)m;
                            v981 = v1266;
                            v1332 = v1267;
                            v1321 = v1207;
                            v1324 = v1263;
                            if ( v1264 < 0 )
                              goto LABEL_1524;
                            v1264 = RtlUIntAdd(0, 4, (int *)&v1342);
                            v1325 = (SIZE_T)v1327;
                            v1332 = v1261;
                            v1337 = (LPVOID)m;
                            v1321 = v1207;
                            v1324 = v1263;
                            if ( v1264 < 0 )
                              goto LABEL_1524;
                            if ( (unsigned int)(v1335 - (_DWORD)v1342) < 4 )
                            {
                              v1325 = (SIZE_T)v1327;
                              v1337 = (LPVOID)m;
LABEL_1522:
                              v1324 = v1263;
                              v1321 = v1207;
                              v1332 = v1261;
LABEL_1523:
                              v1264 = -1073741762;
                              goto LABEL_1524;
                            }
                            LODWORD(v1331) = *(_DWORD *)v1334;
                            v1264 = RtlULongLongAdd((unsigned __int64)v1334, 4LL, (__int64 *)&v1334);
                            v1332 = v1268;
                            v1325 = (SIZE_T)v1327;
                            v1337 = (LPVOID)m;
                            v1321 = v1207;
                            v1324 = v1263;
                            if ( v1264 < 0 )
                              goto LABEL_1524;
                            v1264 = RtlUIntAdd((unsigned int)v1342, 4, (int *)&v1342);
                            v1325 = (SIZE_T)v1327;
                            v1332 = v1261;
                            v1337 = (LPVOID)m;
                            v1321 = v1207;
                            v1324 = v1263;
                            if ( v1264 < 0 )
                              goto LABEL_1524;
                            if ( (int)v1335 - (int)v1342 < (unsigned int)v1331 )
                            {
                              v1325 = (SIZE_T)v1327;
                              v1337 = (LPVOID)m;
LABEL_1521:
                              v1123 = v1263;
                              goto LABEL_1522;
                            }
                            v1264 = RtlUIntAdd((unsigned int)v1342, v1331, (int *)&v1342);
                            v1123 = v1263;
                            v1337 = (LPVOID)m;
                            v1332 = v1261;
                            v1325 = (SIZE_T)v1327;
                            v1321 = v1207;
                            v1324 = v1263;
                            if ( v1264 >= 0 )
                            {
                              if ( &v1261[(unsigned int)v1335] < (char *)v1334 + (unsigned int)v1331
                                || (unsigned __int64)(unsigned int)v1335 + &v1261[-(unsigned int)v1331] - (_BYTE *)v1334 >= 8 )
                              {
                                v1337 = (LPVOID)m;
                                v1325 = (SIZE_T)v1327;
                                goto LABEL_1521;
                              }
                              v1332 = v1261;
                              v1349 = 0LL;
                              v1269 = 0LL;
                              v1323 = 0LL;
                              v1264 = 0;
                              v1335 = 0LL;
                              v1357 = 0LL;
                              LODWORD(v1315) = 0;
                              v1337 = (LPVOID)m;
                              v1325 = (SIZE_T)v1327;
                              v1321 = v1207;
                              v1324 = v1263;
                              if ( v1334 )
                              {
                                Size = (SIZE_T)v1334;
                                v1264 = RtlULongLongAdd((unsigned __int64)v1334, (unsigned int)v1331, (__int64 *)&v1323);
                                v1123 = v1263;
                                v1325 = (SIZE_T)v1327;
                                v1332 = v1270;
                                v1337 = (LPVOID)m;
                                v1321 = v1207;
                                v1324 = v1263;
                                if ( v1264 < 0 )
                                {
LABEL_1516:
                                  v1282 = v1339;
                                  goto LABEL_1517;
                                }
                                v1271 = Size;
                                v1332 = v1270;
                                v1325 = (SIZE_T)v1327;
                                v1337 = (LPVOID)m;
                                v1321 = v1207;
                                v1324 = v1263;
                                if ( Size < (unsigned __int64)v1323 )
                                {
                                  v1272 = v1270;
                                  v1332 = v1270;
                                  v1273 = m;
                                  v1325 = (SIZE_T)v1327;
                                  v1274 = v1327;
                                  v1337 = (LPVOID)m;
                                  v1321 = v1207;
                                  v1324 = v1123;
                                  while ( 1 )
                                  {
                                    pcchLength = v1273;
                                    v1347 = v1272;
                                    v1264 = RtlULongLongAdd(v1271, 4LL, (__int64 *)&v1335);
                                    if ( v1264 < 0 )
                                      goto LABEL_1516;
                                    if ( v1335 > (unsigned __int64)v1323 )
                                      goto LABEL_1505;
                                    LODWORD(v1314) = 0;
                                    v1264 = RtlUIntAdd(4u, *(_DWORD *)Size, (int *)&v1314);
                                    if ( v1264 < 0 )
                                      goto LABEL_1524;
                                    v1276 = RtlULongLongAdd(v1275, (unsigned int)v1314, (__int64 *)&v1357);
                                    v1332 = v1277;
                                    v1264 = v1276;
                                    v1337 = (LPVOID)pcchLength;
                                    v1325 = (SIZE_T)v1274;
                                    v1321 = v1207;
                                    v1324 = v1123;
                                    if ( v1276 < 0 )
                                      goto LABEL_1516;
                                    v1271 = v1357;
                                    v1278 = v1323;
                                    Size = v1357;
                                    v1325 = (SIZE_T)v1274;
                                    v1321 = v1207;
                                    if ( v1357 > (unsigned __int64)v1323 )
                                    {
                                      v1264 = -1073741811;
                                      v1332 = v1347;
                                      v1337 = (LPVOID)pcchLength;
                                      v1324 = v1123;
                                      goto LABEL_1524;
                                    }
                                    LODWORD(v1315) = v1315 + 1;
                                    v1272 = v1347;
                                    v1273 = pcchLength;
                                    v1332 = v1347;
                                    v1337 = (LPVOID)pcchLength;
                                    v1324 = v1123;
                                    if ( v1357 >= (unsigned __int64)v1323 )
                                    {
                                      v1332 = v1347;
                                      v1325 = (SIZE_T)v1274;
                                      v1337 = (LPVOID)pcchLength;
                                      v1321 = v1207;
                                      v1324 = v1123;
                                      goto LABEL_1507;
                                    }
                                  }
                                }
                                v1278 = v1323;
LABEL_1507:
                                if ( (LPVOID)v1271 != v1278 )
                                {
LABEL_1505:
                                  v1264 = -1073741811;
                                  goto LABEL_1524;
                                }
                                v1269 = (void *)v1349;
                              }
                              v1279 = v1331;
                              if ( !(_DWORD)v1331 )
                              {
LABEL_1512:
                                if ( v1334 )
                                {
                                  memcpy_0(v1269, v1334, v1279);
                                  v1269 = (void *)v1349;
                                }
                                v1282 = v1315;
                                v1123 = v1324;
                                LODWORD(v1339) = v1315;
                                v1328 = v1269;
LABEL_1517:
                                if ( v1264 < 0 || (_DWORD)v1319 == v1282 )
                                  goto LABEL_1524;
                                goto LABEL_1523;
                              }
                              v1280 = v1331;
                              v1281 = GetProcessHeap();
                              v1349 = (SIZE_T)HeapAlloc(v1281, 8u, v1280);
                              v1269 = (void *)v1349;
                              if ( v1349 )
                              {
                                v1279 = v1331;
                                v1264 = 0;
                                goto LABEL_1512;
                              }
                              v1328 = 0LL;
                              v1264 = -1073741801;
                              LODWORD(v1339) = 0;
                              v1123 = v1324;
                            }
LABEL_1524:
                            v1043 = v1264 | 0x10000000;
                            goto LABEL_1529;
                          }
                          if ( v1171 != v1320 || (unsigned int)(v1314 + v1164 + v1172) + 12LL != v1171 )
                            goto LABEL_1395;
                          v1173 = GetProcessHeap();
                          v1174 = HeapAlloc(v1173, 8u, 0x30uLL);
                          if ( v1174 )
                          {
                            v1159 = 0;
                            if ( lpMem )
                            {
                              v1175 = (unsigned int)v1314;
                              *(_DWORD *)v1174 = v1314;
                              v1176 = v1175;
                              v1345 = v1175;
                              v1177 = GetProcessHeap();
                              v1178 = HeapAlloc(v1177, 8u, v1176);
                              if ( !v1178 )
                                goto LABEL_1422;
                              v1174[1] = v1178;
                              v1159 = 0;
                              memcpy_0(v1178, lpMem, v1345);
                            }
                            else
                            {
                              *(_DWORD *)v1174 = 0;
                              v1174[1] = 0LL;
                            }
                            if ( !pcchLength )
                            {
                              *((_DWORD *)v1174 + 4) = 0;
                              v1174[3] = 0LL;
LABEL_1420:
                              v1181 = v1330;
                              if ( v1330 )
                              {
                                v1182 = (unsigned int)v1319;
                                *((_DWORD *)v1174 + 8) = v1319;
                                v1183 = v1182;
                                v1345 = v1182;
                                v1184 = GetProcessHeap();
                                v1185 = HeapAlloc(v1184, 8u, v1183);
                                if ( !v1185 )
                                  goto LABEL_1422;
                                v1174[5] = v1185;
                                v1159 = 0;
                                memcpy_0(v1185, v1181, v1345);
                              }
                              else
                              {
                                *((_DWORD *)v1174 + 8) = 0;
                                v1174[5] = 0LL;
                              }
                              v1148 = v1174;
                              goto LABEL_1432;
                            }
                            *((_DWORD *)v1174 + 4) = v1164;
                            v1179 = GetProcessHeap();
                            v1180 = HeapAlloc(v1179, 8u, v1164);
                            if ( v1180 )
                            {
                              v1174[3] = v1180;
                              v1159 = 0;
                              memcpy_0(v1180, (const void *)pcchLength, v1164);
                              goto LABEL_1420;
                            }
LABEL_1422:
                            v1159 = -1073741801;
                            v1186 = (void *)v1174[1];
                            if ( v1186 )
                            {
                              v1187 = GetProcessHeap();
                              HeapFree(v1187, 0, v1186);
                              v1174[1] = 0LL;
                            }
                            v1188 = (void *)v1174[3];
                            if ( v1188 )
                            {
                              v1189 = GetProcessHeap();
                              HeapFree(v1189, 0, v1188);
                              v1174[3] = 0LL;
                            }
                            v1190 = (void *)v1174[5];
                            if ( v1190 )
                            {
                              v1191 = GetProcessHeap();
                              HeapFree(v1191, 0, v1190);
                              v1174[5] = 0LL;
                            }
                            v1192 = GetProcessHeap();
                            HeapFree(v1192, 0, v1174);
LABEL_1432:
                            if ( v1159 < 0 )
                            {
                              v1193 = 0LL;
                              v1325 = 0LL;
                              if ( !v1148 )
                                goto LABEL_1435;
                              v1194 = (void *)v1148[1];
                              if ( v1194 )
                              {
                                v1195 = GetProcessHeap();
                                HeapFree(v1195, 0, v1194);
                                v1148[1] = 0LL;
                              }
                              v1196 = (void *)v1148[3];
                              if ( v1196 )
                              {
                                v1197 = GetProcessHeap();
                                HeapFree(v1197, 0, v1196);
                                v1148[3] = 0LL;
                              }
                              v1198 = (void *)v1148[5];
                              if ( v1198 )
                              {
                                v1199 = GetProcessHeap();
                                HeapFree(v1199, 0, v1198);
                                v1148[5] = 0LL;
                              }
                              v1200 = GetProcessHeap();
                              HeapFree(v1200, 0, v1148);
                              v1193 = 0LL;
                            }
                            else
                            {
                              v1193 = (unsigned int *)v1148;
                            }
                            v1325 = (SIZE_T)v1193;
LABEL_1435:
                            v1149 = v1327;
                            goto LABEL_1436;
                          }
                          v1325 = 0LL;
                          v1043 = -805306345;
LABEL_1526:
                          v1123 = (unsigned __int16 *)v1315;
                          v981 = (void *)v1329;
                          v988 = v1342;
                          v1321 = (LPVOID)m;
                          v1336 = v1327;
                          v1324 = (unsigned __int16 *)v1315;
                          goto LABEL_1529;
                        }
                        v1043 = -1073741811;
                      }
                      v1123 = (unsigned __int16 *)m;
                      v1324 = (unsigned __int16 *)m;
                      goto LABEL_1529;
                    }
                  }
                }
                v1109 = -1073741801;
                v1345 = *((_QWORD *)v1104 + 1);
                if ( v1345 )
                {
                  v1112 = GetProcessHeap();
                  HeapFree(v1112, 0, (LPVOID)v1345);
                  *((_QWORD *)v1104 + 1) = 0LL;
                }
                v1345 = *((_QWORD *)v1104 + 3);
                if ( v1345 )
                {
                  v1113 = GetProcessHeap();
                  HeapFree(v1113, 0, (LPVOID)v1345);
                  *((_QWORD *)v1104 + 3) = 0LL;
                }
                v1345 = *((_QWORD *)v1104 + 5);
                if ( v1345 )
                {
                  v1114 = GetProcessHeap();
                  HeapFree(v1114, 0, (LPVOID)v1345);
                  *((_QWORD *)v1104 + 5) = 0LL;
                }
                v1115 = GetProcessHeap();
                HeapFree(v1115, 0, v1104);
              }
              else
              {
                v1109 = -1073741801;
              }
              v1104 = (unsigned int *)v1321;
              goto LABEL_1318;
            }
LABEL_1218:
            v489 = v1328;
LABEL_1219:
            v1348[0] = 0LL;
            v1002 = (void *)v1348[1];
            if ( v1348[1] )
            {
              v1003 = GetProcessHeap();
              HeapFree(v1003, 0, v1002);
              v1348[1] = 0LL;
            }
            if ( v489 )
            {
              v1004 = GetProcessHeap();
              HeapFree(v1004, 0, v489);
            }
            if ( v988 )
            {
              v1005 = GetProcessHeap();
              HeapFree(v1005, 0, v988);
            }
            if ( v981 )
            {
              v1006 = GetProcessHeap();
              HeapFree(v1006, 0, v981);
            }
            goto LABEL_1227;
          }
          v714 = v1358;
          lpMem = (LPVOID)v1358;
          v715 = v492 & 0xF;
          v1407 = 0;
          LODWORD(v1342) = v715;
          memset_0(v1408, 0, 0x64uLL);
          v716 = 1;
          v717 = ((__int64 (__fastcall *)(size_t, __int64))off_1808D1390[0])(m, 7LL);
          if ( v717 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v717, 104LL, &v1407) )
          {
            if ( v1409 != 32 || !v1410 || v1408[0] <= 0 || v1408[1] <= 0 )
              v716 = 0;
            if ( v716 )
            {
LABEL_925:
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(&v1401, v714, HIDWORD(lpMem));
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(&v1402, v714, HIDWORD(lpMem));
              if ( v715 == 1 )
                pcchLength = ((__int64 (__fastcall *)(_QWORD))off_1808D1368[0])(v1393 == 0 ? 0xB26720 : 0);
LABEL_927:
              v753 = m;
              LODWORD(v1319) = off_1808D13C0((CToastCenterExperienceManager *)m, (struct CSingleViewShellExperience *)1);
              v754 = 2064;
              if ( v1392 )
                v754 = 133138;
              LODWORD(v1336) = v754;
              if ( v716 )
              {
                v755 = v1394;
                LODWORD(v1314) = v1393;
                lpModuleName = v1397;
                v1338 = (SIZE_T)v1394;
                v1420 = 0;
                memset_0(v1421, 0, 0x64uLL);
                v1429 = 0;
                memset_0(v1430, 0, 0x64uLL);
                lpMem = 0LL;
                LODWORD(v1321) = 0;
                LODWORD(v1315) = 0;
                v1456 = 0LL;
                v1457 = 0;
                memset(v1455, 0, sizeof(v1455));
                v1435 = 0LL;
                if ( !v755 )
                  goto LABEL_1034;
                v756 = m;
                v757 = ((__int64 (__fastcall *)(size_t, __int64))off_1808D1390[0])(m, 7LL);
                if ( v757 )
                {
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v757, 104LL, &v1420) )
                  {
                    lpMem = v1422;
                    LODWORD(v1321) = v1421[0];
                    LODWORD(v1315) = v1421[1];
                  }
                  v758 = ((__int64 (__fastcall *)(size_t))off_1808D1350[0])(v756);
                  Size = v758;
                  v759 = (CToastCenterExperienceManager *)v758;
                  if ( v758 )
                  {
                    DWORD1(v1455[0]) = v1401.m128i_i32[2] - v1401.m128i_i32[0];
                    DWORD2(v1455[0]) = v1401.m128i_i32[1] - v1401.m128i_i32[3];
                    v1385 = 0LL;
                    LODWORD(v1455[0]) = 40;
                    HIDWORD(v1455[0]) = 2097153;
                    v760 = (void *)((__int64 (__fastcall *)(SIZE_T, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                     v758,
                                     v1455,
                                     0LL,
                                     &v1385,
                                     0LL,
                                     0);
                    v1327 = v760;
                    if ( v760 )
                    {
                      v763 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1808D13A8[0])(
                               v760,
                               104LL,
                               &v1429) == 0;
                      v764 = 0LL;
                      if ( !v763 )
                        v764 = v1431;
                      DWORD2(v1435) = v1401.m128i_i32[2] - v1401.m128i_i32[0];
                      HIDWORD(v1435) = v1401.m128i_i32[3] - v1401.m128i_i32[1];
                      v1347 = v764;
                      ((void (__fastcall *)(CToastCenterExperienceManager *, void *))off_1808D13B8)(v759, v1327);
                      off_1808D13C0(v759, (struct CSingleViewShellExperience *)1);
                      v765 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                               v759,
                               lpModuleName);
                      v766 = off_1808D1428[0];
                      v1335 = v765;
                      v767 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                      ((void (__fastcall *)(SIZE_T, __int128 *, __int64))v766)(Size, &v1435, v767);
                      v761 = 0;
                      ((void (__fastcall *)(SIZE_T, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                        Size,
                        v1338,
                        0xFFFFFFFFLL,
                        &v1435,
                        (_DWORD)v1336,
                        0LL);
                      if ( v715 == 1 )
                      {
                        if ( (_DWORD)v1314 )
                          LODWORD(v1331) = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                        else
                          LODWORD(v1331) = 0xFFFFFF;
                      }
                      else
                      {
                        LODWORD(v1331) = -5723992;
                      }
                      v768 = 0;
                      v769 = -v1401.m128i_i32[0];
                      v770 = 0;
                      if ( v1401.m128i_i32[0] >= 0 )
                      {
                        v768 = v1401.m128i_i32[0];
                        v769 = 0;
                      }
                      v771 = -v1401.m128i_i32[1];
                      if ( v1401.m128i_i32[1] >= 0 )
                      {
                        v770 = v1401.m128i_i32[1];
                        v771 = 0;
                      }
                      v772 = DWORD2(v1435) - v769;
                      if ( DWORD2(v1435) - v769 >= (int)v1321 - v768 )
                        v772 = (_DWORD)v1321 - v768;
                      LODWORD(v1314) = v772;
                      v773 = HIDWORD(v1435) - v771;
                      if ( HIDWORD(v1435) - v771 >= (int)v1315 - v770 )
                        v773 = v1315 - v770;
                      if ( v772 > 0 && v773 > 0 )
                      {
                        v774 = (unsigned int)v1314;
                        v775 = v1331;
                        lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1435));
                        v776 = lpModuleName;
                        v1349 = (unsigned int)v773;
                        v1323 = (LPVOID)(int)v1321;
                        v777 = (char *)v1347 + 4 * v769 + 4 * (__int64)(DWORD2(v1435) * v771);
                        v1338 = (SIZE_T)v777;
                        v778 = (char *)lpMem + 4 * v768 + 4 * (__int64)((int)v1321 * v770);
                        v779 = 0;
                        LODWORD(v1315) = 0;
                        v1347 = v778;
                        do
                        {
                          lpMem = (LPVOID)v774;
                          v780 = v778 - v777;
                          v781 = (unsigned __int8 *)(v777 + 2);
                          v782 = (char *)v774;
                          do
                          {
                            if ( (unsigned __int8)((*v781 + *(v781 - 2) + 2 * (unsigned int)*(v781 - 1)) >> 2) != 0xFF )
                            {
                              v783 = (unsigned __int8)~((*v781 + *(v781 - 2) + 2 * (unsigned int)*(v781 - 1)) >> 2);
                              v784 = BYTE1(v1331);
                              v781[v780] -= ~((*v781 + *(v781 - 2) + 2 * (unsigned int)*(v781 - 1)) >> 2)
                                          * (v775 - v781[v780]);
                              v785 = v781[v780 - 1];
                              v786 = (unsigned __int64)(2155905153LL * v783 * (v784 - v785)) >> 32;
                              v787 = BYTE2(v1331);
                              v781[v780 - 1] = v785 + (v786 >> 7 < 0) + (v786 >> 7);
                              v788 = v781[v780 - 2];
                              v789 = (unsigned __int64)(2155905153LL * v783 * (v787 - v788)) >> 32;
                              v781[v780 - 2] = v788 + (v789 >> 7 < 0) + (v789 >> 7);
                              v790 = v781[v780 + 1];
                              v791 = v783 * (255 - v790);
                              v779 = v1315;
                              LOBYTE(v789) = v790
                                           + ((((unsigned __int64)(2155905153LL * v791) >> 32) & 0x80000000) != 0LL)
                                           + ((int)((unsigned __int64)(2155905153LL * v791) >> 32) >> 7);
                              v782 = (char *)lpMem;
                              v781[v780 + 1] = v789;
                            }
                            v781 += 4;
                            v761 = v779;
                            lpMem = --v782;
                          }
                          while ( v782 );
                          v777 = (char *)v776 + v1338;
                          v763 = v1349-- == 1;
                          v1338 += (SIZE_T)v776;
                          LODWORD(v1315) = v779;
                          v778 = (char *)v1347 + 4 * (_QWORD)v1323;
                          v1347 = v778;
                        }
                        while ( !v763 );
                        v715 = (int)v1342;
                        v80 = (int)v1317;
                      }
                      ((void (__fastcall *)(void *))off_1808D1378)(v1327);
                      if ( v1335 )
                        ((void (__fastcall *)(SIZE_T, SIZE_T))off_1808D13B8)(Size, v1335);
                    }
                    else
                    {
                      v761 = GetLastError();
                      v762 = v761 < 0;
                      if ( v761 > 0 )
                      {
                        v761 = (unsigned __int16)v761 | 0x80070000;
                        v762 = v761 < 0;
                      }
                      if ( !v762 )
                        v761 = -2147467259;
                    }
                    ((void (__fastcall *)(SIZE_T))off_1808D1370[0])(Size);
                    if ( v761 < 0 )
                      goto LABEL_1034;
                    v792 = v1395;
                    LODWORD(v1314) = v1393;
                    v1417 = 0;
                    lpModuleName = v1398;
                    v1338 = (SIZE_T)v1395;
                    memset_0(v1418, 0, 0x64uLL);
                    v1432 = 0;
                    memset_0(v1433, 0, 0x64uLL);
                    lpMem = 0LL;
                    LODWORD(v1315) = 0;
                    LODWORD(v1334) = 0;
                    v1447 = 0LL;
                    v1448 = 0;
                    memset(v1446, 0, sizeof(v1446));
                    v1436 = 0LL;
                    if ( !v792 )
                      goto LABEL_1034;
                    v793 = m;
                    v794 = ((__int64 (__fastcall *)(size_t, __int64))off_1808D1390[0])(m, 7LL);
                    if ( v794 )
                    {
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v794, 104LL, &v1417) )
                      {
                        lpMem = v1419;
                        LODWORD(v1315) = v1418[0];
                        LODWORD(v1334) = v1418[1];
                      }
                      v795 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(size_t))off_1808D1350[0])(v793);
                      Size = (SIZE_T)v795;
                      if ( v795 )
                      {
                        DWORD1(v1446[0]) = v1402.m128i_i32[2] - v1402.m128i_i32[0];
                        DWORD2(v1446[0]) = v1402.m128i_i32[1] - v1402.m128i_i32[3];
                        v1388[0] = 0LL;
                        LODWORD(v1446[0]) = 40;
                        HIDWORD(v1446[0]) = 2097153;
                        v796 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                         v795,
                                         v1446,
                                         0LL,
                                         v1388,
                                         0LL,
                                         0);
                        v1327 = v796;
                        if ( !v796 )
                        {
                          v797 = GetLastError();
                          v798 = v797 < 0;
                          if ( v797 > 0 )
                          {
                            v797 = (unsigned __int16)v797 | 0x80070000;
                            v798 = v797 < 0;
                          }
                          if ( !v798 )
                            v797 = -2147467259;
LABEL_1006:
                          ((void (__fastcall *)(SIZE_T))off_1808D1370[0])(Size);
                          if ( v797 < 0 )
                            goto LABEL_1034;
                          v826 = 0LL;
LABEL_1149:
                          off_1808D13C0(
                            (CToastCenterExperienceManager *)m,
                            (struct CSingleViewShellExperience *)(unsigned int)v1319);
                          v835 = v1330;
                          if ( !v1330 )
                          {
LABEL_1032:
                            if ( !v826 )
                              goto LABEL_1034;
                            goto LABEL_1033;
                          }
LABEL_1031:
                          ((void (__fastcall *)(LPVOID))off_1808D1378)(v835);
                          goto LABEL_1032;
                        }
                        v763 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1808D13A8[0])(
                                 v796,
                                 104LL,
                                 &v1432) == 0;
                        v799 = 0LL;
                        if ( !v763 )
                          v799 = v1434;
                        DWORD2(v1436) = v1402.m128i_i32[2] - v1402.m128i_i32[0];
                        HIDWORD(v1436) = v1402.m128i_i32[3] - v1402.m128i_i32[1];
                        v1347 = v799;
                        ((void (__fastcall *)(CToastCenterExperienceManager *, void *))off_1808D13B8)(v795, v1327);
                        off_1808D13C0(v795, (struct CSingleViewShellExperience *)1);
                        v800 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                 v795,
                                 lpModuleName);
                        v801 = off_1808D1428[0];
                        v1335 = v800;
                        v802 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                        ((void (__fastcall *)(SIZE_T, __int128 *, __int64))v801)(Size, &v1436, v802);
                        v797 = 0;
                        ((void (__fastcall *)(SIZE_T, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                          Size,
                          v1338,
                          0xFFFFFFFFLL,
                          &v1436,
                          (_DWORD)v1336,
                          0LL);
                        if ( v715 == 1 )
                        {
                          if ( !(_DWORD)v1314 )
                          {
                            LODWORD(v1328) = 0xFFFFFF;
LABEL_987:
                            v804 = 0;
                            v805 = -v1402.m128i_i32[0];
                            v806 = 0;
                            if ( v1402.m128i_i32[0] >= 0 )
                            {
                              v804 = v1402.m128i_i32[0];
                              v805 = 0;
                            }
                            v807 = -v1402.m128i_i32[1];
                            if ( v1402.m128i_i32[1] >= 0 )
                            {
                              v806 = v1402.m128i_i32[1];
                              v807 = 0;
                            }
                            v808 = DWORD2(v1436) - v805;
                            if ( DWORD2(v1436) - v805 >= (int)v1315 - v804 )
                              v808 = v1315 - v804;
                            v809 = HIDWORD(v1436) - v807;
                            if ( HIDWORD(v1436) - v807 >= (int)v1334 - v806 )
                              v809 = (_DWORD)v1334 - v806;
                            if ( v808 > 0 && v809 > 0 )
                            {
                              lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1436));
                              v1349 = (unsigned int)v809;
                              v1323 = (LPVOID)(int)v1315;
                              v810 = (char *)v1347 + 4 * v805 + 4 * (__int64)(DWORD2(v1436) * v807);
                              v1338 = (SIZE_T)v810;
                              v811 = (char *)lpMem + 4 * v804 + 4 * (__int64)((int)v1315 * v806);
                              v812 = 0;
                              LODWORD(v1315) = 0;
                              v1347 = v811;
                              do
                              {
                                v813 = dwBytes;
                                v814 = (unsigned __int8 *)(v810 + 2);
                                v815 = (unsigned int)v808;
                                v816 = v811 - v810;
                                lpMem = (LPVOID)(unsigned int)v808;
                                do
                                {
                                  if ( (unsigned __int8)((*v814 + *(v814 - 2) + 2 * (unsigned int)*(v814 - 1)) >> 2) != 0xFF )
                                  {
                                    v817 = (unsigned __int8)~((*v814 + *(v814 - 2) + 2 * (unsigned int)*(v814 - 1)) >> 2);
                                    v818 = BYTE1(v1328);
                                    v814[v816] -= ~((*v814 + *(v814 - 2) + 2 * (unsigned int)*(v814 - 1)) >> 2)
                                                * (v813 - v814[v816]);
                                    v819 = v814[v816 - 1];
                                    v820 = (unsigned __int64)(2155905153LL * v817 * (v818 - v819)) >> 32;
                                    v821 = BYTE2(v1328);
                                    v814[v816 - 1] = v819 + (v820 >> 7 < 0) + (v820 >> 7);
                                    v822 = v814[v816 - 2];
                                    v823 = (unsigned __int64)(2155905153LL * v817 * (v821 - v822)) >> 32;
                                    v814[v816 - 2] = v822 + (v823 >> 7 < 0) + (v823 >> 7);
                                    v824 = v814[v816 + 1];
                                    v825 = v817 * (255 - v824);
                                    v812 = v1315;
                                    LOBYTE(v823) = v824
                                                 + ((((unsigned __int64)(2155905153LL * v825) >> 32) & 0x80000000) != 0LL)
                                                 + ((int)((unsigned __int64)(2155905153LL * v825) >> 32) >> 7);
                                    v815 = (unsigned __int64)lpMem;
                                    v814[v816 + 1] = v823;
                                  }
                                  v814 += 4;
                                  v797 = v812;
                                  lpMem = (LPVOID)--v815;
                                }
                                while ( v815 );
                                v810 = (char *)lpModuleName + v1338;
                                v763 = v1349-- == 1;
                                v1338 += (SIZE_T)lpModuleName;
                                LODWORD(v1315) = v812;
                                v811 = (char *)v1347 + 4 * (_QWORD)v1323;
                                v1347 = v811;
                              }
                              while ( !v763 );
                              v80 = (int)v1317;
                            }
                            ((void (__fastcall *)(void *))off_1808D1378)(v1327);
                            if ( v1335 )
                              ((void (__fastcall *)(SIZE_T, SIZE_T))off_1808D13B8)(Size, v1335);
                            goto LABEL_1006;
                          }
                          v803 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                        }
                        else
                        {
                          v803 = -5723992;
                        }
                        LODWORD(v1328) = v803;
                        LODWORD(dwBytes) = v803;
                        goto LABEL_987;
                      }
                    }
                  }
                }
LABEL_1013:
                GetLastError();
                goto LABEL_1034;
              }
              if ( v1393 || (v827 = -64, v715 == 1) )
                v827 = -1;
              BYTE2(v1329) = v827;
              LOWORD(v1329) = 0;
              BYTE3(v1329) = 1;
              LODWORD(v1331) = 0;
              LODWORD(v1328) = 0;
              v1320 = 0;
              v1332 = (LPVOID)((__int64 (__fastcall *)(size_t))off_1808D1350[0])(v753);
              if ( !v1332 )
                goto LABEL_1013;
              if ( v715 == 1 )
              {
                v828 = v1402.m128i_i32[2] - v1402.m128i_i32[0];
                if ( v1402.m128i_i32[2] - v1402.m128i_i32[0] <= v1401.m128i_i32[2] - v1401.m128i_i32[0] )
                  v828 = v1401.m128i_i32[2] - v1401.m128i_i32[0];
                v829 = v1402.m128i_i32[3] - v1401.m128i_i32[1];
                LODWORD(v1315) = v828;
                v830 = 0;
                LODWORD(v1325) = v1402.m128i_i32[3] - v1401.m128i_i32[1];
                v831 = 0;
                if ( v1392 )
                {
                  v831 = v1402.m128i_i32[0] + v828 - v1402.m128i_i32[2];
                  LODWORD(v1331) = v1401.m128i_i32[0] + v828 - v1401.m128i_i32[2];
                  v1320 = v831;
                  v830 = v1331;
                }
                LODWORD(v1324) = v1402.m128i_i32[2] + v831 - v1402.m128i_i32[0];
                v832 = v1401.m128i_i32[2] + v830 - v1401.m128i_i32[0];
                LODWORD(v1337) = v1402.m128i_i32[1] - v1401.m128i_i32[1];
                LODWORD(v1334) = v1402.m128i_i32[3] - v1401.m128i_i32[1];
                LODWORD(v1321) = v1401.m128i_i32[3] - v1401.m128i_i32[1];
              }
              else
              {
                v828 = DWORD2(v1358);
                v829 = HIDWORD(v1358);
                LODWORD(v1315) = DWORD2(v1358);
                LODWORD(v1321) = _mm_cvtsi128_si32(_mm_srli_si128(v1401, 12));
                LODWORD(v1328) = _mm_cvtsi128_si32(_mm_srli_si128(v1401, 4));
                LODWORD(v1334) = _mm_cvtsi128_si32(_mm_srli_si128(v1402, 12));
                v832 = _mm_cvtsi128_si32(_mm_srli_si128(v1401, 8));
                LODWORD(v1337) = _mm_cvtsi128_si32(_mm_srli_si128(v1402, 4));
                LODWORD(v1325) = HIDWORD(v1358);
                LODWORD(v1331) = _mm_cvtsi128_si32(v1401);
                LODWORD(v1324) = _mm_cvtsi128_si32(_mm_srli_si128(v1402, 8));
                v1320 = _mm_cvtsi128_si32(v1402);
              }
              v1442[0] = 40;
              v1383 = 0LL;
              v1442[2] = -v829;
              memset(&v1442[4], 0, 28);
              v1442[1] = v828;
              v1442[3] = 2097153;
              v833 = (void *)((__int64 (__fastcall *)(LPVOID, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                               v1332,
                               v1442,
                               0LL,
                               &v1383,
                               0LL,
                               0);
              v1330 = v833;
              if ( !v833 )
              {
                GetLastError();
                v826 = v1332;
LABEL_1033:
                ((void (__fastcall *)(LPVOID))off_1808D1370[0])(v826);
LABEL_1034:
                if ( pcchLength )
                  ((void (__fastcall *)(size_t))off_1808D1378)(pcchLength);
                goto LABEL_1036;
              }
              ((void (__fastcall *)(LPVOID, void *))off_1808D13B8)(v1332, v833);
              if ( v715 == 1 && pcchLength )
              {
                v1439 = 0LL;
                v1441 = v1325;
                v1440 = v828;
                ((void (__fastcall *)(LPVOID, __int64 *))off_1808D1428[0])(v1332, &v1439);
              }
              LODWORD(v1339) = v1393;
              lpModuleName = v1397;
              lpMem = v1394;
              v1414 = 0;
              memset_0(v1415, 0, 0x64uLL);
              v1423 = 0;
              memset_0(v1424, 0, 0x64uLL);
              v1338 = 0LL;
              LODWORD(v1335) = 0;
              LODWORD(v1314) = 0;
              memset(v1449, 0, sizeof(v1449));
              v1450 = 0LL;
              v1451 = 0;
              v1438 = 0LL;
              if ( !lpMem )
                goto LABEL_1029;
              v834 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1808D1390[0])(v1332, 7LL);
              if ( v834 )
              {
                if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v834, 104LL, &v1414) )
                {
                  v1338 = v1416;
                  LODWORD(v1335) = v1415[0];
                  LODWORD(v1314) = v1415[1];
                }
                v1327 = (void *)((__int64 (__fastcall *)(LPVOID))off_1808D1350[0])(v1332);
                if ( v1327 )
                {
                  v1384 = 0LL;
                  DWORD1(v1449[0]) = v832 - v1331;
                  DWORD2(v1449[0]) = (_DWORD)v1328 - (_DWORD)v1321;
                  LODWORD(v1449[0]) = 40;
                  HIDWORD(v1449[0]) = 2097153;
                  v850 = ((__int64 (__fastcall *)(void *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                           v1327,
                           v1449,
                           0LL,
                           &v1384,
                           0LL,
                           0);
                  Size = v850;
                  if ( v850 )
                  {
                    v763 = ((unsigned int (__fastcall *)(SIZE_T, __int64, int *))off_1808D13A8[0])(v850, 104LL, &v1423) == 0;
                    v853 = 0LL;
                    if ( !v763 )
                      v853 = v1425;
                    DWORD2(v1438) = v832 - v1331;
                    v854 = (CToastCenterExperienceManager *)v1327;
                    v1347 = v853;
                    HIDWORD(v1438) = (_DWORD)v1321 - (_DWORD)v1328;
                    ((void (__fastcall *)(void *, SIZE_T))off_1808D13B8)(v1327, Size);
                    off_1808D13C0(v854, (struct CSingleViewShellExperience *)1);
                    v855 = (const WCHAR *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                            v854,
                                            lpModuleName);
                    v856 = off_1808D1428[0];
                    v1351 = v855;
                    v857 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(void *, __int128 *, __int64))v856)(v1327, &v1438, v857);
                    v858 = 0;
                    ((void (__fastcall *)(void *, LPVOID, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      v1327,
                      lpMem,
                      0xFFFFFFFFLL,
                      &v1438,
                      (_DWORD)v1336,
                      0LL);
                    if ( v715 == 1 )
                    {
                      if ( (_DWORD)v1339 )
                        v859 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                      else
                        v859 = 0xFFFFFF;
                    }
                    else
                    {
                      v859 = -5723992;
                    }
                    v860 = (void *)(int)v1335;
                    v861 = 0;
                    LODWORD(v1339) = v859;
                    v862 = -(int)v1331;
                    if ( (v1331 & 0x80000000) == 0LL )
                    {
                      v861 = v1331;
                      v862 = 0;
                    }
                    v863 = -(int)v1328;
                    LODWORD(v1331) = v861;
                    if ( (int)v1328 >= 0 )
                    {
                      v863 = 0;
                      v858 = (int)v1328;
                    }
                    LODWORD(v1321) = v858;
                    v864 = v1335 - v861;
                    v865 = DWORD2(v1438) - v862;
                    if ( DWORD2(v1438) - v862 >= v864 )
                      v865 = v864;
                    LODWORD(v1335) = v865;
                    v866 = HIDWORD(v1438) - v863;
                    if ( HIDWORD(v1438) - v863 >= (int)v1314 - v858 )
                      v866 = v1314 - v858;
                    v851 = 0;
                    if ( v865 > 0 && v866 > 0 )
                    {
                      v867 = v1335;
                      lpModuleName = (LPCWSTR)(4LL * SDWORD2(v1438));
                      v1349 = (unsigned int)v866;
                      v1323 = v860;
                      LODWORD(v1314) = 0;
                      v868 = (unsigned __int8 *)v1347 + 4 * v862 + 4 * (__int64)(v863 * DWORD2(v1438));
                      v1347 = v868;
                      v869 = v1338 + 4 * ((int)v1331 + (__int64)((int)v1321 * (int)v860));
                      v1338 = v869;
                      do
                      {
                        v870 = v1314;
                        v871 = v868 + 2;
                        v872 = v867;
                        v873 = v1339;
                        v874 = v869 - (_QWORD)v868;
                        lpMem = (LPVOID)v872;
                        do
                        {
                          if ( (unsigned __int8)((*v871 + *(v871 - 2) + 2 * (unsigned int)*(v871 - 1)) >> 2) != 0xFF )
                          {
                            v875 = (unsigned __int8)~((*v871 + *(v871 - 2) + 2 * (unsigned int)*(v871 - 1)) >> 2);
                            v876 = BYTE1(v1339);
                            v871[v874] -= ~((*v871 + *(v871 - 2) + 2 * (unsigned int)*(v871 - 1)) >> 2)
                                        * (v873 - v871[v874]);
                            v877 = v871[v874 - 1];
                            v878 = (unsigned __int64)(2155905153LL * v875 * (v876 - v877)) >> 32;
                            v879 = BYTE2(v1339);
                            v871[v874 - 1] = v877 + (v878 >> 7 < 0) + (v878 >> 7);
                            v880 = v871[v874 - 2];
                            v881 = (unsigned __int64)(2155905153LL * v875 * (v879 - v880)) >> 32;
                            v871[v874 - 2] = v880 + (v881 >> 7 < 0) + (v881 >> 7);
                            v872 = (unsigned __int64)lpMem;
                            v871[v874 + 1] += v875 * (255 - v871[v874 + 1]) / 255;
                          }
                          v871 += 4;
                          v851 = v870;
                          lpMem = (LPVOID)--v872;
                        }
                        while ( v872 );
                        v868 = (unsigned __int8 *)v1347 + (_QWORD)lpModuleName;
                        v763 = v1349-- == 1;
                        v867 = v1335;
                        v1347 = (char *)v1347 + (_QWORD)lpModuleName;
                        LODWORD(v1314) = v870;
                        v869 = v1338 + 4LL * (_QWORD)v1323;
                        v1338 = v869;
                      }
                      while ( !v763 );
                      v715 = (int)v1342;
                      v828 = v1315;
                    }
                    ((void (__fastcall *)(SIZE_T))off_1808D1378)(Size);
                    if ( v1351 )
                      ((void (__fastcall *)(void *, LPCWSTR))off_1808D13B8)(v1327, v1351);
                  }
                  else
                  {
                    v851 = GetLastError();
                    v852 = v851 < 0;
                    if ( v851 > 0 )
                    {
                      v851 = (unsigned __int16)v851 | 0x80070000;
                      v852 = v851 < 0;
                    }
                    if ( !v852 )
                      v851 = -2147467259;
                  }
                  ((void (__fastcall *)(void *))off_1808D1370[0])(v1327);
                  if ( v851 < 0 )
                    goto LABEL_1029;
                  v882 = v1395;
                  LODWORD(v1321) = v1393;
                  v1411 = 0;
                  v1351 = v1398;
                  lpModuleName = (LPCWSTR)v1395;
                  memset_0(v1412, 0, 0x64uLL);
                  v1426 = 0;
                  memset_0(v1427, 0, 0x64uLL);
                  lpMem = 0LL;
                  LODWORD(v1314) = 0;
                  LODWORD(v1335) = 0;
                  v1453 = 0LL;
                  v1454 = 0;
                  memset(v1452, 0, sizeof(v1452));
                  v1437 = 0LL;
                  if ( !v882 )
                    goto LABEL_1029;
                  v826 = v1332;
                  v883 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1808D1390[0])(v1332, 7LL);
                  if ( !v883 )
                  {
                    GetLastError();
                    goto LABEL_1030;
                  }
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(v883, 104LL, &v1411) )
                  {
                    lpMem = v1413;
                    LODWORD(v1314) = v1412[0];
                    LODWORD(v1335) = v1412[1];
                  }
                  Size = ((__int64 (__fastcall *)(LPVOID))off_1808D1350[0])(v826);
                  v884 = (CToastCenterExperienceManager *)Size;
                  if ( Size )
                  {
                    DWORD1(v1452[0]) = (_DWORD)v1324 - v1320;
                    DWORD2(v1452[0]) = (_DWORD)v1337 - (_DWORD)v1334;
                    v1387 = 0LL;
                    LODWORD(v1452[0]) = 40;
                    HIDWORD(v1452[0]) = 2097153;
                    v885 = (void *)((__int64 (__fastcall *)(SIZE_T, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                     Size,
                                     v1452,
                                     0LL,
                                     &v1387,
                                     0LL,
                                     0);
                    v1327 = v885;
                    if ( !v885 )
                    {
                      v886 = GetLastError();
                      v887 = v886 < 0;
                      if ( v886 > 0 )
                      {
                        v886 = (unsigned __int16)v886 | 0x80070000;
                        v887 = v886 < 0;
                      }
                      if ( !v887 )
                        v886 = -2147467259;
                      goto LABEL_1145;
                    }
                    v763 = ((unsigned int (__fastcall *)(void *, __int64, int *))off_1808D13A8[0])(v885, 104LL, &v1426) == 0;
                    v888 = 0LL;
                    if ( !v763 )
                      v888 = v1428;
                    DWORD2(v1437) = (_DWORD)v1324 - v1320;
                    HIDWORD(v1437) = (_DWORD)v1334 - (_DWORD)v1337;
                    v1338 = v888;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, void *))off_1808D13B8)(v884, v1327);
                    off_1808D13C0(v884, (struct CSingleViewShellExperience *)1);
                    v889 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                     v884,
                                     v1351);
                    v890 = off_1808D1428[0];
                    v1323 = v889;
                    v891 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                    ((void (__fastcall *)(SIZE_T, __int128 *, __int64))v890)(Size, &v1437, v891);
                    v892 = 0;
                    ((void (__fastcall *)(SIZE_T, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                      Size,
                      lpModuleName,
                      0xFFFFFFFFLL,
                      &v1437,
                      (_DWORD)v1336,
                      0LL);
                    if ( v715 == 1 )
                    {
                      if ( !(_DWORD)v1321 )
                      {
                        LODWORD(v1328) = 0xFFFFFF;
LABEL_1126:
                        v894 = 0;
                        v895 = v1314;
                        v896 = -v1320;
                        if ( (v1320 & 0x80000000) == 0 )
                        {
                          v894 = v1320;
                          v896 = 0;
                        }
                        v897 = -(int)v1337;
                        LODWORD(v1324) = v894;
                        if ( (int)v1337 >= 0 )
                        {
                          v897 = 0;
                          v892 = (int)v1337;
                        }
                        LODWORD(v1334) = v892;
                        v898 = v1314 - v894;
                        v899 = DWORD2(v1437) - v896;
                        if ( DWORD2(v1437) - v896 >= v898 )
                          v899 = v898;
                        LODWORD(v1321) = v899;
                        v900 = HIDWORD(v1437) - v897;
                        if ( HIDWORD(v1437) - v897 >= (int)v1335 - v892 )
                          v900 = v1335 - v892;
                        v886 = 0;
                        if ( v899 > 0 && v900 > 0 )
                        {
                          v901 = (unsigned int)v1321;
                          v1351 = (LPCWSTR)(4LL * SDWORD2(v1437));
                          v1349 = (unsigned int)v900;
                          lpModuleName = (LPCWSTR)(int)v1314;
                          LODWORD(v1314) = 0;
                          v902 = (char *)(v1338 + 4 * (v896 + (__int64)(v897 * DWORD2(v1437))));
                          v903 = (int)v1334 * v895;
                          v904 = 0;
                          v1338 = (SIZE_T)v902;
                          v905 = (char *)lpMem + 4 * (int)v1324 + 4 * v903;
                          v1347 = v905;
                          do
                          {
                            v906 = dwBytes;
                            v907 = (unsigned __int8 *)(v902 + 2);
                            lpMem = (LPVOID)v901;
                            v908 = v905 - v902;
                            v909 = (char *)v901;
                            do
                            {
                              if ( (unsigned __int8)((*v907 + *(v907 - 2) + 2 * (unsigned int)*(v907 - 1)) >> 2) != 0xFF )
                              {
                                v910 = (unsigned __int8)~((*v907 + *(v907 - 2) + 2 * (unsigned int)*(v907 - 1)) >> 2);
                                v911 = BYTE1(v1328);
                                v907[v908] -= ~((*v907 + *(v907 - 2) + 2 * (unsigned int)*(v907 - 1)) >> 2)
                                            * (v906 - v907[v908]);
                                v912 = v907[v908 - 1];
                                v913 = (unsigned __int64)(2155905153LL * v910 * (v911 - v912)) >> 32;
                                v914 = BYTE2(v1328);
                                v907[v908 - 1] = v912 + (v913 >> 7 < 0) + (v913 >> 7);
                                v915 = v907[v908 - 2];
                                v916 = (unsigned __int64)(2155905153LL * v910 * (v914 - v915)) >> 32;
                                v907[v908 - 2] = v915 + (v916 >> 7 < 0) + (v916 >> 7);
                                v917 = v907[v908 + 1];
                                v918 = v910 * (255 - v917);
                                v904 = v1314;
                                LOBYTE(v916) = v917 + v918 / 255;
                                v909 = (char *)lpMem;
                                v907[v908 + 1] = v916;
                              }
                              v907 += 4;
                              v886 = v904;
                              lpMem = --v909;
                            }
                            while ( v909 );
                            v902 = (char *)v1351 + v1338;
                            v763 = v1349-- == 1;
                            v1338 += (SIZE_T)v1351;
                            LODWORD(v1314) = v904;
                            v905 = (char *)v1347 + 4 * (_QWORD)lpModuleName;
                            v1347 = v905;
                          }
                          while ( !v763 );
                          v715 = (int)v1342;
                          v828 = v1315;
                        }
                        ((void (__fastcall *)(void *))off_1808D1378)(v1327);
                        if ( v1323 )
                          ((void (__fastcall *)(SIZE_T, LPVOID))off_1808D13B8)(Size, v1323);
LABEL_1145:
                        ((void (__fastcall *)(SIZE_T))off_1808D1370[0])(Size);
                        if ( v886 >= 0 )
                        {
                          v826 = v1332;
                          if ( v715 == 1 )
                            ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, int))off_1808D1340[0])(
                              m,
                              v1401.m128i_u32[0],
                              v1401.m128i_u32[1],
                              v828,
                              v1325,
                              v1332,
                              0,
                              0,
                              13369376);
                          else
                            ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, unsigned __int32, _DWORD, _DWORD))off_1808D1380[0])(
                              m,
                              (unsigned int)v1358,
                              DWORD1(v1358),
                              v828,
                              v1325,
                              v1332,
                              0,
                              0,
                              v828,
                              v1325,
                              v1329);
                          goto LABEL_1149;
                        }
                        goto LABEL_1029;
                      }
                      v893 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                    }
                    else
                    {
                      v893 = -5723992;
                    }
                    LODWORD(v1328) = v893;
                    LODWORD(dwBytes) = v893;
                    goto LABEL_1126;
                  }
                }
              }
              GetLastError();
LABEL_1029:
              v826 = v1332;
LABEL_1030:
              v835 = v1330;
              goto LABEL_1031;
            }
          }
          else
          {
            v716 = 0;
          }
          if ( v715 != 1 )
            goto LABEL_927;
          goto LABEL_925;
        }
        v1349 = 0LL;
        LODWORD(v1315) = 0;
        v1365 = 0LL;
        v1373 = 0LL;
        v610 = 0;
        v1327 = 0LL;
        Size = 0LL;
        v1356 = 0;
        v1335 = 0LL;
        v1361 = 0;
        memset(v1389, 0, sizeof(v1389));
        if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *, unsigned int *))off_1808D13E0[0])(
               8LL,
               &v1356,
               0LL,
               &v1361,
               v1313) )
        {
          v612 = MemoryAlloc(2LL * v1361);
          SP<unsigned long,SP_MEM<unsigned long>>::operator=(&Size, v612);
          if ( !SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&Size)
            || (v613 = MemoryAlloc(4LL * (v1356 + 1)),
                SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1335, v613),
                (v1339 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1335)) == 0) )
          {
            v610 = -2147024882;
LABEL_728:
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1335);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&Size);
            v619 = 0;
            if ( v610 < 0 )
              goto LABEL_783;
            v620 = 0;
            LODWORD(v1325) = 0;
            if ( (_DWORD)v1315 )
            {
              Ptr = (_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1349);
LABEL_731:
              v625 = v619;
              while ( *Ptr != *v622 )
              {
                ++v625;
                ++v622;
                if ( v625 >= 0x26 )
                {
                  ++v623;
                  ++Ptr;
                  if ( v623 >= v624 )
                    goto LABEL_737;
                  v622 = dword_1807D4A70;
                  goto LABEL_731;
                }
              }
              v620 = v625;
              LODWORD(v1325) = v625;
            }
LABEL_737:
            LODWORD(v1315) = v619;
            v626 = dword_1807D4A70[v620];
            memset(v1461, 0, sizeof(v1461));
            if ( ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64))off_1808D13E8[0])(v626, v1481, 85LL)
              && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *))off_1808D13D0[0])(v1481, 88LL, v1461) > 0 )
            {
              LODWORD(v1315) = (HIDWORD(v1461[0]) >> 27) & 1;
              v620 = v1325;
            }
            memset_0(v1391, 0, 0x90uLL);
            v627 = L"Segoe UI Light";
            v628 = 19LL;
            v629 = (const wchar_t **)&v1390;
            do
            {
              *v629 = v627;
              v630 = -1LL;
              do
                ++v630;
              while ( v627[v630] );
              ++v629;
              v627 += v630 + 1;
              --v628;
            }
            while ( v628 );
            v631 = 3LL * v620;
            v1347 = *(void **)&v1391[8 * *((unsigned __int8 *)&unk_1807D2D40 + v631) - 8];
            lpMem = *(LPVOID *)&v1391[8 * (unsigned __int8)byte_1807D2D41[v631] - 8];
            v1324 = *(unsigned __int16 **)&v1391[8 * (unsigned __int8)byte_1807D2D42[v631] - 8];
            v632 = (char *)MemoryAlloc(0x1C90uLL);
            Size = (SIZE_T)v632;
            if ( !v632 )
              goto LABEL_760;
            LODWORD(v1314) = -1;
            v633 = v632 + 7;
            v634 = -1;
            v635 = (unsigned __int8 *)&unk_1807D2DD2;
            v636 = 0;
            v637 = 0;
            v638 = 0;
            v639 = 914LL;
            do
            {
              v640 = *(v635 - 1) | (*(v635 - 2) << 8);
              v641 = v635[2] << 8;
              v642 = *v635;
              v635 += 8;
              v643 = *(v635 - 7) | ((v642 | (v640 << 8)) << 8);
              v644 = v638 ^ v643;
              v645 = *(v635 - 3) | ((*(v635 - 4) | ((*(v635 - 5) | v641) << 8)) << 8);
              v646 = v638 ^ v643 ^ v637 ^ v645 ^ 0xAC987321;
              v647 = v644 ^ (__ROR4__(v646, 22) + 4991 * __ROR4__(v646 + 1419157410, 27));
              v648 = v646 ^ (43881 * __ROR4__(v647 + 133239679, 9) - __ROR4__(v647, 30));
              v649 = v647 ^ (24670 * v648 - (v648 >> 13) - 123127970);
              v650 = v648 ^ (2033 * __ROR4__(v649 ^ 0xAB69, 26) - __ROR4__(v649, 30));
              v651 = v649 ^ (133239679 - (v650 ^ 0xAB69605E));
              v652 = v650 ^ (43881 * (v651 ^ 0x137F)) ^ __ROR4__(v651, 6);
              v653 = v651 ^ (__ROR4__(v652, 30) + 24670 * __ROR4__(v652 + 133239679, 15));
              v654 = v652 ^ (2033 * __ROR4__(v653 + 1419157410, 14) - __ROR4__(v653, 24));
              v655 = v653 ^ __ROR4__(v654, 10) ^ (4991 * __ROR4__(v654 ^ 0xAB69605E, 12));
              v656 = v654 ^ (v655 >> 10) ^ (43881 * (v655 ^ 0x7F1));
              v657 = v655 ^ (2033 * (__ROR4__(~v656, 5) + 24670));
              v658 = v657 ^ (((v656 ^ (v657 - 2033) ^ 0xAB69605E) >> 2)
                           + 4991 * __ROR4__(v656 ^ (v657 - 2033) ^ 0xAB6967AF, 30));
              v659 = v656 ^ (v657 - 2033) ^ 0xAB69605E ^ (__ROR4__(v658, 25) + 43881 * __ROR4__(v658 - 133239679, 6));
              v660 = v658 ^ (24670 * (v659 ^ 0x137F) + __ROR4__(v659, 9));
              v661 = v659 ^ (__ROR4__(v660, 25) + 2033 * __ROR4__(v660 ^ 0xAB69, 27));
              v662 = v660 ^ v661 ^ 0xAC987321;
              v663 = v661 ^ (4991 * __ROR4__(v662, 3) - 219010071);
              v664 = v662 ^ (24670 * __ROR4__(v663 - 133239679, 1) - __ROR4__(v663, 6));
              v665 = v663 ^ (__ROR4__(v664, 18) + 2033 * __ROR4__(v664 - 1419157410, 29));
              v666 = v664 ^ (4991 * __ROR4__(v665 - 1419157410, 17) - __ROR4__(v665, 14));
              v667 = v665 ^ (v666 >> 3) ^ (43881 * (v666 ^ 0x605E));
              v668 = __ROR4__(v667, 30);
              v637 = v634 ^ v667;
              v634 = v645;
              v638 = v636 ^ v666 ^ v668 ^ (24670
                                         * __ROR4__(v665 ^ (v666 >> 3) ^ (43881 * (v666 ^ 0x605E)) ^ 0x7F1137F, 28));
              v636 = v643;
              *(v633 - 4) = v638;
              *v633 = v637;
              *(v633 - 5) = __ROR4__(v638, 8);
              v633 += 8;
              *(v633 - 9) = __ROR4__(v637, 8);
              *(v633 - 14) = __ROR4__(v638, 16);
              *(v633 - 10) = __ROR4__(v637, 16);
              *(v633 - 15) = __ROR4__(v638, 24);
              *(v633 - 11) = __ROR4__(v637, 24);
              --v639;
            }
            while ( v639 );
            LOBYTE(v492) = (_BYTE)v1342;
            v608 = v1331;
            v669 = 0LL;
            v670 = 0LL;
            do
            {
              v671 = (__m128)_mm_loadu_si128((const __m128i *)(Size + v669));
              v669 += 16LL;
              v672 = _mm_xor_ps(v671, v670);
              v670 = v672;
            }
            while ( v669 < 0x1C90 );
            v673 = _mm_xor_ps(v672, (__m128)_mm_srli_si128((__m128i)v672, 8));
            v674 = _mm_xor_ps(v673, (__m128)_mm_srli_si128((__m128i)v673, 4));
            v675 = _mm_xor_ps(v674, (__m128)_mm_srli_si128((__m128i)v674, 2));
            if ( (unsigned __int8)_mm_cvtsi128_si32((__m128i)_mm_xor_ps(v675, (__m128)_mm_srli_si128((__m128i)v675, 1))) != 127LL )
            {
              v610 = -1073425151;
              MemoryFree((void *)Size);
              goto LABEL_783;
            }
            v1373 = 7312LL;
            v1365 = Size;
            v610 = 0;
            v676 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1365);
            v678 = v1325;
            v679 = (__int64 *)v1389;
            v680 = v676;
            v681 = 6LL;
            do
            {
              v682 = v677;
              do
              {
                if ( v678 == v682 )
                  *v679 = v680;
                v683 = -1LL;
                do
                  ++v683;
                while ( *(_BYTE *)(v680 + v683) != (_BYTE)v677 );
                ++v682;
                v680 += v683 + 1;
              }
              while ( v682 < 0x26 );
              ++v679;
              --v681;
            }
            while ( v681 );
            v684 = MemoryAlloc(0x18uLL);
            SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1327, v684);
            v685 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1327);
            lpModuleName = (LPCWSTR)v685;
            if ( v685 )
            {
              *(_OWORD *)v685 = 0LL;
              *(_QWORD *)(v685 + 16) = 0LL;
              v686 = 0LL;
              LODWORD(v1325) = 0;
              while ( 2 )
              {
                v687 = *((_WORD *)&v1319 + v686);
                v688 = 0;
                v689 = word_1807D2DB8;
                while ( v687 != *v689 )
                {
                  ++v688;
                  ++v689;
                  if ( v688 >= 6 )
                    goto LABEL_773;
                }
                v690 = -1LL;
                v691 = *((_QWORD *)v1389 + v688);
                Size = v691;
                do
                  ++v690;
                while ( *(_BYTE *)(v691 + v690) );
                v692 = ((__int64 (__fastcall *)(__int64, _QWORD, SIZE_T, _QWORD, _QWORD, _DWORD))off_1808D1400[0])(
                         65001LL,
                         0LL,
                         v691,
                         (unsigned int)(v690 + 1),
                         0LL,
                         0);
                LODWORD(v1314) = v692;
                if ( !v692 )
                {
                  v696 = GetLastError();
                  v610 = v696;
                  if ( v696 > 0 )
                    v610 = (unsigned __int16)v696 | 0x80070000;
                  if ( v610 >= 0 )
                    v610 = -2147467259;
                  goto LABEL_783;
                }
                v693 = MemoryAlloc(2LL * v692);
                *(_QWORD *)&lpModuleName[4 * (unsigned int)v1325] = v693;
                if ( !v693 )
                  goto LABEL_760;
                v694 = -1LL;
                do
                  ++v694;
                while ( *(_BYTE *)(Size + v694) );
                if ( !((unsigned int (__fastcall *)(__int64, _QWORD, SIZE_T, _QWORD, LPVOID, _DWORD))off_1808D1400[0])(
                        65001LL,
                        0LL,
                        Size,
                        (unsigned int)(v694 + 1),
                        v693,
                        v1314) )
                {
                  v695 = GetLastError();
                  v610 = v695;
                  if ( v695 > 0 )
                    v610 = (unsigned __int16)v695 | 0x80070000;
                  if ( v610 >= 0 )
                    v610 = -2147467259;
                  goto LABEL_783;
                }
LABEL_773:
                v686 = (unsigned int)(v1325 + 1);
                LODWORD(v1325) = v686;
                if ( (unsigned int)v686 < 3 )
                  continue;
                break;
              }
              v1338 = (SIZE_T)v1327;
              v1392 = v1315;
              v1327 = 0LL;
            }
            else
            {
LABEL_760:
              v610 = -2147024882;
            }
LABEL_783:
            lpModuleName = (LPCWSTR)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1327);
            if ( lpModuleName )
            {
              v698 = (void **)lpModuleName;
              v699 = 3LL;
              Size = 3LL;
              do
              {
                v700 = *v698;
                if ( *v698 )
                {
                  v701 = -1LL;
                  do
                    ++v701;
                  while ( *(_WORD *)&v700[2 * v701] != v697 );
                  for ( ii = 2 * v701 + 2; ii; --ii )
                    *v700++ = v697;
                  MemoryFree(*v698);
                  v699 = Size;
                  v697 = 0;
                }
                ++v698;
                Size = --v699;
              }
              while ( v699 );
            }
            if ( SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1365) )
            {
              v703 = (_BYTE *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1365);
              for ( jj = v1373; jj; --jj )
                *v703++ = v704;
            }
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1327);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1365);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1349);
            if ( v610 < 0 )
              goto LABEL_820;
            v706 = (void **)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1338);
            v1394 = *v706;
            v1395 = v706[1];
            v1396 = v706[2];
            v1386 = 0LL;
            LODWORD(v1386) = 16;
            if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1808D14A8[0])(
                    66LL,
                    0LL,
                    &v1386,
                    0LL) )
            {
              v707 = GetLastError();
              v610 = v707;
              if ( v707 > 0 )
                v610 = (unsigned __int16)v707 | 0x80070000;
              v1393 = 0;
              if ( v610 >= 0 )
                v610 = -2147467259;
              goto LABEL_820;
            }
            v1393 = BYTE4(v1386) & 1;
            if ( v608 == 1 )
            {
              LODWORD(v1329) = 42;
            }
            else
            {
              if ( v608 != 2 )
              {
                if ( v608 == 3 )
                {
                  LODWORD(v1329) = 225;
                  LODWORD(v1337) = 225;
                }
LABEL_809:
                LODWORD(v1339) = 96;
                memset_0(v1471, 0, 0xDCuLL);
                v1472 = 220;
                v610 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1808D1420[0])(0LL, 0xFFFFFFFFLL, v1471) )
                {
                  v708 = v1473;
                  LODWORD(v1321) = v1474;
                  LODWORD(v1334) = v1475;
                  if ( v1473 < 0x60u )
                    v708 = 96;
                  LODWORD(v1339) = v708;
                }
                v709 = v1324;
                if ( v608 == 1 )
                  v709 = (const WCHAR *)v1347;
                lpModuleName = v709;
                memset_0(v1462, 0, 0x5CuLL);
                v1349 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
                if ( v1349 )
                {
                  v718 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                           (unsigned int)v1329,
                           (unsigned int)v1339,
                           72LL);
                  v1462[4] = 400;
                  v1462[0] = -v718;
                  v1463 = 5;
                  StringCchCopyW((char *)v1464, 32LL, (char *)lpModuleName);
                  v719 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1462);
                  if ( v719 )
                  {
                    v1397 = (const WCHAR *)v719;
                  }
                  else
                  {
                    v610 = GetLastError();
                    v720 = v610 < 0;
                    if ( v610 > 0 )
                    {
                      v610 = (unsigned __int16)v610 | 0x80070000;
                      v720 = v610 < 0;
                    }
                    if ( !v720 )
                      v610 = -2147467259;
                  }
                  ((void (__fastcall *)(_QWORD, SIZE_T))off_1808D14A0[0])(0LL, v1349);
                }
                else
                {
                  v610 = GetLastError();
                  v710 = v610 < 0;
                  if ( v610 > 0 )
                  {
                    v610 = (unsigned __int16)v610 | 0x80070000;
                    v710 = v610 < 0;
                  }
                  if ( !v710 )
                    goto LABEL_819;
                }
                if ( v610 < 0 )
                  goto LABEL_820;
                v721 = v1324;
                if ( v608 == 1 )
                  v721 = (unsigned __int16 *)v1347;
                v1324 = v721;
                memset_0(v1465, 0, 0x5CuLL);
                v610 = 0;
                v722 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
                if ( !v722 )
                {
                  v723 = GetLastError();
                  v610 = v723;
                  if ( v723 > 0 )
                    v610 = (unsigned __int16)v723 | 0x80070000;
                  if ( v610 >= 0 )
                    v610 = -2147467259;
                  goto LABEL_820;
                }
                v724 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                         (unsigned int)v1337,
                         (unsigned int)v1339,
                         72LL);
                v1465[4] = 400;
                v1465[0] = -v724;
                v1466 = 5;
                StringCchCopyW((char *)v1467, 32LL, (char *)v1324);
                v725 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1465);
                if ( v725 )
                {
                  v1398 = (const WCHAR *)v725;
                }
                else
                {
                  v610 = GetLastError();
                  v726 = v610 < 0;
                  if ( v610 > 0 )
                  {
                    v610 = (unsigned __int16)v610 | 0x80070000;
                    v726 = v610 < 0;
                  }
                  if ( !v726 )
                    v610 = -2147467259;
                }
                ((void (__fastcall *)(_QWORD, __int64))off_1808D14A0[0])(0LL, v722);
                v727 = 0;
                if ( v610 < 0 )
                  goto LABEL_820;
                v728 = 0;
                if ( (_DWORD)v1331 != 1 )
                {
                  if ( (_DWORD)v1331 == 2 )
                  {
                    v727 = (int)v1321 / 4;
LABEL_865:
                    *((_QWORD *)&v1358 + 1) = __PAIR64__(v728, v727);
                    if ( (_DWORD)v1331 == 1 )
                    {
                      v729 = 150;
                      LODWORD(v1336) = 42;
                      v1320 = 150;
                      LODWORD(v1328) = 32;
                    }
                    else
                    {
                      v729 = 0;
                      if ( (unsigned int)(v1331 - 2) <= 1 )
                      {
                        LODWORD(v1336) = 0;
                        v1320 = 0;
                        LODWORD(v1328) = 0;
                      }
                    }
                    v730 = v727 - v729;
                    v731 = v1394;
                    v1402.m128i_i32[2] = v730;
                    v1401.m128i_i32[2] = v730;
                    lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, const WCHAR *))off_1808D13B8)(v1323, v1397);
                    LODWORD(v1314) = ((__int64 (__fastcall *)(LPVOID, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                                       v1323,
                                       v731,
                                       0xFFFFFFFFLL,
                                       &v1401,
                                       3152,
                                       0LL);
                    v610 = (_DWORD)v1314 == 0 ? 0x80004005 : 0;
                    if ( lpModuleName )
                      ((void (__fastcall *)(LPVOID, LPCWSTR))off_1808D13B8)(v1323, lpModuleName);
                    if ( !(_DWORD)v1314 )
                      goto LABEL_820;
                    v732 = v1395;
                    lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, const WCHAR *))off_1808D13B8)(v1323, v1398);
                    LODWORD(v1314) = ((__int64 (__fastcall *)(LPVOID, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                                       v1323,
                                       v732,
                                       0xFFFFFFFFLL,
                                       &v1402,
                                       3152,
                                       0LL);
                    v610 = (_DWORD)v1314 == 0 ? 0x80004005 : 0;
                    if ( lpModuleName )
                      ((void (__fastcall *)(LPVOID, LPCWSTR))off_1808D13B8)(v1323, lpModuleName);
                    if ( !(_DWORD)v1314 )
                      goto LABEL_820;
                    v733 = v1331;
                    if ( (unsigned int)(v1331 - 2) <= 1 )
                    {
                      v730 = v1402.m128i_i32[2];
                      if ( v1401.m128i_i32[2] > v1402.m128i_i32[2] )
                        v730 = v1401.m128i_i32[2];
                    }
                    if ( v1392 )
                    {
                      off_1808D1490(
                        (CToastCenterExperienceManager *)&v1401,
                        (struct CSingleViewShellExperience *)(unsigned int)(v730 - v1401.m128i_i32[2]));
                      v734 = (unsigned int)(v730 - v1402.m128i_i32[2]);
                    }
                    else
                    {
                      off_1808D1490((CToastCenterExperienceManager *)&v1401, (struct CSingleViewShellExperience *)v1320);
                      v734 = v1320;
                    }
                    ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1808D1490)(
                      &v1402,
                      v734,
                      (unsigned int)((_DWORD)v1328 + v1401.m128i_i32[3]));
                    if ( (unsigned int)(v733 - 2) <= 1 )
                    {
                      *((_QWORD *)&v1358 + 1) = __PAIR64__(v1402.m128i_u32[3], v730);
                      v1400 = -5723992;
                    }
                    else if ( v733 == 1 )
                    {
                      v1400 = 0xFFFFFF;
                      memset_0(v1468, 0, 0x5CuLL);
                      v610 = 0;
                      lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(
                                                0LL,
                                                0LL,
                                                1027LL);
                      if ( lpModuleName )
                      {
                        v736 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808D13F8)(11LL, (unsigned int)v1339);
                        v1468[4] = 400;
                        v1468[0] = -v736;
                        v1469 = 5;
                        StringCchCopyW((char *)v1470, 32LL, (char *)lpMem);
                        v737 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1468);
                        if ( v737 )
                        {
                          v1399 = v737;
                        }
                        else
                        {
                          v610 = GetLastError();
                          v738 = v610 < 0;
                          if ( v610 > 0 )
                          {
                            v610 = (unsigned __int16)v610 | 0x80070000;
                            v738 = v610 < 0;
                          }
                          if ( !v738 )
                            v610 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808D14A0[0])(0LL, lpModuleName);
                      }
                      else
                      {
                        v610 = GetLastError();
                        v735 = v610 < 0;
                        if ( v610 > 0 )
                        {
                          v610 = (unsigned __int16)v610 | 0x80070000;
                          v735 = v610 < 0;
                        }
                        if ( !v735 )
                        {
LABEL_819:
                          v610 = -2147467259;
LABEL_820:
                          ((void (__fastcall *)(_QWORD, LPVOID))off_1808D14A0[0])(0LL, v1323);
                          goto LABEL_821;
                        }
                      }
                      if ( v610 < 0 )
                        goto LABEL_820;
                      v739 = v1396;
                      v1405 = v730;
                      v740 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1808D13B8)(v1323, v1399);
                      v741 = ((__int64 (__fastcall *)(LPVOID, void *, __int64, unsigned int *, int, _QWORD))off_1808D1418)(
                               v1323,
                               v739,
                               0xFFFFFFFFLL,
                               &v1403,
                               1120,
                               0LL);
                      LODWORD(v1314) = v741;
                      v610 = v741 == 0 ? 0x80004005 : 0;
                      if ( v740 )
                      {
                        ((void (__fastcall *)(LPVOID, __int64))off_1808D13B8)(v1323, v740);
                        v741 = v1314;
                      }
                      if ( !v741 )
                        goto LABEL_820;
                      v742 = v1339;
                      v743 = v1405 + 24;
                      if ( (int)(v1405 + 24) < 90 )
                        v743 = 90;
                      v1405 = v743;
                      v1406 = 32;
                      v1403 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                v1403,
                                (unsigned int)v1339,
                                96LL);
                      v1404 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1404, v742, 96LL);
                      v1405 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1405, v742, 96LL);
                      v1406 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(v1406, v742, 96LL);
                      if ( v1392 )
                      {
                        v744 = v1401.m128i_u32[0];
                        if ( v1401.m128i_i32[0] >= v1402.m128i_i32[0] )
                          v744 = v1402.m128i_u32[0];
                      }
                      else
                      {
                        v745 = v1401.m128i_i32[2];
                        if ( v1401.m128i_i32[2] <= v1402.m128i_i32[2] )
                          v745 = v1402.m128i_i32[2];
                        v744 = v1403 + v745 - v1405;
                      }
                      off_1808D1490((CToastCenterExperienceManager *)&v1403, (struct CSingleViewShellExperience *)v744);
                      v733 = v1331;
                    }
                    v746 = DWORD2(v1358);
                    LODWORD(v1314) = v1392;
                    LODWORD(v1315) = HIDWORD(v1358);
                    v747 = v733 - 1;
                    if ( !v747 )
                    {
                      *(_QWORD *)&v1358 = 0LL;
                      goto LABEL_916;
                    }
                    v748 = v747 - 1;
                    if ( v748 )
                    {
                      if ( v748 != 1 )
                        goto LABEL_916;
                      v1460 = 0LL;
                      v1458 = 0LL;
                      v1459 = 0LL;
                      v749 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1458) = 40;
                      if ( !(unsigned int)off_1808D1448(v749, (struct CSingleViewShellExperience *)&v1458) )
                        goto LABEL_916;
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1459 + 4));
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1459 + 12));
                      v750 = 50 * (HIDWORD(v1459) - v746) / 100;
                      v751 = 50 * (v1460 - v1315);
                    }
                    else
                    {
                      v1445 = 0LL;
                      v1443 = 0LL;
                      v1444 = 0LL;
                      v752 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1443) = 40;
                      if ( !(unsigned int)off_1808D1448(v752, (struct CSingleViewShellExperience *)&v1443) )
                        goto LABEL_916;
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1444 + 4));
                      off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1444 + 12));
                      if ( (_DWORD)v1314 )
                        v750 = DWORD1(v1444) + 5 * HIDWORD(v1444) / 100;
                      else
                        v750 = 95 * (HIDWORD(v1444) - v746) / 100;
                      v751 = 95 * (v1445 - v1315);
                    }
                    LODWORD(v1358) = v750;
                    DWORD1(v1358) = v751 / 100;
LABEL_916:
                    v610 = 0;
                    goto LABEL_820;
                  }
                  if ( (_DWORD)v1331 != 3 )
                    goto LABEL_865;
                }
                v727 = (int)v1321;
                v728 = (unsigned int)v1334;
                goto LABEL_865;
              }
              LODWORD(v1329) = 15;
            }
            LODWORD(v1337) = 11;
            goto LABEL_809;
          }
          v1325 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&Size);
          if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, SIZE_T, unsigned int *))off_1808D13E0[0])(
                 8LL,
                 &v1356,
                 v1325,
                 &v1361) )
          {
            if ( v1356 )
            {
              v614 = v1325;
              v615 = 0;
              v616 = (_DWORD *)v1339;
              do
              {
                v617 = ((__int64 (__fastcall *)(SIZE_T, _QWORD))off_1808D13F0)(v614, 0LL);
                v618 = -1LL;
                *v616 = v617;
                do
                  ++v618;
                while ( *(_WORD *)(v1325 + 2 * v618) );
                ++v616;
                v614 = v1325 + 2 * v618 + 2;
                ++v615;
                v1325 = v614;
              }
              while ( v615 < v1356 );
              v1339 = (SIZE_T)v616;
            }
            *(_DWORD *)v1339 = 1033;
            v1349 = v1335;
            v1335 = 0LL;
            LODWORD(v1315) = v1356 + 1;
            goto LABEL_728;
          }
        }
        v610 = GetLastError();
        v611 = v610 < 0;
        if ( v610 > 0 )
        {
          v610 = (unsigned __int16)v610 | 0x80070000;
          v611 = v610 < 0;
        }
        if ( !v611 )
          v610 = -2147467259;
        goto LABEL_728;
      }
      v550 = dword_1808DDD3C;
LABEL_706:
      dword_1808DDD3C = v550 + 1;
      goto LABEL_707;
    }
    v493 = dword_1808DDD3C;
LABEL_659:
    dword_1808DDD3C = v493 + 1;
    goto LABEL_660;
  }
LABEL_1227:
  v81 = v1369;
  v1376 = v1366;
  v1366 = 0LL;
LABEL_100:
  while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
    ;
  v82 = dword_1808DDD3C;
  if ( dword_1808DDD3C > 0 )
  {
    --dword_1808DDD3C;
    if ( v82 == 1 )
    {
      v83 = 4LL;
      v84 = (HMODULE *)&unk_1808DA540;
      do
      {
        if ( *v84 )
          FreeLibrary(*v84);
        v84 += 3;
        --v83;
      }
      while ( v83 );
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1808DDD40, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1366);
  if ( v80 < 0 )
  {
    switch ( v80 )
    {
      case -805306316:
        v1350 = -1073418222;
LABEL_1576:
        v1312 = v1360;
        goto LABEL_1580;
      case -805306139:
      case -1073425151:
        v1350 = -1073418201;
        goto LABEL_1576;
      case -805306306:
        v1350 = -1073418200;
        goto LABEL_1576;
    }
    v1350 = v80;
    if ( v80 != -2147024774 )
      goto LABEL_1576;
LABEL_1575:
    v1350 = -1073418210;
    goto LABEL_1576;
  }
  if ( v81 != 4 )
    goto LABEL_1575;
  v1312 = *(_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1376);
LABEL_1580:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1376);
  if ( v1350 < 0 )
    return !IsActiveSessionCountLimited();
  else
    return v1312 != 0;
}
