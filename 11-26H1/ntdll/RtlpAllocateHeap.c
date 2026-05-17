/*
 * XREFs of RtlpAllocateHeap @ 0x18001E7C0
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800148A0 (RtlpGetExtraStuffPointer.c)
 *     RtlDebugAllocateHeap @ 0x180014940 (RtlDebugAllocateHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800214E0 (RtlpUpdateHeapWatermarks.c)
 *     RtlTryEnterCriticalSection @ 0x1800215A0 (RtlTryEnterCriticalSection.c)
 *     RtlpPerformHeapMaintenance @ 0x180021680 (RtlpPerformHeapMaintenance.c)
 *     RtlpUpdateTagEntry @ 0x180022CF8 (RtlpUpdateTagEntry.c)
 *     RtlpExtendHeap @ 0x180022EF0 (RtlpExtendHeap.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180025AF0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180026CC0 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFindEntry @ 0x180029F40 (RtlpFindEntry.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpGetLFHContext @ 0x180071FD4 (RtlpGetLFHContext.c)
 *     RtlpLogHeapCommit @ 0x1800721FC (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180072298 (RtlpLogHeapExtendEvent.c)
 *     RtlLogStackBackTraceEx @ 0x18007C250 (RtlLogStackBackTraceEx.c)
 *     RtlpHeapAddListEntry @ 0x18007E3B0 (RtlpHeapAddListEntry.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18007F11C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800CC620 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHeapLogRangeReserve @ 0x180114314 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163260 (RtlCompareMemoryUlong.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpAllocateHeap(
        _QWORD *Src,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD **a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r13
  int v8; // r14d
  unsigned __int64 v9; // rdi
  char v10; // r12
  unsigned __int64 v11; // r15
  int v12; // esi
  char v13; // si
  unsigned __int64 v14; // r13
  unsigned __int16 *v15; // rdi
  unsigned __int16 v16; // cx
  _QWORD *v17; // rdi
  __int64 *i; // r14
  unsigned __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // r13
  char *v22; // rsi
  char *v23; // r12
  char *v24; // rax
  int v25; // edi
  unsigned __int16 v26; // r15
  int v27; // eax
  char *v28; // r10
  int v29; // edi
  int v30; // edi
  __int64 v31; // rdi
  unsigned int *v32; // r9
  unsigned int v33; // edx
  int v34; // ecx
  __int64 v35; // rdi
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  __int64 v38; // r10
  __int64 *v39; // r11
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 *v42; // rdi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned int v45; // r12d
  __int64 v46; // r9
  char *v47; // rax
  char *v48; // r13
  char *v49; // rax
  int v50; // esi
  int v51; // esi
  _DWORD *v52; // rdx
  char v53; // r13
  int v54; // edi
  unsigned __int64 v55; // rdi
  __int64 v56; // rsi
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rcx
  bool v60; // dl
  __int64 v61; // rax
  _QWORD *v62; // r9
  unsigned __int64 v63; // rsi
  _QWORD *v64; // rcx
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // r15
  unsigned __int64 v67; // r13
  _QWORD *v68; // rax
  __int64 *v69; // rdi
  unsigned __int64 v70; // rcx
  int v71; // ecx
  _QWORD *v72; // r15
  _QWORD *v73; // r9
  _QWORD *v74; // rax
  int v75; // r12d
  unsigned __int16 v76; // r8
  int v77; // r12d
  __int64 v78; // r10
  int v79; // r12d
  unsigned __int16 v80; // r8
  int v81; // r12d
  __int64 v82; // r8
  unsigned int v83; // r9d
  unsigned int *v84; // r10
  unsigned int v85; // edx
  int v86; // ecx
  __int64 v87; // r8
  int v88; // eax
  unsigned __int16 v89; // cx
  _QWORD *v90; // r12
  __int64 *v91; // rax
  __int64 *v92; // rdi
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  int v95; // edx
  int v96; // r10d
  unsigned int v97; // r15d
  __int64 v98; // r13
  __int64 v99; // r9
  _DWORD *v100; // rdx
  _DWORD *v101; // r11
  unsigned __int16 v102; // cx
  __int64 v103; // rdi
  char v104; // si
  __int64 v105; // rdi
  __int64 v106; // r14
  char *k; // r13
  int v108; // edi
  int v109; // edi
  int v110; // r8d
  unsigned __int16 v111; // r11
  __int64 v112; // rcx
  _QWORD *n; // rdx
  int v114; // r12d
  unsigned __int16 v115; // r8
  int v116; // r12d
  _QWORD *v117; // r8
  __int64 v118; // r10
  __int64 *v119; // r11
  __int64 v120; // r9
  __int64 v121; // rax
  __int64 *v122; // rdi
  unsigned __int64 v123; // rdx
  unsigned __int64 v124; // rcx
  int v125; // r9d
  unsigned int v126; // r13d
  __int64 v127; // rax
  _QWORD *v128; // rax
  int v129; // r13d
  unsigned __int16 v130; // r9
  int v131; // r13d
  _DWORD *v132; // rdx
  char v133; // al
  unsigned __int64 v134; // r13
  unsigned __int64 v135; // r8
  unsigned __int64 v136; // r15
  _QWORD *v137; // rdi
  _QWORD *v138; // r8
  int v139; // eax
  unsigned __int16 v140; // cx
  _QWORD *v141; // r15
  __int64 *v142; // rax
  __int64 *v143; // rdx
  unsigned __int64 v144; // rdi
  unsigned __int64 v145; // rcx
  __int64 v146; // r10
  __int64 *v147; // r11
  __int64 v148; // r9
  __int64 v149; // rax
  __int64 *v150; // rsi
  unsigned __int64 v151; // rdx
  unsigned __int64 v152; // rcx
  __int64 v153; // r9
  __int64 v154; // rax
  __int64 v155; // r8
  __int64 v156; // rdi
  __int64 *v157; // rsi
  __int64 v158; // r9
  __int64 v159; // rax
  __int64 *v160; // rdx
  unsigned __int64 v161; // rcx
  unsigned __int64 v162; // r9
  struct _TEB *v163; // rdi
  int v164; // r13d
  unsigned int v165; // r12d
  __int64 v166; // rax
  __int64 v167; // r9
  _QWORD *v168; // rax
  __int64 v169; // rax
  int v170; // edi
  unsigned __int16 v171; // ax
  int v172; // edi
  _DWORD *v173; // rdx
  int v174; // r9d
  _DWORD *v175; // r8
  unsigned __int64 v176; // rdx
  _QWORD *v177; // rdi
  _QWORD *Entry; // r8
  _QWORD *v179; // r15
  __int64 *v180; // rax
  __int64 **v181; // rdx
  unsigned __int64 v182; // rdi
  unsigned __int64 v183; // rcx
  unsigned __int64 v184; // rcx
  struct _TEB *v185; // rdi
  _BYTE *v186; // rdi
  char *v187; // r10
  __int64 ExtraStuffPointer; // rsi
  int v189; // eax
  unsigned __int16 v190; // cx
  __int64 v191; // r9
  __int64 v192; // r9
  _DWORD *v193; // r8
  unsigned __int64 v194; // rdx
  _QWORD *v195; // rdi
  _QWORD *v196; // r8
  _QWORD *v197; // rdi
  __int64 *v198; // rax
  __int64 *v199; // rdx
  unsigned __int64 v200; // rcx
  unsigned __int64 v201; // r8
  int v202; // eax
  unsigned __int16 v203; // cx
  bool v204; // zf
  __int64 v205; // rdx
  __int64 v206; // rcx
  unsigned __int16 LFHContext; // ax
  unsigned int v208; // ecx
  unsigned int v209; // eax
  unsigned __int64 v210; // r13
  unsigned __int64 v211; // rax
  signed __int64 v212; // rcx
  unsigned __int64 v213; // rtt
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // r9
  unsigned __int64 v217; // rsi
  __int64 v218; // rdx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rdi
  __int64 v222; // rcx
  __int64 v223; // rdx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // rdi
  __int64 v230; // rcx
  __int64 *v231; // rax
  struct _TEB *v232; // rdi
  _DWORD *SharedData; // rcx
  __int64 v234; // rcx
  __int64 v236; // r13
  unsigned __int64 v237; // r15
  char v238; // [rsp+30h] [rbp-488h]
  char v239; // [rsp+34h] [rbp-484h]
  bool v240; // [rsp+34h] [rbp-484h]
  unsigned int v241; // [rsp+34h] [rbp-484h]
  __int64 v242; // [rsp+40h] [rbp-478h]
  int v243; // [rsp+58h] [rbp-460h]
  unsigned __int64 v244; // [rsp+60h] [rbp-458h]
  int m; // [rsp+60h] [rbp-458h]
  _QWORD *v246; // [rsp+60h] [rbp-458h]
  int v247; // [rsp+90h] [rbp-428h]
  _QWORD *v248; // [rsp+A8h] [rbp-410h]
  unsigned int v249; // [rsp+B0h] [rbp-408h]
  __int64 v250; // [rsp+B8h] [rbp-400h]
  __int64 *v251; // [rsp+B8h] [rbp-400h]
  _QWORD *v252; // [rsp+C0h] [rbp-3F8h]
  __int64 v253; // [rsp+C0h] [rbp-3F8h]
  int v254; // [rsp+C8h] [rbp-3F0h]
  unsigned __int64 v255; // [rsp+C8h] [rbp-3F0h]
  __int64 *v256; // [rsp+D0h] [rbp-3E8h]
  unsigned __int64 *v257; // [rsp+D8h] [rbp-3E0h]
  unsigned int v258; // [rsp+E0h] [rbp-3D8h]
  __int64 v259; // [rsp+E8h] [rbp-3D0h]
  char **v260; // [rsp+F0h] [rbp-3C8h]
  int j; // [rsp+F8h] [rbp-3C0h]
  __int64 v262; // [rsp+100h] [rbp-3B8h]
  __int64 v263; // [rsp+108h] [rbp-3B0h]
  __int64 v264; // [rsp+138h] [rbp-380h]
  int v265; // [rsp+140h] [rbp-378h]
  __int64 v266; // [rsp+140h] [rbp-378h]
  int v267; // [rsp+150h] [rbp-368h]
  _QWORD *v268; // [rsp+158h] [rbp-360h]
  int v269; // [rsp+160h] [rbp-358h]
  __int64 *v270; // [rsp+160h] [rbp-358h]
  __int64 v271; // [rsp+188h] [rbp-330h] BYREF
  unsigned int *v272; // [rsp+190h] [rbp-328h]
  unsigned __int64 v273; // [rsp+198h] [rbp-320h]
  unsigned int *v274; // [rsp+1A0h] [rbp-318h]
  char *v275; // [rsp+1A8h] [rbp-310h]
  unsigned __int64 v276; // [rsp+1B0h] [rbp-308h]
  char *v277; // [rsp+1B8h] [rbp-300h]
  unsigned __int64 v278; // [rsp+1C0h] [rbp-2F8h]
  int v279; // [rsp+1C8h] [rbp-2F0h]
  int v280; // [rsp+1CCh] [rbp-2ECh]
  int v281; // [rsp+1D0h] [rbp-2E8h]
  int v282; // [rsp+1D4h] [rbp-2E4h]
  int v283; // [rsp+1D8h] [rbp-2E0h]
  int v284; // [rsp+1DCh] [rbp-2DCh]
  int v285; // [rsp+1E0h] [rbp-2D8h]
  int v286; // [rsp+1E4h] [rbp-2D4h]
  int v287; // [rsp+1E8h] [rbp-2D0h]
  int v288; // [rsp+1ECh] [rbp-2CCh]
  int v289; // [rsp+1F0h] [rbp-2C8h]
  int v290; // [rsp+1F4h] [rbp-2C4h]
  int v291; // [rsp+1F8h] [rbp-2C0h]
  int v292; // [rsp+1FCh] [rbp-2BCh]
  unsigned int NtGlobalFlag; // [rsp+200h] [rbp-2B8h]
  unsigned int v294; // [rsp+204h] [rbp-2B4h]
  int v295; // [rsp+208h] [rbp-2B0h]
  int v296; // [rsp+20Ch] [rbp-2ACh]
  int v297; // [rsp+210h] [rbp-2A8h]
  int v299; // [rsp+218h] [rbp-2A0h]
  int v300; // [rsp+21Ch] [rbp-29Ch]
  int v301; // [rsp+220h] [rbp-298h]
  int v302; // [rsp+224h] [rbp-294h]
  int v303; // [rsp+228h] [rbp-290h]
  int v304; // [rsp+22Ch] [rbp-28Ch]
  int v305; // [rsp+230h] [rbp-288h]
  int v306; // [rsp+234h] [rbp-284h]
  int v307; // [rsp+238h] [rbp-280h]
  int v308; // [rsp+23Ch] [rbp-27Ch]
  int v309; // [rsp+240h] [rbp-278h]
  int v310; // [rsp+244h] [rbp-274h]
  int v311; // [rsp+248h] [rbp-270h]
  int v312; // [rsp+24Ch] [rbp-26Ch]
  int v313; // [rsp+250h] [rbp-268h]
  BOOL v314; // [rsp+254h] [rbp-264h]
  int v315; // [rsp+258h] [rbp-260h]
  int v316; // [rsp+25Ch] [rbp-25Ch]
  int v317; // [rsp+260h] [rbp-258h]
  int v318; // [rsp+264h] [rbp-254h]
  int v319; // [rsp+268h] [rbp-250h]
  int v320; // [rsp+26Ch] [rbp-24Ch]
  unsigned __int16 *v321; // [rsp+270h] [rbp-248h]
  int v322; // [rsp+278h] [rbp-240h]
  __int64 *v323; // [rsp+280h] [rbp-238h]
  char *v324; // [rsp+288h] [rbp-230h]
  __int64 *v325; // [rsp+290h] [rbp-228h]
  int v326; // [rsp+298h] [rbp-220h]
  __int64 *v327; // [rsp+2A0h] [rbp-218h]
  __int64 v328; // [rsp+2A8h] [rbp-210h]
  unsigned __int64 v329; // [rsp+2B0h] [rbp-208h]
  _QWORD *v330; // [rsp+2B8h] [rbp-200h]
  int v331; // [rsp+2C0h] [rbp-1F8h]
  int v332; // [rsp+2C4h] [rbp-1F4h]
  int v333; // [rsp+2C8h] [rbp-1F0h]
  int v334; // [rsp+2CCh] [rbp-1ECh]
  unsigned __int64 v335; // [rsp+2D0h] [rbp-1E8h]
  int v336; // [rsp+2D8h] [rbp-1E0h]
  __int64 *v337; // [rsp+2E0h] [rbp-1D8h]
  unsigned __int64 v338; // [rsp+2E8h] [rbp-1D0h]
  __int64 *v339; // [rsp+2F0h] [rbp-1C8h]
  unsigned __int64 v340; // [rsp+2F8h] [rbp-1C0h]
  __int64 *v341; // [rsp+300h] [rbp-1B8h]
  __int64 v342; // [rsp+308h] [rbp-1B0h]
  __int64 v343; // [rsp+310h] [rbp-1A8h]
  unsigned __int64 v344; // [rsp+318h] [rbp-1A0h]
  _QWORD *v345; // [rsp+320h] [rbp-198h]
  __int64 v346; // [rsp+328h] [rbp-190h]
  struct _TEB *v347; // [rsp+330h] [rbp-188h]
  __int128 v348; // [rsp+338h] [rbp-180h]
  __int128 v349; // [rsp+348h] [rbp-170h]
  __int128 v350; // [rsp+358h] [rbp-160h]
  __int128 v351; // [rsp+368h] [rbp-150h]
  __int128 v352; // [rsp+378h] [rbp-140h]
  __int128 v353; // [rsp+388h] [rbp-130h]
  __int128 v354; // [rsp+398h] [rbp-120h]
  __int128 v355; // [rsp+3A8h] [rbp-110h]
  __int128 v356; // [rsp+3B8h] [rbp-100h]
  __int128 v357; // [rsp+3C8h] [rbp-F0h]
  char *v358; // [rsp+3D8h] [rbp-E0h]
  char *v359; // [rsp+3E0h] [rbp-D8h]
  unsigned __int64 v360; // [rsp+3E8h] [rbp-D0h]
  unsigned __int64 v361; // [rsp+3F0h] [rbp-C8h]
  __int64 v362; // [rsp+3F8h] [rbp-C0h]
  _QWORD *v363; // [rsp+400h] [rbp-B8h]
  struct _TEB *v364; // [rsp+408h] [rbp-B0h]
  __int64 v365; // [rsp+410h] [rbp-A8h]
  struct _TEB *v366; // [rsp+418h] [rbp-A0h]
  __int64 v367; // [rsp+420h] [rbp-98h]
  __int64 v368; // [rsp+428h] [rbp-90h]
  __int64 v369; // [rsp+430h] [rbp-88h]
  __int64 v370; // [rsp+438h] [rbp-80h]
  int v371; // [rsp+448h] [rbp-70h]
  int v372; // [rsp+458h] [rbp-60h]
  int v373; // [rsp+468h] [rbp-50h]
  int v374; // [rsp+478h] [rbp-40h]
  unsigned int v375; // [rsp+4C8h] [rbp+10h]
  unsigned __int64 v376; // [rsp+4D0h] [rbp+18h]
  unsigned __int64 v377; // [rsp+4D8h] [rbp+20h] BYREF

  v377 = a4;
  v376 = a3;
  v375 = a2;
  v6 = a4;
  v244 = a4;
  v328 = 0LL;
  v343 = 0LL;
  v243 = 1;
  v275 = 0LL;
  v329 = 0LL;
  v238 = 0;
  v324 = 0LL;
  v242 = 0LL;
  v271 = 0LL;
  v8 = 0;
  v344 = 0LL;
  v321 = 0LL;
  v9 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v243 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return RtlDebugAllocateHeap(Src, a2, a3);
    v236 = a3;
    if ( !a3 )
      v236 = 1LL;
    v6 = Src[33] & (Src[32] + v236);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v244 = v6;
    v377 = v6;
    v10 = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    v239 = v10;
    if ( (a2 & 0x3C000100) != 0 || (v237 = v6, Src[41]) )
    {
      v10 = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      v239 = v10;
      v237 = v6 + 16;
      v6 = v237;
      v244 = v237;
      v377 = v237;
    }
    v11 = v237 >> 4;
    v262 = v11;
  }
  else
  {
    v10 = 1;
    v239 = 1;
    v11 = a4 >> 4;
    v262 = a4 >> 4;
    if ( v9 < 2 )
    {
      v6 = a4 + 16;
      v244 = a4 + 16;
      v377 = a4 + 16;
      v11 = 2LL;
      v262 = 2LL;
    }
    *a6 = 3;
  }
  v12 = a2 & 0x800000;
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    v10 |= 8u;
    v239 = v10;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(Src[44]) )
    {
      ++*((_DWORD *)Src + 154);
    }
    else
    {
      if ( byte_1801CB8C8 )
      {
        v232 = NtCurrentTeb();
        v364 = v232;
        v232->LastStatusValue = -1073741420;
        v232->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC0000194);
        v104 = 0;
        v105 = 0LL;
        v106 = 0LL;
        goto LABEL_514;
      }
      v8 = 1;
      RtlEnterCriticalSection(Src[44]);
      v208 = *((_DWORD *)Src + 154) + 1;
      *((_DWORD *)Src + 154) = v208;
      v209 = *((_DWORD *)Src + 155) + 1;
      *((_DWORD *)Src + 155) = v209;
      if ( *((_BYTE *)Src + 418) != 2 )
      {
        if ( v208 < v209 )
        {
          v209 = 0;
          Src[77] = 0LL;
          v208 = 0;
        }
        if ( v209 >= v208 >> 4 )
          *((_DWORD *)Src + 30) |= 0x20000000u;
      }
    }
    v238 = 1;
    if ( (Src[15] & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(Src);
    a3 = v376;
  }
  if ( v11 > *((unsigned int *)Src + 37) )
  {
    if ( (Src[14] & 2) != 0 )
    {
      v210 = v6 + 48;
      v377 = v210 + 8;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v210 + 4103) & 0xFFFFFFFFFFFFF000uLL,
                           Src[72] - Src[83],
                           Src,
                           Src + 47) )
      {
        v211 = qword_1801C6F00;
        v367 = qword_1801C6F00;
        v368 = qword_1801C6F00;
        do
        {
          v212 = v211 ^ (v211 >> 12) ^ ((v211 ^ (v211 >> 12)) << 25) ^ ((v211 ^ (v211 >> 12) ^ ((v211 ^ (v211 >> 12)) << 25)) >> 27);
          v213 = v211;
          v211 = _InterlockedCompareExchange64(&qword_1801C6F00, v212, v211);
        }
        while ( v213 != v211 );
        v369 = 0x2545F4914F6CDD1DLL * v212;
        v370 = 0x2545F4914F6CDD1DLL * v212;
        v344 = (unsigned __int64)((29 * (_BYTE)v212) & 0xF) << 12;
        v214 = RtlpHpAllocVirtBlockCommitFirst(Src, &v377, v344, &v271);
        v106 = v214;
        if ( v214 )
        {
          v217 = v377;
          *(_WORD *)(v214 + 56) = v377 - v376;
          *(_BYTE *)(v214 + 58) = v10 | 2;
          *(_QWORD *)(v214 + 32) = v217;
          *(_QWORD *)(v214 + 40) = v271;
          *(_BYTE *)(v214 + 63) = 4;
          Src[74] += v217;
          v221 = 2147353472LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v215, a2, a3, v216) )
            v222 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v222 = 2147353472LL;
          if ( *(_BYTE *)v222 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(Src, v106, v217, 9LL);
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v222, v218, v219, v220) )
            v226 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v226 = 2147353472LL;
          if ( *(_BYTE *)v226 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v226, v223, v224, v225) )
              v221 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent((_DWORD)Src, v106, v217, 16 * Src[24], *(unsigned __int8 *)v221);
          }
          v229 = 2147353482LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v226, v223, v224, v225) )
            v230 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v230 = 2147353482LL;
          if ( *(_BYTE *)v230 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v230, a2, v227, v228) )
              v229 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent((_DWORD)Src, v106, v217, 16 * Src[24], *(unsigned __int8 *)v229);
          }
          if ( (Src[14] & 0x8000000) != 0 )
            *(_WORD *)(v106 + 16) = RtlLogStackBackTraceEx(1LL);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(v106 + 18) = RtlpUpdateTagEntry(
                                      (_DWORD)Src,
                                      (unsigned __int8)(v375 >> 18),
                                      0,
                                      *(_QWORD *)(v106 + 32) >> 4,
                                      1);
          if ( *((_DWORD *)Src + 31) )
          {
            *(_BYTE *)(v106 + 59) = *(_BYTE *)(v106 + 56) ^ *(_BYTE *)(v106 + 57) ^ *(_BYTE *)(v106 + 58);
            *(_DWORD *)(v106 + 56) ^= *((_DWORD *)Src + 34);
          }
          a3 = (unsigned __int64)(Src + 34);
          v231 = (__int64 *)Src[35];
          if ( (_QWORD *)*v231 == Src + 34 )
          {
            *(_QWORD *)v106 = a3;
            *(_QWORD *)(v106 + 8) = v231;
            *v231 = v106;
            Src[35] = v106;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, a3, 0, *v231, 0LL);
          }
          v105 = v106 + 64;
          v104 = v238;
        }
        else
        {
          v105 = 0LL;
          ++*((_DWORD *)Src + 158);
          v104 = v238;
        }
      }
      else
      {
        v105 = 0LL;
        v104 = v238;
        v106 = 0LL;
      }
      goto LABEL_514;
    }
    goto LABEL_384;
  }
  if ( !v12 )
  {
    if ( v9 >= *((unsigned __int16 *)Src + 216) )
    {
      if ( a3 <= RtlpLargestLfhBlock && (*((_BYTE *)Src + 418) != 2 || !Src[51]) )
      {
        v204 = *((_BYTE *)Src + 419) == 2;
        goto LABEL_455;
      }
    }
    else if ( a3 <= RtlpLargestLfhBlock )
    {
      v13 = v9 & 7;
      v14 = v9 >> 3;
      if ( ((1 << (v9 & 7)) & *((unsigned __int8 *)Src + (v9 >> 3) + 434)) == 0 )
      {
        v15 = (unsigned __int16 *)(Src[53] + 2 * v9);
        v321 = v15;
        v16 = *v15 + 33;
        *v15 = v16;
        if ( !v8 && (v16 & 0x1Fu) <= 0x10 )
        {
          a3 = 65280LL;
          if ( v16 <= 0xFF00u )
            goto LABEL_21;
          a3 = v376;
        }
        v205 = a3;
        if ( !a3 )
          v205 = 1LL;
        if ( *((_BYTE *)Src + 418) == 2 )
          v206 = Src[51];
        else
          v206 = 0LL;
        LFHContext = RtlpGetLFHContext(v206, v205);
        if ( LFHContext != 0xFFFF )
        {
          *v15 = LFHContext;
          *((_BYTE *)Src + v14 + 434) |= 1 << v13;
          ++*((_DWORD *)Src + 164);
          goto LABEL_21;
        }
        if ( *((_BYTE *)Src + 418) != 2 )
        {
LABEL_456:
          *((_DWORD *)Src + 30) |= 0x20000000u;
          goto LABEL_21;
        }
        v204 = Src[51] == 0LL;
LABEL_455:
        if ( !v204 )
          goto LABEL_21;
        goto LABEL_456;
      }
    }
  }
LABEL_21:
  if ( !a5 || (v17 = *a5) == 0LL )
  {
    v275 = (char *)(Src + 42);
    for ( i = (__int64 *)Src[39]; ; i = (__int64 *)*i )
    {
      v19 = *((unsigned int *)i + 2);
      if ( v11 < v19 )
      {
        v20 = v11;
        goto LABEL_28;
      }
      if ( !*i )
        break;
    }
    v20 = v19 - 1;
LABEL_28:
    v323 = i;
    for ( j = v20; ; j = v20 )
    {
      v21 = (unsigned int)(v20 - *((_DWORD *)i + 6));
      v22 = 0LL;
      v23 = (char *)i[4];
      v24 = (char *)*((_QWORD *)v23 + 1);
      if ( v23 == v24 )
      {
        v22 = (char *)i[4];
      }
      else
      {
        a3 = (unsigned __int64)(v24 - 16);
        v349 = 0LL;
        v25 = *((_DWORD *)v24 - 2);
        v299 = v25;
        v300 = v25;
        DWORD2(v349) = v25;
        v26 = v25;
        if ( *((_DWORD *)Src + 31) )
        {
          DWORD2(v349) = *((_DWORD *)Src + 34) ^ v25;
          v26 = WORD4(v349);
          if ( BYTE11(v349) != (BYTE8(v349) ^ (unsigned __int8)(BYTE9(v349) ^ BYTE10(v349))) )
            RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
        }
        v27 = v26;
        v11 = v262;
        v301 = v262 - v27;
        if ( (int)v262 - v27 > 0 )
        {
          v22 = v23;
        }
        else
        {
          v28 = *(char **)v23;
          v350 = 0LL;
          v29 = *((_DWORD *)v28 - 2);
          v303 = v29;
          v304 = v29;
          DWORD2(v350) = v29;
          a3 = (unsigned __int16)v29;
          if ( *((_DWORD *)Src + 31) )
          {
            v30 = *((_DWORD *)Src + 34) ^ v29;
            DWORD2(v350) = v30;
            a3 = (unsigned __int16)v30;
            if ( HIBYTE(v30) != ((unsigned __int8)v30 ^ (unsigned __int8)(BYTE1(v30) ^ BYTE2(v30))) )
            {
              RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v28 - 16, 0, 0LL, 0LL);
              a3 = (unsigned __int16)v30;
            }
          }
          v305 = v262 - (unsigned __int16)a3;
          if ( v305 <= 0 )
          {
            v22 = *(char **)v23;
          }
          else if ( !*i && j == *((_DWORD *)i + 2) - 1 )
          {
            if ( *((_DWORD *)i + 3) )
              v21 = (unsigned int)(2 * v21);
            v279 = v21;
            for ( k = *(char **)(i[6] + 8 * v21); v23 != k; k = *(char **)k )
            {
              v351 = 0LL;
              v108 = *((_DWORD *)k - 2);
              v306 = v108;
              v307 = v108;
              DWORD2(v351) = v108;
              a3 = (unsigned __int16)v108;
              if ( *((_DWORD *)Src + 31) )
              {
                v109 = *((_DWORD *)Src + 34) ^ v108;
                DWORD2(v351) = v109;
                a3 = (unsigned __int16)v109;
                if ( HIBYTE(v109) != ((unsigned __int8)v109 ^ (unsigned __int8)(BYTE1(v109) ^ BYTE2(v109))) )
                {
                  RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)k - 16, 0, 0LL, 0LL);
                  a3 = (unsigned __int16)v109;
                }
              }
              v308 = v262 - (unsigned __int16)a3;
              if ( v308 <= 0 )
              {
                v22 = k;
                break;
              }
            }
          }
          else
          {
            v274 = 0LL;
            v31 = (unsigned int)v21 >> 5;
            a3 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
            v32 = (unsigned int *)(i[5] + 4 * v31);
            v274 = v32;
            v33 = *v32 & (-1 << (v21 & 0x1F));
            while ( !v33 )
            {
              if ( (unsigned int)v31 > (unsigned int)a3 )
              {
                v22 = 0LL;
                goto LABEL_48;
              }
              v274 = ++v32;
              v33 = *v32;
              LODWORD(v31) = v31 + 1;
            }
            if ( (_WORD)v33 )
            {
              if ( (_BYTE)v33 )
                v34 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v33];
              else
                v34 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v33)] + 8;
            }
            else if ( (v33 & 0xFF0000) != 0 )
            {
              v34 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v33)] + 16;
            }
            else
            {
              v34 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v33 >> 24] + 24;
            }
            v35 = (unsigned int)(v34 + 32 * v31);
            if ( *((_DWORD *)i + 3) )
              v35 = (unsigned int)(2 * v35);
            v309 = v35;
            v22 = *(char **)(i[6] + 8 * v35);
          }
        }
      }
LABEL_48:
      v358 = v22;
      if ( v22 )
        break;
      i = (__int64 *)*i;
      v20 = *((_DWORD *)i + 6);
    }
    v359 = v22;
    v324 = v22;
    if ( v275 != v22 )
    {
      v36 = (__int64)(v22 - 16);
      v277 = v22 - 16;
      if ( *((_DWORD *)Src + 31) )
      {
        *((_DWORD *)v22 - 2) ^= *((_DWORD *)Src + 34);
        if ( *(v22 - 5) != ((unsigned __int8)*((_DWORD *)v22 - 2) ^ (unsigned __int8)(BYTE1(*((_DWORD *)v22 - 2)) ^ HIWORD(*((_DWORD *)v22 - 2)))) )
          RtlpAnalyzeHeapFailure(Src, v22 - 16);
      }
      v37 = *((unsigned __int16 *)v22 - 4);
      if ( v37 >= v11 )
      {
        v38 = *(_QWORD *)v22;
        v264 = *(_QWORD *)v22;
        v39 = (__int64 *)*((_QWORD *)v22 + 1);
        v256 = v39;
        v40 = *(_QWORD *)(*(_QWORD *)v22 + 8LL);
        v41 = *v39;
        if ( (char *)*v39 != v22 || v41 != v40 )
        {
          RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v22, v40, v41, 0LL);
          goto LABEL_177;
        }
        Src[24] -= v37;
        v42 = (__int64 *)Src[39];
        if ( v42 )
        {
          v43 = *((unsigned __int16 *)v22 - 4);
          while ( 1 )
          {
            v44 = *((unsigned int *)v42 + 2);
            if ( v43 < v44 )
            {
              a3 = (unsigned int)(v44 - 1);
              goto LABEL_63;
            }
            if ( !*v42 )
              break;
            v42 = (__int64 *)*v42;
          }
          a3 = (unsigned int)(v44 - 1);
          LODWORD(v43) = v44 - 1;
LABEL_63:
          v325 = v42;
          v265 = *(unsigned __int16 *)(v36 + 8);
          v45 = v43 - *((_DWORD *)v42 + 6);
          v46 = 2 * v45;
          if ( !*((_DWORD *)v42 + 3) )
            v46 = v45;
          v254 = v46;
          v310 = v46;
          v260 = (char **)(v42[6] + 8 * v46);
          v47 = *v260;
          --*((_DWORD *)v42 + 4);
          if ( (_DWORD)v43 == (_DWORD)a3 )
            --*((_DWORD *)v42 + 5);
          if ( v47 == v22 )
          {
            if ( !*v42 )
              LODWORD(v44) = a3;
            v48 = *(char **)v22;
            v49 = (char *)v42[4];
            if ( (unsigned int)v43 >= (unsigned int)v44 )
            {
              if ( v48 != v49 )
              {
                *v260 = v48;
                goto LABEL_78;
              }
              *v260 = 0LL;
              v52 = (_DWORD *)(v42[5] + 4 * ((unsigned __int64)v45 >> 5));
            }
            else
            {
              if ( v48 != v49 )
              {
                v352 = 0LL;
                v50 = *((_DWORD *)v48 - 2);
                v311 = v50;
                v312 = v50;
                DWORD2(v352) = v50;
                a3 = (unsigned __int16)v50;
                if ( *((_DWORD *)Src + 31) )
                {
                  v51 = *((_DWORD *)Src + 34) ^ v50;
                  DWORD2(v352) = v51;
                  a3 = (unsigned __int16)v51;
                  if ( HIBYTE(v51) != ((unsigned __int8)v51 ^ (unsigned __int8)(BYTE1(v51) ^ BYTE2(v51))) )
                  {
                    RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v48 - 16, 0, 0LL, 0LL);
                    a3 = (unsigned __int16)v51;
                    v38 = v264;
                    v39 = v256;
                    LODWORD(v46) = v254;
                  }
                }
                v313 = v265 - (unsigned __int16)a3;
                if ( v265 == (unsigned __int16)a3 )
                {
                  *(_QWORD *)(v42[6] + 8LL * (unsigned int)v46) = v48;
                  goto LABEL_78;
                }
              }
              *(_QWORD *)(v42[6] + 8LL * (unsigned int)v46) = 0LL;
              v52 = (_DWORD *)(v42[5] + 4 * ((unsigned __int64)v45 >> 5));
            }
            *v52 &= ~(1 << (v45 & 0x1F));
          }
        }
LABEL_78:
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
        if ( (*(_BYTE *)(v36 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v36, a3) )
        {
LABEL_293:
          LOBYTE(v153) = 1;
          RtlpDeCommitFreeBlock(Src, v36, *(unsigned __int16 *)(v36 + 8), v153);
          v104 = v238;
          goto LABEL_164;
        }
LABEL_79:
        v53 = *(_BYTE *)(v36 + 10);
        v54 = v243;
        if ( !v243 && (v53 & 4) != 0 )
        {
          v55 = 16LL * *(unsigned __int16 *)(v36 + 8) - 32;
          if ( (v53 & 2) != 0 && v55 > 4 )
            v55 = 16LL * *(unsigned __int16 *)(v36 + 8) - 36;
          v56 = RtlCompareMemoryUlong(v36 + 32, v55, 4277075694LL);
          if ( v56 != v55 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v36,
              (const void *)(v56 + v36 + 32));
            if ( NtCurrentPeb()->BeingDebugged )
            {
              RtlpHeapInvalidBadAddress = v36;
              __debugbreak();
              RtlpHeapInvalidBreakPoint = 0;
            }
          }
          v54 = 0;
        }
        v328 = v36;
        if ( (*(_BYTE *)(v36 + 10) & 1) != 0 )
        {
          RtlpLogHeapFailure(3, (_DWORD)Src, v36, 0, 0LL, 0LL);
          v104 = v238;
          goto LABEL_164;
        }
        *(_BYTE *)(v36 + 10) = v239;
        v57 = *(unsigned __int16 *)(v36 + 8) - v11;
        v329 = v57;
        *(_WORD *)(v36 + 8) = v11;
        v58 = v376;
        v59 = v244 - v376;
        v360 = v244 - v376;
        if ( v244 - v376 >= 0x3F )
        {
          *(_QWORD *)(v36 + 16 * v11) = v59;
          *(_BYTE *)(v36 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v36 + 15) = v59;
        }
        *(_BYTE *)(v36 + 11) = 0;
        if ( v57 )
        {
          if ( v57 != 1 )
          {
            v60 = v54 == 0;
            v240 = v54 == 0;
            v314 = v54 == 0;
            v61 = *(unsigned __int8 *)(v36 + 14);
            if ( (_BYTE)v61 )
            {
              v62 = (_QWORD *)((v36 & 0xFFFFFFFFFFFF0000uLL) + ((1 - v61) << 16));
              v330 = v62;
            }
            else
            {
              v330 = Src;
              v62 = Src;
            }
            v338 = v57;
            v63 = v36 + 16 * v11;
            v247 = 0;
            *(_BYTE *)(v63 + 10) = v53;
            *(_BYTE *)(v63 + 15) = 0;
            *(_WORD *)(v63 + 12) = *((_WORD *)Src + 70) ^ v11;
            v64 = (_QWORD *)v62[5];
            if ( v64 == v62 )
            {
              LOBYTE(v65) = 0;
            }
            else
            {
              v65 = ((v63 - (unsigned __int64)v62) >> 16) + 1;
              if ( v65 >= 0xFE )
              {
                RtlpLogHeapFailure(3, (_DWORD)v64, v63, (_DWORD)v62, 0LL, 0LL);
                v60 = v240;
              }
            }
            *(_BYTE *)(v63 + 14) = v65;
            *(_BYTE *)(v63 + 11) = 0;
            *(_WORD *)(v63 + 8) = v57;
            while ( 1 )
            {
              v66 = v63 + 16 * v57;
              if ( ((*(_BYTE *)(v66 + 10) ^ (unsigned __int8)(*((_BYTE *)Src + 138) & (*((_DWORD *)Src + 31) >> 20))) & 1) != 0 )
              {
                *(_WORD *)(v66 + 12) = *((_WORD *)Src + 70) ^ v57;
                if ( !v60 )
                {
                  v67 = (unsigned __int16)v57;
                  v362 = (unsigned __int16)v57;
                  *(_BYTE *)(v63 + 10) = 0;
                  *(_BYTE *)(v63 + 15) = 0;
                  v68 = Src + 42;
                  v69 = (__int64 *)Src[39];
                  if ( v69 )
                  {
                    while ( 1 )
                    {
                      v70 = *((unsigned int *)v69 + 2);
                      if ( (unsigned __int16)v57 < v70 )
                      {
                        v71 = (unsigned __int16)v57;
                        goto LABEL_108;
                      }
                      if ( !*v69 )
                        break;
                      v69 = (__int64 *)*v69;
                    }
                    v71 = v70 - 1;
LABEL_108:
                    for ( m = v71; ; m = v71 )
                    {
                      v241 = v71 - *((_DWORD *)v69 + 6);
                      v72 = 0LL;
                      v73 = (_QWORD *)v69[4];
                      v248 = v73;
                      v74 = (_QWORD *)v73[1];
                      if ( v73 == v74 )
                      {
                        v72 = (_QWORD *)v69[4];
                      }
                      else
                      {
                        v353 = 0LL;
                        v75 = *((_DWORD *)v74 - 2);
                        v315 = v75;
                        v316 = v75;
                        DWORD2(v353) = v75;
                        v76 = v75;
                        if ( *((_DWORD *)Src + 31) )
                        {
                          v77 = *((_DWORD *)Src + 34) ^ v75;
                          DWORD2(v353) = v77;
                          v76 = v77;
                          if ( HIBYTE(v77) != ((unsigned __int8)v77 ^ (unsigned __int8)(BYTE1(v77) ^ BYTE2(v77))) )
                          {
                            RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v74 - 16, 0, 0LL, 0LL);
                            v76 = v77;
                            v73 = v248;
                          }
                        }
                        v317 = v67 - v76;
                        if ( v317 > 0 )
                        {
                          v72 = v73;
                        }
                        else
                        {
                          v78 = *v73;
                          v354 = 0LL;
                          v79 = *(_DWORD *)(v78 - 8);
                          v318 = v79;
                          v319 = v79;
                          DWORD2(v354) = v79;
                          v80 = v79;
                          if ( *((_DWORD *)Src + 31) )
                          {
                            v81 = *((_DWORD *)Src + 34) ^ v79;
                            DWORD2(v354) = v81;
                            v80 = v81;
                            if ( HIBYTE(v81) != ((unsigned __int8)v81 ^ (unsigned __int8)(BYTE1(v81) ^ BYTE2(v81))) )
                            {
                              RtlpLogHeapFailure(3, (_DWORD)Src, v78 - 16, 0, 0LL, 0LL);
                              v80 = v81;
                              v73 = v248;
                            }
                          }
                          v320 = v67 - v80;
                          if ( v320 <= 0 )
                          {
                            v72 = (_QWORD *)*v73;
                          }
                          else if ( !*v69 && m == *((_DWORD *)v69 + 2) - 1 )
                          {
                            v112 = *((_DWORD *)v69 + 3) ? 2 * v241 : v241;
                            v322 = v112;
                            for ( n = *(_QWORD **)(v69[6] + 8 * v112); ; n = (_QWORD *)*n )
                            {
                              v246 = n;
                              if ( v73 == n )
                                break;
                              v355 = 0LL;
                              v114 = *((_DWORD *)n - 2);
                              v326 = v114;
                              v331 = v114;
                              DWORD2(v355) = v114;
                              v115 = v114;
                              if ( *((_DWORD *)Src + 31) )
                              {
                                v116 = *((_DWORD *)Src + 34) ^ v114;
                                DWORD2(v355) = v116;
                                v115 = v116;
                                if ( HIBYTE(v116) != ((unsigned __int8)v116 ^ (unsigned __int8)(BYTE1(v116) ^ BYTE2(v116))) )
                                {
                                  RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)n - 16, 0, 0LL, 0LL);
                                  v115 = v116;
                                  v73 = v248;
                                }
                                n = v246;
                              }
                              v332 = v67 - v115;
                              if ( v332 <= 0 )
                              {
                                v72 = n;
                                break;
                              }
                            }
                          }
                          else
                          {
                            v272 = 0LL;
                            v82 = v241 >> 5;
                            v83 = ((unsigned int)(*((_DWORD *)v69 + 2) - *((_DWORD *)v69 + 6)) >> 5) - 1;
                            v84 = (unsigned int *)(v69[5] + 4 * v82);
                            v272 = v84;
                            v85 = *v84 & (-1 << (v241 & 0x1F));
                            while ( !v85 )
                            {
                              if ( (unsigned int)v82 > v83 )
                              {
                                v72 = 0LL;
                                goto LABEL_128;
                              }
                              v272 = ++v84;
                              v85 = *v84;
                              LODWORD(v82) = v82 + 1;
                            }
                            if ( (_WORD)v85 )
                            {
                              if ( (_BYTE)v85 )
                                v86 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v85];
                              else
                                v86 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v85)] + 8;
                            }
                            else if ( (v85 & 0xFF0000) != 0 )
                            {
                              v86 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v85)] + 16;
                            }
                            else
                            {
                              v86 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v85 >> 24] + 24;
                            }
                            v87 = (unsigned int)(v86 + 32 * v82);
                            if ( *((_DWORD *)v69 + 3) )
                              v87 = (unsigned int)(2 * v87);
                            v333 = v87;
                            v72 = *(_QWORD **)(v69[6] + 8 * v87);
                          }
                        }
                      }
LABEL_128:
                      v363 = v72;
                      if ( v72 )
                        break;
                      v69 = (__int64 *)*v69;
                      v71 = *((_DWORD *)v69 + 6);
                    }
                    v345 = v72;
                    v68 = Src + 42;
                  }
                  else
                  {
                    v72 = (_QWORD *)*v68;
                  }
                  while ( v68 != v72 )
                  {
                    if ( *((_DWORD *)Src + 31) )
                    {
                      v88 = *((_DWORD *)v72 - 2);
                      v334 = v88;
                      v336 = v88;
                      v371 = v88;
                      if ( (v88 & *((_DWORD *)Src + 31)) != 0 )
                      {
                        v88 ^= *((_DWORD *)Src + 34);
                        v371 = v88;
                      }
                      v89 = v88;
                    }
                    else
                    {
                      v89 = *((_WORD *)v72 - 4);
                    }
                    if ( v67 <= v89 )
                      break;
                    v72 = (_QWORD *)*v72;
                    v68 = Src + 42;
                  }
                  v90 = (_QWORD *)(v63 + 16);
                  v91 = (__int64 *)v72[1];
                  if ( (_QWORD *)*v91 == v72 )
                  {
                    *v90 = v72;
                    *(_QWORD *)(v63 + 24) = v91;
                    *v91 = (__int64)v90;
                    v72[1] = v90;
                  }
                  else
                  {
                    RtlpLogHeapFailure(13, 0, (_DWORD)v72, 0, *v91, 0LL);
                  }
                  Src[24] += *(unsigned __int16 *)(v63 + 8);
                  v92 = (__int64 *)Src[39];
                  if ( v92 )
                  {
                    v93 = *(unsigned __int16 *)(v63 + 8);
                    while ( 1 )
                    {
                      v94 = *((unsigned int *)v92 + 2);
                      if ( v93 < v94 )
                      {
                        v95 = v94 - 1;
                        goto LABEL_144;
                      }
                      if ( !*v92 )
                        break;
                      v92 = (__int64 *)*v92;
                    }
                    v95 = v94 - 1;
                    LODWORD(v93) = v94 - 1;
LABEL_144:
                    v96 = *(unsigned __int16 *)(v63 + 8);
                    v269 = v96;
                    v97 = v93 - *((_DWORD *)v92 + 6);
                    v98 = 2 * v97;
                    if ( !*((_DWORD *)v92 + 3) )
                      v98 = v97;
                    v302 = v98;
                    ++*((_DWORD *)v92 + 4);
                    v99 = *(_QWORD *)(v92[6] + 8 * v98);
                    v266 = v99;
                    if ( (_DWORD)v93 == v95 )
                      ++*((_DWORD *)v92 + 5);
                    if ( !v99 )
                      goto LABEL_149;
                    v356 = 0LL;
                    v110 = *(_DWORD *)(v99 - 16 + 8);
                    v280 = v110;
                    v281 = v110;
                    DWORD2(v356) = v110;
                    v111 = v110;
                    if ( *((_DWORD *)Src + 31) )
                    {
                      DWORD2(v356) = *((_DWORD *)Src + 34) ^ v110;
                      v111 = WORD4(v356);
                      if ( BYTE11(v356) != (BYTE8(v356) ^ (unsigned __int8)(BYTE9(v356) ^ BYTE10(v356))) )
                      {
                        RtlpLogHeapFailure(3, (_DWORD)Src, v99 - 16, 0, 0LL, 0LL);
                        v111 = WORD4(v356);
                        v99 = v266;
                        v96 = v269;
                      }
                    }
                    v282 = v96 - v111;
                    if ( v282 <= 0 )
LABEL_149:
                      *(_QWORD *)(v92[6] + 8 * v98) = v90;
                    if ( !v99 )
                    {
                      v100 = (_DWORD *)(v92[5] + 4 * ((unsigned __int64)v97 >> 5));
                      *v100 |= 1 << (v97 & 0x1F);
                    }
                  }
                  if ( *((_DWORD *)Src + 31) )
                  {
                    *(_BYTE *)(v63 + 11) = *(_BYTE *)(v63 + 8) ^ *(_BYTE *)(v63 + 9) ^ *(_BYTE *)(v63 + 10);
                    *(_DWORD *)(v63 + 8) ^= *((_DWORD *)Src + 34);
                  }
                  goto LABEL_154;
                }
                *(_BYTE *)(v63 + 10) &= 0xF0u;
                *(_BYTE *)(v63 + 15) = 0;
                if ( (Src[14] & 0x40) != 0 )
                {
                  v175 = (_DWORD *)(v63 + 32);
                  v335 = v63 + 32;
                  v176 = (16 * (unsigned __int64)(unsigned __int16)v57 - 32) >> 2;
                  v273 = v176;
                  if ( v176 )
                  {
                    if ( ((unsigned __int8)v175 & 4) != 0 )
                    {
                      *v175 = -17891602;
                      v273 = --v176;
                      if ( v176 )
                      {
                        v175 = (_DWORD *)(v63 + 36);
                        v335 = v63 + 36;
                        goto LABEL_339;
                      }
                    }
                    else
                    {
LABEL_339:
                      memset64(v175, 0xFEEEFEEEFEEEFEEEuLL, v176 >> 1);
                      if ( (v176 & 1) != 0 )
                        v175[v176 - 1] = -17891602;
                    }
                  }
                  *(_BYTE *)(v63 + 10) |= 4u;
                }
                v177 = Src + 42;
                if ( Src[39] )
                  Entry = (_QWORD *)RtlpFindEntry(Src, (unsigned __int16)v57);
                else
                  Entry = (_QWORD *)*v177;
                while ( v177 != Entry )
                {
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v189 = *((_DWORD *)Entry - 2);
                    v283 = v189;
                    v284 = v189;
                    v372 = v189;
                    if ( (v189 & *((_DWORD *)Src + 31)) != 0 )
                    {
                      v189 ^= *((_DWORD *)Src + 34);
                      v372 = v189;
                    }
                    v190 = v189;
                  }
                  else
                  {
                    v190 = *((_WORD *)Entry - 4);
                  }
                  if ( (unsigned __int16)v57 <= (unsigned __int64)v190 )
                    break;
                  Entry = (_QWORD *)*Entry;
                }
                v179 = (_QWORD *)(v63 + 16);
                v180 = (__int64 *)Entry[1];
                if ( (_QWORD *)*v180 == Entry )
                {
                  *v179 = Entry;
                  *(_QWORD *)(v63 + 24) = v180;
                  *v180 = (__int64)v179;
                  Entry[1] = v179;
                }
                else
                {
                  RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v180, 0LL);
                }
                Src[24] += *(unsigned __int16 *)(v63 + 8);
                v181 = (__int64 **)Src[39];
                if ( v181 )
                {
                  v182 = *(unsigned __int16 *)(v63 + 8);
                  while ( 1 )
                  {
                    v183 = *((unsigned int *)v181 + 2);
                    if ( v182 < v183 )
                      break;
                    if ( !*v181 )
                    {
                      LODWORD(v182) = v183 - 1;
                      break;
                    }
                    v181 = (__int64 **)*v181;
                  }
                  LOBYTE(Entry) = 1;
                  RtlpHeapAddListEntry(
                    (_DWORD)Src,
                    (_DWORD)v181,
                    (_DWORD)Entry,
                    v63 + 16,
                    v182,
                    *(unsigned __int16 *)(v63 + 8));
                }
                if ( *((_DWORD *)Src + 31) )
                {
                  *(_BYTE *)(v63 + 11) = *(_BYTE *)(v63 + 8) ^ *(_BYTE *)(v63 + 9) ^ *(_BYTE *)(v63 + 10);
                  *(_DWORD *)(v63 + 8) ^= *((_DWORD *)Src + 34);
                }
                goto LABEL_154;
              }
              if ( *((_DWORD *)Src + 31) )
              {
                *(_DWORD *)(v66 + 8) ^= *((_DWORD *)Src + 34);
                if ( HIBYTE(*(_DWORD *)(v66 + 8)) != ((unsigned __int8)*(_DWORD *)(v66 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v66 + 8)) ^ HIWORD(*(_DWORD *)(v66 + 8)))) )
                  RtlpAnalyzeHeapFailure(Src, v63 + 16 * v57);
              }
              v117 = (_QWORD *)(v66 + 16);
              v118 = *(_QWORD *)(v66 + 16);
              v250 = v118;
              v119 = *(__int64 **)(v66 + 24);
              v270 = v119;
              v120 = *(_QWORD *)(v118 + 8);
              v121 = *v119;
              if ( *v119 != v66 + 16 || v121 != v120 )
              {
                RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v117, v120, v121, 0LL);
                goto LABEL_305;
              }
              Src[24] -= *(unsigned __int16 *)(v66 + 8);
              v122 = (__int64 *)Src[39];
              if ( v122 )
              {
                v123 = *(unsigned __int16 *)(v66 + 8);
                while ( 1 )
                {
                  v124 = *((unsigned int *)v122 + 2);
                  if ( v123 < v124 )
                  {
                    v125 = v124 - 1;
                    goto LABEL_239;
                  }
                  if ( !*v122 )
                    break;
                  v122 = (__int64 *)*v122;
                }
                v125 = v124 - 1;
                LODWORD(v123) = v124 - 1;
LABEL_239:
                v337 = v122;
                v267 = *(unsigned __int16 *)(v66 + 8);
                v346 = *(unsigned __int16 *)(v66 + 8);
                v126 = v123 - *((_DWORD *)v122 + 6);
                v258 = v126;
                v127 = 2 * v126;
                if ( !*((_DWORD *)v122 + 3) )
                  v127 = v126;
                v249 = v127;
                v285 = v127;
                v252 = (_QWORD *)(v122[6] + 8 * v127);
                v128 = (_QWORD *)*v252;
                --*((_DWORD *)v122 + 4);
                if ( (_DWORD)v123 == v125 )
                  --*((_DWORD *)v122 + 5);
                if ( v128 == v117 )
                {
                  if ( !*v122 )
                    LODWORD(v124) = v125;
                  v117 = (_QWORD *)*v117;
                  v268 = v117;
                  if ( (unsigned int)v123 >= (unsigned int)v124 )
                  {
                    if ( v117 == (_QWORD *)v122[4] )
                    {
                      *v252 = 0LL;
                      v132 = (_DWORD *)(v122[5] + 4 * ((unsigned __int64)v126 >> 5));
                      goto LABEL_254;
                    }
                    *v252 = v117;
                  }
                  else
                  {
                    if ( v117 == (_QWORD *)v122[4] )
                      goto LABEL_253;
                    v357 = 0LL;
                    v129 = *((_DWORD *)v117 - 2);
                    v286 = v129;
                    v287 = v129;
                    DWORD2(v357) = v129;
                    v130 = v129;
                    if ( *((_DWORD *)Src + 31) )
                    {
                      v131 = *((_DWORD *)Src + 34) ^ v129;
                      DWORD2(v357) = v131;
                      v130 = v131;
                      if ( HIBYTE(v131) != ((unsigned __int8)v131 ^ (unsigned __int8)(BYTE1(v131) ^ BYTE2(v131))) )
                      {
                        RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v117 - 16, 0, 0LL, 0LL);
                        v130 = v131;
                        v118 = v250;
                        v119 = v270;
                        v117 = v268;
                      }
                    }
                    v288 = v267 - v130;
                    if ( v267 != v130 )
                    {
                      v126 = v258;
LABEL_253:
                      *(_QWORD *)(v122[6] + 8LL * v249) = 0LL;
                      v132 = (_DWORD *)(v122[5] + 4 * ((unsigned __int64)v126 >> 5));
LABEL_254:
                      *v132 &= ~(1 << (v126 & 0x1F));
                      goto LABEL_255;
                    }
                    *(_QWORD *)(v122[6] + 8LL * v249) = v117;
                  }
                }
              }
LABEL_255:
              *v119 = v118;
              *(_QWORD *)(v118 + 8) = v119;
              if ( (*(_BYTE *)(v66 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v63 + 16 * v57, v117) )
              {
                if ( v240 )
                {
                  v133 = *(_BYTE *)(v66 + 10);
                  if ( (v133 & 4) != 0 )
                  {
                    v276 = 0LL;
                    v134 = 16LL * *(unsigned __int16 *)(v66 + 8) - 32;
                    v276 = v134;
                    if ( (v133 & 2) != 0 && v134 > 4 )
                    {
                      v134 -= 4LL;
                      v276 = v134;
                    }
                    v259 = RtlCompareMemoryUlong(v66 + 32, v134, 4277075694LL);
                    if ( v259 != v134 )
                    {
                      if ( NtCurrentPeb()->Ldr )
                        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                      else
                        DbgPrint("HEAP: ");
                      DbgPrint(
                        "HEAP: Free Heap block %p modified at %p after it was freed\n",
                        (const void *)(v63 + 16 * v57),
                        (const void *)(v66 + v259 + 32));
                      RtlpBreakPointHeap();
                    }
                  }
                }
                *(_BYTE *)(v63 + 10) = *(_BYTE *)(v66 + 10);
                v135 = v57 + *(unsigned __int16 *)(v66 + 8);
                v338 = v135;
                if ( v135 <= 0xFF00 )
                {
                  *(_WORD *)(v63 + 8) = v135;
                  *(_WORD *)(v63 + 16 * v135 + 12) = *((_WORD *)Src + 70) ^ v135;
                  v136 = (unsigned __int16)v135;
                  if ( !v240 )
                  {
                    *(_BYTE *)(v63 + 10) = 0;
                    *(_BYTE *)(v63 + 15) = 0;
                    v137 = Src + 42;
                    if ( Src[39] )
                      v138 = (_QWORD *)RtlpFindEntry(Src, (unsigned __int16)v135);
                    else
                      v138 = (_QWORD *)*v137;
                    while ( v137 != v138 )
                    {
                      if ( *((_DWORD *)Src + 31) )
                      {
                        v139 = *((_DWORD *)v138 - 2);
                        v289 = v139;
                        v290 = v139;
                        v373 = v139;
                        if ( (v139 & *((_DWORD *)Src + 31)) != 0 )
                        {
                          v139 ^= *((_DWORD *)Src + 34);
                          v373 = v139;
                        }
                        v140 = v139;
                      }
                      else
                      {
                        v140 = *((_WORD *)v138 - 4);
                      }
                      if ( v136 <= v140 )
                        break;
                      v138 = (_QWORD *)*v138;
                    }
                    v141 = (_QWORD *)(v63 + 16);
                    v142 = (__int64 *)v138[1];
                    if ( (_QWORD *)*v142 == v138 )
                    {
                      *v141 = v138;
                      *(_QWORD *)(v63 + 24) = v142;
                      *v142 = (__int64)v141;
                      v138[1] = v141;
                    }
                    else
                    {
                      RtlpLogHeapFailure(13, 0, (_DWORD)v138, 0, *v142, 0LL);
                    }
                    Src[24] += *(unsigned __int16 *)(v63 + 8);
                    v143 = (__int64 *)Src[39];
                    if ( v143 )
                    {
                      v144 = *(unsigned __int16 *)(v63 + 8);
                      while ( 1 )
                      {
                        v145 = *((unsigned int *)v143 + 2);
                        if ( v144 < v145 )
                          break;
                        if ( !*v143 )
                        {
                          LODWORD(v144) = v145 - 1;
                          break;
                        }
                        v143 = (__int64 *)*v143;
                      }
                      v339 = v143;
                      LOBYTE(v138) = 1;
                      RtlpHeapAddListEntry(
                        (_DWORD)Src,
                        (_DWORD)v143,
                        (_DWORD)v138,
                        v63 + 16,
                        v144,
                        *(unsigned __int16 *)(v63 + 8));
                    }
                    if ( *((_DWORD *)Src + 31) )
                    {
                      *(_BYTE *)(v63 + 11) = *(_BYTE *)(v63 + 8) ^ *(_BYTE *)(v63 + 9) ^ *(_BYTE *)(v63 + 10);
                      *(_DWORD *)(v63 + 8) ^= *((_DWORD *)Src + 34);
                    }
                    goto LABEL_154;
                  }
                  *(_BYTE *)(v63 + 10) &= 0xF0u;
                  *(_BYTE *)(v63 + 15) = 0;
                  if ( (Src[14] & 0x40) != 0 )
                  {
                    v193 = (_DWORD *)(v63 + 32);
                    v340 = v63 + 32;
                    v194 = (16 * v136 - 32) >> 2;
                    v278 = v194;
                    if ( v194 )
                    {
                      if ( ((unsigned __int8)v193 & 4) != 0 )
                      {
                        *v193 = -17891602;
                        v278 = --v194;
                        if ( v194 )
                        {
                          v193 = (_DWORD *)(v63 + 36);
                          v340 = v63 + 36;
                          goto LABEL_420;
                        }
                      }
                      else
                      {
LABEL_420:
                        memset64(v193, 0xFEEEFEEEFEEEFEEEuLL, v194 >> 1);
                        if ( (v194 & 1) != 0 )
                          v193[v194 - 1] = -17891602;
                      }
                    }
                    *(_BYTE *)(v63 + 10) |= 4u;
                  }
                  v195 = Src + 42;
                  if ( Src[39] )
                    v196 = (_QWORD *)RtlpFindEntry(Src, v136);
                  else
                    v196 = (_QWORD *)*v195;
                  while ( v195 != v196 )
                  {
                    if ( *((_DWORD *)Src + 31) )
                    {
                      v202 = *((_DWORD *)v196 - 2);
                      v291 = v202;
                      v292 = v202;
                      v374 = v202;
                      if ( (v202 & *((_DWORD *)Src + 31)) != 0 )
                      {
                        v202 ^= *((_DWORD *)Src + 34);
                        v374 = v202;
                      }
                      v203 = v202;
                    }
                    else
                    {
                      v203 = *((_WORD *)v196 - 4);
                    }
                    if ( v136 <= v203 )
                      break;
                    v196 = (_QWORD *)*v196;
                  }
                  v197 = (_QWORD *)(v63 + 16);
                  v198 = (__int64 *)v196[1];
                  if ( (_QWORD *)*v198 == v196 )
                  {
                    *v197 = v196;
                    *(_QWORD *)(v63 + 24) = v198;
                    *v198 = (__int64)v197;
                    v196[1] = v197;
                  }
                  else
                  {
                    RtlpLogHeapFailure(13, 0, (_DWORD)v196, 0, *v198, 0LL);
                  }
                  Src[24] += *(unsigned __int16 *)(v63 + 8);
                  v199 = (__int64 *)Src[39];
                  if ( v199 )
                  {
                    v200 = *(unsigned __int16 *)(v63 + 8);
                    while ( 1 )
                    {
                      v201 = *((unsigned int *)v199 + 2);
                      if ( v200 < v201 )
                        break;
                      if ( !*v199 )
                      {
                        LODWORD(v200) = v201 - 1;
                        break;
                      }
                      v199 = (__int64 *)*v199;
                    }
                    v341 = v199;
                    LOBYTE(v201) = 1;
                    RtlpHeapAddListEntry(
                      (_DWORD)Src,
                      (_DWORD)v199,
                      v201,
                      v63 + 16,
                      v200,
                      *(unsigned __int16 *)(v63 + 8));
                  }
                  if ( *((_DWORD *)Src + 31) )
                  {
                    *(_BYTE *)(v63 + 11) = *(_BYTE *)(v63 + 8) ^ *(_BYTE *)(v63 + 9) ^ *(_BYTE *)(v63 + 10);
                    *(_DWORD *)(v63 + 8) ^= *((_DWORD *)Src + 34);
                  }
                  goto LABEL_154;
                }
                RtlpInsertFreeBlock(Src, v63);
LABEL_154:
                v58 = v376;
                goto LABEL_155;
              }
              LOBYTE(v191) = 1;
              RtlpDeCommitFreeBlock(Src, v63 + 16 * v57, *(unsigned __int16 *)(v66 + 8), v191);
LABEL_305:
              if ( v247 )
              {
                v163 = NtCurrentTeb();
                v347 = v163;
                v163->LastStatusValue = -1073741764;
                v163->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC000003C);
                goto LABEL_177;
              }
              v247 = 1;
              v60 = v240;
            }
          }
          ++*(_WORD *)(v36 + 8);
          v184 = v59 + 16;
          v361 = v184;
          if ( v184 >= 0x3F )
          {
            *(_QWORD *)(v36 + 16 * (v11 + 1)) = v184;
            *(_BYTE *)(v36 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v36 + 15) = v184;
          }
        }
LABEL_155:
        v101 = (_DWORD *)(v36 + 16);
        v242 = v36 + 16;
        v102 = *(_WORD *)(v36 + 8);
        a2 = v102;
        LOWORD(a2) = HIBYTE(v102);
        v103 = 16LL * v102;
        a3 = v103;
        if ( (*(_BYTE *)(v36 + 15) & 0x3F) == 0x3F )
        {
          a3 = v103 - 8;
          v103 -= 8LL;
        }
        if ( v243 )
        {
          if ( *((_DWORD *)Src + 31) )
          {
            *(_BYTE *)(v36 + 11) = HIBYTE(v102) ^ *(_BYTE *)(v36 + 10) ^ v102;
            *(_DWORD *)(v36 + 8) ^= *((_DWORD *)Src + 34);
          }
          v104 = v238;
          if ( v238 )
          {
            RtlpUpdateHeapWatermarks(Src, a2, a3);
            RtlLeaveCriticalSection(Src[44]);
            v101 = (_DWORD *)(v36 + 16);
            v104 = 0;
          }
          if ( (v375 & 8) != 0 )
            memset_thunk_772440563353939046(v101, 0, v103 - 8);
          goto LABEL_164;
        }
        if ( (v375 & 8) != 0 )
        {
          memset_thunk_772440563353939046((void *)(v36 + 16), 0, a3 - 8);
          v186 = Src + 14;
          v101 = (_DWORD *)(v36 + 16);
        }
        else
        {
          v186 = Src + 14;
          if ( (Src[14] & 0x40) != 0 )
          {
            a3 = v36 + 16;
            v342 = v36 + 16;
            a2 = (v58 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
            if ( a2 )
            {
              v187 = (char *)(Src + 14);
              if ( ((unsigned __int8)v101 & 4) != 0 )
              {
                *v101 = -1163005939;
                if ( !--a2 )
                  goto LABEL_371;
                a3 = v36 + 20;
                v342 = v36 + 20;
                v187 = (char *)(Src + 14);
              }
              memset64((void *)a3, 0xBAADF00DBAADF00DuLL, a2 >> 1);
              v186 = Src + 14;
              if ( (a2 & 1) != 0 )
              {
                *(_DWORD *)(a3 + 4 * a2 - 4) = -1163005939;
                v186 = v187;
              }
            }
          }
        }
LABEL_371:
        if ( (*v186 & 0x20) != 0 )
        {
          *(__m128i *)((char *)v101 + v58) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          *(_BYTE *)(v36 + 10) |= 4u;
        }
        *(_BYTE *)(v36 + 11) = 0;
        if ( (*(_BYTE *)(v36 + 10) & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v36);
          v343 = ExtraStuffPointer;
          *(_OWORD *)ExtraStuffPointer = 0LL;
          if ( (*(_DWORD *)v186 & 0x8000000) != 0 )
            *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
          NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
          if ( (NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(ExtraStuffPointer + 2) = RtlpUpdateTagEntry(
                                                  (_DWORD)Src,
                                                  (v375 >> 18) & 0xFFF,
                                                  0,
                                                  *(unsigned __int16 *)(v36 + 8),
                                                  0);
        }
        else
        {
          v294 = NtCurrentPeb()->NtGlobalFlag;
          if ( (v294 & 0x800) != 0 )
            *(_BYTE *)(v36 + 11) = RtlpUpdateTagEntry(
                                     (_DWORD)Src,
                                     (unsigned __int8)(v375 >> 18),
                                     0,
                                     *(unsigned __int16 *)(v36 + 8),
                                     0);
        }
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v36 + 11) = *(_BYTE *)(v36 + 8) ^ *(_BYTE *)(v36 + 9) ^ *(_BYTE *)(v36 + 10);
          *(_DWORD *)(v36 + 8) ^= *((_DWORD *)Src + 34);
          v104 = v238;
          goto LABEL_164;
        }
        goto LABEL_177;
      }
      if ( *((_DWORD *)Src + 31) )
      {
        *(v22 - 5) = BYTE1(v37) ^ *(v22 - 6) ^ v37;
        *((_DWORD *)v22 - 2) ^= *((_DWORD *)Src + 34);
      }
    }
    v154 = RtlpExtendHeap(Src, v244, a3);
    v36 = v154;
    v277 = (char *)v154;
    if ( v154 )
    {
      v155 = v154 + 16;
      v156 = *(_QWORD *)(v154 + 16);
      v157 = *(__int64 **)(v154 + 24);
      v158 = *(_QWORD *)(v156 + 8);
      v159 = *v157;
      if ( *v157 != v155 || v159 != v158 )
      {
        RtlpLogHeapFailure(13, (_DWORD)Src, v155, v158, v159, 0LL);
        v104 = v238;
        goto LABEL_164;
      }
      Src[24] -= *(unsigned __int16 *)(v36 + 8);
      v160 = (__int64 *)Src[39];
      if ( v160 )
      {
        v161 = *(unsigned __int16 *)(v36 + 8);
        while ( 1 )
        {
          v162 = *((unsigned int *)v160 + 2);
          if ( v161 < v162 )
            break;
          if ( !*v160 )
          {
            LODWORD(v161) = v162 - 1;
            break;
          }
          v160 = (__int64 *)*v160;
        }
        v327 = v160;
        v174 = v155;
        LOBYTE(v155) = 1;
        RtlpHeapRemoveListEntry((_DWORD)Src, (_DWORD)v160, v155, v174, v161, *(unsigned __int16 *)(v36 + 8));
      }
      *v157 = v156;
      *(_QWORD *)(v156 + 8) = v157;
      if ( (*(_BYTE *)(v36 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v36, v155) )
        goto LABEL_293;
      goto LABEL_79;
    }
LABEL_384:
    v105 = 0LL;
    v104 = v238;
    v106 = 0LL;
    goto LABEL_514;
  }
  v36 = (__int64)(v17 - 2);
  v277 = (char *)(v17 - 2);
  if ( *((_DWORD *)Src + 31) )
  {
    *((_DWORD *)v17 - 2) ^= *((_DWORD *)Src + 34);
    if ( *((_BYTE *)v17 - 5) != ((unsigned __int8)*((_DWORD *)v17 - 2) ^ (unsigned __int8)(BYTE1(*((_DWORD *)v17 - 2)) ^ HIWORD(*((_DWORD *)v17 - 2)))) )
      RtlpAnalyzeHeapFailure(Src, v17 - 2);
  }
  v146 = *v17;
  v253 = *v17;
  v147 = (__int64 *)v17[1];
  v251 = v147;
  v148 = *(_QWORD *)(*v17 + 8LL);
  v149 = *v147;
  if ( (_QWORD *)*v147 != v17 || v149 != v148 )
  {
    RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v17, v148, v149, 0LL);
    goto LABEL_361;
  }
  Src[24] -= *((unsigned __int16 *)v17 - 4);
  v150 = (__int64 *)Src[39];
  if ( v150 )
  {
    v151 = *((unsigned __int16 *)v17 - 4);
    while ( 1 )
    {
      v152 = *((unsigned int *)v150 + 2);
      if ( v151 < v152 )
      {
        a3 = (unsigned int)(v152 - 1);
        goto LABEL_312;
      }
      if ( !*v150 )
        break;
      v150 = (__int64 *)*v150;
    }
    a3 = (unsigned int)(v152 - 1);
    LODWORD(v151) = v152 - 1;
LABEL_312:
    v164 = *(unsigned __int16 *)(v36 + 8);
    v365 = *(unsigned __int16 *)(v36 + 8);
    v165 = v151 - *((_DWORD *)v150 + 6);
    v166 = 2 * v165;
    if ( !*((_DWORD *)v150 + 3) )
      v166 = v165;
    v295 = v166;
    v167 = 8 * v166;
    v263 = 8 * v166;
    v257 = (unsigned __int64 *)(8 * v166 + v150[6]);
    v168 = (_QWORD *)*v257;
    --*((_DWORD *)v150 + 4);
    if ( (_DWORD)v151 == (_DWORD)a3 )
      --*((_DWORD *)v150 + 5);
    if ( v168 == v17 )
    {
      if ( !*v150 )
        LODWORD(v152) = a3;
      a3 = *v17;
      v255 = *v17;
      v169 = v150[4];
      if ( (unsigned int)v151 >= (unsigned int)v152 )
      {
        if ( a3 == v169 )
        {
          *v257 = 0LL;
          v173 = (_DWORD *)(v150[5] + 4 * ((unsigned __int64)v165 >> 5));
          goto LABEL_327;
        }
        *v257 = a3;
      }
      else
      {
        if ( a3 == v169 )
          goto LABEL_326;
        v348 = 0LL;
        v170 = *(_DWORD *)(a3 - 16 + 8);
        v296 = v170;
        v297 = v170;
        DWORD2(v348) = v170;
        v171 = v170;
        if ( *((_DWORD *)Src + 31) )
        {
          v172 = *((_DWORD *)Src + 34) ^ v170;
          DWORD2(v348) = v172;
          if ( HIBYTE(v172) != ((unsigned __int8)v172 ^ (unsigned __int8)(BYTE1(v172) ^ BYTE2(v172))) )
          {
            RtlpLogHeapFailure(3, (_DWORD)Src, a3 - 16, 0, 0LL, 0LL);
            a3 = v255;
            v146 = v253;
            v147 = v251;
            v167 = v263;
          }
          v171 = v172;
        }
        if ( v164 - v171 )
        {
LABEL_326:
          *(_QWORD *)(v167 + v150[6]) = 0LL;
          v173 = (_DWORD *)(v150[5] + 4 * ((unsigned __int64)v165 >> 5));
LABEL_327:
          *v173 &= ~(1 << (v165 & 0x1F));
          goto LABEL_328;
        }
        *(_QWORD *)(v167 + v150[6]) = a3;
      }
    }
  }
LABEL_328:
  *v147 = v146;
  *(_QWORD *)(v146 + 8) = v147;
  if ( (*(_BYTE *)(v36 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v36, a3) )
    goto LABEL_79;
  LOBYTE(v192) = 1;
  RtlpDeCommitFreeBlock(Src, v36, *(unsigned __int16 *)(v36 + 8), v192);
LABEL_361:
  v185 = NtCurrentTeb();
  v366 = v185;
  v185->LastStatusValue = -1073741801;
  v185->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC0000017);
LABEL_177:
  v104 = v238;
LABEL_164:
  v105 = v242;
  v106 = 0LL;
LABEL_514:
  if ( v104 )
  {
    if ( v105 && !v106 )
      RtlpUpdateHeapWatermarks(Src, a2, a3);
    RtlLeaveCriticalSection(Src[44]);
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v234 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v234 = 2147353480LL;
  if ( *(_BYTE *)v234 && v105 )
  {
    if ( v106 )
      RtlpHeapLogRangeReserve(Src, v106 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v106 + 40));
  }
  return v105;
}
