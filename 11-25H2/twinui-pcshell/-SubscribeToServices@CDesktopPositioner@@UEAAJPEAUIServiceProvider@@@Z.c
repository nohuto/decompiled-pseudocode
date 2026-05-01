/*
 * XREFs of ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180067270 (-CopyTo@-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A2584 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800E67E8 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800E6810 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800E6844 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800EBAF4 (-IsUserOOBE@@YA_NXZ.c)
 *     RtlULongLongAdd @ 0x180190928 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1801918B0 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1801A7B98 (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1801E45D4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x18020EB88 (-IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180244648 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ??4?$SP@EV?$SP_HLOCAL@E@@@@QEAAAEAV0@V?$CTypeWrapper@PEAE@@@Z @ 0x1802CA074 (--4-$SP@EV-$SP_HLOCAL@E@@@@QEAAAEAV0@V-$CTypeWrapper@PEAE@@@Z.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1802CC614 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x18065D9FC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1806A4AF4 (wcscmp_0.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::SubscribeToServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  __int128 v2; // xmm1
  struct IServiceProvider *v3; // rsi
  CDesktopPositioner *v4; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v6; // rdi
  int v7; // edi
  __int64 v8; // rdx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v13; // rax
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v18; // rcx
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v20; // r15d
  int v21; // r12d
  int v22; // eax
  _BYTE *v23; // rbx
  int v24; // ecx
  unsigned int v25; // esi
  unsigned int v26; // r11d
  _BYTE *v27; // r12
  unsigned __int8 *v28; // r13
  __int64 v29; // r14
  int v30; // r10d
  int v31; // r9d
  int v32; // r11d
  unsigned int v33; // r8d
  int v34; // r11d
  unsigned int v35; // r8d
  int v36; // r11d
  int v37; // r8d
  unsigned int v38; // r11d
  int v39; // r8d
  int v40; // r11d
  int v41; // r8d
  unsigned int v42; // r11d
  int v43; // r8d
  int v44; // r11d
  unsigned int v45; // esi
  int v46; // r11d
  int v47; // esi
  int v48; // r11d
  int v49; // esi
  unsigned int v50; // r11d
  int v51; // esi
  int v52; // r11d
  int v53; // esi
  unsigned int v54; // r11d
  int v55; // esi
  unsigned __int64 v56; // rax
  char v57; // cl
  int v58; // r14d
  unsigned int v59; // r15d
  HMODULE *v60; // rdi
  __int64 v61; // rbx
  __int64 (__fastcall **v62)(); // rax
  __int64 (__fastcall **v63)(); // rcx
  __int64 v64; // rdx
  const WCHAR *v65; // rdx
  __int64 v66; // rax
  _BYTE *v67; // rbx
  HMODULE *v68; // rdi
  __int64 v69; // rcx
  unsigned __int64 v70; // rcx
  unsigned int v71; // r12d
  unsigned int nn; // edi
  const CHAR *v73; // rdx
  __int64 v74; // rax
  __int64 (__fastcall *v75)(); // rdx
  int v76; // eax
  HANDLE v77; // rax
  int v78; // esi
  signed int LastError; // edi
  __int64 v80; // r14
  wchar_t *v81; // rax
  bool v82; // sf
  wchar_t *v83; // rbx
  __int64 j; // r9
  wchar_t *v85; // r8
  signed int v86; // eax
  __int64 (__fastcall *v87)(); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v89; // r14
  wchar_t *v90; // rax
  bool v91; // sf
  wchar_t *v92; // rbx
  __int64 k; // r9
  wchar_t *v94; // r8
  signed int v95; // eax
  HANDLE CurrentProcess; // rax
  unsigned int v97; // r13d
  HLOCAL v98; // rax
  int v99; // r12d
  int v100; // esi
  _QWORD *v101; // rbx
  HANDLE ProcessHeap; // rax
  WCHAR *v103; // rsi
  HANDLE v104; // rax
  int v105; // edi
  int v106; // eax
  int v107; // eax
  unsigned int v108; // r11d
  int v109; // eax
  int v110; // r9d
  unsigned int v111; // r11d
  int v112; // r10d
  int v113; // eax
  unsigned int v114; // r11d
  int v115; // r10d
  int v116; // eax
  size_t v117; // rdx
  int v118; // r10d
  int v119; // eax
  int v120; // eax
  unsigned int v121; // r11d
  int v122; // r10d
  int v123; // eax
  int v124; // r10d
  unsigned int v125; // edi
  HANDLE v126; // rax
  void *v127; // rax
  int v128; // r11d
  int v129; // eax
  _DWORD *v130; // r10
  int v131; // r10d
  int v132; // r11d
  int v133; // r11d
  int *v134; // r10
  unsigned __int64 v135; // r10
  unsigned int v136; // r11d
  size_t v137; // r9
  _DWORD *v138; // r10
  int v139; // r10d
  int v140; // r11d
  int v141; // r11d
  int *v142; // r9
  unsigned __int64 v143; // r9
  unsigned int v144; // r11d
  _DWORD *v145; // r9
  size_t v146; // rdx
  int v147; // r10d
  int *v148; // rdi
  unsigned int v149; // r11d
  unsigned int v150; // r11d
  int v151; // r10d
  int *v152; // rdi
  int v153; // r10d
  __int64 v154; // r9
  int v155; // r10d
  int v156; // r11d
  int v157; // r11d
  int *v158; // rdi
  unsigned int v159; // r11d
  int v160; // r10d
  unsigned int v161; // r11d
  int *v162; // rdi
  unsigned int v163; // r11d
  unsigned int v164; // ecx
  unsigned int v165; // edi
  unsigned int v166; // r11d
  unsigned int v167; // r11d
  unsigned int v168; // r11d
  unsigned int v169; // r11d
  unsigned int v170; // r9d
  int v171; // r12d
  unsigned int v172; // ecx
  unsigned int v173; // edi
  HANDLE v174; // rax
  char *v175; // rax
  char *v176; // rdi
  unsigned int v177; // r9d
  void *v178; // rcx
  HANDLE v179; // rax
  unsigned __int8 *v180; // r12
  unsigned __int64 v181; // rdi
  char *v182; // r8
  unsigned __int8 v183; // al
  unsigned __int64 v184; // rcx
  unsigned __int8 *v185; // rdx
  unsigned int v186; // r10d
  unsigned int v187; // r11d
  unsigned int v188; // edi
  int v189; // r9d
  unsigned int v190; // r11d
  char v191; // r10
  int v192; // eax
  int v193; // r8d
  int v194; // ecx
  unsigned int v195; // r11d
  unsigned int v196; // r8d
  unsigned int v197; // r15d
  int v198; // r14d
  char *v199; // r13
  char v200; // al
  int v201; // edi
  unsigned __int8 *v202; // rcx
  int v203; // r15d
  int v204; // r13d
  unsigned __int64 v205; // r12
  unsigned int v206; // esi
  int v207; // r9d
  int v208; // r8d
  int v209; // r11d
  int v210; // r10d
  int v211; // r11d
  int v212; // r10d
  int v213; // r11d
  unsigned int v214; // r10d
  int v215; // r11d
  int v216; // r10d
  int v217; // r11d
  int v218; // r10d
  int v219; // r11d
  int v220; // r10d
  unsigned int v221; // r11d
  unsigned int v222; // r10d
  int v223; // r11d
  int v224; // r10d
  int v225; // r11d
  int v226; // r10d
  int v227; // r11d
  int v228; // r10d
  int v229; // r11d
  int v230; // r10d
  unsigned int v231; // r11d
  int v232; // r10d
  int v233; // r11d
  HANDLE v234; // rax
  LPVOID v235; // rdi
  HANDLE v236; // rax
  void *v237; // rax
  HANDLE v238; // rax
  LPVOID v239; // rax
  _OWORD *v240; // rcx
  HANDLE v241; // rax
  LPVOID v242; // rax
  int v243; // r12d
  HANDLE v244; // rax
  HANDLE v245; // rax
  HANDLE v246; // rax
  HANDLE v247; // rax
  HANDLE v248; // rax
  int v249; // r11d
  int v250; // r12d
  int v251; // r11d
  unsigned int v252; // edi
  HANDLE v253; // rax
  WCHAR *v254; // rax
  const void **v255; // rdi
  WCHAR *v256; // rcx
  void *v257; // rcx
  WCHAR *v258; // r9
  void *v259; // rcx
  WCHAR *v260; // r9
  HANDLE v261; // rax
  int v262; // eax
  void *v263; // r9
  void *v264; // r10
  unsigned int v265; // ecx
  LPVOID v266; // r10
  SIZE_T v267; // rax
  HANDLE v268; // rax
  _QWORD *v269; // rdi
  HANDLE v270; // rax
  HANDLE v271; // rax
  HANDLE v272; // rax
  HANDLE v273; // rax
  void *v274; // rdi
  HANDLE v275; // rax
  HANDLE v276; // rax
  unsigned __int16 *v277; // rdi
  HANDLE v278; // rax
  HANDLE v279; // rax
  HANDLE v280; // rax
  HANDLE v281; // rax
  HANDLE v282; // rax
  void *v283; // r13
  HANDLE v284; // rax
  void *v285; // r13
  HANDLE v286; // rax
  HANDLE v287; // rax
  HANDLE v288; // rax
  DWORD ModuleFileNameW; // eax
  void *v290; // rdi
  void *v291; // r9
  void *v292; // r10
  void *v293; // r12
  unsigned int *v294; // rcx
  unsigned int v295; // edi
  int v296; // r10d
  void *v297; // r9
  _DWORD *v298; // rcx
  unsigned int kk; // edi
  unsigned int v300; // r10d
  int v301; // edi
  void *v302; // r9
  int v303; // ecx
  void *v304; // r9
  unsigned int v305; // edi
  HANDLE v306; // rax
  WCHAR *v307; // rax
  WCHAR *v308; // rdi
  signed int v309; // eax
  FARPROC v310; // rax
  int v311; // eax
  unsigned int v312; // r11d
  int v313; // r12d
  unsigned __int16 *v314; // rcx
  unsigned int v315; // r9d
  int v316; // r11d
  int v317; // r9d
  int v318; // r11d
  unsigned int v319; // edi
  int v320; // r11d
  int v321; // r11d
  unsigned int v322; // r10d
  int v323; // r11d
  int v324; // r9d
  int v325; // r10d
  int v326; // r11d
  HANDLE v327; // rax
  SIZE_T v328; // rcx
  HANDLE v329; // rax
  void *v330; // rcx
  void *v331; // rdi
  HANDLE v332; // rax
  void *v333; // rcx
  HANDLE v334; // rax
  void *v335; // rcx
  SIZE_T v336; // rax
  HANDLE v337; // rax
  HANDLE v338; // rax
  HANDLE v339; // rax
  HANDLE v340; // rax
  unsigned __int16 *v341; // rax
  unsigned __int16 *v342; // r10
  HANDLE v343; // rax
  HANDLE v344; // rax
  HANDLE v345; // rax
  HANDLE v346; // rax
  int v347; // r12d
  char *v348; // rax
  _DWORD *v349; // r9
  unsigned __int8 v350; // dl
  unsigned __int8 *v351; // r8
  int v352; // r10d
  unsigned __int16 *v353; // r11
  char v354; // cl
  void *v355; // rax
  int v356; // r13d
  int v357; // r12d
  int v358; // ecx
  unsigned int v359; // r12d
  int v360; // r9d
  unsigned int v361; // r8d
  unsigned int v362; // edx
  SIZE_T v363; // r14
  int v364; // ecx
  char *v365; // rcx
  int v366; // edi
  int v367; // r8d
  _BYTE *v368; // rsi
  unsigned __int8 *v369; // rbx
  int v370; // r14d
  size_t v371; // r13
  int v372; // edx
  unsigned int v373; // r11d
  int v374; // r10d
  int v375; // r9d
  int v376; // r12d
  int v377; // r8d
  int v378; // r12d
  unsigned int v379; // r8d
  int v380; // r12d
  int v381; // r8d
  unsigned int v382; // r12d
  int v383; // r8d
  int v384; // r12d
  int v385; // r8d
  unsigned int v386; // r12d
  int v387; // r8d
  int v388; // r12d
  unsigned int v389; // r8d
  int v390; // r12d
  int v391; // r8d
  int v392; // r12d
  int v393; // r8d
  unsigned int v394; // r12d
  int v395; // r8d
  int v396; // r12d
  int v397; // r8d
  unsigned int v398; // r12d
  int v399; // r8d
  size_t mm; // rax
  void *v401; // rdi
  int v402; // r12d
  unsigned __int16 *v403; // r9
  unsigned __int16 *v404; // r10
  unsigned __int16 *v405; // r9
  unsigned __int16 *v406; // r10
  void *v407; // rdx
  void *v408; // r8
  unsigned __int16 *v409; // r9
  unsigned __int16 *v410; // r10
  _QWORD *v411; // r11
  unsigned __int16 *v412; // r9
  unsigned __int16 *v413; // r10
  _QWORD *v414; // r11
  unsigned __int16 *v415; // r9
  unsigned __int16 *v416; // r10
  unsigned __int64 v417; // rdi
  unsigned __int64 v418; // r11
  int *v419; // r11
  unsigned __int64 v420; // r11
  void *v421; // r9
  unsigned __int16 *v422; // r10
  unsigned __int64 v423; // rcx
  unsigned int v424; // ecx
  HANDLE v425; // rax
  void *v426; // rdi
  int v427; // edi
  _DWORD *v428; // r10
  __int64 v429; // r11
  _DWORD *v430; // r12
  _DWORD *v431; // rcx
  int v432; // edi
  unsigned int v433; // r9d
  int v434; // edi
  _DWORD *v435; // r10
  __int64 v436; // r11
  _DWORD *v437; // rax
  _DWORD *v438; // rcx
  unsigned int v439; // edi
  unsigned int v440; // r9d
  int v441; // edi
  _DWORD *v442; // r10
  __int64 v443; // r11
  _DWORD *v444; // rax
  _DWORD *v445; // rcx
  unsigned int v446; // edi
  unsigned int v447; // r9d
  int v448; // edi
  _DWORD *v449; // r10
  _DWORD *v450; // r11
  _DWORD *v451; // rcx
  unsigned int v452; // edi
  unsigned int v453; // r9d
  int v454; // edi
  _DWORD *v455; // r10
  _DWORD *v456; // rax
  unsigned int *v457; // rcx
  unsigned int v458; // edi
  const void *v459; // r11
  unsigned int *v460; // rdi
  unsigned int v461; // esi
  int v462; // eax
  char *v463; // rax
  int v464; // ecx
  unsigned int v465; // r15d
  unsigned int v466; // r11d
  _BYTE *v467; // r14
  unsigned __int8 *v468; // rsi
  __int64 v469; // r13
  int v470; // ebx
  int v471; // r10d
  int v472; // r9d
  int v473; // r11d
  unsigned int v474; // r8d
  int v475; // r11d
  unsigned int v476; // r8d
  int v477; // r11d
  int v478; // r8d
  unsigned int v479; // r11d
  int v480; // r8d
  int v481; // r11d
  int v482; // r8d
  unsigned int v483; // r11d
  int v484; // edx
  int v485; // r11d
  unsigned int v486; // r15d
  int v487; // r11d
  int v488; // r15d
  int v489; // r11d
  int v490; // r15d
  unsigned int v491; // edi
  int v492; // r15d
  int v493; // edi
  int v494; // r15d
  unsigned int v495; // edi
  int v496; // r15d
  unsigned __int64 v497; // rax
  char v498; // cl
  WCHAR *v499; // rbx
  int v500; // r13d
  HMODULE *v501; // rdi
  __int64 v502; // rbx
  __int64 (__fastcall **v503)(); // rax
  __int64 (__fastcall **v504)(); // rcx
  __int64 v505; // rdx
  const WCHAR *v506; // rdx
  __int64 v507; // rax
  WCHAR *v508; // rbx
  HMODULE *v509; // rdi
  __int64 v510; // rcx
  unsigned __int64 v511; // rcx
  unsigned int v512; // edi
  __int64 v513; // rcx
  const CHAR *v514; // rdx
  __int64 v515; // rax
  __int64 (__fastcall *v516)(); // rax
  void *v517; // rdi
  HANDLE v518; // rax
  int v519; // eax
  char *v520; // rax
  int v521; // ecx
  unsigned int v522; // r14d
  unsigned int v523; // r11d
  _BYTE *v524; // r15
  unsigned __int8 *v525; // rsi
  __int64 v526; // r13
  int v527; // ebx
  int v528; // r10d
  int v529; // r9d
  int v530; // r11d
  unsigned int v531; // r8d
  int v532; // r11d
  unsigned int v533; // r8d
  int v534; // r11d
  int v535; // r8d
  unsigned int v536; // r11d
  int v537; // r8d
  int v538; // r11d
  int v539; // r8d
  unsigned int v540; // r11d
  int v541; // r8d
  int v542; // r11d
  unsigned int v543; // r14d
  int v544; // r11d
  int v545; // r14d
  int v546; // edx
  int v547; // r14d
  unsigned int v548; // r11d
  int v549; // r14d
  int v550; // r11d
  int v551; // r14d
  unsigned int v552; // r11d
  int v553; // r14d
  unsigned __int64 v554; // rax
  char v555; // cl
  WCHAR *v556; // rbx
  int v557; // r13d
  HMODULE *v558; // rdi
  __int64 v559; // rbx
  __int64 (__fastcall **v560)(); // rax
  __int64 (__fastcall **v561)(); // rcx
  __int64 v562; // rdx
  const WCHAR *v563; // rdx
  __int64 v564; // rax
  WCHAR *v565; // rbx
  HMODULE *v566; // rdi
  __int64 v567; // rcx
  unsigned __int64 v568; // rcx
  unsigned int v569; // edi
  __int64 v570; // rcx
  const CHAR *v571; // rdx
  __int64 v572; // rax
  __int64 (__fastcall *v573)(); // rax
  void *v574; // rdi
  HANDLE v575; // rax
  unsigned int v576; // ebx
  signed int v577; // eax
  signed int v578; // r13d
  _DWORD *v579; // rdi
  bool v580; // sf
  LPVOID v581; // rax
  LPVOID v582; // rax
  _DWORD *v583; // rbx
  unsigned int v584; // r13d
  unsigned int v585; // r9d
  __int64 v586; // r8
  unsigned int v587; // ecx
  int *v588; // rdx
  bool v589; // sf
  _DWORD *v590; // rax
  char *v591; // rdi
  _DWORD *v592; // r15
  unsigned int ii; // r14d
  __int64 v594; // rax
  const wchar_t *v595; // rcx
  const wchar_t **v596; // rdx
  __int64 v597; // rdi
  __int64 v598; // rax
  __int64 v599; // rcx
  unsigned __int16 *v600; // rbx
  char *v601; // r11
  unsigned __int16 *v602; // r8
  int v603; // eax
  unsigned int v604; // r14d
  unsigned int v605; // r13d
  _BYTE *v606; // r15
  unsigned __int8 *v607; // rsi
  __int64 v608; // rbx
  int v609; // r11d
  int v610; // r10d
  int v611; // r9d
  int v612; // r13d
  unsigned int v613; // r8d
  int v614; // r13d
  unsigned int v615; // r8d
  int v616; // r13d
  int v617; // r8d
  unsigned int v618; // r13d
  int v619; // r8d
  int v620; // r13d
  int v621; // r8d
  unsigned int v622; // r13d
  int v623; // r8d
  int v624; // r13d
  unsigned int v625; // r14d
  int v626; // r13d
  int v627; // r14d
  int v628; // r13d
  int v629; // r14d
  unsigned int v630; // r13d
  int v631; // r14d
  int v632; // r13d
  int v633; // r14d
  unsigned int v634; // r13d
  int v635; // r14d
  unsigned __int64 v636; // rcx
  char v637; // al
  _BYTE *v638; // r11
  unsigned __int64 v639; // rcx
  _QWORD *v640; // rdx
  __int64 v641; // r8
  unsigned int jj; // ecx
  __int64 v643; // rax
  LPVOID v644; // rax
  _QWORD *v645; // rbx
  unsigned int v646; // r8d
  _QWORD *v647; // rdx
  __int16 *v648; // rcx
  __int64 v649; // rax
  __int16 v650; // r9
  __int16 *v651; // rcx
  void *v652; // rax
  __int64 v653; // r9
  int v654; // eax
  LPVOID v655; // rax
  __int64 v656; // r9
  void **v657; // rax
  signed int v658; // eax
  signed int v659; // eax
  unsigned __int16 *v660; // rax
  __int64 v661; // rcx
  _WORD *v662; // rdi
  __int64 v663; // rcx
  void **v664; // rax
  void **v665; // rax
  void **v666; // rax
  signed int v667; // eax
  unsigned int v668; // ebx
  unsigned __int16 *v669; // rax
  bool v670; // sf
  int v671; // eax
  HMODULE *v672; // rdi
  __int64 v673; // rbx
  __int64 (__fastcall **v674)(); // rax
  __int64 (__fastcall **v675)(); // rcx
  __int64 v676; // rdx
  int v677; // esi
  unsigned int v678; // edi
  int v679; // ebx
  __int64 v680; // rax
  __int64 v681; // rax
  bool v682; // sf
  unsigned __int16 *v683; // rax
  signed int v684; // eax
  __int64 v685; // rax
  int v686; // ebx
  signed int v687; // eax
  unsigned int v688; // edx
  int v689; // eax
  __int32 v690; // ebx
  void *v691; // rdi
  int v692; // edi
  void *v693; // rdi
  int v694; // edi
  int v695; // edi
  __int64 v696; // rdx
  __int64 v697; // rdi
  bool v698; // sf
  __int64 v699; // rax
  bool v700; // sf
  void *v701; // rdi
  __int64 v702; // rbx
  int v703; // edi
  int v704; // eax
  unsigned __int64 v705; // rdx
  __int32 v706; // edx
  int v707; // r13d
  int v708; // ebx
  int v709; // edi
  int v710; // edi
  CToastCenterExperienceManager *v711; // rax
  int v712; // edx
  int v713; // ecx
  CToastCenterExperienceManager *v714; // rax
  int v715; // eax
  void *v716; // rdi
  __int64 v717; // rax
  __int64 v718; // rax
  CToastCenterExperienceManager *v719; // r13
  unsigned __int16 *v720; // rax
  unsigned __int16 *v721; // rdi
  signed int v722; // edi
  bool v723; // sf
  int v724; // eax
  const WCHAR *v725; // rcx
  __int64 (__fastcall *v726)(); // rdi
  __int64 v727; // rax
  __int32 v728; // r9d
  __int32 v729; // r10d
  __int32 v730; // edx
  __int32 v731; // r8d
  int v732; // ecx
  int v733; // r11d
  WCHAR *v734; // rdx
  __int64 v735; // rdi
  unsigned __int16 *v736; // rax
  int v737; // r8d
  unsigned __int8 *v738; // r9
  signed __int64 v739; // r10
  int v740; // r8d
  void *v741; // rdi
  __int64 v742; // rax
  __int64 v743; // rcx
  __int64 v744; // rcx
  __int64 v745; // rcx
  int v746; // eax
  HMODULE *v747; // rdi
  __int64 v748; // rbx
  __int64 (__fastcall **v749)(); // rax
  __int64 (__fastcall **v750)(); // rcx
  __int64 v751; // rdx
  int v752; // r13d
  int v753; // eax
  char *v754; // rbx
  int v755; // r15d
  int v756; // esi
  unsigned int v757; // r13d
  unsigned int v758; // r11d
  _BYTE *v759; // r14
  unsigned __int8 *v760; // rcx
  __int64 v761; // rbx
  int v762; // r10d
  int v763; // r9d
  int v764; // r11d
  unsigned int v765; // r8d
  int v766; // r11d
  unsigned int v767; // r8d
  int v768; // r11d
  int v769; // r8d
  unsigned int v770; // r11d
  int v771; // r8d
  int v772; // r11d
  int v773; // r8d
  unsigned int v774; // r11d
  int v775; // r8d
  int v776; // r11d
  unsigned int v777; // r13d
  int v778; // r11d
  int v779; // r13d
  int v780; // r11d
  int v781; // r13d
  unsigned int v782; // r11d
  int v783; // r13d
  int v784; // r11d
  int v785; // r13d
  unsigned int v786; // r11d
  int v787; // r13d
  unsigned __int64 v788; // rax
  char v789; // cl
  const WCHAR *v790; // rbx
  int v791; // esi
  HMODULE *v792; // rdi
  __int64 v793; // rbx
  __int64 (__fastcall **v794)(); // rax
  __int64 (__fastcall **v795)(); // rcx
  __int64 v796; // rdx
  __int64 v797; // rax
  CToastCenterExperienceManager *v798; // r13
  unsigned __int16 *v799; // rax
  unsigned __int16 *v800; // rdi
  signed int v801; // eax
  signed int v802; // edi
  int v803; // eax
  const WCHAR *v804; // rcx
  __int64 (__fastcall *v805)(); // rdi
  __int64 v806; // rax
  int v807; // eax
  __int32 v808; // r8d
  __int32 v809; // r10d
  __int32 v810; // r9d
  __int32 v811; // edx
  int v812; // esi
  int v813; // r11d
  WCHAR *v814; // r8
  __int64 v815; // rdi
  unsigned __int16 *v816; // rax
  int v817; // r14d
  unsigned __int8 *v818; // r9
  signed __int64 v819; // r10
  char v820; // r15
  int v821; // r8d
  size_t v822; // rdi
  CToastCenterExperienceManager *v823; // r13
  char v824; // al
  unsigned __int32 v825; // ebx
  __int32 v826; // ecx
  int v827; // r11d
  int v828; // edi
  int v829; // r13d
  void *v830; // rax
  __int64 v831; // rax
  void *v832; // rcx
  __int64 v833; // rax
  unsigned __int16 *v834; // rax
  signed int v835; // edi
  bool v836; // sf
  int v837; // eax
  char *v838; // rcx
  __int64 (__fastcall *v839)(); // rdi
  __int64 v840; // rax
  int v841; // eax
  int v842; // r8d
  int v843; // r9d
  int v844; // ecx
  int v845; // r10d
  unsigned __int64 v846; // rdx
  __int64 v847; // r11
  int v848; // eax
  unsigned __int16 *v849; // rax
  signed int v850; // r11d
  int v851; // r15d
  unsigned __int16 *v852; // rsi
  int v853; // r8d
  unsigned __int8 *v854; // r9
  signed __int64 v855; // r10
  int v856; // r8d
  void *v857; // rdi
  bool v858; // zf
  __int64 v859; // rax
  unsigned __int16 *v860; // rax
  CToastCenterExperienceManager *v861; // rdi
  __int64 v862; // rax
  signed int v863; // edi
  bool v864; // sf
  unsigned __int16 *v865; // r13
  int v866; // eax
  unsigned __int16 *v867; // rcx
  __int64 (__fastcall *v868)(); // rdi
  __int64 v869; // rax
  int v870; // eax
  int v871; // r9d
  int v872; // r10d
  int v873; // ecx
  int v874; // r8d
  unsigned __int64 v875; // rdx
  __int64 v876; // r11
  int v877; // eax
  unsigned __int16 *v878; // rax
  signed int v879; // r11d
  int v880; // r14d
  unsigned __int16 *v881; // r15
  char v882; // si
  int v883; // r8d
  unsigned __int8 *v884; // r9
  char *v885; // r10
  int v886; // r8d
  WCHAR *v887; // r13
  const WCHAR *v888; // rdx
  __int64 v889; // rax
  const WCHAR *v890; // rbx
  HMODULE *v891; // rdi
  __int64 v892; // rcx
  unsigned __int64 v893; // rcx
  unsigned int v894; // edi
  __int64 v895; // rcx
  const CHAR *v896; // rdx
  __int64 v897; // rax
  __int64 (__fastcall *v898)(); // rax
  HANDLE v899; // rax
  __int64 v900; // rbx
  int v901; // eax
  HMODULE *v902; // rdi
  __int64 (__fastcall **v903)(); // rax
  __int64 (__fastcall **v904)(); // rcx
  __int64 v905; // rdx
  void *v906; // rbx
  HANDLE v907; // rax
  _OWORD *v908; // rsi
  HANDLE v909; // rax
  _QWORD *v910; // rax
  unsigned int v911; // r10d
  int v912; // r11d
  int v913; // eax
  unsigned int v914; // r10d
  int v915; // r11d
  int v916; // r9d
  int v917; // eax
  unsigned int v918; // r10d
  int v919; // r11d
  int v920; // r9d
  int v921; // eax
  int v922; // r9d
  unsigned int v923; // edi
  HANDLE v924; // rax
  LPVOID v925; // rax
  int v926; // eax
  unsigned int *v927; // r9
  unsigned int v928; // r10d
  __int64 v929; // r11
  int v930; // r9d
  unsigned int v931; // r10d
  __int64 v932; // r11
  int *v933; // r10
  unsigned __int64 v934; // r10
  unsigned int v935; // r9d
  int v936; // r11d
  _DWORD *v937; // r10
  unsigned int v938; // edi
  unsigned int v939; // r10d
  __int64 v940; // r11
  int *v941; // r9
  unsigned __int64 v942; // r9
  int v943; // r10d
  _DWORD *v944; // r9
  unsigned int v945; // edi
  unsigned int v946; // r10d
  int v947; // r11d
  int *v948; // r9
  unsigned __int64 v949; // r9
  int v950; // r10d
  _DWORD *v951; // r9
  unsigned int v952; // ecx
  int v953; // r11d
  unsigned int v954; // edi
  _DWORD *v955; // r11
  _DWORD *v956; // r13
  int v957; // edi
  unsigned int v958; // r9d
  WCHAR *v959; // r11
  unsigned int v960; // ecx
  unsigned int v961; // edi
  HANDLE v962; // rax
  _DWORD *v963; // rax
  unsigned int v964; // r10d
  void *v965; // rcx
  void *v966; // rcx
  char *v967; // r9
  HANDLE v968; // rax
  int v969; // edi
  void *v970; // rdi
  char *v971; // rcx
  unsigned int v972; // r11d
  unsigned __int8 v973; // al
  unsigned __int64 v974; // rdx
  unsigned __int8 v975; // r8
  unsigned __int8 *v976; // r9
  char *v977; // rdx
  int v978; // r8d
  int v979; // r10d
  int v980; // edx
  char v981; // r11
  unsigned int v982; // eax
  int v983; // r8d
  unsigned int v984; // ecx
  unsigned int v985; // r8d
  unsigned int v986; // r15d
  unsigned int v987; // r14d
  int v988; // r12d
  char *v989; // r13
  char v990; // cl
  int v991; // edi
  int v992; // ebx
  unsigned __int8 *v993; // rdx
  int v994; // r15d
  int v995; // r13d
  unsigned __int64 v996; // rax
  unsigned int v997; // r12d
  int v998; // r10d
  int v999; // r9d
  int v1000; // r8d
  int v1001; // r11d
  int v1002; // r8d
  int v1003; // r11d
  int v1004; // r8d
  unsigned int v1005; // r11d
  int v1006; // r8d
  int v1007; // r11d
  int v1008; // r8d
  int v1009; // r11d
  int v1010; // r8d
  int v1011; // r11d
  unsigned int v1012; // r8d
  unsigned int v1013; // r11d
  int v1014; // r8d
  int v1015; // r11d
  int v1016; // r8d
  int v1017; // r11d
  int v1018; // r8d
  int v1019; // r11d
  int v1020; // r8d
  int v1021; // r11d
  unsigned int v1022; // r8d
  int v1023; // r11d
  int v1024; // r8d
  unsigned int v1025; // r8d
  HANDLE v1026; // rax
  _QWORD *v1027; // r14
  HANDLE v1028; // rax
  void *v1029; // rax
  HANDLE v1030; // rax
  _OWORD *v1031; // rax
  HANDLE v1032; // rax
  _QWORD *v1033; // rax
  int v1034; // edi
  HANDLE v1035; // rax
  HANDLE v1036; // rax
  HANDLE v1037; // rax
  HANDLE v1038; // rax
  void *v1039; // r14
  HANDLE v1040; // rax
  WCHAR *v1041; // rax
  HANDLE v1042; // rax
  HANDLE v1043; // rax
  HANDLE v1044; // rax
  HANDLE v1045; // rax
  int v1046; // edi
  int v1047; // r11d
  int v1048; // r11d
  unsigned int v1049; // edi
  HANDLE v1050; // rax
  _DWORD *v1051; // rax
  LPVOID v1052; // rcx
  void *v1053; // rcx
  void *v1054; // r9
  void *v1055; // rcx
  void *v1056; // r9
  HANDLE v1057; // rax
  int v1058; // eax
  SIZE_T v1059; // r9
  unsigned int v1060; // ecx
  HANDLE v1061; // rax
  void *v1062; // r14
  HANDLE v1063; // rax
  void *v1064; // r14
  HANDLE v1065; // rax
  void *v1066; // r14
  HANDLE v1067; // rax
  HANDLE v1068; // rax
  void *v1069; // r14
  HANDLE v1070; // rax
  HANDLE v1071; // rax
  void *v1072; // r15
  HANDLE v1073; // rax
  void *v1074; // r15
  HANDLE v1075; // rax
  void *v1076; // r15
  HANDLE v1077; // rax
  HANDLE v1078; // rax
  unsigned __int16 *v1079; // r14
  HANDLE v1080; // rax
  _DWORD *v1081; // rdi
  unsigned int v1082; // r9d
  __int64 v1083; // r10
  _DWORD *v1084; // r11
  _DWORD *v1085; // rax
  int v1086; // r9d
  SIZE_T v1087; // r9
  int v1088; // r10d
  unsigned int *v1089; // rcx
  int v1090; // r10d
  SIZE_T v1091; // r9
  unsigned int *v1092; // rcx
  int v1093; // r10d
  SIZE_T v1094; // r9
  int v1095; // ecx
  int v1096; // r10d
  SIZE_T v1097; // r9
  unsigned int v1098; // edi
  HANDLE v1099; // rax
  WCHAR *v1100; // rax
  WCHAR *v1101; // rdx
  signed int v1102; // eax
  FARPROC ProcAddress; // rax
  int v1104; // eax
  unsigned int v1105; // r9d
  int v1106; // edi
  int v1107; // r9d
  __int64 v1108; // r11
  int v1109; // r11d
  int v1110; // r9d
  int v1111; // r9d
  unsigned int v1112; // r10d
  int v1113; // r10d
  int v1114; // r9d
  int v1115; // r9d
  int v1116; // r9d
  int v1117; // r10d
  int v1118; // r11d
  HANDLE v1119; // rax
  SIZE_T *v1120; // rax
  SIZE_T *v1121; // rcx
  HANDLE v1122; // rax
  void *v1123; // rcx
  HANDLE v1124; // rax
  void *v1125; // rcx
  HANDLE v1126; // rax
  void *v1127; // rcx
  SIZE_T *v1128; // rax
  HANDLE v1129; // rax
  HANDLE v1130; // rax
  HANDLE v1131; // rax
  HANDLE v1132; // rax
  unsigned __int16 *v1133; // r10
  SIZE_T v1134; // rdi
  unsigned __int16 *v1135; // r9
  unsigned __int8 v1136; // dl
  unsigned __int8 *v1137; // rax
  unsigned int v1138; // r10d
  unsigned int v1139; // r8d
  unsigned __int16 *v1140; // r11
  int v1141; // edi
  int v1142; // ecx
  unsigned int v1143; // edi
  unsigned int v1144; // edx
  unsigned int v1145; // r9d
  int v1146; // r12d
  unsigned __int8 *v1147; // r15
  char v1148; // al
  char *v1149; // rcx
  unsigned int v1150; // edi
  int v1151; // r13d
  _BYTE *v1152; // r14
  unsigned __int8 *v1153; // r12
  int v1154; // edx
  char *v1155; // r11
  int v1156; // esi
  int v1157; // ebx
  int v1158; // r10d
  int v1159; // r9d
  int v1160; // r8d
  unsigned int v1161; // edi
  int v1162; // r8d
  unsigned int v1163; // edi
  int v1164; // r8d
  int v1165; // edi
  unsigned int v1166; // r8d
  int v1167; // r8d
  int v1168; // edi
  unsigned int v1169; // r8d
  int v1170; // edi
  int v1171; // r8d
  int v1172; // r8d
  int v1173; // r8d
  int v1174; // edi
  unsigned int v1175; // r8d
  int v1176; // r8d
  unsigned int v1177; // r8d
  SIZE_T n; // rax
  int v1179; // edi
  unsigned __int16 *v1180; // r9
  unsigned __int16 *v1181; // r10
  unsigned __int16 *v1182; // r9
  unsigned __int16 *v1183; // r10
  SIZE_T v1184; // r8
  unsigned __int16 *v1185; // r9
  unsigned __int16 *v1186; // r10
  void *v1187; // r14
  void *v1188; // rcx
  unsigned __int16 *v1189; // r9
  unsigned __int16 *v1190; // r10
  SIZE_T v1191; // r11
  unsigned __int16 *v1192; // r15
  int *v1193; // r11
  unsigned __int64 v1194; // r11
  SIZE_T v1195; // r9
  unsigned __int16 *v1196; // r10
  SIZE_T v1197; // rax
  unsigned int v1198; // eax
  HANDLE v1199; // rax
  void *v1200; // rdi
  HANDLE v1201; // rax
  void *v1202; // rdi
  HANDLE v1203; // rax
  HANDLE v1204; // rax
  HANDLE v1205; // rax
  int v1206; // eax
  HMODULE *v1207; // rdi
  __int64 v1208; // rbx
  __int64 v1209; // rax
  __int64 (__fastcall **v1210)(); // rcx
  __int64 (__fastcall **v1211)(); // rdx
  int v1212; // edi
  Windows::Internal::DeviceCapabilitiesW *v1213; // rcx
  bool IsScreenSizeRequirementMet; // al
  HRESULT (__stdcall *v1215)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v1216; // rdx
  char *v1217; // rdx
  HRESULT (__stdcall *v1218)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v1219; // rbx
  __int64 (__fastcall *v1220)(__int64, __int64, __int64 **); // rdi
  int v1221; // eax
  __int64 v1222; // rdx
  unsigned int i; // esi
  __int64 v1224; // rbx
  int (__fastcall *v1225)(__int64, _QWORD, __int64 *); // rdi
  int v1226; // eax
  __int64 v1227; // rax
  int v1228; // eax
  int v1229; // eax
  __int64 v1230; // rdx
  char *v1231; // rdx
  unsigned __int8 v1233; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1234; // [rsp+60h] [rbp-A0h]
  WCHAR *lpModuleName; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNamea; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNameb; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNamec; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNamed; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNamee; // [rsp+68h] [rbp-98h]
  int lpModuleNamef; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNameg; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNameh; // [rsp+68h] [rbp-98h]
  int lpModuleNamei; // [rsp+68h] [rbp-98h]
  int lpModuleNamej; // [rsp+68h] [rbp-98h]
  int lpModuleNamek; // [rsp+68h] [rbp-98h]
  int lpModuleNamel; // [rsp+68h] [rbp-98h]
  int lpModuleNamem; // [rsp+68h] [rbp-98h]
  unsigned int lpModuleNamen; // [rsp+68h] [rbp-98h]
  int lpModuleNameo; // [rsp+68h] [rbp-98h]
  unsigned int lpModuleNamep; // [rsp+68h] [rbp-98h]
  int lpModuleNameq; // [rsp+68h] [rbp-98h]
  int lpModuleNames; // [rsp+68h] [rbp-98h]
  unsigned int lpModuleNamet; // [rsp+68h] [rbp-98h]
  int lpModuleNameu; // [rsp+68h] [rbp-98h]
  int lpModuleNamev; // [rsp+68h] [rbp-98h]
  int lpModuleNamew; // [rsp+68h] [rbp-98h]
  int lpModuleNamex; // [rsp+68h] [rbp-98h]
  unsigned int lpModuleNamey; // [rsp+68h] [rbp-98h]
  int lpModuleNamer; // [rsp+68h] [rbp-98h]
  SIZE_T v1261; // [rsp+70h] [rbp-90h]
  SIZE_T v1262; // [rsp+70h] [rbp-90h]
  WCHAR *v1263; // [rsp+70h] [rbp-90h]
  int v1264; // [rsp+70h] [rbp-90h]
  unsigned int v1265; // [rsp+70h] [rbp-90h]
  unsigned int v1266; // [rsp+70h] [rbp-90h]
  int v1267; // [rsp+70h] [rbp-90h]
  int v1268; // [rsp+70h] [rbp-90h]
  int v1269; // [rsp+70h] [rbp-90h]
  int v1270; // [rsp+70h] [rbp-90h]
  unsigned int v1271; // [rsp+70h] [rbp-90h]
  unsigned int v1272; // [rsp+70h] [rbp-90h]
  int v1273; // [rsp+70h] [rbp-90h]
  int v1274; // [rsp+70h] [rbp-90h]
  int v1275; // [rsp+70h] [rbp-90h]
  int v1276; // [rsp+70h] [rbp-90h]
  SIZE_T v1277; // [rsp+70h] [rbp-90h]
  int v1278; // [rsp+70h] [rbp-90h]
  void *v1279; // [rsp+70h] [rbp-90h]
  _BYTE *lpMem; // [rsp+78h] [rbp-88h]
  unsigned __int8 *lpMema; // [rsp+78h] [rbp-88h]
  void *lpMemb; // [rsp+78h] [rbp-88h]
  void *lpMemc; // [rsp+78h] [rbp-88h]
  void *lpMemd; // [rsp+78h] [rbp-88h]
  void *lpMeme; // [rsp+78h] [rbp-88h]
  void *lpMemf; // [rsp+78h] [rbp-88h]
  void *lpMemg; // [rsp+78h] [rbp-88h]
  void *lpMemh; // [rsp+78h] [rbp-88h]
  void *lpMemi; // [rsp+78h] [rbp-88h]
  void *lpMemj; // [rsp+78h] [rbp-88h]
  CToastCenterExperienceManager *lpMemk; // [rsp+78h] [rbp-88h]
  unsigned __int16 *lpMeml; // [rsp+78h] [rbp-88h]
  unsigned __int8 *lpMemm; // [rsp+78h] [rbp-88h]
  LPVOID lpMemn; // [rsp+78h] [rbp-88h]
  LPVOID lpMemo; // [rsp+78h] [rbp-88h]
  void *lpMemp; // [rsp+78h] [rbp-88h]
  LPVOID lpMemq; // [rsp+78h] [rbp-88h]
  LPVOID lpMemr; // [rsp+78h] [rbp-88h]
  int v1299; // [rsp+80h] [rbp-80h]
  unsigned int v1300; // [rsp+80h] [rbp-80h]
  unsigned int v1301; // [rsp+80h] [rbp-80h]
  int v1302; // [rsp+80h] [rbp-80h]
  int v1303; // [rsp+80h] [rbp-80h]
  int v1304; // [rsp+80h] [rbp-80h]
  unsigned int v1305; // [rsp+80h] [rbp-80h]
  unsigned int v1306; // [rsp+80h] [rbp-80h]
  unsigned int v1307; // [rsp+80h] [rbp-80h]
  int v1308; // [rsp+80h] [rbp-80h]
  void *v1309; // [rsp+88h] [rbp-78h]
  void *v1310; // [rsp+88h] [rbp-78h]
  void *v1311; // [rsp+88h] [rbp-78h]
  void *v1312; // [rsp+88h] [rbp-78h]
  void *v1313; // [rsp+88h] [rbp-78h]
  void *v1314; // [rsp+88h] [rbp-78h]
  void *v1315; // [rsp+88h] [rbp-78h]
  size_t v1316; // [rsp+88h] [rbp-78h]
  void *v1317; // [rsp+88h] [rbp-78h]
  void *v1318; // [rsp+88h] [rbp-78h]
  WCHAR *v1319; // [rsp+88h] [rbp-78h]
  size_t v1320; // [rsp+88h] [rbp-78h]
  size_t v1321; // [rsp+88h] [rbp-78h]
  size_t v1322; // [rsp+88h] [rbp-78h]
  size_t v1323; // [rsp+88h] [rbp-78h]
  size_t v1324; // [rsp+88h] [rbp-78h]
  SIZE_T v1325; // [rsp+90h] [rbp-70h]
  SIZE_T v1326; // [rsp+90h] [rbp-70h]
  void *v1327; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1328; // [rsp+90h] [rbp-70h]
  SIZE_T v1329; // [rsp+90h] [rbp-70h]
  int v1330; // [rsp+90h] [rbp-70h]
  SIZE_T v1331; // [rsp+90h] [rbp-70h]
  int v1332; // [rsp+90h] [rbp-70h]
  int v1333; // [rsp+90h] [rbp-70h]
  int v1334; // [rsp+90h] [rbp-70h]
  int v1335; // [rsp+90h] [rbp-70h]
  int v1336; // [rsp+90h] [rbp-70h]
  int v1337; // [rsp+90h] [rbp-70h]
  unsigned int v1338; // [rsp+90h] [rbp-70h]
  unsigned int v1339; // [rsp+90h] [rbp-70h]
  unsigned int v1340; // [rsp+90h] [rbp-70h]
  int v1341; // [rsp+90h] [rbp-70h]
  unsigned int v1342; // [rsp+90h] [rbp-70h]
  unsigned int v1343; // [rsp+90h] [rbp-70h]
  int v1344; // [rsp+98h] [rbp-68h]
  unsigned int v1345; // [rsp+98h] [rbp-68h]
  int v1346; // [rsp+98h] [rbp-68h]
  unsigned int v1347; // [rsp+98h] [rbp-68h]
  int v1348; // [rsp+98h] [rbp-68h]
  int v1349; // [rsp+98h] [rbp-68h]
  unsigned int v1350; // [rsp+98h] [rbp-68h]
  unsigned int v1351; // [rsp+98h] [rbp-68h]
  int v1352; // [rsp+98h] [rbp-68h]
  WCHAR *v1353; // [rsp+A0h] [rbp-60h]
  WCHAR *v1354; // [rsp+A0h] [rbp-60h]
  WCHAR *v1355; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v1356; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1357; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1358; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1359; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1360; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1361; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1362; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1363; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1364; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1365; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1366; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1367; // [rsp+A0h] [rbp-60h]
  WCHAR *v1368; // [rsp+A0h] [rbp-60h]
  int v1369; // [rsp+A8h] [rbp-58h]
  char *v1370; // [rsp+A8h] [rbp-58h]
  char *v1371; // [rsp+A8h] [rbp-58h]
  const WCHAR *v1372; // [rsp+A8h] [rbp-58h]
  LPVOID v1373; // [rsp+A8h] [rbp-58h]
  _OWORD *v1374; // [rsp+A8h] [rbp-58h]
  LPVOID v1375; // [rsp+A8h] [rbp-58h]
  LPVOID v1376; // [rsp+A8h] [rbp-58h]
  void *v1377; // [rsp+A8h] [rbp-58h]
  void *v1378; // [rsp+A8h] [rbp-58h]
  void *v1379; // [rsp+A8h] [rbp-58h]
  void *v1380; // [rsp+A8h] [rbp-58h]
  void *v1381; // [rsp+A8h] [rbp-58h]
  void *v1382; // [rsp+A8h] [rbp-58h]
  _OWORD *v1383; // [rsp+A8h] [rbp-58h]
  LPVOID v1384; // [rsp+A8h] [rbp-58h]
  int v1385; // [rsp+B0h] [rbp-50h]
  unsigned int v1386; // [rsp+B0h] [rbp-50h]
  unsigned int v1387; // [rsp+B0h] [rbp-50h]
  int v1388; // [rsp+B0h] [rbp-50h]
  unsigned __int32 v1389; // [rsp+B0h] [rbp-50h]
  SIZE_T v1390; // [rsp+B8h] [rbp-48h]
  _BYTE *v1391; // [rsp+B8h] [rbp-48h]
  _QWORD *v1392; // [rsp+B8h] [rbp-48h]
  int v1393; // [rsp+B8h] [rbp-48h]
  int v1394; // [rsp+B8h] [rbp-48h]
  int v1395; // [rsp+B8h] [rbp-48h]
  int v1396; // [rsp+B8h] [rbp-48h]
  unsigned int v1397; // [rsp+B8h] [rbp-48h]
  int v1398; // [rsp+B8h] [rbp-48h]
  unsigned int v1399; // [rsp+B8h] [rbp-48h]
  int v1400; // [rsp+B8h] [rbp-48h]
  unsigned int v1401; // [rsp+C0h] [rbp-40h]
  unsigned int v1402; // [rsp+C0h] [rbp-40h]
  unsigned int v1403; // [rsp+C0h] [rbp-40h]
  unsigned int v1404; // [rsp+C0h] [rbp-40h]
  unsigned int v1405; // [rsp+C0h] [rbp-40h]
  unsigned int v1406; // [rsp+C0h] [rbp-40h]
  int v1407; // [rsp+C0h] [rbp-40h]
  int v1408; // [rsp+C0h] [rbp-40h]
  int v1409; // [rsp+C0h] [rbp-40h]
  int v1410; // [rsp+C0h] [rbp-40h]
  int v1411; // [rsp+C0h] [rbp-40h]
  __int64 v1412; // [rsp+C0h] [rbp-40h]
  _BYTE *v1413; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1414; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1415; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1416; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1417; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1418; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1419; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1420; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1421; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1422; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1423; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1424; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v1425; // [rsp+C8h] [rbp-38h]
  SIZE_T *v1426; // [rsp+C8h] [rbp-38h]
  unsigned int Size; // [rsp+D0h] [rbp-30h]
  int Sizea; // [rsp+D0h] [rbp-30h]
  int Sizeb; // [rsp+D0h] [rbp-30h]
  int Sizec; // [rsp+D0h] [rbp-30h]
  WCHAR *v1431; // [rsp+D8h] [rbp-28h]
  WCHAR *v1432; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1433; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1434; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1435; // [rsp+D8h] [rbp-28h]
  CToastCenterExperienceManager *v1436; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1437; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1438; // [rsp+D8h] [rbp-28h]
  WCHAR *v1439; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1440; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1441; // [rsp+D8h] [rbp-28h]
  int v1442; // [rsp+E0h] [rbp-20h]
  unsigned int v1443; // [rsp+E0h] [rbp-20h]
  unsigned int v1444; // [rsp+E0h] [rbp-20h]
  int v1445; // [rsp+E0h] [rbp-20h]
  int v1446; // [rsp+E0h] [rbp-20h]
  int v1447; // [rsp+E0h] [rbp-20h]
  int v1448; // [rsp+E0h] [rbp-20h]
  signed int v1449; // [rsp+E0h] [rbp-20h]
  int v1450; // [rsp+E8h] [rbp-18h]
  char v1451; // [rsp+E8h] [rbp-18h]
  int v1452; // [rsp+E8h] [rbp-18h]
  unsigned int v1453; // [rsp+E8h] [rbp-18h]
  unsigned int v1454; // [rsp+E8h] [rbp-18h]
  unsigned int v1455; // [rsp+E8h] [rbp-18h]
  int v1456; // [rsp+E8h] [rbp-18h]
  int v1457; // [rsp+E8h] [rbp-18h]
  int v1458; // [rsp+E8h] [rbp-18h]
  int v1459; // [rsp+E8h] [rbp-18h]
  int v1460; // [rsp+E8h] [rbp-18h]
  char *v1461; // [rsp+E8h] [rbp-18h]
  unsigned int v1462; // [rsp+F0h] [rbp-10h]
  int v1463; // [rsp+F0h] [rbp-10h]
  __int32 v1464; // [rsp+F0h] [rbp-10h]
  SIZE_T v1465; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID v1466; // [rsp+100h] [rbp+0h]
  void *v1467; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v1468; // [rsp+110h] [rbp+10h]
  unsigned int v1469; // [rsp+118h] [rbp+18h]
  LPVOID v1470; // [rsp+120h] [rbp+20h]
  LPVOID v1471; // [rsp+128h] [rbp+28h]
  SIZE_T v1472; // [rsp+130h] [rbp+30h]
  unsigned __int16 *v1473; // [rsp+138h] [rbp+38h]
  int v1474; // [rsp+140h] [rbp+40h]
  int v1475; // [rsp+144h] [rbp+44h]
  int v1476; // [rsp+148h] [rbp+48h]
  int v1477; // [rsp+14Ch] [rbp+4Ch]
  int v1478; // [rsp+150h] [rbp+50h]
  int v1479; // [rsp+154h] [rbp+54h]
  int v1480; // [rsp+158h] [rbp+58h]
  unsigned int v1481; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1482; // [rsp+160h] [rbp+60h] BYREF
  int v1483; // [rsp+164h] [rbp+64h] BYREF
  SIZE_T dwBytes; // [rsp+168h] [rbp+68h] BYREF
  int v1485; // [rsp+170h] [rbp+70h] BYREF
  int v1486; // [rsp+174h] [rbp+74h] BYREF
  int v1487; // [rsp+178h] [rbp+78h] BYREF
  int v1488; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1489; // [rsp+180h] [rbp+80h] BYREF
  int v1490; // [rsp+184h] [rbp+84h] BYREF
  int v1491; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1492; // [rsp+194h] [rbp+94h] BYREF
  int v1493; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1494; // [rsp+19Ch] [rbp+9Ch] BYREF
  int v1495; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1496; // [rsp+1A4h] [rbp+A4h] BYREF
  int v1497; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1498; // [rsp+1ACh] [rbp+ACh] BYREF
  int v1499; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1500; // [rsp+1B4h] [rbp+B4h] BYREF
  int v1501; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1502; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1503; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1504; // [rsp+1C4h] [rbp+C4h] BYREF
  int v1505; // [rsp+1C8h] [rbp+C8h] BYREF
  int v1506; // [rsp+1CCh] [rbp+CCh] BYREF
  int v1507; // [rsp+1D0h] [rbp+D0h] BYREF
  int v1508; // [rsp+1D4h] [rbp+D4h] BYREF
  int v1509; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1510; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1511; // [rsp+1E0h] [rbp+E0h]
  unsigned int v1512; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1513; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1514; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1515; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1516; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1517; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1518; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1519; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1520; // [rsp+204h] [rbp+104h] BYREF
  SIZE_T v1521; // [rsp+208h] [rbp+108h] BYREF
  int v1522; // [rsp+210h] [rbp+110h] BYREF
  int v1523; // [rsp+214h] [rbp+114h] BYREF
  int v1524; // [rsp+218h] [rbp+118h] BYREF
  int v1525; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1526; // [rsp+228h] [rbp+128h] BYREF
  int v1527; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1528; // [rsp+230h] [rbp+130h] BYREF
  int v1529; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1530; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1531; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1532; // [rsp+240h] [rbp+140h] BYREF
  int v1533; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1534; // [rsp+248h] [rbp+148h] BYREF
  unsigned int v1535; // [rsp+24Ch] [rbp+14Ch]
  unsigned int v1536; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1537; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1538; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1539; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1540; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v1541; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1542; // [rsp+268h] [rbp+168h] BYREF
  unsigned int v1543; // [rsp+26Ch] [rbp+16Ch] BYREF
  _DWORD *v1544; // [rsp+270h] [rbp+170h] BYREF
  size_t v1545; // [rsp+278h] [rbp+178h] BYREF
  struct IServiceProvider *v1546; // [rsp+280h] [rbp+180h]
  __int128 v1547; // [rsp+290h] [rbp+190h] BYREF
  unsigned __int16 *v1548; // [rsp+2A8h] [rbp+1A8h] BYREF
  wchar_t *String1; // [rsp+2C0h] [rbp+1C0h] BYREF
  wchar_t *v1550; // [rsp+2C8h] [rbp+1C8h] BYREF
  wchar_t *v1551; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v1552[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  size_t pcchLength[2]; // [rsp+2E8h] [rbp+1E8h] BYREF
  int *v1554; // [rsp+2F8h] [rbp+1F8h] BYREF
  int *v1555; // [rsp+300h] [rbp+200h] BYREF
  int *v1556; // [rsp+308h] [rbp+208h] BYREF
  _DWORD *v1557; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int64 m; // [rsp+318h] [rbp+218h] BYREF
  int *v1559; // [rsp+320h] [rbp+220h] BYREF
  int *v1560; // [rsp+328h] [rbp+228h] BYREF
  void *v1561; // [rsp+338h] [rbp+238h] BYREF
  unsigned int *v1562; // [rsp+340h] [rbp+240h] BYREF
  _DWORD *v1563; // [rsp+348h] [rbp+248h] BYREF
  HMODULE phModule; // [rsp+350h] [rbp+250h] BYREF
  void *v1565; // [rsp+358h] [rbp+258h] BYREF
  __int64 *v1566; // [rsp+360h] [rbp+260h] BYREF
  void *v1567; // [rsp+368h] [rbp+268h] BYREF
  unsigned __int64 v1568; // [rsp+370h] [rbp+270h] BYREF
  unsigned __int64 v1569; // [rsp+378h] [rbp+278h] BYREF
  unsigned __int64 v1570; // [rsp+380h] [rbp+280h] BYREF
  _DWORD *v1571; // [rsp+388h] [rbp+288h] BYREF
  _DWORD *v1572; // [rsp+390h] [rbp+290h] BYREF
  __int64 v1573; // [rsp+398h] [rbp+298h] BYREF
  _DWORD *v1574; // [rsp+3A0h] [rbp+2A0h] BYREF
  _DWORD *v1575; // [rsp+3A8h] [rbp+2A8h] BYREF
  unsigned int *v1576; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v1577; // [rsp+3B8h] [rbp+2B8h] BYREF
  LPVOID v1578; // [rsp+3C8h] [rbp+2C8h]
  void **v1579; // [rsp+3D0h] [rbp+2D0h] BYREF
  LPVOID v1580; // [rsp+3E0h] [rbp+2E0h]
  void *v1581; // [rsp+3E8h] [rbp+2E8h] BYREF
  void *v1582; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v1583; // [rsp+3F8h] [rbp+2F8h]
  _OWORD *v1584; // [rsp+400h] [rbp+300h] BYREF
  char *v1585; // [rsp+408h] [rbp+308h] BYREF
  void *v1586[4]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v1587; // [rsp+430h] [rbp+330h]
  __int64 v1588; // [rsp+438h] [rbp+338h] BYREF
  __int64 v1589; // [rsp+440h] [rbp+340h] BYREF
  __int64 v1590; // [rsp+448h] [rbp+348h] BYREF
  __int64 v1591; // [rsp+450h] [rbp+350h] BYREF
  int *v1592; // [rsp+458h] [rbp+358h] BYREF
  _QWORD v1593[4]; // [rsp+460h] [rbp+360h] BYREF
  size_t v1594; // [rsp+480h] [rbp+380h] BYREF
  size_t v1595; // [rsp+488h] [rbp+388h] BYREF
  size_t v1596; // [rsp+490h] [rbp+390h] BYREF
  void *v1597; // [rsp+498h] [rbp+398h] BYREF
  __int64 v1598[2]; // [rsp+4A0h] [rbp+3A0h] BYREF
  void *v1599; // [rsp+4B0h] [rbp+3B0h] BYREF
  unsigned int *v1600; // [rsp+4B8h] [rbp+3B8h] BYREF
  unsigned __int64 v1601; // [rsp+4C0h] [rbp+3C0h] BYREF
  HMODULE hModule; // [rsp+4C8h] [rbp+3C8h] BYREF
  void *v1603; // [rsp+4D0h] [rbp+3D0h] BYREF
  void *v1604; // [rsp+4D8h] [rbp+3D8h] BYREF
  SIZE_T v1605; // [rsp+4E0h] [rbp+3E0h] BYREF
  unsigned __int64 v1606; // [rsp+4E8h] [rbp+3E8h] BYREF
  SIZE_T v1607; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int64 v1608[2]; // [rsp+4F8h] [rbp+3F8h] BYREF
  __int64 v1609[2]; // [rsp+508h] [rbp+408h] BYREF
  void *v1610[2]; // [rsp+518h] [rbp+418h] BYREF
  size_t *v1611; // [rsp+528h] [rbp+428h] BYREF
  void *Src[2]; // [rsp+530h] [rbp+430h] BYREF
  LPVOID v1613[2]; // [rsp+540h] [rbp+440h]
  __int64 v1614; // [rsp+550h] [rbp+450h]
  void *v1615[2]; // [rsp+558h] [rbp+458h] BYREF
  void *v1616[2]; // [rsp+568h] [rbp+468h] BYREF
  __int64 v1617[2]; // [rsp+578h] [rbp+478h] BYREF
  void *v1618[2]; // [rsp+588h] [rbp+488h] BYREF
  __int64 v1619[2]; // [rsp+598h] [rbp+498h] BYREF
  unsigned int *v1620; // [rsp+5A8h] [rbp+4A8h] BYREF
  __int128 v1621; // [rsp+5B0h] [rbp+4B0h]
  __int128 v1622; // [rsp+5C0h] [rbp+4C0h] BYREF
  size_t v1623[2]; // [rsp+5D0h] [rbp+4D0h] BYREF
  LPVOID v1624[2]; // [rsp+5E0h] [rbp+4E0h]
  __int64 v1625; // [rsp+5F0h] [rbp+4F0h]
  __int64 v1626[2]; // [rsp+5F8h] [rbp+4F8h] BYREF
  void *v1627; // [rsp+608h] [rbp+508h] BYREF
  __int128 v1628; // [rsp+610h] [rbp+510h] BYREF
  __int128 v1629; // [rsp+620h] [rbp+520h]
  __int128 v1630; // [rsp+630h] [rbp+530h] BYREF
  __int128 v1631; // [rsp+640h] [rbp+540h]
  int v1632; // [rsp+650h] [rbp+550h] BYREF
  _DWORD v1633[5]; // [rsp+654h] [rbp+554h] BYREF
  unsigned __int16 *v1634; // [rsp+668h] [rbp+568h]
  int v1635; // [rsp+6C0h] [rbp+5C0h] BYREF
  char v1636[20]; // [rsp+6C4h] [rbp+5C4h] BYREF
  const WCHAR *v1637; // [rsp+6D8h] [rbp+5D8h]
  int v1638; // [rsp+730h] [rbp+630h] BYREF
  _DWORD v1639[5]; // [rsp+734h] [rbp+634h] BYREF
  unsigned __int16 *v1640; // [rsp+748h] [rbp+648h]
  int v1641; // [rsp+7A0h] [rbp+6A0h] BYREF
  char v1642[20]; // [rsp+7A4h] [rbp+6A4h] BYREF
  const WCHAR *v1643; // [rsp+7B8h] [rbp+6B8h]
  int v1644; // [rsp+810h] [rbp+710h] BYREF
  _DWORD v1645[5]; // [rsp+814h] [rbp+714h] BYREF
  unsigned __int16 *v1646; // [rsp+828h] [rbp+728h]
  int v1647; // [rsp+880h] [rbp+780h] BYREF
  _DWORD v1648[3]; // [rsp+884h] [rbp+784h] BYREF
  __int16 v1649; // [rsp+892h] [rbp+792h]
  __int64 v1650; // [rsp+898h] [rbp+798h]
  int v1651; // [rsp+8F0h] [rbp+7F0h] BYREF
  char v1652[20]; // [rsp+8F4h] [rbp+7F4h] BYREF
  char *v1653; // [rsp+908h] [rbp+808h]
  int v1654; // [rsp+960h] [rbp+860h] BYREF
  _DWORD v1655[5]; // [rsp+964h] [rbp+864h] BYREF
  unsigned __int16 *v1656; // [rsp+978h] [rbp+878h]
  int v1657; // [rsp+9D0h] [rbp+8D0h] BYREF
  char v1658[20]; // [rsp+9D4h] [rbp+8D4h] BYREF
  unsigned __int16 *v1659; // [rsp+9E8h] [rbp+8E8h]
  int v1660; // [rsp+A40h] [rbp+940h] BYREF
  int v1661; // [rsp+A44h] [rbp+944h]
  void *v1662; // [rsp+A48h] [rbp+948h]
  void *v1663; // [rsp+A50h] [rbp+950h]
  void *v1664; // [rsp+A58h] [rbp+958h]
  const WCHAR *v1665; // [rsp+A60h] [rbp+960h]
  const WCHAR *v1666; // [rsp+A68h] [rbp+968h]
  __int64 v1667; // [rsp+A70h] [rbp+970h]
  int v1668; // [rsp+A78h] [rbp+978h]
  __m128i v1669; // [rsp+A7Ch] [rbp+97Ch] BYREF
  __m128i v1670; // [rsp+A8Ch] [rbp+98Ch] BYREF
  unsigned int v1671; // [rsp+A9Ch] [rbp+99Ch] BYREF
  unsigned int v1672; // [rsp+AA0h] [rbp+9A0h]
  unsigned __int32 v1673; // [rsp+AA4h] [rbp+9A4h]
  unsigned int v1674; // [rsp+AA8h] [rbp+9A8h]
  unsigned __int64 v1675; // [rsp+AB0h] [rbp+9B0h]
  __int64 v1676; // [rsp+AB8h] [rbp+9B8h]
  unsigned __int64 v1677; // [rsp+AC0h] [rbp+9C0h]
  __int64 v1678; // [rsp+AC8h] [rbp+9C8h]
  __int128 v1679; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int128 v1680; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int64 v1681; // [rsp+AF0h] [rbp+9F0h] BYREF
  unsigned __int32 v1682; // [rsp+AF8h] [rbp+9F8h]
  __int32 v1683; // [rsp+AFCh] [rbp+9FCh]
  __int128 v1684; // [rsp+B00h] [rbp+A00h] BYREF
  __int128 v1685; // [rsp+B10h] [rbp+A10h] BYREF
  __int128 v1686; // [rsp+B20h] [rbp+A20h]
  __int128 v1687; // [rsp+B30h] [rbp+A30h] BYREF
  _OWORD v1688[2]; // [rsp+B40h] [rbp+A40h] BYREF
  __int128 v1689; // [rsp+B60h] [rbp+A60h] BYREF
  __int128 v1690; // [rsp+B70h] [rbp+A70h] BYREF
  __int64 v1691; // [rsp+B80h] [rbp+A80h]
  __int128 v1692; // [rsp+B88h] [rbp+A88h] BYREF
  __int128 v1693; // [rsp+B98h] [rbp+A98h] BYREF
  __int64 v1694; // [rsp+BA8h] [rbp+AA8h]
  _DWORD v1695[12]; // [rsp+BB0h] [rbp+AB0h] BYREF
  __int128 v1696; // [rsp+BE0h] [rbp+AE0h] BYREF
  __int128 v1697; // [rsp+BF0h] [rbp+AF0h]
  __int64 v1698; // [rsp+C00h] [rbp+B00h]
  int v1699; // [rsp+C08h] [rbp+B08h]
  __int128 v1700; // [rsp+C10h] [rbp+B10h] BYREF
  __int128 v1701; // [rsp+C20h] [rbp+B20h]
  __int64 v1702; // [rsp+C30h] [rbp+B30h]
  int v1703; // [rsp+C38h] [rbp+B38h]
  __int128 v1704; // [rsp+C40h] [rbp+B40h] BYREF
  __int128 v1705; // [rsp+C50h] [rbp+B50h]
  __int64 v1706; // [rsp+C60h] [rbp+B60h]
  int v1707; // [rsp+C68h] [rbp+B68h]
  __int128 v1708; // [rsp+C70h] [rbp+B70h] BYREF
  __int128 v1709; // [rsp+C80h] [rbp+B80h]
  __int64 v1710; // [rsp+C90h] [rbp+B90h]
  int v1711; // [rsp+C98h] [rbp+B98h]
  _DWORD v1712[6]; // [rsp+CA0h] [rbp+BA0h] BYREF
  char v1713; // [rsp+CBAh] [rbp+BBAh]
  unsigned __int16 v1714[34]; // [rsp+CBCh] [rbp+BBCh] BYREF
  _DWORD v1715[6]; // [rsp+D00h] [rbp+C00h] BYREF
  char v1716; // [rsp+D1Ah] [rbp+C1Ah]
  unsigned __int16 v1717[34]; // [rsp+D1Ch] [rbp+C1Ch] BYREF
  _DWORD v1718[6]; // [rsp+D60h] [rbp+C60h] BYREF
  char v1719; // [rsp+D7Ah] [rbp+C7Ah]
  unsigned __int16 v1720[34]; // [rsp+D7Ch] [rbp+C7Ch] BYREF
  _BYTE v1721[68]; // [rsp+DC0h] [rbp+CC0h] BYREF
  __int16 v1722; // [rsp+E04h] [rbp+D04h]
  unsigned __int16 v1723; // [rsp+E66h] [rbp+D66h]
  __int64 v1724; // [rsp+E6Ch] [rbp+D6Ch]
  _OWORD v1725[3]; // [rsp+EA0h] [rbp+DA0h] BYREF
  int v1726; // [rsp+ED0h] [rbp+DD0h] BYREF
  __int128 v1727; // [rsp+ED8h] [rbp+DD8h]
  __int128 v1728; // [rsp+EE8h] [rbp+DE8h]
  __int128 v1729; // [rsp+EF8h] [rbp+DF8h]
  __int64 v1730; // [rsp+F08h] [rbp+E08h]
  __int64 v1731; // [rsp+F10h] [rbp+E10h] BYREF
  char v1732[152]; // [rsp+F18h] [rbp+E18h] BYREF
  int v1733; // [rsp+FB0h] [rbp+EB0h] BYREF
  __int16 v1734; // [rsp+FB4h] [rbp+EB4h]
  _BYTE v1735[176]; // [rsp+FC0h] [rbp+EC0h] BYREF
  WCHAR Filename[264]; // [rsp+1070h] [rbp+F70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+12C8h] [rbp+11C8h]

  v3 = a2;
  v1546 = a2;
  v4 = this;
  *(_QWORD *)&v1547 = this;
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
    v20 = 0;
    if ( IsUserOOBE() )
    {
LABEL_1640:
      v1216 = (char *)v4 + 120;
      if ( v4 == (CDesktopPositioner *)48 )
        v1216 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)v4 + 31) + 96LL))(
             *((_QWORD *)v4 + 31),
             v1216,
             (__int64)v4 + 352);
      if ( v7 < 0 )
      {
        v8 = 200LL;
        goto LABEL_3;
      }
      v1217 = (char *)v4 + 128;
      if ( v4 == (CDesktopPositioner *)48 )
        v1217 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)v4 + 32) + 72LL))(
             *((_QWORD *)v4 + 32),
             v1217,
             (__int64)v4 + 356);
      if ( v7 < 0 )
      {
        v8 = 201LL;
        goto LABEL_3;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v4 + 32) + 24LL))(*((_QWORD *)v4 + 32), (__int64)v4 + 208);
      v1218 = v3->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 36);
      v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v1218)(
             v3,
             &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
             &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
             (char *)v4 + 288);
      if ( v7 < 0 )
      {
        v8 = 205LL;
        goto LABEL_3;
      }
      v1566 = 0LL;
      v1219 = *((_QWORD *)v4 + 36);
      v1220 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v1219 + 24LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v1566);
      v1221 = v1220(v1219, 1LL, &v1566);
      v7 = v1221;
      if ( v1221 >= 0 )
      {
        v1542 = 0;
        if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)v4 + 27) + 32LL))(
               *((_QWORD *)v4 + 27),
               &v1542) >= 0 )
        {
          for ( i = 0; i < v1542; ++i )
          {
            v1573 = 0LL;
            v1224 = *((_QWORD *)v4 + 27);
            v1225 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v1224 + 40LL);
            wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v1573);
            if ( v1225(v1224, i, &v1573) >= 0 )
            {
              v1687 = 0LL;
              v1226 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v1573 + 88LL))(v1573, &v1687);
              if ( v1226 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xDC,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v1226);
              v1227 = *v1566;
              v1547 = v1687;
              v1228 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v1227 + 56))(
                        v1566,
                        v1573,
                        &v1547,
                        1LL);
              if ( v1228 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xDD,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v1228);
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v1573);
          }
        }
        v1221 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v1566 + 40))(v1566, *((_DWORD *)v4 + 52) == 0 ? 3 : 0);
        v7 = v1221;
        if ( v1221 >= 0 )
        {
          v1598[0] = 0LL;
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v1598);
          v1229 = Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo((_QWORD *)v4 + 27);
          v7 = v1229;
          if ( v1229 >= 0 )
          {
            v1231 = (char *)v4 + 112;
            if ( v4 == (CDesktopPositioner *)48 )
              v1231 = 0LL;
            v1229 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v1598[0] + 24LL))(
                      v1598[0],
                      v1231,
                      (__int64)v4 + 364);
            v7 = v1229;
            if ( v1229 >= 0 )
            {
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v1598);
              v7 = 0;
              goto LABEL_1671;
            }
            v1230 = 236LL;
          }
          else
          {
            v1230 = 235LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v1230,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v1229);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v1598);
LABEL_1671:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v1566);
          return (unsigned int)v7;
        }
        v1222 = 231LL;
      }
      else
      {
        v1222 = 208LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v1222,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v1221);
      goto LABEL_1671;
    }
    v1478 = 0;
    if ( (unsigned int)CloudPCHelpers::GetCloudPCMode() == 1 )
    {
      *((_DWORD *)v4 + 125) = 1;
      goto LABEL_1638;
    }
    v1474 = 0;
    v1548 = 0LL;
    v1479 = 0;
    v1480 = 0;
    v1465 = 0LL;
    v21 = 0;
    while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
      ;
    v1475 = -1;
    v22 = dword_18089D72C;
    if ( !dword_18089D72C )
    {
      v1476 = 0;
      v23 = MemoryAlloc(0x338uLL);
      lpModuleName = (WCHAR *)v23;
      if ( !v23 )
        goto LABEL_35;
      v24 = -1;
      v25 = 0;
      v26 = 0;
      v27 = v23 + 7;
      v28 = (unsigned __int8 *)&unk_1807573B2;
      v29 = 103LL;
      do
      {
        v30 = v28[1] | ((*v28 | ((*(v28 - 1) | (*(v28 - 2) << 8)) << 8)) << 8);
        v31 = v28[5] | ((v28[4] | ((v28[3] | (v28[2] << 8)) << 8)) << 8);
        v32 = v30 ^ v26;
        v28 += 8;
        v33 = v32 ^ v25 ^ v31 ^ 0xAC987321;
        v34 = (4991 * __ROR4__(v33 + 1419157410, 27) + __ROR4__(v33, 22)) ^ v32;
        v35 = (43881 * __ROR4__(v34 + 133239679, 9) - __ROR4__(v34, 30)) ^ v33;
        v36 = (24670 * v35 - (v35 >> 13) - 123127970) ^ v34;
        v37 = (2033 * __ROR4__(v36 ^ 0xAB69, 26) - __ROR4__(v36, 30)) ^ v35;
        v38 = (133239679 - (v37 ^ 0xAB69605E)) ^ v36;
        v39 = (43881 * (v38 ^ 0x137F)) ^ __ROR4__(v38, 6) ^ v37;
        v40 = (24670 * __ROR4__(v39 + 133239679, 15) + __ROR4__(v39, 30)) ^ v38;
        v41 = (2033 * __ROR4__(v40 + 1419157410, 14) - __ROR4__(v40, 24)) ^ v39;
        v42 = (4991 * __ROR4__(v41 ^ 0xAB69605E, 12)) ^ __ROR4__(v41, 10) ^ v40;
        v43 = (v42 >> 10) ^ (43881 * (v42 ^ 0x7F1)) ^ v41;
        v44 = (2033 * (__ROR4__(~v43, 5) + 24670)) ^ v42;
        v45 = v43 ^ (v44 - 2033) ^ 0xAB69605E;
        v46 = (4991 * __ROR4__(v43 ^ (v44 - 2033) ^ 0xAB6967AF, 30) + (v45 >> 2)) ^ v44;
        v47 = (43881 * __ROR4__(v46 - 133239679, 6) + __ROR4__(v46, 25)) ^ v45;
        v48 = (24670 * (v47 ^ 0x137F) + __ROR4__(v47, 9)) ^ v46;
        v49 = (2033 * __ROR4__(v48 ^ 0xAB69, 27) + __ROR4__(v48, 25)) ^ v47;
        v50 = v49 ^ v48 ^ 0xAC987321;
        v51 = (4991 * __ROR4__(v50, 3) - 219010071) ^ v49;
        v52 = (24670 * __ROR4__(v51 - 133239679, 1) - __ROR4__(v51, 6)) ^ v50;
        v53 = (2033 * __ROR4__(v52 - 1419157410, 29) + __ROR4__(v52, 18)) ^ v51;
        v54 = (4991 * __ROR4__(v53 - 1419157410, 17) - __ROR4__(v53, 14)) ^ v52;
        v55 = (v54 >> 3) ^ (43881 * (v54 ^ 0x605E)) ^ v53;
        v26 = (24670 * __ROR4__(v55 ^ 0x7F1137F, 28)) ^ __ROR4__(v55, 30) ^ v20 ^ v54;
        v25 = v24 ^ v55;
        *(v27 - 4) = v26;
        *v27 = v25;
        *(v27 - 5) = BYTE1(v26);
        *(v27 - 1) = BYTE1(v25);
        *(v27 - 6) = (unsigned __int16)(v26 >> 8) >> 8;
        *(v27 - 2) = (unsigned __int16)(v25 >> 8) >> 8;
        *(v27 - 7) = __ROR4__((((v26 >> 8) | (v26 << 24)) >> 8) | (((v26 >> 8) | (v26 << 24)) << 24), 8);
        *(v27 - 3) = __ROR4__((((v25 >> 8) | (v25 << 24)) >> 8) | (((v25 >> 8) | (v25 << 24)) << 24), 8);
        v20 = v30;
        v24 = v31;
        v27 += 8;
        --v29;
      }
      while ( v29 );
      v56 = 0LL;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      do
        v57 ^= v23[v56++];
      while ( v56 < 0x338 );
      if ( v57 != 64LL )
      {
        MemoryFree(v23);
        v21 = 0;
LABEL_35:
        v60 = qword_180899E50;
        v61 = 4LL;
        do
        {
          if ( *v60 )
            FreeLibrary(*v60);
          v60 += 3;
          --v61;
        }
        while ( v61 );
        memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
        v62 = off_180891340;
        v63 = off_1806EF510;
        v64 = 2LL;
        do
        {
          *(_OWORD *)v62 = *(_OWORD *)v63;
          *((_OWORD *)v62 + 1) = *((_OWORD *)v63 + 1);
          *((_OWORD *)v62 + 2) = *((_OWORD *)v63 + 2);
          *((_OWORD *)v62 + 3) = *((_OWORD *)v63 + 3);
          *((_OWORD *)v62 + 4) = *((_OWORD *)v63 + 4);
          *((_OWORD *)v62 + 5) = *((_OWORD *)v63 + 5);
          *((_OWORD *)v62 + 6) = *((_OWORD *)v63 + 6);
          v62 += 16;
          *((_OWORD *)v62 - 1) = *((_OWORD *)v63 + 7);
          v63 += 16;
          --v64;
        }
        while ( v64 );
        *(_OWORD *)v62 = *(_OWORD *)v63;
        *((_OWORD *)v62 + 1) = *((_OWORD *)v63 + 1);
        *((_OWORD *)v62 + 2) = *((_OWORD *)v63 + 2);
        *((_OWORD *)v62 + 3) = *((_OWORD *)v63 + 3);
        *((_OWORD *)v62 + 4) = *((_OWORD *)v63 + 4);
        v2 = *((_OWORD *)v63 + 5);
        *((_OWORD *)v62 + 5) = v2;
        *((_OWORD *)v62 + 6) = *((_OWORD *)v63 + 6);
LABEL_70:
        _InterlockedExchange(&dword_18089D738, 0);
        String1 = 0LL;
        v1550 = 0LL;
        v78 = 0;
        LastError = 0;
        if ( NtCurrentPeb()->SessionId )
        {
          v80 = off_180891450[0]();
          v81 = 0LL;
          if ( !v80 )
          {
LABEL_72:
            LastError = GetLastError();
            v82 = LastError < 0;
            if ( LastError > 0 )
            {
              LastError = (unsigned __int16)LastError | 0x80070000;
              v82 = LastError < 0;
            }
            if ( !v82 )
              LastError = -2147467259;
            goto LABEL_125;
          }
          v1481 = 0;
          v83 = 0LL;
          v1551 = 0LL;
          for ( j = 0LL; ; j = v1481 )
          {
            v85 = v83;
            if ( !v81 )
              v85 = 0LL;
            if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180891470[0])(
                   v80,
                   2LL,
                   v85,
                   j,
                   &v1481) )
            {
              v1551 = 0LL;
              String1 = v83;
              goto LABEL_93;
            }
            v86 = GetLastError();
            if ( v86 != 122 )
              break;
            if ( v83 )
              goto LABEL_87;
            v83 = (wchar_t *)MemoryAlloc(v1481);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1551);
            if ( !v83 )
              v83 = 0LL;
            v81 = v83;
            v1551 = v83;
            if ( !v83 )
            {
              LastError = -2147024882;
              goto LABEL_93;
            }
          }
          if ( !v86 )
          {
LABEL_87:
            LastError = -2147467259;
            goto LABEL_93;
          }
          if ( v86 > 0 )
            LastError = (unsigned __int16)v86 | 0x80070000;
          else
            LastError = v86;
LABEL_93:
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1551);
          if ( LastError < 0 )
            goto LABEL_125;
          v87 = off_180891468[0];
          CurrentThreadId = GetCurrentThreadId();
          v89 = ((__int64 (__fastcall *)(_QWORD))v87)(CurrentThreadId);
          v90 = 0LL;
          if ( !v89 )
          {
            LastError = GetLastError();
            v91 = LastError < 0;
            if ( LastError > 0 )
            {
              LastError = (unsigned __int16)LastError | 0x80070000;
              v91 = LastError < 0;
            }
            if ( !v91 )
              LastError = -2147467259;
            goto LABEL_125;
          }
          v1482 = 0;
          v92 = 0LL;
          v1552[0] = 0LL;
          LastError = 0;
          for ( k = 0LL; ; k = v1482 )
          {
            v94 = v92;
            if ( !v90 )
              v94 = 0LL;
            if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180891470[0])(
                   v89,
                   2LL,
                   v94,
                   k,
                   &v1482) )
            {
              v1552[0] = 0LL;
              v1550 = v92;
              goto LABEL_116;
            }
            v95 = GetLastError();
            if ( v95 != 122 )
              break;
            if ( v92 )
              goto LABEL_110;
            v92 = (wchar_t *)MemoryAlloc(v1482);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1552);
            if ( !v92 )
              v92 = 0LL;
            v90 = v92;
            v1552[0] = v92;
            if ( !v92 )
            {
              LastError = -2147024882;
              goto LABEL_116;
            }
          }
          if ( !v95 )
          {
LABEL_110:
            LastError = -2147467259;
            goto LABEL_116;
          }
          LastError = v95 > 0 ? (unsigned __int16)v95 | 0x80070000 : v95;
LABEL_116:
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1552);
          if ( LastError < 0 )
          {
LABEL_125:
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1550);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&String1);
            v97 = 0;
            if ( LastError >= 0 )
              v97 = v21;
            v1469 = v97;
            v98 = LocalAlloc(0x40u, 4uLL);
            SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(&v1465, v98);
            v1473 = (unsigned __int16 *)v1465;
            if ( !v1465 )
            {
              v99 = -2147024882;
              v100 = 0;
              goto LABEL_1609;
            }
            v101 = 0LL;
            *(_OWORD *)Src = 0LL;
            LODWORD(v2) = 0;
            *(_OWORD *)v1613 = 0LL;
            ProcessHeap = GetProcessHeap();
            v103 = (WCHAR *)HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
            lpModuleNamea = v103;
            v1476 = 56;
            if ( !v103 )
            {
              v99 = -1073741801;
              v1477 = -1073741801;
              v103 = 0LL;
              goto LABEL_133;
            }
            *(_OWORD *)v103 = xmmword_180897FA0[0];
            *((_OWORD *)v103 + 1) = *((_OWORD *)&_ImageBase + 563195);
            *((_OWORD *)v103 + 2) = *((_OWORD *)&_ImageBase + 563196);
            *((_OWORD *)v103 + 3) = *((_OWORD *)&_ImageBase + 563197);
            *((_OWORD *)v103 + 4) = *((_OWORD *)&_ImageBase + 563198);
            *((_OWORD *)v103 + 5) = *((_OWORD *)&_ImageBase + 563199);
            *((_OWORD *)v103 + 6) = *((_OWORD *)&_ImageBase + 563200);
            *((_OWORD *)v103 + 7) = xmmword_180897FA0[7];
            *((_OWORD *)v103 + 8) = xmmword_180897FA0[8];
            v2 = xmmword_180897FA0[9];
            *((_OWORD *)v103 + 9) = v2;
            v104 = GetProcessHeap();
            v101 = HeapAlloc(v104, 8u, 8uLL);
            v1325 = (SIZE_T)v101;
            if ( !v101 )
            {
              v99 = -1073741801;
              v1477 = -1073741801;
              v101 = 0LL;
              v105 = v97;
              goto LABEL_364;
            }
            *v101 = qword_180897F90;
            v1390 = __rdtsc();
            dwBytes = 0LL;
            v106 = RtlUIntAdd(4u, 4, (int *)&dwBytes + 1);
            v99 = v106;
            v1477 = v106;
            if ( v106 < 0 )
            {
LABEL_133:
              v105 = v97;
              goto LABEL_364;
            }
            v107 = RtlUIntAdd(0, SHIDWORD(dwBytes), (int *)&dwBytes);
            v99 = v107 | 0x10000000;
            v1477 = v107 | 0x10000000;
            v105 = v97;
            if ( v107 < 0 )
              goto LABEL_364;
            v1485 = 0;
            v99 = RtlUIntAdd(v108, 160, &v1485);
            v1477 = v99;
            if ( v99 < 0 )
              goto LABEL_364;
            v109 = RtlUIntAdd(dwBytes, v1485, (int *)&dwBytes);
            v99 = v112 | v109;
            v1477 = v112 | v109;
            if ( (v112 | v109) < 0 )
              goto LABEL_364;
            v1486 = 0;
            v99 = RtlUIntAdd(v111, v110, &v1486);
            v1477 = v99;
            if ( v99 < 0 )
              goto LABEL_364;
            v113 = RtlUIntAdd(dwBytes, v1486, (int *)&dwBytes);
            v99 = v115 | v113;
            v1477 = v115 | v113;
            if ( (v115 | v113) < 0 )
              goto LABEL_364;
            v1487 = 0;
            v99 = RtlUIntAdd(v114, 8, &v1487);
            v1477 = v99;
            if ( v99 < 0 )
              goto LABEL_364;
            v116 = RtlUIntAdd(dwBytes, v1487, (int *)&dwBytes);
            v99 = v118 | v116;
            v1477 = v118 | v116;
            if ( (v118 | v116) < 0 )
              goto LABEL_364;
            pcchLength[0] = 0LL;
            if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v117, pcchLength) < 0 )
            {
              v99 = -1073741762;
LABEL_363:
              v1477 = v99;
              goto LABEL_364;
            }
            ++pcchLength[0];
            v1488 = 0;
            v99 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), &v1488);
            v1477 = v99;
            if ( v99 < 0 )
              goto LABEL_364;
            v119 = RtlUIntAdd(dwBytes, v1488, (int *)&dwBytes);
            v99 = v119 | 0x10000000;
            v1477 = v119 | 0x10000000;
            if ( v119 < 0 )
              goto LABEL_364;
            v1489 = 0;
            v99 = RtlUIntAdd(4u, 4, &v1489);
            v1477 = v99;
            if ( v99 < 0 )
              goto LABEL_364;
            v120 = RtlUIntAdd(dwBytes, v1489, (int *)&dwBytes);
            v99 = v122 | v120;
            v1477 = v122 | v120;
            if ( (v122 | v120) < 0 )
              goto LABEL_364;
            v1490 = 0;
            v99 = RtlUIntAdd(v121, v121, &v1490);
            v1477 = v99;
            if ( v99 < 0 )
              goto LABEL_364;
            v123 = RtlUIntAdd(dwBytes, v1490, (int *)&dwBytes);
            v99 = v124 | v123;
            v1477 = v124 | v123;
            if ( (v124 | v123) < 0 )
              goto LABEL_364;
            HIDWORD(Src[0]) = dwBytes;
            v125 = dwBytes;
            v126 = GetProcessHeap();
            v127 = HeapAlloc(v126, 8u, v125);
            if ( !v127 )
            {
              v129 = -1073741801;
              v99 = -1073741801;
LABEL_154:
              v1477 = v129;
              goto LABEL_579;
            }
            Src[1] = v127;
            LODWORD(Src[0]) = 0;
            LODWORD(v1609[0]) = 0;
            v1608[1] = 0LL;
            pcchLength[1] = (size_t)Src[1];
            v99 = RtlULongLongAdd((unsigned __int64)Src[1], 4LL, v1609);
            v1477 = v99;
            if ( v99 < 0 )
            {
              v105 = v97;
              goto LABEL_364;
            }
            if ( v130 + 2 > (_DWORD *)((char *)v130 + HIDWORD(Src[0])) )
              goto LABEL_157;
            *v130 = 4;
            *(_DWORD *)v1609[0] = 0;
            v128 = ++LODWORD(Src[0]);
            LODWORD(v1615[0]) = 0;
            v1614 = 0LL;
            if ( Src[1] )
            {
              v134 = (int *)Src[1];
              v1554 = (int *)Src[1];
              v1401 = 0;
              if ( v128 )
              {
                do
                {
                  v1492 = 0;
                  v99 = RtlUIntAdd(4u, *v134, (int *)&v1492);
                  v1477 = v99;
                  if ( v99 < 0 )
                    goto LABEL_133;
                  v99 = RtlULongLongAdd(v135, v1492, (__int64 *)&v1554);
                  v1477 = v99;
                  if ( v99 < 0 )
                    goto LABEL_133;
                  ++v1401;
                  v134 = v1554;
                }
                while ( v1401 < v136 );
                v1325 = (SIZE_T)v101;
                lpModuleNamea = v103;
              }
              v99 = RtlULongLongAdd((unsigned __int64)v134, 4LL, (__int64 *)v1615);
              v1477 = v99;
              if ( v99 >= 0 )
              {
                if ( (char *)v138 + v137 + 4 > (char *)Src[1] + HIDWORD(Src[0]) )
                  goto LABEL_157;
                *v138 = v137;
                memcpy_0(v1615[0], v103, v137);
                v132 = (int)Src[0];
                v131 = 1;
LABEL_164:
                v133 = v131 + v132;
                LODWORD(Src[0]) = v133;
                LODWORD(v1616[0]) = 0;
                v1615[1] = 0LL;
                if ( Src[1] )
                {
                  v142 = (int *)Src[1];
                  v1555 = (int *)Src[1];
                  v1402 = 0;
                  if ( v133 )
                  {
                    do
                    {
                      v1494 = 0;
                      v99 = RtlUIntAdd(4u, *v142, (int *)&v1494);
                      v1477 = v99;
                      if ( v99 < 0 )
                        goto LABEL_133;
                      v99 = RtlULongLongAdd(v143, v1494, (__int64 *)&v1555);
                      v1477 = v99;
                      if ( v99 < 0 )
                        goto LABEL_133;
                      ++v1402;
                      v142 = v1555;
                    }
                    while ( v1402 < v144 );
                    v1325 = (SIZE_T)v101;
                    lpModuleNamea = v103;
                  }
                  v99 = RtlULongLongAdd((unsigned __int64)v142, 4LL, (__int64 *)v1616);
                  v1477 = v99;
                  if ( v99 >= 0 )
                  {
                    if ( v145 + 3 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
                      goto LABEL_157;
                    *v145 = 8;
                    memcpy_0(v1616[0], v101, 8uLL);
                    v140 = (int)Src[0];
                    v139 = 1;
LABEL_177:
                    v141 = v139 + v140;
                    LODWORD(Src[0]) = v141;
                    LODWORD(v1617[0]) = 0;
                    v1616[1] = 0LL;
                    if ( Src[1] )
                    {
                      v148 = (int *)Src[1];
                      v1556 = (int *)Src[1];
                      v1403 = 0;
                      if ( v141 )
                      {
                        do
                        {
                          v1496 = 0;
                          v99 = RtlUIntAdd(4u, *v148, (int *)&v1496);
                          v1477 = v99;
                          if ( v99 < 0 )
                            goto LABEL_133;
                          v99 = RtlULongLongAdd((unsigned __int64)v148, v1496, (__int64 *)&v1556);
                          v1477 = v99;
                          if ( v99 < 0 )
                            goto LABEL_133;
                          ++v1403;
                          v148 = v1556;
                        }
                        while ( v1403 < v149 );
                        v1325 = (SIZE_T)v101;
                        lpModuleNamea = v103;
                      }
                      v99 = RtlULongLongAdd((unsigned __int64)v148, 4LL, v1617);
                      v1477 = v99;
                      if ( v99 >= 0 )
                      {
                        if ( v148 + 3 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
                          goto LABEL_157;
                        *v148 = 8;
                        *(_QWORD *)v1617[0] = v1390;
                        ++LODWORD(Src[0]);
LABEL_200:
                        v1545 = 0LL;
                        if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v146, &v1545) < 0 )
                        {
                          v99 = -1073741762;
                          goto LABEL_158;
                        }
                        v99 = RtlULongLongAdd(v1545, 1LL, (__int64 *)&v1545);
                        v1477 = v99;
                        if ( v99 >= 0 )
                        {
                          LODWORD(v1618[0]) = 0;
                          v1617[1] = 0LL;
                          if ( 2 * (_DWORD)v1545 )
                          {
                            if ( !Src[1] )
                            {
                              v1497 = 0;
                              v99 = RtlUIntAdd(4u, 2 * (int)v1545, &v1497);
                              v1477 = v99;
                              if ( v99 >= 0 )
                              {
                                v99 = RtlUIntAdd(HIDWORD(Src[0]), v1497, (int *)Src + 1);
                                v1477 = v99;
                                v150 = (unsigned int)Src[0];
                                if ( v99 >= 0 )
                                {
                                  v150 = v151 + LODWORD(Src[0]);
                                  LODWORD(Src[0]) += v151;
                                  v99 = 0;
                                  v1477 = 0;
                                }
                              }
                              goto LABEL_219;
                            }
                            v152 = (int *)Src[1];
                            v1592 = (int *)Src[1];
                            if ( v150 )
                            {
                              do
                              {
                                v1498 = 0;
                                v99 = RtlUIntAdd(4u, *v152, (int *)&v1498);
                                v1477 = v99;
                                if ( v99 < 0 )
                                  goto LABEL_219;
                                v99 = RtlULongLongAdd((unsigned __int64)v152, v1498, (__int64 *)&v1592);
                                v1477 = v99;
                                if ( v99 < 0 )
                                  goto LABEL_219;
                                v152 = v1592;
                              }
                              while ( v153 + 1 < v150 );
                            }
                            v99 = RtlULongLongAdd((unsigned __int64)v152, 4LL, (__int64 *)v1618);
                            v1477 = v99;
                            if ( v99 < 0 )
                              goto LABEL_219;
                            if ( (char *)v152 + v154 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
                            {
                              *v152 = v154;
                              memcpy_0(v1618[0], L"Shell-Windowing-ShowMaximized", (unsigned int)v154);
                              v150 = ++LODWORD(Src[0]);
                              goto LABEL_219;
                            }
                            v99 = -1073741789;
                          }
                          else
                          {
                            v99 = -1073741811;
                          }
                          v1477 = v99;
                        }
LABEL_219:
                        v105 = v97;
                        if ( v99 < 0 )
                          goto LABEL_364;
                        LODWORD(v1619[0]) = 0;
                        v1618[1] = 0LL;
                        if ( Src[1] )
                        {
                          v158 = (int *)Src[1];
                          v1560 = (int *)Src[1];
                          v1404 = 0;
                          if ( v150 )
                          {
                            do
                            {
                              v1500 = 0;
                              v99 = RtlUIntAdd(4u, *v158, (int *)&v1500);
                              v1477 = v99;
                              if ( v99 < 0 )
                                goto LABEL_133;
                              v99 = RtlULongLongAdd((unsigned __int64)v158, v1500, (__int64 *)&v1560);
                              v1477 = v99;
                              if ( v99 < 0 )
                                goto LABEL_133;
                              ++v1404;
                              v158 = v1560;
                            }
                            while ( v1404 < v159 );
                            v1325 = (SIZE_T)v101;
                            lpModuleNamea = v103;
                          }
                          v99 = RtlULongLongAdd((unsigned __int64)v158, 4LL, v1619);
                          v1477 = v99;
                          if ( v99 >= 0 )
                          {
                            if ( v158 + 2 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
                              goto LABEL_157;
                            *v158 = 4;
                            *(_DWORD *)v1619[0] = v97;
                            v156 = (int)Src[0];
                            v155 = 1;
                            goto LABEL_223;
                          }
                        }
                        else
                        {
                          v1499 = 0;
                          v99 = RtlUIntAdd(4u, 4, &v1499);
                          v1477 = v99;
                          if ( v99 < 0 )
                            goto LABEL_364;
                          v99 = RtlUIntAdd(HIDWORD(Src[0]), v1499, (int *)Src + 1);
                          v1477 = v99;
                          v156 = (int)Src[0];
                          if ( v99 >= 0 )
                          {
LABEL_223:
                            v157 = v155 + v156;
                            LODWORD(Src[0]) = v157;
                            LODWORD(v1620) = 0;
                            v1619[1] = 0LL;
                            if ( !Src[1] )
                            {
                              v1501 = 0;
                              v99 = RtlUIntAdd(4u, 4, &v1501);
                              v1477 = v99;
                              if ( v99 < 0 )
                                goto LABEL_133;
                              v99 = RtlUIntAdd(HIDWORD(Src[0]), v1501, (int *)Src + 1);
                              v1477 = v99;
                              if ( v99 >= 0 )
                              {
                                LODWORD(Src[0]) += v160;
                                goto LABEL_246;
                              }
LABEL_245:
                              v105 = v97;
                              goto LABEL_364;
                            }
                            v162 = (int *)Src[1];
                            v1559 = (int *)Src[1];
                            v1405 = 0;
                            if ( v157 )
                            {
                              do
                              {
                                v1502 = 0;
                                v99 = RtlUIntAdd(4u, *v162, (int *)&v1502);
                                v1477 = v99;
                                if ( v99 < 0 )
                                  goto LABEL_133;
                                v99 = RtlULongLongAdd((unsigned __int64)v162, v1502, (__int64 *)&v1559);
                                v1477 = v99;
                                if ( v99 < 0 )
                                  goto LABEL_133;
                                ++v1405;
                                v162 = v1559;
                              }
                              while ( v1405 < v163 );
                              v1325 = (SIZE_T)v101;
                              lpModuleNamea = v103;
                            }
                            v99 = RtlULongLongAdd((unsigned __int64)v162, 4LL, (__int64 *)&v1620);
                            v1477 = v99;
                            if ( v99 < 0 )
                              goto LABEL_245;
                            if ( v162 + 2 <= (int *)((char *)Src[1] + HIDWORD(Src[0])) )
                            {
                              *v162 = v161;
                              *v1620 = v161;
                              LODWORD(Src[0]) += v161 - 3;
LABEL_246:
                              v1503 = 0;
                              v99 = RtlUIntAdd(v161, v161, (int *)&v1503);
                              v1477 = v99;
                              if ( v99 < 0 )
                                goto LABEL_133;
                              v165 = v1503;
                              v1504 = v1503;
                              v1505 = 0;
                              v99 = RtlUIntAdd(v164, 8, &v1505);
                              v1477 = v99;
                              if ( v99 < 0 )
                                goto LABEL_133;
                              v99 = RtlUIntAdd(v165, v1505, (int *)&v1504);
                              v1477 = v99;
                              if ( v99 < 0 )
                                goto LABEL_258;
                              v1506 = 0;
                              v99 = RtlUIntAdd(v166, v166, &v1506);
                              v1477 = v99;
                              if ( v99 >= 0 )
                              {
                                v99 = RtlUIntAdd(v1504, v1506, (int *)&v1504);
                                v1477 = v99;
                                if ( v99 < 0 )
                                  goto LABEL_258;
                                v1507 = 0;
                                v99 = RtlUIntAdd(v167, v167, &v1507);
                                v1477 = v99;
                                if ( v99 >= 0 )
                                {
                                  v99 = RtlUIntAdd(v1504, v1507, (int *)&v1504);
                                  v1477 = v99;
                                  if ( v99 < 0 )
                                    goto LABEL_258;
                                  v1508 = 0;
                                  v99 = RtlUIntAdd(v168, v168, &v1508);
                                  v1477 = v99;
                                  if ( v99 >= 0 )
                                  {
                                    v99 = RtlUIntAdd(v1504, v1508, (int *)&v1504);
                                    v1477 = v99;
                                    if ( v99 < 0 )
                                      goto LABEL_258;
                                    v1509 = 0;
                                    v99 = RtlUIntAdd(v169, v169, &v1509);
                                    v1477 = v99;
                                    if ( v99 >= 0 )
                                    {
                                      v99 = RtlUIntAdd(v1504, v1509, (int *)&v1504);
                                      v1477 = v99;
                                      if ( v99 >= 0 )
                                      {
                                        v1385 = v1504;
                                        v1466 = 0LL;
                                        v1406 = 0;
                                        v1471 = 0LL;
                                        v1470 = 0LL;
                                        Size = 0;
                                        v1431 = 0LL;
                                        v1468 = 0LL;
                                        v1414 = 0LL;
                                        v1261 = __rdtsc();
                                        v1510 = 8;
                                        v171 = RtlUIntAdd(8u, SHIDWORD(Src[0]), (int *)&v1510);
                                        if ( v171 < 0 )
                                        {
LABEL_270:
                                          v99 = v171 | 0x10000000;
                                          v1477 = v99;
                                          if ( v99 < 0 )
                                            goto LABEL_334;
                                          v180 = (unsigned __int8 *)v1466;
                                          if ( !v1466 )
                                          {
                                            v99 = -805306355;
                                            goto LABEL_158;
                                          }
                                          v181 = v170;
                                          if ( !v170
                                            || (v1472 = v170 + 8LL,
                                                v182 = (char *)MemoryAlloc(v1472),
                                                v1467 = v182,
                                                v183 = 0,
                                                !v182) )
                                          {
                                            v99 = -805306367;
                                            v1477 = -805306367;
LABEL_337:
                                            v268 = GetProcessHeap();
                                            HeapFree(v268, 0, v1466);
                                            v266 = 0LL;
LABEL_338:
                                            v269 = v1471;
                                            if ( v1471 )
                                            {
                                              lpMeme = (void *)*((_QWORD *)v1471 + 1);
                                              if ( lpMeme )
                                              {
                                                v270 = GetProcessHeap();
                                                HeapFree(v270, 0, lpMeme);
                                                v269[1] = 0LL;
                                              }
                                              lpMemf = (void *)v269[3];
                                              if ( lpMemf )
                                              {
                                                v271 = GetProcessHeap();
                                                HeapFree(v271, 0, lpMemf);
                                                v269[3] = 0LL;
                                              }
                                              lpMemg = (void *)v269[5];
                                              if ( lpMemg )
                                              {
                                                v272 = GetProcessHeap();
                                                HeapFree(v272, 0, lpMemg);
                                                v269[5] = 0LL;
                                              }
                                              v273 = GetProcessHeap();
                                              HeapFree(v273, 0, v269);
                                              v266 = 0LL;
                                            }
                                            v274 = v1470;
                                            if ( v1470 )
                                            {
                                              v275 = GetProcessHeap();
                                              HeapFree(v275, 0, v274);
                                              v266 = 0LL;
                                            }
                                            if ( v1431 )
                                            {
                                              v276 = GetProcessHeap();
                                              HeapFree(v276, 0, v1431);
                                              v266 = 0LL;
                                            }
                                            v277 = v1468;
                                            if ( v1468 )
                                            {
                                              lpMemh = (void *)*((_QWORD *)v1468 + 1);
                                              if ( lpMemh )
                                              {
                                                v278 = GetProcessHeap();
                                                HeapFree(v278, 0, lpMemh);
                                                *((_QWORD *)v277 + 1) = 0LL;
                                              }
                                              lpMemi = (void *)*((_QWORD *)v277 + 3);
                                              if ( lpMemi )
                                              {
                                                v279 = GetProcessHeap();
                                                HeapFree(v279, 0, lpMemi);
                                                *((_QWORD *)v277 + 3) = 0LL;
                                              }
                                              lpMemj = (void *)*((_QWORD *)v277 + 5);
                                              if ( lpMemj )
                                              {
                                                v280 = GetProcessHeap();
                                                HeapFree(v280, 0, lpMemj);
                                                *((_QWORD *)v277 + 5) = 0LL;
                                              }
                                              v281 = GetProcessHeap();
                                              HeapFree(v281, 0, v277);
                                              v266 = 0LL;
                                            }
                                            if ( v1414 )
                                            {
                                              v282 = GetProcessHeap();
                                              HeapFree(v282, 0, v1414);
                                              v266 = 0LL;
                                            }
                                            v105 = v97;
                                            if ( v99 >= 0 )
                                            {
                                              if ( !LODWORD(v1613[0]) )
                                              {
                                                v99 = -1073425151;
                                                goto LABEL_363;
                                              }
                                              if ( v1613[1] == v266 || LODWORD(v1613[0]) <= (unsigned int)v266 )
                                              {
                                                v99 = -1073741811;
                                                goto LABEL_363;
                                              }
                                              v1571 = v1613[1];
                                              v427 = *(_DWORD *)v1613[1];
                                              v99 = RtlULongLongAdd((unsigned __int64)v1613[1], 4LL, (__int64 *)&v1571);
                                              v1477 = v99;
                                              if ( v99 < 0 )
                                                goto LABEL_579;
                                              v430 = v1571;
                                              if ( !v427 )
                                                v430 = v428;
                                              v1571 = v430;
                                              if ( v427 != (_DWORD)v429 )
                                              {
LABEL_625:
                                                v99 = -1073741789;
LABEL_578:
                                                v1477 = v99;
LABEL_579:
                                                v105 = v97;
                                                goto LABEL_364;
                                              }
                                              v99 = *v430;
                                              v1477 = v99;
                                              if ( v99 == -805306333 )
                                              {
                                                v1269 = -2147024774;
                                                goto LABEL_576;
                                              }
                                              v1269 = v99;
                                              if ( v99 == -2147024774 || (v105 = v97, v1269 = v99, v99 >= 0) )
                                              {
LABEL_576:
                                                if ( LODWORD(v1613[0]) == 6 )
                                                {
                                                  if ( v1613[1] != v428 )
                                                  {
                                                    v431 = v1613[1];
                                                    v1572 = v1613[1];
                                                    v432 = (int)v428;
                                                    while ( 1 )
                                                    {
                                                      v99 = RtlULongLongAdd(
                                                              (unsigned __int64)v431,
                                                              v429,
                                                              (__int64 *)&v1572);
                                                      v1477 = v99;
                                                      if ( v99 < 0 )
                                                        goto LABEL_579;
                                                      v99 = RtlULongLongAdd(
                                                              (unsigned __int64)v1572,
                                                              v433,
                                                              (__int64 *)&v1572);
                                                      v1477 = v99;
                                                      if ( v99 < 0 )
                                                        goto LABEL_579;
                                                      ++v432;
                                                      v431 = v1572;
                                                      if ( v432 )
                                                      {
                                                        v434 = *v1572;
                                                        v99 = RtlULongLongAdd(
                                                                (unsigned __int64)v1572,
                                                                v429,
                                                                (__int64 *)&v1572);
                                                        v1477 = v99;
                                                        if ( v99 < 0 )
                                                          goto LABEL_579;
                                                        v437 = v1572;
                                                        if ( !v434 )
                                                          v437 = v435;
                                                        v1572 = v437;
                                                        if ( v434 != 8 )
                                                          goto LABEL_625;
                                                        lpMemn = *(LPVOID *)v437;
                                                        if ( v1613[1] == v435 )
                                                          break;
                                                        v438 = v1613[1];
                                                        v1557 = v1613[1];
                                                        v439 = (unsigned int)v435;
                                                        while ( 1 )
                                                        {
                                                          v99 = RtlULongLongAdd(
                                                                  (unsigned __int64)v438,
                                                                  v436,
                                                                  (__int64 *)&v1557);
                                                          v1477 = v99;
                                                          if ( v99 < 0 )
                                                            goto LABEL_579;
                                                          v99 = RtlULongLongAdd(
                                                                  (unsigned __int64)v1557,
                                                                  v440,
                                                                  (__int64 *)&v1557);
                                                          v1477 = v99;
                                                          if ( v99 < 0 )
                                                            goto LABEL_579;
                                                          ++v439;
                                                          v438 = v1557;
                                                          if ( v439 >= 2 )
                                                          {
                                                            v441 = *v1557;
                                                            v99 = RtlULongLongAdd(
                                                                    (unsigned __int64)v1557,
                                                                    v436,
                                                                    (__int64 *)&v1557);
                                                            v1477 = v99;
                                                            if ( v99 < 0 )
                                                              goto LABEL_579;
                                                            v444 = v1557;
                                                            if ( !v441 )
                                                              v444 = v442;
                                                            v1557 = v444;
                                                            if ( v441 != (_DWORD)v443 )
                                                              goto LABEL_625;
                                                            v1348 = *v444;
                                                            if ( v1613[1] == v442 )
                                                              goto LABEL_599;
                                                            v445 = v1613[1];
                                                            v1574 = v1613[1];
                                                            v446 = (unsigned int)v442;
                                                            while ( 1 )
                                                            {
                                                              v99 = RtlULongLongAdd(
                                                                      (unsigned __int64)v445,
                                                                      v443,
                                                                      (__int64 *)&v1574);
                                                              v1477 = v99;
                                                              if ( v99 < 0 )
                                                                goto LABEL_579;
                                                              v99 = RtlULongLongAdd(
                                                                      (unsigned __int64)v1574,
                                                                      v447,
                                                                      (__int64 *)&v1574);
                                                              v1477 = v99;
                                                              if ( v99 < 0 )
                                                                goto LABEL_579;
                                                              ++v446;
                                                              v445 = v1574;
                                                              if ( v446 >= 3 )
                                                              {
                                                                v448 = *v1574;
                                                                v1305 = *v1574;
                                                                v99 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1574,
                                                                        v443,
                                                                        (__int64 *)&v1574);
                                                                v1477 = v99;
                                                                if ( v99 < 0 )
                                                                  goto LABEL_579;
                                                                v450 = v1574;
                                                                if ( !v448 )
                                                                  v450 = v449;
                                                                v1574 = v450;
                                                                if ( v1613[1] != v449 )
                                                                {
                                                                  v451 = v1613[1];
                                                                  v1575 = v1613[1];
                                                                  v452 = (unsigned int)v449;
                                                                  while ( 1 )
                                                                  {
                                                                    v99 = RtlULongLongAdd(
                                                                            (unsigned __int64)v451,
                                                                            4LL,
                                                                            (__int64 *)&v1575);
                                                                    v1477 = v99;
                                                                    if ( v99 < 0 )
                                                                      goto LABEL_579;
                                                                    v99 = RtlULongLongAdd(
                                                                            (unsigned __int64)v1575,
                                                                            v453,
                                                                            (__int64 *)&v1575);
                                                                    v1477 = v99;
                                                                    if ( v99 < 0 )
                                                                      goto LABEL_579;
                                                                    ++v452;
                                                                    v451 = v1575;
                                                                    if ( v452 >= 4 )
                                                                    {
                                                                      v454 = *v1575;
                                                                      v99 = RtlULongLongAdd(
                                                                              (unsigned __int64)v1575,
                                                                              4LL,
                                                                              (__int64 *)&v1575);
                                                                      v1477 = v99;
                                                                      if ( v99 < 0 )
                                                                        goto LABEL_579;
                                                                      v456 = v1575;
                                                                      if ( !v454 )
                                                                        v456 = v455;
                                                                      v1575 = v456;
                                                                      if ( v454 != 4 )
                                                                        goto LABEL_625;
                                                                      v1453 = *v456;
                                                                      if ( v1613[1] == v455 )
                                                                        goto LABEL_599;
                                                                      v457 = (unsigned int *)v1613[1];
                                                                      v1576 = (unsigned int *)v1613[1];
                                                                      v458 = (unsigned int)v455;
                                                                      while ( 1 )
                                                                      {
                                                                        v1443 = *v457;
                                                                        v99 = RtlULongLongAdd(
                                                                                (unsigned __int64)v457,
                                                                                4LL,
                                                                                (__int64 *)&v1576);
                                                                        v1477 = v99;
                                                                        if ( v99 < 0 )
                                                                          goto LABEL_133;
                                                                        v99 = RtlULongLongAdd(
                                                                                (unsigned __int64)v1576,
                                                                                v1443,
                                                                                (__int64 *)&v1576);
                                                                        v1477 = v99;
                                                                        if ( v99 < 0 )
                                                                          goto LABEL_133;
                                                                        ++v458;
                                                                        v457 = v1576;
                                                                        if ( v458 >= 5 )
                                                                        {
                                                                          v1444 = *v1576;
                                                                          v129 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v1576,
                                                                                   4LL,
                                                                                   (__int64 *)&v1576);
                                                                          v99 = v129;
                                                                          v1477 = v129;
                                                                          if ( v129 < 0 )
                                                                            goto LABEL_154;
                                                                          v460 = v1576;
                                                                          if ( !v1444 )
                                                                            v460 = 0LL;
                                                                          v1576 = v460;
                                                                          if ( v1444 != 4 )
                                                                            goto LABEL_625;
                                                                          v105 = *v460;
                                                                          if ( (LPVOID)v1390 != lpMemn )
                                                                            goto LABEL_577;
                                                                          v1480 = v1348;
                                                                          if ( v1453 > 4 || v1305 > 4 )
                                                                          {
                                                                            v99 = -2147024774;
                                                                            goto LABEL_363;
                                                                          }
                                                                          memcpy_0(v1473, v459, v1305);
                                                                          if ( v1269 )
                                                                          {
                                                                            v99 = v1269;
                                                                            v1477 = v1269;
                                                                          }
                                                                          goto LABEL_364;
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                                goto LABEL_599;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
LABEL_599:
                                                  v99 = -1073741811;
                                                }
                                                else
                                                {
LABEL_577:
                                                  v99 = -1073425151;
                                                }
                                                goto LABEL_578;
                                              }
                                            }
LABEL_364:
                                            Src[0] = 0LL;
                                            v283 = Src[1];
                                            if ( Src[1] )
                                            {
                                              v284 = GetProcessHeap();
                                              HeapFree(v284, 0, v283);
                                              Src[1] = 0LL;
                                            }
                                            v1613[0] = 0LL;
                                            v285 = v1613[1];
                                            if ( v1613[1] )
                                            {
                                              v286 = GetProcessHeap();
                                              HeapFree(v286, 0, v285);
                                              v1613[1] = 0LL;
                                            }
                                            if ( v103 )
                                            {
                                              v287 = GetProcessHeap();
                                              HeapFree(v287, 0, v103);
                                            }
                                            if ( v101 )
                                            {
                                              v288 = GetProcessHeap();
                                              HeapFree(v288, 0, v101);
                                            }
                                            if ( v99 < 0 )
                                            {
                                              v100 = v1474;
LABEL_1609:
                                              while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
                                                ;
                                              v1206 = dword_18089D72C;
                                              if ( dword_18089D72C > 0 )
                                              {
                                                --dword_18089D72C;
                                                if ( v1206 == 1 )
                                                {
                                                  v1207 = qword_180899E50;
                                                  v1208 = 4LL;
                                                  do
                                                  {
                                                    if ( *v1207 )
                                                      FreeLibrary(*v1207);
                                                    v1207 += 3;
                                                    --v1208;
                                                  }
                                                  while ( v1208 );
                                                  memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                                  v1209 = 2LL;
                                                  v1210 = off_180891340;
                                                  v1211 = off_1806EF510;
                                                  do
                                                  {
                                                    *(_OWORD *)v1210 = *(_OWORD *)v1211;
                                                    *((_OWORD *)v1210 + 1) = *((_OWORD *)v1211 + 1);
                                                    *((_OWORD *)v1210 + 2) = *((_OWORD *)v1211 + 2);
                                                    *((_OWORD *)v1210 + 3) = *((_OWORD *)v1211 + 3);
                                                    *((_OWORD *)v1210 + 4) = *((_OWORD *)v1211 + 4);
                                                    *((_OWORD *)v1210 + 5) = *((_OWORD *)v1211 + 5);
                                                    *((_OWORD *)v1210 + 6) = *((_OWORD *)v1211 + 6);
                                                    v1210 += 16;
                                                    *((_OWORD *)v1210 - 1) = *((_OWORD *)v1211 + 7);
                                                    v1211 += 16;
                                                    --v1209;
                                                  }
                                                  while ( v1209 );
                                                  *(_OWORD *)v1210 = *(_OWORD *)v1211;
                                                  *((_OWORD *)v1210 + 1) = *((_OWORD *)v1211 + 1);
                                                  *((_OWORD *)v1210 + 2) = *((_OWORD *)v1211 + 2);
                                                  *((_OWORD *)v1210 + 3) = *((_OWORD *)v1211 + 3);
                                                  *((_OWORD *)v1210 + 4) = *((_OWORD *)v1211 + 4);
                                                  v2 = *((_OWORD *)v1211 + 5);
                                                  *((_OWORD *)v1210 + 5) = v2;
                                                  *((_OWORD *)v1210 + 6) = *((_OWORD *)v1211 + 6);
                                                }
                                              }
                                              _InterlockedExchange(&dword_18089D738, 0);
                                              SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1465);
                                              if ( v99 >= 0 )
                                              {
                                                if ( v100 == 4 )
                                                {
                                                  v1212 = *(_DWORD *)v1548;
LABEL_1632:
                                                  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1548);
                                                  if ( v1479 >= 0 && v1212 )
                                                  {
                                                    v4 = (CDesktopPositioner *)v1547;
                                                    *(_DWORD *)(v1547 + 500) = 2;
                                                  }
                                                  else
                                                  {
                                                    IsScreenSizeRequirementMet = Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet(
                                                                                   v1213,
                                                                                   *(float *)&v2);
                                                    v4 = (CDesktopPositioner *)v1547;
                                                    if ( IsScreenSizeRequirementMet )
                                                      *(_DWORD *)(v1547 + 500) = 3;
                                                  }
                                                  v3 = v1546;
LABEL_1638:
                                                  v1215 = v3->lpVtbl->QueryService;
                                                  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v4 + 39);
                                                  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v1215)(
                                                         v3,
                                                         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                                         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                                         (char *)v4 + 312);
                                                  if ( v7 < 0 )
                                                  {
                                                    v8 = 197LL;
                                                    goto LABEL_3;
                                                  }
                                                  goto LABEL_1640;
                                                }
                                              }
                                              else
                                              {
                                                switch ( v99 )
                                                {
                                                  case -805306316:
                                                    v1479 = -1073418222;
LABEL_1628:
                                                    v1212 = v1478;
                                                    goto LABEL_1632;
                                                  case -805306139:
                                                  case -1073425151:
                                                    v1479 = -1073418201;
                                                    goto LABEL_1628;
                                                  case -805306306:
                                                    v1479 = -1073418200;
                                                    goto LABEL_1628;
                                                }
                                                v1479 = v99;
                                                if ( v99 != -2147024774 )
                                                  goto LABEL_1628;
                                              }
                                              v1479 = -1073418210;
                                              goto LABEL_1628;
                                            }
                                            if ( !v105 )
                                            {
LABEL_1607:
                                              v100 = v1480;
                                              v1465 = 0LL;
                                              v1548 = v1473;
                                              goto LABEL_1609;
                                            }
                                            v1577 = 0LL;
                                            dword_180899E48 = v105;
                                            ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
                                            if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
                                            {
LABEL_1264:
                                              SH<void *,SH_HANDLE>::Reset(&v1577);
                                              v906 = 0LL;
                                              *(_OWORD *)v1623 = 0LL;
                                              LODWORD(v2) = 0;
                                              *(_OWORD *)v1624 = 0LL;
                                              v907 = GetProcessHeap();
                                              v908 = HeapAlloc(v907, 8u, 0xA0uLL);
                                              if ( !v908 )
                                              {
                                                v908 = 0LL;
                                                goto LABEL_1599;
                                              }
                                              *v908 = xmmword_180897FA0[0];
                                              v908[1] = xmmword_180897FA0[1];
                                              v908[2] = xmmword_180897FA0[2];
                                              v908[3] = xmmword_180897FA0[3];
                                              v908[4] = xmmword_180897FA0[4];
                                              v908[5] = xmmword_180897FA0[5];
                                              v908[6] = xmmword_180897FA0[6];
                                              v908[7] = xmmword_180897FA0[7];
                                              v908[8] = xmmword_180897FA0[8];
                                              v2 = xmmword_180897FA0[9];
                                              v908[9] = v2;
                                              v909 = GetProcessHeap();
                                              v910 = HeapAlloc(v909, 8u, 8uLL);
                                              v906 = v910;
                                              if ( !v910 )
                                              {
                                                v906 = 0LL;
                                                goto LABEL_1599;
                                              }
                                              *v910 = qword_180897F90;
                                              v1322 = __rdtsc();
                                              v1521 = 0LL;
                                              if ( (int)RtlUIntAdd(4u, 4, (int *)&v1521 + 1) < 0 )
                                                goto LABEL_1599;
                                              if ( (int)RtlUIntAdd(0, SHIDWORD(v1521), (int *)&v1521) < 0 )
                                                goto LABEL_1599;
                                              v1522 = v912;
                                              if ( (int)RtlUIntAdd(v911, 160, &v1522) < 0 )
                                                goto LABEL_1599;
                                              v913 = RtlUIntAdd(v1521, v1522, (int *)&v1521);
                                              if ( (v916 | v913) < 0 )
                                                goto LABEL_1599;
                                              v1523 = v915;
                                              if ( (int)RtlUIntAdd(v914, 8, &v1523) < 0 )
                                                goto LABEL_1599;
                                              v917 = RtlUIntAdd(v1521, v1523, (int *)&v1521);
                                              if ( (v920 | v917) < 0 )
                                                goto LABEL_1599;
                                              v1524 = v919;
                                              if ( (int)RtlUIntAdd(v918, 8, &v1524) < 0 )
                                                goto LABEL_1599;
                                              v921 = RtlUIntAdd(v1521, v1524, (int *)&v1521);
                                              if ( (v922 | v921) < 0 )
                                                goto LABEL_1599;
                                              HIDWORD(v1623[0]) = v1521;
                                              v923 = v1521;
                                              v924 = GetProcessHeap();
                                              v925 = HeapAlloc(v924, 8u, v923);
                                              if ( !v925 )
                                                goto LABEL_1599;
                                              v1623[1] = (size_t)v925;
                                              LODWORD(v1623[0]) = 0;
                                              LODWORD(v1626[0]) = 0;
                                              v1625 = 0LL;
                                              v1593[3] = v925;
                                              lpMemo = v906;
                                              v1374 = v908;
                                              v926 = RtlULongLongAdd((unsigned __int64)v925, 4LL, v1626);
                                              if ( v926 < 0
                                                || v927 + 2 > (unsigned int *)((char *)v927 + HIDWORD(v1623[0])) )
                                              {
                                                goto LABEL_1599;
                                              }
                                              *v927 = v928;
                                              *(_DWORD *)v1626[0] = v928;
                                              v930 = ++LODWORD(v1623[0]);
                                              LODWORD(v1627) = 0;
                                              v1626[1] = 0LL;
                                              if ( v1623[1] == v929 )
                                              {
                                                v1525 = v929;
                                                if ( (int)RtlUIntAdd(v928, 160, &v1525) < 0
                                                  || (int)RtlUIntAdd(HIDWORD(v1623[0]), v1525, (int *)v1623 + 1) < 0 )
                                                {
                                                  goto LABEL_1599;
                                                }
                                              }
                                              else
                                              {
                                                v933 = (int *)v1623[1];
                                                v1594 = v1623[1];
                                                if ( v930 )
                                                {
                                                  do
                                                  {
                                                    v1526 = 0;
                                                    if ( (int)RtlUIntAdd(4u, *v933, (int *)&v1526) < 0
                                                      || (int)RtlULongLongAdd(v934, v1526, (__int64 *)&v1594) < 0 )
                                                    {
                                                      goto LABEL_1599;
                                                    }
                                                    lpMemo = v906;
                                                    v1374 = v908;
                                                    v933 = (int *)v1594;
                                                  }
                                                  while ( v936 + 1 < v935 );
                                                }
                                                if ( (int)RtlULongLongAdd(
                                                            (unsigned __int64)v933,
                                                            4LL,
                                                            (__int64 *)&v1627) < 0
                                                  || (unsigned __int64)(v937 + 41) > v1623[1] + HIDWORD(v1623[0]) )
                                                {
                                                  goto LABEL_1599;
                                                }
                                                *v937 = 160;
                                                memcpy_0(v1627, v908, 0xA0uLL);
                                                v932 = 0LL;
                                                v931 = 4;
                                              }
                                              v938 = ++LODWORD(v1623[0]);
                                              LODWORD(v1610[0]) = 0;
                                              v1609[1] = 0LL;
                                              if ( !v906 )
                                                goto LABEL_1599;
                                              if ( v1623[1] == v932 )
                                              {
                                                v1527 = v932;
                                                if ( (int)RtlUIntAdd(v931, 8, &v1527) < 0
                                                  || (int)RtlUIntAdd(HIDWORD(v1623[0]), v1527, (int *)v1623 + 1) < 0 )
                                                {
                                                  goto LABEL_1599;
                                                }
                                              }
                                              else
                                              {
                                                v941 = (int *)v1623[1];
                                                v1595 = v1623[1];
                                                if ( v938 )
                                                {
                                                  do
                                                  {
                                                    v1528 = v932;
                                                    if ( (int)RtlUIntAdd(4u, *v941, (int *)&v1528) < 0
                                                      || (int)RtlULongLongAdd(v942, v1528, (__int64 *)&v1595) < 0 )
                                                    {
                                                      goto LABEL_1599;
                                                    }
                                                    lpMemo = v906;
                                                    v1374 = v908;
                                                    v941 = (int *)v1595;
                                                  }
                                                  while ( v943 + 1 < v938 );
                                                }
                                                if ( (int)RtlULongLongAdd((unsigned __int64)v941, 4LL, (__int64 *)v1610) < 0
                                                  || (unsigned __int64)(v944 + 3) > v1623[1] + HIDWORD(v1623[0]) )
                                                {
                                                  goto LABEL_1599;
                                                }
                                                *v944 = 8;
                                                memcpy_0(v1610[0], v906, 8uLL);
                                                v940 = 0LL;
                                                v939 = 4;
                                              }
                                              v945 = ++LODWORD(v1623[0]);
                                              LODWORD(v1611) = 0;
                                              v1610[1] = 0LL;
                                              if ( v1623[1] == v940 )
                                              {
                                                v1529 = v940;
                                                if ( (int)RtlUIntAdd(v939, 8, &v1529) < 0
                                                  || (int)RtlUIntAdd(HIDWORD(v1623[0]), v1529, (int *)v1623 + 1) < 0 )
                                                {
                                                  goto LABEL_1599;
                                                }
                                              }
                                              else
                                              {
                                                v948 = (int *)v1623[1];
                                                v1596 = v1623[1];
                                                if ( v945 )
                                                {
                                                  do
                                                  {
                                                    v1530 = v940;
                                                    if ( (int)RtlUIntAdd(4u, *v948, (int *)&v1530) < 0
                                                      || (int)RtlULongLongAdd(v949, v1530, (__int64 *)&v1596) < 0 )
                                                    {
                                                      goto LABEL_1599;
                                                    }
                                                    lpMemo = v906;
                                                    v1374 = v908;
                                                    v948 = (int *)v1596;
                                                  }
                                                  while ( v950 + 1 < v945 );
                                                }
                                                if ( (int)RtlULongLongAdd(
                                                            (unsigned __int64)v948,
                                                            4LL,
                                                            (__int64 *)&v1611) < 0
                                                  || (unsigned __int64)(v951 + 3) > v1623[1] + HIDWORD(v1623[0]) )
                                                {
                                                  goto LABEL_1599;
                                                }
                                                *v951 = 8;
                                                *v1611 = v1322;
                                              }
                                              ++LODWORD(v1623[0]);
                                              v1531 = v947;
                                              if ( (int)RtlUIntAdd(v946, v946, (int *)&v1531) < 0 )
                                                goto LABEL_1599;
                                              v954 = v1531;
                                              v1532 = v1531;
                                              v1533 = v953;
                                              if ( (int)RtlUIntAdd(v952, 8, &v1533) < 0
                                                || (int)RtlUIntAdd(v954, v1533, (int *)&v1532) < 0 )
                                              {
                                                goto LABEL_1599;
                                              }
                                              lpModuleNamem = v1532;
                                              v1323 = (size_t)v955;
                                              v1338 = (unsigned int)v955;
                                              v956 = v955;
                                              v1467 = v955;
                                              v1472 = (SIZE_T)v955;
                                              v1368 = (WCHAR *)v955;
                                              LODWORD(v1466) = (_DWORD)v955;
                                              v1425 = (unsigned __int16 *)v955;
                                              v1468 = 0LL;
                                              v1438 = (LPCWSTR)__rdtsc();
                                              v1534 = 8;
                                              v957 = RtlUIntAdd(8u, SHIDWORD(v1623[0]), (int *)&v1534);
                                              if ( v957 < 0 )
                                              {
LABEL_1327:
                                                v969 = v957 | 0x10000000;
                                                if ( v969 < 0 )
                                                {
                                                  v1039 = (void *)v1323;
                                                  goto LABEL_1398;
                                                }
                                                v1439 = v959;
                                                v970 = (void *)v1323;
                                                if ( v1323 )
                                                {
                                                  if ( !v958
                                                    || (v1465 = v958 + 8LL,
                                                        v971 = (char *)MemoryAlloc(v1465),
                                                        v1461 = v971,
                                                        v972 = 0,
                                                        !v971) )
                                                  {
                                                    v969 = -805306367;
                                                    v1039 = (void *)v1323;
LABEL_1399:
                                                    v1061 = GetProcessHeap();
                                                    HeapFree(v1061, 0, v1039);
LABEL_1400:
                                                    if ( v956 )
                                                    {
                                                      v1062 = (void *)*((_QWORD *)v956 + 1);
                                                      if ( v1062 )
                                                      {
                                                        v1063 = GetProcessHeap();
                                                        HeapFree(v1063, 0, v1062);
                                                        *((_QWORD *)v956 + 1) = 0LL;
                                                      }
                                                      v1064 = (void *)*((_QWORD *)v956 + 3);
                                                      if ( v1064 )
                                                      {
                                                        v1065 = GetProcessHeap();
                                                        HeapFree(v1065, 0, v1064);
                                                        *((_QWORD *)v956 + 3) = 0LL;
                                                      }
                                                      v1066 = (void *)*((_QWORD *)v956 + 5);
                                                      if ( v1066 )
                                                      {
                                                        v1067 = GetProcessHeap();
                                                        HeapFree(v1067, 0, v1066);
                                                        *((_QWORD *)v956 + 5) = 0LL;
                                                      }
                                                      v1068 = GetProcessHeap();
                                                      HeapFree(v1068, 0, v956);
                                                    }
                                                    v1069 = (void *)v1472;
                                                    if ( v1472 )
                                                    {
                                                      v1070 = GetProcessHeap();
                                                      HeapFree(v1070, 0, v1069);
                                                    }
                                                    if ( v1368 )
                                                    {
                                                      v1071 = GetProcessHeap();
                                                      HeapFree(v1071, 0, v1368);
                                                    }
                                                    if ( v1425 )
                                                    {
                                                      v1072 = (void *)*((_QWORD *)v1425 + 1);
                                                      if ( v1072 )
                                                      {
                                                        v1073 = GetProcessHeap();
                                                        HeapFree(v1073, 0, v1072);
                                                        *((_QWORD *)v1425 + 1) = 0LL;
                                                      }
                                                      v1074 = (void *)*((_QWORD *)v1425 + 3);
                                                      if ( v1074 )
                                                      {
                                                        v1075 = GetProcessHeap();
                                                        HeapFree(v1075, 0, v1074);
                                                        *((_QWORD *)v1425 + 3) = 0LL;
                                                      }
                                                      v1076 = (void *)*((_QWORD *)v1425 + 5);
                                                      if ( v1076 )
                                                      {
                                                        v1077 = GetProcessHeap();
                                                        HeapFree(v1077, 0, v1076);
                                                        *((_QWORD *)v1425 + 5) = 0LL;
                                                      }
                                                      v1078 = GetProcessHeap();
                                                      HeapFree(v1078, 0, v1425);
                                                    }
                                                    v1079 = v1468;
                                                    if ( v1468 )
                                                    {
                                                      v1080 = GetProcessHeap();
                                                      HeapFree(v1080, 0, v1079);
                                                    }
                                                    if ( v969 >= 0 )
                                                    {
                                                      if ( LODWORD(v1624[0]) )
                                                      {
                                                        v1081 = v1624[1];
                                                        if ( v1624[1] )
                                                        {
                                                          v1608[0] = (__int64)v1624[1];
                                                          if ( (int)RtlULongLongAdd(
                                                                      (unsigned __int64)v1624[1],
                                                                      4LL,
                                                                      v1608) >= 0 )
                                                          {
                                                            v1085 = (_DWORD *)v1608[0];
                                                            if ( *v1081 == (_DWORD)v1084 )
                                                              v1085 = v1084;
                                                            v1608[0] = (__int64)v1085;
                                                            if ( *v1081 == (_DWORD)v1083
                                                              && *v1085 >= (int)v1084
                                                              && v1081
                                                              && v1082 > 1 )
                                                            {
                                                              for ( m = (unsigned __int64)v1081;
                                                                    (int)RtlULongLongAdd(
                                                                           (unsigned __int64)v1081,
                                                                           v1083,
                                                                           (__int64 *)&m) >= 0
                                                                 && (int)RtlULongLongAdd(
                                                                           m,
                                                                           (unsigned int)*v1081,
                                                                           (__int64 *)&m) >= 0;
                                                                    v1081 = (_DWORD *)m )
                                                              {
                                                                if ( v1086 != -1 )
                                                                {
                                                                  RtlULongLongAdd(m, v1083, (__int64 *)&m);
                                                                  goto LABEL_1599;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    goto LABEL_1599;
                                                  }
                                                  v973 = 0;
                                                  v1234 = 0;
                                                  v974 = 0LL;
                                                  if ( v1338 )
                                                  {
                                                    v975 = 0;
                                                    do
                                                    {
                                                      v973 = v975 ^ *(_BYTE *)(v974 + v1323);
                                                      v1234 = v973;
                                                      ++v974;
                                                      v975 = v973;
                                                    }
                                                    while ( v974 < v1338 );
                                                  }
                                                  v1677 = 0xC81ECB17B1B54A58uLL;
                                                  v976 = (unsigned __int8 *)v1323;
                                                  v977 = v971;
                                                  v1277 = (SIZE_T)v971;
                                                  v978 = -1;
                                                  LODWORD(v1471) = 0;
                                                  LODWORD(v1470) = 0;
                                                  v979 = v1338 & 7;
                                                  if ( (v1338 & 7) != 0 )
                                                  {
                                                    LODWORD(v1471) = 0;
                                                    v980 = 0;
                                                    v981 = 56;
                                                    v982 = 0;
                                                    do
                                                    {
                                                      v983 = *v976;
                                                      if ( v982 >= 4 )
                                                      {
                                                        v984 = (v983 << v981) | (unsigned int)v1471;
                                                        LODWORD(v1471) = v984;
                                                      }
                                                      else
                                                      {
                                                        v980 |= v983 << (v981 - 32);
                                                        v984 = (unsigned int)v1471;
                                                      }
                                                      ++v976;
                                                      ++v982;
                                                      v981 -= 8;
                                                    }
                                                    while ( (int)v982 < v979 );
                                                    v972 = v980 ^ 0xB17A307A;
                                                    v985 = v984 ^ 0x42F6B18D;
                                                    v986 = v980 ^ 0xB17A307A;
                                                    v987 = v984 ^ 0x42F6B18D;
                                                    v988 = 0;
                                                    v973 = v1234;
                                                    v989 = (char *)v1277;
                                                    do
                                                    {
                                                      LODWORD(v1471) = v984;
                                                      LODWORD(v1470) = v980;
                                                      if ( v988 >= 4 )
                                                      {
                                                        v987 = (v987 << 8) | HIBYTE(v987);
                                                        v990 = v987;
                                                      }
                                                      else
                                                      {
                                                        v986 = (v986 << 8) | HIBYTE(v986);
                                                        v990 = v986;
                                                      }
                                                      *v989 = v990;
                                                      ++v988;
                                                      ++v989;
                                                      v980 = (int)v1470;
                                                      v984 = (unsigned int)v1471;
                                                    }
                                                    while ( v988 < v979 );
                                                    v1374 = v908;
                                                    lpMemo = v906;
                                                    v977 = v989;
                                                    v99 = v1477;
                                                    v956 = v1467;
                                                    if ( (unsigned int)v979 <= 4 )
                                                    {
                                                      v978 = 0;
                                                      if ( (unsigned int)v979 < 4 )
                                                        v972 = v972 >> (8 * (4 - v979)) << (8 * (4 - v979));
                                                    }
                                                    else
                                                    {
                                                      v978 = v985 >> (8 * (8 - v979)) << (8 * (8 - v979));
                                                    }
                                                  }
                                                  if ( (unsigned __int64)v1338 >> 3 )
                                                  {
                                                    v991 = HIDWORD(v1677);
                                                    v1278 = WORD1(v1677);
                                                    v992 = WORD2(v1677);
                                                    v1352 = HIWORD(v1677);
                                                    v1413 = v977 + 7;
                                                    v993 = v976 + 2;
                                                    v994 = (int)v1470;
                                                    v995 = (int)v1471;
                                                    v996 = (unsigned __int64)v1338 >> 3;
                                                    v997 = HIDWORD(v1677) ^ 0xB1B54A58;
                                                    do
                                                    {
                                                      v998 = v993[1] | ((*v993 | ((*(v993 - 1) | (*(v993 - 2) << 8)) << 8)) << 8);
                                                      v999 = v993[5] | ((v993[4] | ((v993[3] | (v993[2] << 8)) << 8)) << 8);
                                                      v1000 = v999 ^ v978;
                                                      v1470 = v993 + 8;
                                                      v1001 = v991 ^ (v1000 - 19032) ^ v998 ^ v972;
                                                      v1002 = (v1278 * __ROR4__(v991 ^ v1001, 15) + __ROR4__(v1001, 7)) ^ v1000;
                                                      v1003 = (v992 * __ROR4__(v1002 - 1313519016, 9)
                                                             - __ROR4__(v1002, 10)) ^ v1001;
                                                      v1004 = (v1352 * __ROR4__(v992 ^ v1003, 28) + __ROR4__(v1003, 27)) ^ v1002;
                                                      v1005 = (v991 - (v1004 ^ 0xB1B54A58)) ^ v1003;
                                                      v1006 = (WORD1(v1677) * (v1005 - 19032) - (v1005 >> 6)) ^ v1004;
                                                      v1007 = (19032 * (v992 ^ __ROR4__(v1006, 15))) ^ v1005;
                                                      v1008 = (v992 * (HIWORD(v1677) + __ROR4__(~v1007, 3))) ^ v1006;
                                                      v1009 = (v1008 - v991 - 19032) ^ v1007;
                                                      v1010 = (WORD1(v1677) * (HIWORD(v1677) ^ v1009)) ^ __ROR4__(v1009, 10) ^ v1008;
                                                      v1011 = (v992 * __ROR4__(v1010 ^ 0x4A58, 26)) ^ __ROR4__(v1010, 3) ^ v1009;
                                                      v1012 = (19032 * (__ROR4__(v1011, 15) - HIWORD(v1677))) ^ v1010;
                                                      v1013 = (v1012 >> 15) ^ (19032
                                                                             * ((8 * (v1012 - v992)) | ((v1012 - v992) >> 29))) ^ (v1012 >> 1) ^ (19032 * (HIWORD(v1677) ^ v1012)) ^ v1011;
                                                      v1014 = (WORD1(v1677) * (v1013 - v992) - (v1013 >> 13)) ^ v1012;
                                                      v1015 = (v992 * __ROR4__(-1313519016 - v1014, 9)) ^ __ROR4__(v1014, 11) ^ v1013;
                                                      v1016 = (v1015 + 1313519016 - HIWORD(v1677)) ^ v1014;
                                                      v1017 = (19032 * (WORD1(v1677) ^ v1016) - __ROR4__(v1016, 7)) ^ v1015;
                                                      v1018 = (__ROR4__(HIWORD(v1677) ^ v1017, 28) * WORD1(v1677)
                                                             - __ROR4__(v1017, 16)) ^ v1016;
                                                      v1019 = (__ROR4__(-1313519016 - v1018, 10) * v992
                                                             + __ROR4__(v1018, 4)) ^ v1017;
                                                      v1020 = (__ROR4__(v1019 + 1313519016, 4) * HIWORD(v1677)) ^ __ROR4__(v1019, 9) ^ v1018;
                                                      v1021 = (19032 * __ROR4__(v1020 ^ HIDWORD(v1677), 24)
                                                             - __ROR4__(v1020, 30)) ^ v1019;
                                                      v1022 = (__ROR4__(HIDWORD(v1677) - v1021, 11) * WORD1(v1677)
                                                             - __ROR4__(v1021, 12)) ^ v1020;
                                                      v1023 = (v1022 >> 8) ^ (v992 * (v1022 ^ WORD1(v1677))) ^ v1021;
                                                      v1024 = v1023 ^ v997 ^ v1022;
                                                      v972 = v994 ^ v1023;
                                                      v1025 = v995 ^ v1024;
                                                      LODWORD(v1471) = v1025;
                                                      *(v1413 - 4) = v972;
                                                      *v1413 = v1025;
                                                      *(v1413 - 5) = BYTE1(v972);
                                                      *(v1413 - 1) = BYTE1(v1025);
                                                      *(v1413 - 6) = (unsigned __int16)(v972 >> 8) >> 8;
                                                      *(v1413 - 2) = (unsigned __int16)(v1025 >> 8) >> 8;
                                                      *(v1413 - 7) = __ROR4__(
                                                                       (((v972 >> 8) | (v972 << 24)) >> 8) | (((v972 >> 8) | (v972 << 24)) << 24),
                                                                       8);
                                                      *(v1413 - 3) = __ROR4__(
                                                                       (((v1025 >> 8) | (v1025 << 24)) >> 8) | (((v1025 >> 8) | (v1025 << 24)) << 24),
                                                                       8);
                                                      v978 = (int)v1471;
                                                      v994 = v998;
                                                      v995 = v999;
                                                      v1413 += 8;
                                                      --v996;
                                                      v991 = HIDWORD(v1677);
                                                      v993 = (unsigned __int8 *)v1470;
                                                    }
                                                    while ( v996 );
                                                    v973 = v1234;
                                                    v99 = v1477;
                                                    v906 = lpMemo;
                                                    v908 = v1374;
                                                    v956 = v1467;
                                                    v970 = (void *)v1323;
                                                  }
                                                  *(_QWORD *)&v1461[v1338] = v973;
                                                  v1026 = GetProcessHeap();
                                                  v1027 = HeapAlloc(v1026, 8u, 0x30uLL);
                                                  if ( v1027 )
                                                  {
                                                    *(_DWORD *)v1027 = v1465;
                                                    v1028 = GetProcessHeap();
                                                    v1029 = HeapAlloc(v1028, 8u, (unsigned int)v1465);
                                                    if ( !v1029 )
                                                      goto LABEL_1358;
                                                    v1027[1] = v1029;
                                                    memcpy_0(v1029, v1461, (unsigned int)v1465);
                                                    v1323 = (size_t)v970;
                                                    v1376 = v970;
                                                    *((_DWORD *)v1027 + 4) = 160;
                                                    v1030 = GetProcessHeap();
                                                    v1031 = HeapAlloc(v1030, 8u, 0xA0uLL);
                                                    if ( !v1031 )
                                                      goto LABEL_1358;
                                                    v1027[3] = v1031;
                                                    v1323 = (size_t)v970;
                                                    *v1031 = xmmword_180897EF0[0];
                                                    v1031[1] = xmmword_180897EF0[1];
                                                    v1031[2] = xmmword_180897EF0[2];
                                                    v1031[3] = xmmword_180897EF0[3];
                                                    v1031[4] = xmmword_180897EF0[4];
                                                    v1031[5] = xmmword_180897EF0[5];
                                                    v1031[6] = xmmword_180897EF0[6];
                                                    v1031[7] = xmmword_180897EF0[7];
                                                    v1031[8] = xmmword_180897EF0[8];
                                                    v2 = xmmword_180897EF0[9];
                                                    v1031[9] = v2;
                                                    *((_DWORD *)v1027 + 8) = 8;
                                                    v1032 = GetProcessHeap();
                                                    v1033 = HeapAlloc(v1032, 8u, 8uLL);
                                                    v1034 = 0;
                                                    if ( !v1033 )
                                                    {
                                                      v1323 = (size_t)v1376;
LABEL_1358:
                                                      v1034 = -1073741801;
                                                      v1377 = (void *)v1027[1];
                                                      if ( v1377 )
                                                      {
                                                        v1035 = GetProcessHeap();
                                                        HeapFree(v1035, 0, v1377);
                                                        v1027[1] = 0LL;
                                                      }
                                                      v1378 = (void *)v1027[3];
                                                      if ( v1378 )
                                                      {
                                                        v1036 = GetProcessHeap();
                                                        HeapFree(v1036, 0, v1378);
                                                        v1027[3] = 0LL;
                                                      }
                                                      v1379 = (void *)v1027[5];
                                                      if ( v1379 )
                                                      {
                                                        v1037 = GetProcessHeap();
                                                        HeapFree(v1037, 0, v1379);
                                                        v1027[5] = 0LL;
                                                      }
                                                      v1038 = GetProcessHeap();
                                                      HeapFree(v1038, 0, v1027);
                                                      goto LABEL_1367;
                                                    }
                                                    v1027[5] = v1033;
                                                    *v1033 = qword_180897EE0;
                                                    v956 = v1027;
                                                    v1439 = 0LL;
                                                  }
                                                  else
                                                  {
                                                    v1034 = -1073741801;
                                                  }
LABEL_1367:
                                                  v1039 = (void *)v1323;
                                                  v1467 = v956;
                                                  v1040 = GetProcessHeap();
                                                  HeapFree(v1040, 0, v1461);
                                                  v1041 = v1439;
                                                  if ( v1439 )
                                                  {
                                                    v1380 = (void *)*((_QWORD *)v1439 + 1);
                                                    if ( v1380 )
                                                    {
                                                      v1042 = GetProcessHeap();
                                                      HeapFree(v1042, 0, v1380);
                                                      v1041 = v1439;
                                                      *((_QWORD *)v1439 + 1) = 0LL;
                                                    }
                                                    v1381 = (void *)*((_QWORD *)v1041 + 3);
                                                    if ( v1381 )
                                                    {
                                                      v1043 = GetProcessHeap();
                                                      HeapFree(v1043, 0, v1381);
                                                      v1041 = v1439;
                                                      *((_QWORD *)v1439 + 3) = 0LL;
                                                    }
                                                    v1382 = (void *)*((_QWORD *)v1041 + 5);
                                                    if ( v1382 )
                                                    {
                                                      v1044 = GetProcessHeap();
                                                      HeapFree(v1044, 0, v1382);
                                                      *((_QWORD *)v1439 + 5) = 0LL;
                                                    }
                                                    v1045 = GetProcessHeap();
                                                    HeapFree(v1045, 0, v1439);
                                                    v1467 = v956;
                                                  }
                                                  v969 = v1034 | 0x10000000;
                                                  if ( v969 >= 0 )
                                                  {
                                                    v1535 = 0;
                                                    v1536 = 4;
                                                    v1046 = RtlUIntAdd(4u, *v956, (int *)&v1536);
                                                    if ( v1046 >= 0 )
                                                    {
                                                      v1046 = RtlUIntAdd(v1536, v1047, (int *)&v1536);
                                                      if ( v1046 >= 0 )
                                                      {
                                                        v1046 = RtlUIntAdd(v1536, v956[4], (int *)&v1536);
                                                        if ( v1046 >= 0 )
                                                        {
                                                          v1046 = RtlUIntAdd(v1536, v1048, (int *)&v1536);
                                                          if ( v1046 >= 0 )
                                                          {
                                                            v1046 = RtlUIntAdd(v1536, v956[8], (int *)&v1536);
                                                            if ( v1046 >= 0 )
                                                            {
                                                              v1535 = v1536;
                                                              v1049 = v1536;
                                                              v1050 = GetProcessHeap();
                                                              v1051 = HeapAlloc(v1050, 8u, v1049);
                                                              v1470 = v1051;
                                                              if ( !v1051 )
                                                              {
                                                                v969 = -805306345;
                                                                goto LABEL_1398;
                                                              }
                                                              v1599 = v1051;
                                                              *v1051 = *v956;
                                                              v1046 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1051,
                                                                        4LL,
                                                                        (__int64 *)&v1599);
                                                              v1279 = v1052;
                                                              if ( v1046 < 0 )
                                                                goto LABEL_1391;
                                                              memcpy_0(
                                                                v1599,
                                                                *((const void **)v956 + 1),
                                                                (unsigned int)*v956);
                                                              v1046 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1599,
                                                                        (unsigned int)*v956,
                                                                        (__int64 *)&v1599);
                                                              v1052 = v1470;
                                                              v1279 = v1470;
                                                              if ( v1046 < 0 )
                                                                goto LABEL_1391;
                                                              v1053 = v1599;
                                                              *(_DWORD *)v1599 = v956[4];
                                                              v1046 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1053,
                                                                        4LL,
                                                                        (__int64 *)&v1599);
                                                              v1052 = v1054;
                                                              v1279 = v1054;
                                                              if ( v1046 < 0 )
                                                                goto LABEL_1391;
                                                              memcpy_0(
                                                                v1599,
                                                                *((const void **)v956 + 3),
                                                                (unsigned int)v956[4]);
                                                              v1046 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1599,
                                                                        (unsigned int)v956[4],
                                                                        (__int64 *)&v1599);
                                                              v1052 = v1470;
                                                              v1279 = v1470;
                                                              if ( v1046 < 0 )
                                                                goto LABEL_1391;
                                                              v1055 = v1599;
                                                              *(_DWORD *)v1599 = v956[8];
                                                              v1046 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1055,
                                                                        4LL,
                                                                        (__int64 *)&v1599);
                                                              v1052 = v1056;
                                                              v1279 = v1056;
                                                              if ( v1046 < 0
                                                                || (memcpy_0(
                                                                      v1599,
                                                                      *((const void **)v956 + 5),
                                                                      (unsigned int)v956[8]),
                                                                    v1046 = RtlULongLongAdd(
                                                                              (unsigned __int64)v1599,
                                                                              (unsigned int)v956[8],
                                                                              (__int64 *)&v1599),
                                                                    v1052 = v1470,
                                                                    v1279 = v1470,
                                                                    v1046 < 0) )
                                                              {
LABEL_1391:
                                                                if ( v1052 )
                                                                {
                                                                  v1057 = GetProcessHeap();
                                                                  HeapFree(v1057, 0, v1279);
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v1472 = (SIZE_T)v1470;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    v969 = v1046 | 0x10000000;
                                                    if ( v969 >= 0 )
                                                    {
                                                      v1537 = 8;
                                                      v1058 = RtlUIntAdd(8u, lpModuleNamem, (int *)&v1537);
                                                      v969 = v1058 | 0x10000000;
                                                      if ( v1058 >= 0 )
                                                      {
                                                        v1538 = 0;
                                                        v1060 = (v1537 + 7) & 0xFFFFFFF8;
                                                        if ( v1060 < v1537 )
                                                        {
                                                          v969 = -1073741675;
                                                          goto LABEL_1398;
                                                        }
                                                        v1538 = (v1537 + 7) & 0xFFFFFFF8;
                                                        v1472 = v1059;
                                                        v969 = RtlUIntAdd(v1060, 8, (int *)&v1538);
                                                        if ( v969 >= 0 )
                                                        {
                                                          v1472 = v1087;
                                                          v1398 = v1088;
                                                          if ( !v1623[1] )
                                                            goto LABEL_1440;
                                                          v1472 = v1087;
                                                          if ( LODWORD(v1623[0]) <= 1 )
                                                            goto LABEL_1440;
                                                          v1089 = (unsigned int *)v1623[1];
                                                          v1600 = (unsigned int *)v1623[1];
                                                          v1467 = v956;
                                                          lpMemq = v906;
                                                          v1383 = v908;
                                                          do
                                                          {
                                                            lpModuleNamen = *v1089;
                                                            v969 = RtlULongLongAdd(
                                                                     (unsigned __int64)v1089,
                                                                     4LL,
                                                                     (__int64 *)&v1600);
                                                            if ( v969 < 0 )
                                                              goto LABEL_1398;
                                                            v969 = RtlULongLongAdd(
                                                                     (unsigned __int64)v1600,
                                                                     lpModuleNamen,
                                                                     (__int64 *)&v1600);
                                                            if ( v969 < 0 )
                                                              goto LABEL_1398;
                                                            v1089 = v1600;
                                                          }
                                                          while ( v1090 == -1 );
                                                          lpModuleNameo = *v1600;
                                                          v969 = RtlULongLongAdd(
                                                                   (unsigned __int64)v1600,
                                                                   4LL,
                                                                   (__int64 *)&v1600);
                                                          if ( v969 >= 0 )
                                                          {
                                                            v1472 = v1091;
                                                            if ( !v1623[1] || (v1472 = v1091, LODWORD(v1623[0]) <= 2) )
                                                            {
LABEL_1440:
                                                              v969 = -1073741811;
                                                              goto LABEL_1398;
                                                            }
                                                            v1092 = (unsigned int *)v1623[1];
                                                            v1601 = v1623[1];
                                                            do
                                                            {
                                                              v1339 = *v1092;
                                                              v969 = RtlULongLongAdd(
                                                                       (unsigned __int64)v1092,
                                                                       4LL,
                                                                       (__int64 *)&v1601);
                                                              if ( v969 < 0 )
                                                                goto LABEL_1398;
                                                              v969 = RtlULongLongAdd(v1601, v1339, (__int64 *)&v1601);
                                                              if ( v969 < 0 )
                                                                goto LABEL_1398;
                                                              v1092 = (unsigned int *)v1601;
                                                            }
                                                            while ( (unsigned int)(v1093 + 1) < 2 );
                                                            v969 = RtlULongLongAdd(v1601, 4LL, (__int64 *)&v1601);
                                                            if ( v969 >= 0 )
                                                            {
                                                              v1472 = v1094;
                                                              v1539 = 4;
                                                              v969 = RtlUIntAdd(4u, v1538, (int *)&v1539);
                                                              if ( v969 >= 0 )
                                                              {
                                                                v969 = RtlUIntAdd(v1539, v1095, (int *)&v1539);
                                                                if ( v969 >= 0 )
                                                                {
                                                                  v969 = RtlUIntAdd(v1539, lpModuleNameo, (int *)&v1539);
                                                                  if ( v969 >= 0 )
                                                                  {
                                                                    v969 = RtlUIntAdd(v1539, 4, (int *)&v1539);
                                                                    if ( v969 >= 0 )
                                                                    {
                                                                      v969 = RtlUIntAdd(v1539, v1096, (int *)&v1539);
                                                                      if ( v969 >= 0 )
                                                                      {
                                                                        v1472 = v1097;
                                                                        if ( v1539 > 0x400000 )
                                                                        {
                                                                          v969 = -2147418113;
                                                                          goto LABEL_1398;
                                                                        }
                                                                        LODWORD(v1466) = v1539;
                                                                        v1098 = v1539;
                                                                        v1099 = GetProcessHeap();
                                                                        v1100 = (WCHAR *)HeapAlloc(v1099, 8u, v1098);
                                                                        v1101 = v1368;
                                                                        if ( v1100 )
                                                                          v1101 = v1100;
                                                                        v1368 = v1101;
                                                                        v969 = v1100 != 0LL ? 0x10000000 : -805306345;
                                                                        if ( v1100 )
                                                                        {
                                                                          v1628 = 0LL;
                                                                          v1629 = 0LL;
                                                                          hModule = 0LL;
                                                                          if ( !v1472 || !v1101 )
                                                                          {
                                                                            v969 = -2147024809;
                                                                            goto LABEL_1398;
                                                                          }
                                                                          *(_QWORD *)&v1628 = v1472;
                                                                          LODWORD(v1629) = v1398;
                                                                          *((_QWORD *)&v1628 + 1) = v1101;
                                                                          *(_QWORD *)((char *)&v1629 + 4) = (unsigned int)v1466;
                                                                          if ( GetModuleHandleExW(
                                                                                 1u,
                                                                                 L"ntdll.dll",
                                                                                 &hModule)
                                                                            && (ProcAddress = GetProcAddress(
                                                                                                hModule,
                                                                                                "NtQuerySystemInformation")) != 0LL )
                                                                          {
                                                                            v1104 = ((__int64 (__fastcall *)(__int64, __int128 *))ProcAddress)(
                                                                                      134LL,
                                                                                      &v1628);
                                                                            v969 = v1104 | 0x10000000;
                                                                            if ( v1104 >= 0 )
                                                                            {
                                                                              v1105 = DWORD1(v1629);
LABEL_1480:
                                                                              v1540 = 0;
                                                                              v1603 = v1368;
                                                                              if ( v1105 < 4 )
                                                                              {
                                                                                v969 = -805306306;
                                                                                goto LABEL_1398;
                                                                              }
                                                                              lpModuleNamep = *(_DWORD *)v1368;
                                                                              v1106 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1368,
                                                                                        4LL,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1106 = RtlUIntAdd(0, 4, (int *)&v1540);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1107 - v1540 < (unsigned int)v1108 )
                                                                              {
LABEL_1485:
                                                                                v969 = -805306306;
                                                                                goto LABEL_1398;
                                                                              }
                                                                              v1465 = (SIZE_T)v1603;
                                                                              v1106 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1603,
                                                                                        v1108,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1106 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        v1109,
                                                                                        (int *)&v1540);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1110 - v1540 < 4 )
                                                                                goto LABEL_1485;
                                                                              v1340 = *(_DWORD *)v1603;
                                                                              v1106 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1603,
                                                                                        4LL,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1106 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        4,
                                                                                        (int *)&v1540);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1111 - v1540 < v1112 )
                                                                                goto LABEL_1485;
                                                                              v1466 = v1603;
                                                                              v1106 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1603,
                                                                                        v1112,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1106 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        v1113,
                                                                                        (int *)&v1540);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1114 - v1540 < 4 )
                                                                                goto LABEL_1485;
                                                                              v1399 = *(_DWORD *)v1603;
                                                                              v1106 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1603,
                                                                                        4LL,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1106 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        4,
                                                                                        (int *)&v1540);
                                                                              if ( v1106 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1115 - v1540 < v1399 )
                                                                                goto LABEL_1485;
                                                                              v1106 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        v1399,
                                                                                        (int *)&v1540);
                                                                              if ( v1106 < 0 )
                                                                              {
LABEL_1524:
                                                                                v1133 = v1425;
LABEL_1525:
                                                                                v969 = v1106 | 0x10000000;
                                                                                if ( v969 < 0 )
                                                                                  goto LABEL_1398;
                                                                                if ( !v1133
                                                                                  || (v1440 = (LPCWSTR)*((_QWORD *)v1133 + 1)) == 0LL
                                                                                  || !*(_DWORD *)v1133 )
                                                                                {
                                                                                  v969 = -805306355;
                                                                                  goto LABEL_1398;
                                                                                }
                                                                                v1134 = *(unsigned int *)v1133 - 8LL;
                                                                                v1465 = v1134;
                                                                                v1135 = (unsigned __int16 *)MemoryAlloc(v1134);
                                                                                v1468 = v1135;
                                                                                if ( !v1135 )
                                                                                  goto LABEL_1555;
                                                                                v1136 = 0;
                                                                                v1678 = 0x7F1137FAB69605ELL;
                                                                                v1137 = (unsigned __int8 *)v1440;
                                                                                v1471 = v1135;
                                                                                v1138 = v1134 & 7;
                                                                                lpModuleNameq = 0;
                                                                                v1139 = 0;
                                                                                if ( (v1134 & 7) != 0 )
                                                                                {
                                                                                  v1475 = 0;
                                                                                  v1140 = v1425;
                                                                                  do
                                                                                  {
                                                                                    v1141 = *v1137;
                                                                                    if ( v1139 >= 4 )
                                                                                    {
                                                                                      v1475 |= v1141 << v1476;
                                                                                      v1142 = lpModuleNameq;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      v1142 = (v1141 << (v1476 - 32)) | lpModuleNameq;
                                                                                      lpModuleNameq = v1142;
                                                                                    }
                                                                                    ++v1137;
                                                                                    ++v1139;
                                                                                    v1476 -= 8;
                                                                                  }
                                                                                  while ( (int)v1139 < (int)v1138 );
                                                                                  v1139 = v1142 ^ 0x92F65A5;
                                                                                  v1143 = v1475 ^ 0x699A899C;
                                                                                  v1144 = v1142 ^ 0x92F65A5;
                                                                                  v1145 = v1475 ^ 0x699A899C;
                                                                                  v1146 = 0;
                                                                                  v1341 = 0;
                                                                                  v1147 = v1137;
                                                                                  do
                                                                                  {
                                                                                    lpModuleNameq = v1142;
                                                                                    if ( v1146 >= 4 )
                                                                                    {
                                                                                      v1145 = (v1145 << 8) | HIBYTE(v1145);
                                                                                      v1148 = v1145;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      v1144 = (v1144 << 8) | HIBYTE(v1144);
                                                                                      v1148 = v1144;
                                                                                    }
                                                                                    v1149 = (char *)v1471 + 1;
                                                                                    v1466 = (char *)v1471 + 1;
                                                                                    *(_BYTE *)v1471 = v1148;
                                                                                    v1146 = v1341 + 1;
                                                                                    v1341 = v1146;
                                                                                    v1471 = v1149;
                                                                                    v1142 = lpModuleNameq;
                                                                                  }
                                                                                  while ( v1146 < (int)v1138 );
                                                                                  v1467 = v956;
                                                                                  v1383 = v908;
                                                                                  lpMemq = v906;
                                                                                  v1471 = v1466;
                                                                                  v1136 = 0;
                                                                                  v99 = v1477;
                                                                                  v1135 = v1468;
                                                                                  v1137 = v1147;
                                                                                  if ( v1138 <= 4 )
                                                                                  {
                                                                                    v1150 = 0;
                                                                                    if ( v1138 < 4 )
                                                                                      v1139 = v1139 >> (8 * (4 - v1138)) << (8 * (4 - v1138));
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v1150 = v1143 >> (8 * (8 - v1138)) << (8 * (8 - v1138));
                                                                                  }
                                                                                }
                                                                                else
                                                                                {
                                                                                  v1150 = 0;
                                                                                  v1140 = v1425;
                                                                                }
                                                                                v1470 = (LPVOID)(v1465 >> 3);
                                                                                if ( v1465 >> 3 )
                                                                                {
                                                                                  v1151 = HIDWORD(v1678);
                                                                                  LODWORD(v1466) = HIWORD(v1678);
                                                                                  v1152 = (char *)v1471 + 7;
                                                                                  v1153 = v1137 + 2;
                                                                                  v1154 = lpModuleNameq;
                                                                                  v1155 = (char *)v1470;
                                                                                  v1156 = WORD2(v1678);
                                                                                  v1157 = WORD1(v1678);
                                                                                  do
                                                                                  {
                                                                                    v1158 = v1153[1] | ((*v1153 | ((*(v1153 - 1) | (*(v1153 - 2) << 8)) << 8)) << 8);
                                                                                    v1159 = v1153[5] | ((v1153[4] | ((v1153[3] | (v1153[2] << 8)) << 8)) << 8);
                                                                                    v1160 = v1158 ^ v1139;
                                                                                    v1153 += 8;
                                                                                    v1161 = v1151 ^ v1160 ^ 0xAB69605E ^ v1159 ^ v1150;
                                                                                    v1162 = (v1156
                                                                                           * __ROR4__(
                                                                                               v1161 + 1419157410,
                                                                                               27)
                                                                                           + __ROR4__(v1161, 22)) ^ v1160;
                                                                                    v1163 = (v1157
                                                                                           * __ROR4__(v1162 + v1151, 9)
                                                                                           - __ROR4__(v1162, 30)) ^ v1161;
                                                                                    v1164 = (24670 * (v1163 - v1156)
                                                                                           - (v1163 >> 13)) ^ v1162;
                                                                                    v1165 = ((_DWORD)v1466
                                                                                           * __ROR4__(v1157 ^ v1164, 26)
                                                                                           - __ROR4__(v1164, 30)) ^ v1163;
                                                                                    v1166 = (v1151 - (v1165 ^ 0xAB69605E)) ^ v1164;
                                                                                    lpModuleNames = (v1157 * (v1156 ^ v1166)) ^ __ROR4__(v1166, 6) ^ v1165;
                                                                                    v1167 = (24670
                                                                                           * __ROR4__(
                                                                                               lpModuleNames + v1151,
                                                                                               15)
                                                                                           + __ROR4__(lpModuleNames, 30)) ^ v1166;
                                                                                    v1168 = (HIWORD(v1678)
                                                                                           * __ROR4__(
                                                                                               v1167 + 1419157410,
                                                                                               14)
                                                                                           - __ROR4__(v1167, 24)) ^ lpModuleNames;
                                                                                    v1169 = (v1156
                                                                                           * __ROR4__(
                                                                                               v1168 ^ 0xAB69605E,
                                                                                               12)) ^ __ROR4__(v1168, 10) ^ v1167;
                                                                                    v1170 = (v1169 >> 10) ^ (v1157 * (HIWORD(v1678) ^ v1169)) ^ v1168;
                                                                                    v1171 = (HIWORD(v1678)
                                                                                           * (__ROR4__(~v1170, 5) + 24670)) ^ v1169;
                                                                                    lpModuleNamet = (v1171 - HIWORD(v1678)) ^ 0xAB69605E ^ v1170;
                                                                                    v1172 = ((lpModuleNamet >> 2)
                                                                                           + __ROR4__(
                                                                                               HIWORD(v1678) ^ lpModuleNamet,
                                                                                               30)
                                                                                           * v1156) ^ v1171;
                                                                                    lpModuleNameu = (__ROR4__(v1172 - v1151, 6) * v1157 + __ROR4__(v1172, 25)) ^ lpModuleNamet;
                                                                                    v1173 = (24670
                                                                                           * (v1156 ^ lpModuleNameu)
                                                                                           + __ROR4__(lpModuleNameu, 9)) ^ v1172;
                                                                                    v1174 = (__ROR4__(v1157 ^ v1173, 27)
                                                                                           * HIWORD(v1678)
                                                                                           + __ROR4__(v1173, 25)) ^ lpModuleNameu;
                                                                                    v1175 = v1151 ^ v1174 ^ 0xAB69605E ^ v1173;
                                                                                    lpModuleNamev = (v1156 * (__ROR4__(v1175, 3) - v1157)) ^ v1174;
                                                                                    v1176 = (24670
                                                                                           * __ROR4__(
                                                                                               lpModuleNamev - v1151,
                                                                                               1)
                                                                                           - __ROR4__(lpModuleNamev, 6)) ^ v1175;
                                                                                    lpModuleNamew = (__ROR4__(v1176 - 1419157410, 29) * HIWORD(v1678) + __ROR4__(v1176, 18)) ^ lpModuleNamev;
                                                                                    v1177 = (__ROR4__(
                                                                                               lpModuleNamew
                                                                                             - 1419157410,
                                                                                               17)
                                                                                           * v1156
                                                                                           - __ROR4__(lpModuleNamew, 14)) ^ v1176;
                                                                                    lpModuleNamex = (v1177 >> 3) ^ (v1157 * (v1177 ^ 0x605E)) ^ lpModuleNamew;
                                                                                    v1342 = (24670
                                                                                           * __ROR4__(
                                                                                               v1151 ^ lpModuleNamex,
                                                                                               28)) ^ __ROR4__(lpModuleNamex, 30) ^ v1154 ^ v1177;
                                                                                    lpModuleNamey = v1475 ^ lpModuleNamex;
                                                                                    *(v1152 - 4) = v1342;
                                                                                    *v1152 = lpModuleNamey;
                                                                                    *(v1152 - 5) = BYTE1(v1342);
                                                                                    *(v1152 - 1) = BYTE1(lpModuleNamey);
                                                                                    *(v1152 - 6) = (unsigned __int16)(v1342 >> 8) >> 8;
                                                                                    *(v1152 - 2) = (unsigned __int16)(lpModuleNamey >> 8) >> 8;
                                                                                    *(v1152 - 7) = __ROR4__(
                                                                                                     (((v1342 >> 8) | (v1342 << 24)) >> 8) | (((v1342 >> 8) | (v1342 << 24)) << 24),
                                                                                                     8);
                                                                                    *(v1152 - 3) = __ROR4__(
                                                                                                     (((lpModuleNamey >> 8) | (lpModuleNamey << 24)) >> 8) | (((lpModuleNamey >> 8) | (lpModuleNamey << 24)) << 24),
                                                                                                     8);
                                                                                    v1150 = lpModuleNamey;
                                                                                    v1154 = v1158;
                                                                                    v1475 = v1159;
                                                                                    v1152 += 8;
                                                                                    --v1155;
                                                                                    v1139 = v1342;
                                                                                  }
                                                                                  while ( v1155 );
                                                                                  v1136 = 0;
                                                                                  v99 = v1477;
                                                                                  v906 = lpMemq;
                                                                                  v908 = v1383;
                                                                                  v956 = v1467;
                                                                                  v1039 = (void *)v1323;
                                                                                  v1140 = v1425;
                                                                                  v1135 = v1468;
                                                                                }
                                                                                for ( n = 0LL; n < v1465; ++n )
                                                                                  v1136 ^= *((_BYTE *)v1135 + n);
                                                                                v1384 = (LPVOID)v1472;
                                                                                lpMemr = v1039;
                                                                                v1425 = v1140;
                                                                                if ( v1136 != *(_QWORD *)((char *)v1440 + v1465) )
                                                                                {
                                                                                  MemoryFree(v1135);
LABEL_1555:
                                                                                  v969 = -805306367;
                                                                                  v1468 = 0LL;
                                                                                  goto LABEL_1398;
                                                                                }
                                                                                v1541 = 0;
                                                                                v1604 = v1135;
                                                                                if ( (unsigned int)v1465 < 4 )
                                                                                {
                                                                                  v1179 = -1073741762;
                                                                                  v1468 = v1135;
                                                                                  v1425 = v1140;
LABEL_1595:
                                                                                  v969 = v1179 | 0x10000000;
                                                                                  goto LABEL_1398;
                                                                                }
                                                                                lpModuleNamer = *(_DWORD *)v1135;
                                                                                v1179 = RtlULongLongAdd(
                                                                                          (unsigned __int64)v1135,
                                                                                          4LL,
                                                                                          (__int64 *)&v1604);
                                                                                v1468 = v1180;
                                                                                v1425 = v1181;
                                                                                v1472 = (SIZE_T)v1384;
                                                                                if ( v1179 < 0 )
                                                                                  goto LABEL_1595;
                                                                                v1179 = RtlUIntAdd(0, 4, (int *)&v1541);
                                                                                v1468 = v1182;
                                                                                v1425 = v1183;
                                                                                v1184 = (SIZE_T)v1384;
                                                                                v1472 = (SIZE_T)v1384;
                                                                                if ( v1179 < 0 )
                                                                                  goto LABEL_1595;
                                                                                if ( (unsigned int)v1465 - v1541 < 4 )
                                                                                  goto LABEL_1561;
                                                                                v1343 = *(_DWORD *)v1604;
                                                                                v1179 = RtlULongLongAdd(
                                                                                          (unsigned __int64)v1604,
                                                                                          4LL,
                                                                                          (__int64 *)&v1604);
                                                                                v1468 = v1185;
                                                                                v1425 = v1186;
                                                                                v1472 = (SIZE_T)v1384;
                                                                                if ( v1179 < 0 )
                                                                                  goto LABEL_1595;
                                                                                v1179 = RtlUIntAdd(
                                                                                          v1541,
                                                                                          4,
                                                                                          (int *)&v1541);
                                                                                v1468 = v1182;
                                                                                v1425 = v1183;
                                                                                v1184 = (SIZE_T)v1384;
                                                                                v1472 = (SIZE_T)v1384;
                                                                                if ( v1179 < 0 )
                                                                                  goto LABEL_1595;
                                                                                if ( (unsigned int)v1465 - v1541 < v1343 )
                                                                                {
LABEL_1561:
                                                                                  v1472 = v1184;
                                                                                }
                                                                                else
                                                                                {
                                                                                  v1179 = RtlUIntAdd(
                                                                                            v1541,
                                                                                            v1343,
                                                                                            (int *)&v1541);
                                                                                  v1468 = v1182;
                                                                                  v1425 = v1183;
                                                                                  v1472 = (SIZE_T)v1384;
                                                                                  if ( v1179 < 0 )
                                                                                    goto LABEL_1595;
                                                                                  v1187 = v1604;
                                                                                  if ( (char *)v1182
                                                                                     + (unsigned int)v1465 >= (char *)v1604 + v1343
                                                                                    && (unsigned __int64)v1182
                                                                                     + (unsigned int)v1465
                                                                                     - (_QWORD)v1604
                                                                                     - v1343 < 8 )
                                                                                  {
                                                                                    v1188 = 0LL;
                                                                                    v1441 = 0LL;
                                                                                    v1605 = 0LL;
                                                                                    v1606 = 0LL;
                                                                                    v1607 = 0LL;
                                                                                    v1179 = 0;
                                                                                    v1400 = 0;
                                                                                    v1468 = v1182;
                                                                                    v1425 = v1183;
                                                                                    v1324 = (size_t)lpMemr;
                                                                                    v1472 = (SIZE_T)v1384;
                                                                                    if ( v1604 )
                                                                                    {
                                                                                      v1465 = (SIZE_T)v1604;
                                                                                      v1179 = RtlULongLongAdd(
                                                                                                (unsigned __int64)v1604,
                                                                                                v1343,
                                                                                                (__int64 *)&v1605);
                                                                                      v1468 = v1189;
                                                                                      v1425 = v1190;
                                                                                      v1324 = (size_t)lpMemr;
                                                                                      v1472 = (SIZE_T)v1384;
                                                                                      if ( v1179 < 0 )
                                                                                        goto LABEL_1589;
                                                                                      v1468 = v1189;
                                                                                      v1425 = v1190;
                                                                                      v1039 = lpMemr;
                                                                                      v1324 = (size_t)lpMemr;
                                                                                      v1472 = (SIZE_T)v1384;
                                                                                      v1191 = v1465;
                                                                                      if ( v1465 < v1605 )
                                                                                      {
                                                                                        v1192 = v1189;
                                                                                        v1468 = v1189;
                                                                                        v1425 = v1190;
                                                                                        v1324 = (size_t)lpMemr;
                                                                                        v1472 = (SIZE_T)v1384;
                                                                                        while ( 1 )
                                                                                        {
                                                                                          v1179 = RtlULongLongAdd(
                                                                                                    v1191,
                                                                                                    4LL,
                                                                                                    (__int64 *)&v1606);
                                                                                          if ( v1179 < 0 )
                                                                                            goto LABEL_1589;
                                                                                          if ( v1606 > v1605 )
                                                                                            goto LABEL_1579;
                                                                                          v1543 = 0;
                                                                                          v1179 = RtlUIntAdd(
                                                                                                    4u,
                                                                                                    *v1193,
                                                                                                    (int *)&v1543);
                                                                                          if ( v1179 < 0 )
                                                                                            goto LABEL_1595;
                                                                                          v1179 = RtlULongLongAdd(
                                                                                                    v1194,
                                                                                                    v1543,
                                                                                                    (__int64 *)&v1607);
                                                                                          v1468 = v1192;
                                                                                          v1425 = v1196;
                                                                                          v1324 = (size_t)lpMemr;
                                                                                          v1472 = v1195;
                                                                                          if ( v1179 < 0 )
                                                                                            goto LABEL_1589;
                                                                                          v1191 = v1607;
                                                                                          v1465 = v1607;
                                                                                          v1197 = v1605;
                                                                                          v1468 = v1192;
                                                                                          v1425 = v1196;
                                                                                          v1472 = v1195;
                                                                                          if ( v1607 > v1605 )
                                                                                            goto LABEL_1579;
                                                                                          ++v1400;
                                                                                          v1324 = (size_t)lpMemr;
                                                                                          if ( v1607 >= v1605 )
                                                                                          {
                                                                                            v1468 = v1192;
                                                                                            v1425 = v1196;
                                                                                            v1324 = (size_t)lpMemr;
                                                                                            v1472 = v1195;
                                                                                            goto LABEL_1581;
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      v1197 = v1605;
LABEL_1581:
                                                                                      if ( v1191 != v1197 )
                                                                                      {
LABEL_1579:
                                                                                        v1179 = -1073741811;
                                                                                        goto LABEL_1595;
                                                                                      }
                                                                                      v1187 = v1604;
                                                                                      v1188 = 0LL;
                                                                                    }
                                                                                    v1198 = v1343;
                                                                                    if ( !v1343 )
                                                                                    {
LABEL_1586:
                                                                                      if ( v1187 )
                                                                                      {
                                                                                        memcpy_0(v1188, v1187, v1198);
                                                                                        v1188 = (void *)v1441;
                                                                                      }
                                                                                      v1624[1] = v1188;
                                                                                      LODWORD(v1624[0]) = v1400;
                                                                                      goto LABEL_1589;
                                                                                    }
                                                                                    v1199 = GetProcessHeap();
                                                                                    v1188 = HeapAlloc(v1199, 8u, v1343);
                                                                                    v1441 = (LPCWSTR)v1188;
                                                                                    if ( v1188 )
                                                                                    {
                                                                                      v1179 = 0;
                                                                                      v1198 = v1343;
                                                                                      goto LABEL_1586;
                                                                                    }
                                                                                    v1179 = -1073741801;
LABEL_1589:
                                                                                    v1039 = (void *)v1324;
                                                                                    if ( v1179 >= 0
                                                                                      && lpModuleNamer != LODWORD(v1624[0]) )
                                                                                    {
                                                                                      v1179 = -1073741762;
                                                                                    }
                                                                                    goto LABEL_1595;
                                                                                  }
                                                                                  v1039 = lpMemr;
                                                                                  v1472 = (SIZE_T)v1384;
                                                                                }
                                                                                v1425 = v1183;
                                                                                v1468 = v1182;
                                                                                v1179 = -1073741762;
                                                                                goto LABEL_1595;
                                                                              }
                                                                              if ( v1116 != v1540
                                                                                || v1118 + v1117 + v1399 + 12LL != v1116 )
                                                                              {
                                                                                goto LABEL_1485;
                                                                              }
                                                                              v1119 = GetProcessHeap();
                                                                              v1120 = (SIZE_T *)HeapAlloc(
                                                                                                  v1119,
                                                                                                  8u,
                                                                                                  0x30uLL);
                                                                              v1121 = v1120;
                                                                              v1426 = v1120;
                                                                              if ( !v1120 )
                                                                              {
                                                                                v1106 = -1073741801;
LABEL_1523:
                                                                                v1133 = 0LL;
                                                                                v1425 = 0LL;
                                                                                goto LABEL_1525;
                                                                              }
                                                                              v1106 = 0;
                                                                              if ( v1465 )
                                                                              {
                                                                                *(_DWORD *)v1120 = lpModuleNamep;
                                                                                v1122 = GetProcessHeap();
                                                                                v1123 = HeapAlloc(
                                                                                          v1122,
                                                                                          8u,
                                                                                          lpModuleNamep);
                                                                                if ( !v1123 )
                                                                                  goto LABEL_1512;
                                                                                v1426[1] = (SIZE_T)v1123;
                                                                                v1106 = 0;
                                                                                memcpy_0(
                                                                                  v1123,
                                                                                  (const void *)v1465,
                                                                                  lpModuleNamep);
                                                                                v1121 = v1426;
                                                                                v1467 = v956;
                                                                                lpMemq = v906;
                                                                                v1383 = v908;
                                                                              }
                                                                              else
                                                                              {
                                                                                *(_DWORD *)v1120 = 0;
                                                                                v1120[1] = 0LL;
                                                                              }
                                                                              v1426 = v1121;
                                                                              if ( !v1466 )
                                                                              {
                                                                                *((_DWORD *)v1121 + 4) = 0;
                                                                                v1121[3] = 0LL;
LABEL_1510:
                                                                                if ( v1603 )
                                                                                {
                                                                                  *((_DWORD *)v1121 + 8) = v1399;
                                                                                  v1465 = v1399;
                                                                                  v1126 = GetProcessHeap();
                                                                                  v1127 = HeapAlloc(v1126, 8u, v1399);
                                                                                  if ( !v1127 )
                                                                                    goto LABEL_1512;
                                                                                  v1426[5] = (SIZE_T)v1127;
                                                                                  v1106 = 0;
                                                                                  memcpy_0(v1127, v1603, v1465);
                                                                                  v1121 = v1426;
                                                                                  v1467 = v956;
                                                                                  lpMemq = v906;
                                                                                  v1383 = v908;
                                                                                }
                                                                                else
                                                                                {
                                                                                  *((_DWORD *)v1121 + 8) = 0;
                                                                                  v1121[5] = 0LL;
                                                                                }
                                                                                v1133 = (unsigned __int16 *)v1121;
                                                                                v1425 = (unsigned __int16 *)v1121;
                                                                                goto LABEL_1525;
                                                                              }
                                                                              *((_DWORD *)v1121 + 4) = v1340;
                                                                              v1465 = v1340;
                                                                              v1124 = GetProcessHeap();
                                                                              v1125 = HeapAlloc(v1124, 8u, v1340);
                                                                              if ( v1125 )
                                                                              {
                                                                                v1426[3] = (SIZE_T)v1125;
                                                                                v1106 = 0;
                                                                                memcpy_0(v1125, v1466, v1465);
                                                                                v1121 = v1426;
                                                                                v1467 = v956;
                                                                                lpMemq = v906;
                                                                                v1383 = v908;
                                                                                goto LABEL_1510;
                                                                              }
LABEL_1512:
                                                                              v1106 = -1073741801;
                                                                              v1128 = v1426;
                                                                              v1465 = v1426[1];
                                                                              if ( v1465 )
                                                                              {
                                                                                v1129 = GetProcessHeap();
                                                                                HeapFree(v1129, 0, (LPVOID)v1465);
                                                                                v1128 = v1426;
                                                                                v1426[1] = 0LL;
                                                                              }
                                                                              v1465 = v1128[3];
                                                                              if ( v1465 )
                                                                              {
                                                                                v1130 = GetProcessHeap();
                                                                                HeapFree(v1130, 0, (LPVOID)v1465);
                                                                                v1128 = v1426;
                                                                                v1426[3] = 0LL;
                                                                              }
                                                                              v1465 = v1128[5];
                                                                              if ( v1465 )
                                                                              {
                                                                                v1131 = GetProcessHeap();
                                                                                HeapFree(v1131, 0, (LPVOID)v1465);
                                                                                v1426[5] = 0LL;
                                                                              }
                                                                              v1132 = GetProcessHeap();
                                                                              HeapFree(v1132, 0, v1426);
                                                                              goto LABEL_1523;
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            v1102 = GetLastError();
                                                                            v969 = v1102;
                                                                            if ( v1102 > 0 )
                                                                              v969 = (unsigned __int16)v1102 | 0x80070000;
                                                                            if ( v969 >= 0 )
                                                                              v969 = -2147467259;
                                                                          }
                                                                          if ( v969 == -805306333 )
                                                                          {
                                                                            v969 = -2147024774;
                                                                            goto LABEL_1398;
                                                                          }
                                                                          if ( v969 >= 0 )
                                                                          {
                                                                            v1105 = (unsigned int)v1466;
                                                                            goto LABEL_1480;
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
LABEL_1398:
                                                  if ( !v1039 )
                                                    goto LABEL_1400;
                                                  goto LABEL_1399;
                                                }
LABEL_1599:
                                                v1623[0] = 0LL;
                                                v1200 = (void *)v1623[1];
                                                if ( v1623[1] )
                                                {
                                                  v1201 = GetProcessHeap();
                                                  HeapFree(v1201, 0, v1200);
                                                  v1623[1] = 0LL;
                                                }
                                                v1624[0] = 0LL;
                                                v1202 = v1624[1];
                                                if ( v1624[1] )
                                                {
                                                  v1203 = GetProcessHeap();
                                                  HeapFree(v1203, 0, v1202);
                                                  v1624[1] = 0LL;
                                                }
                                                if ( v908 )
                                                {
                                                  v1204 = GetProcessHeap();
                                                  HeapFree(v1204, 0, v908);
                                                }
                                                if ( v906 )
                                                {
                                                  v1205 = GetProcessHeap();
                                                  HeapFree(v1205, 0, v906);
                                                }
                                                goto LABEL_1607;
                                              }
                                              v960 = (v1534 + 7) & 0xFFFFFFF8;
                                              if ( v960 < v1534 )
                                                goto LABEL_1599;
                                              v1534 = (v1534 + 7) & 0xFFFFFFF8;
                                              v961 = v960;
                                              v962 = GetProcessHeap();
                                              v963 = HeapAlloc(v962, 8u, v961);
                                              v1375 = v963;
                                              v959 = 0LL;
                                              if ( v963 )
                                              {
                                                v1597 = v963;
                                                *v963 = v1623[0];
                                                v957 = RtlULongLongAdd((unsigned __int64)v963, 4LL, (__int64 *)&v1597);
                                                lpMemp = v965;
                                                if ( v957 >= 0 )
                                                {
                                                  v966 = v1597;
                                                  *(_DWORD *)v1597 = HIDWORD(v1623[0]);
                                                  v957 = RtlULongLongAdd(
                                                           (unsigned __int64)v966,
                                                           v964,
                                                           (__int64 *)&v1597);
                                                  lpMemp = v967;
                                                  if ( v957 >= 0 )
                                                  {
                                                    *(_QWORD *)&v967[v1534 - 8] = v1438;
                                                    memcpy_0(v1597, (const void *)v1623[1], HIDWORD(v1623[0]));
                                                    v1323 = (size_t)v1375;
                                                    v958 = v1534;
                                                    v1338 = v1534;
                                                    v959 = 0LL;
LABEL_1326:
                                                    lpMemo = v906;
                                                    v1374 = v908;
                                                    goto LABEL_1327;
                                                  }
                                                }
                                                v968 = GetProcessHeap();
                                                HeapFree(v968, 0, lpMemp);
                                                v959 = 0LL;
                                              }
                                              else
                                              {
                                                v957 = -1073741801;
                                              }
                                              v958 = (unsigned int)v956;
                                              goto LABEL_1326;
                                            }
                                            lpMemk = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(
                                                                                        0LL,
                                                                                        0LL,
                                                                                        1027LL);
                                            if ( !lpMemk )
                                            {
                                              GetLastError();
                                              goto LABEL_1264;
                                            }
                                            qword_18089D730 = off_1808913D8[0]();
                                            v461 = dword_180899E48;
                                            v1270 = dword_180899E48;
                                            memset_0(&v1660, 0, 0x70uLL);
                                            v1686 = 0LL;
                                            v1467 = 0LL;
                                            memset(v1695, 0, 44);
                                            v1472 = 0LL;
                                            while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
                                              ;
                                            v462 = dword_18089D72C;
                                            if ( dword_18089D72C )
                                              goto LABEL_679;
                                            v1349 = 0;
                                            v1454 = 0;
                                            v463 = (char *)MemoryAlloc(0x338uLL);
                                            v1355 = (WCHAR *)v463;
                                            if ( !v463 )
                                              goto LABEL_642;
                                            v464 = 0;
                                            v465 = 0;
                                            v466 = 0;
                                            v467 = v463 + 7;
                                            v468 = (unsigned __int8 *)&unk_1807573B2;
                                            v469 = 103LL;
                                            v470 = -1;
                                            do
                                            {
                                              v471 = v468[1] | ((*v468 | ((*(v468 - 1) | (*(v468 - 2) << 8)) << 8)) << 8);
                                              v472 = v468[5] | ((v468[4] | ((v468[3] | (v468[2] << 8)) << 8)) << 8);
                                              v473 = v471 ^ v466;
                                              v468 += 8;
                                              v474 = v473 ^ v465 ^ v472 ^ 0xAC987321;
                                              v475 = (4991 * __ROR4__(v474 + 1419157410, 27) + __ROR4__(v474, 22)) ^ v473;
                                              v476 = (43881 * __ROR4__(v475 + 133239679, 9) - __ROR4__(v475, 30)) ^ v474;
                                              v477 = (24670 * v476 - (v476 >> 13) - 123127970) ^ v475;
                                              v478 = (2033 * __ROR4__(v477 ^ 0xAB69, 26) - __ROR4__(v477, 30)) ^ v476;
                                              v479 = (133239679 - (v478 ^ 0xAB69605E)) ^ v477;
                                              v480 = (43881 * (v479 ^ 0x137F)) ^ __ROR4__(v479, 6) ^ v478;
                                              v481 = (24670 * __ROR4__(v480 + 133239679, 15) + __ROR4__(v480, 30)) ^ v479;
                                              v482 = (2033 * __ROR4__(v481 + 1419157410, 14) - __ROR4__(v481, 24)) ^ v480;
                                              v483 = (4991 * __ROR4__(v482 ^ 0xAB69605E, 12)) ^ __ROR4__(v482, 10) ^ v481;
                                              v484 = v482 ^ (v483 >> 10) ^ (43881 * (v483 ^ 0x7F1));
                                              v485 = (2033 * (__ROR4__(~v484, 5) + 24670)) ^ v483;
                                              v486 = v484 ^ (v485 - 2033) ^ 0xAB69605E;
                                              v487 = (4991 * __ROR4__(v484 ^ (v485 - 2033) ^ 0xAB6967AF, 30)
                                                    + (v486 >> 2)) ^ v485;
                                              v488 = (43881 * __ROR4__(v487 - 133239679, 6) + __ROR4__(v487, 25)) ^ v486;
                                              v489 = (24670 * (v488 ^ 0x137F) + __ROR4__(v488, 9)) ^ v487;
                                              v490 = (2033 * __ROR4__(v489 ^ 0xAB69, 27) + __ROR4__(v489, 25)) ^ v488;
                                              v491 = v489 ^ v490 ^ 0xAC987321;
                                              v492 = (4991 * __ROR4__(v491, 3) - 219010071) ^ v490;
                                              v493 = (24670 * __ROR4__(v492 - 133239679, 1) - __ROR4__(v492, 6)) ^ v491;
                                              v494 = (2033 * __ROR4__(v493 - 1419157410, 29) + __ROR4__(v493, 18)) ^ v492;
                                              v495 = (4991 * __ROR4__(v494 - 1419157410, 17) - __ROR4__(v494, 14)) ^ v493;
                                              v496 = (v495 >> 3) ^ (43881 * (v495 ^ 0x605E)) ^ v494;
                                              v466 = v464 ^ v495 ^ (24670 * __ROR4__(v496 ^ 0x7F1137F, 28)) ^ __ROR4__(v496, 30);
                                              v465 = v470 ^ v496;
                                              *(v467 - 4) = v466;
                                              *v467 = v465;
                                              *(v467 - 5) = BYTE1(v466);
                                              *(v467 - 1) = BYTE1(v465);
                                              *(v467 - 6) = (unsigned __int16)(v466 >> 8) >> 8;
                                              *(v467 - 2) = (unsigned __int16)(v465 >> 8) >> 8;
                                              *(v467 - 7) = __ROR4__(
                                                              (((v466 >> 8) | (v466 << 24)) >> 8) | (((v466 >> 8) | (v466 << 24)) << 24),
                                                              8);
                                              *(v467 - 3) = __ROR4__(
                                                              (((v465 >> 8) | (v465 << 24)) >> 8) | (((v465 >> 8) | (v465 << 24)) << 24),
                                                              8);
                                              v464 = v471;
                                              v470 = v472;
                                              v467 += 8;
                                              --v469;
                                            }
                                            while ( v469 );
                                            v497 = 0LL;
                                            v498 = 0;
                                            v461 = v1270;
                                            v99 = v1477;
                                            v499 = v1355;
                                            v500 = 0;
                                            do
                                              v498 ^= *((_BYTE *)v1355 + v497++);
                                            while ( v497 < 0x338 );
                                            if ( v498 != 64LL )
                                            {
                                              MemoryFree(v1355);
                                              goto LABEL_642;
                                            }
                                            *((_BYTE *)v1355 + 823) = 0;
                                            memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                            if ( *(_BYTE *)v1355 )
                                            {
                                              v1578 = v1355;
                                              while ( 1 )
                                              {
                                                v506 = v499;
                                                v507 = -1LL;
                                                do
                                                  ++v507;
                                                while ( v499[v507] );
                                                v508 = &v499[v507];
                                                v509 = &qword_180899E50[3 * v1454];
                                                if ( !GetModuleHandleExW(0, v506, v509) )
                                                  break;
                                                v500 = 0;
                                                if ( *(_WORD *)*v509 == 23117
                                                  && (v510 = *((int *)*v509 + 15), (unsigned int)v510 < 0x10000000)
                                                  && (v511 = (unsigned __int64)*v509 + v510,
                                                      v511 >= (unsigned __int64)*v509)
                                                  && *(_DWORD *)v511 == 17744 )
                                                {
                                                  if ( ((*(_WORD *)(v511 + 24) - 267) & 0xFEFF) != 0 )
                                                  {
                                                    v500 = -1073741811;
                                                  }
                                                  else
                                                  {
                                                    *(HMODULE *)((char *)v509 + 12) = *(HMODULE *)(v511 + 136);
                                                    *((_DWORD *)v509 + 2) = *(_DWORD *)(v511 + 80);
                                                  }
                                                }
                                                else
                                                {
                                                  v500 = -1073741701;
                                                }
                                                v1306 = *(_DWORD *)(v508 + 1);
                                                v499 = v508 + 3;
                                                v512 = 0;
                                                if ( v1306 )
                                                {
                                                  v513 = 3LL * v1454;
                                                  do
                                                  {
                                                    v514 = (const CHAR *)v499;
                                                    v515 = -1LL;
                                                    do
                                                      ++v515;
                                                    while ( *((_BYTE *)v499 + v515) );
                                                    v499 = (WCHAR *)((char *)v499 + v515 + 1);
                                                    if ( v500 >= 0 )
                                                    {
                                                      v516 = GetProcAddress(qword_180899E50[v513], v514);
                                                      if ( !v516 )
                                                        goto LABEL_673;
                                                      off_180891340[v1349] = v516;
                                                      v513 = 3LL * v1454;
                                                    }
                                                    ++v1349;
                                                    ++v512;
                                                  }
                                                  while ( v512 < v1306 );
                                                }
                                                ++v1454;
                                                if ( !*(_BYTE *)v499 )
                                                  goto LABEL_673;
                                              }
                                              v500 = -1073741702;
LABEL_673:
                                              v517 = v1578;
                                              if ( !v1578 )
                                                goto LABEL_677;
                                            }
                                            else
                                            {
                                              v517 = v1355;
                                            }
                                            v518 = GetProcessHeap();
                                            HeapFree(v518, 0, v517);
LABEL_677:
                                            if ( v500 < 0 )
                                            {
LABEL_642:
                                              v501 = qword_180899E50;
                                              v502 = 4LL;
                                              do
                                              {
                                                if ( *v501 )
                                                  FreeLibrary(*v501);
                                                v501 += 3;
                                                --v502;
                                              }
                                              while ( v502 );
                                              memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                              v503 = off_180891340;
                                              v504 = off_1806EF510;
                                              v505 = 2LL;
                                              do
                                              {
                                                *(_OWORD *)v503 = *(_OWORD *)v504;
                                                *((_OWORD *)v503 + 1) = *((_OWORD *)v504 + 1);
                                                *((_OWORD *)v503 + 2) = *((_OWORD *)v504 + 2);
                                                *((_OWORD *)v503 + 3) = *((_OWORD *)v504 + 3);
                                                *((_OWORD *)v503 + 4) = *((_OWORD *)v504 + 4);
                                                *((_OWORD *)v503 + 5) = *((_OWORD *)v504 + 5);
                                                *((_OWORD *)v503 + 6) = *((_OWORD *)v504 + 6);
                                                v503 += 16;
                                                *((_OWORD *)v503 - 1) = *((_OWORD *)v504 + 7);
                                                v504 += 16;
                                                --v505;
                                              }
                                              while ( v505 );
                                              *(_OWORD *)v503 = *(_OWORD *)v504;
                                              *((_OWORD *)v503 + 1) = *((_OWORD *)v504 + 1);
                                              *((_OWORD *)v503 + 2) = *((_OWORD *)v504 + 2);
                                              *((_OWORD *)v503 + 3) = *((_OWORD *)v504 + 3);
                                              *((_OWORD *)v503 + 4) = *((_OWORD *)v504 + 4);
                                              *((_OWORD *)v503 + 5) = *((_OWORD *)v504 + 5);
                                              *((_OWORD *)v503 + 6) = *((_OWORD *)v504 + 6);
LABEL_680:
                                              _InterlockedExchange(&dword_18089D738, 0);
                                              v1733 = 0;
                                              v1734 = 0;
                                              v1350 = 0;
                                              v1307 = 0;
                                              v1455 = 0;
                                              v1408 = 0;
                                              v1579 = 0LL;
                                              v1356 = 0LL;
                                              v1468 = 0LL;
                                              v1621 = 0LL;
                                              while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
                                                ;
                                              v519 = dword_18089D72C;
                                              if ( dword_18089D72C )
                                                goto LABEL_727;
                                              Sizea = 0;
                                              v1386 = 0;
                                              v520 = (char *)MemoryAlloc(0x338uLL);
                                              v1432 = (WCHAR *)v520;
                                              if ( !v520 )
                                                goto LABEL_690;
                                              v521 = 0;
                                              v522 = 0;
                                              v523 = 0;
                                              v524 = v520 + 7;
                                              v525 = (unsigned __int8 *)&unk_1807573B2;
                                              v526 = 103LL;
                                              v527 = -1;
                                              do
                                              {
                                                v528 = v525[1] | ((*v525 | ((*(v525 - 1) | (*(v525 - 2) << 8)) << 8)) << 8);
                                                v529 = v525[5] | ((v525[4] | ((v525[3] | (v525[2] << 8)) << 8)) << 8);
                                                v530 = v528 ^ v523;
                                                v525 += 8;
                                                v531 = v530 ^ v522 ^ v529 ^ 0xAC987321;
                                                v532 = (4991 * __ROR4__(v531 + 1419157410, 27) + __ROR4__(v531, 22)) ^ v530;
                                                v533 = (43881 * __ROR4__(v532 + 133239679, 9) - __ROR4__(v532, 30)) ^ v531;
                                                v534 = (24670 * v533 - (v533 >> 13) - 123127970) ^ v532;
                                                v535 = (2033 * __ROR4__(v534 ^ 0xAB69, 26) - __ROR4__(v534, 30)) ^ v533;
                                                v536 = (133239679 - (v535 ^ 0xAB69605E)) ^ v534;
                                                v537 = (43881 * (v536 ^ 0x137F)) ^ __ROR4__(v536, 6) ^ v535;
                                                v538 = (24670 * __ROR4__(v537 + 133239679, 15) + __ROR4__(v537, 30)) ^ v536;
                                                v539 = (2033 * __ROR4__(v538 + 1419157410, 14) - __ROR4__(v538, 24)) ^ v537;
                                                v540 = (4991 * __ROR4__(v539 ^ 0xAB69605E, 12)) ^ __ROR4__(v539, 10) ^ v538;
                                                v541 = (v540 >> 10) ^ (43881 * (v540 ^ 0x7F1)) ^ v539;
                                                v542 = (2033 * (__ROR4__(~v541, 5) + 24670)) ^ v540;
                                                v543 = v541 ^ (v542 - 2033) ^ 0xAB69605E;
                                                v544 = (4991 * __ROR4__(v541 ^ (v542 - 2033) ^ 0xAB6967AF, 30)
                                                      + (v543 >> 2)) ^ v542;
                                                v545 = (43881 * __ROR4__(v544 - 133239679, 6) + __ROR4__(v544, 25)) ^ v543;
                                                v546 = (24670 * (v545 ^ 0x137F) + __ROR4__(v545, 9)) ^ v544;
                                                v547 = (2033 * __ROR4__(v546 ^ 0xAB69, 27) + __ROR4__(v546, 25)) ^ v545;
                                                v548 = v546 ^ v547 ^ 0xAC987321;
                                                v549 = (4991 * __ROR4__(v548, 3) - 219010071) ^ v547;
                                                v550 = (24670 * __ROR4__(v549 - 133239679, 1) - __ROR4__(v549, 6)) ^ v548;
                                                v551 = (2033 * __ROR4__(v550 - 1419157410, 29) + __ROR4__(v550, 18)) ^ v549;
                                                v552 = (4991 * __ROR4__(v551 - 1419157410, 17) - __ROR4__(v551, 14)) ^ v550;
                                                v553 = (v552 >> 3) ^ (43881 * (v552 ^ 0x605E)) ^ v551;
                                                v523 = (24670 * __ROR4__(v553 ^ 0x7F1137F, 28)) ^ __ROR4__(v553, 30) ^ v521 ^ v552;
                                                v522 = v527 ^ v553;
                                                *(v524 - 4) = v523;
                                                *v524 = v522;
                                                *(v524 - 5) = BYTE1(v523);
                                                *(v524 - 1) = BYTE1(v522);
                                                *(v524 - 6) = (unsigned __int16)(v523 >> 8) >> 8;
                                                *(v524 - 2) = (unsigned __int16)(v522 >> 8) >> 8;
                                                *(v524 - 7) = __ROR4__(
                                                                (((v523 >> 8) | (v523 << 24)) >> 8) | (((v523 >> 8) | (v523 << 24)) << 24),
                                                                8);
                                                *(v524 - 3) = __ROR4__(
                                                                (((v522 >> 8) | (v522 << 24)) >> 8) | (((v522 >> 8) | (v522 << 24)) << 24),
                                                                8);
                                                v521 = v528;
                                                v527 = v529;
                                                v524 += 8;
                                                --v526;
                                              }
                                              while ( v526 );
                                              v554 = 0LL;
                                              v555 = 0;
                                              v461 = v1270;
                                              v99 = v1477;
                                              v556 = v1432;
                                              v557 = 0;
                                              do
                                                v555 ^= *((_BYTE *)v1432 + v554++);
                                              while ( v554 < 0x338 );
                                              if ( v555 != 64LL )
                                              {
                                                MemoryFree(v1432);
                                                goto LABEL_690;
                                              }
                                              *((_BYTE *)v1432 + 823) = 0;
                                              memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                              if ( *(_BYTE *)v1432 )
                                              {
                                                v1580 = v1432;
                                                while ( 1 )
                                                {
                                                  v563 = v556;
                                                  v564 = -1LL;
                                                  do
                                                    ++v564;
                                                  while ( v556[v564] );
                                                  v565 = &v556[v564];
                                                  v566 = &qword_180899E50[3 * v1386];
                                                  if ( !GetModuleHandleExW(0, v563, v566) )
                                                    break;
                                                  v557 = 0;
                                                  if ( *(_WORD *)*v566 == 23117
                                                    && (v567 = *((int *)*v566 + 15), (unsigned int)v567 < 0x10000000)
                                                    && (v568 = (unsigned __int64)*v566 + v567,
                                                        v568 >= (unsigned __int64)*v566)
                                                    && *(_DWORD *)v568 == 17744 )
                                                  {
                                                    if ( ((*(_WORD *)(v568 + 24) - 267) & 0xFEFF) != 0 )
                                                    {
                                                      v557 = -1073741811;
                                                    }
                                                    else
                                                    {
                                                      *(HMODULE *)((char *)v566 + 12) = *(HMODULE *)(v568 + 136);
                                                      *((_DWORD *)v566 + 2) = *(_DWORD *)(v568 + 80);
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v557 = -1073741701;
                                                  }
                                                  v1469 = *(_DWORD *)(v565 + 1);
                                                  v556 = v565 + 3;
                                                  v569 = 0;
                                                  if ( v1469 )
                                                  {
                                                    v570 = 3LL * v1386;
                                                    do
                                                    {
                                                      v571 = (const CHAR *)v556;
                                                      v572 = -1LL;
                                                      do
                                                        ++v572;
                                                      while ( *((_BYTE *)v556 + v572) );
                                                      v556 = (WCHAR *)((char *)v556 + v572 + 1);
                                                      if ( v557 >= 0 )
                                                      {
                                                        v573 = GetProcAddress(qword_180899E50[v570], v571);
                                                        if ( !v573 )
                                                          goto LABEL_721;
                                                        off_180891340[Sizea] = v573;
                                                        v570 = 3LL * v1386;
                                                      }
                                                      ++Sizea;
                                                      ++v569;
                                                    }
                                                    while ( v569 < v1469 );
                                                  }
                                                  ++v1386;
                                                  if ( !*(_BYTE *)v556 )
                                                    goto LABEL_721;
                                                }
                                                v557 = -1073741702;
LABEL_721:
                                                v574 = v1580;
                                                if ( !v1580 )
                                                  goto LABEL_725;
                                              }
                                              else
                                              {
                                                v574 = v1432;
                                              }
                                              v575 = GetProcessHeap();
                                              HeapFree(v575, 0, v574);
LABEL_725:
                                              if ( v557 < 0 )
                                              {
LABEL_690:
                                                v558 = qword_180899E50;
                                                v559 = 4LL;
                                                do
                                                {
                                                  if ( *v558 )
                                                    FreeLibrary(*v558);
                                                  v558 += 3;
                                                  --v559;
                                                }
                                                while ( v559 );
                                                memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                                v560 = off_180891340;
                                                v561 = off_1806EF510;
                                                v562 = 2LL;
                                                do
                                                {
                                                  *(_OWORD *)v560 = *(_OWORD *)v561;
                                                  *((_OWORD *)v560 + 1) = *((_OWORD *)v561 + 1);
                                                  *((_OWORD *)v560 + 2) = *((_OWORD *)v561 + 2);
                                                  *((_OWORD *)v560 + 3) = *((_OWORD *)v561 + 3);
                                                  *((_OWORD *)v560 + 4) = *((_OWORD *)v561 + 4);
                                                  *((_OWORD *)v560 + 5) = *((_OWORD *)v561 + 5);
                                                  *((_OWORD *)v560 + 6) = *((_OWORD *)v561 + 6);
                                                  v560 += 16;
                                                  *((_OWORD *)v560 - 1) = *((_OWORD *)v561 + 7);
                                                  v561 += 16;
                                                  --v562;
                                                }
                                                while ( v562 );
                                                *(_OWORD *)v560 = *(_OWORD *)v561;
                                                *((_OWORD *)v560 + 1) = *((_OWORD *)v561 + 1);
                                                *((_OWORD *)v560 + 2) = *((_OWORD *)v561 + 2);
                                                *((_OWORD *)v560 + 3) = *((_OWORD *)v561 + 3);
                                                *((_OWORD *)v560 + 4) = *((_OWORD *)v561 + 4);
                                                *((_OWORD *)v560 + 5) = *((_OWORD *)v561 + 5);
                                                *((_OWORD *)v560 + 6) = *((_OWORD *)v561 + 6);
LABEL_728:
                                                v576 = 0;
                                                _InterlockedExchange(&dword_18089D738, 0);
                                                memset_0(&v1660, 0, 0x70uLL);
                                                v1686 = 0LL;
                                                Sizeb = v461 & 0xF;
                                                LOWORD(v1733) = (v461 >> 4) & 0xF;
                                                HIWORD(v1733) = (v461 >> 8) & 0xF;
                                                v1734 = (v461 >> 12) & 0xF;
                                                v1433 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(
                                                                   0LL,
                                                                   0LL,
                                                                   1027LL);
                                                v1469 = 0xFFFFFF;
                                                if ( !v1433 )
                                                {
                                                  v577 = GetLastError();
                                                  v578 = v577;
                                                  if ( v577 > 0 )
                                                    v578 = (unsigned __int16)v577 | 0x80070000;
                                                  if ( v578 >= 0 )
                                                    v578 = -2147467259;
LABEL_863:
                                                  while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
                                                    ;
                                                  v671 = dword_18089D72C;
                                                  if ( dword_18089D72C > 0 )
                                                  {
                                                    --dword_18089D72C;
                                                    if ( v671 == 1 )
                                                    {
                                                      v672 = qword_180899E50;
                                                      v673 = 4LL;
                                                      do
                                                      {
                                                        if ( *v672 )
                                                          FreeLibrary(*v672);
                                                        v672 += 3;
                                                        --v673;
                                                      }
                                                      while ( v673 );
                                                      memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                                      v674 = off_180891340;
                                                      v675 = off_1806EF510;
                                                      v676 = 2LL;
                                                      do
                                                      {
                                                        *(_OWORD *)v674 = *(_OWORD *)v675;
                                                        *((_OWORD *)v674 + 1) = *((_OWORD *)v675 + 1);
                                                        *((_OWORD *)v674 + 2) = *((_OWORD *)v675 + 2);
                                                        *((_OWORD *)v674 + 3) = *((_OWORD *)v675 + 3);
                                                        *((_OWORD *)v674 + 4) = *((_OWORD *)v675 + 4);
                                                        *((_OWORD *)v674 + 5) = *((_OWORD *)v675 + 5);
                                                        *((_OWORD *)v674 + 6) = *((_OWORD *)v675 + 6);
                                                        v674 += 16;
                                                        *((_OWORD *)v674 - 1) = *((_OWORD *)v675 + 7);
                                                        v675 += 16;
                                                        --v676;
                                                      }
                                                      while ( v676 );
                                                      *(_OWORD *)v674 = *(_OWORD *)v675;
                                                      *((_OWORD *)v674 + 1) = *((_OWORD *)v675 + 1);
                                                      *((_OWORD *)v674 + 2) = *((_OWORD *)v675 + 2);
                                                      *((_OWORD *)v674 + 3) = *((_OWORD *)v675 + 3);
                                                      *((_OWORD *)v674 + 4) = *((_OWORD *)v675 + 4);
                                                      *((_OWORD *)v674 + 5) = *((_OWORD *)v675 + 5);
                                                      *((_OWORD *)v674 + 6) = *((_OWORD *)v675 + 6);
                                                    }
                                                  }
                                                  _InterlockedExchange(&dword_18089D738, 0);
                                                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1579);
                                                  if ( v578 < 0 )
                                                  {
LABEL_1023:
                                                    if ( v1662 )
                                                    {
                                                      v743 = -1LL;
                                                      do
                                                        ++v743;
                                                      while ( *((_WORD *)v1662 + v743) );
                                                      memset(v1662, 0, 2 * v743 + 2);
                                                      MemoryFree(v1662);
                                                      v1662 = 0LL;
                                                    }
                                                    if ( v1663 )
                                                    {
                                                      v744 = -1LL;
                                                      do
                                                        ++v744;
                                                      while ( *((_WORD *)v1663 + v744) );
                                                      memset(v1663, 0, 2 * v744 + 2);
                                                      MemoryFree(v1663);
                                                      v1663 = 0LL;
                                                    }
                                                    if ( v1664 )
                                                    {
                                                      v745 = -1LL;
                                                      do
                                                        ++v745;
                                                      while ( *((_WORD *)v1664 + v745) );
                                                      memset(v1664, 0, 2 * v745 + 2);
                                                      MemoryFree(v1664);
                                                      v1664 = 0LL;
                                                    }
                                                    if ( v1665 )
                                                    {
                                                      off_180891378();
                                                      v1665 = 0LL;
                                                    }
                                                    if ( v1666 )
                                                    {
                                                      off_180891378();
                                                      v1666 = 0LL;
                                                    }
                                                    if ( v1667 )
                                                    {
                                                      off_180891378();
                                                      v1667 = 0LL;
                                                    }
                                                    while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
                                                      ;
                                                    v746 = dword_18089D72C;
                                                    if ( dword_18089D72C > 0 )
                                                    {
                                                      --dword_18089D72C;
                                                      if ( v746 == 1 )
                                                      {
                                                        v747 = qword_180899E50;
                                                        v748 = 4LL;
                                                        do
                                                        {
                                                          if ( *v747 )
                                                            FreeLibrary(*v747);
                                                          v747 += 3;
                                                          --v748;
                                                        }
                                                        while ( v748 );
                                                        memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                                        v749 = off_180891340;
                                                        v750 = off_1806EF510;
                                                        v751 = 2LL;
                                                        do
                                                        {
                                                          *(_OWORD *)v749 = *(_OWORD *)v750;
                                                          *((_OWORD *)v749 + 1) = *((_OWORD *)v750 + 1);
                                                          *((_OWORD *)v749 + 2) = *((_OWORD *)v750 + 2);
                                                          *((_OWORD *)v749 + 3) = *((_OWORD *)v750 + 3);
                                                          *((_OWORD *)v749 + 4) = *((_OWORD *)v750 + 4);
                                                          *((_OWORD *)v749 + 5) = *((_OWORD *)v750 + 5);
                                                          *((_OWORD *)v749 + 6) = *((_OWORD *)v750 + 6);
                                                          v749 += 16;
                                                          *((_OWORD *)v749 - 1) = *((_OWORD *)v750 + 7);
                                                          v750 += 16;
                                                          --v751;
                                                        }
                                                        while ( v751 );
                                                        *(_OWORD *)v749 = *(_OWORD *)v750;
                                                        *((_OWORD *)v749 + 1) = *((_OWORD *)v750 + 1);
                                                        *((_OWORD *)v749 + 2) = *((_OWORD *)v750 + 2);
                                                        *((_OWORD *)v749 + 3) = *((_OWORD *)v750 + 3);
                                                        *((_OWORD *)v749 + 4) = *((_OWORD *)v750 + 4);
                                                        *((_OWORD *)v749 + 5) = *((_OWORD *)v750 + 5);
                                                        *((_OWORD *)v749 + 6) = *((_OWORD *)v750 + 6);
                                                      }
                                                    }
                                                    _InterlockedExchange(&dword_18089D738, 0);
                                                    lpModuleNamef = dword_180899E48;
                                                    v752 = off_1808913D8[0]() - qword_18089D730;
                                                    v1369 = v752;
                                                    v1726 = 0;
                                                    v1727 = 0LL;
                                                    v1728 = 0LL;
                                                    v1729 = 0LL;
                                                    v1730 = 0LL;
                                                    while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
                                                      ;
                                                    v753 = dword_18089D72C;
                                                    if ( !dword_18089D72C )
                                                    {
                                                      v1330 = 0;
                                                      LODWORD(v1466) = 0;
                                                      v754 = (char *)MemoryAlloc(0x338uLL);
                                                      v1319 = (WCHAR *)v754;
                                                      if ( !v754 )
                                                        goto LABEL_1062;
                                                      v755 = 0;
                                                      v756 = -1;
                                                      v757 = 0;
                                                      v758 = 0;
                                                      v759 = v754 + 7;
                                                      v760 = (unsigned __int8 *)&unk_1807573B2;
                                                      v761 = 103LL;
                                                      do
                                                      {
                                                        v762 = v760[1] | ((*v760 | ((*(v760 - 1) | (*(v760 - 2) << 8)) << 8)) << 8);
                                                        v763 = v760[5] | ((v760[4] | ((v760[3] | (v760[2] << 8)) << 8)) << 8);
                                                        v764 = v762 ^ v758;
                                                        v760 += 8;
                                                        v765 = v764 ^ v757 ^ v763 ^ 0xAC987321;
                                                        v766 = (4991 * __ROR4__(v765 + 1419157410, 27)
                                                              + __ROR4__(v765, 22)) ^ v764;
                                                        v767 = (43881 * __ROR4__(v766 + 133239679, 9)
                                                              - __ROR4__(v766, 30)) ^ v765;
                                                        v768 = (24670 * v767 - (v767 >> 13) - 123127970) ^ v766;
                                                        v769 = (2033 * __ROR4__(v768 ^ 0xAB69, 26) - __ROR4__(v768, 30)) ^ v767;
                                                        v770 = (133239679 - (v769 ^ 0xAB69605E)) ^ v768;
                                                        v771 = (43881 * (v770 ^ 0x137F)) ^ __ROR4__(v770, 6) ^ v769;
                                                        v772 = (24670 * __ROR4__(v771 + 133239679, 15)
                                                              + __ROR4__(v771, 30)) ^ v770;
                                                        v773 = (2033 * __ROR4__(v772 + 1419157410, 14)
                                                              - __ROR4__(v772, 24)) ^ v771;
                                                        v774 = (4991 * __ROR4__(v773 ^ 0xAB69605E, 12)) ^ __ROR4__(v773, 10) ^ v772;
                                                        v775 = (v774 >> 10) ^ (43881 * (v774 ^ 0x7F1)) ^ v773;
                                                        v776 = (2033 * (__ROR4__(~v775, 5) + 24670)) ^ v774;
                                                        v777 = v775 ^ (v776 - 2033) ^ 0xAB69605E;
                                                        v778 = (4991 * __ROR4__(v775 ^ (v776 - 2033) ^ 0xAB6967AF, 30)
                                                              + (v777 >> 2)) ^ v776;
                                                        v779 = (43881 * __ROR4__(v778 - 133239679, 6)
                                                              + __ROR4__(v778, 25)) ^ v777;
                                                        v780 = (24670 * (v779 ^ 0x137F) + __ROR4__(v779, 9)) ^ v778;
                                                        v781 = (2033 * __ROR4__(v780 ^ 0xAB69, 27) + __ROR4__(v780, 25)) ^ v779;
                                                        v782 = v781 ^ v780 ^ 0xAC987321;
                                                        v783 = (4991 * __ROR4__(v782, 3) - 219010071) ^ v781;
                                                        v784 = (24670 * __ROR4__(v783 - 133239679, 1) - __ROR4__(v783, 6)) ^ v782;
                                                        v785 = (2033 * __ROR4__(v784 - 1419157410, 29)
                                                              + __ROR4__(v784, 18)) ^ v783;
                                                        v786 = (4991 * __ROR4__(v785 - 1419157410, 17)
                                                              - __ROR4__(v785, 14)) ^ v784;
                                                        v787 = (v786 >> 3) ^ (43881 * (v786 ^ 0x605E)) ^ v785;
                                                        v758 = (24670 * __ROR4__(v787 ^ 0x7F1137F, 28)) ^ __ROR4__(v787, 30) ^ v755 ^ v786;
                                                        v757 = v756 ^ v787;
                                                        *(v759 - 4) = v758;
                                                        *v759 = v757;
                                                        *(v759 - 5) = BYTE1(v758);
                                                        *(v759 - 1) = BYTE1(v757);
                                                        *(v759 - 6) = (unsigned __int16)(v758 >> 8) >> 8;
                                                        *(v759 - 2) = (unsigned __int16)(v757 >> 8) >> 8;
                                                        *(v759 - 7) = __ROR4__(
                                                                        (((v758 >> 8) | (v758 << 24)) >> 8) | (((v758 >> 8) | (v758 << 24)) << 24),
                                                                        8);
                                                        *(v759 - 3) = __ROR4__(
                                                                        (((v757 >> 8) | (v757 << 24)) >> 8) | (((v757 >> 8) | (v757 << 24)) << 24),
                                                                        8);
                                                        v755 = v762;
                                                        v756 = v763;
                                                        v759 += 8;
                                                        --v761;
                                                      }
                                                      while ( v761 );
                                                      v788 = 0LL;
                                                      v789 = 0;
                                                      v790 = v1319;
                                                      v791 = 0;
                                                      do
                                                        v789 ^= *((_BYTE *)v1319 + v788++);
                                                      while ( v788 < 0x338 );
                                                      if ( v789 != 64LL )
                                                      {
                                                        MemoryFree(v1319);
LABEL_1061:
                                                        v752 = v1369;
LABEL_1062:
                                                        v792 = qword_180899E50;
                                                        v793 = 4LL;
                                                        do
                                                        {
                                                          if ( *v792 )
                                                            FreeLibrary(*v792);
                                                          v792 += 3;
                                                          --v793;
                                                        }
                                                        while ( v793 );
                                                        memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                                        v794 = off_180891340;
                                                        v795 = off_1806EF510;
                                                        v796 = 2LL;
                                                        do
                                                        {
                                                          *(_OWORD *)v794 = *(_OWORD *)v795;
                                                          *((_OWORD *)v794 + 1) = *((_OWORD *)v795 + 1);
                                                          *((_OWORD *)v794 + 2) = *((_OWORD *)v795 + 2);
                                                          *((_OWORD *)v794 + 3) = *((_OWORD *)v795 + 3);
                                                          *((_OWORD *)v794 + 4) = *((_OWORD *)v795 + 4);
                                                          *((_OWORD *)v794 + 5) = *((_OWORD *)v795 + 5);
                                                          *((_OWORD *)v794 + 6) = *((_OWORD *)v795 + 6);
                                                          v794 += 16;
                                                          *((_OWORD *)v794 - 1) = *((_OWORD *)v795 + 7);
                                                          v795 += 16;
                                                          --v796;
                                                        }
                                                        while ( v796 );
                                                        *(_OWORD *)v794 = *(_OWORD *)v795;
                                                        *((_OWORD *)v794 + 1) = *((_OWORD *)v795 + 1);
                                                        *((_OWORD *)v794 + 2) = *((_OWORD *)v795 + 2);
                                                        *((_OWORD *)v794 + 3) = *((_OWORD *)v795 + 3);
                                                        *((_OWORD *)v794 + 4) = *((_OWORD *)v795 + 4);
                                                        *((_OWORD *)v794 + 5) = *((_OWORD *)v795 + 5);
                                                        *((_OWORD *)v794 + 6) = *((_OWORD *)v795 + 6);
                                                        goto LABEL_1252;
                                                      }
                                                      *((_BYTE *)v1319 + 823) = 0;
                                                      memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                                      v887 = v1319;
                                                      if ( !*(_BYTE *)v1319 )
                                                        goto LABEL_1248;
                                                      while ( 1 )
                                                      {
                                                        v888 = v790;
                                                        v889 = -1LL;
                                                        do
                                                          ++v889;
                                                        while ( v790[v889] );
                                                        v890 = &v790[v889];
                                                        v891 = &qword_180899E50[3 * (unsigned int)v1466];
                                                        if ( !GetModuleHandleExW(0, v888, v891) )
                                                          break;
                                                        v791 = 0;
                                                        if ( *(_WORD *)*v891 == 23117
                                                          && (v892 = *((int *)*v891 + 15),
                                                              (unsigned int)v892 < 0x10000000)
                                                          && (v893 = (unsigned __int64)*v891 + v892,
                                                              v893 >= (unsigned __int64)*v891)
                                                          && *(_DWORD *)v893 == 17744 )
                                                        {
                                                          if ( ((*(_WORD *)(v893 + 24) - 267) & 0xFEFF) != 0 )
                                                          {
                                                            v791 = -1073741811;
                                                          }
                                                          else
                                                          {
                                                            *(HMODULE *)((char *)v891 + 12) = *(HMODULE *)(v893 + 136);
                                                            *((_DWORD *)v891 + 2) = *(_DWORD *)(v893 + 80);
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v791 = -1073741701;
                                                        }
                                                        v1397 = *(_DWORD *)(v890 + 1);
                                                        v790 = v890 + 3;
                                                        v894 = 0;
                                                        if ( v1397 )
                                                        {
                                                          v895 = 3LL * (unsigned int)v1466;
                                                          v1321 = v895;
                                                          do
                                                          {
                                                            v896 = (const CHAR *)v790;
                                                            v897 = -1LL;
                                                            do
                                                              ++v897;
                                                            while ( *((_BYTE *)v790 + v897) );
                                                            v790 = (const WCHAR *)((char *)v790 + v897 + 1);
                                                            if ( v791 >= 0 )
                                                            {
                                                              v898 = GetProcAddress(qword_180899E50[v895], v896);
                                                              if ( !v898 )
                                                                goto LABEL_1247;
                                                              off_180891340[v1330] = v898;
                                                              v895 = v1321;
                                                            }
                                                            ++v1330;
                                                            ++v894;
                                                          }
                                                          while ( v894 < v1397 );
                                                        }
                                                        LODWORD(v1466) = (_DWORD)v1466 + 1;
                                                        if ( !*(_BYTE *)v790 )
                                                          goto LABEL_1247;
                                                      }
                                                      v791 = -1073741702;
LABEL_1247:
                                                      if ( v887 )
                                                      {
LABEL_1248:
                                                        v899 = GetProcessHeap();
                                                        HeapFree(v899, 0, v887);
                                                      }
                                                      if ( v791 < 0 )
                                                        goto LABEL_1061;
                                                      v753 = dword_18089D72C;
                                                      v752 = v1369;
                                                    }
                                                    dword_18089D72C = v753 + 1;
LABEL_1252:
                                                    _InterlockedExchange(&dword_18089D738, 0);
                                                    LODWORD(v1727) = v752;
                                                    v1726 = 1;
                                                    LODWORD(v1728) = -1721306479;
                                                    DWORD2(v1727) = 1;
                                                    LODWORD(v1729) = 1;
                                                    DWORD2(v1728) = 1;
                                                    LODWORD(v1730) = lpModuleNamef;
                                                    DWORD2(v1729) = 1;
                                                    v900 = 4LL;
                                                    ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_180891410)(
                                                      0LL,
                                                      8225LL,
                                                      4LL,
                                                      &v1726);
                                                    while ( _InterlockedCompareExchange(&dword_18089D738, 1, 0) )
                                                      ;
                                                    v901 = dword_18089D72C;
                                                    if ( dword_18089D72C > 0 )
                                                    {
                                                      --dword_18089D72C;
                                                      if ( v901 == 1 )
                                                      {
                                                        v902 = qword_180899E50;
                                                        do
                                                        {
                                                          if ( *v902 )
                                                            FreeLibrary(*v902);
                                                          v902 += 3;
                                                          --v900;
                                                        }
                                                        while ( v900 );
                                                        memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
                                                        v903 = off_180891340;
                                                        v904 = off_1806EF510;
                                                        v905 = 2LL;
                                                        do
                                                        {
                                                          *(_OWORD *)v903 = *(_OWORD *)v904;
                                                          *((_OWORD *)v903 + 1) = *((_OWORD *)v904 + 1);
                                                          *((_OWORD *)v903 + 2) = *((_OWORD *)v904 + 2);
                                                          *((_OWORD *)v903 + 3) = *((_OWORD *)v904 + 3);
                                                          *((_OWORD *)v903 + 4) = *((_OWORD *)v904 + 4);
                                                          *((_OWORD *)v903 + 5) = *((_OWORD *)v904 + 5);
                                                          *((_OWORD *)v903 + 6) = *((_OWORD *)v904 + 6);
                                                          v903 += 16;
                                                          *((_OWORD *)v903 - 1) = *((_OWORD *)v904 + 7);
                                                          v904 += 16;
                                                          --v905;
                                                        }
                                                        while ( v905 );
                                                        *(_OWORD *)v903 = *(_OWORD *)v904;
                                                        *((_OWORD *)v903 + 1) = *((_OWORD *)v904 + 1);
                                                        *((_OWORD *)v903 + 2) = *((_OWORD *)v904 + 2);
                                                        *((_OWORD *)v903 + 3) = *((_OWORD *)v904 + 3);
                                                        *((_OWORD *)v903 + 4) = *((_OWORD *)v904 + 4);
                                                        *((_OWORD *)v903 + 5) = *((_OWORD *)v904 + 5);
                                                        *((_OWORD *)v903 + 6) = *((_OWORD *)v904 + 6);
                                                      }
                                                    }
                                                    _InterlockedExchange(&dword_18089D738, 0);
                                                    ((void (__fastcall *)(_QWORD, CToastCenterExperienceManager *))off_1808914A0[0])(
                                                      0LL,
                                                      lpMemk);
                                                    v1473 = (unsigned __int16 *)v1465;
                                                    goto LABEL_1264;
                                                  }
                                                  v677 = v461 & 0xF;
                                                  v1273 = v677;
                                                  v678 = v1686;
                                                  v1587 = v1686;
                                                  v1647 = 0;
                                                  memset_0(v1648, 0, 0x64uLL);
                                                  v679 = 1;
                                                  v680 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180891390[0])(
                                                           lpMemk,
                                                           7LL);
                                                  if ( v680
                                                    && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(
                                                         v680,
                                                         104LL,
                                                         &v1647) )
                                                  {
                                                    if ( v1649 != 32 || !v1650 || v1648[0] <= 0 || v1648[1] <= 0 )
                                                      v679 = 0;
                                                    if ( v679 )
                                                    {
LABEL_969:
                                                      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_180891490)(
                                                        &v1669,
                                                        v678,
                                                        HIDWORD(v1587));
                                                      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_180891490)(
                                                        &v1670,
                                                        v678,
                                                        HIDWORD(v1587));
                                                      if ( v677 == 1 )
                                                        v1472 = ((__int64 (__fastcall *)(_QWORD))off_180891368[0])(v1661 == 0 ? 0xB26720 : 0);
LABEL_971:
                                                      v1351 = off_1808913C0(
                                                                lpMemk,
                                                                (struct CSingleViewShellExperience *)1);
                                                      v715 = 2064;
                                                      if ( v1660 )
                                                        v715 = 133138;
                                                      v1308 = v715;
                                                      if ( v679 )
                                                      {
                                                        v1456 = v1661;
                                                        v1360 = v1665;
                                                        v716 = v1662;
                                                        v1417 = (unsigned __int16 *)v1662;
                                                        v1644 = 0;
                                                        memset_0(v1645, 0, 0x64uLL);
                                                        v1641 = 0;
                                                        memset_0(v1642, 0, 0x64uLL);
                                                        v1468 = 0LL;
                                                        v1445 = 0;
                                                        v1409 = 0;
                                                        v1696 = 0LL;
                                                        v1697 = 0LL;
                                                        v1698 = 0LL;
                                                        v1699 = 0;
                                                        v1685 = 0LL;
                                                        if ( !v716 )
                                                          goto LABEL_1021;
                                                        v717 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180891390[0])(
                                                                 lpMemk,
                                                                 7LL);
                                                        if ( v717 )
                                                        {
                                                          if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(
                                                                 v717,
                                                                 104LL,
                                                                 &v1644) )
                                                          {
                                                            v1468 = v1646;
                                                            v1445 = v1645[0];
                                                            v1409 = v1645[1];
                                                          }
                                                          v718 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180891350[0])(lpMemk);
                                                          v719 = (CToastCenterExperienceManager *)v718;
                                                          v1434 = (LPCWSTR)v718;
                                                          if ( v718 )
                                                          {
                                                            v1588 = 0LL;
                                                            v1697 = 0LL;
                                                            v1698 = 0LL;
                                                            v1699 = 0;
                                                            LODWORD(v1696) = 40;
                                                            DWORD1(v1696) = v1669.m128i_i32[2] - v1669.m128i_i32[0];
                                                            DWORD2(v1696) = v1669.m128i_i32[1] - v1669.m128i_i32[3];
                                                            HIDWORD(v1696) = 2097153;
                                                            v720 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                                                                                         v718,
                                                                                         &v1696,
                                                                                         0LL,
                                                                                         &v1588,
                                                                                         0LL,
                                                                                         0);
                                                            v721 = v720;
                                                            v1473 = v720;
                                                            if ( v720 )
                                                            {
                                                              v724 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808913A8[0])(
                                                                       v720,
                                                                       104LL,
                                                                       &v1641);
                                                              v725 = 0LL;
                                                              if ( v724 )
                                                                v725 = v1643;
                                                              lpModuleNamed = v725;
                                                              DWORD2(v1685) = v1669.m128i_i32[2] - v1669.m128i_i32[0];
                                                              HIDWORD(v1685) = v1669.m128i_i32[3] - v1669.m128i_i32[1];
                                                              ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808913B8)(
                                                                v719,
                                                                v721);
                                                              off_1808913C0(
                                                                v719,
                                                                (struct CSingleViewShellExperience *)1);
                                                              v1361 = (LPCWSTR)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                                                                                 v719,
                                                                                 v1360);
                                                              v726 = off_180891428[0];
                                                              v727 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
                                                              ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v726)(
                                                                v719,
                                                                &v1685,
                                                                v727);
                                                              v722 = 0;
                                                              ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_180891418)(
                                                                v719,
                                                                v1417,
                                                                0xFFFFFFFFLL,
                                                                &v1685,
                                                                v1308,
                                                                0LL);
                                                              if ( v677 == 1 )
                                                              {
                                                                if ( v1456 )
                                                                  v1457 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
                                                                else
                                                                  v1457 = 0xFFFFFF;
                                                              }
                                                              else
                                                              {
                                                                v1457 = -5723992;
                                                              }
                                                              v728 = -v1669.m128i_i32[0];
                                                              if ( v1669.m128i_i32[0] >= 0 )
                                                                v728 = 0;
                                                              v729 = 0;
                                                              if ( v1669.m128i_i32[0] >= 0 )
                                                                v729 = v1669.m128i_i32[0];
                                                              v730 = -v1669.m128i_i32[1];
                                                              if ( v1669.m128i_i32[1] >= 0 )
                                                                v730 = 0;
                                                              v731 = 0;
                                                              if ( v1669.m128i_i32[1] >= 0 )
                                                                v731 = v1669.m128i_i32[1];
                                                              v732 = DWORD2(v1685) - v728;
                                                              if ( DWORD2(v1685) - v728 >= v1445 - v729 )
                                                                v732 = v1445 - v729;
                                                              v733 = HIDWORD(v1685) - v730;
                                                              if ( HIDWORD(v1685) - v730 >= v1409 - v731 )
                                                                v733 = v1409 - v731;
                                                              if ( v732 > 0 && v733 > 0 )
                                                              {
                                                                v734 = (WCHAR *)&lpModuleNamed[2 * v728
                                                                                             + 2
                                                                                             * (__int64)(DWORD2(v1685) * v730)];
                                                                v1418 = v734;
                                                                v735 = v1445;
                                                                v736 = &v1468[2 * v729 + 2 * (__int64)(v1445 * v731)];
                                                                v1468 = v736;
                                                                v737 = 0;
                                                                v1446 = 0;
                                                                lpModuleNamee = (LPCWSTR)(4LL * SDWORD2(v1685));
                                                                v1329 = 2 * v735;
                                                                while ( 1 )
                                                                {
                                                                  v1410 = 0;
                                                                  v738 = (unsigned __int8 *)(v734 + 1);
                                                                  v739 = (char *)v736 - (char *)v734;
                                                                  do
                                                                  {
                                                                    if ( (unsigned __int8)((*v738
                                                                                          + *(v738 - 2)
                                                                                          + 2
                                                                                          * (unsigned int)*(v738 - 1)) >> 2) != 0xFF )
                                                                    {
                                                                      v740 = (unsigned __int8)~((*v738
                                                                                               + *(v738 - 2)
                                                                                               + 2
                                                                                               * (unsigned int)*(v738 - 1)) >> 2);
                                                                      v738[v739] -= ~((*v738
                                                                                     + *(v738 - 2)
                                                                                     + 2 * (unsigned int)*(v738 - 1)) >> 2)
                                                                                  * (v1457 - v738[v739]);
                                                                      v738[v739 - 1] += ((((unsigned __int64)(2155905153LL * v740 * (BYTE1(v1457) - v738[v739 - 1])) >> 32) & 0x80000000) != 0LL)
                                                                                      + ((int)((unsigned __int64)(2155905153LL * v740 * (BYTE1(v1457) - v738[v739 - 1])) >> 32) >> 7);
                                                                      v738[v739 - 2] += ((((unsigned __int64)(2155905153LL * v740 * (BYTE2(v1457) - v738[v739 - 2])) >> 32) & 0x80000000) != 0LL)
                                                                                      + ((int)((unsigned __int64)(2155905153LL * v740 * (BYTE2(v1457) - v738[v739 - 2])) >> 32) >> 7);
                                                                      v738[v739 + 1] += ((((unsigned __int64)(2155905153LL * v740 * (255 - v738[v739 + 1])) >> 32) & 0x80000000) != 0LL)
                                                                                      + ((int)((unsigned __int64)(2155905153LL * v740 * (255 - v738[v739 + 1])) >> 32) >> 7);
                                                                      v737 = v1410;
                                                                    }
                                                                    v722 = 0;
                                                                    v738 += 4;
                                                                    v1410 = ++v737;
                                                                  }
                                                                  while ( v737 < v732 );
                                                                  v734 = (unsigned __int16 *)((char *)v1418
                                                                                            + (_QWORD)lpModuleNamee);
                                                                  v1418 = (unsigned __int16 *)((char *)v1418
                                                                                             + (_QWORD)lpModuleNamee);
                                                                  v736 = &v1468[v1329];
                                                                  v1468 = (unsigned __int16 *)((char *)v1468 + v1329 * 2);
                                                                  if ( ++v1446 >= v733 )
                                                                    break;
                                                                  v737 = 0;
                                                                }
                                                                v99 = v1477;
                                                                v719 = (CToastCenterExperienceManager *)v1434;
                                                              }
                                                              ((void (__fastcall *)(unsigned __int16 *))off_180891378)(v1473);
                                                              if ( v1361 )
                                                                ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                                                                  v719,
                                                                  v1361);
                                                            }
                                                            else
                                                            {
                                                              v722 = GetLastError();
                                                              v723 = v722 < 0;
                                                              if ( v722 > 0 )
                                                              {
                                                                v722 = (unsigned __int16)v722 | 0x80070000;
                                                                v723 = v722 < 0;
                                                              }
                                                              if ( !v723 )
                                                                v722 = -2147467259;
                                                            }
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(v719);
                                                            if ( v722 < 0 )
                                                              goto LABEL_1021;
                                                            v1275 = v1661;
                                                            v1362 = v1666;
                                                            v741 = v1663;
                                                            v1419 = (unsigned __int16 *)v1663;
                                                            v1638 = 0;
                                                            memset_0(v1639, 0, 0x64uLL);
                                                            v1635 = 0;
                                                            memset_0(v1636, 0, 0x64uLL);
                                                            v1468 = 0LL;
                                                            v1458 = 0;
                                                            v1447 = 0;
                                                            v1700 = 0LL;
                                                            v1701 = 0LL;
                                                            v1702 = 0LL;
                                                            v1703 = 0;
                                                            v1684 = 0LL;
                                                            if ( !v741 )
                                                              goto LABEL_1021;
                                                            v742 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180891390[0])(
                                                                     lpMemk,
                                                                     7LL);
                                                            if ( v742 )
                                                            {
                                                              if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(
                                                                     v742,
                                                                     104LL,
                                                                     &v1638) )
                                                              {
                                                                v1468 = v1640;
                                                                v1458 = v1639[0];
                                                                v1447 = v1639[1];
                                                              }
                                                              v797 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180891350[0])(lpMemk);
                                                              v798 = (CToastCenterExperienceManager *)v797;
                                                              v1435 = (LPCWSTR)v797;
                                                              if ( v797 )
                                                              {
                                                                v1589 = 0LL;
                                                                v1701 = 0LL;
                                                                v1702 = 0LL;
                                                                v1703 = 0;
                                                                LODWORD(v1700) = 40;
                                                                DWORD1(v1700) = v1670.m128i_i32[2] - v1670.m128i_i32[0];
                                                                DWORD2(v1700) = v1670.m128i_i32[1] - v1670.m128i_i32[3];
                                                                HIDWORD(v1700) = 2097153;
                                                                v799 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                                                                                             v797,
                                                                                             &v1700,
                                                                                             0LL,
                                                                                             &v1589,
                                                                                             0LL,
                                                                                             0);
                                                                v800 = v799;
                                                                v1473 = v799;
                                                                if ( !v799 )
                                                                {
                                                                  v801 = GetLastError();
                                                                  v802 = v801;
                                                                  if ( v801 > 0 )
                                                                    v802 = (unsigned __int16)v801 | 0x80070000;
                                                                  if ( v802 >= 0 )
                                                                    v802 = -2147467259;
LABEL_1109:
                                                                  ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(v798);
                                                                  if ( v802 < 0 )
                                                                    goto LABEL_1021;
                                                                  v822 = 0LL;
                                                                  v823 = lpMemk;
LABEL_1222:
                                                                  off_1808913C0(
                                                                    v823,
                                                                    (struct CSingleViewShellExperience *)v1351);
                                                                  v832 = v1467;
                                                                  if ( !v1467 )
                                                                  {
LABEL_1133:
                                                                    if ( !v822 )
                                                                      goto LABEL_1021;
                                                                    goto LABEL_1134;
                                                                  }
LABEL_1132:
                                                                  ((void (__fastcall *)(void *))off_180891378)(v832);
                                                                  goto LABEL_1133;
                                                                }
                                                                v803 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808913A8[0])(
                                                                         v799,
                                                                         104LL,
                                                                         &v1635);
                                                                v804 = 0LL;
                                                                if ( v803 )
                                                                  v804 = v1637;
                                                                lpModuleNameg = v804;
                                                                DWORD2(v1684) = v1670.m128i_i32[2] - v1670.m128i_i32[0];
                                                                HIDWORD(v1684) = v1670.m128i_i32[3] - v1670.m128i_i32[1];
                                                                ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808913B8)(
                                                                  v798,
                                                                  v800);
                                                                off_1808913C0(
                                                                  v798,
                                                                  (struct CSingleViewShellExperience *)1);
                                                                v1363 = (LPCWSTR)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                                                                                   v798,
                                                                                   v1362);
                                                                v805 = off_180891428[0];
                                                                v806 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
                                                                ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v805)(
                                                                  v798,
                                                                  &v1684,
                                                                  v806);
                                                                v802 = 0;
                                                                ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_180891418)(
                                                                  v798,
                                                                  v1419,
                                                                  0xFFFFFFFFLL,
                                                                  &v1684,
                                                                  v1308,
                                                                  0LL);
                                                                if ( v677 == 1 )
                                                                {
                                                                  if ( !v1275 )
                                                                  {
                                                                    v1276 = 0xFFFFFF;
LABEL_1086:
                                                                    v808 = -v1670.m128i_i32[0];
                                                                    if ( v1670.m128i_i32[0] >= 0 )
                                                                      v808 = 0;
                                                                    v809 = 0;
                                                                    if ( v1670.m128i_i32[0] >= 0 )
                                                                      v809 = v1670.m128i_i32[0];
                                                                    v810 = -v1670.m128i_i32[1];
                                                                    if ( v1670.m128i_i32[1] >= 0 )
                                                                      v810 = 0;
                                                                    v811 = 0;
                                                                    if ( v1670.m128i_i32[1] >= 0 )
                                                                      v811 = v1670.m128i_i32[1];
                                                                    v812 = DWORD2(v1684) - v808;
                                                                    if ( DWORD2(v1684) - v808 >= v1458 - v809 )
                                                                      v812 = v1458 - v809;
                                                                    v813 = HIDWORD(v1684) - v810;
                                                                    if ( HIDWORD(v1684) - v810 >= v1447 - v811 )
                                                                      v813 = v1447 - v811;
                                                                    if ( v812 > 0 && v813 > 0 )
                                                                    {
                                                                      v814 = (WCHAR *)&lpModuleNameg[2 * v808 + 2 * (__int64)(v810 * DWORD2(v1684))];
                                                                      v1420 = v814;
                                                                      v815 = v1458;
                                                                      v816 = &v1468[2 * v809
                                                                                  + 2 * (__int64)(v1458 * v811)];
                                                                      v1468 = v816;
                                                                      v1459 = 0;
                                                                      lpModuleNameh = (LPCWSTR)(4LL * SDWORD2(v1684));
                                                                      v1331 = 2 * v815;
                                                                      do
                                                                      {
                                                                        v817 = 0;
                                                                        v818 = (unsigned __int8 *)(v814 + 1);
                                                                        v819 = (char *)v816 - (char *)v814;
                                                                        v820 = v1469;
                                                                        do
                                                                        {
                                                                          if ( (unsigned __int8)((*v818
                                                                                                + *(v818 - 2)
                                                                                                + 2
                                                                                                * (unsigned int)*(v818 - 1)) >> 2) != 0xFF )
                                                                          {
                                                                            v821 = (unsigned __int8)~((*v818 + *(v818 - 2) + 2 * (unsigned int)*(v818 - 1)) >> 2);
                                                                            v818[v819] -= ~((*v818
                                                                                           + *(v818 - 2)
                                                                                           + 2
                                                                                           * (unsigned int)*(v818 - 1)) >> 2)
                                                                                        * (v820 - v818[v819]);
                                                                            v818[v819 - 1] += ((((unsigned __int64)(2155905153LL * v821 * (BYTE1(v1276) - v818[v819 - 1])) >> 32) & 0x80000000) != 0LL)
                                                                                            + ((int)((unsigned __int64)(2155905153LL * v821 * (BYTE1(v1276) - v818[v819 - 1])) >> 32) >> 7);
                                                                            v818[v819 - 2] += ((((unsigned __int64)(2155905153LL * v821 * (BYTE2(v1276) - v818[v819 - 2])) >> 32) & 0x80000000) != 0LL)
                                                                                            + ((int)((unsigned __int64)(2155905153LL * v821 * (BYTE2(v1276) - v818[v819 - 2])) >> 32) >> 7);
                                                                            v818[v819 + 1] += ((((unsigned __int64)(2155905153LL * v821 * (255 - v818[v819 + 1])) >> 32) & 0x80000000) != 0LL)
                                                                                            + ((int)((unsigned __int64)(2155905153LL * v821 * (255 - v818[v819 + 1])) >> 32) >> 7);
                                                                          }
                                                                          v802 = 0;
                                                                          v818 += 4;
                                                                          ++v817;
                                                                        }
                                                                        while ( v817 < v812 );
                                                                        v814 = (unsigned __int16 *)((char *)v1420
                                                                                                  + (_QWORD)lpModuleNameh);
                                                                        v1420 = (unsigned __int16 *)((char *)v1420 + (_QWORD)lpModuleNameh);
                                                                        v816 = &v1468[v1331];
                                                                        v1468 = (unsigned __int16 *)((char *)v1468 + v1331 * 2);
                                                                        ++v1459;
                                                                      }
                                                                      while ( v1459 < v813 );
                                                                      v99 = v1477;
                                                                      v798 = (CToastCenterExperienceManager *)v1435;
                                                                    }
                                                                    ((void (__fastcall *)(unsigned __int16 *))off_180891378)(v1473);
                                                                    if ( v1363 )
                                                                      ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                                                                        v798,
                                                                        v1363);
                                                                    goto LABEL_1109;
                                                                  }
                                                                  v807 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
                                                                }
                                                                else
                                                                {
                                                                  v807 = -5723992;
                                                                }
                                                                v1276 = v807;
                                                                v1469 = v807;
                                                                goto LABEL_1086;
                                                              }
                                                            }
                                                          }
                                                        }
LABEL_1020:
                                                        GetLastError();
                                                        goto LABEL_1021;
                                                      }
                                                      if ( v1661 || (v824 = -64, v677 == 1) )
                                                        v824 = -1;
                                                      LOWORD(v1460) = 0;
                                                      BYTE2(v1460) = v824;
                                                      HIBYTE(v1460) = 1;
                                                      v1448 = 0;
                                                      v1411 = 0;
                                                      Sizec = 0;
                                                      v1320 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180891350[0])(lpMemk);
                                                      if ( !v1320 )
                                                        goto LABEL_1020;
                                                      if ( v677 == 1 )
                                                      {
                                                        v825 = v1670.m128i_i32[2] - v1670.m128i_i32[0];
                                                        if ( v1670.m128i_i32[2] - v1670.m128i_i32[0] <= v1669.m128i_i32[2] - v1669.m128i_i32[0] )
                                                          v825 = v1669.m128i_i32[2] - v1669.m128i_i32[0];
                                                        v1389 = v825;
                                                        v826 = v1670.m128i_i32[3] - v1669.m128i_i32[1];
                                                        v1464 = v1670.m128i_i32[3] - v1669.m128i_i32[1];
                                                        v827 = 0;
                                                        v1474 = 0;
                                                        if ( v1660 )
                                                        {
                                                          v1448 = v825 + v1669.m128i_i32[0] - v1669.m128i_i32[2];
                                                          Sizec = v825 + v1670.m128i_i32[0] - v1670.m128i_i32[2];
                                                          v827 = v1448;
                                                          v1474 = Sizec;
                                                          v826 = v1670.m128i_i32[3] - v1669.m128i_i32[1];
                                                        }
                                                        v828 = v827 + v1669.m128i_i32[2] - v1669.m128i_i32[0];
                                                        LODWORD(v1470) = v1669.m128i_i32[3] - v1669.m128i_i32[1];
                                                        v829 = v1474 + v1670.m128i_i32[2] - v1670.m128i_i32[0];
                                                        LODWORD(v1471) = v1670.m128i_i32[1] - v1669.m128i_i32[1];
                                                        LODWORD(v1466) = v1670.m128i_i32[3] - v1669.m128i_i32[1];
                                                      }
                                                      else
                                                      {
                                                        v825 = DWORD2(v1686);
                                                        v1389 = DWORD2(v1686);
                                                        v826 = HIDWORD(v1686);
                                                        v1464 = HIDWORD(v1686);
                                                        LODWORD(v1470) = _mm_cvtsi128_si32(_mm_srli_si128(v1669, 12));
                                                        v828 = _mm_cvtsi128_si32(_mm_srli_si128(v1669, 8));
                                                        v1411 = _mm_cvtsi128_si32(_mm_srli_si128(v1669, 4));
                                                        v1448 = _mm_cvtsi128_si32(v1669);
                                                        LODWORD(v1466) = _mm_cvtsi128_si32(_mm_srli_si128(v1670, 12));
                                                        v829 = _mm_cvtsi128_si32(_mm_srli_si128(v1670, 8));
                                                        LODWORD(v1471) = _mm_cvtsi128_si32(_mm_srli_si128(v1670, 4));
                                                        Sizec = _mm_cvtsi128_si32(v1670);
                                                      }
                                                      v1474 = v829;
                                                      v1590 = 0LL;
                                                      memset(&v1695[4], 0, 28);
                                                      v1695[0] = 40;
                                                      v1695[1] = v825;
                                                      v1695[2] = -v826;
                                                      v1695[3] = 2097153;
                                                      v830 = (void *)((__int64 (__fastcall *)(size_t, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                                                                       v1320,
                                                                       v1695,
                                                                       0LL,
                                                                       &v1590,
                                                                       0LL,
                                                                       0);
                                                      v1467 = v830;
                                                      if ( !v830 )
                                                      {
                                                        GetLastError();
                                                        v822 = v1320;
LABEL_1134:
                                                        ((void (__fastcall *)(size_t))off_180891370[0])(v822);
LABEL_1021:
                                                        if ( v1472 )
                                                          ((void (__fastcall *)(SIZE_T))off_180891378)(v1472);
                                                        goto LABEL_1023;
                                                      }
                                                      ((void (__fastcall *)(size_t, void *))off_1808913B8)(v1320, v830);
                                                      if ( v677 == 1 && v1472 )
                                                      {
                                                        v1681 = 0LL;
                                                        v1682 = v825;
                                                        v1683 = v1464;
                                                        ((void (__fastcall *)(size_t, __int64 *))off_180891428[0])(
                                                          v1320,
                                                          &v1681);
                                                      }
                                                      v1393 = v1661;
                                                      v1364 = v1665;
                                                      v1421 = (unsigned __int16 *)v1662;
                                                      v1632 = 0;
                                                      memset_0(v1633, 0, 0x64uLL);
                                                      v1651 = 0;
                                                      memset_0(v1652, 0, 0x64uLL);
                                                      v1468 = 0LL;
                                                      v1332 = 0;
                                                      lpModuleNamei = 0;
                                                      v1704 = 0LL;
                                                      v1705 = 0LL;
                                                      v1706 = 0LL;
                                                      v1707 = 0;
                                                      v1680 = 0LL;
                                                      if ( !v1421 )
                                                        goto LABEL_1130;
                                                      v831 = ((__int64 (__fastcall *)(size_t, __int64))off_180891390[0])(
                                                               v1320,
                                                               7LL);
                                                      if ( v831 )
                                                      {
                                                        if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(
                                                               v831,
                                                               104LL,
                                                               &v1632) )
                                                        {
                                                          v1468 = v1634;
                                                          v1332 = v1633[0];
                                                          lpModuleNamei = v1633[1];
                                                        }
                                                        v833 = ((__int64 (__fastcall *)(size_t))off_180891350[0])(v1320);
                                                        v1436 = (CToastCenterExperienceManager *)v833;
                                                        if ( v833 )
                                                        {
                                                          v1591 = 0LL;
                                                          v1705 = 0LL;
                                                          v1706 = 0LL;
                                                          v1707 = 0;
                                                          LODWORD(v1704) = 40;
                                                          DWORD1(v1704) = v828 - v1448;
                                                          DWORD2(v1704) = v1411 - (_DWORD)v1470;
                                                          HIDWORD(v1704) = 2097153;
                                                          v834 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180891358[0])(
                                                                                       v833,
                                                                                       &v1704,
                                                                                       0LL,
                                                                                       &v1591,
                                                                                       0LL,
                                                                                       0);
                                                          v1473 = v834;
                                                          if ( v834 )
                                                          {
                                                            v837 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808913A8[0])(
                                                                     v834,
                                                                     104LL,
                                                                     &v1651);
                                                            v838 = 0LL;
                                                            if ( v837 )
                                                              v838 = v1653;
                                                            v1370 = v838;
                                                            DWORD2(v1680) = v828 - v1448;
                                                            HIDWORD(v1680) = (_DWORD)v1470 - v1411;
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808913B8)(
                                                              v1436,
                                                              v1473);
                                                            off_1808913C0(v1436, (struct CSingleViewShellExperience *)1);
                                                            v1365 = (LPCWSTR)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                                                                               v1436,
                                                                               v1364);
                                                            v839 = off_180891428[0];
                                                            v840 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v839)(
                                                              v1436,
                                                              &v1680,
                                                              v840);
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_180891418)(
                                                              v1436,
                                                              v1421,
                                                              0xFFFFFFFFLL,
                                                              &v1680,
                                                              v1308,
                                                              0LL);
                                                            if ( v677 == 1 )
                                                            {
                                                              if ( v1393 )
                                                                v841 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
                                                              else
                                                                v841 = 0xFFFFFF;
                                                            }
                                                            else
                                                            {
                                                              v841 = -5723992;
                                                            }
                                                            v1394 = v841;
                                                            v842 = -v1448;
                                                            if ( v1448 >= 0 )
                                                              v842 = 0;
                                                            v843 = 0;
                                                            if ( v1448 >= 0 )
                                                              v843 = v1448;
                                                            v844 = -v1411;
                                                            if ( v1411 >= 0 )
                                                              v844 = 0;
                                                            v845 = 0;
                                                            if ( v1411 >= 0 )
                                                              v845 = v1411;
                                                            v846 = (unsigned int)(DWORD2(v1680) - v842);
                                                            v847 = v1332;
                                                            if ( (int)v846 >= v1332 - v843 )
                                                              v846 = (unsigned int)(v1332 - v843);
                                                            v1333 = v846;
                                                            v848 = HIDWORD(v1680) - v844;
                                                            if ( HIDWORD(v1680) - v844 >= lpModuleNamei - v845 )
                                                              v848 = lpModuleNamei - v845;
                                                            lpModuleNamej = v848;
                                                            v835 = 0;
                                                            if ( (int)v846 > 0 )
                                                            {
                                                              v846 = 0LL;
                                                              if ( v848 > 0 )
                                                              {
                                                                v846 = (unsigned __int64)&v1370[4 * v842
                                                                                              + 4
                                                                                              * (__int64)(DWORD2(v1680) * v844)];
                                                                v1371 = (char *)v846;
                                                                v849 = &v1468[2 * v843 + 2 * (__int64)(v845 * (int)v847)];
                                                                v1422 = v849;
                                                                LODWORD(v1470) = 0;
                                                                v1468 = (unsigned __int16 *)(4LL * SDWORD2(v1680));
                                                                v1412 = 2 * v847;
                                                                v850 = 0;
                                                                v1449 = 0;
                                                                v851 = v1333;
                                                                v852 = v1468;
                                                                do
                                                                {
                                                                  v853 = 0;
                                                                  v1334 = 0;
                                                                  v854 = (unsigned __int8 *)(v846 + 2);
                                                                  v855 = (signed __int64)v849 - v846;
                                                                  do
                                                                  {
                                                                    if ( (unsigned __int8)((*v854
                                                                                          + *(v854 - 2)
                                                                                          + 2
                                                                                          * (unsigned int)*(v854 - 1)) >> 2) != 0xFF )
                                                                    {
                                                                      v856 = (unsigned __int8)~((*v854
                                                                                               + *(v854 - 2)
                                                                                               + 2
                                                                                               * (unsigned int)*(v854 - 1)) >> 2);
                                                                      v854[v855] -= ~((*v854
                                                                                     + *(v854 - 2)
                                                                                     + 2 * (unsigned int)*(v854 - 1)) >> 2)
                                                                                  * (v1394 - v854[v855]);
                                                                      v854[v855 - 1] -= v856
                                                                                      * (BYTE1(v1394) - v854[v855 - 1]);
                                                                      v854[v855 - 2] -= v856
                                                                                      * (BYTE2(v1394) - v854[v855 - 2]);
                                                                      v854[v855 + 1] += v856
                                                                                      * (255 - v854[v855 + 1])
                                                                                      / 255;
                                                                      v853 = v1334;
                                                                      v850 = v1449;
                                                                    }
                                                                    v835 = v850;
                                                                    v854 += 4;
                                                                    v1334 = ++v853;
                                                                  }
                                                                  while ( v853 < v851 );
                                                                  v846 = (unsigned __int64)&v1371[(_QWORD)v852];
                                                                  v1371 = &v1371[(_QWORD)v852];
                                                                  v849 = &v1422[v1412];
                                                                  v1422 = (unsigned __int16 *)((char *)v1422 + v1412 * 2);
                                                                  LODWORD(v1470) = (_DWORD)v1470 + 1;
                                                                  v1449 = v850;
                                                                }
                                                                while ( (int)v1470 < lpModuleNamej );
                                                                v677 = v1273;
                                                                v99 = v1477;
                                                                v825 = v1389;
                                                                v829 = v1474;
                                                              }
                                                            }
                                                            ((void (__fastcall *)(unsigned __int16 *, unsigned __int64))off_180891378)(
                                                              v1473,
                                                              v846);
                                                            if ( v1365 )
                                                              ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                                                                v1436,
                                                                v1365);
                                                          }
                                                          else
                                                          {
                                                            v835 = GetLastError();
                                                            v836 = v835 < 0;
                                                            if ( v835 > 0 )
                                                            {
                                                              v835 = (unsigned __int16)v835 | 0x80070000;
                                                              v836 = v835 < 0;
                                                            }
                                                            if ( !v836 )
                                                              v835 = -2147467259;
                                                          }
                                                          ((void (__fastcall *)(CToastCenterExperienceManager *))off_180891370[0])(v1436);
                                                          if ( v835 < 0 )
                                                            goto LABEL_1130;
                                                          lpModuleNamek = v1661;
                                                          v1372 = v1666;
                                                          v857 = v1663;
                                                          v1366 = (LPCWSTR)v1663;
                                                          v1654 = 0;
                                                          memset_0(v1655, 0, 0x64uLL);
                                                          v1657 = 0;
                                                          memset_0(v1658, 0, 0x64uLL);
                                                          v1423 = 0LL;
                                                          v1335 = 0;
                                                          v1395 = 0;
                                                          v1708 = 0LL;
                                                          v1709 = 0LL;
                                                          v1710 = 0LL;
                                                          v1711 = 0;
                                                          v1679 = 0LL;
                                                          v858 = v857 == 0LL;
                                                          v822 = v1320;
                                                          if ( v858 )
                                                            goto LABEL_1131;
                                                          v859 = ((__int64 (__fastcall *)(size_t, __int64))off_180891390[0])(
                                                                   v1320,
                                                                   7LL);
                                                          if ( !v859 )
                                                          {
                                                            GetLastError();
                                                            goto LABEL_1131;
                                                          }
                                                          if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(
                                                                 v859,
                                                                 104LL,
                                                                 &v1654) )
                                                          {
                                                            v1423 = v1656;
                                                            v1335 = v1655[0];
                                                            v1395 = v1655[1];
                                                          }
                                                          v860 = (unsigned __int16 *)((__int64 (__fastcall *)(size_t))off_180891350[0])(v1320);
                                                          v861 = (CToastCenterExperienceManager *)v860;
                                                          v1468 = v860;
                                                          if ( v860 )
                                                          {
                                                            v1593[0] = 0LL;
                                                            v1709 = 0LL;
                                                            v1710 = 0LL;
                                                            v1711 = 0;
                                                            LODWORD(v1708) = 40;
                                                            DWORD1(v1708) = v829 - Sizec;
                                                            DWORD2(v1708) = (_DWORD)v1471 - (_DWORD)v1466;
                                                            HIDWORD(v1708) = 2097153;
                                                            v862 = ((__int64 (__fastcall *)(unsigned __int16 *, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_180891358[0])(
                                                                     v860,
                                                                     &v1708,
                                                                     0LL,
                                                                     v1593,
                                                                     0LL,
                                                                     0);
                                                            v1437 = (LPCWSTR)v862;
                                                            if ( !v862 )
                                                            {
                                                              v863 = GetLastError();
                                                              v864 = v863 < 0;
                                                              if ( v863 > 0 )
                                                              {
                                                                v863 = (unsigned __int16)v863 | 0x80070000;
                                                                v864 = v863 < 0;
                                                              }
                                                              if ( !v864 )
                                                                v863 = -2147467259;
                                                              v865 = v1468;
                                                              goto LABEL_1218;
                                                            }
                                                            v866 = ((__int64 (__fastcall *)(__int64, __int64, int *))off_1808913A8[0])(
                                                                     v862,
                                                                     104LL,
                                                                     &v1657);
                                                            v867 = 0LL;
                                                            if ( v866 )
                                                              v867 = v1659;
                                                            v1473 = v867;
                                                            DWORD2(v1679) = v829 - Sizec;
                                                            HIDWORD(v1679) = (_DWORD)v1466 - (_DWORD)v1471;
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808913B8)(
                                                              v861,
                                                              v1437);
                                                            off_1808913C0(v861, (struct CSingleViewShellExperience *)1);
                                                            v1373 = (LPVOID)((__int64 (__fastcall *)(CToastCenterExperienceManager *, const WCHAR *))off_1808913B8)(
                                                                              v861,
                                                                              v1372);
                                                            v868 = off_180891428[0];
                                                            v869 = ((__int64 (__fastcall *)(_QWORD))off_1808913B0[0])(0LL);
                                                            v865 = v1468;
                                                            ((void (__fastcall *)(unsigned __int16 *, __int128 *, __int64))v868)(
                                                              v1468,
                                                              &v1679,
                                                              v869);
                                                            ((void (__fastcall *)(unsigned __int16 *, LPCWSTR, __int64, __int128 *, int, _QWORD))off_180891418)(
                                                              v865,
                                                              v1366,
                                                              0xFFFFFFFFLL,
                                                              &v1679,
                                                              v1308,
                                                              0LL);
                                                            if ( v677 == 1 )
                                                            {
                                                              if ( !lpModuleNamek )
                                                              {
                                                                lpModuleNamel = 0xFFFFFF;
LABEL_1195:
                                                                v871 = -Sizec;
                                                                if ( Sizec >= 0 )
                                                                  v871 = 0;
                                                                v872 = 0;
                                                                if ( Sizec >= 0 )
                                                                  v872 = Sizec;
                                                                v873 = -(int)v1471;
                                                                if ( (int)v1471 >= 0 )
                                                                  v873 = 0;
                                                                v874 = 0;
                                                                if ( (int)v1471 >= 0 )
                                                                  v874 = (int)v1471;
                                                                v875 = (unsigned int)(DWORD2(v1679) - v871);
                                                                v876 = v1335;
                                                                if ( (int)v875 >= v1335 - v872 )
                                                                  v875 = (unsigned int)(v1335 - v872);
                                                                v1336 = v875;
                                                                v877 = HIDWORD(v1679) - v873;
                                                                if ( HIDWORD(v1679) - v873 >= v1395 - v874 )
                                                                  v877 = v1395 - v874;
                                                                v1396 = v877;
                                                                v863 = 0;
                                                                if ( (int)v875 > 0 )
                                                                {
                                                                  v875 = 0LL;
                                                                  if ( v877 > 0 )
                                                                  {
                                                                    v875 = (unsigned __int64)&v1473[2 * v871 + 2 * (__int64)(DWORD2(v1679) * v873)];
                                                                    v1367 = (LPCWSTR)v875;
                                                                    v878 = &v1423[2 * v872
                                                                                + 2 * (__int64)((int)v876 * v874)];
                                                                    v1424 = v878;
                                                                    LODWORD(v1466) = 0;
                                                                    v1473 = (unsigned __int16 *)(4LL * SDWORD2(v1679));
                                                                    v1470 = (LPVOID)(4 * v876);
                                                                    v879 = 0;
                                                                    LODWORD(v1471) = 0;
                                                                    v880 = v1336;
                                                                    v881 = v1473;
                                                                    v882 = v1469;
                                                                    do
                                                                    {
                                                                      v883 = 0;
                                                                      v1337 = 0;
                                                                      v884 = (unsigned __int8 *)(v875 + 2);
                                                                      v885 = (char *)v878 - v875;
                                                                      do
                                                                      {
                                                                        if ( (unsigned __int8)((*v884
                                                                                              + *(v884 - 2)
                                                                                              + 2
                                                                                              * (unsigned int)*(v884 - 1)) >> 2) != 0xFF )
                                                                        {
                                                                          v886 = (unsigned __int8)~((*v884 + *(v884 - 2) + 2 * (unsigned int)*(v884 - 1)) >> 2);
                                                                          v884[(_QWORD)v885] -= ~((*v884
                                                                                                 + *(v884 - 2)
                                                                                                 + 2
                                                                                                 * (unsigned int)*(v884 - 1)) >> 2)
                                                                                              * (v882
                                                                                               - v884[(_QWORD)v885]);
                                                                          v884[(_QWORD)v885 - 1] -= v886 * (BYTE1(lpModuleNamel) - v884[(_QWORD)v885 - 1]);
                                                                          v884[(_QWORD)v885 - 2] -= v886 * (BYTE2(lpModuleNamel) - v884[(_QWORD)v885 - 2]);
                                                                          v884[(_QWORD)v885 + 1] += v886 * (255 - v884[(_QWORD)v885 + 1]) / 255;
                                                                          v883 = v1337;
                                                                          v879 = (int)v1471;
                                                                        }
                                                                        v863 = v879;
                                                                        v884 += 4;
                                                                        v1337 = ++v883;
                                                                      }
                                                                      while ( v883 < v880 );
                                                                      v875 = (unsigned __int64)v1367 + (_QWORD)v881;
                                                                      v1367 = (LPCWSTR)((char *)v1367 + (_QWORD)v881);
                                                                      v878 = (unsigned __int16 *)((char *)v1424
                                                                                                + (_QWORD)v1470);
                                                                      v1424 = (unsigned __int16 *)((char *)v1424
                                                                                                 + (_QWORD)v1470);
                                                                      LODWORD(v1466) = (_DWORD)v1466 + 1;
                                                                      LODWORD(v1471) = v879;
                                                                    }
                                                                    while ( (int)v1466 < v1396 );
                                                                    v677 = v1273;
                                                                    v99 = v1477;
                                                                    v825 = v1389;
                                                                    v865 = v1468;
                                                                  }
                                                                }
                                                                ((void (__fastcall *)(LPCWSTR, unsigned __int64))off_180891378)(
                                                                  v1437,
                                                                  v875);
                                                                if ( v1373 )
                                                                  ((void (__fastcall *)(unsigned __int16 *, LPVOID))off_1808913B8)(
                                                                    v865,
                                                                    v1373);
LABEL_1218:
                                                                ((void (__fastcall *)(unsigned __int16 *))off_180891370[0])(v865);
                                                                if ( v863 >= 0 )
                                                                {
                                                                  v822 = v1320;
                                                                  v823 = lpMemk;
                                                                  if ( v677 == 1 )
                                                                    ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, int))off_180891340[0])(
                                                                      lpMemk,
                                                                      v1669.m128i_u32[0],
                                                                      v1669.m128i_u32[1],
                                                                      v825,
                                                                      v1464,
                                                                      v1320,
                                                                      0,
                                                                      0,
                                                                      13369376);
                                                                  else
                                                                    ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, unsigned __int32, __int32, int))off_180891380[0])(
                                                                      lpMemk,
                                                                      (unsigned int)v1686,
                                                                      DWORD1(v1686),
                                                                      v825,
                                                                      v1464,
                                                                      v1320,
                                                                      0,
                                                                      0,
                                                                      v825,
                                                                      v1464,
                                                                      v1460);
                                                                  goto LABEL_1222;
                                                                }
                                                                goto LABEL_1130;
                                                              }
                                                              v870 = ((__int64 (__fastcall *)(__int64))off_180891458[0])(8LL);
                                                            }
                                                            else
                                                            {
                                                              v870 = -5723992;
                                                            }
                                                            lpModuleNamel = v870;
                                                            v1469 = v870;
                                                            goto LABEL_1195;
                                                          }
                                                        }
                                                      }
                                                      GetLastError();
LABEL_1130:
                                                      v822 = v1320;
LABEL_1131:
                                                      v832 = v1467;
                                                      goto LABEL_1132;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v679 = 0;
                                                  }
                                                  if ( v677 != 1 )
                                                    goto LABEL_971;
                                                  goto LABEL_969;
                                                }
                                                v579 = 0LL;
                                                v1581 = 0LL;
                                                v1582 = 0LL;
                                                v1583 = 0LL;
                                                v1584 = 0LL;
                                                memset(v1725, 0, sizeof(v1725));
                                                v1585 = 0LL;
                                                v1519 = 0;
                                                v1544 = 0LL;
                                                v578 = 0;
                                                v1520 = 0;
                                                if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1808913E0[0])(
                                                        8LL,
                                                        &v1519,
                                                        0LL,
                                                        &v1520) )
                                                {
                                                  v578 = GetLastError();
                                                  v580 = v578 < 0;
                                                  if ( v578 > 0 )
                                                  {
                                                    v578 = (unsigned __int16)v578 | 0x80070000;
                                                    v580 = v578 < 0;
                                                  }
                                                  if ( !v580 )
                                                    v578 = -2147467259;
                                                  goto LABEL_743;
                                                }
                                                v581 = MemoryAlloc(2LL * v1520);
                                                SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1585, v581);
                                                if ( !v1585 )
                                                {
                                                  v578 = -2147024882;
                                                  goto LABEL_743;
                                                }
                                                v582 = MemoryAlloc(4LL * (v1519 + 1));
                                                SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1544, v582);
                                                v583 = v1544;
                                                if ( v1544 )
                                                {
                                                  if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1808913E0[0])(
                                                         8LL,
                                                         &v1519,
                                                         v1585,
                                                         &v1520) )
                                                  {
                                                    v590 = v583;
                                                    if ( v1519 )
                                                    {
                                                      v591 = v1585;
                                                      v592 = v583;
                                                      for ( ii = 0; ii < v1519; ++ii )
                                                      {
                                                        *v592 = ((__int64 (__fastcall *)(char *, _QWORD))off_1808913F0)(
                                                                  v591,
                                                                  0LL);
                                                        v594 = -1LL;
                                                        do
                                                          ++v594;
                                                        while ( *(_WORD *)&v591[2 * v594] );
                                                        v591 += 2 * v594 + 2;
                                                        ++v592;
                                                      }
                                                      v1544 = v592;
                                                      LOBYTE(v461) = v1270;
                                                      v590 = v592;
                                                    }
                                                    *v590 = 1033;
                                                    v579 = v583;
                                                    v1544 = 0LL;
                                                    v1581 = v583;
                                                    v576 = v1519 + 1;
LABEL_743:
                                                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1544);
                                                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1585);
                                                    if ( v578 < 0 )
                                                    {
                                                      v600 = 0LL;
                                                      v602 = 0LL;
                                                    }
                                                    else
                                                    {
                                                      v584 = 0;
                                                      v1387 = 0;
                                                      v585 = 0;
                                                      if ( v576 )
                                                      {
                                                        v586 = 0LL;
                                                        while ( 2 )
                                                        {
                                                          v587 = 0;
                                                          v588 = dword_1807A63F0;
                                                          do
                                                          {
                                                            if ( v579[v586] == *v588 )
                                                            {
                                                              v584 = v587;
                                                              v1387 = v587;
                                                              goto LABEL_764;
                                                            }
                                                            ++v587;
                                                            ++v588;
                                                          }
                                                          while ( v587 < 0x26 );
                                                          ++v585;
                                                          ++v586;
                                                          if ( v585 < v576 )
                                                            continue;
                                                          break;
                                                        }
                                                      }
LABEL_764:
                                                      memset(v1688, 0, sizeof(v1688));
                                                      v1463 = 0;
                                                      if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1808913E8[0])(
                                                             (unsigned int)dword_1807A63F0[v584],
                                                             v1735,
                                                             85LL)
                                                        && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *, __int64))off_1808913D0[0])(
                                                             v1735,
                                                             88LL,
                                                             v1688,
                                                             16LL) > 0 )
                                                      {
                                                        v1463 = (HIDWORD(v1688[0]) >> 27) & 1;
                                                      }
                                                      memset_0(v1732, 0, 0x90uLL);
                                                      v595 = L"Segoe UI Light";
                                                      v596 = (const wchar_t **)&v1731;
                                                      v597 = 19LL;
                                                      do
                                                      {
                                                        *v596 = v595;
                                                        v598 = -1LL;
                                                        do
                                                          ++v598;
                                                        while ( v595[v598] );
                                                        v595 += v598 + 1;
                                                        ++v596;
                                                        --v597;
                                                      }
                                                      while ( v597 );
                                                      v599 = 3LL * v584;
                                                      v1356 = *(unsigned __int16 **)&v1732[8 * byte_1807A6490[v599] - 8];
                                                      v1473 = v1356;
                                                      v1415 = *(unsigned __int16 **)&v1732[8 * byte_1807A6490[v599 + 1]
                                                                                         - 8];
                                                      v600 = *(unsigned __int16 **)&v1732[8 * byte_1807A6490[v599 + 2]
                                                                                        - 8];
                                                      v1468 = v600;
                                                      v1328 = v600;
                                                      v601 = (char *)MemoryAlloc(0x1C90uLL);
                                                      v1391 = v601;
                                                      if ( v601 )
                                                      {
                                                        v603 = 0;
                                                        v1474 = -1;
                                                        v604 = 0;
                                                        v605 = 0;
                                                        v606 = v601 + 7;
                                                        v607 = (unsigned __int8 *)&unk_1807A6512;
                                                        v608 = 914LL;
                                                        v609 = -1;
                                                        do
                                                        {
                                                          v610 = v607[1] | ((*v607 | ((*(v607 - 1) | (*(v607 - 2) << 8)) << 8)) << 8);
                                                          v611 = v607[5] | ((v607[4] | ((v607[3] | (v607[2] << 8)) << 8)) << 8);
                                                          v612 = v610 ^ v605;
                                                          v607 += 8;
                                                          v613 = v612 ^ v604 ^ v611 ^ 0xAC987321;
                                                          v614 = (4991 * __ROR4__(v613 + 1419157410, 27)
                                                                + __ROR4__(v613, 22)) ^ v612;
                                                          v615 = (43881 * __ROR4__(v614 + 133239679, 9)
                                                                - __ROR4__(v614, 30)) ^ v613;
                                                          v616 = (24670 * v615 - (v615 >> 13) - 123127970) ^ v614;
                                                          v617 = (2033 * __ROR4__(v616 ^ 0xAB69, 26) - __ROR4__(v616, 30)) ^ v615;
                                                          v618 = (133239679 - (v617 ^ 0xAB69605E)) ^ v616;
                                                          v619 = (43881 * (v618 ^ 0x137F)) ^ __ROR4__(v618, 6) ^ v617;
                                                          v620 = (24670 * __ROR4__(v619 + 133239679, 15)
                                                                + __ROR4__(v619, 30)) ^ v618;
                                                          v621 = (2033 * __ROR4__(v620 + 1419157410, 14)
                                                                - __ROR4__(v620, 24)) ^ v619;
                                                          v622 = (4991 * __ROR4__(v621 ^ 0xAB69605E, 12)) ^ __ROR4__(v621, 10) ^ v620;
                                                          v623 = (v622 >> 10) ^ (43881 * (v622 ^ 0x7F1)) ^ v621;
                                                          v624 = (2033 * (__ROR4__(~v623, 5) + 24670)) ^ v622;
                                                          v625 = v623 ^ (v624 - 2033) ^ 0xAB69605E;
                                                          v626 = ((v625 >> 2)
                                                                + 4991 * __ROR4__(v623 ^ (v624 - 2033) ^ 0xAB6967AF, 30)) ^ v624;
                                                          v627 = (43881 * __ROR4__(v626 - 133239679, 6)
                                                                + __ROR4__(v626, 25)) ^ v625;
                                                          v628 = (24670 * (v627 ^ 0x137F) + __ROR4__(v627, 9)) ^ v626;
                                                          v629 = (2033 * __ROR4__(v628 ^ 0xAB69, 27) + __ROR4__(v628, 25)) ^ v627;
                                                          v630 = v629 ^ v628 ^ 0xAC987321;
                                                          v631 = (4991 * __ROR4__(v630, 3) - 219010071) ^ v629;
                                                          v632 = (24670 * __ROR4__(v631 - 133239679, 1)
                                                                - __ROR4__(v631, 6)) ^ v630;
                                                          v633 = (2033 * __ROR4__(v632 - 1419157410, 29)
                                                                + __ROR4__(v632, 18)) ^ v631;
                                                          v634 = (4991 * __ROR4__(v633 - 1419157410, 17)
                                                                - __ROR4__(v633, 14)) ^ v632;
                                                          v635 = (v634 >> 3) ^ (43881 * (v634 ^ 0x605E)) ^ v633;
                                                          v605 = (24670 * __ROR4__(v635 ^ 0x7F1137F, 28)) ^ __ROR4__(v635, 30) ^ v603 ^ v634;
                                                          v604 = v609 ^ v635;
                                                          *(v606 - 4) = v605;
                                                          *v606 = v604;
                                                          *(v606 - 5) = BYTE1(v605);
                                                          *(v606 - 1) = BYTE1(v604);
                                                          *(v606 - 6) = (unsigned __int16)(v605 >> 8) >> 8;
                                                          *(v606 - 2) = (unsigned __int16)(v604 >> 8) >> 8;
                                                          *(v606 - 7) = __ROR4__(
                                                                          (((v605 >> 8) | (v605 << 24)) >> 8) | (((v605 >> 8) | (v605 << 24)) << 24),
                                                                          8);
                                                          *(v606 - 3) = __ROR4__(
                                                                          (((v604 >> 8) | (v604 << 24)) >> 8) | (((v604 >> 8) | (v604 << 24)) << 24),
                                                                          8);
                                                          v603 = v610;
                                                          v609 = v611;
                                                          v606 += 8;
                                                          --v608;
                                                        }
                                                        while ( v608 );
                                                        v636 = 0LL;
                                                        v637 = 0;
                                                        LOBYTE(v461) = v1270;
                                                        v99 = v1477;
                                                        v638 = v1391;
                                                        v600 = v1468;
                                                        do
                                                          v637 ^= v1391[v636++];
                                                        while ( v636 < 0x1C90 );
                                                        if ( v637 == 127LL )
                                                        {
                                                          v1582 = v1391;
                                                          v1583 = 7312LL;
                                                          v578 = 0;
                                                          if ( v1391 )
                                                            v1583 = 7312LL;
                                                          else
                                                            v638 = 0LL;
                                                          v640 = v1725;
                                                          v641 = 6LL;
                                                          do
                                                          {
                                                            for ( jj = 0; jj < 0x26; ++jj )
                                                            {
                                                              if ( v1387 == jj )
                                                                *v640 = v638;
                                                              v643 = -1LL;
                                                              do
                                                                ++v643;
                                                              while ( v638[v643] );
                                                              v638 += v643 + 1;
                                                            }
                                                            ++v640;
                                                            --v641;
                                                          }
                                                          while ( v641 );
                                                          v644 = MemoryAlloc(0x18uLL);
                                                          SP<unsigned long,SP_MEM<unsigned long>>::operator=(
                                                            &v1584,
                                                            v644);
                                                          v645 = v1584;
                                                          if ( v1584 )
                                                          {
                                                            *v1584 = 0LL;
                                                            v645[2] = 0LL;
                                                            v646 = 0;
                                                            v1271 = 0;
                                                            v647 = v645;
                                                            v1392 = v645;
                                                            v648 = (__int16 *)&v1733;
                                                            v1466 = &v1733;
                                                            v1583 = 7312LL;
                                                            while ( 2 )
                                                            {
                                                              v649 = 0LL;
                                                              v650 = *v648;
                                                              v651 = word_1807A63E0;
                                                              while ( v650 != *v651 )
                                                              {
                                                                v649 = (unsigned int)(v649 + 1);
                                                                ++v651;
                                                                if ( (unsigned int)v649 >= 6 )
                                                                  goto LABEL_806;
                                                              }
                                                              v652 = (void *)*((_QWORD *)v1725 + v649);
                                                              v1471 = v652;
                                                              v653 = -1LL;
                                                              do
                                                                ++v653;
                                                              while ( *((_BYTE *)v652 + v653) );
                                                              v654 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD, _QWORD, _DWORD))off_180891400[0])(
                                                                       65001LL,
                                                                       0LL,
                                                                       v652,
                                                                       (unsigned int)(v653 + 1),
                                                                       0LL,
                                                                       0);
                                                              v1388 = v654;
                                                              if ( !v654 )
                                                              {
                                                                v659 = GetLastError();
                                                                v578 = v659;
                                                                if ( v659 > 0 )
                                                                  v578 = (unsigned __int16)v659 | 0x80070000;
                                                                if ( v578 >= 0 )
                                                                  v578 = -2147467259;
                                                                goto LABEL_816;
                                                              }
                                                              v655 = MemoryAlloc(2LL * v654);
                                                              *v1392 = v655;
                                                              if ( !v655 )
                                                                goto LABEL_797;
                                                              v656 = -1LL;
                                                              do
                                                                ++v656;
                                                              while ( *((_BYTE *)v1471 + v656) );
                                                              if ( !((unsigned int (__fastcall *)(__int64, _QWORD, LPVOID, _QWORD, LPVOID, int))off_180891400[0])(
                                                                      65001LL,
                                                                      0LL,
                                                                      v1471,
                                                                      (unsigned int)(v656 + 1),
                                                                      v655,
                                                                      v1388) )
                                                              {
                                                                v658 = GetLastError();
                                                                v578 = v658;
                                                                if ( v658 > 0 )
                                                                  v578 = (unsigned __int16)v658 | 0x80070000;
                                                                if ( v578 >= 0 )
                                                                  v578 = -2147467259;
                                                                goto LABEL_816;
                                                              }
                                                              v647 = v1392;
                                                              v646 = v1271;
LABEL_806:
                                                              v1271 = ++v646;
                                                              v648 = (__int16 *)((char *)v1466 + 2);
                                                              v1466 = (char *)v1466 + 2;
                                                              v1392 = ++v647;
                                                              if ( v646 < 3 )
                                                                continue;
                                                              break;
                                                            }
                                                            v657 = (void **)v645;
                                                            v645 = 0LL;
                                                            v1584 = 0LL;
                                                            v1579 = v657;
                                                            v1660 = v1463;
                                                          }
                                                          else
                                                          {
LABEL_797:
                                                            v578 = -2147024882;
                                                          }
LABEL_816:
                                                          if ( v645 )
                                                          {
                                                            v660 = v1473;
                                                            v661 = 3LL;
                                                            v1473 = (unsigned __int16 *)3;
                                                            v1468 = v1328;
                                                            v1356 = v660;
                                                            v1583 = 7312LL;
                                                            do
                                                            {
                                                              v662 = (_WORD *)*v645;
                                                              if ( *v645 )
                                                              {
                                                                v663 = -1LL;
                                                                do
                                                                  ++v663;
                                                                while ( v662[v663] );
                                                                memset(v662, 0, 2 * v663 + 2);
                                                                MemoryFree((void *)*v645);
                                                                v661 = (__int64)v1473;
                                                              }
                                                              ++v645;
                                                              v1473 = (unsigned __int16 *)--v661;
                                                            }
                                                            while ( v661 );
                                                          }
                                                          v600 = v1468;
                                                        }
                                                        else
                                                        {
                                                          v578 = -1073425151;
                                                          MemoryFree(v1391);
                                                        }
                                                        v639 = v1583;
                                                        v602 = v1415;
LABEL_826:
                                                        v1468 = v600;
                                                        v1416 = v602;
                                                        if ( v1582 )
                                                          memset(v1582, 0, v639);
                                                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1584);
                                                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1582);
                                                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1581);
                                                        if ( v578 < 0 )
                                                          goto LABEL_862;
                                                        if ( v1579 )
                                                        {
                                                          v664 = v1579;
                                                          v1468 = v600;
                                                        }
                                                        else
                                                        {
                                                          v664 = 0LL;
                                                        }
                                                        v1662 = *v664;
                                                        if ( v1579 )
                                                        {
                                                          v665 = v1579;
                                                          v1468 = v600;
                                                        }
                                                        else
                                                        {
                                                          v665 = 0LL;
                                                        }
                                                        v1663 = v665[1];
                                                        if ( v1579 )
                                                        {
                                                          v666 = v1579;
                                                          v1468 = v600;
                                                        }
                                                        else
                                                        {
                                                          v666 = 0LL;
                                                        }
                                                        v1664 = v666[2];
                                                        v1622 = 0LL;
                                                        LODWORD(v1622) = 16;
                                                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *))off_1808914A8)(
                                                                              66LL,
                                                                              0LL,
                                                                              &v1622) )
                                                        {
                                                          v667 = GetLastError();
                                                          v578 = v667;
                                                          if ( v667 > 0 )
                                                            v578 = (unsigned __int16)v667 | 0x80070000;
                                                          if ( v578 >= 0 )
                                                            v578 = -2147467259;
                                                          v1661 = 0;
                                                          goto LABEL_862;
                                                        }
                                                        v1661 = BYTE4(v1622) & 1;
                                                        if ( Sizeb == 1 )
                                                        {
                                                          v1350 = 42;
                                                        }
                                                        else
                                                        {
                                                          if ( Sizeb != 2 )
                                                          {
                                                            if ( Sizeb == 3 )
                                                            {
                                                              v1350 = 225;
                                                              v1307 = 225;
                                                            }
LABEL_851:
                                                            v668 = 96;
                                                            v1272 = 96;
                                                            memset_0(v1721, 0, 0xDCuLL);
                                                            v1722 = 220;
                                                            v578 = 0;
                                                            if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_180891420[0])(
                                                                   0LL,
                                                                   0xFFFFFFFFLL,
                                                                   v1721) )
                                                            {
                                                              v668 = v1723;
                                                              *(_QWORD *)&v1621 = 0LL;
                                                              *((_QWORD *)&v1621 + 1) = v1724;
                                                              if ( v1723 < 0x60u )
                                                                v668 = 96;
                                                              v1272 = v668;
                                                            }
                                                            v669 = v1468;
                                                            if ( Sizeb == 1 )
                                                              v669 = v1356;
                                                            v1473 = v669;
                                                            memset_0(v1712, 0, 0x5CuLL);
                                                            lpModuleNamec = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(
                                                                                       0LL,
                                                                                       0LL,
                                                                                       1027LL);
                                                            if ( lpModuleNamec )
                                                            {
                                                              v1712[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(
                                                                                 v1350,
                                                                                 v668,
                                                                                 72LL);
                                                              v1712[4] = 400;
                                                              v1713 = 5;
                                                              StringCchCopyW((char *)v1714, 32LL, (char *)v1473);
                                                              v681 = ((__int64 (__fastcall *)(_DWORD *))off_180891360[0])(v1712);
                                                              if ( v681 )
                                                              {
                                                                v1665 = (const WCHAR *)v681;
                                                              }
                                                              else
                                                              {
                                                                v578 = GetLastError();
                                                                v682 = v578 < 0;
                                                                if ( v578 > 0 )
                                                                {
                                                                  v578 = (unsigned __int16)v578 | 0x80070000;
                                                                  v682 = v578 < 0;
                                                                }
                                                                if ( !v682 )
                                                                  v578 = -2147467259;
                                                              }
                                                              ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808914A0[0])(
                                                                0LL,
                                                                lpModuleNamec);
                                                            }
                                                            else
                                                            {
                                                              v578 = GetLastError();
                                                              v670 = v578 < 0;
                                                              if ( v578 > 0 )
                                                              {
                                                                v578 = (unsigned __int16)v578 | 0x80070000;
                                                                v670 = v578 < 0;
                                                              }
                                                              if ( !v670 )
                                                                goto LABEL_861;
                                                            }
                                                            if ( v578 < 0 )
                                                              goto LABEL_862;
                                                            v683 = v1468;
                                                            if ( Sizeb == 1 )
                                                              v683 = v1356;
                                                            v1468 = v683;
                                                            memset_0(v1715, 0, 0x5CuLL);
                                                            v578 = 0;
                                                            v1357 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(
                                                                               0LL,
                                                                               0LL,
                                                                               1027LL);
                                                            if ( !v1357 )
                                                            {
                                                              v684 = GetLastError();
                                                              v578 = v684;
                                                              if ( v684 > 0 )
                                                                v578 = (unsigned __int16)v684 | 0x80070000;
                                                              if ( v578 >= 0 )
                                                                v578 = -2147467259;
                                                              goto LABEL_862;
                                                            }
                                                            v1715[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(
                                                                               v1307,
                                                                               v668,
                                                                               72LL);
                                                            v1715[4] = 400;
                                                            v1716 = 5;
                                                            StringCchCopyW((char *)v1717, 32LL, (char *)v1468);
                                                            v685 = ((__int64 (__fastcall *)(_DWORD *))off_180891360[0])(v1715);
                                                            v686 = 0;
                                                            if ( v685 )
                                                            {
                                                              v1666 = (const WCHAR *)v685;
                                                            }
                                                            else
                                                            {
                                                              v687 = GetLastError();
                                                              v578 = v687;
                                                              if ( v687 > 0 )
                                                                v578 = (unsigned __int16)v687 | 0x80070000;
                                                              if ( v578 >= 0 )
                                                                v578 = -2147467259;
                                                            }
                                                            ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808914A0[0])(
                                                              0LL,
                                                              v1357);
                                                            if ( v578 < 0 )
                                                              goto LABEL_862;
                                                            v688 = 0;
                                                            if ( Sizeb != 1 )
                                                            {
                                                              if ( Sizeb == 2 )
                                                              {
                                                                v686 = SDWORD2(v1621) / 4;
                                                                v688 = 0;
LABEL_909:
                                                                *((_QWORD *)&v1686 + 1) = __PAIR64__(v688, v686);
                                                                if ( Sizeb == 1 )
                                                                {
                                                                  v689 = 150;
                                                                  v1455 = 150;
                                                                  v1408 = 32;
                                                                }
                                                                else
                                                                {
                                                                  v689 = 0;
                                                                  if ( (unsigned int)(Sizeb - 2) <= 1 )
                                                                  {
                                                                    v1455 = 0;
                                                                    v1408 = 0;
                                                                  }
                                                                }
                                                                v690 = v686 - v689;
                                                                v1670.m128i_i32[2] = v690;
                                                                v1669.m128i_i32[2] = v690;
                                                                v691 = v1662;
                                                                v1358 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1808913B8)(
                                                                                   v1433,
                                                                                   v1665);
                                                                v692 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_180891418)(
                                                                         v1433,
                                                                         v691,
                                                                         0xFFFFFFFFLL,
                                                                         &v1669,
                                                                         3152,
                                                                         0LL);
                                                                v578 = v692 == 0 ? 0x80004005 : 0;
                                                                if ( v1358 )
                                                                  ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1808913B8)(
                                                                    v1433,
                                                                    v1358);
                                                                if ( !v692 )
                                                                  goto LABEL_862;
                                                                v693 = v1663;
                                                                v1359 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1808913B8)(
                                                                                   v1433,
                                                                                   v1666);
                                                                v694 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_180891418)(
                                                                         v1433,
                                                                         v693,
                                                                         0xFFFFFFFFLL,
                                                                         &v1670,
                                                                         3152,
                                                                         0LL);
                                                                v578 = v694 == 0 ? 0x80004005 : 0;
                                                                if ( v1359 )
                                                                  ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1808913B8)(
                                                                    v1433,
                                                                    v1359);
                                                                if ( !v694 )
                                                                  goto LABEL_862;
                                                                v695 = Sizeb;
                                                                if ( (unsigned int)(Sizeb - 2) <= 1 )
                                                                {
                                                                  v690 = v1670.m128i_i32[2];
                                                                  if ( v1669.m128i_i32[2] > v1670.m128i_i32[2] )
                                                                    v690 = v1669.m128i_i32[2];
                                                                }
                                                                if ( v1660 )
                                                                {
                                                                  off_180891490(
                                                                    (CToastCenterExperienceManager *)&v1669,
                                                                    (struct CSingleViewShellExperience *)(unsigned int)(v690 - v1669.m128i_i32[2]));
                                                                  v696 = (unsigned int)(v690 - v1670.m128i_i32[2]);
                                                                }
                                                                else
                                                                {
                                                                  off_180891490(
                                                                    (CToastCenterExperienceManager *)&v1669,
                                                                    (struct CSingleViewShellExperience *)v1455);
                                                                  v696 = v1455;
                                                                }
                                                                ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_180891490)(
                                                                  &v1670,
                                                                  v696,
                                                                  (unsigned int)(v1408 + v1669.m128i_i32[3]));
                                                                if ( (unsigned int)(Sizeb - 2) <= 1 )
                                                                {
                                                                  *((_QWORD *)&v1686 + 1) = __PAIR64__(
                                                                                              v1670.m128i_u32[3],
                                                                                              v690);
                                                                  v1668 = -5723992;
                                                                }
                                                                else if ( Sizeb == 1 )
                                                                {
                                                                  v1668 = 0xFFFFFF;
                                                                  memset_0(v1718, 0, 0x5CuLL);
                                                                  v578 = 0;
                                                                  v697 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_180891438[0])(
                                                                           0LL,
                                                                           0LL,
                                                                           1027LL);
                                                                  if ( v697 )
                                                                  {
                                                                    v1718[0] = -(int)((__int64 (__fastcall *)(__int64, _QWORD))off_1808913F8)(
                                                                                       11LL,
                                                                                       v1272);
                                                                    v1718[4] = 400;
                                                                    v1719 = 5;
                                                                    StringCchCopyW((char *)v1720, 32LL, (char *)v1416);
                                                                    v699 = ((__int64 (__fastcall *)(_DWORD *))off_180891360[0])(v1718);
                                                                    if ( v699 )
                                                                    {
                                                                      v1667 = v699;
                                                                    }
                                                                    else
                                                                    {
                                                                      v578 = GetLastError();
                                                                      v700 = v578 < 0;
                                                                      if ( v578 > 0 )
                                                                      {
                                                                        v578 = (unsigned __int16)v578 | 0x80070000;
                                                                        v700 = v578 < 0;
                                                                      }
                                                                      if ( !v700 )
                                                                        v578 = -2147467259;
                                                                    }
                                                                    ((void (__fastcall *)(_QWORD, __int64))off_1808914A0[0])(
                                                                      0LL,
                                                                      v697);
                                                                  }
                                                                  else
                                                                  {
                                                                    v578 = GetLastError();
                                                                    v698 = v578 < 0;
                                                                    if ( v578 > 0 )
                                                                    {
                                                                      v578 = (unsigned __int16)v578 | 0x80070000;
                                                                      v698 = v578 < 0;
                                                                    }
                                                                    if ( !v698 )
                                                                    {
LABEL_861:
                                                                      v578 = -2147467259;
LABEL_862:
                                                                      ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808914A0[0])(
                                                                        0LL,
                                                                        v1433);
                                                                      goto LABEL_863;
                                                                    }
                                                                  }
                                                                  if ( v578 < 0 )
                                                                    goto LABEL_862;
                                                                  v1673 = v690;
                                                                  v701 = v1664;
                                                                  v702 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1808913B8)(
                                                                           v1433,
                                                                           v1667);
                                                                  v703 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_180891418)(
                                                                           v1433,
                                                                           v701,
                                                                           0xFFFFFFFFLL,
                                                                           &v1671,
                                                                           1120,
                                                                           0LL);
                                                                  v578 = v703 == 0 ? 0x80004005 : 0;
                                                                  if ( v702 )
                                                                    ((void (__fastcall *)(LPCWSTR, __int64))off_1808913B8)(
                                                                      v1433,
                                                                      v702);
                                                                  if ( !v703 )
                                                                    goto LABEL_862;
                                                                  v704 = v1673 + 24;
                                                                  if ( (int)(v1673 + 24) < 90 )
                                                                    v704 = 90;
                                                                  v1673 = v704;
                                                                  v1674 = 32;
                                                                  v1671 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(
                                                                            v1671,
                                                                            v1272,
                                                                            96LL);
                                                                  v1672 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(
                                                                            v1672,
                                                                            v1272,
                                                                            96LL);
                                                                  v1673 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(
                                                                            v1673,
                                                                            v1272,
                                                                            96LL);
                                                                  v1674 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808913F8)(
                                                                            v1674,
                                                                            v1272,
                                                                            96LL);
                                                                  if ( v1660 )
                                                                  {
                                                                    v705 = v1669.m128i_u32[0];
                                                                    if ( v1669.m128i_i32[0] >= v1670.m128i_i32[0] )
                                                                      v705 = v1670.m128i_u32[0];
                                                                  }
                                                                  else
                                                                  {
                                                                    v706 = v1669.m128i_i32[2];
                                                                    if ( v1669.m128i_i32[2] <= v1670.m128i_i32[2] )
                                                                      v706 = v1670.m128i_i32[2];
                                                                    v705 = v1671 + v706 - v1673;
                                                                  }
                                                                  off_180891490(
                                                                    (CToastCenterExperienceManager *)&v1671,
                                                                    (struct CSingleViewShellExperience *)v705);
                                                                  v695 = Sizeb;
                                                                }
                                                                v1274 = v1660;
                                                                v707 = HIDWORD(v1686);
                                                                v708 = DWORD2(v1686);
                                                                v709 = v695 - 1;
                                                                if ( !v709 )
                                                                {
                                                                  *(_QWORD *)&v1686 = 0LL;
                                                                  goto LABEL_960;
                                                                }
                                                                v710 = v709 - 1;
                                                                if ( v710 )
                                                                {
                                                                  if ( v710 != 1 )
                                                                    goto LABEL_960;
                                                                  v1692 = 0LL;
                                                                  v1693 = 0LL;
                                                                  v1694 = 0LL;
                                                                  v711 = (CToastCenterExperienceManager *)off_180891488[0](0LL, (struct CSingleViewShellExperience *)1);
                                                                  LODWORD(v1692) = 40;
                                                                  if ( !(unsigned int)off_180891448(
                                                                                        v711,
                                                                                        (struct CSingleViewShellExperience *)&v1692) )
                                                                    goto LABEL_960;
                                                                  off_180891480[0](
                                                                    0LL,
                                                                    (struct CSingleViewShellExperience *)((char *)&v1693 + 4));
                                                                  off_180891480[0](
                                                                    0LL,
                                                                    (struct CSingleViewShellExperience *)((char *)&v1693 + 12));
                                                                  v712 = 50 * (HIDWORD(v1693) - v708) / 100;
                                                                  v713 = 50 * (v1694 - v707);
                                                                }
                                                                else
                                                                {
                                                                  v1689 = 0LL;
                                                                  v1690 = 0LL;
                                                                  v1691 = 0LL;
                                                                  v714 = (CToastCenterExperienceManager *)off_180891488[0](0LL, (struct CSingleViewShellExperience *)1);
                                                                  LODWORD(v1689) = 40;
                                                                  if ( !(unsigned int)off_180891448(
                                                                                        v714,
                                                                                        (struct CSingleViewShellExperience *)&v1689) )
                                                                    goto LABEL_960;
                                                                  off_180891480[0](
                                                                    0LL,
                                                                    (struct CSingleViewShellExperience *)((char *)&v1690 + 4));
                                                                  off_180891480[0](
                                                                    0LL,
                                                                    (struct CSingleViewShellExperience *)((char *)&v1690 + 12));
                                                                  if ( v1274 )
                                                                    v712 = DWORD1(v1690) + 5 * HIDWORD(v1690) / 100;
                                                                  else
                                                                    v712 = 95 * (HIDWORD(v1690) - v708) / 100;
                                                                  v713 = 95 * (v1691 - v707);
                                                                }
                                                                LODWORD(v1686) = v712;
                                                                DWORD1(v1686) = v713 / 100;
LABEL_960:
                                                                v578 = 0;
                                                                goto LABEL_862;
                                                              }
                                                              if ( Sizeb != 3 )
                                                                goto LABEL_909;
                                                            }
                                                            v686 = DWORD2(v1621);
                                                            v688 = HIDWORD(v1621);
                                                            goto LABEL_909;
                                                          }
                                                          v1350 = 15;
                                                        }
                                                        v1307 = 11;
                                                        goto LABEL_851;
                                                      }
                                                      v578 = -2147024882;
                                                      v602 = v1415;
                                                    }
                                                    v639 = 0LL;
                                                    goto LABEL_826;
                                                  }
                                                  v578 = GetLastError();
                                                  v589 = v578 < 0;
                                                  if ( v578 > 0 )
                                                  {
                                                    v578 = (unsigned __int16)v578 | 0x80070000;
                                                    v589 = v578 < 0;
                                                  }
                                                  if ( !v589 )
                                                    v578 = -2147467259;
                                                }
                                                else
                                                {
                                                  v578 = -2147024882;
                                                }
                                                v576 = 0;
                                                goto LABEL_743;
                                              }
                                              v519 = dword_18089D72C;
LABEL_727:
                                              dword_18089D72C = v519 + 1;
                                              goto LABEL_728;
                                            }
                                            v462 = dword_18089D72C;
LABEL_679:
                                            dword_18089D72C = v462 + 1;
                                            goto LABEL_680;
                                          }
                                          v1233 = 0;
                                          v184 = 0LL;
                                          if ( v181 )
                                          {
                                            do
                                              v183 ^= v180[v184++];
                                            while ( v184 < v181 );
                                            v1233 = v183;
                                          }
                                          v1675 = 0xC81ECB17B1B54A58uLL;
                                          v185 = v180;
                                          v1262 = (SIZE_T)v182;
                                          v186 = 0;
                                          v187 = -1;
                                          v1477 = 0;
                                          v1442 = 0;
                                          v188 = v181 & 7;
                                          if ( v188 )
                                          {
                                            v1477 = 0;
                                            v189 = 0;
                                            v190 = 0;
                                            v191 = 56;
                                            v192 = v1385;
                                            do
                                            {
                                              v193 = *v185;
                                              if ( v190 >= 4 )
                                              {
                                                v194 = (v193 << v191) | v1477;
                                                v1477 = v194;
                                              }
                                              else
                                              {
                                                v189 |= v193 << (v191 - 32);
                                                v194 = v1477;
                                              }
                                              ++v185;
                                              ++v190;
                                              v191 -= 8;
                                            }
                                            while ( (int)v190 < (int)v188 );
                                            v186 = v189 ^ 0xB17A307A;
                                            v195 = v194 ^ 0x42F6B18D;
                                            v196 = v189 ^ 0xB17A307A;
                                            v197 = v194 ^ 0x42F6B18D;
                                            v198 = 0;
                                            v199 = (char *)v1262;
                                            do
                                            {
                                              v1385 = v192;
                                              v1477 = v194;
                                              if ( v198 >= 4 )
                                              {
                                                v197 = (v197 << 8) | HIBYTE(v197);
                                                v200 = v197;
                                              }
                                              else
                                              {
                                                v196 = (v196 << 8) | HIBYTE(v196);
                                                v200 = v196;
                                              }
                                              *v199 = v200;
                                              ++v198;
                                              ++v199;
                                              v192 = v1385;
                                              v194 = v1477;
                                            }
                                            while ( v198 < (int)v188 );
                                            v1442 = v189;
                                            v1466 = v180;
                                            lpModuleNamea = v103;
                                            v1325 = (SIZE_T)v101;
                                            v182 = v199;
                                            v97 = v1469;
                                            if ( v188 <= 4 )
                                            {
                                              v187 = 0;
                                              if ( v188 < 4 )
                                                v186 = v186 >> (8 * (4 - v188)) << (8 * (4 - v188));
                                            }
                                            else
                                            {
                                              v187 = v195 >> (8 * (8 - v188)) << (8 * (8 - v188));
                                            }
                                          }
                                          if ( (unsigned __int64)v1406 >> 3 )
                                          {
                                            v201 = HIDWORD(v1675);
                                            v1450 = WORD1(v1675);
                                            v1299 = WORD2(v1675);
                                            v1344 = HIWORD(v1675);
                                            lpMem = v182 + 7;
                                            v202 = v185 + 2;
                                            v203 = v1442;
                                            v204 = v1477;
                                            v205 = (unsigned __int64)v1406 >> 3;
                                            v206 = HIDWORD(v1675) ^ 0xB1B54A58;
                                            do
                                            {
                                              v207 = v202[1] | ((*v202 | ((*(v202 - 1) | (*(v202 - 2) << 8)) << 8)) << 8);
                                              v208 = v202[5] | ((v202[4] | ((v202[3] | (v202[2] << 8)) << 8)) << 8);
                                              v209 = v208 ^ v187;
                                              v210 = v201 ^ (v209 - 19032) ^ v207 ^ v186;
                                              v211 = (WORD1(v1675) * __ROR4__(v201 ^ v210, 15) + __ROR4__(v210, 7)) ^ v209;
                                              v212 = (v1299 * __ROR4__(v211 - 1313519016, 9) - __ROR4__(v211, 10)) ^ v210;
                                              v213 = (v1344 * __ROR4__(v1299 ^ v212, 28) + __ROR4__(v212, 27)) ^ v211;
                                              v214 = (v201 - (v213 ^ 0xB1B54A58)) ^ v212;
                                              v215 = (WORD1(v1675) * (v214 - 19032) - (v214 >> 6)) ^ v213;
                                              v216 = (19032 * (v1299 ^ __ROR4__(v215, 15))) ^ v214;
                                              v217 = (v1299 * (HIWORD(v1675) + __ROR4__(~v216, 3))) ^ v215;
                                              v218 = (v217 - 19032 - v201) ^ v216;
                                              v219 = (v1450 * (v1344 ^ v218)) ^ __ROR4__(v218, 10) ^ v217;
                                              v220 = (v1299 * __ROR4__(v219 ^ 0x4A58, 26)) ^ __ROR4__(v219, 3) ^ v218;
                                              v221 = (19032 * (__ROR4__(v220, 15) - HIWORD(v1675))) ^ v219;
                                              v222 = (v221 >> 15) ^ (19032
                                                                   * ((8 * (v221 - v1299)) | ((v221 - v1299) >> 29))) ^ (v221 >> 1) ^ (19032 * (HIWORD(v1675) ^ v221)) ^ v220;
                                              v223 = (WORD1(v1675) * (v222 - v1299) - (v222 >> 13)) ^ v221;
                                              v224 = (v1299 * __ROR4__(-1313519016 - v223, 9)) ^ __ROR4__(v223, 11) ^ v222;
                                              v225 = (v224 + 1313519016 - HIWORD(v1675)) ^ v223;
                                              v226 = (19032 * (v1450 ^ v225) - __ROR4__(v225, 7)) ^ v224;
                                              v227 = (v1450 * __ROR4__(HIWORD(v1675) ^ v226, 28) - __ROR4__(v226, 16)) ^ v225;
                                              v228 = (v1299 * __ROR4__(-1313519016 - v227, 10) + __ROR4__(v227, 4)) ^ v226;
                                              v229 = (HIWORD(v1675) * __ROR4__(v228 + 1313519016, 4)) ^ __ROR4__(v228, 9) ^ v227;
                                              v230 = (19032 * __ROR4__(v201 ^ v229, 24) - __ROR4__(v229, 30)) ^ v228;
                                              v231 = (__ROR4__(v201 - v230, 11) * WORD1(v1675) - __ROR4__(v230, 12)) ^ v229;
                                              v232 = (v231 >> 8) ^ (v1299 * (WORD1(v1675) ^ v231)) ^ v230;
                                              v233 = v232 ^ v206 ^ v231;
                                              v186 = v203 ^ v232;
                                              v187 = v204 ^ v233;
                                              *(lpMem - 4) = v186;
                                              *lpMem = v187;
                                              *(lpMem - 5) = BYTE1(v186);
                                              *(lpMem - 1) = BYTE1(v187);
                                              *(lpMem - 6) = (unsigned __int16)(v186 >> 8) >> 8;
                                              *(lpMem - 2) = (unsigned __int16)(v187 >> 8) >> 8;
                                              *(lpMem - 7) = __ROR4__(
                                                               (((v186 >> 8) | (v186 << 24)) >> 8) | (((v186 >> 8) | (v186 << 24)) << 24),
                                                               8);
                                              *(lpMem - 3) = __ROR4__(
                                                               (((v187 >> 8) | (v187 << 24)) >> 8) | (((v187 >> 8) | (v187 << 24)) << 24),
                                                               8);
                                              v203 = v207;
                                              v204 = v208;
                                              lpMem += 8;
                                              --v205;
                                              v201 = HIDWORD(v1675);
                                              v202 += 8;
                                            }
                                            while ( v205 );
                                            v101 = (_QWORD *)v1325;
                                            v103 = (WCHAR *)lpModuleNamea;
                                            v97 = v1469;
                                            v180 = (unsigned __int8 *)v1466;
                                          }
                                          *(_QWORD *)((char *)v1467 + v1406) = v1233;
                                          v234 = GetProcessHeap();
                                          v235 = HeapAlloc(v234, 8u, 0x30uLL);
                                          if ( v235 )
                                          {
                                            *(_DWORD *)v235 = v1472;
                                            v236 = GetProcessHeap();
                                            v237 = HeapAlloc(v236, 8u, (unsigned int)v1472);
                                            if ( v237 )
                                            {
                                              *((_QWORD *)v235 + 1) = v237;
                                              memcpy_0(v237, v1467, (unsigned int)v1472);
                                              v1466 = v180;
                                              lpMema = v180;
                                              *((_DWORD *)v235 + 4) = 160;
                                              v238 = GetProcessHeap();
                                              v239 = HeapAlloc(v238, 8u, 0xA0uLL);
                                              if ( v239 )
                                              {
                                                *((_QWORD *)v235 + 3) = v239;
                                                v1466 = v180;
                                                v240 = (_OWORD *)*((_QWORD *)v235 + 3);
                                                *v240 = xmmword_180897EF0[0];
                                                v240[1] = xmmword_180897EF0[1];
                                                v240[2] = xmmword_180897EF0[2];
                                                v240[3] = xmmword_180897EF0[3];
                                                v240[4] = xmmword_180897EF0[4];
                                                v240[5] = xmmword_180897EF0[5];
                                                v240[6] = xmmword_180897EF0[6];
                                                v240[7] = xmmword_180897EF0[7];
                                                v240[8] = xmmword_180897EF0[8];
                                                v2 = xmmword_180897EF0[9];
                                                v240[9] = v2;
                                                *((_DWORD *)v235 + 8) = 8;
                                                v241 = GetProcessHeap();
                                                v242 = HeapAlloc(v241, 8u, 8uLL);
                                                v243 = 0;
                                                if ( v242 )
                                                {
                                                  *((_QWORD *)v235 + 5) = v242;
                                                  **((_QWORD **)v235 + 5) = qword_180897EE0;
LABEL_312:
                                                  v1471 = v235;
                                                  v248 = GetProcessHeap();
                                                  HeapFree(v248, 0, v1467);
                                                  v1472 = (SIZE_T)v235;
                                                  v99 = v243 | 0x10000000;
                                                  v1477 = v99;
                                                  if ( v99 >= 0 )
                                                  {
                                                    v1511 = 0;
                                                    v1512 = 4;
                                                    v250 = RtlUIntAdd(4u, *(_DWORD *)v235, (int *)&v1512);
                                                    if ( v250 >= 0 )
                                                    {
                                                      v250 = RtlUIntAdd(v1512, v249, (int *)&v1512);
                                                      if ( v250 >= 0 )
                                                      {
                                                        v250 = RtlUIntAdd(v1512, *((_DWORD *)v235 + 4), (int *)&v1512);
                                                        if ( v250 >= 0 )
                                                        {
                                                          v250 = RtlUIntAdd(v1512, v251, (int *)&v1512);
                                                          if ( v250 >= 0 )
                                                          {
                                                            v250 = RtlUIntAdd(
                                                                     v1512,
                                                                     *((_DWORD *)v235 + 8),
                                                                     (int *)&v1512);
                                                            if ( v250 >= 0 )
                                                            {
                                                              v1511 = v1512;
                                                              v252 = v1512;
                                                              v253 = GetProcessHeap();
                                                              v254 = (WCHAR *)HeapAlloc(v253, 8u, v252);
                                                              v1353 = v254;
                                                              if ( !v254 )
                                                              {
                                                                v99 = -805306345;
                                                                goto LABEL_333;
                                                              }
                                                              v1561 = v254;
                                                              v255 = (const void **)v1471;
                                                              *(_DWORD *)v254 = *(_DWORD *)v1471;
                                                              v250 = RtlULongLongAdd(
                                                                       (unsigned __int64)v254,
                                                                       4LL,
                                                                       (__int64 *)&v1561);
                                                              v1263 = v256;
                                                              if ( v250 < 0 )
                                                                goto LABEL_326;
                                                              memcpy_0(v1561, v255[1], *(unsigned int *)v255);
                                                              v250 = RtlULongLongAdd(
                                                                       (unsigned __int64)v1561,
                                                                       *(unsigned int *)v255,
                                                                       (__int64 *)&v1561);
                                                              v256 = v1353;
                                                              v1263 = v1353;
                                                              if ( v250 < 0 )
                                                                goto LABEL_326;
                                                              v257 = v1561;
                                                              *(_DWORD *)v1561 = *((_DWORD *)v255 + 4);
                                                              v250 = RtlULongLongAdd(
                                                                       (unsigned __int64)v257,
                                                                       4LL,
                                                                       (__int64 *)&v1561);
                                                              v256 = v258;
                                                              v1263 = v258;
                                                              if ( v250 < 0 )
                                                                goto LABEL_326;
                                                              memcpy_0(v1561, v255[3], *((unsigned int *)v255 + 4));
                                                              v250 = RtlULongLongAdd(
                                                                       (unsigned __int64)v1561,
                                                                       *((unsigned int *)v255 + 4),
                                                                       (__int64 *)&v1561);
                                                              v256 = v1353;
                                                              v1263 = v1353;
                                                              if ( v250 < 0 )
                                                                goto LABEL_326;
                                                              v259 = v1561;
                                                              *(_DWORD *)v1561 = *((_DWORD *)v255 + 8);
                                                              v250 = RtlULongLongAdd(
                                                                       (unsigned __int64)v259,
                                                                       4LL,
                                                                       (__int64 *)&v1561);
                                                              v256 = v260;
                                                              v1263 = v260;
                                                              if ( v250 < 0
                                                                || (memcpy_0(
                                                                      v1561,
                                                                      v255[5],
                                                                      *((unsigned int *)v255 + 8)),
                                                                    v250 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1561,
                                                                             *((unsigned int *)v255 + 8),
                                                                             (__int64 *)&v1561),
                                                                    v256 = v1353,
                                                                    v1263 = v1353,
                                                                    v250 < 0) )
                                                              {
LABEL_326:
                                                                if ( v256 )
                                                                {
                                                                  v261 = GetProcessHeap();
                                                                  HeapFree(v261, 0, v1263);
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v1470 = v1353;
                                                                Size = v1511;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    v99 = v250 | 0x10000000;
                                                    v1477 = v99;
                                                    if ( v99 >= 0 )
                                                    {
                                                      v1513 = 8;
                                                      v262 = RtlUIntAdd(8u, v1385, (int *)&v1513);
                                                      v99 = v262 | 0x10000000;
                                                      v1477 = v262 | 0x10000000;
                                                      if ( v262 < 0 )
                                                      {
                                                        v266 = 0LL;
                                                        goto LABEL_335;
                                                      }
                                                      v1514 = 0;
                                                      v265 = (v1513 + 7) & 0xFFFFFFF8;
                                                      if ( v265 < v1513 )
                                                      {
                                                        v99 = -1073741675;
LABEL_333:
                                                        v1477 = v99;
                                                        goto LABEL_334;
                                                      }
                                                      v1514 = (v1513 + 7) & 0xFFFFFFF8;
                                                      v1470 = v263;
                                                      v1466 = v264;
                                                      v290 = (void *)v1472;
                                                      v1471 = (LPVOID)v1472;
                                                      v99 = RtlUIntAdd(v265, 8, (int *)&v1514);
                                                      v1477 = v99;
                                                      if ( v99 < 0 )
                                                      {
                                                        v267 = (SIZE_T)v292;
                                                        v266 = 0LL;
                                                        goto LABEL_336;
                                                      }
                                                      v1471 = v290;
                                                      v293 = v292;
                                                      v1466 = v292;
                                                      v1470 = v291;
                                                      v266 = 0LL;
                                                      if ( !Src[1] )
                                                      {
LABEL_382:
                                                        v99 = -1073741811;
LABEL_383:
                                                        v1477 = v99;
                                                        goto LABEL_335;
                                                      }
                                                      v1471 = v290;
                                                      v1470 = v291;
                                                      if ( LODWORD(Src[0]) <= 1 )
                                                      {
                                                        v99 = -1073741811;
                                                        v1477 = -1073741811;
                                                        v267 = (SIZE_T)v1466;
                                                        goto LABEL_336;
                                                      }
                                                      v294 = (unsigned int *)Src[1];
                                                      v1562 = (unsigned int *)Src[1];
                                                      v1326 = (SIZE_T)v101;
                                                      lpModuleNameb = v103;
                                                      v1466 = v293;
                                                      do
                                                      {
                                                        v295 = *v294;
                                                        v99 = RtlULongLongAdd(
                                                                (unsigned __int64)v294,
                                                                4LL,
                                                                (__int64 *)&v1562);
                                                        v1477 = v99;
                                                        if ( v99 < 0 )
                                                          goto LABEL_334;
                                                        v99 = RtlULongLongAdd(
                                                                (unsigned __int64)v1562,
                                                                v295,
                                                                (__int64 *)&v1562);
                                                        v1477 = v99;
                                                        if ( v99 < 0 )
                                                          goto LABEL_334;
                                                        v294 = v1562;
                                                      }
                                                      while ( v296 == -1 );
                                                      v1264 = *v1562;
                                                      v99 = RtlULongLongAdd(
                                                              (unsigned __int64)v1562,
                                                              4LL,
                                                              (__int64 *)&v1562);
                                                      v1477 = v99;
                                                      v266 = 0LL;
                                                      if ( v99 < 0 )
                                                        goto LABEL_335;
                                                      v1470 = v297;
                                                      if ( !Src[1] )
                                                        goto LABEL_382;
                                                      v1470 = v297;
                                                      if ( LODWORD(Src[0]) <= 2 )
                                                        goto LABEL_382;
                                                      v298 = Src[1];
                                                      v1563 = Src[1];
                                                      for ( kk = 0; kk < 2; ++kk )
                                                      {
                                                        v99 = RtlULongLongAdd(
                                                                (unsigned __int64)v298,
                                                                4LL,
                                                                (__int64 *)&v1563);
                                                        v1477 = v99;
                                                        if ( v99 < 0 )
                                                          goto LABEL_334;
                                                        v99 = RtlULongLongAdd(
                                                                (unsigned __int64)v1563,
                                                                v300,
                                                                (__int64 *)&v1563);
                                                        v1477 = v99;
                                                        v266 = 0LL;
                                                        if ( v99 < 0 )
                                                          goto LABEL_335;
                                                        v298 = v1563;
                                                      }
                                                      v301 = *v1563;
                                                      v99 = RtlULongLongAdd(
                                                              (unsigned __int64)v1563,
                                                              4LL,
                                                              (__int64 *)&v1563);
                                                      v1477 = v99;
                                                      if ( v99 < 0 )
                                                        goto LABEL_335;
                                                      v1470 = v302;
                                                      v1515 = 4;
                                                      v99 = RtlUIntAdd((int)v266 + 4, v1514, (int *)&v1515);
                                                      v1477 = v99;
                                                      if ( v99 < 0 )
                                                        goto LABEL_335;
                                                      v99 = RtlUIntAdd(v1515, v303, (int *)&v1515);
                                                      v1477 = v99;
                                                      if ( v99 < 0 )
                                                        goto LABEL_335;
                                                      v99 = RtlUIntAdd(v1515, v1264, (int *)&v1515);
                                                      v1477 = v99;
                                                      if ( v99 < 0 )
                                                        goto LABEL_335;
                                                      v99 = RtlUIntAdd(v1515, (int)v266 + 4, (int *)&v1515);
                                                      v1477 = v99;
                                                      if ( v99 < 0 )
                                                        goto LABEL_335;
                                                      v99 = RtlUIntAdd(v1515, v301, (int *)&v1515);
                                                      v1477 = v99;
                                                      if ( v99 < 0 )
                                                        goto LABEL_335;
                                                      v1470 = v304;
                                                      if ( v1515 > 0x400000 )
                                                      {
                                                        v99 = -2147418113;
                                                        goto LABEL_383;
                                                      }
                                                      v1462 = v1515;
                                                      v305 = v1515;
                                                      v306 = GetProcessHeap();
                                                      v307 = (WCHAR *)HeapAlloc(v306, 8u, v305);
                                                      v308 = 0LL;
                                                      v266 = 0LL;
                                                      if ( v307 )
                                                        v308 = v307;
                                                      v1431 = v308;
                                                      v99 = v307 != 0LL ? 0x10000000 : -805306345;
                                                      v1477 = v99;
                                                      if ( !v307 )
                                                        goto LABEL_335;
                                                      v1630 = 0LL;
                                                      v1631 = 0LL;
                                                      phModule = 0LL;
                                                      if ( !v1470 || !v308 )
                                                      {
                                                        v99 = -2147024809;
                                                        goto LABEL_383;
                                                      }
                                                      *(_QWORD *)&v1630 = v1470;
                                                      LODWORD(v1631) = Size;
                                                      *((_QWORD *)&v1630 + 1) = v308;
                                                      *(_QWORD *)((char *)&v1631 + 4) = v1462;
                                                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                                        && (v310 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                                      {
                                                        v311 = ((__int64 (__fastcall *)(__int64, __int128 *))v310)(
                                                                 134LL,
                                                                 &v1630);
                                                        v99 = v311 | 0x10000000;
                                                        v1477 = v311 | 0x10000000;
                                                        if ( v311 >= 0 )
                                                        {
                                                          v312 = DWORD1(v1631);
                                                          v266 = 0LL;
                                                          goto LABEL_428;
                                                        }
                                                        v266 = 0LL;
                                                      }
                                                      else
                                                      {
                                                        v309 = GetLastError();
                                                        v266 = 0LL;
                                                        v1477 = v309;
                                                        v99 = v309;
                                                        if ( v309 > 0 )
                                                        {
                                                          v99 = (unsigned __int16)v309 | 0x80070000;
                                                          v1477 = v99;
                                                        }
                                                        if ( v99 >= 0 )
                                                        {
                                                          v99 = -2147467259;
                                                          v1477 = -2147467259;
                                                        }
                                                      }
                                                      if ( v99 == -805306333 )
                                                      {
                                                        v99 = -2147024774;
                                                        goto LABEL_383;
                                                      }
                                                      if ( v99 < 0 )
                                                        goto LABEL_335;
                                                      v312 = v1462;
LABEL_428:
                                                      lpMeml = 0LL;
                                                      v1516 = 0;
                                                      v1565 = v308;
                                                      if ( v312 < 4 )
                                                      {
LABEL_429:
                                                        v99 = -805306306;
                                                        goto LABEL_383;
                                                      }
                                                      v1265 = *(_DWORD *)v308;
                                                      v313 = RtlULongLongAdd(
                                                               (unsigned __int64)v308,
                                                               4LL,
                                                               (__int64 *)&v1565);
                                                      if ( v313 >= 0 )
                                                      {
                                                        v313 = RtlUIntAdd(0, 4, (int *)&v1516);
                                                        if ( v313 < 0 )
                                                        {
                                                          v342 = v314;
                                                          goto LABEL_486;
                                                        }
                                                        if ( v316 - v1516 < v315 )
                                                          goto LABEL_429;
                                                        v1309 = v1565;
                                                        v313 = RtlULongLongAdd(
                                                                 (unsigned __int64)v1565,
                                                                 v315,
                                                                 (__int64 *)&v1565);
                                                        if ( v313 >= 0 )
                                                        {
                                                          v313 = RtlUIntAdd(v1516, v317, (int *)&v1516);
                                                          if ( v313 >= 0 )
                                                          {
                                                            if ( v318 - v1516 < 4 )
                                                              goto LABEL_429;
                                                            v319 = *(_DWORD *)v1565;
                                                            v1345 = *(_DWORD *)v1565;
                                                            v313 = RtlULongLongAdd(
                                                                     (unsigned __int64)v1565,
                                                                     4LL,
                                                                     (__int64 *)&v1565);
                                                            if ( v313 >= 0 )
                                                            {
                                                              v313 = RtlUIntAdd(v1516, 4, (int *)&v1516);
                                                              if ( v313 >= 0 )
                                                              {
                                                                if ( v320 - v1516 < v319 )
                                                                  goto LABEL_429;
                                                                v1467 = v1565;
                                                                v313 = RtlULongLongAdd(
                                                                         (unsigned __int64)v1565,
                                                                         v319,
                                                                         (__int64 *)&v1565);
                                                                if ( v313 >= 0 )
                                                                {
                                                                  v313 = RtlUIntAdd(v1516, v319, (int *)&v1516);
                                                                  if ( v313 >= 0 )
                                                                  {
                                                                    if ( v321 - v1516 < 4 )
                                                                      goto LABEL_429;
                                                                    v1300 = *(_DWORD *)v1565;
                                                                    v313 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1565,
                                                                             4LL,
                                                                             (__int64 *)&v1565);
                                                                    if ( v313 >= 0 )
                                                                    {
                                                                      v313 = RtlUIntAdd(v1516, 4, (int *)&v1516);
                                                                      if ( v313 >= 0 )
                                                                      {
                                                                        if ( v323 - v1516 < v322 )
                                                                        {
LABEL_445:
                                                                          v99 = -805306306;
                                                                          goto LABEL_333;
                                                                        }
                                                                        v313 = RtlUIntAdd(v1516, v322, (int *)&v1516);
                                                                        if ( v313 >= 0 )
                                                                        {
                                                                          if ( v326 != v1516
                                                                            || v324 + v325 + v319 + 12LL != v326 )
                                                                          {
                                                                            goto LABEL_445;
                                                                          }
                                                                          v327 = GetProcessHeap();
                                                                          v328 = (SIZE_T)HeapAlloc(v327, 8u, 0x30uLL);
                                                                          v1472 = v328;
                                                                          if ( !v328 )
                                                                          {
                                                                            v313 = -1073741801;
                                                                            v331 = v1471;
LABEL_472:
                                                                            v341 = 0LL;
LABEL_473:
                                                                            if ( v313 < 0 )
                                                                            {
                                                                              v342 = 0LL;
                                                                              v1468 = 0LL;
                                                                              if ( v341 )
                                                                              {
                                                                                v1313 = (void *)*((_QWORD *)v341 + 1);
                                                                                if ( v1313 )
                                                                                {
                                                                                  v343 = GetProcessHeap();
                                                                                  HeapFree(v343, 0, v1313);
                                                                                  v341 = lpMeml;
                                                                                  *((_QWORD *)lpMeml + 1) = 0LL;
                                                                                }
                                                                                v1314 = (void *)*((_QWORD *)v341 + 3);
                                                                                if ( v1314 )
                                                                                {
                                                                                  v344 = GetProcessHeap();
                                                                                  HeapFree(v344, 0, v1314);
                                                                                  v341 = lpMeml;
                                                                                  *((_QWORD *)lpMeml + 3) = 0LL;
                                                                                }
                                                                                v1315 = (void *)*((_QWORD *)v341 + 5);
                                                                                if ( v1315 )
                                                                                {
                                                                                  v345 = GetProcessHeap();
                                                                                  HeapFree(v345, 0, v1315);
                                                                                  *((_QWORD *)lpMeml + 5) = 0LL;
                                                                                }
                                                                                v346 = GetProcessHeap();
                                                                                HeapFree(v346, 0, lpMeml);
                                                                                v342 = 0LL;
                                                                                v1468 = 0LL;
                                                                              }
                                                                            }
                                                                            else
                                                                            {
                                                                              v342 = v341;
                                                                              v1468 = v341;
                                                                            }
LABEL_487:
                                                                            v99 = v313 | 0x10000000;
                                                                            v1477 = v99;
                                                                            if ( v99 < 0 )
                                                                              goto LABEL_334;
                                                                            if ( !v342
                                                                              || (lpMemm = (unsigned __int8 *)*((_QWORD *)v342 + 1)) == 0LL
                                                                              || !*(_DWORD *)v342 )
                                                                            {
                                                                              v99 = -805306355;
                                                                              goto LABEL_333;
                                                                            }
                                                                            v347 = *(_DWORD *)v342 - 8;
                                                                            v1316 = *(unsigned int *)v342 - 8LL;
                                                                            v348 = (char *)MemoryAlloc(v1316);
                                                                            v349 = v348;
                                                                            v1467 = v348;
                                                                            v266 = 0LL;
                                                                            if ( !v348 )
                                                                              goto LABEL_518;
                                                                            v350 = 0;
                                                                            v1676 = 0x7F1137FAB69605ELL;
                                                                            v351 = lpMemm;
                                                                            v1472 = (SIZE_T)lpMemm;
                                                                            v1354 = (WCHAR *)v348;
                                                                            v352 = v347 & 7;
                                                                            v353 = v1468;
                                                                            if ( (v347 & 7) != 0 )
                                                                            {
                                                                              v1346 = 0;
                                                                              v1301 = 0;
                                                                              v354 = 56;
                                                                              v1451 = 56;
                                                                              v355 = v1466;
                                                                              v356 = 0;
                                                                              while ( 1 )
                                                                              {
                                                                                v357 = *v351;
                                                                                if ( v1301 >= 4 )
                                                                                {
                                                                                  v356 |= v357 << v354;
                                                                                  v358 = v1346;
                                                                                }
                                                                                else
                                                                                {
                                                                                  v358 = (v357 << (v354 - 32)) | v1346;
                                                                                  v1346 = v358;
                                                                                }
                                                                                ++v351;
                                                                                ++v1301;
                                                                                v1451 -= 8;
                                                                                if ( (int)v1301 >= v352 )
                                                                                  break;
                                                                                v354 = v1451;
                                                                              }
                                                                              v1472 = (SIZE_T)v351;
                                                                              v359 = v358 ^ 0x92F65A5;
                                                                              v360 = v356;
                                                                              v361 = v356 ^ 0x699A899C;
                                                                              v362 = v358 ^ 0x92F65A5;
                                                                              v1266 = v356 ^ 0x699A899C;
                                                                              v1302 = 0;
                                                                              v363 = v1472;
                                                                              do
                                                                              {
                                                                                v1466 = v355;
                                                                                if ( v1302 >= 4 )
                                                                                {
                                                                                  v364 = (v1266 << 8) | HIBYTE(v1266);
                                                                                  v1266 = v364;
                                                                                }
                                                                                else
                                                                                {
                                                                                  v362 = (v362 << 8) | HIBYTE(v362);
                                                                                  LOBYTE(v364) = v362;
                                                                                }
                                                                                *(_BYTE *)v1354 = v364;
                                                                                ++v1302;
                                                                                v365 = (char *)v1354 + 1;
                                                                                v1354 = (WCHAR *)((char *)v1354 + 1);
                                                                                v97 = v1469;
                                                                                v355 = v1466;
                                                                              }
                                                                              while ( v1302 < v352 );
                                                                              v1267 = v360;
                                                                              v1472 = v363;
                                                                              v1468 = v353;
                                                                              v1471 = v331;
                                                                              lpModuleNameb = v103;
                                                                              v1326 = (SIZE_T)v101;
                                                                              v348 = v365;
                                                                              v350 = 0;
                                                                              v349 = v1467;
                                                                              v366 = v1346;
                                                                              if ( (unsigned int)v352 <= 4 )
                                                                              {
                                                                                v367 = 0;
                                                                                if ( (unsigned int)v352 < 4 )
                                                                                  v359 = v359 >> (8 * (4 - v352)) << (8 * (4 - v352));
                                                                              }
                                                                              else
                                                                              {
                                                                                v367 = v361 >> (8 * (8 - v352)) << (8 * (8 - v352));
                                                                              }
                                                                            }
                                                                            else
                                                                            {
                                                                              v366 = 0;
                                                                              v1267 = -1;
                                                                              v367 = 0;
                                                                              v359 = 0;
                                                                            }
                                                                            if ( v1316 >> 3 )
                                                                            {
                                                                              v1303 = WORD2(v1676);
                                                                              v1452 = WORD1(v1676);
                                                                              v1407 = HIWORD(v1676);
                                                                              v368 = v348 + 7;
                                                                              v369 = (unsigned __int8 *)(v1472 + 2);
                                                                              v370 = v1267;
                                                                              v371 = v1316 >> 3;
                                                                              v372 = HIDWORD(v1676);
                                                                              v373 = HIDWORD(v1676) ^ 0xAB69605E;
                                                                              do
                                                                              {
                                                                                v374 = v369[1] | ((*v369 | ((*(v369 - 1) | (*(v369 - 2) << 8)) << 8)) << 8);
                                                                                v375 = v369[5] | ((v369[4] | ((v369[3] | (v369[2] << 8)) << 8)) << 8);
                                                                                v376 = v374 ^ v359;
                                                                                v369 += 8;
                                                                                v377 = v373 ^ v376 ^ v375 ^ v367;
                                                                                v378 = (v1303
                                                                                      * __ROR4__(v377 + 1419157410, 27)
                                                                                      + __ROR4__(v377, 22)) ^ v376;
                                                                                v379 = (v1452 * __ROR4__(v378 + v372, 9)
                                                                                      - __ROR4__(v378, 30)) ^ v377;
                                                                                v380 = (24670 * (v379 - v1303)
                                                                                      - (v379 >> 13)) ^ v378;
                                                                                v381 = (v1407
                                                                                      * __ROR4__(
                                                                                          WORD1(v1676) ^ v380,
                                                                                          26)
                                                                                      - __ROR4__(v380, 30)) ^ v379;
                                                                                v382 = (v372 - (v381 ^ 0xAB69605E)) ^ v380;
                                                                                v383 = (v1452 * (v1303 ^ v382)) ^ __ROR4__(v382, 6) ^ v381;
                                                                                v384 = (24670
                                                                                      * __ROR4__(v383 + v372, 15)
                                                                                      + __ROR4__(v383, 30)) ^ v382;
                                                                                v385 = (v1407
                                                                                      * __ROR4__(v384 + 1419157410, 14)
                                                                                      - __ROR4__(v384, 24)) ^ v383;
                                                                                v386 = (v1303
                                                                                      * __ROR4__(v385 ^ 0xAB69605E, 12)) ^ __ROR4__(v385, 10) ^ v384;
                                                                                v387 = (v386 >> 10) ^ (WORD1(v1676) * (HIWORD(v1676) ^ v386)) ^ v385;
                                                                                v388 = (HIWORD(v1676)
                                                                                      * (__ROR4__(~v387, 5) + 24670)) ^ v386;
                                                                                v389 = (v388 - HIWORD(v1676)) ^ 0xAB69605E ^ v387;
                                                                                v390 = ((v389 >> 2)
                                                                                      + v1303
                                                                                      * __ROR4__(
                                                                                          HIWORD(v1676) ^ v389,
                                                                                          30)) ^ v388;
                                                                                v391 = (v1452 * __ROR4__(v390 - v372, 6)
                                                                                      + __ROR4__(v390, 25)) ^ v389;
                                                                                v392 = (24670 * (v1303 ^ v391)
                                                                                      + __ROR4__(v391, 9)) ^ v390;
                                                                                v393 = (v1407
                                                                                      * __ROR4__(
                                                                                          WORD1(v1676) ^ v392,
                                                                                          27)
                                                                                      + __ROR4__(v392, 25)) ^ v391;
                                                                                v394 = v372 ^ v393 ^ 0xAB69605E ^ v392;
                                                                                v395 = (v1303
                                                                                      * (__ROR4__(v394, 3) - WORD1(v1676))) ^ v393;
                                                                                v396 = (24670 * __ROR4__(v395 - v372, 1)
                                                                                      - __ROR4__(v395, 6)) ^ v394;
                                                                                v397 = (v1407
                                                                                      * __ROR4__(v396 - 1419157410, 29)
                                                                                      + __ROR4__(v396, 18)) ^ v395;
                                                                                v398 = (v1303
                                                                                      * __ROR4__(v397 - 1419157410, 17)
                                                                                      - __ROR4__(v397, 14)) ^ v396;
                                                                                v399 = (v398 >> 3) ^ (WORD1(v1676) * (v398 ^ 0x605E)) ^ v397;
                                                                                v359 = (24670 * __ROR4__(
                                                                                                  v372 ^ v399,
                                                                                                  28)) ^ __ROR4__(v399, 30) ^ v366 ^ v398;
                                                                                *(v368 - 4) = v359;
                                                                                *v368 = v370 ^ v399;
                                                                                *(v368 - 5) = BYTE1(v359);
                                                                                *(v368 - 1) = (unsigned __int16)(v370 ^ v399) >> 8;
                                                                                *(v368 - 6) = (unsigned __int16)(v359 >> 8) >> 8;
                                                                                *(v368 - 2) = (unsigned __int16)((v370 ^ (unsigned int)v399) >> 8) >> 8;
                                                                                *(v368 - 7) = __ROR4__(
                                                                                                (((v359 >> 8) | (v359 << 24)) >> 8) | (((v359 >> 8) | (v359 << 24)) << 24),
                                                                                                8);
                                                                                *(v368 - 3) = __ROR4__(
                                                                                                ((((v370 ^ (unsigned int)v399) >> 8) | ((v370 ^ v399) << 24)) >> 8) | ((((v370 ^ (unsigned int)v399) >> 8) | ((v370 ^ v399) << 24)) << 24),
                                                                                                8);
                                                                                v367 = v370 ^ v399;
                                                                                v366 = v374;
                                                                                v370 = v375;
                                                                                v368 += 8;
                                                                                --v371;
                                                                              }
                                                                              while ( v371 );
                                                                              v350 = 0;
                                                                              v101 = (_QWORD *)v1326;
                                                                              v103 = (WCHAR *)lpModuleNameb;
                                                                              v97 = v1469;
                                                                              v353 = v1468;
                                                                              v349 = v1467;
                                                                            }
                                                                            for ( mm = 0LL; mm < v1316; ++mm )
                                                                              v350 ^= *((_BYTE *)v349 + mm);
                                                                            v1467 = v1470;
                                                                            v1472 = (SIZE_T)v1466;
                                                                            v401 = v1471;
                                                                            v1327 = v1471;
                                                                            v1468 = v353;
                                                                            if ( v350 != *(_QWORD *)&lpMemm[v1316] )
                                                                            {
                                                                              MemoryFree(v349);
                                                                              v266 = 0LL;
LABEL_518:
                                                                              v1414 = 0LL;
                                                                              v99 = -805306367;
                                                                              goto LABEL_383;
                                                                            }
                                                                            v1517 = 0;
                                                                            v1567 = v349;
                                                                            if ( (unsigned int)v1316 < 4 )
                                                                            {
                                                                              v402 = -1073741762;
                                                                              v1414 = (unsigned __int16 *)v349;
                                                                              v1468 = v353;
                                                                              v267 = v1472;
                                                                              v1466 = (LPVOID)v1472;
                                                                              v1470 = v1467;
LABEL_521:
                                                                              v266 = 0LL;
LABEL_522:
                                                                              v99 = v402 | 0x10000000;
                                                                              v1477 = v99;
LABEL_336:
                                                                              if ( !v267 )
                                                                                goto LABEL_338;
                                                                              goto LABEL_337;
                                                                            }
                                                                            v1268 = *v349;
                                                                            v402 = RtlULongLongAdd(
                                                                                     (unsigned __int64)v349,
                                                                                     4LL,
                                                                                     (__int64 *)&v1567);
                                                                            v1414 = v403;
                                                                            v1468 = v404;
                                                                            v1471 = v401;
                                                                            v267 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v1470 = v1467;
                                                                            if ( v402 < 0 )
                                                                              goto LABEL_521;
                                                                            v402 = RtlUIntAdd(0, 4, (int *)&v1517);
                                                                            v1414 = v405;
                                                                            v1468 = v406;
                                                                            v1471 = v401;
                                                                            v407 = (void *)v1472;
                                                                            v267 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v408 = v1467;
                                                                            v1470 = v1467;
                                                                            if ( v402 < 0 )
                                                                              goto LABEL_521;
                                                                            if ( (unsigned int)v1316 - v1517 < 4 )
                                                                            {
LABEL_526:
                                                                              v1471 = v401;
                                                                              v1468 = v406;
                                                                              v1414 = v405;
                                                                              v402 = -1073741762;
                                                                              v267 = (SIZE_T)v407;
                                                                              v1466 = v407;
                                                                              v1470 = v408;
                                                                              goto LABEL_521;
                                                                            }
                                                                            v1347 = *(_DWORD *)v1567;
                                                                            v402 = RtlULongLongAdd(
                                                                                     (unsigned __int64)v1567,
                                                                                     4LL,
                                                                                     (__int64 *)&v1567);
                                                                            v1414 = v409;
                                                                            v1468 = v410;
                                                                            v1471 = v401;
                                                                            v267 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v1470 = v1467;
                                                                            if ( v402 < 0 )
                                                                              goto LABEL_521;
                                                                            v402 = RtlUIntAdd(v1517, 4, (int *)&v1517);
                                                                            v1414 = v405;
                                                                            v1468 = v406;
                                                                            v1471 = v401;
                                                                            v407 = (void *)v1472;
                                                                            v267 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v408 = v1467;
                                                                            v1470 = v1467;
                                                                            if ( v402 < 0 )
                                                                              goto LABEL_521;
                                                                            if ( (unsigned int)v1316 - v1517 < v1347 )
                                                                            {
                                                                              v101 = v411;
                                                                              goto LABEL_526;
                                                                            }
                                                                            v402 = RtlUIntAdd(
                                                                                     v1517,
                                                                                     v1347,
                                                                                     (int *)&v1517);
                                                                            v1414 = v412;
                                                                            v1468 = v413;
                                                                            v1471 = v401;
                                                                            v101 = v414;
                                                                            v267 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v1470 = v1467;
                                                                            if ( v402 < 0 )
                                                                              goto LABEL_521;
                                                                            if ( (char *)v412 + (unsigned int)v1316 < (char *)v1567 + v1347
                                                                              || (unsigned int)v1316
                                                                               + (char *)v412
                                                                               - (_BYTE *)v1567
                                                                               - (unsigned __int64)v1347 >= 8 )
                                                                            {
                                                                              v402 = -1073741762;
                                                                              v1414 = v412;
                                                                              v1468 = v413;
                                                                              v1471 = v1327;
                                                                              v267 = v1472;
                                                                              v1466 = (LPVOID)v1472;
                                                                              v1470 = v1467;
                                                                              goto LABEL_521;
                                                                            }
                                                                            v1568 = 0LL;
                                                                            v1569 = 0LL;
                                                                            v1570 = 0LL;
                                                                            v402 = 0;
                                                                            v1304 = 0;
                                                                            v1414 = v412;
                                                                            v1468 = v413;
                                                                            v1471 = v1327;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v1470 = v1467;
                                                                            if ( v1567 )
                                                                            {
                                                                              v1317 = v1567;
                                                                              v402 = RtlULongLongAdd(
                                                                                       (unsigned __int64)v1567,
                                                                                       v1347,
                                                                                       (__int64 *)&v1568);
                                                                              v1414 = v415;
                                                                              v1468 = v416;
                                                                              v1471 = v1327;
                                                                              v267 = v1472;
                                                                              v1466 = (LPVOID)v1472;
                                                                              v1470 = v1467;
                                                                              if ( v402 < 0 )
                                                                                goto LABEL_559;
                                                                              v1414 = v415;
                                                                              v1468 = v416;
                                                                              v1471 = v1327;
                                                                              v1466 = (LPVOID)v1472;
                                                                              v1470 = v1467;
                                                                              v417 = (unsigned __int64)v1317;
                                                                              if ( (unsigned __int64)v1317 < v1568 )
                                                                              {
                                                                                v1414 = v415;
                                                                                v1468 = v416;
                                                                                v1471 = v1327;
                                                                                v1466 = (LPVOID)v1472;
                                                                                v1470 = v1467;
                                                                                v418 = (unsigned __int64)v1317;
                                                                                while ( 1 )
                                                                                {
                                                                                  v1318 = (void *)v267;
                                                                                  v402 = RtlULongLongAdd(
                                                                                           v418,
                                                                                           4LL,
                                                                                           (__int64 *)&v1569);
                                                                                  if ( v402 < 0 )
                                                                                    goto LABEL_559;
                                                                                  if ( v1569 > v1568 )
                                                                                  {
                                                                                    v402 = -1073741811;
LABEL_547:
                                                                                    v267 = (SIZE_T)v1466;
                                                                                    goto LABEL_521;
                                                                                  }
                                                                                  v1518 = 0;
                                                                                  v402 = RtlUIntAdd(
                                                                                           4u,
                                                                                           *v419,
                                                                                           (int *)&v1518);
                                                                                  if ( v402 < 0 )
                                                                                    goto LABEL_547;
                                                                                  v402 = RtlULongLongAdd(
                                                                                           v420,
                                                                                           v1518,
                                                                                           (__int64 *)&v1570);
                                                                                  v1468 = v422;
                                                                                  v1471 = v1327;
                                                                                  v1466 = v1318;
                                                                                  v1470 = v421;
                                                                                  if ( v402 < 0 )
                                                                                    goto LABEL_559;
                                                                                  v418 = v1570;
                                                                                  v423 = v1568;
                                                                                  v1468 = v422;
                                                                                  v267 = (SIZE_T)v1318;
                                                                                  v1470 = v421;
                                                                                  v1471 = v1327;
                                                                                  if ( v1570 > v1568 )
                                                                                  {
                                                                                    v402 = -1073741811;
                                                                                    v1466 = v1318;
                                                                                    goto LABEL_521;
                                                                                  }
                                                                                  ++v1304;
                                                                                  v1466 = v1318;
                                                                                  if ( v1570 >= v1568 )
                                                                                  {
                                                                                    v1468 = v422;
                                                                                    v1471 = v1327;
                                                                                    v267 = (SIZE_T)v1318;
                                                                                    v1466 = v1318;
                                                                                    v1470 = v421;
                                                                                    v417 = v1570;
                                                                                    goto LABEL_549;
                                                                                  }
                                                                                }
                                                                              }
                                                                              v423 = v1568;
LABEL_549:
                                                                              if ( v417 != v423 )
                                                                              {
                                                                                v402 = -1073741811;
                                                                                goto LABEL_521;
                                                                              }
                                                                            }
                                                                            v424 = v1347;
                                                                            if ( !v1347 )
                                                                            {
                                                                              v426 = 0LL;
                                                                              goto LABEL_556;
                                                                            }
                                                                            v425 = GetProcessHeap();
                                                                            v426 = HeapAlloc(v425, 8u, v1347);
                                                                            if ( v426 )
                                                                            {
                                                                              v402 = 0;
                                                                              v424 = v1347;
LABEL_556:
                                                                              if ( v1567 )
                                                                                memcpy_0(v426, v1567, v424);
                                                                              v1613[1] = v426;
                                                                              LODWORD(v1613[0]) = v1304;
                                                                              goto LABEL_559;
                                                                            }
                                                                            v402 = -1073741801;
LABEL_559:
                                                                            v266 = 0LL;
                                                                            if ( v402 < 0 )
                                                                            {
                                                                              v267 = (SIZE_T)v1466;
                                                                            }
                                                                            else
                                                                            {
                                                                              v267 = (SIZE_T)v1466;
                                                                              if ( v1268 != LODWORD(v1613[0]) )
                                                                                v402 = -1073741762;
                                                                            }
                                                                            goto LABEL_522;
                                                                          }
                                                                          v313 = 0;
                                                                          if ( v1309 )
                                                                          {
                                                                            *(_DWORD *)v328 = v1265;
                                                                            v329 = GetProcessHeap();
                                                                            v330 = HeapAlloc(v329, 8u, v1265);
                                                                            if ( !v330 )
                                                                            {
                                                                              v331 = v1471;
LABEL_461:
                                                                              v313 = -1073741801;
                                                                              v336 = v1472;
                                                                              v1310 = *(void **)(v1472 + 8);
                                                                              if ( v1310 )
                                                                              {
                                                                                v337 = GetProcessHeap();
                                                                                HeapFree(v337, 0, v1310);
                                                                                v336 = v1472;
                                                                                *(_QWORD *)(v1472 + 8) = 0LL;
                                                                              }
                                                                              v1311 = *(void **)(v336 + 24);
                                                                              if ( v1311 )
                                                                              {
                                                                                v338 = GetProcessHeap();
                                                                                HeapFree(v338, 0, v1311);
                                                                                v336 = v1472;
                                                                                *(_QWORD *)(v1472 + 24) = 0LL;
                                                                              }
                                                                              v1312 = *(void **)(v336 + 40);
                                                                              if ( v1312 )
                                                                              {
                                                                                v339 = GetProcessHeap();
                                                                                HeapFree(v339, 0, v1312);
                                                                                *(_QWORD *)(v1472 + 40) = 0LL;
                                                                              }
                                                                              v340 = GetProcessHeap();
                                                                              HeapFree(v340, 0, (LPVOID)v1472);
                                                                              goto LABEL_472;
                                                                            }
                                                                            *(_QWORD *)(v1472 + 8) = v330;
                                                                            v313 = 0;
                                                                            memcpy_0(v330, v1309, v1265);
                                                                            v328 = v1472;
                                                                            v331 = v1471;
                                                                            v1326 = (SIZE_T)v101;
                                                                            lpModuleNameb = v103;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)v328 = 0;
                                                                            *(_QWORD *)(v328 + 8) = 0LL;
                                                                            v331 = v1471;
                                                                          }
                                                                          v1472 = v328;
                                                                          if ( v1467 )
                                                                          {
                                                                            *(_DWORD *)(v328 + 16) = v1345;
                                                                            v332 = GetProcessHeap();
                                                                            v333 = HeapAlloc(v332, 8u, v1345);
                                                                            if ( !v333 )
                                                                              goto LABEL_461;
                                                                            *(_QWORD *)(v1472 + 24) = v333;
                                                                            v313 = 0;
                                                                            memcpy_0(v333, v1467, v1345);
                                                                            v328 = v1472;
                                                                            v1471 = v331;
                                                                            v1326 = (SIZE_T)v101;
                                                                            lpModuleNameb = v103;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(v328 + 16) = 0;
                                                                            *(_QWORD *)(v328 + 24) = 0LL;
                                                                          }
                                                                          if ( v1565 )
                                                                          {
                                                                            *(_DWORD *)(v328 + 32) = v1300;
                                                                            v334 = GetProcessHeap();
                                                                            v335 = HeapAlloc(v334, 8u, v1300);
                                                                            if ( !v335 )
                                                                              goto LABEL_461;
                                                                            *(_QWORD *)(v1472 + 40) = v335;
                                                                            v313 = 0;
                                                                            memcpy_0(v335, v1565, v1300);
                                                                            v328 = v1472;
                                                                            v1471 = v331;
                                                                            v1326 = (SIZE_T)v101;
                                                                            lpModuleNameb = v103;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(v328 + 32) = 0;
                                                                            *(_QWORD *)(v328 + 40) = 0LL;
                                                                          }
                                                                          v341 = (unsigned __int16 *)v328;
                                                                          lpMeml = (unsigned __int16 *)v328;
                                                                          goto LABEL_473;
                                                                        }
                                                                      }
                                                                    }
                                                                    v342 = 0LL;
LABEL_486:
                                                                    v331 = v1471;
                                                                    goto LABEL_487;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                      v342 = v1468;
                                                      goto LABEL_486;
                                                    }
                                                  }
LABEL_334:
                                                  v266 = 0LL;
LABEL_335:
                                                  v267 = (SIZE_T)v1466;
                                                  goto LABEL_336;
                                                }
                                                v1466 = lpMema;
                                              }
                                            }
                                            v243 = -1073741801;
                                            lpMemb = (void *)*((_QWORD *)v235 + 1);
                                            if ( lpMemb )
                                            {
                                              v244 = GetProcessHeap();
                                              HeapFree(v244, 0, lpMemb);
                                              *((_QWORD *)v235 + 1) = 0LL;
                                            }
                                            lpMemc = (void *)*((_QWORD *)v235 + 3);
                                            if ( lpMemc )
                                            {
                                              v245 = GetProcessHeap();
                                              HeapFree(v245, 0, lpMemc);
                                              *((_QWORD *)v235 + 3) = 0LL;
                                            }
                                            lpMemd = (void *)*((_QWORD *)v235 + 5);
                                            if ( lpMemd )
                                            {
                                              v246 = GetProcessHeap();
                                              HeapFree(v246, 0, lpMemd);
                                              *((_QWORD *)v235 + 5) = 0LL;
                                            }
                                            v247 = GetProcessHeap();
                                            HeapFree(v247, 0, v235);
                                          }
                                          else
                                          {
                                            v243 = -1073741801;
                                          }
                                          v235 = v1471;
                                          goto LABEL_312;
                                        }
                                        v172 = (v1510 + 7) & 0xFFFFFFF8;
                                        if ( v172 < v1510 )
                                        {
                                          v99 = -805306219;
                                          v1477 = -805306219;
                                          goto LABEL_133;
                                        }
                                        v1510 = (v1510 + 7) & 0xFFFFFFF8;
                                        v173 = v172;
                                        v174 = GetProcessHeap();
                                        v175 = (char *)HeapAlloc(v174, 8u, v173);
                                        v176 = v175;
                                        if ( v175 )
                                        {
                                          v1586[0] = v175;
                                          *(_DWORD *)v175 = Src[0];
                                          v171 = RtlULongLongAdd((unsigned __int64)v175, 4LL, (__int64 *)v1586);
                                          if ( v171 >= 0 )
                                          {
                                            v178 = v1586[0];
                                            *(_DWORD *)v1586[0] = HIDWORD(Src[0]);
                                            v171 = RtlULongLongAdd((unsigned __int64)v178, v177, (__int64 *)v1586);
                                            if ( v171 >= 0 )
                                            {
                                              *(_QWORD *)&v176[v1510 - 8] = v1261;
                                              memcpy_0(v1586[0], Src[1], HIDWORD(Src[0]));
                                              v1466 = v176;
                                              v170 = v1510;
                                              v1406 = v1510;
LABEL_269:
                                              v1325 = (SIZE_T)v101;
                                              lpModuleNamea = v103;
                                              goto LABEL_270;
                                            }
                                          }
                                          v179 = GetProcessHeap();
                                          HeapFree(v179, 0, v176);
                                        }
                                        else
                                        {
                                          v171 = -1073741801;
                                        }
                                        v170 = 0;
                                        goto LABEL_269;
                                      }
LABEL_258:
                                      v105 = v97;
                                      goto LABEL_364;
                                    }
                                  }
                                }
                              }
                              goto LABEL_133;
                            }
LABEL_157:
                            v99 = -1073741789;
LABEL_158:
                            v105 = v97;
                            goto LABEL_363;
                          }
                        }
                        v105 = v97;
                        goto LABEL_364;
                      }
                    }
                    else
                    {
                      v1495 = 0;
                      v99 = RtlUIntAdd(4u, 8, &v1495);
                      v1477 = v99;
                      if ( v99 < 0 )
                        goto LABEL_133;
                      v99 = RtlUIntAdd(HIDWORD(Src[0]), v1495, (int *)Src + 1);
                      v1477 = v99;
                      if ( v99 >= 0 )
                      {
                        LODWORD(Src[0]) += v147;
                        goto LABEL_200;
                      }
                    }
                    v105 = v97;
                    goto LABEL_364;
                  }
                }
                else
                {
                  v1493 = 0;
                  v99 = RtlUIntAdd(4u, 8, &v1493);
                  v1477 = v99;
                  if ( v99 < 0 )
                    goto LABEL_133;
                  v99 = RtlUIntAdd(HIDWORD(Src[0]), v1493, (int *)Src + 1);
                  v1477 = v99;
                  v140 = (int)Src[0];
                  if ( v99 >= 0 )
                    goto LABEL_177;
                }
                v105 = v97;
                goto LABEL_364;
              }
            }
            else
            {
              v1491 = 0;
              v99 = RtlUIntAdd(4u, 160, &v1491);
              v1477 = v99;
              if ( v99 < 0 )
                goto LABEL_133;
              v99 = RtlUIntAdd(HIDWORD(Src[0]), v1491, (int *)Src + 1);
              v1477 = v99;
              v132 = (int)Src[0];
              if ( v99 >= 0 )
                goto LABEL_164;
            }
            v105 = v97;
            goto LABEL_364;
          }
          if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1550 && !wcscmp_0(v1550, L"Default") )
          {
            v1483 = 0;
            CurrentProcess = GetCurrentProcess();
            if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1483) )
              goto LABEL_72;
            if ( (v1483 & 0xF) == 0 )
              v78 = 1;
          }
        }
        v21 = v78;
        goto LABEL_125;
      }
      v23[823] = 0;
      memset_0(qword_180899E50, 0, sizeof(qword_180899E50));
      if ( !*v23 )
        goto LABEL_66;
      while ( 1 )
      {
        v65 = (const WCHAR *)v23;
        v66 = -1LL;
        v58 = 0;
        do
          ++v66;
        while ( *(_WORD *)&v23[2 * v66] );
        v67 = &v23[2 * v66];
        v68 = &qword_180899E50[3 * v59];
        if ( !GetModuleHandleExW(0, v65, v68) )
          break;
        if ( *(_WORD *)*v68 == 23117
          && (v69 = *((int *)*v68 + 15), (unsigned int)v69 < 0x10000000)
          && (v70 = (unsigned __int64)*v68 + v69, v70 >= (unsigned __int64)*v68)
          && *(_DWORD *)v70 == 17744 )
        {
          if ( ((*(_WORD *)(v70 + 24) - 267) & 0xFEFF) != 0 )
          {
            v58 = -1073741811;
          }
          else
          {
            *(HMODULE *)((char *)v68 + 12) = *(HMODULE *)(v70 + 136);
            *((_DWORD *)v68 + 2) = *(_DWORD *)(v70 + 80);
          }
        }
        else
        {
          v58 = -1073741701;
        }
        v71 = *(_DWORD *)(v67 + 2);
        v23 = v67 + 6;
        for ( nn = 0; nn < v71; ++nn )
        {
          v73 = v23;
          v74 = -1LL;
          do
            ++v74;
          while ( v23[v74] );
          v23 += v74 + 1;
          if ( v58 < 0 )
          {
            v76 = v1476;
          }
          else
          {
            v75 = GetProcAddress(qword_180899E50[3 * v59], v73);
            if ( !v75 )
              goto LABEL_65;
            v76 = v1476;
            off_180891340[v1476] = v75;
          }
          v1476 = v76 + 1;
        }
        ++v59;
        if ( !*v23 )
          goto LABEL_65;
      }
      v58 = -1073741702;
LABEL_65:
      if ( lpModuleName )
      {
LABEL_66:
        v77 = GetProcessHeap();
        HeapFree(v77, 0, lpModuleName);
      }
      v21 = 0;
      if ( v58 < 0 )
        goto LABEL_35;
      v22 = dword_18089D72C;
    }
    dword_18089D72C = v22 + 1;
    goto LABEL_70;
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
