/*
 * XREFs of ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275CFC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282C70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180283760 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805B1248 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1800A726C (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800E67E8 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800E6810 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800E6844 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x180190928 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1801918B0 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1801A7B98 (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1801E45D4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ??4?$SP@EV?$SP_HLOCAL@E@@@@QEAAAEAV0@V?$CTypeWrapper@PEAE@@@Z @ 0x1802CA074 (--4-$SP@EV-$SP_HLOCAL@E@@@@QEAAAEAV0@V-$CTypeWrapper@PEAE@@@Z.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1802CC614 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NXZ @ 0x180450E34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NXZ.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x18065D9FC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1806A4AF4 (wcscmp_0.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char winrt::Windows::Internal::Shell::implementation::DashboardManager::ShouldDeferWidgetsInitialization(void)
{
  int v1; // r15d
  int v2; // eax
  _BYTE *v3; // rbx
  int v4; // r8d
  _BYTE *v5; // r15
  int v6; // ecx
  unsigned __int8 *v7; // r12
  unsigned int v8; // r11d
  __int64 v9; // r14
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
  int v44; // r14d
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
  void *v63; // rsi
  unsigned int v64; // r15d
  __int64 v65; // rax
  const WCHAR *v66; // rdx
  _BYTE *v67; // rbx
  HMODULE *v68; // rdi
  __int64 v69; // rcx
  char *v70; // rcx
  unsigned int v71; // r12d
  unsigned int v72; // edi
  __int64 v73; // rcx
  __int64 v74; // rax
  const CHAR *v75; // rdx
  __int64 (__fastcall *ProcAddress)(); // rdx
  int v77; // eax
  HANDLE ProcessHeap; // rax
  int v79; // esi
  signed int LastError; // ebx
  __int64 v81; // r14
  wchar_t *v82; // rax
  bool v83; // sf
  wchar_t *v84; // rdi
  __int64 i; // r9
  wchar_t *v86; // r8
  signed int v87; // eax
  __int64 (__fastcall *v88)(); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v90; // r14
  wchar_t *v91; // rax
  bool v92; // sf
  wchar_t *v93; // rdi
  __int64 j; // r9
  wchar_t *v95; // r8
  signed int v96; // eax
  HANDLE CurrentProcess; // rax
  bool v98; // sf
  int v99; // edi
  HLOCAL v100; // rax
  void *v101; // r11
  int v102; // r12d
  int v103; // esi
  _QWORD *v104; // rbx
  HANDLE v105; // rax
  WCHAR *v106; // rax
  WCHAR *v107; // rsi
  HANDLE v108; // rax
  int v109; // eax
  int v110; // r11d
  int v111; // eax
  unsigned int v112; // r10d
  int v113; // r11d
  int v114; // eax
  int v115; // r9d
  unsigned int v116; // r10d
  int v117; // eax
  unsigned int v118; // r10d
  int v119; // eax
  size_t v120; // rdx
  int v121; // r9d
  int v122; // eax
  unsigned int v123; // r10d
  int v124; // eax
  unsigned int v125; // r10d
  int v126; // r9d
  int v127; // eax
  int v128; // r9d
  unsigned int v129; // edi
  HANDLE v130; // rax
  void *v131; // rax
  int v132; // r11d
  int v133; // r9d
  int v134; // r10d
  _DWORD *v135; // rax
  int v136; // eax
  int v137; // r11d
  int *v138; // rax
  int v139; // edi
  int v140; // edx
  unsigned int v141; // r11d
  size_t v142; // r10
  unsigned int v143; // edi
  int v144; // eax
  __int64 v145; // r10
  int v146; // r11d
  int *v147; // r9
  int v148; // edx
  unsigned __int64 v149; // r9
  unsigned int v150; // r11d
  unsigned int *v151; // r9
  size_t v152; // rdx
  int *v153; // rdi
  int v154; // edx
  unsigned int v155; // r11d
  SIZE_T *v156; // rax
  unsigned int v157; // r11d
  int v158; // eax
  int *v159; // rdi
  int v160; // edx
  int v161; // r10d
  __int64 v162; // r9
  void *v163; // rcx
  int v164; // eax
  __int64 v165; // r10
  int v166; // r11d
  int *v167; // rdi
  int v168; // edx
  unsigned int v169; // r11d
  int *v170; // rax
  unsigned int v171; // r10d
  int *v172; // rdi
  int v173; // edx
  unsigned int v174; // r11d
  unsigned int *v175; // rax
  unsigned int v176; // ecx
  unsigned int v177; // edi
  int v178; // r9d
  unsigned int v179; // r10d
  unsigned int v180; // r10d
  unsigned int v181; // r10d
  unsigned int v182; // r10d
  unsigned int v183; // r10d
  int v184; // r12d
  unsigned int v185; // ecx
  unsigned int v186; // edi
  HANDLE v187; // rax
  char *v188; // rax
  char *v189; // rdi
  unsigned int v190; // r9d
  void *v191; // rcx
  HANDLE v192; // rax
  unsigned __int8 *v193; // r12
  unsigned __int64 v194; // rdi
  char *v195; // r8
  unsigned __int64 v196; // rax
  unsigned __int8 v197; // cl
  unsigned int v198; // r11d
  unsigned __int8 *v199; // rdx
  unsigned int v200; // r10d
  unsigned int v201; // edi
  int v202; // r8d
  char v203; // r9
  int v204; // eax
  int v205; // ecx
  unsigned int v206; // r14d
  unsigned int v207; // r11d
  int v208; // r15d
  unsigned int v209; // r9d
  int v210; // eax
  unsigned int v211; // r8d
  char v212; // cl
  unsigned __int8 *v213; // rcx
  int v214; // edi
  int v215; // r15d
  int v216; // r12d
  unsigned __int64 v217; // rsi
  int v218; // r9d
  int v219; // r8d
  int v220; // r11d
  int v221; // r10d
  int v222; // r11d
  int v223; // r10d
  int v224; // r11d
  unsigned int v225; // r10d
  int v226; // r11d
  int v227; // r10d
  int v228; // r11d
  int v229; // r10d
  int v230; // r11d
  int v231; // r10d
  unsigned int v232; // r11d
  unsigned int v233; // r10d
  int v234; // r11d
  int v235; // r10d
  int v236; // r11d
  int v237; // r10d
  int v238; // r11d
  int v239; // r10d
  int v240; // r11d
  int v241; // r10d
  unsigned int v242; // eax
  int v243; // r10d
  unsigned int v244; // r11d
  _BYTE *v245; // r15
  HANDLE v246; // rax
  LPVOID v247; // rdi
  HANDLE v248; // rax
  void *v249; // rax
  HANDLE v250; // rax
  LPVOID v251; // rax
  _OWORD *v252; // rcx
  HANDLE v253; // rax
  LPVOID v254; // rax
  int v255; // r12d
  HANDLE v256; // rax
  HANDLE v257; // rax
  HANDLE v258; // rax
  HANDLE v259; // rax
  HANDLE v260; // rax
  int v261; // edx
  int v262; // r11d
  int v263; // r12d
  int v264; // r11d
  unsigned int v265; // edi
  HANDLE v266; // rax
  WCHAR *v267; // rax
  int v268; // eax
  WCHAR *v269; // rcx
  void *v270; // rcx
  int v271; // eax
  WCHAR *v272; // r9
  void *v273; // rcx
  int v274; // eax
  WCHAR *v275; // r9
  HANDLE v276; // rax
  int v277; // eax
  void *v278; // r9
  unsigned __int8 *v279; // r10
  unsigned int v280; // ecx
  size_t v281; // rax
  HANDLE v282; // rax
  HANDLE v283; // rax
  HANDLE v284; // rax
  HANDLE v285; // rax
  HANDLE v286; // rax
  void *v287; // rdi
  HANDLE v288; // rax
  HANDLE v289; // rax
  _QWORD *v290; // rdi
  HANDLE v291; // rax
  HANDLE v292; // rax
  HANDLE v293; // rax
  HANDLE v294; // rax
  HANDLE v295; // rax
  void *v296; // r9
  unsigned __int8 *v297; // r10
  unsigned int *v298; // rcx
  unsigned int v299; // edi
  int v300; // eax
  int v301; // r10d
  int v302; // edi
  void *v303; // r9
  _DWORD *v304; // rcx
  unsigned int v305; // r10d
  int v306; // edi
  void *v307; // r9
  int v308; // ecx
  void *v309; // r9
  unsigned int v310; // r11d
  unsigned int v311; // eax
  unsigned int v312; // edi
  HANDLE v313; // rax
  _DWORD *v314; // rax
  _DWORD *v315; // rdi
  signed int v316; // eax
  FARPROC v317; // rax
  int v318; // eax
  unsigned int v319; // r11d
  unsigned int *v320; // r10
  int v321; // r12d
  unsigned int *v322; // rcx
  unsigned int v323; // r9d
  int v324; // r11d
  int v325; // r9d
  int v326; // r11d
  unsigned int v327; // edi
  int v328; // r11d
  int v329; // r11d
  unsigned int v330; // r10d
  int v331; // r11d
  int v332; // r9d
  int v333; // r10d
  int v334; // r11d
  HANDLE v335; // rax
  _QWORD *v336; // rcx
  unsigned int *v337; // rax
  HANDLE v338; // rax
  void *v339; // rcx
  _DWORD *v340; // rdi
  HANDLE v341; // rax
  void *v342; // rcx
  HANDLE v343; // rax
  void *v344; // rcx
  _QWORD *v345; // rax
  HANDLE v346; // rax
  HANDLE v347; // rax
  HANDLE v348; // rax
  HANDLE v349; // rax
  HANDLE v350; // rax
  HANDLE v351; // rax
  HANDLE v352; // rax
  HANDLE v353; // rax
  SIZE_T v354; // r12
  void *v355; // rax
  _DWORD *v356; // r9
  unsigned __int8 *v357; // r8
  unsigned __int8 v358; // dl
  int v359; // r10d
  char v360; // cl
  unsigned __int8 *v361; // rax
  void *v362; // r11
  int v363; // r12d
  int v364; // ecx
  unsigned int v365; // r12d
  unsigned int v366; // r15d
  unsigned int v367; // r9d
  char v368; // cl
  WCHAR *v369; // rcx
  int v370; // ebx
  unsigned int v371; // r8d
  unsigned int v372; // r14d
  int v373; // edx
  int v374; // r11d
  size_t v375; // rsi
  unsigned __int8 *v376; // rcx
  int v377; // r10d
  int v378; // r12d
  int v379; // r9d
  unsigned int v380; // edi
  int v381; // r12d
  unsigned int v382; // edi
  int v383; // r12d
  int v384; // edi
  unsigned int v385; // r12d
  int v386; // edi
  int v387; // r12d
  int v388; // edi
  unsigned int v389; // r12d
  int v390; // edi
  int v391; // r12d
  unsigned int v392; // r14d
  int v393; // r12d
  int v394; // r14d
  int v395; // r12d
  int v396; // r14d
  int v397; // r12d
  int v398; // r14d
  int v399; // r12d
  int v400; // r14d
  unsigned int v401; // r12d
  int v402; // r14d
  int v403; // ecx
  int v404; // eax
  WCHAR *v405; // rdx
  size_t m; // rax
  int v407; // r12d
  unsigned __int16 *v408; // r9
  void *v409; // r10
  int v410; // eax
  unsigned __int16 *v411; // r9
  void *v412; // r10
  unsigned __int8 *v413; // rdx
  void *v414; // r8
  unsigned __int16 *v415; // r9
  void *v416; // r10
  int v417; // eax
  _QWORD *v418; // r11
  unsigned __int16 *v419; // r9
  void *v420; // r10
  _QWORD *v421; // r11
  unsigned __int16 *v422; // r9
  void *v423; // r10
  unsigned __int64 v424; // rdi
  unsigned __int64 v425; // r11
  int *v426; // r11
  int v427; // edx
  unsigned __int64 v428; // r11
  void *v429; // r9
  void *v430; // r10
  unsigned __int64 v431; // rcx
  unsigned int v432; // ecx
  HANDLE v433; // rax
  void *v434; // rdi
  int v435; // edi
  int v436; // r10d
  int *v437; // r11
  int *v438; // r12
  _DWORD *v439; // rcx
  int v440; // edi
  unsigned int v441; // r10d
  int v442; // edi
  _DWORD *v443; // r11
  _DWORD *v444; // rax
  _DWORD *v445; // rcx
  int v446; // edi
  unsigned int v447; // r10d
  int v448; // edi
  int v449; // r10d
  _DWORD *v450; // r11
  _DWORD *v451; // rax
  void *v452; // rcx
  int v453; // edi
  unsigned int v454; // r10d
  unsigned int v455; // edi
  void *v456; // r11
  void *v457; // rax
  _DWORD *v458; // rcx
  int v459; // edi
  unsigned int v460; // r10d
  int v461; // edi
  __int64 v462; // r10
  _DWORD *v463; // r11
  _DWORD *v464; // rax
  _DWORD *v465; // rcx
  int v466; // edi
  int v467; // eax
  unsigned int v468; // r10d
  _DWORD *v469; // rdi
  HANDLE v470; // rax
  HANDLE v471; // rax
  HANDLE v472; // rax
  HANDLE v473; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v475; // rax
  unsigned int v476; // esi
  int v477; // eax
  char *v478; // rax
  int v479; // r12d
  _BYTE *v480; // r14
  unsigned int v481; // r15d
  unsigned __int8 *v482; // rsi
  unsigned int v483; // r11d
  __int64 v484; // rcx
  int v485; // ebx
  int v486; // r10d
  int v487; // r9d
  int v488; // eax
  int v489; // r10d
  int v490; // r11d
  int v491; // r9d
  unsigned int v492; // r8d
  int v493; // r11d
  unsigned int v494; // r8d
  int v495; // r11d
  int v496; // r8d
  unsigned int v497; // r11d
  int v498; // r8d
  int v499; // r11d
  int v500; // r8d
  unsigned int v501; // r11d
  int v502; // r8d
  int v503; // r11d
  unsigned int v504; // r15d
  int v505; // r11d
  int v506; // r15d
  int v507; // r11d
  int v508; // r15d
  unsigned int v509; // edi
  int v510; // r15d
  int v511; // edi
  int v512; // r15d
  unsigned int v513; // edi
  int v514; // r15d
  int v515; // r11d
  int v516; // eax
  unsigned __int64 v517; // rax
  WCHAR *v518; // rbx
  char v519; // cl
  HMODULE *v520; // rdi
  __int64 v521; // rbx
  __int64 v522; // rdx
  __int64 (__fastcall **v523)(); // rax
  __int64 (__fastcall **v524)(); // rcx
  __int128 v525; // xmm1
  __int128 v526; // xmm0
  __int128 v527; // xmm1
  __int128 v528; // xmm0
  __int128 v529; // xmm1
  __int128 v530; // xmm0
  __int128 v531; // xmm1
  __int128 v532; // xmm1
  __int128 v533; // xmm0
  __int128 v534; // xmm1
  __int128 v535; // xmm0
  __int128 v536; // xmm1
  __int128 v537; // xmm0
  const WCHAR *v538; // rdx
  __int64 v539; // rax
  WCHAR *v540; // rbx
  int v541; // edi
  __int64 v542; // rcx
  unsigned __int64 v543; // rcx
  unsigned int v544; // eax
  unsigned int v545; // ecx
  __int64 v546; // r8
  const CHAR *v547; // rdx
  __int64 v548; // rax
  __int64 (__fastcall *v549)(); // rax
  HANDLE v550; // rax
  int v551; // eax
  char *v552; // rax
  int v553; // r12d
  _BYTE *v554; // r15
  unsigned int v555; // r14d
  unsigned __int8 *v556; // rsi
  unsigned int v557; // r11d
  __int64 v558; // rcx
  int v559; // ebx
  int v560; // r10d
  int v561; // r9d
  int v562; // eax
  int v563; // r10d
  int v564; // r11d
  int v565; // r9d
  unsigned int v566; // r8d
  int v567; // r11d
  unsigned int v568; // r8d
  int v569; // r11d
  int v570; // r8d
  unsigned int v571; // r11d
  int v572; // r8d
  int v573; // r11d
  int v574; // r8d
  unsigned int v575; // r11d
  int v576; // r8d
  int v577; // r11d
  unsigned int v578; // r14d
  int v579; // r11d
  int v580; // r14d
  int v581; // r11d
  int v582; // r14d
  unsigned int v583; // edi
  int v584; // r14d
  int v585; // edi
  int v586; // r14d
  unsigned int v587; // edi
  int v588; // r14d
  int v589; // r11d
  int v590; // eax
  unsigned __int64 v591; // rax
  WCHAR *v592; // rbx
  char v593; // cl
  HMODULE *v594; // rdi
  __int64 v595; // rbx
  __int64 v596; // rdx
  __int64 (__fastcall **v597)(); // rax
  __int64 (__fastcall **v598)(); // rcx
  __int128 v599; // xmm1
  __int128 v600; // xmm0
  __int128 v601; // xmm1
  __int128 v602; // xmm0
  __int128 v603; // xmm1
  __int128 v604; // xmm0
  __int128 v605; // xmm1
  __int128 v606; // xmm1
  __int128 v607; // xmm0
  __int128 v608; // xmm1
  __int128 v609; // xmm0
  __int128 v610; // xmm1
  __int128 v611; // xmm0
  const WCHAR *v612; // rdx
  __int64 v613; // rax
  WCHAR *v614; // rbx
  int v615; // edi
  __int64 v616; // rcx
  unsigned __int64 v617; // rcx
  int v618; // eax
  unsigned int v619; // ecx
  __int64 v620; // r8
  const CHAR *v621; // rdx
  __int64 v622; // rax
  __int64 (__fastcall *v623)(); // rax
  HANDLE v624; // rax
  char *v625; // rbx
  signed int v626; // eax
  signed int v627; // r13d
  unsigned int v628; // edi
  bool v629; // sf
  LPVOID v630; // rax
  LPVOID v631; // rax
  _DWORD *v632; // rdi
  unsigned int v633; // r13d
  unsigned int v634; // r8d
  __int64 v635; // rdi
  unsigned int v636; // ecx
  int *v637; // rdx
  bool v638; // sf
  _DWORD *v639; // rax
  char *v640; // rbx
  _DWORD *v641; // r15
  unsigned int jj; // r14d
  __int64 v643; // rax
  const wchar_t *v644; // rcx
  __int64 v645; // r8
  const wchar_t **v646; // rdx
  __int64 v647; // rax
  __int64 v648; // rcx
  char *v649; // rax
  _BYTE *v650; // r14
  int v651; // r11d
  unsigned __int8 *v652; // r15
  int v653; // eax
  unsigned int v654; // r13d
  unsigned int v655; // ebx
  __int64 v656; // rsi
  int v657; // r10d
  int v658; // r9d
  int v659; // ecx
  int v660; // r10d
  int v661; // ebx
  int v662; // r9d
  unsigned int v663; // r8d
  int v664; // ebx
  unsigned int v665; // r8d
  int v666; // ebx
  int v667; // r8d
  unsigned int v668; // ebx
  int v669; // r8d
  int v670; // ebx
  int v671; // r8d
  unsigned int v672; // ebx
  int v673; // edx
  int v674; // ebx
  unsigned int v675; // r13d
  int v676; // ebx
  int v677; // r13d
  int v678; // ebx
  int v679; // r13d
  unsigned int v680; // edi
  int v681; // r13d
  int v682; // edi
  int v683; // r13d
  unsigned int v684; // edi
  int v685; // r13d
  int v686; // ebx
  int v687; // ecx
  _BYTE *v688; // r11
  unsigned __int64 v689; // rcx
  char v690; // al
  int v691; // r10d
  _QWORD *v692; // r8
  __int64 v693; // r9
  unsigned int kk; // edx
  __int64 v695; // rcx
  LPVOID v696; // rax
  void **v697; // rbx
  unsigned __int64 v698; // rax
  __int16 *v699; // rcx
  unsigned int v700; // r8d
  void **v701; // rdx
  __int16 v702; // r9
  __int16 *v703; // rcx
  __int64 v704; // rax
  __int64 v705; // rax
  __int64 v706; // r9
  int v707; // eax
  LPVOID v708; // rax
  __int64 v709; // r9
  void **v710; // rax
  signed int v711; // eax
  signed int v712; // eax
  __int64 v713; // rcx
  __int64 v714; // rcx
  unsigned __int16 *v715; // rdi
  void **v716; // rax
  void **v717; // rax
  void **v718; // rax
  signed int v719; // eax
  int v720; // r13d
  unsigned int v721; // edi
  unsigned __int16 *v722; // rax
  bool v723; // sf
  int v724; // eax
  __int64 v725; // rax
  HMODULE *v726; // rbx
  __int64 v727; // rdx
  __int64 (__fastcall **v728)(); // rax
  __int64 (__fastcall **v729)(); // rcx
  __int128 v730; // xmm1
  __int128 v731; // xmm0
  __int128 v732; // xmm1
  __int128 v733; // xmm0
  __int128 v734; // xmm1
  __int128 v735; // xmm0
  __int128 v736; // xmm1
  __int128 v737; // xmm1
  __int128 v738; // xmm0
  __int128 v739; // xmm1
  __int128 v740; // xmm0
  __int128 v741; // xmm1
  __int128 v742; // xmm0
  unsigned int v743; // edi
  int v744; // esi
  int v745; // ebx
  __int64 v746; // rax
  int v747; // eax
  __int64 v748; // rax
  bool v749; // sf
  unsigned __int16 *v750; // rax
  signed int v751; // eax
  int v752; // eax
  __int64 v753; // rax
  signed int v754; // eax
  int v755; // ecx
  __int64 v756; // r8
  int v757; // eax
  void *v758; // rdi
  int v759; // edi
  void *v760; // rdi
  int v761; // edi
  int v762; // r13d
  __int32 v763; // edi
  __int64 v764; // rdx
  bool v765; // sf
  int v766; // eax
  __int64 v767; // rax
  bool v768; // sf
  void *v769; // rdi
  int v770; // edi
  int v771; // eax
  unsigned __int64 v772; // rdx
  __int32 v773; // edx
  int v774; // edi
  int v775; // r13d
  int v776; // r13d
  CToastCenterExperienceManager *v777; // rax
  int v778; // edx
  int v779; // ecx
  CToastCenterExperienceManager *v780; // rax
  int v781; // eax
  void *v782; // rdi
  __int64 v783; // rax
  CToastCenterExperienceManager *v784; // rbx
  signed int v785; // edi
  bool v786; // sf
  bool v787; // zf
  SIZE_T v788; // rcx
  __int64 v789; // rax
  __int64 (__fastcall *v790)(); // rdi
  __int64 v791; // rax
  int v792; // eax
  __int32 v793; // r10d
  __int32 v794; // r8d
  __int32 v795; // r9d
  __int32 v796; // edx
  int v797; // ecx
  int v798; // eax
  int v799; // r14d
  unsigned __int16 *v800; // rdx
  unsigned __int16 *v801; // rax
  __int64 v802; // rbx
  signed int v803; // r11d
  __int64 v804; // rsi
  signed __int64 v805; // r10
  unsigned __int8 *v806; // r9
  int v807; // r8d
  int v808; // r8d
  int v809; // edi
  int v810; // edx
  int v811; // edi
  int v812; // edx
  int v813; // edi
  int v814; // ecx
  void *v815; // rdi
  __int64 v816; // rax
  CToastCenterExperienceManager *v817; // rbx
  signed int v818; // edi
  bool v819; // sf
  SIZE_T v820; // rcx
  __int64 v821; // rax
  __int64 (__fastcall *v822)(); // rdi
  __int64 v823; // rax
  unsigned int v824; // eax
  __int32 v825; // r10d
  __int32 v826; // r9d
  __int32 v827; // r8d
  __int32 v828; // edx
  int v829; // esi
  int v830; // r11d
  unsigned __int16 *v831; // rdx
  unsigned __int16 *v832; // rax
  __int64 v833; // r14
  char v834; // r15
  unsigned __int8 *v835; // r9
  signed __int64 v836; // r10
  int v837; // r8d
  int v838; // r8d
  int v839; // ecx
  int v840; // edi
  int v841; // edx
  int v842; // ecx
  int v843; // edi
  int v844; // edx
  int v845; // edi
  int v846; // ecx
  size_t v847; // rdi
  char v848; // al
  unsigned __int32 v849; // ebx
  __int32 v850; // edx
  __int32 v851; // eax
  __int32 v852; // ecx
  int v853; // edi
  void *v854; // rax
  __int64 v855; // rax
  void *v856; // rcx
  const WCHAR *v857; // rax
  signed int v858; // edi
  bool v859; // sf
  char *v860; // rcx
  CToastCenterExperienceManager *v861; // rdi
  __int64 v862; // rax
  __int64 (__fastcall *v863)(); // rdi
  __int64 v864; // rax
  int v865; // eax
  __int64 v866; // r11
  int v867; // r10d
  int v868; // r8d
  int v869; // r9d
  int v870; // ecx
  unsigned __int64 v871; // rdx
  int v872; // eax
  __int64 v873; // rsi
  int v874; // r15d
  int v875; // r8d
  signed int v876; // r11d
  unsigned __int16 *v877; // rax
  unsigned __int16 *v878; // rbx
  __int64 v879; // rsi
  signed __int64 v880; // r10
  unsigned __int8 *v881; // r9
  int v882; // r8d
  int v883; // r8d
  int v884; // edi
  int v885; // edx
  int v886; // edi
  int v887; // edx
  int v888; // edi
  int v889; // ecx
  void *v890; // rdi
  __int64 v891; // rax
  __int64 v892; // rax
  signed int v893; // edi
  bool v894; // sf
  unsigned __int16 *v895; // rcx
  __int64 v896; // rax
  __int64 (__fastcall *v897)(); // rdi
  __int64 v898; // rax
  unsigned int v899; // eax
  int v900; // r9d
  int v901; // edx
  __int32 v902; // r10d
  int v903; // r8d
  int v904; // ecx
  int v905; // r11d
  __int64 v906; // rdi
  const WCHAR *v907; // rdx
  char *v908; // rax
  unsigned __int16 *v909; // r14
  char v910; // bl
  unsigned __int8 *v911; // r9
  __int64 v912; // r10
  int v913; // r8d
  int v914; // r8d
  int v915; // edi
  int v916; // edx
  int v917; // edi
  int v918; // edx
  int v919; // edi
  int v920; // ecx
  __int64 v921; // rcx
  __int64 v922; // rcx
  __int64 v923; // rcx
  int v924; // eax
  __int64 v925; // rbx
  HMODULE *v926; // rdi
  __int64 v927; // rdx
  __int64 (__fastcall **v928)(); // rax
  __int64 (__fastcall **v929)(); // rcx
  __int128 v930; // xmm1
  __int128 v931; // xmm0
  __int128 v932; // xmm1
  __int128 v933; // xmm0
  __int128 v934; // xmm1
  __int128 v935; // xmm0
  __int128 v936; // xmm1
  __int128 v937; // xmm1
  __int128 v938; // xmm0
  __int128 v939; // xmm1
  __int128 v940; // xmm0
  __int128 v941; // xmm1
  __int128 v942; // xmm0
  int v943; // eax
  int v944; // esi
  int v945; // eax
  const WCHAR *v946; // rax
  int v947; // r15d
  _BYTE *v948; // r14
  int v949; // ecx
  unsigned __int8 *v950; // rbx
  unsigned int v951; // esi
  __int64 v952; // r12
  unsigned int v953; // r11d
  int v954; // r10d
  int v955; // r9d
  int v956; // eax
  int v957; // r10d
  int v958; // r11d
  int v959; // r9d
  unsigned int v960; // r8d
  int v961; // r11d
  unsigned int v962; // r8d
  int v963; // r11d
  int v964; // r8d
  unsigned int v965; // r11d
  int v966; // r8d
  int v967; // r11d
  int v968; // r8d
  unsigned int v969; // r11d
  int v970; // edx
  int v971; // r11d
  unsigned int v972; // esi
  int v973; // r11d
  int v974; // esi
  int v975; // r11d
  int v976; // esi
  unsigned int v977; // edi
  int v978; // esi
  int v979; // edi
  int v980; // esi
  unsigned int v981; // edi
  int v982; // esi
  int v983; // r11d
  int v984; // eax
  _BYTE *v985; // rbx
  unsigned __int64 v986; // rax
  char v987; // cl
  HMODULE *v988; // rdi
  __int64 v989; // rbx
  HMODULE *v990; // rdi
  __int64 v991; // rdx
  __int64 (__fastcall **v992)(); // rax
  __int64 (__fastcall **v993)(); // rcx
  __int128 v994; // xmm1
  __int128 v995; // xmm0
  __int128 v996; // xmm1
  __int128 v997; // xmm0
  __int128 v998; // xmm1
  __int128 v999; // xmm0
  __int128 v1000; // xmm1
  __int128 v1001; // xmm1
  __int128 v1002; // xmm0
  __int128 v1003; // xmm1
  __int128 v1004; // xmm0
  __int128 v1005; // xmm1
  __int128 v1006; // xmm0
  const WCHAR *v1007; // rdx
  __int64 v1008; // rax
  _BYTE *v1009; // rbx
  HMODULE *v1010; // rsi
  int v1011; // edi
  __int64 v1012; // rcx
  char *v1013; // rcx
  unsigned int v1014; // eax
  unsigned int v1015; // esi
  const WCHAR *v1016; // rcx
  const CHAR *v1017; // rdx
  __int64 v1018; // rax
  __int64 (__fastcall *v1019)(); // rax
  HANDLE v1020; // rax
  __int64 v1021; // rbx
  int v1022; // eax
  __int64 v1023; // rdx
  __int64 (__fastcall **v1024)(); // rax
  __int64 (__fastcall **v1025)(); // rcx
  __int128 v1026; // xmm1
  __int128 v1027; // xmm0
  __int128 v1028; // xmm1
  __int128 v1029; // xmm0
  __int128 v1030; // xmm1
  __int128 v1031; // xmm0
  __int128 v1032; // xmm1
  __int128 v1033; // xmm1
  __int128 v1034; // xmm0
  __int128 v1035; // xmm1
  __int128 v1036; // xmm0
  __int128 v1037; // xmm1
  __int128 v1038; // xmm0
  WCHAR *v1039; // rbx
  HANDLE v1040; // rax
  _OWORD *v1041; // rax
  void *v1042; // rsi
  HANDLE v1043; // rax
  WCHAR *v1044; // rax
  unsigned int v1045; // r10d
  int v1046; // eax
  unsigned int v1047; // r10d
  int v1048; // r9d
  int v1049; // eax
  unsigned int v1050; // r10d
  int v1051; // r9d
  int v1052; // eax
  int v1053; // r9d
  unsigned int v1054; // edi
  HANDLE v1055; // rax
  LPVOID v1056; // rax
  int v1057; // eax
  int v1058; // r9d
  _DWORD *v1059; // r10
  _DWORD *v1060; // rax
  int v1061; // r10d
  unsigned int v1062; // r10d
  int *v1063; // r11
  int v1064; // edx
  unsigned __int64 v1065; // r11
  int v1066; // eax
  unsigned int v1067; // r10d
  unsigned int v1068; // r9d
  unsigned int *v1069; // r11
  int v1070; // r9d
  unsigned int v1071; // r10d
  int *v1072; // r10
  int v1073; // edx
  unsigned __int64 v1074; // r10
  unsigned int v1075; // r9d
  int v1076; // r11d
  int v1077; // eax
  _DWORD *v1078; // r10
  unsigned int v1079; // edi
  unsigned int v1080; // r10d
  int *v1081; // r9
  int v1082; // edx
  unsigned __int64 v1083; // r9
  int v1084; // r10d
  _DWORD *v1085; // r9
  _QWORD *v1086; // rax
  LPVOID v1087; // rcx
  unsigned int v1088; // ecx
  unsigned int v1089; // edi
  int v1090; // edi
  unsigned int v1091; // r9d
  unsigned int v1092; // ecx
  unsigned int v1093; // edi
  HANDLE v1094; // rax
  _DWORD *v1095; // rax
  int v1096; // eax
  unsigned int v1097; // r10d
  const WCHAR *v1098; // rcx
  void *v1099; // rcx
  int v1100; // eax
  const WCHAR *v1101; // r9
  HANDLE v1102; // rax
  int v1103; // edi
  unsigned __int8 *v1104; // rdi
  unsigned __int64 v1105; // rdx
  unsigned __int8 v1106; // al
  int v1107; // eax
  _BYTE *v1108; // r9
  unsigned int v1109; // r10d
  unsigned int v1110; // r11d
  unsigned __int8 *v1111; // rdx
  int v1112; // r8d
  unsigned int v1113; // ecx
  int v1114; // r9d
  char v1115; // r11
  int v1116; // r10d
  _BYTE *v1117; // r12
  unsigned int v1118; // r11d
  unsigned int v1119; // r15d
  int v1120; // ecx
  unsigned int v1121; // r14d
  char v1122; // al
  int v1123; // edi
  unsigned __int8 *v1124; // rcx
  int v1125; // r15d
  int v1126; // r12d
  unsigned int v1127; // ebx
  size_t v1128; // rsi
  int v1129; // r9d
  int v1130; // r8d
  int v1131; // r11d
  int v1132; // r10d
  int v1133; // r11d
  int v1134; // r10d
  int v1135; // r11d
  unsigned int v1136; // r10d
  int v1137; // r11d
  int v1138; // r10d
  int v1139; // r11d
  int v1140; // r10d
  int v1141; // r11d
  int v1142; // r10d
  unsigned int v1143; // r11d
  unsigned int v1144; // r10d
  int v1145; // r11d
  int v1146; // r10d
  int v1147; // r11d
  int v1148; // r10d
  int v1149; // r11d
  int v1150; // r10d
  int v1151; // r11d
  int v1152; // r10d
  unsigned int v1153; // eax
  int v1154; // r10d
  int v1155; // r11d
  _BYTE *v1156; // r15
  HANDLE v1157; // rax
  unsigned int *v1158; // r14
  HANDLE v1159; // rax
  void *v1160; // rax
  HANDLE v1161; // rax
  _OWORD *v1162; // rax
  HANDLE v1163; // rax
  _QWORD *v1164; // rax
  int v1165; // edi
  HANDLE v1166; // rax
  HANDLE v1167; // rax
  HANDLE v1168; // rax
  HANDLE v1169; // rax
  HANDLE v1170; // rax
  unsigned __int16 *v1171; // rax
  HANDLE v1172; // rax
  HANDLE v1173; // rax
  HANDLE v1174; // rax
  HANDLE v1175; // rax
  unsigned __int16 *v1176; // r9
  int v1177; // edx
  int v1178; // edi
  int v1179; // r11d
  int v1180; // r11d
  unsigned int v1181; // edi
  HANDLE v1182; // rax
  _DWORD *v1183; // rax
  int v1184; // eax
  LPVOID v1185; // rcx
  void *v1186; // rcx
  int v1187; // eax
  void *v1188; // r9
  void *v1189; // rcx
  int v1190; // eax
  void *v1191; // r9
  HANDLE v1192; // rax
  int v1193; // eax
  void *v1194; // r9
  unsigned int v1195; // ecx
  void *v1196; // r14
  HANDLE v1197; // rax
  void *v1198; // r15
  HANDLE v1199; // rax
  void *v1200; // r15
  HANDLE v1201; // rax
  void *v1202; // r15
  HANDLE v1203; // rax
  HANDLE v1204; // rax
  HANDLE v1205; // rax
  void *v1206; // r14
  HANDLE v1207; // rax
  void *v1208; // r15
  HANDLE v1209; // rax
  void *v1210; // r15
  HANDLE v1211; // rax
  void *v1212; // r15
  HANDLE v1213; // rax
  HANDLE v1214; // rax
  HANDLE v1215; // rax
  _DWORD *v1216; // rdi
  unsigned int v1217; // r9d
  __int64 v1218; // r10
  _DWORD *v1219; // rax
  int v1220; // r9d
  void *v1221; // r9
  int v1222; // r10d
  unsigned int *v1223; // rcx
  int v1224; // r10d
  void *v1225; // r9
  unsigned int *v1226; // rcx
  int v1227; // r10d
  void *v1228; // r9
  int v1229; // ecx
  int v1230; // r10d
  void *v1231; // r9
  unsigned int v1232; // edi
  HANDLE v1233; // rax
  LPVOID v1234; // rax
  void *v1235; // rdx
  signed int v1236; // eax
  FARPROC v1237; // rax
  int v1238; // eax
  unsigned int v1239; // r9d
  int v1240; // edi
  int v1241; // r9d
  __int64 v1242; // r11
  int v1243; // r11d
  int v1244; // r9d
  int v1245; // r9d
  unsigned int v1246; // r10d
  int v1247; // r10d
  int v1248; // r9d
  int v1249; // r9d
  int v1250; // r9d
  int v1251; // r10d
  int v1252; // r11d
  HANDLE v1253; // rax
  SIZE_T *v1254; // rax
  SIZE_T *v1255; // rcx
  HANDLE v1256; // rax
  void *v1257; // rcx
  HANDLE v1258; // rax
  void *v1259; // rcx
  HANDLE v1260; // rax
  void *v1261; // rcx
  SIZE_T *v1262; // rax
  HANDLE v1263; // rax
  HANDLE v1264; // rax
  HANDLE v1265; // rax
  HANDLE v1266; // rax
  SIZE_T *v1267; // r10
  char v1268; // di
  char *v1269; // rax
  WCHAR *v1270; // r9
  unsigned __int16 *v1271; // r8
  char v1272; // r10
  unsigned __int8 v1273; // dl
  unsigned int v1274; // edi
  int v1275; // r10d
  void *v1276; // rax
  SIZE_T *v1277; // r11
  unsigned __int16 *v1278; // r15
  unsigned int v1279; // r8d
  unsigned int v1280; // r12d
  unsigned int v1281; // edx
  unsigned int v1282; // r9d
  char v1283; // cl
  char *v1284; // rcx
  unsigned int v1285; // r8d
  int v1286; // r11d
  _BYTE *v1287; // r12
  unsigned int v1288; // edx
  unsigned __int8 *v1289; // rsi
  char *v1290; // r14
  int v1291; // ebx
  int v1292; // r10d
  int v1293; // r9d
  int v1294; // eax
  int v1295; // r10d
  int v1296; // edi
  int v1297; // r9d
  unsigned int v1298; // r8d
  int v1299; // edi
  unsigned int v1300; // r8d
  int v1301; // edi
  int v1302; // r8d
  unsigned int v1303; // edi
  int v1304; // r8d
  int v1305; // edi
  int v1306; // r8d
  unsigned int v1307; // edi
  int v1308; // r8d
  int v1309; // edi
  unsigned int v1310; // r8d
  int v1311; // edi
  int v1312; // r8d
  int v1313; // edi
  int v1314; // r8d
  unsigned int v1315; // edi
  int v1316; // r8d
  int v1317; // edi
  int v1318; // r8d
  unsigned int v1319; // edi
  int v1320; // eax
  unsigned int v1321; // ecx
  unsigned int v1322; // ecx
  SIZE_T ii; // rax
  _QWORD *v1324; // r15
  SIZE_T *v1325; // r10
  int v1326; // edi
  int v1327; // eax
  WCHAR *v1328; // r9
  SIZE_T *v1329; // r10
  int v1330; // eax
  WCHAR *v1331; // r9
  SIZE_T *v1332; // r10
  void *v1333; // r8
  WCHAR *v1334; // r9
  SIZE_T *v1335; // r10
  int v1336; // eax
  WCHAR *v1337; // r9
  SIZE_T *v1338; // r10
  WCHAR *v1339; // r8
  SIZE_T v1340; // rax
  _QWORD *v1341; // r14
  WCHAR *v1342; // r15
  const WCHAR *v1343; // rax
  SIZE_T v1344; // r11
  int *v1345; // r11
  int v1346; // edx
  unsigned __int64 v1347; // r11
  void *v1348; // r9
  SIZE_T *v1349; // r10
  SIZE_T v1350; // rcx
  unsigned int v1351; // ecx
  HANDLE v1352; // rax
  void *v1353; // r15
  void *v1354; // rdi
  HANDLE v1355; // rax
  void *v1356; // rdi
  HANDLE v1357; // rax
  HANDLE v1358; // rax
  HANDLE v1359; // rax
  int v1360; // eax
  __int64 v1361; // rbx
  HMODULE *v1362; // rdi
  __int64 v1363; // rdx
  __int64 (__fastcall **v1364)(); // rax
  __int64 (__fastcall **v1365)(); // rcx
  __int128 v1366; // xmm1
  __int128 v1367; // xmm0
  __int128 v1368; // xmm1
  __int128 v1369; // xmm0
  __int128 v1370; // xmm1
  __int128 v1371; // xmm0
  __int128 v1372; // xmm1
  __int128 v1373; // xmm1
  __int128 v1374; // xmm0
  __int128 v1375; // xmm1
  __int128 v1376; // xmm0
  __int128 v1377; // xmm1
  __int128 v1378; // xmm0
  int v1379; // edi
  unsigned __int8 v1380; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1381; // [rsp+60h] [rbp-A0h]
  LPCWSTR v1382; // [rsp+68h] [rbp-98h]
  LPCWSTR v1383; // [rsp+68h] [rbp-98h]
  WCHAR *v1384; // [rsp+68h] [rbp-98h]
  WCHAR *v1385; // [rsp+68h] [rbp-98h]
  LPCWSTR v1386; // [rsp+68h] [rbp-98h]
  LPCWSTR v1387; // [rsp+68h] [rbp-98h]
  CToastCenterExperienceManager *v1388; // [rsp+68h] [rbp-98h]
  CToastCenterExperienceManager *v1389; // [rsp+68h] [rbp-98h]
  int v1390; // [rsp+68h] [rbp-98h]
  int v1391; // [rsp+68h] [rbp-98h]
  int v1392; // [rsp+68h] [rbp-98h]
  int v1393; // [rsp+68h] [rbp-98h]
  int v1394; // [rsp+68h] [rbp-98h]
  int v1395; // [rsp+68h] [rbp-98h]
  unsigned int v1396; // [rsp+68h] [rbp-98h]
  int v1397; // [rsp+68h] [rbp-98h]
  unsigned int v1398; // [rsp+68h] [rbp-98h]
  unsigned int v1399; // [rsp+68h] [rbp-98h]
  unsigned int v1400; // [rsp+68h] [rbp-98h]
  int v1401; // [rsp+68h] [rbp-98h]
  int v1402; // [rsp+70h] [rbp-90h]
  int v1403; // [rsp+70h] [rbp-90h]
  unsigned int v1404; // [rsp+70h] [rbp-90h]
  SIZE_T v1405; // [rsp+70h] [rbp-90h]
  int v1406; // [rsp+70h] [rbp-90h]
  int v1407; // [rsp+70h] [rbp-90h]
  unsigned int v1408; // [rsp+70h] [rbp-90h]
  unsigned int v1409; // [rsp+70h] [rbp-90h]
  SIZE_T v1410; // [rsp+70h] [rbp-90h]
  int v1411; // [rsp+70h] [rbp-90h]
  int v1412; // [rsp+70h] [rbp-90h]
  SIZE_T v1413; // [rsp+70h] [rbp-90h]
  int v1414; // [rsp+70h] [rbp-90h]
  int v1415; // [rsp+70h] [rbp-90h]
  int v1416; // [rsp+74h] [rbp-8Ch]
  int v1417; // [rsp+74h] [rbp-8Ch]
  unsigned int v1418; // [rsp+74h] [rbp-8Ch]
  unsigned int v1419; // [rsp+74h] [rbp-8Ch]
  int v1420; // [rsp+74h] [rbp-8Ch]
  int v1421; // [rsp+74h] [rbp-8Ch]
  int v1422; // [rsp+74h] [rbp-8Ch]
  int v1423; // [rsp+74h] [rbp-8Ch]
  int v1424; // [rsp+74h] [rbp-8Ch]
  int v1425; // [rsp+74h] [rbp-8Ch]
  int v1426; // [rsp+74h] [rbp-8Ch]
  size_t v1427; // [rsp+78h] [rbp-88h]
  size_t v1428; // [rsp+78h] [rbp-88h]
  size_t v1429; // [rsp+78h] [rbp-88h]
  size_t v1430; // [rsp+78h] [rbp-88h]
  char *v1431; // [rsp+78h] [rbp-88h]
  size_t v1432; // [rsp+78h] [rbp-88h]
  size_t v1433; // [rsp+78h] [rbp-88h]
  int v1434; // [rsp+78h] [rbp-88h]
  int v1435; // [rsp+78h] [rbp-88h]
  int v1436; // [rsp+78h] [rbp-88h]
  int v1437; // [rsp+78h] [rbp-88h]
  int v1438; // [rsp+78h] [rbp-88h]
  int v1439; // [rsp+78h] [rbp-88h]
  unsigned int v1440; // [rsp+78h] [rbp-88h]
  unsigned int v1441; // [rsp+78h] [rbp-88h]
  unsigned int v1442; // [rsp+78h] [rbp-88h]
  unsigned int v1443; // [rsp+78h] [rbp-88h]
  int v1444; // [rsp+78h] [rbp-88h]
  int n; // [rsp+78h] [rbp-88h]
  unsigned int v1446; // [rsp+78h] [rbp-88h]
  unsigned int v1447; // [rsp+78h] [rbp-88h]
  WCHAR *lpModuleName; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamea; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNameb; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamec; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamed; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamee; // [rsp+80h] [rbp-80h]
  __int64 lpModuleNamef; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNameg; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNameh; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamei; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamej; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamek; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamel; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamem; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamen; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNameo; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamep; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNameq; // [rsp+80h] [rbp-80h]
  CToastCenterExperienceManager *lpModuleNamer; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNames; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamet; // [rsp+80h] [rbp-80h]
  char *lpMem; // [rsp+88h] [rbp-78h]
  unsigned __int8 *lpMema; // [rsp+88h] [rbp-78h]
  void *lpMemb; // [rsp+88h] [rbp-78h]
  void *lpMemc; // [rsp+88h] [rbp-78h]
  void *lpMemd; // [rsp+88h] [rbp-78h]
  void *lpMeme; // [rsp+88h] [rbp-78h]
  void *lpMemf; // [rsp+88h] [rbp-78h]
  void *lpMemg; // [rsp+88h] [rbp-78h]
  void *lpMemh; // [rsp+88h] [rbp-78h]
  void *lpMemi; // [rsp+88h] [rbp-78h]
  void *lpMemj; // [rsp+88h] [rbp-78h]
  unsigned int *lpMemk; // [rsp+88h] [rbp-78h]
  unsigned __int8 *lpMeml; // [rsp+88h] [rbp-78h]
  LPVOID lpMemm; // [rsp+88h] [rbp-78h]
  void *lpMemn; // [rsp+88h] [rbp-78h]
  void *lpMemo; // [rsp+88h] [rbp-78h]
  CToastCenterExperienceManager *lpMemp; // [rsp+88h] [rbp-78h]
  _QWORD *lpMemq; // [rsp+88h] [rbp-78h]
  char *v1487; // [rsp+90h] [rbp-70h]
  char *v1488; // [rsp+90h] [rbp-70h]
  const WCHAR *v1489; // [rsp+90h] [rbp-70h]
  LPVOID v1490; // [rsp+90h] [rbp-70h]
  int v1491; // [rsp+90h] [rbp-70h]
  LPVOID v1492; // [rsp+90h] [rbp-70h]
  void *v1493; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v1494; // [rsp+90h] [rbp-70h]
  void *v1495; // [rsp+90h] [rbp-70h]
  void *v1496; // [rsp+90h] [rbp-70h]
  void *v1497; // [rsp+90h] [rbp-70h]
  void *v1498; // [rsp+90h] [rbp-70h]
  void *v1499; // [rsp+90h] [rbp-70h]
  void *v1500; // [rsp+90h] [rbp-70h]
  LPVOID v1501; // [rsp+90h] [rbp-70h]
  size_t v1502; // [rsp+98h] [rbp-68h]
  void *v1503; // [rsp+98h] [rbp-68h]
  void *v1504; // [rsp+98h] [rbp-68h]
  void *v1505; // [rsp+98h] [rbp-68h]
  void *v1506; // [rsp+98h] [rbp-68h]
  void *v1507; // [rsp+98h] [rbp-68h]
  void *v1508; // [rsp+98h] [rbp-68h]
  void *v1509; // [rsp+98h] [rbp-68h]
  size_t v1510; // [rsp+98h] [rbp-68h]
  void *v1511; // [rsp+98h] [rbp-68h]
  size_t v1512; // [rsp+98h] [rbp-68h]
  size_t v1513; // [rsp+98h] [rbp-68h]
  void *v1514; // [rsp+98h] [rbp-68h]
  SIZE_T v1515; // [rsp+A0h] [rbp-60h]
  SIZE_T v1516; // [rsp+A0h] [rbp-60h]
  SIZE_T v1517; // [rsp+A0h] [rbp-60h]
  SIZE_T v1518; // [rsp+A0h] [rbp-60h]
  int v1519; // [rsp+A0h] [rbp-60h]
  int v1520; // [rsp+A0h] [rbp-60h]
  int v1521; // [rsp+A0h] [rbp-60h]
  int v1522; // [rsp+A0h] [rbp-60h]
  unsigned int v1523; // [rsp+A0h] [rbp-60h]
  int v1524; // [rsp+A0h] [rbp-60h]
  unsigned int v1525; // [rsp+A0h] [rbp-60h]
  _BYTE *v1526; // [rsp+A0h] [rbp-60h]
  int v1527; // [rsp+A0h] [rbp-60h]
  int v1528; // [rsp+A0h] [rbp-60h]
  unsigned int v1529; // [rsp+A8h] [rbp-58h]
  unsigned int v1530; // [rsp+A8h] [rbp-58h]
  unsigned int v1531; // [rsp+A8h] [rbp-58h]
  int v1532; // [rsp+A8h] [rbp-58h]
  __int32 v1533; // [rsp+A8h] [rbp-58h]
  unsigned int v1534; // [rsp+B0h] [rbp-50h]
  int v1535; // [rsp+B0h] [rbp-50h]
  int v1536; // [rsp+B0h] [rbp-50h]
  int v1537; // [rsp+B0h] [rbp-50h]
  int v1538; // [rsp+B0h] [rbp-50h]
  unsigned int v1539; // [rsp+B0h] [rbp-50h]
  char k; // [rsp+B0h] [rbp-50h]
  int v1541; // [rsp+B0h] [rbp-50h]
  unsigned int v1542; // [rsp+B0h] [rbp-50h]
  unsigned int v1543; // [rsp+B0h] [rbp-50h]
  unsigned int v1544; // [rsp+B0h] [rbp-50h]
  int v1545; // [rsp+B0h] [rbp-50h]
  int v1546; // [rsp+B0h] [rbp-50h]
  int v1547; // [rsp+B0h] [rbp-50h]
  signed int v1548; // [rsp+B0h] [rbp-50h]
  _BYTE *v1549; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1550; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1551; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1552; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1553; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1554; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1555; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1556; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1557; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1558; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1559; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1560; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1561; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1562; // [rsp+B8h] [rbp-48h]
  SIZE_T v1563; // [rsp+C0h] [rbp-40h]
  char *v1564; // [rsp+C0h] [rbp-40h]
  int v1565; // [rsp+C0h] [rbp-40h]
  unsigned int v1566; // [rsp+C0h] [rbp-40h]
  WCHAR *v1567; // [rsp+C0h] [rbp-40h]
  int v1568; // [rsp+C0h] [rbp-40h]
  unsigned int v1569; // [rsp+C0h] [rbp-40h]
  int v1570; // [rsp+C0h] [rbp-40h]
  int v1571; // [rsp+C0h] [rbp-40h]
  int v1572; // [rsp+C0h] [rbp-40h]
  int v1573; // [rsp+C0h] [rbp-40h]
  int v1574; // [rsp+C0h] [rbp-40h]
  int v1575; // [rsp+C0h] [rbp-40h]
  __int32 v1576; // [rsp+C0h] [rbp-40h]
  int v1577; // [rsp+C0h] [rbp-40h]
  int v1578; // [rsp+C0h] [rbp-40h]
  int v1579; // [rsp+C0h] [rbp-40h]
  void *v1580; // [rsp+C8h] [rbp-38h]
  unsigned int v1581; // [rsp+C8h] [rbp-38h]
  unsigned int v1582; // [rsp+C8h] [rbp-38h]
  int v1583; // [rsp+C8h] [rbp-38h]
  unsigned int v1584; // [rsp+C8h] [rbp-38h]
  void *v1585; // [rsp+C8h] [rbp-38h]
  _DWORD *v1586; // [rsp+D0h] [rbp-30h]
  int *v1587; // [rsp+D0h] [rbp-30h]
  unsigned __int8 *v1588; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v1589; // [rsp+D0h] [rbp-30h]
  __int64 v1590; // [rsp+D0h] [rbp-30h]
  __int32 v1591; // [rsp+D0h] [rbp-30h]
  int v1592; // [rsp+D0h] [rbp-30h]
  unsigned int v1593; // [rsp+D0h] [rbp-30h]
  unsigned int v1594; // [rsp+D0h] [rbp-30h]
  void *v1595; // [rsp+D0h] [rbp-30h]
  unsigned int v1596; // [rsp+D8h] [rbp-28h]
  SIZE_T v1597; // [rsp+D8h] [rbp-28h]
  _QWORD *v1598; // [rsp+D8h] [rbp-28h]
  SIZE_T v1599; // [rsp+D8h] [rbp-28h]
  SIZE_T v1600; // [rsp+D8h] [rbp-28h]
  SIZE_T v1601; // [rsp+D8h] [rbp-28h]
  SIZE_T *v1602; // [rsp+D8h] [rbp-28h]
  SIZE_T *v1603; // [rsp+D8h] [rbp-28h]
  _DWORD *v1604; // [rsp+E0h] [rbp-20h]
  _BYTE *v1605; // [rsp+E0h] [rbp-20h]
  void **v1606; // [rsp+E0h] [rbp-20h]
  __int32 v1607; // [rsp+E0h] [rbp-20h]
  LPVOID v1608; // [rsp+E0h] [rbp-20h]
  int v1609; // [rsp+E0h] [rbp-20h]
  unsigned int v1610; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v1611; // [rsp+E0h] [rbp-20h]
  SIZE_T v1612; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v1613; // [rsp+F0h] [rbp-10h]
  size_t Size; // [rsp+F8h] [rbp-8h]
  LPCWSTR v1615; // [rsp+100h] [rbp+0h]
  unsigned __int16 *v1616; // [rsp+108h] [rbp+8h]
  LPVOID v1617; // [rsp+110h] [rbp+10h]
  void *v1618; // [rsp+118h] [rbp+18h]
  LPVOID v1619; // [rsp+120h] [rbp+20h]
  __int64 v1620; // [rsp+128h] [rbp+28h]
  _BYTE *v1621; // [rsp+130h] [rbp+30h]
  int v1622; // [rsp+138h] [rbp+38h]
  LPVOID v1623; // [rsp+140h] [rbp+40h]
  int v1624; // [rsp+148h] [rbp+48h]
  int v1625; // [rsp+14Ch] [rbp+4Ch]
  int v1626; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1627; // [rsp+154h] [rbp+54h] BYREF
  int v1628; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1629; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v1630; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1631; // [rsp+164h] [rbp+64h] BYREF
  int v1632; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1633; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v1634; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1635; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1636; // [rsp+178h] [rbp+78h] BYREF
  int v1637; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1638; // [rsp+180h] [rbp+80h] BYREF
  int v1639; // [rsp+184h] [rbp+84h] BYREF
  int v1640; // [rsp+188h] [rbp+88h] BYREF
  int v1641; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1642; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1643; // [rsp+194h] [rbp+94h]
  unsigned int v1644; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1645; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1646; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1647; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1648; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1649; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1650; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1651; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1652; // [rsp+1BCh] [rbp+BCh] BYREF
  int v1653; // [rsp+1C0h] [rbp+C0h]
  int v1654; // [rsp+1C4h] [rbp+C4h]
  unsigned int v1655; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1656; // [rsp+1CCh] [rbp+CCh] BYREF
  int v1657; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1658; // [rsp+1D4h] [rbp+D4h] BYREF
  unsigned int dwBytes; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int dwBytes_4; // [rsp+1DCh] [rbp+DCh] BYREF
  int v1661; // [rsp+1E0h] [rbp+E0h] BYREF
  int v1662; // [rsp+1E4h] [rbp+E4h] BYREF
  int v1663; // [rsp+1E8h] [rbp+E8h] BYREF
  int v1664; // [rsp+1ECh] [rbp+ECh] BYREF
  int v1665; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1666; // [rsp+1FCh] [rbp+FCh] BYREF
  int v1667; // [rsp+200h] [rbp+100h] BYREF
  int v1668; // [rsp+204h] [rbp+104h] BYREF
  int v1669; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1670; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1671; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1672; // [rsp+214h] [rbp+114h] BYREF
  int v1673; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1674; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1675; // [rsp+220h] [rbp+120h]
  unsigned int v1676; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1677; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1678; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1679; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1680; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1681; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1682; // [rsp+23Ch] [rbp+13Ch] BYREF
  int v1683; // [rsp+240h] [rbp+140h] BYREF
  int v1684; // [rsp+244h] [rbp+144h] BYREF
  int v1685; // [rsp+248h] [rbp+148h] BYREF
  int v1686; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v1687; // [rsp+250h] [rbp+150h] BYREF
  int v1688; // [rsp+254h] [rbp+154h] BYREF
  _DWORD *v1689; // [rsp+260h] [rbp+160h] BYREF
  int v1690; // [rsp+268h] [rbp+168h] BYREF
  unsigned int v1691; // [rsp+26Ch] [rbp+16Ch] BYREF
  unsigned int v1692; // [rsp+270h] [rbp+170h] BYREF
  wchar_t *v1693; // [rsp+278h] [rbp+178h] BYREF
  void *v1694[2]; // [rsp+280h] [rbp+180h] BYREF
  size_t pcchLength[2]; // [rsp+290h] [rbp+190h] BYREF
  int *v1696; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v1697; // [rsp+2A8h] [rbp+1A8h] BYREF
  int *v1698; // [rsp+2B0h] [rbp+1B0h] BYREF
  size_t v1699; // [rsp+2B8h] [rbp+1B8h] BYREF
  int *v1700; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v1701; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v1702; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v1703; // [rsp+2D8h] [rbp+1D8h] BYREF
  void **v1704; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned __int16 *v1705; // [rsp+2E8h] [rbp+1E8h] BYREF
  void *v1706; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int *v1707; // [rsp+300h] [rbp+200h] BYREF
  _DWORD *v1708; // [rsp+308h] [rbp+208h] BYREF
  HMODULE phModule; // [rsp+310h] [rbp+210h] BYREF
  void *v1710; // [rsp+318h] [rbp+218h] BYREF
  void *v1711; // [rsp+320h] [rbp+220h] BYREF
  unsigned __int64 v1712; // [rsp+328h] [rbp+228h] BYREF
  unsigned __int64 v1713; // [rsp+330h] [rbp+230h] BYREF
  unsigned __int64 v1714; // [rsp+338h] [rbp+238h] BYREF
  int *v1715; // [rsp+340h] [rbp+240h] BYREF
  _DWORD *v1716; // [rsp+348h] [rbp+248h] BYREF
  _DWORD *v1717; // [rsp+350h] [rbp+250h] BYREF
  void *v1718; // [rsp+358h] [rbp+258h] BYREF
  _DWORD *v1719; // [rsp+360h] [rbp+260h] BYREF
  _DWORD *v1720; // [rsp+368h] [rbp+268h] BYREF
  __int64 v1721; // [rsp+370h] [rbp+270h] BYREF
  LPVOID v1722; // [rsp+380h] [rbp+280h]
  void **v1723; // [rsp+388h] [rbp+288h] BYREF
  LPVOID v1724; // [rsp+398h] [rbp+298h]
  void *v1725; // [rsp+3A0h] [rbp+2A0h] BYREF
  void *v1726; // [rsp+3A8h] [rbp+2A8h] BYREF
  unsigned __int64 v1727; // [rsp+3B0h] [rbp+2B0h]
  void *v1728[5]; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int64 v1729; // [rsp+3E0h] [rbp+2E0h]
  __int64 v1730; // [rsp+3E8h] [rbp+2E8h] BYREF
  __int64 v1731; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v1732; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1733; // [rsp+408h] [rbp+308h] BYREF
  wchar_t *String1; // [rsp+410h] [rbp+310h] BYREF
  wchar_t *v1735; // [rsp+418h] [rbp+318h] BYREF
  __int64 v1736; // [rsp+420h] [rbp+320h] BYREF
  LPVOID v1737; // [rsp+430h] [rbp+330h]
  LPVOID v1738; // [rsp+438h] [rbp+338h]
  size_t v1739; // [rsp+440h] [rbp+340h] BYREF
  size_t v1740; // [rsp+448h] [rbp+348h] BYREF
  size_t v1741; // [rsp+450h] [rbp+350h] BYREF
  void *v1742[2]; // [rsp+458h] [rbp+358h] BYREF
  void *v1743; // [rsp+468h] [rbp+368h] BYREF
  unsigned int *v1744; // [rsp+470h] [rbp+370h] BYREF
  unsigned __int64 v1745; // [rsp+478h] [rbp+378h] BYREF
  HMODULE hModule; // [rsp+480h] [rbp+380h] BYREF
  void *v1747; // [rsp+488h] [rbp+388h] BYREF
  void *v1748; // [rsp+490h] [rbp+390h] BYREF
  SIZE_T v1749; // [rsp+498h] [rbp+398h] BYREF
  unsigned __int64 v1750; // [rsp+4A0h] [rbp+3A0h] BYREF
  SIZE_T v1751; // [rsp+4A8h] [rbp+3A8h] BYREF
  _DWORD *v1752; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int64 v1753[2]; // [rsp+4B8h] [rbp+3B8h] BYREF
  __int64 v1754[2]; // [rsp+4C8h] [rbp+3C8h] BYREF
  __int64 v1755[2]; // [rsp+4D8h] [rbp+3D8h] BYREF
  void *v1756[2]; // [rsp+4E8h] [rbp+3E8h] BYREF
  __int64 v1757[2]; // [rsp+4F8h] [rbp+3F8h] BYREF
  void *v1758; // [rsp+508h] [rbp+408h] BYREF
  void *Src[2]; // [rsp+510h] [rbp+410h] BYREF
  __int128 v1760; // [rsp+520h] [rbp+420h]
  size_t v1761[2]; // [rsp+530h] [rbp+430h] BYREF
  __int64 v1762; // [rsp+540h] [rbp+440h]
  void *v1763[2]; // [rsp+548h] [rbp+448h] BYREF
  void *v1764[2]; // [rsp+558h] [rbp+458h] BYREF
  __int64 v1765[2]; // [rsp+568h] [rbp+468h] BYREF
  __int64 v1766[2]; // [rsp+578h] [rbp+478h] BYREF
  __int64 v1767[2]; // [rsp+588h] [rbp+488h] BYREF
  unsigned int *v1768; // [rsp+598h] [rbp+498h] BYREF
  LPVOID v1769[2]; // [rsp+5A0h] [rbp+4A0h]
  __int128 v1770; // [rsp+5B0h] [rbp+4B0h]
  __int128 v1771; // [rsp+5C0h] [rbp+4C0h] BYREF
  __int128 v1772; // [rsp+5D0h] [rbp+4D0h] BYREF
  __int128 v1773; // [rsp+5E0h] [rbp+4E0h]
  __int128 v1774; // [rsp+5F0h] [rbp+4F0h] BYREF
  __int128 v1775; // [rsp+600h] [rbp+500h]
  int v1776; // [rsp+610h] [rbp+510h] BYREF
  char v1777[20]; // [rsp+614h] [rbp+514h] BYREF
  char *v1778; // [rsp+628h] [rbp+528h]
  int v1779; // [rsp+680h] [rbp+580h] BYREF
  _DWORD v1780[3]; // [rsp+684h] [rbp+584h] BYREF
  __int16 v1781; // [rsp+692h] [rbp+592h]
  __int64 v1782; // [rsp+698h] [rbp+598h]
  int v1783; // [rsp+6F0h] [rbp+5F0h] BYREF
  _DWORD v1784[5]; // [rsp+6F4h] [rbp+5F4h] BYREF
  unsigned __int16 *v1785; // [rsp+708h] [rbp+608h]
  int v1786; // [rsp+760h] [rbp+660h] BYREF
  char v1787[20]; // [rsp+764h] [rbp+664h] BYREF
  SIZE_T v1788; // [rsp+778h] [rbp+678h]
  int v1789; // [rsp+7D0h] [rbp+6D0h] BYREF
  _DWORD v1790[5]; // [rsp+7D4h] [rbp+6D4h] BYREF
  unsigned __int16 *v1791; // [rsp+7E8h] [rbp+6E8h]
  int v1792; // [rsp+840h] [rbp+740h] BYREF
  char v1793[20]; // [rsp+844h] [rbp+744h] BYREF
  SIZE_T v1794; // [rsp+858h] [rbp+758h]
  int v1795; // [rsp+8B0h] [rbp+7B0h] BYREF
  _DWORD v1796[5]; // [rsp+8B4h] [rbp+7B4h] BYREF
  unsigned __int16 *v1797; // [rsp+8C8h] [rbp+7C8h]
  int v1798; // [rsp+920h] [rbp+820h] BYREF
  _DWORD v1799[5]; // [rsp+924h] [rbp+824h] BYREF
  void *v1800; // [rsp+938h] [rbp+838h]
  int v1801; // [rsp+990h] [rbp+890h] BYREF
  char v1802[20]; // [rsp+994h] [rbp+894h] BYREF
  unsigned __int16 *v1803; // [rsp+9A8h] [rbp+8A8h]
  int v1804; // [rsp+A00h] [rbp+900h] BYREF
  int v1805; // [rsp+A04h] [rbp+904h]
  void *v1806; // [rsp+A08h] [rbp+908h]
  void *v1807; // [rsp+A10h] [rbp+910h]
  void *v1808; // [rsp+A18h] [rbp+918h]
  const WCHAR *v1809; // [rsp+A20h] [rbp+920h]
  const WCHAR *v1810; // [rsp+A28h] [rbp+928h]
  __int64 v1811; // [rsp+A30h] [rbp+930h]
  int v1812; // [rsp+A38h] [rbp+938h]
  __m128i v1813; // [rsp+A3Ch] [rbp+93Ch] BYREF
  __m128i v1814; // [rsp+A4Ch] [rbp+94Ch] BYREF
  unsigned int v1815; // [rsp+A5Ch] [rbp+95Ch] BYREF
  unsigned int v1816; // [rsp+A60h] [rbp+960h]
  unsigned __int32 v1817; // [rsp+A64h] [rbp+964h]
  unsigned int v1818; // [rsp+A68h] [rbp+968h]
  __int64 v1819; // [rsp+A70h] [rbp+970h]
  unsigned __int64 v1820; // [rsp+A78h] [rbp+978h]
  unsigned __int64 v1821; // [rsp+A80h] [rbp+980h]
  __int64 v1822; // [rsp+A88h] [rbp+988h]
  __int128 v1823; // [rsp+A90h] [rbp+990h] BYREF
  __int128 v1824; // [rsp+AA0h] [rbp+9A0h] BYREF
  __int128 v1825; // [rsp+AB0h] [rbp+9B0h]
  __int128 v1826; // [rsp+AC0h] [rbp+9C0h] BYREF
  __int128 v1827; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int64 v1828; // [rsp+AE0h] [rbp+9E0h] BYREF
  unsigned __int32 v1829; // [rsp+AE8h] [rbp+9E8h]
  __int32 v1830; // [rsp+AECh] [rbp+9ECh]
  _OWORD v1831[2]; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int128 v1832; // [rsp+B10h] [rbp+A10h] BYREF
  __int128 v1833; // [rsp+B20h] [rbp+A20h] BYREF
  __int64 v1834; // [rsp+B30h] [rbp+A30h]
  __int128 v1835; // [rsp+B38h] [rbp+A38h] BYREF
  __int128 v1836; // [rsp+B48h] [rbp+A48h] BYREF
  __int64 v1837; // [rsp+B58h] [rbp+A58h]
  _DWORD v1838[12]; // [rsp+B60h] [rbp+A60h] BYREF
  __int128 v1839; // [rsp+B90h] [rbp+A90h] BYREF
  __int128 v1840; // [rsp+BA0h] [rbp+AA0h]
  __int64 v1841; // [rsp+BB0h] [rbp+AB0h]
  int v1842; // [rsp+BB8h] [rbp+AB8h]
  __int128 v1843; // [rsp+BC0h] [rbp+AC0h] BYREF
  __int128 v1844; // [rsp+BD0h] [rbp+AD0h]
  __int64 v1845; // [rsp+BE0h] [rbp+AE0h]
  int v1846; // [rsp+BE8h] [rbp+AE8h]
  __int128 v1847; // [rsp+BF0h] [rbp+AF0h] BYREF
  __int128 v1848; // [rsp+C00h] [rbp+B00h]
  __int64 v1849; // [rsp+C10h] [rbp+B10h]
  int v1850; // [rsp+C18h] [rbp+B18h]
  __int128 v1851; // [rsp+C20h] [rbp+B20h] BYREF
  __int128 v1852; // [rsp+C30h] [rbp+B30h]
  __int64 v1853; // [rsp+C40h] [rbp+B40h]
  int v1854; // [rsp+C48h] [rbp+B48h]
  _DWORD v1855[6]; // [rsp+C50h] [rbp+B50h] BYREF
  char v1856; // [rsp+C6Ah] [rbp+B6Ah]
  unsigned __int16 v1857[34]; // [rsp+C6Ch] [rbp+B6Ch] BYREF
  _DWORD v1858[6]; // [rsp+CB0h] [rbp+BB0h] BYREF
  char v1859; // [rsp+CCAh] [rbp+BCAh]
  unsigned __int16 v1860[34]; // [rsp+CCCh] [rbp+BCCh] BYREF
  _DWORD v1861[6]; // [rsp+D10h] [rbp+C10h] BYREF
  char v1862; // [rsp+D2Ah] [rbp+C2Ah]
  unsigned __int16 v1863[34]; // [rsp+D2Ch] [rbp+C2Ch] BYREF
  _BYTE v1864[68]; // [rsp+D70h] [rbp+C70h] BYREF
  __int16 v1865; // [rsp+DB4h] [rbp+CB4h]
  unsigned __int16 v1866; // [rsp+E16h] [rbp+D16h]
  __int64 v1867; // [rsp+E1Ch] [rbp+D1Ch]
  _OWORD v1868[3]; // [rsp+E50h] [rbp+D50h] BYREF
  int v1869; // [rsp+E80h] [rbp+D80h] BYREF
  __int128 v1870; // [rsp+E88h] [rbp+D88h]
  __int128 v1871; // [rsp+E98h] [rbp+D98h]
  __int128 v1872; // [rsp+EA8h] [rbp+DA8h]
  __int64 v1873; // [rsp+EB8h] [rbp+DB8h]
  __int64 v1874; // [rsp+EC0h] [rbp+DC0h] BYREF
  char v1875[152]; // [rsp+EC8h] [rbp+DC8h] BYREF
  int v1876; // [rsp+F60h] [rbp+E60h] BYREF
  __int16 v1877; // [rsp+F64h] [rbp+E64h]
  _BYTE v1878[176]; // [rsp+F70h] [rbp+E70h] BYREF
  WCHAR Filename[264]; // [rsp+1020h] [rbp+F20h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54629273>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive() )
  {
    return 1;
  }
  LODWORD(v1620) = 0;
  v1 = 0;
  v1705 = 0LL;
  v1653 = 0;
  v1654 = 0;
  v1612 = 0LL;
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v2 = dword_18089D72C;
  v1624 = -1;
  if ( dword_18089D72C )
    goto LABEL_48;
  v1625 = 0;
  v3 = MemoryAlloc(0x338uLL);
  if ( !v3 )
    goto LABEL_14;
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
    v34 = v33 ^ v32 ^ 0xAC987321;
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
  v44 = 0;
  do
    v43 ^= v3[v42++];
  while ( v42 < 0x338 );
  if ( v43 == 64LL )
  {
    v3[823] = 0;
    memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
    v63 = v3;
    if ( *v3 )
    {
      v64 = 0;
      while ( 1 )
      {
        v65 = -1LL;
        v66 = (const WCHAR *)v3;
        v44 = 0;
        do
          ++v65;
        while ( *(_WORD *)&v3[2 * v65] );
        v67 = &v3[2 * v65];
        v68 = &qword_180899E50[3 * v64];
        if ( !GetModuleHandleExW(0, v66, v68) )
          break;
        if ( *(_WORD *)*v68 == 23117
          && (v69 = *((int *)*v68 + 15), (unsigned int)v69 < 0x10000000)
          && (v70 = (char *)*v68 + v69, v70 >= (char *)*v68)
          && *(_DWORD *)v70 == 17744 )
        {
          if ( ((*((_WORD *)v70 + 12) - 267) & 0xFEFF) != 0 )
          {
            v44 = -1073741811;
          }
          else
          {
            *(HMODULE *)((char *)v68 + 12) = (HMODULE)*((_QWORD *)v70 + 17);
            *((_DWORD *)v68 + 2) = *((_DWORD *)v70 + 20);
          }
        }
        else
        {
          v44 = -1073741701;
        }
        v71 = *(_DWORD *)(v67 + 2);
        v3 = v67 + 6;
        v72 = 0;
        if ( v71 )
        {
          v73 = 3LL * v64;
          do
          {
            v74 = -1LL;
            v75 = v3;
            do
              ++v74;
            while ( v3[v74] );
            v3 += v74 + 1;
            if ( v44 < 0 )
            {
              v77 = v1625;
            }
            else
            {
              ProcAddress = GetProcAddress(qword_180899E50[v73], v75);
              if ( !ProcAddress )
                goto LABEL_46;
              v77 = v1625;
              v73 = 3LL * v64;
              off_180891340[v1625] = ProcAddress;
            }
            ++v72;
            v1625 = v77 + 1;
          }
          while ( v72 < v71 );
        }
        ++v64;
        if ( !*v3 )
          goto LABEL_46;
      }
      v44 = -1073741702;
    }
LABEL_46:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v63);
    v1 = 0;
    if ( v44 < 0 )
      goto LABEL_14;
    v2 = dword_18089D72C;
LABEL_48:
    dword_18089D72C = v2 + 1;
    goto LABEL_49;
  }
  MemoryFree(v3);
  v1 = 0;
LABEL_14:
  v45 = 4LL;
  v46 = qword_180899E50;
  do
  {
    if ( *v46 )
      FreeLibrary(*v46);
    v46 += 3;
    --v45;
  }
  while ( v45 );
  memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
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
LABEL_49:
  _InterlockedExchange(&dword_18089D738, 0);
  String1 = 0LL;
  v79 = 0;
  v1735 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_103;
  v81 = off_180891450[0]();
  v82 = 0LL;
  if ( !v81 )
  {
    LastError = GetLastError();
    v83 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v83 = LastError < 0;
    }
    if ( !v83 )
      LastError = -2147467259;
    goto LABEL_104;
  }
  v1655 = 0;
  v84 = 0LL;
  v1693 = 0LL;
  for ( i = 0LL; ; i = v1655 )
  {
    v86 = v84;
    if ( !v82 )
      v86 = 0LL;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180891470[0])(
           v81,
           2LL,
           v86,
           i,
           &v1655) )
    {
      String1 = v84;
      v1693 = 0LL;
      goto LABEL_70;
    }
    v87 = GetLastError();
    if ( v87 != 122 )
      break;
    if ( v84 )
      goto LABEL_64;
    v84 = (wchar_t *)MemoryAlloc(v1655);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1693);
    v1693 = v84;
    v82 = v84;
    if ( !v84 )
    {
      LastError = -2147024882;
      goto LABEL_70;
    }
  }
  if ( !v87 )
  {
LABEL_64:
    LastError = -2147467259;
    goto LABEL_70;
  }
  if ( v87 > 0 )
    LastError = (unsigned __int16)v87 | 0x80070000;
  else
    LastError = v87;
LABEL_70:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1693);
  if ( LastError >= 0 )
  {
    v88 = off_180891468[0];
    CurrentThreadId = GetCurrentThreadId();
    v90 = ((__int64 (__fastcall *)(_QWORD))v88)(CurrentThreadId);
    v91 = 0LL;
    if ( !v90 )
    {
      LastError = GetLastError();
      v92 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v92 = LastError < 0;
      }
      if ( !v92 )
        LastError = -2147467259;
      goto LABEL_104;
    }
    v1656 = 0;
    v93 = 0LL;
    v1694[0] = 0LL;
    LastError = 0;
    for ( j = 0LL; ; j = v1656 )
    {
      v95 = v93;
      if ( !v91 )
        v95 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180891470[0])(
             v90,
             2LL,
             v95,
             j,
             &v1656) )
      {
        v1735 = v93;
        v1694[0] = 0LL;
        goto LABEL_91;
      }
      v96 = GetLastError();
      if ( v96 != 122 )
        break;
      if ( v93 )
        goto LABEL_85;
      v93 = (wchar_t *)MemoryAlloc(v1656);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1694);
      v1694[0] = v93;
      v91 = v93;
      if ( !v93 )
      {
        LastError = -2147024882;
        goto LABEL_91;
      }
    }
    if ( !v96 )
    {
LABEL_85:
      LastError = -2147467259;
      goto LABEL_91;
    }
    LastError = v96 > 0 ? (unsigned __int16)v96 | 0x80070000 : v96;
LABEL_91:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1694);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1735 && !wcscmp_0(v1735, L"Default") )
      {
        v1657 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1657) )
        {
          LastError = GetLastError();
          v98 = LastError < 0;
          if ( LastError > 0 )
          {
            LastError = (unsigned __int16)LastError | 0x80070000;
            v98 = LastError < 0;
          }
          if ( !v98 )
            LastError = -2147467259;
          goto LABEL_104;
        }
        if ( (v1657 & 0xF) == 0 )
          v79 = 1;
      }
LABEL_103:
      v1 = v79;
    }
  }
LABEL_104:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1735);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&String1);
  v99 = 0;
  if ( LastError >= 0 )
    v99 = v1;
  LODWORD(v1621) = v99;
  v100 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(&v1612, v100);
  LODWORD(v101) = 0;
  v1616 = (unsigned __int16 *)v1612;
  if ( !v1612 )
  {
    v102 = -2147024882;
    v103 = 0;
    goto LABEL_1591;
  }
  v1613 = 0;
  v104 = 0LL;
  *(_OWORD *)Src = 0LL;
  v1760 = 0LL;
  v105 = GetProcessHeap();
  v106 = (WCHAR *)HeapAlloc(v105, 8u, 0xA0uLL);
  v1625 = 56;
  v107 = v106;
  v1382 = v106;
  v102 = -1073741801;
  if ( !v106 )
  {
    v1622 = -1073741801;
    v107 = 0LL;
    goto LABEL_598;
  }
  *(_OWORD *)v106 = xmmword_180897FA0[0];
  *((_OWORD *)v106 + 1) = xmmword_180897FA0[1];
  *((_OWORD *)v106 + 2) = xmmword_180897FA0[2];
  *((_OWORD *)v106 + 3) = xmmword_180897FA0[3];
  *((_OWORD *)v106 + 4) = xmmword_180897FA0[4];
  *((_OWORD *)v106 + 5) = xmmword_180897FA0[5];
  *((_OWORD *)v106 + 6) = xmmword_180897FA0[6];
  *((_OWORD *)v106 + 7) = xmmword_180897FA0[7];
  *((_OWORD *)v106 + 8) = xmmword_180897FA0[8];
  *((_OWORD *)v106 + 9) = xmmword_180897FA0[9];
  v108 = GetProcessHeap();
  v104 = HeapAlloc(v108, 8u, 8uLL);
  v1427 = (size_t)v104;
  if ( !v104 )
  {
    v1622 = -1073741801;
    v104 = 0LL;
    LODWORD(Size) = 0;
    v99 = (int)v1621;
    goto LABEL_598;
  }
  *v104 = qword_180897F90;
  LODWORD(Size) = 8;
  v1515 = __rdtsc();
  dwBytes = 0;
  v1668 = 0;
  v109 = RtlUIntAdd(4u, 4, &v1668);
  v1622 = v109;
  v102 = v109;
  if ( v109 < 0 )
  {
    v99 = v110;
    goto LABEL_598;
  }
  v111 = RtlUIntAdd(0, v1668, (int *)&dwBytes);
  v99 = v113;
  v102 = v111 | 0x10000000;
  v1622 = v111 | 0x10000000;
  if ( v111 >= 0 )
  {
    v1683 = 0;
    v1622 = RtlUIntAdd(v112, 160, &v1683);
    v102 = v1622;
    if ( v1622 >= 0 )
    {
      v114 = RtlUIntAdd(dwBytes, v1683, (int *)&dwBytes);
      v102 = v114 | 0x10000000;
      v1622 = v114 | 0x10000000;
      if ( v114 >= 0 )
      {
        v1684 = 0;
        v1622 = RtlUIntAdd(v116, v115, &v1684);
        v102 = v1622;
        if ( v1622 >= 0 )
        {
          v117 = RtlUIntAdd(dwBytes, v1684, (int *)&dwBytes);
          v102 = v117 | 0x10000000;
          v1622 = v117 | 0x10000000;
          if ( v117 >= 0 )
          {
            v1685 = 0;
            v1622 = RtlUIntAdd(v118, 8, &v1685);
            v102 = v1622;
            if ( v1622 >= 0 )
            {
              v119 = RtlUIntAdd(dwBytes, v1685, (int *)&dwBytes);
              v102 = v121 | v119;
              v1622 = v121 | v119;
              if ( (v121 | v119) >= 0 )
              {
                pcchLength[0] = 0LL;
                if ( StringCchLengthW(L"DeferWidgetsInitialization", v120, pcchLength) < 0 )
                {
                  v102 = -1073741762;
LABEL_343:
                  v1622 = v102;
                  goto LABEL_598;
                }
                ++pcchLength[0];
                v1686 = 0;
                v102 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), &v1686);
                v1622 = v102;
                if ( v102 >= 0 )
                {
                  v122 = RtlUIntAdd(dwBytes, v1686, (int *)&dwBytes);
                  v102 = v122 | 0x10000000;
                  v1622 = v122 | 0x10000000;
                  if ( v122 >= 0 )
                  {
                    v1687 = 0;
                    v1622 = RtlUIntAdd(v123, v123, &v1687);
                    v102 = v1622;
                    if ( v1622 >= 0 )
                    {
                      v124 = RtlUIntAdd(dwBytes, v1687, (int *)&dwBytes);
                      v102 = v126 | v124;
                      v1622 = v126 | v124;
                      if ( (v126 | v124) >= 0 )
                      {
                        v1688 = 0;
                        v1622 = RtlUIntAdd(v125, v125, &v1688);
                        v102 = v1622;
                        if ( v1622 >= 0 )
                        {
                          v127 = RtlUIntAdd(dwBytes, v1688, (int *)&dwBytes);
                          v102 = v128 | v127;
                          v1622 = v128 | v127;
                          if ( (v128 | v127) >= 0 )
                          {
                            HIDWORD(Src[0]) = dwBytes;
                            v129 = dwBytes;
                            v130 = GetProcessHeap();
                            v131 = HeapAlloc(v130, 8u, v129);
                            if ( !v131 )
                            {
                              v102 = -1073741801;
                              v1622 = -1073741801;
                              goto LABEL_184;
                            }
                            Src[1] = v131;
                            LODWORD(v1754[0]) = 0;
                            v1753[1] = 0LL;
                            LODWORD(Src[0]) = 0;
                            v1586 = Src[1];
                            pcchLength[1] = (size_t)Src[1];
                            v102 = RtlULongLongAdd((unsigned __int64)Src[1], 4LL, v1754);
                            v1622 = v102;
                            if ( v102 < 0 )
                            {
                              v99 = v133;
                              goto LABEL_598;
                            }
                            if ( v1586 + 2 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
                              goto LABEL_589;
                            v135 = (_DWORD *)v1754[0];
                            *v1586 = v134;
                            *v135 = 0;
                            v132 = ++LODWORD(Src[0]);
                            LODWORD(v1763[0]) = 0;
                            v1762 = 0LL;
                            if ( !v107 )
                              goto LABEL_563;
                            if ( Src[1] )
                            {
                              v138 = (int *)Src[1];
                              v1587 = (int *)Src[1];
                              v1696 = (int *)Src[1];
                              v1534 = 0;
                              if ( v132 )
                              {
                                v139 = Size;
                                while ( 1 )
                                {
                                  v140 = *v138;
                                  v1691 = 0;
                                  v1622 = RtlUIntAdd(4u, v140, (int *)&v1691);
                                  v102 = v1622;
                                  if ( v1622 < 0 )
                                    goto LABEL_543;
                                  v1622 = RtlULongLongAdd((unsigned __int64)v1587, v1691, (__int64 *)&v1696);
                                  v102 = v1622;
                                  if ( v1622 < 0 )
                                    goto LABEL_543;
                                  ++v1534;
                                  v138 = v1696;
                                  v1587 = v1696;
                                  if ( v1534 >= v141 )
                                  {
                                    v1427 = (size_t)v104;
                                    LODWORD(Size) = v139;
                                    v1382 = v107;
                                    break;
                                  }
                                }
                              }
                              v102 = RtlULongLongAdd((unsigned __int64)v138, 4LL, (__int64 *)v1763);
                              v1622 = v102;
                              if ( v102 >= 0 )
                              {
                                if ( (char *)v1587 + v142 + 4 > (char *)Src[1] + HIDWORD(Src[0]) )
                                  goto LABEL_589;
                                *v1587 = v142;
                                memcpy_0(v1763[0], v107, v142);
                                v137 = (int)Src[0];
LABEL_140:
                                LODWORD(Src[0]) = ++v137;
                                goto LABEL_151;
                              }
                            }
                            else
                            {
                              v1690 = 0;
                              v1622 = RtlUIntAdd(4u, 160, &v1690);
                              v102 = v1622;
                              if ( v1622 < 0 )
                                goto LABEL_543;
                              v136 = RtlUIntAdd(HIDWORD(Src[0]), v1690, (int *)Src + 1);
                              v137 = (int)Src[0];
                              v102 = v136;
                              v1622 = v136;
                              if ( v136 >= 0 )
                                goto LABEL_140;
                            }
                            v99 = v133;
                            if ( v102 < 0 )
                              goto LABEL_598;
LABEL_151:
                            v143 = Size;
                            LODWORD(v1764[0]) = 0;
                            v1763[1] = 0LL;
                            if ( (_DWORD)Size )
                            {
                              if ( !Src[1] )
                              {
                                v1626 = 0;
                                v1622 = RtlUIntAdd(4u, Size, &v1626);
                                v102 = v1622;
                                if ( v1622 >= 0 )
                                {
                                  v144 = RtlUIntAdd(HIDWORD(Src[0]), v1626, (int *)Src + 1);
                                  v146 = (int)Src[0];
                                  v102 = v144;
                                  v1622 = v144;
                                  if ( v144 >= 0 )
                                  {
LABEL_157:
                                    LODWORD(Src[0]) = ++v146;
                                    goto LABEL_168;
                                  }
LABEL_167:
                                  v99 = (int)v1621;
                                  if ( v102 < 0 )
                                    goto LABEL_598;
LABEL_168:
                                  LODWORD(v1765[0]) = 0;
                                  v1764[1] = 0LL;
                                  if ( Src[1] )
                                  {
                                    v153 = (int *)Src[1];
                                    v1698 = (int *)Src[1];
                                    v1536 = 0;
                                    if ( v146 )
                                    {
                                      while ( 1 )
                                      {
                                        v154 = *v153;
                                        v1629 = 0;
                                        v1622 = RtlUIntAdd(4u, v154, (int *)&v1629);
                                        v102 = v1622;
                                        if ( v1622 < 0 )
                                          goto LABEL_543;
                                        v1622 = RtlULongLongAdd((unsigned __int64)v153, v1629, (__int64 *)&v1698);
                                        v102 = v1622;
                                        if ( v1622 < 0 )
                                          goto LABEL_543;
                                        v153 = v1698;
                                        if ( ++v1536 >= v155 )
                                        {
                                          v1427 = (size_t)v104;
                                          v145 = 4LL;
                                          v1382 = v107;
                                          break;
                                        }
                                      }
                                    }
                                    v102 = RtlULongLongAdd((unsigned __int64)v153, v145, v1765);
                                    v1622 = v102;
                                    if ( v102 >= 0 )
                                    {
                                      if ( v153 + 3 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
                                        goto LABEL_589;
                                      v156 = (SIZE_T *)v1765[0];
                                      *v153 = 8;
                                      *v156 = v1515;
                                      ++LODWORD(Src[0]);
LABEL_181:
                                      v1699 = 0LL;
                                      if ( StringCchLengthW(L"DeferWidgetsInitialization", v152, &v1699) < 0 )
                                      {
                                        v102 = -1073741762;
                                        goto LABEL_183;
                                      }
                                      v1622 = RtlULongLongAdd(v1699, 1LL, (__int64 *)&v1699);
                                      v102 = v1622;
                                      if ( v1622 >= 0 )
                                      {
                                        LODWORD(v1766[0]) = 0;
                                        v1765[1] = 0LL;
                                        if ( 2 * (_DWORD)v1699 )
                                        {
                                          if ( !Src[1] )
                                          {
                                            v1630 = 0;
                                            v1622 = RtlUIntAdd(4u, 2 * (int)v1699, &v1630);
                                            v102 = v1622;
                                            if ( v1622 >= 0 )
                                            {
                                              v158 = RtlUIntAdd(HIDWORD(Src[0]), v1630, (int *)Src + 1);
                                              v157 = (unsigned int)Src[0];
                                              v102 = v158;
                                              v1622 = v158;
                                              if ( v158 >= 0 )
                                              {
                                                v157 = LODWORD(Src[0]) + 1;
                                                v1622 = 0;
                                                ++LODWORD(Src[0]);
                                                v102 = 0;
                                              }
                                            }
                                            goto LABEL_201;
                                          }
                                          v159 = (int *)Src[1];
                                          v1700 = (int *)Src[1];
                                          if ( v157 )
                                          {
                                            do
                                            {
                                              v160 = *v159;
                                              v1631 = 0;
                                              v1622 = RtlUIntAdd(4u, v160, (int *)&v1631);
                                              v102 = v1622;
                                              if ( v1622 < 0 )
                                                goto LABEL_201;
                                              v102 = RtlULongLongAdd((unsigned __int64)v159, v1631, (__int64 *)&v1700);
                                              v1622 = v102;
                                              if ( v102 < 0 )
                                                goto LABEL_201;
                                              v159 = v1700;
                                            }
                                            while ( v161 + 1 < v157 );
                                          }
                                          v1622 = RtlULongLongAdd((unsigned __int64)v159, 4LL, v1766);
                                          v102 = v1622;
                                          if ( v1622 < 0 )
                                            goto LABEL_201;
                                          if ( (char *)v159 + v162 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
                                          {
                                            v163 = (void *)v1766[0];
                                            *v159 = v162;
                                            memcpy_0(v163, L"DeferWidgetsInitialization", (unsigned int)v162);
                                            v157 = ++LODWORD(Src[0]);
                                            goto LABEL_201;
                                          }
                                          v102 = -1073741789;
                                        }
                                        else
                                        {
                                          v102 = -1073741811;
                                        }
                                        v1622 = v102;
                                      }
LABEL_201:
                                      v99 = (int)v1621;
                                      if ( v102 < 0 )
                                        goto LABEL_598;
                                      LODWORD(v1767[0]) = 0;
                                      v1766[1] = 0LL;
                                      if ( Src[1] )
                                      {
                                        v167 = (int *)Src[1];
                                        v1701 = (int *)Src[1];
                                        v1537 = 0;
                                        if ( v157 )
                                        {
                                          while ( 1 )
                                          {
                                            v168 = *v167;
                                            v1633 = 0;
                                            v1622 = RtlUIntAdd(4u, v168, (int *)&v1633);
                                            v102 = v1622;
                                            if ( v1622 < 0 )
                                              goto LABEL_543;
                                            v1622 = RtlULongLongAdd((unsigned __int64)v167, v1633, (__int64 *)&v1701);
                                            v102 = v1622;
                                            if ( v1622 < 0 )
                                              goto LABEL_543;
                                            v167 = v1701;
                                            if ( ++v1537 >= v169 )
                                            {
                                              v1427 = (size_t)v104;
                                              v1382 = v107;
                                              break;
                                            }
                                          }
                                        }
                                        v102 = RtlULongLongAdd((unsigned __int64)v167, 4LL, v1767);
                                        v1622 = v102;
                                        if ( v102 >= 0 )
                                        {
                                          if ( v167 + 2 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
                                            goto LABEL_589;
                                          v170 = (int *)v1767[0];
                                          *v167 = v165;
                                          *v170 = v133;
                                          v166 = (int)Src[0];
                                          goto LABEL_205;
                                        }
                                      }
                                      else
                                      {
                                        v1632 = 0;
                                        v1622 = RtlUIntAdd(4u, 4, &v1632);
                                        v102 = v1622;
                                        if ( v1622 < 0 )
                                          goto LABEL_598;
                                        v164 = RtlUIntAdd(HIDWORD(Src[0]), v1632, (int *)Src + 1);
                                        v166 = (int)Src[0];
                                        v102 = v164;
                                        v1622 = v164;
                                        if ( v164 >= 0 )
                                        {
LABEL_205:
                                          LODWORD(Src[0]) = ++v166;
                                          goto LABEL_215;
                                        }
                                      }
                                      v99 = v133;
                                      if ( v102 < 0 )
                                        goto LABEL_598;
LABEL_215:
                                      LODWORD(v1768) = 0;
                                      v1767[1] = 0LL;
                                      if ( Src[1] )
                                      {
                                        v172 = (int *)Src[1];
                                        v1702 = (int *)Src[1];
                                        v1538 = 0;
                                        if ( v166 )
                                        {
                                          while ( 1 )
                                          {
                                            v173 = *v172;
                                            v1635 = 0;
                                            v1622 = RtlUIntAdd(4u, v173, (int *)&v1635);
                                            v102 = v1622;
                                            if ( v1622 < 0 )
                                              goto LABEL_543;
                                            v1622 = RtlULongLongAdd((unsigned __int64)v172, v1635, (__int64 *)&v1702);
                                            v102 = v1622;
                                            if ( v1622 < 0 )
                                              goto LABEL_543;
                                            v172 = v1702;
                                            if ( ++v1538 >= v174 )
                                            {
                                              v1427 = (size_t)v104;
                                              v165 = 4LL;
                                              v1382 = v107;
                                              break;
                                            }
                                          }
                                        }
                                        v102 = RtlULongLongAdd((unsigned __int64)v172, v165, (__int64 *)&v1768);
                                        v1622 = v102;
                                        if ( v102 >= 0 )
                                        {
                                          if ( v172 + 2 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
                                            goto LABEL_589;
                                          v175 = v1768;
                                          *v172 = v171;
                                          *v175 = v171;
                                          ++LODWORD(Src[0]);
                                          goto LABEL_228;
                                        }
                                      }
                                      else
                                      {
                                        v1634 = 0;
                                        v1622 = RtlUIntAdd(v165, v165, &v1634);
                                        v102 = v1622;
                                        if ( v1622 < 0 )
                                          goto LABEL_543;
                                        v102 = RtlUIntAdd(HIDWORD(Src[0]), v1634, (int *)Src + 1);
                                        v1622 = v102;
                                        if ( v102 >= 0 )
                                        {
                                          ++LODWORD(Src[0]);
LABEL_228:
                                          v1636 = 0;
                                          v102 = RtlUIntAdd(v171, v171, (int *)&v1636);
                                          v1622 = v102;
                                          if ( v102 < 0 )
                                            goto LABEL_543;
                                          v177 = v1636;
                                          v1646 = v1636;
                                          v1637 = 0;
                                          v1622 = RtlUIntAdd(v176, 8, &v1637);
                                          v102 = v1622;
                                          if ( v1622 < 0 )
                                            goto LABEL_543;
                                          v102 = RtlUIntAdd(v177, v1637, (int *)&v1646);
                                          v1622 = v102;
                                          if ( v102 < 0 )
                                            goto LABEL_240;
                                          v1638 = 0;
                                          v1622 = RtlUIntAdd(v179, v179, &v1638);
                                          v102 = v1622;
                                          if ( v1622 >= 0 )
                                          {
                                            v102 = RtlUIntAdd(v1646, v1638, (int *)&v1646);
                                            v1622 = v102;
                                            if ( v102 < 0 )
                                              goto LABEL_240;
                                            v1639 = 0;
                                            v1622 = RtlUIntAdd(v180, v180, &v1639);
                                            v102 = v1622;
                                            if ( v1622 >= 0 )
                                            {
                                              v102 = RtlUIntAdd(v1646, v1639, (int *)&v1646);
                                              v1622 = v102;
                                              if ( v102 < 0 )
                                                goto LABEL_240;
                                              v1640 = 0;
                                              v1622 = RtlUIntAdd(v181, v181, &v1640);
                                              v102 = v1622;
                                              if ( v1622 >= 0 )
                                              {
                                                v102 = RtlUIntAdd(v1646, v1640, (int *)&v1646);
                                                v1622 = v102;
                                                if ( v102 < 0 )
                                                  goto LABEL_240;
                                                v1641 = 0;
                                                v1622 = RtlUIntAdd(v182, v182, &v1641);
                                                v102 = v1622;
                                                if ( v1622 >= 0 )
                                                {
                                                  v102 = RtlUIntAdd(v1646, v1641, (int *)&v1646);
                                                  v1622 = v102;
                                                  if ( v102 >= 0 )
                                                  {
                                                    v1613 = v1646;
                                                    v1588 = 0LL;
                                                    v1539 = 0;
                                                    v1604 = 0LL;
                                                    v1617 = 0LL;
                                                    LODWORD(Size) = 0;
                                                    v1580 = 0LL;
                                                    v1529 = 0;
                                                    v1619 = 0LL;
                                                    v1550 = 0LL;
                                                    v1563 = __rdtsc();
                                                    v1642 = 8;
                                                    v184 = RtlUIntAdd(8u, SHIDWORD(Src[0]), (int *)&v1642);
                                                    if ( v184 < 0 )
                                                    {
LABEL_252:
                                                      v102 = v184 | 0x10000000;
                                                      v1622 = v102;
                                                      if ( v102 < 0 )
                                                        goto LABEL_315;
                                                      v193 = v1588;
                                                      if ( !v1588 )
                                                      {
                                                        v102 = -805306355;
                                                        goto LABEL_542;
                                                      }
                                                      v194 = v183;
                                                      if ( !v183
                                                        || (v1596 = v183 + 8,
                                                            v195 = (char *)MemoryAlloc(v183 + 8LL),
                                                            v1618 = v195,
                                                            v196 = 0LL,
                                                            !v195) )
                                                      {
                                                        v102 = -805306367;
                                                        v1622 = -805306367;
LABEL_317:
                                                        v282 = GetProcessHeap();
                                                        HeapFree(v282, 0, v1588);
LABEL_318:
                                                        if ( v1604 )
                                                        {
                                                          lpMeme = (void *)*((_QWORD *)v1604 + 1);
                                                          if ( lpMeme )
                                                          {
                                                            v283 = GetProcessHeap();
                                                            HeapFree(v283, 0, lpMeme);
                                                            *((_QWORD *)v1604 + 1) = 0LL;
                                                          }
                                                          lpMemf = (void *)*((_QWORD *)v1604 + 3);
                                                          if ( lpMemf )
                                                          {
                                                            v284 = GetProcessHeap();
                                                            HeapFree(v284, 0, lpMemf);
                                                            *((_QWORD *)v1604 + 3) = 0LL;
                                                          }
                                                          lpMemg = (void *)*((_QWORD *)v1604 + 5);
                                                          if ( lpMemg )
                                                          {
                                                            v285 = GetProcessHeap();
                                                            HeapFree(v285, 0, lpMemg);
                                                            *((_QWORD *)v1604 + 5) = 0LL;
                                                          }
                                                          v286 = GetProcessHeap();
                                                          HeapFree(v286, 0, v1604);
                                                        }
                                                        v287 = v1617;
                                                        if ( v1617 )
                                                        {
                                                          v288 = GetProcessHeap();
                                                          HeapFree(v288, 0, v287);
                                                        }
                                                        if ( v1580 )
                                                        {
                                                          v289 = GetProcessHeap();
                                                          HeapFree(v289, 0, v1580);
                                                        }
                                                        v290 = v1619;
                                                        if ( v1619 )
                                                        {
                                                          lpMemh = (void *)*((_QWORD *)v1619 + 1);
                                                          if ( lpMemh )
                                                          {
                                                            v291 = GetProcessHeap();
                                                            HeapFree(v291, 0, lpMemh);
                                                            v290[1] = 0LL;
                                                          }
                                                          lpMemi = (void *)v290[3];
                                                          if ( lpMemi )
                                                          {
                                                            v292 = GetProcessHeap();
                                                            HeapFree(v292, 0, lpMemi);
                                                            v290[3] = 0LL;
                                                          }
                                                          lpMemj = (void *)v290[5];
                                                          if ( lpMemj )
                                                          {
                                                            v293 = GetProcessHeap();
                                                            HeapFree(v293, 0, lpMemj);
                                                            v290[5] = 0LL;
                                                          }
                                                          v294 = GetProcessHeap();
                                                          HeapFree(v294, 0, v290);
                                                        }
                                                        if ( v1550 )
                                                        {
                                                          v295 = GetProcessHeap();
                                                          HeapFree(v295, 0, v1550);
                                                        }
                                                        v99 = (int)v1621;
                                                        if ( v102 < 0 )
                                                          goto LABEL_598;
                                                        if ( !(_DWORD)v1760 )
                                                        {
                                                          v102 = -1073425151;
                                                          goto LABEL_343;
                                                        }
                                                        if ( !*((_QWORD *)&v1760 + 1) )
                                                        {
                                                          v102 = -1073741811;
                                                          goto LABEL_343;
                                                        }
                                                        v1715 = (int *)*((_QWORD *)&v1760 + 1);
                                                        v435 = **((_DWORD **)&v1760 + 1);
                                                        v1622 = RtlULongLongAdd(
                                                                  *((unsigned __int64 *)&v1760 + 1),
                                                                  4LL,
                                                                  (__int64 *)&v1715);
                                                        v102 = v1622;
                                                        if ( v1622 < 0 )
                                                          goto LABEL_543;
                                                        v438 = v1715;
                                                        if ( !v435 )
                                                          v438 = v437;
                                                        v1715 = v438;
                                                        if ( v435 == v436 )
                                                        {
                                                          v102 = *v438;
                                                          v1622 = v102;
                                                          if ( v102 == -805306333 )
                                                          {
                                                            v1572 = -2147024774;
LABEL_540:
                                                            if ( (_DWORD)v1760 != 6 )
                                                            {
LABEL_541:
                                                              v102 = -1073425151;
                                                              goto LABEL_542;
                                                            }
                                                            if ( *((int **)&v1760 + 1) != v437 )
                                                            {
                                                              v439 = (_DWORD *)*((_QWORD *)&v1760 + 1);
                                                              v440 = (int)v437;
                                                              v1716 = (_DWORD *)*((_QWORD *)&v1760 + 1);
                                                              while ( 1 )
                                                              {
                                                                v1622 = RtlULongLongAdd(
                                                                          (unsigned __int64)v439,
                                                                          4LL,
                                                                          (__int64 *)&v1716);
                                                                v102 = v1622;
                                                                if ( v1622 < 0 )
                                                                  goto LABEL_543;
                                                                v1622 = RtlULongLongAdd(
                                                                          (unsigned __int64)v1716,
                                                                          v441,
                                                                          (__int64 *)&v1716);
                                                                v102 = v1622;
                                                                if ( v1622 < 0 )
                                                                  goto LABEL_543;
                                                                v439 = v1716;
                                                                if ( ++v440 )
                                                                {
                                                                  v442 = *v1716;
                                                                  v1622 = RtlULongLongAdd(
                                                                            (unsigned __int64)v1716,
                                                                            4LL,
                                                                            (__int64 *)&v1716);
                                                                  v102 = v1622;
                                                                  if ( v1622 < 0 )
                                                                    goto LABEL_543;
                                                                  v444 = v1716;
                                                                  if ( !v442 )
                                                                    v444 = v443;
                                                                  v1716 = v444;
                                                                  if ( v442 != 8 )
                                                                    goto LABEL_589;
                                                                  lpMemm = *(LPVOID *)v444;
                                                                  if ( *((_DWORD **)&v1760 + 1) == v443 )
                                                                    break;
                                                                  v445 = (_DWORD *)*((_QWORD *)&v1760 + 1);
                                                                  v446 = (int)v443;
                                                                  v1717 = (_DWORD *)*((_QWORD *)&v1760 + 1);
                                                                  while ( 1 )
                                                                  {
                                                                    v1622 = RtlULongLongAdd(
                                                                              (unsigned __int64)v445,
                                                                              4LL,
                                                                              (__int64 *)&v1717);
                                                                    v102 = v1622;
                                                                    if ( v1622 < 0 )
                                                                      goto LABEL_543;
                                                                    v1622 = RtlULongLongAdd(
                                                                              (unsigned __int64)v1717,
                                                                              v447,
                                                                              (__int64 *)&v1717);
                                                                    v102 = v1622;
                                                                    if ( v1622 < 0 )
                                                                      goto LABEL_543;
                                                                    v445 = v1717;
                                                                    if ( (unsigned int)++v446 >= 2 )
                                                                    {
                                                                      v448 = *v1717;
                                                                      v1622 = RtlULongLongAdd(
                                                                                (unsigned __int64)v1717,
                                                                                4LL,
                                                                                (__int64 *)&v1717);
                                                                      v102 = v1622;
                                                                      if ( v1622 < 0 )
                                                                        goto LABEL_543;
                                                                      v451 = v1717;
                                                                      if ( !v448 )
                                                                        v451 = v450;
                                                                      v1717 = v451;
                                                                      if ( v448 != v449 )
                                                                        goto LABEL_589;
                                                                      v1420 = *v451;
                                                                      if ( *((_DWORD **)&v1760 + 1) == v450 )
                                                                        goto LABEL_563;
                                                                      v452 = (void *)*((_QWORD *)&v1760 + 1);
                                                                      v453 = (int)v450;
                                                                      v1718 = (void *)*((_QWORD *)&v1760 + 1);
                                                                      while ( 1 )
                                                                      {
                                                                        v1622 = RtlULongLongAdd(
                                                                                  (unsigned __int64)v452,
                                                                                  4LL,
                                                                                  (__int64 *)&v1718);
                                                                        v102 = v1622;
                                                                        if ( v1622 < 0 )
                                                                          goto LABEL_543;
                                                                        v1622 = RtlULongLongAdd(
                                                                                  (unsigned __int64)v1718,
                                                                                  v454,
                                                                                  (__int64 *)&v1718);
                                                                        v102 = v1622;
                                                                        if ( v1622 < 0 )
                                                                          goto LABEL_543;
                                                                        v452 = v1718;
                                                                        if ( (unsigned int)++v453 >= 3 )
                                                                        {
                                                                          v455 = *(_DWORD *)v1718;
                                                                          v1408 = *(_DWORD *)v1718;
                                                                          v1622 = RtlULongLongAdd(
                                                                                    (unsigned __int64)v1718,
                                                                                    4LL,
                                                                                    (__int64 *)&v1718);
                                                                          v102 = v1622;
                                                                          if ( v1622 < 0 )
                                                                            goto LABEL_543;
                                                                          v457 = v1718;
                                                                          if ( !v455 )
                                                                            v457 = v456;
                                                                          v1718 = v457;
                                                                          if ( *((void **)&v1760 + 1) != v456 )
                                                                          {
                                                                            v458 = (_DWORD *)*((_QWORD *)&v1760 + 1);
                                                                            v459 = (int)v456;
                                                                            v1719 = (_DWORD *)*((_QWORD *)&v1760 + 1);
                                                                            while ( 1 )
                                                                            {
                                                                              v1622 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v458,
                                                                                        4LL,
                                                                                        (__int64 *)&v1719);
                                                                              v102 = v1622;
                                                                              if ( v1622 < 0 )
                                                                                goto LABEL_543;
                                                                              v1622 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1719,
                                                                                        v460,
                                                                                        (__int64 *)&v1719);
                                                                              v102 = v1622;
                                                                              if ( v1622 < 0 )
                                                                                goto LABEL_543;
                                                                              v458 = v1719;
                                                                              if ( (unsigned int)++v459 >= 4 )
                                                                              {
                                                                                v461 = *v1719;
                                                                                v1622 = RtlULongLongAdd(
                                                                                          (unsigned __int64)v1719,
                                                                                          4LL,
                                                                                          (__int64 *)&v1719);
                                                                                v102 = v1622;
                                                                                if ( v1622 < 0 )
                                                                                  goto LABEL_543;
                                                                                v464 = v1719;
                                                                                if ( !v461 )
                                                                                  v464 = v463;
                                                                                v1719 = v464;
                                                                                if ( v461 != (_DWORD)v462 )
                                                                                  goto LABEL_589;
                                                                                v1542 = *v464;
                                                                                if ( *((_DWORD **)&v1760 + 1) == v463 )
                                                                                  goto LABEL_563;
                                                                                v465 = (_DWORD *)*((_QWORD *)&v1760 + 1);
                                                                                v466 = (int)v463;
                                                                                v1720 = (_DWORD *)*((_QWORD *)&v1760 + 1);
                                                                                while ( 1 )
                                                                                {
                                                                                  LODWORD(Size) = *v465;
                                                                                  v1622 = RtlULongLongAdd(
                                                                                            (unsigned __int64)v465,
                                                                                            v462,
                                                                                            (__int64 *)&v1720);
                                                                                  v102 = v1622;
                                                                                  if ( v1622 < 0 )
                                                                                    goto LABEL_543;
                                                                                  v1622 = RtlULongLongAdd(
                                                                                            (unsigned __int64)v1720,
                                                                                            (unsigned int)Size,
                                                                                            (__int64 *)&v1720);
                                                                                  v102 = v1622;
                                                                                  if ( v1622 < 0 )
                                                                                    goto LABEL_543;
                                                                                  v465 = v1720;
                                                                                  if ( (unsigned int)++v466 >= 5 )
                                                                                  {
                                                                                    LODWORD(Size) = *v1720;
                                                                                    v467 = RtlULongLongAdd(
                                                                                             (unsigned __int64)v1720,
                                                                                             v462,
                                                                                             (__int64 *)&v1720);
                                                                                    v1622 = v467;
                                                                                    v102 = v467;
                                                                                    if ( v467 < 0 )
                                                                                    {
                                                                                      v1622 = v467;
                                                                                      goto LABEL_543;
                                                                                    }
                                                                                    v469 = v1720;
                                                                                    if ( !(_DWORD)Size )
                                                                                      v469 = 0LL;
                                                                                    v1720 = v469;
                                                                                    if ( (_DWORD)Size == v468 )
                                                                                    {
                                                                                      v99 = *v469;
                                                                                      if ( (LPVOID)v1515 != lpMemm )
                                                                                        goto LABEL_541;
                                                                                      v1654 = v1420;
                                                                                      if ( v1542 > v468 || v1408 > v468 )
                                                                                      {
                                                                                        v102 = -2147024774;
                                                                                        goto LABEL_343;
                                                                                      }
                                                                                      memcpy_0(v1616, v1718, v1408);
                                                                                      if ( v1572 )
                                                                                      {
                                                                                        v102 = v1572;
                                                                                        v1622 = v1572;
                                                                                      }
                                                                                      goto LABEL_598;
                                                                                    }
                                                                                    goto LABEL_589;
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                          goto LABEL_563;
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
LABEL_563:
                                                            v102 = -1073741811;
                                                            goto LABEL_542;
                                                          }
                                                          v1572 = v102;
                                                          if ( v102 == -2147024774 )
                                                            goto LABEL_540;
                                                          v1572 = v102;
                                                          v99 = v133;
                                                          if ( v102 >= 0 )
                                                            goto LABEL_540;
                                                          goto LABEL_598;
                                                        }
LABEL_589:
                                                        v102 = -1073741789;
                                                        goto LABEL_542;
                                                      }
                                                      v197 = 0;
                                                      v1380 = 0;
                                                      if ( v194 )
                                                      {
                                                        do
                                                          v197 ^= v1588[v196++];
                                                        while ( v196 < v194 );
                                                        v1380 = v197;
                                                      }
                                                      v1820 = 0xC81ECB17B1B54A58uLL;
                                                      v198 = -1;
                                                      v1564 = v195;
                                                      v1622 = 0;
                                                      v199 = v1588;
                                                      v1402 = 0;
                                                      v200 = 0;
                                                      v201 = v194 & 7;
                                                      if ( v201 )
                                                      {
                                                        v1403 = 0;
                                                        v202 = 0;
                                                        v203 = v1625;
                                                        do
                                                        {
                                                          v204 = *v199;
                                                          if ( v200 >= 4 )
                                                          {
                                                            v205 = v1403;
                                                            v202 |= v204 << v203;
                                                          }
                                                          else
                                                          {
                                                            v205 = (v204 << (v203 - 32)) | v1403;
                                                            v1403 = v205;
                                                          }
                                                          ++v199;
                                                          ++v200;
                                                          v203 -= 8;
                                                        }
                                                        while ( (int)v200 < (int)v201 );
                                                        v206 = v1613;
                                                        v207 = v202 ^ 0x42F6B18D;
                                                        v1622 = v202;
                                                        v208 = v202;
                                                        v200 = v205 ^ 0xB17A307A;
                                                        v209 = v202 ^ 0x42F6B18D;
                                                        v210 = 0;
                                                        v211 = v205 ^ 0xB17A307A;
                                                        v1416 = 0;
                                                        do
                                                        {
                                                          v1588 = v193;
                                                          v1402 = v205;
                                                          if ( v210 >= 4 )
                                                          {
                                                            v209 = (v209 << 8) | HIBYTE(v209);
                                                            v212 = v209;
                                                          }
                                                          else
                                                          {
                                                            v211 = (v211 << 8) | HIBYTE(v211);
                                                            v212 = v211;
                                                          }
                                                          *v1564 = v212;
                                                          v205 = v1402;
                                                          v210 = v1416 + 1;
                                                          v1502 = (size_t)++v1564;
                                                          v1416 = v210;
                                                        }
                                                        while ( v210 < (int)v201 );
                                                        v195 = (char *)v1502;
                                                        v1613 = v206;
                                                        v1622 = v208;
                                                        v1382 = v107;
                                                        v1427 = (size_t)v104;
                                                        if ( v201 <= 4 )
                                                        {
                                                          v198 = 0;
                                                          if ( v201 < 4 )
                                                            v200 = v200 >> (8 * (4 - v201)) << (8 * (4 - v201));
                                                        }
                                                        else
                                                        {
                                                          v198 = v207 >> (8 * (8 - v201)) << (8 * (8 - v201));
                                                        }
                                                      }
                                                      if ( (unsigned __int64)v1539 >> 3 )
                                                      {
                                                        v213 = v199 + 2;
                                                        v214 = HIDWORD(v1820);
                                                        v215 = v1402;
                                                        v216 = v1622;
                                                        v217 = (unsigned __int64)v1539 >> 3;
                                                        v1417 = WORD1(v1820);
                                                        v1565 = WORD2(v1820);
                                                        lpMem = v195 + 7;
                                                        do
                                                        {
                                                          v218 = v213[1] | ((*v213 | ((*(v213 - 1) | (*(v213 - 2) << 8)) << 8)) << 8);
                                                          v219 = v213[5] | ((v213[4] | ((v213[3] | (v213[2] << 8)) << 8)) << 8);
                                                          v220 = v219 ^ v198;
                                                          v221 = v218 ^ v214 ^ (v220 - 19032) ^ v200;
                                                          v222 = (__ROR4__(v221, 7)
                                                                + WORD1(v1820) * __ROR4__(v221 ^ v214, 15)) ^ v220;
                                                          v223 = (v1565 * __ROR4__(v222 - 1313519016, 9)
                                                                - __ROR4__(v222, 10)) ^ v221;
                                                          v224 = (__ROR4__(v223, 27)
                                                                + HIWORD(v1820) * __ROR4__(v223 ^ v1565, 28)) ^ v222;
                                                          v225 = (v214 - (v224 ^ 0xB1B54A58)) ^ v223;
                                                          v226 = (WORD1(v1820) * (v225 - 19032) - (v225 >> 6)) ^ v224;
                                                          v227 = (19032 * (v1565 ^ __ROR4__(v226, 15))) ^ v225;
                                                          v228 = (v1565 * (HIWORD(v1820) + __ROR4__(~v227, 3))) ^ v226;
                                                          v229 = (v228 - v214 - 19032) ^ v227;
                                                          v230 = (v1417 * (v229 ^ HIWORD(v1820))) ^ __ROR4__(v229, 10) ^ v228;
                                                          v231 = __ROR4__(v230, 3) ^ (v1565 * __ROR4__(
                                                                                                v230 ^ 0x4A58,
                                                                                                26)) ^ v229;
                                                          v232 = (19032 * (__ROR4__(v231, 15) - HIWORD(v1820))) ^ v230;
                                                          v233 = (v232 >> 15) ^ (19032
                                                                               * ((8 * (v232 - v1565)) | ((v232 - v1565) >> 29))) ^ (v232 >> 1) ^ (19032 * (v232 ^ HIWORD(v1820))) ^ v231;
                                                          v234 = (WORD1(v1820) * (v233 - v1565) - (v233 >> 13)) ^ v232;
                                                          v235 = __ROR4__(v234, 11) ^ (v1565
                                                                                     * __ROR4__(-1313519016 - v234, 9)) ^ v233;
                                                          v236 = (v235 - HIWORD(v1820) + 1313519016) ^ v234;
                                                          v237 = (19032 * (v236 ^ WORD1(v1820)) - __ROR4__(v236, 7)) ^ v235;
                                                          v238 = (WORD1(v1820) * __ROR4__(v237 ^ HIWORD(v1820), 28)
                                                                - __ROR4__(v237, 16)) ^ v236;
                                                          v239 = (__ROR4__(v238, 4)
                                                                + v1565 * __ROR4__(-1313519016 - v238, 10)) ^ v237;
                                                          v240 = __ROR4__(v239, 9) ^ (HIWORD(v1820)
                                                                                    * __ROR4__(v239 + 1313519016, 4)) ^ v238;
                                                          v241 = (19032 * __ROR4__(v240 ^ v214, 24) - __ROR4__(v240, 30)) ^ v239;
                                                          v242 = (WORD1(v1820) * __ROR4__(v214 - v241, 11)
                                                                - __ROR4__(v241, 12)) ^ v240;
                                                          v243 = (v242 >> 8) ^ (v1565 * (v242 ^ WORD1(v1820))) ^ v241;
                                                          v244 = v243 ^ v214 ^ v242 ^ 0xB1B54A58;
                                                          v200 = v215 ^ v243;
                                                          v245 = lpMem;
                                                          v198 = v216 ^ v244;
                                                          lpMem += 8;
                                                          *(v245 - 4) = v200;
                                                          *v245 = v198;
                                                          *(v245 - 5) = BYTE1(v200);
                                                          v216 = v219;
                                                          *(v245 - 1) = BYTE1(v198);
                                                          v213 += 8;
                                                          *(v245 - 6) = (unsigned __int16)(v200 >> 8) >> 8;
                                                          *(v245 - 2) = (unsigned __int16)(v198 >> 8) >> 8;
                                                          *(v245 - 7) = __ROR4__(
                                                                          (((v200 >> 8) | (v200 << 24)) >> 8) | (((v200 >> 8) | (v200 << 24)) << 24),
                                                                          8);
                                                          v214 = HIDWORD(v1820);
                                                          *(v245 - 3) = __ROR4__(
                                                                          (((v198 >> 8) | (v198 << 24)) >> 8) | (((v198 >> 8) | (v198 << 24)) << 24),
                                                                          8);
                                                          v215 = v218;
                                                          --v217;
                                                        }
                                                        while ( v217 );
                                                        v104 = (_QWORD *)v1427;
                                                        v107 = (WCHAR *)v1382;
                                                        v193 = v1588;
                                                      }
                                                      *(_QWORD *)((char *)v1618 + v1539) = v1380;
                                                      v246 = GetProcessHeap();
                                                      v247 = HeapAlloc(v246, 8u, 0x30uLL);
                                                      if ( v247 )
                                                      {
                                                        *(_DWORD *)v247 = v1596;
                                                        v248 = GetProcessHeap();
                                                        v249 = HeapAlloc(v248, 8u, v1596);
                                                        if ( v249 )
                                                        {
                                                          *((_QWORD *)v247 + 1) = v249;
                                                          memcpy_0(v249, v1618, v1596);
                                                          v1566 = v1613;
                                                          v1588 = v193;
                                                          lpMema = v193;
                                                          *((_DWORD *)v247 + 4) = 160;
                                                          v250 = GetProcessHeap();
                                                          v251 = HeapAlloc(v250, 8u, 0xA0uLL);
                                                          if ( v251 )
                                                          {
                                                            *((_QWORD *)v247 + 3) = v251;
                                                            v252 = (_OWORD *)*((_QWORD *)v247 + 3);
                                                            v1613 = v1566;
                                                            v1588 = v193;
                                                            *v252 = xmmword_180897EF0[0];
                                                            v252[1] = xmmword_180897EF0[1];
                                                            v252[2] = xmmword_180897EF0[2];
                                                            v252[3] = xmmword_180897EF0[3];
                                                            v252[4] = xmmword_180897EF0[4];
                                                            v252[5] = xmmword_180897EF0[5];
                                                            v252[6] = xmmword_180897EF0[6];
                                                            v252[7] = xmmword_180897EF0[7];
                                                            v252[8] = xmmword_180897EF0[8];
                                                            v252[9] = xmmword_180897EF0[9];
                                                            *((_DWORD *)v247 + 8) = 8;
                                                            v253 = GetProcessHeap();
                                                            v254 = HeapAlloc(v253, 8u, 8uLL);
                                                            v255 = 0;
                                                            if ( v254 )
                                                            {
                                                              *((_QWORD *)v247 + 5) = v254;
                                                              **((_QWORD **)v247 + 5) = qword_180897EE0;
LABEL_294:
                                                              v1383 = v107;
                                                              v1428 = (size_t)v104;
                                                              v1604 = v247;
                                                              v260 = GetProcessHeap();
                                                              HeapFree(v260, 0, v1618);
                                                              v102 = v255 | 0x10000000;
                                                              v1622 = v102;
                                                              v1597 = (SIZE_T)v247;
                                                              if ( v102 >= 0 )
                                                              {
                                                                v261 = *(_DWORD *)v247;
                                                                v1643 = 0;
                                                                v1644 = 4;
                                                                v263 = RtlUIntAdd(4u, v261, (int *)&v1644);
                                                                if ( v263 >= 0 )
                                                                {
                                                                  v263 = RtlUIntAdd(v1644, v262, (int *)&v1644);
                                                                  if ( v263 >= 0 )
                                                                  {
                                                                    v263 = RtlUIntAdd(
                                                                             v1644,
                                                                             *((_DWORD *)v247 + 4),
                                                                             (int *)&v1644);
                                                                    if ( v263 >= 0 )
                                                                    {
                                                                      v263 = RtlUIntAdd(v1644, v264, (int *)&v1644);
                                                                      if ( v263 >= 0 )
                                                                      {
                                                                        v263 = RtlUIntAdd(
                                                                                 v1644,
                                                                                 *((_DWORD *)v247 + 8),
                                                                                 (int *)&v1644);
                                                                        if ( v263 >= 0 )
                                                                        {
                                                                          v1643 = v1644;
                                                                          v265 = v1644;
                                                                          v266 = GetProcessHeap();
                                                                          v267 = (WCHAR *)HeapAlloc(v266, 8u, v265);
                                                                          lpModuleName = v267;
                                                                          if ( !v267 )
                                                                          {
                                                                            v102 = -805306345;
                                                                            goto LABEL_345;
                                                                          }
                                                                          v1706 = v267;
                                                                          *(_DWORD *)v267 = *v1604;
                                                                          v268 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v267,
                                                                                   4LL,
                                                                                   (__int64 *)&v1706);
                                                                          v1567 = v269;
                                                                          v263 = v268;
                                                                          if ( v268 < 0 )
                                                                            goto LABEL_308;
                                                                          memcpy_0(
                                                                            v1706,
                                                                            *((const void **)v1604 + 1),
                                                                            (unsigned int)*v1604);
                                                                          v263 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v1706,
                                                                                   (unsigned int)*v1604,
                                                                                   (__int64 *)&v1706);
                                                                          v269 = lpModuleName;
                                                                          v1567 = lpModuleName;
                                                                          if ( v263 < 0 )
                                                                            goto LABEL_308;
                                                                          v270 = v1706;
                                                                          *(_DWORD *)v1706 = v1604[4];
                                                                          v271 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v270,
                                                                                   4LL,
                                                                                   (__int64 *)&v1706);
                                                                          v269 = v272;
                                                                          v263 = v271;
                                                                          v1567 = v272;
                                                                          if ( v271 < 0 )
                                                                            goto LABEL_308;
                                                                          memcpy_0(
                                                                            v1706,
                                                                            *((const void **)v1604 + 3),
                                                                            (unsigned int)v1604[4]);
                                                                          v263 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v1706,
                                                                                   (unsigned int)v1604[4],
                                                                                   (__int64 *)&v1706);
                                                                          v269 = lpModuleName;
                                                                          v1567 = lpModuleName;
                                                                          if ( v263 < 0 )
                                                                            goto LABEL_308;
                                                                          v273 = v1706;
                                                                          *(_DWORD *)v1706 = v1604[8];
                                                                          v274 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v273,
                                                                                   4LL,
                                                                                   (__int64 *)&v1706);
                                                                          v269 = v275;
                                                                          v263 = v274;
                                                                          v1567 = v275;
                                                                          if ( v274 < 0
                                                                            || (memcpy_0(
                                                                                  v1706,
                                                                                  *((const void **)v1604 + 5),
                                                                                  (unsigned int)v1604[8]),
                                                                                v263 = RtlULongLongAdd(
                                                                                         (unsigned __int64)v1706,
                                                                                         (unsigned int)v1604[8],
                                                                                         (__int64 *)&v1706),
                                                                                v1567 = lpModuleName,
                                                                                v269 = lpModuleName,
                                                                                v263 < 0) )
                                                                          {
LABEL_308:
                                                                            if ( v269 )
                                                                            {
                                                                              v276 = GetProcessHeap();
                                                                              HeapFree(v276, 0, v1567);
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            v1617 = lpModuleName;
                                                                            LODWORD(Size) = v1643;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                                v102 = v263 | 0x10000000;
                                                                v1622 = v102;
                                                                if ( v102 >= 0 )
                                                                {
                                                                  v1645 = 8;
                                                                  v277 = RtlUIntAdd(8u, v1613, (int *)&v1645);
                                                                  v102 = v277 | 0x10000000;
                                                                  v1622 = v277 | 0x10000000;
                                                                  if ( v277 >= 0 )
                                                                  {
                                                                    v1658 = 0;
                                                                    v280 = (v1645 + 7) & 0xFFFFFFF8;
                                                                    if ( v280 < v1645 )
                                                                    {
                                                                      v102 = -1073741675;
LABEL_314:
                                                                      v1622 = v102;
                                                                      goto LABEL_315;
                                                                    }
                                                                    v1604 = (_DWORD *)v1597;
                                                                    v1658 = (v1645 + 7) & 0xFFFFFFF8;
                                                                    v1617 = v278;
                                                                    v1588 = v279;
                                                                    v1622 = RtlUIntAdd(v280, 8, (int *)&v1658);
                                                                    v102 = v1622;
                                                                    if ( v1622 < 0 )
                                                                    {
                                                                      v281 = (size_t)v297;
                                                                    }
                                                                    else
                                                                    {
                                                                      v1604 = (_DWORD *)v1597;
                                                                      v1588 = v297;
                                                                      v1617 = v296;
                                                                      if ( Src[1] )
                                                                      {
                                                                        v1604 = (_DWORD *)v1597;
                                                                        v1617 = v296;
                                                                        if ( LODWORD(Src[0]) > 1 )
                                                                        {
                                                                          v298 = (unsigned int *)Src[1];
                                                                          v1707 = (unsigned int *)Src[1];
                                                                          v1428 = (size_t)v104;
                                                                          v1383 = v107;
                                                                          v1588 = v297;
                                                                          while ( 1 )
                                                                          {
                                                                            v299 = *v298;
                                                                            v1622 = RtlULongLongAdd(
                                                                                      (unsigned __int64)v298,
                                                                                      4LL,
                                                                                      (__int64 *)&v1707);
                                                                            v102 = v1622;
                                                                            if ( v1622 < 0 )
                                                                              goto LABEL_315;
                                                                            v300 = RtlULongLongAdd(
                                                                                     (unsigned __int64)v1707,
                                                                                     v299,
                                                                                     (__int64 *)&v1707);
                                                                            v302 = 0;
                                                                            v1622 = v300;
                                                                            v102 = v300;
                                                                            if ( v300 < 0 )
                                                                              goto LABEL_315;
                                                                            v298 = v1707;
                                                                            if ( v301 != -1 )
                                                                            {
                                                                              v1568 = *v1707;
                                                                              v1622 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1707,
                                                                                        4LL,
                                                                                        (__int64 *)&v1707);
                                                                              v102 = v1622;
                                                                              if ( v1622 < 0 )
                                                                                goto LABEL_315;
                                                                              v1617 = v303;
                                                                              if ( !Src[1]
                                                                                || (v1617 = v303, LODWORD(Src[0]) <= 2) )
                                                                              {
                                                                                v102 = -1073741811;
                                                                                goto LABEL_314;
                                                                              }
                                                                              v304 = Src[1];
                                                                              v1708 = Src[1];
                                                                              while ( 1 )
                                                                              {
                                                                                v1622 = RtlULongLongAdd(
                                                                                          (unsigned __int64)v304,
                                                                                          4LL,
                                                                                          (__int64 *)&v1708);
                                                                                v102 = v1622;
                                                                                if ( v1622 < 0 )
                                                                                  goto LABEL_315;
                                                                                v1622 = RtlULongLongAdd(
                                                                                          (unsigned __int64)v1708,
                                                                                          v305,
                                                                                          (__int64 *)&v1708);
                                                                                v102 = v1622;
                                                                                if ( v1622 < 0 )
                                                                                  goto LABEL_315;
                                                                                v304 = v1708;
                                                                                if ( (unsigned int)++v302 >= 2 )
                                                                                {
                                                                                  v306 = *v1708;
                                                                                  v1622 = RtlULongLongAdd(
                                                                                            (unsigned __int64)v1708,
                                                                                            4LL,
                                                                                            (__int64 *)&v1708);
                                                                                  v102 = v1622;
                                                                                  if ( v1622 < 0 )
                                                                                    goto LABEL_315;
                                                                                  v1617 = v307;
                                                                                  v1647 = 4;
                                                                                  v1622 = RtlUIntAdd(
                                                                                            4u,
                                                                                            v1658,
                                                                                            (int *)&v1647);
                                                                                  v102 = v1622;
                                                                                  if ( v1622 < 0 )
                                                                                    goto LABEL_372;
                                                                                  v1622 = RtlUIntAdd(
                                                                                            v1647,
                                                                                            v308,
                                                                                            (int *)&v1647);
                                                                                  v102 = v1622;
                                                                                  if ( v1622 < 0
                                                                                    || (v1622 = RtlUIntAdd(
                                                                                                  v1647,
                                                                                                  v1568,
                                                                                                  (int *)&v1647),
                                                                                        v102 = v1622,
                                                                                        v1622 < 0)
                                                                                    || (v1622 = RtlUIntAdd(
                                                                                                  v1647,
                                                                                                  4,
                                                                                                  (int *)&v1647),
                                                                                        v102 = v1622,
                                                                                        v1622 < 0)
                                                                                    || (v1622 = RtlUIntAdd(
                                                                                                  v1647,
                                                                                                  v306,
                                                                                                  (int *)&v1647),
                                                                                        v102 = v1622,
                                                                                        v1622 < 0) )
                                                                                  {
LABEL_372:
                                                                                    if ( v102 < 0 )
                                                                                      goto LABEL_377;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v310 = v1647;
                                                                                  }
                                                                                  v1617 = v309;
                                                                                  if ( v310 > 0x400000 )
                                                                                  {
                                                                                    v102 = -2147418113;
                                                                                    goto LABEL_314;
                                                                                  }
                                                                                  v311 = v310;
                                                                                  v1529 = v310;
                                                                                  goto LABEL_379;
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                        v281 = (size_t)v297;
                                                                        v1588 = v297;
                                                                      }
                                                                      else
                                                                      {
                                                                        v281 = (size_t)v297;
                                                                      }
                                                                      v102 = -1073741811;
                                                                      v1622 = -1073741811;
                                                                    }
LABEL_316:
                                                                    if ( !v281 )
                                                                      goto LABEL_318;
                                                                    goto LABEL_317;
                                                                  }
LABEL_377:
                                                                  if ( v102 < 0 )
                                                                    goto LABEL_315;
                                                                  v311 = 0;
LABEL_379:
                                                                  v312 = v311;
                                                                  v313 = GetProcessHeap();
                                                                  v314 = HeapAlloc(v313, 8u, v312);
                                                                  v315 = 0LL;
                                                                  if ( v314 )
                                                                    v315 = v314;
                                                                  v1580 = v315;
                                                                  v102 = v314 != 0LL ? 0x10000000 : -805306345;
                                                                  v1622 = v102;
                                                                  if ( !v314 )
                                                                    goto LABEL_315;
                                                                  phModule = 0LL;
                                                                  v1774 = 0LL;
                                                                  v1775 = 0LL;
                                                                  if ( !v1617 || !v315 )
                                                                  {
                                                                    v102 = -2147024809;
                                                                    goto LABEL_345;
                                                                  }
                                                                  LODWORD(v1775) = Size;
                                                                  *(_QWORD *)((char *)&v1775 + 4) = v1529;
                                                                  *(_QWORD *)&v1774 = v1617;
                                                                  *((_QWORD *)&v1774 + 1) = v315;
                                                                  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                                                    && (v317 = GetProcAddress(
                                                                                 phModule,
                                                                                 "NtQuerySystemInformation")) != 0LL )
                                                                  {
                                                                    v318 = ((__int64 (__fastcall *)(__int64, __int128 *))v317)(
                                                                             134LL,
                                                                             &v1774);
                                                                    v102 = v318 | 0x10000000;
                                                                    v1622 = v318 | 0x10000000;
                                                                    if ( v318 >= 0 )
                                                                    {
                                                                      v319 = DWORD1(v1775);
                                                                      goto LABEL_397;
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    v316 = GetLastError();
                                                                    v1622 = v316;
                                                                    v102 = v316;
                                                                    if ( v316 > 0 )
                                                                    {
                                                                      v102 = (unsigned __int16)v316 | 0x80070000;
                                                                      v1622 = v102;
                                                                    }
                                                                    if ( v102 >= 0 )
                                                                    {
                                                                      v102 = -2147467259;
                                                                      v1622 = -2147467259;
                                                                    }
                                                                  }
                                                                  if ( v102 == -805306333 )
                                                                  {
                                                                    v102 = -2147024774;
                                                                    goto LABEL_345;
                                                                  }
                                                                  if ( v102 < 0 )
                                                                    goto LABEL_315;
                                                                  v319 = v1529;
LABEL_397:
                                                                  v1710 = v315;
                                                                  lpMemk = 0LL;
                                                                  v1648 = 0;
                                                                  if ( v319 < 4 )
                                                                  {
LABEL_398:
                                                                    v102 = -805306306;
                                                                    goto LABEL_314;
                                                                  }
                                                                  v1569 = *v315;
                                                                  v321 = RtlULongLongAdd(
                                                                           (unsigned __int64)v315,
                                                                           4LL,
                                                                           (__int64 *)&v1710);
                                                                  if ( v321 >= 0 )
                                                                  {
                                                                    v321 = RtlUIntAdd(0, 4, (int *)&v1648);
                                                                    if ( v321 < 0 )
                                                                    {
                                                                      v320 = v322;
                                                                    }
                                                                    else
                                                                    {
                                                                      if ( v324 - v1648 < v323 )
                                                                        goto LABEL_398;
                                                                      v1503 = v1710;
                                                                      v321 = RtlULongLongAdd(
                                                                               (unsigned __int64)v1710,
                                                                               v323,
                                                                               (__int64 *)&v1710);
                                                                      if ( v321 >= 0 )
                                                                      {
                                                                        v321 = RtlUIntAdd(v1648, v325, (int *)&v1648);
                                                                        if ( v321 >= 0 )
                                                                        {
                                                                          if ( v326 - v1648 < 4 )
                                                                            goto LABEL_398;
                                                                          v327 = *(_DWORD *)v1710;
                                                                          v1418 = *(_DWORD *)v1710;
                                                                          v321 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v1710,
                                                                                   4LL,
                                                                                   (__int64 *)&v1710);
                                                                          if ( v321 >= 0 )
                                                                          {
                                                                            v321 = RtlUIntAdd(v1648, 4, (int *)&v1648);
                                                                            if ( v321 >= 0 )
                                                                            {
                                                                              if ( v328 - v1648 < v327 )
                                                                                goto LABEL_398;
                                                                              v1618 = v1710;
                                                                              v321 = RtlULongLongAdd(
                                                                                       (unsigned __int64)v1710,
                                                                                       v327,
                                                                                       (__int64 *)&v1710);
                                                                              if ( v321 >= 0 )
                                                                              {
                                                                                v321 = RtlUIntAdd(
                                                                                         v1648,
                                                                                         v327,
                                                                                         (int *)&v1648);
                                                                                if ( v321 >= 0 )
                                                                                {
                                                                                  if ( v329 - v1648 < 4 )
                                                                                    goto LABEL_398;
                                                                                  v1404 = *(_DWORD *)v1710;
                                                                                  v321 = RtlULongLongAdd(
                                                                                           (unsigned __int64)v1710,
                                                                                           4LL,
                                                                                           (__int64 *)&v1710);
                                                                                  if ( v321 >= 0 )
                                                                                  {
                                                                                    v321 = RtlUIntAdd(
                                                                                             v1648,
                                                                                             4,
                                                                                             (int *)&v1648);
                                                                                    if ( v321 >= 0 )
                                                                                    {
                                                                                      if ( v331 - v1648 < v330 )
                                                                                        goto LABEL_398;
                                                                                      v321 = RtlUIntAdd(
                                                                                               v1648,
                                                                                               v330,
                                                                                               (int *)&v1648);
                                                                                      if ( v321 >= 0 )
                                                                                      {
                                                                                        if ( v334 != v1648
                                                                                          || v332 + v333 + v327 + 12LL != v334 )
                                                                                        {
                                                                                          goto LABEL_398;
                                                                                        }
                                                                                        v335 = GetProcessHeap();
                                                                                        v336 = HeapAlloc(
                                                                                                 v335,
                                                                                                 8u,
                                                                                                 0x30uLL);
                                                                                        v1598 = v336;
                                                                                        v337 = 0LL;
                                                                                        if ( v336 )
                                                                                        {
                                                                                          v321 = 0;
                                                                                          if ( v1503 )
                                                                                          {
                                                                                            *(_DWORD *)v336 = v1569;
                                                                                            v338 = GetProcessHeap();
                                                                                            v339 = HeapAlloc(
                                                                                                     v338,
                                                                                                     8u,
                                                                                                     v1569);
                                                                                            if ( !v339 )
                                                                                            {
                                                                                              v340 = v1604;
LABEL_429:
                                                                                              v345 = v1598;
                                                                                              v321 = -1073741801;
                                                                                              v1504 = (void *)v1598[1];
                                                                                              if ( v1504 )
                                                                                              {
                                                                                                v346 = GetProcessHeap();
                                                                                                HeapFree(v346, 0, v1504);
                                                                                                v345 = v1598;
                                                                                                v1598[1] = 0LL;
                                                                                              }
                                                                                              v1505 = (void *)v345[3];
                                                                                              if ( v1505 )
                                                                                              {
                                                                                                v347 = GetProcessHeap();
                                                                                                HeapFree(v347, 0, v1505);
                                                                                                v345 = v1598;
                                                                                                v1598[3] = 0LL;
                                                                                              }
                                                                                              v1506 = (void *)v345[5];
                                                                                              if ( v1506 )
                                                                                              {
                                                                                                v348 = GetProcessHeap();
                                                                                                HeapFree(v348, 0, v1506);
                                                                                                v1598[5] = 0LL;
                                                                                              }
                                                                                              v349 = GetProcessHeap();
                                                                                              HeapFree(v349, 0, v1598);
                                                                                              v337 = 0LL;
                                                                                              goto LABEL_440;
                                                                                            }
                                                                                            v1598[1] = v339;
                                                                                            memcpy_0(v339, v1503, v1569);
                                                                                            v340 = v1604;
                                                                                            v336 = v1598;
                                                                                            v1428 = (size_t)v104;
                                                                                            v1383 = v107;
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            v340 = v1604;
                                                                                            *(_DWORD *)v336 = 0;
                                                                                            v336[1] = 0LL;
                                                                                          }
                                                                                          v1598 = v336;
                                                                                          if ( v1618 )
                                                                                          {
                                                                                            *((_DWORD *)v336 + 4) = v1418;
                                                                                            v341 = GetProcessHeap();
                                                                                            v342 = HeapAlloc(
                                                                                                     v341,
                                                                                                     8u,
                                                                                                     v1418);
                                                                                            if ( !v342 )
                                                                                              goto LABEL_429;
                                                                                            v1598[3] = v342;
                                                                                            v321 = 0;
                                                                                            memcpy_0(v342, v1618, v1418);
                                                                                            v336 = v1598;
                                                                                            v1604 = v340;
                                                                                            v1428 = (size_t)v104;
                                                                                            v1383 = v107;
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            *((_DWORD *)v336 + 4) = 0;
                                                                                            v336[3] = 0LL;
                                                                                          }
                                                                                          if ( v1710 )
                                                                                          {
                                                                                            *((_DWORD *)v336 + 8) = v1404;
                                                                                            v343 = GetProcessHeap();
                                                                                            v344 = HeapAlloc(
                                                                                                     v343,
                                                                                                     8u,
                                                                                                     v1404);
                                                                                            if ( !v344 )
                                                                                              goto LABEL_429;
                                                                                            v1598[5] = v344;
                                                                                            v321 = 0;
                                                                                            memcpy_0(v344, v1710, v1404);
                                                                                            v336 = v1598;
                                                                                            v1604 = v340;
                                                                                            v1428 = (size_t)v104;
                                                                                            v1383 = v107;
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            *((_DWORD *)v336 + 8) = 0;
                                                                                            v336[5] = 0LL;
                                                                                          }
                                                                                          v337 = (unsigned int *)v336;
                                                                                          lpMemk = (unsigned int *)v336;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          v340 = v1604;
                                                                                          v321 = -1073741801;
                                                                                        }
LABEL_440:
                                                                                        if ( v321 < 0 )
                                                                                        {
                                                                                          v1619 = 0LL;
                                                                                          v320 = 0LL;
                                                                                          if ( v337 )
                                                                                          {
                                                                                            v1507 = (void *)*((_QWORD *)v337 + 1);
                                                                                            if ( v1507 )
                                                                                            {
                                                                                              v350 = GetProcessHeap();
                                                                                              HeapFree(v350, 0, v1507);
                                                                                              v337 = lpMemk;
                                                                                              *((_QWORD *)lpMemk + 1) = 0LL;
                                                                                            }
                                                                                            v1508 = (void *)*((_QWORD *)v337 + 3);
                                                                                            if ( v1508 )
                                                                                            {
                                                                                              v351 = GetProcessHeap();
                                                                                              HeapFree(v351, 0, v1508);
                                                                                              v337 = lpMemk;
                                                                                              *((_QWORD *)lpMemk + 3) = 0LL;
                                                                                            }
                                                                                            v1509 = (void *)*((_QWORD *)v337 + 5);
                                                                                            if ( v1509 )
                                                                                            {
                                                                                              v352 = GetProcessHeap();
                                                                                              HeapFree(v352, 0, v1509);
                                                                                              *((_QWORD *)lpMemk + 5) = 0LL;
                                                                                            }
                                                                                            v353 = GetProcessHeap();
                                                                                            HeapFree(v353, 0, lpMemk);
                                                                                            v320 = 0LL;
                                                                                            v1619 = 0LL;
                                                                                          }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          v320 = v337;
                                                                                          v1619 = v337;
                                                                                        }
                                                                                        goto LABEL_453;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  v320 = 0LL;
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                  v340 = v1604;
LABEL_453:
                                                                  v102 = v321 | 0x10000000;
                                                                  v1622 = v102;
                                                                  if ( v102 < 0 )
                                                                    goto LABEL_315;
                                                                  if ( v320 )
                                                                  {
                                                                    lpMeml = (unsigned __int8 *)*((_QWORD *)v320 + 1);
                                                                    if ( lpMeml )
                                                                    {
                                                                      if ( *v320 )
                                                                      {
                                                                        v354 = *v320 - 8LL;
                                                                        v1510 = v354;
                                                                        v355 = MemoryAlloc(v354);
                                                                        v1618 = v355;
                                                                        v356 = v355;
                                                                        if ( !v355 )
                                                                        {
LABEL_484:
                                                                          v1550 = 0LL;
                                                                          v102 = -805306367;
                                                                          goto LABEL_345;
                                                                        }
                                                                        v357 = lpMeml;
                                                                        v1819 = 0x7F1137FAB69605ELL;
                                                                        v358 = 0;
                                                                        v1599 = (SIZE_T)lpMeml;
                                                                        lpModuleNamea = (WCHAR *)v355;
                                                                        v1405 = 0LL;
                                                                        v359 = v354 & 7;
                                                                        if ( (v354 & 7) != 0 )
                                                                        {
                                                                          v1570 = 0;
                                                                          v360 = v1625;
                                                                          v361 = v1588;
                                                                          v362 = v1619;
                                                                          for ( k = v1625; ; v360 = k )
                                                                          {
                                                                            v363 = *v357;
                                                                            if ( (unsigned int)v1405 >= 4 )
                                                                            {
                                                                              v1570 |= v363 << v360;
                                                                              v364 = HIDWORD(v1405);
                                                                            }
                                                                            else
                                                                            {
                                                                              v364 = (v363 << (v360 - 32)) | HIDWORD(v1405);
                                                                              HIDWORD(v1405) = v364;
                                                                            }
                                                                            ++v357;
                                                                            k -= 8;
                                                                            LODWORD(v1405) = v1405 + 1;
                                                                            if ( (int)v1405 >= v359 )
                                                                              break;
                                                                          }
                                                                          v365 = v364 ^ 0x92F65A5;
                                                                          v366 = v364 ^ 0x92F65A5;
                                                                          v367 = v1570 ^ 0x699A899C;
                                                                          v1406 = 0;
                                                                          do
                                                                          {
                                                                            v1588 = v361;
                                                                            v1619 = v362;
                                                                            if ( v1406 >= 4 )
                                                                            {
                                                                              v367 = (v367 << 8) | HIBYTE(v367);
                                                                              v368 = v367;
                                                                            }
                                                                            else
                                                                            {
                                                                              v366 = (v366 << 8) | HIBYTE(v366);
                                                                              v368 = v366;
                                                                            }
                                                                            *(_BYTE *)lpModuleNamea = v368;
                                                                            v369 = (WCHAR *)((char *)lpModuleNamea + 1);
                                                                            v362 = v1619;
                                                                            ++v1406;
                                                                            lpModuleNamea = (WCHAR *)((char *)lpModuleNamea + 1);
                                                                          }
                                                                          while ( v1406 < v359 );
                                                                          v356 = v1618;
                                                                          v358 = 0;
                                                                          v1599 = (SIZE_T)v357;
                                                                          v1604 = v340;
                                                                          v1383 = v107;
                                                                          v1428 = (size_t)v104;
                                                                          lpModuleNamea = v369;
                                                                          if ( (unsigned int)v359 <= 4 )
                                                                          {
                                                                            LODWORD(v1405) = 0;
                                                                            if ( (unsigned int)v359 < 4 )
                                                                              v365 = v365 >> (8 * (4 - v359)) << (8 * (4 - v359));
                                                                          }
                                                                          else
                                                                          {
                                                                            LODWORD(v1405) = (v1570 ^ 0x699A899Cu) >> (8 * (8 - v359)) << (8 * (8 - v359));
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          v1570 = -1;
                                                                          v365 = 0;
                                                                          v362 = v1619;
                                                                        }
                                                                        if ( v1510 >> 3 )
                                                                        {
                                                                          v370 = HIDWORD(v1819);
                                                                          v371 = HIDWORD(v1819) ^ 0xAB69605E;
                                                                          v372 = v1405;
                                                                          v373 = HIDWORD(v1405);
                                                                          v374 = v1570;
                                                                          v375 = v1510 >> 3;
                                                                          v1541 = WORD2(v1819);
                                                                          lpModuleNameb = (WCHAR *)((char *)lpModuleNamea
                                                                                                  + 7);
                                                                          LODWORD(Size) = WORD1(v1819);
                                                                          v376 = (unsigned __int8 *)(v1599 + 2);
                                                                          v1622 = 24670;
                                                                          v1613 = HIDWORD(v1819) ^ 0xAB69605E;
                                                                          do
                                                                          {
                                                                            v377 = v376[1] | ((*v376 | ((*(v376 - 1) | (*(v376 - 2) << 8)) << 8)) << 8);
                                                                            v378 = v377 ^ v365;
                                                                            v1600 = (SIZE_T)(v376 + 8);
                                                                            v379 = v376[5] | ((v376[4] | ((v376[3] | (v376[2] << 8)) << 8)) << 8);
                                                                            v380 = v378 ^ v379 ^ v372 ^ v370 ^ 0xAB69605E;
                                                                            v381 = (__ROR4__(v380, 22)
                                                                                  + v1541
                                                                                  * __ROR4__(v380 + 1419157410, 27)) ^ v378;
                                                                            v382 = (WORD1(v1819)
                                                                                  * __ROR4__(v370 + v381, 9)
                                                                                  - __ROR4__(v381, 30)) ^ v380;
                                                                            v383 = (v1622 * (v382 - v1541) - (v382 >> 13)) ^ v381;
                                                                            v384 = (HIWORD(v1819)
                                                                                  * __ROR4__(WORD1(v1819) ^ v383, 26)
                                                                                  - __ROR4__(v383, 30)) ^ v382;
                                                                            v385 = (v370 - (v384 ^ 0xAB69605E)) ^ v383;
                                                                            v386 = (Size * (v1541 ^ v385)) ^ __ROR4__(v385, 6) ^ v384;
                                                                            v387 = (__ROR4__(v386, 30)
                                                                                  + v1622 * __ROR4__(v370 + v386, 15)) ^ v385;
                                                                            v388 = (HIWORD(v1819)
                                                                                  * __ROR4__(v387 + 1419157410, 14)
                                                                                  - __ROR4__(v387, 24)) ^ v386;
                                                                            v389 = __ROR4__(v388, 10) ^ (v1541 * __ROR4__(v388 ^ 0xAB69605E, 12)) ^ v387;
                                                                            v390 = (v389 >> 10) ^ (WORD1(v1819)
                                                                                                 * (HIWORD(v1819) ^ v389)) ^ v388;
                                                                            v391 = (HIWORD(v1819)
                                                                                  * (v1622 + __ROR4__(~v390, 5))) ^ v389;
                                                                            v392 = v390 ^ (v391 - HIWORD(v1819)) ^ 0xAB69605E;
                                                                            v393 = ((v392 >> 2)
                                                                                  + v1541
                                                                                  * __ROR4__(HIWORD(v1819) ^ v392, 30)) ^ v391;
                                                                            v394 = (__ROR4__(v393, 25)
                                                                                  + WORD1(v1819)
                                                                                  * __ROR4__(v393 - v370, 6)) ^ v392;
                                                                            v395 = (v1622 * (v1541 ^ v394)
                                                                                  + __ROR4__(v394, 9)) ^ v393;
                                                                            v396 = (__ROR4__(v395, 25)
                                                                                  + HIWORD(v1819)
                                                                                  * __ROR4__(WORD1(v1819) ^ v395, 27)) ^ v394;
                                                                            v397 = v396 ^ v371 ^ v395;
                                                                            v398 = (v1541
                                                                                  * (__ROR4__(v397, 3) - WORD1(v1819))) ^ v396;
                                                                            v399 = (v1622 * __ROR4__(v398 - v370, 1)
                                                                                  - __ROR4__(v398, 6)) ^ v397;
                                                                            v400 = (__ROR4__(v399, 18)
                                                                                  + HIWORD(v1819)
                                                                                  * __ROR4__(v399 - 1419157410, 29)) ^ v398;
                                                                            v401 = (v1541
                                                                                  * __ROR4__(v400 - 1419157410, 17)
                                                                                  - __ROR4__(v400, 14)) ^ v399;
                                                                            v402 = (v401 >> 3) ^ (WORD1(v1819)
                                                                                                * (v401 ^ v1622)) ^ v400;
                                                                            v403 = v402 ^ v370;
                                                                            v404 = __ROR4__(v402, 30);
                                                                            v372 = v374 ^ v402;
                                                                            v374 = v379;
                                                                            v365 = v373 ^ v404 ^ (v1622
                                                                                                * __ROR4__(v403, 28)) ^ v401;
                                                                            v405 = (WCHAR *)lpModuleNameb;
                                                                            lpModuleNameb += 4;
                                                                            *((_BYTE *)v405 - 4) = v365;
                                                                            *(_BYTE *)v405 = v372;
                                                                            *((_BYTE *)v405 - 5) = BYTE1(v365);
                                                                            *((_BYTE *)v405 - 1) = BYTE1(v372);
                                                                            v376 = (unsigned __int8 *)v1600;
                                                                            *((_BYTE *)v405 - 6) = (unsigned __int16)(v365 >> 8) >> 8;
                                                                            *((_BYTE *)v405 - 2) = (unsigned __int16)(v372 >> 8) >> 8;
                                                                            *((_BYTE *)v405 - 7) = __ROR4__(
                                                                                                     (((v365 >> 8) | (v365 << 24)) >> 8) | (((v365 >> 8) | (v365 << 24)) << 24),
                                                                                                     8);
                                                                            v371 = v1613;
                                                                            *((_BYTE *)v405 - 3) = __ROR4__(
                                                                                                     (((v372 >> 8) | (v372 << 24)) >> 8) | (((v372 >> 8) | (v372 << 24)) << 24),
                                                                                                     8);
                                                                            v373 = v377;
                                                                            --v375;
                                                                          }
                                                                          while ( v375 );
                                                                          v358 = 0;
                                                                          v104 = (_QWORD *)v1428;
                                                                          v107 = (WCHAR *)v1383;
                                                                          v362 = v1619;
                                                                          v356 = v1618;
                                                                        }
                                                                        for ( m = 0LL; m < v1510; ++m )
                                                                          v358 ^= *((_BYTE *)v356 + m);
                                                                        v1618 = v1617;
                                                                        v1429 = (size_t)v1604;
                                                                        v1619 = v362;
                                                                        if ( v358 != *(_QWORD *)&lpMeml[v1510] )
                                                                        {
                                                                          MemoryFree(v356);
                                                                          goto LABEL_484;
                                                                        }
                                                                        v1711 = v356;
                                                                        v1649 = 0;
                                                                        if ( (unsigned int)v1510 < 4 )
                                                                        {
                                                                          v281 = (size_t)v1588;
                                                                          v407 = -1073741762;
                                                                          v1617 = v1618;
                                                                          v1550 = (unsigned __int16 *)v356;
                                                                          v1619 = v362;
LABEL_491:
                                                                          v102 = v407 | 0x10000000;
                                                                          v1622 = v102;
                                                                          goto LABEL_316;
                                                                        }
                                                                        v1571 = *v356;
                                                                        v407 = RtlULongLongAdd(
                                                                                 (unsigned __int64)v356,
                                                                                 4LL,
                                                                                 (__int64 *)&v1711);
                                                                        v281 = (size_t)v1588;
                                                                        v1617 = v1618;
                                                                        v1550 = v408;
                                                                        v1619 = v409;
                                                                        if ( v407 < 0 )
                                                                          goto LABEL_491;
                                                                        v410 = RtlUIntAdd(0, 4, (int *)&v1649);
                                                                        v413 = v1588;
                                                                        v407 = v410;
                                                                        v414 = v1618;
                                                                        v1550 = v411;
                                                                        v281 = (size_t)v1588;
                                                                        v1619 = v412;
                                                                        v1617 = v1618;
                                                                        if ( v407 < 0 )
                                                                          goto LABEL_491;
                                                                        if ( (unsigned int)v1510 - v1649 < 4 )
                                                                        {
LABEL_490:
                                                                          v407 = -1073741762;
                                                                          v1619 = v412;
                                                                          v281 = (size_t)v413;
                                                                          v1550 = v411;
                                                                          v1588 = v413;
                                                                          v1617 = v414;
                                                                          goto LABEL_491;
                                                                        }
                                                                        v1419 = *(_DWORD *)v1711;
                                                                        v407 = RtlULongLongAdd(
                                                                                 (unsigned __int64)v1711,
                                                                                 4LL,
                                                                                 (__int64 *)&v1711);
                                                                        v281 = (size_t)v1588;
                                                                        v1550 = v415;
                                                                        v1619 = v416;
                                                                        v1617 = v1618;
                                                                        if ( v407 < 0 )
                                                                          goto LABEL_491;
                                                                        v417 = RtlUIntAdd(v1649, 4, (int *)&v1649);
                                                                        v413 = v1588;
                                                                        v407 = v417;
                                                                        v414 = v1618;
                                                                        v1550 = v411;
                                                                        v281 = (size_t)v1588;
                                                                        v1619 = v412;
                                                                        v1617 = v1618;
                                                                        if ( v407 < 0 )
                                                                          goto LABEL_491;
                                                                        if ( (unsigned int)v1510 - v1649 < v1419 )
                                                                        {
                                                                          v104 = v418;
                                                                          goto LABEL_490;
                                                                        }
                                                                        v407 = RtlUIntAdd(v1649, v1419, (int *)&v1649);
                                                                        v281 = (size_t)v1588;
                                                                        v104 = v421;
                                                                        v1550 = v419;
                                                                        v1619 = v420;
                                                                        v1617 = v1618;
                                                                        if ( v407 < 0 )
                                                                          goto LABEL_491;
                                                                        if ( (char *)v419 + (unsigned int)v1510 < (char *)v1711 + v1419
                                                                          || (unsigned __int64)(unsigned int)v1510
                                                                           + (char *)v419
                                                                           - v1419
                                                                           - (_BYTE *)v1711 >= 8 )
                                                                        {
                                                                          v407 = -1073741762;
                                                                          v281 = (size_t)v1588;
                                                                          v1617 = v1618;
                                                                          v1550 = v419;
                                                                          v1619 = v420;
                                                                          goto LABEL_491;
                                                                        }
                                                                        v407 = 0;
                                                                        v1617 = v1618;
                                                                        v1712 = 0LL;
                                                                        v1713 = 0LL;
                                                                        v1714 = 0LL;
                                                                        v1407 = 0;
                                                                        v1550 = v419;
                                                                        v1619 = v420;
                                                                        if ( v1711 )
                                                                        {
                                                                          v1511 = v1711;
                                                                          v407 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v1711,
                                                                                   v1419,
                                                                                   (__int64 *)&v1712);
                                                                          v281 = (size_t)v1588;
                                                                          v1550 = v422;
                                                                          v1619 = v423;
                                                                          v1617 = v1618;
                                                                          if ( v407 < 0 )
                                                                            goto LABEL_524;
                                                                          v1617 = v1618;
                                                                          v424 = (unsigned __int64)v1511;
                                                                          v1550 = v422;
                                                                          v1619 = v423;
                                                                          if ( (unsigned __int64)v1511 < v1712 )
                                                                          {
                                                                            v1550 = v422;
                                                                            v1617 = v1618;
                                                                            v425 = (unsigned __int64)v1511;
                                                                            v1619 = v423;
                                                                            while ( 1 )
                                                                            {
                                                                              v1512 = v281;
                                                                              v407 = RtlULongLongAdd(
                                                                                       v425,
                                                                                       4LL,
                                                                                       (__int64 *)&v1713);
                                                                              if ( v407 < 0 )
                                                                                goto LABEL_524;
                                                                              if ( v1713 > v1712 )
                                                                              {
                                                                                v407 = -1073741811;
LABEL_512:
                                                                                v281 = (size_t)v1588;
                                                                                goto LABEL_491;
                                                                              }
                                                                              v427 = *v426;
                                                                              v1650 = 0;
                                                                              v407 = RtlUIntAdd(4u, v427, (int *)&v1650);
                                                                              if ( v407 < 0 )
                                                                                goto LABEL_512;
                                                                              v407 = RtlULongLongAdd(
                                                                                       v428,
                                                                                       v1650,
                                                                                       (__int64 *)&v1714);
                                                                              v1619 = v430;
                                                                              v1604 = (_DWORD *)v1429;
                                                                              v1588 = (unsigned __int8 *)v1512;
                                                                              v1617 = v429;
                                                                              if ( v407 < 0 )
                                                                                goto LABEL_524;
                                                                              v425 = v1714;
                                                                              v281 = v1512;
                                                                              v431 = v1712;
                                                                              v1619 = v430;
                                                                              v1617 = v429;
                                                                              if ( v1714 > v1712 )
                                                                              {
                                                                                v407 = -1073741811;
                                                                                v1604 = (_DWORD *)v1429;
                                                                                v1588 = (unsigned __int8 *)v1512;
                                                                                goto LABEL_491;
                                                                              }
                                                                              ++v1407;
                                                                              v1604 = (_DWORD *)v1429;
                                                                              v1588 = (unsigned __int8 *)v1512;
                                                                              if ( v1714 >= v1712 )
                                                                              {
                                                                                v281 = v1512;
                                                                                v1604 = (_DWORD *)v1429;
                                                                                v424 = v1714;
                                                                                v1619 = v430;
                                                                                v1588 = (unsigned __int8 *)v1512;
                                                                                v1617 = v429;
                                                                                goto LABEL_514;
                                                                              }
                                                                            }
                                                                          }
                                                                          v431 = v1712;
LABEL_514:
                                                                          if ( v424 != v431 )
                                                                          {
                                                                            v407 = -1073741811;
                                                                            goto LABEL_491;
                                                                          }
                                                                        }
                                                                        v432 = v1419;
                                                                        if ( !v1419 )
                                                                        {
                                                                          v434 = 0LL;
                                                                          goto LABEL_521;
                                                                        }
                                                                        v433 = GetProcessHeap();
                                                                        v434 = HeapAlloc(v433, 8u, v1419);
                                                                        if ( v434 )
                                                                        {
                                                                          v432 = v1419;
                                                                          v407 = 0;
LABEL_521:
                                                                          if ( v1711 )
                                                                            memcpy_0(v434, v1711, v432);
                                                                          LODWORD(v1760) = v1407;
                                                                          *((_QWORD *)&v1760 + 1) = v434;
                                                                          goto LABEL_524;
                                                                        }
                                                                        v407 = -1073741801;
LABEL_524:
                                                                        if ( v407 < 0 )
                                                                        {
                                                                          v281 = (size_t)v1588;
                                                                        }
                                                                        else
                                                                        {
                                                                          v281 = (size_t)v1588;
                                                                          if ( v1571 != (_DWORD)v1760 )
                                                                            v407 = -1073741762;
                                                                        }
                                                                        goto LABEL_491;
                                                                      }
                                                                    }
                                                                  }
                                                                  v102 = -805306355;
LABEL_345:
                                                                  v1622 = v102;
                                                                }
                                                              }
LABEL_315:
                                                              v281 = (size_t)v1588;
                                                              goto LABEL_316;
                                                            }
                                                            v1613 = v1566;
                                                            v1588 = lpMema;
                                                          }
                                                        }
                                                        v255 = -1073741801;
                                                        lpMemb = (void *)*((_QWORD *)v247 + 1);
                                                        if ( lpMemb )
                                                        {
                                                          v256 = GetProcessHeap();
                                                          HeapFree(v256, 0, lpMemb);
                                                          *((_QWORD *)v247 + 1) = 0LL;
                                                        }
                                                        lpMemc = (void *)*((_QWORD *)v247 + 3);
                                                        if ( lpMemc )
                                                        {
                                                          v257 = GetProcessHeap();
                                                          HeapFree(v257, 0, lpMemc);
                                                          *((_QWORD *)v247 + 3) = 0LL;
                                                        }
                                                        lpMemd = (void *)*((_QWORD *)v247 + 5);
                                                        if ( lpMemd )
                                                        {
                                                          v258 = GetProcessHeap();
                                                          HeapFree(v258, 0, lpMemd);
                                                          *((_QWORD *)v247 + 5) = 0LL;
                                                        }
                                                        v259 = GetProcessHeap();
                                                        HeapFree(v259, 0, v247);
                                                      }
                                                      else
                                                      {
                                                        v255 = -1073741801;
                                                      }
                                                      v247 = 0LL;
                                                      goto LABEL_294;
                                                    }
                                                    v185 = (v1642 + 7) & 0xFFFFFFF8;
                                                    if ( v185 < v1642 )
                                                    {
                                                      v102 = -805306219;
LABEL_542:
                                                      v1622 = v102;
                                                      goto LABEL_543;
                                                    }
                                                    v1642 = (v1642 + 7) & 0xFFFFFFF8;
                                                    v186 = v185;
                                                    v187 = GetProcessHeap();
                                                    v188 = (char *)HeapAlloc(v187, 8u, v186);
                                                    v189 = v188;
                                                    if ( v188 )
                                                    {
                                                      *(_DWORD *)v188 = Src[0];
                                                      v1703 = v188;
                                                      v184 = RtlULongLongAdd(
                                                               (unsigned __int64)v188,
                                                               4LL,
                                                               (__int64 *)&v1703);
                                                      if ( v184 >= 0 )
                                                      {
                                                        v191 = v1703;
                                                        *(_DWORD *)v1703 = HIDWORD(Src[0]);
                                                        v184 = RtlULongLongAdd(
                                                                 (unsigned __int64)v191,
                                                                 v190,
                                                                 (__int64 *)&v1703);
                                                        if ( v184 >= 0 )
                                                        {
                                                          *(_QWORD *)&v189[v1642 - 8] = v1563;
                                                          memcpy_0(v1703, Src[1], HIDWORD(Src[0]));
                                                          v183 = v1642;
                                                          v1539 = v1642;
                                                          v1588 = (unsigned __int8 *)v189;
LABEL_251:
                                                          v133 = (int)v1621;
                                                          v1427 = (size_t)v104;
                                                          v1382 = v107;
                                                          goto LABEL_252;
                                                        }
                                                      }
                                                      v192 = GetProcessHeap();
                                                      HeapFree(v192, 0, v189);
                                                    }
                                                    else
                                                    {
                                                      v184 = -1073741801;
                                                    }
                                                    v183 = 0;
                                                    goto LABEL_251;
                                                  }
LABEL_240:
                                                  v99 = v178;
                                                  goto LABEL_598;
                                                }
                                              }
                                            }
                                          }
LABEL_543:
                                          v99 = v133;
                                          goto LABEL_598;
                                        }
                                      }
                                      v99 = v133;
                                      goto LABEL_598;
                                    }
                                  }
                                  else
                                  {
                                    v1628 = 0;
                                    v1622 = RtlUIntAdd(v145, 8, &v1628);
                                    v102 = v1622;
                                    if ( v1622 < 0 )
                                      goto LABEL_543;
                                    v102 = RtlUIntAdd(HIDWORD(Src[0]), v1628, (int *)Src + 1);
                                    v1622 = v102;
                                    if ( v102 >= 0 )
                                    {
                                      ++LODWORD(Src[0]);
                                      goto LABEL_181;
                                    }
                                  }
                                  v99 = v133;
                                  goto LABEL_598;
                                }
LABEL_184:
                                v99 = (int)v1621;
                                goto LABEL_598;
                              }
                              v147 = (int *)Src[1];
                              v1697 = (int *)Src[1];
                              v1535 = 0;
                              if ( v137 )
                              {
                                while ( 1 )
                                {
                                  v148 = *v147;
                                  v1627 = 0;
                                  v1622 = RtlUIntAdd(4u, v148, (int *)&v1627);
                                  v102 = v1622;
                                  if ( v1622 < 0 )
                                    goto LABEL_184;
                                  v1622 = RtlULongLongAdd(v149, v1627, (__int64 *)&v1697);
                                  v102 = v1622;
                                  if ( v1622 < 0 )
                                    goto LABEL_184;
                                  v147 = v1697;
                                  if ( ++v1535 >= v150 )
                                  {
                                    v1427 = (size_t)v104;
                                    v1382 = v107;
                                    break;
                                  }
                                }
                              }
                              v102 = RtlULongLongAdd((unsigned __int64)v147, 4LL, (__int64 *)v1764);
                              v1622 = v102;
                              if ( v102 < 0 )
                                goto LABEL_167;
                              if ( (char *)v151 + v143 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
                              {
                                *v151 = v143;
                                memcpy_0(v1764[0], v104, v143);
                                v145 = 4LL;
                                v146 = (int)Src[0];
                                goto LABEL_157;
                              }
                              v102 = -1073741789;
                            }
                            else
                            {
                              v102 = -1073741811;
                            }
LABEL_183:
                            v1622 = v102;
                            goto LABEL_184;
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
LABEL_598:
  v101 = 0LL;
  Src[0] = 0LL;
  lpMemn = Src[1];
  if ( Src[1] )
  {
    v470 = GetProcessHeap();
    HeapFree(v470, 0, lpMemn);
    v101 = 0LL;
    Src[1] = 0LL;
  }
  *(_QWORD *)&v1760 = 0LL;
  lpMemo = (void *)*((_QWORD *)&v1760 + 1);
  if ( *((_QWORD *)&v1760 + 1) )
  {
    v471 = GetProcessHeap();
    HeapFree(v471, 0, lpMemo);
    v101 = 0LL;
    *((_QWORD *)&v1760 + 1) = 0LL;
  }
  if ( v107 )
  {
    v472 = GetProcessHeap();
    HeapFree(v472, 0, v107);
    v101 = 0LL;
  }
  if ( v104 )
  {
    v473 = GetProcessHeap();
    HeapFree(v473, 0, v104);
    v101 = 0LL;
  }
  if ( v102 >= 0 )
  {
    if ( !v99 )
    {
LABEL_1589:
      v103 = v1654;
      v1705 = v1616;
      v1612 = (SIZE_T)v101;
      goto LABEL_1591;
    }
    dword_180899E48 = v99;
    v1721 = 0LL;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    {
LABEL_1231:
      SH<void *,SH_HANDLE>::Reset(&v1721);
      *(_OWORD *)v1761 = 0LL;
      v1039 = 0LL;
      *(_OWORD *)v1769 = 0LL;
      v1040 = GetProcessHeap();
      v1041 = HeapAlloc(v1040, 8u, 0xA0uLL);
      v101 = 0LL;
      v1042 = v1041;
      if ( !v1041 )
      {
        v1042 = 0LL;
        goto LABEL_1581;
      }
      *v1041 = xmmword_180897FA0[0];
      v1041[1] = xmmword_180897FA0[1];
      v1041[2] = xmmword_180897FA0[2];
      v1041[3] = xmmword_180897FA0[3];
      v1041[4] = xmmword_180897FA0[4];
      v1041[5] = xmmword_180897FA0[5];
      v1041[6] = xmmword_180897FA0[6];
      v1041[7] = xmmword_180897FA0[7];
      v1041[8] = xmmword_180897FA0[8];
      v1041[9] = xmmword_180897FA0[9];
      v1043 = GetProcessHeap();
      v1044 = (WCHAR *)HeapAlloc(v1043, 8u, 8uLL);
      v101 = 0LL;
      v1039 = v1044;
      if ( !v1044 )
      {
        v1039 = 0LL;
        goto LABEL_1581;
      }
      *(_QWORD *)v1044 = qword_180897F90;
      v1623 = (LPVOID)__rdtsc();
      dwBytes_4 = 0;
      v1661 = 0;
      if ( (int)RtlUIntAdd(4u, 4, &v1661) < 0 )
        goto LABEL_1581;
      if ( (int)RtlUIntAdd(0, v1661, (int *)&dwBytes_4) < 0 )
        goto LABEL_1581;
      v1662 = (int)v101;
      if ( (int)RtlUIntAdd(v1045, 160, &v1662) < 0 )
        goto LABEL_1581;
      v1046 = RtlUIntAdd(dwBytes_4, v1662, (int *)&dwBytes_4);
      if ( (v1048 | v1046) < 0 )
        goto LABEL_1581;
      v1663 = (int)v101;
      if ( (int)RtlUIntAdd(v1047, 8, &v1663) < 0 )
        goto LABEL_1581;
      v1049 = RtlUIntAdd(dwBytes_4, v1663, (int *)&dwBytes_4);
      if ( (v1051 | v1049) < 0 )
        goto LABEL_1581;
      v1664 = (int)v101;
      if ( (int)RtlUIntAdd(v1050, 8, &v1664) < 0 )
        goto LABEL_1581;
      v1052 = RtlUIntAdd(dwBytes_4, v1664, (int *)&dwBytes_4);
      if ( (v1053 | v1052) < 0 )
        goto LABEL_1581;
      HIDWORD(v1761[0]) = dwBytes_4;
      v1054 = dwBytes_4;
      v1055 = GetProcessHeap();
      v1056 = HeapAlloc(v1055, 8u, v1054);
      v101 = 0LL;
      if ( !v1056 )
        goto LABEL_1581;
      v1761[1] = (size_t)v1056;
      LODWORD(v1755[0]) = 0;
      v1754[1] = 0LL;
      LODWORD(v1761[0]) = 0;
      v1492 = v1042;
      v1738 = v1056;
      v1615 = v1039;
      v1057 = RtlULongLongAdd((unsigned __int64)v1056, 4LL, v1755);
      if ( v1057 < 0 || v1059 + 2 > (_DWORD *)((char *)v1059 + HIDWORD(v1761[0])) )
        goto LABEL_1581;
      v1060 = (_DWORD *)v1755[0];
      *v1059 = 4;
      *v1060 = 4;
      v1061 = ++LODWORD(v1761[0]);
      LODWORD(v1756[0]) = 0;
      v1755[1] = 0LL;
      if ( v1042 )
      {
        if ( !v1058 )
          goto LABEL_1581;
      }
      else if ( v1058 )
      {
        goto LABEL_1581;
      }
      if ( (void *)v1761[1] == v101 )
      {
        v1665 = (int)v101;
        if ( (int)RtlUIntAdd(4u, v1058, &v1665) < 0 || (int)RtlUIntAdd(HIDWORD(v1761[0]), v1665, (int *)v1761 + 1) < 0 )
          goto LABEL_1581;
      }
      else
      {
        v1063 = (int *)v1761[1];
        v1739 = v1761[1];
        v1440 = 0;
        if ( v1061 )
        {
          do
          {
            v1064 = *v1063;
            v1666 = 0;
            if ( (int)RtlUIntAdd(4u, v1064, (int *)&v1666) < 0 )
              goto LABEL_1580;
            v1066 = RtlULongLongAdd(v1065, v1666, (__int64 *)&v1739);
            v101 = 0LL;
            if ( v1066 < 0 )
              goto LABEL_1581;
            v1063 = (int *)v1739;
            ++v1440;
            v1615 = v1039;
            v1492 = v1042;
          }
          while ( v1440 < v1067 );
        }
        if ( (int)RtlULongLongAdd((unsigned __int64)v1063, 4LL, (__int64 *)v1756) < 0
          || (unsigned __int64)v1069 + v1068 + 4 > v1761[1] + HIDWORD(v1761[0]) )
        {
LABEL_1580:
          v101 = 0LL;
          goto LABEL_1581;
        }
        *v1069 = v1068;
        v101 = 0LL;
        if ( v1042 )
        {
          memcpy_0(v1756[0], v1042, v1068);
          v101 = 0LL;
          v1062 = 4;
        }
      }
      v1070 = LODWORD(v1761[0]) + 1;
      LODWORD(v1758) = 0;
      ++LODWORD(v1761[0]);
      v1757[1] = 0LL;
      if ( !v1039 )
        goto LABEL_1581;
      if ( (void *)v1761[1] == v101 )
      {
        v1667 = (int)v101;
        if ( (int)RtlUIntAdd(v1062, 8, &v1667) < 0 || (int)RtlUIntAdd(HIDWORD(v1761[0]), v1667, (int *)v1761 + 1) < 0 )
          goto LABEL_1581;
LABEL_1275:
        v1079 = LODWORD(v1761[0]) + 1;
        LODWORD(v1757[0]) = 0;
        ++LODWORD(v1761[0]);
        v1756[1] = 0LL;
        if ( (void *)v1761[1] == v101 )
        {
          v1669 = (int)v101;
          if ( (int)RtlUIntAdd(v1071, 8, &v1669) < 0 || (int)RtlUIntAdd(HIDWORD(v1761[0]), v1669, (int *)v1761 + 1) < 0 )
            goto LABEL_1581;
        }
        else
        {
          v1081 = (int *)v1761[1];
          v1741 = v1761[1];
          if ( v1079 )
          {
            do
            {
              v1082 = *v1081;
              v1670 = (unsigned int)v101;
              if ( (int)RtlUIntAdd(4u, v1082, (int *)&v1670) < 0
                || (int)RtlULongLongAdd(v1083, v1670, (__int64 *)&v1741) < 0 )
              {
                goto LABEL_1581;
              }
              v1081 = (int *)v1741;
              v1615 = v1039;
              v1492 = v1042;
            }
            while ( v1084 + 1 < v1079 );
          }
          if ( (int)RtlULongLongAdd((unsigned __int64)v1081, 4LL, v1757) < 0
            || (unsigned __int64)(v1085 + 3) > v1761[1] + HIDWORD(v1761[0]) )
          {
            goto LABEL_1581;
          }
          v1086 = (_QWORD *)v1757[0];
          v1087 = v1623;
          *v1085 = 8;
          *v1086 = v1087;
        }
        ++LODWORD(v1761[0]);
        v1671 = (unsigned int)v101;
        if ( (int)RtlUIntAdd(v1080, v1080, (int *)&v1671) < 0 )
          goto LABEL_1581;
        v1089 = v1671;
        v1672 = v1671;
        v1673 = (int)v101;
        if ( (int)RtlUIntAdd(v1088, 8, &v1673) < 0 || (int)RtlUIntAdd(v1089, v1673, (int *)&v1672) < 0 )
          goto LABEL_1581;
        v1623 = v101;
        v1441 = (unsigned int)v101;
        lpMemq = v101;
        v1514 = v101;
        v1618 = v101;
        v1602 = (SIZE_T *)v101;
        lpModuleNames = 0LL;
        v1395 = v1672;
        v1559 = (unsigned __int16 *)__rdtsc();
        v1674 = 8;
        v1090 = RtlUIntAdd(8u, SHIDWORD(v1761[0]), (int *)&v1674);
        if ( v1090 < 0 )
        {
LABEL_1299:
          v1103 = v1090 | 0x10000000;
          if ( v1103 < 0 )
          {
LABEL_1374:
            v1196 = v1623;
            goto LABEL_1375;
          }
          v1104 = (unsigned __int8 *)v1623;
          v1560 = (unsigned __int16 *)v101;
          if ( v1623 )
          {
            if ( !v1091 || (v1612 = v1091 + 8LL, (v1549 = MemoryAlloc(v1612)) == 0LL) )
            {
              v1196 = v1623;
              v1103 = -805306367;
LABEL_1376:
              v1197 = GetProcessHeap();
              HeapFree(v1197, 0, v1196);
              v101 = 0LL;
LABEL_1377:
              if ( lpMemq )
              {
                v1198 = (void *)lpMemq[1];
                if ( v1198 )
                {
                  v1199 = GetProcessHeap();
                  HeapFree(v1199, 0, v1198);
                  lpMemq[1] = 0LL;
                }
                v1200 = (void *)lpMemq[3];
                if ( v1200 )
                {
                  v1201 = GetProcessHeap();
                  HeapFree(v1201, 0, v1200);
                  lpMemq[3] = 0LL;
                }
                v1202 = (void *)lpMemq[5];
                if ( v1202 )
                {
                  v1203 = GetProcessHeap();
                  HeapFree(v1203, 0, v1202);
                  lpMemq[5] = 0LL;
                }
                v1204 = GetProcessHeap();
                HeapFree(v1204, 0, lpMemq);
                v101 = 0LL;
              }
              if ( v1514 )
              {
                v1205 = GetProcessHeap();
                HeapFree(v1205, 0, v1514);
                v101 = 0LL;
              }
              v1206 = v1618;
              if ( v1618 )
              {
                v1207 = GetProcessHeap();
                HeapFree(v1207, 0, v1206);
                v101 = 0LL;
              }
              if ( v1602 )
              {
                v1208 = (void *)v1602[1];
                if ( v1208 )
                {
                  v1209 = GetProcessHeap();
                  HeapFree(v1209, 0, v1208);
                  v1602[1] = 0LL;
                }
                v1210 = (void *)v1602[3];
                if ( v1210 )
                {
                  v1211 = GetProcessHeap();
                  HeapFree(v1211, 0, v1210);
                  v1602[3] = 0LL;
                }
                v1212 = (void *)v1602[5];
                if ( v1212 )
                {
                  v1213 = GetProcessHeap();
                  HeapFree(v1213, 0, v1212);
                  v1602[5] = 0LL;
                }
                v1214 = GetProcessHeap();
                HeapFree(v1214, 0, v1602);
                v101 = 0LL;
              }
              if ( lpModuleNames )
              {
                v1215 = GetProcessHeap();
                HeapFree(v1215, 0, lpModuleNames);
                v101 = 0LL;
              }
              if ( v1103 >= 0 )
              {
                if ( LODWORD(v1769[0]) )
                {
                  v1216 = v1769[1];
                  if ( v1769[1] )
                  {
                    v1752 = v1769[1];
                    if ( (int)RtlULongLongAdd((unsigned __int64)v1769[1], 4LL, (__int64 *)&v1752) >= 0 )
                    {
                      v1219 = v1752;
                      if ( *v1216 == (_DWORD)v101 )
                        v1219 = v101;
                      v1752 = v1219;
                      if ( *v1216 == (_DWORD)v1218 && *v1219 >= (int)v101 && v1216 && v1217 > 1 )
                      {
                        for ( v1753[0] = (__int64)v1216;
                              (int)RtlULongLongAdd((unsigned __int64)v1216, v1218, v1753) >= 0
                           && (int)RtlULongLongAdd(v1753[0], (unsigned int)*v1216, v1753) >= 0;
                              v1216 = (_DWORD *)v1753[0] )
                        {
                          if ( v1220 != -1 )
                          {
                            RtlULongLongAdd(v1753[0], v1218, v1753);
                            goto LABEL_1581;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LABEL_1581;
            }
            v1105 = 0LL;
            v1381 = 0;
            if ( v1441 )
            {
              v1106 = 0;
              do
                v1106 ^= v1104[v1105++];
              while ( v1105 < v1441 );
              v1381 = v1106;
            }
            v1107 = 0;
            v1108 = v1549;
            v1821 = 0xC81ECB17B1B54A58uLL;
            v1109 = 0;
            v1609 = 0;
            v1110 = -1;
            LODWORD(v1617) = 0;
            v1111 = v1104;
            v1112 = v1441 & 7;
            if ( (v1441 & 7) != 0 )
            {
              v1113 = 0;
              v1114 = 0;
              v1610 = 0;
              v1115 = v1625;
              do
              {
                v1116 = *v1111;
                if ( v1113 >= 4 )
                  v1107 |= v1116 << v1115;
                else
                  v1114 |= v1116 << (v1115 - 32);
                ++v1111;
                v1113 = v1610 + 1;
                v1115 -= 8;
                v1610 = v1113;
              }
              while ( (int)v1113 < v1112 );
              v1117 = v1549;
              v1109 = v1114 ^ 0xB17A307A;
              v1118 = v1107 ^ 0x42F6B18D;
              v1119 = v1114 ^ 0xB17A307A;
              v1120 = 0;
              v1121 = v1107 ^ 0x42F6B18D;
              LODWORD(v1617) = 0;
              do
              {
                v1609 = v1107;
                if ( v1120 >= 4 )
                {
                  v1121 = (v1121 << 8) | HIBYTE(v1121);
                  v1122 = v1121;
                }
                else
                {
                  v1119 = (v1119 << 8) | HIBYTE(v1119);
                  v1122 = v1119;
                }
                *v1117 = v1122;
                v1107 = v1609;
                ++v1117;
                v1120 = (_DWORD)v1617 + 1;
                LODWORD(v1617) = v1120;
              }
              while ( v1120 < v1112 );
              LODWORD(v1617) = v1114;
              v1108 = v1117;
              v1623 = v1104;
              v102 = v1622;
              v1492 = v1042;
              v1615 = v1039;
              if ( (unsigned int)v1112 <= 4 )
              {
                v1110 = 0;
                if ( (unsigned int)v1112 < 4 )
                  v1109 = v1109 >> (8 * (4 - v1112)) << (8 * (4 - v1112));
              }
              else
              {
                v1110 = v1118 >> (8 * (8 - v1112)) << (8 * (8 - v1112));
              }
            }
            Size = (unsigned __int64)v1441 >> 3;
            if ( Size )
            {
              v1123 = HIDWORD(v1821);
              v1124 = v1111 + 2;
              v1125 = (int)v1617;
              v1126 = v1609;
              v1127 = HIDWORD(v1821) ^ 0xB1B54A58;
              v1128 = Size;
              LODWORD(v1619) = WORD1(v1821);
              v1579 = WORD2(v1821);
              v1426 = HIWORD(v1821);
              v1621 = v1108 + 7;
              do
              {
                v1129 = v1124[1] | ((*v1124 | ((*(v1124 - 1) | (*(v1124 - 2) << 8)) << 8)) << 8);
                v1130 = v1124[5] | ((v1124[4] | ((v1124[3] | (v1124[2] << 8)) << 8)) << 8);
                v1131 = v1130 ^ v1110;
                v1132 = v1129 ^ v1123 ^ (v1131 - 19032) ^ v1109;
                v1133 = (__ROR4__(v1132, 7) + WORD1(v1821) * __ROR4__(v1132 ^ v1123, 15)) ^ v1131;
                v1134 = (v1579 * __ROR4__(v1133 - 1313519016, 9) - __ROR4__(v1133, 10)) ^ v1132;
                v1135 = (__ROR4__(v1134, 27) + HIWORD(v1821) * __ROR4__(v1134 ^ v1579, 28)) ^ v1133;
                v1136 = (v1123 - (v1135 ^ 0xB1B54A58)) ^ v1134;
                v1137 = (WORD1(v1821) * (v1136 - 19032) - (v1136 >> 6)) ^ v1135;
                v1138 = (19032 * (v1579 ^ __ROR4__(v1137, 15))) ^ v1136;
                v1139 = (v1579 * (v1426 + __ROR4__(~v1138, 3))) ^ v1137;
                v1140 = (v1139 - v1123 - 19032) ^ v1138;
                v1141 = ((_DWORD)v1619 * (v1140 ^ HIWORD(v1821))) ^ __ROR4__(v1140, 10) ^ v1139;
                v1142 = __ROR4__(v1141, 3) ^ (v1579 * __ROR4__(v1141 ^ 0x4A58, 26)) ^ v1140;
                v1143 = (19032 * (__ROR4__(v1142, 15) - HIWORD(v1821))) ^ v1141;
                v1144 = (v1143 >> 15) ^ (19032 * ((8 * (v1143 - v1579)) | ((v1143 - v1579) >> 29))) ^ (v1143 >> 1) ^ (19032 * (v1143 ^ HIWORD(v1821))) ^ v1142;
                v1145 = (WORD1(v1821) * (v1144 - v1579) - (v1144 >> 13)) ^ v1143;
                v1146 = __ROR4__(v1145, 11) ^ (v1579 * __ROR4__(-1313519016 - v1145, 9)) ^ v1144;
                v1147 = (v1146 - HIWORD(v1821) + 1313519016) ^ v1145;
                v1148 = (19032 * (v1147 ^ WORD1(v1821)) - __ROR4__(v1147, 7)) ^ v1146;
                v1149 = (WORD1(v1821) * __ROR4__(v1148 ^ HIWORD(v1821), 28) - __ROR4__(v1148, 16)) ^ v1147;
                v1150 = (__ROR4__(v1149, 4) + v1579 * __ROR4__(-1313519016 - v1149, 10)) ^ v1148;
                v1151 = __ROR4__(v1150, 9) ^ (HIWORD(v1821) * __ROR4__(v1150 + 1313519016, 4)) ^ v1149;
                v1152 = (19032 * __ROR4__(v1123 ^ v1151, 24) - __ROR4__(v1151, 30)) ^ v1150;
                v1153 = (WORD1(v1821) * __ROR4__(v1123 - v1152, 11) - __ROR4__(v1152, 12)) ^ v1151;
                v1154 = (v1153 >> 8) ^ (v1579 * (v1153 ^ WORD1(v1821))) ^ v1152;
                v1155 = v1154 ^ v1127 ^ v1153;
                v1109 = v1125 ^ v1154;
                v1156 = v1621;
                v1110 = v1126 ^ v1155;
                v1621 += 8;
                *(v1156 - 4) = v1109;
                *v1156 = v1110;
                *(v1156 - 5) = BYTE1(v1109);
                v1126 = v1130;
                *(v1156 - 1) = BYTE1(v1110);
                v1124 += 8;
                *(v1156 - 6) = (unsigned __int16)(v1109 >> 8) >> 8;
                *(v1156 - 2) = (unsigned __int16)(v1110 >> 8) >> 8;
                *(v1156 - 7) = __ROR4__(
                                 (((v1109 >> 8) | (v1109 << 24)) >> 8) | (((v1109 >> 8) | (v1109 << 24)) << 24),
                                 8);
                v1123 = HIDWORD(v1821);
                *(v1156 - 3) = __ROR4__(
                                 (((v1110 >> 8) | (v1110 << 24)) >> 8) | (((v1110 >> 8) | (v1110 << 24)) << 24),
                                 8);
                v1125 = v1129;
                --v1128;
              }
              while ( v1128 );
              v102 = v1622;
              v1039 = (WCHAR *)v1615;
              v1042 = v1492;
              v1104 = (unsigned __int8 *)v1623;
            }
            *(_QWORD *)&v1549[v1441] = v1381;
            v1157 = GetProcessHeap();
            v1158 = (unsigned int *)HeapAlloc(v1157, 8u, 0x30uLL);
            if ( v1158 )
            {
              *v1158 = v1612;
              v1159 = GetProcessHeap();
              v1160 = HeapAlloc(v1159, 8u, (unsigned int)v1612);
              if ( v1160 )
              {
                *((_QWORD *)v1158 + 1) = v1160;
                memcpy_0(v1160, v1549, (unsigned int)v1612);
                v1623 = v1104;
                v1494 = v1104;
                v1158[4] = 160;
                v1161 = GetProcessHeap();
                v1162 = HeapAlloc(v1161, 8u, 0xA0uLL);
                if ( v1162 )
                {
                  *((_QWORD *)v1158 + 3) = v1162;
                  v1623 = v1104;
                  *v1162 = xmmword_180897EF0[0];
                  v1162[1] = xmmword_180897EF0[1];
                  v1162[2] = xmmword_180897EF0[2];
                  v1162[3] = xmmword_180897EF0[3];
                  v1162[4] = xmmword_180897EF0[4];
                  v1162[5] = xmmword_180897EF0[5];
                  v1162[6] = xmmword_180897EF0[6];
                  v1162[7] = xmmword_180897EF0[7];
                  v1162[8] = xmmword_180897EF0[8];
                  v1162[9] = xmmword_180897EF0[9];
                  v1158[8] = 8;
                  v1163 = GetProcessHeap();
                  v1164 = HeapAlloc(v1163, 8u, 8uLL);
                  v1165 = 0;
                  if ( v1164 )
                  {
                    *((_QWORD *)v1158 + 5) = v1164;
                    *v1164 = qword_180897EE0;
                    v1560 = 0LL;
                    goto LABEL_1341;
                  }
                  v1623 = v1494;
                }
              }
              v1165 = -1073741801;
              v1495 = (void *)*((_QWORD *)v1158 + 1);
              if ( v1495 )
              {
                v1166 = GetProcessHeap();
                HeapFree(v1166, 0, v1495);
                *((_QWORD *)v1158 + 1) = 0LL;
              }
              v1496 = (void *)*((_QWORD *)v1158 + 3);
              if ( v1496 )
              {
                v1167 = GetProcessHeap();
                HeapFree(v1167, 0, v1496);
                *((_QWORD *)v1158 + 3) = 0LL;
              }
              v1497 = (void *)*((_QWORD *)v1158 + 5);
              if ( v1497 )
              {
                v1168 = GetProcessHeap();
                HeapFree(v1168, 0, v1497);
                *((_QWORD *)v1158 + 5) = 0LL;
              }
              v1169 = GetProcessHeap();
              HeapFree(v1169, 0, v1158);
            }
            else
            {
              v1165 = -1073741801;
            }
            v1158 = (unsigned int *)lpMemq;
LABEL_1341:
            v1615 = v1039;
            lpMemq = v1158;
            v1170 = GetProcessHeap();
            HeapFree(v1170, 0, v1549);
            v1171 = v1560;
            if ( v1560 )
            {
              v1498 = (void *)*((_QWORD *)v1560 + 1);
              if ( v1498 )
              {
                v1172 = GetProcessHeap();
                HeapFree(v1172, 0, v1498);
                v1171 = v1560;
                *((_QWORD *)v1560 + 1) = 0LL;
              }
              v1499 = (void *)*((_QWORD *)v1171 + 3);
              if ( v1499 )
              {
                v1173 = GetProcessHeap();
                HeapFree(v1173, 0, v1499);
                v1171 = v1560;
                *((_QWORD *)v1560 + 3) = 0LL;
              }
              v1500 = (void *)*((_QWORD *)v1171 + 5);
              if ( v1500 )
              {
                v1174 = GetProcessHeap();
                HeapFree(v1174, 0, v1500);
                *((_QWORD *)v1560 + 5) = 0LL;
              }
              v1175 = GetProcessHeap();
              HeapFree(v1175, 0, v1560);
              v1176 = (unsigned __int16 *)v1623;
              lpMemq = v1158;
              v1615 = v1039;
            }
            else
            {
              v1176 = (unsigned __int16 *)v1623;
            }
            v1103 = v1165 | 0x10000000;
            v1561 = v1176;
            if ( v1103 < 0 )
              goto LABEL_1373;
            v1177 = *v1158;
            v1675 = 0;
            v1676 = 4;
            v1178 = RtlUIntAdd(4u, v1177, (int *)&v1676);
            if ( v1178 >= 0 )
            {
              v1178 = RtlUIntAdd(v1676, v1179, (int *)&v1676);
              if ( v1178 >= 0 )
              {
                v1178 = RtlUIntAdd(v1676, v1158[4], (int *)&v1676);
                if ( v1178 >= 0 )
                {
                  v1178 = RtlUIntAdd(v1676, v1180, (int *)&v1676);
                  if ( v1178 >= 0 )
                  {
                    v1178 = RtlUIntAdd(v1676, v1158[8], (int *)&v1676);
                    if ( v1178 >= 0 )
                    {
                      v1675 = v1676;
                      v1181 = v1676;
                      v1182 = GetProcessHeap();
                      v1183 = HeapAlloc(v1182, 8u, v1181);
                      v1617 = v1183;
                      if ( !v1183 )
                      {
                        v1103 = -805306345;
                        goto LABEL_1373;
                      }
                      *v1183 = *v1158;
                      v1743 = v1183;
                      v1184 = RtlULongLongAdd((unsigned __int64)v1183, 4LL, (__int64 *)&v1743);
                      v1585 = v1185;
                      v1178 = v1184;
                      if ( v1184 < 0 )
                        goto LABEL_1366;
                      memcpy_0(v1743, *((const void **)v1158 + 1), *v1158);
                      v1178 = RtlULongLongAdd((unsigned __int64)v1743, *v1158, (__int64 *)&v1743);
                      v1185 = v1617;
                      v1585 = v1617;
                      if ( v1178 < 0 )
                        goto LABEL_1366;
                      v1186 = v1743;
                      *(_DWORD *)v1743 = v1158[4];
                      v1187 = RtlULongLongAdd((unsigned __int64)v1186, 4LL, (__int64 *)&v1743);
                      v1185 = v1188;
                      v1178 = v1187;
                      v1585 = v1188;
                      if ( v1187 < 0 )
                        goto LABEL_1366;
                      memcpy_0(v1743, *((const void **)v1158 + 3), v1158[4]);
                      v1178 = RtlULongLongAdd((unsigned __int64)v1743, v1158[4], (__int64 *)&v1743);
                      v1185 = v1617;
                      v1585 = v1617;
                      if ( v1178 < 0 )
                        goto LABEL_1366;
                      v1189 = v1743;
                      *(_DWORD *)v1743 = v1158[8];
                      v1190 = RtlULongLongAdd((unsigned __int64)v1189, 4LL, (__int64 *)&v1743);
                      v1185 = v1191;
                      v1178 = v1190;
                      v1585 = v1191;
                      if ( v1190 < 0
                        || (memcpy_0(v1743, *((const void **)v1158 + 5), v1158[8]),
                            v1178 = RtlULongLongAdd((unsigned __int64)v1743, v1158[8], (__int64 *)&v1743),
                            v1585 = v1617,
                            v1185 = v1617,
                            v1178 < 0) )
                      {
LABEL_1366:
                        if ( v1185 )
                        {
                          v1192 = GetProcessHeap();
                          HeapFree(v1192, 0, v1585);
                        }
                      }
                      else
                      {
                        v1514 = v1617;
                      }
                    }
                  }
                }
              }
            }
            v1103 = v1178 | 0x10000000;
            if ( v1103 >= 0 )
            {
              v1677 = 8;
              v1193 = RtlUIntAdd(8u, v1395, (int *)&v1677);
              v1103 = v1193 | 0x10000000;
              if ( v1193 < 0 )
                goto LABEL_1374;
              v1678 = 0;
              v1195 = (v1677 + 7) & 0xFFFFFFF8;
              if ( v1195 < v1677 )
              {
                v1103 = -1073741675;
                goto LABEL_1374;
              }
              v1623 = v1561;
              v1678 = (v1677 + 7) & 0xFFFFFFF8;
              v1514 = v1194;
              lpMemq = v1158;
              v1103 = RtlUIntAdd(v1195, 8, (int *)&v1678);
              if ( v1103 < 0 )
                goto LABEL_1374;
              v1623 = v1561;
              lpMemq = v1158;
              v1514 = v1221;
              v1524 = v1222;
              if ( !v1761[1] )
                goto LABEL_1416;
              lpMemq = v1158;
              v1514 = v1221;
              if ( LODWORD(v1761[0]) <= 1 )
                goto LABEL_1416;
              v1223 = (unsigned int *)v1761[1];
              v1744 = (unsigned int *)v1761[1];
              v1615 = v1039;
              v1501 = v1042;
              v1623 = v1561;
              do
              {
                v1396 = *v1223;
                v1103 = RtlULongLongAdd((unsigned __int64)v1223, 4LL, (__int64 *)&v1744);
                if ( v1103 < 0 )
                  goto LABEL_1374;
                v1103 = RtlULongLongAdd((unsigned __int64)v1744, v1396, (__int64 *)&v1744);
                if ( v1103 < 0 )
                  goto LABEL_1374;
                v1223 = v1744;
              }
              while ( v1224 == -1 );
              v1397 = *v1744;
              v1103 = RtlULongLongAdd((unsigned __int64)v1744, 4LL, (__int64 *)&v1744);
              if ( v1103 < 0 )
                goto LABEL_1374;
              v1514 = v1225;
              if ( !v1761[1] || (v1514 = v1225, LODWORD(v1761[0]) <= 2) )
              {
LABEL_1416:
                v1103 = -1073741811;
                goto LABEL_1374;
              }
              v1226 = (unsigned int *)v1761[1];
              v1745 = v1761[1];
              do
              {
                v1442 = *v1226;
                v1103 = RtlULongLongAdd((unsigned __int64)v1226, 4LL, (__int64 *)&v1745);
                if ( v1103 < 0 )
                  goto LABEL_1374;
                v1103 = RtlULongLongAdd(v1745, v1442, (__int64 *)&v1745);
                if ( v1103 < 0 )
                  goto LABEL_1374;
                v1226 = (unsigned int *)v1745;
              }
              while ( (unsigned int)(v1227 + 1) < 2 );
              v1103 = RtlULongLongAdd(v1745, 4LL, (__int64 *)&v1745);
              if ( v1103 < 0 )
                goto LABEL_1374;
              v1514 = v1228;
              v1679 = 4;
              v1103 = RtlUIntAdd(4u, v1678, (int *)&v1679);
              if ( v1103 < 0 )
                goto LABEL_1374;
              v1103 = RtlUIntAdd(v1679, v1229, (int *)&v1679);
              if ( v1103 < 0 )
                goto LABEL_1374;
              v1103 = RtlUIntAdd(v1679, v1397, (int *)&v1679);
              if ( v1103 < 0 )
                goto LABEL_1374;
              v1103 = RtlUIntAdd(v1679, 4, (int *)&v1679);
              if ( v1103 < 0 )
                goto LABEL_1374;
              v1103 = RtlUIntAdd(v1679, v1230, (int *)&v1679);
              if ( v1103 < 0 )
                goto LABEL_1374;
              v1514 = v1231;
              if ( v1679 > 0x400000 )
              {
                v1103 = -2147418113;
                goto LABEL_1373;
              }
              v1594 = v1679;
              v1232 = v1679;
              v1233 = GetProcessHeap();
              v1234 = HeapAlloc(v1233, 8u, v1232);
              v1235 = v1618;
              v101 = 0LL;
              if ( v1234 )
                v1235 = v1234;
              v1618 = v1235;
              v1103 = v1234 != 0LL ? 0x10000000 : -805306345;
              if ( !v1234 )
                goto LABEL_1374;
              hModule = 0LL;
              v1772 = 0LL;
              v1773 = 0LL;
              if ( !v1514 || !v1235 )
              {
                v1103 = -2147024809;
                goto LABEL_1374;
              }
              LODWORD(v1773) = v1524;
              *((_QWORD *)&v1772 + 1) = v1235;
              *(_QWORD *)((char *)&v1773 + 4) = v1594;
              *(_QWORD *)&v1772 = v1514;
              if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                && (v1237 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
              {
                v1238 = ((__int64 (__fastcall *)(__int64, __int128 *))v1237)(134LL, &v1772);
                v1103 = v1238 | 0x10000000;
                if ( v1238 >= 0 )
                {
                  v1239 = DWORD1(v1773);
                  v101 = 0LL;
LABEL_1458:
                  v1747 = v1618;
                  v1680 = 0;
                  if ( v1239 < 4 )
                  {
                    v1103 = -805306306;
                    goto LABEL_1374;
                  }
                  v1398 = *(_DWORD *)v1618;
                  v1240 = RtlULongLongAdd((unsigned __int64)v1618, 4LL, (__int64 *)&v1747);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  v1240 = RtlUIntAdd(0, 4, (int *)&v1680);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  if ( v1241 - v1680 < (unsigned int)v1242 )
                  {
LABEL_1463:
                    v1103 = -805306306;
                    goto LABEL_1373;
                  }
                  v1612 = (SIZE_T)v1747;
                  v1240 = RtlULongLongAdd((unsigned __int64)v1747, v1242, (__int64 *)&v1747);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  v1240 = RtlUIntAdd(v1680, v1243, (int *)&v1680);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  if ( v1244 - v1680 < 4 )
                    goto LABEL_1463;
                  v1443 = *(_DWORD *)v1747;
                  v1240 = RtlULongLongAdd((unsigned __int64)v1747, 4LL, (__int64 *)&v1747);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  v1240 = RtlUIntAdd(v1680, 4, (int *)&v1680);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  if ( v1245 - v1680 < v1246 )
                    goto LABEL_1463;
                  v1595 = v1747;
                  v1240 = RtlULongLongAdd((unsigned __int64)v1747, v1246, (__int64 *)&v1747);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  v1240 = RtlUIntAdd(v1680, v1247, (int *)&v1680);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  if ( v1248 - v1680 < 4 )
                    goto LABEL_1463;
                  v1525 = *(_DWORD *)v1747;
                  v1240 = RtlULongLongAdd((unsigned __int64)v1747, 4LL, (__int64 *)&v1747);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  v1240 = RtlUIntAdd(v1680, 4, (int *)&v1680);
                  if ( v1240 < 0 )
                    goto LABEL_1502;
                  if ( v1249 - v1680 < v1525 )
                    goto LABEL_1463;
                  v1240 = RtlUIntAdd(v1680, v1525, (int *)&v1680);
                  if ( v1240 < 0 )
                  {
LABEL_1502:
                    v1267 = v1602;
LABEL_1503:
                    v101 = 0LL;
                    v1103 = v1240 | 0x10000000;
                    if ( v1103 < 0 )
                      goto LABEL_1374;
                    if ( !v1267 || (v1562 = (unsigned __int16 *)v1267[1]) == 0LL || !*(_DWORD *)v1267 )
                    {
                      v1103 = -805306355;
                      goto LABEL_1374;
                    }
                    v1612 = *(unsigned int *)v1267 - 8LL;
                    v1268 = v1612;
                    v1269 = (char *)MemoryAlloc(v1612);
                    v101 = 0LL;
                    lpModuleNamet = (LPCWSTR)v1269;
                    v1270 = (WCHAR *)v1269;
                    if ( !v1269 )
                    {
LABEL_1533:
                      v1103 = -805306367;
                      lpModuleNames = 0LL;
                      goto LABEL_1374;
                    }
                    v1271 = v1562;
                    v1272 = v1268;
                    v1822 = 0x7F1137FAB69605ELL;
                    v1273 = 0;
                    v1274 = 0;
                    v1611 = v1562;
                    v1526 = v1269;
                    v1399 = 0;
                    v1275 = v1272 & 7;
                    if ( v1275 )
                    {
                      v1624 = 0;
                      v1276 = v1623;
                      v1277 = v1602;
                      do
                      {
                        v1444 = *(unsigned __int8 *)v1271;
                        if ( v1399 >= 4 )
                          v1624 |= v1444 << v1625;
                        else
                          v1274 |= v1444 << (v1625 - 32);
                        v1271 = (unsigned __int16 *)((char *)v1271 + 1);
                        v1625 -= 8;
                        ++v1399;
                      }
                      while ( (int)v1399 < v1275 );
                      v1278 = v1271;
                      v1279 = v1624 ^ 0x699A899C;
                      v1280 = v1624 ^ 0x699A899C;
                      v1281 = v1274;
                      v1274 ^= 0x92F65A5u;
                      v1282 = v1274;
                      for ( n = 0; n < v1275; ++n )
                      {
                        v1623 = v1276;
                        lpMemq = v1158;
                        if ( n >= 4 )
                        {
                          v1280 = (v1280 << 8) | HIBYTE(v1280);
                          v1283 = v1280;
                        }
                        else
                        {
                          v1282 = (v1282 << 8) | HIBYTE(v1282);
                          v1283 = v1282;
                        }
                        *v1526 = v1283;
                        v1284 = v1526 + 1;
                        v1276 = v1623;
                        ++v1526;
                      }
                      v102 = v1622;
                      v1269 = v1284;
                      v1270 = (WCHAR *)lpModuleNamet;
                      v1399 = v1281;
                      v1273 = 0;
                      v1611 = v1278;
                      v1501 = v1042;
                      v1615 = v1039;
                      if ( (unsigned int)v1275 <= 4 )
                      {
                        v1285 = 0;
                        if ( (unsigned int)v1275 < 4 )
                          v1274 = v1274 >> (8 * (4 - v1275)) << (8 * (4 - v1275));
                      }
                      else
                      {
                        v1285 = v1279 >> (8 * (8 - v1275)) << (8 * (8 - v1275));
                      }
                    }
                    else
                    {
                      v1285 = 0;
                      v1277 = v1602;
                    }
                    v1617 = (LPVOID)(v1612 >> 3);
                    if ( v1612 >> 3 )
                    {
                      v1286 = HIDWORD(v1822);
                      v1287 = v1269 + 7;
                      v1288 = v1399;
                      v1289 = (unsigned __int8 *)(v1611 + 1);
                      v1290 = (char *)v1617;
                      v1291 = WORD2(v1822);
                      v1527 = WORD1(v1822);
                      do
                      {
                        v1292 = *(v1289 - 1) | (*(v1289 - 2) << 8);
                        v1293 = v1289[2] << 8;
                        v1294 = *v1289;
                        v1289 += 8;
                        v1295 = *(v1289 - 7) | ((v1294 | (v1292 << 8)) << 8);
                        v1296 = v1295 ^ v1274;
                        v1297 = *(v1289 - 3) | ((*(v1289 - 4) | ((*(v1289 - 5) | v1293) << 8)) << 8);
                        v1298 = v1296 ^ v1286 ^ 0xAB69605E ^ v1297 ^ v1285;
                        v1299 = (__ROR4__(v1298, 22) + v1291 * __ROR4__(v1298 + 1419157410, 27)) ^ v1296;
                        v1300 = (WORD1(v1822) * __ROR4__(v1299 + v1286, 9) - __ROR4__(v1299, 30)) ^ v1298;
                        v1301 = (24670 * (v1300 - v1291) - (v1300 >> 13)) ^ v1299;
                        v1302 = (HIWORD(v1822) * __ROR4__(v1301 ^ WORD1(v1822), 26) - __ROR4__(v1301, 30)) ^ v1300;
                        v1303 = (v1286 - (v1302 ^ 0xAB69605E)) ^ v1301;
                        v1304 = (v1527 * (v1303 ^ v1291)) ^ __ROR4__(v1303, 6) ^ v1302;
                        v1305 = (__ROR4__(v1304, 30) + 24670 * __ROR4__(v1304 + v1286, 15)) ^ v1303;
                        v1306 = (HIWORD(v1822) * __ROR4__(v1305 + 1419157410, 14) - __ROR4__(v1305, 24)) ^ v1304;
                        v1307 = __ROR4__(v1306, 10) ^ (v1291 * __ROR4__(v1306 ^ 0xAB69605E, 12)) ^ v1305;
                        v1308 = (v1307 >> 10) ^ (WORD1(v1822) * (v1307 ^ HIWORD(v1822))) ^ v1306;
                        v1309 = (HIWORD(v1822) * (__ROR4__(~v1308, 5) + 24670)) ^ v1307;
                        v1310 = (v1309 - HIWORD(v1822)) ^ 0xAB69605E ^ v1308;
                        v1311 = ((v1310 >> 2) + v1291 * __ROR4__(v1310 ^ HIWORD(v1822), 30)) ^ v1309;
                        v1312 = (__ROR4__(v1311, 25) + WORD1(v1822) * __ROR4__(v1311 - v1286, 6)) ^ v1310;
                        v1313 = (24670 * (v1312 ^ v1291) + __ROR4__(v1312, 9)) ^ v1311;
                        v1314 = (__ROR4__(v1313, 25) + HIWORD(v1822) * __ROR4__(v1313 ^ WORD1(v1822), 27)) ^ v1312;
                        v1315 = v1286 ^ v1314 ^ v1313 ^ 0xAB69605E;
                        v1316 = (v1291 * (__ROR4__(v1315, 3) - WORD1(v1822))) ^ v1314;
                        v1317 = (24670 * __ROR4__(v1316 - v1286, 1) - __ROR4__(v1316, 6)) ^ v1315;
                        v1318 = (__ROR4__(v1317, 18) + HIWORD(v1822) * __ROR4__(v1317 - 1419157410, 29)) ^ v1316;
                        v1319 = (v1291 * __ROR4__(v1318 - 1419157410, 17) - __ROR4__(v1318, 14)) ^ v1317;
                        v1320 = (v1319 >> 3) ^ (WORD1(v1822) * (v1319 ^ 0x605E)) ^ v1318;
                        v1446 = v1624 ^ v1320;
                        v1624 = v1297;
                        v1321 = v1288 ^ v1319 ^ __ROR4__(v1320, 30) ^ (24670 * __ROR4__(v1286 ^ v1320, 28));
                        *(v1287 - 4) = v1321;
                        v1288 = v1295;
                        *v1287 = v1446;
                        v1287 += 8;
                        v1400 = v1321;
                        v1322 = (v1321 >> 8) | (v1321 << 24);
                        *(v1287 - 13) = v1322;
                        *(v1287 - 9) = BYTE1(v1446);
                        v1274 = v1400;
                        *(v1287 - 14) = BYTE1(v1322);
                        *(v1287 - 10) = (unsigned __int16)(v1446 >> 8) >> 8;
                        *(v1287 - 15) = __ROR4__((v1322 >> 8) | (v1322 << 24), 8);
                        v1285 = v1446;
                        *(v1287 - 11) = __ROR4__(
                                          (((v1446 >> 8) | (v1446 << 24)) >> 8) | (((v1446 >> 8) | (v1446 << 24)) << 24),
                                          8);
                        --v1290;
                      }
                      while ( v1290 );
                      v1273 = 0;
                      v102 = v1622;
                      v1039 = (WCHAR *)v1615;
                      v1042 = v1501;
                      v1158 = (unsigned int *)lpMemq;
                      v1277 = v1602;
                      v1270 = (WCHAR *)lpModuleNamet;
                    }
                    for ( ii = 0LL; ii < v1612; ++ii )
                      v1273 ^= *((_BYTE *)v1270 + ii);
                    v1324 = v1158;
                    v1325 = v1277;
                    v1615 = (LPCWSTR)v1623;
                    v1617 = v1158;
                    lpMemq = v1158;
                    v1602 = v1277;
                    if ( v1273 != *(_QWORD *)((char *)v1562 + v1612) )
                    {
                      MemoryFree(v1270);
                      v101 = 0LL;
                      goto LABEL_1533;
                    }
                    v101 = 0LL;
                    v1748 = v1270;
                    v1692 = 0;
                    if ( (unsigned int)v1612 < 4 )
                    {
                      v1326 = -1073741762;
                      lpMemq = v1158;
                      v1196 = (void *)v1615;
                      lpModuleNames = v1270;
                      v1602 = v1325;
LABEL_1577:
                      v1103 = v1326 | 0x10000000;
LABEL_1375:
                      if ( !v1196 )
                        goto LABEL_1377;
                      goto LABEL_1376;
                    }
                    v1401 = *(_DWORD *)v1270;
                    v1327 = RtlULongLongAdd((unsigned __int64)v1270, 4LL, (__int64 *)&v1748);
                    v1196 = (void *)v1615;
                    v1326 = v1327;
                    lpModuleNames = v1328;
                    v1602 = v1329;
                    lpMemq = v1324;
                    if ( v1327 < 0 )
                      goto LABEL_1576;
                    v1330 = RtlUIntAdd(0, 4, (int *)&v1692);
                    v1333 = v1514;
                    v1326 = v1330;
                    lpModuleNames = v1331;
                    v1602 = v1332;
                    lpMemq = v1324;
                    if ( v1330 < 0 )
                      goto LABEL_1576;
                    if ( (unsigned int)v1612 - v1692 < 4 )
                      goto LABEL_1539;
                    v1447 = *(_DWORD *)v1748;
                    v1326 = RtlULongLongAdd((unsigned __int64)v1748, 4LL, (__int64 *)&v1748);
                    lpModuleNames = v1334;
                    v1602 = v1335;
                    lpMemq = v1324;
                    if ( v1326 < 0 )
                      goto LABEL_1576;
                    v1336 = RtlUIntAdd(v1692, 4, (int *)&v1692);
                    v1333 = v1514;
                    v1326 = v1336;
                    lpModuleNames = v1331;
                    v1602 = v1332;
                    lpMemq = v1324;
                    if ( v1336 < 0 )
                      goto LABEL_1576;
                    if ( (unsigned int)v1612 - v1692 < v1447 )
                    {
LABEL_1539:
                      v1514 = v1333;
                    }
                    else
                    {
                      v1326 = RtlUIntAdd(v1692, v1447, (int *)&v1692);
                      lpModuleNames = v1331;
                      v101 = 0LL;
                      v1602 = v1332;
                      lpMemq = v1324;
                      if ( v1326 < 0 )
                        goto LABEL_1577;
                      if ( (char *)v1331 + (unsigned int)v1612 >= (char *)v1748 + v1447
                        && (unsigned int)v1612 + (char *)v1331 - (_BYTE *)v1748 - (unsigned __int64)v1447 < 8 )
                      {
                        lpModuleNames = v1331;
                        v1326 = 0;
                        v1749 = 0LL;
                        v1750 = 0LL;
                        v1751 = 0LL;
                        v1528 = 0;
                        v1602 = v1332;
                        lpMemq = v1324;
                        if ( !v1748 )
                          goto LABEL_1564;
                        v1612 = (SIZE_T)v1748;
                        v1326 = RtlULongLongAdd((unsigned __int64)v1748, v1447, (__int64 *)&v1749);
                        lpModuleNames = v1337;
                        v1602 = v1338;
                        v1339 = (WCHAR *)v1196;
                        lpMemq = v1324;
                        v1623 = v1196;
                        if ( v1326 < 0 )
                        {
LABEL_1563:
                          v1196 = v1623;
LABEL_1572:
                          v101 = 0LL;
                          if ( v1326 >= 0 && v1401 != LODWORD(v1769[0]) )
                            v1326 = -1073741762;
                          goto LABEL_1577;
                        }
                        v1340 = v1612;
                        lpModuleNames = v1337;
                        v1602 = v1338;
                        lpMemq = v1324;
                        if ( v1612 < v1749 )
                        {
                          v1341 = v1617;
                          v1342 = v1337;
                          lpModuleNames = v1337;
                          v1343 = v1339;
                          v1344 = v1612;
                          lpMemq = v1617;
                          v1623 = v1339;
                          v1602 = v1338;
                          while ( 1 )
                          {
                            v1615 = v1343;
                            v1326 = RtlULongLongAdd(v1344, 4LL, (__int64 *)&v1750);
                            if ( v1326 < 0 )
                              goto LABEL_1563;
                            if ( v1750 > v1749 )
                            {
                              v1326 = -1073741811;
LABEL_1559:
                              v1196 = v1623;
                              goto LABEL_1576;
                            }
                            v1346 = *v1345;
                            v1682 = 0;
                            v1326 = RtlUIntAdd(4u, v1346, (int *)&v1682);
                            if ( v1326 < 0 )
                              goto LABEL_1559;
                            v1326 = RtlULongLongAdd(v1347, v1682, (__int64 *)&v1751);
                            lpModuleNames = v1342;
                            v1602 = v1349;
                            lpMemq = v1341;
                            v1623 = (LPVOID)v1615;
                            v1514 = v1348;
                            if ( v1326 < 0 )
                              goto LABEL_1563;
                            v1344 = v1751;
                            v1350 = v1749;
                            v1612 = v1751;
                            lpModuleNames = v1342;
                            v1602 = v1349;
                            lpMemq = v1341;
                            v1514 = v1348;
                            if ( v1751 > v1749 )
                            {
                              v1326 = -1073741811;
                              v1196 = (void *)v1615;
                              goto LABEL_1576;
                            }
                            ++v1528;
                            v1343 = v1615;
                            v1623 = (LPVOID)v1615;
                            if ( v1751 >= v1749 )
                            {
                              lpMemq = v1341;
                              v1340 = v1751;
                              v1196 = (void *)v1615;
                              lpModuleNames = v1342;
                              v1602 = v1349;
                              v1514 = v1348;
                              goto LABEL_1561;
                            }
                          }
                        }
                        v1350 = v1749;
LABEL_1561:
                        if ( v1340 == v1350 )
                        {
LABEL_1564:
                          v1351 = v1447;
                          if ( v1447 )
                          {
                            v1352 = GetProcessHeap();
                            v1353 = HeapAlloc(v1352, 8u, v1447);
                            if ( !v1353 )
                            {
                              v1326 = -1073741801;
                              goto LABEL_1572;
                            }
                            v1351 = v1447;
                            v1326 = 0;
                          }
                          else
                          {
                            v1353 = 0LL;
                          }
                          if ( v1748 )
                            memcpy_0(v1353, v1748, v1351);
                          LODWORD(v1769[0]) = v1528;
                          v1769[1] = v1353;
                          goto LABEL_1572;
                        }
                        v1326 = -1073741811;
LABEL_1576:
                        v101 = 0LL;
                        goto LABEL_1577;
                      }
                    }
                    lpMemq = v1324;
                    v1326 = -1073741762;
                    v1602 = v1332;
                    lpModuleNames = v1331;
                    goto LABEL_1576;
                  }
                  if ( v1250 != v1680 || v1525 + v1251 + v1252 + 12LL != v1250 )
                    goto LABEL_1463;
                  v1253 = GetProcessHeap();
                  v1254 = (SIZE_T *)HeapAlloc(v1253, 8u, 0x30uLL);
                  v1603 = v1254;
                  v1255 = v1254;
                  if ( !v1254 )
                  {
                    v1240 = -1073741801;
LABEL_1501:
                    v1602 = 0LL;
                    v1267 = 0LL;
                    goto LABEL_1503;
                  }
                  v1240 = 0;
                  if ( v1612 )
                  {
                    *(_DWORD *)v1254 = v1398;
                    v1256 = GetProcessHeap();
                    v1257 = HeapAlloc(v1256, 8u, v1398);
                    if ( !v1257 )
                      goto LABEL_1490;
                    v1603[1] = (SIZE_T)v1257;
                    v1240 = 0;
                    memcpy_0(v1257, (const void *)v1612, v1398);
                    v1255 = v1603;
                    lpMemq = v1158;
                    v1615 = v1039;
                    v1501 = v1042;
                  }
                  else
                  {
                    *(_DWORD *)v1254 = 0;
                    v1254[1] = 0LL;
                  }
                  v1603 = v1255;
                  if ( !v1595 )
                  {
                    *((_DWORD *)v1255 + 4) = 0;
                    v1255[3] = 0LL;
LABEL_1488:
                    if ( v1747 )
                    {
                      *((_DWORD *)v1255 + 8) = v1525;
                      v1612 = v1525;
                      v1260 = GetProcessHeap();
                      v1261 = HeapAlloc(v1260, 8u, v1525);
                      if ( !v1261 )
                        goto LABEL_1490;
                      v1603[5] = (SIZE_T)v1261;
                      v1240 = 0;
                      memcpy_0(v1261, v1747, v1612);
                      v1255 = v1603;
                      lpMemq = v1158;
                      v1615 = v1039;
                      v1501 = v1042;
                    }
                    else
                    {
                      *((_DWORD *)v1255 + 8) = 0;
                      v1255[5] = 0LL;
                    }
                    v1267 = v1255;
                    v1602 = v1255;
                    goto LABEL_1503;
                  }
                  *((_DWORD *)v1255 + 4) = v1443;
                  v1612 = v1443;
                  v1258 = GetProcessHeap();
                  v1259 = HeapAlloc(v1258, 8u, v1443);
                  if ( v1259 )
                  {
                    v1603[3] = (SIZE_T)v1259;
                    v1240 = 0;
                    memcpy_0(v1259, v1595, v1612);
                    v1255 = v1603;
                    lpMemq = v1158;
                    v1615 = v1039;
                    v1501 = v1042;
                    goto LABEL_1488;
                  }
LABEL_1490:
                  v1262 = v1603;
                  v1240 = -1073741801;
                  v1612 = v1603[1];
                  if ( v1612 )
                  {
                    v1263 = GetProcessHeap();
                    HeapFree(v1263, 0, (LPVOID)v1612);
                    v1262 = v1603;
                    v1603[1] = 0LL;
                  }
                  v1612 = v1262[3];
                  if ( v1612 )
                  {
                    v1264 = GetProcessHeap();
                    HeapFree(v1264, 0, (LPVOID)v1612);
                    v1262 = v1603;
                    v1603[3] = 0LL;
                  }
                  v1612 = v1262[5];
                  if ( v1612 )
                  {
                    v1265 = GetProcessHeap();
                    HeapFree(v1265, 0, (LPVOID)v1612);
                    v1603[5] = 0LL;
                  }
                  v1266 = GetProcessHeap();
                  HeapFree(v1266, 0, v1603);
                  goto LABEL_1501;
                }
                v101 = 0LL;
              }
              else
              {
                v1236 = GetLastError();
                v101 = 0LL;
                v1103 = v1236;
                if ( v1236 > 0 )
                  v1103 = (unsigned __int16)v1236 | 0x80070000;
                if ( v1103 >= 0 )
                  v1103 = -2147467259;
              }
              if ( v1103 == -805306333 )
              {
                v1103 = -2147024774;
                goto LABEL_1374;
              }
              if ( v1103 < 0 )
                goto LABEL_1374;
              v1239 = v1594;
              goto LABEL_1458;
            }
LABEL_1373:
            v101 = 0LL;
            goto LABEL_1374;
          }
LABEL_1581:
          v1761[0] = 0LL;
          v1354 = (void *)v1761[1];
          if ( v1761[1] )
          {
            v1355 = GetProcessHeap();
            HeapFree(v1355, 0, v1354);
            v101 = 0LL;
            v1761[1] = 0LL;
          }
          v1769[0] = 0LL;
          v1356 = v1769[1];
          if ( v1769[1] )
          {
            v1357 = GetProcessHeap();
            HeapFree(v1357, 0, v1356);
            v101 = 0LL;
            v1769[1] = 0LL;
          }
          if ( v1042 )
          {
            v1358 = GetProcessHeap();
            HeapFree(v1358, 0, v1042);
            v101 = 0LL;
          }
          if ( v1039 )
          {
            v1359 = GetProcessHeap();
            HeapFree(v1359, 0, v1039);
            v101 = 0LL;
          }
          goto LABEL_1589;
        }
        v1092 = (v1674 + 7) & 0xFFFFFFF8;
        if ( v1092 < v1674 )
          goto LABEL_1581;
        v1674 = (v1674 + 7) & 0xFFFFFFF8;
        v1093 = v1092;
        v1094 = GetProcessHeap();
        v1095 = HeapAlloc(v1094, 8u, v1093);
        v101 = 0LL;
        v1493 = v1095;
        if ( v1095 )
        {
          *v1095 = v1761[0];
          v1742[0] = v1095;
          v1096 = RtlULongLongAdd((unsigned __int64)v1095, 4LL, (__int64 *)v1742);
          v1615 = v1098;
          v1090 = v1096;
          if ( v1096 >= 0 )
          {
            v1099 = v1742[0];
            *(_DWORD *)v1742[0] = HIDWORD(v1761[0]);
            v1100 = RtlULongLongAdd((unsigned __int64)v1099, v1097, (__int64 *)v1742);
            v1615 = v1101;
            v1090 = v1100;
            if ( v1100 >= 0 )
            {
              *(_QWORD *)((char *)v1101 + v1674 - 8) = v1559;
              memcpy_0(v1742[0], (const void *)v1761[1], HIDWORD(v1761[0]));
              v101 = 0LL;
              v1091 = v1674;
              v1623 = v1493;
              v1441 = v1674;
LABEL_1298:
              v1615 = v1039;
              v1492 = v1042;
              goto LABEL_1299;
            }
          }
          v1102 = GetProcessHeap();
          HeapFree(v1102, 0, (LPVOID)v1615);
          v101 = 0LL;
        }
        else
        {
          v1090 = -1073741801;
        }
        v1091 = v1441;
        goto LABEL_1298;
      }
      v1072 = (int *)v1761[1];
      v1740 = v1761[1];
      if ( !v1070 )
      {
LABEL_1272:
        v1077 = RtlULongLongAdd((unsigned __int64)v1072, 4LL, (__int64 *)&v1758);
        v101 = 0LL;
        if ( v1077 < 0 || (unsigned __int64)(v1078 + 3) > v1761[1] + HIDWORD(v1761[0]) )
          goto LABEL_1581;
        *v1078 = 8;
        memcpy_0(v1758, v1039, 8uLL);
        v101 = 0LL;
        v1071 = 4;
        goto LABEL_1275;
      }
      while ( 1 )
      {
        v1073 = *v1072;
        v1681 = 0;
        if ( (int)RtlUIntAdd(4u, v1073, (int *)&v1681) < 0 || (int)RtlULongLongAdd(v1074, v1681, (__int64 *)&v1740) < 0 )
          goto LABEL_1580;
        v1072 = (int *)v1740;
        v1615 = v1039;
        v1492 = v1042;
        if ( v1076 + 1 >= v1075 )
          goto LABEL_1272;
      }
    }
    lpMemp = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(
                                                0LL,
                                                0LL,
                                                1027LL);
    if ( !lpMemp )
    {
      GetLastError();
      goto LABEL_1231;
    }
    v475 = off_1808913D8[0]();
    v476 = dword_180899E48;
    qword_18089D730 = v475;
    v1573 = dword_180899E48;
    memset_0(&v1804, 0, 0x70uLL);
    v1618 = 0LL;
    v1825 = 0LL;
    memset(v1838, 0, 44);
    v1601 = 0LL;
    while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
      ;
    v477 = dword_18089D72C;
    if ( dword_18089D72C )
      goto LABEL_660;
    v1421 = 0;
    v1543 = 0;
    v478 = (char *)MemoryAlloc(0x338uLL);
    lpModuleNamec = (WCHAR *)v478;
    if ( !v478 )
      goto LABEL_623;
    v479 = -1;
    v480 = v478 + 7;
    v481 = 0;
    v482 = (unsigned __int8 *)&unk_1807573B2;
    v483 = 0;
    v484 = 103LL;
    v485 = 0;
    do
    {
      v486 = *(v482 - 1) | (*(v482 - 2) << 8);
      v487 = v482[2] << 8;
      v488 = *v482;
      v482 += 8;
      v489 = *(v482 - 7) | ((v488 | (v486 << 8)) << 8);
      v490 = v489 ^ v483;
      v491 = *(v482 - 3) | ((*(v482 - 4) | ((*(v482 - 5) | v487) << 8)) << 8);
      v492 = v490 ^ v491 ^ v481 ^ 0xAC987321;
      v493 = (__ROR4__(v492, 22) + 4991 * __ROR4__(v492 + 1419157410, 27)) ^ v490;
      v494 = (43881 * __ROR4__(v493 + 133239679, 9) - __ROR4__(v493, 30)) ^ v492;
      v495 = (24670 * v494 - (v494 >> 13) - 123127970) ^ v493;
      v496 = (2033 * __ROR4__(v495 ^ 0xAB69, 26) - __ROR4__(v495, 30)) ^ v494;
      v497 = (133239679 - (v496 ^ 0xAB69605E)) ^ v495;
      v498 = (43881 * (v497 ^ 0x137F)) ^ __ROR4__(v497, 6) ^ v496;
      v499 = (__ROR4__(v498, 30) + 24670 * __ROR4__(v498 + 133239679, 15)) ^ v497;
      v500 = (2033 * __ROR4__(v499 + 1419157410, 14) - __ROR4__(v499, 24)) ^ v498;
      v501 = __ROR4__(v500, 10) ^ (4991 * __ROR4__(v500 ^ 0xAB69605E, 12)) ^ v499;
      v502 = (v501 >> 10) ^ (43881 * (v501 ^ 0x7F1)) ^ v500;
      v503 = (2033 * (__ROR4__(~v502, 5) + 24670)) ^ v501;
      v504 = v502 ^ (v503 - 2033) ^ 0xAB69605E;
      v505 = ((v504 >> 2) + 4991 * __ROR4__(v502 ^ (v503 - 2033) ^ 0xAB6967AF, 30)) ^ v503;
      v506 = (__ROR4__(v505, 25) + 43881 * __ROR4__(v505 - 133239679, 6)) ^ v504;
      v507 = (24670 * (v506 ^ 0x137F) + __ROR4__(v506, 9)) ^ v505;
      v508 = (__ROR4__(v507, 25) + 2033 * __ROR4__(v507 ^ 0xAB69, 27)) ^ v506;
      v509 = v507 ^ v508 ^ 0xAC987321;
      v510 = (4991 * __ROR4__(v509, 3) - 219010071) ^ v508;
      v511 = (24670 * __ROR4__(v510 - 133239679, 1) - __ROR4__(v510, 6)) ^ v509;
      v512 = (__ROR4__(v511, 18) + 2033 * __ROR4__(v511 - 1419157410, 29)) ^ v510;
      v513 = (4991 * __ROR4__(v512 - 1419157410, 17) - __ROR4__(v512, 14)) ^ v511;
      v514 = (v513 >> 3) ^ (43881 * (v513 ^ 0x605E)) ^ v512;
      v515 = 24670 * __ROR4__(v514 ^ 0x7F1137F, 28);
      v516 = __ROR4__(v514, 30);
      v481 = v479 ^ v514;
      v479 = v491;
      v483 = v485 ^ v513 ^ v516 ^ v515;
      *(v480 - 4) = v483;
      *v480 = v481;
      v480 += 8;
      v485 = v489;
      *(v480 - 13) = BYTE1(v483);
      *(v480 - 9) = BYTE1(v481);
      *(v480 - 14) = (unsigned __int16)(v483 >> 8) >> 8;
      *(v480 - 10) = (unsigned __int16)(v481 >> 8) >> 8;
      *(v480 - 15) = __ROR4__((((v483 >> 8) | (v483 << 24)) >> 8) | (((v483 >> 8) | (v483 << 24)) << 24), 8);
      *(v480 - 11) = __ROR4__((((v481 >> 8) | (v481 << 24)) >> 8) | (((v481 >> 8) | (v481 << 24)) << 24), 8);
      --v484;
    }
    while ( v484 );
    v476 = v1573;
    v102 = v1622;
    v517 = 0LL;
    v518 = lpModuleNamec;
    v519 = 0;
    do
      v519 ^= *((_BYTE *)lpModuleNamec + v517++);
    while ( v517 < 0x338 );
    if ( v519 != 64LL )
    {
      MemoryFree(lpModuleNamec);
      goto LABEL_623;
    }
    *((_BYTE *)lpModuleNamec + 823) = 0;
    memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
    if ( *(_BYTE *)lpModuleNamec )
    {
      v1722 = lpModuleNamec;
      while ( 1 )
      {
        v538 = v518;
        v539 = -1LL;
        do
          ++v539;
        while ( v518[v539] );
        v540 = &v518[v539];
        lpModuleNamed = (WCHAR *)&qword_180899E50[3 * v1543];
        if ( !GetModuleHandleExW(0, v538, (HMODULE *)lpModuleNamed) )
          break;
        v541 = 0;
        if ( **(_WORD **)lpModuleNamed == 23117
          && (v542 = *(int *)(*(_QWORD *)lpModuleNamed + 60LL), (unsigned int)v542 < 0x10000000)
          && (v543 = *(_QWORD *)lpModuleNamed + v542, v543 >= *(_QWORD *)lpModuleNamed)
          && *(_DWORD *)v543 == 17744 )
        {
          if ( ((*(_WORD *)(v543 + 24) - 267) & 0xFEFF) != 0 )
          {
            v541 = -1073741811;
          }
          else
          {
            *(_QWORD *)(lpModuleNamed + 6) = *(_QWORD *)(v543 + 136);
            *((_DWORD *)lpModuleNamed + 2) = *(_DWORD *)(v543 + 80);
          }
        }
        else
        {
          v541 = -1073741701;
        }
        v544 = *(_DWORD *)(v540 + 1);
        v545 = 0;
        v518 = v540 + 3;
        v1409 = v544;
        LODWORD(Size) = 0;
        if ( v544 )
        {
          v546 = 3LL * v1543;
          do
          {
            v547 = (const CHAR *)v518;
            v548 = -1LL;
            do
              ++v548;
            while ( *((_BYTE *)v518 + v548) );
            v518 = (WCHAR *)((char *)v518 + v548 + 1);
            if ( v541 >= 0 )
            {
              v549 = GetProcAddress(qword_180899E50[v546], v547);
              if ( !v549 )
                goto LABEL_654;
              v546 = 3LL * v1543;
              off_180891340[v1421] = v549;
              v545 = Size;
            }
            ++v1421;
            LODWORD(Size) = ++v545;
          }
          while ( v545 < v1409 );
        }
        ++v1543;
        if ( !*(_BYTE *)v518 )
          goto LABEL_654;
      }
      v541 = -1073741702;
LABEL_654:
      v518 = (WCHAR *)v1722;
      if ( !v1722 )
        goto LABEL_658;
    }
    else
    {
      v541 = 0;
    }
    v550 = GetProcessHeap();
    HeapFree(v550, 0, v518);
LABEL_658:
    if ( v541 < 0 )
    {
LABEL_623:
      v520 = qword_180899E50;
      v521 = 4LL;
      do
      {
        if ( *v520 )
          FreeLibrary(*v520);
        v520 += 3;
        --v521;
      }
      while ( v521 );
      memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
      v522 = 2LL;
      v523 = off_180891340;
      v524 = off_1806EF510;
      do
      {
        v525 = *((_OWORD *)v524 + 1);
        *(_OWORD *)v523 = *(_OWORD *)v524;
        v526 = *((_OWORD *)v524 + 2);
        *((_OWORD *)v523 + 1) = v525;
        v527 = *((_OWORD *)v524 + 3);
        *((_OWORD *)v523 + 2) = v526;
        v528 = *((_OWORD *)v524 + 4);
        *((_OWORD *)v523 + 3) = v527;
        v529 = *((_OWORD *)v524 + 5);
        *((_OWORD *)v523 + 4) = v528;
        v530 = *((_OWORD *)v524 + 6);
        *((_OWORD *)v523 + 5) = v529;
        v531 = *((_OWORD *)v524 + 7);
        v524 += 16;
        *((_OWORD *)v523 + 6) = v530;
        v523 += 16;
        *((_OWORD *)v523 - 1) = v531;
        --v522;
      }
      while ( v522 );
      v532 = *((_OWORD *)v524 + 1);
      *(_OWORD *)v523 = *(_OWORD *)v524;
      v533 = *((_OWORD *)v524 + 2);
      *((_OWORD *)v523 + 1) = v532;
      v534 = *((_OWORD *)v524 + 3);
      *((_OWORD *)v523 + 2) = v533;
      v535 = *((_OWORD *)v524 + 4);
      *((_OWORD *)v523 + 3) = v534;
      v536 = *((_OWORD *)v524 + 5);
      *((_OWORD *)v523 + 4) = v535;
      v537 = *((_OWORD *)v524 + 6);
      *((_OWORD *)v523 + 5) = v536;
      *((_OWORD *)v523 + 6) = v537;
LABEL_661:
      v1410 = 0LL;
      _InterlockedExchange(&dword_18089D738, 0);
      v1876 = 0;
      v1877 = 0;
      v1723 = 0LL;
      v1770 = 0LL;
      v1544 = 0;
      LODWORD(Size) = 0;
      LODWORD(v1621) = 0;
      lpModuleNamee = 0LL;
      v1551 = 0LL;
      v1616 = 0LL;
      while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
        ;
      v551 = dword_18089D72C;
      if ( dword_18089D72C )
        goto LABEL_708;
      v1613 = 0;
      LODWORD(v1620) = 0;
      v552 = (char *)MemoryAlloc(0x338uLL);
      v1384 = (WCHAR *)v552;
      if ( !v552 )
        goto LABEL_671;
      v553 = -1;
      v554 = v552 + 7;
      v555 = 0;
      v556 = (unsigned __int8 *)&unk_1807573B2;
      v557 = 0;
      v558 = 103LL;
      v559 = 0;
      do
      {
        v560 = *(v556 - 1) | (*(v556 - 2) << 8);
        v561 = v556[2] << 8;
        v562 = *v556;
        v556 += 8;
        v563 = *(v556 - 7) | ((v562 | (v560 << 8)) << 8);
        v564 = v563 ^ v557;
        v565 = *(v556 - 3) | ((*(v556 - 4) | ((*(v556 - 5) | v561) << 8)) << 8);
        v566 = v564 ^ v565 ^ v555 ^ 0xAC987321;
        v567 = (__ROR4__(v566, 22) + 4991 * __ROR4__(v566 + 1419157410, 27)) ^ v564;
        v568 = (43881 * __ROR4__(v567 + 133239679, 9) - __ROR4__(v567, 30)) ^ v566;
        v569 = (24670 * v568 - (v568 >> 13) - 123127970) ^ v567;
        v570 = (2033 * __ROR4__(v569 ^ 0xAB69, 26) - __ROR4__(v569, 30)) ^ v568;
        v571 = (133239679 - (v570 ^ 0xAB69605E)) ^ v569;
        v572 = (43881 * (v571 ^ 0x137F)) ^ __ROR4__(v571, 6) ^ v570;
        v573 = (__ROR4__(v572, 30) + 24670 * __ROR4__(v572 + 133239679, 15)) ^ v571;
        v574 = (2033 * __ROR4__(v573 + 1419157410, 14) - __ROR4__(v573, 24)) ^ v572;
        v575 = __ROR4__(v574, 10) ^ (4991 * __ROR4__(v574 ^ 0xAB69605E, 12)) ^ v573;
        v576 = (v575 >> 10) ^ (43881 * (v575 ^ 0x7F1)) ^ v574;
        v577 = (2033 * (__ROR4__(~v576, 5) + 24670)) ^ v575;
        v578 = v576 ^ (v577 - 2033) ^ 0xAB69605E;
        v579 = ((v578 >> 2) + 4991 * __ROR4__(v576 ^ (v577 - 2033) ^ 0xAB6967AF, 30)) ^ v577;
        v580 = (__ROR4__(v579, 25) + 43881 * __ROR4__(v579 - 133239679, 6)) ^ v578;
        v581 = (24670 * (v580 ^ 0x137F) + __ROR4__(v580, 9)) ^ v579;
        v582 = (__ROR4__(v581, 25) + 2033 * __ROR4__(v581 ^ 0xAB69, 27)) ^ v580;
        v583 = v581 ^ v582 ^ 0xAC987321;
        v584 = (4991 * __ROR4__(v583, 3) - 219010071) ^ v582;
        v585 = (24670 * __ROR4__(v584 - 133239679, 1) - __ROR4__(v584, 6)) ^ v583;
        v586 = (__ROR4__(v585, 18) + 2033 * __ROR4__(v585 - 1419157410, 29)) ^ v584;
        v587 = (4991 * __ROR4__(v586 - 1419157410, 17) - __ROR4__(v586, 14)) ^ v585;
        v588 = (v587 >> 3) ^ (43881 * (v587 ^ 0x605E)) ^ v586;
        v589 = 24670 * __ROR4__(v588 ^ 0x7F1137F, 28);
        v590 = __ROR4__(v588, 30);
        v555 = v553 ^ v588;
        v553 = v565;
        v557 = v559 ^ v587 ^ v590 ^ v589;
        *(v554 - 4) = v557;
        *v554 = v555;
        v554 += 8;
        v559 = v563;
        *(v554 - 13) = BYTE1(v557);
        *(v554 - 9) = BYTE1(v555);
        *(v554 - 14) = (unsigned __int16)(v557 >> 8) >> 8;
        *(v554 - 10) = (unsigned __int16)(v555 >> 8) >> 8;
        *(v554 - 15) = __ROR4__((((v557 >> 8) | (v557 << 24)) >> 8) | (((v557 >> 8) | (v557 << 24)) << 24), 8);
        *(v554 - 11) = __ROR4__((((v555 >> 8) | (v555 << 24)) >> 8) | (((v555 >> 8) | (v555 << 24)) << 24), 8);
        --v558;
      }
      while ( v558 );
      v476 = v1573;
      v102 = v1622;
      v591 = 0LL;
      v592 = v1384;
      v593 = 0;
      do
        v593 ^= *((_BYTE *)v1384 + v591++);
      while ( v591 < 0x338 );
      if ( v593 != 64LL )
      {
        MemoryFree(v1384);
        goto LABEL_671;
      }
      *((_BYTE *)v1384 + 823) = 0;
      memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
      if ( *(_BYTE *)v1384 )
      {
        v1724 = v1384;
        while ( 1 )
        {
          v612 = v592;
          v613 = -1LL;
          do
            ++v613;
          while ( v592[v613] );
          v614 = &v592[v613];
          v1385 = (WCHAR *)&qword_180899E50[3 * (unsigned int)v1620];
          if ( !GetModuleHandleExW(0, v612, (HMODULE *)v1385) )
            break;
          v615 = 0;
          if ( **(_WORD **)v1385 == 23117
            && (v616 = *(int *)(*(_QWORD *)v1385 + 60LL), (unsigned int)v616 < 0x10000000)
            && (v617 = *(_QWORD *)v1385 + v616, v617 >= *(_QWORD *)v1385)
            && *(_DWORD *)v617 == 17744 )
          {
            if ( ((*(_WORD *)(v617 + 24) - 267) & 0xFEFF) != 0 )
            {
              v615 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v1385 + 6) = *(_QWORD *)(v617 + 136);
              *((_DWORD *)v1385 + 2) = *(_DWORD *)(v617 + 80);
            }
          }
          else
          {
            v615 = -1073741701;
          }
          v618 = *(_DWORD *)(v614 + 1);
          v619 = 0;
          v592 = v614 + 3;
          LODWORD(v1619) = v618;
          v1530 = 0;
          if ( v618 )
          {
            v620 = 3LL * (unsigned int)v1620;
            v1386 = (LPCWSTR)v620;
            do
            {
              v621 = (const CHAR *)v592;
              v622 = -1LL;
              do
                ++v622;
              while ( *((_BYTE *)v592 + v622) );
              v592 = (WCHAR *)((char *)v592 + v622 + 1);
              if ( v615 >= 0 )
              {
                v623 = GetProcAddress(qword_180899E50[v620], v621);
                if ( !v623 )
                  goto LABEL_702;
                v620 = (__int64)v1386;
                off_180891340[v1613] = v623;
                v619 = v1530;
              }
              ++v1613;
              v1530 = ++v619;
            }
            while ( v619 < (unsigned int)v1619 );
          }
          LODWORD(v1620) = v1620 + 1;
          if ( !*(_BYTE *)v592 )
            goto LABEL_702;
        }
        v615 = -1073741702;
LABEL_702:
        v592 = (WCHAR *)v1724;
        if ( !v1724 )
          goto LABEL_706;
      }
      else
      {
        v615 = 0;
      }
      v624 = GetProcessHeap();
      HeapFree(v624, 0, v592);
LABEL_706:
      if ( v615 < 0 )
      {
LABEL_671:
        v594 = qword_180899E50;
        v595 = 4LL;
        do
        {
          if ( *v594 )
            FreeLibrary(*v594);
          v594 += 3;
          --v595;
        }
        while ( v595 );
        memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
        v596 = 2LL;
        v597 = off_180891340;
        v598 = off_1806EF510;
        do
        {
          v599 = *((_OWORD *)v598 + 1);
          *(_OWORD *)v597 = *(_OWORD *)v598;
          v600 = *((_OWORD *)v598 + 2);
          *((_OWORD *)v597 + 1) = v599;
          v601 = *((_OWORD *)v598 + 3);
          *((_OWORD *)v597 + 2) = v600;
          v602 = *((_OWORD *)v598 + 4);
          *((_OWORD *)v597 + 3) = v601;
          v603 = *((_OWORD *)v598 + 5);
          *((_OWORD *)v597 + 4) = v602;
          v604 = *((_OWORD *)v598 + 6);
          *((_OWORD *)v597 + 5) = v603;
          v605 = *((_OWORD *)v598 + 7);
          v598 += 16;
          *((_OWORD *)v597 + 6) = v604;
          v597 += 16;
          *((_OWORD *)v597 - 1) = v605;
          --v596;
        }
        while ( v596 );
        v606 = *((_OWORD *)v598 + 1);
        *(_OWORD *)v597 = *(_OWORD *)v598;
        v607 = *((_OWORD *)v598 + 2);
        *((_OWORD *)v597 + 1) = v606;
        v608 = *((_OWORD *)v598 + 3);
        *((_OWORD *)v597 + 2) = v607;
        v609 = *((_OWORD *)v598 + 4);
        *((_OWORD *)v597 + 3) = v608;
        v610 = *((_OWORD *)v598 + 5);
        *((_OWORD *)v597 + 4) = v609;
        v611 = *((_OWORD *)v598 + 6);
        *((_OWORD *)v597 + 5) = v610;
        *((_OWORD *)v597 + 6) = v611;
LABEL_709:
        v625 = 0LL;
        _InterlockedExchange(&dword_18089D738, 0);
        memset_0(&v1804, 0, 0x70uLL);
        LODWORD(v1619) = v476 & 0xF;
        LOWORD(v1876) = (v476 >> 4) & 0xF;
        HIWORD(v1876) = (v476 >> 8) & 0xF;
        v1877 = (v476 >> 12) & 0xF;
        v1825 = 0LL;
        v1387 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(0LL, 0LL, 1027LL);
        v1613 = 0xFFFFFF;
        if ( !v1387 )
        {
          v626 = GetLastError();
          v627 = v626;
          if ( v626 > 0 )
            v627 = (unsigned __int16)v626 | 0x80070000;
          if ( v627 >= 0 )
            v627 = -2147467259;
LABEL_842:
          while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
            ;
          v724 = dword_18089D72C;
          if ( dword_18089D72C > 0 )
          {
            --dword_18089D72C;
            if ( v724 == 1 )
            {
              v725 = 4LL;
              v726 = qword_180899E50;
              lpModuleNamef = 4LL;
              do
              {
                if ( *v726 )
                {
                  FreeLibrary(*v726);
                  v725 = lpModuleNamef;
                }
                v726 += 3;
                lpModuleNamef = --v725;
              }
              while ( v725 );
              memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
              v727 = 2LL;
              v728 = off_180891340;
              v729 = off_1806EF510;
              do
              {
                v730 = *((_OWORD *)v729 + 1);
                *(_OWORD *)v728 = *(_OWORD *)v729;
                v731 = *((_OWORD *)v729 + 2);
                *((_OWORD *)v728 + 1) = v730;
                v732 = *((_OWORD *)v729 + 3);
                *((_OWORD *)v728 + 2) = v731;
                v733 = *((_OWORD *)v729 + 4);
                *((_OWORD *)v728 + 3) = v732;
                v734 = *((_OWORD *)v729 + 5);
                *((_OWORD *)v728 + 4) = v733;
                v735 = *((_OWORD *)v729 + 6);
                *((_OWORD *)v728 + 5) = v734;
                v736 = *((_OWORD *)v729 + 7);
                v729 += 16;
                *((_OWORD *)v728 + 6) = v735;
                v728 += 16;
                *((_OWORD *)v728 - 1) = v736;
                --v727;
              }
              while ( v727 );
              v737 = *((_OWORD *)v729 + 1);
              *(_OWORD *)v728 = *(_OWORD *)v729;
              v738 = *((_OWORD *)v729 + 2);
              *((_OWORD *)v728 + 1) = v737;
              v739 = *((_OWORD *)v729 + 3);
              *((_OWORD *)v728 + 2) = v738;
              v740 = *((_OWORD *)v729 + 4);
              *((_OWORD *)v728 + 3) = v739;
              v741 = *((_OWORD *)v729 + 5);
              *((_OWORD *)v728 + 4) = v740;
              v742 = *((_OWORD *)v729 + 6);
              *((_OWORD *)v728 + 5) = v741;
              *((_OWORD *)v728 + 6) = v742;
            }
          }
          _InterlockedExchange(&dword_18089D738, 0);
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1723);
          if ( v627 < 0 )
          {
LABEL_1143:
            if ( v1806 )
            {
              v921 = -1LL;
              do
                ++v921;
              while ( *((_WORD *)v1806 + v921) );
              memset(v1806, 0, 2 * v921 + 2);
              MemoryFree(v1806);
              v1806 = 0LL;
            }
            if ( v1807 )
            {
              v922 = -1LL;
              do
                ++v922;
              while ( *((_WORD *)v1807 + v922) );
              memset(v1807, 0, 2 * v922 + 2);
              MemoryFree(v1807);
              v1807 = 0LL;
            }
            if ( v1808 )
            {
              v923 = -1LL;
              do
                ++v923;
              while ( *((_WORD *)v1808 + v923) );
              memset(v1808, 0, 2 * v923 + 2);
              MemoryFree(v1808);
              v1808 = 0LL;
            }
            if ( v1809 )
            {
              off_180891378();
              v1809 = 0LL;
            }
            if ( v1810 )
            {
              off_180891378();
              v1810 = 0LL;
            }
            if ( v1811 )
            {
              off_180891378();
              v1811 = 0LL;
            }
            while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
              ;
            v924 = dword_18089D72C;
            if ( dword_18089D72C > 0 )
            {
              --dword_18089D72C;
              if ( v924 == 1 )
              {
                v925 = 4LL;
                v926 = qword_180899E50;
                do
                {
                  if ( *v926 )
                    FreeLibrary(*v926);
                  v926 += 3;
                  --v925;
                }
                while ( v925 );
                memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                v927 = 2LL;
                v928 = off_180891340;
                v929 = off_1806EF510;
                do
                {
                  v930 = *((_OWORD *)v929 + 1);
                  *(_OWORD *)v928 = *(_OWORD *)v929;
                  v931 = *((_OWORD *)v929 + 2);
                  *((_OWORD *)v928 + 1) = v930;
                  v932 = *((_OWORD *)v929 + 3);
                  *((_OWORD *)v928 + 2) = v931;
                  v933 = *((_OWORD *)v929 + 4);
                  *((_OWORD *)v928 + 3) = v932;
                  v934 = *((_OWORD *)v929 + 5);
                  *((_OWORD *)v928 + 4) = v933;
                  v935 = *((_OWORD *)v929 + 6);
                  *((_OWORD *)v928 + 5) = v934;
                  v936 = *((_OWORD *)v929 + 7);
                  v929 += 16;
                  *((_OWORD *)v928 + 6) = v935;
                  v928 += 16;
                  *((_OWORD *)v928 - 1) = v936;
                  --v927;
                }
                while ( v927 );
                v937 = *((_OWORD *)v929 + 1);
                *(_OWORD *)v928 = *(_OWORD *)v929;
                v938 = *((_OWORD *)v929 + 2);
                *((_OWORD *)v928 + 1) = v937;
                v939 = *((_OWORD *)v929 + 3);
                *((_OWORD *)v928 + 2) = v938;
                v940 = *((_OWORD *)v929 + 4);
                *((_OWORD *)v928 + 3) = v939;
                v941 = *((_OWORD *)v929 + 5);
                *((_OWORD *)v928 + 4) = v940;
                v942 = *((_OWORD *)v929 + 6);
                *((_OWORD *)v928 + 5) = v941;
                *((_OWORD *)v928 + 6) = v942;
              }
            }
            _InterlockedExchange(&dword_18089D738, 0);
            v1394 = dword_180899E48;
            v943 = off_1808913D8[0]();
            v1869 = 0;
            v944 = v943 - qword_18089D730;
            v1491 = v943 - qword_18089D730;
            v1873 = 0LL;
            v1870 = 0LL;
            v1871 = 0LL;
            v1872 = 0LL;
            while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
              ;
            v945 = dword_18089D72C;
            if ( dword_18089D72C )
              goto LABEL_1219;
            v1439 = 0;
            v1593 = 0;
            v946 = (const WCHAR *)MemoryAlloc(0x338uLL);
            v1615 = v946;
            if ( !v946 )
              goto LABEL_1182;
            v947 = 0;
            v948 = (char *)v946 + 7;
            v949 = -1;
            v950 = (unsigned __int8 *)&unk_1807573B2;
            v951 = 0;
            v952 = 103LL;
            v953 = 0;
            do
            {
              v954 = *(v950 - 1) | (*(v950 - 2) << 8);
              v955 = v950[2] << 8;
              v956 = *v950;
              v950 += 8;
              v957 = *(v950 - 7) | ((v956 | (v954 << 8)) << 8);
              v958 = v957 ^ v953;
              v959 = *(v950 - 3) | ((*(v950 - 4) | ((*(v950 - 5) | v955) << 8)) << 8);
              v960 = v959 ^ v951 ^ v958 ^ 0xAC987321;
              v961 = (__ROR4__(v960, 22) + 4991 * __ROR4__(v960 + 1419157410, 27)) ^ v958;
              v962 = (43881 * __ROR4__(v961 + 133239679, 9) - __ROR4__(v961, 30)) ^ v960;
              v963 = (24670 * v962 - (v962 >> 13) - 123127970) ^ v961;
              v964 = (2033 * __ROR4__(v963 ^ 0xAB69, 26) - __ROR4__(v963, 30)) ^ v962;
              v965 = (133239679 - (v964 ^ 0xAB69605E)) ^ v963;
              v966 = (43881 * (v965 ^ 0x137F)) ^ __ROR4__(v965, 6) ^ v964;
              v967 = (__ROR4__(v966, 30) + 24670 * __ROR4__(v966 + 133239679, 15)) ^ v965;
              v968 = (2033 * __ROR4__(v967 + 1419157410, 14) - __ROR4__(v967, 24)) ^ v966;
              v969 = __ROR4__(v968, 10) ^ (4991 * __ROR4__(v968 ^ 0xAB69605E, 12)) ^ v967;
              v970 = v968 ^ (v969 >> 10) ^ (43881 * (v969 ^ 0x7F1));
              v971 = (2033 * (__ROR4__(~v970, 5) + 24670)) ^ v969;
              v972 = v970 ^ (v971 - 2033) ^ 0xAB69605E;
              v973 = ((v972 >> 2) + 4991 * __ROR4__(v970 ^ (v971 - 2033) ^ 0xAB6967AF, 30)) ^ v971;
              v974 = (__ROR4__(v973, 25) + 43881 * __ROR4__(v973 - 133239679, 6)) ^ v972;
              v975 = (24670 * (v974 ^ 0x137F) + __ROR4__(v974, 9)) ^ v973;
              v976 = (__ROR4__(v975, 25) + 2033 * __ROR4__(v975 ^ 0xAB69, 27)) ^ v974;
              v977 = v976 ^ v975 ^ 0xAC987321;
              v978 = (4991 * __ROR4__(v977, 3) - 219010071) ^ v976;
              v979 = (24670 * __ROR4__(v978 - 133239679, 1) - __ROR4__(v978, 6)) ^ v977;
              v980 = (__ROR4__(v979, 18) + 2033 * __ROR4__(v979 - 1419157410, 29)) ^ v978;
              v981 = (4991 * __ROR4__(v980 - 1419157410, 17) - __ROR4__(v980, 14)) ^ v979;
              v982 = (v981 >> 3) ^ (43881 * (v981 ^ 0x605E)) ^ v980;
              v983 = 24670 * __ROR4__(v982 ^ 0x7F1137F, 28);
              v984 = __ROR4__(v982, 30);
              v951 = v949 ^ v982;
              v949 = v959;
              v953 = v947 ^ v981 ^ v984 ^ v983;
              *(v948 - 4) = v953;
              *v948 = v951;
              v948 += 8;
              v947 = v957;
              *(v948 - 13) = BYTE1(v953);
              *(v948 - 9) = BYTE1(v951);
              *(v948 - 14) = (unsigned __int16)(v953 >> 8) >> 8;
              *(v948 - 10) = (unsigned __int16)(v951 >> 8) >> 8;
              *(v948 - 15) = __ROR4__((((v953 >> 8) | (v953 << 24)) >> 8) | (((v953 >> 8) | (v953 << 24)) << 24), 8);
              *(v948 - 11) = __ROR4__((((v951 >> 8) | (v951 << 24)) >> 8) | (((v951 >> 8) | (v951 << 24)) << 24), 8);
              --v952;
            }
            while ( v952 );
            v102 = v1622;
            v985 = v1615;
            v986 = 0LL;
            v987 = 0;
            do
              v987 ^= *((_BYTE *)v1615 + v986++);
            while ( v986 < 0x338 );
            if ( v987 != 64LL )
            {
              MemoryFree((void *)v1615);
LABEL_1181:
              v944 = v1491;
LABEL_1182:
              v988 = qword_180899E50;
              v989 = 4LL;
              do
              {
                if ( *v988 )
                  FreeLibrary(*v988);
                v988 += 3;
                --v989;
              }
              while ( v989 );
              v990 = qword_180899E50;
              memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
              v991 = 2LL;
              v992 = off_180891340;
              v993 = off_1806EF510;
              do
              {
                v994 = *((_OWORD *)v993 + 1);
                *(_OWORD *)v992 = *(_OWORD *)v993;
                v995 = *((_OWORD *)v993 + 2);
                *((_OWORD *)v992 + 1) = v994;
                v996 = *((_OWORD *)v993 + 3);
                *((_OWORD *)v992 + 2) = v995;
                v997 = *((_OWORD *)v993 + 4);
                *((_OWORD *)v992 + 3) = v996;
                v998 = *((_OWORD *)v993 + 5);
                *((_OWORD *)v992 + 4) = v997;
                v999 = *((_OWORD *)v993 + 6);
                *((_OWORD *)v992 + 5) = v998;
                v1000 = *((_OWORD *)v993 + 7);
                v993 += 16;
                *((_OWORD *)v992 + 6) = v999;
                v992 += 16;
                *((_OWORD *)v992 - 1) = v1000;
                --v991;
              }
              while ( v991 );
              v1001 = *((_OWORD *)v993 + 1);
              *(_OWORD *)v992 = *(_OWORD *)v993;
              v1002 = *((_OWORD *)v993 + 2);
              *((_OWORD *)v992 + 1) = v1001;
              v1003 = *((_OWORD *)v993 + 3);
              *((_OWORD *)v992 + 2) = v1002;
              v1004 = *((_OWORD *)v993 + 4);
              *((_OWORD *)v992 + 3) = v1003;
              v1005 = *((_OWORD *)v993 + 5);
              *((_OWORD *)v992 + 4) = v1004;
              v1006 = *((_OWORD *)v993 + 6);
              *((_OWORD *)v992 + 5) = v1005;
              *((_OWORD *)v992 + 6) = v1006;
              goto LABEL_1220;
            }
            *((_BYTE *)v1615 + 823) = 0;
            memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
            if ( *v985 )
            {
              v1737 = v985;
              while ( 1 )
              {
                v1007 = (const WCHAR *)v985;
                v1008 = -1LL;
                do
                  ++v1008;
                while ( *(_WORD *)&v985[2 * v1008] );
                v1009 = &v985[2 * v1008];
                v1010 = &qword_180899E50[3 * v1593];
                if ( !GetModuleHandleExW(0, v1007, v1010) )
                  break;
                v1011 = 0;
                if ( *(_WORD *)*v1010 == 23117
                  && (v1012 = *((int *)*v1010 + 15), (unsigned int)v1012 < 0x10000000)
                  && (v1013 = (char *)*v1010 + v1012, v1013 >= (char *)*v1010)
                  && *(_DWORD *)v1013 == 17744 )
                {
                  if ( ((*((_WORD *)v1013 + 12) - 267) & 0xFEFF) != 0 )
                  {
                    v1011 = -1073741811;
                  }
                  else
                  {
                    *(HMODULE *)((char *)v1010 + 12) = (HMODULE)*((_QWORD *)v1013 + 17);
                    *((_DWORD *)v1010 + 2) = *((_DWORD *)v1013 + 20);
                  }
                }
                else
                {
                  v1011 = -1073741701;
                }
                v1014 = *(_DWORD *)(v1009 + 2);
                v1015 = 0;
                v985 = v1009 + 6;
                v1523 = v1014;
                if ( v1014 )
                {
                  v1016 = (const WCHAR *)(3LL * v1593);
                  v1615 = v1016;
                  do
                  {
                    v1017 = v985;
                    v1018 = -1LL;
                    do
                      ++v1018;
                    while ( v985[v1018] );
                    v985 += v1018 + 1;
                    if ( v1011 >= 0 )
                    {
                      v1019 = GetProcAddress(qword_180899E50[(_QWORD)v1016], v1017);
                      if ( !v1019 )
                        goto LABEL_1213;
                      off_180891340[v1439] = v1019;
                      v1016 = v1615;
                    }
                    ++v1439;
                    ++v1015;
                  }
                  while ( v1015 < v1523 );
                }
                ++v1593;
                if ( !*v985 )
                  goto LABEL_1213;
              }
              v1011 = -1073741702;
LABEL_1213:
              v985 = v1737;
              if ( !v1737 )
                goto LABEL_1217;
            }
            else
            {
              v1011 = 0;
            }
            v1020 = GetProcessHeap();
            HeapFree(v1020, 0, v985);
LABEL_1217:
            if ( v1011 < 0 )
              goto LABEL_1181;
            v945 = dword_18089D72C;
            v944 = v1491;
LABEL_1219:
            v990 = qword_180899E50;
            dword_18089D72C = v945 + 1;
LABEL_1220:
            _InterlockedExchange(&dword_18089D738, 0);
            v1021 = 4LL;
            LODWORD(v1873) = v1394;
            LODWORD(v1870) = v944;
            v1869 = 1;
            LODWORD(v1871) = -1721306479;
            DWORD2(v1870) = 1;
            LODWORD(v1872) = 1;
            DWORD2(v1871) = 1;
            DWORD2(v1872) = 1;
            ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_180891410)(0LL, 8225LL, 4LL, &v1869);
            while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
              ;
            v1022 = dword_18089D72C;
            if ( dword_18089D72C > 0 )
            {
              --dword_18089D72C;
              if ( v1022 == 1 )
              {
                do
                {
                  if ( *v990 )
                    FreeLibrary(*v990);
                  v990 += 3;
                  --v1021;
                }
                while ( v1021 );
                memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                v1023 = 2LL;
                v1024 = off_180891340;
                v1025 = off_1806EF510;
                do
                {
                  v1026 = *((_OWORD *)v1025 + 1);
                  *(_OWORD *)v1024 = *(_OWORD *)v1025;
                  v1027 = *((_OWORD *)v1025 + 2);
                  *((_OWORD *)v1024 + 1) = v1026;
                  v1028 = *((_OWORD *)v1025 + 3);
                  *((_OWORD *)v1024 + 2) = v1027;
                  v1029 = *((_OWORD *)v1025 + 4);
                  *((_OWORD *)v1024 + 3) = v1028;
                  v1030 = *((_OWORD *)v1025 + 5);
                  *((_OWORD *)v1024 + 4) = v1029;
                  v1031 = *((_OWORD *)v1025 + 6);
                  *((_OWORD *)v1024 + 5) = v1030;
                  v1032 = *((_OWORD *)v1025 + 7);
                  v1025 += 16;
                  *((_OWORD *)v1024 + 6) = v1031;
                  v1024 += 16;
                  *((_OWORD *)v1024 - 1) = v1032;
                  --v1023;
                }
                while ( v1023 );
                v1033 = *((_OWORD *)v1025 + 1);
                *(_OWORD *)v1024 = *(_OWORD *)v1025;
                v1034 = *((_OWORD *)v1025 + 2);
                *((_OWORD *)v1024 + 1) = v1033;
                v1035 = *((_OWORD *)v1025 + 3);
                *((_OWORD *)v1024 + 2) = v1034;
                v1036 = *((_OWORD *)v1025 + 4);
                *((_OWORD *)v1024 + 3) = v1035;
                v1037 = *((_OWORD *)v1025 + 5);
                *((_OWORD *)v1024 + 4) = v1036;
                v1038 = *((_OWORD *)v1025 + 6);
                *((_OWORD *)v1024 + 5) = v1037;
                *((_OWORD *)v1024 + 6) = v1038;
              }
            }
            _InterlockedExchange(&dword_18089D738, 0);
            ((void (__fastcall *)(_QWORD, CToastCenterExperienceManager *))off_1808914A0[0])(0LL, lpMemp);
            v1616 = (unsigned __int16 *)v1612;
            goto LABEL_1231;
          }
          v743 = v1825;
          v1729 = v1825;
          v744 = v476 & 0xF;
          v1779 = 0;
          v1575 = v744;
          memset_0(v1780, 0, 0x64uLL);
          v745 = 1;
          v746 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180891390[0])(lpMemp, 7LL);
          if ( v746 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v746, 104LL, &v1779) )
          {
            if ( v1781 != 32 || !v1782 || v1780[0] <= 0 || v1780[1] <= 0 )
              v745 = 0;
            if ( v745 )
            {
LABEL_950:
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_180891490)(&v1813, v743, HIDWORD(v1729));
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_180891490)(&v1814, v743, HIDWORD(v1729));
              if ( v744 == 1 )
                v1601 = ((__int64 (__fastcall *)(_QWORD))off_180891368[0])(v1805 == 0 ? 0xB26720 : 0);
LABEL_952:
              v1584 = off_1808913C0(lpMemp, (struct CSingleViewShellExperience *)1);
              v781 = 2064;
              if ( v1804 )
                v781 = 133138;
              LODWORD(v1619) = v781;
              if ( v745 )
              {
                v782 = v1806;
                v1422 = v1805;
                lpModuleNamel = v1809;
                v1552 = (unsigned __int16 *)v1806;
                v1783 = 0;
                memset_0(v1784, 0, 0x64uLL);
                v1786 = 0;
                memset_0(v1787, 0, 0x64uLL);
                v1616 = 0LL;
                v1411 = 0;
                v1545 = 0;
                v1841 = 0LL;
                v1842 = 0;
                v1839 = 0LL;
                v1840 = 0LL;
                v1826 = 0LL;
                if ( !v782 )
                  goto LABEL_1060;
                v783 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180891390[0])(lpMemp, 7LL);
                if ( v783 )
                {
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v783, 104LL, &v1783) )
                  {
                    v1616 = v1785;
                    v1411 = v1784[0];
                    v1545 = v1784[1];
                  }
                  v1388 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180891350[0])(lpMemp);
                  v784 = v1388;
                  if ( v1388 )
                  {
                    DWORD1(v1839) = v1813.m128i_i32[2] - v1813.m128i_i32[0];
                    DWORD2(v1839) = v1813.m128i_i32[1] - v1813.m128i_i32[3];
                    v1730 = 0LL;
                    v1841 = 0LL;
                    v1842 = 0;
                    v1840 = 0LL;
                    LODWORD(v1839) = 40;
                    HIDWORD(v1839) = 2097153;
                    v1432 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                              v1388,
                              &v1839,
                              0LL,
                              &v1730,
                              0LL,
                              0);
                    if ( v1432 )
                    {
                      v787 = ((unsigned int (__fastcall *)(size_t, __int64, int *))off_1808913A8[0])(
                               v1432,
                               104LL,
                               &v1786) == 0;
                      v788 = 0LL;
                      if ( !v787 )
                        v788 = v1788;
                      DWORD2(v1826) = v1813.m128i_i32[2] - v1813.m128i_i32[0];
                      HIDWORD(v1826) = v1813.m128i_i32[3] - v1813.m128i_i32[1];
                      v1517 = v788;
                      ((void (__fastcall *)(CToastCenterExperienceManager *, size_t))off_1808913B8)(v1388, v1432);
                      off_1808913C0(v1388, (struct CSingleViewShellExperience *)1);
                      v789 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                               v1388,
                               lpModuleNamel);
                      v790 = off_180891428[0];
                      lpModuleNamem = (LPCWSTR)v789;
                      v791 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
                      ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v790)(
                        v1388,
                        &v1826,
                        v791);
                      ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, _DWORD, _QWORD))off_180891418)(
                        v1388,
                        v1552,
                        0xFFFFFFFFLL,
                        &v1826,
                        (_DWORD)v1619,
                        0LL);
                      if ( v744 == 1 )
                      {
                        if ( v1422 )
                          v792 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
                        else
                          v792 = 0xFFFFFF;
                      }
                      else
                      {
                        v792 = -5723992;
                      }
                      v793 = 0;
                      v1423 = v792;
                      v794 = 0;
                      v795 = -v1813.m128i_i32[0];
                      if ( v1813.m128i_i32[0] >= 0 )
                      {
                        v793 = v1813.m128i_i32[0];
                        v795 = 0;
                      }
                      v796 = -v1813.m128i_i32[1];
                      if ( v1813.m128i_i32[1] >= 0 )
                      {
                        v794 = v1813.m128i_i32[1];
                        v796 = 0;
                      }
                      v797 = DWORD2(v1826) - v795;
                      if ( DWORD2(v1826) - v795 >= v1411 - v793 )
                        v797 = v1411 - v793;
                      v798 = HIDWORD(v1826) - v796;
                      if ( HIDWORD(v1826) - v796 >= v1545 - v794 )
                        v798 = v1545 - v794;
                      v785 = 0;
                      v1546 = v798;
                      if ( v797 > 0 && v798 > 0 )
                      {
                        v799 = v797;
                        LODWORD(Size) = 0;
                        LODWORD(v1621) = 0;
                        v800 = (unsigned __int16 *)(v1517 + 4 * (v795 + (__int64)(DWORD2(v1826) * v796)));
                        v1553 = v800;
                        v801 = &v1616[2 * v793 + 2 * (__int64)(v1411 * v794)];
                        v802 = 2LL * SDWORD2(v1826);
                        v803 = 0;
                        v804 = 2LL * v1411;
                        v1616 = v801;
                        do
                        {
                          v1412 = 0;
                          v805 = (char *)v801 - (char *)v800;
                          v806 = (unsigned __int8 *)(v800 + 1);
                          v807 = 0;
                          do
                          {
                            if ( (unsigned __int8)((*v806 + *(v806 - 2) + 2 * (unsigned int)*(v806 - 1)) >> 2) != 0xFF )
                            {
                              v808 = (unsigned __int8)~((*v806 + *(v806 - 2) + 2 * (unsigned int)*(v806 - 1)) >> 2);
                              v806[v805] -= ~((*v806 + *(v806 - 2) + 2 * (unsigned int)*(v806 - 1)) >> 2)
                                          * (v1423 - v806[v805]);
                              v809 = v806[v805 - 1];
                              v810 = (unsigned __int64)(2155905153LL * v808 * (BYTE1(v1423) - v809)) >> 32;
                              v806[v805 - 1] = v809 + (v810 >> 7 < 0) + (v810 >> 7);
                              v811 = v806[v805 - 2];
                              v812 = (unsigned __int64)(2155905153LL * v808 * (BYTE2(v1423) - v811)) >> 32;
                              v803 = (int)v1621;
                              v806[v805 - 2] = v811 + (v812 >> 7 < 0) + (v812 >> 7);
                              v813 = v806[v805 + 1];
                              v814 = v808 * (255 - v813);
                              v807 = v1412;
                              v806[v805 + 1] = v813 + v814 / 255;
                            }
                            ++v807;
                            v806 += 4;
                            v1412 = v807;
                            v785 = v803;
                          }
                          while ( v807 < v799 );
                          v800 = &v1553[v802];
                          v801 = &v1616[v804];
                          v1553 = (unsigned __int16 *)((char *)v1553 + v802 * 2);
                          v1616 = (unsigned __int16 *)((char *)v1616 + v804 * 2);
                          LODWORD(Size) = Size + 1;
                          LODWORD(v1621) = v803;
                        }
                        while ( (int)Size < v1546 );
                        v744 = v1575;
                        v102 = v1622;
                        v784 = v1388;
                      }
                      ((void (__fastcall *)(size_t))off_180891378)(v1432);
                      if ( lpModuleNamem )
                        ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                          v784,
                          lpModuleNamem);
                    }
                    else
                    {
                      v785 = GetLastError();
                      v786 = v785 < 0;
                      if ( v785 > 0 )
                      {
                        v785 = (unsigned __int16)v785 | 0x80070000;
                        v786 = v785 < 0;
                      }
                      if ( !v786 )
                        v785 = -2147467259;
                    }
                    ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(v784);
                    if ( v785 < 0 )
                      goto LABEL_1060;
                    v815 = v1807;
                    v1577 = v1805;
                    lpModuleNamen = v1810;
                    v1554 = (unsigned __int16 *)v1807;
                    v1789 = 0;
                    memset_0(v1790, 0, 0x64uLL);
                    v1792 = 0;
                    memset_0(v1793, 0, 0x64uLL);
                    v1616 = 0LL;
                    v1413 = 0LL;
                    v1845 = 0LL;
                    v1846 = 0;
                    v1843 = 0LL;
                    v1844 = 0LL;
                    v1827 = 0LL;
                    if ( !v815 )
                      goto LABEL_1060;
                    v816 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180891390[0])(
                             lpMemp,
                             7LL);
                    if ( v816 )
                    {
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v816, 104LL, &v1789) )
                      {
                        v1616 = v1791;
                        v1413 = __PAIR64__(v1790[0], v1790[1]);
                      }
                      v1389 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180891350[0])(lpMemp);
                      v817 = v1389;
                      if ( v1389 )
                      {
                        DWORD1(v1843) = v1814.m128i_i32[2] - v1814.m128i_i32[0];
                        DWORD2(v1843) = v1814.m128i_i32[1] - v1814.m128i_i32[3];
                        v1731 = 0LL;
                        v1845 = 0LL;
                        v1846 = 0;
                        v1844 = 0LL;
                        LODWORD(v1843) = 40;
                        HIDWORD(v1843) = 2097153;
                        v1433 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                                  v1389,
                                  &v1843,
                                  0LL,
                                  &v1731,
                                  0LL,
                                  0);
                        if ( !v1433 )
                        {
                          v818 = GetLastError();
                          v819 = v818 < 0;
                          if ( v818 > 0 )
                          {
                            v818 = (unsigned __int16)v818 | 0x80070000;
                            v819 = v818 < 0;
                          }
                          if ( !v819 )
                            v818 = -2147467259;
LABEL_1033:
                          ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(v817);
                          if ( v818 < 0 )
                            goto LABEL_1060;
                          v847 = 0LL;
LABEL_1141:
                          off_1808913C0(lpMemp, (struct CSingleViewShellExperience *)v1584);
                          v856 = v1618;
                          if ( !v1618 )
                          {
LABEL_1058:
                            if ( !v847 )
                              goto LABEL_1060;
                            goto LABEL_1059;
                          }
LABEL_1057:
                          ((void (__fastcall *)(void *))off_180891378)(v856);
                          goto LABEL_1058;
                        }
                        v787 = ((unsigned int (__fastcall *)(size_t, __int64, int *))off_1808913A8[0])(
                                 v1433,
                                 104LL,
                                 &v1792) == 0;
                        v820 = 0LL;
                        if ( !v787 )
                          v820 = v1794;
                        DWORD2(v1827) = v1814.m128i_i32[2] - v1814.m128i_i32[0];
                        HIDWORD(v1827) = v1814.m128i_i32[3] - v1814.m128i_i32[1];
                        v1518 = v820;
                        ((void (__fastcall *)(CToastCenterExperienceManager *, size_t))off_1808913B8)(v1389, v1433);
                        off_1808913C0(v1389, (struct CSingleViewShellExperience *)1);
                        v821 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                                 v1389,
                                 lpModuleNamen);
                        v822 = off_180891428[0];
                        lpModuleNameo = (LPCWSTR)v821;
                        v823 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
                        ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v822)(
                          v1389,
                          &v1827,
                          v823);
                        v818 = 0;
                        ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, _DWORD, _QWORD))off_180891418)(
                          v1389,
                          v1554,
                          0xFFFFFFFFLL,
                          &v1827,
                          (_DWORD)v1619,
                          0LL);
                        if ( v744 == 1 )
                        {
                          if ( !v1577 )
                          {
                            LODWORD(v1619) = 0xFFFFFF;
LABEL_1014:
                            v825 = 0;
                            v826 = -v1814.m128i_i32[0];
                            v827 = 0;
                            if ( v1814.m128i_i32[0] >= 0 )
                            {
                              v825 = v1814.m128i_i32[0];
                              v826 = 0;
                            }
                            v828 = -v1814.m128i_i32[1];
                            if ( v1814.m128i_i32[1] >= 0 )
                            {
                              v828 = 0;
                              v827 = v1814.m128i_i32[1];
                            }
                            v829 = DWORD2(v1827) - v826;
                            if ( DWORD2(v1827) - v826 >= HIDWORD(v1413) - v825 )
                              v829 = HIDWORD(v1413) - v825;
                            v830 = HIDWORD(v1827) - v828;
                            if ( HIDWORD(v1827) - v828 >= (int)v1413 - v827 )
                              v830 = v1413 - v827;
                            if ( v829 > 0 && v830 > 0 )
                            {
                              v1578 = 0;
                              v831 = (unsigned __int16 *)(v1518 + 4 * (v826 + (__int64)(DWORD2(v1827) * v828)));
                              v1555 = v831;
                              v832 = &v1616[2 * v825 + 2 * (__int64)(HIDWORD(v1413) * v827)];
                              v833 = 2LL * SDWORD2(v1827);
                              v1590 = 2LL * SHIDWORD(v1413);
                              v1616 = v832;
                              do
                              {
                                v834 = v1613;
                                v835 = (unsigned __int8 *)(v831 + 1);
                                v1424 = 0;
                                v836 = (char *)v832 - (char *)v831;
                                v837 = 0;
                                do
                                {
                                  if ( (unsigned __int8)((*v835 + *(v835 - 2) + 2 * (unsigned int)*(v835 - 1)) >> 2) != 0xFF )
                                  {
                                    v838 = (unsigned __int8)~((*v835 + *(v835 - 2) + 2 * (unsigned int)*(v835 - 1)) >> 2);
                                    v839 = BYTE1(v1619);
                                    v835[v836] -= ~((*v835 + *(v835 - 2) + 2 * (unsigned int)*(v835 - 1)) >> 2)
                                                * (v834 - v835[v836]);
                                    v840 = v835[v836 - 1];
                                    v841 = (unsigned __int64)(2155905153LL * v838 * (v839 - v840)) >> 32;
                                    v842 = BYTE2(v1619);
                                    v835[v836 - 1] = v840 + (v841 >> 7 < 0) + (v841 >> 7);
                                    v843 = v835[v836 - 2];
                                    v844 = (unsigned __int64)(2155905153LL * v838 * (v842 - v843)) >> 32;
                                    v835[v836 - 2] = v843 + (v844 >> 7 < 0) + (v844 >> 7);
                                    v845 = v835[v836 + 1];
                                    v846 = v838 * (255 - v845);
                                    v837 = v1424;
                                    v835[v836 + 1] = v845 + v846 / 255;
                                  }
                                  ++v837;
                                  v835 += 4;
                                  v1424 = v837;
                                  v818 = 0;
                                }
                                while ( v837 < v829 );
                                v831 = &v1555[v833];
                                v832 = &v1616[v1590];
                                v1555 = (unsigned __int16 *)((char *)v1555 + v833 * 2);
                                v1616 = (unsigned __int16 *)((char *)v1616 + v1590 * 2);
                                ++v1578;
                              }
                              while ( v1578 < v830 );
                              v102 = v1622;
                              v817 = v1389;
                            }
                            ((void (__fastcall *)(size_t))off_180891378)(v1433);
                            if ( lpModuleNameo )
                              ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                                v817,
                                lpModuleNameo);
                            goto LABEL_1033;
                          }
                          v824 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
                        }
                        else
                        {
                          v824 = -5723992;
                        }
                        LODWORD(v1619) = v824;
                        v1613 = v824;
                        goto LABEL_1014;
                      }
                    }
                  }
                }
LABEL_1039:
                GetLastError();
                goto LABEL_1060;
              }
              if ( v1805 || (v848 = -64, v744 == 1) )
                v848 = -1;
              BYTE2(v1425) = v848;
              LOWORD(v1425) = 0;
              HIBYTE(v1425) = 1;
              v1414 = 0;
              v1547 = 0;
              LODWORD(Size) = 0;
              v1513 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180891350[0])(lpMemp);
              if ( !v1513 )
                goto LABEL_1039;
              if ( v744 == 1 )
              {
                v849 = v1814.m128i_i32[2] - v1814.m128i_i32[0];
                if ( v1814.m128i_i32[2] - v1814.m128i_i32[0] <= v1813.m128i_i32[2] - v1813.m128i_i32[0] )
                  v849 = v1813.m128i_i32[2] - v1813.m128i_i32[0];
                v850 = v1814.m128i_i32[3] - v1813.m128i_i32[1];
                v851 = 0;
                LODWORD(v1621) = v849;
                v852 = 0;
                v1533 = v1814.m128i_i32[3] - v1813.m128i_i32[1];
                if ( v1804 )
                {
                  v852 = v1813.m128i_i32[0] + v849 - v1813.m128i_i32[2];
                  v851 = v1814.m128i_i32[0] + v849 - v1814.m128i_i32[2];
                  v1414 = v852;
                  LODWORD(Size) = v851;
                }
                v853 = v852 + v1813.m128i_i32[2] - v1813.m128i_i32[0];
                LODWORD(v1617) = v1814.m128i_i32[2] + v851 - v1814.m128i_i32[0];
                LODWORD(v1620) = v1813.m128i_i32[3] - v1813.m128i_i32[1];
                v1607 = v1814.m128i_i32[1] - v1813.m128i_i32[1];
                v1591 = v1814.m128i_i32[3] - v1813.m128i_i32[1];
              }
              else
              {
                v849 = DWORD2(v1825);
                v850 = HIDWORD(v1825);
                LODWORD(v1621) = DWORD2(v1825);
                LODWORD(v1620) = _mm_cvtsi128_si32(_mm_srli_si128(v1813, 12));
                v1547 = _mm_cvtsi128_si32(_mm_srli_si128(v1813, 4));
                v1591 = _mm_cvtsi128_si32(_mm_srli_si128(v1814, 12));
                v853 = _mm_cvtsi128_si32(_mm_srli_si128(v1813, 8));
                v1607 = _mm_cvtsi128_si32(_mm_srli_si128(v1814, 4));
                v1533 = HIDWORD(v1825);
                v1414 = _mm_cvtsi128_si32(v1813);
                LODWORD(v1617) = _mm_cvtsi128_si32(_mm_srli_si128(v1814, 8));
                LODWORD(Size) = _mm_cvtsi128_si32(v1814);
              }
              v1838[0] = 40;
              v1732 = 0LL;
              v1838[2] = -v850;
              memset(&v1838[4], 0, 28);
              v1838[1] = v849;
              v1838[3] = 2097153;
              v854 = (void *)((__int64 (__fastcall *)(size_t, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                               v1513,
                               v1838,
                               0LL,
                               &v1732,
                               0LL,
                               0);
              v1618 = v854;
              if ( !v854 )
              {
                GetLastError();
                v847 = v1513;
LABEL_1059:
                ((void (__fastcall *)(size_t))off_180891370[0])(v847);
LABEL_1060:
                if ( v1601 )
                  ((void (__fastcall *)(SIZE_T))off_180891378)(v1601);
                goto LABEL_1143;
              }
              ((void (__fastcall *)(size_t, void *))off_1808913B8)(v1513, v854);
              if ( v744 == 1 && v1601 )
              {
                v1828 = 0LL;
                v1830 = v1533;
                v1829 = v849;
                ((void (__fastcall *)(size_t, __int64 *))off_180891428[0])(v1513, &v1828);
              }
              v1519 = v1805;
              lpModuleNamep = v1809;
              v1556 = (unsigned __int16 *)v1806;
              v1795 = 0;
              memset_0(v1796, 0, 0x64uLL);
              v1776 = 0;
              memset_0(v1777, 0, 0x64uLL);
              v1616 = 0LL;
              v1434 = 0;
              v1390 = 0;
              v1847 = 0LL;
              v1849 = 0LL;
              v1848 = 0LL;
              v1850 = 0;
              v1823 = 0LL;
              if ( !v1556 )
                goto LABEL_1055;
              v855 = ((__int64 (__fastcall *)(size_t, __int64))off_180891390[0])(v1513, 7LL);
              if ( v855 )
              {
                if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v855, 104LL, &v1795) )
                {
                  v1616 = v1797;
                  v1434 = v1796[0];
                  v1390 = v1796[1];
                }
                v1623 = (LPVOID)((__int64 (__fastcall *)(size_t))off_180891350[0])(v1513);
                if ( v1623 )
                {
                  v1733 = 0LL;
                  DWORD1(v1847) = v853 - v1414;
                  DWORD2(v1847) = v1547 - v1620;
                  v1849 = 0LL;
                  v1850 = 0;
                  v1848 = 0LL;
                  LODWORD(v1847) = 40;
                  HIDWORD(v1847) = 2097153;
                  v857 = (const WCHAR *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                                          v1623,
                                          &v1847,
                                          0LL,
                                          &v1733,
                                          0LL,
                                          0);
                  v1615 = v857;
                  if ( v857 )
                  {
                    v787 = ((unsigned int (__fastcall *)(const WCHAR *, __int64, int *))off_1808913A8[0])(
                             v857,
                             104LL,
                             &v1776) == 0;
                    v860 = 0LL;
                    if ( !v787 )
                      v860 = v1778;
                    DWORD2(v1823) = v853 - v1414;
                    v861 = (CToastCenterExperienceManager *)v1623;
                    v1487 = v860;
                    HIDWORD(v1823) = v1620 - v1547;
                    ((void (__fastcall *)(LPVOID, LPCWSTR))off_1808913B8)(v1623, v1615);
                    off_1808913C0(v861, (struct CSingleViewShellExperience *)1);
                    v862 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                             v861,
                             lpModuleNamep);
                    v863 = off_180891428[0];
                    lpModuleNameq = (LPCWSTR)v862;
                    v864 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
                    ((void (__fastcall *)(LPVOID, __int128 *, __int64))v863)(v1623, &v1823, v864);
                    ((void (__fastcall *)(LPVOID, unsigned __int16 *, __int64, __int128 *, _DWORD, _QWORD))off_180891418)(
                      v1623,
                      v1556,
                      0xFFFFFFFFLL,
                      &v1823,
                      (_DWORD)v1619,
                      0LL);
                    if ( v744 == 1 )
                    {
                      if ( v1519 )
                        v865 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
                      else
                        v865 = 0xFFFFFF;
                    }
                    else
                    {
                      v865 = -5723992;
                    }
                    v866 = v1434;
                    v867 = 0;
                    v868 = 0;
                    v1520 = v865;
                    v869 = -v1414;
                    if ( v1414 >= 0 )
                    {
                      v867 = v1414;
                      v869 = 0;
                    }
                    v870 = -v1547;
                    if ( v1547 >= 0 )
                    {
                      v868 = v1547;
                      v870 = 0;
                    }
                    v871 = (unsigned int)(DWORD2(v1823) - v869);
                    if ( (int)v871 >= v1434 - v867 )
                      v871 = (unsigned int)(v1434 - v867);
                    v1435 = v871;
                    v872 = HIDWORD(v1823) - v870;
                    if ( HIDWORD(v1823) - v870 >= v1390 - v868 )
                      v872 = v1390 - v868;
                    v858 = 0;
                    v1391 = v872;
                    if ( (int)v871 > 0 )
                    {
                      v871 = 0LL;
                      if ( v872 > 0 )
                      {
                        v873 = v866;
                        v874 = v1435;
                        v875 = v866 * v868;
                        v876 = 0;
                        v1415 = 0;
                        v1548 = 0;
                        v871 = (unsigned __int64)&v1487[4 * v869 + 4 * (__int64)(DWORD2(v1823) * v870)];
                        v1488 = (char *)v871;
                        v877 = &v1616[2 * v867 + 2 * (__int64)v875];
                        v1616 = (unsigned __int16 *)(4LL * SDWORD2(v1823));
                        v878 = v1616;
                        v879 = 2 * v873;
                        v1557 = v877;
                        do
                        {
                          v1436 = 0;
                          v880 = (signed __int64)v877 - v871;
                          v881 = (unsigned __int8 *)(v871 + 2);
                          v882 = 0;
                          do
                          {
                            if ( (unsigned __int8)((*v881 + *(v881 - 2) + 2 * (unsigned int)*(v881 - 1)) >> 2) != 0xFF )
                            {
                              v883 = (unsigned __int8)~((*v881 + *(v881 - 2) + 2 * (unsigned int)*(v881 - 1)) >> 2);
                              v881[v880] -= ~((*v881 + *(v881 - 2) + 2 * (unsigned int)*(v881 - 1)) >> 2)
                                          * (v1520 - v881[v880]);
                              v884 = v881[v880 - 1];
                              v885 = (unsigned __int64)(2155905153LL * v883 * (BYTE1(v1520) - v884)) >> 32;
                              v881[v880 - 1] = v884 + (v885 >> 7 < 0) + (v885 >> 7);
                              v886 = v881[v880 - 2];
                              v887 = (unsigned __int64)(2155905153LL * v883 * (BYTE2(v1520) - v886)) >> 32;
                              v876 = v1548;
                              v881[v880 - 2] = v886 + (v887 >> 7 < 0) + (v887 >> 7);
                              v888 = v881[v880 + 1];
                              v889 = v883 * (255 - v888);
                              v882 = v1436;
                              v881[v880 + 1] = v888 + v889 / 255;
                            }
                            ++v882;
                            v881 += 4;
                            v1436 = v882;
                            v858 = v876;
                          }
                          while ( v882 < v874 );
                          v871 = (unsigned __int64)&v1488[(_QWORD)v878];
                          v877 = &v1557[v879];
                          v1488 = &v1488[(_QWORD)v878];
                          v1557 = (unsigned __int16 *)((char *)v1557 + v879 * 2);
                          ++v1415;
                          v1548 = v876;
                        }
                        while ( v1415 < v1391 );
                        v744 = v1575;
                        v102 = v1622;
                        v849 = (unsigned int)v1621;
                      }
                    }
                    ((void (__fastcall *)(LPCWSTR, unsigned __int64))off_180891378)(v1615, v871);
                    if ( lpModuleNameq )
                      ((void (__fastcall *)(LPVOID, LPCWSTR))off_1808913B8)(v1623, lpModuleNameq);
                  }
                  else
                  {
                    v858 = GetLastError();
                    v859 = v858 < 0;
                    if ( v858 > 0 )
                    {
                      v858 = (unsigned __int16)v858 | 0x80070000;
                      v859 = v858 < 0;
                    }
                    if ( !v859 )
                      v858 = -2147467259;
                  }
                  ((void (__fastcall *)(LPVOID))off_180891370[0])(v1623);
                  if ( v858 < 0 )
                    goto LABEL_1055;
                  v890 = v1807;
                  v1392 = v1805;
                  v1798 = 0;
                  v1489 = v1810;
                  v1615 = (LPCWSTR)v1807;
                  memset_0(v1799, 0, 0x64uLL);
                  v1801 = 0;
                  memset_0(v1802, 0, 0x64uLL);
                  v1623 = 0LL;
                  v787 = v890 == 0LL;
                  v1437 = 0;
                  v847 = v1513;
                  v1521 = 0;
                  v1851 = 0LL;
                  v1853 = 0LL;
                  v1852 = 0LL;
                  v1854 = 0;
                  v1824 = 0LL;
                  if ( v787 )
                    goto LABEL_1056;
                  v891 = ((__int64 (__fastcall *)(size_t, __int64))off_180891390[0])(v1513, 7LL);
                  if ( !v891 )
                  {
                    GetLastError();
                    goto LABEL_1056;
                  }
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v891, 104LL, &v1798) )
                  {
                    v1623 = v1800;
                    v1437 = v1799[0];
                    v1521 = v1799[1];
                  }
                  lpModuleNamer = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(size_t))off_180891350[0])(v1513);
                  if ( lpModuleNamer )
                  {
                    DWORD1(v1851) = (_DWORD)v1617 - Size;
                    DWORD2(v1851) = v1607 - v1591;
                    v1736 = 0LL;
                    v1853 = 0LL;
                    v1854 = 0;
                    v1852 = 0LL;
                    LODWORD(v1851) = 40;
                    HIDWORD(v1851) = 2097153;
                    v892 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                             lpModuleNamer,
                             &v1851,
                             0LL,
                             &v1736,
                             0LL,
                             0);
                    v1558 = (unsigned __int16 *)v892;
                    if ( !v892 )
                    {
                      v893 = GetLastError();
                      v894 = v893 < 0;
                      if ( v893 > 0 )
                      {
                        v893 = (unsigned __int16)v893 | 0x80070000;
                        v894 = v893 < 0;
                      }
                      if ( !v894 )
                        v893 = -2147467259;
                      goto LABEL_1137;
                    }
                    v787 = ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(v892, 104LL, &v1801) == 0;
                    v895 = 0LL;
                    if ( !v787 )
                      v895 = v1803;
                    DWORD2(v1824) = (_DWORD)v1617 - Size;
                    HIDWORD(v1824) = v1591 - v1607;
                    v1616 = v895;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808913B8)(
                      lpModuleNamer,
                      v1558);
                    off_1808913C0(lpModuleNamer, (struct CSingleViewShellExperience *)1);
                    v896 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, const WCHAR *))off_1808913B8)(
                             lpModuleNamer,
                             v1489);
                    v897 = off_180891428[0];
                    v1490 = (LPVOID)v896;
                    v898 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
                    ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v897)(
                      lpModuleNamer,
                      &v1824,
                      v898);
                    v893 = 0;
                    ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_180891418)(
                      lpModuleNamer,
                      v1615,
                      0xFFFFFFFFLL,
                      &v1824,
                      (_DWORD)v1619,
                      0LL);
                    if ( v744 == 1 )
                    {
                      if ( !v1392 )
                      {
                        v1393 = 0xFFFFFF;
LABEL_1118:
                        v900 = 0;
                        v901 = -(int)Size;
                        v902 = 0;
                        if ( (Size & 0x80000000) == 0LL )
                        {
                          v900 = Size;
                          v901 = 0;
                        }
                        v903 = -v1607;
                        if ( v1607 >= 0 )
                        {
                          v902 = v1607;
                          v903 = 0;
                        }
                        v904 = DWORD2(v1824) - v901;
                        if ( DWORD2(v1824) - v901 >= v1437 - v900 )
                          v904 = v1437 - v900;
                        v1592 = v904;
                        v905 = HIDWORD(v1824) - v903;
                        if ( HIDWORD(v1824) - v903 >= v1521 - v902 )
                          v905 = v1521 - v902;
                        if ( v904 > 0 && v905 > 0 )
                        {
                          v906 = v1437;
                          v1438 = 0;
                          v907 = &v1616[2 * v901 + 2 * (__int64)(v903 * DWORD2(v1824))];
                          v1615 = v907;
                          v908 = (char *)v1623 + 4 * v900 + 4 * (__int64)(v902 * (int)v906);
                          v1616 = (unsigned __int16 *)(4LL * SDWORD2(v1824));
                          v909 = v1616;
                          v1608 = (LPVOID)(4 * v906);
                          v1623 = v908;
                          do
                          {
                            v910 = v1613;
                            v911 = (unsigned __int8 *)(v907 + 1);
                            v1522 = 0;
                            v912 = v908 - (char *)v907;
                            v913 = 0;
                            do
                            {
                              if ( (unsigned __int8)((*v911 + *(v911 - 2) + 2 * (unsigned int)*(v911 - 1)) >> 2) != 0xFF )
                              {
                                v914 = (unsigned __int8)~((*v911 + *(v911 - 2) + 2 * (unsigned int)*(v911 - 1)) >> 2);
                                v911[v912] -= ~((*v911 + *(v911 - 2) + 2 * (unsigned int)*(v911 - 1)) >> 2)
                                            * (v910 - v911[v912]);
                                v915 = v911[v912 - 1];
                                v916 = (unsigned __int64)(2155905153LL * v914 * (BYTE1(v1393) - v915)) >> 32;
                                v911[v912 - 1] = v915 + (v916 >> 7 < 0) + (v916 >> 7);
                                v917 = v911[v912 - 2];
                                v918 = (unsigned __int64)(2155905153LL * v914 * (BYTE2(v1393) - v917)) >> 32;
                                v911[v912 - 2] = v917 + (v918 >> 7 < 0) + (v918 >> 7);
                                v919 = v911[v912 + 1];
                                v920 = v914 * (255 - v919);
                                v913 = v1522;
                                v911[v912 + 1] = v919 + v920 / 255;
                              }
                              ++v913;
                              v911 += 4;
                              v1522 = v913;
                              v893 = 0;
                            }
                            while ( v913 < v1592 );
                            v907 = (LPCWSTR)((char *)v1615 + (_QWORD)v909);
                            v908 = (char *)v1623 + (_QWORD)v1608;
                            v1615 = (LPCWSTR)((char *)v1615 + (_QWORD)v909);
                            v1623 = (char *)v1623 + (_QWORD)v1608;
                            ++v1438;
                          }
                          while ( v1438 < v905 );
                          v744 = v1575;
                          v102 = v1622;
                          v849 = (unsigned int)v1621;
                        }
                        ((void (__fastcall *)(unsigned __int16 *))off_180891378)(v1558);
                        if ( v1490 )
                          ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808913B8)(
                            lpModuleNamer,
                            v1490);
LABEL_1137:
                        ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(lpModuleNamer);
                        if ( v893 >= 0 )
                        {
                          v847 = v1513;
                          if ( v744 == 1 )
                            ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, int))off_180891340[0])(
                              lpMemp,
                              v1813.m128i_u32[0],
                              v1813.m128i_u32[1],
                              v849,
                              v1533,
                              v1513,
                              0,
                              0,
                              13369376);
                          else
                            ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, unsigned __int32, __int32, int))off_180891380[0])(
                              lpMemp,
                              (unsigned int)v1825,
                              DWORD1(v1825),
                              v849,
                              v1533,
                              v1513,
                              0,
                              0,
                              v849,
                              v1533,
                              v1425);
                          goto LABEL_1141;
                        }
                        goto LABEL_1055;
                      }
                      v899 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
                    }
                    else
                    {
                      v899 = -5723992;
                    }
                    v1393 = v899;
                    v1613 = v899;
                    goto LABEL_1118;
                  }
                }
              }
              GetLastError();
LABEL_1055:
              v847 = v1513;
LABEL_1056:
              v856 = v1618;
              goto LABEL_1057;
            }
          }
          else
          {
            v745 = 0;
          }
          if ( v744 != 1 )
            goto LABEL_952;
          goto LABEL_950;
        }
        v1725 = 0LL;
        v1531 = 0;
        v628 = 0;
        v1726 = 0LL;
        v1727 = 0LL;
        v1704 = 0LL;
        v1728[0] = 0LL;
        v1651 = 0;
        v627 = 0;
        v1689 = 0LL;
        v1652 = 0;
        memset(v1868, 0, sizeof(v1868));
        if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1808913E0[0])(
                8LL,
                &v1651,
                0LL,
                &v1652) )
        {
          v627 = GetLastError();
          v629 = v627 < 0;
          if ( v627 > 0 )
          {
            v627 = (unsigned __int16)v627 | 0x80070000;
            v629 = v627 < 0;
          }
          if ( !v629 )
            v627 = -2147467259;
          goto LABEL_724;
        }
        v630 = MemoryAlloc(2LL * v1652);
        SP<unsigned long,SP_MEM<unsigned long>>::operator=(v1728, v630);
        if ( !v1728[0] )
        {
          v627 = -2147024882;
          goto LABEL_724;
        }
        v631 = MemoryAlloc(4LL * (v1651 + 1));
        SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1689, v631);
        v632 = v1689;
        if ( v1689 )
        {
          if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, void *, unsigned int *))off_1808913E0[0])(
                 8LL,
                 &v1651,
                 v1728[0],
                 &v1652) )
          {
            v639 = v632;
            if ( v1651 )
            {
              v640 = (char *)v1728[0];
              v641 = v632;
              for ( jj = 0; jj < v1651; ++jj )
              {
                *v641 = ((__int64 (__fastcall *)(char *, _QWORD))off_1808913F0)(v640, 0LL);
                v643 = -1LL;
                do
                  ++v643;
                while ( *(_WORD *)&v640[2 * v643] );
                ++v641;
                v640 += 2 * v643 + 2;
              }
              v1689 = v641;
              v639 = v641;
            }
            v625 = (char *)v632;
            *v639 = 1033;
            v628 = v1651 + 1;
            v1689 = 0LL;
            v1531 = v1651 + 1;
            v1725 = v625;
LABEL_724:
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1689);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1728);
            if ( v627 < 0 )
              goto LABEL_805;
            LODWORD(v1620) = 0;
            v633 = 0;
            v634 = 0;
            if ( v628 )
            {
              v635 = 0LL;
              while ( 2 )
              {
                v636 = 0;
                v637 = dword_1807A63F0;
                do
                {
                  if ( *(_DWORD *)&v625[v635] == *v637 )
                  {
                    v633 = v636;
                    LODWORD(v1620) = v636;
                    goto LABEL_745;
                  }
                  ++v636;
                  ++v637;
                }
                while ( v636 < 0x26 );
                ++v634;
                v635 += 4LL;
                if ( v634 < v1531 )
                  continue;
                break;
              }
            }
LABEL_745:
            v1532 = 0;
            memset(v1831, 0, sizeof(v1831));
            if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1808913E8[0])(
                   (unsigned int)dword_1807A63F0[v633],
                   v1878,
                   85LL)
              && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *, __int64))off_1808913D0[0])(v1878, 88LL, v1831, 16LL) > 0 )
            {
              v1532 = (HIDWORD(v1831[0]) >> 27) & 1;
            }
            memset_0(v1875, 0, 0x90uLL);
            v644 = L"Segoe UI Light";
            v645 = 19LL;
            v646 = (const wchar_t **)&v1874;
            do
            {
              *v646 = v644;
              v647 = -1LL;
              do
                ++v647;
              while ( v644[v647] );
              ++v646;
              v644 += v647 + 1;
              --v645;
            }
            while ( v645 );
            v648 = 3LL * v633;
            lpModuleNamee = *(LPCWSTR *)&v1875[8 * byte_1807A6490[v648] - 8];
            v1551 = *(unsigned __int16 **)&v1875[8 * byte_1807A6490[v648 + 1] - 8];
            v1616 = *(unsigned __int16 **)&v1875[8 * byte_1807A6490[v648 + 2] - 8];
            v1589 = v1616;
            v649 = (char *)MemoryAlloc(0x1C90uLL);
            v1605 = v649;
            if ( !v649 )
            {
              v627 = -2147024882;
              goto LABEL_805;
            }
            v650 = v649 + 7;
            v651 = -1;
            v652 = (unsigned __int8 *)&unk_1807A6512;
            v653 = 0;
            v654 = 0;
            v655 = 0;
            v656 = 914LL;
            do
            {
              v657 = *(v652 - 1) | (*(v652 - 2) << 8);
              v658 = v652[2] << 8;
              v659 = *v652;
              v652 += 8;
              v660 = *(v652 - 7) | ((v659 | (v657 << 8)) << 8);
              v661 = v660 ^ v655;
              v662 = *(v652 - 3) | ((*(v652 - 4) | ((*(v652 - 5) | v658) << 8)) << 8);
              v663 = v662 ^ v654 ^ v661 ^ 0xAC987321;
              v664 = (__ROR4__(v663, 22) + 4991 * __ROR4__(v663 + 1419157410, 27)) ^ v661;
              v665 = (43881 * __ROR4__(v664 + 133239679, 9) - __ROR4__(v664, 30)) ^ v663;
              v666 = (24670 * v665 - (v665 >> 13) - 123127970) ^ v664;
              v667 = (2033 * __ROR4__(v666 ^ 0xAB69, 26) - __ROR4__(v666, 30)) ^ v665;
              v668 = (133239679 - (v667 ^ 0xAB69605E)) ^ v666;
              v669 = (43881 * (v668 ^ 0x137F)) ^ __ROR4__(v668, 6) ^ v667;
              v670 = (__ROR4__(v669, 30) + 24670 * __ROR4__(v669 + 133239679, 15)) ^ v668;
              v671 = (2033 * __ROR4__(v670 + 1419157410, 14) - __ROR4__(v670, 24)) ^ v669;
              v672 = __ROR4__(v671, 10) ^ (4991 * __ROR4__(v671 ^ 0xAB69605E, 12)) ^ v670;
              v673 = v671 ^ (v672 >> 10) ^ (43881 * (v672 ^ 0x7F1));
              v674 = (2033 * (__ROR4__(~v673, 5) + 24670)) ^ v672;
              v675 = v673 ^ (v674 - 2033) ^ 0xAB69605E;
              v676 = ((v675 >> 2) + 4991 * __ROR4__(v673 ^ (v674 - 2033) ^ 0xAB6967AF, 30)) ^ v674;
              v677 = (__ROR4__(v676, 25) + 43881 * __ROR4__(v676 - 133239679, 6)) ^ v675;
              v678 = (24670 * (v677 ^ 0x137F) + __ROR4__(v677, 9)) ^ v676;
              v679 = (__ROR4__(v678, 25) + 2033 * __ROR4__(v678 ^ 0xAB69, 27)) ^ v677;
              v680 = v678 ^ v679 ^ 0xAC987321;
              v681 = (4991 * __ROR4__(v680, 3) - 219010071) ^ v679;
              v682 = (24670 * __ROR4__(v681 - 133239679, 1) - __ROR4__(v681, 6)) ^ v680;
              v683 = (__ROR4__(v682, 18) + 2033 * __ROR4__(v682 - 1419157410, 29)) ^ v681;
              v684 = (4991 * __ROR4__(v683 - 1419157410, 17) - __ROR4__(v683, 14)) ^ v682;
              v685 = (v684 >> 3) ^ (43881 * (v684 ^ 0x605E)) ^ v683;
              v686 = 24670 * __ROR4__(v685 ^ 0x7F1137F, 28);
              v687 = __ROR4__(v685, 30);
              v654 = v651 ^ v685;
              v651 = v662;
              v655 = v653 ^ v684 ^ v687 ^ v686;
              *(v650 - 4) = v655;
              *v650 = v654;
              v650 += 8;
              v653 = v660;
              *(v650 - 13) = BYTE1(v655);
              *(v650 - 9) = BYTE1(v654);
              *(v650 - 14) = (unsigned __int16)(v655 >> 8) >> 8;
              *(v650 - 10) = (unsigned __int16)(v654 >> 8) >> 8;
              *(v650 - 15) = __ROR4__((((v655 >> 8) | (v655 << 24)) >> 8) | (((v655 >> 8) | (v655 << 24)) << 24), 8);
              *(v650 - 11) = __ROR4__((((v654 >> 8) | (v654 << 24)) >> 8) | (((v654 >> 8) | (v654 << 24)) << 24), 8);
              --v656;
            }
            while ( v656 );
            LOBYTE(v476) = v1573;
            v688 = v1605;
            v689 = 0LL;
            v690 = 0;
            do
              v690 ^= v1605[v689++];
            while ( v689 < 0x1C90 );
            if ( v690 != 127LL )
            {
              v627 = -1073425151;
              MemoryFree(v1605);
              v1727 = 0LL;
              goto LABEL_805;
            }
            v1726 = v1605;
            v1727 = 7312LL;
            v627 = 0;
            if ( v1605 )
              v1727 = 7312LL;
            else
              v688 = 0LL;
            v691 = v1620;
            v692 = v1868;
            v693 = 6LL;
            do
            {
              for ( kk = 0; kk < 0x26; ++kk )
              {
                if ( v691 == kk )
                  *v692 = v688;
                v695 = -1LL;
                do
                  ++v695;
                while ( v688[v695] );
                v688 += v695 + 1;
              }
              ++v692;
              --v693;
            }
            while ( v693 );
            v696 = MemoryAlloc(0x18uLL);
            SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1704, v696);
            v697 = v1704;
            if ( !v1704 )
            {
              v698 = v1727;
              v627 = -2147024882;
LABEL_798:
              if ( v697 )
              {
                v713 = 3LL;
                v1430 = 3LL;
                v1616 = v1589;
                v1727 = v698;
                do
                {
                  if ( *v697 )
                  {
                    v714 = -1LL;
                    do
                      ++v714;
                    while ( *((_WORD *)*v697 + v714) );
                    memset(*v697, 0, 2 * v714 + 2);
                    MemoryFree(*v697);
                    v713 = v1430;
                  }
                  ++v697;
                  v1430 = --v713;
                }
                while ( v713 );
              }
LABEL_805:
              if ( v1726 )
                memset(v1726, 0, v1727);
              v715 = v1616;
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1704);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1726);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1725);
              if ( v627 < 0 )
                goto LABEL_841;
              if ( v1723 )
              {
                v716 = v1723;
                v1616 = v715;
              }
              else
              {
                v716 = 0LL;
              }
              v1806 = *v716;
              if ( v1723 )
              {
                v717 = v1723;
                v1616 = v715;
              }
              else
              {
                v717 = 0LL;
              }
              v1807 = v717[1];
              if ( v1723 )
              {
                v718 = v1723;
                v1616 = v715;
              }
              else
              {
                v718 = 0LL;
              }
              v1808 = v718[2];
              v1771 = 0LL;
              LODWORD(v1771) = 16;
              if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *))off_1808914A8)(
                                    66LL,
                                    0LL,
                                    &v1771) )
              {
                v719 = GetLastError();
                v627 = v719;
                if ( v719 > 0 )
                  v627 = (unsigned __int16)v719 | 0x80070000;
                v1805 = 0;
                if ( v627 >= 0 )
                  v627 = -2147467259;
                goto LABEL_841;
              }
              v720 = (int)v1619;
              v1805 = BYTE4(v1771) & 1;
              if ( (_DWORD)v1619 == 1 )
              {
                HIDWORD(v1410) = 42;
              }
              else
              {
                if ( (_DWORD)v1619 != 2 )
                {
                  if ( (_DWORD)v1619 == 3 )
                    v1410 = 0xE1000000E1LL;
LABEL_830:
                  v721 = 96;
                  v1582 = 96;
                  memset_0(v1864, 0, 0xDCuLL);
                  v1865 = 220;
                  if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_180891420[0])(
                         0LL,
                         0xFFFFFFFFLL,
                         v1864) )
                  {
                    v721 = v1866;
                    *((_QWORD *)&v1770 + 1) = v1867;
                    *(_QWORD *)&v1770 = 0LL;
                    if ( v1866 < 0x60u )
                      v721 = 96;
                    v1582 = v721;
                  }
                  v722 = v1616;
                  if ( v720 == 1 )
                    v722 = (unsigned __int16 *)lpModuleNamee;
                  v1431 = (char *)v722;
                  memset_0(v1855, 0, 0x5CuLL);
                  v627 = 0;
                  v1516 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(0LL, 0LL, 1027LL);
                  if ( v1516 )
                  {
                    v747 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(HIDWORD(v1410), v721, 72LL);
                    v1855[4] = 400;
                    v1855[0] = -v747;
                    v1856 = 5;
                    StringCchCopyW((char *)v1857, 32LL, v1431);
                    v748 = ((__int64 (__fastcall *)(_DWORD *))off_180891360[0])(v1855);
                    if ( v748 )
                    {
                      v1809 = (const WCHAR *)v748;
                    }
                    else
                    {
                      v627 = GetLastError();
                      v749 = v627 < 0;
                      if ( v627 > 0 )
                      {
                        v627 = (unsigned __int16)v627 | 0x80070000;
                        v749 = v627 < 0;
                      }
                      if ( !v749 )
                        v627 = -2147467259;
                    }
                    ((void (__fastcall *)(_QWORD, SIZE_T))off_1808914A0[0])(0LL, v1516);
                  }
                  else
                  {
                    v627 = GetLastError();
                    v723 = v627 < 0;
                    if ( v627 > 0 )
                    {
                      v627 = (unsigned __int16)v627 | 0x80070000;
                      v723 = v627 < 0;
                    }
                    if ( !v723 )
                      goto LABEL_840;
                  }
                  if ( v627 < 0 )
                    goto LABEL_841;
                  v750 = v1616;
                  if ( (_DWORD)v1619 == 1 )
                    v750 = (unsigned __int16 *)lpModuleNamee;
                  v1616 = v750;
                  memset_0(v1858, 0, 0x5CuLL);
                  v627 = 0;
                  lpModuleNameg = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(
                                             0LL,
                                             0LL,
                                             1027LL);
                  if ( !lpModuleNameg )
                  {
                    v751 = GetLastError();
                    v627 = v751;
                    if ( v751 > 0 )
                      v627 = (unsigned __int16)v751 | 0x80070000;
                    if ( v627 < 0 )
                      goto LABEL_841;
                    goto LABEL_840;
                  }
                  v752 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(
                           (unsigned int)v1410,
                           v721,
                           72LL);
                  v1858[4] = 400;
                  v1858[0] = -v752;
                  v1859 = 5;
                  StringCchCopyW((char *)v1860, 32LL, (char *)v1616);
                  v753 = ((__int64 (__fastcall *)(_DWORD *))off_180891360[0])(v1858);
                  if ( v753 )
                  {
                    v1810 = (const WCHAR *)v753;
                  }
                  else
                  {
                    v754 = GetLastError();
                    v627 = v754;
                    if ( v754 > 0 )
                      v627 = (unsigned __int16)v754 | 0x80070000;
                    if ( v627 >= 0 )
                      v627 = -2147467259;
                  }
                  ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808914A0[0])(0LL, lpModuleNameg);
                  if ( v627 < 0 )
                    goto LABEL_841;
                  v755 = 0;
                  v756 = 0LL;
                  if ( (_DWORD)v1619 != 1 )
                  {
                    if ( (_DWORD)v1619 == 2 )
                    {
                      v755 = SDWORD2(v1770) / 4;
LABEL_888:
                      *((_QWORD *)&v1825 + 1) = __PAIR64__(v756, v755);
                      if ( (_DWORD)v1619 == 1 )
                      {
                        v757 = 150;
                        LODWORD(Size) = 42;
                        v1544 = 150;
                        LODWORD(v1621) = 32;
                      }
                      else
                      {
                        v757 = 0;
                        if ( (unsigned int)((_DWORD)v1619 - 2) <= 1 )
                        {
                          LODWORD(Size) = 0;
                          v1544 = 0;
                          LODWORD(v1621) = 0;
                        }
                      }
                      v758 = v1806;
                      v1576 = v755 - v757;
                      v1814.m128i_i32[2] = v755 - v757;
                      v1813.m128i_i32[2] = v755 - v757;
                      lpModuleNameh = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *, __int64, _QWORD))off_1808913B8)(
                                                 v1387,
                                                 v1809,
                                                 v756,
                                                 0LL);
                      v759 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_180891418)(
                               v1387,
                               v758,
                               0xFFFFFFFFLL,
                               &v1813,
                               3152,
                               0LL);
                      v627 = v759 == 0 ? 0x80004005 : 0;
                      if ( lpModuleNameh )
                        ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1808913B8)(v1387, lpModuleNameh);
                      if ( !v759 )
                        goto LABEL_841;
                      v760 = v1807;
                      lpModuleNamei = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1808913B8)(
                                                 v1387,
                                                 v1810);
                      v761 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_180891418)(
                               v1387,
                               v760,
                               0xFFFFFFFFLL,
                               &v1814,
                               3152,
                               0LL);
                      v627 = v761 == 0 ? 0x80004005 : 0;
                      if ( lpModuleNamei )
                        ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1808913B8)(v1387, lpModuleNamei);
                      if ( !v761 )
                        goto LABEL_841;
                      v762 = (int)v1619;
                      if ( (unsigned int)((_DWORD)v1619 - 2) > 1 )
                      {
                        v763 = v1576;
                      }
                      else
                      {
                        v763 = v1814.m128i_i32[2];
                        if ( v1813.m128i_i32[2] > v1814.m128i_i32[2] )
                          v763 = v1813.m128i_i32[2];
                      }
                      if ( v1804 )
                      {
                        off_180891490(
                          (CToastCenterExperienceManager *)&v1813,
                          (struct CSingleViewShellExperience *)(unsigned int)(v763 - v1813.m128i_i32[2]));
                        v764 = (unsigned int)(v763 - v1814.m128i_i32[2]);
                      }
                      else
                      {
                        off_180891490(
                          (CToastCenterExperienceManager *)&v1813,
                          (struct CSingleViewShellExperience *)v1544);
                        v764 = v1544;
                      }
                      ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_180891490)(
                        &v1814,
                        v764,
                        (unsigned int)(v1813.m128i_i32[3] + (_DWORD)v1621));
                      if ( (unsigned int)(v762 - 2) <= 1 )
                      {
                        *((_QWORD *)&v1825 + 1) = __PAIR64__(v1814.m128i_u32[3], v763);
                        v1812 = -5723992;
                      }
                      else if ( v762 == 1 )
                      {
                        v1812 = 0xFFFFFF;
                        memset_0(v1861, 0, 0x5CuLL);
                        v627 = 0;
                        lpModuleNamej = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(
                                                   0LL,
                                                   0LL,
                                                   1027LL);
                        if ( lpModuleNamej )
                        {
                          v766 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808913F8)(11LL, v1582);
                          v1861[4] = 400;
                          v1861[0] = -v766;
                          v1862 = 5;
                          StringCchCopyW((char *)v1863, 32LL, (char *)v1551);
                          v767 = ((__int64 (__fastcall *)(_DWORD *))off_180891360[0])(v1861);
                          if ( v767 )
                          {
                            v1811 = v767;
                          }
                          else
                          {
                            v627 = GetLastError();
                            v768 = v627 < 0;
                            if ( v627 > 0 )
                            {
                              v627 = (unsigned __int16)v627 | 0x80070000;
                              v768 = v627 < 0;
                            }
                            if ( !v768 )
                              v627 = -2147467259;
                          }
                          ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808914A0[0])(0LL, lpModuleNamej);
                        }
                        else
                        {
                          v627 = GetLastError();
                          v765 = v627 < 0;
                          if ( v627 > 0 )
                          {
                            v627 = (unsigned __int16)v627 | 0x80070000;
                            v765 = v627 < 0;
                          }
                          if ( !v765 )
                          {
LABEL_840:
                            v627 = -2147467259;
LABEL_841:
                            ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808914A0[0])(0LL, v1387);
                            goto LABEL_842;
                          }
                        }
                        if ( v627 < 0 )
                          goto LABEL_841;
                        v1817 = v763;
                        v769 = v1808;
                        lpModuleNamek = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, __int64))off_1808913B8)(v1387, v1811);
                        v770 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_180891418)(
                                 v1387,
                                 v769,
                                 0xFFFFFFFFLL,
                                 &v1815,
                                 1120,
                                 0LL);
                        v627 = v770 == 0 ? 0x80004005 : 0;
                        if ( lpModuleNamek )
                          ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1808913B8)(v1387, lpModuleNamek);
                        if ( !v770 )
                          goto LABEL_841;
                        v771 = v1817 + 24;
                        if ( (int)(v1817 + 24) < 90 )
                          v771 = 90;
                        v1817 = v771;
                        v1818 = 32;
                        v1815 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1815, v1582, 96LL);
                        v1816 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1816, v1582, 96LL);
                        v1817 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1817, v1582, 96LL);
                        v1818 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(v1818, v1582, 96LL);
                        if ( v1804 )
                        {
                          v772 = v1813.m128i_u32[0];
                          if ( v1813.m128i_i32[0] >= v1814.m128i_i32[0] )
                            v772 = v1814.m128i_u32[0];
                        }
                        else
                        {
                          v773 = v1813.m128i_i32[2];
                          if ( v1813.m128i_i32[2] <= v1814.m128i_i32[2] )
                            v773 = v1814.m128i_i32[2];
                          v772 = v1815 + v773 - v1817;
                        }
                        off_180891490(
                          (CToastCenterExperienceManager *)&v1815,
                          (struct CSingleViewShellExperience *)v772);
                        v762 = (int)v1619;
                      }
                      v774 = DWORD2(v1825);
                      v1583 = v1804;
                      LODWORD(v1619) = HIDWORD(v1825);
                      v775 = v762 - 1;
                      if ( !v775 )
                      {
                        *(_QWORD *)&v1825 = 0LL;
                        goto LABEL_947;
                      }
                      v776 = v775 - 1;
                      if ( v776 )
                      {
                        if ( v776 != 1 )
                          goto LABEL_947;
                        v1834 = 0LL;
                        v1832 = 0LL;
                        v1833 = 0LL;
                        v777 = (CToastCenterExperienceManager *)off_180891488[0](
                                                                  0LL,
                                                                  (struct CSingleViewShellExperience *)1);
                        LODWORD(v1832) = 40;
                        if ( !(unsigned int)off_180891448(v777, (struct CSingleViewShellExperience *)&v1832) )
                          goto LABEL_947;
                        off_180891480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1833 + 4));
                        off_180891480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1833 + 12));
                        v778 = 50 * (HIDWORD(v1833) - v774) / 100;
                        v779 = 50 * (v1834 - (_DWORD)v1619);
                      }
                      else
                      {
                        v1837 = 0LL;
                        v1835 = 0LL;
                        v1836 = 0LL;
                        v780 = (CToastCenterExperienceManager *)off_180891488[0](
                                                                  0LL,
                                                                  (struct CSingleViewShellExperience *)1);
                        LODWORD(v1835) = 40;
                        if ( !(unsigned int)off_180891448(v780, (struct CSingleViewShellExperience *)&v1835) )
                        {
LABEL_947:
                          v627 = 0;
                          goto LABEL_841;
                        }
                        off_180891480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1836 + 4));
                        off_180891480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1836 + 12));
                        if ( v1583 )
                          v778 = DWORD1(v1836) + 5 * HIDWORD(v1836) / 100;
                        else
                          v778 = 95 * (HIDWORD(v1836) - v774) / 100;
                        v779 = 95 * (v1837 - (_DWORD)v1619);
                      }
                      LODWORD(v1825) = v778;
                      DWORD1(v1825) = v779 / 100;
                      goto LABEL_947;
                    }
                    if ( (_DWORD)v1619 != 3 )
                      goto LABEL_888;
                  }
                  v755 = DWORD2(v1770);
                  v756 = HIDWORD(v1770);
                  goto LABEL_888;
                }
                HIDWORD(v1410) = 15;
              }
              LODWORD(v1410) = 11;
              goto LABEL_830;
            }
            v1581 = 0;
            v1606 = v1704;
            v699 = (__int16 *)&v1876;
            v1727 = 7312LL;
            *(_OWORD *)v1704 = 0LL;
            v697[2] = 0LL;
            v700 = 0;
            v701 = v697;
            v1617 = &v1876;
            while ( 2 )
            {
              v702 = *v699;
              v703 = word_1807A63E0;
              v704 = 0LL;
              while ( v702 != *v703 )
              {
                v704 = (unsigned int)(v704 + 1);
                ++v703;
                if ( (unsigned int)v704 >= 6 )
                  goto LABEL_786;
              }
              v705 = *((_QWORD *)v1868 + v704);
              v706 = -1LL;
              v1620 = v705;
              do
                ++v706;
              while ( *(_BYTE *)(v705 + v706) );
              v707 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_180891400[0])(
                       65001LL,
                       0LL,
                       v705,
                       (unsigned int)(v706 + 1),
                       0LL,
                       0);
              v1574 = v707;
              if ( v707 )
              {
                v708 = MemoryAlloc(2LL * v707);
                *v1606 = v708;
                if ( v708 )
                {
                  v709 = -1LL;
                  do
                    ++v709;
                  while ( *(_BYTE *)(v1620 + v709) );
                  if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _QWORD, LPVOID, int))off_180891400[0])(
                          65001LL,
                          0LL,
                          v1620,
                          (unsigned int)(v709 + 1),
                          v708,
                          v1574) )
                  {
                    v711 = GetLastError();
                    v627 = v711;
                    if ( v711 > 0 )
                      v627 = (unsigned __int16)v711 | 0x80070000;
                    v698 = v1727;
                    if ( v627 >= 0 )
                      v627 = -2147467259;
                    goto LABEL_798;
                  }
                  v701 = v1606;
                  v700 = v1581;
LABEL_786:
                  ++v700;
                  v699 = (__int16 *)((char *)v1617 + 2);
                  v1581 = v700;
                  ++v701;
                  v1617 = (char *)v1617 + 2;
                  v1606 = v701;
                  if ( v700 < 3 )
                    continue;
                  v710 = v697;
                  v697 = 0LL;
                  v1723 = v710;
                  v1804 = v1532;
                  v1704 = 0LL;
                }
                else
                {
                  v627 = -2147024882;
                }
              }
              else
              {
                v712 = GetLastError();
                v627 = v712;
                if ( v712 > 0 )
                  v627 = (unsigned __int16)v712 | 0x80070000;
                if ( v627 >= 0 )
                  v627 = -2147467259;
              }
              break;
            }
            v698 = v1727;
            goto LABEL_798;
          }
          v627 = GetLastError();
          v638 = v627 < 0;
          if ( v627 > 0 )
          {
            v627 = (unsigned __int16)v627 | 0x80070000;
            v638 = v627 < 0;
          }
          if ( !v638 )
            v627 = -2147467259;
        }
        else
        {
          v627 = -2147024882;
        }
        v628 = 0;
        goto LABEL_724;
      }
      v551 = dword_18089D72C;
LABEL_708:
      dword_18089D72C = v551 + 1;
      goto LABEL_709;
    }
    v477 = dword_18089D72C;
LABEL_660:
    dword_18089D72C = v477 + 1;
    goto LABEL_661;
  }
  v103 = v1620;
LABEL_1591:
  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
    ;
  v1360 = dword_18089D72C;
  if ( dword_18089D72C > 0 )
  {
    --dword_18089D72C;
    if ( v1360 == 1 )
    {
      v1361 = 4LL;
      v1362 = qword_180899E50;
      do
      {
        if ( *v1362 )
          FreeLibrary(*v1362);
        v1362 += 3;
        --v1361;
      }
      while ( v1361 );
      memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
      v1363 = 2LL;
      v1364 = off_180891340;
      v1365 = off_1806EF510;
      do
      {
        v1366 = *((_OWORD *)v1365 + 1);
        *(_OWORD *)v1364 = *(_OWORD *)v1365;
        v1367 = *((_OWORD *)v1365 + 2);
        *((_OWORD *)v1364 + 1) = v1366;
        v1368 = *((_OWORD *)v1365 + 3);
        *((_OWORD *)v1364 + 2) = v1367;
        v1369 = *((_OWORD *)v1365 + 4);
        *((_OWORD *)v1364 + 3) = v1368;
        v1370 = *((_OWORD *)v1365 + 5);
        *((_OWORD *)v1364 + 4) = v1369;
        v1371 = *((_OWORD *)v1365 + 6);
        *((_OWORD *)v1364 + 5) = v1370;
        v1372 = *((_OWORD *)v1365 + 7);
        v1365 += 16;
        *((_OWORD *)v1364 + 6) = v1371;
        v1364 += 16;
        *((_OWORD *)v1364 - 1) = v1372;
        --v1363;
      }
      while ( v1363 );
      LODWORD(v101) = 0;
      v1373 = *((_OWORD *)v1365 + 1);
      *(_OWORD *)v1364 = *(_OWORD *)v1365;
      v1374 = *((_OWORD *)v1365 + 2);
      *((_OWORD *)v1364 + 1) = v1373;
      v1375 = *((_OWORD *)v1365 + 3);
      *((_OWORD *)v1364 + 2) = v1374;
      v1376 = *((_OWORD *)v1365 + 4);
      *((_OWORD *)v1364 + 3) = v1375;
      v1377 = *((_OWORD *)v1365 + 5);
      *((_OWORD *)v1364 + 4) = v1376;
      v1378 = *((_OWORD *)v1365 + 6);
      *((_OWORD *)v1364 + 5) = v1377;
      *((_OWORD *)v1364 + 6) = v1378;
    }
  }
  _InterlockedExchange(&dword_18089D738, (__int32)v101);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1612);
  if ( v102 < 0 )
  {
    switch ( v102 )
    {
      case -805306316:
        v1653 = -1073418222;
LABEL_1610:
        v1379 = 0;
        goto LABEL_1614;
      case -805306139:
      case -1073425151:
        v1653 = -1073418201;
        goto LABEL_1610;
      case -805306306:
        v1653 = -1073418200;
        goto LABEL_1610;
    }
    v1653 = v102;
    if ( v102 != -2147024774 )
      goto LABEL_1610;
LABEL_1609:
    v1653 = -1073418210;
    goto LABEL_1610;
  }
  if ( v103 != 4 )
    goto LABEL_1609;
  v1379 = *(_DWORD *)v1705;
LABEL_1614:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1705);
  if ( v1653 < 0 )
    return !IsActiveSessionCountLimited();
  else
    return v1379 != 0;
}
