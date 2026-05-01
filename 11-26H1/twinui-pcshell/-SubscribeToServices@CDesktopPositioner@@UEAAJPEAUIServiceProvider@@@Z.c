/*
 * XREFs of ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180255130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180024C50 (-CopyTo@-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800EBD80 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800EBDAC (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800EBDE0 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800F5B04 (-IsUserOOBE@@YA_NXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180109F70 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@.c)
 *     RtlULongLongAdd @ 0x1801892D8 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18018AAB8 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1801A1320 (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1801D94A0 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x180200FC0 (-IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180235658 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
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

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::SubscribeToServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  __m128i v2; // xmm1
  struct IServiceProvider *v3; // rsi
  CDesktopPositioner *v4; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v6; // rbx
  int v7; // ebx
  __int64 v8; // rdx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v13; // rax
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v18; // rcx
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v20; // eax
  _BYTE *v21; // rdi
  int v22; // esi
  int v23; // r12d
  int v24; // r8d
  int v25; // r10d
  _BYTE *v26; // r14
  unsigned __int8 *v27; // r15
  __int64 v28; // r13
  int v29; // ebx
  int v30; // r11d
  int v31; // r10d
  unsigned int v32; // r8d
  int v33; // edx
  unsigned int v34; // r9d
  int v35; // r8d
  unsigned int v36; // r9d
  int v37; // r10d
  int v38; // edx
  int v39; // r8d
  unsigned int v40; // r9d
  int v41; // edx
  int v42; // r8d
  unsigned int v43; // r10d
  unsigned int v44; // r8d
  int v45; // r9d
  int v46; // edx
  unsigned int v47; // r8d
  int v48; // r9d
  int v49; // edx
  int v50; // r8d
  unsigned int v51; // r9d
  int v52; // edx
  unsigned __int64 v53; // rax
  char v54; // cl
  int v55; // esi
  unsigned int v56; // r12d
  int v57; // r13d
  HMODULE *v58; // rbx
  __int64 v59; // rdi
  void *v60; // rbx
  const WCHAR *v61; // rdx
  __int64 v62; // rax
  _BYTE *v63; // rdi
  HMODULE *v64; // r14
  __int64 v65; // rax
  char *v66; // rdx
  unsigned int v67; // r15d
  unsigned int v68; // r14d
  __int64 v69; // rcx
  const CHAR *v70; // rdx
  __int64 v71; // rax
  __int64 (__fastcall *v72)(); // rax
  HANDLE v73; // rax
  const wchar_t *v74; // rdi
  const wchar_t *v75; // rsi
  int v76; // r15d
  signed int v77; // r14d
  __int64 v78; // r13
  wchar_t *v79; // rax
  bool v80; // sf
  wchar_t *v81; // rbx
  __int64 v82; // r9
  wchar_t *v83; // rcx
  wchar_t *j; // r12
  wchar_t *v85; // r8
  signed int LastError; // eax
  __int64 (__fastcall *v87)(); // rbx
  DWORD CurrentThreadId; // eax
  __int64 v89; // r13
  const WCHAR *v90; // rax
  const WCHAR *v91; // rbx
  __int64 v92; // r9
  const WCHAR *v93; // rcx
  const WCHAR *k; // r12
  const WCHAR *v95; // r8
  signed int v96; // eax
  HANDLE CurrentProcess; // rax
  int v98; // edi
  HLOCAL v99; // rax
  int v100; // r15d
  __int32 v101; // esi
  void *v102; // r13
  HANDLE ProcessHeap; // rax
  _OWORD *v104; // r12
  HANDLE v105; // rax
  _QWORD *v106; // r9
  void *v107; // r9
  int v108; // eax
  int v109; // ecx
  int v110; // ebx
  void *v111; // r9
  int v112; // eax
  unsigned int v113; // r10d
  int v114; // eax
  unsigned int v115; // r10d
  int v116; // eax
  size_t v117; // rdx
  void *v118; // rdi
  HANDLE v119; // rax
  WCHAR *v120; // rdi
  HANDLE v121; // rax
  HANDLE v122; // rax
  HANDLE v123; // rax
  DWORD ModuleFileNameW; // eax
  void *v125; // r12
  int v126; // eax
  unsigned int v127; // r10d
  int v128; // eax
  unsigned int v129; // r10d
  int v130; // eax
  unsigned int v131; // ebx
  HANDLE v132; // rax
  void *v133; // rax
  int v134; // r9d
  unsigned int *v135; // r10
  unsigned int v136; // r11d
  int v137; // r10d
  unsigned int v138; // r11d
  int *v139; // r11
  unsigned __int64 v140; // r11
  unsigned int v141; // r10d
  unsigned int v142; // r9d
  unsigned int *v143; // r11
  int v144; // r9d
  __int64 v145; // r11
  int *v146; // r10
  unsigned __int64 v147; // r10
  unsigned int v148; // r9d
  int v149; // r11d
  _DWORD *v150; // r10
  int v151; // r9d
  size_t v152; // rdx
  int v153; // r11d
  int *v154; // r10
  unsigned __int64 v155; // r10
  unsigned int v156; // r9d
  _DWORD *v157; // r10
  unsigned int v158; // r11d
  int *v159; // r9
  unsigned int mm; // ebx
  unsigned __int64 v161; // r9
  _DWORD *v162; // r9
  __int64 v163; // r10
  __int64 v164; // r11
  int *v165; // r9
  unsigned __int64 v166; // r9
  unsigned int v167; // r11d
  _DWORD *v168; // r9
  int v169; // r9d
  int v170; // r10d
  unsigned int v171; // r11d
  int *v172; // r10
  unsigned __int64 v173; // r10
  unsigned int v174; // r9d
  unsigned int *v175; // r10
  unsigned int v176; // ecx
  unsigned int v177; // r9d
  unsigned int v178; // r11d
  unsigned int v179; // r11d
  unsigned int v180; // r11d
  unsigned int v181; // r11d
  unsigned __int16 *v182; // rbx
  unsigned int v183; // r9d
  int v184; // r15d
  unsigned int v185; // ecx
  unsigned int v186; // ebx
  HANDLE v187; // rax
  unsigned __int16 *v188; // rax
  unsigned int v189; // r9d
  unsigned __int16 *v190; // rcx
  SIZE_T v191; // rcx
  HANDLE v192; // rax
  unsigned __int64 v193; // r15
  void *v194; // rdx
  unsigned __int8 v195; // al
  unsigned int v196; // r10d
  unsigned __int64 v197; // rcx
  unsigned __int16 *v198; // r11
  SIZE_T v199; // rcx
  unsigned int v200; // r9d
  unsigned int v201; // r15d
  unsigned __int64 v202; // r8
  int v203; // edx
  int v204; // r15d
  char v205; // r9
  int v206; // r8d
  int v207; // ecx
  unsigned int v208; // r15d
  unsigned int v209; // ecx
  unsigned int v210; // r10d
  unsigned int v211; // ebx
  _BYTE *v212; // r14
  char v213; // si
  SIZE_T v214; // rdi
  int v215; // r10d
  int v216; // r13d
  int v217; // r8d
  unsigned __int8 *v218; // rdx
  char *v219; // r14
  int v220; // edi
  int v221; // eax
  int v222; // ebx
  int v223; // r11d
  int v224; // r15d
  int v225; // edx
  int v226; // r10d
  int v227; // r8d
  int v228; // r9d
  unsigned int v229; // edx
  int v230; // r8d
  int v231; // ecx
  int v232; // edx
  int v233; // r8d
  int v234; // r9d
  int v235; // edx
  unsigned int v236; // r8d
  unsigned int v237; // r9d
  int v238; // edx
  int v239; // r8d
  int v240; // r9d
  int v241; // edx
  int v242; // r8d
  int v243; // r10d
  int v244; // edx
  int v245; // r9d
  unsigned int v246; // r8d
  int v247; // edx
  _BYTE *v248; // rdx
  void *v249; // r15
  HANDLE v250; // rax
  unsigned int *v251; // rbx
  HANDLE v252; // rax
  void *v253; // rax
  HANDLE v254; // rax
  _OWORD *v255; // rax
  HANDLE v256; // rax
  _QWORD *v257; // rax
  int v258; // r15d
  HANDLE v259; // rax
  HANDLE v260; // rax
  HANDLE v261; // rax
  HANDLE v262; // rax
  void *v263; // r12
  HANDLE v264; // rax
  unsigned __int16 *v265; // r13
  HANDLE v266; // rax
  HANDLE v267; // rax
  HANDLE v268; // rax
  HANDLE v269; // rax
  unsigned __int16 *v270; // r9
  int v271; // r10d
  size_t v272; // r11
  int v273; // r15d
  int v274; // r10d
  unsigned int v275; // ebx
  HANDLE v276; // rax
  _DWORD *v277; // rax
  void *v278; // rcx
  void *v279; // r13
  void *v280; // rcx
  void *v281; // rcx
  HANDLE v282; // rax
  int v283; // eax
  size_t v284; // r9
  unsigned int v285; // ecx
  _OWORD *v286; // r11
  LPVOID v287; // rcx
  unsigned int v288; // r11d
  void *v289; // r10
  HANDLE v290; // rax
  LPVOID v291; // rbx
  HANDLE v292; // rax
  HANDLE v293; // rax
  HANDLE v294; // rax
  HANDLE v295; // rax
  void *v296; // rbx
  HANDLE v297; // rax
  void *v298; // rbx
  HANDLE v299; // rax
  LPVOID v300; // rbx
  HANDLE v301; // rax
  HANDLE v302; // rax
  HANDLE v303; // rax
  HANDLE v304; // rax
  unsigned __int16 *v305; // rbx
  HANDLE v306; // rax
  _DWORD *v307; // rcx
  int v308; // r11d
  unsigned int v309; // r10d
  int v310; // r10d
  int v311; // r10d
  int v312; // r9d
  unsigned int v313; // ebx
  HANDLE v314; // rax
  void *v315; // r11
  void *v316; // rax
  void *v317; // rcx
  signed int v318; // eax
  FARPROC v319; // rax
  int v320; // eax
  unsigned int v321; // ebx
  void *v322; // r9
  void *v323; // r10
  SIZE_T v324; // r11
  void *v325; // rax
  _OWORD *v326; // rcx
  _QWORD *v327; // r13
  __int64 v328; // r12
  int v329; // r15d
  SIZE_T v330; // r12
  HANDLE v331; // rax
  _DWORD *v332; // rax
  _QWORD *v333; // rbx
  size_t v334; // rax
  unsigned int v335; // r15d
  HANDLE v336; // rax
  void *v337; // rax
  HANDLE v338; // rax
  void *v339; // rax
  const void *v340; // r12
  size_t v341; // rax
  unsigned int v342; // r15d
  HANDLE v343; // rax
  void *v344; // rax
  void *v345; // r12
  HANDLE v346; // rax
  void *v347; // r12
  HANDLE v348; // rax
  void *v349; // r12
  HANDLE v350; // rax
  HANDLE v351; // rax
  void *v352; // r15
  void *v353; // rbx
  HANDLE v354; // rax
  void *v355; // rbx
  HANDLE v356; // rax
  void *v357; // rbx
  HANDLE v358; // rax
  HANDLE v359; // rax
  unsigned __int16 *v360; // r10
  void *v361; // rcx
  SIZE_T v362; // r9
  size_t v363; // r11
  void *v364; // rax
  unsigned __int8 v365; // dl
  void *v366; // r8
  LPVOID v367; // rbx
  char v368; // r10
  _OWORD *v369; // rax
  unsigned __int8 *v370; // rdi
  int v371; // edx
  int v372; // eax
  unsigned int v373; // r9d
  unsigned int v374; // r11d
  int v375; // ecx
  unsigned int v376; // eax
  int v377; // esi
  unsigned __int16 *v378; // r14
  char v379; // r15
  SIZE_T v380; // rdi
  int v381; // r11d
  int v382; // edx
  int v383; // r10d
  unsigned int v384; // r13d
  unsigned __int8 *v385; // rcx
  char *v386; // rsi
  int v387; // r15d
  int v388; // r12d
  int v389; // edi
  int v390; // ebx
  int v391; // r8d
  int v392; // r9d
  unsigned int v393; // ecx
  int v394; // r8d
  int v395; // r9d
  unsigned int v396; // ecx
  int v397; // r8d
  int v398; // r10d
  int v399; // r11d
  unsigned int v400; // r9d
  int v401; // r8d
  unsigned int v402; // r9d
  int v403; // r10d
  int v404; // r11d
  int v405; // ecx
  int v406; // r8d
  int v407; // r9d
  int v408; // ecx
  int v409; // r10d
  int v410; // r8d
  unsigned int v411; // ecx
  int v412; // r11d
  _BYTE *v413; // rcx
  unsigned __int64 v414; // rax
  void *v415; // r11
  size_t v416; // r9
  int v417; // r15d
  unsigned __int16 *v418; // r10
  void *v419; // r11
  unsigned __int16 *v420; // r9
  unsigned __int16 *v421; // r10
  void *v422; // r11
  void *v423; // rbx
  unsigned __int16 *v424; // r10
  void *v425; // r11
  SIZE_T v426; // r9
  void *v427; // rbx
  void *v428; // rax
  int *v429; // r9
  int v430; // eax
  unsigned __int64 v431; // r9
  void *v432; // r10
  void *v433; // r11
  size_t v434; // rcx
  unsigned int v435; // ecx
  unsigned int v436; // ebx
  HANDLE v437; // rax
  void *v438; // rbx
  WCHAR *v439; // rcx
  int v440; // r11d
  int *v441; // r15
  __int64 v442; // r10
  unsigned int v443; // r9d
  int v444; // r11d
  int v445; // r9d
  size_t *v446; // rax
  void *v447; // rcx
  unsigned int v448; // r10d
  int v449; // r9d
  int v450; // r9d
  void *v451; // r11
  int *v452; // rax
  LPVOID v453; // rcx
  __int64 v454; // r11
  unsigned int v455; // r10d
  int v456; // r9d
  unsigned int *v457; // rcx
  unsigned int v458; // ebx
  int v459; // r9d
  int v460; // r9d
  _DWORD *v461; // rax
  unsigned int *v462; // rcx
  unsigned int v463; // ebx
  int v464; // r9d
  int v465; // r9d
  size_t v466; // r10
  const void *v467; // r11
  int *v468; // rbx
  unsigned int v469; // edi
  int v470; // eax
  char *v471; // r12
  int v472; // r13d
  int v473; // ecx
  int v474; // r9d
  int v475; // r8d
  _BYTE *v476; // r14
  unsigned __int8 *v477; // rsi
  __int64 v478; // rdi
  int v479; // ebx
  int v480; // r11d
  int v481; // edx
  unsigned int v482; // r8d
  int v483; // r9d
  unsigned int v484; // r10d
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
  int v502; // edx
  unsigned __int64 v503; // rax
  char v504; // cl
  _BYTE *v505; // r12
  int v506; // r13d
  HMODULE *v507; // rbx
  __int64 v508; // r12
  const WCHAR *v509; // rdx
  __int64 v510; // rax
  _BYTE *v511; // r12
  HMODULE *v512; // rbx
  __int64 v513; // rax
  char *v514; // rdx
  SIZE_T v515; // rcx
  unsigned int v516; // ebx
  __int64 v517; // rcx
  const CHAR *v518; // rdx
  __int64 v519; // rax
  __int64 (__fastcall *v520)(); // rax
  void *v521; // rbx
  HANDLE v522; // rax
  int v523; // eax
  const WCHAR *v524; // rax
  int v525; // r13d
  int v526; // ecx
  int v527; // r8d
  int v528; // r10d
  _BYTE *v529; // r14
  unsigned __int8 *v530; // rsi
  __int64 v531; // rdi
  int v532; // ebx
  int v533; // r11d
  int v534; // r10d
  unsigned int v535; // r8d
  int v536; // edx
  unsigned int v537; // r9d
  int v538; // r8d
  unsigned int v539; // r9d
  int v540; // r10d
  int v541; // edx
  int v542; // r8d
  unsigned int v543; // r9d
  int v544; // edx
  int v545; // r8d
  unsigned int v546; // r10d
  unsigned int v547; // r8d
  int v548; // r9d
  int v549; // edx
  unsigned int v550; // r8d
  int v551; // r9d
  int v552; // edx
  int v553; // r8d
  unsigned int v554; // r9d
  int v555; // edx
  unsigned __int64 v556; // rax
  char v557; // cl
  WCHAR *v558; // r12
  int v559; // r13d
  HMODULE *v560; // rbx
  __int64 v561; // r12
  const WCHAR *v562; // rdx
  __int64 v563; // rax
  WCHAR *v564; // r12
  HMODULE *v565; // rbx
  __int64 v566; // rax
  char *v567; // rdx
  LPCWSTR v568; // rcx
  unsigned int v569; // ebx
  __int64 v570; // rcx
  const CHAR *v571; // rdx
  __int64 v572; // rax
  __int64 (__fastcall *v573)(); // rax
  void *v574; // rbx
  HANDLE v575; // rax
  int v576; // r13d
  signed int v577; // eax
  signed int v578; // ebx
  bool v579; // sf
  LPVOID v580; // rax
  LPVOID v581; // rax
  __int64 v582; // r12
  WCHAR *v583; // rsi
  unsigned int ii; // r14d
  __int64 v585; // rax
  size_t v586; // rax
  unsigned int v587; // r10d
  unsigned int v588; // ebx
  _DWORD *v589; // rax
  unsigned int *v590; // rdx
  unsigned int v591; // r8d
  unsigned int v592; // r11d
  unsigned int v593; // ecx
  const wchar_t *v594; // rcx
  const wchar_t **v595; // rdx
  __int64 v596; // r8
  __int64 v597; // rax
  __int64 v598; // rcx
  const WCHAR *v599; // rax
  int v600; // edi
  int v601; // r13d
  int v602; // edx
  int v603; // r9d
  _BYTE *v604; // rbx
  unsigned __int8 *v605; // rsi
  __int64 v606; // r14
  int v607; // r11d
  int v608; // r10d
  int v609; // r9d
  unsigned int v610; // edx
  int v611; // ecx
  unsigned int v612; // r8d
  int v613; // edx
  unsigned int v614; // r8d
  int v615; // r9d
  int v616; // ecx
  int v617; // edx
  unsigned int v618; // r8d
  int v619; // ecx
  int v620; // edx
  unsigned int v621; // r9d
  unsigned int v622; // edx
  int v623; // r8d
  int v624; // ecx
  unsigned int v625; // edx
  int v626; // r8d
  int v627; // ecx
  int v628; // edx
  unsigned int v629; // r8d
  int v630; // ecx
  unsigned __int64 v631; // rax
  __m128 v632; // xmm1
  __m128 v633; // xmm0
  __m128 v634; // xmm1
  __m128 v635; // xmm1
  __m128 v636; // xmm1
  __int64 v637; // rdx
  unsigned int v638; // r11d
  __int64 *v639; // r8
  __int64 v640; // r10
  int v641; // r9d
  unsigned int v642; // ecx
  __int64 v643; // rax
  LPVOID v644; // rax
  __int64 v645; // rax
  unsigned int v646; // r12d
  unsigned int v647; // ecx
  __int16 *v648; // rax
  SIZE_T v649; // rax
  __int64 v650; // r9
  int v651; // eax
  LPVOID v652; // rdx
  __int64 v653; // r9
  SIZE_T v654; // rax
  signed int v655; // eax
  signed int v656; // eax
  __int64 v657; // rdx
  __int16 v658; // r10
  void **v659; // r12
  const WCHAR *v660; // rax
  _BYTE *v661; // rcx
  __int64 v662; // rax
  __int64 jj; // rax
  _BYTE *v664; // rax
  __int64 v665; // rdx
  __int64 kk; // rcx
  void **v667; // rax
  signed int v668; // eax
  unsigned int v669; // r12d
  const WCHAR *v670; // rax
  bool v671; // sf
  int v672; // eax
  HMODULE *v673; // r12
  __int64 v674; // r13
  int v675; // edi
  unsigned int v676; // ebx
  int v677; // r12d
  CToastCenterExperienceManager *v678; // r13
  __int64 v679; // rax
  __int64 v680; // rax
  bool v681; // sf
  unsigned __int16 *v682; // rax
  signed int v683; // eax
  __int64 v684; // rax
  signed int v685; // eax
  unsigned int v686; // edx
  int v687; // eax
  __int32 v688; // r12d
  void *v689; // rbx
  void *v690; // rbx
  __int64 v691; // rdx
  bool v692; // sf
  __int64 v693; // rax
  bool v694; // sf
  void *v695; // rbx
  __int64 v696; // r12
  int v697; // eax
  int v698; // eax
  unsigned int v699; // ebx
  unsigned __int64 v700; // rdx
  __int32 v701; // edx
  int v702; // r12d
  int v703; // ebx
  int v704; // r13d
  int v705; // r13d
  CToastCenterExperienceManager *v706; // rax
  int v707; // edx
  int v708; // ecx
  CToastCenterExperienceManager *v709; // rax
  int v710; // eax
  void *v711; // rbx
  __int64 v712; // rax
  unsigned __int16 *v713; // rax
  unsigned __int16 *v714; // r13
  unsigned __int16 *v715; // rax
  unsigned __int16 *v716; // rbx
  signed int v717; // ebx
  bool v718; // sf
  int v719; // eax
  void *v720; // rcx
  __int64 (__fastcall *v721)(); // rbx
  __int64 v722; // rax
  __int32 v723; // ebx
  __int32 v724; // edx
  __int32 v725; // r10d
  __int32 v726; // r8d
  const WCHAR *v727; // r9
  int v728; // ecx
  int v729; // eax
  unsigned __int8 *v730; // rdx
  char *v731; // rax
  int v732; // r9d
  size_t v733; // r14
  char v734; // si
  unsigned __int8 *v735; // r10
  __int64 v736; // r11
  size_t v737; // r8
  int v738; // r9d
  bool v739; // zf
  void *v740; // rbx
  size_t v741; // r13
  __int64 v742; // rax
  unsigned __int16 *v743; // rax
  unsigned __int16 *v744; // r13
  unsigned __int16 *v745; // rax
  unsigned __int16 *v746; // rbx
  signed int v747; // ebx
  bool v748; // sf
  int v749; // eax
  void *v750; // rcx
  __int64 (__fastcall *v751)(); // rbx
  __int64 v752; // rax
  __int32 v753; // ebx
  int v754; // eax
  __int32 v755; // edx
  __int32 v756; // r11d
  __int32 v757; // r8d
  const WCHAR *v758; // r9
  int v759; // edi
  int v760; // eax
  unsigned __int8 *v761; // rdx
  char *v762; // rax
  signed int v763; // r9d
  unsigned __int8 *v764; // r10
  __int64 v765; // r11
  size_t v766; // r8
  char v767; // r14
  int v768; // r9d
  void *v769; // rbx
  char v770; // al
  int v771; // r13d
  __int32 v772; // eax
  __int32 v773; // r9d
  __int32 v774; // r12d
  void *v775; // rax
  void *v776; // rbx
  __int64 v777; // rax
  unsigned __int16 *v778; // rax
  CToastCenterExperienceManager *v779; // rbx
  void *v780; // rcx
  __int64 v781; // rax
  __int64 v782; // rcx
  _BYTE *m; // rax
  __int64 v784; // rax
  __int64 v785; // rcx
  _BYTE *n; // rax
  _BYTE *v787; // rcx
  __int64 v788; // rax
  __int64 v789; // rax
  int v790; // eax
  HMODULE *v791; // rbx
  __int64 v792; // rdi
  int v793; // ebx
  void *v794; // r13
  unsigned __int16 *v795; // rax
  signed int v796; // eax
  signed int v797; // ebx
  int v798; // eax
  void *v799; // rcx
  __int64 (__fastcall *v800)(); // rbx
  __int64 v801; // rax
  int v802; // r8d
  int v803; // r11d
  int v804; // ecx
  int v805; // edx
  int v806; // r13d
  unsigned __int64 v807; // rax
  unsigned __int8 *v808; // r8
  char *v809; // rax
  char v810; // r14
  unsigned __int8 *v811; // r10
  __int64 v812; // r11
  __int64 v813; // r8
  signed int v814; // esi
  int v815; // r9d
  void *v816; // rbx
  __int64 v817; // rax
  CToastCenterExperienceManager *v818; // rax
  CToastCenterExperienceManager *v819; // r13
  int v820; // ebx
  unsigned __int16 *v821; // rax
  signed int v822; // ebx
  bool v823; // sf
  int v824; // eax
  unsigned __int16 *v825; // rcx
  __int64 (__fastcall *v826)(); // rbx
  __int64 v827; // rax
  int v828; // ebx
  int v829; // eax
  int v830; // edx
  int v831; // ecx
  int v832; // r8d
  void *v833; // r9
  int v834; // eax
  int v835; // ecx
  int v836; // eax
  unsigned __int16 *v837; // rdx
  SIZE_T v838; // rax
  int v839; // r9d
  unsigned int v840; // esi
  unsigned __int8 *v841; // r10
  SIZE_T v842; // r11
  size_t v843; // r8
  char v844; // di
  int v845; // r9d
  int v846; // eax
  const WCHAR *v847; // rax
  int v848; // esi
  int v849; // r14d
  int v850; // r8d
  int v851; // r10d
  _BYTE *v852; // r13
  unsigned __int8 *v853; // r12
  __int64 v854; // rcx
  int v855; // ebx
  int v856; // r11d
  int v857; // r10d
  unsigned int v858; // r8d
  int v859; // edx
  unsigned int v860; // r9d
  int v861; // r8d
  unsigned int v862; // r9d
  int v863; // r10d
  int v864; // edx
  int v865; // r8d
  unsigned int v866; // r9d
  int v867; // edx
  int v868; // r8d
  unsigned int v869; // r10d
  unsigned int v870; // r8d
  int v871; // r9d
  int v872; // edx
  unsigned int v873; // r8d
  int v874; // r9d
  int v875; // edx
  int v876; // r8d
  unsigned int v877; // r9d
  int v878; // edx
  unsigned __int64 v879; // rax
  char v880; // cl
  LPCWSTR v881; // rdi
  int v882; // r12d
  HMODULE *v883; // rbx
  __int64 v884; // rdi
  WCHAR *v885; // rbx
  const WCHAR *v886; // rdx
  __int64 v887; // rax
  const WCHAR *v888; // rdi
  HMODULE *v889; // r13
  __int64 v890; // rax
  char *v891; // rdx
  LPCWSTR v892; // rcx
  unsigned int v893; // r13d
  __int64 v894; // rcx
  const CHAR *v895; // rdx
  __int64 v896; // rax
  __int64 (__fastcall *v897)(); // rax
  HANDLE v898; // rax
  __int64 v899; // rdi
  int v900; // eax
  HMODULE *v901; // rbx
  WCHAR *v902; // r13
  HANDLE v903; // rax
  _OWORD *v904; // rax
  size_t v905; // rdi
  HANDLE v906; // rax
  _QWORD *v907; // rax
  int v908; // eax
  WCHAR *v909; // r9
  int v910; // r10d
  int v911; // eax
  int v912; // r10d
  int v913; // r11d
  int v914; // eax
  int v915; // r10d
  int v916; // r11d
  int v917; // eax
  int v918; // r11d
  unsigned int v919; // ebx
  HANDLE v920; // rax
  void *v921; // rax
  int v922; // r10d
  _DWORD *v923; // r11
  int v924; // r11d
  void *v925; // rbx
  void *v926; // rdi
  HANDLE v927; // rax
  HANDLE v928; // rax
  HANDLE v929; // rax
  HANDLE v930; // rax
  __int64 v931; // r10
  int *v932; // r9
  unsigned int v933; // edi
  unsigned __int64 v934; // r9
  unsigned int v935; // r11d
  unsigned int *v936; // r9
  unsigned int v937; // r10d
  size_t v938; // r8
  int v939; // r9d
  __int64 v940; // r10
  int *v941; // r10
  unsigned __int64 v942; // r10
  unsigned int v943; // r9d
  int v944; // r11d
  _DWORD *v945; // r10
  int v946; // r9d
  int v947; // r10d
  int *v948; // r10
  unsigned __int64 v949; // r10
  unsigned int v950; // r9d
  int v951; // r11d
  _DWORD *v952; // r10
  unsigned int v953; // ecx
  int v954; // r10d
  unsigned int v955; // r9d
  unsigned int *v956; // r10
  unsigned int *v957; // rdi
  int v958; // ebx
  unsigned int v959; // r9d
  unsigned __int16 *v960; // r10
  unsigned int v961; // ecx
  unsigned int v962; // ebx
  HANDLE v963; // rax
  unsigned __int16 *v964; // rax
  unsigned int v965; // r10d
  size_t v966; // rcx
  SIZE_T v967; // rcx
  size_t v968; // r9
  int v969; // ebx
  unsigned __int8 *v970; // rbx
  char *v971; // rcx
  unsigned int v972; // r10d
  unsigned __int8 v973; // al
  unsigned __int64 v974; // rdx
  unsigned __int16 *v975; // r8
  unsigned __int8 *v976; // r11
  unsigned int v977; // r9d
  int v978; // edx
  unsigned int v979; // ecx
  char v980; // r10
  int v981; // r14d
  int v982; // esi
  int v983; // r9d
  HANDLE v984; // rax
  unsigned int v985; // r9d
  unsigned int v986; // ecx
  int v987; // ebx
  _BYTE *v988; // r14
  unsigned int v989; // esi
  char v990; // di
  char *v991; // rax
  int v992; // r12d
  int v993; // r8d
  _BYTE *v994; // r13
  unsigned __int8 *v995; // rdx
  SIZE_T v996; // r14
  int v997; // edi
  int v998; // eax
  int v999; // ebx
  int v1000; // r11d
  int v1001; // r9d
  int v1002; // edx
  int v1003; // r10d
  int v1004; // r8d
  int v1005; // r9d
  unsigned int v1006; // edx
  int v1007; // r8d
  int v1008; // ecx
  int v1009; // edx
  int v1010; // r8d
  int v1011; // r9d
  int v1012; // edx
  unsigned int v1013; // r8d
  unsigned int v1014; // r9d
  int v1015; // edx
  int v1016; // r8d
  int v1017; // r9d
  int v1018; // edx
  int v1019; // r8d
  int v1020; // r10d
  int v1021; // edx
  int v1022; // r9d
  unsigned int v1023; // r8d
  int v1024; // edx
  const void *v1025; // rbx
  HANDLE v1026; // rax
  unsigned int *v1027; // rsi
  HANDLE v1028; // rax
  void *v1029; // rax
  HANDLE v1030; // rax
  _OWORD *v1031; // rax
  int v1032; // ebx
  HANDLE v1033; // rax
  _QWORD *v1034; // rax
  HANDLE v1035; // rax
  HANDLE v1036; // rax
  HANDLE v1037; // rax
  HANDLE v1038; // rax
  unsigned __int16 *v1039; // rsi
  unsigned __int16 *v1040; // r12
  HANDLE v1041; // rax
  void *v1042; // r13
  HANDLE v1043; // rax
  void *v1044; // r13
  HANDLE v1045; // rax
  void *v1046; // r13
  HANDLE v1047; // rax
  HANDLE v1048; // rax
  unsigned __int16 *v1049; // rsi
  int v1050; // ebx
  LPCWSTR v1051; // r10
  size_t v1052; // r11
  unsigned int v1053; // r13d
  HANDLE v1054; // rax
  _DWORD *v1055; // rax
  void *v1056; // rcx
  void *v1057; // r12
  void *v1058; // rcx
  void *v1059; // rcx
  HANDLE v1060; // rax
  int v1061; // eax
  unsigned int v1062; // ecx
  LPCWSTR v1063; // rcx
  unsigned int v1064; // r10d
  void *v1065; // r9
  LPCWSTR v1066; // rcx
  unsigned int v1067; // r11d
  int v1068; // r10d
  unsigned int v1069; // r10d
  int v1070; // r10d
  int v1071; // r10d
  int v1072; // r9d
  unsigned int v1073; // edi
  HANDLE v1074; // rax
  void *v1075; // r9
  void *v1076; // rax
  signed int v1077; // eax
  FARPROC ProcAddress; // rax
  int v1079; // eax
  unsigned int v1080; // edi
  void *v1081; // r10
  unsigned __int16 *v1082; // r11
  unsigned __int16 *v1083; // rax
  WCHAR *v1084; // rcx
  size_t v1085; // rdx
  unsigned int *v1086; // rsi
  SIZE_T v1087; // r13
  int v1088; // ebx
  __int64 v1089; // r9
  SIZE_T v1090; // r12
  int v1091; // r9d
  unsigned int v1092; // r9d
  unsigned int v1093; // r9d
  int v1094; // r9d
  HANDLE v1095; // rax
  _QWORD *v1096; // rax
  _QWORD *v1097; // rdi
  HANDLE v1098; // rax
  void *v1099; // rax
  const void *v1100; // r13
  HANDLE v1101; // rax
  void *v1102; // rax
  LPCWSTR v1103; // r12
  unsigned int v1104; // eax
  size_t v1105; // r13
  HANDLE v1106; // rax
  void *v1107; // rax
  void *v1108; // r12
  HANDLE v1109; // rax
  void *v1110; // r12
  HANDLE v1111; // rax
  void *v1112; // r12
  HANDLE v1113; // rax
  HANDLE v1114; // rax
  unsigned int *v1115; // rax
  void *v1116; // rdi
  HANDLE v1117; // rax
  void *v1118; // rdi
  HANDLE v1119; // rax
  void *v1120; // rdi
  HANDLE v1121; // rax
  HANDLE v1122; // rax
  int *v1123; // r9
  unsigned int *v1124; // rcx
  unsigned __int16 *v1125; // r10
  const WCHAR *v1126; // r11
  size_t v1127; // rbx
  void *v1128; // rax
  unsigned __int8 v1129; // dl
  unsigned __int16 *v1130; // r14
  int v1131; // edx
  int v1132; // r9d
  int v1133; // r15d
  int v1134; // r10d
  int v1135; // ecx
  unsigned int v1136; // r8d
  unsigned int v1137; // r10d
  unsigned int v1138; // r11d
  unsigned int v1139; // eax
  int v1140; // ecx
  _BYTE *v1141; // rbx
  int v1142; // r14d
  unsigned int v1143; // r11d
  char *v1144; // rbx
  int v1145; // edx
  _BYTE *v1146; // r13
  unsigned __int8 *v1147; // r15
  int v1148; // esi
  char *v1149; // r12
  int v1150; // edi
  int v1151; // ebx
  unsigned int v1152; // r8d
  int v1153; // r9d
  unsigned int v1154; // ecx
  int v1155; // r8d
  int v1156; // r9d
  unsigned int v1157; // ecx
  int v1158; // r8d
  int v1159; // r10d
  int v1160; // r11d
  unsigned int v1161; // r9d
  int v1162; // r8d
  unsigned int v1163; // r9d
  int v1164; // ecx
  int v1165; // r8d
  int v1166; // r9d
  int v1167; // ecx
  int v1168; // r8d
  int v1169; // r9d
  int v1170; // r10d
  int v1171; // ecx
  unsigned int v1172; // r8d
  unsigned __int64 v1173; // rax
  unsigned int *v1174; // r11
  int v1175; // ebx
  void *v1176; // r9
  unsigned int *v1177; // r11
  LPVOID v1178; // rdx
  WCHAR *v1179; // r8
  void *v1180; // r9
  void *v1181; // r9
  LPVOID v1182; // rax
  unsigned __int64 v1183; // r11
  LPVOID v1184; // r14
  unsigned __int16 *v1185; // r9
  int *v1186; // r11
  unsigned __int64 v1187; // r11
  void *v1188; // r10
  void *v1189; // r9
  unsigned int v1190; // ecx
  unsigned int v1191; // ebx
  HANDLE v1192; // rax
  void *v1193; // r14
  int v1194; // eax
  HANDLE v1195; // rax
  void *v1196; // rsi
  HANDLE v1197; // rax
  void *v1198; // rsi
  HANDLE v1199; // rax
  void *v1200; // rsi
  HANDLE v1201; // rax
  HANDLE v1202; // rax
  void *v1203; // rdi
  HANDLE v1204; // rax
  void *v1205; // rdi
  HANDLE v1206; // rax
  _QWORD *v1207; // rdi
  void *v1208; // rsi
  HANDLE v1209; // rax
  void *v1210; // rsi
  HANDLE v1211; // rax
  void *v1212; // rsi
  HANDLE v1213; // rax
  HANDLE v1214; // rax
  void *v1215; // rdi
  HANDLE v1216; // rax
  unsigned int v1217; // esi
  void *v1218; // r9
  int v1219; // r10d
  int *v1220; // rax
  unsigned int *v1221; // r9
  int v1222; // r10d
  void *v1223; // rax
  int v1224; // eax
  HMODULE *v1225; // rbx
  __int64 v1226; // rdi
  int v1227; // ebx
  Windows::Internal::DeviceCapabilitiesW *v1228; // rcx
  bool IsScreenSizeRequirementMet; // al
  HRESULT (__stdcall *v1230)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v1231; // rdx
  char *v1232; // rdx
  HRESULT (__stdcall *v1233)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v1234; // rdi
  __int64 (__fastcall *v1235)(__int64, __int64, __int64 *); // rbx
  int v1236; // eax
  __int64 v1237; // rdx
  unsigned int i; // esi
  __int64 v1239; // rdi
  int (__fastcall *v1240)(__int64, _QWORD, __int64 *); // rbx
  int v1241; // eax
  int v1242; // eax
  int v1243; // eax
  __int64 v1244; // rdx
  char *v1245; // rdx
  unsigned __int8 v1247; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1248; // [rsp+60h] [rbp-A0h]
  int v1249[3]; // [rsp+64h] [rbp-9Ch] BYREF
  LPCWSTR v1250; // [rsp+70h] [rbp-90h] BYREF
  SIZE_T v1251; // [rsp+78h] [rbp-88h] BYREF
  LPCWSTR lpModuleName; // [rsp+80h] [rbp-80h] BYREF
  size_t pcchLength; // [rsp+88h] [rbp-78h] BYREF
  size_t v1254; // [rsp+90h] [rbp-70h] BYREF
  void *Ptr; // [rsp+98h] [rbp-68h] BYREF
  LPVOID v1256; // [rsp+A0h] [rbp-60h] BYREF
  SIZE_T Size; // [rsp+A8h] [rbp-58h] BYREF
  size_t v1258; // [rsp+B0h] [rbp-50h] BYREF
  void *v1259; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 *v1260; // [rsp+C0h] [rbp-40h]
  SIZE_T dwBytes; // [rsp+C8h] [rbp-38h] BYREF
  LPVOID v1262; // [rsp+D0h] [rbp-30h] BYREF
  LPVOID v1263; // [rsp+D8h] [rbp-28h]
  LPVOID v1264; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 *v1265; // [rsp+E8h] [rbp-18h] BYREF
  void *Src; // [rsp+F0h] [rbp-10h] BYREF
  SIZE_T v1267; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID v1268; // [rsp+100h] [rbp+0h]
  SIZE_T v1269; // [rsp+108h] [rbp+8h] BYREF
  void *v1270[2]; // [rsp+110h] [rbp+10h] BYREF
  void *v1271; // [rsp+120h] [rbp+20h]
  void *v1272; // [rsp+128h] [rbp+28h] BYREF
  SIZE_T v1273; // [rsp+130h] [rbp+30h] BYREF
  size_t v1274; // [rsp+138h] [rbp+38h] BYREF
  __int32 v1275; // [rsp+140h] [rbp+40h]
  SIZE_T v1276; // [rsp+148h] [rbp+48h]
  __int64 v1277; // [rsp+150h] [rbp+50h]
  int v1278; // [rsp+158h] [rbp+58h]
  int v1279; // [rsp+15Ch] [rbp+5Ch]
  unsigned int v1280; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1281; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1282; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1283; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v1284; // [rsp+170h] [rbp+70h]
  unsigned int v1285; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1286; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1287; // [rsp+180h] [rbp+80h] BYREF
  int v1288; // [rsp+184h] [rbp+84h]
  unsigned int v1289; // [rsp+188h] [rbp+88h] BYREF
  int v1290; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1291; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1292; // [rsp+194h] [rbp+94h] BYREF
  int v1293; // [rsp+19Ch] [rbp+9Ch]
  int v1294; // [rsp+1A0h] [rbp+A0h]
  unsigned int v1295[3]; // [rsp+1A4h] [rbp+A4h] BYREF
  void *v1296; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v1297[7]; // [rsp+1B8h] [rbp+B8h] BYREF
  HMODULE phModule; // [rsp+1F0h] [rbp+F0h] BYREF
  LPVOID v1299; // [rsp+200h] [rbp+100h]
  LPVOID v1300; // [rsp+210h] [rbp+110h]
  LPCWSTR v1301; // [rsp+218h] [rbp+118h] BYREF
  __int64 v1302; // [rsp+220h] [rbp+120h]
  struct IServiceProvider *v1303; // [rsp+238h] [rbp+138h]
  __int64 v1304; // [rsp+248h] [rbp+148h] BYREF
  __int64 v1305; // [rsp+250h] [rbp+150h] BYREF
  __int64 v1306; // [rsp+258h] [rbp+158h] BYREF
  __int64 v1307; // [rsp+260h] [rbp+160h] BYREF
  CDesktopPositioner *v1308; // [rsp+268h] [rbp+168h]
  __int64 v1309[4]; // [rsp+270h] [rbp+170h] BYREF
  HMODULE hModule; // [rsp+290h] [rbp+190h] BYREF
  __int64 v1311; // [rsp+298h] [rbp+198h] BYREF
  __int64 v1312; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v1313; // [rsp+2A8h] [rbp+1A8h] BYREF
  LPVOID lpMem[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int128 v1315; // [rsp+2C0h] [rbp+1C0h]
  __int128 v1316; // [rsp+2D0h] [rbp+1D0h] BYREF
  size_t v1317[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int128 v1318; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v1319; // [rsp+300h] [rbp+200h]
  __int128 v1320; // [rsp+310h] [rbp+210h] BYREF
  __int128 v1321; // [rsp+320h] [rbp+220h]
  _OWORD v1322[3]; // [rsp+330h] [rbp+230h] BYREF
  __int64 v1323; // [rsp+360h] [rbp+260h] BYREF
  char v1324[152]; // [rsp+368h] [rbp+268h] BYREF
  int v1325; // [rsp+400h] [rbp+300h] BYREF
  _DWORD v1326[3]; // [rsp+404h] [rbp+304h] BYREF
  __int16 v1327; // [rsp+412h] [rbp+312h]
  __int64 v1328; // [rsp+418h] [rbp+318h]
  int v1329; // [rsp+470h] [rbp+370h] BYREF
  _DWORD v1330[5]; // [rsp+474h] [rbp+374h] BYREF
  void *v1331; // [rsp+488h] [rbp+388h]
  int v1332; // [rsp+4E0h] [rbp+3E0h] BYREF
  char v1333[20]; // [rsp+4E4h] [rbp+3E4h] BYREF
  void *v1334; // [rsp+4F8h] [rbp+3F8h]
  int v1335; // [rsp+550h] [rbp+450h] BYREF
  _DWORD v1336[5]; // [rsp+554h] [rbp+454h] BYREF
  void *v1337; // [rsp+568h] [rbp+468h]
  int v1338; // [rsp+5C0h] [rbp+4C0h] BYREF
  char v1339[20]; // [rsp+5C4h] [rbp+4C4h] BYREF
  void *v1340; // [rsp+5D8h] [rbp+4D8h]
  int v1341; // [rsp+630h] [rbp+530h] BYREF
  _DWORD v1342[5]; // [rsp+634h] [rbp+534h] BYREF
  void *v1343; // [rsp+648h] [rbp+548h]
  int v1344; // [rsp+6A0h] [rbp+5A0h] BYREF
  char v1345[20]; // [rsp+6A4h] [rbp+5A4h] BYREF
  void *v1346; // [rsp+6B8h] [rbp+5B8h]
  int v1347; // [rsp+710h] [rbp+610h] BYREF
  _DWORD v1348[5]; // [rsp+714h] [rbp+614h] BYREF
  SIZE_T v1349; // [rsp+728h] [rbp+628h]
  int v1350; // [rsp+780h] [rbp+680h] BYREF
  char v1351[20]; // [rsp+784h] [rbp+684h] BYREF
  unsigned __int16 *v1352; // [rsp+798h] [rbp+698h]
  int v1353; // [rsp+7F0h] [rbp+6F0h] BYREF
  int v1354; // [rsp+7F4h] [rbp+6F4h]
  void *v1355; // [rsp+7F8h] [rbp+6F8h]
  void *v1356; // [rsp+800h] [rbp+700h]
  void *v1357; // [rsp+808h] [rbp+708h]
  const WCHAR *v1358; // [rsp+810h] [rbp+710h]
  const WCHAR *v1359; // [rsp+818h] [rbp+718h]
  __int64 v1360; // [rsp+820h] [rbp+720h]
  int v1361; // [rsp+828h] [rbp+728h]
  __m128i v1362; // [rsp+82Ch] [rbp+72Ch] BYREF
  __m128i v1363; // [rsp+83Ch] [rbp+73Ch] BYREF
  unsigned int v1364; // [rsp+84Ch] [rbp+74Ch] BYREF
  unsigned int v1365; // [rsp+850h] [rbp+750h]
  unsigned __int32 v1366; // [rsp+854h] [rbp+754h]
  unsigned int v1367; // [rsp+858h] [rbp+758h]
  __int128 v1368; // [rsp+860h] [rbp+760h] BYREF
  __int128 v1369; // [rsp+870h] [rbp+770h] BYREF
  __int64 v1370; // [rsp+880h] [rbp+780h] BYREF
  int v1371; // [rsp+888h] [rbp+788h]
  int v1372; // [rsp+88Ch] [rbp+78Ch]
  __int128 v1373; // [rsp+890h] [rbp+790h] BYREF
  __int128 v1374; // [rsp+8A0h] [rbp+7A0h] BYREF
  __int128 v1375; // [rsp+8B0h] [rbp+7B0h] BYREF
  _OWORD v1376[2]; // [rsp+8C0h] [rbp+7C0h] BYREF
  __int128 v1377; // [rsp+8E0h] [rbp+7E0h] BYREF
  __int128 v1378; // [rsp+8F0h] [rbp+7F0h] BYREF
  __int64 v1379; // [rsp+900h] [rbp+800h]
  __int128 v1380; // [rsp+908h] [rbp+808h] BYREF
  __int128 v1381; // [rsp+918h] [rbp+818h] BYREF
  __int64 v1382; // [rsp+928h] [rbp+828h]
  _OWORD v1383[2]; // [rsp+930h] [rbp+830h] BYREF
  __int64 v1384; // [rsp+950h] [rbp+850h]
  int v1385; // [rsp+958h] [rbp+858h]
  _OWORD v1386[2]; // [rsp+960h] [rbp+860h] BYREF
  __int64 v1387; // [rsp+980h] [rbp+880h]
  int v1388; // [rsp+988h] [rbp+888h]
  _OWORD v1389[2]; // [rsp+990h] [rbp+890h] BYREF
  __int64 v1390; // [rsp+9B0h] [rbp+8B0h]
  int v1391; // [rsp+9B8h] [rbp+8B8h]
  _DWORD v1392[12]; // [rsp+9C0h] [rbp+8C0h] BYREF
  _OWORD v1393[2]; // [rsp+9F0h] [rbp+8F0h] BYREF
  __int64 v1394; // [rsp+A10h] [rbp+910h]
  int v1395; // [rsp+A18h] [rbp+918h]
  _DWORD v1396[6]; // [rsp+A20h] [rbp+920h] BYREF
  char v1397; // [rsp+A3Ah] [rbp+93Ah]
  unsigned __int16 v1398[34]; // [rsp+A3Ch] [rbp+93Ch] BYREF
  _DWORD v1399[6]; // [rsp+A80h] [rbp+980h] BYREF
  char v1400; // [rsp+A9Ah] [rbp+99Ah]
  unsigned __int16 v1401[34]; // [rsp+A9Ch] [rbp+99Ch] BYREF
  _DWORD v1402[6]; // [rsp+AE0h] [rbp+9E0h] BYREF
  char v1403; // [rsp+AFAh] [rbp+9FAh]
  unsigned __int16 v1404[34]; // [rsp+AFCh] [rbp+9FCh] BYREF
  _BYTE v1405[68]; // [rsp+B40h] [rbp+A40h] BYREF
  __int16 v1406; // [rsp+B84h] [rbp+A84h]
  unsigned __int16 v1407; // [rsp+BE6h] [rbp+AE6h]
  __int32 v1408; // [rsp+BECh] [rbp+AECh]
  int v1409; // [rsp+BF0h] [rbp+AF0h]
  int v1410; // [rsp+C20h] [rbp+B20h] BYREF
  __int128 v1411; // [rsp+C28h] [rbp+B28h]
  __int128 v1412; // [rsp+C38h] [rbp+B38h]
  __int128 v1413; // [rsp+C48h] [rbp+B48h]
  __int64 v1414; // [rsp+C58h] [rbp+B58h]
  _BYTE v1415[176]; // [rsp+C60h] [rbp+B60h] BYREF
  WCHAR Filename[264]; // [rsp+D10h] [rbp+C10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F68h] [rbp+E68h]

  v3 = a2;
  v1303 = a2;
  v4 = this;
  v1308 = this;
  QueryService = a2->lpVtbl->QueryService;
  v6 = (char *)this + 216;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 27);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         v3,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v6);
  if ( v7 >= 0 )
  {
    v9 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 28);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
           v3,
           &IID_IApplicationPositionPersistence,
           &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
           (char *)v4 + 224);
    if ( v7 < 0 )
    {
      v8 = 165LL;
      goto LABEL_3;
    }
    v10 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 29);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
           v3,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           (char *)v4 + 232);
    if ( v7 < 0 )
    {
      v8 = 166LL;
      goto LABEL_3;
    }
    v11 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 30);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
           v3,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           (char *)v4 + 240);
    if ( v7 < 0 )
    {
      v8 = 167LL;
      goto LABEL_3;
    }
    v12 = v3->lpVtbl->QueryService;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)v4 + 31);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v12)(
           v3,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           v13);
    if ( v7 < 0 )
    {
      v8 = 168LL;
      goto LABEL_3;
    }
    v14 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 32);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
           v3,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           (char *)v4 + 256);
    if ( v7 < 0 )
    {
      v8 = 169LL;
      goto LABEL_3;
    }
    v15 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 33);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
           v3,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           (char *)v4 + 264);
    if ( v7 < 0 )
    {
      v8 = 170LL;
      goto LABEL_3;
    }
    v16 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 35);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
           v3,
           &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
           &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
           (char *)v4 + 280);
    if ( v7 < 0 )
    {
      v8 = 171LL;
      goto LABEL_3;
    }
    v17 = v3->lpVtbl->QueryService;
    v18 = *((_QWORD *)v4 + 38);
    *((_QWORD *)v4 + 38) = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
           v3,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &GUID_1da3501e_cf8d_5263_a3c5_7f0e104a514a,
           (char *)v4 + 304);
    if ( v7 < 0 )
    {
      v8 = 173LL;
      goto LABEL_3;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::__private_IsEnabledPreCheck(
      `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
      3u);
    v19 = v3->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v4 + 37);
    ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v19)(
      v3,
      &SID_VirtualDesktopManager,
      &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
      (char *)v4 + 296);
    if ( IsUserOOBE() )
    {
LABEL_1616:
      v1231 = (char *)v4 + 120;
      if ( v4 == (CDesktopPositioner *)48 )
        v1231 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)v4 + 31) + 96LL))(
             *((_QWORD *)v4 + 31),
             v1231,
             (__int64)v4 + 352);
      if ( v7 < 0 )
      {
        v8 = 200LL;
        goto LABEL_3;
      }
      v1232 = (char *)v4 + 128;
      if ( v4 == (CDesktopPositioner *)48 )
        v1232 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)v4 + 32) + 72LL))(
             *((_QWORD *)v4 + 32),
             v1232,
             (__int64)v4 + 356);
      if ( v7 < 0 )
      {
        v8 = 201LL;
        goto LABEL_3;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v4 + 32) + 24LL))(*((_QWORD *)v4 + 32), (__int64)v4 + 208);
      v1233 = v3->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 36);
      v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v1233)(
             v3,
             &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
             &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
             (char *)v4 + 288);
      if ( v7 < 0 )
      {
        v8 = 205LL;
        goto LABEL_3;
      }
      v1311 = 0LL;
      v1234 = *((_QWORD *)v4 + 36);
      v1235 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v1234 + 24LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v1311);
      v1236 = v1235(v1234, 1LL, &v1311);
      v7 = v1236;
      if ( v1236 >= 0 )
      {
        v1289 = 0;
        if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)v4 + 27) + 32LL))(
               *((_QWORD *)v4 + 27),
               &v1289) >= 0 )
        {
          for ( i = 0; i < v1289; ++i )
          {
            v1312 = 0LL;
            v1239 = *((_QWORD *)v4 + 27);
            v1240 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v1239 + 40LL);
            wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v1312);
            if ( v1240(v1239, i, &v1312) >= 0 )
            {
              v1375 = 0LL;
              v1241 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v1312 + 88LL))(v1312, &v1375);
              if ( v1241 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xDC,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v1241);
              *(_OWORD *)v1270 = v1375;
              v1242 = (*(__int64 (__fastcall **)(__int64, __int64, void **, __int64))(*(_QWORD *)v1311 + 56LL))(
                        v1311,
                        v1312,
                        v1270,
                        1LL);
              if ( v1242 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xDD,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v1242);
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v1312);
          }
        }
        v1236 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1311 + 40LL))(
                  v1311,
                  *((_DWORD *)v4 + 52) == 0 ? 3 : 0);
        v7 = v1236;
        if ( v1236 >= 0 )
        {
          v1313 = 0LL;
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v1313);
          v1243 = Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo((_QWORD *)v4 + 27);
          v7 = v1243;
          if ( v1243 >= 0 )
          {
            v1245 = (char *)v4 + 112;
            if ( v4 == (CDesktopPositioner *)48 )
              v1245 = 0LL;
            v1243 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v1313 + 24LL))(
                      v1313,
                      v1245,
                      (__int64)v4 + 364);
            v7 = v1243;
            if ( v1243 >= 0 )
            {
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v1313);
              v7 = 0;
              goto LABEL_1647;
            }
            v1244 = 236LL;
          }
          else
          {
            v1244 = 235LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v1244,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v1243);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v1313);
LABEL_1647:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v1311);
          return (unsigned int)v7;
        }
        v1237 = 231LL;
      }
      else
      {
        v1237 = 208LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v1237,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v1236);
      goto LABEL_1647;
    }
    v1279 = 0;
    if ( (unsigned int)CloudPCHelpers::GetCloudPCMode() == 1 )
    {
      *((_DWORD *)v4 + 125) = 1;
      goto LABEL_1614;
    }
    v1275 = 0;
    v1296 = 0LL;
    v1294 = 0;
    v1293 = 0;
    v1297[0] = 0LL;
    while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
      ;
    v1278 = -1;
    v20 = dword_1808DDD3C;
    if ( !dword_1808DDD3C )
    {
      v21 = MemoryAlloc(0x338uLL);
      if ( !v21 )
        goto LABEL_35;
      v22 = 0;
      v23 = -1;
      v24 = 0;
      v25 = 0;
      v26 = v21 + 7;
      v27 = (unsigned __int8 *)&unk_180783012;
      v28 = 103LL;
      do
      {
        v29 = v27[1] | ((*v27 | ((*(v27 - 1) | (*(v27 - 2) << 8)) << 8)) << 8);
        v30 = v27[5] | ((v27[4] | ((v27[3] | (v27[2] << 8)) << 8)) << 8);
        v27 += 8;
        v31 = v29 ^ v25;
        v32 = v30 ^ v31 ^ v24 ^ 0xAC987321;
        v33 = v31 ^ (__ROR4__(v32, 22) + 4991 * __ROR4__(v32 + 1419157410, 27));
        v34 = v32 ^ (43881 * __ROR4__(v33 + 133239679, 9) - __ROR4__(v33, 30));
        v35 = v34 ^ (2033 * __ROR4__(v33 ^ (24670 * v34 - (v34 >> 13) - 123127970) ^ 0xAB69, 26)
                   - __ROR4__(v33 ^ (24670 * v34 - (v34 >> 13) - 123127970), 30));
        v36 = v33 ^ (24670 * v34 - (v34 >> 13) - 123127970) ^ (133239679 - (v35 ^ 0xAB69605E));
        v37 = v35 ^ (43881 * (v36 ^ 0x137F)) ^ __ROR4__(v36, 6);
        v38 = v36 ^ (__ROR4__(v37, 30) + 24670 * __ROR4__(v37 + 133239679, 15));
        v39 = v37 ^ (2033 * __ROR4__(v38 + 1419157410, 14) - __ROR4__(v38, 24));
        v40 = v38 ^ __ROR4__(v39, 10) ^ (4991 * __ROR4__(v39 ^ 0xAB69605E, 12));
        v41 = v39 ^ (v40 >> 10) ^ (43881 * (v40 ^ 0x7F1));
        v42 = v40 ^ (2033 * (__ROR4__(~v41, 5) + 24670));
        v43 = v42 ^ (((v41 ^ (v42 - 2033) ^ 0xAB69605E) >> 2) + 4991 * __ROR4__(v41 ^ (v42 - 2033) ^ 0xAB6967AF, 30));
        v44 = v41 ^ (v42 - 2033) ^ 0xAB69605E ^ (__ROR4__(v43, 25) + 43881 * __ROR4__(v43 - 133239679, 6));
        v45 = v43 ^ (24670 * (v44 ^ 0x137F) + __ROR4__(v44, 9));
        v46 = v44 ^ (__ROR4__(v45, 25) + 2033 * __ROR4__(v45 ^ 0xAB69, 27));
        v47 = v45 ^ v46 ^ 0xAC987321;
        v48 = v46 ^ (4991 * __ROR4__(v47, 3) - 219010071);
        v49 = v47 ^ (24670 * __ROR4__(v48 - 133239679, 1) - __ROR4__(v48, 6));
        v50 = v48 ^ (__ROR4__(v49, 18) + 2033 * __ROR4__(v49 - 1419157410, 29));
        v51 = v49 ^ (4991 * __ROR4__(v50 - 1419157410, 17) - __ROR4__(v50, 14));
        v52 = v50 ^ (v51 >> 3) ^ (43881 * (v51 ^ 0x605E));
        v25 = v51 ^ v22 ^ __ROR4__(v52, 30) ^ (24670 * __ROR4__(v52 ^ 0x7F1137F, 28));
        v24 = v52 ^ v23;
        *(v26 - 4) = v25;
        *v26 = v52 ^ v23;
        *(v26 - 5) = __ROR4__(v25, 8);
        *(v26 - 1) = __ROR4__(v52 ^ v23, 8);
        *(v26 - 6) = __ROR4__(v25, 16);
        *(v26 - 2) = __ROR4__(v52 ^ v23, 16);
        *(v26 - 7) = __ROR4__(v25, 24);
        *(v26 - 3) = __ROR4__(v52 ^ v23, 24);
        v22 = v29;
        v23 = v30;
        v26 += 8;
        --v28;
      }
      while ( v28 );
      v53 = 0LL;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      do
        v54 ^= v21[v53++];
      while ( v53 < 0x338 );
      if ( v54 != 64LL )
      {
        MemoryFree(v21);
LABEL_35:
        v58 = (HMODULE *)&unk_1808DA540;
        v59 = 4LL;
        do
        {
          if ( *v58 )
            FreeLibrary(*v58);
          v58 += 3;
          --v59;
        }
        while ( v59 );
        memset_0(&unk_1808DA540, 0, 0x60uLL);
        memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_67:
        _InterlockedExchange(&dword_1808DDD40, 0);
        v74 = 0LL;
        Ptr = 0LL;
        v75 = 0LL;
        lpModuleName = 0LL;
        v76 = 0;
        v77 = 0;
        if ( !NtCurrentPeb()->SessionId )
          goto LABEL_119;
        v78 = off_1808D1450[0]();
        v79 = 0LL;
        if ( !v78 )
          goto LABEL_69;
        v1292 = 0;
        v81 = 0LL;
        *(_QWORD *)&v1249[1] = 0LL;
        v82 = 0LL;
        v83 = 0LL;
        for ( j = 0LL; ; j = v81 )
        {
          if ( v79 )
            j = v83;
          v85 = 0LL;
          if ( v79 )
            v85 = v83;
          if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1808D1470[0])(
                 v78,
                 2LL,
                 v85,
                 v82,
                 &v1292) )
          {
            *(_QWORD *)&v1249[1] = 0LL;
            v74 = j;
            Ptr = j;
            goto LABEL_90;
          }
          LastError = GetLastError();
          if ( LastError != 122 )
            break;
          if ( v81 )
            goto LABEL_84;
          v81 = (wchar_t *)MemoryAlloc(v1292);
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1249[1]);
          v79 = v81;
          *(_QWORD *)&v1249[1] = v81;
          if ( !v81 )
          {
            v77 = -2147024882;
            goto LABEL_90;
          }
          v82 = v1292;
          v83 = v81;
        }
        if ( !LastError )
        {
LABEL_84:
          v77 = -2147467259;
          goto LABEL_90;
        }
        if ( LastError > 0 )
          v77 = (unsigned __int16)LastError | 0x80070000;
        else
          v77 = LastError;
LABEL_90:
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1249[1]);
        if ( v77 >= 0 )
        {
          v87 = off_1808D1468[0];
          CurrentThreadId = GetCurrentThreadId();
          v89 = ((__int64 (__fastcall *)(_QWORD))v87)(CurrentThreadId);
          v90 = 0LL;
          if ( !v89 )
            goto LABEL_69;
          v1291 = 0;
          v91 = 0LL;
          *(_QWORD *)&v1249[1] = 0LL;
          v77 = 0;
          v92 = 0LL;
          v93 = 0LL;
          for ( k = 0LL; ; k = v91 )
          {
            if ( v90 )
              k = v93;
            v95 = 0LL;
            if ( v90 )
              v95 = v93;
            if ( ((unsigned int (__fastcall *)(__int64, __int64, const WCHAR *, __int64, unsigned int *))off_1808D1470[0])(
                   v89,
                   2LL,
                   v95,
                   v92,
                   &v1291) )
            {
              *(_QWORD *)&v1249[1] = 0LL;
              v75 = k;
              lpModuleName = k;
              goto LABEL_109;
            }
            v96 = GetLastError();
            if ( v96 != 122 )
              break;
            if ( v91 )
              goto LABEL_103;
            v91 = (const WCHAR *)MemoryAlloc(v1291);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1249[1]);
            v90 = v91;
            *(_QWORD *)&v1249[1] = v91;
            if ( !v91 )
            {
              v77 = -2147024882;
              goto LABEL_109;
            }
            v92 = v1291;
            v93 = v91;
          }
          if ( !v96 )
          {
LABEL_103:
            v77 = -2147467259;
            goto LABEL_109;
          }
          if ( v96 > 0 )
            v77 = (unsigned __int16)v96 | 0x80070000;
          else
            v77 = v96;
LABEL_109:
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1249[1]);
          if ( v77 >= 0 )
          {
            if ( !v74 || wcscmp_0(v74, L"WinSta0") || !v75 || wcscmp_0(v75, L"Default") )
              goto LABEL_119;
            v1290 = 0;
            CurrentProcess = GetCurrentProcess();
            if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1290) )
            {
              if ( (v1290 & 0xF) == 0 )
                v76 = 1;
LABEL_119:
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&lpModuleName);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&Ptr);
              v98 = 0;
              if ( v77 >= 0 )
                v98 = v76;
              LODWORD(v1274) = v98;
              v99 = LocalAlloc(0x40u, 4uLL);
              SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(v1297, v99);
              Ptr = (void *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(v1297);
              if ( !Ptr )
              {
                v100 = -2147024882;
                v101 = 0;
                goto LABEL_1587;
              }
              v102 = 0LL;
              LODWORD(v1269) = 0;
              *(_OWORD *)lpMem = 0LL;
              LODWORD(v1277) = 0;
              lpModuleName = 0LL;
              ProcessHeap = GetProcessHeap();
              v104 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
              v1288 = 56;
              v100 = -1073741801;
              if ( !v104 )
              {
                v104 = 0LL;
                goto LABEL_606;
              }
              *v104 = xmmword_1808D8540[0];
              v104[1] = *((_OWORD *)&_ImageBase + 579669);
              v104[2] = *((_OWORD *)&_ImageBase + 579670);
              v104[3] = *((_OWORD *)&_ImageBase + 579671);
              v104[4] = *((_OWORD *)&_ImageBase + 579672);
              v104[5] = *((_OWORD *)&_ImageBase + 579673);
              v104[6] = *((_OWORD *)&_ImageBase + 579674);
              v104[7] = *((_OWORD *)&_ImageBase + 579675);
              v104[8] = xmmword_1808D8540[8];
              v2 = (__m128i)xmmword_1808D8540[9];
              v104[9] = v2;
              v105 = GetProcessHeap();
              v106 = HeapAlloc(v105, 8u, 8uLL);
              if ( v106 )
              {
                *v106 = qword_1808D8690;
                v1267 = __rdtsc();
                LODWORD(dwBytes) = 0;
                v1249[0] = 0;
                v100 = RtlUIntAdd(4u, 4, v1249);
                LODWORD(v1276) = v100;
                if ( v100 < 0 )
                {
                  v110 = v98;
                  v102 = v107;
                  goto LABEL_136;
                }
                v108 = RtlUIntAdd(0, v1249[0], (int *)&dwBytes);
                v100 = v108 | 0x10000000;
                LODWORD(v1276) = v108 | 0x10000000;
                v110 = v98;
                v102 = v111;
                if ( v108 < 0 )
                  goto LABEL_136;
                v1249[0] = 0;
                v100 = RtlUIntAdd(v109 + 4, 160, v1249);
                LODWORD(v1276) = v100;
                if ( v100 < 0 )
                  goto LABEL_136;
                v112 = RtlUIntAdd(dwBytes, v1249[0], (int *)&dwBytes);
                v100 = v112 | 0x10000000;
                LODWORD(v1276) = v112 | 0x10000000;
                if ( v112 < 0 )
                  goto LABEL_136;
                v1249[0] = 0;
                v100 = RtlUIntAdd(v113, 8, v1249);
                LODWORD(v1276) = v100;
                if ( v100 < 0 )
                  goto LABEL_136;
                v114 = RtlUIntAdd(dwBytes, v1249[0], (int *)&dwBytes);
                v100 = v114 | 0x10000000;
                LODWORD(v1276) = v114 | 0x10000000;
                if ( v114 < 0 )
                  goto LABEL_136;
                v1249[0] = 0;
                v100 = RtlUIntAdd(v115, 8, v1249);
                LODWORD(v1276) = v100;
                if ( v100 < 0 )
                  goto LABEL_136;
                v116 = RtlUIntAdd(dwBytes, v1249[0], (int *)&dwBytes);
                v100 = v116 | 0x10000000;
                LODWORD(v1276) = v116 | 0x10000000;
                if ( v116 < 0 )
                  goto LABEL_136;
                pcchLength = 0LL;
                if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v117, &pcchLength) < 0 )
                {
                  v100 = -1073741762;
LABEL_135:
                  LODWORD(v1276) = v100;
                  goto LABEL_136;
                }
                LODWORD(v1251) = 0;
                v100 = RtlUIntAdd(4u, 2 * ((int)pcchLength + 1), (int *)&v1251);
                LODWORD(v1276) = v100;
                if ( v100 < 0 )
                  goto LABEL_136;
                v126 = RtlUIntAdd(dwBytes, v1251, (int *)&dwBytes);
                v100 = v126 | 0x10000000;
                LODWORD(v1276) = v126 | 0x10000000;
                if ( v126 < 0 )
                  goto LABEL_136;
                LODWORD(v1251) = 0;
                v100 = RtlUIntAdd(v127, v127, (int *)&v1251);
                LODWORD(v1276) = v100;
                if ( v100 < 0 )
                  goto LABEL_136;
                v128 = RtlUIntAdd(dwBytes, v1251, (int *)&dwBytes);
                v100 = v128 | 0x10000000;
                LODWORD(v1276) = v128 | 0x10000000;
                if ( v128 < 0
                  || (LODWORD(v1251) = 0, v100 = RtlUIntAdd(v129, v129, (int *)&v1251), LODWORD(v1276) = v100, v100 < 0)
                  || (v130 = RtlUIntAdd(dwBytes, v1251, (int *)&dwBytes),
                      v100 = v130 | 0x10000000,
                      LODWORD(v1276) = v130 | 0x10000000,
                      v130 < 0) )
                {
LABEL_136:
                  lpMem[0] = 0LL;
                  v118 = lpMem[1];
                  if ( lpMem[1] )
                  {
                    v119 = GetProcessHeap();
                    HeapFree(v119, 0, v118);
                    lpMem[1] = 0LL;
                  }
                  v120 = (WCHAR *)lpModuleName;
                  if ( lpModuleName )
                  {
                    v121 = GetProcessHeap();
                    HeapFree(v121, 0, v120);
                  }
                  if ( v104 )
                  {
                    v122 = GetProcessHeap();
                    HeapFree(v122, 0, v104);
                  }
                  if ( v102 )
                  {
                    v123 = GetProcessHeap();
                    HeapFree(v123, 0, v102);
                  }
                  if ( v100 < 0 )
                  {
                    v101 = v1275;
LABEL_1587:
                    while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
                      ;
                    v1224 = dword_1808DDD3C;
                    if ( dword_1808DDD3C > 0 )
                    {
                      --dword_1808DDD3C;
                      if ( v1224 == 1 )
                      {
                        v1225 = (HMODULE *)&unk_1808DA540;
                        v1226 = 4LL;
                        do
                        {
                          if ( *v1225 )
                            FreeLibrary(*v1225);
                          v1225 += 3;
                          --v1226;
                        }
                        while ( v1226 );
                        memset_0(&unk_1808DA540, 0, 0x60uLL);
                        memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                      }
                    }
                    _InterlockedExchange(&dword_1808DDD40, 0);
                    SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(v1297);
                    if ( v100 >= 0 )
                    {
                      if ( v101 == 4 )
                      {
                        v1227 = *(_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1296);
LABEL_1608:
                        SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1296);
                        if ( v1294 >= 0 && v1227 )
                        {
                          v4 = v1308;
                          *((_DWORD *)v1308 + 125) = 2;
                        }
                        else
                        {
                          IsScreenSizeRequirementMet = Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet(
                                                         v1228,
                                                         *(float *)v2.m128i_i32);
                          v4 = v1308;
                          if ( IsScreenSizeRequirementMet )
                            *((_DWORD *)v1308 + 125) = 3;
                        }
                        v3 = v1303;
LABEL_1614:
                        v1230 = v3->lpVtbl->QueryService;
                        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v4 + 39);
                        v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v1230)(
                               v3,
                               &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                               &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                               (char *)v4 + 312);
                        if ( v7 < 0 )
                        {
                          v8 = 197LL;
                          goto LABEL_3;
                        }
                        goto LABEL_1616;
                      }
                    }
                    else
                    {
                      switch ( v100 )
                      {
                        case -805306316:
                          v1294 = -1073418222;
LABEL_1604:
                          v1227 = v1279;
                          goto LABEL_1608;
                        case -805306139:
                        case -1073425151:
                          v1294 = -1073418201;
                          goto LABEL_1604;
                        case -805306306:
                          v1294 = -1073418200;
                          goto LABEL_1604;
                      }
                      v1294 = v100;
                      if ( v100 != -2147024774 )
                        goto LABEL_1604;
                    }
                    v1294 = -1073418210;
                    goto LABEL_1604;
                  }
                  if ( !v110 )
                  {
LABEL_1585:
                    v101 = v1293;
                    v1223 = v1297[0];
                    v1297[0] = 0LL;
                    v1296 = v1223;
                    goto LABEL_1587;
                  }
                  v1256 = 0LL;
                  dword_1808DA538 = v110;
                  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
                  v125 = 0LL;
                  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
                  {
LABEL_1225:
                    SH<void *,SH_HANDLE>::Reset(&v1256);
                    v902 = 0LL;
                    *(_OWORD *)v1317 = 0LL;
                    LODWORD(Ptr) = 0;
                    v1270[0] = 0LL;
                    v903 = GetProcessHeap();
                    v904 = HeapAlloc(v903, 8u, 0xA0uLL);
                    v905 = (size_t)v904;
                    if ( !v904 )
                    {
                      v925 = 0LL;
                      goto LABEL_1241;
                    }
                    *v904 = xmmword_1808D8540[0];
                    v904[1] = xmmword_1808D8540[1];
                    v904[2] = xmmword_1808D8540[2];
                    v904[3] = xmmword_1808D8540[3];
                    v904[4] = xmmword_1808D8540[4];
                    v904[5] = xmmword_1808D8540[5];
                    v904[6] = xmmword_1808D8540[6];
                    v904[7] = xmmword_1808D8540[7];
                    v904[8] = xmmword_1808D8540[8];
                    v2 = (__m128i)xmmword_1808D8540[9];
                    v904[9] = v2;
                    v906 = GetProcessHeap();
                    v907 = HeapAlloc(v906, 8u, 8uLL);
                    if ( !v907 )
                    {
                      v125 = (void *)v905;
                      v925 = 0LL;
                      goto LABEL_1241;
                    }
                    *v907 = qword_1808D8690;
                    v1256 = (LPVOID)__rdtsc();
                    LODWORD(lpModuleName) = 0;
                    v1249[1] = 0;
                    v908 = RtlUIntAdd(4u, 4, &v1249[1]);
                    v902 = v909;
                    v125 = (void *)v905;
                    if ( v908 < 0 )
                      goto LABEL_1240;
                    if ( (int)RtlUIntAdd(0, v1249[1], (int *)&lpModuleName) < 0 )
                      goto LABEL_1240;
                    v1249[1] = v910;
                    if ( (int)RtlUIntAdd(4u, 160, &v1249[1]) < 0 )
                      goto LABEL_1240;
                    v911 = RtlUIntAdd((unsigned int)lpModuleName, v1249[1], (int *)&lpModuleName);
                    if ( (v913 | v911) < 0 )
                      goto LABEL_1240;
                    v1249[1] = v912;
                    if ( (int)RtlUIntAdd(4u, 8, &v1249[1]) < 0 )
                      goto LABEL_1240;
                    v914 = RtlUIntAdd((unsigned int)lpModuleName, v1249[1], (int *)&lpModuleName);
                    if ( (v916 | v914) < 0 )
                      goto LABEL_1240;
                    v1249[1] = v915;
                    if ( (int)RtlUIntAdd(4u, 8, &v1249[1]) < 0 )
                      goto LABEL_1240;
                    v917 = RtlUIntAdd((unsigned int)lpModuleName, v1249[1], (int *)&lpModuleName);
                    if ( (v918 | v917) < 0 )
                      goto LABEL_1240;
                    HIDWORD(v1317[0]) = (_DWORD)lpModuleName;
                    v919 = (unsigned int)lpModuleName;
                    v920 = GetProcessHeap();
                    v921 = HeapAlloc(v920, 8u, v919);
                    if ( !v921 )
                      goto LABEL_1240;
                    v1317[1] = (size_t)v921;
                    LODWORD(v1317[0]) = 0;
                    LODWORD(v1272) = 0;
                    v1271 = 0LL;
                    v1259 = v921;
                    v1250 = v902;
                    v1254 = v905;
                    if ( (int)RtlULongLongAdd((unsigned __int64)v921, 4LL, (__int64 *)&v1272) < 0
                      || v923 + 2 > (_DWORD *)((char *)v923 + HIDWORD(v1317[0])) )
                    {
                      goto LABEL_1240;
                    }
                    *v923 = 4;
                    *(_DWORD *)v1272 = 4;
                    v924 = ++LODWORD(v1317[0]);
                    LODWORD(v1272) = 0;
                    v1271 = 0LL;
                    if ( v905 )
                    {
                      if ( !v922 )
                        goto LABEL_1240;
                    }
                    else if ( v922 )
                    {
                      goto LABEL_1240;
                    }
                    if ( v1317[1] )
                    {
                      v932 = (int *)v1317[1];
                      v1259 = (void *)v1317[1];
                      v933 = 0;
                      if ( v924 )
                      {
                        do
                        {
                          LODWORD(lpModuleName) = 0;
                          if ( (int)RtlUIntAdd(4u, *v932, (int *)&lpModuleName) < 0
                            || (int)RtlULongLongAdd(v934, (unsigned int)lpModuleName, (__int64 *)&v1259) < 0 )
                          {
                            goto LABEL_1240;
                          }
                          ++v933;
                          v1250 = v902;
                          v1254 = (size_t)v125;
                          v932 = (int *)v1259;
                        }
                        while ( v933 < v935 );
                      }
                      if ( (int)RtlULongLongAdd((unsigned __int64)v932, 4LL, (__int64 *)&v1272) < 0 )
                        goto LABEL_1240;
                      v938 = v937;
                      if ( (unsigned __int64)v936 + v937 + 4 > v1317[1] + HIDWORD(v1317[0]) )
                        goto LABEL_1240;
                      *v936 = v937;
                      v931 = 0LL;
                      if ( v125 )
                      {
                        memcpy_0(v1272, v125, v938);
                        v931 = 0LL;
                      }
                    }
                    else
                    {
                      LODWORD(lpModuleName) = 0;
                      if ( (int)RtlUIntAdd(4u, v922, (int *)&lpModuleName) < 0
                        || (int)RtlUIntAdd(HIDWORD(v1317[0]), (int)lpModuleName, (int *)v1317 + 1) < 0 )
                      {
                        goto LABEL_1240;
                      }
                    }
                    v939 = ++LODWORD(v1317[0]);
                    LODWORD(v1272) = 0;
                    v1271 = 0LL;
                    if ( !v902 )
                      goto LABEL_1240;
                    if ( v1317[1] == v931 )
                    {
                      LODWORD(lpModuleName) = v931;
                      if ( (int)RtlUIntAdd(4u, 8, (int *)&lpModuleName) < 0
                        || (int)RtlUIntAdd(HIDWORD(v1317[0]), (int)lpModuleName, (int *)v1317 + 1) < 0 )
                      {
                        goto LABEL_1240;
                      }
                    }
                    else
                    {
                      v941 = (int *)v1317[1];
                      v1259 = (void *)v1317[1];
                      if ( v939 )
                      {
                        do
                        {
                          LODWORD(lpModuleName) = 0;
                          if ( (int)RtlUIntAdd(4u, *v941, (int *)&lpModuleName) < 0
                            || (int)RtlULongLongAdd(v942, (unsigned int)lpModuleName, (__int64 *)&v1259) < 0 )
                          {
                            goto LABEL_1240;
                          }
                          v1250 = v902;
                          v1254 = (size_t)v125;
                          v941 = (int *)v1259;
                        }
                        while ( v944 + 1 < v943 );
                      }
                      if ( (int)RtlULongLongAdd((unsigned __int64)v941, 4LL, (__int64 *)&v1272) < 0
                        || (unsigned __int64)(v945 + 3) > v1317[1] + HIDWORD(v1317[0]) )
                      {
                        goto LABEL_1240;
                      }
                      *v945 = 8;
                      memcpy_0(v1272, v902, 8uLL);
                      v940 = 0LL;
                    }
                    v946 = ++LODWORD(v1317[0]);
                    LODWORD(v1272) = 0;
                    v1271 = 0LL;
                    if ( v1317[1] == v940 )
                    {
                      LODWORD(lpModuleName) = v940;
                      if ( (int)RtlUIntAdd(4u, 8, (int *)&lpModuleName) < 0
                        || (int)RtlUIntAdd(HIDWORD(v1317[0]), (int)lpModuleName, (int *)v1317 + 1) < 0 )
                      {
                        goto LABEL_1240;
                      }
                      ++LODWORD(v1317[0]);
LABEL_1285:
                      LODWORD(lpModuleName) = v947;
                      if ( (int)RtlUIntAdd(4u, 4, (int *)&lpModuleName) < 0 )
                        goto LABEL_1240;
                      v1249[1] = v954;
                      if ( (int)RtlUIntAdd(v953, v953 + 4, &v1249[1]) < 0
                        || (int)RtlUIntAdd(v955, v1249[1], (int *)&lpModuleName) < 0 )
                      {
                        goto LABEL_1240;
                      }
                      v1256 = v956;
                      v957 = v956;
                      v1259 = v956;
                      v1271 = v956;
                      LODWORD(v1258) = (_DWORD)v956;
                      Src = v956;
                      Size = (SIZE_T)v956;
                      v1263 = v956;
                      v1260 = (unsigned __int16 *)__rdtsc();
                      v1286 = 8;
                      v958 = RtlUIntAdd(8u, SHIDWORD(v1317[0]), (int *)&v1286);
                      if ( v958 >= 0 )
                      {
                        v961 = (v1286 + 7) & 0xFFFFFFF8;
                        if ( v961 < v1286 )
                          goto LABEL_1240;
                        v1286 = (v1286 + 7) & 0xFFFFFFF8;
                        v962 = v961;
                        v963 = GetProcessHeap();
                        v964 = (unsigned __int16 *)HeapAlloc(v963, 8u, v962);
                        v1265 = v964;
                        if ( !v964 )
                        {
                          v969 = -805306345;
                          goto LABEL_1568;
                        }
                        v1267 = (SIZE_T)v964;
                        *(_DWORD *)v964 = v1317[0];
                        v958 = RtlULongLongAdd((unsigned __int64)v964, 4LL, (__int64 *)&v1267);
                        pcchLength = v966;
                        if ( v958 < 0
                          || (v967 = v1267,
                              *(_DWORD *)v1267 = HIDWORD(v1317[0]),
                              v958 = RtlULongLongAdd(v967, v965, (__int64 *)&v1267),
                              pcchLength = v968,
                              v958 < 0) )
                        {
                          v984 = GetProcessHeap();
                          HeapFree(v984, 0, (LPVOID)pcchLength);
                          v959 = (unsigned int)v957;
                        }
                        else
                        {
                          *(_QWORD *)(v1286 + v968 - 8) = v1260;
                          memcpy_0((void *)v1267, (const void *)v1317[1], HIDWORD(v1317[0]));
                          v1256 = v1265;
                          v959 = v1286;
                        }
                        v960 = 0LL;
                      }
                      v969 = v958 | 0x10000000;
                      if ( v969 < 0 )
                      {
                        v1049 = (unsigned __int16 *)v1256;
                        goto LABEL_1544;
                      }
                      v1260 = v960;
                      v970 = (unsigned __int8 *)v1256;
                      if ( !v1256 )
                        goto LABEL_1240;
                      v1265 = (unsigned __int16 *)v959;
                      if ( !v959
                        || (v1273 = v959 + 8LL, v971 = (char *)MemoryAlloc(v1273), v1262 = v971, v972 = 0, !v971) )
                      {
                        v969 = -805306367;
                        v1049 = (unsigned __int16 *)v1256;
                        goto LABEL_1545;
                      }
                      v973 = 0;
                      v1248 = 0;
                      v974 = 0LL;
                      v975 = v1265;
                      if ( v1265 )
                      {
                        do
                          v973 ^= v970[v974++];
                        while ( v974 < (unsigned __int64)v1265 );
                        v1248 = v973;
                      }
                      v1268 = (LPVOID)0xC81ECB17B1B54A58LL;
                      v976 = v970;
                      v1264 = v971;
                      v977 = -1;
                      v1249[1] = 0;
                      LODWORD(v1267) = 0;
                      v978 = (unsigned __int8)v1265 & 7;
                      if ( ((unsigned __int8)v1265 & 7) != 0 )
                      {
                        v1249[1] = 0;
                        LODWORD(v1267) = 0;
                        v979 = 0;
                        LODWORD(pcchLength) = 0;
                        v980 = 56;
                        v981 = 0;
                        v982 = 0;
                        do
                        {
                          v983 = *v976;
                          if ( v979 >= 4 )
                            v981 |= v983 << v980;
                          else
                            v982 |= v983 << (v980 - 32);
                          ++v976;
                          v979 = pcchLength + 1;
                          LODWORD(pcchLength) = v979;
                          v980 -= 8;
                        }
                        while ( (int)v979 < v978 );
                        LODWORD(v1267) = v982;
                        v1249[1] = v981;
                        v1256 = v970;
                        v1250 = v902;
                        v1254 = (size_t)v125;
                        v975 = v1265;
                        v972 = v982 ^ 0xB17A307A;
                        v985 = v981 ^ 0x42F6B18D;
                        v986 = v982 ^ 0xB17A307A;
                        v987 = v981 ^ 0x42F6B18D;
                        LODWORD(pcchLength) = 0;
                        if ( ((unsigned __int8)v1265 & 7) != 0 )
                        {
                          v988 = v1264;
                          v989 = pcchLength;
                          do
                          {
                            if ( v989 >= 4 )
                            {
                              v987 = __ROR4__(v987, 24);
                              v990 = v987;
                            }
                            else
                            {
                              v986 = __ROR4__(v986, 24);
                              v990 = v986;
                            }
                            v991 = v988 + 1;
                            *v988 = v990;
                            ++v989;
                            ++v988;
                          }
                          while ( (int)v989 < v978 );
                          v971 = v991;
                          v1264 = v991;
                          v973 = v1248;
                          v957 = (unsigned int *)v1259;
                        }
                        else
                        {
                          v971 = (char *)v1264;
                        }
                        if ( (unsigned int)v978 > 4 )
                        {
                          v977 = v985 >> (8 * (8 - v978)) << (8 * (8 - v978));
LABEL_1322:
                          v971 = (char *)v1264;
                          goto LABEL_1323;
                        }
                        v977 = 0;
                        if ( (unsigned int)v978 < 4 )
                        {
                          v972 = v972 >> (8 * (4 - v978)) << (8 * (4 - v978));
                          goto LABEL_1322;
                        }
                      }
LABEL_1323:
                      v1251 = (unsigned __int64)v975 >> 3;
                      if ( (unsigned __int64)v975 >> 3 )
                      {
                        v992 = WORD2(v1268);
                        v993 = WORD1(v1268);
                        LODWORD(pcchLength) = WORD1(v1268);
                        LODWORD(v1264) = HIDWORD(v1268) ^ 0xB1B54A58;
                        v994 = v971 + 7;
                        v995 = v976 + 2;
                        v996 = v1251;
                        v997 = v1249[1];
                        v998 = v1267;
                        do
                        {
                          v999 = v995[1] | ((*v995 | ((*(v995 - 1) | (*(v995 - 2) << 8)) << 8)) << 8);
                          v1000 = v995[5] | ((v995[4] | ((v995[3] | (v995[2] << 8)) << 8)) << 8);
                          v1001 = v1000 ^ v977;
                          *(_QWORD *)&v1249[1] = v995 + 8;
                          v1002 = HIDWORD(v1268) ^ v999 ^ v972 ^ (v1001 - 19032);
                          v1003 = v1001 ^ (__ROR4__(v1002, 7) + v993 * __ROR4__(v999 ^ v972 ^ (v1001 - 19032), 15));
                          v1004 = v1002 ^ (v992 * __ROR4__(v1003 - 1313519016, 9) - __ROR4__(v1003, 10));
                          v1005 = v1003 ^ (__ROR4__(v1004, 27) + HIWORD(v1268) * __ROR4__(v1004 ^ v992, 28));
                          v1006 = v1004 ^ (HIDWORD(v1268) - (v1005 ^ 0xB1B54A58));
                          v1007 = v1005 ^ (WORD1(v1268) * (v1006 - 19032) - (v1006 >> 6));
                          v1008 = v1006 ^ (19032 * (v992 ^ __ROR4__(v1007, 15)));
                          v1009 = v1007 ^ (v992 * (HIWORD(v1268) + __ROR4__(~v1008, 3)));
                          v1010 = v1008 ^ (v1009 - 19032 - HIDWORD(v1268));
                          v1011 = v1009 ^ (pcchLength * (v1010 ^ HIWORD(v1268))) ^ __ROR4__(v1010, 10);
                          v1012 = v1010 ^ __ROR4__(v1011, 3) ^ (v992 * __ROR4__(v1011 ^ 0x4A58, 26));
                          v1013 = v1011 ^ (19032 * (__ROR4__(v1012, 15) - HIWORD(v1268)));
                          v1014 = v1012 ^ ((v1013 ^ (v1013 >> 14)) >> 1) ^ (19032 * (v1013 ^ HIWORD(v1268))) ^ (19032 * ((8 * (v1013 - v992)) | ((v1013 - v992) >> 29)));
                          v1015 = v1013 ^ (WORD1(v1268) * (v1014 - v992) - (v1014 >> 13));
                          v1016 = v1014 ^ __ROR4__(v1015, 11) ^ (v992 * __ROR4__(-1313519016 - v1015, 9));
                          v1017 = v1015 ^ (v1016 - HIWORD(v1268) + 1313519016);
                          v1018 = v1016 ^ (19032 * (v1017 ^ WORD1(v1268)) - __ROR4__(v1017, 7));
                          v1019 = v1017 ^ (WORD1(v1268) * __ROR4__(v1018 ^ HIWORD(v1268), 28) - __ROR4__(v1018, 16));
                          v1020 = v1018 ^ (__ROR4__(v1019, 4) + v992 * __ROR4__(-1313519016 - v1019, 10));
                          v1021 = v1019 ^ __ROR4__(v1020, 9) ^ (HIWORD(v1268) * __ROR4__(v1020 + 1313519016, 4));
                          v1022 = v1020 ^ (19032 * __ROR4__(v1021 ^ HIDWORD(v1268), 24) - __ROR4__(v1021, 30));
                          v1023 = v1021 ^ (WORD1(v1268) * __ROR4__(HIDWORD(v1268) - v1022, 11) - __ROR4__(v1022, 12));
                          v1024 = v1022 ^ (v1023 >> 8) ^ (v992 * (WORD1(v1268) ^ v1023));
                          v972 = v1024 ^ v998;
                          v977 = v1023 ^ v1024 ^ (unsigned int)v1264 ^ v997;
                          *(v994 - 4) = v1024 ^ v998;
                          *v994 = v977;
                          *(v994 - 5) = __ROR4__(v1024 ^ v998, 8);
                          *(v994 - 1) = __ROR4__(v977, 8);
                          *(v994 - 6) = __ROR4__(v1024 ^ v998, 16);
                          *(v994 - 2) = __ROR4__(v977, 16);
                          *(v994 - 7) = __ROR4__(v1024 ^ v998, 24);
                          *(v994 - 3) = __ROR4__(v977, 24);
                          v998 = v999;
                          v997 = v1000;
                          v994 += 8;
                          --v996;
                          v995 = *(unsigned __int8 **)&v1249[1];
                          v993 = WORD1(v1268);
                        }
                        while ( v996 );
                        v973 = v1248;
                        v100 = v1276;
                        v125 = (void *)v1254;
                        v902 = (WCHAR *)v1250;
                        v957 = (unsigned int *)v1259;
                        v975 = v1265;
                      }
                      v1025 = v1262;
                      *(_QWORD *)((char *)v975 + (_QWORD)v1262) = v973;
                      v1026 = GetProcessHeap();
                      v1027 = (unsigned int *)HeapAlloc(v1026, 8u, 0x30uLL);
                      if ( v1027 )
                      {
                        *v1027 = v1273;
                        v1028 = GetProcessHeap();
                        v1029 = HeapAlloc(v1028, 8u, (unsigned int)v1273);
                        if ( !v1029 )
                          goto LABEL_1331;
                        *((_QWORD *)v1027 + 1) = v1029;
                        memcpy_0(v1029, v1025, (unsigned int)v1273);
                        v1027[4] = 160;
                        v1030 = GetProcessHeap();
                        v1031 = HeapAlloc(v1030, 8u, 0xA0uLL);
                        v1032 = 0;
                        if ( !v1031 )
                          goto LABEL_1331;
                        *((_QWORD *)v1027 + 3) = v1031;
                        *v1031 = xmmword_1808D85F0[0];
                        v1031[1] = xmmword_1808D85F0[1];
                        v1031[2] = xmmword_1808D85F0[2];
                        v1031[3] = xmmword_1808D85F0[3];
                        v1031[4] = xmmword_1808D85F0[4];
                        v1031[5] = xmmword_1808D85F0[5];
                        v1031[6] = xmmword_1808D85F0[6];
                        v1031[7] = xmmword_1808D85F0[7];
                        v1031[8] = xmmword_1808D85F0[8];
                        v2 = (__m128i)xmmword_1808D85F0[9];
                        v1031[9] = v2;
                        v1027[8] = 8;
                        v1033 = GetProcessHeap();
                        v1034 = HeapAlloc(v1033, 8u, 8uLL);
                        if ( v1034 )
                        {
                          *((_QWORD *)v1027 + 5) = v1034;
                          *v1034 = qword_1808D85E0;
                          v957 = v1027;
                          v1039 = 0LL;
                        }
                        else
                        {
LABEL_1331:
                          v1032 = -1073741801;
                          v1250 = (LPCWSTR)*((_QWORD *)v1027 + 1);
                          if ( v1250 )
                          {
                            v1035 = GetProcessHeap();
                            HeapFree(v1035, 0, (LPVOID)v1250);
                            *((_QWORD *)v1027 + 1) = 0LL;
                          }
                          v1250 = (LPCWSTR)*((_QWORD *)v1027 + 3);
                          if ( v1250 )
                          {
                            v1036 = GetProcessHeap();
                            HeapFree(v1036, 0, (LPVOID)v1250);
                            *((_QWORD *)v1027 + 3) = 0LL;
                          }
                          v1250 = (LPCWSTR)*((_QWORD *)v1027 + 5);
                          if ( v1250 )
                          {
                            v1037 = GetProcessHeap();
                            HeapFree(v1037, 0, (LPVOID)v1250);
                            *((_QWORD *)v1027 + 5) = 0LL;
                          }
                          v1038 = GetProcessHeap();
                          HeapFree(v1038, 0, v1027);
                          v1039 = v1260;
                        }
                      }
                      else
                      {
                        v1032 = -1073741801;
                        v1039 = v1260;
                      }
                      v1250 = (LPCWSTR)v125;
                      v1254 = (size_t)v902;
                      v1040 = (unsigned __int16 *)v1256;
                      v1041 = GetProcessHeap();
                      HeapFree(v1041, 0, v1262);
                      if ( v1039 )
                      {
                        v1042 = (void *)*((_QWORD *)v1039 + 1);
                        if ( v1042 )
                        {
                          v1043 = GetProcessHeap();
                          HeapFree(v1043, 0, v1042);
                          *((_QWORD *)v1039 + 1) = 0LL;
                        }
                        v1044 = (void *)*((_QWORD *)v1039 + 3);
                        if ( v1044 )
                        {
                          v1045 = GetProcessHeap();
                          HeapFree(v1045, 0, v1044);
                          *((_QWORD *)v1039 + 3) = 0LL;
                        }
                        v1046 = (void *)*((_QWORD *)v1039 + 5);
                        if ( v1046 )
                        {
                          v1047 = GetProcessHeap();
                          HeapFree(v1047, 0, v1046);
                          *((_QWORD *)v1039 + 5) = 0LL;
                        }
                        v1048 = GetProcessHeap();
                        HeapFree(v1048, 0, v1039);
                      }
                      v969 = v1032 | 0x10000000;
                      v1049 = v1040;
                      v902 = (WCHAR *)v1254;
                      v125 = (void *)v1250;
                      if ( v969 < 0 )
                        goto LABEL_1544;
                      v1249[1] = 4;
                      v1050 = RtlUIntAdd(4u, *v957, &v1249[1]);
                      if ( v1050 >= 0 )
                      {
                        v1050 = RtlUIntAdd(v1249[1], 4, &v1249[1]);
                        if ( v1050 >= 0 )
                        {
                          v1050 = RtlUIntAdd(v1249[1], v957[4], &v1249[1]);
                          if ( v1050 >= 0 )
                          {
                            v1050 = RtlUIntAdd(v1249[1], 4, &v1249[1]);
                            if ( v1050 >= 0 )
                            {
                              v1050 = RtlUIntAdd(v1249[1], v957[8], &v1249[1]);
                              if ( v1050 >= 0 )
                              {
                                v1053 = v1249[1];
                                v1054 = GetProcessHeap();
                                v1055 = HeapAlloc(v1054, 8u, v1053);
                                if ( !v1055 )
                                {
                                  v969 = -805306345;
                                  v1049 = (unsigned __int16 *)v1256;
                                  v902 = (WCHAR *)v1254;
                                  v125 = (void *)v1250;
                                  goto LABEL_1544;
                                }
                                v1259 = v1055;
                                *v1055 = *v957;
                                v1050 = RtlULongLongAdd((unsigned __int64)v1055, 4LL, (__int64 *)&v1259);
                                v1057 = v1056;
                                if ( v1050 < 0 )
                                  goto LABEL_1364;
                                memcpy_0(v1259, *((const void **)v957 + 1), *v957);
                                v1050 = RtlULongLongAdd((unsigned __int64)v1259, *v957, (__int64 *)&v1259);
                                if ( v1050 < 0 )
                                  goto LABEL_1364;
                                v1058 = v1259;
                                *(_DWORD *)v1259 = v957[4];
                                v1050 = RtlULongLongAdd((unsigned __int64)v1058, 4LL, (__int64 *)&v1259);
                                if ( v1050 < 0
                                  || (memcpy_0(v1259, *((const void **)v957 + 3), v957[4]),
                                      v1050 = RtlULongLongAdd((unsigned __int64)v1259, v957[4], (__int64 *)&v1259),
                                      v1050 < 0)
                                  || (v1059 = v1259,
                                      *(_DWORD *)v1259 = v957[8],
                                      v1050 = RtlULongLongAdd((unsigned __int64)v1059, 4LL, (__int64 *)&v1259),
                                      v1050 < 0)
                                  || (memcpy_0(v1259, *((const void **)v957 + 5), v957[8]),
                                      v1050 = RtlULongLongAdd((unsigned __int64)v1259, v957[8], (__int64 *)&v1259),
                                      v1050 < 0) )
                                {
LABEL_1364:
                                  v1060 = GetProcessHeap();
                                  HeapFree(v1060, 0, v1057);
                                  v1051 = v1250;
                                  v1052 = v1254;
                                }
                                else
                                {
                                  v1271 = v1057;
                                  LODWORD(v1258) = v1053;
                                  v1051 = v1250;
                                  v1052 = v1254;
                                }
                              }
                            }
                          }
                        }
                      }
                      v969 = v1050 | 0x10000000;
                      v1049 = (unsigned __int16 *)v1256;
                      v902 = (WCHAR *)v1052;
                      v125 = (void *)v1051;
                      if ( v969 < 0 )
                        goto LABEL_1544;
                      v1287 = 8;
                      v1061 = RtlUIntAdd(8u, (int)lpModuleName, (int *)&v1287);
                      v969 = v1061 | 0x10000000;
                      if ( v1061 < 0 )
                        goto LABEL_1544;
                      v1062 = (v1287 + 7) & 0xFFFFFFF8;
                      if ( v1062 < v1287 )
                      {
                        v969 = -1073741675;
                        goto LABEL_1544;
                      }
                      v1295[0] = (v1287 + 7) & 0xFFFFFFF8;
                      v969 = RtlUIntAdd(v1062, 8, (int *)v1295);
                      if ( v969 >= 0 )
                      {
                        if ( v1317[1] && LODWORD(v1317[0]) > 1 )
                        {
                          v1063 = (LPCWSTR)v1317[1];
                          v1250 = (LPCWSTR)v1317[1];
                          LODWORD(lpModuleName) = 0;
                          v1049 = (unsigned __int16 *)v1256;
                          do
                          {
                            v969 = RtlULongLongAdd((unsigned __int64)v1063, 4LL, (__int64 *)&v1250);
                            if ( v969 < 0 )
                              goto LABEL_1544;
                            v969 = RtlULongLongAdd((unsigned __int64)v1250, v1064, (__int64 *)&v1250);
                            if ( v969 < 0 )
                              goto LABEL_1544;
                            LODWORD(lpModuleName) = (_DWORD)lpModuleName + 1;
                            v1063 = v1250;
                          }
                          while ( !(_DWORD)lpModuleName );
                          LODWORD(lpModuleName) = *(_DWORD *)v1250;
                          v969 = RtlULongLongAdd((unsigned __int64)v1250, 4LL, (__int64 *)&v1250);
                          if ( v969 >= 0 )
                          {
                            if ( LODWORD(v1317[0]) <= 2 )
                            {
                              v969 = -1073741811;
                              goto LABEL_1544;
                            }
                            v1066 = (LPCWSTR)v1317[1];
                            v1250 = (LPCWSTR)v1317[1];
                            do
                            {
                              v1256 = v1065;
                              v1254 = (size_t)v125;
                              v1259 = v902;
                              v1260 = v1049;
                              v1265 = (unsigned __int16 *)v957;
                              v969 = RtlULongLongAdd((unsigned __int64)v1066, 4LL, (__int64 *)&v1250);
                              if ( v969 < 0 )
                                goto LABEL_1544;
                              v969 = RtlULongLongAdd((unsigned __int64)v1250, v1067, (__int64 *)&v1250);
                              if ( v969 < 0 )
                                goto LABEL_1544;
                              v1066 = v1250;
                            }
                            while ( (unsigned int)(v1068 + 1) < 2 );
                            v969 = RtlULongLongAdd((unsigned __int64)v1250, 4LL, (__int64 *)&v1250);
                            if ( v969 >= 0 )
                            {
                              LODWORD(v1267) = v1069;
                              v969 = RtlUIntAdd(v1069, v1295[0], (int *)&v1267);
                              if ( v969 >= 0 )
                              {
                                v969 = RtlUIntAdd(v1267, v1070, (int *)&v1267);
                                if ( v969 >= 0 )
                                {
                                  v969 = RtlUIntAdd(v1267, (int)lpModuleName, (int *)&v1267);
                                  if ( v969 >= 0 )
                                  {
                                    v969 = RtlUIntAdd(v1267, v1071, (int *)&v1267);
                                    if ( v969 >= 0 )
                                    {
                                      v969 = RtlUIntAdd(v1267, v1072, (int *)&v1267);
                                      if ( v969 >= 0 )
                                      {
                                        if ( (unsigned int)v1267 > 0x400000 )
                                        {
                                          v969 = -2147418113;
                                          goto LABEL_1544;
                                        }
                                        v1073 = v1267;
                                        v1074 = GetProcessHeap();
                                        v1075 = HeapAlloc(v1074, 8u, v1073);
                                        Src = v1075;
                                        if ( !v1075 )
                                        {
                                          Src = 0LL;
                                          v969 = -805306345;
                                          v1076 = v1256;
                                          goto LABEL_1397;
                                        }
                                        v1320 = 0LL;
                                        v1321 = 0LL;
                                        hModule = 0LL;
                                        v1076 = v1256;
                                        if ( !v1256 )
                                        {
                                          v969 = -2147024809;
LABEL_1397:
                                          v125 = (void *)v1254;
                                          v957 = (unsigned int *)v1265;
                                          v1271 = v1076;
                                          goto LABEL_1544;
                                        }
                                        *(_QWORD *)&v1320 = v1256;
                                        LODWORD(v1321) = v1258;
                                        *((_QWORD *)&v1320 + 1) = v1075;
                                        *(_QWORD *)((char *)&v1321 + 4) = v1073;
                                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                          && (ProcAddress = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                                        {
                                          v1079 = ((__int64 (__fastcall *)(__int64, __int128 *))ProcAddress)(
                                                    134LL,
                                                    &v1320);
                                          v969 = v1079 | 0x10000000;
                                          LODWORD(lpModuleName) = v1073;
                                          if ( v1079 >= 0 )
                                          {
                                            v1080 = DWORD1(v1321);
                                            v1081 = v1256;
                                            v1082 = v1265;
                                            v1083 = v1049;
                                            v1084 = v902;
                                            v1085 = v1254;
LABEL_1410:
                                            v1086 = 0LL;
                                            LODWORD(lpModuleName) = 0;
                                            v1250 = (LPCWSTR)Src;
                                            if ( v1080 < 4 )
                                            {
                                              v1049 = v1083;
                                              v902 = v1084;
                                              v125 = (void *)v1085;
LABEL_1412:
                                              v957 = (unsigned int *)v1082;
                                              v969 = -805306306;
                                              v1271 = v1081;
                                              goto LABEL_1544;
                                            }
                                            v1087 = *(unsigned int *)Src;
                                            v1088 = RtlULongLongAdd((unsigned __int64)Src, 4LL, (__int64 *)&v1250);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            v1088 = RtlUIntAdd(0, 4, (int *)&lpModuleName);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            if ( v1080 - (unsigned int)lpModuleName < (unsigned int)v1087 )
                                            {
LABEL_1416:
                                              v1049 = v1260;
                                              v902 = (WCHAR *)v1259;
                                              v125 = (void *)v1254;
                                              goto LABEL_1412;
                                            }
                                            v1271 = (void *)v1250;
                                            v1088 = RtlULongLongAdd((unsigned __int64)v1250, v1087, (__int64 *)&v1250);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            v1088 = RtlUIntAdd((unsigned int)lpModuleName, v1087, (int *)&lpModuleName);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            if ( v1080 - (unsigned int)lpModuleName < (unsigned int)v1089 )
                                              goto LABEL_1416;
                                            v1090 = *(unsigned int *)v1250;
                                            v1088 = RtlULongLongAdd((unsigned __int64)v1250, v1089, (__int64 *)&v1250);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            v1088 = RtlUIntAdd((unsigned int)lpModuleName, v1091, (int *)&lpModuleName);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            if ( v1080 - (unsigned int)lpModuleName < (unsigned int)v1090 )
                                              goto LABEL_1416;
                                            v1258 = (size_t)v1250;
                                            v1088 = RtlULongLongAdd(
                                                      (unsigned __int64)v1250,
                                                      (unsigned int)v1090,
                                                      (__int64 *)&v1250);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            v1088 = RtlUIntAdd((unsigned int)lpModuleName, v1090, (int *)&lpModuleName);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            if ( v1080 - (unsigned int)lpModuleName < v1092 )
                                              goto LABEL_1416;
                                            v1249[1] = *(_DWORD *)v1250;
                                            v1088 = RtlULongLongAdd((unsigned __int64)v1250, 4LL, (__int64 *)&v1250);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            v1088 = RtlUIntAdd((unsigned int)lpModuleName, 4, (int *)&lpModuleName);
                                            if ( v1088 < 0 )
                                              goto LABEL_1465;
                                            if ( v1080 - (unsigned int)lpModuleName < v1093 )
                                              goto LABEL_1416;
                                            v1088 = RtlUIntAdd((unsigned int)lpModuleName, v1093, (int *)&lpModuleName);
                                            if ( v1088 < 0 )
                                            {
LABEL_1465:
                                              v1115 = (unsigned int *)Size;
                                              goto LABEL_1466;
                                            }
                                            if ( v1080 != (_DWORD)lpModuleName
                                              || (unsigned int)(v1094 + v1090 + v1087) + 12LL != v1080 )
                                            {
                                              goto LABEL_1416;
                                            }
                                            v1095 = GetProcessHeap();
                                            v1096 = HeapAlloc(v1095, 8u, 0x30uLL);
                                            v1097 = v1096;
                                            if ( !v1096 )
                                            {
                                              Size = 0LL;
                                              v969 = -805306345;
                                              v957 = (unsigned int *)v1265;
                                              v1049 = v1260;
                                              v902 = (WCHAR *)v1259;
                                              v125 = (void *)v1254;
                                              v1271 = v1256;
                                              goto LABEL_1544;
                                            }
                                            v1088 = 0;
                                            if ( v1271 )
                                            {
                                              *(_DWORD *)v1096 = v1087;
                                              v1098 = GetProcessHeap();
                                              v1099 = HeapAlloc(v1098, 8u, v1087);
                                              if ( !v1099 )
                                                goto LABEL_1443;
                                              v1097[1] = v1099;
                                              memcpy_0(v1099, v1271, v1087);
                                            }
                                            else
                                            {
                                              *(_DWORD *)v1096 = 0;
                                              v1096[1] = 0LL;
                                            }
                                            v1100 = (const void *)v1258;
                                            if ( !v1258 )
                                            {
                                              *((_DWORD *)v1097 + 4) = 0;
                                              v1097[3] = 0LL;
LABEL_1441:
                                              v1103 = v1250;
                                              if ( v1250 )
                                              {
                                                v1104 = v1249[1];
                                                *((_DWORD *)v1097 + 8) = v1249[1];
                                                v1105 = v1104;
                                                v1106 = GetProcessHeap();
                                                v1107 = HeapAlloc(v1106, 8u, (unsigned int)v1105);
                                                if ( !v1107 )
                                                  goto LABEL_1443;
                                                v1097[5] = v1107;
                                                v1088 = 0;
                                                memcpy_0(v1107, v1103, v1105);
                                              }
                                              else
                                              {
                                                *((_DWORD *)v1097 + 8) = 0;
                                                v1097[5] = 0LL;
                                              }
                                              v1086 = (unsigned int *)v1097;
LABEL_1453:
                                              if ( v1088 >= 0 )
                                              {
                                                v1115 = v1086;
LABEL_1455:
                                                Size = (SIZE_T)v1115;
                                                goto LABEL_1466;
                                              }
                                              v1115 = 0LL;
                                              Size = 0LL;
                                              if ( v1086 )
                                              {
                                                v1116 = (void *)*((_QWORD *)v1086 + 1);
                                                if ( v1116 )
                                                {
                                                  v1117 = GetProcessHeap();
                                                  HeapFree(v1117, 0, v1116);
                                                  *((_QWORD *)v1086 + 1) = 0LL;
                                                }
                                                v1118 = (void *)*((_QWORD *)v1086 + 3);
                                                if ( v1118 )
                                                {
                                                  v1119 = GetProcessHeap();
                                                  HeapFree(v1119, 0, v1118);
                                                  *((_QWORD *)v1086 + 3) = 0LL;
                                                }
                                                v1120 = (void *)*((_QWORD *)v1086 + 5);
                                                if ( v1120 )
                                                {
                                                  v1121 = GetProcessHeap();
                                                  HeapFree(v1121, 0, v1120);
                                                  *((_QWORD *)v1086 + 5) = 0LL;
                                                }
                                                v1122 = GetProcessHeap();
                                                HeapFree(v1122, 0, v1086);
                                                v1115 = 0LL;
                                                goto LABEL_1455;
                                              }
LABEL_1466:
                                              v969 = v1088 | 0x10000000;
                                              v957 = (unsigned int *)v1265;
                                              v1049 = v1260;
                                              v902 = (WCHAR *)v1259;
                                              v125 = (void *)v1254;
                                              v1271 = v1256;
                                              if ( v969 < 0 )
                                                goto LABEL_1544;
                                              if ( !v1115 || (pcchLength = *((_QWORD *)v1115 + 1)) == 0 || !*v1115 )
                                              {
                                                v969 = -805306355;
                                                v1271 = v1256;
                                                goto LABEL_1544;
                                              }
                                              v1264 = (LPVOID)(*v1115 - 8LL);
                                              v1123 = (int *)MemoryAlloc((SIZE_T)v1264);
                                              v1263 = v1123;
                                              v1124 = v957;
                                              v1125 = v1049;
                                              v1126 = v902;
                                              v1127 = (size_t)v125;
                                              v1128 = v1256;
                                              v1271 = v1256;
                                              v1129 = 0;
                                              if ( !v1123 )
                                                goto LABEL_1498;
                                              v1260 = (unsigned __int16 *)0x7F1137FAB69605ELL;
                                              v1265 = (unsigned __int16 *)pcchLength;
                                              v1273 = (SIZE_T)v1123;
                                              v1258 = (unsigned __int8)v1264 & 7;
                                              LODWORD(lpModuleName) = 0;
                                              v1259 = v957;
                                              v1271 = v1256;
                                              if ( ((unsigned __int8)v1264 & 7) != 0 )
                                              {
                                                v1278 = 0;
                                                v1256 = v1049;
                                                v1250 = v902;
                                                v1254 = (size_t)v125;
                                                v1271 = v1128;
                                                v1130 = v1265;
                                                v1131 = (int)lpModuleName;
                                                v1132 = (int)lpModuleName;
                                                v1133 = (int)lpModuleName;
                                                do
                                                {
                                                  v125 = (void *)v1127;
                                                  v1254 = v1127;
                                                  v902 = (WCHAR *)v1126;
                                                  v1250 = v1126;
                                                  v1049 = v1125;
                                                  v1256 = v1125;
                                                  v957 = v1124;
                                                  v1259 = v1124;
                                                  v1134 = *(unsigned __int8 *)v1130;
                                                  v1135 = v1288;
                                                  if ( (unsigned int)v1132 >= 4 )
                                                  {
                                                    v1133 |= v1134 << v1288;
                                                  }
                                                  else
                                                  {
                                                    v1131 |= v1134 << (v1288 - 32);
                                                    v1135 = v1288;
                                                  }
                                                  v1130 = (unsigned __int16 *)((char *)v1130 + 1);
                                                  ++v1132;
                                                  v1288 = v1135 - 8;
                                                  v1124 = v957;
                                                  v1125 = v1049;
                                                }
                                                while ( v1132 < (int)v1258 );
                                                v1278 = v1133;
                                                LODWORD(lpModuleName) = v1131;
                                                v1265 = v1130;
                                                v1129 = 0;
                                                v100 = v1276;
                                                v1123 = (int *)v1263;
                                                v1136 = v1258;
                                                v1137 = (unsigned int)lpModuleName ^ 0x92F65A5;
                                                v1138 = v1278 ^ 0x699A899C;
                                                v1139 = (unsigned int)lpModuleName ^ 0x92F65A5;
                                                v1140 = v1278 ^ 0x699A899C;
                                                v1249[1] = 0;
                                                if ( (_DWORD)v1258 )
                                                {
                                                  v1141 = v1263;
                                                  v1142 = v1249[1];
                                                  do
                                                  {
                                                    if ( (unsigned int)v1142 >= 4 )
                                                    {
                                                      v1140 = __ROR4__(v1140, 24);
                                                      v1249[1] = v1140;
                                                    }
                                                    else
                                                    {
                                                      v1139 = __ROR4__(v1139, 24);
                                                      v1249[1] = v1139;
                                                    }
                                                    v1258 = (size_t)(v1141 + 1);
                                                    *v1141 = v1249[1];
                                                    ++v1142;
                                                    v1141 = (_BYTE *)v1258;
                                                  }
                                                  while ( v1142 < (int)v1136 );
                                                  v1273 = v1258;
                                                  v1129 = 0;
                                                }
                                                if ( v1136 <= 4 )
                                                {
                                                  v1143 = 0;
                                                  if ( v1136 < 4 )
                                                    v1137 = v1137 >> (8 * (4 - v1136)) << (8 * (4 - v1136));
                                                }
                                                else
                                                {
                                                  v1143 = v1138 >> (8 * (8 - v1136)) << (8 * (8 - v1136));
                                                }
                                              }
                                              else
                                              {
                                                v1249[1] = 0;
                                                LODWORD(v1258) = 0;
                                                v1256 = v1049;
                                                v1250 = v902;
                                                v1254 = (size_t)v125;
                                                v1137 = 0;
                                                v1143 = 0;
                                              }
                                              v1144 = (char *)v1264;
                                              v1262 = (LPVOID)((unsigned __int64)v1264 >> 3);
                                              if ( (unsigned __int64)v1264 >> 3 )
                                              {
                                                v1145 = HIDWORD(v1260);
                                                v1249[1] = WORD2(v1260);
                                                LODWORD(v1258) = 24670;
                                                LODWORD(v1267) = HIDWORD(v1260) ^ 0xAB69605E;
                                                v1146 = (_BYTE *)(v1273 + 7);
                                                v1147 = (unsigned __int8 *)(v1265 + 1);
                                                v1148 = (int)lpModuleName;
                                                v1149 = (char *)v1262;
                                                do
                                                {
                                                  v1150 = v1147[1] | ((*v1147 | ((*(v1147 - 1) | (*(v1147 - 2) << 8)) << 8)) << 8);
                                                  v1151 = v1147[5] | ((v1147[4] | ((v1147[3] | (v1147[2] << 8)) << 8)) << 8);
                                                  v1147 += 8;
                                                  v1152 = v1143 ^ v1145 ^ v1137 ^ v1150 ^ v1151 ^ 0xAB69605E;
                                                  v1153 = v1137 ^ v1150 ^ (__ROR4__(v1152, 22)
                                                                         + v1249[1] * __ROR4__(v1152 + 1419157410, 27));
                                                  v1154 = v1152 ^ (WORD1(v1260) * __ROR4__(v1153 + v1145, 9)
                                                                 - __ROR4__(v1153, 30));
                                                  v1155 = v1153 ^ (v1258 * (v1154 - v1249[1]) - (v1154 >> 13));
                                                  v1156 = v1154 ^ (HIWORD(v1260) * __ROR4__(v1155 ^ WORD1(v1260), 26)
                                                                 - __ROR4__(v1155, 30));
                                                  v1157 = v1155 ^ (v1145 - (v1156 ^ 0xAB69605E));
                                                  v1158 = v1156 ^ (WORD1(v1260) * (v1249[1] ^ v1157)) ^ __ROR4__(v1157, 6);
                                                  v1159 = v1157 ^ (__ROR4__(v1158, 30)
                                                                 + v1258 * __ROR4__(v1158 + v1145, 15));
                                                  v1160 = v1158 ^ (HIWORD(v1260) * __ROR4__(v1159 + 1419157410, 14)
                                                                 - __ROR4__(v1159, 24));
                                                  v1161 = v1159 ^ __ROR4__(v1160, 10) ^ (v1249[1]
                                                                                       * __ROR4__(
                                                                                           v1160 ^ 0xAB69605E,
                                                                                           12));
                                                  v1162 = v1161 ^ (HIWORD(v1260)
                                                                 * (v1258
                                                                  + __ROR4__(
                                                                      ~(v1160 ^ (v1161 >> 10) ^ (WORD1(v1260)
                                                                                               * (v1161 ^ HIWORD(v1260)))),
                                                                      5)));
                                                  v1163 = v1160 ^ (v1161 >> 10) ^ (WORD1(v1260) * (v1161 ^ HIWORD(v1260))) ^ (v1162 - HIWORD(v1260)) ^ 0xAB69605E;
                                                  v1164 = v1162 ^ ((v1163 >> 2)
                                                                 + v1249[1] * __ROR4__(HIWORD(v1260) ^ v1163, 30));
                                                  v1165 = v1163 ^ (__ROR4__(v1164, 25)
                                                                 + WORD1(v1260) * __ROR4__(v1164 - v1145, 6));
                                                  v1166 = v1164 ^ (v1258 * (v1165 ^ v1249[1]) + __ROR4__(v1165, 9));
                                                  v1167 = v1165 ^ (__ROR4__(v1166, 25)
                                                                 + HIWORD(v1260) * __ROR4__(v1166 ^ WORD1(v1260), 27));
                                                  v1168 = v1166 ^ v1167 ^ v1267;
                                                  v1169 = v1167 ^ (v1249[1] * (__ROR4__(v1168, 3) - WORD1(v1260)));
                                                  v1170 = v1168 ^ (v1258 * __ROR4__(v1169 - v1145, 1)
                                                                 - __ROR4__(v1169, 6));
                                                  v1171 = v1169 ^ (__ROR4__(v1170, 18)
                                                                 + HIWORD(v1260) * __ROR4__(v1170 - 1419157410, 29));
                                                  v1172 = v1170 ^ (v1249[1] * __ROR4__(v1171 - 1419157410, 17)
                                                                 - __ROR4__(v1171, 14));
                                                  v1137 = v1148 ^ v1172 ^ __ROR4__(
                                                                            v1171 ^ (v1172 >> 3) ^ (WORD1(v1260)
                                                                                                  * (v1258 ^ v1172)),
                                                                            30) ^ (v1258
                                                                                 * __ROR4__(
                                                                                     v1145 ^ v1171 ^ (v1172 >> 3) ^ (WORD1(v1260) * (v1258 ^ v1172)),
                                                                                     28));
                                                  v1143 = v1278 ^ v1171 ^ (v1172 >> 3) ^ (WORD1(v1260) * (v1258 ^ v1172));
                                                  *(v1146 - 4) = v1137;
                                                  *v1146 = v1143;
                                                  *(v1146 - 5) = __ROR4__(v1137, 8);
                                                  *(v1146 - 1) = __ROR4__(v1143, 8);
                                                  *(v1146 - 6) = __ROR4__(v1137, 16);
                                                  *(v1146 - 2) = __ROR4__(v1143, 16);
                                                  *(v1146 - 7) = __ROR4__(v1137, 24);
                                                  *(v1146 - 3) = __ROR4__(v1143, 24);
                                                  v1148 = v1150;
                                                  v1278 = v1151;
                                                  v1146 += 8;
                                                  --v1149;
                                                }
                                                while ( v1149 );
                                                v1129 = 0;
                                                v100 = v1276;
                                                v125 = (void *)v1254;
                                                v902 = (WCHAR *)v1250;
                                                v957 = (unsigned int *)v1259;
                                                v1049 = (unsigned __int16 *)v1256;
                                                v1123 = (int *)v1263;
                                                v1144 = (char *)v1264;
                                              }
                                              v1173 = 0LL;
                                              if ( v1144 )
                                              {
                                                do
                                                  v1129 ^= *((_BYTE *)v1123 + v1173++);
                                                while ( v1173 < (unsigned __int64)v1144 );
                                              }
                                              v1250 = (LPCWSTR)Src;
                                              v1256 = (LPVOID)Size;
                                              if ( v1129 != *(_QWORD *)&v1144[pcchLength] )
                                              {
                                                MemoryFree(v1123);
LABEL_1498:
                                                v969 = -805306367;
                                                v1263 = 0LL;
                                                goto LABEL_1544;
                                              }
                                              v1174 = v957;
                                              LODWORD(lpModuleName) = 0;
                                              v1265 = (unsigned __int16 *)v1123;
                                              if ( (unsigned int)v1144 >= 4 )
                                              {
                                                v1249[1] = *v1123;
                                                v1175 = RtlULongLongAdd((unsigned __int64)v1123, 4LL, (__int64 *)&v1265);
                                                v1263 = v1176;
                                                Size = (SIZE_T)v1256;
                                                Src = (void *)v1250;
                                                v957 = v1177;
                                                if ( v1175 < 0 )
                                                  goto LABEL_1540;
                                                v1175 = RtlUIntAdd(0, 4, (int *)&lpModuleName);
                                                v1263 = v1123;
                                                v1178 = v1256;
                                                Size = (SIZE_T)v1256;
                                                v1179 = (WCHAR *)v1250;
                                                Src = (void *)v1250;
                                                if ( v1175 < 0 )
                                                  goto LABEL_1540;
                                                if ( (unsigned int)((_DWORD)v1264 - (_DWORD)lpModuleName) < 4 )
                                                  goto LABEL_1503;
                                                LODWORD(v1258) = *(_DWORD *)v1265;
                                                v1175 = RtlULongLongAdd((unsigned __int64)v1265, 4LL, (__int64 *)&v1265);
                                                v1263 = v1180;
                                                Size = (SIZE_T)v1256;
                                                Src = (void *)v1250;
                                                if ( v1175 < 0 )
                                                  goto LABEL_1540;
                                                v1175 = RtlUIntAdd((unsigned int)lpModuleName, 4, (int *)&lpModuleName);
                                                v1263 = v1123;
                                                v1178 = v1256;
                                                Size = (SIZE_T)v1256;
                                                v1179 = (WCHAR *)v1250;
                                                Src = (void *)v1250;
                                                if ( v1175 < 0 )
                                                  goto LABEL_1540;
                                                if ( (int)v1264 - (int)lpModuleName < (unsigned int)v1258 )
                                                {
LABEL_1503:
                                                  Size = (SIZE_T)v1178;
                                                  Src = v1179;
LABEL_1538:
                                                  v1263 = v1123;
LABEL_1539:
                                                  v1175 = -1073741762;
                                                  goto LABEL_1540;
                                                }
                                                v1175 = RtlUIntAdd(
                                                          (unsigned int)lpModuleName,
                                                          v1258,
                                                          (int *)&lpModuleName);
                                                v1263 = v1123;
                                                Size = (SIZE_T)v1256;
                                                Src = (void *)v1250;
                                                if ( v1175 < 0 )
                                                  goto LABEL_1540;
                                                if ( (char *)v1123 + (unsigned int)v1264 >= (char *)v1265
                                                                                          + (unsigned int)v1258
                                                  && (unsigned __int64)v1123
                                                   + (unsigned int)v1264
                                                   - (_QWORD)v1265
                                                   - (unsigned int)v1258 < 8 )
                                                {
                                                  pcchLength = 0LL;
                                                  v1264 = 0LL;
                                                  v1273 = 0LL;
                                                  v1262 = 0LL;
                                                  v1175 = 0;
                                                  LODWORD(lpModuleName) = 0;
                                                  v1263 = v1123;
                                                  Size = (SIZE_T)v1256;
                                                  Src = (void *)v1250;
                                                  v957 = v1174;
                                                  if ( !v1265 )
                                                    goto LABEL_1522;
                                                  v1267 = (SIZE_T)v1265;
                                                  v1175 = RtlULongLongAdd(
                                                            (unsigned __int64)v1265,
                                                            (unsigned int)v1258,
                                                            (__int64 *)&v1264);
                                                  v1263 = v1181;
                                                  Size = (SIZE_T)v1256;
                                                  Src = (void *)v1250;
                                                  if ( v1175 < 0 )
                                                  {
LABEL_1532:
                                                    v1194 = (int)Ptr;
                                                    goto LABEL_1533;
                                                  }
                                                  v1263 = v1181;
                                                  Size = (SIZE_T)v1256;
                                                  Src = (void *)v1250;
                                                  v1182 = v1264;
                                                  v1183 = v1267;
                                                  if ( v1267 < (unsigned __int64)v1264 )
                                                  {
                                                    v1263 = v1181;
                                                    v1184 = v1256;
                                                    Size = (SIZE_T)v1256;
                                                    v1185 = (unsigned __int16 *)v1250;
                                                    Src = (void *)v1250;
                                                    while ( 1 )
                                                    {
                                                      v1260 = v1185;
                                                      v1175 = RtlULongLongAdd(v1183, 4LL, (__int64 *)&v1273);
                                                      if ( v1175 < 0 )
                                                        goto LABEL_1532;
                                                      if ( v1273 > (unsigned __int64)v1264 )
                                                        goto LABEL_1526;
                                                      LODWORD(v1267) = 0;
                                                      v1175 = RtlUIntAdd(4u, *v1186, (int *)&v1267);
                                                      if ( v1175 < 0 )
                                                        goto LABEL_1540;
                                                      v1175 = RtlULongLongAdd(
                                                                v1187,
                                                                (unsigned int)v1267,
                                                                (__int64 *)&v1262);
                                                      v1263 = v1188;
                                                      Size = (SIZE_T)v1184;
                                                      Src = v1189;
                                                      if ( v1175 < 0 )
                                                        goto LABEL_1532;
                                                      v1183 = (unsigned __int64)v1262;
                                                      v1182 = v1264;
                                                      v1263 = v1188;
                                                      Size = (SIZE_T)v1184;
                                                      if ( v1262 > v1264 )
                                                      {
                                                        v1175 = -1073741811;
                                                        Src = v1260;
                                                        goto LABEL_1540;
                                                      }
                                                      LODWORD(lpModuleName) = (_DWORD)lpModuleName + 1;
                                                      v1185 = v1260;
                                                      Src = v1260;
                                                      if ( v1262 >= v1264 )
                                                      {
                                                        v1263 = v1188;
                                                        Size = (SIZE_T)v1184;
                                                        Src = v1260;
                                                        break;
                                                      }
                                                    }
                                                  }
                                                  if ( (LPVOID)v1183 != v1182 )
                                                  {
LABEL_1526:
                                                    v1175 = -1073741811;
                                                  }
                                                  else
                                                  {
LABEL_1522:
                                                    v1190 = v1258;
                                                    if ( !(_DWORD)v1258 )
                                                    {
                                                      v1193 = (void *)pcchLength;
                                                      goto LABEL_1529;
                                                    }
                                                    v1191 = v1258;
                                                    v1192 = GetProcessHeap();
                                                    v1193 = HeapAlloc(v1192, 8u, v1191);
                                                    v1175 = 0;
                                                    if ( v1193 )
                                                    {
                                                      v1190 = v1258;
LABEL_1529:
                                                      if ( v1265 )
                                                        memcpy_0(v1193, v1265, v1190);
                                                      v1270[0] = v1193;
                                                      v1194 = (int)lpModuleName;
                                                      LODWORD(Ptr) = (_DWORD)lpModuleName;
LABEL_1533:
                                                      if ( v1175 < 0 || v1249[1] == v1194 )
                                                        goto LABEL_1540;
                                                      goto LABEL_1539;
                                                    }
                                                    v1270[0] = 0LL;
                                                    LODWORD(Ptr) = 0;
                                                    v1175 = -1073741801;
                                                  }
LABEL_1540:
                                                  v969 = v1175 | 0x10000000;
                                                  goto LABEL_1544;
                                                }
                                                Size = (SIZE_T)v1256;
                                                Src = (void *)v1250;
                                              }
                                              v957 = v1174;
                                              goto LABEL_1538;
                                            }
                                            *((_DWORD *)v1097 + 4) = v1090;
                                            v1101 = GetProcessHeap();
                                            v1102 = HeapAlloc(v1101, 8u, v1090);
                                            if ( v1102 )
                                            {
                                              v1097[3] = v1102;
                                              v1088 = 0;
                                              memcpy_0(v1102, v1100, v1090);
                                              goto LABEL_1441;
                                            }
LABEL_1443:
                                            v1088 = -1073741801;
                                            v1108 = (void *)v1097[1];
                                            if ( v1108 )
                                            {
                                              v1109 = GetProcessHeap();
                                              HeapFree(v1109, 0, v1108);
                                              v1097[1] = 0LL;
                                            }
                                            v1110 = (void *)v1097[3];
                                            if ( v1110 )
                                            {
                                              v1111 = GetProcessHeap();
                                              HeapFree(v1111, 0, v1110);
                                              v1097[3] = 0LL;
                                            }
                                            v1112 = (void *)v1097[5];
                                            if ( v1112 )
                                            {
                                              v1113 = GetProcessHeap();
                                              HeapFree(v1113, 0, v1112);
                                              v1097[5] = 0LL;
                                            }
                                            v1114 = GetProcessHeap();
                                            HeapFree(v1114, 0, v1097);
                                            goto LABEL_1453;
                                          }
                                        }
                                        else
                                        {
                                          v1077 = GetLastError();
                                          v969 = v1077;
                                          if ( v1077 > 0 )
                                            v969 = (unsigned __int16)v1077 | 0x80070000;
                                          LODWORD(lpModuleName) = v1073;
                                          if ( v969 >= 0 )
                                          {
                                            v969 = -2147467259;
                                            LODWORD(lpModuleName) = v1073;
                                          }
                                        }
                                        if ( v969 == -805306333 )
                                        {
                                          v969 = -2147024774;
                                          v957 = (unsigned int *)v1265;
                                          v125 = (void *)v1254;
                                          v1271 = v1256;
                                          goto LABEL_1544;
                                        }
                                        v1082 = v1265;
                                        v957 = (unsigned int *)v1265;
                                        v1083 = v1049;
                                        v1084 = v902;
                                        v1085 = v1254;
                                        v125 = (void *)v1254;
                                        v1081 = v1256;
                                        v1271 = v1256;
                                        if ( v969 >= 0 )
                                        {
                                          v1080 = (unsigned int)lpModuleName;
                                          goto LABEL_1410;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
LABEL_1544:
                          if ( !v1049 )
                          {
LABEL_1546:
                            if ( v957 )
                            {
                              v1196 = (void *)*((_QWORD *)v957 + 1);
                              if ( v1196 )
                              {
                                v1197 = GetProcessHeap();
                                HeapFree(v1197, 0, v1196);
                                *((_QWORD *)v957 + 1) = 0LL;
                              }
                              v1198 = (void *)*((_QWORD *)v957 + 3);
                              if ( v1198 )
                              {
                                v1199 = GetProcessHeap();
                                HeapFree(v1199, 0, v1198);
                                *((_QWORD *)v957 + 3) = 0LL;
                              }
                              v1200 = (void *)*((_QWORD *)v957 + 5);
                              if ( v1200 )
                              {
                                v1201 = GetProcessHeap();
                                HeapFree(v1201, 0, v1200);
                                *((_QWORD *)v957 + 5) = 0LL;
                              }
                              v1202 = GetProcessHeap();
                              HeapFree(v1202, 0, v957);
                            }
                            v1203 = v1271;
                            if ( v1271 )
                            {
                              v1204 = GetProcessHeap();
                              HeapFree(v1204, 0, v1203);
                            }
                            v1205 = Src;
                            if ( Src )
                            {
                              v1206 = GetProcessHeap();
                              HeapFree(v1206, 0, v1205);
                            }
                            v1207 = (_QWORD *)Size;
                            if ( Size )
                            {
                              v1208 = *(void **)(Size + 8);
                              if ( v1208 )
                              {
                                v1209 = GetProcessHeap();
                                HeapFree(v1209, 0, v1208);
                                v1207[1] = 0LL;
                              }
                              v1210 = (void *)v1207[3];
                              if ( v1210 )
                              {
                                v1211 = GetProcessHeap();
                                HeapFree(v1211, 0, v1210);
                                v1207[3] = 0LL;
                              }
                              v1212 = (void *)v1207[5];
                              if ( v1212 )
                              {
                                v1213 = GetProcessHeap();
                                HeapFree(v1213, 0, v1212);
                                v1207[5] = 0LL;
                              }
                              v1214 = GetProcessHeap();
                              HeapFree(v1214, 0, v1207);
                            }
                            v1215 = v1263;
                            if ( v1263 )
                            {
                              v1216 = GetProcessHeap();
                              HeapFree(v1216, 0, v1215);
                            }
LABEL_1568:
                            v80 = v969 < 0;
                            v925 = v1270[0];
                            if ( !v80 )
                            {
                              v1217 = (unsigned int)Ptr;
                              if ( (_DWORD)Ptr )
                              {
                                if ( v1270[0]
                                  && (int)RtlULongLongAdd((unsigned __int64)v1270[0], 4LL, (__int64 *)v1270) >= 0 )
                                {
                                  v1220 = (int *)v1270[0];
                                  if ( !v1219 )
                                    v1220 = 0LL;
                                  if ( v1219 == 4 && *v1220 >= 0 && v1217 > 1 )
                                  {
                                    for ( v1270[0] = v925;
                                          (int)RtlULongLongAdd((unsigned __int64)v1218, 4LL, (__int64 *)v1270) >= 0
                                       && (int)RtlULongLongAdd((unsigned __int64)v1270[0], *v1221, (__int64 *)v1270) >= 0;
                                          v1218 = v1270[0] )
                                    {
                                      if ( v1222 != -1 )
                                      {
                                        RtlULongLongAdd((unsigned __int64)v1270[0], 4LL, (__int64 *)v1270);
                                        goto LABEL_1241;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LABEL_1241;
                          }
LABEL_1545:
                          v1195 = GetProcessHeap();
                          HeapFree(v1195, 0, v1049);
                          goto LABEL_1546;
                        }
                        v969 = -1073741811;
                      }
                      v1049 = (unsigned __int16 *)v1256;
                      goto LABEL_1544;
                    }
                    v948 = (int *)v1317[1];
                    v1259 = (void *)v1317[1];
                    if ( v946 )
                    {
                      do
                      {
                        LODWORD(lpModuleName) = 0;
                        if ( (int)RtlUIntAdd(4u, *v948, (int *)&lpModuleName) < 0
                          || (int)RtlULongLongAdd(v949, (unsigned int)lpModuleName, (__int64 *)&v1259) < 0 )
                        {
                          goto LABEL_1240;
                        }
                        v1250 = v902;
                        v1254 = (size_t)v125;
                        v948 = (int *)v1259;
                      }
                      while ( v951 + 1 < v950 );
                    }
                    if ( (int)RtlULongLongAdd((unsigned __int64)v948, 4LL, (__int64 *)&v1272) >= 0
                      && (unsigned __int64)(v952 + 3) <= v1317[1] + HIDWORD(v1317[0]) )
                    {
                      *v952 = 8;
                      *(_QWORD *)v1272 = v1256;
                      ++LODWORD(v1317[0]);
                      v947 = 0;
                      goto LABEL_1285;
                    }
LABEL_1240:
                    v925 = v1270[0];
LABEL_1241:
                    v1317[0] = 0LL;
                    v926 = (void *)v1317[1];
                    if ( v1317[1] )
                    {
                      v927 = GetProcessHeap();
                      HeapFree(v927, 0, v926);
                      v1317[1] = 0LL;
                    }
                    if ( v925 )
                    {
                      v928 = GetProcessHeap();
                      HeapFree(v928, 0, v925);
                    }
                    if ( v125 )
                    {
                      v929 = GetProcessHeap();
                      HeapFree(v929, 0, v125);
                    }
                    if ( v902 )
                    {
                      v930 = GetProcessHeap();
                      HeapFree(v930, 0, v902);
                    }
                    goto LABEL_1585;
                  }
                  v1254 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(0LL, 0LL, 1027LL);
                  if ( !v1254 )
                  {
                    GetLastError();
                    goto LABEL_1225;
                  }
                  qword_1808DDD48 = off_1808D13D8[0]();
                  v469 = dword_1808DA538;
                  LODWORD(v1251) = dword_1808DA538;
                  memset_0(&v1353, 0, 0x70uLL);
                  v1315 = 0LL;
                  v1271 = 0LL;
                  memset(v1392, 0, 44);
                  Src = 0LL;
                  while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
                    ;
                  v470 = dword_1808DDD3C;
                  if ( dword_1808DDD3C )
                    goto LABEL_663;
                  v1249[0] = 0;
                  LODWORD(v1274) = 0;
                  v471 = (char *)MemoryAlloc(0x338uLL);
                  Size = (SIZE_T)v471;
                  if ( !v471 )
                    goto LABEL_627;
                  v472 = 0;
                  v473 = -1;
                  v474 = 0;
                  v475 = 0;
                  v476 = v471 + 7;
                  v477 = (unsigned __int8 *)&unk_180783012;
                  v478 = 103LL;
                  do
                  {
                    v479 = v477[1] | ((*v477 | ((*(v477 - 1) | (*(v477 - 2) << 8)) << 8)) << 8);
                    v480 = v477[5] | ((v477[4] | ((v477[3] | (v477[2] << 8)) << 8)) << 8);
                    v477 += 8;
                    v481 = v475 ^ v479;
                    v482 = v475 ^ v479 ^ v474 ^ v480 ^ 0xAC987321;
                    v483 = v481 ^ (__ROR4__(v482, 22) + 4991 * __ROR4__(v482 + 1419157410, 27));
                    v484 = v482 ^ (43881 * __ROR4__(v483 + 133239679, 9) - __ROR4__(v483, 30));
                    v485 = v484 ^ (2033 * __ROR4__(v483 ^ (24670 * v484 - (v484 >> 13) - 123127970) ^ 0xAB69, 26)
                                 - __ROR4__(v483 ^ (24670 * v484 - (v484 >> 13) - 123127970), 30));
                    v486 = v483 ^ (24670 * v484 - (v484 >> 13) - 123127970) ^ (133239679 - (v485 ^ 0xAB69605E));
                    v487 = v485 ^ (43881 * (v486 ^ 0x137F)) ^ __ROR4__(v486, 6);
                    v488 = v486 ^ (__ROR4__(v487, 30) + 24670 * __ROR4__(v487 + 133239679, 15));
                    v489 = v487 ^ (2033 * __ROR4__(v488 + 1419157410, 14) - __ROR4__(v488, 24));
                    v490 = v488 ^ __ROR4__(v489, 10) ^ (4991 * __ROR4__(v489 ^ 0xAB69605E, 12));
                    v491 = v489 ^ (v490 >> 10) ^ (43881 * (v490 ^ 0x7F1));
                    v492 = v490 ^ (2033 * (__ROR4__(~v491, 5) + 24670));
                    v493 = v492 ^ (((v491 ^ (v492 - 2033) ^ 0xAB69605E) >> 2)
                                 + 4991 * __ROR4__(v491 ^ (v492 - 2033) ^ 0xAB6967AF, 30));
                    v494 = v491 ^ (v492 - 2033) ^ 0xAB69605E ^ (__ROR4__(v493, 25)
                                                              + 43881 * __ROR4__(v493 - 133239679, 6));
                    v495 = v493 ^ (24670 * (v494 ^ 0x137F) + __ROR4__(v494, 9));
                    v496 = v494 ^ (__ROR4__(v495, 25) + 2033 * __ROR4__(v495 ^ 0xAB69, 27));
                    v497 = v495 ^ v496 ^ 0xAC987321;
                    v498 = v496 ^ (4991 * __ROR4__(v497, 3) - 219010071);
                    v499 = v497 ^ (24670 * __ROR4__(v498 - 133239679, 1) - __ROR4__(v498, 6));
                    v500 = v498 ^ (__ROR4__(v499, 18) + 2033 * __ROR4__(v499 - 1419157410, 29));
                    v501 = v499 ^ (4991 * __ROR4__(v500 - 1419157410, 17) - __ROR4__(v500, 14));
                    v502 = v500 ^ (v501 >> 3) ^ (43881 * (v501 ^ 0x605E));
                    v475 = v501 ^ v472 ^ __ROR4__(v502, 30) ^ (24670 * __ROR4__(v502 ^ 0x7F1137F, 28));
                    v474 = v502 ^ v473;
                    *(v476 - 4) = v475;
                    *v476 = v502 ^ v473;
                    *(v476 - 5) = __ROR4__(v475, 8);
                    *(v476 - 1) = __ROR4__(v502 ^ v473, 8);
                    *(v476 - 6) = __ROR4__(v475, 16);
                    *(v476 - 2) = __ROR4__(v502 ^ v473, 16);
                    *(v476 - 7) = __ROR4__(v475, 24);
                    *(v476 - 3) = __ROR4__(v502 ^ v473, 24);
                    v472 = v479;
                    v473 = v480;
                    v476 += 8;
                    --v478;
                  }
                  while ( v478 );
                  v503 = 0LL;
                  v504 = 0;
                  v469 = v1251;
                  v505 = (_BYTE *)Size;
                  v506 = 0;
                  do
                    v504 ^= *(_BYTE *)(Size + v503++);
                  while ( v503 < 0x338 );
                  if ( v504 != 64LL )
                  {
                    MemoryFree((void *)Size);
                    goto LABEL_627;
                  }
                  *(_BYTE *)(Size + 823) = 0;
                  memset_0(&unk_1808DA540, 0, 0x60uLL);
                  if ( *v505 )
                  {
                    v1299 = v505;
                    while ( 1 )
                    {
                      v509 = (const WCHAR *)v505;
                      v510 = -1LL;
                      do
                        ++v510;
                      while ( *(_WORD *)&v505[2 * v510] );
                      v511 = &v505[2 * v510];
                      Size = 3LL * (unsigned int)v1274;
                      v512 = (HMODULE *)((char *)&unk_1808DA540 + 24 * (unsigned int)v1274);
                      if ( !GetModuleHandleExW(0, v509, v512) )
                        break;
                      v506 = 0;
                      if ( *(_WORD *)*v512 == 23117
                        && (v513 = *((int *)*v512 + 15), (unsigned int)v513 < 0x10000000)
                        && (v514 = (char *)*v512 + v513, v514 >= (char *)*v512)
                        && *(_DWORD *)v514 == 17744 )
                      {
                        if ( *((_WORD *)v514 + 12) == 267 || *((_WORD *)v514 + 12) == 523 )
                        {
                          v515 = Size;
                          *(_QWORD *)((char *)&unk_1808DA540 + 8 * Size + 12) = *((_QWORD *)v514 + 17);
                          *((_DWORD *)&unk_1808DA540 + 2 * v515 + 2) = *((_DWORD *)v514 + 20);
                        }
                        else
                        {
                          v506 = -1073741811;
                        }
                      }
                      else
                      {
                        v506 = -1073741701;
                      }
                      LODWORD(dwBytes) = *(_DWORD *)(v511 + 2);
                      v505 = v511 + 6;
                      v516 = 0;
                      if ( (_DWORD)dwBytes )
                      {
                        v517 = (unsigned int)v1274;
                        do
                        {
                          v518 = v505;
                          v519 = -1LL;
                          do
                            ++v519;
                          while ( v505[v519] );
                          v505 += v519 + 1;
                          if ( v506 >= 0 )
                          {
                            v520 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v517), v518);
                            if ( !v520 )
                              goto LABEL_657;
                            off_1808D1340[v1249[0]] = v520;
                            v517 = (unsigned int)v1274;
                          }
                          ++v1249[0];
                          ++v516;
                        }
                        while ( v516 < (unsigned int)dwBytes );
                      }
                      LODWORD(v1274) = v1274 + 1;
                      if ( !*v505 )
                        goto LABEL_657;
                    }
                    v506 = -1073741702;
LABEL_657:
                    v521 = v1299;
                    if ( !v1299 )
                      goto LABEL_661;
                  }
                  else
                  {
                    v521 = v505;
                  }
                  v522 = GetProcessHeap();
                  HeapFree(v522, 0, v521);
LABEL_661:
                  if ( v506 < 0 )
                  {
LABEL_627:
                    v507 = (HMODULE *)&unk_1808DA540;
                    v508 = 4LL;
                    do
                    {
                      if ( *v507 )
                        FreeLibrary(*v507);
                      v507 += 3;
                      --v508;
                    }
                    while ( v508 );
                    memset_0(&unk_1808DA540, 0, 0x60uLL);
                    memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_664:
                    _InterlockedExchange(&dword_1808DDD40, 0);
                    LODWORD(Ptr) = 0;
                    WORD2(Ptr) = 0;
                    v1249[0] = 0;
                    LODWORD(dwBytes) = 0;
                    LODWORD(v1274) = 0;
                    LODWORD(v1269) = 0;
                    LODWORD(v1277) = 0;
                    Size = 0LL;
                    v1263 = 0LL;
                    v1260 = 0LL;
                    v1265 = 0LL;
                    v1275 = 0;
                    LODWORD(v1268) = 0;
                    while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
                      ;
                    v523 = dword_1808DDD3C;
                    if ( dword_1808DDD3C )
                      goto LABEL_710;
                    LODWORD(v1262) = 0;
                    LODWORD(v1264) = 0;
                    v524 = (const WCHAR *)MemoryAlloc(0x338uLL);
                    lpModuleName = v524;
                    if ( !v524 )
                      goto LABEL_674;
                    v525 = 0;
                    v526 = -1;
                    v527 = 0;
                    v528 = 0;
                    v529 = (char *)v524 + 7;
                    v530 = (unsigned __int8 *)&unk_180783012;
                    v531 = 103LL;
                    do
                    {
                      v532 = v530[1] | ((*v530 | ((*(v530 - 1) | (*(v530 - 2) << 8)) << 8)) << 8);
                      v533 = v530[5] | ((v530[4] | ((v530[3] | (v530[2] << 8)) << 8)) << 8);
                      v530 += 8;
                      v534 = v532 ^ v528;
                      v535 = v533 ^ v534 ^ v527 ^ 0xAC987321;
                      v536 = v534 ^ (__ROR4__(v535, 22) + 4991 * __ROR4__(v535 + 1419157410, 27));
                      v537 = v535 ^ (43881 * __ROR4__(v536 + 133239679, 9) - __ROR4__(v536, 30));
                      v538 = v537 ^ (2033 * __ROR4__(v536 ^ (24670 * v537 - (v537 >> 13) - 123127970) ^ 0xAB69, 26)
                                   - __ROR4__(v536 ^ (24670 * v537 - (v537 >> 13) - 123127970), 30));
                      v539 = v536 ^ (24670 * v537 - (v537 >> 13) - 123127970) ^ (133239679 - (v538 ^ 0xAB69605E));
                      v540 = v538 ^ (43881 * (v539 ^ 0x137F)) ^ __ROR4__(v539, 6);
                      v541 = v539 ^ (__ROR4__(v540, 30) + 24670 * __ROR4__(v540 + 133239679, 15));
                      v542 = v540 ^ (2033 * __ROR4__(v541 + 1419157410, 14) - __ROR4__(v541, 24));
                      v543 = v541 ^ __ROR4__(v542, 10) ^ (4991 * __ROR4__(v542 ^ 0xAB69605E, 12));
                      v544 = v542 ^ (v543 >> 10) ^ (43881 * (v543 ^ 0x7F1));
                      v545 = v543 ^ (2033 * (__ROR4__(~v544, 5) + 24670));
                      v546 = v545 ^ (((v544 ^ (v545 - 2033) ^ 0xAB69605E) >> 2)
                                   + 4991 * __ROR4__(v544 ^ (v545 - 2033) ^ 0xAB6967AF, 30));
                      v547 = v544 ^ (v545 - 2033) ^ 0xAB69605E ^ (__ROR4__(v546, 25)
                                                                + 43881 * __ROR4__(v546 - 133239679, 6));
                      v548 = v546 ^ (24670 * (v547 ^ 0x137F) + __ROR4__(v547, 9));
                      v549 = v547 ^ (__ROR4__(v548, 25) + 2033 * __ROR4__(v548 ^ 0xAB69, 27));
                      v550 = v548 ^ v549 ^ 0xAC987321;
                      v551 = v549 ^ (4991 * __ROR4__(v550, 3) - 219010071);
                      v552 = v550 ^ (24670 * __ROR4__(v551 - 133239679, 1) - __ROR4__(v551, 6));
                      v553 = v551 ^ (__ROR4__(v552, 18) + 2033 * __ROR4__(v552 - 1419157410, 29));
                      v554 = v552 ^ (4991 * __ROR4__(v553 - 1419157410, 17) - __ROR4__(v553, 14));
                      v555 = v553 ^ (v554 >> 3) ^ (43881 * (v554 ^ 0x605E));
                      v528 = v554 ^ v525 ^ __ROR4__(v555, 30) ^ (24670 * __ROR4__(v555 ^ 0x7F1137F, 28));
                      v527 = v555 ^ v526;
                      *(v529 - 4) = v528;
                      *v529 = v555 ^ v526;
                      *(v529 - 5) = __ROR4__(v528, 8);
                      *(v529 - 1) = __ROR4__(v555 ^ v526, 8);
                      *(v529 - 6) = __ROR4__(v528, 16);
                      *(v529 - 2) = __ROR4__(v555 ^ v526, 16);
                      *(v529 - 7) = __ROR4__(v528, 24);
                      *(v529 - 3) = __ROR4__(v555 ^ v526, 24);
                      v525 = v532;
                      v526 = v533;
                      v529 += 8;
                      --v531;
                    }
                    while ( v531 );
                    v556 = 0LL;
                    v557 = 0;
                    v469 = v1251;
                    v558 = (WCHAR *)lpModuleName;
                    v559 = 0;
                    do
                      v557 ^= *((_BYTE *)lpModuleName + v556++);
                    while ( v556 < 0x338 );
                    if ( v557 != 64LL )
                    {
                      MemoryFree((void *)lpModuleName);
                      goto LABEL_674;
                    }
                    *((_BYTE *)lpModuleName + 823) = 0;
                    memset_0(&unk_1808DA540, 0, 0x60uLL);
                    if ( *(_BYTE *)v558 )
                    {
                      v1300 = v558;
                      while ( 1 )
                      {
                        v562 = v558;
                        v563 = -1LL;
                        do
                          ++v563;
                        while ( v558[v563] );
                        v564 = &v558[v563];
                        lpModuleName = (LPCWSTR)(3LL * (unsigned int)v1264);
                        v565 = (HMODULE *)((char *)&unk_1808DA540 + 24 * (unsigned int)v1264);
                        if ( !GetModuleHandleExW(0, v562, v565) )
                          break;
                        v559 = 0;
                        if ( *(_WORD *)*v565 == 23117
                          && (v566 = *((int *)*v565 + 15), (unsigned int)v566 < 0x10000000)
                          && (v567 = (char *)*v565 + v566, v567 >= (char *)*v565)
                          && *(_DWORD *)v567 == 17744 )
                        {
                          if ( *((_WORD *)v567 + 12) == 267 || *((_WORD *)v567 + 12) == 523 )
                          {
                            v568 = lpModuleName;
                            *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)lpModuleName + 12) = *((_QWORD *)v567 + 17);
                            *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v568 + 2) = *((_DWORD *)v567 + 20);
                          }
                          else
                          {
                            v559 = -1073741811;
                          }
                        }
                        else
                        {
                          v559 = -1073741701;
                        }
                        LODWORD(v1273) = *(_DWORD *)(v564 + 1);
                        v558 = v564 + 3;
                        v569 = 0;
                        if ( (_DWORD)v1273 )
                        {
                          v570 = (unsigned int)v1264;
                          do
                          {
                            v571 = (const CHAR *)v558;
                            v572 = -1LL;
                            do
                              ++v572;
                            while ( *((_BYTE *)v558 + v572) );
                            v558 = (WCHAR *)((char *)v558 + v572 + 1);
                            if ( v559 >= 0 )
                            {
                              v573 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v570), v571);
                              if ( !v573 )
                                goto LABEL_704;
                              off_1808D1340[(unsigned int)v1262] = v573;
                              v570 = (unsigned int)v1264;
                            }
                            LODWORD(v1262) = (_DWORD)v1262 + 1;
                            ++v569;
                          }
                          while ( v569 < (unsigned int)v1273 );
                        }
                        LODWORD(v1264) = (_DWORD)v1264 + 1;
                        if ( !*(_BYTE *)v558 )
                          goto LABEL_704;
                      }
                      v559 = -1073741702;
LABEL_704:
                      v574 = v1300;
                      if ( !v1300 )
                        goto LABEL_708;
                    }
                    else
                    {
                      v574 = v558;
                    }
                    v575 = GetProcessHeap();
                    HeapFree(v575, 0, v574);
LABEL_708:
                    if ( v559 < 0 )
                    {
LABEL_674:
                      v560 = (HMODULE *)&unk_1808DA540;
                      v561 = 4LL;
                      do
                      {
                        if ( *v560 )
                          FreeLibrary(*v560);
                        v560 += 3;
                        --v561;
                      }
                      while ( v561 );
                      memset_0(&unk_1808DA540, 0, 0x60uLL);
                      memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
LABEL_711:
                      v125 = 0LL;
                      _InterlockedExchange(&dword_1808DDD40, 0);
                      memset_0(&v1353, 0, 0x70uLL);
                      v1315 = 0LL;
                      v576 = v469 & 0xF;
                      LODWORD(v1264) = v576;
                      LOWORD(Ptr) = (v469 >> 4) & 0xF;
                      WORD1(Ptr) = (v469 >> 8) & 0xF;
                      WORD2(Ptr) = (v469 >> 12) & 0xF;
                      lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(
                                                0LL,
                                                0LL,
                                                1027LL);
                      LODWORD(v1273) = 0xFFFFFF;
                      if ( !lpModuleName )
                      {
                        v577 = GetLastError();
                        v578 = v577;
                        if ( v577 > 0 )
                          v578 = (unsigned __int16)v577 | 0x80070000;
                        if ( v578 >= 0 )
                          v578 = -2147467259;
LABEL_829:
                        while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
                          ;
                        v672 = dword_1808DDD3C;
                        if ( dword_1808DDD3C > 0 )
                        {
                          --dword_1808DDD3C;
                          if ( v672 == 1 )
                          {
                            v673 = (HMODULE *)&unk_1808DA540;
                            v674 = 4LL;
                            do
                            {
                              if ( *v673 )
                                FreeLibrary(*v673);
                              v673 += 3;
                              --v674;
                            }
                            while ( v674 );
                            memset_0(&unk_1808DA540, 0, 0x60uLL);
                            memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                            v125 = 0LL;
                          }
                        }
                        _InterlockedExchange(&dword_1808DDD40, 0);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&Size);
                        if ( v578 < 0 )
                        {
LABEL_1054:
                          if ( v1355 )
                          {
                            v781 = -1LL;
                            do
                              ++v781;
                            while ( *((_WORD *)v1355 + v781) );
                            v782 = 2 * v781 + 2;
                            for ( m = v1355; v782; --v782 )
                              *m++ = 0;
                            MemoryFree(v1355);
                            v1355 = 0LL;
                          }
                          if ( v1356 )
                          {
                            v784 = -1LL;
                            do
                              ++v784;
                            while ( *((_WORD *)v1356 + v784) );
                            v785 = 2 * v784 + 2;
                            for ( n = v1356; v785; --v785 )
                              *n++ = 0;
                            MemoryFree(v1356);
                            v1356 = 0LL;
                          }
                          v787 = v1357;
                          if ( v1357 )
                          {
                            v788 = -1LL;
                            do
                              ++v788;
                            while ( *((_WORD *)v1357 + v788) );
                            v789 = 2 * v788 + 2;
                            if ( v789 )
                            {
                              do
                              {
                                *v787++ = 0;
                                --v789;
                              }
                              while ( v789 );
                              v787 = v1357;
                            }
                            MemoryFree(v787);
                            v1357 = 0LL;
                          }
                          if ( v1358 )
                          {
                            off_1808D1378();
                            v1358 = 0LL;
                          }
                          if ( v1359 )
                          {
                            off_1808D1378();
                            v1359 = 0LL;
                          }
                          if ( v1360 )
                          {
                            off_1808D1378();
                            v1360 = 0LL;
                          }
                          while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
                            ;
                          v790 = dword_1808DDD3C;
                          if ( dword_1808DDD3C > 0 )
                          {
                            --dword_1808DDD3C;
                            if ( v790 == 1 )
                            {
                              v791 = (HMODULE *)&unk_1808DA540;
                              v792 = 4LL;
                              do
                              {
                                if ( *v791 )
                                  FreeLibrary(*v791);
                                v791 += 3;
                                --v792;
                              }
                              while ( v792 );
                              memset_0(&unk_1808DA540, 0, 0x60uLL);
                              memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                            }
                          }
                          _InterlockedExchange(&dword_1808DDD40, 0);
                          LODWORD(Ptr) = dword_1808DA538;
                          v793 = qword_1808DDD48;
                          v794 = (void *)((unsigned int)off_1808D13D8[0]() - v793);
                          v1270[0] = v794;
                          v1410 = 0;
                          v1411 = 0LL;
                          v1412 = 0LL;
                          v1413 = 0LL;
                          v1414 = 0LL;
                          while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
                            ;
                          v846 = dword_1808DDD3C;
                          if ( !dword_1808DDD3C )
                          {
                            LODWORD(lpModuleName) = 0;
                            v1249[1] = 0;
                            LODWORD(v1258) = 0;
                            v847 = (const WCHAR *)MemoryAlloc(0x338uLL);
                            v1250 = v847;
                            if ( !v847 )
                              goto LABEL_1181;
                            v848 = 0;
                            v849 = -1;
                            v850 = 0;
                            v851 = 0;
                            v852 = (char *)v847 + 7;
                            v853 = (unsigned __int8 *)&unk_180783012;
                            v854 = 103LL;
                            do
                            {
                              v855 = v853[1] | ((*v853 | ((*(v853 - 1) | (*(v853 - 2) << 8)) << 8)) << 8);
                              v856 = v853[5] | ((v853[4] | ((v853[3] | (v853[2] << 8)) << 8)) << 8);
                              v853 += 8;
                              v857 = v855 ^ v851;
                              v858 = v857 ^ v856 ^ v850 ^ 0xAC987321;
                              v859 = v857 ^ (__ROR4__(v858, 22) + 4991 * __ROR4__(v858 + 1419157410, 27));
                              v860 = v858 ^ (43881 * __ROR4__(v859 + 133239679, 9) - __ROR4__(v859, 30));
                              v861 = v860 ^ (2033
                                           * __ROR4__(v859 ^ (24670 * v860 - (v860 >> 13) - 123127970) ^ 0xAB69, 26)
                                           - __ROR4__(v859 ^ (24670 * v860 - (v860 >> 13) - 123127970), 30));
                              v862 = v859 ^ (24670 * v860 - (v860 >> 13) - 123127970) ^ (133239679 - (v861 ^ 0xAB69605E));
                              v863 = v861 ^ (43881 * (v862 ^ 0x137F)) ^ __ROR4__(v862, 6);
                              v864 = v862 ^ (__ROR4__(v863, 30) + 24670 * __ROR4__(v863 + 133239679, 15));
                              v865 = v863 ^ (2033 * __ROR4__(v864 + 1419157410, 14) - __ROR4__(v864, 24));
                              v866 = v864 ^ __ROR4__(v865, 10) ^ (4991 * __ROR4__(v865 ^ 0xAB69605E, 12));
                              v867 = v865 ^ (v866 >> 10) ^ (43881 * (v866 ^ 0x7F1));
                              v868 = v866 ^ (2033 * (__ROR4__(~v867, 5) + 24670));
                              v869 = v868 ^ (((v867 ^ (v868 - 2033) ^ 0xAB69605E) >> 2)
                                           + 4991 * __ROR4__(v867 ^ (v868 - 2033) ^ 0xAB6967AF, 30));
                              v870 = v867 ^ (v868 - 2033) ^ 0xAB69605E ^ (__ROR4__(v869, 25)
                                                                        + 43881 * __ROR4__(v869 - 133239679, 6));
                              v871 = v869 ^ (24670 * (v870 ^ 0x137F) + __ROR4__(v870, 9));
                              v872 = v870 ^ (__ROR4__(v871, 25) + 2033 * __ROR4__(v871 ^ 0xAB69, 27));
                              v873 = v871 ^ v872 ^ 0xAC987321;
                              v874 = v872 ^ (4991 * __ROR4__(v873, 3) - 219010071);
                              v875 = v873 ^ (24670 * __ROR4__(v874 - 133239679, 1) - __ROR4__(v874, 6));
                              v876 = v874 ^ (__ROR4__(v875, 18) + 2033 * __ROR4__(v875 - 1419157410, 29));
                              v877 = v875 ^ (4991 * __ROR4__(v876 - 1419157410, 17) - __ROR4__(v876, 14));
                              v878 = v876 ^ (v877 >> 3) ^ (43881 * (v877 ^ 0x605E));
                              v851 = v877 ^ v848 ^ __ROR4__(v878, 30) ^ (24670 * __ROR4__(v878 ^ 0x7F1137F, 28));
                              v850 = v878 ^ v849;
                              *(v852 - 4) = v851;
                              *v852 = v878 ^ v849;
                              *(v852 - 5) = __ROR4__(v851, 8);
                              *(v852 - 1) = __ROR4__(v878 ^ v849, 8);
                              *(v852 - 6) = __ROR4__(v851, 16);
                              *(v852 - 2) = __ROR4__(v878 ^ v849, 16);
                              *(v852 - 7) = __ROR4__(v851, 24);
                              *(v852 - 3) = __ROR4__(v878 ^ v849, 24);
                              v848 = v855;
                              v849 = v856;
                              v852 += 8;
                              --v854;
                            }
                            while ( v854 );
                            v879 = 0LL;
                            v880 = 0;
                            v881 = v1250;
                            v882 = v1249[1];
                            do
                              v880 ^= *((_BYTE *)v1250 + v879++);
                            while ( v879 < 0x338 );
                            if ( v880 != 64LL )
                            {
                              MemoryFree((void *)v1250);
LABEL_1180:
                              LODWORD(v794) = v1270[0];
LABEL_1181:
                              v883 = (HMODULE *)&unk_1808DA540;
                              v884 = 4LL;
                              v125 = 0LL;
                              do
                              {
                                if ( *v883 )
                                  FreeLibrary(*v883);
                                v883 += 3;
                                --v884;
                              }
                              while ( v884 );
                              memset_0(&unk_1808DA540, 0, 0x60uLL);
                              memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                              goto LABEL_1215;
                            }
                            *((_BYTE *)v1250 + 823) = 0;
                            memset_0(&unk_1808DA540, 0, 0x60uLL);
                            v885 = (WCHAR *)v881;
                            if ( !*(_BYTE *)v881 )
                              goto LABEL_1211;
                            while ( 1 )
                            {
                              v886 = v881;
                              v887 = -1LL;
                              do
                                ++v887;
                              while ( v881[v887] );
                              v888 = &v881[v887];
                              v1250 = (LPCWSTR)(3LL * (unsigned int)v1258);
                              v889 = (HMODULE *)((char *)&unk_1808DA540 + 24 * (unsigned int)v1258);
                              if ( !GetModuleHandleExW(0, v886, v889) )
                                break;
                              v882 = 0;
                              if ( *(_WORD *)*v889 == 23117
                                && (v890 = *((int *)*v889 + 15), (unsigned int)v890 < 0x10000000)
                                && (v891 = (char *)*v889 + v890, v891 >= (char *)*v889)
                                && *(_DWORD *)v891 == 17744 )
                              {
                                if ( *((_WORD *)v891 + 12) == 267 || *((_WORD *)v891 + 12) == 523 )
                                {
                                  v892 = v1250;
                                  *(_QWORD *)((char *)&unk_1808DA540 + 8 * (_QWORD)v1250 + 12) = *((_QWORD *)v891 + 17);
                                  *((_DWORD *)&unk_1808DA540 + 2 * (_QWORD)v892 + 2) = *((_DWORD *)v891 + 20);
                                }
                                else
                                {
                                  v882 = -1073741811;
                                }
                              }
                              else
                              {
                                v882 = -1073741701;
                              }
                              v1249[1] = *(_DWORD *)(v888 + 1);
                              v881 = v888 + 3;
                              v893 = 0;
                              if ( v1249[1] )
                              {
                                v894 = (unsigned int)v1258;
                                do
                                {
                                  v895 = (const CHAR *)v881;
                                  v896 = -1LL;
                                  do
                                    ++v896;
                                  while ( *((_BYTE *)v881 + v896) );
                                  v881 = (LPCWSTR)((char *)v881 + v896 + 1);
                                  if ( v882 >= 0 )
                                  {
                                    v897 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v894), v895);
                                    if ( !v897 )
                                      goto LABEL_1210;
                                    off_1808D1340[(unsigned int)lpModuleName] = v897;
                                    v894 = (unsigned int)v1258;
                                  }
                                  LODWORD(lpModuleName) = (_DWORD)lpModuleName + 1;
                                  ++v893;
                                }
                                while ( v893 < v1249[1] );
                              }
                              LODWORD(v1258) = v1258 + 1;
                              if ( !*(_BYTE *)v881 )
                                goto LABEL_1210;
                            }
                            v882 = -1073741702;
LABEL_1210:
                            if ( v885 )
                            {
LABEL_1211:
                              v898 = GetProcessHeap();
                              HeapFree(v898, 0, v885);
                            }
                            if ( v882 < 0 )
                              goto LABEL_1180;
                            v846 = dword_1808DDD3C;
                            LODWORD(v794) = v1270[0];
                            v125 = 0LL;
                          }
                          dword_1808DDD3C = v846 + 1;
LABEL_1215:
                          _InterlockedExchange(&dword_1808DDD40, 0);
                          LODWORD(v1411) = (_DWORD)v794;
                          v1410 = 1;
                          LODWORD(v1412) = -1721306479;
                          DWORD2(v1411) = 1;
                          LODWORD(v1413) = 1;
                          DWORD2(v1412) = 1;
                          LODWORD(v1414) = (_DWORD)Ptr;
                          DWORD2(v1413) = 1;
                          v899 = 4LL;
                          ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1808D1410)(
                            0LL,
                            8225LL,
                            4LL,
                            &v1410);
                          while ( _InterlockedCompareExchange(&dword_1808DDD40, 1, 0) )
                            ;
                          v900 = dword_1808DDD3C;
                          if ( dword_1808DDD3C > 0 )
                          {
                            --dword_1808DDD3C;
                            if ( v900 == 1 )
                            {
                              v901 = (HMODULE *)&unk_1808DA540;
                              do
                              {
                                if ( *v901 )
                                  FreeLibrary(*v901);
                                v901 += 3;
                                --v899;
                              }
                              while ( v899 );
                              memset_0(&unk_1808DA540, 0, 0x60uLL);
                              memcpy_0(off_1808D1340, off_18075EFE0, 0x170uLL);
                            }
                          }
                          _InterlockedExchange(&dword_1808DDD40, 0);
                          ((void (__fastcall *)(_QWORD, size_t))off_1808D14A0[0])(0LL, v1254);
                          goto LABEL_1225;
                        }
                        v675 = v469 & 0xF;
                        LODWORD(v1251) = v675;
                        v676 = v1315;
                        v1250 = (LPCWSTR)v1315;
                        v1325 = 0;
                        memset_0(v1326, 0, 0x64uLL);
                        v677 = 1;
                        v678 = (CToastCenterExperienceManager *)v1254;
                        v679 = ((__int64 (__fastcall *)(size_t, __int64))off_1808D1390[0])(v1254, 7LL);
                        if ( v679
                          && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(
                               v679,
                               104LL,
                               &v1325) )
                        {
                          if ( v1327 != 32 || !v1328 || v1326[0] <= 0 || v1326[1] <= 0 )
                            v677 = 0;
                          if ( v677 )
                          {
LABEL_934:
                            ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(
                              &v1362,
                              v676,
                              HIDWORD(v1250));
                            ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808D1490)(
                              &v1363,
                              v676,
                              HIDWORD(v1250));
                            if ( v675 == 1 )
                              Src = (void *)((__int64 (__fastcall *)(_QWORD))off_1808D1368[0])(v1354 == 0 ? 0xB26720 : 0);
LABEL_936:
                            LODWORD(pcchLength) = off_1808D13C0(v678, (struct CSingleViewShellExperience *)1);
                            v710 = 2064;
                            if ( v1353 )
                              v710 = 133138;
                            LODWORD(v1264) = v710;
                            if ( v677 )
                            {
                              LODWORD(v1262) = v1354;
                              v1250 = v1358;
                              v711 = v1355;
                              Size = (SIZE_T)v1355;
                              v125 = 0LL;
                              v1329 = 0;
                              memset_0(v1330, 0, 0x64uLL);
                              v1332 = 0;
                              memset_0(v1333, 0, 0x64uLL);
                              v1263 = 0LL;
                              LODWORD(v1268) = 0;
                              v1249[0] = 0;
                              memset(v1393, 0, sizeof(v1393));
                              v1394 = 0LL;
                              v1395 = 0;
                              v1368 = 0LL;
                              if ( !v711 )
                                goto LABEL_1052;
                              v712 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808D1390[0])(
                                       v678,
                                       7LL);
                              if ( !v712 )
                                goto LABEL_1021;
                              if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(
                                     v712,
                                     104LL,
                                     &v1329) )
                              {
                                v1263 = v1331;
                                LODWORD(v1268) = v1330[0];
                                v1249[0] = v1330[1];
                              }
                              v713 = (unsigned __int16 *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808D1350[0])(v678);
                              v714 = v713;
                              v1260 = v713;
                              if ( !v713 )
                                goto LABEL_1021;
                              v1304 = 0LL;
                              LODWORD(v1393[0]) = 40;
                              DWORD1(v1393[0]) = v1362.m128i_i32[2] - v1362.m128i_i32[0];
                              DWORD2(v1393[0]) = v1362.m128i_i32[1] - v1362.m128i_i32[3];
                              HIDWORD(v1393[0]) = 2097153;
                              v715 = (unsigned __int16 *)((__int64 (__fastcall *)(unsigned __int16 *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                                           v713,
                                                           v1393,
                                                           0LL,
                                                           &v1304,
                                                           0LL,
                                                           0);
                              v716 = v715;
                              v1265 = v715;
                              if ( v715 )
                              {
                                v719 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808D13A8[0])(
                                         v715,
                                         104LL,
                                         &v1332);
                                v720 = 0LL;
                                if ( v719 )
                                  v720 = v1334;
                                Ptr = v720;
                                DWORD2(v1368) = v1362.m128i_i32[2] - v1362.m128i_i32[0];
                                HIDWORD(v1368) = v1362.m128i_i32[3] - v1362.m128i_i32[1];
                                ((void (__fastcall *)(unsigned __int16 *, unsigned __int16 *))off_1808D13B8)(v714, v716);
                                off_1808D13C0(
                                  (CToastCenterExperienceManager *)v714,
                                  (struct CSingleViewShellExperience *)1);
                                v1250 = (LPCWSTR)((__int64 (__fastcall *)(unsigned __int16 *, LPCWSTR))off_1808D13B8)(
                                                   v714,
                                                   v1250);
                                v721 = off_1808D1428[0];
                                v722 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                                ((void (__fastcall *)(unsigned __int16 *, __int128 *, __int64))v721)(v714, &v1368, v722);
                                v723 = 0;
                                ((void (__fastcall *)(unsigned __int16 *, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                                  v714,
                                  Size,
                                  0xFFFFFFFFLL,
                                  &v1368,
                                  (_DWORD)v1264,
                                  0LL);
                                if ( v675 == 1 )
                                {
                                  if ( (_DWORD)v1262 )
                                    LODWORD(v1262) = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                                  else
                                    LODWORD(v1262) = 0xFFFFFF;
                                }
                                else
                                {
                                  LODWORD(v1262) = -5723992;
                                }
                                v724 = -v1362.m128i_i32[0];
                                if ( v1362.m128i_i32[0] >= 0 )
                                  v724 = 0;
                                v725 = 0;
                                if ( v1362.m128i_i32[0] >= 0 )
                                  v725 = v1362.m128i_i32[0];
                                LODWORD(dwBytes) = v725;
                                v726 = -v1362.m128i_i32[1];
                                if ( v1362.m128i_i32[1] >= 0 )
                                {
                                  v726 = 0;
                                  v723 = v1362.m128i_i32[1];
                                }
                                LODWORD(v1274) = v723;
                                v727 = (const WCHAR *)(int)v1268;
                                v728 = DWORD2(v1368) - v724;
                                if ( DWORD2(v1368) - v724 >= (int)v1268 - v725 )
                                  v728 = (_DWORD)v1268 - v725;
                                LODWORD(v1268) = v728;
                                v729 = HIDWORD(v1368) - v726;
                                if ( HIDWORD(v1368) - v726 >= v1249[0] - v723 )
                                  v729 = v1249[0] - v723;
                                v717 = 0;
                                if ( v728 > 0 && v729 > 0 )
                                {
                                  Size = 4LL * SDWORD2(v1368);
                                  lpModuleName = v727;
                                  *(_QWORD *)&v1249[1] = (unsigned int)v729;
                                  v730 = (unsigned __int8 *)Ptr + 4 * v724 + 4 * (__int64)(v726 * DWORD2(v1368));
                                  Ptr = v730;
                                  v731 = (char *)v1263 + 4 * (int)dwBytes + 4 * (__int64)((int)v1274 * (int)v727);
                                  v1263 = v731;
                                  v732 = 0;
                                  v1249[0] = 0;
                                  v733 = (unsigned int)v1268;
                                  v734 = (char)v1262;
                                  do
                                  {
                                    v735 = v730 + 2;
                                    v736 = v731 - (char *)v730;
                                    v737 = v733;
                                    v1258 = v733;
                                    do
                                    {
                                      if ( (unsigned __int8)((*v735 + *(v735 - 2) + 2 * (unsigned int)*(v735 - 1)) >> 2) != 0xFF )
                                      {
                                        v738 = (unsigned __int8)~((*v735 + *(v735 - 2) + 2 * (unsigned int)*(v735 - 1)) >> 2);
                                        v735[v736] -= ~((*v735 + *(v735 - 2) + 2 * (unsigned int)*(v735 - 1)) >> 2)
                                                    * (v734 - v735[v736]);
                                        v735[v736 - 1] += ((((unsigned __int64)(2155905153LL
                                                                              * v738
                                                                              * (BYTE1(v1262) - v735[v736 - 1])) >> 32) & 0x80000000) != 0LL)
                                                        + ((int)((unsigned __int64)(2155905153LL
                                                                                  * v738
                                                                                  * (BYTE1(v1262) - v735[v736 - 1])) >> 32) >> 7);
                                        v735[v736 - 2] += ((((unsigned __int64)(2155905153LL
                                                                              * v738
                                                                              * (BYTE2(v1262) - v735[v736 - 2])) >> 32) & 0x80000000) != 0LL)
                                                        + ((int)((unsigned __int64)(2155905153LL
                                                                                  * v738
                                                                                  * (BYTE2(v1262) - v735[v736 - 2])) >> 32) >> 7);
                                        v735[v736 + 1] += ((((unsigned __int64)(2155905153LL
                                                                              * v738
                                                                              * (255 - v735[v736 + 1])) >> 32) & 0x80000000) != 0LL)
                                                        + ((int)((unsigned __int64)(2155905153LL
                                                                                  * v738
                                                                                  * (255 - v735[v736 + 1])) >> 32) >> 7);
                                        v737 = v1258;
                                        v732 = v1249[0];
                                      }
                                      v717 = v732;
                                      v735 += 4;
                                      v1258 = --v737;
                                    }
                                    while ( v737 );
                                    v730 = (unsigned __int8 *)Ptr + Size;
                                    Ptr = (char *)Ptr + Size;
                                    v731 = (char *)v1263 + 4 * (_QWORD)lpModuleName;
                                    v1263 = v731;
                                    v739 = (*(_QWORD *)&v1249[1])-- == 1LL;
                                    v1249[0] = v732;
                                  }
                                  while ( !v739 );
                                  v675 = v1251;
                                  v100 = v1276;
                                  v714 = v1260;
                                }
                                ((void (__fastcall *)(unsigned __int16 *))off_1808D1378)(v1265);
                                if ( v1250 )
                                  ((void (__fastcall *)(unsigned __int16 *, LPCWSTR))off_1808D13B8)(v714, v1250);
                              }
                              else
                              {
                                v717 = GetLastError();
                                v718 = v717 < 0;
                                if ( v717 > 0 )
                                {
                                  v717 = (unsigned __int16)v717 | 0x80070000;
                                  v718 = v717 < 0;
                                }
                                if ( !v718 )
                                  v717 = -2147467259;
                              }
                              ((void (__fastcall *)(unsigned __int16 *))off_1808D1370[0])(v714);
                              if ( v717 < 0 )
                                goto LABEL_1051;
                              LODWORD(v1262) = v1354;
                              v1250 = v1359;
                              v740 = v1356;
                              Size = (SIZE_T)v1356;
                              v1335 = 0;
                              memset_0(v1336, 0, 0x64uLL);
                              v1338 = 0;
                              memset_0(v1339, 0, 0x64uLL);
                              v1263 = 0LL;
                              LODWORD(v1268) = 0;
                              LODWORD(v1251) = 0;
                              memset(v1383, 0, sizeof(v1383));
                              v1384 = 0LL;
                              v1385 = 0;
                              v1369 = 0LL;
                              if ( !v740 )
                                goto LABEL_1051;
                              v741 = v1254;
                              v742 = ((__int64 (__fastcall *)(size_t, __int64))off_1808D1390[0])(v1254, 7LL);
                              if ( !v742 )
                                goto LABEL_1021;
                              if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(
                                     v742,
                                     104LL,
                                     &v1335) )
                              {
                                v1263 = v1337;
                                LODWORD(v1268) = v1336[0];
                                LODWORD(v1251) = v1336[1];
                              }
                              v743 = (unsigned __int16 *)((__int64 (__fastcall *)(size_t))off_1808D1350[0])(v741);
                              v744 = v743;
                              v1260 = v743;
                              if ( !v743 )
                              {
LABEL_1021:
                                GetLastError();
                                goto LABEL_1051;
                              }
                              v1305 = 0LL;
                              LODWORD(v1383[0]) = 40;
                              DWORD1(v1383[0]) = v1363.m128i_i32[2] - v1363.m128i_i32[0];
                              DWORD2(v1383[0]) = v1363.m128i_i32[1] - v1363.m128i_i32[3];
                              HIDWORD(v1383[0]) = 2097153;
                              v745 = (unsigned __int16 *)((__int64 (__fastcall *)(unsigned __int16 *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                                           v743,
                                                           v1383,
                                                           0LL,
                                                           &v1305,
                                                           0LL,
                                                           0);
                              v746 = v745;
                              v1265 = v745;
                              if ( !v745 )
                              {
                                v747 = GetLastError();
                                v748 = v747 < 0;
                                if ( v747 > 0 )
                                {
                                  v747 = (unsigned __int16)v747 | 0x80070000;
                                  v748 = v747 < 0;
                                }
                                if ( !v748 )
                                  v747 = -2147467259;
LABEL_1019:
                                ((void (__fastcall *)(unsigned __int16 *))off_1808D1370[0])(v744);
                                if ( v747 < 0 )
                                  goto LABEL_1051;
                                v769 = 0LL;
LABEL_1169:
                                off_1808D13C0(
                                  (CToastCenterExperienceManager *)v1254,
                                  (struct CSingleViewShellExperience *)(unsigned int)pcchLength);
                                v780 = v1271;
                                if ( !v1271 )
                                {
LABEL_1049:
                                  if ( v769 )
                                    goto LABEL_1050;
LABEL_1051:
                                  v125 = 0LL;
LABEL_1052:
                                  if ( Src )
                                    ((void (__fastcall *)(void *))off_1808D1378)(Src);
                                  goto LABEL_1054;
                                }
LABEL_1048:
                                ((void (__fastcall *)(void *))off_1808D1378)(v780);
                                goto LABEL_1049;
                              }
                              v749 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808D13A8[0])(
                                       v745,
                                       104LL,
                                       &v1338);
                              v750 = 0LL;
                              if ( v749 )
                                v750 = v1340;
                              Ptr = v750;
                              DWORD2(v1369) = v1363.m128i_i32[2] - v1363.m128i_i32[0];
                              HIDWORD(v1369) = v1363.m128i_i32[3] - v1363.m128i_i32[1];
                              ((void (__fastcall *)(unsigned __int16 *, unsigned __int16 *))off_1808D13B8)(v744, v746);
                              off_1808D13C0(
                                (CToastCenterExperienceManager *)v744,
                                (struct CSingleViewShellExperience *)1);
                              v1250 = (LPCWSTR)((__int64 (__fastcall *)(unsigned __int16 *, LPCWSTR))off_1808D13B8)(
                                                 v744,
                                                 v1250);
                              v751 = off_1808D1428[0];
                              v752 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                              ((void (__fastcall *)(unsigned __int16 *, __int128 *, __int64))v751)(v744, &v1369, v752);
                              v753 = 0;
                              ((void (__fastcall *)(unsigned __int16 *, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                                v744,
                                Size,
                                0xFFFFFFFFLL,
                                &v1369,
                                (_DWORD)v1264,
                                0LL);
                              if ( v675 == 1 )
                              {
                                if ( !(_DWORD)v1262 )
                                {
                                  LODWORD(v1264) = 0xFFFFFF;
LABEL_998:
                                  v755 = -v1363.m128i_i32[0];
                                  if ( v1363.m128i_i32[0] >= 0 )
                                    v755 = 0;
                                  v756 = 0;
                                  if ( v1363.m128i_i32[0] >= 0 )
                                    v756 = v1363.m128i_i32[0];
                                  v757 = -v1363.m128i_i32[1];
                                  if ( v1363.m128i_i32[1] >= 0 )
                                  {
                                    v757 = 0;
                                    v753 = v1363.m128i_i32[1];
                                  }
                                  LODWORD(v1262) = v753;
                                  v758 = (const WCHAR *)(int)v1268;
                                  v759 = DWORD2(v1369) - v755;
                                  if ( DWORD2(v1369) - v755 >= (int)v1268 - v756 )
                                    v759 = (_DWORD)v1268 - v756;
                                  LODWORD(v1268) = v759;
                                  v760 = HIDWORD(v1369) - v757;
                                  if ( HIDWORD(v1369) - v757 >= (int)v1251 - v753 )
                                    v760 = v1251 - v753;
                                  v747 = 0;
                                  if ( v759 > 0 && v760 > 0 )
                                  {
                                    Size = 4LL * SDWORD2(v1369);
                                    lpModuleName = v758;
                                    *(_QWORD *)&v1249[1] = (unsigned int)v760;
                                    v761 = (unsigned __int8 *)Ptr + 4 * v755 + 4 * (__int64)(v757 * DWORD2(v1369));
                                    Ptr = v761;
                                    v762 = (char *)v1263 + 4 * v756 + 4 * (__int64)((int)v1262 * (int)v758);
                                    v1263 = v762;
                                    v763 = 0;
                                    LODWORD(v1262) = 0;
                                    do
                                    {
                                      v764 = v761 + 2;
                                      v765 = v762 - (char *)v761;
                                      v766 = (unsigned int)v759;
                                      v1258 = (unsigned int)v759;
                                      v767 = v1273;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v764 + *(v764 - 2) + 2 * (unsigned int)*(v764 - 1)) >> 2) != 0xFF )
                                        {
                                          v768 = (unsigned __int8)~((*v764 + *(v764 - 2) + 2 * (unsigned int)*(v764 - 1)) >> 2);
                                          v764[v765] -= ~((*v764 + *(v764 - 2) + 2 * (unsigned int)*(v764 - 1)) >> 2)
                                                      * (v767 - v764[v765]);
                                          v764[v765 - 1] += ((((unsigned __int64)(2155905153LL
                                                                                * v768
                                                                                * (BYTE1(v1264) - v764[v765 - 1])) >> 32) & 0x80000000) != 0LL)
                                                          + ((int)((unsigned __int64)(2155905153LL
                                                                                    * v768
                                                                                    * (BYTE1(v1264) - v764[v765 - 1])) >> 32) >> 7);
                                          v764[v765 - 2] += ((((unsigned __int64)(2155905153LL
                                                                                * v768
                                                                                * (BYTE2(v1264) - v764[v765 - 2])) >> 32) & 0x80000000) != 0LL)
                                                          + ((int)((unsigned __int64)(2155905153LL
                                                                                    * v768
                                                                                    * (BYTE2(v1264) - v764[v765 - 2])) >> 32) >> 7);
                                          v764[v765 + 1] += ((((unsigned __int64)(2155905153LL
                                                                                * v768
                                                                                * (255 - v764[v765 + 1])) >> 32) & 0x80000000) != 0LL)
                                                          + ((int)((unsigned __int64)(2155905153LL
                                                                                    * v768
                                                                                    * (255 - v764[v765 + 1])) >> 32) >> 7);
                                          v766 = v1258;
                                          v763 = (int)v1262;
                                        }
                                        v747 = v763;
                                        v764 += 4;
                                        v1258 = --v766;
                                      }
                                      while ( v766 );
                                      v761 = (unsigned __int8 *)Ptr + Size;
                                      Ptr = (char *)Ptr + Size;
                                      v762 = (char *)v1263 + 4 * (_QWORD)lpModuleName;
                                      v1263 = v762;
                                      v739 = (*(_QWORD *)&v1249[1])-- == 1LL;
                                      LODWORD(v1262) = v763;
                                      v759 = (int)v1268;
                                    }
                                    while ( !v739 );
                                    v744 = v1260;
                                  }
                                  ((void (__fastcall *)(unsigned __int16 *))off_1808D1378)(v1265);
                                  if ( v1250 )
                                    ((void (__fastcall *)(unsigned __int16 *, LPCWSTR))off_1808D13B8)(v744, v1250);
                                  goto LABEL_1019;
                                }
                                v754 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                              }
                              else
                              {
                                v754 = -5723992;
                              }
                              LODWORD(v1264) = v754;
                              LODWORD(v1273) = v754;
                              goto LABEL_998;
                            }
                            v125 = 0LL;
                            if ( v1354 || (v770 = -64, v675 == 1) )
                              v770 = -1;
                            LOWORD(v1262) = 0;
                            BYTE2(v1262) = v770;
                            BYTE3(v1262) = 1;
                            v771 = 0;
                            LODWORD(v1268) = 0;
                            v1249[0] = 0;
                            v769 = (void *)((__int64 (__fastcall *)(size_t))off_1808D1350[0])(v1254);
                            v1259 = v769;
                            if ( !v769 )
                            {
                              GetLastError();
                              goto LABEL_1052;
                            }
                            if ( v675 == 1 )
                            {
                              v772 = v1363.m128i_i32[2] - v1363.m128i_i32[0];
                              if ( v1363.m128i_i32[2] - v1363.m128i_i32[0] <= v1362.m128i_i32[2] - v1362.m128i_i32[0] )
                                v772 = v1362.m128i_i32[2] - v1362.m128i_i32[0];
                              LODWORD(dwBytes) = v772;
                              v773 = v1363.m128i_i32[3] - v1362.m128i_i32[1];
                              LODWORD(v1274) = v1363.m128i_i32[3] - v1362.m128i_i32[1];
                              LODWORD(v1269) = 0;
                              if ( v1353 )
                              {
                                v771 = v1362.m128i_i32[0] - v1362.m128i_i32[2] + v772;
                                v1249[0] = v1363.m128i_i32[0] - v1363.m128i_i32[2] + v772;
                                LODWORD(v125) = v771;
                                LODWORD(v1269) = v1249[0];
                              }
                              LODWORD(v1277) = v1362.m128i_i32[2] - v1362.m128i_i32[0] + (_DWORD)v125;
                              v1275 = v1362.m128i_i32[3] - v1362.m128i_i32[1];
                              LODWORD(v1269) = v1363.m128i_i32[2] - v1363.m128i_i32[0] + v1269;
                              LODWORD(v1267) = v1363.m128i_i32[1] - v1362.m128i_i32[1];
                              LODWORD(v1258) = v1363.m128i_i32[3] - v1362.m128i_i32[1];
                              v774 = v1362.m128i_i32[3] - v1362.m128i_i32[1];
                              v769 = v1259;
                            }
                            else
                            {
                              v772 = DWORD2(v1315);
                              LODWORD(dwBytes) = DWORD2(v1315);
                              v773 = HIDWORD(v1315);
                              LODWORD(v1274) = HIDWORD(v1315);
                              v774 = _mm_cvtsi128_si32(_mm_srli_si128(v1362, 12));
                              v1275 = v774;
                              LODWORD(v1277) = _mm_cvtsi128_si32(_mm_srli_si128(v1362, 8));
                              LODWORD(v1268) = _mm_cvtsi128_si32(_mm_srli_si128(v1362, 4));
                              v771 = _mm_cvtsi128_si32(v1362);
                              LODWORD(v1258) = _mm_cvtsi128_si32(_mm_srli_si128(v1363, 12));
                              v2 = _mm_srli_si128(v1363, 8);
                              LODWORD(v1269) = _mm_cvtsi128_si32(v2);
                              LODWORD(v1267) = _mm_cvtsi128_si32(_mm_srli_si128(v1363, 4));
                              v1249[0] = _mm_cvtsi128_si32(v1363);
                            }
                            v1306 = 0LL;
                            memset(&v1392[4], 0, 28);
                            v1392[0] = 40;
                            v1392[1] = v772;
                            v1392[2] = -v773;
                            v1392[3] = 2097153;
                            v775 = (void *)((__int64 (__fastcall *)(void *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                             v769,
                                             v1392,
                                             0LL,
                                             &v1306,
                                             0LL,
                                             0);
                            v1271 = v775;
                            if ( !v775 )
                            {
                              GetLastError();
LABEL_1050:
                              ((void (__fastcall *)(void *))off_1808D1370[0])(v769);
                              goto LABEL_1051;
                            }
                            ((void (__fastcall *)(void *, void *))off_1808D13B8)(v769, v775);
                            if ( v675 == 1 && Src )
                            {
                              v1370 = 0LL;
                              v1371 = dwBytes;
                              v1372 = v1274;
                              ((void (__fastcall *)(void *, __int64 *))off_1808D1428[0])(v769, &v1370);
                            }
                            v1249[1] = v1354;
                            v1250 = v1358;
                            v776 = v1355;
                            Size = (SIZE_T)v1355;
                            v1341 = 0;
                            memset_0(v1342, 0, 0x64uLL);
                            v1344 = 0;
                            memset_0(v1345, 0, 0x64uLL);
                            v1263 = 0LL;
                            LODWORD(lpModuleName) = 0;
                            LODWORD(Ptr) = 0;
                            memset(v1386, 0, sizeof(v1386));
                            v1387 = 0LL;
                            v1388 = 0;
                            v1373 = 0LL;
                            v739 = v776 == 0LL;
                            v769 = v1259;
                            if ( v739 )
                            {
LABEL_1047:
                              v780 = v1271;
                              goto LABEL_1048;
                            }
                            v777 = ((__int64 (__fastcall *)(void *, __int64))off_1808D1390[0])(v1259, 7LL);
                            if ( !v777 )
                            {
LABEL_1041:
                              GetLastError();
                              goto LABEL_1047;
                            }
                            if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(
                                   v777,
                                   104LL,
                                   &v1341) )
                            {
                              v1263 = v1343;
                              LODWORD(lpModuleName) = v1342[0];
                              LODWORD(Ptr) = v1342[1];
                            }
                            v778 = (unsigned __int16 *)((__int64 (__fastcall *)(void *))off_1808D1350[0])(v769);
                            v779 = (CToastCenterExperienceManager *)v778;
                            v1260 = v778;
                            if ( !v778 )
                            {
                              GetLastError();
LABEL_1046:
                              v769 = v1259;
                              goto LABEL_1047;
                            }
                            v1307 = 0LL;
                            LODWORD(v1386[0]) = 40;
                            DWORD1(v1386[0]) = v1277 - v771;
                            DWORD2(v1386[0]) = (_DWORD)v1268 - v774;
                            HIDWORD(v1386[0]) = 2097153;
                            v795 = (unsigned __int16 *)((__int64 (__fastcall *)(unsigned __int16 *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                                         v778,
                                                         v1386,
                                                         0LL,
                                                         &v1307,
                                                         0LL,
                                                         0);
                            v1265 = v795;
                            if ( v795 )
                            {
                              v798 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808D13A8[0])(
                                       v795,
                                       104LL,
                                       &v1344);
                              v799 = 0LL;
                              if ( v798 )
                                v799 = v1346;
                              v1270[0] = v799;
                              DWORD2(v1373) = v1277 - v771;
                              HIDWORD(v1373) = v1275 - (_DWORD)v1268;
                              ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808D13B8)(
                                v779,
                                v1265);
                              off_1808D13C0(v779, (struct CSingleViewShellExperience *)1);
                              v1250 = (LPCWSTR)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808D13B8)(
                                                 v779,
                                                 v1250);
                              v800 = off_1808D1428[0];
                              v801 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                              ((void (__fastcall *)(unsigned __int16 *, __int128 *, __int64))v800)(v1260, &v1373, v801);
                              v797 = 0;
                              ((void (__fastcall *)(unsigned __int16 *, SIZE_T, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                                v1260,
                                Size,
                                0xFFFFFFFFLL,
                                &v1373,
                                (_DWORD)v1264,
                                0LL);
                              if ( v675 == 1 )
                              {
                                if ( v1249[1] )
                                  v1249[1] = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                                else
                                  v1249[1] = 0xFFFFFF;
                              }
                              else
                              {
                                v1249[1] = -5723992;
                              }
                              v802 = -v771;
                              if ( v771 >= 0 )
                                v802 = 0;
                              v803 = 0;
                              if ( v771 >= 0 )
                                v803 = v771;
                              v804 = -(int)v1268;
                              if ( (int)v1268 >= 0 )
                                v804 = 0;
                              v805 = 0;
                              if ( (int)v1268 >= 0 )
                                v805 = (int)v1268;
                              v806 = DWORD2(v1373) - v802;
                              if ( DWORD2(v1373) - v802 >= (int)lpModuleName - v803 )
                                v806 = (_DWORD)lpModuleName - v803;
                              v807 = (unsigned int)(HIDWORD(v1373) - v804);
                              if ( (int)v807 >= (int)Ptr - v805 )
                                v807 = (unsigned int)((_DWORD)Ptr - v805);
                              if ( v806 > 0 && (int)v807 > 0 )
                              {
                                Size = 4LL * SDWORD2(v1373);
                                lpModuleName = (LPCWSTR)(int)lpModuleName;
                                v1268 = (LPVOID)v807;
                                v808 = (unsigned __int8 *)v1270[0] + 4 * v802 + 4 * (__int64)(v804 * DWORD2(v1373));
                                v1270[0] = v808;
                                v809 = (char *)v1263 + 4 * v803 + 4 * (__int64)((int)lpModuleName * v805);
                                v1263 = v809;
                                LODWORD(Ptr) = 0;
                                v810 = v1249[1];
                                do
                                {
                                  v811 = v808 + 2;
                                  v812 = v809 - (char *)v808;
                                  v813 = (unsigned int)v806;
                                  v1277 = (unsigned int)v806;
                                  v814 = (int)Ptr;
                                  do
                                  {
                                    if ( (unsigned __int8)((*v811 + *(v811 - 2) + 2 * (unsigned int)*(v811 - 1)) >> 2) != 0xFF )
                                    {
                                      v815 = (unsigned __int8)~((*v811 + *(v811 - 2) + 2 * (unsigned int)*(v811 - 1)) >> 2);
                                      v811[v812] -= ~((*v811 + *(v811 - 2) + 2 * (unsigned int)*(v811 - 1)) >> 2)
                                                  * (v810 - v811[v812]);
                                      v811[v812 - 1] += ((((unsigned __int64)(2155905153LL
                                                                            * v815
                                                                            * (BYTE1(v1249[1]) - v811[v812 - 1])) >> 32) & 0x80000000) != 0LL)
                                                      + ((int)((unsigned __int64)(2155905153LL
                                                                                * v815
                                                                                * (BYTE1(v1249[1]) - v811[v812 - 1])) >> 32) >> 7);
                                      v811[v812 - 2] += ((((unsigned __int64)(2155905153LL
                                                                            * v815
                                                                            * (BYTE2(v1249[1]) - v811[v812 - 2])) >> 32) & 0x80000000) != 0LL)
                                                      + ((int)((unsigned __int64)(2155905153LL
                                                                                * v815
                                                                                * (BYTE2(v1249[1]) - v811[v812 - 2])) >> 32) >> 7);
                                      v811[v812 + 1] += ((((unsigned __int64)(2155905153LL
                                                                            * v815
                                                                            * (255 - v811[v812 + 1])) >> 32) & 0x80000000) != 0LL)
                                                      + ((int)((unsigned __int64)(2155905153LL
                                                                                * v815
                                                                                * (255 - v811[v812 + 1])) >> 32) >> 7);
                                      v813 = v1277;
                                    }
                                    v797 = v814;
                                    v811 += 4;
                                    v1277 = --v813;
                                  }
                                  while ( v813 );
                                  v808 = (unsigned __int8 *)v1270[0] + Size;
                                  v1270[0] = (char *)v1270[0] + Size;
                                  v809 = (char *)v1263 + 4 * (_QWORD)lpModuleName;
                                  v1263 = v809;
                                  v739 = v1268 == (LPVOID)1;
                                  v1268 = (char *)v1268 - 1;
                                  LODWORD(Ptr) = v814;
                                }
                                while ( !v739 );
                                v675 = v1251;
                              }
                              ((void (__fastcall *)(unsigned __int16 *))off_1808D1378)(v1265);
                              if ( v1250 )
                                ((void (__fastcall *)(unsigned __int16 *, LPCWSTR))off_1808D13B8)(v1260, v1250);
                            }
                            else
                            {
                              v796 = GetLastError();
                              v797 = v796;
                              if ( v796 > 0 )
                                v797 = (unsigned __int16)v796 | 0x80070000;
                              if ( v797 >= 0 )
                                v797 = -2147467259;
                            }
                            ((void (__fastcall *)(unsigned __int16 *))off_1808D1370[0])(v1260);
                            if ( v797 < 0 )
                              goto LABEL_1046;
                            LODWORD(Ptr) = v1354;
                            v1270[0] = (void *)v1359;
                            v816 = v1356;
                            v1250 = (LPCWSTR)v1356;
                            v1347 = 0;
                            memset_0(v1348, 0, 0x64uLL);
                            v1350 = 0;
                            memset_0(v1351, 0, 0x64uLL);
                            Size = 0LL;
                            LODWORD(lpModuleName) = 0;
                            v1249[1] = 0;
                            memset(v1389, 0, sizeof(v1389));
                            v1390 = 0LL;
                            v1391 = 0;
                            v1374 = 0LL;
                            if ( !v816 )
                              goto LABEL_1046;
                            v769 = v1259;
                            v817 = ((__int64 (__fastcall *)(void *, __int64))off_1808D1390[0])(v1259, 7LL);
                            if ( !v817 )
                              goto LABEL_1041;
                            if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808D13A8[0])(
                                   v817,
                                   104LL,
                                   &v1347) )
                            {
                              Size = v1349;
                              LODWORD(lpModuleName) = v1348[0];
                              v1249[1] = v1348[1];
                            }
                            v818 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(void *))off_1808D1350[0])(v769);
                            v819 = v818;
                            v1263 = v818;
                            if ( !v818 )
                              goto LABEL_1041;
                            v1309[0] = 0LL;
                            LODWORD(v1389[0]) = 40;
                            DWORD1(v1389[0]) = v1269 - v1249[0];
                            v820 = v1258;
                            DWORD2(v1389[0]) = v1267 - v1258;
                            HIDWORD(v1389[0]) = 2097153;
                            v821 = (unsigned __int16 *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, _OWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808D1358[0])(
                                                         v818,
                                                         v1389,
                                                         0LL,
                                                         v1309,
                                                         0LL,
                                                         0);
                            v1260 = v821;
                            if ( !v821 )
                            {
                              v822 = GetLastError();
                              v823 = v822 < 0;
                              if ( v822 > 0 )
                              {
                                v822 = (unsigned __int16)v822 | 0x80070000;
                                v823 = v822 < 0;
                              }
                              if ( !v823 )
                                v822 = -2147467259;
                              goto LABEL_1165;
                            }
                            v824 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808D13A8[0])(
                                     v821,
                                     104LL,
                                     &v1350);
                            v825 = 0LL;
                            if ( v824 )
                              v825 = v1352;
                            v1265 = v825;
                            DWORD2(v1374) = v1269 - v1249[0];
                            HIDWORD(v1374) = v820 - v1267;
                            ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808D13B8)(
                              v819,
                              v1260);
                            off_1808D13C0(v819, (struct CSingleViewShellExperience *)1);
                            v1270[0] = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *, void *))off_1808D13B8)(
                                                 v819,
                                                 v1270[0]);
                            v826 = off_1808D1428[0];
                            v827 = ((__int64 (__fastcall *)(_QWORD))off_1808D13B0[0])(0LL);
                            ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v826)(
                              v819,
                              &v1374,
                              v827);
                            v828 = 0;
                            ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1808D1418)(
                              v819,
                              v1250,
                              0xFFFFFFFFLL,
                              &v1374,
                              (_DWORD)v1264,
                              0LL);
                            if ( v675 == 1 )
                            {
                              if ( !(_DWORD)Ptr )
                              {
                                LODWORD(Ptr) = 0xFFFFFF;
LABEL_1144:
                                v830 = -v1249[0];
                                if ( v1249[0] >= 0 )
                                  v830 = 0;
                                v831 = 0;
                                if ( v1249[0] >= 0 )
                                  v831 = v1249[0];
                                LODWORD(v1258) = v831;
                                v832 = -(int)v1267;
                                if ( (v1267 & 0x80000000) == 0LL )
                                {
                                  v832 = 0;
                                  v828 = v1267;
                                }
                                LODWORD(v1267) = v828;
                                v833 = (void *)(int)lpModuleName;
                                v834 = (_DWORD)lpModuleName - v831;
                                v835 = DWORD2(v1374) - v830;
                                if ( DWORD2(v1374) - v830 >= v834 )
                                  v835 = v834;
                                LODWORD(lpModuleName) = v835;
                                v836 = HIDWORD(v1374) - v832;
                                if ( HIDWORD(v1374) - v832 >= v1249[1] - v828 )
                                  v836 = v1249[1] - v828;
                                v822 = 0;
                                if ( v835 > 0 && v836 > 0 )
                                {
                                  v1250 = (LPCWSTR)(4LL * SDWORD2(v1374));
                                  v1264 = v833;
                                  v1268 = (LPVOID)(unsigned int)v836;
                                  v837 = &v1265[2 * v830 + 2 * (__int64)(v832 * DWORD2(v1374))];
                                  v1265 = v837;
                                  v838 = Size + 4 * ((int)v1258 + (__int64)((int)v1267 * (int)v833));
                                  Size = v838;
                                  v839 = 0;
                                  v1249[1] = 0;
                                  v840 = (unsigned int)lpModuleName;
                                  do
                                  {
                                    v841 = (unsigned __int8 *)(v837 + 1);
                                    v842 = v838 - (_QWORD)v837;
                                    v843 = v840;
                                    v1258 = v840;
                                    v844 = v1273;
                                    do
                                    {
                                      if ( (unsigned __int8)((*v841 + *(v841 - 2) + 2 * (unsigned int)*(v841 - 1)) >> 2) != 0xFF )
                                      {
                                        v845 = (unsigned __int8)~((*v841 + *(v841 - 2) + 2 * (unsigned int)*(v841 - 1)) >> 2);
                                        v841[v842] -= ~((*v841 + *(v841 - 2) + 2 * (unsigned int)*(v841 - 1)) >> 2)
                                                    * (v844 - v841[v842]);
                                        v841[v842 - 1] += ((((unsigned __int64)(2155905153LL
                                                                              * v845
                                                                              * (BYTE1(Ptr) - v841[v842 - 1])) >> 32) & 0x80000000) != 0LL)
                                                        + ((int)((unsigned __int64)(2155905153LL
                                                                                  * v845
                                                                                  * (BYTE1(Ptr) - v841[v842 - 1])) >> 32) >> 7);
                                        v841[v842 - 2] += ((((unsigned __int64)(2155905153LL
                                                                              * v845
                                                                              * (BYTE2(Ptr) - v841[v842 - 2])) >> 32) & 0x80000000) != 0LL)
                                                        + ((int)((unsigned __int64)(2155905153LL
                                                                                  * v845
                                                                                  * (BYTE2(Ptr) - v841[v842 - 2])) >> 32) >> 7);
                                        v841[v842 + 1] += ((((unsigned __int64)(2155905153LL
                                                                              * v845
                                                                              * (255 - v841[v842 + 1])) >> 32) & 0x80000000) != 0LL)
                                                        + ((int)((unsigned __int64)(2155905153LL
                                                                                  * v845
                                                                                  * (255 - v841[v842 + 1])) >> 32) >> 7);
                                        v843 = v1258;
                                        v839 = v1249[1];
                                      }
                                      v822 = v839;
                                      v841 += 4;
                                      v1258 = --v843;
                                    }
                                    while ( v843 );
                                    v837 = (unsigned __int16 *)((char *)v1265 + (_QWORD)v1250);
                                    v1265 = (unsigned __int16 *)((char *)v1265 + (_QWORD)v1250);
                                    v838 = Size + 4LL * (_QWORD)v1264;
                                    Size = v838;
                                    v739 = v1268 == (LPVOID)1;
                                    v1268 = (char *)v1268 - 1;
                                    v1249[1] = v839;
                                    v840 = (unsigned int)lpModuleName;
                                  }
                                  while ( !v739 );
                                  v675 = v1251;
                                  v819 = (CToastCenterExperienceManager *)v1263;
                                }
                                ((void (__fastcall *)(unsigned __int16 *))off_1808D1378)(v1260);
                                if ( v1270[0] )
                                  ((void (__fastcall *)(CToastCenterExperienceManager *, void *))off_1808D13B8)(
                                    v819,
                                    v1270[0]);
LABEL_1165:
                                ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808D1370[0])(v819);
                                if ( v822 >= 0 )
                                {
                                  v769 = v1259;
                                  if ( v675 == 1 )
                                    ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, int))off_1808D1340[0])(
                                      v1254,
                                      v1362.m128i_u32[0],
                                      v1362.m128i_u32[1],
                                      (unsigned int)dwBytes,
                                      v1274,
                                      v1259,
                                      0,
                                      0,
                                      13369376);
                                  else
                                    ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))off_1808D1380[0])(
                                      v1254,
                                      (unsigned int)v1315,
                                      DWORD1(v1315),
                                      (unsigned int)dwBytes,
                                      v1274,
                                      v1259,
                                      0,
                                      0,
                                      dwBytes,
                                      v1274,
                                      (_DWORD)v1262);
                                  goto LABEL_1169;
                                }
                                goto LABEL_1046;
                              }
                              v829 = ((__int64 (__fastcall *)(__int64))off_1808D1458[0])(8LL);
                            }
                            else
                            {
                              v829 = -5723992;
                            }
                            LODWORD(Ptr) = v829;
                            LODWORD(v1273) = v829;
                            goto LABEL_1144;
                          }
                        }
                        else
                        {
                          v677 = 0;
                        }
                        if ( v675 != 1 )
                          goto LABEL_936;
                        goto LABEL_934;
                      }
                      *(_QWORD *)&v1249[1] = 0LL;
                      v1301 = 0LL;
                      v1302 = 0LL;
                      v1258 = 0LL;
                      memset(v1322, 0, sizeof(v1322));
                      v1267 = 0LL;
                      v1280 = 0;
                      pcchLength = 0LL;
                      v578 = 0;
                      v1281 = 0;
                      if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1808D13E0[0])(
                             8LL,
                             &v1280,
                             0LL,
                             &v1281) )
                      {
                        v580 = MemoryAlloc(2LL * v1281);
                        SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1267, v580);
                        if ( !SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1267)
                          || (v581 = MemoryAlloc(4LL * (v1280 + 1)),
                              SP<unsigned long,SP_MEM<unsigned long>>::operator=(&pcchLength, v581),
                              (v1250 = (LPCWSTR)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&pcchLength)) == 0LL) )
                        {
                          v578 = -2147024882;
                          goto LABEL_735;
                        }
                        v582 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1267);
                        if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1808D13E0[0])(
                               8LL,
                               &v1280,
                               v582,
                               &v1281) )
                        {
                          if ( v1280 )
                          {
                            v583 = (WCHAR *)v1250;
                            for ( ii = 0; ii < v1280; ++ii )
                            {
                              *(_DWORD *)v583 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808D13F0)(v582, 0LL);
                              v585 = -1LL;
                              do
                                ++v585;
                              while ( *(_WORD *)(v582 + 2 * v585) );
                              v582 += 2 * v585 + 2;
                              v583 += 2;
                            }
                            v1250 = v583;
                            LOBYTE(v469) = v1251;
                          }
                          *(_DWORD *)v1250 = 1033;
                          v586 = pcchLength;
                          pcchLength = 0LL;
                          *(_QWORD *)&v1249[1] = v586;
                          LODWORD(v125) = v1280 + 1;
LABEL_735:
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&pcchLength);
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1267);
                          v587 = 0;
                          if ( v578 < 0 )
                            goto LABEL_790;
                          v588 = 0;
                          LODWORD(v1262) = 0;
                          if ( (_DWORD)v125 )
                          {
                            v589 = (_DWORD *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1249[1]);
                            v592 = v587 + 1;
LABEL_738:
                            v593 = v587;
                            while ( *v589 != *v590 )
                            {
                              v593 += v592;
                              ++v590;
                              if ( v593 >= 0x26 )
                              {
                                v591 += v592;
                                ++v589;
                                if ( v591 >= (unsigned int)v125 )
                                  goto LABEL_744;
                                v590 = dword_1807D4A70;
                                goto LABEL_738;
                              }
                            }
                            v588 = v593;
                            LODWORD(v1262) = v593;
                          }
LABEL_744:
                          memset(v1376, 0, sizeof(v1376));
                          LODWORD(pcchLength) = v587;
                          if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1808D13E8[0])(
                                 dword_1807D4A70[v588],
                                 v1415,
                                 85LL)
                            && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *, __int64))off_1808D13D0[0])(
                                 v1415,
                                 88LL,
                                 v1376,
                                 16LL) > 0 )
                          {
                            LODWORD(pcchLength) = (HIDWORD(v1376[0]) >> 27) & 1;
                            v588 = (unsigned int)v1262;
                          }
                          memset_0(v1324, 0, 0x90uLL);
                          v594 = L"Segoe UI Light";
                          v595 = (const wchar_t **)&v1323;
                          v596 = 19LL;
                          do
                          {
                            *v595 = v594;
                            v597 = -1LL;
                            do
                              ++v597;
                            while ( v594[v597] );
                            v594 += v597 + 1;
                            ++v595;
                            --v596;
                          }
                          while ( v596 );
                          v598 = 3LL * v588;
                          v1263 = *(LPVOID *)&v1324[8 * *((unsigned __int8 *)&unk_1807D2D40 + v598) - 8];
                          v1260 = *(unsigned __int16 **)&v1324[8 * (unsigned __int8)byte_1807D2D41[v598] - 8];
                          v1265 = *(unsigned __int16 **)&v1324[8 * (unsigned __int8)byte_1807D2D42[v598] - 8];
                          v599 = (const WCHAR *)MemoryAlloc(0x1C90uLL);
                          v1250 = v599;
                          if ( !v599 )
                            goto LABEL_752;
                          v600 = 0;
                          v601 = -1;
                          v602 = 0;
                          v603 = 0;
                          v604 = (char *)v599 + 7;
                          v605 = (unsigned __int8 *)&unk_1807D2DD2;
                          v606 = 914LL;
                          do
                          {
                            v607 = v605[1] | ((*v605 | ((*(v605 - 1) | (*(v605 - 2) << 8)) << 8)) << 8);
                            v608 = v605[5] | ((v605[4] | ((v605[3] | (v605[2] << 8)) << 8)) << 8);
                            v605 += 8;
                            v609 = v607 ^ v603;
                            v610 = v609 ^ v608 ^ v602 ^ 0xAC987321;
                            v611 = v609 ^ (__ROR4__(v610, 22) + 4991 * __ROR4__(v610 + 1419157410, 27));
                            v612 = v610 ^ (43881 * __ROR4__(v611 + 133239679, 9) - __ROR4__(v611, 30));
                            v613 = v612 ^ (2033
                                         * __ROR4__(v611 ^ (24670 * v612 - (v612 >> 13) - 123127970) ^ 0xAB69, 26)
                                         - __ROR4__(v611 ^ (24670 * v612 - (v612 >> 13) - 123127970), 30));
                            v614 = v611 ^ (24670 * v612 - (v612 >> 13) - 123127970) ^ (133239679 - (v613 ^ 0xAB69605E));
                            v615 = v613 ^ (43881 * (v614 ^ 0x137F)) ^ __ROR4__(v614, 6);
                            v616 = v614 ^ (__ROR4__(v615, 30) + 24670 * __ROR4__(v615 + 133239679, 15));
                            v617 = v615 ^ (2033 * __ROR4__(v616 + 1419157410, 14) - __ROR4__(v616, 24));
                            v618 = v616 ^ __ROR4__(v617, 10) ^ (4991 * __ROR4__(v617 ^ 0xAB69605E, 12));
                            v619 = v617 ^ (v618 >> 10) ^ (43881 * (v618 ^ 0x7F1));
                            v620 = v618 ^ (2033 * (__ROR4__(~v619, 5) + 24670));
                            v621 = v620 ^ (((v619 ^ (v620 - 2033) ^ 0xAB69605E) >> 2)
                                         + 4991 * __ROR4__(v619 ^ (v620 - 2033) ^ 0xAB6967AF, 30));
                            v622 = v619 ^ (v620 - 2033) ^ 0xAB69605E ^ (__ROR4__(v621, 25)
                                                                      + 43881 * __ROR4__(v621 - 133239679, 6));
                            v623 = v621 ^ (24670 * (v622 ^ 0x137F) + __ROR4__(v622, 9));
                            v624 = v622 ^ (__ROR4__(v623, 25) + 2033 * __ROR4__(v623 ^ 0xAB69, 27));
                            v625 = v623 ^ v624 ^ 0xAC987321;
                            v626 = v624 ^ (4991 * __ROR4__(v625, 3) - 219010071);
                            v627 = v625 ^ (24670 * __ROR4__(v626 - 133239679, 1) - __ROR4__(v626, 6));
                            v628 = v626 ^ (__ROR4__(v627, 18) + 2033 * __ROR4__(v627 - 1419157410, 29));
                            v629 = v627 ^ (4991 * __ROR4__(v628 - 1419157410, 17) - __ROR4__(v628, 14));
                            v630 = v628 ^ (v629 >> 3) ^ (43881 * (v629 ^ 0x605E));
                            v603 = v629 ^ v600 ^ __ROR4__(v630, 30) ^ (24670 * __ROR4__(v630 ^ 0x7F1137F, 28));
                            v602 = v630 ^ v601;
                            *(v604 - 4) = v603;
                            *v604 = v630 ^ v601;
                            *(v604 - 5) = __ROR4__(v603, 8);
                            *(v604 - 1) = __ROR4__(v630 ^ v601, 8);
                            *(v604 - 6) = __ROR4__(v603, 16);
                            *(v604 - 2) = __ROR4__(v630 ^ v601, 16);
                            *(v604 - 7) = __ROR4__(v603, 24);
                            *(v604 - 3) = __ROR4__(v630 ^ v601, 24);
                            v600 = v607;
                            v601 = v608;
                            v604 += 8;
                            --v606;
                          }
                          while ( v606 );
                          v631 = 0LL;
                          v632 = 0LL;
                          LOBYTE(v469) = v1251;
                          v576 = (int)v1264;
                          do
                          {
                            v633 = _mm_xor_ps((__m128)_mm_loadu_si128((const __m128i *)&v1250[v631]), v632);
                            v632 = v633;
                            v631 += 8LL;
                          }
                          while ( v631 < 3656 );
                          v634 = _mm_xor_ps(v633, (__m128)_mm_srli_si128((__m128i)v633, 8));
                          v635 = _mm_xor_ps(v634, (__m128)_mm_srli_si128((__m128i)v634, 4));
                          v636 = _mm_xor_ps(v635, (__m128)_mm_srli_si128((__m128i)v635, 2));
                          v2 = (__m128i)_mm_xor_ps(v636, (__m128)_mm_srli_si128((__m128i)v636, 1));
                          if ( (unsigned __int8)_mm_cvtsi128_si32(v2) == 127LL )
                          {
                            v1301 = v1250;
                            v1302 = 7312LL;
                            v578 = 0;
                            v637 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1301);
                            v639 = (__int64 *)v1322;
                            v640 = 6LL;
                            v641 = (int)v1262;
                            do
                            {
                              v642 = v638;
                              do
                              {
                                if ( v641 == v642 )
                                  *v639 = v637;
                                v643 = -1LL;
                                do
                                  ++v643;
                                while ( *(_BYTE *)(v637 + v643) != (_BYTE)v638 );
                                v637 += v643 + 1;
                                ++v642;
                              }
                              while ( v642 < 0x26 );
                              ++v639;
                              --v640;
                            }
                            while ( v640 );
                            v644 = MemoryAlloc(0x18uLL);
                            SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1258, v644);
                            v645 = SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1258);
                            v1250 = (LPCWSTR)v645;
                            if ( !v645 )
                            {
LABEL_752:
                              v578 = -2147024882;
                              goto LABEL_790;
                            }
                            *(_OWORD *)v645 = 0LL;
                            *(_QWORD *)(v645 + 16) = 0LL;
                            v646 = 0;
                            while ( 2 )
                            {
                              v647 = 0;
                              v648 = word_1807D2DB8;
                              while ( *((_WORD *)&Ptr + v646) != *v648 )
                              {
                                ++v647;
                                ++v648;
                                if ( v647 >= 6 )
                                  goto LABEL_780;
                              }
                              v649 = *((_QWORD *)v1322 + v647);
                              v1267 = v649;
                              v650 = -1LL;
                              do
                                ++v650;
                              while ( *(_BYTE *)(v649 + v650) );
                              v651 = ((__int64 (__fastcall *)(__int64, _QWORD, SIZE_T, _QWORD, _QWORD, _DWORD))off_1808D1400[0])(
                                       65001LL,
                                       0LL,
                                       v649,
                                       (unsigned int)(v650 + 1),
                                       0LL,
                                       0);
                              LODWORD(v1264) = v651;
                              if ( !v651 )
                              {
                                v656 = GetLastError();
                                v578 = v656;
                                if ( v656 > 0 )
                                  v578 = (unsigned __int16)v656 | 0x80070000;
                                if ( v578 >= 0 )
                                  v578 = -2147467259;
                                goto LABEL_790;
                              }
                              v652 = MemoryAlloc(2LL * v651);
                              *(_QWORD *)&v1250[4 * v646] = v652;
                              if ( !v652 )
                                goto LABEL_752;
                              v653 = -1LL;
                              do
                                ++v653;
                              while ( *(_BYTE *)(v1267 + v653) );
                              if ( !((unsigned int (__fastcall *)(__int64, _QWORD, SIZE_T, _QWORD, LPVOID, _DWORD))off_1808D1400[0])(
                                      65001LL,
                                      0LL,
                                      v1267,
                                      (unsigned int)(v653 + 1),
                                      v652,
                                      (_DWORD)v1264) )
                              {
                                v655 = GetLastError();
                                v578 = v655;
                                if ( v655 > 0 )
                                  v578 = (unsigned __int16)v655 | 0x80070000;
                                if ( v578 >= 0 )
                                  v578 = -2147467259;
                                goto LABEL_790;
                              }
LABEL_780:
                              if ( ++v646 < 3 )
                                continue;
                              break;
                            }
                            v654 = v1258;
                            v1258 = 0LL;
                            Size = v654;
                            v1353 = pcchLength;
                          }
                          else
                          {
                            v578 = -1073425151;
                            MemoryFree((void *)v1250);
                          }
LABEL_790:
                          v659 = (void **)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1258);
                          if ( v659 )
                          {
                            v660 = (const WCHAR *)3;
                            v1250 = (LPCWSTR)3;
                            do
                            {
                              v661 = *v659;
                              if ( *v659 )
                              {
                                v662 = -1LL;
                                do
                                  ++v662;
                                while ( *(_WORD *)&v661[2 * v662] != v658 );
                                for ( jj = 2 * v662 + 2; jj; jj -= v657 )
                                {
                                  *v661 = v658;
                                  v661 += v657;
                                }
                                MemoryFree(*v659);
                                v660 = v1250;
                                v658 = 0;
                                v657 = 1LL;
                              }
                              ++v659;
                              v660 = (const WCHAR *)((char *)v660 - v657);
                              v1250 = v660;
                            }
                            while ( v660 );
                          }
                          v125 = 0LL;
                          if ( SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1301) )
                          {
                            v664 = (_BYTE *)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&v1301);
                            for ( kk = v1302; kk; kk -= v665 )
                            {
                              *v664 = 0;
                              v664 += v665;
                            }
                          }
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1258);
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1301);
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1249[1]);
                          if ( v578 < 0 )
                            goto LABEL_828;
                          v667 = (void **)SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(&Size);
                          v1355 = *v667;
                          v1356 = v667[1];
                          v1357 = v667[2];
                          v1316 = 0LL;
                          LODWORD(v1316) = 16;
                          if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1808D14A8[0])(
                                  66LL,
                                  0LL,
                                  &v1316,
                                  0LL) )
                          {
                            v668 = GetLastError();
                            v578 = v668;
                            if ( v668 > 0 )
                              v578 = (unsigned __int16)v668 | 0x80070000;
                            if ( v578 >= 0 )
                              v578 = -2147467259;
                            v1354 = 0;
                            goto LABEL_828;
                          }
                          v1354 = BYTE4(v1316) & 1;
                          if ( v576 == 1 )
                          {
                            v1249[0] = 42;
                          }
                          else
                          {
                            if ( v576 != 2 )
                            {
                              if ( v576 == 3 )
                              {
                                v1249[0] = 225;
                                LODWORD(dwBytes) = 225;
                              }
LABEL_816:
                              v669 = 96;
                              LODWORD(pcchLength) = 96;
                              memset_0(v1405, 0, 0xDCuLL);
                              v1406 = 220;
                              v578 = 0;
                              if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1808D1420[0])(
                                     0LL,
                                     0xFFFFFFFFLL,
                                     v1405) )
                              {
                                v669 = v1407;
                                v1275 = v1408;
                                LODWORD(v1268) = v1409;
                                if ( v1407 < 0x60u )
                                  v669 = 96;
                                LODWORD(pcchLength) = v669;
                              }
                              v670 = v1265;
                              if ( v576 == 1 )
                                v670 = (const WCHAR *)v1263;
                              v1250 = v670;
                              memset_0(v1399, 0, 0x5CuLL);
                              Ptr = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(
                                              0LL,
                                              0LL,
                                              1027LL);
                              if ( Ptr )
                              {
                                v1399[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                                   (unsigned int)v1249[0],
                                                   v669,
                                                   72LL);
                                v1399[4] = 400;
                                v1400 = 5;
                                StringCchCopyW((char *)v1401, 32LL, (char *)v1250);
                                v680 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1399);
                                if ( v680 )
                                {
                                  v1358 = (const WCHAR *)v680;
                                }
                                else
                                {
                                  v578 = GetLastError();
                                  v681 = v578 < 0;
                                  if ( v578 > 0 )
                                  {
                                    v578 = (unsigned __int16)v578 | 0x80070000;
                                    v681 = v578 < 0;
                                  }
                                  if ( !v681 )
                                    v578 = -2147467259;
                                }
                                ((void (__fastcall *)(_QWORD, void *))off_1808D14A0[0])(0LL, Ptr);
                              }
                              else
                              {
                                v578 = GetLastError();
                                v671 = v578 < 0;
                                if ( v578 > 0 )
                                {
                                  v578 = (unsigned __int16)v578 | 0x80070000;
                                  v671 = v578 < 0;
                                }
                                if ( !v671 )
                                  goto LABEL_826;
                              }
                              if ( v578 < 0 )
                                goto LABEL_827;
                              v682 = v1265;
                              if ( v576 == 1 )
                                v682 = (unsigned __int16 *)v1263;
                              v1265 = v682;
                              memset_0(v1402, 0, 0x5CuLL);
                              v578 = 0;
                              v1250 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(
                                                 0LL,
                                                 0LL,
                                                 1027LL);
                              if ( !v1250 )
                              {
                                v683 = GetLastError();
                                v578 = v683;
                                v125 = 0LL;
                                if ( v683 > 0 )
                                  v578 = (unsigned __int16)v683 | 0x80070000;
                                if ( v578 >= 0 )
                                  v578 = -2147467259;
                                goto LABEL_828;
                              }
                              v1402[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                                 (unsigned int)dwBytes,
                                                 v669,
                                                 72LL);
                              v1402[4] = 400;
                              v1403 = 5;
                              StringCchCopyW((char *)v1404, 32LL, (char *)v1265);
                              v684 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1402);
                              v125 = 0LL;
                              if ( v684 )
                              {
                                v1359 = (const WCHAR *)v684;
                              }
                              else
                              {
                                v685 = GetLastError();
                                v578 = v685;
                                if ( v685 > 0 )
                                  v578 = (unsigned __int16)v685 | 0x80070000;
                                if ( v578 >= 0 )
                                  v578 = -2147467259;
                              }
                              ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808D14A0[0])(0LL, v1250);
                              if ( v578 < 0 )
                                goto LABEL_828;
                              v686 = 0;
                              if ( v576 != 1 )
                              {
                                if ( v576 == 2 )
                                {
                                  LODWORD(v125) = v1275 / 4;
                                  v686 = 0;
LABEL_873:
                                  *((_QWORD *)&v1315 + 1) = __PAIR64__(v686, (unsigned int)v125);
                                  if ( v576 == 1 )
                                  {
                                    v687 = 150;
                                    LODWORD(v1274) = 150;
                                    LODWORD(v1269) = 42;
                                    LODWORD(v1277) = 32;
                                  }
                                  else
                                  {
                                    v687 = 0;
                                    if ( (unsigned int)(v576 - 2) <= 1 )
                                    {
                                      LODWORD(v1274) = 0;
                                      LODWORD(v1269) = 0;
                                      LODWORD(v1277) = 0;
                                    }
                                  }
                                  v688 = (_DWORD)v125 - v687;
                                  v1363.m128i_i32[2] = v688;
                                  v1362.m128i_i32[2] = v688;
                                  v689 = v1355;
                                  v1250 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1808D13B8)(
                                                     lpModuleName,
                                                     v1358);
                                  LODWORD(v1264) = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                                                     lpModuleName,
                                                     v689,
                                                     0xFFFFFFFFLL,
                                                     &v1362,
                                                     3152,
                                                     0LL);
                                  v578 = (_DWORD)v1264 == 0 ? 0x80004005 : 0;
                                  if ( v1250 )
                                    ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1808D13B8)(lpModuleName, v1250);
                                  if ( !(_DWORD)v1264 )
                                    goto LABEL_827;
                                  v690 = v1356;
                                  v1250 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1808D13B8)(
                                                     lpModuleName,
                                                     v1359);
                                  LODWORD(v1264) = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1808D1418)(
                                                     lpModuleName,
                                                     v690,
                                                     0xFFFFFFFFLL,
                                                     &v1363,
                                                     3152,
                                                     0LL);
                                  v578 = (_DWORD)v1264 == 0 ? 0x80004005 : 0;
                                  if ( v1250 )
                                    ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1808D13B8)(lpModuleName, v1250);
                                  if ( !(_DWORD)v1264 )
                                    goto LABEL_827;
                                  if ( (unsigned int)(v576 - 2) <= 1 )
                                  {
                                    v688 = v1363.m128i_i32[2];
                                    if ( v1362.m128i_i32[2] > v1363.m128i_i32[2] )
                                      v688 = v1362.m128i_i32[2];
                                  }
                                  if ( v1353 )
                                  {
                                    off_1808D1490(
                                      (CToastCenterExperienceManager *)&v1362,
                                      (struct CSingleViewShellExperience *)(unsigned int)(v688 - v1362.m128i_i32[2]));
                                    v691 = (unsigned int)(v688 - v1363.m128i_i32[2]);
                                  }
                                  else
                                  {
                                    off_1808D1490(
                                      (CToastCenterExperienceManager *)&v1362,
                                      (struct CSingleViewShellExperience *)(unsigned int)v1274);
                                    v691 = (unsigned int)v1274;
                                  }
                                  ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1808D1490)(
                                    &v1363,
                                    v691,
                                    (unsigned int)(v1277 + v1362.m128i_i32[3]));
                                  if ( (unsigned int)(v576 - 2) <= 1 )
                                  {
                                    *((_QWORD *)&v1315 + 1) = __PAIR64__(v1363.m128i_u32[3], v688);
                                    v1361 = -5723992;
                                  }
                                  else if ( v576 == 1 )
                                  {
                                    v1361 = 0xFFFFFF;
                                    memset_0(v1396, 0, 0x5CuLL);
                                    v578 = 0;
                                    v1250 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D1438[0])(
                                                       0LL,
                                                       0LL,
                                                       1027LL);
                                    if ( v1250 )
                                    {
                                      v1396[0] = -(int)((__int64 (__fastcall *)(__int64, _QWORD))off_1808D13F8)(
                                                         11LL,
                                                         (unsigned int)pcchLength);
                                      v1396[4] = 400;
                                      v1397 = 5;
                                      StringCchCopyW((char *)v1398, 32LL, (char *)v1260);
                                      v693 = ((__int64 (__fastcall *)(_DWORD *))off_1808D1360[0])(v1396);
                                      if ( v693 )
                                      {
                                        v1360 = v693;
                                      }
                                      else
                                      {
                                        v578 = GetLastError();
                                        v694 = v578 < 0;
                                        if ( v578 > 0 )
                                        {
                                          v578 = (unsigned __int16)v578 | 0x80070000;
                                          v694 = v578 < 0;
                                        }
                                        if ( !v694 )
                                          v578 = -2147467259;
                                      }
                                      ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808D14A0[0])(0LL, v1250);
                                    }
                                    else
                                    {
                                      v578 = GetLastError();
                                      v692 = v578 < 0;
                                      if ( v578 > 0 )
                                      {
                                        v578 = (unsigned __int16)v578 | 0x80070000;
                                        v692 = v578 < 0;
                                      }
                                      if ( !v692 )
                                      {
LABEL_826:
                                        v578 = -2147467259;
LABEL_827:
                                        v125 = 0LL;
LABEL_828:
                                        ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808D14A0[0])(0LL, lpModuleName);
                                        goto LABEL_829;
                                      }
                                    }
                                    if ( v578 < 0 )
                                      goto LABEL_827;
                                    v1366 = v688;
                                    v695 = v1357;
                                    v696 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1808D13B8)(
                                             lpModuleName,
                                             v1360);
                                    v697 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1808D1418)(
                                             lpModuleName,
                                             v695,
                                             0xFFFFFFFFLL,
                                             &v1364,
                                             1120,
                                             0LL);
                                    LODWORD(v1264) = v697;
                                    v578 = v697 == 0 ? 0x80004005 : 0;
                                    if ( v696 )
                                    {
                                      ((void (__fastcall *)(LPCWSTR, __int64))off_1808D13B8)(lpModuleName, v696);
                                      v697 = (int)v1264;
                                    }
                                    v125 = 0LL;
                                    if ( !v697 )
                                      goto LABEL_828;
                                    v698 = v1366 + 24;
                                    if ( (int)(v1366 + 24) < 90 )
                                      v698 = 90;
                                    v1366 = v698;
                                    v1367 = 32;
                                    v699 = pcchLength;
                                    v1364 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                              v1364,
                                              (unsigned int)pcchLength,
                                              96LL);
                                    v1365 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                              v1365,
                                              v699,
                                              96LL);
                                    v1366 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                              v1366,
                                              v699,
                                              96LL);
                                    v1367 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808D13F8)(
                                              v1367,
                                              v699,
                                              96LL);
                                    if ( v1353 )
                                    {
                                      v700 = v1362.m128i_u32[0];
                                      if ( v1362.m128i_i32[0] >= v1363.m128i_i32[0] )
                                        v700 = v1363.m128i_u32[0];
                                    }
                                    else
                                    {
                                      v701 = v1362.m128i_i32[2];
                                      if ( v1362.m128i_i32[2] <= v1363.m128i_i32[2] )
                                        v701 = v1363.m128i_i32[2];
                                      v700 = v1364 + v701 - v1366;
                                    }
                                    off_1808D1490(
                                      (CToastCenterExperienceManager *)&v1364,
                                      (struct CSingleViewShellExperience *)v700);
                                  }
                                  LODWORD(pcchLength) = v1353;
                                  v702 = HIDWORD(v1315);
                                  v703 = DWORD2(v1315);
                                  v704 = v576 - 1;
                                  if ( !v704 )
                                  {
                                    v125 = 0LL;
                                    *(_QWORD *)&v1315 = 0LL;
                                    goto LABEL_925;
                                  }
                                  v705 = v704 - 1;
                                  if ( v705 )
                                  {
                                    if ( v705 != 1 )
                                      goto LABEL_924;
                                    v1377 = 0LL;
                                    v1378 = 0LL;
                                    v1379 = 0LL;
                                    v706 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                              0LL,
                                                                              (struct CSingleViewShellExperience *)1);
                                    LODWORD(v1377) = 40;
                                    if ( !(unsigned int)off_1808D1448(v706, (struct CSingleViewShellExperience *)&v1377) )
                                      goto LABEL_924;
                                    off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1378 + 4));
                                    off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1378 + 12));
                                    v707 = 50 * (HIDWORD(v1378) - v703) / 100;
                                    v708 = 50 * (v1379 - v702);
                                  }
                                  else
                                  {
                                    v1380 = 0LL;
                                    v1381 = 0LL;
                                    v1382 = 0LL;
                                    v709 = (CToastCenterExperienceManager *)off_1808D1488[0](
                                                                              0LL,
                                                                              (struct CSingleViewShellExperience *)1);
                                    LODWORD(v1380) = 40;
                                    if ( !(unsigned int)off_1808D1448(v709, (struct CSingleViewShellExperience *)&v1380) )
                                      goto LABEL_924;
                                    off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1381 + 4));
                                    off_1808D1480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1381 + 12));
                                    if ( (_DWORD)pcchLength )
                                      v707 = DWORD1(v1381) + 5 * HIDWORD(v1381) / 100;
                                    else
                                      v707 = 95 * (HIDWORD(v1381) - v703) / 100;
                                    v708 = 95 * (v1382 - v702);
                                  }
                                  LODWORD(v1315) = v707;
                                  DWORD1(v1315) = v708 / 100;
LABEL_924:
                                  v125 = 0LL;
LABEL_925:
                                  v578 = 0;
                                  goto LABEL_828;
                                }
                                if ( v576 != 3 )
                                  goto LABEL_873;
                              }
                              LODWORD(v125) = v1275;
                              v686 = (unsigned int)v1268;
                              goto LABEL_873;
                            }
                            v1249[0] = 15;
                          }
                          LODWORD(dwBytes) = 11;
                          goto LABEL_816;
                        }
                        v578 = GetLastError();
                        v579 = v578 < 0;
                        if ( v578 > 0 )
                        {
                          v578 = (unsigned __int16)v578 | 0x80070000;
                          v579 = v578 < 0;
                        }
                        LODWORD(v125) = 0;
                      }
                      else
                      {
                        v578 = GetLastError();
                        v579 = v578 < 0;
                        if ( v578 > 0 )
                        {
                          v578 = (unsigned __int16)v578 | 0x80070000;
                          v579 = v578 < 0;
                        }
                      }
                      if ( !v579 )
                        v578 = -2147467259;
                      goto LABEL_735;
                    }
                    v523 = dword_1808DDD3C;
LABEL_710:
                    dword_1808DDD3C = v523 + 1;
                    goto LABEL_711;
                  }
                  v470 = dword_1808DDD3C;
LABEL_663:
                  dword_1808DDD3C = v470 + 1;
                  goto LABEL_664;
                }
                HIDWORD(lpMem[0]) = dwBytes;
                v131 = dwBytes;
                v132 = GetProcessHeap();
                v133 = HeapAlloc(v132, 8u, v131);
                if ( !v133 )
                {
                  v100 = -1073741801;
                  goto LABEL_161;
                }
                lpMem[1] = v133;
                LODWORD(lpMem[0]) = 0;
                LODWORD(v1270[1]) = 0;
                v1270[0] = 0LL;
                pcchLength = (size_t)v133;
                v1258 = (size_t)v102;
                *(_QWORD *)&v1249[1] = v104;
                v100 = RtlULongLongAdd((unsigned __int64)v133, 4LL, (__int64 *)&v1270[1]);
                LODWORD(v1276) = v100;
                if ( v100 < 0 )
                {
LABEL_162:
                  v110 = v98;
                  goto LABEL_136;
                }
                if ( v135 + 2 > (unsigned int *)((char *)v135 + HIDWORD(lpMem[0])) )
                  goto LABEL_160;
                *v135 = v136;
                *(_DWORD *)v1270[1] = 0;
                v137 = ++LODWORD(lpMem[0]);
                LODWORD(v1270[1]) = 0;
                v1270[0] = 0LL;
                if ( v134 )
                {
                  LODWORD(v1251) = 0;
                  if ( lpMem[1] )
                  {
                    v139 = (int *)lpMem[1];
                    pcchLength = (size_t)lpMem[1];
                    if ( v137 )
                    {
                      do
                      {
                        v1249[0] = 0;
                        v100 = RtlUIntAdd(4u, *v139, v1249);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_607;
                        v100 = RtlULongLongAdd(v140, (unsigned int)v1249[0], (__int64 *)&pcchLength);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_607;
                        LODWORD(v1251) = v1251 + 1;
                        v139 = (int *)pcchLength;
                      }
                      while ( (unsigned int)v1251 < v141 );
                      v1258 = (size_t)v102;
                      *(_QWORD *)&v1249[1] = v104;
                    }
                    v100 = RtlULongLongAdd((unsigned __int64)v139, 4LL, (__int64 *)&v1270[1]);
                    LODWORD(v1276) = v100;
                    if ( v100 < 0 )
                      goto LABEL_162;
                    if ( (char *)v143 + v142 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
                      goto LABEL_160;
                    *v143 = v142;
                    memcpy_0(v1270[1], v104, v142);
                    v138 = 4;
                  }
                  else
                  {
                    v100 = RtlUIntAdd(v136, v134, (int *)&v1251);
                    LODWORD(v1276) = v100;
                    if ( v100 < 0 )
                      goto LABEL_607;
                    v100 = RtlUIntAdd(HIDWORD(lpMem[0]), v1251, (int *)lpMem + 1);
                    LODWORD(v1276) = v100;
                    if ( v100 < 0 )
                      goto LABEL_162;
                  }
                  v144 = ++LODWORD(lpMem[0]);
                  LODWORD(v1270[1]) = 0;
                  v1270[0] = 0LL;
                  if ( v102 )
                  {
                    if ( lpMem[1] )
                    {
                      v146 = (int *)lpMem[1];
                      pcchLength = (size_t)lpMem[1];
                      if ( v144 )
                      {
                        do
                        {
                          LODWORD(v1251) = 0;
                          v100 = RtlUIntAdd(4u, *v146, (int *)&v1251);
                          LODWORD(v1276) = v100;
                          if ( v100 < 0 )
                            goto LABEL_607;
                          v100 = RtlULongLongAdd(v147, (unsigned int)v1251, (__int64 *)&pcchLength);
                          LODWORD(v1276) = v100;
                          if ( v100 < 0 )
                            goto LABEL_607;
                          v146 = (int *)pcchLength;
                        }
                        while ( v149 + 1 < v148 );
                        v1258 = (size_t)v102;
                        *(_QWORD *)&v1249[1] = v104;
                      }
                      v100 = RtlULongLongAdd((unsigned __int64)v146, 4LL, (__int64 *)&v1270[1]);
                      LODWORD(v1276) = v100;
                      if ( v100 < 0 )
                        goto LABEL_162;
                      if ( v150 + 3 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                        goto LABEL_160;
                      *v150 = 8;
                      memcpy_0(v1270[1], v102, 8uLL);
                      v145 = 4LL;
                    }
                    else
                    {
                      LODWORD(v1251) = 0;
                      v100 = RtlUIntAdd(v138, 8, (int *)&v1251);
                      LODWORD(v1276) = v100;
                      if ( v100 < 0 )
                        goto LABEL_607;
                      v100 = RtlUIntAdd(HIDWORD(lpMem[0]), v1251, (int *)lpMem + 1);
                      LODWORD(v1276) = v100;
                      if ( v100 < 0 )
                        goto LABEL_162;
                    }
                    v151 = ++LODWORD(lpMem[0]);
                    LODWORD(v1270[1]) = 0;
                    v1270[0] = 0LL;
                    LODWORD(v1251) = 0;
                    if ( lpMem[1] )
                    {
                      v154 = (int *)lpMem[1];
                      pcchLength = (size_t)lpMem[1];
                      if ( v151 )
                      {
                        do
                        {
                          v1249[0] = 0;
                          v100 = RtlUIntAdd(4u, *v154, v1249);
                          LODWORD(v1276) = v100;
                          if ( v100 < 0 )
                            goto LABEL_607;
                          v100 = RtlULongLongAdd(v155, (unsigned int)v1249[0], (__int64 *)&pcchLength);
                          LODWORD(v1276) = v100;
                          if ( v100 < 0 )
                            goto LABEL_607;
                          LODWORD(v1251) = v1251 + 1;
                          v154 = (int *)pcchLength;
                        }
                        while ( (unsigned int)v1251 < v156 );
                        v1258 = (size_t)v102;
                        *(_QWORD *)&v1249[1] = v104;
                        v145 = 4LL;
                      }
                      v100 = RtlULongLongAdd((unsigned __int64)v154, v145, (__int64 *)&v1270[1]);
                      LODWORD(v1276) = v100;
                      if ( v100 < 0 )
                        goto LABEL_162;
                      if ( v157 + 3 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                        goto LABEL_160;
                      *v157 = 8;
                      *(_QWORD *)v1270[1] = v1267;
                      v153 = LODWORD(lpMem[0]) + 1;
                    }
                    else
                    {
                      v100 = RtlUIntAdd(v145, 8, (int *)&v1251);
                      LODWORD(v1276) = v100;
                      if ( v100 < 0 )
                        goto LABEL_607;
                      v100 = RtlUIntAdd(HIDWORD(lpMem[0]), v1251, (int *)lpMem + 1);
                      LODWORD(v1276) = v100;
                      if ( v100 < 0 )
                        goto LABEL_162;
                      v153 = LODWORD(lpMem[0]) + 1;
                    }
                    LODWORD(lpMem[0]) = v153;
                    pcchLength = 0LL;
                    if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v152, &pcchLength) < 0 )
                    {
                      v100 = -1073741762;
                      goto LABEL_161;
                    }
                    v100 = RtlULongLongAdd(pcchLength, 1LL, (__int64 *)&pcchLength);
                    LODWORD(v1276) = v100;
                    if ( v100 < 0 )
                      goto LABEL_221;
                    LODWORD(v1270[1]) = 0;
                    v1270[0] = 0LL;
                    if ( 2 * (_DWORD)pcchLength )
                    {
                      if ( !lpMem[1] )
                      {
                        LODWORD(v1251) = 0;
                        v100 = RtlUIntAdd(4u, 2 * (int)pcchLength, (int *)&v1251);
                        LODWORD(v1276) = v100;
                        if ( v100 >= 0 )
                        {
                          v100 = RtlUIntAdd(HIDWORD(lpMem[0]), v1251, (int *)lpMem + 1);
                          LODWORD(v1276) = v100;
                          v158 = (unsigned int)lpMem[0];
                          if ( v100 >= 0 )
                          {
                            v158 = ++LODWORD(lpMem[0]);
                            v100 = 0;
                            LODWORD(v1276) = 0;
                          }
                        }
                        goto LABEL_221;
                      }
                      v159 = (int *)lpMem[1];
                      pcchLength = (size_t)lpMem[1];
                      for ( mm = 0; mm < v158; v159 = (int *)pcchLength )
                      {
                        LODWORD(v1251) = 0;
                        v100 = RtlUIntAdd(4u, *v159, (int *)&v1251);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_221;
                        v100 = RtlULongLongAdd(v161, (unsigned int)v1251, (__int64 *)&pcchLength);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_221;
                        ++mm;
                      }
                      v100 = RtlULongLongAdd((unsigned __int64)v159, 4LL, (__int64 *)&v1270[1]);
                      LODWORD(v1276) = v100;
                      if ( v100 >= 0 )
                      {
                        if ( (char *)v162 + v163 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
                        {
                          v100 = -1073741789;
LABEL_220:
                          LODWORD(v1276) = v100;
                          goto LABEL_221;
                        }
                        *v162 = v163;
                        memcpy_0(v1270[1], L"Shell-Windowing-ShowMaximized", (unsigned int)v163);
                        v158 = ++LODWORD(lpMem[0]);
                      }
LABEL_221:
                      v110 = v98;
                      if ( v100 < 0 )
                        goto LABEL_136;
                      LODWORD(v1270[1]) = 0;
                      v1270[0] = 0LL;
                      LODWORD(v1251) = 0;
                      if ( lpMem[1] )
                      {
                        v165 = (int *)lpMem[1];
                        pcchLength = (size_t)lpMem[1];
                        if ( v158 )
                        {
                          do
                          {
                            v1249[0] = 0;
                            v100 = RtlUIntAdd(4u, *v165, v1249);
                            LODWORD(v1276) = v100;
                            if ( v100 < 0 )
                              goto LABEL_607;
                            v100 = RtlULongLongAdd(v166, (unsigned int)v1249[0], (__int64 *)&pcchLength);
                            LODWORD(v1276) = v100;
                            if ( v100 < 0 )
                              goto LABEL_607;
                            LODWORD(v1251) = v1251 + 1;
                            v165 = (int *)pcchLength;
                          }
                          while ( (unsigned int)v1251 < v167 );
                          v1258 = (size_t)v102;
                          *(_QWORD *)&v1249[1] = v104;
                        }
                        v100 = RtlULongLongAdd((unsigned __int64)v165, 4LL, (__int64 *)&v1270[1]);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_162;
                        if ( v168 + 2 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                          goto LABEL_160;
                        *v168 = v164;
                        *(_DWORD *)v1270[1] = v98;
                      }
                      else
                      {
                        v100 = RtlUIntAdd(4u, 4, (int *)&v1251);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_136;
                        v100 = RtlUIntAdd(HIDWORD(lpMem[0]), v1251, (int *)lpMem + 1);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_162;
                      }
                      v169 = ++LODWORD(lpMem[0]);
                      LODWORD(v1270[1]) = 0;
                      v1270[0] = 0LL;
                      LODWORD(v1251) = 0;
                      if ( !lpMem[1] )
                      {
                        v100 = RtlUIntAdd(v164, v164, (int *)&v1251);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_607;
                        v100 = RtlUIntAdd(HIDWORD(lpMem[0]), v1251, (int *)lpMem + 1);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_162;
                        LODWORD(lpMem[0]) += v170;
                        goto LABEL_246;
                      }
                      v172 = (int *)lpMem[1];
                      pcchLength = (size_t)lpMem[1];
                      if ( v169 )
                      {
                        do
                        {
                          v1249[0] = 0;
                          v100 = RtlUIntAdd(4u, *v172, v1249);
                          LODWORD(v1276) = v100;
                          if ( v100 < 0 )
                            goto LABEL_607;
                          v100 = RtlULongLongAdd(v173, (unsigned int)v1249[0], (__int64 *)&pcchLength);
                          LODWORD(v1276) = v100;
                          if ( v100 < 0 )
                            goto LABEL_607;
                          LODWORD(v1251) = v1251 + 1;
                          v172 = (int *)pcchLength;
                        }
                        while ( (unsigned int)v1251 < v174 );
                        v1258 = (size_t)v102;
                        *(_QWORD *)&v1249[1] = v104;
                        v164 = 4LL;
                      }
                      v100 = RtlULongLongAdd((unsigned __int64)v172, v164, (__int64 *)&v1270[1]);
                      LODWORD(v1276) = v100;
                      if ( v100 < 0 )
                        goto LABEL_162;
                      if ( v175 + 2 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                      {
                        *v175 = v171;
                        *(_DWORD *)v1270[1] = v171;
                        ++LODWORD(lpMem[0]);
LABEL_246:
                        LODWORD(v1251) = 0;
                        v100 = RtlUIntAdd(v171, v171, (int *)&v1251);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_607;
                        v1249[0] = 0;
                        v100 = RtlUIntAdd(v176, 8, v1249);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_607;
                        v100 = RtlUIntAdd(v177, v1249[0], (int *)&v1251);
                        LODWORD(v1276) = v100;
                        if ( v100 < 0 )
                          goto LABEL_258;
                        v1249[0] = 0;
                        v100 = RtlUIntAdd(v178, v178, v1249);
                        LODWORD(v1276) = v100;
                        if ( v100 >= 0 )
                        {
                          v100 = RtlUIntAdd(v1251, v1249[0], (int *)&v1251);
                          LODWORD(v1276) = v100;
                          if ( v100 < 0 )
                            goto LABEL_258;
                          v1249[0] = 0;
                          v100 = RtlUIntAdd(v179, v179, v1249);
                          LODWORD(v1276) = v100;
                          if ( v100 >= 0 )
                          {
                            v100 = RtlUIntAdd(v1251, v1249[0], (int *)&v1251);
                            LODWORD(v1276) = v100;
                            if ( v100 < 0 )
                              goto LABEL_258;
                            v1249[0] = 0;
                            v100 = RtlUIntAdd(v180, v180, v1249);
                            LODWORD(v1276) = v100;
                            if ( v100 >= 0 )
                            {
                              v100 = RtlUIntAdd(v1251, v1249[0], (int *)&v1251);
                              LODWORD(v1276) = v100;
                              if ( v100 < 0 )
                                goto LABEL_258;
                              v1249[0] = 0;
                              v100 = RtlUIntAdd(v181, v181, v1249);
                              LODWORD(v1276) = v100;
                              if ( v100 >= 0 )
                              {
                                v100 = RtlUIntAdd(v1251, v1249[0], (int *)&v1251);
                                LODWORD(v1276) = v100;
                                if ( v100 >= 0 )
                                {
                                  LODWORD(v1269) = v1251;
                                  v182 = 0LL;
                                  pcchLength = 0LL;
                                  v1264 = 0LL;
                                  v1273 = 0LL;
                                  v1249[0] = 0;
                                  v1262 = 0LL;
                                  v1268 = 0LL;
                                  v1265 = 0LL;
                                  v1276 = __rdtsc();
                                  v1285 = 8;
                                  v184 = RtlUIntAdd(8u, SHIDWORD(lpMem[0]), (int *)&v1285);
                                  if ( v184 >= 0 )
                                  {
                                    v185 = (v1285 + 7) & 0xFFFFFFF8;
                                    if ( v185 < v1285 )
                                    {
                                      v100 = -805306219;
                                      goto LABEL_606;
                                    }
                                    v1285 = (v1285 + 7) & 0xFFFFFFF8;
                                    v186 = v185;
                                    v187 = GetProcessHeap();
                                    v188 = (unsigned __int16 *)HeapAlloc(v187, 8u, v186);
                                    v182 = v188;
                                    if ( !v188 )
                                    {
                                      v100 = -805306345;
                                      LODWORD(v1276) = -805306345;
LABEL_380:
                                      v110 = v98;
                                      if ( v100 < 0 )
                                        goto LABEL_136;
                                      if ( !(_DWORD)v1277 )
                                      {
                                        v100 = -1073425151;
                                        goto LABEL_135;
                                      }
                                      if ( !lpModuleName )
                                      {
                                        v100 = -1073741811;
                                        goto LABEL_135;
                                      }
                                      v1256 = (LPVOID)lpModuleName;
                                      v100 = RtlULongLongAdd((unsigned __int64)lpModuleName, 4LL, (__int64 *)&v1256);
                                      LODWORD(v1276) = v100;
                                      if ( v100 < 0 )
                                        goto LABEL_561;
                                      v441 = (int *)v1256;
                                      if ( !*(_DWORD *)v439 )
                                        v441 = 0LL;
                                      if ( *(_DWORD *)v439 != v440 )
                                      {
                                        v100 = -1073741789;
                                        LODWORD(v1276) = -1073741789;
LABEL_561:
                                        v110 = v98;
                                        lpModuleName = v439;
                                        goto LABEL_136;
                                      }
                                      v100 = *v441;
                                      LODWORD(v1276) = v100;
                                      if ( v100 == -805306333 )
                                      {
                                        LODWORD(v1251) = -2147024774;
LABEL_566:
                                        lpModuleName = v439;
                                        if ( (_DWORD)v1277 == 6 )
                                        {
                                          v1256 = v439;
                                          v442 = 4LL;
                                          while ( 1 )
                                          {
                                            v100 = RtlULongLongAdd((unsigned __int64)v439, v442, (__int64 *)&v1256);
                                            LODWORD(v1276) = v100;
                                            if ( v100 < 0 )
                                              goto LABEL_162;
                                            v100 = RtlULongLongAdd((unsigned __int64)v1256, v443, (__int64 *)&v1256);
                                            LODWORD(v1276) = v100;
                                            if ( v100 < 0 )
                                              goto LABEL_162;
                                            v439 = (WCHAR *)v1256;
                                            if ( v444 != -1 )
                                            {
                                              v100 = RtlULongLongAdd((unsigned __int64)v1256, v442, (__int64 *)&v1256);
                                              LODWORD(v1276) = v100;
                                              if ( v100 < 0 )
                                                goto LABEL_162;
                                              v446 = (size_t *)v1256;
                                              if ( !v445 )
                                                v446 = 0LL;
                                              if ( v445 == 8 )
                                              {
                                                v447 = (void *)lpModuleName;
                                                v1256 = (LPVOID)lpModuleName;
                                                v1254 = *v446;
                                                while ( 1 )
                                                {
                                                  v100 = RtlULongLongAdd((unsigned __int64)v447, 4LL, (__int64 *)&v1256);
                                                  LODWORD(v1276) = v100;
                                                  if ( v100 < 0 )
                                                    goto LABEL_162;
                                                  v100 = RtlULongLongAdd(
                                                           (unsigned __int64)v1256,
                                                           v448,
                                                           (__int64 *)&v1256);
                                                  LODWORD(v1276) = v100;
                                                  if ( v100 < 0 )
                                                    goto LABEL_162;
                                                  v447 = v1256;
                                                  if ( (unsigned int)(v449 + 1) >= 2 )
                                                  {
                                                    v100 = RtlULongLongAdd(
                                                             (unsigned __int64)v1256,
                                                             4LL,
                                                             (__int64 *)&v1256);
                                                    LODWORD(v1276) = v100;
                                                    if ( v100 < 0 )
                                                      goto LABEL_162;
                                                    v452 = (int *)v1256;
                                                    if ( !v450 )
                                                      v452 = 0LL;
                                                    if ( v450 == 4 )
                                                    {
                                                      v453 = v451;
                                                      v1256 = v451;
                                                      v1249[0] = *v452;
                                                      v454 = 4LL;
                                                      while ( 1 )
                                                      {
                                                        v100 = RtlULongLongAdd(
                                                                 (unsigned __int64)v453,
                                                                 v454,
                                                                 (__int64 *)&v1256);
                                                        LODWORD(v1276) = v100;
                                                        if ( v100 < 0 )
                                                          goto LABEL_162;
                                                        v100 = RtlULongLongAdd(
                                                                 (unsigned __int64)v1256,
                                                                 v455,
                                                                 (__int64 *)&v1256);
                                                        LODWORD(v1276) = v100;
                                                        if ( v100 < 0 )
                                                          goto LABEL_162;
                                                        v453 = v1256;
                                                        if ( (unsigned int)(v456 + 1) >= 3 )
                                                        {
                                                          v100 = RtlULongLongAdd(
                                                                   (unsigned __int64)v1256,
                                                                   v454,
                                                                   (__int64 *)&v1256);
                                                          LODWORD(v1276) = v100;
                                                          if ( v100 < 0 )
                                                            goto LABEL_162;
                                                          v457 = (unsigned int *)lpModuleName;
                                                          v1256 = (LPVOID)lpModuleName;
                                                          while ( 1 )
                                                          {
                                                            v458 = *v457;
                                                            v100 = RtlULongLongAdd(
                                                                     (unsigned __int64)v457,
                                                                     4LL,
                                                                     (__int64 *)&v1256);
                                                            LODWORD(v1276) = v100;
                                                            if ( v100 < 0 )
                                                              goto LABEL_607;
                                                            v100 = RtlULongLongAdd(
                                                                     (unsigned __int64)v1256,
                                                                     v458,
                                                                     (__int64 *)&v1256);
                                                            LODWORD(v1276) = v100;
                                                            if ( v100 < 0 )
                                                              goto LABEL_162;
                                                            v457 = (unsigned int *)v1256;
                                                            if ( (unsigned int)(v459 + 1) >= 4 )
                                                            {
                                                              v100 = RtlULongLongAdd(
                                                                       (unsigned __int64)v1256,
                                                                       4LL,
                                                                       (__int64 *)&v1256);
                                                              LODWORD(v1276) = v100;
                                                              if ( v100 < 0 )
                                                                goto LABEL_162;
                                                              v461 = v1256;
                                                              if ( !v460 )
                                                                v461 = 0LL;
                                                              if ( v460 == 4 )
                                                              {
                                                                v462 = (unsigned int *)lpModuleName;
                                                                v1256 = (LPVOID)lpModuleName;
                                                                LODWORD(dwBytes) = *v461;
                                                                while ( 1 )
                                                                {
                                                                  v463 = *v462;
                                                                  v100 = RtlULongLongAdd(
                                                                           (unsigned __int64)v462,
                                                                           4LL,
                                                                           (__int64 *)&v1256);
                                                                  LODWORD(v1276) = v100;
                                                                  if ( v100 < 0 )
                                                                    goto LABEL_607;
                                                                  v100 = RtlULongLongAdd(
                                                                           (unsigned __int64)v1256,
                                                                           v463,
                                                                           (__int64 *)&v1256);
                                                                  LODWORD(v1276) = v100;
                                                                  if ( v100 < 0 )
                                                                    goto LABEL_607;
                                                                  v462 = (unsigned int *)v1256;
                                                                  if ( (unsigned int)(v464 + 1) >= 5 )
                                                                  {
                                                                    v100 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1256,
                                                                             4LL,
                                                                             (__int64 *)&v1256);
                                                                    LODWORD(v1276) = v100;
                                                                    if ( v100 < 0 )
                                                                      goto LABEL_606;
                                                                    v468 = (int *)v1256;
                                                                    if ( !v465 )
                                                                      v468 = 0LL;
                                                                    if ( v465 != 4 )
                                                                    {
                                                                      v100 = -1073741789;
                                                                      goto LABEL_606;
                                                                    }
                                                                    v110 = *v468;
                                                                    if ( v1267 != v1254 )
                                                                      goto LABEL_567;
                                                                    v1293 = v1249[0];
                                                                    if ( (unsigned int)dwBytes > 4
                                                                      || (unsigned int)v466 > 4 )
                                                                    {
                                                                      v100 = -2147024774;
                                                                      goto LABEL_135;
                                                                    }
                                                                    memcpy_0(Ptr, v467, v466);
                                                                    if ( (_DWORD)v1251 )
                                                                    {
                                                                      v100 = v1251;
                                                                      LODWORD(v1276) = v1251;
                                                                    }
                                                                    goto LABEL_136;
                                                                  }
                                                                }
                                                              }
                                                              goto LABEL_160;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    goto LABEL_160;
                                                  }
                                                }
                                              }
                                              goto LABEL_160;
                                            }
                                          }
                                        }
LABEL_567:
                                        v100 = -1073425151;
                                        goto LABEL_161;
                                      }
                                      LODWORD(v1251) = v100;
                                      if ( v100 == -2147024774 )
                                        goto LABEL_566;
                                      v110 = v98;
                                      LODWORD(v1251) = v100;
                                      lpModuleName = v439;
                                      if ( v100 >= 0 )
                                        goto LABEL_566;
                                      goto LABEL_136;
                                    }
                                    dwBytes = (SIZE_T)v188;
                                    *(_DWORD *)v188 = lpMem[0];
                                    v184 = RtlULongLongAdd((unsigned __int64)v188, 4LL, (__int64 *)&dwBytes);
                                    v1260 = v190;
                                    if ( v184 < 0
                                      || (v191 = dwBytes,
                                          *(_DWORD *)dwBytes = HIDWORD(lpMem[0]),
                                          v184 = RtlULongLongAdd(v191, v189, (__int64 *)&dwBytes),
                                          v1260 = v182,
                                          v184 < 0) )
                                    {
                                      v192 = GetProcessHeap();
                                      HeapFree(v192, 0, v1260);
                                      v182 = (unsigned __int16 *)pcchLength;
                                      v183 = pcchLength;
                                    }
                                    else
                                    {
                                      *(_QWORD *)((char *)v182 + v1285 - 8) = v1276;
                                      memcpy_0((void *)dwBytes, lpMem[1], HIDWORD(lpMem[0]));
                                      pcchLength = (size_t)v182;
                                      v183 = v1285;
                                    }
                                  }
                                  v100 = v184 | 0x10000000;
                                  LODWORD(v1276) = v100;
                                  if ( v100 < 0 )
                                  {
LABEL_356:
                                    if ( !v182 )
                                    {
LABEL_358:
                                      v291 = v1264;
                                      if ( v1264 )
                                      {
                                        v1256 = (LPVOID)*((_QWORD *)v1264 + 1);
                                        if ( v1256 )
                                        {
                                          v292 = GetProcessHeap();
                                          HeapFree(v292, 0, v1256);
                                          *((_QWORD *)v291 + 1) = 0LL;
                                        }
                                        v1256 = (LPVOID)*((_QWORD *)v291 + 3);
                                        if ( v1256 )
                                        {
                                          v293 = GetProcessHeap();
                                          HeapFree(v293, 0, v1256);
                                          *((_QWORD *)v291 + 3) = 0LL;
                                        }
                                        v1256 = (LPVOID)*((_QWORD *)v291 + 5);
                                        if ( v1256 )
                                        {
                                          v294 = GetProcessHeap();
                                          HeapFree(v294, 0, v1256);
                                          *((_QWORD *)v291 + 5) = 0LL;
                                        }
                                        v295 = GetProcessHeap();
                                        HeapFree(v295, 0, v291);
                                      }
                                      v296 = (void *)v1273;
                                      if ( v1273 )
                                      {
                                        v297 = GetProcessHeap();
                                        HeapFree(v297, 0, v296);
                                      }
                                      v298 = v1262;
                                      if ( v1262 )
                                      {
                                        v299 = GetProcessHeap();
                                        HeapFree(v299, 0, v298);
                                      }
                                      v300 = v1268;
                                      if ( v1268 )
                                      {
                                        v1256 = (LPVOID)*((_QWORD *)v1268 + 1);
                                        if ( v1256 )
                                        {
                                          v301 = GetProcessHeap();
                                          HeapFree(v301, 0, v1256);
                                          *((_QWORD *)v300 + 1) = 0LL;
                                        }
                                        v1256 = (LPVOID)*((_QWORD *)v300 + 3);
                                        if ( v1256 )
                                        {
                                          v302 = GetProcessHeap();
                                          HeapFree(v302, 0, v1256);
                                          *((_QWORD *)v300 + 3) = 0LL;
                                        }
                                        v1256 = (LPVOID)*((_QWORD *)v300 + 5);
                                        if ( v1256 )
                                        {
                                          v303 = GetProcessHeap();
                                          HeapFree(v303, 0, v1256);
                                          *((_QWORD *)v300 + 5) = 0LL;
                                        }
                                        v304 = GetProcessHeap();
                                        HeapFree(v304, 0, v300);
                                      }
                                      v305 = v1265;
                                      if ( v1265 )
                                      {
                                        v306 = GetProcessHeap();
                                        HeapFree(v306, 0, v305);
                                      }
                                      goto LABEL_380;
                                    }
LABEL_357:
                                    v290 = GetProcessHeap();
                                    HeapFree(v290, 0, v182);
                                    goto LABEL_358;
                                  }
                                  v1260 = 0LL;
                                  if ( !v182 )
                                  {
                                    v100 = -805306355;
                                    goto LABEL_161;
                                  }
                                  v193 = v183;
                                  v1263 = (LPVOID)v183;
                                  if ( !v183
                                    || (Size = v183 + 8LL, v194 = MemoryAlloc(Size), Src = v194, v195 = 0, !v194) )
                                  {
                                    v100 = -805306367;
                                    LODWORD(v1276) = -805306367;
                                    goto LABEL_357;
                                  }
                                  v1247 = 0;
                                  v196 = 0;
                                  v197 = 0LL;
                                  if ( v193 )
                                  {
                                    do
                                      v195 ^= *((_BYTE *)v182 + v197++);
                                    while ( v197 < v193 );
                                    v1247 = v195;
                                  }
                                  v1271 = (void *)0xC81ECB17B1B54A58LL;
                                  v198 = v182;
                                  v199 = (SIZE_T)v194;
                                  dwBytes = (SIZE_T)v194;
                                  v200 = 0;
                                  v201 = -1;
                                  LODWORD(v1251) = 0;
                                  LODWORD(v1276) = 0;
                                  v202 = (unsigned __int64)v1263;
                                  v203 = (unsigned __int8)v1263 & 7;
                                  if ( ((unsigned __int8)v1263 & 7) != 0 )
                                  {
                                    v204 = 0;
                                    LODWORD(v1251) = 0;
                                    LODWORD(v1276) = 0;
                                    v205 = 56;
                                    do
                                    {
                                      v206 = *(unsigned __int8 *)v198;
                                      if ( v196 >= 4 )
                                      {
                                        v204 |= v206 << v205;
                                        v207 = v1276;
                                      }
                                      else
                                      {
                                        v207 = (v206 << (v205 - 32)) | v1276;
                                        LODWORD(v1276) = v207;
                                      }
                                      v198 = (unsigned __int16 *)((char *)v198 + 1);
                                      ++v196;
                                      v205 -= 8;
                                    }
                                    while ( (int)v196 < v203 );
                                    LODWORD(v1251) = v204;
                                    pcchLength = (size_t)v182;
                                    v1258 = (size_t)v102;
                                    *(_QWORD *)&v1249[1] = v104;
                                    v202 = (unsigned __int64)v1263;
                                    v200 = v207 ^ 0xB17A307A;
                                    v208 = v204 ^ 0x42F6B18D;
                                    v209 = v207 ^ 0xB17A307A;
                                    v210 = v208;
                                    v211 = 0;
                                    if ( ((unsigned __int8)v1263 & 7) != 0 )
                                    {
                                      v212 = (_BYTE *)dwBytes;
                                      do
                                      {
                                        if ( v211 >= 4 )
                                        {
                                          v210 = __ROR4__(v210, 24);
                                          v213 = v210;
                                        }
                                        else
                                        {
                                          v209 = __ROR4__(v209, 24);
                                          v213 = v209;
                                        }
                                        v214 = (SIZE_T)(v212 + 1);
                                        *v212 = v213;
                                        ++v211;
                                        ++v212;
                                      }
                                      while ( (int)v211 < v203 );
                                      v199 = v214;
                                      dwBytes = v214;
                                      v98 = v1274;
                                    }
                                    else
                                    {
                                      v199 = dwBytes;
                                    }
                                    if ( (unsigned int)v203 <= 4 )
                                    {
                                      v201 = 0;
                                      if ( (unsigned int)v203 >= 4 )
                                        goto LABEL_295;
                                      v200 = v200 >> (8 * (4 - v203)) << (8 * (4 - v203));
                                    }
                                    else
                                    {
                                      v201 = v208 >> (8 * (8 - v203)) << (8 * (8 - v203));
                                    }
                                    v199 = dwBytes;
                                  }
LABEL_295:
                                  v1259 = (void *)(v202 >> 3);
                                  if ( v202 >> 3 )
                                  {
                                    v215 = HIDWORD(v1271);
                                    v216 = WORD2(v1271);
                                    v217 = WORD1(v1271);
                                    LODWORD(dwBytes) = WORD1(v1271);
                                    v1254 = v199 + 7;
                                    v218 = (unsigned __int8 *)(v198 + 1);
                                    v219 = (char *)v1259;
                                    v220 = v1251;
                                    v221 = v1276;
                                    do
                                    {
                                      v222 = v218[1] | ((*v218 | ((*(v218 - 1) | (*(v218 - 2) << 8)) << 8)) << 8);
                                      v223 = v218[5] | ((v218[4] | ((v218[3] | (v218[2] << 8)) << 8)) << 8);
                                      v224 = v223 ^ v201;
                                      v1259 = v218 + 8;
                                      v225 = v222 ^ v200 ^ v215 ^ (v224 - 19032);
                                      v226 = v224 ^ (__ROR4__(v225, 7) + v217 * __ROR4__(v225 ^ v215, 15));
                                      v227 = v225 ^ (v216 * __ROR4__(v226 - 1313519016, 9) - __ROR4__(v226, 10));
                                      v228 = v226 ^ (__ROR4__(v227, 27) + HIWORD(v1271) * __ROR4__(v227 ^ v216, 28));
                                      v229 = v227 ^ (HIDWORD(v1271) - (v228 ^ 0xB1B54A58));
                                      v230 = v228 ^ (WORD1(v1271) * (v229 - 19032) - (v229 >> 6));
                                      v231 = v229 ^ (19032 * (v216 ^ __ROR4__(v230, 15)));
                                      v232 = v230 ^ (v216 * (HIWORD(v1271) + __ROR4__(~v231, 3)));
                                      v233 = v231 ^ (v232 - HIDWORD(v1271) - 19032);
                                      v234 = v232 ^ (dwBytes * (v233 ^ HIWORD(v1271))) ^ __ROR4__(v233, 10);
                                      v235 = v233 ^ __ROR4__(v234, 3) ^ (v216 * __ROR4__(v234 ^ 0x4A58, 26));
                                      v236 = v234 ^ (19032 * (__ROR4__(v235, 15) - HIWORD(v1271)));
                                      v237 = v235 ^ (19032 * (v236 ^ HIWORD(v1271))) ^ ((v236 ^ (v236 >> 14)) >> 1) ^ (19032 * ((8 * (v236 - v216)) | ((v236 - v216) >> 29)));
                                      v238 = v236 ^ (WORD1(v1271) * (v237 - v216) - (v237 >> 13));
                                      v239 = v237 ^ __ROR4__(v238, 11) ^ (v216 * __ROR4__(-1313519016 - v238, 9));
                                      v240 = v238 ^ (v239 - HIWORD(v1271) + 1313519016);
                                      v241 = v239 ^ (19032 * (v240 ^ WORD1(v1271)) - __ROR4__(v240, 7));
                                      v242 = v240 ^ (WORD1(v1271) * __ROR4__(HIWORD(v1271) ^ v241, 28)
                                                   - __ROR4__(v241, 16));
                                      v243 = v241 ^ (__ROR4__(v242, 4) + v216 * __ROR4__(-1313519016 - v242, 10));
                                      v244 = v242 ^ __ROR4__(v243, 9) ^ (HIWORD(v1271) * __ROR4__(v243 + 1313519016, 4));
                                      v245 = v243 ^ (19032 * __ROR4__(v244 ^ HIDWORD(v1271), 24) - __ROR4__(v244, 30));
                                      v215 = HIDWORD(v1271);
                                      v246 = v244 ^ (WORD1(v1271) * __ROR4__(HIDWORD(v1271) - v245, 11)
                                                   - __ROR4__(v245, 12));
                                      v247 = v245 ^ (v246 >> 8) ^ (v216 * (v246 ^ WORD1(v1271)));
                                      v200 = v247 ^ v221;
                                      v201 = v246 ^ v247 ^ HIDWORD(v1271) ^ v220 ^ 0xB1B54A58;
                                      v248 = (_BYTE *)v1254;
                                      *(_BYTE *)(v1254 - 4) = v200;
                                      *v248 = v201;
                                      *(v248 - 5) = __ROR4__(v200, 8);
                                      *(v248 - 1) = __ROR4__(v201, 8);
                                      *(v248 - 6) = __ROR4__(v200, 16);
                                      *(v248 - 2) = __ROR4__(v201, 16);
                                      *(v248 - 7) = __ROR4__(v200, 24);
                                      *(v248 - 3) = __ROR4__(v201, 24);
                                      v221 = v222;
                                      v220 = v223;
                                      v1254 = (size_t)(v248 + 8);
                                      --v219;
                                      v218 = (unsigned __int8 *)v1259;
                                      v217 = WORD1(v1271);
                                    }
                                    while ( v219 );
                                    v195 = v1247;
                                    v104 = *(_OWORD **)&v1249[1];
                                    v102 = (void *)v1258;
                                    v98 = v1274;
                                    v202 = (unsigned __int64)v1263;
                                  }
                                  v249 = Src;
                                  *(_QWORD *)((char *)Src + v202) = v195;
                                  v250 = GetProcessHeap();
                                  v251 = (unsigned int *)HeapAlloc(v250, 8u, 0x30uLL);
                                  if ( v251 )
                                  {
                                    *v251 = Size;
                                    v252 = GetProcessHeap();
                                    v253 = HeapAlloc(v252, 8u, (unsigned int)Size);
                                    if ( v253 )
                                    {
                                      *((_QWORD *)v251 + 1) = v253;
                                      memcpy_0(v253, v249, (unsigned int)Size);
                                      v251[4] = 160;
                                      v254 = GetProcessHeap();
                                      v255 = HeapAlloc(v254, 8u, 0xA0uLL);
                                      if ( v255 )
                                      {
                                        *((_QWORD *)v251 + 3) = v255;
                                        *v255 = xmmword_1808D85F0[0];
                                        v255[1] = xmmword_1808D85F0[1];
                                        v255[2] = xmmword_1808D85F0[2];
                                        v255[3] = xmmword_1808D85F0[3];
                                        v255[4] = xmmword_1808D85F0[4];
                                        v255[5] = xmmword_1808D85F0[5];
                                        v255[6] = xmmword_1808D85F0[6];
                                        v255[7] = xmmword_1808D85F0[7];
                                        v255[8] = xmmword_1808D85F0[8];
                                        v2 = (__m128i)xmmword_1808D85F0[9];
                                        v255[9] = v2;
                                        v251[8] = 8;
                                        v256 = GetProcessHeap();
                                        v257 = HeapAlloc(v256, 8u, 8uLL);
                                        if ( v257 )
                                        {
                                          *((_QWORD *)v251 + 5) = v257;
                                          *v257 = qword_1808D85E0;
                                          v258 = 0;
                                          v1260 = 0LL;
LABEL_313:
                                          v1254 = (size_t)v104;
                                          v263 = v102;
                                          v1259 = v102;
                                          v1271 = (void *)pcchLength;
                                          v1264 = v251;
                                          v264 = GetProcessHeap();
                                          HeapFree(v264, 0, Src);
                                          v265 = v1260;
                                          if ( v1260 )
                                          {
                                            Src = (void *)*((_QWORD *)v1260 + 1);
                                            if ( Src )
                                            {
                                              v266 = GetProcessHeap();
                                              HeapFree(v266, 0, Src);
                                              *((_QWORD *)v265 + 1) = 0LL;
                                            }
                                            Src = (void *)*((_QWORD *)v265 + 3);
                                            if ( Src )
                                            {
                                              v267 = GetProcessHeap();
                                              HeapFree(v267, 0, Src);
                                              *((_QWORD *)v265 + 3) = 0LL;
                                            }
                                            Src = (void *)*((_QWORD *)v265 + 5);
                                            if ( Src )
                                            {
                                              v268 = GetProcessHeap();
                                              HeapFree(v268, 0, Src);
                                              *((_QWORD *)v265 + 5) = 0LL;
                                            }
                                            v269 = GetProcessHeap();
                                            HeapFree(v269, 0, v265);
                                            v1264 = v251;
                                          }
                                          v100 = v258 | 0x10000000;
                                          LODWORD(v1276) = v100;
                                          v270 = (unsigned __int16 *)v1271;
                                          v102 = v263;
                                          v104 = (_OWORD *)v1254;
                                          if ( v100 < 0 )
                                            goto LABEL_355;
                                          v1284 = 0;
                                          LODWORD(v1251) = 4;
                                          v273 = RtlUIntAdd(4u, *v251, (int *)&v1251);
                                          if ( v273 >= 0 )
                                          {
                                            v273 = RtlUIntAdd(v1251, v271, (int *)&v1251);
                                            if ( v273 >= 0 )
                                            {
                                              v273 = RtlUIntAdd(v1251, v251[4], (int *)&v1251);
                                              if ( v273 >= 0 )
                                              {
                                                v273 = RtlUIntAdd(v1251, v274, (int *)&v1251);
                                                if ( v273 >= 0 )
                                                {
                                                  v273 = RtlUIntAdd(v1251, v251[8], (int *)&v1251);
                                                  if ( v273 >= 0 )
                                                  {
                                                    v1284 = v1251;
                                                    v275 = v1251;
                                                    v276 = GetProcessHeap();
                                                    v277 = HeapAlloc(v276, 8u, v275);
                                                    if ( !v277 )
                                                    {
                                                      v100 = -805306345;
                                                      LODWORD(v1276) = -805306345;
                                                      v182 = (unsigned __int16 *)v1271;
                                                      v102 = v1259;
                                                      v104 = (_OWORD *)v1254;
                                                      goto LABEL_356;
                                                    }
                                                    Src = v277;
                                                    v251 = (unsigned int *)v1264;
                                                    *v277 = *(_DWORD *)v1264;
                                                    v273 = RtlULongLongAdd((unsigned __int64)v277, 4LL, (__int64 *)&Src);
                                                    v279 = v278;
                                                    if ( v273 < 0 )
                                                      goto LABEL_337;
                                                    memcpy_0(Src, *((const void **)v251 + 1), *v251);
                                                    v273 = RtlULongLongAdd(
                                                             (unsigned __int64)Src,
                                                             *v251,
                                                             (__int64 *)&Src);
                                                    if ( v273 < 0 )
                                                      goto LABEL_337;
                                                    v280 = Src;
                                                    *(_DWORD *)Src = v251[4];
                                                    v273 = RtlULongLongAdd((unsigned __int64)v280, 4LL, (__int64 *)&Src);
                                                    if ( v273 < 0
                                                      || (memcpy_0(Src, *((const void **)v251 + 3), v251[4]),
                                                          v273 = RtlULongLongAdd(
                                                                   (unsigned __int64)Src,
                                                                   v251[4],
                                                                   (__int64 *)&Src),
                                                          v273 < 0)
                                                      || (v281 = Src,
                                                          *(_DWORD *)Src = v251[8],
                                                          v273 = RtlULongLongAdd(
                                                                   (unsigned __int64)v281,
                                                                   4LL,
                                                                   (__int64 *)&Src),
                                                          v273 < 0)
                                                      || (memcpy_0(Src, *((const void **)v251 + 5), v251[8]),
                                                          v273 = RtlULongLongAdd(
                                                                   (unsigned __int64)Src,
                                                                   v251[8],
                                                                   (__int64 *)&Src),
                                                          v273 < 0) )
                                                    {
LABEL_337:
                                                      v282 = GetProcessHeap();
                                                      HeapFree(v282, 0, v279);
                                                      v272 = v1254;
                                                    }
                                                    else
                                                    {
                                                      v1273 = (SIZE_T)v279;
                                                      v1249[0] = v1284;
                                                      v272 = v1254;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          v100 = v273 | 0x10000000;
                                          LODWORD(v1276) = v100;
                                          v270 = (unsigned __int16 *)v1271;
                                          v102 = v1259;
                                          v104 = (_OWORD *)v272;
                                          if ( v100 < 0 )
                                            goto LABEL_355;
                                          LODWORD(v1251) = 0;
                                          v1283 = 8;
                                          v283 = RtlUIntAdd(8u, v1269, (int *)&v1283);
                                          v100 = v283 | 0x10000000;
                                          LODWORD(v1276) = v283 | 0x10000000;
                                          pcchLength = v284;
                                          if ( v283 < 0 )
                                          {
LABEL_396:
                                            v182 = (unsigned __int16 *)pcchLength;
                                            goto LABEL_356;
                                          }
                                          v285 = (v1283 + 7) & 0xFFFFFFF8;
                                          if ( v285 < v1283 )
                                          {
                                            v100 = -1073741675;
                                            LODWORD(v1276) = -1073741675;
                                            v182 = (unsigned __int16 *)v284;
                                            goto LABEL_356;
                                          }
                                          v1282 = (v1283 + 7) & 0xFFFFFFF8;
                                          v100 = RtlUIntAdd(v285, 8, (int *)&v1282);
                                          LODWORD(v1276) = v100;
                                          if ( v100 >= 0 )
                                          {
                                            if ( lpMem[1] && LODWORD(lpMem[0]) > 1 )
                                            {
                                              v287 = lpMem[1];
                                              v1254 = (size_t)lpMem[1];
                                              LODWORD(dwBytes) = 0;
                                              pcchLength = (size_t)v1271;
                                              v104 = v286;
                                              do
                                              {
                                                v100 = RtlULongLongAdd((unsigned __int64)v287, 4LL, (__int64 *)&v1254);
                                                LODWORD(v1276) = v100;
                                                if ( v100 < 0 )
                                                  goto LABEL_355;
                                                v100 = RtlULongLongAdd(v1254, v288, (__int64 *)&v1254);
                                                LODWORD(v1276) = v100;
                                                if ( v100 < 0 )
                                                  goto LABEL_355;
                                                LODWORD(dwBytes) = dwBytes + 1;
                                                v287 = (LPVOID)v1254;
                                              }
                                              while ( !(_DWORD)dwBytes );
                                              LODWORD(dwBytes) = *(_DWORD *)v1254;
                                              v100 = RtlULongLongAdd(v1254, 4LL, (__int64 *)&v1254);
                                              LODWORD(v1276) = v100;
                                              if ( v100 < 0 )
                                                goto LABEL_355;
                                              if ( LODWORD(lpMem[0]) <= 2 )
                                              {
                                                v100 = -1073741811;
                                                LODWORD(v1276) = -1073741811;
LABEL_355:
                                                v182 = v270;
                                                goto LABEL_356;
                                              }
                                              v307 = lpMem[1];
                                              v1254 = (size_t)lpMem[1];
                                              do
                                              {
                                                v1259 = v289;
                                                v1271 = v104;
                                                Src = v102;
                                                Size = (SIZE_T)v270;
                                                v1263 = v251;
                                                LODWORD(v1269) = *v307;
                                                v100 = RtlULongLongAdd((unsigned __int64)v307, 4LL, (__int64 *)&v1254);
                                                LODWORD(v1276) = v100;
                                                if ( v100 < 0 )
                                                  goto LABEL_355;
                                                v100 = RtlULongLongAdd(v1254, (unsigned int)v1269, (__int64 *)&v1254);
                                                LODWORD(v1276) = v100;
                                                if ( v100 < 0 )
                                                  goto LABEL_355;
                                                v307 = (_DWORD *)v1254;
                                              }
                                              while ( (unsigned int)(v308 + 1) < 2 );
                                              v100 = RtlULongLongAdd(v1254, 4LL, (__int64 *)&v1254);
                                              LODWORD(v1276) = v100;
                                              if ( v100 < 0 )
                                                goto LABEL_396;
                                              LODWORD(v1269) = v309;
                                              v100 = RtlUIntAdd(v309, v1282, (int *)&v1269);
                                              LODWORD(v1276) = v100;
                                              if ( v100 < 0 )
                                                goto LABEL_396;
                                              v100 = RtlUIntAdd(v1269, v310, (int *)&v1269);
                                              LODWORD(v1276) = v100;
                                              if ( v100 < 0 )
                                                goto LABEL_396;
                                              v100 = RtlUIntAdd(v1269, dwBytes, (int *)&v1269);
                                              LODWORD(v1276) = v100;
                                              if ( v100 < 0 )
                                                goto LABEL_396;
                                              v100 = RtlUIntAdd(v1269, v311, (int *)&v1269);
                                              LODWORD(v1276) = v100;
                                              if ( v100 < 0 )
                                                goto LABEL_396;
                                              v100 = RtlUIntAdd(v1269, v312, (int *)&v1269);
                                              LODWORD(v1276) = v100;
                                              if ( v100 < 0 )
                                                goto LABEL_396;
                                              if ( (unsigned int)v1269 > 0x400000 )
                                              {
                                                v100 = -2147418113;
                                                LODWORD(v1276) = -2147418113;
                                                goto LABEL_396;
                                              }
                                              v313 = v1269;
                                              v314 = GetProcessHeap();
                                              v315 = HeapAlloc(v314, 8u, v313);
                                              v1262 = v315;
                                              if ( !v315 )
                                              {
                                                v1262 = 0LL;
                                                v100 = -805306345;
                                                v316 = v1259;
                                                goto LABEL_400;
                                              }
                                              v1318 = 0LL;
                                              v1319 = 0LL;
                                              phModule = 0LL;
                                              v316 = v1259;
                                              if ( !v1259 )
                                              {
                                                v100 = -2147024809;
LABEL_400:
                                                v104 = v1271;
                                                v182 = (unsigned __int16 *)Size;
                                                v317 = v1263;
LABEL_401:
                                                LODWORD(v1276) = v100;
                                                v1264 = v317;
                                                v1273 = (SIZE_T)v316;
                                                goto LABEL_356;
                                              }
                                              *(_QWORD *)&v1318 = v1259;
                                              LODWORD(v1319) = v1249[0];
                                              *((_QWORD *)&v1318 + 1) = v315;
                                              *(_QWORD *)((char *)&v1319 + 4) = v313;
                                              if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                                && (v319 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                              {
                                                v320 = ((__int64 (__fastcall *)(__int64, __int128 *))v319)(
                                                         134LL,
                                                         &v1318);
                                                v100 = v320 | 0x10000000;
                                                LODWORD(v1276) = v320 | 0x10000000;
                                                LODWORD(v1251) = v313;
                                                if ( v320 >= 0 )
                                                {
                                                  v321 = DWORD1(v1319);
                                                  v322 = v1259;
                                                  v323 = v1263;
                                                  v324 = Size;
                                                  v325 = v102;
                                                  v326 = v1271;
                                                  goto LABEL_415;
                                                }
                                              }
                                              else
                                              {
                                                v318 = GetLastError();
                                                LODWORD(v1276) = v318;
                                                v100 = v318;
                                                if ( v318 > 0 )
                                                {
                                                  v100 = (unsigned __int16)v318 | 0x80070000;
                                                  LODWORD(v1276) = v100;
                                                }
                                                LODWORD(v1251) = v313;
                                                if ( v100 >= 0 )
                                                {
                                                  v100 = -2147467259;
                                                  LODWORD(v1276) = -2147467259;
                                                  LODWORD(v1251) = v313;
                                                }
                                              }
                                              if ( v100 == -805306333 )
                                              {
                                                v100 = -2147024774;
                                                goto LABEL_409;
                                              }
                                              v323 = v1263;
                                              v1264 = v1263;
                                              v324 = Size;
                                              v182 = (unsigned __int16 *)Size;
                                              v325 = v102;
                                              v326 = v1271;
                                              v104 = v1271;
                                              v322 = v1259;
                                              v1273 = (SIZE_T)v1259;
                                              if ( v100 < 0 )
                                                goto LABEL_356;
                                              v321 = v1251;
LABEL_415:
                                              v327 = 0LL;
                                              LODWORD(v1251) = 0;
                                              v1254 = (size_t)v1262;
                                              if ( v321 < 4 )
                                              {
                                                v102 = v325;
                                                v104 = v326;
LABEL_417:
                                                v100 = -805306306;
                                                v182 = (unsigned __int16 *)v324;
                                                v1264 = v323;
                                                LODWORD(v1276) = -805306306;
                                                v1273 = (SIZE_T)v322;
                                                goto LABEL_356;
                                              }
                                              v328 = *(unsigned int *)v1262;
                                              LODWORD(v1276) = *(_DWORD *)v1262;
                                              v329 = RtlULongLongAdd((unsigned __int64)v1262, 4LL, (__int64 *)&v1254);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              v329 = RtlUIntAdd(0, 4, (int *)&v1251);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              if ( v321 - (unsigned int)v1251 < (unsigned int)v328 )
                                              {
LABEL_421:
                                                v102 = Src;
                                                v104 = v1271;
                                                goto LABEL_417;
                                              }
                                              v1260 = (unsigned __int16 *)v1254;
                                              v329 = RtlULongLongAdd(v1254, v328, (__int64 *)&v1254);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              v329 = RtlUIntAdd(v1251, v328, (int *)&v1251);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              if ( v321 - (unsigned int)v1251 < 4 )
                                                goto LABEL_421;
                                              v330 = *(unsigned int *)v1254;
                                              v329 = RtlULongLongAdd(v1254, 4LL, (__int64 *)&v1254);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              v329 = RtlUIntAdd(v1251, 4, (int *)&v1251);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              if ( v321 - (unsigned int)v1251 < (unsigned int)v330 )
                                                goto LABEL_421;
                                              *(_QWORD *)&v1249[1] = v1254;
                                              v329 = RtlULongLongAdd(v1254, (unsigned int)v330, (__int64 *)&v1254);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              v329 = RtlUIntAdd(v1251, v330, (int *)&v1251);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              if ( v321 - (unsigned int)v1251 < 4 )
                                                goto LABEL_421;
                                              v1249[0] = *(_DWORD *)v1254;
                                              v329 = RtlULongLongAdd(v1254, 4LL, (__int64 *)&v1254);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              v329 = RtlUIntAdd(v1251, 4, (int *)&v1251);
                                              if ( v329 < 0 )
                                                goto LABEL_460;
                                              if ( v321 - (unsigned int)v1251 < v1249[0] )
                                                goto LABEL_421;
                                              v329 = RtlUIntAdd(v1251, v1249[0], (int *)&v1251);
                                              if ( v329 < 0 )
                                              {
LABEL_460:
                                                v100 = v329 | 0x10000000;
                                                LODWORD(v1276) = v100;
                                                v317 = v1263;
                                                v1264 = v1263;
                                                v182 = (unsigned __int16 *)Size;
                                                v102 = Src;
                                                v104 = v1271;
                                                v316 = v1259;
                                                v1273 = (SIZE_T)v1259;
                                                if ( v100 < 0 )
                                                  goto LABEL_356;
                                                v352 = v1268;
                                                if ( !v1268
                                                  || (v1254 = *((_QWORD *)v1268 + 1)) == 0
                                                  || !*(_DWORD *)v1268 )
                                                {
                                                  v100 = -805306355;
                                                  v182 = (unsigned __int16 *)Size;
                                                  goto LABEL_401;
                                                }
                                                v1260 = (unsigned __int16 *)(*(unsigned int *)v1268 - 8LL);
                                                v360 = (unsigned __int16 *)MemoryAlloc((SIZE_T)v1260);
                                                v1265 = v360;
                                                v361 = v1263;
                                                v1264 = v1263;
                                                v362 = Size;
                                                v182 = (unsigned __int16 *)Size;
                                                v363 = (size_t)v102;
                                                v364 = v1259;
                                                v1273 = (SIZE_T)v1259;
                                                v365 = 0;
                                                if ( !v360 )
                                                  goto LABEL_503;
                                                v1259 = (void *)0x7F1137FAB69605ELL;
                                                Src = (void *)v1254;
                                                Size = (SIZE_T)v360;
                                                v1263 = (LPVOID)((unsigned __int8)v1260 & 7);
                                                LODWORD(v1276) = 0;
                                                v1249[0] = 0;
                                                v1264 = v361;
                                                v366 = (void *)v362;
                                                pcchLength = v362;
                                                *(_QWORD *)&v1249[1] = v104;
                                                v1273 = (SIZE_T)v364;
                                                if ( ((unsigned __int8)v1260 & 7) != 0 )
                                                {
                                                  LODWORD(v1251) = 0;
                                                  v367 = v361;
                                                  v1258 = (size_t)v102;
                                                  if ( (_DWORD)v1263 )
                                                  {
                                                    v368 = 56;
                                                    v1273 = (SIZE_T)v364;
                                                    v369 = v104;
                                                    v370 = (unsigned __int8 *)Src;
                                                    v371 = v1249[0];
                                                    do
                                                    {
                                                      v104 = v369;
                                                      *(_QWORD *)&v1249[1] = v369;
                                                      v102 = (void *)v363;
                                                      v1258 = v363;
                                                      pcchLength = v362;
                                                      v1264 = v361;
                                                      v372 = *v370;
                                                      if ( (unsigned int)v371 >= 4 )
                                                        LODWORD(v1251) = (v372 << v368) | v1251;
                                                      else
                                                        LODWORD(v1276) = (v372 << (v368 - 32)) | v1276;
                                                      ++v370;
                                                      ++v371;
                                                      v368 -= 8;
                                                      v369 = v104;
                                                    }
                                                    while ( v371 < (int)v1263 );
                                                    Src = v370;
                                                    v1268 = v352;
                                                    v365 = 0;
                                                    v98 = v1274;
                                                    v367 = v361;
                                                    v366 = (void *)v362;
                                                    v360 = v1265;
                                                  }
                                                  v373 = v1276 ^ 0x92F65A5;
                                                  v374 = v1251 ^ 0x699A899C;
                                                  v375 = v1276 ^ 0x92F65A5;
                                                  v1249[0] = 0;
                                                  v376 = (unsigned int)v1263;
                                                  if ( (_DWORD)v1263 )
                                                  {
                                                    v377 = v1251 ^ 0x699A899C;
                                                    v378 = v360;
                                                    do
                                                    {
                                                      if ( v1249[0] >= 4u )
                                                      {
                                                        v377 = __ROR4__(v377, 24);
                                                        v379 = v377;
                                                      }
                                                      else
                                                      {
                                                        v375 = __ROR4__(v375, 24);
                                                        v379 = v375;
                                                      }
                                                      v380 = (SIZE_T)v378 + 1;
                                                      *(_BYTE *)v378 = v379;
                                                      ++v1249[0];
                                                      v378 = (unsigned __int16 *)((char *)v378 + 1);
                                                    }
                                                    while ( v1249[0] < (int)v376 );
                                                    Size = v380;
                                                    v98 = v1274;
                                                    v352 = v1268;
                                                  }
                                                  if ( v376 <= 4 )
                                                  {
                                                    v381 = 0;
                                                    if ( v376 < 4 )
                                                      v373 = v373 >> (8 * (4 - v376)) << (8 * (4 - v376));
                                                  }
                                                  else
                                                  {
                                                    v381 = v374 >> (8 * (8 - v376)) << (8 * (8 - v376));
                                                  }
                                                }
                                                else
                                                {
                                                  LODWORD(v1251) = -1;
                                                  LODWORD(dwBytes) = 0;
                                                  v367 = v361;
                                                  v1258 = (size_t)v102;
                                                  v373 = 0;
                                                  v381 = v1249[0];
                                                }
                                                v1271 = (void *)((unsigned __int64)v1260 >> 3);
                                                if ( (unsigned __int64)v1260 >> 3 )
                                                {
                                                  v382 = HIDWORD(v1259);
                                                  v383 = WORD2(v1259);
                                                  v1249[0] = WORD2(v1259);
                                                  v384 = HIDWORD(v1259) ^ 0xAB69605E;
                                                  LODWORD(dwBytes) = 24670;
                                                  LODWORD(v1269) = HIDWORD(v1259) ^ 0xAB69605E;
                                                  Size += 7LL;
                                                  v385 = (unsigned __int8 *)Src + 2;
                                                  v386 = (char *)v1271;
                                                  v387 = v1251;
                                                  v388 = v1276;
                                                  do
                                                  {
                                                    v389 = v385[1] | ((*v385 | ((*(v385 - 1) | (*(v385 - 2) << 8)) << 8)) << 8);
                                                    v390 = v385[5] | ((v385[4] | ((v385[3] | (v385[2] << 8)) << 8)) << 8);
                                                    v1271 = v385 + 8;
                                                    v391 = v384 ^ v373 ^ v389 ^ v381 ^ v390;
                                                    v392 = v373 ^ v389 ^ (__ROR4__(v391, 22)
                                                                        + v383 * __ROR4__(v391 + 1419157410, 27));
                                                    v393 = v391 ^ (WORD1(v1259) * __ROR4__(v382 + v392, 9)
                                                                 - __ROR4__(v392, 30));
                                                    v394 = v392 ^ (dwBytes * (v393 - v383) - (v393 >> 13));
                                                    v395 = v393 ^ (HIWORD(v1259) * __ROR4__(v394 ^ WORD1(v1259), 26)
                                                                 - __ROR4__(v394, 30));
                                                    v396 = v394 ^ (v382 - (v395 ^ 0xAB69605E));
                                                    v397 = v395 ^ (WORD1(v1259) * (v383 ^ v396)) ^ __ROR4__(v396, 6);
                                                    v398 = v396 ^ (__ROR4__(v397, 30)
                                                                 + dwBytes * __ROR4__(v382 + v397, 15));
                                                    v399 = v397 ^ (HIWORD(v1259) * __ROR4__(v398 + 1419157410, 14)
                                                                 - __ROR4__(v398, 24));
                                                    v400 = v398 ^ __ROR4__(v399, 10) ^ (v1249[0]
                                                                                      * __ROR4__(v399 ^ 0xAB69605E, 12));
                                                    v401 = v400 ^ (HIWORD(v1259)
                                                                 * (dwBytes
                                                                  + __ROR4__(
                                                                      ~(v399 ^ (v400 >> 10) ^ (WORD1(v1259)
                                                                                             * (v400 ^ HIWORD(v1259)))),
                                                                      5)));
                                                    v402 = v399 ^ (v400 >> 10) ^ (WORD1(v1259) * (v400 ^ HIWORD(v1259))) ^ (v401 - HIWORD(v1259)) ^ 0xAB69605E;
                                                    v403 = v401 ^ ((v402 >> 2)
                                                                 + v1249[0] * __ROR4__(HIWORD(v1259) ^ v402, 30));
                                                    v404 = v402 ^ (__ROR4__(v403, 25)
                                                                 + WORD1(v1259) * __ROR4__(v403 - v382, 6));
                                                    v405 = v403 ^ (dwBytes * (v1249[0] ^ v404) + __ROR4__(v404, 9));
                                                    v406 = v404 ^ (__ROR4__(v405, 25)
                                                                 + HIWORD(v1259) * __ROR4__(WORD1(v1259) ^ v405, 27));
                                                    v407 = v1269 ^ v405 ^ v406;
                                                    v408 = v406 ^ (v1249[0] * (__ROR4__(v407, 3) - WORD1(v1259)));
                                                    v409 = v407 ^ (dwBytes * __ROR4__(v408 - v382, 1) - __ROR4__(v408, 6));
                                                    v410 = v408 ^ (__ROR4__(v409, 18)
                                                                 + HIWORD(v1259) * __ROR4__(v409 - 1419157410, 29));
                                                    v411 = v409 ^ (v1249[0] * __ROR4__(v410 - 1419157410, 17)
                                                                 - __ROR4__(v410, 14));
                                                    v412 = v410 ^ (v411 >> 3) ^ (WORD1(v1259) * (dwBytes ^ v411));
                                                    v373 = v388 ^ v411 ^ __ROR4__(v412, 30) ^ (dwBytes
                                                                                             * __ROR4__(v412 ^ v382, 28));
                                                    v381 = v387 ^ v412;
                                                    v413 = (_BYTE *)Size;
                                                    *(_BYTE *)(Size - 4) = v373;
                                                    *v413 = v381;
                                                    *(v413 - 5) = __ROR4__(v373, 8);
                                                    *(v413 - 1) = __ROR4__(v381, 8);
                                                    *(v413 - 6) = __ROR4__(v373, 16);
                                                    *(v413 - 2) = __ROR4__(v381, 16);
                                                    *(v413 - 7) = __ROR4__(v373, 24);
                                                    *(v413 - 3) = __ROR4__(v381, 24);
                                                    v388 = v389;
                                                    v387 = v390;
                                                    Size = (SIZE_T)(v413 + 8);
                                                    --v386;
                                                    v385 = (unsigned __int8 *)v1271;
                                                    v383 = v1249[0];
                                                  }
                                                  while ( v386 );
                                                  v365 = 0;
                                                  v104 = *(_OWORD **)&v1249[1];
                                                  v102 = (void *)v1258;
                                                  v98 = v1274;
                                                  v367 = v1264;
                                                  v366 = (void *)pcchLength;
                                                  v352 = v1268;
                                                  v360 = v1265;
                                                }
                                                v414 = 0LL;
                                                if ( v1260 )
                                                {
                                                  do
                                                    v365 ^= *((_BYTE *)v360 + v414++);
                                                  while ( v414 < (unsigned __int64)v1260 );
                                                }
                                                v1259 = v1262;
                                                v1271 = v352;
                                                v1268 = v352;
                                                if ( v365 != *(_QWORD *)((char *)v1260 + v1254) )
                                                {
                                                  MemoryFree(v360);
                                                  v182 = (unsigned __int16 *)pcchLength;
LABEL_503:
                                                  v100 = -805306367;
                                                  LODWORD(v1276) = -805306367;
                                                  v1265 = 0LL;
                                                  goto LABEL_356;
                                                }
                                                v415 = v367;
                                                v1254 = (size_t)v367;
                                                v416 = (size_t)v366;
                                                Src = v366;
                                                LODWORD(v1251) = 0;
                                                *(_QWORD *)&v1249[1] = v360;
                                                if ( (unsigned int)v1260 < 4 )
                                                {
                                                  v1268 = v352;
LABEL_548:
                                                  v182 = (unsigned __int16 *)v416;
                                                  goto LABEL_549;
                                                }
                                                LODWORD(v1276) = *(_DWORD *)v360;
                                                v417 = RtlULongLongAdd(
                                                         (unsigned __int64)v360,
                                                         4LL,
                                                         (__int64 *)&v1249[1]);
                                                v1265 = v418;
                                                v1268 = v1271;
                                                v1262 = v1259;
                                                v1264 = v419;
                                                v182 = v420;
                                                if ( v417 < 0 )
                                                  goto LABEL_551;
                                                v417 = RtlUIntAdd(0, 4, (int *)&v1251);
                                                v1265 = v360;
                                                v1268 = v1271;
                                                v1262 = v1259;
                                                v1264 = v415;
                                                if ( v417 < 0 )
                                                  goto LABEL_551;
                                                if ( (unsigned int)((_DWORD)v1260 - v1251) < 4 )
                                                {
                                                  v1268 = v1271;
LABEL_549:
                                                  v1264 = v415;
                                                  v1262 = v1259;
                                                  v1265 = v360;
LABEL_550:
                                                  v417 = -1073741762;
                                                  goto LABEL_551;
                                                }
                                                v1249[0] = **(_DWORD **)&v1249[1];
                                                v417 = RtlULongLongAdd(
                                                         *(unsigned __int64 *)&v1249[1],
                                                         4LL,
                                                         (__int64 *)&v1249[1]);
                                                v1265 = v421;
                                                v1268 = v1271;
                                                v1262 = v1259;
                                                v1264 = v422;
                                                if ( v417 < 0 )
                                                  goto LABEL_551;
                                                v417 = RtlUIntAdd(v1251, 4, (int *)&v1251);
                                                v1265 = v360;
                                                v1268 = v1271;
                                                v1262 = v1259;
                                                v1264 = v415;
                                                if ( v417 < 0 )
                                                  goto LABEL_551;
                                                if ( (unsigned int)((_DWORD)v1260 - v1251) < v1249[0] )
                                                {
                                                  v1268 = v1271;
                                                  goto LABEL_548;
                                                }
                                                v417 = RtlUIntAdd(v1251, v1249[0], (int *)&v1251);
                                                v1265 = v360;
                                                v1268 = v1271;
                                                v1262 = v1259;
                                                v1264 = v415;
                                                v182 = (unsigned __int16 *)v416;
                                                if ( v417 >= 0 )
                                                {
                                                  if ( (unsigned __int64)v360 + (unsigned int)v1260 < (unsigned __int64)(unsigned int)v1249[0] + *(_QWORD *)&v1249[1]
                                                    || (unsigned __int64)v360
                                                     + (unsigned int)v1260
                                                     - (unsigned __int64)(unsigned int)v1249[0]
                                                     - *(_QWORD *)&v1249[1] >= 8 )
                                                  {
                                                    v1268 = v1271;
                                                    goto LABEL_548;
                                                  }
                                                  v1260 = 0LL;
                                                  v1258 = 0LL;
                                                  v1274 = 0LL;
                                                  v1269 = 0LL;
                                                  v417 = 0;
                                                  LODWORD(v1251) = 0;
                                                  v1265 = v360;
                                                  v1268 = v1271;
                                                  v423 = v1259;
                                                  v1262 = v1259;
                                                  v1264 = v415;
                                                  pcchLength = v416;
                                                  if ( !*(_QWORD *)&v1249[1] )
                                                    goto LABEL_534;
                                                  Size = *(_QWORD *)&v1249[1];
                                                  v417 = RtlULongLongAdd(
                                                           *(unsigned __int64 *)&v1249[1],
                                                           (unsigned int)v1249[0],
                                                           (__int64 *)&v1258);
                                                  v1265 = v424;
                                                  v1268 = v1271;
                                                  v1262 = v423;
                                                  v1264 = v425;
                                                  v182 = (unsigned __int16 *)Src;
                                                  if ( v417 >= 0 )
                                                  {
                                                    v1265 = v424;
                                                    v1268 = v1271;
                                                    v1262 = v1259;
                                                    v1264 = v425;
                                                    pcchLength = (size_t)Src;
                                                    v426 = Size;
                                                    if ( Size < v1258 )
                                                    {
                                                      v1265 = v424;
                                                      v1268 = v1271;
                                                      v1262 = v1259;
                                                      v427 = (void *)v1254;
                                                      v1264 = (LPVOID)v1254;
                                                      v428 = Src;
                                                      pcchLength = (size_t)Src;
                                                      while ( 1 )
                                                      {
                                                        v1271 = v428;
                                                        Src = v427;
                                                        v1256 = v1265;
                                                        v417 = RtlULongLongAdd(v426, 4LL, (__int64 *)&v1274);
                                                        v430 = 0;
                                                        if ( v417 < 0 )
                                                          break;
                                                        if ( v1274 > v1258 )
                                                        {
                                                          v417 = -1073741811;
                                                          goto LABEL_530;
                                                        }
                                                        LODWORD(dwBytes) = 0;
                                                        v417 = RtlUIntAdd(4u, *v429, (int *)&dwBytes);
                                                        if ( v417 < 0 )
                                                          goto LABEL_530;
                                                        v417 = RtlULongLongAdd(
                                                                 v431,
                                                                 (unsigned int)dwBytes,
                                                                 (__int64 *)&v1269);
                                                        v1265 = (unsigned __int16 *)v1256;
                                                        v1268 = v432;
                                                        v1262 = v433;
                                                        v1264 = v427;
                                                        v428 = v1271;
                                                        v182 = (unsigned __int16 *)v1271;
                                                        if ( v417 < 0 )
                                                        {
                                                          v430 = 0;
                                                          goto LABEL_544;
                                                        }
                                                        v426 = v1269;
                                                        v434 = v1258;
                                                        v1268 = v432;
                                                        v1262 = v433;
                                                        if ( v1269 > v1258 )
                                                        {
                                                          v417 = -1073741811;
                                                          v1265 = (unsigned __int16 *)v1256;
                                                          v1264 = Src;
                                                          goto LABEL_551;
                                                        }
                                                        LODWORD(v1251) = v1251 + 1;
                                                        v1265 = (unsigned __int16 *)v1256;
                                                        v427 = Src;
                                                        v1264 = Src;
                                                        pcchLength = (size_t)v1271;
                                                        if ( v1269 >= v1258 )
                                                        {
                                                          v1265 = (unsigned __int16 *)v1256;
                                                          v1268 = v432;
                                                          v1262 = v433;
                                                          v1264 = Src;
                                                          v182 = (unsigned __int16 *)v1271;
                                                          pcchLength = (size_t)v1271;
                                                          goto LABEL_532;
                                                        }
                                                      }
LABEL_542:
                                                      v182 = (unsigned __int16 *)pcchLength;
LABEL_544:
                                                      if ( v417 < 0 || (_DWORD)v1276 == v430 )
                                                        goto LABEL_551;
                                                      goto LABEL_550;
                                                    }
                                                    v434 = v1258;
LABEL_532:
                                                    if ( v426 != v434 )
                                                    {
                                                      v417 = -1073741811;
                                                      goto LABEL_551;
                                                    }
LABEL_534:
                                                    v435 = v1249[0];
                                                    if ( v1249[0] )
                                                    {
                                                      v436 = v1249[0];
                                                      v437 = GetProcessHeap();
                                                      v438 = HeapAlloc(v437, 8u, v436);
                                                      if ( !v438 )
                                                      {
                                                        lpModuleName = 0LL;
                                                        LODWORD(v1277) = 0;
                                                        v417 = -1073741801;
LABEL_530:
                                                        v182 = (unsigned __int16 *)pcchLength;
                                                        goto LABEL_551;
                                                      }
                                                      v417 = 0;
                                                      v435 = v1249[0];
                                                    }
                                                    else
                                                    {
                                                      v438 = v1260;
                                                    }
                                                    if ( *(_QWORD *)&v1249[1] )
                                                      memcpy_0(v438, *(const void **)&v1249[1], v435);
                                                    lpModuleName = (LPCWSTR)v438;
                                                    v430 = v1251;
                                                    LODWORD(v1277) = v1251;
                                                    goto LABEL_542;
                                                  }
                                                }
LABEL_551:
                                                v100 = v417 | 0x10000000;
                                                LODWORD(v1276) = v100;
                                                goto LABEL_356;
                                              }
                                              if ( v321 != (_DWORD)v1251
                                                || (unsigned int)(v1249[0] + v330 + v1276) + 12LL != v321 )
                                              {
                                                goto LABEL_421;
                                              }
                                              v331 = GetProcessHeap();
                                              v332 = HeapAlloc(v331, 8u, 0x30uLL);
                                              v333 = v332;
                                              if ( v332 )
                                              {
                                                v329 = 0;
                                                if ( v1260 )
                                                {
                                                  v334 = (unsigned int)v1276;
                                                  *(_DWORD *)v333 = v1276;
                                                  v335 = v334;
                                                  v1258 = v334;
                                                  v336 = GetProcessHeap();
                                                  v337 = HeapAlloc(v336, 8u, v335);
                                                  if ( !v337 )
                                                    goto LABEL_448;
                                                  v333[1] = v337;
                                                  v329 = 0;
                                                  memcpy_0(v337, v1260, v1258);
                                                }
                                                else
                                                {
                                                  *v332 = 0;
                                                  *((_QWORD *)v332 + 1) = 0LL;
                                                }
                                                if ( !*(_QWORD *)&v1249[1] )
                                                {
                                                  *((_DWORD *)v333 + 4) = 0;
                                                  v333[3] = 0LL;
LABEL_446:
                                                  v340 = (const void *)v1254;
                                                  if ( v1254 )
                                                  {
                                                    v341 = (unsigned int)v1249[0];
                                                    *((_DWORD *)v333 + 8) = v1249[0];
                                                    v342 = v341;
                                                    v1254 = v341;
                                                    v343 = GetProcessHeap();
                                                    v344 = HeapAlloc(v343, 8u, v342);
                                                    if ( !v344 )
                                                      goto LABEL_448;
                                                    v333[5] = v344;
                                                    v329 = 0;
                                                    memcpy_0(v344, v340, v1254);
                                                  }
                                                  else
                                                  {
                                                    *((_DWORD *)v333 + 8) = 0;
                                                    v333[5] = 0LL;
                                                  }
                                                  v327 = v333;
LABEL_458:
                                                  if ( v329 < 0 )
                                                  {
                                                    v1268 = 0LL;
                                                    if ( v327 )
                                                    {
                                                      v353 = (void *)v327[1];
                                                      if ( v353 )
                                                      {
                                                        v354 = GetProcessHeap();
                                                        HeapFree(v354, 0, v353);
                                                        v327[1] = 0LL;
                                                      }
                                                      v355 = (void *)v327[3];
                                                      if ( v355 )
                                                      {
                                                        v356 = GetProcessHeap();
                                                        HeapFree(v356, 0, v355);
                                                        v327[3] = 0LL;
                                                      }
                                                      v357 = (void *)v327[5];
                                                      if ( v357 )
                                                      {
                                                        v358 = GetProcessHeap();
                                                        HeapFree(v358, 0, v357);
                                                        v327[5] = 0LL;
                                                      }
                                                      v359 = GetProcessHeap();
                                                      HeapFree(v359, 0, v327);
                                                      v1268 = 0LL;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v1268 = v327;
                                                  }
                                                  goto LABEL_460;
                                                }
                                                *((_DWORD *)v333 + 4) = v330;
                                                v338 = GetProcessHeap();
                                                v339 = HeapAlloc(v338, 8u, v330);
                                                if ( v339 )
                                                {
                                                  v333[3] = v339;
                                                  v329 = 0;
                                                  memcpy_0(v339, *(const void **)&v1249[1], v330);
                                                  goto LABEL_446;
                                                }
LABEL_448:
                                                v329 = -1073741801;
                                                v345 = (void *)v333[1];
                                                if ( v345 )
                                                {
                                                  v346 = GetProcessHeap();
                                                  HeapFree(v346, 0, v345);
                                                  v333[1] = 0LL;
                                                }
                                                v347 = (void *)v333[3];
                                                if ( v347 )
                                                {
                                                  v348 = GetProcessHeap();
                                                  HeapFree(v348, 0, v347);
                                                  v333[3] = 0LL;
                                                }
                                                v349 = (void *)v333[5];
                                                if ( v349 )
                                                {
                                                  v350 = GetProcessHeap();
                                                  HeapFree(v350, 0, v349);
                                                  v333[5] = 0LL;
                                                }
                                                v351 = GetProcessHeap();
                                                HeapFree(v351, 0, v333);
                                                goto LABEL_458;
                                              }
                                              v1268 = 0LL;
                                              v100 = -805306345;
                                              v102 = Src;
LABEL_409:
                                              v182 = (unsigned __int16 *)Size;
                                              v1264 = v1263;
                                              LODWORD(v1276) = v100;
                                              v104 = v1271;
                                              v1273 = (SIZE_T)v1259;
                                              goto LABEL_356;
                                            }
                                            v100 = -1073741811;
                                            LODWORD(v1276) = -1073741811;
                                          }
                                          v182 = (unsigned __int16 *)v1271;
                                          v104 = v286;
                                          goto LABEL_356;
                                        }
                                      }
                                    }
                                    v258 = -1073741801;
                                    v1254 = *((_QWORD *)v251 + 1);
                                    if ( v1254 )
                                    {
                                      v259 = GetProcessHeap();
                                      HeapFree(v259, 0, (LPVOID)v1254);
                                      *((_QWORD *)v251 + 1) = 0LL;
                                    }
                                    v1254 = *((_QWORD *)v251 + 3);
                                    if ( v1254 )
                                    {
                                      v260 = GetProcessHeap();
                                      HeapFree(v260, 0, (LPVOID)v1254);
                                      *((_QWORD *)v251 + 3) = 0LL;
                                    }
                                    v1254 = *((_QWORD *)v251 + 5);
                                    if ( v1254 )
                                    {
                                      v261 = GetProcessHeap();
                                      HeapFree(v261, 0, (LPVOID)v1254);
                                      *((_QWORD *)v251 + 5) = 0LL;
                                    }
                                    v262 = GetProcessHeap();
                                    HeapFree(v262, 0, v251);
                                  }
                                  else
                                  {
                                    v258 = -1073741801;
                                  }
                                  v251 = (unsigned int *)v1264;
                                  goto LABEL_313;
                                }
LABEL_258:
                                v110 = v98;
                                goto LABEL_136;
                              }
                            }
                          }
                        }
LABEL_607:
                        v110 = v98;
                        goto LABEL_136;
                      }
LABEL_160:
                      v100 = -1073741789;
LABEL_161:
                      LODWORD(v1276) = v100;
                      goto LABEL_162;
                    }
                    v100 = -1073741811;
                    goto LABEL_220;
                  }
                }
                v100 = -1073741811;
              }
LABEL_606:
              LODWORD(v1276) = v100;
              goto LABEL_607;
            }
LABEL_69:
            v77 = GetLastError();
            v80 = v77 < 0;
            if ( v77 > 0 )
            {
              v77 = (unsigned __int16)v77 | 0x80070000;
              v80 = v77 < 0;
            }
            v76 = 0;
            if ( !v80 )
              v77 = -2147467259;
            goto LABEL_119;
          }
        }
        v76 = 0;
        goto LABEL_119;
      }
      v21[823] = 0;
      memset_0(&unk_1808DA540, 0, 0x60uLL);
      v60 = v21;
      if ( *v21 )
      {
        while ( 1 )
        {
          v61 = (const WCHAR *)v21;
          v62 = -1LL;
          v55 = 0;
          do
            ++v62;
          while ( *(_WORD *)&v21[2 * v62] );
          v63 = &v21[2 * v62];
          v64 = (HMODULE *)((char *)&unk_1808DA540 + 24 * v56);
          if ( !GetModuleHandleExW(0, v61, v64) )
            break;
          if ( *(_WORD *)*v64 == 23117
            && (v65 = *((int *)*v64 + 15), (unsigned int)v65 < 0x10000000)
            && (v66 = (char *)*v64 + v65, v66 >= (char *)*v64)
            && *(_DWORD *)v66 == 17744 )
          {
            if ( *((_WORD *)v66 + 12) == 267 || *((_WORD *)v66 + 12) == 523 )
            {
              *(_QWORD *)((char *)&unk_1808DA540 + 24 * v56 + 12) = *((_QWORD *)v66 + 17);
              *((_DWORD *)&unk_1808DA540 + 6 * v56 + 2) = *((_DWORD *)v66 + 20);
            }
            else
            {
              v55 = -1073741811;
            }
          }
          else
          {
            v55 = -1073741701;
          }
          v67 = *(_DWORD *)(v63 + 2);
          v21 = v63 + 6;
          v68 = 0;
          if ( v67 )
          {
            v69 = v56;
            do
            {
              v70 = v21;
              v71 = -1LL;
              do
                ++v71;
              while ( v21[v71] );
              v21 += v71 + 1;
              if ( v55 >= 0 )
              {
                v72 = GetProcAddress(*((HMODULE *)&unk_1808DA540 + 3 * v69), v70);
                if ( !v72 )
                  goto LABEL_64;
                off_1808D1340[v57] = v72;
                v69 = v56;
              }
              ++v57;
              ++v68;
            }
            while ( v68 < v67 );
          }
          ++v56;
          if ( !*v21 )
            goto LABEL_64;
        }
        v55 = -1073741702;
      }
LABEL_64:
      v73 = GetProcessHeap();
      HeapFree(v73, 0, v60);
      if ( v55 < 0 )
        goto LABEL_35;
      v20 = dword_1808DDD3C;
    }
    dword_1808DDD3C = v20 + 1;
    goto LABEL_67;
  }
  v8 = 164LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
