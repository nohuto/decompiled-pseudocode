/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x180045EA8
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180044C18 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18004DFC8 (-MemoryFree@@YAXPEAX@Z.c)
 *     StringLengthWorkerW @ 0x18004DFFC (StringLengthWorkerW.c)
 *     RtlULongLongAdd @ 0x1800670F8 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18006C8E0 (RtlUIntAdd.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180086130 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall SLGetHelper(STRSAFE_PCNZWCH psz)
{
  void *v1; // rbx
  int *v3; // r14
  wchar_t *v4; // r13
  HANDLE ProcessHeap; // rax
  _OWORD *v6; // r12
  HANDLE v7; // rax
  wchar_t *v8; // rax
  int v9; // r15d
  HANDLE v10; // rax
  HANDLE v11; // rax
  HANDLE v12; // rax
  HANDLE v13; // rax
  void *v14; // r12
  HANDLE v15; // rax
  _OWORD *v16; // r15
  HANDLE v17; // rax
  _QWORD *v18; // rax
  HANDLE v19; // rax
  _DWORD *v20; // rax
  unsigned int v21; // ecx
  void *v22; // rdi
  void *v23; // rbx
  HANDLE v24; // rax
  HANDLE v25; // rax
  int v26; // edi
  _DWORD *v28; // rdx
  unsigned int i3; // r9d
  unsigned int v30; // ecx
  _DWORD *v31; // rdx
  unsigned int i4; // r8d
  unsigned int v33; // ecx
  char *v34; // rdx
  unsigned int i5; // r8d
  unsigned __int64 v36; // rax
  const void **v37; // r13
  void *v38; // rax
  unsigned int v39; // ebx
  HANDLE v40; // rax
  char *v41; // rbx
  _DWORD *v42; // rcx
  SIZE_T v43; // r8
  __int64 v44; // rdx
  unsigned __int8 v45; // al
  unsigned __int64 v46; // r9
  int v47; // r13d
  unsigned __int64 v48; // rsi
  _BYTE *v49; // rax
  unsigned int v50; // r9d
  int v51; // edx
  int v52; // r12d
  unsigned __int8 *v53; // r15
  int v54; // ebx
  int v55; // r11d
  int v56; // ecx
  int v57; // ebx
  int v58; // r11d
  int v59; // r9d
  int v60; // r10d
  int v61; // edx
  int v62; // r10d
  int v63; // r8d
  int v64; // r9d
  unsigned int v65; // edx
  int v66; // ecx
  int v67; // edx
  int v68; // r8d
  int v69; // r9d
  int v70; // edx
  unsigned int v71; // r8d
  unsigned int v72; // r9d
  int v73; // edx
  int v74; // r8d
  int v75; // r9d
  int v76; // edx
  int v77; // r8d
  int v78; // r10d
  int v79; // edx
  int v80; // r9d
  unsigned int v81; // r8d
  int v82; // r10d
  int v83; // edx
  int v84; // r9d
  int v85; // r10d
  HANDLE v86; // rax
  _QWORD *v87; // rdi
  wchar_t *v88; // rdi
  int v89; // ebx
  unsigned int v90; // eax
  unsigned int v91; // eax
  unsigned int v92; // eax
  unsigned int v93; // eax
  unsigned int v94; // r8d
  unsigned int v95; // eax
  unsigned int v96; // edx
  unsigned int v97; // eax
  int v98; // r8d
  unsigned int v99; // r15d
  HANDLE v100; // rax
  _DWORD *v101; // rax
  unsigned int v102; // ecx
  _DWORD *v103; // rdx
  unsigned int i; // r9d
  int v105; // r11d
  unsigned int v106; // ecx
  int *v107; // rcx
  unsigned int v108; // eax
  _DWORD *v109; // rdx
  unsigned int j; // r9d
  int v111; // r11d
  unsigned int v112; // ecx
  size_t v113; // rdx
  unsigned int k; // r8d
  unsigned __int64 v115; // rax
  STRSAFE_PCNZWCH v116; // r15
  int v117; // r11d
  int v118; // r8d
  unsigned int v119; // eax
  unsigned int v120; // eax
  __int64 v121; // r8
  _DWORD *v122; // rdx
  unsigned int m; // ecx
  int v124; // r11d
  unsigned int v125; // ecx
  _DWORD *v126; // rdx
  unsigned int n; // r8d
  unsigned int v128; // ecx
  _DWORD *v129; // rdx
  unsigned int ii; // r8d
  unsigned int v131; // r9d
  int v132; // r9d
  SIZE_T v133; // rax
  unsigned int v134; // r15d
  HANDLE v135; // rax
  SIZE_T v136; // r8
  __int64 v137; // rdx
  unsigned __int8 v138; // al
  unsigned __int64 v139; // r9
  SIZE_T v140; // rsi
  _BYTE *v141; // rax
  int v142; // r9d
  int v143; // r10d
  unsigned __int8 *v144; // r12
  int v145; // r15d
  int v146; // r11d
  int v147; // ecx
  int v148; // r15d
  int v149; // r11d
  int v150; // edx
  unsigned int v151; // r9d
  int v152; // r10d
  int v153; // r8d
  int v154; // r9d
  unsigned int v155; // edx
  int v156; // ecx
  int v157; // edx
  int v158; // r8d
  int v159; // r9d
  int v160; // edx
  unsigned int v161; // r8d
  unsigned int v162; // r9d
  int v163; // edx
  int v164; // r8d
  int v165; // r9d
  int v166; // edx
  int v167; // r8d
  int v168; // r10d
  int v169; // edx
  int v170; // r9d
  unsigned int v171; // r8d
  int v172; // r10d
  int v173; // edx
  int v174; // r9d
  HANDLE v175; // rax
  SIZE_T v176; // r15
  int v177; // r15d
  unsigned int v178; // eax
  unsigned int v179; // eax
  unsigned int v180; // eax
  SIZE_T v181; // rdx
  int v182; // ebx
  void *v183; // rdi
  HANDLE v184; // rax
  void *v185; // rdi
  HANDLE v186; // rax
  void *v187; // rdi
  HANDLE v188; // rax
  void *v189; // rdi
  HANDLE v190; // rax
  HANDLE v191; // rax
  void *v192; // rdi
  HANDLE v193; // rax
  void *v194; // rdi
  HANDLE v195; // rax
  _QWORD *v196; // rdi
  void *v197; // rsi
  HANDLE v198; // rax
  void *v199; // rsi
  HANDLE v200; // rax
  void *v201; // rsi
  HANDLE v202; // rax
  HANDLE v203; // rax
  void *v204; // rdi
  HANDLE v205; // rax
  void *v206; // rdi
  HANDLE v207; // rax
  unsigned int v208; // r9d
  int v209; // r11d
  int *v210; // r8
  void *v211; // rcx
  unsigned int i7; // r10d
  unsigned int v213; // r11d
  int v214; // r10d
  HANDLE v215; // rax
  _QWORD *v216; // rax
  HANDLE v217; // rax
  HANDLE v218; // rax
  HANDLE v219; // rax
  void *v220; // r12
  HANDLE v221; // rax
  _QWORD *v222; // r13
  void *v223; // rcx
  unsigned int *v224; // r12
  int v225; // r11d
  int v226; // r10d
  HANDLE v227; // rax
  _QWORD *v228; // rax
  HANDLE v229; // rax
  HANDLE v230; // rax
  HANDLE v231; // rax
  HANDLE v232; // rax
  HANDLE v233; // rax
  HANDLE v234; // rax
  _QWORD *v235; // rax
  HANDLE v236; // rax
  HANDLE v237; // rax
  HANDLE v238; // rax
  HANDLE v239; // rax
  HANDLE v240; // rax
  HANDLE v241; // rax
  unsigned int *v242; // rax
  int v243; // r11d
  int *v244; // r15
  int jj; // r8d
  __int64 v246; // r9
  unsigned int *v247; // rdx
  LPVOID *v248; // r8
  unsigned int *v249; // rdx
  unsigned int kk; // r9d
  __int64 v251; // r10
  unsigned int *v252; // r8
  unsigned int *v253; // rdx
  unsigned int *v254; // rdx
  unsigned int mm; // r10d
  size_t v256; // r9
  unsigned int *v257; // r8
  unsigned int *v258; // rdx
  unsigned int *v259; // rdx
  unsigned int nn; // r10d
  __int64 v261; // r11
  unsigned int *v262; // r8
  unsigned int *v263; // rdx
  unsigned int v264; // r11d
  _DWORD *v265; // rdx
  unsigned int i1; // r10d
  _DWORD *v267; // r8
  unsigned int v268; // eax
  unsigned int v269; // r9d
  unsigned int v270; // eax
  unsigned int v271; // r15d
  HANDLE v272; // rax
  _DWORD *v273; // r13
  _DWORD *v274; // r15
  HANDLE v275; // rax
  unsigned int v276; // r10d
  unsigned int v277; // eax
  unsigned int v278; // r11d
  _DWORD *v279; // rcx
  _DWORD *v280; // r15
  _DWORD *v281; // rcx
  _DWORD *v282; // r15
  void *v283; // rdx
  const wchar_t *v284; // r9
  unsigned int *v285; // r8
  int v286; // r9d
  __int64 v287; // r10
  unsigned int *v288; // rdx
  unsigned int *v289; // rax
  unsigned int i2; // r8d
  __int64 v291; // r9
  unsigned int *v292; // rdx
  unsigned int v293; // ecx
  unsigned int v294; // eax
  unsigned int v295; // ecx
  unsigned int v296; // eax
  unsigned int v297; // r15d
  HANDLE v298; // rax
  void *v299; // rax
  FARPROC ProcAddress; // rax
  int v301; // eax
  unsigned int v302; // edx
  SIZE_T v303; // r8
  char *v304; // rcx
  unsigned int *v305; // r11
  SIZE_T v306; // r9
  unsigned int *v307; // rcx
  unsigned int v308; // r11d
  unsigned int *v309; // r10
  unsigned int v310; // r15d
  unsigned int v311; // ecx
  unsigned int v312; // r10d
  HANDLE v313; // rax
  _DWORD *v314; // rax
  signed int LastError; // eax
  int v316; // r15d
  unsigned __int64 v317; // rcx
  unsigned int v318; // r15d
  HANDLE v319; // rax
  void *v320; // rcx
  _QWORD *v321; // rax
  HANDLE v322; // rax
  HANDLE v323; // rax
  HANDLE v324; // rax
  HANDLE v325; // rax
  void *v326; // r15
  _DWORD *v327; // r11
  unsigned __int8 v328; // al
  char *v329; // r10
  char v330; // r11
  int v331; // esi
  int v332; // r14d
  int v333; // eax
  unsigned __int8 *v334; // rbx
  int v335; // ecx
  int v336; // edi
  int v337; // r9d
  unsigned int v338; // edx
  _BYTE *v339; // r8
  char *v340; // r12
  char v341; // r10
  int v342; // r9d
  int v343; // r8d
  void *v344; // rdx
  unsigned __int64 v345; // rcx
  void *v346; // r8
  void *v347; // r10
  int v348; // eax
  int v349; // edi
  unsigned int v350; // r13d
  int v351; // r14d
  unsigned __int8 *v352; // rdx
  unsigned __int64 v353; // rbx
  unsigned int v354; // r11d
  int v355; // r10d
  int v356; // r12d
  int v357; // r15d
  int v358; // edx
  int v359; // r8d
  int v360; // r9d
  unsigned int v361; // edx
  int v362; // r8d
  int v363; // r9d
  unsigned int v364; // edx
  int v365; // r8d
  int v366; // r10d
  int v367; // r11d
  unsigned int v368; // r9d
  int v369; // r8d
  unsigned int v370; // r9d
  int v371; // r10d
  int v372; // r11d
  int v373; // edx
  int v374; // r8d
  unsigned int v375; // r9d
  int v376; // edx
  int v377; // r10d
  int v378; // r8d
  unsigned int v379; // edx
  int v380; // r9d
  int v381; // ecx
  int v382; // r8d
  int v383; // r8d
  _BYTE *v384; // rdx
  HANDLE v385; // rax
  void *v386; // rcx
  HANDLE v387; // rax
  void *v388; // r9
  HANDLE v389; // rax
  void *v390; // rax
  HANDLE v391; // rax
  _OWORD *v392; // rax
  HANDLE v393; // rax
  _QWORD *v394; // rax
  void *v395; // rax
  HANDLE v396; // rax
  HANDLE v397; // rax
  HANDLE v398; // rax
  HANDLE v399; // rax
  HANDLE v400; // rax
  HANDLE v401; // rax
  HANDLE v402; // rax
  HANDLE v403; // rax
  HANDLE v404; // rax
  unsigned int v405; // r11d
  unsigned int v406; // r10d
  unsigned int v407; // eax
  unsigned int v408; // r9d
  unsigned int v409; // eax
  unsigned int v410; // r15d
  HANDLE v411; // rax
  _DWORD *v412; // rdi
  _DWORD *v413; // rbx
  HANDLE v414; // rax
  unsigned int v415; // edx
  unsigned int v416; // eax
  unsigned int v417; // r11d
  _DWORD *v418; // rcx
  _DWORD *v419; // rbx
  _DWORD *v420; // rcx
  _DWORD *v421; // rbx
  unsigned int v422; // r10d
  unsigned int *v423; // rdx
  int v424; // r9d
  __int64 v425; // r10
  unsigned int *v426; // r8
  unsigned int *v427; // rax
  unsigned int i8; // r8d
  __int64 v429; // r9
  unsigned int *v430; // rdx
  unsigned int v431; // edx
  unsigned int v432; // ecx
  unsigned int v433; // eax
  unsigned int v434; // edx
  unsigned int v435; // ebx
  HANDLE v436; // rax
  __int128 v437; // rax
  FARPROC v438; // rax
  int v439; // eax
  unsigned int v440; // edx
  SIZE_T v441; // r8
  char *v442; // rcx
  unsigned int *v443; // r11
  SIZE_T v444; // r9
  unsigned int *v445; // rcx
  unsigned int v446; // r11d
  unsigned int *v447; // r10
  unsigned int v448; // ebx
  unsigned int v449; // ecx
  unsigned int v450; // r10d
  HANDLE v451; // rax
  _DWORD *v452; // rax
  signed int v453; // eax
  int v454; // ebx
  STRSAFE_PCNZWCH v455; // rcx
  unsigned __int64 v456; // rcx
  unsigned int v457; // ebx
  HANDLE v458; // rax
  void *v459; // rcx
  _QWORD *v460; // rax
  _QWORD *v461; // rcx
  HANDLE v462; // rax
  HANDLE v463; // rax
  HANDLE v464; // rax
  HANDLE v465; // rax
  void *v466; // rbx
  _DWORD *v467; // r10
  unsigned __int8 v468; // al
  _BYTE *v469; // rdx
  unsigned int v470; // edi
  unsigned int v471; // r10d
  int v472; // eax
  unsigned __int8 *v473; // r14
  int v474; // r11d
  int v475; // ecx
  unsigned int v476; // r11d
  int v477; // ecx
  int v478; // ecx
  unsigned int v479; // esi
  int v480; // r8d
  char v481; // r9
  int v482; // r9d
  SIZE_T v483; // r8
  SIZE_T i6; // rcx
  void *v485; // rsi
  void *v486; // rdx
  int v487; // r13d
  _BYTE *v488; // r15
  int v489; // r14d
  unsigned int v490; // r10d
  unsigned __int8 *v491; // r12
  SIZE_T v492; // rax
  int v493; // edi
  int v494; // ebx
  int v495; // ecx
  int v496; // edi
  int v497; // ebx
  unsigned int v498; // r8d
  int v499; // r9d
  unsigned int v500; // edx
  int v501; // r8d
  int v502; // r9d
  unsigned int v503; // edx
  int v504; // r8d
  int v505; // r10d
  int v506; // r11d
  unsigned int v507; // r9d
  int v508; // edx
  int v509; // r8d
  unsigned int v510; // r9d
  int v511; // edx
  int v512; // r8d
  int v513; // r9d
  int v514; // edx
  int v515; // r8d
  int v516; // r9d
  int v517; // r10d
  int v518; // edx
  unsigned int v519; // r8d
  int v520; // r9d
  int v521; // r11d
  int v522; // r11d
  HANDLE v523; // rax
  void *v524; // rcx
  HANDLE v525; // rax
  void *v526; // r9
  unsigned int v527; // eax
  unsigned int v528; // ebx
  HANDLE v529; // rax
  void *v530; // rax
  HANDLE v531; // rax
  _OWORD *v532; // rax
  HANDLE v533; // rax
  _QWORD *v534; // rax
  HANDLE v535; // rax
  HANDLE v536; // rax
  HANDLE v537; // rax
  HANDLE v538; // rax
  __int64 v539; // rax
  int v540; // r15d
  _DWORD *v541; // rax
  void *v542; // rax
  HANDLE v543; // rax
  int v544; // ebx
  _DWORD *v545; // rax
  _DWORD *v546; // r8
  unsigned __int64 v547; // r9
  HANDLE v548; // rax
  void *v549; // rsi
  char *v550; // r11
  void *v551; // rcx
  void *v552; // r9
  void *v553; // rcx
  unsigned int *v554; // r9
  SIZE_T v555; // rbx
  HANDLE v556; // rax
  HANDLE v557; // rax
  HANDLE v558; // rax
  HANDLE v559; // rax
  void *v560; // r15
  HANDLE v561; // rax
  void *v562; // r15
  HANDLE v563; // rax
  void *v564; // r15
  HANDLE v565; // rax
  HANDLE v566; // rax
  HANDLE v567; // rax
  HANDLE v568; // rax
  _DWORD *v569; // [rsp+38h] [rbp-D0h]
  const void **v570; // [rsp+38h] [rbp-D0h]
  void *lpMem; // [rsp+40h] [rbp-C8h]
  unsigned __int64 lpMema; // [rsp+40h] [rbp-C8h]
  LPVOID lpMemb; // [rsp+40h] [rbp-C8h]
  void *lpMemc; // [rsp+40h] [rbp-C8h]
  void *lpMemd; // [rsp+40h] [rbp-C8h]
  void *lpMeme; // [rsp+40h] [rbp-C8h]
  void *lpMemf; // [rsp+40h] [rbp-C8h]
  void *lpMemg; // [rsp+40h] [rbp-C8h]
  void *lpMemh; // [rsp+40h] [rbp-C8h]
  void *lpMemi; // [rsp+40h] [rbp-C8h]
  void *lpMemj; // [rsp+40h] [rbp-C8h]
  void *lpMemk; // [rsp+40h] [rbp-C8h]
  LPVOID lpMeml; // [rsp+40h] [rbp-C8h]
  LPVOID lpMemm; // [rsp+40h] [rbp-C8h]
  void *lpMemn; // [rsp+40h] [rbp-C8h]
  void *lpMemo; // [rsp+40h] [rbp-C8h]
  void *lpMemp; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *lpMembi; // [rsp+40h] [rbp-C8h]
  void *lpMemq; // [rsp+40h] [rbp-C8h]
  void *lpMemr; // [rsp+40h] [rbp-C8h]
  void *lpMems; // [rsp+40h] [rbp-C8h]
  void *lpMemt; // [rsp+40h] [rbp-C8h]
  void *lpMemu; // [rsp+40h] [rbp-C8h]
  void *lpMemv; // [rsp+40h] [rbp-C8h]
  LPVOID lpMemw; // [rsp+40h] [rbp-C8h]
  void *lpMemx; // [rsp+40h] [rbp-C8h]
  void *lpMemy; // [rsp+40h] [rbp-C8h]
  void *lpMemz; // [rsp+40h] [rbp-C8h]
  void *lpMemba; // [rsp+40h] [rbp-C8h]
  void *lpMembb; // [rsp+40h] [rbp-C8h]
  void *lpMembc; // [rsp+40h] [rbp-C8h]
  void *lpMembd; // [rsp+40h] [rbp-C8h]
  char *lpMembe; // [rsp+40h] [rbp-C8h]
  void *lpMembf; // [rsp+40h] [rbp-C8h]
  void *lpMembg; // [rsp+40h] [rbp-C8h]
  void *lpMembh; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v607; // [rsp+48h] [rbp-C0h]
  unsigned int v608; // [rsp+4Ch] [rbp-BCh] BYREF
  LPVOID v609; // [rsp+50h] [rbp-B8h]
  LPVOID v610; // [rsp+58h] [rbp-B0h]
  LPVOID v611; // [rsp+60h] [rbp-A8h]
  SIZE_T v612; // [rsp+68h] [rbp-A0h]
  LPVOID v613; // [rsp+70h] [rbp-98h]
  LPVOID v614; // [rsp+78h] [rbp-90h]
  unsigned int v615; // [rsp+80h] [rbp-88h]
  SIZE_T v616; // [rsp+88h] [rbp-80h] BYREF
  STRSAFE_PCNZWCH psza; // [rsp+90h] [rbp-78h] BYREF
  size_t cchMax[2]; // [rsp+98h] [rbp-70h] BYREF
  LPVOID v619; // [rsp+A8h] [rbp-60h]
  SIZE_T Size; // [rsp+B0h] [rbp-58h]
  SIZE_T dwBytes; // [rsp+B8h] [rbp-50h]
  void *v622; // [rsp+C0h] [rbp-48h]
  int v623; // [rsp+C8h] [rbp-40h]
  unsigned int v624; // [rsp+CCh] [rbp-3Ch]
  wchar_t *v625; // [rsp+D0h] [rbp-38h]
  LPVOID v626; // [rsp+D8h] [rbp-30h]
  LPVOID Src[2]; // [rsp+E0h] [rbp-28h] BYREF
  void *v628; // [rsp+F0h] [rbp-18h]
  SIZE_T v629; // [rsp+F8h] [rbp-10h]
  SIZE_T v630; // [rsp+100h] [rbp-8h]
  void *v631; // [rsp+108h] [rbp+0h]
  int v632; // [rsp+110h] [rbp+8h]
  int v633; // [rsp+114h] [rbp+Ch]
  int v634; // [rsp+118h] [rbp+10h]
  int *v635; // [rsp+120h] [rbp+18h]
  unsigned int v636; // [rsp+128h] [rbp+20h]
  size_t v637; // [rsp+130h] [rbp+28h] BYREF
  int v638; // [rsp+138h] [rbp+30h]
  int v639; // [rsp+13Ch] [rbp+34h]
  size_t pcchLength; // [rsp+140h] [rbp+38h] BYREF
  HMODULE phModule; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 v642; // [rsp+150h] [rbp+48h]
  HMODULE hModule; // [rsp+158h] [rbp+50h] BYREF
  __int128 v644; // [rsp+160h] [rbp+58h] BYREF
  __int128 v645; // [rsp+170h] [rbp+68h]
  __int128 v646; // [rsp+180h] [rbp+78h] BYREF
  __int128 v647; // [rsp+190h] [rbp+88h]
  unsigned __int64 v648; // [rsp+1A0h] [rbp+98h]

  v1 = 0LL;
  psza = psz;
  v639 = 0;
  v628 = 0LL;
  v632 = 0;
  if ( !psz )
    return 0;
  v636 = 0;
  v638 = 0;
  v635 = (int *)LocalAlloc(0x40u, 4uLL);
  v3 = v635;
  if ( !v635 )
  {
    v9 = -2147024882;
LABEL_43:
    v632 = v9;
    if ( v9 == -2147024774 )
    {
      v26 = -1073418210;
LABEL_36:
      if ( !v1 )
        return v26 >= 0 && v639;
      goto LABEL_39;
    }
LABEL_35:
    v26 = v632;
    goto LABEL_36;
  }
  v4 = 0LL;
  v623 = 0;
  v610 = 0LL;
  v634 = 0;
  *(_OWORD *)cchMax = 0LL;
  ProcessHeap = GetProcessHeap();
  v624 = 56;
  v6 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v633 = -1;
  if ( !v6 )
  {
    v6 = 0LL;
    goto LABEL_171;
  }
  *v6 = xmmword_180114AB0[0];
  v6[1] = xmmword_180114AB0[1];
  v6[2] = xmmword_180114AB0[2];
  v6[3] = xmmword_180114AB0[3];
  v6[4] = xmmword_180114AB0[4];
  v6[5] = xmmword_180114AB0[5];
  v6[6] = xmmword_180114AB0[6];
  v6[7] = xmmword_180114AB0[7];
  v6[8] = xmmword_180114AB0[8];
  v6[9] = xmmword_180114AB0[9];
  v7 = GetProcessHeap();
  v8 = (wchar_t *)HeapAlloc(v7, 8u, 8uLL);
  v4 = v8;
  if ( !v8 )
  {
    v4 = 0LL;
    goto LABEL_171;
  }
  *(_QWORD *)v8 = qword_1801149F0;
  v642 = __rdtsc();
  pcchLength = 0LL;
  if ( StringLengthWorkerW(psz, (unsigned __int64)HIDWORD(v642) << 32, &pcchLength) < 0 )
  {
    pcchLength = 0LL;
LABEL_173:
    v9 = -1073741762;
    goto LABEL_8;
  }
  if ( (unsigned int)(2 * ++pcchLength) >= 0xFFFFFFFC )
  {
LABEL_7:
    v9 = -1073741675;
    goto LABEL_8;
  }
  v93 = 2 * pcchLength + 200;
  v94 = -1;
  if ( v93 >= 0xC4 )
    v94 = 2 * pcchLength + 200;
  v9 = v93 < 0xC4 ? -805306219 : 0x10000000;
  if ( v93 < 0xC4 )
    goto LABEL_126;
  v95 = v94 + 8;
  v96 = -1;
  if ( v94 + 8 >= v94 )
    v96 = v94 + 8;
  v9 = v95 < v94 ? -805306219 : 0x10000000;
  if ( v95 < v94 )
    goto LABEL_126;
  v97 = v96 + 8;
  v98 = -1;
  if ( v96 + 8 >= v96 )
    v98 = v96 + 8;
  v9 = v97 < v96 ? -805306219 : 0x10000000;
  if ( v97 < v96 )
  {
LABEL_126:
    if ( v9 < 0 )
      goto LABEL_8;
    goto LABEL_135;
  }
  HIDWORD(cchMax[0]) = v98;
  v99 = v98;
  v100 = GetProcessHeap();
  v101 = HeapAlloc(v100, 8u, v99);
  if ( !v101 )
  {
LABEL_171:
    v9 = -1073741801;
    goto LABEL_8;
  }
  cchMax[1] = (size_t)v101;
  LODWORD(cchMax[0]) = 0;
  if ( v101 + 1 < v101 )
    goto LABEL_7;
  if ( (unsigned __int64)(v101 + 2) > cchMax[1] + HIDWORD(cchMax[0]) )
    goto LABEL_235;
  *v101 = 4;
  v101[1] = 0;
  v102 = ++LODWORD(cchMax[0]);
  if ( cchMax[1] )
  {
    v103 = (_DWORD *)cchMax[1];
    for ( i = 0; i < v102; ++i )
    {
      v108 = *v103 + 4;
      if ( *v103 >= 0xFFFFFFFC || (_DWORD *)((char *)v103 + v108) < v103 )
        goto LABEL_7;
      v103 = (_DWORD *)((char *)v103 + v108);
    }
    if ( v103 + 1 < v103 )
      goto LABEL_7;
    if ( (unsigned __int64)(v103 + 41) > cchMax[1] + HIDWORD(cchMax[0]) )
      goto LABEL_235;
    *v103 = 160;
    memcpy_0(v103 + 1, v6, 0xA0uLL);
    v105 = 1;
  }
  else
  {
    v9 = RtlUIntAdd(HIDWORD(cchMax[0]), 164LL, (char *)cchMax + 4);
    if ( v9 < 0 )
      goto LABEL_8;
  }
  v106 = v105 + LODWORD(cchMax[0]);
  LODWORD(cchMax[0]) += v105;
  if ( !v4 )
  {
LABEL_125:
    v9 = -1073741811;
    goto LABEL_8;
  }
  if ( cchMax[1] )
  {
    v109 = (_DWORD *)cchMax[1];
    for ( j = 0; j < v106; j += v105 )
    {
      v119 = *v109 + 4;
      if ( *v109 >= 0xFFFFFFFC || (_DWORD *)((char *)v109 + v119) < v109 )
        goto LABEL_7;
      v109 = (_DWORD *)((char *)v109 + v119);
    }
    if ( v109 + 1 < v109 )
      goto LABEL_7;
    if ( (unsigned __int64)(v109 + 3) > cchMax[1] + HIDWORD(cchMax[0]) )
      goto LABEL_235;
    *v109 = 8;
    memcpy_0(v109 + 1, v4, 8uLL);
    v111 = 1;
  }
  else
  {
    v9 = RtlUIntAdd(HIDWORD(cchMax[0]), 12LL, (char *)cchMax + 4);
    if ( v9 < 0 )
      goto LABEL_8;
  }
  v112 = v111 + LODWORD(cchMax[0]);
  LODWORD(cchMax[0]) += v111;
  if ( cchMax[1] )
  {
    v113 = cchMax[1];
    for ( k = 0; k < v112; k += v111 )
    {
      v120 = *(_DWORD *)v113 + 4;
      if ( *(_DWORD *)v113 >= 0xFFFFFFFC || v113 + v120 < v113 )
        goto LABEL_7;
      v113 += v120;
    }
    if ( v113 + 4 < v113 )
      goto LABEL_7;
    if ( v113 + 12 > cchMax[1] + HIDWORD(cchMax[0]) )
      goto LABEL_235;
    v115 = v642;
    *(_DWORD *)v113 = 8;
    *(_QWORD *)(v113 + 4) = v115;
  }
  else
  {
    v9 = RtlUIntAdd(HIDWORD(cchMax[0]), 12LL, (char *)cchMax + 4);
    if ( v9 < 0 )
      goto LABEL_8;
  }
  v116 = psza;
  LODWORD(cchMax[0]) += v111;
  v637 = 0LL;
  if ( StringLengthWorkerW(psza, v113, &v637) < 0 )
  {
    v637 = 0LL;
    goto LABEL_173;
  }
  v118 = v637 + 1;
  if ( v637 + 1 < v637 )
  {
    v637 = -1LL;
    goto LABEL_7;
  }
  ++v637;
  v121 = (unsigned int)(2 * v118);
  if ( !(_DWORD)v121 )
    goto LABEL_125;
  if ( cchMax[1] )
  {
    v122 = (_DWORD *)cchMax[1];
    for ( m = 0; m < LODWORD(cchMax[0]); m += v117 )
    {
      v178 = *v122 + 4;
      if ( *v122 >= 0xFFFFFFFC || (_DWORD *)((char *)v122 + v178) < v122 )
        goto LABEL_7;
      v122 = (_DWORD *)((char *)v122 + v178);
    }
    if ( v122 + 1 < v122 )
      goto LABEL_7;
    if ( (unsigned __int64)v122 + v121 + 4 > cchMax[1] + HIDWORD(cchMax[0]) )
      goto LABEL_235;
    *v122 = v121;
    memcpy_0(v122 + 1, v116, (unsigned int)v121);
    v124 = 1;
LABEL_182:
    v125 = v124 + LODWORD(cchMax[0]);
    LODWORD(cchMax[0]) += v124;
    if ( cchMax[1] )
    {
      v126 = (_DWORD *)cchMax[1];
      for ( n = 0; n < v125; n += v124 )
      {
        v179 = *v126 + 4;
        if ( *v126 >= 0xFFFFFFFC || (_DWORD *)((char *)v126 + v179) < v126 )
          goto LABEL_7;
        v126 = (_DWORD *)((char *)v126 + v179);
      }
      if ( v126 + 1 < v126 )
        goto LABEL_7;
      if ( (unsigned __int64)(v126 + 2) > cchMax[1] + HIDWORD(cchMax[0]) )
        goto LABEL_235;
      *v126 = 4;
      v126[1] = 0;
    }
    else
    {
      v9 = RtlUIntAdd(HIDWORD(cchMax[0]), 8LL, (char *)cchMax + 4);
      if ( v9 < 0 )
        goto LABEL_8;
    }
    v128 = v124 + LODWORD(cchMax[0]);
    LODWORD(cchMax[0]) += v124;
    if ( cchMax[1] )
    {
      v129 = (_DWORD *)cchMax[1];
      for ( ii = 0; ii < v128; ii += v124 )
      {
        v180 = *v129 + 4;
        if ( *v129 >= 0xFFFFFFFC || (_DWORD *)((char *)v129 + v180) < v129 )
          goto LABEL_7;
        v129 = (_DWORD *)((char *)v129 + v180);
      }
      if ( v129 + 1 < v129 )
        goto LABEL_7;
      if ( (unsigned __int64)(v129 + 2) > cchMax[1] + HIDWORD(cchMax[0]) )
        goto LABEL_235;
      *v129 = 4;
      v129[1] = 4;
    }
    else
    {
      v9 = RtlUIntAdd(HIDWORD(cchMax[0]), 8LL, (char *)cchMax + 4);
      if ( v9 < 0 )
        goto LABEL_8;
    }
    LODWORD(cchMax[0]) += v124;
    v608 = 0;
    LODWORD(v616) = 36;
    v9 = RtlUIntAdd(4LL, 4LL, &v608);
    if ( v9 < 0 )
      goto LABEL_8;
    v9 = RtlUIntAdd(v131, v608, &v616);
    if ( v9 < 0 )
      goto LABEL_8;
    v608 = 0;
    v9 = RtlUIntAdd((unsigned int)(v132 - 32), (unsigned int)(v132 - 32), &v608);
    if ( v9 < 0 )
      goto LABEL_8;
    v9 = RtlUIntAdd((unsigned int)v616, v608, &v616);
    if ( v9 < 0 )
      goto LABEL_8;
    v613 = 0LL;
    v614 = 0LL;
    LODWORD(dwBytes) = 0;
    v611 = 0LL;
    v609 = 0LL;
    v619 = 0LL;
    v608 = v616;
    Size = __rdtsc();
    if ( HIDWORD(cchMax[0]) >= 0xFFFFFFF8
      || (v133 = (HIDWORD(cchMax[0]) + 15) & 0xFFFFFFF8, v612 = v133, (unsigned int)v133 < HIDWORD(cchMax[0]) + 8) )
    {
      v9 = -805306219;
      goto LABEL_8;
    }
    v134 = (HIDWORD(cchMax[0]) + 15) & 0xFFFFFFF8;
    v629 = (unsigned int)v133;
    v135 = GetProcessHeap();
    v569 = HeapAlloc(v135, 8u, v134);
    if ( !v569 )
    {
      v9 = -805306345;
      goto LABEL_316;
    }
    *v569 = cchMax[0];
    if ( v569 + 1 < v569 || (v569[1] = HIDWORD(cchMax[0]), v569 + 2 < v569 + 1) )
    {
      v241 = GetProcessHeap();
      HeapFree(v241, 0, v569);
      v9 = -805306219;
      goto LABEL_316;
    }
    *(_QWORD *)((char *)v569 + v629 - 8) = Size;
    memcpy_0(v569 + 2, (const void *)cchMax[1], HIDWORD(cchMax[0]));
    if ( !(_DWORD)v612
      || (lpMemb = (LPVOID)((unsigned int)v612 + 8LL),
          Size = (SIZE_T)DefaultHeap::Alloc((unsigned __int64)lpMemb),
          (v136 = Size) == 0) )
    {
      v9 = -805306367;
      goto LABEL_292;
    }
    v137 = (unsigned int)v612;
    v138 = 0;
    v607 = 0;
    v139 = 0LL;
    v622 = v569;
    v626 = 0LL;
    if ( (_DWORD)v612 )
    {
      v622 = v569;
      v608 = v616;
      v626 = 0LL;
      do
        v138 ^= *((_BYTE *)v569 + v139++);
      while ( v139 < (unsigned int)v612 );
      v607 = v138;
    }
    v629 = (unsigned __int64)(unsigned int)v612 >> 3;
    if ( v629 )
    {
      v140 = v629;
      v141 = (_BYTE *)(Size + 7);
      v608 = v616;
      v142 = -1;
      v625 = v4;
      v143 = 0;
      psza = (STRSAFE_PCNZWCH)v6;
      v144 = (unsigned __int8 *)v569 + 2;
      LODWORD(v630) = 0;
      LODWORD(v616) = 0;
      v615 = 0;
      v622 = v569;
      do
      {
        v145 = *(v144 - 1) | (*(v144 - 2) << 8);
        v146 = v144[2] << 8;
        v147 = *v144;
        v144 += 8;
        v148 = *(v144 - 7) | ((v147 | (v145 << 8)) << 8);
        v149 = *(v144 - 3) | ((*(v144 - 4) | ((*(v144 - 5) | v146) << 8)) << 8);
        v150 = v142 ^ v149;
        v151 = v143 ^ v148 ^ ((v142 ^ v149) - 19032) ^ 0xC81ECB17;
        v152 = v150 ^ (__ROR4__(v151, 7) + 45493 * __ROR4__(v151 ^ 0xC81ECB17, 15));
        v153 = v151 ^ (51991 * __ROR4__(v152 - 1313519016, 9) - __ROR4__(v152, 10));
        v154 = v152 ^ (__ROR4__(v153, 27) + 51230 * __ROR4__(v153 ^ 0xCB17, 28));
        v155 = v153 ^ (-937506025 - (v154 ^ 0xB1B54A58));
        v156 = v155 ^ (19032 * (__ROR4__(v154 ^ (45493 * (v155 - 19032) - (v155 >> 6)), 15) ^ 0xCB17));
        v157 = v154 ^ (45493 * (v155 - 19032) - (v155 >> 6)) ^ (51991 * (__ROR4__(~v156, 3) + 51230));
        v158 = v156 ^ (v157 + 937486993);
        v159 = v157 ^ (45493 * (v158 ^ 0xC81E)) ^ __ROR4__(v158, 10);
        v160 = v158 ^ __ROR4__(v159, 3) ^ (51991 * __ROR4__(v159 ^ 0x4A58, 26));
        v161 = v159 ^ (19032 * (__ROR4__(v160, 15) - 51230));
        v162 = v160 ^ ((v161 ^ (v161 >> 14)) >> 1) ^ (19032 * (v161 ^ 0xC81E)) ^ (19032
                                                                                * ((8 * (v161 - 51991)) | ((v161 - 51991) >> 29)));
        v163 = v161 ^ (45493 * (v162 - 51991) - (v162 >> 13));
        v164 = v162 ^ __ROR4__(v163, 11) ^ (51991 * __ROR4__(-1313519016 - v163, 9));
        v165 = v163 ^ (v164 - 51230 + 1313519016);
        v166 = v164 ^ (19032 * (v165 ^ 0xB1B5) - __ROR4__(v165, 7));
        v167 = v165 ^ (45493 * __ROR4__(v166 ^ 0xC81E, 28) - __ROR4__(v166, 16));
        v168 = v166 ^ (__ROR4__(v167, 4) + 51991 * __ROR4__(-1313519016 - v167, 10));
        v169 = v167 ^ __ROR4__(v168, 9) ^ (51230 * __ROR4__(v168 + 1313519016, 4));
        v170 = v168 ^ (19032 * __ROR4__(v169 ^ 0xC81ECB17, 24) - __ROR4__(v169, 30));
        v171 = v169 ^ (45493 * __ROR4__(-937506025 - v170, 11) - __ROR4__(v170, 12));
        v172 = v630;
        LODWORD(v630) = v148;
        v173 = v170 ^ (v171 >> 8) ^ (51991 * (v171 ^ 0xB1B5));
        v174 = v616;
        v143 = v173 ^ v172;
        LODWORD(v616) = v149;
        *(v141 - 4) = v143;
        v142 = v171 ^ v173 ^ v174 ^ 0x79AB814F;
        *v141 = v142;
        *(v141 - 5) = __ROR4__(v143, 8);
        v141 += 8;
        *(v141 - 9) = __ROR4__(v142, 8);
        *(v141 - 14) = __ROR4__(v143, 16);
        *(v141 - 10) = __ROR4__(v142, 16);
        *(v141 - 15) = __ROR4__(v143, 24);
        *(v141 - 11) = __ROR4__(v142, 24);
        --v140;
      }
      while ( v140 );
      v138 = v607;
      v1 = v628;
      v3 = v635;
      v4 = v625;
      v6 = psza;
      v137 = (unsigned int)v612;
      v136 = Size;
    }
    *(_QWORD *)(v136 + v137) = v138;
    v175 = GetProcessHeap();
    v612 = (SIZE_T)HeapAlloc(v175, 8u, 0x30uLL);
    v176 = v612;
    if ( !v612 )
    {
      v177 = -1073741801;
      goto LABEL_286;
    }
    *(_DWORD *)v612 = (_DWORD)lpMemb;
    psza = (STRSAFE_PCNZWCH)(unsigned int)lpMemb;
    v389 = GetProcessHeap();
    v390 = HeapAlloc(v389, 8u, (SIZE_T)psza);
    if ( v390 )
    {
      *(_QWORD *)(v176 + 8) = v390;
      memcpy_0(v390, (const void *)Size, (size_t)psza);
      *(_DWORD *)(v176 + 16) = 160;
      v391 = GetProcessHeap();
      v392 = HeapAlloc(v391, 8u, 0xA0uLL);
      if ( v392 )
      {
        *(_QWORD *)(v176 + 24) = v392;
        *v392 = xmmword_180114A00[0];
        v392[1] = xmmword_180114A00[1];
        v392[2] = xmmword_180114A00[2];
        v392[3] = xmmword_180114A00[3];
        v392[4] = xmmword_180114A00[4];
        v392[5] = xmmword_180114A00[5];
        v392[6] = xmmword_180114A00[6];
        v392[7] = xmmword_180114A00[7];
        v392[8] = xmmword_180114A00[8];
        v392[9] = xmmword_180114A00[9];
        *(_DWORD *)(v176 + 32) = 8;
        v393 = GetProcessHeap();
        v394 = HeapAlloc(v393, 8u, 8uLL);
        if ( v394 )
        {
          *(_QWORD *)(v176 + 40) = v394;
          *v394 = qword_180114AA0;
          v395 = (void *)v176;
          v177 = 0;
          v613 = v395;
          v626 = 0LL;
          goto LABEL_286;
        }
      }
      v216 = (_QWORD *)v612;
    }
    else
    {
      v216 = (_QWORD *)v612;
    }
    v177 = -1073741801;
    lpMemc = (void *)v216[1];
    if ( lpMemc )
    {
      v215 = GetProcessHeap();
      HeapFree(v215, 0, lpMemc);
      v216 = (_QWORD *)v612;
      *(_QWORD *)(v612 + 8) = 0LL;
    }
    lpMemd = (void *)v216[3];
    if ( lpMemd )
    {
      v217 = GetProcessHeap();
      HeapFree(v217, 0, lpMemd);
      v216 = (_QWORD *)v612;
      *(_QWORD *)(v612 + 24) = 0LL;
    }
    lpMeme = (void *)v216[5];
    if ( lpMeme )
    {
      v218 = GetProcessHeap();
      HeapFree(v218, 0, lpMeme);
      *(_QWORD *)(v612 + 40) = 0LL;
    }
    v219 = GetProcessHeap();
    HeapFree(v219, 0, (LPVOID)v612);
LABEL_286:
    v625 = (wchar_t *)v6;
    v220 = v613;
    psza = v4;
    v221 = GetProcessHeap();
    HeapFree(v221, 0, (LPVOID)Size);
    v222 = v626;
    if ( v626 )
    {
      lpMembf = (void *)*((_QWORD *)v626 + 1);
      if ( lpMembf )
      {
        v556 = GetProcessHeap();
        HeapFree(v556, 0, lpMembf);
        v222[1] = 0LL;
      }
      lpMembg = (void *)v222[3];
      if ( lpMembg )
      {
        v557 = GetProcessHeap();
        HeapFree(v557, 0, lpMembg);
        v222[3] = 0LL;
      }
      lpMembh = (void *)v222[5];
      if ( lpMembh )
      {
        v558 = GetProcessHeap();
        HeapFree(v558, 0, lpMembh);
        v222[5] = 0LL;
      }
      v559 = GetProcessHeap();
      HeapFree(v559, 0, v222);
      v613 = v220;
    }
    v9 = v177 | 0x10000000;
    v223 = v622;
    v4 = (wchar_t *)psza;
    v569 = v622;
    v6 = v625;
    if ( v9 < 0 )
      goto LABEL_290;
    v224 = (unsigned int *)v613;
    v225 = *((_DWORD *)v613 + 8);
    v226 = *((_DWORD *)v613 + 4);
    if ( *(_DWORD *)v613 >= 0xFFFFFFFC
      || (v268 = *(_DWORD *)v613 + 8, v268 < *(_DWORD *)v613 + 4)
      || (v269 = v268 + v226, v268 + v226 < v268)
      || (v270 = v269 + 4, v269 + 4 < v269)
      || (v615 = v270 + v225, v270 + v225 < v270) )
    {
      v9 = -805306219;
      v569 = v622;
      v6 = v625;
    }
    else
    {
      v271 = v270 + v225;
      v272 = GetProcessHeap();
      v273 = HeapAlloc(v272, 8u, v271);
      if ( !v273 )
      {
        v223 = v622;
        v9 = -805306345;
        v4 = (wchar_t *)psza;
        v6 = v625;
        v569 = v622;
        v614 = 0LL;
        goto LABEL_290;
      }
      v274 = v273 + 1;
      *v273 = *v224;
      if ( v273 + 1 >= v273 )
      {
        memcpy_0(v273 + 1, *((const void **)v224 + 1), *v224);
        v279 = (_DWORD *)((char *)v274 + *v224);
        if ( v279 >= v274 )
        {
          v280 = v279 + 1;
          *v279 = v224[4];
          if ( v279 + 1 >= v279 )
          {
            memcpy_0(v279 + 1, *((const void **)v224 + 3), v224[4]);
            v281 = (_DWORD *)((char *)v280 + v224[4]);
            if ( v281 >= v280 )
            {
              v282 = v281 + 1;
              *v281 = v224[8];
              if ( v281 + 1 >= v281 )
              {
                memcpy_0(v281 + 1, *((const void **)v224 + 5), v224[8]);
                if ( (_DWORD *)((char *)v282 + v224[8]) >= v282 )
                {
                  v283 = v273;
                  v223 = v622;
                  v284 = v625;
                  v614 = v273;
                  LODWORD(dwBytes) = v615;
                  v276 = -1;
                  if ( v608 < 0xFFFFFFF8 )
                    v276 = v608 + 8;
                  v9 = v608 >= 0xFFFFFFF8 ? -805306219 : 0x10000000;
                  if ( v608 + 8 < 8 )
                  {
                    v296 = 0;
                    v613 = v224;
                    v608 = 0;
                    v4 = (wchar_t *)psza;
                    v614 = v283;
                    v6 = v625;
                    LODWORD(dwBytes) = v615;
                    v569 = v622;
                    v625 = (wchar_t *)psza;
                    psza = v284;
                    if ( v9 < 0 )
                      goto LABEL_290;
                  }
                  else
                  {
                    v6 = v625;
                    v277 = (v276 + 7) & 0xFFFFFFF8;
                    if ( v277 < v276 || (v278 = v277 + 8, v277 + 8 < v277) )
                    {
                      v9 = -1073741675;
                      v569 = v622;
                      v4 = (wchar_t *)psza;
                      goto LABEL_290;
                    }
                    v4 = (wchar_t *)psza;
                    v569 = v622;
                    v614 = v283;
                    if ( !cchMax[1] )
                    {
                      v9 = -1073741811;
                      goto LABEL_290;
                    }
                    v614 = v283;
                    if ( LODWORD(cchMax[0]) <= 1 )
                    {
                      v181 = (SIZE_T)v622;
                      v9 = -1073741811;
LABEL_291:
                      if ( !v181 )
                      {
LABEL_293:
                        v228 = v613;
                        if ( v613 )
                        {
                          lpMemf = (void *)*((_QWORD *)v613 + 1);
                          if ( lpMemf )
                          {
                            v229 = GetProcessHeap();
                            HeapFree(v229, 0, lpMemf);
                            v228 = v613;
                            *((_QWORD *)v613 + 1) = 0LL;
                          }
                          lpMemg = (void *)v228[3];
                          if ( lpMemg )
                          {
                            v230 = GetProcessHeap();
                            HeapFree(v230, 0, lpMemg);
                            v228 = v613;
                            *((_QWORD *)v613 + 3) = 0LL;
                          }
                          lpMemh = (void *)v228[5];
                          if ( lpMemh )
                          {
                            v231 = GetProcessHeap();
                            HeapFree(v231, 0, lpMemh);
                            *((_QWORD *)v613 + 5) = 0LL;
                          }
                          v232 = GetProcessHeap();
                          HeapFree(v232, 0, v613);
                        }
                        if ( v614 )
                        {
                          v233 = GetProcessHeap();
                          HeapFree(v233, 0, v614);
                        }
                        if ( v611 )
                        {
                          v234 = GetProcessHeap();
                          HeapFree(v234, 0, v611);
                        }
                        v235 = v609;
                        if ( v609 )
                        {
                          lpMemi = (void *)*((_QWORD *)v609 + 1);
                          if ( lpMemi )
                          {
                            v236 = GetProcessHeap();
                            HeapFree(v236, 0, lpMemi);
                            v235 = v609;
                            *((_QWORD *)v609 + 1) = 0LL;
                          }
                          lpMemj = (void *)v235[3];
                          if ( lpMemj )
                          {
                            v237 = GetProcessHeap();
                            HeapFree(v237, 0, lpMemj);
                            v235 = v609;
                            *((_QWORD *)v609 + 3) = 0LL;
                          }
                          lpMemk = (void *)v235[5];
                          if ( lpMemk )
                          {
                            v238 = GetProcessHeap();
                            HeapFree(v238, 0, lpMemk);
                            *((_QWORD *)v609 + 5) = 0LL;
                          }
                          v239 = GetProcessHeap();
                          HeapFree(v239, 0, v609);
                        }
                        if ( v619 )
                        {
                          v240 = GetProcessHeap();
                          HeapFree(v240, 0, v619);
                        }
LABEL_316:
                        v242 = (unsigned int *)v610;
                        if ( v9 < 0 )
                          goto LABEL_8;
                        if ( v623 )
                        {
                          if ( !v610 )
                            goto LABEL_125;
                          v243 = *(_DWORD *)v610;
                          if ( (char *)v610 + 4 < v610 )
                          {
                            v9 = -1073741675;
                            goto LABEL_139;
                          }
                          v244 = 0LL;
                          if ( v243 )
                            v244 = (int *)((char *)v610 + 4);
                          if ( v243 != 4 )
                          {
LABEL_235:
                            v9 = -1073741789;
                            goto LABEL_8;
                          }
                          v9 = *v244;
                          if ( v9 == -805306333 )
                          {
                            v634 = -2147024774;
                          }
                          else
                          {
                            v634 = v9;
                            if ( v9 != -2147024774 )
                            {
                              v634 = v9;
                              if ( v9 < 0 )
                                goto LABEL_8;
                            }
                          }
                          if ( v623 == 6 )
                          {
                            for ( jj = 0; ; jj = 1 )
                            {
                              v246 = *v242;
                              v247 = v242 + 1;
                              if ( jj )
                                break;
                              if ( v247 < v242 )
                                goto LABEL_7;
                              v242 = (unsigned int *)((char *)v247 + v246);
                              if ( (unsigned int *)((char *)v247 + v246) < v247 )
                                goto LABEL_7;
                            }
                            if ( v247 < v242 )
                              goto LABEL_7;
                            v242 = (unsigned int *)v610;
                            v248 = 0LL;
                            if ( (_DWORD)v246 )
                              v248 = (LPVOID *)v247;
                            if ( (_DWORD)v246 == 8 )
                            {
                              lpMeml = *v248;
                              v249 = (unsigned int *)v610;
                              for ( kk = 0; ; ++kk )
                              {
                                v251 = *v249;
                                v252 = v249 + 1;
                                if ( kk >= 2 )
                                  break;
                                if ( v252 < v249 )
                                  goto LABEL_7;
                                v249 = (unsigned int *)((char *)v252 + v251);
                                if ( (unsigned int *)((char *)v252 + v251) < v252 )
                                  goto LABEL_7;
                              }
                              if ( v252 < v249 )
                                goto LABEL_7;
                              v253 = 0LL;
                              if ( (_DWORD)v251 )
                                v253 = v252;
                              if ( (_DWORD)v251 == 4 )
                              {
                                v615 = *v253;
                                v254 = (unsigned int *)v610;
                                for ( mm = 0; ; ++mm )
                                {
                                  v256 = *v254;
                                  v257 = v254 + 1;
                                  if ( mm >= 3 )
                                    break;
                                  if ( v257 < v254 )
                                    goto LABEL_7;
                                  v254 = (unsigned int *)((char *)v257 + v256);
                                  if ( (unsigned int *)((char *)v257 + v256) < v257 )
                                    goto LABEL_7;
                                }
                                if ( v257 < v254 )
                                  goto LABEL_7;
                                v258 = 0LL;
                                if ( (_DWORD)v256 )
                                  v258 = v257;
                                v631 = v258;
                                v259 = (unsigned int *)v610;
                                for ( nn = 0; ; ++nn )
                                {
                                  v261 = *v259;
                                  v262 = v259 + 1;
                                  if ( nn >= 4 )
                                    break;
                                  if ( v262 < v259 )
                                    goto LABEL_7;
                                  v259 = (unsigned int *)((char *)v262 + v261);
                                  if ( (unsigned int *)((char *)v262 + v261) < v262 )
                                    goto LABEL_7;
                                }
                                if ( v262 < v259 )
                                  goto LABEL_7;
                                v263 = 0LL;
                                if ( (_DWORD)v261 )
                                  v263 = v262;
                                if ( (_DWORD)v261 == 4 )
                                {
                                  v264 = *v263;
                                  v265 = v610;
                                  for ( i1 = 0; ; ++i1 )
                                  {
                                    v267 = v265 + 1;
                                    if ( i1 >= 5 )
                                      break;
                                    if ( v267 < v265 )
                                      goto LABEL_7;
                                    v265 = (_DWORD *)((char *)v267 + (unsigned int)*v265);
                                    if ( v265 < v267 )
                                      goto LABEL_7;
                                  }
                                  if ( v267 < v265 )
                                    goto LABEL_7;
                                  v107 = 0LL;
                                  if ( *v265 )
                                    v107 = v265 + 1;
                                  v9 = 0;
                                  if ( *v265 == 4 )
                                  {
                                    if ( (LPVOID)v642 == lpMeml )
                                    {
                                      v638 = *v107;
                                      v636 = v615;
                                      if ( v264 <= 4 && (unsigned int)v256 <= 4 )
                                      {
                                        memcpy_0(v3, v631, v256);
LABEL_135:
                                        if ( v634 )
                                          v9 = v634;
                                        goto LABEL_8;
                                      }
                                      v9 = -2147024774;
                                    }
                                    else
                                    {
                                      v9 = -1073425151;
                                    }
LABEL_139:
                                    v610 = v242;
                                    goto LABEL_8;
                                  }
                                }
                              }
                            }
                            goto LABEL_235;
                          }
                        }
                        v9 = -1073425151;
                        goto LABEL_8;
                      }
LABEL_292:
                      v227 = GetProcessHeap();
                      HeapFree(v227, 0, v569);
                      goto LABEL_293;
                    }
                    v285 = (unsigned int *)cchMax[1];
                    v286 = 0;
                    v569 = v622;
                    v625 = (wchar_t *)psza;
                    psza = (STRSAFE_PCNZWCH)v6;
                    while ( 1 )
                    {
                      v287 = *v285;
                      v288 = v285 + 1;
                      if ( v286 )
                        break;
                      if ( v288 < v285 )
                        goto LABEL_236;
                      v285 = (unsigned int *)((char *)v288 + v287);
                      if ( (unsigned int *)((char *)v288 + v287) < v288 )
                        goto LABEL_236;
                      v286 = 1;
                    }
                    if ( v288 < v285 )
                      goto LABEL_236;
                    if ( LODWORD(cchMax[0]) <= 2 )
                    {
                      v9 = -1073741811;
                      goto LABEL_237;
                    }
                    v289 = (unsigned int *)cchMax[1];
                    for ( i2 = 0; ; ++i2 )
                    {
                      v291 = *v289;
                      v292 = v289 + 1;
                      if ( i2 >= 2 )
                        break;
                      if ( v292 < v289 )
                        goto LABEL_236;
                      v289 = (unsigned int *)((char *)v292 + v291);
                      if ( (unsigned int *)((char *)v292 + v291) < v292 )
                        goto LABEL_236;
                    }
                    if ( v292 < v289
                      || v278 >= 0xFFFFFFFC
                      || (v293 = v278 + 8, v278 + 8 < v278 + 4)
                      || (v294 = v293 + v287, v293 + (unsigned int)v287 < v293)
                      || (v295 = v294 + 4, v294 + 4 < v294)
                      || (v296 = v295 + v291, v608 = v295 + v291, v295 + (unsigned int)v291 < v295) )
                    {
LABEL_236:
                      v9 = -1073741675;
                      goto LABEL_237;
                    }
                    if ( v296 > 0x400000 )
                    {
                      v9 = -2147418113;
                      goto LABEL_237;
                    }
                  }
                  v297 = v296;
                  v298 = GetProcessHeap();
                  v299 = HeapAlloc(v298, 8u, v297);
                  v611 = v299;
                  if ( !v299 )
                  {
                    v611 = 0LL;
                    v9 = -805306345;
                    goto LABEL_237;
                  }
                  phModule = 0LL;
                  v646 = 0LL;
                  v647 = 0LL;
                  if ( !v614 )
                  {
                    v9 = -2147024809;
                    goto LABEL_237;
                  }
                  LODWORD(v647) = dwBytes;
                  *(_QWORD *)&v646 = v614;
                  *(_QWORD *)((char *)&v647 + 4) = v608;
                  *((_QWORD *)&v646 + 1) = v299;
                  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                    && (ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                  {
                    v301 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, _QWORD))ProcAddress)(
                             134LL,
                             &v646,
                             32LL,
                             0LL);
                    v9 = v301 | 0x10000000;
                    if ( v301 >= 0 )
                    {
                      v302 = DWORD1(v647);
LABEL_408:
                      v626 = 0LL;
                      if ( v302 < 4 )
                        goto LABEL_758;
                      v303 = *(unsigned int *)v611;
                      v304 = (char *)v611 + 4;
                      v615 = *(_DWORD *)v611;
                      v622 = (char *)v611 + 4;
                      if ( (char *)v611 + 4 < v611 )
                      {
LABEL_410:
                        v9 = -805306219;
                        goto LABEL_237;
                      }
                      if ( v302 - 4 < (unsigned int)v303 )
                        goto LABEL_758;
                      v305 = (unsigned int *)&v304[v303];
                      Size = v303;
                      v630 = (SIZE_T)&v304[v303];
                      if ( &v304[v303] < v304 || (unsigned int)v303 >= 0xFFFFFFFC )
                        goto LABEL_410;
                      if ( v302 - ((_DWORD)v303 + 4) < 4 )
                        goto LABEL_758;
                      v306 = *v305;
                      v307 = v305 + 1;
                      v608 = *v305;
                      if ( v305 + 1 < v305 )
                        goto LABEL_410;
                      v308 = v303 + 8;
                      if ( (int)v303 + 8 < (unsigned int)(v303 + 4) )
                        goto LABEL_410;
                      if ( v302 - v308 < (unsigned int)v306 )
                        goto LABEL_758;
                      v309 = (unsigned int *)((char *)v307 + v306);
                      v612 = v306;
                      if ( (unsigned int *)((char *)v307 + v306) < v307 )
                        goto LABEL_410;
                      v310 = v308 + v306;
                      if ( v308 + (unsigned int)v306 < v308 )
                        goto LABEL_410;
                      if ( v302 - v310 < 4 )
                        goto LABEL_758;
                      v311 = *v309;
                      LODWORD(dwBytes) = *v309;
                      v616 = (SIZE_T)(v309 + 1);
                      if ( v309 + 1 < v309 )
                        goto LABEL_410;
                      v312 = v310 + 4;
                      if ( v310 + 4 < v310 )
                        goto LABEL_410;
                      if ( v302 - v312 < v311 )
                        goto LABEL_758;
                      if ( v312 + v311 < v312 )
                        goto LABEL_410;
                      if ( v302 != v312 + v311 || (_DWORD)v306 + (_DWORD)v303 + v311 + 12LL != v302 )
                      {
LABEL_758:
                        v9 = -805306306;
                        goto LABEL_237;
                      }
                      v313 = GetProcessHeap();
                      v314 = HeapAlloc(v313, 8u, 0x30uLL);
                      v609 = v314;
                      if ( !v314 )
                      {
                        v609 = 0LL;
                        v9 = -805306345;
                        goto LABEL_237;
                      }
                      v316 = 0;
                      if ( v622 )
                      {
                        *v314 = v615;
                        v385 = GetProcessHeap();
                        v386 = HeapAlloc(v385, 8u, Size);
                        v321 = v609;
                        if ( !v386 )
                        {
LABEL_451:
                          v316 = -1073741801;
                          lpMemn = (void *)v321[1];
                          if ( lpMemn )
                          {
                            v322 = GetProcessHeap();
                            HeapFree(v322, 0, lpMemn);
                            v321 = v609;
                            *((_QWORD *)v609 + 1) = 0LL;
                          }
                          lpMemo = (void *)v321[3];
                          if ( lpMemo )
                          {
                            v323 = GetProcessHeap();
                            HeapFree(v323, 0, lpMemo);
                            v321 = v609;
                            *((_QWORD *)v609 + 3) = 0LL;
                          }
                          lpMemp = (void *)v321[5];
                          if ( lpMemp )
                          {
                            v324 = GetProcessHeap();
                            HeapFree(v324, 0, lpMemp);
                            *((_QWORD *)v609 + 5) = 0LL;
                          }
                          v325 = GetProcessHeap();
                          HeapFree(v325, 0, v609);
                          v314 = v626;
LABEL_458:
                          if ( v316 < 0 )
                          {
                            v609 = 0LL;
                            if ( v314 )
                            {
                              lpMemq = (void *)*((_QWORD *)v314 + 1);
                              if ( lpMemq )
                              {
                                v396 = GetProcessHeap();
                                HeapFree(v396, 0, lpMemq);
                                v314 = v626;
                                *((_QWORD *)v626 + 1) = 0LL;
                              }
                              lpMemr = (void *)*((_QWORD *)v314 + 3);
                              if ( lpMemr )
                              {
                                v397 = GetProcessHeap();
                                HeapFree(v397, 0, lpMemr);
                                v314 = v626;
                                *((_QWORD *)v626 + 3) = 0LL;
                              }
                              lpMems = (void *)*((_QWORD *)v314 + 5);
                              if ( lpMems )
                              {
                                v398 = GetProcessHeap();
                                HeapFree(v398, 0, lpMems);
                                *((_QWORD *)v626 + 5) = 0LL;
                              }
                              v399 = GetProcessHeap();
                              HeapFree(v399, 0, v626);
                              v609 = 0LL;
                            }
                          }
                          else
                          {
                            v609 = v314;
                          }
                          v9 = v316 | 0x10000000;
                          if ( v9 < 0 )
                            goto LABEL_237;
                          v326 = v609;
                          if ( !v609 || (v629 = *((_QWORD *)v609 + 1)) == 0 || !*(_DWORD *)v609 )
                          {
                            v9 = -805306355;
                            goto LABEL_237;
                          }
                          v622 = (void *)(*(unsigned int *)v609 - 8LL);
                          v619 = DefaultHeap::Alloc((unsigned __int64)v622);
                          v327 = v619;
                          if ( !v619 )
                            goto LABEL_483;
                          v328 = 0;
                          v626 = (LPVOID)((unsigned __int8)v622 & 7);
                          v329 = (char *)v619;
                          v612 = 0x7F1137FAB69605ELL;
                          Size = v629;
                          if ( ((unsigned __int8)v622 & 7) != 0 )
                          {
                            v330 = 56;
                            v331 = 0;
                            v332 = 0;
                            v333 = 0;
                            v334 = (unsigned __int8 *)Size;
                            do
                            {
                              LODWORD(v616) = *v334++;
                              if ( (unsigned int)v333 >= 4 )
                              {
                                LODWORD(v616) = (_DWORD)v616 << v330;
                                v332 |= v616;
                              }
                              else
                              {
                                LODWORD(v616) = (_DWORD)v616 << (v330 - 32);
                                v331 |= v616;
                              }
                              ++v333;
                              v330 -= 8;
                            }
                            while ( v333 < (int)v626 );
                            v327 = v619;
                            v328 = 0;
                            v335 = v331 ^ 0x92F65A5;
                            LODWORD(v616) = v332 ^ 0x699A899C;
                            v336 = v332 ^ 0x699A899C;
                            Size = (SIZE_T)v334;
                            v1 = v628;
                            LODWORD(dwBytes) = v332;
                            v3 = v635;
                            LODWORD(v630) = v331;
                            v337 = (int)v628;
                            v338 = (unsigned int)v626;
                            v339 = v619;
                            v608 = v331 ^ 0x92F65A5;
                            v609 = v326;
                            v625 = v4;
                            psza = (STRSAFE_PCNZWCH)v6;
                            do
                            {
                              v340 = v339 + 1;
                              if ( v337 >= 4 )
                              {
                                v336 = __ROR4__(v336, 24);
                                v341 = v336;
                              }
                              else
                              {
                                v335 = __ROR4__(v335, 24);
                                v341 = v335;
                              }
                              ++v337;
                              *v339++ = v341;
                            }
                            while ( v337 < (int)v338 );
                            v329 = v340;
                            if ( v338 > 4 )
                            {
                              v342 = (unsigned int)v616 >> (8 * (8 - v338)) << (8 * (8 - v338));
                            }
                            else
                            {
                              v342 = 0;
                              if ( v338 < 4 )
                              {
                                v343 = v608 >> (8 * (4 - v338)) << (8 * (4 - v338));
                                goto LABEL_478;
                              }
                            }
                            v343 = v608;
                          }
                          else
                          {
                            LODWORD(dwBytes) = -1;
                            v342 = 0;
                            LODWORD(v630) = 0;
                            v343 = 0;
                          }
LABEL_478:
                          v344 = v622;
                          if ( (unsigned __int64)v622 >> 3 )
                          {
                            v348 = HIDWORD(v612);
                            v349 = v630;
                            v350 = HIDWORD(v612) ^ 0xAB69605E;
                            v351 = dwBytes;
                            v352 = (unsigned __int8 *)(Size + 2);
                            v353 = (unsigned __int64)v622 >> 3;
                            v354 = WORD2(v612);
                            v626 = v329 + 7;
                            v355 = WORD1(v612);
                            v608 = WORD2(v612);
                            LODWORD(v616) = 24670;
                            do
                            {
                              v356 = v352[1] | ((*v352 | ((*(v352 - 1) | (*(v352 - 2) << 8)) << 8)) << 8);
                              v357 = v352[5] | ((v352[4] | ((v352[3] | (v352[2] << 8)) << 8)) << 8);
                              lpMembi = v352 + 8;
                              v358 = v343 ^ v356;
                              v359 = v342 ^ v350 ^ v357 ^ v343 ^ v356;
                              v360 = v358 ^ (__ROR4__(v359, 22) + v354 * __ROR4__(v359 + 1419157410, 27));
                              v361 = v359 ^ (v355 * __ROR4__(v360 + v348, 9) - __ROR4__(v360, 30));
                              v362 = v360 ^ (v616 * (v361 - v354) - (v361 >> 13));
                              v363 = v361 ^ (HIWORD(v612) * __ROR4__(v362 ^ v355, 26) - __ROR4__(v362, 30));
                              v364 = v362 ^ (v348 - (v363 ^ 0xAB69605E));
                              v365 = v363 ^ (v355 * (v354 ^ v364)) ^ __ROR4__(v364, 6);
                              v366 = v364 ^ (__ROR4__(v365, 30) + v616 * __ROR4__(v365 + v348, 15));
                              v367 = v365 ^ (HIWORD(v612) * __ROR4__(v366 + 1419157410, 14) - __ROR4__(v366, 24));
                              v368 = v366 ^ __ROR4__(v367, 10) ^ (v608 * __ROR4__(v367 ^ 0xAB69605E, 12));
                              v369 = v368 ^ (HIWORD(v612)
                                           * (v616
                                            + __ROR4__(
                                                ~(v367 ^ (v368 >> 10) ^ (WORD1(v612) * (v368 ^ HIWORD(v612)))),
                                                5)));
                              v370 = v367 ^ (v368 >> 10) ^ (WORD1(v612) * (v368 ^ HIWORD(v612))) ^ (v369 - HIWORD(v612)) ^ 0xAB69605E;
                              v371 = v369 ^ ((v370 >> 2) + v608 * __ROR4__(v370 ^ HIWORD(v612), 30));
                              v372 = v370 ^ (__ROR4__(v371, 25) + WORD1(v612) * __ROR4__(v371 - v348, 6));
                              v373 = v371 ^ (v616 * (v608 ^ v372) + __ROR4__(v372, 9));
                              v374 = v372 ^ (__ROR4__(v373, 25) + HIWORD(v612) * __ROR4__(WORD1(v612) ^ v373, 27));
                              v354 = v608;
                              v375 = v348 ^ v373 ^ v374 ^ 0xAB69605E;
                              v376 = v374 ^ (v608 * (__ROR4__(v375, 3) - WORD1(v612)));
                              v377 = v375 ^ (v616 * __ROR4__(v376 - v348, 1) - __ROR4__(v376, 6));
                              v378 = v376 ^ (__ROR4__(v377, 18) + HIWORD(v612) * __ROR4__(v377 - 1419157410, 29));
                              v379 = v377 ^ (v608 * __ROR4__(v378 - 1419157410, 17) - __ROR4__(v378, 14));
                              v355 = WORD1(v612);
                              v380 = v378 ^ (v379 >> 3) ^ (WORD1(v612) * (v616 ^ v379));
                              v381 = __ROR4__(v380, 30);
                              v382 = v348 ^ v380;
                              v342 = v351 ^ v380;
                              v351 = v357;
                              v383 = v379 ^ v381 ^ (v616 * __ROR4__(v382, 28));
                              v384 = v626;
                              v343 = v349 ^ v383;
                              v349 = v356;
                              *((char *)v626 - 4) = v343;
                              *v384 = v342;
                              *(v384 - 5) = __ROR4__(v343, 8);
                              *(v384 - 1) = __ROR4__(v342, 8);
                              *(v384 - 6) = __ROR4__(v343, 16);
                              *(v384 - 2) = __ROR4__(v342, 16);
                              *(v384 - 7) = __ROR4__(v343, 24);
                              *(v384 - 3) = __ROR4__(v342, 24);
                              v626 = v384 + 8;
                              v352 = lpMembi;
                              --v353;
                            }
                            while ( v353 );
                            v328 = 0;
                            v1 = v628;
                            v3 = v635;
                            v4 = v625;
                            v326 = v609;
                            v327 = v619;
                            v344 = v622;
                          }
                          v345 = 0LL;
                          if ( v344 )
                          {
                            do
                              v328 ^= *((_BYTE *)v327 + v345++);
                            while ( v345 < (unsigned __int64)v344 );
                          }
                          v346 = v614;
                          v347 = v611;
                          v6 = psza;
                          v628 = v613;
                          Size = (SIZE_T)v569;
                          v609 = v326;
                          if ( v328 != *(_QWORD *)((char *)v622 + v629) )
                          {
                            MemoryFree(v327);
LABEL_483:
                            v9 = -805306367;
                            v619 = 0LL;
                            goto LABEL_237;
                          }
                          v551 = v628;
                          v552 = v326;
                          v613 = v628;
                          v569 = (_DWORD *)Size;
                          v609 = v326;
                          if ( (unsigned int)v622 < 4 )
                          {
                            v540 = -1073741762;
                            v619 = v327;
                            v609 = v552;
                            v181 = Size;
                            v613 = v628;
                            v569 = (_DWORD *)Size;
                            goto LABEL_670;
                          }
                          v615 = *v327;
                          v628 = v327 + 1;
                          if ( v327 + 1 < v327 )
                            goto LABEL_726;
                          if ( (unsigned int)((_DWORD)v622 - 4) >= 4 )
                          {
                            LODWORD(v616) = v327[1];
                            if ( v327 + 2 < v628 )
                              goto LABEL_726;
                            if ( (int)v622 - 8 >= (unsigned int)v616 )
                            {
                              if ( (unsigned int)v616 < 0xFFFFFFF8 )
                              {
                                v612 = (SIZE_T)v327 + (unsigned int)v616 + 8;
                                if ( (unsigned __int64)v327 + (unsigned int)v622 >= v612
                                  && (unsigned __int64)(unsigned int)v622
                                   + (char *)v327
                                   - (unsigned int)v616
                                   - ((_BYTE *)v628
                                    + 4) < 8 )
                                {
                                  v542 = 0LL;
                                  v540 = 0;
                                  Size = 0LL;
                                  v608 = 0;
                                  if ( v628 != (void *)-4LL )
                                  {
                                    v541 = (char *)v628 + 4;
                                    v629 = (SIZE_T)v628 + 4;
                                    v181 = (SIZE_T)v569;
                                    v619 = v327;
                                    v609 = v552;
                                    v613 = v551;
                                    if ( v612 < (unsigned __int64)v628 + 4 )
                                    {
LABEL_669:
                                      v540 = -1073741675;
                                    }
                                    else
                                    {
                                      while ( (unsigned __int64)v541 < v612 )
                                      {
                                        if ( v541 + 1 < v541 )
                                          goto LABEL_669;
                                        if ( (unsigned __int64)(v541 + 1) > v612 )
                                          goto LABEL_691;
                                        v539 = (unsigned int)(*v541 + 4);
                                        if ( (unsigned int)v539 < 4 )
                                          goto LABEL_669;
                                        v541 = (_DWORD *)(v629 + v539);
                                        if ( (unsigned __int64)v541 < v629 )
                                          goto LABEL_669;
                                        v540 = 0;
                                        v629 = (SIZE_T)v541;
                                        v619 = v327;
                                        v609 = v552;
                                        v611 = v347;
                                        v614 = v346;
                                        v613 = v551;
                                        v569 = (_DWORD *)v181;
                                        if ( (unsigned __int64)v541 > v612 )
                                          goto LABEL_691;
                                        ++v608;
                                      }
                                      if ( v541 == (_DWORD *)v612 )
                                      {
                                        v542 = (void *)Size;
                                        goto LABEL_683;
                                      }
LABEL_691:
                                      v540 = -1073741811;
                                    }
                                    goto LABEL_670;
                                  }
                                  v181 = (SIZE_T)v569;
LABEL_683:
                                  v629 = v181;
                                  v631 = v551;
                                  lpMembd = v346;
                                  v622 = v347;
                                  v625 = (wchar_t *)v552;
                                  psza = (STRSAFE_PCNZWCH)v327;
                                  if ( !(_DWORD)v616 )
                                    goto LABEL_686;
                                  v543 = GetProcessHeap();
                                  v542 = HeapAlloc(v543, 8u, (unsigned int)v616);
                                  Size = (SIZE_T)v542;
                                  if ( v542 )
                                  {
                                    v540 = 0;
LABEL_686:
                                    if ( v628 != (void *)-4LL )
                                    {
                                      memcpy_0(v542, (char *)v628 + 4, (unsigned int)v616);
                                      v542 = (void *)Size;
                                    }
                                    v619 = (LPVOID)psza;
                                    v609 = v625;
                                    v611 = v622;
                                    v181 = v629;
                                    v610 = v542;
                                    v623 = v608;
                                    v614 = lpMembd;
                                    v613 = v631;
                                    v569 = (_DWORD *)v629;
                                    if ( v615 != v608 )
                                    {
                                      v610 = v542;
                                      v540 = -1073741762;
                                      v619 = (LPVOID)psza;
                                      v609 = v625;
                                      v611 = v622;
                                      v623 = v608;
                                      v614 = lpMembd;
                                      v613 = v631;
                                      v569 = (_DWORD *)v629;
                                    }
                                    goto LABEL_670;
                                  }
                                  v181 = (SIZE_T)v569;
                                  v540 = -1073741801;
                                  v610 = 0LL;
                                  v623 = 0;
LABEL_670:
                                  v9 = v540 | 0x10000000;
                                  goto LABEL_291;
                                }
                                goto LABEL_761;
                              }
LABEL_726:
                              v540 = -1073741675;
LABEL_727:
                              v181 = Size;
                              v619 = v327;
                              v609 = v552;
                              v613 = v551;
                              goto LABEL_670;
                            }
                          }
LABEL_761:
                          v540 = -1073741762;
                          goto LABEL_727;
                        }
                        *((_QWORD *)v609 + 1) = v386;
                        memcpy_0(v386, v622, Size);
                        v314 = v609;
                      }
                      else
                      {
                        *v314 = 0;
                        *((_QWORD *)v314 + 1) = 0LL;
                      }
                      if ( v630 == -4LL )
                      {
                        v314[4] = 0;
                        *((_QWORD *)v314 + 3) = 0LL;
                      }
                      else
                      {
                        v314[4] = v608;
                        v387 = GetProcessHeap();
                        v388 = HeapAlloc(v387, 8u, v612);
                        v321 = v609;
                        if ( !v388 )
                        {
LABEL_759:
                          v609 = v321;
                          goto LABEL_451;
                        }
                        *((_QWORD *)v609 + 3) = v388;
                        v316 = 0;
                        memcpy_0(v388, (const void *)(v630 + 4), v612);
                        v314 = v609;
                      }
                      if ( !v616 )
                      {
                        v314[8] = 0;
                        *((_QWORD *)v314 + 5) = 0LL;
                        goto LABEL_450;
                      }
                      v317 = (unsigned int)dwBytes;
                      v314[8] = dwBytes;
                      v318 = v317;
                      lpMemm = (LPVOID)v317;
                      v319 = GetProcessHeap();
                      v320 = HeapAlloc(v319, 8u, v318);
                      v321 = v609;
                      if ( v320 )
                      {
                        *((_QWORD *)v609 + 5) = v320;
                        v316 = 0;
                        memcpy_0(v320, (const void *)v616, (size_t)lpMemm);
                        v314 = v609;
LABEL_450:
                        v626 = v314;
                        goto LABEL_458;
                      }
                      goto LABEL_759;
                    }
                  }
                  else
                  {
                    LastError = GetLastError();
                    v9 = LastError;
                    if ( LastError > 0 )
                      v9 = (unsigned __int16)LastError | 0x80070000;
                    if ( v9 >= 0 )
                      v9 = -2147467259;
                  }
                  if ( v9 == -805306333 )
                  {
                    v9 = -2147024774;
                    goto LABEL_237;
                  }
                  if ( v9 < 0 )
                  {
LABEL_237:
                    v181 = (SIZE_T)v569;
                    goto LABEL_291;
                  }
                  v302 = v608;
                  goto LABEL_408;
                }
              }
            }
          }
        }
      }
      v275 = GetProcessHeap();
      HeapFree(v275, 0, v273);
      v9 = -805306219;
      v223 = v622;
      v4 = (wchar_t *)psza;
      v6 = v625;
      v569 = v622;
    }
LABEL_290:
    v181 = (SIZE_T)v223;
    goto LABEL_291;
  }
  if ( (unsigned int)v121 >= 0xFFFFFFFC )
    goto LABEL_7;
  v9 = RtlUIntAdd(HIDWORD(cchMax[0]), (unsigned int)(v121 + 4), (char *)cchMax + 4);
  if ( v9 >= 0 )
    goto LABEL_182;
