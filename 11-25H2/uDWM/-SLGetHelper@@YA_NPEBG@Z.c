/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x18005A268
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180003988 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18005FB44 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     StringLengthWorkerW @ 0x18005FB78 (StringLengthWorkerW.c)
 *     RtlULongLongAdd @ 0x180076A50 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18007EE34 (RtlUIntAdd.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180098240 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EB118 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall SLGetHelper(const unsigned __int16 *a1)
{
  int *v1; // rdi
  void *v2; // r12
  HANDLE ProcessHeap; // rax
  _OWORD *v4; // rax
  void *v5; // r15
  int v6; // r14d
  __int128 v7; // xmm1
  HANDLE v8; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // edx
  void *v11; // r13
  HANDLE v12; // rax
  void *v13; // r13
  HANDLE v14; // rax
  HANDLE v15; // rax
  HANDLE v16; // rax
  void *v17; // r12
  HANDLE v18; // rax
  _OWORD *v19; // r15
  HANDLE v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r8
  HANDLE v23; // rax
  _DWORD *v24; // rax
  int v25; // r9d
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int *v28; // r8
  unsigned int nn; // r10d
  unsigned int v30; // r9d
  unsigned int v31; // ecx
  unsigned int *v32; // rdx
  unsigned int i1; // r8d
  unsigned int v34; // ecx
  unsigned __int64 v35; // rdx
  unsigned int i2; // r8d
  size_t v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // r14d
  HANDLE v40; // rax
  char *v41; // r14
  _DWORD *v42; // rcx
  HANDLE v43; // rax
  int v44; // r13d
  unsigned __int64 v45; // rcx
  char v46; // al
  unsigned int v47; // r11d
  SIZE_T v48; // rcx
  int v49; // r8d
  char *v50; // rdx
  unsigned int v51; // r9d
  unsigned int v52; // ecx
  int v53; // eax
  int v54; // r10d
  char v55; // r11
  int v56; // r8d
  _BYTE *v57; // rdi
  unsigned int v58; // r8d
  unsigned int v59; // esi
  int v60; // ecx
  unsigned int v61; // ebx
  char v62; // al
  int v63; // esi
  int v64; // edi
  size_t v65; // r14
  int v66; // r12d
  unsigned __int8 *v67; // rcx
  int v68; // r10d
  int v69; // r9d
  int v70; // r8d
  int v71; // r11d
  int v72; // r8d
  int v73; // r11d
  int v74; // r8d
  unsigned int v75; // r11d
  int v76; // r8d
  int v77; // r11d
  int v78; // r8d
  int v79; // r11d
  unsigned int v80; // r8d
  int v81; // r11d
  unsigned int v82; // r8d
  unsigned int v83; // r11d
  int v84; // r8d
  int v85; // r11d
  int v86; // r8d
  int v87; // r11d
  int v88; // r8d
  int v89; // r11d
  int v90; // r8d
  int v91; // r11d
  unsigned int v92; // r8d
  int v93; // r11d
  int v94; // eax
  unsigned int v95; // r8d
  _BYTE *v96; // rdi
  HANDLE v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rbx
  signed int v100; // r13d
  unsigned int v101; // r13d
  HANDLE v102; // rax
  void *v103; // rax
  HANDLE v104; // rax
  _OWORD *v105; // rax
  HANDLE v106; // rax
  _QWORD *v107; // rax
  STRSAFE_PCNZWCH v108; // rax
  unsigned int v109; // eax
  unsigned int v110; // ecx
  unsigned int v111; // eax
  size_t v112; // rdx
  int v113; // r11d
  unsigned int v114; // eax
  unsigned int v115; // eax
  unsigned int v116; // edx
  unsigned int v117; // eax
  unsigned int v118; // ecx
  unsigned int v119; // eax
  int v120; // edx
  unsigned int v121; // r14d
  HANDLE v122; // rax
  _DWORD *v123; // rax
  unsigned int v124; // r9d
  unsigned int v125; // edx
  unsigned int v126; // ecx
  unsigned int *v127; // r8
  unsigned int i; // r10d
  unsigned int v129; // ecx
  unsigned int *v130; // rdx
  unsigned int j; // r8d
  unsigned int v132; // ecx
  char *v133; // rdx
  unsigned int k; // r8d
  SIZE_T v135; // rax
  int v136; // r8d
  __int64 v137; // r8
  _DWORD *v138; // rdx
  unsigned int m; // ecx
  unsigned int v140; // eax
  unsigned int v141; // eax
  unsigned int v142; // eax
  int *v143; // rax
  void *v144; // r14
  HANDLE v145; // rax
  void *v146; // rbx
  HANDLE v147; // rax
  int v148; // esi
  int v149; // ebx
  unsigned int v151; // eax
  unsigned int v152; // eax
  unsigned int v153; // eax
  HANDLE v154; // rax
  HANDLE v155; // rax
  HANDLE v156; // rax
  HANDLE v157; // rax
  unsigned int *v158; // rbx
  HANDLE v159; // rax
  STRSAFE_PCNZWCH v160; // rax
  unsigned int v161; // r11d
  void *v162; // rsi
  HANDLE v163; // rax
  void *v164; // rsi
  HANDLE v165; // rax
  void *v166; // rsi
  HANDLE v167; // rax
  HANDLE v168; // rax
  void *v169; // rbx
  HANDLE v170; // rax
  void *v171; // rbx
  HANDLE v172; // rax
  _QWORD *v173; // rbx
  void *v174; // rsi
  HANDLE v175; // rax
  void *v176; // rsi
  HANDLE v177; // rax
  void *v178; // rsi
  HANDLE v179; // rax
  HANDLE v180; // rax
  void *v181; // rbx
  HANDLE v182; // rax
  unsigned int v183; // r9d
  unsigned int v184; // edx
  unsigned int v185; // ecx
  unsigned int v186; // eax
  HANDLE v187; // rax
  _DWORD *v188; // rax
  _DWORD *v189; // rdx
  HANDLE v190; // rax
  unsigned int *v191; // rax
  int i3; // r10d
  __int64 v193; // r9
  unsigned int *v194; // r8
  _DWORD *v195; // rax
  unsigned int i4; // r10d
  _DWORD *v197; // r8
  void *v198; // rbx
  unsigned int *v199; // rcx
  size_t v200; // rdx
  _DWORD *v201; // rcx
  unsigned int *v202; // rdx
  unsigned int v203; // edx
  unsigned int v204; // r13d
  HANDLE v205; // rax
  LPVOID v206; // rax
  SIZE_T v207; // r10
  unsigned int v208; // r14d
  FARPROC v209; // rax
  int v210; // eax
  unsigned int v211; // r8d
  _OWORD *v212; // r9
  char *v213; // rcx
  void *v214; // r10
  SIZE_T v215; // r11
  size_t v216; // r13
  void *v217; // rdx
  _QWORD *v218; // rbx
  unsigned int v219; // r13d
  SIZE_T v220; // rcx
  size_t v221; // r9
  unsigned int v222; // r11d
  unsigned int *v223; // r10
  unsigned int v224; // r9d
  unsigned int v225; // r13d
  HANDLE v226; // rax
  size_t *v227; // rax
  size_t *v228; // rcx
  signed int v229; // r13d
  _QWORD *v230; // r11
  void *v231; // rax
  _QWORD *v232; // rbx
  SIZE_T v233; // rbx
  void *v234; // rdx
  size_t v235; // rax
  size_t v236; // rax
  unsigned int v237; // r13d
  HANDLE v238; // rax
  void *v239; // rcx
  void *v240; // r13
  _DWORD *v241; // r9
  unsigned __int8 v242; // al
  unsigned __int8 *v243; // r10
  SIZE_T v244; // rdx
  int v245; // r11d
  void *v246; // rdx
  int v247; // ecx
  int v248; // ecx
  void *v249; // rsi
  unsigned int v250; // r10d
  unsigned int v251; // eax
  int v252; // edi
  unsigned int v253; // r11d
  unsigned int v254; // r9d
  char v255; // dl
  bool v256; // cc
  unsigned int v257; // r11d
  char *v258; // r8
  unsigned __int64 v259; // rcx
  void *v260; // rdx
  int v261; // r14d
  _BYTE *v262; // r15
  unsigned int v263; // edi
  unsigned int v264; // r12d
  int v265; // r13d
  unsigned __int8 *v266; // rdx
  unsigned __int64 v267; // rbx
  int v268; // r9d
  unsigned int v269; // eax
  int v270; // r11d
  int v271; // eax
  int v272; // r10d
  int v273; // ecx
  int v274; // r10d
  int v275; // r8d
  int v276; // eax
  unsigned int v277; // r8d
  int v278; // eax
  int v279; // r8d
  unsigned int v280; // eax
  int v281; // r8d
  int v282; // eax
  int v283; // r8d
  unsigned int v284; // eax
  int v285; // r8d
  int v286; // eax
  unsigned int v287; // edi
  int v288; // eax
  int v289; // edi
  int v290; // eax
  int v291; // edi
  int v292; // eax
  int v293; // edi
  int v294; // eax
  int v295; // edi
  unsigned int v296; // eax
  int v297; // edi
  int v298; // edx
  int v299; // ecx
  HANDLE v300; // rax
  size_t v301; // r14
  void *v302; // rcx
  signed int v303; // eax
  HANDLE v304; // rax
  void *v305; // rcx
  int v306; // r13d
  _DWORD *v307; // rdx
  unsigned int v308; // ecx
  unsigned int v309; // r11d
  unsigned int v310; // ecx
  _DWORD *v311; // rdx
  unsigned int n; // r8d
  unsigned int v313; // r11d
  unsigned int v314; // eax
  unsigned int v315; // eax
  unsigned int v316; // eax
  HANDLE v317; // rax
  HANDLE v318; // rax
  HANDLE v319; // rax
  HANDLE v320; // rax
  void *v321; // r13
  HANDLE v322; // rax
  void *v323; // r13
  HANDLE v324; // rax
  _QWORD *v325; // r13
  HANDLE v326; // rax
  HANDLE v327; // rax
  HANDLE v328; // rax
  HANDLE v329; // rax
  void *v330; // r13
  HANDLE v331; // rax
  int *v332; // r14
  int v333; // eax
  unsigned int v334; // r14d
  unsigned int *v335; // rcx
  int ii; // r9d
  __int64 v337; // r8
  unsigned int *v338; // rdx
  unsigned int *v339; // rcx
  __int64 v340; // rcx
  _DWORD *v341; // rdx
  unsigned int jj; // r9d
  _DWORD *v343; // r8
  int *v344; // r10
  int v345; // r10d
  unsigned int *v346; // r8
  unsigned int kk; // r9d
  size_t v348; // rdx
  unsigned int *v349; // r11
  const void *v350; // r9
  _DWORD *v351; // r8
  _DWORD *v352; // r11
  _DWORD *v353; // r8
  _DWORD *v354; // r8
  unsigned int mm; // r14d
  _DWORD *v356; // r11
  int *v357; // rax
  char *v358; // r13
  HANDLE v359; // rax
  unsigned __int64 v360; // rcx
  char v361; // al
  unsigned __int64 v362; // rcx
  unsigned int v363; // r14d
  SIZE_T v364; // rax
  int v365; // r8d
  char *v366; // rdx
  int v367; // r9d
  int v368; // r10d
  char v369; // r14
  int v370; // eax
  unsigned int v371; // edi
  int v372; // r8d
  unsigned int v373; // ecx
  unsigned int v374; // r8d
  unsigned int v375; // esi
  unsigned int v376; // ebx
  char v377; // cl
  int v378; // esi
  int v379; // edi
  SIZE_T v380; // r13
  unsigned int v381; // r15d
  unsigned __int8 *v382; // rcx
  int v383; // r10d
  int v384; // r9d
  int v385; // r8d
  int v386; // r14d
  int v387; // ecx
  int v388; // r14d
  int v389; // r8d
  int v390; // r14d
  int v391; // r8d
  unsigned int v392; // r14d
  int v393; // r8d
  int v394; // r14d
  int v395; // r8d
  int v396; // r14d
  unsigned int v397; // r8d
  int v398; // r14d
  unsigned int v399; // r8d
  unsigned int v400; // r14d
  int v401; // r8d
  int v402; // r14d
  int v403; // r8d
  int v404; // r14d
  int v405; // r8d
  int v406; // r14d
  int v407; // r8d
  int v408; // r14d
  unsigned int v409; // r8d
  int v410; // r14d
  int v411; // eax
  unsigned int v412; // r8d
  _BYTE *v413; // rdi
  unsigned int v414; // eax
  HANDLE v415; // rax
  LPVOID v416; // rcx
  void *v417; // rax
  signed int v418; // r14d
  _QWORD *v419; // r14
  HANDLE v420; // rax
  void *v421; // rax
  HANDLE v422; // rax
  LPVOID v423; // rax
  _OWORD *v424; // rcx
  HANDLE v425; // rax
  LPVOID v426; // rax
  const wchar_t *v427; // rdx
  STRSAFE_PCNZWCH v428; // rax
  _QWORD *v429; // rax
  HANDLE v430; // rax
  HANDLE v431; // rax
  HANDLE v432; // rax
  HANDLE v433; // rax
  HANDLE v434; // rax
  STRSAFE_PCNZWCH v435; // rax
  size_t *v436; // rcx
  const void **v437; // r14
  unsigned int v438; // r8d
  unsigned int v439; // edx
  unsigned int v440; // eax
  HANDLE v441; // rax
  _DWORD *v442; // rax
  _DWORD *v443; // rdx
  int v444; // r14d
  HANDLE v445; // rax
  LPVOID v446; // rax
  void *v447; // rcx
  int v448; // r9d
  unsigned int v449; // edx
  int v450; // r11d
  char *v451; // r9
  void *v452; // r10
  unsigned int v453; // r8d
  unsigned int v454; // edx
  void *v455; // rax
  unsigned int *v456; // r8
  unsigned int *v457; // r10
  __int64 v458; // r14
  unsigned int *v459; // rcx
  SIZE_T v460; // rdx
  _DWORD *v461; // rcx
  unsigned int *v462; // rdx
  _DWORD *v463; // r8
  _DWORD *v464; // r10
  unsigned int v465; // r8d
  unsigned int v466; // edx
  unsigned int v467; // r8d
  unsigned int v468; // edx
  unsigned int v469; // r14d
  HANDLE v470; // rax
  __int128 v471; // rax
  FARPROC ProcAddress; // rax
  int v473; // eax
  unsigned int v474; // r8d
  size_t v475; // r9
  char *v476; // r10
  char *v477; // r14
  unsigned int v478; // r11d
  SIZE_T v479; // r9
  _DWORD *v480; // r10
  unsigned int v481; // r14d
  unsigned int *v482; // r11
  unsigned int v483; // r10d
  unsigned int v484; // r14d
  HANDLE v485; // rax
  size_t *v486; // rax
  size_t *v487; // rcx
  signed int v488; // r14d
  LPVOID v489; // r10
  size_t v490; // rax
  void *v491; // r8
  unsigned __int64 v492; // r15
  size_t v493; // rdx
  SIZE_T v494; // rax
  size_t v495; // rax
  unsigned int v496; // r14d
  HANDLE v497; // rax
  void *v498; // rcx
  void *v499; // r14
  unsigned int *v500; // r10
  unsigned __int8 v501; // al
  unsigned __int8 *v502; // r11
  SIZE_T v503; // r8
  size_t *v504; // rdx
  void *v505; // r8
  int v506; // edi
  int v507; // eax
  int v508; // ecx
  int v509; // ecx
  SIZE_T v510; // rsi
  unsigned int v511; // r11d
  int v512; // ebx
  int v513; // r10d
  unsigned int v514; // edx
  int v515; // r9d
  char *v516; // r11
  unsigned __int64 v517; // rcx
  void *v518; // r8
  void *v519; // rdx
  int v520; // r13d
  _BYTE *v521; // r15
  unsigned int v522; // ebx
  unsigned int v523; // r12d
  unsigned int v524; // edi
  unsigned __int8 *v525; // rdx
  unsigned __int64 v526; // r14
  int v527; // eax
  int v528; // r11d
  int v529; // ebx
  int v530; // r10d
  int v531; // ecx
  int v532; // r10d
  int v533; // r8d
  int v534; // ebx
  unsigned int v535; // r8d
  int v536; // ebx
  int v537; // r8d
  unsigned int v538; // ebx
  int v539; // r8d
  int v540; // ebx
  int v541; // r8d
  unsigned int v542; // ebx
  int v543; // r8d
  int v544; // ebx
  unsigned int v545; // edi
  int v546; // ebx
  int v547; // edi
  int v548; // ebx
  int v549; // edi
  unsigned int v550; // r8d
  int v551; // edi
  int v552; // r8d
  int v553; // edi
  unsigned int v554; // r8d
  int v555; // edi
  int v556; // ecx
  int v557; // ebx
  HANDLE v558; // rax
  size_t v559; // r12
  void *v560; // rcx
  signed int LastError; // eax
  HANDLE v562; // rax
  void *v563; // rcx
  int v564; // r14d
  unsigned int v565; // ecx
  __int64 v566; // r14
  HANDLE v567; // rax
  _DWORD *v568; // rcx
  SIZE_T v569; // rax
  _DWORD *v570; // r11
  void *v571; // rax
  SIZE_T v572; // rdx
  void *v573; // r11
  HANDLE v574; // rax
  _BYTE *v575; // r9
  char *v576; // rax
  char *v577; // r8
  int v578; // r10d
  size_t v579; // rbx
  HANDLE v580; // rax
  void *v581; // rax
  const wchar_t *v582; // rcx
  size_t v583; // r14
  HANDLE v584; // rax
  HANDLE v585; // rax
  HANDLE v586; // rax
  HANDLE v587; // rax
  _QWORD *v588; // rax
  HANDLE v589; // rax
  HANDLE v590; // rax
  HANDLE v591; // rax
  HANDLE v592; // rax
  void *v593; // rcx
  _DWORD *v594; // r10
  __int64 v595; // r11
  const void *v596; // rsi
  __int64 v597; // rdx
  unsigned __int64 v598; // r11
  HANDLE v599; // rax
  HANDLE v600; // rax
  HANDLE v601; // rax
  HANDLE v602; // rax
  _QWORD *v603; // rax
  HANDLE v604; // rax
  HANDLE v605; // rax
  HANDLE v606; // rax
  HANDLE v607; // rax
  HANDLE v608; // rax
  HANDLE v609; // rax
  HANDLE v610; // rax
  HANDLE v611; // rax
  HANDLE v612; // rax
  HANDLE v613; // rax
  HANDLE v614; // rax
  HANDLE v615; // rax
  HANDLE v616; // rax
  HANDLE v617; // rax
  LPVOID v618; // rcx
  unsigned int v619; // r10d
  unsigned int v620; // r11d
  int v621; // r10d
  HANDLE v622; // rax
  HANDLE v623; // rax
  _QWORD *v624; // [rsp+38h] [rbp-D0h]
  size_t *v625; // [rsp+38h] [rbp-D0h]
  size_t Size; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID v627; // [rsp+48h] [rbp-C0h]
  __int64 v628; // [rsp+50h] [rbp-B8h]
  size_t v629; // [rsp+58h] [rbp-B0h]
  LPVOID v630; // [rsp+60h] [rbp-A8h]
  SIZE_T v631; // [rsp+68h] [rbp-A0h]
  SIZE_T dwBytes; // [rsp+70h] [rbp-98h]
  LPVOID v633; // [rsp+78h] [rbp-90h]
  LPVOID v634; // [rsp+80h] [rbp-88h]
  void *Src; // [rsp+88h] [rbp-80h]
  STRSAFE_PCNZWCH psz; // [rsp+90h] [rbp-78h]
  size_t v637; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v638; // [rsp+A0h] [rbp-68h]
  LPVOID v639; // [rsp+A8h] [rbp-60h]
  SIZE_T v640; // [rsp+B0h] [rbp-58h]
  SIZE_T v641; // [rsp+B8h] [rbp-50h]
  LPVOID v642; // [rsp+C0h] [rbp-48h]
  LPVOID lpMem[2]; // [rsp+C8h] [rbp-40h] BYREF
  size_t v644; // [rsp+D8h] [rbp-30h]
  SIZE_T v645; // [rsp+E0h] [rbp-28h]
  LPVOID v646; // [rsp+E8h] [rbp-20h] BYREF
  SIZE_T v647; // [rsp+F0h] [rbp-18h]
  SIZE_T v648; // [rsp+F8h] [rbp-10h]
  void *v649; // [rsp+100h] [rbp-8h]
  size_t v650; // [rsp+108h] [rbp+0h]
  int v651; // [rsp+110h] [rbp+8h]
  int v652; // [rsp+114h] [rbp+Ch]
  size_t v653[2]; // [rsp+118h] [rbp+10h] BYREF
  unsigned int *v654; // [rsp+128h] [rbp+20h]
  int v655; // [rsp+130h] [rbp+28h]
  int *v656; // [rsp+138h] [rbp+30h]
  LPVOID v657[2]; // [rsp+140h] [rbp+38h]
  int v658; // [rsp+150h] [rbp+48h]
  LPVOID v659[2]; // [rsp+158h] [rbp+50h]
  size_t v660; // [rsp+168h] [rbp+60h] BYREF
  int v661; // [rsp+170h] [rbp+68h]
  int v662; // [rsp+174h] [rbp+6Ch]
  size_t pcchLength; // [rsp+178h] [rbp+70h] BYREF
  HMODULE phModule; // [rsp+180h] [rbp+78h] BYREF
  HMODULE hModule; // [rsp+188h] [rbp+80h] BYREF
  __int128 v666; // [rsp+190h] [rbp+88h] BYREF
  __int128 v667; // [rsp+1A0h] [rbp+98h]
  __int128 v668; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v669; // [rsp+1C0h] [rbp+B8h]
  void *v670; // [rsp+208h] [rbp+100h]
  LPVOID v671; // [rsp+210h] [rbp+108h]

  v658 = 0;
  psz = a1;
  if ( !a1 )
    return 0;
  v661 = 0;
  v662 = 0;
  v656 = (int *)LocalAlloc(0x40u, 4uLL);
  v1 = v656;
  if ( !v656 )
  {
    v6 = -2147024882;
    goto LABEL_82;
  }
  LODWORD(v641) = 0;
  v2 = 0LL;
  v651 = 0;
  *(_OWORD *)lpMem = 0LL;
  *(_OWORD *)v657 = 0LL;
  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v652 = 56;
  v5 = v4;
  v655 = -1;
  v6 = -1073741801;
  if ( !v4 )
  {
    v5 = 0LL;
    goto LABEL_8;
  }
  *v4 = xmmword_1801189E0[0];
  v4[1] = xmmword_1801189E0[1];
  v4[2] = xmmword_1801189E0[2];
  v4[3] = xmmword_1801189E0[3];
  v4[4] = xmmword_1801189E0[4];
  v4[5] = xmmword_1801189E0[5];
  v4[6] = xmmword_1801189E0[6];
  v4[7] = xmmword_1801189E0[7];
  v4[8] = xmmword_1801189E0[8];
  v7 = xmmword_1801189E0[9];
  LODWORD(Size) = 160;
  v4[9] = v7;
  LODWORD(v644) = 160;
  v8 = GetProcessHeap();
  v9 = HeapAlloc(v8, 8u, 8uLL);
  if ( !v9 )
  {
    LODWORD(v637) = 0;
    goto LABEL_8;
  }
  *v9 = qword_180118928;
  LODWORD(v637) = 8;
  v640 = __rdtsc();
  v2 = v9;
  LODWORD(Size) = Size + 4;
  v10 = Size + 8;
  LODWORD(v648) = 12;
  v109 = Size + 20;
  v110 = -1;
  if ( (int)Size + 20 >= (unsigned int)(Size + 8) )
    v110 = Size + 20;
  v6 = v109 < v10 ? -805306219 : 0x10000000;
  if ( v109 < v10 )
    goto LABEL_788;
  v638 = 12;
  v111 = v110 + 12;
  v112 = 0xFFFFFFFFLL;
  if ( v110 + 12 >= v110 )
    v112 = v111;
  LODWORD(v654) = v112;
  v6 = v111 < v110 ? -805306219 : 0x10000000;
  if ( v111 < v110 )
    goto LABEL_788;
  pcchLength = 0LL;
  if ( StringLengthWorkerW(psz, v112, &pcchLength) < 0 )
  {
    pcchLength = 0LL;
    goto LABEL_388;
  }
  v114 = 2 * ++pcchLength + 4;
  if ( (unsigned int)(2 * pcchLength) >= 0xFFFFFFFC )
  {
    v6 = -1073741675;
    v114 = v638;
    LODWORD(v637) = v113;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 < 0 )
    goto LABEL_8;
  v115 = (_DWORD)v654 + v114;
  v116 = -1;
  if ( v115 >= (unsigned int)v654 )
    v116 = v115;
  v6 = v115 < (unsigned int)v654 ? -805306219 : 0x10000000;
  if ( v115 < (unsigned int)v654 )
    goto LABEL_788;
  v117 = v116 + 8;
  v118 = -1;
  if ( v116 + 8 >= v116 )
    v118 = v116 + 8;
  v6 = v117 < v116 ? -805306219 : 0x10000000;
  if ( v117 < v116 )
    goto LABEL_788;
  v119 = v118 + 8;
  v120 = -1;
  if ( v118 + 8 >= v118 )
    v120 = v118 + 8;
  v6 = v119 < v118 ? -805306219 : 0x10000000;
  if ( v119 < v118 )
  {
LABEL_788:
    if ( v6 < 0 )
      goto LABEL_8;
    goto LABEL_506;
  }
  HIDWORD(lpMem[0]) = v120;
  v121 = v120;
  v122 = GetProcessHeap();
  v123 = HeapAlloc(v122, 8u, v121);
  if ( !v123 )
  {
    v6 = -1073741801;
    goto LABEL_8;
  }
  LODWORD(lpMem[0]) = 0;
  lpMem[1] = v123;
  v124 = v637;
  v125 = v644;
  if ( v123 + 1 < v123 )
    goto LABEL_7;
  if ( v123 + 2 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
    goto LABEL_370;
  *v123 = 4;
  v123[1] = 0;
  v126 = ++LODWORD(lpMem[0]);
  if ( v5 )
  {
    if ( !v125 )
      goto LABEL_367;
  }
  else if ( v125 )
  {
    goto LABEL_367;
  }
  if ( lpMem[1] )
  {
    v127 = (unsigned int *)lpMem[1];
    for ( i = 0; ; ++i )
    {
      LODWORD(v637) = v124;
      if ( i >= v126 )
        break;
      v140 = *v127 + 4;
      if ( *v127 >= 0xFFFFFFFC || (unsigned int *)((char *)v127 + v140) < v127 )
        goto LABEL_7;
      v127 = (unsigned int *)((char *)v127 + v140);
    }
    if ( v127 + 1 < v127 )
      goto LABEL_7;
    if ( (char *)v127 + v125 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
      goto LABEL_370;
    *v127 = v125;
    if ( v5 )
    {
      memcpy_0(v127 + 1, v5, v125);
      v124 = v637;
    }
  }
  else
  {
    v6 = RtlUIntAdd(HIDWORD(lpMem[0]), (unsigned int)Size, (char *)lpMem + 4);
    if ( v6 < 0 )
      goto LABEL_8;
  }
  v129 = ++LODWORD(lpMem[0]);
  if ( !v124 )
    goto LABEL_367;
  if ( lpMem[1] )
  {
    v130 = (unsigned int *)lpMem[1];
    for ( j = 0; j < v129; ++j )
    {
      v141 = *v130 + 4;
      if ( *v130 >= 0xFFFFFFFC || (unsigned int *)((char *)v130 + v141) < v130 )
        goto LABEL_7;
      v130 = (unsigned int *)((char *)v130 + v141);
    }
    if ( v130 + 1 < v130 )
      goto LABEL_7;
    if ( (char *)v130 + v124 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
      goto LABEL_370;
    *v130 = v124;
    memcpy_0(v130 + 1, v2, v124);
  }
  else
  {
    v6 = RtlUIntAdd(HIDWORD(lpMem[0]), (unsigned int)v648, (char *)lpMem + 4);
    if ( v6 < 0 )
      goto LABEL_8;
  }
  v132 = ++LODWORD(lpMem[0]);
  if ( lpMem[1] )
  {
    v133 = (char *)lpMem[1];
    for ( k = 0; k < v132; ++k )
    {
      v142 = *(_DWORD *)v133 + 4;
      if ( *(_DWORD *)v133 >= 0xFFFFFFFC || &v133[v142] < v133 )
        goto LABEL_7;
      v133 += v142;
    }
    if ( v133 + 4 < v133 )
      goto LABEL_7;
    if ( v133 + 12 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
      goto LABEL_370;
    v135 = v640;
    *(_DWORD *)v133 = 8;
    *(_QWORD *)(v133 + 4) = v135;
  }
  else
  {
    v6 = RtlUIntAdd(HIDWORD(lpMem[0]), 12LL, (char *)lpMem + 4);
    if ( v6 < 0 )
      goto LABEL_8;
  }
  ++LODWORD(lpMem[0]);
  v660 = 0LL;
  if ( StringLengthWorkerW(psz, (size_t)v133, &v660) < 0 )
  {
    v660 = 0LL;
LABEL_388:
    v6 = -1073741762;
    goto LABEL_8;
  }
  v136 = v660 + 1;
  if ( v660 + 1 < v660 )
  {
    v660 = -1LL;
    goto LABEL_7;
  }
  ++v660;
  v137 = (unsigned int)(2 * v136);
  if ( !(_DWORD)v137 )
  {
    v6 = -1073741811;
    goto LABEL_403;
  }
  if ( lpMem[1] )
  {
    v138 = lpMem[1];
    for ( m = 0; m < LODWORD(lpMem[0]); ++m )
    {
      v316 = *v138 + 4;
      if ( *v138 >= 0xFFFFFFFC || (_DWORD *)((char *)v138 + v316) < v138 )
        goto LABEL_402;
      v138 = (_DWORD *)((char *)v138 + v316);
    }
    if ( v138 + 1 >= v138 )
    {
      v6 = 0;
      if ( (char *)v138 + v137 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
      {
        v6 = -1073741789;
      }
      else
      {
        *v138 = v137;
        memcpy_0(v138 + 1, psz, (unsigned int)v137);
        ++LODWORD(lpMem[0]);
      }
      goto LABEL_403;
    }
LABEL_402:
    v6 = -1073741675;
    goto LABEL_403;
  }
  if ( (unsigned int)v137 >= 0xFFFFFFFC )
    goto LABEL_402;
  v6 = RtlUIntAdd(HIDWORD(lpMem[0]), (unsigned int)(v137 + 4), (char *)lpMem + 4);
  if ( v6 >= 0 )
  {
    ++LODWORD(lpMem[0]);
    v6 = 0;
  }
LABEL_403:
  if ( v6 < 0 )
    goto LABEL_8;
  if ( lpMem[1] )
  {
    v307 = lpMem[1];
    v308 = 0;
    v309 = 4;
    while ( v308 < LODWORD(lpMem[0]) )
    {
      v314 = *v307 + 4;
      if ( v314 < 4 || (_DWORD *)((char *)v307 + v314) < v307 )
        goto LABEL_7;
      v307 = (_DWORD *)((char *)v307 + v314);
      ++v308;
    }
    if ( v307 + 1 < v307 )
      goto LABEL_7;
    if ( v307 + 2 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
      goto LABEL_370;
    *v307 = 4;
    v307[1] = 0;
  }
  else
  {
    v6 = RtlUIntAdd(HIDWORD(lpMem[0]), 8LL, (char *)lpMem + 4);
    if ( v6 < 0 )
      goto LABEL_8;
    v309 = 4;
  }
  v310 = ++LODWORD(lpMem[0]);
  if ( lpMem[1] )
  {
    v311 = lpMem[1];
    for ( n = 0; n < v310; ++n )
    {
      v315 = *v311 + 4;
      if ( v315 < 4 || (_DWORD *)((char *)v311 + v315) < v311 )
        goto LABEL_7;
      v311 = (_DWORD *)((char *)v311 + v315);
    }
    if ( v311 + 1 < v311 )
      goto LABEL_7;
    if ( v311 + 2 <= (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
    {
      *v311 = 4;
      v311[1] = 4;
      goto LABEL_416;
    }
LABEL_370:
    v6 = -1073741789;
    goto LABEL_8;
  }
  v6 = RtlUIntAdd(HIDWORD(lpMem[0]), 8LL, (char *)lpMem + 4);
  if ( v6 < 0 )
    goto LABEL_8;
LABEL_416:
  ++LODWORD(lpMem[0]);
  LODWORD(Size) = 0;
  LODWORD(v637) = 36;
  v6 = RtlUIntAdd(v309, v309, &Size);
  if ( v6 < 0 )
    goto LABEL_8;
  v6 = RtlUIntAdd(36LL, (unsigned int)Size, &v637);
  if ( v6 < 0 )
    goto LABEL_8;
  LODWORD(Size) = 0;
  v6 = RtlUIntAdd(v313, v313, &Size);
  if ( v6 < 0 )
    goto LABEL_8;
  v6 = RtlUIntAdd((unsigned int)v637, (unsigned int)Size, &v637);
  if ( v6 < 0 )
    goto LABEL_8;
  LODWORD(v641) = v637;
  LODWORD(v644) = 0;
  v625 = 0LL;
  v633 = 0LL;
  LODWORD(v637) = 0;
  v646 = 0LL;
  LODWORD(v648) = 0;
  v639 = 0LL;
  v642 = 0LL;
  dwBytes = __rdtsc();
  if ( HIDWORD(lpMem[0]) >= 0xFFFFFFF8
    || (v649 = v5, v565 = (HIDWORD(lpMem[0]) + 15) & 0xFFFFFFF8, v671 = v2, v565 < HIDWORD(lpMem[0]) + 8) )
  {
    v6 = -805306219;
    goto LABEL_8;
  }
  v566 = v565;
  v567 = GetProcessHeap();
  v634 = HeapAlloc(v567, 8u, (unsigned int)v566);
  v358 = (char *)v634;
  if ( !v634 )
  {
    v6 = -805306345;
    goto LABEL_463;
  }
  v568 = (char *)v634 + 4;
  *(_DWORD *)v634 = lpMem[0];
  if ( v358 + 4 < v358 || (*v568 = HIDWORD(lpMem[0]), v358 + 8 < v358 + 4) )
  {
    v630 = v358;
    v358 = 0LL;
    v634 = 0LL;
    v649 = v5;
    v671 = v2;
    v359 = GetProcessHeap();
    HeapFree(v359, 0, v630);
    v6 = -805306219;
    goto LABEL_440;
  }
  *(_QWORD *)&v358[v566 - 8] = dwBytes;
  memcpy_0(v568 + 1, lpMem[1], HIDWORD(lpMem[0]));
  LODWORD(v644) = v566;
  psz = 0LL;
  if ( !v358 )
  {
    v6 = -805306355;
    goto LABEL_8;
  }
  if ( !(_DWORD)v566 || (Src = (void *)((unsigned int)v566 + 8LL), (v630 = MemoryAlloc((unsigned __int64)Src)) == 0LL) )
  {
    v6 = -805306367;
    goto LABEL_861;
  }
  v360 = 0LL;
  LOBYTE(v628) = 0;
  v361 = 0;
  do
    v361 ^= v358[v360++];
  while ( v360 < (unsigned int)v566 );
  LOBYTE(v628) = v361;
  v362 = (unsigned int)v644;
  v363 = 0;
  LODWORD(v627) = 0;
  v364 = (SIZE_T)v630;
  LODWORD(Size) = 0;
  v365 = -1;
  v670 = (void *)0xC81ECB17B1B54A58LL;
  v647 = (SIZE_T)v630;
  v366 = v358;
  v367 = v644 & 7;
  if ( (v644 & 7) != 0 )
  {
    v368 = 0;
    v638 = 0;
    LODWORD(v627) = 0;
    v369 = v652;
    v370 = v641;
    v371 = 0;
    do
    {
      v372 = (unsigned __int8)*v366++;
      if ( v371 >= 4 )
      {
        v373 = (v372 << v369) | (unsigned int)v627;
        LODWORD(v627) = v373;
      }
      else
      {
        v373 = (unsigned int)v627;
        v368 |= v372 << (v369 - 32);
      }
      ++v371;
      v369 -= 8;
    }
    while ( (int)v371 < v367 );
    v1 = v656;
    v363 = v368 ^ 0xB17A307A;
    v374 = v373 ^ 0x42F6B18D;
    v375 = v368 ^ 0xB17A307A;
    LODWORD(Size) = 0;
    v376 = v373 ^ 0x42F6B18D;
    do
    {
      LODWORD(v641) = v370;
      LODWORD(v627) = v373;
      v631 = v647 + 1;
      if ( (int)Size >= 4 )
      {
        v376 = (v376 << 8) | HIBYTE(v376);
        v377 = v376;
      }
      else
      {
        v375 = (v375 << 8) | HIBYTE(v375);
        v377 = v375;
      }
      *(_BYTE *)v647 = v377;
      LODWORD(Size) = Size + 1;
      v370 = v641;
      v647 = v631;
      v373 = (unsigned int)v627;
    }
    while ( (int)Size < v367 );
    v364 = v631;
    LODWORD(Size) = v368;
    v634 = v358;
    v671 = v2;
    v649 = v5;
    if ( (unsigned int)v367 > 4 )
    {
      v365 = v374 >> (8 * (8 - v367)) << (8 * (8 - v367));
    }
    else
    {
      v365 = 0;
      if ( (unsigned int)v367 < 4 )
        v363 = v363 >> (8 * (4 - v367)) << (8 * (4 - v367));
    }
    v362 = (unsigned int)v644;
  }
  dwBytes = v362 >> 3;
  if ( v362 >> 3 )
  {
    v378 = Size;
    v379 = (int)v627;
    v380 = dwBytes;
    v638 = WORD1(v670);
    LODWORD(v654) = HIWORD(v670);
    LODWORD(v647) = HIDWORD(v670) ^ 0xB1B54A58;
    v381 = HIDWORD(v670) ^ 0xB1B54A58;
    v382 = (unsigned __int8 *)(v366 + 2);
    v631 = v364 + 7;
    do
    {
      v383 = v382[1] | ((*v382 | ((*(v382 - 1) | (*(v382 - 2) << 8)) << 8)) << 8);
      v384 = v382[5] | ((v382[4] | ((v382[3] | (v382[2] << 8)) << 8)) << 8);
      dwBytes = (SIZE_T)(v382 + 8);
      v385 = v384 ^ v365;
      v386 = v363 ^ v383 ^ (v385 - 19032);
      v387 = __ROR4__(v386, 15);
      v388 = HIDWORD(v670) ^ v386;
      v389 = (__ROR4__(v388, 7) + WORD1(v670) * v387) ^ v385;
      v390 = (WORD2(v670) * __ROR4__(v389 - 1313519016, 9) - __ROR4__(v389, 10)) ^ v388;
      v391 = (__ROR4__(v390, 27) + HIWORD(v670) * __ROR4__(WORD2(v670) ^ v390, 28)) ^ v389;
      v392 = (HIDWORD(v670) - (v391 ^ 0xB1B54A58)) ^ v390;
      v393 = (WORD1(v670) * (v392 - 19032) - (v392 >> 6)) ^ v391;
      v394 = (19032 * (WORD2(v670) ^ __ROR4__(v393, 15))) ^ v392;
      v395 = (WORD2(v670) * ((_DWORD)v654 + __ROR4__(~v394, 3))) ^ v393;
      v396 = (v395 - 19032 - HIDWORD(v670)) ^ v394;
      v397 = (v638 * ((unsigned int)v654 ^ v396)) ^ __ROR4__(v396, 10) ^ v395;
      v398 = __ROR4__(v397, 3) ^ (WORD2(v670) * __ROR4__(v397 ^ 0x4A58, 26)) ^ v396;
      v399 = (19032 * (__ROR4__(v398, 15) - HIWORD(v670))) ^ v397;
      v400 = (v399 >> 15) ^ (19032 * ((8 * (v399 - WORD2(v670))) | ((v399 - WORD2(v670)) >> 29))) ^ (v399 >> 1) ^ (19032 * (HIWORD(v670) ^ v399)) ^ v398;
      v401 = (WORD1(v670) * (v400 - WORD2(v670)) - (v400 >> 13)) ^ v399;
      v402 = __ROR4__(v401, 11) ^ (WORD2(v670) * __ROR4__(-1313519016 - v401, 9)) ^ v400;
      v403 = (v402 - HIWORD(v670) + 1313519016) ^ v401;
      v404 = (19032 * (v638 ^ v403) - __ROR4__(v403, 7)) ^ v402;
      v405 = (WORD1(v670) * __ROR4__(HIWORD(v670) ^ v404, 28) - __ROR4__(v404, 16)) ^ v403;
      v406 = (__ROR4__(v405, 4) + WORD2(v670) * __ROR4__(-1313519016 - v405, 10)) ^ v404;
      v407 = __ROR4__(v406, 9) ^ (HIWORD(v670) * __ROR4__(v406 + 1313519016, 4)) ^ v405;
      v408 = (19032 * __ROR4__(HIDWORD(v670) ^ v407, 24) - __ROR4__(v407, 30)) ^ v406;
      v409 = (WORD1(v670) * __ROR4__(HIDWORD(v670) - v408, 11) - __ROR4__(v408, 12)) ^ v407;
      v410 = (v409 >> 8) ^ (WORD2(v670) * (v409 ^ WORD1(v670))) ^ v408;
      v411 = v410 ^ v381;
      v363 = v378 ^ v410;
      v412 = v379 ^ v411 ^ v409;
      v413 = (_BYTE *)v631;
      LODWORD(v647) = v412;
      *(_BYTE *)(v631 - 4) = v363;
      *v413 = v412;
      *(v413 - 5) = BYTE1(v363);
      *(v413 - 1) = BYTE1(v412);
      *(v413 - 6) = (unsigned __int16)(v363 >> 8) >> 8;
      v414 = (((v412 >> 8) | (v412 << 24)) >> 8) | (((v412 >> 8) | (v412 << 24)) << 24);
      *(v413 - 2) = (unsigned __int16)(v412 >> 8) >> 8;
      *(v413 - 7) = __ROR4__((((v363 >> 8) | (v363 << 24)) >> 8) | (((v363 >> 8) | (v363 << 24)) << 24), 8);
      v631 += 8LL;
      v378 = v383;
      v365 = v647;
      v382 = (unsigned __int8 *)dwBytes;
      *(v413 - 3) = __ROR4__(v414, 8);
      v379 = v384;
      --v380;
    }
    while ( v380 );
    v1 = v656;
    v5 = v649;
    v2 = v671;
    v358 = (char *)v634;
  }
  *(_QWORD *)((char *)v630 + (unsigned int)v644) = (unsigned __int8)v628;
  v415 = GetProcessHeap();
  v416 = HeapAlloc(v415, 8u, 0x30uLL);
  v645 = (SIZE_T)v416;
  v417 = 0LL;
  if ( v416 )
    v417 = v416;
  v634 = v417;
  dwBytes = 0LL;
  v418 = v416 == 0LL ? 0xC0000017 : 0;
  if ( v416 )
  {
    v419 = v634;
    *(_DWORD *)v634 = (_DWORD)Src;
    v420 = GetProcessHeap();
    v421 = HeapAlloc(v420, 8u, (unsigned int)Src);
    if ( v421
      && (v419[1] = v421,
          memcpy_0(v421, v630, (unsigned int)Src),
          v638 = v641,
          *((_DWORD *)v419 + 4) = 160,
          v422 = GetProcessHeap(),
          (v423 = HeapAlloc(v422, 8u, 0xA0uLL)) != 0LL) )
    {
      v419[3] = v423;
      v424 = (_OWORD *)v419[3];
      LODWORD(v641) = v638;
      *v424 = xmmword_180118930[0];
      v424[1] = xmmword_180118930[1];
      v424[2] = xmmword_180118930[2];
      v424[3] = xmmword_180118930[3];
      v424[4] = xmmword_180118930[4];
      v424[5] = xmmword_180118930[5];
      v424[6] = xmmword_180118930[6];
      v424[7] = xmmword_180118930[7];
      v424[8] = xmmword_180118930[8];
      v424[9] = xmmword_180118930[9];
      *((_DWORD *)v419 + 8) = 8;
      v425 = GetProcessHeap();
      v426 = HeapAlloc(v425, 8u, 8uLL);
      if ( v426 )
      {
        v419[5] = v426;
        v427 = (const wchar_t *)v634;
        v418 = 0;
        **((_QWORD **)v634 + 5) = qword_1801189D0;
        v428 = v427;
LABEL_571:
        psz = 0LL;
        goto LABEL_572;
      }
      v418 = -1073741801;
      LODWORD(v641) = v638;
    }
    else
    {
      v418 = -1073741801;
    }
  }
  v429 = v634;
  if ( v634 )
  {
    dwBytes = *((_QWORD *)v634 + 1);
    if ( dwBytes )
    {
      v430 = GetProcessHeap();
      HeapFree(v430, 0, (LPVOID)dwBytes);
      v429 = v634;
      *((_QWORD *)v634 + 1) = 0LL;
    }
    dwBytes = v429[3];
    if ( dwBytes )
    {
      v431 = GetProcessHeap();
      HeapFree(v431, 0, (LPVOID)dwBytes);
      v429 = v634;
      *((_QWORD *)v634 + 3) = 0LL;
    }
    dwBytes = v429[5];
    if ( dwBytes )
    {
      v432 = GetProcessHeap();
      HeapFree(v432, 0, (LPVOID)dwBytes);
      *((_QWORD *)v634 + 5) = 0LL;
    }
    v433 = GetProcessHeap();
    HeapFree(v433, 0, v634);
  }
  if ( v418 >= 0 )
  {
    v428 = psz;
    goto LABEL_571;
  }
  v428 = 0LL;
LABEL_572:
  v625 = (size_t *)v428;
  v434 = GetProcessHeap();
  HeapFree(v434, 0, v630);
  v435 = psz;
  if ( psz )
  {
    dwBytes = *((_QWORD *)psz + 1);
    if ( dwBytes )
    {
      v608 = GetProcessHeap();
      HeapFree(v608, 0, (LPVOID)dwBytes);
      v435 = psz;
      *((_QWORD *)psz + 1) = 0LL;
    }
    dwBytes = *((_QWORD *)v435 + 3);
    if ( dwBytes )
    {
      v609 = GetProcessHeap();
      HeapFree(v609, 0, (LPVOID)dwBytes);
      v435 = psz;
      *((_QWORD *)psz + 3) = 0LL;
    }
    dwBytes = *((_QWORD *)v435 + 5);
    if ( dwBytes )
    {
      v610 = GetProcessHeap();
      HeapFree(v610, 0, (LPVOID)dwBytes);
      *((_QWORD *)psz + 5) = 0LL;
    }
    v611 = GetProcessHeap();
    HeapFree(v611, 0, (LPVOID)psz);
    v436 = v625;
  }
  else
  {
    v436 = v625;
  }
  v6 = v418 | 0x10000000;
  if ( v6 < 0 )
    goto LABEL_440;
  v437 = (const void **)v436;
  Src = v436 + 4;
  v638 = *((_DWORD *)v436 + 8);
  v630 = v436 + 2;
  LODWORD(v647) = *((_DWORD *)v436 + 4);
  if ( *(_DWORD *)v436 >= 0xFFFFFFFC )
  {
LABEL_576:
    v6 = -805306219;
    goto LABEL_440;
  }
  v438 = *(_DWORD *)v436 + 8;
  v625 = v436;
  if ( v438 < *(_DWORD *)v436 + 4
    || (v439 = v438 + v647, v438 + (unsigned int)v647 < v438)
    || (v440 = v439 + 4, v439 + 4 < v439)
    || v440 + v638 < v440 )
  {
    v6 = -805306219;
    v625 = v436;
    goto LABEL_440;
  }
  v631 = v440 + v638;
  v441 = GetProcessHeap();
  v442 = HeapAlloc(v441, 8u, v631);
  v671 = v442;
  if ( v442 )
  {
    *v442 = *(_DWORD *)v437;
    dwBytes = (SIZE_T)(v442 + 1);
    if ( v442 + 1 < v442 )
    {
      v671 = v442;
    }
    else
    {
      memcpy_0(v442 + 1, v437[1], *(unsigned int *)v437);
      v443 = (_DWORD *)(dwBytes + *(unsigned int *)v437);
      if ( (unsigned __int64)v443 >= dwBytes )
      {
        v459 = (unsigned int *)v630;
        *v443 = *(_DWORD *)v630;
        dwBytes = (SIZE_T)(v443 + 1);
        if ( v443 + 1 >= v443 )
        {
          memcpy_0(v443 + 1, v437[3], *v459);
          v460 = dwBytes;
          v461 = (_DWORD *)(dwBytes + *(unsigned int *)v630);
          dwBytes = (SIZE_T)v461;
          if ( (unsigned __int64)v461 >= v460 )
          {
            v462 = (unsigned int *)Src;
            *v461 = *(_DWORD *)Src;
            if ( v461 + 1 >= v461 )
            {
              memcpy_0(v461 + 1, v437[5], *v462);
              if ( dwBytes + 4 + *(unsigned int *)Src >= dwBytes + 4 )
              {
                v447 = v437;
                v450 = v631;
                v449 = v641;
                v452 = v671;
                LODWORD(v637) = v631;
                v451 = v358;
                v633 = v671;
                v630 = v437;
                psz = (STRSAFE_PCNZWCH)v358;
                v631 = (SIZE_T)v5;
                Src = v2;
                goto LABEL_587;
              }
            }
          }
        }
      }
    }
    v444 = -1073741675;
    v445 = GetProcessHeap();
    HeapFree(v445, 0, v671);
    v446 = v633;
    v447 = v625;
    v448 = (int)v633;
  }
  else
  {
    v447 = v625;
    v446 = 0LL;
    v448 = 0;
    v633 = 0LL;
    LODWORD(v637) = 0;
    v444 = -1073741801;
  }
  v449 = v641;
  v6 = v444 | 0x10000000;
  psz = (STRSAFE_PCNZWCH)v358;
  v450 = v448;
  v631 = (SIZE_T)v5;
  v451 = v358;
  Src = v2;
  v452 = v446;
  v630 = v447;
  if ( v6 < 0 )
    goto LABEL_440;
LABEL_587:
  v453 = -1;
  if ( v449 < 0xFFFFFFF8 )
    v453 = v449 + 8;
  v6 = v449 >= 0xFFFFFFF8 ? -805306219 : 0x10000000;
  if ( v449 + 8 < 8 )
  {
    if ( v6 < 0 )
      goto LABEL_440;
    v455 = v633;
    v468 = v648;
  }
  else
  {
    v454 = (v453 + 7) & 0xFFFFFFF8;
    if ( v454 < v453 )
    {
LABEL_597:
      v6 = -1073741675;
      goto LABEL_440;
    }
    v358 = v451;
    v447 = v630;
    v2 = Src;
    v455 = v452;
    LODWORD(v637) = v450;
    v5 = (void *)v631;
    v633 = v452;
    v625 = (size_t *)v630;
    if ( v454 + 8 < v454 )
    {
      v358 = (char *)psz;
      v6 = -1073741675;
      v625 = (size_t *)v630;
      v633 = v452;
      goto LABEL_440;
    }
    if ( !lpMem[1] )
      goto LABEL_848;
    v625 = (size_t *)v630;
    v633 = v452;
    if ( LODWORD(lpMem[0]) <= 1 )
      goto LABEL_848;
    v456 = (unsigned int *)lpMem[1];
    for ( LODWORD(Size) = 0; ; LODWORD(Size) = Size + 1 )
    {
      v457 = v456 + 1;
      v458 = *v456;
      v634 = v455;
      if ( (_DWORD)Size )
        break;
      v633 = v455;
      v625 = (size_t *)v630;
      if ( v457 < v456 )
        goto LABEL_597;
      v456 = (unsigned int *)((char *)v457 + v458);
      LODWORD(v637) = v450;
      if ( (unsigned int *)((char *)v457 + v458) < v457 )
      {
        v455 = v634;
        v6 = -1073741675;
        goto LABEL_439;
      }
    }
    if ( v457 < v456 )
      goto LABEL_597;
    v625 = (size_t *)v630;
    v633 = v455;
    if ( LODWORD(lpMem[0]) <= 2 )
    {
LABEL_848:
      v6 = -1073741811;
      goto LABEL_440;
    }
    v463 = lpMem[1];
    for ( LODWORD(Size) = 0; ; LODWORD(Size) = Size + 1 )
    {
      LODWORD(v647) = *v463;
      v464 = v463 + 1;
      v634 = v455;
      if ( (unsigned int)Size >= 2 )
        break;
      v633 = v455;
      v625 = (size_t *)v630;
      if ( v464 < v463 )
        goto LABEL_597;
      v463 = (_DWORD *)((char *)v464 + (unsigned int)*v463);
      LODWORD(v637) = v450;
      if ( v463 < v464 )
      {
        v455 = v634;
        v6 = -1073741675;
        goto LABEL_439;
      }
    }
    if ( v464 < v463 )
      goto LABEL_597;
    v633 = v455;
    v625 = (size_t *)v630;
    if ( v454 + 12 < 4
      || (v465 = v454 + 16, v454 + 16 < v454 + 12)
      || (v466 = v465 + v458, v465 + (unsigned int)v458 < v465)
      || (v467 = v466 + 4, v466 + 4 < v466)
      || (v468 = v467 + v647, LODWORD(v648) = v467 + v647, v467 + (unsigned int)v647 < v467) )
    {
      v6 = -1073741675;
      goto LABEL_439;
    }
    if ( v468 > 0x400000 )
    {
      v6 = -2147418113;
      goto LABEL_440;
    }
    v625 = (size_t *)v630;
    v633 = v455;
  }
  dwBytes = (SIZE_T)v455;
  v630 = v447;
  v469 = v468;
  v470 = GetProcessHeap();
  *(_QWORD *)&v471 = HeapAlloc(v470, 8u, v469);
  *((_QWORD *)&v471 + 1) = v646;
  if ( (_QWORD)v471 )
    *((_QWORD *)&v471 + 1) = v471;
  v646 = (LPVOID)*((_QWORD *)&v471 + 1);
  v6 = (_QWORD)v471 != 0LL ? 0x10000000 : -805306345;
  if ( (_QWORD)v471 )
  {
    hModule = 0LL;
    *(_QWORD *)&v471 = v633;
    v668 = 0LL;
    v669 = 0LL;
    if ( !v633 || !*((_QWORD *)&v471 + 1) )
    {
      v6 = -2147024809;
      goto LABEL_440;
    }
    v668 = v471;
    LODWORD(v669) = v637;
    *(_QWORD *)((char *)&v669 + 4) = (unsigned int)v648;
    if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
      && (ProcAddress = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
    {
      v473 = ((__int64 (__fastcall *)(__int64, __int128 *))ProcAddress)(134LL, &v668);
      v6 = v473 | 0x10000000;
      if ( v473 >= 0 )
      {
        v474 = DWORD1(v669);
        goto LABEL_633;
      }
    }
    else
    {
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      if ( v6 >= 0 )
        v6 = -2147467259;
    }
    if ( v6 == -805306333 )
    {
      v6 = -2147024774;
      goto LABEL_440;
    }
    if ( v6 < 0 )
      goto LABEL_440;
    v474 = v648;
LABEL_633:
    psz = 0LL;
    if ( v474 < 4 )
      goto LABEL_850;
    v475 = *(unsigned int *)v646;
    v476 = (char *)v646 + 4;
    LODWORD(v654) = *(_DWORD *)v646;
    if ( (char *)v646 + 4 < v646 )
      goto LABEL_576;
    v447 = v630;
    v633 = (LPVOID)dwBytes;
    v625 = (size_t *)v630;
    if ( v474 - 4 < (unsigned int)v475 )
    {
      v6 = -805306306;
    }
    else
    {
      v477 = &v476[v475];
      v629 = v475;
      v645 = (SIZE_T)&v476[v475];
      if ( &v476[v475] >= v476 )
      {
        v478 = v475 + 4;
        if ( (unsigned int)v475 >= 0xFFFFFFFC )
        {
LABEL_638:
          v6 = -805306219;
LABEL_639:
          v625 = (size_t *)v447;
LABEL_640:
          v633 = (LPVOID)dwBytes;
          goto LABEL_440;
        }
        if ( v474 - v478 >= 4 )
        {
          v479 = *(unsigned int *)v477;
          v480 = v477 + 4;
          LODWORD(Size) = *(_DWORD *)v477;
          v633 = (LPVOID)dwBytes;
          v625 = (size_t *)v630;
          if ( v477 + 4 < v477 )
            goto LABEL_576;
          v481 = v478 + 4;
          v455 = (void *)dwBytes;
          if ( v478 + 4 < v478 )
            goto LABEL_652;
          if ( v474 - v481 >= (unsigned int)v479 )
          {
            v482 = (_DWORD *)((char *)v480 + v479);
            v641 = v479;
            v633 = (LPVOID)dwBytes;
            v625 = (size_t *)v630;
            if ( (_DWORD *)((char *)v480 + v479) < v480 )
              goto LABEL_576;
            v483 = v479 + v481;
            v455 = (void *)dwBytes;
            if ( (unsigned int)v479 + v481 < v481 )
            {
LABEL_652:
              v6 = -805306219;
LABEL_439:
              v625 = (size_t *)v447;
              v633 = v455;
              goto LABEL_440;
            }
            if ( v474 - v483 >= 4 )
            {
              v484 = *v482;
              LODWORD(v648) = *v482;
              v637 = (size_t)(v482 + 1);
              v633 = (LPVOID)dwBytes;
              v625 = (size_t *)v630;
              if ( v482 + 1 < v482 )
                goto LABEL_576;
              v638 = v483 + 4;
              if ( v483 + 4 < v483 )
              {
                v6 = -805306219;
                v625 = (size_t *)v630;
                v633 = (LPVOID)dwBytes;
                goto LABEL_440;
              }
              v631 = dwBytes;
              v630 = v5;
              v627 = v2;
              v644 = (size_t)v447;
              if ( v474 - v638 >= v484 )
              {
                LODWORD(v647) = v484 + v638;
                if ( v484 + v638 < v638 )
                  goto LABEL_638;
                if ( v474 != (_DWORD)v647 )
                {
                  v6 = -805306306;
                  goto LABEL_639;
                }
                if ( (unsigned int)v654 + v484 + (_DWORD)Size + 12LL != v474 )
                {
                  v6 = -805306306;
                  v625 = (size_t *)v644;
                  goto LABEL_640;
                }
                v485 = GetProcessHeap();
                v486 = (size_t *)HeapAlloc(v485, 8u, 0x30uLL);
                v487 = 0LL;
                dwBytes = (SIZE_T)v486;
                if ( v486 )
                  v487 = v486;
                v670 = v487;
                v488 = v486 == 0LL ? 0xC0000017 : 0;
                v489 = v630;
                v490 = v644;
                v5 = v630;
                v491 = (void *)v631;
                v625 = (size_t *)v644;
                v649 = v630;
                v633 = (LPVOID)v631;
                v671 = v2;
                v634 = v358;
                if ( !dwBytes )
                  goto LABEL_798;
                v492 = (unsigned __int64)v646 + 4;
                if ( v646 == (LPVOID)-4LL )
                {
                  *(_DWORD *)v487 &= v492;
                  v493 = v637;
                  v487[1] &= v492;
                  v5 = v489;
                  v637 = v493;
                  v625 = (size_t *)v490;
                  v649 = v489;
                  v633 = v491;
                }
                else
                {
                  *(_DWORD *)v487 = (_DWORD)v654;
                  v558 = GetProcessHeap();
                  v559 = v629;
                  v560 = HeapAlloc(v558, 8u, v629);
                  if ( !v560 )
                  {
                    v488 = -1073741801;
                    v2 = v627;
                    v5 = v630;
                    v625 = (size_t *)v644;
                    v633 = (LPVOID)v631;
                    v671 = v627;
                    v649 = v630;
                    v634 = v358;
LABEL_798:
                    v588 = v670;
                    if ( v670 )
                    {
                      v629 = *((_QWORD *)v670 + 1);
                      if ( v629 )
                      {
                        v589 = GetProcessHeap();
                        HeapFree(v589, 0, (LPVOID)v629);
                        v588 = v670;
                        *((_QWORD *)v670 + 1) = 0LL;
                      }
                      v629 = v588[3];
                      if ( v629 )
                      {
                        v590 = GetProcessHeap();
                        HeapFree(v590, 0, (LPVOID)v629);
                        v588 = v670;
                        *((_QWORD *)v670 + 3) = 0LL;
                      }
                      v629 = v588[5];
                      if ( v629 )
                      {
                        v591 = GetProcessHeap();
                        HeapFree(v591, 0, (LPVOID)v629);
                        *((_QWORD *)v670 + 5) = 0LL;
                      }
                      v592 = GetProcessHeap();
                      HeapFree(v592, 0, v670);
                    }
                    v487 = (size_t *)psz;
LABEL_671:
                    if ( v488 < 0 )
                    {
                      v639 = 0LL;
                      if ( v487 )
                      {
                        v629 = v487[1];
                        if ( v629 )
                        {
                          v584 = GetProcessHeap();
                          HeapFree(v584, 0, (LPVOID)v629);
                          v487 = (size_t *)psz;
                          *((_QWORD *)psz + 1) = 0LL;
                        }
                        v629 = v487[3];
                        if ( v629 )
                        {
                          v585 = GetProcessHeap();
                          HeapFree(v585, 0, (LPVOID)v629);
                          v487 = (size_t *)psz;
                          *((_QWORD *)psz + 3) = 0LL;
                        }
                        v629 = v487[5];
                        if ( v629 )
                        {
                          v586 = GetProcessHeap();
                          HeapFree(v586, 0, (LPVOID)v629);
                          *((_QWORD *)psz + 5) = 0LL;
                        }
                        v587 = GetProcessHeap();
                        HeapFree(v587, 0, (LPVOID)psz);
                        v639 = 0LL;
                      }
                    }
                    else
                    {
                      v639 = v487;
                    }
                    v6 = v488 | 0x10000000;
                    if ( v6 < 0 )
                      goto LABEL_440;
                    v499 = v639;
                    if ( !v639 || (dwBytes = *((_QWORD *)v639 + 1)) == 0 || !*(_DWORD *)v639 )
                    {
                      v6 = -805306355;
                      goto LABEL_440;
                    }
                    Src = (void *)(*(unsigned int *)v639 - 8LL);
                    v642 = MemoryAlloc((unsigned __int64)Src);
                    v500 = (unsigned int *)v642;
                    if ( !v642 )
                    {
LABEL_696:
                      v642 = 0LL;
                      v6 = -805306367;
                      goto LABEL_440;
                    }
                    v501 = 0;
                    v502 = (unsigned __int8 *)dwBytes;
                    psz = (STRSAFE_PCNZWCH)((unsigned __int8)Src & 7);
                    v503 = (SIZE_T)v642;
                    LOBYTE(v628) = 0;
                    v670 = (void *)0x7F1137FAB69605ELL;
                    v631 = dwBytes;
                    v630 = v642;
                    if ( ((unsigned __int8)Src & 7) != 0 )
                    {
                      LODWORD(v637) = 0;
                      LODWORD(v627) = 0;
                      LODWORD(v644) = 0;
                      v504 = v625;
                      v505 = v633;
                      v506 = 0;
                      LODWORD(v648) = v652;
                      v507 = 0;
                      do
                      {
                        v508 = *v502++;
                        LODWORD(v637) = v508;
                        v509 = v648;
                        if ( (unsigned int)v644 >= 4 )
                        {
                          LODWORD(v637) = (_DWORD)v637 << v648;
                          v507 |= v637;
                        }
                        else
                        {
                          LODWORD(v637) = (_DWORD)v637 << (v648 - 32);
                          v506 |= v637;
                          v509 = v648;
                        }
                        LODWORD(v644) = v644 + 1;
                        LODWORD(v648) = v509 - 8;
                      }
                      while ( (int)v644 < (int)psz );
                      v631 = (SIZE_T)v502;
                      v510 = (SIZE_T)v502;
                      v511 = v506 ^ 0x92F65A5;
                      LODWORD(v627) = v506;
                      v1 = v656;
                      v512 = v507 ^ 0x699A899C;
                      LODWORD(Size) = 0;
                      v513 = (int)v627;
                      LODWORD(v637) = v507;
                      v501 = v628;
                      v638 = v511;
                      LODWORD(v654) = v512;
                      do
                      {
                        v625 = v504;
                        v645 = (SIZE_T)v630 + 1;
                        if ( (int)Size >= 4 )
                        {
                          v514 = ((_DWORD)v654 << 8) | ((unsigned __int64)(unsigned int)v654 >> 24);
                          LODWORD(v654) = v514;
                        }
                        else
                        {
                          v514 = (v638 << 8) | ((unsigned __int64)v638 >> 24);
                          v638 = v514;
                        }
                        *(_BYTE *)v630 = v514;
                        v630 = (LPVOID)v645;
                        v256 = (int)Size + 1 < (int)psz;
                        LODWORD(Size) = Size + 1;
                        v504 = v625;
                      }
                      while ( v256 );
                      LODWORD(v627) = v513;
                      v500 = (unsigned int *)v642;
                      v631 = v510;
                      LODWORD(v641) = v512;
                      v633 = v505;
                      v503 = v645;
                      LODWORD(Size) = v511;
                      v639 = v499;
                      v634 = v358;
                      v671 = v2;
                      v649 = v5;
                      if ( (unsigned int)psz > 4 )
                      {
                        LODWORD(v641) = (unsigned int)v641 >> (8 * (8 - (_BYTE)psz)) << (8 * (8 - (_BYTE)psz));
                      }
                      else
                      {
                        LODWORD(v641) = 0;
                        if ( (unsigned int)psz < 4 )
                          LODWORD(Size) = v511 >> (8 * (4 - (_BYTE)psz)) << (8 * (4 - (_BYTE)psz));
                      }
                      v515 = (int)v627;
                    }
                    else
                    {
                      LODWORD(v637) = -1;
                      v515 = 0;
                      LODWORD(v641) = 0;
                      LODWORD(Size) = 0;
                    }
                    v516 = (char *)Src;
                    if ( (unsigned __int64)Src >> 3 )
                    {
                      v520 = HIDWORD(v670);
                      v521 = (_BYTE *)(v503 + 7);
                      v522 = Size;
                      v523 = HIDWORD(v670) ^ 0xAB69605E;
                      v524 = v641;
                      v525 = (unsigned __int8 *)(v631 + 2);
                      v526 = (unsigned __int64)Src >> 3;
                      LODWORD(v648) = WORD2(v670);
                      LODWORD(v647) = WORD1(v670);
                      LODWORD(v644) = 24670;
                      v527 = v637;
                      do
                      {
                        v528 = v525[1] | ((*v525 | ((*(v525 - 1) | (*(v525 - 2) << 8)) << 8)) << 8);
                        v529 = v528 ^ v522;
                        v530 = v525[4] | ((v525[3] | (v525[2] << 8)) << 8);
                        v531 = v525[5];
                        v629 = (size_t)(v525 + 8);
                        v532 = v531 | (v530 << 8);
                        v533 = v523 ^ v529 ^ v532 ^ v524;
                        v534 = (__ROR4__(v533, 22) + v648 * __ROR4__(v533 + 1419157410, 27)) ^ v529;
                        v535 = (WORD1(v670) * __ROR4__(v534 + v520, 9) - __ROR4__(v534, 30)) ^ v533;
                        v536 = (v644 * (v535 - v648) - (v535 >> 13)) ^ v534;
                        v537 = (HIWORD(v670) * __ROR4__(WORD1(v670) ^ v536, 26) - __ROR4__(v536, 30)) ^ v535;
                        v538 = (v520 - (v537 ^ 0xAB69605E)) ^ v536;
                        v539 = (v647 * (v648 ^ v538)) ^ __ROR4__(v538, 6) ^ v537;
                        v540 = (__ROR4__(v539, 30) + v644 * __ROR4__(v539 + v520, 15)) ^ v538;
                        v541 = (HIWORD(v670) * __ROR4__(v540 + 1419157410, 14) - __ROR4__(v540, 24)) ^ v539;
                        v542 = __ROR4__(v541, 10) ^ (v648 * __ROR4__(v541 ^ 0xAB69605E, 12)) ^ v540;
                        v543 = (v542 >> 10) ^ (WORD1(v670) * (v542 ^ HIWORD(v670))) ^ v541;
                        v544 = (HIWORD(v670) * (v644 + __ROR4__(~v543, 5))) ^ v542;
                        v545 = v543 ^ (v544 - HIWORD(v670)) ^ 0xAB69605E;
                        v546 = ((v545 >> 2) + v648 * __ROR4__(HIWORD(v670) ^ v545, 30)) ^ v544;
                        v547 = (__ROR4__(v546, 25) + WORD1(v670) * __ROR4__(v546 - v520, 6)) ^ v545;
                        v548 = (v644 * (v648 ^ v547) + __ROR4__(v547, 9)) ^ v546;
                        v549 = (__ROR4__(v548, 25) + HIWORD(v670) * __ROR4__(WORD1(v670) ^ v548, 27)) ^ v547;
                        v550 = v520 ^ v548 ^ v549 ^ 0xAB69605E;
                        v551 = (v648 * (__ROR4__(v550, 3) - WORD1(v670))) ^ v549;
                        v552 = (v644 * __ROR4__(v551 - v520, 1) - __ROR4__(v551, 6)) ^ v550;
                        v553 = (__ROR4__(v552, 18) + HIWORD(v670) * __ROR4__(v552 - 1419157410, 29)) ^ v551;
                        v554 = (v648 * __ROR4__(v553 - 1419157410, 17) - __ROR4__(v553, 14)) ^ v552;
                        v555 = (v554 >> 3) ^ (WORD1(v670) * (v644 ^ v554)) ^ v553;
                        v556 = __ROR4__(v555, 30);
                        v557 = __ROR4__(v520 ^ v555, 28);
                        v524 = v527 ^ v555;
                        v527 = v532;
                        v522 = v515 ^ v554 ^ v556 ^ (v644 * v557);
                        *(v521 - 4) = v522;
                        *v521 = v524;
                        v521 += 8;
                        *(v521 - 13) = (unsigned __int64)v522 >> 8;
                        *(v521 - 9) = BYTE1(v524);
                        v525 = (unsigned __int8 *)v629;
                        *(v521 - 14) = (unsigned __int16)((unsigned __int64)v522 >> 8) >> 8;
                        *(v521 - 10) = (unsigned __int16)(v524 >> 8) >> 8;
                        *(v521 - 15) = __ROR4__(
                                         ((((unsigned __int64)v522 >> 8) | (v522 << 24)) >> 8) | ((((unsigned __int64)v522 >> 8) | (v522 << 24)) << 24),
                                         8);
                        v515 = v528;
                        *(v521 - 11) = __ROR4__(
                                         (((v524 >> 8) | (v524 << 24)) >> 8) | (((v524 >> 8) | (v524 << 24)) << 24),
                                         8);
                        --v526;
                      }
                      while ( v526 );
                      v501 = v628;
                      v1 = v656;
                      v5 = v649;
                      v2 = v671;
                      v358 = (char *)v634;
                      v499 = v639;
                      v500 = (unsigned int *)v642;
                      v516 = (char *)Src;
                    }
                    v517 = 0LL;
                    if ( v516 )
                    {
                      do
                        v501 ^= *((_BYTE *)v500 + v517++);
                      while ( v517 < (unsigned __int64)v516 );
                    }
                    v518 = v499;
                    v519 = v633;
                    v629 = (size_t)v625;
                    v639 = v499;
                    if ( v501 != *(_QWORD *)&v516[dwBytes] )
                    {
                      MemoryFree(v500);
                      goto LABEL_696;
                    }
                    v582 = (const wchar_t *)v629;
                    v625 = (size_t *)v629;
                    v639 = v499;
                    if ( (unsigned int)v516 >= 4 )
                    {
                      LODWORD(v647) = *v500;
                      v629 = (size_t)(v500 + 1);
                      v625 = (size_t *)v582;
                      v639 = v499;
                      v642 = v500;
                      if ( v500 + 1 < v500 )
                        goto LABEL_723;
                      if ( (unsigned int)((_DWORD)v516 - 4) < 4 )
                      {
                        v564 = -1073741762;
LABEL_753:
                        v642 = v500;
                        v639 = v518;
                        v625 = (size_t *)v582;
                        goto LABEL_751;
                      }
                      v583 = v500[1];
                      v575 = v500 + 2;
                      v638 = v500[1];
                      v654 = v500 + 2;
                      if ( (unsigned __int64)(v500 + 2) < v629 )
                      {
                        v564 = -1073741675;
LABEL_786:
                        v625 = (size_t *)v582;
                        v639 = v518;
                        v642 = v500;
                        goto LABEL_724;
                      }
                      v670 = v633;
                      psz = v582;
                      v630 = v500;
                      if ( (int)v516 - 8 >= (unsigned int)v583 )
                      {
                        if ( (unsigned int)v583 < 0xFFFFFFF8 )
                        {
                          v572 = (SIZE_T)&v575[v583];
                          v637 = v583;
                          if ( (char *)v630 + (unsigned int)v516 < &v575[v583]
                            || (unsigned int)v516 + (_BYTE *)v630 - v575 - v583 >= 8 )
                          {
                            v564 = -1073741762;
                            v625 = (size_t *)psz;
                            v633 = v670;
                            v642 = v630;
                            v639 = v518;
                            goto LABEL_724;
                          }
                          v571 = v670;
                          v573 = 0LL;
                          LODWORD(Size) = 0;
                          v564 = 0;
                          v642 = v630;
                          v500 = (unsigned int *)v630;
                          v582 = psz;
                          v648 = 0LL;
                          v639 = v518;
                          v625 = (size_t *)psz;
                          v633 = v670;
                          if ( v575 )
                          {
                            v642 = v630;
                            v570 = v575;
                            v639 = v518;
                            v625 = (size_t *)psz;
                            if ( v572 >= (unsigned __int64)v575 )
                            {
                              v654 = (unsigned int *)v575;
                              v633 = v670;
                              while ( 1 )
                              {
                                v631 = (SIZE_T)psz;
                                v629 = v572;
                                if ( (unsigned __int64)v570 >= v572 )
                                  break;
                                if ( v570 + 1 < v570 )
                                  goto LABEL_723;
                                v519 = v571;
                                dwBytes = v629;
                                v633 = v571;
                                v625 = (size_t *)psz;
                                v639 = v518;
                                v642 = v630;
                                v654 = (unsigned int *)v575;
                                if ( (unsigned __int64)(v570 + 1) > v629 )
                                {
                                  v582 = (const wchar_t *)v631;
                                  v564 = -1073741811;
                                  v633 = v571;
                                  goto LABEL_786;
                                }
                                if ( *v570 >= 0xFFFFFFFC )
                                  goto LABEL_722;
                                v569 = (SIZE_T)v570 + (unsigned int)(*v570 + 4);
                                if ( v569 < (unsigned __int64)v570 )
                                  goto LABEL_722;
                                v564 = 0;
                                v570 = (_DWORD *)((char *)v570 + (unsigned int)(*v570 + 4));
                                if ( v569 > dwBytes )
                                {
                                  v564 = -1073741811;
                                  goto LABEL_753;
                                }
                                LODWORD(Size) = Size + 1;
                                v571 = v519;
                                v572 = dwBytes;
                              }
                              if ( v570 == (_DWORD *)v572 )
                              {
                                v573 = (void *)v648;
                                goto LABEL_744;
                              }
                              v564 = -1073741811;
                              goto LABEL_724;
                            }
                            v633 = v670;
                            goto LABEL_723;
                          }
LABEL_744:
                          psz = (STRSAFE_PCNZWCH)v571;
                          v629 = (size_t)v582;
                          Src = v518;
                          if ( v638 )
                          {
                            v574 = GetProcessHeap();
                            v648 = (SIZE_T)HeapAlloc(v574, 8u, v637);
                            v573 = (void *)v648;
                            if ( !v648 )
                            {
                              v564 = -1073741801;
                              goto LABEL_724;
                            }
                            v575 = v654;
                            v564 = 0;
                          }
                          if ( v575 )
                          {
                            memcpy_0(v573, v575, v637);
                            v573 = (void *)v648;
                          }
                          v657[0] = (LPVOID)__PAIR64__(v638, Size);
                          v657[1] = v573;
                          v519 = (void *)psz;
                          v642 = v630;
                          v639 = Src;
                          v625 = (size_t *)v629;
                          v633 = (LPVOID)psz;
                          if ( (_DWORD)v647 == (_DWORD)Size )
                            goto LABEL_724;
                          v564 = -1073741762;
                          v642 = v630;
                          v639 = Src;
                          v625 = (size_t *)v629;
LABEL_751:
                          v633 = v519;
                          goto LABEL_724;
                        }
LABEL_722:
                        v642 = v500;
                        v639 = v518;
                        v625 = (size_t *)v582;
                        v633 = v519;
LABEL_723:
                        v564 = -1073741675;
LABEL_724:
                        v6 = v564 | 0x10000000;
                        goto LABEL_440;
                      }
                    }
                    v564 = -1073741762;
                    goto LABEL_724;
                  }
                  *((_QWORD *)v670 + 1) = v560;
                  v488 = 0;
                  memcpy_0(v560, (const void *)v492, v559);
                  v5 = v630;
                  v2 = v627;
                  v487 = (size_t *)v670;
                  v493 = v637;
                  v625 = (size_t *)v644;
                  v633 = (LPVOID)v631;
                  v649 = v630;
                }
                v634 = v358;
                v671 = v2;
                v494 = v645 + 4;
                if ( v645 == -4LL )
                {
                  *((_DWORD *)v487 + 4) &= v494;
                  v487[3] &= v494;
                }
                else
                {
                  *((_DWORD *)v487 + 4) = Size;
                  v562 = GetProcessHeap();
                  v563 = HeapAlloc(v562, 8u, v641);
                  if ( !v563 )
                  {
LABEL_854:
                    v488 = -1073741801;
                    goto LABEL_798;
                  }
                  *((_QWORD *)v670 + 3) = v563;
                  v488 = 0;
                  memcpy_0(v563, (const void *)(v645 + 4), v641);
                  v493 = v637;
                  v487 = (size_t *)v670;
                  v671 = v2;
                  v649 = v5;
                  v634 = v358;
                }
                if ( !v493 )
                {
                  *((_DWORD *)v487 + 8) = 0;
                  v487[5] = 0LL;
                  goto LABEL_670;
                }
                v495 = (unsigned int)v648;
                *((_DWORD *)v487 + 8) = v648;
                v496 = v495;
                v629 = v495;
                v497 = GetProcessHeap();
                v498 = HeapAlloc(v497, 8u, v496);
                if ( v498 )
                {
                  *((_QWORD *)v670 + 5) = v498;
                  v488 = 0;
                  memcpy_0(v498, (const void *)v637, v629);
                  v487 = (size_t *)v670;
                  v671 = v2;
                  v649 = v5;
                  v634 = v358;
LABEL_670:
                  psz = (STRSAFE_PCNZWCH)v487;
                  goto LABEL_671;
                }
                goto LABEL_854;
              }
            }
          }
        }
LABEL_850:
        v6 = -805306306;
        goto LABEL_440;
      }
      v6 = -805306219;
    }
    v625 = (size_t *)v630;
    v633 = (LPVOID)dwBytes;
  }
LABEL_440:
  if ( v358 )
  {
LABEL_861:
    v612 = GetProcessHeap();
    HeapFree(v612, 0, v358);
  }
  if ( v625 )
  {
    v629 = v625[1];
    if ( v629 )
    {
      v317 = GetProcessHeap();
      HeapFree(v317, 0, (LPVOID)v629);
      v625[1] = 0LL;
    }
    v629 = v625[3];
    if ( v629 )
    {
      v318 = GetProcessHeap();
      HeapFree(v318, 0, (LPVOID)v629);
      v625[3] = 0LL;
    }
    v629 = v625[5];
    if ( v629 )
    {
      v319 = GetProcessHeap();
      HeapFree(v319, 0, (LPVOID)v629);
      v625[5] = 0LL;
    }
    v320 = GetProcessHeap();
    HeapFree(v320, 0, v625);
  }
  v321 = v633;
  if ( v633 )
  {
    v322 = GetProcessHeap();
    HeapFree(v322, 0, v321);
  }
  v323 = v646;
  if ( v646 )
  {
    v324 = GetProcessHeap();
    HeapFree(v324, 0, v323);
  }
  v325 = v639;
  if ( v639 )
  {
    v629 = *((_QWORD *)v639 + 1);
    if ( v629 )
    {
      v326 = GetProcessHeap();
      HeapFree(v326, 0, (LPVOID)v629);
      v325[1] = 0LL;
    }
    v629 = v325[3];
    if ( v629 )
    {
      v327 = GetProcessHeap();
      HeapFree(v327, 0, (LPVOID)v629);
      v325[3] = 0LL;
    }
    v629 = v325[5];
    if ( v629 )
    {
      v328 = GetProcessHeap();
      HeapFree(v328, 0, (LPVOID)v629);
      v325[5] = 0LL;
    }
    v329 = GetProcessHeap();
    HeapFree(v329, 0, v325);
  }
  v330 = v642;
  if ( v642 )
  {
    v331 = GetProcessHeap();
    HeapFree(v331, 0, v330);
  }
LABEL_463:
  if ( v6 < 0 )
    goto LABEL_8;
  if ( !LODWORD(v657[0]) )
    goto LABEL_524;
  if ( !v657[1] )
  {
LABEL_367:
    v6 = -1073741811;
    goto LABEL_8;
  }
  if ( (char *)v657[1] + 4 < v657[1] )
    goto LABEL_7;
  v332 = 0LL;
  if ( *(_DWORD *)v657[1] )
    v332 = (int *)((char *)v657[1] + 4);
  if ( *(_DWORD *)v657[1] != 4 )
    goto LABEL_370;
  v6 = *v332;
  if ( v6 == -805306333 )
  {
    v333 = -2147024774;
    v651 = -2147024774;
  }
  else
  {
    v333 = v6;
    v651 = v6;
    if ( v6 != -2147024774 )
    {
      v651 = v6;
      if ( v6 < 0 )
        goto LABEL_8;
    }
  }
  if ( LODWORD(v657[0]) != 6 )
  {
LABEL_524:
    v6 = -1073425151;
    goto LABEL_8;
  }
  v334 = 0;
  v335 = (unsigned int *)v657[1];
  for ( ii = 0; ; ii = 1 )
  {
    v337 = *v335;
    v338 = v335 + 1;
    if ( ii )
      break;
    if ( v338 < v335 )
      goto LABEL_7;
    v335 = (unsigned int *)((char *)v338 + v337);
    v651 = v333;
    if ( (unsigned int *)((char *)v338 + v337) < v338 )
      goto LABEL_7;
  }
  if ( v338 < v335 )
    goto LABEL_7;
  v339 = 0LL;
  if ( (_DWORD)v337 )
    v339 = v338;
  if ( (_DWORD)v337 != 8 )
    goto LABEL_370;
  v340 = *(_QWORD *)v339;
  v341 = v657[1];
  for ( jj = 0; ; ++jj )
  {
    v343 = v341 + 1;
    if ( jj >= 2 )
      break;
    if ( v343 < v341 )
      goto LABEL_7;
    v341 = (_DWORD *)((char *)v343 + (unsigned int)*v341);
    v651 = v333;
    if ( v341 < v343 )
      goto LABEL_7;
  }
  if ( v343 < v341 )
    goto LABEL_7;
  v344 = 0LL;
  if ( *v341 )
    v344 = v341 + 1;
  if ( *v341 != 4 )
    goto LABEL_370;
  v345 = *v344;
  v346 = (unsigned int *)v657[1];
  for ( kk = 0; ; ++kk )
  {
    v348 = *v346;
    v349 = v346 + 1;
    if ( kk >= 3 )
      break;
    if ( v349 < v346 )
      goto LABEL_7;
    v346 = (unsigned int *)((char *)v349 + v348);
    v651 = v333;
    if ( (unsigned int *)((char *)v349 + v348) < v349 )
      goto LABEL_7;
  }
  if ( v349 < v346 )
    goto LABEL_7;
  v350 = 0LL;
  if ( (_DWORD)v348 )
    v350 = v346 + 1;
  v351 = v657[1];
  while ( 1 )
  {
    LODWORD(v647) = *v351;
    v352 = v351 + 1;
    if ( v334 >= 4 )
      break;
    if ( v352 < v351 )
      goto LABEL_7;
    v351 = (_DWORD *)((char *)v352 + (unsigned int)*v351);
    v651 = v333;
    if ( v351 < v352 )
      goto LABEL_7;
    ++v334;
  }
  if ( v352 < v351 )
    goto LABEL_7;
  v353 = 0LL;
  if ( (_DWORD)v647 )
    v353 = v352;
  if ( (_DWORD)v647 != 4 )
    goto LABEL_370;
  LODWORD(Size) = *v353;
  v354 = v657[1];
  for ( mm = 0; ; ++mm )
  {
    v356 = v354 + 1;
    if ( mm >= 5 )
      break;
    if ( v356 < v354 )
      goto LABEL_7;
    v354 = (_DWORD *)((char *)v356 + (unsigned int)*v354);
    v651 = v333;
    if ( v354 < v356 )
      goto LABEL_7;
    v333 = v651;
  }
  if ( v356 < v354 )
  {
LABEL_7:
    v6 = -1073741675;
    goto LABEL_8;
  }
  v357 = 0LL;
  if ( *v354 )
    v357 = v354 + 1;
  v6 = 0;
  if ( *v354 != 4 )
    goto LABEL_370;
  if ( v640 != v340 )
    goto LABEL_524;
  v662 = *v357;
  v661 = v345;
  if ( (unsigned int)Size > 4 || (unsigned int)v348 > 4 )
  {
    v6 = -2147024774;
    goto LABEL_8;
  }
  memcpy_0(v1, v350, v348);
LABEL_506:
  if ( v651 )
    v6 = v651;
LABEL_8:
  lpMem[0] = 0LL;
  v11 = lpMem[1];
  if ( lpMem[1] )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v11);
    lpMem[1] = 0LL;
  }
  v657[0] = 0LL;
  v13 = v657[1];
  if ( v657[1] )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v13);
    v657[1] = 0LL;
  }
  if ( v5 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v5);
  }
  if ( v2 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v2);
  }
  if ( v6 < 0 )
  {
    LocalFree(v1);
    switch ( v6 )
    {
      case -805306316:
        v6 = -1073418222;
        goto LABEL_199;
      case -805306139:
      case -1073425151:
        v6 = -1073418201;
        goto LABEL_199;
      case -805306306:
        v6 = -1073418200;
LABEL_199:
        v148 = v658;
        return v6 >= 0 && v148;
    }
LABEL_82:
    if ( v6 == -2147024774 )
      v6 = -1073418210;
    goto LABEL_199;
  }
  if ( v662 )
  {
    *(_OWORD *)v653 = 0LL;
    v17 = 0LL;
    *(_OWORD *)v659 = 0LL;
    v18 = GetProcessHeap();
    v19 = HeapAlloc(v18, 8u, 0xA0uLL);
    if ( !v19 )
    {
      v19 = 0LL;
      goto LABEL_158;
    }
    LODWORD(Size) = 160;
    *v19 = xmmword_1801189E0[0];
    v19[1] = xmmword_1801189E0[1];
    v19[2] = xmmword_1801189E0[2];
    v19[3] = xmmword_1801189E0[3];
    v19[4] = xmmword_1801189E0[4];
    v19[5] = xmmword_1801189E0[5];
    v19[6] = xmmword_1801189E0[6];
    v19[7] = xmmword_1801189E0[7];
    v19[8] = xmmword_1801189E0[8];
    v19[9] = xmmword_1801189E0[9];
    v20 = GetProcessHeap();
    v21 = HeapAlloc(v20, 8u, 8uLL);
    v22 = v21;
    if ( !v21 )
    {
      v17 = 0LL;
      goto LABEL_158;
    }
    *v21 = qword_180118928;
    LODWORD(v637) = 8;
    v629 = __rdtsc();
    v17 = v22;
    LODWORD(v647) = 164;
    v638 = 12;
    HIDWORD(v653[0]) = 196;
    v23 = GetProcessHeap();
    v24 = HeapAlloc(v23, 8u, 0xC4uLL);
    if ( !v24 )
      goto LABEL_158;
    LODWORD(v653[0]) = 0;
    v653[1] = (size_t)v24;
    v25 = v637;
    v26 = Size;
    if ( v24 + 1 < v24 )
      goto LABEL_158;
    if ( (unsigned __int64)(v24 + 2) > v653[1] + HIDWORD(v653[0]) )
      goto LABEL_158;
    *v24 = 4;
    v24[1] = 4;
    v27 = ++LODWORD(v653[0]);
    if ( !v26 )
      goto LABEL_158;
    if ( v653[1] )
    {
      v28 = (unsigned int *)v653[1];
      for ( nn = 0; ; ++nn )
      {
        LODWORD(v637) = v25;
        if ( nn >= v27 )
          break;
        v151 = *v28 + 4;
        if ( *v28 >= 0xFFFFFFFC || (unsigned int *)((char *)v28 + v151) < v28 )
          goto LABEL_158;
        v28 = (unsigned int *)((char *)v28 + v151);
      }
      if ( v28 + 1 < v28 || (unsigned __int64)v28 + v26 + 4 > v653[1] + HIDWORD(v653[0]) )
        goto LABEL_158;
      *v28 = v26;
      memcpy_0(v28 + 1, v19, v26);
      v30 = v637;
    }
    else if ( (int)RtlUIntAdd(HIDWORD(v653[0]), (unsigned int)v647, (char *)v653 + 4) < 0 )
    {
      goto LABEL_158;
    }
    v31 = ++LODWORD(v653[0]);
    if ( v17 )
    {
      if ( !v30 )
        goto LABEL_158;
    }
    else if ( v30 )
    {
      goto LABEL_158;
    }
    if ( v653[1] )
    {
      v32 = (unsigned int *)v653[1];
      for ( i1 = 0; i1 < v31; ++i1 )
      {
        v152 = *v32 + 4;
        if ( *v32 >= 0xFFFFFFFC || (unsigned int *)((char *)v32 + v152) < v32 )
          goto LABEL_158;
        v32 = (unsigned int *)((char *)v32 + v152);
      }
      if ( v32 + 1 < v32 || (unsigned __int64)v32 + v30 + 4 > v653[1] + HIDWORD(v653[0]) )
        goto LABEL_158;
      *v32 = v30;
      if ( v17 )
        memcpy_0(v32 + 1, v17, v30);
    }
    else if ( (int)RtlUIntAdd(HIDWORD(v653[0]), v638, (char *)v653 + 4) < 0 )
    {
      goto LABEL_158;
    }
    v34 = ++LODWORD(v653[0]);
    if ( v653[1] )
    {
      v35 = v653[1];
      for ( i2 = 0; i2 < v34; ++i2 )
      {
        v153 = *(_DWORD *)v35 + 4;
        if ( *(_DWORD *)v35 >= 0xFFFFFFFC || v35 + v153 < v35 )
          goto LABEL_158;
        v35 += v153;
      }
      if ( v35 + 4 < v35 || v35 + 12 > v653[1] + HIDWORD(v653[0]) )
        goto LABEL_158;
      v37 = v629;
      *(_DWORD *)v35 = 8;
      *(_QWORD *)(v35 + 4) = v37;
    }
    else if ( (int)RtlUIntAdd(HIDWORD(v653[0]), 12LL, (char *)v653 + 4) < 0 )
    {
      goto LABEL_158;
    }
    ++LODWORD(v653[0]);
    LODWORD(v644) = 0;
    v624 = 0LL;
    v627 = 0LL;
    LODWORD(v637) = 0;
    v641 = 0LL;
    v639 = 0LL;
    v642 = 0LL;
    v629 = __rdtsc();
    if ( HIDWORD(v653[0]) < 0xFFFFFFF8 )
    {
      v649 = v19;
      v38 = (HIDWORD(v653[0]) + 15) & 0xFFFFFFF8;
      v633 = v17;
      if ( v38 >= HIDWORD(v653[0]) + 8 )
      {
        v39 = (HIDWORD(v653[0]) + 15) & 0xFFFFFFF8;
        v640 = v38;
        v40 = GetProcessHeap();
        v634 = HeapAlloc(v40, 8u, v39);
        v41 = (char *)v634;
        if ( !v634 )
        {
          v44 = -805306345;
          goto LABEL_241;
        }
        v42 = (char *)v634 + 4;
        *(_DWORD *)v634 = v653[0];
        if ( v41 + 4 < v41 || (*v42 = HIDWORD(v653[0]), v41 + 8 < v41 + 4) )
        {
          v640 = (SIZE_T)v41;
          v41 = 0LL;
          v649 = v19;
          v634 = 0LL;
          v633 = v17;
          v43 = GetProcessHeap();
          HeapFree(v43, 0, (LPVOID)v640);
          v44 = -805306219;
          goto LABEL_218;
        }
        *(_QWORD *)&v41[v640 - 8] = v629;
        memcpy_0(v41 + 8, (const void *)v653[1], HIDWORD(v653[0]));
        LODWORD(v644) = v640;
        psz = 0LL;
        if ( v41 )
        {
          if ( !(_DWORD)v640 || (dwBytes = (unsigned int)v640 + 8LL, (Src = MemoryAlloc(dwBytes)) == 0LL) )
          {
            v44 = -805306367;
            goto LABEL_885;
          }
          v45 = 0LL;
          LOBYTE(v628) = 0;
          if ( (_DWORD)v644 )
          {
            v46 = 0;
            do
              v46 ^= v41[v45++];
            while ( v45 < (unsigned int)v644 );
            LOBYTE(v628) = v46;
          }
          v47 = 0;
          v670 = (void *)0xC81ECB17B1B54A58LL;
          LODWORD(v648) = 0;
          v48 = (SIZE_T)Src;
          LODWORD(Size) = 0;
          v49 = -1;
          v631 = (SIZE_T)Src;
          v50 = v41;
          v51 = v644 & 7;
          if ( (v644 & 7) != 0 )
          {
            v52 = 0;
            v53 = 0;
            v54 = 0;
            v638 = 0;
            v55 = v652;
            do
            {
              v56 = (unsigned __int8)*v50++;
              if ( v52 >= 4 )
                v53 |= v56 << v55;
              else
                v54 |= v56 << (v55 - 32);
              v55 -= 8;
              v52 = v638 + 1;
              v638 = v52;
            }
            while ( (int)v52 < (int)v51 );
            v57 = (_BYTE *)v631;
            v47 = v54 ^ 0xB17A307A;
            v58 = v53 ^ 0x42F6B18D;
            v59 = v54 ^ 0xB17A307A;
            v60 = 0;
            v61 = v53 ^ 0x42F6B18D;
            v638 = 0;
            do
            {
              LODWORD(v648) = v53;
              v640 = (SIZE_T)(v57 + 1);
              if ( v60 >= 4 )
              {
                v61 = (v61 << 8) | HIBYTE(v61);
                v62 = v61;
              }
              else
              {
                v59 = (v59 << 8) | HIBYTE(v59);
                v62 = v59;
              }
              *v57 = v62;
              v57 = (_BYTE *)v640;
              v60 = v638 + 1;
              v53 = v648;
              v638 = v60;
            }
            while ( v60 < (int)v51 );
            LODWORD(Size) = v54;
            v48 = v640;
            v1 = v656;
            v631 = v640;
            v634 = v41;
            v633 = v17;
            v649 = v19;
            if ( v51 > 4 )
            {
              v49 = v58 >> (8 * (8 - v51)) << (8 * (8 - v51));
            }
            else
            {
              v49 = 0;
              if ( v51 >= 4 )
                goto LABEL_70;
              v47 = v47 >> (8 * (4 - v51)) << (8 * (4 - v51));
            }
            v48 = v631;
          }
LABEL_70:
          v629 = (unsigned __int64)(unsigned int)v644 >> 3;
          if ( v629 )
          {
            v63 = Size;
            v64 = v648;
            v65 = v629;
            v66 = WORD2(v670);
            LODWORD(v647) = 19032;
            v638 = WORD1(v670);
            v630 = (LPVOID)(v48 + 7);
            v67 = (unsigned __int8 *)(v50 + 2);
            LODWORD(v654) = HIWORD(v670);
            do
            {
              v68 = v67[1] | ((*v67 | ((*(v67 - 1) | (*(v67 - 2) << 8)) << 8)) << 8);
              v69 = v67[5] | ((v67[4] | ((v67[3] | (v67[2] << 8)) << 8)) << 8);
              v629 = (size_t)(v67 + 8);
              v70 = v69 ^ v49;
              v71 = v68 ^ HIDWORD(v670) ^ (v70 - 19032) ^ v47;
              v72 = (__ROR4__(v71, 7) + WORD1(v670) * __ROR4__(HIDWORD(v670) ^ v71, 15)) ^ v70;
              v73 = (v66 * __ROR4__(v72 - 1313519016, 9) - __ROR4__(v72, 10)) ^ v71;
              v74 = (__ROR4__(v73, 27) + HIWORD(v670) * __ROR4__(v66 ^ v73, 28)) ^ v72;
              v75 = (HIDWORD(v670) - (v74 ^ 0xB1B54A58)) ^ v73;
              v76 = (WORD1(v670) * (v75 - 19032) - (v75 >> 6)) ^ v74;
              v77 = (19032 * (v66 ^ __ROR4__(v76, 15))) ^ v75;
              v78 = (v66 * (HIWORD(v670) + __ROR4__(~v77, 3))) ^ v76;
              v79 = (v78 - 19032 - HIDWORD(v670)) ^ v77;
              v80 = (v638 * ((unsigned int)v654 ^ v79)) ^ __ROR4__(v79, 10) ^ v78;
              v81 = __ROR4__(v80, 3) ^ (v66 * __ROR4__(v80 ^ 0x4A58, 26)) ^ v79;
              v82 = (19032 * (__ROR4__(v81, 15) - HIWORD(v670))) ^ v80;
              v83 = (v82 >> 15) ^ (19032 * ((8 * (v82 - v66)) | ((v82 - v66) >> 29))) ^ (v82 >> 1) ^ (19032 * (HIWORD(v670) ^ v82)) ^ v81;
              v84 = (WORD1(v670) * (v83 - v66) - (v83 >> 13)) ^ v82;
              v85 = __ROR4__(v84, 11) ^ (v66 * __ROR4__(-1313519016 - v84, 9)) ^ v83;
              v86 = (v85 + 1313519016 - HIWORD(v670)) ^ v84;
              v87 = (19032 * (v638 ^ v86) - __ROR4__(v86, 7)) ^ v85;
              v88 = (WORD1(v670) * __ROR4__(HIWORD(v670) ^ v87, 28) - __ROR4__(v87, 16)) ^ v86;
              v89 = (__ROR4__(v88, 4) + v66 * __ROR4__(-1313519016 - v88, 10)) ^ v87;
              v90 = __ROR4__(v89, 9) ^ (HIWORD(v670) * __ROR4__(v89 + 1313519016, 4)) ^ v88;
              v91 = (19032 * __ROR4__(HIDWORD(v670) ^ v90, 24) - __ROR4__(v90, 30)) ^ v89;
              v92 = (WORD1(v670) * __ROR4__(HIDWORD(v670) - v91, 11) - __ROR4__(v91, 12)) ^ v90;
              v93 = (v92 >> 8) ^ (v66 * (WORD1(v670) ^ v92)) ^ v91;
              v94 = v93 ^ HIDWORD(v670);
              v47 = v63 ^ v93;
              v95 = v64 ^ v94 ^ v92 ^ 0xB1B54A58;
              v96 = v630;
              v630 = (char *)v630 + 8;
              v63 = v68;
              LODWORD(v647) = v95;
              *(v96 - 4) = v47;
              *v96 = v95;
              *(v96 - 5) = BYTE1(v47);
              *(v96 - 1) = BYTE1(v95);
              *(v96 - 6) = (unsigned __int16)(v47 >> 8) >> 8;
              *(v96 - 2) = (unsigned __int16)(v95 >> 8) >> 8;
              *(v96 - 7) = __ROR4__((((v47 >> 8) | (v47 << 24)) >> 8) | (((v47 >> 8) | (v47 << 24)) << 24), 8);
              --v65;
              *(v96 - 3) = __ROR4__((((v95 >> 8) | (v95 << 24)) >> 8) | (((v95 >> 8) | (v95 << 24)) << 24), 8);
              v64 = v69;
              v49 = v647;
              v67 = (unsigned __int8 *)v629;
            }
            while ( v65 );
            v1 = v656;
            v19 = v649;
            v17 = v633;
            v41 = (char *)v634;
          }
          *(_QWORD *)((char *)Src + (unsigned int)v644) = (unsigned __int8)v628;
          v97 = GetProcessHeap();
          v98 = HeapAlloc(v97, 8u, 0x30uLL);
          v99 = 0LL;
          v640 = (SIZE_T)v98;
          if ( v98 )
            v99 = v98;
          v629 = 0LL;
          v100 = v98 == 0LL ? 0xC0000017 : 0;
          if ( v640 )
          {
            v101 = dwBytes;
            *(_DWORD *)v99 = dwBytes;
            v102 = GetProcessHeap();
            v103 = HeapAlloc(v102, 8u, v101);
            if ( v103 )
            {
              v99[1] = v103;
              memcpy_0(v103, Src, v101);
              *((_DWORD *)v99 + 4) = 160;
              v104 = GetProcessHeap();
              v105 = HeapAlloc(v104, 8u, 0xA0uLL);
              if ( v105 )
              {
                v99[3] = v105;
                *v105 = xmmword_180118930[0];
                v105[1] = xmmword_180118930[1];
                v105[2] = xmmword_180118930[2];
                v105[3] = xmmword_180118930[3];
                v105[4] = xmmword_180118930[4];
                v105[5] = xmmword_180118930[5];
                v105[6] = xmmword_180118930[6];
                v105[7] = xmmword_180118930[7];
                v105[8] = xmmword_180118930[8];
                v105[9] = xmmword_180118930[9];
                *((_DWORD *)v99 + 8) = 8;
                v106 = GetProcessHeap();
                v107 = HeapAlloc(v106, 8u, 8uLL);
                if ( v107 )
                {
                  v99[5] = v107;
                  v100 = 0;
                  *v107 = qword_1801189D0;
                  v108 = (STRSAFE_PCNZWCH)v99;
                  goto LABEL_212;
                }
              }
            }
            v100 = -1073741801;
          }
          if ( v99 )
          {
            v629 = v99[1];
            if ( v629 )
            {
              v154 = GetProcessHeap();
              HeapFree(v154, 0, (LPVOID)v629);
              v99[1] = 0LL;
            }
            v629 = v99[3];
            if ( v629 )
            {
              v155 = GetProcessHeap();
              HeapFree(v155, 0, (LPVOID)v629);
              v99[3] = 0LL;
            }
            v629 = v99[5];
            if ( v629 )
            {
              v156 = GetProcessHeap();
              HeapFree(v156, 0, (LPVOID)v629);
              v99[5] = 0LL;
            }
            v157 = GetProcessHeap();
            HeapFree(v157, 0, v99);
          }
          if ( v100 < 0 )
          {
            v158 = 0LL;
LABEL_213:
            v624 = v158;
            v159 = GetProcessHeap();
            HeapFree(v159, 0, Src);
            v160 = psz;
            if ( psz )
            {
              v629 = *((_QWORD *)psz + 1);
              if ( v629 )
              {
                v613 = GetProcessHeap();
                HeapFree(v613, 0, (LPVOID)v629);
                v160 = psz;
                *((_QWORD *)psz + 1) = 0LL;
              }
              v629 = *((_QWORD *)v160 + 3);
              if ( v629 )
              {
                v614 = GetProcessHeap();
                HeapFree(v614, 0, (LPVOID)v629);
                v160 = psz;
                *((_QWORD *)psz + 3) = 0LL;
              }
              v629 = *((_QWORD *)v160 + 5);
              if ( v629 )
              {
                v615 = GetProcessHeap();
                HeapFree(v615, 0, (LPVOID)v629);
                *((_QWORD *)psz + 5) = 0LL;
              }
              v616 = GetProcessHeap();
              HeapFree(v616, 0, (LPVOID)psz);
              v624 = v158;
            }
            v44 = v100 | 0x10000000;
            if ( v44 < 0 )
              goto LABEL_218;
            dwBytes = (SIZE_T)(v158 + 8);
            LODWORD(v647) = v158[8];
            v161 = v158[4];
            v640 = (SIZE_T)(v158 + 4);
            if ( *v158 >= 0xFFFFFFFC )
            {
LABEL_216:
              v44 = -805306219;
              goto LABEL_218;
            }
            v184 = *v158 + 8;
            v624 = v158;
            if ( v184 < *v158 + 4
              || (v185 = v161 + v184, v161 + v184 < v184)
              || (v186 = v185 + 4, v185 + 4 < v185)
              || v186 + (unsigned int)v647 < v186 )
            {
              v44 = -805306219;
              v624 = v158;
              goto LABEL_218;
            }
            v645 = v186 + (unsigned int)v647;
            v187 = GetProcessHeap();
            v188 = HeapAlloc(v187, 8u, v645);
            v634 = v188;
            if ( !v188 )
            {
              v627 = 0LL;
              v624 = v158;
              goto LABEL_394;
            }
            *v188 = *v158;
            v629 = (size_t)(v188 + 1);
            if ( v188 + 1 < v188 )
            {
              v634 = v188;
            }
            else
            {
              memcpy_0(v188 + 1, *((const void **)v158 + 1), *v158);
              v189 = (_DWORD *)(v629 + *v158);
              if ( (unsigned __int64)v189 >= v629 )
              {
                v199 = (unsigned int *)v640;
                *v189 = *(_DWORD *)v640;
                v629 = (size_t)(v189 + 1);
                if ( v189 + 1 >= v189 )
                {
                  memcpy_0(v189 + 1, *((const void **)v158 + 3), *v199);
                  v200 = v629;
                  v201 = (_DWORD *)(v629 + *(unsigned int *)v640);
                  v629 = (size_t)v201;
                  if ( (unsigned __int64)v201 >= v200 )
                  {
                    v202 = (unsigned int *)dwBytes;
                    *v201 = *(_DWORD *)dwBytes;
                    if ( v201 + 1 >= v201 )
                    {
                      memcpy_0(v201 + 1, *((const void **)v158 + 5), *v202);
                      if ( v629 + 4 + *(unsigned int *)dwBytes >= v629 + 4 )
                      {
                        v627 = v634;
                        LODWORD(v637) = v645;
                        if ( !v653[1] || LODWORD(v653[0]) <= 1 )
                        {
LABEL_871:
                          v44 = -1073741811;
                          goto LABEL_218;
                        }
                        v191 = (unsigned int *)v653[1];
                        for ( i3 = 0; ; i3 = 1 )
                        {
                          v193 = *v191;
                          v194 = v191 + 1;
                          if ( i3 )
                            break;
                          v624 = v158;
                          if ( v194 < v191 )
                          {
LABEL_266:
                            v198 = v627;
                            v44 = -1073741675;
LABEL_267:
                            v627 = v198;
                            goto LABEL_218;
                          }
                          v191 = (unsigned int *)((char *)v194 + v193);
                          v627 = v634;
                          if ( (unsigned int *)((char *)v194 + v193) < v194 )
                            goto LABEL_217;
                        }
                        if ( v194 < v191 )
                          goto LABEL_264;
                        v624 = v158;
                        v627 = v634;
                        if ( LODWORD(v653[0]) <= 2 )
                          goto LABEL_871;
                        v195 = (_DWORD *)v653[1];
                        for ( i4 = 0; ; ++i4 )
                        {
                          LODWORD(Size) = *v195;
                          v197 = v195 + 1;
                          if ( i4 >= 2 )
                            break;
                          v624 = v158;
                          if ( v197 < v195 )
                            goto LABEL_266;
                          v195 = (_DWORD *)((char *)v197 + (unsigned int)Size);
                          v627 = v634;
                          if ( v195 < v197 )
                            goto LABEL_217;
                        }
                        if ( v197 < v195 )
                        {
LABEL_264:
                          v44 = -1073741675;
                          goto LABEL_218;
                        }
                        v627 = v634;
                        v624 = v158;
                        LODWORD(v647) = v193 + 48;
                        if ( (unsigned int)v193 >= 0xFFFFFFD0
                          || (v203 = v193 + 52, (int)v193 + 52 < (unsigned int)(v193 + 48))
                          || v203 + (unsigned int)Size < v203 )
                        {
LABEL_217:
                          v44 = -1073741675;
                          v624 = v158;
                          v627 = v634;
                          goto LABEL_218;
                        }
                        if ( v203 + (unsigned int)Size > 0x400000 )
                        {
                          v44 = -2147418113;
                          goto LABEL_218;
                        }
                        v631 = (SIZE_T)v158;
                        v198 = v634;
                        v204 = v203 + Size;
                        v634 = v41;
                        v205 = GetProcessHeap();
                        v206 = HeapAlloc(v205, 8u, v204);
                        v207 = v641;
                        v624 = (_QWORD *)v631;
                        if ( v206 )
                          v207 = (SIZE_T)v206;
                        v627 = v198;
                        v641 = v207;
                        v44 = v206 != 0LL ? 0x10000000 : -805306345;
                        if ( !v206 )
                        {
LABEL_218:
                          if ( !v41 )
                          {
LABEL_219:
                            if ( v624 )
                            {
                              v162 = (void *)v624[1];
                              if ( v162 )
                              {
                                v163 = GetProcessHeap();
                                HeapFree(v163, 0, v162);
                                v624[1] = 0LL;
                              }
                              v164 = (void *)v624[3];
                              if ( v164 )
                              {
                                v165 = GetProcessHeap();
                                HeapFree(v165, 0, v164);
                                v624[3] = 0LL;
                              }
                              v166 = (void *)v624[5];
                              if ( v166 )
                              {
                                v167 = GetProcessHeap();
                                HeapFree(v167, 0, v166);
                                v624[5] = 0LL;
                              }
                              v168 = GetProcessHeap();
                              HeapFree(v168, 0, v624);
                            }
                            v169 = v627;
                            if ( v627 )
                            {
                              v170 = GetProcessHeap();
                              HeapFree(v170, 0, v169);
                            }
                            v171 = (void *)v641;
                            if ( v641 )
                            {
                              v172 = GetProcessHeap();
                              HeapFree(v172, 0, v171);
                            }
                            v173 = v639;
                            if ( v639 )
                            {
                              v174 = (void *)*((_QWORD *)v639 + 1);
                              if ( v174 )
                              {
                                v175 = GetProcessHeap();
                                HeapFree(v175, 0, v174);
                                v173[1] = 0LL;
                              }
                              v176 = (void *)v173[3];
                              if ( v176 )
                              {
                                v177 = GetProcessHeap();
                                HeapFree(v177, 0, v176);
                                v173[3] = 0LL;
                              }
                              v178 = (void *)v173[5];
                              if ( v178 )
                              {
                                v179 = GetProcessHeap();
                                HeapFree(v179, 0, v178);
                                v173[5] = 0LL;
                              }
                              v180 = GetProcessHeap();
                              HeapFree(v180, 0, v173);
                            }
                            v181 = v642;
                            if ( v642 )
                            {
                              v182 = GetProcessHeap();
                              HeapFree(v182, 0, v181);
                            }
LABEL_241:
                            if ( v44 >= 0 )
                            {
                              v183 = 1;
                              if ( LODWORD(v659[0]) )
                              {
                                if ( v659[1] && (char *)v659[1] + 4 >= v659[1] )
                                {
                                  v143 = 0LL;
                                  if ( *(_DWORD *)v659[1] )
                                    v143 = (int *)((char *)v659[1] + 4);
                                  if ( *(_DWORD *)v659[1] == 4 && *v143 >= 0 && LODWORD(v659[0]) > 1 )
                                  {
                                    v618 = v659[1];
                                    v619 = 0;
                                    v646 = v659[1];
                                    while ( v619 < v183 )
                                    {
                                      if ( (int)RtlULongLongAdd(v618, 4LL, &v646) < 0
                                        || (int)RtlULongLongAdd(v646, v620, &v646) < 0 )
                                      {
                                        goto LABEL_158;
                                      }
                                      v618 = v646;
                                      v619 = v183 + v621;
                                    }
                                    RtlULongLongAdd(v618, 4LL, &v646);
                                  }
                                }
                              }
                            }
                            goto LABEL_158;
                          }
LABEL_885:
                          v617 = GetProcessHeap();
                          HeapFree(v617, 0, v41);
                          goto LABEL_219;
                        }
                        phModule = 0LL;
                        v666 = 0LL;
                        v667 = 0LL;
                        if ( !v198 || !v207 )
                        {
                          v44 = -2147024809;
                          v624 = (_QWORD *)v631;
                          goto LABEL_267;
                        }
                        v208 = Size + v647 + 4;
                        *(_QWORD *)((char *)&v667 + 4) = v208;
                        *(_QWORD *)&v666 = v198;
                        LODWORD(v667) = v637;
                        *((_QWORD *)&v666 + 1) = v207;
                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                          && (v209 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                        {
                          v210 = ((__int64 (__fastcall *)(__int64, __int128 *))v209)(134LL, &v666);
                          v211 = v208;
                          v44 = v210 | 0x10000000;
                          if ( v210 >= 0 )
                          {
                            v211 = DWORD1(v667);
                            v212 = v19;
                            v213 = (char *)v634;
                            v214 = v17;
                            v215 = v631;
                            goto LABEL_290;
                          }
                        }
                        else
                        {
                          v303 = GetLastError();
                          v44 = v303;
                          if ( v303 > 0 )
                            v44 = (unsigned __int16)v303 | 0x80070000;
                          v211 = v208;
                          if ( v44 >= 0 )
                            v44 = -2147467259;
                        }
                        v627 = v198;
                        if ( v44 == -805306333 )
                        {
                          v44 = -2147024774;
                          v41 = (char *)v634;
                          v624 = (_QWORD *)v631;
                          goto LABEL_218;
                        }
                        v215 = v631;
                        v214 = v17;
                        v213 = (char *)v634;
                        v212 = v19;
                        v624 = (_QWORD *)v631;
                        v41 = (char *)v634;
                        if ( v44 < 0 )
                          goto LABEL_218;
LABEL_290:
                        psz = 0LL;
                        v17 = v214;
                        v19 = v212;
                        v41 = v213;
                        if ( v211 < 4 )
                        {
                          v44 = -805306306;
                          goto LABEL_293;
                        }
                        v216 = *(unsigned int *)v641;
                        LODWORD(v654) = *(_DWORD *)v641;
                        if ( v641 + 4 < v641 )
                        {
                          v44 = -805306219;
LABEL_293:
                          v624 = (_QWORD *)v215;
                          goto LABEL_267;
                        }
                        v217 = v198;
                        v627 = v198;
                        v218 = (_QWORD *)v215;
                        v624 = (_QWORD *)v215;
                        if ( v211 - 4 < (unsigned int)v216 )
                        {
                          v44 = -805306306;
                        }
                        else
                        {
                          v1 = v656;
                          v650 = v216;
                          v644 = v641 + 4 + v216;
                          if ( v644 >= v641 + 4 )
                          {
                            v219 = v216 + 4;
                            if ( v219 < 4 )
                            {
LABEL_300:
                              v44 = -805306219;
LABEL_301:
                              v624 = v218;
LABEL_302:
                              v627 = v217;
                              goto LABEL_218;
                            }
                            if ( v211 - v219 < 4 )
                              goto LABEL_875;
                            v627 = v217;
                            v624 = (_QWORD *)v215;
                            v220 = *(unsigned int *)v644;
                            v221 = v644 + 4;
                            LODWORD(Size) = *(_DWORD *)v644;
                            if ( v644 + 4 < v644 )
                              goto LABEL_216;
                            v222 = v219 + 4;
                            v17 = v214;
                            if ( v219 + 4 < v219 )
                            {
                              v44 = -805306219;
                              v624 = v218;
                              v17 = v214;
                              goto LABEL_302;
                            }
                            if ( v211 - v222 < (unsigned int)v220 )
                              goto LABEL_875;
                            v223 = (unsigned int *)(v221 + v220);
                            v640 = v220;
                            v627 = v217;
                            v624 = v218;
                            if ( v221 + v220 < v221 )
                              goto LABEL_216;
                            v224 = v222 + v220;
                            if ( v222 + (unsigned int)v220 < v222 )
                            {
                              v44 = -805306219;
                              v624 = v218;
                              goto LABEL_302;
                            }
                            if ( v211 - v224 < 4 )
                              goto LABEL_875;
                            v225 = *v223;
                            LODWORD(v648) = *v223;
                            v670 = v223 + 1;
                            v627 = v217;
                            v624 = v218;
                            if ( v223 + 1 < v223 )
                              goto LABEL_216;
                            v638 = v224 + 4;
                            if ( v224 + 4 < v224 )
                              goto LABEL_300;
                            v637 = (size_t)v217;
                            Src = v41;
                            v646 = v218;
                            if ( v211 - v638 < v225 )
                            {
LABEL_875:
                              v44 = -805306306;
                              goto LABEL_218;
                            }
                            LODWORD(v647) = v638 + v225;
                            if ( v638 + v225 < v638 )
                              goto LABEL_300;
                            if ( v211 != (_DWORD)v647 || (unsigned int)v654 + v225 + (_DWORD)Size + 12LL != v211 )
                            {
                              v44 = -805306306;
                              goto LABEL_301;
                            }
                            v226 = GetProcessHeap();
                            v227 = (size_t *)HeapAlloc(v226, 8u, 0x30uLL);
                            v228 = 0LL;
                            v629 = (size_t)v227;
                            if ( v227 )
                              v228 = v227;
                            v671 = v228;
                            v229 = v227 == 0LL ? 0xC0000017 : 0;
                            v230 = v646;
                            v231 = (void *)v637;
                            v232 = v646;
                            v624 = v646;
                            v633 = v17;
                            v649 = v19;
                            v634 = v41;
                            v627 = (LPVOID)v637;
                            if ( !v629 )
                              goto LABEL_829;
                            v233 = v641 + 4;
                            if ( v641 == -4LL )
                            {
                              *(_DWORD *)v228 &= v233;
                              v234 = v670;
                              v228[1] &= v233;
                              v232 = v230;
                              v670 = v234;
                            }
                            else
                            {
                              *(_DWORD *)v228 = (_DWORD)v654;
                              v300 = GetProcessHeap();
                              v301 = v650;
                              v302 = HeapAlloc(v300, 8u, v650);
                              if ( !v302 )
                              {
                                v232 = v646;
                                v229 = -1073741801;
                                v41 = (char *)Src;
                                v624 = v646;
                                v634 = Src;
                                v627 = (LPVOID)v637;
                                v633 = v17;
                                v649 = v19;
LABEL_829:
                                v603 = v671;
                                if ( v671 )
                                {
                                  v650 = *((_QWORD *)v671 + 1);
                                  if ( v650 )
                                  {
                                    v604 = GetProcessHeap();
                                    HeapFree(v604, 0, (LPVOID)v650);
                                    v603 = v671;
                                    *((_QWORD *)v671 + 1) = 0LL;
                                  }
                                  v650 = v603[3];
                                  if ( v650 )
                                  {
                                    v605 = GetProcessHeap();
                                    HeapFree(v605, 0, (LPVOID)v650);
                                    v603 = v671;
                                    *((_QWORD *)v671 + 3) = 0LL;
                                  }
                                  v650 = v603[5];
                                  if ( v650 )
                                  {
                                    v606 = GetProcessHeap();
                                    HeapFree(v606, 0, (LPVOID)v650);
                                    *((_QWORD *)v671 + 5) = 0LL;
                                  }
                                  v607 = GetProcessHeap();
                                  HeapFree(v607, 0, v671);
                                }
                                v228 = (size_t *)psz;
LABEL_327:
                                if ( v229 < 0 )
                                {
                                  v639 = 0LL;
                                  if ( v228 )
                                  {
                                    v650 = v228[1];
                                    if ( v650 )
                                    {
                                      v599 = GetProcessHeap();
                                      HeapFree(v599, 0, (LPVOID)v650);
                                      v228 = (size_t *)psz;
                                      *((_QWORD *)psz + 1) = 0LL;
                                    }
                                    v650 = v228[3];
                                    if ( v650 )
                                    {
                                      v600 = GetProcessHeap();
                                      HeapFree(v600, 0, (LPVOID)v650);
                                      v228 = (size_t *)psz;
                                      *((_QWORD *)psz + 3) = 0LL;
                                    }
                                    v650 = v228[5];
                                    if ( v650 )
                                    {
                                      v601 = GetProcessHeap();
                                      HeapFree(v601, 0, (LPVOID)v650);
                                      *((_QWORD *)psz + 5) = 0LL;
                                    }
                                    v602 = GetProcessHeap();
                                    HeapFree(v602, 0, (LPVOID)psz);
                                    v639 = 0LL;
                                  }
                                }
                                else
                                {
                                  v639 = v228;
                                }
                                v44 = v229 | 0x10000000;
                                if ( v44 >= 0 )
                                {
                                  v240 = v639;
                                  if ( v639 )
                                  {
                                    dwBytes = *((_QWORD *)v639 + 1);
                                    if ( dwBytes )
                                    {
                                      if ( *(_DWORD *)v639 )
                                      {
                                        Src = (void *)(*(unsigned int *)v639 - 8LL);
                                        v642 = MemoryAlloc((unsigned __int64)Src);
                                        v241 = v642;
                                        if ( !v642 )
                                        {
LABEL_353:
                                          v642 = 0LL;
                                          v44 = -805306367;
                                          goto LABEL_218;
                                        }
                                        v242 = 0;
                                        v243 = (unsigned __int8 *)dwBytes;
                                        v244 = (SIZE_T)v642;
                                        v631 = (unsigned __int8)Src & 7;
                                        LOBYTE(v628) = 0;
                                        v671 = (LPVOID)0x7F1137FAB69605ELL;
                                        v646 = (LPVOID)dwBytes;
                                        v630 = v642;
                                        if ( ((unsigned __int8)Src & 7) != 0 )
                                        {
                                          v655 = 0;
                                          v245 = 0;
                                          LODWORD(Size) = 0;
                                          v246 = v627;
                                          do
                                          {
                                            v247 = *v243++;
                                            LODWORD(v637) = v247;
                                            if ( (unsigned int)Size >= 4 )
                                            {
                                              LODWORD(v637) = (_DWORD)v637 << v652;
                                              v655 |= v637;
                                            }
                                            else
                                            {
                                              LODWORD(v637) = (_DWORD)v637 << (v652 - 32);
                                              v245 |= v637;
                                            }
                                            v652 -= 8;
                                            LODWORD(Size) = Size + 1;
                                          }
                                          while ( (int)Size < (int)v631 );
                                          v248 = v655;
                                          v646 = v243;
                                          v249 = v243;
                                          v250 = v245 ^ 0x92F65A5;
                                          LODWORD(v637) = v245;
                                          v251 = v245 ^ 0x92F65A5;
                                          v252 = v245;
                                          v253 = v655 ^ 0x699A899C;
                                          LODWORD(Size) = 0;
                                          v254 = v655 ^ 0x699A899C;
                                          while ( 1 )
                                          {
                                            v655 = v248;
                                            v627 = v246;
                                            v640 = (SIZE_T)v630 + 1;
                                            if ( (int)Size >= 4 )
                                            {
                                              v254 = (v254 << 8) | HIBYTE(v254);
                                              v255 = v254;
                                            }
                                            else
                                            {
                                              v251 = (v251 << 8) | HIBYTE(v251);
                                              v255 = v251;
                                            }
                                            *(_BYTE *)v630 = v255;
                                            v630 = (LPVOID)v640;
                                            v256 = (int)Size + 1 < (int)v631;
                                            LODWORD(Size) = Size + 1;
                                            v246 = v627;
                                            if ( !v256 )
                                              break;
                                            v248 = v655;
                                          }
                                          v244 = v640;
                                          v242 = v628;
                                          v241 = v642;
                                          LODWORD(v637) = v252;
                                          v1 = v656;
                                          v646 = v249;
                                          LODWORD(Size) = v250;
                                          v639 = v240;
                                          v624 = v232;
                                          v634 = v41;
                                          v633 = v17;
                                          v649 = v19;
                                          if ( (unsigned int)v631 <= 4 )
                                          {
                                            LODWORD(v648) = 0;
                                            if ( (unsigned int)v631 < 4 )
                                              LODWORD(Size) = v250 >> (8 * (4 - v631)) << (8 * (4 - v631));
LABEL_348:
                                            v258 = (char *)Src;
                                            if ( (unsigned __int64)Src >> 3 )
                                            {
                                              v261 = HIDWORD(v671);
                                              v262 = (_BYTE *)(v244 + 7);
                                              v263 = v648;
                                              v264 = HIDWORD(v671) ^ 0xAB69605E;
                                              v265 = v637;
                                              v266 = (unsigned __int8 *)v646 + 2;
                                              v267 = (unsigned __int64)Src >> 3;
                                              v268 = WORD2(v671);
                                              v652 = 24670;
                                              v269 = Size;
                                              LODWORD(v647) = WORD2(v671);
                                              do
                                              {
                                                v270 = v266[1] | ((*v266 | ((*(v266 - 1) | (*(v266 - 2) << 8)) << 8)) << 8);
                                                v271 = v270 ^ v269;
                                                v272 = v266[4] | ((v266[3] | (v266[2] << 8)) << 8);
                                                v273 = v266[5];
                                                v650 = (size_t)(v266 + 8);
                                                v274 = v273 | (v272 << 8);
                                                v275 = v271 ^ v274 ^ v263 ^ v264;
                                                v276 = (__ROR4__(v275, 22) + v268 * __ROR4__(v275 + 1419157410, 27)) ^ v271;
                                                v277 = (WORD1(v671) * __ROR4__(v261 + v276, 9) - __ROR4__(v276, 30)) ^ v275;
                                                v278 = (v652 * (v277 - v268) - (v277 >> 13)) ^ v276;
                                                v279 = (HIWORD(v671) * __ROR4__(v278 ^ WORD1(v671), 26)
                                                      - __ROR4__(v278, 30)) ^ v277;
                                                v280 = (v261 - (v279 ^ 0xAB69605E)) ^ v278;
                                                v281 = (WORD1(v671) * (v280 ^ v268)) ^ __ROR4__(v280, 6) ^ v279;
                                                v282 = (__ROR4__(v281, 30) + v652 * __ROR4__(v261 + v281, 15)) ^ v280;
                                                v283 = (HIWORD(v671) * __ROR4__(v282 + 1419157410, 14)
                                                      - __ROR4__(v282, 24)) ^ v281;
                                                v284 = __ROR4__(v283, 10) ^ (v268 * __ROR4__(v283 ^ 0xAB69605E, 12)) ^ v282;
                                                v285 = (v284 >> 10) ^ (WORD1(v671) * (v284 ^ HIWORD(v671))) ^ v283;
                                                v286 = (HIWORD(v671) * (v652 + __ROR4__(~v285, 5))) ^ v284;
                                                v287 = v285 ^ (v286 - HIWORD(v671)) ^ 0xAB69605E;
                                                v288 = ((v287 >> 2) + v268 * __ROR4__(v287 ^ HIWORD(v671), 30)) ^ v286;
                                                v289 = (__ROR4__(v288, 25) + WORD1(v671) * __ROR4__(v288 - v261, 6)) ^ v287;
                                                v290 = (v652 * (v289 ^ v268) + __ROR4__(v289, 9)) ^ v288;
                                                v291 = (__ROR4__(v290, 25)
                                                      + HIWORD(v671) * __ROR4__(v290 ^ WORD1(v671), 27)) ^ v289;
                                                v292 = v291 ^ v264 ^ v290;
                                                v293 = (v268 * (__ROR4__(v292, 3) - WORD1(v671))) ^ v291;
                                                v294 = (v652 * __ROR4__(v293 - v261, 1) - __ROR4__(v293, 6)) ^ v292;
                                                v295 = (__ROR4__(v294, 18)
                                                      + HIWORD(v671) * __ROR4__(v294 - 1419157410, 29)) ^ v293;
                                                v296 = (v268 * __ROR4__(v295 - 1419157410, 17) - __ROR4__(v295, 14)) ^ v294;
                                                v297 = (v296 >> 3) ^ (WORD1(v671) * (v296 ^ v652)) ^ v295;
                                                v298 = v297 ^ v261;
                                                v299 = v297;
                                                v263 = v655 ^ v297;
                                                v655 = v274;
                                                v269 = v265 ^ __ROR4__(v299, 30) ^ (v652 * __ROR4__(v298, 28)) ^ v296;
                                                v265 = v270;
                                                *(v262 - 4) = v269;
                                                *v262 = v263;
                                                v262 += 8;
                                                *(v262 - 13) = (unsigned __int64)v269 >> 8;
                                                *(v262 - 9) = BYTE1(v263);
                                                v266 = (unsigned __int8 *)v650;
                                                *(v262 - 14) = (unsigned __int16)((unsigned __int64)v269 >> 8) >> 8;
                                                *(v262 - 10) = (unsigned __int16)(v263 >> 8) >> 8;
                                                *(v262 - 15) = __ROR4__(
                                                                 ((((unsigned __int64)v269 >> 8) | (v269 << 24)) >> 8) | ((((unsigned __int64)v269 >> 8) | (v269 << 24)) << 24),
                                                                 8);
                                                v268 = v647;
                                                *(v262 - 11) = __ROR4__(
                                                                 (((v263 >> 8) | (v263 << 24)) >> 8) | (((v263 >> 8) | (v263 << 24)) << 24),
                                                                 8);
                                                --v267;
                                              }
                                              while ( v267 );
                                              v242 = v628;
                                              v1 = v656;
                                              v19 = v649;
                                              v17 = v633;
                                              v41 = (char *)v634;
                                              v232 = v624;
                                              v240 = v639;
                                              v241 = v642;
                                              v258 = (char *)Src;
                                            }
                                            v259 = 0LL;
                                            if ( v258 )
                                            {
                                              do
                                                v242 ^= *((_BYTE *)v241 + v259++);
                                              while ( v259 < (unsigned __int64)v258 );
                                            }
                                            v260 = v627;
                                            v624 = v232;
                                            v639 = v240;
                                            if ( v242 != *(_QWORD *)&v258[dwBytes] )
                                            {
                                              MemoryFree(v241);
                                              goto LABEL_353;
                                            }
                                            v624 = v232;
                                            v593 = v240;
                                            v639 = v240;
                                            if ( (unsigned int)v258 >= 4 )
                                            {
                                              LODWORD(v654) = *v241;
                                              v594 = v241 + 1;
                                              v624 = v232;
                                              v639 = v240;
                                              v642 = v241;
                                              if ( v241 + 1 < v241 )
                                                goto LABEL_396;
                                              if ( (unsigned int)((_DWORD)v258 - 4) < 4 )
                                              {
                                                v306 = -1073741762;
LABEL_773:
                                                v642 = v241;
                                                v639 = v593;
                                                v624 = v232;
LABEL_771:
                                                v627 = v260;
                                                goto LABEL_397;
                                              }
                                              v595 = (unsigned int)*v594;
                                              v596 = v241 + 2;
                                              LODWORD(v647) = *v594;
                                              if ( v241 + 2 < v241 + 1 )
                                              {
                                                v306 = -1073741675;
LABEL_819:
                                                v627 = v260;
                                                v624 = v232;
                                                v639 = v593;
                                                v642 = v241;
                                                goto LABEL_397;
                                              }
                                              v671 = v627;
                                              v631 = (SIZE_T)v240;
                                              if ( (int)v258 - 8 >= (unsigned int)v595 )
                                              {
                                                if ( (unsigned int)v595 < 0xFFFFFFF8 )
                                                {
                                                  v597 = (unsigned int)v595;
                                                  v598 = (unsigned __int64)v596 + v595;
                                                  if ( (unsigned __int64)v241 + (unsigned int)v258 < v598
                                                    || (unsigned __int64)(unsigned int)v258 - v597 - 8 >= 8 )
                                                  {
                                                    v306 = -1073741762;
                                                    v639 = (LPVOID)v631;
                                                    v627 = v671;
                                                    v642 = v241;
                                                    v624 = v232;
                                                    goto LABEL_397;
                                                  }
                                                  v593 = (void *)v631;
                                                  v260 = v671;
                                                  v578 = 0;
                                                  v649 = 0LL;
                                                  v306 = 0;
                                                  v638 = 0;
                                                  v642 = v241;
                                                  v639 = (LPVOID)v631;
                                                  v624 = v232;
                                                  v627 = v671;
                                                  if ( v241 != (_DWORD *)-8LL )
                                                  {
                                                    v639 = (LPVOID)v631;
                                                    v577 = (char *)(v241 + 2);
                                                    v624 = v232;
                                                    v627 = v671;
                                                    if ( v598 >= (unsigned __int64)v596 )
                                                    {
                                                      v642 = v241;
                                                      while ( 1 )
                                                      {
                                                        Src = (void *)v631;
                                                        if ( (unsigned __int64)v577 >= v598 )
                                                          break;
                                                        if ( v577 + 4 < v577 )
                                                          goto LABEL_396;
                                                        v627 = v671;
                                                        v624 = v232;
                                                        v639 = (LPVOID)v631;
                                                        v642 = v241;
                                                        if ( (unsigned __int64)(v577 + 4) > v598 )
                                                        {
                                                          v593 = Src;
                                                          v306 = -1073741811;
                                                          goto LABEL_819;
                                                        }
                                                        if ( *(_DWORD *)v577 >= 0xFFFFFFFC )
                                                          goto LABEL_395;
                                                        v576 = &v577[*(_DWORD *)v577 + 4];
                                                        if ( v576 < v577 )
                                                          goto LABEL_395;
                                                        v306 = 0;
                                                        v577 += (unsigned int)(*(_DWORD *)v577 + 4);
                                                        if ( (unsigned __int64)v576 > v598 )
                                                        {
                                                          v306 = -1073741811;
                                                          goto LABEL_773;
                                                        }
                                                        v638 = ++v578;
                                                      }
                                                      if ( v577 == (char *)v598 )
                                                        goto LABEL_764;
                                                      v306 = -1073741811;
                                                      goto LABEL_397;
                                                    }
                                                    v642 = v241;
                                                    goto LABEL_396;
                                                  }
LABEL_764:
                                                  v640 = (SIZE_T)v232;
                                                  v579 = (unsigned int)v647;
                                                  Src = v671;
                                                  v629 = v631;
                                                  v650 = (size_t)v241;
                                                  if ( !(_DWORD)v647 )
                                                  {
                                                    v581 = v649;
                                                    goto LABEL_767;
                                                  }
                                                  v580 = GetProcessHeap();
                                                  v581 = HeapAlloc(v580, 8u, (unsigned int)v579);
                                                  v649 = v581;
                                                  if ( v581 )
                                                  {
                                                    v306 = 0;
LABEL_767:
                                                    if ( v596 )
                                                      memcpy_0(v581, v596, v579);
                                                    v659[1] = v649;
                                                    v659[0] = (LPVOID)__PAIR64__(v579, v638);
                                                    v260 = Src;
                                                    v642 = (LPVOID)v650;
                                                    v639 = (LPVOID)v629;
                                                    v624 = (_QWORD *)v640;
                                                    v627 = Src;
                                                    if ( (_DWORD)v654 == v638 )
                                                      goto LABEL_397;
                                                    v306 = -1073741762;
                                                    v642 = (LPVOID)v650;
                                                    v639 = (LPVOID)v629;
                                                    v624 = (_QWORD *)v640;
                                                    goto LABEL_771;
                                                  }
LABEL_394:
                                                  v306 = -1073741801;
LABEL_397:
                                                  v44 = v306 | 0x10000000;
                                                  goto LABEL_218;
                                                }
LABEL_395:
                                                v642 = v241;
                                                v639 = v593;
                                                v624 = v232;
                                                v627 = v260;
LABEL_396:
                                                v306 = -1073741675;
                                                goto LABEL_397;
                                              }
                                            }
                                            v306 = -1073741762;
                                            goto LABEL_397;
                                          }
                                          v257 = v253 >> (8 * (8 - v631)) << (8 * (8 - v631));
                                        }
                                        else
                                        {
                                          LODWORD(v637) = 0;
                                          v257 = 0;
                                          LODWORD(Size) = 0;
                                        }
                                        LODWORD(v648) = v257;
                                        goto LABEL_348;
                                      }
                                    }
                                  }
                                  v44 = -805306355;
                                }
                                goto LABEL_218;
                              }
                              *((_QWORD *)v671 + 1) = v302;
                              v229 = 0;
                              memcpy_0(v302, (const void *)v233, v301);
                              v231 = (void *)v637;
                              v228 = (size_t *)v671;
                              v234 = v670;
                              v232 = v646;
                              v41 = (char *)Src;
                            }
                            v627 = v231;
                            v634 = v41;
                            v649 = v19;
                            v633 = v17;
                            v624 = v232;
                            v235 = v644 + 4;
                            if ( v644 == -4LL )
                            {
                              *((_DWORD *)v228 + 4) &= v235;
                              v228[3] &= v235;
                            }
                            else
                            {
                              *((_DWORD *)v228 + 4) = Size;
                              v304 = GetProcessHeap();
                              v305 = HeapAlloc(v304, 8u, v640);
                              if ( !v305 )
                              {
LABEL_877:
                                v229 = -1073741801;
                                goto LABEL_829;
                              }
                              *((_QWORD *)v671 + 3) = v305;
                              v229 = 0;
                              memcpy_0(v305, (const void *)(v644 + 4), v640);
                              v234 = v670;
                              v228 = (size_t *)v671;
                              v624 = v232;
                              v633 = v17;
                              v649 = v19;
                              v634 = v41;
                            }
                            if ( !v234 )
                            {
                              *((_DWORD *)v228 + 8) = 0;
                              v228[5] = 0LL;
                              goto LABEL_326;
                            }
                            v236 = (unsigned int)v648;
                            *((_DWORD *)v228 + 8) = v648;
                            v237 = v236;
                            v650 = v236;
                            v238 = GetProcessHeap();
                            v239 = HeapAlloc(v238, 8u, v237);
                            if ( v239 )
                            {
                              *((_QWORD *)v671 + 5) = v239;
                              v229 = 0;
                              memcpy_0(v239, v670, v650);
                              v228 = (size_t *)v671;
                              v624 = v232;
                              v633 = v17;
                              v649 = v19;
                              v634 = v41;
LABEL_326:
                              psz = (STRSAFE_PCNZWCH)v228;
                              goto LABEL_327;
                            }
                            goto LABEL_877;
                          }
                          v44 = -805306219;
                        }
                        v624 = (_QWORD *)v215;
                        goto LABEL_302;
                      }
                    }
                  }
                }
              }
            }
            v624 = v158;
            v190 = GetProcessHeap();
            HeapFree(v190, 0, v634);
            v44 = -805306219;
            goto LABEL_218;
          }
          v108 = psz;
LABEL_212:
          psz = 0LL;
          v158 = (unsigned int *)v108;
          goto LABEL_213;
        }
      }
    }
LABEL_158:
    v653[0] = 0LL;
    v144 = (void *)v653[1];
    if ( v653[1] )
    {
      v145 = GetProcessHeap();
      HeapFree(v145, 0, v144);
      v653[1] = 0LL;
    }
    v659[0] = 0LL;
    v146 = v659[1];
    if ( v659[1] )
    {
      v147 = GetProcessHeap();
      HeapFree(v147, 0, v146);
      v659[1] = 0LL;
    }
    if ( v19 )
    {
      v622 = GetProcessHeap();
      HeapFree(v622, 0, v19);
    }
    if ( v17 )
    {
      v623 = GetProcessHeap();
      HeapFree(v623, 0, v17);
    }
  }
  if ( v661 == 4 )
  {
    v148 = *v1;
    v149 = 0;
  }
  else
  {
    v149 = -1073418210;
    v148 = v658;
  }
  LocalFree(v1);
  v6 = v149;
  return v6 >= 0 && v148;
}