LABEL_8:
  cchMax[0] = 0LL;
  lpMem = (void *)cchMax[1];
  if ( cchMax[1] )
  {
    v10 = GetProcessHeap();
    HeapFree(v10, 0, lpMem);
    cchMax[1] = 0LL;
  }
  if ( v610 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v610);
  }
  if ( v6 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v6);
  }
  if ( v4 )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, v4);
  }
  if ( v9 < 0 )
  {
    LocalFree(v3);
    switch ( v9 )
    {
      case -805306316:
        v632 = -1073418222;
        goto LABEL_35;
      case -805306139:
      case -1073425151:
        v632 = -1073418201;
        goto LABEL_35;
      case -805306306:
        v632 = -1073418200;
        goto LABEL_35;
    }
    goto LABEL_43;
  }
  if ( !v638 )
    goto LABEL_33;
  v14 = 0LL;
  LODWORD(dwBytes) = 0;
  v609 = 0LL;
  *(_OWORD *)Src = 0LL;
  v15 = GetProcessHeap();
  v16 = HeapAlloc(v15, 8u, 0xA0uLL);
  if ( !v16 )
  {
    v16 = 0LL;
LABEL_217:
    v22 = 0LL;
    goto LABEL_25;
  }
  *v16 = xmmword_180114AB0[0];
  v16[1] = xmmword_180114AB0[1];
  v16[2] = xmmword_180114AB0[2];
  v16[3] = xmmword_180114AB0[3];
  v16[4] = xmmword_180114AB0[4];
  v16[5] = xmmword_180114AB0[5];
  v16[6] = xmmword_180114AB0[6];
  v16[7] = xmmword_180114AB0[7];
  v16[8] = xmmword_180114AB0[8];
  v16[9] = xmmword_180114AB0[9];
  v17 = GetProcessHeap();
  v18 = HeapAlloc(v17, 8u, 8uLL);
  v14 = v18;
  if ( !v18 )
  {
    v14 = 0LL;
    goto LABEL_217;
  }
  *v18 = qword_1801149F0;
  v648 = __rdtsc();
  HIDWORD(Src[0]) = 196;
  v19 = GetProcessHeap();
  v20 = HeapAlloc(v19, 8u, 0xC4uLL);
  if ( !v20 )
    goto LABEL_24;
  Src[1] = v20;
  LODWORD(Src[0]) = 0;
  if ( v20 + 1 < v20 || v20 + 2 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
    goto LABEL_24;
  *v20 = 4;
  v20[1] = 4;
  v21 = ++LODWORD(Src[0]);
  if ( Src[1] )
  {
    v28 = Src[1];
    for ( i3 = 0; i3 < v21; ++i3 )
    {
      v90 = *v28 + 4;
      if ( *v28 >= 0xFFFFFFFC || (_DWORD *)((char *)v28 + v90) < v28 )
        goto LABEL_24;
      v28 = (_DWORD *)((char *)v28 + v90);
    }
    if ( v28 + 1 < v28 || v28 + 41 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_24;
    *v28 = 160;
    memcpy_0(v28 + 1, v16, 0xA0uLL);
  }
  else if ( (int)RtlUIntAdd(HIDWORD(Src[0]), 164LL, (char *)Src + 4) < 0 )
  {
    goto LABEL_24;
  }
  v30 = ++LODWORD(Src[0]);
  if ( !v14 )
  {
LABEL_24:
    v22 = v609;
    goto LABEL_25;
  }
  if ( Src[1] )
  {
    v31 = Src[1];
    for ( i4 = 0; i4 < v30; ++i4 )
    {
      v91 = *v31 + 4;
      if ( *v31 >= 0xFFFFFFFC || (_DWORD *)((char *)v31 + v91) < v31 )
        goto LABEL_24;
      v31 = (_DWORD *)((char *)v31 + v91);
    }
    if ( v31 + 1 < v31 || v31 + 3 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
      goto LABEL_24;
    *v31 = 8;
    memcpy_0(v31 + 1, v14, 8uLL);
  }
  else if ( (int)RtlUIntAdd(HIDWORD(Src[0]), 12LL, (char *)Src + 4) < 0 )
  {
    goto LABEL_24;
  }
  v33 = ++LODWORD(Src[0]);
  if ( !Src[1] )
  {
    if ( (int)RtlUIntAdd(HIDWORD(Src[0]), 12LL, (char *)Src + 4) >= 0 )
      goto LABEL_72;
    goto LABEL_24;
  }
  v34 = (char *)Src[1];
  for ( i5 = 0; i5 < v33; ++i5 )
  {
    v92 = *(_DWORD *)v34 + 4;
    if ( *(_DWORD *)v34 >= 0xFFFFFFFC || &v34[v92] < v34 )
      goto LABEL_24;
    v34 += v92;
  }
  if ( v34 + 4 < v34 || v34 + 12 > (char *)Src[1] + HIDWORD(Src[0]) )
    goto LABEL_24;
  v36 = v648;
  *(_DWORD *)v34 = 8;
  *(_QWORD *)(v34 + 4) = v36;
LABEL_72:
  ++LODWORD(Src[0]);
  LODWORD(v616) = 8;
  v608 = 0;
  if ( (int)RtlUIntAdd(4LL, 8LL, &v608) < 0 )
    goto LABEL_24;
  if ( (int)RtlUIntAdd(8LL, v608, &v616) < 0 )
    goto LABEL_24;
  v37 = 0LL;
  v610 = 0LL;
  v608 = 0;
  v613 = 0LL;
  v611 = 0LL;
  v619 = 0LL;
  v631 = (void *)__rdtsc();
  if ( HIDWORD(Src[0]) >= 0xFFFFFFF8 )
    goto LABEL_24;
  v38 = (void *)((HIDWORD(Src[0]) + 15) & 0xFFFFFFF8);
  v628 = v38;
  if ( (unsigned int)v38 >= HIDWORD(Src[0]) + 8 )
  {
    v39 = (HIDWORD(Src[0]) + 15) & 0xFFFFFFF8;
    lpMema = (unsigned int)v38;
    v40 = GetProcessHeap();
    v614 = HeapAlloc(v40, 8u, v39);
    v41 = (char *)v614;
    if ( !v614 )
    {
      v182 = -805306345;
      goto LABEL_265;
    }
    v42 = (char *)v614 + 4;
    *(_DWORD *)v614 = Src[0];
    if ( v41 + 4 < v41 || (*v42 = HIDWORD(Src[0]), v41 + 8 < v41 + 4) )
    {
      v206 = v614;
      v207 = GetProcessHeap();
      HeapFree(v207, 0, v206);
      v182 = -805306219;
      goto LABEL_265;
    }
    *(_QWORD *)&v41[lpMema - 8] = v631;
    memcpy_0(v42 + 1, Src[1], HIDWORD(Src[0]));
    if ( !(_DWORD)v628 || (v629 = (unsigned int)v628 + 8LL, Size = (SIZE_T)DefaultHeap::Alloc(v629), (v43 = Size) == 0) )
    {
      v183 = v614;
      v182 = -805306367;
      goto LABEL_241;
    }
    v44 = (unsigned int)v628;
    v45 = 0;
    v607 = 0;
    v46 = 0LL;
    v622 = v41;
    psza = 0LL;
    if ( (_DWORD)v628 )
    {
      v622 = v41;
      psza = 0LL;
      do
        v45 ^= v41[v46++];
      while ( v46 < (unsigned int)v628 );
      v607 = v45;
    }
    v612 = 0xC81ECB17B1B54A58uLL;
    if ( (unsigned __int64)(unsigned int)v628 >> 3 )
    {
      v47 = WORD2(v612);
      v48 = (unsigned __int64)(unsigned int)v628 >> 3;
      v49 = (_BYTE *)(Size + 7);
      v631 = v41 + 2;
      v50 = -1;
      v626 = v14;
      v51 = 0;
      v52 = HIWORD(v612);
      v625 = (wchar_t *)v16;
      v53 = (unsigned __int8 *)(v41 + 2);
      LODWORD(v630) = 0;
      v623 = 0;
      v622 = v41;
      do
      {
        v54 = *(v53 - 1) | (*(v53 - 2) << 8);
        v55 = v53[2] << 8;
        v56 = *v53;
        v53 += 8;
        v57 = *(v53 - 7) | ((v56 | (v54 << 8)) << 8);
        v58 = *(v53 - 3) | ((*(v53 - 4) | ((*(v53 - 5) | v55) << 8)) << 8);
        v59 = v58 ^ v50;
        v60 = v57 ^ v51 ^ (v59 - 19032);
        v61 = v60 ^ HIDWORD(v612);
        v62 = v59 ^ (__ROR4__(v60 ^ HIDWORD(v612), 7) + WORD1(v612) * __ROR4__(v60, 15));
        v63 = v61 ^ (v47 * __ROR4__(v62 - 1313519016, 9) - __ROR4__(v62, 10));
        v64 = v62 ^ (__ROR4__(v63, 27) + v52 * __ROR4__(v63 ^ v47, 28));
        v65 = v63 ^ (HIDWORD(v612) - (v64 ^ 0xB1B54A58));
        v66 = v65 ^ (19032 * (v47 ^ __ROR4__(v64 ^ (WORD1(v612) * (v65 - 19032) - (v65 >> 6)), 15)));
        v67 = v64 ^ (WORD1(v612) * (v65 - 19032) - (v65 >> 6)) ^ (v47 * (v52 + __ROR4__(~v66, 3)));
        v68 = v66 ^ (v67 - 19032 - HIDWORD(v612));
        v69 = v67 ^ (WORD1(v612) * (v68 ^ v52)) ^ __ROR4__(v68, 10);
        v70 = v68 ^ __ROR4__(v69, 3) ^ (v47 * __ROR4__(v69 ^ 0x4A58, 26));
        v71 = v69 ^ (19032 * (__ROR4__(v70, 15) - v52));
        v72 = v70 ^ (19032 * (v52 ^ v71)) ^ ((v71 ^ (v71 >> 14)) >> 1) ^ (19032
                                                                        * ((8 * (v71 - v47)) | ((v71 - v47) >> 29)));
        v73 = v71 ^ (WORD1(v612) * (v72 - v47) - (v72 >> 13));
        v74 = v72 ^ __ROR4__(v73, 11) ^ (v47 * __ROR4__(-1313519016 - v73, 9));
        v75 = v73 ^ (v74 - v52 + 1313519016);
        v76 = v74 ^ (19032 * (v75 ^ WORD1(v612)) - __ROR4__(v75, 7));
        v77 = v75 ^ (WORD1(v612) * __ROR4__(v52 ^ v76, 28) - __ROR4__(v76, 16));
        v78 = v76 ^ (__ROR4__(v77, 4) + v47 * __ROR4__(-1313519016 - v77, 10));
        v79 = v77 ^ __ROR4__(v78, 9) ^ (v52 * __ROR4__(v78 + 1313519016, 4));
        v80 = v78 ^ (19032 * __ROR4__(HIDWORD(v612) ^ v79, 24) - __ROR4__(v79, 30));
        v81 = v79 ^ (WORD1(v612) * __ROR4__(HIDWORD(v612) - v80, 11) - __ROR4__(v80, 12));
        v82 = v630;
        LODWORD(v630) = v57;
        v83 = v80 ^ (v81 >> 8) ^ (v47 * (WORD1(v612) ^ v81));
        v84 = v623;
        v85 = v83 ^ v82;
        v623 = v58;
        *(v49 - 4) = v85;
        v615 = v85;
        v50 = HIDWORD(v612) ^ v81 ^ v83 ^ v84 ^ 0xB1B54A58;
        v51 = v85;
        *v49 = v50;
        *(v49 - 5) = __ROR4__(v85, 8);
        v49 += 8;
        *(v49 - 9) = __ROR4__(v50, 8);
        *(v49 - 14) = __ROR4__(v85, 16);
        *(v49 - 10) = __ROR4__(v50, 16);
        *(v49 - 15) = __ROR4__(v85, 24);
        *(v49 - 11) = __ROR4__(v50, 24);
        --v48;
      }
      while ( v48 );
      v45 = v607;
      v3 = v635;
      v16 = v625;
      v14 = v626;
      v37 = 0LL;
      v44 = (unsigned int)v628;
      v43 = Size;
    }
    *(_QWORD *)(v43 + v44) = v45;
    v86 = GetProcessHeap();
    v87 = HeapAlloc(v86, 8u, 0x30uLL);
    if ( v87 )
    {
      v527 = v629;
      *(_DWORD *)v87 = v629;
      v528 = v527;
      v529 = GetProcessHeap();
      v530 = HeapAlloc(v529, 8u, v528);
      if ( !v530 )
        goto LABEL_513;
      v87[1] = v530;
      memcpy_0(v530, (const void *)Size, v528);
      *((_DWORD *)v87 + 4) = 160;
      v531 = GetProcessHeap();
      v532 = HeapAlloc(v531, 8u, 0xA0uLL);
      if ( !v532 )
        goto LABEL_513;
      v87[3] = v532;
      *v532 = xmmword_180114A00[0];
      v532[1] = xmmword_180114A00[1];
      v532[2] = xmmword_180114A00[2];
      v532[3] = xmmword_180114A00[3];
      v532[4] = xmmword_180114A00[4];
      v532[5] = xmmword_180114A00[5];
      v532[6] = xmmword_180114A00[6];
      v532[7] = xmmword_180114A00[7];
      v532[8] = xmmword_180114A00[8];
      v532[9] = xmmword_180114A00[9];
      *((_DWORD *)v87 + 8) = 8;
      v533 = GetProcessHeap();
      v534 = HeapAlloc(v533, 8u, 8uLL);
      if ( v534 )
      {
        v87[5] = v534;
        v89 = 0;
        *v534 = qword_180114AA0;
        v37 = (const void **)v87;
        v88 = 0LL;
      }
      else
      {
LABEL_513:
        v89 = -1073741801;
        lpMemt = (void *)v87[1];
        if ( lpMemt )
        {
          v400 = GetProcessHeap();
          HeapFree(v400, 0, lpMemt);
          v87[1] = 0LL;
        }
        lpMemu = (void *)v87[3];
        if ( lpMemu )
        {
          v401 = GetProcessHeap();
          HeapFree(v401, 0, lpMemu);
          v87[3] = 0LL;
        }
        lpMemv = (void *)v87[5];
        if ( lpMemv )
        {
          v402 = GetProcessHeap();
          HeapFree(v402, 0, lpMemv);
          v87[5] = 0LL;
        }
        v403 = GetProcessHeap();
        HeapFree(v403, 0, v87);
        v88 = (wchar_t *)psza;
      }
    }
    else
    {
      v88 = (wchar_t *)psza;
      v89 = -1073741801;
    }
    v625 = (wchar_t *)v16;
    psza = (STRSAFE_PCNZWCH)v14;
    v404 = GetProcessHeap();
    HeapFree(v404, 0, (LPVOID)Size);
    if ( v88 )
    {
      v560 = (void *)*((_QWORD *)v88 + 1);
      if ( v560 )
      {
        v561 = GetProcessHeap();
        HeapFree(v561, 0, v560);
        *((_QWORD *)v88 + 1) = 0LL;
      }
      v562 = (void *)*((_QWORD *)v88 + 3);
      if ( v562 )
      {
        v563 = GetProcessHeap();
        HeapFree(v563, 0, v562);
        *((_QWORD *)v88 + 3) = 0LL;
      }
      v564 = (void *)*((_QWORD *)v88 + 5);
      if ( v564 )
      {
        v565 = GetProcessHeap();
        HeapFree(v565, 0, v564);
        *((_QWORD *)v88 + 5) = 0LL;
      }
      v566 = GetProcessHeap();
      HeapFree(v566, 0, v88);
    }
    v182 = v89 | 0x10000000;
    v183 = v622;
    v14 = (void *)psza;
    v16 = v625;
    if ( v182 < 0 )
      goto LABEL_240;
    v405 = *((_DWORD *)v37 + 8);
    v406 = *((_DWORD *)v37 + 4);
    if ( *(_DWORD *)v37 >= 0xFFFFFFFC )
      goto LABEL_544;
    v407 = *(_DWORD *)v37 + 8;
    if ( v407 < *(_DWORD *)v37 + 4 )
      goto LABEL_544;
    v408 = v407 + v406;
    if ( v407 + v406 < v407 )
      goto LABEL_544;
    v409 = v408 + 4;
    if ( v408 + 4 < v408 )
      goto LABEL_544;
    v410 = v409 + v405;
    if ( v409 + v405 < v409 )
    {
      v16 = v625;
      goto LABEL_544;
    }
    v411 = GetProcessHeap();
    v412 = HeapAlloc(v411, 8u, v410);
    if ( !v412 )
    {
      v183 = v622;
      v182 = -805306345;
      v16 = v625;
      v610 = 0LL;
      goto LABEL_240;
    }
    v413 = v412 + 1;
    *v412 = *(_DWORD *)v37;
    if ( v412 + 1 < v412 )
      goto LABEL_529;
    memcpy_0(v412 + 1, v37[1], *(unsigned int *)v37);
    v418 = (_DWORD *)((char *)v413 + *(unsigned int *)v37);
    if ( v418 < v413
      || (v419 = v418 + 1, *v418 = *((_DWORD *)v37 + 4), v418 + 1 < v418)
      || (memcpy_0(v418 + 1, v37[3], *((unsigned int *)v37 + 4)),
          v420 = (_DWORD *)((char *)v419 + *((unsigned int *)v37 + 4)),
          v420 < v419)
      || (v421 = v420 + 1, *v420 = *((_DWORD *)v37 + 8), v420 + 1 < v420)
      || (memcpy_0(v420 + 1, v37[5], *((unsigned int *)v37 + 8)),
          (_DWORD *)((char *)v421 + *((unsigned int *)v37 + 8)) < v421) )
    {
LABEL_529:
      v414 = GetProcessHeap();
      HeapFree(v414, 0, v412);
      v182 = -805306219;
      v183 = v622;
      v16 = v625;
      goto LABEL_240;
    }
    v422 = v410;
    v610 = v412;
    v608 = v410;
    v415 = -1;
    v16 = v625;
    if ( (unsigned int)v616 < 0xFFFFFFF8 )
      v415 = v616 + 8;
    v182 = (unsigned int)v616 >= 0xFFFFFFF8 ? -805306219 : 0x10000000;
    if ( (unsigned int)(v616 + 8) < 8 )
    {
      v434 = 0;
      LODWORD(v630) = 0;
      v183 = v622;
      v608 = v422;
      v570 = v37;
      v614 = v622;
      v626 = v14;
      if ( v182 < 0 )
        goto LABEL_240;
LABEL_561:
      v435 = v434;
      v436 = GetProcessHeap();
      v613 = HeapAlloc(v436, 8u, v435);
      *((_QWORD *)&v437 + 1) = v613;
      if ( !v613 )
      {
        v613 = 0LL;
        v182 = -805306345;
        goto LABEL_240;
      }
      *(_QWORD *)&v437 = v610;
      hModule = 0LL;
      v644 = 0LL;
      v645 = 0LL;
      if ( !v610 )
      {
        v182 = -2147024809;
        goto LABEL_240;
      }
      v644 = v437;
      LODWORD(v645) = v608;
      *(_QWORD *)((char *)&v645 + 4) = (unsigned int)v630;
      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
        && (v438 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
      {
        v439 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, _QWORD))v438)(134LL, &v644, 32LL, 0LL);
        v182 = v439 | 0x10000000;
        if ( v439 >= 0 )
        {
          v440 = DWORD1(v645);
LABEL_567:
          v622 = 0LL;
          if ( v440 < 4 )
            goto LABEL_778;
          v441 = *(unsigned int *)v613;
          v442 = (char *)v613 + 4;
          v615 = *(_DWORD *)v613;
          v628 = (char *)v613 + 4;
          if ( (char *)v613 + 4 >= v613 )
          {
            if ( v440 - 4 < (unsigned int)v441 )
              goto LABEL_778;
            v443 = (unsigned int *)&v442[v441];
            v629 = v441;
            psza = (STRSAFE_PCNZWCH)&v442[v441];
            if ( &v442[v441] >= v442 && (unsigned int)v441 < 0xFFFFFFFC )
            {
              if ( v440 - ((_DWORD)v441 + 4) < 4 )
                goto LABEL_778;
              v444 = *v443;
              v445 = v443 + 1;
              v608 = *v443;
              if ( v443 + 1 >= v443 )
              {
                v446 = v441 + 8;
                if ( (int)v441 + 8 >= (unsigned int)(v441 + 4) )
                {
                  if ( v440 - v446 < (unsigned int)v444 )
                    goto LABEL_778;
                  v447 = (unsigned int *)((char *)v445 + v444);
                  Size = v444;
                  if ( (unsigned int *)((char *)v445 + v444) >= v445 )
                  {
                    v448 = v446 + v444;
                    if ( v446 + (unsigned int)v444 >= v446 )
                    {
                      if ( v440 - v448 < 4 )
                        goto LABEL_778;
                      v449 = *v447;
                      LODWORD(v630) = *v447;
                      v612 = (SIZE_T)(v447 + 1);
                      if ( v447 + 1 >= v447 )
                      {
                        v450 = v448 + 4;
                        if ( v448 + 4 >= v448 )
                        {
                          if ( v440 - v450 < v449 )
                            goto LABEL_778;
                          if ( v450 + v449 >= v450 )
                          {
                            if ( v440 == v450 + v449 && (_DWORD)v441 + (_DWORD)v444 + v449 + 12LL == v440 )
                            {
                              v451 = GetProcessHeap();
                              v452 = HeapAlloc(v451, 8u, 0x30uLL);
                              v611 = v452;
                              if ( !v452 )
                              {
                                v611 = 0LL;
                                v182 = -805306345;
                                goto LABEL_240;
                              }
                              v454 = 0;
                              if ( v628 )
                              {
                                *v452 = v615;
                                v523 = GetProcessHeap();
                                v524 = HeapAlloc(v523, 8u, v629);
                                v460 = v611;
                                if ( !v524 )
                                {
LABEL_609:
                                  v454 = -1073741801;
                                  lpMemx = (void *)v460[1];
                                  if ( lpMemx )
                                  {
                                    v462 = GetProcessHeap();
                                    HeapFree(v462, 0, lpMemx);
                                    v460 = v611;
                                    *((_QWORD *)v611 + 1) = 0LL;
                                  }
                                  lpMemy = (void *)v460[3];
                                  if ( lpMemy )
                                  {
                                    v463 = GetProcessHeap();
                                    HeapFree(v463, 0, lpMemy);
                                    v460 = v611;
                                    *((_QWORD *)v611 + 3) = 0LL;
                                  }
                                  lpMemz = (void *)v460[5];
                                  if ( lpMemz )
                                  {
                                    v464 = GetProcessHeap();
                                    HeapFree(v464, 0, lpMemz);
                                    *((_QWORD *)v611 + 5) = 0LL;
                                  }
                                  v465 = GetProcessHeap();
                                  HeapFree(v465, 0, v611);
                                  v461 = v622;
LABEL_616:
                                  if ( v454 < 0 )
                                  {
                                    v611 = 0LL;
                                    if ( v461 )
                                    {
                                      lpMemba = (void *)v461[1];
                                      if ( lpMemba )
                                      {
                                        v535 = GetProcessHeap();
                                        HeapFree(v535, 0, lpMemba);
                                        v461 = v622;
                                        *((_QWORD *)v622 + 1) = 0LL;
                                      }
                                      lpMembb = (void *)v461[3];
                                      if ( lpMembb )
                                      {
                                        v536 = GetProcessHeap();
                                        HeapFree(v536, 0, lpMembb);
                                        v461 = v622;
                                        *((_QWORD *)v622 + 3) = 0LL;
                                      }
                                      lpMembc = (void *)v461[5];
                                      if ( lpMembc )
                                      {
                                        v537 = GetProcessHeap();
                                        HeapFree(v537, 0, lpMembc);
                                        *((_QWORD *)v622 + 5) = 0LL;
                                      }
                                      v538 = GetProcessHeap();
                                      HeapFree(v538, 0, v622);
                                      v611 = 0LL;
                                    }
                                  }
                                  else
                                  {
                                    v611 = v461;
                                  }
                                  v182 = v454 | 0x10000000;
                                  if ( v182 >= 0 )
                                  {
                                    v466 = v611;
                                    if ( v611 )
                                    {
                                      v629 = *((_QWORD *)v611 + 1);
                                      if ( v629 )
                                      {
                                        if ( *(_DWORD *)v611 )
                                        {
                                          Size = *(unsigned int *)v611 - 8LL;
                                          v619 = DefaultHeap::Alloc(Size);
                                          v467 = v619;
                                          if ( !v619 )
                                          {
LABEL_641:
                                            v182 = -805306367;
                                            v619 = 0LL;
                                            goto LABEL_240;
                                          }
                                          v468 = 0;
                                          v469 = v619;
                                          v612 = 0x7F1137FAB69605ELL;
                                          v628 = (void *)v629;
                                          v470 = Size & 7;
                                          if ( (Size & 7) != 0 )
                                          {
                                            v623 = 0;
                                            v471 = 0;
                                            v472 = 0;
                                            v473 = (unsigned __int8 *)v628;
                                            do
                                            {
                                              v474 = *v473++;
                                              if ( v471 >= 4 )
                                              {
                                                v475 = v623;
                                                v472 |= v474 << v624;
                                              }
                                              else
                                              {
                                                v475 = (v474 << (v624 - 32)) | v623;
                                                v623 = v475;
                                              }
                                              v624 -= 8;
                                              ++v471;
                                            }
                                            while ( (int)v471 < (int)v470 );
                                            v467 = v619;
                                            v476 = v475 ^ 0x92F65A5;
                                            v615 = 0;
                                            v477 = v472;
                                            v633 = v472;
                                            v468 = 0;
                                            v478 = v477 ^ 0x699A899C;
                                            v628 = v473;
                                            v479 = v476;
                                            v3 = v635;
                                            v480 = 0;
                                            v469 = v619;
                                            v624 = v478;
                                            v611 = v466;
                                            v570 = v37;
                                            v626 = v14;
                                            v625 = (wchar_t *)v16;
                                            do
                                            {
                                              if ( v480 >= 4 )
                                              {
                                                v478 = __ROR4__(v478, 24);
                                                v481 = v478;
                                              }
                                              else
                                              {
                                                v479 = __ROR4__(v479, 24);
                                                v481 = v479;
                                              }
                                              *v469 = v481;
                                              ++v480;
                                              ++v469;
                                            }
                                            while ( v480 < (int)v470 );
                                            if ( v470 > 4 )
                                            {
                                              v482 = v624 >> (8 * (8 - v470)) << (8 * (8 - v470));
                                            }
                                            else
                                            {
                                              v482 = 0;
                                              if ( v470 < 4 )
                                                v476 = v476 >> (8 * (4 - v470)) << (8 * (4 - v470));
                                            }
                                          }
                                          else
                                          {
                                            v482 = 0;
                                            v623 = 0;
                                            v476 = 0;
                                          }
                                          v483 = Size;
                                          if ( Size >> 3 )
                                          {
                                            v487 = HIDWORD(v612);
                                            v488 = v469 + 7;
                                            v489 = v623;
                                            LODWORD(v616) = 24670;
                                            v490 = WORD2(v612);
                                            v615 = HIDWORD(v612) ^ 0xAB69605E;
                                            v491 = (unsigned __int8 *)v628 + 2;
                                            v492 = Size >> 3;
                                            v624 = WORD2(v612);
                                            do
                                            {
                                              v493 = *(v491 - 1) | (*(v491 - 2) << 8);
                                              v494 = v491[2] << 8;
                                              v495 = *v491;
                                              v491 += 8;
                                              v496 = *(v491 - 7) | ((v495 | (v493 << 8)) << 8);
                                              v497 = *(v491 - 3) | ((*(v491 - 4) | ((*(v491 - 5) | v494) << 8)) << 8);
                                              v498 = v487 ^ v482 ^ v476 ^ v496 ^ v497 ^ 0xAB69605E;
                                              v499 = v476 ^ v496 ^ (__ROR4__(v498, 22)
                                                                  + v490 * __ROR4__(v498 + 1419157410, 27));
                                              v500 = v498 ^ (WORD1(v612) * __ROR4__(v499 + v487, 9) - __ROR4__(v499, 30));
                                              v501 = v499 ^ (v616 * (v500 - v490) - (v500 >> 13));
                                              v502 = v500 ^ (HIWORD(v612) * __ROR4__(v501 ^ WORD1(v612), 26)
                                                           - __ROR4__(v501, 30));
                                              v503 = v501 ^ (v487 - (v502 ^ 0xAB69605E));
                                              v504 = v502 ^ (WORD1(v612) * (v503 ^ v490)) ^ __ROR4__(v503, 6);
                                              v505 = v503 ^ (__ROR4__(v504, 30) + v616 * __ROR4__(v504 + v487, 15));
                                              v506 = v504 ^ (HIWORD(v612) * __ROR4__(v505 + 1419157410, 14)
                                                           - __ROR4__(v505, 24));
                                              v507 = v505 ^ __ROR4__(v506, 10) ^ (v624 * __ROR4__(v506 ^ 0xAB69605E, 12));
                                              v508 = v506 ^ (v507 >> 10) ^ (WORD1(v612) * (v507 ^ HIWORD(v612)));
                                              v509 = v507 ^ (HIWORD(v612) * (v616 + __ROR4__(~v508, 5)));
                                              v510 = v508 ^ (v509 - HIWORD(v612)) ^ 0xAB69605E;
                                              v511 = v509 ^ ((v510 >> 2) + v624 * __ROR4__(HIWORD(v612) ^ v510, 30));
                                              v512 = v510 ^ (__ROR4__(v511, 25) + WORD1(v612) * __ROR4__(v511 - v487, 6));
                                              v513 = v511 ^ (v616 * (v512 ^ v624) + __ROR4__(v512, 9));
                                              v514 = v512 ^ (__ROR4__(v513, 25)
                                                           + HIWORD(v612) * __ROR4__(v513 ^ WORD1(v612), 27));
                                              v515 = v513 ^ v514 ^ v615;
                                              v516 = v514 ^ (v624 * (__ROR4__(v515, 3) - WORD1(v612)));
                                              v517 = v515 ^ (v616 * __ROR4__(v516 - v487, 1) - __ROR4__(v516, 6));
                                              v518 = v516 ^ (__ROR4__(v517, 18)
                                                           + HIWORD(v612) * __ROR4__(v517 - 1419157410, 29));
                                              v519 = v517 ^ (v624 * __ROR4__(v518 - 1419157410, 17) - __ROR4__(v518, 14));
                                              v490 = v624;
                                              v520 = v518 ^ (v519 >> 3) ^ (WORD1(v612) * (v616 ^ v519));
                                              v521 = v520 ^ v487;
                                              v482 = v633 ^ v520;
                                              v633 = v497;
                                              v522 = v489 ^ __ROR4__(
                                                              v518 ^ (v519 >> 3) ^ (WORD1(v612) * (v616 ^ v519)),
                                                              30) ^ (v616 * __ROR4__(v521, 28));
                                              v489 = v496;
                                              v476 = v519 ^ v522;
                                              *(v488 - 4) = v476;
                                              *v488 = v482;
                                              *(v488 - 5) = __ROR4__(v476, 8);
                                              v488 += 8;
                                              *(v488 - 9) = __ROR4__(v482, 8);
                                              *(v488 - 14) = __ROR4__(v476, 16);
                                              *(v488 - 10) = __ROR4__(v482, 16);
                                              *(v488 - 15) = __ROR4__(v476, 24);
                                              *(v488 - 11) = __ROR4__(v482, 24);
                                              --v492;
                                            }
                                            while ( v492 );
                                            v468 = 0;
                                            v3 = v635;
                                            v16 = v625;
                                            v14 = v626;
                                            v37 = v570;
                                            v466 = v611;
                                            v467 = v619;
                                            v483 = Size;
                                          }
                                          for ( i6 = 0LL; i6 < v483; ++i6 )
                                            v468 ^= *((_BYTE *)v467 + i6);
                                          v485 = v610;
                                          v486 = v613;
                                          v183 = v614;
                                          v611 = v466;
                                          if ( v468 != *(_QWORD *)(v483 + v629) )
                                          {
                                            MemoryFree(v467);
                                            goto LABEL_641;
                                          }
                                          v611 = v466;
                                          v553 = v466;
                                          if ( (unsigned int)v483 >= 4 )
                                          {
                                            v554 = v467 + 1;
                                            v608 = *v467;
                                            if ( v467 + 1 < v467 )
                                              goto LABEL_724;
                                            if ( (unsigned int)(v483 - 4) >= 4 )
                                            {
                                              v555 = *v554;
                                              v550 = (char *)(v467 + 2);
                                              v615 = *v554;
                                              lpMembe = (char *)(v467 + 2);
                                              if ( v467 + 2 < v467 + 1 )
                                                goto LABEL_724;
                                              if ( (int)v483 - 8 >= (unsigned int)v555 )
                                              {
                                                if ( (unsigned int)v555 < 0xFFFFFFF8 )
                                                {
                                                  v547 = (unsigned __int64)&v550[v555];
                                                  v629 = v555;
                                                  if ( (char *)v467 + (unsigned int)v483 >= &v550[v555]
                                                    && (unsigned int)v483 - v555 - 8 < 8 )
                                                  {
                                                    v544 = 0;
                                                    v631 = 0LL;
                                                    v624 = 0;
                                                    if ( v467 != (_DWORD *)-8LL )
                                                    {
                                                      v619 = v467;
                                                      v546 = v467 + 2;
                                                      v611 = v553;
                                                      if ( v547 < (unsigned __int64)v550 )
                                                      {
LABEL_694:
                                                        v544 = -1073741675;
                                                      }
                                                      else
                                                      {
                                                        while ( (unsigned __int64)v546 < v547 )
                                                        {
                                                          if ( v546 + 1 < v546 )
                                                            goto LABEL_694;
                                                          if ( (unsigned __int64)(v546 + 1) > v547 )
                                                            goto LABEL_715;
                                                          if ( *v546 >= 0xFFFFFFFC )
                                                            goto LABEL_694;
                                                          v545 = (_DWORD *)((char *)v546 + (unsigned int)(*v546 + 4));
                                                          if ( v545 < v546 )
                                                            goto LABEL_694;
                                                          v544 = 0;
                                                          v619 = v467;
                                                          v611 = v553;
                                                          v546 = v545;
                                                          v613 = v486;
                                                          v610 = v485;
                                                          if ( (unsigned __int64)v545 > v547 )
                                                            goto LABEL_715;
                                                          ++v624;
                                                        }
                                                        if ( v546 == (_DWORD *)v547 )
                                                          goto LABEL_707;
LABEL_715:
                                                        v544 = -1073741811;
                                                      }
                                                      goto LABEL_695;
                                                    }
LABEL_707:
                                                    v625 = (wchar_t *)v485;
                                                    psza = (STRSAFE_PCNZWCH)v486;
                                                    Size = (SIZE_T)v553;
                                                    v628 = v467;
                                                    if ( !v615 )
                                                    {
                                                      v549 = v631;
                                                      goto LABEL_710;
                                                    }
                                                    v548 = GetProcessHeap();
                                                    v549 = HeapAlloc(v548, 8u, v629);
                                                    if ( v549 )
                                                    {
                                                      v550 = lpMembe;
                                                      v544 = 0;
LABEL_710:
                                                      if ( v550 )
                                                        memcpy_0(v549, v550, v629);
                                                      v619 = v628;
                                                      v611 = (LPVOID)Size;
                                                      v613 = (LPVOID)psza;
                                                      v609 = v549;
                                                      LODWORD(dwBytes) = v624;
                                                      v610 = v625;
                                                      if ( v608 != v624 )
                                                      {
                                                        v544 = -1073741762;
                                                        v619 = v628;
                                                        v611 = (LPVOID)Size;
                                                        v613 = (LPVOID)psza;
                                                        v609 = v549;
                                                        LODWORD(dwBytes) = v624;
                                                        v610 = v625;
                                                      }
                                                      goto LABEL_695;
                                                    }
                                                    v609 = 0LL;
                                                    v544 = -1073741801;
                                                    LODWORD(dwBytes) = 0;
LABEL_695:
                                                    v182 = v544 | 0x10000000;
                                                    goto LABEL_240;
                                                  }
                                                  goto LABEL_743;
                                                }
LABEL_724:
                                                v544 = -1073741675;
LABEL_725:
                                                v619 = v467;
                                                v611 = v553;
                                                goto LABEL_695;
                                              }
                                            }
                                          }
LABEL_743:
                                          v544 = -1073741762;
                                          goto LABEL_725;
                                        }
                                      }
                                    }
                                    v182 = -805306355;
                                  }
LABEL_240:
                                  if ( !v183 )
                                  {
LABEL_242:
                                    if ( v37 )
                                    {
                                      v185 = (void *)v37[1];
                                      if ( v185 )
                                      {
                                        v186 = GetProcessHeap();
                                        HeapFree(v186, 0, v185);
                                        v37[1] = 0LL;
                                      }
                                      v187 = (void *)v37[3];
                                      if ( v187 )
                                      {
                                        v188 = GetProcessHeap();
                                        HeapFree(v188, 0, v187);
                                        v37[3] = 0LL;
                                      }
                                      v189 = (void *)v37[5];
                                      if ( v189 )
                                      {
                                        v190 = GetProcessHeap();
                                        HeapFree(v190, 0, v189);
                                        v37[5] = 0LL;
                                      }
                                      v191 = GetProcessHeap();
                                      HeapFree(v191, 0, v37);
                                    }
                                    v192 = v610;
                                    if ( v610 )
                                    {
                                      v193 = GetProcessHeap();
                                      HeapFree(v193, 0, v192);
                                    }
                                    v194 = v613;
                                    if ( v613 )
                                    {
                                      v195 = GetProcessHeap();
                                      HeapFree(v195, 0, v194);
                                    }
                                    v196 = v611;
                                    if ( v611 )
                                    {
                                      v197 = (void *)*((_QWORD *)v611 + 1);
                                      if ( v197 )
                                      {
                                        v198 = GetProcessHeap();
                                        HeapFree(v198, 0, v197);
                                        v196[1] = 0LL;
                                      }
                                      v199 = (void *)v196[3];
                                      if ( v199 )
                                      {
                                        v200 = GetProcessHeap();
                                        HeapFree(v200, 0, v199);
                                        v196[3] = 0LL;
                                      }
                                      v201 = (void *)v196[5];
                                      if ( v201 )
                                      {
                                        v202 = GetProcessHeap();
                                        HeapFree(v202, 0, v201);
                                        v196[5] = 0LL;
                                      }
                                      v203 = GetProcessHeap();
                                      HeapFree(v203, 0, v196);
                                    }
                                    v204 = v619;
                                    if ( v619 )
                                    {
                                      v205 = GetProcessHeap();
                                      HeapFree(v205, 0, v204);
                                    }
LABEL_265:
                                    v22 = v609;
                                    if ( v182 >= 0 )
                                    {
                                      v208 = 1;
                                      if ( (_DWORD)dwBytes )
                                      {
                                        if ( v609 )
                                        {
                                          v209 = *(_DWORD *)v609;
                                          if ( (char *)v609 + 4 >= v609 )
                                          {
                                            v210 = 0LL;
                                            v211 = v609;
                                            if ( v209 )
                                              v210 = (int *)((char *)v609 + 4);
                                            if ( v209 == 4 && *v210 >= 0 && (unsigned int)dwBytes > 1 )
                                            {
                                              psza = (STRSAFE_PCNZWCH)v609;
                                              for ( i7 = 0; i7 < v208; i7 = v208 + v214 )
                                              {
                                                if ( (int)RtlULongLongAdd(v211, 4LL, &psza) < 0
                                                  || (int)RtlULongLongAdd(psza, v213, &psza) < 0 )
                                                {
                                                  goto LABEL_25;
                                                }
                                                v211 = (void *)psza;
                                              }
                                              RtlULongLongAdd(v211, 4LL, &psza);
                                            }
                                          }
                                        }
                                      }
                                    }
                                    goto LABEL_25;
                                  }
LABEL_241:
                                  v184 = GetProcessHeap();
                                  HeapFree(v184, 0, v183);
                                  goto LABEL_242;
                                }
                                *((_QWORD *)v611 + 1) = v524;
                                memcpy_0(v524, v628, v629);
                                v452 = v611;
                              }
                              else
                              {
                                *v452 = 0;
                                *((_QWORD *)v452 + 1) = 0LL;
                              }
                              v455 = psza + 2;
                              if ( psza == (STRSAFE_PCNZWCH)-4LL )
                              {
                                v452[4] = (_DWORD)v455;
                                *((_QWORD *)v452 + 3) = v455;
                              }
                              else
                              {
                                v452[4] = v608;
                                v525 = GetProcessHeap();
                                v526 = HeapAlloc(v525, 8u, Size);
                                v460 = v611;
                                if ( !v526 )
                                {
LABEL_779:
                                  v611 = v460;
                                  goto LABEL_609;
                                }
                                *((_QWORD *)v611 + 3) = v526;
                                v454 = 0;
                                memcpy_0(v526, psza + 2, Size);
                                v452 = v611;
                                v455 = 0LL;
                              }
                              if ( (STRSAFE_PCNZWCH)v612 == v455 )
                              {
                                v452[8] = (_DWORD)v455;
                                *((_QWORD *)v452 + 5) = v455;
                                goto LABEL_608;
                              }
                              v456 = (unsigned int)v630;
                              v452[8] = v630;
                              v457 = v456;
                              lpMemw = (LPVOID)v456;
                              v458 = GetProcessHeap();
                              v459 = HeapAlloc(v458, 8u, v457);
                              v460 = v611;
                              if ( v459 )
                              {
                                *((_QWORD *)v611 + 5) = v459;
                                v454 = 0;
                                memcpy_0(v459, (const void *)v612, (size_t)lpMemw);
                                v452 = v611;
LABEL_608:
                                v461 = v452;
                                v622 = v452;
                                goto LABEL_616;
                              }
                              goto LABEL_779;
                            }
LABEL_778:
                            v182 = -805306306;
                            goto LABEL_240;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_544:
          v182 = -805306219;
          goto LABEL_240;
        }
      }
      else
      {
        v453 = GetLastError();
        v182 = v453;
        if ( v453 > 0 )
          v182 = (unsigned __int16)v453 | 0x80070000;
        if ( v182 >= 0 )
          v182 = -2147467259;
      }
      if ( v182 == -805306333 )
      {
        v182 = -2147024774;
        goto LABEL_240;
      }
      if ( v182 < 0 )
        goto LABEL_240;
      v440 = v630;
      goto LABEL_567;
    }
    v416 = (v415 + 7) & 0xFFFFFFF8;
    if ( v416 < v415 || (v417 = v416 + 8, v416 + 8 < v416) )
    {
      v182 = -1073741675;
LABEL_536:
      v183 = v622;
      goto LABEL_240;
    }
    v614 = v622;
    if ( !Src[1] )
    {
      v182 = -1073741811;
      goto LABEL_536;
    }
    if ( LODWORD(Src[0]) > 1 )
    {
      v423 = (unsigned int *)Src[1];
      v424 = 0;
      v570 = v37;
      v614 = v622;
      v626 = v14;
      while ( 1 )
      {
        v425 = *v423;
        v426 = v423 + 1;
        if ( v424 )
          break;
        if ( v426 < v423 )
          goto LABEL_238;
        v423 = (unsigned int *)((char *)v426 + v425);
        if ( (unsigned int *)((char *)v426 + v425) < v426 )
          goto LABEL_238;
        v424 = 1;
      }
      if ( v426 < v423 )
        goto LABEL_238;
      if ( LODWORD(Src[0]) > 2 )
      {
        v427 = (unsigned int *)Src[1];
        for ( i8 = 0; ; ++i8 )
        {
          v429 = *v427;
          v430 = v427 + 1;
          if ( i8 >= 2 )
            break;
          if ( v430 < v427 )
            goto LABEL_238;
          v427 = (unsigned int *)((char *)v430 + v429);
          if ( (unsigned int *)((char *)v430 + v429) < v430 )
            goto LABEL_238;
        }
        if ( v430 >= v427 && v417 < 0xFFFFFFFC )
        {
          v431 = v417 + 8;
          if ( v417 + 8 >= v417 + 4 )
          {
            v432 = v431 + v425;
            if ( v431 + (unsigned int)v425 >= v431 )
            {
              v433 = v432 + 4;
              if ( v432 + 4 >= v432 )
              {
                v434 = v433 + v429;
                LODWORD(v630) = v433 + v429;
                if ( v433 + (unsigned int)v429 >= v433 )
                {
                  if ( v434 <= 0x400000 )
                  {
                    v183 = v622;
                    goto LABEL_561;
                  }
                  v182 = -2147418113;
LABEL_239:
                  v183 = v614;
                  goto LABEL_240;
                }
              }
            }
          }
        }
LABEL_238:
        v182 = -1073741675;
        goto LABEL_239;
      }
    }
    v182 = -1073741811;
    goto LABEL_239;
  }
  v22 = 0LL;
LABEL_25:
  v23 = Src[1];
  Src[0] = 0LL;
  if ( Src[1] )
  {
    v24 = GetProcessHeap();
    HeapFree(v24, 0, v23);
    Src[1] = 0LL;
  }
  if ( v22 )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v22);
  }
  if ( v16 )
  {
    v567 = GetProcessHeap();
    HeapFree(v567, 0, v16);
  }
  if ( v14 )
  {
    v568 = GetProcessHeap();
    HeapFree(v568, 0, v14);
  }
LABEL_33:
  v1 = v3;
  if ( v636 == 4 )
  {
    v639 = *v3;
    goto LABEL_35;
  }
  v26 = -1073418210;
LABEL_39:
  LocalFree(v1);
  return v26 >= 0 && v639;
}
